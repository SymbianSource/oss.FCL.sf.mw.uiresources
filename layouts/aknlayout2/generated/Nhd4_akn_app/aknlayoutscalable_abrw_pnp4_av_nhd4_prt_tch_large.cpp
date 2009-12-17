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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00031087 };

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
0x4e69,	// (0x00035ef0) Screen

0x4e75,	// (0x00035efc) application_window_ParamLimits

0x4e75,	// (0x00035efc) application_window

0x06b9,	// (0x00031740) screen_g1

0xd262,	// (0x0003e2e9) area_bottom_pane_ParamLimits

0xd262,	// (0x0003e2e9) area_bottom_pane

0xd322,	// (0x0003e3a9) area_top_pane_ParamLimits

0xd322,	// (0x0003e3a9) area_top_pane

0xd3c0,	// (0x0003e447) main_pane_ParamLimits

0xd3c0,	// (0x0003e447) main_pane

0x06c3,	// (0x0003174a) misc_graphics

0x7629,	// (0x000386b0) battery_pane_ParamLimits

0x7629,	// (0x000386b0) battery_pane

0x2431,	// (0x000334b8) bg_status_flat_pane_g8

0x2439,	// (0x000334c0) bg_status_flat_pane_g9

0x1b97,	// (0x00032c1e) context_pane_ParamLimits

0x1b97,	// (0x00032c1e) context_pane

0x775d,	// (0x000387e4) navi_pane_ParamLimits

0x775d,	// (0x000387e4) navi_pane

0x77c9,	// (0x00038850) signal_pane_ParamLimits

0x77c9,	// (0x00038850) signal_pane

0x0008,

0xf8b7,	// (0x0004093e) bg_status_flat_pane_g

0x782e,	// (0x000388b5) status_pane_g1_ParamLimits

0x782e,	// (0x000388b5) status_pane_g1

0x7842,	// (0x000388c9) status_pane_g2_ParamLimits

0x7842,	// (0x000388c9) status_pane_g2

0x1bfc,	// (0x00032c83) status_pane_g3_ParamLimits

0x1bfc,	// (0x00032c83) status_pane_g3

0x0004,

0xf7e5,	// (0x0004086c) status_pane_g_ParamLimits

0xf7e5,	// (0x0004086c) status_pane_g

0x784e,	// (0x000388d5) title_pane_ParamLimits

0x784e,	// (0x000388d5) title_pane

0x788b,	// (0x00038912) uni_indicator_pane_ParamLimits

0x788b,	// (0x00038912) uni_indicator_pane

0x19b6,	// (0x00032a3d) bg_list_pane_ParamLimits

0x19b6,	// (0x00032a3d) bg_list_pane

0x5e01,	// (0x00036e88) find_pane

0x7141,	// (0x000381c8) listscroll_app_pane_ParamLimits

0x7141,	// (0x000381c8) listscroll_app_pane

0x19e2,	// (0x00032a69) listscroll_form_pane

0x5e09,	// (0x00036e90) listscroll_gen_pane_ParamLimits

0x5e09,	// (0x00036e90) listscroll_gen_pane

0x19e2,	// (0x00032a69) listscroll_set_pane

0x56be,	// (0x00036745) main_idle_act_pane

0x179c,	// (0x00032823) main_idle_trad_pane

0x179c,	// (0x00032823) main_list_empty_pane

0x19d6,	// (0x00032a5d) main_midp_pane

0x19fc,	// (0x00032a83) main_pane_g1_ParamLimits

0x19fc,	// (0x00032a83) main_pane_g1

0x714d,	// (0x000381d4) popup_ai_message_window_ParamLimits

0x714d,	// (0x000381d4) popup_ai_message_window

0x71cb,	// (0x00038252) popup_fep_china_uni_window_ParamLimits

0x71cb,	// (0x00038252) popup_fep_china_uni_window

0x1a3c,	// (0x00032ac3) popup_fep_japan_candidate_window_ParamLimits

0x1a3c,	// (0x00032ac3) popup_fep_japan_candidate_window

0x1a5a,	// (0x00032ae1) popup_fep_japan_predictive_window_ParamLimits

0x1a5a,	// (0x00032ae1) popup_fep_japan_predictive_window

0x7225,	// (0x000382ac) popup_find_window

0x7232,	// (0x000382b9) popup_grid_graphic_window_ParamLimits

0x7232,	// (0x000382b9) popup_grid_graphic_window

0x1a8a,	// (0x00032b11) popup_large_graphic_colour_window

0x7258,	// (0x000382df) popup_menu_window_ParamLimits

0x7258,	// (0x000382df) popup_menu_window

0x7412,	// (0x00038499) popup_note_image_window

0x73fe,	// (0x00038485) popup_note_wait_window_ParamLimits

0x73fe,	// (0x00038485) popup_note_wait_window

0x73fe,	// (0x00038485) popup_note_window_ParamLimits

0x73fe,	// (0x00038485) popup_note_window

0x7468,	// (0x000384ef) popup_query_code_window_ParamLimits

0x7468,	// (0x000384ef) popup_query_code_window

0x1ab0,	// (0x00032b37) popup_query_data_code_window_ParamLimits

0x1ab0,	// (0x00032b37) popup_query_data_code_window

0x747c,	// (0x00038503) popup_query_data_window_ParamLimits

0x747c,	// (0x00038503) popup_query_data_window

0x7494,	// (0x0003851b) popup_query_sat_info_window_ParamLimits

0x7494,	// (0x0003851b) popup_query_sat_info_window

0x74cd,	// (0x00038554) popup_snote_single_graphic_window_ParamLimits

0x74cd,	// (0x00038554) popup_snote_single_graphic_window

0x74cd,	// (0x00038554) popup_snote_single_text_window_ParamLimits

0x74cd,	// (0x00038554) popup_snote_single_text_window

0x1ac7,	// (0x00032b4e) popup_sub_window_general

0x1b0d,	// (0x00032b94) popup_window_general_ParamLimits

0x1b0d,	// (0x00032b94) popup_window_general

0x1b22,	// (0x00032ba9) power_save_pane

0xdb07,	// (0x0003eb8e) control_pane_g1_ParamLimits

0xdb07,	// (0x0003eb8e) control_pane_g1

0xdb30,	// (0x0003ebb7) control_pane_g2_ParamLimits

0xdb30,	// (0x0003ebb7) control_pane_g2

0x1990,	// (0x00032a17) control_pane_g3_ParamLimits

0x1990,	// (0x00032a17) control_pane_g3

0x0007,

0xf7cd,	// (0x00040854) control_pane_g_ParamLimits

0xf7cd,	// (0x00040854) control_pane_g

0xdb6c,	// (0x0003ebf3) control_pane_t1_ParamLimits

0xdb6c,	// (0x0003ebf3) control_pane_t1

0xdbbe,	// (0x0003ec45) control_pane_t2_ParamLimits

0xdbbe,	// (0x0003ec45) control_pane_t2

0x0002,

0xf7de,	// (0x00040865) control_pane_t_ParamLimits

0xf7de,	// (0x00040865) control_pane_t

0x18b1,	// (0x00032938) navi_navi_volume_pane_cp1

0x18ba,	// (0x00032941) status_small_icon_pane

0x18c2,	// (0x00032949) status_small_pane_g1_ParamLimits

0x18c2,	// (0x00032949) status_small_pane_g1

0x18f6,	// (0x0003297d) status_small_pane_g2_ParamLimits

0x18f6,	// (0x0003297d) status_small_pane_g2

0x1902,	// (0x00032989) status_small_pane_g3_ParamLimits

0x1902,	// (0x00032989) status_small_pane_g3

0x190e,	// (0x00032995) status_small_pane_g4_ParamLimits

0x190e,	// (0x00032995) status_small_pane_g4

0x191a,	// (0x000329a1) status_small_pane_g5_ParamLimits

0x191a,	// (0x000329a1) status_small_pane_g5

0x1929,	// (0x000329b0) status_small_pane_g6_ParamLimits

0x1929,	// (0x000329b0) status_small_pane_g6

0x0007,

0xf7bc,	// (0x00040843) status_small_pane_g_ParamLimits

0xf7bc,	// (0x00040843) status_small_pane_g

0x1959,	// (0x000329e0) status_small_pane_t1

0x197c,	// (0x00032a03) status_small_wait_pane_ParamLimits

0x197c,	// (0x00032a03) status_small_wait_pane

0x59cc,	// (0x00036a53) aid_levels_signal_ParamLimits

0x59cc,	// (0x00036a53) aid_levels_signal

0x59de,	// (0x00036a65) signal_pane_g1_ParamLimits

0x59de,	// (0x00036a65) signal_pane_g1

0x59f3,	// (0x00036a7a) signal_pane_g2_ParamLimits

0x59f3,	// (0x00036a7a) signal_pane_g2

0x0001,

0xf751,	// (0x000407d8) signal_pane_g_ParamLimits

0xf751,	// (0x000407d8) signal_pane_g

0x12e0,	// (0x00032367) context_pane_g1

0x5256,	// (0x000362dd) title_pane_g1

0x5280,	// (0x00036307) title_pane_t1

0x06d9,	// (0x00031760) title_pane_t2

0x06ff,	// (0x00031786) title_pane_t3

0x0002,

0xf59b,	// (0x00040622) title_pane_t

0x78a3,	// (0x0003892a) aid_levels_battery_ParamLimits

0x78a3,	// (0x0003892a) aid_levels_battery

0x78b7,	// (0x0003893e) battery_pane_g1_ParamLimits

0x78b7,	// (0x0003893e) battery_pane_g1

0x78cd,	// (0x00038954) battery_pane_g2_ParamLimits

0x78cd,	// (0x00038954) battery_pane_g2

0x0001,

0xf7f0,	// (0x00040877) battery_pane_g_ParamLimits

0xf7f0,	// (0x00040877) battery_pane_g

0x7b5f,	// (0x00038be6) uni_indicator_pane_g1

0x7b74,	// (0x00038bfb) uni_indicator_pane_g2

0x7b8a,	// (0x00038c11) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x000409e6) uni_indicator_pane_g

0x160c,	// (0x00032693) navi_icon_pane_ParamLimits

0x160c,	// (0x00032693) navi_icon_pane

0x1553,	// (0x000325da) navi_midp_pane

0x1628,	// (0x000326af) navi_navi_pane

0x1632,	// (0x000326b9) navi_text_pane_ParamLimits

0x1632,	// (0x000326b9) navi_text_pane

0x06b9,	// (0x00031740) status_small_wait_pane_g1

0x09da,	// (0x00031a61) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x000409e1) status_small_wait_pane_g

0x7b04,	// (0x00038b8b) navi_navi_icon_text_pane

0x7b1e,	// (0x00038ba5) navi_navi_pane_g1_ParamLimits

0x7b1e,	// (0x00038ba5) navi_navi_pane_g1

0x7b0c,	// (0x00038b93) navi_navi_pane_g2_ParamLimits

0x7b0c,	// (0x00038b93) navi_navi_pane_g2

0x0001,

0xf928,	// (0x000409af) navi_navi_pane_g_ParamLimits

0xf928,	// (0x000409af) navi_navi_pane_g

0x29b4,	// (0x00033a3b) navi_navi_tabs_pane

0x7b30,	// (0x00038bb7) navi_navi_text_pane

0x7b04,	// (0x00038b8b) navi_navi_volume_pane

0x7aef,	// (0x00038b76) navi_text_pane_t1

0x7ae0,	// (0x00038b67) navi_icon_pane_g1

0x28f5,	// (0x0003397c) navi_navi_text_pane_t1

0xdeec,	// (0x0003ef73) navi_navi_volume_pane_g1

0xdef4,	// (0x0003ef7b) volume_small_pane

0x7a52,	// (0x00038ad9) navi_navi_icon_text_pane_g1

0x7a5a,	// (0x00038ae1) navi_navi_icon_text_pane_t1

0x1628,	// (0x000326af) navi_tabs_2_long_pane

0x1628,	// (0x000326af) navi_tabs_2_pane

0x1628,	// (0x000326af) navi_tabs_3_long_pane

0x1628,	// (0x000326af) navi_tabs_3_pane

0x1628,	// (0x000326af) navi_tabs_4_pane

0xdecc,	// (0x0003ef53) tabs_2_active_pane_ParamLimits

0xdecc,	// (0x0003ef53) tabs_2_active_pane

0xdedc,	// (0x0003ef63) tabs_2_passive_pane_ParamLimits

0xdedc,	// (0x0003ef63) tabs_2_passive_pane

0xde9a,	// (0x0003ef21) tabs_3_active_pane_ParamLimits

0xde9a,	// (0x0003ef21) tabs_3_active_pane

0xdeaa,	// (0x0003ef31) tabs_3_passive_pane_ParamLimits

0xdeaa,	// (0x0003ef31) tabs_3_passive_pane

0xdebb,	// (0x0003ef42) tabs_3_passive_pane_cp_ParamLimits

0xdebb,	// (0x0003ef42) tabs_3_passive_pane_cp

0xde56,	// (0x0003eedd) tabs_4_active_pane_ParamLimits

0xde56,	// (0x0003eedd) tabs_4_active_pane

0xde67,	// (0x0003eeee) tabs_4_passive_pane_ParamLimits

0xde67,	// (0x0003eeee) tabs_4_passive_pane

0xde78,	// (0x0003eeff) tabs_4_passive_pane_cp_ParamLimits

0xde78,	// (0x0003eeff) tabs_4_passive_pane_cp

0xde89,	// (0x0003ef10) tabs_4_passive_pane_cp2_ParamLimits

0xde89,	// (0x0003ef10) tabs_4_passive_pane_cp2

0xde32,	// (0x0003eeb9) tabs_2_long_active_pane_ParamLimits

0xde32,	// (0x0003eeb9) tabs_2_long_active_pane

0xde44,	// (0x0003eecb) tabs_2_long_passive_pane_ParamLimits

0xde44,	// (0x0003eecb) tabs_2_long_passive_pane

0xdded,	// (0x0003ee74) tabs_3_long_active_pane_ParamLimits

0xdded,	// (0x0003ee74) tabs_3_long_active_pane

0xde06,	// (0x0003ee8d) tabs_3_long_passive_pane_ParamLimits

0xde06,	// (0x0003ee8d) tabs_3_long_passive_pane

0xde19,	// (0x0003eea0) tabs_3_long_passive_pane_cp_ParamLimits

0xde19,	// (0x0003eea0) tabs_3_long_passive_pane_cp

0xdd93,	// (0x0003ee1a) volume_small_pane_g1

0xdd9c,	// (0x0003ee23) volume_small_pane_g2

0xdda5,	// (0x0003ee2c) volume_small_pane_g3

0xddae,	// (0x0003ee35) volume_small_pane_g4

0xddb7,	// (0x0003ee3e) volume_small_pane_g5

0xddc0,	// (0x0003ee47) volume_small_pane_g6

0xddc9,	// (0x0003ee50) volume_small_pane_g7

0xddd2,	// (0x0003ee59) volume_small_pane_g8

0xdddb,	// (0x0003ee62) volume_small_pane_g9

0xdde4,	// (0x0003ee6b) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0004097b) volume_small_pane_g

0x071f,	// (0x000317a6) bg_active_tab_pane_cp2_ParamLimits

0x071f,	// (0x000317a6) bg_active_tab_pane_cp2

0x52e8,	// (0x0003636f) tabs_3_active_pane_g1

0x52f0,	// (0x00036377) tabs_3_active_pane_t1

0x071f,	// (0x000317a6) bg_passive_tab_pane_cp2_ParamLimits

0x071f,	// (0x000317a6) bg_passive_tab_pane_cp2

0x52e8,	// (0x0003636f) tabs_3_passive_pane_g1

0x52f0,	// (0x00036377) tabs_3_passive_pane_t1

0x071f,	// (0x000317a6) bg_active_tab_pane_cp3_ParamLimits

0x071f,	// (0x000317a6) bg_active_tab_pane_cp3

0x5302,	// (0x00036389) tabs_4_active_pane_g1

0x530a,	// (0x00036391) tabs_4_active_pane_t1

0x071f,	// (0x000317a6) bg_passive_tab_pane_cp3_ParamLimits

0x071f,	// (0x000317a6) bg_passive_tab_pane_cp3

0x5302,	// (0x00036389) tabs_4_1_passive_pane_g1

0x530a,	// (0x00036391) tabs_4_1_passive_pane_t1

0x19d6,	// (0x00032a5d) list_highlight_pane_cp2

0x7c02,	// (0x00038c89) list_set_pane_ParamLimits

0x7c02,	// (0x00038c89) list_set_pane

0x7ca4,	// (0x00038d2b) main_pane_set_t1_ParamLimits

0x7ca4,	// (0x00038d2b) main_pane_set_t1

0x7cc4,	// (0x00038d4b) main_pane_set_t2_ParamLimits

0x7cc4,	// (0x00038d4b) main_pane_set_t2

0x7cd8,	// (0x00038d5f) main_pane_set_t3_ParamLimits

0x7cd8,	// (0x00038d5f) main_pane_set_t3

0x7cea,	// (0x00038d71) main_pane_set_t4_ParamLimits

0x7cea,	// (0x00038d71) main_pane_set_t4

0x0003,

0xf9c4,	// (0x00040a4b) main_pane_set_t_ParamLimits

0xf9c4,	// (0x00040a4b) main_pane_set_t

0x7cfc,	// (0x00038d83) setting_code_pane

0x7d06,	// (0x00038d8d) setting_slider_graphic_pane

0x7d06,	// (0x00038d8d) setting_slider_pane

0x7d06,	// (0x00038d8d) setting_text_pane

0x7d06,	// (0x00038d8d) setting_volume_pane

0xd5f1,	// (0x0003e678) volume_set_pane

0x071f,	// (0x000317a6) bg_set_opt_pane_cp

0xd5f9,	// (0x0003e680) setting_slider_pane_t1

0xd612,	// (0x0003e699) setting_slider_pane_t2

0xd62b,	// (0x0003e6b2) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00040629) setting_slider_pane_t

0xd642,	// (0x0003e6c9) slider_set_pane

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp2

0x072d,	// (0x000317b4) setting_slider_graphic_pane_g1

0xd658,	// (0x0003e6df) setting_slider_graphic_pane_t1

0xd667,	// (0x0003e6ee) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00040630) setting_slider_graphic_pane_t

0xd676,	// (0x0003e6fd) slider_set_pane_cp

0x06c3,	// (0x0003174a) input_focus_pane_cp1

0x2e1b,	// (0x00033ea2) list_set_text_pane

0x06b9,	// (0x00031740) setting_text_pane_g1

0x06c3,	// (0x0003174a) input_focus_pane_cp2

0x06b9,	// (0x00031740) setting_code_pane_g1

0x0736,	// (0x000317bd) setting_code_pane_t1

0x4045,	// (0x000350cc) set_text_pane_t1_ParamLimits

0x4045,	// (0x000350cc) set_text_pane_t1

0x0dcd,	// (0x00031e54) set_opt_bg_pane_g1

0x0dd5,	// (0x00031e5c) set_opt_bg_pane_g2

0x2dfb,	// (0x00033e82) set_opt_bg_pane_g3

0x0de5,	// (0x00031e6c) set_opt_bg_pane_g4

0x0ded,	// (0x00031e74) set_opt_bg_pane_g5

0x0df5,	// (0x00031e7c) set_opt_bg_pane_g6

0x2e03,	// (0x00033e8a) set_opt_bg_pane_g7

0x2e0b,	// (0x00033e92) set_opt_bg_pane_g8

0x2e13,	// (0x00033e9a) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x00040a38) set_opt_bg_pane_g

0x2dee,	// (0x00033e75) slider_set_pane_g1

0xdf61,	// (0x0003efe8) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x00040a29) slider_set_pane_g

0xdefd,	// (0x0003ef84) volume_set_pane_g1

0xdf05,	// (0x0003ef8c) volume_set_pane_g2

0xdf0d,	// (0x0003ef94) volume_set_pane_g3

0xdf15,	// (0x0003ef9c) volume_set_pane_g4

0xdf1d,	// (0x0003efa4) volume_set_pane_g5

0xdf25,	// (0x0003efac) volume_set_pane_g6

0xdf2d,	// (0x0003efb4) volume_set_pane_g7

0xdf35,	// (0x0003efbc) volume_set_pane_g8

0xdf3d,	// (0x0003efc4) volume_set_pane_g9

0xdf45,	// (0x0003efcc) volume_set_pane_g10

0x0009,

0xf97a,	// (0x00040a01) volume_set_pane_g

0x53a9,	// (0x00036430) indicator_pane_ParamLimits

0x53a9,	// (0x00036430) indicator_pane

0x53b5,	// (0x0003643c) main_idle_pane_g2_ParamLimits

0x53b5,	// (0x0003643c) main_idle_pane_g2

0x53dd,	// (0x00036464) main_pane_idle_g1_ParamLimits

0x53dd,	// (0x00036464) main_pane_idle_g1

0x0744,	// (0x000317cb) popup_clock_digital_analogue_window_ParamLimits

0x0744,	// (0x000317cb) popup_clock_digital_analogue_window

0x53ea,	// (0x00036471) soft_indicator_pane_ParamLimits

0x53ea,	// (0x00036471) soft_indicator_pane

0x53f6,	// (0x0003647d) wallpaper_pane_ParamLimits

0x53f6,	// (0x0003647d) wallpaper_pane

0x06b9,	// (0x00031740) wallpaper_pane_g1

0x5402,	// (0x00036489) indicator_pane_g1_ParamLimits

0x5402,	// (0x00036489) indicator_pane_g1

0x2f62,	// (0x00033fe9) navi_navi_icon_text_pane_srt_g1

0x0772,	// (0x000317f9) soft_indicator_pane_t1

0x078c,	// (0x00031813) aid_ps_area_pane

0x540e,	// (0x00036495) aid_ps_clock_pane

0x079d,	// (0x00031824) aid_ps_indicator_pane

0x07a9,	// (0x00031830) indicator_ps_pane_ParamLimits

0x07a9,	// (0x00031830) indicator_ps_pane

0x07b8,	// (0x0003183f) power_save_pane_g1_ParamLimits

0x07b8,	// (0x0003183f) power_save_pane_g1

0x07c4,	// (0x0003184b) power_save_pane_g2_ParamLimits

0x07c4,	// (0x0003184b) power_save_pane_g2

0xd216,	// (0x0003e29d) aid_navinavi_width_pane

0x078c,	// (0x00031813) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00040635) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00040635) power_save_pane_g

0x07d2,	// (0x00031859) power_save_pane_t1_ParamLimits

0x07d2,	// (0x00031859) power_save_pane_t1

0x540e,	// (0x00036495) aid_ps_clock_pane_ParamLimits

0x079d,	// (0x00031824) aid_ps_indicator_pane_ParamLimits

0x07e4,	// (0x0003186b) power_save_pane_t4_ParamLimits

0x07e4,	// (0x0003186b) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004063a) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004063a) power_save_pane_t

0x080e,	// (0x00031895) power_save_t3_ParamLimits

0x080e,	// (0x00031895) power_save_t3

0x07f9,	// (0x00031880) power_save_t2_ParamLimits

0x07f9,	// (0x00031880) power_save_t2

0x0823,	// (0x000318aa) indicator_ps_pane_g1

0x541c,	// (0x000364a3) ai_gene_pane_ParamLimits

0x541c,	// (0x000364a3) ai_gene_pane

0x5428,	// (0x000364af) ai_links_pane_ParamLimits

0x5428,	// (0x000364af) ai_links_pane

0x5434,	// (0x000364bb) indicator_pane_cp1_ParamLimits

0x5434,	// (0x000364bb) indicator_pane_cp1

0x5440,	// (0x000364c7) main_pane_idle_g1_cp_ParamLimits

0x5440,	// (0x000364c7) main_pane_idle_g1_cp

0x082c,	// (0x000318b3) popup_ai_links_title_window

0x544c,	// (0x000364d3) soft_indicator_pane_cp1_ParamLimits

0x544c,	// (0x000364d3) soft_indicator_pane_cp1

0x2c42,	// (0x00033cc9) ai_links_pane_g1

0x2c4b,	// (0x00033cd2) grid_ai_links_pane

0x7b54,	// (0x00038bdb) ai_gene_pane_1

0x2c30,	// (0x00033cb7) ai_gene_pane_2

0x2c39,	// (0x00033cc0) list_highlight_pane_cp4

0x7b38,	// (0x00038bbf) cell_ai_link_pane_ParamLimits

0x7b38,	// (0x00038bbf) cell_ai_link_pane

0x2c0a,	// (0x00033c91) cell_ai_link_pane_g1

0x09da,	// (0x00031a61) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x000409dc) cell_ai_link_pane_g

0x06c3,	// (0x0003174a) grid_highlight_cp2

0x06c3,	// (0x0003174a) bg_popup_sub_pane_cp1

0x0843,	// (0x000318ca) popup_ai_links_title_window_t1

0x2b58,	// (0x00033bdf) ai_gene_pane_1_g1_ParamLimits

0x2b58,	// (0x00033bdf) ai_gene_pane_1_g1

0x2b64,	// (0x00033beb) ai_gene_pane_1_g2_ParamLimits

0x2b64,	// (0x00033beb) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x000409d2) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x000409d2) ai_gene_pane_1_g

0x2b71,	// (0x00033bf8) ai_gene_pane_1_t1_ParamLimits

0x2b71,	// (0x00033bf8) ai_gene_pane_1_t1

0x2ba5,	// (0x00033c2c) grid_ai_soft_ind_pane

0x2b43,	// (0x00033bca) ai_gene_pane_2_t1_ParamLimits

0x2b43,	// (0x00033bca) ai_gene_pane_2_t1

0x5458,	// (0x000364df) main_pane_empty_t1_ParamLimits

0x5458,	// (0x000364df) main_pane_empty_t1

0x5470,	// (0x000364f7) main_pane_empty_t2_ParamLimits

0x5470,	// (0x000364f7) main_pane_empty_t2

0x5485,	// (0x0003650c) main_pane_empty_t3_ParamLimits

0x5485,	// (0x0003650c) main_pane_empty_t3

0x5497,	// (0x0003651e) main_pane_empty_t4_ParamLimits

0x5497,	// (0x0003651e) main_pane_empty_t4

0x54a9,	// (0x00036530) main_pane_empty_t5_ParamLimits

0x54a9,	// (0x00036530) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004063f) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004063f) main_pane_empty_t

0x0e1e,	// (0x00031ea5) bg_popup_window_pane_ParamLimits

0x0e1e,	// (0x00031ea5) bg_popup_window_pane

0x2903,	// (0x0003398a) find_popup_pane_cp2_ParamLimits

0x2903,	// (0x0003398a) find_popup_pane_cp2

0x290f,	// (0x00033996) heading_pane_ParamLimits

0x290f,	// (0x00033996) heading_pane

0x06c3,	// (0x0003174a) bg_popup_sub_pane

0x7a74,	// (0x00038afb) bg_popup_window_pane_g1_ParamLimits

0x7a74,	// (0x00038afb) bg_popup_window_pane_g1

0x7a80,	// (0x00038b07) bg_popup_window_pane_g2_ParamLimits

0x7a80,	// (0x00038b07) bg_popup_window_pane_g2

0x7a8c,	// (0x00038b13) bg_popup_window_pane_g3_ParamLimits

0x7a8c,	// (0x00038b13) bg_popup_window_pane_g3

0x7a98,	// (0x00038b1f) bg_popup_window_pane_g4_ParamLimits

0x7a98,	// (0x00038b1f) bg_popup_window_pane_g4

0x7aa4,	// (0x00038b2b) bg_popup_window_pane_g5_ParamLimits

0x7aa4,	// (0x00038b2b) bg_popup_window_pane_g5

0x7ab0,	// (0x00038b37) bg_popup_window_pane_g6_ParamLimits

0x7ab0,	// (0x00038b37) bg_popup_window_pane_g6

0x7abc,	// (0x00038b43) bg_popup_window_pane_g7_ParamLimits

0x7abc,	// (0x00038b43) bg_popup_window_pane_g7

0x7ac8,	// (0x00038b4f) bg_popup_window_pane_g8_ParamLimits

0x7ac8,	// (0x00038b4f) bg_popup_window_pane_g8

0x7ad4,	// (0x00038b5b) bg_popup_window_pane_g9_ParamLimits

0x7ad4,	// (0x00038b5b) bg_popup_window_pane_g9

0x28e9,	// (0x00033970) bg_popup_window_pane_g10_ParamLimits

0x28e9,	// (0x00033970) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0004099a) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0004099a) bg_popup_window_pane_g

0x28a0,	// (0x00033927) bg_popup_heading_pane_ParamLimits

0x28a0,	// (0x00033927) bg_popup_heading_pane

0xdfe9,	// (0x0003f070) tabs_4_passive_pane_cp_srt_ParamLimits

0xdfe9,	// (0x0003f070) tabs_4_passive_pane_cp_srt

0xdffb,	// (0x0003f082) tabs_4_passive_pane_srt_ParamLimits

0x28b4,	// (0x0003393b) heading_pane_g2

0xdffb,	// (0x0003f082) tabs_4_passive_pane_srt

0x19d6,	// (0x00032a5d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x19d6,	// (0x00032a5d) bg_passive_tab_pane_cp3_srt

0x28bc,	// (0x00033943) heading_pane_t1_ParamLimits

0x28bc,	// (0x00033943) heading_pane_t1

0x28d3,	// (0x0003395a) heading_pane_t2_ParamLimits

0x28d3,	// (0x0003395a) heading_pane_t2

0x0001,

0xf90e,	// (0x00040995) heading_pane_t_ParamLimits

0xf90e,	// (0x00040995) heading_pane_t

0x23f9,	// (0x00033480) bg_popup_heading_pane_g1

0x248a,	// (0x00033511) bg_popup_heading_pane_g2

0x2494,	// (0x0003351b) bg_popup_heading_pane_g3

0x249e,	// (0x00033525) bg_popup_heading_pane_g4

0x24a8,	// (0x0003352f) bg_popup_heading_pane_g5

0x24b2,	// (0x00033539) bg_popup_heading_pane_g6

0x24ba,	// (0x00033541) bg_popup_heading_pane_g7

0x24c2,	// (0x00033549) bg_popup_heading_pane_g8

0x24cc,	// (0x00033553) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x00040951) bg_popup_heading_pane_g

0x1cf0,	// (0x00032d77) bg_popup_sub_pane_g1

0x1d00,	// (0x00032d87) bg_popup_sub_pane_g2

0x1cf8,	// (0x00032d7f) bg_popup_sub_pane_g3

0x1d10,	// (0x00032d97) bg_popup_sub_pane_g4

0x1d08,	// (0x00032d8f) bg_popup_sub_pane_g5

0x1d18,	// (0x00032d9f) bg_popup_sub_pane_g6

0x1d20,	// (0x00032da7) bg_popup_sub_pane_g7

0x1d30,	// (0x00032db7) bg_popup_sub_pane_g8

0x1d28,	// (0x00032daf) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0004092b) bg_popup_sub_pane_g

0x0711,	// (0x00031798) bg_popup_window_pane_cp5_ParamLimits

0x0711,	// (0x00031798) bg_popup_window_pane_cp5

0x0860,	// (0x000318e7) popup_note_window_g1_ParamLimits

0x0860,	// (0x000318e7) popup_note_window_g1

0x086c,	// (0x000318f3) popup_note_window_t1_ParamLimits

0x086c,	// (0x000318f3) popup_note_window_t1

0x087e,	// (0x00031905) popup_note_window_t2_ParamLimits

0x087e,	// (0x00031905) popup_note_window_t2

0x0890,	// (0x00031917) popup_note_window_t3_ParamLimits

0x0890,	// (0x00031917) popup_note_window_t3

0x08a2,	// (0x00031929) popup_note_window_t4_ParamLimits

0x08a2,	// (0x00031929) popup_note_window_t4

0x08ca,	// (0x00031951) popup_note_window_t5_ParamLimits

0x08ca,	// (0x00031951) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004064a) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004064a) popup_note_window_t

0x08ee,	// (0x00031975) bg_popup_window_pane_cp6_ParamLimits

0x08ee,	// (0x00031975) bg_popup_window_pane_cp6

0x236d,	// (0x000333f4) popup_note_image_window_g1_ParamLimits

0x236d,	// (0x000333f4) popup_note_image_window_g1

0x2379,	// (0x00033400) popup_note_image_window_g2_ParamLimits

0x2379,	// (0x00033400) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0004091f) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0004091f) popup_note_image_window_g

0x2392,	// (0x00033419) popup_note_image_window_t1_ParamLimits

0x2392,	// (0x00033419) popup_note_image_window_t1

0x23ab,	// (0x00033432) popup_note_image_window_t2_ParamLimits

0x23ab,	// (0x00033432) popup_note_image_window_t2

0x23c4,	// (0x0003344b) popup_note_image_window_t3_ParamLimits

0x23c4,	// (0x0003344b) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x00040924) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x00040924) popup_note_image_window_t

0x224a,	// (0x000332d1) bg_popup_window_pane_cp7_ParamLimits

0x224a,	// (0x000332d1) bg_popup_window_pane_cp7

0x227a,	// (0x00033301) popup_note_wait_window_g1_ParamLimits

0x227a,	// (0x00033301) popup_note_wait_window_g1

0x2286,	// (0x0003330d) popup_note_wait_window_g2_ParamLimits

0x2286,	// (0x0003330d) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0004090d) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0004090d) popup_note_wait_window_g

0x229e,	// (0x00033325) popup_note_wait_window_t1_ParamLimits

0x229e,	// (0x00033325) popup_note_wait_window_t1

0x22c5,	// (0x0003334c) popup_note_wait_window_t2_ParamLimits

0x22c5,	// (0x0003334c) popup_note_wait_window_t2

0x22e2,	// (0x00033369) popup_note_wait_window_t3_ParamLimits

0x22e2,	// (0x00033369) popup_note_wait_window_t3

0x22f5,	// (0x0003337c) popup_note_wait_window_t4_ParamLimits

0x22f5,	// (0x0003337c) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x00040914) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x00040914) popup_note_wait_window_t

0x231a,	// (0x000333a1) wait_bar_pane_ParamLimits

0x231a,	// (0x000333a1) wait_bar_pane

0x06c3,	// (0x0003174a) wait_anim_pane

0x06c3,	// (0x0003174a) wait_border_pane

0x06b9,	// (0x00031740) wait_anim_pane_g1

0x06b9,	// (0x00031740) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x000407d3) wait_anim_pane_g

0x21ee,	// (0x00033275) wait_border_pane_g1

0x21f9,	// (0x00033280) wait_border_pane_g2

0x2202,	// (0x00033289) wait_border_pane_g3

0x0002,

0xf87f,	// (0x00040906) wait_border_pane_g

0x2150,	// (0x000331d7) bg_popup_window_pane_cp16_ParamLimits

0x2150,	// (0x000331d7) bg_popup_window_pane_cp16

0x215e,	// (0x000331e5) indicator_popup_pane_cp4_ParamLimits

0x215e,	// (0x000331e5) indicator_popup_pane_cp4

0x2172,	// (0x000331f9) popup_query_data_window_t1_ParamLimits

0x2172,	// (0x000331f9) popup_query_data_window_t1

0x2184,	// (0x0003320b) popup_query_data_window_t2_ParamLimits

0x2184,	// (0x0003320b) popup_query_data_window_t2

0x219d,	// (0x00033224) popup_query_data_window_t3_ParamLimits

0x219d,	// (0x00033224) popup_query_data_window_t3

0x0002,

0xf878,	// (0x000408ff) popup_query_data_window_t_ParamLimits

0xf878,	// (0x000408ff) popup_query_data_window_t

0x21b7,	// (0x0003323e) query_popup_data_pane_ParamLimits

0x21b7,	// (0x0003323e) query_popup_data_pane

0x21cb,	// (0x00033252) query_popup_data_pane_cp1_ParamLimits

0x21cb,	// (0x00033252) query_popup_data_pane_cp1

0x08ee,	// (0x00031975) bg_popup_window_pane_cp10_ParamLimits

0x08ee,	// (0x00031975) bg_popup_window_pane_cp10

0x20b3,	// (0x0003313a) indicator_popup_pane_ParamLimits

0x20b3,	// (0x0003313a) indicator_popup_pane

0x0945,	// (0x000319cc) popup_query_code_window_t1_ParamLimits

0x0945,	// (0x000319cc) popup_query_code_window_t1

0x20cb,	// (0x00033152) popup_query_code_window_t2_ParamLimits

0x20cb,	// (0x00033152) popup_query_code_window_t2

0x2109,	// (0x00033190) popup_query_code_window_t3_ParamLimits

0x2109,	// (0x00033190) popup_query_code_window_t3

0x0002,

0xf871,	// (0x000408f8) popup_query_code_window_t_ParamLimits

0xf871,	// (0x000408f8) popup_query_code_window_t

0x2138,	// (0x000331bf) query_popup_pane_ParamLimits

0x2138,	// (0x000331bf) query_popup_pane

0x08ee,	// (0x00031975) bg_popup_window_pane_cp15_ParamLimits

0x08ee,	// (0x00031975) bg_popup_window_pane_cp15

0x090c,	// (0x00031993) indicator_popup_pane_cp1_ParamLimits

0x090c,	// (0x00031993) indicator_popup_pane_cp1

0x091f,	// (0x000319a6) indicator_popup_pane_cp2_ParamLimits

0x091f,	// (0x000319a6) indicator_popup_pane_cp2

0x0932,	// (0x000319b9) popup_query_data_code_window_g1_ParamLimits

0x0932,	// (0x000319b9) popup_query_data_code_window_g1

0x0945,	// (0x000319cc) popup_query_data_code_window_t1_ParamLimits

0x0945,	// (0x000319cc) popup_query_data_code_window_t1

0x0957,	// (0x000319de) popup_query_data_code_window_t2_ParamLimits

0x0957,	// (0x000319de) popup_query_data_code_window_t2

0x0969,	// (0x000319f0) popup_query_data_code_window_t3_ParamLimits

0x0969,	// (0x000319f0) popup_query_data_code_window_t3

0x097f,	// (0x00031a06) popup_query_data_code_window_t4_ParamLimits

0x097f,	// (0x00031a06) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x00040655) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x00040655) popup_query_data_code_window_t

0xdca6,	// (0x0003ed2d) list_single_midp_graphic_pane_g3

0x0997,	// (0x00031a1e) query_popup_data_pane_cp2_ParamLimits

0x09aa,	// (0x00031a31) query_popup_pane_cp2_ParamLimits

0x09aa,	// (0x00031a31) query_popup_pane_cp2

0x06c3,	// (0x0003174a) bg_popup_window_pane_cp11

0x2087,	// (0x0003310e) heading_pane_cp5

0x0a38,	// (0x00031abf) listscroll_popup_info_pane

0x06c3,	// (0x0003174a) input_focus_pane_cp3

0x09bd,	// (0x00031a44) query_popup_pane_t1

0x09cb,	// (0x00031a52) list_popup_info_pane_ParamLimits

0x09cb,	// (0x00031a52) list_popup_info_pane

0x09da,	// (0x00031a61) listscroll_popup_info_pane_g1

0x09e2,	// (0x00031a69) scroll_pane_cp7

0x09ec,	// (0x00031a73) popup_info_list_pane_t1_ParamLimits

0x09ec,	// (0x00031a73) popup_info_list_pane_t1

0x0a06,	// (0x00031a8d) popup_info_list_pane_t2_ParamLimits

0x0a06,	// (0x00031a8d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004065e) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004065e) popup_info_list_pane_t

0x06c3,	// (0x0003174a) bg_popup_window_pane_cp12

0x2f7c,	// (0x00034003) find_popup_pane

0x071f,	// (0x000317a6) bg_popup_window_pane_cp3

0x0a20,	// (0x00031aa7) heading_pane_cp3

0x0a2c,	// (0x00031ab3) listscroll_popup_graphic_pane

0x06c3,	// (0x0003174a) bg_popup_window_pane_cp4

0x550d,	// (0x00036594) heading_pane_cp4

0x0a38,	// (0x00031abf) listscroll_popup_colour_pane

0x0a40,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a40,	// (0x00031ac7) cell_large_graphic_colour_none_popup_pane

0x5517,	// (0x0003659e) grid_large_graphic_colour_popup_pane_ParamLimits

0x5517,	// (0x0003659e) grid_large_graphic_colour_popup_pane

0x0a54,	// (0x00031adb) listscroll_popup_colour_pane_g1_ParamLimits

0x0a54,	// (0x00031adb) listscroll_popup_colour_pane_g1

0x0a6b,	// (0x00031af2) listscroll_popup_colour_pane_g2_ParamLimits

0x0a6b,	// (0x00031af2) listscroll_popup_colour_pane_g2

0x0a82,	// (0x00031b09) listscroll_popup_colour_pane_g3_ParamLimits

0x0a82,	// (0x00031b09) listscroll_popup_colour_pane_g3

0x553b,	// (0x000365c2) listscroll_popup_colour_pane_g4_ParamLimits

0x553b,	// (0x000365c2) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00040663) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00040663) listscroll_popup_colour_pane_g

0x0a92,	// (0x00031b19) scroll_pane_cp6_ParamLimits

0x0a92,	// (0x00031b19) scroll_pane_cp6

0x554a,	// (0x000365d1) cell_large_graphic_colour_popup_pane_ParamLimits

0x554a,	// (0x000365d1) cell_large_graphic_colour_popup_pane

0x0aa4,	// (0x00031b2b) cell_large_graphic_colour_none_popup_pane_t1

0x06c3,	// (0x0003174a) grid_highlight_pane_cp5

0x0ab3,	// (0x00031b3a) cell_large_graphic_colour_popup_pane_g1

0x0abb,	// (0x00031b42) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004066c) cell_large_graphic_colour_popup_pane_g

0x0ac3,	// (0x00031b4a) cell_large_graphic_colour_popup_pane_g2_copy1

0x0acc,	// (0x00031b53) grid_highlight_pane_cp4

0x0ad4,	// (0x00031b5b) bg_popup_window_pane_cp8_ParamLimits

0x0ad4,	// (0x00031b5b) bg_popup_window_pane_cp8

0x0aef,	// (0x00031b76) popup_snote_single_text_window_g1_ParamLimits

0x0aef,	// (0x00031b76) popup_snote_single_text_window_g1

0x0b01,	// (0x00031b88) popup_snote_single_text_window_t1_ParamLimits

0x0b01,	// (0x00031b88) popup_snote_single_text_window_t1

0x0b14,	// (0x00031b9b) popup_snote_single_text_window_t2_ParamLimits

0x0b14,	// (0x00031b9b) popup_snote_single_text_window_t2

0x0b27,	// (0x00031bae) popup_snote_single_text_window_t3_ParamLimits

0x0b27,	// (0x00031bae) popup_snote_single_text_window_t3

0x0b60,	// (0x00031be7) popup_snote_single_text_window_t4_ParamLimits

0x0b60,	// (0x00031be7) popup_snote_single_text_window_t4

0x0b94,	// (0x00031c1b) popup_snote_single_text_window_t5_ParamLimits

0x0b94,	// (0x00031c1b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00040671) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00040671) popup_snote_single_text_window_t

0x0bc3,	// (0x00031c4a) bg_popup_window_pane_cp9_ParamLimits

0x0bc3,	// (0x00031c4a) bg_popup_window_pane_cp9

0x0aef,	// (0x00031b76) popup_snote_single_graphic_window_g1_ParamLimits

0x0aef,	// (0x00031b76) popup_snote_single_graphic_window_g1

0x0bd1,	// (0x00031c58) popup_snote_single_graphic_window_g2_ParamLimits

0x0bd1,	// (0x00031c58) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004067c) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004067c) popup_snote_single_graphic_window_g

0x0bdd,	// (0x00031c64) popup_snote_single_graphic_window_t1_ParamLimits

0x0bdd,	// (0x00031c64) popup_snote_single_graphic_window_t1

0x0bf0,	// (0x00031c77) popup_snote_single_graphic_window_t2_ParamLimits

0x0bf0,	// (0x00031c77) popup_snote_single_graphic_window_t2

0x0c03,	// (0x00031c8a) popup_snote_single_graphic_window_t3_ParamLimits

0x0c03,	// (0x00031c8a) popup_snote_single_graphic_window_t3

0x0c3c,	// (0x00031cc3) popup_snote_single_graphic_window_t4_ParamLimits

0x0c3c,	// (0x00031cc3) popup_snote_single_graphic_window_t4

0x0c70,	// (0x00031cf7) popup_snote_single_graphic_window_t5_ParamLimits

0x0c70,	// (0x00031cf7) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00040681) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00040681) popup_snote_single_graphic_window_t

0x2f00,	// (0x00033f87) grid_graphic_popup_pane_ParamLimits

0x2f00,	// (0x00033f87) grid_graphic_popup_pane

0x2f2c,	// (0x00033fb3) listscroll_popup_graphic_pane_g1_ParamLimits

0x2f2c,	// (0x00033fb3) listscroll_popup_graphic_pane_g1

0x7dd2,	// (0x00038e59) listscroll_popup_graphic_pane_g2_ParamLimits

0x7dd2,	// (0x00038e59) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x00040a75) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x00040a75) listscroll_popup_graphic_pane_g

0x2c24,	// (0x00033cab) scroll_pane_cp5

0x7d93,	// (0x00038e1a) cell_graphic_popup_pane_ParamLimits

0x7d93,	// (0x00038e1a) cell_graphic_popup_pane

0x2ecb,	// (0x00033f52) cell_graphic_popup_pane_g1

0x2ed3,	// (0x00033f5a) cell_graphic_popup_pane_g2

0x0ac3,	// (0x00031b4a) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x00040a6e) cell_graphic_popup_pane_g

0x2edc,	// (0x00033f63) cell_graphic_popup_pane_t2

0x0acc,	// (0x00031b53) grid_highlight_pane_cp3

0x0cb1,	// (0x00031d38) list_gen_pane_ParamLimits

0x0cb1,	// (0x00031d38) list_gen_pane

0x0cd9,	// (0x00031d60) scroll_pane

0x7d46,	// (0x00038dcd) bg_list_pane_g1_ParamLimits

0x7d46,	// (0x00038dcd) bg_list_pane_g1

0x2e7a,	// (0x00033f01) bg_list_pane_g2_ParamLimits

0x2e7a,	// (0x00033f01) bg_list_pane_g2

0x2e8d,	// (0x00033f14) bg_list_pane_g3_ParamLimits

0x2e8d,	// (0x00033f14) bg_list_pane_g3

0x2e9f,	// (0x00033f26) bg_list_pane_g4_ParamLimits

0x2e9f,	// (0x00033f26) bg_list_pane_g4

0x7d61,	// (0x00038de8) bg_list_pane_g5_ParamLimits

0x7d61,	// (0x00038de8) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x00040a63) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x00040a63) bg_list_pane_g

0x617d,	// (0x00037204) list_double2_graphic_large_graphic_pane_ParamLimits

0x617d,	// (0x00037204) list_double2_graphic_large_graphic_pane

0x617d,	// (0x00037204) list_double2_graphic_pane_ParamLimits

0x617d,	// (0x00037204) list_double2_graphic_pane

0x617d,	// (0x00037204) list_double2_large_graphic_pane_ParamLimits

0x617d,	// (0x00037204) list_double2_large_graphic_pane

0x617d,	// (0x00037204) list_double2_pane_ParamLimits

0x617d,	// (0x00037204) list_double2_pane

0x617d,	// (0x00037204) list_double_graphic_heading_pane_ParamLimits

0x617d,	// (0x00037204) list_double_graphic_heading_pane

0x617d,	// (0x00037204) list_double_graphic_pane_ParamLimits

0x617d,	// (0x00037204) list_double_graphic_pane

0x617d,	// (0x00037204) list_double_heading_pane_ParamLimits

0x617d,	// (0x00037204) list_double_heading_pane

0x617d,	// (0x00037204) list_double_large_graphic_pane_ParamLimits

0x617d,	// (0x00037204) list_double_large_graphic_pane

0x617d,	// (0x00037204) list_double_number_pane_ParamLimits

0x617d,	// (0x00037204) list_double_number_pane

0x617d,	// (0x00037204) list_double_pane_ParamLimits

0x617d,	// (0x00037204) list_double_pane

0x617d,	// (0x00037204) list_double_time_pane_ParamLimits

0x617d,	// (0x00037204) list_double_time_pane

0x617d,	// (0x00037204) list_setting_number_pane_ParamLimits

0x617d,	// (0x00037204) list_setting_number_pane

0x617d,	// (0x00037204) list_setting_pane_ParamLimits

0x617d,	// (0x00037204) list_setting_pane

0x61c1,	// (0x00037248) list_single_2graphic_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_2graphic_pane

0x61c1,	// (0x00037248) list_single_graphic_heading_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_graphic_heading_pane

0x61c1,	// (0x00037248) list_single_graphic_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_graphic_pane

0x61c1,	// (0x00037248) list_single_heading_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_heading_pane

0x620d,	// (0x00037294) list_single_large_graphic_pane_ParamLimits

0x620d,	// (0x00037294) list_single_large_graphic_pane

0x61c1,	// (0x00037248) list_single_number_heading_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_number_heading_pane

0x61c1,	// (0x00037248) list_single_number_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_number_pane

0x61c1,	// (0x00037248) list_single_pane_ParamLimits

0x61c1,	// (0x00037248) list_single_pane

0x06c3,	// (0x0003174a) list_highlight_pane_cp1

0x170d,	// (0x00032794) list_single_pane_g1_ParamLimits

0x170d,	// (0x00032794) list_single_pane_g1

0x406a,	// (0x000350f1) list_single_pane_g2_ParamLimits

0x406a,	// (0x000350f1) list_single_pane_g2

0x0001,

0xf616,	// (0x0004069d) list_single_pane_g_ParamLimits

0xf616,	// (0x0004069d) list_single_pane_g

0x4903,	// (0x0003598a) list_single_pane_t1_ParamLimits

0x4903,	// (0x0003598a) list_single_pane_t1

0x170d,	// (0x00032794) list_single_number_pane_g1_ParamLimits

0x170d,	// (0x00032794) list_single_number_pane_g1

0x406a,	// (0x000350f1) list_single_number_pane_g2_ParamLimits

0x406a,	// (0x000350f1) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004069d) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004069d) list_single_number_pane_g

0x48ab,	// (0x00035932) list_single_number_pane_t1_ParamLimits

0x48ab,	// (0x00035932) list_single_number_pane_t1

0x48c1,	// (0x00035948) list_single_number_pane_t2_ParamLimits

0x48c1,	// (0x00035948) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x00040a24) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x00040a24) list_single_number_pane_t

0x405e,	// (0x000350e5) list_single_graphic_pane_g1_ParamLimits

0x405e,	// (0x000350e5) list_single_graphic_pane_g1

0x170d,	// (0x00032794) list_single_graphic_pane_g2_ParamLimits

0x170d,	// (0x00032794) list_single_graphic_pane_g2

0x406a,	// (0x000350f1) list_single_graphic_pane_g3_ParamLimits

0x406a,	// (0x000350f1) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004068c) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004068c) list_single_graphic_pane_g

0x4076,	// (0x000350fd) list_single_graphic_pane_t1_ParamLimits

0x4076,	// (0x000350fd) list_single_graphic_pane_t1

0x408c,	// (0x00035113) list_single_heading_pane_g1_ParamLimits

0x408c,	// (0x00035113) list_single_heading_pane_g1

0x406a,	// (0x000350f1) list_single_heading_pane_g2_ParamLimits

0x406a,	// (0x000350f1) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00040693) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00040693) list_single_heading_pane_g

0x409f,	// (0x00035126) list_single_heading_pane_t1_ParamLimits

0x409f,	// (0x00035126) list_single_heading_pane_t1

0x5573,	// (0x000365fa) list_single_heading_pane_t2_ParamLimits

0x5573,	// (0x000365fa) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00040698) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00040698) list_single_heading_pane_t

0x170d,	// (0x00032794) list_single_number_heading_pane_g1_ParamLimits

0x170d,	// (0x00032794) list_single_number_heading_pane_g1

0x406a,	// (0x000350f1) list_single_number_heading_pane_g2_ParamLimits

0x406a,	// (0x000350f1) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004069d) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004069d) list_single_number_heading_pane_g

0x40b5,	// (0x0003513c) list_single_number_heading_pane_t1_ParamLimits

0x40b5,	// (0x0003513c) list_single_number_heading_pane_t1

0x40cb,	// (0x00035152) list_single_number_heading_pane_t2_ParamLimits

0x40cb,	// (0x00035152) list_single_number_heading_pane_t2

0x40dd,	// (0x00035164) list_single_number_heading_pane_t3_ParamLimits

0x40dd,	// (0x00035164) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x000406a2) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x000406a2) list_single_number_heading_pane_t

0x40ef,	// (0x00035176) list_single_graphic_heading_pane_g1_ParamLimits

0x40ef,	// (0x00035176) list_single_graphic_heading_pane_g1

0x4105,	// (0x0003518c) list_single_graphic_heading_pane_g4_ParamLimits

0x4105,	// (0x0003518c) list_single_graphic_heading_pane_g4

0x406a,	// (0x000350f1) list_single_graphic_heading_pane_g5_ParamLimits

0x406a,	// (0x000350f1) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x000406a9) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000406a9) list_single_graphic_heading_pane_g

0x40b5,	// (0x0003513c) list_single_graphic_heading_pane_t1_ParamLimits

0x40b5,	// (0x0003513c) list_single_graphic_heading_pane_t1

0x4116,	// (0x0003519d) list_single_graphic_heading_pane_t2_ParamLimits

0x4116,	// (0x0003519d) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000406b0) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000406b0) list_single_graphic_heading_pane_t

0x5585,	// (0x0003660c) list_single_large_graphic_pane_g1_ParamLimits

0x5585,	// (0x0003660c) list_single_large_graphic_pane_g1

0x5591,	// (0x00036618) list_single_large_graphic_pane_g2_ParamLimits

0x5591,	// (0x00036618) list_single_large_graphic_pane_g2

0x559d,	// (0x00036624) list_single_large_graphic_pane_g3_ParamLimits

0x559d,	// (0x00036624) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x000406b5) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x000406b5) list_single_large_graphic_pane_g

0x21f9,	// (0x00033280) wait_border_pane_g2_copy1

0x55a9,	// (0x00036630) list_single_large_graphic_pane_g4_cp2

0x412e,	// (0x000351b5) list_single_large_graphic_pane_t1_ParamLimits

0x412e,	// (0x000351b5) list_single_large_graphic_pane_t1

0x55b1,	// (0x00036638) list_double_pane_g1_ParamLimits

0x55b1,	// (0x00036638) list_double_pane_g1

0x55bd,	// (0x00036644) list_double_pane_g2_ParamLimits

0x55bd,	// (0x00036644) list_double_pane_g2

0x0001,

0xf635,	// (0x000406bc) list_double_pane_g_ParamLimits

0xf635,	// (0x000406bc) list_double_pane_g

0x4144,	// (0x000351cb) list_double_pane_t1_ParamLimits

0x4144,	// (0x000351cb) list_double_pane_t1

0x415a,	// (0x000351e1) list_double_pane_t2_ParamLimits

0x415a,	// (0x000351e1) list_double_pane_t2

0x0001,

0xf63a,	// (0x000406c1) list_double_pane_t_ParamLimits

0xf63a,	// (0x000406c1) list_double_pane_t

0x416c,	// (0x000351f3) list_double2_pane_g1_ParamLimits

0x416c,	// (0x000351f3) list_double2_pane_g1

0x417d,	// (0x00035204) list_double2_pane_g2_ParamLimits

0x417d,	// (0x00035204) list_double2_pane_g2

0x0001,

0xf63f,	// (0x000406c6) list_double2_pane_g_ParamLimits

0xf63f,	// (0x000406c6) list_double2_pane_g

0x4189,	// (0x00035210) list_double2_pane_t1_ParamLimits

0x4189,	// (0x00035210) list_double2_pane_t1

0x419f,	// (0x00035226) list_double2_pane_t2_ParamLimits

0x419f,	// (0x00035226) list_double2_pane_t2

0x0001,

0xf644,	// (0x000406cb) list_double2_pane_t_ParamLimits

0xf644,	// (0x000406cb) list_double2_pane_t

0x55b1,	// (0x00036638) list_double_number_pane_g1_ParamLimits

0x55b1,	// (0x00036638) list_double_number_pane_g1

0x55bd,	// (0x00036644) list_double_number_pane_g2_ParamLimits

0x55bd,	// (0x00036644) list_double_number_pane_g2

0x0001,

0xf635,	// (0x000406bc) list_double_number_pane_g_ParamLimits

0xf635,	// (0x000406bc) list_double_number_pane_g

0x41b1,	// (0x00035238) list_double_number_pane_t1_ParamLimits

0x41b1,	// (0x00035238) list_double_number_pane_t1

0x41c3,	// (0x0003524a) list_double_number_pane_t2_ParamLimits

0x41c3,	// (0x0003524a) list_double_number_pane_t2

0x41d9,	// (0x00035260) list_double_number_pane_t3_ParamLimits

0x41d9,	// (0x00035260) list_double_number_pane_t3

0x0002,

0xf649,	// (0x000406d0) list_double_number_pane_t_ParamLimits

0xf649,	// (0x000406d0) list_double_number_pane_t

0x41eb,	// (0x00035272) list_double_graphic_pane_g1_ParamLimits

0x41eb,	// (0x00035272) list_double_graphic_pane_g1

0x55c9,	// (0x00036650) list_double_graphic_pane_g2_ParamLimits

0x55c9,	// (0x00036650) list_double_graphic_pane_g2

0x55d8,	// (0x0003665f) list_double_graphic_pane_g3_ParamLimits

0x55d8,	// (0x0003665f) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x000406d7) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x000406d7) list_double_graphic_pane_g

0x4203,	// (0x0003528a) list_double_graphic_pane_t1_ParamLimits

0x4203,	// (0x0003528a) list_double_graphic_pane_t1

0x4219,	// (0x000352a0) list_double_graphic_pane_t2_ParamLimits

0x4219,	// (0x000352a0) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x000406e0) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x000406e0) list_double_graphic_pane_t

0x422b,	// (0x000352b2) list_double2_graphic_pane_g1_ParamLimits

0x422b,	// (0x000352b2) list_double2_graphic_pane_g1

0x55e4,	// (0x0003666b) list_double2_graphic_pane_g2_ParamLimits

0x55e4,	// (0x0003666b) list_double2_graphic_pane_g2

0x55f0,	// (0x00036677) list_double2_graphic_pane_g3_ParamLimits

0x55f0,	// (0x00036677) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x000406e5) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x000406e5) list_double2_graphic_pane_g

0x4237,	// (0x000352be) list_double2_graphic_pane_t1_ParamLimits

0x4237,	// (0x000352be) list_double2_graphic_pane_t1

0x424d,	// (0x000352d4) list_double2_graphic_pane_t2_ParamLimits

0x424d,	// (0x000352d4) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x000406ec) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x000406ec) list_double2_graphic_pane_t

0x425f,	// (0x000352e6) list_double_large_graphic_pane_g1_ParamLimits

0x425f,	// (0x000352e6) list_double_large_graphic_pane_g1

0x428a,	// (0x00035311) list_double_large_graphic_pane_g2_ParamLimits

0x428a,	// (0x00035311) list_double_large_graphic_pane_g2

0x55bd,	// (0x00036644) list_double_large_graphic_pane_g3_ParamLimits

0x55bd,	// (0x00036644) list_double_large_graphic_pane_g3

0x42a0,	// (0x00035327) list_double_large_graphic_pane_g4_ParamLimits

0x42a0,	// (0x00035327) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x000406f1) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x000406f1) list_double_large_graphic_pane_g

0x42b3,	// (0x0003533a) list_double_large_graphic_pane_t1_ParamLimits

0x42b3,	// (0x0003533a) list_double_large_graphic_pane_t1

0x42cc,	// (0x00035353) list_double_large_graphic_pane_t2_ParamLimits

0x42cc,	// (0x00035353) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x000406fc) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x000406fc) list_double_large_graphic_pane_t

0x5611,	// (0x00036698) list_double2_large_graphic_pane_g1_ParamLimits

0x5611,	// (0x00036698) list_double2_large_graphic_pane_g1

0x561d,	// (0x000366a4) list_double2_large_graphic_pane_g2_ParamLimits

0x561d,	// (0x000366a4) list_double2_large_graphic_pane_g2

0x55f0,	// (0x00036677) list_double2_large_graphic_pane_g3_ParamLimits

0x55f0,	// (0x00036677) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x00040701) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x00040701) list_double2_large_graphic_pane_g

0x42de,	// (0x00035365) list_double2_large_graphic_pane_t1_ParamLimits

0x42de,	// (0x00035365) list_double2_large_graphic_pane_t1

0x42f4,	// (0x0003537b) list_double2_large_graphic_pane_t2_ParamLimits

0x42f4,	// (0x0003537b) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x00040708) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x00040708) list_double2_large_graphic_pane_t

0x4306,	// (0x0003538d) list_double_heading_pane_g1_ParamLimits

0x4306,	// (0x0003538d) list_double_heading_pane_g1

0x562e,	// (0x000366b5) list_double_heading_pane_g2_ParamLimits

0x562e,	// (0x000366b5) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004070d) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004070d) list_double_heading_pane_g

0x4317,	// (0x0003539e) list_double_heading_pane_t1_ParamLimits

0x4317,	// (0x0003539e) list_double_heading_pane_t1

0x419f,	// (0x00035226) list_double_heading_pane_t2_ParamLimits

0x419f,	// (0x00035226) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x00040712) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x00040712) list_double_heading_pane_t

0x432d,	// (0x000353b4) list_double_graphic_heading_pane_g1_ParamLimits

0x432d,	// (0x000353b4) list_double_graphic_heading_pane_g1

0x4306,	// (0x0003538d) list_double_graphic_heading_pane_g2_ParamLimits

0x4306,	// (0x0003538d) list_double_graphic_heading_pane_g2

0x562e,	// (0x000366b5) list_double_graphic_heading_pane_g3_ParamLimits

0x562e,	// (0x000366b5) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x00040717) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x00040717) list_double_graphic_heading_pane_g

0x4339,	// (0x000353c0) list_double_graphic_heading_pane_t1_ParamLimits

0x4339,	// (0x000353c0) list_double_graphic_heading_pane_t1

0x424d,	// (0x000352d4) list_double_graphic_heading_pane_t2_ParamLimits

0x424d,	// (0x000352d4) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004071e) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004071e) list_double_graphic_heading_pane_t

0x434f,	// (0x000353d6) list_double_time_pane_g1_ParamLimits

0x434f,	// (0x000353d6) list_double_time_pane_g1

0x4360,	// (0x000353e7) list_double_time_pane_g2_ParamLimits

0x4360,	// (0x000353e7) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x00040723) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x00040723) list_double_time_pane_g

0x436c,	// (0x000353f3) list_double_time_pane_t1_ParamLimits

0x436c,	// (0x000353f3) list_double_time_pane_t1

0x4382,	// (0x00035409) list_double_time_pane_t2_ParamLimits

0x4382,	// (0x00035409) list_double_time_pane_t2

0x4394,	// (0x0003541b) list_double_time_pane_t3_ParamLimits

0x4394,	// (0x0003541b) list_double_time_pane_t3

0x43a6,	// (0x0003542d) list_double_time_pane_t4_ParamLimits

0x43a6,	// (0x0003542d) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x00040728) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x00040728) list_double_time_pane_t

0x43b8,	// (0x0003543f) list_setting_pane_g1_ParamLimits

0x43b8,	// (0x0003543f) list_setting_pane_g1

0x43c4,	// (0x0003544b) list_setting_pane_g2_ParamLimits

0x43c4,	// (0x0003544b) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x00040731) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x00040731) list_setting_pane_g

0x43d0,	// (0x00035457) list_setting_pane_t1_ParamLimits

0x43d0,	// (0x00035457) list_setting_pane_t1

0x43ea,	// (0x00035471) list_setting_pane_t2_ParamLimits

0x43ea,	// (0x00035471) list_setting_pane_t2

0x0002,

0xf6af,	// (0x00040736) list_setting_pane_t_ParamLimits

0xf6af,	// (0x00040736) list_setting_pane_t

0x4427,	// (0x000354ae) set_value_pane_cp_ParamLimits

0x4427,	// (0x000354ae) set_value_pane_cp

0x4433,	// (0x000354ba) list_setting_number_pane_g1_ParamLimits

0x4433,	// (0x000354ba) list_setting_number_pane_g1

0x443f,	// (0x000354c6) list_setting_number_pane_g2_ParamLimits

0x443f,	// (0x000354c6) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004073d) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004073d) list_setting_number_pane_g

0x444b,	// (0x000354d2) list_setting_number_pane_t1_ParamLimits

0x444b,	// (0x000354d2) list_setting_number_pane_t1

0x4464,	// (0x000354eb) list_setting_number_pane_t2_ParamLimits

0x4464,	// (0x000354eb) list_setting_number_pane_t2

0x447e,	// (0x00035505) list_setting_number_pane_t3_ParamLimits

0x447e,	// (0x00035505) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x00040742) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x00040742) list_setting_number_pane_t

0x4427,	// (0x000354ae) set_value_pane_ParamLimits

0x4427,	// (0x000354ae) set_value_pane

0x0d0d,	// (0x00031d94) bg_set_opt_pane_ParamLimits

0x0d0d,	// (0x00031d94) bg_set_opt_pane

0x44c1,	// (0x00035548) set_value_pane_t1

0x0d2e,	// (0x00031db5) slider_set_pane_cp3

0x0d37,	// (0x00031dbe) volume_small_pane_cp

0x0d40,	// (0x00031dc7) list_form_gen_pane

0x0d49,	// (0x00031dd0) scroll_pane_cp8

0x44d7,	// (0x0003555e) form_field_data_pane_ParamLimits

0x44d7,	// (0x0003555e) form_field_data_pane

0x44f7,	// (0x0003557e) form_field_data_wide_pane_ParamLimits

0x44f7,	// (0x0003557e) form_field_data_wide_pane

0x4518,	// (0x0003559f) form_field_popup_pane_ParamLimits

0x4518,	// (0x0003559f) form_field_popup_pane

0x4536,	// (0x000355bd) form_field_popup_wide_pane_ParamLimits

0x4536,	// (0x000355bd) form_field_popup_wide_pane

0x4553,	// (0x000355da) form_field_slider_pane_ParamLimits

0x4553,	// (0x000355da) form_field_slider_pane

0x4566,	// (0x000355ed) form_field_slider_wide_pane_ParamLimits

0x4566,	// (0x000355ed) form_field_slider_wide_pane

0x0d5a,	// (0x00031de1) data_form_pane

0x4583,	// (0x0003560a) form_field_data_pane_t1

0x0d66,	// (0x00031ded) input_focus_pane

0x0d74,	// (0x00031dfb) data_form_wide_pane

0x45a9,	// (0x00035630) form_field_data_wide_pane_t1

0x0ae1,	// (0x00031b68) input_focus_pane_cp6

0x45cb,	// (0x00035652) form_field_popup_pane_t1

0x0d66,	// (0x00031ded) input_focus_pane_cp7

0x0da0,	// (0x00031e27) list_form_pane

0x45ed,	// (0x00035674) form_field_popup_wide_pane_t1

0x0d66,	// (0x00031ded) input_focus_pane_cp8

0x0dac,	// (0x00031e33) list_form_wide_pane

0x460a,	// (0x00035691) form_field_slider_pane_t1_ParamLimits

0x460a,	// (0x00035691) form_field_slider_pane_t1

0x4622,	// (0x000356a9) form_field_slider_pane_t2_ParamLimits

0x4622,	// (0x000356a9) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x00040752) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x00040752) form_field_slider_pane_t

0x0711,	// (0x00031798) input_focus_pane_cp9_ParamLimits

0x0711,	// (0x00031798) input_focus_pane_cp9

0x4637,	// (0x000356be) slider_cont_pane_ParamLimits

0x4637,	// (0x000356be) slider_cont_pane

0x0dbb,	// (0x00031e42) form_field_slider_wide_pane_t1_ParamLimits

0x0dbb,	// (0x00031e42) form_field_slider_wide_pane_t1

0x464b,	// (0x000356d2) form_field_slider_wide_pane_t2_ParamLimits

0x464b,	// (0x000356d2) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x00040757) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x00040757) form_field_slider_wide_pane_t

0x0711,	// (0x00031798) input_focus_pane_cp10_ParamLimits

0x0711,	// (0x00031798) input_focus_pane_cp10

0x465d,	// (0x000356e4) slider_cont_pane_cp1_ParamLimits

0x465d,	// (0x000356e4) slider_cont_pane_cp1

0x4671,	// (0x000356f8) slider_form_pane_cp

0x0dcd,	// (0x00031e54) input_focus_pane_g1

0x0dd5,	// (0x00031e5c) input_focus_pane_g2

0x0ddd,	// (0x00031e64) input_focus_pane_g3

0x0de5,	// (0x00031e6c) input_focus_pane_g4

0x0ded,	// (0x00031e74) input_focus_pane_g5

0x0df5,	// (0x00031e7c) input_focus_pane_g6

0x0dfd,	// (0x00031e84) input_focus_pane_g7

0x0e05,	// (0x00031e8c) input_focus_pane_g8

0x0e0d,	// (0x00031e94) input_focus_pane_g9

0x06b9,	// (0x00031740) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004075c) input_focus_pane_g

0x2202,	// (0x00033289) wait_border_pane_g3_copy1

0x4679,	// (0x00035700) data_form_pane_t1

0x06b9,	// (0x00031740) wait_anim_pane_g1_copy1

0x48d3,	// (0x0003595a) data_form_wide_pane_t1

0x4694,	// (0x0003571b) list_form_graphic_pane_cp_ParamLimits

0x4694,	// (0x0003571b) list_form_graphic_pane_cp

0x2e23,	// (0x00033eaa) slider_form_pane_g1

0x2e2c,	// (0x00033eb3) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x00040a54) slider_form_pane_g

0x46ab,	// (0x00035732) list_form_graphic_pane_ParamLimits

0x46ab,	// (0x00035732) list_form_graphic_pane

0x46c5,	// (0x0003574c) list_form_graphic_pane_g1

0x46cd,	// (0x00035754) list_form_graphic_pane_t1_ParamLimits

0x46cd,	// (0x00035754) list_form_graphic_pane_t1

0x071f,	// (0x000317a6) list_highlight_pane_cp5_ParamLimits

0x071f,	// (0x000317a6) list_highlight_pane_cp5

0x46e2,	// (0x00035769) find_pane_g1

0x0e15,	// (0x00031e9c) input_find_pane

0x46eb,	// (0x00035772) input_find_pane_g1_ParamLimits

0x46eb,	// (0x00035772) input_find_pane_g1

0x46f7,	// (0x0003577e) input_find_pane_t1_ParamLimits

0x46f7,	// (0x0003577e) input_find_pane_t1

0x470c,	// (0x00035793) input_find_pane_t2_ParamLimits

0x470c,	// (0x00035793) input_find_pane_t2

0x0001,

0xf6ea,	// (0x00040771) input_find_pane_t_ParamLimits

0xf6ea,	// (0x00040771) input_find_pane_t

0x0e1e,	// (0x00031ea5) input_focus_pane_cp5_ParamLimits

0x0e1e,	// (0x00031ea5) input_focus_pane_cp5

0x5646,	// (0x000366cd) bg_popup_window_pane_cp2_ParamLimits

0x5646,	// (0x000366cd) bg_popup_window_pane_cp2

0x5653,	// (0x000366da) listscroll_menu_pane_ParamLimits

0x5653,	// (0x000366da) listscroll_menu_pane

0x565f,	// (0x000366e6) popup_submenu_window_ParamLimits

0x565f,	// (0x000366e6) popup_submenu_window

0x0e2c,	// (0x00031eb3) find_popup_pane_g1

0x0e34,	// (0x00031ebb) input_popup_find_pane_cp

0x0e1e,	// (0x00031ea5) input_focus_pane_cp4_ParamLimits

0x0e1e,	// (0x00031ea5) input_focus_pane_cp4

0x0e3e,	// (0x00031ec5) input_popup_find_pane_t1_ParamLimits

0x0e3e,	// (0x00031ec5) input_popup_find_pane_t1

0x06c3,	// (0x0003174a) bg_popup_sub_pane_cp

0x0e6c,	// (0x00031ef3) listscroll_popup_sub_pane

0x0e74,	// (0x00031efb) list_submenu_pane_ParamLimits

0x0e74,	// (0x00031efb) list_submenu_pane

0x0e85,	// (0x00031f0c) scroll_pane_cp4

0x0e8d,	// (0x00031f14) list_single_popup_submenu_pane_ParamLimits

0x0e8d,	// (0x00031f14) list_single_popup_submenu_pane

0x0ea0,	// (0x00031f27) list_single_popup_submenu_pane_g1

0x0ea8,	// (0x00031f2f) list_single_popup_submenu_pane_t1_ParamLimits

0x0ea8,	// (0x00031f2f) list_single_popup_submenu_pane_t1

0x071f,	// (0x000317a6) bg_active_tab_pane_cp1_ParamLimits

0x071f,	// (0x000317a6) bg_active_tab_pane_cp1

0x5691,	// (0x00036718) tabs_2_active_pane_g1

0x5699,	// (0x00036720) tabs_2_active_pane_t1

0x071f,	// (0x000317a6) bg_passive_tab_pane_cp1_ParamLimits

0x071f,	// (0x000317a6) bg_passive_tab_pane_cp1

0x5691,	// (0x00036718) tabs_2_passive_pane_g1

0x5699,	// (0x00036720) tabs_2_passive_pane_t1

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp4

0x56ab,	// (0x00036732) tabs_2_long_active_pane_t1

0x56be,	// (0x00036745) bg_passive_tab_pane_cp4

0xdcae,	// (0x0003ed35) list_single_midp_graphic_pane_g4_ParamLimits

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp5

0x56ca,	// (0x00036751) tabs_3_long_active_pane_t1

0x56be,	// (0x00036745) bg_passive_tab_pane_cp5

0xdcae,	// (0x0003ed35) list_single_midp_graphic_pane_g4

0x071f,	// (0x000317a6) bg_popup_window_pane_cp13_ParamLimits

0x071f,	// (0x000317a6) bg_popup_window_pane_cp13

0x0ec6,	// (0x00031f4d) listscroll_popup_fast_pane_ParamLimits

0x0ec6,	// (0x00031f4d) listscroll_popup_fast_pane

0x0ed5,	// (0x00031f5c) grid_popup_fast_pane_ParamLimits

0x0ed5,	// (0x00031f5c) grid_popup_fast_pane

0x0ee7,	// (0x00031f6e) scroll_pane_cp9_ParamLimits

0x0ee7,	// (0x00031f6e) scroll_pane_cp9

0x8a82,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8a82,	// (0x00039b09) list_single_graphic_hl_pane_t1_cp2

0x0f0b,	// (0x00031f92) input_focus_pane_cp20_ParamLimits

0x0f0b,	// (0x00031f92) input_focus_pane_cp20

0x0f19,	// (0x00031fa0) query_popup_data_pane_t1_ParamLimits

0x0f19,	// (0x00031fa0) query_popup_data_pane_t1

0x0f2c,	// (0x00031fb3) query_popup_data_pane_t2_ParamLimits

0x0f2c,	// (0x00031fb3) query_popup_data_pane_t2

0x0f72,	// (0x00031ff9) query_popup_data_pane_t3_ParamLimits

0x0f72,	// (0x00031ff9) query_popup_data_pane_t3

0x0fb3,	// (0x0003203a) query_popup_data_pane_t4_ParamLimits

0x0fb3,	// (0x0003203a) query_popup_data_pane_t4

0x0fef,	// (0x00032076) query_popup_data_pane_t5_ParamLimits

0x0fef,	// (0x00032076) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x00040776) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x00040776) query_popup_data_pane_t

0x0dcd,	// (0x00031e54) bg_set_opt_pane_g1

0x0dd5,	// (0x00031e5c) bg_set_opt_pane_g2

0x0ddd,	// (0x00031e64) bg_set_opt_pane_g3

0x0de5,	// (0x00031e6c) bg_set_opt_pane_g4

0x0ded,	// (0x00031e74) bg_set_opt_pane_g5

0x0df5,	// (0x00031e7c) bg_set_opt_pane_g6

0x0dfd,	// (0x00031e84) bg_set_opt_pane_g7

0x0e05,	// (0x00031e8c) bg_set_opt_pane_g8

0x0e0d,	// (0x00031e94) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x00040781) bg_set_opt_pane_g

0xd91d,	// (0x0003e9a4) control_top_pane_stacon_ParamLimits

0xd91d,	// (0x0003e9a4) control_top_pane_stacon

0xd970,	// (0x0003e9f7) signal_pane_stacon_ParamLimits

0xd970,	// (0x0003e9f7) signal_pane_stacon

0x144e,	// (0x000324d5) stacon_top_pane_g1_ParamLimits

0x144e,	// (0x000324d5) stacon_top_pane_g1

0xd995,	// (0x0003ea1c) title_pane_stacon_ParamLimits

0xd995,	// (0x0003ea1c) title_pane_stacon

0xd9bf,	// (0x0003ea46) uni_indicator_pane_stacon_ParamLimits

0xd9bf,	// (0x0003ea46) uni_indicator_pane_stacon

0xd9d4,	// (0x0003ea5b) battery_pane_stacon_ParamLimits

0xd9d4,	// (0x0003ea5b) battery_pane_stacon

0xda18,	// (0x0003ea9f) control_bottom_pane_stacon_ParamLimits

0xda18,	// (0x0003ea9f) control_bottom_pane_stacon

0xda3b,	// (0x0003eac2) navi_pane_stacon_ParamLimits

0xda3b,	// (0x0003eac2) navi_pane_stacon

0x1470,	// (0x000324f7) stacon_bottom_pane_g1_ParamLimits

0x1470,	// (0x000324f7) stacon_bottom_pane_g1

0xd67e,	// (0x0003e705) aid_levels_signal_lsc_ParamLimits

0xd67e,	// (0x0003e705) aid_levels_signal_lsc

0xd695,	// (0x0003e71c) signal_pane_stacon_g1_ParamLimits

0xd695,	// (0x0003e71c) signal_pane_stacon_g1

0xd6a9,	// (0x0003e730) signal_pane_stacon_g2_ParamLimits

0xd6a9,	// (0x0003e730) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x00040794) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x00040794) signal_pane_stacon_g

0xd6de,	// (0x0003e765) title_pane_stacon_t1_ParamLimits

0xd6de,	// (0x0003e765) title_pane_stacon_t1

0x1033,	// (0x000320ba) uni_indicator_pane_stacon_g1

0x103d,	// (0x000320c4) uni_indicator_pane_stacon_g2

0x1047,	// (0x000320ce) uni_indicator_pane_stacon_g3

0x1051,	// (0x000320d8) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x000407a0) uni_indicator_pane_stacon_g

0xd703,	// (0x0003e78a) control_top_pane_stacon_g1

0xd70b,	// (0x0003e792) control_top_pane_stacon_t1_ParamLimits

0xd70b,	// (0x0003e792) control_top_pane_stacon_t1

0xd742,	// (0x0003e7c9) aid_levels_battery_lsc_ParamLimits

0xd742,	// (0x0003e7c9) aid_levels_battery_lsc

0xd75a,	// (0x0003e7e1) battery_pane_stacon_g1_ParamLimits

0xd75a,	// (0x0003e7e1) battery_pane_stacon_g1

0xd76d,	// (0x0003e7f4) battery_pane_stacon_g2_ParamLimits

0xd76d,	// (0x0003e7f4) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x000407a9) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x000407a9) battery_pane_stacon_g

0xd7ab,	// (0x0003e832) navi_icon_pane_stacon

0xd7bf,	// (0x0003e846) navi_navi_pane_stacon

0xd7ab,	// (0x0003e832) navi_text_pane_stacon

0xd703,	// (0x0003e78a) control_bottom_pane_stacon_g1

0xd7d3,	// (0x0003e85a) control_bottom_pane_stacon_t1_ParamLimits

0xd7d3,	// (0x0003e85a) control_bottom_pane_stacon_t1

0x5868,	// (0x000368ef) grid_app_pane_ParamLimits

0x5868,	// (0x000368ef) grid_app_pane

0x588a,	// (0x00036911) scroll_pane_cp15_ParamLimits

0x588a,	// (0x00036911) scroll_pane_cp15

0x589f,	// (0x00036926) cell_app_pane_ParamLimits

0x589f,	// (0x00036926) cell_app_pane

0x58c9,	// (0x00036950) cell_app_pane_g1_ParamLimits

0x58c9,	// (0x00036950) cell_app_pane_g1

0x1075,	// (0x000320fc) cell_app_pane_g2_ParamLimits

0x1075,	// (0x000320fc) cell_app_pane_g2

0x0001,

0xf727,	// (0x000407ae) cell_app_pane_g_ParamLimits

0xf727,	// (0x000407ae) cell_app_pane_g

0x1081,	// (0x00032108) cell_app_pane_t1_ParamLimits

0x1081,	// (0x00032108) cell_app_pane_t1

0x1093,	// (0x0003211a) grid_highlight_pane_ParamLimits

0x1093,	// (0x0003211a) grid_highlight_pane

0x0dcd,	// (0x00031e54) cell_highlight_pane_g1

0x0dd5,	// (0x00031e5c) cell_highlight_pane_g2

0x0ddd,	// (0x00031e64) cell_highlight_pane_g3

0x0de5,	// (0x00031e6c) cell_highlight_pane_g4

0x0ded,	// (0x00031e74) cell_highlight_pane_g5

0x0df5,	// (0x00031e7c) cell_highlight_pane_g6

0x0dfd,	// (0x00031e84) cell_highlight_pane_g7

0x0e05,	// (0x00031e8c) cell_highlight_pane_g8

0x0e0d,	// (0x00031e94) cell_highlight_pane_g9

0x06b9,	// (0x00031740) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004075c) cell_highlight_pane_g

0x10a4,	// (0x0003212b) bg_scroll_pane

0xd81d,	// (0x0003e8a4) scroll_handle_pane

0x10eb,	// (0x00032172) scroll_bg_pane_g1

0x1100,	// (0x00032187) scroll_bg_pane_g2

0x1118,	// (0x0003219f) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x000407b3) scroll_bg_pane_g

0x112d,	// (0x000321b4) scroll_handle_focus_pane_ParamLimits

0x112d,	// (0x000321b4) scroll_handle_focus_pane

0x10eb,	// (0x00032172) scroll_handle_pane_g1

0x113a,	// (0x000321c1) scroll_handle_pane_g2

0x1118,	// (0x0003219f) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x000407ba) scroll_handle_pane_g

0x0e1e,	// (0x00031ea5) bg_popup_sub_pane_cp21_ParamLimits

0x0e1e,	// (0x00031ea5) bg_popup_sub_pane_cp21

0x114e,	// (0x000321d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x114e,	// (0x000321d5) popup_fep_japan_predictive_window_t1

0x1165,	// (0x000321ec) popup_fep_japan_predictive_window_t2_ParamLimits

0x1165,	// (0x000321ec) popup_fep_japan_predictive_window_t2

0x1198,	// (0x0003221f) popup_fep_japan_predictive_window_t3_ParamLimits

0x1198,	// (0x0003221f) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x000407c1) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x000407c1) popup_fep_japan_predictive_window_t

0x06c3,	// (0x0003174a) bg_popup_sub_pane_cp23

0x11cf,	// (0x00032256) listscroll_japin_cand_pane

0x11d7,	// (0x0003225e) popup_fep_japan_candidate_window_t1

0x11e5,	// (0x0003226c) candidate_pane_ParamLimits

0x11e5,	// (0x0003226c) candidate_pane

0x11f7,	// (0x0003227e) scroll_pane_cp30

0x11ff,	// (0x00032286) list_single_popup_jap_candidate_pane_ParamLimits

0x11ff,	// (0x00032286) list_single_popup_jap_candidate_pane

0x06c3,	// (0x0003174a) list_highlight_pane_cp30

0x1213,	// (0x0003229a) list_single_popup_jap_candidate_pane_t1

0x1222,	// (0x000322a9) level_1_signal

0x122f,	// (0x000322b6) level_2_signal

0x123c,	// (0x000322c3) level_3_signal

0x1249,	// (0x000322d0) level_4_signal

0x1256,	// (0x000322dd) level_5_signal

0x1263,	// (0x000322ea) level_6_signal

0x1270,	// (0x000322f7) level_7_signal

0x1222,	// (0x000322a9) level_1_battery

0x122f,	// (0x000322b6) level_2_battery

0x123c,	// (0x000322c3) level_3_battery

0x1249,	// (0x000322d0) level_4_battery

0x1256,	// (0x000322dd) level_5_battery

0x1263,	// (0x000322ea) level_6_battery

0x1270,	// (0x000322f7) level_7_battery

0x1295,	// (0x0003231c) list_menu_pane_ParamLimits

0x1295,	// (0x0003231c) list_menu_pane

0x12a6,	// (0x0003232d) scroll_pane_cp25_ParamLimits

0x12a6,	// (0x0003232d) scroll_pane_cp25

0x12bf,	// (0x00032346) list_double2_graphic_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double2_graphic_pane_cp2

0x12bf,	// (0x00032346) list_double2_large_graphic_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double2_large_graphic_pane_cp2

0x12bf,	// (0x00032346) list_double2_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double2_pane_cp2

0x12bf,	// (0x00032346) list_double_graphic_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double_graphic_pane_cp2

0x12bf,	// (0x00032346) list_double_large_graphic_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double_large_graphic_pane_cp2

0x12bf,	// (0x00032346) list_double_number_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double_number_pane_cp2

0x12bf,	// (0x00032346) list_double_pane_cp2_ParamLimits

0x12bf,	// (0x00032346) list_double_pane_cp2

0x595a,	// (0x000369e1) list_single_2graphic_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_2graphic_pane_cp2

0x595a,	// (0x000369e1) list_single_graphic_heading_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_graphic_heading_pane_cp2

0x595a,	// (0x000369e1) list_single_graphic_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_graphic_pane_cp2

0x595a,	// (0x000369e1) list_single_heading_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_heading_pane_cp2

0x12cf,	// (0x00032356) list_single_large_graphic_pane_cp2_ParamLimits

0x12cf,	// (0x00032356) list_single_large_graphic_pane_cp2

0x595a,	// (0x000369e1) list_single_number_heading_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_number_heading_pane_cp2

0x595a,	// (0x000369e1) list_single_number_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_number_pane_cp2

0x595a,	// (0x000369e1) list_single_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_pane_cp2

0x12e9,	// (0x00032370) bg_popup_sub_pane_cp22

0xd8cf,	// (0x0003e956) popup_side_volume_key_window_g1

0xd8f9,	// (0x0003e980) popup_side_volume_key_window_t1

0xd915,	// (0x0003e99c) volume_small_pane_cp1

0x0711,	// (0x00031798) bg_popup_sub_pane_cp24_ParamLimits

0x0711,	// (0x00031798) bg_popup_sub_pane_cp24

0x12ff,	// (0x00032386) fep_china_uni_candidate_pane_ParamLimits

0x12ff,	// (0x00032386) fep_china_uni_candidate_pane

0x1313,	// (0x0003239a) fep_china_uni_entry_pane

0x1323,	// (0x000323aa) popup_fep_china_uni_window_g1

0x133f,	// (0x000323c6) fep_china_uni_entry_pane_g1

0x1347,	// (0x000323ce) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x000407ee) fep_china_uni_entry_pane_g

0x134f,	// (0x000323d6) fep_entry_item_pane

0x1359,	// (0x000323e0) fep_candidate_item_pane

0x1361,	// (0x000323e8) fep_china_uni_candidate_pane_g1

0x1369,	// (0x000323f0) fep_china_uni_candidate_pane_g2

0x1371,	// (0x000323f8) fep_china_uni_candidate_pane_g3

0x1379,	// (0x00032400) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x000407f3) fep_china_uni_candidate_pane_g

0x06b9,	// (0x00031740) fep_entry_item_pane_g1

0x1381,	// (0x00032408) fep_entry_item_pane_t1_ParamLimits

0x1381,	// (0x00032408) fep_entry_item_pane_t1

0x1397,	// (0x0003241e) fep_candidate_item_pane_t1_ParamLimits

0x1397,	// (0x0003241e) fep_candidate_item_pane_t1

0x13ac,	// (0x00032433) fep_candidate_item_pane_t2_ParamLimits

0x13ac,	// (0x00032433) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x000407fc) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x000407fc) fep_candidate_item_pane_t

0x071f,	// (0x000317a6) list_highlight_pane_cp31_ParamLimits

0x071f,	// (0x000317a6) list_highlight_pane_cp31

0x13be,	// (0x00032445) level_1_signal_lsc

0x13c7,	// (0x0003244e) level_2_signal_lsc

0x13d0,	// (0x00032457) level_3_signal_lsc

0x13d9,	// (0x00032460) level_4_signal_lsc

0x13e2,	// (0x00032469) level_5_signal_lsc

0x13eb,	// (0x00032472) level_6_signal_lsc

0x13f4,	// (0x0003247b) level_7_signal_lsc

0x13f4,	// (0x0003247b) level_1_battery_lsc

0x13fd,	// (0x00032484) level_2_battery_lsc

0x1406,	// (0x0003248d) level_3_battery_lsc

0x140f,	// (0x00032496) level_4_battery_lsc

0x1418,	// (0x0003249f) level_5_battery_lsc

0x1421,	// (0x000324a8) level_6_battery_lsc

0x13be,	// (0x00032445) level_7_battery_lsc

0x142a,	// (0x000324b1) scroll_handle_focus_pane_g1

0x1433,	// (0x000324ba) scroll_handle_focus_pane_g2

0x143c,	// (0x000324c3) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x00040801) scroll_handle_focus_pane_g

0x4721,	// (0x000357a8) list_single_2graphic_pane_g1_ParamLimits

0x4721,	// (0x000357a8) list_single_2graphic_pane_g1

0x4105,	// (0x0003518c) list_single_2graphic_pane_g2_ParamLimits

0x4105,	// (0x0003518c) list_single_2graphic_pane_g2

0x406a,	// (0x000350f1) list_single_2graphic_pane_g3_ParamLimits

0x406a,	// (0x000350f1) list_single_2graphic_pane_g3

0x472d,	// (0x000357b4) list_single_2graphic_pane_g4_ParamLimits

0x472d,	// (0x000357b4) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x00040808) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x00040808) list_single_2graphic_pane_g

0x473e,	// (0x000357c5) list_single_2graphic_pane_t1_ParamLimits

0x473e,	// (0x000357c5) list_single_2graphic_pane_t1

0x5a65,	// (0x00036aec) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a65,	// (0x00036aec) list_double2_graphic_large_graphic_pane_g1

0x561d,	// (0x000366a4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x561d,	// (0x000366a4) list_double2_graphic_large_graphic_pane_g2

0x55f0,	// (0x00036677) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x55f0,	// (0x00036677) list_double2_graphic_large_graphic_pane_g3

0x5a75,	// (0x00036afc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a75,	// (0x00036afc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x00040811) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x00040811) list_double2_graphic_large_graphic_pane_g

0x476c,	// (0x000357f3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x476c,	// (0x000357f3) list_double2_graphic_large_graphic_pane_t1

0x4782,	// (0x00035809) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4782,	// (0x00035809) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004081a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004081a) list_double2_graphic_large_graphic_pane_t

0x151d,	// (0x000325a4) popup_fast_swap_window_ParamLimits

0x151d,	// (0x000325a4) popup_fast_swap_window

0x1539,	// (0x000325c0) popup_side_volume_key_window

0x1553,	// (0x000325da) stacon_top_pane

0x155d,	// (0x000325e4) status_pane_ParamLimits

0x155d,	// (0x000325e4) status_pane

0x1553,	// (0x000325da) status_small_pane

0x06c3,	// (0x0003174a) control_pane

0x06c3,	// (0x0003174a) stacon_bottom_pane

0x0d49,	// (0x00031dd0) scroll_pane_cp121

0x0d40,	// (0x00031dc7) set_content_pane

0x5a8a,	// (0x00036b11) bg_active_tab_pane_g1_cp1

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp1

0x5a81,	// (0x00036b08) bg_active_tab_pane_g3_cp1

0x5a8a,	// (0x00036b11) bg_passive_tab_pane_g1_cp1

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp1

0x5a81,	// (0x00036b08) bg_passive_tab_pane_g3_cp1

0x5a9c,	// (0x00036b23) bg_active_tab_pane_g1_cp2

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp2

0x5a93,	// (0x00036b1a) bg_active_tab_pane_g3_cp2

0x5a9c,	// (0x00036b23) bg_passive_tab_pane_g1_cp2

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp2

0x5a93,	// (0x00036b1a) bg_passive_tab_pane_g3_cp2

0x5aae,	// (0x00036b35) bg_active_tab_pane_g1_cp3

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp3

0x5aa5,	// (0x00036b2c) bg_active_tab_pane_g3_cp3

0x5aae,	// (0x00036b35) bg_passive_tab_pane_g1_cp3

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp3

0x5aa5,	// (0x00036b2c) bg_passive_tab_pane_g3_cp3

0x5ac2,	// (0x00036b49) bg_active_tab_pane_g1_cp4

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp4

0x5ab7,	// (0x00036b3e) bg_active_tab_pane_g3_cp4

0x5ac2,	// (0x00036b49) bg_passive_tab_pane_g1_cp4

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp4

0x5ab7,	// (0x00036b3e) bg_passive_tab_pane_g3_cp4

0x148c,	// (0x00032513) bg_active_tab_pane_g1_cp5

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp5

0x1495,	// (0x0003251c) bg_active_tab_pane_g3_cp5

0x148c,	// (0x00032513) bg_passive_tab_pane_g1_cp5

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp5

0x1495,	// (0x0003251c) bg_passive_tab_pane_g3_cp5

0x7021,	// (0x000380a8) list_set_graphic_pane_ParamLimits

0x7021,	// (0x000380a8) list_set_graphic_pane

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp4

0x149e,	// (0x00032525) list_set_graphic_pane_g1_ParamLimits

0x149e,	// (0x00032525) list_set_graphic_pane_g1

0x14aa,	// (0x00032531) list_set_graphic_pane_g2_ParamLimits

0x14aa,	// (0x00032531) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004081f) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004081f) list_set_graphic_pane_g

0x0009,

0xfafe,	// (0x00040b85) volume_small_pane_cp_g

0x14ce,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x14ce,	// (0x00032555) list_double2_large_graphic_pane_g1_cp2

0x14dc,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x14dc,	// (0x00032563) list_double2_large_graphic_pane_g2_cp2

0x14ed,	// (0x00032574) list_double2_large_graphic_pane_g3_cp2

0x14f5,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x14f5,	// (0x0003257c) list_double2_large_graphic_pane_t1_cp2

0x150b,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x150b,	// (0x00032592) list_double2_large_graphic_pane_t2_cp2

0x2bb5,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2bb5,	// (0x00033c3c) list_double_large_graphic_pane_g1_cp2

0x2bc8,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2bc8,	// (0x00033c4f) list_double_large_graphic_pane_g2_cp2

0x167b,	// (0x00032702) list_double_large_graphic_pane_g3_cp2

0x2bd9,	// (0x00033c60) list_double_large_graphic_pane_g4_cp

0x2be1,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2be1,	// (0x00033c68) list_double_large_graphic_pane_t1_cp2

0x2bf8,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2bf8,	// (0x00033c7f) list_double_large_graphic_pane_t2_cp2

0x156b,	// (0x000325f2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x156b,	// (0x000325f2) list_double2_graphic_pane_g1_cp2

0x1579,	// (0x00032600) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1579,	// (0x00032600) list_double2_graphic_pane_g2_cp2

0x158a,	// (0x00032611) list_double2_graphic_pane_g3_cp2

0x1594,	// (0x0003261b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1594,	// (0x0003261b) list_double2_graphic_pane_t1_cp2

0x15aa,	// (0x00032631) list_double2_graphic_pane_t2_cp2_ParamLimits

0x15aa,	// (0x00032631) list_double2_graphic_pane_t2_cp2

0x15bc,	// (0x00032643) list_single_number_heading_pane_g1_cp2_ParamLimits

0x15bc,	// (0x00032643) list_single_number_heading_pane_g1_cp2

0x15c8,	// (0x0003264f) list_single_number_heading_pane_g2_cp2

0x15d0,	// (0x00032657) list_single_number_heading_pane_t1_cp2_ParamLimits

0x15d0,	// (0x00032657) list_single_number_heading_pane_t1_cp2

0x15e6,	// (0x0003266d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x15e6,	// (0x0003266d) list_single_number_heading_pane_t2_cp2

0x15fa,	// (0x00032681) list_single_number_heading_pane_t3_cp2_ParamLimits

0x15fa,	// (0x00032681) list_single_number_heading_pane_t3_cp2

0x15bc,	// (0x00032643) list_single_heading_pane_g1_cp2_ParamLimits

0x15bc,	// (0x00032643) list_single_heading_pane_g1_cp2

0x15c8,	// (0x0003264f) list_single_heading_pane_g2_cp2

0x15d0,	// (0x00032657) list_single_heading_pane_t1_cp2_ParamLimits

0x15d0,	// (0x00032657) list_single_heading_pane_t1_cp2

0x29bd,	// (0x00033a44) list_single_heading_pane_t2_cp2_ParamLimits

0x29bd,	// (0x00033a44) list_single_heading_pane_t2_cp2

0x2957,	// (0x000339de) list_double_graphic_pane_g1_cp2_ParamLimits

0x2957,	// (0x000339de) list_double_graphic_pane_g1_cp2

0x2963,	// (0x000339ea) list_double_graphic_pane_g2_cp2_ParamLimits

0x2963,	// (0x000339ea) list_double_graphic_pane_g2_cp2

0x2972,	// (0x000339f9) list_double_graphic_pane_g3_cp2

0x297a,	// (0x00033a01) list_double_graphic_pane_t1_cp2_ParamLimits

0x297a,	// (0x00033a01) list_double_graphic_pane_t1_cp2

0x2990,	// (0x00033a17) list_double_graphic_pane_t2_cp2_ParamLimits

0x2990,	// (0x00033a17) list_double_graphic_pane_t2_cp2

0x166f,	// (0x000326f6) list_double_number_pane_g1_cp2_ParamLimits

0x166f,	// (0x000326f6) list_double_number_pane_g1_cp2

0x167b,	// (0x00032702) list_double_number_pane_g2_cp2

0x291b,	// (0x000339a2) list_double_number_pane_t1_cp2_ParamLimits

0x291b,	// (0x000339a2) list_double_number_pane_t1_cp2

0x292f,	// (0x000339b6) list_double_number_pane_t2_cp2_ParamLimits

0x292f,	// (0x000339b6) list_double_number_pane_t2_cp2

0x2945,	// (0x000339cc) list_double_number_pane_t3_cp2_ParamLimits

0x2945,	// (0x000339cc) list_double_number_pane_t3_cp2

0x2892,	// (0x00033919) list_single_graphic_pane_g1_cp2_ParamLimits

0x2892,	// (0x00033919) list_single_graphic_pane_g1_cp2

0x16d3,	// (0x0003275a) list_single_graphic_pane_g2_cp2_ParamLimits

0x16d3,	// (0x0003275a) list_single_graphic_pane_g2_cp2

0x16df,	// (0x00032766) list_single_graphic_pane_g3_cp2

0x2868,	// (0x000338ef) list_single_graphic_pane_t1_cp2_ParamLimits

0x2868,	// (0x000338ef) list_single_graphic_pane_t1_cp2

0x16d3,	// (0x0003275a) list_single_number_pane_g1_cp2_ParamLimits

0x16d3,	// (0x0003275a) list_single_number_pane_g1_cp2

0x16df,	// (0x00032766) list_single_number_pane_g2_cp2

0x2868,	// (0x000338ef) list_single_number_pane_t1_cp2_ParamLimits

0x2868,	// (0x000338ef) list_single_number_pane_t1_cp2

0x287e,	// (0x00033905) list_single_number_pane_t2_cp2_ParamLimits

0x287e,	// (0x00033905) list_single_number_pane_t2_cp2

0x14dc,	// (0x00032563) list_double2_pane_g1_cp2_ParamLimits

0x14dc,	// (0x00032563) list_double2_pane_g1_cp2

0x14ed,	// (0x00032574) list_double2_pane_g2_cp2

0x1647,	// (0x000326ce) list_double2_pane_t1_cp2_ParamLimits

0x1647,	// (0x000326ce) list_double2_pane_t1_cp2

0x165d,	// (0x000326e4) list_double2_pane_t2_cp2_ParamLimits

0x165d,	// (0x000326e4) list_double2_pane_t2_cp2

0x166f,	// (0x000326f6) list_double_pane_g1_cp2_ParamLimits

0x166f,	// (0x000326f6) list_double_pane_g1_cp2

0x167b,	// (0x00032702) list_double_pane_g2_cp2

0x1683,	// (0x0003270a) list_double_pane_t1_cp2_ParamLimits

0x1683,	// (0x0003270a) list_double_pane_t1_cp2

0x1699,	// (0x00032720) list_double_pane_t2_cp2_ParamLimits

0x1699,	// (0x00032720) list_double_pane_t2_cp2

0x16c3,	// (0x0003274a) list_single_pane_cp2_g3

0x16d3,	// (0x0003275a) list_single_pane_g1_cp2_ParamLimits

0x16d3,	// (0x0003275a) list_single_pane_g1_cp2

0x16df,	// (0x00032766) list_single_pane_g2_cp2

0x16e7,	// (0x0003276e) list_single_pane_t1_cp2_ParamLimits

0x16e7,	// (0x0003276e) list_single_pane_t1_cp2

0x16ff,	// (0x00032786) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x16ff,	// (0x00032786) list_single_large_graphic_pane_g1_cp2

0x170d,	// (0x00032794) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x170d,	// (0x00032794) list_single_large_graphic_pane_g2_cp2

0x1719,	// (0x000327a0) list_single_large_graphic_pane_g3_cp2

0x1721,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1721,	// (0x000327a8) list_single_large_graphic_pane_g4_cp1

0x173b,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x173b,	// (0x000327c2) list_single_large_graphic_pane_t1_cp2

0x2832,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2832,	// (0x000338b9) list_single_graphic_heading_pane_g1_cp2

0x27ff,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x27ff,	// (0x00033886) list_single_graphic_heading_pane_g4_cp2

0x16df,	// (0x00032766) list_single_graphic_heading_pane_g5_cp2

0x283e,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x283e,	// (0x000338c5) list_single_graphic_heading_pane_t1_cp2

0x2854,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2854,	// (0x000338db) list_single_graphic_heading_pane_t2_cp2

0x27f3,	// (0x0003387a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x27f3,	// (0x0003387a) list_single_2graphic_pane_g1_cp2

0x27ff,	// (0x00033886) list_single_2graphic_pane_g2_cp2_ParamLimits

0x27ff,	// (0x00033886) list_single_2graphic_pane_g2_cp2

0x16df,	// (0x00032766) list_single_2graphic_pane_g3_cp2

0x2810,	// (0x00033897) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2810,	// (0x00033897) list_single_2graphic_pane_g4_cp2

0x281c,	// (0x000338a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x281c,	// (0x000338a3) list_single_2graphic_pane_t1_cp2

0x06b9,	// (0x00031740) list_highlight_pane_g10_cp1

0x23f9,	// (0x00033480) list_highlight_pane_g1_cp1

0x2401,	// (0x00033488) list_highlight_pane_g2_cp1

0x2409,	// (0x00033490) list_highlight_pane_g3_cp1

0x2411,	// (0x00033498) list_highlight_pane_g4_cp1

0x2419,	// (0x000334a0) list_highlight_pane_g5_cp1

0x2421,	// (0x000334a8) list_highlight_pane_g6_cp1

0x2429,	// (0x000334b0) list_highlight_pane_g7_cp1

0x2431,	// (0x000334b8) list_highlight_pane_g8_cp1

0x2439,	// (0x000334c0) list_highlight_pane_g9_cp1

0x7a18,	// (0x00038a9f) form_field_slider_pane_t3

0x7a26,	// (0x00038aad) form_field_slider_pane_t4

0x232d,	// (0x000333b4) slider_form_pane_ParamLimits

0x232d,	// (0x000333b4) slider_form_pane

0x06c3,	// (0x0003174a) control_abbreviations

0x06c3,	// (0x0003174a) control_conventions

0x06c3,	// (0x0003174a) control_definitions

0x06c3,	// (0x0003174a) format_table_attribute

0x2a09,	// (0x00033a90) bg_popup_preview_window_pane_g9

0x06c3,	// (0x0003174a) format_table_data2

0x06c3,	// (0x0003174a) format_table_data3

0x06c3,	// (0x0003174a) format_table_data_example

0x0008,

0x06c3,	// (0x0003174a) intro_purpose

0xf92d,	// (0x000409b4) bg_popup_preview_window_pane_g

0x06c3,	// (0x0003174a) texts_category

0x06c3,	// (0x0003174a) texts_graphics

0x1751,	// (0x000327d8) text_digital

0x1760,	// (0x000327e7) text_primary

0x176f,	// (0x000327f6) text_primary_small

0x177e,	// (0x00032805) text_secondary

0x178d,	// (0x00032814) text_title

0x2eb1,	// (0x00033f38) bg_passive_tab_pane_g1_cp3_srt

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp3_srt

0x2eba,	// (0x00033f41) bg_passive_tab_pane_g3_cp3_srt

0x071f,	// (0x000317a6) bg_active_tab_pane_cp3_srt_ParamLimits

0x071f,	// (0x000317a6) bg_active_tab_pane_cp3_srt

0x2ec3,	// (0x00033f4a) tabs_4_active_pane_srt_g1

0x7d81,	// (0x00038e08) tabs_4_active_pane_srt_t1_ParamLimits

0x7d81,	// (0x00038e08) tabs_4_active_pane_srt_t1

0x2eb1,	// (0x00033f38) bg_active_tab_pane_g1_cp3_copy1

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp3_copy1

0x2eba,	// (0x00033f41) bg_active_tab_pane_g3_cp3_copy1

0x071f,	// (0x000317a6) tabs_2_long_active_pane_srt_ParamLimits

0x071f,	// (0x000317a6) tabs_2_long_active_pane_srt

0x071f,	// (0x000317a6) tabs_2_long_passive_pane_srt_ParamLimits

0x071f,	// (0x000317a6) tabs_2_long_passive_pane_srt

0x56be,	// (0x00036745) bg_passive_tab_pane_cp4_srt_ParamLimits

0x56be,	// (0x00036745) bg_passive_tab_pane_cp4_srt

0x2ddc,	// (0x00033e63) bg_passive_tab_pane_g1_cp4_srt

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp4_srt

0x2de5,	// (0x00033e6c) bg_passive_tab_pane_g3_cp4_srt

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp4_srt_ParamLimits

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp4_srt

0x7bc8,	// (0x00038c4f) tabs_2_long_active_pane_srt_t1_ParamLimits

0x7bc8,	// (0x00038c4f) tabs_2_long_active_pane_srt_t1

0x2ddc,	// (0x00033e63) bg_active_tab_pane_g1_cp4_srt

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp4_srt

0x2de5,	// (0x00033e6c) bg_active_tab_pane_g3_cp4_srt

0x0711,	// (0x00031798) tabs_3_long_active_pane_srt_ParamLimits

0x0711,	// (0x00031798) tabs_3_long_active_pane_srt

0x0711,	// (0x00031798) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0711,	// (0x00031798) tabs_3_long_passive_pane_cp_srt

0x0711,	// (0x00031798) tabs_3_long_passive_pane_srt_ParamLimits

0x0711,	// (0x00031798) tabs_3_long_passive_pane_srt

0x56be,	// (0x00036745) bg_passive_tab_pane_cp5_srt_ParamLimits

0x56be,	// (0x00036745) bg_passive_tab_pane_cp5_srt

0x148c,	// (0x00032513) bg_passive_tab_pane_g1_cp5_srt

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp5_srt

0x1495,	// (0x0003251c) bg_passive_tab_pane_g3_cp5_srt

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp5_srt_ParamLimits

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp5_srt

0x7bb6,	// (0x00038c3d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x7bb6,	// (0x00038c3d) tabs_3_long_active_pane_srt_t1

0x148c,	// (0x00032513) bg_active_tab_pane_g1_cp5_srt

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp5_srt

0x1495,	// (0x0003251c) bg_active_tab_pane_g3_cp5_srt

0x2dce,	// (0x00033e55) navi_text_pane_srt_t1

0x2dc6,	// (0x00033e4d) navi_icon_pane_srt_g1

0x188b,	// (0x00032912) midp_editing_number_pane_srt

0x179c,	// (0x00032823) midp_ticker_pane_srt

0x1893,	// (0x0003291a) midp_ticker_pane_srt_g1

0x189b,	// (0x00032922) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004083e) midp_ticker_pane_srt_g

0x18a3,	// (0x0003292a) midp_ticker_pane_srt_t1

0x2db7,	// (0x00033e3e) midp_editing_number_pane_t1_copy1

0x703f,	// (0x000380c6) listscroll_midp_pane

0x703f,	// (0x000380c6) midp_form_pane

0x17a4,	// (0x0003282b) midp_info_popup_window_ParamLimits

0x17a4,	// (0x0003282b) midp_info_popup_window

0x0e1e,	// (0x00031ea5) bg_popup_sub_pane_cp50_ParamLimits

0x0e1e,	// (0x00031ea5) bg_popup_sub_pane_cp50

0x207b,	// (0x00033102) listscroll_midp_info_pane_ParamLimits

0x207b,	// (0x00033102) listscroll_midp_info_pane

0x2063,	// (0x000330ea) listscroll_form_midp_pane_ParamLimits

0x2063,	// (0x000330ea) listscroll_form_midp_pane

0x206f,	// (0x000330f6) scroll_bar_cp050

0x7a00,	// (0x00038a87) list_midp_pane

0x3753,	// (0x000347da) signal_pane_g2_cp

0x1f95,	// (0x0003301c) listscroll_midp_info_pane_t1_ParamLimits

0x1f95,	// (0x0003301c) listscroll_midp_info_pane_t1

0x1fad,	// (0x00033034) listscroll_midp_info_pane_t2_ParamLimits

0x1fad,	// (0x00033034) listscroll_midp_info_pane_t2

0x1feb,	// (0x00033072) listscroll_midp_info_pane_t3_ParamLimits

0x1feb,	// (0x00033072) listscroll_midp_info_pane_t3

0x2025,	// (0x000330ac) listscroll_midp_info_pane_t4_ParamLimits

0x2025,	// (0x000330ac) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x000408ef) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x000408ef) listscroll_midp_info_pane_t

0x0e85,	// (0x00031f0c) scroll_pane_cp21

0x1f39,	// (0x00032fc0) form_midp_field_choice_group_pane

0x1f42,	// (0x00032fc9) form_midp_field_text_pane

0x1f7b,	// (0x00033002) form_midp_field_time_pane

0x1f83,	// (0x0003300a) form_midp_gauge_slider_pane

0x1f8c,	// (0x00033013) form_midp_gauge_wait_pane

0x06c3,	// (0x0003174a) form_midp_image_pane

0x4873,	// (0x000358fa) list_single_midp_pane_ParamLimits

0x4873,	// (0x000358fa) list_single_midp_pane

0x79c1,	// (0x00038a48) form_midp_field_text_pane_t1

0x1de0,	// (0x00032e67) input_focus_pane_cp050

0x1f28,	// (0x00032faf) list_midp_form_text_pane

0x1ef7,	// (0x00032f7e) form_midp_field_choice_group_pane_t1

0x1f05,	// (0x00032f8c) input_focus_pane_cp051

0x1f19,	// (0x00032fa0) list_midp_choice_pane

0x06c3,	// (0x0003174a) status_idle_pane

0x1edb,	// (0x00032f62) form_midp_field_time_pane_t1

0x06b9,	// (0x00031740) wait_anim_pane_g2_copy1

0x1ee9,	// (0x00032f70) form_midp_field_time_pane_t2

0x0001,

0x17fd,	// (0x00032884) aid_navinavi_width_2_pane

0xf863,	// (0x000408ea) form_midp_field_time_pane_t

0x06c3,	// (0x0003174a) input_focus_pane_cp052

0x06c3,	// (0x0003174a) bg_input_focus_pane_cp040

0x1eb7,	// (0x00032f3e) form_midp_gauge_slider_pane_t1

0x1ec5,	// (0x00032f4c) form_midp_gauge_slider_pane_t2

0x79a5,	// (0x00038a2c) form_midp_gauge_slider_pane_t3

0x79b3,	// (0x00038a3a) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x000408e1) form_midp_gauge_slider_pane_t

0x1ed3,	// (0x00032f5a) form_midp_slider_pane

0x071f,	// (0x000317a6) bg_input_focus_pane_cp041_ParamLimits

0x071f,	// (0x000317a6) bg_input_focus_pane_cp041

0x1e84,	// (0x00032f0b) form_midp_gauge_wait_pane_t1_ParamLimits

0x1e84,	// (0x00032f0b) form_midp_gauge_wait_pane_t1

0x1e96,	// (0x00032f1d) form_midp_gauge_wait_pane_t2_ParamLimits

0x1e96,	// (0x00032f1d) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x000408dc) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x000408dc) form_midp_gauge_wait_pane_t

0x1ea8,	// (0x00032f2f) form_midp_wait_pane_ParamLimits

0x1ea8,	// (0x00032f2f) form_midp_wait_pane

0x1e4e,	// (0x00032ed5) form_midp_image_pane_g1

0x1e57,	// (0x00032ede) form_midp_image_pane_t1

0x1e66,	// (0x00032eed) form_midp_image_pane_t2

0x1e75,	// (0x00032efc) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x000408d5) form_midp_image_pane_t

0x1e45,	// (0x00032ecc) list_single_midp_pane_g1

0x4864,	// (0x000358eb) list_single_midp_pane_t1

0x7975,	// (0x000389fc) list_midp_form_item_pane_ParamLimits

0x7975,	// (0x000389fc) list_midp_form_item_pane

0x17b7,	// (0x0003283e) list_midp_form_item_pane_t1

0x17c6,	// (0x0003284d) midp_ticker_pane_g1

0x17d2,	// (0x00032859) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x00040824) midp_ticker_pane_g

0x70f4,	// (0x0003817b) midp_ticker_pane_t1

0x7d37,	// (0x00038dbe) midp_editing_number_pane_t1

0x2e45,	// (0x00033ecc) midp_editing_number_pane

0x2e54,	// (0x00033edb) midp_ticker_pane

0x2da7,	// (0x00033e2e) ai_message_heading_pane

0x06c3,	// (0x0003174a) bg_popup_window_pane_cp14

0x2daf,	// (0x00033e36) listscroll_ai_message_pane

0x2d31,	// (0x00033db8) ai_message_heading_pane_g1_ParamLimits

0x2d31,	// (0x00033db8) ai_message_heading_pane_g1

0x2d3d,	// (0x00033dc4) ai_message_heading_pane_g2_ParamLimits

0x2d3d,	// (0x00033dc4) ai_message_heading_pane_g2

0x2d49,	// (0x00033dd0) ai_message_heading_pane_g3_ParamLimits

0x2d49,	// (0x00033dd0) ai_message_heading_pane_g3

0x2d55,	// (0x00033ddc) ai_message_heading_pane_g4_ParamLimits

0x2d55,	// (0x00033ddc) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x00040a16) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x00040a16) ai_message_heading_pane_g

0x2d61,	// (0x00033de8) ai_message_heading_pane_t1_ParamLimits

0x2d61,	// (0x00033de8) ai_message_heading_pane_t1

0x2d7b,	// (0x00033e02) ai_message_heading_pane_t2_ParamLimits

0x2d7b,	// (0x00033e02) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x00040a1f) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x00040a1f) ai_message_heading_pane_t

0x2d8d,	// (0x00033e14) bg_popup_heading_pane_cp1_ParamLimits

0x2d8d,	// (0x00033e14) bg_popup_heading_pane_cp1

0x2d1f,	// (0x00033da6) list_ai_message_pane_ParamLimits

0x2d1f,	// (0x00033da6) list_ai_message_pane

0x0e85,	// (0x00031f0c) scroll_pane_cp10

0x2cbb,	// (0x00033d42) list_ai_message_pane_g1

0x2cc3,	// (0x00033d4a) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x000409f3) list_ai_message_pane_g

0x2ccb,	// (0x00033d52) list_ai_message_pane_t1_ParamLimits

0x2ccb,	// (0x00033d52) list_ai_message_pane_t1

0x2ce0,	// (0x00033d67) list_ai_message_pane_t2_ParamLimits

0x2ce0,	// (0x00033d67) list_ai_message_pane_t2

0x2cf5,	// (0x00033d7c) list_ai_message_pane_t3_ParamLimits

0x2cf5,	// (0x00033d7c) list_ai_message_pane_t3

0x2d0a,	// (0x00033d91) list_ai_message_pane_t4_ParamLimits

0x2d0a,	// (0x00033d91) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x000409f8) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x000409f8) list_ai_message_pane_t

0x7ba0,	// (0x00038c27) cell_ai_soft_ind_pane_ParamLimits

0x7ba0,	// (0x00038c27) cell_ai_soft_ind_pane

0x17de,	// (0x00032865) cell_ai_soft_ind_pane_g1_ParamLimits

0x17de,	// (0x00032865) cell_ai_soft_ind_pane_g1

0x06c3,	// (0x0003174a) grid_highlight_cp1

0x17eb,	// (0x00032872) text_secondary_cp56_ParamLimits

0x17eb,	// (0x00032872) text_secondary_cp56

0x2c90,	// (0x00033d17) example_general_pane_ParamLimits

0x2c90,	// (0x00033d17) example_general_pane

0x2c9c,	// (0x00033d23) example_parent_pane_g1_ParamLimits

0x2c9c,	// (0x00033d23) example_parent_pane_g1

0x2ca8,	// (0x00033d2f) example_parent_pane_t1_ParamLimits

0x2ca8,	// (0x00033d2f) example_parent_pane_t1

0x7420,	// (0x000384a7) popup_preview_text_window_ParamLimits

0x7420,	// (0x000384a7) popup_preview_text_window

0x16cb,	// (0x00032752) list_single_pane_cp2_g4

0x08ee,	// (0x00031975) bg_popup_preview_window_pane_ParamLimits

0x08ee,	// (0x00031975) bg_popup_preview_window_pane

0x2a11,	// (0x00033a98) popup_preview_text_window_t1_ParamLimits

0x2a11,	// (0x00033a98) popup_preview_text_window_t1

0x2a2f,	// (0x00033ab6) popup_preview_text_window_t2_ParamLimits

0x2a2f,	// (0x00033ab6) popup_preview_text_window_t2

0x2a78,	// (0x00033aff) popup_preview_text_window_t3_ParamLimits

0x2a78,	// (0x00033aff) popup_preview_text_window_t3

0x2abd,	// (0x00033b44) popup_preview_text_window_t4_ParamLimits

0x2abd,	// (0x00033b44) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x000409c7) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x000409c7) popup_preview_text_window_t

0x2b3b,	// (0x00033bc2) scroll_pane_cp11

0x1cf0,	// (0x00032d77) bg_popup_preview_window_pane_g1

0x29d1,	// (0x00033a58) bg_popup_preview_window_pane_g2

0x29d9,	// (0x00033a60) bg_popup_preview_window_pane_g3

0x29e1,	// (0x00033a68) bg_popup_preview_window_pane_g4

0x29e9,	// (0x00033a70) bg_popup_preview_window_pane_g5

0x29f1,	// (0x00033a78) bg_popup_preview_window_pane_g6

0x29f9,	// (0x00033a80) bg_popup_preview_window_pane_g7

0x2a01,	// (0x00033a88) bg_popup_preview_window_pane_g8

0xd222,	// (0x0003e2a9) aid_popup_width_pane

0x73fe,	// (0x00038485) popup_midp_note_alarm_window_ParamLimits

0x73fe,	// (0x00038485) popup_midp_note_alarm_window

0x0d5a,	// (0x00031de1) data_form_pane_ParamLimits

0x4579,	// (0x00035600) form_field_data_pane_g1

0x4583,	// (0x0003560a) form_field_data_pane_t1_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_ParamLimits

0x0d74,	// (0x00031dfb) data_form_wide_pane_ParamLimits

0x459d,	// (0x00035624) form_field_data_wide_pane_g1

0x45a9,	// (0x00035630) form_field_data_wide_pane_t1_ParamLimits

0x0ae1,	// (0x00031b68) input_focus_pane_cp6_ParamLimits

0x5683,	// (0x0003670a) input_popup_find_pane_g1_ParamLimits

0x5683,	// (0x0003670a) input_popup_find_pane_g1

0xd77e,	// (0x0003e805) aid_navi_side_left_pane

0xd793,	// (0x0003e81a) aid_navi_side_right_pane

0x24d6,	// (0x0003355d) bg_popup_window_pane_cp30_ParamLimits

0x24d6,	// (0x0003355d) bg_popup_window_pane_cp30

0x2550,	// (0x000335d7) popup_midp_note_alarm_window_g1_ParamLimits

0x2550,	// (0x000335d7) popup_midp_note_alarm_window_g1

0x2580,	// (0x00033607) popup_midp_note_alarm_window_t1_ParamLimits

0x2580,	// (0x00033607) popup_midp_note_alarm_window_t1

0x2621,	// (0x000336a8) popup_midp_note_alarm_window_t2_ParamLimits

0x2621,	// (0x000336a8) popup_midp_note_alarm_window_t2

0x26cf,	// (0x00033756) popup_midp_note_alarm_window_t3_ParamLimits

0x26cf,	// (0x00033756) popup_midp_note_alarm_window_t3

0x26f7,	// (0x0003377e) popup_midp_note_alarm_window_t4_ParamLimits

0x26f7,	// (0x0003377e) popup_midp_note_alarm_window_t4

0x2717,	// (0x0003379e) popup_midp_note_alarm_window_t5_ParamLimits

0x2717,	// (0x0003379e) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x00040964) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x00040964) popup_midp_note_alarm_window_t

0x27c3,	// (0x0003384a) wait_bar_pane_cp1_ParamLimits

0x27c3,	// (0x0003384a) wait_bar_pane_cp1

0x06c3,	// (0x0003174a) wait_anim_pane_copy1

0x06c3,	// (0x0003174a) wait_border_pane_copy1

0x21ee,	// (0x00033275) wait_border_pane_g1_copy1

0x45c3,	// (0x0003564a) form_field_popup_pane_g1

0x45cb,	// (0x00035652) form_field_popup_pane_t1_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_cp7_ParamLimits

0x0da0,	// (0x00031e27) list_form_pane_ParamLimits

0x45e5,	// (0x0003566c) form_field_popup_wide_pane_g1

0x45ed,	// (0x00035674) form_field_popup_wide_pane_t1_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_cp8_ParamLimits

0x0dac,	// (0x00031e33) list_form_wide_pane_ParamLimits

0x2eea,	// (0x00033f71) aid_size_cell_graphic_pane

0x4679,	// (0x00035700) data_form_pane_t1_ParamLimits

0x48d3,	// (0x0003595a) data_form_wide_pane_t1_ParamLimits

0x766a,	// (0x000386f1) bg_status_flat_pane

0x5280,	// (0x00036307) title_pane_t1_ParamLimits

0x06d9,	// (0x00031760) title_pane_t2_ParamLimits

0x06ff,	// (0x00031786) title_pane_t3_ParamLimits

0xf59b,	// (0x00040622) title_pane_t_ParamLimits

0x1222,	// (0x000322a9) level_1_signal_ParamLimits

0x122f,	// (0x000322b6) level_2_signal_ParamLimits

0x123c,	// (0x000322c3) level_3_signal_ParamLimits

0x1249,	// (0x000322d0) level_4_signal_ParamLimits

0x1256,	// (0x000322dd) level_5_signal_ParamLimits

0x1263,	// (0x000322ea) level_6_signal_ParamLimits

0x1270,	// (0x000322f7) level_7_signal_ParamLimits

0x1222,	// (0x000322a9) level_1_battery_ParamLimits

0x122f,	// (0x000322b6) level_2_battery_ParamLimits

0x123c,	// (0x000322c3) level_3_battery_ParamLimits

0x1249,	// (0x000322d0) level_4_battery_ParamLimits

0x1256,	// (0x000322dd) level_5_battery_ParamLimits

0x1263,	// (0x000322ea) level_6_battery_ParamLimits

0x1270,	// (0x000322f7) level_7_battery_ParamLimits

0x23f9,	// (0x00033480) bg_status_flat_pane_g1

0x2401,	// (0x00033488) bg_status_flat_pane_g2

0x2409,	// (0x00033490) bg_status_flat_pane_g3

0x2411,	// (0x00033498) bg_status_flat_pane_g4

0x2419,	// (0x000334a0) bg_status_flat_pane_g5

0x2421,	// (0x000334a8) bg_status_flat_pane_g6

0x2429,	// (0x000334b0) bg_status_flat_pane_g7

0x52f0,	// (0x00036377) tabs_3_active_pane_t1_ParamLimits

0x52f0,	// (0x00036377) tabs_3_passive_pane_t1_ParamLimits

0x530a,	// (0x00036391) tabs_4_active_pane_t1_ParamLimits

0x530a,	// (0x00036391) tabs_4_1_passive_pane_t1_ParamLimits

0x5699,	// (0x00036720) tabs_2_active_pane_t1_ParamLimits

0x5699,	// (0x00036720) tabs_2_passive_pane_t1_ParamLimits

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp4_ParamLimits

0x56ab,	// (0x00036732) tabs_2_long_active_pane_t1_ParamLimits

0x56be,	// (0x00036745) bg_passive_tab_pane_cp4_ParamLimits

0xdce0,	// (0x0003ed67) list_single_midp_graphic_pane_t1_ParamLimits

0x1a24,	// (0x00032aab) bg_active_tab_pane_cp5_ParamLimits

0x56ca,	// (0x00036751) tabs_3_long_active_pane_t1_ParamLimits

0x56be,	// (0x00036745) bg_passive_tab_pane_cp5_ParamLimits

0xdce0,	// (0x0003ed67) list_single_midp_graphic_pane_t1

0x766a,	// (0x000386f1) bg_status_flat_pane_ParamLimits

0x1bc3,	// (0x00032c4a) indicator_pane_cp2_ParamLimits

0x1bc3,	// (0x00032c4a) indicator_pane_cp2

0x77ad,	// (0x00038834) navi_pane_srt_ParamLimits

0x77ad,	// (0x00038834) navi_pane_srt

0x1beb,	// (0x00032c72) popup_clock_digital_analogue_window_cp1

0x0763,	// (0x000317ea) indicator_pane_t1

0x179c,	// (0x00032823) copy_highlight_pane

0x179c,	// (0x00032823) cursor_graphics_pane

0x179c,	// (0x00032823) graphic_within_text_pane

0x179c,	// (0x00032823) link_highlight_pane

0x2afe,	// (0x00033b85) popup_preview_text_window_t5_ParamLimits

0x2afe,	// (0x00033b85) popup_preview_text_window_t5

0x1805,	// (0x0003288c) cursor_digital_pane

0x1805,	// (0x0003288c) cursor_primary_pane

0x1816,	// (0x0003289d) cursor_primary_small_pane

0x181e,	// (0x000328a5) cursor_secondary_pane

0x1826,	// (0x000328ad) cursor_title_pane

0x1805,	// (0x0003288c) link_highlight_digital_pane

0x180d,	// (0x00032894) link_highlight_primary_pane

0x1816,	// (0x0003289d) link_highlight_primary_small_pane

0x181e,	// (0x000328a5) link_highlight_secondary_pane

0x1826,	// (0x000328ad) link_highlight_title_pane

0x1805,	// (0x0003288c) copy_highlight_digital_pane

0x1805,	// (0x0003288c) copy_highlight_primary_pane

0x1816,	// (0x0003289d) copy_highlight_primary_small_pane

0x181e,	// (0x000328a5) copy_highlight_secondary_pane

0x1826,	// (0x000328ad) copy_highlight_title_pane

0x181e,	// (0x000328a5) graphic_text_digital_pane

0x2479,	// (0x00033500) graphic_text_primary_pane

0x2482,	// (0x00033509) graphic_text_primary_small_pane

0x1816,	// (0x0003289d) graphic_text_secondary_pane

0x1805,	// (0x0003288c) graphic_text_title_pane

0x7106,	// (0x0003818d) cursor_primary_pane_g1

0x246b,	// (0x000334f2) cursor_text_primary_t1

0x7a48,	// (0x00038acf) cursor_primary_small_pane_g1

0x245d,	// (0x000334e4) cursor_text_primary_small_t1

0x7a3e,	// (0x00038ac5) cursor_primary_small_pane_g1_copy1

0x244f,	// (0x000334d6) cursor_text_primary_small_t1_copy1

0x2441,	// (0x000334c8) cursor_text_title_t1

0x7a34,	// (0x00038abb) cursor_title_pane_g1

0x7106,	// (0x0003818d) cursor_digital_pane_g1

0x182e,	// (0x000328b5) cursor_text_digital_t1

0x23e2,	// (0x00033469) link_highlight_primary_pane_g1

0x23ea,	// (0x00033471) link_highlight_primary_pane_t1

0x183c,	// (0x000328c3) link_highlight_primary_small_pane_g1

0x1844,	// (0x000328cb) link_highlight_primary_small_pane_t1

0x183c,	// (0x000328c3) link_highlight_secondary_pane_g1

0x1853,	// (0x000328da) link_highlight_secondary_pane_t1

0x2356,	// (0x000333dd) link_highlight_title_pane_g1

0x235e,	// (0x000333e5) link_highlight_title_pane_t1

0x233f,	// (0x000333c6) link_highlight_digital_pane_g1

0x2347,	// (0x000333ce) link_highlight_digital_pane_t1

0x2233,	// (0x000332ba) copy_highlight_primary_pane_g1

0x223b,	// (0x000332c2) copy_highlight_primary_pane_t1

0x220d,	// (0x00033294) copy_highlight_primary_small_pane_g1

0x2224,	// (0x000332ab) copy_highlight_primary_small_pane_t1

0x1862,	// (0x000328e9) copy_highlight_secondary_pane_g1

0x186a,	// (0x000328f1) copy_highlight_secondary_pane_t1

0x220d,	// (0x00033294) copy_highlight_title_pane_g1

0x2215,	// (0x0003329c) copy_highlight_title_pane_t1

0x2233,	// (0x000332ba) copy_highlight_digital_pane_g1

0x3074,	// (0x000340fb) copy_highlight_digital_pane_t1

0x2fc8,	// (0x0003404f) graphic_text_primary_pane_g1

0x3058,	// (0x000340df) graphic_text_primary_pane_t1

0x3066,	// (0x000340ed) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x00040a93) graphic_text_primary_pane_t

0x3034,	// (0x000340bb) graphic_text_primary_small_pane_g1

0x303c,	// (0x000340c3) graphic_text_primary_small_pane_t1

0x304a,	// (0x000340d1) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x00040a8e) graphic_text_primary_small_pane_t

0x3010,	// (0x00034097) graphic_text_secondary_pane_g1

0x3018,	// (0x0003409f) graphic_text_secondary_pane_t1

0x3026,	// (0x000340ad) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x00040a89) graphic_text_secondary_pane_t

0x2fec,	// (0x00034073) graphic_text_title_pane_g1

0x2ff4,	// (0x0003407b) graphic_text_title_pane_t1

0x3002,	// (0x00034089) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x00040a84) graphic_text_title_pane_t

0x2fc8,	// (0x0003404f) graphic_text_digital_pane_g1

0x2fd0,	// (0x00034057) graphic_text_digital_pane_t1

0x2fde,	// (0x00034065) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x00040a7f) graphic_text_digital_pane_t

0x071f,	// (0x000317a6) navi_icon_pane_srt_ParamLimits

0x071f,	// (0x000317a6) navi_icon_pane_srt

0x06c3,	// (0x0003174a) navi_midp_pane_srt

0x06c3,	// (0x0003174a) navi_navi_pane_srt

0x071f,	// (0x000317a6) navi_text_pane_srt_ParamLimits

0x071f,	// (0x000317a6) navi_text_pane_srt

0x2f93,	// (0x0003401a) navi_navi_icon_text_pane_srt

0x2f9b,	// (0x00034022) navi_navi_pane_srt_g1_ParamLimits

0x2f9b,	// (0x00034022) navi_navi_pane_srt_g1

0x2fad,	// (0x00034034) navi_navi_pane_srt_g2_ParamLimits

0x2fad,	// (0x00034034) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x00040a7a) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x00040a7a) navi_navi_pane_srt_g

0x2fbf,	// (0x00034046) navi_navi_tabs_pane_srt

0x2f93,	// (0x0003401a) navi_navi_text_pane_srt

0x2f93,	// (0x0003401a) navi_navi_volume_pane_srt

0x2f84,	// (0x0003400b) navi_navi_text_pane_srt_t1

0xe060,	// (0x0003f0e7) navi_navi_volume_pane_srt_g1

0xe068,	// (0x0003f0ef) volume_small_pane_srt_ParamLimits

0xe068,	// (0x0003f0ef) volume_small_pane_srt

0xda5e,	// (0x0003eae5) volume_small_pane_srt_g1_ParamLimits

0xda5e,	// (0x0003eae5) volume_small_pane_srt_g1

0xda6e,	// (0x0003eaf5) volume_small_pane_srt_g2_ParamLimits

0xda6e,	// (0x0003eaf5) volume_small_pane_srt_g2

0xda7f,	// (0x0003eb06) volume_small_pane_srt_g3_ParamLimits

0xda7f,	// (0x0003eb06) volume_small_pane_srt_g3

0xda90,	// (0x0003eb17) volume_small_pane_srt_g4_ParamLimits

0xda90,	// (0x0003eb17) volume_small_pane_srt_g4

0xdaa1,	// (0x0003eb28) volume_small_pane_srt_g5_ParamLimits

0xdaa1,	// (0x0003eb28) volume_small_pane_srt_g5

0xdab2,	// (0x0003eb39) volume_small_pane_srt_g6_ParamLimits

0xdab2,	// (0x0003eb39) volume_small_pane_srt_g6

0xdac3,	// (0x0003eb4a) volume_small_pane_srt_g7_ParamLimits

0xdac3,	// (0x0003eb4a) volume_small_pane_srt_g7

0xdad4,	// (0x0003eb5b) volume_small_pane_srt_g8_ParamLimits

0xdad4,	// (0x0003eb5b) volume_small_pane_srt_g8

0xdae5,	// (0x0003eb6c) volume_small_pane_srt_g9_ParamLimits

0xdae5,	// (0x0003eb6c) volume_small_pane_srt_g9

0xdaf6,	// (0x0003eb7d) volume_small_pane_srt_g10_ParamLimits

0xdaf6,	// (0x0003eb7d) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x00040829) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x00040829) volume_small_pane_srt_g

0x0997,	// (0x00031a1e) query_popup_data_pane_cp2

0x2f6a,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2f6a,	// (0x00033ff1) navi_navi_icon_text_pane_srt_t1

0x2479,	// (0x00033500) navi_tabs_2_long_pane_srt

0x2479,	// (0x00033500) navi_tabs_2_pane_srt

0x2479,	// (0x00033500) navi_tabs_3_long_pane_srt

0x2479,	// (0x00033500) navi_tabs_3_pane_srt

0x2479,	// (0x00033500) navi_tabs_4_pane_srt

0xe040,	// (0x0003f0c7) tabs_2_active_pane_srt_ParamLimits

0xe040,	// (0x0003f0c7) tabs_2_active_pane_srt

0xe050,	// (0x0003f0d7) tabs_2_passive_pane_srt_ParamLimits

0xe050,	// (0x0003f0d7) tabs_2_passive_pane_srt

0x19d6,	// (0x00032a5d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x19d6,	// (0x00032a5d) bg_passive_tab_pane_cp1_srt

0x2f48,	// (0x00033fcf) bg_passive_tab_pane_g1_cp1_srt

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp1_srt

0x2f51,	// (0x00033fd8) bg_passive_tab_pane_g3_cp1_srt

0x071f,	// (0x000317a6) bg_active_tab_pane_cp1_srt_ParamLimits

0x071f,	// (0x000317a6) bg_active_tab_pane_cp1_srt

0x2f5a,	// (0x00033fe1) tabs_2_active_pane_srt_g1

0x7df8,	// (0x00038e7f) tabs_2_active_pane_srt_t1_ParamLimits

0x7df8,	// (0x00038e7f) tabs_2_active_pane_srt_t1

0x2f48,	// (0x00033fcf) bg_active_tab_pane_g1_cp1_srt

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp1_srt

0x2f51,	// (0x00033fd8) bg_active_tab_pane_g3_cp1_srt

0xe00d,	// (0x0003f094) tabs_3_active_pane_srt_ParamLimits

0xe00d,	// (0x0003f094) tabs_3_active_pane_srt

0xe01e,	// (0x0003f0a5) tabs_3_passive_pane_cp_srt_ParamLimits

0xe01e,	// (0x0003f0a5) tabs_3_passive_pane_cp_srt

0xe02f,	// (0x0003f0b6) tabs_3_passive_pane_srt_ParamLimits

0xe02f,	// (0x0003f0b6) tabs_3_passive_pane_srt

0x19d6,	// (0x00032a5d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x19d6,	// (0x00032a5d) bg_passive_tab_pane_cp2_srt

0x1879,	// (0x00032900) bg_passive_tab_pane_g1_cp2_srt

0x1445,	// (0x000324cc) bg_passive_tab_pane_g2_cp2_srt

0x1882,	// (0x00032909) bg_passive_tab_pane_g3_cp2_srt

0x071f,	// (0x000317a6) bg_active_tab_pane_cp2_srt_ParamLimits

0x071f,	// (0x000317a6) bg_active_tab_pane_cp2_srt

0x2f40,	// (0x00033fc7) tabs_3_active_pane_srt_g1

0x7de6,	// (0x00038e6d) tabs_3_active_pane_srt_t1_ParamLimits

0x7de6,	// (0x00038e6d) tabs_3_active_pane_srt_t1

0x1879,	// (0x00032900) bg_active_tab_pane_g1_cp2_srt

0x1445,	// (0x000324cc) bg_active_tab_pane_g2_cp2_srt

0x1882,	// (0x00032909) bg_active_tab_pane_g3_cp2_srt

0xdfc5,	// (0x0003f04c) tabs_4_active_pane_srt_ParamLimits

0xdfc5,	// (0x0003f04c) tabs_4_active_pane_srt

0xdfd7,	// (0x0003f05e) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdfd7,	// (0x0003f05e) tabs_4_passive_pane_cp2_srt

0x19a6,	// (0x00032a2d) aid_size_cell_toolbar

0x56be,	// (0x00036745) main_idle_act_pane_ParamLimits

0x1a8a,	// (0x00032b11) popup_large_graphic_colour_window_ParamLimits

0x7572,	// (0x000385f9) popup_toolbar_window_ParamLimits

0x7572,	// (0x000385f9) popup_toolbar_window

0x2e67,	// (0x00033eee) list_single_graphic_2heading_pane_ParamLimits

0x2e67,	// (0x00033eee) list_single_graphic_2heading_pane

0x105b,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane

0x106d,	// (0x000320f4) aid_size_cell_apps_grid_prt_pane

0x19d6,	// (0x00032a5d) bg_wml_button_pane_cp1_ParamLimits

0x19d6,	// (0x00032a5d) bg_wml_button_pane_cp1

0x79c1,	// (0x00038a48) form_midp_field_text_pane_t1_ParamLimits

0x1de0,	// (0x00032e67) input_focus_pane_cp050_ParamLimits

0x1f28,	// (0x00032faf) list_midp_form_text_pane_ParamLimits

0x1f05,	// (0x00032f8c) input_focus_pane_cp051_ParamLimits

0x1f19,	// (0x00032fa0) list_midp_choice_pane_ParamLimits

0x790f,	// (0x00038996) list_single_2graphic_pane_cp3_ParamLimits

0x790f,	// (0x00038996) list_single_2graphic_pane_cp3

0x793b,	// (0x000389c2) list_single_midp_graphic_pane_ParamLimits

0x793b,	// (0x000389c2) list_single_midp_graphic_pane

0xd1aa,	// (0x0003e231) list_single_graphic_2heading_pane_g1_ParamLimits

0xd1aa,	// (0x0003e231) list_single_graphic_2heading_pane_g1

0xd1b6,	// (0x0003e23d) list_single_graphic_2heading_pane_g4_ParamLimits

0xd1b6,	// (0x0003e23d) list_single_graphic_2heading_pane_g4

0xd1c2,	// (0x0003e249) list_single_graphic_2heading_pane_g5_ParamLimits

0xd1c2,	// (0x0003e249) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004087c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004087c) list_single_graphic_2heading_pane_g

0xd1ce,	// (0x0003e255) list_single_graphic_2heading_pane_t1_ParamLimits

0xd1ce,	// (0x0003e255) list_single_graphic_2heading_pane_t1

0xd1e2,	// (0x0003e269) list_single_graphic_2heading_pane_t2_ParamLimits

0xd1e2,	// (0x0003e269) list_single_graphic_2heading_pane_t2

0xd1fe,	// (0x0003e285) list_single_graphic_2heading_pane_t3_ParamLimits

0xd1fe,	// (0x0003e285) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x00040883) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x00040883) list_single_graphic_2heading_pane_t

0x1c2e,	// (0x00032cb5) bg_popup_sub_pane_cp2

0x1c58,	// (0x00032cdf) grid_toobar_pane

0xdc51,	// (0x0003ecd8) cell_toolbar_pane_ParamLimits

0xdc51,	// (0x0003ecd8) cell_toolbar_pane

0x1c94,	// (0x00032d1b) cell_toolbar_pane_g1_ParamLimits

0x1c94,	// (0x00032d1b) cell_toolbar_pane_g1

0x1ca8,	// (0x00032d2f) cell_toolbar_pane_g2_ParamLimits

0x1ca8,	// (0x00032d2f) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x00040891) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x00040891) cell_toolbar_pane_g

0x1cca,	// (0x00032d51) grid_highlight_pane_cp2_ParamLimits

0x1cca,	// (0x00032d51) grid_highlight_pane_cp2

0x1ce4,	// (0x00032d6b) toolbar_button_pane

0x1cf0,	// (0x00032d77) toolbar_button_pane_g1

0x1cf8,	// (0x00032d7f) toolbar_button_pane_g2

0x1d00,	// (0x00032d87) toolbar_button_pane_g3

0x1d08,	// (0x00032d8f) toolbar_button_pane_g4

0x1d10,	// (0x00032d97) toolbar_button_pane_g5

0x1d18,	// (0x00032d9f) toolbar_button_pane_g6

0x1d20,	// (0x00032da7) toolbar_button_pane_g7

0x1d28,	// (0x00032daf) toolbar_button_pane_g8

0x1d30,	// (0x00032db7) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x00040896) toolbar_button_pane_g

0xdc89,	// (0x0003ed10) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdc89,	// (0x0003ed10) list_single_2graphic_pane_g1_cp3

0xdc95,	// (0x0003ed1c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdc95,	// (0x0003ed1c) list_single_2graphic_pane_g2_cp3

0xdca6,	// (0x0003ed2d) list_single_2graphic_pane_g3_cp3

0xdcae,	// (0x0003ed35) list_single_2graphic_pane_g4_cp3_ParamLimits

0xdcae,	// (0x0003ed35) list_single_2graphic_pane_g4_cp3

0xdcba,	// (0x0003ed41) list_single_2graphic_pane_t1_cp3_ParamLimits

0xdcba,	// (0x0003ed41) list_single_2graphic_pane_t1_cp3

0xdcd4,	// (0x0003ed5b) list_single_midp_graphic_pane_g2_ParamLimits

0xdcd4,	// (0x0003ed5b) list_single_midp_graphic_pane_g2

0x4794,	// (0x0003581b) aid_zoom_text_primary

0x479c,	// (0x00035823) aid_zoom_text_secondary

0x1936,	// (0x000329bd) status_small_pane_g7_ParamLimits

0x1936,	// (0x000329bd) status_small_pane_g7

0x1959,	// (0x000329e0) status_small_pane_t1_ParamLimits

0x5263,	// (0x000362ea) title_pane_g2

0x0003,

0xf592,	// (0x00040619) title_pane_g

0x54bd,	// (0x00036544) aid_size_cell_colour_1_pane_ParamLimits

0x54bd,	// (0x00036544) aid_size_cell_colour_1_pane

0x54d1,	// (0x00036558) aid_size_cell_colour_2_pane_ParamLimits

0x54d1,	// (0x00036558) aid_size_cell_colour_2_pane

0x54e5,	// (0x0003656c) aid_size_cell_colour_3_pane_ParamLimits

0x54e5,	// (0x0003656c) aid_size_cell_colour_3_pane

0x54f9,	// (0x00036580) aid_size_cell_colour_4_pane_ParamLimits

0x54f9,	// (0x00036580) aid_size_cell_colour_4_pane

0xd6ba,	// (0x0003e741) title_pane_stacon_g1_ParamLimits

0xd6ba,	// (0x0003e741) title_pane_stacon_g1

0x2292,	// (0x00033319) popup_note_wait_window_g3_ParamLimits

0x2292,	// (0x00033319) popup_note_wait_window_g3

0x2308,	// (0x0003338f) popup_note_wait_window_t5_ParamLimits

0x2308,	// (0x0003338f) popup_note_wait_window_t5

0x06c3,	// (0x0003174a) main_feb_china_hwr_fs_writing_pane

0x719b,	// (0x00038222) popup_feb_china_hwr_fs_window_ParamLimits

0x719b,	// (0x00038222) popup_feb_china_hwr_fs_window

0xdcf6,	// (0x0003ed7d) aid_size_cell_hwr_fs_ParamLimits

0xdcf6,	// (0x0003ed7d) aid_size_cell_hwr_fs

0x1de0,	// (0x00032e67) bg_popup_sub_pane_cp3_ParamLimits

0x1de0,	// (0x00032e67) bg_popup_sub_pane_cp3

0xdd0b,	// (0x0003ed92) grid_hwr_fs_pane_ParamLimits

0xdd0b,	// (0x0003ed92) grid_hwr_fs_pane

0xdd23,	// (0x0003edaa) linegrid_hwr_fs_pane_ParamLimits

0xdd23,	// (0x0003edaa) linegrid_hwr_fs_pane

0xdd33,	// (0x0003edba) cell_hwr_fs_pane_ParamLimits

0xdd33,	// (0x0003edba) cell_hwr_fs_pane

0x1dec,	// (0x00032e73) linegrid_hwr_fs_pane_g1_ParamLimits

0x1dec,	// (0x00032e73) linegrid_hwr_fs_pane_g1

0x78e3,	// (0x0003896a) linegrid_hwr_fs_pane_g2_ParamLimits

0x78e3,	// (0x0003896a) linegrid_hwr_fs_pane_g2

0x1df8,	// (0x00032e7f) linegrid_hwr_fs_pane_g3_ParamLimits

0x1df8,	// (0x00032e7f) linegrid_hwr_fs_pane_g3

0xdd55,	// (0x0003eddc) linegrid_hwr_fs_pane_g4_ParamLimits

0xdd55,	// (0x0003eddc) linegrid_hwr_fs_pane_g4

0xdd6f,	// (0x0003edf6) linegrid_hwr_fs_pane_g5_ParamLimits

0xdd6f,	// (0x0003edf6) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x000408c1) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x000408c1) linegrid_hwr_fs_pane_g

0x1e04,	// (0x00032e8b) cell_hwr_fs_pane_g1_ParamLimits

0x1e04,	// (0x00032e8b) cell_hwr_fs_pane_g1

0x1bfc,	// (0x00032c83) cell_hwr_fs_pane_g2_ParamLimits

0x1bfc,	// (0x00032c83) cell_hwr_fs_pane_g2

0x78f5,	// (0x0003897c) cell_hwr_fs_pane_g3_ParamLimits

0x78f5,	// (0x0003897c) cell_hwr_fs_pane_g3

0x7902,	// (0x00038989) cell_hwr_fs_pane_g4_ParamLimits

0x7902,	// (0x00038989) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x000408cc) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x000408cc) cell_hwr_fs_pane_g

0xdd85,	// (0x0003ee0c) cell_hwr_fs_pane_t1

0x06c3,	// (0x0003174a) grid_highlight_pane_cp6

0x06c3,	// (0x0003174a) main_idle_act2_pane

0x0e6c,	// (0x00031ef3) aid_inside_area_popup_secondary

0x7a68,	// (0x00038aef) aid_inside_area_window_primary_ParamLimits

0x7a68,	// (0x00038aef) aid_inside_area_window_primary

0x3083,	// (0x0003410a) ai2_news_ticker_pane

0x308b,	// (0x00034112) aid_size_cell_ai1_link_ParamLimits

0x308b,	// (0x00034112) aid_size_cell_ai1_link

0x30a5,	// (0x0003412c) popup_ai2_data_window_ParamLimits

0x30a5,	// (0x0003412c) popup_ai2_data_window

0x30b9,	// (0x00034140) popup_ai2_link_window_ParamLimits

0x30b9,	// (0x00034140) popup_ai2_link_window

0x1de0,	// (0x00032e67) bg_popup_sub_pane_cp4_ParamLimits

0x1de0,	// (0x00032e67) bg_popup_sub_pane_cp4

0x30cd,	// (0x00034154) grid_ai2_link_pane_ParamLimits

0x30cd,	// (0x00034154) grid_ai2_link_pane

0x30e4,	// (0x0003416b) popup_ai2_link_window_g1_ParamLimits

0x30e4,	// (0x0003416b) popup_ai2_link_window_g1

0x30f0,	// (0x00034177) popup_ai2_link_window_g2_ParamLimits

0x30f0,	// (0x00034177) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x00040a98) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x00040a98) popup_ai2_link_window_g

0x30ff,	// (0x00034186) ai2_mp_button_pane

0x3107,	// (0x0003418e) ai2_mp_volume_pane

0x1f05,	// (0x00032f8c) bg_popup_sub_pane_cp5_ParamLimits

0x1f05,	// (0x00032f8c) bg_popup_sub_pane_cp5

0x310f,	// (0x00034196) heading_ai2_gene_pane_ParamLimits

0x310f,	// (0x00034196) heading_ai2_gene_pane

0x311b,	// (0x000341a2) list_ai2_gene_pane_ParamLimits

0x311b,	// (0x000341a2) list_ai2_gene_pane

0x3163,	// (0x000341ea) cell_ai2_link_pane_ParamLimits

0x3163,	// (0x000341ea) cell_ai2_link_pane

0x3179,	// (0x00034200) cell_ai2_link_pane_g1

0x06c3,	// (0x0003174a) grid_highlight_pane_cp7

0xe07d,	// (0x0003f104) ai2_mp_volume_pane_g1

0x324a,	// (0x000342d1) ai2_mp_volume_pane_g2

0x31bf,	// (0x00034246) list_ai2_gene_pane_t1

0x3252,	// (0x000342d9) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x00040ab1) ai2_mp_volume_pane_g

0xe085,	// (0x0003f10c) volume_small_pane_cp3

0x325a,	// (0x000342e1) aid_size_cell_ai2_button

0x3262,	// (0x000342e9) grid_ai2_button_pane

0x326b,	// (0x000342f2) cell_ai2_button_pane_ParamLimits

0x326b,	// (0x000342f2) cell_ai2_button_pane

0x06b9,	// (0x00031740) cell_ai2_button_pane_g1

0x06c3,	// (0x0003174a) grid_highlight_pane_cp8

0x320a,	// (0x00034291) ai2_gene_pane_t1_ParamLimits

0x320a,	// (0x00034291) ai2_gene_pane_t1

0x7137,	// (0x000381be) aid_height_parent_landscape

0x7bdb,	// (0x00038c62) aid_height_set_list

0x2c12,	// (0x00033c99) aid_size_parent

0x2eea,	// (0x00033f71) aid_size_cell_graphic_pane_ParamLimits

0x312b,	// (0x000341b2) popup_ai2_data_window_g1_ParamLimits

0x312b,	// (0x000341b2) popup_ai2_data_window_g1

0x3137,	// (0x000341be) ai2_news_ticker_pane_g1

0x313f,	// (0x000341c6) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x00040a9d) ai2_news_ticker_pane_g

0x3147,	// (0x000341ce) ai2_news_ticker_pane_t1

0x3155,	// (0x000341dc) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x00040aa2) ai2_news_ticker_pane_t

0x3182,	// (0x00034209) heading_ai2_gene_pane_g1

0x318a,	// (0x00034211) heading_ai2_gene_pane_t1_ParamLimits

0x318a,	// (0x00034211) heading_ai2_gene_pane_t1

0x319f,	// (0x00034226) list_highlight_pane_cp6

0x31a7,	// (0x0003422e) ai2_gene_pane_ParamLimits

0x31a7,	// (0x0003422e) ai2_gene_pane

0x31cd,	// (0x00034254) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x00040aa7) list_ai2_gene_pane_t

0x31db,	// (0x00034262) list_highlight_pane_cp8_ParamLimits

0x31db,	// (0x00034262) list_highlight_pane_cp8

0x31ec,	// (0x00034273) ai2_gene_pane_g1_ParamLimits

0x31ec,	// (0x00034273) ai2_gene_pane_g1

0x31fe,	// (0x00034285) ai2_gene_pane_g2_ParamLimits

0x31fe,	// (0x00034285) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x00040aac) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x00040aac) ai2_gene_pane_g

0x0cfc,	// (0x00031d83) scroll_pane_cp12

0xdc10,	// (0x0003ec97) control_pane_t3_ParamLimits

0xdc10,	// (0x0003ec97) control_pane_t3

0x194a,	// (0x000329d1) status_small_pane_g8_ParamLimits

0x194a,	// (0x000329d1) status_small_pane_g8

0x7225,	// (0x000382ac) popup_find_window_ParamLimits

0x7412,	// (0x00038499) popup_note_image_window_ParamLimits

0x4818,	// (0x0003589f) list_double2_graphic_pane_vc_g1_ParamLimits

0x4818,	// (0x0003589f) list_double2_graphic_pane_vc_g1

0x5591,	// (0x00036618) list_double2_graphic_pane_vc_g2_ParamLimits

0x5591,	// (0x00036618) list_double2_graphic_pane_vc_g2

0x559d,	// (0x00036624) list_double2_graphic_pane_vc_g3_ParamLimits

0x559d,	// (0x00036624) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004088a) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004088a) list_double2_graphic_pane_vc_g

0x4824,	// (0x000358ab) list_double2_graphic_pane_vc_t1_ParamLimits

0x4824,	// (0x000358ab) list_double2_graphic_pane_vc_t1

0x5591,	// (0x00036618) list_single_heading_pane_vc_g1_ParamLimits

0x5591,	// (0x00036618) list_single_heading_pane_vc_g1

0x559d,	// (0x00036624) list_single_heading_pane_vc_g2_ParamLimits

0x559d,	// (0x00036624) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x000408ab) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x000408ab) list_single_heading_pane_vc_g

0x483a,	// (0x000358c1) list_single_heading_pane_vc_t1_ParamLimits

0x483a,	// (0x000358c1) list_single_heading_pane_vc_t1

0x4850,	// (0x000358d7) list_single_heading_pane_vc_t2_ParamLimits

0x4850,	// (0x000358d7) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x000408b0) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x000408b0) list_single_heading_pane_vc_t

0x1d38,	// (0x00032dbf) list_setting_number_pane_vc_g1_ParamLimits

0x1d38,	// (0x00032dbf) list_setting_number_pane_vc_g1

0x1d44,	// (0x00032dcb) list_setting_number_pane_vc_g2_ParamLimits

0x1d44,	// (0x00032dcb) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x000408b5) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x000408b5) list_setting_number_pane_vc_g

0x1d50,	// (0x00032dd7) list_setting_number_pane_vc_t1_ParamLimits

0x1d50,	// (0x00032dd7) list_setting_number_pane_vc_t1

0x1d64,	// (0x00032deb) list_setting_number_pane_vc_t2_ParamLimits

0x1d64,	// (0x00032deb) list_setting_number_pane_vc_t2

0x1d80,	// (0x00032e07) list_setting_number_pane_vc_t3_ParamLimits

0x1d80,	// (0x00032e07) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x000408ba) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x000408ba) list_setting_number_pane_vc_t

0x1da8,	// (0x00032e2f) set_value_pane_vc_ParamLimits

0x1da8,	// (0x00032e2f) set_value_pane_vc

0x2e67,	// (0x00033eee) list_double2_graphic_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double2_graphic_pane_vc

0x2e67,	// (0x00033eee) list_double2_large_graphic_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double2_large_graphic_pane_vc

0x2e67,	// (0x00033eee) list_double2_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double2_pane_vc

0x2e67,	// (0x00033eee) list_double_graphic_heading_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_graphic_heading_pane_vc

0x2e67,	// (0x00033eee) list_double_graphic_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_graphic_pane_vc

0x2e67,	// (0x00033eee) list_double_heading_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_heading_pane_vc

0x2e67,	// (0x00033eee) list_double_large_graphic_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_large_graphic_pane_vc

0x2e67,	// (0x00033eee) list_double_number_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_number_pane_vc

0x2e67,	// (0x00033eee) list_double_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_pane_vc

0x2e67,	// (0x00033eee) list_double_time_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_double_time_pane_vc

0x2e67,	// (0x00033eee) list_setting_number_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_setting_number_pane_vc

0x2e67,	// (0x00033eee) list_setting_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_setting_pane_vc

0x2e67,	// (0x00033eee) list_single_graphic_heading_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_single_graphic_heading_pane_vc

0x2e67,	// (0x00033eee) list_single_heading_pane_vc_ParamLimits

0x2e67,	// (0x00033eee) list_single_heading_pane_vc

0x619c,	// (0x00037223) list_single_number_heading_pane_vc_ParamLimits

0x619c,	// (0x00037223) list_single_number_heading_pane_vc

0x4818,	// (0x0003589f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4818,	// (0x0003589f) list_double_graphic_heading_pane_vc_g1

0x5591,	// (0x00036618) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5591,	// (0x00036618) list_double_graphic_heading_pane_vc_g2

0x559d,	// (0x00036624) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x559d,	// (0x00036624) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0004088a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004088a) list_double_graphic_heading_pane_vc_g

0x4957,	// (0x000359de) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4957,	// (0x000359de) list_double_graphic_heading_pane_vc_t1

0x483a,	// (0x000358c1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x483a,	// (0x000358c1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x00040ab8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00040ab8) list_double_graphic_heading_pane_vc_t

0x1d38,	// (0x00032dbf) list_setting_pane_vc_g1_ParamLimits

0x1d38,	// (0x00032dbf) list_setting_pane_vc_g1

0x1d44,	// (0x00032dcb) list_setting_pane_vc_g2_ParamLimits

0x1d44,	// (0x00032dcb) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x000408b5) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x000408b5) list_setting_pane_vc_g

0x3461,	// (0x000344e8) list_setting_pane_vc_t1_ParamLimits

0x3461,	// (0x000344e8) list_setting_pane_vc_t1

0x3475,	// (0x000344fc) list_setting_pane_vc_t2_ParamLimits

0x3475,	// (0x000344fc) list_setting_pane_vc_t2

0x0001,

0xfa74,	// (0x00040afb) list_setting_pane_vc_t_ParamLimits

0xfa74,	// (0x00040afb) list_setting_pane_vc_t

0x1da8,	// (0x00032e2f) set_value_pane_cp_vc_ParamLimits

0x1da8,	// (0x00032e2f) set_value_pane_cp_vc

0x5591,	// (0x00036618) list_single_number_heading_pane_vc_g1_ParamLimits

0x5591,	// (0x00036618) list_single_number_heading_pane_vc_g1

0x559d,	// (0x00036624) list_single_number_heading_pane_vc_g2_ParamLimits

0x559d,	// (0x00036624) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x000408ab) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x000408ab) list_single_number_heading_pane_vc_g

0x483a,	// (0x000358c1) list_single_number_heading_pane_vc_t1_ParamLimits

0x483a,	// (0x000358c1) list_single_number_heading_pane_vc_t1

0x496b,	// (0x000359f2) list_single_number_heading_pane_vc_t2_ParamLimits

0x496b,	// (0x000359f2) list_single_number_heading_pane_vc_t2

0x497f,	// (0x00035a06) list_single_number_heading_pane_vc_t3_ParamLimits

0x497f,	// (0x00035a06) list_single_number_heading_pane_vc_t3

0x0002,

0xfa79,	// (0x00040b00) list_single_number_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x00040b00) list_single_number_heading_pane_vc_t

0x4818,	// (0x0003589f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4818,	// (0x0003589f) list_single_graphic_heading_pane_vc_g1

0x5591,	// (0x00036618) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5591,	// (0x00036618) list_single_graphic_heading_pane_vc_g4

0x559d,	// (0x00036624) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x559d,	// (0x00036624) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004088a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004088a) list_single_graphic_heading_pane_vc_g

0x483a,	// (0x000358c1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x483a,	// (0x000358c1) list_single_graphic_heading_pane_vc_t1

0x4991,	// (0x00035a18) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4991,	// (0x00035a18) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x00040b07) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x00040b07) list_single_graphic_heading_pane_vc_t

0x5591,	// (0x00036618) list_double2_pane_vc_g1_ParamLimits

0x5591,	// (0x00036618) list_double2_pane_vc_g1

0x559d,	// (0x00036624) list_double2_pane_vc_g2_ParamLimits

0x559d,	// (0x00036624) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x000408ab) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x000408ab) list_double2_pane_vc_g

0x49a5,	// (0x00035a2c) list_double2_pane_vc_t1_ParamLimits

0x49a5,	// (0x00035a2c) list_double2_pane_vc_t1

0x634d,	// (0x000373d4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x634d,	// (0x000373d4) list_double2_large_graphic_pane_vc_g1

0x5591,	// (0x00036618) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5591,	// (0x00036618) list_double2_large_graphic_pane_vc_g2

0x559d,	// (0x00036624) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x559d,	// (0x00036624) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x00040b0c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x00040b0c) list_double2_large_graphic_pane_vc_g

0x49bb,	// (0x00035a42) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x49bb,	// (0x00035a42) list_double2_large_graphic_pane_vc_t1

0x6359,	// (0x000373e0) list_double_time_pane_vc_g1_ParamLimits

0x6359,	// (0x000373e0) list_double_time_pane_vc_g1

0x6365,	// (0x000373ec) list_double_time_pane_vc_g2_ParamLimits

0x6365,	// (0x000373ec) list_double_time_pane_vc_g2

0x0001,

0xfa8c,	// (0x00040b13) list_double_time_pane_vc_g_ParamLimits

0xfa8c,	// (0x00040b13) list_double_time_pane_vc_g

0x49d1,	// (0x00035a58) list_double_time_pane_vc_t1_ParamLimits

0x49d1,	// (0x00035a58) list_double_time_pane_vc_t1

0x49ea,	// (0x00035a71) list_double_time_pane_vc_t2_ParamLimits

0x49ea,	// (0x00035a71) list_double_time_pane_vc_t2

0x4a2a,	// (0x00035ab1) list_double_time_pane_vc_t3_ParamLimits

0x4a2a,	// (0x00035ab1) list_double_time_pane_vc_t3

0x4a42,	// (0x00035ac9) list_double_time_pane_vc_t4_ParamLimits

0x4a42,	// (0x00035ac9) list_double_time_pane_vc_t4

0x0003,

0xfa91,	// (0x00040b18) list_double_time_pane_vc_t_ParamLimits

0xfa91,	// (0x00040b18) list_double_time_pane_vc_t

0x5591,	// (0x00036618) list_double_pane_vc_g1_ParamLimits

0x5591,	// (0x00036618) list_double_pane_vc_g1

0x559d,	// (0x00036624) list_double_pane_vc_g2_ParamLimits

0x559d,	// (0x00036624) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x000408ab) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x000408ab) list_double_pane_vc_g

0x4a56,	// (0x00035add) list_double_pane_vc_t1_ParamLimits

0x4a56,	// (0x00035add) list_double_pane_vc_t1

0x4a68,	// (0x00035aef) list_double_pane_vc_t2_ParamLimits

0x4a68,	// (0x00035aef) list_double_pane_vc_t2

0x0001,

0xfa9a,	// (0x00040b21) list_double_pane_vc_t_ParamLimits

0xfa9a,	// (0x00040b21) list_double_pane_vc_t

0x5591,	// (0x00036618) list_double_number_pane_vc_g1_ParamLimits

0x5591,	// (0x00036618) list_double_number_pane_vc_g1

0x559d,	// (0x00036624) list_double_number_pane_vc_g2_ParamLimits

0x559d,	// (0x00036624) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x000408ab) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x000408ab) list_double_number_pane_vc_g

0x4a80,	// (0x00035b07) list_double_number_pane_vc_t1_ParamLimits

0x4a80,	// (0x00035b07) list_double_number_pane_vc_t1

0x4a94,	// (0x00035b1b) list_double_number_pane_vc_t2_ParamLimits

0x4a94,	// (0x00035b1b) list_double_number_pane_vc_t2

0x4a68,	// (0x00035aef) list_double_number_pane_vc_t3_ParamLimits

0x4a68,	// (0x00035aef) list_double_number_pane_vc_t3

0x0002,

0xfa9f,	// (0x00040b26) list_double_number_pane_vc_t_ParamLimits

0xfa9f,	// (0x00040b26) list_double_number_pane_vc_t

0x6371,	// (0x000373f8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6371,	// (0x000373f8) list_double_large_graphic_pane_vc_g1

0x637d,	// (0x00037404) list_double_large_graphic_pane_vc_g2_ParamLimits

0x637d,	// (0x00037404) list_double_large_graphic_pane_vc_g2

0x559d,	// (0x00036624) list_double_large_graphic_pane_vc_g3_ParamLimits

0x559d,	// (0x00036624) list_double_large_graphic_pane_vc_g3

0x4aa6,	// (0x00035b2d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4aa6,	// (0x00035b2d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa6,	// (0x00040b2d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x00040b2d) list_double_large_graphic_pane_vc_g

0x4ab2,	// (0x00035b39) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4ab2,	// (0x00035b39) list_double_large_graphic_pane_vc_t1

0x4ac4,	// (0x00035b4b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4ac4,	// (0x00035b4b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x00040b36) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x00040b36) list_double_large_graphic_pane_vc_t

0x5591,	// (0x00036618) list_double_heading_pane_vc_g1_ParamLimits

0x5591,	// (0x00036618) list_double_heading_pane_vc_g1

0x559d,	// (0x00036624) list_double_heading_pane_vc_g2_ParamLimits

0x559d,	// (0x00036624) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x000408ab) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x000408ab) list_double_heading_pane_vc_g

0x4add,	// (0x00035b64) list_double_heading_pane_vc_t1_ParamLimits

0x4add,	// (0x00035b64) list_double_heading_pane_vc_t1

0x483a,	// (0x000358c1) list_double_heading_pane_vc_t2_ParamLimits

0x483a,	// (0x000358c1) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x00040b3b) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x00040b3b) list_double_heading_pane_vc_t

0x4818,	// (0x0003589f) list_double_graphic_pane_vc_g1_ParamLimits

0x4818,	// (0x0003589f) list_double_graphic_pane_vc_g1

0x638c,	// (0x00037413) list_double_graphic_pane_vc_g2_ParamLimits

0x638c,	// (0x00037413) list_double_graphic_pane_vc_g2

0x639b,	// (0x00037422) list_double_graphic_pane_vc_g3_ParamLimits

0x639b,	// (0x00037422) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x00040b40) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x00040b40) list_double_graphic_pane_vc_g

0x4af1,	// (0x00035b78) list_double_graphic_pane_vc_t1_ParamLimits

0x4af1,	// (0x00035b78) list_double_graphic_pane_vc_t1

0x4a68,	// (0x00035aef) list_double_graphic_pane_vc_t2_ParamLimits

0x4a68,	// (0x00035aef) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x00040b47) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x00040b47) list_double_graphic_pane_vc_t

0xd22e,	// (0x0003e2b5) aid_size_cell_fastswap

0xd236,	// (0x0003e2bd) aid_size_cell_touch_ParamLimits

0xd236,	// (0x0003e2bd) aid_size_cell_touch

0xd49b,	// (0x0003e522) popup_fast_swap_wide_window_ParamLimits

0xd49b,	// (0x0003e522) popup_fast_swap_wide_window

0xd591,	// (0x0003e618) touch_pane_ParamLimits

0xd591,	// (0x0003e618) touch_pane

0x0d52,	// (0x00031dd9) button_value_adjust_pane_cp2

0x44cf,	// (0x00035556) button_value_adjust_pane_cp4

0x44ef,	// (0x00035576) form_field_data_pane_cp2

0x450e,	// (0x00035595) form_field_data_wide_pane_cp2

0x10a4,	// (0x0003212b) bg_scroll_pane_ParamLimits

0xd81d,	// (0x0003e8a4) scroll_handle_pane_ParamLimits

0xd831,	// (0x0003e8b8) scroll_sc2_down_pane_ParamLimits

0xd831,	// (0x0003e8b8) scroll_sc2_down_pane

0x10d5,	// (0x0003215c) scroll_sc2_up_pane_ParamLimits

0x10d5,	// (0x0003215c) scroll_sc2_up_pane

0x7f40,	// (0x00038fc7) grid_wheel_folder_pane_g1_ParamLimits

0x7f40,	// (0x00038fc7) grid_wheel_folder_pane_g1

0xd9f6,	// (0x0003ea7d) clock_nsta_pane_cp2_ParamLimits

0xd9f6,	// (0x0003ea7d) clock_nsta_pane_cp2

0x703f,	// (0x000380c6) listscroll_midp_pane_ParamLimits

0x704b,	// (0x000380d2) midp_canvas_pane

0x199e,	// (0x00032a25) nsta_clock_indic_pane

0x19e2,	// (0x00032a69) listscroll_form_pane_vc

0x19ea,	// (0x00032a71) listscroll_set_pane_vc_ParamLimits

0x19ea,	// (0x00032a71) listscroll_set_pane_vc

0x7686,	// (0x0003870d) clock_nsta_pane

0x7693,	// (0x0003871a) indicator_nsta_pane

0x1c2e,	// (0x00032cb5) bg_popup_sub_pane_cp2_ParamLimits

0x1c42,	// (0x00032cc9) find_pane_cp2_ParamLimits

0x1c42,	// (0x00032cc9) find_pane_cp2

0x1c58,	// (0x00032cdf) grid_toobar_pane_ParamLimits

0x1db4,	// (0x00032e3b) list_form_gen_pane_vc_ParamLimits

0x1db4,	// (0x00032e3b) list_form_gen_pane_vc

0x1dca,	// (0x00032e51) scroll_pane_cp8_vc_ParamLimits

0x1dca,	// (0x00032e51) scroll_pane_cp8_vc

0x1e1a,	// (0x00032ea1) data_form_wide_pane_vc_ParamLimits

0x1e1a,	// (0x00032ea1) data_form_wide_pane_vc

0x1e26,	// (0x00032ead) form_field_data_wide_pane_vc_g1

0x1e2e,	// (0x00032eb5) form_field_data_wide_pane_vc_t1_ParamLimits

0x1e2e,	// (0x00032eb5) form_field_data_wide_pane_vc_t1

0x0d66,	// (0x00031ded) input_focus_pane_cp6_vc_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_cp6_vc

0x7a00,	// (0x00038a87) list_midp_pane_ParamLimits

0x7a0c,	// (0x00038a93) scroll_pane_cp16_ParamLimits

0x7a0c,	// (0x00038a93) scroll_pane_cp16

0x208f,	// (0x00033116) button_value_adjust_pane_ParamLimits

0x208f,	// (0x00033116) button_value_adjust_pane

0x7bec,	// (0x00038c73) button_value_adjust_pane_cp6_ParamLimits

0x7bec,	// (0x00038c73) button_value_adjust_pane_cp6

0x7d0e,	// (0x00038d95) settings_code_pane_cp_ParamLimits

0x7d0e,	// (0x00038d95) settings_code_pane_cp

0x06b9,	// (0x00031740) cell_touch_pane_g1

0x06b9,	// (0x00031740) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x000407d3) cell_touch_pane_g

0x7e0a,	// (0x00038e91) cell_touch_pane_cp_ParamLimits

0x7e0a,	// (0x00038e91) cell_touch_pane_cp

0x7e1a,	// (0x00038ea1) cell_touch_pane_ParamLimits

0x7e1a,	// (0x00038ea1) cell_touch_pane

0x06b9,	// (0x00031740) scroll_sc2_down_pane_g1

0x06b9,	// (0x00031740) scroll_sc2_up_pane_g1

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp4_vc

0x327d,	// (0x00034304) list_set_graphic_pane_vc_g1_ParamLimits

0x327d,	// (0x00034304) list_set_graphic_pane_vc_g1

0x3289,	// (0x00034310) list_set_graphic_pane_vc_g2_ParamLimits

0x3289,	// (0x00034310) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x00040abd) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00040abd) list_set_graphic_pane_vc_g

0x3295,	// (0x0003431c) text_primary_small_cp13_vc_ParamLimits

0x3295,	// (0x0003431c) text_primary_small_cp13_vc

0x32ad,	// (0x00034334) list_set_graphic_pane_vc_ParamLimits

0x32ad,	// (0x00034334) list_set_graphic_pane_vc

0x06c3,	// (0x0003174a) input_focus_pane_cp2_vc

0x06b9,	// (0x00031740) setting_code_pane_vc_g1

0x32c1,	// (0x00034348) setting_code_pane_vc_t1

0x32cf,	// (0x00034356) set_text_pane_vc_t1_ParamLimits

0x32cf,	// (0x00034356) set_text_pane_vc_t1

0x06c3,	// (0x0003174a) input_focus_pane_cp1_vc

0x32ee,	// (0x00034375) list_set_text_pane_vc

0x06b9,	// (0x00031740) setting_text_pane_vc_g1

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp2_vc

0x32f8,	// (0x0003437f) setting_slider_graphic_pane_vc_g1

0x3300,	// (0x00034387) setting_slider_graphic_pane_vc_t1

0x330e,	// (0x00034395) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x00040ac2) setting_slider_graphic_pane_vc_t

0x331c,	// (0x000343a3) slider_set_pane_cp_vc

0x3324,	// (0x000343ab) slider_set_pane_vc_g1

0x332d,	// (0x000343b4) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x00040ac7) slider_set_pane_vc_g

0x0dcd,	// (0x00031e54) set_opt_bg_pane_g1_copy1

0x0dd5,	// (0x00031e5c) set_opt_bg_pane_g2_copy1

0x3359,	// (0x000343e0) set_opt_bg_pane_g3_copy1

0x0de5,	// (0x00031e6c) set_opt_bg_pane_g4_copy1

0x0ded,	// (0x00031e74) set_opt_bg_pane_g5_copy1

0x0df5,	// (0x00031e7c) set_opt_bg_pane_g6_copy1

0x3361,	// (0x000343e8) set_opt_bg_pane_g7_copy1

0x336b,	// (0x000343f2) set_opt_bg_pane_g8_copy1

0x3373,	// (0x000343fa) set_opt_bg_pane_g9_copy1

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp_vc

0x337b,	// (0x00034402) setting_slider_pane_vc_t1

0x3300,	// (0x00034387) setting_slider_pane_vc_t2

0x330e,	// (0x00034395) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x00040ad6) setting_slider_pane_vc_t

0x331c,	// (0x000343a3) slider_set_pane_vc

0xdd93,	// (0x0003ee1a) volume_set_pane_vc_g1

0xe08e,	// (0x0003f115) volume_set_pane_vc_g2

0xe097,	// (0x0003f11e) volume_set_pane_vc_g3

0xe0a0,	// (0x0003f127) volume_set_pane_vc_g4

0xe0a9,	// (0x0003f130) volume_set_pane_vc_g5

0xe0b2,	// (0x0003f139) volume_set_pane_vc_g6

0xe0bb,	// (0x0003f142) volume_set_pane_vc_g7

0xe0c4,	// (0x0003f14b) volume_set_pane_vc_g8

0xe0cd,	// (0x0003f154) volume_set_pane_vc_g9

0xe0d6,	// (0x0003f15d) volume_set_pane_vc_g10

0x0009,

0xfa56,	// (0x00040add) volume_set_pane_vc_g

0x338a,	// (0x00034411) volume_set_pane_vc

0x3392,	// (0x00034419) button_value_adjust_pane_cp1_vc

0x339c,	// (0x00034423) list_highlight_pane_cp2_vc

0x33a5,	// (0x0003442c) list_set_pane_vc_ParamLimits

0x33a5,	// (0x0003442c) list_set_pane_vc

0x33f7,	// (0x0003447e) main_pane_set_vc_t1_ParamLimits

0x33f7,	// (0x0003447e) main_pane_set_vc_t1

0x340c,	// (0x00034493) main_pane_set_vc_t2_ParamLimits

0x340c,	// (0x00034493) main_pane_set_vc_t2

0x341e,	// (0x000344a5) main_pane_set_vc_t3_ParamLimits

0x341e,	// (0x000344a5) main_pane_set_vc_t3

0x3430,	// (0x000344b7) main_pane_set_vc_t4_ParamLimits

0x3430,	// (0x000344b7) main_pane_set_vc_t4

0x0003,

0xfa6b,	// (0x00040af2) main_pane_set_vc_t_ParamLimits

0xfa6b,	// (0x00040af2) main_pane_set_vc_t

0x3442,	// (0x000344c9) setting_code_pane_vc_ParamLimits

0x3442,	// (0x000344c9) setting_code_pane_vc

0x3451,	// (0x000344d8) setting_slider_graphic_pane_vc

0x3451,	// (0x000344d8) setting_slider_pane_vc

0x3451,	// (0x000344d8) setting_text_pane_vc

0x3451,	// (0x000344d8) setting_volume_pane_vc

0x3459,	// (0x000344e0) scroll_pane_cp121_vc

0x0d40,	// (0x00031dc7) set_content_pane_vc

0x3497,	// (0x0003451e) button_value_adjust_pane_g1

0x34a0,	// (0x00034527) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x00040b4c) button_value_adjust_pane_g

0x34a9,	// (0x00034530) form_field_slider_wide_pane_vc_t1_ParamLimits

0x34a9,	// (0x00034530) form_field_slider_wide_pane_vc_t1

0x34bd,	// (0x00034544) form_field_slider_wide_pane_vc_t2_ParamLimits

0x34bd,	// (0x00034544) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x00040b51) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x00040b51) form_field_slider_wide_pane_vc_t

0x0711,	// (0x00031798) input_focus_pane_cp10_vc_ParamLimits

0x0711,	// (0x00031798) input_focus_pane_cp10_vc

0x34cf,	// (0x00034556) slider_cont_pane_cp1_vc_ParamLimits

0x34cf,	// (0x00034556) slider_cont_pane_cp1_vc

0x3324,	// (0x000343ab) slider_form_pane_g1_cp2

0x332d,	// (0x000343b4) slider_form_pane_g2_cp2

0x34e8,	// (0x0003456f) form_field_slider_pane_vc_t3

0x34f6,	// (0x0003457d) form_field_slider_pane_vc_t4

0x3504,	// (0x0003458b) slider_form_pane_vc_ParamLimits

0x3504,	// (0x0003458b) slider_form_pane_vc

0x3511,	// (0x00034598) form_field_slider_pane_vc_t1_ParamLimits

0x3511,	// (0x00034598) form_field_slider_pane_vc_t1

0x34bd,	// (0x00034544) form_field_slider_pane_vc_t2_ParamLimits

0x34bd,	// (0x00034544) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x00040b61) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x00040b61) form_field_slider_pane_vc_t

0x0711,	// (0x00031798) input_focus_pane_cp9_vc_ParamLimits

0x0711,	// (0x00031798) input_focus_pane_cp9_vc

0x352d,	// (0x000345b4) slider_cont_pane_vc_ParamLimits

0x352d,	// (0x000345b4) slider_cont_pane_vc

0x353f,	// (0x000345c6) list_form_graphic_pane_cp_vc_ParamLimits

0x353f,	// (0x000345c6) list_form_graphic_pane_cp_vc

0x1e26,	// (0x00032ead) form_field_popup_wide_pane_vc_g1

0x3554,	// (0x000345db) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3554,	// (0x000345db) form_field_popup_wide_pane_vc_t1

0x0d66,	// (0x00031ded) input_focus_pane_cp8_vc_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_cp8_vc

0x356b,	// (0x000345f2) list_form_wide_pane_vc_ParamLimits

0x356b,	// (0x000345f2) list_form_wide_pane_vc

0x3577,	// (0x000345fe) list_form_graphic_pane_vc_g1

0x357f,	// (0x00034606) list_form_graphic_pane_vc_t1_ParamLimits

0x357f,	// (0x00034606) list_form_graphic_pane_vc_t1

0x071f,	// (0x000317a6) list_highlight_pane_cp5_vc_ParamLimits

0x071f,	// (0x000317a6) list_highlight_pane_cp5_vc

0x359b,	// (0x00034622) list_form_graphic_pane_vc_ParamLimits

0x359b,	// (0x00034622) list_form_graphic_pane_vc

0x1e26,	// (0x00032ead) form_field_popup_pane_vc_g1

0x35b1,	// (0x00034638) form_field_popup_pane_vc_t1_ParamLimits

0x35b1,	// (0x00034638) form_field_popup_pane_vc_t1

0x0d66,	// (0x00031ded) input_focus_pane_cp7_vc_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_cp7_vc

0x35c8,	// (0x0003464f) list_form_pane_vc_ParamLimits

0x35c8,	// (0x0003464f) list_form_pane_vc

0x35d4,	// (0x0003465b) data_form_pane_vc_t1_ParamLimits

0x35d4,	// (0x0003465b) data_form_pane_vc_t1

0x0dcd,	// (0x00031e54) input_focus_pane_vc_g1

0x0dd5,	// (0x00031e5c) input_focus_pane_vc_g2

0x0ddd,	// (0x00031e64) input_focus_pane_vc_g3

0x0de5,	// (0x00031e6c) input_focus_pane_vc_g4

0x0ded,	// (0x00031e74) input_focus_pane_vc_g5

0x0df5,	// (0x00031e7c) input_focus_pane_vc_g6

0x0dfd,	// (0x00031e84) input_focus_pane_vc_g7

0x0e05,	// (0x00031e8c) input_focus_pane_vc_g8

0x0e0d,	// (0x00031e94) input_focus_pane_vc_g9

0x06b9,	// (0x00031740) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004075c) input_focus_pane_vc_g

0x1e1a,	// (0x00032ea1) data_form_pane_vc_ParamLimits

0x1e1a,	// (0x00032ea1) data_form_pane_vc

0x1e26,	// (0x00032ead) form_field_data_pane_vc_g1

0x35ef,	// (0x00034676) form_field_data_pane_vc_t1_ParamLimits

0x35ef,	// (0x00034676) form_field_data_pane_vc_t1

0x0d66,	// (0x00031ded) input_focus_pane_vc_ParamLimits

0x0d66,	// (0x00031ded) input_focus_pane_vc

0x3609,	// (0x00034690) button_value_adjust_pane_cp3_vc

0x3611,	// (0x00034698) button_value_adjust_pane_cp5_vc

0x3619,	// (0x000346a0) form_field_data_pane_vc_ParamLimits

0x3619,	// (0x000346a0) form_field_data_pane_vc

0x3630,	// (0x000346b7) form_field_data_pane_vc_cp2

0x3638,	// (0x000346bf) form_field_data_wide_pane_vc_ParamLimits

0x3638,	// (0x000346bf) form_field_data_wide_pane_vc

0x364e,	// (0x000346d5) form_field_data_wide_pane_vc_cp2

0x3656,	// (0x000346dd) form_field_popup_pane_vc_ParamLimits

0x3656,	// (0x000346dd) form_field_popup_pane_vc

0x366d,	// (0x000346f4) form_field_popup_wide_pane_vc_ParamLimits

0x366d,	// (0x000346f4) form_field_popup_wide_pane_vc

0x3683,	// (0x0003470a) form_field_slider_pane_vc_ParamLimits

0x3683,	// (0x0003470a) form_field_slider_pane_vc

0x3696,	// (0x0003471d) form_field_slider_wide_pane_vc_ParamLimits

0x3696,	// (0x0003471d) form_field_slider_wide_pane_vc

0x7e2c,	// (0x00038eb3) grid_touch_1_pane_ParamLimits

0x7e2c,	// (0x00038eb3) grid_touch_1_pane

0x7e38,	// (0x00038ebf) grid_touch_2_pane_ParamLimits

0x7e38,	// (0x00038ebf) grid_touch_2_pane

0x1990,	// (0x00032a17) touch_pane_g1_ParamLimits

0x1990,	// (0x00032a17) touch_pane_g1

0x36a9,	// (0x00034730) cell_app_pane_cp_wide_ParamLimits

0x36a9,	// (0x00034730) cell_app_pane_cp_wide

0x36ba,	// (0x00034741) grid_popup_fast_wide_pane_ParamLimits

0x36ba,	// (0x00034741) grid_popup_fast_wide_pane

0x36ce,	// (0x00034755) scroll_pane_cp19_ParamLimits

0x36ce,	// (0x00034755) scroll_pane_cp19

0x06c3,	// (0x0003174a) bg_popup_window_pane_cp20

0x36e2,	// (0x00034769) listscroll_popup_fast_wide_pane

0x071f,	// (0x000317a6) grid_indicator_nsta_pane

0x36ea,	// (0x00034771) clock_nsta_pane_g1

0x3701,	// (0x00034788) clock_nsta_pane_t1

0x7e50,	// (0x00038ed7) cell_indicator_nsta_pane_ParamLimits

0x7e50,	// (0x00038ed7) cell_indicator_nsta_pane

0x36f3,	// (0x0003477a) cell_indicator_nsta_pane_g1

0x7e88,	// (0x00038f0f) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x00040b6b) cell_indicator_nsta_pane_g

0x371d,	// (0x000347a4) clock_nsta_pane_cp

0x3725,	// (0x000347ac) indicator_nsta_pane_cp

0x372d,	// (0x000347b4) nsta_clock_indic_pane_g1

0x075b,	// (0x000317e2) grid_indicator_pane

0x11c7,	// (0x0003224e) scroll_pane_cp29

0xd945,	// (0x0003e9cc) indicator_nsta_pane_cp2_ParamLimits

0xd945,	// (0x0003e9cc) indicator_nsta_pane_cp2

0x071f,	// (0x000317a6) main_apps_wheel_pane

0x1f42,	// (0x00032fc9) form_midp_field_text_pane_ParamLimits

0x206f,	// (0x000330f6) scroll_bar_cp050_ParamLimits

0x3765,	// (0x000347ec) cell_indicator_pane_ParamLimits

0x3765,	// (0x000347ec) cell_indicator_pane

0x3782,	// (0x00034809) cell_indicator_pane_g1

0x7e9e,	// (0x00038f25) grid_wheel_folder_pane_ParamLimits

0x7e9e,	// (0x00038f25) grid_wheel_folder_pane

0x7eb4,	// (0x00038f3b) list_wheel_apps_pane_ParamLimits

0x7eb4,	// (0x00038f3b) list_wheel_apps_pane

0x7ec5,	// (0x00038f4c) main_apps_wheel_pane_g1_ParamLimits

0x7ec5,	// (0x00038f4c) main_apps_wheel_pane_g1

0x7ed9,	// (0x00038f60) main_apps_wheel_pane_g2_ParamLimits

0x7ed9,	// (0x00038f60) main_apps_wheel_pane_g2

0x0001,

0xfaee,	// (0x00040b75) main_apps_wheel_pane_g_ParamLimits

0xfaee,	// (0x00040b75) main_apps_wheel_pane_g

0x7ef1,	// (0x00038f78) main_apps_wheel_pane_t1_ParamLimits

0x7ef1,	// (0x00038f78) main_apps_wheel_pane_t1

0x7f14,	// (0x00038f9b) list_wheel_apps_pane_g1

0x7f1c,	// (0x00038fa3) list_wheel_apps_pane_g2

0x7f24,	// (0x00038fab) list_wheel_apps_pane_g3

0x7f2c,	// (0x00038fb3) list_wheel_apps_pane_g4

0x7f36,	// (0x00038fbd) list_wheel_apps_pane_g5

0x0004,

0xfaf3,	// (0x00040b7a) list_wheel_apps_pane_g

0x161a,	// (0x000326a1) navi_icon_text_pane

0x75ca,	// (0x00038651) aid_fill_nsta

0x7f59,	// (0x00038fe0) navi_icon_text_pane_g1

0x7f68,	// (0x00038fef) navi_icon_text_pane_t1

0x14b6,	// (0x0003253d) list_set_graphic_pane_t1_ParamLimits

0x14b6,	// (0x0003253d) list_set_graphic_pane_t1

0x2746,	// (0x000337cd) popup_midp_note_alarm_window_t6_ParamLimits

0x2746,	// (0x000337cd) popup_midp_note_alarm_window_t6

0x2758,	// (0x000337df) popup_midp_note_alarm_window_t7_ParamLimits

0x2758,	// (0x000337df) popup_midp_note_alarm_window_t7

0x276a,	// (0x000337f1) popup_midp_note_alarm_window_t8_ParamLimits

0x276a,	// (0x000337f1) popup_midp_note_alarm_window_t8

0x277c,	// (0x00033803) popup_midp_note_alarm_window_t9_ParamLimits

0x277c,	// (0x00033803) popup_midp_note_alarm_window_t9

0x278e,	// (0x00033815) popup_midp_note_alarm_window_t10_ParamLimits

0x278e,	// (0x00033815) popup_midp_note_alarm_window_t10

0x27a0,	// (0x00033827) popup_midp_note_alarm_window_t11_ParamLimits

0x27a0,	// (0x00033827) popup_midp_note_alarm_window_t11

0x27b2,	// (0x00033839) scroll_pane_cp17_ParamLimits

0x27b2,	// (0x00033839) scroll_pane_cp17

0xdd93,	// (0x0003ee1a) volume_small_pane_cp_g1

0xe0df,	// (0x0003f166) volume_small_pane_cp_g2

0xe0e8,	// (0x0003f16f) volume_small_pane_cp_g3

0xe0f1,	// (0x0003f178) volume_small_pane_cp_g4

0xe0fa,	// (0x0003f181) volume_small_pane_cp_g5

0xe103,	// (0x0003f18a) volume_small_pane_cp_g6

0xe10c,	// (0x0003f193) volume_small_pane_cp_g7

0xe115,	// (0x0003f19c) volume_small_pane_cp_g8

0xe11e,	// (0x0003f1a5) volume_small_pane_cp_g9

0xe127,	// (0x0003f1ae) volume_small_pane_cp_g10

0x17c6,	// (0x0003284d) midp_ticker_pane_g1_ParamLimits

0x17d2,	// (0x00032859) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x00040824) midp_ticker_pane_g_ParamLimits

0x70f4,	// (0x0003817b) midp_ticker_pane_t1_ParamLimits

0x75e0,	// (0x00038667) aid_fill_nsta_2

0x205b,	// (0x000330e2) list_form2_midp_pane

0x2e45,	// (0x00033ecc) midp_editing_number_pane_ParamLimits

0x2e54,	// (0x00033edb) midp_ticker_pane_ParamLimits

0x378c,	// (0x00034813) form2_midp_field_pane

0x3794,	// (0x0003481b) scroll_pane_cp51

0x37b4,	// (0x0003483b) form2_midp_button_pane_ParamLimits

0x37b4,	// (0x0003483b) form2_midp_button_pane

0x37c6,	// (0x0003484d) form2_midp_content_pane_ParamLimits

0x37c6,	// (0x0003484d) form2_midp_content_pane

0x37e0,	// (0x00034867) form2_midp_field_choice_group_pane

0x37e8,	// (0x0003486f) form2_midp_field_pane_g1

0x37f0,	// (0x00034877) form2_midp_field_pane_g2

0x37f8,	// (0x0003487f) form2_midp_field_pane_g3

0x3800,	// (0x00034887) form2_midp_field_pane_g4

0x0003,

0xfb18,	// (0x00040b9f) form2_midp_field_pane_g

0x3808,	// (0x0003488f) form2_midp_gauge_slider_pane

0x3810,	// (0x00034897) form2_midp_gauge_wait_pane

0x3818,	// (0x0003489f) form2_midp_image_pane_ParamLimits

0x3818,	// (0x0003489f) form2_midp_image_pane

0x3833,	// (0x000348ba) form2_midp_label_pane_ParamLimits

0x3833,	// (0x000348ba) form2_midp_label_pane

0x7f99,	// (0x00039020) form2_midp_label_pane_cp_ParamLimits

0x7f99,	// (0x00039020) form2_midp_label_pane_cp

0x384c,	// (0x000348d3) form2_midp_string_pane_ParamLimits

0x384c,	// (0x000348d3) form2_midp_string_pane

0x4b03,	// (0x00035b8a) form2_midp_text_pane_ParamLimits

0x4b03,	// (0x00035b8a) form2_midp_text_pane

0x385e,	// (0x000348e5) form2_midp_time_pane

0x386e,	// (0x000348f5) input_focus_pane_cp51_ParamLimits

0x386e,	// (0x000348f5) input_focus_pane_cp51

0x3886,	// (0x0003490d) form2_midp_label_pane_t1_ParamLimits

0x3886,	// (0x0003490d) form2_midp_label_pane_t1

0x4b1e,	// (0x00035ba5) form2_mdip_text_pane_t1_ParamLimits

0x4b1e,	// (0x00035ba5) form2_mdip_text_pane_t1

0x4b3a,	// (0x00035bc1) form2_midp_time_pane_t1

0x38ce,	// (0x00034955) form2_midp_gauge_slider_pane_t1

0x7fba,	// (0x00039041) form2_midp_gauge_slider_pane_t2

0x7fcc,	// (0x00039053) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb21,	// (0x00040ba8) form2_midp_gauge_slider_pane_t

0x38e0,	// (0x00034967) form2_midp_slider_pane

0x38ec,	// (0x00034973) form2_midp_gauge_wait_pane_t1

0x38fa,	// (0x00034981) form2_midp_wait_pane_ParamLimits

0x38fa,	// (0x00034981) form2_midp_wait_pane

0x7fde,	// (0x00039065) list_single_2graphic_pane_cp4_ParamLimits

0x7fde,	// (0x00039065) list_single_2graphic_pane_cp4

0x793b,	// (0x000389c2) list_single_midp_graphic_pane_cp_ParamLimits

0x793b,	// (0x000389c2) list_single_midp_graphic_pane_cp

0x06c3,	// (0x0003174a) list_highlight_pane_cp20

0x3925,	// (0x000349ac) list_single_2graphic_pane_g1_cp4

0x3182,	// (0x00034209) list_single_2graphic_pane_g2_cp4

0x392d,	// (0x000349b4) list_single_2graphic_pane_t1_cp4

0x071f,	// (0x000317a6) list_highlight_pane_cp21

0x393c,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp

0x394b,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp

0x800d,	// (0x00039094) form2_mdip_string_pane_t1_ParamLimits

0x800d,	// (0x00039094) form2_mdip_string_pane_t1

0x06c3,	// (0x0003174a) bg_wml_button_pane_cp2

0x06b9,	// (0x00031740) form2_midp_image_pane_g1

0x55fc,	// (0x00036683) list_double_large_graphic_pane_g5_ParamLimits

0x55fc,	// (0x00036683) list_double_large_graphic_pane_g5

0x703f,	// (0x000380c6) midp_form_pane_ParamLimits

0x071f,	// (0x000317a6) main_apps_wheel_pane_ParamLimits

0x7438,	// (0x000384bf) popup_preview_window_ParamLimits

0x7438,	// (0x000384bf) popup_preview_window

0x1acf,	// (0x00032b56) popup_touch_info_window_ParamLimits

0x1acf,	// (0x00032b56) popup_touch_info_window

0x1aed,	// (0x00032b74) popup_touch_menu_window_ParamLimits

0x1aed,	// (0x00032b74) popup_touch_menu_window

0x06af,	// (0x00031736) bg_popup_sub_pane_cp6

0x8147,	// (0x000391ce) list_touch_menu_pane

0x814f,	// (0x000391d6) list_single_touch_menu_pane_ParamLimits

0x814f,	// (0x000391d6) list_single_touch_menu_pane

0x8164,	// (0x000391eb) list_single_touch_menu_pane_t1

0x071f,	// (0x000317a6) bg_popup_sub_pane_cp7_ParamLimits

0x071f,	// (0x000317a6) bg_popup_sub_pane_cp7

0x8172,	// (0x000391f9) heading_sub_pane

0x817a,	// (0x00039201) list_touch_info_pane_ParamLimits

0x817a,	// (0x00039201) list_touch_info_pane

0x8189,	// (0x00039210) list_single_touch_info_pane_ParamLimits

0x8189,	// (0x00039210) list_single_touch_info_pane

0x819b,	// (0x00039222) list_single_touch_info_pane_t1

0x81a9,	// (0x00039230) list_single_touch_info_pane_t2

0x0001,

0xfb2f,	// (0x00040bb6) list_single_touch_info_pane_t

0x179c,	// (0x00032823) bg_popup_heading_pane_cp

0x81b7,	// (0x0003923e) heading_sub_pane_t1

0x1de0,	// (0x00032e67) bg_popup_preview_window_pane_cp_ParamLimits

0x1de0,	// (0x00032e67) bg_popup_preview_window_pane_cp

0x8172,	// (0x000391f9) heading_preview_pane

0x817a,	// (0x00039201) list_preview_pane_ParamLimits

0x817a,	// (0x00039201) list_preview_pane

0x81c5,	// (0x0003924c) popup_preview_window_g1

0x8189,	// (0x00039210) list_single_preview_pane_ParamLimits

0x8189,	// (0x00039210) list_single_preview_pane

0x81cd,	// (0x00039254) list_single_preview_pane_g1

0x81d5,	// (0x0003925c) list_single_preview_pane_t1

0x819b,	// (0x00039222) list_single_preview_pane_t2

0x0001,

0xfb34,	// (0x00040bbb) list_single_preview_pane_t

0x81e3,	// (0x0003926a) bg_popup_heading_pane_cp2_ParamLimits

0x81e3,	// (0x0003926a) bg_popup_heading_pane_cp2

0x81f9,	// (0x00039280) heading_preview_pane_g1

0x8201,	// (0x00039288) heading_preview_pane_t1_ParamLimits

0x8201,	// (0x00039288) heading_preview_pane_t1

0x0772,	// (0x000317f9) soft_indicator_pane_t1_ParamLimits

0x0cd9,	// (0x00031d60) scroll_pane_ParamLimits

0x10c3,	// (0x0003214a) scroll_sc2_left_pane

0x10cc,	// (0x00032153) scroll_sc2_right_pane

0x10eb,	// (0x00032172) scroll_bg_pane_g1_ParamLimits

0x1100,	// (0x00032187) scroll_bg_pane_g2_ParamLimits

0x1118,	// (0x0003219f) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x000407b3) scroll_bg_pane_g_ParamLimits

0x10eb,	// (0x00032172) scroll_handle_pane_g1_ParamLimits

0x113a,	// (0x000321c1) scroll_handle_pane_g2_ParamLimits

0x1118,	// (0x0003219f) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x000407ba) scroll_handle_pane_g_ParamLimits

0x1a0a,	// (0x00032a91) popup_choice_list_window_ParamLimits

0x1a0a,	// (0x00032a91) popup_choice_list_window

0x1c3a,	// (0x00032cc1) choice_list_pane

0x1cbc,	// (0x00032d43) cell_toolbar_pane_t1

0x1ce4,	// (0x00032d6b) toolbar_button_pane_ParamLimits

0x2b90,	// (0x00033c17) ai_gene_pane_1_t2_ParamLimits

0x2b90,	// (0x00033c17) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x000409d7) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x000409d7) ai_gene_pane_1_t

0x821e,	// (0x000392a5) scroll_sc2_left_pane_g1

0x821e,	// (0x000392a5) scroll_sc2_right_pane_g1

0x19d6,	// (0x00032a5d) bg_popup_sub_pane_cp10

0x8228,	// (0x000392af) list_choice_list_pane

0x823f,	// (0x000392c6) list_single_choice_list_pane_ParamLimits

0x823f,	// (0x000392c6) list_single_choice_list_pane

0x8253,	// (0x000392da) list_single_choice_list_pane_g1

0x825b,	// (0x000392e2) list_single_choice_list_pane_t1_ParamLimits

0x825b,	// (0x000392e2) list_single_choice_list_pane_t1

0x8270,	// (0x000392f7) choice_list_pane_g1

0x8278,	// (0x000392ff) choice_list_pane_t1

0x06af,	// (0x00031736) input_focus_pane_cp11

0x1026,	// (0x000320ad) title_pane_stacon_g2_ParamLimits

0x1026,	// (0x000320ad) title_pane_stacon_g2

0x0002,

0xf712,	// (0x00040799) title_pane_stacon_g_ParamLimits

0xf712,	// (0x00040799) title_pane_stacon_g

0x179c,	// (0x00032823) cursor_press_pane

0x71dd,	// (0x00038264) popup_fep_hwr_window_ParamLimits

0x71dd,	// (0x00038264) popup_fep_hwr_window

0x1a6c,	// (0x00032af3) popup_fep_vkb_window_ParamLimits

0x1a6c,	// (0x00032af3) popup_fep_vkb_window

0x8286,	// (0x0003930d) cursor_press_pane_g1

0x0002,

0xfb5d,	// (0x00040be4) fep_vkb_side_pane_g_ParamLimits

0xe169,	// (0x0003f1f0) fep_hwr_candidate_pane_ParamLimits

0xe169,	// (0x0003f1f0) fep_hwr_candidate_pane

0xe193,	// (0x0003f21a) fep_hwr_side_pane_ParamLimits

0xe193,	// (0x0003f21a) fep_hwr_side_pane

0xe1b3,	// (0x0003f23a) fep_hwr_top_pane_ParamLimits

0xe1b3,	// (0x0003f23a) fep_hwr_top_pane

0xe1cb,	// (0x0003f252) fep_hwr_write_pane_ParamLimits

0xe1cb,	// (0x0003f252) fep_hwr_write_pane

0xfb5d,	// (0x00040be4) fep_vkb_side_pane_g

0x82a0,	// (0x00039327) fep_hwr_top_pane_g1

0x828e,	// (0x00039315) fep_hwr_top_pane_g2

0xe205,	// (0x0003f28c) fep_hwr_top_pane_g3

0x0002,

0xfb39,	// (0x00040bc0) fep_hwr_top_pane_g

0xe21a,	// (0x0003f2a1) fep_hwr_top_text_pane

0x128d,	// (0x00032314) fep_hwr_top_text_pane_g1

0x82d6,	// (0x0003935d) fep_hwr_top_text_pane_t1

0xe310,	// (0x0003f397) fep_hwr_candidate_pane_g1

0x8530,	// (0x000395b7) fep_vkb_keypad_pane_g3_ParamLimits

0x8530,	// (0x000395b7) fep_vkb_keypad_pane_g3

0x8558,	// (0x000395df) fep_vkb_keypad_pane_g4_ParamLimits

0x8558,	// (0x000395df) fep_vkb_keypad_pane_g4

0x85c7,	// (0x0003964e) fep_vkb_bottom_pane_g2_ParamLimits

0x85c7,	// (0x0003964e) fep_vkb_bottom_pane_g2

0x0001,

0xfb64,	// (0x00040beb) fep_vkb_bottom_pane_g_ParamLimits

0xfb64,	// (0x00040beb) fep_vkb_bottom_pane_g

0x821e,	// (0x000392a5) cell_vkb_side_pane_g2

0x0001,

0xfb6e,	// (0x00040bf5) cell_vkb_side_pane_g

0x8652,	// (0x000396d9) cell_vkb_side_pane_t1

0x8660,	// (0x000396e7) cell_vkb_side_pane_t1_copy1

0x821e,	// (0x000392a5) bg_fep_vkb_candidate_pane_g2

0x8792,	// (0x00039819) cell_vkb_candidate_pane_ParamLimits

0x82e4,	// (0x0003936b) aid_size_cell_vkb_ParamLimits

0x82e4,	// (0x0003936b) aid_size_cell_vkb

0x8792,	// (0x00039819) cell_vkb_candidate_pane

0xe337,	// (0x0003f3be) bg_popup_fep_shadow_pane_g1

0x8372,	// (0x000393f9) fep_vkb_bottom_pane_ParamLimits

0x8372,	// (0x000393f9) fep_vkb_bottom_pane

0x83af,	// (0x00039436) fep_vkb_candidate_pane_ParamLimits

0x83af,	// (0x00039436) fep_vkb_candidate_pane

0x83cb,	// (0x00039452) fep_vkb_keypad_pane_ParamLimits

0x83cb,	// (0x00039452) fep_vkb_keypad_pane

0x8411,	// (0x00039498) fep_vkb_side_pane_ParamLimits

0x8411,	// (0x00039498) fep_vkb_side_pane

0x844d,	// (0x000394d4) fep_vkb_top_pane_ParamLimits

0x844d,	// (0x000394d4) fep_vkb_top_pane

0x8489,	// (0x00039510) fep_vkb_top_pane_g1_ParamLimits

0x8489,	// (0x00039510) fep_vkb_top_pane_g1

0x8498,	// (0x0003951f) fep_vkb_top_pane_g2_ParamLimits

0x8498,	// (0x0003951f) fep_vkb_top_pane_g2

0x84a7,	// (0x0003952e) fep_vkb_top_pane_g3_ParamLimits

0x84a7,	// (0x0003952e) fep_vkb_top_pane_g3

0x0003,

0xfb54,	// (0x00040bdb) fep_vkb_top_pane_g_ParamLimits

0xfb54,	// (0x00040bdb) fep_vkb_top_pane_g

0x84c5,	// (0x0003954c) fep_vkb_top_text_pane_ParamLimits

0x84c5,	// (0x0003954c) fep_vkb_top_text_pane

0x84d6,	// (0x0003955d) fep_vkb_side_pane_g1_ParamLimits

0x84d6,	// (0x0003955d) fep_vkb_side_pane_g1

0x851f,	// (0x000395a6) grid_vkb_side_pane_ParamLimits

0x851f,	// (0x000395a6) grid_vkb_side_pane

0xe33f,	// (0x0003f3c6) bg_popup_fep_shadow_pane_g2

0xe348,	// (0x0003f3cf) bg_popup_fep_shadow_pane_g3

0xe350,	// (0x0003f3d7) bg_popup_fep_shadow_pane_g4

0xe359,	// (0x0003f3e0) bg_popup_fep_shadow_pane_g5

0xe363,	// (0x0003f3ea) bg_popup_fep_shadow_pane_g6

0xe36b,	// (0x0003f3f2) bg_popup_fep_shadow_pane_g7

0x0de5,	// (0x00031e6c) bg_popup_fep_shadow_pane_g8

0x8576,	// (0x000395fd) grid_vkb_keypad_number_pane_ParamLimits

0x8576,	// (0x000395fd) grid_vkb_keypad_number_pane

0x8586,	// (0x0003960d) grid_vkb_keypad_pane_ParamLimits

0x8586,	// (0x0003960d) grid_vkb_keypad_pane

0x85ac,	// (0x00039633) fep_vkb_bottom_pane_g1_ParamLimits

0x85ac,	// (0x00039633) fep_vkb_bottom_pane_g1

0x85d5,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x85d5,	// (0x0003965c) grid_vkb_keypad_bottom_left_pane

0x85ea,	// (0x00039671) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x85ea,	// (0x00039671) grid_vkb_keypad_bottom_right_pane

0x85ff,	// (0x00039686) fep_vkb_top_text_pane_g1

0x861a,	// (0x000396a1) fep_vkb_top_text_pane_t1

0x862f,	// (0x000396b6) cell_vkb_side_pane_ParamLimits

0x862f,	// (0x000396b6) cell_vkb_side_pane

0x821e,	// (0x000392a5) cell_vkb_side_pane_g1

0x866e,	// (0x000396f5) cell_vkb_keypad_pane_ParamLimits

0x866e,	// (0x000396f5) cell_vkb_keypad_pane

0x86e9,	// (0x00039770) cell_vkb_keypad_pane_g1

0x0008,

0xfb81,	// (0x00040c08) bg_popup_fep_shadow_pane_g

0xe37d,	// (0x0003f404) cell_hwr_side_pane_g1

0xe37d,	// (0x0003f404) cell_hwr_side_pane_g2

0x86f3,	// (0x0003977a) cell_vkb_keypad_pane_t1

0x8701,	// (0x00039788) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x8701,	// (0x00039788) cell_vkb_keypad_bottom_left_pane

0x871e,	// (0x000397a5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x871e,	// (0x000397a5) cell_vkb_keypad_bottom_right_pane

0x821e,	// (0x000392a5) cell_vkb_keypad_bottom_left_pane_g1

0x821e,	// (0x000392a5) cell_vkb_keypad_bottom_right_pane_g1

0x8757,	// (0x000397de) cell_vkb_keypad_number_pane_ParamLimits

0x8757,	// (0x000397de) cell_vkb_keypad_number_pane

0x8776,	// (0x000397fd) cell_vkb_keypad_number_pane_g1

0x8780,	// (0x00039807) cell_vkb_keypad_number_pane_g2

0x8789,	// (0x00039810) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb73,	// (0x00040bfa) cell_vkb_keypad_number_pane_g

0x86f3,	// (0x0003977a) cell_vkb_keypad_number_pane_t1

0x87bd,	// (0x00039844) fep_vkb_candidate_pane_g1

0x0001,

0xfb94,	// (0x00040c1b) cell_hwr_side_pane_g

0x87d6,	// (0x0003985d) cell_hwr_side_pane_t1

0xe387,	// (0x0003f40e) cell_hwr_side_pane_t1_copy1

0xe395,	// (0x0003f41c) cell_hwr_candidate_pane_g1

0xe3c4,	// (0x0003f44b) cell_hwr_candidate_pane_t1

0x821e,	// (0x000392a5) cell_vkb_candidate_pane_g2

0x885c,	// (0x000398e3) cell_vkb_candidate_pane_t1

0xe130,	// (0x0003f1b7) bg_popup_fep_shadow_pane_ParamLimits

0xe130,	// (0x0003f1b7) bg_popup_fep_shadow_pane

0xe1e5,	// (0x0003f26c) bg_fep_hwr_top_pane_g4

0x82b2,	// (0x00039339) bg_hwr_side_pane_g1_ParamLimits

0x82b2,	// (0x00039339) bg_hwr_side_pane_g1

0xe256,	// (0x0003f2dd) cell_hwr_side_pane_ParamLimits

0xe256,	// (0x0003f2dd) cell_hwr_side_pane

0xe291,	// (0x0003f318) fep_hwr_write_pane_g1_ParamLimits

0xe291,	// (0x0003f318) fep_hwr_write_pane_g1

0xe29e,	// (0x0003f325) fep_hwr_write_pane_g2_ParamLimits

0xe29e,	// (0x0003f325) fep_hwr_write_pane_g2

0xe2ab,	// (0x0003f332) fep_hwr_write_pane_g3_ParamLimits

0xe2ab,	// (0x0003f332) fep_hwr_write_pane_g3

0xe2b9,	// (0x0003f340) fep_hwr_write_pane_g4_ParamLimits

0xe2b9,	// (0x0003f340) fep_hwr_write_pane_g4

0x0005,

0xfb40,	// (0x00040bc7) fep_hwr_write_pane_g_ParamLimits

0xfb40,	// (0x00040bc7) fep_hwr_write_pane_g

0xe1e5,	// (0x0003f26c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe1e5,	// (0x0003f26c) bg_fep_hwr_candidate_pane_g2

0xe2ce,	// (0x0003f355) cell_hwr_candidate_pane_ParamLimits

0xe2ce,	// (0x0003f355) cell_hwr_candidate_pane

0xe310,	// (0x0003f397) fep_hwr_candidate_pane_g1_ParamLimits

0x8312,	// (0x00039399) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x8312,	// (0x00039399) bg_popup_fep_shadow_pane_cp2

0x84b7,	// (0x0003953e) fep_vkb_top_pane_g4_ParamLimits

0x84b7,	// (0x0003953e) fep_vkb_top_pane_g4

0x84fd,	// (0x00039584) fep_vkb_side_pane_g2_ParamLimits

0x84fd,	// (0x00039584) fep_vkb_side_pane_g2

0x43fc,	// (0x00035483) list_setting_pane_t4_ParamLimits

0x43fc,	// (0x00035483) list_setting_pane_t4

0x4496,	// (0x0003551d) list_setting_number_pane_t5_ParamLimits

0x4496,	// (0x0003551d) list_setting_number_pane_t5

0x5948,	// (0x000369cf) list_double_heading_pane_cp2_ParamLimits

0x5948,	// (0x000369cf) list_double_heading_pane_cp2

0x0d80,	// (0x00031e07) list_double_heading_pane_g1_cp2_ParamLimits

0x0d80,	// (0x00031e07) list_double_heading_pane_g1_cp2

0x0d8c,	// (0x00031e13) list_double_heading_pane_g2_cp2_ParamLimits

0x0d8c,	// (0x00031e13) list_double_heading_pane_g2_cp2

0x886a,	// (0x000398f1) list_double_heading_pane_t1_cp2_ParamLimits

0x886a,	// (0x000398f1) list_double_heading_pane_t1_cp2

0x8880,	// (0x00039907) list_double_heading_pane_t2_cp2_ParamLimits

0x8880,	// (0x00039907) list_double_heading_pane_t2_cp2

0x06a7,	// (0x0003172e) aid_value_unit2

0xd4e7,	// (0x0003e56e) popup_preview_fixed_window

0x0852,	// (0x000318d9) bg_popup_preview_window_pane_cp02

0x8892,	// (0x00039919) list_preview_fixed_pane

0x88d8,	// (0x0003995f) list_empty_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_empty_pane_fp

0x88d8,	// (0x0003995f) list_single_cale_day_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_single_cale_day_pane_fp

0x88d8,	// (0x0003995f) list_single_graphic_heading_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_single_graphic_heading_pane_fp

0x88d8,	// (0x0003995f) list_single_graphic_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_single_graphic_pane_fp

0x88d8,	// (0x0003995f) list_single_heading_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_single_heading_pane_fp

0x88d8,	// (0x0003995f) list_single_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_single_pane_fp

0x88ef,	// (0x00039976) list_single_pane_fp_g1_ParamLimits

0x88ef,	// (0x00039976) list_single_pane_fp_g1

0x55e4,	// (0x0003666b) list_single_pane_fp_g2_ParamLimits

0x55e4,	// (0x0003666b) list_single_pane_fp_g2

0x4b4d,	// (0x00035bd4) list_single_pane_fp_g3_ParamLimits

0x4b4d,	// (0x00035bd4) list_single_pane_fp_g3

0x88fb,	// (0x00039982) list_single_pane_fp_g4_ParamLimits

0x88fb,	// (0x00039982) list_single_pane_fp_g4

0x0003,

0xfba7,	// (0x00040c2e) list_single_pane_fp_g_ParamLimits

0xfba7,	// (0x00040c2e) list_single_pane_fp_g

0x4b61,	// (0x00035be8) list_single_pane_fp_t1_ParamLimits

0x4b61,	// (0x00035be8) list_single_pane_fp_t1

0x4b78,	// (0x00035bff) list_single_graphic_pane_fp_g1_ParamLimits

0x4b78,	// (0x00035bff) list_single_graphic_pane_fp_g1

0x88ef,	// (0x00039976) list_single_graphic_pane_fp_g2_ParamLimits

0x88ef,	// (0x00039976) list_single_graphic_pane_fp_g2

0x55e4,	// (0x0003666b) list_single_graphic_pane_fp_g3_ParamLimits

0x55e4,	// (0x0003666b) list_single_graphic_pane_fp_g3

0x4b4d,	// (0x00035bd4) list_single_graphic_pane_fp_g4_ParamLimits

0x4b4d,	// (0x00035bd4) list_single_graphic_pane_fp_g4

0x88fb,	// (0x00039982) list_single_graphic_pane_fp_g5_ParamLimits

0x88fb,	// (0x00039982) list_single_graphic_pane_fp_g5

0x0004,

0xfbb0,	// (0x00040c37) list_single_graphic_pane_fp_g_ParamLimits

0xfbb0,	// (0x00040c37) list_single_graphic_pane_fp_g

0x4b84,	// (0x00035c0b) list_single_graphic_pane_fp_t1_ParamLimits

0x4b84,	// (0x00035c0b) list_single_graphic_pane_fp_t1

0x4b78,	// (0x00035bff) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4b78,	// (0x00035bff) list_single_graphic_heading_pane_fp_g1

0x88ef,	// (0x00039976) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x88ef,	// (0x00039976) list_single_graphic_heading_pane_fp_g2

0x55e4,	// (0x0003666b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x55e4,	// (0x0003666b) list_single_graphic_heading_pane_fp_g3

0x4b4d,	// (0x00035bd4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4b4d,	// (0x00035bd4) list_single_graphic_heading_pane_fp_g4

0x88fb,	// (0x00039982) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x88fb,	// (0x00039982) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x00040c37) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x00040c37) list_single_graphic_heading_pane_fp_g

0x4b9a,	// (0x00035c21) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4b9a,	// (0x00035c21) list_single_graphic_heading_pane_fp_t1

0x4bb0,	// (0x00035c37) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4bb0,	// (0x00035c37) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbbb,	// (0x00040c42) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbbb,	// (0x00040c42) list_single_graphic_heading_pane_fp_t

0x4bc2,	// (0x00035c49) list_single_cale_day_pane_fp_g1_ParamLimits

0x4bc2,	// (0x00035c49) list_single_cale_day_pane_fp_g1

0x8907,	// (0x0003998e) list_single_cale_day_pane_fp_g2_ParamLimits

0x8907,	// (0x0003998e) list_single_cale_day_pane_fp_g2

0x4bfa,	// (0x00035c81) list_single_cale_day_pane_fp_g3_ParamLimits

0x4bfa,	// (0x00035c81) list_single_cale_day_pane_fp_g3

0x4c22,	// (0x00035ca9) list_single_cale_day_pane_fp_g4_ParamLimits

0x4c22,	// (0x00035ca9) list_single_cale_day_pane_fp_g4

0x4c46,	// (0x00035ccd) list_single_cale_day_pane_fp_g5_ParamLimits

0x4c46,	// (0x00035ccd) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc0,	// (0x00040c47) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc0,	// (0x00040c47) list_single_cale_day_pane_fp_g

0x4c6a,	// (0x00035cf1) list_single_cale_day_pane_fp_t1_ParamLimits

0x4c6a,	// (0x00035cf1) list_single_cale_day_pane_fp_t1

0x4c90,	// (0x00035d17) list_single_cale_day_pane_fp_t2_ParamLimits

0x4c90,	// (0x00035d17) list_single_cale_day_pane_fp_t2

0x4ca9,	// (0x00035d30) list_single_cale_day_pane_fp_t3_ParamLimits

0x4ca9,	// (0x00035d30) list_single_cale_day_pane_fp_t3

0x0002,

0xfbcb,	// (0x00040c52) list_single_cale_day_pane_fp_t_ParamLimits

0xfbcb,	// (0x00040c52) list_single_cale_day_pane_fp_t

0x88ef,	// (0x00039976) list_empty_pane_fp_g1_ParamLimits

0x88ef,	// (0x00039976) list_empty_pane_fp_g1

0x4cc2,	// (0x00035d49) list_empty_pane_fp_t1

0x4cd0,	// (0x00035d57) list_empty_pane_fp_t2

0x0001,

0xfbd2,	// (0x00040c59) list_empty_pane_fp_t

0x88ef,	// (0x00039976) list_single_heading_pane_fp_g1_ParamLimits

0x88ef,	// (0x00039976) list_single_heading_pane_fp_g1

0x55e4,	// (0x0003666b) list_single_heading_pane_fp_g2_ParamLimits

0x55e4,	// (0x0003666b) list_single_heading_pane_fp_g2

0x4b4d,	// (0x00035bd4) list_single_heading_pane_fp_g3_ParamLimits

0x4b4d,	// (0x00035bd4) list_single_heading_pane_fp_g3

0x0002,

0xfbd7,	// (0x00040c5e) list_single_heading_pane_fp_g_ParamLimits

0xfbd7,	// (0x00040c5e) list_single_heading_pane_fp_g

0x4cde,	// (0x00035d65) list_single_heading_pane_fp_t1_ParamLimits

0x4cde,	// (0x00035d65) list_single_heading_pane_fp_t1

0x4cf0,	// (0x00035d77) list_single_heading_pane_fp_t2_ParamLimits

0x4cf0,	// (0x00035d77) list_single_heading_pane_fp_t2

0x0001,

0xfbde,	// (0x00040c65) list_single_heading_pane_fp_t_ParamLimits

0xfbde,	// (0x00040c65) list_single_heading_pane_fp_t

0x0ebd,	// (0x00031f44) aid_size_cell_fast

0x0835,	// (0x000318bc) soft_indicator_pane_cp1_t1

0x0efa,	// (0x00031f81) cell_app_pane_cp2_ParamLimits

0x0efa,	// (0x00031f81) cell_app_pane_cp2

0xe152,	// (0x0003f1d9) fep_hwr_candidate_drop_down_list_pane

0xe32a,	// (0x0003f3b1) fep_hwr_candidate_pane_g3_ParamLimits

0xe32a,	// (0x0003f3b1) fep_hwr_candidate_pane_g3

0x00b9,	// (0x00031140) fep_hwr_candidate_pane_g4_ParamLimits

0x00b9,	// (0x00031140) fep_hwr_candidate_pane_g4

0x0002,

0xfb4d,	// (0x00040bd4) fep_hwr_candidate_pane_g_ParamLimits

0xfb4d,	// (0x00040bd4) fep_hwr_candidate_pane_g

0x839e,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x839e,	// (0x00039425) fep_vkb_candidate_drop_down_list_pane

0x87c5,	// (0x0003984c) fep_vkb_candidate_pane_g3

0x87cd,	// (0x00039854) fep_vkb_candidate_pane_g4

0x0002,

0xfb7a,	// (0x00040c01) fep_vkb_candidate_pane_g

0xe395,	// (0x0003f41c) cell_hwr_candidate_pane_g1_ParamLimits

0xe3a3,	// (0x0003f42a) cell_hwr_candidate_pane_g3_ParamLimits

0xe3a3,	// (0x0003f42a) cell_hwr_candidate_pane_g3

0x9451,	// (0x0003a4d8) cell_hwr_candidate_pane_g4_ParamLimits

0x9451,	// (0x0003a4d8) cell_hwr_candidate_pane_g4

0x0002,

0xfb99,	// (0x00040c20) cell_hwr_candidate_pane_g_ParamLimits

0xfb99,	// (0x00040c20) cell_hwr_candidate_pane_g

0x8826,	// (0x000398ad) cell_vkb_candidate_pane_g3_ParamLimits

0x8826,	// (0x000398ad) cell_vkb_candidate_pane_g3

0x8841,	// (0x000398c8) cell_vkb_candidate_pane_g4_ParamLimits

0x8841,	// (0x000398c8) cell_vkb_candidate_pane_g4

0x8913,	// (0x0003999a) cell_app_pane_cp2_g1_ParamLimits

0x8913,	// (0x0003999a) cell_app_pane_cp2_g1

0x8931,	// (0x000399b8) cell_app_pane_cp2_g2_ParamLimits

0x8931,	// (0x000399b8) cell_app_pane_cp2_g2

0x0001,

0xfbe3,	// (0x00040c6a) cell_app_pane_cp2_g_ParamLimits

0xfbe3,	// (0x00040c6a) cell_app_pane_cp2_g

0x893d,	// (0x000399c4) cell_app_pane_cp2_t1_ParamLimits

0x893d,	// (0x000399c4) cell_app_pane_cp2_t1

0x0d66,	// (0x00031ded) grid_highlight_pane_cp1_ParamLimits

0x0d66,	// (0x00031ded) grid_highlight_pane_cp1

0xe3e2,	// (0x0003f469) cell_hwr_candidate_pane_cp1_ParamLimits

0xe3e2,	// (0x0003f469) cell_hwr_candidate_pane_cp1

0xe395,	// (0x0003f41c) fep_hwr_candidate_drop_down_list_pane_g1

0xe401,	// (0x0003f488) fep_hwr_candidate_drop_down_list_pane_g2

0xe40e,	// (0x0003f495) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00040c6f) fep_hwr_candidate_drop_down_list_pane_g

0xe41b,	// (0x0003f4a2) fep_hwr_candidate_drop_down_list_scroll_pane

0xe424,	// (0x0003f4ab) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe424,	// (0x0003f4ab) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe431,	// (0x0003f4b8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe431,	// (0x0003f4b8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe43e,	// (0x0003f4c5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe43e,	// (0x0003f4c5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe44b,	// (0x0003f4d2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe44b,	// (0x0003f4d2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe466,	// (0x0003f4ed) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe466,	// (0x0003f4ed) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe481,	// (0x0003f508) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe481,	// (0x0003f508) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe49c,	// (0x0003f523) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe49c,	// (0x0003f523) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe4b7,	// (0x0003f53e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe4b7,	// (0x0003f53e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x00040c76) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x00040c76) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8984,	// (0x00039a0b) cell_vkb_candidate_pane_cp1_ParamLimits

0x8984,	// (0x00039a0b) cell_vkb_candidate_pane_cp1

0x84b7,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x84b7,	// (0x0003953e) fep_vkb_candidate_drop_down_list_pane_g1

0x894f,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x894f,	// (0x000399d6) fep_vkb_candidate_drop_down_list_pane_g2

0x895c,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x895c,	// (0x000399e3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfc00,	// (0x00040c87) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfc00,	// (0x00040c87) fep_vkb_candidate_drop_down_list_pane_g

0x89a4,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x89a4,	// (0x00039a2b) fep_vkb_candidate_drop_down_list_scroll_pane

0x89b1,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x89b1,	// (0x00039a38) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x89be,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x89be,	// (0x00039a45) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x89ca,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x89ca,	// (0x00039a51) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x87e4,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x87e4,	// (0x0003986b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8805,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8805,	// (0x0003988c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x89d6,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x89d6,	// (0x00039a5d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x89f7,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x89f7,	// (0x00039a7e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8969,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8969,	// (0x000399f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc07,	// (0x00040c8e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc07,	// (0x00040c8e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5256,	// (0x000362dd) title_pane_g1_ParamLimits

0x5263,	// (0x000362ea) title_pane_g2_ParamLimits

0xf592,	// (0x00040619) title_pane_g_ParamLimits

0x127d,	// (0x00032304) aid_call2_pane

0x1285,	// (0x0003230c) aid_call_pane

0x128d,	// (0x00032314) popup_clock_analogue_window_g1

0x128d,	// (0x00032314) popup_clock_analogue_window_g2

0xd846,	// (0x0003e8cd) popup_clock_analogue_window_g3

0xd84f,	// (0x0003e8d6) popup_clock_analogue_window_g4

0x06b9,	// (0x00031740) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x000407c8) popup_clock_analogue_window_g

0xd857,	// (0x0003e8de) popup_clock_analogue_window_t1

0xd865,	// (0x0003e8ec) clock_digital_number_pane_ParamLimits

0xd865,	// (0x0003e8ec) clock_digital_number_pane

0xd871,	// (0x0003e8f8) clock_digital_number_pane_cp02_ParamLimits

0xd871,	// (0x0003e8f8) clock_digital_number_pane_cp02

0xd87d,	// (0x0003e904) clock_digital_number_pane_cp03_ParamLimits

0xd87d,	// (0x0003e904) clock_digital_number_pane_cp03

0xd889,	// (0x0003e910) clock_digital_number_pane_cp04_ParamLimits

0xd889,	// (0x0003e910) clock_digital_number_pane_cp04

0xd895,	// (0x0003e91c) clock_digital_separator_pane_ParamLimits

0xd895,	// (0x0003e91c) clock_digital_separator_pane

0xd8a1,	// (0x0003e928) popup_clock_digital_window_t1_ParamLimits

0xd8a1,	// (0x0003e928) popup_clock_digital_window_t1

0x06b9,	// (0x00031740) clock_digital_number_pane_g1

0x06b9,	// (0x00031740) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x000407d3) clock_digital_number_pane_g

0x06b9,	// (0x00031740) clock_digital_separator_pane_g1

0x06b9,	// (0x00031740) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x000407d3) clock_digital_separator_pane_g

0x75ca,	// (0x00038651) aid_fill_nsta_ParamLimits

0x7693,	// (0x0003871a) indicator_nsta_pane_ParamLimits

0x1be3,	// (0x00032c6a) popup_clock_analogue_window

0x1be3,	// (0x00032c6a) popup_clock_digital_window

0x071f,	// (0x000317a6) grid_indicator_nsta_pane_ParamLimits

0x370f,	// (0x00034796) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x00040b66) clock_nsta_pane_t

0xd80a,	// (0x0003e891) aid_size_max_handle

0xd814,	// (0x0003e89b) aid_size_min_handle

0x179c,	// (0x00032823) editor_scroll_pane

0x8a18,	// (0x00039a9f) ex_editor_pane

0x0e85,	// (0x00031f0c) scroll_pane_cp13

0x0d05,	// (0x00031d8c) scroll_pane_cp14

0x12b7,	// (0x0003233e) scroll_pane_cp36

0x595a,	// (0x000369e1) list_single_graphic_hl_pane_cp2_ParamLimits

0x595a,	// (0x000369e1) list_single_graphic_hl_pane_cp2

0x4919,	// (0x000359a0) list_single_graphic_hl_pane_ParamLimits

0x4919,	// (0x000359a0) list_single_graphic_hl_pane

0x4d06,	// (0x00035d8d) aid_size_min_hl_cp1

0x8a20,	// (0x00039aa7) list_highlight_pane_cp34_ParamLimits

0x8a20,	// (0x00039aa7) list_highlight_pane_cp34

0x8a31,	// (0x00039ab8) list_single_graphic_hl_pane_g1_ParamLimits

0x8a31,	// (0x00039ab8) list_single_graphic_hl_pane_g1

0x4d0f,	// (0x00035d96) list_single_graphic_hl_pane_g2_ParamLimits

0x4d0f,	// (0x00035d96) list_single_graphic_hl_pane_g2

0x4d0f,	// (0x00035d96) list_single_graphic_hl_pane_g3_ParamLimits

0x4d0f,	// (0x00035d96) list_single_graphic_hl_pane_g3

0x170d,	// (0x00032794) list_single_graphic_hl_pane_g4_ParamLimits

0x170d,	// (0x00032794) list_single_graphic_hl_pane_g4

0x4d1b,	// (0x00035da2) list_single_graphic_hl_pane_g5_ParamLimits

0x4d1b,	// (0x00035da2) list_single_graphic_hl_pane_g5

0x0004,

0xfc18,	// (0x00040c9f) list_single_graphic_hl_pane_g_ParamLimits

0xfc18,	// (0x00040c9f) list_single_graphic_hl_pane_g

0x4076,	// (0x000350fd) list_single_graphic_hl_pane_t1_ParamLimits

0x4076,	// (0x000350fd) list_single_graphic_hl_pane_t1

0x8a3e,	// (0x00039ac5) aid_size_min_hl_cp2

0x8a47,	// (0x00039ace) list_highlight_pane_cp34_cp2_ParamLimits

0x8a47,	// (0x00039ace) list_highlight_pane_cp34_cp2

0x8a31,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8a31,	// (0x00039ab8) list_single_graphic_hl_pane_g1_cp2

0x8a54,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8a54,	// (0x00039adb) list_single_graphic_hl_pane_g2_cp2

0x8a60,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8a60,	// (0x00039ae7) list_single_graphic_hl_pane_g3_cp2

0x16d3,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x16d3,	// (0x0003275a) list_single_graphic_hl_pane_g4_cp2

0x8a6e,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8a6e,	// (0x00039af5) list_single_graphic_hl_pane_g5_cp2

0xdb53,	// (0x0003ebda) control_pane_g4_ParamLimits

0xdb53,	// (0x0003ebda) control_pane_g4

0x19d6,	// (0x00032a5d) bg_popup_sub_pane_cp10_ParamLimits

0x8228,	// (0x000392af) list_choice_list_pane_ParamLimits

0x8237,	// (0x000392be) scroll_pane_cp23

0x0852,	// (0x000318d9) bg_popup_preview_window_pane_cp02_ParamLimits

0x8892,	// (0x00039919) list_preview_fixed_pane_ParamLimits

0x88a8,	// (0x0003992f) list_preview_fixed_pane_cp_ParamLimits

0x88a8,	// (0x0003992f) list_preview_fixed_pane_cp

0x88b4,	// (0x0003993b) popup_preview_fixed_window_g1_ParamLimits

0x88b4,	// (0x0003993b) popup_preview_fixed_window_g1

0x88c0,	// (0x00039947) popup_preview_fixed_window_g2_ParamLimits

0x88c0,	// (0x00039947) popup_preview_fixed_window_g2

0x0002,

0xfba0,	// (0x00040c27) popup_preview_fixed_window_g_ParamLimits

0xfba0,	// (0x00040c27) popup_preview_fixed_window_g

0xd77e,	// (0x0003e805) aid_navi_side_left_pane_ParamLimits

0xd793,	// (0x0003e81a) aid_navi_side_right_pane_ParamLimits

0xd7ab,	// (0x0003e832) navi_icon_pane_stacon_ParamLimits

0xd7bf,	// (0x0003e846) navi_navi_pane_stacon_ParamLimits

0xd7ab,	// (0x0003e832) navi_text_pane_stacon_ParamLimits

0x06af,	// (0x00031736) main_text_info_pane

0x8a98,	// (0x00039b1f) listscroll_text_info_pane

0x8aa0,	// (0x00039b27) list_text_info_pane_ParamLimits

0x8aa0,	// (0x00039b27) list_text_info_pane

0x8aaf,	// (0x00039b36) scroll_pane_cp24_ParamLimits

0x8aaf,	// (0x00039b36) scroll_pane_cp24

0x8acd,	// (0x00039b54) list_text_info_pane_t1_ParamLimits

0x8acd,	// (0x00039b54) list_text_info_pane_t1

0x715b,	// (0x000381e2) popup_fast_swap2_window_ParamLimits

0x715b,	// (0x000381e2) popup_fast_swap2_window

0x8b06,	// (0x00039b8d) aid_size_cell_fast2

0x06af,	// (0x00031736) bg_popup_window_pane_cp17

0x2087,	// (0x0003310e) heading_pane_cp2

0x0a38,	// (0x00031abf) listscroll_fast2_pane

0x8b10,	// (0x00039b97) grid_fast2_pane

0x8b1a,	// (0x00039ba1) listscroll_fast2_pane_g1

0x8b22,	// (0x00039ba9) listscroll_fast2_pane_g2

0x0001,

0xfc23,	// (0x00040caa) listscroll_fast2_pane_g

0x0e85,	// (0x00031f0c) scroll_pane_cp26

0x8b2c,	// (0x00039bb3) cell_fast2_pane_ParamLimits

0x8b2c,	// (0x00039bb3) cell_fast2_pane

0x8b41,	// (0x00039bc8) cell_fast2_pane_g1

0x8b4a,	// (0x00039bd1) cell_fast2_pane_g2

0x8b53,	// (0x00039bda) cell_fast2_pane_g3

0x0002,

0xfc28,	// (0x00040caf) cell_fast2_pane_g

0x0acc,	// (0x00031b53) grid_highlight_pane_cp9

0x0ae1,	// (0x00031b68) main_eswt_pane_ParamLimits

0x0ae1,	// (0x00031b68) main_eswt_pane

0x8ac4,	// (0x00039b4b) list_single_text_info_pane

0x8b5b,	// (0x00039be2) eswt_ctrl_button_pane

0x8b5b,	// (0x00039be2) eswt_ctrl_canvas_pane

0x8b63,	// (0x00039bea) eswt_ctrl_combo_pane

0x8b5b,	// (0x00039be2) eswt_ctrl_default_pane

0x8b5b,	// (0x00039be2) eswt_ctrl_label_pane

0x8b6b,	// (0x00039bf2) eswt_ctrl_wait_pane

0x8b73,	// (0x00039bfa) eswt_shell_pane

0x06af,	// (0x00031736) listscroll_eswt_app_pane

0x8b93,	// (0x00039c1a) popup_eswt_tasktip_window_ParamLimits

0x8b93,	// (0x00039c1a) popup_eswt_tasktip_window

0x1de0,	// (0x00032e67) bg_popup_window_pane_cp18

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_ParamLimits

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_ParamLimits

0x8bb1,	// (0x00039c38) eswt_control_pane_g2

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_ParamLimits

0x8bbe,	// (0x00039c45) eswt_control_pane_g3

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_ParamLimits

0x8bcb,	// (0x00039c52) eswt_control_pane_g4

0x0003,

0xfc2f,	// (0x00040cb6) eswt_control_pane_g_ParamLimits

0xfc2f,	// (0x00040cb6) eswt_control_pane_g

0x0d66,	// (0x00031ded) bg_button_pane_ParamLimits

0x0d66,	// (0x00031ded) bg_button_pane

0x0ae1,	// (0x00031b68) common_borders_pane_copy2_ParamLimits

0x0ae1,	// (0x00031b68) common_borders_pane_copy2

0x8bd8,	// (0x00039c5f) control_button_pane_g1_ParamLimits

0x8bd8,	// (0x00039c5f) control_button_pane_g1

0x8be4,	// (0x00039c6b) control_button_pane_g2_ParamLimits

0x8be4,	// (0x00039c6b) control_button_pane_g2

0x8bf0,	// (0x00039c77) control_button_pane_g3_ParamLimits

0x8bf0,	// (0x00039c77) control_button_pane_g3

0x0002,

0xfc38,	// (0x00040cbf) control_button_pane_g_ParamLimits

0xfc38,	// (0x00040cbf) control_button_pane_g

0x8c04,	// (0x00039c8b) control_button_pane_t1

0x8c12,	// (0x00039c99) control_button_pane_t2

0x0001,

0xfc3f,	// (0x00040cc6) control_button_pane_t

0x1cf0,	// (0x00032d77) bg_button_pane_g1

0x1d00,	// (0x00032d87) bg_button_pane_g2

0x1cf8,	// (0x00032d7f) bg_button_pane_g3

0x1d10,	// (0x00032d97) bg_button_pane_g4

0x1d08,	// (0x00032d8f) bg_button_pane_g5

0x1d18,	// (0x00032d9f) bg_button_pane_g6

0x1d20,	// (0x00032da7) bg_button_pane_g7

0x1d30,	// (0x00032db7) bg_button_pane_g8

0x1d28,	// (0x00032daf) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0004092b) bg_button_pane_g

0x81e3,	// (0x0003926a) common_borders_pane_ParamLimits

0x81e3,	// (0x0003926a) common_borders_pane

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy1_ParamLimits

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy1

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy1_ParamLimits

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy1

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy1_ParamLimits

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy1

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy1_ParamLimits

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy1

0x821e,	// (0x000392a5) bg_eswt_ctrl_canvas_pane_g1

0x81e3,	// (0x0003926a) common_borders_pane_cp2_ParamLimits

0x81e3,	// (0x0003926a) common_borders_pane_cp2

0x81e3,	// (0x0003926a) common_borders_pane_cp3_ParamLimits

0x81e3,	// (0x0003926a) common_borders_pane_cp3

0x8c20,	// (0x00039ca7) separator_horizontal_pane

0x8c28,	// (0x00039caf) separator_vertical_pane

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy2_ParamLimits

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy2

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy2_ParamLimits

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy2

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy2_ParamLimits

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy2

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy2_ParamLimits

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy2

0x06af,	// (0x00031736) common_borders_pane_cp4

0x8c31,	// (0x00039cb8) separator_horizontal_pane_g1

0x8c3a,	// (0x00039cc1) separator_horizontal_pane_g2

0x8c43,	// (0x00039cca) separator_horizontal_pane_g3

0x0002,

0xfc44,	// (0x00040ccb) separator_horizontal_pane_g

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy3_ParamLimits

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy3

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy3_ParamLimits

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy3

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy3_ParamLimits

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy3

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy3_ParamLimits

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy3

0x06af,	// (0x00031736) common_borders_pane_cp5

0x8c4c,	// (0x00039cd3) separator_vertical_pane_g1

0x8c55,	// (0x00039cdc) separator_vertical_pane_g2

0x8c5e,	// (0x00039ce5) separator_vertical_pane_g3

0x0002,

0xfc4b,	// (0x00040cd2) separator_vertical_pane_g

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy4_ParamLimits

0x8ba4,	// (0x00039c2b) eswt_control_pane_g1_copy4

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy4_ParamLimits

0x8bb1,	// (0x00039c38) eswt_control_pane_g2_copy4

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy4_ParamLimits

0x8bbe,	// (0x00039c45) eswt_control_pane_g3_copy4

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy4_ParamLimits

0x8bcb,	// (0x00039c52) eswt_control_pane_g4_copy4

0x8c67,	// (0x00039cee) eswt_ctrl_combo_button_pane

0x8c6f,	// (0x00039cf6) eswt_ctrl_input_pane

0x8c77,	// (0x00039cfe) popup_choice_list_window_cp70

0x8c7f,	// (0x00039d06) eswt_ctrl_input_pane_t1

0x06af,	// (0x00031736) input_focus_pane_cp70

0x81e3,	// (0x0003926a) bg_button_pane_cp70_ParamLimits

0x81e3,	// (0x0003926a) bg_button_pane_cp70

0x8c8d,	// (0x00039d14) eswt_ctrl_combo_button_pane_g1

0x8c95,	// (0x00039d1c) wait_bar_pane_cp70

0x1de0,	// (0x00032e67) bg_popup_window_pane_cp70_ParamLimits

0x1de0,	// (0x00032e67) bg_popup_window_pane_cp70

0x8c9d,	// (0x00039d24) popup_eswt_tasktip_window_t1

0x8cb3,	// (0x00039d3a) wait_bar_pane_cp71_ParamLimits

0x8cb3,	// (0x00039d3a) wait_bar_pane_cp71

0x8cbf,	// (0x00039d46) grid_eswt_app_pane

0x10c3,	// (0x0003214a) scroll_pane_cp70

0x8cc8,	// (0x00039d4f) cell_eswt_app_pane_ParamLimits

0x8cc8,	// (0x00039d4f) cell_eswt_app_pane

0x8cfc,	// (0x00039d83) cell_eswt_app_pane_g1_ParamLimits

0x8cfc,	// (0x00039d83) cell_eswt_app_pane_g1

0x8d2b,	// (0x00039db2) cell_eswt_app_pane_g2_ParamLimits

0x8d2b,	// (0x00039db2) cell_eswt_app_pane_g2

0x0001,

0xfc52,	// (0x00040cd9) cell_eswt_app_pane_g_ParamLimits

0xfc52,	// (0x00040cd9) cell_eswt_app_pane_g

0x8d54,	// (0x00039ddb) cell_eswt_app_pane_t1_ParamLimits

0x8d54,	// (0x00039ddb) cell_eswt_app_pane_t1

0x8d86,	// (0x00039e0d) grid_highlight_pane_cp70_ParamLimits

0x8d86,	// (0x00039e0d) grid_highlight_pane_cp70

0x166f,	// (0x000326f6) set_content_pane_g1

0x1973,	// (0x000329fa) status_small_volume_pane

0xe4d2,	// (0x0003f559) status_small_volume_pane_g1

0xe4da,	// (0x0003f561) volume_small2_pane

0xe4e3,	// (0x0003f56a) volume_small2_pane_g1

0xe4ec,	// (0x0003f573) volume_small2_pane_g2

0xe4f5,	// (0x0003f57c) volume_small2_pane_g3

0xe4fe,	// (0x0003f585) volume_small2_pane_g4

0xe507,	// (0x0003f58e) volume_small2_pane_g5

0xe510,	// (0x0003f597) volume_small2_pane_g6

0xe519,	// (0x0003f5a0) volume_small2_pane_g7

0xe522,	// (0x0003f5a9) volume_small2_pane_g8

0xe52b,	// (0x0003f5b2) volume_small2_pane_g9

0xe534,	// (0x0003f5bb) volume_small2_pane_g10

0x0009,

0xfc57,	// (0x00040cde) volume_small2_pane_g

0x85ff,	// (0x00039686) fep_vkb_top_text_pane_g1_ParamLimits

0x861a,	// (0x000396a1) fep_vkb_top_text_pane_t1_ParamLimits

0x88cc,	// (0x00039953) popup_preview_fixed_window_g3_ParamLimits

0x88cc,	// (0x00039953) popup_preview_fixed_window_g3

0x755d,	// (0x000385e4) popup_toolbar_trans_pane

0x7bdb,	// (0x00038c62) aid_height_set_list_ParamLimits

0x2c12,	// (0x00033c99) aid_size_parent_ParamLimits

0x19d6,	// (0x00032a5d) list_highlight_pane_cp2_ParamLimits

0x166f,	// (0x000326f6) set_content_pane_g1_ParamLimits

0x493b,	// (0x000359c2) list_single_image_pane_ParamLimits

0x493b,	// (0x000359c2) list_single_image_pane

0x8d92,	// (0x00039e19) aid_size_cell_image_ParamLimits

0x8d92,	// (0x00039e19) aid_size_cell_image

0x8d9f,	// (0x00039e26) grid_single_image_pane_ParamLimits

0x8d9f,	// (0x00039e26) grid_single_image_pane

0x0d80,	// (0x00031e07) list_single_image_pane_g1_ParamLimits

0x0d80,	// (0x00031e07) list_single_image_pane_g1

0x0d8c,	// (0x00031e13) list_single_image_pane_g2_ParamLimits

0x0d8c,	// (0x00031e13) list_single_image_pane_g2

0x0001,

0xfc6c,	// (0x00040cf3) list_single_image_pane_g_ParamLimits

0xfc6c,	// (0x00040cf3) list_single_image_pane_g

0x8dab,	// (0x00039e32) list_single_image_pane_t1_ParamLimits

0x8dab,	// (0x00039e32) list_single_image_pane_t1

0x8dc1,	// (0x00039e48) cell_image_list_pane_ParamLimits

0x8dc1,	// (0x00039e48) cell_image_list_pane

0x8dd5,	// (0x00039e5c) cell_image_list_pane_g1

0x8dde,	// (0x00039e65) cell_image_list_pane_g2

0x0001,

0xfc71,	// (0x00040cf8) cell_image_list_pane_g

0x8de7,	// (0x00039e6e) aid_size_cell_tb_trans_pane

0x0d66,	// (0x00031ded) bg_tb_trans_pane

0x8df9,	// (0x00039e80) grid_tb_trans_pane

0x1cf0,	// (0x00032d77) bg_tb_trans_pane_g1

0x1d00,	// (0x00032d87) bg_tb_trans_pane_g2

0x1cf8,	// (0x00032d7f) bg_tb_trans_pane_g3

0x1d10,	// (0x00032d97) bg_tb_trans_pane_g4

0x1d08,	// (0x00032d8f) bg_tb_trans_pane_g5

0x1d30,	// (0x00032db7) bg_tb_trans_pane_g6

0x1d28,	// (0x00032daf) bg_tb_trans_pane_g7

0x1d18,	// (0x00032d9f) bg_tb_trans_pane_g8

0x1d20,	// (0x00032da7) bg_tb_trans_pane_g9

0x0008,

0xfc76,	// (0x00040cfd) bg_tb_trans_pane_g

0x8e0d,	// (0x00039e94) cell_toolbar_trans_pane_ParamLimits

0x8e0d,	// (0x00039e94) cell_toolbar_trans_pane

0x821e,	// (0x000392a5) cell_toolbar_trans_pane_g1

0x7f7d,	// (0x00039004) list_form2_midp_pane_t1

0x7f8b,	// (0x00039012) list_form2_midp_pane_t2

0x0001,

0xfb13,	// (0x00040b9a) list_form2_midp_pane_t

0x3794,	// (0x0003481b) scroll_pane_cp51_ParamLimits

0x390a,	// (0x00034991) form2_midp_wait_pane_g1

0x3913,	// (0x0003499a) form2_midp_wait_pane_g2

0x391c,	// (0x000349a3) form2_midp_wait_pane_g3

0x0002,

0xfb28,	// (0x00040baf) form2_midp_wait_pane_g

0x071f,	// (0x000317a6) list_highlight_pane_cp21_ParamLimits

0x393c,	// (0x000349c3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x394b,	// (0x000349d2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x619c,	// (0x00037223) list_single_2graphic_im_pane_ParamLimits

0x619c,	// (0x00037223) list_single_2graphic_im_pane

0x8e33,	// (0x00039eba) list_single_2graphic_im_pane_g1_ParamLimits

0x8e33,	// (0x00039eba) list_single_2graphic_im_pane_g1

0x8e44,	// (0x00039ecb) list_single_2graphic_im_pane_g2_ParamLimits

0x8e44,	// (0x00039ecb) list_single_2graphic_im_pane_g2

0x8e50,	// (0x00039ed7) list_single_2graphic_im_pane_g3_ParamLimits

0x8e50,	// (0x00039ed7) list_single_2graphic_im_pane_g3

0x0003,

0xfc89,	// (0x00040d10) list_single_2graphic_im_pane_g_ParamLimits

0xfc89,	// (0x00040d10) list_single_2graphic_im_pane_g

0x8e70,	// (0x00039ef7) list_single_2graphic_im_pane_t1_ParamLimits

0x8e70,	// (0x00039ef7) list_single_2graphic_im_pane_t1

0x88d8,	// (0x0003995f) list_single_graphic_2heading_pane_fp_ParamLimits

0x88d8,	// (0x0003995f) list_single_graphic_2heading_pane_fp

0x4b78,	// (0x00035bff) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4b78,	// (0x00035bff) list_single_graphic_2heading_pane_fp_g1

0x88ef,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x88ef,	// (0x00039976) list_single_graphic_2heading_pane_fp_g2

0x55e4,	// (0x0003666b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x55e4,	// (0x0003666b) list_single_graphic_2heading_pane_fp_g3

0x4b4d,	// (0x00035bd4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4b4d,	// (0x00035bd4) list_single_graphic_2heading_pane_fp_g4

0x88fb,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x88fb,	// (0x00039982) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb0,	// (0x00040c37) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x00040c37) list_single_graphic_2heading_pane_fp_g

0x4d2f,	// (0x00035db6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4d2f,	// (0x00035db6) list_single_graphic_2heading_pane_fp_t1

0x4bb0,	// (0x00035c37) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4bb0,	// (0x00035c37) list_single_graphic_2heading_pane_fp_t2

0x4d45,	// (0x00035dcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4d45,	// (0x00035dcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc92,	// (0x00040d19) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc92,	// (0x00040d19) list_single_graphic_2heading_pane_fp_t

0x82be,	// (0x00039345) fep_hwr_write_pane_g5_ParamLimits

0x82be,	// (0x00039345) fep_hwr_write_pane_g5

0x82ca,	// (0x00039351) fep_hwr_write_pane_g6_ParamLimits

0x82ca,	// (0x00039351) fep_hwr_write_pane_g6

0x8b73,	// (0x00039bfa) eswt_shell_pane_ParamLimits

0x1de0,	// (0x00032e67) bg_popup_window_pane_cp18_ParamLimits

0x2da7,	// (0x00033e2e) heading_pane_cp70

0x8c9d,	// (0x00039d24) popup_eswt_tasktip_window_t1_ParamLimits

0x760a,	// (0x00038691) aid_touch_tab_arrow_left

0x7619,	// (0x000386a0) aid_touch_tab_arrow_right

0x5274,	// (0x000362fb) title_pane_g3_ParamLimits

0x5274,	// (0x000362fb) title_pane_g3

0x0d25,	// (0x00031dac) set_value_pane_g1

0x755d,	// (0x000385e4) popup_toolbar_trans_pane_ParamLimits

0x8de7,	// (0x00039e6e) aid_size_cell_tb_trans_pane_ParamLimits

0x0d66,	// (0x00031ded) bg_tb_trans_pane_ParamLimits

0x8df9,	// (0x00039e80) grid_tb_trans_pane_ParamLimits

0x0852,	// (0x000318d9) cont_note_pane_ParamLimits

0x0852,	// (0x000318d9) cont_note_pane

0x0ae1,	// (0x00031b68) cont_snote2_single_text_pane_ParamLimits

0x0ae1,	// (0x00031b68) cont_snote2_single_text_pane

0x0ae1,	// (0x00031b68) cont_snote2_single_graphic_pane_ParamLimits

0x0ae1,	// (0x00031b68) cont_snote2_single_graphic_pane

0x226c,	// (0x000332f3) cont_note_wait_pane_ParamLimits

0x226c,	// (0x000332f3) cont_note_wait_pane

0x226c,	// (0x000332f3) cont_note_image_pane_ParamLimits

0x226c,	// (0x000332f3) cont_note_image_pane

0x8ea1,	// (0x00039f28) popup_note2_window_g1_ParamLimits

0x8ea1,	// (0x00039f28) popup_note2_window_g1

0x8ed2,	// (0x00039f59) popup_note2_window_t1_ParamLimits

0x8ed2,	// (0x00039f59) popup_note2_window_t1

0x8f17,	// (0x00039f9e) popup_note2_window_t2_ParamLimits

0x8f17,	// (0x00039f9e) popup_note2_window_t2

0x8f5c,	// (0x00039fe3) popup_note2_window_t3_ParamLimits

0x8f5c,	// (0x00039fe3) popup_note2_window_t3

0x8fa1,	// (0x0003a028) popup_note2_window_t4_ParamLimits

0x8fa1,	// (0x0003a028) popup_note2_window_t4

0x08ca,	// (0x00031951) popup_note2_window_t5_ParamLimits

0x08ca,	// (0x00031951) popup_note2_window_t5

0x0004,

0xfc9e,	// (0x00040d25) popup_note2_window_t_ParamLimits

0xfc9e,	// (0x00040d25) popup_note2_window_t

0x8fd0,	// (0x0003a057) popup_note2_image_window_g1_ParamLimits

0x8fd0,	// (0x0003a057) popup_note2_image_window_g1

0x8fdc,	// (0x0003a063) popup_note2_image_window_g2_ParamLimits

0x8fdc,	// (0x0003a063) popup_note2_image_window_g2

0x0001,

0xfca9,	// (0x00040d30) popup_note2_image_window_g_ParamLimits

0xfca9,	// (0x00040d30) popup_note2_image_window_g

0x8fee,	// (0x0003a075) popup_note2_image_window_t1_ParamLimits

0x8fee,	// (0x0003a075) popup_note2_image_window_t1

0x9006,	// (0x0003a08d) popup_note2_image_window_t2_ParamLimits

0x9006,	// (0x0003a08d) popup_note2_image_window_t2

0x901e,	// (0x0003a0a5) popup_note2_image_window_t3_ParamLimits

0x901e,	// (0x0003a0a5) popup_note2_image_window_t3

0x0002,

0xfcae,	// (0x00040d35) popup_note2_image_window_t_ParamLimits

0xfcae,	// (0x00040d35) popup_note2_image_window_t

0x227a,	// (0x00033301) popup_note2_wait_window_g1_ParamLimits

0x227a,	// (0x00033301) popup_note2_wait_window_g1

0x2286,	// (0x0003330d) popup_note2_wait_window_g2_ParamLimits

0x2286,	// (0x0003330d) popup_note2_wait_window_g2

0x2292,	// (0x00033319) popup_note2_wait_window_g3_ParamLimits

0x2292,	// (0x00033319) popup_note2_wait_window_g3

0x0002,

0xf886,	// (0x0004090d) popup_note2_wait_window_g_ParamLimits

0xf886,	// (0x0004090d) popup_note2_wait_window_g

0x903a,	// (0x0003a0c1) popup_note2_wait_window_t1_ParamLimits

0x903a,	// (0x0003a0c1) popup_note2_wait_window_t1

0x9058,	// (0x0003a0df) popup_note2_wait_window_t2_ParamLimits

0x9058,	// (0x0003a0df) popup_note2_wait_window_t2

0x9076,	// (0x0003a0fd) popup_note2_wait_window_t3_ParamLimits

0x9076,	// (0x0003a0fd) popup_note2_wait_window_t3

0x9088,	// (0x0003a10f) popup_note2_wait_window_t4_ParamLimits

0x9088,	// (0x0003a10f) popup_note2_wait_window_t4

0x0003,

0xfcb5,	// (0x00040d3c) popup_note2_wait_window_t_ParamLimits

0xfcb5,	// (0x00040d3c) popup_note2_wait_window_t

0x909a,	// (0x0003a121) wait_bar2_pane_ParamLimits

0x909a,	// (0x0003a121) wait_bar2_pane

0x90b2,	// (0x0003a139) popup_snote2_single_text_window_g1_ParamLimits

0x90b2,	// (0x0003a139) popup_snote2_single_text_window_g1

0x90da,	// (0x0003a161) popup_snote2_single_text_window_t1_ParamLimits

0x90da,	// (0x0003a161) popup_snote2_single_text_window_t1

0x9126,	// (0x0003a1ad) popup_snote2_single_text_window_t2_ParamLimits

0x9126,	// (0x0003a1ad) popup_snote2_single_text_window_t2

0x9172,	// (0x0003a1f9) popup_snote2_single_text_window_t3_ParamLimits

0x9172,	// (0x0003a1f9) popup_snote2_single_text_window_t3

0x91b3,	// (0x0003a23a) popup_snote2_single_text_window_t4_ParamLimits

0x91b3,	// (0x0003a23a) popup_snote2_single_text_window_t4

0x91e9,	// (0x0003a270) popup_snote2_single_text_window_t5_ParamLimits

0x91e9,	// (0x0003a270) popup_snote2_single_text_window_t5

0x0004,

0xfcbe,	// (0x00040d45) popup_snote2_single_text_window_t_ParamLimits

0xfcbe,	// (0x00040d45) popup_snote2_single_text_window_t

0x9214,	// (0x0003a29b) popup_snote2_single_graphic_window_g1_ParamLimits

0x9214,	// (0x0003a29b) popup_snote2_single_graphic_window_g1

0x923c,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2_ParamLimits

0x923c,	// (0x0003a2c3) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc9,	// (0x00040d50) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc9,	// (0x00040d50) popup_snote2_single_graphic_window_g

0x9264,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1_ParamLimits

0x9264,	// (0x0003a2eb) popup_snote2_single_graphic_window_t1

0x92b0,	// (0x0003a337) popup_snote2_single_graphic_window_t2_ParamLimits

0x92b0,	// (0x0003a337) popup_snote2_single_graphic_window_t2

0x9172,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3_ParamLimits

0x9172,	// (0x0003a1f9) popup_snote2_single_graphic_window_t3

0x91b3,	// (0x0003a23a) popup_snote2_single_graphic_window_t4_ParamLimits

0x91b3,	// (0x0003a23a) popup_snote2_single_graphic_window_t4

0x91e9,	// (0x0003a270) popup_snote2_single_graphic_window_t5_ParamLimits

0x91e9,	// (0x0003a270) popup_snote2_single_graphic_window_t5

0x0004,

0xfcce,	// (0x00040d55) popup_snote2_single_graphic_window_t_ParamLimits

0xfcce,	// (0x00040d55) popup_snote2_single_graphic_window_t

0x3744,	// (0x000347cb) clock_nsta_pane_cp2_t1

0x3744,	// (0x000347cb) clock_nsta_pane_cp2_t2

0x0001,

0xfae9,	// (0x00040b70) clock_nsta_pane_cp2_t

0x459d,	// (0x00035624) form_field_data_wide_pane_g1_ParamLimits

0x0d80,	// (0x00031e07) form_field_data_wide_pane_g2_ParamLimits

0x0d80,	// (0x00031e07) form_field_data_wide_pane_g2

0x0d8c,	// (0x00031e13) form_field_data_wide_pane_g3_ParamLimits

0x0d8c,	// (0x00031e13) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004074b) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004074b) form_field_data_wide_pane_g

0x7e44,	// (0x00038ecb) grid_touch_3_pane_ParamLimits

0x7e44,	// (0x00038ecb) grid_touch_3_pane

0x92fc,	// (0x0003a383) cell_touch_3_pane_ParamLimits

0x92fc,	// (0x0003a383) cell_touch_3_pane

0x821e,	// (0x000392a5) cell_touch_3_pane_g1

0x821e,	// (0x000392a5) cell_touch_3_pane_g2

0x0001,

0xfb6e,	// (0x00040bf5) cell_touch_3_pane_g

0x08fc,	// (0x00031983) cont_query_data_pane

0x0904,	// (0x0003198b) cont_query_data_pane_cp1

0x932b,	// (0x0003a3b2) button_value_adjust_pane_cp7

0x9333,	// (0x0003a3ba) query_popup_pane_cp3

0x12e9,	// (0x00032370) bg_popup_sub_pane_cp22_ParamLimits

0xd8c0,	// (0x0003e947) navi_navi_volume_pane_cp2

0xd8db,	// (0x0003e962) popup_side_volume_key_window_g2

0xd8ea,	// (0x0003e971) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x000407dd) popup_side_volume_key_window_g

0xd907,	// (0x0003e98e) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x000407e4) popup_side_volume_key_window_t

0x1539,	// (0x000325c0) popup_side_volume_key_window_ParamLimits

0x41f7,	// (0x0003527e) list_double_graphic_pane_g4_ParamLimits

0x41f7,	// (0x0003527e) list_double_graphic_pane_g4

0x61e7,	// (0x0003726e) list_single_2heading_msg_pane_ParamLimits

0x61e7,	// (0x0003726e) list_single_2heading_msg_pane

0x6738,	// (0x000377bf) list_single_2heading_msg_pane_g1_ParamLimits

0x6738,	// (0x000377bf) list_single_2heading_msg_pane_g1

0x6744,	// (0x000377cb) list_single_2heading_msg_pane_g2_ParamLimits

0x6744,	// (0x000377cb) list_single_2heading_msg_pane_g2

0x6750,	// (0x000377d7) list_single_2heading_msg_pane_g3_ParamLimits

0x6750,	// (0x000377d7) list_single_2heading_msg_pane_g3

0x675c,	// (0x000377e3) list_single_2heading_msg_pane_g4_ParamLimits

0x675c,	// (0x000377e3) list_single_2heading_msg_pane_g4

0x0003,

0xfcd9,	// (0x00040d60) list_single_2heading_msg_pane_g_ParamLimits

0xfcd9,	// (0x00040d60) list_single_2heading_msg_pane_g

0x4d65,	// (0x00035dec) list_single_2heading_msg_pane_t1_ParamLimits

0x4d65,	// (0x00035dec) list_single_2heading_msg_pane_t1

0x4d8d,	// (0x00035e14) list_single_2heading_msg_pane_t2_ParamLimits

0x4d8d,	// (0x00035e14) list_single_2heading_msg_pane_t2

0x4dc1,	// (0x00035e48) list_single_2heading_msg_pane_t3_ParamLimits

0x4dc1,	// (0x00035e48) list_single_2heading_msg_pane_t3

0x4dfa,	// (0x00035e81) list_single_2heading_msg_pane_t4_ParamLimits

0x4dfa,	// (0x00035e81) list_single_2heading_msg_pane_t4

0x0003,

0xfce2,	// (0x00040d69) list_single_2heading_msg_pane_t_ParamLimits

0xfce2,	// (0x00040d69) list_single_2heading_msg_pane_t

0x06cd,	// (0x00031754) title_pane_g4_ParamLimits

0x06cd,	// (0x00031754) title_pane_g4

0xd6ce,	// (0x0003e755) title_pane_stacon_g3_ParamLimits

0xd6ce,	// (0x0003e755) title_pane_stacon_g3

0x8e64,	// (0x00039eeb) list_single_2graphic_im_pane_g4_ParamLimits

0x8e64,	// (0x00039eeb) list_single_2graphic_im_pane_g4

0x2bad,	// (0x00033c34) popup_side_volume_key_window_cp

0x3097,	// (0x0003411e) main_idle_act2_pane_t1

0xdc81,	// (0x0003ed08) toolbar_button_pane_g10

0x5569,	// (0x000365f0) popup_toolbar_window_cp1

0x3735,	// (0x000347bc) clock_nsta_pane_cp_t1

0x3735,	// (0x000347bc) clock_nsta_pane_cp_t2

0x0001,

0x3d00,	// (0x00034d87) clock_nsta_pane_cp_t

0xd8c0,	// (0x0003e947) navi_navi_volume_pane_cp2_ParamLimits

0xd8cf,	// (0x0003e956) popup_side_volume_key_window_g1_ParamLimits

0xd8db,	// (0x0003e962) popup_side_volume_key_window_g2_ParamLimits

0xd8ea,	// (0x0003e971) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x000407dd) popup_side_volume_key_window_g_ParamLimits

0xe13e,	// (0x0003f1c5) fep_hwr_aid_pane

0xe1e5,	// (0x0003f26c) bg_fep_hwr_top_pane_g4_ParamLimits

0x82a0,	// (0x00039327) fep_hwr_top_pane_g1_ParamLimits

0x828e,	// (0x00039315) fep_hwr_top_pane_g2_ParamLimits

0xe205,	// (0x0003f28c) fep_hwr_top_pane_g3_ParamLimits

0xfb39,	// (0x00040bc0) fep_hwr_top_pane_g_ParamLimits

0xe21a,	// (0x0003f2a1) fep_hwr_top_text_pane_ParamLimits

0x29a2,	// (0x00033a29) aid_touch_tab_arrow_arrow_2

0x29ab,	// (0x00033a32) aid_touch_tab_arrow_left_2

0xe152,	// (0x0003f1d9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe189,	// (0x0003f210) fep_hwr_prediction_pane

0x8407,	// (0x0003948e) fep_vkb_prediction_pane

0x850b,	// (0x00039592) fep_vkb_side_pane_g3_ParamLimits

0x850b,	// (0x00039592) fep_vkb_side_pane_g3

0xe395,	// (0x0003f41c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe401,	// (0x0003f488) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe40e,	// (0x0003f495) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe8,	// (0x00040c6f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe53d,	// (0x0003f5c4) fep_hwr_prediction_pane_g1

0xe547,	// (0x0003f5ce) fep_hwr_prediction_pane_g2

0x8286,	// (0x0003930d) fep_hwr_prediction_pane_g3

0xe54f,	// (0x0003f5d6) fep_hwr_prediction_pane_g4

0x0003,

0xfceb,	// (0x00040d72) fep_hwr_prediction_pane_g

0x9358,	// (0x0003a3df) fep_vkb_prediction_pane_g1

0x9362,	// (0x0003a3e9) fep_vkb_prediction_pane_g2

0x936a,	// (0x0003a3f1) fep_vkb_prediction_pane_g3

0x9372,	// (0x0003a3f9) fep_vkb_prediction_pane_g4

0x0003,

0xfcf4,	// (0x00040d7b) fep_vkb_prediction_pane_g

0xdf6d,	// (0x0003eff4) slider_set_pane_g3

0xdf81,	// (0x0003f008) slider_set_pane_g4

0xdf99,	// (0x0003f020) slider_set_pane_g5

0xdf6d,	// (0x0003eff4) slider_set_pane_g6

0xdfaf,	// (0x0003f036) slider_set_pane_g7

0x2e2c,	// (0x00033eb3) slider_form_pane_g3

0x2e35,	// (0x00033ebc) slider_form_pane_g4

0x2e3d,	// (0x00033ec4) slider_form_pane_g5

0x2e2c,	// (0x00033eb3) slider_form_pane_g6

0x7d2e,	// (0x00038db5) slider_form_pane_g7

0x3335,	// (0x000343bc) slider_set_pane_vc_g3

0x333e,	// (0x000343c5) slider_set_pane_vc_g4

0x3347,	// (0x000343ce) slider_set_pane_vc_g5

0x3335,	// (0x000343bc) slider_set_pane_vc_g6

0x3350,	// (0x000343d7) slider_set_pane_vc_g7

0x3335,	// (0x000343bc) slider_form_pane_vc_g1

0x333e,	// (0x000343c5) slider_form_pane_vc_g2

0x3347,	// (0x000343ce) slider_form_pane_vc_g3

0x3335,	// (0x000343bc) slider_form_pane_vc_g4

0x34df,	// (0x00034566) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x00040b56) slider_form_pane_vc_g

0x06af,	// (0x00031736) main_idle_act3_pane

0x937a,	// (0x0003a401) ai3_links_pane

0x9383,	// (0x0003a40a) popup_ai3_data_window_ParamLimits

0x9383,	// (0x0003a40a) popup_ai3_data_window

0x06af,	// (0x00031736) grid_ai3_links_pane

0x939b,	// (0x0003a422) cell_ai3_links_pane_ParamLimits

0x939b,	// (0x0003a422) cell_ai3_links_pane

0x93b3,	// (0x0003a43a) bg_popup_sub_pane_cp11

0x93c0,	// (0x0003a447) cell_ai3_links_pane_g1

0x06af,	// (0x00031736) bg_popup_sub_pane_cp12

0x93e5,	// (0x0003a46c) heading_ai3_data_pane

0x93ed,	// (0x0003a474) list_ai3_gene_pane

0x93f9,	// (0x0003a480) popup_ai3_data_window_g1

0x9401,	// (0x0003a488) heading_ai3_data_pane_g1

0x9409,	// (0x0003a490) heading_ai3_data_pane_t1

0x9417,	// (0x0003a49e) list_double_ai3_gene_pane_ParamLimits

0x9417,	// (0x0003a49e) list_double_ai3_gene_pane

0x9424,	// (0x0003a4ab) list_single_ai3_gene_pane_ParamLimits

0x9424,	// (0x0003a4ab) list_single_ai3_gene_pane

0x81e3,	// (0x0003926a) list_highlight_pane_cp7_ParamLimits

0x81e3,	// (0x0003926a) list_highlight_pane_cp7

0x9431,	// (0x0003a4b8) list_single_a13_gene_pane_t1_ParamLimits

0x9431,	// (0x0003a4b8) list_single_a13_gene_pane_t1

0x9448,	// (0x0003a4cf) list_single_ai3_gene_pane_g1

0x9472,	// (0x0003a4f9) list_single_ai3_gene_pane_g2

0x0001,

0xfcfd,	// (0x00040d84) list_single_ai3_gene_pane_g

0x947a,	// (0x0003a501) list_double_ai3_gene_pane_g1_ParamLimits

0x947a,	// (0x0003a501) list_double_ai3_gene_pane_g1

0x9486,	// (0x0003a50d) list_double_ai3_gene_pane_t1_ParamLimits

0x9486,	// (0x0003a50d) list_double_ai3_gene_pane_t1

0x94a2,	// (0x0003a529) list_double_ai3_gene_pane_t2_ParamLimits

0x94a2,	// (0x0003a529) list_double_ai3_gene_pane_t2

0x94b7,	// (0x0003a53e) list_double_ai3_gene_pane_t3_ParamLimits

0x94b7,	// (0x0003a53e) list_double_ai3_gene_pane_t3

0x0002,

0xfd02,	// (0x00040d89) list_double_ai3_gene_pane_t_ParamLimits

0xfd02,	// (0x00040d89) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4d5b,	// (0x00035de2) aid_size_min_col_2

0x9344,	// (0x0003a3cb) aid_size_min_msg_ParamLimits

0x9344,	// (0x0003a3cb) aid_size_min_msg

0x860b,	// (0x00039692) fep_vkb_top_text_pane_g2_ParamLimits

0x860b,	// (0x00039692) fep_vkb_top_text_pane_g2

0x0001,

0xfb69,	// (0x00040bf0) fep_vkb_top_text_pane_g_ParamLimits

0xfb69,	// (0x00040bf0) fep_vkb_top_text_pane_g

0x06af,	// (0x00031736) main_hc_apps_shell_pane

0x94d4,	// (0x0003a55b) grid_hc_apps_pane_ParamLimits

0x94d4,	// (0x0003a55b) grid_hc_apps_pane

0x94e3,	// (0x0003a56a) list_hc_apps_pane

0x94eb,	// (0x0003a572) scroll_pane_cp37_ParamLimits

0x94eb,	// (0x0003a572) scroll_pane_cp37

0x94f7,	// (0x0003a57e) cell_hc_apps_pane_ParamLimits

0x94f7,	// (0x0003a57e) cell_hc_apps_pane

0x95a7,	// (0x0003a62e) cell_hc_apps_pane_g1_ParamLimits

0x95a7,	// (0x0003a62e) cell_hc_apps_pane_g1

0x95d8,	// (0x0003a65f) cell_hc_apps_pane_g2_ParamLimits

0x95d8,	// (0x0003a65f) cell_hc_apps_pane_g2

0x95f4,	// (0x0003a67b) cell_hc_apps_pane_g3_ParamLimits

0x95f4,	// (0x0003a67b) cell_hc_apps_pane_g3

0x0002,

0xfd09,	// (0x00040d90) cell_hc_apps_pane_g_ParamLimits

0xfd09,	// (0x00040d90) cell_hc_apps_pane_g

0x9616,	// (0x0003a69d) cell_hc_apps_pane_t1_ParamLimits

0x9616,	// (0x0003a69d) cell_hc_apps_pane_t1

0x0852,	// (0x000318d9) grid_highlight_pane_cp10_ParamLimits

0x0852,	// (0x000318d9) grid_highlight_pane_cp10

0x9656,	// (0x0003a6dd) list_single_hc_apps_pane_ParamLimits

0x9656,	// (0x0003a6dd) list_single_hc_apps_pane

0x96c9,	// (0x0003a750) list_single_hc_apps_pane_g1

0x678c,	// (0x00037813) list_single_hc_apps_pane_g2

0x0001,

0xfd10,	// (0x00040d97) list_single_hc_apps_pane_g

0x67a5,	// (0x0003782c) list_single_hc_apps_pane_g2_copy1

0x4e1f,	// (0x00035ea6) list_single_hc_apps_pane_t1

0x071f,	// (0x000317a6) bg_set_opt_pane_cp_ParamLimits

0xd5f9,	// (0x0003e680) setting_slider_pane_t1_ParamLimits

0xd612,	// (0x0003e699) setting_slider_pane_t2_ParamLimits

0xd62b,	// (0x0003e6b2) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00040629) setting_slider_pane_t_ParamLimits

0xd642,	// (0x0003e6c9) slider_set_pane_ParamLimits

0xdb5f,	// (0x0003ebe6) control_pane_g5_ParamLimits

0xdb5f,	// (0x0003ebe6) control_pane_g5

0x2dee,	// (0x00033e75) slider_set_pane_g1_ParamLimits

0xdf61,	// (0x0003efe8) slider_set_pane_g2_ParamLimits

0xdf6d,	// (0x0003eff4) slider_set_pane_g3_ParamLimits

0xdf81,	// (0x0003f008) slider_set_pane_g4_ParamLimits

0xdf99,	// (0x0003f020) slider_set_pane_g5_ParamLimits

0xdf6d,	// (0x0003eff4) slider_set_pane_g6_ParamLimits

0xdfaf,	// (0x0003f036) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x00040a29) slider_set_pane_g_ParamLimits

0x161a,	// (0x000326a1) navi_icon_text_pane_ParamLimits

0x75e0,	// (0x00038667) aid_fill_nsta_2_ParamLimits

0x760a,	// (0x00038691) aid_touch_tab_arrow_left_ParamLimits

0x7619,	// (0x000386a0) aid_touch_tab_arrow_right_ParamLimits

0x7686,	// (0x0003870d) clock_nsta_pane_ParamLimits

0x7ae0,	// (0x00038b67) navi_icon_pane_g1_ParamLimits

0x7aef,	// (0x00038b76) navi_text_pane_t1_ParamLimits

0x7f59,	// (0x00038fe0) navi_icon_text_pane_g1_ParamLimits

0x7f68,	// (0x00038fef) navi_icon_text_pane_t1_ParamLimits

0x96c9,	// (0x0003a750) list_single_hc_apps_pane_g1_ParamLimits

0x678c,	// (0x00037813) list_single_hc_apps_pane_g2_ParamLimits

0xfd10,	// (0x00040d97) list_single_hc_apps_pane_g_ParamLimits

0x67a5,	// (0x0003782c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x4e1f,	// (0x00035ea6) list_single_hc_apps_pane_t1_ParamLimits

0xd513,	// (0x0003e59a) popup_toolbar2_fixed_window_ParamLimits

0xd513,	// (0x0003e59a) popup_toolbar2_fixed_window

0x7553,	// (0x000385da) popup_toolbar2_float_window

0x06af,	// (0x00031736) bg_popup_sub_pane_cp27

0x96e2,	// (0x0003a769) grid_toolbar2_float_pane

0x06af,	// (0x00031736) bg_popup_sub_pane_cp26

0x96e2,	// (0x0003a769) grid_toolbar2_fixed_pane

0x96ea,	// (0x0003a771) cell_toolbar2_fixed_pane_ParamLimits

0x96ea,	// (0x0003a771) cell_toolbar2_fixed_pane

0x96fb,	// (0x0003a782) cell_toolbar2_fixed_pane_g1

0x9704,	// (0x0003a78b) toolbar2_fixed_button_pane

0x1cf0,	// (0x00032d77) toolbar2_fixed_button_pane_g1

0x1d00,	// (0x00032d87) toolbar2_fixed_button_pane_g2

0x1cf8,	// (0x00032d7f) toolbar2_fixed_button_pane_g3

0x1d10,	// (0x00032d97) toolbar2_fixed_button_pane_g4

0x1d08,	// (0x00032d8f) toolbar2_fixed_button_pane_g5

0x1d18,	// (0x00032d9f) toolbar2_fixed_button_pane_g6

0x1d20,	// (0x00032da7) toolbar2_fixed_button_pane_g7

0x1d30,	// (0x00032db7) toolbar2_fixed_button_pane_g8

0x1d28,	// (0x00032daf) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0004092b) toolbar2_fixed_button_pane_g

0x970c,	// (0x0003a793) cell_toolbar2_float_pane_ParamLimits

0x970c,	// (0x0003a793) cell_toolbar2_float_pane

0x971d,	// (0x0003a7a4) cell_toolbar2_float_pane_g1

0x9704,	// (0x0003a78b) toolbar2_fixed_button_pane_cp

0x8360,	// (0x000393e7) fep_vkb_accented_list_pane_ParamLimits

0x8360,	// (0x000393e7) fep_vkb_accented_list_pane

0xe375,	// (0x0003f3fc) bg_popup_fep_shadow_pane_g9

0x179c,	// (0x00032823) bg_popup_fep_shadow_pane_cp3

0x0e6c,	// (0x00031ef3) list_accented_list_pane

0x9726,	// (0x0003a7ad) list_single_accented_list_pane_ParamLimits

0x9726,	// (0x0003a7ad) list_single_accented_list_pane

0x179c,	// (0x00032823) list_highlight_pane_cp10

0x9737,	// (0x0003a7be) list_single_accented_list_pane_t1

0x74ab,	// (0x00038532) popup_slider_window_ParamLimits

0x74ab,	// (0x00038532) popup_slider_window

0x933b,	// (0x0003a3c2) aid_indentation_list_msg

0x97f1,	// (0x0003a878) bg_popup_window_pane_cp19

0x985b,	// (0x0003a8e2) popup_slider_window_g1

0x9877,	// (0x0003a8fe) popup_slider_window_g2

0x9893,	// (0x0003a91a) popup_slider_window_g3

0x0005,

0xfd15,	// (0x00040d9c) popup_slider_window_g

0x98ef,	// (0x0003a976) popup_slider_window_t1

0x9963,	// (0x0003a9ea) small_volume_slider_vertical_pane

0x821e,	// (0x000392a5) small_volume_slider_vertical_pane_g1

0x821e,	// (0x000392a5) small_volume_slider_vertical_pane_g2

0x997f,	// (0x0003aa06) small_volume_slider_vertical_pane_g3

0x0002,

0xfd27,	// (0x00040dae) small_volume_slider_vertical_pane_g

0xd2d9,	// (0x0003e360) area_side_right_pane_ParamLimits

0xd2d9,	// (0x0003e360) area_side_right_pane

0xe557,	// (0x0003f5de) aid_size_side_button_ParamLimits

0xe557,	// (0x0003f5de) aid_size_side_button

0xe56b,	// (0x0003f5f2) grid_sctrl_middle_pane_ParamLimits

0xe56b,	// (0x0003f5f2) grid_sctrl_middle_pane

0xe58b,	// (0x0003f612) sctrl_sk_bottom_pane

0xe59c,	// (0x0003f623) sctrl_sk_top_pane

0xe5ae,	// (0x0003f635) aid_touch_sctrl_top

0xe5bb,	// (0x0003f642) bg_sctrl_sk_pane_ParamLimits

0xe5bb,	// (0x0003f642) bg_sctrl_sk_pane

0xe5c9,	// (0x0003f650) sctrl_sk_top_pane_g1

0xe5d6,	// (0x0003f65d) sctrl_sk_top_pane_t1

0xe5ae,	// (0x0003f635) aid_touch_sctrl_bottom

0xe5bb,	// (0x0003f642) bg_sctrl_sk_pane_cp_ParamLimits

0xe5bb,	// (0x0003f642) bg_sctrl_sk_pane_cp

0xe5f1,	// (0x0003f678) sctrl_sk_bottom_pane_g1

0xe5d6,	// (0x0003f65d) sctrl_sk_bottom_pane_t1

0xe5fa,	// (0x0003f681) cell_sctrl_middle_pane_ParamLimits

0xe5fa,	// (0x0003f681) cell_sctrl_middle_pane

0xe615,	// (0x0003f69c) aid_touch_sctrl_middle_ParamLimits

0xe615,	// (0x0003f69c) aid_touch_sctrl_middle

0xe627,	// (0x0003f6ae) bg_sctrl_middle_pane_ParamLimits

0xe627,	// (0x0003f6ae) bg_sctrl_middle_pane

0xe395,	// (0x0003f41c) cell_sctrl_middle_pane_g1_ParamLimits

0xe395,	// (0x0003f41c) cell_sctrl_middle_pane_g1

0xe635,	// (0x0003f6bc) cell_sctrl_middle_pane_g2_ParamLimits

0xe635,	// (0x0003f6bc) cell_sctrl_middle_pane_g2

0x0001,

0xfd33,	// (0x00040dba) cell_sctrl_middle_pane_g_ParamLimits

0xfd33,	// (0x00040dba) cell_sctrl_middle_pane_g

0x1cf0,	// (0x00032d77) bg_sctrl_middle_pane_g1

0x1cf8,	// (0x00032d7f) bg_sctrl_middle_pane_g2

0x1d00,	// (0x00032d87) bg_sctrl_middle_pane_g3

0x1d08,	// (0x00032d8f) bg_sctrl_middle_pane_g4

0x1d10,	// (0x00032d97) bg_sctrl_middle_pane_g5

0x1d18,	// (0x00032d9f) bg_sctrl_middle_pane_g6

0x1d20,	// (0x00032da7) bg_sctrl_middle_pane_g7

0x1d28,	// (0x00032daf) bg_sctrl_middle_pane_g8

0x0007,

0xfd38,	// (0x00040dbf) bg_sctrl_middle_pane_g

0x1d30,	// (0x00032db7) bg_sctrl_middle_pane_g8_copy1

0x1cf0,	// (0x00032d77) bg_sctrl_sk_pane_g1

0x1d00,	// (0x00032d87) bg_sctrl_sk_pane_g2

0x1cf8,	// (0x00032d7f) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0004092b) bg_sctrl_sk_pane_g

0x0c9f,	// (0x00031d26) aid_size_touch_scroll_bar

0x1d10,	// (0x00032d97) bg_sctrl_sk_pane_g4

0x1d08,	// (0x00032d8f) bg_sctrl_sk_pane_g5

0x1d18,	// (0x00032d9f) bg_sctrl_sk_pane_g6

0x1d20,	// (0x00032da7) bg_sctrl_sk_pane_g7

0x1d30,	// (0x00032db7) bg_sctrl_sk_pane_g8

0x1d28,	// (0x00032daf) bg_sctrl_sk_pane_g9

0x1a32,	// (0x00032ab9) popup_fep_china_hwr2_fs_candidate_window

0x71b9,	// (0x00038240) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x71b9,	// (0x00038240) popup_fep_china_hwr2_fs_control_window

0xe395,	// (0x0003f41c) sctrl_sk_top_pane_g2

0x0001,

0xfd2e,	// (0x00040db5) sctrl_sk_top_pane_g

0x9988,	// (0x0003aa0f) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9988,	// (0x0003aa0f) aid_fep_china_hwr2_fs_cell

0x999a,	// (0x0003aa21) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x999a,	// (0x0003aa21) bg_popup_fep_shadow_pane_cp4

0x99b1,	// (0x0003aa38) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x99b1,	// (0x0003aa38) bg_popup_fep_shadow_pane_cp5

0x99c3,	// (0x0003aa4a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x99c3,	// (0x0003aa4a) popup_fep_china_hwr2_fs_control_bar_grid

0x99d3,	// (0x0003aa5a) popup_fep_china_hwr2_fs_control_funtion_grid

0x99db,	// (0x0003aa62) aid_fep_china_hwr2_fs_candi_cell

0x06af,	// (0x00031736) bg_popup_fep_shadow_pane_cp6

0x99e5,	// (0x0003aa6c) popup_fep_china_hwr2_fs_candidate_grid

0x99ef,	// (0x0003aa76) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x99ef,	// (0x0003aa76) cell_fep_china_hwr2_fs_funtion_grid

0x821e,	// (0x000392a5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9a07,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9a07,	// (0x0003aa8e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9a15,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9a15,	// (0x0003aa9c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd49,	// (0x00040dd0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd49,	// (0x00040dd0) cell_fep_china_hwr2_fs_funtion_grid_g

0x9a2b,	// (0x0003aab2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9a2b,	// (0x0003aab2) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9a40,	// (0x0003aac7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9a40,	// (0x0003aac7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd4e,	// (0x00040dd5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd4e,	// (0x00040dd5) cell_fep_china_hwr2_fs_funtion_grid_t

0x9a5c,	// (0x0003aae3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9a64,	// (0x0003aaeb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9a6c,	// (0x0003aaf3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd53,	// (0x00040dda) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9a74,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9a74,	// (0x0003aafb) cell_fep_china_hwr2_fs_candidate_grid

0x9a8d,	// (0x0003ab14) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9a95,	// (0x0003ab1c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x821e,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x821e,	// (0x000392a5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb6e,	// (0x00040bf5) cell_fep_china_hwr2_fs_candidate_grid_g

0x9a9d,	// (0x0003ab24) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1b3f,	// (0x00032bc6) clock_nsta_pane_cp_24_ParamLimits

0x1b3f,	// (0x00032bc6) clock_nsta_pane_cp_24

0x1ba7,	// (0x00032c2e) indicator_nsta_pane_cp_24_ParamLimits

0x1ba7,	// (0x00032c2e) indicator_nsta_pane_cp_24

0x28ac,	// (0x00033933) heading_pane_g1

0x0001,

0xf909,	// (0x00040990) heading_pane_g

0x2f22,	// (0x00033fa9) grid_sct_catagory_button_pane

0x2c24,	// (0x00033cab) scroll_pane_cp5_ParamLimits

0x37a0,	// (0x00034827) button_value_adjust_pane_cp5_ParamLimits

0x37a0,	// (0x00034827) button_value_adjust_pane_cp5

0x385e,	// (0x000348e5) form2_midp_time_pane_ParamLimits

0x9aab,	// (0x0003ab32) cell_sct_catagory_button_pane_ParamLimits

0x9aab,	// (0x0003ab32) cell_sct_catagory_button_pane

0x81e3,	// (0x0003926a) bg_button_pane_cp01_ParamLimits

0x81e3,	// (0x0003926a) bg_button_pane_cp01

0x821e,	// (0x000392a5) cell_sct_catagory_button_pane_g1

0x74e2,	// (0x00038569) popup_tb_extension_window

0x9abd,	// (0x0003ab44) aid_size_cell_ext_ParamLimits

0x9abd,	// (0x0003ab44) aid_size_cell_ext

0x0852,	// (0x000318d9) bg_tb_trans_pane_cp1_ParamLimits

0x0852,	// (0x000318d9) bg_tb_trans_pane_cp1

0x9add,	// (0x0003ab64) grid_tb_ext_pane_ParamLimits

0x9add,	// (0x0003ab64) grid_tb_ext_pane

0x9b0f,	// (0x0003ab96) cell_tb_ext_pane_ParamLimits

0x9b0f,	// (0x0003ab96) cell_tb_ext_pane

0x9b26,	// (0x0003abad) cell_tb_ext_pane_g1_ParamLimits

0x9b26,	// (0x0003abad) cell_tb_ext_pane_g1

0x9b43,	// (0x0003abca) cell_tb_ext_pane_t1

0x0852,	// (0x000318d9) list_highlight_pane_cp11_ParamLimits

0x0852,	// (0x000318d9) list_highlight_pane_cp11

0xd532,	// (0x0003e5b9) popup_uni_indicator_window_ParamLimits

0xd532,	// (0x0003e5b9) popup_uni_indicator_window

0x0d66,	// (0x00031ded) bg_popup_sub_pane_cp14

0x9b5e,	// (0x0003abe5) list_uniindi_pane

0x9b6a,	// (0x0003abf1) uniindi_top_pane

0x0852,	// (0x000318d9) bg_uniindi_top_pane

0x9b89,	// (0x0003ac10) uniindi_top_pane_g1

0x9b9f,	// (0x0003ac26) uniindi_top_pane_g2

0x0003,

0xfd5a,	// (0x00040de1) uniindi_top_pane_g

0x9bc9,	// (0x0003ac50) uniindi_top_pane_t1

0x9bf3,	// (0x0003ac7a) list_single_uniindi_pane_ParamLimits

0x9bf3,	// (0x0003ac7a) list_single_uniindi_pane

0x821e,	// (0x000392a5) bg_uniindi_top_pane_g1

0x9c05,	// (0x0003ac8c) list_single_uniindi_pane_g1

0x9c18,	// (0x0003ac9f) list_single_uniindi_pane_t1

0xd3b6,	// (0x0003e43d) control_bg_pane

0x9c3d,	// (0x0003acc4) bg_sctrl_sk_pane_cp1

0x9c46,	// (0x0003accd) bg_sctrl_sk_pane_cp2

0x9c4f,	// (0x0003acd6) control_bg_pane_g1

0x9c58,	// (0x0003acdf) control_bg_pane_g2

0x0001,

0xfd63,	// (0x00040dea) control_bg_pane_g

0x36f3,	// (0x0003477a) cell_indicator_nsta_pane_g1_ParamLimits

0x7e88,	// (0x00038f0f) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x00040b6b) cell_indicator_nsta_pane_g_ParamLimits

0x4b3a,	// (0x00035bc1) form2_midp_time_pane_t1_ParamLimits

0x0ae1,	// (0x00031b68) main_idle_act4_pane_ParamLimits

0x0ae1,	// (0x00031b68) main_idle_act4_pane

0x74e2,	// (0x00038569) popup_tb_extension_window_ParamLimits

0x9aff,	// (0x0003ab86) tb_ext_find_pane_ParamLimits

0x9aff,	// (0x0003ab86) tb_ext_find_pane

0x9c61,	// (0x0003ace8) ai_gene_pane_1_cp1

0x181e,	// (0x000328a5) ai_gene_pane_2_cp1

0x9c69,	// (0x0003acf0) list_single_idle_plugin_calendar_pane

0x9c72,	// (0x0003acf9) list_single_idle_plugin_notification_pane

0x9c7b,	// (0x0003ad02) list_single_idle_plugin_player_pane

0x9c84,	// (0x0003ad0b) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9c84,	// (0x0003ad0b) list_single_idle_plugin_shortcut_pane

0x9ca6,	// (0x0003ad2d) main_idle_act4_pane_t1

0x9cb8,	// (0x0003ad3f) main_idle_act4_pane_t2

0x0001,

0xfd68,	// (0x00040def) main_idle_act4_pane_t

0x9cca,	// (0x0003ad51) middle_sk_idle_act4_pane_ParamLimits

0x9cca,	// (0x0003ad51) middle_sk_idle_act4_pane

0x9ce0,	// (0x0003ad67) popup_clock_digital_analogue_window_cp2

0x9cfa,	// (0x0003ad81) shortcut_wheel_idle_act4_pane_ParamLimits

0x9cfa,	// (0x0003ad81) shortcut_wheel_idle_act4_pane

0x821e,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g1

0x821e,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g2

0x821e,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g3

0x821e,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g4

0x821e,	// (0x000392a5) shortcut_wheel_idle_act4_pane_g5

0x9d0e,	// (0x0003ad95) shortcut_wheel_idle_act4_pane_g6

0x9d16,	// (0x0003ad9d) shortcut_wheel_idle_act4_pane_g7

0x9d1e,	// (0x0003ada5) shortcut_wheel_idle_act4_pane_g8

0x9d26,	// (0x0003adad) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6d,	// (0x00040df4) shortcut_wheel_idle_act4_pane_g

0x84b7,	// (0x0003953e) middle_sk_idle_act4_pane_g1_ParamLimits

0x84b7,	// (0x0003953e) middle_sk_idle_act4_pane_g1

0x9d8a,	// (0x0003ae11) middle_sk_idle_act4_pane_g2_ParamLimits

0x9d8a,	// (0x0003ae11) middle_sk_idle_act4_pane_g2

0x0001,

0xfd90,	// (0x00040e17) middle_sk_idle_act4_pane_g_ParamLimits

0xfd90,	// (0x00040e17) middle_sk_idle_act4_pane_g

0x9d96,	// (0x0003ae1d) middle_sk_idle_act4_pane_t1_ParamLimits

0x9d96,	// (0x0003ae1d) middle_sk_idle_act4_pane_t1

0x9db3,	// (0x0003ae3a) grid_ai_shortcut_pane_ParamLimits

0x9db3,	// (0x0003ae3a) grid_ai_shortcut_pane

0x9dcc,	// (0x0003ae53) list_highlight_pane_cp16_ParamLimits

0x9dcc,	// (0x0003ae53) list_highlight_pane_cp16

0x9dd9,	// (0x0003ae60) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9dd9,	// (0x0003ae60) list_single_idle_plugin_shortcut_pane_g1

0x9de5,	// (0x0003ae6c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x9de5,	// (0x0003ae6c) list_single_idle_plugin_shortcut_pane_g2

0x9dfd,	// (0x0003ae84) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x9dfd,	// (0x0003ae84) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd95,	// (0x00040e1c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd95,	// (0x00040e1c) list_single_idle_plugin_shortcut_pane_g

0x9e10,	// (0x0003ae97) cell_ai_shortcut_pane_ParamLimits

0x9e10,	// (0x0003ae97) cell_ai_shortcut_pane

0x9e31,	// (0x0003aeb8) cell_ai_shortcut_pane_g1_ParamLimits

0x9e31,	// (0x0003aeb8) cell_ai_shortcut_pane_g1

0x9c61,	// (0x0003ace8) ai_gene_pane_1_cp2

0x9e53,	// (0x0003aeda) ai_gene_pane_2_cp2

0x9e5b,	// (0x0003aee2) list_highlight_pane_cp15

0x9e64,	// (0x0003aeeb) list_single_idle_plugin_calendar_pane_g1

0x9e5b,	// (0x0003aee2) list_highlight_pane_cp17

0x9e6c,	// (0x0003aef3) list_single_idle_plugin_calendar_pane_g1_copy1

0x9e74,	// (0x0003aefb) list_single_idle_plugin_player_pane_g1

0x3137,	// (0x000341be) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9c,	// (0x00040e23) list_single_idle_plugin_player_pane_g

0x9e7c,	// (0x0003af03) list_single_idle_plugin_player_pane_t1

0x9e8a,	// (0x0003af11) list_single_idle_plugin_player_pane_t2

0x9e98,	// (0x0003af1f) list_single_idle_plugin_player_pane_t3

0x9ea6,	// (0x0003af2d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda1,	// (0x00040e28) list_single_idle_plugin_player_pane_t

0x9eb4,	// (0x0003af3b) wait_bar_pane_cp15

0x9ebc,	// (0x0003af43) grid_ai_notification_pane

0x3137,	// (0x000341be) list_single_idle_plugin_notification_pane_g1

0x9ec5,	// (0x0003af4c) cell_ai_notification_pane_ParamLimits

0x9ec5,	// (0x0003af4c) cell_ai_notification_pane

0x9ed2,	// (0x0003af59) cell_ai_notification_pane_g1

0x9eda,	// (0x0003af61) cell_ai_notification_pane_t1

0x9ee8,	// (0x0003af6f) tb_ext_find_button_pane

0x9ef0,	// (0x0003af77) tb_ext_find_pane_g1

0x9ef8,	// (0x0003af7f) tb_ext_find_pane_t1

0x128d,	// (0x00032314) tb_ext_find_button_pane_g1

0x9f06,	// (0x0003af8d) tb_ext_find_button_pane_g2

0x0001,

0xfdaa,	// (0x00040e31) tb_ext_find_button_pane_g

0x9ca6,	// (0x0003ad2d) main_idle_act4_pane_t1_ParamLimits

0x9cb8,	// (0x0003ad3f) main_idle_act4_pane_t2_ParamLimits

0xfd68,	// (0x00040def) main_idle_act4_pane_t_ParamLimits

0x9ce0,	// (0x0003ad67) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9cee,	// (0x0003ad75) sat_plugin_idle_act4_pane_ParamLimits

0x9cee,	// (0x0003ad75) sat_plugin_idle_act4_pane

0x9f0f,	// (0x0003af96) sat_plugin_idle_act4_pane_t1_ParamLimits

0x9f0f,	// (0x0003af96) sat_plugin_idle_act4_pane_t1

0x9f22,	// (0x0003afa9) sat_plugin_idle_act4_pane_t2_ParamLimits

0x9f22,	// (0x0003afa9) sat_plugin_idle_act4_pane_t2

0x9f35,	// (0x0003afbc) sat_plugin_idle_act4_pane_t3_ParamLimits

0x9f35,	// (0x0003afbc) sat_plugin_idle_act4_pane_t3

0x9f48,	// (0x0003afcf) sat_plugin_idle_act4_pane_t4_ParamLimits

0x9f48,	// (0x0003afcf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdaf,	// (0x00040e36) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdaf,	// (0x00040e36) sat_plugin_idle_act4_pane_t

0xd47b,	// (0x0003e502) popup_battery_window_ParamLimits

0xd47b,	// (0x0003e502) popup_battery_window

0x0852,	// (0x000318d9) bg_popup_sub_pane_cp25_ParamLimits

0x0852,	// (0x000318d9) bg_popup_sub_pane_cp25

0x9f5b,	// (0x0003afe2) popup_battery_window_g1_ParamLimits

0x9f5b,	// (0x0003afe2) popup_battery_window_g1

0x9f67,	// (0x0003afee) popup_battery_window_t1_ParamLimits

0x9f67,	// (0x0003afee) popup_battery_window_t1

0x9f79,	// (0x0003b000) popup_battery_window_t2_ParamLimits

0x9f79,	// (0x0003b000) popup_battery_window_t2

0x0001,

0xfdb8,	// (0x00040e3f) popup_battery_window_t_ParamLimits

0xfdb8,	// (0x00040e3f) popup_battery_window_t

0x704b,	// (0x000380d2) midp_canvas_pane_ParamLimits

0x70af,	// (0x00038136) midp_keypad_pane_ParamLimits

0x70af,	// (0x00038136) midp_keypad_pane

0x19d6,	// (0x00032a5d) main_midp_pane_ParamLimits

0x3753,	// (0x000347da) signal_pane_g2_cp_ParamLimits

0x9f96,	// (0x0003b01d) aid_size_cell_midp_keypad_ParamLimits

0x9f96,	// (0x0003b01d) aid_size_cell_midp_keypad

0x9fb0,	// (0x0003b037) midp_keyp_game_grid_pane_ParamLimits

0x9fb0,	// (0x0003b037) midp_keyp_game_grid_pane

0x9fd0,	// (0x0003b057) midp_keyp_rocker_pane_ParamLimits

0x9fd0,	// (0x0003b057) midp_keyp_rocker_pane

0xa009,	// (0x0003b090) midp_keyp_sk_left_pane_ParamLimits

0xa009,	// (0x0003b090) midp_keyp_sk_left_pane

0xa063,	// (0x0003b0ea) midp_keyp_sk_right_pane_ParamLimits

0xa063,	// (0x0003b0ea) midp_keyp_sk_right_pane

0x06af,	// (0x00031736) bg_button_pane_cp03

0xa0bd,	// (0x0003b144) midp_keyp_sk_left_pane_g1

0x06af,	// (0x00031736) bg_button_pane_cp04

0xa0bd,	// (0x0003b144) midp_keyp_sk_right_pane_g1

0x821e,	// (0x000392a5) midp_keyp_rocker_pane_g1

0xa0c6,	// (0x0003b14d) keyp_game_cell_pane_ParamLimits

0xa0c6,	// (0x0003b14d) keyp_game_cell_pane

0x06af,	// (0x00031736) bg_button_pane_cp02

0xa0d9,	// (0x0003b160) keyp_game_cell_pane_g1

0xd4b1,	// (0x0003e538) popup_fep_vkb2_window_ParamLimits

0xd4b1,	// (0x0003e538) popup_fep_vkb2_window

0xe657,	// (0x0003f6de) aid_size_cell_vkb2_ParamLimits

0xe657,	// (0x0003f6de) aid_size_cell_vkb2

0xe6ab,	// (0x0003f732) popup_fep_vkb2_window_g1_ParamLimits

0xe6ab,	// (0x0003f732) popup_fep_vkb2_window_g1

0xe6eb,	// (0x0003f772) vkb2_area_bottom_pane_ParamLimits

0xe6eb,	// (0x0003f772) vkb2_area_bottom_pane

0xe737,	// (0x0003f7be) vkb2_area_keypad_pane_ParamLimits

0xe737,	// (0x0003f7be) vkb2_area_keypad_pane

0xe779,	// (0x0003f800) vkb2_area_top_pane_ParamLimits

0xe779,	// (0x0003f800) vkb2_area_top_pane

0xe7f3,	// (0x0003f87a) vkb2_top_entry_pane_ParamLimits

0xe7f3,	// (0x0003f87a) vkb2_top_entry_pane

0xe81d,	// (0x0003f8a4) vkb2_top_grid_left_pane_ParamLimits

0xe81d,	// (0x0003f8a4) vkb2_top_grid_left_pane

0xe83b,	// (0x0003f8c2) vkb2_top_grid_right_pane_ParamLimits

0xe83b,	// (0x0003f8c2) vkb2_top_grid_right_pane

0xe859,	// (0x0003f8e0) vkb2_cell_keypad_pane_ParamLimits

0xe859,	// (0x0003f8e0) vkb2_cell_keypad_pane

0xe92a,	// (0x0003f9b1) vkb2_area_bottom_grid_pane_ParamLimits

0xe92a,	// (0x0003f9b1) vkb2_area_bottom_grid_pane

0xe950,	// (0x0003f9d7) vkb2_area_bottom_pane_g1_ParamLimits

0xe950,	// (0x0003f9d7) vkb2_area_bottom_pane_g1

0xe974,	// (0x0003f9fb) vkb2_area_bottom_pane_g2_ParamLimits

0xe974,	// (0x0003f9fb) vkb2_area_bottom_pane_g2

0xe9a2,	// (0x0003fa29) vkb2_area_bottom_pane_g3_ParamLimits

0xe9a2,	// (0x0003fa29) vkb2_area_bottom_pane_g3

0x0002,

0xfdbd,	// (0x00040e44) vkb2_area_bottom_pane_g_ParamLimits

0xfdbd,	// (0x00040e44) vkb2_area_bottom_pane_g

0xea03,	// (0x0003fa8a) vkb2_top_cell_left_pane_ParamLimits

0xea03,	// (0x0003fa8a) vkb2_top_cell_left_pane

0xea23,	// (0x0003faaa) vkb2_top_entry_pane_g1_ParamLimits

0xea23,	// (0x0003faaa) vkb2_top_entry_pane_g1

0xea31,	// (0x0003fab8) vkb2_top_entry_pane_t1_ParamLimits

0xea31,	// (0x0003fab8) vkb2_top_entry_pane_t1

0xa0ea,	// (0x0003b171) vkb2_top_entry_pane_t2_ParamLimits

0xa0ea,	// (0x0003b171) vkb2_top_entry_pane_t2

0xa11c,	// (0x0003b1a3) vkb2_top_entry_pane_t3_ParamLimits

0xa11c,	// (0x0003b1a3) vkb2_top_entry_pane_t3

0x0002,

0xfdc4,	// (0x00040e4b) vkb2_top_entry_pane_t_ParamLimits

0xfdc4,	// (0x00040e4b) vkb2_top_entry_pane_t

0xea90,	// (0x0003fb17) vkb2_top_grid_right_pane_g1_ParamLimits

0xea90,	// (0x0003fb17) vkb2_top_grid_right_pane_g1

0xeaa6,	// (0x0003fb2d) vkb2_top_grid_right_pane_g2_ParamLimits

0xeaa6,	// (0x0003fb2d) vkb2_top_grid_right_pane_g2

0xeabe,	// (0x0003fb45) vkb2_top_grid_right_pane_g3_ParamLimits

0xeabe,	// (0x0003fb45) vkb2_top_grid_right_pane_g3

0xead6,	// (0x0003fb5d) vkb2_top_grid_right_pane_g4_ParamLimits

0xead6,	// (0x0003fb5d) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcb,	// (0x00040e52) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcb,	// (0x00040e52) vkb2_top_grid_right_pane_g

0xeaec,	// (0x0003fb73) vkb2_top_cell_left_pane_g1

0xeb03,	// (0x0003fb8a) vkb2_cell_keypad_pane_g1_ParamLimits

0xeb03,	// (0x0003fb8a) vkb2_cell_keypad_pane_g1

0xa132,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1_ParamLimits

0xa132,	// (0x0003b1b9) vkb2_cell_keypad_pane_t1

0xeb11,	// (0x0003fb98) vkb2_cell_bottom_grid_pane_ParamLimits

0xeb11,	// (0x0003fb98) vkb2_cell_bottom_grid_pane

0xeb4a,	// (0x0003fbd1) vkb2_cell_bottom_grid_pane_g1

0x9d2e,	// (0x0003adb5) aid_call2_pane_cp02

0x9d36,	// (0x0003adbd) aid_call_pane_cp02

0x9d3e,	// (0x0003adc5) clock_digital_number_pane_cp10

0x9d46,	// (0x0003adcd) clock_digital_number_pane_cp11

0x9d4e,	// (0x0003add5) clock_digital_number_pane_cp12

0x9d56,	// (0x0003addd) clock_digital_number_pane_cp13

0x9d5e,	// (0x0003ade5) clock_digital_separator_pane_cp10

0x128d,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g1

0x128d,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g2

0x9d66,	// (0x0003aded) popup_clock_digital_analogue_window_cp2_g3

0x128d,	// (0x00032314) popup_clock_digital_analogue_window_cp2_g4

0x9d66,	// (0x0003aded) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd80,	// (0x00040e07) popup_clock_digital_analogue_window_cp2_g

0x9d6e,	// (0x0003adf5) popup_clock_digital_analogue_window_cp2_t1

0x9d7c,	// (0x0003ae03) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8b,	// (0x00040e12) popup_clock_digital_analogue_window_cp2_t

0x821e,	// (0x000392a5) clock_digital_number_pane_cp10_g1

0x821e,	// (0x000392a5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb6e,	// (0x00040bf5) clock_digital_number_pane_cp10_g

0x821e,	// (0x000392a5) clock_digital_separator_pane_cp10_g1

0x821e,	// (0x000392a5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb6e,	// (0x00040bf5) clock_digital_separator_pane_cp10_g

0x9bab,	// (0x0003ac32) uniindi_top_pane_g3

0x9bbc,	// (0x0003ac43) uniindi_top_pane_g4

0xe8e4,	// (0x0003f96b) vkb2_row_keypad_pane_ParamLimits

0xe8e4,	// (0x0003f96b) vkb2_row_keypad_pane

0xeb6a,	// (0x0003fbf1) vkb2_cell_t_keypad_pane_ParamLimits

0xeb6a,	// (0x0003fbf1) vkb2_cell_t_keypad_pane

0xeb7a,	// (0x0003fc01) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xeb7a,	// (0x0003fc01) vkb2_cell_t_keypad_pane_cp08

0xeb8d,	// (0x0003fc14) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xeb8d,	// (0x0003fc14) vkb2_cell_t_keypad_pane_cp09

0xeba1,	// (0x0003fc28) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xeba1,	// (0x0003fc28) vkb2_cell_t_keypad_pane_cp01

0xebb2,	// (0x0003fc39) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xebb2,	// (0x0003fc39) vkb2_cell_t_keypad_pane_cp02

0xebc3,	// (0x0003fc4a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xebc3,	// (0x0003fc4a) vkb2_cell_t_keypad_pane_cp03

0xebd4,	// (0x0003fc5b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xebd4,	// (0x0003fc5b) vkb2_cell_t_keypad_pane_cp04

0xebe5,	// (0x0003fc6c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xebe5,	// (0x0003fc6c) vkb2_cell_t_keypad_pane_cp05

0xebf6,	// (0x0003fc7d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xebf6,	// (0x0003fc7d) vkb2_cell_t_keypad_pane_cp06

0xec07,	// (0x0003fc8e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xec07,	// (0x0003fc8e) vkb2_cell_t_keypad_pane_cp07

0xec18,	// (0x0003fc9f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xec18,	// (0x0003fc9f) vkb2_cell_t_keypad_pane_cp10

0xe395,	// (0x0003f41c) vkb2_cell_t_keypad_pane_g1

0xa149,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1

0xd3b6,	// (0x0003e43d) popup_grid_graphic2_window

0xec2d,	// (0x0003fcb4) aid_size_cell_graphic2_ParamLimits

0xec2d,	// (0x0003fcb4) aid_size_cell_graphic2

0x87af,	// (0x00039836) bg_popup_window_pane_cp21_ParamLimits

0x87af,	// (0x00039836) bg_popup_window_pane_cp21

0xec59,	// (0x0003fce0) graphic2_pages_pane_ParamLimits

0xec59,	// (0x0003fce0) graphic2_pages_pane

0xec9f,	// (0x0003fd26) grid_graphic2_control_pane_ParamLimits

0xec9f,	// (0x0003fd26) grid_graphic2_control_pane

0xeccd,	// (0x0003fd54) grid_graphic2_pane_ParamLimits

0xeccd,	// (0x0003fd54) grid_graphic2_pane

0xed2d,	// (0x0003fdb4) cell_graphic2_pane

0x06af,	// (0x00031736) main_comp_mode_pane

0x93ed,	// (0x0003a474) list_ai3_gene_pane_ParamLimits

0x97f1,	// (0x0003a878) bg_popup_window_pane_cp19_ParamLimits

0x97fd,	// (0x0003a884) bg_touch_area_indi_pane_ParamLimits

0x97fd,	// (0x0003a884) bg_touch_area_indi_pane

0x9813,	// (0x0003a89a) bg_touch_area_indi_pane_cp01_ParamLimits

0x9813,	// (0x0003a89a) bg_touch_area_indi_pane_cp01

0x9829,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02_ParamLimits

0x9829,	// (0x0003a8b0) bg_touch_area_indi_pane_cp02

0x9841,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03_ParamLimits

0x9841,	// (0x0003a8c8) bg_touch_area_indi_pane_cp03

0x985b,	// (0x0003a8e2) popup_slider_window_g1_ParamLimits

0x9877,	// (0x0003a8fe) popup_slider_window_g2_ParamLimits

0x9893,	// (0x0003a91a) popup_slider_window_g3_ParamLimits

0xfd15,	// (0x00040d9c) popup_slider_window_g_ParamLimits

0x98ef,	// (0x0003a976) popup_slider_window_t1_ParamLimits

0x9963,	// (0x0003a9ea) small_volume_slider_vertical_pane_ParamLimits

0xed2d,	// (0x0003fdb4) cell_graphic2_pane_ParamLimits

0xed7c,	// (0x0003fe03) bg_button_pane_cp10_ParamLimits

0xed7c,	// (0x0003fe03) bg_button_pane_cp10

0xed8f,	// (0x0003fe16) bg_button_pane_cp11_ParamLimits

0xed8f,	// (0x0003fe16) bg_button_pane_cp11

0xeda2,	// (0x0003fe29) graphic2_pages_pane_g1_ParamLimits

0xeda2,	// (0x0003fe29) graphic2_pages_pane_g1

0xedbd,	// (0x0003fe44) graphic2_pages_pane_g2_ParamLimits

0xedbd,	// (0x0003fe44) graphic2_pages_pane_g2

0x0001,

0xfdd9,	// (0x00040e60) graphic2_pages_pane_g_ParamLimits

0xfdd9,	// (0x00040e60) graphic2_pages_pane_g

0xedd5,	// (0x0003fe5c) graphic2_pages_pane_t1_ParamLimits

0xedd5,	// (0x0003fe5c) graphic2_pages_pane_t1

0xedeb,	// (0x0003fe72) cell_graphic2_control_pane_ParamLimits

0xedeb,	// (0x0003fe72) cell_graphic2_control_pane

0xee05,	// (0x0003fe8c) cell_graphic2_pane_g1_ParamLimits

0xee05,	// (0x0003fe8c) cell_graphic2_pane_g1

0xee12,	// (0x0003fe99) cell_graphic2_pane_g2_ParamLimits

0xee12,	// (0x0003fe99) cell_graphic2_pane_g2

0xee1f,	// (0x0003fea6) cell_graphic2_pane_g3_ParamLimits

0xee1f,	// (0x0003fea6) cell_graphic2_pane_g3

0xee2c,	// (0x0003feb3) cell_graphic2_pane_g4_ParamLimits

0xee2c,	// (0x0003feb3) cell_graphic2_pane_g4

0xee39,	// (0x0003fec0) cell_graphic2_pane_g5_ParamLimits

0xee39,	// (0x0003fec0) cell_graphic2_pane_g5

0x0004,

0xfdde,	// (0x00040e65) cell_graphic2_pane_g_ParamLimits

0xfdde,	// (0x00040e65) cell_graphic2_pane_g

0xee54,	// (0x0003fedb) cell_graphic2_pane_t1_ParamLimits

0xee54,	// (0x0003fedb) cell_graphic2_pane_t1

0x1de0,	// (0x00032e67) grid_highlight_pane_cp11_ParamLimits

0x1de0,	// (0x00032e67) grid_highlight_pane_cp11

0x0d66,	// (0x00031ded) bg_button_pane_cp05

0xee6a,	// (0x0003fef1) cell_graphic2_control_pane_g1

0x821e,	// (0x000392a5) bg_touch_area_indi_pane_g1

0xa15b,	// (0x0003b1e2) aid_cmod_rocker_key_size

0xa165,	// (0x0003b1ec) aid_cmode_itu_key_size

0xa16f,	// (0x0003b1f6) main_cmode_video_pane

0xa179,	// (0x0003b200) main_comp_mode_itu_pane

0xa185,	// (0x0003b20c) main_comp_mode_rocker_pane

0xa191,	// (0x0003b218) cell_cmode_rocker_pane_ParamLimits

0xa191,	// (0x0003b218) cell_cmode_rocker_pane

0xa1a3,	// (0x0003b22a) cell_cmode_itu_pane_ParamLimits

0xa1a3,	// (0x0003b22a) cell_cmode_itu_pane

0x0d66,	// (0x00031ded) bg_button_pane_cp06_ParamLimits

0x0d66,	// (0x00031ded) bg_button_pane_cp06

0x84b7,	// (0x0003953e) cell_cmode_rocker_pane_g1_ParamLimits

0x84b7,	// (0x0003953e) cell_cmode_rocker_pane_g1

0x9a07,	// (0x0003aa8e) cell_cmode_rocker_pane_g2_ParamLimits

0x9a07,	// (0x0003aa8e) cell_cmode_rocker_pane_g2

0x0001,

0xfde9,	// (0x00040e70) cell_cmode_rocker_pane_g_ParamLimits

0xfde9,	// (0x00040e70) cell_cmode_rocker_pane_g

0x06af,	// (0x00031736) bg_button_pane_cp07

0xa1b8,	// (0x0003b23f) cell_cmode_itu_pane_g1

0xa1c1,	// (0x0003b248) cell_cmode_itu_pane_t1

0xa1cf,	// (0x0003b256) cell_cmode_itu_pane_t2

0x0001,

0xfdee,	// (0x00040e75) cell_cmode_itu_pane_t

0x9c2d,	// (0x0003acb4) aid_touch_ctrl_left

0x9c35,	// (0x0003acbc) aid_touch_ctrl_right

0x06af,	// (0x00031736) compa_mode_pane

0xee77,	// (0x0003fefe) aid_cmod_rocker_key_size_cp

0xee81,	// (0x0003ff08) aid_cmode_itu_key_size_cp

0xa1dd,	// (0x0003b264) compa_mode_pane_g1

0xa1e5,	// (0x0003b26c) compa_mode_pane_g2

0xa1ed,	// (0x0003b274) compa_mode_pane_g3

0x0002,

0xfdf3,	// (0x00040e7a) compa_mode_pane_g

0xee8b,	// (0x0003ff12) main_comp_mode_itu_pane_cp

0xee93,	// (0x0003ff1a) main_comp_mode_rocker_pane_cp

0xee9b,	// (0x0003ff22) cell_cmode_itu_pane_cp_ParamLimits

0xee9b,	// (0x0003ff22) cell_cmode_itu_pane_cp

0xeeb0,	// (0x0003ff37) cell_cmode_rocker_pane_cp_ParamLimits

0xeeb0,	// (0x0003ff37) cell_cmode_rocker_pane_cp

0x0d66,	// (0x00031ded) bg_button_pane_cp06_cp_ParamLimits

0x0d66,	// (0x00031ded) bg_button_pane_cp06_cp

0x84b7,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x84b7,	// (0x0003953e) cell_cmode_rocker_pane_g1_cp

0x821e,	// (0x000392a5) cell_cmode_rocker_pane_g2_cp

0x06af,	// (0x00031736) bg_button_pane_cp07_cp

0xeec2,	// (0x0003ff49) cell_cmode_itu_pane_g1_cp

0xeecb,	// (0x0003ff52) cell_cmode_itu_pane_t1_cp

0xeecb,	// (0x0003ff52) cell_cmode_itu_pane_t2_cp

0x7d24,	// (0x00038dab) settings_code_pane_cp2

0x071f,	// (0x000317a6) bg_popup_window_pane_cp3_ParamLimits

0x0a20,	// (0x00031aa7) heading_pane_cp3_ParamLimits

0x0a2c,	// (0x00031ab3) listscroll_popup_graphic_pane_ParamLimits

0xe13e,	// (0x0003f1c5) fep_hwr_aid_pane_ParamLimits

0xe5ae,	// (0x0003f635) aid_touch_sctrl_top_ParamLimits

0xe5c9,	// (0x0003f650) sctrl_sk_top_pane_g1_ParamLimits

0xe395,	// (0x0003f41c) sctrl_sk_top_pane_g2_ParamLimits

0xfd2e,	// (0x00040db5) sctrl_sk_top_pane_g_ParamLimits

0xe5d6,	// (0x0003f65d) sctrl_sk_top_pane_t1_ParamLimits

0xe5ae,	// (0x0003f635) aid_touch_sctrl_bottom_ParamLimits

0xe5d6,	// (0x0003f65d) sctrl_sk_bottom_pane_t1_ParamLimits

0x9b77,	// (0x0003abfe) aid_area_touch_clock

0xe7bb,	// (0x0003f842) aid_vkb2_area_top_pane_cell_ParamLimits

0xe7bb,	// (0x0003f842) aid_vkb2_area_top_pane_cell

0xe906,	// (0x0003f98d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe906,	// (0x0003f98d) aid_vkb2_area_bottom_pane_cell

0xa0e2,	// (0x0003b169) popup_char_count_window

0xa1f5,	// (0x0003b27c) popup_char_count_window_g1

0xa1fe,	// (0x0003b285) popup_char_count_window_g2

0xa207,	// (0x0003b28e) popup_char_count_window_g3

0x0002,

0xfdfa,	// (0x00040e81) popup_char_count_window_g

0xa210,	// (0x0003b297) popup_char_count_window_t1

0xe689,	// (0x0003f710) popup_fep_char_preview_window_ParamLimits

0xe689,	// (0x0003f710) popup_fep_char_preview_window

0xe7d9,	// (0x0003f860) vkb2_top_candi_pane_ParamLimits

0xe7d9,	// (0x0003f860) vkb2_top_candi_pane

0xeed9,	// (0x0003ff60) cell_vkb2_top_candi_pane_ParamLimits

0xeed9,	// (0x0003ff60) cell_vkb2_top_candi_pane

0xef26,	// (0x0003ffad) bg_popup_fep_char_preview_window_ParamLimits

0xef26,	// (0x0003ffad) bg_popup_fep_char_preview_window

0xef34,	// (0x0003ffbb) popup_fep_char_preview_window_t1_ParamLimits

0xef34,	// (0x0003ffbb) popup_fep_char_preview_window_t1

0xa22e,	// (0x0003b2b5) bg_popup_fep_char_preview_window_g1

0xa226,	// (0x0003b2ad) bg_popup_fep_char_preview_window_g2

0xa21e,	// (0x0003b2a5) bg_popup_fep_char_preview_window_g3

0xa24e,	// (0x0003b2d5) bg_popup_fep_char_preview_window_g4

0xa246,	// (0x0003b2cd) bg_popup_fep_char_preview_window_g5

0xef6e,	// (0x0003fff5) bg_popup_fep_char_preview_window_g6

0xa23e,	// (0x0003b2c5) bg_popup_fep_char_preview_window_g7

0xa236,	// (0x0003b2bd) bg_popup_fep_char_preview_window_g8

0xa256,	// (0x0003b2dd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe01,	// (0x00040e88) bg_popup_fep_char_preview_window_g

0xe395,	// (0x0003f41c) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe395,	// (0x0003f41c) cell_vkb2_top_candi_pane_g1

0xe3a3,	// (0x0003f42a) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe3a3,	// (0x0003f42a) cell_vkb2_top_candi_pane_g2

0x9451,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9451,	// (0x0003a4d8) cell_vkb2_top_candi_pane_g3

0xef76,	// (0x0003fffd) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef76,	// (0x0003fffd) cell_vkb2_top_candi_pane_g4

0x8805,	// (0x0003988c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8805,	// (0x0003988c) cell_vkb2_top_candi_pane_g5

0xef97,	// (0x0004001e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef97,	// (0x0004001e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe14,	// (0x00040e9b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe14,	// (0x00040e9b) cell_vkb2_top_candi_pane_g

0xefa5,	// (0x0004002c) cell_vkb2_top_candi_pane_t1

0xdf4d,	// (0x0003efd4) aid_size_touch_slider_mark_ParamLimits

0xdf4d,	// (0x0003efd4) aid_size_touch_slider_mark

0xec8f,	// (0x0003fd16) grid_graphic2_catg_pane_ParamLimits

0xec8f,	// (0x0003fd16) grid_graphic2_catg_pane

0xed09,	// (0x0003fd90) popup_grid_graphic2_window_t1_ParamLimits

0xed09,	// (0x0003fd90) popup_grid_graphic2_window_t1

0xed1b,	// (0x0003fda2) popup_grid_graphic2_window_t2_ParamLimits

0xed1b,	// (0x0003fda2) popup_grid_graphic2_window_t2

0x0001,

0xfdd4,	// (0x00040e5b) popup_grid_graphic2_window_t_ParamLimits

0xfdd4,	// (0x00040e5b) popup_grid_graphic2_window_t

0x0d66,	// (0x00031ded) bg_button_pane_cp05_ParamLimits

0xee6a,	// (0x0003fef1) cell_graphic2_control_pane_g1_ParamLimits

0xefc4,	// (0x0004004b) cell_graphic2_catg_pane_ParamLimits

0xefc4,	// (0x0004004b) cell_graphic2_catg_pane

0x06af,	// (0x00031736) bg_button_pane_cp12

0xefd6,	// (0x0004005d) cell_graphic2_catg_pane_g1

0x9b43,	// (0x0003abca) cell_tb_ext_pane_t1_ParamLimits

0xea63,	// (0x0003faea) vkb2_top_cell_right_narrow_pane_ParamLimits

0xea63,	// (0x0003faea) vkb2_top_cell_right_narrow_pane

0xea7b,	// (0x0003fb02) vkb2_top_cell_right_wide_pane_ParamLimits

0xea7b,	// (0x0003fb02) vkb2_top_cell_right_wide_pane

0xe130,	// (0x0003f1b7) bg_vkb2_func_pane_ParamLimits

0xe130,	// (0x0003f1b7) bg_vkb2_func_pane

0xeaec,	// (0x0003fb73) vkb2_top_cell_left_pane_g1_ParamLimits

0xe130,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe130,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp03

0xeb4a,	// (0x0003fbd1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1cf8,	// (0x00032d7f) bg_vkb2_func_pane_g1

0x1d00,	// (0x00032d87) bg_vkb2_func_pane_g2

0x1d10,	// (0x00032d97) bg_vkb2_func_pane_g3

0x1d08,	// (0x00032d8f) bg_vkb2_func_pane_g4

0x1d18,	// (0x00032d9f) bg_vkb2_func_pane_g5

0x1d20,	// (0x00032da7) bg_vkb2_func_pane_g6

0x1d28,	// (0x00032daf) bg_vkb2_func_pane_g7

0x1d30,	// (0x00032db7) bg_vkb2_func_pane_g8

0x1cf0,	// (0x00032d77) bg_vkb2_func_pane_g9

0x0008,

0xfe21,	// (0x00040ea8) bg_vkb2_func_pane_g

0xe130,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe130,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp01

0xeaec,	// (0x0003fb73) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xeaec,	// (0x0003fb73) vkb2_top_cell_right_wide_pane_g1

0xe130,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe130,	// (0x0003f1b7) bg_vkb2_fuc_pane_cp02

0xeb4a,	// (0x0003fbd1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeb4a,	// (0x0003fbd1) vkb2_top_cell_right_narrow_pane_g1

0x976f,	// (0x0003a7f6) aid_touch_area_decrease_ParamLimits

0x976f,	// (0x0003a7f6) aid_touch_area_decrease

0x9793,	// (0x0003a81a) aid_touch_area_increase_ParamLimits

0x9793,	// (0x0003a81a) aid_touch_area_increase

0x979f,	// (0x0003a826) aid_touch_area_mute_ParamLimits

0x979f,	// (0x0003a826) aid_touch_area_mute

0x97c3,	// (0x0003a84a) aid_touch_area_slider_ParamLimits

0x97c3,	// (0x0003a84a) aid_touch_area_slider

0x98af,	// (0x0003a936) popup_slider_window_g4_ParamLimits

0x98af,	// (0x0003a936) popup_slider_window_g4

0x98bb,	// (0x0003a942) popup_slider_window_g5_ParamLimits

0x98bb,	// (0x0003a942) popup_slider_window_g5

0x98dd,	// (0x0003a964) popup_slider_window_g6_ParamLimits

0x98dd,	// (0x0003a964) popup_slider_window_g6

0x991d,	// (0x0003a9a4) popup_slider_window_t2_ParamLimits

0x991d,	// (0x0003a9a4) popup_slider_window_t2

0x0001,

0xfd22,	// (0x00040da9) popup_slider_window_t_ParamLimits

0xfd22,	// (0x00040da9) popup_slider_window_t

0x9935,	// (0x0003a9bc) slider_pane_ParamLimits

0x9935,	// (0x0003a9bc) slider_pane

0xa25e,	// (0x0003b2e5) slider_pane_g1_ParamLimits

0xa25e,	// (0x0003b2e5) slider_pane_g1

0xa272,	// (0x0003b2f9) slider_pane_g2_ParamLimits

0xa272,	// (0x0003b2f9) slider_pane_g2

0xa288,	// (0x0003b30f) slider_pane_g3_ParamLimits

0xa288,	// (0x0003b30f) slider_pane_g3

0x0003,

0xfe34,	// (0x00040ebb) slider_pane_g_ParamLimits

0xfe34,	// (0x00040ebb) slider_pane_g

0x753e,	// (0x000385c5) popup_tb_float_extension_window_ParamLimits

0x753e,	// (0x000385c5) popup_tb_float_extension_window

0xa2b4,	// (0x0003b33b) aid_size_cell_tb_float_ext

0x06af,	// (0x00031736) bg_popup_sub_window_cp28

0xa2c0,	// (0x0003b347) grid_tb_float_ext_pane

0xa2ca,	// (0x0003b351) cell_tb_float_ext_pane_ParamLimits

0xa2ca,	// (0x0003b351) cell_tb_float_ext_pane

0xa2e4,	// (0x0003b36b) cell_tb_float_ext_pane_g1

0xa2ed,	// (0x0003b374) grid_highlight_pane_cp12

0xe27f,	// (0x0003f306) cell_last_hwr_side_pane_ParamLimits

0xe27f,	// (0x0003f306) cell_last_hwr_side_pane

0x821e,	// (0x000392a5) cell_last_hwr_side_pane_g1

0xa2f6,	// (0x0003b37d) cell_last_hwr_side_pane_g2

0x0001,

0xfe3d,	// (0x00040ec4) cell_last_hwr_side_pane_g

0xe9d2,	// (0x0003fa59) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9d2,	// (0x0003fa59) vkb2_area_bottom_space_btn_pane

0xe395,	// (0x0003f41c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa149,	// (0x0003b1d0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xefa5,	// (0x0004002c) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefdf,	// (0x00040066) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefdf,	// (0x00040066) vkb2_area_bottom_space_btn_pane_g1

0xf019,	// (0x000400a0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf019,	// (0x000400a0) vkb2_area_bottom_space_btn_pane_g2

0xf04f,	// (0x000400d6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf04f,	// (0x000400d6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe42,	// (0x00040ec9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe42,	// (0x00040ec9) vkb2_area_bottom_space_btn_pane_g

0xe1f3,	// (0x0003f27a) cel_fep_hwr_func_pane_ParamLimits

0xe1f3,	// (0x0003f27a) cel_fep_hwr_func_pane

0xe22f,	// (0x0003f2b6) cell_hwr_side_button_pane_ParamLimits

0xe22f,	// (0x0003f2b6) cell_hwr_side_button_pane

0x9b77,	// (0x0003abfe) aid_area_touch_clock_ParamLimits

0x0852,	// (0x000318d9) bg_uniindi_top_pane_ParamLimits

0x9b89,	// (0x0003ac10) uniindi_top_pane_g1_ParamLimits

0x9b9f,	// (0x0003ac26) uniindi_top_pane_g2_ParamLimits

0x9bab,	// (0x0003ac32) uniindi_top_pane_g3_ParamLimits

0x9bbc,	// (0x0003ac43) uniindi_top_pane_g4_ParamLimits

0xfd5a,	// (0x00040de1) uniindi_top_pane_g_ParamLimits

0x9bc9,	// (0x0003ac50) uniindi_top_pane_t1_ParamLimits

0x0852,	// (0x000318d9) bg_vkb2_func_pane_cp01_ParamLimits

0x0852,	// (0x000318d9) bg_vkb2_func_pane_cp01

0xa2ff,	// (0x0003b386) cel_fep_hwr_func_pane_g1_ParamLimits

0xa2ff,	// (0x0003b386) cel_fep_hwr_func_pane_g1

0x0852,	// (0x000318d9) bg_vkb2_func_pane_cp02_ParamLimits

0x0852,	// (0x000318d9) bg_vkb2_func_pane_cp02

0xa2ff,	// (0x0003b386) cell_hwr_side_button_pane_g1_ParamLimits

0xa2ff,	// (0x0003b386) cell_hwr_side_button_pane_g1

0x1c08,	// (0x00032c8f) status_pane_g4_ParamLimits

0x1c08,	// (0x00032c8f) status_pane_g4

0x1c20,	// (0x00032ca7) status_pane_t1

0x38c6,	// (0x0003494d) form2_midp_gauge_slider_cont_pane

0x38ce,	// (0x00034955) form2_midp_gauge_slider_pane_t1_ParamLimits

0x7fba,	// (0x00039041) form2_midp_gauge_slider_pane_t2_ParamLimits

0x7fcc,	// (0x00039053) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb21,	// (0x00040ba8) form2_midp_gauge_slider_pane_t_ParamLimits

0x38e0,	// (0x00034967) form2_midp_slider_pane_ParamLimits

0xe649,	// (0x0003f6d0) aid_size_cell_func_vkb2_ParamLimits

0xe649,	// (0x0003f6d0) aid_size_cell_func_vkb2

0xa2a0,	// (0x0003b327) slider_pane_g4_ParamLimits

0xa2a0,	// (0x0003b327) slider_pane_g4

0xf099,	// (0x00040120) form2_midp_gauge_slider_pane_t2_cp01

0xf0a7,	// (0x0004012e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf0a7,	// (0x0004012e) form2_midp_gauge_slider_pane_t3_cp01

0xf0c4,	// (0x0004014b) form2_midp_slider_pane_cp01

0x06af,	// (0x00031736) navi_smil_pane

0xa32f,	// (0x0003b3b6) navi_smil_pane_g1

0xa337,	// (0x0003b3be) navi_smil_pane_t1

0xa30d,	// (0x0003b394) form2_midp_slider_pane_g1

0xa316,	// (0x0003b39d) form2_midp_slider_pane_g2

0xa31e,	// (0x0003b3a5) form2_midp_slider_pane_g3

0xa30d,	// (0x0003b394) form2_midp_slider_pane_g4

0xf0cd,	// (0x00040154) form2_midp_slider_pane_g5

0x0004,

0xfe4b,	// (0x00040ed2) form2_midp_slider_pane_g

0xf089,	// (0x00040110) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf089,	// (0x00040110) vkb2_area_bottom_space_btn_pane_g4

0x76a9,	// (0x00038730) lc0_navi_pane_ParamLimits

0x76a9,	// (0x00038730) lc0_navi_pane

0x771f,	// (0x000387a6) lc0_stat_indi_pane_ParamLimits

0x771f,	// (0x000387a6) lc0_stat_indi_pane

0x7736,	// (0x000387bd) ls0_title_pane_ParamLimits

0x7736,	// (0x000387bd) ls0_title_pane

0x0d66,	// (0x00031ded) bg_popup_sub_pane_cp14_ParamLimits

0x9b5e,	// (0x0003abe5) list_uniindi_pane_ParamLimits

0x9b6a,	// (0x0003abf1) uniindi_top_pane_ParamLimits

0x9c05,	// (0x0003ac8c) list_single_uniindi_pane_g1_ParamLimits

0x9c18,	// (0x0003ac9f) list_single_uniindi_pane_t1_ParamLimits

0xf0d6,	// (0x0004015d) lc0_stat_clock_pane_ParamLimits

0xf0d6,	// (0x0004015d) lc0_stat_clock_pane

0xf0e3,	// (0x0004016a) lc0_stat_indi_pane_g1_ParamLimits

0xf0e3,	// (0x0004016a) lc0_stat_indi_pane_g1

0xf0f0,	// (0x00040177) lc0_stat_indi_pane_g2_ParamLimits

0xf0f0,	// (0x00040177) lc0_stat_indi_pane_g2

0x0001,

0xfe56,	// (0x00040edd) lc0_stat_indi_pane_g_ParamLimits

0xfe56,	// (0x00040edd) lc0_stat_indi_pane_g

0xf0fd,	// (0x00040184) lc0_uni_indicator_pane_ParamLimits

0xf0fd,	// (0x00040184) lc0_uni_indicator_pane

0xf10a,	// (0x00040191) ls0_title_pane_g1_ParamLimits

0xf10a,	// (0x00040191) ls0_title_pane_g1

0xf11e,	// (0x000401a5) ls0_title_pane_t1_ParamLimits

0xf11e,	// (0x000401a5) ls0_title_pane_t1

0xf154,	// (0x000401db) lc0_uni_indicator_pane_g1_ParamLimits

0xf154,	// (0x000401db) lc0_uni_indicator_pane_g1

0xa345,	// (0x0003b3cc) lc0_stat_clock_pane_t1

0x06af,	// (0x00031736) main_ai5_pane

0xa353,	// (0x0003b3da) ai5_sk_pane_ParamLimits

0xa353,	// (0x0003b3da) ai5_sk_pane

0xf16a,	// (0x000401f1) cell_ai5_widget_pane_ParamLimits

0xf16a,	// (0x000401f1) cell_ai5_widget_pane

0xa360,	// (0x0003b3e7) aid_size_cell_widget_grid

0xa372,	// (0x0003b3f9) bg_ai5_widget_pane_ParamLimits

0xa372,	// (0x0003b3f9) bg_ai5_widget_pane

0xf214,	// (0x0004029b) cell_ai5_widget_pane_g2

0xf224,	// (0x000402ab) cell_ai5_widget_pane_g3

0xf238,	// (0x000402bf) cell_ai5_widget_pane_g4

0xf244,	// (0x000402cb) cell_ai5_widget_pane_g5

0xf250,	// (0x000402d7) cell_ai5_widget_pane_g6

0xf25c,	// (0x000402e3) cell_ai5_widget_pane_g7

0xf2a4,	// (0x0004032b) cell_ai5_widget_pane_t1_ParamLimits

0xf2a4,	// (0x0004032b) cell_ai5_widget_pane_t1

0xf2c1,	// (0x00040348) cell_ai5_widget_pane_t2_ParamLimits

0xf2c1,	// (0x00040348) cell_ai5_widget_pane_t2

0xf2d9,	// (0x00040360) cell_ai5_widget_pane_t3_ParamLimits

0xf2d9,	// (0x00040360) cell_ai5_widget_pane_t3

0xf2f1,	// (0x00040378) cell_ai5_widget_pane_t4_ParamLimits

0xf2f1,	// (0x00040378) cell_ai5_widget_pane_t4

0xf30b,	// (0x00040392) cell_ai5_widget_pane_t5_ParamLimits

0xf30b,	// (0x00040392) cell_ai5_widget_pane_t5

0xa37e,	// (0x0003b405) cell_ai5_widget_pane_t6_ParamLimits

0xa37e,	// (0x0003b405) cell_ai5_widget_pane_t6

0xa390,	// (0x0003b417) cell_ai5_widget_pane_t7_ParamLimits

0xa390,	// (0x0003b417) cell_ai5_widget_pane_t7

0xf32a,	// (0x000403b1) cell_ai5_widget_pane_t8_ParamLimits

0xf32a,	// (0x000403b1) cell_ai5_widget_pane_t8

0x0009,

0xfe70,	// (0x00040ef7) cell_ai5_widget_pane_t_ParamLimits

0xfe70,	// (0x00040ef7) cell_ai5_widget_pane_t

0xf372,	// (0x000403f9) grid_ai5_widget_pane

0x0d66,	// (0x00031ded) highlight_cell_ai5_widget_pane_ParamLimits

0x0d66,	// (0x00031ded) highlight_cell_ai5_widget_pane

0xf388,	// (0x0004040f) ai5_sk_left_pane

0xf392,	// (0x00040419) ai5_sk_middle_pane

0xf39c,	// (0x00040423) ai5_sk_right_pane

0xa3a9,	// (0x0003b430) bg_ai5_widget_pane_g1_ParamLimits

0xa3a9,	// (0x0003b430) bg_ai5_widget_pane_g1

0xa3b5,	// (0x0003b43c) bg_ai5_widget_pane_g2_ParamLimits

0xa3b5,	// (0x0003b43c) bg_ai5_widget_pane_g2

0xa3c1,	// (0x0003b448) bg_ai5_widget_pane_g3_ParamLimits

0xa3c1,	// (0x0003b448) bg_ai5_widget_pane_g3

0xa3cd,	// (0x0003b454) bg_ai5_widget_pane_g4_ParamLimits

0xa3cd,	// (0x0003b454) bg_ai5_widget_pane_g4

0xa3d9,	// (0x0003b460) bg_ai5_widget_pane_g5_ParamLimits

0xa3d9,	// (0x0003b460) bg_ai5_widget_pane_g5

0xa3e5,	// (0x0003b46c) bg_ai5_widget_pane_g6_ParamLimits

0xa3e5,	// (0x0003b46c) bg_ai5_widget_pane_g6

0xa3f1,	// (0x0003b478) bg_ai5_widget_pane_g7_ParamLimits

0xa3f1,	// (0x0003b478) bg_ai5_widget_pane_g7

0xa3fd,	// (0x0003b484) bg_ai5_widget_pane_g8_ParamLimits

0xa3fd,	// (0x0003b484) bg_ai5_widget_pane_g8

0xa409,	// (0x0003b490) bg_ai5_widget_pane_g9_ParamLimits

0xa409,	// (0x0003b490) bg_ai5_widget_pane_g9

0x0008,

0xfe85,	// (0x00040f0c) bg_ai5_widget_pane_g_ParamLimits

0xfe85,	// (0x00040f0c) bg_ai5_widget_pane_g

0xa431,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane_ParamLimits

0xa431,	// (0x0003b4b8) cell_shortcut_ai5_widget_pane

0x075b,	// (0x000317e2) bg_cell_shortcut_ai5_widget_pane

0xa443,	// (0x0003b4ca) cell_grid_ai5_widget_pane_g1

0xa44c,	// (0x0003b4d3) highlight_cell_shortcut_ai5_widget_pane

0x1cf8,	// (0x00032d7f) ai5_sk_left_pane_g1

0xa454,	// (0x0003b4db) ai5_sk_left_pane_g2

0xa45c,	// (0x0003b4e3) ai5_sk_left_pane_g3

0xa464,	// (0x0003b4eb) ai5_sk_left_pane_g4

0x0003,

0xfe98,	// (0x00040f1f) ai5_sk_left_pane_g

0xa46c,	// (0x0003b4f3) ai5_sk_left_pane_t1

0x1d00,	// (0x00032d87) ai5_sk_right_pane_g1

0xa47a,	// (0x0003b501) ai5_sk_right_pane_g2

0xa482,	// (0x0003b509) ai5_sk_right_pane_g3

0xa48a,	// (0x0003b511) ai5_sk_right_pane_g4

0x0003,

0xfea1,	// (0x00040f28) ai5_sk_right_pane_g

0xa492,	// (0x0003b519) ai5_sk_right_pane_t1

0x1d00,	// (0x00032d87) ai5_sk_middle_pane_g1

0x1cf8,	// (0x00032d7f) ai5_sk_middle_pane_g2

0x1d18,	// (0x00032d9f) ai5_sk_middle_pane_g3

0xa482,	// (0x0003b509) ai5_sk_middle_pane_g4

0xa45c,	// (0x0003b4e3) ai5_sk_middle_pane_g5

0xa4a0,	// (0x0003b527) ai5_sk_middle_pane_g6

0xf3a6,	// (0x0004042d) ai5_sk_middle_pane_g7

0x0006,

0xfeaa,	// (0x00040f31) ai5_sk_middle_pane_g

0x75ee,	// (0x00038675) aid_touch_area_size_lc0_ParamLimits

0x75ee,	// (0x00038675) aid_touch_area_size_lc0

0xe3c4,	// (0x0003f44b) cell_hwr_candidate_pane_t1_ParamLimits

0x1b2a,	// (0x00032bb1) aid_touch_navi_pane

0x780c,	// (0x00038893) status_dt_navi_pane_ParamLimits

0x780c,	// (0x00038893) status_dt_navi_pane

0x7819,	// (0x000388a0) status_dt_sta_pane_ParamLimits

0x7819,	// (0x000388a0) status_dt_sta_pane

0xf3ae,	// (0x00040435) dt_sta_controll_pane

0xf3bb,	// (0x00040442) dt_sta_indi_pane

0xf3cc,	// (0x00040453) dt_sta_title_pane

0x0852,	// (0x000318d9) bg_dt_sta_indi_pane_ParamLimits

0x0852,	// (0x000318d9) bg_dt_sta_indi_pane

0xf3df,	// (0x00040466) dt_sta_battery_pane

0xf3e7,	// (0x0004046e) dt_sta_indi_pane_g1

0xa4a8,	// (0x0003b52f) dt_sta_indi_pane_g2

0xa4b1,	// (0x0003b538) dt_sta_indi_pane_g3

0x0002,

0xfeb9,	// (0x00040f40) dt_sta_indi_pane_g

0xa4ba,	// (0x0003b541) dt_sta_signal_pane

0x0d66,	// (0x00031ded) bg_dt_sta_title_pane_ParamLimits

0x0d66,	// (0x00031ded) bg_dt_sta_title_pane

0x2972,	// (0x000339f9) dt_sta_title_pane_g1

0xf3f0,	// (0x00040477) dt_sta_title_pane_t1_ParamLimits

0xf3f0,	// (0x00040477) dt_sta_title_pane_t1

0x06af,	// (0x00031736) bg_dt_sta_control_pane

0xf405,	// (0x0004048c) dt_sta_controll_pane_g1

0xa4c3,	// (0x0003b54a) bg_dt_sta_title_pane_g1

0xa4cc,	// (0x0003b553) bg_dt_sta_title_pane_g2

0xa4d5,	// (0x0003b55c) bg_dt_sta_title_pane_g3

0x0002,

0xfec0,	// (0x00040f47) bg_dt_sta_title_pane_g

0x821e,	// (0x000392a5) bg_dt_sta_indi_pane_g1

0xa4de,	// (0x0003b565) dt_sta_signal_pane_g1

0xa4e6,	// (0x0003b56d) dt_sta_signal_pane_g2

0x0001,

0xfec7,	// (0x00040f4e) dt_sta_signal_pane_g

0xa4ee,	// (0x0003b575) dt_sta_battery_pane_g1

0xa4f7,	// (0x0003b57e) dt_sta_battery_pane_t1

0x821e,	// (0x000392a5) bg_dt_sta_control_pane_g1

0x130b,	// (0x00032392) fep_china_uni_eep_pane

0x1313,	// (0x0003239a) fep_china_uni_entry_pane_ParamLimits

0x1323,	// (0x000323aa) popup_fep_china_uni_window_g1_ParamLimits

0x1333,	// (0x000323ba) popup_fep_china_uni_window_g2_ParamLimits

0x1333,	// (0x000323ba) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x000407e9) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x000407e9) popup_fep_china_uni_window_g

0xa506,	// (0x0003b58d) fep_china_uni_eep_pane_g1

0xa50e,	// (0x0003b595) fep_china_uni_eep_pane_t1

0xa326,	// (0x0003b3ad) aid_touch_area_size_smil_player

0x1bdb,	// (0x00032c62) lc0_clock_pane

0x1c14,	// (0x00032c9b) status_pane_g5_ParamLimits

0x1c14,	// (0x00032c9b) status_pane_g5

0x7250,	// (0x000382d7) popup_keymap_window

0x1bf4,	// (0x00032c7b) status_icon_pane

0xf224,	// (0x000402ab) cell_ai5_widget_pane_g3_ParamLimits

0xf238,	// (0x000402bf) cell_ai5_widget_pane_g4_ParamLimits

0xf244,	// (0x000402cb) cell_ai5_widget_pane_g5_ParamLimits

0xf268,	// (0x000402ef) cell_ai5_widget_pane_g8_ParamLimits

0xf268,	// (0x000402ef) cell_ai5_widget_pane_g8

0xf27c,	// (0x00040303) cell_ai5_widget_pane_g9_ParamLimits

0xf27c,	// (0x00040303) cell_ai5_widget_pane_g9

0xf290,	// (0x00040317) cell_ai5_widget_pane_g10_ParamLimits

0xf290,	// (0x00040317) cell_ai5_widget_pane_g10

0xa51d,	// (0x0003b5a4) status_icon_pane_g1

0x06af,	// (0x00031736) bg_popup_sub_pane_cp13

0xa525,	// (0x0003b5ac) popup_keymap_window_t1

0x712a,	// (0x000381b1) control_pane_g6_ParamLimits

0x712a,	// (0x000381b1) control_pane_g6

0x711d,	// (0x000381a4) control_pane_g7_ParamLimits

0x711d,	// (0x000381a4) control_pane_g7

0x7110,	// (0x00038197) control_pane_g8_ParamLimits

0x7110,	// (0x00038197) control_pane_g8

0xf3ae,	// (0x00040435) dt_sta_controll_pane_ParamLimits

0xf3bb,	// (0x00040442) dt_sta_indi_pane_ParamLimits

0xf3cc,	// (0x00040453) dt_sta_title_pane_ParamLimits

0x0ca8,	// (0x00031d2f) aid_size_touch_scroll_bar_cale

0xd48f,	// (0x0003e516) popup_discreet_window_ParamLimits

0xd48f,	// (0x0003e516) popup_discreet_window

0xd509,	// (0x0003e590) popup_sk_window

0x226c,	// (0x000332f3) bg_popup_sub_pane_cp28_ParamLimits

0x226c,	// (0x000332f3) bg_popup_sub_pane_cp28

0xa533,	// (0x0003b5ba) popup_discreet_window_g1_ParamLimits

0xa533,	// (0x0003b5ba) popup_discreet_window_g1

0xa553,	// (0x0003b5da) popup_discreet_window_t1_ParamLimits

0xa553,	// (0x0003b5da) popup_discreet_window_t1

0xa571,	// (0x0003b5f8) popup_discreet_window_t2_ParamLimits

0xa571,	// (0x0003b5f8) popup_discreet_window_t2

0x0002,

0xfecc,	// (0x00040f53) popup_discreet_window_t_ParamLimits

0xfecc,	// (0x00040f53) popup_discreet_window_t

0xf40e,	// (0x00040495) popup_sk_window_g1

0xf418,	// (0x0004049f) popup_sk_window_g2

0x0001,

0xfed3,	// (0x00040f5a) popup_sk_window_g

0xa5d1,	// (0x0003b658) popup_sk_window_t1

0xa5c3,	// (0x0003b64a) popup_sk_window_t1_copy1

0xf214,	// (0x0004029b) cell_ai5_widget_pane_g2_ParamLimits

0xf33c,	// (0x000403c3) cell_ai5_widget_pane_t9_ParamLimits

0xf33c,	// (0x000403c3) cell_ai5_widget_pane_t9

0x06af,	// (0x00031736) main_fep_fshwr2_pane

0xf422,	// (0x000404a9) aid_fshwr2_btn_pane

0xf42a,	// (0x000404b1) aid_fshwr2_syb_pane

0xf432,	// (0x000404b9) aid_fshwr2_txt_pane

0xf43a,	// (0x000404c1) fshwr2_func_candi_pane

0xf446,	// (0x000404cd) fshwr2_hwr_syb_pane

0xf452,	// (0x000404d9) fshwr2_icf_pane

0x06af,	// (0x00031736) fshwr2_icf_bg_pane

0xf45c,	// (0x000404e3) fshwr2_icf_pane_t1_ParamLimits

0xf45c,	// (0x000404e3) fshwr2_icf_pane_t1

0x821e,	// (0x000392a5) fshwr2_func_candi_pane_g1

0xa5f3,	// (0x0003b67a) fshwr2_func_candi_row_pane_ParamLimits

0xa5f3,	// (0x0003b67a) fshwr2_func_candi_row_pane

0xf473,	// (0x000404fa) cell_fshwr2_syb_pane_ParamLimits

0xf473,	// (0x000404fa) cell_fshwr2_syb_pane

0x84b7,	// (0x0003953e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x84b7,	// (0x0003953e) fshwr2_hwr_syb_pane_g1

0x06af,	// (0x00031736) bg_popup_call_pane_cp01

0xa604,	// (0x0003b68b) fshwr2_func_candi_cell_pane_ParamLimits

0xa604,	// (0x0003b68b) fshwr2_func_candi_cell_pane

0xa635,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa635,	// (0x0003b6bc) fshwr2_func_candi_cell_bg_pane

0xa64f,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa64f,	// (0x0003b6d6) fshwr2_func_candi_cell_pane_g1

0xa66f,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa66f,	// (0x0003b6f6) fshwr2_func_candi_cell_pane_t1

0x06af,	// (0x00031736) bg_button_pane_cp08

0x179c,	// (0x00032823) cell_fshwr2_syb_bg_pane

0xf48f,	// (0x00040516) cell_fshwr2_syb_bg_pane_g1

0xa682,	// (0x0003b709) cell_fshwr2_syb_bg_pane_t1

0x0d66,	// (0x00031ded) main_tmo_pane

0x7b5f,	// (0x00038be6) uni_indicator_pane_g1_ParamLimits

0x7b74,	// (0x00038bfb) uni_indicator_pane_g2_ParamLimits

0x7b8a,	// (0x00038c11) uni_indicator_pane_g3_ParamLimits

0x2c54,	// (0x00033cdb) uni_indicator_pane_g4_ParamLimits

0x2c54,	// (0x00033cdb) uni_indicator_pane_g4

0x2c68,	// (0x00033cef) uni_indicator_pane_g5_ParamLimits

0x2c68,	// (0x00033cef) uni_indicator_pane_g5

0x2c7c,	// (0x00033d03) uni_indicator_pane_g6_ParamLimits

0x2c7c,	// (0x00033d03) uni_indicator_pane_g6

0xf95f,	// (0x000409e6) uni_indicator_pane_g_ParamLimits

0x9751,	// (0x0003a7d8) popup_tmo_note_window_ParamLimits

0x9751,	// (0x0003a7d8) popup_tmo_note_window

0x06af,	// (0x00031736) fshwr2_bg_pane

0xa660,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa660,	// (0x0003b6e7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed8,	// (0x00040f5f) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed8,	// (0x00040f5f) fshwr2_func_candi_cell_pane_g

0x821e,	// (0x000392a5) bg_popup_window_pane_cp01

0xa691,	// (0x0003b718) bg_popup_window_pane_g1_cp01

0xa69a,	// (0x0003b721) bg_popup_window_pane_cp22_ParamLimits

0xa69a,	// (0x0003b721) bg_popup_window_pane_cp22

0xa6a8,	// (0x0003b72f) listscroll_tmo_link_pane_ParamLimits

0xa6a8,	// (0x0003b72f) listscroll_tmo_link_pane

0xa6e8,	// (0x0003b76f) popup_tmo_note_window_g1_ParamLimits

0xa6e8,	// (0x0003b76f) popup_tmo_note_window_g1

0xa6f5,	// (0x0003b77c) tmo_note_info_pane_ParamLimits

0xa6f5,	// (0x0003b77c) tmo_note_info_pane

0xf497,	// (0x0004051e) list_tmo_note_info_pane_g1_ParamLimits

0xf497,	// (0x0004051e) list_tmo_note_info_pane_g1

0xa70f,	// (0x0003b796) list_tmo_note_info_pane_g2_ParamLimits

0xa70f,	// (0x0003b796) list_tmo_note_info_pane_g2

0x0001,

0xfedd,	// (0x00040f64) list_tmo_note_info_pane_g_ParamLimits

0xfedd,	// (0x00040f64) list_tmo_note_info_pane_g

0xa72b,	// (0x0003b7b2) list_tmo_note_info_text_pane_ParamLimits

0xa72b,	// (0x0003b7b2) list_tmo_note_info_text_pane

0xa76d,	// (0x0003b7f4) list_tmo_link_pane

0xa77a,	// (0x0003b801) scroll_pane_cp20

0xa787,	// (0x0003b80e) list_single_tmo_link_pane_ParamLimits

0xa787,	// (0x0003b80e) list_single_tmo_link_pane

0xa797,	// (0x0003b81e) list_single_tmo_link_pane_t1

0xa7a5,	// (0x0003b82c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7a5,	// (0x0003b82c) list_tmo_note_info_text_pane_t1

0x563a,	// (0x000366c1) aid_size_touch_scroll_bar_cp01_ParamLimits

0x563a,	// (0x000366c1) aid_size_touch_scroll_bar_cp01

0x4602,	// (0x00035689) aid_size_touch_slider_marker

0xd4f1,	// (0x0003e578) popup_settings_window_ParamLimits

0xd4f1,	// (0x0003e578) popup_settings_window

0x47a4,	// (0x0003582b) popup_candi_list_indi_window

0x1b2a,	// (0x00032bb1) aid_touch_navi_pane_ParamLimits

0xe582,	// (0x0003f609) rs_clock_indi_pane

0xe58b,	// (0x0003f612) sctrl_sk_bottom_pane_ParamLimits

0xe59c,	// (0x0003f623) sctrl_sk_top_pane_ParamLimits

0xe6a3,	// (0x0003f72a) popup_fep_tooltip_window

0xa360,	// (0x0003b3e7) aid_size_cell_widget_grid_ParamLimits

0xf208,	// (0x0004028f) cell_ai5_widget_pane_g1_ParamLimits

0xf208,	// (0x0004028f) cell_ai5_widget_pane_g1

0xf250,	// (0x000402d7) cell_ai5_widget_pane_g6_ParamLimits

0xf25c,	// (0x000402e3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5b,	// (0x00040ee2) cell_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x00040ee2) cell_ai5_widget_pane_g

0xf360,	// (0x000403e7) cell_ai5_widget_pane_t10_ParamLimits

0xf360,	// (0x000403e7) cell_ai5_widget_pane_t10

0xf372,	// (0x000403f9) grid_ai5_widget_pane_ParamLimits

0xa415,	// (0x0003b49c) cell_contacts_ai5_widget_pane_ParamLimits

0xa415,	// (0x0003b49c) cell_contacts_ai5_widget_pane

0xa586,	// (0x0003b60d) popup_discreet_window_t3_ParamLimits

0xa586,	// (0x0003b60d) popup_discreet_window_t3

0xa5df,	// (0x0003b666) popup_fshwr2_char_preview_window_ParamLimits

0xa5df,	// (0x0003b666) popup_fshwr2_char_preview_window

0xf4ae,	// (0x00040535) tmo_note_info_pane_t1

0xf4c3,	// (0x0004054a) tmo_note_info_pane_t2

0xf4dc,	// (0x00040563) tmo_note_info_pane_t3

0xa749,	// (0x0003b7d0) tmo_note_info_pane_t4

0xa75b,	// (0x0003b7e2) tmo_note_info_pane_t5

0x0004,

0xfee2,	// (0x00040f69) tmo_note_info_pane_t

0xa76d,	// (0x0003b7f4) list_tmo_link_pane_ParamLimits

0xa77a,	// (0x0003b801) scroll_pane_cp20_ParamLimits

0x06af,	// (0x00031736) bg_popup_fep_char_preview_window_cp01

0xa7be,	// (0x0003b845) popup_fshwr2_char_preview_window_t1

0xa7cc,	// (0x0003b853) popup_candi_list_indi_window_g1

0xa7d5,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane

0xa7e1,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1

0xa7f5,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2

0xa804,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeed,	// (0x00040f74) cell_contacts_ai5_widget_pane_g

0xa817,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1

0x0d66,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa891,	// (0x0003b918) settings_container_pane

0x179c,	// (0x00032823) listscroll_set_pane_copy1

0x3459,	// (0x000344e0) scroll_pane_cp121_copy1

0xa89d,	// (0x0003b924) set_content_pane_copy1

0xa8a5,	// (0x0003b92c) aid_height_set_list_copy1_ParamLimits

0xa8a5,	// (0x0003b92c) aid_height_set_list_copy1

0x2c12,	// (0x00033c99) aid_size_parent_copy1_ParamLimits

0x2c12,	// (0x00033c99) aid_size_parent_copy1

0xa8b1,	// (0x0003b938) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa8b1,	// (0x0003b938) button_value_adjust_pane_cp6_copy1

0x19d6,	// (0x00032a5d) list_highlight_pane_cp2_copy1_ParamLimits

0x19d6,	// (0x00032a5d) list_highlight_pane_cp2_copy1

0xa8c5,	// (0x0003b94c) list_set_pane_copy1_ParamLimits

0xa8c5,	// (0x0003b94c) list_set_pane_copy1

0xa82c,	// (0x0003b8b3) main_pane_set_t1_copy1_ParamLimits

0xa82c,	// (0x0003b8b3) main_pane_set_t1_copy1

0xa866,	// (0x0003b8ed) main_pane_set_t2_copy1_ParamLimits

0xa866,	// (0x0003b8ed) main_pane_set_t2_copy1

0xa972,	// (0x0003b9f9) main_pane_set_t3_copy1

0xa980,	// (0x0003ba07) main_pane_set_t4_copy1

0xa885,	// (0x0003b90c) set_content_pane_g1_copy1_ParamLimits

0xa885,	// (0x0003b90c) set_content_pane_g1_copy1

0xa98e,	// (0x0003ba15) setting_code_pane_copy1

0xa998,	// (0x0003ba1f) setting_slider_graphic_pane_copy1

0xa998,	// (0x0003ba1f) setting_slider_pane_copy1

0xa9a2,	// (0x0003ba29) setting_text_pane_copy1

0xa9ac,	// (0x0003ba33) setting_volume_pane_copy1

0xa9b5,	// (0x0003ba3c) settings_code_pane_cp2_copy1

0xa9bd,	// (0x0003ba44) settings_code_pane_cp_copy1_ParamLimits

0xa9bd,	// (0x0003ba44) settings_code_pane_cp_copy1

0xa9d1,	// (0x0003ba58) volume_set_pane_copy1

0xa9d9,	// (0x0003ba60) volume_set_pane_g10_copy1

0xa9e1,	// (0x0003ba68) volume_set_pane_g1_copy1

0xa9e9,	// (0x0003ba70) volume_set_pane_g2_copy1

0xa9f1,	// (0x0003ba78) volume_set_pane_g3_copy1

0xa9f9,	// (0x0003ba80) volume_set_pane_g4_copy1

0xaa01,	// (0x0003ba88) volume_set_pane_g5_copy1

0xaa09,	// (0x0003ba90) volume_set_pane_g6_copy1

0xaa11,	// (0x0003ba98) volume_set_pane_g7_copy1

0xaa19,	// (0x0003baa0) volume_set_pane_g8_copy1

0xaa21,	// (0x0003baa8) volume_set_pane_g9_copy1

0x071f,	// (0x000317a6) bg_set_opt_pane_cp_copy1_ParamLimits

0x071f,	// (0x000317a6) bg_set_opt_pane_cp_copy1

0xaa29,	// (0x0003bab0) setting_slider_pane_t1_copy1_ParamLimits

0xaa29,	// (0x0003bab0) setting_slider_pane_t1_copy1

0xaa47,	// (0x0003bace) setting_slider_pane_t2_copy1_ParamLimits

0xaa47,	// (0x0003bace) setting_slider_pane_t2_copy1

0xaa61,	// (0x0003bae8) setting_slider_pane_t3_copy1_ParamLimits

0xaa61,	// (0x0003bae8) setting_slider_pane_t3_copy1

0xaa79,	// (0x0003bb00) slider_set_pane_copy1_ParamLimits

0xaa79,	// (0x0003bb00) slider_set_pane_copy1

0x0dcd,	// (0x00031e54) set_opt_bg_pane_g1_copy2

0x0dd5,	// (0x00031e5c) set_opt_bg_pane_g2_copy2

0xaa8f,	// (0x0003bb16) set_opt_bg_pane_g3_copy2

0x0de5,	// (0x00031e6c) set_opt_bg_pane_g4_copy2

0x0ded,	// (0x00031e74) set_opt_bg_pane_g5_copy2

0x0df5,	// (0x00031e7c) set_opt_bg_pane_g6_copy2

0xaa99,	// (0x0003bb20) set_opt_bg_pane_g7_copy2

0xaaa1,	// (0x0003bb28) set_opt_bg_pane_g8_copy2

0xaaab,	// (0x0003bb32) set_opt_bg_pane_g9_copy2

0xf4f1,	// (0x00040578) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4f1,	// (0x00040578) aid_size_touch_slider_mark_copy1

0xaab5,	// (0x0003bb3c) slider_set_pane_g1_copy1

0xf505,	// (0x0004058c) slider_set_pane_g2_copy1

0xdf6d,	// (0x0003eff4) slider_set_pane_g3_copy1_ParamLimits

0xdf6d,	// (0x0003eff4) slider_set_pane_g3_copy1

0xdf81,	// (0x0003f008) slider_set_pane_g4_copy1_ParamLimits

0xdf81,	// (0x0003f008) slider_set_pane_g4_copy1

0xdf99,	// (0x0003f020) slider_set_pane_g5_copy1_ParamLimits

0xdf99,	// (0x0003f020) slider_set_pane_g5_copy1

0xdf6d,	// (0x0003eff4) slider_set_pane_g6_copy1_ParamLimits

0xdf6d,	// (0x0003eff4) slider_set_pane_g6_copy1

0xf50d,	// (0x00040594) slider_set_pane_g7_copy1_ParamLimits

0xf50d,	// (0x00040594) slider_set_pane_g7_copy1

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp2_copy1

0xaabe,	// (0x0003bb45) setting_slider_graphic_pane_g1_copy1

0xaac7,	// (0x0003bb4e) setting_slider_graphic_pane_t1_copy1

0xaad7,	// (0x0003bb5e) setting_slider_graphic_pane_t2_copy1

0xaae7,	// (0x0003bb6e) slider_set_pane_cp_copy1

0xaaf7,	// (0x0003bb7e) input_focus_pane_cp1_copy1

0xab00,	// (0x0003bb87) list_set_text_pane_copy1

0xab08,	// (0x0003bb8f) setting_text_pane_g1_copy1

0x4e4d,	// (0x00035ed4) set_text_pane_t1_copy1

0xaaf7,	// (0x0003bb7e) input_focus_pane_cp2_copy1

0xab08,	// (0x0003bb8f) setting_code_pane_g1_copy1

0xab11,	// (0x0003bb98) setting_code_pane_t1_copy1

0xab1f,	// (0x0003bba6) list_set_graphic_pane_copy1

0x06c3,	// (0x0003174a) bg_set_opt_pane_cp4_copy1

0x149e,	// (0x00032525) list_set_graphic_pane_g1_copy1_ParamLimits

0x149e,	// (0x00032525) list_set_graphic_pane_g1_copy1

0xab33,	// (0x0003bbba) list_set_graphic_pane_g2_copy1

0x14b6,	// (0x0003253d) list_set_graphic_pane_t1_copy1_ParamLimits

0x14b6,	// (0x0003253d) list_set_graphic_pane_t1_copy1

0x821e,	// (0x000392a5) rs_clock_indi_pane_g1

0xab3b,	// (0x0003bbc2) rs_clock_indi_pane_t1

0xab49,	// (0x0003bbd0) rs_indi_pane

0xab51,	// (0x0003bbd8) rs_indi_pane_g1

0xab5a,	// (0x0003bbe1) rs_indi_pane_g2

0xab63,	// (0x0003bbea) rs_indi_pane_g3

0x0002,

0xfef4,	// (0x00040f7b) rs_indi_pane_g

0x179c,	// (0x00032823) bg_popup_preview_window_pane_cp03

0xab6c,	// (0x0003bbf3) popup_fep_tooltip_window_t1

0x8ec5,	// (0x00039f4c) popup_note2_window_g2_ParamLimits

0x8ec5,	// (0x00039f4c) popup_note2_window_g2

0x0001,

0xfc99,	// (0x00040d20) popup_note2_window_g_ParamLimits

0xfc99,	// (0x00040d20) popup_note2_window_g

0x93b3,	// (0x0003a43a) bg_popup_sub_pane_cp11_ParamLimits

0x93c0,	// (0x0003a447) cell_ai3_links_pane_g1_ParamLimits

0x93d7,	// (0x0003a45e) cell_ai3_links_pane_t1

0x4e4d,	// (0x00035ed4) set_text_pane_t1_copy1_ParamLimits

0x16ab,	// (0x00032732) cell_graphic_popup_pane_cp2_ParamLimits

0x16ab,	// (0x00032732) cell_graphic_popup_pane_cp2

0xab7a,	// (0x0003bc01) cell_graphic_popup_pane_g1_cp2

0x0abb,	// (0x00031b42) cell_graphic_popup_pane_g2_cp2

0xab82,	// (0x0003bc09) cell_graphic_popup_pane_g3_cp2

0xab8a,	// (0x0003bc11) cell_graphic_popup_pane_t2_cp2

0x0acc,	// (0x00031b53) grid_highlight_pane_cp3_cp2

0x105b,	// (0x000320e2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0d66,	// (0x00031ded) main_tmo_pane_ParamLimits

0x9745,	// (0x0003a7cc) popup_tmo_big_image_note_window

0xf1f8,	// (0x0004027f) cell_ai5_widget_list_pane

0xf200,	// (0x00040287) cell_ai5_widget_lrg_icon_pane

0xf4ae,	// (0x00040535) tmo_note_info_pane_t1_ParamLimits

0xf4c3,	// (0x0004054a) tmo_note_info_pane_t2_ParamLimits

0xf4dc,	// (0x00040563) tmo_note_info_pane_t3_ParamLimits

0xa749,	// (0x0003b7d0) tmo_note_info_pane_t4_ParamLimits

0xa75b,	// (0x0003b7e2) tmo_note_info_pane_t5_ParamLimits

0xfee2,	// (0x00040f69) tmo_note_info_pane_t_ParamLimits

0xa891,	// (0x0003b918) settings_container_pane_ParamLimits

0xaaef,	// (0x0003bb76) indicator_popup_pane_cp5

0xaaef,	// (0x0003bb76) indicator_popup_pane_cp6

0xab1f,	// (0x0003bba6) list_set_graphic_pane_copy1_ParamLimits

0x06af,	// (0x00031736) bg_popup_window_pane_cp23

0xab98,	// (0x0003bc1f) popup_tmo_big_image_note_window_g1

0xaba3,	// (0x0003bc2a) popup_tmo_big_image_note_window_t1

0xabb3,	// (0x0003bc3a) popup_tmo_big_image_note_window_t2

0xabc3,	// (0x0003bc4a) popup_tmo_big_image_note_window_t3

0x0002,

0xfefb,	// (0x00040f82) popup_tmo_big_image_note_window_t

0xf523,	// (0x000405aa) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x000405b2) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x000405c0) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x000405c0) cell_ai5_widget_list_row_pane

0xf552,	// (0x000405d9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x000405d9) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x000405e6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x000405e6) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x000405fe) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x000405fe) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff02,	// (0x00040f89) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff02,	// (0x00040f89) cell_ai5_widget_list_row_pane_t

0xd3b6,	// (0x0003e43d) main_fep_vtchi_ss_pane

0xabd3,	// (0x0003bc5a) popup_fep_char_pre_window

0xabdb,	// (0x0003bc62) popup_fep_ituss_window

0xabe6,	// (0x0003bc6d) popup_fep_vkbss_window

0xabef,	// (0x0003bc76) grid_vkbss_keypad_pane_ParamLimits

0xabef,	// (0x0003bc76) grid_vkbss_keypad_pane

0xabff,	// (0x0003bc86) ituss_keypad_pane

0xac07,	// (0x0003bc8e) aid_vkbss_key_offset_ParamLimits

0xac07,	// (0x0003bc8e) aid_vkbss_key_offset

0xac16,	// (0x0003bc9d) cell_vkbss_key_pane_ParamLimits

0xac16,	// (0x0003bc9d) cell_vkbss_key_pane

0xac2c,	// (0x0003bcb3) bg_cell_vkbss_key_g1_ParamLimits

0xac2c,	// (0x0003bcb3) bg_cell_vkbss_key_g1

0xac38,	// (0x0003bcbf) cell_vkbss_key_3p_pane_ParamLimits

0xac38,	// (0x0003bcbf) cell_vkbss_key_3p_pane

0xac52,	// (0x0003bcd9) cell_vkbss_key_g1_ParamLimits

0xac52,	// (0x0003bcd9) cell_vkbss_key_g1

0xac6c,	// (0x0003bcf3) cell_vkbss_key_t1_ParamLimits

0xac6c,	// (0x0003bcf3) cell_vkbss_key_t1

0xac97,	// (0x0003bd1e) cell_ituss_key_pane_ParamLimits

0xac97,	// (0x0003bd1e) cell_ituss_key_pane

0xaca6,	// (0x0003bd2d) bg_cell_ituss_key_g1_ParamLimits

0xaca6,	// (0x0003bd2d) bg_cell_ituss_key_g1

0xacb2,	// (0x0003bd39) cell_ituss_key_pane_g1_ParamLimits

0xacb2,	// (0x0003bd39) cell_ituss_key_pane_g1

0xacbe,	// (0x0003bd45) cell_ituss_key_pane_g2_ParamLimits

0xacbe,	// (0x0003bd45) cell_ituss_key_pane_g2

0x0001,

0xff07,	// (0x00040f8e) cell_ituss_key_pane_g_ParamLimits

0xff07,	// (0x00040f8e) cell_ituss_key_pane_g

0xacd1,	// (0x0003bd58) cell_ituss_key_t1_ParamLimits

0xacd1,	// (0x0003bd58) cell_ituss_key_t1

0xacef,	// (0x0003bd76) cell_ituss_key_t2_ParamLimits

0xacef,	// (0x0003bd76) cell_ituss_key_t2

0xad0e,	// (0x0003bd95) cell_ituss_key_t3_ParamLimits

0xad0e,	// (0x0003bd95) cell_ituss_key_t3

0xad2d,	// (0x0003bdb4) cell_ituss_key_t4_ParamLimits

0xad2d,	// (0x0003bdb4) cell_ituss_key_t4

0x0003,

0xff0c,	// (0x00040f93) cell_ituss_key_t_ParamLimits

0xff0c,	// (0x00040f93) cell_ituss_key_t

0xad4c,	// (0x0003bdd3) cell_vkbss_key_3p_pane_g1

0xad54,	// (0x0003bddb) cell_vkbss_key_3p_pane_g2

0xad5c,	// (0x0003bde3) cell_vkbss_key_3p_pane_g3

0x0002,

0xff15,	// (0x00040f9c) cell_vkbss_key_3p_pane_g

0x06af,	// (0x00031736) bg_popup_fep_char_preview_window_cp02

0xad64,	// (0x0003bdeb) popup_fep_char_pre_window_t1

0xf1ee,	// (0x00040275) main_ai5_sk_pane

0xa7d5,	// (0x0003b85c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7e1,	// (0x0003b868) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa7f5,	// (0x0003b87c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa804,	// (0x0003b88b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeed,	// (0x00040f74) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa817,	// (0x0003b89e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0d66,	// (0x00031ded) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x00040610) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
