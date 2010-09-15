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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000413c6 };

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
0x5f6c,	// (0x00047332) Screen

0x5f78,	// (0x0004733e) application_window_ParamLimits

0x5f78,	// (0x0004733e) application_window

0x08d5,	// (0x00041c9b) screen_g1

0x5fd4,	// (0x0004739a) area_bottom_pane_ParamLimits

0x5fd4,	// (0x0004739a) area_bottom_pane

0x6094,	// (0x0004745a) area_top_pane_ParamLimits

0x6094,	// (0x0004745a) area_top_pane

0x6128,	// (0x000474ee) main_pane_ParamLimits

0x6128,	// (0x000474ee) main_pane

0x08df,	// (0x00041ca5) misc_graphics

0x9505,	// (0x0004a8cb) battery_pane_ParamLimits

0x9505,	// (0x0004a8cb) battery_pane

0xa1cd,	// (0x0004b593) bg_status_flat_pane_g8

0xa1d5,	// (0x0004b59b) bg_status_flat_pane_g9

0x95cd,	// (0x0004a993) context_pane_ParamLimits

0x95cd,	// (0x0004a993) context_pane

0x96f1,	// (0x0004aab7) navi_pane_ParamLimits

0x96f1,	// (0x0004aab7) navi_pane

0x9781,	// (0x0004ab47) signal_pane_ParamLimits

0x9781,	// (0x0004ab47) signal_pane

0x0008,

0xf859,	// (0x00050c1f) bg_status_flat_pane_g

0x97ee,	// (0x0004abb4) status_pane_g1_ParamLimits

0x97ee,	// (0x0004abb4) status_pane_g1

0x97fa,	// (0x0004abc0) status_pane_g2_ParamLimits

0x97fa,	// (0x0004abc0) status_pane_g2

0x9806,	// (0x0004abcc) status_pane_g3_ParamLimits

0x9806,	// (0x0004abcc) status_pane_g3

0x0004,

0xf780,	// (0x00050b46) status_pane_g_ParamLimits

0xf780,	// (0x00050b46) status_pane_g

0x983a,	// (0x0004ac00) title_pane_ParamLimits

0x983a,	// (0x0004ac00) title_pane

0x9879,	// (0x0004ac3f) uni_indicator_pane_ParamLimits

0x9879,	// (0x0004ac3f) uni_indicator_pane

0x9437,	// (0x0004a7fd) bg_list_pane_ParamLimits

0x9437,	// (0x0004a7fd) bg_list_pane

0x707a,	// (0x00048440) find_pane

0x9457,	// (0x0004a81d) listscroll_app_pane_ParamLimits

0x9457,	// (0x0004a81d) listscroll_app_pane

0x9463,	// (0x0004a829) listscroll_form_pane

0x7082,	// (0x00048448) listscroll_gen_pane_ParamLimits

0x7082,	// (0x00048448) listscroll_gen_pane

0x7096,	// (0x0004845c) listscroll_set_pane

0x6845,	// (0x00047c0b) main_idle_act_pane

0x9130,	// (0x0004a4f6) main_idle_trad_pane

0x9130,	// (0x0004a4f6) main_list_empty_pane

0x9457,	// (0x0004a81d) main_midp_pane

0x947d,	// (0x0004a843) main_pane_g1_ParamLimits

0x947d,	// (0x0004a843) main_pane_g1

0x709e,	// (0x00048464) popup_ai_message_window_ParamLimits

0x709e,	// (0x00048464) popup_ai_message_window

0x7152,	// (0x00048518) popup_fep_china_uni_window_ParamLimits

0x7152,	// (0x00048518) popup_fep_china_uni_window

0x71b2,	// (0x00048578) popup_fep_japan_candidate_window_ParamLimits

0x71b2,	// (0x00048578) popup_fep_japan_candidate_window

0x71dc,	// (0x000485a2) popup_fep_japan_predictive_window_ParamLimits

0x71dc,	// (0x000485a2) popup_fep_japan_predictive_window

0x7212,	// (0x000485d8) popup_find_window

0x721f,	// (0x000485e5) popup_grid_graphic_window_ParamLimits

0x721f,	// (0x000485e5) popup_grid_graphic_window

0x724f,	// (0x00048615) popup_large_graphic_colour_window

0x7275,	// (0x0004863b) popup_menu_window_ParamLimits

0x7275,	// (0x0004863b) popup_menu_window

0x743f,	// (0x00048805) popup_note_image_window

0x7429,	// (0x000487ef) popup_note_wait_window_ParamLimits

0x7429,	// (0x000487ef) popup_note_wait_window

0x7429,	// (0x000487ef) popup_note_window_ParamLimits

0x7429,	// (0x000487ef) popup_note_window

0x74a5,	// (0x0004886b) popup_query_code_window_ParamLimits

0x74a5,	// (0x0004886b) popup_query_code_window

0x74bb,	// (0x00048881) popup_query_data_code_window_ParamLimits

0x74bb,	// (0x00048881) popup_query_data_code_window

0x74de,	// (0x000488a4) popup_query_data_window_ParamLimits

0x74de,	// (0x000488a4) popup_query_data_window

0x7500,	// (0x000488c6) popup_query_sat_info_window_ParamLimits

0x7500,	// (0x000488c6) popup_query_sat_info_window

0x753f,	// (0x00048905) popup_snote_single_graphic_window_ParamLimits

0x753f,	// (0x00048905) popup_snote_single_graphic_window

0x753f,	// (0x00048905) popup_snote_single_text_window_ParamLimits

0x753f,	// (0x00048905) popup_snote_single_text_window

0x7556,	// (0x0004891c) popup_sub_window_general

0x769c,	// (0x00048a62) popup_window_general_ParamLimits

0x769c,	// (0x00048a62) popup_window_general

0x948b,	// (0x0004a851) power_save_pane

0x6f31,	// (0x000482f7) control_pane_g1_ParamLimits

0x6f31,	// (0x000482f7) control_pane_g1

0x6f54,	// (0x0004831a) control_pane_g2_ParamLimits

0x6f54,	// (0x0004831a) control_pane_g2

0x93fa,	// (0x0004a7c0) control_pane_g3_ParamLimits

0x93fa,	// (0x0004a7c0) control_pane_g3

0x0007,

0xf768,	// (0x00050b2e) control_pane_g_ParamLimits

0xf768,	// (0x00050b2e) control_pane_g

0x6f99,	// (0x0004835f) control_pane_t1_ParamLimits

0x6f99,	// (0x0004835f) control_pane_t1

0x6fe1,	// (0x000483a7) control_pane_t2_ParamLimits

0x6fe1,	// (0x000483a7) control_pane_t2

0x0002,

0xf779,	// (0x00050b3f) control_pane_t_ParamLimits

0xf779,	// (0x00050b3f) control_pane_t

0x931f,	// (0x0004a6e5) navi_navi_volume_pane_cp1

0x9327,	// (0x0004a6ed) status_small_icon_pane

0x932f,	// (0x0004a6f5) status_small_pane_g1_ParamLimits

0x932f,	// (0x0004a6f5) status_small_pane_g1

0x9363,	// (0x0004a729) status_small_pane_g2_ParamLimits

0x9363,	// (0x0004a729) status_small_pane_g2

0x936f,	// (0x0004a735) status_small_pane_g3_ParamLimits

0x936f,	// (0x0004a735) status_small_pane_g3

0x937b,	// (0x0004a741) status_small_pane_g4_ParamLimits

0x937b,	// (0x0004a741) status_small_pane_g4

0x9387,	// (0x0004a74d) status_small_pane_g5_ParamLimits

0x9387,	// (0x0004a74d) status_small_pane_g5

0x9395,	// (0x0004a75b) status_small_pane_g6_ParamLimits

0x9395,	// (0x0004a75b) status_small_pane_g6

0x0007,

0xf757,	// (0x00050b1d) status_small_pane_g_ParamLimits

0xf757,	// (0x00050b1d) status_small_pane_g

0x93c4,	// (0x0004a78a) status_small_pane_t1

0x93e6,	// (0x0004a7ac) status_small_wait_pane_ParamLimits

0x93e6,	// (0x0004a7ac) status_small_wait_pane

0x6c0f,	// (0x00047fd5) aid_levels_signal_ParamLimits

0x6c0f,	// (0x00047fd5) aid_levels_signal

0x6c1e,	// (0x00047fe4) signal_pane_g1_ParamLimits

0x6c1e,	// (0x00047fe4) signal_pane_g1

0x6c33,	// (0x00047ff9) signal_pane_g2_ParamLimits

0x6c33,	// (0x00047ff9) signal_pane_g2

0x0003,

0xf6e8,	// (0x00050aae) signal_pane_g_ParamLimits

0xf6e8,	// (0x00050aae) signal_pane_g

0x44c5,	// (0x0004588b) context_pane_g1

0x6387,	// (0x0004774d) title_pane_g1

0x63b9,	// (0x0004777f) title_pane_t1

0x08f5,	// (0x00041cbb) title_pane_t2

0x091b,	// (0x00041ce1) title_pane_t3

0x0002,

0xf532,	// (0x000508f8) title_pane_t

0x9891,	// (0x0004ac57) aid_levels_battery_ParamLimits

0x9891,	// (0x0004ac57) aid_levels_battery

0x98a2,	// (0x0004ac68) battery_pane_g1_ParamLimits

0x98a2,	// (0x0004ac68) battery_pane_g1

0x98b8,	// (0x0004ac7e) battery_pane_g2_ParamLimits

0x98b8,	// (0x0004ac7e) battery_pane_g2

0x0001,

0xf78b,	// (0x00050b51) battery_pane_g_ParamLimits

0xf78b,	// (0x00050b51) battery_pane_g

0xab17,	// (0x0004bedd) uni_indicator_pane_g1

0xab2d,	// (0x0004bef3) uni_indicator_pane_g2

0xab43,	// (0x0004bf09) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x00050cc7) uni_indicator_pane_g

0x8f93,	// (0x0004a359) navi_icon_pane_ParamLimits

0x8f93,	// (0x0004a359) navi_icon_pane

0x8ee6,	// (0x0004a2ac) navi_midp_pane

0x8faf,	// (0x0004a375) navi_navi_pane

0x8fb9,	// (0x0004a37f) navi_text_pane_ParamLimits

0x8fb9,	// (0x0004a37f) navi_text_pane

0x08d5,	// (0x00041c9b) status_small_wait_pane_g1

0x0c3c,	// (0x00042002) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x00050cc2) status_small_wait_pane_g

0xa82a,	// (0x0004bbf0) navi_navi_icon_text_pane

0xa832,	// (0x0004bbf8) navi_navi_pane_g1_ParamLimits

0xa832,	// (0x0004bbf8) navi_navi_pane_g1

0xa844,	// (0x0004bc0a) navi_navi_pane_g2_ParamLimits

0xa844,	// (0x0004bc0a) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00050c90) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00050c90) navi_navi_pane_g

0xa856,	// (0x0004bc1c) navi_navi_tabs_pane

0xa85f,	// (0x0004bc25) navi_navi_text_pane

0xa82a,	// (0x0004bbf0) navi_navi_volume_pane

0xa806,	// (0x0004bbcc) navi_text_pane_t1

0xa7fa,	// (0x0004bbc0) navi_icon_pane_g1

0xa74d,	// (0x0004bb13) navi_navi_text_pane_t1

0x7975,	// (0x00048d3b) navi_navi_volume_pane_g1

0x797d,	// (0x00048d43) volume_small_pane

0xa6b3,	// (0x0004ba79) navi_navi_icon_text_pane_g1

0xa6bb,	// (0x0004ba81) navi_navi_icon_text_pane_t1

0x8faf,	// (0x0004a375) navi_tabs_2_long_pane

0x8faf,	// (0x0004a375) navi_tabs_2_pane

0x8faf,	// (0x0004a375) navi_tabs_3_long_pane

0x8faf,	// (0x0004a375) navi_tabs_3_pane

0x8faf,	// (0x0004a375) navi_tabs_4_pane

0x7955,	// (0x00048d1b) tabs_2_active_pane_ParamLimits

0x7955,	// (0x00048d1b) tabs_2_active_pane

0x7965,	// (0x00048d2b) tabs_2_passive_pane_ParamLimits

0x7965,	// (0x00048d2b) tabs_2_passive_pane

0x7923,	// (0x00048ce9) tabs_3_active_pane_ParamLimits

0x7923,	// (0x00048ce9) tabs_3_active_pane

0x7933,	// (0x00048cf9) tabs_3_passive_pane_ParamLimits

0x7933,	// (0x00048cf9) tabs_3_passive_pane

0x7944,	// (0x00048d0a) tabs_3_passive_pane_cp_ParamLimits

0x7944,	// (0x00048d0a) tabs_3_passive_pane_cp

0x78d7,	// (0x00048c9d) tabs_4_active_pane_ParamLimits

0x78d7,	// (0x00048c9d) tabs_4_active_pane

0x78ea,	// (0x00048cb0) tabs_4_passive_pane_ParamLimits

0x78ea,	// (0x00048cb0) tabs_4_passive_pane

0x78fb,	// (0x00048cc1) tabs_4_passive_pane_cp_ParamLimits

0x78fb,	// (0x00048cc1) tabs_4_passive_pane_cp

0x790c,	// (0x00048cd2) tabs_4_passive_pane_cp2_ParamLimits

0x790c,	// (0x00048cd2) tabs_4_passive_pane_cp2

0x78b3,	// (0x00048c79) tabs_2_long_active_pane_ParamLimits

0x78b3,	// (0x00048c79) tabs_2_long_active_pane

0x78c5,	// (0x00048c8b) tabs_2_long_passive_pane_ParamLimits

0x78c5,	// (0x00048c8b) tabs_2_long_passive_pane

0x7874,	// (0x00048c3a) tabs_3_long_active_pane_ParamLimits

0x7874,	// (0x00048c3a) tabs_3_long_active_pane

0x7887,	// (0x00048c4d) tabs_3_long_passive_pane_ParamLimits

0x7887,	// (0x00048c4d) tabs_3_long_passive_pane

0x78a0,	// (0x00048c66) tabs_3_long_passive_pane_cp_ParamLimits

0x78a0,	// (0x00048c66) tabs_3_long_passive_pane_cp

0x781a,	// (0x00048be0) volume_small_pane_g1

0x7823,	// (0x00048be9) volume_small_pane_g2

0x782c,	// (0x00048bf2) volume_small_pane_g3

0x7835,	// (0x00048bfb) volume_small_pane_g4

0x783e,	// (0x00048c04) volume_small_pane_g5

0x7847,	// (0x00048c0d) volume_small_pane_g6

0x7850,	// (0x00048c16) volume_small_pane_g7

0x7859,	// (0x00048c1f) volume_small_pane_g8

0x7862,	// (0x00048c28) volume_small_pane_g9

0x786b,	// (0x00048c31) volume_small_pane_g10

0x0009,

0xf896,	// (0x00050c5c) volume_small_pane_g

0x093b,	// (0x00041d01) bg_active_tab_pane_cp2_ParamLimits

0x093b,	// (0x00041d01) bg_active_tab_pane_cp2

0x6421,	// (0x000477e7) tabs_3_active_pane_g1

0x6429,	// (0x000477ef) tabs_3_active_pane_t1

0x093b,	// (0x00041d01) bg_passive_tab_pane_cp2_ParamLimits

0x093b,	// (0x00041d01) bg_passive_tab_pane_cp2

0x6421,	// (0x000477e7) tabs_3_passive_pane_g1

0x6429,	// (0x000477ef) tabs_3_passive_pane_t1

0x093b,	// (0x00041d01) bg_active_tab_pane_cp3_ParamLimits

0x093b,	// (0x00041d01) bg_active_tab_pane_cp3

0x643b,	// (0x00047801) tabs_4_active_pane_g1

0x6443,	// (0x00047809) tabs_4_active_pane_t1

0x093b,	// (0x00041d01) bg_passive_tab_pane_cp3_ParamLimits

0x093b,	// (0x00041d01) bg_passive_tab_pane_cp3

0x643b,	// (0x00047801) tabs_4_1_passive_pane_g1

0x6443,	// (0x00047809) tabs_4_1_passive_pane_t1

0x9457,	// (0x0004a81d) list_highlight_pane_cp2

0xad90,	// (0x0004c156) list_set_pane_ParamLimits

0xad90,	// (0x0004c156) list_set_pane

0xae52,	// (0x0004c218) main_pane_set_t1_ParamLimits

0xae52,	// (0x0004c218) main_pane_set_t1

0xae72,	// (0x0004c238) main_pane_set_t2_ParamLimits

0xae72,	// (0x0004c238) main_pane_set_t2

0xae86,	// (0x0004c24c) main_pane_set_t3_ParamLimits

0xae86,	// (0x0004c24c) main_pane_set_t3

0xae9a,	// (0x0004c260) main_pane_set_t4_ParamLimits

0xae9a,	// (0x0004c260) main_pane_set_t4

0x0003,

0xf966,	// (0x00050d2c) main_pane_set_t_ParamLimits

0xf966,	// (0x00050d2c) main_pane_set_t

0xaeae,	// (0x0004c274) setting_code_pane

0xaeb8,	// (0x0004c27e) setting_slider_graphic_pane

0xaeb8,	// (0x0004c27e) setting_slider_pane

0xaeb8,	// (0x0004c27e) setting_text_pane

0xaeb8,	// (0x0004c27e) setting_volume_pane

0x6455,	// (0x0004781b) volume_set_pane

0x093b,	// (0x00041d01) bg_set_opt_pane_cp

0x645f,	// (0x00047825) setting_slider_pane_t1

0x6478,	// (0x0004783e) setting_slider_pane_t2

0x6492,	// (0x00047858) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000508ff) setting_slider_pane_t

0x64aa,	// (0x00047870) slider_set_pane

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp2

0x0949,	// (0x00041d0f) setting_slider_graphic_pane_g1

0x64c0,	// (0x00047886) setting_slider_graphic_pane_t1

0x64d0,	// (0x00047896) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00050906) setting_slider_graphic_pane_t

0x64e0,	// (0x000478a6) slider_set_pane_cp

0x08df,	// (0x00041ca5) input_focus_pane_cp1

0xad51,	// (0x0004c117) list_set_text_pane

0x08d5,	// (0x00041c9b) setting_text_pane_g1

0x08df,	// (0x00041ca5) input_focus_pane_cp2

0x08d5,	// (0x00041c9b) setting_code_pane_g1

0x0952,	// (0x00041d18) setting_code_pane_t1

0x5086,	// (0x0004644c) set_text_pane_t1_ParamLimits

0x5086,	// (0x0004644c) set_text_pane_t1

0x0fd5,	// (0x0004239b) set_opt_bg_pane_g1

0x0fdd,	// (0x000423a3) set_opt_bg_pane_g2

0xad29,	// (0x0004c0ef) set_opt_bg_pane_g3

0x0fed,	// (0x000423b3) set_opt_bg_pane_g4

0x0ff5,	// (0x000423bb) set_opt_bg_pane_g5

0x0ffd,	// (0x000423c3) set_opt_bg_pane_g6

0xad33,	// (0x0004c0f9) set_opt_bg_pane_g7

0xad3d,	// (0x0004c103) set_opt_bg_pane_g8

0xad47,	// (0x0004c10d) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00050d19) set_opt_bg_pane_g

0xad1c,	// (0x0004c0e2) slider_set_pane_g1

0x79fe,	// (0x00048dc4) slider_set_pane_g2

0x0006,

0xf944,	// (0x00050d0a) slider_set_pane_g

0x7986,	// (0x00048d4c) volume_set_pane_g1

0x7990,	// (0x00048d56) volume_set_pane_g2

0x799a,	// (0x00048d60) volume_set_pane_g3

0x79a4,	// (0x00048d6a) volume_set_pane_g4

0x79ae,	// (0x00048d74) volume_set_pane_g5

0x79b8,	// (0x00048d7e) volume_set_pane_g6

0x79c2,	// (0x00048d88) volume_set_pane_g7

0x79cc,	// (0x00048d92) volume_set_pane_g8

0x79d6,	// (0x00048d9c) volume_set_pane_g9

0x79e0,	// (0x00048da6) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00050ce2) volume_set_pane_g

0x64e8,	// (0x000478ae) indicator_pane_ParamLimits

0x64e8,	// (0x000478ae) indicator_pane

0x64f4,	// (0x000478ba) main_idle_pane_g2_ParamLimits

0x64f4,	// (0x000478ba) main_idle_pane_g2

0x651c,	// (0x000478e2) main_pane_idle_g1_ParamLimits

0x651c,	// (0x000478e2) main_pane_idle_g1

0x0960,	// (0x00041d26) popup_clock_digital_analogue_window_ParamLimits

0x0960,	// (0x00041d26) popup_clock_digital_analogue_window

0x652a,	// (0x000478f0) soft_indicator_pane_ParamLimits

0x652a,	// (0x000478f0) soft_indicator_pane

0x6538,	// (0x000478fe) wallpaper_pane_ParamLimits

0x6538,	// (0x000478fe) wallpaper_pane

0x08d5,	// (0x00041c9b) wallpaper_pane_g1

0x6544,	// (0x0004790a) indicator_pane_g1_ParamLimits

0x6544,	// (0x0004790a) indicator_pane_g1

0xb17b,	// (0x0004c541) navi_navi_icon_text_pane_srt_g1

0x098e,	// (0x00041d54) soft_indicator_pane_t1

0x09a8,	// (0x00041d6e) aid_ps_area_pane

0x6550,	// (0x00047916) aid_ps_clock_pane

0x09b9,	// (0x00041d7f) aid_ps_indicator_pane

0x09c5,	// (0x00041d8b) indicator_ps_pane_ParamLimits

0x09c5,	// (0x00041d8b) indicator_ps_pane

0x09d4,	// (0x00041d9a) power_save_pane_g1_ParamLimits

0x09d4,	// (0x00041d9a) power_save_pane_g1

0x09e0,	// (0x00041da6) power_save_pane_g2_ParamLimits

0x09e0,	// (0x00041da6) power_save_pane_g2

0x5f88,	// (0x0004734e) aid_navinavi_width_pane

0x09a8,	// (0x00041d6e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005090b) power_save_pane_g_ParamLimits

0xf545,	// (0x0005090b) power_save_pane_g

0x09ee,	// (0x00041db4) power_save_pane_t1_ParamLimits

0x09ee,	// (0x00041db4) power_save_pane_t1

0x6550,	// (0x00047916) aid_ps_clock_pane_ParamLimits

0x09b9,	// (0x00041d7f) aid_ps_indicator_pane_ParamLimits

0x0a00,	// (0x00041dc6) power_save_pane_t4_ParamLimits

0x0a00,	// (0x00041dc6) power_save_pane_t4

0x0001,

0xf54a,	// (0x00050910) power_save_pane_t_ParamLimits

0xf54a,	// (0x00050910) power_save_pane_t

0x0a2a,	// (0x00041df0) power_save_t3_ParamLimits

0x0a2a,	// (0x00041df0) power_save_t3

0x0a15,	// (0x00041ddb) power_save_t2_ParamLimits

0x0a15,	// (0x00041ddb) power_save_t2

0x0a3f,	// (0x00041e05) indicator_ps_pane_g1

0x655e,	// (0x00047924) ai_gene_pane_ParamLimits

0x655e,	// (0x00047924) ai_gene_pane

0x656a,	// (0x00047930) ai_links_pane_ParamLimits

0x656a,	// (0x00047930) ai_links_pane

0x6576,	// (0x0004793c) indicator_pane_cp1_ParamLimits

0x6576,	// (0x0004793c) indicator_pane_cp1

0x6582,	// (0x00047948) main_pane_idle_g1_cp_ParamLimits

0x6582,	// (0x00047948) main_pane_idle_g1_cp

0x0a48,	// (0x00041e0e) popup_ai_links_title_window

0x658e,	// (0x00047954) soft_indicator_pane_cp1_ParamLimits

0x658e,	// (0x00047954) soft_indicator_pane_cp1

0xab05,	// (0x0004becb) ai_links_pane_g1

0xab0e,	// (0x0004bed4) grid_ai_links_pane

0xaaea,	// (0x0004beb0) ai_gene_pane_1

0xaaf3,	// (0x0004beb9) ai_gene_pane_2

0xaafc,	// (0x0004bec2) list_highlight_pane_cp4

0xaaca,	// (0x0004be90) cell_ai_link_pane_ParamLimits

0xaaca,	// (0x0004be90) cell_ai_link_pane

0xaac2,	// (0x0004be88) cell_ai_link_pane_g1

0x0c3c,	// (0x00042002) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x00050cbd) cell_ai_link_pane_g

0x08df,	// (0x00041ca5) grid_highlight_cp2

0x08df,	// (0x00041ca5) bg_popup_sub_pane_cp1

0x0a5f,	// (0x00041e25) popup_ai_links_title_window_t1

0xaa0e,	// (0x0004bdd4) ai_gene_pane_1_g1_ParamLimits

0xaa0e,	// (0x0004bdd4) ai_gene_pane_1_g1

0xaa1a,	// (0x0004bde0) ai_gene_pane_1_g2_ParamLimits

0xaa1a,	// (0x0004bde0) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x00050cb3) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x00050cb3) ai_gene_pane_1_g

0xaa27,	// (0x0004bded) ai_gene_pane_1_t1_ParamLimits

0xaa27,	// (0x0004bded) ai_gene_pane_1_t1

0xaa5b,	// (0x0004be21) grid_ai_soft_ind_pane

0xa9f9,	// (0x0004bdbf) ai_gene_pane_2_t1_ParamLimits

0xa9f9,	// (0x0004bdbf) ai_gene_pane_2_t1

0x659a,	// (0x00047960) main_pane_empty_t1_ParamLimits

0x659a,	// (0x00047960) main_pane_empty_t1

0x65b2,	// (0x00047978) main_pane_empty_t2_ParamLimits

0x65b2,	// (0x00047978) main_pane_empty_t2

0x65c7,	// (0x0004798d) main_pane_empty_t3_ParamLimits

0x65c7,	// (0x0004798d) main_pane_empty_t3

0x65d9,	// (0x0004799f) main_pane_empty_t4_ParamLimits

0x65d9,	// (0x0004799f) main_pane_empty_t4

0x65eb,	// (0x000479b1) main_pane_empty_t5_ParamLimits

0x65eb,	// (0x000479b1) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00050915) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00050915) main_pane_empty_t

0x1064,	// (0x0004242a) bg_popup_window_pane_ParamLimits

0x1064,	// (0x0004242a) bg_popup_window_pane

0xa75b,	// (0x0004bb21) find_popup_pane_cp2_ParamLimits

0xa75b,	// (0x0004bb21) find_popup_pane_cp2

0xa767,	// (0x0004bb2d) heading_pane_ParamLimits

0xa767,	// (0x0004bb2d) heading_pane

0x08df,	// (0x00041ca5) bg_popup_sub_pane

0xa6d5,	// (0x0004ba9b) bg_popup_window_pane_g1_ParamLimits

0xa6d5,	// (0x0004ba9b) bg_popup_window_pane_g1

0xa6e1,	// (0x0004baa7) bg_popup_window_pane_g2_ParamLimits

0xa6e1,	// (0x0004baa7) bg_popup_window_pane_g2

0xa6ed,	// (0x0004bab3) bg_popup_window_pane_g3_ParamLimits

0xa6ed,	// (0x0004bab3) bg_popup_window_pane_g3

0xa6f9,	// (0x0004babf) bg_popup_window_pane_g4_ParamLimits

0xa6f9,	// (0x0004babf) bg_popup_window_pane_g4

0xa705,	// (0x0004bacb) bg_popup_window_pane_g5_ParamLimits

0xa705,	// (0x0004bacb) bg_popup_window_pane_g5

0xa711,	// (0x0004bad7) bg_popup_window_pane_g6_ParamLimits

0xa711,	// (0x0004bad7) bg_popup_window_pane_g6

0xa71d,	// (0x0004bae3) bg_popup_window_pane_g7_ParamLimits

0xa71d,	// (0x0004bae3) bg_popup_window_pane_g7

0xa729,	// (0x0004baef) bg_popup_window_pane_g8_ParamLimits

0xa729,	// (0x0004baef) bg_popup_window_pane_g8

0xa735,	// (0x0004bafb) bg_popup_window_pane_g9_ParamLimits

0xa735,	// (0x0004bafb) bg_popup_window_pane_g9

0xa741,	// (0x0004bb07) bg_popup_window_pane_g10_ParamLimits

0xa741,	// (0x0004bb07) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x00050c7b) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x00050c7b) bg_popup_window_pane_g

0xa66a,	// (0x0004ba30) bg_popup_heading_pane_ParamLimits

0xa66a,	// (0x0004ba30) bg_popup_heading_pane

0x7ae1,	// (0x00048ea7) tabs_4_passive_pane_cp_srt_ParamLimits

0x7ae1,	// (0x00048ea7) tabs_4_passive_pane_cp_srt

0x7af3,	// (0x00048eb9) tabs_4_passive_pane_srt_ParamLimits

0xa67e,	// (0x0004ba44) heading_pane_g2

0x7af3,	// (0x00048eb9) tabs_4_passive_pane_srt

0x9457,	// (0x0004a81d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9457,	// (0x0004a81d) bg_passive_tab_pane_cp3_srt

0xa686,	// (0x0004ba4c) heading_pane_t1_ParamLimits

0xa686,	// (0x0004ba4c) heading_pane_t1

0xa69d,	// (0x0004ba63) heading_pane_t2_ParamLimits

0xa69d,	// (0x0004ba63) heading_pane_t2

0x0001,

0xf8b0,	// (0x00050c76) heading_pane_t_ParamLimits

0xf8b0,	// (0x00050c76) heading_pane_t

0xa195,	// (0x0004b55b) bg_popup_heading_pane_g1

0xa244,	// (0x0004b60a) bg_popup_heading_pane_g2

0xa24e,	// (0x0004b614) bg_popup_heading_pane_g3

0xa258,	// (0x0004b61e) bg_popup_heading_pane_g4

0xa262,	// (0x0004b628) bg_popup_heading_pane_g5

0xa26c,	// (0x0004b632) bg_popup_heading_pane_g6

0xa274,	// (0x0004b63a) bg_popup_heading_pane_g7

0xa27c,	// (0x0004b642) bg_popup_heading_pane_g8

0xa286,	// (0x0004b64c) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00050c32) bg_popup_heading_pane_g

0x998d,	// (0x0004ad53) bg_popup_sub_pane_g1

0x9995,	// (0x0004ad5b) bg_popup_sub_pane_g2

0x999d,	// (0x0004ad63) bg_popup_sub_pane_g3

0x99a5,	// (0x0004ad6b) bg_popup_sub_pane_g4

0x99ad,	// (0x0004ad73) bg_popup_sub_pane_g5

0x99b5,	// (0x0004ad7b) bg_popup_sub_pane_g6

0x99bd,	// (0x0004ad83) bg_popup_sub_pane_g7

0x99c5,	// (0x0004ad8b) bg_popup_sub_pane_g8

0x99cd,	// (0x0004ad93) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00050c0c) bg_popup_sub_pane_g

0x092d,	// (0x00041cf3) bg_popup_window_pane_cp5_ParamLimits

0x092d,	// (0x00041cf3) bg_popup_window_pane_cp5

0x0a7c,	// (0x00041e42) popup_note_window_g1_ParamLimits

0x0a7c,	// (0x00041e42) popup_note_window_g1

0x0a88,	// (0x00041e4e) popup_note_window_t1_ParamLimits

0x0a88,	// (0x00041e4e) popup_note_window_t1

0x0a9e,	// (0x00041e64) popup_note_window_t2_ParamLimits

0x0a9e,	// (0x00041e64) popup_note_window_t2

0x0ab4,	// (0x00041e7a) popup_note_window_t3_ParamLimits

0x0ab4,	// (0x00041e7a) popup_note_window_t3

0x0aca,	// (0x00041e90) popup_note_window_t4_ParamLimits

0x0aca,	// (0x00041e90) popup_note_window_t4

0x0af2,	// (0x00041eb8) popup_note_window_t5_ParamLimits

0x0af2,	// (0x00041eb8) popup_note_window_t5

0x0004,

0xf55a,	// (0x00050920) popup_note_window_t_ParamLimits

0xf55a,	// (0x00050920) popup_note_window_t

0x0b3c,	// (0x00041f02) bg_popup_window_pane_cp6_ParamLimits

0x0b3c,	// (0x00041f02) bg_popup_window_pane_cp6

0xa111,	// (0x0004b4d7) popup_note_image_window_g1_ParamLimits

0xa111,	// (0x0004b4d7) popup_note_image_window_g1

0xa11d,	// (0x0004b4e3) popup_note_image_window_g2_ParamLimits

0xa11d,	// (0x0004b4e3) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00050c00) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00050c00) popup_note_image_window_g

0xa136,	// (0x0004b4fc) popup_note_image_window_t1_ParamLimits

0xa136,	// (0x0004b4fc) popup_note_image_window_t1

0xa14f,	// (0x0004b515) popup_note_image_window_t2_ParamLimits

0xa14f,	// (0x0004b515) popup_note_image_window_t2

0xa168,	// (0x0004b52e) popup_note_image_window_t3_ParamLimits

0xa168,	// (0x0004b52e) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x00050c05) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x00050c05) popup_note_image_window_t

0x9fd1,	// (0x0004b397) bg_popup_window_pane_cp7_ParamLimits

0x9fd1,	// (0x0004b397) bg_popup_window_pane_cp7

0xa001,	// (0x0004b3c7) popup_note_wait_window_g1_ParamLimits

0xa001,	// (0x0004b3c7) popup_note_wait_window_g1

0xa00d,	// (0x0004b3d3) popup_note_wait_window_g2_ParamLimits

0xa00d,	// (0x0004b3d3) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00050bee) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00050bee) popup_note_wait_window_g

0xa025,	// (0x0004b3eb) popup_note_wait_window_t1_ParamLimits

0xa025,	// (0x0004b3eb) popup_note_wait_window_t1

0xa04c,	// (0x0004b412) popup_note_wait_window_t2_ParamLimits

0xa04c,	// (0x0004b412) popup_note_wait_window_t2

0xa06a,	// (0x0004b430) popup_note_wait_window_t3_ParamLimits

0xa06a,	// (0x0004b430) popup_note_wait_window_t3

0xa07d,	// (0x0004b443) popup_note_wait_window_t4_ParamLimits

0xa07d,	// (0x0004b443) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x00050bf5) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x00050bf5) popup_note_wait_window_t

0xa0a2,	// (0x0004b468) wait_bar_pane_ParamLimits

0xa0a2,	// (0x0004b468) wait_bar_pane

0x08df,	// (0x00041ca5) wait_anim_pane

0x08df,	// (0x00041ca5) wait_border_pane

0x08d5,	// (0x00041c9b) wait_anim_pane_g1

0x08d5,	// (0x00041c9b) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00050aa9) wait_anim_pane_g

0x9f75,	// (0x0004b33b) wait_border_pane_g1

0x9f80,	// (0x0004b346) wait_border_pane_g2

0x9f89,	// (0x0004b34f) wait_border_pane_g3

0x0002,

0xf821,	// (0x00050be7) wait_border_pane_g

0x9ddf,	// (0x0004b1a5) bg_popup_window_pane_cp16_ParamLimits

0x9ddf,	// (0x0004b1a5) bg_popup_window_pane_cp16

0x9edf,	// (0x0004b2a5) indicator_popup_pane_cp4_ParamLimits

0x9edf,	// (0x0004b2a5) indicator_popup_pane_cp4

0x9ef3,	// (0x0004b2b9) popup_query_data_window_t1_ParamLimits

0x9ef3,	// (0x0004b2b9) popup_query_data_window_t1

0x9f05,	// (0x0004b2cb) popup_query_data_window_t2_ParamLimits

0x9f05,	// (0x0004b2cb) popup_query_data_window_t2

0x9f1e,	// (0x0004b2e4) popup_query_data_window_t3_ParamLimits

0x9f1e,	// (0x0004b2e4) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00050be0) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00050be0) popup_query_data_window_t

0x9f38,	// (0x0004b2fe) query_popup_data_pane_ParamLimits

0x9f38,	// (0x0004b2fe) query_popup_data_pane

0x9f4c,	// (0x0004b312) query_popup_data_pane_cp1_ParamLimits

0x9f4c,	// (0x0004b312) query_popup_data_pane_cp1

0x9ddf,	// (0x0004b1a5) bg_popup_window_pane_cp10_ParamLimits

0x9ddf,	// (0x0004b1a5) bg_popup_window_pane_cp10

0x9e11,	// (0x0004b1d7) indicator_popup_pane_ParamLimits

0x9e11,	// (0x0004b1d7) indicator_popup_pane

0x9e33,	// (0x0004b1f9) popup_query_code_window_t1_ParamLimits

0x9e33,	// (0x0004b1f9) popup_query_code_window_t1

0x9e4d,	// (0x0004b213) popup_query_code_window_t2_ParamLimits

0x9e4d,	// (0x0004b213) popup_query_code_window_t2

0x9e96,	// (0x0004b25c) popup_query_code_window_t3_ParamLimits

0x9e96,	// (0x0004b25c) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00050bd9) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00050bd9) popup_query_code_window_t

0x9ec5,	// (0x0004b28b) query_popup_pane_ParamLimits

0x9ec5,	// (0x0004b28b) query_popup_pane

0x0b3c,	// (0x00041f02) bg_popup_window_pane_cp15_ParamLimits

0x0b3c,	// (0x00041f02) bg_popup_window_pane_cp15

0x0b5c,	// (0x00041f22) indicator_popup_pane_cp1_ParamLimits

0x0b5c,	// (0x00041f22) indicator_popup_pane_cp1

0x0b6f,	// (0x00041f35) indicator_popup_pane_cp2_ParamLimits

0x0b6f,	// (0x00041f35) indicator_popup_pane_cp2

0x0b8a,	// (0x00041f50) popup_query_data_code_window_g1_ParamLimits

0x0b8a,	// (0x00041f50) popup_query_data_code_window_g1

0x0b9d,	// (0x00041f63) popup_query_data_code_window_t1_ParamLimits

0x0b9d,	// (0x00041f63) popup_query_data_code_window_t1

0x0baf,	// (0x00041f75) popup_query_data_code_window_t2_ParamLimits

0x0baf,	// (0x00041f75) popup_query_data_code_window_t2

0x0bc1,	// (0x00041f87) popup_query_data_code_window_t3_ParamLimits

0x0bc1,	// (0x00041f87) popup_query_data_code_window_t3

0x0bd7,	// (0x00041f9d) popup_query_data_code_window_t4_ParamLimits

0x0bd7,	// (0x00041f9d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005092b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005092b) popup_query_data_code_window_t

0x8f4f,	// (0x0004a315) list_single_midp_graphic_pane_g3

0x0bf1,	// (0x00041fb7) query_popup_data_pane_cp2_ParamLimits

0x0c04,	// (0x00041fca) query_popup_pane_cp2_ParamLimits

0x0c04,	// (0x00041fca) query_popup_pane_cp2

0x08df,	// (0x00041ca5) bg_popup_window_pane_cp11

0x9dc3,	// (0x0004b189) heading_pane_cp5

0x9dcb,	// (0x0004b191) listscroll_popup_info_pane

0x08df,	// (0x00041ca5) input_focus_pane_cp3

0x0c1f,	// (0x00041fe5) query_popup_pane_t1

0x0c2d,	// (0x00041ff3) list_popup_info_pane_ParamLimits

0x0c2d,	// (0x00041ff3) list_popup_info_pane

0x0c3c,	// (0x00042002) listscroll_popup_info_pane_g1

0x0c44,	// (0x0004200a) scroll_pane_cp7

0x0c4e,	// (0x00042014) popup_info_list_pane_t1_ParamLimits

0x0c4e,	// (0x00042014) popup_info_list_pane_t1

0x0c68,	// (0x0004202e) popup_info_list_pane_t2_ParamLimits

0x0c68,	// (0x0004202e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00050934) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00050934) popup_info_list_pane_t

0x08df,	// (0x00041ca5) bg_popup_window_pane_cp12

0xb195,	// (0x0004c55b) find_popup_pane

0x093b,	// (0x00041d01) bg_popup_window_pane_cp3

0x0c82,	// (0x00042048) heading_pane_cp3

0x0c91,	// (0x00042057) listscroll_popup_graphic_pane

0x08df,	// (0x00041ca5) bg_popup_window_pane_cp4

0x664d,	// (0x00047a13) heading_pane_cp4

0x0ca1,	// (0x00042067) listscroll_popup_colour_pane

0x6657,	// (0x00047a1d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6657,	// (0x00047a1d) cell_large_graphic_colour_none_popup_pane

0x666b,	// (0x00047a31) grid_large_graphic_colour_popup_pane_ParamLimits

0x666b,	// (0x00047a31) grid_large_graphic_colour_popup_pane

0x6697,	// (0x00047a5d) listscroll_popup_colour_pane_g1_ParamLimits

0x6697,	// (0x00047a5d) listscroll_popup_colour_pane_g1

0x66ae,	// (0x00047a74) listscroll_popup_colour_pane_g2_ParamLimits

0x66ae,	// (0x00047a74) listscroll_popup_colour_pane_g2

0x66c5,	// (0x00047a8b) listscroll_popup_colour_pane_g3_ParamLimits

0x66c5,	// (0x00047a8b) listscroll_popup_colour_pane_g3

0x66d5,	// (0x00047a9b) listscroll_popup_colour_pane_g4_ParamLimits

0x66d5,	// (0x00047a9b) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00050939) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00050939) listscroll_popup_colour_pane_g

0x0ca9,	// (0x0004206f) scroll_pane_cp6_ParamLimits

0x0ca9,	// (0x0004206f) scroll_pane_cp6

0x66e9,	// (0x00047aaf) cell_large_graphic_colour_popup_pane_ParamLimits

0x66e9,	// (0x00047aaf) cell_large_graphic_colour_popup_pane

0x0cbb,	// (0x00042081) cell_large_graphic_colour_none_popup_pane_t1

0x08df,	// (0x00041ca5) grid_highlight_pane_cp5

0x0cca,	// (0x00042090) cell_large_graphic_colour_popup_pane_g1

0x0cd2,	// (0x00042098) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00050942) cell_large_graphic_colour_popup_pane_g

0x0cda,	// (0x000420a0) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ce3,	// (0x000420a9) grid_highlight_pane_cp4

0x0ceb,	// (0x000420b1) bg_popup_window_pane_cp8_ParamLimits

0x0ceb,	// (0x000420b1) bg_popup_window_pane_cp8

0x0d06,	// (0x000420cc) popup_snote_single_text_window_g1_ParamLimits

0x0d06,	// (0x000420cc) popup_snote_single_text_window_g1

0x0d18,	// (0x000420de) popup_snote_single_text_window_t1_ParamLimits

0x0d18,	// (0x000420de) popup_snote_single_text_window_t1

0x0d2b,	// (0x000420f1) popup_snote_single_text_window_t2_ParamLimits

0x0d2b,	// (0x000420f1) popup_snote_single_text_window_t2

0x0d3e,	// (0x00042104) popup_snote_single_text_window_t3_ParamLimits

0x0d3e,	// (0x00042104) popup_snote_single_text_window_t3

0x0d77,	// (0x0004213d) popup_snote_single_text_window_t4_ParamLimits

0x0d77,	// (0x0004213d) popup_snote_single_text_window_t4

0x0dab,	// (0x00042171) popup_snote_single_text_window_t5_ParamLimits

0x0dab,	// (0x00042171) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00050947) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00050947) popup_snote_single_text_window_t

0x0dda,	// (0x000421a0) bg_popup_window_pane_cp9_ParamLimits

0x0dda,	// (0x000421a0) bg_popup_window_pane_cp9

0x0d06,	// (0x000420cc) popup_snote_single_graphic_window_g1_ParamLimits

0x0d06,	// (0x000420cc) popup_snote_single_graphic_window_g1

0x0de8,	// (0x000421ae) popup_snote_single_graphic_window_g2_ParamLimits

0x0de8,	// (0x000421ae) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00050952) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00050952) popup_snote_single_graphic_window_g

0x0df4,	// (0x000421ba) popup_snote_single_graphic_window_t1_ParamLimits

0x0df4,	// (0x000421ba) popup_snote_single_graphic_window_t1

0x0e07,	// (0x000421cd) popup_snote_single_graphic_window_t2_ParamLimits

0x0e07,	// (0x000421cd) popup_snote_single_graphic_window_t2

0x0e1a,	// (0x000421e0) popup_snote_single_graphic_window_t3_ParamLimits

0x0e1a,	// (0x000421e0) popup_snote_single_graphic_window_t3

0x0e53,	// (0x00042219) popup_snote_single_graphic_window_t4_ParamLimits

0x0e53,	// (0x00042219) popup_snote_single_graphic_window_t4

0x0e87,	// (0x0004224d) popup_snote_single_graphic_window_t5_ParamLimits

0x0e87,	// (0x0004224d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00050957) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00050957) popup_snote_single_graphic_window_t

0xb0d3,	// (0x0004c499) grid_graphic_popup_pane_ParamLimits

0xb0d3,	// (0x0004c499) grid_graphic_popup_pane

0xb101,	// (0x0004c4c7) listscroll_popup_graphic_pane_g1_ParamLimits

0xb101,	// (0x0004c4c7) listscroll_popup_graphic_pane_g1

0xb115,	// (0x0004c4db) listscroll_popup_graphic_pane_g2_ParamLimits

0xb115,	// (0x0004c4db) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00050d56) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00050d56) listscroll_popup_graphic_pane_g

0xb129,	// (0x0004c4ef) scroll_pane_cp5

0xb06b,	// (0x0004c431) cell_graphic_popup_pane_ParamLimits

0xb06b,	// (0x0004c431) cell_graphic_popup_pane

0xb04c,	// (0x0004c412) cell_graphic_popup_pane_g1

0xb054,	// (0x0004c41a) cell_graphic_popup_pane_g2

0x0cda,	// (0x000420a0) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00050d4f) cell_graphic_popup_pane_g

0xb05d,	// (0x0004c423) cell_graphic_popup_pane_t2

0x0ce3,	// (0x000420a9) grid_highlight_pane_cp3

0x0ec8,	// (0x0004228e) list_gen_pane_ParamLimits

0x0ec8,	// (0x0004228e) list_gen_pane

0x0ef0,	// (0x000422b6) scroll_pane

0xafa4,	// (0x0004c36a) bg_list_pane_g1_ParamLimits

0xafa4,	// (0x0004c36a) bg_list_pane_g1

0xafc1,	// (0x0004c387) bg_list_pane_g2_ParamLimits

0xafc1,	// (0x0004c387) bg_list_pane_g2

0xafd6,	// (0x0004c39c) bg_list_pane_g3_ParamLimits

0xafd6,	// (0x0004c39c) bg_list_pane_g3

0xafea,	// (0x0004c3b0) bg_list_pane_g4_ParamLimits

0xafea,	// (0x0004c3b0) bg_list_pane_g4

0xaffe,	// (0x0004c3c4) bg_list_pane_g5_ParamLimits

0xaffe,	// (0x0004c3c4) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00050d44) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00050d44) bg_list_pane_g

0xaf3c,	// (0x0004c302) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double2_graphic_large_graphic_pane

0xaf3c,	// (0x0004c302) list_double2_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double2_graphic_pane

0xaf3c,	// (0x0004c302) list_double2_large_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double2_large_graphic_pane

0x59bf,	// (0x00046d85) list_double2_pane_ParamLimits

0x59bf,	// (0x00046d85) list_double2_pane

0xaf3c,	// (0x0004c302) list_double_graphic_heading_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_graphic_heading_pane

0xaf3c,	// (0x0004c302) list_double_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_graphic_pane

0xaf3c,	// (0x0004c302) list_double_heading_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_heading_pane

0xaf3c,	// (0x0004c302) list_double_large_graphic_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_large_graphic_pane

0xaf3c,	// (0x0004c302) list_double_number_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_number_pane

0xaf3c,	// (0x0004c302) list_double_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_pane

0xaf3c,	// (0x0004c302) list_double_time_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_double_time_pane

0xaf3c,	// (0x0004c302) list_setting_number_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_setting_number_pane

0xaf3c,	// (0x0004c302) list_setting_pane_ParamLimits

0xaf3c,	// (0x0004c302) list_setting_pane

0x7a79,	// (0x00048e3f) list_single_2graphic_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_2graphic_pane

0x7a79,	// (0x00048e3f) list_single_graphic_heading_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_graphic_heading_pane

0x7a79,	// (0x00048e3f) list_single_graphic_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_graphic_pane

0x7a79,	// (0x00048e3f) list_single_heading_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_heading_pane

0xaf89,	// (0x0004c34f) list_single_large_graphic_pane_ParamLimits

0xaf89,	// (0x0004c34f) list_single_large_graphic_pane

0x7a79,	// (0x00048e3f) list_single_number_heading_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_number_heading_pane

0x7a79,	// (0x00048e3f) list_single_number_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_number_pane

0x7a79,	// (0x00048e3f) list_single_pane_ParamLimits

0x7a79,	// (0x00048e3f) list_single_pane

0x08df,	// (0x00041ca5) list_highlight_pane_cp1

0x6714,	// (0x00047ada) list_single_pane_g1_ParamLimits

0x6714,	// (0x00047ada) list_single_pane_g1

0x6720,	// (0x00047ae6) list_single_pane_g2_ParamLimits

0x6720,	// (0x00047ae6) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00050973) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00050973) list_single_pane_g

0x59a9,	// (0x00046d6f) list_single_pane_t1_ParamLimits

0x59a9,	// (0x00046d6f) list_single_pane_t1

0x6714,	// (0x00047ada) list_single_number_pane_g1_ParamLimits

0x6714,	// (0x00047ada) list_single_number_pane_g1

0x6720,	// (0x00047ae6) list_single_number_pane_g2_ParamLimits

0x6720,	// (0x00047ae6) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00050973) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00050973) list_single_number_pane_g

0x594b,	// (0x00046d11) list_single_number_pane_t1_ParamLimits

0x594b,	// (0x00046d11) list_single_number_pane_t1

0x5961,	// (0x00046d27) list_single_number_pane_t2_ParamLimits

0x5961,	// (0x00046d27) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00050d05) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00050d05) list_single_number_pane_t

0x509f,	// (0x00046465) list_single_graphic_pane_g1_ParamLimits

0x509f,	// (0x00046465) list_single_graphic_pane_g1

0x6714,	// (0x00047ada) list_single_graphic_pane_g2_ParamLimits

0x6714,	// (0x00047ada) list_single_graphic_pane_g2

0x6720,	// (0x00047ae6) list_single_graphic_pane_g3_ParamLimits

0x6720,	// (0x00047ae6) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00050962) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00050962) list_single_graphic_pane_g

0x50ab,	// (0x00046471) list_single_graphic_pane_t1_ParamLimits

0x50ab,	// (0x00046471) list_single_graphic_pane_t1

0x50c1,	// (0x00046487) list_single_heading_pane_g1_ParamLimits

0x50c1,	// (0x00046487) list_single_heading_pane_g1

0x6720,	// (0x00047ae6) list_single_heading_pane_g2_ParamLimits

0x6720,	// (0x00047ae6) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00050969) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00050969) list_single_heading_pane_g

0x50d4,	// (0x0004649a) list_single_heading_pane_t1_ParamLimits

0x50d4,	// (0x0004649a) list_single_heading_pane_t1

0x672c,	// (0x00047af2) list_single_heading_pane_t2_ParamLimits

0x672c,	// (0x00047af2) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005096e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005096e) list_single_heading_pane_t

0x6714,	// (0x00047ada) list_single_number_heading_pane_g1_ParamLimits

0x6714,	// (0x00047ada) list_single_number_heading_pane_g1

0x6720,	// (0x00047ae6) list_single_number_heading_pane_g2_ParamLimits

0x6720,	// (0x00047ae6) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00050973) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00050973) list_single_number_heading_pane_g

0x50ea,	// (0x000464b0) list_single_number_heading_pane_t1_ParamLimits

0x50ea,	// (0x000464b0) list_single_number_heading_pane_t1

0x5100,	// (0x000464c6) list_single_number_heading_pane_t2_ParamLimits

0x5100,	// (0x000464c6) list_single_number_heading_pane_t2

0x5112,	// (0x000464d8) list_single_number_heading_pane_t3_ParamLimits

0x5112,	// (0x000464d8) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00050978) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00050978) list_single_number_heading_pane_t

0x5124,	// (0x000464ea) list_single_graphic_heading_pane_g1_ParamLimits

0x5124,	// (0x000464ea) list_single_graphic_heading_pane_g1

0x673e,	// (0x00047b04) list_single_graphic_heading_pane_g4_ParamLimits

0x673e,	// (0x00047b04) list_single_graphic_heading_pane_g4

0x6720,	// (0x00047ae6) list_single_graphic_heading_pane_g5_ParamLimits

0x6720,	// (0x00047ae6) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005097f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005097f) list_single_graphic_heading_pane_g

0x50ea,	// (0x000464b0) list_single_graphic_heading_pane_t1_ParamLimits

0x50ea,	// (0x000464b0) list_single_graphic_heading_pane_t1

0x5130,	// (0x000464f6) list_single_graphic_heading_pane_t2_ParamLimits

0x5130,	// (0x000464f6) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00050986) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00050986) list_single_graphic_heading_pane_t

0x674f,	// (0x00047b15) list_single_large_graphic_pane_g1_ParamLimits

0x674f,	// (0x00047b15) list_single_large_graphic_pane_g1

0x6714,	// (0x00047ada) list_single_large_graphic_pane_g2_ParamLimits

0x6714,	// (0x00047ada) list_single_large_graphic_pane_g2

0x6720,	// (0x00047ae6) list_single_large_graphic_pane_g3_ParamLimits

0x6720,	// (0x00047ae6) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005098b) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005098b) list_single_large_graphic_pane_g

0x9f80,	// (0x0004b346) wait_border_pane_g2_copy1

0x675b,	// (0x00047b21) list_single_large_graphic_pane_g4_cp2

0x5142,	// (0x00046508) list_single_large_graphic_pane_t1_ParamLimits

0x5142,	// (0x00046508) list_single_large_graphic_pane_t1

0x8db9,	// (0x0004a17f) list_double_pane_g1_ParamLimits

0x8db9,	// (0x0004a17f) list_double_pane_g1

0x5158,	// (0x0004651e) list_double_pane_g2_ParamLimits

0x5158,	// (0x0004651e) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00050992) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00050992) list_double_pane_g

0x5164,	// (0x0004652a) list_double_pane_t1_ParamLimits

0x5164,	// (0x0004652a) list_double_pane_t1

0x517a,	// (0x00046540) list_double_pane_t2_ParamLimits

0x517a,	// (0x00046540) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00050997) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00050997) list_double_pane_t

0x518c,	// (0x00046552) list_double2_pane_g1_ParamLimits

0x518c,	// (0x00046552) list_double2_pane_g1

0x519d,	// (0x00046563) list_double2_pane_g2_ParamLimits

0x519d,	// (0x00046563) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005099c) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005099c) list_double2_pane_g

0x51a9,	// (0x0004656f) list_double2_pane_t1_ParamLimits

0x51a9,	// (0x0004656f) list_double2_pane_t1

0x51bf,	// (0x00046585) list_double2_pane_t2_ParamLimits

0x51bf,	// (0x00046585) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000509a1) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000509a1) list_double2_pane_t

0x8db9,	// (0x0004a17f) list_double_number_pane_g1_ParamLimits

0x8db9,	// (0x0004a17f) list_double_number_pane_g1

0x5158,	// (0x0004651e) list_double_number_pane_g2_ParamLimits

0x5158,	// (0x0004651e) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00050992) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00050992) list_double_number_pane_g

0x51d1,	// (0x00046597) list_double_number_pane_t1_ParamLimits

0x51d1,	// (0x00046597) list_double_number_pane_t1

0x51e3,	// (0x000465a9) list_double_number_pane_t2_ParamLimits

0x51e3,	// (0x000465a9) list_double_number_pane_t2

0x51f9,	// (0x000465bf) list_double_number_pane_t3_ParamLimits

0x51f9,	// (0x000465bf) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000509a6) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000509a6) list_double_number_pane_t

0x520b,	// (0x000465d1) list_double_graphic_pane_g1_ParamLimits

0x520b,	// (0x000465d1) list_double_graphic_pane_g1

0x5217,	// (0x000465dd) list_double_graphic_pane_g2_ParamLimits

0x5217,	// (0x000465dd) list_double_graphic_pane_g2

0x5226,	// (0x000465ec) list_double_graphic_pane_g3_ParamLimits

0x5226,	// (0x000465ec) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000509ad) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000509ad) list_double_graphic_pane_g

0x523e,	// (0x00046604) list_double_graphic_pane_t1_ParamLimits

0x523e,	// (0x00046604) list_double_graphic_pane_t1

0x5254,	// (0x0004661a) list_double_graphic_pane_t2_ParamLimits

0x5254,	// (0x0004661a) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000509b6) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000509b6) list_double_graphic_pane_t

0x5266,	// (0x0004662c) list_double2_graphic_pane_g1_ParamLimits

0x5266,	// (0x0004662c) list_double2_graphic_pane_g1

0x6763,	// (0x00047b29) list_double2_graphic_pane_g2_ParamLimits

0x6763,	// (0x00047b29) list_double2_graphic_pane_g2

0x676f,	// (0x00047b35) list_double2_graphic_pane_g3_ParamLimits

0x676f,	// (0x00047b35) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000509bb) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000509bb) list_double2_graphic_pane_g

0x5272,	// (0x00046638) list_double2_graphic_pane_t1_ParamLimits

0x5272,	// (0x00046638) list_double2_graphic_pane_t1

0x5288,	// (0x0004664e) list_double2_graphic_pane_t2_ParamLimits

0x5288,	// (0x0004664e) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000509c2) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000509c2) list_double2_graphic_pane_t

0x529a,	// (0x00046660) list_double_large_graphic_pane_g1_ParamLimits

0x529a,	// (0x00046660) list_double_large_graphic_pane_g1

0x52b9,	// (0x0004667f) list_double_large_graphic_pane_g2_ParamLimits

0x52b9,	// (0x0004667f) list_double_large_graphic_pane_g2

0x5158,	// (0x0004651e) list_double_large_graphic_pane_g3_ParamLimits

0x5158,	// (0x0004651e) list_double_large_graphic_pane_g3

0x677b,	// (0x00047b41) list_double_large_graphic_pane_g4_ParamLimits

0x677b,	// (0x00047b41) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000509c7) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000509c7) list_double_large_graphic_pane_g

0x52cf,	// (0x00046695) list_double_large_graphic_pane_t1_ParamLimits

0x52cf,	// (0x00046695) list_double_large_graphic_pane_t1

0x52e8,	// (0x000466ae) list_double_large_graphic_pane_t2_ParamLimits

0x52e8,	// (0x000466ae) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000509d2) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000509d2) list_double_large_graphic_pane_t

0x67a3,	// (0x00047b69) list_double2_large_graphic_pane_g1_ParamLimits

0x67a3,	// (0x00047b69) list_double2_large_graphic_pane_g1

0x67af,	// (0x00047b75) list_double2_large_graphic_pane_g2_ParamLimits

0x67af,	// (0x00047b75) list_double2_large_graphic_pane_g2

0x676f,	// (0x00047b35) list_double2_large_graphic_pane_g3_ParamLimits

0x676f,	// (0x00047b35) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000509d7) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000509d7) list_double2_large_graphic_pane_g

0x52fa,	// (0x000466c0) list_double2_large_graphic_pane_t1_ParamLimits

0x52fa,	// (0x000466c0) list_double2_large_graphic_pane_t1

0x5310,	// (0x000466d6) list_double2_large_graphic_pane_t2_ParamLimits

0x5310,	// (0x000466d6) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000509de) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000509de) list_double2_large_graphic_pane_t

0x5322,	// (0x000466e8) list_double_heading_pane_g1_ParamLimits

0x5322,	// (0x000466e8) list_double_heading_pane_g1

0x5333,	// (0x000466f9) list_double_heading_pane_g2_ParamLimits

0x5333,	// (0x000466f9) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000509e3) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000509e3) list_double_heading_pane_g

0x533f,	// (0x00046705) list_double_heading_pane_t1_ParamLimits

0x533f,	// (0x00046705) list_double_heading_pane_t1

0x5355,	// (0x0004671b) list_double_heading_pane_t2_ParamLimits

0x5355,	// (0x0004671b) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000509e8) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000509e8) list_double_heading_pane_t

0x5367,	// (0x0004672d) list_double_graphic_heading_pane_g1_ParamLimits

0x5367,	// (0x0004672d) list_double_graphic_heading_pane_g1

0x5322,	// (0x000466e8) list_double_graphic_heading_pane_g2_ParamLimits

0x5322,	// (0x000466e8) list_double_graphic_heading_pane_g2

0x5333,	// (0x000466f9) list_double_graphic_heading_pane_g3_ParamLimits

0x5333,	// (0x000466f9) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000509ed) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000509ed) list_double_graphic_heading_pane_g

0x5373,	// (0x00046739) list_double_graphic_heading_pane_t1_ParamLimits

0x5373,	// (0x00046739) list_double_graphic_heading_pane_t1

0x5389,	// (0x0004674f) list_double_graphic_heading_pane_t2_ParamLimits

0x5389,	// (0x0004674f) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000509f4) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000509f4) list_double_graphic_heading_pane_t

0x539b,	// (0x00046761) list_double_time_pane_g1_ParamLimits

0x539b,	// (0x00046761) list_double_time_pane_g1

0x53ac,	// (0x00046772) list_double_time_pane_g2_ParamLimits

0x53ac,	// (0x00046772) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000509f9) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000509f9) list_double_time_pane_g

0x53b8,	// (0x0004677e) list_double_time_pane_t1_ParamLimits

0x53b8,	// (0x0004677e) list_double_time_pane_t1

0x53ce,	// (0x00046794) list_double_time_pane_t2_ParamLimits

0x53ce,	// (0x00046794) list_double_time_pane_t2

0x53e0,	// (0x000467a6) list_double_time_pane_t3_ParamLimits

0x53e0,	// (0x000467a6) list_double_time_pane_t3

0x53f2,	// (0x000467b8) list_double_time_pane_t4_ParamLimits

0x53f2,	// (0x000467b8) list_double_time_pane_t4

0x0003,

0xf638,	// (0x000509fe) list_double_time_pane_t_ParamLimits

0xf638,	// (0x000509fe) list_double_time_pane_t

0x5404,	// (0x000467ca) list_setting_pane_g1_ParamLimits

0x5404,	// (0x000467ca) list_setting_pane_g1

0x5410,	// (0x000467d6) list_setting_pane_g2_ParamLimits

0x5410,	// (0x000467d6) list_setting_pane_g2

0x0001,

0xf641,	// (0x00050a07) list_setting_pane_g_ParamLimits

0xf641,	// (0x00050a07) list_setting_pane_g

0x541c,	// (0x000467e2) list_setting_pane_t1_ParamLimits

0x541c,	// (0x000467e2) list_setting_pane_t1

0x5436,	// (0x000467fc) list_setting_pane_t2_ParamLimits

0x5436,	// (0x000467fc) list_setting_pane_t2

0x0002,

0xf646,	// (0x00050a0c) list_setting_pane_t_ParamLimits

0xf646,	// (0x00050a0c) list_setting_pane_t

0x5475,	// (0x0004683b) set_value_pane_cp_ParamLimits

0x5475,	// (0x0004683b) set_value_pane_cp

0x5483,	// (0x00046849) list_setting_number_pane_g1_ParamLimits

0x5483,	// (0x00046849) list_setting_number_pane_g1

0x548f,	// (0x00046855) list_setting_number_pane_g2_ParamLimits

0x548f,	// (0x00046855) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00050a13) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00050a13) list_setting_number_pane_g

0x549b,	// (0x00046861) list_setting_number_pane_t1_ParamLimits

0x549b,	// (0x00046861) list_setting_number_pane_t1

0x54b4,	// (0x0004687a) list_setting_number_pane_t2_ParamLimits

0x54b4,	// (0x0004687a) list_setting_number_pane_t2

0x54ce,	// (0x00046894) list_setting_number_pane_t3_ParamLimits

0x54ce,	// (0x00046894) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00050a18) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00050a18) list_setting_number_pane_t

0x5475,	// (0x0004683b) set_value_pane_ParamLimits

0x5475,	// (0x0004683b) set_value_pane

0x0f24,	// (0x000422ea) bg_set_opt_pane_ParamLimits

0x0f24,	// (0x000422ea) bg_set_opt_pane

0x5511,	// (0x000468d7) set_value_pane_t1

0x0f45,	// (0x0004230b) slider_set_pane_cp3

0x0f4e,	// (0x00042314) volume_small_pane_cp

0x0f57,	// (0x0004231d) list_form_gen_pane

0x0f60,	// (0x00042326) scroll_pane_cp8

0x5527,	// (0x000468ed) form_field_data_pane_ParamLimits

0x5527,	// (0x000468ed) form_field_data_pane

0x554f,	// (0x00046915) form_field_data_wide_pane_ParamLimits

0x554f,	// (0x00046915) form_field_data_wide_pane

0x5576,	// (0x0004693c) form_field_popup_pane_ParamLimits

0x5576,	// (0x0004693c) form_field_popup_pane

0x5598,	// (0x0004695e) form_field_popup_wide_pane_ParamLimits

0x5598,	// (0x0004695e) form_field_popup_wide_pane

0x55b9,	// (0x0004697f) form_field_slider_pane_ParamLimits

0x55b9,	// (0x0004697f) form_field_slider_pane

0x55cc,	// (0x00046992) form_field_slider_wide_pane_ParamLimits

0x55cc,	// (0x00046992) form_field_slider_wide_pane

0x0f71,	// (0x00042337) data_form_pane

0x55e9,	// (0x000469af) form_field_data_pane_t1

0x0f7d,	// (0x00042343) input_focus_pane

0x5603,	// (0x000469c9) data_form_wide_pane

0x5620,	// (0x000469e6) form_field_data_wide_pane_t1

0x0cf8,	// (0x000420be) input_focus_pane_cp6

0x5642,	// (0x00046a08) form_field_popup_pane_t1

0x0f7d,	// (0x00042343) input_focus_pane_cp7

0x0fab,	// (0x00042371) list_form_pane

0x5664,	// (0x00046a2a) form_field_popup_wide_pane_t1

0x0f7d,	// (0x00042343) input_focus_pane_cp8

0x0fb7,	// (0x0004237d) list_form_wide_pane

0x5681,	// (0x00046a47) form_field_slider_pane_t1_ParamLimits

0x5681,	// (0x00046a47) form_field_slider_pane_t1

0x5699,	// (0x00046a5f) form_field_slider_pane_t2_ParamLimits

0x5699,	// (0x00046a5f) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00050a28) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00050a28) form_field_slider_pane_t

0x092d,	// (0x00041cf3) input_focus_pane_cp9_ParamLimits

0x092d,	// (0x00041cf3) input_focus_pane_cp9

0x56ae,	// (0x00046a74) slider_cont_pane_ParamLimits

0x56ae,	// (0x00046a74) slider_cont_pane

0x0fc3,	// (0x00042389) form_field_slider_wide_pane_t1_ParamLimits

0x0fc3,	// (0x00042389) form_field_slider_wide_pane_t1

0x56c2,	// (0x00046a88) form_field_slider_wide_pane_t2_ParamLimits

0x56c2,	// (0x00046a88) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00050a2d) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00050a2d) form_field_slider_wide_pane_t

0x092d,	// (0x00041cf3) input_focus_pane_cp10_ParamLimits

0x092d,	// (0x00041cf3) input_focus_pane_cp10

0x56d4,	// (0x00046a9a) slider_cont_pane_cp1_ParamLimits

0x56d4,	// (0x00046a9a) slider_cont_pane_cp1

0x56e8,	// (0x00046aae) slider_form_pane_cp

0x0fd5,	// (0x0004239b) input_focus_pane_g1

0x0fdd,	// (0x000423a3) input_focus_pane_g2

0x0fe5,	// (0x000423ab) input_focus_pane_g3

0x0fed,	// (0x000423b3) input_focus_pane_g4

0x0ff5,	// (0x000423bb) input_focus_pane_g5

0x0ffd,	// (0x000423c3) input_focus_pane_g6

0x1005,	// (0x000423cb) input_focus_pane_g7

0x100d,	// (0x000423d3) input_focus_pane_g8

0x1015,	// (0x000423db) input_focus_pane_g9

0x08d5,	// (0x00041c9b) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00050a32) input_focus_pane_g

0x9f89,	// (0x0004b34f) wait_border_pane_g3_copy1

0x56f0,	// (0x00046ab6) data_form_pane_t1

0x08d5,	// (0x00041c9b) wait_anim_pane_g1_copy1

0x5973,	// (0x00046d39) data_form_wide_pane_t1

0x570f,	// (0x00046ad5) list_form_graphic_pane_cp_ParamLimits

0x570f,	// (0x00046ad5) list_form_graphic_pane_cp

0xaee0,	// (0x0004c2a6) slider_form_pane_g1

0xaee9,	// (0x0004c2af) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00050d35) slider_form_pane_g

0x570f,	// (0x00046ad5) list_form_graphic_pane_ParamLimits

0x570f,	// (0x00046ad5) list_form_graphic_pane

0x5721,	// (0x00046ae7) list_form_graphic_pane_g1

0x5729,	// (0x00046aef) list_form_graphic_pane_t1_ParamLimits

0x5729,	// (0x00046aef) list_form_graphic_pane_t1

0x093b,	// (0x00041d01) list_highlight_pane_cp5_ParamLimits

0x093b,	// (0x00041d01) list_highlight_pane_cp5

0x573e,	// (0x00046b04) find_pane_g1

0x101d,	// (0x000423e3) input_find_pane

0x5747,	// (0x00046b0d) input_find_pane_g1_ParamLimits

0x5747,	// (0x00046b0d) input_find_pane_g1

0x5753,	// (0x00046b19) input_find_pane_t1_ParamLimits

0x5753,	// (0x00046b19) input_find_pane_t1

0x5768,	// (0x00046b2e) input_find_pane_t2_ParamLimits

0x5768,	// (0x00046b2e) input_find_pane_t2

0x0001,

0xf681,	// (0x00050a47) input_find_pane_t_ParamLimits

0xf681,	// (0x00050a47) input_find_pane_t

0x1026,	// (0x000423ec) input_focus_pane_cp5_ParamLimits

0x1026,	// (0x000423ec) input_focus_pane_cp5

0x1039,	// (0x000423ff) bg_popup_window_pane_cp2_ParamLimits

0x1039,	// (0x000423ff) bg_popup_window_pane_cp2

0x1046,	// (0x0004240c) listscroll_menu_pane_ParamLimits

0x1046,	// (0x0004240c) listscroll_menu_pane

0x67cc,	// (0x00047b92) popup_submenu_window_ParamLimits

0x67cc,	// (0x00047b92) popup_submenu_window

0x1052,	// (0x00042418) find_popup_pane_g1

0x105a,	// (0x00042420) input_popup_find_pane_cp

0x1064,	// (0x0004242a) input_focus_pane_cp4_ParamLimits

0x1064,	// (0x0004242a) input_focus_pane_cp4

0x1072,	// (0x00042438) input_popup_find_pane_t1_ParamLimits

0x1072,	// (0x00042438) input_popup_find_pane_t1

0x08df,	// (0x00041ca5) bg_popup_sub_pane_cp

0x10a0,	// (0x00042466) listscroll_popup_sub_pane

0x10a8,	// (0x0004246e) list_submenu_pane_ParamLimits

0x10a8,	// (0x0004246e) list_submenu_pane

0x10b9,	// (0x0004247f) scroll_pane_cp4

0x10c1,	// (0x00042487) list_single_popup_submenu_pane_ParamLimits

0x10c1,	// (0x00042487) list_single_popup_submenu_pane

0x10d6,	// (0x0004249c) list_single_popup_submenu_pane_g1

0x10de,	// (0x000424a4) list_single_popup_submenu_pane_t1_ParamLimits

0x10de,	// (0x000424a4) list_single_popup_submenu_pane_t1

0x093b,	// (0x00041d01) bg_active_tab_pane_cp1_ParamLimits

0x093b,	// (0x00041d01) bg_active_tab_pane_cp1

0x680a,	// (0x00047bd0) tabs_2_active_pane_g1

0x6812,	// (0x00047bd8) tabs_2_active_pane_t1

0x093b,	// (0x00041d01) bg_passive_tab_pane_cp1_ParamLimits

0x093b,	// (0x00041d01) bg_passive_tab_pane_cp1

0x680a,	// (0x00047bd0) tabs_2_passive_pane_g1

0x6812,	// (0x00047bd8) tabs_2_passive_pane_t1

0x6824,	// (0x00047bea) bg_active_tab_pane_cp4

0x6832,	// (0x00047bf8) tabs_2_long_active_pane_t1

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp4

0x7722,	// (0x00048ae8) list_single_midp_graphic_pane_g4_ParamLimits

0x6824,	// (0x00047bea) bg_active_tab_pane_cp5

0x6851,	// (0x00047c17) tabs_3_long_active_pane_t1

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp5

0x7722,	// (0x00048ae8) list_single_midp_graphic_pane_g4

0x093b,	// (0x00041d01) bg_popup_window_pane_cp13_ParamLimits

0x093b,	// (0x00041d01) bg_popup_window_pane_cp13

0x10fc,	// (0x000424c2) listscroll_popup_fast_pane_ParamLimits

0x10fc,	// (0x000424c2) listscroll_popup_fast_pane

0x110b,	// (0x000424d1) grid_popup_fast_pane_ParamLimits

0x110b,	// (0x000424d1) grid_popup_fast_pane

0x111d,	// (0x000424e3) scroll_pane_cp9_ParamLimits

0x111d,	// (0x000424e3) scroll_pane_cp9

0xc84f,	// (0x0004dc15) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0004dc15) list_single_graphic_hl_pane_t1_cp2

0x1141,	// (0x00042507) input_focus_pane_cp20_ParamLimits

0x1141,	// (0x00042507) input_focus_pane_cp20

0x114f,	// (0x00042515) query_popup_data_pane_t1_ParamLimits

0x114f,	// (0x00042515) query_popup_data_pane_t1

0x1162,	// (0x00042528) query_popup_data_pane_t2_ParamLimits

0x1162,	// (0x00042528) query_popup_data_pane_t2

0x11a8,	// (0x0004256e) query_popup_data_pane_t3_ParamLimits

0x11a8,	// (0x0004256e) query_popup_data_pane_t3

0x11e9,	// (0x000425af) query_popup_data_pane_t4_ParamLimits

0x11e9,	// (0x000425af) query_popup_data_pane_t4

0x1225,	// (0x000425eb) query_popup_data_pane_t5_ParamLimits

0x1225,	// (0x000425eb) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00050a4c) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00050a4c) query_popup_data_pane_t

0x0fd5,	// (0x0004239b) bg_set_opt_pane_g1

0x0fdd,	// (0x000423a3) bg_set_opt_pane_g2

0x0fe5,	// (0x000423ab) bg_set_opt_pane_g3

0x0fed,	// (0x000423b3) bg_set_opt_pane_g4

0x0ff5,	// (0x000423bb) bg_set_opt_pane_g5

0x0ffd,	// (0x000423c3) bg_set_opt_pane_g6

0x1005,	// (0x000423cb) bg_set_opt_pane_g7

0x100d,	// (0x000423d3) bg_set_opt_pane_g8

0x1015,	// (0x000423db) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00050a57) bg_set_opt_pane_g

0x6d47,	// (0x0004810d) control_top_pane_stacon_ParamLimits

0x6d47,	// (0x0004810d) control_top_pane_stacon

0x6d9a,	// (0x00048160) signal_pane_stacon_ParamLimits

0x6d9a,	// (0x00048160) signal_pane_stacon

0x8dc5,	// (0x0004a18b) stacon_top_pane_g1_ParamLimits

0x8dc5,	// (0x0004a18b) stacon_top_pane_g1

0x6dbf,	// (0x00048185) title_pane_stacon_ParamLimits

0x6dbf,	// (0x00048185) title_pane_stacon

0x6de9,	// (0x000481af) uni_indicator_pane_stacon_ParamLimits

0x6de9,	// (0x000481af) uni_indicator_pane_stacon

0x6dfe,	// (0x000481c4) battery_pane_stacon_ParamLimits

0x6dfe,	// (0x000481c4) battery_pane_stacon

0x6e42,	// (0x00048208) control_bottom_pane_stacon_ParamLimits

0x6e42,	// (0x00048208) control_bottom_pane_stacon

0x6e65,	// (0x0004822b) navi_pane_stacon_ParamLimits

0x6e65,	// (0x0004822b) navi_pane_stacon

0x8de7,	// (0x0004a1ad) stacon_bottom_pane_g1_ParamLimits

0x8de7,	// (0x0004a1ad) stacon_bottom_pane_g1

0x6863,	// (0x00047c29) aid_levels_signal_lsc_ParamLimits

0x6863,	// (0x00047c29) aid_levels_signal_lsc

0x687a,	// (0x00047c40) signal_pane_stacon_g1_ParamLimits

0x687a,	// (0x00047c40) signal_pane_stacon_g1

0x688e,	// (0x00047c54) signal_pane_stacon_g2_ParamLimits

0x688e,	// (0x00047c54) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00050a6a) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00050a6a) signal_pane_stacon_g

0x68c3,	// (0x00047c89) title_pane_stacon_t1_ParamLimits

0x68c3,	// (0x00047c89) title_pane_stacon_t1

0x127d,	// (0x00042643) uni_indicator_pane_stacon_g1

0x1287,	// (0x0004264d) uni_indicator_pane_stacon_g2

0x1269,	// (0x0004262f) uni_indicator_pane_stacon_g3

0x1273,	// (0x00042639) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00050a76) uni_indicator_pane_stacon_g

0x68e8,	// (0x00047cae) control_top_pane_stacon_g1

0x68f0,	// (0x00047cb6) control_top_pane_stacon_t1_ParamLimits

0x68f0,	// (0x00047cb6) control_top_pane_stacon_t1

0x6927,	// (0x00047ced) aid_levels_battery_lsc_ParamLimits

0x6927,	// (0x00047ced) aid_levels_battery_lsc

0x693f,	// (0x00047d05) battery_pane_stacon_g1_ParamLimits

0x693f,	// (0x00047d05) battery_pane_stacon_g1

0x6951,	// (0x00047d17) battery_pane_stacon_g2_ParamLimits

0x6951,	// (0x00047d17) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00050a7f) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00050a7f) battery_pane_stacon_g

0x698f,	// (0x00047d55) navi_icon_pane_stacon

0x69a3,	// (0x00047d69) navi_navi_pane_stacon

0x698f,	// (0x00047d55) navi_text_pane_stacon

0x69b9,	// (0x00047d7f) control_bottom_pane_stacon_g1

0x69c1,	// (0x00047d87) control_bottom_pane_stacon_t1_ParamLimits

0x69c1,	// (0x00047d87) control_bottom_pane_stacon_t1

0x69f8,	// (0x00047dbe) grid_app_pane_ParamLimits

0x69f8,	// (0x00047dbe) grid_app_pane

0x6a1a,	// (0x00047de0) scroll_pane_cp15_ParamLimits

0x6a1a,	// (0x00047de0) scroll_pane_cp15

0x6a2d,	// (0x00047df3) cell_app_pane_ParamLimits

0x6a2d,	// (0x00047df3) cell_app_pane

0x6a59,	// (0x00047e1f) cell_app_pane_g1_ParamLimits

0x6a59,	// (0x00047e1f) cell_app_pane_g1

0x4214,	// (0x000455da) cell_app_pane_g2_ParamLimits

0x4214,	// (0x000455da) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00050a84) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00050a84) cell_app_pane_g

0x6a7d,	// (0x00047e43) cell_app_pane_t1_ParamLimits

0x6a7d,	// (0x00047e43) cell_app_pane_t1

0x4220,	// (0x000455e6) grid_highlight_pane_ParamLimits

0x4220,	// (0x000455e6) grid_highlight_pane

0x0fd5,	// (0x0004239b) cell_highlight_pane_g1

0x0fdd,	// (0x000423a3) cell_highlight_pane_g2

0x0fe5,	// (0x000423ab) cell_highlight_pane_g3

0x0fed,	// (0x000423b3) cell_highlight_pane_g4

0x0ff5,	// (0x000423bb) cell_highlight_pane_g5

0x0ffd,	// (0x000423c3) cell_highlight_pane_g6

0x1005,	// (0x000423cb) cell_highlight_pane_g7

0x100d,	// (0x000423d3) cell_highlight_pane_g8

0x1015,	// (0x000423db) cell_highlight_pane_g9

0x08d5,	// (0x00041c9b) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00050a32) cell_highlight_pane_g

0x423b,	// (0x00045601) bg_scroll_pane

0x6ac1,	// (0x00047e87) scroll_handle_pane

0x42ab,	// (0x00045671) scroll_bg_pane_g1

0x42c0,	// (0x00045686) scroll_bg_pane_g2

0x42d8,	// (0x0004569e) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00050a89) scroll_bg_pane_g

0x42ed,	// (0x000456b3) scroll_handle_focus_pane_ParamLimits

0x42ed,	// (0x000456b3) scroll_handle_focus_pane

0x42ab,	// (0x00045671) scroll_handle_pane_g1

0x42fa,	// (0x000456c0) scroll_handle_pane_g2

0x42d8,	// (0x0004569e) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00050a90) scroll_handle_pane_g

0x1064,	// (0x0004242a) bg_popup_sub_pane_cp21_ParamLimits

0x1064,	// (0x0004242a) bg_popup_sub_pane_cp21

0x430e,	// (0x000456d4) popup_fep_japan_predictive_window_t1_ParamLimits

0x430e,	// (0x000456d4) popup_fep_japan_predictive_window_t1

0x4325,	// (0x000456eb) popup_fep_japan_predictive_window_t2_ParamLimits

0x4325,	// (0x000456eb) popup_fep_japan_predictive_window_t2

0x4358,	// (0x0004571e) popup_fep_japan_predictive_window_t3_ParamLimits

0x4358,	// (0x0004571e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00050a97) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00050a97) popup_fep_japan_predictive_window_t

0x08df,	// (0x00041ca5) bg_popup_sub_pane_cp23

0x438f,	// (0x00045755) listscroll_japin_cand_pane

0x4397,	// (0x0004575d) popup_fep_japan_candidate_window_t1

0x43a5,	// (0x0004576b) candidate_pane_ParamLimits

0x43a5,	// (0x0004576b) candidate_pane

0x43b7,	// (0x0004577d) scroll_pane_cp30

0x43c1,	// (0x00045787) list_single_popup_jap_candidate_pane_ParamLimits

0x43c1,	// (0x00045787) list_single_popup_jap_candidate_pane

0x08df,	// (0x00041ca5) list_highlight_pane_cp30

0x43d5,	// (0x0004579b) list_single_popup_jap_candidate_pane_t1

0x6aea,	// (0x00047eb0) level_1_signal

0x6af7,	// (0x00047ebd) level_2_signal

0x6b04,	// (0x00047eca) level_3_signal

0x6b11,	// (0x00047ed7) level_4_signal

0x6b1e,	// (0x00047ee4) level_5_signal

0x6b2b,	// (0x00047ef1) level_6_signal

0x6b38,	// (0x00047efe) level_7_signal

0x6aea,	// (0x00047eb0) level_1_battery

0x6af7,	// (0x00047ebd) level_2_battery

0x6b04,	// (0x00047eca) level_3_battery

0x6b11,	// (0x00047ed7) level_4_battery

0x6b1e,	// (0x00047ee4) level_5_battery

0x6b2b,	// (0x00047ef1) level_6_battery

0x6b38,	// (0x00047efe) level_7_battery

0x441b,	// (0x000457e1) list_menu_pane_ParamLimits

0x441b,	// (0x000457e1) list_menu_pane

0x4431,	// (0x000457f7) scroll_pane_cp25_ParamLimits

0x4431,	// (0x000457f7) scroll_pane_cp25

0x444a,	// (0x00045810) list_double2_graphic_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double2_graphic_pane_cp2

0x444a,	// (0x00045810) list_double2_large_graphic_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double2_large_graphic_pane_cp2

0x444a,	// (0x00045810) list_double2_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double2_pane_cp2

0x444a,	// (0x00045810) list_double_graphic_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double_graphic_pane_cp2

0x444a,	// (0x00045810) list_double_large_graphic_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double_large_graphic_pane_cp2

0x444a,	// (0x00045810) list_double_number_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double_number_pane_cp2

0x444a,	// (0x00045810) list_double_pane_cp2_ParamLimits

0x444a,	// (0x00045810) list_double_pane_cp2

0x6b7a,	// (0x00047f40) list_single_2graphic_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_2graphic_pane_cp2

0x6b7a,	// (0x00047f40) list_single_graphic_heading_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_graphic_heading_pane_cp2

0x6b7a,	// (0x00047f40) list_single_graphic_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_graphic_pane_cp2

0x6b7a,	// (0x00047f40) list_single_heading_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_heading_pane_cp2

0x445a,	// (0x00045820) list_single_large_graphic_pane_cp2_ParamLimits

0x445a,	// (0x00045820) list_single_large_graphic_pane_cp2

0x6b7a,	// (0x00047f40) list_single_number_heading_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_number_heading_pane_cp2

0x6b7a,	// (0x00047f40) list_single_number_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_number_pane_cp2

0x6b97,	// (0x00047f5d) list_single_pane_cp2_ParamLimits

0x6b97,	// (0x00047f5d) list_single_pane_cp2

0x44ce,	// (0x00045894) bg_popup_sub_pane_cp22

0x6c73,	// (0x00048039) popup_side_volume_key_window_g1

0x6c9d,	// (0x00048063) popup_side_volume_key_window_t1

0x6cbb,	// (0x00048081) volume_small_pane_cp1

0x092d,	// (0x00041cf3) bg_popup_sub_pane_cp24_ParamLimits

0x092d,	// (0x00041cf3) bg_popup_sub_pane_cp24

0x4543,	// (0x00045909) fep_china_uni_candidate_pane_ParamLimits

0x4543,	// (0x00045909) fep_china_uni_candidate_pane

0x4557,	// (0x0004591d) fep_china_uni_entry_pane

0x4567,	// (0x0004592d) popup_fep_china_uni_window_g1

0x4583,	// (0x00045949) fep_china_uni_entry_pane_g1

0x458d,	// (0x00045953) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00050ac8) fep_china_uni_entry_pane_g

0x4597,	// (0x0004595d) fep_entry_item_pane

0x45a1,	// (0x00045967) fep_candidate_item_pane

0x45a9,	// (0x0004596f) fep_china_uni_candidate_pane_g1

0x45b3,	// (0x00045979) fep_china_uni_candidate_pane_g2

0x45bb,	// (0x00045981) fep_china_uni_candidate_pane_g3

0x45c3,	// (0x00045989) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00050acd) fep_china_uni_candidate_pane_g

0x08d5,	// (0x00041c9b) fep_entry_item_pane_g1

0x45cd,	// (0x00045993) fep_entry_item_pane_t1_ParamLimits

0x45cd,	// (0x00045993) fep_entry_item_pane_t1

0x45e3,	// (0x000459a9) fep_candidate_item_pane_t1_ParamLimits

0x45e3,	// (0x000459a9) fep_candidate_item_pane_t1

0x45f8,	// (0x000459be) fep_candidate_item_pane_t2_ParamLimits

0x45f8,	// (0x000459be) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00050ad6) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00050ad6) fep_candidate_item_pane_t

0x093b,	// (0x00041d01) list_highlight_pane_cp31_ParamLimits

0x093b,	// (0x00041d01) list_highlight_pane_cp31

0x460a,	// (0x000459d0) level_1_signal_lsc

0x4613,	// (0x000459d9) level_2_signal_lsc

0x461c,	// (0x000459e2) level_3_signal_lsc

0x4625,	// (0x000459eb) level_4_signal_lsc

0x462e,	// (0x000459f4) level_5_signal_lsc

0x4637,	// (0x000459fd) level_6_signal_lsc

0x4640,	// (0x00045a06) level_7_signal_lsc

0x4640,	// (0x00045a06) level_1_battery_lsc

0x4649,	// (0x00045a0f) level_2_battery_lsc

0x4652,	// (0x00045a18) level_3_battery_lsc

0x465b,	// (0x00045a21) level_4_battery_lsc

0x4664,	// (0x00045a2a) level_5_battery_lsc

0x466d,	// (0x00045a33) level_6_battery_lsc

0x460a,	// (0x000459d0) level_7_battery_lsc

0x4676,	// (0x00045a3c) scroll_handle_focus_pane_g1

0x467f,	// (0x00045a45) scroll_handle_focus_pane_g2

0x4688,	// (0x00045a4e) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00050adb) scroll_handle_focus_pane_g

0x577d,	// (0x00046b43) list_single_2graphic_pane_g1_ParamLimits

0x577d,	// (0x00046b43) list_single_2graphic_pane_g1

0x673e,	// (0x00047b04) list_single_2graphic_pane_g2_ParamLimits

0x673e,	// (0x00047b04) list_single_2graphic_pane_g2

0x6720,	// (0x00047ae6) list_single_2graphic_pane_g3_ParamLimits

0x6720,	// (0x00047ae6) list_single_2graphic_pane_g3

0x6cc3,	// (0x00048089) list_single_2graphic_pane_g4_ParamLimits

0x6cc3,	// (0x00048089) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00050ae2) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00050ae2) list_single_2graphic_pane_g

0x5789,	// (0x00046b4f) list_single_2graphic_pane_t1_ParamLimits

0x5789,	// (0x00046b4f) list_single_2graphic_pane_t1

0x6cd4,	// (0x0004809a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6cd4,	// (0x0004809a) list_double2_graphic_large_graphic_pane_g1

0x67af,	// (0x00047b75) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x67af,	// (0x00047b75) list_double2_graphic_large_graphic_pane_g2

0x676f,	// (0x00047b35) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x676f,	// (0x00047b35) list_double2_graphic_large_graphic_pane_g3

0x6ce6,	// (0x000480ac) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6ce6,	// (0x000480ac) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00050aeb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00050aeb) list_double2_graphic_large_graphic_pane_g

0x57b7,	// (0x00046b7d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x57b7,	// (0x00046b7d) list_double2_graphic_large_graphic_pane_t1

0x57cd,	// (0x00046b93) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x57cd,	// (0x00046b93) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00050af4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00050af4) list_double2_graphic_large_graphic_pane_t

0x8eaa,	// (0x0004a270) popup_fast_swap_window_ParamLimits

0x8eaa,	// (0x0004a270) popup_fast_swap_window

0x8ec8,	// (0x0004a28e) popup_side_volume_key_window

0x8ee6,	// (0x0004a2ac) stacon_top_pane

0x8ef0,	// (0x0004a2b6) status_pane_ParamLimits

0x8ef0,	// (0x0004a2b6) status_pane

0x08cb,	// (0x00041c91) status_small_pane

0x08df,	// (0x00041ca5) control_pane

0x08df,	// (0x00041ca5) stacon_bottom_pane

0x0f60,	// (0x00042326) scroll_pane_cp121

0x0f57,	// (0x0004231d) set_content_pane

0x6cf2,	// (0x000480b8) bg_active_tab_pane_g1_cp1

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp1

0x6d04,	// (0x000480ca) bg_active_tab_pane_g3_cp1

0x6cf2,	// (0x000480b8) bg_passive_tab_pane_g1_cp1

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp1

0x6d04,	// (0x000480ca) bg_passive_tab_pane_g3_cp1

0x6d0d,	// (0x000480d3) bg_active_tab_pane_g1_cp2

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp2

0x6d16,	// (0x000480dc) bg_active_tab_pane_g3_cp2

0x6d0d,	// (0x000480d3) bg_passive_tab_pane_g1_cp2

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp2

0x6d16,	// (0x000480dc) bg_passive_tab_pane_g3_cp2

0x6d1f,	// (0x000480e5) bg_active_tab_pane_g1_cp3

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp3

0x6d28,	// (0x000480ee) bg_active_tab_pane_g3_cp3

0x6d1f,	// (0x000480e5) bg_passive_tab_pane_g1_cp3

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp3

0x6d28,	// (0x000480ee) bg_passive_tab_pane_g3_cp3

0x6d31,	// (0x000480f7) bg_active_tab_pane_g1_cp4

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp4

0x6d3c,	// (0x00048102) bg_active_tab_pane_g3_cp4

0x6d31,	// (0x000480f7) bg_passive_tab_pane_g1_cp4

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp4

0x6d3c,	// (0x00048102) bg_passive_tab_pane_g3_cp4

0x8e03,	// (0x0004a1c9) bg_active_tab_pane_g1_cp5

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp5

0x8e0c,	// (0x0004a1d2) bg_active_tab_pane_g3_cp5

0x8e03,	// (0x0004a1c9) bg_passive_tab_pane_g1_cp5

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp5

0x8e0c,	// (0x0004a1d2) bg_passive_tab_pane_g3_cp5

0x8e15,	// (0x0004a1db) list_set_graphic_pane_ParamLimits

0x8e15,	// (0x0004a1db) list_set_graphic_pane

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp4

0x8e2b,	// (0x0004a1f1) list_set_graphic_pane_g1_ParamLimits

0x8e2b,	// (0x0004a1f1) list_set_graphic_pane_g1

0x8e37,	// (0x0004a1fd) list_set_graphic_pane_g2_ParamLimits

0x8e37,	// (0x0004a1fd) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00050af9) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00050af9) list_set_graphic_pane_g

0x0009,

0xfab4,	// (0x00050e7a) volume_small_pane_cp_g

0x8e5b,	// (0x0004a221) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e5b,	// (0x0004a221) list_double2_large_graphic_pane_g1_cp2

0x8e69,	// (0x0004a22f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e69,	// (0x0004a22f) list_double2_large_graphic_pane_g2_cp2

0x8e7a,	// (0x0004a240) list_double2_large_graphic_pane_g3_cp2

0x8e82,	// (0x0004a248) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e82,	// (0x0004a248) list_double2_large_graphic_pane_t1_cp2

0x8e98,	// (0x0004a25e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e98,	// (0x0004a25e) list_double2_large_graphic_pane_t2_cp2

0xaa6d,	// (0x0004be33) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa6d,	// (0x0004be33) list_double_large_graphic_pane_g1_cp2

0xaa80,	// (0x0004be46) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa80,	// (0x0004be46) list_double_large_graphic_pane_g2_cp2

0x9002,	// (0x0004a3c8) list_double_large_graphic_pane_g3_cp2

0xaa91,	// (0x0004be57) list_double_large_graphic_pane_g4_cp

0xaa99,	// (0x0004be5f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa99,	// (0x0004be5f) list_double_large_graphic_pane_t1_cp2

0xaab0,	// (0x0004be76) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaab0,	// (0x0004be76) list_double_large_graphic_pane_t2_cp2

0x8efe,	// (0x0004a2c4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8efe,	// (0x0004a2c4) list_double2_graphic_pane_g1_cp2

0x8f0c,	// (0x0004a2d2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f0c,	// (0x0004a2d2) list_double2_graphic_pane_g2_cp2

0x8f1d,	// (0x0004a2e3) list_double2_graphic_pane_g3_cp2

0x8f27,	// (0x0004a2ed) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f27,	// (0x0004a2ed) list_double2_graphic_pane_t1_cp2

0x8f3d,	// (0x0004a303) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f3d,	// (0x0004a303) list_double2_graphic_pane_t2_cp2

0x8db9,	// (0x0004a17f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8db9,	// (0x0004a17f) list_single_number_heading_pane_g1_cp2

0x8f4f,	// (0x0004a315) list_single_number_heading_pane_g2_cp2

0x8f57,	// (0x0004a31d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f57,	// (0x0004a31d) list_single_number_heading_pane_t1_cp2

0x8f6d,	// (0x0004a333) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f6d,	// (0x0004a333) list_single_number_heading_pane_t2_cp2

0x8f81,	// (0x0004a347) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f81,	// (0x0004a347) list_single_number_heading_pane_t3_cp2

0x8db9,	// (0x0004a17f) list_single_heading_pane_g1_cp2_ParamLimits

0x8db9,	// (0x0004a17f) list_single_heading_pane_g1_cp2

0x8f4f,	// (0x0004a315) list_single_heading_pane_g2_cp2

0x8f57,	// (0x0004a31d) list_single_heading_pane_t1_cp2_ParamLimits

0x8f57,	// (0x0004a31d) list_single_heading_pane_t1_cp2

0xa867,	// (0x0004bc2d) list_single_heading_pane_t2_cp2_ParamLimits

0xa867,	// (0x0004bc2d) list_single_heading_pane_t2_cp2

0xa7af,	// (0x0004bb75) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7af,	// (0x0004bb75) list_double_graphic_pane_g1_cp2

0xa7bb,	// (0x0004bb81) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7bb,	// (0x0004bb81) list_double_graphic_pane_g2_cp2

0xa7ca,	// (0x0004bb90) list_double_graphic_pane_g3_cp2

0xa7d2,	// (0x0004bb98) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7d2,	// (0x0004bb98) list_double_graphic_pane_t1_cp2

0xa7e8,	// (0x0004bbae) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7e8,	// (0x0004bbae) list_double_graphic_pane_t2_cp2

0x8ff6,	// (0x0004a3bc) list_double_number_pane_g1_cp2_ParamLimits

0x8ff6,	// (0x0004a3bc) list_double_number_pane_g1_cp2

0x9002,	// (0x0004a3c8) list_double_number_pane_g2_cp2

0xa773,	// (0x0004bb39) list_double_number_pane_t1_cp2_ParamLimits

0xa773,	// (0x0004bb39) list_double_number_pane_t1_cp2

0xa787,	// (0x0004bb4d) list_double_number_pane_t2_cp2_ParamLimits

0xa787,	// (0x0004bb4d) list_double_number_pane_t2_cp2

0xa79d,	// (0x0004bb63) list_double_number_pane_t3_cp2_ParamLimits

0xa79d,	// (0x0004bb63) list_double_number_pane_t3_cp2

0xa65c,	// (0x0004ba22) list_single_graphic_pane_g1_cp2_ParamLimits

0xa65c,	// (0x0004ba22) list_single_graphic_pane_g1_cp2

0x9067,	// (0x0004a42d) list_single_graphic_pane_g2_cp2_ParamLimits

0x9067,	// (0x0004a42d) list_single_graphic_pane_g2_cp2

0x9073,	// (0x0004a439) list_single_graphic_pane_g3_cp2

0xa632,	// (0x0004b9f8) list_single_graphic_pane_t1_cp2_ParamLimits

0xa632,	// (0x0004b9f8) list_single_graphic_pane_t1_cp2

0x9067,	// (0x0004a42d) list_single_number_pane_g1_cp2_ParamLimits

0x9067,	// (0x0004a42d) list_single_number_pane_g1_cp2

0x9073,	// (0x0004a439) list_single_number_pane_g2_cp2

0xa632,	// (0x0004b9f8) list_single_number_pane_t1_cp2_ParamLimits

0xa632,	// (0x0004b9f8) list_single_number_pane_t1_cp2

0xa648,	// (0x0004ba0e) list_single_number_pane_t2_cp2_ParamLimits

0xa648,	// (0x0004ba0e) list_single_number_pane_t2_cp2

0x8e69,	// (0x0004a22f) list_double2_pane_g1_cp2_ParamLimits

0x8e69,	// (0x0004a22f) list_double2_pane_g1_cp2

0x8e7a,	// (0x0004a240) list_double2_pane_g2_cp2

0x8fce,	// (0x0004a394) list_double2_pane_t1_cp2_ParamLimits

0x8fce,	// (0x0004a394) list_double2_pane_t1_cp2

0x8fe4,	// (0x0004a3aa) list_double2_pane_t2_cp2_ParamLimits

0x8fe4,	// (0x0004a3aa) list_double2_pane_t2_cp2

0x8ff6,	// (0x0004a3bc) list_double_pane_g1_cp2_ParamLimits

0x8ff6,	// (0x0004a3bc) list_double_pane_g1_cp2

0x9002,	// (0x0004a3c8) list_double_pane_g2_cp2

0x900a,	// (0x0004a3d0) list_double_pane_t1_cp2_ParamLimits

0x900a,	// (0x0004a3d0) list_double_pane_t1_cp2

0x9020,	// (0x0004a3e6) list_double_pane_t2_cp2_ParamLimits

0x9020,	// (0x0004a3e6) list_double_pane_t2_cp2

0x9057,	// (0x0004a41d) list_single_pane_cp2_g3

0x9067,	// (0x0004a42d) list_single_pane_g1_cp2_ParamLimits

0x9067,	// (0x0004a42d) list_single_pane_g1_cp2

0x9073,	// (0x0004a439) list_single_pane_g2_cp2

0x907b,	// (0x0004a441) list_single_pane_t1_cp2_ParamLimits

0x907b,	// (0x0004a441) list_single_pane_t1_cp2

0x9093,	// (0x0004a459) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9093,	// (0x0004a459) list_single_large_graphic_pane_g1_cp2

0x90a1,	// (0x0004a467) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90a1,	// (0x0004a467) list_single_large_graphic_pane_g2_cp2

0x90ad,	// (0x0004a473) list_single_large_graphic_pane_g3_cp2

0x90b5,	// (0x0004a47b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90b5,	// (0x0004a47b) list_single_large_graphic_pane_g4_cp1

0x90cf,	// (0x0004a495) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90cf,	// (0x0004a495) list_single_large_graphic_pane_t1_cp2

0xa5fc,	// (0x0004b9c2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5fc,	// (0x0004b9c2) list_single_graphic_heading_pane_g1_cp2

0xa5c9,	// (0x0004b98f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5c9,	// (0x0004b98f) list_single_graphic_heading_pane_g4_cp2

0x9073,	// (0x0004a439) list_single_graphic_heading_pane_g5_cp2

0xa608,	// (0x0004b9ce) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa608,	// (0x0004b9ce) list_single_graphic_heading_pane_t1_cp2

0xa61e,	// (0x0004b9e4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa61e,	// (0x0004b9e4) list_single_graphic_heading_pane_t2_cp2

0xa5bd,	// (0x0004b983) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5bd,	// (0x0004b983) list_single_2graphic_pane_g1_cp2

0xa5c9,	// (0x0004b98f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5c9,	// (0x0004b98f) list_single_2graphic_pane_g2_cp2

0x9073,	// (0x0004a439) list_single_2graphic_pane_g3_cp2

0xa5da,	// (0x0004b9a0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5da,	// (0x0004b9a0) list_single_2graphic_pane_g4_cp2

0xa5e6,	// (0x0004b9ac) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5e6,	// (0x0004b9ac) list_single_2graphic_pane_t1_cp2

0x08d5,	// (0x00041c9b) list_highlight_pane_g10_cp1

0xa195,	// (0x0004b55b) list_highlight_pane_g1_cp1

0xa19d,	// (0x0004b563) list_highlight_pane_g2_cp1

0xa1a5,	// (0x0004b56b) list_highlight_pane_g3_cp1

0xa1ad,	// (0x0004b573) list_highlight_pane_g4_cp1

0xa1b5,	// (0x0004b57b) list_highlight_pane_g5_cp1

0xa1bd,	// (0x0004b583) list_highlight_pane_g6_cp1

0xa1c5,	// (0x0004b58b) list_highlight_pane_g7_cp1

0xa1cd,	// (0x0004b593) list_highlight_pane_g8_cp1

0xa1d5,	// (0x0004b59b) list_highlight_pane_g9_cp1

0xa0b5,	// (0x0004b47b) form_field_slider_pane_t3

0xa0c3,	// (0x0004b489) form_field_slider_pane_t4

0xa0d1,	// (0x0004b497) slider_form_pane_ParamLimits

0xa0d1,	// (0x0004b497) slider_form_pane

0x08df,	// (0x00041ca5) control_abbreviations

0x08df,	// (0x00041ca5) control_conventions

0x08df,	// (0x00041ca5) control_definitions

0x08df,	// (0x00041ca5) format_table_attribute

0xa8bd,	// (0x0004bc83) bg_popup_preview_window_pane_g9

0x08df,	// (0x00041ca5) format_table_data2

0x08df,	// (0x00041ca5) format_table_data3

0x08df,	// (0x00041ca5) format_table_data_example

0x0008,

0x08df,	// (0x00041ca5) intro_purpose

0xf8cf,	// (0x00050c95) bg_popup_preview_window_pane_g

0x08df,	// (0x00041ca5) texts_category

0x08df,	// (0x00041ca5) texts_graphics

0x90e5,	// (0x0004a4ab) text_digital

0x90f4,	// (0x0004a4ba) text_primary

0x9103,	// (0x0004a4c9) text_primary_small

0x9112,	// (0x0004a4d8) text_secondary

0x9121,	// (0x0004a4e7) text_title

0xb020,	// (0x0004c3e6) bg_passive_tab_pane_g1_cp3_srt

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp3_srt

0xb029,	// (0x0004c3ef) bg_passive_tab_pane_g3_cp3_srt

0x093b,	// (0x00041d01) bg_active_tab_pane_cp3_srt_ParamLimits

0x093b,	// (0x00041d01) bg_active_tab_pane_cp3_srt

0xb032,	// (0x0004c3f8) tabs_4_active_pane_srt_g1

0xb03a,	// (0x0004c400) tabs_4_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x0004c400) tabs_4_active_pane_srt_t1

0xb020,	// (0x0004c3e6) bg_active_tab_pane_g1_cp3_copy1

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp3_copy1

0xb029,	// (0x0004c3ef) bg_active_tab_pane_g3_cp3_copy1

0x093b,	// (0x00041d01) tabs_2_long_active_pane_srt_ParamLimits

0x093b,	// (0x00041d01) tabs_2_long_active_pane_srt

0x093b,	// (0x00041d01) tabs_2_long_passive_pane_srt_ParamLimits

0x093b,	// (0x00041d01) tabs_2_long_passive_pane_srt

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp4_srt

0xacf7,	// (0x0004c0bd) bg_passive_tab_pane_g1_cp4_srt

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp4_srt

0xad00,	// (0x0004c0c6) bg_passive_tab_pane_g3_cp4_srt

0x6824,	// (0x00047bea) bg_active_tab_pane_cp4_srt_ParamLimits

0x6824,	// (0x00047bea) bg_active_tab_pane_cp4_srt

0xad09,	// (0x0004c0cf) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad09,	// (0x0004c0cf) tabs_2_long_active_pane_srt_t1

0xacf7,	// (0x0004c0bd) bg_active_tab_pane_g1_cp4_srt

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp4_srt

0xad00,	// (0x0004c0c6) bg_active_tab_pane_g3_cp4_srt

0x092d,	// (0x00041cf3) tabs_3_long_active_pane_srt_ParamLimits

0x092d,	// (0x00041cf3) tabs_3_long_active_pane_srt

0x092d,	// (0x00041cf3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x092d,	// (0x00041cf3) tabs_3_long_passive_pane_cp_srt

0x092d,	// (0x00041cf3) tabs_3_long_passive_pane_srt_ParamLimits

0x092d,	// (0x00041cf3) tabs_3_long_passive_pane_srt

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp5_srt

0x8e03,	// (0x0004a1c9) bg_passive_tab_pane_g1_cp5_srt

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp5_srt

0x8e0c,	// (0x0004a1d2) bg_passive_tab_pane_g3_cp5_srt

0x6824,	// (0x00047bea) bg_active_tab_pane_cp5_srt_ParamLimits

0x6824,	// (0x00047bea) bg_active_tab_pane_cp5_srt

0xace5,	// (0x0004c0ab) tabs_3_long_active_pane_srt_t1_ParamLimits

0xace5,	// (0x0004c0ab) tabs_3_long_active_pane_srt_t1

0x8e03,	// (0x0004a1c9) bg_active_tab_pane_g1_cp5_srt

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp5_srt

0x8e0c,	// (0x0004a1d2) bg_active_tab_pane_g3_cp5_srt

0xacd7,	// (0x0004c09d) navi_text_pane_srt_t1

0xaccf,	// (0x0004c095) navi_icon_pane_srt_g1

0x92f9,	// (0x0004a6bf) midp_editing_number_pane_srt

0x9130,	// (0x0004a4f6) midp_ticker_pane_srt

0x9301,	// (0x0004a6c7) midp_ticker_pane_srt_g1

0x9309,	// (0x0004a6cf) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00050b18) midp_ticker_pane_srt_g

0x9311,	// (0x0004a6d7) midp_ticker_pane_srt_t1

0xacc0,	// (0x0004c086) midp_editing_number_pane_t1_copy1

0x9138,	// (0x0004a4fe) listscroll_midp_pane

0x9138,	// (0x0004a4fe) midp_form_pane

0x91a7,	// (0x0004a56d) midp_info_popup_window_ParamLimits

0x91a7,	// (0x0004a56d) midp_info_popup_window

0x1064,	// (0x0004242a) bg_popup_sub_pane_cp50_ParamLimits

0x1064,	// (0x0004242a) bg_popup_sub_pane_cp50

0x9db7,	// (0x0004b17d) listscroll_midp_info_pane_ParamLimits

0x9db7,	// (0x0004b17d) listscroll_midp_info_pane

0x9d97,	// (0x0004b15d) listscroll_form_midp_pane_ParamLimits

0x9d97,	// (0x0004b15d) listscroll_form_midp_pane

0x9da3,	// (0x0004b169) scroll_bar_cp050

0x9d77,	// (0x0004b13d) list_midp_pane

0xbad4,	// (0x0004ce9a) signal_pane_g2_cp

0x9cb1,	// (0x0004b077) listscroll_midp_info_pane_t1_ParamLimits

0x9cb1,	// (0x0004b077) listscroll_midp_info_pane_t1

0x9cc9,	// (0x0004b08f) listscroll_midp_info_pane_t2_ParamLimits

0x9cc9,	// (0x0004b08f) listscroll_midp_info_pane_t2

0x9d07,	// (0x0004b0cd) listscroll_midp_info_pane_t3_ParamLimits

0x9d07,	// (0x0004b0cd) listscroll_midp_info_pane_t3

0x9d41,	// (0x0004b107) listscroll_midp_info_pane_t4_ParamLimits

0x9d41,	// (0x0004b107) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x00050bd0) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x00050bd0) listscroll_midp_info_pane_t

0x10b9,	// (0x0004247f) scroll_pane_cp21

0x9c4b,	// (0x0004b011) form_midp_field_choice_group_pane

0x9c54,	// (0x0004b01a) form_midp_field_text_pane

0x9c97,	// (0x0004b05d) form_midp_field_time_pane

0x9c9f,	// (0x0004b065) form_midp_gauge_slider_pane

0x9ca8,	// (0x0004b06e) form_midp_gauge_wait_pane

0x08df,	// (0x00041ca5) form_midp_image_pane

0x592c,	// (0x00046cf2) list_single_midp_pane_ParamLimits

0x592c,	// (0x00046cf2) list_single_midp_pane

0x9c0f,	// (0x0004afd5) form_midp_field_text_pane_t1

0x9a01,	// (0x0004adc7) input_focus_pane_cp050

0x9c3a,	// (0x0004b000) list_midp_form_text_pane

0x9bde,	// (0x0004afa4) form_midp_field_choice_group_pane_t1

0x9bec,	// (0x0004afb2) input_focus_pane_cp051

0x9c00,	// (0x0004afc6) list_midp_choice_pane

0x08df,	// (0x00041ca5) status_idle_pane

0x9bc2,	// (0x0004af88) form_midp_field_time_pane_t1

0x08d5,	// (0x00041c9b) wait_anim_pane_g2_copy1

0x9bd0,	// (0x0004af96) form_midp_field_time_pane_t2

0x0001,

0x9257,	// (0x0004a61d) aid_navinavi_width_2_pane

0xf805,	// (0x00050bcb) form_midp_field_time_pane_t

0x08df,	// (0x00041ca5) input_focus_pane_cp052

0x08df,	// (0x00041ca5) bg_input_focus_pane_cp040

0x9b82,	// (0x0004af48) form_midp_gauge_slider_pane_t1

0x9b90,	// (0x0004af56) form_midp_gauge_slider_pane_t2

0x9b9e,	// (0x0004af64) form_midp_gauge_slider_pane_t3

0x9bac,	// (0x0004af72) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x00050bc2) form_midp_gauge_slider_pane_t

0x9bba,	// (0x0004af80) form_midp_slider_pane

0x093b,	// (0x00041d01) bg_input_focus_pane_cp041_ParamLimits

0x093b,	// (0x00041d01) bg_input_focus_pane_cp041

0x9b4f,	// (0x0004af15) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b4f,	// (0x0004af15) form_midp_gauge_wait_pane_t1

0x9b61,	// (0x0004af27) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b61,	// (0x0004af27) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x00050bbd) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x00050bbd) form_midp_gauge_wait_pane_t

0x9b73,	// (0x0004af39) form_midp_wait_pane_ParamLimits

0x9b73,	// (0x0004af39) form_midp_wait_pane

0x9b17,	// (0x0004aedd) form_midp_image_pane_g1

0x9b20,	// (0x0004aee6) form_midp_image_pane_t1

0x9b2f,	// (0x0004aef5) form_midp_image_pane_t2

0x9b3e,	// (0x0004af04) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x00050bb6) form_midp_image_pane_t

0x9b0e,	// (0x0004aed4) list_single_midp_pane_g1

0x591d,	// (0x00046ce3) list_single_midp_pane_t1

0x9af4,	// (0x0004aeba) list_midp_form_item_pane_ParamLimits

0x9af4,	// (0x0004aeba) list_midp_form_item_pane

0x91ff,	// (0x0004a5c5) list_midp_form_item_pane_t1

0x920e,	// (0x0004a5d4) midp_ticker_pane_g1

0x921a,	// (0x0004a5e0) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00050afe) midp_ticker_pane_g

0x9226,	// (0x0004a5ec) midp_ticker_pane_t1

0xaf2d,	// (0x0004c2f3) midp_editing_number_pane_t1

0xaf0b,	// (0x0004c2d1) midp_editing_number_pane

0xaf1a,	// (0x0004c2e0) midp_ticker_pane

0xacb0,	// (0x0004c076) ai_message_heading_pane

0x08df,	// (0x00041ca5) bg_popup_window_pane_cp14

0xacb8,	// (0x0004c07e) listscroll_ai_message_pane

0xac36,	// (0x0004bffc) ai_message_heading_pane_g1_ParamLimits

0xac36,	// (0x0004bffc) ai_message_heading_pane_g1

0xac42,	// (0x0004c008) ai_message_heading_pane_g2_ParamLimits

0xac42,	// (0x0004c008) ai_message_heading_pane_g2

0xac50,	// (0x0004c016) ai_message_heading_pane_g3_ParamLimits

0xac50,	// (0x0004c016) ai_message_heading_pane_g3

0xac5c,	// (0x0004c022) ai_message_heading_pane_g4_ParamLimits

0xac5c,	// (0x0004c022) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x00050cf7) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x00050cf7) ai_message_heading_pane_g

0xac68,	// (0x0004c02e) ai_message_heading_pane_t1_ParamLimits

0xac68,	// (0x0004c02e) ai_message_heading_pane_t1

0xac82,	// (0x0004c048) ai_message_heading_pane_t2_ParamLimits

0xac82,	// (0x0004c048) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00050d00) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00050d00) ai_message_heading_pane_t

0xac96,	// (0x0004c05c) bg_popup_heading_pane_cp1_ParamLimits

0xac96,	// (0x0004c05c) bg_popup_heading_pane_cp1

0xac24,	// (0x0004bfea) list_ai_message_pane_ParamLimits

0xac24,	// (0x0004bfea) list_ai_message_pane

0x10b9,	// (0x0004247f) scroll_pane_cp10

0xabc0,	// (0x0004bf86) list_ai_message_pane_g1

0xabc8,	// (0x0004bf8e) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x00050cd4) list_ai_message_pane_g

0xabd0,	// (0x0004bf96) list_ai_message_pane_t1_ParamLimits

0xabd0,	// (0x0004bf96) list_ai_message_pane_t1

0xabe5,	// (0x0004bfab) list_ai_message_pane_t2_ParamLimits

0xabe5,	// (0x0004bfab) list_ai_message_pane_t2

0xabfa,	// (0x0004bfc0) list_ai_message_pane_t3_ParamLimits

0xabfa,	// (0x0004bfc0) list_ai_message_pane_t3

0xac0f,	// (0x0004bfd5) list_ai_message_pane_t4_ParamLimits

0xac0f,	// (0x0004bfd5) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00050cd9) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00050cd9) list_ai_message_pane_t

0xaba9,	// (0x0004bf6f) cell_ai_soft_ind_pane_ParamLimits

0xaba9,	// (0x0004bf6f) cell_ai_soft_ind_pane

0x9238,	// (0x0004a5fe) cell_ai_soft_ind_pane_g1_ParamLimits

0x9238,	// (0x0004a5fe) cell_ai_soft_ind_pane_g1

0x08df,	// (0x00041ca5) grid_highlight_cp1

0x9245,	// (0x0004a60b) text_secondary_cp56_ParamLimits

0x9245,	// (0x0004a60b) text_secondary_cp56

0xab7e,	// (0x0004bf44) example_general_pane_ParamLimits

0xab7e,	// (0x0004bf44) example_general_pane

0xab8a,	// (0x0004bf50) example_parent_pane_g1_ParamLimits

0xab8a,	// (0x0004bf50) example_parent_pane_g1

0xab96,	// (0x0004bf5c) example_parent_pane_t1_ParamLimits

0xab96,	// (0x0004bf5c) example_parent_pane_t1

0x744d,	// (0x00048813) popup_preview_text_window_ParamLimits

0x744d,	// (0x00048813) popup_preview_text_window

0x905f,	// (0x0004a425) list_single_pane_cp2_g4

0x0b3c,	// (0x00041f02) bg_popup_preview_window_pane_ParamLimits

0x0b3c,	// (0x00041f02) bg_popup_preview_window_pane

0xa8c7,	// (0x0004bc8d) popup_preview_text_window_t1_ParamLimits

0xa8c7,	// (0x0004bc8d) popup_preview_text_window_t1

0xa8e5,	// (0x0004bcab) popup_preview_text_window_t2_ParamLimits

0xa8e5,	// (0x0004bcab) popup_preview_text_window_t2

0xa92e,	// (0x0004bcf4) popup_preview_text_window_t3_ParamLimits

0xa92e,	// (0x0004bcf4) popup_preview_text_window_t3

0xa973,	// (0x0004bd39) popup_preview_text_window_t4_ParamLimits

0xa973,	// (0x0004bd39) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x00050ca8) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x00050ca8) popup_preview_text_window_t

0xa9f1,	// (0x0004bdb7) scroll_pane_cp11

0x998d,	// (0x0004ad53) bg_popup_preview_window_pane_g1

0xa87b,	// (0x0004bc41) bg_popup_preview_window_pane_g2

0xa885,	// (0x0004bc4b) bg_popup_preview_window_pane_g3

0xa88f,	// (0x0004bc55) bg_popup_preview_window_pane_g4

0xa899,	// (0x0004bc5f) bg_popup_preview_window_pane_g5

0xa8a3,	// (0x0004bc69) bg_popup_preview_window_pane_g6

0xa8ab,	// (0x0004bc71) bg_popup_preview_window_pane_g7

0xa8b3,	// (0x0004bc79) bg_popup_preview_window_pane_g8

0x5f94,	// (0x0004735a) aid_popup_width_pane

0x7429,	// (0x000487ef) popup_midp_note_alarm_window_ParamLimits

0x7429,	// (0x000487ef) popup_midp_note_alarm_window

0x0f71,	// (0x00042337) data_form_pane_ParamLimits

0x55df,	// (0x000469a5) form_field_data_pane_g1

0x55e9,	// (0x000469af) form_field_data_pane_t1_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_ParamLimits

0x5603,	// (0x000469c9) data_form_wide_pane_ParamLimits

0x5614,	// (0x000469da) form_field_data_wide_pane_g1

0x5620,	// (0x000469e6) form_field_data_wide_pane_t1_ParamLimits

0x0cf8,	// (0x000420be) input_focus_pane_cp6_ParamLimits

0x67fc,	// (0x00047bc2) input_popup_find_pane_g1_ParamLimits

0x67fc,	// (0x00047bc2) input_popup_find_pane_g1

0x6962,	// (0x00047d28) aid_navi_side_left_pane

0x6977,	// (0x00047d3d) aid_navi_side_right_pane

0xa290,	// (0x0004b656) bg_popup_window_pane_cp30_ParamLimits

0xa290,	// (0x0004b656) bg_popup_window_pane_cp30

0xa30a,	// (0x0004b6d0) popup_midp_note_alarm_window_g1_ParamLimits

0xa30a,	// (0x0004b6d0) popup_midp_note_alarm_window_g1

0xa33a,	// (0x0004b700) popup_midp_note_alarm_window_t1_ParamLimits

0xa33a,	// (0x0004b700) popup_midp_note_alarm_window_t1

0xa3db,	// (0x0004b7a1) popup_midp_note_alarm_window_t2_ParamLimits

0xa3db,	// (0x0004b7a1) popup_midp_note_alarm_window_t2

0xa489,	// (0x0004b84f) popup_midp_note_alarm_window_t3_ParamLimits

0xa489,	// (0x0004b84f) popup_midp_note_alarm_window_t3

0xa4bb,	// (0x0004b881) popup_midp_note_alarm_window_t4_ParamLimits

0xa4bb,	// (0x0004b881) popup_midp_note_alarm_window_t4

0xa4e1,	// (0x0004b8a7) popup_midp_note_alarm_window_t5_ParamLimits

0xa4e1,	// (0x0004b8a7) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x00050c45) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x00050c45) popup_midp_note_alarm_window_t

0xa58d,	// (0x0004b953) wait_bar_pane_cp1_ParamLimits

0xa58d,	// (0x0004b953) wait_bar_pane_cp1

0x08df,	// (0x00041ca5) wait_anim_pane_copy1

0x08df,	// (0x00041ca5) wait_border_pane_copy1

0x9f75,	// (0x0004b33b) wait_border_pane_g1_copy1

0x563a,	// (0x00046a00) form_field_popup_pane_g1

0x5642,	// (0x00046a08) form_field_popup_pane_t1_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_cp7_ParamLimits

0x0fab,	// (0x00042371) list_form_pane_ParamLimits

0x565c,	// (0x00046a22) form_field_popup_wide_pane_g1

0x5664,	// (0x00046a2a) form_field_popup_wide_pane_t1_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_cp8_ParamLimits

0x0fb7,	// (0x0004237d) list_form_wide_pane_ParamLimits

0xb0bb,	// (0x0004c481) aid_size_cell_graphic_pane

0x56f0,	// (0x00046ab6) data_form_pane_t1_ParamLimits

0x5973,	// (0x00046d39) data_form_wide_pane_t1_ParamLimits

0x9546,	// (0x0004a90c) bg_status_flat_pane

0x63b9,	// (0x0004777f) title_pane_t1_ParamLimits

0x08f5,	// (0x00041cbb) title_pane_t2_ParamLimits

0x091b,	// (0x00041ce1) title_pane_t3_ParamLimits

0xf532,	// (0x000508f8) title_pane_t_ParamLimits

0x6aea,	// (0x00047eb0) level_1_signal_ParamLimits

0x6af7,	// (0x00047ebd) level_2_signal_ParamLimits

0x6b04,	// (0x00047eca) level_3_signal_ParamLimits

0x6b11,	// (0x00047ed7) level_4_signal_ParamLimits

0x6b1e,	// (0x00047ee4) level_5_signal_ParamLimits

0x6b2b,	// (0x00047ef1) level_6_signal_ParamLimits

0x6b38,	// (0x00047efe) level_7_signal_ParamLimits

0x6aea,	// (0x00047eb0) level_1_battery_ParamLimits

0x6af7,	// (0x00047ebd) level_2_battery_ParamLimits

0x6b04,	// (0x00047eca) level_3_battery_ParamLimits

0x6b11,	// (0x00047ed7) level_4_battery_ParamLimits

0x6b1e,	// (0x00047ee4) level_5_battery_ParamLimits

0x6b2b,	// (0x00047ef1) level_6_battery_ParamLimits

0x6b38,	// (0x00047efe) level_7_battery_ParamLimits

0xa195,	// (0x0004b55b) bg_status_flat_pane_g1

0xa19d,	// (0x0004b563) bg_status_flat_pane_g2

0xa1a5,	// (0x0004b56b) bg_status_flat_pane_g3

0xa1ad,	// (0x0004b573) bg_status_flat_pane_g4

0xa1b5,	// (0x0004b57b) bg_status_flat_pane_g5

0xa1bd,	// (0x0004b583) bg_status_flat_pane_g6

0xa1c5,	// (0x0004b58b) bg_status_flat_pane_g7

0x6429,	// (0x000477ef) tabs_3_active_pane_t1_ParamLimits

0x6429,	// (0x000477ef) tabs_3_passive_pane_t1_ParamLimits

0x6443,	// (0x00047809) tabs_4_active_pane_t1_ParamLimits

0x6443,	// (0x00047809) tabs_4_1_passive_pane_t1_ParamLimits

0x6812,	// (0x00047bd8) tabs_2_active_pane_t1_ParamLimits

0x6812,	// (0x00047bd8) tabs_2_passive_pane_t1_ParamLimits

0x6824,	// (0x00047bea) bg_active_tab_pane_cp4_ParamLimits

0x6832,	// (0x00047bf8) tabs_2_long_active_pane_t1_ParamLimits

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp4_ParamLimits

0x7749,	// (0x00048b0f) list_single_midp_graphic_pane_t1_ParamLimits

0x6824,	// (0x00047bea) bg_active_tab_pane_cp5_ParamLimits

0x6851,	// (0x00047c17) tabs_3_long_active_pane_t1_ParamLimits

0x6845,	// (0x00047c0b) bg_passive_tab_pane_cp5_ParamLimits

0x7749,	// (0x00048b0f) list_single_midp_graphic_pane_t1

0x9546,	// (0x0004a90c) bg_status_flat_pane_ParamLimits

0x9611,	// (0x0004a9d7) indicator_pane_cp2_ParamLimits

0x9611,	// (0x0004a9d7) indicator_pane_cp2

0x9754,	// (0x0004ab1a) navi_pane_srt_ParamLimits

0x9754,	// (0x0004ab1a) navi_pane_srt

0x9778,	// (0x0004ab3e) popup_clock_digital_analogue_window_cp1

0x097f,	// (0x00041d45) indicator_pane_t1

0x9130,	// (0x0004a4f6) copy_highlight_pane

0x9130,	// (0x0004a4f6) cursor_graphics_pane

0x9130,	// (0x0004a4f6) graphic_within_text_pane

0x9130,	// (0x0004a4f6) link_highlight_pane

0xa9b4,	// (0x0004bd7a) popup_preview_text_window_t5_ParamLimits

0xa9b4,	// (0x0004bd7a) popup_preview_text_window_t5

0x9261,	// (0x0004a627) cursor_digital_pane

0x9261,	// (0x0004a627) cursor_primary_pane

0x9272,	// (0x0004a638) cursor_primary_small_pane

0x927a,	// (0x0004a640) cursor_secondary_pane

0x9282,	// (0x0004a648) cursor_title_pane

0x9261,	// (0x0004a627) link_highlight_digital_pane

0x9269,	// (0x0004a62f) link_highlight_primary_pane

0x9272,	// (0x0004a638) link_highlight_primary_small_pane

0x927a,	// (0x0004a640) link_highlight_secondary_pane

0x9282,	// (0x0004a648) link_highlight_title_pane

0x9261,	// (0x0004a627) copy_highlight_digital_pane

0x9261,	// (0x0004a627) copy_highlight_primary_pane

0x9272,	// (0x0004a638) copy_highlight_primary_small_pane

0x927a,	// (0x0004a640) copy_highlight_secondary_pane

0x9282,	// (0x0004a648) copy_highlight_title_pane

0x927a,	// (0x0004a640) graphic_text_digital_pane

0xa233,	// (0x0004b5f9) graphic_text_primary_pane

0xa23c,	// (0x0004b602) graphic_text_primary_small_pane

0x9272,	// (0x0004a638) graphic_text_secondary_pane

0x9261,	// (0x0004a627) graphic_text_title_pane

0x928a,	// (0x0004a650) cursor_primary_pane_g1

0xa225,	// (0x0004b5eb) cursor_text_primary_t1

0xa20d,	// (0x0004b5d3) cursor_primary_small_pane_g1

0xa217,	// (0x0004b5dd) cursor_text_primary_small_t1

0xa1f5,	// (0x0004b5bb) cursor_primary_small_pane_g1_copy1

0xa1ff,	// (0x0004b5c5) cursor_text_primary_small_t1_copy1

0xa1dd,	// (0x0004b5a3) cursor_text_title_t1

0xa1eb,	// (0x0004b5b1) cursor_title_pane_g1

0x928a,	// (0x0004a650) cursor_digital_pane_g1

0x9294,	// (0x0004a65a) cursor_text_digital_t1

0x92a2,	// (0x0004a668) link_highlight_primary_pane_g1

0xa186,	// (0x0004b54c) link_highlight_primary_pane_t1

0x92a2,	// (0x0004a668) link_highlight_primary_small_pane_g1

0x92aa,	// (0x0004a670) link_highlight_primary_small_pane_t1

0x92b9,	// (0x0004a67f) link_highlight_secondary_pane_g1

0x92c1,	// (0x0004a687) link_highlight_secondary_pane_t1

0xa0fa,	// (0x0004b4c0) link_highlight_title_pane_g1

0xa102,	// (0x0004b4c8) link_highlight_title_pane_t1

0xa0e3,	// (0x0004b4a9) link_highlight_digital_pane_g1

0xa0eb,	// (0x0004b4b1) link_highlight_digital_pane_t1

0x9fab,	// (0x0004b371) copy_highlight_primary_pane_g1

0x9fc2,	// (0x0004b388) copy_highlight_primary_pane_t1

0x9fab,	// (0x0004b371) copy_highlight_primary_small_pane_g1

0x9fb3,	// (0x0004b379) copy_highlight_primary_small_pane_t1

0x92d0,	// (0x0004a696) copy_highlight_secondary_pane_g1

0x92d8,	// (0x0004a69e) copy_highlight_secondary_pane_t1

0x9f94,	// (0x0004b35a) copy_highlight_title_pane_g1

0x9f9c,	// (0x0004b362) copy_highlight_title_pane_t1

0x9fab,	// (0x0004b371) copy_highlight_digital_pane_g1

0xb28d,	// (0x0004c653) copy_highlight_digital_pane_t1

0xb1e1,	// (0x0004c5a7) graphic_text_primary_pane_g1

0xb271,	// (0x0004c637) graphic_text_primary_pane_t1

0xb27f,	// (0x0004c645) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00050d74) graphic_text_primary_pane_t

0xb24d,	// (0x0004c613) graphic_text_primary_small_pane_g1

0xb255,	// (0x0004c61b) graphic_text_primary_small_pane_t1

0xb263,	// (0x0004c629) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00050d6f) graphic_text_primary_small_pane_t

0xb229,	// (0x0004c5ef) graphic_text_secondary_pane_g1

0xb231,	// (0x0004c5f7) graphic_text_secondary_pane_t1

0xb23f,	// (0x0004c605) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00050d6a) graphic_text_secondary_pane_t

0xb205,	// (0x0004c5cb) graphic_text_title_pane_g1

0xb20d,	// (0x0004c5d3) graphic_text_title_pane_t1

0xb21b,	// (0x0004c5e1) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00050d65) graphic_text_title_pane_t

0xb1e1,	// (0x0004c5a7) graphic_text_digital_pane_g1

0xb1e9,	// (0x0004c5af) graphic_text_digital_pane_t1

0xb1f7,	// (0x0004c5bd) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00050d60) graphic_text_digital_pane_t

0x093b,	// (0x00041d01) navi_icon_pane_srt_ParamLimits

0x093b,	// (0x00041d01) navi_icon_pane_srt

0x08df,	// (0x00041ca5) navi_midp_pane_srt

0x08df,	// (0x00041ca5) navi_navi_pane_srt

0x093b,	// (0x00041d01) navi_text_pane_srt_ParamLimits

0x093b,	// (0x00041d01) navi_text_pane_srt

0xb1ac,	// (0x0004c572) navi_navi_icon_text_pane_srt

0xb1b4,	// (0x0004c57a) navi_navi_pane_srt_g1_ParamLimits

0xb1b4,	// (0x0004c57a) navi_navi_pane_srt_g1

0xb1c6,	// (0x0004c58c) navi_navi_pane_srt_g2_ParamLimits

0xb1c6,	// (0x0004c58c) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00050d5b) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00050d5b) navi_navi_pane_srt_g

0xb1d8,	// (0x0004c59e) navi_navi_tabs_pane_srt

0xb1ac,	// (0x0004c572) navi_navi_text_pane_srt

0xb1ac,	// (0x0004c572) navi_navi_volume_pane_srt

0xb19d,	// (0x0004c563) navi_navi_text_pane_srt_t1

0x7b58,	// (0x00048f1e) navi_navi_volume_pane_srt_g1

0x7b60,	// (0x00048f26) volume_small_pane_srt_ParamLimits

0x7b60,	// (0x00048f26) volume_small_pane_srt

0x6e88,	// (0x0004824e) volume_small_pane_srt_g1_ParamLimits

0x6e88,	// (0x0004824e) volume_small_pane_srt_g1

0x6e98,	// (0x0004825e) volume_small_pane_srt_g2_ParamLimits

0x6e98,	// (0x0004825e) volume_small_pane_srt_g2

0x6ea9,	// (0x0004826f) volume_small_pane_srt_g3_ParamLimits

0x6ea9,	// (0x0004826f) volume_small_pane_srt_g3

0x6eba,	// (0x00048280) volume_small_pane_srt_g4_ParamLimits

0x6eba,	// (0x00048280) volume_small_pane_srt_g4

0x6ecb,	// (0x00048291) volume_small_pane_srt_g5_ParamLimits

0x6ecb,	// (0x00048291) volume_small_pane_srt_g5

0x6edc,	// (0x000482a2) volume_small_pane_srt_g6_ParamLimits

0x6edc,	// (0x000482a2) volume_small_pane_srt_g6

0x6eed,	// (0x000482b3) volume_small_pane_srt_g7_ParamLimits

0x6eed,	// (0x000482b3) volume_small_pane_srt_g7

0x6efe,	// (0x000482c4) volume_small_pane_srt_g8_ParamLimits

0x6efe,	// (0x000482c4) volume_small_pane_srt_g8

0x6f0f,	// (0x000482d5) volume_small_pane_srt_g9_ParamLimits

0x6f0f,	// (0x000482d5) volume_small_pane_srt_g9

0x6f20,	// (0x000482e6) volume_small_pane_srt_g10_ParamLimits

0x6f20,	// (0x000482e6) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00050b03) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00050b03) volume_small_pane_srt_g

0x0bf1,	// (0x00041fb7) query_popup_data_pane_cp2

0xb183,	// (0x0004c549) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb183,	// (0x0004c549) navi_navi_icon_text_pane_srt_t1

0xa233,	// (0x0004b5f9) navi_tabs_2_long_pane_srt

0xa233,	// (0x0004b5f9) navi_tabs_2_pane_srt

0xa233,	// (0x0004b5f9) navi_tabs_3_long_pane_srt

0xa233,	// (0x0004b5f9) navi_tabs_3_pane_srt

0xa233,	// (0x0004b5f9) navi_tabs_4_pane_srt

0x7b38,	// (0x00048efe) tabs_2_active_pane_srt_ParamLimits

0x7b38,	// (0x00048efe) tabs_2_active_pane_srt

0x7b48,	// (0x00048f0e) tabs_2_passive_pane_srt_ParamLimits

0x7b48,	// (0x00048f0e) tabs_2_passive_pane_srt

0x9457,	// (0x0004a81d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9457,	// (0x0004a81d) bg_passive_tab_pane_cp1_srt

0xb14f,	// (0x0004c515) bg_passive_tab_pane_g1_cp1_srt

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp1_srt

0xb158,	// (0x0004c51e) bg_passive_tab_pane_g3_cp1_srt

0x093b,	// (0x00041d01) bg_active_tab_pane_cp1_srt_ParamLimits

0x093b,	// (0x00041d01) bg_active_tab_pane_cp1_srt

0xb161,	// (0x0004c527) tabs_2_active_pane_srt_g1

0xb169,	// (0x0004c52f) tabs_2_active_pane_srt_t1_ParamLimits

0xb169,	// (0x0004c52f) tabs_2_active_pane_srt_t1

0xb14f,	// (0x0004c515) bg_active_tab_pane_g1_cp1_srt

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp1_srt

0xb158,	// (0x0004c51e) bg_active_tab_pane_g3_cp1_srt

0x7b05,	// (0x00048ecb) tabs_3_active_pane_srt_ParamLimits

0x7b05,	// (0x00048ecb) tabs_3_active_pane_srt

0x7b16,	// (0x00048edc) tabs_3_passive_pane_cp_srt_ParamLimits

0x7b16,	// (0x00048edc) tabs_3_passive_pane_cp_srt

0x7b27,	// (0x00048eed) tabs_3_passive_pane_srt_ParamLimits

0x7b27,	// (0x00048eed) tabs_3_passive_pane_srt

0x9457,	// (0x0004a81d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9457,	// (0x0004a81d) bg_passive_tab_pane_cp2_srt

0x92e7,	// (0x0004a6ad) bg_passive_tab_pane_g1_cp2_srt

0x6cfb,	// (0x000480c1) bg_passive_tab_pane_g2_cp2_srt

0x92f0,	// (0x0004a6b6) bg_passive_tab_pane_g3_cp2_srt

0x093b,	// (0x00041d01) bg_active_tab_pane_cp2_srt_ParamLimits

0x093b,	// (0x00041d01) bg_active_tab_pane_cp2_srt

0xb135,	// (0x0004c4fb) tabs_3_active_pane_srt_g1

0xb13d,	// (0x0004c503) tabs_3_active_pane_srt_t1_ParamLimits

0xb13d,	// (0x0004c503) tabs_3_active_pane_srt_t1

0x92e7,	// (0x0004a6ad) bg_active_tab_pane_g1_cp2_srt

0x6cfb,	// (0x000480c1) bg_active_tab_pane_g2_cp2_srt

0x92f0,	// (0x0004a6b6) bg_active_tab_pane_g3_cp2_srt

0x7abd,	// (0x00048e83) tabs_4_active_pane_srt_ParamLimits

0x7abd,	// (0x00048e83) tabs_4_active_pane_srt

0x7acf,	// (0x00048e95) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7acf,	// (0x00048e95) tabs_4_passive_pane_cp2_srt

0x7072,	// (0x00048438) aid_size_cell_toolbar

0x6845,	// (0x00047c0b) main_idle_act_pane_ParamLimits

0x724f,	// (0x00048615) popup_large_graphic_colour_window_ParamLimits

0x75f6,	// (0x000489bc) popup_toolbar_window_ParamLimits

0x75f6,	// (0x000489bc) popup_toolbar_window

0xaf53,	// (0x0004c319) list_single_graphic_2heading_pane_ParamLimits

0xaf53,	// (0x0004c319) list_single_graphic_2heading_pane

0x1291,	// (0x00042657) aid_size_cell_apps_grid_lsc_pane

0x12a3,	// (0x00042669) aid_size_cell_apps_grid_prt_pane

0x9457,	// (0x0004a81d) bg_wml_button_pane_cp1_ParamLimits

0x9457,	// (0x0004a81d) bg_wml_button_pane_cp1

0x9c0f,	// (0x0004afd5) form_midp_field_text_pane_t1_ParamLimits

0x9a01,	// (0x0004adc7) input_focus_pane_cp050_ParamLimits

0x9c3a,	// (0x0004b000) list_midp_form_text_pane_ParamLimits

0x9bec,	// (0x0004afb2) input_focus_pane_cp051_ParamLimits

0x9c00,	// (0x0004afc6) list_midp_choice_pane_ParamLimits

0x9aba,	// (0x0004ae80) list_single_2graphic_pane_cp3_ParamLimits

0x9aba,	// (0x0004ae80) list_single_2graphic_pane_cp3

0x9ad0,	// (0x0004ae96) list_single_midp_graphic_pane_ParamLimits

0x9ad0,	// (0x0004ae96) list_single_midp_graphic_pane

0x57f7,	// (0x00046bbd) list_single_graphic_2heading_pane_g1_ParamLimits

0x57f7,	// (0x00046bbd) list_single_graphic_2heading_pane_g1

0x5803,	// (0x00046bc9) list_single_graphic_2heading_pane_g4_ParamLimits

0x5803,	// (0x00046bc9) list_single_graphic_2heading_pane_g4

0x580f,	// (0x00046bd5) list_single_graphic_2heading_pane_g5_ParamLimits

0x580f,	// (0x00046bd5) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00050b56) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00050b56) list_single_graphic_2heading_pane_g

0x581b,	// (0x00046be1) list_single_graphic_2heading_pane_t1_ParamLimits

0x581b,	// (0x00046be1) list_single_graphic_2heading_pane_t1

0x582f,	// (0x00046bf5) list_single_graphic_2heading_pane_t2_ParamLimits

0x582f,	// (0x00046bf5) list_single_graphic_2heading_pane_t2

0x584b,	// (0x00046c11) list_single_graphic_2heading_pane_t3_ParamLimits

0x584b,	// (0x00046c11) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00050b5d) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00050b5d) list_single_graphic_2heading_pane_t

0x98cb,	// (0x0004ac91) bg_popup_sub_pane_cp2

0x98f5,	// (0x0004acbb) grid_toobar_pane

0x76b5,	// (0x00048a7b) cell_toolbar_pane_ParamLimits

0x76b5,	// (0x00048a7b) cell_toolbar_pane

0x9931,	// (0x0004acf7) cell_toolbar_pane_g1_ParamLimits

0x9931,	// (0x0004acf7) cell_toolbar_pane_g1

0x9945,	// (0x0004ad0b) cell_toolbar_pane_g2_ParamLimits

0x9945,	// (0x0004ad0b) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00050b6b) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00050b6b) cell_toolbar_pane_g

0x9967,	// (0x0004ad2d) grid_highlight_pane_cp2_ParamLimits

0x9967,	// (0x0004ad2d) grid_highlight_pane_cp2

0x9981,	// (0x0004ad47) toolbar_button_pane

0x998d,	// (0x0004ad53) toolbar_button_pane_g1

0x9995,	// (0x0004ad5b) toolbar_button_pane_g2

0x999d,	// (0x0004ad63) toolbar_button_pane_g3

0x99a5,	// (0x0004ad6b) toolbar_button_pane_g4

0x99ad,	// (0x0004ad73) toolbar_button_pane_g5

0x99b5,	// (0x0004ad7b) toolbar_button_pane_g6

0x99bd,	// (0x0004ad83) toolbar_button_pane_g7

0x99c5,	// (0x0004ad8b) toolbar_button_pane_g8

0x99cd,	// (0x0004ad93) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050b70) toolbar_button_pane_g

0x7705,	// (0x00048acb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7705,	// (0x00048acb) list_single_2graphic_pane_g1_cp3

0x7711,	// (0x00048ad7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7711,	// (0x00048ad7) list_single_2graphic_pane_g2_cp3

0x8f4f,	// (0x0004a315) list_single_2graphic_pane_g3_cp3

0x7722,	// (0x00048ae8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7722,	// (0x00048ae8) list_single_2graphic_pane_g4_cp3

0x772e,	// (0x00048af4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x772e,	// (0x00048af4) list_single_2graphic_pane_t1_cp3

0x8db9,	// (0x0004a17f) list_single_midp_graphic_pane_g2_ParamLimits

0x8db9,	// (0x0004a17f) list_single_midp_graphic_pane_g2

0x57df,	// (0x00046ba5) aid_zoom_text_primary

0x57e7,	// (0x00046bad) aid_zoom_text_secondary

0x93a1,	// (0x0004a767) status_small_pane_g7_ParamLimits

0x93a1,	// (0x0004a767) status_small_pane_g7

0x93c4,	// (0x0004a78a) status_small_pane_t1_ParamLimits

0x6394,	// (0x0004775a) title_pane_g2

0x0003,

0xf529,	// (0x000508ef) title_pane_g

0x65fd,	// (0x000479c3) aid_size_cell_colour_1_pane_ParamLimits

0x65fd,	// (0x000479c3) aid_size_cell_colour_1_pane

0x6611,	// (0x000479d7) aid_size_cell_colour_2_pane_ParamLimits

0x6611,	// (0x000479d7) aid_size_cell_colour_2_pane

0x6625,	// (0x000479eb) aid_size_cell_colour_3_pane_ParamLimits

0x6625,	// (0x000479eb) aid_size_cell_colour_3_pane

0x6639,	// (0x000479ff) aid_size_cell_colour_4_pane_ParamLimits

0x6639,	// (0x000479ff) aid_size_cell_colour_4_pane

0x689f,	// (0x00047c65) title_pane_stacon_g1_ParamLimits

0x689f,	// (0x00047c65) title_pane_stacon_g1

0xa019,	// (0x0004b3df) popup_note_wait_window_g3_ParamLimits

0xa019,	// (0x0004b3df) popup_note_wait_window_g3

0xa090,	// (0x0004b456) popup_note_wait_window_t5_ParamLimits

0xa090,	// (0x0004b456) popup_note_wait_window_t5

0x08df,	// (0x00041ca5) main_feb_china_hwr_fs_writing_pane

0x7114,	// (0x000484da) popup_feb_china_hwr_fs_window_ParamLimits

0x7114,	// (0x000484da) popup_feb_china_hwr_fs_window

0x7777,	// (0x00048b3d) aid_size_cell_hwr_fs_ParamLimits

0x7777,	// (0x00048b3d) aid_size_cell_hwr_fs

0x9a01,	// (0x0004adc7) bg_popup_sub_pane_cp3_ParamLimits

0x9a01,	// (0x0004adc7) bg_popup_sub_pane_cp3

0x778c,	// (0x00048b52) grid_hwr_fs_pane_ParamLimits

0x778c,	// (0x00048b52) grid_hwr_fs_pane

0x77a4,	// (0x00048b6a) linegrid_hwr_fs_pane_ParamLimits

0x77a4,	// (0x00048b6a) linegrid_hwr_fs_pane

0x77b4,	// (0x00048b7a) cell_hwr_fs_pane_ParamLimits

0x77b4,	// (0x00048b7a) cell_hwr_fs_pane

0x9a0d,	// (0x0004add3) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a0d,	// (0x0004add3) linegrid_hwr_fs_pane_g1

0x9a19,	// (0x0004addf) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a19,	// (0x0004addf) linegrid_hwr_fs_pane_g2

0x9a2b,	// (0x0004adf1) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a2b,	// (0x0004adf1) linegrid_hwr_fs_pane_g3

0x77d8,	// (0x00048b9e) linegrid_hwr_fs_pane_g4_ParamLimits

0x77d8,	// (0x00048b9e) linegrid_hwr_fs_pane_g4

0x77f6,	// (0x00048bbc) linegrid_hwr_fs_pane_g5_ParamLimits

0x77f6,	// (0x00048bbc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x00050b9b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x00050b9b) linegrid_hwr_fs_pane_g

0x9a37,	// (0x0004adfd) cell_hwr_fs_pane_g1_ParamLimits

0x9a37,	// (0x0004adfd) cell_hwr_fs_pane_g1

0x9806,	// (0x0004abcc) cell_hwr_fs_pane_g2_ParamLimits

0x9806,	// (0x0004abcc) cell_hwr_fs_pane_g2

0x9a4d,	// (0x0004ae13) cell_hwr_fs_pane_g3_ParamLimits

0x9a4d,	// (0x0004ae13) cell_hwr_fs_pane_g3

0x9a5a,	// (0x0004ae20) cell_hwr_fs_pane_g4_ParamLimits

0x9a5a,	// (0x0004ae20) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x00050ba6) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x00050ba6) cell_hwr_fs_pane_g

0x780c,	// (0x00048bd2) cell_hwr_fs_pane_t1

0x08df,	// (0x00041ca5) grid_highlight_pane_cp6

0x08df,	// (0x00041ca5) main_idle_act2_pane

0x10a0,	// (0x00042466) aid_inside_area_popup_secondary

0xa6c9,	// (0x0004ba8f) aid_inside_area_window_primary_ParamLimits

0xa6c9,	// (0x0004ba8f) aid_inside_area_window_primary

0xb29c,	// (0x0004c662) ai2_news_ticker_pane

0xb2a4,	// (0x0004c66a) aid_size_cell_ai1_link_ParamLimits

0xb2a4,	// (0x0004c66a) aid_size_cell_ai1_link

0xb2be,	// (0x0004c684) popup_ai2_data_window_ParamLimits

0xb2be,	// (0x0004c684) popup_ai2_data_window

0xb2dc,	// (0x0004c6a2) popup_ai2_link_window_ParamLimits

0xb2dc,	// (0x0004c6a2) popup_ai2_link_window

0x9a01,	// (0x0004adc7) bg_popup_sub_pane_cp4_ParamLimits

0x9a01,	// (0x0004adc7) bg_popup_sub_pane_cp4

0xb2f2,	// (0x0004c6b8) grid_ai2_link_pane_ParamLimits

0xb2f2,	// (0x0004c6b8) grid_ai2_link_pane

0xb309,	// (0x0004c6cf) popup_ai2_link_window_g1_ParamLimits

0xb309,	// (0x0004c6cf) popup_ai2_link_window_g1

0xb315,	// (0x0004c6db) popup_ai2_link_window_g2_ParamLimits

0xb315,	// (0x0004c6db) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00050d79) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00050d79) popup_ai2_link_window_g

0xb326,	// (0x0004c6ec) ai2_mp_button_pane

0xb32e,	// (0x0004c6f4) ai2_mp_volume_pane

0x9bec,	// (0x0004afb2) bg_popup_sub_pane_cp5_ParamLimits

0x9bec,	// (0x0004afb2) bg_popup_sub_pane_cp5

0xb336,	// (0x0004c6fc) heading_ai2_gene_pane_ParamLimits

0xb336,	// (0x0004c6fc) heading_ai2_gene_pane

0xb342,	// (0x0004c708) list_ai2_gene_pane_ParamLimits

0xb342,	// (0x0004c708) list_ai2_gene_pane

0xb38a,	// (0x0004c750) cell_ai2_link_pane_ParamLimits

0xb38a,	// (0x0004c750) cell_ai2_link_pane

0xb3a0,	// (0x0004c766) cell_ai2_link_pane_g1

0x08df,	// (0x00041ca5) grid_highlight_pane_cp7

0x7b75,	// (0x00048f3b) ai2_mp_volume_pane_g1

0xb473,	// (0x0004c839) ai2_mp_volume_pane_g2

0xb3e8,	// (0x0004c7ae) list_ai2_gene_pane_t1

0xb47b,	// (0x0004c841) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00050d92) ai2_mp_volume_pane_g

0x7b7d,	// (0x00048f43) volume_small_pane_cp3

0xb483,	// (0x0004c849) aid_size_cell_ai2_button

0xb48b,	// (0x0004c851) grid_ai2_button_pane

0xb494,	// (0x0004c85a) cell_ai2_button_pane_ParamLimits

0xb494,	// (0x0004c85a) cell_ai2_button_pane

0x08d5,	// (0x00041c9b) cell_ai2_button_pane_g1

0x08df,	// (0x00041ca5) grid_highlight_pane_cp8

0xb433,	// (0x0004c7f9) ai2_gene_pane_t1_ParamLimits

0xb433,	// (0x0004c7f9) ai2_gene_pane_t1

0x7068,	// (0x0004842e) aid_height_parent_landscape

0xad59,	// (0x0004c11f) aid_height_set_list

0xad6a,	// (0x0004c130) aid_size_parent

0xb0bb,	// (0x0004c481) aid_size_cell_graphic_pane_ParamLimits

0xb352,	// (0x0004c718) popup_ai2_data_window_g1_ParamLimits

0xb352,	// (0x0004c718) popup_ai2_data_window_g1

0xb35e,	// (0x0004c724) ai2_news_ticker_pane_g1

0xb366,	// (0x0004c72c) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x00050d7e) ai2_news_ticker_pane_g

0xb36e,	// (0x0004c734) ai2_news_ticker_pane_t1

0xb37c,	// (0x0004c742) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00050d83) ai2_news_ticker_pane_t

0xb3a9,	// (0x0004c76f) heading_ai2_gene_pane_g1

0xb3b1,	// (0x0004c777) heading_ai2_gene_pane_t1_ParamLimits

0xb3b1,	// (0x0004c777) heading_ai2_gene_pane_t1

0xb3c6,	// (0x0004c78c) list_highlight_pane_cp6

0xb3ce,	// (0x0004c794) ai2_gene_pane_ParamLimits

0xb3ce,	// (0x0004c794) ai2_gene_pane

0xb3f6,	// (0x0004c7bc) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00050d88) list_ai2_gene_pane_t

0xb404,	// (0x0004c7ca) list_highlight_pane_cp8_ParamLimits

0xb404,	// (0x0004c7ca) list_highlight_pane_cp8

0xb415,	// (0x0004c7db) ai2_gene_pane_g1_ParamLimits

0xb415,	// (0x0004c7db) ai2_gene_pane_g1

0xb427,	// (0x0004c7ed) ai2_gene_pane_g2_ParamLimits

0xb427,	// (0x0004c7ed) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x00050d8d) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x00050d8d) ai2_gene_pane_g

0x0f13,	// (0x000422d9) scroll_pane_cp12

0x7027,	// (0x000483ed) control_pane_t3_ParamLimits

0x7027,	// (0x000483ed) control_pane_t3

0x93b5,	// (0x0004a77b) status_small_pane_g8_ParamLimits

0x93b5,	// (0x0004a77b) status_small_pane_g8

0x7212,	// (0x000485d8) popup_find_window_ParamLimits

0x743f,	// (0x00048805) popup_note_image_window_ParamLimits

0x5863,	// (0x00046c29) list_double2_graphic_pane_vc_g1_ParamLimits

0x5863,	// (0x00046c29) list_double2_graphic_pane_vc_g1

0x76e5,	// (0x00048aab) list_double2_graphic_pane_vc_g2_ParamLimits

0x76e5,	// (0x00048aab) list_double2_graphic_pane_vc_g2

0x76f1,	// (0x00048ab7) list_double2_graphic_pane_vc_g3_ParamLimits

0x76f1,	// (0x00048ab7) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00050b64) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00050b64) list_double2_graphic_pane_vc_g

0x586f,	// (0x00046c35) list_double2_graphic_pane_vc_t1_ParamLimits

0x586f,	// (0x00046c35) list_double2_graphic_pane_vc_t1

0x76e5,	// (0x00048aab) list_single_heading_pane_vc_g1_ParamLimits

0x76e5,	// (0x00048aab) list_single_heading_pane_vc_g1

0x76f1,	// (0x00048ab7) list_single_heading_pane_vc_g2_ParamLimits

0x76f1,	// (0x00048ab7) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b85) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b85) list_single_heading_pane_vc_g

0x5885,	// (0x00046c4b) list_single_heading_pane_vc_t1_ParamLimits

0x5885,	// (0x00046c4b) list_single_heading_pane_vc_t1

0x589b,	// (0x00046c61) list_single_heading_pane_vc_t2_ParamLimits

0x589b,	// (0x00046c61) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00050b8a) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00050b8a) list_single_heading_pane_vc_t

0x775f,	// (0x00048b25) list_setting_number_pane_vc_g1_ParamLimits

0x775f,	// (0x00048b25) list_setting_number_pane_vc_g1

0x776b,	// (0x00048b31) list_setting_number_pane_vc_g2_ParamLimits

0x776b,	// (0x00048b31) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00050b8f) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00050b8f) list_setting_number_pane_vc_g

0x58ad,	// (0x00046c73) list_setting_number_pane_vc_t1_ParamLimits

0x58ad,	// (0x00046c73) list_setting_number_pane_vc_t1

0x58c1,	// (0x00046c87) list_setting_number_pane_vc_t2_ParamLimits

0x58c1,	// (0x00046c87) list_setting_number_pane_vc_t2

0x58dd,	// (0x00046ca3) list_setting_number_pane_vc_t3_ParamLimits

0x58dd,	// (0x00046ca3) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x00050b94) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x00050b94) list_setting_number_pane_vc_t

0x590b,	// (0x00046cd1) set_value_pane_vc_ParamLimits

0x590b,	// (0x00046cd1) set_value_pane_vc

0xaf53,	// (0x0004c319) list_double2_graphic_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double2_graphic_pane_vc

0xaf53,	// (0x0004c319) list_double2_large_graphic_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double2_large_graphic_pane_vc

0xaf53,	// (0x0004c319) list_double2_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double2_pane_vc

0xaf53,	// (0x0004c319) list_double_graphic_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double_graphic_heading_pane_vc

0xaf53,	// (0x0004c319) list_double_graphic_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double_graphic_pane_vc

0xaf53,	// (0x0004c319) list_double_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double_heading_pane_vc

0xaf67,	// (0x0004c32d) list_double_large_graphic_pane_vc_ParamLimits

0xaf67,	// (0x0004c32d) list_double_large_graphic_pane_vc

0xaf53,	// (0x0004c319) list_double_number_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double_number_pane_vc

0xaf53,	// (0x0004c319) list_double_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double_pane_vc

0xaf53,	// (0x0004c319) list_double_time_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_double_time_pane_vc

0xaf53,	// (0x0004c319) list_setting_number_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_setting_number_pane_vc

0xaf53,	// (0x0004c319) list_setting_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_setting_pane_vc

0xaf53,	// (0x0004c319) list_single_graphic_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_single_graphic_heading_pane_vc

0xaf53,	// (0x0004c319) list_single_heading_pane_vc_ParamLimits

0xaf53,	// (0x0004c319) list_single_heading_pane_vc

0x7a62,	// (0x00048e28) list_single_number_heading_pane_vc_ParamLimits

0x7a62,	// (0x00048e28) list_single_number_heading_pane_vc

0x5863,	// (0x00046c29) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5863,	// (0x00046c29) list_double_graphic_heading_pane_vc_g1

0x90a1,	// (0x0004a467) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x90a1,	// (0x0004a467) list_double_graphic_heading_pane_vc_g2

0x7b86,	// (0x00048f4c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7b86,	// (0x00048f4c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00050d99) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00050d99) list_double_graphic_heading_pane_vc_g

0x59e7,	// (0x00046dad) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x59e7,	// (0x00046dad) list_double_graphic_heading_pane_vc_t1

0x59fd,	// (0x00046dc3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x59fd,	// (0x00046dc3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00050da0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00050da0) list_double_graphic_heading_pane_vc_t

0x775f,	// (0x00048b25) list_setting_pane_vc_g1_ParamLimits

0x775f,	// (0x00048b25) list_setting_pane_vc_g1

0x776b,	// (0x00048b31) list_setting_pane_vc_g2_ParamLimits

0x776b,	// (0x00048b31) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00050b8f) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00050b8f) list_setting_pane_vc_g

0x5a1b,	// (0x00046de1) list_setting_pane_vc_t1_ParamLimits

0x5a1b,	// (0x00046de1) list_setting_pane_vc_t1

0x5a37,	// (0x00046dfd) list_setting_pane_vc_t2_ParamLimits

0x5a37,	// (0x00046dfd) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x00050dce) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x00050dce) list_setting_pane_vc_t

0x590b,	// (0x00046cd1) set_value_pane_cp_vc_ParamLimits

0x590b,	// (0x00046cd1) set_value_pane_cp_vc

0x76e5,	// (0x00048aab) list_single_number_heading_pane_vc_g1_ParamLimits

0x76e5,	// (0x00048aab) list_single_number_heading_pane_vc_g1

0x76f1,	// (0x00048ab7) list_single_number_heading_pane_vc_g2_ParamLimits

0x76f1,	// (0x00048ab7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b85) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b85) list_single_number_heading_pane_vc_g

0x5a53,	// (0x00046e19) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a53,	// (0x00046e19) list_single_number_heading_pane_vc_t1

0x5a69,	// (0x00046e2f) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a69,	// (0x00046e2f) list_single_number_heading_pane_vc_t2

0x5a7f,	// (0x00046e45) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a7f,	// (0x00046e45) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x00050dd3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x00050dd3) list_single_number_heading_pane_vc_t

0x5863,	// (0x00046c29) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5863,	// (0x00046c29) list_single_graphic_heading_pane_vc_g1

0x76e5,	// (0x00048aab) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x76e5,	// (0x00048aab) list_single_graphic_heading_pane_vc_g4

0x76f1,	// (0x00048ab7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x76f1,	// (0x00048ab7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00050b64) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00050b64) list_single_graphic_heading_pane_vc_g

0x5a53,	// (0x00046e19) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5a53,	// (0x00046e19) list_single_graphic_heading_pane_vc_t1

0x5a91,	// (0x00046e57) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a91,	// (0x00046e57) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x00050dda) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x00050dda) list_single_graphic_heading_pane_vc_t

0x76e5,	// (0x00048aab) list_double2_pane_vc_g1_ParamLimits

0x76e5,	// (0x00048aab) list_double2_pane_vc_g1

0x76f1,	// (0x00048ab7) list_double2_pane_vc_g2_ParamLimits

0x76f1,	// (0x00048ab7) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b85) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b85) list_double2_pane_vc_g

0x5aa3,	// (0x00046e69) list_double2_pane_vc_t1_ParamLimits

0x5aa3,	// (0x00046e69) list_double2_pane_vc_t1

0x7b92,	// (0x00048f58) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7b92,	// (0x00048f58) list_double2_large_graphic_pane_vc_g1

0x76e5,	// (0x00048aab) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x76e5,	// (0x00048aab) list_double2_large_graphic_pane_vc_g2

0x76f1,	// (0x00048ab7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x76f1,	// (0x00048ab7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x00050ddf) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x00050ddf) list_double2_large_graphic_pane_vc_g

0x5ab9,	// (0x00046e7f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5ab9,	// (0x00046e7f) list_double2_large_graphic_pane_vc_t1

0x7b9e,	// (0x00048f64) list_double_time_pane_vc_g1_ParamLimits

0x7b9e,	// (0x00048f64) list_double_time_pane_vc_g1

0x7baa,	// (0x00048f70) list_double_time_pane_vc_g2_ParamLimits

0x7baa,	// (0x00048f70) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x00050de6) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x00050de6) list_double_time_pane_vc_g

0x5acf,	// (0x00046e95) list_double_time_pane_vc_t1_ParamLimits

0x5acf,	// (0x00046e95) list_double_time_pane_vc_t1

0x5af9,	// (0x00046ebf) list_double_time_pane_vc_t2_ParamLimits

0x5af9,	// (0x00046ebf) list_double_time_pane_vc_t2

0x5b42,	// (0x00046f08) list_double_time_pane_vc_t3_ParamLimits

0x5b42,	// (0x00046f08) list_double_time_pane_vc_t3

0x5b54,	// (0x00046f1a) list_double_time_pane_vc_t4_ParamLimits

0x5b54,	// (0x00046f1a) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x00050deb) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x00050deb) list_double_time_pane_vc_t

0x76e5,	// (0x00048aab) list_double_pane_vc_g1_ParamLimits

0x76e5,	// (0x00048aab) list_double_pane_vc_g1

0x76f1,	// (0x00048ab7) list_double_pane_vc_g2_ParamLimits

0x76f1,	// (0x00048ab7) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b85) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b85) list_double_pane_vc_g

0x5b68,	// (0x00046f2e) list_double_pane_vc_t1_ParamLimits

0x5b68,	// (0x00046f2e) list_double_pane_vc_t1

0x5b7c,	// (0x00046f42) list_double_pane_vc_t2_ParamLimits

0x5b7c,	// (0x00046f42) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x00050df4) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x00050df4) list_double_pane_vc_t

0x76e5,	// (0x00048aab) list_double_number_pane_vc_g1_ParamLimits

0x76e5,	// (0x00048aab) list_double_number_pane_vc_g1

0x76f1,	// (0x00048ab7) list_double_number_pane_vc_g2_ParamLimits

0x76f1,	// (0x00048ab7) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00050b85) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00050b85) list_double_number_pane_vc_g

0x5b92,	// (0x00046f58) list_double_number_pane_vc_t1_ParamLimits

0x5b92,	// (0x00046f58) list_double_number_pane_vc_t1

0x5ba4,	// (0x00046f6a) list_double_number_pane_vc_t2_ParamLimits

0x5ba4,	// (0x00046f6a) list_double_number_pane_vc_t2

0x5b7c,	// (0x00046f42) list_double_number_pane_vc_t3_ParamLimits

0x5b7c,	// (0x00046f42) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x00050df9) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x00050df9) list_double_number_pane_vc_t

0x7bb6,	// (0x00048f7c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7bb6,	// (0x00048f7c) list_double_large_graphic_pane_vc_g1

0x7bd8,	// (0x00048f9e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7bd8,	// (0x00048f9e) list_double_large_graphic_pane_vc_g2

0x7bec,	// (0x00048fb2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7bec,	// (0x00048fb2) list_double_large_graphic_pane_vc_g3

0x5bb8,	// (0x00046f7e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bb8,	// (0x00046f7e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x00050e00) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00050e00) list_double_large_graphic_pane_vc_g

0x5bc4,	// (0x00046f8a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bc4,	// (0x00046f8a) list_double_large_graphic_pane_vc_t1

0x5be0,	// (0x00046fa6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5be0,	// (0x00046fa6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00050e09) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00050e09) list_double_large_graphic_pane_vc_t

0x90a1,	// (0x0004a467) list_double_heading_pane_vc_g1_ParamLimits

0x90a1,	// (0x0004a467) list_double_heading_pane_vc_g1

0x7b86,	// (0x00048f4c) list_double_heading_pane_vc_g2_ParamLimits

0x7b86,	// (0x00048f4c) list_double_heading_pane_vc_g2

0x0001,

0xfa48,	// (0x00050e0e) list_double_heading_pane_vc_g_ParamLimits

0xfa48,	// (0x00050e0e) list_double_heading_pane_vc_g

0x5c00,	// (0x00046fc6) list_double_heading_pane_vc_t1_ParamLimits

0x5c00,	// (0x00046fc6) list_double_heading_pane_vc_t1

0x5c12,	// (0x00046fd8) list_double_heading_pane_vc_t2_ParamLimits

0x5c12,	// (0x00046fd8) list_double_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x00050e13) list_double_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x00050e13) list_double_heading_pane_vc_t

0x5c2a,	// (0x00046ff0) list_double_graphic_pane_vc_g1_ParamLimits

0x5c2a,	// (0x00046ff0) list_double_graphic_pane_vc_g1

0x7bfb,	// (0x00048fc1) list_double_graphic_pane_vc_g2_ParamLimits

0x7bfb,	// (0x00048fc1) list_double_graphic_pane_vc_g2

0x76e5,	// (0x00048aab) list_double_graphic_pane_vc_g3_ParamLimits

0x76e5,	// (0x00048aab) list_double_graphic_pane_vc_g3

0x0003,

0xfa52,	// (0x00050e18) list_double_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x00050e18) list_double_graphic_pane_vc_g

0x5c36,	// (0x00046ffc) list_double_graphic_pane_vc_t1_ParamLimits

0x5c36,	// (0x00046ffc) list_double_graphic_pane_vc_t1

0x5c60,	// (0x00047026) list_double_graphic_pane_vc_t2_ParamLimits

0x5c60,	// (0x00047026) list_double_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x00050e21) list_double_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x00050e21) list_double_graphic_pane_vc_t

0x5fa0,	// (0x00047366) aid_size_cell_fastswap

0x5fa8,	// (0x0004736e) aid_size_cell_touch_ParamLimits

0x5fa8,	// (0x0004736e) aid_size_cell_touch

0x6209,	// (0x000475cf) popup_fast_swap_wide_window_ParamLimits

0x6209,	// (0x000475cf) popup_fast_swap_wide_window

0x6327,	// (0x000476ed) touch_pane_ParamLimits

0x6327,	// (0x000476ed) touch_pane

0x0f69,	// (0x0004232f) button_value_adjust_pane_cp2

0x551f,	// (0x000468e5) button_value_adjust_pane_cp4

0x5547,	// (0x0004690d) form_field_data_pane_cp2

0x556c,	// (0x00046932) form_field_data_wide_pane_cp2

0x423b,	// (0x00045601) bg_scroll_pane_ParamLimits

0x6ac1,	// (0x00047e87) scroll_handle_pane_ParamLimits

0x6ad5,	// (0x00047e9b) scroll_sc2_down_pane_ParamLimits

0x6ad5,	// (0x00047e9b) scroll_sc2_down_pane

0x4295,	// (0x0004565b) scroll_sc2_up_pane_ParamLimits

0x4295,	// (0x0004565b) scroll_sc2_up_pane

0xbbbc,	// (0x0004cf82) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0004cf82) grid_wheel_folder_pane_g1

0x6e20,	// (0x000481e6) clock_nsta_pane_cp2_ParamLimits

0x6e20,	// (0x000481e6) clock_nsta_pane_cp2

0x9138,	// (0x0004a4fe) listscroll_midp_pane_ParamLimits

0x9144,	// (0x0004a50a) midp_canvas_pane

0x942f,	// (0x0004a7f5) nsta_clock_indic_pane

0x9463,	// (0x0004a829) listscroll_form_pane_vc

0x946b,	// (0x0004a831) listscroll_set_pane_vc_ParamLimits

0x946b,	// (0x0004a831) listscroll_set_pane_vc

0x9562,	// (0x0004a928) clock_nsta_pane

0x95df,	// (0x0004a9a5) indicator_nsta_pane

0x98cb,	// (0x0004ac91) bg_popup_sub_pane_cp2_ParamLimits

0x98df,	// (0x0004aca5) find_pane_cp2_ParamLimits

0x98df,	// (0x0004aca5) find_pane_cp2

0x98f5,	// (0x0004acbb) grid_toobar_pane_ParamLimits

0x99d5,	// (0x0004ad9b) list_form_gen_pane_vc_ParamLimits

0x99d5,	// (0x0004ad9b) list_form_gen_pane_vc

0x99eb,	// (0x0004adb1) scroll_pane_cp8_vc_ParamLimits

0x99eb,	// (0x0004adb1) scroll_pane_cp8_vc

0x9a67,	// (0x0004ae2d) data_form_wide_pane_vc_ParamLimits

0x9a67,	// (0x0004ae2d) data_form_wide_pane_vc

0x9a73,	// (0x0004ae39) form_field_data_wide_pane_vc_g1

0x9a7b,	// (0x0004ae41) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a7b,	// (0x0004ae41) form_field_data_wide_pane_vc_t1

0x0f7d,	// (0x00042343) input_focus_pane_cp6_vc_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_cp6_vc

0x9d77,	// (0x0004b13d) list_midp_pane_ParamLimits

0x9d83,	// (0x0004b149) scroll_pane_cp16_ParamLimits

0x9d83,	// (0x0004b149) scroll_pane_cp16

0x9ded,	// (0x0004b1b3) button_value_adjust_pane_ParamLimits

0x9ded,	// (0x0004b1b3) button_value_adjust_pane

0xad7c,	// (0x0004c142) button_value_adjust_pane_cp6_ParamLimits

0xad7c,	// (0x0004c142) button_value_adjust_pane_cp6

0xaec4,	// (0x0004c28a) settings_code_pane_cp_ParamLimits

0xaec4,	// (0x0004c28a) settings_code_pane_cp

0x08d5,	// (0x00041c9b) cell_touch_pane_g1

0x08d5,	// (0x00041c9b) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00050aa9) cell_touch_pane_g

0xb4a6,	// (0x0004c86c) cell_touch_pane_cp_ParamLimits

0xb4a6,	// (0x0004c86c) cell_touch_pane_cp

0xb4b6,	// (0x0004c87c) cell_touch_pane_ParamLimits

0xb4b6,	// (0x0004c87c) cell_touch_pane

0x08d5,	// (0x00041c9b) scroll_sc2_down_pane_g1

0x08d5,	// (0x00041c9b) scroll_sc2_up_pane_g1

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x0004c88d) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x0004c88d) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x0004c899) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x0004c899) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00050da5) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00050da5) list_set_graphic_pane_vc_g

0xb4df,	// (0x0004c8a5) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x0004c8a5) text_primary_small_cp13_vc

0xb4f7,	// (0x0004c8bd) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x0004c8bd) list_set_graphic_pane_vc

0x08df,	// (0x00041ca5) input_focus_pane_cp2_vc

0x08d5,	// (0x00041c9b) setting_code_pane_vc_g1

0x0952,	// (0x00041d18) setting_code_pane_vc_t1

0xb50a,	// (0x0004c8d0) set_text_pane_vc_t1_ParamLimits

0xb50a,	// (0x0004c8d0) set_text_pane_vc_t1

0x08df,	// (0x00041ca5) input_focus_pane_cp1_vc

0xb52b,	// (0x0004c8f1) list_set_text_pane_vc

0x08d5,	// (0x00041c9b) setting_text_pane_vc_g1

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp2_vc

0x0949,	// (0x00041d0f) setting_slider_graphic_pane_vc_g1

0xb535,	// (0x0004c8fb) setting_slider_graphic_pane_vc_t1

0xb547,	// (0x0004c90d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00050daa) setting_slider_graphic_pane_vc_t

0xb559,	// (0x0004c91f) slider_set_pane_cp_vc

0xb563,	// (0x0004c929) slider_set_pane_vc_g1

0xb56c,	// (0x0004c932) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00050daf) slider_set_pane_vc_g

0x0fd5,	// (0x0004239b) set_opt_bg_pane_g1_copy1

0x0fdd,	// (0x000423a3) set_opt_bg_pane_g2_copy1

0xb598,	// (0x0004c95e) set_opt_bg_pane_g3_copy1

0x0fed,	// (0x000423b3) set_opt_bg_pane_g4_copy1

0x0ff5,	// (0x000423bb) set_opt_bg_pane_g5_copy1

0x0ffd,	// (0x000423c3) set_opt_bg_pane_g6_copy1

0xb5a2,	// (0x0004c968) set_opt_bg_pane_g7_copy1

0xb5ac,	// (0x0004c972) set_opt_bg_pane_g8_copy1

0xb5b6,	// (0x0004c97c) set_opt_bg_pane_g9_copy1

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp_vc

0xb5c0,	// (0x0004c986) setting_slider_pane_vc_t1

0xb5cf,	// (0x0004c995) setting_slider_pane_vc_t2

0xb5e1,	// (0x0004c9a7) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00050dbe) setting_slider_pane_vc_t

0xb5f3,	// (0x0004c9b9) slider_set_pane_vc

0x781a,	// (0x00048be0) volume_set_pane_vc_g1

0x7823,	// (0x00048be9) volume_set_pane_vc_g2

0x782c,	// (0x00048bf2) volume_set_pane_vc_g3

0x7835,	// (0x00048bfb) volume_set_pane_vc_g4

0x783e,	// (0x00048c04) volume_set_pane_vc_g5

0x7847,	// (0x00048c0d) volume_set_pane_vc_g6

0x7850,	// (0x00048c16) volume_set_pane_vc_g7

0x7859,	// (0x00048c1f) volume_set_pane_vc_g8

0x7862,	// (0x00048c28) volume_set_pane_vc_g9

0x786b,	// (0x00048c31) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x00050c5c) volume_set_pane_vc_g

0xb5fd,	// (0x0004c9c3) volume_set_pane_vc

0xb607,	// (0x0004c9cd) button_value_adjust_pane_cp1_vc

0xb611,	// (0x0004c9d7) list_highlight_pane_cp2_vc

0xb61a,	// (0x0004c9e0) list_set_pane_vc_ParamLimits

0xb61a,	// (0x0004c9e0) list_set_pane_vc

0xb688,	// (0x0004ca4e) main_pane_set_vc_t1_ParamLimits

0xb688,	// (0x0004ca4e) main_pane_set_vc_t1

0xb69d,	// (0x0004ca63) main_pane_set_vc_t2_ParamLimits

0xb69d,	// (0x0004ca63) main_pane_set_vc_t2

0xb6af,	// (0x0004ca75) main_pane_set_vc_t3_ParamLimits

0xb6af,	// (0x0004ca75) main_pane_set_vc_t3

0xb6c3,	// (0x0004ca89) main_pane_set_vc_t4_ParamLimits

0xb6c3,	// (0x0004ca89) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x00050dc5) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x00050dc5) main_pane_set_vc_t

0xb6d7,	// (0x0004ca9d) setting_code_pane_vc_ParamLimits

0xb6d7,	// (0x0004ca9d) setting_code_pane_vc

0xb6e8,	// (0x0004caae) setting_slider_graphic_pane_vc

0xb6e8,	// (0x0004caae) setting_slider_pane_vc

0xb6e8,	// (0x0004caae) setting_text_pane_vc

0xb6e8,	// (0x0004caae) setting_volume_pane_vc

0xb6f2,	// (0x0004cab8) scroll_pane_cp121_vc

0x0f57,	// (0x0004231d) set_content_pane_vc

0xb6fa,	// (0x0004cac0) button_value_adjust_pane_g1

0xb703,	// (0x0004cac9) button_value_adjust_pane_g2

0x0001,

0xfa60,	// (0x00050e26) button_value_adjust_pane_g

0xb70c,	// (0x0004cad2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb70c,	// (0x0004cad2) form_field_slider_wide_pane_vc_t1

0xb71e,	// (0x0004cae4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb71e,	// (0x0004cae4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa65,	// (0x00050e2b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x00050e2b) form_field_slider_wide_pane_vc_t

0x092d,	// (0x00041cf3) input_focus_pane_cp10_vc_ParamLimits

0x092d,	// (0x00041cf3) input_focus_pane_cp10_vc

0xb74a,	// (0x0004cb10) slider_cont_pane_cp1_vc_ParamLimits

0xb74a,	// (0x0004cb10) slider_cont_pane_cp1_vc

0xb75c,	// (0x0004cb22) slider_form_pane_g1_cp2

0xb56c,	// (0x0004c932) slider_form_pane_g2_cp2

0xb789,	// (0x0004cb4f) form_field_slider_pane_vc_t3

0xb797,	// (0x0004cb5d) form_field_slider_pane_vc_t4

0xb7a5,	// (0x0004cb6b) slider_form_pane_vc_ParamLimits

0xb7a5,	// (0x0004cb6b) slider_form_pane_vc

0xb7b2,	// (0x0004cb78) form_field_slider_pane_vc_t1_ParamLimits

0xb7b2,	// (0x0004cb78) form_field_slider_pane_vc_t1

0xb71e,	// (0x0004cae4) form_field_slider_pane_vc_t2_ParamLimits

0xb71e,	// (0x0004cae4) form_field_slider_pane_vc_t2

0x0001,

0xfa77,	// (0x00050e3d) form_field_slider_pane_vc_t_ParamLimits

0xfa77,	// (0x00050e3d) form_field_slider_pane_vc_t

0x092d,	// (0x00041cf3) input_focus_pane_cp9_vc_ParamLimits

0x092d,	// (0x00041cf3) input_focus_pane_cp9_vc

0xb7c8,	// (0x0004cb8e) slider_cont_pane_vc_ParamLimits

0xb7c8,	// (0x0004cb8e) slider_cont_pane_vc

0xb7dc,	// (0x0004cba2) list_form_graphic_pane_cp_vc_ParamLimits

0xb7dc,	// (0x0004cba2) list_form_graphic_pane_cp_vc

0x9a73,	// (0x0004ae39) form_field_popup_wide_pane_vc_g1

0xb7f1,	// (0x0004cbb7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0004cbb7) form_field_popup_wide_pane_vc_t1

0x0f7d,	// (0x00042343) input_focus_pane_cp8_vc_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_cp8_vc

0xb836,	// (0x0004cbfc) list_form_wide_pane_vc_ParamLimits

0xb836,	// (0x0004cbfc) list_form_wide_pane_vc

0xb842,	// (0x0004cc08) list_form_graphic_pane_vc_g1

0xb84a,	// (0x0004cc10) list_form_graphic_pane_vc_t1_ParamLimits

0xb84a,	// (0x0004cc10) list_form_graphic_pane_vc_t1

0x093b,	// (0x00041d01) list_highlight_pane_cp5_vc_ParamLimits

0x093b,	// (0x00041d01) list_highlight_pane_cp5_vc

0xb866,	// (0x0004cc2c) list_form_graphic_pane_vc_ParamLimits

0xb866,	// (0x0004cc2c) list_form_graphic_pane_vc

0x9a73,	// (0x0004ae39) form_field_popup_pane_vc_g1

0xb87c,	// (0x0004cc42) form_field_popup_pane_vc_t1_ParamLimits

0xb87c,	// (0x0004cc42) form_field_popup_pane_vc_t1

0x0f7d,	// (0x00042343) input_focus_pane_cp7_vc_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_cp7_vc

0xb893,	// (0x0004cc59) list_form_pane_vc_ParamLimits

0xb893,	// (0x0004cc59) list_form_pane_vc

0xb89f,	// (0x0004cc65) data_form_pane_vc_t1_ParamLimits

0xb89f,	// (0x0004cc65) data_form_pane_vc_t1

0x0fd5,	// (0x0004239b) input_focus_pane_vc_g1

0x0fdd,	// (0x000423a3) input_focus_pane_vc_g2

0x0fe5,	// (0x000423ab) input_focus_pane_vc_g3

0x0fed,	// (0x000423b3) input_focus_pane_vc_g4

0x0ff5,	// (0x000423bb) input_focus_pane_vc_g5

0x0ffd,	// (0x000423c3) input_focus_pane_vc_g6

0x1005,	// (0x000423cb) input_focus_pane_vc_g7

0x100d,	// (0x000423d3) input_focus_pane_vc_g8

0x1015,	// (0x000423db) input_focus_pane_vc_g9

0x08d5,	// (0x00041c9b) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00050a32) input_focus_pane_vc_g

0x9a67,	// (0x0004ae2d) data_form_pane_vc_ParamLimits

0x9a67,	// (0x0004ae2d) data_form_pane_vc

0x9a73,	// (0x0004ae39) form_field_data_pane_vc_g1

0xb8bc,	// (0x0004cc82) form_field_data_pane_vc_t1_ParamLimits

0xb8bc,	// (0x0004cc82) form_field_data_pane_vc_t1

0x0f7d,	// (0x00042343) input_focus_pane_vc_ParamLimits

0x0f7d,	// (0x00042343) input_focus_pane_vc

0xb8d6,	// (0x0004cc9c) button_value_adjust_pane_cp3_vc

0xb8de,	// (0x0004cca4) button_value_adjust_pane_cp5_vc

0xb8e6,	// (0x0004ccac) form_field_data_pane_vc_ParamLimits

0xb8e6,	// (0x0004ccac) form_field_data_pane_vc

0xb901,	// (0x0004ccc7) form_field_data_pane_vc_cp2

0xb909,	// (0x0004cccf) form_field_data_wide_pane_vc_ParamLimits

0xb909,	// (0x0004cccf) form_field_data_wide_pane_vc

0xb923,	// (0x0004cce9) form_field_data_wide_pane_vc_cp2

0xb92b,	// (0x0004ccf1) form_field_popup_pane_vc_ParamLimits

0xb92b,	// (0x0004ccf1) form_field_popup_pane_vc

0xb946,	// (0x0004cd0c) form_field_popup_wide_pane_vc_ParamLimits

0xb946,	// (0x0004cd0c) form_field_popup_wide_pane_vc

0xb960,	// (0x0004cd26) form_field_slider_pane_vc_ParamLimits

0xb960,	// (0x0004cd26) form_field_slider_pane_vc

0xb973,	// (0x0004cd39) form_field_slider_wide_pane_vc_ParamLimits

0xb973,	// (0x0004cd39) form_field_slider_wide_pane_vc

0xb986,	// (0x0004cd4c) grid_touch_1_pane_ParamLimits

0xb986,	// (0x0004cd4c) grid_touch_1_pane

0xb992,	// (0x0004cd58) grid_touch_2_pane_ParamLimits

0xb992,	// (0x0004cd58) grid_touch_2_pane

0x93fa,	// (0x0004a7c0) touch_pane_g1_ParamLimits

0x93fa,	// (0x0004a7c0) touch_pane_g1

0xb9ac,	// (0x0004cd72) cell_app_pane_cp_wide_ParamLimits

0xb9ac,	// (0x0004cd72) cell_app_pane_cp_wide

0xb9bd,	// (0x0004cd83) grid_popup_fast_wide_pane_ParamLimits

0xb9bd,	// (0x0004cd83) grid_popup_fast_wide_pane

0xb9d1,	// (0x0004cd97) scroll_pane_cp19_ParamLimits

0xb9d1,	// (0x0004cd97) scroll_pane_cp19

0x08df,	// (0x00041ca5) bg_popup_window_pane_cp20

0xb9e5,	// (0x0004cdab) listscroll_popup_fast_wide_pane

0xb9ed,	// (0x0004cdb3) grid_indicator_nsta_pane

0xb9ff,	// (0x0004cdc5) clock_nsta_pane_g1

0xba08,	// (0x0004cdce) clock_nsta_pane_t1

0xba24,	// (0x0004cdea) cell_indicator_nsta_pane_ParamLimits

0xba24,	// (0x0004cdea) cell_indicator_nsta_pane

0xba59,	// (0x0004ce1f) cell_indicator_nsta_pane_g1

0xba67,	// (0x0004ce2d) cell_indicator_nsta_pane_g2

0x0001,

0xfa88,	// (0x00050e4e) cell_indicator_nsta_pane_g

0xba7a,	// (0x0004ce40) clock_nsta_pane_cp

0xba83,	// (0x0004ce49) indicator_nsta_pane_cp

0xba8d,	// (0x0004ce53) nsta_clock_indic_pane_g1

0x0977,	// (0x00041d3d) grid_indicator_pane

0x4387,	// (0x0004574d) scroll_pane_cp29

0x6d6f,	// (0x00048135) indicator_nsta_pane_cp2_ParamLimits

0x6d6f,	// (0x00048135) indicator_nsta_pane_cp2

0x093b,	// (0x00041d01) main_apps_wheel_pane

0x9c54,	// (0x0004b01a) form_midp_field_text_pane_ParamLimits

0x9da3,	// (0x0004b169) scroll_bar_cp050_ParamLimits

0xbae6,	// (0x0004ceac) cell_indicator_pane_ParamLimits

0xbae6,	// (0x0004ceac) cell_indicator_pane

0xbafe,	// (0x0004cec4) cell_indicator_pane_g1

0xbb08,	// (0x0004cece) grid_wheel_folder_pane_ParamLimits

0xbb08,	// (0x0004cece) grid_wheel_folder_pane

0xbb1c,	// (0x0004cee2) list_wheel_apps_pane_ParamLimits

0xbb1c,	// (0x0004cee2) list_wheel_apps_pane

0xbb2f,	// (0x0004cef5) main_apps_wheel_pane_g1_ParamLimits

0xbb2f,	// (0x0004cef5) main_apps_wheel_pane_g1

0xbb4b,	// (0x0004cf11) main_apps_wheel_pane_g2_ParamLimits

0xbb4b,	// (0x0004cf11) main_apps_wheel_pane_g2

0x0001,

0xfaa4,	// (0x00050e6a) main_apps_wheel_pane_g_ParamLimits

0xfaa4,	// (0x00050e6a) main_apps_wheel_pane_g

0xbb67,	// (0x0004cf2d) main_apps_wheel_pane_t1_ParamLimits

0xbb67,	// (0x0004cf2d) main_apps_wheel_pane_t1

0xbb90,	// (0x0004cf56) list_wheel_apps_pane_g1

0xbb98,	// (0x0004cf5e) list_wheel_apps_pane_g2

0xbba0,	// (0x0004cf66) list_wheel_apps_pane_g3

0xbba8,	// (0x0004cf6e) list_wheel_apps_pane_g4

0xbbb2,	// (0x0004cf78) list_wheel_apps_pane_g5

0x0004,

0xfaa9,	// (0x00050e6f) list_wheel_apps_pane_g

0x8fa1,	// (0x0004a367) navi_icon_text_pane

0x9493,	// (0x0004a859) aid_fill_nsta

0xbbd3,	// (0x0004cf99) navi_icon_text_pane_g1

0xbbdf,	// (0x0004cfa5) navi_icon_text_pane_t1

0x8e43,	// (0x0004a209) list_set_graphic_pane_t1_ParamLimits

0x8e43,	// (0x0004a209) list_set_graphic_pane_t1

0xa510,	// (0x0004b8d6) popup_midp_note_alarm_window_t6_ParamLimits

0xa510,	// (0x0004b8d6) popup_midp_note_alarm_window_t6

0xa522,	// (0x0004b8e8) popup_midp_note_alarm_window_t7_ParamLimits

0xa522,	// (0x0004b8e8) popup_midp_note_alarm_window_t7

0xa534,	// (0x0004b8fa) popup_midp_note_alarm_window_t8_ParamLimits

0xa534,	// (0x0004b8fa) popup_midp_note_alarm_window_t8

0xa546,	// (0x0004b90c) popup_midp_note_alarm_window_t9_ParamLimits

0xa546,	// (0x0004b90c) popup_midp_note_alarm_window_t9

0xa558,	// (0x0004b91e) popup_midp_note_alarm_window_t10_ParamLimits

0xa558,	// (0x0004b91e) popup_midp_note_alarm_window_t10

0xa56a,	// (0x0004b930) popup_midp_note_alarm_window_t11_ParamLimits

0xa56a,	// (0x0004b930) popup_midp_note_alarm_window_t11

0xa57c,	// (0x0004b942) scroll_pane_cp17_ParamLimits

0xa57c,	// (0x0004b942) scroll_pane_cp17

0x781a,	// (0x00048be0) volume_small_pane_cp_g1

0x7c18,	// (0x00048fde) volume_small_pane_cp_g2

0x7c21,	// (0x00048fe7) volume_small_pane_cp_g3

0x7c2a,	// (0x00048ff0) volume_small_pane_cp_g4

0x7c33,	// (0x00048ff9) volume_small_pane_cp_g5

0x7c3c,	// (0x00049002) volume_small_pane_cp_g6

0x7c45,	// (0x0004900b) volume_small_pane_cp_g7

0x7c4e,	// (0x00049014) volume_small_pane_cp_g8

0x7c57,	// (0x0004901d) volume_small_pane_cp_g9

0x7c60,	// (0x00049026) volume_small_pane_cp_g10

0x920e,	// (0x0004a5d4) midp_ticker_pane_g1_ParamLimits

0x921a,	// (0x0004a5e0) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00050afe) midp_ticker_pane_g_ParamLimits

0x9226,	// (0x0004a5ec) midp_ticker_pane_t1_ParamLimits

0x94a9,	// (0x0004a86f) aid_fill_nsta_2

0x9d8f,	// (0x0004b155) list_form2_midp_pane

0xaf0b,	// (0x0004c2d1) midp_editing_number_pane_ParamLimits

0xaf1a,	// (0x0004c2e0) midp_ticker_pane_ParamLimits

0xbbf1,	// (0x0004cfb7) form2_midp_field_pane

0xbc15,	// (0x0004cfdb) scroll_pane_cp51

0xbc35,	// (0x0004cffb) form2_midp_button_pane_ParamLimits

0xbc35,	// (0x0004cffb) form2_midp_button_pane

0xbc47,	// (0x0004d00d) form2_midp_content_pane_ParamLimits

0xbc47,	// (0x0004d00d) form2_midp_content_pane

0xbc61,	// (0x0004d027) form2_midp_field_choice_group_pane

0xbc69,	// (0x0004d02f) form2_midp_field_pane_g1

0xbc71,	// (0x0004d037) form2_midp_field_pane_g2

0xbc79,	// (0x0004d03f) form2_midp_field_pane_g3

0xbc81,	// (0x0004d047) form2_midp_field_pane_g4

0x0003,

0xface,	// (0x00050e94) form2_midp_field_pane_g

0xbc89,	// (0x0004d04f) form2_midp_gauge_slider_pane

0xbc91,	// (0x0004d057) form2_midp_gauge_wait_pane

0xbc99,	// (0x0004d05f) form2_midp_image_pane_ParamLimits

0xbc99,	// (0x0004d05f) form2_midp_image_pane

0xbcb4,	// (0x0004d07a) form2_midp_label_pane_ParamLimits

0xbcb4,	// (0x0004d07a) form2_midp_label_pane

0xbcd3,	// (0x0004d099) form2_midp_label_pane_cp_ParamLimits

0xbcd3,	// (0x0004d099) form2_midp_label_pane_cp

0xbcf4,	// (0x0004d0ba) form2_midp_string_pane_ParamLimits

0xbcf4,	// (0x0004d0ba) form2_midp_string_pane

0x5c7e,	// (0x00047044) form2_midp_text_pane_ParamLimits

0x5c7e,	// (0x00047044) form2_midp_text_pane

0xbd06,	// (0x0004d0cc) form2_midp_time_pane

0xbd16,	// (0x0004d0dc) input_focus_pane_cp51_ParamLimits

0xbd16,	// (0x0004d0dc) input_focus_pane_cp51

0xbd2e,	// (0x0004d0f4) form2_midp_label_pane_t1_ParamLimits

0xbd2e,	// (0x0004d0f4) form2_midp_label_pane_t1

0x5ca1,	// (0x00047067) form2_mdip_text_pane_t1_ParamLimits

0x5ca1,	// (0x00047067) form2_mdip_text_pane_t1

0x5cc0,	// (0x00047086) form2_midp_time_pane_t1

0xbd7c,	// (0x0004d142) form2_midp_gauge_slider_pane_t1

0xbd8e,	// (0x0004d154) form2_midp_gauge_slider_pane_t2

0xbda0,	// (0x0004d166) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad7,	// (0x00050e9d) form2_midp_gauge_slider_pane_t

0xbdb2,	// (0x0004d178) form2_midp_slider_pane

0xbdbe,	// (0x0004d184) form2_midp_gauge_wait_pane_t1

0xbdcc,	// (0x0004d192) form2_midp_wait_pane_ParamLimits

0xbdcc,	// (0x0004d192) form2_midp_wait_pane

0xbdf7,	// (0x0004d1bd) list_single_2graphic_pane_cp4_ParamLimits

0xbdf7,	// (0x0004d1bd) list_single_2graphic_pane_cp4

0x9ad0,	// (0x0004ae96) list_single_midp_graphic_pane_cp_ParamLimits

0x9ad0,	// (0x0004ae96) list_single_midp_graphic_pane_cp

0x08df,	// (0x00041ca5) list_highlight_pane_cp20

0xbe10,	// (0x0004d1d6) list_single_2graphic_pane_g1_cp4

0xb3a9,	// (0x0004c76f) list_single_2graphic_pane_g2_cp4

0xbe18,	// (0x0004d1de) list_single_2graphic_pane_t1_cp4

0x093b,	// (0x00041d01) list_highlight_pane_cp21

0xbe27,	// (0x0004d1ed) list_single_midp_graphic_pane_g4_cp

0xbe36,	// (0x0004d1fc) list_single_midp_graphic_pane_t1_cp

0xbe4b,	// (0x0004d211) form2_mdip_string_pane_t1_ParamLimits

0xbe4b,	// (0x0004d211) form2_mdip_string_pane_t1

0x08df,	// (0x00041ca5) bg_wml_button_pane_cp2

0x08d5,	// (0x00041c9b) form2_midp_image_pane_g1

0x678e,	// (0x00047b54) list_double_large_graphic_pane_g5_ParamLimits

0x678e,	// (0x00047b54) list_double_large_graphic_pane_g5

0x9138,	// (0x0004a4fe) midp_form_pane_ParamLimits

0x093b,	// (0x00041d01) main_apps_wheel_pane_ParamLimits

0x7467,	// (0x0004882d) popup_preview_window_ParamLimits

0x7467,	// (0x0004882d) popup_preview_window

0x764e,	// (0x00048a14) popup_touch_info_window_ParamLimits

0x764e,	// (0x00048a14) popup_touch_info_window

0x7670,	// (0x00048a36) popup_touch_menu_window_ParamLimits

0x7670,	// (0x00048a36) popup_touch_menu_window

0x08cb,	// (0x00041c91) bg_popup_sub_pane_cp6

0xbee7,	// (0x0004d2ad) list_touch_menu_pane

0xbeef,	// (0x0004d2b5) list_single_touch_menu_pane_ParamLimits

0xbeef,	// (0x0004d2b5) list_single_touch_menu_pane

0xbf07,	// (0x0004d2cd) list_single_touch_menu_pane_t1

0x093b,	// (0x00041d01) bg_popup_sub_pane_cp7_ParamLimits

0x093b,	// (0x00041d01) bg_popup_sub_pane_cp7

0xbf15,	// (0x0004d2db) heading_sub_pane

0xbf1d,	// (0x0004d2e3) list_touch_info_pane_ParamLimits

0xbf1d,	// (0x0004d2e3) list_touch_info_pane

0xbf2c,	// (0x0004d2f2) list_single_touch_info_pane_ParamLimits

0xbf2c,	// (0x0004d2f2) list_single_touch_info_pane

0xbf3e,	// (0x0004d304) list_single_touch_info_pane_t1

0xbf4c,	// (0x0004d312) list_single_touch_info_pane_t2

0x0001,

0xfae5,	// (0x00050eab) list_single_touch_info_pane_t

0x9130,	// (0x0004a4f6) bg_popup_heading_pane_cp

0xbf5a,	// (0x0004d320) heading_sub_pane_t1

0x9a01,	// (0x0004adc7) bg_popup_preview_window_pane_cp_ParamLimits

0x9a01,	// (0x0004adc7) bg_popup_preview_window_pane_cp

0xbf15,	// (0x0004d2db) heading_preview_pane

0xbf1d,	// (0x0004d2e3) list_preview_pane_ParamLimits

0xbf1d,	// (0x0004d2e3) list_preview_pane

0xbf68,	// (0x0004d32e) popup_preview_window_g1

0xbf2c,	// (0x0004d2f2) list_single_preview_pane_ParamLimits

0xbf2c,	// (0x0004d2f2) list_single_preview_pane

0xbf70,	// (0x0004d336) list_single_preview_pane_g1

0xbf78,	// (0x0004d33e) list_single_preview_pane_t1

0xbf3e,	// (0x0004d304) list_single_preview_pane_t2

0x0001,

0xfaea,	// (0x00050eb0) list_single_preview_pane_t

0xbf86,	// (0x0004d34c) bg_popup_heading_pane_cp2_ParamLimits

0xbf86,	// (0x0004d34c) bg_popup_heading_pane_cp2

0xbf9c,	// (0x0004d362) heading_preview_pane_g1

0xbfa4,	// (0x0004d36a) heading_preview_pane_t1_ParamLimits

0xbfa4,	// (0x0004d36a) heading_preview_pane_t1

0x098e,	// (0x00041d54) soft_indicator_pane_t1_ParamLimits

0x0ef0,	// (0x000422b6) scroll_pane_ParamLimits

0x428c,	// (0x00045652) scroll_sc2_left_pane

0x4283,	// (0x00045649) scroll_sc2_right_pane

0x42ab,	// (0x00045671) scroll_bg_pane_g1_ParamLimits

0x42c0,	// (0x00045686) scroll_bg_pane_g2_ParamLimits

0x42d8,	// (0x0004569e) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00050a89) scroll_bg_pane_g_ParamLimits

0x42ab,	// (0x00045671) scroll_handle_pane_g1_ParamLimits

0x42fa,	// (0x000456c0) scroll_handle_pane_g2_ParamLimits

0x42d8,	// (0x0004569e) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00050a90) scroll_handle_pane_g_ParamLimits

0x70ac,	// (0x00048472) popup_choice_list_window_ParamLimits

0x70ac,	// (0x00048472) popup_choice_list_window

0x98d7,	// (0x0004ac9d) choice_list_pane

0x9959,	// (0x0004ad1f) cell_toolbar_pane_t1

0x9981,	// (0x0004ad47) toolbar_button_pane_ParamLimits

0xaa46,	// (0x0004be0c) ai_gene_pane_1_t2_ParamLimits

0xaa46,	// (0x0004be0c) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x00050cb8) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x00050cb8) ai_gene_pane_1_t

0xbfc1,	// (0x0004d387) scroll_sc2_left_pane_g1

0xbfc1,	// (0x0004d387) scroll_sc2_right_pane_g1

0x9457,	// (0x0004a81d) bg_popup_sub_pane_cp10

0xbfcb,	// (0x0004d391) list_choice_list_pane

0xbfe4,	// (0x0004d3aa) list_single_choice_list_pane_ParamLimits

0xbfe4,	// (0x0004d3aa) list_single_choice_list_pane

0xbffc,	// (0x0004d3c2) list_single_choice_list_pane_g1

0x10de,	// (0x000424a4) list_single_choice_list_pane_t1_ParamLimits

0x10de,	// (0x000424a4) list_single_choice_list_pane_t1

0xc004,	// (0x0004d3ca) choice_list_pane_g1

0xc00c,	// (0x0004d3d2) choice_list_pane_t1

0x08cb,	// (0x00041c91) input_focus_pane_cp11

0x125c,	// (0x00042622) title_pane_stacon_g2_ParamLimits

0x125c,	// (0x00042622) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050a6f) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050a6f) title_pane_stacon_g

0x9130,	// (0x0004a4f6) cursor_press_pane

0x7166,	// (0x0004852c) popup_fep_hwr_window_ParamLimits

0x7166,	// (0x0004852c) popup_fep_hwr_window

0x71f0,	// (0x000485b6) popup_fep_vkb_window_ParamLimits

0x71f0,	// (0x000485b6) popup_fep_vkb_window

0xc01a,	// (0x0004d3e0) cursor_press_pane_g1

0x0002,

0xfb13,	// (0x00050ed9) fep_vkb_side_pane_g_ParamLimits

0x7ca2,	// (0x00049068) fep_hwr_candidate_pane_ParamLimits

0x7ca2,	// (0x00049068) fep_hwr_candidate_pane

0x7ccc,	// (0x00049092) fep_hwr_side_pane_ParamLimits

0x7ccc,	// (0x00049092) fep_hwr_side_pane

0x7cee,	// (0x000490b4) fep_hwr_top_pane_ParamLimits

0x7cee,	// (0x000490b4) fep_hwr_top_pane

0x7d06,	// (0x000490cc) fep_hwr_write_pane_ParamLimits

0x7d06,	// (0x000490cc) fep_hwr_write_pane

0xfb13,	// (0x00050ed9) fep_vkb_side_pane_g

0xc022,	// (0x0004d3e8) fep_hwr_top_pane_g1

0xc034,	// (0x0004d3fa) fep_hwr_top_pane_g2

0x7d32,	// (0x000490f8) fep_hwr_top_pane_g3

0x0002,

0xfaef,	// (0x00050eb5) fep_hwr_top_pane_g

0x7d47,	// (0x0004910d) fep_hwr_top_text_pane

0x43f4,	// (0x000457ba) fep_hwr_top_text_pane_g1

0xc06a,	// (0x0004d430) fep_hwr_top_text_pane_t1

0x7e51,	// (0x00049217) fep_hwr_candidate_pane_g1

0xc2b5,	// (0x0004d67b) fep_vkb_keypad_pane_g3_ParamLimits

0xc2b5,	// (0x0004d67b) fep_vkb_keypad_pane_g3

0xc2e1,	// (0x0004d6a7) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e1,	// (0x0004d6a7) fep_vkb_keypad_pane_g4

0xc358,	// (0x0004d71e) fep_vkb_bottom_pane_g2_ParamLimits

0xc358,	// (0x0004d71e) fep_vkb_bottom_pane_g2

0x0001,

0xfb1a,	// (0x00050ee0) fep_vkb_bottom_pane_g_ParamLimits

0xfb1a,	// (0x00050ee0) fep_vkb_bottom_pane_g

0xbfc1,	// (0x0004d387) cell_vkb_side_pane_g2

0x0001,

0xfb24,	// (0x00050eea) cell_vkb_side_pane_g

0xc3e3,	// (0x0004d7a9) cell_vkb_side_pane_t1

0xc3f1,	// (0x0004d7b7) cell_vkb_side_pane_t1_copy1

0xbfc1,	// (0x0004d387) bg_fep_vkb_candidate_pane_g2

0xc535,	// (0x0004d8fb) cell_vkb_candidate_pane_ParamLimits

0xc078,	// (0x0004d43e) aid_size_cell_vkb_ParamLimits

0xc078,	// (0x0004d43e) aid_size_cell_vkb

0xc535,	// (0x0004d8fb) cell_vkb_candidate_pane

0x7e6b,	// (0x00049231) bg_popup_fep_shadow_pane_g1

0xc10a,	// (0x0004d4d0) fep_vkb_bottom_pane_ParamLimits

0xc10a,	// (0x0004d4d0) fep_vkb_bottom_pane

0xc147,	// (0x0004d50d) fep_vkb_candidate_pane_ParamLimits

0xc147,	// (0x0004d50d) fep_vkb_candidate_pane

0xc163,	// (0x0004d529) fep_vkb_keypad_pane_ParamLimits

0xc163,	// (0x0004d529) fep_vkb_keypad_pane

0xc196,	// (0x0004d55c) fep_vkb_side_pane_ParamLimits

0xc196,	// (0x0004d55c) fep_vkb_side_pane

0xc1d2,	// (0x0004d598) fep_vkb_top_pane_ParamLimits

0xc1d2,	// (0x0004d598) fep_vkb_top_pane

0xc20e,	// (0x0004d5d4) fep_vkb_top_pane_g1_ParamLimits

0xc20e,	// (0x0004d5d4) fep_vkb_top_pane_g1

0xc21d,	// (0x0004d5e3) fep_vkb_top_pane_g2_ParamLimits

0xc21d,	// (0x0004d5e3) fep_vkb_top_pane_g2

0xc22c,	// (0x0004d5f2) fep_vkb_top_pane_g3_ParamLimits

0xc22c,	// (0x0004d5f2) fep_vkb_top_pane_g3

0x0003,

0xfb0a,	// (0x00050ed0) fep_vkb_top_pane_g_ParamLimits

0xfb0a,	// (0x00050ed0) fep_vkb_top_pane_g

0xc24a,	// (0x0004d610) fep_vkb_top_text_pane_ParamLimits

0xc24a,	// (0x0004d610) fep_vkb_top_text_pane

0xc25b,	// (0x0004d621) fep_vkb_side_pane_g1_ParamLimits

0xc25b,	// (0x0004d621) fep_vkb_side_pane_g1

0xc2a4,	// (0x0004d66a) grid_vkb_side_pane_ParamLimits

0xc2a4,	// (0x0004d66a) grid_vkb_side_pane

0x7e73,	// (0x00049239) bg_popup_fep_shadow_pane_g2

0x7e7c,	// (0x00049242) bg_popup_fep_shadow_pane_g3

0x7e84,	// (0x0004924a) bg_popup_fep_shadow_pane_g4

0x7e8d,	// (0x00049253) bg_popup_fep_shadow_pane_g5

0x7e97,	// (0x0004925d) bg_popup_fep_shadow_pane_g6

0x7e9f,	// (0x00049265) bg_popup_fep_shadow_pane_g7

0x0ff5,	// (0x000423bb) bg_popup_fep_shadow_pane_g8

0xc303,	// (0x0004d6c9) grid_vkb_keypad_number_pane_ParamLimits

0xc303,	// (0x0004d6c9) grid_vkb_keypad_number_pane

0xc317,	// (0x0004d6dd) grid_vkb_keypad_pane_ParamLimits

0xc317,	// (0x0004d6dd) grid_vkb_keypad_pane

0xc33d,	// (0x0004d703) fep_vkb_bottom_pane_g1_ParamLimits

0xc33d,	// (0x0004d703) fep_vkb_bottom_pane_g1

0xc366,	// (0x0004d72c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc366,	// (0x0004d72c) grid_vkb_keypad_bottom_left_pane

0xc37b,	// (0x0004d741) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc37b,	// (0x0004d741) grid_vkb_keypad_bottom_right_pane

0xc390,	// (0x0004d756) fep_vkb_top_text_pane_g1

0xc3ab,	// (0x0004d771) fep_vkb_top_text_pane_t1

0xc3c0,	// (0x0004d786) cell_vkb_side_pane_ParamLimits

0xc3c0,	// (0x0004d786) cell_vkb_side_pane

0xbfc1,	// (0x0004d387) cell_vkb_side_pane_g1

0xc3ff,	// (0x0004d7c5) cell_vkb_keypad_pane_ParamLimits

0xc3ff,	// (0x0004d7c5) cell_vkb_keypad_pane

0xc48c,	// (0x0004d852) cell_vkb_keypad_pane_g1

0x0008,

0xfb37,	// (0x00050efd) bg_popup_fep_shadow_pane_g

0xbfc1,	// (0x0004d387) cell_hwr_side_pane_g1

0xbfc1,	// (0x0004d387) cell_hwr_side_pane_g2

0xc496,	// (0x0004d85c) cell_vkb_keypad_pane_t1

0xc4a4,	// (0x0004d86a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4a4,	// (0x0004d86a) cell_vkb_keypad_bottom_left_pane

0xc4c1,	// (0x0004d887) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c1,	// (0x0004d887) cell_vkb_keypad_bottom_right_pane

0xbfc1,	// (0x0004d387) cell_vkb_keypad_bottom_left_pane_g1

0xbfc1,	// (0x0004d387) cell_vkb_keypad_bottom_right_pane_g1

0xc4fa,	// (0x0004d8c0) cell_vkb_keypad_number_pane_ParamLimits

0xc4fa,	// (0x0004d8c0) cell_vkb_keypad_number_pane

0xc519,	// (0x0004d8df) cell_vkb_keypad_number_pane_g1

0xc523,	// (0x0004d8e9) cell_vkb_keypad_number_pane_g2

0xc52c,	// (0x0004d8f2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb29,	// (0x00050eef) cell_vkb_keypad_number_pane_g

0xc496,	// (0x0004d85c) cell_vkb_keypad_number_pane_t1

0xc556,	// (0x0004d91c) fep_vkb_candidate_pane_g1

0x0001,

0xfb24,	// (0x00050eea) cell_hwr_side_pane_g

0xc56f,	// (0x0004d935) cell_hwr_side_pane_t1

0x7eb1,	// (0x00049277) cell_hwr_side_pane_t1_copy1

0xc23c,	// (0x0004d602) cell_hwr_candidate_pane_g1

0x7ebf,	// (0x00049285) cell_hwr_candidate_pane_t1

0xbfc1,	// (0x0004d387) cell_vkb_candidate_pane_g2

0xc5f5,	// (0x0004d9bb) cell_vkb_candidate_pane_t1

0x7c69,	// (0x0004902f) bg_popup_fep_shadow_pane_ParamLimits

0x7c69,	// (0x0004902f) bg_popup_fep_shadow_pane

0x23b0,	// (0x00043776) bg_fep_hwr_top_pane_g4

0xc046,	// (0x0004d40c) bg_hwr_side_pane_g1_ParamLimits

0xc046,	// (0x0004d40c) bg_hwr_side_pane_g1

0x7d85,	// (0x0004914b) cell_hwr_side_pane_ParamLimits

0x7d85,	// (0x0004914b) cell_hwr_side_pane

0x7dc2,	// (0x00049188) fep_hwr_write_pane_g1_ParamLimits

0x7dc2,	// (0x00049188) fep_hwr_write_pane_g1

0x7dcf,	// (0x00049195) fep_hwr_write_pane_g2_ParamLimits

0x7dcf,	// (0x00049195) fep_hwr_write_pane_g2

0x7ddc,	// (0x000491a2) fep_hwr_write_pane_g3_ParamLimits

0x7ddc,	// (0x000491a2) fep_hwr_write_pane_g3

0x7dea,	// (0x000491b0) fep_hwr_write_pane_g4_ParamLimits

0x7dea,	// (0x000491b0) fep_hwr_write_pane_g4

0x0005,

0xfaf6,	// (0x00050ebc) fep_hwr_write_pane_g_ParamLimits

0xfaf6,	// (0x00050ebc) fep_hwr_write_pane_g

0x23b0,	// (0x00043776) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x23b0,	// (0x00043776) bg_fep_hwr_candidate_pane_g2

0x7dff,	// (0x000491c5) cell_hwr_candidate_pane_ParamLimits

0x7dff,	// (0x000491c5) cell_hwr_candidate_pane

0x7e51,	// (0x00049217) fep_hwr_candidate_pane_g1_ParamLimits

0xc0a6,	// (0x0004d46c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0a6,	// (0x0004d46c) bg_popup_fep_shadow_pane_cp2

0xc23c,	// (0x0004d602) fep_vkb_top_pane_g4_ParamLimits

0xc23c,	// (0x0004d602) fep_vkb_top_pane_g4

0xc282,	// (0x0004d648) fep_vkb_side_pane_g2_ParamLimits

0xc282,	// (0x0004d648) fep_vkb_side_pane_g2

0x544a,	// (0x00046810) list_setting_pane_t4_ParamLimits

0x544a,	// (0x00046810) list_setting_pane_t4

0x54e6,	// (0x000468ac) list_setting_number_pane_t5_ParamLimits

0x54e6,	// (0x000468ac) list_setting_number_pane_t5

0x6b64,	// (0x00047f2a) list_double_heading_pane_cp2_ParamLimits

0x6b64,	// (0x00047f2a) list_double_heading_pane_cp2

0xc603,	// (0x0004d9c9) list_double_heading_pane_g1_cp2_ParamLimits

0xc603,	// (0x0004d9c9) list_double_heading_pane_g1_cp2

0xc60f,	// (0x0004d9d5) list_double_heading_pane_g2_cp2_ParamLimits

0xc60f,	// (0x0004d9d5) list_double_heading_pane_g2_cp2

0xc623,	// (0x0004d9e9) list_double_heading_pane_t1_cp2_ParamLimits

0xc623,	// (0x0004d9e9) list_double_heading_pane_t1_cp2

0xc639,	// (0x0004d9ff) list_double_heading_pane_t2_cp2_ParamLimits

0xc639,	// (0x0004d9ff) list_double_heading_pane_t2_cp2

0x08c3,	// (0x00041c89) aid_value_unit2

0x6267,	// (0x0004762d) popup_preview_fixed_window

0x0a6e,	// (0x00041e34) bg_popup_preview_window_pane_cp02

0xc64b,	// (0x0004da11) list_preview_fixed_pane

0xc691,	// (0x0004da57) list_empty_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_empty_pane_fp

0xc691,	// (0x0004da57) list_single_cale_day_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_single_cale_day_pane_fp

0xc691,	// (0x0004da57) list_single_graphic_heading_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_single_graphic_heading_pane_fp

0xc691,	// (0x0004da57) list_single_graphic_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_single_graphic_pane_fp

0xc691,	// (0x0004da57) list_single_heading_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_single_heading_pane_fp

0xc691,	// (0x0004da57) list_single_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_single_pane_fp

0xc6aa,	// (0x0004da70) list_single_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0004da70) list_single_pane_fp_g1

0x7edd,	// (0x000492a3) list_single_pane_fp_g2_ParamLimits

0x7edd,	// (0x000492a3) list_single_pane_fp_g2

0x7ee9,	// (0x000492af) list_single_pane_fp_g3_ParamLimits

0x7ee9,	// (0x000492af) list_single_pane_fp_g3

0xc6b6,	// (0x0004da7c) list_single_pane_fp_g4_ParamLimits

0xc6b6,	// (0x0004da7c) list_single_pane_fp_g4

0x0003,

0xfb58,	// (0x00050f1e) list_single_pane_fp_g_ParamLimits

0xfb58,	// (0x00050f1e) list_single_pane_fp_g

0x5cd3,	// (0x00047099) list_single_pane_fp_t1_ParamLimits

0x5cd3,	// (0x00047099) list_single_pane_fp_t1

0x5cea,	// (0x000470b0) list_single_graphic_pane_fp_g1_ParamLimits

0x5cea,	// (0x000470b0) list_single_graphic_pane_fp_g1

0xc6aa,	// (0x0004da70) list_single_graphic_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0004da70) list_single_graphic_pane_fp_g2

0x7edd,	// (0x000492a3) list_single_graphic_pane_fp_g3_ParamLimits

0x7edd,	// (0x000492a3) list_single_graphic_pane_fp_g3

0x7ee9,	// (0x000492af) list_single_graphic_pane_fp_g4_ParamLimits

0x7ee9,	// (0x000492af) list_single_graphic_pane_fp_g4

0xc6b6,	// (0x0004da7c) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0004da7c) list_single_graphic_pane_fp_g5

0x0004,

0xfb61,	// (0x00050f27) list_single_graphic_pane_fp_g_ParamLimits

0xfb61,	// (0x00050f27) list_single_graphic_pane_fp_g

0x5cf6,	// (0x000470bc) list_single_graphic_pane_fp_t1_ParamLimits

0x5cf6,	// (0x000470bc) list_single_graphic_pane_fp_t1

0x5cea,	// (0x000470b0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5cea,	// (0x000470b0) list_single_graphic_heading_pane_fp_g1

0xc6aa,	// (0x0004da70) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0004da70) list_single_graphic_heading_pane_fp_g2

0x7edd,	// (0x000492a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7edd,	// (0x000492a3) list_single_graphic_heading_pane_fp_g3

0x7ee9,	// (0x000492af) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7ee9,	// (0x000492af) list_single_graphic_heading_pane_fp_g4

0xc6b6,	// (0x0004da7c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0004da7c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00050f27) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00050f27) list_single_graphic_heading_pane_fp_g

0x5d0c,	// (0x000470d2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5d0c,	// (0x000470d2) list_single_graphic_heading_pane_fp_t1

0x5d22,	// (0x000470e8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5d22,	// (0x000470e8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6c,	// (0x00050f32) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6c,	// (0x00050f32) list_single_graphic_heading_pane_fp_t

0x5d34,	// (0x000470fa) list_single_cale_day_pane_fp_g1_ParamLimits

0x5d34,	// (0x000470fa) list_single_cale_day_pane_fp_g1

0xc6c2,	// (0x0004da88) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c2,	// (0x0004da88) list_single_cale_day_pane_fp_g2

0x7efd,	// (0x000492c3) list_single_cale_day_pane_fp_g3_ParamLimits

0x7efd,	// (0x000492c3) list_single_cale_day_pane_fp_g3

0x7f25,	// (0x000492eb) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f25,	// (0x000492eb) list_single_cale_day_pane_fp_g4

0x7f49,	// (0x0004930f) list_single_cale_day_pane_fp_g5_ParamLimits

0x7f49,	// (0x0004930f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb71,	// (0x00050f37) list_single_cale_day_pane_fp_g_ParamLimits

0xfb71,	// (0x00050f37) list_single_cale_day_pane_fp_g

0x5d6c,	// (0x00047132) list_single_cale_day_pane_fp_t1_ParamLimits

0x5d6c,	// (0x00047132) list_single_cale_day_pane_fp_t1

0x5d92,	// (0x00047158) list_single_cale_day_pane_fp_t2_ParamLimits

0x5d92,	// (0x00047158) list_single_cale_day_pane_fp_t2

0x5dab,	// (0x00047171) list_single_cale_day_pane_fp_t3_ParamLimits

0x5dab,	// (0x00047171) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7c,	// (0x00050f42) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7c,	// (0x00050f42) list_single_cale_day_pane_fp_t

0xc6aa,	// (0x0004da70) list_empty_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0004da70) list_empty_pane_fp_g1

0x5dc4,	// (0x0004718a) list_empty_pane_fp_t1

0x5dd2,	// (0x00047198) list_empty_pane_fp_t2

0x0001,

0xfb83,	// (0x00050f49) list_empty_pane_fp_t

0xc6aa,	// (0x0004da70) list_single_heading_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0004da70) list_single_heading_pane_fp_g1

0x7edd,	// (0x000492a3) list_single_heading_pane_fp_g2_ParamLimits

0x7edd,	// (0x000492a3) list_single_heading_pane_fp_g2

0x7ee9,	// (0x000492af) list_single_heading_pane_fp_g3_ParamLimits

0x7ee9,	// (0x000492af) list_single_heading_pane_fp_g3

0x0002,

0xfb88,	// (0x00050f4e) list_single_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x00050f4e) list_single_heading_pane_fp_g

0x5de0,	// (0x000471a6) list_single_heading_pane_fp_t1_ParamLimits

0x5de0,	// (0x000471a6) list_single_heading_pane_fp_t1

0x5df2,	// (0x000471b8) list_single_heading_pane_fp_t2_ParamLimits

0x5df2,	// (0x000471b8) list_single_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x00050f55) list_single_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x00050f55) list_single_heading_pane_fp_t

0x10f3,	// (0x000424b9) aid_size_cell_fast

0x0a51,	// (0x00041e17) soft_indicator_pane_cp1_t1

0x1130,	// (0x000424f6) cell_app_pane_cp2_ParamLimits

0x1130,	// (0x000424f6) cell_app_pane_cp2

0x7c8b,	// (0x00049051) fep_hwr_candidate_drop_down_list_pane

0x23be,	// (0x00043784) fep_hwr_candidate_pane_g3_ParamLimits

0x23be,	// (0x00043784) fep_hwr_candidate_pane_g3

0x23cb,	// (0x00043791) fep_hwr_candidate_pane_g4_ParamLimits

0x23cb,	// (0x00043791) fep_hwr_candidate_pane_g4

0x0002,

0xfb03,	// (0x00050ec9) fep_hwr_candidate_pane_g_ParamLimits

0xfb03,	// (0x00050ec9) fep_hwr_candidate_pane_g

0xc136,	// (0x0004d4fc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc136,	// (0x0004d4fc) fep_vkb_candidate_drop_down_list_pane

0xc55e,	// (0x0004d924) fep_vkb_candidate_pane_g3

0xc566,	// (0x0004d92c) fep_vkb_candidate_pane_g4

0x0002,

0xfb30,	// (0x00050ef6) fep_vkb_candidate_pane_g

0xc23c,	// (0x0004d602) cell_hwr_candidate_pane_g1_ParamLimits

0xc57d,	// (0x0004d943) cell_hwr_candidate_pane_g3_ParamLimits

0xc57d,	// (0x0004d943) cell_hwr_candidate_pane_g3

0xc59e,	// (0x0004d964) cell_hwr_candidate_pane_g4_ParamLimits

0xc59e,	// (0x0004d964) cell_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x00050f10) cell_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x00050f10) cell_hwr_candidate_pane_g

0xc5bf,	// (0x0004d985) cell_vkb_candidate_pane_g3_ParamLimits

0xc5bf,	// (0x0004d985) cell_vkb_candidate_pane_g3

0xc5da,	// (0x0004d9a0) cell_vkb_candidate_pane_g4_ParamLimits

0xc5da,	// (0x0004d9a0) cell_vkb_candidate_pane_g4

0xc6ce,	// (0x0004da94) cell_app_pane_cp2_g1_ParamLimits

0xc6ce,	// (0x0004da94) cell_app_pane_cp2_g1

0xc6ec,	// (0x0004dab2) cell_app_pane_cp2_g2_ParamLimits

0xc6ec,	// (0x0004dab2) cell_app_pane_cp2_g2

0x0001,

0xfb94,	// (0x00050f5a) cell_app_pane_cp2_g_ParamLimits

0xfb94,	// (0x00050f5a) cell_app_pane_cp2_g

0xc6f8,	// (0x0004dabe) cell_app_pane_cp2_t1_ParamLimits

0xc6f8,	// (0x0004dabe) cell_app_pane_cp2_t1

0x0f7d,	// (0x00042343) grid_highlight_pane_cp1_ParamLimits

0x0f7d,	// (0x00042343) grid_highlight_pane_cp1

0x7f6d,	// (0x00049333) cell_hwr_candidate_pane_cp1_ParamLimits

0x7f6d,	// (0x00049333) cell_hwr_candidate_pane_cp1

0xc23c,	// (0x0004d602) fep_hwr_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0004dad0) fep_hwr_candidate_drop_down_list_pane_g2

0xc717,	// (0x0004dadd) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00050f5f) fep_hwr_candidate_drop_down_list_pane_g

0x7f91,	// (0x00049357) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f9a,	// (0x00049360) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f9a,	// (0x00049360) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7fa7,	// (0x0004936d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7fa7,	// (0x0004936d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7fb4,	// (0x0004937a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7fb4,	// (0x0004937a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5bf,	// (0x0004d985) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bf,	// (0x0004d985) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5da,	// (0x0004d9a0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5da,	// (0x0004d9a0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7fc1,	// (0x00049387) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7fc1,	// (0x00049387) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7fdc,	// (0x000493a2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7fdc,	// (0x000493a2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7ff7,	// (0x000493bd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ff7,	// (0x000493bd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x00050f66) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x00050f66) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc724,	// (0x0004daea) cell_vkb_candidate_pane_cp1_ParamLimits

0xc724,	// (0x0004daea) cell_vkb_candidate_pane_cp1

0xc23c,	// (0x0004d602) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc23c,	// (0x0004d602) fep_vkb_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0004dad0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc70a,	// (0x0004dad0) fep_vkb_candidate_drop_down_list_pane_g2

0xc717,	// (0x0004dadd) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc717,	// (0x0004dadd) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x00050f5f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb99,	// (0x00050f5f) fep_vkb_candidate_drop_down_list_pane_g

0xc74a,	// (0x0004db10) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc74a,	// (0x0004db10) fep_vkb_candidate_drop_down_list_scroll_pane

0xc757,	// (0x0004db1d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc757,	// (0x0004db1d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc764,	// (0x0004db2a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc764,	// (0x0004db2a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc770,	// (0x0004db36) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc770,	// (0x0004db36) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc57d,	// (0x0004d943) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc57d,	// (0x0004d943) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc59e,	// (0x0004d964) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc59e,	// (0x0004d964) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc77c,	// (0x0004db42) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc77c,	// (0x0004db42) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc79d,	// (0x0004db63) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc79d,	// (0x0004db63) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7be,	// (0x0004db84) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7be,	// (0x0004db84) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x00050f77) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x00050f77) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6387,	// (0x0004774d) title_pane_g1_ParamLimits

0x6394,	// (0x0004775a) title_pane_g2_ParamLimits

0xf529,	// (0x000508ef) title_pane_g_ParamLimits

0x43ec,	// (0x000457b2) aid_call2_pane

0x43e4,	// (0x000457aa) aid_call_pane

0x43f4,	// (0x000457ba) popup_clock_analogue_window_g1

0x43f4,	// (0x000457ba) popup_clock_analogue_window_g2

0x6b45,	// (0x00047f0b) popup_clock_analogue_window_g3

0x6b4e,	// (0x00047f14) popup_clock_analogue_window_g4

0x08d5,	// (0x00041c9b) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00050a9e) popup_clock_analogue_window_g

0x6b56,	// (0x00047f1c) popup_clock_analogue_window_t1

0x6bb4,	// (0x00047f7a) clock_digital_number_pane_ParamLimits

0x6bb4,	// (0x00047f7a) clock_digital_number_pane

0x6bc0,	// (0x00047f86) clock_digital_number_pane_cp02_ParamLimits

0x6bc0,	// (0x00047f86) clock_digital_number_pane_cp02

0x6bcc,	// (0x00047f92) clock_digital_number_pane_cp03_ParamLimits

0x6bcc,	// (0x00047f92) clock_digital_number_pane_cp03

0x6bd8,	// (0x00047f9e) clock_digital_number_pane_cp04_ParamLimits

0x6bd8,	// (0x00047f9e) clock_digital_number_pane_cp04

0x6be4,	// (0x00047faa) clock_digital_separator_pane_ParamLimits

0x6be4,	// (0x00047faa) clock_digital_separator_pane

0x6bf0,	// (0x00047fb6) popup_clock_digital_window_t1_ParamLimits

0x6bf0,	// (0x00047fb6) popup_clock_digital_window_t1

0x08d5,	// (0x00041c9b) clock_digital_number_pane_g1

0x08d5,	// (0x00041c9b) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00050aa9) clock_digital_number_pane_g

0x08d5,	// (0x00041c9b) clock_digital_separator_pane_g1

0x08d5,	// (0x00041c9b) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00050aa9) clock_digital_separator_pane_g

0x9493,	// (0x0004a859) aid_fill_nsta_ParamLimits

0x95df,	// (0x0004a9a5) indicator_nsta_pane_ParamLimits

0x9770,	// (0x0004ab36) popup_clock_analogue_window

0x9770,	// (0x0004ab36) popup_clock_digital_window

0xb9ed,	// (0x0004cdb3) grid_indicator_nsta_pane_ParamLimits

0xba16,	// (0x0004cddc) clock_nsta_pane_t2

0x0001,

0xfa83,	// (0x00050e49) clock_nsta_pane_t

0x6aae,	// (0x00047e74) aid_size_max_handle

0x6ab8,	// (0x00047e7e) aid_size_min_handle

0x9130,	// (0x0004a4f6) editor_scroll_pane

0xc7d9,	// (0x0004db9f) ex_editor_pane

0x10b9,	// (0x0004247f) scroll_pane_cp13

0x0f1c,	// (0x000422e2) scroll_pane_cp14

0x4442,	// (0x00045808) scroll_pane_cp36

0x6b7a,	// (0x00047f40) list_single_graphic_hl_pane_cp2_ParamLimits

0x6b7a,	// (0x00047f40) list_single_graphic_hl_pane_cp2

0x59d3,	// (0x00046d99) list_single_graphic_hl_pane_ParamLimits

0x59d3,	// (0x00046d99) list_single_graphic_hl_pane

0x5e08,	// (0x000471ce) aid_size_min_hl_cp1

0xc7e1,	// (0x0004dba7) list_highlight_pane_cp34_ParamLimits

0xc7e1,	// (0x0004dba7) list_highlight_pane_cp34

0xc7f2,	// (0x0004dbb8) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f2,	// (0x0004dbb8) list_single_graphic_hl_pane_g1

0x5e11,	// (0x000471d7) list_single_graphic_hl_pane_g2_ParamLimits

0x5e11,	// (0x000471d7) list_single_graphic_hl_pane_g2

0x5e11,	// (0x000471d7) list_single_graphic_hl_pane_g3_ParamLimits

0x5e11,	// (0x000471d7) list_single_graphic_hl_pane_g3

0x5e1d,	// (0x000471e3) list_single_graphic_hl_pane_g4_ParamLimits

0x5e1d,	// (0x000471e3) list_single_graphic_hl_pane_g4

0x5e29,	// (0x000471ef) list_single_graphic_hl_pane_g5_ParamLimits

0x5e29,	// (0x000471ef) list_single_graphic_hl_pane_g5

0x0004,

0xfbc2,	// (0x00050f88) list_single_graphic_hl_pane_g_ParamLimits

0xfbc2,	// (0x00050f88) list_single_graphic_hl_pane_g

0x5e3d,	// (0x00047203) list_single_graphic_hl_pane_t1_ParamLimits

0x5e3d,	// (0x00047203) list_single_graphic_hl_pane_t1

0xc7ff,	// (0x0004dbc5) aid_size_min_hl_cp2

0xc808,	// (0x0004dbce) list_highlight_pane_cp34_cp2_ParamLimits

0xc808,	// (0x0004dbce) list_highlight_pane_cp34_cp2

0xc7f2,	// (0x0004dbb8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f2,	// (0x0004dbb8) list_single_graphic_hl_pane_g1_cp2

0xc815,	// (0x0004dbdb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc815,	// (0x0004dbdb) list_single_graphic_hl_pane_g2_cp2

0xc821,	// (0x0004dbe7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc821,	// (0x0004dbe7) list_single_graphic_hl_pane_g3_cp2

0xc82f,	// (0x0004dbf5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc82f,	// (0x0004dbf5) list_single_graphic_hl_pane_g4_cp2

0xc83b,	// (0x0004dc01) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83b,	// (0x0004dc01) list_single_graphic_hl_pane_g5_cp2

0x6f76,	// (0x0004833c) control_pane_g4_ParamLimits

0x6f76,	// (0x0004833c) control_pane_g4

0x9457,	// (0x0004a81d) bg_popup_sub_pane_cp10_ParamLimits

0xbfcb,	// (0x0004d391) list_choice_list_pane_ParamLimits

0xbfda,	// (0x0004d3a0) scroll_pane_cp23

0x0a6e,	// (0x00041e34) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64b,	// (0x0004da11) list_preview_fixed_pane_ParamLimits

0xc661,	// (0x0004da27) list_preview_fixed_pane_cp_ParamLimits

0xc661,	// (0x0004da27) list_preview_fixed_pane_cp

0xc66d,	// (0x0004da33) popup_preview_fixed_window_g1_ParamLimits

0xc66d,	// (0x0004da33) popup_preview_fixed_window_g1

0xc679,	// (0x0004da3f) popup_preview_fixed_window_g2_ParamLimits

0xc679,	// (0x0004da3f) popup_preview_fixed_window_g2

0x0002,

0xfb51,	// (0x00050f17) popup_preview_fixed_window_g_ParamLimits

0xfb51,	// (0x00050f17) popup_preview_fixed_window_g

0x6962,	// (0x00047d28) aid_navi_side_left_pane_ParamLimits

0x6977,	// (0x00047d3d) aid_navi_side_right_pane_ParamLimits

0x698f,	// (0x00047d55) navi_icon_pane_stacon_ParamLimits

0x69a3,	// (0x00047d69) navi_navi_pane_stacon_ParamLimits

0x698f,	// (0x00047d55) navi_text_pane_stacon_ParamLimits

0x08cb,	// (0x00041c91) main_text_info_pane

0xc865,	// (0x0004dc2b) listscroll_text_info_pane

0xc86d,	// (0x0004dc33) list_text_info_pane_ParamLimits

0xc86d,	// (0x0004dc33) list_text_info_pane

0xc87c,	// (0x0004dc42) scroll_pane_cp24_ParamLimits

0xc87c,	// (0x0004dc42) scroll_pane_cp24

0xc89a,	// (0x0004dc60) list_text_info_pane_t1_ParamLimits

0xc89a,	// (0x0004dc60) list_text_info_pane_t1

0x70ce,	// (0x00048494) popup_fast_swap2_window_ParamLimits

0x70ce,	// (0x00048494) popup_fast_swap2_window

0xc8bf,	// (0x0004dc85) aid_size_cell_fast2

0x08cb,	// (0x00041c91) bg_popup_window_pane_cp17

0xc8c9,	// (0x0004dc8f) heading_pane_cp2

0xc8d1,	// (0x0004dc97) listscroll_fast2_pane

0xc8d9,	// (0x0004dc9f) grid_fast2_pane

0xc8e3,	// (0x0004dca9) listscroll_fast2_pane_g1

0xc8ed,	// (0x0004dcb3) listscroll_fast2_pane_g2

0x0001,

0xfbcd,	// (0x00050f93) listscroll_fast2_pane_g

0x10b9,	// (0x0004247f) scroll_pane_cp26

0xc8f7,	// (0x0004dcbd) cell_fast2_pane_ParamLimits

0xc8f7,	// (0x0004dcbd) cell_fast2_pane

0xc90e,	// (0x0004dcd4) cell_fast2_pane_g1

0xc917,	// (0x0004dcdd) cell_fast2_pane_g2

0xc920,	// (0x0004dce6) cell_fast2_pane_g3

0x0002,

0xfbd2,	// (0x00050f98) cell_fast2_pane_g

0x0ce3,	// (0x000420a9) grid_highlight_pane_cp9

0x0cf8,	// (0x000420be) main_eswt_pane_ParamLimits

0x0cf8,	// (0x000420be) main_eswt_pane

0xc891,	// (0x0004dc57) list_single_text_info_pane

0xc928,	// (0x0004dcee) eswt_ctrl_button_pane

0xc928,	// (0x0004dcee) eswt_ctrl_canvas_pane

0xc930,	// (0x0004dcf6) eswt_ctrl_combo_pane

0xc928,	// (0x0004dcee) eswt_ctrl_default_pane

0xc928,	// (0x0004dcee) eswt_ctrl_label_pane

0xc938,	// (0x0004dcfe) eswt_ctrl_wait_pane

0xc940,	// (0x0004dd06) eswt_shell_pane

0x08cb,	// (0x00041c91) listscroll_eswt_app_pane

0xc960,	// (0x0004dd26) popup_eswt_tasktip_window_ParamLimits

0xc960,	// (0x0004dd26) popup_eswt_tasktip_window

0x9a01,	// (0x0004adc7) bg_popup_window_pane_cp18

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_ParamLimits

0xc979,	// (0x0004dd3f) eswt_control_pane_g1

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_ParamLimits

0xc986,	// (0x0004dd4c) eswt_control_pane_g2

0xc993,	// (0x0004dd59) eswt_control_pane_g3_ParamLimits

0xc993,	// (0x0004dd59) eswt_control_pane_g3

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_ParamLimits

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4

0x0003,

0xfbd9,	// (0x00050f9f) eswt_control_pane_g_ParamLimits

0xfbd9,	// (0x00050f9f) eswt_control_pane_g

0x0f7d,	// (0x00042343) bg_button_pane_ParamLimits

0x0f7d,	// (0x00042343) bg_button_pane

0x0cf8,	// (0x000420be) common_borders_pane_copy2_ParamLimits

0x0cf8,	// (0x000420be) common_borders_pane_copy2

0xc9ad,	// (0x0004dd73) control_button_pane_g1_ParamLimits

0xc9ad,	// (0x0004dd73) control_button_pane_g1

0xc9b9,	// (0x0004dd7f) control_button_pane_g2_ParamLimits

0xc9b9,	// (0x0004dd7f) control_button_pane_g2

0xc9c5,	// (0x0004dd8b) control_button_pane_g3_ParamLimits

0xc9c5,	// (0x0004dd8b) control_button_pane_g3

0x0002,

0xfbe2,	// (0x00050fa8) control_button_pane_g_ParamLimits

0xfbe2,	// (0x00050fa8) control_button_pane_g

0xc9d9,	// (0x0004dd9f) control_button_pane_t1

0xc9e7,	// (0x0004ddad) control_button_pane_t2

0x0001,

0xfbe9,	// (0x00050faf) control_button_pane_t

0x998d,	// (0x0004ad53) bg_button_pane_g1

0x9995,	// (0x0004ad5b) bg_button_pane_g2

0x999d,	// (0x0004ad63) bg_button_pane_g3

0x99a5,	// (0x0004ad6b) bg_button_pane_g4

0x99ad,	// (0x0004ad73) bg_button_pane_g5

0x99b5,	// (0x0004ad7b) bg_button_pane_g6

0x99bd,	// (0x0004ad83) bg_button_pane_g7

0x99c5,	// (0x0004ad8b) bg_button_pane_g8

0x99cd,	// (0x0004ad93) bg_button_pane_g9

0x0008,

0xf846,	// (0x00050c0c) bg_button_pane_g

0xbf86,	// (0x0004d34c) common_borders_pane_ParamLimits

0xbf86,	// (0x0004d34c) common_borders_pane

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy1_ParamLimits

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy1

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy1_ParamLimits

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy1

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy1_ParamLimits

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy1

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy1_ParamLimits

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy1

0xbfc1,	// (0x0004d387) bg_eswt_ctrl_canvas_pane_g1

0xbf86,	// (0x0004d34c) common_borders_pane_cp2_ParamLimits

0xbf86,	// (0x0004d34c) common_borders_pane_cp2

0xbf86,	// (0x0004d34c) common_borders_pane_cp3_ParamLimits

0xbf86,	// (0x0004d34c) common_borders_pane_cp3

0xc9f5,	// (0x0004ddbb) separator_horizontal_pane

0xc9fd,	// (0x0004ddc3) separator_vertical_pane

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy2_ParamLimits

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy2

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy2_ParamLimits

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy2

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy2_ParamLimits

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy2

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy2_ParamLimits

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy2

0x08cb,	// (0x00041c91) common_borders_pane_cp4

0xca06,	// (0x0004ddcc) separator_horizontal_pane_g1

0xca0f,	// (0x0004ddd5) separator_horizontal_pane_g2

0xca18,	// (0x0004ddde) separator_horizontal_pane_g3

0x0002,

0xfbee,	// (0x00050fb4) separator_horizontal_pane_g

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy3_ParamLimits

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy3

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy3_ParamLimits

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy3

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy3_ParamLimits

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy3

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy3_ParamLimits

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy3

0x08cb,	// (0x00041c91) common_borders_pane_cp5

0xca21,	// (0x0004dde7) separator_vertical_pane_g1

0xca2a,	// (0x0004ddf0) separator_vertical_pane_g2

0xca33,	// (0x0004ddf9) separator_vertical_pane_g3

0x0002,

0xfbf5,	// (0x00050fbb) separator_vertical_pane_g

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy4_ParamLimits

0xc979,	// (0x0004dd3f) eswt_control_pane_g1_copy4

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy4_ParamLimits

0xc986,	// (0x0004dd4c) eswt_control_pane_g2_copy4

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy4_ParamLimits

0xc993,	// (0x0004dd59) eswt_control_pane_g3_copy4

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy4_ParamLimits

0xc9a0,	// (0x0004dd66) eswt_control_pane_g4_copy4

0xca3c,	// (0x0004de02) eswt_ctrl_combo_button_pane

0xca44,	// (0x0004de0a) eswt_ctrl_input_pane

0xca4c,	// (0x0004de12) popup_choice_list_window_cp70

0xca54,	// (0x0004de1a) eswt_ctrl_input_pane_t1

0x08cb,	// (0x00041c91) input_focus_pane_cp70

0xbf86,	// (0x0004d34c) bg_button_pane_cp70_ParamLimits

0xbf86,	// (0x0004d34c) bg_button_pane_cp70

0xca62,	// (0x0004de28) eswt_ctrl_combo_button_pane_g1

0xca6a,	// (0x0004de30) wait_bar_pane_cp70

0x9a01,	// (0x0004adc7) bg_popup_window_pane_cp70_ParamLimits

0x9a01,	// (0x0004adc7) bg_popup_window_pane_cp70

0xca72,	// (0x0004de38) popup_eswt_tasktip_window_t1

0xca88,	// (0x0004de4e) wait_bar_pane_cp71_ParamLimits

0xca88,	// (0x0004de4e) wait_bar_pane_cp71

0xca94,	// (0x0004de5a) grid_eswt_app_pane

0x4283,	// (0x00045649) scroll_pane_cp70

0xca9d,	// (0x0004de63) cell_eswt_app_pane_ParamLimits

0xca9d,	// (0x0004de63) cell_eswt_app_pane

0xcacf,	// (0x0004de95) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0004de95) cell_eswt_app_pane_g1

0xcafe,	// (0x0004dec4) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0004dec4) cell_eswt_app_pane_g2

0x0001,

0xfbfc,	// (0x00050fc2) cell_eswt_app_pane_g_ParamLimits

0xfbfc,	// (0x00050fc2) cell_eswt_app_pane_g

0xcb27,	// (0x0004deed) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0004deed) cell_eswt_app_pane_t1

0xcb59,	// (0x0004df1f) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0004df1f) grid_highlight_pane_cp70

0x8ff6,	// (0x0004a3bc) set_content_pane_g1

0x93de,	// (0x0004a7a4) status_small_volume_pane

0x8012,	// (0x000493d8) status_small_volume_pane_g1

0x801a,	// (0x000493e0) volume_small2_pane

0x8023,	// (0x000493e9) volume_small2_pane_g1

0x802c,	// (0x000493f2) volume_small2_pane_g2

0x8035,	// (0x000493fb) volume_small2_pane_g3

0x803e,	// (0x00049404) volume_small2_pane_g4

0x8047,	// (0x0004940d) volume_small2_pane_g5

0x8050,	// (0x00049416) volume_small2_pane_g6

0x8059,	// (0x0004941f) volume_small2_pane_g7

0x8062,	// (0x00049428) volume_small2_pane_g8

0x806b,	// (0x00049431) volume_small2_pane_g9

0x8074,	// (0x0004943a) volume_small2_pane_g10

0x0009,

0xfc01,	// (0x00050fc7) volume_small2_pane_g

0xc390,	// (0x0004d756) fep_vkb_top_text_pane_g1_ParamLimits

0xc3ab,	// (0x0004d771) fep_vkb_top_text_pane_t1_ParamLimits

0xc685,	// (0x0004da4b) popup_preview_fixed_window_g3_ParamLimits

0xc685,	// (0x0004da4b) popup_preview_fixed_window_g3

0x75e1,	// (0x000489a7) popup_toolbar_trans_pane

0xad59,	// (0x0004c11f) aid_height_set_list_ParamLimits

0xad6a,	// (0x0004c130) aid_size_parent_ParamLimits

0x9457,	// (0x0004a81d) list_highlight_pane_cp2_ParamLimits

0x8ff6,	// (0x0004a3bc) set_content_pane_g1_ParamLimits

0x7aa9,	// (0x00048e6f) list_single_image_pane_ParamLimits

0x7aa9,	// (0x00048e6f) list_single_image_pane

0xcb65,	// (0x0004df2b) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0004df2b) aid_size_cell_image

0xcb72,	// (0x0004df38) grid_single_image_pane_ParamLimits

0xcb72,	// (0x0004df38) grid_single_image_pane

0x0f8b,	// (0x00042351) list_single_image_pane_g1_ParamLimits

0x0f8b,	// (0x00042351) list_single_image_pane_g1

0x0f97,	// (0x0004235d) list_single_image_pane_g2_ParamLimits

0x0f97,	// (0x0004235d) list_single_image_pane_g2

0x0001,

0xfc16,	// (0x00050fdc) list_single_image_pane_g_ParamLimits

0xfc16,	// (0x00050fdc) list_single_image_pane_g

0xcb80,	// (0x0004df46) list_single_image_pane_t1_ParamLimits

0xcb80,	// (0x0004df46) list_single_image_pane_t1

0xcb96,	// (0x0004df5c) cell_image_list_pane_ParamLimits

0xcb96,	// (0x0004df5c) cell_image_list_pane

0xcbae,	// (0x0004df74) cell_image_list_pane_g1

0xcbb7,	// (0x0004df7d) cell_image_list_pane_g2

0x0001,

0xfc1b,	// (0x00050fe1) cell_image_list_pane_g

0xcbc0,	// (0x0004df86) aid_size_cell_tb_trans_pane

0x0f7d,	// (0x00042343) bg_tb_trans_pane

0xcbd2,	// (0x0004df98) grid_tb_trans_pane

0x998d,	// (0x0004ad53) bg_tb_trans_pane_g1

0x9995,	// (0x0004ad5b) bg_tb_trans_pane_g2

0x999d,	// (0x0004ad63) bg_tb_trans_pane_g3

0x99a5,	// (0x0004ad6b) bg_tb_trans_pane_g4

0x99ad,	// (0x0004ad73) bg_tb_trans_pane_g5

0x99c5,	// (0x0004ad8b) bg_tb_trans_pane_g6

0x99cd,	// (0x0004ad93) bg_tb_trans_pane_g7

0x99b5,	// (0x0004ad7b) bg_tb_trans_pane_g8

0x99bd,	// (0x0004ad83) bg_tb_trans_pane_g9

0x0008,

0xfc20,	// (0x00050fe6) bg_tb_trans_pane_g

0xcbe6,	// (0x0004dfac) cell_toolbar_trans_pane_ParamLimits

0xcbe6,	// (0x0004dfac) cell_toolbar_trans_pane

0xbfc1,	// (0x0004d387) cell_toolbar_trans_pane_g1

0xbbf9,	// (0x0004cfbf) list_form2_midp_pane_t1

0xbc07,	// (0x0004cfcd) list_form2_midp_pane_t2

0x0001,

0xfac9,	// (0x00050e8f) list_form2_midp_pane_t

0xbc15,	// (0x0004cfdb) scroll_pane_cp51_ParamLimits

0xbddc,	// (0x0004d1a2) form2_midp_wait_pane_g1

0xbde5,	// (0x0004d1ab) form2_midp_wait_pane_g2

0xbdee,	// (0x0004d1b4) form2_midp_wait_pane_g3

0x0002,

0xfade,	// (0x00050ea4) form2_midp_wait_pane_g

0x093b,	// (0x00041d01) list_highlight_pane_cp21_ParamLimits

0xbe27,	// (0x0004d1ed) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe36,	// (0x0004d1fc) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7a62,	// (0x00048e28) list_single_2graphic_im_pane_ParamLimits

0x7a62,	// (0x00048e28) list_single_2graphic_im_pane

0xcc0c,	// (0x0004dfd2) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0c,	// (0x0004dfd2) list_single_2graphic_im_pane_g1

0xcc1d,	// (0x0004dfe3) list_single_2graphic_im_pane_g2_ParamLimits

0xcc1d,	// (0x0004dfe3) list_single_2graphic_im_pane_g2

0xcc29,	// (0x0004dfef) list_single_2graphic_im_pane_g3_ParamLimits

0xcc29,	// (0x0004dfef) list_single_2graphic_im_pane_g3

0x0003,

0xfc33,	// (0x00050ff9) list_single_2graphic_im_pane_g_ParamLimits

0xfc33,	// (0x00050ff9) list_single_2graphic_im_pane_g

0xcc49,	// (0x0004e00f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc49,	// (0x0004e00f) list_single_2graphic_im_pane_t1

0xc691,	// (0x0004da57) list_single_graphic_2heading_pane_fp_ParamLimits

0xc691,	// (0x0004da57) list_single_graphic_2heading_pane_fp

0x5cea,	// (0x000470b0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5cea,	// (0x000470b0) list_single_graphic_2heading_pane_fp_g1

0xc6aa,	// (0x0004da70) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0004da70) list_single_graphic_2heading_pane_fp_g2

0x7edd,	// (0x000492a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7edd,	// (0x000492a3) list_single_graphic_2heading_pane_fp_g3

0x7ee9,	// (0x000492af) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7ee9,	// (0x000492af) list_single_graphic_2heading_pane_fp_g4

0xc6b6,	// (0x0004da7c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0004da7c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb61,	// (0x00050f27) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb61,	// (0x00050f27) list_single_graphic_2heading_pane_fp_g

0x5e53,	// (0x00047219) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5e53,	// (0x00047219) list_single_graphic_2heading_pane_fp_t1

0x5d22,	// (0x000470e8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5d22,	// (0x000470e8) list_single_graphic_2heading_pane_fp_t2

0x5e69,	// (0x0004722f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5e69,	// (0x0004722f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3c,	// (0x00051002) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3c,	// (0x00051002) list_single_graphic_2heading_pane_fp_t

0xc052,	// (0x0004d418) fep_hwr_write_pane_g5_ParamLimits

0xc052,	// (0x0004d418) fep_hwr_write_pane_g5

0xc05e,	// (0x0004d424) fep_hwr_write_pane_g6_ParamLimits

0xc05e,	// (0x0004d424) fep_hwr_write_pane_g6

0xc940,	// (0x0004dd06) eswt_shell_pane_ParamLimits

0x9a01,	// (0x0004adc7) bg_popup_window_pane_cp18_ParamLimits

0xc971,	// (0x0004dd37) heading_pane_cp70

0xca72,	// (0x0004de38) popup_eswt_tasktip_window_t1_ParamLimits

0x94ea,	// (0x0004a8b0) aid_touch_tab_arrow_left

0x94f6,	// (0x0004a8bc) aid_touch_tab_arrow_right

0x63ad,	// (0x00047773) title_pane_g3_ParamLimits

0x63ad,	// (0x00047773) title_pane_g3

0x0f3c,	// (0x00042302) set_value_pane_g1

0x75e1,	// (0x000489a7) popup_toolbar_trans_pane_ParamLimits

0xcbc0,	// (0x0004df86) aid_size_cell_tb_trans_pane_ParamLimits

0x0f7d,	// (0x00042343) bg_tb_trans_pane_ParamLimits

0xcbd2,	// (0x0004df98) grid_tb_trans_pane_ParamLimits

0x0a6e,	// (0x00041e34) cont_note_pane_ParamLimits

0x0a6e,	// (0x00041e34) cont_note_pane

0x0cf8,	// (0x000420be) cont_snote2_single_text_pane_ParamLimits

0x0cf8,	// (0x000420be) cont_snote2_single_text_pane

0x0cf8,	// (0x000420be) cont_snote2_single_graphic_pane_ParamLimits

0x0cf8,	// (0x000420be) cont_snote2_single_graphic_pane

0x9ff3,	// (0x0004b3b9) cont_note_wait_pane_ParamLimits

0x9ff3,	// (0x0004b3b9) cont_note_wait_pane

0x9ff3,	// (0x0004b3b9) cont_note_image_pane_ParamLimits

0x9ff3,	// (0x0004b3b9) cont_note_image_pane

0xcc7a,	// (0x0004e040) popup_note2_window_g1_ParamLimits

0xcc7a,	// (0x0004e040) popup_note2_window_g1

0xccab,	// (0x0004e071) popup_note2_window_t1_ParamLimits

0xccab,	// (0x0004e071) popup_note2_window_t1

0xccf0,	// (0x0004e0b6) popup_note2_window_t2_ParamLimits

0xccf0,	// (0x0004e0b6) popup_note2_window_t2

0xcd35,	// (0x0004e0fb) popup_note2_window_t3_ParamLimits

0xcd35,	// (0x0004e0fb) popup_note2_window_t3

0xcd7a,	// (0x0004e140) popup_note2_window_t4_ParamLimits

0xcd7a,	// (0x0004e140) popup_note2_window_t4

0x0af2,	// (0x00041eb8) popup_note2_window_t5_ParamLimits

0x0af2,	// (0x00041eb8) popup_note2_window_t5

0x0004,

0xfc48,	// (0x0005100e) popup_note2_window_t_ParamLimits

0xfc48,	// (0x0005100e) popup_note2_window_t

0xcda9,	// (0x0004e16f) popup_note2_image_window_g1_ParamLimits

0xcda9,	// (0x0004e16f) popup_note2_image_window_g1

0xcdb5,	// (0x0004e17b) popup_note2_image_window_g2_ParamLimits

0xcdb5,	// (0x0004e17b) popup_note2_image_window_g2

0x0001,

0xfc53,	// (0x00051019) popup_note2_image_window_g_ParamLimits

0xfc53,	// (0x00051019) popup_note2_image_window_g

0xcdc7,	// (0x0004e18d) popup_note2_image_window_t1_ParamLimits

0xcdc7,	// (0x0004e18d) popup_note2_image_window_t1

0xcddf,	// (0x0004e1a5) popup_note2_image_window_t2_ParamLimits

0xcddf,	// (0x0004e1a5) popup_note2_image_window_t2

0xcdf7,	// (0x0004e1bd) popup_note2_image_window_t3_ParamLimits

0xcdf7,	// (0x0004e1bd) popup_note2_image_window_t3

0x0002,

0xfc58,	// (0x0005101e) popup_note2_image_window_t_ParamLimits

0xfc58,	// (0x0005101e) popup_note2_image_window_t

0xa001,	// (0x0004b3c7) popup_note2_wait_window_g1_ParamLimits

0xa001,	// (0x0004b3c7) popup_note2_wait_window_g1

0xce13,	// (0x0004e1d9) popup_note2_wait_window_g2_ParamLimits

0xce13,	// (0x0004e1d9) popup_note2_wait_window_g2

0xa019,	// (0x0004b3df) popup_note2_wait_window_g3_ParamLimits

0xa019,	// (0x0004b3df) popup_note2_wait_window_g3

0x0002,

0xfc5f,	// (0x00051025) popup_note2_wait_window_g_ParamLimits

0xfc5f,	// (0x00051025) popup_note2_wait_window_g

0xce1f,	// (0x0004e1e5) popup_note2_wait_window_t1_ParamLimits

0xce1f,	// (0x0004e1e5) popup_note2_wait_window_t1

0xce3d,	// (0x0004e203) popup_note2_wait_window_t2_ParamLimits

0xce3d,	// (0x0004e203) popup_note2_wait_window_t2

0xce5b,	// (0x0004e221) popup_note2_wait_window_t3_ParamLimits

0xce5b,	// (0x0004e221) popup_note2_wait_window_t3

0xce6d,	// (0x0004e233) popup_note2_wait_window_t4_ParamLimits

0xce6d,	// (0x0004e233) popup_note2_wait_window_t4

0x0003,

0xfc66,	// (0x0005102c) popup_note2_wait_window_t_ParamLimits

0xfc66,	// (0x0005102c) popup_note2_wait_window_t

0xce7f,	// (0x0004e245) wait_bar2_pane_ParamLimits

0xce7f,	// (0x0004e245) wait_bar2_pane

0xce97,	// (0x0004e25d) popup_snote2_single_text_window_g1_ParamLimits

0xce97,	// (0x0004e25d) popup_snote2_single_text_window_g1

0xcebf,	// (0x0004e285) popup_snote2_single_text_window_t1_ParamLimits

0xcebf,	// (0x0004e285) popup_snote2_single_text_window_t1

0xcf0b,	// (0x0004e2d1) popup_snote2_single_text_window_t2_ParamLimits

0xcf0b,	// (0x0004e2d1) popup_snote2_single_text_window_t2

0xcf57,	// (0x0004e31d) popup_snote2_single_text_window_t3_ParamLimits

0xcf57,	// (0x0004e31d) popup_snote2_single_text_window_t3

0xcf98,	// (0x0004e35e) popup_snote2_single_text_window_t4_ParamLimits

0xcf98,	// (0x0004e35e) popup_snote2_single_text_window_t4

0xcfce,	// (0x0004e394) popup_snote2_single_text_window_t5_ParamLimits

0xcfce,	// (0x0004e394) popup_snote2_single_text_window_t5

0x0004,

0xfc6f,	// (0x00051035) popup_snote2_single_text_window_t_ParamLimits

0xfc6f,	// (0x00051035) popup_snote2_single_text_window_t

0xcff9,	// (0x0004e3bf) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff9,	// (0x0004e3bf) popup_snote2_single_graphic_window_g1

0xd021,	// (0x0004e3e7) popup_snote2_single_graphic_window_g2_ParamLimits

0xd021,	// (0x0004e3e7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7a,	// (0x00051040) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7a,	// (0x00051040) popup_snote2_single_graphic_window_g

0xd049,	// (0x0004e40f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd049,	// (0x0004e40f) popup_snote2_single_graphic_window_t1

0xd095,	// (0x0004e45b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd095,	// (0x0004e45b) popup_snote2_single_graphic_window_t2

0xcf57,	// (0x0004e31d) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf57,	// (0x0004e31d) popup_snote2_single_graphic_window_t3

0xcf98,	// (0x0004e35e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf98,	// (0x0004e35e) popup_snote2_single_graphic_window_t4

0xcfce,	// (0x0004e394) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfce,	// (0x0004e394) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7f,	// (0x00051045) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7f,	// (0x00051045) popup_snote2_single_graphic_window_t

0xbac5,	// (0x0004ce8b) clock_nsta_pane_cp2_t1

0xbac5,	// (0x0004ce8b) clock_nsta_pane_cp2_t2

0x0001,

0xfa9f,	// (0x00050e65) clock_nsta_pane_cp2_t

0x5614,	// (0x000469da) form_field_data_wide_pane_g1_ParamLimits

0x0f8b,	// (0x00042351) form_field_data_wide_pane_g2_ParamLimits

0x0f8b,	// (0x00042351) form_field_data_wide_pane_g2

0x0f97,	// (0x0004235d) form_field_data_wide_pane_g3_ParamLimits

0x0f97,	// (0x0004235d) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00050a21) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00050a21) form_field_data_wide_pane_g

0xb9a0,	// (0x0004cd66) grid_touch_3_pane_ParamLimits

0xb9a0,	// (0x0004cd66) grid_touch_3_pane

0xd0e1,	// (0x0004e4a7) cell_touch_3_pane_ParamLimits

0xd0e1,	// (0x0004e4a7) cell_touch_3_pane

0xbfc1,	// (0x0004d387) cell_touch_3_pane_g1

0xbfc1,	// (0x0004d387) cell_touch_3_pane_g2

0x0001,

0xfb24,	// (0x00050eea) cell_touch_3_pane_g

0x0b4a,	// (0x00041f10) cont_query_data_pane

0x0b52,	// (0x00041f18) cont_query_data_pane_cp1

0xd114,	// (0x0004e4da) button_value_adjust_pane_cp7

0xd11c,	// (0x0004e4e2) query_popup_pane_cp3

0x44ce,	// (0x00045894) bg_popup_sub_pane_cp22_ParamLimits

0x6c64,	// (0x0004802a) navi_navi_volume_pane_cp2

0x6c7f,	// (0x00048045) popup_side_volume_key_window_g2

0x6c8e,	// (0x00048054) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00050ab7) popup_side_volume_key_window_g

0x6cab,	// (0x00048071) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00050abe) popup_side_volume_key_window_t

0x8ec8,	// (0x0004a28e) popup_side_volume_key_window_ParamLimits

0x5232,	// (0x000465f8) list_double_graphic_pane_g4_ParamLimits

0x5232,	// (0x000465f8) list_double_graphic_pane_g4

0x7a91,	// (0x00048e57) list_single_2heading_msg_pane_ParamLimits

0x7a91,	// (0x00048e57) list_single_2heading_msg_pane

0x807d,	// (0x00049443) list_single_2heading_msg_pane_g1_ParamLimits

0x807d,	// (0x00049443) list_single_2heading_msg_pane_g1

0x8089,	// (0x0004944f) list_single_2heading_msg_pane_g2_ParamLimits

0x8089,	// (0x0004944f) list_single_2heading_msg_pane_g2

0x8095,	// (0x0004945b) list_single_2heading_msg_pane_g3_ParamLimits

0x8095,	// (0x0004945b) list_single_2heading_msg_pane_g3

0x80a1,	// (0x00049467) list_single_2heading_msg_pane_g4_ParamLimits

0x80a1,	// (0x00049467) list_single_2heading_msg_pane_g4

0x0003,

0xfc8a,	// (0x00051050) list_single_2heading_msg_pane_g_ParamLimits

0xfc8a,	// (0x00051050) list_single_2heading_msg_pane_g

0x5e89,	// (0x0004724f) list_single_2heading_msg_pane_t1_ParamLimits

0x5e89,	// (0x0004724f) list_single_2heading_msg_pane_t1

0x5eb1,	// (0x00047277) list_single_2heading_msg_pane_t2_ParamLimits

0x5eb1,	// (0x00047277) list_single_2heading_msg_pane_t2

0x5ee0,	// (0x000472a6) list_single_2heading_msg_pane_t3_ParamLimits

0x5ee0,	// (0x000472a6) list_single_2heading_msg_pane_t3

0x5f19,	// (0x000472df) list_single_2heading_msg_pane_t4_ParamLimits

0x5f19,	// (0x000472df) list_single_2heading_msg_pane_t4

0x0003,

0xfc93,	// (0x00051059) list_single_2heading_msg_pane_t_ParamLimits

0xfc93,	// (0x00051059) list_single_2heading_msg_pane_t

0x08e9,	// (0x00041caf) title_pane_g4_ParamLimits

0x08e9,	// (0x00041caf) title_pane_g4

0x68b3,	// (0x00047c79) title_pane_stacon_g3_ParamLimits

0x68b3,	// (0x00047c79) title_pane_stacon_g3

0xcc3d,	// (0x0004e003) list_single_2graphic_im_pane_g4_ParamLimits

0xcc3d,	// (0x0004e003) list_single_2graphic_im_pane_g4

0xaa63,	// (0x0004be29) popup_side_volume_key_window_cp

0xb2b0,	// (0x0004c676) main_idle_act2_pane_t1

0x76fd,	// (0x00048ac3) toolbar_button_pane_g10

0x670a,	// (0x00047ad0) popup_toolbar_window_cp1

0xbab6,	// (0x0004ce7c) clock_nsta_pane_cp_t1

0xbab6,	// (0x0004ce7c) clock_nsta_pane_cp_t2

0x0001,

0xfa9a,	// (0x00050e60) clock_nsta_pane_cp_t

0x6c64,	// (0x0004802a) navi_navi_volume_pane_cp2_ParamLimits

0x6c73,	// (0x00048039) popup_side_volume_key_window_g1_ParamLimits

0x6c7f,	// (0x00048045) popup_side_volume_key_window_g2_ParamLimits

0x6c8e,	// (0x00048054) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00050ab7) popup_side_volume_key_window_g_ParamLimits

0x7c77,	// (0x0004903d) fep_hwr_aid_pane

0x23b0,	// (0x00043776) bg_fep_hwr_top_pane_g4_ParamLimits

0xc022,	// (0x0004d3e8) fep_hwr_top_pane_g1_ParamLimits

0xc034,	// (0x0004d3fa) fep_hwr_top_pane_g2_ParamLimits

0x7d32,	// (0x000490f8) fep_hwr_top_pane_g3_ParamLimits

0xfaef,	// (0x00050eb5) fep_hwr_top_pane_g_ParamLimits

0x7d47,	// (0x0004910d) fep_hwr_top_text_pane_ParamLimits

0xa818,	// (0x0004bbde) aid_touch_tab_arrow_arrow_2

0xa821,	// (0x0004bbe7) aid_touch_tab_arrow_left_2

0x7c8b,	// (0x00049051) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7cc2,	// (0x00049088) fep_hwr_prediction_pane

0xc18a,	// (0x0004d550) fep_vkb_prediction_pane

0xc290,	// (0x0004d656) fep_vkb_side_pane_g3_ParamLimits

0xc290,	// (0x0004d656) fep_vkb_side_pane_g3

0xc23c,	// (0x0004d602) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc70a,	// (0x0004dad0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc717,	// (0x0004dadd) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb99,	// (0x00050f5f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd143,	// (0x0004e509) fep_hwr_prediction_pane_g1

0x80b9,	// (0x0004947f) fep_hwr_prediction_pane_g2

0x80c1,	// (0x00049487) fep_hwr_prediction_pane_g3

0x80c9,	// (0x0004948f) fep_hwr_prediction_pane_g4

0x0003,

0xfc9c,	// (0x00051062) fep_hwr_prediction_pane_g

0xd143,	// (0x0004e509) fep_vkb_prediction_pane_g1

0xd14d,	// (0x0004e513) fep_vkb_prediction_pane_g2

0xd155,	// (0x0004e51b) fep_vkb_prediction_pane_g3

0xd15d,	// (0x0004e523) fep_vkb_prediction_pane_g4

0x0003,

0xfca5,	// (0x0005106b) fep_vkb_prediction_pane_g

0x7a0a,	// (0x00048dd0) slider_set_pane_g3

0x7a1e,	// (0x00048de4) slider_set_pane_g4

0x7a36,	// (0x00048dfc) slider_set_pane_g5

0x7a0a,	// (0x00048dd0) slider_set_pane_g6

0x7a4c,	// (0x00048e12) slider_set_pane_g7

0xaee9,	// (0x0004c2af) slider_form_pane_g3

0xaef2,	// (0x0004c2b8) slider_form_pane_g4

0xaefa,	// (0x0004c2c0) slider_form_pane_g5

0xaee9,	// (0x0004c2af) slider_form_pane_g6

0xaf02,	// (0x0004c2c8) slider_form_pane_g7

0xb574,	// (0x0004c93a) slider_set_pane_vc_g3

0xb57d,	// (0x0004c943) slider_set_pane_vc_g4

0xb586,	// (0x0004c94c) slider_set_pane_vc_g5

0xb574,	// (0x0004c93a) slider_set_pane_vc_g6

0xb58f,	// (0x0004c955) slider_set_pane_vc_g7

0xb765,	// (0x0004cb2b) slider_form_pane_vc_g1

0xb76e,	// (0x0004cb34) slider_form_pane_vc_g2

0xb777,	// (0x0004cb3d) slider_form_pane_vc_g3

0xb765,	// (0x0004cb2b) slider_form_pane_vc_g4

0xb780,	// (0x0004cb46) slider_form_pane_vc_g5

0x0004,

0xfa6c,	// (0x00050e32) slider_form_pane_vc_g

0x08cb,	// (0x00041c91) main_idle_act3_pane

0xd165,	// (0x0004e52b) ai3_links_pane

0xd16e,	// (0x0004e534) popup_ai3_data_window_ParamLimits

0xd16e,	// (0x0004e534) popup_ai3_data_window

0x08cb,	// (0x00041c91) grid_ai3_links_pane

0xd18c,	// (0x0004e552) cell_ai3_links_pane_ParamLimits

0xd18c,	// (0x0004e552) cell_ai3_links_pane

0xd1a6,	// (0x0004e56c) bg_popup_sub_pane_cp11

0xd1b3,	// (0x0004e579) cell_ai3_links_pane_g1

0x08cb,	// (0x00041c91) bg_popup_sub_pane_cp12

0xd1d8,	// (0x0004e59e) heading_ai3_data_pane

0xd1e0,	// (0x0004e5a6) list_ai3_gene_pane

0xd1ec,	// (0x0004e5b2) popup_ai3_data_window_g1

0xd1f4,	// (0x0004e5ba) heading_ai3_data_pane_g1

0xd1fc,	// (0x0004e5c2) heading_ai3_data_pane_t1

0xd20a,	// (0x0004e5d0) list_double_ai3_gene_pane_ParamLimits

0xd20a,	// (0x0004e5d0) list_double_ai3_gene_pane

0xd217,	// (0x0004e5dd) list_single_ai3_gene_pane_ParamLimits

0xd217,	// (0x0004e5dd) list_single_ai3_gene_pane

0xbf86,	// (0x0004d34c) list_highlight_pane_cp7_ParamLimits

0xbf86,	// (0x0004d34c) list_highlight_pane_cp7

0xd224,	// (0x0004e5ea) list_single_a13_gene_pane_t1_ParamLimits

0xd224,	// (0x0004e5ea) list_single_a13_gene_pane_t1

0xd23b,	// (0x0004e601) list_single_ai3_gene_pane_g1

0xd244,	// (0x0004e60a) list_single_ai3_gene_pane_g2

0x0001,

0xfcae,	// (0x00051074) list_single_ai3_gene_pane_g

0xd24c,	// (0x0004e612) list_double_ai3_gene_pane_g1_ParamLimits

0xd24c,	// (0x0004e612) list_double_ai3_gene_pane_g1

0xd258,	// (0x0004e61e) list_double_ai3_gene_pane_t1_ParamLimits

0xd258,	// (0x0004e61e) list_double_ai3_gene_pane_t1

0xd274,	// (0x0004e63a) list_double_ai3_gene_pane_t2_ParamLimits

0xd274,	// (0x0004e63a) list_double_ai3_gene_pane_t2

0xd289,	// (0x0004e64f) list_double_ai3_gene_pane_t3_ParamLimits

0xd289,	// (0x0004e64f) list_double_ai3_gene_pane_t3

0x0002,

0xfcb3,	// (0x00051079) list_double_ai3_gene_pane_t_ParamLimits

0xfcb3,	// (0x00051079) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5e7f,	// (0x00047245) aid_size_min_col_2

0xd12d,	// (0x0004e4f3) aid_size_min_msg_ParamLimits

0xd12d,	// (0x0004e4f3) aid_size_min_msg

0xc39c,	// (0x0004d762) fep_vkb_top_text_pane_g2_ParamLimits

0xc39c,	// (0x0004d762) fep_vkb_top_text_pane_g2

0x0001,

0xfb1f,	// (0x00050ee5) fep_vkb_top_text_pane_g_ParamLimits

0xfb1f,	// (0x00050ee5) fep_vkb_top_text_pane_g

0x08cb,	// (0x00041c91) main_hc_apps_shell_pane

0xd2a6,	// (0x0004e66c) grid_hc_apps_pane_ParamLimits

0xd2a6,	// (0x0004e66c) grid_hc_apps_pane

0xd2b8,	// (0x0004e67e) list_hc_apps_pane

0xd2c0,	// (0x0004e686) scroll_pane_cp37_ParamLimits

0xd2c0,	// (0x0004e686) scroll_pane_cp37

0xd2cc,	// (0x0004e692) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0004e692) cell_hc_apps_pane

0xd380,	// (0x0004e746) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0004e746) cell_hc_apps_pane_g1

0xd3ac,	// (0x0004e772) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0004e772) cell_hc_apps_pane_g2

0xd3c8,	// (0x0004e78e) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0004e78e) cell_hc_apps_pane_g3

0x0002,

0xfcba,	// (0x00051080) cell_hc_apps_pane_g_ParamLimits

0xfcba,	// (0x00051080) cell_hc_apps_pane_g

0xd3ea,	// (0x0004e7b0) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0004e7b0) cell_hc_apps_pane_t1

0x0a6e,	// (0x00041e34) grid_highlight_pane_cp10_ParamLimits

0x0a6e,	// (0x00041e34) grid_highlight_pane_cp10

0xd42a,	// (0x0004e7f0) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0004e7f0) list_single_hc_apps_pane

0xd469,	// (0x0004e82f) list_single_hc_apps_pane_g1

0x80d1,	// (0x00049497) list_single_hc_apps_pane_g2

0x0001,

0xfcc1,	// (0x00051087) list_single_hc_apps_pane_g

0x80ea,	// (0x000494b0) list_single_hc_apps_pane_g2_copy1

0x5f3e,	// (0x00047304) list_single_hc_apps_pane_t1

0x093b,	// (0x00041d01) bg_set_opt_pane_cp_ParamLimits

0x645f,	// (0x00047825) setting_slider_pane_t1_ParamLimits

0x6478,	// (0x0004783e) setting_slider_pane_t2_ParamLimits

0x6492,	// (0x00047858) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000508ff) setting_slider_pane_t_ParamLimits

0x64aa,	// (0x00047870) slider_set_pane_ParamLimits

0x6f8a,	// (0x00048350) control_pane_g5_ParamLimits

0x6f8a,	// (0x00048350) control_pane_g5

0xad1c,	// (0x0004c0e2) slider_set_pane_g1_ParamLimits

0x79fe,	// (0x00048dc4) slider_set_pane_g2_ParamLimits

0x7a0a,	// (0x00048dd0) slider_set_pane_g3_ParamLimits

0x7a1e,	// (0x00048de4) slider_set_pane_g4_ParamLimits

0x7a36,	// (0x00048dfc) slider_set_pane_g5_ParamLimits

0x7a0a,	// (0x00048dd0) slider_set_pane_g6_ParamLimits

0x7a4c,	// (0x00048e12) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00050d0a) slider_set_pane_g_ParamLimits

0x8fa1,	// (0x0004a367) navi_icon_text_pane_ParamLimits

0x94a9,	// (0x0004a86f) aid_fill_nsta_2_ParamLimits

0x94ea,	// (0x0004a8b0) aid_touch_tab_arrow_left_ParamLimits

0x94f6,	// (0x0004a8bc) aid_touch_tab_arrow_right_ParamLimits

0x9562,	// (0x0004a928) clock_nsta_pane_ParamLimits

0xa7fa,	// (0x0004bbc0) navi_icon_pane_g1_ParamLimits

0xa806,	// (0x0004bbcc) navi_text_pane_t1_ParamLimits

0xbbd3,	// (0x0004cf99) navi_icon_text_pane_g1_ParamLimits

0xbbdf,	// (0x0004cfa5) navi_icon_text_pane_t1_ParamLimits

0xd469,	// (0x0004e82f) list_single_hc_apps_pane_g1_ParamLimits

0x80d1,	// (0x00049497) list_single_hc_apps_pane_g2_ParamLimits

0xfcc1,	// (0x00051087) list_single_hc_apps_pane_g_ParamLimits

0x80ea,	// (0x000494b0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5f3e,	// (0x00047304) list_single_hc_apps_pane_t1_ParamLimits

0x6293,	// (0x00047659) popup_toolbar2_fixed_window_ParamLimits

0x6293,	// (0x00047659) popup_toolbar2_fixed_window

0x75d7,	// (0x0004899d) popup_toolbar2_float_window

0x08cb,	// (0x00041c91) bg_popup_sub_pane_cp27

0xd482,	// (0x0004e848) grid_toolbar2_float_pane

0x08cb,	// (0x00041c91) bg_popup_sub_pane_cp26

0xd482,	// (0x0004e848) grid_toolbar2_fixed_pane

0xd48a,	// (0x0004e850) cell_toolbar2_fixed_pane_ParamLimits

0xd48a,	// (0x0004e850) cell_toolbar2_fixed_pane

0xd49a,	// (0x0004e860) cell_toolbar2_fixed_pane_g1

0xd4a3,	// (0x0004e869) toolbar2_fixed_button_pane

0x998d,	// (0x0004ad53) toolbar2_fixed_button_pane_g1

0x9995,	// (0x0004ad5b) toolbar2_fixed_button_pane_g2

0x999d,	// (0x0004ad63) toolbar2_fixed_button_pane_g3

0x99a5,	// (0x0004ad6b) toolbar2_fixed_button_pane_g4

0x99ad,	// (0x0004ad73) toolbar2_fixed_button_pane_g5

0x99b5,	// (0x0004ad7b) toolbar2_fixed_button_pane_g6

0x99bd,	// (0x0004ad83) toolbar2_fixed_button_pane_g7

0x99c5,	// (0x0004ad8b) toolbar2_fixed_button_pane_g8

0x99cd,	// (0x0004ad93) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00050c0c) toolbar2_fixed_button_pane_g

0xd4ab,	// (0x0004e871) cell_toolbar2_float_pane_ParamLimits

0xd4ab,	// (0x0004e871) cell_toolbar2_float_pane

0xd4bc,	// (0x0004e882) cell_toolbar2_float_pane_g1

0xd4a3,	// (0x0004e869) toolbar2_fixed_button_pane_cp

0xc0f8,	// (0x0004d4be) fep_vkb_accented_list_pane_ParamLimits

0xc0f8,	// (0x0004d4be) fep_vkb_accented_list_pane

0x7ea9,	// (0x0004926f) bg_popup_fep_shadow_pane_g9

0x9130,	// (0x0004a4f6) bg_popup_fep_shadow_pane_cp3

0x10a0,	// (0x00042466) list_accented_list_pane

0xd4c5,	// (0x0004e88b) list_single_accented_list_pane_ParamLimits

0xd4c5,	// (0x0004e88b) list_single_accented_list_pane

0x9130,	// (0x0004a4f6) list_highlight_pane_cp10

0xd4d6,	// (0x0004e89c) list_single_accented_list_pane_t1

0x751d,	// (0x000488e3) popup_slider_window_ParamLimits

0x751d,	// (0x000488e3) popup_slider_window

0xd124,	// (0x0004e4ea) aid_indentation_list_msg

0xd5a6,	// (0x0004e96c) bg_popup_window_pane_cp19

0xd612,	// (0x0004e9d8) popup_slider_window_g1

0xd62e,	// (0x0004e9f4) popup_slider_window_g2

0xd64a,	// (0x0004ea10) popup_slider_window_g3

0x0005,

0xfcc6,	// (0x0005108c) popup_slider_window_g

0xd6b0,	// (0x0004ea76) popup_slider_window_t1

0xd724,	// (0x0004eaea) small_volume_slider_vertical_pane

0xbfc1,	// (0x0004d387) small_volume_slider_vertical_pane_g1

0xbfc1,	// (0x0004d387) small_volume_slider_vertical_pane_g2

0xd740,	// (0x0004eb06) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd8,	// (0x0005109e) small_volume_slider_vertical_pane_g

0x604b,	// (0x00047411) area_side_right_pane_ParamLimits

0x604b,	// (0x00047411) area_side_right_pane

0x8106,	// (0x000494cc) aid_size_side_button_ParamLimits

0x8106,	// (0x000494cc) aid_size_side_button

0x811a,	// (0x000494e0) grid_sctrl_middle_pane_ParamLimits

0x811a,	// (0x000494e0) grid_sctrl_middle_pane

0x8139,	// (0x000494ff) sctrl_sk_bottom_pane

0x814a,	// (0x00049510) sctrl_sk_top_pane

0x815c,	// (0x00049522) aid_touch_sctrl_top

0x0a6e,	// (0x00041e34) bg_sctrl_sk_pane_ParamLimits

0x0a6e,	// (0x00041e34) bg_sctrl_sk_pane

0x8169,	// (0x0004952f) sctrl_sk_top_pane_g1

0x8176,	// (0x0004953c) sctrl_sk_top_pane_t1

0x815c,	// (0x00049522) aid_touch_sctrl_bottom

0x0a6e,	// (0x00041e34) bg_sctrl_sk_pane_cp_ParamLimits

0x0a6e,	// (0x00041e34) bg_sctrl_sk_pane_cp

0x8191,	// (0x00049557) sctrl_sk_bottom_pane_g1

0x8176,	// (0x0004953c) sctrl_sk_bottom_pane_t1

0x819a,	// (0x00049560) cell_sctrl_middle_pane_ParamLimits

0x819a,	// (0x00049560) cell_sctrl_middle_pane

0x81b7,	// (0x0004957d) aid_touch_sctrl_middle_ParamLimits

0x81b7,	// (0x0004957d) aid_touch_sctrl_middle

0x0f7d,	// (0x00042343) bg_sctrl_middle_pane_ParamLimits

0x0f7d,	// (0x00042343) bg_sctrl_middle_pane

0xc23c,	// (0x0004d602) cell_sctrl_middle_pane_g1_ParamLimits

0xc23c,	// (0x0004d602) cell_sctrl_middle_pane_g1

0x81c9,	// (0x0004958f) cell_sctrl_middle_pane_g2_ParamLimits

0x81c9,	// (0x0004958f) cell_sctrl_middle_pane_g2

0x0001,

0xfce4,	// (0x000510aa) cell_sctrl_middle_pane_g_ParamLimits

0xfce4,	// (0x000510aa) cell_sctrl_middle_pane_g

0x998d,	// (0x0004ad53) bg_sctrl_middle_pane_g1

0x9995,	// (0x0004ad5b) bg_sctrl_middle_pane_g2

0x999d,	// (0x0004ad63) bg_sctrl_middle_pane_g3

0x99a5,	// (0x0004ad6b) bg_sctrl_middle_pane_g4

0x99ad,	// (0x0004ad73) bg_sctrl_middle_pane_g5

0x99b5,	// (0x0004ad7b) bg_sctrl_middle_pane_g6

0x99bd,	// (0x0004ad83) bg_sctrl_middle_pane_g7

0x99c5,	// (0x0004ad8b) bg_sctrl_middle_pane_g8

0x0007,

0xfce9,	// (0x000510af) bg_sctrl_middle_pane_g

0x99cd,	// (0x0004ad93) bg_sctrl_middle_pane_g8_copy1

0x998d,	// (0x0004ad53) bg_sctrl_sk_pane_g1

0x9995,	// (0x0004ad5b) bg_sctrl_sk_pane_g2

0x999d,	// (0x0004ad63) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00050c0c) bg_sctrl_sk_pane_g

0x0eb6,	// (0x0004227c) aid_size_touch_scroll_bar

0x99a5,	// (0x0004ad6b) bg_sctrl_sk_pane_g4

0x99ad,	// (0x0004ad73) bg_sctrl_sk_pane_g5

0x99b5,	// (0x0004ad7b) bg_sctrl_sk_pane_g6

0x99bd,	// (0x0004ad83) bg_sctrl_sk_pane_g7

0x99c5,	// (0x0004ad8b) bg_sctrl_sk_pane_g8

0x99cd,	// (0x0004ad93) bg_sctrl_sk_pane_g9

0x7132,	// (0x000484f8) popup_fep_china_hwr2_fs_candidate_window

0x713c,	// (0x00048502) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x713c,	// (0x00048502) popup_fep_china_hwr2_fs_control_window

0xc23c,	// (0x0004d602) sctrl_sk_top_pane_g2

0x0001,

0xfcdf,	// (0x000510a5) sctrl_sk_top_pane_g

0xd749,	// (0x0004eb0f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd749,	// (0x0004eb0f) aid_fep_china_hwr2_fs_cell

0xd75c,	// (0x0004eb22) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd75c,	// (0x0004eb22) bg_popup_fep_shadow_pane_cp4

0xd775,	// (0x0004eb3b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd775,	// (0x0004eb3b) bg_popup_fep_shadow_pane_cp5

0xd787,	// (0x0004eb4d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd787,	// (0x0004eb4d) popup_fep_china_hwr2_fs_control_bar_grid

0xd797,	// (0x0004eb5d) popup_fep_china_hwr2_fs_control_funtion_grid

0xd79f,	// (0x0004eb65) aid_fep_china_hwr2_fs_candi_cell

0x08cb,	// (0x00041c91) bg_popup_fep_shadow_pane_cp6

0xd7a9,	// (0x0004eb6f) popup_fep_china_hwr2_fs_candidate_grid

0xd7b3,	// (0x0004eb79) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7b3,	// (0x0004eb79) cell_fep_china_hwr2_fs_funtion_grid

0xbfc1,	// (0x0004d387) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7cb,	// (0x0004eb91) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7cb,	// (0x0004eb91) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7d9,	// (0x0004eb9f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7d9,	// (0x0004eb9f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfa,	// (0x000510c0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfa,	// (0x000510c0) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ef,	// (0x0004ebb5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ef,	// (0x0004ebb5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd804,	// (0x0004ebca) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd804,	// (0x0004ebca) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcff,	// (0x000510c5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcff,	// (0x000510c5) cell_fep_china_hwr2_fs_funtion_grid_t

0xd820,	// (0x0004ebe6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd828,	// (0x0004ebee) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd830,	// (0x0004ebf6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd04,	// (0x000510ca) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd838,	// (0x0004ebfe) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd838,	// (0x0004ebfe) cell_fep_china_hwr2_fs_candidate_grid

0xd857,	// (0x0004ec1d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd85f,	// (0x0004ec25) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc1,	// (0x0004d387) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc1,	// (0x0004d387) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb24,	// (0x00050eea) cell_fep_china_hwr2_fs_candidate_grid_g

0xd867,	// (0x0004ec2d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9575,	// (0x0004a93b) clock_nsta_pane_cp_24_ParamLimits

0x9575,	// (0x0004a93b) clock_nsta_pane_cp_24

0x95f5,	// (0x0004a9bb) indicator_nsta_pane_cp_24_ParamLimits

0x95f5,	// (0x0004a9bb) indicator_nsta_pane_cp_24

0xa676,	// (0x0004ba3c) heading_pane_g1

0x0001,

0xf8ab,	// (0x00050c71) heading_pane_g

0xb0f7,	// (0x0004c4bd) grid_sct_catagory_button_pane

0xb129,	// (0x0004c4ef) scroll_pane_cp5_ParamLimits

0xbc21,	// (0x0004cfe7) button_value_adjust_pane_cp5_ParamLimits

0xbc21,	// (0x0004cfe7) button_value_adjust_pane_cp5

0xbd06,	// (0x0004d0cc) form2_midp_time_pane_ParamLimits

0xd875,	// (0x0004ec3b) cell_sct_catagory_button_pane_ParamLimits

0xd875,	// (0x0004ec3b) cell_sct_catagory_button_pane

0xbf86,	// (0x0004d34c) bg_button_pane_cp01_ParamLimits

0xbf86,	// (0x0004d34c) bg_button_pane_cp01

0xbfc1,	// (0x0004d387) cell_sct_catagory_button_pane_g1

0x755e,	// (0x00048924) popup_tb_extension_window

0xd887,	// (0x0004ec4d) aid_size_cell_ext_ParamLimits

0xd887,	// (0x0004ec4d) aid_size_cell_ext

0x0a6e,	// (0x00041e34) bg_tb_trans_pane_cp1_ParamLimits

0x0a6e,	// (0x00041e34) bg_tb_trans_pane_cp1

0xd8a7,	// (0x0004ec6d) grid_tb_ext_pane_ParamLimits

0xd8a7,	// (0x0004ec6d) grid_tb_ext_pane

0xd8d5,	// (0x0004ec9b) cell_tb_ext_pane_ParamLimits

0xd8d5,	// (0x0004ec9b) cell_tb_ext_pane

0xd8ec,	// (0x0004ecb2) cell_tb_ext_pane_g1_ParamLimits

0xd8ec,	// (0x0004ecb2) cell_tb_ext_pane_g1

0xd909,	// (0x0004eccf) cell_tb_ext_pane_t1

0x0a6e,	// (0x00041e34) list_highlight_pane_cp11_ParamLimits

0x0a6e,	// (0x00041e34) list_highlight_pane_cp11

0x62b2,	// (0x00047678) popup_uni_indicator_window_ParamLimits

0x62b2,	// (0x00047678) popup_uni_indicator_window

0x0f7d,	// (0x00042343) bg_popup_sub_pane_cp14

0xd924,	// (0x0004ecea) list_uniindi_pane

0xd930,	// (0x0004ecf6) uniindi_top_pane

0x0a6e,	// (0x00041e34) bg_uniindi_top_pane

0xd951,	// (0x0004ed17) uniindi_top_pane_g1

0xd967,	// (0x0004ed2d) uniindi_top_pane_g2

0x0003,

0xfd0b,	// (0x000510d1) uniindi_top_pane_g

0xd991,	// (0x0004ed57) uniindi_top_pane_t1

0xd9bd,	// (0x0004ed83) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0004ed83) list_single_uniindi_pane

0xbfc1,	// (0x0004d387) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0004ed96) list_single_uniindi_pane_g1

0xd9e3,	// (0x0004eda9) list_single_uniindi_pane_t1

0x08cb,	// (0x00041c91) control_bg_pane

0xda08,	// (0x0004edce) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0004edd7) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0004ede0) control_bg_pane_g1

0xda23,	// (0x0004ede9) control_bg_pane_g2

0x0001,

0xfd14,	// (0x000510da) control_bg_pane_g

0xba59,	// (0x0004ce1f) cell_indicator_nsta_pane_g1_ParamLimits

0xba67,	// (0x0004ce2d) cell_indicator_nsta_pane_g2_ParamLimits

0xfa88,	// (0x00050e4e) cell_indicator_nsta_pane_g_ParamLimits

0x5cc0,	// (0x00047086) form2_midp_time_pane_t1_ParamLimits

0x0cf8,	// (0x000420be) main_idle_act4_pane_ParamLimits

0x0cf8,	// (0x000420be) main_idle_act4_pane

0x755e,	// (0x00048924) popup_tb_extension_window_ParamLimits

0xd8c7,	// (0x0004ec8d) tb_ext_find_pane_ParamLimits

0xd8c7,	// (0x0004ec8d) tb_ext_find_pane

0xda2c,	// (0x0004edf2) ai_gene_pane_1_cp1

0x927a,	// (0x0004a640) ai_gene_pane_2_cp1

0xda34,	// (0x0004edfa) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0004ee03) list_single_idle_plugin_notification_pane

0xda46,	// (0x0004ee0c) list_single_idle_plugin_player_pane

0xda4f,	// (0x0004ee15) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0004ee15) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0004ee37) main_idle_act4_pane_t1

0xda83,	// (0x0004ee49) main_idle_act4_pane_t2

0x0001,

0xfd19,	// (0x000510df) main_idle_act4_pane_t

0xda95,	// (0x0004ee5b) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0004ee5b) middle_sk_idle_act4_pane

0xdaab,	// (0x0004ee71) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0004ee8b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0004ee8b) shortcut_wheel_idle_act4_pane

0xbfc1,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g1

0xbfc1,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g2

0xbfc1,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g3

0xbfc1,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g4

0xbfc1,	// (0x0004d387) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0004ee9f) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0004eea7) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0004eeaf) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0004eeb7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1e,	// (0x000510e4) shortcut_wheel_idle_act4_pane_g

0xc23c,	// (0x0004d602) middle_sk_idle_act4_pane_g1_ParamLimits

0xc23c,	// (0x0004d602) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0004ef1b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0004ef1b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd41,	// (0x00051107) middle_sk_idle_act4_pane_g_ParamLimits

0xfd41,	// (0x00051107) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0004ef27) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0004ef27) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0004ef44) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0004ef44) grid_ai_shortcut_pane

0xdb97,	// (0x0004ef5d) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0004ef5d) list_highlight_pane_cp16

0xdba4,	// (0x0004ef6a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0004ef6a) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0004ef76) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0004ef76) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0004ef90) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0004ef90) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd46,	// (0x0005110c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd46,	// (0x0005110c) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0004efa3) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0004efa3) cell_ai_shortcut_pane

0xdc00,	// (0x0004efc6) cell_ai_shortcut_pane_g1_ParamLimits

0xdc00,	// (0x0004efc6) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0004edf2) ai_gene_pane_1_cp2

0xdc22,	// (0x0004efe8) ai_gene_pane_2_cp2

0xdc2a,	// (0x0004eff0) list_highlight_pane_cp15

0xdc33,	// (0x0004eff9) list_single_idle_plugin_calendar_pane_g1

0xdc2a,	// (0x0004eff0) list_highlight_pane_cp17

0xdc3b,	// (0x0004f001) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc43,	// (0x0004f009) list_single_idle_plugin_player_pane_g1

0xb35e,	// (0x0004c724) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4d,	// (0x00051113) list_single_idle_plugin_player_pane_g

0xdc4b,	// (0x0004f011) list_single_idle_plugin_player_pane_t1

0xdc59,	// (0x0004f01f) list_single_idle_plugin_player_pane_t2

0xdc67,	// (0x0004f02d) list_single_idle_plugin_player_pane_t3

0xdc75,	// (0x0004f03b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd52,	// (0x00051118) list_single_idle_plugin_player_pane_t

0xdc83,	// (0x0004f049) wait_bar_pane_cp15

0xdc8b,	// (0x0004f051) grid_ai_notification_pane

0xb35e,	// (0x0004c724) list_single_idle_plugin_notification_pane_g1

0xdc94,	// (0x0004f05a) cell_ai_notification_pane_ParamLimits

0xdc94,	// (0x0004f05a) cell_ai_notification_pane

0xdca1,	// (0x0004f067) cell_ai_notification_pane_g1

0xdca9,	// (0x0004f06f) cell_ai_notification_pane_t1

0xdcb7,	// (0x0004f07d) tb_ext_find_button_pane

0xdcbf,	// (0x0004f085) tb_ext_find_pane_g1

0xdcc7,	// (0x0004f08d) tb_ext_find_pane_t1

0x43f4,	// (0x000457ba) tb_ext_find_button_pane_g1

0xdcd5,	// (0x0004f09b) tb_ext_find_button_pane_g2

0x0001,

0xfd5b,	// (0x00051121) tb_ext_find_button_pane_g

0xda71,	// (0x0004ee37) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0004ee49) main_idle_act4_pane_t2_ParamLimits

0xfd19,	// (0x000510df) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0004ee71) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0004ee7f) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0004ee7f) sat_plugin_idle_act4_pane

0xdcde,	// (0x0004f0a4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcde,	// (0x0004f0a4) sat_plugin_idle_act4_pane_t1

0xdcf1,	// (0x0004f0b7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf1,	// (0x0004f0b7) sat_plugin_idle_act4_pane_t2

0xdd04,	// (0x0004f0ca) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd04,	// (0x0004f0ca) sat_plugin_idle_act4_pane_t3

0xdd17,	// (0x0004f0dd) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd17,	// (0x0004f0dd) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd60,	// (0x00051126) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd60,	// (0x00051126) sat_plugin_idle_act4_pane_t

0x61e3,	// (0x000475a9) popup_battery_window_ParamLimits

0x61e3,	// (0x000475a9) popup_battery_window

0x0a6e,	// (0x00041e34) bg_popup_sub_pane_cp25_ParamLimits

0x0a6e,	// (0x00041e34) bg_popup_sub_pane_cp25

0xdd2a,	// (0x0004f0f0) popup_battery_window_g1_ParamLimits

0xdd2a,	// (0x0004f0f0) popup_battery_window_g1

0xdd36,	// (0x0004f0fc) popup_battery_window_t1_ParamLimits

0xdd36,	// (0x0004f0fc) popup_battery_window_t1

0xdd48,	// (0x0004f10e) popup_battery_window_t2_ParamLimits

0xdd48,	// (0x0004f10e) popup_battery_window_t2

0x0001,

0xfd69,	// (0x0005112f) popup_battery_window_t_ParamLimits

0xfd69,	// (0x0005112f) popup_battery_window_t

0x9144,	// (0x0004a50a) midp_canvas_pane_ParamLimits

0x91bc,	// (0x0004a582) midp_keypad_pane_ParamLimits

0x91bc,	// (0x0004a582) midp_keypad_pane

0x9457,	// (0x0004a81d) main_midp_pane_ParamLimits

0xbad4,	// (0x0004ce9a) signal_pane_g2_cp_ParamLimits

0xdd65,	// (0x0004f12b) aid_size_cell_midp_keypad_ParamLimits

0xdd65,	// (0x0004f12b) aid_size_cell_midp_keypad

0xdd7f,	// (0x0004f145) midp_keyp_game_grid_pane_ParamLimits

0xdd7f,	// (0x0004f145) midp_keyp_game_grid_pane

0xdd9f,	// (0x0004f165) midp_keyp_rocker_pane_ParamLimits

0xdd9f,	// (0x0004f165) midp_keyp_rocker_pane

0xddce,	// (0x0004f194) midp_keyp_sk_left_pane_ParamLimits

0xddce,	// (0x0004f194) midp_keyp_sk_left_pane

0xde2a,	// (0x0004f1f0) midp_keyp_sk_right_pane_ParamLimits

0xde2a,	// (0x0004f1f0) midp_keyp_sk_right_pane

0x08cb,	// (0x00041c91) bg_button_pane_cp03

0xde86,	// (0x0004f24c) midp_keyp_sk_left_pane_g1

0x08cb,	// (0x00041c91) bg_button_pane_cp04

0xde86,	// (0x0004f24c) midp_keyp_sk_right_pane_g1

0xbfc1,	// (0x0004d387) midp_keyp_rocker_pane_g1

0xde8e,	// (0x0004f254) keyp_game_cell_pane_ParamLimits

0xde8e,	// (0x0004f254) keyp_game_cell_pane

0x08cb,	// (0x00041c91) bg_button_pane_cp02

0xdea1,	// (0x0004f267) keyp_game_cell_pane_g1

0x622d,	// (0x000475f3) popup_fep_vkb2_window_ParamLimits

0x622d,	// (0x000475f3) popup_fep_vkb2_window

0x81e7,	// (0x000495ad) aid_size_cell_vkb2_ParamLimits

0x81e7,	// (0x000495ad) aid_size_cell_vkb2

0x8233,	// (0x000495f9) popup_fep_vkb2_window_g1_ParamLimits

0x8233,	// (0x000495f9) popup_fep_vkb2_window_g1

0x827b,	// (0x00049641) vkb2_area_bottom_pane_ParamLimits

0x827b,	// (0x00049641) vkb2_area_bottom_pane

0x82cf,	// (0x00049695) vkb2_area_keypad_pane_ParamLimits

0x82cf,	// (0x00049695) vkb2_area_keypad_pane

0x8315,	// (0x000496db) vkb2_area_top_pane_ParamLimits

0x8315,	// (0x000496db) vkb2_area_top_pane

0x8395,	// (0x0004975b) vkb2_top_entry_pane_ParamLimits

0x8395,	// (0x0004975b) vkb2_top_entry_pane

0x83bf,	// (0x00049785) vkb2_top_grid_left_pane_ParamLimits

0x83bf,	// (0x00049785) vkb2_top_grid_left_pane

0x83de,	// (0x000497a4) vkb2_top_grid_right_pane_ParamLimits

0x83de,	// (0x000497a4) vkb2_top_grid_right_pane

0x83fd,	// (0x000497c3) vkb2_cell_keypad_pane_ParamLimits

0x83fd,	// (0x000497c3) vkb2_cell_keypad_pane

0x84ce,	// (0x00049894) vkb2_area_bottom_grid_pane_ParamLimits

0x84ce,	// (0x00049894) vkb2_area_bottom_grid_pane

0x84f4,	// (0x000498ba) vkb2_area_bottom_pane_g1_ParamLimits

0x84f4,	// (0x000498ba) vkb2_area_bottom_pane_g1

0x8518,	// (0x000498de) vkb2_area_bottom_pane_g2_ParamLimits

0x8518,	// (0x000498de) vkb2_area_bottom_pane_g2

0x8546,	// (0x0004990c) vkb2_area_bottom_pane_g3_ParamLimits

0x8546,	// (0x0004990c) vkb2_area_bottom_pane_g3

0x0002,

0xfd6e,	// (0x00051134) vkb2_area_bottom_pane_g_ParamLimits

0xfd6e,	// (0x00051134) vkb2_area_bottom_pane_g

0x85a7,	// (0x0004996d) vkb2_top_cell_left_pane_ParamLimits

0x85a7,	// (0x0004996d) vkb2_top_cell_left_pane

0xdeb2,	// (0x0004f278) vkb2_top_entry_pane_g1_ParamLimits

0xdeb2,	// (0x0004f278) vkb2_top_entry_pane_g1

0xdec0,	// (0x0004f286) vkb2_top_entry_pane_t1_ParamLimits

0xdec0,	// (0x0004f286) vkb2_top_entry_pane_t1

0xdef2,	// (0x0004f2b8) vkb2_top_entry_pane_t2_ParamLimits

0xdef2,	// (0x0004f2b8) vkb2_top_entry_pane_t2

0xdf24,	// (0x0004f2ea) vkb2_top_entry_pane_t3_ParamLimits

0xdf24,	// (0x0004f2ea) vkb2_top_entry_pane_t3

0x0002,

0xfd75,	// (0x0005113b) vkb2_top_entry_pane_t_ParamLimits

0xfd75,	// (0x0005113b) vkb2_top_entry_pane_t

0x85f4,	// (0x000499ba) vkb2_top_grid_right_pane_g1_ParamLimits

0x85f4,	// (0x000499ba) vkb2_top_grid_right_pane_g1

0x860a,	// (0x000499d0) vkb2_top_grid_right_pane_g2_ParamLimits

0x860a,	// (0x000499d0) vkb2_top_grid_right_pane_g2

0x8622,	// (0x000499e8) vkb2_top_grid_right_pane_g3_ParamLimits

0x8622,	// (0x000499e8) vkb2_top_grid_right_pane_g3

0x863a,	// (0x00049a00) vkb2_top_grid_right_pane_g4_ParamLimits

0x863a,	// (0x00049a00) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7c,	// (0x00051142) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7c,	// (0x00051142) vkb2_top_grid_right_pane_g

0x8650,	// (0x00049a16) vkb2_top_cell_left_pane_g1

0x8667,	// (0x00049a2d) vkb2_cell_keypad_pane_g1_ParamLimits

0x8667,	// (0x00049a2d) vkb2_cell_keypad_pane_g1

0xdf48,	// (0x0004f30e) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf48,	// (0x0004f30e) vkb2_cell_keypad_pane_t1

0x8675,	// (0x00049a3b) vkb2_cell_bottom_grid_pane_ParamLimits

0x8675,	// (0x00049a3b) vkb2_cell_bottom_grid_pane

0x86ae,	// (0x00049a74) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0004eebf) aid_call2_pane_cp02

0xdb01,	// (0x0004eec7) aid_call_pane_cp02

0xdb09,	// (0x0004eecf) clock_digital_number_pane_cp10

0xdb11,	// (0x0004eed7) clock_digital_number_pane_cp11

0xdb19,	// (0x0004eedf) clock_digital_number_pane_cp12

0xdb21,	// (0x0004eee7) clock_digital_number_pane_cp13

0xdb29,	// (0x0004eeef) clock_digital_separator_pane_cp10

0x43f4,	// (0x000457ba) popup_clock_digital_analogue_window_cp2_g1

0x43f4,	// (0x000457ba) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0004eef7) popup_clock_digital_analogue_window_cp2_g3

0x43f4,	// (0x000457ba) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0004eef7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd31,	// (0x000510f7) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0004eeff) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0004ef0d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3c,	// (0x00051102) popup_clock_digital_analogue_window_cp2_t

0xbfc1,	// (0x0004d387) clock_digital_number_pane_cp10_g1

0xbfc1,	// (0x0004d387) clock_digital_number_pane_cp10_g2

0x0001,

0xfb24,	// (0x00050eea) clock_digital_number_pane_cp10_g

0xbfc1,	// (0x0004d387) clock_digital_separator_pane_cp10_g1

0xbfc1,	// (0x0004d387) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb24,	// (0x00050eea) clock_digital_separator_pane_cp10_g

0xd973,	// (0x0004ed39) uniindi_top_pane_g3

0xd984,	// (0x0004ed4a) uniindi_top_pane_g4

0x8488,	// (0x0004984e) vkb2_row_keypad_pane_ParamLimits

0x8488,	// (0x0004984e) vkb2_row_keypad_pane

0x86ca,	// (0x00049a90) vkb2_cell_t_keypad_pane_ParamLimits

0x86ca,	// (0x00049a90) vkb2_cell_t_keypad_pane

0x86da,	// (0x00049aa0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x86da,	// (0x00049aa0) vkb2_cell_t_keypad_pane_cp08

0x86ef,	// (0x00049ab5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x86ef,	// (0x00049ab5) vkb2_cell_t_keypad_pane_cp09

0x8703,	// (0x00049ac9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8703,	// (0x00049ac9) vkb2_cell_t_keypad_pane_cp01

0x8714,	// (0x00049ada) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8714,	// (0x00049ada) vkb2_cell_t_keypad_pane_cp02

0x8725,	// (0x00049aeb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8725,	// (0x00049aeb) vkb2_cell_t_keypad_pane_cp03

0x8736,	// (0x00049afc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8736,	// (0x00049afc) vkb2_cell_t_keypad_pane_cp04

0x8747,	// (0x00049b0d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8747,	// (0x00049b0d) vkb2_cell_t_keypad_pane_cp05

0x8758,	// (0x00049b1e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8758,	// (0x00049b1e) vkb2_cell_t_keypad_pane_cp06

0x876b,	// (0x00049b31) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x876b,	// (0x00049b31) vkb2_cell_t_keypad_pane_cp07

0x8780,	// (0x00049b46) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8780,	// (0x00049b46) vkb2_cell_t_keypad_pane_cp10

0xc23c,	// (0x0004d602) vkb2_cell_t_keypad_pane_g1

0xdf5f,	// (0x0004f325) vkb2_cell_t_keypad_pane_t1

0x08cb,	// (0x00041c91) popup_grid_graphic2_window

0xdf71,	// (0x0004f337) aid_size_cell_graphic2_ParamLimits

0xdf71,	// (0x0004f337) aid_size_cell_graphic2

0xdfa9,	// (0x0004f36f) bg_popup_window_pane_cp21_ParamLimits

0xdfa9,	// (0x0004f36f) bg_popup_window_pane_cp21

0xdfb7,	// (0x0004f37d) graphic2_pages_pane_ParamLimits

0xdfb7,	// (0x0004f37d) graphic2_pages_pane

0xdffd,	// (0x0004f3c3) grid_graphic2_control_pane_ParamLimits

0xdffd,	// (0x0004f3c3) grid_graphic2_control_pane

0xe03b,	// (0x0004f401) grid_graphic2_pane_ParamLimits

0xe03b,	// (0x0004f401) grid_graphic2_pane

0xe0b1,	// (0x0004f477) cell_graphic2_pane

0x08cb,	// (0x00041c91) main_comp_mode_pane

0xd1e0,	// (0x0004e5a6) list_ai3_gene_pane_ParamLimits

0xd5a6,	// (0x0004e96c) bg_popup_window_pane_cp19_ParamLimits

0xd5b2,	// (0x0004e978) bg_touch_area_indi_pane_ParamLimits

0xd5b2,	// (0x0004e978) bg_touch_area_indi_pane

0xd5c8,	// (0x0004e98e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c8,	// (0x0004e98e) bg_touch_area_indi_pane_cp01

0xd5de,	// (0x0004e9a4) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5de,	// (0x0004e9a4) bg_touch_area_indi_pane_cp02

0xd5f8,	// (0x0004e9be) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5f8,	// (0x0004e9be) bg_touch_area_indi_pane_cp03

0xd612,	// (0x0004e9d8) popup_slider_window_g1_ParamLimits

0xd62e,	// (0x0004e9f4) popup_slider_window_g2_ParamLimits

0xd64a,	// (0x0004ea10) popup_slider_window_g3_ParamLimits

0xfcc6,	// (0x0005108c) popup_slider_window_g_ParamLimits

0xd6b0,	// (0x0004ea76) popup_slider_window_t1_ParamLimits

0xd724,	// (0x0004eaea) small_volume_slider_vertical_pane_ParamLimits

0xe0b1,	// (0x0004f477) cell_graphic2_pane_ParamLimits

0xe105,	// (0x0004f4cb) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x0004f4cb) bg_button_pane_cp10

0xe11a,	// (0x0004f4e0) bg_button_pane_cp11_ParamLimits

0xe11a,	// (0x0004f4e0) bg_button_pane_cp11

0xe12f,	// (0x0004f4f5) graphic2_pages_pane_g1_ParamLimits

0xe12f,	// (0x0004f4f5) graphic2_pages_pane_g1

0xe14a,	// (0x0004f510) graphic2_pages_pane_g2_ParamLimits

0xe14a,	// (0x0004f510) graphic2_pages_pane_g2

0x0001,

0xfd8a,	// (0x00051150) graphic2_pages_pane_g_ParamLimits

0xfd8a,	// (0x00051150) graphic2_pages_pane_g

0xe162,	// (0x0004f528) graphic2_pages_pane_t1_ParamLimits

0xe162,	// (0x0004f528) graphic2_pages_pane_t1

0xe178,	// (0x0004f53e) cell_graphic2_control_pane_ParamLimits

0xe178,	// (0x0004f53e) cell_graphic2_control_pane

0xe198,	// (0x0004f55e) cell_graphic2_pane_g1_ParamLimits

0xe198,	// (0x0004f55e) cell_graphic2_pane_g1

0xe1a5,	// (0x0004f56b) cell_graphic2_pane_g2_ParamLimits

0xe1a5,	// (0x0004f56b) cell_graphic2_pane_g2

0xe1b2,	// (0x0004f578) cell_graphic2_pane_g3_ParamLimits

0xe1b2,	// (0x0004f578) cell_graphic2_pane_g3

0xe1bf,	// (0x0004f585) cell_graphic2_pane_g4_ParamLimits

0xe1bf,	// (0x0004f585) cell_graphic2_pane_g4

0xe1cc,	// (0x0004f592) cell_graphic2_pane_g5_ParamLimits

0xe1cc,	// (0x0004f592) cell_graphic2_pane_g5

0x0004,

0xfd8f,	// (0x00051155) cell_graphic2_pane_g_ParamLimits

0xfd8f,	// (0x00051155) cell_graphic2_pane_g

0xe1e4,	// (0x0004f5aa) cell_graphic2_pane_t1_ParamLimits

0xe1e4,	// (0x0004f5aa) cell_graphic2_pane_t1

0x9a01,	// (0x0004adc7) grid_highlight_pane_cp11_ParamLimits

0x9a01,	// (0x0004adc7) grid_highlight_pane_cp11

0x0a6e,	// (0x00041e34) bg_button_pane_cp05

0xe21a,	// (0x0004f5e0) cell_graphic2_control_pane_g1

0xbfc1,	// (0x0004d387) bg_touch_area_indi_pane_g1

0xe242,	// (0x0004f608) aid_cmod_rocker_key_size

0xe24c,	// (0x0004f612) aid_cmode_itu_key_size

0xe256,	// (0x0004f61c) main_cmode_video_pane

0xe260,	// (0x0004f626) main_comp_mode_itu_pane

0xe26c,	// (0x0004f632) main_comp_mode_rocker_pane

0xe278,	// (0x0004f63e) cell_cmode_rocker_pane_ParamLimits

0xe278,	// (0x0004f63e) cell_cmode_rocker_pane

0xe28c,	// (0x0004f652) cell_cmode_itu_pane_ParamLimits

0xe28c,	// (0x0004f652) cell_cmode_itu_pane

0x0f7d,	// (0x00042343) bg_button_pane_cp06_ParamLimits

0x0f7d,	// (0x00042343) bg_button_pane_cp06

0xc23c,	// (0x0004d602) cell_cmode_rocker_pane_g1_ParamLimits

0xc23c,	// (0x0004d602) cell_cmode_rocker_pane_g1

0xd7cb,	// (0x0004eb91) cell_cmode_rocker_pane_g2_ParamLimits

0xd7cb,	// (0x0004eb91) cell_cmode_rocker_pane_g2

0x0001,

0xfd9f,	// (0x00051165) cell_cmode_rocker_pane_g_ParamLimits

0xfd9f,	// (0x00051165) cell_cmode_rocker_pane_g

0x08cb,	// (0x00041c91) bg_button_pane_cp07

0xe2a3,	// (0x0004f669) cell_cmode_itu_pane_g1

0xe2ac,	// (0x0004f672) cell_cmode_itu_pane_t1

0xe2ba,	// (0x0004f680) cell_cmode_itu_pane_t2

0x0001,

0xfda4,	// (0x0005116a) cell_cmode_itu_pane_t

0xd9f8,	// (0x0004edbe) aid_touch_ctrl_left

0xda00,	// (0x0004edc6) aid_touch_ctrl_right

0x08cb,	// (0x00041c91) compa_mode_pane

0xe2c8,	// (0x0004f68e) aid_cmod_rocker_key_size_cp

0xe2d2,	// (0x0004f698) aid_cmode_itu_key_size_cp

0xe2dc,	// (0x0004f6a2) compa_mode_pane_g1

0xe2e4,	// (0x0004f6aa) compa_mode_pane_g2

0xe2ec,	// (0x0004f6b2) compa_mode_pane_g3

0x0002,

0xfda9,	// (0x0005116f) compa_mode_pane_g

0xe2f4,	// (0x0004f6ba) main_comp_mode_itu_pane_cp

0xe2fc,	// (0x0004f6c2) main_comp_mode_rocker_pane_cp

0xe304,	// (0x0004f6ca) cell_cmode_itu_pane_cp_ParamLimits

0xe304,	// (0x0004f6ca) cell_cmode_itu_pane_cp

0xe319,	// (0x0004f6df) cell_cmode_rocker_pane_cp_ParamLimits

0xe319,	// (0x0004f6df) cell_cmode_rocker_pane_cp

0x0f7d,	// (0x00042343) bg_button_pane_cp06_cp_ParamLimits

0x0f7d,	// (0x00042343) bg_button_pane_cp06_cp

0xc23c,	// (0x0004d602) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc23c,	// (0x0004d602) cell_cmode_rocker_pane_g1_cp

0xbfc1,	// (0x0004d387) cell_cmode_rocker_pane_g2_cp

0x08cb,	// (0x00041c91) bg_button_pane_cp07_cp

0xe32b,	// (0x0004f6f1) cell_cmode_itu_pane_g1_cp

0xe334,	// (0x0004f6fa) cell_cmode_itu_pane_t1_cp

0xe334,	// (0x0004f6fa) cell_cmode_itu_pane_t2_cp

0xaed8,	// (0x0004c29e) settings_code_pane_cp2

0x093b,	// (0x00041d01) bg_popup_window_pane_cp3_ParamLimits

0x0c82,	// (0x00042048) heading_pane_cp3_ParamLimits

0x0c91,	// (0x00042057) listscroll_popup_graphic_pane_ParamLimits

0x7c77,	// (0x0004903d) fep_hwr_aid_pane_ParamLimits

0x815c,	// (0x00049522) aid_touch_sctrl_top_ParamLimits

0x8169,	// (0x0004952f) sctrl_sk_top_pane_g1_ParamLimits

0xc23c,	// (0x0004d602) sctrl_sk_top_pane_g2_ParamLimits

0xfcdf,	// (0x000510a5) sctrl_sk_top_pane_g_ParamLimits

0x8176,	// (0x0004953c) sctrl_sk_top_pane_t1_ParamLimits

0x815c,	// (0x00049522) aid_touch_sctrl_bottom_ParamLimits

0x8176,	// (0x0004953c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd93d,	// (0x0004ed03) aid_area_touch_clock

0x835b,	// (0x00049721) aid_vkb2_area_top_pane_cell_ParamLimits

0x835b,	// (0x00049721) aid_vkb2_area_top_pane_cell

0x84aa,	// (0x00049870) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x84aa,	// (0x00049870) aid_vkb2_area_bottom_pane_cell

0xdeaa,	// (0x0004f270) popup_char_count_window

0xe342,	// (0x0004f708) popup_char_count_window_g1

0xe34b,	// (0x0004f711) popup_char_count_window_g2

0xe354,	// (0x0004f71a) popup_char_count_window_g3

0x0002,

0xfdb0,	// (0x00051176) popup_char_count_window_g

0xe35d,	// (0x0004f723) popup_char_count_window_t1

0x8211,	// (0x000495d7) popup_fep_char_preview_window_ParamLimits

0x8211,	// (0x000495d7) popup_fep_char_preview_window

0x8379,	// (0x0004973f) vkb2_top_candi_pane_ParamLimits

0x8379,	// (0x0004973f) vkb2_top_candi_pane

0xe36b,	// (0x0004f731) cell_vkb2_top_candi_pane_ParamLimits

0xe36b,	// (0x0004f731) cell_vkb2_top_candi_pane

0x9ff3,	// (0x0004b3b9) bg_popup_fep_char_preview_window_ParamLimits

0x9ff3,	// (0x0004b3b9) bg_popup_fep_char_preview_window

0x8795,	// (0x00049b5b) popup_fep_char_preview_window_t1_ParamLimits

0x8795,	// (0x00049b5b) popup_fep_char_preview_window_t1

0xe3b9,	// (0x0004f77f) bg_popup_fep_char_preview_window_g1

0xe3c1,	// (0x0004f787) bg_popup_fep_char_preview_window_g2

0xe3c9,	// (0x0004f78f) bg_popup_fep_char_preview_window_g3

0xe3d1,	// (0x0004f797) bg_popup_fep_char_preview_window_g4

0xe3d9,	// (0x0004f79f) bg_popup_fep_char_preview_window_g5

0xe3e1,	// (0x0004f7a7) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x0004f7af) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x0004f7b7) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x0004f7bf) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb7,	// (0x0005117d) bg_popup_fep_char_preview_window_g

0xc23c,	// (0x0004d602) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc23c,	// (0x0004d602) cell_vkb2_top_candi_pane_g1

0xc57d,	// (0x0004d943) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc57d,	// (0x0004d943) cell_vkb2_top_candi_pane_g2

0xc59e,	// (0x0004d964) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc59e,	// (0x0004d964) cell_vkb2_top_candi_pane_g3

0x87d7,	// (0x00049b9d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x87d7,	// (0x00049b9d) cell_vkb2_top_candi_pane_g4

0xe401,	// (0x0004f7c7) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe401,	// (0x0004f7c7) cell_vkb2_top_candi_pane_g5

0xd7cb,	// (0x0004eb91) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7cb,	// (0x0004eb91) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcc,	// (0x00051192) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcc,	// (0x00051192) cell_vkb2_top_candi_pane_g

0x87f8,	// (0x00049bbe) cell_vkb2_top_candi_pane_t1

0x79ea,	// (0x00048db0) aid_size_touch_slider_mark_ParamLimits

0x79ea,	// (0x00048db0) aid_size_touch_slider_mark

0xdfed,	// (0x0004f3b3) grid_graphic2_catg_pane_ParamLimits

0xdfed,	// (0x0004f3b3) grid_graphic2_catg_pane

0xe08b,	// (0x0004f451) popup_grid_graphic2_window_t1_ParamLimits

0xe08b,	// (0x0004f451) popup_grid_graphic2_window_t1

0xe09d,	// (0x0004f463) popup_grid_graphic2_window_t2_ParamLimits

0xe09d,	// (0x0004f463) popup_grid_graphic2_window_t2

0x0001,

0xfd85,	// (0x0005114b) popup_grid_graphic2_window_t_ParamLimits

0xfd85,	// (0x0005114b) popup_grid_graphic2_window_t

0x0a6e,	// (0x00041e34) bg_button_pane_cp05_ParamLimits

0xe21a,	// (0x0004f5e0) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0004f7e8) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0004f7e8) cell_graphic2_catg_pane

0x08cb,	// (0x00041c91) bg_button_pane_cp12

0xe434,	// (0x0004f7fa) cell_graphic2_catg_pane_g1

0xd909,	// (0x0004eccf) cell_tb_ext_pane_t1_ParamLimits

0x85c7,	// (0x0004998d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x85c7,	// (0x0004998d) vkb2_top_cell_right_narrow_pane

0x85df,	// (0x000499a5) vkb2_top_cell_right_wide_pane_ParamLimits

0x85df,	// (0x000499a5) vkb2_top_cell_right_wide_pane

0x7c69,	// (0x0004902f) bg_vkb2_func_pane_ParamLimits

0x7c69,	// (0x0004902f) bg_vkb2_func_pane

0x8650,	// (0x00049a16) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c69,	// (0x0004902f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c69,	// (0x0004902f) bg_vkb2_fuc_pane_cp03

0x86ae,	// (0x00049a74) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9995,	// (0x0004ad5b) bg_vkb2_func_pane_g1

0x999d,	// (0x0004ad63) bg_vkb2_func_pane_g2

0x99ad,	// (0x0004ad73) bg_vkb2_func_pane_g3

0x99a5,	// (0x0004ad6b) bg_vkb2_func_pane_g4

0x99b5,	// (0x0004ad7b) bg_vkb2_func_pane_g5

0x99bd,	// (0x0004ad83) bg_vkb2_func_pane_g6

0x99c5,	// (0x0004ad8b) bg_vkb2_func_pane_g7

0x99cd,	// (0x0004ad93) bg_vkb2_func_pane_g8

0x998d,	// (0x0004ad53) bg_vkb2_func_pane_g9

0x0008,

0xfdd9,	// (0x0005119f) bg_vkb2_func_pane_g

0x7c69,	// (0x0004902f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c69,	// (0x0004902f) bg_vkb2_fuc_pane_cp01

0x8650,	// (0x00049a16) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8650,	// (0x00049a16) vkb2_top_cell_right_wide_pane_g1

0x7c69,	// (0x0004902f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c69,	// (0x0004902f) bg_vkb2_fuc_pane_cp02

0x8816,	// (0x00049bdc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8816,	// (0x00049bdc) vkb2_top_cell_right_narrow_pane_g1

0xd520,	// (0x0004e8e6) aid_touch_area_decrease_ParamLimits

0xd520,	// (0x0004e8e6) aid_touch_area_decrease

0xd544,	// (0x0004e90a) aid_touch_area_increase_ParamLimits

0xd544,	// (0x0004e90a) aid_touch_area_increase

0xd55c,	// (0x0004e922) aid_touch_area_mute_ParamLimits

0xd55c,	// (0x0004e922) aid_touch_area_mute

0xd578,	// (0x0004e93e) aid_touch_area_slider_ParamLimits

0xd578,	// (0x0004e93e) aid_touch_area_slider

0xd666,	// (0x0004ea2c) popup_slider_window_g4_ParamLimits

0xd666,	// (0x0004ea2c) popup_slider_window_g4

0xd67e,	// (0x0004ea44) popup_slider_window_g5_ParamLimits

0xd67e,	// (0x0004ea44) popup_slider_window_g5

0xd6a0,	// (0x0004ea66) popup_slider_window_g6_ParamLimits

0xd6a0,	// (0x0004ea66) popup_slider_window_g6

0xd6de,	// (0x0004eaa4) popup_slider_window_t2_ParamLimits

0xd6de,	// (0x0004eaa4) popup_slider_window_t2

0x0001,

0xfcd3,	// (0x00051099) popup_slider_window_t_ParamLimits

0xfcd3,	// (0x00051099) popup_slider_window_t

0xd6f6,	// (0x0004eabc) slider_pane_ParamLimits

0xd6f6,	// (0x0004eabc) slider_pane

0xe43d,	// (0x0004f803) slider_pane_g1_ParamLimits

0xe43d,	// (0x0004f803) slider_pane_g1

0xe451,	// (0x0004f817) slider_pane_g2_ParamLimits

0xe451,	// (0x0004f817) slider_pane_g2

0xe467,	// (0x0004f82d) slider_pane_g3_ParamLimits

0xe467,	// (0x0004f82d) slider_pane_g3

0x0003,

0xfdec,	// (0x000511b2) slider_pane_g_ParamLimits

0xfdec,	// (0x000511b2) slider_pane_g

0x75c0,	// (0x00048986) popup_tb_float_extension_window_ParamLimits

0x75c0,	// (0x00048986) popup_tb_float_extension_window

0xe493,	// (0x0004f859) aid_size_cell_tb_float_ext

0x08cb,	// (0x00041c91) bg_popup_sub_window_cp28

0xe49f,	// (0x0004f865) grid_tb_float_ext_pane

0xe4ab,	// (0x0004f871) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0004f871) cell_tb_float_ext_pane

0xe4c7,	// (0x0004f88d) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0004f896) grid_highlight_pane_cp12

0x7db0,	// (0x00049176) cell_last_hwr_side_pane_ParamLimits

0x7db0,	// (0x00049176) cell_last_hwr_side_pane

0xbfc1,	// (0x0004d387) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0004f89f) cell_last_hwr_side_pane_g2

0x0001,

0xfdf5,	// (0x000511bb) cell_last_hwr_side_pane_g

0x8576,	// (0x0004993c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8576,	// (0x0004993c) vkb2_area_bottom_space_btn_pane

0xc23c,	// (0x0004d602) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf5f,	// (0x0004f325) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x87f8,	// (0x00049bbe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8832,	// (0x00049bf8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8832,	// (0x00049bf8) vkb2_area_bottom_space_btn_pane_g1

0x886c,	// (0x00049c32) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x886c,	// (0x00049c32) vkb2_area_bottom_space_btn_pane_g2

0x88a2,	// (0x00049c68) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x88a2,	// (0x00049c68) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfa,	// (0x000511c0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfa,	// (0x000511c0) vkb2_area_bottom_space_btn_pane_g

0x7d20,	// (0x000490e6) cel_fep_hwr_func_pane_ParamLimits

0x7d20,	// (0x000490e6) cel_fep_hwr_func_pane

0x7d5c,	// (0x00049122) cell_hwr_side_button_pane_ParamLimits

0x7d5c,	// (0x00049122) cell_hwr_side_button_pane

0xd93d,	// (0x0004ed03) aid_area_touch_clock_ParamLimits

0x0a6e,	// (0x00041e34) bg_uniindi_top_pane_ParamLimits

0xd951,	// (0x0004ed17) uniindi_top_pane_g1_ParamLimits

0xd967,	// (0x0004ed2d) uniindi_top_pane_g2_ParamLimits

0xd973,	// (0x0004ed39) uniindi_top_pane_g3_ParamLimits

0xd984,	// (0x0004ed4a) uniindi_top_pane_g4_ParamLimits

0xfd0b,	// (0x000510d1) uniindi_top_pane_g_ParamLimits

0xd991,	// (0x0004ed57) uniindi_top_pane_t1_ParamLimits

0x0a6e,	// (0x00041e34) bg_vkb2_func_pane_cp01_ParamLimits

0x0a6e,	// (0x00041e34) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0004f8a8) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8a8) cel_fep_hwr_func_pane_g1

0x0a6e,	// (0x00041e34) bg_vkb2_func_pane_cp02_ParamLimits

0x0a6e,	// (0x00041e34) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0004f8a8) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8a8) cell_hwr_side_button_pane_g1

0x9812,	// (0x0004abd8) status_pane_g4_ParamLimits

0x9812,	// (0x0004abd8) status_pane_g4

0x982c,	// (0x0004abf2) status_pane_t1

0xbd74,	// (0x0004d13a) form2_midp_gauge_slider_cont_pane

0xbd7c,	// (0x0004d142) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd8e,	// (0x0004d154) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda0,	// (0x0004d166) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad7,	// (0x00050e9d) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb2,	// (0x0004d178) form2_midp_slider_pane_ParamLimits

0x81d9,	// (0x0004959f) aid_size_cell_func_vkb2_ParamLimits

0x81d9,	// (0x0004959f) aid_size_cell_func_vkb2

0xe47f,	// (0x0004f845) slider_pane_g4_ParamLimits

0xe47f,	// (0x0004f845) slider_pane_g4

0x88ec,	// (0x00049cb2) form2_midp_gauge_slider_pane_t2_cp01

0x88fa,	// (0x00049cc0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88fa,	// (0x00049cc0) form2_midp_gauge_slider_pane_t3_cp01

0x8917,	// (0x00049cdd) form2_midp_slider_pane_cp01

0x08cb,	// (0x00041c91) navi_smil_pane

0xe51b,	// (0x0004f8e1) navi_smil_pane_g1

0xe523,	// (0x0004f8e9) navi_smil_pane_t1

0xe4f0,	// (0x0004f8b6) form2_midp_slider_pane_g1

0xe4f9,	// (0x0004f8bf) form2_midp_slider_pane_g2

0xe501,	// (0x0004f8c7) form2_midp_slider_pane_g3

0xe4f0,	// (0x0004f8b6) form2_midp_slider_pane_g4

0xe509,	// (0x0004f8cf) form2_midp_slider_pane_g5

0x0004,

0xfe03,	// (0x000511c9) form2_midp_slider_pane_g

0x88dc,	// (0x00049ca2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x88dc,	// (0x00049ca2) vkb2_area_bottom_space_btn_pane_g4

0x9631,	// (0x0004a9f7) lc0_navi_pane_ParamLimits

0x9631,	// (0x0004a9f7) lc0_navi_pane

0x96ad,	// (0x0004aa73) lc0_stat_indi_pane_ParamLimits

0x96ad,	// (0x0004aa73) lc0_stat_indi_pane

0x96c4,	// (0x0004aa8a) ls0_title_pane_ParamLimits

0x96c4,	// (0x0004aa8a) ls0_title_pane

0x0f7d,	// (0x00042343) bg_popup_sub_pane_cp14_ParamLimits

0xd924,	// (0x0004ecea) list_uniindi_pane_ParamLimits

0xd930,	// (0x0004ecf6) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0004ed96) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0004eda9) list_single_uniindi_pane_t1_ParamLimits

0x8920,	// (0x00049ce6) lc0_stat_clock_pane_ParamLimits

0x8920,	// (0x00049ce6) lc0_stat_clock_pane

0xe531,	// (0x0004f8f7) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0004f8f7) lc0_stat_indi_pane_g1

0xe53e,	// (0x0004f904) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0004f904) lc0_stat_indi_pane_g2

0x0001,

0xfe0e,	// (0x000511d4) lc0_stat_indi_pane_g_ParamLimits

0xfe0e,	// (0x000511d4) lc0_stat_indi_pane_g

0x892d,	// (0x00049cf3) lc0_uni_indicator_pane_ParamLimits

0x892d,	// (0x00049cf3) lc0_uni_indicator_pane

0xe54b,	// (0x0004f911) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0004f911) ls0_title_pane_g1

0xe55f,	// (0x0004f925) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0004f925) ls0_title_pane_t1

0x893a,	// (0x00049d00) lc0_uni_indicator_pane_g1_ParamLimits

0x893a,	// (0x00049d00) lc0_uni_indicator_pane_g1

0xe595,	// (0x0004f95b) lc0_stat_clock_pane_t1

0x08cb,	// (0x00041c91) main_ai5_pane

0xe5a3,	// (0x0004f969) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0004f969) ai5_sk_pane

0xe5b0,	// (0x0004f976) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0004f976) cell_ai5_widget_pane

0xe64f,	// (0x0004fa15) aid_size_cell_widget_grid

0xe65d,	// (0x0004fa23) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0004fa23) bg_ai5_widget_pane

0xe6d9,	// (0x0004fa9f) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0004fab3) cell_ai5_widget_pane_g3

0xe707,	// (0x0004facd) cell_ai5_widget_pane_g4

0xe717,	// (0x0004fadd) cell_ai5_widget_pane_g5

0xe727,	// (0x0004faed) cell_ai5_widget_pane_g6

0xe733,	// (0x0004faf9) cell_ai5_widget_pane_g7

0xe79f,	// (0x0004fb65) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0004fb65) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0004fb82) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0004fb82) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0004fb9a) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0004fb9a) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0004fbb2) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0004fbb2) cell_ai5_widget_pane_t4

0xe812,	// (0x0004fbd8) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0004fbd8) cell_ai5_widget_pane_t5

0xe832,	// (0x0004fbf8) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0004fbf8) cell_ai5_widget_pane_t6

0xe844,	// (0x0004fc0a) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0004fc0a) cell_ai5_widget_pane_t7

0xe863,	// (0x0004fc29) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0004fc29) cell_ai5_widget_pane_t8

0x000b,

0xfe2e,	// (0x000511f4) cell_ai5_widget_pane_t_ParamLimits

0xfe2e,	// (0x000511f4) cell_ai5_widget_pane_t

0xe8e7,	// (0x0004fcad) grid_ai5_widget_pane

0x0f7d,	// (0x00042343) highlight_cell_ai5_widget_pane_ParamLimits

0x0f7d,	// (0x00042343) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0004fcbb) ai5_sk_left_pane

0xe8ff,	// (0x0004fcc5) ai5_sk_middle_pane

0xe909,	// (0x0004fccf) ai5_sk_right_pane

0xe913,	// (0x0004fcd9) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0004fcd9) bg_ai5_widget_pane_g1

0xe91f,	// (0x0004fce5) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0004fce5) bg_ai5_widget_pane_g2

0xe92b,	// (0x0004fcf1) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0004fcf1) bg_ai5_widget_pane_g3

0xe937,	// (0x0004fcfd) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0004fcfd) bg_ai5_widget_pane_g4

0xe943,	// (0x0004fd09) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0004fd09) bg_ai5_widget_pane_g5

0xe94f,	// (0x0004fd15) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0004fd15) bg_ai5_widget_pane_g6

0xe95b,	// (0x0004fd21) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0004fd21) bg_ai5_widget_pane_g7

0xe967,	// (0x0004fd2d) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0004fd2d) bg_ai5_widget_pane_g8

0xe973,	// (0x0004fd39) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0004fd39) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x0005120d) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x0005120d) bg_ai5_widget_pane_g

0xe9ab,	// (0x0004fd71) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0004fd71) cell_shortcut_ai5_widget_pane

0x9130,	// (0x0004a4f6) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0004fd84) cell_grid_ai5_widget_pane_g1

0x9130,	// (0x0004a4f6) highlight_cell_shortcut_ai5_widget_pane

0x999d,	// (0x0004ad63) ai5_sk_left_pane_g1

0xe9c7,	// (0x0004fd8d) ai5_sk_left_pane_g2

0xe9cf,	// (0x0004fd95) ai5_sk_left_pane_g3

0xe9d7,	// (0x0004fd9d) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x00051220) ai5_sk_left_pane_g

0xe9df,	// (0x0004fda5) ai5_sk_left_pane_t1

0x9995,	// (0x0004ad5b) ai5_sk_right_pane_g1

0xe9ed,	// (0x0004fdb3) ai5_sk_right_pane_g2

0xe9f5,	// (0x0004fdbb) ai5_sk_right_pane_g3

0xe9fd,	// (0x0004fdc3) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x00051229) ai5_sk_right_pane_g

0xea05,	// (0x0004fdcb) ai5_sk_right_pane_t1

0x9995,	// (0x0004ad5b) ai5_sk_middle_pane_g1

0x999d,	// (0x0004ad63) ai5_sk_middle_pane_g2

0x99b5,	// (0x0004ad7b) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0004fdbb) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0004fd95) ai5_sk_middle_pane_g5

0xea13,	// (0x0004fdd9) ai5_sk_middle_pane_g6

0xea1b,	// (0x0004fde1) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x00051232) ai5_sk_middle_pane_g

0x94b7,	// (0x0004a87d) aid_touch_area_size_lc0_ParamLimits

0x94b7,	// (0x0004a87d) aid_touch_area_size_lc0

0x7ebf,	// (0x00049285) cell_hwr_candidate_pane_t1_ParamLimits

0x94d5,	// (0x0004a89b) aid_touch_navi_pane

0x97c4,	// (0x0004ab8a) status_dt_navi_pane_ParamLimits

0x97c4,	// (0x0004ab8a) status_dt_navi_pane

0x97d1,	// (0x0004ab97) status_dt_sta_pane_ParamLimits

0x97d1,	// (0x0004ab97) status_dt_sta_pane

0xea23,	// (0x0004fde9) dt_sta_controll_pane

0xea30,	// (0x0004fdf6) dt_sta_indi_pane

0xea41,	// (0x0004fe07) dt_sta_title_pane

0x0a6e,	// (0x00041e34) bg_dt_sta_indi_pane_ParamLimits

0x0a6e,	// (0x00041e34) bg_dt_sta_indi_pane

0xea54,	// (0x0004fe1a) dt_sta_battery_pane

0xea5c,	// (0x0004fe22) dt_sta_indi_pane_g1

0xea65,	// (0x0004fe2b) dt_sta_indi_pane_g2

0xea6e,	// (0x0004fe34) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x00051241) dt_sta_indi_pane_g

0xea77,	// (0x0004fe3d) dt_sta_signal_pane

0x0f7d,	// (0x00042343) bg_dt_sta_title_pane_ParamLimits

0x0f7d,	// (0x00042343) bg_dt_sta_title_pane

0xea80,	// (0x0004fe46) dt_sta_title_pane_g1

0xea88,	// (0x0004fe4e) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0004fe4e) dt_sta_title_pane_t1

0x08cb,	// (0x00041c91) bg_dt_sta_control_pane

0xea9d,	// (0x0004fe63) dt_sta_controll_pane_g1

0xeaa6,	// (0x0004fe6c) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0004fe75) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0004fe7e) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x00051248) bg_dt_sta_title_pane_g

0xbfc1,	// (0x0004d387) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0004fe87) dt_sta_signal_pane_g1

0xeac9,	// (0x0004fe8f) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0005124f) dt_sta_signal_pane_g

0xead1,	// (0x0004fe97) dt_sta_battery_pane_g1

0xeada,	// (0x0004fea0) dt_sta_battery_pane_t1

0xbfc1,	// (0x0004d387) bg_dt_sta_control_pane_g1

0x454f,	// (0x00045915) fep_china_uni_eep_pane

0x4557,	// (0x0004591d) fep_china_uni_entry_pane_ParamLimits

0x4567,	// (0x0004592d) popup_fep_china_uni_window_g1_ParamLimits

0x4577,	// (0x0004593d) popup_fep_china_uni_window_g2_ParamLimits

0x4577,	// (0x0004593d) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00050ac3) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00050ac3) popup_fep_china_uni_window_g

0xeae9,	// (0x0004feaf) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0004feb7) fep_china_uni_eep_pane_t1

0xe512,	// (0x0004f8d8) aid_touch_area_size_smil_player

0x9629,	// (0x0004a9ef) lc0_clock_pane

0x9820,	// (0x0004abe6) status_pane_g5_ParamLimits

0x9820,	// (0x0004abe6) status_pane_g5

0x7245,	// (0x0004860b) popup_keymap_window

0x97e6,	// (0x0004abac) status_icon_pane

0xe6ed,	// (0x0004fab3) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0004facd) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0004fadd) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0004fb05) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0004fb05) cell_ai5_widget_pane_g8

0xe753,	// (0x0004fb19) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0004fb19) cell_ai5_widget_pane_g9

0xe767,	// (0x0004fb2d) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0004fb2d) cell_ai5_widget_pane_g10

0xeb00,	// (0x0004fec6) status_icon_pane_g1

0x08cb,	// (0x00041c91) bg_popup_sub_pane_cp13

0xeb08,	// (0x0004fece) popup_keymap_window_t1

0x9408,	// (0x0004a7ce) control_pane_g6_ParamLimits

0x9408,	// (0x0004a7ce) control_pane_g6

0x9415,	// (0x0004a7db) control_pane_g7_ParamLimits

0x9415,	// (0x0004a7db) control_pane_g7

0x9422,	// (0x0004a7e8) control_pane_g8_ParamLimits

0x9422,	// (0x0004a7e8) control_pane_g8

0xea23,	// (0x0004fde9) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0004fdf6) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0004fe07) dt_sta_title_pane_ParamLimits

0x0ebf,	// (0x00042285) aid_size_touch_scroll_bar_cale

0x61fb,	// (0x000475c1) popup_discreet_window_ParamLimits

0x61fb,	// (0x000475c1) popup_discreet_window

0x6289,	// (0x0004764f) popup_sk_window

0x9ff3,	// (0x0004b3b9) bg_popup_sub_pane_cp28_ParamLimits

0x9ff3,	// (0x0004b3b9) bg_popup_sub_pane_cp28

0xeb16,	// (0x0004fedc) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0004fedc) popup_discreet_window_g1

0xeb36,	// (0x0004fefc) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0004fefc) popup_discreet_window_t1

0xeb54,	// (0x0004ff1a) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0004ff1a) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x00051254) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x00051254) popup_discreet_window_t

0x894d,	// (0x00049d13) popup_sk_window_g1

0x8957,	// (0x00049d1d) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0005125b) popup_sk_window_g

0x895f,	// (0x00049d25) popup_sk_window_t1

0x896d,	// (0x00049d33) popup_sk_window_t1_copy1

0xe6d9,	// (0x0004fa9f) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0004fc3b) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0004fc3b) cell_ai5_widget_pane_t9

0x08cb,	// (0x00041c91) main_fep_fshwr2_pane

0x897b,	// (0x00049d41) aid_fshwr2_btn_pane

0x898b,	// (0x00049d51) aid_fshwr2_syb_pane

0x899f,	// (0x00049d65) aid_fshwr2_txt_pane

0x89af,	// (0x00049d75) fshwr2_func_candi_pane

0x89cf,	// (0x00049d95) fshwr2_hwr_syb_pane

0x89e5,	// (0x00049dab) fshwr2_icf_pane

0x08cb,	// (0x00041c91) fshwr2_icf_bg_pane

0x8a19,	// (0x00049ddf) fshwr2_icf_pane_t1_ParamLimits

0x8a19,	// (0x00049ddf) fshwr2_icf_pane_t1

0x43f4,	// (0x000457ba) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0004ff6c) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0004ff6c) fshwr2_func_candi_row_pane

0x8a31,	// (0x00049df7) cell_fshwr2_syb_pane_ParamLimits

0x8a31,	// (0x00049df7) cell_fshwr2_syb_pane

0xe4e2,	// (0x0004f8a8) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8a8) fshwr2_hwr_syb_pane_g1

0x08cb,	// (0x00041c91) bg_popup_call_pane_cp01

0x8a52,	// (0x00049e18) fshwr2_func_candi_cell_pane_ParamLimits

0x8a52,	// (0x00049e18) fshwr2_func_candi_cell_pane

0xa66a,	// (0x0004ba30) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa66a,	// (0x0004ba30) fshwr2_func_candi_cell_bg_pane

0x8aa3,	// (0x00049e69) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8aa3,	// (0x00049e69) fshwr2_func_candi_cell_pane_g1

0x8ace,	// (0x00049e94) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8ace,	// (0x00049e94) fshwr2_func_candi_cell_pane_t1

0x08cb,	// (0x00041c91) bg_button_pane_cp08

0x9457,	// (0x0004a81d) cell_fshwr2_syb_bg_pane

0x8ae1,	// (0x00049ea7) cell_fshwr2_syb_bg_pane_g1

0x8af5,	// (0x00049ebb) cell_fshwr2_syb_bg_pane_t1

0x0f7d,	// (0x00042343) main_tmo_pane

0xab17,	// (0x0004bedd) uni_indicator_pane_g1_ParamLimits

0xab2d,	// (0x0004bef3) uni_indicator_pane_g2_ParamLimits

0xab43,	// (0x0004bf09) uni_indicator_pane_g3_ParamLimits

0xab56,	// (0x0004bf1c) uni_indicator_pane_g4_ParamLimits

0xab56,	// (0x0004bf1c) uni_indicator_pane_g4

0xab6a,	// (0x0004bf30) uni_indicator_pane_g5_ParamLimits

0xab6a,	// (0x0004bf30) uni_indicator_pane_g5

0xab6a,	// (0x0004bf30) uni_indicator_pane_g6_ParamLimits

0xab6a,	// (0x0004bf30) uni_indicator_pane_g6

0xf901,	// (0x00050cc7) uni_indicator_pane_g_ParamLimits

0xd4f0,	// (0x0004e8b6) popup_tmo_note_window_ParamLimits

0xd4f0,	// (0x0004e8b6) popup_tmo_note_window

0x0f7d,	// (0x00042343) fshwr2_bg_pane

0x8abf,	// (0x00049e85) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8abf,	// (0x00049e85) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x00051260) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x00051260) fshwr2_func_candi_cell_pane_g

0xbfc1,	// (0x0004d387) bg_popup_window_pane_cp01

0x8b0b,	// (0x00049ed1) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0004ff8f) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0004ff8f) bg_popup_window_pane_cp22

0xebd7,	// (0x0004ff9d) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0004ff9d) listscroll_tmo_link_pane

0xec17,	// (0x0004ffdd) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0004ffdd) popup_tmo_note_window_g1

0xec24,	// (0x0004ffea) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0004ffea) tmo_note_info_pane

0xec3e,	// (0x00050004) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x00050004) list_tmo_note_info_pane_g1

0xec55,	// (0x0005001b) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0005001b) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x00051265) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x00051265) list_tmo_note_info_pane_g

0xec71,	// (0x00050037) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x00050037) list_tmo_note_info_text_pane

0xecf6,	// (0x000500bc) list_tmo_link_pane

0xed03,	// (0x000500c9) scroll_pane_cp20

0xed10,	// (0x000500d6) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x000500d6) list_single_tmo_link_pane

0xed20,	// (0x000500e6) list_single_tmo_link_pane_t1

0xed2e,	// (0x000500f4) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x000500f4) list_tmo_note_info_text_pane_t1

0x67c0,	// (0x00047b86) aid_size_touch_scroll_bar_cp01_ParamLimits

0x67c0,	// (0x00047b86) aid_size_touch_scroll_bar_cp01

0x5679,	// (0x00046a3f) aid_size_touch_slider_marker

0x6271,	// (0x00047637) popup_settings_window_ParamLimits

0x6271,	// (0x00047637) popup_settings_window

0x57ef,	// (0x00046bb5) popup_candi_list_indi_window

0x94d5,	// (0x0004a89b) aid_touch_navi_pane_ParamLimits

0x8130,	// (0x000494f6) rs_clock_indi_pane

0x8139,	// (0x000494ff) sctrl_sk_bottom_pane_ParamLimits

0x814a,	// (0x00049510) sctrl_sk_top_pane_ParamLimits

0x822b,	// (0x000495f1) popup_fep_tooltip_window

0xe64f,	// (0x0004fa15) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0004fa8a) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0004fa8a) cell_ai5_widget_pane_g1

0xe727,	// (0x0004faed) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0004faf9) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe13,	// (0x000511d9) cell_ai5_widget_pane_g_ParamLimits

0xfe13,	// (0x000511d9) cell_ai5_widget_pane_g

0xe8a4,	// (0x0004fc6a) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0004fc6a) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0004fcad) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0004fd45) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0004fd45) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0004ff2f) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0004ff2f) popup_discreet_window_t3

0x8a01,	// (0x00049dc7) popup_fshwr2_char_preview_window_ParamLimits

0x8a01,	// (0x00049dc7) popup_fshwr2_char_preview_window

0xec8f,	// (0x00050055) tmo_note_info_pane_t1

0xeca4,	// (0x0005006a) tmo_note_info_pane_t2

0xecbd,	// (0x00050083) tmo_note_info_pane_t3

0xecd2,	// (0x00050098) tmo_note_info_pane_t4

0xece4,	// (0x000500aa) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0005126a) tmo_note_info_pane_t

0xecf6,	// (0x000500bc) list_tmo_link_pane_ParamLimits

0xed03,	// (0x000500c9) scroll_pane_cp20_ParamLimits

0x08cb,	// (0x00041c91) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0005010d) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0005011b) popup_candi_list_indi_window_g1

0xed5e,	// (0x00050124) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x00050130) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x00050145) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x00050151) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x00051275) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0005015d) cell_contacts_ai5_widget_pane_t1

0x0f7d,	// (0x00042343) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x000501d4) settings_container_pane

0x9130,	// (0x0004a4f6) listscroll_set_pane_copy1

0xb6f2,	// (0x0004cab8) scroll_pane_cp121_copy1

0xee1a,	// (0x000501e0) set_content_pane_copy1

0xee22,	// (0x000501e8) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x000501e8) aid_height_set_list_copy1

0xad6a,	// (0x0004c130) aid_size_parent_copy1_ParamLimits

0xad6a,	// (0x0004c130) aid_size_parent_copy1

0xee2e,	// (0x000501f4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x000501f4) button_value_adjust_pane_cp6_copy1

0x9457,	// (0x0004a81d) list_highlight_pane_cp2_copy1_ParamLimits

0x9457,	// (0x0004a81d) list_highlight_pane_cp2_copy1

0xee42,	// (0x00050208) list_set_pane_copy1_ParamLimits

0xee42,	// (0x00050208) list_set_pane_copy1

0xeda9,	// (0x0005016f) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0005016f) main_pane_set_t1_copy1

0xede3,	// (0x000501a9) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x000501a9) main_pane_set_t2_copy1

0xef03,	// (0x000502c9) main_pane_set_t3_copy1

0xef11,	// (0x000502d7) main_pane_set_t4_copy1

0xee02,	// (0x000501c8) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x000501c8) set_content_pane_g1_copy1

0xef1f,	// (0x000502e5) setting_code_pane_copy1

0xef27,	// (0x000502ed) setting_slider_graphic_pane_copy1

0xef27,	// (0x000502ed) setting_slider_pane_copy1

0xef2f,	// (0x000502f5) setting_text_pane_copy1

0xef2f,	// (0x000502f5) setting_volume_pane_copy1

0xef1f,	// (0x000502e5) settings_code_pane_cp2_copy1

0xef37,	// (0x000502fd) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x000502fd) settings_code_pane_cp_copy1

0x8b14,	// (0x00049eda) volume_set_pane_copy1

0xef4b,	// (0x00050311) volume_set_pane_g10_copy1

0xef57,	// (0x0005031d) volume_set_pane_g1_copy1

0xef61,	// (0x00050327) volume_set_pane_g2_copy1

0xef6b,	// (0x00050331) volume_set_pane_g3_copy1

0xef75,	// (0x0005033b) volume_set_pane_g4_copy1

0xef7f,	// (0x00050345) volume_set_pane_g5_copy1

0xef89,	// (0x0005034f) volume_set_pane_g6_copy1

0xef93,	// (0x00050359) volume_set_pane_g7_copy1

0xef9d,	// (0x00050363) volume_set_pane_g8_copy1

0xefa7,	// (0x0005036d) volume_set_pane_g9_copy1

0x093b,	// (0x00041d01) bg_set_opt_pane_cp_copy1_ParamLimits

0x093b,	// (0x00041d01) bg_set_opt_pane_cp_copy1

0x8b20,	// (0x00049ee6) setting_slider_pane_t1_copy1_ParamLimits

0x8b20,	// (0x00049ee6) setting_slider_pane_t1_copy1

0x8b3f,	// (0x00049f05) setting_slider_pane_t2_copy1_ParamLimits

0x8b3f,	// (0x00049f05) setting_slider_pane_t2_copy1

0x8b59,	// (0x00049f1f) setting_slider_pane_t3_copy1_ParamLimits

0x8b59,	// (0x00049f1f) setting_slider_pane_t3_copy1

0x8b71,	// (0x00049f37) slider_set_pane_copy1_ParamLimits

0x8b71,	// (0x00049f37) slider_set_pane_copy1

0x0fd5,	// (0x0004239b) set_opt_bg_pane_g1_copy2

0x0fdd,	// (0x000423a3) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x00050379) set_opt_bg_pane_g3_copy2

0x0fed,	// (0x000423b3) set_opt_bg_pane_g4_copy2

0x0ff5,	// (0x000423bb) set_opt_bg_pane_g5_copy2

0x0ffd,	// (0x000423c3) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x00050383) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0005038d) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x00050397) set_opt_bg_pane_g9_copy2

0x8b87,	// (0x00049f4d) aid_size_touch_slider_mark_copy1_ParamLimits

0x8b87,	// (0x00049f4d) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x000503a1) slider_set_pane_g1_copy1

0x8b9b,	// (0x00049f61) slider_set_pane_g2_copy1

0x7a0a,	// (0x00048dd0) slider_set_pane_g3_copy1_ParamLimits

0x7a0a,	// (0x00048dd0) slider_set_pane_g3_copy1

0x7a1e,	// (0x00048de4) slider_set_pane_g4_copy1_ParamLimits

0x7a1e,	// (0x00048de4) slider_set_pane_g4_copy1

0x7a36,	// (0x00048dfc) slider_set_pane_g5_copy1_ParamLimits

0x7a36,	// (0x00048dfc) slider_set_pane_g5_copy1

0x7a0a,	// (0x00048dd0) slider_set_pane_g6_copy1_ParamLimits

0x7a0a,	// (0x00048dd0) slider_set_pane_g6_copy1

0x8ba3,	// (0x00049f69) slider_set_pane_g7_copy1_ParamLimits

0x8ba3,	// (0x00049f69) slider_set_pane_g7_copy1

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x000503aa) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x000503b3) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x000503c3) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x000503d3) slider_set_pane_cp_copy1

0xf01d,	// (0x000503e3) input_focus_pane_cp1_copy1

0xf026,	// (0x000503ec) list_set_text_pane_copy1

0xf02e,	// (0x000503f4) setting_text_pane_g1_copy1

0x5086,	// (0x0004644c) set_text_pane_t1_copy1

0xf01d,	// (0x000503e3) input_focus_pane_cp2_copy1

0xf02e,	// (0x000503f4) setting_code_pane_g1_copy1

0xf037,	// (0x000503fd) setting_code_pane_t1_copy1

0xb4f7,	// (0x0004c8bd) list_set_graphic_pane_copy1

0x08df,	// (0x00041ca5) bg_set_opt_pane_cp4_copy1

0x8e2b,	// (0x0004a1f1) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e2b,	// (0x0004a1f1) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0005040b) list_set_graphic_pane_g2_copy1

0x8e43,	// (0x0004a209) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e43,	// (0x0004a209) list_set_graphic_pane_t1_copy1

0xbfc1,	// (0x0004d387) rs_clock_indi_pane_g1

0xf04d,	// (0x00050413) rs_clock_indi_pane_t1

0xf05b,	// (0x00050421) rs_indi_pane

0xf063,	// (0x00050429) rs_indi_pane_g1

0xf06c,	// (0x00050432) rs_indi_pane_g2

0xed55,	// (0x0005011b) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0005127c) rs_indi_pane_g

0x9130,	// (0x0004a4f6) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0005043b) popup_fep_tooltip_window_t1

0xcc9e,	// (0x0004e064) popup_note2_window_g2_ParamLimits

0xcc9e,	// (0x0004e064) popup_note2_window_g2

0x0001,

0xfc43,	// (0x00051009) popup_note2_window_g_ParamLimits

0xfc43,	// (0x00051009) popup_note2_window_g

0xd1a6,	// (0x0004e56c) bg_popup_sub_pane_cp11_ParamLimits

0xd1b3,	// (0x0004e579) cell_ai3_links_pane_g1_ParamLimits

0xd1ca,	// (0x0004e590) cell_ai3_links_pane_t1

0x5086,	// (0x0004644c) set_text_pane_t1_copy1_ParamLimits

0x9032,	// (0x0004a3f8) cell_graphic_popup_pane_cp2_ParamLimits

0x9032,	// (0x0004a3f8) cell_graphic_popup_pane_cp2

0xf083,	// (0x00050449) cell_graphic_popup_pane_g1_cp2

0x0cd2,	// (0x00042098) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x00050451) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x00050459) cell_graphic_popup_pane_t2_cp2

0x0ce3,	// (0x000420a9) grid_highlight_pane_cp3_cp2

0x1291,	// (0x00042657) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0f7d,	// (0x00042343) main_tmo_pane_ParamLimits

0xd4e4,	// (0x0004e8aa) popup_tmo_big_image_note_window

0xe6b3,	// (0x0004fa79) cell_ai5_widget_list_pane

0xe6bb,	// (0x0004fa81) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x00050055) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0005006a) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x00050083) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x00050098) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x000500aa) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0005126a) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x000501d4) settings_container_pane_ParamLimits

0xf015,	// (0x000503db) indicator_popup_pane_cp5

0xf015,	// (0x000503db) indicator_popup_pane_cp6

0xb4f7,	// (0x0004c8bd) list_set_graphic_pane_copy1_ParamLimits

0x08cb,	// (0x00041c91) bg_popup_window_pane_cp23

0xf0a1,	// (0x00050467) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x00050473) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x00050483) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x00050493) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x00051283) popup_tmo_big_image_note_window_t

0xbfc1,	// (0x0004d387) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x000504a3) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x000504b1) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x000504b1) cell_ai5_widget_list_row_pane

0xf103,	// (0x000504c9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x000504c9) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x000504d6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x000504d6) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x00050501) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x00050501) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0005128a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0005128a) cell_ai5_widget_list_row_pane_t

0x08cb,	// (0x00041c91) main_fep_vtchi_ss_pane

0xf18b,	// (0x00050551) popup_fep_char_pre_window

0xf193,	// (0x00050559) popup_fep_ituss_window

0xf1bf,	// (0x00050585) popup_fep_vkbss_window

0x9457,	// (0x0004a81d) grid_vkbss_keypad_pane_ParamLimits

0x9457,	// (0x0004a81d) grid_vkbss_keypad_pane

0xf201,	// (0x000505c7) ituss_keypad_pane

0x8bc3,	// (0x00049f89) aid_vkbss_key_offset_ParamLimits

0x8bc3,	// (0x00049f89) aid_vkbss_key_offset

0x8bcf,	// (0x00049f95) cell_vkbss_key_pane_ParamLimits

0x8bcf,	// (0x00049f95) cell_vkbss_key_pane

0xf20d,	// (0x000505d3) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x000505d3) bg_cell_vkbss_key_g1

0xf219,	// (0x000505df) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x000505df) cell_vkbss_key_3p_pane

0xf24f,	// (0x00050615) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x00050615) cell_vkbss_key_g1

0xf285,	// (0x0005064b) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0005064b) cell_vkbss_key_t1

0x8c31,	// (0x00049ff7) cell_ituss_key_pane_ParamLimits

0x8c31,	// (0x00049ff7) cell_ituss_key_pane

0xf2e1,	// (0x000506a7) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x000506a7) bg_cell_ituss_key_g1

0xf2ed,	// (0x000506b3) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x000506b3) cell_ituss_key_pane_g1

0x8c42,	// (0x0004a008) cell_ituss_key_pane_g2_ParamLimits

0x8c42,	// (0x0004a008) cell_ituss_key_pane_g2

0x0005,

0xfecb,	// (0x00051291) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x00051291) cell_ituss_key_pane_g

0x8cc6,	// (0x0004a08c) cell_ituss_key_t1_ParamLimits

0x8cc6,	// (0x0004a08c) cell_ituss_key_t1

0x8d00,	// (0x0004a0c6) cell_ituss_key_t2_ParamLimits

0x8d00,	// (0x0004a0c6) cell_ituss_key_t2

0x8d32,	// (0x0004a0f8) cell_ituss_key_t3_ParamLimits

0x8d32,	// (0x0004a0f8) cell_ituss_key_t3

0x8d63,	// (0x0004a129) cell_ituss_key_t4_ParamLimits

0x8d63,	// (0x0004a129) cell_ituss_key_t4

0x0004,

0xfed8,	// (0x0005129e) cell_ituss_key_t_ParamLimits

0xfed8,	// (0x0005129e) cell_ituss_key_t

0xf313,	// (0x000506d9) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x000506e1) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x000506e9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee3,	// (0x000512a9) cell_vkbss_key_3p_pane_g

0x9130,	// (0x0004a4f6) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x000506f1) popup_fep_char_pre_window_t1

0xe63c,	// (0x0004fa02) main_ai5_sk_pane

0xed5e,	// (0x00050124) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x00050130) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x00050145) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x00050151) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x00051275) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0005015d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0f7d,	// (0x00042343) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x000506ff) main_ai5_sk_pane_g1

0x9e2b,	// (0x0004b1f1) popup_query_code_window_g1

0xf1a9,	// (0x0005056f) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0005059e) popup_fep_vtchi_icf_pane

0xf342,	// (0x00050708) bg_icf_pane

0xf342,	// (0x00050708) list_vkb_icf_pane

0xf34e,	// (0x00050714) bg_icf_pane_cp01

0xf361,	// (0x00050727) vtchi_icf_list_pane

0xf3c1,	// (0x00050787) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x00050787) list_vkb_icf_pane_t1

0xf3da,	// (0x000507a0) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x000507a0) vtchi_icf_list_pane_t1

0xf193,	// (0x00050559) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0005059e) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x000505c7) ituss_keypad_pane_ParamLimits

0x8bb9,	// (0x00049f7f) ituss_sks_pane

0xf342,	// (0x00050708) bg_icf_pane_ParamLimits

0xf163,	// (0x00050529) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x00050529) icf_edit_indi_pane

0xf342,	// (0x00050708) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x00050714) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x00050544) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x00050544) icf_edit_indi_pane_cp01

0xf361,	// (0x00050727) vtchi_query_pane

0xe4e2,	// (0x0004f8a8) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0004f8a8) icf_edit_indi_pane_g1

0xf44a,	// (0x00050810) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x00050810) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x000512d4) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x000512d4) icf_edit_indi_pane_g

0xf45e,	// (0x00050824) icf_edit_indi_pane_t1

0xf3f3,	// (0x000507b9) bg_input_focus_pane_cp042

0x0eb6,	// (0x0004227c) vtchi_button_pane

0xf3fc,	// (0x000507c2) vtchi_query_pane_t1

0xf40a,	// (0x000507d0) vtchi_query_pane_t2

0xf418,	// (0x000507de) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x000512c3) vtchi_query_pane_t

0x08cb,	// (0x00041c91) bg_button_pane_cp13

0xf426,	// (0x000507ec) vtchi_button_pane_g1

0x8da6,	// (0x0004a16c) ituss_sks_pane_g1

0x8db1,	// (0x0004a177) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x000512ca) ituss_sks_pane_g

0xf42e,	// (0x000507f4) ituss_sks_pane_t1

0xf43c,	// (0x00050802) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x000512cf) ituss_sks_pane_t

0xba95,	// (0x0004ce5b) indicator_nsta_pane_cp_g1

0xba9e,	// (0x0004ce64) indicator_nsta_pane_cp_g2

0xbaa6,	// (0x0004ce6c) indicator_nsta_pane_cp_g3

0xbaae,	// (0x0004ce74) indicator_nsta_pane_cp_g4

0xba9e,	// (0x0004ce64) indicator_nsta_pane_cp_g5

0xbaa6,	// (0x0004ce6c) indicator_nsta_pane_cp_g6

0x0005,

0xfa8d,	// (0x00050e53) indicator_nsta_pane_cp_g

0xe208,	// (0x0004f5ce) cell_graphic2_pane_t2_ParamLimits

0xe208,	// (0x0004f5ce) cell_graphic2_pane_t2

0x0001,

0xfd9a,	// (0x00051160) cell_graphic2_pane_t_ParamLimits

0xfd9a,	// (0x00051160) cell_graphic2_pane_t

0xe234,	// (0x0004f5fa) cell_graphic2_control_pane_t1

0x6c45,	// (0x0004800b) signal_pane_g3_ParamLimits

0x6c45,	// (0x0004800b) signal_pane_g3

0x6c54,	// (0x0004801a) signal_pane_g4_ParamLimits

0x6c54,	// (0x0004801a) signal_pane_g4

0xf14d,	// (0x00050513) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x00050513) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x000506c7) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x000506c7) cell_ituss_key_pane_t1

0x9a92,	// (0x0004ae58) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a92,	// (0x0004ae58) form_field_data_wide_pane_vc_t2

0x9aa6,	// (0x0004ae6c) form_field_data_wide_pane_vc_t3_ParamLimits

0x9aa6,	// (0x0004ae6c) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x00050baf) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x00050baf) form_field_data_wide_pane_vc_t

0xb732,	// (0x0004caf8) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb732,	// (0x0004caf8) form_field_slider_wide_pane_vc_t3

0xb808,	// (0x0004cbce) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb808,	// (0x0004cbce) form_field_popup_wide_pane_vc_t2

0xb81f,	// (0x0004cbe5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb81f,	// (0x0004cbe5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7c,	// (0x00050e42) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7c,	// (0x00050e42) form_field_popup_wide_pane_vc_t

0x897b,	// (0x00049d41) aid_fshwr2_btn_pane_ParamLimits

0x898b,	// (0x00049d51) aid_fshwr2_syb_pane_ParamLimits

0x899f,	// (0x00049d65) aid_fshwr2_txt_pane_ParamLimits

0x0f7d,	// (0x00042343) fshwr2_bg_pane_ParamLimits

0x89af,	// (0x00049d75) fshwr2_func_candi_pane_ParamLimits

0x89cf,	// (0x00049d95) fshwr2_hwr_syb_pane_ParamLimits

0x89e5,	// (0x00049dab) fshwr2_icf_pane_ParamLimits

0x7c0c,	// (0x00048fd2) list_double_graphic_pane_vc_g4_ParamLimits

0x7c0c,	// (0x00048fd2) list_double_graphic_pane_vc_g4

0x8c62,	// (0x0004a028) cell_ituss_key_pane_g3_ParamLimits

0x8c62,	// (0x0004a028) cell_ituss_key_pane_g3

0x8d94,	// (0x0004a15a) cell_ituss_key_t5_ParamLimits

0x8d94,	// (0x0004a15a) cell_ituss_key_t5

0xf1bf,	// (0x00050585) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0004fa0c) aid_cell_ai5_quarter

0xf45e,	// (0x00050824) icf_edit_indi_pane_t1_ParamLimits

0x0b16,	// (0x00041edc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0b16,	// (0x00041edc) aid_tch_indicator_popup_pane_cp2

0x0b29,	// (0x00041eef) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0b29,	// (0x00041eef) aid_tch_query_popup_data_pane_cp2

0x9dd3,	// (0x0004b199) aid_tch_query_popup_pane_ParamLimits

0x9dd3,	// (0x0004b199) aid_tch_query_popup_pane

0x9dd3,	// (0x0004b199) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9dd3,	// (0x0004b199) aid_tch_query_popup_data_pane_cp1

0x9457,	// (0x0004a81d) cell_fshwr2_syb_bg_pane_ParamLimits

0x8ae1,	// (0x00049ea7) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8af5,	// (0x00049ebb) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0005056f) popup_fep_vkb_icf_pane_ParamLimits

0x87cf,	// (0x00049b95) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0004fb41) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0004fb41) cell_ai5_widget_pane_g11

0xe787,	// (0x0004fb4d) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0004fb4d) cell_ai5_widget_pane_g12

0xe793,	// (0x0004fb59) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0004fb59) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0004fc89) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0004fc89) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0004fc9b) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0004fc9b) cell_ai5_widget_pane_t12

0x8c6e,	// (0x0004a034) cell_ituss_key_pane_g4_ParamLimits

0x8c6e,	// (0x0004a034) cell_ituss_key_pane_g4

0x8c8a,	// (0x0004a050) cell_ituss_key_pane_g5_ParamLimits

0x8c8a,	// (0x0004a050) cell_ituss_key_pane_g5

0x8ca6,	// (0x0004a06c) cell_ituss_key_pane_g6_ParamLimits

0x8ca6,	// (0x0004a06c) cell_ituss_key_pane_g6

0x998d,	// (0x0004ad53) bg_icf_pane_g1

0xf369,	// (0x0005072f) bg_icf_pane_g2

0xf375,	// (0x0005073b) bg_icf_pane_g3

0xf37f,	// (0x00050745) bg_icf_pane_g4

0xf38b,	// (0x00050751) bg_icf_pane_g5

0xf395,	// (0x0005075b) bg_icf_pane_g6

0xf3a1,	// (0x00050767) bg_icf_pane_g7

0xf3ab,	// (0x00050771) bg_icf_pane_g8

0xf3b7,	// (0x0005077d) bg_icf_pane_g9

0x0008,

0xfeea,	// (0x000512b0) bg_icf_pane_g

0xf1ee,	// (0x000505b4) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x000505b4) popup_hyb_candi_window

0x9a01,	// (0x0004adc7) bg_popup_sub_pane_cp01_ParamLimits

0x9a01,	// (0x0004adc7) bg_popup_sub_pane_cp01

0xf477,	// (0x0005083d) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0005083d) entry_hyb_candi_pane

0xf486,	// (0x0005084c) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0005084c) grid_hyb_candi_pane

0xf49b,	// (0x00050861) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x00050861) grid_hyb_phrase_pane

0xf4aa,	// (0x00050870) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x00050870) cell_hyb_candi_pane

0x0ebf,	// (0x00042285) cell_hyb_candi_scroll_pane

0x43f4,	// (0x000457ba) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0005088c) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0005089a) cell_hyb_phrase_pane

0x43f4,	// (0x000457ba) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000508a3) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x000508b1) entry_hyb_candi_pane_t1

0x9130,	// (0x0004a4f6) input_focus_pane_cp06

0xf4f9,	// (0x000508bf) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x000508c7) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000508cf) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000508d7) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x000508df) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x000508e7) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
