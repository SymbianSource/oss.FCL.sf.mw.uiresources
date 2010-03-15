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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00048973 };

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
0x9bd3,	// (0x00052546) Screen

0x9bdf,	// (0x00052552) application_window_ParamLimits

0x9bdf,	// (0x00052552) application_window

0x6bb3,	// (0x0004f526) screen_g1

0x9c17,	// (0x0005258a) area_bottom_pane_ParamLimits

0x9c17,	// (0x0005258a) area_bottom_pane

0xed18,	// (0x0005768b) area_top_pane_ParamLimits

0xed18,	// (0x0005768b) area_top_pane

0xedac,	// (0x0005771f) main_pane_ParamLimits

0xedac,	// (0x0005771f) main_pane

0x6bbd,	// (0x0004f530) misc_graphics

0xb8f9,	// (0x0005426c) battery_pane_ParamLimits

0xb8f9,	// (0x0005426c) battery_pane

0x31ab,	// (0x0004bb1e) bg_status_flat_pane_g8

0x31b3,	// (0x0004bb26) bg_status_flat_pane_g9

0x25b5,	// (0x0004af28) context_pane_ParamLimits

0x25b5,	// (0x0004af28) context_pane

0xba70,	// (0x000543e3) navi_pane_ParamLimits

0xba70,	// (0x000543e3) navi_pane

0xbafa,	// (0x0005446d) signal_pane_ParamLimits

0xbafa,	// (0x0005446d) signal_pane

0x0008,

0xf87f,	// (0x000581f2) bg_status_flat_pane_g

0xbb8a,	// (0x000544fd) status_pane_g1_ParamLimits

0xbb8a,	// (0x000544fd) status_pane_g1

0xbba0,	// (0x00054513) status_pane_g2_ParamLimits

0xbba0,	// (0x00054513) status_pane_g2

0x27f6,	// (0x0004b169) status_pane_g3_ParamLimits

0x27f6,	// (0x0004b169) status_pane_g3

0x0004,

0xf7ab,	// (0x0005811e) status_pane_g_ParamLimits

0xf7ab,	// (0x0005811e) status_pane_g

0xbbac,	// (0x0005451f) title_pane_ParamLimits

0xbbac,	// (0x0005451f) title_pane

0xc56f,	// (0x00054ee2) uni_indicator_pane_ParamLimits

0xc56f,	// (0x00054ee2) uni_indicator_pane

0x1dde,	// (0x0004a751) bg_list_pane_ParamLimits

0x1dde,	// (0x0004a751) bg_list_pane

0xb12b,	// (0x00053a9e) find_pane

0xb133,	// (0x00053aa6) listscroll_app_pane_ParamLimits

0xb133,	// (0x00053aa6) listscroll_app_pane

0x1e12,	// (0x0004a785) listscroll_form_pane

0xb13f,	// (0x00053ab2) listscroll_gen_pane_ParamLimits

0xb13f,	// (0x00053ab2) listscroll_gen_pane

0x1e12,	// (0x0004a785) listscroll_set_pane

0x3d5e,	// (0x0004c6d1) main_idle_act_pane

0x0552,	// (0x00048ec5) main_idle_trad_pane

0x0552,	// (0x00048ec5) main_list_empty_pane

0x1e40,	// (0x0004a7b3) main_midp_pane

0x1e4c,	// (0x0004a7bf) main_pane_g1_ParamLimits

0x1e4c,	// (0x0004a7bf) main_pane_g1

0xb153,	// (0x00053ac6) popup_ai_message_window_ParamLimits

0xb153,	// (0x00053ac6) popup_ai_message_window

0xb1f3,	// (0x00053b66) popup_fep_china_uni_window_ParamLimits

0xb1f3,	// (0x00053b66) popup_fep_china_uni_window

0x1f6e,	// (0x0004a8e1) popup_fep_japan_candidate_window_ParamLimits

0x1f6e,	// (0x0004a8e1) popup_fep_japan_candidate_window

0x1f98,	// (0x0004a90b) popup_fep_japan_predictive_window_ParamLimits

0x1f98,	// (0x0004a90b) popup_fep_japan_predictive_window

0xb253,	// (0x00053bc6) popup_find_window

0xb270,	// (0x00053be3) popup_grid_graphic_window_ParamLimits

0xb270,	// (0x00053be3) popup_grid_graphic_window

0x2009,	// (0x0004a97c) popup_large_graphic_colour_window

0xb314,	// (0x00053c87) popup_menu_window_ParamLimits

0xb314,	// (0x00053c87) popup_menu_window

0xb504,	// (0x00053e77) popup_note_image_window

0xb4c4,	// (0x00053e37) popup_note_wait_window_ParamLimits

0xb4c4,	// (0x00053e37) popup_note_wait_window

0xb51c,	// (0x00053e8f) popup_note_window_ParamLimits

0xb51c,	// (0x00053e8f) popup_note_window

0xb5ca,	// (0x00053f3d) popup_query_code_window_ParamLimits

0xb5ca,	// (0x00053f3d) popup_query_code_window

0x2275,	// (0x0004abe8) popup_query_data_code_window_ParamLimits

0x2275,	// (0x0004abe8) popup_query_data_code_window

0xb60a,	// (0x00053f7d) popup_query_data_window_ParamLimits

0xb60a,	// (0x00053f7d) popup_query_data_window

0xb69e,	// (0x00054011) popup_query_sat_info_window_ParamLimits

0xb69e,	// (0x00054011) popup_query_sat_info_window

0xb749,	// (0x000540bc) popup_snote_single_graphic_window_ParamLimits

0xb749,	// (0x000540bc) popup_snote_single_graphic_window

0xb749,	// (0x000540bc) popup_snote_single_text_window_ParamLimits

0xb749,	// (0x000540bc) popup_snote_single_text_window

0x2310,	// (0x0004ac83) popup_sub_window_general

0x2456,	// (0x0004adc9) popup_window_general_ParamLimits

0x2456,	// (0x0004adc9) popup_window_general

0x246f,	// (0x0004ade2) power_save_pane

0xaf99,	// (0x0005390c) control_pane_g1_ParamLimits

0xaf99,	// (0x0005390c) control_pane_g1

0xafc2,	// (0x00053935) control_pane_g2_ParamLimits

0xafc2,	// (0x00053935) control_pane_g2

0x1d8f,	// (0x0004a702) control_pane_g3_ParamLimits

0x1d8f,	// (0x0004a702) control_pane_g3

0x0007,

0xf793,	// (0x00058106) control_pane_g_ParamLimits

0xf793,	// (0x00058106) control_pane_g

0xb024,	// (0x00053997) control_pane_t1_ParamLimits

0xb024,	// (0x00053997) control_pane_t1

0xb082,	// (0x000539f5) control_pane_t2_ParamLimits

0xb082,	// (0x000539f5) control_pane_t2

0x0002,

0xf7a4,	// (0x00058117) control_pane_t_ParamLimits

0xf7a4,	// (0x00058117) control_pane_t

0x1cb0,	// (0x0004a623) navi_navi_volume_pane_cp1

0x1cb9,	// (0x0004a62c) status_small_icon_pane

0x1cc1,	// (0x0004a634) status_small_pane_g1_ParamLimits

0x1cc1,	// (0x0004a634) status_small_pane_g1

0x1cf5,	// (0x0004a668) status_small_pane_g2_ParamLimits

0x1cf5,	// (0x0004a668) status_small_pane_g2

0x1d01,	// (0x0004a674) status_small_pane_g3_ParamLimits

0x1d01,	// (0x0004a674) status_small_pane_g3

0x1d0d,	// (0x0004a680) status_small_pane_g4_ParamLimits

0x1d0d,	// (0x0004a680) status_small_pane_g4

0x1d19,	// (0x0004a68c) status_small_pane_g5_ParamLimits

0x1d19,	// (0x0004a68c) status_small_pane_g5

0x1d28,	// (0x0004a69b) status_small_pane_g6_ParamLimits

0x1d28,	// (0x0004a69b) status_small_pane_g6

0x0007,

0xf782,	// (0x000580f5) status_small_pane_g_ParamLimits

0xf782,	// (0x000580f5) status_small_pane_g

0x1d58,	// (0x0004a6cb) status_small_pane_t1

0x1d7b,	// (0x0004a6ee) status_small_wait_pane_ParamLimits

0x1d7b,	// (0x0004a6ee) status_small_wait_pane

0xad40,	// (0x000536b3) aid_levels_signal_ParamLimits

0xad40,	// (0x000536b3) aid_levels_signal

0xad58,	// (0x000536cb) signal_pane_g1_ParamLimits

0xad58,	// (0x000536cb) signal_pane_g1

0xad73,	// (0x000536e6) signal_pane_g2_ParamLimits

0xad73,	// (0x000536e6) signal_pane_g2

0x0003,

0xf713,	// (0x00058086) signal_pane_g_ParamLimits

0xf713,	// (0x00058086) signal_pane_g

0xe6d1,	// (0x00057044) context_pane_g1

0x9d94,	// (0x00052707) title_pane_g1

0x9dbf,	// (0x00052732) title_pane_t1

0x6bdf,	// (0x0004f552) title_pane_t2

0x6c05,	// (0x0004f578) title_pane_t3

0x0002,

0xf55d,	// (0x00057ed0) title_pane_t

0xc597,	// (0x00054f0a) aid_levels_battery_ParamLimits

0xc597,	// (0x00054f0a) aid_levels_battery

0xc5b3,	// (0x00054f26) battery_pane_g1_ParamLimits

0xc5b3,	// (0x00054f26) battery_pane_g1

0xc5d0,	// (0x00054f43) battery_pane_g2_ParamLimits

0xc5d0,	// (0x00054f43) battery_pane_g2

0x0001,

0xf7b6,	// (0x00058129) battery_pane_g_ParamLimits

0xf7b6,	// (0x00058129) battery_pane_g

0xc886,	// (0x000551f9) uni_indicator_pane_g1

0xc89b,	// (0x0005520e) uni_indicator_pane_g2

0xc8b0,	// (0x00055223) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0005829a) uni_indicator_pane_g

0xe97f,	// (0x000572f2) navi_icon_pane_ParamLimits

0xe97f,	// (0x000572f2) navi_icon_pane

0xe903,	// (0x00057276) navi_midp_pane

0xe99b,	// (0x0005730e) navi_navi_pane

0xe9a5,	// (0x00057318) navi_text_pane_ParamLimits

0xe9a5,	// (0x00057318) navi_text_pane

0x6bb3,	// (0x0004f526) status_small_wait_pane_g1

0xa30e,	// (0x00052c81) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00058295) status_small_wait_pane_g

0xc7ed,	// (0x00055160) navi_navi_icon_text_pane

0xc7f5,	// (0x00055168) navi_navi_pane_g1_ParamLimits

0xc7f5,	// (0x00055168) navi_navi_pane_g1

0xc807,	// (0x0005517a) navi_navi_pane_g2_ParamLimits

0xc807,	// (0x0005517a) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x00058263) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x00058263) navi_navi_pane_g

0x3834,	// (0x0004c1a7) navi_navi_tabs_pane

0xc819,	// (0x0005518c) navi_navi_text_pane

0xc7ed,	// (0x00055160) navi_navi_volume_pane

0xc7db,	// (0x0005514e) navi_text_pane_t1

0xc7cf,	// (0x00055142) navi_icon_pane_g1

0x372b,	// (0x0004c09e) navi_navi_text_pane_t1

0xbdd7,	// (0x0005474a) navi_navi_volume_pane_g1

0xbddf,	// (0x00054752) volume_small_pane

0xc717,	// (0x0005508a) navi_navi_icon_text_pane_g1

0xc71f,	// (0x00055092) navi_navi_icon_text_pane_t1

0xe99b,	// (0x0005730e) navi_tabs_2_long_pane

0xe99b,	// (0x0005730e) navi_tabs_2_pane

0xe99b,	// (0x0005730e) navi_tabs_3_long_pane

0xe99b,	// (0x0005730e) navi_tabs_3_pane

0xe99b,	// (0x0005730e) navi_tabs_4_pane

0xbdb7,	// (0x0005472a) tabs_2_active_pane_ParamLimits

0xbdb7,	// (0x0005472a) tabs_2_active_pane

0xbdc7,	// (0x0005473a) tabs_2_passive_pane_ParamLimits

0xbdc7,	// (0x0005473a) tabs_2_passive_pane

0xbd85,	// (0x000546f8) tabs_3_active_pane_ParamLimits

0xbd85,	// (0x000546f8) tabs_3_active_pane

0xbd95,	// (0x00054708) tabs_3_passive_pane_ParamLimits

0xbd95,	// (0x00054708) tabs_3_passive_pane

0xbda6,	// (0x00054719) tabs_3_passive_pane_cp_ParamLimits

0xbda6,	// (0x00054719) tabs_3_passive_pane_cp

0xbd41,	// (0x000546b4) tabs_4_active_pane_ParamLimits

0xbd41,	// (0x000546b4) tabs_4_active_pane

0xbd52,	// (0x000546c5) tabs_4_passive_pane_ParamLimits

0xbd52,	// (0x000546c5) tabs_4_passive_pane

0xbd63,	// (0x000546d6) tabs_4_passive_pane_cp_ParamLimits

0xbd63,	// (0x000546d6) tabs_4_passive_pane_cp

0xbd74,	// (0x000546e7) tabs_4_passive_pane_cp2_ParamLimits

0xbd74,	// (0x000546e7) tabs_4_passive_pane_cp2

0xbd1d,	// (0x00054690) tabs_2_long_active_pane_ParamLimits

0xbd1d,	// (0x00054690) tabs_2_long_active_pane

0xbd2f,	// (0x000546a2) tabs_2_long_passive_pane_ParamLimits

0xbd2f,	// (0x000546a2) tabs_2_long_passive_pane

0xbcd2,	// (0x00054645) tabs_3_long_active_pane_ParamLimits

0xbcd2,	// (0x00054645) tabs_3_long_active_pane

0xbceb,	// (0x0005465e) tabs_3_long_passive_pane_ParamLimits

0xbceb,	// (0x0005465e) tabs_3_long_passive_pane

0xbd04,	// (0x00054677) tabs_3_long_passive_pane_cp_ParamLimits

0xbd04,	// (0x00054677) tabs_3_long_passive_pane_cp

0x0a80,	// (0x000493f3) volume_small_pane_g1

0xbc81,	// (0x000545f4) volume_small_pane_g2

0xbc8a,	// (0x000545fd) volume_small_pane_g3

0xbc93,	// (0x00054606) volume_small_pane_g4

0xbc9c,	// (0x0005460f) volume_small_pane_g5

0xbca5,	// (0x00054618) volume_small_pane_g6

0xbcae,	// (0x00054621) volume_small_pane_g7

0xbcb7,	// (0x0005462a) volume_small_pane_g8

0xbcc0,	// (0x00054633) volume_small_pane_g9

0xbcc9,	// (0x0005463c) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0005822f) volume_small_pane_g

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp2_ParamLimits

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp2

0x9e4b,	// (0x000527be) tabs_3_active_pane_g1

0x9e53,	// (0x000527c6) tabs_3_active_pane_t1

0x6c17,	// (0x0004f58a) bg_passive_tab_pane_cp2_ParamLimits

0x6c17,	// (0x0004f58a) bg_passive_tab_pane_cp2

0x9e4b,	// (0x000527be) tabs_3_passive_pane_g1

0x9e53,	// (0x000527c6) tabs_3_passive_pane_t1

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp3_ParamLimits

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp3

0x9e65,	// (0x000527d8) tabs_4_active_pane_g1

0x9e6d,	// (0x000527e0) tabs_4_active_pane_t1

0x6c17,	// (0x0004f58a) bg_passive_tab_pane_cp3_ParamLimits

0x6c17,	// (0x0004f58a) bg_passive_tab_pane_cp3

0x9e65,	// (0x000527d8) tabs_4_1_passive_pane_g1

0x9e6d,	// (0x000527e0) tabs_4_1_passive_pane_t1

0x1e40,	// (0x0004a7b3) list_highlight_pane_cp2

0xc96e,	// (0x000552e1) list_set_pane_ParamLimits

0xc96e,	// (0x000552e1) list_set_pane

0xca36,	// (0x000553a9) main_pane_set_t1_ParamLimits

0xca36,	// (0x000553a9) main_pane_set_t1

0xca56,	// (0x000553c9) main_pane_set_t2_ParamLimits

0xca56,	// (0x000553c9) main_pane_set_t2

0xca6a,	// (0x000553dd) main_pane_set_t3_ParamLimits

0xca6a,	// (0x000553dd) main_pane_set_t3

0xca7e,	// (0x000553f1) main_pane_set_t4_ParamLimits

0xca7e,	// (0x000553f1) main_pane_set_t4

0x0003,

0xf98c,	// (0x000582ff) main_pane_set_t_ParamLimits

0xf98c,	// (0x000582ff) main_pane_set_t

0xca92,	// (0x00055405) setting_code_pane

0x3eb2,	// (0x0004c825) setting_slider_graphic_pane

0x3eb2,	// (0x0004c825) setting_slider_pane

0x3eb2,	// (0x0004c825) setting_text_pane

0x3eb2,	// (0x0004c825) setting_volume_pane

0xf31e,	// (0x00057c91) volume_set_pane

0x9e7f,	// (0x000527f2) bg_set_opt_pane_cp

0xf328,	// (0x00057c9b) setting_slider_pane_t1

0xf341,	// (0x00057cb4) setting_slider_pane_t2

0xf35b,	// (0x00057cce) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00057ed7) setting_slider_pane_t

0xf373,	// (0x00057ce6) slider_set_pane

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp2

0x9e8d,	// (0x00052800) setting_slider_graphic_pane_g1

0xf389,	// (0x00057cfc) setting_slider_graphic_pane_t1

0xf399,	// (0x00057d0c) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00057ede) setting_slider_graphic_pane_t

0xf3a9,	// (0x00057d1c) slider_set_pane_cp

0x6bbd,	// (0x0004f530) input_focus_pane_cp1

0x3d45,	// (0x0004c6b8) list_set_text_pane

0x6bb3,	// (0x0004f526) setting_text_pane_g1

0x6bbd,	// (0x0004f530) input_focus_pane_cp2

0x6bb3,	// (0x0004f526) setting_code_pane_g1

0x9e96,	// (0x00052809) setting_code_pane_t1

0xe5aa,	// (0x00056f1d) set_text_pane_t1_ParamLimits

0xe5aa,	// (0x00056f1d) set_text_pane_t1

0xa81a,	// (0x0005318d) set_opt_bg_pane_g1

0xa822,	// (0x00053195) set_opt_bg_pane_g2

0x3d1d,	// (0x0004c690) set_opt_bg_pane_g3

0xa832,	// (0x000531a5) set_opt_bg_pane_g4

0xa83a,	// (0x000531ad) set_opt_bg_pane_g5

0xa842,	// (0x000531b5) set_opt_bg_pane_g6

0x3d27,	// (0x0004c69a) set_opt_bg_pane_g7

0x3d31,	// (0x0004c6a4) set_opt_bg_pane_g8

0x3d3b,	// (0x0004c6ae) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x000582ec) set_opt_bg_pane_g

0x3d10,	// (0x0004c683) slider_set_pane_g1

0x0c64,	// (0x000495d7) slider_set_pane_g2

0x0006,

0xf96a,	// (0x000582dd) slider_set_pane_g

0x0bec,	// (0x0004955f) volume_set_pane_g1

0x0bf6,	// (0x00049569) volume_set_pane_g2

0x0c00,	// (0x00049573) volume_set_pane_g3

0x0c0a,	// (0x0004957d) volume_set_pane_g4

0x0c14,	// (0x00049587) volume_set_pane_g5

0x0c1e,	// (0x00049591) volume_set_pane_g6

0x0c28,	// (0x0004959b) volume_set_pane_g7

0x0c32,	// (0x000495a5) volume_set_pane_g8

0x0c3c,	// (0x000495af) volume_set_pane_g9

0x0c46,	// (0x000495b9) volume_set_pane_g10

0x0009,

0xf942,	// (0x000582b5) volume_set_pane_g

0x9ea4,	// (0x00052817) indicator_pane_ParamLimits

0x9ea4,	// (0x00052817) indicator_pane

0x9ed0,	// (0x00052843) main_idle_pane_g2_ParamLimits

0x9ed0,	// (0x00052843) main_idle_pane_g2

0x9f08,	// (0x0005287b) main_pane_idle_g1_ParamLimits

0x9f08,	// (0x0005287b) main_pane_idle_g1

0x9f36,	// (0x000528a9) popup_clock_digital_analogue_window_ParamLimits

0x9f36,	// (0x000528a9) popup_clock_digital_analogue_window

0x9f4d,	// (0x000528c0) soft_indicator_pane_ParamLimits

0x9f4d,	// (0x000528c0) soft_indicator_pane

0x9f69,	// (0x000528dc) wallpaper_pane_ParamLimits

0x9f69,	// (0x000528dc) wallpaper_pane

0x6bb3,	// (0x0004f526) wallpaper_pane_g1

0x9f83,	// (0x000528f6) indicator_pane_g1_ParamLimits

0x9f83,	// (0x000528f6) indicator_pane_g1

0x416c,	// (0x0004cadf) navi_navi_icon_text_pane_srt_g1

0x9fab,	// (0x0005291e) soft_indicator_pane_t1

0x9fc5,	// (0x00052938) aid_ps_area_pane

0x9fd6,	// (0x00052949) aid_ps_clock_pane

0x9fe4,	// (0x00052957) aid_ps_indicator_pane

0x9ff0,	// (0x00052963) indicator_ps_pane_ParamLimits

0x9ff0,	// (0x00052963) indicator_ps_pane

0x9fff,	// (0x00052972) power_save_pane_g1_ParamLimits

0x9fff,	// (0x00052972) power_save_pane_g1

0xa00b,	// (0x0005297e) power_save_pane_g2_ParamLimits

0xa00b,	// (0x0005297e) power_save_pane_g2

0xecf8,	// (0x0005766b) aid_navinavi_width_pane

0x9fc5,	// (0x00052938) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00057ee3) power_save_pane_g_ParamLimits

0xf570,	// (0x00057ee3) power_save_pane_g

0xa019,	// (0x0005298c) power_save_pane_t1_ParamLimits

0xa019,	// (0x0005298c) power_save_pane_t1

0x9fd6,	// (0x00052949) aid_ps_clock_pane_ParamLimits

0x9fe4,	// (0x00052957) aid_ps_indicator_pane_ParamLimits

0xa02b,	// (0x0005299e) power_save_pane_t4_ParamLimits

0xa02b,	// (0x0005299e) power_save_pane_t4

0x0001,

0xf575,	// (0x00057ee8) power_save_pane_t_ParamLimits

0xf575,	// (0x00057ee8) power_save_pane_t

0xa055,	// (0x000529c8) power_save_t3_ParamLimits

0xa055,	// (0x000529c8) power_save_t3

0xa040,	// (0x000529b3) power_save_t2_ParamLimits

0xa040,	// (0x000529b3) power_save_t2

0xa06a,	// (0x000529dd) indicator_ps_pane_g1

0xa073,	// (0x000529e6) ai_gene_pane_ParamLimits

0xa073,	// (0x000529e6) ai_gene_pane

0xa08a,	// (0x000529fd) ai_links_pane_ParamLimits

0xa08a,	// (0x000529fd) ai_links_pane

0xa0a2,	// (0x00052a15) indicator_pane_cp1_ParamLimits

0xa0a2,	// (0x00052a15) indicator_pane_cp1

0xa0b1,	// (0x00052a24) main_pane_idle_g1_cp_ParamLimits

0xa0b1,	// (0x00052a24) main_pane_idle_g1_cp

0xa0c9,	// (0x00052a3c) popup_ai_links_title_window

0xa0d2,	// (0x00052a45) soft_indicator_pane_cp1_ParamLimits

0xa0d2,	// (0x00052a45) soft_indicator_pane_cp1

0x3ae3,	// (0x0004c456) ai_links_pane_g1

0x3aec,	// (0x0004c45f) grid_ai_links_pane

0xc87d,	// (0x000551f0) ai_gene_pane_1

0x3ad1,	// (0x0004c444) ai_gene_pane_2

0x3ada,	// (0x0004c44d) list_highlight_pane_cp4

0xc859,	// (0x000551cc) cell_ai_link_pane_ParamLimits

0xc859,	// (0x000551cc) cell_ai_link_pane

0x3aa0,	// (0x0004c413) cell_ai_link_pane_g1

0xa30e,	// (0x00052c81) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x00058290) cell_ai_link_pane_g

0x6bbd,	// (0x0004f530) grid_highlight_cp2

0x6bbd,	// (0x0004f530) bg_popup_sub_pane_cp1

0xa0f4,	// (0x00052a67) popup_ai_links_title_window_t1

0x39ec,	// (0x0004c35f) ai_gene_pane_1_g1_ParamLimits

0x39ec,	// (0x0004c35f) ai_gene_pane_1_g1

0x39f8,	// (0x0004c36b) ai_gene_pane_1_g2_ParamLimits

0x39f8,	// (0x0004c36b) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00058286) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00058286) ai_gene_pane_1_g

0x3a05,	// (0x0004c378) ai_gene_pane_1_t1_ParamLimits

0x3a05,	// (0x0004c378) ai_gene_pane_1_t1

0x3a39,	// (0x0004c3ac) grid_ai_soft_ind_pane

0x39d7,	// (0x0004c34a) ai_gene_pane_2_t1_ParamLimits

0x39d7,	// (0x0004c34a) ai_gene_pane_2_t1

0xa103,	// (0x00052a76) main_pane_empty_t1_ParamLimits

0xa103,	// (0x00052a76) main_pane_empty_t1

0xa11b,	// (0x00052a8e) main_pane_empty_t2_ParamLimits

0xa11b,	// (0x00052a8e) main_pane_empty_t2

0xa130,	// (0x00052aa3) main_pane_empty_t3_ParamLimits

0xa130,	// (0x00052aa3) main_pane_empty_t3

0xa142,	// (0x00052ab5) main_pane_empty_t4_ParamLimits

0xa142,	// (0x00052ab5) main_pane_empty_t4

0xa154,	// (0x00052ac7) main_pane_empty_t5_ParamLimits

0xa154,	// (0x00052ac7) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00057eed) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00057eed) main_pane_empty_t

0xa86b,	// (0x000531de) bg_popup_window_pane_ParamLimits

0xa86b,	// (0x000531de) bg_popup_window_pane

0x3739,	// (0x0004c0ac) find_popup_pane_cp2_ParamLimits

0x3739,	// (0x0004c0ac) find_popup_pane_cp2

0x3745,	// (0x0004c0b8) heading_pane_ParamLimits

0x3745,	// (0x0004c0b8) heading_pane

0x6bbd,	// (0x0004f530) bg_popup_sub_pane

0xc73c,	// (0x000550af) bg_popup_window_pane_g1_ParamLimits

0xc73c,	// (0x000550af) bg_popup_window_pane_g1

0xc74b,	// (0x000550be) bg_popup_window_pane_g2_ParamLimits

0xc74b,	// (0x000550be) bg_popup_window_pane_g2

0xc757,	// (0x000550ca) bg_popup_window_pane_g3_ParamLimits

0xc757,	// (0x000550ca) bg_popup_window_pane_g3

0xc763,	// (0x000550d6) bg_popup_window_pane_g4_ParamLimits

0xc763,	// (0x000550d6) bg_popup_window_pane_g4

0xc772,	// (0x000550e5) bg_popup_window_pane_g5_ParamLimits

0xc772,	// (0x000550e5) bg_popup_window_pane_g5

0xc782,	// (0x000550f5) bg_popup_window_pane_g6_ParamLimits

0xc782,	// (0x000550f5) bg_popup_window_pane_g6

0xc78e,	// (0x00055101) bg_popup_window_pane_g7_ParamLimits

0xc78e,	// (0x00055101) bg_popup_window_pane_g7

0xc79d,	// (0x00055110) bg_popup_window_pane_g8_ParamLimits

0xc79d,	// (0x00055110) bg_popup_window_pane_g8

0xc7ac,	// (0x0005511f) bg_popup_window_pane_g9_ParamLimits

0xc7ac,	// (0x0005511f) bg_popup_window_pane_g9

0x371f,	// (0x0004c092) bg_popup_window_pane_g10_ParamLimits

0x371f,	// (0x0004c092) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0005824e) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0005824e) bg_popup_window_pane_g

0x3648,	// (0x0004bfbb) bg_popup_heading_pane_ParamLimits

0x3648,	// (0x0004bfbb) bg_popup_heading_pane

0x0cea,	// (0x0004965d) tabs_4_passive_pane_cp_srt_ParamLimits

0x0cea,	// (0x0004965d) tabs_4_passive_pane_cp_srt

0x0cfc,	// (0x0004966f) tabs_4_passive_pane_srt_ParamLimits

0x365c,	// (0x0004bfcf) heading_pane_g2

0x0cfc,	// (0x0004966f) tabs_4_passive_pane_srt

0x29f5,	// (0x0004b368) bg_passive_tab_pane_cp3_srt_ParamLimits

0x29f5,	// (0x0004b368) bg_passive_tab_pane_cp3_srt

0x3664,	// (0x0004bfd7) heading_pane_t1_ParamLimits

0x3664,	// (0x0004bfd7) heading_pane_t1

0x367b,	// (0x0004bfee) heading_pane_t2_ParamLimits

0x367b,	// (0x0004bfee) heading_pane_t2

0x0001,

0xf8d6,	// (0x00058249) heading_pane_t_ParamLimits

0xf8d6,	// (0x00058249) heading_pane_t

0x3173,	// (0x0004bae6) bg_popup_heading_pane_g1

0x3222,	// (0x0004bb95) bg_popup_heading_pane_g2

0x322c,	// (0x0004bb9f) bg_popup_heading_pane_g3

0x3236,	// (0x0004bba9) bg_popup_heading_pane_g4

0x3240,	// (0x0004bbb3) bg_popup_heading_pane_g5

0x324a,	// (0x0004bbbd) bg_popup_heading_pane_g6

0x3252,	// (0x0004bbc5) bg_popup_heading_pane_g7

0x325a,	// (0x0004bbcd) bg_popup_heading_pane_g8

0x3264,	// (0x0004bbd7) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00058205) bg_popup_heading_pane_g

0x2981,	// (0x0004b2f4) bg_popup_sub_pane_g1

0x2989,	// (0x0004b2fc) bg_popup_sub_pane_g2

0x2991,	// (0x0004b304) bg_popup_sub_pane_g3

0x2999,	// (0x0004b30c) bg_popup_sub_pane_g4

0x29a1,	// (0x0004b314) bg_popup_sub_pane_g5

0x29a9,	// (0x0004b31c) bg_popup_sub_pane_g6

0x29b1,	// (0x0004b324) bg_popup_sub_pane_g7

0x29b9,	// (0x0004b32c) bg_popup_sub_pane_g8

0x29c1,	// (0x0004b334) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x000581df) bg_popup_sub_pane_g

0x6c17,	// (0x0004f58a) bg_popup_window_pane_cp5_ParamLimits

0x6c17,	// (0x0004f58a) bg_popup_window_pane_cp5

0xa174,	// (0x00052ae7) popup_note_window_g1_ParamLimits

0xa174,	// (0x00052ae7) popup_note_window_g1

0xa180,	// (0x00052af3) popup_note_window_t1_ParamLimits

0xa180,	// (0x00052af3) popup_note_window_t1

0xa196,	// (0x00052b09) popup_note_window_t2_ParamLimits

0xa196,	// (0x00052b09) popup_note_window_t2

0xa1ac,	// (0x00052b1f) popup_note_window_t3_ParamLimits

0xa1ac,	// (0x00052b1f) popup_note_window_t3

0xa1c2,	// (0x00052b35) popup_note_window_t4_ParamLimits

0xa1c2,	// (0x00052b35) popup_note_window_t4

0xa1ea,	// (0x00052b5d) popup_note_window_t5_ParamLimits

0xa1ea,	// (0x00052b5d) popup_note_window_t5

0x0004,

0xf585,	// (0x00057ef8) popup_note_window_t_ParamLimits

0xf585,	// (0x00057ef8) popup_note_window_t

0xa20e,	// (0x00052b81) bg_popup_window_pane_cp6_ParamLimits

0xa20e,	// (0x00052b81) bg_popup_window_pane_cp6

0x30ef,	// (0x0004ba62) popup_note_image_window_g1_ParamLimits

0x30ef,	// (0x0004ba62) popup_note_image_window_g1

0x30fb,	// (0x0004ba6e) popup_note_image_window_g2_ParamLimits

0x30fb,	// (0x0004ba6e) popup_note_image_window_g2

0x0001,

0xf860,	// (0x000581d3) popup_note_image_window_g_ParamLimits

0xf860,	// (0x000581d3) popup_note_image_window_g

0x3114,	// (0x0004ba87) popup_note_image_window_t1_ParamLimits

0x3114,	// (0x0004ba87) popup_note_image_window_t1

0x312d,	// (0x0004baa0) popup_note_image_window_t2_ParamLimits

0x312d,	// (0x0004baa0) popup_note_image_window_t2

0x3146,	// (0x0004bab9) popup_note_image_window_t3_ParamLimits

0x3146,	// (0x0004bab9) popup_note_image_window_t3

0x0002,

0xf865,	// (0x000581d8) popup_note_image_window_t_ParamLimits

0xf865,	// (0x000581d8) popup_note_image_window_t

0x2faf,	// (0x0004b922) bg_popup_window_pane_cp7_ParamLimits

0x2faf,	// (0x0004b922) bg_popup_window_pane_cp7

0x2fdf,	// (0x0004b952) popup_note_wait_window_g1_ParamLimits

0x2fdf,	// (0x0004b952) popup_note_wait_window_g1

0x2feb,	// (0x0004b95e) popup_note_wait_window_g2_ParamLimits

0x2feb,	// (0x0004b95e) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x000581c1) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x000581c1) popup_note_wait_window_g

0x3003,	// (0x0004b976) popup_note_wait_window_t1_ParamLimits

0x3003,	// (0x0004b976) popup_note_wait_window_t1

0x302a,	// (0x0004b99d) popup_note_wait_window_t2_ParamLimits

0x302a,	// (0x0004b99d) popup_note_wait_window_t2

0x3048,	// (0x0004b9bb) popup_note_wait_window_t3_ParamLimits

0x3048,	// (0x0004b9bb) popup_note_wait_window_t3

0x305b,	// (0x0004b9ce) popup_note_wait_window_t4_ParamLimits

0x305b,	// (0x0004b9ce) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x000581c8) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x000581c8) popup_note_wait_window_t

0x3080,	// (0x0004b9f3) wait_bar_pane_ParamLimits

0x3080,	// (0x0004b9f3) wait_bar_pane

0x6bbd,	// (0x0004f530) wait_anim_pane

0x6bbd,	// (0x0004f530) wait_border_pane

0x6bb3,	// (0x0004f526) wait_anim_pane_g1

0x6bb3,	// (0x0004f526) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00058081) wait_anim_pane_g

0x2f53,	// (0x0004b8c6) wait_border_pane_g1

0x2f5e,	// (0x0004b8d1) wait_border_pane_g2

0x2f67,	// (0x0004b8da) wait_border_pane_g3

0x0002,

0xf847,	// (0x000581ba) wait_border_pane_g

0x2dbd,	// (0x0004b730) bg_popup_window_pane_cp16_ParamLimits

0x2dbd,	// (0x0004b730) bg_popup_window_pane_cp16

0x2ebd,	// (0x0004b830) indicator_popup_pane_cp4_ParamLimits

0x2ebd,	// (0x0004b830) indicator_popup_pane_cp4

0x2ed1,	// (0x0004b844) popup_query_data_window_t1_ParamLimits

0x2ed1,	// (0x0004b844) popup_query_data_window_t1

0x2ee3,	// (0x0004b856) popup_query_data_window_t2_ParamLimits

0x2ee3,	// (0x0004b856) popup_query_data_window_t2

0x2efc,	// (0x0004b86f) popup_query_data_window_t3_ParamLimits

0x2efc,	// (0x0004b86f) popup_query_data_window_t3

0x0002,

0xf840,	// (0x000581b3) popup_query_data_window_t_ParamLimits

0xf840,	// (0x000581b3) popup_query_data_window_t

0x2f16,	// (0x0004b889) query_popup_data_pane_ParamLimits

0x2f16,	// (0x0004b889) query_popup_data_pane

0x2f2a,	// (0x0004b89d) query_popup_data_pane_cp1_ParamLimits

0x2f2a,	// (0x0004b89d) query_popup_data_pane_cp1

0x2dbd,	// (0x0004b730) bg_popup_window_pane_cp10_ParamLimits

0x2dbd,	// (0x0004b730) bg_popup_window_pane_cp10

0x2def,	// (0x0004b762) indicator_popup_pane_ParamLimits

0x2def,	// (0x0004b762) indicator_popup_pane

0x2e11,	// (0x0004b784) popup_query_code_window_t1_ParamLimits

0x2e11,	// (0x0004b784) popup_query_code_window_t1

0x2e2b,	// (0x0004b79e) popup_query_code_window_t2_ParamLimits

0x2e2b,	// (0x0004b79e) popup_query_code_window_t2

0x2e74,	// (0x0004b7e7) popup_query_code_window_t3_ParamLimits

0x2e74,	// (0x0004b7e7) popup_query_code_window_t3

0x0002,

0xf839,	// (0x000581ac) popup_query_code_window_t_ParamLimits

0xf839,	// (0x000581ac) popup_query_code_window_t

0x2ea3,	// (0x0004b816) query_popup_pane_ParamLimits

0x2ea3,	// (0x0004b816) query_popup_pane

0xa20e,	// (0x00052b81) bg_popup_window_pane_cp15_ParamLimits

0xa20e,	// (0x00052b81) bg_popup_window_pane_cp15

0xa22e,	// (0x00052ba1) indicator_popup_pane_cp1_ParamLimits

0xa22e,	// (0x00052ba1) indicator_popup_pane_cp1

0xa241,	// (0x00052bb4) indicator_popup_pane_cp2_ParamLimits

0xa241,	// (0x00052bb4) indicator_popup_pane_cp2

0xa25c,	// (0x00052bcf) popup_query_data_code_window_g1_ParamLimits

0xa25c,	// (0x00052bcf) popup_query_data_code_window_g1

0xa26f,	// (0x00052be2) popup_query_data_code_window_t1_ParamLimits

0xa26f,	// (0x00052be2) popup_query_data_code_window_t1

0xa281,	// (0x00052bf4) popup_query_data_code_window_t2_ParamLimits

0xa281,	// (0x00052bf4) popup_query_data_code_window_t2

0xa293,	// (0x00052c06) popup_query_data_code_window_t3_ParamLimits

0xa293,	// (0x00052c06) popup_query_data_code_window_t3

0xa2a9,	// (0x00052c1c) popup_query_data_code_window_t4_ParamLimits

0xa2a9,	// (0x00052c1c) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00057f03) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00057f03) popup_query_data_code_window_t

0xe94f,	// (0x000572c2) list_single_midp_graphic_pane_g3

0xa2c3,	// (0x00052c36) query_popup_data_pane_cp2_ParamLimits

0xa2d6,	// (0x00052c49) query_popup_pane_cp2_ParamLimits

0xa2d6,	// (0x00052c49) query_popup_pane_cp2

0x6bbd,	// (0x0004f530) bg_popup_window_pane_cp11

0x2db5,	// (0x0004b728) heading_pane_cp5

0xa3c6,	// (0x00052d39) listscroll_popup_info_pane

0x6bbd,	// (0x0004f530) input_focus_pane_cp3

0xa2f1,	// (0x00052c64) query_popup_pane_t1

0xa2ff,	// (0x00052c72) list_popup_info_pane_ParamLimits

0xa2ff,	// (0x00052c72) list_popup_info_pane

0xa30e,	// (0x00052c81) listscroll_popup_info_pane_g1

0xa316,	// (0x00052c89) scroll_pane_cp7

0xa320,	// (0x00052c93) popup_info_list_pane_t1_ParamLimits

0xa320,	// (0x00052c93) popup_info_list_pane_t1

0xa33a,	// (0x00052cad) popup_info_list_pane_t2_ParamLimits

0xa33a,	// (0x00052cad) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00057f0c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00057f0c) popup_info_list_pane_t

0x6bbd,	// (0x0004f530) bg_popup_window_pane_cp12

0x4186,	// (0x0004caf9) find_popup_pane

0x9e7f,	// (0x000527f2) bg_popup_window_pane_cp3

0xa354,	// (0x00052cc7) heading_pane_cp3

0xa360,	// (0x00052cd3) listscroll_popup_graphic_pane

0x6bbd,	// (0x0004f530) bg_popup_window_pane_cp4

0xa3bc,	// (0x00052d2f) heading_pane_cp4

0xa3c6,	// (0x00052d39) listscroll_popup_colour_pane

0xa3ce,	// (0x00052d41) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa3ce,	// (0x00052d41) cell_large_graphic_colour_none_popup_pane

0xa3e2,	// (0x00052d55) grid_large_graphic_colour_popup_pane_ParamLimits

0xa3e2,	// (0x00052d55) grid_large_graphic_colour_popup_pane

0xa406,	// (0x00052d79) listscroll_popup_colour_pane_g1_ParamLimits

0xa406,	// (0x00052d79) listscroll_popup_colour_pane_g1

0xa41d,	// (0x00052d90) listscroll_popup_colour_pane_g2_ParamLimits

0xa41d,	// (0x00052d90) listscroll_popup_colour_pane_g2

0xa434,	// (0x00052da7) listscroll_popup_colour_pane_g3_ParamLimits

0xa434,	// (0x00052da7) listscroll_popup_colour_pane_g3

0xa444,	// (0x00052db7) listscroll_popup_colour_pane_g4_ParamLimits

0xa444,	// (0x00052db7) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00057f11) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00057f11) listscroll_popup_colour_pane_g

0xa454,	// (0x00052dc7) scroll_pane_cp6_ParamLimits

0xa454,	// (0x00052dc7) scroll_pane_cp6

0xa466,	// (0x00052dd9) cell_large_graphic_colour_popup_pane_ParamLimits

0xa466,	// (0x00052dd9) cell_large_graphic_colour_popup_pane

0xa487,	// (0x00052dfa) cell_large_graphic_colour_none_popup_pane_t1

0x6bbd,	// (0x0004f530) grid_highlight_pane_cp5

0xa496,	// (0x00052e09) cell_large_graphic_colour_popup_pane_g1

0xa49e,	// (0x00052e11) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00057f1a) cell_large_graphic_colour_popup_pane_g

0xa4a6,	// (0x00052e19) cell_large_graphic_colour_popup_pane_g2_copy1

0xa4af,	// (0x00052e22) grid_highlight_pane_cp4

0xa4b7,	// (0x00052e2a) bg_popup_window_pane_cp8_ParamLimits

0xa4b7,	// (0x00052e2a) bg_popup_window_pane_cp8

0xa4d2,	// (0x00052e45) popup_snote_single_text_window_g1_ParamLimits

0xa4d2,	// (0x00052e45) popup_snote_single_text_window_g1

0xa4e4,	// (0x00052e57) popup_snote_single_text_window_t1_ParamLimits

0xa4e4,	// (0x00052e57) popup_snote_single_text_window_t1

0xa4f7,	// (0x00052e6a) popup_snote_single_text_window_t2_ParamLimits

0xa4f7,	// (0x00052e6a) popup_snote_single_text_window_t2

0xa50a,	// (0x00052e7d) popup_snote_single_text_window_t3_ParamLimits

0xa50a,	// (0x00052e7d) popup_snote_single_text_window_t3

0xa543,	// (0x00052eb6) popup_snote_single_text_window_t4_ParamLimits

0xa543,	// (0x00052eb6) popup_snote_single_text_window_t4

0xa577,	// (0x00052eea) popup_snote_single_text_window_t5_ParamLimits

0xa577,	// (0x00052eea) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00057f1f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00057f1f) popup_snote_single_text_window_t

0xa5a6,	// (0x00052f19) bg_popup_window_pane_cp9_ParamLimits

0xa5a6,	// (0x00052f19) bg_popup_window_pane_cp9

0xa4d2,	// (0x00052e45) popup_snote_single_graphic_window_g1_ParamLimits

0xa4d2,	// (0x00052e45) popup_snote_single_graphic_window_g1

0xa5b4,	// (0x00052f27) popup_snote_single_graphic_window_g2_ParamLimits

0xa5b4,	// (0x00052f27) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00057f2a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00057f2a) popup_snote_single_graphic_window_g

0xa5c0,	// (0x00052f33) popup_snote_single_graphic_window_t1_ParamLimits

0xa5c0,	// (0x00052f33) popup_snote_single_graphic_window_t1

0xa5d3,	// (0x00052f46) popup_snote_single_graphic_window_t2_ParamLimits

0xa5d3,	// (0x00052f46) popup_snote_single_graphic_window_t2

0xa5e6,	// (0x00052f59) popup_snote_single_graphic_window_t3_ParamLimits

0xa5e6,	// (0x00052f59) popup_snote_single_graphic_window_t3

0xa61f,	// (0x00052f92) popup_snote_single_graphic_window_t4_ParamLimits

0xa61f,	// (0x00052f92) popup_snote_single_graphic_window_t4

0xa653,	// (0x00052fc6) popup_snote_single_graphic_window_t5_ParamLimits

0xa653,	// (0x00052fc6) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00057f2f) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00057f2f) popup_snote_single_graphic_window_t

0x40c4,	// (0x0004ca37) grid_graphic_popup_pane_ParamLimits

0x40c4,	// (0x0004ca37) grid_graphic_popup_pane

0x40f2,	// (0x0004ca65) listscroll_popup_graphic_pane_g1_ParamLimits

0x40f2,	// (0x0004ca65) listscroll_popup_graphic_pane_g1

0xcb97,	// (0x0005550a) listscroll_popup_graphic_pane_g2_ParamLimits

0xcb97,	// (0x0005550a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x00058329) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x00058329) listscroll_popup_graphic_pane_g

0x411a,	// (0x0004ca8d) scroll_pane_cp5

0xcb56,	// (0x000554c9) cell_graphic_popup_pane_ParamLimits

0xcb56,	// (0x000554c9) cell_graphic_popup_pane

0x404d,	// (0x0004c9c0) cell_graphic_popup_pane_g1

0x4055,	// (0x0004c9c8) cell_graphic_popup_pane_g2

0xa4a6,	// (0x00052e19) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x00058322) cell_graphic_popup_pane_g

0x405e,	// (0x0004c9d1) cell_graphic_popup_pane_t2

0xa4af,	// (0x00052e22) grid_highlight_pane_cp3

0xa694,	// (0x00053007) list_gen_pane_ParamLimits

0xa694,	// (0x00053007) list_gen_pane

0xa6c6,	// (0x00053039) scroll_pane

0xcb0d,	// (0x00055480) bg_list_pane_g1_ParamLimits

0xcb0d,	// (0x00055480) bg_list_pane_g1

0x3fc2,	// (0x0004c935) bg_list_pane_g2_ParamLimits

0x3fc2,	// (0x0004c935) bg_list_pane_g2

0x3fd7,	// (0x0004c94a) bg_list_pane_g3_ParamLimits

0x3fd7,	// (0x0004c94a) bg_list_pane_g3

0x3feb,	// (0x0004c95e) bg_list_pane_g4_ParamLimits

0x3feb,	// (0x0004c95e) bg_list_pane_g4

0xcb2a,	// (0x0005549d) bg_list_pane_g5_ParamLimits

0xcb2a,	// (0x0005549d) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x00058317) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x00058317) bg_list_pane_g

0xcad0,	// (0x00055443) list_double2_graphic_large_graphic_pane_ParamLimits

0xcad0,	// (0x00055443) list_double2_graphic_large_graphic_pane

0xcad0,	// (0x00055443) list_double2_graphic_pane_ParamLimits

0xcad0,	// (0x00055443) list_double2_graphic_pane

0xcad0,	// (0x00055443) list_double2_large_graphic_pane_ParamLimits

0xcad0,	// (0x00055443) list_double2_large_graphic_pane

0xcad0,	// (0x00055443) list_double2_pane_ParamLimits

0xcad0,	// (0x00055443) list_double2_pane

0xcad0,	// (0x00055443) list_double_graphic_heading_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_graphic_heading_pane

0xcad0,	// (0x00055443) list_double_graphic_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_graphic_pane

0xcad0,	// (0x00055443) list_double_heading_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_heading_pane

0xcad0,	// (0x00055443) list_double_large_graphic_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_large_graphic_pane

0xcad0,	// (0x00055443) list_double_number_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_number_pane

0xcad0,	// (0x00055443) list_double_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_pane

0xcad0,	// (0x00055443) list_double_time_pane_ParamLimits

0xcad0,	// (0x00055443) list_double_time_pane

0xcad0,	// (0x00055443) list_setting_number_pane_ParamLimits

0xcad0,	// (0x00055443) list_setting_number_pane

0xcad0,	// (0x00055443) list_setting_pane_ParamLimits

0xcad0,	// (0x00055443) list_setting_pane

0xcae4,	// (0x00055457) list_single_2graphic_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_2graphic_pane

0xcae4,	// (0x00055457) list_single_graphic_heading_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_graphic_heading_pane

0xcae4,	// (0x00055457) list_single_graphic_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_graphic_pane

0xcae4,	// (0x00055457) list_single_heading_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_heading_pane

0xcae4,	// (0x00055457) list_single_large_graphic_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_large_graphic_pane

0xcae4,	// (0x00055457) list_single_number_heading_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_number_heading_pane

0xcae4,	// (0x00055457) list_single_number_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_number_pane

0xcae4,	// (0x00055457) list_single_pane_ParamLimits

0xcae4,	// (0x00055457) list_single_pane

0x6bbd,	// (0x0004f530) list_highlight_pane_cp1

0x04c3,	// (0x00048e36) list_single_pane_g1_ParamLimits

0x04c3,	// (0x00048e36) list_single_pane_g1

0x0957,	// (0x000492ca) list_single_pane_g2_ParamLimits

0x0957,	// (0x000492ca) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_single_pane_g

0xee8f,	// (0x00057802) list_single_pane_t1_ParamLimits

0xee8f,	// (0x00057802) list_single_pane_t1

0x04c3,	// (0x00048e36) list_single_number_pane_g1_ParamLimits

0x04c3,	// (0x00048e36) list_single_number_pane_g1

0x0957,	// (0x000492ca) list_single_number_pane_g2_ParamLimits

0x0957,	// (0x000492ca) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_single_number_pane_g

0xeaca,	// (0x0005743d) list_single_number_pane_t1_ParamLimits

0xeaca,	// (0x0005743d) list_single_number_pane_t1

0x9a2f,	// (0x000523a2) list_single_number_pane_t2_ParamLimits

0x9a2f,	// (0x000523a2) list_single_number_pane_t2

0x0001,

0xf965,	// (0x000582d8) list_single_number_pane_t_ParamLimits

0xf965,	// (0x000582d8) list_single_number_pane_t

0x93f2,	// (0x00051d65) list_single_graphic_pane_g1_ParamLimits

0x93f2,	// (0x00051d65) list_single_graphic_pane_g1

0x04c3,	// (0x00048e36) list_single_graphic_pane_g2_ParamLimits

0x04c3,	// (0x00048e36) list_single_graphic_pane_g2

0x0957,	// (0x000492ca) list_single_graphic_pane_g3_ParamLimits

0x0957,	// (0x000492ca) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00057f3a) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00057f3a) list_single_graphic_pane_g

0x93fe,	// (0x00051d71) list_single_graphic_pane_t1_ParamLimits

0x93fe,	// (0x00051d71) list_single_graphic_pane_t1

0x9414,	// (0x00051d87) list_single_heading_pane_g1_ParamLimits

0x9414,	// (0x00051d87) list_single_heading_pane_g1

0x0957,	// (0x000492ca) list_single_heading_pane_g2_ParamLimits

0x0957,	// (0x000492ca) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00057f41) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00057f41) list_single_heading_pane_g

0x9427,	// (0x00051d9a) list_single_heading_pane_t1_ParamLimits

0x9427,	// (0x00051d9a) list_single_heading_pane_t1

0xa6fa,	// (0x0005306d) list_single_heading_pane_t2_ParamLimits

0xa6fa,	// (0x0005306d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00057f46) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00057f46) list_single_heading_pane_t

0x04c3,	// (0x00048e36) list_single_number_heading_pane_g1_ParamLimits

0x04c3,	// (0x00048e36) list_single_number_heading_pane_g1

0x0957,	// (0x000492ca) list_single_number_heading_pane_g2_ParamLimits

0x0957,	// (0x000492ca) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_single_number_heading_pane_g

0xee67,	// (0x000577da) list_single_number_heading_pane_t1_ParamLimits

0xee67,	// (0x000577da) list_single_number_heading_pane_t1

0x943d,	// (0x00051db0) list_single_number_heading_pane_t2_ParamLimits

0x943d,	// (0x00051db0) list_single_number_heading_pane_t2

0xee7d,	// (0x000577f0) list_single_number_heading_pane_t3_ParamLimits

0xee7d,	// (0x000577f0) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00057f50) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00057f50) list_single_number_heading_pane_t

0x944f,	// (0x00051dc2) list_single_graphic_heading_pane_g1_ParamLimits

0x944f,	// (0x00051dc2) list_single_graphic_heading_pane_g1

0xa70c,	// (0x0005307f) list_single_graphic_heading_pane_g4_ParamLimits

0xa70c,	// (0x0005307f) list_single_graphic_heading_pane_g4

0x0957,	// (0x000492ca) list_single_graphic_heading_pane_g5_ParamLimits

0x0957,	// (0x000492ca) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00057f57) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00057f57) list_single_graphic_heading_pane_g

0xee67,	// (0x000577da) list_single_graphic_heading_pane_t1_ParamLimits

0xee67,	// (0x000577da) list_single_graphic_heading_pane_t1

0x9467,	// (0x00051dda) list_single_graphic_heading_pane_t2_ParamLimits

0x9467,	// (0x00051dda) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00057f5e) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00057f5e) list_single_graphic_heading_pane_t

0x0da7,	// (0x0004971a) list_single_large_graphic_pane_g1_ParamLimits

0x0da7,	// (0x0004971a) list_single_large_graphic_pane_g1

0x04c3,	// (0x00048e36) list_single_large_graphic_pane_g2_ParamLimits

0x04c3,	// (0x00048e36) list_single_large_graphic_pane_g2

0x0957,	// (0x000492ca) list_single_large_graphic_pane_g3_ParamLimits

0x0957,	// (0x000492ca) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00057f63) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00057f63) list_single_large_graphic_pane_g

0x2f5e,	// (0x0004b8d1) wait_border_pane_g2_copy1

0xa71d,	// (0x00053090) list_single_large_graphic_pane_g4_cp2

0xee67,	// (0x000577da) list_single_large_graphic_pane_t1_ParamLimits

0xee67,	// (0x000577da) list_single_large_graphic_pane_t1

0x562b,	// (0x0004df9e) list_double_pane_g1_ParamLimits

0x562b,	// (0x0004df9e) list_double_pane_g1

0xa725,	// (0x00053098) list_double_pane_g2_ParamLimits

0xa725,	// (0x00053098) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00057f6a) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00057f6a) list_double_pane_g

0x947f,	// (0x00051df2) list_double_pane_t1_ParamLimits

0x947f,	// (0x00051df2) list_double_pane_t1

0x9495,	// (0x00051e08) list_double_pane_t2_ParamLimits

0x9495,	// (0x00051e08) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00057f6f) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00057f6f) list_double_pane_t

0x94a7,	// (0x00051e1a) list_double2_pane_g1_ParamLimits

0x94a7,	// (0x00051e1a) list_double2_pane_g1

0x94b8,	// (0x00051e2b) list_double2_pane_g2_ParamLimits

0x94b8,	// (0x00051e2b) list_double2_pane_g2

0x0001,

0xf601,	// (0x00057f74) list_double2_pane_g_ParamLimits

0xf601,	// (0x00057f74) list_double2_pane_g

0x94c4,	// (0x00051e37) list_double2_pane_t1_ParamLimits

0x94c4,	// (0x00051e37) list_double2_pane_t1

0x94da,	// (0x00051e4d) list_double2_pane_t2_ParamLimits

0x94da,	// (0x00051e4d) list_double2_pane_t2

0x0001,

0xf606,	// (0x00057f79) list_double2_pane_t_ParamLimits

0xf606,	// (0x00057f79) list_double2_pane_t

0x562b,	// (0x0004df9e) list_double_number_pane_g1_ParamLimits

0x562b,	// (0x0004df9e) list_double_number_pane_g1

0xa725,	// (0x00053098) list_double_number_pane_g2_ParamLimits

0xa725,	// (0x00053098) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00057f6a) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00057f6a) list_double_number_pane_g

0x94ec,	// (0x00051e5f) list_double_number_pane_t1_ParamLimits

0x94ec,	// (0x00051e5f) list_double_number_pane_t1

0x94fe,	// (0x00051e71) list_double_number_pane_t2_ParamLimits

0x94fe,	// (0x00051e71) list_double_number_pane_t2

0x9514,	// (0x00051e87) list_double_number_pane_t3_ParamLimits

0x9514,	// (0x00051e87) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00057f7e) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00057f7e) list_double_number_pane_t

0x9526,	// (0x00051e99) list_double_graphic_pane_g1_ParamLimits

0x9526,	// (0x00051e99) list_double_graphic_pane_g1

0x9532,	// (0x00051ea5) list_double_graphic_pane_g2_ParamLimits

0x9532,	// (0x00051ea5) list_double_graphic_pane_g2

0x9541,	// (0x00051eb4) list_double_graphic_pane_g3_ParamLimits

0x9541,	// (0x00051eb4) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00057f85) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00057f85) list_double_graphic_pane_g

0x9559,	// (0x00051ecc) list_double_graphic_pane_t1_ParamLimits

0x9559,	// (0x00051ecc) list_double_graphic_pane_t1

0x956f,	// (0x00051ee2) list_double_graphic_pane_t2_ParamLimits

0x956f,	// (0x00051ee2) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00057f8e) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00057f8e) list_double_graphic_pane_t

0x9581,	// (0x00051ef4) list_double2_graphic_pane_g1_ParamLimits

0x9581,	// (0x00051ef4) list_double2_graphic_pane_g1

0xa731,	// (0x000530a4) list_double2_graphic_pane_g2_ParamLimits

0xa731,	// (0x000530a4) list_double2_graphic_pane_g2

0xa73d,	// (0x000530b0) list_double2_graphic_pane_g3_ParamLimits

0xa73d,	// (0x000530b0) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00057f93) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00057f93) list_double2_graphic_pane_g

0x958d,	// (0x00051f00) list_double2_graphic_pane_t1_ParamLimits

0x958d,	// (0x00051f00) list_double2_graphic_pane_t1

0x95a3,	// (0x00051f16) list_double2_graphic_pane_t2_ParamLimits

0x95a3,	// (0x00051f16) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00057f9a) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00057f9a) list_double2_graphic_pane_t

0x95b5,	// (0x00051f28) list_double_large_graphic_pane_g1_ParamLimits

0x95b5,	// (0x00051f28) list_double_large_graphic_pane_g1

0x95e0,	// (0x00051f53) list_double_large_graphic_pane_g2_ParamLimits

0x95e0,	// (0x00051f53) list_double_large_graphic_pane_g2

0xa725,	// (0x00053098) list_double_large_graphic_pane_g3_ParamLimits

0xa725,	// (0x00053098) list_double_large_graphic_pane_g3

0x95f6,	// (0x00051f69) list_double_large_graphic_pane_g4_ParamLimits

0x95f6,	// (0x00051f69) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00057f9f) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00057f9f) list_double_large_graphic_pane_g

0x9609,	// (0x00051f7c) list_double_large_graphic_pane_t1_ParamLimits

0x9609,	// (0x00051f7c) list_double_large_graphic_pane_t1

0x9622,	// (0x00051f95) list_double_large_graphic_pane_t2_ParamLimits

0x9622,	// (0x00051f95) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00057faa) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00057faa) list_double_large_graphic_pane_t

0xa749,	// (0x000530bc) list_double2_large_graphic_pane_g1_ParamLimits

0xa749,	// (0x000530bc) list_double2_large_graphic_pane_g1

0xa755,	// (0x000530c8) list_double2_large_graphic_pane_g2_ParamLimits

0xa755,	// (0x000530c8) list_double2_large_graphic_pane_g2

0xa73d,	// (0x000530b0) list_double2_large_graphic_pane_g3_ParamLimits

0xa73d,	// (0x000530b0) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00057faf) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00057faf) list_double2_large_graphic_pane_g

0x9634,	// (0x00051fa7) list_double2_large_graphic_pane_t1_ParamLimits

0x9634,	// (0x00051fa7) list_double2_large_graphic_pane_t1

0x964a,	// (0x00051fbd) list_double2_large_graphic_pane_t2_ParamLimits

0x964a,	// (0x00051fbd) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00057fb6) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00057fb6) list_double2_large_graphic_pane_t

0x965c,	// (0x00051fcf) list_double_heading_pane_g1_ParamLimits

0x965c,	// (0x00051fcf) list_double_heading_pane_g1

0x966d,	// (0x00051fe0) list_double_heading_pane_g2_ParamLimits

0x966d,	// (0x00051fe0) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00057fbb) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00057fbb) list_double_heading_pane_g

0x9679,	// (0x00051fec) list_double_heading_pane_t1_ParamLimits

0x9679,	// (0x00051fec) list_double_heading_pane_t1

0x968f,	// (0x00052002) list_double_heading_pane_t2_ParamLimits

0x968f,	// (0x00052002) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00057fc0) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00057fc0) list_double_heading_pane_t

0xe5c3,	// (0x00056f36) list_double_graphic_heading_pane_g1_ParamLimits

0xe5c3,	// (0x00056f36) list_double_graphic_heading_pane_g1

0x965c,	// (0x00051fcf) list_double_graphic_heading_pane_g2_ParamLimits

0x965c,	// (0x00051fcf) list_double_graphic_heading_pane_g2

0x966d,	// (0x00051fe0) list_double_graphic_heading_pane_g3_ParamLimits

0x966d,	// (0x00051fe0) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00057fc5) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00057fc5) list_double_graphic_heading_pane_g

0x96a1,	// (0x00052014) list_double_graphic_heading_pane_t1_ParamLimits

0x96a1,	// (0x00052014) list_double_graphic_heading_pane_t1

0x96b7,	// (0x0005202a) list_double_graphic_heading_pane_t2_ParamLimits

0x96b7,	// (0x0005202a) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00057fcc) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00057fcc) list_double_graphic_heading_pane_t

0x96c9,	// (0x0005203c) list_double_time_pane_g1_ParamLimits

0x96c9,	// (0x0005203c) list_double_time_pane_g1

0x96da,	// (0x0005204d) list_double_time_pane_g2_ParamLimits

0x96da,	// (0x0005204d) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00057fd1) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00057fd1) list_double_time_pane_g

0x96e6,	// (0x00052059) list_double_time_pane_t1_ParamLimits

0x96e6,	// (0x00052059) list_double_time_pane_t1

0x96fc,	// (0x0005206f) list_double_time_pane_t2_ParamLimits

0x96fc,	// (0x0005206f) list_double_time_pane_t2

0x970e,	// (0x00052081) list_double_time_pane_t3_ParamLimits

0x970e,	// (0x00052081) list_double_time_pane_t3

0x9720,	// (0x00052093) list_double_time_pane_t4_ParamLimits

0x9720,	// (0x00052093) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00057fd6) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00057fd6) list_double_time_pane_t

0x9732,	// (0x000520a5) list_setting_pane_g1_ParamLimits

0x9732,	// (0x000520a5) list_setting_pane_g1

0x973e,	// (0x000520b1) list_setting_pane_g2_ParamLimits

0x973e,	// (0x000520b1) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00057fdf) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00057fdf) list_setting_pane_g

0x974a,	// (0x000520bd) list_setting_pane_t1_ParamLimits

0x974a,	// (0x000520bd) list_setting_pane_t1

0x9764,	// (0x000520d7) list_setting_pane_t2_ParamLimits

0x9764,	// (0x000520d7) list_setting_pane_t2

0x0002,

0xf671,	// (0x00057fe4) list_setting_pane_t_ParamLimits

0xf671,	// (0x00057fe4) list_setting_pane_t

0x97a3,	// (0x00052116) set_value_pane_cp_ParamLimits

0x97a3,	// (0x00052116) set_value_pane_cp

0x97b1,	// (0x00052124) list_setting_number_pane_g1_ParamLimits

0x97b1,	// (0x00052124) list_setting_number_pane_g1

0x97bd,	// (0x00052130) list_setting_number_pane_g2_ParamLimits

0x97bd,	// (0x00052130) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00057feb) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00057feb) list_setting_number_pane_g

0x97c9,	// (0x0005213c) list_setting_number_pane_t1_ParamLimits

0x97c9,	// (0x0005213c) list_setting_number_pane_t1

0x97e2,	// (0x00052155) list_setting_number_pane_t2_ParamLimits

0x97e2,	// (0x00052155) list_setting_number_pane_t2

0x97fc,	// (0x0005216f) list_setting_number_pane_t3_ParamLimits

0x97fc,	// (0x0005216f) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x00057ff0) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x00057ff0) list_setting_number_pane_t

0x97a3,	// (0x00052116) set_value_pane_ParamLimits

0x97a3,	// (0x00052116) set_value_pane

0xa766,	// (0x000530d9) bg_set_opt_pane_ParamLimits

0xa766,	// (0x000530d9) bg_set_opt_pane

0xe5cf,	// (0x00056f42) set_value_pane_t1

0xa787,	// (0x000530fa) slider_set_pane_cp3

0xa790,	// (0x00053103) volume_small_pane_cp

0xa799,	// (0x0005310c) list_form_gen_pane

0xa7a2,	// (0x00053115) scroll_pane_cp8

0x983f,	// (0x000521b2) form_field_data_pane_ParamLimits

0x983f,	// (0x000521b2) form_field_data_pane

0x985c,	// (0x000521cf) form_field_data_wide_pane_ParamLimits

0x985c,	// (0x000521cf) form_field_data_wide_pane

0x9880,	// (0x000521f3) form_field_popup_pane_ParamLimits

0x9880,	// (0x000521f3) form_field_popup_pane

0xe5ed,	// (0x00056f60) form_field_popup_wide_pane_ParamLimits

0xe5ed,	// (0x00056f60) form_field_popup_wide_pane

0xe60e,	// (0x00056f81) form_field_slider_pane_ParamLimits

0xe60e,	// (0x00056f81) form_field_slider_pane

0xe621,	// (0x00056f94) form_field_slider_wide_pane_ParamLimits

0xe621,	// (0x00056f94) form_field_slider_wide_pane

0xa7b3,	// (0x00053126) data_form_pane

0x98ac,	// (0x0005221f) form_field_data_pane_t1

0xa7bf,	// (0x00053132) input_focus_pane

0xe634,	// (0x00056fa7) data_form_wide_pane

0xe651,	// (0x00056fc4) form_field_data_wide_pane_t1

0xa4c4,	// (0x00052e37) input_focus_pane_cp6

0x98c6,	// (0x00052239) form_field_popup_pane_t1

0xa7bf,	// (0x00053132) input_focus_pane_cp7

0xa7ed,	// (0x00053160) list_form_pane

0xe67b,	// (0x00056fee) form_field_popup_wide_pane_t1

0xa7bf,	// (0x00053132) input_focus_pane_cp8

0xa7f9,	// (0x0005316c) list_form_wide_pane

0x98e8,	// (0x0005225b) form_field_slider_pane_t1_ParamLimits

0x98e8,	// (0x0005225b) form_field_slider_pane_t1

0x9900,	// (0x00052273) form_field_slider_pane_t2_ParamLimits

0x9900,	// (0x00052273) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x00058000) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x00058000) form_field_slider_pane_t

0x6c17,	// (0x0004f58a) input_focus_pane_cp9_ParamLimits

0x6c17,	// (0x0004f58a) input_focus_pane_cp9

0x9915,	// (0x00052288) slider_cont_pane_ParamLimits

0x9915,	// (0x00052288) slider_cont_pane

0xa808,	// (0x0005317b) form_field_slider_wide_pane_t1_ParamLimits

0xa808,	// (0x0005317b) form_field_slider_wide_pane_t1

0xe690,	// (0x00057003) form_field_slider_wide_pane_t2_ParamLimits

0xe690,	// (0x00057003) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00058005) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00058005) form_field_slider_wide_pane_t

0x6c17,	// (0x0004f58a) input_focus_pane_cp10_ParamLimits

0x6c17,	// (0x0004f58a) input_focus_pane_cp10

0x9929,	// (0x0005229c) slider_cont_pane_cp1_ParamLimits

0x9929,	// (0x0005229c) slider_cont_pane_cp1

0x993d,	// (0x000522b0) slider_form_pane_cp

0xa81a,	// (0x0005318d) input_focus_pane_g1

0xa822,	// (0x00053195) input_focus_pane_g2

0xa82a,	// (0x0005319d) input_focus_pane_g3

0xa832,	// (0x000531a5) input_focus_pane_g4

0xa83a,	// (0x000531ad) input_focus_pane_g5

0xa842,	// (0x000531b5) input_focus_pane_g6

0xa84a,	// (0x000531bd) input_focus_pane_g7

0xa852,	// (0x000531c5) input_focus_pane_g8

0xa85a,	// (0x000531cd) input_focus_pane_g9

0x6bb3,	// (0x0004f526) input_focus_pane_g10

0x0009,

0xf697,	// (0x0005800a) input_focus_pane_g

0x2f67,	// (0x0004b8da) wait_border_pane_g3_copy1

0x9945,	// (0x000522b8) data_form_pane_t1

0x6bb3,	// (0x0004f526) wait_anim_pane_g1_copy1

0x9a41,	// (0x000523b4) data_form_wide_pane_t1

0xe6a2,	// (0x00057015) list_form_graphic_pane_cp_ParamLimits

0xe6a2,	// (0x00057015) list_form_graphic_pane_cp

0x3eda,	// (0x0004c84d) slider_form_pane_g1

0x3ee3,	// (0x0004c856) slider_form_pane_g2

0x0006,

0xf995,	// (0x00058308) slider_form_pane_g

0x9961,	// (0x000522d4) list_form_graphic_pane_ParamLimits

0x9961,	// (0x000522d4) list_form_graphic_pane

0xe6b4,	// (0x00057027) list_form_graphic_pane_g1

0xe6bc,	// (0x0005702f) list_form_graphic_pane_t1_ParamLimits

0xe6bc,	// (0x0005702f) list_form_graphic_pane_t1

0x9e7f,	// (0x000527f2) list_highlight_pane_cp5_ParamLimits

0x9e7f,	// (0x000527f2) list_highlight_pane_cp5

0x9972,	// (0x000522e5) find_pane_g1

0xa862,	// (0x000531d5) input_find_pane

0x997b,	// (0x000522ee) input_find_pane_g1_ParamLimits

0x997b,	// (0x000522ee) input_find_pane_g1

0x9987,	// (0x000522fa) input_find_pane_t1_ParamLimits

0x9987,	// (0x000522fa) input_find_pane_t1

0x999c,	// (0x0005230f) input_find_pane_t2_ParamLimits

0x999c,	// (0x0005230f) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005801f) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005801f) input_find_pane_t

0xa86b,	// (0x000531de) input_focus_pane_cp5_ParamLimits

0xa86b,	// (0x000531de) input_focus_pane_cp5

0xa885,	// (0x000531f8) bg_popup_window_pane_cp2_ParamLimits

0xa885,	// (0x000531f8) bg_popup_window_pane_cp2

0xa892,	// (0x00053205) listscroll_menu_pane_ParamLimits

0xa892,	// (0x00053205) listscroll_menu_pane

0xa89e,	// (0x00053211) popup_submenu_window_ParamLimits

0xa89e,	// (0x00053211) popup_submenu_window

0xa8ce,	// (0x00053241) find_popup_pane_g1

0xa8d6,	// (0x00053249) input_popup_find_pane_cp

0xa86b,	// (0x000531de) input_focus_pane_cp4_ParamLimits

0xa86b,	// (0x000531de) input_focus_pane_cp4

0xa8ee,	// (0x00053261) input_popup_find_pane_t1_ParamLimits

0xa8ee,	// (0x00053261) input_popup_find_pane_t1

0x6bbd,	// (0x0004f530) bg_popup_sub_pane_cp

0xa91c,	// (0x0005328f) listscroll_popup_sub_pane

0xa924,	// (0x00053297) list_submenu_pane_ParamLimits

0xa924,	// (0x00053297) list_submenu_pane

0xa935,	// (0x000532a8) scroll_pane_cp4

0xa93d,	// (0x000532b0) list_single_popup_submenu_pane_ParamLimits

0xa93d,	// (0x000532b0) list_single_popup_submenu_pane

0xa952,	// (0x000532c5) list_single_popup_submenu_pane_g1

0xa95a,	// (0x000532cd) list_single_popup_submenu_pane_t1_ParamLimits

0xa95a,	// (0x000532cd) list_single_popup_submenu_pane_t1

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp1_ParamLimits

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp1

0xa96f,	// (0x000532e2) tabs_2_active_pane_g1

0xa977,	// (0x000532ea) tabs_2_active_pane_t1

0x6c17,	// (0x0004f58a) bg_passive_tab_pane_cp1_ParamLimits

0x6c17,	// (0x0004f58a) bg_passive_tab_pane_cp1

0xa96f,	// (0x000532e2) tabs_2_passive_pane_g1

0xa977,	// (0x000532ea) tabs_2_passive_pane_t1

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp4

0xa989,	// (0x000532fc) tabs_2_long_active_pane_t1

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp4

0x0988,	// (0x000492fb) list_single_midp_graphic_pane_g4_ParamLimits

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp5

0xa99c,	// (0x0005330f) tabs_3_long_active_pane_t1

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp5

0x0988,	// (0x000492fb) list_single_midp_graphic_pane_g4

0x9e7f,	// (0x000527f2) bg_popup_window_pane_cp13_ParamLimits

0x9e7f,	// (0x000527f2) bg_popup_window_pane_cp13

0xa9b7,	// (0x0005332a) listscroll_popup_fast_pane_ParamLimits

0xa9b7,	// (0x0005332a) listscroll_popup_fast_pane

0xa9c6,	// (0x00053339) grid_popup_fast_pane_ParamLimits

0xa9c6,	// (0x00053339) grid_popup_fast_pane

0xa9d8,	// (0x0005334b) scroll_pane_cp9_ParamLimits

0xa9d8,	// (0x0005334b) scroll_pane_cp9

0x586b,	// (0x0004e1de) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x586b,	// (0x0004e1de) list_single_graphic_hl_pane_t1_cp2

0xa9fc,	// (0x0005336f) input_focus_pane_cp20_ParamLimits

0xa9fc,	// (0x0005336f) input_focus_pane_cp20

0xaa0a,	// (0x0005337d) query_popup_data_pane_t1_ParamLimits

0xaa0a,	// (0x0005337d) query_popup_data_pane_t1

0xaa1d,	// (0x00053390) query_popup_data_pane_t2_ParamLimits

0xaa1d,	// (0x00053390) query_popup_data_pane_t2

0xaa63,	// (0x000533d6) query_popup_data_pane_t3_ParamLimits

0xaa63,	// (0x000533d6) query_popup_data_pane_t3

0xaaa4,	// (0x00053417) query_popup_data_pane_t4_ParamLimits

0xaaa4,	// (0x00053417) query_popup_data_pane_t4

0xaae0,	// (0x00053453) query_popup_data_pane_t5_ParamLimits

0xaae0,	// (0x00053453) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x00058024) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x00058024) query_popup_data_pane_t

0xa81a,	// (0x0005318d) bg_set_opt_pane_g1

0xa822,	// (0x00053195) bg_set_opt_pane_g2

0xa82a,	// (0x0005319d) bg_set_opt_pane_g3

0xa832,	// (0x000531a5) bg_set_opt_pane_g4

0xa83a,	// (0x000531ad) bg_set_opt_pane_g5

0xa842,	// (0x000531b5) bg_set_opt_pane_g6

0xa84a,	// (0x000531bd) bg_set_opt_pane_g7

0xa852,	// (0x000531c5) bg_set_opt_pane_g8

0xa85a,	// (0x000531cd) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005802f) bg_set_opt_pane_g

0x0296,	// (0x00048c09) control_top_pane_stacon_ParamLimits

0x0296,	// (0x00048c09) control_top_pane_stacon

0x02e9,	// (0x00048c5c) signal_pane_stacon_ParamLimits

0x02e9,	// (0x00048c5c) signal_pane_stacon

0xe847,	// (0x000571ba) stacon_top_pane_g1_ParamLimits

0xe847,	// (0x000571ba) stacon_top_pane_g1

0x030e,	// (0x00048c81) title_pane_stacon_ParamLimits

0x030e,	// (0x00048c81) title_pane_stacon

0x0338,	// (0x00048cab) uni_indicator_pane_stacon_ParamLimits

0x0338,	// (0x00048cab) uni_indicator_pane_stacon

0x0350,	// (0x00048cc3) battery_pane_stacon_ParamLimits

0x0350,	// (0x00048cc3) battery_pane_stacon

0x0394,	// (0x00048d07) control_bottom_pane_stacon_ParamLimits

0x0394,	// (0x00048d07) control_bottom_pane_stacon

0x03b7,	// (0x00048d2a) navi_pane_stacon_ParamLimits

0x03b7,	// (0x00048d2a) navi_pane_stacon

0xe869,	// (0x000571dc) stacon_bottom_pane_g1_ParamLimits

0xe869,	// (0x000571dc) stacon_bottom_pane_g1

0xf3c6,	// (0x00057d39) aid_levels_signal_lsc_ParamLimits

0xf3c6,	// (0x00057d39) aid_levels_signal_lsc

0xf3dd,	// (0x00057d50) signal_pane_stacon_g1_ParamLimits

0xf3dd,	// (0x00057d50) signal_pane_stacon_g1

0xf3f1,	// (0x00057d64) signal_pane_stacon_g2_ParamLimits

0xf3f1,	// (0x00057d64) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00058042) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00058042) signal_pane_stacon_g

0xf426,	// (0x00057d99) title_pane_stacon_t1_ParamLimits

0xf426,	// (0x00057d99) title_pane_stacon_t1

0xab24,	// (0x00053497) uni_indicator_pane_stacon_g1

0xab2e,	// (0x000534a1) uni_indicator_pane_stacon_g2

0xab38,	// (0x000534ab) uni_indicator_pane_stacon_g3

0xab42,	// (0x000534b5) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005804e) uni_indicator_pane_stacon_g

0xf44b,	// (0x00057dbe) control_top_pane_stacon_g1

0xf453,	// (0x00057dc6) control_top_pane_stacon_t1_ParamLimits

0xf453,	// (0x00057dc6) control_top_pane_stacon_t1

0xf48a,	// (0x00057dfd) aid_levels_battery_lsc_ParamLimits

0xf48a,	// (0x00057dfd) aid_levels_battery_lsc

0xf4a2,	// (0x00057e15) battery_pane_stacon_g1_ParamLimits

0xf4a2,	// (0x00057e15) battery_pane_stacon_g1

0xf4b5,	// (0x00057e28) battery_pane_stacon_g2_ParamLimits

0xf4b5,	// (0x00057e28) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x00058057) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x00058057) battery_pane_stacon_g

0xf4f3,	// (0x00057e66) navi_icon_pane_stacon

0xf507,	// (0x00057e7a) navi_navi_pane_stacon

0xf4f3,	// (0x00057e66) navi_text_pane_stacon

0xf44b,	// (0x00057dbe) control_bottom_pane_stacon_g1

0xf51d,	// (0x00057e90) control_bottom_pane_stacon_t1_ParamLimits

0xf51d,	// (0x00057e90) control_bottom_pane_stacon_t1

0xab66,	// (0x000534d9) grid_app_pane_ParamLimits

0xab66,	// (0x000534d9) grid_app_pane

0xab9e,	// (0x00053511) scroll_pane_cp15_ParamLimits

0xab9e,	// (0x00053511) scroll_pane_cp15

0xabb7,	// (0x0005352a) cell_app_pane_ParamLimits

0xabb7,	// (0x0005352a) cell_app_pane

0xac04,	// (0x00053577) cell_app_pane_g1_ParamLimits

0xac04,	// (0x00053577) cell_app_pane_g1

0xac24,	// (0x00053597) cell_app_pane_g2_ParamLimits

0xac24,	// (0x00053597) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005805c) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005805c) cell_app_pane_g

0xac30,	// (0x000535a3) cell_app_pane_t1_ParamLimits

0xac30,	// (0x000535a3) cell_app_pane_t1

0xac47,	// (0x000535ba) grid_highlight_pane_ParamLimits

0xac47,	// (0x000535ba) grid_highlight_pane

0xa81a,	// (0x0005318d) cell_highlight_pane_g1

0xa822,	// (0x00053195) cell_highlight_pane_g2

0xa82a,	// (0x0005319d) cell_highlight_pane_g3

0xa832,	// (0x000531a5) cell_highlight_pane_g4

0xa83a,	// (0x000531ad) cell_highlight_pane_g5

0xa842,	// (0x000531b5) cell_highlight_pane_g6

0xa84a,	// (0x000531bd) cell_highlight_pane_g7

0xa852,	// (0x000531c5) cell_highlight_pane_g8

0xa85a,	// (0x000531cd) cell_highlight_pane_g9

0x6bb3,	// (0x0004f526) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0005800a) cell_highlight_pane_g

0xac61,	// (0x000535d4) bg_scroll_pane

0x003a,	// (0x000489ad) scroll_handle_pane

0xc3cf,	// (0x00054d42) scroll_bg_pane_g1

0xc3e4,	// (0x00054d57) scroll_bg_pane_g2

0xc3fc,	// (0x00054d6f) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00058061) scroll_bg_pane_g

0xc411,	// (0x00054d84) scroll_handle_focus_pane_ParamLimits

0xc411,	// (0x00054d84) scroll_handle_focus_pane

0xc3cf,	// (0x00054d42) scroll_handle_pane_g1

0xc41e,	// (0x00054d91) scroll_handle_pane_g2

0xc3fc,	// (0x00054d6f) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00058068) scroll_handle_pane_g

0xa86b,	// (0x000531de) bg_popup_sub_pane_cp21_ParamLimits

0xa86b,	// (0x000531de) bg_popup_sub_pane_cp21

0xc432,	// (0x00054da5) popup_fep_japan_predictive_window_t1_ParamLimits

0xc432,	// (0x00054da5) popup_fep_japan_predictive_window_t1

0xc449,	// (0x00054dbc) popup_fep_japan_predictive_window_t2_ParamLimits

0xc449,	// (0x00054dbc) popup_fep_japan_predictive_window_t2

0xc47c,	// (0x00054def) popup_fep_japan_predictive_window_t3_ParamLimits

0xc47c,	// (0x00054def) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005806f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005806f) popup_fep_japan_predictive_window_t

0x6bbd,	// (0x0004f530) bg_popup_sub_pane_cp23

0xc4b3,	// (0x00054e26) listscroll_japin_cand_pane

0xc4bb,	// (0x00054e2e) popup_fep_japan_candidate_window_t1

0xc4c9,	// (0x00054e3c) candidate_pane_ParamLimits

0xc4c9,	// (0x00054e3c) candidate_pane

0xc4db,	// (0x00054e4e) scroll_pane_cp30

0xc4e5,	// (0x00054e58) list_single_popup_jap_candidate_pane_ParamLimits

0xc4e5,	// (0x00054e58) list_single_popup_jap_candidate_pane

0x6bbd,	// (0x0004f530) list_highlight_pane_cp30

0xc4f9,	// (0x00054e6c) list_single_popup_jap_candidate_pane_t1

0xac92,	// (0x00053605) level_1_signal

0xaca4,	// (0x00053617) level_2_signal

0xacb7,	// (0x0005362a) level_3_signal

0xacca,	// (0x0005363d) level_4_signal

0xacdd,	// (0x00053650) level_5_signal

0xacf0,	// (0x00053663) level_6_signal

0xad03,	// (0x00053676) level_7_signal

0xac92,	// (0x00053605) level_1_battery

0xaca4,	// (0x00053617) level_2_battery

0xacb7,	// (0x0005362a) level_3_battery

0xacca,	// (0x0005363d) level_4_battery

0xacdd,	// (0x00053650) level_5_battery

0xacf0,	// (0x00053663) level_6_battery

0xad03,	// (0x00053676) level_7_battery

0xc520,	// (0x00054e93) list_menu_pane_ParamLimits

0xc520,	// (0x00054e93) list_menu_pane

0xc536,	// (0x00054ea9) scroll_pane_cp25_ParamLimits

0xc536,	// (0x00054ea9) scroll_pane_cp25

0xc54f,	// (0x00054ec2) list_double2_graphic_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double2_graphic_pane_cp2

0xc54f,	// (0x00054ec2) list_double2_large_graphic_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double2_large_graphic_pane_cp2

0xc54f,	// (0x00054ec2) list_double2_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double2_pane_cp2

0xc54f,	// (0x00054ec2) list_double_graphic_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double_graphic_pane_cp2

0xc54f,	// (0x00054ec2) list_double_large_graphic_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double_large_graphic_pane_cp2

0xc54f,	// (0x00054ec2) list_double_number_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double_number_pane_cp2

0xc54f,	// (0x00054ec2) list_double_pane_cp2_ParamLimits

0xc54f,	// (0x00054ec2) list_double_pane_cp2

0xad29,	// (0x0005369c) list_single_2graphic_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_2graphic_pane_cp2

0xad29,	// (0x0005369c) list_single_graphic_heading_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_graphic_heading_pane_cp2

0xad29,	// (0x0005369c) list_single_graphic_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_graphic_pane_cp2

0xad29,	// (0x0005369c) list_single_heading_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_heading_pane_cp2

0xc55f,	// (0x00054ed2) list_single_large_graphic_pane_cp2_ParamLimits

0xc55f,	// (0x00054ed2) list_single_large_graphic_pane_cp2

0xad29,	// (0x0005369c) list_single_number_heading_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_number_heading_pane_cp2

0xad29,	// (0x0005369c) list_single_number_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_number_pane_cp2

0xad29,	// (0x0005369c) list_single_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_pane_cp2

0xe6da,	// (0x0005704d) bg_popup_sub_pane_cp22

0x01dc,	// (0x00048b4f) popup_side_volume_key_window_g1

0x0206,	// (0x00048b79) popup_side_volume_key_window_t1

0x0224,	// (0x00048b97) volume_small_pane_cp1

0x6c17,	// (0x0004f58a) bg_popup_sub_pane_cp24_ParamLimits

0x6c17,	// (0x0004f58a) bg_popup_sub_pane_cp24

0xe6f0,	// (0x00057063) fep_china_uni_candidate_pane_ParamLimits

0xe6f0,	// (0x00057063) fep_china_uni_candidate_pane

0xe704,	// (0x00057077) fep_china_uni_entry_pane

0xe714,	// (0x00057087) popup_fep_china_uni_window_g1

0xe730,	// (0x000570a3) fep_china_uni_entry_pane_g1

0xe73a,	// (0x000570ad) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x000580a0) fep_china_uni_entry_pane_g

0xe744,	// (0x000570b7) fep_entry_item_pane

0xe74e,	// (0x000570c1) fep_candidate_item_pane

0xe756,	// (0x000570c9) fep_china_uni_candidate_pane_g1

0xe760,	// (0x000570d3) fep_china_uni_candidate_pane_g2

0xe768,	// (0x000570db) fep_china_uni_candidate_pane_g3

0xe770,	// (0x000570e3) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x000580a5) fep_china_uni_candidate_pane_g

0x6bb3,	// (0x0004f526) fep_entry_item_pane_g1

0xe77a,	// (0x000570ed) fep_entry_item_pane_t1_ParamLimits

0xe77a,	// (0x000570ed) fep_entry_item_pane_t1

0xe790,	// (0x00057103) fep_candidate_item_pane_t1_ParamLimits

0xe790,	// (0x00057103) fep_candidate_item_pane_t1

0xe7a5,	// (0x00057118) fep_candidate_item_pane_t2_ParamLimits

0xe7a5,	// (0x00057118) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x000580ae) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x000580ae) fep_candidate_item_pane_t

0x9e7f,	// (0x000527f2) list_highlight_pane_cp31_ParamLimits

0x9e7f,	// (0x000527f2) list_highlight_pane_cp31

0xe7b7,	// (0x0005712a) level_1_signal_lsc

0xe7c0,	// (0x00057133) level_2_signal_lsc

0xe7c9,	// (0x0005713c) level_3_signal_lsc

0xe7d2,	// (0x00057145) level_4_signal_lsc

0xe7db,	// (0x0005714e) level_5_signal_lsc

0xe7e4,	// (0x00057157) level_6_signal_lsc

0xe7ed,	// (0x00057160) level_7_signal_lsc

0xe7ed,	// (0x00057160) level_1_battery_lsc

0xe7f6,	// (0x00057169) level_2_battery_lsc

0xe7ff,	// (0x00057172) level_3_battery_lsc

0xe808,	// (0x0005717b) level_4_battery_lsc

0xe811,	// (0x00057184) level_5_battery_lsc

0xe81a,	// (0x0005718d) level_6_battery_lsc

0xe7b7,	// (0x0005712a) level_7_battery_lsc

0xe823,	// (0x00057196) scroll_handle_focus_pane_g1

0xe82c,	// (0x0005719f) scroll_handle_focus_pane_g2

0xe835,	// (0x000571a8) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x000580b3) scroll_handle_focus_pane_g

0x99b1,	// (0x00052324) list_single_2graphic_pane_g1_ParamLimits

0x99b1,	// (0x00052324) list_single_2graphic_pane_g1

0xa70c,	// (0x0005307f) list_single_2graphic_pane_g2_ParamLimits

0xa70c,	// (0x0005307f) list_single_2graphic_pane_g2

0x0957,	// (0x000492ca) list_single_2graphic_pane_g3_ParamLimits

0x0957,	// (0x000492ca) list_single_2graphic_pane_g3

0xadbb,	// (0x0005372e) list_single_2graphic_pane_g4_ParamLimits

0xadbb,	// (0x0005372e) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x000580ba) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x000580ba) list_single_2graphic_pane_g

0x99bd,	// (0x00052330) list_single_2graphic_pane_t1_ParamLimits

0x99bd,	// (0x00052330) list_single_2graphic_pane_t1

0xadcc,	// (0x0005373f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xadcc,	// (0x0005373f) list_double2_graphic_large_graphic_pane_g1

0xa755,	// (0x000530c8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa755,	// (0x000530c8) list_double2_graphic_large_graphic_pane_g2

0xa73d,	// (0x000530b0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa73d,	// (0x000530b0) list_double2_graphic_large_graphic_pane_g3

0xadde,	// (0x00053751) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xadde,	// (0x00053751) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x000580c3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x000580c3) list_double2_graphic_large_graphic_pane_g

0x99eb,	// (0x0005235e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x99eb,	// (0x0005235e) list_double2_graphic_large_graphic_pane_t1

0x9a01,	// (0x00052374) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9a01,	// (0x00052374) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x000580cc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x000580cc) list_double2_graphic_large_graphic_pane_t

0xe8c7,	// (0x0005723a) popup_fast_swap_window_ParamLimits

0xe8c7,	// (0x0005723a) popup_fast_swap_window

0xe8e5,	// (0x00057258) popup_side_volume_key_window

0xe903,	// (0x00057276) stacon_top_pane

0xe90d,	// (0x00057280) status_pane_ParamLimits

0xe90d,	// (0x00057280) status_pane

0xe903,	// (0x00057276) status_small_pane

0x6bbd,	// (0x0004f530) control_pane

0x6bbd,	// (0x0004f530) stacon_bottom_pane

0xa7a2,	// (0x00053115) scroll_pane_cp121

0xa799,	// (0x0005310c) set_content_pane

0xadea,	// (0x0005375d) bg_active_tab_pane_g1_cp1

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp1

0xadf3,	// (0x00053766) bg_active_tab_pane_g3_cp1

0xadea,	// (0x0005375d) bg_passive_tab_pane_g1_cp1

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp1

0xadf3,	// (0x00053766) bg_passive_tab_pane_g3_cp1

0xadfc,	// (0x0005376f) bg_active_tab_pane_g1_cp2

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp2

0xae05,	// (0x00053778) bg_active_tab_pane_g3_cp2

0xadfc,	// (0x0005376f) bg_passive_tab_pane_g1_cp2

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp2

0xae05,	// (0x00053778) bg_passive_tab_pane_g3_cp2

0xae0e,	// (0x00053781) bg_active_tab_pane_g1_cp3

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp3

0xae17,	// (0x0005378a) bg_active_tab_pane_g3_cp3

0xae0e,	// (0x00053781) bg_passive_tab_pane_g1_cp3

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp3

0xae17,	// (0x0005378a) bg_passive_tab_pane_g3_cp3

0xae20,	// (0x00053793) bg_active_tab_pane_g1_cp4

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp4

0xae29,	// (0x0005379c) bg_active_tab_pane_g3_cp4

0xae20,	// (0x00053793) bg_passive_tab_pane_g1_cp4

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp4

0xae29,	// (0x0005379c) bg_passive_tab_pane_g3_cp4

0xe885,	// (0x000571f8) bg_active_tab_pane_g1_cp5

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp5

0xe88e,	// (0x00057201) bg_active_tab_pane_g3_cp5

0xe885,	// (0x000571f8) bg_passive_tab_pane_g1_cp5

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp5

0xe88e,	// (0x00057201) bg_passive_tab_pane_g3_cp5

0x4508,	// (0x0004ce7b) list_set_graphic_pane_ParamLimits

0x4508,	// (0x0004ce7b) list_set_graphic_pane

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp4

0xae32,	// (0x000537a5) list_set_graphic_pane_g1_ParamLimits

0xae32,	// (0x000537a5) list_set_graphic_pane_g1

0xae3e,	// (0x000537b1) list_set_graphic_pane_g2_ParamLimits

0xae3e,	// (0x000537b1) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x000580d1) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x000580d1) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00058459) volume_small_pane_cp_g

0xae62,	// (0x000537d5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xae62,	// (0x000537d5) list_double2_large_graphic_pane_g1_cp2

0xae70,	// (0x000537e3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xae70,	// (0x000537e3) list_double2_large_graphic_pane_g2_cp2

0xe897,	// (0x0005720a) list_double2_large_graphic_pane_g3_cp2

0xe89f,	// (0x00057212) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe89f,	// (0x00057212) list_double2_large_graphic_pane_t1_cp2

0xe8b5,	// (0x00057228) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe8b5,	// (0x00057228) list_double2_large_graphic_pane_t2_cp2

0xc835,	// (0x000551a8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc835,	// (0x000551a8) list_double_large_graphic_pane_g1_cp2

0xc848,	// (0x000551bb) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc848,	// (0x000551bb) list_double_large_graphic_pane_g2_cp2

0xe9ee,	// (0x00057361) list_double_large_graphic_pane_g3_cp2

0x3a6f,	// (0x0004c3e2) list_double_large_graphic_pane_g4_cp

0x3a77,	// (0x0004c3ea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3a77,	// (0x0004c3ea) list_double_large_graphic_pane_t1_cp2

0x3a8e,	// (0x0004c401) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3a8e,	// (0x0004c401) list_double_large_graphic_pane_t2_cp2

0xae81,	// (0x000537f4) list_double2_graphic_pane_g1_cp2_ParamLimits

0xae81,	// (0x000537f4) list_double2_graphic_pane_g1_cp2

0xae8f,	// (0x00053802) list_double2_graphic_pane_g2_cp2_ParamLimits

0xae8f,	// (0x00053802) list_double2_graphic_pane_g2_cp2

0xaea0,	// (0x00053813) list_double2_graphic_pane_g3_cp2

0xe91b,	// (0x0005728e) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe91b,	// (0x0005728e) list_double2_graphic_pane_t1_cp2

0xe931,	// (0x000572a4) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe931,	// (0x000572a4) list_double2_graphic_pane_t2_cp2

0xe943,	// (0x000572b6) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe943,	// (0x000572b6) list_single_number_heading_pane_g1_cp2

0xe94f,	// (0x000572c2) list_single_number_heading_pane_g2_cp2

0xe957,	// (0x000572ca) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe957,	// (0x000572ca) list_single_number_heading_pane_t1_cp2

0xaeaa,	// (0x0005381d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xaeaa,	// (0x0005381d) list_single_number_heading_pane_t2_cp2

0xe96d,	// (0x000572e0) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe96d,	// (0x000572e0) list_single_number_heading_pane_t3_cp2

0xe943,	// (0x000572b6) list_single_heading_pane_g1_cp2_ParamLimits

0xe943,	// (0x000572b6) list_single_heading_pane_g1_cp2

0xe94f,	// (0x000572c2) list_single_heading_pane_g2_cp2

0xe957,	// (0x000572ca) list_single_heading_pane_t1_cp2_ParamLimits

0xe957,	// (0x000572ca) list_single_heading_pane_t1_cp2

0xc821,	// (0x00055194) list_single_heading_pane_t2_cp2_ParamLimits

0xc821,	// (0x00055194) list_single_heading_pane_t2_cp2

0x378d,	// (0x0004c100) list_double_graphic_pane_g1_cp2_ParamLimits

0x378d,	// (0x0004c100) list_double_graphic_pane_g1_cp2

0x3799,	// (0x0004c10c) list_double_graphic_pane_g2_cp2_ParamLimits

0x3799,	// (0x0004c10c) list_double_graphic_pane_g2_cp2

0x37a8,	// (0x0004c11b) list_double_graphic_pane_g3_cp2

0x37b0,	// (0x0004c123) list_double_graphic_pane_t1_cp2_ParamLimits

0x37b0,	// (0x0004c123) list_double_graphic_pane_t1_cp2

0x37c6,	// (0x0004c139) list_double_graphic_pane_t2_cp2_ParamLimits

0x37c6,	// (0x0004c139) list_double_graphic_pane_t2_cp2

0xe9e2,	// (0x00057355) list_double_number_pane_g1_cp2_ParamLimits

0xe9e2,	// (0x00057355) list_double_number_pane_g1_cp2

0xe9ee,	// (0x00057361) list_double_number_pane_g2_cp2

0xc7bb,	// (0x0005512e) list_double_number_pane_t1_cp2_ParamLimits

0xc7bb,	// (0x0005512e) list_double_number_pane_t1_cp2

0x3765,	// (0x0004c0d8) list_double_number_pane_t2_cp2_ParamLimits

0x3765,	// (0x0004c0d8) list_double_number_pane_t2_cp2

0x377b,	// (0x0004c0ee) list_double_number_pane_t3_cp2_ParamLimits

0x377b,	// (0x0004c0ee) list_double_number_pane_t3_cp2

0xc709,	// (0x0005507c) list_single_graphic_pane_g1_cp2_ParamLimits

0xc709,	// (0x0005507c) list_single_graphic_pane_g1_cp2

0xea2e,	// (0x000573a1) list_single_graphic_pane_g2_cp2_ParamLimits

0xea2e,	// (0x000573a1) list_single_graphic_pane_g2_cp2

0x0495,	// (0x00048e08) list_single_graphic_pane_g3_cp2

0x3610,	// (0x0004bf83) list_single_graphic_pane_t1_cp2_ParamLimits

0x3610,	// (0x0004bf83) list_single_graphic_pane_t1_cp2

0xea2e,	// (0x000573a1) list_single_number_pane_g1_cp2_ParamLimits

0xea2e,	// (0x000573a1) list_single_number_pane_g1_cp2

0x0495,	// (0x00048e08) list_single_number_pane_g2_cp2

0x3610,	// (0x0004bf83) list_single_number_pane_t1_cp2_ParamLimits

0x3610,	// (0x0004bf83) list_single_number_pane_t1_cp2

0xc6f5,	// (0x00055068) list_single_number_pane_t2_cp2_ParamLimits

0xc6f5,	// (0x00055068) list_single_number_pane_t2_cp2

0xae70,	// (0x000537e3) list_double2_pane_g1_cp2_ParamLimits

0xae70,	// (0x000537e3) list_double2_pane_g1_cp2

0xe897,	// (0x0005720a) list_double2_pane_g2_cp2

0xe9ba,	// (0x0005732d) list_double2_pane_t1_cp2_ParamLimits

0xe9ba,	// (0x0005732d) list_double2_pane_t1_cp2

0xe9d0,	// (0x00057343) list_double2_pane_t2_cp2_ParamLimits

0xe9d0,	// (0x00057343) list_double2_pane_t2_cp2

0xe9e2,	// (0x00057355) list_double_pane_g1_cp2_ParamLimits

0xe9e2,	// (0x00057355) list_double_pane_g1_cp2

0xe9ee,	// (0x00057361) list_double_pane_g2_cp2

0xe9f6,	// (0x00057369) list_double_pane_t1_cp2_ParamLimits

0xe9f6,	// (0x00057369) list_double_pane_t1_cp2

0xea0c,	// (0x0005737f) list_double_pane_t2_cp2_ParamLimits

0xea0c,	// (0x0005737f) list_double_pane_t2_cp2

0xea1e,	// (0x00057391) list_single_pane_cp2_g3

0xea2e,	// (0x000573a1) list_single_pane_g1_cp2_ParamLimits

0xea2e,	// (0x000573a1) list_single_pane_g1_cp2

0x0495,	// (0x00048e08) list_single_pane_g2_cp2

0x049d,	// (0x00048e10) list_single_pane_t1_cp2_ParamLimits

0x049d,	// (0x00048e10) list_single_pane_t1_cp2

0xaed8,	// (0x0005384b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xaed8,	// (0x0005384b) list_single_large_graphic_pane_g1_cp2

0x04c3,	// (0x00048e36) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x04c3,	// (0x00048e36) list_single_large_graphic_pane_g2_cp2

0x04cf,	// (0x00048e42) list_single_large_graphic_pane_g3_cp2

0x04d7,	// (0x00048e4a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x04d7,	// (0x00048e4a) list_single_large_graphic_pane_g4_cp1

0x04f1,	// (0x00048e64) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x04f1,	// (0x00048e64) list_single_large_graphic_pane_t1_cp2

0x35da,	// (0x0004bf4d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x35da,	// (0x0004bf4d) list_single_graphic_heading_pane_g1_cp2

0xc6d0,	// (0x00055043) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc6d0,	// (0x00055043) list_single_graphic_heading_pane_g4_cp2

0x0495,	// (0x00048e08) list_single_graphic_heading_pane_g5_cp2

0x35e6,	// (0x0004bf59) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x35e6,	// (0x0004bf59) list_single_graphic_heading_pane_t1_cp2

0xc6e1,	// (0x00055054) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc6e1,	// (0x00055054) list_single_graphic_heading_pane_t2_cp2

0x359b,	// (0x0004bf0e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x359b,	// (0x0004bf0e) list_single_2graphic_pane_g1_cp2

0xc6d0,	// (0x00055043) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc6d0,	// (0x00055043) list_single_2graphic_pane_g2_cp2

0x0495,	// (0x00048e08) list_single_2graphic_pane_g3_cp2

0x35b8,	// (0x0004bf2b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x35b8,	// (0x0004bf2b) list_single_2graphic_pane_g4_cp2

0x35c4,	// (0x0004bf37) list_single_2graphic_pane_t1_cp2_ParamLimits

0x35c4,	// (0x0004bf37) list_single_2graphic_pane_t1_cp2

0x6bb3,	// (0x0004f526) list_highlight_pane_g10_cp1

0x3173,	// (0x0004bae6) list_highlight_pane_g1_cp1

0x317b,	// (0x0004baee) list_highlight_pane_g2_cp1

0x3183,	// (0x0004baf6) list_highlight_pane_g3_cp1

0x318b,	// (0x0004bafe) list_highlight_pane_g4_cp1

0x3193,	// (0x0004bb06) list_highlight_pane_g5_cp1

0x319b,	// (0x0004bb0e) list_highlight_pane_g6_cp1

0x31a3,	// (0x0004bb16) list_highlight_pane_g7_cp1

0x31ab,	// (0x0004bb1e) list_highlight_pane_g8_cp1

0x31b3,	// (0x0004bb26) list_highlight_pane_g9_cp1

0xc696,	// (0x00055009) form_field_slider_pane_t3

0xc6a4,	// (0x00055017) form_field_slider_pane_t4

0x30af,	// (0x0004ba22) slider_form_pane_ParamLimits

0x30af,	// (0x0004ba22) slider_form_pane

0x6bbd,	// (0x0004f530) control_abbreviations

0x6bbd,	// (0x0004f530) control_conventions

0x6bbd,	// (0x0004f530) control_definitions

0x6bbd,	// (0x0004f530) format_table_attribute

0x389b,	// (0x0004c20e) bg_popup_preview_window_pane_g9

0x6bbd,	// (0x0004f530) format_table_data2

0x6bbd,	// (0x0004f530) format_table_data3

0x6bbd,	// (0x0004f530) format_table_data_example

0x0008,

0x6bbd,	// (0x0004f530) intro_purpose

0xf8f5,	// (0x00058268) bg_popup_preview_window_pane_g

0x6bbd,	// (0x0004f530) texts_category

0x6bbd,	// (0x0004f530) texts_graphics

0x0507,	// (0x00048e7a) text_digital

0x0516,	// (0x00048e89) text_primary

0x0525,	// (0x00048e98) text_primary_small

0x0534,	// (0x00048ea7) text_secondary

0x0543,	// (0x00048eb6) text_title

0x4021,	// (0x0004c994) bg_passive_tab_pane_g1_cp3_srt

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp3_srt

0x402a,	// (0x0004c99d) bg_passive_tab_pane_g3_cp3_srt

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp3_srt_ParamLimits

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp3_srt

0x4033,	// (0x0004c9a6) tabs_4_active_pane_srt_g1

0xcb40,	// (0x000554b3) tabs_4_active_pane_srt_t1_ParamLimits

0xcb40,	// (0x000554b3) tabs_4_active_pane_srt_t1

0x4021,	// (0x0004c994) bg_active_tab_pane_g1_cp3_copy1

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp3_copy1

0x402a,	// (0x0004c99d) bg_active_tab_pane_g3_cp3_copy1

0x9e7f,	// (0x000527f2) tabs_2_long_active_pane_srt_ParamLimits

0x9e7f,	// (0x000527f2) tabs_2_long_active_pane_srt

0x9e7f,	// (0x000527f2) tabs_2_long_passive_pane_srt_ParamLimits

0x9e7f,	// (0x000527f2) tabs_2_long_passive_pane_srt

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp4_srt

0x3ceb,	// (0x0004c65e) bg_passive_tab_pane_g1_cp4_srt

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp4_srt

0x3cf4,	// (0x0004c667) bg_passive_tab_pane_g3_cp4_srt

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp4_srt_ParamLimits

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp4_srt

0xc932,	// (0x000552a5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc932,	// (0x000552a5) tabs_2_long_active_pane_srt_t1

0x3ceb,	// (0x0004c65e) bg_active_tab_pane_g1_cp4_srt

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp4_srt

0x3cf4,	// (0x0004c667) bg_active_tab_pane_g3_cp4_srt

0x6c17,	// (0x0004f58a) tabs_3_long_active_pane_srt_ParamLimits

0x6c17,	// (0x0004f58a) tabs_3_long_active_pane_srt

0x6c17,	// (0x0004f58a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6c17,	// (0x0004f58a) tabs_3_long_passive_pane_cp_srt

0x6c17,	// (0x0004f58a) tabs_3_long_passive_pane_srt_ParamLimits

0x6c17,	// (0x0004f58a) tabs_3_long_passive_pane_srt

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp5_srt

0xe885,	// (0x000571f8) bg_passive_tab_pane_g1_cp5_srt

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp5_srt

0xe88e,	// (0x00057201) bg_passive_tab_pane_g3_cp5_srt

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp5_srt_ParamLimits

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp5_srt

0xc91c,	// (0x0005528f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc91c,	// (0x0005528f) tabs_3_long_active_pane_srt_t1

0xe885,	// (0x000571f8) bg_active_tab_pane_g1_cp5_srt

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp5_srt

0xe88e,	// (0x00057201) bg_active_tab_pane_g3_cp5_srt

0x3ccb,	// (0x0004c63e) navi_text_pane_srt_t1

0x3cc3,	// (0x0004c636) navi_icon_pane_srt_g1

0x07b7,	// (0x0004912a) midp_editing_number_pane_srt

0x0552,	// (0x00048ec5) midp_ticker_pane_srt

0x07bf,	// (0x00049132) midp_ticker_pane_srt_g1

0x07c7,	// (0x0004913a) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000580f0) midp_ticker_pane_srt_g

0x07cf,	// (0x00049142) midp_ticker_pane_srt_t1

0x3cb4,	// (0x0004c627) midp_editing_number_pane_t1_copy1

0x1e40,	// (0x0004a7b3) listscroll_midp_pane

0x1e40,	// (0x0004a7b3) midp_form_pane

0x05bc,	// (0x00048f2f) midp_info_popup_window_ParamLimits

0x05bc,	// (0x00048f2f) midp_info_popup_window

0xa86b,	// (0x000531de) bg_popup_sub_pane_cp50_ParamLimits

0xa86b,	// (0x000531de) bg_popup_sub_pane_cp50

0x2da9,	// (0x0004b71c) listscroll_midp_info_pane_ParamLimits

0x2da9,	// (0x0004b71c) listscroll_midp_info_pane

0x2d91,	// (0x0004b704) listscroll_form_midp_pane_ParamLimits

0x2d91,	// (0x0004b704) listscroll_form_midp_pane

0x2d9d,	// (0x0004b710) scroll_bar_cp050

0xc68a,	// (0x00054ffd) list_midp_pane

0x4ae8,	// (0x0004d45b) signal_pane_g2_cp

0x2cab,	// (0x0004b61e) listscroll_midp_info_pane_t1_ParamLimits

0x2cab,	// (0x0004b61e) listscroll_midp_info_pane_t1

0x2cc3,	// (0x0004b636) listscroll_midp_info_pane_t2_ParamLimits

0x2cc3,	// (0x0004b636) listscroll_midp_info_pane_t2

0x2d01,	// (0x0004b674) listscroll_midp_info_pane_t3_ParamLimits

0x2d01,	// (0x0004b674) listscroll_midp_info_pane_t3

0x2d3b,	// (0x0004b6ae) listscroll_midp_info_pane_t4_ParamLimits

0x2d3b,	// (0x0004b6ae) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x000581a3) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x000581a3) listscroll_midp_info_pane_t

0xa935,	// (0x000532a8) scroll_pane_cp21

0x2c45,	// (0x0004b5b8) form_midp_field_choice_group_pane

0x2c4e,	// (0x0004b5c1) form_midp_field_text_pane

0x2c91,	// (0x0004b604) form_midp_field_time_pane

0x2c99,	// (0x0004b60c) form_midp_gauge_slider_pane

0x2ca2,	// (0x0004b615) form_midp_gauge_wait_pane

0x6bbd,	// (0x0004f530) form_midp_image_pane

0x9a13,	// (0x00052386) list_single_midp_pane_ParamLimits

0x9a13,	// (0x00052386) list_single_midp_pane

0xc662,	// (0x00054fd5) form_midp_field_text_pane_t1

0x29f5,	// (0x0004b368) input_focus_pane_cp050

0x2c34,	// (0x0004b5a7) list_midp_form_text_pane

0x2bd8,	// (0x0004b54b) form_midp_field_choice_group_pane_t1

0x2be6,	// (0x0004b559) input_focus_pane_cp051

0x2bfa,	// (0x0004b56d) list_midp_choice_pane

0x6bbd,	// (0x0004f530) status_idle_pane

0x2bbc,	// (0x0004b52f) form_midp_field_time_pane_t1

0x6bb3,	// (0x0004f526) wait_anim_pane_g2_copy1

0x2bca,	// (0x0004b53d) form_midp_field_time_pane_t2

0x0001,

0x066c,	// (0x00048fdf) aid_navinavi_width_2_pane

0xf82b,	// (0x0005819e) form_midp_field_time_pane_t

0x6bbd,	// (0x0004f530) input_focus_pane_cp052

0x6bbd,	// (0x0004f530) bg_input_focus_pane_cp040

0x2b7c,	// (0x0004b4ef) form_midp_gauge_slider_pane_t1

0x2b8a,	// (0x0004b4fd) form_midp_gauge_slider_pane_t2

0xc646,	// (0x00054fb9) form_midp_gauge_slider_pane_t3

0xc654,	// (0x00054fc7) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00058195) form_midp_gauge_slider_pane_t

0x2bb4,	// (0x0004b527) form_midp_slider_pane

0x9e7f,	// (0x000527f2) bg_input_focus_pane_cp041_ParamLimits

0x9e7f,	// (0x000527f2) bg_input_focus_pane_cp041

0x2b49,	// (0x0004b4bc) form_midp_gauge_wait_pane_t1_ParamLimits

0x2b49,	// (0x0004b4bc) form_midp_gauge_wait_pane_t1

0x2b5b,	// (0x0004b4ce) form_midp_gauge_wait_pane_t2_ParamLimits

0x2b5b,	// (0x0004b4ce) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x00058190) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x00058190) form_midp_gauge_wait_pane_t

0x2b6d,	// (0x0004b4e0) form_midp_wait_pane_ParamLimits

0x2b6d,	// (0x0004b4e0) form_midp_wait_pane

0x2b11,	// (0x0004b484) form_midp_image_pane_g1

0x2b1a,	// (0x0004b48d) form_midp_image_pane_t1

0x2b29,	// (0x0004b49c) form_midp_image_pane_t2

0x2b38,	// (0x0004b4ab) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00058189) form_midp_image_pane_t

0x2b08,	// (0x0004b47b) list_single_midp_pane_g1

0xeb7a,	// (0x000574ed) list_single_midp_pane_t1

0xc62f,	// (0x00054fa2) list_midp_form_item_pane_ParamLimits

0xc62f,	// (0x00054fa2) list_midp_form_item_pane

0x0614,	// (0x00048f87) list_midp_form_item_pane_t1

0x0623,	// (0x00048f96) midp_ticker_pane_g1

0x062f,	// (0x00048fa2) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x000580d6) midp_ticker_pane_g

0xaf7d,	// (0x000538f0) midp_ticker_pane_t1

0xcac1,	// (0x00055434) midp_editing_number_pane_t1

0x3f05,	// (0x0004c878) midp_editing_number_pane

0x3f14,	// (0x0004c887) midp_ticker_pane

0x3ca4,	// (0x0004c617) ai_message_heading_pane

0x6bbd,	// (0x0004f530) bg_popup_window_pane_cp14

0x3cac,	// (0x0004c61f) listscroll_ai_message_pane

0x3c2a,	// (0x0004c59d) ai_message_heading_pane_g1_ParamLimits

0x3c2a,	// (0x0004c59d) ai_message_heading_pane_g1

0x3c36,	// (0x0004c5a9) ai_message_heading_pane_g2_ParamLimits

0x3c36,	// (0x0004c5a9) ai_message_heading_pane_g2

0x3c44,	// (0x0004c5b7) ai_message_heading_pane_g3_ParamLimits

0x3c44,	// (0x0004c5b7) ai_message_heading_pane_g3

0x3c50,	// (0x0004c5c3) ai_message_heading_pane_g4_ParamLimits

0x3c50,	// (0x0004c5c3) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x000582ca) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x000582ca) ai_message_heading_pane_g

0x3c5c,	// (0x0004c5cf) ai_message_heading_pane_t1_ParamLimits

0x3c5c,	// (0x0004c5cf) ai_message_heading_pane_t1

0x3c76,	// (0x0004c5e9) ai_message_heading_pane_t2_ParamLimits

0x3c76,	// (0x0004c5e9) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x000582d3) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x000582d3) ai_message_heading_pane_t

0x3c8a,	// (0x0004c5fd) bg_popup_heading_pane_cp1_ParamLimits

0x3c8a,	// (0x0004c5fd) bg_popup_heading_pane_cp1

0x3c18,	// (0x0004c58b) list_ai_message_pane_ParamLimits

0x3c18,	// (0x0004c58b) list_ai_message_pane

0xa935,	// (0x000532a8) scroll_pane_cp10

0x3bb4,	// (0x0004c527) list_ai_message_pane_g1

0x3bbc,	// (0x0004c52f) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x000582a7) list_ai_message_pane_g

0x3bc4,	// (0x0004c537) list_ai_message_pane_t1_ParamLimits

0x3bc4,	// (0x0004c537) list_ai_message_pane_t1

0x3bd9,	// (0x0004c54c) list_ai_message_pane_t2_ParamLimits

0x3bd9,	// (0x0004c54c) list_ai_message_pane_t2

0x3bee,	// (0x0004c561) list_ai_message_pane_t3_ParamLimits

0x3bee,	// (0x0004c561) list_ai_message_pane_t3

0x3c03,	// (0x0004c576) list_ai_message_pane_t4_ParamLimits

0x3c03,	// (0x0004c576) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x000582ac) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x000582ac) list_ai_message_pane_t

0xc902,	// (0x00055275) cell_ai_soft_ind_pane_ParamLimits

0xc902,	// (0x00055275) cell_ai_soft_ind_pane

0x064d,	// (0x00048fc0) cell_ai_soft_ind_pane_g1_ParamLimits

0x064d,	// (0x00048fc0) cell_ai_soft_ind_pane_g1

0x6bbd,	// (0x0004f530) grid_highlight_cp1

0x065a,	// (0x00048fcd) text_secondary_cp56_ParamLimits

0x065a,	// (0x00048fcd) text_secondary_cp56

0x3b72,	// (0x0004c4e5) example_general_pane_ParamLimits

0x3b72,	// (0x0004c4e5) example_general_pane

0x3b7e,	// (0x0004c4f1) example_parent_pane_g1_ParamLimits

0x3b7e,	// (0x0004c4f1) example_parent_pane_g1

0x3b8a,	// (0x0004c4fd) example_parent_pane_t1_ParamLimits

0x3b8a,	// (0x0004c4fd) example_parent_pane_t1

0xb554,	// (0x00053ec7) popup_preview_text_window_ParamLimits

0xb554,	// (0x00053ec7) popup_preview_text_window

0xea26,	// (0x00057399) list_single_pane_cp2_g4

0xa20e,	// (0x00052b81) bg_popup_preview_window_pane_ParamLimits

0xa20e,	// (0x00052b81) bg_popup_preview_window_pane

0x38a5,	// (0x0004c218) popup_preview_text_window_t1_ParamLimits

0x38a5,	// (0x0004c218) popup_preview_text_window_t1

0x38c3,	// (0x0004c236) popup_preview_text_window_t2_ParamLimits

0x38c3,	// (0x0004c236) popup_preview_text_window_t2

0x390c,	// (0x0004c27f) popup_preview_text_window_t3_ParamLimits

0x390c,	// (0x0004c27f) popup_preview_text_window_t3

0x3951,	// (0x0004c2c4) popup_preview_text_window_t4_ParamLimits

0x3951,	// (0x0004c2c4) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0005827b) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0005827b) popup_preview_text_window_t

0x39cf,	// (0x0004c342) scroll_pane_cp11

0x2981,	// (0x0004b2f4) bg_popup_preview_window_pane_g1

0x3859,	// (0x0004c1cc) bg_popup_preview_window_pane_g2

0x3863,	// (0x0004c1d6) bg_popup_preview_window_pane_g3

0x386d,	// (0x0004c1e0) bg_popup_preview_window_pane_g4

0x3877,	// (0x0004c1ea) bg_popup_preview_window_pane_g5

0x3881,	// (0x0004c1f4) bg_popup_preview_window_pane_g6

0x3889,	// (0x0004c1fc) bg_popup_preview_window_pane_g7

0x3891,	// (0x0004c204) bg_popup_preview_window_pane_g8

0xed04,	// (0x00057677) aid_popup_width_pane

0xb4c4,	// (0x00053e37) popup_midp_note_alarm_window_ParamLimits

0xb4c4,	// (0x00053e37) popup_midp_note_alarm_window

0xa7b3,	// (0x00053126) data_form_pane_ParamLimits

0x98a2,	// (0x00052215) form_field_data_pane_g1

0x98ac,	// (0x0005221f) form_field_data_pane_t1_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_ParamLimits

0xe634,	// (0x00056fa7) data_form_wide_pane_ParamLimits

0xe645,	// (0x00056fb8) form_field_data_wide_pane_g1

0xe651,	// (0x00056fc4) form_field_data_wide_pane_t1_ParamLimits

0xa4c4,	// (0x00052e37) input_focus_pane_cp6_ParamLimits

0xa8e0,	// (0x00053253) input_popup_find_pane_g1_ParamLimits

0xa8e0,	// (0x00053253) input_popup_find_pane_g1

0xf4c6,	// (0x00057e39) aid_navi_side_left_pane

0xf4db,	// (0x00057e4e) aid_navi_side_right_pane

0x326e,	// (0x0004bbe1) bg_popup_window_pane_cp30_ParamLimits

0x326e,	// (0x0004bbe1) bg_popup_window_pane_cp30

0x32e8,	// (0x0004bc5b) popup_midp_note_alarm_window_g1_ParamLimits

0x32e8,	// (0x0004bc5b) popup_midp_note_alarm_window_g1

0x3318,	// (0x0004bc8b) popup_midp_note_alarm_window_t1_ParamLimits

0x3318,	// (0x0004bc8b) popup_midp_note_alarm_window_t1

0x33b9,	// (0x0004bd2c) popup_midp_note_alarm_window_t2_ParamLimits

0x33b9,	// (0x0004bd2c) popup_midp_note_alarm_window_t2

0x3467,	// (0x0004bdda) popup_midp_note_alarm_window_t3_ParamLimits

0x3467,	// (0x0004bdda) popup_midp_note_alarm_window_t3

0x3499,	// (0x0004be0c) popup_midp_note_alarm_window_t4_ParamLimits

0x3499,	// (0x0004be0c) popup_midp_note_alarm_window_t4

0x34bf,	// (0x0004be32) popup_midp_note_alarm_window_t5_ParamLimits

0x34bf,	// (0x0004be32) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x00058218) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x00058218) popup_midp_note_alarm_window_t

0x356b,	// (0x0004bede) wait_bar_pane_cp1_ParamLimits

0x356b,	// (0x0004bede) wait_bar_pane_cp1

0x6bbd,	// (0x0004f530) wait_anim_pane_copy1

0x6bbd,	// (0x0004f530) wait_border_pane_copy1

0x2f53,	// (0x0004b8c6) wait_border_pane_g1_copy1

0xe66b,	// (0x00056fde) form_field_popup_pane_g1

0x98c6,	// (0x00052239) form_field_popup_pane_t1_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_cp7_ParamLimits

0xa7ed,	// (0x00053160) list_form_pane_ParamLimits

0xe673,	// (0x00056fe6) form_field_popup_wide_pane_g1

0xe67b,	// (0x00056fee) form_field_popup_wide_pane_t1_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_cp8_ParamLimits

0xa7f9,	// (0x0005316c) list_form_wide_pane_ParamLimits

0x40ae,	// (0x0004ca21) aid_size_cell_graphic_pane

0x9945,	// (0x000522b8) data_form_pane_t1_ParamLimits

0x9a41,	// (0x000523b4) data_form_wide_pane_t1_ParamLimits

0xb958,	// (0x000542cb) bg_status_flat_pane

0x9dbf,	// (0x00052732) title_pane_t1_ParamLimits

0x6bdf,	// (0x0004f552) title_pane_t2_ParamLimits

0x6c05,	// (0x0004f578) title_pane_t3_ParamLimits

0xf55d,	// (0x00057ed0) title_pane_t_ParamLimits

0xac92,	// (0x00053605) level_1_signal_ParamLimits

0xaca4,	// (0x00053617) level_2_signal_ParamLimits

0xacb7,	// (0x0005362a) level_3_signal_ParamLimits

0xacca,	// (0x0005363d) level_4_signal_ParamLimits

0xacdd,	// (0x00053650) level_5_signal_ParamLimits

0xacf0,	// (0x00053663) level_6_signal_ParamLimits

0xad03,	// (0x00053676) level_7_signal_ParamLimits

0xac92,	// (0x00053605) level_1_battery_ParamLimits

0xaca4,	// (0x00053617) level_2_battery_ParamLimits

0xacb7,	// (0x0005362a) level_3_battery_ParamLimits

0xacca,	// (0x0005363d) level_4_battery_ParamLimits

0xacdd,	// (0x00053650) level_5_battery_ParamLimits

0xacf0,	// (0x00053663) level_6_battery_ParamLimits

0xad03,	// (0x00053676) level_7_battery_ParamLimits

0x3173,	// (0x0004bae6) bg_status_flat_pane_g1

0x317b,	// (0x0004baee) bg_status_flat_pane_g2

0x3183,	// (0x0004baf6) bg_status_flat_pane_g3

0x318b,	// (0x0004bafe) bg_status_flat_pane_g4

0x3193,	// (0x0004bb06) bg_status_flat_pane_g5

0x319b,	// (0x0004bb0e) bg_status_flat_pane_g6

0x31a3,	// (0x0004bb16) bg_status_flat_pane_g7

0x9e53,	// (0x000527c6) tabs_3_active_pane_t1_ParamLimits

0x9e53,	// (0x000527c6) tabs_3_passive_pane_t1_ParamLimits

0x9e6d,	// (0x000527e0) tabs_4_active_pane_t1_ParamLimits

0x9e6d,	// (0x000527e0) tabs_4_1_passive_pane_t1_ParamLimits

0xa977,	// (0x000532ea) tabs_2_active_pane_t1_ParamLimits

0xa977,	// (0x000532ea) tabs_2_passive_pane_t1_ParamLimits

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp4_ParamLimits

0xa989,	// (0x000532fc) tabs_2_long_active_pane_t1_ParamLimits

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp4_ParamLimits

0x09af,	// (0x00049322) list_single_midp_graphic_pane_t1_ParamLimits

0x9e7f,	// (0x000527f2) bg_active_tab_pane_cp5_ParamLimits

0xa99c,	// (0x0005330f) tabs_3_long_active_pane_t1_ParamLimits

0x1e40,	// (0x0004a7b3) bg_passive_tab_pane_cp5_ParamLimits

0x09af,	// (0x00049322) list_single_midp_graphic_pane_t1

0xb958,	// (0x000542cb) bg_status_flat_pane_ParamLimits

0x25f9,	// (0x0004af6c) indicator_pane_cp2_ParamLimits

0x25f9,	// (0x0004af6c) indicator_pane_cp2

0xbaee,	// (0x00054461) navi_pane_srt_ParamLimits

0xbaee,	// (0x00054461) navi_pane_srt

0x2760,	// (0x0004b0d3) popup_clock_digital_analogue_window_cp1

0x9f9c,	// (0x0005290f) indicator_pane_t1

0x0552,	// (0x00048ec5) copy_highlight_pane

0x0552,	// (0x00048ec5) cursor_graphics_pane

0x0552,	// (0x00048ec5) graphic_within_text_pane

0x0552,	// (0x00048ec5) link_highlight_pane

0x3992,	// (0x0004c305) popup_preview_text_window_t5_ParamLimits

0x3992,	// (0x0004c305) popup_preview_text_window_t5

0x0676,	// (0x00048fe9) cursor_digital_pane

0x0676,	// (0x00048fe9) cursor_primary_pane

0x0687,	// (0x00048ffa) cursor_primary_small_pane

0x068f,	// (0x00049002) cursor_secondary_pane

0x0697,	// (0x0004900a) cursor_title_pane

0x0676,	// (0x00048fe9) link_highlight_digital_pane

0x067e,	// (0x00048ff1) link_highlight_primary_pane

0x0687,	// (0x00048ffa) link_highlight_primary_small_pane

0x068f,	// (0x00049002) link_highlight_secondary_pane

0x0697,	// (0x0004900a) link_highlight_title_pane

0x0676,	// (0x00048fe9) copy_highlight_digital_pane

0x0676,	// (0x00048fe9) copy_highlight_primary_pane

0x0687,	// (0x00048ffa) copy_highlight_primary_small_pane

0x068f,	// (0x00049002) copy_highlight_secondary_pane

0x0697,	// (0x0004900a) copy_highlight_title_pane

0x068f,	// (0x00049002) graphic_text_digital_pane

0x3211,	// (0x0004bb84) graphic_text_primary_pane

0x321a,	// (0x0004bb8d) graphic_text_primary_small_pane

0x0687,	// (0x00048ffa) graphic_text_secondary_pane

0x0676,	// (0x00048fe9) graphic_text_title_pane

0xaf8f,	// (0x00053902) cursor_primary_pane_g1

0x3203,	// (0x0004bb76) cursor_text_primary_t1

0xc6c6,	// (0x00055039) cursor_primary_small_pane_g1

0x31f5,	// (0x0004bb68) cursor_text_primary_small_t1

0xc6bc,	// (0x0005502f) cursor_primary_small_pane_g1_copy1

0x31dd,	// (0x0004bb50) cursor_text_primary_small_t1_copy1

0x31bb,	// (0x0004bb2e) cursor_text_title_t1

0xc6b2,	// (0x00055025) cursor_title_pane_g1

0xaf8f,	// (0x00053902) cursor_digital_pane_g1

0x06a9,	// (0x0004901c) cursor_text_digital_t1

0x06b7,	// (0x0004902a) link_highlight_primary_pane_g1

0x3164,	// (0x0004bad7) link_highlight_primary_pane_t1

0x06b7,	// (0x0004902a) link_highlight_primary_small_pane_g1

0x06bf,	// (0x00049032) link_highlight_primary_small_pane_t1

0x06ce,	// (0x00049041) link_highlight_secondary_pane_g1

0x06d6,	// (0x00049049) link_highlight_secondary_pane_t1

0x30d8,	// (0x0004ba4b) link_highlight_title_pane_g1

0x30e0,	// (0x0004ba53) link_highlight_title_pane_t1

0x30c1,	// (0x0004ba34) link_highlight_digital_pane_g1

0x30c9,	// (0x0004ba3c) link_highlight_digital_pane_t1

0x2f89,	// (0x0004b8fc) copy_highlight_primary_pane_g1

0x2fa0,	// (0x0004b913) copy_highlight_primary_pane_t1

0x2f89,	// (0x0004b8fc) copy_highlight_primary_small_pane_g1

0x2f91,	// (0x0004b904) copy_highlight_primary_small_pane_t1

0x06e5,	// (0x00049058) copy_highlight_secondary_pane_g1

0x06ed,	// (0x00049060) copy_highlight_secondary_pane_t1

0x2f72,	// (0x0004b8e5) copy_highlight_title_pane_g1

0x2f7a,	// (0x0004b8ed) copy_highlight_title_pane_t1

0x2f89,	// (0x0004b8fc) copy_highlight_digital_pane_g1

0x427e,	// (0x0004cbf1) copy_highlight_digital_pane_t1

0x41d2,	// (0x0004cb45) graphic_text_primary_pane_g1

0x4262,	// (0x0004cbd5) graphic_text_primary_pane_t1

0x4270,	// (0x0004cbe3) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x00058347) graphic_text_primary_pane_t

0x423e,	// (0x0004cbb1) graphic_text_primary_small_pane_g1

0x4246,	// (0x0004cbb9) graphic_text_primary_small_pane_t1

0x4254,	// (0x0004cbc7) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x00058342) graphic_text_primary_small_pane_t

0x421a,	// (0x0004cb8d) graphic_text_secondary_pane_g1

0x4222,	// (0x0004cb95) graphic_text_secondary_pane_t1

0x4230,	// (0x0004cba3) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0005833d) graphic_text_secondary_pane_t

0x41f6,	// (0x0004cb69) graphic_text_title_pane_g1

0x41fe,	// (0x0004cb71) graphic_text_title_pane_t1

0x420c,	// (0x0004cb7f) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x00058338) graphic_text_title_pane_t

0x41d2,	// (0x0004cb45) graphic_text_digital_pane_g1

0x41da,	// (0x0004cb4d) graphic_text_digital_pane_t1

0x41e8,	// (0x0004cb5b) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x00058333) graphic_text_digital_pane_t

0x9e7f,	// (0x000527f2) navi_icon_pane_srt_ParamLimits

0x9e7f,	// (0x000527f2) navi_icon_pane_srt

0x6bbd,	// (0x0004f530) navi_midp_pane_srt

0x6bbd,	// (0x0004f530) navi_navi_pane_srt

0x9e7f,	// (0x000527f2) navi_text_pane_srt_ParamLimits

0x9e7f,	// (0x000527f2) navi_text_pane_srt

0x419d,	// (0x0004cb10) navi_navi_icon_text_pane_srt

0x41a5,	// (0x0004cb18) navi_navi_pane_srt_g1_ParamLimits

0x41a5,	// (0x0004cb18) navi_navi_pane_srt_g1

0x41b7,	// (0x0004cb2a) navi_navi_pane_srt_g2_ParamLimits

0x41b7,	// (0x0004cb2a) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0005832e) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0005832e) navi_navi_pane_srt_g

0x41c9,	// (0x0004cb3c) navi_navi_tabs_pane_srt

0x419d,	// (0x0004cb10) navi_navi_text_pane_srt

0x419d,	// (0x0004cb10) navi_navi_volume_pane_srt

0x418e,	// (0x0004cb01) navi_navi_text_pane_srt_t1

0x0d61,	// (0x000496d4) navi_navi_volume_pane_srt_g1

0x0d69,	// (0x000496dc) volume_small_pane_srt_ParamLimits

0x0d69,	// (0x000496dc) volume_small_pane_srt

0x06fc,	// (0x0004906f) volume_small_pane_srt_g1_ParamLimits

0x06fc,	// (0x0004906f) volume_small_pane_srt_g1

0x070c,	// (0x0004907f) volume_small_pane_srt_g2_ParamLimits

0x070c,	// (0x0004907f) volume_small_pane_srt_g2

0x071d,	// (0x00049090) volume_small_pane_srt_g3_ParamLimits

0x071d,	// (0x00049090) volume_small_pane_srt_g3

0x072e,	// (0x000490a1) volume_small_pane_srt_g4_ParamLimits

0x072e,	// (0x000490a1) volume_small_pane_srt_g4

0x073f,	// (0x000490b2) volume_small_pane_srt_g5_ParamLimits

0x073f,	// (0x000490b2) volume_small_pane_srt_g5

0x0750,	// (0x000490c3) volume_small_pane_srt_g6_ParamLimits

0x0750,	// (0x000490c3) volume_small_pane_srt_g6

0x0761,	// (0x000490d4) volume_small_pane_srt_g7_ParamLimits

0x0761,	// (0x000490d4) volume_small_pane_srt_g7

0x0772,	// (0x000490e5) volume_small_pane_srt_g8_ParamLimits

0x0772,	// (0x000490e5) volume_small_pane_srt_g8

0x0783,	// (0x000490f6) volume_small_pane_srt_g9_ParamLimits

0x0783,	// (0x000490f6) volume_small_pane_srt_g9

0x0794,	// (0x00049107) volume_small_pane_srt_g10_ParamLimits

0x0794,	// (0x00049107) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x000580db) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x000580db) volume_small_pane_srt_g

0xa2c3,	// (0x00052c36) query_popup_data_pane_cp2

0x4174,	// (0x0004cae7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4174,	// (0x0004cae7) navi_navi_icon_text_pane_srt_t1

0x3211,	// (0x0004bb84) navi_tabs_2_long_pane_srt

0x3211,	// (0x0004bb84) navi_tabs_2_pane_srt

0x3211,	// (0x0004bb84) navi_tabs_3_long_pane_srt

0x3211,	// (0x0004bb84) navi_tabs_3_pane_srt

0x3211,	// (0x0004bb84) navi_tabs_4_pane_srt

0x0d41,	// (0x000496b4) tabs_2_active_pane_srt_ParamLimits

0x0d41,	// (0x000496b4) tabs_2_active_pane_srt

0x0d51,	// (0x000496c4) tabs_2_passive_pane_srt_ParamLimits

0x0d51,	// (0x000496c4) tabs_2_passive_pane_srt

0x29f5,	// (0x0004b368) bg_passive_tab_pane_cp1_srt_ParamLimits

0x29f5,	// (0x0004b368) bg_passive_tab_pane_cp1_srt

0x4140,	// (0x0004cab3) bg_passive_tab_pane_g1_cp1_srt

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp1_srt

0x4149,	// (0x0004cabc) bg_passive_tab_pane_g3_cp1_srt

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp1_srt_ParamLimits

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp1_srt

0x4152,	// (0x0004cac5) tabs_2_active_pane_srt_g1

0xcbc1,	// (0x00055534) tabs_2_active_pane_srt_t1_ParamLimits

0xcbc1,	// (0x00055534) tabs_2_active_pane_srt_t1

0x4140,	// (0x0004cab3) bg_active_tab_pane_g1_cp1_srt

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp1_srt

0x4149,	// (0x0004cabc) bg_active_tab_pane_g3_cp1_srt

0x0d0e,	// (0x00049681) tabs_3_active_pane_srt_ParamLimits

0x0d0e,	// (0x00049681) tabs_3_active_pane_srt

0x0d1f,	// (0x00049692) tabs_3_passive_pane_cp_srt_ParamLimits

0x0d1f,	// (0x00049692) tabs_3_passive_pane_cp_srt

0x0d30,	// (0x000496a3) tabs_3_passive_pane_srt_ParamLimits

0x0d30,	// (0x000496a3) tabs_3_passive_pane_srt

0x29f5,	// (0x0004b368) bg_passive_tab_pane_cp2_srt_ParamLimits

0x29f5,	// (0x0004b368) bg_passive_tab_pane_cp2_srt

0x07a5,	// (0x00049118) bg_passive_tab_pane_g1_cp2_srt

0xe83e,	// (0x000571b1) bg_passive_tab_pane_g2_cp2_srt

0x07ae,	// (0x00049121) bg_passive_tab_pane_g3_cp2_srt

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp2_srt_ParamLimits

0x6c17,	// (0x0004f58a) bg_active_tab_pane_cp2_srt

0x4126,	// (0x0004ca99) tabs_3_active_pane_srt_g1

0xcbab,	// (0x0005551e) tabs_3_active_pane_srt_t1_ParamLimits

0xcbab,	// (0x0005551e) tabs_3_active_pane_srt_t1

0x07a5,	// (0x00049118) bg_active_tab_pane_g1_cp2_srt

0xe83e,	// (0x000571b1) bg_active_tab_pane_g2_cp2_srt

0x07ae,	// (0x00049121) bg_active_tab_pane_g3_cp2_srt

0x0cc6,	// (0x00049639) tabs_4_active_pane_srt_ParamLimits

0x0cc6,	// (0x00049639) tabs_4_active_pane_srt

0x0cd8,	// (0x0004964b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0cd8,	// (0x0004964b) tabs_4_passive_pane_cp2_srt

0x1dd6,	// (0x0004a749) aid_size_cell_toolbar

0x3d5e,	// (0x0004c6d1) main_idle_act_pane_ParamLimits

0x2009,	// (0x0004a97c) popup_large_graphic_colour_window_ParamLimits

0xb81a,	// (0x0005418d) popup_toolbar_window_ParamLimits

0xb81a,	// (0x0005418d) popup_toolbar_window

0x3f36,	// (0x0004c8a9) list_single_graphic_2heading_pane_ParamLimits

0x3f36,	// (0x0004c8a9) list_single_graphic_2heading_pane

0xab4c,	// (0x000534bf) aid_size_cell_apps_grid_lsc_pane

0xab5e,	// (0x000534d1) aid_size_cell_apps_grid_prt_pane

0x1e40,	// (0x0004a7b3) bg_wml_button_pane_cp1_ParamLimits

0x1e40,	// (0x0004a7b3) bg_wml_button_pane_cp1

0xc662,	// (0x00054fd5) form_midp_field_text_pane_t1_ParamLimits

0x29f5,	// (0x0004b368) input_focus_pane_cp050_ParamLimits

0x2c34,	// (0x0004b5a7) list_midp_form_text_pane_ParamLimits

0x2be6,	// (0x0004b559) input_focus_pane_cp051_ParamLimits

0x2bfa,	// (0x0004b56d) list_midp_choice_pane_ParamLimits

0xc619,	// (0x00054f8c) list_single_2graphic_pane_cp3_ParamLimits

0xc619,	// (0x00054f8c) list_single_2graphic_pane_cp3

0x4e0b,	// (0x0004d77e) list_single_midp_graphic_pane_ParamLimits

0x4e0b,	// (0x0004d77e) list_single_midp_graphic_pane

0xea52,	// (0x000573c5) list_single_graphic_2heading_pane_g1_ParamLimits

0xea52,	// (0x000573c5) list_single_graphic_2heading_pane_g1

0xea5e,	// (0x000573d1) list_single_graphic_2heading_pane_g4_ParamLimits

0xea5e,	// (0x000573d1) list_single_graphic_2heading_pane_g4

0xea6a,	// (0x000573dd) list_single_graphic_2heading_pane_g5_ParamLimits

0xea6a,	// (0x000573dd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005812e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005812e) list_single_graphic_2heading_pane_g

0xea76,	// (0x000573e9) list_single_graphic_2heading_pane_t1_ParamLimits

0xea76,	// (0x000573e9) list_single_graphic_2heading_pane_t1

0xea8a,	// (0x000573fd) list_single_graphic_2heading_pane_t2_ParamLimits

0xea8a,	// (0x000573fd) list_single_graphic_2heading_pane_t2

0xeaa6,	// (0x00057419) list_single_graphic_2heading_pane_t3_ParamLimits

0xeaa6,	// (0x00057419) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00058135) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00058135) list_single_graphic_2heading_pane_t

0x28bf,	// (0x0004b232) bg_popup_sub_pane_cp2

0x28e9,	// (0x0004b25c) grid_toobar_pane

0x0927,	// (0x0004929a) cell_toolbar_pane_ParamLimits

0x0927,	// (0x0004929a) cell_toolbar_pane

0x2925,	// (0x0004b298) cell_toolbar_pane_g1_ParamLimits

0x2925,	// (0x0004b298) cell_toolbar_pane_g1

0x2939,	// (0x0004b2ac) cell_toolbar_pane_g2_ParamLimits

0x2939,	// (0x0004b2ac) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x00058143) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x00058143) cell_toolbar_pane_g

0x295b,	// (0x0004b2ce) grid_highlight_pane_cp2_ParamLimits

0x295b,	// (0x0004b2ce) grid_highlight_pane_cp2

0x2975,	// (0x0004b2e8) toolbar_button_pane

0x2981,	// (0x0004b2f4) toolbar_button_pane_g1

0x2989,	// (0x0004b2fc) toolbar_button_pane_g2

0x2991,	// (0x0004b304) toolbar_button_pane_g3

0x2999,	// (0x0004b30c) toolbar_button_pane_g4

0x29a1,	// (0x0004b314) toolbar_button_pane_g5

0x29a9,	// (0x0004b31c) toolbar_button_pane_g6

0x29b1,	// (0x0004b324) toolbar_button_pane_g7

0x29b9,	// (0x0004b32c) toolbar_button_pane_g8

0x29c1,	// (0x0004b334) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00058148) toolbar_button_pane_g

0x096b,	// (0x000492de) list_single_2graphic_pane_g1_cp3_ParamLimits

0x096b,	// (0x000492de) list_single_2graphic_pane_g1_cp3

0xbc0f,	// (0x00054582) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc0f,	// (0x00054582) list_single_2graphic_pane_g2_cp3

0xe94f,	// (0x000572c2) list_single_2graphic_pane_g3_cp3

0x0988,	// (0x000492fb) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0988,	// (0x000492fb) list_single_2graphic_pane_g4_cp3

0x0994,	// (0x00049307) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0994,	// (0x00049307) list_single_2graphic_pane_t1_cp3

0xe943,	// (0x000572b6) list_single_midp_graphic_pane_g2_ParamLimits

0xe943,	// (0x000572b6) list_single_midp_graphic_pane_g2

0xea3a,	// (0x000573ad) aid_zoom_text_primary

0xea42,	// (0x000573b5) aid_zoom_text_secondary

0x1d35,	// (0x0004a6a8) status_small_pane_g7_ParamLimits

0x1d35,	// (0x0004a6a8) status_small_pane_g7

0x1d58,	// (0x0004a6cb) status_small_pane_t1_ParamLimits

0x9da7,	// (0x0005271a) title_pane_g2

0x0003,

0xf554,	// (0x00057ec7) title_pane_g

0xa36c,	// (0x00052cdf) aid_size_cell_colour_1_pane_ParamLimits

0xa36c,	// (0x00052cdf) aid_size_cell_colour_1_pane

0xa380,	// (0x00052cf3) aid_size_cell_colour_2_pane_ParamLimits

0xa380,	// (0x00052cf3) aid_size_cell_colour_2_pane

0xa394,	// (0x00052d07) aid_size_cell_colour_3_pane_ParamLimits

0xa394,	// (0x00052d07) aid_size_cell_colour_3_pane

0xa3a8,	// (0x00052d1b) aid_size_cell_colour_4_pane_ParamLimits

0xa3a8,	// (0x00052d1b) aid_size_cell_colour_4_pane

0xf402,	// (0x00057d75) title_pane_stacon_g1_ParamLimits

0xf402,	// (0x00057d75) title_pane_stacon_g1

0x2ff7,	// (0x0004b96a) popup_note_wait_window_g3_ParamLimits

0x2ff7,	// (0x0004b96a) popup_note_wait_window_g3

0x306e,	// (0x0004b9e1) popup_note_wait_window_t5_ParamLimits

0x306e,	// (0x0004b9e1) popup_note_wait_window_t5

0x6bbd,	// (0x0004f530) main_feb_china_hwr_fs_writing_pane

0xb1b1,	// (0x00053b24) popup_feb_china_hwr_fs_window_ParamLimits

0xb1b1,	// (0x00053b24) popup_feb_china_hwr_fs_window

0xbc20,	// (0x00054593) aid_size_cell_hwr_fs_ParamLimits

0xbc20,	// (0x00054593) aid_size_cell_hwr_fs

0x29f5,	// (0x0004b368) bg_popup_sub_pane_cp3_ParamLimits

0x29f5,	// (0x0004b368) bg_popup_sub_pane_cp3

0xbc35,	// (0x000545a8) grid_hwr_fs_pane_ParamLimits

0xbc35,	// (0x000545a8) grid_hwr_fs_pane

0x0a0a,	// (0x0004937d) linegrid_hwr_fs_pane_ParamLimits

0x0a0a,	// (0x0004937d) linegrid_hwr_fs_pane

0xbc4d,	// (0x000545c0) cell_hwr_fs_pane_ParamLimits

0xbc4d,	// (0x000545c0) cell_hwr_fs_pane

0x2a01,	// (0x0004b374) linegrid_hwr_fs_pane_g1_ParamLimits

0x2a01,	// (0x0004b374) linegrid_hwr_fs_pane_g1

0xc5ed,	// (0x00054f60) linegrid_hwr_fs_pane_g2_ParamLimits

0xc5ed,	// (0x00054f60) linegrid_hwr_fs_pane_g2

0x2a1f,	// (0x0004b392) linegrid_hwr_fs_pane_g3_ParamLimits

0x2a1f,	// (0x0004b392) linegrid_hwr_fs_pane_g3

0x0a3e,	// (0x000493b1) linegrid_hwr_fs_pane_g4_ParamLimits

0x0a3e,	// (0x000493b1) linegrid_hwr_fs_pane_g4

0x0a5c,	// (0x000493cf) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a5c,	// (0x000493cf) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0005816e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0005816e) linegrid_hwr_fs_pane_g

0x2a2b,	// (0x0004b39e) cell_hwr_fs_pane_g1_ParamLimits

0x2a2b,	// (0x0004b39e) cell_hwr_fs_pane_g1

0x27f6,	// (0x0004b169) cell_hwr_fs_pane_g2_ParamLimits

0x27f6,	// (0x0004b169) cell_hwr_fs_pane_g2

0xc5ff,	// (0x00054f72) cell_hwr_fs_pane_g3_ParamLimits

0xc5ff,	// (0x00054f72) cell_hwr_fs_pane_g3

0xc60c,	// (0x00054f7f) cell_hwr_fs_pane_g4_ParamLimits

0xc60c,	// (0x00054f7f) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00058179) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00058179) cell_hwr_fs_pane_g

0xbc73,	// (0x000545e6) cell_hwr_fs_pane_t1

0x6bbd,	// (0x0004f530) grid_highlight_pane_cp6

0x6bbd,	// (0x0004f530) main_idle_act2_pane

0xa91c,	// (0x0005328f) aid_inside_area_popup_secondary

0xc72d,	// (0x000550a0) aid_inside_area_window_primary_ParamLimits

0xc72d,	// (0x000550a0) aid_inside_area_window_primary

0x428d,	// (0x0004cc00) ai2_news_ticker_pane

0x4295,	// (0x0004cc08) aid_size_cell_ai1_link_ParamLimits

0x4295,	// (0x0004cc08) aid_size_cell_ai1_link

0x42af,	// (0x0004cc22) popup_ai2_data_window_ParamLimits

0x42af,	// (0x0004cc22) popup_ai2_data_window

0x42cd,	// (0x0004cc40) popup_ai2_link_window_ParamLimits

0x42cd,	// (0x0004cc40) popup_ai2_link_window

0x29f5,	// (0x0004b368) bg_popup_sub_pane_cp4_ParamLimits

0x29f5,	// (0x0004b368) bg_popup_sub_pane_cp4

0x42e3,	// (0x0004cc56) grid_ai2_link_pane_ParamLimits

0x42e3,	// (0x0004cc56) grid_ai2_link_pane

0x42fa,	// (0x0004cc6d) popup_ai2_link_window_g1_ParamLimits

0x42fa,	// (0x0004cc6d) popup_ai2_link_window_g1

0x4306,	// (0x0004cc79) popup_ai2_link_window_g2_ParamLimits

0x4306,	// (0x0004cc79) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0005834c) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0005834c) popup_ai2_link_window_g

0x4317,	// (0x0004cc8a) ai2_mp_button_pane

0x431f,	// (0x0004cc92) ai2_mp_volume_pane

0x2be6,	// (0x0004b559) bg_popup_sub_pane_cp5_ParamLimits

0x2be6,	// (0x0004b559) bg_popup_sub_pane_cp5

0x4327,	// (0x0004cc9a) heading_ai2_gene_pane_ParamLimits

0x4327,	// (0x0004cc9a) heading_ai2_gene_pane

0x4333,	// (0x0004cca6) list_ai2_gene_pane_ParamLimits

0x4333,	// (0x0004cca6) list_ai2_gene_pane

0x437b,	// (0x0004ccee) cell_ai2_link_pane_ParamLimits

0x437b,	// (0x0004ccee) cell_ai2_link_pane

0x4391,	// (0x0004cd04) cell_ai2_link_pane_g1

0x6bbd,	// (0x0004f530) grid_highlight_pane_cp7

0x0d7e,	// (0x000496f1) ai2_mp_volume_pane_g1

0x4490,	// (0x0004ce03) ai2_mp_volume_pane_g2

0x43d9,	// (0x0004cd4c) list_ai2_gene_pane_t1

0x4498,	// (0x0004ce0b) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x00058365) ai2_mp_volume_pane_g

0x0d86,	// (0x000496f9) volume_small_pane_cp3

0x44a0,	// (0x0004ce13) aid_size_cell_ai2_button

0x44a8,	// (0x0004ce1b) grid_ai2_button_pane

0x44b1,	// (0x0004ce24) cell_ai2_button_pane_ParamLimits

0x44b1,	// (0x0004ce24) cell_ai2_button_pane

0x6bb3,	// (0x0004f526) cell_ai2_button_pane_g1

0x6bbd,	// (0x0004f530) grid_highlight_pane_cp8

0x4450,	// (0x0004cdc3) ai2_gene_pane_t1_ParamLimits

0x4450,	// (0x0004cdc3) ai2_gene_pane_t1

0xb121,	// (0x00053a94) aid_height_parent_landscape

0xc949,	// (0x000552bc) aid_height_set_list

0x3d5e,	// (0x0004c6d1) aid_size_parent

0x40ae,	// (0x0004ca21) aid_size_cell_graphic_pane_ParamLimits

0x4343,	// (0x0004ccb6) popup_ai2_data_window_g1_ParamLimits

0x4343,	// (0x0004ccb6) popup_ai2_data_window_g1

0x434f,	// (0x0004ccc2) ai2_news_ticker_pane_g1

0x4357,	// (0x0004ccca) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x00058351) ai2_news_ticker_pane_g

0x435f,	// (0x0004ccd2) ai2_news_ticker_pane_t1

0x436d,	// (0x0004cce0) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x00058356) ai2_news_ticker_pane_t

0x439a,	// (0x0004cd0d) heading_ai2_gene_pane_g1

0x43a2,	// (0x0004cd15) heading_ai2_gene_pane_t1_ParamLimits

0x43a2,	// (0x0004cd15) heading_ai2_gene_pane_t1

0x43b7,	// (0x0004cd2a) list_highlight_pane_cp6

0x43bf,	// (0x0004cd32) ai2_gene_pane_ParamLimits

0x43bf,	// (0x0004cd32) ai2_gene_pane

0x43e7,	// (0x0004cd5a) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0005835b) list_ai2_gene_pane_t

0x43f5,	// (0x0004cd68) list_highlight_pane_cp8_ParamLimits

0x43f5,	// (0x0004cd68) list_highlight_pane_cp8

0x4406,	// (0x0004cd79) ai2_gene_pane_g1_ParamLimits

0x4406,	// (0x0004cd79) ai2_gene_pane_g1

0x4418,	// (0x0004cd8b) ai2_gene_pane_g2_ParamLimits

0x4418,	// (0x0004cd8b) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x00058360) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x00058360) ai2_gene_pane_g

0xa6e9,	// (0x0005305c) scroll_pane_cp12

0xb0e0,	// (0x00053a53) control_pane_t3_ParamLimits

0xb0e0,	// (0x00053a53) control_pane_t3

0x1d49,	// (0x0004a6bc) status_small_pane_g8_ParamLimits

0x1d49,	// (0x0004a6bc) status_small_pane_g8

0xb253,	// (0x00053bc6) popup_find_window_ParamLimits

0xb504,	// (0x00053e77) popup_note_image_window_ParamLimits

0xeabe,	// (0x00057431) list_double2_graphic_pane_vc_g1_ParamLimits

0xeabe,	// (0x00057431) list_double2_graphic_pane_vc_g1

0x04c3,	// (0x00048e36) list_double2_graphic_pane_vc_g2_ParamLimits

0x04c3,	// (0x00048e36) list_double2_graphic_pane_vc_g2

0x0957,	// (0x000492ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x0957,	// (0x000492ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005813c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005813c) list_double2_graphic_pane_vc_g

0xeaca,	// (0x0005743d) list_double2_graphic_pane_vc_t1_ParamLimits

0xeaca,	// (0x0005743d) list_double2_graphic_pane_vc_t1

0x04c3,	// (0x00048e36) list_single_heading_pane_vc_g1_ParamLimits

0x04c3,	// (0x00048e36) list_single_heading_pane_vc_g1

0x0957,	// (0x000492ca) list_single_heading_pane_vc_g2_ParamLimits

0x0957,	// (0x000492ca) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_single_heading_pane_vc_g

0xeae0,	// (0x00057453) list_single_heading_pane_vc_t1_ParamLimits

0xeae0,	// (0x00057453) list_single_heading_pane_vc_t1

0xeaf8,	// (0x0005746b) list_single_heading_pane_vc_t2_ParamLimits

0xeaf8,	// (0x0005746b) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0005815d) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0005815d) list_single_heading_pane_vc_t

0x09c5,	// (0x00049338) list_setting_number_pane_vc_g1_ParamLimits

0x09c5,	// (0x00049338) list_setting_number_pane_vc_g1

0x09d1,	// (0x00049344) list_setting_number_pane_vc_g2_ParamLimits

0x09d1,	// (0x00049344) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x00058162) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x00058162) list_setting_number_pane_vc_g

0xeb0a,	// (0x0005747d) list_setting_number_pane_vc_t1_ParamLimits

0xeb0a,	// (0x0005747d) list_setting_number_pane_vc_t1

0xeb1e,	// (0x00057491) list_setting_number_pane_vc_t2_ParamLimits

0xeb1e,	// (0x00057491) list_setting_number_pane_vc_t2

0xeb3a,	// (0x000574ad) list_setting_number_pane_vc_t3_ParamLimits

0xeb3a,	// (0x000574ad) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x00058167) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x00058167) list_setting_number_pane_vc_t

0xeb68,	// (0x000574db) set_value_pane_vc_ParamLimits

0xeb68,	// (0x000574db) set_value_pane_vc

0x3f36,	// (0x0004c8a9) list_double2_graphic_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double2_graphic_pane_vc

0x3f36,	// (0x0004c8a9) list_double2_large_graphic_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double2_large_graphic_pane_vc

0x3f36,	// (0x0004c8a9) list_double2_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double2_pane_vc

0x3f36,	// (0x0004c8a9) list_double_graphic_heading_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_graphic_heading_pane_vc

0x3f36,	// (0x0004c8a9) list_double_graphic_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_graphic_pane_vc

0x3f36,	// (0x0004c8a9) list_double_heading_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_heading_pane_vc

0x3f36,	// (0x0004c8a9) list_double_large_graphic_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_large_graphic_pane_vc

0x3f36,	// (0x0004c8a9) list_double_number_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_number_pane_vc

0x3f36,	// (0x0004c8a9) list_double_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_pane_vc

0x3f36,	// (0x0004c8a9) list_double_time_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_double_time_pane_vc

0x3f36,	// (0x0004c8a9) list_setting_number_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_setting_number_pane_vc

0x3f36,	// (0x0004c8a9) list_setting_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_setting_pane_vc

0x3f36,	// (0x0004c8a9) list_single_graphic_heading_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_single_graphic_heading_pane_vc

0x3f36,	// (0x0004c8a9) list_single_heading_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_single_heading_pane_vc

0x3f36,	// (0x0004c8a9) list_single_number_heading_pane_vc_ParamLimits

0x3f36,	// (0x0004c8a9) list_single_number_heading_pane_vc

0xeabe,	// (0x00057431) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeabe,	// (0x00057431) list_double_graphic_heading_pane_vc_g1

0x0d8f,	// (0x00049702) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0d8f,	// (0x00049702) list_double_graphic_heading_pane_vc_g2

0x0d9b,	// (0x0004970e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0d9b,	// (0x0004970e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0005836c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0005836c) list_double_graphic_heading_pane_vc_g

0xeb89,	// (0x000574fc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb89,	// (0x000574fc) list_double_graphic_heading_pane_vc_t1

0xeb9f,	// (0x00057512) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb9f,	// (0x00057512) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x00058373) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x00058373) list_double_graphic_heading_pane_vc_t

0x09c5,	// (0x00049338) list_setting_pane_vc_g1_ParamLimits

0x09c5,	// (0x00049338) list_setting_pane_vc_g1

0x09d1,	// (0x00049344) list_setting_pane_vc_g2_ParamLimits

0x09d1,	// (0x00049344) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x00058162) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x00058162) list_setting_pane_vc_g

0xebbd,	// (0x00057530) list_setting_pane_vc_t1_ParamLimits

0xebbd,	// (0x00057530) list_setting_pane_vc_t1

0xeea5,	// (0x00057818) list_setting_pane_vc_t2_ParamLimits

0xeea5,	// (0x00057818) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x000583b6) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x000583b6) list_setting_pane_vc_t

0xeb68,	// (0x000574db) set_value_pane_cp_vc_ParamLimits

0xeb68,	// (0x000574db) set_value_pane_cp_vc

0x04c3,	// (0x00048e36) list_single_number_heading_pane_vc_g1_ParamLimits

0x04c3,	// (0x00048e36) list_single_number_heading_pane_vc_g1

0x0957,	// (0x000492ca) list_single_number_heading_pane_vc_g2_ParamLimits

0x0957,	// (0x000492ca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_single_number_heading_pane_vc_g

0xeae0,	// (0x00057453) list_single_number_heading_pane_vc_t1_ParamLimits

0xeae0,	// (0x00057453) list_single_number_heading_pane_vc_t1

0xeec1,	// (0x00057834) list_single_number_heading_pane_vc_t2_ParamLimits

0xeec1,	// (0x00057834) list_single_number_heading_pane_vc_t2

0xee7d,	// (0x000577f0) list_single_number_heading_pane_vc_t3_ParamLimits

0xee7d,	// (0x000577f0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x000583bb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x000583bb) list_single_number_heading_pane_vc_t

0xeabe,	// (0x00057431) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeabe,	// (0x00057431) list_single_graphic_heading_pane_vc_g1

0x04c3,	// (0x00048e36) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x04c3,	// (0x00048e36) list_single_graphic_heading_pane_vc_g4

0x0957,	// (0x000492ca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0957,	// (0x000492ca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005813c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005813c) list_single_graphic_heading_pane_vc_g

0xeae0,	// (0x00057453) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeae0,	// (0x00057453) list_single_graphic_heading_pane_vc_t1

0xeed3,	// (0x00057846) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeed3,	// (0x00057846) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x000583c2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x000583c2) list_single_graphic_heading_pane_vc_t

0x04c3,	// (0x00048e36) list_double2_pane_vc_g1_ParamLimits

0x04c3,	// (0x00048e36) list_double2_pane_vc_g1

0x0957,	// (0x000492ca) list_double2_pane_vc_g2_ParamLimits

0x0957,	// (0x000492ca) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_double2_pane_vc_g

0xee8f,	// (0x00057802) list_double2_pane_vc_t1_ParamLimits

0xee8f,	// (0x00057802) list_double2_pane_vc_t1

0x0da7,	// (0x0004971a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0da7,	// (0x0004971a) list_double2_large_graphic_pane_vc_g1

0x04c3,	// (0x00048e36) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x04c3,	// (0x00048e36) list_double2_large_graphic_pane_vc_g2

0x0957,	// (0x000492ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0957,	// (0x000492ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00057f63) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00057f63) list_double2_large_graphic_pane_vc_g

0xee67,	// (0x000577da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xee67,	// (0x000577da) list_double2_large_graphic_pane_vc_t1

0x0db3,	// (0x00049726) list_double_time_pane_vc_g1_ParamLimits

0x0db3,	// (0x00049726) list_double_time_pane_vc_g1

0x0dbf,	// (0x00049732) list_double_time_pane_vc_g2_ParamLimits

0x0dbf,	// (0x00049732) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x000583c7) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x000583c7) list_double_time_pane_vc_g

0xeee5,	// (0x00057858) list_double_time_pane_vc_t1_ParamLimits

0xeee5,	// (0x00057858) list_double_time_pane_vc_t1

0xef0f,	// (0x00057882) list_double_time_pane_vc_t2_ParamLimits

0xef0f,	// (0x00057882) list_double_time_pane_vc_t2

0xef58,	// (0x000578cb) list_double_time_pane_vc_t3_ParamLimits

0xef58,	// (0x000578cb) list_double_time_pane_vc_t3

0xef6a,	// (0x000578dd) list_double_time_pane_vc_t4_ParamLimits

0xef6a,	// (0x000578dd) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x000583cc) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x000583cc) list_double_time_pane_vc_t

0x04c3,	// (0x00048e36) list_double_pane_vc_g1_ParamLimits

0x04c3,	// (0x00048e36) list_double_pane_vc_g1

0x0957,	// (0x000492ca) list_double_pane_vc_g2_ParamLimits

0x0957,	// (0x000492ca) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_double_pane_vc_g

0xef8f,	// (0x00057902) list_double_pane_vc_t1_ParamLimits

0xef8f,	// (0x00057902) list_double_pane_vc_t1

0xefa3,	// (0x00057916) list_double_pane_vc_t2_ParamLimits

0xefa3,	// (0x00057916) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x000583d5) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x000583d5) list_double_pane_vc_t

0x04c3,	// (0x00048e36) list_double_number_pane_vc_g1_ParamLimits

0x04c3,	// (0x00048e36) list_double_number_pane_vc_g1

0x0957,	// (0x000492ca) list_double_number_pane_vc_g2_ParamLimits

0x0957,	// (0x000492ca) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x00057f4b) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x00057f4b) list_double_number_pane_vc_g

0xefb9,	// (0x0005792c) list_double_number_pane_vc_t1_ParamLimits

0xefb9,	// (0x0005792c) list_double_number_pane_vc_t1

0xefcd,	// (0x00057940) list_double_number_pane_vc_t2_ParamLimits

0xefcd,	// (0x00057940) list_double_number_pane_vc_t2

0xefe1,	// (0x00057954) list_double_number_pane_vc_t3_ParamLimits

0xefe1,	// (0x00057954) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x000583da) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x000583da) list_double_number_pane_vc_t

0x0dcb,	// (0x0004973e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0dcb,	// (0x0004973e) list_double_large_graphic_pane_vc_g1

0x0ddc,	// (0x0004974f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0ddc,	// (0x0004974f) list_double_large_graphic_pane_vc_g2

0x0957,	// (0x000492ca) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0957,	// (0x000492ca) list_double_large_graphic_pane_vc_g3

0xeff7,	// (0x0005796a) list_double_large_graphic_pane_vc_g4_ParamLimits

0xeff7,	// (0x0005796a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x000583e1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x000583e1) list_double_large_graphic_pane_vc_g

0xf003,	// (0x00057976) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf003,	// (0x00057976) list_double_large_graphic_pane_vc_t1

0xf01c,	// (0x0005798f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf01c,	// (0x0005798f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x000583ea) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x000583ea) list_double_large_graphic_pane_vc_t

0x0d8f,	// (0x00049702) list_double_heading_pane_vc_g1_ParamLimits

0x0d8f,	// (0x00049702) list_double_heading_pane_vc_g1

0x0d9b,	// (0x0004970e) list_double_heading_pane_vc_g2_ParamLimits

0x0d9b,	// (0x0004970e) list_double_heading_pane_vc_g2

0x0001,

0xfa7c,	// (0x000583ef) list_double_heading_pane_vc_g_ParamLimits

0xfa7c,	// (0x000583ef) list_double_heading_pane_vc_g

0xf033,	// (0x000579a6) list_double_heading_pane_vc_t1_ParamLimits

0xf033,	// (0x000579a6) list_double_heading_pane_vc_t1

0xeae0,	// (0x00057453) list_double_heading_pane_vc_t2_ParamLimits

0xeae0,	// (0x00057453) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x000583f4) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x000583f4) list_double_heading_pane_vc_t

0xeabe,	// (0x00057431) list_double_graphic_pane_vc_g1_ParamLimits

0xeabe,	// (0x00057431) list_double_graphic_pane_vc_g1

0x0deb,	// (0x0004975e) list_double_graphic_pane_vc_g2_ParamLimits

0x0deb,	// (0x0004975e) list_double_graphic_pane_vc_g2

0x0dfa,	// (0x0004976d) list_double_graphic_pane_vc_g3_ParamLimits

0x0dfa,	// (0x0004976d) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x000583f9) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x000583f9) list_double_graphic_pane_vc_g

0xf045,	// (0x000579b8) list_double_graphic_pane_vc_t1_ParamLimits

0xf045,	// (0x000579b8) list_double_graphic_pane_vc_t1

0xf059,	// (0x000579cc) list_double_graphic_pane_vc_t2_ParamLimits

0xf059,	// (0x000579cc) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00058400) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00058400) list_double_graphic_pane_vc_t

0xed10,	// (0x00057683) aid_size_cell_fastswap

0x9bef,	// (0x00052562) aid_size_cell_touch_ParamLimits

0x9bef,	// (0x00052562) aid_size_cell_touch

0xf283,	// (0x00057bf6) popup_fast_swap_wide_window_ParamLimits

0xf283,	// (0x00057bf6) popup_fast_swap_wide_window

0x9d3e,	// (0x000526b1) touch_pane_ParamLimits

0x9d3e,	// (0x000526b1) touch_pane

0xa7ab,	// (0x0005311e) button_value_adjust_pane_cp2

0xe5dd,	// (0x00056f50) button_value_adjust_pane_cp4

0xe5e5,	// (0x00056f58) form_field_data_pane_cp2

0x9876,	// (0x000521e9) form_field_data_wide_pane_cp2

0xac61,	// (0x000535d4) bg_scroll_pane_ParamLimits

0x003a,	// (0x000489ad) scroll_handle_pane_ParamLimits

0x004e,	// (0x000489c1) scroll_sc2_down_pane_ParamLimits

0x004e,	// (0x000489c1) scroll_sc2_down_pane

0xc3b9,	// (0x00054d2c) scroll_sc2_up_pane_ParamLimits

0xc3b9,	// (0x00054d2c) scroll_sc2_up_pane

0xcd1c,	// (0x0005568f) grid_wheel_folder_pane_g1_ParamLimits

0xcd1c,	// (0x0005568f) grid_wheel_folder_pane_g1

0x0372,	// (0x00048ce5) clock_nsta_pane_cp2_ParamLimits

0x0372,	// (0x00048ce5) clock_nsta_pane_cp2

0x1e40,	// (0x0004a7b3) listscroll_midp_pane_ParamLimits

0xaee6,	// (0x00053859) midp_canvas_pane

0x1dc4,	// (0x0004a737) nsta_clock_indic_pane

0x1e12,	// (0x0004a785) listscroll_form_pane_vc

0x1e2e,	// (0x0004a7a1) listscroll_set_pane_vc_ParamLimits

0x1e2e,	// (0x0004a7a1) listscroll_set_pane_vc

0xb980,	// (0x000542f3) clock_nsta_pane

0xb9aa,	// (0x0005431d) indicator_nsta_pane

0x28bf,	// (0x0004b232) bg_popup_sub_pane_cp2_ParamLimits

0x28d3,	// (0x0004b246) find_pane_cp2_ParamLimits

0x28d3,	// (0x0004b246) find_pane_cp2

0x28e9,	// (0x0004b25c) grid_toobar_pane_ParamLimits

0x29c9,	// (0x0004b33c) list_form_gen_pane_vc_ParamLimits

0x29c9,	// (0x0004b33c) list_form_gen_pane_vc

0x29df,	// (0x0004b352) scroll_pane_cp8_vc_ParamLimits

0x29df,	// (0x0004b352) scroll_pane_cp8_vc

0x2a5b,	// (0x0004b3ce) data_form_wide_pane_vc_ParamLimits

0x2a5b,	// (0x0004b3ce) data_form_wide_pane_vc

0x2a67,	// (0x0004b3da) form_field_data_wide_pane_vc_g1

0x2a6f,	// (0x0004b3e2) form_field_data_wide_pane_vc_t1_ParamLimits

0x2a6f,	// (0x0004b3e2) form_field_data_wide_pane_vc_t1

0xa7bf,	// (0x00053132) input_focus_pane_cp6_vc_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_cp6_vc

0xc68a,	// (0x00054ffd) list_midp_pane_ParamLimits

0x411a,	// (0x0004ca8d) scroll_pane_cp16_ParamLimits

0x411a,	// (0x0004ca8d) scroll_pane_cp16

0x2dcb,	// (0x0004b73e) button_value_adjust_pane_ParamLimits

0x2dcb,	// (0x0004b73e) button_value_adjust_pane

0xc95a,	// (0x000552cd) button_value_adjust_pane_cp6_ParamLimits

0xc95a,	// (0x000552cd) button_value_adjust_pane_cp6

0xca9c,	// (0x0005540f) settings_code_pane_cp_ParamLimits

0xca9c,	// (0x0005540f) settings_code_pane_cp

0x6bb3,	// (0x0004f526) cell_touch_pane_g1

0x6bb3,	// (0x0004f526) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00058081) cell_touch_pane_g

0xcbd7,	// (0x0005554a) cell_touch_pane_cp_ParamLimits

0xcbd7,	// (0x0005554a) cell_touch_pane_cp

0xcbf3,	// (0x00055566) cell_touch_pane_ParamLimits

0xcbf3,	// (0x00055566) cell_touch_pane

0x6bb3,	// (0x0004f526) scroll_sc2_down_pane_g1

0x6bb3,	// (0x0004f526) scroll_sc2_up_pane_g1

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp4_vc

0x44e4,	// (0x0004ce57) list_set_graphic_pane_vc_g1_ParamLimits

0x44e4,	// (0x0004ce57) list_set_graphic_pane_vc_g1

0xcc11,	// (0x00055584) list_set_graphic_pane_vc_g2_ParamLimits

0xcc11,	// (0x00055584) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x00058378) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x00058378) list_set_graphic_pane_vc_g

0x44f0,	// (0x0004ce63) text_primary_small_cp13_vc_ParamLimits

0x44f0,	// (0x0004ce63) text_primary_small_cp13_vc

0x4508,	// (0x0004ce7b) list_set_graphic_pane_vc_ParamLimits

0x4508,	// (0x0004ce7b) list_set_graphic_pane_vc

0x6bbd,	// (0x0004f530) input_focus_pane_cp2_vc

0x6bb3,	// (0x0004f526) setting_code_pane_vc_g1

0x9e96,	// (0x00052809) setting_code_pane_vc_t1

0x451d,	// (0x0004ce90) set_text_pane_vc_t1_ParamLimits

0x451d,	// (0x0004ce90) set_text_pane_vc_t1

0x6bbd,	// (0x0004f530) input_focus_pane_cp1_vc

0x453b,	// (0x0004ceae) list_set_text_pane_vc

0x6bb3,	// (0x0004f526) setting_text_pane_vc_g1

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp2_vc

0x9e8d,	// (0x00052800) setting_slider_graphic_pane_vc_g1

0x4545,	// (0x0004ceb8) setting_slider_graphic_pane_vc_t1

0x4557,	// (0x0004ceca) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0005837d) setting_slider_graphic_pane_vc_t

0x4569,	// (0x0004cedc) slider_set_pane_cp_vc

0x4573,	// (0x0004cee6) slider_set_pane_vc_g1

0x457c,	// (0x0004ceef) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x00058382) slider_set_pane_vc_g

0xa81a,	// (0x0005318d) set_opt_bg_pane_g1_copy1

0xa822,	// (0x00053195) set_opt_bg_pane_g2_copy1

0x45a8,	// (0x0004cf1b) set_opt_bg_pane_g3_copy1

0xa832,	// (0x000531a5) set_opt_bg_pane_g4_copy1

0xa83a,	// (0x000531ad) set_opt_bg_pane_g5_copy1

0xa842,	// (0x000531b5) set_opt_bg_pane_g6_copy1

0x45b2,	// (0x0004cf25) set_opt_bg_pane_g7_copy1

0x45bc,	// (0x0004cf2f) set_opt_bg_pane_g8_copy1

0x45c6,	// (0x0004cf39) set_opt_bg_pane_g9_copy1

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp_vc

0x45d0,	// (0x0004cf43) setting_slider_pane_vc_t1

0x45df,	// (0x0004cf52) setting_slider_pane_vc_t2

0x45f1,	// (0x0004cf64) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x00058391) setting_slider_pane_vc_t

0x4603,	// (0x0004cf76) slider_set_pane_vc

0x0a80,	// (0x000493f3) volume_set_pane_vc_g1

0x0a89,	// (0x000493fc) volume_set_pane_vc_g2

0x0a92,	// (0x00049405) volume_set_pane_vc_g3

0x0a9b,	// (0x0004940e) volume_set_pane_vc_g4

0x0aa4,	// (0x00049417) volume_set_pane_vc_g5

0x0aad,	// (0x00049420) volume_set_pane_vc_g6

0x0ab6,	// (0x00049429) volume_set_pane_vc_g7

0x0abf,	// (0x00049432) volume_set_pane_vc_g8

0x0ac8,	// (0x0004943b) volume_set_pane_vc_g9

0x0ad1,	// (0x00049444) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x00058398) volume_set_pane_vc_g

0x460d,	// (0x0004cf80) volume_set_pane_vc

0x4617,	// (0x0004cf8a) button_value_adjust_pane_cp1_vc

0x4621,	// (0x0004cf94) list_highlight_pane_cp2_vc

0x462a,	// (0x0004cf9d) list_set_pane_vc_ParamLimits

0x462a,	// (0x0004cf9d) list_set_pane_vc

0x469a,	// (0x0004d00d) main_pane_set_vc_t1_ParamLimits

0x469a,	// (0x0004d00d) main_pane_set_vc_t1

0x46af,	// (0x0004d022) main_pane_set_vc_t2_ParamLimits

0x46af,	// (0x0004d022) main_pane_set_vc_t2

0x46c1,	// (0x0004d034) main_pane_set_vc_t3_ParamLimits

0x46c1,	// (0x0004d034) main_pane_set_vc_t3

0x46d5,	// (0x0004d048) main_pane_set_vc_t4_ParamLimits

0x46d5,	// (0x0004d048) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x000583ad) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x000583ad) main_pane_set_vc_t

0x46e9,	// (0x0004d05c) setting_code_pane_vc_ParamLimits

0x46e9,	// (0x0004d05c) setting_code_pane_vc

0x46fa,	// (0x0004d06d) setting_slider_graphic_pane_vc

0x46fa,	// (0x0004d06d) setting_slider_pane_vc

0x46fa,	// (0x0004d06d) setting_text_pane_vc

0x46fa,	// (0x0004d06d) setting_volume_pane_vc

0x4704,	// (0x0004d077) scroll_pane_cp121_vc

0xa799,	// (0x0005310c) set_content_pane_vc

0x470c,	// (0x0004d07f) button_value_adjust_pane_g1

0x4715,	// (0x0004d088) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00058405) button_value_adjust_pane_g

0x471e,	// (0x0004d091) form_field_slider_wide_pane_vc_t1_ParamLimits

0x471e,	// (0x0004d091) form_field_slider_wide_pane_vc_t1

0x4730,	// (0x0004d0a3) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4730,	// (0x0004d0a3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x0005840a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0005840a) form_field_slider_wide_pane_vc_t

0x6c17,	// (0x0004f58a) input_focus_pane_cp10_vc_ParamLimits

0x6c17,	// (0x0004f58a) input_focus_pane_cp10_vc

0x475c,	// (0x0004d0cf) slider_cont_pane_cp1_vc_ParamLimits

0x475c,	// (0x0004d0cf) slider_cont_pane_cp1_vc

0x476e,	// (0x0004d0e1) slider_form_pane_g1_cp2

0x457c,	// (0x0004ceef) slider_form_pane_g2_cp2

0x479b,	// (0x0004d10e) form_field_slider_pane_vc_t3

0x47a9,	// (0x0004d11c) form_field_slider_pane_vc_t4

0x47b7,	// (0x0004d12a) slider_form_pane_vc_ParamLimits

0x47b7,	// (0x0004d12a) slider_form_pane_vc

0x47c4,	// (0x0004d137) form_field_slider_pane_vc_t1_ParamLimits

0x47c4,	// (0x0004d137) form_field_slider_pane_vc_t1

0x4730,	// (0x0004d0a3) form_field_slider_pane_vc_t2_ParamLimits

0x4730,	// (0x0004d0a3) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0005841c) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0005841c) form_field_slider_pane_vc_t

0x6c17,	// (0x0004f58a) input_focus_pane_cp9_vc_ParamLimits

0x6c17,	// (0x0004f58a) input_focus_pane_cp9_vc

0x47da,	// (0x0004d14d) slider_cont_pane_vc_ParamLimits

0x47da,	// (0x0004d14d) slider_cont_pane_vc

0x47ee,	// (0x0004d161) list_form_graphic_pane_cp_vc_ParamLimits

0x47ee,	// (0x0004d161) list_form_graphic_pane_cp_vc

0x2a67,	// (0x0004b3da) form_field_popup_wide_pane_vc_g1

0x4803,	// (0x0004d176) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4803,	// (0x0004d176) form_field_popup_wide_pane_vc_t1

0xa7bf,	// (0x00053132) input_focus_pane_cp8_vc_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_cp8_vc

0x4848,	// (0x0004d1bb) list_form_wide_pane_vc_ParamLimits

0x4848,	// (0x0004d1bb) list_form_wide_pane_vc

0x4854,	// (0x0004d1c7) list_form_graphic_pane_vc_g1

0x485c,	// (0x0004d1cf) list_form_graphic_pane_vc_t1_ParamLimits

0x485c,	// (0x0004d1cf) list_form_graphic_pane_vc_t1

0x9e7f,	// (0x000527f2) list_highlight_pane_cp5_vc_ParamLimits

0x9e7f,	// (0x000527f2) list_highlight_pane_cp5_vc

0x4878,	// (0x0004d1eb) list_form_graphic_pane_vc_ParamLimits

0x4878,	// (0x0004d1eb) list_form_graphic_pane_vc

0x2a67,	// (0x0004b3da) form_field_popup_pane_vc_g1

0x488e,	// (0x0004d201) form_field_popup_pane_vc_t1_ParamLimits

0x488e,	// (0x0004d201) form_field_popup_pane_vc_t1

0xa7bf,	// (0x00053132) input_focus_pane_cp7_vc_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_cp7_vc

0x48a5,	// (0x0004d218) list_form_pane_vc_ParamLimits

0x48a5,	// (0x0004d218) list_form_pane_vc

0x48b1,	// (0x0004d224) data_form_pane_vc_t1_ParamLimits

0x48b1,	// (0x0004d224) data_form_pane_vc_t1

0xa81a,	// (0x0005318d) input_focus_pane_vc_g1

0xa822,	// (0x00053195) input_focus_pane_vc_g2

0xa82a,	// (0x0005319d) input_focus_pane_vc_g3

0xa832,	// (0x000531a5) input_focus_pane_vc_g4

0xa83a,	// (0x000531ad) input_focus_pane_vc_g5

0xa842,	// (0x000531b5) input_focus_pane_vc_g6

0xa84a,	// (0x000531bd) input_focus_pane_vc_g7

0xa852,	// (0x000531c5) input_focus_pane_vc_g8

0xa85a,	// (0x000531cd) input_focus_pane_vc_g9

0x6bb3,	// (0x0004f526) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0005800a) input_focus_pane_vc_g

0x2a5b,	// (0x0004b3ce) data_form_pane_vc_ParamLimits

0x2a5b,	// (0x0004b3ce) data_form_pane_vc

0x2a67,	// (0x0004b3da) form_field_data_pane_vc_g1

0x48ce,	// (0x0004d241) form_field_data_pane_vc_t1_ParamLimits

0x48ce,	// (0x0004d241) form_field_data_pane_vc_t1

0xa7bf,	// (0x00053132) input_focus_pane_vc_ParamLimits

0xa7bf,	// (0x00053132) input_focus_pane_vc

0x48e8,	// (0x0004d25b) button_value_adjust_pane_cp3_vc

0x48f0,	// (0x0004d263) button_value_adjust_pane_cp5_vc

0x48f8,	// (0x0004d26b) form_field_data_pane_vc_ParamLimits

0x48f8,	// (0x0004d26b) form_field_data_pane_vc

0x4913,	// (0x0004d286) form_field_data_pane_vc_cp2

0x491b,	// (0x0004d28e) form_field_data_wide_pane_vc_ParamLimits

0x491b,	// (0x0004d28e) form_field_data_wide_pane_vc

0x4935,	// (0x0004d2a8) form_field_data_wide_pane_vc_cp2

0x493d,	// (0x0004d2b0) form_field_popup_pane_vc_ParamLimits

0x493d,	// (0x0004d2b0) form_field_popup_pane_vc

0x4958,	// (0x0004d2cb) form_field_popup_wide_pane_vc_ParamLimits

0x4958,	// (0x0004d2cb) form_field_popup_wide_pane_vc

0x4972,	// (0x0004d2e5) form_field_slider_pane_vc_ParamLimits

0x4972,	// (0x0004d2e5) form_field_slider_pane_vc

0x4985,	// (0x0004d2f8) form_field_slider_wide_pane_vc_ParamLimits

0x4985,	// (0x0004d2f8) form_field_slider_wide_pane_vc

0xcc1d,	// (0x00055590) grid_touch_1_pane_ParamLimits

0xcc1d,	// (0x00055590) grid_touch_1_pane

0xcc31,	// (0x000555a4) grid_touch_2_pane_ParamLimits

0xcc31,	// (0x000555a4) grid_touch_2_pane

0x4a5c,	// (0x0004d3cf) touch_pane_g1_ParamLimits

0x4a5c,	// (0x0004d3cf) touch_pane_g1

0x49be,	// (0x0004d331) cell_app_pane_cp_wide_ParamLimits

0x49be,	// (0x0004d331) cell_app_pane_cp_wide

0x49cf,	// (0x0004d342) grid_popup_fast_wide_pane_ParamLimits

0x49cf,	// (0x0004d342) grid_popup_fast_wide_pane

0x49e3,	// (0x0004d356) scroll_pane_cp19_ParamLimits

0x49e3,	// (0x0004d356) scroll_pane_cp19

0x6bbd,	// (0x0004f530) bg_popup_window_pane_cp20

0x49f7,	// (0x0004d36a) listscroll_popup_fast_wide_pane

0xcc5d,	// (0x000555d0) grid_indicator_nsta_pane

0x49ff,	// (0x0004d372) clock_nsta_pane_g1

0x4a08,	// (0x0004d37b) clock_nsta_pane_t1

0xcc6b,	// (0x000555de) cell_indicator_nsta_pane_ParamLimits

0xcc6b,	// (0x000555de) cell_indicator_nsta_pane

0x4a5c,	// (0x0004d3cf) cell_indicator_nsta_pane_g1

0xcc88,	// (0x000555fb) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x0005842d) cell_indicator_nsta_pane_g

0x4a80,	// (0x0004d3f3) clock_nsta_pane_cp

0x4a88,	// (0x0004d3fb) indicator_nsta_pane_cp

0x4a91,	// (0x0004d404) nsta_clock_indic_pane_g1

0x9f7b,	// (0x000528ee) grid_indicator_pane

0xc4ab,	// (0x00054e1e) scroll_pane_cp29

0x02be,	// (0x00048c31) indicator_nsta_pane_cp2_ParamLimits

0x02be,	// (0x00048c31) indicator_nsta_pane_cp2

0x9e7f,	// (0x000527f2) main_apps_wheel_pane

0x2c4e,	// (0x0004b5c1) form_midp_field_text_pane_ParamLimits

0x2d9d,	// (0x0004b710) scroll_bar_cp050_ParamLimits

0x4afa,	// (0x0004d46d) cell_indicator_pane_ParamLimits

0x4afa,	// (0x0004d46d) cell_indicator_pane

0x4b12,	// (0x0004d485) cell_indicator_pane_g1

0xcc9e,	// (0x00055611) grid_wheel_folder_pane_ParamLimits

0xcc9e,	// (0x00055611) grid_wheel_folder_pane

0xccac,	// (0x0005561f) list_wheel_apps_pane_ParamLimits

0xccac,	// (0x0005561f) list_wheel_apps_pane

0xccba,	// (0x0005562d) main_apps_wheel_pane_g1_ParamLimits

0xccba,	// (0x0005562d) main_apps_wheel_pane_g1

0xccca,	// (0x0005563d) main_apps_wheel_pane_g2_ParamLimits

0xccca,	// (0x0005563d) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00058449) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00058449) main_apps_wheel_pane_g

0xccda,	// (0x0005564d) main_apps_wheel_pane_t1_ParamLimits

0xccda,	// (0x0005564d) main_apps_wheel_pane_t1

0xccf2,	// (0x00055665) list_wheel_apps_pane_g1

0xccfa,	// (0x0005566d) list_wheel_apps_pane_g2

0xcd02,	// (0x00055675) list_wheel_apps_pane_g3

0xcd0a,	// (0x0005567d) list_wheel_apps_pane_g4

0xcd12,	// (0x00055685) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0005844e) list_wheel_apps_pane_g

0xe98d,	// (0x00057300) navi_icon_text_pane

0xb872,	// (0x000541e5) aid_fill_nsta

0xcd2f,	// (0x000556a2) navi_icon_text_pane_g1

0xcd3b,	// (0x000556ae) navi_icon_text_pane_t1

0xae4a,	// (0x000537bd) list_set_graphic_pane_t1_ParamLimits

0xae4a,	// (0x000537bd) list_set_graphic_pane_t1

0x34ee,	// (0x0004be61) popup_midp_note_alarm_window_t6_ParamLimits

0x34ee,	// (0x0004be61) popup_midp_note_alarm_window_t6

0x3500,	// (0x0004be73) popup_midp_note_alarm_window_t7_ParamLimits

0x3500,	// (0x0004be73) popup_midp_note_alarm_window_t7

0x3512,	// (0x0004be85) popup_midp_note_alarm_window_t8_ParamLimits

0x3512,	// (0x0004be85) popup_midp_note_alarm_window_t8

0x3524,	// (0x0004be97) popup_midp_note_alarm_window_t9_ParamLimits

0x3524,	// (0x0004be97) popup_midp_note_alarm_window_t9

0x3536,	// (0x0004bea9) popup_midp_note_alarm_window_t10_ParamLimits

0x3536,	// (0x0004bea9) popup_midp_note_alarm_window_t10

0x3548,	// (0x0004bebb) popup_midp_note_alarm_window_t11_ParamLimits

0x3548,	// (0x0004bebb) popup_midp_note_alarm_window_t11

0x355a,	// (0x0004becd) scroll_pane_cp17_ParamLimits

0x355a,	// (0x0004becd) scroll_pane_cp17

0x0a80,	// (0x000493f3) volume_small_pane_cp_g1

0x0e06,	// (0x00049779) volume_small_pane_cp_g2

0x0e0f,	// (0x00049782) volume_small_pane_cp_g3

0x0e18,	// (0x0004978b) volume_small_pane_cp_g4

0x0e21,	// (0x00049794) volume_small_pane_cp_g5

0x0e2a,	// (0x0004979d) volume_small_pane_cp_g6

0x0e33,	// (0x000497a6) volume_small_pane_cp_g7

0x0e3c,	// (0x000497af) volume_small_pane_cp_g8

0x0e45,	// (0x000497b8) volume_small_pane_cp_g9

0x0e4e,	// (0x000497c1) volume_small_pane_cp_g10

0x0623,	// (0x00048f96) midp_ticker_pane_g1_ParamLimits

0x062f,	// (0x00048fa2) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x000580d6) midp_ticker_pane_g_ParamLimits

0xaf7d,	// (0x000538f0) midp_ticker_pane_t1_ParamLimits

0xb896,	// (0x00054209) aid_fill_nsta_2

0x2d89,	// (0x0004b6fc) list_form2_midp_pane

0x3f05,	// (0x0004c878) midp_editing_number_pane_ParamLimits

0x3f14,	// (0x0004c887) midp_ticker_pane_ParamLimits

0x4c05,	// (0x0004d578) form2_midp_field_pane

0x4c29,	// (0x0004d59c) scroll_pane_cp51

0x4c49,	// (0x0004d5bc) form2_midp_button_pane_ParamLimits

0x4c49,	// (0x0004d5bc) form2_midp_button_pane

0x4c5b,	// (0x0004d5ce) form2_midp_content_pane_ParamLimits

0x4c5b,	// (0x0004d5ce) form2_midp_content_pane

0x4c75,	// (0x0004d5e8) form2_midp_field_choice_group_pane

0x4c7d,	// (0x0004d5f0) form2_midp_field_pane_g1

0x4c85,	// (0x0004d5f8) form2_midp_field_pane_g2

0x4c8d,	// (0x0004d600) form2_midp_field_pane_g3

0x4c95,	// (0x0004d608) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x00058473) form2_midp_field_pane_g

0x4c9d,	// (0x0004d610) form2_midp_gauge_slider_pane

0x4ca5,	// (0x0004d618) form2_midp_gauge_wait_pane

0x4cad,	// (0x0004d620) form2_midp_image_pane_ParamLimits

0x4cad,	// (0x0004d620) form2_midp_image_pane

0x4cc8,	// (0x0004d63b) form2_midp_label_pane_ParamLimits

0x4cc8,	// (0x0004d63b) form2_midp_label_pane

0xcd69,	// (0x000556dc) form2_midp_label_pane_cp_ParamLimits

0xcd69,	// (0x000556dc) form2_midp_label_pane_cp

0x4d08,	// (0x0004d67b) form2_midp_string_pane_ParamLimits

0x4d08,	// (0x0004d67b) form2_midp_string_pane

0xf06f,	// (0x000579e2) form2_midp_text_pane_ParamLimits

0xf06f,	// (0x000579e2) form2_midp_text_pane

0x4d1a,	// (0x0004d68d) form2_midp_time_pane

0x4d2a,	// (0x0004d69d) input_focus_pane_cp51_ParamLimits

0x4d2a,	// (0x0004d69d) input_focus_pane_cp51

0x4d42,	// (0x0004d6b5) form2_midp_label_pane_t1_ParamLimits

0x4d42,	// (0x0004d6b5) form2_midp_label_pane_t1

0xf092,	// (0x00057a05) form2_mdip_text_pane_t1_ParamLimits

0xf092,	// (0x00057a05) form2_mdip_text_pane_t1

0xf0b1,	// (0x00057a24) form2_midp_time_pane_t1

0x4d90,	// (0x0004d703) form2_midp_gauge_slider_pane_t1

0xcd8a,	// (0x000556fd) form2_midp_gauge_slider_pane_t2

0xcd9c,	// (0x0005570f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x0005847c) form2_midp_gauge_slider_pane_t

0x4dc6,	// (0x0004d739) form2_midp_slider_pane

0x4dd2,	// (0x0004d745) form2_midp_gauge_wait_pane_t1

0x4de0,	// (0x0004d753) form2_midp_wait_pane_ParamLimits

0x4de0,	// (0x0004d753) form2_midp_wait_pane

0x2aae,	// (0x0004b421) list_single_2graphic_pane_cp4_ParamLimits

0x2aae,	// (0x0004b421) list_single_2graphic_pane_cp4

0x4e0b,	// (0x0004d77e) list_single_midp_graphic_pane_cp_ParamLimits

0x4e0b,	// (0x0004d77e) list_single_midp_graphic_pane_cp

0x6bbd,	// (0x0004f530) list_highlight_pane_cp20

0x4e2f,	// (0x0004d7a2) list_single_2graphic_pane_g1_cp4

0x439a,	// (0x0004cd0d) list_single_2graphic_pane_g2_cp4

0x4e37,	// (0x0004d7aa) list_single_2graphic_pane_t1_cp4

0x9e7f,	// (0x000527f2) list_highlight_pane_cp21

0x4e46,	// (0x0004d7b9) list_single_midp_graphic_pane_g4_cp

0x4e55,	// (0x0004d7c8) list_single_midp_graphic_pane_t1_cp

0xcdae,	// (0x00055721) form2_mdip_string_pane_t1_ParamLimits

0xcdae,	// (0x00055721) form2_mdip_string_pane_t1

0x6bbd,	// (0x0004f530) bg_wml_button_pane_cp2

0x6bb3,	// (0x0004f526) form2_midp_image_pane_g1

0xf3b1,	// (0x00057d24) list_double_large_graphic_pane_g5_ParamLimits

0xf3b1,	// (0x00057d24) list_double_large_graphic_pane_g5

0x1e40,	// (0x0004a7b3) midp_form_pane_ParamLimits

0x9e7f,	// (0x000527f2) main_apps_wheel_pane_ParamLimits

0xb58a,	// (0x00053efd) popup_preview_window_ParamLimits

0xb58a,	// (0x00053efd) popup_preview_window

0x2408,	// (0x0004ad7b) popup_touch_info_window_ParamLimits

0x2408,	// (0x0004ad7b) popup_touch_info_window

0x242a,	// (0x0004ad9d) popup_touch_menu_window_ParamLimits

0x242a,	// (0x0004ad9d) popup_touch_menu_window

0x6ba9,	// (0x0004f51c) bg_popup_sub_pane_cp6

0x4f0f,	// (0x0004d882) list_touch_menu_pane

0x4f17,	// (0x0004d88a) list_single_touch_menu_pane_ParamLimits

0x4f17,	// (0x0004d88a) list_single_touch_menu_pane

0x4f2f,	// (0x0004d8a2) list_single_touch_menu_pane_t1

0x9e7f,	// (0x000527f2) bg_popup_sub_pane_cp7_ParamLimits

0x9e7f,	// (0x000527f2) bg_popup_sub_pane_cp7

0x4f3d,	// (0x0004d8b0) heading_sub_pane

0x4f45,	// (0x0004d8b8) list_touch_info_pane_ParamLimits

0x4f45,	// (0x0004d8b8) list_touch_info_pane

0x4f54,	// (0x0004d8c7) list_single_touch_info_pane_ParamLimits

0x4f54,	// (0x0004d8c7) list_single_touch_info_pane

0x4f66,	// (0x0004d8d9) list_single_touch_info_pane_t1

0x4f74,	// (0x0004d8e7) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x0005848a) list_single_touch_info_pane_t

0x0552,	// (0x00048ec5) bg_popup_heading_pane_cp

0x4f82,	// (0x0004d8f5) heading_sub_pane_t1

0x29f5,	// (0x0004b368) bg_popup_preview_window_pane_cp_ParamLimits

0x29f5,	// (0x0004b368) bg_popup_preview_window_pane_cp

0x4f3d,	// (0x0004d8b0) heading_preview_pane

0x4f45,	// (0x0004d8b8) list_preview_pane_ParamLimits

0x4f45,	// (0x0004d8b8) list_preview_pane

0x4f90,	// (0x0004d903) popup_preview_window_g1

0x4f54,	// (0x0004d8c7) list_single_preview_pane_ParamLimits

0x4f54,	// (0x0004d8c7) list_single_preview_pane

0x4f98,	// (0x0004d90b) list_single_preview_pane_g1

0x4fa0,	// (0x0004d913) list_single_preview_pane_t1

0x4f66,	// (0x0004d8d9) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x0005848f) list_single_preview_pane_t

0x4fae,	// (0x0004d921) bg_popup_heading_pane_cp2_ParamLimits

0x4fae,	// (0x0004d921) bg_popup_heading_pane_cp2

0x4fc4,	// (0x0004d937) heading_preview_pane_g1

0x4fcc,	// (0x0004d93f) heading_preview_pane_t1_ParamLimits

0x4fcc,	// (0x0004d93f) heading_preview_pane_t1

0x9fab,	// (0x0005291e) soft_indicator_pane_t1_ParamLimits

0xa6c6,	// (0x00053039) scroll_pane_ParamLimits

0xac80,	// (0x000535f3) scroll_sc2_left_pane

0xac89,	// (0x000535fc) scroll_sc2_right_pane

0xc3cf,	// (0x00054d42) scroll_bg_pane_g1_ParamLimits

0xc3e4,	// (0x00054d57) scroll_bg_pane_g2_ParamLimits

0xc3fc,	// (0x00054d6f) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00058061) scroll_bg_pane_g_ParamLimits

0xc3cf,	// (0x00054d42) scroll_handle_pane_g1_ParamLimits

0xc41e,	// (0x00054d91) scroll_handle_pane_g2_ParamLimits

0xc3fc,	// (0x00054d6f) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00058068) scroll_handle_pane_g_ParamLimits

0x1e68,	// (0x0004a7db) popup_choice_list_window_ParamLimits

0x1e68,	// (0x0004a7db) popup_choice_list_window

0x28cb,	// (0x0004b23e) choice_list_pane

0x294d,	// (0x0004b2c0) cell_toolbar_pane_t1

0x2975,	// (0x0004b2e8) toolbar_button_pane_ParamLimits

0x3a24,	// (0x0004c397) ai_gene_pane_1_t2_ParamLimits

0x3a24,	// (0x0004c397) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0005828b) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0005828b) ai_gene_pane_1_t

0x4fe9,	// (0x0004d95c) scroll_sc2_left_pane_g1

0x4fe9,	// (0x0004d95c) scroll_sc2_right_pane_g1

0x1e40,	// (0x0004a7b3) bg_popup_sub_pane_cp10

0x4ff3,	// (0x0004d966) list_choice_list_pane

0x500c,	// (0x0004d97f) list_single_choice_list_pane_ParamLimits

0x500c,	// (0x0004d97f) list_single_choice_list_pane

0x5024,	// (0x0004d997) list_single_choice_list_pane_g1

0xa95a,	// (0x000532cd) list_single_choice_list_pane_t1_ParamLimits

0xa95a,	// (0x000532cd) list_single_choice_list_pane_t1

0x502c,	// (0x0004d99f) choice_list_pane_g1

0x5034,	// (0x0004d9a7) choice_list_pane_t1

0x6ba9,	// (0x0004f51c) input_focus_pane_cp11

0xab17,	// (0x0005348a) title_pane_stacon_g2_ParamLimits

0xab17,	// (0x0005348a) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x00058047) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00058047) title_pane_stacon_g

0x0552,	// (0x00048ec5) cursor_press_pane

0xb207,	// (0x00053b7a) popup_fep_hwr_window_ParamLimits

0xb207,	// (0x00053b7a) popup_fep_hwr_window

0x1fac,	// (0x0004a91f) popup_fep_vkb_window_ParamLimits

0x1fac,	// (0x0004a91f) popup_fep_vkb_window

0x5042,	// (0x0004d9b5) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x000584b8) fep_vkb_side_pane_g_ParamLimits

0x0e82,	// (0x000497f5) fep_hwr_candidate_pane_ParamLimits

0x0e82,	// (0x000497f5) fep_hwr_candidate_pane

0x0eac,	// (0x0004981f) fep_hwr_side_pane_ParamLimits

0x0eac,	// (0x0004981f) fep_hwr_side_pane

0x0ece,	// (0x00049841) fep_hwr_top_pane_ParamLimits

0x0ece,	// (0x00049841) fep_hwr_top_pane

0x0ee6,	// (0x00049859) fep_hwr_write_pane_ParamLimits

0x0ee6,	// (0x00049859) fep_hwr_write_pane

0xfb45,	// (0x000584b8) fep_vkb_side_pane_g

0x504a,	// (0x0004d9bd) fep_hwr_top_pane_g1

0x505c,	// (0x0004d9cf) fep_hwr_top_pane_g2

0x0f12,	// (0x00049885) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00058494) fep_hwr_top_pane_g

0x0f27,	// (0x0004989a) fep_hwr_top_text_pane

0xc518,	// (0x00054e8b) fep_hwr_top_text_pane_g1

0x5092,	// (0x0004da05) fep_hwr_top_text_pane_t1

0x1031,	// (0x000499a4) fep_hwr_candidate_pane_g1

0x52dd,	// (0x0004dc50) fep_vkb_keypad_pane_g3_ParamLimits

0x52dd,	// (0x0004dc50) fep_vkb_keypad_pane_g3

0x5309,	// (0x0004dc7c) fep_vkb_keypad_pane_g4_ParamLimits

0x5309,	// (0x0004dc7c) fep_vkb_keypad_pane_g4

0x5380,	// (0x0004dcf3) fep_vkb_bottom_pane_g2_ParamLimits

0x5380,	// (0x0004dcf3) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x000584bf) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x000584bf) fep_vkb_bottom_pane_g

0x4fe9,	// (0x0004d95c) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x000584c9) cell_vkb_side_pane_g

0x540b,	// (0x0004dd7e) cell_vkb_side_pane_t1

0x5419,	// (0x0004dd8c) cell_vkb_side_pane_t1_copy1

0x4fe9,	// (0x0004d95c) bg_fep_vkb_candidate_pane_g2

0x555d,	// (0x0004ded0) cell_vkb_candidate_pane_ParamLimits

0x50a0,	// (0x0004da13) aid_size_cell_vkb_ParamLimits

0x50a0,	// (0x0004da13) aid_size_cell_vkb

0x555d,	// (0x0004ded0) cell_vkb_candidate_pane

0x104b,	// (0x000499be) bg_popup_fep_shadow_pane_g1

0xce7e,	// (0x000557f1) fep_vkb_bottom_pane_ParamLimits

0xce7e,	// (0x000557f1) fep_vkb_bottom_pane

0x516f,	// (0x0004dae2) fep_vkb_candidate_pane_ParamLimits

0x516f,	// (0x0004dae2) fep_vkb_candidate_pane

0xceaa,	// (0x0005581d) fep_vkb_keypad_pane_ParamLimits

0xceaa,	// (0x0005581d) fep_vkb_keypad_pane

0xced1,	// (0x00055844) fep_vkb_side_pane_ParamLimits

0xced1,	// (0x00055844) fep_vkb_side_pane

0xcf0d,	// (0x00055880) fep_vkb_top_pane_ParamLimits

0xcf0d,	// (0x00055880) fep_vkb_top_pane

0x5236,	// (0x0004dba9) fep_vkb_top_pane_g1_ParamLimits

0x5236,	// (0x0004dba9) fep_vkb_top_pane_g1

0x5245,	// (0x0004dbb8) fep_vkb_top_pane_g2_ParamLimits

0x5245,	// (0x0004dbb8) fep_vkb_top_pane_g2

0x5254,	// (0x0004dbc7) fep_vkb_top_pane_g3_ParamLimits

0x5254,	// (0x0004dbc7) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x000584af) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x000584af) fep_vkb_top_pane_g

0x5272,	// (0x0004dbe5) fep_vkb_top_text_pane_ParamLimits

0x5272,	// (0x0004dbe5) fep_vkb_top_text_pane

0xcf49,	// (0x000558bc) fep_vkb_side_pane_g1_ParamLimits

0xcf49,	// (0x000558bc) fep_vkb_side_pane_g1

0x52cc,	// (0x0004dc3f) grid_vkb_side_pane_ParamLimits

0x52cc,	// (0x0004dc3f) grid_vkb_side_pane

0x1053,	// (0x000499c6) bg_popup_fep_shadow_pane_g2

0x105c,	// (0x000499cf) bg_popup_fep_shadow_pane_g3

0x1064,	// (0x000499d7) bg_popup_fep_shadow_pane_g4

0x106d,	// (0x000499e0) bg_popup_fep_shadow_pane_g5

0x1077,	// (0x000499ea) bg_popup_fep_shadow_pane_g6

0x107f,	// (0x000499f2) bg_popup_fep_shadow_pane_g7

0xa83a,	// (0x000531ad) bg_popup_fep_shadow_pane_g8

0x532b,	// (0x0004dc9e) grid_vkb_keypad_number_pane_ParamLimits

0x532b,	// (0x0004dc9e) grid_vkb_keypad_number_pane

0x533f,	// (0x0004dcb2) grid_vkb_keypad_pane_ParamLimits

0x533f,	// (0x0004dcb2) grid_vkb_keypad_pane

0x5365,	// (0x0004dcd8) fep_vkb_bottom_pane_g1_ParamLimits

0x5365,	// (0x0004dcd8) fep_vkb_bottom_pane_g1

0x538e,	// (0x0004dd01) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x538e,	// (0x0004dd01) grid_vkb_keypad_bottom_left_pane

0x53a3,	// (0x0004dd16) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x53a3,	// (0x0004dd16) grid_vkb_keypad_bottom_right_pane

0x53b8,	// (0x0004dd2b) fep_vkb_top_text_pane_g1

0xcf90,	// (0x00055903) fep_vkb_top_text_pane_t1

0xcfa2,	// (0x00055915) cell_vkb_side_pane_ParamLimits

0xcfa2,	// (0x00055915) cell_vkb_side_pane

0x4fe9,	// (0x0004d95c) cell_vkb_side_pane_g1

0x5427,	// (0x0004dd9a) cell_vkb_keypad_pane_ParamLimits

0x5427,	// (0x0004dd9a) cell_vkb_keypad_pane

0x54b4,	// (0x0004de27) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x000584dc) bg_popup_fep_shadow_pane_g

0x4fe9,	// (0x0004d95c) cell_hwr_side_pane_g1

0x4fe9,	// (0x0004d95c) cell_hwr_side_pane_g2

0x54be,	// (0x0004de31) cell_vkb_keypad_pane_t1

0xcfb8,	// (0x0005592b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcfb8,	// (0x0005592b) cell_vkb_keypad_bottom_left_pane

0xcfcd,	// (0x00055940) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcfcd,	// (0x00055940) cell_vkb_keypad_bottom_right_pane

0x4fe9,	// (0x0004d95c) cell_vkb_keypad_bottom_left_pane_g1

0x4fe9,	// (0x0004d95c) cell_vkb_keypad_bottom_right_pane_g1

0x5522,	// (0x0004de95) cell_vkb_keypad_number_pane_ParamLimits

0x5522,	// (0x0004de95) cell_vkb_keypad_number_pane

0x5541,	// (0x0004deb4) cell_vkb_keypad_number_pane_g1

0x554b,	// (0x0004debe) cell_vkb_keypad_number_pane_g2

0x5554,	// (0x0004dec7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x000584ce) cell_vkb_keypad_number_pane_g

0x54be,	// (0x0004de31) cell_vkb_keypad_number_pane_t1

0x557e,	// (0x0004def1) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x000584c9) cell_hwr_side_pane_g

0x5597,	// (0x0004df0a) cell_hwr_side_pane_t1

0x1091,	// (0x00049a04) cell_hwr_side_pane_t1_copy1

0x5264,	// (0x0004dbd7) cell_hwr_candidate_pane_g1

0x109f,	// (0x00049a12) cell_hwr_candidate_pane_t1

0x4fe9,	// (0x0004d95c) cell_vkb_candidate_pane_g2

0x561d,	// (0x0004df90) cell_vkb_candidate_pane_t1

0x8a25,	// (0x00051398) bg_popup_fep_shadow_pane_ParamLimits

0x8a25,	// (0x00051398) bg_popup_fep_shadow_pane

0xce44,	// (0x000557b7) bg_fep_hwr_top_pane_g4

0x506e,	// (0x0004d9e1) bg_hwr_side_pane_g1_ParamLimits

0x506e,	// (0x0004d9e1) bg_hwr_side_pane_g1

0xbe15,	// (0x00054788) cell_hwr_side_pane_ParamLimits

0xbe15,	// (0x00054788) cell_hwr_side_pane

0x0fa2,	// (0x00049915) fep_hwr_write_pane_g1_ParamLimits

0x0fa2,	// (0x00049915) fep_hwr_write_pane_g1

0x0faf,	// (0x00049922) fep_hwr_write_pane_g2_ParamLimits

0x0faf,	// (0x00049922) fep_hwr_write_pane_g2

0x0fbc,	// (0x0004992f) fep_hwr_write_pane_g3_ParamLimits

0x0fbc,	// (0x0004992f) fep_hwr_write_pane_g3

0xbe35,	// (0x000547a8) fep_hwr_write_pane_g4_ParamLimits

0xbe35,	// (0x000547a8) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x0005849b) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x0005849b) fep_hwr_write_pane_g

0xce44,	// (0x000557b7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xce44,	// (0x000557b7) bg_fep_hwr_candidate_pane_g2

0x0fdf,	// (0x00049952) cell_hwr_candidate_pane_ParamLimits

0x0fdf,	// (0x00049952) cell_hwr_candidate_pane

0x1031,	// (0x000499a4) fep_hwr_candidate_pane_g1_ParamLimits

0x50ce,	// (0x0004da41) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x50ce,	// (0x0004da41) bg_popup_fep_shadow_pane_cp2

0x5264,	// (0x0004dbd7) fep_vkb_top_pane_g4_ParamLimits

0x5264,	// (0x0004dbd7) fep_vkb_top_pane_g4

0x52aa,	// (0x0004dc1d) fep_vkb_side_pane_g2_ParamLimits

0x52aa,	// (0x0004dc1d) fep_vkb_side_pane_g2

0x9778,	// (0x000520eb) list_setting_pane_t4_ParamLimits

0x9778,	// (0x000520eb) list_setting_pane_t4

0x9814,	// (0x00052187) list_setting_number_pane_t5_ParamLimits

0x9814,	// (0x00052187) list_setting_number_pane_t5

0xad16,	// (0x00053689) list_double_heading_pane_cp2_ParamLimits

0xad16,	// (0x00053689) list_double_heading_pane_cp2

0x562b,	// (0x0004df9e) list_double_heading_pane_g1_cp2_ParamLimits

0x562b,	// (0x0004df9e) list_double_heading_pane_g1_cp2

0x5637,	// (0x0004dfaa) list_double_heading_pane_g2_cp2_ParamLimits

0x5637,	// (0x0004dfaa) list_double_heading_pane_g2_cp2

0x564b,	// (0x0004dfbe) list_double_heading_pane_t1_cp2_ParamLimits

0x564b,	// (0x0004dfbe) list_double_heading_pane_t1_cp2

0x5661,	// (0x0004dfd4) list_double_heading_pane_t2_cp2_ParamLimits

0x5661,	// (0x0004dfd4) list_double_heading_pane_t2_cp2

0x6ba1,	// (0x0004f514) aid_value_unit2

0xf2a7,	// (0x00057c1a) popup_preview_fixed_window

0xa166,	// (0x00052ad9) bg_popup_preview_window_pane_cp02

0x5673,	// (0x0004dfe6) list_preview_fixed_pane

0x56b9,	// (0x0004e02c) list_empty_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_empty_pane_fp

0x56b9,	// (0x0004e02c) list_single_cale_day_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_single_cale_day_pane_fp

0x56b9,	// (0x0004e02c) list_single_graphic_heading_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_single_graphic_heading_pane_fp

0x56b9,	// (0x0004e02c) list_single_graphic_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_single_graphic_pane_fp

0x56b9,	// (0x0004e02c) list_single_heading_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_single_heading_pane_fp

0x56b9,	// (0x0004e02c) list_single_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_single_pane_fp

0x56d2,	// (0x0004e045) list_single_pane_fp_g1_ParamLimits

0x56d2,	// (0x0004e045) list_single_pane_fp_g1

0x562b,	// (0x0004df9e) list_single_pane_fp_g2_ParamLimits

0x562b,	// (0x0004df9e) list_single_pane_fp_g2

0x5637,	// (0x0004dfaa) list_single_pane_fp_g3_ParamLimits

0x5637,	// (0x0004dfaa) list_single_pane_fp_g3

0x56de,	// (0x0004e051) list_single_pane_fp_g4_ParamLimits

0x56de,	// (0x0004e051) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x000584fd) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x000584fd) list_single_pane_fp_g

0xf0c4,	// (0x00057a37) list_single_pane_fp_t1_ParamLimits

0xf0c4,	// (0x00057a37) list_single_pane_fp_t1

0xf0db,	// (0x00057a4e) list_single_graphic_pane_fp_g1_ParamLimits

0xf0db,	// (0x00057a4e) list_single_graphic_pane_fp_g1

0x56d2,	// (0x0004e045) list_single_graphic_pane_fp_g2_ParamLimits

0x56d2,	// (0x0004e045) list_single_graphic_pane_fp_g2

0x562b,	// (0x0004df9e) list_single_graphic_pane_fp_g3_ParamLimits

0x562b,	// (0x0004df9e) list_single_graphic_pane_fp_g3

0x5637,	// (0x0004dfaa) list_single_graphic_pane_fp_g4_ParamLimits

0x5637,	// (0x0004dfaa) list_single_graphic_pane_fp_g4

0x56de,	// (0x0004e051) list_single_graphic_pane_fp_g5_ParamLimits

0x56de,	// (0x0004e051) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x00058506) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x00058506) list_single_graphic_pane_fp_g

0xf0e7,	// (0x00057a5a) list_single_graphic_pane_fp_t1_ParamLimits

0xf0e7,	// (0x00057a5a) list_single_graphic_pane_fp_t1

0xf0db,	// (0x00057a4e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf0db,	// (0x00057a4e) list_single_graphic_heading_pane_fp_g1

0x56d2,	// (0x0004e045) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x56d2,	// (0x0004e045) list_single_graphic_heading_pane_fp_g2

0x562b,	// (0x0004df9e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x562b,	// (0x0004df9e) list_single_graphic_heading_pane_fp_g3

0x5637,	// (0x0004dfaa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5637,	// (0x0004dfaa) list_single_graphic_heading_pane_fp_g4

0x56de,	// (0x0004e051) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x56de,	// (0x0004e051) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00058506) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00058506) list_single_graphic_heading_pane_fp_g

0xf0fd,	// (0x00057a70) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf0fd,	// (0x00057a70) list_single_graphic_heading_pane_fp_t1

0xf113,	// (0x00057a86) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf113,	// (0x00057a86) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x00058511) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x00058511) list_single_graphic_heading_pane_fp_t

0xf125,	// (0x00057a98) list_single_cale_day_pane_fp_g1_ParamLimits

0xf125,	// (0x00057a98) list_single_cale_day_pane_fp_g1

0x56ea,	// (0x0004e05d) list_single_cale_day_pane_fp_g2_ParamLimits

0x56ea,	// (0x0004e05d) list_single_cale_day_pane_fp_g2

0x10bd,	// (0x00049a30) list_single_cale_day_pane_fp_g3_ParamLimits

0x10bd,	// (0x00049a30) list_single_cale_day_pane_fp_g3

0x10e5,	// (0x00049a58) list_single_cale_day_pane_fp_g4_ParamLimits

0x10e5,	// (0x00049a58) list_single_cale_day_pane_fp_g4

0x1109,	// (0x00049a7c) list_single_cale_day_pane_fp_g5_ParamLimits

0x1109,	// (0x00049a7c) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x00058516) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x00058516) list_single_cale_day_pane_fp_g

0xf15d,	// (0x00057ad0) list_single_cale_day_pane_fp_t1_ParamLimits

0xf15d,	// (0x00057ad0) list_single_cale_day_pane_fp_t1

0xf183,	// (0x00057af6) list_single_cale_day_pane_fp_t2_ParamLimits

0xf183,	// (0x00057af6) list_single_cale_day_pane_fp_t2

0xf19c,	// (0x00057b0f) list_single_cale_day_pane_fp_t3_ParamLimits

0xf19c,	// (0x00057b0f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x00058521) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x00058521) list_single_cale_day_pane_fp_t

0x56d2,	// (0x0004e045) list_empty_pane_fp_g1_ParamLimits

0x56d2,	// (0x0004e045) list_empty_pane_fp_g1

0xf1b5,	// (0x00057b28) list_empty_pane_fp_t1

0xf1c3,	// (0x00057b36) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x00058528) list_empty_pane_fp_t

0x56d2,	// (0x0004e045) list_single_heading_pane_fp_g1_ParamLimits

0x56d2,	// (0x0004e045) list_single_heading_pane_fp_g1

0x562b,	// (0x0004df9e) list_single_heading_pane_fp_g2_ParamLimits

0x562b,	// (0x0004df9e) list_single_heading_pane_fp_g2

0x5637,	// (0x0004dfaa) list_single_heading_pane_fp_g3_ParamLimits

0x5637,	// (0x0004dfaa) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x0005852d) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x0005852d) list_single_heading_pane_fp_g

0xf1d1,	// (0x00057b44) list_single_heading_pane_fp_t1_ParamLimits

0xf1d1,	// (0x00057b44) list_single_heading_pane_fp_t1

0xf1e3,	// (0x00057b56) list_single_heading_pane_fp_t2_ParamLimits

0xf1e3,	// (0x00057b56) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x00058534) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x00058534) list_single_heading_pane_fp_t

0xa9ae,	// (0x00053321) aid_size_cell_fast

0xa0e6,	// (0x00052a59) soft_indicator_pane_cp1_t1

0xa9eb,	// (0x0005335e) cell_app_pane_cp2_ParamLimits

0xa9eb,	// (0x0005335e) cell_app_pane_cp2

0x0e6b,	// (0x000497de) fep_hwr_candidate_drop_down_list_pane

0xce52,	// (0x000557c5) fep_hwr_candidate_pane_g3_ParamLimits

0xce52,	// (0x000557c5) fep_hwr_candidate_pane_g3

0xce5f,	// (0x000557d2) fep_hwr_candidate_pane_g4_ParamLimits

0xce5f,	// (0x000557d2) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000584a8) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000584a8) fep_hwr_candidate_pane_g

0x515e,	// (0x0004dad1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x515e,	// (0x0004dad1) fep_vkb_candidate_drop_down_list_pane

0x5586,	// (0x0004def9) fep_vkb_candidate_pane_g3

0x558e,	// (0x0004df01) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x000584d5) fep_vkb_candidate_pane_g

0x5264,	// (0x0004dbd7) cell_hwr_candidate_pane_g1_ParamLimits

0x55a5,	// (0x0004df18) cell_hwr_candidate_pane_g3_ParamLimits

0x55a5,	// (0x0004df18) cell_hwr_candidate_pane_g3

0x55c6,	// (0x0004df39) cell_hwr_candidate_pane_g4_ParamLimits

0x55c6,	// (0x0004df39) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x000584ef) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x000584ef) cell_hwr_candidate_pane_g

0x55e7,	// (0x0004df5a) cell_vkb_candidate_pane_g3_ParamLimits

0x55e7,	// (0x0004df5a) cell_vkb_candidate_pane_g3

0x5602,	// (0x0004df75) cell_vkb_candidate_pane_g4_ParamLimits

0x5602,	// (0x0004df75) cell_vkb_candidate_pane_g4

0x56f6,	// (0x0004e069) cell_app_pane_cp2_g1_ParamLimits

0x56f6,	// (0x0004e069) cell_app_pane_cp2_g1

0x5714,	// (0x0004e087) cell_app_pane_cp2_g2_ParamLimits

0x5714,	// (0x0004e087) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x00058539) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x00058539) cell_app_pane_cp2_g

0x5720,	// (0x0004e093) cell_app_pane_cp2_t1_ParamLimits

0x5720,	// (0x0004e093) cell_app_pane_cp2_t1

0xa7bf,	// (0x00053132) grid_highlight_pane_cp1_ParamLimits

0xa7bf,	// (0x00053132) grid_highlight_pane_cp1

0x112d,	// (0x00049aa0) cell_hwr_candidate_pane_cp1_ParamLimits

0x112d,	// (0x00049aa0) cell_hwr_candidate_pane_cp1

0x5264,	// (0x0004dbd7) fep_hwr_candidate_drop_down_list_pane_g1

0x5732,	// (0x0004e0a5) fep_hwr_candidate_drop_down_list_pane_g2

0x573f,	// (0x0004e0b2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0005853e) fep_hwr_candidate_drop_down_list_pane_g

0x1151,	// (0x00049ac4) fep_hwr_candidate_drop_down_list_scroll_pane

0x115a,	// (0x00049acd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x115a,	// (0x00049acd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1167,	// (0x00049ada) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1167,	// (0x00049ada) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1174,	// (0x00049ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1174,	// (0x00049ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x55e7,	// (0x0004df5a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x55e7,	// (0x0004df5a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5602,	// (0x0004df75) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5602,	// (0x0004df75) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1181,	// (0x00049af4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1181,	// (0x00049af4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x119c,	// (0x00049b0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x119c,	// (0x00049b0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x11b7,	// (0x00049b2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x11b7,	// (0x00049b2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00058545) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00058545) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x574c,	// (0x0004e0bf) cell_vkb_candidate_pane_cp1_ParamLimits

0x574c,	// (0x0004e0bf) cell_vkb_candidate_pane_cp1

0x5264,	// (0x0004dbd7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5264,	// (0x0004dbd7) fep_vkb_candidate_drop_down_list_pane_g1

0x5732,	// (0x0004e0a5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5732,	// (0x0004e0a5) fep_vkb_candidate_drop_down_list_pane_g2

0x573f,	// (0x0004e0b2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x573f,	// (0x0004e0b2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x0005853e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x0005853e) fep_vkb_candidate_drop_down_list_pane_g

0x5772,	// (0x0004e0e5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5772,	// (0x0004e0e5) fep_vkb_candidate_drop_down_list_scroll_pane

0x577f,	// (0x0004e0f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x577f,	// (0x0004e0f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x578c,	// (0x0004e0ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x578c,	// (0x0004e0ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5798,	// (0x0004e10b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5798,	// (0x0004e10b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x55a5,	// (0x0004df18) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x55a5,	// (0x0004df18) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x55c6,	// (0x0004df39) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x55c6,	// (0x0004df39) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x57a4,	// (0x0004e117) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x57a4,	// (0x0004e117) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x57c5,	// (0x0004e138) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x57c5,	// (0x0004e138) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x57e6,	// (0x0004e159) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x57e6,	// (0x0004e159) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x00058556) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x00058556) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d94,	// (0x00052707) title_pane_g1_ParamLimits

0x9da7,	// (0x0005271a) title_pane_g2_ParamLimits

0xf554,	// (0x00057ec7) title_pane_g_ParamLimits

0xc508,	// (0x00054e7b) aid_call2_pane

0xc510,	// (0x00054e83) aid_call_pane

0xc518,	// (0x00054e8b) popup_clock_analogue_window_g1

0xc518,	// (0x00054e8b) popup_clock_analogue_window_g2

0x00be,	// (0x00048a31) popup_clock_analogue_window_g3

0x00c7,	// (0x00048a3a) popup_clock_analogue_window_g4

0x6bb3,	// (0x0004f526) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00058076) popup_clock_analogue_window_g

0x00cf,	// (0x00048a42) popup_clock_analogue_window_t1

0x0110,	// (0x00048a83) clock_digital_number_pane_ParamLimits

0x0110,	// (0x00048a83) clock_digital_number_pane

0x011c,	// (0x00048a8f) clock_digital_number_pane_cp02_ParamLimits

0x011c,	// (0x00048a8f) clock_digital_number_pane_cp02

0x0128,	// (0x00048a9b) clock_digital_number_pane_cp03_ParamLimits

0x0128,	// (0x00048a9b) clock_digital_number_pane_cp03

0x0134,	// (0x00048aa7) clock_digital_number_pane_cp04_ParamLimits

0x0134,	// (0x00048aa7) clock_digital_number_pane_cp04

0x0140,	// (0x00048ab3) clock_digital_separator_pane_ParamLimits

0x0140,	// (0x00048ab3) clock_digital_separator_pane

0x014c,	// (0x00048abf) popup_clock_digital_window_t1_ParamLimits

0x014c,	// (0x00048abf) popup_clock_digital_window_t1

0x6bb3,	// (0x0004f526) clock_digital_number_pane_g1

0x6bb3,	// (0x0004f526) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00058081) clock_digital_number_pane_g

0x6bb3,	// (0x0004f526) clock_digital_separator_pane_g1

0x6bb3,	// (0x0004f526) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00058081) clock_digital_separator_pane_g

0xb872,	// (0x000541e5) aid_fill_nsta_ParamLimits

0xb9aa,	// (0x0005431d) indicator_nsta_pane_ParamLimits

0x2758,	// (0x0004b0cb) popup_clock_analogue_window

0x2758,	// (0x0004b0cb) popup_clock_digital_window

0xcc5d,	// (0x000555d0) grid_indicator_nsta_pane_ParamLimits

0x4a16,	// (0x0004d389) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00058428) clock_nsta_pane_t

0x0027,	// (0x0004899a) aid_size_max_handle

0xac58,	// (0x000535cb) aid_size_min_handle

0x0552,	// (0x00048ec5) editor_scroll_pane

0x5801,	// (0x0004e174) ex_editor_pane

0xa935,	// (0x000532a8) scroll_pane_cp13

0xa6f2,	// (0x00053065) scroll_pane_cp14

0xc547,	// (0x00054eba) scroll_pane_cp36

0xad29,	// (0x0005369c) list_single_graphic_hl_pane_cp2_ParamLimits

0xad29,	// (0x0005369c) list_single_graphic_hl_pane_cp2

0xcaf9,	// (0x0005546c) list_single_graphic_hl_pane_ParamLimits

0xcaf9,	// (0x0005546c) list_single_graphic_hl_pane

0xf1f9,	// (0x00057b6c) aid_size_min_hl_cp1

0x5809,	// (0x0004e17c) list_highlight_pane_cp34_ParamLimits

0x5809,	// (0x0004e17c) list_highlight_pane_cp34

0x581a,	// (0x0004e18d) list_single_graphic_hl_pane_g1_ParamLimits

0x581a,	// (0x0004e18d) list_single_graphic_hl_pane_g1

0x9a82,	// (0x000523f5) list_single_graphic_hl_pane_g2_ParamLimits

0x9a82,	// (0x000523f5) list_single_graphic_hl_pane_g2

0x9a82,	// (0x000523f5) list_single_graphic_hl_pane_g3_ParamLimits

0x9a82,	// (0x000523f5) list_single_graphic_hl_pane_g3

0xcfe8,	// (0x0005595b) list_single_graphic_hl_pane_g4_ParamLimits

0xcfe8,	// (0x0005595b) list_single_graphic_hl_pane_g4

0x5857,	// (0x0004e1ca) list_single_graphic_hl_pane_g5_ParamLimits

0x5857,	// (0x0004e1ca) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x00058567) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x00058567) list_single_graphic_hl_pane_g

0x9a8e,	// (0x00052401) list_single_graphic_hl_pane_t1_ParamLimits

0x9a8e,	// (0x00052401) list_single_graphic_hl_pane_t1

0x5827,	// (0x0004e19a) aid_size_min_hl_cp2

0x5830,	// (0x0004e1a3) list_highlight_pane_cp34_cp2_ParamLimits

0x5830,	// (0x0004e1a3) list_highlight_pane_cp34_cp2

0x581a,	// (0x0004e18d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x581a,	// (0x0004e18d) list_single_graphic_hl_pane_g1_cp2

0x583d,	// (0x0004e1b0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x583d,	// (0x0004e1b0) list_single_graphic_hl_pane_g2_cp2

0xcff4,	// (0x00055967) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcff4,	// (0x00055967) list_single_graphic_hl_pane_g3_cp2

0xcfe8,	// (0x0005595b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcfe8,	// (0x0005595b) list_single_graphic_hl_pane_g4_cp2

0x5857,	// (0x0004e1ca) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5857,	// (0x0004e1ca) list_single_graphic_hl_pane_g5_cp2

0xafe7,	// (0x0005395a) control_pane_g4_ParamLimits

0xafe7,	// (0x0005395a) control_pane_g4

0x1e40,	// (0x0004a7b3) bg_popup_sub_pane_cp10_ParamLimits

0x4ff3,	// (0x0004d966) list_choice_list_pane_ParamLimits

0x5002,	// (0x0004d975) scroll_pane_cp23

0xa166,	// (0x00052ad9) bg_popup_preview_window_pane_cp02_ParamLimits

0x5673,	// (0x0004dfe6) list_preview_fixed_pane_ParamLimits

0x5689,	// (0x0004dffc) list_preview_fixed_pane_cp_ParamLimits

0x5689,	// (0x0004dffc) list_preview_fixed_pane_cp

0x5695,	// (0x0004e008) popup_preview_fixed_window_g1_ParamLimits

0x5695,	// (0x0004e008) popup_preview_fixed_window_g1

0x56a1,	// (0x0004e014) popup_preview_fixed_window_g2_ParamLimits

0x56a1,	// (0x0004e014) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x000584f6) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x000584f6) popup_preview_fixed_window_g

0xf4c6,	// (0x00057e39) aid_navi_side_left_pane_ParamLimits

0xf4db,	// (0x00057e4e) aid_navi_side_right_pane_ParamLimits

0xf4f3,	// (0x00057e66) navi_icon_pane_stacon_ParamLimits

0xf507,	// (0x00057e7a) navi_navi_pane_stacon_ParamLimits

0xf4f3,	// (0x00057e66) navi_text_pane_stacon_ParamLimits

0x6ba9,	// (0x0004f51c) main_text_info_pane

0x5881,	// (0x0004e1f4) listscroll_text_info_pane

0x5889,	// (0x0004e1fc) list_text_info_pane_ParamLimits

0x5889,	// (0x0004e1fc) list_text_info_pane

0x5898,	// (0x0004e20b) scroll_pane_cp24_ParamLimits

0x5898,	// (0x0004e20b) scroll_pane_cp24

0xd002,	// (0x00055975) list_text_info_pane_t1_ParamLimits

0xd002,	// (0x00055975) list_text_info_pane_t1

0xb16b,	// (0x00053ade) popup_fast_swap2_window_ParamLimits

0xb16b,	// (0x00053ade) popup_fast_swap2_window

0x58db,	// (0x0004e24e) aid_size_cell_fast2

0x6ba9,	// (0x0004f51c) bg_popup_window_pane_cp17

0x2db5,	// (0x0004b728) heading_pane_cp2

0xa3c6,	// (0x00052d39) listscroll_fast2_pane

0x58e5,	// (0x0004e258) grid_fast2_pane

0x58ef,	// (0x0004e262) listscroll_fast2_pane_g1

0x58f9,	// (0x0004e26c) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x00058572) listscroll_fast2_pane_g

0xa935,	// (0x000532a8) scroll_pane_cp26

0x5903,	// (0x0004e276) cell_fast2_pane_ParamLimits

0x5903,	// (0x0004e276) cell_fast2_pane

0x591a,	// (0x0004e28d) cell_fast2_pane_g1

0x5923,	// (0x0004e296) cell_fast2_pane_g2

0x592c,	// (0x0004e29f) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x00058577) cell_fast2_pane_g

0xa4af,	// (0x00052e22) grid_highlight_pane_cp9

0xa4c4,	// (0x00052e37) main_eswt_pane_ParamLimits

0xa4c4,	// (0x00052e37) main_eswt_pane

0x58ad,	// (0x0004e220) list_single_text_info_pane

0x5934,	// (0x0004e2a7) eswt_ctrl_button_pane

0x5934,	// (0x0004e2a7) eswt_ctrl_canvas_pane

0x593c,	// (0x0004e2af) eswt_ctrl_combo_pane

0x5934,	// (0x0004e2a7) eswt_ctrl_default_pane

0x5934,	// (0x0004e2a7) eswt_ctrl_label_pane

0x5944,	// (0x0004e2b7) eswt_ctrl_wait_pane

0x594c,	// (0x0004e2bf) eswt_shell_pane

0x6ba9,	// (0x0004f51c) listscroll_eswt_app_pane

0x596c,	// (0x0004e2df) popup_eswt_tasktip_window_ParamLimits

0x596c,	// (0x0004e2df) popup_eswt_tasktip_window

0x29f5,	// (0x0004b368) bg_popup_window_pane_cp18

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_ParamLimits

0x597d,	// (0x0004e2f0) eswt_control_pane_g1

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_ParamLimits

0x598a,	// (0x0004e2fd) eswt_control_pane_g2

0x5997,	// (0x0004e30a) eswt_control_pane_g3_ParamLimits

0x5997,	// (0x0004e30a) eswt_control_pane_g3

0x59a4,	// (0x0004e317) eswt_control_pane_g4_ParamLimits

0x59a4,	// (0x0004e317) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x0005857e) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x0005857e) eswt_control_pane_g

0xa7bf,	// (0x00053132) bg_button_pane_ParamLimits

0xa7bf,	// (0x00053132) bg_button_pane

0xa4c4,	// (0x00052e37) common_borders_pane_copy2_ParamLimits

0xa4c4,	// (0x00052e37) common_borders_pane_copy2

0x59b1,	// (0x0004e324) control_button_pane_g1_ParamLimits

0x59b1,	// (0x0004e324) control_button_pane_g1

0x59bd,	// (0x0004e330) control_button_pane_g2_ParamLimits

0x59bd,	// (0x0004e330) control_button_pane_g2

0x59c9,	// (0x0004e33c) control_button_pane_g3_ParamLimits

0x59c9,	// (0x0004e33c) control_button_pane_g3

0x0002,

0xfc14,	// (0x00058587) control_button_pane_g_ParamLimits

0xfc14,	// (0x00058587) control_button_pane_g

0x59dd,	// (0x0004e350) control_button_pane_t1

0x59eb,	// (0x0004e35e) control_button_pane_t2

0x0001,

0xfc1b,	// (0x0005858e) control_button_pane_t

0x2981,	// (0x0004b2f4) bg_button_pane_g1

0x2989,	// (0x0004b2fc) bg_button_pane_g2

0x2991,	// (0x0004b304) bg_button_pane_g3

0x2999,	// (0x0004b30c) bg_button_pane_g4

0x29a1,	// (0x0004b314) bg_button_pane_g5

0x29a9,	// (0x0004b31c) bg_button_pane_g6

0x29b1,	// (0x0004b324) bg_button_pane_g7

0x29b9,	// (0x0004b32c) bg_button_pane_g8

0x29c1,	// (0x0004b334) bg_button_pane_g9

0x0008,

0xf86c,	// (0x000581df) bg_button_pane_g

0x4fae,	// (0x0004d921) common_borders_pane_ParamLimits

0x4fae,	// (0x0004d921) common_borders_pane

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy1_ParamLimits

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy1

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy1_ParamLimits

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy1

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy1_ParamLimits

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy1

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy1_ParamLimits

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy1

0x4fe9,	// (0x0004d95c) bg_eswt_ctrl_canvas_pane_g1

0x4fae,	// (0x0004d921) common_borders_pane_cp2_ParamLimits

0x4fae,	// (0x0004d921) common_borders_pane_cp2

0x4fae,	// (0x0004d921) common_borders_pane_cp3_ParamLimits

0x4fae,	// (0x0004d921) common_borders_pane_cp3

0x59f9,	// (0x0004e36c) separator_horizontal_pane

0x5a01,	// (0x0004e374) separator_vertical_pane

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy2_ParamLimits

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy2

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy2_ParamLimits

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy2

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy2_ParamLimits

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy2

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy2_ParamLimits

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy2

0x6ba9,	// (0x0004f51c) common_borders_pane_cp4

0x5a0a,	// (0x0004e37d) separator_horizontal_pane_g1

0x5a13,	// (0x0004e386) separator_horizontal_pane_g2

0x5a1c,	// (0x0004e38f) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x00058593) separator_horizontal_pane_g

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy3_ParamLimits

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy3

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy3_ParamLimits

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy3

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy3_ParamLimits

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy3

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy3_ParamLimits

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy3

0x6ba9,	// (0x0004f51c) common_borders_pane_cp5

0x5a25,	// (0x0004e398) separator_vertical_pane_g1

0x5a2e,	// (0x0004e3a1) separator_vertical_pane_g2

0x5a37,	// (0x0004e3aa) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x0005859a) separator_vertical_pane_g

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy4_ParamLimits

0x597d,	// (0x0004e2f0) eswt_control_pane_g1_copy4

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy4_ParamLimits

0x598a,	// (0x0004e2fd) eswt_control_pane_g2_copy4

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy4_ParamLimits

0x5997,	// (0x0004e30a) eswt_control_pane_g3_copy4

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy4_ParamLimits

0x59a4,	// (0x0004e317) eswt_control_pane_g4_copy4

0xd024,	// (0x00055997) eswt_ctrl_combo_button_pane

0xd02c,	// (0x0005599f) eswt_ctrl_input_pane

0xd034,	// (0x000559a7) popup_choice_list_window_cp70

0xd03c,	// (0x000559af) eswt_ctrl_input_pane_t1

0x6ba9,	// (0x0004f51c) input_focus_pane_cp70

0x4fae,	// (0x0004d921) bg_button_pane_cp70_ParamLimits

0x4fae,	// (0x0004d921) bg_button_pane_cp70

0xd04a,	// (0x000559bd) eswt_ctrl_combo_button_pane_g1

0x5a6e,	// (0x0004e3e1) wait_bar_pane_cp70

0x29f5,	// (0x0004b368) bg_popup_window_pane_cp70_ParamLimits

0x29f5,	// (0x0004b368) bg_popup_window_pane_cp70

0x5a76,	// (0x0004e3e9) popup_eswt_tasktip_window_t1

0x5a8c,	// (0x0004e3ff) wait_bar_pane_cp71_ParamLimits

0x5a8c,	// (0x0004e3ff) wait_bar_pane_cp71

0x5a98,	// (0x0004e40b) grid_eswt_app_pane

0xac89,	// (0x000535fc) scroll_pane_cp70

0xd052,	// (0x000559c5) cell_eswt_app_pane_ParamLimits

0xd052,	// (0x000559c5) cell_eswt_app_pane

0xd084,	// (0x000559f7) cell_eswt_app_pane_g1_ParamLimits

0xd084,	// (0x000559f7) cell_eswt_app_pane_g1

0xd0b3,	// (0x00055a26) cell_eswt_app_pane_g2_ParamLimits

0xd0b3,	// (0x00055a26) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x000585a1) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x000585a1) cell_eswt_app_pane_g

0xd0dc,	// (0x00055a4f) cell_eswt_app_pane_t1_ParamLimits

0xd0dc,	// (0x00055a4f) cell_eswt_app_pane_t1

0x5b5d,	// (0x0004e4d0) grid_highlight_pane_cp70_ParamLimits

0x5b5d,	// (0x0004e4d0) grid_highlight_pane_cp70

0xe9e2,	// (0x00057355) set_content_pane_g1

0x1d72,	// (0x0004a6e5) status_small_volume_pane

0x11e6,	// (0x00049b59) status_small_volume_pane_g1

0x11ee,	// (0x00049b61) volume_small2_pane

0x11f7,	// (0x00049b6a) volume_small2_pane_g1

0x1200,	// (0x00049b73) volume_small2_pane_g2

0x1209,	// (0x00049b7c) volume_small2_pane_g3

0x1212,	// (0x00049b85) volume_small2_pane_g4

0x121b,	// (0x00049b8e) volume_small2_pane_g5

0x1224,	// (0x00049b97) volume_small2_pane_g6

0x122d,	// (0x00049ba0) volume_small2_pane_g7

0x1236,	// (0x00049ba9) volume_small2_pane_g8

0x123f,	// (0x00049bb2) volume_small2_pane_g9

0x1248,	// (0x00049bbb) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x000585a6) volume_small2_pane_g

0x53b8,	// (0x0004dd2b) fep_vkb_top_text_pane_g1_ParamLimits

0xcf90,	// (0x00055903) fep_vkb_top_text_pane_t1_ParamLimits

0x56ad,	// (0x0004e020) popup_preview_fixed_window_g3_ParamLimits

0x56ad,	// (0x0004e020) popup_preview_fixed_window_g3

0xb805,	// (0x00054178) popup_toolbar_trans_pane

0xc949,	// (0x000552bc) aid_height_set_list_ParamLimits

0x3d5e,	// (0x0004c6d1) aid_size_parent_ParamLimits

0x1e40,	// (0x0004a7b3) list_highlight_pane_cp2_ParamLimits

0xe9e2,	// (0x00057355) set_content_pane_g1_ParamLimits

0x9a71,	// (0x000523e4) list_single_image_pane_ParamLimits

0x9a71,	// (0x000523e4) list_single_image_pane

0xd10e,	// (0x00055a81) aid_size_cell_image_ParamLimits

0xd10e,	// (0x00055a81) aid_size_cell_image

0xd11b,	// (0x00055a8e) grid_single_image_pane_ParamLimits

0xd11b,	// (0x00055a8e) grid_single_image_pane

0xa7cd,	// (0x00053140) list_single_image_pane_g1_ParamLimits

0xa7cd,	// (0x00053140) list_single_image_pane_g1

0xa7d9,	// (0x0005314c) list_single_image_pane_g2_ParamLimits

0xa7d9,	// (0x0005314c) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x000585bb) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x000585bb) list_single_image_pane_g

0x5b84,	// (0x0004e4f7) list_single_image_pane_t1_ParamLimits

0x5b84,	// (0x0004e4f7) list_single_image_pane_t1

0xd129,	// (0x00055a9c) cell_image_list_pane_ParamLimits

0xd129,	// (0x00055a9c) cell_image_list_pane

0xd13d,	// (0x00055ab0) cell_image_list_pane_g1

0xd146,	// (0x00055ab9) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x000585c0) cell_image_list_pane_g

0x5bc2,	// (0x0004e535) aid_size_cell_tb_trans_pane

0xa7bf,	// (0x00053132) bg_tb_trans_pane

0x5bd4,	// (0x0004e547) grid_tb_trans_pane

0x2981,	// (0x0004b2f4) bg_tb_trans_pane_g1

0x2989,	// (0x0004b2fc) bg_tb_trans_pane_g2

0x2991,	// (0x0004b304) bg_tb_trans_pane_g3

0x2999,	// (0x0004b30c) bg_tb_trans_pane_g4

0x29a1,	// (0x0004b314) bg_tb_trans_pane_g5

0x29b9,	// (0x0004b32c) bg_tb_trans_pane_g6

0x29c1,	// (0x0004b334) bg_tb_trans_pane_g7

0x29a9,	// (0x0004b31c) bg_tb_trans_pane_g8

0x29b1,	// (0x0004b324) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x000585c5) bg_tb_trans_pane_g

0x5be8,	// (0x0004e55b) cell_toolbar_trans_pane_ParamLimits

0x5be8,	// (0x0004e55b) cell_toolbar_trans_pane

0x4fe9,	// (0x0004d95c) cell_toolbar_trans_pane_g1

0xcd4d,	// (0x000556c0) list_form2_midp_pane_t1

0xcd5b,	// (0x000556ce) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x0005846e) list_form2_midp_pane_t

0x4c29,	// (0x0004d59c) scroll_pane_cp51_ParamLimits

0x4df0,	// (0x0004d763) form2_midp_wait_pane_g1

0x4df9,	// (0x0004d76c) form2_midp_wait_pane_g2

0x4e02,	// (0x0004d775) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x00058483) form2_midp_wait_pane_g

0x9e7f,	// (0x000527f2) list_highlight_pane_cp21_ParamLimits

0x4e46,	// (0x0004d7b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4e55,	// (0x0004d7c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3f36,	// (0x0004c8a9) list_single_2graphic_im_pane_ParamLimits

0x3f36,	// (0x0004c8a9) list_single_2graphic_im_pane

0xd14f,	// (0x00055ac2) list_single_2graphic_im_pane_g1_ParamLimits

0xd14f,	// (0x00055ac2) list_single_2graphic_im_pane_g1

0xd160,	// (0x00055ad3) list_single_2graphic_im_pane_g2_ParamLimits

0xd160,	// (0x00055ad3) list_single_2graphic_im_pane_g2

0xd16c,	// (0x00055adf) list_single_2graphic_im_pane_g3_ParamLimits

0xd16c,	// (0x00055adf) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x000585d8) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x000585d8) list_single_2graphic_im_pane_g

0xd180,	// (0x00055af3) list_single_2graphic_im_pane_t1_ParamLimits

0xd180,	// (0x00055af3) list_single_2graphic_im_pane_t1

0x56b9,	// (0x0004e02c) list_single_graphic_2heading_pane_fp_ParamLimits

0x56b9,	// (0x0004e02c) list_single_graphic_2heading_pane_fp

0xf0db,	// (0x00057a4e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf0db,	// (0x00057a4e) list_single_graphic_2heading_pane_fp_g1

0x56d2,	// (0x0004e045) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x56d2,	// (0x0004e045) list_single_graphic_2heading_pane_fp_g2

0x562b,	// (0x0004df9e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x562b,	// (0x0004df9e) list_single_graphic_2heading_pane_fp_g3

0x5637,	// (0x0004dfaa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5637,	// (0x0004dfaa) list_single_graphic_2heading_pane_fp_g4

0x56de,	// (0x0004e051) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x56de,	// (0x0004e051) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x00058506) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x00058506) list_single_graphic_2heading_pane_fp_g

0xf202,	// (0x00057b75) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf202,	// (0x00057b75) list_single_graphic_2heading_pane_fp_t1

0xf113,	// (0x00057a86) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf113,	// (0x00057a86) list_single_graphic_2heading_pane_fp_t2

0xf218,	// (0x00057b8b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf218,	// (0x00057b8b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x000585e1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x000585e1) list_single_graphic_2heading_pane_fp_t

0x507a,	// (0x0004d9ed) fep_hwr_write_pane_g5_ParamLimits

0x507a,	// (0x0004d9ed) fep_hwr_write_pane_g5

0x5086,	// (0x0004d9f9) fep_hwr_write_pane_g6_ParamLimits

0x5086,	// (0x0004d9f9) fep_hwr_write_pane_g6

0x594c,	// (0x0004e2bf) eswt_shell_pane_ParamLimits

0x29f5,	// (0x0004b368) bg_popup_window_pane_cp18_ParamLimits

0x3ca4,	// (0x0004c617) heading_pane_cp70

0x5a76,	// (0x0004e3e9) popup_eswt_tasktip_window_t1_ParamLimits

0xb8cf,	// (0x00054242) aid_touch_tab_arrow_left

0xb8e5,	// (0x00054258) aid_touch_tab_arrow_right

0x6bc7,	// (0x0004f53a) title_pane_g3_ParamLimits

0x6bc7,	// (0x0004f53a) title_pane_g3

0xa77e,	// (0x000530f1) set_value_pane_g1

0xb805,	// (0x00054178) popup_toolbar_trans_pane_ParamLimits

0x5bc2,	// (0x0004e535) aid_size_cell_tb_trans_pane_ParamLimits

0xa7bf,	// (0x00053132) bg_tb_trans_pane_ParamLimits

0x5bd4,	// (0x0004e547) grid_tb_trans_pane_ParamLimits

0xa166,	// (0x00052ad9) cont_note_pane_ParamLimits

0xa166,	// (0x00052ad9) cont_note_pane

0xa4c4,	// (0x00052e37) cont_snote2_single_text_pane_ParamLimits

0xa4c4,	// (0x00052e37) cont_snote2_single_text_pane

0xa4c4,	// (0x00052e37) cont_snote2_single_graphic_pane_ParamLimits

0xa4c4,	// (0x00052e37) cont_snote2_single_graphic_pane

0x2fd1,	// (0x0004b944) cont_note_wait_pane_ParamLimits

0x2fd1,	// (0x0004b944) cont_note_wait_pane

0x2fd1,	// (0x0004b944) cont_note_image_pane_ParamLimits

0x2fd1,	// (0x0004b944) cont_note_image_pane

0x5c7c,	// (0x0004e5ef) popup_note2_window_g1_ParamLimits

0x5c7c,	// (0x0004e5ef) popup_note2_window_g1

0x5cad,	// (0x0004e620) popup_note2_window_t1_ParamLimits

0x5cad,	// (0x0004e620) popup_note2_window_t1

0x5cf2,	// (0x0004e665) popup_note2_window_t2_ParamLimits

0x5cf2,	// (0x0004e665) popup_note2_window_t2

0x5d37,	// (0x0004e6aa) popup_note2_window_t3_ParamLimits

0x5d37,	// (0x0004e6aa) popup_note2_window_t3

0x5d7c,	// (0x0004e6ef) popup_note2_window_t4_ParamLimits

0x5d7c,	// (0x0004e6ef) popup_note2_window_t4

0xa1ea,	// (0x00052b5d) popup_note2_window_t5_ParamLimits

0xa1ea,	// (0x00052b5d) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x000585ed) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x000585ed) popup_note2_window_t

0x5dab,	// (0x0004e71e) popup_note2_image_window_g1_ParamLimits

0x5dab,	// (0x0004e71e) popup_note2_image_window_g1

0x5db7,	// (0x0004e72a) popup_note2_image_window_g2_ParamLimits

0x5db7,	// (0x0004e72a) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x000585f8) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x000585f8) popup_note2_image_window_g

0x5dc9,	// (0x0004e73c) popup_note2_image_window_t1_ParamLimits

0x5dc9,	// (0x0004e73c) popup_note2_image_window_t1

0x5de1,	// (0x0004e754) popup_note2_image_window_t2_ParamLimits

0x5de1,	// (0x0004e754) popup_note2_image_window_t2

0x5df9,	// (0x0004e76c) popup_note2_image_window_t3_ParamLimits

0x5df9,	// (0x0004e76c) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x000585fd) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x000585fd) popup_note2_image_window_t

0x2fdf,	// (0x0004b952) popup_note2_wait_window_g1_ParamLimits

0x2fdf,	// (0x0004b952) popup_note2_wait_window_g1

0x5e15,	// (0x0004e788) popup_note2_wait_window_g2_ParamLimits

0x5e15,	// (0x0004e788) popup_note2_wait_window_g2

0x2ff7,	// (0x0004b96a) popup_note2_wait_window_g3_ParamLimits

0x2ff7,	// (0x0004b96a) popup_note2_wait_window_g3

0x0002,

0xfc91,	// (0x00058604) popup_note2_wait_window_g_ParamLimits

0xfc91,	// (0x00058604) popup_note2_wait_window_g

0x5e21,	// (0x0004e794) popup_note2_wait_window_t1_ParamLimits

0x5e21,	// (0x0004e794) popup_note2_wait_window_t1

0x5e3f,	// (0x0004e7b2) popup_note2_wait_window_t2_ParamLimits

0x5e3f,	// (0x0004e7b2) popup_note2_wait_window_t2

0x5e5d,	// (0x0004e7d0) popup_note2_wait_window_t3_ParamLimits

0x5e5d,	// (0x0004e7d0) popup_note2_wait_window_t3

0x5e6f,	// (0x0004e7e2) popup_note2_wait_window_t4_ParamLimits

0x5e6f,	// (0x0004e7e2) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x0005860b) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x0005860b) popup_note2_wait_window_t

0x5e81,	// (0x0004e7f4) wait_bar2_pane_ParamLimits

0x5e81,	// (0x0004e7f4) wait_bar2_pane

0x5e99,	// (0x0004e80c) popup_snote2_single_text_window_g1_ParamLimits

0x5e99,	// (0x0004e80c) popup_snote2_single_text_window_g1

0x5ec1,	// (0x0004e834) popup_snote2_single_text_window_t1_ParamLimits

0x5ec1,	// (0x0004e834) popup_snote2_single_text_window_t1

0x5f0d,	// (0x0004e880) popup_snote2_single_text_window_t2_ParamLimits

0x5f0d,	// (0x0004e880) popup_snote2_single_text_window_t2

0x5f59,	// (0x0004e8cc) popup_snote2_single_text_window_t3_ParamLimits

0x5f59,	// (0x0004e8cc) popup_snote2_single_text_window_t3

0x5f9a,	// (0x0004e90d) popup_snote2_single_text_window_t4_ParamLimits

0x5f9a,	// (0x0004e90d) popup_snote2_single_text_window_t4

0x5fd0,	// (0x0004e943) popup_snote2_single_text_window_t5_ParamLimits

0x5fd0,	// (0x0004e943) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x00058614) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x00058614) popup_snote2_single_text_window_t

0x5ffb,	// (0x0004e96e) popup_snote2_single_graphic_window_g1_ParamLimits

0x5ffb,	// (0x0004e96e) popup_snote2_single_graphic_window_g1

0x6023,	// (0x0004e996) popup_snote2_single_graphic_window_g2_ParamLimits

0x6023,	// (0x0004e996) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x0005861f) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x0005861f) popup_snote2_single_graphic_window_g

0x604b,	// (0x0004e9be) popup_snote2_single_graphic_window_t1_ParamLimits

0x604b,	// (0x0004e9be) popup_snote2_single_graphic_window_t1

0x6097,	// (0x0004ea0a) popup_snote2_single_graphic_window_t2_ParamLimits

0x6097,	// (0x0004ea0a) popup_snote2_single_graphic_window_t2

0x5f59,	// (0x0004e8cc) popup_snote2_single_graphic_window_t3_ParamLimits

0x5f59,	// (0x0004e8cc) popup_snote2_single_graphic_window_t3

0x5f9a,	// (0x0004e90d) popup_snote2_single_graphic_window_t4_ParamLimits

0x5f9a,	// (0x0004e90d) popup_snote2_single_graphic_window_t4

0x5fd0,	// (0x0004e943) popup_snote2_single_graphic_window_t5_ParamLimits

0x5fd0,	// (0x0004e943) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x00058624) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x00058624) popup_snote2_single_graphic_window_t

0x4ad9,	// (0x0004d44c) clock_nsta_pane_cp2_t1

0x4ad9,	// (0x0004d44c) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00058444) clock_nsta_pane_cp2_t

0xe645,	// (0x00056fb8) form_field_data_wide_pane_g1_ParamLimits

0xa7cd,	// (0x00053140) form_field_data_wide_pane_g2_ParamLimits

0xa7cd,	// (0x00053140) form_field_data_wide_pane_g2

0xa7d9,	// (0x0005314c) form_field_data_wide_pane_g3_ParamLimits

0xa7d9,	// (0x0005314c) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00057ff9) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00057ff9) form_field_data_wide_pane_g

0xcc47,	// (0x000555ba) grid_touch_3_pane_ParamLimits

0xcc47,	// (0x000555ba) grid_touch_3_pane

0xd1b1,	// (0x00055b24) cell_touch_3_pane_ParamLimits

0xd1b1,	// (0x00055b24) cell_touch_3_pane

0x4fe9,	// (0x0004d95c) cell_touch_3_pane_g1

0x4fe9,	// (0x0004d95c) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x000584c9) cell_touch_3_pane_g

0xa21c,	// (0x00052b8f) cont_query_data_pane

0xa224,	// (0x00052b97) cont_query_data_pane_cp1

0x6116,	// (0x0004ea89) button_value_adjust_pane_cp7

0x611e,	// (0x0004ea91) query_popup_pane_cp3

0xe6da,	// (0x0005704d) bg_popup_sub_pane_cp22_ParamLimits

0x01cd,	// (0x00048b40) navi_navi_volume_pane_cp2

0x01e8,	// (0x00048b5b) popup_side_volume_key_window_g2

0x01f7,	// (0x00048b6a) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005808f) popup_side_volume_key_window_g

0x0214,	// (0x00048b87) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00058096) popup_side_volume_key_window_t

0xe8e5,	// (0x00057258) popup_side_volume_key_window_ParamLimits

0x954d,	// (0x00051ec0) list_double_graphic_pane_g4_ParamLimits

0x954d,	// (0x00051ec0) list_double_graphic_pane_g4

0xbde8,	// (0x0005475b) list_single_2heading_msg_pane_ParamLimits

0xbde8,	// (0x0005475b) list_single_2heading_msg_pane

0xbe4a,	// (0x000547bd) list_single_2heading_msg_pane_g1_ParamLimits

0xbe4a,	// (0x000547bd) list_single_2heading_msg_pane_g1

0xbe56,	// (0x000547c9) list_single_2heading_msg_pane_g2_ParamLimits

0xbe56,	// (0x000547c9) list_single_2heading_msg_pane_g2

0xbe69,	// (0x000547dc) list_single_2heading_msg_pane_g3_ParamLimits

0xbe69,	// (0x000547dc) list_single_2heading_msg_pane_g3

0xbe75,	// (0x000547e8) list_single_2heading_msg_pane_g4_ParamLimits

0xbe75,	// (0x000547e8) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x0005862f) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x0005862f) list_single_2heading_msg_pane_g

0x9aa4,	// (0x00052417) list_single_2heading_msg_pane_t1_ParamLimits

0x9aa4,	// (0x00052417) list_single_2heading_msg_pane_t1

0x9acc,	// (0x0005243f) list_single_2heading_msg_pane_t2_ParamLimits

0x9acc,	// (0x0005243f) list_single_2heading_msg_pane_t2

0x9b37,	// (0x000524aa) list_single_2heading_msg_pane_t3_ParamLimits

0x9b37,	// (0x000524aa) list_single_2heading_msg_pane_t3

0xf238,	// (0x00057bab) list_single_2heading_msg_pane_t4_ParamLimits

0xf238,	// (0x00057bab) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x00058638) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x00058638) list_single_2heading_msg_pane_t

0x6bd3,	// (0x0004f546) title_pane_g4_ParamLimits

0x6bd3,	// (0x0004f546) title_pane_g4

0xf416,	// (0x00057d89) title_pane_stacon_g3_ParamLimits

0xf416,	// (0x00057d89) title_pane_stacon_g3

0x5c3f,	// (0x0004e5b2) list_single_2graphic_im_pane_g4_ParamLimits

0x5c3f,	// (0x0004e5b2) list_single_2graphic_im_pane_g4

0x3a41,	// (0x0004c3b4) popup_side_volume_key_window_cp

0x42a1,	// (0x0004cc14) main_idle_act2_pane_t1

0x0963,	// (0x000492d6) toolbar_button_pane_g10

0xa6bc,	// (0x0005302f) popup_toolbar_window_cp1

0x4aca,	// (0x0004d43d) clock_nsta_pane_cp_t1

0x4aca,	// (0x0004d43d) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x0005843f) clock_nsta_pane_cp_t

0x01cd,	// (0x00048b40) navi_navi_volume_pane_cp2_ParamLimits

0x01dc,	// (0x00048b4f) popup_side_volume_key_window_g1_ParamLimits

0x01e8,	// (0x00048b5b) popup_side_volume_key_window_g2_ParamLimits

0x01f7,	// (0x00048b6a) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005808f) popup_side_volume_key_window_g_ParamLimits

0x0e57,	// (0x000497ca) fep_hwr_aid_pane

0xce44,	// (0x000557b7) bg_fep_hwr_top_pane_g4_ParamLimits

0x504a,	// (0x0004d9bd) fep_hwr_top_pane_g1_ParamLimits

0x505c,	// (0x0004d9cf) fep_hwr_top_pane_g2_ParamLimits

0x0f12,	// (0x00049885) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00058494) fep_hwr_top_pane_g_ParamLimits

0x0f27,	// (0x0004989a) fep_hwr_top_text_pane_ParamLimits

0x37f6,	// (0x0004c169) aid_touch_tab_arrow_arrow_2

0x37ff,	// (0x0004c172) aid_touch_tab_arrow_left_2

0x0e6b,	// (0x000497de) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ea2,	// (0x00049815) fep_hwr_prediction_pane

0x51b2,	// (0x0004db25) fep_vkb_prediction_pane

0xcf70,	// (0x000558e3) fep_vkb_side_pane_g3_ParamLimits

0xcf70,	// (0x000558e3) fep_vkb_side_pane_g3

0x5264,	// (0x0004dbd7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5732,	// (0x0004e0a5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x573f,	// (0x0004e0b2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x0005853e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6145,	// (0x0004eab8) fep_hwr_prediction_pane_g1

0x1281,	// (0x00049bf4) fep_hwr_prediction_pane_g2

0x1289,	// (0x00049bfc) fep_hwr_prediction_pane_g3

0x1291,	// (0x00049c04) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x00058641) fep_hwr_prediction_pane_g

0x6145,	// (0x0004eab8) fep_vkb_prediction_pane_g1

0x614f,	// (0x0004eac2) fep_vkb_prediction_pane_g2

0x6157,	// (0x0004eaca) fep_vkb_prediction_pane_g3

0x615f,	// (0x0004ead2) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x0005864a) fep_vkb_prediction_pane_g

0x4424,	// (0x0004cd97) slider_set_pane_g3

0x4438,	// (0x0004cdab) slider_set_pane_g4

0x6c25,	// (0x0004f598) slider_set_pane_g5

0x4424,	// (0x0004cd97) slider_set_pane_g6

0x0c70,	// (0x000495e3) slider_set_pane_g7

0x3ee3,	// (0x0004c856) slider_form_pane_g3

0x3eec,	// (0x0004c85f) slider_form_pane_g4

0x3ef4,	// (0x0004c867) slider_form_pane_g5

0x3ee3,	// (0x0004c856) slider_form_pane_g6

0xcab8,	// (0x0005542b) slider_form_pane_g7

0x4584,	// (0x0004cef7) slider_set_pane_vc_g3

0x458d,	// (0x0004cf00) slider_set_pane_vc_g4

0x4596,	// (0x0004cf09) slider_set_pane_vc_g5

0x4584,	// (0x0004cef7) slider_set_pane_vc_g6

0x459f,	// (0x0004cf12) slider_set_pane_vc_g7

0x4777,	// (0x0004d0ea) slider_form_pane_vc_g1

0x4780,	// (0x0004d0f3) slider_form_pane_vc_g2

0x4789,	// (0x0004d0fc) slider_form_pane_vc_g3

0x4777,	// (0x0004d0ea) slider_form_pane_vc_g4

0x4792,	// (0x0004d105) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00058411) slider_form_pane_vc_g

0x6ba9,	// (0x0004f51c) main_idle_act3_pane

0x6167,	// (0x0004eada) ai3_links_pane

0xd1fb,	// (0x00055b6e) popup_ai3_data_window_ParamLimits

0xd1fb,	// (0x00055b6e) popup_ai3_data_window

0x6ba9,	// (0x0004f51c) grid_ai3_links_pane

0xd219,	// (0x00055b8c) cell_ai3_links_pane_ParamLimits

0xd219,	// (0x00055b8c) cell_ai3_links_pane

0x61a8,	// (0x0004eb1b) bg_popup_sub_pane_cp11

0x61b5,	// (0x0004eb28) cell_ai3_links_pane_g1

0x6ba9,	// (0x0004f51c) bg_popup_sub_pane_cp12

0x61da,	// (0x0004eb4d) heading_ai3_data_pane

0x61e2,	// (0x0004eb55) list_ai3_gene_pane

0x61ee,	// (0x0004eb61) popup_ai3_data_window_g1

0x61f6,	// (0x0004eb69) heading_ai3_data_pane_g1

0x61fe,	// (0x0004eb71) heading_ai3_data_pane_t1

0x620c,	// (0x0004eb7f) list_double_ai3_gene_pane_ParamLimits

0x620c,	// (0x0004eb7f) list_double_ai3_gene_pane

0x6219,	// (0x0004eb8c) list_single_ai3_gene_pane_ParamLimits

0x6219,	// (0x0004eb8c) list_single_ai3_gene_pane

0x4fae,	// (0x0004d921) list_highlight_pane_cp7_ParamLimits

0x4fae,	// (0x0004d921) list_highlight_pane_cp7

0x6226,	// (0x0004eb99) list_single_a13_gene_pane_t1_ParamLimits

0x6226,	// (0x0004eb99) list_single_a13_gene_pane_t1

0x623d,	// (0x0004ebb0) list_single_ai3_gene_pane_g1

0x6246,	// (0x0004ebb9) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x00058653) list_single_ai3_gene_pane_g

0x624e,	// (0x0004ebc1) list_double_ai3_gene_pane_g1_ParamLimits

0x624e,	// (0x0004ebc1) list_double_ai3_gene_pane_g1

0x625a,	// (0x0004ebcd) list_double_ai3_gene_pane_t1_ParamLimits

0x625a,	// (0x0004ebcd) list_double_ai3_gene_pane_t1

0x6276,	// (0x0004ebe9) list_double_ai3_gene_pane_t2_ParamLimits

0x6276,	// (0x0004ebe9) list_double_ai3_gene_pane_t2

0x628b,	// (0x0004ebfe) list_double_ai3_gene_pane_t3_ParamLimits

0x628b,	// (0x0004ebfe) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x00058658) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x00058658) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf22e,	// (0x00057ba1) aid_size_min_col_2

0xd1e5,	// (0x00055b58) aid_size_min_msg_ParamLimits

0xd1e5,	// (0x00055b58) aid_size_min_msg

0xcf84,	// (0x000558f7) fep_vkb_top_text_pane_g2_ParamLimits

0xcf84,	// (0x000558f7) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x000584c4) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x000584c4) fep_vkb_top_text_pane_g

0x6ba9,	// (0x0004f51c) main_hc_apps_shell_pane

0x62a8,	// (0x0004ec1b) grid_hc_apps_pane_ParamLimits

0x62a8,	// (0x0004ec1b) grid_hc_apps_pane

0x62b7,	// (0x0004ec2a) list_hc_apps_pane

0x62bf,	// (0x0004ec32) scroll_pane_cp37_ParamLimits

0x62bf,	// (0x0004ec32) scroll_pane_cp37

0xd233,	// (0x00055ba6) cell_hc_apps_pane_ParamLimits

0xd233,	// (0x00055ba6) cell_hc_apps_pane

0xd2fd,	// (0x00055c70) cell_hc_apps_pane_g1_ParamLimits

0xd2fd,	// (0x00055c70) cell_hc_apps_pane_g1

0x63b4,	// (0x0004ed27) cell_hc_apps_pane_g2_ParamLimits

0x63b4,	// (0x0004ed27) cell_hc_apps_pane_g2

0x63d0,	// (0x0004ed43) cell_hc_apps_pane_g3_ParamLimits

0x63d0,	// (0x0004ed43) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x0005865f) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x0005865f) cell_hc_apps_pane_g

0xd32a,	// (0x00055c9d) cell_hc_apps_pane_t1_ParamLimits

0xd32a,	// (0x00055c9d) cell_hc_apps_pane_t1

0xa166,	// (0x00052ad9) grid_highlight_pane_cp10_ParamLimits

0xa166,	// (0x00052ad9) grid_highlight_pane_cp10

0xd36a,	// (0x00055cdd) list_single_hc_apps_pane_ParamLimits

0xd36a,	// (0x00055cdd) list_single_hc_apps_pane

0xd3a4,	// (0x00055d17) list_single_hc_apps_pane_g1

0xbe8d,	// (0x00054800) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x00058666) list_single_hc_apps_pane_g

0xbea6,	// (0x00054819) list_single_hc_apps_pane_g2_copy1

0x9ba5,	// (0x00052518) list_single_hc_apps_pane_t1

0x9e7f,	// (0x000527f2) bg_set_opt_pane_cp_ParamLimits

0xf328,	// (0x00057c9b) setting_slider_pane_t1_ParamLimits

0xf341,	// (0x00057cb4) setting_slider_pane_t2_ParamLimits

0xf35b,	// (0x00057cce) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00057ed7) setting_slider_pane_t_ParamLimits

0xf373,	// (0x00057ce6) slider_set_pane_ParamLimits

0x083f,	// (0x000491b2) control_pane_g5_ParamLimits

0x083f,	// (0x000491b2) control_pane_g5

0x3d10,	// (0x0004c683) slider_set_pane_g1_ParamLimits

0x0c64,	// (0x000495d7) slider_set_pane_g2_ParamLimits

0x4424,	// (0x0004cd97) slider_set_pane_g3_ParamLimits

0x4438,	// (0x0004cdab) slider_set_pane_g4_ParamLimits

0x6c25,	// (0x0004f598) slider_set_pane_g5_ParamLimits

0x4424,	// (0x0004cd97) slider_set_pane_g6_ParamLimits

0x0c70,	// (0x000495e3) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x000582dd) slider_set_pane_g_ParamLimits

0xe98d,	// (0x00057300) navi_icon_text_pane_ParamLimits

0xb896,	// (0x00054209) aid_fill_nsta_2_ParamLimits

0xb8cf,	// (0x00054242) aid_touch_tab_arrow_left_ParamLimits

0xb8e5,	// (0x00054258) aid_touch_tab_arrow_right_ParamLimits

0xb980,	// (0x000542f3) clock_nsta_pane_ParamLimits

0xc7cf,	// (0x00055142) navi_icon_pane_g1_ParamLimits

0xc7db,	// (0x0005514e) navi_text_pane_t1_ParamLimits

0xcd2f,	// (0x000556a2) navi_icon_text_pane_g1_ParamLimits

0xcd3b,	// (0x000556ae) navi_icon_text_pane_t1_ParamLimits

0xd3a4,	// (0x00055d17) list_single_hc_apps_pane_g1_ParamLimits

0xbe8d,	// (0x00054800) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x00058666) list_single_hc_apps_pane_g_ParamLimits

0xbea6,	// (0x00054819) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9ba5,	// (0x00052518) list_single_hc_apps_pane_t1_ParamLimits

0x9d29,	// (0x0005269c) popup_toolbar2_fixed_window_ParamLimits

0x9d29,	// (0x0005269c) popup_toolbar2_fixed_window

0xb7fb,	// (0x0005416e) popup_toolbar2_float_window

0x6ba9,	// (0x0004f51c) bg_popup_sub_pane_cp27

0x648a,	// (0x0004edfd) grid_toolbar2_float_pane

0x6ba9,	// (0x0004f51c) bg_popup_sub_pane_cp26

0x648a,	// (0x0004edfd) grid_toolbar2_fixed_pane

0xd3bd,	// (0x00055d30) cell_toolbar2_fixed_pane_ParamLimits

0xd3bd,	// (0x00055d30) cell_toolbar2_fixed_pane

0xd3da,	// (0x00055d4d) cell_toolbar2_fixed_pane_g1

0x64ab,	// (0x0004ee1e) toolbar2_fixed_button_pane

0x2981,	// (0x0004b2f4) toolbar2_fixed_button_pane_g1

0x2989,	// (0x0004b2fc) toolbar2_fixed_button_pane_g2

0x2991,	// (0x0004b304) toolbar2_fixed_button_pane_g3

0x2999,	// (0x0004b30c) toolbar2_fixed_button_pane_g4

0x29a1,	// (0x0004b314) toolbar2_fixed_button_pane_g5

0x29a9,	// (0x0004b31c) toolbar2_fixed_button_pane_g6

0x29b1,	// (0x0004b324) toolbar2_fixed_button_pane_g7

0x29b9,	// (0x0004b32c) toolbar2_fixed_button_pane_g8

0x29c1,	// (0x0004b334) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x000581df) toolbar2_fixed_button_pane_g

0x64b3,	// (0x0004ee26) cell_toolbar2_float_pane_ParamLimits

0x64b3,	// (0x0004ee26) cell_toolbar2_float_pane

0x64c4,	// (0x0004ee37) cell_toolbar2_float_pane_g1

0x64ab,	// (0x0004ee1e) toolbar2_fixed_button_pane_cp

0xce6c,	// (0x000557df) fep_vkb_accented_list_pane_ParamLimits

0xce6c,	// (0x000557df) fep_vkb_accented_list_pane

0x1089,	// (0x000499fc) bg_popup_fep_shadow_pane_g9

0x0552,	// (0x00048ec5) bg_popup_fep_shadow_pane_cp3

0xa91c,	// (0x0005328f) list_accented_list_pane

0x64cd,	// (0x0004ee40) list_single_accented_list_pane_ParamLimits

0x64cd,	// (0x0004ee40) list_single_accented_list_pane

0x0552,	// (0x00048ec5) list_highlight_pane_cp10

0x64de,	// (0x0004ee51) list_single_accented_list_pane_t1

0xb717,	// (0x0005408a) popup_slider_window_ParamLimits

0xb717,	// (0x0005408a) popup_slider_window

0x6126,	// (0x0004ea99) aid_indentation_list_msg

0xd4e5,	// (0x00055e58) bg_popup_window_pane_cp19

0x6618,	// (0x0004ef8b) popup_slider_window_g1

0x6634,	// (0x0004efa7) popup_slider_window_g2

0x6650,	// (0x0004efc3) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x0005866b) popup_slider_window_g

0x66ac,	// (0x0004f01f) popup_slider_window_t1

0x6720,	// (0x0004f093) small_volume_slider_vertical_pane

0x4fe9,	// (0x0004d95c) small_volume_slider_vertical_pane_g1

0x4fe9,	// (0x0004d95c) small_volume_slider_vertical_pane_g2

0x673c,	// (0x0004f0af) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x0005867d) small_volume_slider_vertical_pane_g

0x9c93,	// (0x00052606) area_side_right_pane_ParamLimits

0x9c93,	// (0x00052606) area_side_right_pane

0xbec2,	// (0x00054835) aid_size_side_button_ParamLimits

0xbec2,	// (0x00054835) aid_size_side_button

0xbedb,	// (0x0005484e) grid_sctrl_middle_pane_ParamLimits

0xbedb,	// (0x0005484e) grid_sctrl_middle_pane

0x1302,	// (0x00049c75) sctrl_sk_bottom_pane

0x1313,	// (0x00049c86) sctrl_sk_top_pane

0x1325,	// (0x00049c98) aid_touch_sctrl_top

0xa166,	// (0x00052ad9) bg_sctrl_sk_pane_ParamLimits

0xa166,	// (0x00052ad9) bg_sctrl_sk_pane

0x1332,	// (0x00049ca5) sctrl_sk_top_pane_g1

0x133f,	// (0x00049cb2) sctrl_sk_top_pane_t1

0x1325,	// (0x00049c98) aid_touch_sctrl_bottom

0xa166,	// (0x00052ad9) bg_sctrl_sk_pane_cp_ParamLimits

0xa166,	// (0x00052ad9) bg_sctrl_sk_pane_cp

0x135a,	// (0x00049ccd) sctrl_sk_bottom_pane_g1

0x133f,	// (0x00049cb2) sctrl_sk_bottom_pane_t1

0xbef5,	// (0x00054868) cell_sctrl_middle_pane_ParamLimits

0xbef5,	// (0x00054868) cell_sctrl_middle_pane

0xbf08,	// (0x0005487b) aid_touch_sctrl_middle_ParamLimits

0xbf08,	// (0x0005487b) aid_touch_sctrl_middle

0xbf15,	// (0x00054888) bg_sctrl_middle_pane_ParamLimits

0xbf15,	// (0x00054888) bg_sctrl_middle_pane

0x67c7,	// (0x0004f13a) cell_sctrl_middle_pane_g1_ParamLimits

0x67c7,	// (0x0004f13a) cell_sctrl_middle_pane_g1

0xbf23,	// (0x00054896) cell_sctrl_middle_pane_g2_ParamLimits

0xbf23,	// (0x00054896) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x00058689) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x00058689) cell_sctrl_middle_pane_g

0x2981,	// (0x0004b2f4) bg_sctrl_middle_pane_g1

0x2989,	// (0x0004b2fc) bg_sctrl_middle_pane_g2

0x2991,	// (0x0004b304) bg_sctrl_middle_pane_g3

0x2999,	// (0x0004b30c) bg_sctrl_middle_pane_g4

0x29a1,	// (0x0004b314) bg_sctrl_middle_pane_g5

0x29a9,	// (0x0004b31c) bg_sctrl_middle_pane_g6

0x29b1,	// (0x0004b324) bg_sctrl_middle_pane_g7

0x29b9,	// (0x0004b32c) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x0005868e) bg_sctrl_middle_pane_g

0x29c1,	// (0x0004b334) bg_sctrl_middle_pane_g8_copy1

0x2981,	// (0x0004b2f4) bg_sctrl_sk_pane_g1

0x2989,	// (0x0004b2fc) bg_sctrl_sk_pane_g2

0x2991,	// (0x0004b304) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x000581df) bg_sctrl_sk_pane_g

0xa682,	// (0x00052ff5) aid_size_touch_scroll_bar

0x2999,	// (0x0004b30c) bg_sctrl_sk_pane_g4

0x29a1,	// (0x0004b314) bg_sctrl_sk_pane_g5

0x29a9,	// (0x0004b31c) bg_sctrl_sk_pane_g6

0x29b1,	// (0x0004b324) bg_sctrl_sk_pane_g7

0x29b9,	// (0x0004b32c) bg_sctrl_sk_pane_g8

0x29c1,	// (0x0004b334) bg_sctrl_sk_pane_g9

0x1eee,	// (0x0004a861) popup_fep_china_hwr2_fs_candidate_window

0xb1cf,	// (0x00053b42) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb1cf,	// (0x00053b42) popup_fep_china_hwr2_fs_control_window

0x5264,	// (0x0004dbd7) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x00058684) sctrl_sk_top_pane_g

0xd59d,	// (0x00055f10) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd59d,	// (0x00055f10) aid_fep_china_hwr2_fs_cell

0xd5b3,	// (0x00055f26) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd5b3,	// (0x00055f26) bg_popup_fep_shadow_pane_cp4

0xd5ca,	// (0x00055f3d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd5ca,	// (0x00055f3d) bg_popup_fep_shadow_pane_cp5

0xd5dc,	// (0x00055f4f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd5dc,	// (0x00055f4f) popup_fep_china_hwr2_fs_control_bar_grid

0xd5f0,	// (0x00055f63) popup_fep_china_hwr2_fs_control_funtion_grid

0x679b,	// (0x0004f10e) aid_fep_china_hwr2_fs_candi_cell

0x6ba9,	// (0x0004f51c) bg_popup_fep_shadow_pane_cp6

0x67a5,	// (0x0004f118) popup_fep_china_hwr2_fs_candidate_grid

0xd5f8,	// (0x00055f6b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd5f8,	// (0x00055f6b) cell_fep_china_hwr2_fs_funtion_grid

0x4fe9,	// (0x0004d95c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x67c7,	// (0x0004f13a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x67c7,	// (0x0004f13a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x67d5,	// (0x0004f148) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x67d5,	// (0x0004f148) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x0005869f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x0005869f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd610,	// (0x00055f83) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd610,	// (0x00055f83) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd625,	// (0x00055f98) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd625,	// (0x00055f98) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x000586a4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x000586a4) cell_fep_china_hwr2_fs_funtion_grid_t

0x681c,	// (0x0004f18f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6824,	// (0x0004f197) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x682c,	// (0x0004f19f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x000586a9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6834,	// (0x0004f1a7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6834,	// (0x0004f1a7) cell_fep_china_hwr2_fs_candidate_grid

0x6853,	// (0x0004f1c6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x685b,	// (0x0004f1ce) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4fe9,	// (0x0004d95c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4fe9,	// (0x0004d95c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x000584c9) cell_fep_china_hwr2_fs_candidate_grid_g

0x6863,	// (0x0004f1d6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x255d,	// (0x0004aed0) clock_nsta_pane_cp_24_ParamLimits

0x255d,	// (0x0004aed0) clock_nsta_pane_cp_24

0x25dd,	// (0x0004af50) indicator_nsta_pane_cp_24_ParamLimits

0x25dd,	// (0x0004af50) indicator_nsta_pane_cp_24

0x3654,	// (0x0004bfc7) heading_pane_g1

0x0001,

0xf8d1,	// (0x00058244) heading_pane_g

0x40e8,	// (0x0004ca5b) grid_sct_catagory_button_pane

0x411a,	// (0x0004ca8d) scroll_pane_cp5_ParamLimits

0x4c35,	// (0x0004d5a8) button_value_adjust_pane_cp5_ParamLimits

0x4c35,	// (0x0004d5a8) button_value_adjust_pane_cp5

0x4d1a,	// (0x0004d68d) form2_midp_time_pane_ParamLimits

0x6871,	// (0x0004f1e4) cell_sct_catagory_button_pane_ParamLimits

0x6871,	// (0x0004f1e4) cell_sct_catagory_button_pane

0x4fae,	// (0x0004d921) bg_button_pane_cp01_ParamLimits

0x4fae,	// (0x0004d921) bg_button_pane_cp01

0x4fe9,	// (0x0004d95c) cell_sct_catagory_button_pane_g1

0xb798,	// (0x0005410b) popup_tb_extension_window

0xd641,	// (0x00055fb4) aid_size_cell_ext_ParamLimits

0xd641,	// (0x00055fb4) aid_size_cell_ext

0xa4c4,	// (0x00052e37) bg_tb_trans_pane_cp1_ParamLimits

0xa4c4,	// (0x00052e37) bg_tb_trans_pane_cp1

0xd667,	// (0x00055fda) grid_tb_ext_pane_ParamLimits

0xd667,	// (0x00055fda) grid_tb_ext_pane

0xd6a7,	// (0x0005601a) cell_tb_ext_pane_ParamLimits

0xd6a7,	// (0x0005601a) cell_tb_ext_pane

0xd6cf,	// (0x00056042) cell_tb_ext_pane_g1_ParamLimits

0xd6cf,	// (0x00056042) cell_tb_ext_pane_g1

0x6907,	// (0x0004f27a) cell_tb_ext_pane_t1

0xa166,	// (0x00052ad9) list_highlight_pane_cp11_ParamLimits

0xa166,	// (0x00052ad9) list_highlight_pane_cp11

0xf2b1,	// (0x00057c24) popup_uni_indicator_window_ParamLimits

0xf2b1,	// (0x00057c24) popup_uni_indicator_window

0xa7bf,	// (0x00053132) bg_popup_sub_pane_cp14

0x6922,	// (0x0004f295) list_uniindi_pane

0x692e,	// (0x0004f2a1) uniindi_top_pane

0xa166,	// (0x00052ad9) bg_uniindi_top_pane

0x694f,	// (0x0004f2c2) uniindi_top_pane_g1

0x6965,	// (0x0004f2d8) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x000586b0) uniindi_top_pane_g

0x698f,	// (0x0004f302) uniindi_top_pane_t1

0x69bb,	// (0x0004f32e) list_single_uniindi_pane_ParamLimits

0x69bb,	// (0x0004f32e) list_single_uniindi_pane

0x4fe9,	// (0x0004d95c) bg_uniindi_top_pane_g1

0x69cd,	// (0x0004f340) list_single_uniindi_pane_g1

0x69e0,	// (0x0004f353) list_single_uniindi_pane_t1

0x6ba9,	// (0x0004f51c) control_bg_pane

0x6a05,	// (0x0004f378) bg_sctrl_sk_pane_cp1

0x6a0e,	// (0x0004f381) bg_sctrl_sk_pane_cp2

0x6a17,	// (0x0004f38a) control_bg_pane_g1

0x6a20,	// (0x0004f393) control_bg_pane_g2

0x0001,

0xfd46,	// (0x000586b9) control_bg_pane_g

0x4a5c,	// (0x0004d3cf) cell_indicator_nsta_pane_g1_ParamLimits

0xcc88,	// (0x000555fb) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x0005842d) cell_indicator_nsta_pane_g_ParamLimits

0xf0b1,	// (0x00057a24) form2_midp_time_pane_t1_ParamLimits

0x8a25,	// (0x00051398) main_idle_act4_pane_ParamLimits

0x8a25,	// (0x00051398) main_idle_act4_pane

0xb798,	// (0x0005410b) popup_tb_extension_window_ParamLimits

0xd68f,	// (0x00056002) tb_ext_find_pane_ParamLimits

0xd68f,	// (0x00056002) tb_ext_find_pane

0x6a29,	// (0x0004f39c) ai_gene_pane_1_cp1

0x068f,	// (0x00049002) ai_gene_pane_2_cp1

0x6a31,	// (0x0004f3a4) list_single_idle_plugin_calendar_pane

0x6a3a,	// (0x0004f3ad) list_single_idle_plugin_notification_pane

0x6a43,	// (0x0004f3b6) list_single_idle_plugin_player_pane

0xd6ec,	// (0x0005605f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd6ec,	// (0x0005605f) list_single_idle_plugin_shortcut_pane

0xd714,	// (0x00056087) main_idle_act4_pane_t1

0xd72c,	// (0x0005609f) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x000586be) main_idle_act4_pane_t

0xd744,	// (0x000560b7) middle_sk_idle_act4_pane_ParamLimits

0xd744,	// (0x000560b7) middle_sk_idle_act4_pane

0xd760,	// (0x000560d3) popup_clock_digital_analogue_window_cp2

0xd787,	// (0x000560fa) shortcut_wheel_idle_act4_pane_ParamLimits

0xd787,	// (0x000560fa) shortcut_wheel_idle_act4_pane

0x4fe9,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g1

0x4fe9,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g2

0x4fe9,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g3

0x4fe9,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g4

0x4fe9,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g5

0x6ad6,	// (0x0004f449) shortcut_wheel_idle_act4_pane_g6

0x6ade,	// (0x0004f451) shortcut_wheel_idle_act4_pane_g7

0x6ae6,	// (0x0004f459) shortcut_wheel_idle_act4_pane_g8

0x6aee,	// (0x0004f461) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x000586c3) shortcut_wheel_idle_act4_pane_g

0xce44,	// (0x000557b7) middle_sk_idle_act4_pane_g1_ParamLimits

0xce44,	// (0x000557b7) middle_sk_idle_act4_pane_g1

0xd804,	// (0x00056177) middle_sk_idle_act4_pane_g2_ParamLimits

0xd804,	// (0x00056177) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x000586e6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x000586e6) middle_sk_idle_act4_pane_g

0xd81c,	// (0x0005618f) middle_sk_idle_act4_pane_t1_ParamLimits

0xd81c,	// (0x0005618f) middle_sk_idle_act4_pane_t1

0xd84b,	// (0x000561be) grid_ai_shortcut_pane_ParamLimits

0xd84b,	// (0x000561be) grid_ai_shortcut_pane

0xd868,	// (0x000561db) list_highlight_pane_cp16_ParamLimits

0xd868,	// (0x000561db) list_highlight_pane_cp16

0xd875,	// (0x000561e8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd875,	// (0x000561e8) list_single_idle_plugin_shortcut_pane_g1

0xd881,	// (0x000561f4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd881,	// (0x000561f4) list_single_idle_plugin_shortcut_pane_g2

0xd89f,	// (0x00056212) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd89f,	// (0x00056212) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x000586eb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x000586eb) list_single_idle_plugin_shortcut_pane_g

0xd8b4,	// (0x00056227) cell_ai_shortcut_pane_ParamLimits

0xd8b4,	// (0x00056227) cell_ai_shortcut_pane

0xd8ca,	// (0x0005623d) cell_ai_shortcut_pane_g1_ParamLimits

0xd8ca,	// (0x0005623d) cell_ai_shortcut_pane_g1

0x6a29,	// (0x0004f39c) ai_gene_pane_1_cp2

0x6cb9,	// (0x0004f62c) ai_gene_pane_2_cp2

0x6cc1,	// (0x0004f634) list_highlight_pane_cp15

0x6cca,	// (0x0004f63d) list_single_idle_plugin_calendar_pane_g1

0x6cc1,	// (0x0004f634) list_highlight_pane_cp17

0x6cd2,	// (0x0004f645) list_single_idle_plugin_calendar_pane_g1_copy1

0x6cda,	// (0x0004f64d) list_single_idle_plugin_player_pane_g1

0x434f,	// (0x0004ccc2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x000586f2) list_single_idle_plugin_player_pane_g

0x6ce2,	// (0x0004f655) list_single_idle_plugin_player_pane_t1

0x6cf0,	// (0x0004f663) list_single_idle_plugin_player_pane_t2

0x6cfe,	// (0x0004f671) list_single_idle_plugin_player_pane_t3

0x6d0c,	// (0x0004f67f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x000586f7) list_single_idle_plugin_player_pane_t

0x6d1a,	// (0x0004f68d) wait_bar_pane_cp15

0x6d22,	// (0x0004f695) grid_ai_notification_pane

0x434f,	// (0x0004ccc2) list_single_idle_plugin_notification_pane_g1

0xd8ec,	// (0x0005625f) cell_ai_notification_pane_ParamLimits

0xd8ec,	// (0x0005625f) cell_ai_notification_pane

0x6d38,	// (0x0004f6ab) cell_ai_notification_pane_g1

0x6d40,	// (0x0004f6b3) cell_ai_notification_pane_t1

0xd8f9,	// (0x0005626c) tb_ext_find_button_pane

0xd901,	// (0x00056274) tb_ext_find_pane_g1

0xd909,	// (0x0005627c) tb_ext_find_pane_t1

0xc518,	// (0x00054e8b) tb_ext_find_button_pane_g1

0x6d6c,	// (0x0004f6df) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x00058700) tb_ext_find_button_pane_g

0xd714,	// (0x00056087) main_idle_act4_pane_t1_ParamLimits

0xd72c,	// (0x0005609f) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x000586be) main_idle_act4_pane_t_ParamLimits

0xd760,	// (0x000560d3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd777,	// (0x000560ea) sat_plugin_idle_act4_pane_ParamLimits

0xd777,	// (0x000560ea) sat_plugin_idle_act4_pane

0xd917,	// (0x0005628a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd917,	// (0x0005628a) sat_plugin_idle_act4_pane_t1

0xd92f,	// (0x000562a2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd92f,	// (0x000562a2) sat_plugin_idle_act4_pane_t2

0xd947,	// (0x000562ba) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd947,	// (0x000562ba) sat_plugin_idle_act4_pane_t3

0xd95f,	// (0x000562d2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd95f,	// (0x000562d2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x00058705) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x00058705) sat_plugin_idle_act4_pane_t

0xf25d,	// (0x00057bd0) popup_battery_window_ParamLimits

0xf25d,	// (0x00057bd0) popup_battery_window

0xa166,	// (0x00052ad9) bg_popup_sub_pane_cp25_ParamLimits

0xa166,	// (0x00052ad9) bg_popup_sub_pane_cp25

0x6dc1,	// (0x0004f734) popup_battery_window_g1_ParamLimits

0x6dc1,	// (0x0004f734) popup_battery_window_g1

0x6dcd,	// (0x0004f740) popup_battery_window_t1_ParamLimits

0x6dcd,	// (0x0004f740) popup_battery_window_t1

0x6ddf,	// (0x0004f752) popup_battery_window_t2_ParamLimits

0x6ddf,	// (0x0004f752) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x0005870e) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x0005870e) popup_battery_window_t

0xaee6,	// (0x00053859) midp_canvas_pane_ParamLimits

0xaf41,	// (0x000538b4) midp_keypad_pane_ParamLimits

0xaf41,	// (0x000538b4) midp_keypad_pane

0x1e40,	// (0x0004a7b3) main_midp_pane_ParamLimits

0x4ae8,	// (0x0004d45b) signal_pane_g2_cp_ParamLimits

0xd977,	// (0x000562ea) aid_size_cell_midp_keypad_ParamLimits

0xd977,	// (0x000562ea) aid_size_cell_midp_keypad

0xd995,	// (0x00056308) midp_keyp_game_grid_pane_ParamLimits

0xd995,	// (0x00056308) midp_keyp_game_grid_pane

0xd9bc,	// (0x0005632f) midp_keyp_rocker_pane_ParamLimits

0xd9bc,	// (0x0005632f) midp_keyp_rocker_pane

0xd9fb,	// (0x0005636e) midp_keyp_sk_left_pane_ParamLimits

0xd9fb,	// (0x0005636e) midp_keyp_sk_left_pane

0xda4f,	// (0x000563c2) midp_keyp_sk_right_pane_ParamLimits

0xda4f,	// (0x000563c2) midp_keyp_sk_right_pane

0x6ba9,	// (0x0004f51c) bg_button_pane_cp03

0xdaa3,	// (0x00056416) midp_keyp_sk_left_pane_g1

0x6ba9,	// (0x0004f51c) bg_button_pane_cp04

0xdaa3,	// (0x00056416) midp_keyp_sk_right_pane_g1

0x4fe9,	// (0x0004d95c) midp_keyp_rocker_pane_g1

0xdaac,	// (0x0005641f) keyp_game_cell_pane_ParamLimits

0xdaac,	// (0x0005641f) keyp_game_cell_pane

0x6ba9,	// (0x0004f51c) bg_button_pane_cp02

0xdad2,	// (0x00056445) keyp_game_cell_pane_g1

0x9cd5,	// (0x00052648) popup_fep_vkb2_window_ParamLimits

0x9cd5,	// (0x00052648) popup_fep_vkb2_window

0xbf2f,	// (0x000548a2) aid_size_cell_vkb2_ParamLimits

0xbf2f,	// (0x000548a2) aid_size_cell_vkb2

0xbf65,	// (0x000548d8) popup_fep_vkb2_window_g1_ParamLimits

0xbf65,	// (0x000548d8) popup_fep_vkb2_window_g1

0xbfb5,	// (0x00054928) vkb2_area_bottom_pane_ParamLimits

0xbfb5,	// (0x00054928) vkb2_area_bottom_pane

0xc011,	// (0x00054984) vkb2_area_keypad_pane_ParamLimits

0xc011,	// (0x00054984) vkb2_area_keypad_pane

0xc05f,	// (0x000549d2) vkb2_area_top_pane_ParamLimits

0xc05f,	// (0x000549d2) vkb2_area_top_pane

0xc0e5,	// (0x00054a58) vkb2_top_entry_pane_ParamLimits

0xc0e5,	// (0x00054a58) vkb2_top_entry_pane

0xc112,	// (0x00054a85) vkb2_top_grid_left_pane_ParamLimits

0xc112,	// (0x00054a85) vkb2_top_grid_left_pane

0xc132,	// (0x00054aa5) vkb2_top_grid_right_pane_ParamLimits

0xc132,	// (0x00054aa5) vkb2_top_grid_right_pane

0x15c6,	// (0x00049f39) vkb2_cell_keypad_pane_ParamLimits

0x15c6,	// (0x00049f39) vkb2_cell_keypad_pane

0xc178,	// (0x00054aeb) vkb2_area_bottom_grid_pane_ParamLimits

0xc178,	// (0x00054aeb) vkb2_area_bottom_grid_pane

0xc1a2,	// (0x00054b15) vkb2_area_bottom_pane_g1_ParamLimits

0xc1a2,	// (0x00054b15) vkb2_area_bottom_pane_g1

0xc1c8,	// (0x00054b3b) vkb2_area_bottom_pane_g2_ParamLimits

0xc1c8,	// (0x00054b3b) vkb2_area_bottom_pane_g2

0xc1f9,	// (0x00054b6c) vkb2_area_bottom_pane_g3_ParamLimits

0xc1f9,	// (0x00054b6c) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x00058713) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x00058713) vkb2_area_bottom_pane_g

0x1770,	// (0x0004a0e3) vkb2_top_cell_left_pane_ParamLimits

0x1770,	// (0x0004a0e3) vkb2_top_cell_left_pane

0xdadb,	// (0x0005644e) vkb2_top_entry_pane_g1_ParamLimits

0xdadb,	// (0x0005644e) vkb2_top_entry_pane_g1

0xdae9,	// (0x0005645c) vkb2_top_entry_pane_t1_ParamLimits

0xdae9,	// (0x0005645c) vkb2_top_entry_pane_t1

0x6f82,	// (0x0004f8f5) vkb2_top_entry_pane_t2_ParamLimits

0x6f82,	// (0x0004f8f5) vkb2_top_entry_pane_t2

0x6fb4,	// (0x0004f927) vkb2_top_entry_pane_t3_ParamLimits

0x6fb4,	// (0x0004f927) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x0005871a) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x0005871a) vkb2_top_entry_pane_t

0xc263,	// (0x00054bd6) vkb2_top_grid_right_pane_g1_ParamLimits

0xc263,	// (0x00054bd6) vkb2_top_grid_right_pane_g1

0x17d3,	// (0x0004a146) vkb2_top_grid_right_pane_g2_ParamLimits

0x17d3,	// (0x0004a146) vkb2_top_grid_right_pane_g2

0x17eb,	// (0x0004a15e) vkb2_top_grid_right_pane_g3_ParamLimits

0x17eb,	// (0x0004a15e) vkb2_top_grid_right_pane_g3

0xc279,	// (0x00054bec) vkb2_top_grid_right_pane_g4_ParamLimits

0xc279,	// (0x00054bec) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x00058721) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x00058721) vkb2_top_grid_right_pane_g

0x1819,	// (0x0004a18c) vkb2_top_cell_left_pane_g1

0x1830,	// (0x0004a1a3) vkb2_cell_keypad_pane_g1_ParamLimits

0x1830,	// (0x0004a1a3) vkb2_cell_keypad_pane_g1

0x6fd8,	// (0x0004f94b) vkb2_cell_keypad_pane_t1_ParamLimits

0x6fd8,	// (0x0004f94b) vkb2_cell_keypad_pane_t1

0x183e,	// (0x0004a1b1) vkb2_cell_bottom_grid_pane_ParamLimits

0x183e,	// (0x0004a1b1) vkb2_cell_bottom_grid_pane

0x1877,	// (0x0004a1ea) vkb2_cell_bottom_grid_pane_g1

0xd7a8,	// (0x0005611b) aid_call2_pane_cp02

0xd7b0,	// (0x00056123) aid_call_pane_cp02

0xd7b8,	// (0x0005612b) clock_digital_number_pane_cp10

0xd7c0,	// (0x00056133) clock_digital_number_pane_cp11

0xd7c8,	// (0x0005613b) clock_digital_number_pane_cp12

0xd7d0,	// (0x00056143) clock_digital_number_pane_cp13

0xd7d8,	// (0x0005614b) clock_digital_separator_pane_cp10

0xc518,	// (0x00054e8b) popup_clock_digital_analogue_window_cp2_g1

0xc518,	// (0x00054e8b) popup_clock_digital_analogue_window_cp2_g2

0xd7e0,	// (0x00056153) popup_clock_digital_analogue_window_cp2_g3

0xc518,	// (0x00054e8b) popup_clock_digital_analogue_window_cp2_g4

0xd7e0,	// (0x00056153) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x000586d6) popup_clock_digital_analogue_window_cp2_g

0xd7e8,	// (0x0005615b) popup_clock_digital_analogue_window_cp2_t1

0xd7f6,	// (0x00056169) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x000586e1) popup_clock_digital_analogue_window_cp2_t

0x4fe9,	// (0x0004d95c) clock_digital_number_pane_cp10_g1

0x4fe9,	// (0x0004d95c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x000584c9) clock_digital_number_pane_cp10_g

0x4fe9,	// (0x0004d95c) clock_digital_separator_pane_cp10_g1

0x4fe9,	// (0x0004d95c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x000584c9) clock_digital_separator_pane_cp10_g

0x6971,	// (0x0004f2e4) uniindi_top_pane_g3

0x6982,	// (0x0004f2f5) uniindi_top_pane_g4

0x1651,	// (0x00049fc4) vkb2_row_keypad_pane_ParamLimits

0x1651,	// (0x00049fc4) vkb2_row_keypad_pane

0x1893,	// (0x0004a206) vkb2_cell_t_keypad_pane_ParamLimits

0x1893,	// (0x0004a206) vkb2_cell_t_keypad_pane

0x18a3,	// (0x0004a216) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x18a3,	// (0x0004a216) vkb2_cell_t_keypad_pane_cp08

0x18b8,	// (0x0004a22b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x18b8,	// (0x0004a22b) vkb2_cell_t_keypad_pane_cp09

0x18cc,	// (0x0004a23f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x18cc,	// (0x0004a23f) vkb2_cell_t_keypad_pane_cp01

0x18dd,	// (0x0004a250) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x18dd,	// (0x0004a250) vkb2_cell_t_keypad_pane_cp02

0x18ee,	// (0x0004a261) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x18ee,	// (0x0004a261) vkb2_cell_t_keypad_pane_cp03

0x18ff,	// (0x0004a272) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x18ff,	// (0x0004a272) vkb2_cell_t_keypad_pane_cp04

0x1910,	// (0x0004a283) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1910,	// (0x0004a283) vkb2_cell_t_keypad_pane_cp05

0x1921,	// (0x0004a294) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1921,	// (0x0004a294) vkb2_cell_t_keypad_pane_cp06

0x1934,	// (0x0004a2a7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1934,	// (0x0004a2a7) vkb2_cell_t_keypad_pane_cp07

0x1949,	// (0x0004a2bc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1949,	// (0x0004a2bc) vkb2_cell_t_keypad_pane_cp10

0x5264,	// (0x0004dbd7) vkb2_cell_t_keypad_pane_g1

0x6fef,	// (0x0004f962) vkb2_cell_t_keypad_pane_t1

0x6ba9,	// (0x0004f51c) popup_grid_graphic2_window

0xdb22,	// (0x00056495) aid_size_cell_graphic2_ParamLimits

0xdb22,	// (0x00056495) aid_size_cell_graphic2

0xdb60,	// (0x000564d3) bg_popup_window_pane_cp21_ParamLimits

0xdb60,	// (0x000564d3) bg_popup_window_pane_cp21

0xdb6e,	// (0x000564e1) graphic2_pages_pane_ParamLimits

0xdb6e,	// (0x000564e1) graphic2_pages_pane

0xdbc6,	// (0x00056539) grid_graphic2_control_pane_ParamLimits

0xdbc6,	// (0x00056539) grid_graphic2_control_pane

0xdc0e,	// (0x00056581) grid_graphic2_pane_ParamLimits

0xdc0e,	// (0x00056581) grid_graphic2_pane

0xdc99,	// (0x0005660c) cell_graphic2_pane

0x6ba9,	// (0x0004f51c) main_comp_mode_pane

0x61e2,	// (0x0004eb55) list_ai3_gene_pane_ParamLimits

0xd4e5,	// (0x00055e58) bg_popup_window_pane_cp19_ParamLimits

0x65b6,	// (0x0004ef29) bg_touch_area_indi_pane_ParamLimits

0x65b6,	// (0x0004ef29) bg_touch_area_indi_pane

0x65cc,	// (0x0004ef3f) bg_touch_area_indi_pane_cp01_ParamLimits

0x65cc,	// (0x0004ef3f) bg_touch_area_indi_pane_cp01

0x65e4,	// (0x0004ef57) bg_touch_area_indi_pane_cp02_ParamLimits

0x65e4,	// (0x0004ef57) bg_touch_area_indi_pane_cp02

0x65fe,	// (0x0004ef71) bg_touch_area_indi_pane_cp03_ParamLimits

0x65fe,	// (0x0004ef71) bg_touch_area_indi_pane_cp03

0x6618,	// (0x0004ef8b) popup_slider_window_g1_ParamLimits

0x6634,	// (0x0004efa7) popup_slider_window_g2_ParamLimits

0x6650,	// (0x0004efc3) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x0005866b) popup_slider_window_g_ParamLimits

0x66ac,	// (0x0004f01f) popup_slider_window_t1_ParamLimits

0x6720,	// (0x0004f093) small_volume_slider_vertical_pane_ParamLimits

0xdc99,	// (0x0005660c) cell_graphic2_pane_ParamLimits

0xdcfc,	// (0x0005666f) bg_button_pane_cp10_ParamLimits

0xdcfc,	// (0x0005666f) bg_button_pane_cp10

0xdd0f,	// (0x00056682) bg_button_pane_cp11_ParamLimits

0xdd0f,	// (0x00056682) bg_button_pane_cp11

0xdd22,	// (0x00056695) graphic2_pages_pane_g1_ParamLimits

0xdd22,	// (0x00056695) graphic2_pages_pane_g1

0xdd3d,	// (0x000566b0) graphic2_pages_pane_g2_ParamLimits

0xdd3d,	// (0x000566b0) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x0005872f) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x0005872f) graphic2_pages_pane_g

0xdd55,	// (0x000566c8) graphic2_pages_pane_t1_ParamLimits

0xdd55,	// (0x000566c8) graphic2_pages_pane_t1

0xdd6d,	// (0x000566e0) cell_graphic2_control_pane_ParamLimits

0xdd6d,	// (0x000566e0) cell_graphic2_control_pane

0xdda1,	// (0x00056714) cell_graphic2_pane_g1_ParamLimits

0xdda1,	// (0x00056714) cell_graphic2_pane_g1

0xce52,	// (0x000557c5) cell_graphic2_pane_g2_ParamLimits

0xce52,	// (0x000557c5) cell_graphic2_pane_g2

0xddae,	// (0x00056721) cell_graphic2_pane_g3_ParamLimits

0xddae,	// (0x00056721) cell_graphic2_pane_g3

0xce5f,	// (0x000557d2) cell_graphic2_pane_g4_ParamLimits

0xce5f,	// (0x000557d2) cell_graphic2_pane_g4

0xddbb,	// (0x0005672e) cell_graphic2_pane_g5_ParamLimits

0xddbb,	// (0x0005672e) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x00058734) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x00058734) cell_graphic2_pane_g

0xdddb,	// (0x0005674e) cell_graphic2_pane_t1_ParamLimits

0xdddb,	// (0x0005674e) cell_graphic2_pane_t1

0x3648,	// (0x0004bfbb) grid_highlight_pane_cp11_ParamLimits

0x3648,	// (0x0004bfbb) grid_highlight_pane_cp11

0xa166,	// (0x00052ad9) bg_button_pane_cp05

0xde10,	// (0x00056783) cell_graphic2_control_pane_g1

0x4fe9,	// (0x0004d95c) bg_touch_area_indi_pane_g1

0x72c9,	// (0x0004fc3c) aid_cmod_rocker_key_size

0x72d3,	// (0x0004fc46) aid_cmode_itu_key_size

0x72dd,	// (0x0004fc50) main_cmode_video_pane

0x72e7,	// (0x0004fc5a) main_comp_mode_itu_pane

0x72f3,	// (0x0004fc66) main_comp_mode_rocker_pane

0x72ff,	// (0x0004fc72) cell_cmode_rocker_pane_ParamLimits

0x72ff,	// (0x0004fc72) cell_cmode_rocker_pane

0x7313,	// (0x0004fc86) cell_cmode_itu_pane_ParamLimits

0x7313,	// (0x0004fc86) cell_cmode_itu_pane

0xa7bf,	// (0x00053132) bg_button_pane_cp06_ParamLimits

0xa7bf,	// (0x00053132) bg_button_pane_cp06

0x5264,	// (0x0004dbd7) cell_cmode_rocker_pane_g1_ParamLimits

0x5264,	// (0x0004dbd7) cell_cmode_rocker_pane_g1

0x67c7,	// (0x0004f13a) cell_cmode_rocker_pane_g2_ParamLimits

0x67c7,	// (0x0004f13a) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x00058744) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x00058744) cell_cmode_rocker_pane_g

0x6ba9,	// (0x0004f51c) bg_button_pane_cp07

0x732a,	// (0x0004fc9d) cell_cmode_itu_pane_g1

0x7333,	// (0x0004fca6) cell_cmode_itu_pane_t1

0x7341,	// (0x0004fcb4) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x00058749) cell_cmode_itu_pane_t

0x69f5,	// (0x0004f368) aid_touch_ctrl_left

0x69fd,	// (0x0004f370) aid_touch_ctrl_right

0x6ba9,	// (0x0004f51c) compa_mode_pane

0xde36,	// (0x000567a9) aid_cmod_rocker_key_size_cp

0xde40,	// (0x000567b3) aid_cmode_itu_key_size_cp

0x7363,	// (0x0004fcd6) compa_mode_pane_g1

0x736b,	// (0x0004fcde) compa_mode_pane_g2

0x7373,	// (0x0004fce6) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x0005874e) compa_mode_pane_g

0xde4a,	// (0x000567bd) main_comp_mode_itu_pane_cp

0xde52,	// (0x000567c5) main_comp_mode_rocker_pane_cp

0xde5a,	// (0x000567cd) cell_cmode_itu_pane_cp_ParamLimits

0xde5a,	// (0x000567cd) cell_cmode_itu_pane_cp

0xde6f,	// (0x000567e2) cell_cmode_rocker_pane_cp_ParamLimits

0xde6f,	// (0x000567e2) cell_cmode_rocker_pane_cp

0xa7bf,	// (0x00053132) bg_button_pane_cp06_cp_ParamLimits

0xa7bf,	// (0x00053132) bg_button_pane_cp06_cp

0x5264,	// (0x0004dbd7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5264,	// (0x0004dbd7) cell_cmode_rocker_pane_g1_cp

0x4fe9,	// (0x0004d95c) cell_cmode_rocker_pane_g2_cp

0x6ba9,	// (0x0004f51c) bg_button_pane_cp07_cp

0xde81,	// (0x000567f4) cell_cmode_itu_pane_g1_cp

0xde8a,	// (0x000567fd) cell_cmode_itu_pane_t1_cp

0xde8a,	// (0x000567fd) cell_cmode_itu_pane_t2_cp

0xcab0,	// (0x00055423) settings_code_pane_cp2

0x9e7f,	// (0x000527f2) bg_popup_window_pane_cp3_ParamLimits

0xa354,	// (0x00052cc7) heading_pane_cp3_ParamLimits

0xa360,	// (0x00052cd3) listscroll_popup_graphic_pane_ParamLimits

0x0e57,	// (0x000497ca) fep_hwr_aid_pane_ParamLimits

0x1325,	// (0x00049c98) aid_touch_sctrl_top_ParamLimits

0x1332,	// (0x00049ca5) sctrl_sk_top_pane_g1_ParamLimits

0x5264,	// (0x0004dbd7) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x00058684) sctrl_sk_top_pane_g_ParamLimits

0x133f,	// (0x00049cb2) sctrl_sk_top_pane_t1_ParamLimits

0x1325,	// (0x00049c98) aid_touch_sctrl_bottom_ParamLimits

0x133f,	// (0x00049cb2) sctrl_sk_bottom_pane_t1_ParamLimits

0x693b,	// (0x0004f2ae) aid_area_touch_clock

0xc0a7,	// (0x00054a1a) aid_vkb2_area_top_pane_cell_ParamLimits

0xc0a7,	// (0x00054a1a) aid_vkb2_area_top_pane_cell

0xc152,	// (0x00054ac5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc152,	// (0x00054ac5) aid_vkb2_area_bottom_pane_cell

0x6f3a,	// (0x0004f8ad) popup_char_count_window

0x73c9,	// (0x0004fd3c) popup_char_count_window_g1

0x73d2,	// (0x0004fd45) popup_char_count_window_g2

0x73db,	// (0x0004fd4e) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x00058755) popup_char_count_window_g

0x73e4,	// (0x0004fd57) popup_char_count_window_t1

0x13e2,	// (0x00049d55) popup_fep_char_preview_window_ParamLimits

0x13e2,	// (0x00049d55) popup_fep_char_preview_window

0xc0c7,	// (0x00054a3a) vkb2_top_candi_pane_ParamLimits

0xc0c7,	// (0x00054a3a) vkb2_top_candi_pane

0xde98,	// (0x0005680b) cell_vkb2_top_candi_pane_ParamLimits

0xde98,	// (0x0005680b) cell_vkb2_top_candi_pane

0x2fd1,	// (0x0004b944) bg_popup_fep_char_preview_window_ParamLimits

0x2fd1,	// (0x0004b944) bg_popup_fep_char_preview_window

0x195e,	// (0x0004a2d1) popup_fep_char_preview_window_t1_ParamLimits

0x195e,	// (0x0004a2d1) popup_fep_char_preview_window_t1

0x7443,	// (0x0004fdb6) bg_popup_fep_char_preview_window_g1

0x744b,	// (0x0004fdbe) bg_popup_fep_char_preview_window_g2

0x7453,	// (0x0004fdc6) bg_popup_fep_char_preview_window_g3

0x745b,	// (0x0004fdce) bg_popup_fep_char_preview_window_g4

0x7463,	// (0x0004fdd6) bg_popup_fep_char_preview_window_g5

0x1998,	// (0x0004a30b) bg_popup_fep_char_preview_window_g6

0x746b,	// (0x0004fdde) bg_popup_fep_char_preview_window_g7

0x7473,	// (0x0004fde6) bg_popup_fep_char_preview_window_g8

0x747b,	// (0x0004fdee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x0005875c) bg_popup_fep_char_preview_window_g

0x5264,	// (0x0004dbd7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5264,	// (0x0004dbd7) cell_vkb2_top_candi_pane_g1

0x55a5,	// (0x0004df18) cell_vkb2_top_candi_pane_g2_ParamLimits

0x55a5,	// (0x0004df18) cell_vkb2_top_candi_pane_g2

0x55c6,	// (0x0004df39) cell_vkb2_top_candi_pane_g3_ParamLimits

0x55c6,	// (0x0004df39) cell_vkb2_top_candi_pane_g3

0x19a0,	// (0x0004a313) cell_vkb2_top_candi_pane_g4_ParamLimits

0x19a0,	// (0x0004a313) cell_vkb2_top_candi_pane_g4

0x7483,	// (0x0004fdf6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7483,	// (0x0004fdf6) cell_vkb2_top_candi_pane_g5

0x67c7,	// (0x0004f13a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x67c7,	// (0x0004f13a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x0005876f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x0005876f) cell_vkb2_top_candi_pane_g

0x19c1,	// (0x0004a334) cell_vkb2_top_candi_pane_t1

0x0c50,	// (0x000495c3) aid_size_touch_slider_mark_ParamLimits

0x0c50,	// (0x000495c3) aid_size_touch_slider_mark

0xdbaa,	// (0x0005651d) grid_graphic2_catg_pane_ParamLimits

0xdbaa,	// (0x0005651d) grid_graphic2_catg_pane

0xdc68,	// (0x000565db) popup_grid_graphic2_window_t1_ParamLimits

0xdc68,	// (0x000565db) popup_grid_graphic2_window_t1

0xdc7e,	// (0x000565f1) popup_grid_graphic2_window_t2_ParamLimits

0xdc7e,	// (0x000565f1) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x0005872a) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x0005872a) popup_grid_graphic2_window_t

0xa166,	// (0x00052ad9) bg_button_pane_cp05_ParamLimits

0xde10,	// (0x00056783) cell_graphic2_control_pane_g1_ParamLimits

0xdf02,	// (0x00056875) cell_graphic2_catg_pane_ParamLimits

0xdf02,	// (0x00056875) cell_graphic2_catg_pane

0x6ba9,	// (0x0004f51c) bg_button_pane_cp12

0xdf14,	// (0x00056887) cell_graphic2_catg_pane_g1

0x6907,	// (0x0004f27a) cell_tb_ext_pane_t1_ParamLimits

0x1790,	// (0x0004a103) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1790,	// (0x0004a103) vkb2_top_cell_right_narrow_pane

0x17a8,	// (0x0004a11b) vkb2_top_cell_right_wide_pane_ParamLimits

0x17a8,	// (0x0004a11b) vkb2_top_cell_right_wide_pane

0x8a25,	// (0x00051398) bg_vkb2_func_pane_ParamLimits

0x8a25,	// (0x00051398) bg_vkb2_func_pane

0x1819,	// (0x0004a18c) vkb2_top_cell_left_pane_g1_ParamLimits

0x8a25,	// (0x00051398) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8a25,	// (0x00051398) bg_vkb2_fuc_pane_cp03

0x1877,	// (0x0004a1ea) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2989,	// (0x0004b2fc) bg_vkb2_func_pane_g1

0x2991,	// (0x0004b304) bg_vkb2_func_pane_g2

0x29a1,	// (0x0004b314) bg_vkb2_func_pane_g3

0x2999,	// (0x0004b30c) bg_vkb2_func_pane_g4

0x29a9,	// (0x0004b31c) bg_vkb2_func_pane_g5

0x29b1,	// (0x0004b324) bg_vkb2_func_pane_g6

0x29b9,	// (0x0004b32c) bg_vkb2_func_pane_g7

0x29c1,	// (0x0004b334) bg_vkb2_func_pane_g8

0x2981,	// (0x0004b2f4) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x0005877c) bg_vkb2_func_pane_g

0x8a25,	// (0x00051398) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8a25,	// (0x00051398) bg_vkb2_fuc_pane_cp01

0x1819,	// (0x0004a18c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1819,	// (0x0004a18c) vkb2_top_cell_right_wide_pane_g1

0x8a25,	// (0x00051398) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8a25,	// (0x00051398) bg_vkb2_fuc_pane_cp02

0x1877,	// (0x0004a1ea) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1877,	// (0x0004a1ea) vkb2_top_cell_right_narrow_pane_g1

0xd41f,	// (0x00055d92) aid_touch_area_decrease_ParamLimits

0xd41f,	// (0x00055d92) aid_touch_area_decrease

0xd459,	// (0x00055dcc) aid_touch_area_increase_ParamLimits

0xd459,	// (0x00055dcc) aid_touch_area_increase

0xd481,	// (0x00055df4) aid_touch_area_mute_ParamLimits

0xd481,	// (0x00055df4) aid_touch_area_mute

0xd4b1,	// (0x00055e24) aid_touch_area_slider_ParamLimits

0xd4b1,	// (0x00055e24) aid_touch_area_slider

0xd4f1,	// (0x00055e64) popup_slider_window_g4_ParamLimits

0xd4f1,	// (0x00055e64) popup_slider_window_g4

0xd519,	// (0x00055e8c) popup_slider_window_g5_ParamLimits

0xd519,	// (0x00055e8c) popup_slider_window_g5

0xd54d,	// (0x00055ec0) popup_slider_window_g6_ParamLimits

0xd54d,	// (0x00055ec0) popup_slider_window_g6

0x66da,	// (0x0004f04d) popup_slider_window_t2_ParamLimits

0x66da,	// (0x0004f04d) popup_slider_window_t2

0x0001,

0xfd05,	// (0x00058678) popup_slider_window_t_ParamLimits

0xfd05,	// (0x00058678) popup_slider_window_t

0xd569,	// (0x00055edc) slider_pane_ParamLimits

0xd569,	// (0x00055edc) slider_pane

0x74bf,	// (0x0004fe32) slider_pane_g1_ParamLimits

0x74bf,	// (0x0004fe32) slider_pane_g1

0x74d3,	// (0x0004fe46) slider_pane_g2_ParamLimits

0x74d3,	// (0x0004fe46) slider_pane_g2

0x74e9,	// (0x0004fe5c) slider_pane_g3_ParamLimits

0x74e9,	// (0x0004fe5c) slider_pane_g3

0x0003,

0xfe1c,	// (0x0005878f) slider_pane_g_ParamLimits

0xfe1c,	// (0x0005878f) slider_pane_g

0xb7e4,	// (0x00054157) popup_tb_float_extension_window_ParamLimits

0xb7e4,	// (0x00054157) popup_tb_float_extension_window

0x7515,	// (0x0004fe88) aid_size_cell_tb_float_ext

0x6ba9,	// (0x0004f51c) bg_popup_sub_window_cp28

0x7521,	// (0x0004fe94) grid_tb_float_ext_pane

0x752d,	// (0x0004fea0) cell_tb_float_ext_pane_ParamLimits

0x752d,	// (0x0004fea0) cell_tb_float_ext_pane

0x7549,	// (0x0004febc) cell_tb_float_ext_pane_g1

0x7552,	// (0x0004fec5) grid_highlight_pane_cp12

0xbe28,	// (0x0005479b) cell_last_hwr_side_pane_ParamLimits

0xbe28,	// (0x0005479b) cell_last_hwr_side_pane

0x4fe9,	// (0x0004d95c) cell_last_hwr_side_pane_g1

0x755b,	// (0x0004fece) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x00058798) cell_last_hwr_side_pane_g

0xc22e,	// (0x00054ba1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc22e,	// (0x00054ba1) vkb2_area_bottom_space_btn_pane

0x5264,	// (0x0004dbd7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6fef,	// (0x0004f962) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x19c1,	// (0x0004a334) cell_vkb2_top_candi_pane_t1_ParamLimits

0x19df,	// (0x0004a352) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x19df,	// (0x0004a352) vkb2_area_bottom_space_btn_pane_g1

0x1a19,	// (0x0004a38c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1a19,	// (0x0004a38c) vkb2_area_bottom_space_btn_pane_g2

0x1a4f,	// (0x0004a3c2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a4f,	// (0x0004a3c2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x0005879d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x0005879d) vkb2_area_bottom_space_btn_pane_g

0x0f00,	// (0x00049873) cel_fep_hwr_func_pane_ParamLimits

0x0f00,	// (0x00049873) cel_fep_hwr_func_pane

0xbdfd,	// (0x00054770) cell_hwr_side_button_pane_ParamLimits

0xbdfd,	// (0x00054770) cell_hwr_side_button_pane

0x693b,	// (0x0004f2ae) aid_area_touch_clock_ParamLimits

0xa166,	// (0x00052ad9) bg_uniindi_top_pane_ParamLimits

0x694f,	// (0x0004f2c2) uniindi_top_pane_g1_ParamLimits

0x6965,	// (0x0004f2d8) uniindi_top_pane_g2_ParamLimits

0x6971,	// (0x0004f2e4) uniindi_top_pane_g3_ParamLimits

0x6982,	// (0x0004f2f5) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x000586b0) uniindi_top_pane_g_ParamLimits

0x698f,	// (0x0004f302) uniindi_top_pane_t1_ParamLimits

0xa166,	// (0x00052ad9) bg_vkb2_func_pane_cp01_ParamLimits

0xa166,	// (0x00052ad9) bg_vkb2_func_pane_cp01

0x7564,	// (0x0004fed7) cel_fep_hwr_func_pane_g1_ParamLimits

0x7564,	// (0x0004fed7) cel_fep_hwr_func_pane_g1

0xa166,	// (0x00052ad9) bg_vkb2_func_pane_cp02_ParamLimits

0xa166,	// (0x00052ad9) bg_vkb2_func_pane_cp02

0x7564,	// (0x0004fed7) cell_hwr_side_button_pane_g1_ParamLimits

0x7564,	// (0x0004fed7) cell_hwr_side_button_pane_g1

0x2802,	// (0x0004b175) status_pane_g4_ParamLimits

0x2802,	// (0x0004b175) status_pane_g4

0x281c,	// (0x0004b18f) status_pane_t1

0x4d88,	// (0x0004d6fb) form2_midp_gauge_slider_cont_pane

0x4d90,	// (0x0004d703) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcd8a,	// (0x000556fd) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcd9c,	// (0x0005570f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x0005847c) form2_midp_gauge_slider_pane_t_ParamLimits

0x4dc6,	// (0x0004d739) form2_midp_slider_pane_ParamLimits

0x13a2,	// (0x00049d15) aid_size_cell_func_vkb2_ParamLimits

0x13a2,	// (0x00049d15) aid_size_cell_func_vkb2

0x7501,	// (0x0004fe74) slider_pane_g4_ParamLimits

0x7501,	// (0x0004fe74) slider_pane_g4

0xc28f,	// (0x00054c02) form2_midp_gauge_slider_pane_t2_cp01

0xc29d,	// (0x00054c10) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc29d,	// (0x00054c10) form2_midp_gauge_slider_pane_t3_cp01

0x1ac4,	// (0x0004a437) form2_midp_slider_pane_cp01

0x6ba9,	// (0x0004f51c) navi_smil_pane

0x759d,	// (0x0004ff10) navi_smil_pane_g1

0x75a5,	// (0x0004ff18) navi_smil_pane_t1

0x7572,	// (0x0004fee5) form2_midp_slider_pane_g1

0x757b,	// (0x0004feee) form2_midp_slider_pane_g2

0x7583,	// (0x0004fef6) form2_midp_slider_pane_g3

0x7572,	// (0x0004fee5) form2_midp_slider_pane_g4

0xdf1d,	// (0x00056890) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x000587a6) form2_midp_slider_pane_g

0x1a89,	// (0x0004a3fc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a89,	// (0x0004a3fc) vkb2_area_bottom_space_btn_pane_g4

0xb9cb,	// (0x0005433e) lc0_navi_pane_ParamLimits

0xb9cb,	// (0x0005433e) lc0_navi_pane

0xba3b,	// (0x000543ae) lc0_stat_indi_pane_ParamLimits

0xba3b,	// (0x000543ae) lc0_stat_indi_pane

0xba50,	// (0x000543c3) ls0_title_pane_ParamLimits

0xba50,	// (0x000543c3) ls0_title_pane

0xa7bf,	// (0x00053132) bg_popup_sub_pane_cp14_ParamLimits

0x6922,	// (0x0004f295) list_uniindi_pane_ParamLimits

0x692e,	// (0x0004f2a1) uniindi_top_pane_ParamLimits

0x69cd,	// (0x0004f340) list_single_uniindi_pane_g1_ParamLimits

0x69e0,	// (0x0004f353) list_single_uniindi_pane_t1_ParamLimits

0xc2ba,	// (0x00054c2d) lc0_stat_clock_pane_ParamLimits

0xc2ba,	// (0x00054c2d) lc0_stat_clock_pane

0xdf26,	// (0x00056899) lc0_stat_indi_pane_g1_ParamLimits

0xdf26,	// (0x00056899) lc0_stat_indi_pane_g1

0xdf33,	// (0x000568a6) lc0_stat_indi_pane_g2_ParamLimits

0xdf33,	// (0x000568a6) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x000587b1) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x000587b1) lc0_stat_indi_pane_g

0xc2c7,	// (0x00054c3a) lc0_uni_indicator_pane_ParamLimits

0xc2c7,	// (0x00054c3a) lc0_uni_indicator_pane

0xdf40,	// (0x000568b3) ls0_title_pane_g1_ParamLimits

0xdf40,	// (0x000568b3) ls0_title_pane_g1

0xdf54,	// (0x000568c7) ls0_title_pane_t1_ParamLimits

0xdf54,	// (0x000568c7) ls0_title_pane_t1

0xc2d4,	// (0x00054c47) lc0_uni_indicator_pane_g1_ParamLimits

0xc2d4,	// (0x00054c47) lc0_uni_indicator_pane_g1

0x7617,	// (0x0004ff8a) lc0_stat_clock_pane_t1

0x6ba9,	// (0x0004f51c) main_ai5_pane

0x7625,	// (0x0004ff98) ai5_sk_pane_ParamLimits

0x7625,	// (0x0004ff98) ai5_sk_pane

0xdf82,	// (0x000568f5) cell_ai5_widget_pane_ParamLimits

0xdf82,	// (0x000568f5) cell_ai5_widget_pane

0x7bce,	// (0x00050541) aid_size_cell_widget_grid

0x7be4,	// (0x00050557) bg_ai5_widget_pane_ParamLimits

0x7be4,	// (0x00050557) bg_ai5_widget_pane

0x7c4e,	// (0x000505c1) cell_ai5_widget_pane_g2

0x7c5e,	// (0x000505d1) cell_ai5_widget_pane_g3

0x7c7d,	// (0x000505f0) cell_ai5_widget_pane_g4

0x7c89,	// (0x000505fc) cell_ai5_widget_pane_g5

0xe2d9,	// (0x00056c4c) cell_ai5_widget_pane_g6

0xe2e5,	// (0x00056c58) cell_ai5_widget_pane_g7

0x7ce9,	// (0x0005065c) cell_ai5_widget_pane_t1_ParamLimits

0x7ce9,	// (0x0005065c) cell_ai5_widget_pane_t1

0x7d06,	// (0x00050679) cell_ai5_widget_pane_t2_ParamLimits

0x7d06,	// (0x00050679) cell_ai5_widget_pane_t2

0x7d1e,	// (0x00050691) cell_ai5_widget_pane_t3_ParamLimits

0x7d1e,	// (0x00050691) cell_ai5_widget_pane_t3

0x7d36,	// (0x000506a9) cell_ai5_widget_pane_t4_ParamLimits

0x7d36,	// (0x000506a9) cell_ai5_widget_pane_t4

0x7d50,	// (0x000506c3) cell_ai5_widget_pane_t5_ParamLimits

0x7d50,	// (0x000506c3) cell_ai5_widget_pane_t5

0x7d6f,	// (0x000506e2) cell_ai5_widget_pane_t6_ParamLimits

0x7d6f,	// (0x000506e2) cell_ai5_widget_pane_t6

0x7d81,	// (0x000506f4) cell_ai5_widget_pane_t7_ParamLimits

0x7d81,	// (0x000506f4) cell_ai5_widget_pane_t7

0x7d9a,	// (0x0005070d) cell_ai5_widget_pane_t8_ParamLimits

0x7d9a,	// (0x0005070d) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x000587cb) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x000587cb) cell_ai5_widget_pane_t

0x7de6,	// (0x00050759) grid_ai5_widget_pane

0xa7bf,	// (0x00053132) highlight_cell_ai5_widget_pane_ParamLimits

0xa7bf,	// (0x00053132) highlight_cell_ai5_widget_pane

0xe2f1,	// (0x00056c64) ai5_sk_left_pane

0xe2fb,	// (0x00056c6e) ai5_sk_middle_pane

0xe305,	// (0x00056c78) ai5_sk_right_pane

0x7e1c,	// (0x0005078f) bg_ai5_widget_pane_g1_ParamLimits

0x7e1c,	// (0x0005078f) bg_ai5_widget_pane_g1

0x7e28,	// (0x0005079b) bg_ai5_widget_pane_g2_ParamLimits

0x7e28,	// (0x0005079b) bg_ai5_widget_pane_g2

0x7e34,	// (0x000507a7) bg_ai5_widget_pane_g3_ParamLimits

0x7e34,	// (0x000507a7) bg_ai5_widget_pane_g3

0x7e40,	// (0x000507b3) bg_ai5_widget_pane_g4_ParamLimits

0x7e40,	// (0x000507b3) bg_ai5_widget_pane_g4

0x7e4c,	// (0x000507bf) bg_ai5_widget_pane_g5_ParamLimits

0x7e4c,	// (0x000507bf) bg_ai5_widget_pane_g5

0x7e58,	// (0x000507cb) bg_ai5_widget_pane_g6_ParamLimits

0x7e58,	// (0x000507cb) bg_ai5_widget_pane_g6

0x7e64,	// (0x000507d7) bg_ai5_widget_pane_g7_ParamLimits

0x7e64,	// (0x000507d7) bg_ai5_widget_pane_g7

0x7e70,	// (0x000507e3) bg_ai5_widget_pane_g8_ParamLimits

0x7e70,	// (0x000507e3) bg_ai5_widget_pane_g8

0x7e7c,	// (0x000507ef) bg_ai5_widget_pane_g9_ParamLimits

0x7e7c,	// (0x000507ef) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x000587e0) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x000587e0) bg_ai5_widget_pane_g

0x7eb5,	// (0x00050828) cell_shortcut_ai5_widget_pane_ParamLimits

0x7eb5,	// (0x00050828) cell_shortcut_ai5_widget_pane

0x0552,	// (0x00048ec5) bg_cell_shortcut_ai5_widget_pane

0x7ec8,	// (0x0005083b) cell_grid_ai5_widget_pane_g1

0x7ed1,	// (0x00050844) highlight_cell_shortcut_ai5_widget_pane

0x2991,	// (0x0004b304) ai5_sk_left_pane_g1

0x7ed9,	// (0x0005084c) ai5_sk_left_pane_g2

0x7ee1,	// (0x00050854) ai5_sk_left_pane_g3

0x7ee9,	// (0x0005085c) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x000587f3) ai5_sk_left_pane_g

0x7ef1,	// (0x00050864) ai5_sk_left_pane_t1

0x2989,	// (0x0004b2fc) ai5_sk_right_pane_g1

0x7eff,	// (0x00050872) ai5_sk_right_pane_g2

0x7f07,	// (0x0005087a) ai5_sk_right_pane_g3

0x7f0f,	// (0x00050882) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x000587fc) ai5_sk_right_pane_g

0x7f17,	// (0x0005088a) ai5_sk_right_pane_t1

0x2989,	// (0x0004b2fc) ai5_sk_middle_pane_g1

0x2991,	// (0x0004b304) ai5_sk_middle_pane_g2

0x29a9,	// (0x0004b31c) ai5_sk_middle_pane_g3

0x7f07,	// (0x0005087a) ai5_sk_middle_pane_g4

0x7ee1,	// (0x00050854) ai5_sk_middle_pane_g5

0x7f25,	// (0x00050898) ai5_sk_middle_pane_g6

0xe30f,	// (0x00056c82) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x00058805) ai5_sk_middle_pane_g

0xb8b5,	// (0x00054228) aid_touch_area_size_lc0_ParamLimits

0xb8b5,	// (0x00054228) aid_touch_area_size_lc0

0x109f,	// (0x00049a12) cell_hwr_candidate_pane_t1_ParamLimits

0x24b9,	// (0x0004ae2c) aid_touch_navi_pane

0xbb5b,	// (0x000544ce) status_dt_navi_pane_ParamLimits

0xbb5b,	// (0x000544ce) status_dt_navi_pane

0xbb73,	// (0x000544e6) status_dt_sta_pane_ParamLimits

0xbb73,	// (0x000544e6) status_dt_sta_pane

0xe317,	// (0x00056c8a) dt_sta_controll_pane

0xe324,	// (0x00056c97) dt_sta_indi_pane

0xe331,	// (0x00056ca4) dt_sta_title_pane

0xa166,	// (0x00052ad9) bg_dt_sta_indi_pane_ParamLimits

0xa166,	// (0x00052ad9) bg_dt_sta_indi_pane

0xe343,	// (0x00056cb6) dt_sta_battery_pane

0xe34b,	// (0x00056cbe) dt_sta_indi_pane_g1

0xe354,	// (0x00056cc7) dt_sta_indi_pane_g2

0xe35d,	// (0x00056cd0) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x00058814) dt_sta_indi_pane_g

0xe366,	// (0x00056cd9) dt_sta_signal_pane

0xa7bf,	// (0x00053132) bg_dt_sta_title_pane_ParamLimits

0xa7bf,	// (0x00053132) bg_dt_sta_title_pane

0xe36f,	// (0x00056ce2) dt_sta_title_pane_g1

0xe377,	// (0x00056cea) dt_sta_title_pane_t1_ParamLimits

0xe377,	// (0x00056cea) dt_sta_title_pane_t1

0x6ba9,	// (0x0004f51c) bg_dt_sta_control_pane

0xe38c,	// (0x00056cff) dt_sta_controll_pane_g1

0xe395,	// (0x00056d08) bg_dt_sta_title_pane_g1

0xe39e,	// (0x00056d11) bg_dt_sta_title_pane_g2

0xe3a7,	// (0x00056d1a) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x0005881b) bg_dt_sta_title_pane_g

0x4fe9,	// (0x0004d95c) bg_dt_sta_indi_pane_g1

0x7fd3,	// (0x00050946) dt_sta_signal_pane_g1

0x7fdb,	// (0x0005094e) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x00058822) dt_sta_signal_pane_g

0x7fe3,	// (0x00050956) dt_sta_battery_pane_g1

0x7fec,	// (0x0005095f) dt_sta_battery_pane_t1

0x4fe9,	// (0x0004d95c) bg_dt_sta_control_pane_g1

0xe6fc,	// (0x0005706f) fep_china_uni_eep_pane

0xe704,	// (0x00057077) fep_china_uni_entry_pane_ParamLimits

0xe714,	// (0x00057087) popup_fep_china_uni_window_g1_ParamLimits

0xe724,	// (0x00057097) popup_fep_china_uni_window_g2_ParamLimits

0xe724,	// (0x00057097) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005809b) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005809b) popup_fep_china_uni_window_g

0x7ffb,	// (0x0005096e) fep_china_uni_eep_pane_g1

0x8003,	// (0x00050976) fep_china_uni_eep_pane_t1

0x7594,	// (0x0004ff07) aid_touch_area_size_smil_player

0x2611,	// (0x0004af84) lc0_clock_pane

0x2810,	// (0x0004b183) status_pane_g5_ParamLimits

0x2810,	// (0x0004b183) status_pane_g5

0xb30a,	// (0x00053c7d) popup_keymap_window

0x27ce,	// (0x0004b141) status_icon_pane

0x7c5e,	// (0x000505d1) cell_ai5_widget_pane_g3_ParamLimits

0x7c7d,	// (0x000505f0) cell_ai5_widget_pane_g4_ParamLimits

0x7c89,	// (0x000505fc) cell_ai5_widget_pane_g5_ParamLimits

0x7cad,	// (0x00050620) cell_ai5_widget_pane_g8_ParamLimits

0x7cad,	// (0x00050620) cell_ai5_widget_pane_g8

0x7cc1,	// (0x00050634) cell_ai5_widget_pane_g9_ParamLimits

0x7cc1,	// (0x00050634) cell_ai5_widget_pane_g9

0x7cd5,	// (0x00050648) cell_ai5_widget_pane_g10_ParamLimits

0x7cd5,	// (0x00050648) cell_ai5_widget_pane_g10

0x8012,	// (0x00050985) status_icon_pane_g1

0x6ba9,	// (0x0004f51c) bg_popup_sub_pane_cp13

0x801a,	// (0x0005098d) popup_keymap_window_t1

0xaffd,	// (0x00053970) control_pane_g6_ParamLimits

0xaffd,	// (0x00053970) control_pane_g6

0xb00a,	// (0x0005397d) control_pane_g7_ParamLimits

0xb00a,	// (0x0005397d) control_pane_g7

0xb017,	// (0x0005398a) control_pane_g8_ParamLimits

0xb017,	// (0x0005398a) control_pane_g8

0xe317,	// (0x00056c8a) dt_sta_controll_pane_ParamLimits

0xe324,	// (0x00056c97) dt_sta_indi_pane_ParamLimits

0xe331,	// (0x00056ca4) dt_sta_title_pane_ParamLimits

0xa68b,	// (0x00052ffe) aid_size_touch_scroll_bar_cale

0xf275,	// (0x00057be8) popup_discreet_window_ParamLimits

0xf275,	// (0x00057be8) popup_discreet_window

0x9d1f,	// (0x00052692) popup_sk_window

0x2fd1,	// (0x0004b944) bg_popup_sub_pane_cp28_ParamLimits

0x2fd1,	// (0x0004b944) bg_popup_sub_pane_cp28

0x8028,	// (0x0005099b) popup_discreet_window_g1_ParamLimits

0x8028,	// (0x0005099b) popup_discreet_window_g1

0x8048,	// (0x000509bb) popup_discreet_window_t1_ParamLimits

0x8048,	// (0x000509bb) popup_discreet_window_t1

0x8066,	// (0x000509d9) popup_discreet_window_t2_ParamLimits

0x8066,	// (0x000509d9) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x00058827) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x00058827) popup_discreet_window_t

0x1afa,	// (0x0004a46d) popup_sk_window_g1

0x1b04,	// (0x0004a477) popup_sk_window_g2

0x0001,

0xfebb,	// (0x0005882e) popup_sk_window_g

0x1b0e,	// (0x0004a481) popup_sk_window_t1

0x1b1e,	// (0x0004a491) popup_sk_window_t1_copy1

0x7c4e,	// (0x000505c1) cell_ai5_widget_pane_g2_ParamLimits

0x7dac,	// (0x0005071f) cell_ai5_widget_pane_t9_ParamLimits

0x7dac,	// (0x0005071f) cell_ai5_widget_pane_t9

0x6ba9,	// (0x0004f51c) main_fep_fshwr2_pane

0xc2f3,	// (0x00054c66) aid_fshwr2_btn_pane

0xc302,	// (0x00054c75) aid_fshwr2_syb_pane

0xc314,	// (0x00054c87) aid_fshwr2_txt_pane

0xc323,	// (0x00054c96) fshwr2_func_candi_pane

0xc334,	// (0x00054ca7) fshwr2_hwr_syb_pane

0xc34f,	// (0x00054cc2) fshwr2_icf_pane

0x6ba9,	// (0x0004f51c) fshwr2_icf_bg_pane

0xe3b0,	// (0x00056d23) fshwr2_icf_pane_t1_ParamLimits

0xe3b0,	// (0x00056d23) fshwr2_icf_pane_t1

0x4fe9,	// (0x0004d95c) fshwr2_func_candi_pane_g1

0x80cf,	// (0x00050a42) fshwr2_func_candi_row_pane_ParamLimits

0x80cf,	// (0x00050a42) fshwr2_func_candi_row_pane

0xe3c8,	// (0x00056d3b) cell_fshwr2_syb_pane_ParamLimits

0xe3c8,	// (0x00056d3b) cell_fshwr2_syb_pane

0x5264,	// (0x0004dbd7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5264,	// (0x0004dbd7) fshwr2_hwr_syb_pane_g1

0x6ba9,	// (0x0004f51c) bg_popup_call_pane_cp01

0x80fa,	// (0x00050a6d) fshwr2_func_candi_cell_pane_ParamLimits

0x80fa,	// (0x00050a6d) fshwr2_func_candi_cell_pane

0x812c,	// (0x00050a9f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x812c,	// (0x00050a9f) fshwr2_func_candi_cell_bg_pane

0x8146,	// (0x00050ab9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8146,	// (0x00050ab9) fshwr2_func_candi_cell_pane_g1

0x8166,	// (0x00050ad9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8166,	// (0x00050ad9) fshwr2_func_candi_cell_pane_t1

0x6ba9,	// (0x0004f51c) bg_button_pane_cp08

0x0552,	// (0x00048ec5) cell_fshwr2_syb_bg_pane

0xe3e1,	// (0x00056d54) cell_fshwr2_syb_bg_pane_g1

0xe3e9,	// (0x00056d5c) cell_fshwr2_syb_bg_pane_t1

0xa7bf,	// (0x00053132) main_tmo_pane

0xc886,	// (0x000551f9) uni_indicator_pane_g1_ParamLimits

0xc89b,	// (0x0005520e) uni_indicator_pane_g2_ParamLimits

0xc8b0,	// (0x00055223) uni_indicator_pane_g3_ParamLimits

0xc8c6,	// (0x00055239) uni_indicator_pane_g4_ParamLimits

0xc8c6,	// (0x00055239) uni_indicator_pane_g4

0xc8da,	// (0x0005524d) uni_indicator_pane_g5_ParamLimits

0xc8da,	// (0x0005524d) uni_indicator_pane_g5

0xc8ee,	// (0x00055261) uni_indicator_pane_g6_ParamLimits

0xc8ee,	// (0x00055261) uni_indicator_pane_g6

0xf927,	// (0x0005829a) uni_indicator_pane_g_ParamLimits

0xd3ef,	// (0x00055d62) popup_tmo_note_window_ParamLimits

0xd3ef,	// (0x00055d62) popup_tmo_note_window

0xa7bf,	// (0x00053132) fshwr2_bg_pane

0x8157,	// (0x00050aca) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8157,	// (0x00050aca) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x00058833) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x00058833) fshwr2_func_candi_cell_pane_g

0x4fe9,	// (0x0004d95c) bg_popup_window_pane_cp01

0x8190,	// (0x00050b03) bg_popup_window_pane_g1_cp01

0x8199,	// (0x00050b0c) bg_popup_window_pane_cp22_ParamLimits

0x8199,	// (0x00050b0c) bg_popup_window_pane_cp22

0x81a7,	// (0x00050b1a) listscroll_tmo_link_pane_ParamLimits

0x81a7,	// (0x00050b1a) listscroll_tmo_link_pane

0x81e7,	// (0x00050b5a) popup_tmo_note_window_g1_ParamLimits

0x81e7,	// (0x00050b5a) popup_tmo_note_window_g1

0x81f4,	// (0x00050b67) tmo_note_info_pane_ParamLimits

0x81f4,	// (0x00050b67) tmo_note_info_pane

0xe3f8,	// (0x00056d6b) list_tmo_note_info_pane_g1_ParamLimits

0xe3f8,	// (0x00056d6b) list_tmo_note_info_pane_g1

0x8225,	// (0x00050b98) list_tmo_note_info_pane_g2_ParamLimits

0x8225,	// (0x00050b98) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x00058838) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x00058838) list_tmo_note_info_pane_g

0x8241,	// (0x00050bb4) list_tmo_note_info_text_pane_ParamLimits

0x8241,	// (0x00050bb4) list_tmo_note_info_text_pane

0x82c6,	// (0x00050c39) list_tmo_link_pane

0x82d3,	// (0x00050c46) scroll_pane_cp20

0x82e0,	// (0x00050c53) list_single_tmo_link_pane_ParamLimits

0x82e0,	// (0x00050c53) list_single_tmo_link_pane

0x82f0,	// (0x00050c63) list_single_tmo_link_pane_t1

0x82fe,	// (0x00050c71) list_tmo_note_info_text_pane_t1_ParamLimits

0x82fe,	// (0x00050c71) list_tmo_note_info_text_pane_t1

0xa879,	// (0x000531ec) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa879,	// (0x000531ec) aid_size_touch_scroll_bar_cp01

0x98e0,	// (0x00052253) aid_size_touch_slider_marker

0x9d0f,	// (0x00052682) popup_settings_window_ParamLimits

0x9d0f,	// (0x00052682) popup_settings_window

0xea4a,	// (0x000573bd) popup_candi_list_indi_window

0x24b9,	// (0x0004ae2c) aid_touch_navi_pane_ParamLimits

0x12f9,	// (0x00049c6c) rs_clock_indi_pane

0x1302,	// (0x00049c75) sctrl_sk_bottom_pane_ParamLimits

0x1313,	// (0x00049c86) sctrl_sk_top_pane_ParamLimits

0x13fc,	// (0x00049d6f) popup_fep_tooltip_window

0x7bce,	// (0x00050541) aid_size_cell_widget_grid_ParamLimits

0x7c42,	// (0x000505b5) cell_ai5_widget_pane_g1_ParamLimits

0x7c42,	// (0x000505b5) cell_ai5_widget_pane_g1

0xe2d9,	// (0x00056c4c) cell_ai5_widget_pane_g6_ParamLimits

0xe2e5,	// (0x00056c58) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x000587b6) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x000587b6) cell_ai5_widget_pane_g

0x7dd0,	// (0x00050743) cell_ai5_widget_pane_t10_ParamLimits

0x7dd0,	// (0x00050743) cell_ai5_widget_pane_t10

0x7de6,	// (0x00050759) grid_ai5_widget_pane_ParamLimits

0x7e88,	// (0x000507fb) cell_contacts_ai5_widget_pane_ParamLimits

0x7e88,	// (0x000507fb) cell_contacts_ai5_widget_pane

0x807b,	// (0x000509ee) popup_discreet_window_t3_ParamLimits

0x807b,	// (0x000509ee) popup_discreet_window_t3

0x1b8e,	// (0x0004a501) popup_fshwr2_char_preview_window_ParamLimits

0x1b8e,	// (0x0004a501) popup_fshwr2_char_preview_window

0xe40f,	// (0x00056d82) tmo_note_info_pane_t1

0xe424,	// (0x00056d97) tmo_note_info_pane_t2

0xe43d,	// (0x00056db0) tmo_note_info_pane_t3

0x82a2,	// (0x00050c15) tmo_note_info_pane_t4

0x82b4,	// (0x00050c27) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x0005883d) tmo_note_info_pane_t

0x82c6,	// (0x00050c39) list_tmo_link_pane_ParamLimits

0x82d3,	// (0x00050c46) scroll_pane_cp20_ParamLimits

0x6ba9,	// (0x0004f51c) bg_popup_fep_char_preview_window_cp01

0x8317,	// (0x00050c8a) popup_fshwr2_char_preview_window_t1

0x8325,	// (0x00050c98) popup_candi_list_indi_window_g1

0x832e,	// (0x00050ca1) bg_cell_contacts_ai5_widget_pane

0x833a,	// (0x00050cad) cell_contacts_ai5_widget_pane_g1

0x834d,	// (0x00050cc0) cell_contacts_ai5_widget_pane_g2

0x8359,	// (0x00050ccc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x00058848) cell_contacts_ai5_widget_pane_g

0x836b,	// (0x00050cde) cell_contacts_ai5_widget_pane_t1

0xa7bf,	// (0x00053132) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe4b7,	// (0x00056e2a) settings_container_pane

0x0552,	// (0x00048ec5) listscroll_set_pane_copy1

0x4704,	// (0x0004d077) scroll_pane_cp121_copy1

0x83f1,	// (0x00050d64) set_content_pane_copy1

0xe4c3,	// (0x00056e36) aid_height_set_list_copy1_ParamLimits

0xe4c3,	// (0x00056e36) aid_height_set_list_copy1

0x3d5e,	// (0x0004c6d1) aid_size_parent_copy1_ParamLimits

0x3d5e,	// (0x0004c6d1) aid_size_parent_copy1

0xe4cf,	// (0x00056e42) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe4cf,	// (0x00056e42) button_value_adjust_pane_cp6_copy1

0x1e40,	// (0x0004a7b3) list_highlight_pane_cp2_copy1_ParamLimits

0x1e40,	// (0x0004a7b3) list_highlight_pane_cp2_copy1

0xe4e3,	// (0x00056e56) list_set_pane_copy1_ParamLimits

0xe4e3,	// (0x00056e56) list_set_pane_copy1

0xe452,	// (0x00056dc5) main_pane_set_t1_copy1_ParamLimits

0xe452,	// (0x00056dc5) main_pane_set_t1_copy1

0xe48c,	// (0x00056dff) main_pane_set_t2_copy1_ParamLimits

0xe48c,	// (0x00056dff) main_pane_set_t2_copy1

0xebd9,	// (0x0005754c) main_pane_set_t3_copy1

0xebe7,	// (0x0005755a) main_pane_set_t4_copy1

0xe4ab,	// (0x00056e1e) set_content_pane_g1_copy1_ParamLimits

0xe4ab,	// (0x00056e1e) set_content_pane_g1_copy1

0xebf5,	// (0x00057568) setting_code_pane_copy1

0x8504,	// (0x00050e77) setting_slider_graphic_pane_copy1

0x8504,	// (0x00050e77) setting_slider_pane_copy1

0x8504,	// (0x00050e77) setting_text_pane_copy1

0x8504,	// (0x00050e77) setting_volume_pane_copy1

0xebf5,	// (0x00057568) settings_code_pane_cp2_copy1

0xebfd,	// (0x00057570) settings_code_pane_cp_copy1_ParamLimits

0xebfd,	// (0x00057570) settings_code_pane_cp_copy1

0xc365,	// (0x00054cd8) volume_set_pane_copy1

0xec11,	// (0x00057584) volume_set_pane_g10_copy1

0xec1d,	// (0x00057590) volume_set_pane_g1_copy1

0xec27,	// (0x0005759a) volume_set_pane_g2_copy1

0xec31,	// (0x000575a4) volume_set_pane_g3_copy1

0xec3b,	// (0x000575ae) volume_set_pane_g4_copy1

0xec45,	// (0x000575b8) volume_set_pane_g5_copy1

0xec4f,	// (0x000575c2) volume_set_pane_g6_copy1

0xec59,	// (0x000575cc) volume_set_pane_g7_copy1

0xec63,	// (0x000575d6) volume_set_pane_g8_copy1

0xec6d,	// (0x000575e0) volume_set_pane_g9_copy1

0x9e7f,	// (0x000527f2) bg_set_opt_pane_cp_copy1_ParamLimits

0x9e7f,	// (0x000527f2) bg_set_opt_pane_cp_copy1

0x1bb2,	// (0x0004a525) setting_slider_pane_t1_copy1_ParamLimits

0x1bb2,	// (0x0004a525) setting_slider_pane_t1_copy1

0xc371,	// (0x00054ce4) setting_slider_pane_t2_copy1_ParamLimits

0xc371,	// (0x00054ce4) setting_slider_pane_t2_copy1

0xc38b,	// (0x00054cfe) setting_slider_pane_t3_copy1_ParamLimits

0xc38b,	// (0x00054cfe) setting_slider_pane_t3_copy1

0xc3a3,	// (0x00054d16) slider_set_pane_copy1_ParamLimits

0xc3a3,	// (0x00054d16) slider_set_pane_copy1

0xa81a,	// (0x0005318d) set_opt_bg_pane_g1_copy2

0xa822,	// (0x00053195) set_opt_bg_pane_g2_copy2

0x8586,	// (0x00050ef9) set_opt_bg_pane_g3_copy2

0xa832,	// (0x000531a5) set_opt_bg_pane_g4_copy2

0xa83a,	// (0x000531ad) set_opt_bg_pane_g5_copy2

0xa842,	// (0x000531b5) set_opt_bg_pane_g6_copy2

0xec77,	// (0x000575ea) set_opt_bg_pane_g7_copy2

0x859a,	// (0x00050f0d) set_opt_bg_pane_g8_copy2

0x85a4,	// (0x00050f17) set_opt_bg_pane_g9_copy2

0x85ae,	// (0x00050f21) aid_size_touch_slider_mark_copy1_ParamLimits

0x85ae,	// (0x00050f21) aid_size_touch_slider_mark_copy1

0x85c2,	// (0x00050f35) slider_set_pane_g1_copy1

0x85cb,	// (0x00050f3e) slider_set_pane_g2_copy1

0x4424,	// (0x0004cd97) slider_set_pane_g3_copy1_ParamLimits

0x4424,	// (0x0004cd97) slider_set_pane_g3_copy1

0x4438,	// (0x0004cdab) slider_set_pane_g4_copy1_ParamLimits

0x4438,	// (0x0004cdab) slider_set_pane_g4_copy1

0x6c25,	// (0x0004f598) slider_set_pane_g5_copy1_ParamLimits

0x6c25,	// (0x0004f598) slider_set_pane_g5_copy1

0x4424,	// (0x0004cd97) slider_set_pane_g6_copy1_ParamLimits

0x4424,	// (0x0004cd97) slider_set_pane_g6_copy1

0xec81,	// (0x000575f4) slider_set_pane_g7_copy1_ParamLimits

0xec81,	// (0x000575f4) slider_set_pane_g7_copy1

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp2_copy1

0x85e9,	// (0x00050f5c) setting_slider_graphic_pane_g1_copy1

0xec97,	// (0x0005760a) setting_slider_graphic_pane_t1_copy1

0xeca7,	// (0x0005761a) setting_slider_graphic_pane_t2_copy1

0xecb7,	// (0x0005762a) slider_set_pane_cp_copy1

0x8622,	// (0x00050f95) input_focus_pane_cp1_copy1

0x862b,	// (0x00050f9e) list_set_text_pane_copy1

0x8633,	// (0x00050fa6) setting_text_pane_g1_copy1

0xe5aa,	// (0x00056f1d) set_text_pane_t1_copy1

0x8622,	// (0x00050f95) input_focus_pane_cp2_copy1

0x8633,	// (0x00050fa6) setting_code_pane_g1_copy1

0xecbf,	// (0x00057632) setting_code_pane_t1_copy1

0xeccd,	// (0x00057640) list_set_graphic_pane_copy1

0x6bbd,	// (0x0004f530) bg_set_opt_pane_cp4_copy1

0xae32,	// (0x000537a5) list_set_graphic_pane_g1_copy1_ParamLimits

0xae32,	// (0x000537a5) list_set_graphic_pane_g1_copy1

0xecdf,	// (0x00057652) list_set_graphic_pane_g2_copy1

0xae4a,	// (0x000537bd) list_set_graphic_pane_t1_copy1_ParamLimits

0xae4a,	// (0x000537bd) list_set_graphic_pane_t1_copy1

0x4fe9,	// (0x0004d95c) rs_clock_indi_pane_g1

0x8664,	// (0x00050fd7) rs_clock_indi_pane_t1

0x8672,	// (0x00050fe5) rs_indi_pane

0x867a,	// (0x00050fed) rs_indi_pane_g1

0x8683,	// (0x00050ff6) rs_indi_pane_g2

0x868c,	// (0x00050fff) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x0005884f) rs_indi_pane_g

0x0552,	// (0x00048ec5) bg_popup_preview_window_pane_cp03

0x8695,	// (0x00051008) popup_fep_tooltip_window_t1

0x5ca0,	// (0x0004e613) popup_note2_window_g2_ParamLimits

0x5ca0,	// (0x0004e613) popup_note2_window_g2

0x0001,

0xfc75,	// (0x000585e8) popup_note2_window_g_ParamLimits

0xfc75,	// (0x000585e8) popup_note2_window_g

0x61a8,	// (0x0004eb1b) bg_popup_sub_pane_cp11_ParamLimits

0x61b5,	// (0x0004eb28) cell_ai3_links_pane_g1_ParamLimits

0x61cc,	// (0x0004eb3f) cell_ai3_links_pane_t1

0xe5aa,	// (0x00056f1d) set_text_pane_t1_copy1_ParamLimits

0xaebe,	// (0x00053831) cell_graphic_popup_pane_cp2_ParamLimits

0xaebe,	// (0x00053831) cell_graphic_popup_pane_cp2

0xece7,	// (0x0005765a) cell_graphic_popup_pane_g1_cp2

0xa49e,	// (0x00052e11) cell_graphic_popup_pane_g2_cp2

0x86ab,	// (0x0005101e) cell_graphic_popup_pane_g3_cp2

0x86b3,	// (0x00051026) cell_graphic_popup_pane_t2_cp2

0xa4af,	// (0x00052e22) grid_highlight_pane_cp3_cp2

0xab4c,	// (0x000534bf) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa7bf,	// (0x00053132) main_tmo_pane_ParamLimits

0xd3e3,	// (0x00055d56) popup_tmo_big_image_note_window

0x7c32,	// (0x000505a5) cell_ai5_widget_list_pane

0x7c3a,	// (0x000505ad) cell_ai5_widget_lrg_icon_pane

0xe40f,	// (0x00056d82) tmo_note_info_pane_t1_ParamLimits

0xe424,	// (0x00056d97) tmo_note_info_pane_t2_ParamLimits

0xe43d,	// (0x00056db0) tmo_note_info_pane_t3_ParamLimits

0x82a2,	// (0x00050c15) tmo_note_info_pane_t4_ParamLimits

0x82b4,	// (0x00050c27) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x0005883d) tmo_note_info_pane_t_ParamLimits

0xe4b7,	// (0x00056e2a) settings_container_pane_ParamLimits

0x861a,	// (0x00050f8d) indicator_popup_pane_cp5

0x861a,	// (0x00050f8d) indicator_popup_pane_cp6

0xeccd,	// (0x00057640) list_set_graphic_pane_copy1_ParamLimits

0x6ba9,	// (0x0004f51c) bg_popup_window_pane_cp23

0x86c1,	// (0x00051034) popup_tmo_big_image_note_window_g1

0x86cd,	// (0x00051040) popup_tmo_big_image_note_window_t1

0x86dd,	// (0x00051050) popup_tmo_big_image_note_window_t2

0x86ed,	// (0x00051060) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x00058856) popup_tmo_big_image_note_window_t

0x86fd,	// (0x00051070) cell_ai5_widget_lrg_icon_pane_g1

0x8705,	// (0x00051078) cell_ai5_widget_lrg_icon_pane_t1

0x8713,	// (0x00051086) cell_ai5_widget_list_row_pane_ParamLimits

0x8713,	// (0x00051086) cell_ai5_widget_list_row_pane

0x872c,	// (0x0005109f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x872c,	// (0x0005109f) cell_ai5_widget_list_row_pane_g1

0x8739,	// (0x000510ac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8739,	// (0x000510ac) cell_ai5_widget_list_row_pane_t1

0x8751,	// (0x000510c4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8751,	// (0x000510c4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeea,	// (0x0005885d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x0005885d) cell_ai5_widget_list_row_pane_t

0x6ba9,	// (0x0004f51c) main_fep_vtchi_ss_pane

0x1c27,	// (0x0004a59a) popup_fep_char_pre_window

0x1c2f,	// (0x0004a5a2) popup_fep_ituss_window

0x1c50,	// (0x0004a5c3) popup_fep_vkbss_window

0x8779,	// (0x000510ec) grid_vkbss_keypad_pane_ParamLimits

0x8779,	// (0x000510ec) grid_vkbss_keypad_pane

0x8789,	// (0x000510fc) ituss_keypad_pane

0x1c7d,	// (0x0004a5f0) aid_vkbss_key_offset_ParamLimits

0x1c7d,	// (0x0004a5f0) aid_vkbss_key_offset

0x1c89,	// (0x0004a5fc) cell_vkbss_key_pane_ParamLimits

0x1c89,	// (0x0004a5fc) cell_vkbss_key_pane

0x8799,	// (0x0005110c) bg_cell_vkbss_key_g1_ParamLimits

0x8799,	// (0x0005110c) bg_cell_vkbss_key_g1

0x87a5,	// (0x00051118) cell_vkbss_key_3p_pane_ParamLimits

0x87a5,	// (0x00051118) cell_vkbss_key_3p_pane

0x87bf,	// (0x00051132) cell_vkbss_key_g1_ParamLimits

0x87bf,	// (0x00051132) cell_vkbss_key_g1

0x87d9,	// (0x0005114c) cell_vkbss_key_t1_ParamLimits

0x87d9,	// (0x0005114c) cell_vkbss_key_t1

0x1c9f,	// (0x0004a612) cell_ituss_key_pane_ParamLimits

0x1c9f,	// (0x0004a612) cell_ituss_key_pane

0x8804,	// (0x00051177) bg_cell_ituss_key_g1_ParamLimits

0x8804,	// (0x00051177) bg_cell_ituss_key_g1

0x8810,	// (0x00051183) cell_ituss_key_pane_g1_ParamLimits

0x8810,	// (0x00051183) cell_ituss_key_pane_g1

0x8824,	// (0x00051197) cell_ituss_key_pane_g2_ParamLimits

0x8824,	// (0x00051197) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x00058864) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x00058864) cell_ituss_key_pane_g

0x8856,	// (0x000511c9) cell_ituss_key_t1_ParamLimits

0x8856,	// (0x000511c9) cell_ituss_key_t1

0x8890,	// (0x00051203) cell_ituss_key_t2_ParamLimits

0x8890,	// (0x00051203) cell_ituss_key_t2

0x88c1,	// (0x00051234) cell_ituss_key_t3_ParamLimits

0x88c1,	// (0x00051234) cell_ituss_key_t3

0x88f2,	// (0x00051265) cell_ituss_key_t4_ParamLimits

0x88f2,	// (0x00051265) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x00058869) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00058869) cell_ituss_key_t

0x8923,	// (0x00051296) cell_vkbss_key_3p_pane_g1

0x892b,	// (0x0005129e) cell_vkbss_key_3p_pane_g2

0x8933,	// (0x000512a6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00058872) cell_vkbss_key_3p_pane_g

0x6ba9,	// (0x0004f51c) bg_popup_fep_char_preview_window_cp02

0x893b,	// (0x000512ae) popup_fep_char_pre_window_t1

0xe2cf,	// (0x00056c42) main_ai5_sk_pane

0x832e,	// (0x00050ca1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x833a,	// (0x00050cad) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x834d,	// (0x00050cc0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8359,	// (0x00050ccc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x00058848) cell_contacts_ai5_widget_pane_g_ParamLimits

0x836b,	// (0x00050cde) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa7bf,	// (0x00053132) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecef,	// (0x00057662) main_ai5_sk_pane_g1

0x2e09,	// (0x0004b77c) popup_query_code_window_g1

0x1c45,	// (0x0004a5b8) popup_fep_vkb_icf_pane

0x1c5b,	// (0x0004a5ce) popup_fep_vtchi_icf_pane

0xa7bf,	// (0x00053132) bg_icf_pane

0x8953,	// (0x000512c6) list_vkb_icf_pane

0xa7bf,	// (0x00053132) bg_icf_pane_cp01

0x895f,	// (0x000512d2) vtchi_icf_list_pane

0x8970,	// (0x000512e3) list_vkb_icf_pane_t1_ParamLimits

0x8970,	// (0x000512e3) list_vkb_icf_pane_t1

0x8986,	// (0x000512f9) vtchi_icf_list_pane_t1_ParamLimits

0x8986,	// (0x000512f9) vtchi_icf_list_pane_t1

0x1c2f,	// (0x0004a5a2) popup_fep_ituss_window_ParamLimits

0x1c5b,	// (0x0004a5ce) popup_fep_vtchi_icf_pane_ParamLimits

0x8789,	// (0x000510fc) ituss_keypad_pane_ParamLimits

0x1c71,	// (0x0004a5e4) ituss_sks_pane

0xa7bf,	// (0x00053132) bg_icf_pane_ParamLimits

0x1c18,	// (0x0004a58b) icf_edit_indi_pane_ParamLimits

0x1c18,	// (0x0004a58b) icf_edit_indi_pane

0x8953,	// (0x000512c6) list_vkb_icf_pane_ParamLimits

0xa7bf,	// (0x00053132) bg_icf_pane_cp01_ParamLimits

0x1c18,	// (0x0004a58b) icf_edit_indi_pane_cp01_ParamLimits

0x1c18,	// (0x0004a58b) icf_edit_indi_pane_cp01

0x8967,	// (0x000512da) vtchi_query_pane

0x5264,	// (0x0004dbd7) icf_edit_indi_pane_g1_ParamLimits

0x5264,	// (0x0004dbd7) icf_edit_indi_pane_g1

0x8a08,	// (0x0005137b) icf_edit_indi_pane_g2_ParamLimits

0x8a08,	// (0x0005137b) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0005888a) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0005888a) icf_edit_indi_pane_g

0x8a17,	// (0x0005138a) icf_edit_indi_pane_t1

0x899e,	// (0x00051311) bg_input_focus_pane_cp042

0xa682,	// (0x00052ff5) vtchi_button_pane

0x89a7,	// (0x0005131a) vtchi_query_pane_t1

0x89b5,	// (0x00051328) vtchi_query_pane_t2

0x89c3,	// (0x00051336) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00058879) vtchi_query_pane_t

0x6ba9,	// (0x0004f51c) bg_button_pane_cp13

0x89d1,	// (0x00051344) vtchi_button_pane_g1

0x89d9,	// (0x0005134c) ituss_sks_pane_g1

0x89e4,	// (0x00051357) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00058880) ituss_sks_pane_g

0x89ec,	// (0x0005135f) ituss_sks_pane_t1

0x89fa,	// (0x0005136d) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00058885) ituss_sks_pane_t

0x4a99,	// (0x0004d40c) indicator_nsta_pane_cp_g1

0x4aa2,	// (0x0004d415) indicator_nsta_pane_cp_g2

0x4aaa,	// (0x0004d41d) indicator_nsta_pane_cp_g3

0x4ab2,	// (0x0004d425) indicator_nsta_pane_cp_g4

0x4aba,	// (0x0004d42d) indicator_nsta_pane_cp_g5

0x4ac2,	// (0x0004d435) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00058432) indicator_nsta_pane_cp_g

0xddf2,	// (0x00056765) cell_graphic2_pane_t2_ParamLimits

0xddf2,	// (0x00056765) cell_graphic2_pane_t2

0x0001,

0xfdcc,	// (0x0005873f) cell_graphic2_pane_t_ParamLimits

0xfdcc,	// (0x0005873f) cell_graphic2_pane_t

0xde28,	// (0x0005679b) cell_graphic2_control_pane_t1

0xad8f,	// (0x00053702) signal_pane_g3_ParamLimits

0xad8f,	// (0x00053702) signal_pane_g3

0xada3,	// (0x00053716) signal_pane_g4_ParamLimits

0xada3,	// (0x00053716) signal_pane_g4

0x8763,	// (0x000510d6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8763,	// (0x000510d6) cell_ai5_widget_list_row_pane_t3

0x8844,	// (0x000511b7) cell_ituss_key_pane_t1_ParamLimits

0x8844,	// (0x000511b7) cell_ituss_key_pane_t1

0x2a86,	// (0x0004b3f9) form_field_data_wide_pane_vc_t2_ParamLimits

0x2a86,	// (0x0004b3f9) form_field_data_wide_pane_vc_t2

0x2a9a,	// (0x0004b40d) form_field_data_wide_pane_vc_t3_ParamLimits

0x2a9a,	// (0x0004b40d) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x00058182) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x00058182) form_field_data_wide_pane_vc_t

0x4744,	// (0x0004d0b7) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4744,	// (0x0004d0b7) form_field_slider_wide_pane_vc_t3

0x481a,	// (0x0004d18d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x481a,	// (0x0004d18d) form_field_popup_wide_pane_vc_t2

0x4831,	// (0x0004d1a4) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4831,	// (0x0004d1a4) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00058421) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00058421) form_field_popup_wide_pane_vc_t

0xc2f3,	// (0x00054c66) aid_fshwr2_btn_pane_ParamLimits

0xc302,	// (0x00054c75) aid_fshwr2_syb_pane_ParamLimits

0xc314,	// (0x00054c87) aid_fshwr2_txt_pane_ParamLimits

0xa7bf,	// (0x00053132) fshwr2_bg_pane_ParamLimits

0xc323,	// (0x00054c96) fshwr2_func_candi_pane_ParamLimits

0xc334,	// (0x00054ca7) fshwr2_hwr_syb_pane_ParamLimits

0xc34f,	// (0x00054cc2) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
