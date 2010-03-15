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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0005005c };

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
0xb0dd,	// (0x0005b139) Screen

0xb0e9,	// (0x0005b145) application_window_ParamLimits

0xb0e9,	// (0x0005b145) application_window

0x28b0,	// (0x0005290c) screen_g1

0xb121,	// (0x0005b17d) area_bottom_pane_ParamLimits

0xb121,	// (0x0005b17d) area_bottom_pane

0xf2b7,	// (0x0005f313) area_top_pane_ParamLimits

0xf2b7,	// (0x0005f313) area_top_pane

0xf355,	// (0x0005f3b1) main_pane_ParamLimits

0xf355,	// (0x0005f3b1) main_pane

0x28ba,	// (0x00052916) misc_graphics

0xd1b1,	// (0x0005d20d) battery_pane_ParamLimits

0xd1b1,	// (0x0005d20d) battery_pane

0x5537,	// (0x00055593) bg_status_flat_pane_g8

0x553f,	// (0x0005559b) bg_status_flat_pane_g9

0x4941,	// (0x0005499d) context_pane_ParamLimits

0x4941,	// (0x0005499d) context_pane

0xd31c,	// (0x0005d378) navi_pane_ParamLimits

0xd31c,	// (0x0005d378) navi_pane

0xd394,	// (0x0005d3f0) signal_pane_ParamLimits

0xd394,	// (0x0005d3f0) signal_pane

0x0008,

0xf87f,	// (0x0005f8db) bg_status_flat_pane_g

0xd424,	// (0x0005d480) status_pane_g1_ParamLimits

0xd424,	// (0x0005d480) status_pane_g1

0xd43a,	// (0x0005d496) status_pane_g2_ParamLimits

0xd43a,	// (0x0005d496) status_pane_g2

0x4b5a,	// (0x00054bb6) status_pane_g3_ParamLimits

0x4b5a,	// (0x00054bb6) status_pane_g3

0x0004,

0xf7ab,	// (0x0005f807) status_pane_g_ParamLimits

0xf7ab,	// (0x0005f807) status_pane_g

0xd446,	// (0x0005d4a2) title_pane_ParamLimits

0xd446,	// (0x0005d4a2) title_pane

0xd4a9,	// (0x0005d505) uni_indicator_pane_ParamLimits

0xd4a9,	// (0x0005d505) uni_indicator_pane

0x47a7,	// (0x00054803) bg_list_pane_ParamLimits

0x47a7,	// (0x00054803) bg_list_pane

0xd118,	// (0x0005d174) find_pane

0xd120,	// (0x0005d17c) listscroll_app_pane_ParamLimits

0xd120,	// (0x0005d17c) listscroll_app_pane

0x47d3,	// (0x0005482f) listscroll_form_pane

0xbbe9,	// (0x0005bc45) listscroll_gen_pane_ParamLimits

0xbbe9,	// (0x0005bc45) listscroll_gen_pane

0x47d3,	// (0x0005482f) listscroll_set_pane

0x60ce,	// (0x0005612a) main_idle_act_pane

0x44ad,	// (0x00054509) main_idle_trad_pane

0x44ad,	// (0x00054509) main_list_empty_pane

0x47ed,	// (0x00054849) main_midp_pane

0x47f9,	// (0x00054855) main_pane_g1_ParamLimits

0x47f9,	// (0x00054855) main_pane_g1

0xbbfd,	// (0x0005bc59) popup_ai_message_window_ParamLimits

0xbbfd,	// (0x0005bc59) popup_ai_message_window

0xbc8e,	// (0x0005bcea) popup_fep_china_uni_window_ParamLimits

0xbc8e,	// (0x0005bcea) popup_fep_china_uni_window

0x0da0,	// (0x00050dfc) popup_fep_japan_candidate_window_ParamLimits

0x0da0,	// (0x00050dfc) popup_fep_japan_candidate_window

0x0dc0,	// (0x00050e1c) popup_fep_japan_predictive_window_ParamLimits

0x0dc0,	// (0x00050e1c) popup_fep_japan_predictive_window

0xbcea,	// (0x0005bd46) popup_find_window

0xbd07,	// (0x0005bd63) popup_grid_graphic_window_ParamLimits

0xbd07,	// (0x0005bd63) popup_grid_graphic_window

0x0e25,	// (0x00050e81) popup_large_graphic_colour_window

0xbd9f,	// (0x0005bdfb) popup_menu_window_ParamLimits

0xbd9f,	// (0x0005bdfb) popup_menu_window

0xbf71,	// (0x0005bfcd) popup_note_image_window

0xbf37,	// (0x0005bf93) popup_note_wait_window_ParamLimits

0xbf37,	// (0x0005bf93) popup_note_wait_window

0xbf89,	// (0x0005bfe5) popup_note_window_ParamLimits

0xbf89,	// (0x0005bfe5) popup_note_window

0xc02f,	// (0x0005c08b) popup_query_code_window_ParamLimits

0xc02f,	// (0x0005c08b) popup_query_code_window

0x106d,	// (0x000510c9) popup_query_data_code_window_ParamLimits

0x106d,	// (0x000510c9) popup_query_data_code_window

0xc069,	// (0x0005c0c5) popup_query_data_window_ParamLimits

0xc069,	// (0x0005c0c5) popup_query_data_window

0xc0eb,	// (0x0005c147) popup_query_sat_info_window_ParamLimits

0xc0eb,	// (0x0005c147) popup_query_sat_info_window

0xc182,	// (0x0005c1de) popup_snote_single_graphic_window_ParamLimits

0xc182,	// (0x0005c1de) popup_snote_single_graphic_window

0xc182,	// (0x0005c1de) popup_snote_single_text_window_ParamLimits

0xc182,	// (0x0005c1de) popup_snote_single_text_window

0x10f4,	// (0x00051150) popup_sub_window_general

0x1224,	// (0x00051280) popup_window_general_ParamLimits

0x1224,	// (0x00051280) popup_window_general

0x4807,	// (0x00054863) power_save_pane

0xba78,	// (0x0005bad4) control_pane_g1_ParamLimits

0xba78,	// (0x0005bad4) control_pane_g1

0xbaa1,	// (0x0005bafd) control_pane_g2_ParamLimits

0xbaa1,	// (0x0005bafd) control_pane_g2

0x476a,	// (0x000547c6) control_pane_g3_ParamLimits

0x476a,	// (0x000547c6) control_pane_g3

0x0007,

0xf793,	// (0x0005f7ef) control_pane_g_ParamLimits

0xf793,	// (0x0005f7ef) control_pane_g

0xbae2,	// (0x0005bb3e) control_pane_t1_ParamLimits

0xbae2,	// (0x0005bb3e) control_pane_t1

0xbb40,	// (0x0005bb9c) control_pane_t2_ParamLimits

0xbb40,	// (0x0005bb9c) control_pane_t2

0x0002,

0xf7a4,	// (0x0005f800) control_pane_t_ParamLimits

0xf7a4,	// (0x0005f800) control_pane_t

0x468b,	// (0x000546e7) navi_navi_volume_pane_cp1

0x4694,	// (0x000546f0) status_small_icon_pane

0x469c,	// (0x000546f8) status_small_pane_g1_ParamLimits

0x469c,	// (0x000546f8) status_small_pane_g1

0x46d0,	// (0x0005472c) status_small_pane_g2_ParamLimits

0x46d0,	// (0x0005472c) status_small_pane_g2

0x46dc,	// (0x00054738) status_small_pane_g3_ParamLimits

0x46dc,	// (0x00054738) status_small_pane_g3

0x46e8,	// (0x00054744) status_small_pane_g4_ParamLimits

0x46e8,	// (0x00054744) status_small_pane_g4

0x46f4,	// (0x00054750) status_small_pane_g5_ParamLimits

0x46f4,	// (0x00054750) status_small_pane_g5

0x4703,	// (0x0005475f) status_small_pane_g6_ParamLimits

0x4703,	// (0x0005475f) status_small_pane_g6

0x0007,

0xf782,	// (0x0005f7de) status_small_pane_g_ParamLimits

0xf782,	// (0x0005f7de) status_small_pane_g

0x4733,	// (0x0005478f) status_small_pane_t1

0x4756,	// (0x000547b2) status_small_wait_pane_ParamLimits

0x4756,	// (0x000547b2) status_small_wait_pane

0xceed,	// (0x0005cf49) aid_levels_signal_ParamLimits

0xceed,	// (0x0005cf49) aid_levels_signal

0xcf05,	// (0x0005cf61) signal_pane_g1_ParamLimits

0xcf05,	// (0x0005cf61) signal_pane_g1

0xcf20,	// (0x0005cf7c) signal_pane_g2_ParamLimits

0xcf20,	// (0x0005cf7c) signal_pane_g2

0x0003,

0xf713,	// (0x0005f76f) signal_pane_g_ParamLimits

0xf713,	// (0x0005f76f) signal_pane_g

0x3f80,	// (0x00053fdc) context_pane_g1

0xb29a,	// (0x0005b2f6) title_pane_g1

0xb2d1,	// (0x0005b32d) title_pane_t1

0x2962,	// (0x000529be) title_pane_t2

0x2988,	// (0x000529e4) title_pane_t3

0x0002,

0xf55d,	// (0x0005f5b9) title_pane_t

0xd4d1,	// (0x0005d52d) aid_levels_battery_ParamLimits

0xd4d1,	// (0x0005d52d) aid_levels_battery

0xd4ed,	// (0x0005d549) battery_pane_g1_ParamLimits

0xd4ed,	// (0x0005d549) battery_pane_g1

0xd50a,	// (0x0005d566) battery_pane_g2_ParamLimits

0xd50a,	// (0x0005d566) battery_pane_g2

0x0001,

0xf7b6,	// (0x0005f812) battery_pane_g_ParamLimits

0xf7b6,	// (0x0005f812) battery_pane_g

0xd850,	// (0x0005d8ac) uni_indicator_pane_g1

0xd865,	// (0x0005d8c1) uni_indicator_pane_g2

0x5e98,	// (0x00055ef4) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0005f983) uni_indicator_pane_g

0x431f,	// (0x0005437b) navi_icon_pane_ParamLimits

0x431f,	// (0x0005437b) navi_icon_pane

0x4268,	// (0x000542c4) navi_midp_pane

0x433b,	// (0x00054397) navi_navi_pane

0x4345,	// (0x000543a1) navi_text_pane_ParamLimits

0x4345,	// (0x000543a1) navi_text_pane

0x28b0,	// (0x0005290c) status_small_wait_pane_g1

0x2db7,	// (0x00052e13) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0005f97e) status_small_wait_pane_g

0xd7b7,	// (0x0005d813) navi_navi_icon_text_pane

0xd7bf,	// (0x0005d81b) navi_navi_pane_g1_ParamLimits

0xd7bf,	// (0x0005d81b) navi_navi_pane_g1

0xd7d1,	// (0x0005d82d) navi_navi_pane_g2_ParamLimits

0xd7d1,	// (0x0005d82d) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0005f94c) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0005f94c) navi_navi_pane_g

0x5bbe,	// (0x00055c1a) navi_navi_tabs_pane

0xd7e3,	// (0x0005d83f) navi_navi_text_pane

0xd7b7,	// (0x0005d813) navi_navi_volume_pane

0x5b6e,	// (0x00055bca) navi_text_pane_t1

0x5b62,	// (0x00055bbe) navi_icon_pane_g1

0x5ab5,	// (0x00055b11) navi_navi_text_pane_t1

0xc461,	// (0x0005c4bd) navi_navi_volume_pane_g1

0xc469,	// (0x0005c4c5) volume_small_pane

0xd665,	// (0x0005d6c1) navi_navi_icon_text_pane_g1

0xd66d,	// (0x0005d6c9) navi_navi_icon_text_pane_t1

0x433b,	// (0x00054397) navi_tabs_2_long_pane

0x433b,	// (0x00054397) navi_tabs_2_pane

0x433b,	// (0x00054397) navi_tabs_3_long_pane

0x433b,	// (0x00054397) navi_tabs_3_pane

0x433b,	// (0x00054397) navi_tabs_4_pane

0xc441,	// (0x0005c49d) tabs_2_active_pane_ParamLimits

0xc441,	// (0x0005c49d) tabs_2_active_pane

0xc451,	// (0x0005c4ad) tabs_2_passive_pane_ParamLimits

0xc451,	// (0x0005c4ad) tabs_2_passive_pane

0xc40f,	// (0x0005c46b) tabs_3_active_pane_ParamLimits

0xc40f,	// (0x0005c46b) tabs_3_active_pane

0xc41f,	// (0x0005c47b) tabs_3_passive_pane_ParamLimits

0xc41f,	// (0x0005c47b) tabs_3_passive_pane

0xc430,	// (0x0005c48c) tabs_3_passive_pane_cp_ParamLimits

0xc430,	// (0x0005c48c) tabs_3_passive_pane_cp

0xc3cb,	// (0x0005c427) tabs_4_active_pane_ParamLimits

0xc3cb,	// (0x0005c427) tabs_4_active_pane

0xc3dc,	// (0x0005c438) tabs_4_passive_pane_ParamLimits

0xc3dc,	// (0x0005c438) tabs_4_passive_pane

0xc3ed,	// (0x0005c449) tabs_4_passive_pane_cp_ParamLimits

0xc3ed,	// (0x0005c449) tabs_4_passive_pane_cp

0xc3fe,	// (0x0005c45a) tabs_4_passive_pane_cp2_ParamLimits

0xc3fe,	// (0x0005c45a) tabs_4_passive_pane_cp2

0xc3ab,	// (0x0005c407) tabs_2_long_active_pane_ParamLimits

0xc3ab,	// (0x0005c407) tabs_2_long_active_pane

0xc3bb,	// (0x0005c417) tabs_2_long_passive_pane_ParamLimits

0xc3bb,	// (0x0005c417) tabs_2_long_passive_pane

0xc378,	// (0x0005c3d4) tabs_3_long_active_pane_ParamLimits

0xc378,	// (0x0005c3d4) tabs_3_long_active_pane

0xc389,	// (0x0005c3e5) tabs_3_long_passive_pane_ParamLimits

0xc389,	// (0x0005c3e5) tabs_3_long_passive_pane

0xc39a,	// (0x0005c3f6) tabs_3_long_passive_pane_cp_ParamLimits

0xc39a,	// (0x0005c3f6) tabs_3_long_passive_pane_cp

0x1471,	// (0x000514cd) volume_small_pane_g1

0xc327,	// (0x0005c383) volume_small_pane_g2

0xc330,	// (0x0005c38c) volume_small_pane_g3

0xc339,	// (0x0005c395) volume_small_pane_g4

0xc342,	// (0x0005c39e) volume_small_pane_g5

0xc34b,	// (0x0005c3a7) volume_small_pane_g6

0xc354,	// (0x0005c3b0) volume_small_pane_g7

0xc35d,	// (0x0005c3b9) volume_small_pane_g8

0xc366,	// (0x0005c3c2) volume_small_pane_g9

0xc36f,	// (0x0005c3cb) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0005f918) volume_small_pane_g

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp2_ParamLimits

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp2

0xb35d,	// (0x0005b3b9) tabs_3_active_pane_g1

0xb365,	// (0x0005b3c1) tabs_3_active_pane_t1

0x2c15,	// (0x00052c71) bg_passive_tab_pane_cp2_ParamLimits

0x2c15,	// (0x00052c71) bg_passive_tab_pane_cp2

0xb35d,	// (0x0005b3b9) tabs_3_passive_pane_g1

0xb365,	// (0x0005b3c1) tabs_3_passive_pane_t1

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp3_ParamLimits

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp3

0xb377,	// (0x0005b3d3) tabs_4_active_pane_g1

0xb37f,	// (0x0005b3db) tabs_4_active_pane_t1

0x2c15,	// (0x00052c71) bg_passive_tab_pane_cp3_ParamLimits

0x2c15,	// (0x00052c71) bg_passive_tab_pane_cp3

0xb377,	// (0x0005b3d3) tabs_4_1_passive_pane_g1

0xb37f,	// (0x0005b3db) tabs_4_1_passive_pane_t1

0x47ed,	// (0x00054849) list_highlight_pane_cp2

0xd8ee,	// (0x0005d94a) list_set_pane_ParamLimits

0xd8ee,	// (0x0005d94a) list_set_pane

0xd988,	// (0x0005d9e4) main_pane_set_t1_ParamLimits

0xd988,	// (0x0005d9e4) main_pane_set_t1

0xd9a8,	// (0x0005da04) main_pane_set_t2_ParamLimits

0xd9a8,	// (0x0005da04) main_pane_set_t2

0xd9bc,	// (0x0005da18) main_pane_set_t3_ParamLimits

0xd9bc,	// (0x0005da18) main_pane_set_t3

0xd9ce,	// (0x0005da2a) main_pane_set_t4_ParamLimits

0xd9ce,	// (0x0005da2a) main_pane_set_t4

0x0003,

0xf98c,	// (0x0005f9e8) main_pane_set_t_ParamLimits

0xf98c,	// (0x0005f9e8) main_pane_set_t

0xd9e0,	// (0x0005da3c) setting_code_pane

0xd9ea,	// (0x0005da46) setting_slider_graphic_pane

0xd9ea,	// (0x0005da46) setting_slider_pane

0xd9ea,	// (0x0005da46) setting_text_pane

0xd9ea,	// (0x0005da46) setting_volume_pane

0xf4c3,	// (0x0005f51f) volume_set_pane

0x299a,	// (0x000529f6) bg_set_opt_pane_cp

0xf4cb,	// (0x0005f527) setting_slider_pane_t1

0xf4e4,	// (0x0005f540) setting_slider_pane_t2

0xf4fe,	// (0x0005f55a) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005f5c0) setting_slider_pane_t

0xf516,	// (0x0005f572) slider_set_pane

0x28ba,	// (0x00052916) bg_set_opt_pane_cp2

0x29dc,	// (0x00052a38) setting_slider_graphic_pane_g1

0xf52c,	// (0x0005f588) setting_slider_graphic_pane_t1

0xf53c,	// (0x0005f598) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0005f5c7) setting_slider_graphic_pane_t

0xf54c,	// (0x0005f5a8) slider_set_pane_cp

0x28ba,	// (0x00052916) input_focus_pane_cp1

0x60b5,	// (0x00056111) list_set_text_pane

0x28b0,	// (0x0005290c) setting_text_pane_g1

0x28ba,	// (0x00052916) input_focus_pane_cp2

0x28b0,	// (0x0005290c) setting_code_pane_g1

0x29e5,	// (0x00052a41) setting_code_pane_t1

0xf050,	// (0x0005f0ac) set_text_pane_t1_ParamLimits

0xf050,	// (0x0005f0ac) set_text_pane_t1

0x3873,	// (0x000538cf) set_opt_bg_pane_g1

0x387b,	// (0x000538d7) set_opt_bg_pane_g2

0x608f,	// (0x000560eb) set_opt_bg_pane_g3

0x388b,	// (0x000538e7) set_opt_bg_pane_g4

0x3893,	// (0x000538ef) set_opt_bg_pane_g5

0x389b,	// (0x000538f7) set_opt_bg_pane_g6

0x6099,	// (0x000560f5) set_opt_bg_pane_g7

0x60a1,	// (0x000560fd) set_opt_bg_pane_g8

0x60ab,	// (0x00056107) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0005f9d5) set_opt_bg_pane_g

0x6082,	// (0x000560de) slider_set_pane_g1

0x1661,	// (0x000516bd) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0005f9c6) slider_set_pane_g

0x15d5,	// (0x00051631) volume_set_pane_g1

0x15dd,	// (0x00051639) volume_set_pane_g2

0x15e5,	// (0x00051641) volume_set_pane_g3

0x15ed,	// (0x00051649) volume_set_pane_g4

0x15f5,	// (0x00051651) volume_set_pane_g5

0x15fd,	// (0x00051659) volume_set_pane_g6

0x1605,	// (0x00051661) volume_set_pane_g7

0x160d,	// (0x00051669) volume_set_pane_g8

0x1615,	// (0x00051671) volume_set_pane_g9

0x161d,	// (0x00051679) volume_set_pane_g10

0x0009,

0xf942,	// (0x0005f99e) volume_set_pane_g

0xb391,	// (0x0005b3ed) indicator_pane_ParamLimits

0xb391,	// (0x0005b3ed) indicator_pane

0xcb46,	// (0x0005cba2) main_idle_pane_g2_ParamLimits

0xcb46,	// (0x0005cba2) main_idle_pane_g2

0xcb7e,	// (0x0005cbda) main_pane_idle_g1_ParamLimits

0xcb7e,	// (0x0005cbda) main_pane_idle_g1

0x2a34,	// (0x00052a90) popup_clock_digital_analogue_window_ParamLimits

0x2a34,	// (0x00052a90) popup_clock_digital_analogue_window

0xcba5,	// (0x0005cc01) soft_indicator_pane_ParamLimits

0xcba5,	// (0x0005cc01) soft_indicator_pane

0xcbbf,	// (0x0005cc1b) wallpaper_pane_ParamLimits

0xcbbf,	// (0x0005cc1b) wallpaper_pane

0x28b0,	// (0x0005290c) wallpaper_pane_g1

0xcbd1,	// (0x0005cc2d) indicator_pane_g1_ParamLimits

0xcbd1,	// (0x0005cc2d) indicator_pane_g1

0x6458,	// (0x000564b4) navi_navi_icon_text_pane_srt_g1

0x2a86,	// (0x00052ae2) soft_indicator_pane_t1

0x2aa0,	// (0x00052afc) aid_ps_area_pane

0xcbe7,	// (0x0005cc43) aid_ps_clock_pane

0x2abf,	// (0x00052b1b) aid_ps_indicator_pane

0x2acb,	// (0x00052b27) indicator_ps_pane_ParamLimits

0x2acb,	// (0x00052b27) indicator_ps_pane

0x2ada,	// (0x00052b36) power_save_pane_g1_ParamLimits

0x2ada,	// (0x00052b36) power_save_pane_g1

0x2ae6,	// (0x00052b42) power_save_pane_g2_ParamLimits

0x2ae6,	// (0x00052b42) power_save_pane_g2

0xf030,	// (0x0005f08c) aid_navinavi_width_pane

0x2aa0,	// (0x00052afc) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005f5cc) power_save_pane_g_ParamLimits

0xf570,	// (0x0005f5cc) power_save_pane_g

0x2af4,	// (0x00052b50) power_save_pane_t1_ParamLimits

0x2af4,	// (0x00052b50) power_save_pane_t1

0xcbe7,	// (0x0005cc43) aid_ps_clock_pane_ParamLimits

0x2abf,	// (0x00052b1b) aid_ps_indicator_pane_ParamLimits

0x2b06,	// (0x00052b62) power_save_pane_t4_ParamLimits

0x2b06,	// (0x00052b62) power_save_pane_t4

0x0001,

0xf575,	// (0x0005f5d1) power_save_pane_t_ParamLimits

0xf575,	// (0x0005f5d1) power_save_pane_t

0x2b30,	// (0x00052b8c) power_save_t3_ParamLimits

0x2b30,	// (0x00052b8c) power_save_t3

0x2b1b,	// (0x00052b77) power_save_t2_ParamLimits

0x2b1b,	// (0x00052b77) power_save_t2

0x2b45,	// (0x00052ba1) indicator_ps_pane_g1

0xcbf5,	// (0x0005cc51) ai_gene_pane_ParamLimits

0xcbf5,	// (0x0005cc51) ai_gene_pane

0xcc0c,	// (0x0005cc68) ai_links_pane_ParamLimits

0xcc0c,	// (0x0005cc68) ai_links_pane

0xcc24,	// (0x0005cc80) indicator_pane_cp1_ParamLimits

0xcc24,	// (0x0005cc80) indicator_pane_cp1

0xcc33,	// (0x0005cc8f) main_pane_idle_g1_cp_ParamLimits

0xcc33,	// (0x0005cc8f) main_pane_idle_g1_cp

0x2b7e,	// (0x00052bda) popup_ai_links_title_window

0xcc4b,	// (0x0005cca7) soft_indicator_pane_cp1_ParamLimits

0xcc4b,	// (0x0005cca7) soft_indicator_pane_cp1

0x5e5b,	// (0x00055eb7) ai_links_pane_g1

0x5e64,	// (0x00055ec0) grid_ai_links_pane

0xd847,	// (0x0005d8a3) ai_gene_pane_1

0x5e49,	// (0x00055ea5) ai_gene_pane_2

0x5e52,	// (0x00055eae) list_highlight_pane_cp4

0xd823,	// (0x0005d87f) cell_ai_link_pane_ParamLimits

0xd823,	// (0x0005d87f) cell_ai_link_pane

0x5e1a,	// (0x00055e76) cell_ai_link_pane_g1

0x2db7,	// (0x00052e13) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0005f979) cell_ai_link_pane_g

0x28ba,	// (0x00052916) grid_highlight_cp2

0x28ba,	// (0x00052916) bg_popup_sub_pane_cp1

0x2ba1,	// (0x00052bfd) popup_ai_links_title_window_t1

0x5d68,	// (0x00055dc4) ai_gene_pane_1_g1_ParamLimits

0x5d68,	// (0x00055dc4) ai_gene_pane_1_g1

0x5d74,	// (0x00055dd0) ai_gene_pane_1_g2_ParamLimits

0x5d74,	// (0x00055dd0) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0005f96f) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0005f96f) ai_gene_pane_1_g

0x5d81,	// (0x00055ddd) ai_gene_pane_1_t1_ParamLimits

0x5d81,	// (0x00055ddd) ai_gene_pane_1_t1

0x5db5,	// (0x00055e11) grid_ai_soft_ind_pane

0x5d53,	// (0x00055daf) ai_gene_pane_2_t1_ParamLimits

0x5d53,	// (0x00055daf) ai_gene_pane_2_t1

0xcc5f,	// (0x0005ccbb) main_pane_empty_t1_ParamLimits

0xcc5f,	// (0x0005ccbb) main_pane_empty_t1

0xcc77,	// (0x0005ccd3) main_pane_empty_t2_ParamLimits

0xcc77,	// (0x0005ccd3) main_pane_empty_t2

0xcc8c,	// (0x0005cce8) main_pane_empty_t3_ParamLimits

0xcc8c,	// (0x0005cce8) main_pane_empty_t3

0xcc9e,	// (0x0005ccfa) main_pane_empty_t4_ParamLimits

0xcc9e,	// (0x0005ccfa) main_pane_empty_t4

0xccb0,	// (0x0005cd0c) main_pane_empty_t5_ParamLimits

0xccb0,	// (0x0005cd0c) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0005f5d6) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0005f5d6) main_pane_empty_t

0x38c4,	// (0x00053920) bg_popup_window_pane_ParamLimits

0x38c4,	// (0x00053920) bg_popup_window_pane

0x5ac3,	// (0x00055b1f) find_popup_pane_cp2_ParamLimits

0x5ac3,	// (0x00055b1f) find_popup_pane_cp2

0x5acf,	// (0x00055b2b) heading_pane_ParamLimits

0x5acf,	// (0x00055b2b) heading_pane

0x28ba,	// (0x00052916) bg_popup_sub_pane

0xd68a,	// (0x0005d6e6) bg_popup_window_pane_g1_ParamLimits

0xd68a,	// (0x0005d6e6) bg_popup_window_pane_g1

0xd699,	// (0x0005d6f5) bg_popup_window_pane_g2_ParamLimits

0xd699,	// (0x0005d6f5) bg_popup_window_pane_g2

0xd6a5,	// (0x0005d701) bg_popup_window_pane_g3_ParamLimits

0xd6a5,	// (0x0005d701) bg_popup_window_pane_g3

0xd6b1,	// (0x0005d70d) bg_popup_window_pane_g4_ParamLimits

0xd6b1,	// (0x0005d70d) bg_popup_window_pane_g4

0xd6c0,	// (0x0005d71c) bg_popup_window_pane_g5_ParamLimits

0xd6c0,	// (0x0005d71c) bg_popup_window_pane_g5

0xd6d0,	// (0x0005d72c) bg_popup_window_pane_g6_ParamLimits

0xd6d0,	// (0x0005d72c) bg_popup_window_pane_g6

0xd6dc,	// (0x0005d738) bg_popup_window_pane_g7_ParamLimits

0xd6dc,	// (0x0005d738) bg_popup_window_pane_g7

0xd6eb,	// (0x0005d747) bg_popup_window_pane_g8_ParamLimits

0xd6eb,	// (0x0005d747) bg_popup_window_pane_g8

0xd794,	// (0x0005d7f0) bg_popup_window_pane_g9_ParamLimits

0xd794,	// (0x0005d7f0) bg_popup_window_pane_g9

0x5aa9,	// (0x00055b05) bg_popup_window_pane_g10_ParamLimits

0x5aa9,	// (0x00055b05) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0005f937) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0005f937) bg_popup_window_pane_g

0x59d2,	// (0x00055a2e) bg_popup_heading_pane_ParamLimits

0x59d2,	// (0x00055a2e) bg_popup_heading_pane

0x1773,	// (0x000517cf) tabs_4_passive_pane_cp_srt_ParamLimits

0x1773,	// (0x000517cf) tabs_4_passive_pane_cp_srt

0x1785,	// (0x000517e1) tabs_4_passive_pane_srt_ParamLimits

0x59e6,	// (0x00055a42) heading_pane_g2

0x1785,	// (0x000517e1) tabs_4_passive_pane_srt

0x4d59,	// (0x00054db5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d59,	// (0x00054db5) bg_passive_tab_pane_cp3_srt

0x59ee,	// (0x00055a4a) heading_pane_t1_ParamLimits

0x59ee,	// (0x00055a4a) heading_pane_t1

0x5a05,	// (0x00055a61) heading_pane_t2_ParamLimits

0x5a05,	// (0x00055a61) heading_pane_t2

0x0001,

0xf8d6,	// (0x0005f932) heading_pane_t_ParamLimits

0xf8d6,	// (0x0005f932) heading_pane_t

0x54ff,	// (0x0005555b) bg_popup_heading_pane_g1

0x55ae,	// (0x0005560a) bg_popup_heading_pane_g2

0x55b8,	// (0x00055614) bg_popup_heading_pane_g3

0x55c2,	// (0x0005561e) bg_popup_heading_pane_g4

0x55cc,	// (0x00055628) bg_popup_heading_pane_g5

0x55d6,	// (0x00055632) bg_popup_heading_pane_g6

0x55de,	// (0x0005563a) bg_popup_heading_pane_g7

0x55e6,	// (0x00055642) bg_popup_heading_pane_g8

0x55f0,	// (0x0005564c) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0005f8ee) bg_popup_heading_pane_g

0x4ce5,	// (0x00054d41) bg_popup_sub_pane_g1

0x4cf5,	// (0x00054d51) bg_popup_sub_pane_g2

0x4ced,	// (0x00054d49) bg_popup_sub_pane_g3

0x4d05,	// (0x00054d61) bg_popup_sub_pane_g4

0x4cfd,	// (0x00054d59) bg_popup_sub_pane_g5

0x4d0d,	// (0x00054d69) bg_popup_sub_pane_g6

0x4d15,	// (0x00054d71) bg_popup_sub_pane_g7

0x4d25,	// (0x00054d81) bg_popup_sub_pane_g8

0x4d1d,	// (0x00054d79) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0005f8c8) bg_popup_sub_pane_g

0x2c15,	// (0x00052c71) bg_popup_window_pane_cp5_ParamLimits

0x2c15,	// (0x00052c71) bg_popup_window_pane_cp5

0x2c31,	// (0x00052c8d) popup_note_window_g1_ParamLimits

0x2c31,	// (0x00052c8d) popup_note_window_g1

0x2c3d,	// (0x00052c99) popup_note_window_t1_ParamLimits

0x2c3d,	// (0x00052c99) popup_note_window_t1

0x2c53,	// (0x00052caf) popup_note_window_t2_ParamLimits

0x2c53,	// (0x00052caf) popup_note_window_t2

0x2c69,	// (0x00052cc5) popup_note_window_t3_ParamLimits

0x2c69,	// (0x00052cc5) popup_note_window_t3

0x2c7f,	// (0x00052cdb) popup_note_window_t4_ParamLimits

0x2c7f,	// (0x00052cdb) popup_note_window_t4

0x2ca7,	// (0x00052d03) popup_note_window_t5_ParamLimits

0x2ca7,	// (0x00052d03) popup_note_window_t5

0x0004,

0xf585,	// (0x0005f5e1) popup_note_window_t_ParamLimits

0xf585,	// (0x0005f5e1) popup_note_window_t

0x2ccb,	// (0x00052d27) bg_popup_window_pane_cp6_ParamLimits

0x2ccb,	// (0x00052d27) bg_popup_window_pane_cp6

0x547b,	// (0x000554d7) popup_note_image_window_g1_ParamLimits

0x547b,	// (0x000554d7) popup_note_image_window_g1

0x5487,	// (0x000554e3) popup_note_image_window_g2_ParamLimits

0x5487,	// (0x000554e3) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0005f8bc) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0005f8bc) popup_note_image_window_g

0x54a0,	// (0x000554fc) popup_note_image_window_t1_ParamLimits

0x54a0,	// (0x000554fc) popup_note_image_window_t1

0x54b9,	// (0x00055515) popup_note_image_window_t2_ParamLimits

0x54b9,	// (0x00055515) popup_note_image_window_t2

0x54d2,	// (0x0005552e) popup_note_image_window_t3_ParamLimits

0x54d2,	// (0x0005552e) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0005f8c1) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0005f8c1) popup_note_image_window_t

0x533c,	// (0x00055398) bg_popup_window_pane_cp7_ParamLimits

0x533c,	// (0x00055398) bg_popup_window_pane_cp7

0x536c,	// (0x000553c8) popup_note_wait_window_g1_ParamLimits

0x536c,	// (0x000553c8) popup_note_wait_window_g1

0x5378,	// (0x000553d4) popup_note_wait_window_g2_ParamLimits

0x5378,	// (0x000553d4) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0005f8aa) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0005f8aa) popup_note_wait_window_g

0x5390,	// (0x000553ec) popup_note_wait_window_t1_ParamLimits

0x5390,	// (0x000553ec) popup_note_wait_window_t1

0x53b7,	// (0x00055413) popup_note_wait_window_t2_ParamLimits

0x53b7,	// (0x00055413) popup_note_wait_window_t2

0x53d4,	// (0x00055430) popup_note_wait_window_t3_ParamLimits

0x53d4,	// (0x00055430) popup_note_wait_window_t3

0x53e7,	// (0x00055443) popup_note_wait_window_t4_ParamLimits

0x53e7,	// (0x00055443) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0005f8b1) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0005f8b1) popup_note_wait_window_t

0x540c,	// (0x00055468) wait_bar_pane_ParamLimits

0x540c,	// (0x00055468) wait_bar_pane

0x28ba,	// (0x00052916) wait_anim_pane

0x28ba,	// (0x00052916) wait_border_pane

0x28b0,	// (0x0005290c) wait_anim_pane_g1

0x28b0,	// (0x0005290c) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005f76a) wait_anim_pane_g

0x52e0,	// (0x0005533c) wait_border_pane_g1

0x52eb,	// (0x00055347) wait_border_pane_g2

0x52f4,	// (0x00055350) wait_border_pane_g3

0x0002,

0xf847,	// (0x0005f8a3) wait_border_pane_g

0x514b,	// (0x000551a7) bg_popup_window_pane_cp16_ParamLimits

0x514b,	// (0x000551a7) bg_popup_window_pane_cp16

0x524b,	// (0x000552a7) indicator_popup_pane_cp4_ParamLimits

0x524b,	// (0x000552a7) indicator_popup_pane_cp4

0x525f,	// (0x000552bb) popup_query_data_window_t1_ParamLimits

0x525f,	// (0x000552bb) popup_query_data_window_t1

0x5271,	// (0x000552cd) popup_query_data_window_t2_ParamLimits

0x5271,	// (0x000552cd) popup_query_data_window_t2

0x528a,	// (0x000552e6) popup_query_data_window_t3_ParamLimits

0x528a,	// (0x000552e6) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0005f89c) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0005f89c) popup_query_data_window_t

0x52a4,	// (0x00055300) query_popup_data_pane_ParamLimits

0x52a4,	// (0x00055300) query_popup_data_pane

0x52b8,	// (0x00055314) query_popup_data_pane_cp1_ParamLimits

0x52b8,	// (0x00055314) query_popup_data_pane_cp1

0x514b,	// (0x000551a7) bg_popup_window_pane_cp10_ParamLimits

0x514b,	// (0x000551a7) bg_popup_window_pane_cp10

0x517d,	// (0x000551d9) indicator_popup_pane_ParamLimits

0x517d,	// (0x000551d9) indicator_popup_pane

0x519f,	// (0x000551fb) popup_query_code_window_t1_ParamLimits

0x519f,	// (0x000551fb) popup_query_code_window_t1

0x51b9,	// (0x00055215) popup_query_code_window_t2_ParamLimits

0x51b9,	// (0x00055215) popup_query_code_window_t2

0x5202,	// (0x0005525e) popup_query_code_window_t3_ParamLimits

0x5202,	// (0x0005525e) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0005f895) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0005f895) popup_query_code_window_t

0x5231,	// (0x0005528d) query_popup_pane_ParamLimits

0x5231,	// (0x0005528d) query_popup_pane

0x2ccb,	// (0x00052d27) bg_popup_window_pane_cp15_ParamLimits

0x2ccb,	// (0x00052d27) bg_popup_window_pane_cp15

0x2ce9,	// (0x00052d45) indicator_popup_pane_cp1_ParamLimits

0x2ce9,	// (0x00052d45) indicator_popup_pane_cp1

0x2cfc,	// (0x00052d58) indicator_popup_pane_cp2_ParamLimits

0x2cfc,	// (0x00052d58) indicator_popup_pane_cp2

0x2d0f,	// (0x00052d6b) popup_query_data_code_window_g1_ParamLimits

0x2d0f,	// (0x00052d6b) popup_query_data_code_window_g1

0x2d22,	// (0x00052d7e) popup_query_data_code_window_t1_ParamLimits

0x2d22,	// (0x00052d7e) popup_query_data_code_window_t1

0x2d34,	// (0x00052d90) popup_query_data_code_window_t2_ParamLimits

0x2d34,	// (0x00052d90) popup_query_data_code_window_t2

0x2d46,	// (0x00052da2) popup_query_data_code_window_t3_ParamLimits

0x2d46,	// (0x00052da2) popup_query_data_code_window_t3

0x2d5c,	// (0x00052db8) popup_query_data_code_window_t4_ParamLimits

0x2d5c,	// (0x00052db8) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005f5ec) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005f5ec) popup_query_data_code_window_t

0x12b0,	// (0x0005130c) list_single_midp_graphic_pane_g3

0x2d74,	// (0x00052dd0) query_popup_data_pane_cp2_ParamLimits

0x2d87,	// (0x00052de3) query_popup_pane_cp2_ParamLimits

0x2d87,	// (0x00052de3) query_popup_pane_cp2

0x28ba,	// (0x00052916) bg_popup_window_pane_cp11

0x5143,	// (0x0005519f) heading_pane_cp5

0x2e6f,	// (0x00052ecb) listscroll_popup_info_pane

0x28ba,	// (0x00052916) input_focus_pane_cp3

0x2d9a,	// (0x00052df6) query_popup_pane_t1

0x2da8,	// (0x00052e04) list_popup_info_pane_ParamLimits

0x2da8,	// (0x00052e04) list_popup_info_pane

0x2db7,	// (0x00052e13) listscroll_popup_info_pane_g1

0x2dbf,	// (0x00052e1b) scroll_pane_cp7

0x2dc9,	// (0x00052e25) popup_info_list_pane_t1_ParamLimits

0x2dc9,	// (0x00052e25) popup_info_list_pane_t1

0x2de3,	// (0x00052e3f) popup_info_list_pane_t2_ParamLimits

0x2de3,	// (0x00052e3f) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005f5f5) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005f5f5) popup_info_list_pane_t

0x28ba,	// (0x00052916) bg_popup_window_pane_cp12

0x6472,	// (0x000564ce) find_popup_pane

0x299a,	// (0x000529f6) bg_popup_window_pane_cp3

0x2dfd,	// (0x00052e59) heading_pane_cp3

0x2e09,	// (0x00052e65) listscroll_popup_graphic_pane

0x28ba,	// (0x00052916) bg_popup_window_pane_cp4

0xcd12,	// (0x0005cd6e) heading_pane_cp4

0x2e6f,	// (0x00052ecb) listscroll_popup_colour_pane

0x2e77,	// (0x00052ed3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2e77,	// (0x00052ed3) cell_large_graphic_colour_none_popup_pane

0xcd1a,	// (0x0005cd76) grid_large_graphic_colour_popup_pane_ParamLimits

0xcd1a,	// (0x0005cd76) grid_large_graphic_colour_popup_pane

0x34c9,	// (0x00053525) listscroll_popup_colour_pane_g1_ParamLimits

0x34c9,	// (0x00053525) listscroll_popup_colour_pane_g1

0x34e0,	// (0x0005353c) listscroll_popup_colour_pane_g2_ParamLimits

0x34e0,	// (0x0005353c) listscroll_popup_colour_pane_g2

0x34f7,	// (0x00053553) listscroll_popup_colour_pane_g3_ParamLimits

0x34f7,	// (0x00053553) listscroll_popup_colour_pane_g3

0xcd3e,	// (0x0005cd9a) listscroll_popup_colour_pane_g4_ParamLimits

0xcd3e,	// (0x0005cd9a) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005f5fa) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005f5fa) listscroll_popup_colour_pane_g

0x351b,	// (0x00053577) scroll_pane_cp6_ParamLimits

0x351b,	// (0x00053577) scroll_pane_cp6

0xcd4e,	// (0x0005cdaa) cell_large_graphic_colour_popup_pane_ParamLimits

0xcd4e,	// (0x0005cdaa) cell_large_graphic_colour_popup_pane

0x354c,	// (0x000535a8) cell_large_graphic_colour_none_popup_pane_t1

0x28ba,	// (0x00052916) grid_highlight_pane_cp5

0x355b,	// (0x000535b7) cell_large_graphic_colour_popup_pane_g1

0x3563,	// (0x000535bf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0005f603) cell_large_graphic_colour_popup_pane_g

0x356b,	// (0x000535c7) cell_large_graphic_colour_popup_pane_g2_copy1

0x3574,	// (0x000535d0) grid_highlight_pane_cp4

0x357c,	// (0x000535d8) bg_popup_window_pane_cp8_ParamLimits

0x357c,	// (0x000535d8) bg_popup_window_pane_cp8

0x3597,	// (0x000535f3) popup_snote_single_text_window_g1_ParamLimits

0x3597,	// (0x000535f3) popup_snote_single_text_window_g1

0x35a9,	// (0x00053605) popup_snote_single_text_window_t1_ParamLimits

0x35a9,	// (0x00053605) popup_snote_single_text_window_t1

0x35bc,	// (0x00053618) popup_snote_single_text_window_t2_ParamLimits

0x35bc,	// (0x00053618) popup_snote_single_text_window_t2

0x35cf,	// (0x0005362b) popup_snote_single_text_window_t3_ParamLimits

0x35cf,	// (0x0005362b) popup_snote_single_text_window_t3

0x3608,	// (0x00053664) popup_snote_single_text_window_t4_ParamLimits

0x3608,	// (0x00053664) popup_snote_single_text_window_t4

0x363c,	// (0x00053698) popup_snote_single_text_window_t5_ParamLimits

0x363c,	// (0x00053698) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005f608) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005f608) popup_snote_single_text_window_t

0x366b,	// (0x000536c7) bg_popup_window_pane_cp9_ParamLimits

0x366b,	// (0x000536c7) bg_popup_window_pane_cp9

0x3597,	// (0x000535f3) popup_snote_single_graphic_window_g1_ParamLimits

0x3597,	// (0x000535f3) popup_snote_single_graphic_window_g1

0x3679,	// (0x000536d5) popup_snote_single_graphic_window_g2_ParamLimits

0x3679,	// (0x000536d5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005f613) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005f613) popup_snote_single_graphic_window_g

0x3685,	// (0x000536e1) popup_snote_single_graphic_window_t1_ParamLimits

0x3685,	// (0x000536e1) popup_snote_single_graphic_window_t1

0x3698,	// (0x000536f4) popup_snote_single_graphic_window_t2_ParamLimits

0x3698,	// (0x000536f4) popup_snote_single_graphic_window_t2

0x36ab,	// (0x00053707) popup_snote_single_graphic_window_t3_ParamLimits

0x36ab,	// (0x00053707) popup_snote_single_graphic_window_t3

0x36e4,	// (0x00053740) popup_snote_single_graphic_window_t4_ParamLimits

0x36e4,	// (0x00053740) popup_snote_single_graphic_window_t4

0x3718,	// (0x00053774) popup_snote_single_graphic_window_t5_ParamLimits

0x3718,	// (0x00053774) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005f618) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005f618) popup_snote_single_graphic_window_t

0x63b6,	// (0x00056412) grid_graphic_popup_pane_ParamLimits

0x63b6,	// (0x00056412) grid_graphic_popup_pane

0x63de,	// (0x0005643a) listscroll_popup_graphic_pane_g1_ParamLimits

0x63de,	// (0x0005643a) listscroll_popup_graphic_pane_g1

0xdadb,	// (0x0005db37) listscroll_popup_graphic_pane_g2_ParamLimits

0xdadb,	// (0x0005db37) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0005fa12) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0005fa12) listscroll_popup_graphic_pane_g

0x6406,	// (0x00056462) scroll_pane_cp5

0xda9e,	// (0x0005dafa) cell_graphic_popup_pane_ParamLimits

0xda9e,	// (0x0005dafa) cell_graphic_popup_pane

0x6340,	// (0x0005639c) cell_graphic_popup_pane_g1

0x6348,	// (0x000563a4) cell_graphic_popup_pane_g2

0x356b,	// (0x000535c7) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0005fa0b) cell_graphic_popup_pane_g

0x6351,	// (0x000563ad) cell_graphic_popup_pane_t2

0x3574,	// (0x000535d0) grid_highlight_pane_cp3

0x3759,	// (0x000537b5) list_gen_pane_ParamLimits

0x3759,	// (0x000537b5) list_gen_pane

0x378b,	// (0x000537e7) scroll_pane

0xda55,	// (0x0005dab1) bg_list_pane_g1_ParamLimits

0xda55,	// (0x0005dab1) bg_list_pane_g1

0x62b5,	// (0x00056311) bg_list_pane_g2_ParamLimits

0x62b5,	// (0x00056311) bg_list_pane_g2

0x62ca,	// (0x00056326) bg_list_pane_g3_ParamLimits

0x62ca,	// (0x00056326) bg_list_pane_g3

0x62de,	// (0x0005633a) bg_list_pane_g4_ParamLimits

0x62de,	// (0x0005633a) bg_list_pane_g4

0xda72,	// (0x0005dace) bg_list_pane_g5_ParamLimits

0xda72,	// (0x0005dace) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0005fa00) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0005fa00) bg_list_pane_g

0xda1d,	// (0x0005da79) list_double2_graphic_large_graphic_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double2_graphic_large_graphic_pane

0xda1d,	// (0x0005da79) list_double2_graphic_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double2_graphic_pane

0xda1d,	// (0x0005da79) list_double2_large_graphic_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double2_large_graphic_pane

0xda1d,	// (0x0005da79) list_double2_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double2_pane

0xda1d,	// (0x0005da79) list_double_graphic_heading_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_graphic_heading_pane

0xda1d,	// (0x0005da79) list_double_graphic_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_graphic_pane

0xda1d,	// (0x0005da79) list_double_heading_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_heading_pane

0xda1d,	// (0x0005da79) list_double_large_graphic_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_large_graphic_pane

0xda1d,	// (0x0005da79) list_double_number_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_number_pane

0xda1d,	// (0x0005da79) list_double_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_pane

0xda1d,	// (0x0005da79) list_double_time_pane_ParamLimits

0xda1d,	// (0x0005da79) list_double_time_pane

0xda1d,	// (0x0005da79) list_setting_number_pane_ParamLimits

0xda1d,	// (0x0005da79) list_setting_number_pane

0xda1d,	// (0x0005da79) list_setting_pane_ParamLimits

0xda1d,	// (0x0005da79) list_setting_pane

0xda2f,	// (0x0005da8b) list_single_2graphic_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_2graphic_pane

0xda2f,	// (0x0005da8b) list_single_graphic_heading_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_graphic_heading_pane

0xda2f,	// (0x0005da8b) list_single_graphic_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_graphic_pane

0xda2f,	// (0x0005da8b) list_single_heading_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_heading_pane

0xda1d,	// (0x0005da79) list_single_large_graphic_pane_ParamLimits

0xda1d,	// (0x0005da79) list_single_large_graphic_pane

0xda2f,	// (0x0005da8b) list_single_number_heading_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_number_heading_pane

0xda2f,	// (0x0005da8b) list_single_number_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_number_pane

0xda2f,	// (0x0005da8b) list_single_pane_ParamLimits

0xda2f,	// (0x0005da8b) list_single_pane

0x28ba,	// (0x00052916) list_highlight_pane_cp1

0x43e6,	// (0x00054442) list_single_pane_g1_ParamLimits

0x43e6,	// (0x00054442) list_single_pane_g1

0x2f87,	// (0x00052fe3) list_single_pane_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005f634) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005f634) list_single_pane_g

0x18c4,	// (0x00051920) list_single_pane_t1_ParamLimits

0x18c4,	// (0x00051920) list_single_pane_t1

0x43e6,	// (0x00054442) list_single_number_pane_g1_ParamLimits

0x43e6,	// (0x00054442) list_single_number_pane_g1

0x2f87,	// (0x00052fe3) list_single_number_pane_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005f634) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005f634) list_single_number_pane_g

0x1275,	// (0x000512d1) list_single_number_pane_t1_ParamLimits

0x1275,	// (0x000512d1) list_single_number_pane_t1

0xc472,	// (0x0005c4ce) list_single_number_pane_t2_ParamLimits

0xc472,	// (0x0005c4ce) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0005f9c1) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0005f9c1) list_single_number_pane_t

0xb3b9,	// (0x0005b415) list_single_graphic_pane_g1_ParamLimits

0xb3b9,	// (0x0005b415) list_single_graphic_pane_g1

0x43e6,	// (0x00054442) list_single_graphic_pane_g2_ParamLimits

0x43e6,	// (0x00054442) list_single_graphic_pane_g2

0x2f87,	// (0x00052fe3) list_single_graphic_pane_g3_ParamLimits

0x2f87,	// (0x00052fe3) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005f623) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005f623) list_single_graphic_pane_g

0xb3c5,	// (0x0005b421) list_single_graphic_pane_t1_ParamLimits

0xb3c5,	// (0x0005b421) list_single_graphic_pane_t1

0xb3db,	// (0x0005b437) list_single_heading_pane_g1_ParamLimits

0xb3db,	// (0x0005b437) list_single_heading_pane_g1

0x2f87,	// (0x00052fe3) list_single_heading_pane_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0005f62a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0005f62a) list_single_heading_pane_g

0xb3ee,	// (0x0005b44a) list_single_heading_pane_t1_ParamLimits

0xb3ee,	// (0x0005b44a) list_single_heading_pane_t1

0xb404,	// (0x0005b460) list_single_heading_pane_t2_ParamLimits

0xb404,	// (0x0005b460) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0005f62f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0005f62f) list_single_heading_pane_t

0x43e6,	// (0x00054442) list_single_number_heading_pane_g1_ParamLimits

0x43e6,	// (0x00054442) list_single_number_heading_pane_g1

0x2f87,	// (0x00052fe3) list_single_number_heading_pane_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005f634) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005f634) list_single_number_heading_pane_g

0xb416,	// (0x0005b472) list_single_number_heading_pane_t1_ParamLimits

0xb416,	// (0x0005b472) list_single_number_heading_pane_t1

0xb42c,	// (0x0005b488) list_single_number_heading_pane_t2_ParamLimits

0xb42c,	// (0x0005b488) list_single_number_heading_pane_t2

0x189e,	// (0x000518fa) list_single_number_heading_pane_t3_ParamLimits

0x189e,	// (0x000518fa) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005f639) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005f639) list_single_number_heading_pane_t

0xb43e,	// (0x0005b49a) list_single_graphic_heading_pane_g1_ParamLimits

0xb43e,	// (0x0005b49a) list_single_graphic_heading_pane_g1

0xb456,	// (0x0005b4b2) list_single_graphic_heading_pane_g4_ParamLimits

0xb456,	// (0x0005b4b2) list_single_graphic_heading_pane_g4

0x2f87,	// (0x00052fe3) list_single_graphic_heading_pane_g5_ParamLimits

0x2f87,	// (0x00052fe3) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005f640) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005f640) list_single_graphic_heading_pane_g

0xb416,	// (0x0005b472) list_single_graphic_heading_pane_t1_ParamLimits

0xb416,	// (0x0005b472) list_single_graphic_heading_pane_t1

0xb467,	// (0x0005b4c3) list_single_graphic_heading_pane_t2_ParamLimits

0xb467,	// (0x0005b4c3) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005f647) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005f647) list_single_graphic_heading_pane_t

0x18da,	// (0x00051936) list_single_large_graphic_pane_g1_ParamLimits

0x18da,	// (0x00051936) list_single_large_graphic_pane_g1

0x18e6,	// (0x00051942) list_single_large_graphic_pane_g2_ParamLimits

0x18e6,	// (0x00051942) list_single_large_graphic_pane_g2

0x18f2,	// (0x0005194e) list_single_large_graphic_pane_g3_ParamLimits

0x18f2,	// (0x0005194e) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005f64c) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005f64c) list_single_large_graphic_pane_g

0x52eb,	// (0x00055347) wait_border_pane_g2_copy1

0xb47d,	// (0x0005b4d9) list_single_large_graphic_pane_g4_cp2

0x18fe,	// (0x0005195a) list_single_large_graphic_pane_t1_ParamLimits

0x18fe,	// (0x0005195a) list_single_large_graphic_pane_t1

0x42d1,	// (0x0005432d) list_double_pane_g1_ParamLimits

0x42d1,	// (0x0005432d) list_double_pane_g1

0xb485,	// (0x0005b4e1) list_double_pane_g2_ParamLimits

0xb485,	// (0x0005b4e1) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005f653) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005f653) list_double_pane_g

0xb491,	// (0x0005b4ed) list_double_pane_t1_ParamLimits

0xb491,	// (0x0005b4ed) list_double_pane_t1

0xb4a7,	// (0x0005b503) list_double_pane_t2_ParamLimits

0xb4a7,	// (0x0005b503) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005f658) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005f658) list_double_pane_t

0xb4b9,	// (0x0005b515) list_double2_pane_g1_ParamLimits

0xb4b9,	// (0x0005b515) list_double2_pane_g1

0xb4ca,	// (0x0005b526) list_double2_pane_g2_ParamLimits

0xb4ca,	// (0x0005b526) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005f65d) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005f65d) list_double2_pane_g

0xb4d6,	// (0x0005b532) list_double2_pane_t1_ParamLimits

0xb4d6,	// (0x0005b532) list_double2_pane_t1

0xb4ec,	// (0x0005b548) list_double2_pane_t2_ParamLimits

0xb4ec,	// (0x0005b548) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005f662) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005f662) list_double2_pane_t

0x42d1,	// (0x0005432d) list_double_number_pane_g1_ParamLimits

0x42d1,	// (0x0005432d) list_double_number_pane_g1

0xb485,	// (0x0005b4e1) list_double_number_pane_g2_ParamLimits

0xb485,	// (0x0005b4e1) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005f653) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005f653) list_double_number_pane_g

0xb4fe,	// (0x0005b55a) list_double_number_pane_t1_ParamLimits

0xb4fe,	// (0x0005b55a) list_double_number_pane_t1

0xb510,	// (0x0005b56c) list_double_number_pane_t2_ParamLimits

0xb510,	// (0x0005b56c) list_double_number_pane_t2

0xb526,	// (0x0005b582) list_double_number_pane_t3_ParamLimits

0xb526,	// (0x0005b582) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005f667) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005f667) list_double_number_pane_t

0xb538,	// (0x0005b594) list_double_graphic_pane_g1_ParamLimits

0xb538,	// (0x0005b594) list_double_graphic_pane_g1

0xb544,	// (0x0005b5a0) list_double_graphic_pane_g2_ParamLimits

0xb544,	// (0x0005b5a0) list_double_graphic_pane_g2

0xb553,	// (0x0005b5af) list_double_graphic_pane_g3_ParamLimits

0xb553,	// (0x0005b5af) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005f66e) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005f66e) list_double_graphic_pane_g

0xb56b,	// (0x0005b5c7) list_double_graphic_pane_t1_ParamLimits

0xb56b,	// (0x0005b5c7) list_double_graphic_pane_t1

0xb581,	// (0x0005b5dd) list_double_graphic_pane_t2_ParamLimits

0xb581,	// (0x0005b5dd) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005f677) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005f677) list_double_graphic_pane_t

0xb593,	// (0x0005b5ef) list_double2_graphic_pane_g1_ParamLimits

0xb593,	// (0x0005b5ef) list_double2_graphic_pane_g1

0xb59f,	// (0x0005b5fb) list_double2_graphic_pane_g2_ParamLimits

0xb59f,	// (0x0005b5fb) list_double2_graphic_pane_g2

0xb5ab,	// (0x0005b607) list_double2_graphic_pane_g3_ParamLimits

0xb5ab,	// (0x0005b607) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005f67c) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005f67c) list_double2_graphic_pane_g

0xb5b7,	// (0x0005b613) list_double2_graphic_pane_t1_ParamLimits

0xb5b7,	// (0x0005b613) list_double2_graphic_pane_t1

0xb5cd,	// (0x0005b629) list_double2_graphic_pane_t2_ParamLimits

0xb5cd,	// (0x0005b629) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0005f683) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0005f683) list_double2_graphic_pane_t

0xb5df,	// (0x0005b63b) list_double_large_graphic_pane_g1_ParamLimits

0xb5df,	// (0x0005b63b) list_double_large_graphic_pane_g1

0xb60a,	// (0x0005b666) list_double_large_graphic_pane_g2_ParamLimits

0xb60a,	// (0x0005b666) list_double_large_graphic_pane_g2

0xb485,	// (0x0005b4e1) list_double_large_graphic_pane_g3_ParamLimits

0xb485,	// (0x0005b4e1) list_double_large_graphic_pane_g3

0xb620,	// (0x0005b67c) list_double_large_graphic_pane_g4_ParamLimits

0xb620,	// (0x0005b67c) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005f688) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005f688) list_double_large_graphic_pane_g

0xb632,	// (0x0005b68e) list_double_large_graphic_pane_t1_ParamLimits

0xb632,	// (0x0005b68e) list_double_large_graphic_pane_t1

0xb64b,	// (0x0005b6a7) list_double_large_graphic_pane_t2_ParamLimits

0xb64b,	// (0x0005b6a7) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0005f693) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0005f693) list_double_large_graphic_pane_t

0xb65d,	// (0x0005b6b9) list_double2_large_graphic_pane_g1_ParamLimits

0xb65d,	// (0x0005b6b9) list_double2_large_graphic_pane_g1

0xb669,	// (0x0005b6c5) list_double2_large_graphic_pane_g2_ParamLimits

0xb669,	// (0x0005b6c5) list_double2_large_graphic_pane_g2

0xb5ab,	// (0x0005b607) list_double2_large_graphic_pane_g3_ParamLimits

0xb5ab,	// (0x0005b607) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005f698) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005f698) list_double2_large_graphic_pane_g

0xb67a,	// (0x0005b6d6) list_double2_large_graphic_pane_t1_ParamLimits

0xb67a,	// (0x0005b6d6) list_double2_large_graphic_pane_t1

0xb690,	// (0x0005b6ec) list_double2_large_graphic_pane_t2_ParamLimits

0xb690,	// (0x0005b6ec) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005f69f) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005f69f) list_double2_large_graphic_pane_t

0xb6a2,	// (0x0005b6fe) list_double_heading_pane_g1_ParamLimits

0xb6a2,	// (0x0005b6fe) list_double_heading_pane_g1

0xb6b3,	// (0x0005b70f) list_double_heading_pane_g2_ParamLimits

0xb6b3,	// (0x0005b70f) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005f6a4) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005f6a4) list_double_heading_pane_g

0xb6bf,	// (0x0005b71b) list_double_heading_pane_t1_ParamLimits

0xb6bf,	// (0x0005b71b) list_double_heading_pane_t1

0xb4ec,	// (0x0005b548) list_double_heading_pane_t2_ParamLimits

0xb4ec,	// (0x0005b548) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005f6a9) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005f6a9) list_double_heading_pane_t

0xb6d5,	// (0x0005b731) list_double_graphic_heading_pane_g1_ParamLimits

0xb6d5,	// (0x0005b731) list_double_graphic_heading_pane_g1

0xb6a2,	// (0x0005b6fe) list_double_graphic_heading_pane_g2_ParamLimits

0xb6a2,	// (0x0005b6fe) list_double_graphic_heading_pane_g2

0xb6b3,	// (0x0005b70f) list_double_graphic_heading_pane_g3_ParamLimits

0xb6b3,	// (0x0005b70f) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005f6ae) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005f6ae) list_double_graphic_heading_pane_g

0xb6e1,	// (0x0005b73d) list_double_graphic_heading_pane_t1_ParamLimits

0xb6e1,	// (0x0005b73d) list_double_graphic_heading_pane_t1

0xb5cd,	// (0x0005b629) list_double_graphic_heading_pane_t2_ParamLimits

0xb5cd,	// (0x0005b629) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0005f6b5) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0005f6b5) list_double_graphic_heading_pane_t

0xb6f7,	// (0x0005b753) list_double_time_pane_g1_ParamLimits

0xb6f7,	// (0x0005b753) list_double_time_pane_g1

0xb708,	// (0x0005b764) list_double_time_pane_g2_ParamLimits

0xb708,	// (0x0005b764) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005f6ba) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005f6ba) list_double_time_pane_g

0xb714,	// (0x0005b770) list_double_time_pane_t1_ParamLimits

0xb714,	// (0x0005b770) list_double_time_pane_t1

0xb72a,	// (0x0005b786) list_double_time_pane_t2_ParamLimits

0xb72a,	// (0x0005b786) list_double_time_pane_t2

0xb73c,	// (0x0005b798) list_double_time_pane_t3_ParamLimits

0xb73c,	// (0x0005b798) list_double_time_pane_t3

0xb74e,	// (0x0005b7aa) list_double_time_pane_t4_ParamLimits

0xb74e,	// (0x0005b7aa) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005f6bf) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005f6bf) list_double_time_pane_t

0xb760,	// (0x0005b7bc) list_setting_pane_g1_ParamLimits

0xb760,	// (0x0005b7bc) list_setting_pane_g1

0xb4ca,	// (0x0005b526) list_setting_pane_g2_ParamLimits

0xb4ca,	// (0x0005b526) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0005f6c8) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0005f6c8) list_setting_pane_g

0xb76c,	// (0x0005b7c8) list_setting_pane_t1_ParamLimits

0xb76c,	// (0x0005b7c8) list_setting_pane_t1

0xb786,	// (0x0005b7e2) list_setting_pane_t2_ParamLimits

0xb786,	// (0x0005b7e2) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005f6cd) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005f6cd) list_setting_pane_t

0xb7c5,	// (0x0005b821) set_value_pane_cp_ParamLimits

0xb7c5,	// (0x0005b821) set_value_pane_cp

0xb7d1,	// (0x0005b82d) list_setting_number_pane_g1_ParamLimits

0xb7d1,	// (0x0005b82d) list_setting_number_pane_g1

0xb7dd,	// (0x0005b839) list_setting_number_pane_g2_ParamLimits

0xb7dd,	// (0x0005b839) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0005f6d4) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0005f6d4) list_setting_number_pane_g

0xb7e9,	// (0x0005b845) list_setting_number_pane_t1_ParamLimits

0xb7e9,	// (0x0005b845) list_setting_number_pane_t1

0xb802,	// (0x0005b85e) list_setting_number_pane_t2_ParamLimits

0xb802,	// (0x0005b85e) list_setting_number_pane_t2

0xb81c,	// (0x0005b878) list_setting_number_pane_t3_ParamLimits

0xb81c,	// (0x0005b878) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005f6d9) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005f6d9) list_setting_number_pane_t

0xb7c5,	// (0x0005b821) set_value_pane_ParamLimits

0xb7c5,	// (0x0005b821) set_value_pane

0x37cb,	// (0x00053827) bg_set_opt_pane_ParamLimits

0x37cb,	// (0x00053827) bg_set_opt_pane

0x03a2,	// (0x000503fe) set_value_pane_t1

0x37ec,	// (0x00053848) slider_set_pane_cp3

0x37f5,	// (0x00053851) volume_small_pane_cp

0x37fe,	// (0x0005385a) list_form_gen_pane

0x3807,	// (0x00053863) scroll_pane_cp8

0xb85f,	// (0x0005b8bb) form_field_data_pane_ParamLimits

0xb85f,	// (0x0005b8bb) form_field_data_pane

0xb876,	// (0x0005b8d2) form_field_data_wide_pane_ParamLimits

0xb876,	// (0x0005b8d2) form_field_data_wide_pane

0xb896,	// (0x0005b8f2) form_field_popup_pane_ParamLimits

0xb896,	// (0x0005b8f2) form_field_popup_pane

0xb8ae,	// (0x0005b90a) form_field_popup_wide_pane_ParamLimits

0xb8ae,	// (0x0005b90a) form_field_popup_wide_pane

0x043e,	// (0x0005049a) form_field_slider_pane_ParamLimits

0x043e,	// (0x0005049a) form_field_slider_pane

0x0451,	// (0x000504ad) form_field_slider_wide_pane_ParamLimits

0x0451,	// (0x000504ad) form_field_slider_wide_pane

0x3818,	// (0x00053874) data_form_pane

0xb8cf,	// (0x0005b92b) form_field_data_pane_t1

0x3824,	// (0x00053880) input_focus_pane

0x0486,	// (0x000504e2) data_form_wide_pane

0x04a3,	// (0x000504ff) form_field_data_wide_pane_t1

0x3589,	// (0x000535e5) input_focus_pane_cp6

0xb8e9,	// (0x0005b945) form_field_popup_pane_t1

0x3824,	// (0x00053880) input_focus_pane_cp7

0x3846,	// (0x000538a2) list_form_pane

0x04e5,	// (0x00050541) form_field_popup_wide_pane_t1

0x3824,	// (0x00053880) input_focus_pane_cp8

0x3852,	// (0x000538ae) list_form_wide_pane

0xb90b,	// (0x0005b967) form_field_slider_pane_t1_ParamLimits

0xb90b,	// (0x0005b967) form_field_slider_pane_t1

0xb923,	// (0x0005b97f) form_field_slider_pane_t2_ParamLimits

0xb923,	// (0x0005b97f) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005f6e9) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005f6e9) form_field_slider_pane_t

0x2c15,	// (0x00052c71) input_focus_pane_cp9_ParamLimits

0x2c15,	// (0x00052c71) input_focus_pane_cp9

0xb938,	// (0x0005b994) slider_cont_pane_ParamLimits

0xb938,	// (0x0005b994) slider_cont_pane

0x3861,	// (0x000538bd) form_field_slider_wide_pane_t1_ParamLimits

0x3861,	// (0x000538bd) form_field_slider_wide_pane_t1

0x0541,	// (0x0005059d) form_field_slider_wide_pane_t2_ParamLimits

0x0541,	// (0x0005059d) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005f6ee) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005f6ee) form_field_slider_wide_pane_t

0x2c15,	// (0x00052c71) input_focus_pane_cp10_ParamLimits

0x2c15,	// (0x00052c71) input_focus_pane_cp10

0xb94c,	// (0x0005b9a8) slider_cont_pane_cp1_ParamLimits

0xb94c,	// (0x0005b9a8) slider_cont_pane_cp1

0xb960,	// (0x0005b9bc) slider_form_pane_cp

0x3873,	// (0x000538cf) input_focus_pane_g1

0x387b,	// (0x000538d7) input_focus_pane_g2

0x3883,	// (0x000538df) input_focus_pane_g3

0x388b,	// (0x000538e7) input_focus_pane_g4

0x3893,	// (0x000538ef) input_focus_pane_g5

0x389b,	// (0x000538f7) input_focus_pane_g6

0x38a3,	// (0x000538ff) input_focus_pane_g7

0x38ab,	// (0x00053907) input_focus_pane_g8

0x38b3,	// (0x0005390f) input_focus_pane_g9

0x28b0,	// (0x0005290c) input_focus_pane_g10

0x0009,

0xf697,	// (0x0005f6f3) input_focus_pane_g

0x52f4,	// (0x00055350) wait_border_pane_g3_copy1

0xb968,	// (0x0005b9c4) data_form_pane_t1

0x28b0,	// (0x0005290c) wait_anim_pane_g1_copy1

0xc484,	// (0x0005c4e0) data_form_wide_pane_t1

0xb981,	// (0x0005b9dd) list_form_graphic_pane_cp_ParamLimits

0xb981,	// (0x0005b9dd) list_form_graphic_pane_cp

0x622a,	// (0x00056286) slider_form_pane_g1

0x6233,	// (0x0005628f) slider_form_pane_g2

0x0006,

0xf995,	// (0x0005f9f1) slider_form_pane_g

0xb992,	// (0x0005b9ee) list_form_graphic_pane_ParamLimits

0xb992,	// (0x0005b9ee) list_form_graphic_pane

0x05bf,	// (0x0005061b) list_form_graphic_pane_g1

0x05c7,	// (0x00050623) list_form_graphic_pane_t1_ParamLimits

0x05c7,	// (0x00050623) list_form_graphic_pane_t1

0x299a,	// (0x000529f6) list_highlight_pane_cp5_ParamLimits

0x299a,	// (0x000529f6) list_highlight_pane_cp5

0xb9a4,	// (0x0005ba00) find_pane_g1

0x38bb,	// (0x00053917) input_find_pane

0xb9ad,	// (0x0005ba09) input_find_pane_g1_ParamLimits

0xb9ad,	// (0x0005ba09) input_find_pane_g1

0xb9b9,	// (0x0005ba15) input_find_pane_t1_ParamLimits

0xb9b9,	// (0x0005ba15) input_find_pane_t1

0xb9ce,	// (0x0005ba2a) input_find_pane_t2_ParamLimits

0xb9ce,	// (0x0005ba2a) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005f708) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005f708) input_find_pane_t

0x38c4,	// (0x00053920) input_focus_pane_cp5_ParamLimits

0x38c4,	// (0x00053920) input_focus_pane_cp5

0x38de,	// (0x0005393a) bg_popup_window_pane_cp2_ParamLimits

0x38de,	// (0x0005393a) bg_popup_window_pane_cp2

0x38eb,	// (0x00053947) listscroll_menu_pane_ParamLimits

0x38eb,	// (0x00053947) listscroll_menu_pane

0xcd83,	// (0x0005cddf) popup_submenu_window_ParamLimits

0xcd83,	// (0x0005cddf) popup_submenu_window

0x3923,	// (0x0005397f) find_popup_pane_g1

0x392b,	// (0x00053987) input_popup_find_pane_cp

0x38c4,	// (0x00053920) input_focus_pane_cp4_ParamLimits

0x38c4,	// (0x00053920) input_focus_pane_cp4

0x3941,	// (0x0005399d) input_popup_find_pane_t1_ParamLimits

0x3941,	// (0x0005399d) input_popup_find_pane_t1

0x28ba,	// (0x00052916) bg_popup_sub_pane_cp

0x396f,	// (0x000539cb) listscroll_popup_sub_pane

0x3977,	// (0x000539d3) list_submenu_pane_ParamLimits

0x3977,	// (0x000539d3) list_submenu_pane

0x3988,	// (0x000539e4) scroll_pane_cp4

0x3990,	// (0x000539ec) list_single_popup_submenu_pane_ParamLimits

0x3990,	// (0x000539ec) list_single_popup_submenu_pane

0x39a4,	// (0x00053a00) list_single_popup_submenu_pane_g1

0x39ac,	// (0x00053a08) list_single_popup_submenu_pane_t1_ParamLimits

0x39ac,	// (0x00053a08) list_single_popup_submenu_pane_t1

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp1_ParamLimits

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp1

0xcdbd,	// (0x0005ce19) tabs_2_active_pane_g1

0xcdc5,	// (0x0005ce21) tabs_2_active_pane_t1

0x2c15,	// (0x00052c71) bg_passive_tab_pane_cp1_ParamLimits

0x2c15,	// (0x00052c71) bg_passive_tab_pane_cp1

0xcdbd,	// (0x0005ce19) tabs_2_passive_pane_g1

0xcdc5,	// (0x0005ce21) tabs_2_passive_pane_t1

0x299a,	// (0x000529f6) bg_active_tab_pane_cp4

0xcdd7,	// (0x0005ce33) tabs_2_long_active_pane_t1

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp4

0x12b8,	// (0x00051314) list_single_midp_graphic_pane_g4_ParamLimits

0x299a,	// (0x000529f6) bg_active_tab_pane_cp5

0xcdea,	// (0x0005ce46) tabs_3_long_active_pane_t1

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp5

0x12b8,	// (0x00051314) list_single_midp_graphic_pane_g4

0x299a,	// (0x000529f6) bg_popup_window_pane_cp13_ParamLimits

0x299a,	// (0x000529f6) bg_popup_window_pane_cp13

0x3a23,	// (0x00053a7f) listscroll_popup_fast_pane_ParamLimits

0x3a23,	// (0x00053a7f) listscroll_popup_fast_pane

0x3a32,	// (0x00053a8e) grid_popup_fast_pane_ParamLimits

0x3a32,	// (0x00053a8e) grid_popup_fast_pane

0x3a44,	// (0x00053aa0) scroll_pane_cp9_ParamLimits

0x3a44,	// (0x00053aa0) scroll_pane_cp9

0x7b2d,	// (0x00057b89) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7b2d,	// (0x00057b89) list_single_graphic_hl_pane_t1_cp2

0x3a68,	// (0x00053ac4) input_focus_pane_cp20_ParamLimits

0x3a68,	// (0x00053ac4) input_focus_pane_cp20

0x3a76,	// (0x00053ad2) query_popup_data_pane_t1_ParamLimits

0x3a76,	// (0x00053ad2) query_popup_data_pane_t1

0x3a89,	// (0x00053ae5) query_popup_data_pane_t2_ParamLimits

0x3a89,	// (0x00053ae5) query_popup_data_pane_t2

0x3acf,	// (0x00053b2b) query_popup_data_pane_t3_ParamLimits

0x3acf,	// (0x00053b2b) query_popup_data_pane_t3

0x3b10,	// (0x00053b6c) query_popup_data_pane_t4_ParamLimits

0x3b10,	// (0x00053b6c) query_popup_data_pane_t4

0x3b4c,	// (0x00053ba8) query_popup_data_pane_t5_ParamLimits

0x3b4c,	// (0x00053ba8) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0005f70d) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0005f70d) query_popup_data_pane_t

0x3873,	// (0x000538cf) bg_set_opt_pane_g1

0x387b,	// (0x000538d7) bg_set_opt_pane_g2

0x3883,	// (0x000538df) bg_set_opt_pane_g3

0x388b,	// (0x000538e7) bg_set_opt_pane_g4

0x3893,	// (0x000538ef) bg_set_opt_pane_g5

0x389b,	// (0x000538f7) bg_set_opt_pane_g6

0x38a3,	// (0x000538ff) bg_set_opt_pane_g7

0x38ab,	// (0x00053907) bg_set_opt_pane_g8

0x38b3,	// (0x0005390f) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005f718) bg_set_opt_pane_g

0x0926,	// (0x00050982) control_top_pane_stacon_ParamLimits

0x0926,	// (0x00050982) control_top_pane_stacon

0x0979,	// (0x000509d5) signal_pane_stacon_ParamLimits

0x0979,	// (0x000509d5) signal_pane_stacon

0x4146,	// (0x000541a2) stacon_top_pane_g1_ParamLimits

0x4146,	// (0x000541a2) stacon_top_pane_g1

0x099e,	// (0x000509fa) title_pane_stacon_ParamLimits

0x099e,	// (0x000509fa) title_pane_stacon

0x09c8,	// (0x00050a24) uni_indicator_pane_stacon_ParamLimits

0x09c8,	// (0x00050a24) uni_indicator_pane_stacon

0x09dd,	// (0x00050a39) battery_pane_stacon_ParamLimits

0x09dd,	// (0x00050a39) battery_pane_stacon

0x0a21,	// (0x00050a7d) control_bottom_pane_stacon_ParamLimits

0x0a21,	// (0x00050a7d) control_bottom_pane_stacon

0x0a44,	// (0x00050aa0) navi_pane_stacon_ParamLimits

0x0a44,	// (0x00050aa0) navi_pane_stacon

0x4168,	// (0x000541c4) stacon_bottom_pane_g1_ParamLimits

0x4168,	// (0x000541c4) stacon_bottom_pane_g1

0x061b,	// (0x00050677) aid_levels_signal_lsc_ParamLimits

0x061b,	// (0x00050677) aid_levels_signal_lsc

0x0631,	// (0x0005068d) signal_pane_stacon_g1_ParamLimits

0x0631,	// (0x0005068d) signal_pane_stacon_g1

0x0645,	// (0x000506a1) signal_pane_stacon_g2_ParamLimits

0x0645,	// (0x000506a1) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005f72b) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005f72b) signal_pane_stacon_g

0x067a,	// (0x000506d6) title_pane_stacon_t1_ParamLimits

0x067a,	// (0x000506d6) title_pane_stacon_t1

0x3b90,	// (0x00053bec) uni_indicator_pane_stacon_g1

0x3b9a,	// (0x00053bf6) uni_indicator_pane_stacon_g2

0x3ba4,	// (0x00053c00) uni_indicator_pane_stacon_g3

0x3bae,	// (0x00053c0a) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005f737) uni_indicator_pane_stacon_g

0x069f,	// (0x000506fb) control_top_pane_stacon_g1

0x06a7,	// (0x00050703) control_top_pane_stacon_t1_ParamLimits

0x06a7,	// (0x00050703) control_top_pane_stacon_t1

0x06de,	// (0x0005073a) aid_levels_battery_lsc_ParamLimits

0x06de,	// (0x0005073a) aid_levels_battery_lsc

0x06f5,	// (0x00050751) battery_pane_stacon_g1_ParamLimits

0x06f5,	// (0x00050751) battery_pane_stacon_g1

0x0708,	// (0x00050764) battery_pane_stacon_g2_ParamLimits

0x0708,	// (0x00050764) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005f740) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005f740) battery_pane_stacon_g

0x0746,	// (0x000507a2) navi_icon_pane_stacon

0x075a,	// (0x000507b6) navi_navi_pane_stacon

0x0746,	// (0x000507a2) navi_text_pane_stacon

0x069f,	// (0x000506fb) control_bottom_pane_stacon_g1

0x076e,	// (0x000507ca) control_bottom_pane_stacon_t1_ParamLimits

0x076e,	// (0x000507ca) control_bottom_pane_stacon_t1

0xcdfc,	// (0x0005ce58) grid_app_pane_ParamLimits

0xcdfc,	// (0x0005ce58) grid_app_pane

0xce34,	// (0x0005ce90) scroll_pane_cp15_ParamLimits

0xce34,	// (0x0005ce90) scroll_pane_cp15

0xce4d,	// (0x0005cea9) cell_app_pane_ParamLimits

0xce4d,	// (0x0005cea9) cell_app_pane

0xce92,	// (0x0005ceee) cell_app_pane_g1_ParamLimits

0xce92,	// (0x0005ceee) cell_app_pane_g1

0x3c4f,	// (0x00053cab) cell_app_pane_g2_ParamLimits

0x3c4f,	// (0x00053cab) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005f745) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005f745) cell_app_pane_g

0xceb2,	// (0x0005cf0e) cell_app_pane_t1_ParamLimits

0xceb2,	// (0x0005cf0e) cell_app_pane_t1

0x3c72,	// (0x00053cce) grid_highlight_pane_ParamLimits

0x3c72,	// (0x00053cce) grid_highlight_pane

0x3873,	// (0x000538cf) cell_highlight_pane_g1

0x387b,	// (0x000538d7) cell_highlight_pane_g2

0x3883,	// (0x000538df) cell_highlight_pane_g3

0x388b,	// (0x000538e7) cell_highlight_pane_g4

0x3893,	// (0x000538ef) cell_highlight_pane_g5

0x389b,	// (0x000538f7) cell_highlight_pane_g6

0x38a3,	// (0x000538ff) cell_highlight_pane_g7

0x38ab,	// (0x00053907) cell_highlight_pane_g8

0x38b3,	// (0x0005390f) cell_highlight_pane_g9

0x28b0,	// (0x0005290c) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0005f6f3) cell_highlight_pane_g

0x3c83,	// (0x00053cdf) bg_scroll_pane

0x07b8,	// (0x00050814) scroll_handle_pane

0x3cca,	// (0x00053d26) scroll_bg_pane_g1

0x3cdf,	// (0x00053d3b) scroll_bg_pane_g2

0x3cf7,	// (0x00053d53) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0005f74a) scroll_bg_pane_g

0x3d0c,	// (0x00053d68) scroll_handle_focus_pane_ParamLimits

0x3d0c,	// (0x00053d68) scroll_handle_focus_pane

0x3cca,	// (0x00053d26) scroll_handle_pane_g1

0x3d19,	// (0x00053d75) scroll_handle_pane_g2

0x3cf7,	// (0x00053d53) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0005f751) scroll_handle_pane_g

0x38c4,	// (0x00053920) bg_popup_sub_pane_cp21_ParamLimits

0x38c4,	// (0x00053920) bg_popup_sub_pane_cp21

0x3d2d,	// (0x00053d89) popup_fep_japan_predictive_window_t1_ParamLimits

0x3d2d,	// (0x00053d89) popup_fep_japan_predictive_window_t1

0x3d47,	// (0x00053da3) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d47,	// (0x00053da3) popup_fep_japan_predictive_window_t2

0x3d7a,	// (0x00053dd6) popup_fep_japan_predictive_window_t3_ParamLimits

0x3d7a,	// (0x00053dd6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005f758) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005f758) popup_fep_japan_predictive_window_t

0x28ba,	// (0x00052916) bg_popup_sub_pane_cp23

0x3db1,	// (0x00053e0d) listscroll_japin_cand_pane

0x3db9,	// (0x00053e15) popup_fep_japan_candidate_window_t1

0x3dc7,	// (0x00053e23) candidate_pane_ParamLimits

0x3dc7,	// (0x00053e23) candidate_pane

0x3dd9,	// (0x00053e35) scroll_pane_cp30

0x3de1,	// (0x00053e3d) list_single_popup_jap_candidate_pane_ParamLimits

0x3de1,	// (0x00053e3d) list_single_popup_jap_candidate_pane

0x28ba,	// (0x00052916) list_highlight_pane_cp30

0x3df6,	// (0x00053e52) list_single_popup_jap_candidate_pane_t1

0x3e05,	// (0x00053e61) level_1_signal

0x3e17,	// (0x00053e73) level_2_signal

0x3e2a,	// (0x00053e86) level_3_signal

0x3e3d,	// (0x00053e99) level_4_signal

0x3e50,	// (0x00053eac) level_5_signal

0x3e63,	// (0x00053ebf) level_6_signal

0x3e76,	// (0x00053ed2) level_7_signal

0x3e05,	// (0x00053e61) level_1_battery

0x3e17,	// (0x00053e73) level_2_battery

0x3e2a,	// (0x00053e86) level_3_battery

0x3e3d,	// (0x00053e99) level_4_battery

0x3e50,	// (0x00053eac) level_5_battery

0x3e63,	// (0x00053ebf) level_6_battery

0x3e76,	// (0x00053ed2) level_7_battery

0x3ea1,	// (0x00053efd) list_menu_pane_ParamLimits

0x3ea1,	// (0x00053efd) list_menu_pane

0x3eb7,	// (0x00053f13) scroll_pane_cp25_ParamLimits

0x3eb7,	// (0x00053f13) scroll_pane_cp25

0x3ed0,	// (0x00053f2c) list_double2_graphic_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double2_graphic_pane_cp2

0x3ed0,	// (0x00053f2c) list_double2_large_graphic_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double2_large_graphic_pane_cp2

0x3ed0,	// (0x00053f2c) list_double2_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double2_pane_cp2

0x3ed0,	// (0x00053f2c) list_double_graphic_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double_graphic_pane_cp2

0x3ed0,	// (0x00053f2c) list_double_large_graphic_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double_large_graphic_pane_cp2

0x3ed0,	// (0x00053f2c) list_double_number_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double_number_pane_cp2

0x3ed0,	// (0x00053f2c) list_double_pane_cp2_ParamLimits

0x3ed0,	// (0x00053f2c) list_double_pane_cp2

0xceda,	// (0x0005cf36) list_single_2graphic_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_2graphic_pane_cp2

0xceda,	// (0x0005cf36) list_single_graphic_heading_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_graphic_heading_pane_cp2

0xceda,	// (0x0005cf36) list_single_graphic_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_graphic_pane_cp2

0xceda,	// (0x0005cf36) list_single_heading_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_heading_pane_cp2

0x3f0d,	// (0x00053f69) list_single_large_graphic_pane_cp2_ParamLimits

0x3f0d,	// (0x00053f69) list_single_large_graphic_pane_cp2

0xceda,	// (0x0005cf36) list_single_number_heading_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_number_heading_pane_cp2

0xceda,	// (0x0005cf36) list_single_number_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_number_pane_cp2

0xceda,	// (0x0005cf36) list_single_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_pane_cp2

0x3f89,	// (0x00053fe5) bg_popup_sub_pane_cp22

0x086a,	// (0x000508c6) popup_side_volume_key_window_g1

0x0894,	// (0x000508f0) popup_side_volume_key_window_t1

0x08b0,	// (0x0005090c) volume_small_pane_cp1

0x2c15,	// (0x00052c71) bg_popup_sub_pane_cp24_ParamLimits

0x2c15,	// (0x00052c71) bg_popup_sub_pane_cp24

0x3f9f,	// (0x00053ffb) fep_china_uni_candidate_pane_ParamLimits

0x3f9f,	// (0x00053ffb) fep_china_uni_candidate_pane

0x3fb3,	// (0x0005400f) fep_china_uni_entry_pane

0x3fc3,	// (0x0005401f) popup_fep_china_uni_window_g1

0x3fdf,	// (0x0005403b) fep_china_uni_entry_pane_g1

0x3fe7,	// (0x00054043) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005f789) fep_china_uni_entry_pane_g

0x3fef,	// (0x0005404b) fep_entry_item_pane

0x3ff9,	// (0x00054055) fep_candidate_item_pane

0x4001,	// (0x0005405d) fep_china_uni_candidate_pane_g1

0x4009,	// (0x00054065) fep_china_uni_candidate_pane_g2

0x4011,	// (0x0005406d) fep_china_uni_candidate_pane_g3

0x4019,	// (0x00054075) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005f78e) fep_china_uni_candidate_pane_g

0x28b0,	// (0x0005290c) fep_entry_item_pane_g1

0x4021,	// (0x0005407d) fep_entry_item_pane_t1_ParamLimits

0x4021,	// (0x0005407d) fep_entry_item_pane_t1

0x4037,	// (0x00054093) fep_candidate_item_pane_t1_ParamLimits

0x4037,	// (0x00054093) fep_candidate_item_pane_t1

0x404c,	// (0x000540a8) fep_candidate_item_pane_t2_ParamLimits

0x404c,	// (0x000540a8) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0005f797) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0005f797) fep_candidate_item_pane_t

0x299a,	// (0x000529f6) list_highlight_pane_cp31_ParamLimits

0x299a,	// (0x000529f6) list_highlight_pane_cp31

0x405e,	// (0x000540ba) level_1_signal_lsc

0x4067,	// (0x000540c3) level_2_signal_lsc

0x4070,	// (0x000540cc) level_3_signal_lsc

0x4079,	// (0x000540d5) level_4_signal_lsc

0x4082,	// (0x000540de) level_5_signal_lsc

0x408b,	// (0x000540e7) level_6_signal_lsc

0x4094,	// (0x000540f0) level_7_signal_lsc

0x4094,	// (0x000540f0) level_1_battery_lsc

0x409d,	// (0x000540f9) level_2_battery_lsc

0x40a6,	// (0x00054102) level_3_battery_lsc

0x40af,	// (0x0005410b) level_4_battery_lsc

0x40b8,	// (0x00054114) level_5_battery_lsc

0x40c1,	// (0x0005411d) level_6_battery_lsc

0x405e,	// (0x000540ba) level_7_battery_lsc

0x40ca,	// (0x00054126) scroll_handle_focus_pane_g1

0x40d3,	// (0x0005412f) scroll_handle_focus_pane_g2

0x40dc,	// (0x00054138) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005f79c) scroll_handle_focus_pane_g

0xb9ec,	// (0x0005ba48) list_single_2graphic_pane_g1_ParamLimits

0xb9ec,	// (0x0005ba48) list_single_2graphic_pane_g1

0xb456,	// (0x0005b4b2) list_single_2graphic_pane_g2_ParamLimits

0xb456,	// (0x0005b4b2) list_single_2graphic_pane_g2

0x2f87,	// (0x00052fe3) list_single_2graphic_pane_g3_ParamLimits

0x2f87,	// (0x00052fe3) list_single_2graphic_pane_g3

0xb9f8,	// (0x0005ba54) list_single_2graphic_pane_g4_ParamLimits

0xb9f8,	// (0x0005ba54) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0005f7a3) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0005f7a3) list_single_2graphic_pane_g

0xba04,	// (0x0005ba60) list_single_2graphic_pane_t1_ParamLimits

0xba04,	// (0x0005ba60) list_single_2graphic_pane_t1

0xba32,	// (0x0005ba8e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba32,	// (0x0005ba8e) list_double2_graphic_large_graphic_pane_g1

0xb669,	// (0x0005b6c5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb669,	// (0x0005b6c5) list_double2_graphic_large_graphic_pane_g2

0xb5ab,	// (0x0005b607) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb5ab,	// (0x0005b607) list_double2_graphic_large_graphic_pane_g3

0xba44,	// (0x0005baa0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba44,	// (0x0005baa0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005f7ac) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005f7ac) list_double2_graphic_large_graphic_pane_g

0xba50,	// (0x0005baac) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba50,	// (0x0005baac) list_double2_graphic_large_graphic_pane_t1

0xba66,	// (0x0005bac2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba66,	// (0x0005bac2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0005f7b5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0005f7b5) list_double2_graphic_large_graphic_pane_t

0x4230,	// (0x0005428c) popup_fast_swap_window_ParamLimits

0x4230,	// (0x0005428c) popup_fast_swap_window

0x424c,	// (0x000542a8) popup_side_volume_key_window

0x4268,	// (0x000542c4) stacon_top_pane

0x4272,	// (0x000542ce) status_pane_ParamLimits

0x4272,	// (0x000542ce) status_pane

0x4268,	// (0x000542c4) status_small_pane

0x28ba,	// (0x00052916) control_pane

0x28ba,	// (0x00052916) stacon_bottom_pane

0x3807,	// (0x00053863) scroll_pane_cp121

0x37fe,	// (0x0005385a) set_content_pane

0x410c,	// (0x00054168) bg_active_tab_pane_g1_cp1

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp1

0x4115,	// (0x00054171) bg_active_tab_pane_g3_cp1

0x410c,	// (0x00054168) bg_passive_tab_pane_g1_cp1

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp1

0x4115,	// (0x00054171) bg_passive_tab_pane_g3_cp1

0xcf68,	// (0x0005cfc4) bg_active_tab_pane_g1_cp2

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp2

0xcf71,	// (0x0005cfcd) bg_active_tab_pane_g3_cp2

0xcf68,	// (0x0005cfc4) bg_passive_tab_pane_g1_cp2

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp2

0xcf71,	// (0x0005cfcd) bg_passive_tab_pane_g3_cp2

0xcf7a,	// (0x0005cfd6) bg_active_tab_pane_g1_cp3

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp3

0xcf83,	// (0x0005cfdf) bg_active_tab_pane_g3_cp3

0xcf7a,	// (0x0005cfd6) bg_passive_tab_pane_g1_cp3

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp3

0xcf83,	// (0x0005cfdf) bg_passive_tab_pane_g3_cp3

0xcf8c,	// (0x0005cfe8) bg_active_tab_pane_g1_cp4

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp4

0xcf95,	// (0x0005cff1) bg_active_tab_pane_g3_cp4

0xcf8c,	// (0x0005cfe8) bg_passive_tab_pane_g1_cp4

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp4

0xcf95,	// (0x0005cff1) bg_passive_tab_pane_g3_cp4

0x4184,	// (0x000541e0) bg_active_tab_pane_g1_cp5

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp5

0x418d,	// (0x000541e9) bg_active_tab_pane_g3_cp5

0x4184,	// (0x000541e0) bg_passive_tab_pane_g1_cp5

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp5

0x418d,	// (0x000541e9) bg_passive_tab_pane_g3_cp5

0x6808,	// (0x00056864) list_set_graphic_pane_ParamLimits

0x6808,	// (0x00056864) list_set_graphic_pane

0x28ba,	// (0x00052916) bg_set_opt_pane_cp4

0xcf9e,	// (0x0005cffa) list_set_graphic_pane_g1_ParamLimits

0xcf9e,	// (0x0005cffa) list_set_graphic_pane_g1

0xcfaa,	// (0x0005d006) list_set_graphic_pane_g2_ParamLimits

0xcfaa,	// (0x0005d006) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005f7ba) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005f7ba) list_set_graphic_pane_g

0x0009,

0xfada,	// (0x0005fb36) volume_small_pane_cp_g

0xcfce,	// (0x0005d02a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xcfce,	// (0x0005d02a) list_double2_large_graphic_pane_g1_cp2

0xcfdc,	// (0x0005d038) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcfdc,	// (0x0005d038) list_double2_large_graphic_pane_g2_cp2

0x4200,	// (0x0005425c) list_double2_large_graphic_pane_g3_cp2

0x4208,	// (0x00054264) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4208,	// (0x00054264) list_double2_large_graphic_pane_t1_cp2

0x421e,	// (0x0005427a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x421e,	// (0x0005427a) list_double2_large_graphic_pane_t2_cp2

0xd7ff,	// (0x0005d85b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd7ff,	// (0x0005d85b) list_double_large_graphic_pane_g1_cp2

0xd812,	// (0x0005d86e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd812,	// (0x0005d86e) list_double_large_graphic_pane_g2_cp2

0x438e,	// (0x000543ea) list_double_large_graphic_pane_g3_cp2

0x5de9,	// (0x00055e45) list_double_large_graphic_pane_g4_cp

0x5df1,	// (0x00055e4d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5df1,	// (0x00055e4d) list_double_large_graphic_pane_t1_cp2

0x5e08,	// (0x00055e64) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e08,	// (0x00055e64) list_double_large_graphic_pane_t2_cp2

0xcfed,	// (0x0005d049) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcfed,	// (0x0005d049) list_double2_graphic_pane_g1_cp2

0xcffb,	// (0x0005d057) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcffb,	// (0x0005d057) list_double2_graphic_pane_g2_cp2

0xd00c,	// (0x0005d068) list_double2_graphic_pane_g3_cp2

0x42a9,	// (0x00054305) list_double2_graphic_pane_t1_cp2_ParamLimits

0x42a9,	// (0x00054305) list_double2_graphic_pane_t1_cp2

0x42bf,	// (0x0005431b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x42bf,	// (0x0005431b) list_double2_graphic_pane_t2_cp2

0x42d1,	// (0x0005432d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x42d1,	// (0x0005432d) list_single_number_heading_pane_g1_cp2

0x42dd,	// (0x00054339) list_single_number_heading_pane_g2_cp2

0x42e5,	// (0x00054341) list_single_number_heading_pane_t1_cp2_ParamLimits

0x42e5,	// (0x00054341) list_single_number_heading_pane_t1_cp2

0xd016,	// (0x0005d072) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd016,	// (0x0005d072) list_single_number_heading_pane_t2_cp2

0x430d,	// (0x00054369) list_single_number_heading_pane_t3_cp2_ParamLimits

0x430d,	// (0x00054369) list_single_number_heading_pane_t3_cp2

0x42d1,	// (0x0005432d) list_single_heading_pane_g1_cp2_ParamLimits

0x42d1,	// (0x0005432d) list_single_heading_pane_g1_cp2

0x42dd,	// (0x00054339) list_single_heading_pane_g2_cp2

0x42e5,	// (0x00054341) list_single_heading_pane_t1_cp2_ParamLimits

0x42e5,	// (0x00054341) list_single_heading_pane_t1_cp2

0xd7eb,	// (0x0005d847) list_single_heading_pane_t2_cp2_ParamLimits

0xd7eb,	// (0x0005d847) list_single_heading_pane_t2_cp2

0x5b17,	// (0x00055b73) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b17,	// (0x00055b73) list_double_graphic_pane_g1_cp2

0x5b23,	// (0x00055b7f) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b23,	// (0x00055b7f) list_double_graphic_pane_g2_cp2

0x5b32,	// (0x00055b8e) list_double_graphic_pane_g3_cp2

0x5b3a,	// (0x00055b96) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b3a,	// (0x00055b96) list_double_graphic_pane_t1_cp2

0x5b50,	// (0x00055bac) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b50,	// (0x00055bac) list_double_graphic_pane_t2_cp2

0x4382,	// (0x000543de) list_double_number_pane_g1_cp2_ParamLimits

0x4382,	// (0x000543de) list_double_number_pane_g1_cp2

0x438e,	// (0x000543ea) list_double_number_pane_g2_cp2

0xd7a3,	// (0x0005d7ff) list_double_number_pane_t1_cp2_ParamLimits

0xd7a3,	// (0x0005d7ff) list_double_number_pane_t1_cp2

0x5aef,	// (0x00055b4b) list_double_number_pane_t2_cp2_ParamLimits

0x5aef,	// (0x00055b4b) list_double_number_pane_t2_cp2

0x5b05,	// (0x00055b61) list_double_number_pane_t3_cp2_ParamLimits

0x5b05,	// (0x00055b61) list_double_number_pane_t3_cp2

0xd657,	// (0x0005d6b3) list_single_graphic_pane_g1_cp2_ParamLimits

0xd657,	// (0x0005d6b3) list_single_graphic_pane_g1_cp2

0x43e6,	// (0x00054442) list_single_graphic_pane_g2_cp2_ParamLimits

0x43e6,	// (0x00054442) list_single_graphic_pane_g2_cp2

0x43f2,	// (0x0005444e) list_single_graphic_pane_g3_cp2

0x599a,	// (0x000559f6) list_single_graphic_pane_t1_cp2_ParamLimits

0x599a,	// (0x000559f6) list_single_graphic_pane_t1_cp2

0x43e6,	// (0x00054442) list_single_number_pane_g1_cp2_ParamLimits

0x43e6,	// (0x00054442) list_single_number_pane_g1_cp2

0x43f2,	// (0x0005444e) list_single_number_pane_g2_cp2

0x599a,	// (0x000559f6) list_single_number_pane_t1_cp2_ParamLimits

0x599a,	// (0x000559f6) list_single_number_pane_t1_cp2

0xd643,	// (0x0005d69f) list_single_number_pane_t2_cp2_ParamLimits

0xd643,	// (0x0005d69f) list_single_number_pane_t2_cp2

0xcfdc,	// (0x0005d038) list_double2_pane_g1_cp2_ParamLimits

0xcfdc,	// (0x0005d038) list_double2_pane_g1_cp2

0x4200,	// (0x0005425c) list_double2_pane_g2_cp2

0x435a,	// (0x000543b6) list_double2_pane_t1_cp2_ParamLimits

0x435a,	// (0x000543b6) list_double2_pane_t1_cp2

0x4370,	// (0x000543cc) list_double2_pane_t2_cp2_ParamLimits

0x4370,	// (0x000543cc) list_double2_pane_t2_cp2

0x4382,	// (0x000543de) list_double_pane_g1_cp2_ParamLimits

0x4382,	// (0x000543de) list_double_pane_g1_cp2

0x438e,	// (0x000543ea) list_double_pane_g2_cp2

0x4396,	// (0x000543f2) list_double_pane_t1_cp2_ParamLimits

0x4396,	// (0x000543f2) list_double_pane_t1_cp2

0x43ac,	// (0x00054408) list_double_pane_t2_cp2_ParamLimits

0x43ac,	// (0x00054408) list_double_pane_t2_cp2

0x43d6,	// (0x00054432) list_single_pane_cp2_g3

0x43e6,	// (0x00054442) list_single_pane_g1_cp2_ParamLimits

0x43e6,	// (0x00054442) list_single_pane_g1_cp2

0x43f2,	// (0x0005444e) list_single_pane_g2_cp2

0x43fa,	// (0x00054456) list_single_pane_t1_cp2_ParamLimits

0x43fa,	// (0x00054456) list_single_pane_t1_cp2

0xd042,	// (0x0005d09e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd042,	// (0x0005d09e) list_single_large_graphic_pane_g1_cp2

0x441e,	// (0x0005447a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x441e,	// (0x0005447a) list_single_large_graphic_pane_g2_cp2

0x442a,	// (0x00054486) list_single_large_graphic_pane_g3_cp2

0x4432,	// (0x0005448e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4432,	// (0x0005448e) list_single_large_graphic_pane_g4_cp1

0x444c,	// (0x000544a8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x444c,	// (0x000544a8) list_single_large_graphic_pane_t1_cp2

0x5966,	// (0x000559c2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5966,	// (0x000559c2) list_single_graphic_heading_pane_g1_cp2

0xd61e,	// (0x0005d67a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd61e,	// (0x0005d67a) list_single_graphic_heading_pane_g4_cp2

0x43f2,	// (0x0005444e) list_single_graphic_heading_pane_g5_cp2

0x5972,	// (0x000559ce) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5972,	// (0x000559ce) list_single_graphic_heading_pane_t1_cp2

0xd62f,	// (0x0005d68b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd62f,	// (0x0005d68b) list_single_graphic_heading_pane_t2_cp2

0x5927,	// (0x00055983) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5927,	// (0x00055983) list_single_2graphic_pane_g1_cp2

0xd61e,	// (0x0005d67a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd61e,	// (0x0005d67a) list_single_2graphic_pane_g2_cp2

0x43f2,	// (0x0005444e) list_single_2graphic_pane_g3_cp2

0x5944,	// (0x000559a0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5944,	// (0x000559a0) list_single_2graphic_pane_g4_cp2

0x5950,	// (0x000559ac) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5950,	// (0x000559ac) list_single_2graphic_pane_t1_cp2

0x28b0,	// (0x0005290c) list_highlight_pane_g10_cp1

0x54ff,	// (0x0005555b) list_highlight_pane_g1_cp1

0x5507,	// (0x00055563) list_highlight_pane_g2_cp1

0x550f,	// (0x0005556b) list_highlight_pane_g3_cp1

0x5517,	// (0x00055573) list_highlight_pane_g4_cp1

0x551f,	// (0x0005557b) list_highlight_pane_g5_cp1

0x5527,	// (0x00055583) list_highlight_pane_g6_cp1

0x552f,	// (0x0005558b) list_highlight_pane_g7_cp1

0x5537,	// (0x00055593) list_highlight_pane_g8_cp1

0x553f,	// (0x0005559b) list_highlight_pane_g9_cp1

0xd5e4,	// (0x0005d640) form_field_slider_pane_t3

0xd5f2,	// (0x0005d64e) form_field_slider_pane_t4

0x543b,	// (0x00055497) slider_form_pane_ParamLimits

0x543b,	// (0x00055497) slider_form_pane

0x28ba,	// (0x00052916) control_abbreviations

0x28ba,	// (0x00052916) control_conventions

0x28ba,	// (0x00052916) control_definitions

0x28ba,	// (0x00052916) format_table_attribute

0x5c19,	// (0x00055c75) bg_popup_preview_window_pane_g9

0x28ba,	// (0x00052916) format_table_data2

0x28ba,	// (0x00052916) format_table_data3

0x28ba,	// (0x00052916) format_table_data_example

0x0008,

0x28ba,	// (0x00052916) intro_purpose

0xf8f5,	// (0x0005f951) bg_popup_preview_window_pane_g

0x28ba,	// (0x00052916) texts_category

0x28ba,	// (0x00052916) texts_graphics

0x4462,	// (0x000544be) text_digital

0x4471,	// (0x000544cd) text_primary

0x4480,	// (0x000544dc) text_primary_small

0x448f,	// (0x000544eb) text_secondary

0x449e,	// (0x000544fa) text_title

0x6314,	// (0x00056370) bg_passive_tab_pane_g1_cp3_srt

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp3_srt

0x631d,	// (0x00056379) bg_passive_tab_pane_g3_cp3_srt

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp3_srt_ParamLimits

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp3_srt

0x6326,	// (0x00056382) tabs_4_active_pane_srt_g1

0xda88,	// (0x0005dae4) tabs_4_active_pane_srt_t1_ParamLimits

0xda88,	// (0x0005dae4) tabs_4_active_pane_srt_t1

0x6314,	// (0x00056370) bg_active_tab_pane_g1_cp3_copy1

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp3_copy1

0x631d,	// (0x00056379) bg_active_tab_pane_g3_cp3_copy1

0x299a,	// (0x000529f6) tabs_2_long_active_pane_srt_ParamLimits

0x299a,	// (0x000529f6) tabs_2_long_active_pane_srt

0x299a,	// (0x000529f6) tabs_2_long_passive_pane_srt_ParamLimits

0x299a,	// (0x000529f6) tabs_2_long_passive_pane_srt

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp4_srt_ParamLimits

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp4_srt

0x605d,	// (0x000560b9) bg_passive_tab_pane_g1_cp4_srt

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp4_srt

0x6066,	// (0x000560c2) bg_passive_tab_pane_g3_cp4_srt

0x299a,	// (0x000529f6) bg_active_tab_pane_cp4_srt_ParamLimits

0x299a,	// (0x000529f6) bg_active_tab_pane_cp4_srt

0xd8b2,	// (0x0005d90e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd8b2,	// (0x0005d90e) tabs_2_long_active_pane_srt_t1

0x605d,	// (0x000560b9) bg_active_tab_pane_g1_cp4_srt

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp4_srt

0x6066,	// (0x000560c2) bg_active_tab_pane_g3_cp4_srt

0x2c15,	// (0x00052c71) tabs_3_long_active_pane_srt_ParamLimits

0x2c15,	// (0x00052c71) tabs_3_long_active_pane_srt

0x2c15,	// (0x00052c71) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2c15,	// (0x00052c71) tabs_3_long_passive_pane_cp_srt

0x2c15,	// (0x00052c71) tabs_3_long_passive_pane_srt_ParamLimits

0x2c15,	// (0x00052c71) tabs_3_long_passive_pane_srt

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp5_srt_ParamLimits

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp5_srt

0x4184,	// (0x000541e0) bg_passive_tab_pane_g1_cp5_srt

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp5_srt

0x418d,	// (0x000541e9) bg_passive_tab_pane_g3_cp5_srt

0x299a,	// (0x000529f6) bg_active_tab_pane_cp5_srt_ParamLimits

0x299a,	// (0x000529f6) bg_active_tab_pane_cp5_srt

0xd89c,	// (0x0005d8f8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd89c,	// (0x0005d8f8) tabs_3_long_active_pane_srt_t1

0x4184,	// (0x000541e0) bg_active_tab_pane_g1_cp5_srt

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp5_srt

0x418d,	// (0x000541e9) bg_active_tab_pane_g3_cp5_srt

0x603d,	// (0x00056099) navi_text_pane_srt_t1

0x6035,	// (0x00056091) navi_icon_pane_srt_g1

0x4665,	// (0x000546c1) midp_editing_number_pane_srt

0x44ad,	// (0x00054509) midp_ticker_pane_srt

0x466d,	// (0x000546c9) midp_ticker_pane_srt_g1

0x4675,	// (0x000546d1) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005f7d9) midp_ticker_pane_srt_g

0x467d,	// (0x000546d9) midp_ticker_pane_srt_t1

0x6026,	// (0x00056082) midp_editing_number_pane_t1_copy1

0x47ed,	// (0x00054849) listscroll_midp_pane

0x47ed,	// (0x00054849) midp_form_pane

0x4517,	// (0x00054573) midp_info_popup_window_ParamLimits

0x4517,	// (0x00054573) midp_info_popup_window

0x38c4,	// (0x00053920) bg_popup_sub_pane_cp50_ParamLimits

0x38c4,	// (0x00053920) bg_popup_sub_pane_cp50

0x5137,	// (0x00055193) listscroll_midp_info_pane_ParamLimits

0x5137,	// (0x00055193) listscroll_midp_info_pane

0x511f,	// (0x0005517b) listscroll_form_midp_pane_ParamLimits

0x511f,	// (0x0005517b) listscroll_form_midp_pane

0x512b,	// (0x00055187) scroll_bar_cp050

0xd5d8,	// (0x0005d634) list_midp_pane

0x6da6,	// (0x00056e02) signal_pane_g2_cp

0x5039,	// (0x00055095) listscroll_midp_info_pane_t1_ParamLimits

0x5039,	// (0x00055095) listscroll_midp_info_pane_t1

0x5051,	// (0x000550ad) listscroll_midp_info_pane_t2_ParamLimits

0x5051,	// (0x000550ad) listscroll_midp_info_pane_t2

0x508f,	// (0x000550eb) listscroll_midp_info_pane_t3_ParamLimits

0x508f,	// (0x000550eb) listscroll_midp_info_pane_t3

0x50c9,	// (0x00055125) listscroll_midp_info_pane_t4_ParamLimits

0x50c9,	// (0x00055125) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0005f88c) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0005f88c) listscroll_midp_info_pane_t

0x3988,	// (0x000539e4) scroll_pane_cp21

0x4fd7,	// (0x00055033) form_midp_field_choice_group_pane

0x4fe0,	// (0x0005503c) form_midp_field_text_pane

0x501f,	// (0x0005507b) form_midp_field_time_pane

0x5027,	// (0x00055083) form_midp_gauge_slider_pane

0x5030,	// (0x0005508c) form_midp_gauge_wait_pane

0x28ba,	// (0x00052916) form_midp_image_pane

0xc311,	// (0x0005c36d) list_single_midp_pane_ParamLimits

0xc311,	// (0x0005c36d) list_single_midp_pane

0xd5b6,	// (0x0005d612) form_midp_field_text_pane_t1

0x4d59,	// (0x00054db5) input_focus_pane_cp050

0x4fc6,	// (0x00055022) list_midp_form_text_pane

0x4f5e,	// (0x00054fba) form_midp_field_choice_group_pane_t1

0x4f6c,	// (0x00054fc8) input_focus_pane_cp051

0x4f80,	// (0x00054fdc) list_midp_choice_pane

0x28ba,	// (0x00052916) status_idle_pane

0x4f42,	// (0x00054f9e) form_midp_field_time_pane_t1

0x28b0,	// (0x0005290c) wait_anim_pane_g2_copy1

0x4f50,	// (0x00054fac) form_midp_field_time_pane_t2

0x0001,

0x45c5,	// (0x00054621) aid_navinavi_width_2_pane

0xf82b,	// (0x0005f887) form_midp_field_time_pane_t

0x28ba,	// (0x00052916) input_focus_pane_cp052

0x28ba,	// (0x00052916) bg_input_focus_pane_cp040

0x4f02,	// (0x00054f5e) form_midp_gauge_slider_pane_t1

0x4f10,	// (0x00054f6c) form_midp_gauge_slider_pane_t2

0xd59a,	// (0x0005d5f6) form_midp_gauge_slider_pane_t3

0xd5a8,	// (0x0005d604) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0005f87e) form_midp_gauge_slider_pane_t

0x4f3a,	// (0x00054f96) form_midp_slider_pane

0x299a,	// (0x000529f6) bg_input_focus_pane_cp041_ParamLimits

0x299a,	// (0x000529f6) bg_input_focus_pane_cp041

0x4ecf,	// (0x00054f2b) form_midp_gauge_wait_pane_t1_ParamLimits

0x4ecf,	// (0x00054f2b) form_midp_gauge_wait_pane_t1

0x4ee1,	// (0x00054f3d) form_midp_gauge_wait_pane_t2_ParamLimits

0x4ee1,	// (0x00054f3d) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0005f879) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0005f879) form_midp_gauge_wait_pane_t

0x4ef3,	// (0x00054f4f) form_midp_wait_pane_ParamLimits

0x4ef3,	// (0x00054f4f) form_midp_wait_pane

0x4e99,	// (0x00054ef5) form_midp_image_pane_g1

0x4ea2,	// (0x00054efe) form_midp_image_pane_t1

0x4eb1,	// (0x00054f0d) form_midp_image_pane_t2

0x4ec0,	// (0x00054f1c) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0005f872) form_midp_image_pane_t

0x4e90,	// (0x00054eec) list_single_midp_pane_g1

0x1437,	// (0x00051493) list_single_midp_pane_t1

0xd585,	// (0x0005d5e1) list_midp_form_item_pane_ParamLimits

0xd585,	// (0x0005d5e1) list_midp_form_item_pane

0x456d,	// (0x000545c9) list_midp_form_item_pane_t1

0x457c,	// (0x000545d8) midp_ticker_pane_g1

0x4588,	// (0x000545e4) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005f7bf) midp_ticker_pane_g

0x4594,	// (0x000545f0) midp_ticker_pane_t1

0x6277,	// (0x000562d3) midp_editing_number_pane_t1

0x6255,	// (0x000562b1) midp_editing_number_pane

0x6264,	// (0x000562c0) midp_ticker_pane

0x6016,	// (0x00056072) ai_message_heading_pane

0x28ba,	// (0x00052916) bg_popup_window_pane_cp14

0x601e,	// (0x0005607a) listscroll_ai_message_pane

0x5fa0,	// (0x00055ffc) ai_message_heading_pane_g1_ParamLimits

0x5fa0,	// (0x00055ffc) ai_message_heading_pane_g1

0x5fac,	// (0x00056008) ai_message_heading_pane_g2_ParamLimits

0x5fac,	// (0x00056008) ai_message_heading_pane_g2

0x5fb8,	// (0x00056014) ai_message_heading_pane_g3_ParamLimits

0x5fb8,	// (0x00056014) ai_message_heading_pane_g3

0x5fc4,	// (0x00056020) ai_message_heading_pane_g4_ParamLimits

0x5fc4,	// (0x00056020) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0005f9b3) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0005f9b3) ai_message_heading_pane_g

0x5fd0,	// (0x0005602c) ai_message_heading_pane_t1_ParamLimits

0x5fd0,	// (0x0005602c) ai_message_heading_pane_t1

0x5fea,	// (0x00056046) ai_message_heading_pane_t2_ParamLimits

0x5fea,	// (0x00056046) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0005f9bc) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0005f9bc) ai_message_heading_pane_t

0x5ffc,	// (0x00056058) bg_popup_heading_pane_cp1_ParamLimits

0x5ffc,	// (0x00056058) bg_popup_heading_pane_cp1

0x5f8e,	// (0x00055fea) list_ai_message_pane_ParamLimits

0x5f8e,	// (0x00055fea) list_ai_message_pane

0x3988,	// (0x000539e4) scroll_pane_cp10

0x5f2a,	// (0x00055f86) list_ai_message_pane_g1

0x5f32,	// (0x00055f8e) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0005f990) list_ai_message_pane_g

0x5f3a,	// (0x00055f96) list_ai_message_pane_t1_ParamLimits

0x5f3a,	// (0x00055f96) list_ai_message_pane_t1

0x5f4f,	// (0x00055fab) list_ai_message_pane_t2_ParamLimits

0x5f4f,	// (0x00055fab) list_ai_message_pane_t2

0x5f64,	// (0x00055fc0) list_ai_message_pane_t3_ParamLimits

0x5f64,	// (0x00055fc0) list_ai_message_pane_t3

0x5f79,	// (0x00055fd5) list_ai_message_pane_t4_ParamLimits

0x5f79,	// (0x00055fd5) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0005f995) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0005f995) list_ai_message_pane_t

0xd87b,	// (0x0005d8d7) cell_ai_soft_ind_pane_ParamLimits

0xd87b,	// (0x0005d8d7) cell_ai_soft_ind_pane

0x45a6,	// (0x00054602) cell_ai_soft_ind_pane_g1_ParamLimits

0x45a6,	// (0x00054602) cell_ai_soft_ind_pane_g1

0x28ba,	// (0x00052916) grid_highlight_cp1

0x45b3,	// (0x0005460f) text_secondary_cp56_ParamLimits

0x45b3,	// (0x0005460f) text_secondary_cp56

0x5eea,	// (0x00055f46) example_general_pane_ParamLimits

0x5eea,	// (0x00055f46) example_general_pane

0x5ef6,	// (0x00055f52) example_parent_pane_g1_ParamLimits

0x5ef6,	// (0x00055f52) example_parent_pane_g1

0x5f02,	// (0x00055f5e) example_parent_pane_t1_ParamLimits

0x5f02,	// (0x00055f5e) example_parent_pane_t1

0xbfbb,	// (0x0005c017) popup_preview_text_window_ParamLimits

0xbfbb,	// (0x0005c017) popup_preview_text_window

0x43de,	// (0x0005443a) list_single_pane_cp2_g4

0x2ccb,	// (0x00052d27) bg_popup_preview_window_pane_ParamLimits

0x2ccb,	// (0x00052d27) bg_popup_preview_window_pane

0x5c21,	// (0x00055c7d) popup_preview_text_window_t1_ParamLimits

0x5c21,	// (0x00055c7d) popup_preview_text_window_t1

0x5c3f,	// (0x00055c9b) popup_preview_text_window_t2_ParamLimits

0x5c3f,	// (0x00055c9b) popup_preview_text_window_t2

0x5c88,	// (0x00055ce4) popup_preview_text_window_t3_ParamLimits

0x5c88,	// (0x00055ce4) popup_preview_text_window_t3

0x5ccd,	// (0x00055d29) popup_preview_text_window_t4_ParamLimits

0x5ccd,	// (0x00055d29) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0005f964) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0005f964) popup_preview_text_window_t

0x5d4b,	// (0x00055da7) scroll_pane_cp11

0x4ce5,	// (0x00054d41) bg_popup_preview_window_pane_g1

0x5be1,	// (0x00055c3d) bg_popup_preview_window_pane_g2

0x5be9,	// (0x00055c45) bg_popup_preview_window_pane_g3

0x5bf1,	// (0x00055c4d) bg_popup_preview_window_pane_g4

0x5bf9,	// (0x00055c55) bg_popup_preview_window_pane_g5

0x5c01,	// (0x00055c5d) bg_popup_preview_window_pane_g6

0x5c09,	// (0x00055c65) bg_popup_preview_window_pane_g7

0x5c11,	// (0x00055c6d) bg_popup_preview_window_pane_g8

0xf03c,	// (0x0005f098) aid_popup_width_pane

0xbf37,	// (0x0005bf93) popup_midp_note_alarm_window_ParamLimits

0xbf37,	// (0x0005bf93) popup_midp_note_alarm_window

0x3818,	// (0x00053874) data_form_pane_ParamLimits

0xb8c5,	// (0x0005b921) form_field_data_pane_g1

0xb8cf,	// (0x0005b92b) form_field_data_pane_t1_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_ParamLimits

0x0486,	// (0x000504e2) data_form_wide_pane_ParamLimits

0x0497,	// (0x000504f3) form_field_data_wide_pane_g1

0x04a3,	// (0x000504ff) form_field_data_wide_pane_t1_ParamLimits

0x3589,	// (0x000535e5) input_focus_pane_cp6_ParamLimits

0xcdaf,	// (0x0005ce0b) input_popup_find_pane_g1_ParamLimits

0xcdaf,	// (0x0005ce0b) input_popup_find_pane_g1

0x0719,	// (0x00050775) aid_navi_side_left_pane

0x072e,	// (0x0005078a) aid_navi_side_right_pane

0x55fa,	// (0x00055656) bg_popup_window_pane_cp30_ParamLimits

0x55fa,	// (0x00055656) bg_popup_window_pane_cp30

0x5674,	// (0x000556d0) popup_midp_note_alarm_window_g1_ParamLimits

0x5674,	// (0x000556d0) popup_midp_note_alarm_window_g1

0x56a4,	// (0x00055700) popup_midp_note_alarm_window_t1_ParamLimits

0x56a4,	// (0x00055700) popup_midp_note_alarm_window_t1

0x5745,	// (0x000557a1) popup_midp_note_alarm_window_t2_ParamLimits

0x5745,	// (0x000557a1) popup_midp_note_alarm_window_t2

0x57f3,	// (0x0005584f) popup_midp_note_alarm_window_t3_ParamLimits

0x57f3,	// (0x0005584f) popup_midp_note_alarm_window_t3

0x5825,	// (0x00055881) popup_midp_note_alarm_window_t4_ParamLimits

0x5825,	// (0x00055881) popup_midp_note_alarm_window_t4

0x584b,	// (0x000558a7) popup_midp_note_alarm_window_t5_ParamLimits

0x584b,	// (0x000558a7) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0005f901) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0005f901) popup_midp_note_alarm_window_t

0x58f7,	// (0x00055953) wait_bar_pane_cp1_ParamLimits

0x58f7,	// (0x00055953) wait_bar_pane_cp1

0x28ba,	// (0x00052916) wait_anim_pane_copy1

0x28ba,	// (0x00052916) wait_border_pane_copy1

0x52e0,	// (0x0005533c) wait_border_pane_g1_copy1

0x04bd,	// (0x00050519) form_field_popup_pane_g1

0xb8e9,	// (0x0005b945) form_field_popup_pane_t1_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_cp7_ParamLimits

0x3846,	// (0x000538a2) list_form_pane_ParamLimits

0x04dd,	// (0x00050539) form_field_popup_wide_pane_g1

0x04e5,	// (0x00050541) form_field_popup_wide_pane_t1_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_cp8_ParamLimits

0x3852,	// (0x000538ae) list_form_wide_pane_ParamLimits

0x63a0,	// (0x000563fc) aid_size_cell_graphic_pane

0xb968,	// (0x0005b9c4) data_form_pane_t1_ParamLimits

0xc484,	// (0x0005c4e0) data_form_wide_pane_t1_ParamLimits

0xd210,	// (0x0005d26c) bg_status_flat_pane

0xb2d1,	// (0x0005b32d) title_pane_t1_ParamLimits

0x2962,	// (0x000529be) title_pane_t2_ParamLimits

0x2988,	// (0x000529e4) title_pane_t3_ParamLimits

0xf55d,	// (0x0005f5b9) title_pane_t_ParamLimits

0x3e05,	// (0x00053e61) level_1_signal_ParamLimits

0x3e17,	// (0x00053e73) level_2_signal_ParamLimits

0x3e2a,	// (0x00053e86) level_3_signal_ParamLimits

0x3e3d,	// (0x00053e99) level_4_signal_ParamLimits

0x3e50,	// (0x00053eac) level_5_signal_ParamLimits

0x3e63,	// (0x00053ebf) level_6_signal_ParamLimits

0x3e76,	// (0x00053ed2) level_7_signal_ParamLimits

0x3e05,	// (0x00053e61) level_1_battery_ParamLimits

0x3e17,	// (0x00053e73) level_2_battery_ParamLimits

0x3e2a,	// (0x00053e86) level_3_battery_ParamLimits

0x3e3d,	// (0x00053e99) level_4_battery_ParamLimits

0x3e50,	// (0x00053eac) level_5_battery_ParamLimits

0x3e63,	// (0x00053ebf) level_6_battery_ParamLimits

0x3e76,	// (0x00053ed2) level_7_battery_ParamLimits

0x54ff,	// (0x0005555b) bg_status_flat_pane_g1

0x5507,	// (0x00055563) bg_status_flat_pane_g2

0x550f,	// (0x0005556b) bg_status_flat_pane_g3

0x5517,	// (0x00055573) bg_status_flat_pane_g4

0x551f,	// (0x0005557b) bg_status_flat_pane_g5

0x5527,	// (0x00055583) bg_status_flat_pane_g6

0x552f,	// (0x0005558b) bg_status_flat_pane_g7

0xb365,	// (0x0005b3c1) tabs_3_active_pane_t1_ParamLimits

0xb365,	// (0x0005b3c1) tabs_3_passive_pane_t1_ParamLimits

0xb37f,	// (0x0005b3db) tabs_4_active_pane_t1_ParamLimits

0xb37f,	// (0x0005b3db) tabs_4_1_passive_pane_t1_ParamLimits

0xcdc5,	// (0x0005ce21) tabs_2_active_pane_t1_ParamLimits

0xcdc5,	// (0x0005ce21) tabs_2_passive_pane_t1_ParamLimits

0x299a,	// (0x000529f6) bg_active_tab_pane_cp4_ParamLimits

0xcdd7,	// (0x0005ce33) tabs_2_long_active_pane_t1_ParamLimits

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp4_ParamLimits

0x1318,	// (0x00051374) list_single_midp_graphic_pane_t1_ParamLimits

0x299a,	// (0x000529f6) bg_active_tab_pane_cp5_ParamLimits

0xcdea,	// (0x0005ce46) tabs_3_long_active_pane_t1_ParamLimits

0x47ed,	// (0x00054849) bg_passive_tab_pane_cp5_ParamLimits

0x1318,	// (0x00051374) list_single_midp_graphic_pane_t1

0xd210,	// (0x0005d26c) bg_status_flat_pane_ParamLimits

0x4983,	// (0x000549df) indicator_pane_cp2_ParamLimits

0x4983,	// (0x000549df) indicator_pane_cp2

0xd388,	// (0x0005d3e4) navi_pane_srt_ParamLimits

0xd388,	// (0x0005d3e4) navi_pane_srt

0x4acc,	// (0x00054b28) popup_clock_digital_analogue_window_cp1

0x2a77,	// (0x00052ad3) indicator_pane_t1

0x44ad,	// (0x00054509) copy_highlight_pane

0x44ad,	// (0x00054509) cursor_graphics_pane

0x44ad,	// (0x00054509) graphic_within_text_pane

0x44ad,	// (0x00054509) link_highlight_pane

0x5d0e,	// (0x00055d6a) popup_preview_text_window_t5_ParamLimits

0x5d0e,	// (0x00055d6a) popup_preview_text_window_t5

0x45cd,	// (0x00054629) cursor_digital_pane

0x45cd,	// (0x00054629) cursor_primary_pane

0x45de,	// (0x0005463a) cursor_primary_small_pane

0x45e6,	// (0x00054642) cursor_secondary_pane

0x45ee,	// (0x0005464a) cursor_title_pane

0x45cd,	// (0x00054629) link_highlight_digital_pane

0x45d5,	// (0x00054631) link_highlight_primary_pane

0x45de,	// (0x0005463a) link_highlight_primary_small_pane

0x45e6,	// (0x00054642) link_highlight_secondary_pane

0x45ee,	// (0x0005464a) link_highlight_title_pane

0x45cd,	// (0x00054629) copy_highlight_digital_pane

0x45cd,	// (0x00054629) copy_highlight_primary_pane

0x45de,	// (0x0005463a) copy_highlight_primary_small_pane

0x45e6,	// (0x00054642) copy_highlight_secondary_pane

0x45ee,	// (0x0005464a) copy_highlight_title_pane

0x45e6,	// (0x00054642) graphic_text_digital_pane

0x559d,	// (0x000555f9) graphic_text_primary_pane

0x55a6,	// (0x00055602) graphic_text_primary_small_pane

0x45de,	// (0x0005463a) graphic_text_secondary_pane

0x45cd,	// (0x00054629) graphic_text_title_pane

0xd0e7,	// (0x0005d143) cursor_primary_pane_g1

0x558f,	// (0x000555eb) cursor_text_primary_t1

0xd614,	// (0x0005d670) cursor_primary_small_pane_g1

0x5581,	// (0x000555dd) cursor_text_primary_small_t1

0xd60a,	// (0x0005d666) cursor_primary_small_pane_g1_copy1

0x5569,	// (0x000555c5) cursor_text_primary_small_t1_copy1

0x5547,	// (0x000555a3) cursor_text_title_t1

0xd600,	// (0x0005d65c) cursor_title_pane_g1

0xd0e7,	// (0x0005d143) cursor_digital_pane_g1

0x4600,	// (0x0005465c) cursor_text_digital_t1

0x4625,	// (0x00054681) link_highlight_primary_pane_g1

0x54f0,	// (0x0005554c) link_highlight_primary_pane_t1

0x460e,	// (0x0005466a) link_highlight_primary_small_pane_g1

0x4616,	// (0x00054672) link_highlight_primary_small_pane_t1

0x4625,	// (0x00054681) link_highlight_secondary_pane_g1

0x462d,	// (0x00054689) link_highlight_secondary_pane_t1

0x5464,	// (0x000554c0) link_highlight_title_pane_g1

0x546c,	// (0x000554c8) link_highlight_title_pane_t1

0x544d,	// (0x000554a9) link_highlight_digital_pane_g1

0x5455,	// (0x000554b1) link_highlight_digital_pane_t1

0x5325,	// (0x00055381) copy_highlight_primary_pane_g1

0x532d,	// (0x00055389) copy_highlight_primary_pane_t1

0x52ff,	// (0x0005535b) copy_highlight_primary_small_pane_g1

0x5316,	// (0x00055372) copy_highlight_primary_small_pane_t1

0x463c,	// (0x00054698) copy_highlight_secondary_pane_g1

0x4644,	// (0x000546a0) copy_highlight_secondary_pane_t1

0x52ff,	// (0x0005535b) copy_highlight_title_pane_g1

0x5307,	// (0x00055363) copy_highlight_title_pane_t1

0x5325,	// (0x00055381) copy_highlight_digital_pane_g1

0x656a,	// (0x000565c6) copy_highlight_digital_pane_t1

0x64be,	// (0x0005651a) graphic_text_primary_pane_g1

0x654e,	// (0x000565aa) graphic_text_primary_pane_t1

0x655c,	// (0x000565b8) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0005fa30) graphic_text_primary_pane_t

0x652a,	// (0x00056586) graphic_text_primary_small_pane_g1

0x6532,	// (0x0005658e) graphic_text_primary_small_pane_t1

0x6540,	// (0x0005659c) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0005fa2b) graphic_text_primary_small_pane_t

0x6506,	// (0x00056562) graphic_text_secondary_pane_g1

0x650e,	// (0x0005656a) graphic_text_secondary_pane_t1

0x651c,	// (0x00056578) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0005fa26) graphic_text_secondary_pane_t

0x64e2,	// (0x0005653e) graphic_text_title_pane_g1

0x64ea,	// (0x00056546) graphic_text_title_pane_t1

0x64f8,	// (0x00056554) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0005fa21) graphic_text_title_pane_t

0x64be,	// (0x0005651a) graphic_text_digital_pane_g1

0x64c6,	// (0x00056522) graphic_text_digital_pane_t1

0x64d4,	// (0x00056530) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0005fa1c) graphic_text_digital_pane_t

0x299a,	// (0x000529f6) navi_icon_pane_srt_ParamLimits

0x299a,	// (0x000529f6) navi_icon_pane_srt

0x28ba,	// (0x00052916) navi_midp_pane_srt

0x28ba,	// (0x00052916) navi_navi_pane_srt

0x299a,	// (0x000529f6) navi_text_pane_srt_ParamLimits

0x299a,	// (0x000529f6) navi_text_pane_srt

0x6489,	// (0x000564e5) navi_navi_icon_text_pane_srt

0x6491,	// (0x000564ed) navi_navi_pane_srt_g1_ParamLimits

0x6491,	// (0x000564ed) navi_navi_pane_srt_g1

0x64a3,	// (0x000564ff) navi_navi_pane_srt_g2_ParamLimits

0x64a3,	// (0x000564ff) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0005fa17) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0005fa17) navi_navi_pane_srt_g

0x64b5,	// (0x00056511) navi_navi_tabs_pane_srt

0x6489,	// (0x000564e5) navi_navi_text_pane_srt

0x6489,	// (0x000564e5) navi_navi_volume_pane_srt

0x647a,	// (0x000564d6) navi_navi_text_pane_srt_t1

0x17ea,	// (0x00051846) navi_navi_volume_pane_srt_g1

0x17f2,	// (0x0005184e) volume_small_pane_srt_ParamLimits

0x17f2,	// (0x0005184e) volume_small_pane_srt

0x0a67,	// (0x00050ac3) volume_small_pane_srt_g1_ParamLimits

0x0a67,	// (0x00050ac3) volume_small_pane_srt_g1

0x0a77,	// (0x00050ad3) volume_small_pane_srt_g2_ParamLimits

0x0a77,	// (0x00050ad3) volume_small_pane_srt_g2

0x0a88,	// (0x00050ae4) volume_small_pane_srt_g3_ParamLimits

0x0a88,	// (0x00050ae4) volume_small_pane_srt_g3

0x0a99,	// (0x00050af5) volume_small_pane_srt_g4_ParamLimits

0x0a99,	// (0x00050af5) volume_small_pane_srt_g4

0x0aaa,	// (0x00050b06) volume_small_pane_srt_g5_ParamLimits

0x0aaa,	// (0x00050b06) volume_small_pane_srt_g5

0x0abb,	// (0x00050b17) volume_small_pane_srt_g6_ParamLimits

0x0abb,	// (0x00050b17) volume_small_pane_srt_g6

0x0acc,	// (0x00050b28) volume_small_pane_srt_g7_ParamLimits

0x0acc,	// (0x00050b28) volume_small_pane_srt_g7

0x0add,	// (0x00050b39) volume_small_pane_srt_g8_ParamLimits

0x0add,	// (0x00050b39) volume_small_pane_srt_g8

0x0aee,	// (0x00050b4a) volume_small_pane_srt_g9_ParamLimits

0x0aee,	// (0x00050b4a) volume_small_pane_srt_g9

0x0aff,	// (0x00050b5b) volume_small_pane_srt_g10_ParamLimits

0x0aff,	// (0x00050b5b) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0005f7c4) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0005f7c4) volume_small_pane_srt_g

0x2d74,	// (0x00052dd0) query_popup_data_pane_cp2

0x6460,	// (0x000564bc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6460,	// (0x000564bc) navi_navi_icon_text_pane_srt_t1

0x559d,	// (0x000555f9) navi_tabs_2_long_pane_srt

0x559d,	// (0x000555f9) navi_tabs_2_pane_srt

0x559d,	// (0x000555f9) navi_tabs_3_long_pane_srt

0x559d,	// (0x000555f9) navi_tabs_3_pane_srt

0x559d,	// (0x000555f9) navi_tabs_4_pane_srt

0x17ca,	// (0x00051826) tabs_2_active_pane_srt_ParamLimits

0x17ca,	// (0x00051826) tabs_2_active_pane_srt

0x17da,	// (0x00051836) tabs_2_passive_pane_srt_ParamLimits

0x17da,	// (0x00051836) tabs_2_passive_pane_srt

0x4d59,	// (0x00054db5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d59,	// (0x00054db5) bg_passive_tab_pane_cp1_srt

0x642c,	// (0x00056488) bg_passive_tab_pane_g1_cp1_srt

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp1_srt

0x6435,	// (0x00056491) bg_passive_tab_pane_g3_cp1_srt

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp1_srt_ParamLimits

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp1_srt

0x643e,	// (0x0005649a) tabs_2_active_pane_srt_g1

0xdb05,	// (0x0005db61) tabs_2_active_pane_srt_t1_ParamLimits

0xdb05,	// (0x0005db61) tabs_2_active_pane_srt_t1

0x642c,	// (0x00056488) bg_active_tab_pane_g1_cp1_srt

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp1_srt

0x6435,	// (0x00056491) bg_active_tab_pane_g3_cp1_srt

0x1797,	// (0x000517f3) tabs_3_active_pane_srt_ParamLimits

0x1797,	// (0x000517f3) tabs_3_active_pane_srt

0x17a8,	// (0x00051804) tabs_3_passive_pane_cp_srt_ParamLimits

0x17a8,	// (0x00051804) tabs_3_passive_pane_cp_srt

0x17b9,	// (0x00051815) tabs_3_passive_pane_srt_ParamLimits

0x17b9,	// (0x00051815) tabs_3_passive_pane_srt

0x4d59,	// (0x00054db5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d59,	// (0x00054db5) bg_passive_tab_pane_cp2_srt

0x4653,	// (0x000546af) bg_passive_tab_pane_g1_cp2_srt

0x40ee,	// (0x0005414a) bg_passive_tab_pane_g2_cp2_srt

0x465c,	// (0x000546b8) bg_passive_tab_pane_g3_cp2_srt

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp2_srt_ParamLimits

0x2c15,	// (0x00052c71) bg_active_tab_pane_cp2_srt

0x6412,	// (0x0005646e) tabs_3_active_pane_srt_g1

0xdaef,	// (0x0005db4b) tabs_3_active_pane_srt_t1_ParamLimits

0xdaef,	// (0x0005db4b) tabs_3_active_pane_srt_t1

0x4653,	// (0x000546af) bg_active_tab_pane_g1_cp2_srt

0x40ee,	// (0x0005414a) bg_active_tab_pane_g2_cp2_srt

0x465c,	// (0x000546b8) bg_active_tab_pane_g3_cp2_srt

0x174f,	// (0x000517ab) tabs_4_active_pane_srt_ParamLimits

0x174f,	// (0x000517ab) tabs_4_active_pane_srt

0x1761,	// (0x000517bd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1761,	// (0x000517bd) tabs_4_passive_pane_cp2_srt

0x0c64,	// (0x00050cc0) aid_size_cell_toolbar

0x60ce,	// (0x0005612a) main_idle_act_pane_ParamLimits

0x0e25,	// (0x00050e81) popup_large_graphic_colour_window_ParamLimits

0xc247,	// (0x0005c2a3) popup_toolbar_window_ParamLimits

0xc247,	// (0x0005c2a3) popup_toolbar_window

0x6286,	// (0x000562e2) list_single_graphic_2heading_pane_ParamLimits

0x6286,	// (0x000562e2) list_single_graphic_2heading_pane

0x3bb8,	// (0x00053c14) aid_size_cell_apps_grid_lsc_pane

0x3bca,	// (0x00053c26) aid_size_cell_apps_grid_prt_pane

0x47ed,	// (0x00054849) bg_wml_button_pane_cp1_ParamLimits

0x47ed,	// (0x00054849) bg_wml_button_pane_cp1

0xd5b6,	// (0x0005d612) form_midp_field_text_pane_t1_ParamLimits

0x4d59,	// (0x00054db5) input_focus_pane_cp050_ParamLimits

0x4fc6,	// (0x00055022) list_midp_form_text_pane_ParamLimits

0x4f6c,	// (0x00054fc8) input_focus_pane_cp051_ParamLimits

0x4f80,	// (0x00054fdc) list_midp_choice_pane_ParamLimits

0xd553,	// (0x0005d5af) list_single_2graphic_pane_cp3_ParamLimits

0xd553,	// (0x0005d5af) list_single_2graphic_pane_cp3

0xd566,	// (0x0005d5c2) list_single_midp_graphic_pane_ParamLimits

0xd566,	// (0x0005d5c2) list_single_midp_graphic_pane

0xf071,	// (0x0005f0cd) list_single_graphic_2heading_pane_g1_ParamLimits

0xf071,	// (0x0005f0cd) list_single_graphic_2heading_pane_g1

0xf07d,	// (0x0005f0d9) list_single_graphic_2heading_pane_g4_ParamLimits

0xf07d,	// (0x0005f0d9) list_single_graphic_2heading_pane_g4

0xf089,	// (0x0005f0e5) list_single_graphic_2heading_pane_g5_ParamLimits

0xf089,	// (0x0005f0e5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005f817) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005f817) list_single_graphic_2heading_pane_g

0xf095,	// (0x0005f0f1) list_single_graphic_2heading_pane_t1_ParamLimits

0xf095,	// (0x0005f0f1) list_single_graphic_2heading_pane_t1

0xf0a9,	// (0x0005f105) list_single_graphic_2heading_pane_t2_ParamLimits

0xf0a9,	// (0x0005f105) list_single_graphic_2heading_pane_t2

0xf0c5,	// (0x0005f121) list_single_graphic_2heading_pane_t3_ParamLimits

0xf0c5,	// (0x0005f121) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0005f81e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0005f81e) list_single_graphic_2heading_pane_t

0x4c23,	// (0x00054c7f) bg_popup_sub_pane_cp2

0x4c4d,	// (0x00054ca9) grid_toobar_pane

0x1239,	// (0x00051295) cell_toolbar_pane_ParamLimits

0x1239,	// (0x00051295) cell_toolbar_pane

0x4c89,	// (0x00054ce5) cell_toolbar_pane_g1_ParamLimits

0x4c89,	// (0x00054ce5) cell_toolbar_pane_g1

0x4c9d,	// (0x00054cf9) cell_toolbar_pane_g2_ParamLimits

0x4c9d,	// (0x00054cf9) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0005f82c) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0005f82c) cell_toolbar_pane_g

0x4cbf,	// (0x00054d1b) grid_highlight_pane_cp2_ParamLimits

0x4cbf,	// (0x00054d1b) grid_highlight_pane_cp2

0x4cd9,	// (0x00054d35) toolbar_button_pane

0x4ce5,	// (0x00054d41) toolbar_button_pane_g1

0x4ced,	// (0x00054d49) toolbar_button_pane_g2

0x4cf5,	// (0x00054d51) toolbar_button_pane_g3

0x4cfd,	// (0x00054d59) toolbar_button_pane_g4

0x4d05,	// (0x00054d61) toolbar_button_pane_g5

0x4d0d,	// (0x00054d69) toolbar_button_pane_g6

0x4d15,	// (0x00054d71) toolbar_button_pane_g7

0x4d1d,	// (0x00054d79) toolbar_button_pane_g8

0x4d25,	// (0x00054d81) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0005f831) toolbar_button_pane_g

0x1293,	// (0x000512ef) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1293,	// (0x000512ef) list_single_2graphic_pane_g1_cp3

0xc29f,	// (0x0005c2fb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc29f,	// (0x0005c2fb) list_single_2graphic_pane_g2_cp3

0x12b0,	// (0x0005130c) list_single_2graphic_pane_g3_cp3

0x12b8,	// (0x00051314) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12b8,	// (0x00051314) list_single_2graphic_pane_g4_cp3

0x12c4,	// (0x00051320) list_single_2graphic_pane_t1_cp3_ParamLimits

0x12c4,	// (0x00051320) list_single_2graphic_pane_t1_cp3

0x130c,	// (0x00051368) list_single_midp_graphic_pane_g2_ParamLimits

0x130c,	// (0x00051368) list_single_midp_graphic_pane_g2

0xf069,	// (0x0005f0c5) aid_zoom_text_primary

0x0c6c,	// (0x00050cc8) aid_zoom_text_secondary

0x4710,	// (0x0005476c) status_small_pane_g7_ParamLimits

0x4710,	// (0x0005476c) status_small_pane_g7

0x4733,	// (0x0005478f) status_small_pane_t1_ParamLimits

0xb2ad,	// (0x0005b309) title_pane_g2

0x0003,

0xf554,	// (0x0005f5b0) title_pane_g

0xccc2,	// (0x0005cd1e) aid_size_cell_colour_1_pane_ParamLimits

0xccc2,	// (0x0005cd1e) aid_size_cell_colour_1_pane

0xccd6,	// (0x0005cd32) aid_size_cell_colour_2_pane_ParamLimits

0xccd6,	// (0x0005cd32) aid_size_cell_colour_2_pane

0xccea,	// (0x0005cd46) aid_size_cell_colour_3_pane_ParamLimits

0xccea,	// (0x0005cd46) aid_size_cell_colour_3_pane

0xccfe,	// (0x0005cd5a) aid_size_cell_colour_4_pane_ParamLimits

0xccfe,	// (0x0005cd5a) aid_size_cell_colour_4_pane

0x0656,	// (0x000506b2) title_pane_stacon_g1_ParamLimits

0x0656,	// (0x000506b2) title_pane_stacon_g1

0x5384,	// (0x000553e0) popup_note_wait_window_g3_ParamLimits

0x5384,	// (0x000553e0) popup_note_wait_window_g3

0x53fa,	// (0x00055456) popup_note_wait_window_t5_ParamLimits

0x53fa,	// (0x00055456) popup_note_wait_window_t5

0x28ba,	// (0x00052916) main_feb_china_hwr_fs_writing_pane

0xbc55,	// (0x0005bcb1) popup_feb_china_hwr_fs_window_ParamLimits

0xbc55,	// (0x0005bcb1) popup_feb_china_hwr_fs_window

0xc2b0,	// (0x0005c30c) aid_size_cell_hwr_fs_ParamLimits

0xc2b0,	// (0x0005c30c) aid_size_cell_hwr_fs

0x4d59,	// (0x00054db5) bg_popup_sub_pane_cp3_ParamLimits

0x4d59,	// (0x00054db5) bg_popup_sub_pane_cp3

0xc2c5,	// (0x0005c321) grid_hwr_fs_pane_ParamLimits

0xc2c5,	// (0x0005c321) grid_hwr_fs_pane

0x13c7,	// (0x00051423) linegrid_hwr_fs_pane_ParamLimits

0x13c7,	// (0x00051423) linegrid_hwr_fs_pane

0xc2dd,	// (0x0005c339) cell_hwr_fs_pane_ParamLimits

0xc2dd,	// (0x0005c339) cell_hwr_fs_pane

0x4d65,	// (0x00054dc1) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d65,	// (0x00054dc1) linegrid_hwr_fs_pane_g1

0xd527,	// (0x0005d583) linegrid_hwr_fs_pane_g2_ParamLimits

0xd527,	// (0x0005d583) linegrid_hwr_fs_pane_g2

0x4d83,	// (0x00054ddf) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d83,	// (0x00054ddf) linegrid_hwr_fs_pane_g3

0x13f9,	// (0x00051455) linegrid_hwr_fs_pane_g4_ParamLimits

0x13f9,	// (0x00051455) linegrid_hwr_fs_pane_g4

0x1413,	// (0x0005146f) linegrid_hwr_fs_pane_g5_ParamLimits

0x1413,	// (0x0005146f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0005f857) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0005f857) linegrid_hwr_fs_pane_g

0x4d8f,	// (0x00054deb) cell_hwr_fs_pane_g1_ParamLimits

0x4d8f,	// (0x00054deb) cell_hwr_fs_pane_g1

0x4b5a,	// (0x00054bb6) cell_hwr_fs_pane_g2_ParamLimits

0x4b5a,	// (0x00054bb6) cell_hwr_fs_pane_g2

0xd539,	// (0x0005d595) cell_hwr_fs_pane_g3_ParamLimits

0xd539,	// (0x0005d595) cell_hwr_fs_pane_g3

0xd546,	// (0x0005d5a2) cell_hwr_fs_pane_g4_ParamLimits

0xd546,	// (0x0005d5a2) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0005f862) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0005f862) cell_hwr_fs_pane_g

0xc303,	// (0x0005c35f) cell_hwr_fs_pane_t1

0x28ba,	// (0x00052916) grid_highlight_pane_cp6

0x28ba,	// (0x00052916) main_idle_act2_pane

0x396f,	// (0x000539cb) aid_inside_area_popup_secondary

0xd67b,	// (0x0005d6d7) aid_inside_area_window_primary_ParamLimits

0xd67b,	// (0x0005d6d7) aid_inside_area_window_primary

0x6579,	// (0x000565d5) ai2_news_ticker_pane

0x65c3,	// (0x0005661f) aid_size_cell_ai1_link_ParamLimits

0x65c3,	// (0x0005661f) aid_size_cell_ai1_link

0xdb1b,	// (0x0005db77) popup_ai2_data_window_ParamLimits

0xdb1b,	// (0x0005db77) popup_ai2_data_window

0x65f3,	// (0x0005664f) popup_ai2_link_window_ParamLimits

0x65f3,	// (0x0005664f) popup_ai2_link_window

0x4d59,	// (0x00054db5) bg_popup_sub_pane_cp4_ParamLimits

0x4d59,	// (0x00054db5) bg_popup_sub_pane_cp4

0x6607,	// (0x00056663) grid_ai2_link_pane_ParamLimits

0x6607,	// (0x00056663) grid_ai2_link_pane

0x661e,	// (0x0005667a) popup_ai2_link_window_g1_ParamLimits

0x661e,	// (0x0005667a) popup_ai2_link_window_g1

0x662a,	// (0x00056686) popup_ai2_link_window_g2_ParamLimits

0x662a,	// (0x00056686) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0005fa35) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0005fa35) popup_ai2_link_window_g

0x6639,	// (0x00056695) ai2_mp_button_pane

0x6641,	// (0x0005669d) ai2_mp_volume_pane

0x4f6c,	// (0x00054fc8) bg_popup_sub_pane_cp5_ParamLimits

0x4f6c,	// (0x00054fc8) bg_popup_sub_pane_cp5

0x6649,	// (0x000566a5) heading_ai2_gene_pane_ParamLimits

0x6649,	// (0x000566a5) heading_ai2_gene_pane

0x6655,	// (0x000566b1) list_ai2_gene_pane_ParamLimits

0x6655,	// (0x000566b1) list_ai2_gene_pane

0x669d,	// (0x000566f9) cell_ai2_link_pane_ParamLimits

0x669d,	// (0x000566f9) cell_ai2_link_pane

0x66b3,	// (0x0005670f) cell_ai2_link_pane_g1

0x28ba,	// (0x00052916) grid_highlight_pane_cp7

0x1807,	// (0x00051863) ai2_mp_volume_pane_g1

0x6783,	// (0x000567df) ai2_mp_volume_pane_g2

0xdb45,	// (0x0005dba1) list_ai2_gene_pane_t1

0x678b,	// (0x000567e7) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0005fa4e) ai2_mp_volume_pane_g

0x180f,	// (0x0005186b) volume_small_pane_cp3

0x6793,	// (0x000567ef) aid_size_cell_ai2_button

0x679b,	// (0x000567f7) grid_ai2_button_pane

0x67a4,	// (0x00056800) cell_ai2_button_pane_ParamLimits

0x67a4,	// (0x00056800) cell_ai2_button_pane

0x28b0,	// (0x0005290c) cell_ai2_button_pane_g1

0x28ba,	// (0x00052916) grid_highlight_pane_cp8

0x6743,	// (0x0005679f) ai2_gene_pane_t1_ParamLimits

0x6743,	// (0x0005679f) ai2_gene_pane_t1

0xbbdf,	// (0x0005bc3b) aid_height_parent_landscape

0xd8c9,	// (0x0005d925) aid_height_set_list

0x60ce,	// (0x0005612a) aid_size_parent

0x63a0,	// (0x000563fc) aid_size_cell_graphic_pane_ParamLimits

0x6665,	// (0x000566c1) popup_ai2_data_window_g1_ParamLimits

0x6665,	// (0x000566c1) popup_ai2_data_window_g1

0x6671,	// (0x000566cd) ai2_news_ticker_pane_g1

0x6679,	// (0x000566d5) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0005fa3a) ai2_news_ticker_pane_g

0x6681,	// (0x000566dd) ai2_news_ticker_pane_t1

0x668f,	// (0x000566eb) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0005fa3f) ai2_news_ticker_pane_t

0x66bc,	// (0x00056718) heading_ai2_gene_pane_g1

0x66c4,	// (0x00056720) heading_ai2_gene_pane_t1_ParamLimits

0x66c4,	// (0x00056720) heading_ai2_gene_pane_t1

0x66d9,	// (0x00056735) list_highlight_pane_cp6

0xdb2f,	// (0x0005db8b) ai2_gene_pane_ParamLimits

0xdb2f,	// (0x0005db8b) ai2_gene_pane

0xdb53,	// (0x0005dbaf) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0005fa44) list_ai2_gene_pane_t

0x6714,	// (0x00056770) list_highlight_pane_cp8_ParamLimits

0x6714,	// (0x00056770) list_highlight_pane_cp8

0x6725,	// (0x00056781) ai2_gene_pane_g1_ParamLimits

0x6725,	// (0x00056781) ai2_gene_pane_g1

0x6737,	// (0x00056793) ai2_gene_pane_g2_ParamLimits

0x6737,	// (0x00056793) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0005fa49) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0005fa49) ai2_gene_pane_g

0x37ae,	// (0x0005380a) scroll_pane_cp12

0xbb9e,	// (0x0005bbfa) control_pane_t3_ParamLimits

0xbb9e,	// (0x0005bbfa) control_pane_t3

0x4724,	// (0x00054780) status_small_pane_g8_ParamLimits

0x4724,	// (0x00054780) status_small_pane_g8

0xbcea,	// (0x0005bd46) popup_find_window_ParamLimits

0xbf71,	// (0x0005bfcd) popup_note_image_window_ParamLimits

0x1269,	// (0x000512c5) list_double2_graphic_pane_vc_g1_ParamLimits

0x1269,	// (0x000512c5) list_double2_graphic_pane_vc_g1

0x43e6,	// (0x00054442) list_double2_graphic_pane_vc_g2_ParamLimits

0x43e6,	// (0x00054442) list_double2_graphic_pane_vc_g2

0x2f87,	// (0x00052fe3) list_double2_graphic_pane_vc_g3_ParamLimits

0x2f87,	// (0x00052fe3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005f825) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005f825) list_double2_graphic_pane_vc_g

0x1275,	// (0x000512d1) list_double2_graphic_pane_vc_t1_ParamLimits

0x1275,	// (0x000512d1) list_double2_graphic_pane_vc_t1

0x43e6,	// (0x00054442) list_single_heading_pane_vc_g1_ParamLimits

0x43e6,	// (0x00054442) list_single_heading_pane_vc_g1

0x2f87,	// (0x00052fe3) list_single_heading_pane_vc_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005f634) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005f634) list_single_heading_pane_vc_g

0x12e0,	// (0x0005133c) list_single_heading_pane_vc_t1_ParamLimits

0x12e0,	// (0x0005133c) list_single_heading_pane_vc_t1

0x12f8,	// (0x00051354) list_single_heading_pane_vc_t2_ParamLimits

0x12f8,	// (0x00051354) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0005f846) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0005f846) list_single_heading_pane_vc_t

0x2f93,	// (0x00052fef) list_setting_number_pane_vc_g1_ParamLimits

0x2f93,	// (0x00052fef) list_setting_number_pane_vc_g1

0x2f9f,	// (0x00052ffb) list_setting_number_pane_vc_g2_ParamLimits

0x2f9f,	// (0x00052ffb) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0005f84b) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0005f84b) list_setting_number_pane_vc_g

0x132e,	// (0x0005138a) list_setting_number_pane_vc_t1_ParamLimits

0x132e,	// (0x0005138a) list_setting_number_pane_vc_t1

0x1342,	// (0x0005139e) list_setting_number_pane_vc_t2_ParamLimits

0x1342,	// (0x0005139e) list_setting_number_pane_vc_t2

0x135e,	// (0x000513ba) list_setting_number_pane_vc_t3_ParamLimits

0x135e,	// (0x000513ba) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0005f850) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0005f850) list_setting_number_pane_vc_t

0x138a,	// (0x000513e6) set_value_pane_vc_ParamLimits

0x138a,	// (0x000513e6) set_value_pane_vc

0x6286,	// (0x000562e2) list_double2_graphic_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double2_graphic_pane_vc

0x170b,	// (0x00051767) list_double2_large_graphic_pane_vc_ParamLimits

0x170b,	// (0x00051767) list_double2_large_graphic_pane_vc

0x6286,	// (0x000562e2) list_double2_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double2_pane_vc

0x6286,	// (0x000562e2) list_double_graphic_heading_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double_graphic_heading_pane_vc

0x6286,	// (0x000562e2) list_double_graphic_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double_graphic_pane_vc

0x6286,	// (0x000562e2) list_double_heading_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double_heading_pane_vc

0x170b,	// (0x00051767) list_double_large_graphic_pane_vc_ParamLimits

0x170b,	// (0x00051767) list_double_large_graphic_pane_vc

0x6286,	// (0x000562e2) list_double_number_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double_number_pane_vc

0x6286,	// (0x000562e2) list_double_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double_pane_vc

0x6286,	// (0x000562e2) list_double_time_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_double_time_pane_vc

0x6286,	// (0x000562e2) list_setting_number_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_setting_number_pane_vc

0x6286,	// (0x000562e2) list_setting_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_setting_pane_vc

0x6286,	// (0x000562e2) list_single_graphic_heading_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_single_graphic_heading_pane_vc

0x6286,	// (0x000562e2) list_single_heading_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_single_heading_pane_vc

0x6286,	// (0x000562e2) list_single_number_heading_pane_vc_ParamLimits

0x6286,	// (0x000562e2) list_single_number_heading_pane_vc

0x1269,	// (0x000512c5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1269,	// (0x000512c5) list_double_graphic_heading_pane_vc_g1

0x43e6,	// (0x00054442) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x43e6,	// (0x00054442) list_double_graphic_heading_pane_vc_g2

0x2f87,	// (0x00052fe3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2f87,	// (0x00052fe3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005f825) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005f825) list_double_graphic_heading_pane_vc_g

0x1818,	// (0x00051874) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1818,	// (0x00051874) list_double_graphic_heading_pane_vc_t1

0x1834,	// (0x00051890) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1834,	// (0x00051890) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0005fa55) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0005fa55) list_double_graphic_heading_pane_vc_t

0x2f93,	// (0x00052fef) list_setting_pane_vc_g1_ParamLimits

0x2f93,	// (0x00052fef) list_setting_pane_vc_g1

0x2f9f,	// (0x00052ffb) list_setting_pane_vc_g2_ParamLimits

0x2f9f,	// (0x00052ffb) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0005f84b) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0005f84b) list_setting_pane_vc_g

0x1852,	// (0x000518ae) list_setting_pane_vc_t1_ParamLimits

0x1852,	// (0x000518ae) list_setting_pane_vc_t1

0x186e,	// (0x000518ca) list_setting_pane_vc_t2_ParamLimits

0x186e,	// (0x000518ca) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0005fa98) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005fa98) list_setting_pane_vc_t

0x138a,	// (0x000513e6) set_value_pane_cp_vc_ParamLimits

0x138a,	// (0x000513e6) set_value_pane_cp_vc

0x43e6,	// (0x00054442) list_single_number_heading_pane_vc_g1_ParamLimits

0x43e6,	// (0x00054442) list_single_number_heading_pane_vc_g1

0x2f87,	// (0x00052fe3) list_single_number_heading_pane_vc_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005f634) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005f634) list_single_number_heading_pane_vc_g

0x12e0,	// (0x0005133c) list_single_number_heading_pane_vc_t1_ParamLimits

0x12e0,	// (0x0005133c) list_single_number_heading_pane_vc_t1

0x188a,	// (0x000518e6) list_single_number_heading_pane_vc_t2_ParamLimits

0x188a,	// (0x000518e6) list_single_number_heading_pane_vc_t2

0x189e,	// (0x000518fa) list_single_number_heading_pane_vc_t3_ParamLimits

0x189e,	// (0x000518fa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0005fa9d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0005fa9d) list_single_number_heading_pane_vc_t

0x1269,	// (0x000512c5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1269,	// (0x000512c5) list_single_graphic_heading_pane_vc_g1

0x43e6,	// (0x00054442) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x43e6,	// (0x00054442) list_single_graphic_heading_pane_vc_g4

0x2f87,	// (0x00052fe3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2f87,	// (0x00052fe3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005f825) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005f825) list_single_graphic_heading_pane_vc_g

0x12e0,	// (0x0005133c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x12e0,	// (0x0005133c) list_single_graphic_heading_pane_vc_t1

0x18b0,	// (0x0005190c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x18b0,	// (0x0005190c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0005faa4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0005faa4) list_single_graphic_heading_pane_vc_t

0x43e6,	// (0x00054442) list_double2_pane_vc_g1_ParamLimits

0x43e6,	// (0x00054442) list_double2_pane_vc_g1

0x2f87,	// (0x00052fe3) list_double2_pane_vc_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005f634) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005f634) list_double2_pane_vc_g

0x18c4,	// (0x00051920) list_double2_pane_vc_t1_ParamLimits

0x18c4,	// (0x00051920) list_double2_pane_vc_t1

0x18da,	// (0x00051936) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x18da,	// (0x00051936) list_double2_large_graphic_pane_vc_g1

0x18e6,	// (0x00051942) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x18e6,	// (0x00051942) list_double2_large_graphic_pane_vc_g2

0x18f2,	// (0x0005194e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x18f2,	// (0x0005194e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0005f64c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0005f64c) list_double2_large_graphic_pane_vc_g

0x18fe,	// (0x0005195a) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x18fe,	// (0x0005195a) list_double2_large_graphic_pane_vc_t1

0x3041,	// (0x0005309d) list_double_time_pane_vc_g1_ParamLimits

0x3041,	// (0x0005309d) list_double_time_pane_vc_g1

0x304d,	// (0x000530a9) list_double_time_pane_vc_g2_ParamLimits

0x304d,	// (0x000530a9) list_double_time_pane_vc_g2

0x0001,

0xfa4d,	// (0x0005faa9) list_double_time_pane_vc_g_ParamLimits

0xfa4d,	// (0x0005faa9) list_double_time_pane_vc_g

0x1914,	// (0x00051970) list_double_time_pane_vc_t1_ParamLimits

0x1914,	// (0x00051970) list_double_time_pane_vc_t1

0x1938,	// (0x00051994) list_double_time_pane_vc_t2_ParamLimits

0x1938,	// (0x00051994) list_double_time_pane_vc_t2

0x1987,	// (0x000519e3) list_double_time_pane_vc_t3_ParamLimits

0x1987,	// (0x000519e3) list_double_time_pane_vc_t3

0x1999,	// (0x000519f5) list_double_time_pane_vc_t4_ParamLimits

0x1999,	// (0x000519f5) list_double_time_pane_vc_t4

0x0003,

0xfa52,	// (0x0005faae) list_double_time_pane_vc_t_ParamLimits

0xfa52,	// (0x0005faae) list_double_time_pane_vc_t

0x43e6,	// (0x00054442) list_double_pane_vc_g1_ParamLimits

0x43e6,	// (0x00054442) list_double_pane_vc_g1

0x2f87,	// (0x00052fe3) list_double_pane_vc_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005f634) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005f634) list_double_pane_vc_g

0x19ad,	// (0x00051a09) list_double_pane_vc_t1_ParamLimits

0x19ad,	// (0x00051a09) list_double_pane_vc_t1

0x19c1,	// (0x00051a1d) list_double_pane_vc_t2_ParamLimits

0x19c1,	// (0x00051a1d) list_double_pane_vc_t2

0x0001,

0xfa5b,	// (0x0005fab7) list_double_pane_vc_t_ParamLimits

0xfa5b,	// (0x0005fab7) list_double_pane_vc_t

0x43e6,	// (0x00054442) list_double_number_pane_vc_g1_ParamLimits

0x43e6,	// (0x00054442) list_double_number_pane_vc_g1

0x2f87,	// (0x00052fe3) list_double_number_pane_vc_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005f634) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005f634) list_double_number_pane_vc_g

0x19d9,	// (0x00051a35) list_double_number_pane_vc_t1_ParamLimits

0x19d9,	// (0x00051a35) list_double_number_pane_vc_t1

0x19ed,	// (0x00051a49) list_double_number_pane_vc_t2_ParamLimits

0x19ed,	// (0x00051a49) list_double_number_pane_vc_t2

0x3059,	// (0x000530b5) list_double_number_pane_vc_t3_ParamLimits

0x3059,	// (0x000530b5) list_double_number_pane_vc_t3

0x0002,

0xfa60,	// (0x0005fabc) list_double_number_pane_vc_t_ParamLimits

0xfa60,	// (0x0005fabc) list_double_number_pane_vc_t

0x3071,	// (0x000530cd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3071,	// (0x000530cd) list_double_large_graphic_pane_vc_g1

0x3082,	// (0x000530de) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3082,	// (0x000530de) list_double_large_graphic_pane_vc_g2

0x18f2,	// (0x0005194e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x18f2,	// (0x0005194e) list_double_large_graphic_pane_vc_g3

0x3091,	// (0x000530ed) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3091,	// (0x000530ed) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa67,	// (0x0005fac3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0005fac3) list_double_large_graphic_pane_vc_g

0x309d,	// (0x000530f9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x309d,	// (0x000530f9) list_double_large_graphic_pane_vc_t1

0x30b6,	// (0x00053112) list_double_large_graphic_pane_vc_t2_ParamLimits

0x30b6,	// (0x00053112) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x0005facc) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x0005facc) list_double_large_graphic_pane_vc_t

0x43e6,	// (0x00054442) list_double_heading_pane_vc_g1_ParamLimits

0x43e6,	// (0x00054442) list_double_heading_pane_vc_g1

0x2f87,	// (0x00052fe3) list_double_heading_pane_vc_g2_ParamLimits

0x2f87,	// (0x00052fe3) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005f634) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005f634) list_double_heading_pane_vc_g

0x30cf,	// (0x0005312b) list_double_heading_pane_vc_t1_ParamLimits

0x30cf,	// (0x0005312b) list_double_heading_pane_vc_t1

0x12e0,	// (0x0005133c) list_double_heading_pane_vc_t2_ParamLimits

0x12e0,	// (0x0005133c) list_double_heading_pane_vc_t2

0x0001,

0xfa75,	// (0x0005fad1) list_double_heading_pane_vc_t_ParamLimits

0xfa75,	// (0x0005fad1) list_double_heading_pane_vc_t

0x1269,	// (0x000512c5) list_double_graphic_pane_vc_g1_ParamLimits

0x1269,	// (0x000512c5) list_double_graphic_pane_vc_g1

0x30e3,	// (0x0005313f) list_double_graphic_pane_vc_g2_ParamLimits

0x30e3,	// (0x0005313f) list_double_graphic_pane_vc_g2

0x67e4,	// (0x00056840) list_double_graphic_pane_vc_g3_ParamLimits

0x67e4,	// (0x00056840) list_double_graphic_pane_vc_g3

0x0002,

0xfa7a,	// (0x0005fad6) list_double_graphic_pane_vc_g_ParamLimits

0xfa7a,	// (0x0005fad6) list_double_graphic_pane_vc_g

0x30f2,	// (0x0005314e) list_double_graphic_pane_vc_t1_ParamLimits

0x30f2,	// (0x0005314e) list_double_graphic_pane_vc_t1

0x3106,	// (0x00053162) list_double_graphic_pane_vc_t2_ParamLimits

0x3106,	// (0x00053162) list_double_graphic_pane_vc_t2

0x0001,

0xfa81,	// (0x0005fadd) list_double_graphic_pane_vc_t_ParamLimits

0xfa81,	// (0x0005fadd) list_double_graphic_pane_vc_t

0xf048,	// (0x0005f0a4) aid_size_cell_fastswap

0xb0f9,	// (0x0005b155) aid_size_cell_touch_ParamLimits

0xb0f9,	// (0x0005b155) aid_size_cell_touch

0xf430,	// (0x0005f48c) popup_fast_swap_wide_window_ParamLimits

0xf430,	// (0x0005f48c) popup_fast_swap_wide_window

0xb244,	// (0x0005b2a0) touch_pane_ParamLimits

0xb244,	// (0x0005b2a0) touch_pane

0x3810,	// (0x0005386c) button_value_adjust_pane_cp2

0x03b0,	// (0x0005040c) button_value_adjust_pane_cp4

0x03d4,	// (0x00050430) form_field_data_pane_cp2

0xb88c,	// (0x0005b8e8) form_field_data_wide_pane_cp2

0x3c83,	// (0x00053cdf) bg_scroll_pane_ParamLimits

0x07b8,	// (0x00050814) scroll_handle_pane_ParamLimits

0x07cc,	// (0x00050828) scroll_sc2_down_pane_ParamLimits

0x07cc,	// (0x00050828) scroll_sc2_down_pane

0x3cb4,	// (0x00053d10) scroll_sc2_up_pane_ParamLimits

0x3cb4,	// (0x00053d10) scroll_sc2_up_pane

0xdc7d,	// (0x0005dcd9) grid_wheel_folder_pane_g1_ParamLimits

0xdc7d,	// (0x0005dcd9) grid_wheel_folder_pane_g1

0x09ff,	// (0x00050a5b) clock_nsta_pane_cp2_ParamLimits

0x09ff,	// (0x00050a5b) clock_nsta_pane_cp2

0x47ed,	// (0x00054849) listscroll_midp_pane_ParamLimits

0xd050,	// (0x0005d0ac) midp_canvas_pane

0x479f,	// (0x000547fb) nsta_clock_indic_pane

0x47d3,	// (0x0005482f) listscroll_form_pane_vc

0x47db,	// (0x00054837) listscroll_set_pane_vc_ParamLimits

0x47db,	// (0x00054837) listscroll_set_pane_vc

0xd238,	// (0x0005d294) clock_nsta_pane

0xd262,	// (0x0005d2be) indicator_nsta_pane

0x4c23,	// (0x00054c7f) bg_popup_sub_pane_cp2_ParamLimits

0x4c37,	// (0x00054c93) find_pane_cp2_ParamLimits

0x4c37,	// (0x00054c93) find_pane_cp2

0x4c4d,	// (0x00054ca9) grid_toobar_pane_ParamLimits

0x4d2d,	// (0x00054d89) list_form_gen_pane_vc_ParamLimits

0x4d2d,	// (0x00054d89) list_form_gen_pane_vc

0x4d43,	// (0x00054d9f) scroll_pane_cp8_vc_ParamLimits

0x4d43,	// (0x00054d9f) scroll_pane_cp8_vc

0x4dbf,	// (0x00054e1b) data_form_wide_pane_vc_ParamLimits

0x4dbf,	// (0x00054e1b) data_form_wide_pane_vc

0x4dcb,	// (0x00054e27) form_field_data_wide_pane_vc_g1

0x4dd3,	// (0x00054e2f) form_field_data_wide_pane_vc_t1_ParamLimits

0x4dd3,	// (0x00054e2f) form_field_data_wide_pane_vc_t1

0x3824,	// (0x00053880) input_focus_pane_cp6_vc_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_cp6_vc

0xd5d8,	// (0x0005d634) list_midp_pane_ParamLimits

0x6406,	// (0x00056462) scroll_pane_cp16_ParamLimits

0x6406,	// (0x00056462) scroll_pane_cp16

0x5159,	// (0x000551b5) button_value_adjust_pane_ParamLimits

0x5159,	// (0x000551b5) button_value_adjust_pane

0xd8da,	// (0x0005d936) button_value_adjust_pane_cp6_ParamLimits

0xd8da,	// (0x0005d936) button_value_adjust_pane_cp6

0xd9f4,	// (0x0005da50) settings_code_pane_cp_ParamLimits

0xd9f4,	// (0x0005da50) settings_code_pane_cp

0x28b0,	// (0x0005290c) cell_touch_pane_g1

0x28b0,	// (0x0005290c) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005f76a) cell_touch_pane_g

0xdb61,	// (0x0005dbbd) cell_touch_pane_cp_ParamLimits

0xdb61,	// (0x0005dbbd) cell_touch_pane_cp

0xdb7d,	// (0x0005dbd9) cell_touch_pane_ParamLimits

0xdb7d,	// (0x0005dbd9) cell_touch_pane

0x28b0,	// (0x0005290c) scroll_sc2_down_pane_g1

0x28b0,	// (0x0005290c) scroll_sc2_up_pane_g1

0x28ba,	// (0x00052916) bg_set_opt_pane_cp4_vc

0x67d8,	// (0x00056834) list_set_graphic_pane_vc_g1_ParamLimits

0x67d8,	// (0x00056834) list_set_graphic_pane_vc_g1

0x67e4,	// (0x00056840) list_set_graphic_pane_vc_g2_ParamLimits

0x67e4,	// (0x00056840) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0005fa5a) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0005fa5a) list_set_graphic_pane_vc_g

0x67f0,	// (0x0005684c) text_primary_small_cp13_vc_ParamLimits

0x67f0,	// (0x0005684c) text_primary_small_cp13_vc

0x6808,	// (0x00056864) list_set_graphic_pane_vc_ParamLimits

0x6808,	// (0x00056864) list_set_graphic_pane_vc

0x28ba,	// (0x00052916) input_focus_pane_cp2_vc

0x28b0,	// (0x0005290c) setting_code_pane_vc_g1

0x29e5,	// (0x00052a41) setting_code_pane_vc_t1

0x681a,	// (0x00056876) set_text_pane_vc_t1_ParamLimits

0x681a,	// (0x00056876) set_text_pane_vc_t1

0x28ba,	// (0x00052916) input_focus_pane_cp1_vc

0x6836,	// (0x00056892) list_set_text_pane_vc

0x28b0,	// (0x0005290c) setting_text_pane_vc_g1

0x28ba,	// (0x00052916) bg_set_opt_pane_cp2_vc

0x29dc,	// (0x00052a38) setting_slider_graphic_pane_vc_g1

0x6840,	// (0x0005689c) setting_slider_graphic_pane_vc_t1

0x6850,	// (0x000568ac) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0005fa5f) setting_slider_graphic_pane_vc_t

0x6860,	// (0x000568bc) slider_set_pane_cp_vc

0x6868,	// (0x000568c4) slider_set_pane_vc_g1

0x6871,	// (0x000568cd) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0005fa64) slider_set_pane_vc_g

0x3873,	// (0x000538cf) set_opt_bg_pane_g1_copy1

0x387b,	// (0x000538d7) set_opt_bg_pane_g2_copy1

0x689d,	// (0x000568f9) set_opt_bg_pane_g3_copy1

0x388b,	// (0x000538e7) set_opt_bg_pane_g4_copy1

0x3893,	// (0x000538ef) set_opt_bg_pane_g5_copy1

0x389b,	// (0x000538f7) set_opt_bg_pane_g6_copy1

0x68a7,	// (0x00056903) set_opt_bg_pane_g7_copy1

0x68af,	// (0x0005690b) set_opt_bg_pane_g8_copy1

0x68b9,	// (0x00056915) set_opt_bg_pane_g9_copy1

0x28ba,	// (0x00052916) bg_set_opt_pane_cp_vc

0x68c3,	// (0x0005691f) setting_slider_pane_vc_t1

0x68d2,	// (0x0005692e) setting_slider_pane_vc_t2

0x68e2,	// (0x0005693e) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0005fa73) setting_slider_pane_vc_t

0x68f2,	// (0x0005694e) slider_set_pane_vc

0x1471,	// (0x000514cd) volume_set_pane_vc_g1

0x147a,	// (0x000514d6) volume_set_pane_vc_g2

0x1483,	// (0x000514df) volume_set_pane_vc_g3

0x148c,	// (0x000514e8) volume_set_pane_vc_g4

0x1495,	// (0x000514f1) volume_set_pane_vc_g5

0x149e,	// (0x000514fa) volume_set_pane_vc_g6

0x14a7,	// (0x00051503) volume_set_pane_vc_g7

0x14b0,	// (0x0005150c) volume_set_pane_vc_g8

0x14b9,	// (0x00051515) volume_set_pane_vc_g9

0x14c2,	// (0x0005151e) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0005fa7a) volume_set_pane_vc_g

0x68fa,	// (0x00056956) volume_set_pane_vc

0x6902,	// (0x0005695e) button_value_adjust_pane_cp1_vc

0x690c,	// (0x00056968) list_highlight_pane_cp2_vc

0x6915,	// (0x00056971) list_set_pane_vc_ParamLimits

0x6915,	// (0x00056971) list_set_pane_vc

0x6973,	// (0x000569cf) main_pane_set_vc_t1_ParamLimits

0x6973,	// (0x000569cf) main_pane_set_vc_t1

0x6988,	// (0x000569e4) main_pane_set_vc_t2_ParamLimits

0x6988,	// (0x000569e4) main_pane_set_vc_t2

0x699a,	// (0x000569f6) main_pane_set_vc_t3_ParamLimits

0x699a,	// (0x000569f6) main_pane_set_vc_t3

0x69ae,	// (0x00056a0a) main_pane_set_vc_t4_ParamLimits

0x69ae,	// (0x00056a0a) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x0005fa8f) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x0005fa8f) main_pane_set_vc_t

0x69c2,	// (0x00056a1e) setting_code_pane_vc_ParamLimits

0x69c2,	// (0x00056a1e) setting_code_pane_vc

0x69d3,	// (0x00056a2f) setting_slider_graphic_pane_vc

0x69d3,	// (0x00056a2f) setting_slider_pane_vc

0x69d3,	// (0x00056a2f) setting_text_pane_vc

0x69d3,	// (0x00056a2f) setting_volume_pane_vc

0x69dd,	// (0x00056a39) scroll_pane_cp121_vc

0x37fe,	// (0x0005385a) set_content_pane_vc

0x69e5,	// (0x00056a41) button_value_adjust_pane_g1

0x69ee,	// (0x00056a4a) button_value_adjust_pane_g2

0x0001,

0xfa86,	// (0x0005fae2) button_value_adjust_pane_g

0x69f7,	// (0x00056a53) form_field_slider_wide_pane_vc_t1_ParamLimits

0x69f7,	// (0x00056a53) form_field_slider_wide_pane_vc_t1

0x6a0b,	// (0x00056a67) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a0b,	// (0x00056a67) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8b,	// (0x0005fae7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8b,	// (0x0005fae7) form_field_slider_wide_pane_vc_t

0x2c15,	// (0x00052c71) input_focus_pane_cp10_vc_ParamLimits

0x2c15,	// (0x00052c71) input_focus_pane_cp10_vc

0x6a39,	// (0x00056a95) slider_cont_pane_cp1_vc_ParamLimits

0x6a39,	// (0x00056a95) slider_cont_pane_cp1_vc

0x6a4b,	// (0x00056aa7) slider_form_pane_g1_cp2

0x6871,	// (0x000568cd) slider_form_pane_g2_cp2

0x6a78,	// (0x00056ad4) form_field_slider_pane_vc_t3

0x6a86,	// (0x00056ae2) form_field_slider_pane_vc_t4

0x6a94,	// (0x00056af0) slider_form_pane_vc_ParamLimits

0x6a94,	// (0x00056af0) slider_form_pane_vc

0x6aa1,	// (0x00056afd) form_field_slider_pane_vc_t1_ParamLimits

0x6aa1,	// (0x00056afd) form_field_slider_pane_vc_t1

0x6a0b,	// (0x00056a67) form_field_slider_pane_vc_t2_ParamLimits

0x6a0b,	// (0x00056a67) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x0005faf9) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x0005faf9) form_field_slider_pane_vc_t

0x2c15,	// (0x00052c71) input_focus_pane_cp9_vc_ParamLimits

0x2c15,	// (0x00052c71) input_focus_pane_cp9_vc

0x6abd,	// (0x00056b19) slider_cont_pane_vc_ParamLimits

0x6abd,	// (0x00056b19) slider_cont_pane_vc

0x6ad1,	// (0x00056b2d) list_form_graphic_pane_cp_vc_ParamLimits

0x6ad1,	// (0x00056b2d) list_form_graphic_pane_cp_vc

0x4dcb,	// (0x00054e27) form_field_popup_wide_pane_vc_g1

0x6ae6,	// (0x00056b42) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6ae6,	// (0x00056b42) form_field_popup_wide_pane_vc_t1

0x3824,	// (0x00053880) input_focus_pane_cp8_vc_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_cp8_vc

0x6b2b,	// (0x00056b87) list_form_wide_pane_vc_ParamLimits

0x6b2b,	// (0x00056b87) list_form_wide_pane_vc

0x6b37,	// (0x00056b93) list_form_graphic_pane_vc_g1

0x6b3f,	// (0x00056b9b) list_form_graphic_pane_vc_t1_ParamLimits

0x6b3f,	// (0x00056b9b) list_form_graphic_pane_vc_t1

0x299a,	// (0x000529f6) list_highlight_pane_cp5_vc_ParamLimits

0x299a,	// (0x000529f6) list_highlight_pane_cp5_vc

0x6b5b,	// (0x00056bb7) list_form_graphic_pane_vc_ParamLimits

0x6b5b,	// (0x00056bb7) list_form_graphic_pane_vc

0x4dcb,	// (0x00054e27) form_field_popup_pane_vc_g1

0x6b71,	// (0x00056bcd) form_field_popup_pane_vc_t1_ParamLimits

0x6b71,	// (0x00056bcd) form_field_popup_pane_vc_t1

0x3824,	// (0x00053880) input_focus_pane_cp7_vc_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_cp7_vc

0x6b88,	// (0x00056be4) list_form_pane_vc_ParamLimits

0x6b88,	// (0x00056be4) list_form_pane_vc

0x6b94,	// (0x00056bf0) data_form_pane_vc_t1_ParamLimits

0x6b94,	// (0x00056bf0) data_form_pane_vc_t1

0x3873,	// (0x000538cf) input_focus_pane_vc_g1

0x387b,	// (0x000538d7) input_focus_pane_vc_g2

0x3883,	// (0x000538df) input_focus_pane_vc_g3

0x388b,	// (0x000538e7) input_focus_pane_vc_g4

0x3893,	// (0x000538ef) input_focus_pane_vc_g5

0x389b,	// (0x000538f7) input_focus_pane_vc_g6

0x38a3,	// (0x000538ff) input_focus_pane_vc_g7

0x38ab,	// (0x00053907) input_focus_pane_vc_g8

0x38b3,	// (0x0005390f) input_focus_pane_vc_g9

0x28b0,	// (0x0005290c) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0005f6f3) input_focus_pane_vc_g

0x4dbf,	// (0x00054e1b) data_form_pane_vc_ParamLimits

0x4dbf,	// (0x00054e1b) data_form_pane_vc

0x4dcb,	// (0x00054e27) form_field_data_pane_vc_g1

0x6baf,	// (0x00056c0b) form_field_data_pane_vc_t1_ParamLimits

0x6baf,	// (0x00056c0b) form_field_data_pane_vc_t1

0x3824,	// (0x00053880) input_focus_pane_vc_ParamLimits

0x3824,	// (0x00053880) input_focus_pane_vc

0x6bc9,	// (0x00056c25) button_value_adjust_pane_cp3_vc

0x6bd1,	// (0x00056c2d) button_value_adjust_pane_cp5_vc

0x6bd9,	// (0x00056c35) form_field_data_pane_vc_ParamLimits

0x6bd9,	// (0x00056c35) form_field_data_pane_vc

0x6bf0,	// (0x00056c4c) form_field_data_pane_vc_cp2

0x6bf8,	// (0x00056c54) form_field_data_wide_pane_vc_ParamLimits

0x6bf8,	// (0x00056c54) form_field_data_wide_pane_vc

0x6c0e,	// (0x00056c6a) form_field_data_wide_pane_vc_cp2

0x6c16,	// (0x00056c72) form_field_popup_pane_vc_ParamLimits

0x6c16,	// (0x00056c72) form_field_popup_pane_vc

0x6c2d,	// (0x00056c89) form_field_popup_wide_pane_vc_ParamLimits

0x6c2d,	// (0x00056c89) form_field_popup_wide_pane_vc

0x6c43,	// (0x00056c9f) form_field_slider_pane_vc_ParamLimits

0x6c43,	// (0x00056c9f) form_field_slider_pane_vc

0x6c56,	// (0x00056cb2) form_field_slider_wide_pane_vc_ParamLimits

0x6c56,	// (0x00056cb2) form_field_slider_wide_pane_vc

0xdb9b,	// (0x0005dbf7) grid_touch_1_pane_ParamLimits

0xdb9b,	// (0x0005dbf7) grid_touch_1_pane

0xdbaf,	// (0x0005dc0b) grid_touch_2_pane_ParamLimits

0xdbaf,	// (0x0005dc0b) grid_touch_2_pane

0x6d2b,	// (0x00056d87) touch_pane_g1_ParamLimits

0x6d2b,	// (0x00056d87) touch_pane_g1

0x6c8d,	// (0x00056ce9) cell_app_pane_cp_wide_ParamLimits

0x6c8d,	// (0x00056ce9) cell_app_pane_cp_wide

0x6c9e,	// (0x00056cfa) grid_popup_fast_wide_pane_ParamLimits

0x6c9e,	// (0x00056cfa) grid_popup_fast_wide_pane

0x6cb2,	// (0x00056d0e) scroll_pane_cp19_ParamLimits

0x6cb2,	// (0x00056d0e) scroll_pane_cp19

0x28ba,	// (0x00052916) bg_popup_window_pane_cp20

0x6cc6,	// (0x00056d22) listscroll_popup_fast_wide_pane

0x39db,	// (0x00053a37) grid_indicator_nsta_pane

0x6cce,	// (0x00056d2a) clock_nsta_pane_g1

0x6cd7,	// (0x00056d33) clock_nsta_pane_t1

0xdbd9,	// (0x0005dc35) cell_indicator_nsta_pane_ParamLimits

0xdbd9,	// (0x0005dc35) cell_indicator_nsta_pane

0x6d2b,	// (0x00056d87) cell_indicator_nsta_pane_g1

0xdbf2,	// (0x0005dc4e) cell_indicator_nsta_pane_g2

0x0001,

0xfaae,	// (0x0005fb0a) cell_indicator_nsta_pane_g

0x6d4f,	// (0x00056dab) clock_nsta_pane_cp

0x6d57,	// (0x00056db3) indicator_nsta_pane_cp

0x6d5f,	// (0x00056dbb) nsta_clock_indic_pane_g1

0x2a63,	// (0x00052abf) grid_indicator_pane

0x3da9,	// (0x00053e05) scroll_pane_cp29

0x094e,	// (0x000509aa) indicator_nsta_pane_cp2_ParamLimits

0x094e,	// (0x000509aa) indicator_nsta_pane_cp2

0x299a,	// (0x000529f6) main_apps_wheel_pane

0x4fe0,	// (0x0005503c) form_midp_field_text_pane_ParamLimits

0x512b,	// (0x00055187) scroll_bar_cp050_ParamLimits

0x6db8,	// (0x00056e14) cell_indicator_pane_ParamLimits

0x6db8,	// (0x00056e14) cell_indicator_pane

0x6dcf,	// (0x00056e2b) cell_indicator_pane_g1

0xdc07,	// (0x0005dc63) grid_wheel_folder_pane_ParamLimits

0xdc07,	// (0x0005dc63) grid_wheel_folder_pane

0xdc15,	// (0x0005dc71) list_wheel_apps_pane_ParamLimits

0xdc15,	// (0x0005dc71) list_wheel_apps_pane

0xdc23,	// (0x0005dc7f) main_apps_wheel_pane_g1_ParamLimits

0xdc23,	// (0x0005dc7f) main_apps_wheel_pane_g1

0xdc2f,	// (0x0005dc8b) main_apps_wheel_pane_g2_ParamLimits

0xdc2f,	// (0x0005dc8b) main_apps_wheel_pane_g2

0x0001,

0xfaca,	// (0x0005fb26) main_apps_wheel_pane_g_ParamLimits

0xfaca,	// (0x0005fb26) main_apps_wheel_pane_g

0xdc3d,	// (0x0005dc99) main_apps_wheel_pane_t1_ParamLimits

0xdc3d,	// (0x0005dc99) main_apps_wheel_pane_t1

0xdc51,	// (0x0005dcad) list_wheel_apps_pane_g1

0xdc59,	// (0x0005dcb5) list_wheel_apps_pane_g2

0xdc61,	// (0x0005dcbd) list_wheel_apps_pane_g3

0xdc69,	// (0x0005dcc5) list_wheel_apps_pane_g4

0xdc73,	// (0x0005dccf) list_wheel_apps_pane_g5

0x0004,

0xfacf,	// (0x0005fb2b) list_wheel_apps_pane_g

0x432d,	// (0x00054389) navi_icon_text_pane

0xd12c,	// (0x0005d188) aid_fill_nsta

0xdc8a,	// (0x0005dce6) navi_icon_text_pane_g1

0x6ea0,	// (0x00056efc) navi_icon_text_pane_t1

0xcfb6,	// (0x0005d012) list_set_graphic_pane_t1_ParamLimits

0xcfb6,	// (0x0005d012) list_set_graphic_pane_t1

0x587a,	// (0x000558d6) popup_midp_note_alarm_window_t6_ParamLimits

0x587a,	// (0x000558d6) popup_midp_note_alarm_window_t6

0x588c,	// (0x000558e8) popup_midp_note_alarm_window_t7_ParamLimits

0x588c,	// (0x000558e8) popup_midp_note_alarm_window_t7

0x589e,	// (0x000558fa) popup_midp_note_alarm_window_t8_ParamLimits

0x589e,	// (0x000558fa) popup_midp_note_alarm_window_t8

0x58b0,	// (0x0005590c) popup_midp_note_alarm_window_t9_ParamLimits

0x58b0,	// (0x0005590c) popup_midp_note_alarm_window_t9

0x58c2,	// (0x0005591e) popup_midp_note_alarm_window_t10_ParamLimits

0x58c2,	// (0x0005591e) popup_midp_note_alarm_window_t10

0x58d4,	// (0x00055930) popup_midp_note_alarm_window_t11_ParamLimits

0x58d4,	// (0x00055930) popup_midp_note_alarm_window_t11

0x58e6,	// (0x00055942) scroll_pane_cp17_ParamLimits

0x58e6,	// (0x00055942) scroll_pane_cp17

0x1471,	// (0x000514cd) volume_small_pane_cp_g1

0x1a01,	// (0x00051a5d) volume_small_pane_cp_g2

0x1a0a,	// (0x00051a66) volume_small_pane_cp_g3

0x1a13,	// (0x00051a6f) volume_small_pane_cp_g4

0x1a1c,	// (0x00051a78) volume_small_pane_cp_g5

0x1a25,	// (0x00051a81) volume_small_pane_cp_g6

0x1a2e,	// (0x00051a8a) volume_small_pane_cp_g7

0x1a37,	// (0x00051a93) volume_small_pane_cp_g8

0x1a40,	// (0x00051a9c) volume_small_pane_cp_g9

0x1a49,	// (0x00051aa5) volume_small_pane_cp_g10

0x457c,	// (0x000545d8) midp_ticker_pane_g1_ParamLimits

0x4588,	// (0x000545e4) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005f7bf) midp_ticker_pane_g_ParamLimits

0x4594,	// (0x000545f0) midp_ticker_pane_t1_ParamLimits

0xd150,	// (0x0005d1ac) aid_fill_nsta_2

0x5117,	// (0x00055173) list_form2_midp_pane

0x6255,	// (0x000562b1) midp_editing_number_pane_ParamLimits

0x6264,	// (0x000562c0) midp_ticker_pane_ParamLimits

0x6eb2,	// (0x00056f0e) form2_midp_field_pane

0x6ed6,	// (0x00056f32) scroll_pane_cp51

0x6ef6,	// (0x00056f52) form2_midp_button_pane_ParamLimits

0x6ef6,	// (0x00056f52) form2_midp_button_pane

0x6f08,	// (0x00056f64) form2_midp_content_pane_ParamLimits

0x6f08,	// (0x00056f64) form2_midp_content_pane

0x6f22,	// (0x00056f7e) form2_midp_field_choice_group_pane

0x6f2a,	// (0x00056f86) form2_midp_field_pane_g1

0x6f32,	// (0x00056f8e) form2_midp_field_pane_g2

0x6f3a,	// (0x00056f96) form2_midp_field_pane_g3

0x6f42,	// (0x00056f9e) form2_midp_field_pane_g4

0x0003,

0xfaf4,	// (0x0005fb50) form2_midp_field_pane_g

0x6f4a,	// (0x00056fa6) form2_midp_gauge_slider_pane

0x6f52,	// (0x00056fae) form2_midp_gauge_wait_pane

0x6f5a,	// (0x00056fb6) form2_midp_image_pane_ParamLimits

0x6f5a,	// (0x00056fb6) form2_midp_image_pane

0x6f75,	// (0x00056fd1) form2_midp_label_pane_ParamLimits

0x6f75,	// (0x00056fd1) form2_midp_label_pane

0xdcb2,	// (0x0005dd0e) form2_midp_label_pane_cp_ParamLimits

0xdcb2,	// (0x0005dd0e) form2_midp_label_pane_cp

0x6faf,	// (0x0005700b) form2_midp_string_pane_ParamLimits

0x6faf,	// (0x0005700b) form2_midp_string_pane

0xc4b0,	// (0x0005c50c) form2_midp_text_pane_ParamLimits

0xc4b0,	// (0x0005c50c) form2_midp_text_pane

0x6fc1,	// (0x0005701d) form2_midp_time_pane

0x6fd1,	// (0x0005702d) input_focus_pane_cp51_ParamLimits

0x6fd1,	// (0x0005702d) input_focus_pane_cp51

0x6fe9,	// (0x00057045) form2_midp_label_pane_t1_ParamLimits

0x6fe9,	// (0x00057045) form2_midp_label_pane_t1

0xc4cf,	// (0x0005c52b) form2_mdip_text_pane_t1_ParamLimits

0xc4cf,	// (0x0005c52b) form2_mdip_text_pane_t1

0x315b,	// (0x000531b7) form2_midp_time_pane_t1

0x7032,	// (0x0005708e) form2_midp_gauge_slider_pane_t1

0xdcd1,	// (0x0005dd2d) form2_midp_gauge_slider_pane_t2

0xdce3,	// (0x0005dd3f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafd,	// (0x0005fb59) form2_midp_gauge_slider_pane_t

0x7068,	// (0x000570c4) form2_midp_slider_pane

0x7074,	// (0x000570d0) form2_midp_gauge_wait_pane_t1

0x7082,	// (0x000570de) form2_midp_wait_pane_ParamLimits

0x7082,	// (0x000570de) form2_midp_wait_pane

0xdcf5,	// (0x0005dd51) list_single_2graphic_pane_cp4_ParamLimits

0xdcf5,	// (0x0005dd51) list_single_2graphic_pane_cp4

0xd566,	// (0x0005d5c2) list_single_midp_graphic_pane_cp_ParamLimits

0xd566,	// (0x0005d5c2) list_single_midp_graphic_pane_cp

0x28ba,	// (0x00052916) list_highlight_pane_cp20

0x70dc,	// (0x00057138) list_single_2graphic_pane_g1_cp4

0x70e4,	// (0x00057140) list_single_2graphic_pane_g2_cp4

0x70ec,	// (0x00057148) list_single_2graphic_pane_t1_cp4

0x299a,	// (0x000529f6) list_highlight_pane_cp21

0x70fb,	// (0x00057157) list_single_midp_graphic_pane_g4_cp

0x710a,	// (0x00057166) list_single_midp_graphic_pane_t1_cp

0xdd09,	// (0x0005dd65) form2_mdip_string_pane_t1_ParamLimits

0xdd09,	// (0x0005dd65) form2_mdip_string_pane_t1

0x28ba,	// (0x00052916) bg_wml_button_pane_cp2

0x28b0,	// (0x0005290c) form2_midp_image_pane_g1

0x2f36,	// (0x00052f92) list_double_large_graphic_pane_g5_ParamLimits

0x2f36,	// (0x00052f92) list_double_large_graphic_pane_g5

0x47ed,	// (0x00054849) midp_form_pane_ParamLimits

0x299a,	// (0x000529f6) main_apps_wheel_pane_ParamLimits

0xbfef,	// (0x0005c04b) popup_preview_window_ParamLimits

0xbfef,	// (0x0005c04b) popup_preview_window

0x11e4,	// (0x00051240) popup_touch_info_window_ParamLimits

0x11e4,	// (0x00051240) popup_touch_info_window

0x1202,	// (0x0005125e) popup_touch_menu_window_ParamLimits

0x1202,	// (0x0005125e) popup_touch_menu_window

0x28a6,	// (0x00052902) bg_popup_sub_pane_cp6

0x7218,	// (0x00057274) list_touch_menu_pane

0x7220,	// (0x0005727c) list_single_touch_menu_pane_ParamLimits

0x7220,	// (0x0005727c) list_single_touch_menu_pane

0x7236,	// (0x00057292) list_single_touch_menu_pane_t1

0x299a,	// (0x000529f6) bg_popup_sub_pane_cp7_ParamLimits

0x299a,	// (0x000529f6) bg_popup_sub_pane_cp7

0x7244,	// (0x000572a0) heading_sub_pane

0x724c,	// (0x000572a8) list_touch_info_pane_ParamLimits

0x724c,	// (0x000572a8) list_touch_info_pane

0x725b,	// (0x000572b7) list_single_touch_info_pane_ParamLimits

0x725b,	// (0x000572b7) list_single_touch_info_pane

0x726d,	// (0x000572c9) list_single_touch_info_pane_t1

0x727b,	// (0x000572d7) list_single_touch_info_pane_t2

0x0001,

0xfb0b,	// (0x0005fb67) list_single_touch_info_pane_t

0x44ad,	// (0x00054509) bg_popup_heading_pane_cp

0x7289,	// (0x000572e5) heading_sub_pane_t1

0x4d59,	// (0x00054db5) bg_popup_preview_window_pane_cp_ParamLimits

0x4d59,	// (0x00054db5) bg_popup_preview_window_pane_cp

0x7244,	// (0x000572a0) heading_preview_pane

0x724c,	// (0x000572a8) list_preview_pane_ParamLimits

0x724c,	// (0x000572a8) list_preview_pane

0x7297,	// (0x000572f3) popup_preview_window_g1

0x725b,	// (0x000572b7) list_single_preview_pane_ParamLimits

0x725b,	// (0x000572b7) list_single_preview_pane

0x729f,	// (0x000572fb) list_single_preview_pane_g1

0x72a7,	// (0x00057303) list_single_preview_pane_t1

0x726d,	// (0x000572c9) list_single_preview_pane_t2

0x0001,

0xfb10,	// (0x0005fb6c) list_single_preview_pane_t

0x72b5,	// (0x00057311) bg_popup_heading_pane_cp2_ParamLimits

0x72b5,	// (0x00057311) bg_popup_heading_pane_cp2

0x72cb,	// (0x00057327) heading_preview_pane_g1

0x72d3,	// (0x0005732f) heading_preview_pane_t1_ParamLimits

0x72d3,	// (0x0005732f) heading_preview_pane_t1

0x2a86,	// (0x00052ae2) soft_indicator_pane_t1_ParamLimits

0x378b,	// (0x000537e7) scroll_pane_ParamLimits

0x3ca2,	// (0x00053cfe) scroll_sc2_left_pane

0x3cab,	// (0x00053d07) scroll_sc2_right_pane

0x3cca,	// (0x00053d26) scroll_bg_pane_g1_ParamLimits

0x3cdf,	// (0x00053d3b) scroll_bg_pane_g2_ParamLimits

0x3cf7,	// (0x00053d53) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0005f74a) scroll_bg_pane_g_ParamLimits

0x3cca,	// (0x00053d26) scroll_handle_pane_g1_ParamLimits

0x3d19,	// (0x00053d75) scroll_handle_pane_g2_ParamLimits

0x3cf7,	// (0x00053d53) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0005f751) scroll_handle_pane_g_ParamLimits

0x0cac,	// (0x00050d08) popup_choice_list_window_ParamLimits

0x0cac,	// (0x00050d08) popup_choice_list_window

0x4c2f,	// (0x00054c8b) choice_list_pane

0x4cb1,	// (0x00054d0d) cell_toolbar_pane_t1

0x4cd9,	// (0x00054d35) toolbar_button_pane_ParamLimits

0x5da0,	// (0x00055dfc) ai_gene_pane_1_t2_ParamLimits

0x5da0,	// (0x00055dfc) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0005f974) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0005f974) ai_gene_pane_1_t

0x72f0,	// (0x0005734c) scroll_sc2_left_pane_g1

0x72f0,	// (0x0005734c) scroll_sc2_right_pane_g1

0x47ed,	// (0x00054849) bg_popup_sub_pane_cp10

0x72fa,	// (0x00057356) list_choice_list_pane

0x7313,	// (0x0005736f) list_single_choice_list_pane_ParamLimits

0x7313,	// (0x0005736f) list_single_choice_list_pane

0x7326,	// (0x00057382) list_single_choice_list_pane_g1

0x39ac,	// (0x00053a08) list_single_choice_list_pane_t1_ParamLimits

0x39ac,	// (0x00053a08) list_single_choice_list_pane_t1

0x732e,	// (0x0005738a) choice_list_pane_g1

0x7336,	// (0x00057392) choice_list_pane_t1

0x28a6,	// (0x00052902) input_focus_pane_cp11

0x3b83,	// (0x00053bdf) title_pane_stacon_g2_ParamLimits

0x3b83,	// (0x00053bdf) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005f730) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005f730) title_pane_stacon_g

0x44ad,	// (0x00054509) cursor_press_pane

0xbca2,	// (0x0005bcfe) popup_fep_hwr_window_ParamLimits

0xbca2,	// (0x0005bcfe) popup_fep_hwr_window

0x0dd2,	// (0x00050e2e) popup_fep_vkb_window_ParamLimits

0x0dd2,	// (0x00050e2e) popup_fep_vkb_window

0x7344,	// (0x000573a0) cursor_press_pane_g1

0x0002,

0xfb39,	// (0x0005fb95) fep_vkb_side_pane_g_ParamLimits

0x1a8b,	// (0x00051ae7) fep_hwr_candidate_pane_ParamLimits

0x1a8b,	// (0x00051ae7) fep_hwr_candidate_pane

0x1ab5,	// (0x00051b11) fep_hwr_side_pane_ParamLimits

0x1ab5,	// (0x00051b11) fep_hwr_side_pane

0x1ad5,	// (0x00051b31) fep_hwr_top_pane_ParamLimits

0x1ad5,	// (0x00051b31) fep_hwr_top_pane

0x1aed,	// (0x00051b49) fep_hwr_write_pane_ParamLimits

0x1aed,	// (0x00051b49) fep_hwr_write_pane

0xfb39,	// (0x0005fb95) fep_vkb_side_pane_g

0x734c,	// (0x000573a8) fep_hwr_top_pane_g1

0x735e,	// (0x000573ba) fep_hwr_top_pane_g2

0x1b27,	// (0x00051b83) fep_hwr_top_pane_g3

0x0002,

0xfb15,	// (0x0005fb71) fep_hwr_top_pane_g

0x1b3c,	// (0x00051b98) fep_hwr_top_text_pane

0x3e99,	// (0x00053ef5) fep_hwr_top_text_pane_g1

0x7394,	// (0x000573f0) fep_hwr_top_text_pane_t1

0x1c32,	// (0x00051c8e) fep_hwr_candidate_pane_g1

0x75e7,	// (0x00057643) fep_vkb_keypad_pane_g3_ParamLimits

0x75e7,	// (0x00057643) fep_vkb_keypad_pane_g3

0x760f,	// (0x0005766b) fep_vkb_keypad_pane_g4_ParamLimits

0x760f,	// (0x0005766b) fep_vkb_keypad_pane_g4

0x767e,	// (0x000576da) fep_vkb_bottom_pane_g2_ParamLimits

0x767e,	// (0x000576da) fep_vkb_bottom_pane_g2

0x0001,

0xfb40,	// (0x0005fb9c) fep_vkb_bottom_pane_g_ParamLimits

0xfb40,	// (0x0005fb9c) fep_vkb_bottom_pane_g

0x72f0,	// (0x0005734c) cell_vkb_side_pane_g2

0x0001,

0xfb4a,	// (0x0005fba6) cell_vkb_side_pane_g

0x7709,	// (0x00057765) cell_vkb_side_pane_t1

0x7717,	// (0x00057773) cell_vkb_side_pane_t1_copy1

0x72f0,	// (0x0005734c) bg_fep_vkb_candidate_pane_g2

0x7843,	// (0x0005789f) cell_vkb_candidate_pane_ParamLimits

0x73a2,	// (0x000573fe) aid_size_cell_vkb_ParamLimits

0x73a2,	// (0x000573fe) aid_size_cell_vkb

0x7843,	// (0x0005789f) cell_vkb_candidate_pane

0x1c59,	// (0x00051cb5) bg_popup_fep_shadow_pane_g1

0xdd8d,	// (0x0005dde9) fep_vkb_bottom_pane_ParamLimits

0xdd8d,	// (0x0005dde9) fep_vkb_bottom_pane

0x7466,	// (0x000574c2) fep_vkb_candidate_pane_ParamLimits

0x7466,	// (0x000574c2) fep_vkb_candidate_pane

0xddb2,	// (0x0005de0e) fep_vkb_keypad_pane_ParamLimits

0xddb2,	// (0x0005de0e) fep_vkb_keypad_pane

0xddee,	// (0x0005de4a) fep_vkb_side_pane_ParamLimits

0xddee,	// (0x0005de4a) fep_vkb_side_pane

0xde2a,	// (0x0005de86) fep_vkb_top_pane_ParamLimits

0xde2a,	// (0x0005de86) fep_vkb_top_pane

0x7540,	// (0x0005759c) fep_vkb_top_pane_g1_ParamLimits

0x7540,	// (0x0005759c) fep_vkb_top_pane_g1

0x754f,	// (0x000575ab) fep_vkb_top_pane_g2_ParamLimits

0x754f,	// (0x000575ab) fep_vkb_top_pane_g2

0x755e,	// (0x000575ba) fep_vkb_top_pane_g3_ParamLimits

0x755e,	// (0x000575ba) fep_vkb_top_pane_g3

0x0003,

0xfb30,	// (0x0005fb8c) fep_vkb_top_pane_g_ParamLimits

0xfb30,	// (0x0005fb8c) fep_vkb_top_pane_g

0x757c,	// (0x000575d8) fep_vkb_top_text_pane_ParamLimits

0x757c,	// (0x000575d8) fep_vkb_top_text_pane

0xde66,	// (0x0005dec2) fep_vkb_side_pane_g1_ParamLimits

0xde66,	// (0x0005dec2) fep_vkb_side_pane_g1

0x75d6,	// (0x00057632) grid_vkb_side_pane_ParamLimits

0x75d6,	// (0x00057632) grid_vkb_side_pane

0x1c61,	// (0x00051cbd) bg_popup_fep_shadow_pane_g2

0x1c6a,	// (0x00051cc6) bg_popup_fep_shadow_pane_g3

0x1c72,	// (0x00051cce) bg_popup_fep_shadow_pane_g4

0x1c7b,	// (0x00051cd7) bg_popup_fep_shadow_pane_g5

0x1c85,	// (0x00051ce1) bg_popup_fep_shadow_pane_g6

0x1c8d,	// (0x00051ce9) bg_popup_fep_shadow_pane_g7

0x388b,	// (0x000538e7) bg_popup_fep_shadow_pane_g8

0x762d,	// (0x00057689) grid_vkb_keypad_number_pane_ParamLimits

0x762d,	// (0x00057689) grid_vkb_keypad_number_pane

0x763d,	// (0x00057699) grid_vkb_keypad_pane_ParamLimits

0x763d,	// (0x00057699) grid_vkb_keypad_pane

0x7663,	// (0x000576bf) fep_vkb_bottom_pane_g1_ParamLimits

0x7663,	// (0x000576bf) fep_vkb_bottom_pane_g1

0x768c,	// (0x000576e8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x768c,	// (0x000576e8) grid_vkb_keypad_bottom_left_pane

0x76a1,	// (0x000576fd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x76a1,	// (0x000576fd) grid_vkb_keypad_bottom_right_pane

0x76b6,	// (0x00057712) fep_vkb_top_text_pane_g1

0xdead,	// (0x0005df09) fep_vkb_top_text_pane_t1

0xdebf,	// (0x0005df1b) cell_vkb_side_pane_ParamLimits

0xdebf,	// (0x0005df1b) cell_vkb_side_pane

0x72f0,	// (0x0005734c) cell_vkb_side_pane_g1

0x7725,	// (0x00057781) cell_vkb_keypad_pane_ParamLimits

0x7725,	// (0x00057781) cell_vkb_keypad_pane

0x779a,	// (0x000577f6) cell_vkb_keypad_pane_g1

0x0008,

0xfb5d,	// (0x0005fbb9) bg_popup_fep_shadow_pane_g

0x1c9f,	// (0x00051cfb) cell_hwr_side_pane_g1

0x1c9f,	// (0x00051cfb) cell_hwr_side_pane_g2

0x77a4,	// (0x00057800) cell_vkb_keypad_pane_t1

0xded5,	// (0x0005df31) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xded5,	// (0x0005df31) cell_vkb_keypad_bottom_left_pane

0xdeea,	// (0x0005df46) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdeea,	// (0x0005df46) cell_vkb_keypad_bottom_right_pane

0x72f0,	// (0x0005734c) cell_vkb_keypad_bottom_left_pane_g1

0x72f0,	// (0x0005734c) cell_vkb_keypad_bottom_right_pane_g1

0x7808,	// (0x00057864) cell_vkb_keypad_number_pane_ParamLimits

0x7808,	// (0x00057864) cell_vkb_keypad_number_pane

0x7827,	// (0x00057883) cell_vkb_keypad_number_pane_g1

0x7831,	// (0x0005788d) cell_vkb_keypad_number_pane_g2

0x783a,	// (0x00057896) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4f,	// (0x0005fbab) cell_vkb_keypad_number_pane_g

0x77a4,	// (0x00057800) cell_vkb_keypad_number_pane_t1

0x785e,	// (0x000578ba) fep_vkb_candidate_pane_g1

0x0001,

0xfb70,	// (0x0005fbcc) cell_hwr_side_pane_g

0x7877,	// (0x000578d3) cell_hwr_side_pane_t1

0x1ca9,	// (0x00051d05) cell_hwr_side_pane_t1_copy1

0x1cb7,	// (0x00051d13) cell_hwr_candidate_pane_g1

0x1ce6,	// (0x00051d42) cell_hwr_candidate_pane_t1

0x72f0,	// (0x0005734c) cell_vkb_candidate_pane_g2

0x78bb,	// (0x00057917) cell_vkb_candidate_pane_t1

0x1a52,	// (0x00051aae) bg_popup_fep_shadow_pane_ParamLimits

0x1a52,	// (0x00051aae) bg_popup_fep_shadow_pane

0x1b07,	// (0x00051b63) bg_fep_hwr_top_pane_g4

0x7370,	// (0x000573cc) bg_hwr_side_pane_g1_ParamLimits

0x7370,	// (0x000573cc) bg_hwr_side_pane_g1

0xc501,	// (0x0005c55d) cell_hwr_side_pane_ParamLimits

0xc501,	// (0x0005c55d) cell_hwr_side_pane

0x1bb3,	// (0x00051c0f) fep_hwr_write_pane_g1_ParamLimits

0x1bb3,	// (0x00051c0f) fep_hwr_write_pane_g1

0x1bc0,	// (0x00051c1c) fep_hwr_write_pane_g2_ParamLimits

0x1bc0,	// (0x00051c1c) fep_hwr_write_pane_g2

0x1bcd,	// (0x00051c29) fep_hwr_write_pane_g3_ParamLimits

0x1bcd,	// (0x00051c29) fep_hwr_write_pane_g3

0xc521,	// (0x0005c57d) fep_hwr_write_pane_g4_ParamLimits

0xc521,	// (0x0005c57d) fep_hwr_write_pane_g4

0x0005,

0xfb1c,	// (0x0005fb78) fep_hwr_write_pane_g_ParamLimits

0xfb1c,	// (0x0005fb78) fep_hwr_write_pane_g

0x1b07,	// (0x00051b63) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1b07,	// (0x00051b63) bg_fep_hwr_candidate_pane_g2

0x1bf0,	// (0x00051c4c) cell_hwr_candidate_pane_ParamLimits

0x1bf0,	// (0x00051c4c) cell_hwr_candidate_pane

0x1c32,	// (0x00051c8e) fep_hwr_candidate_pane_g1_ParamLimits

0x73d0,	// (0x0005742c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x73d0,	// (0x0005742c) bg_popup_fep_shadow_pane_cp2

0x756e,	// (0x000575ca) fep_vkb_top_pane_g4_ParamLimits

0x756e,	// (0x000575ca) fep_vkb_top_pane_g4

0x75b4,	// (0x00057610) fep_vkb_side_pane_g2_ParamLimits

0x75b4,	// (0x00057610) fep_vkb_side_pane_g2

0xb79a,	// (0x0005b7f6) list_setting_pane_t4_ParamLimits

0xb79a,	// (0x0005b7f6) list_setting_pane_t4

0xb834,	// (0x0005b890) list_setting_number_pane_t5_ParamLimits

0xb834,	// (0x0005b890) list_setting_number_pane_t5

0xcec9,	// (0x0005cf25) list_double_heading_pane_cp2_ParamLimits

0xcec9,	// (0x0005cf25) list_double_heading_pane_cp2

0x37bf,	// (0x0005381b) list_double_heading_pane_g1_cp2_ParamLimits

0x37bf,	// (0x0005381b) list_double_heading_pane_g1_cp2

0x3832,	// (0x0005388e) list_double_heading_pane_g2_cp2_ParamLimits

0x3832,	// (0x0005388e) list_double_heading_pane_g2_cp2

0x78c9,	// (0x00057925) list_double_heading_pane_t1_cp2_ParamLimits

0x78c9,	// (0x00057925) list_double_heading_pane_t1_cp2

0x78df,	// (0x0005793b) list_double_heading_pane_t2_cp2_ParamLimits

0x78df,	// (0x0005793b) list_double_heading_pane_t2_cp2

0x288e,	// (0x000528ea) aid_value_unit2

0xf454,	// (0x0005f4b0) popup_preview_fixed_window

0x2c23,	// (0x00052c7f) bg_popup_preview_window_pane_cp02

0x78f1,	// (0x0005794d) list_preview_fixed_pane

0x7937,	// (0x00057993) list_empty_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_empty_pane_fp

0x7937,	// (0x00057993) list_single_cale_day_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_single_cale_day_pane_fp

0x7937,	// (0x00057993) list_single_graphic_heading_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_single_graphic_heading_pane_fp

0x7937,	// (0x00057993) list_single_graphic_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_single_graphic_pane_fp

0x7937,	// (0x00057993) list_single_heading_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_single_heading_pane_fp

0x7937,	// (0x00057993) list_single_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_single_pane_fp

0x794c,	// (0x000579a8) list_single_pane_fp_g1_ParamLimits

0x794c,	// (0x000579a8) list_single_pane_fp_g1

0x37bf,	// (0x0005381b) list_single_pane_fp_g2_ParamLimits

0x37bf,	// (0x0005381b) list_single_pane_fp_g2

0x3832,	// (0x0005388e) list_single_pane_fp_g3_ParamLimits

0x3832,	// (0x0005388e) list_single_pane_fp_g3

0x7958,	// (0x000579b4) list_single_pane_fp_g4_ParamLimits

0x7958,	// (0x000579b4) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x0005fbdf) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x0005fbdf) list_single_pane_fp_g

0x316e,	// (0x000531ca) list_single_pane_fp_t1_ParamLimits

0x316e,	// (0x000531ca) list_single_pane_fp_t1

0x3185,	// (0x000531e1) list_single_graphic_pane_fp_g1_ParamLimits

0x3185,	// (0x000531e1) list_single_graphic_pane_fp_g1

0x794c,	// (0x000579a8) list_single_graphic_pane_fp_g2_ParamLimits

0x794c,	// (0x000579a8) list_single_graphic_pane_fp_g2

0x37bf,	// (0x0005381b) list_single_graphic_pane_fp_g3_ParamLimits

0x37bf,	// (0x0005381b) list_single_graphic_pane_fp_g3

0x3832,	// (0x0005388e) list_single_graphic_pane_fp_g4_ParamLimits

0x3832,	// (0x0005388e) list_single_graphic_pane_fp_g4

0x7958,	// (0x000579b4) list_single_graphic_pane_fp_g5_ParamLimits

0x7958,	// (0x000579b4) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0005fbe8) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005fbe8) list_single_graphic_pane_fp_g

0x3191,	// (0x000531ed) list_single_graphic_pane_fp_t1_ParamLimits

0x3191,	// (0x000531ed) list_single_graphic_pane_fp_t1

0x3185,	// (0x000531e1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3185,	// (0x000531e1) list_single_graphic_heading_pane_fp_g1

0x794c,	// (0x000579a8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x794c,	// (0x000579a8) list_single_graphic_heading_pane_fp_g2

0x37bf,	// (0x0005381b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x37bf,	// (0x0005381b) list_single_graphic_heading_pane_fp_g3

0x3832,	// (0x0005388e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3832,	// (0x0005388e) list_single_graphic_heading_pane_fp_g4

0x7958,	// (0x000579b4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7958,	// (0x000579b4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0005fbe8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005fbe8) list_single_graphic_heading_pane_fp_g

0x31a7,	// (0x00053203) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x31a7,	// (0x00053203) list_single_graphic_heading_pane_fp_t1

0x31bd,	// (0x00053219) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x31bd,	// (0x00053219) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0005fbf3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0005fbf3) list_single_graphic_heading_pane_fp_t

0x31cf,	// (0x0005322b) list_single_cale_day_pane_fp_g1_ParamLimits

0x31cf,	// (0x0005322b) list_single_cale_day_pane_fp_g1

0x7964,	// (0x000579c0) list_single_cale_day_pane_fp_g2_ParamLimits

0x7964,	// (0x000579c0) list_single_cale_day_pane_fp_g2

0x3207,	// (0x00053263) list_single_cale_day_pane_fp_g3_ParamLimits

0x3207,	// (0x00053263) list_single_cale_day_pane_fp_g3

0x322f,	// (0x0005328b) list_single_cale_day_pane_fp_g4_ParamLimits

0x322f,	// (0x0005328b) list_single_cale_day_pane_fp_g4

0x3253,	// (0x000532af) list_single_cale_day_pane_fp_g5_ParamLimits

0x3253,	// (0x000532af) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0005fbf8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0005fbf8) list_single_cale_day_pane_fp_g

0x3277,	// (0x000532d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x3277,	// (0x000532d3) list_single_cale_day_pane_fp_t1

0x329d,	// (0x000532f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x329d,	// (0x000532f9) list_single_cale_day_pane_fp_t2

0x32b6,	// (0x00053312) list_single_cale_day_pane_fp_t3_ParamLimits

0x32b6,	// (0x00053312) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x0005fc03) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x0005fc03) list_single_cale_day_pane_fp_t

0x794c,	// (0x000579a8) list_empty_pane_fp_g1_ParamLimits

0x794c,	// (0x000579a8) list_empty_pane_fp_g1

0x32cf,	// (0x0005332b) list_empty_pane_fp_t1

0x32dd,	// (0x00053339) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x0005fc0a) list_empty_pane_fp_t

0x794c,	// (0x000579a8) list_single_heading_pane_fp_g1_ParamLimits

0x794c,	// (0x000579a8) list_single_heading_pane_fp_g1

0x37bf,	// (0x0005381b) list_single_heading_pane_fp_g2_ParamLimits

0x37bf,	// (0x0005381b) list_single_heading_pane_fp_g2

0x3832,	// (0x0005388e) list_single_heading_pane_fp_g3_ParamLimits

0x3832,	// (0x0005388e) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x0005fc0f) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x0005fc0f) list_single_heading_pane_fp_g

0x32eb,	// (0x00053347) list_single_heading_pane_fp_t1_ParamLimits

0x32eb,	// (0x00053347) list_single_heading_pane_fp_t1

0x32fd,	// (0x00053359) list_single_heading_pane_fp_t2_ParamLimits

0x32fd,	// (0x00053359) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x0005fc16) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x0005fc16) list_single_heading_pane_fp_t

0x3a1a,	// (0x00053a76) aid_size_cell_fast

0x2b93,	// (0x00052bef) soft_indicator_pane_cp1_t1

0x3a57,	// (0x00053ab3) cell_app_pane_cp2_ParamLimits

0x3a57,	// (0x00053ab3) cell_app_pane_cp2

0x1a74,	// (0x00051ad0) fep_hwr_candidate_drop_down_list_pane

0x1c4c,	// (0x00051ca8) fep_hwr_candidate_pane_g3_ParamLimits

0x1c4c,	// (0x00051ca8) fep_hwr_candidate_pane_g3

0xe3db,	// (0x0005e437) fep_hwr_candidate_pane_g4_ParamLimits

0xe3db,	// (0x0005e437) fep_hwr_candidate_pane_g4

0x0002,

0xfb29,	// (0x0005fb85) fep_hwr_candidate_pane_g_ParamLimits

0xfb29,	// (0x0005fb85) fep_hwr_candidate_pane_g

0x7455,	// (0x000574b1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7455,	// (0x000574b1) fep_vkb_candidate_drop_down_list_pane

0x7866,	// (0x000578c2) fep_vkb_candidate_pane_g3

0x786e,	// (0x000578ca) fep_vkb_candidate_pane_g4

0x0002,

0xfb56,	// (0x0005fbb2) fep_vkb_candidate_pane_g

0x1cb7,	// (0x00051d13) cell_hwr_candidate_pane_g1_ParamLimits

0x1cc5,	// (0x00051d21) cell_hwr_candidate_pane_g3_ParamLimits

0x1cc5,	// (0x00051d21) cell_hwr_candidate_pane_g3

0x8a9b,	// (0x00058af7) cell_hwr_candidate_pane_g4_ParamLimits

0x8a9b,	// (0x00058af7) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x0005fbd1) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x0005fbd1) cell_hwr_candidate_pane_g

0x7885,	// (0x000578e1) cell_vkb_candidate_pane_g3_ParamLimits

0x7885,	// (0x000578e1) cell_vkb_candidate_pane_g3

0x78a0,	// (0x000578fc) cell_vkb_candidate_pane_g4_ParamLimits

0x78a0,	// (0x000578fc) cell_vkb_candidate_pane_g4

0x7970,	// (0x000579cc) cell_app_pane_cp2_g1_ParamLimits

0x7970,	// (0x000579cc) cell_app_pane_cp2_g1

0x798e,	// (0x000579ea) cell_app_pane_cp2_g2_ParamLimits

0x798e,	// (0x000579ea) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x0005fc1b) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x0005fc1b) cell_app_pane_cp2_g

0x799a,	// (0x000579f6) cell_app_pane_cp2_t1_ParamLimits

0x799a,	// (0x000579f6) cell_app_pane_cp2_t1

0x3824,	// (0x00053880) grid_highlight_pane_cp1_ParamLimits

0x3824,	// (0x00053880) grid_highlight_pane_cp1

0x1d04,	// (0x00051d60) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d04,	// (0x00051d60) cell_hwr_candidate_pane_cp1

0x1cb7,	// (0x00051d13) fep_hwr_candidate_drop_down_list_pane_g1

0x1d23,	// (0x00051d7f) fep_hwr_candidate_drop_down_list_pane_g2

0x1d30,	// (0x00051d8c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0005fc20) fep_hwr_candidate_drop_down_list_pane_g

0x1d3d,	// (0x00051d99) fep_hwr_candidate_drop_down_list_scroll_pane

0x1d46,	// (0x00051da2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1d46,	// (0x00051da2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1d53,	// (0x00051daf) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1d53,	// (0x00051daf) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1d60,	// (0x00051dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1d60,	// (0x00051dbc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1d6d,	// (0x00051dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1d6d,	// (0x00051dc9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1d88,	// (0x00051de4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1d88,	// (0x00051de4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1da3,	// (0x00051dff) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1da3,	// (0x00051dff) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1dbe,	// (0x00051e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1dbe,	// (0x00051e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1dd9,	// (0x00051e35) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1dd9,	// (0x00051e35) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0005fc27) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0005fc27) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x79ac,	// (0x00057a08) cell_vkb_candidate_pane_cp1_ParamLimits

0x79ac,	// (0x00057a08) cell_vkb_candidate_pane_cp1

0x756e,	// (0x000575ca) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x756e,	// (0x000575ca) fep_vkb_candidate_drop_down_list_pane_g1

0x79cc,	// (0x00057a28) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x79cc,	// (0x00057a28) fep_vkb_candidate_drop_down_list_pane_g2

0x79d9,	// (0x00057a35) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x79d9,	// (0x00057a35) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdc,	// (0x0005fc38) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdc,	// (0x0005fc38) fep_vkb_candidate_drop_down_list_pane_g

0x79e6,	// (0x00057a42) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x79e6,	// (0x00057a42) fep_vkb_candidate_drop_down_list_scroll_pane

0x79f3,	// (0x00057a4f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79f3,	// (0x00057a4f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7a00,	// (0x00057a5c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a00,	// (0x00057a5c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7a0c,	// (0x00057a68) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a0c,	// (0x00057a68) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7a18,	// (0x00057a74) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a18,	// (0x00057a74) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a39,	// (0x00057a95) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a39,	// (0x00057a95) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a5a,	// (0x00057ab6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a5a,	// (0x00057ab6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7a7b,	// (0x00057ad7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7a7b,	// (0x00057ad7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7a9c,	// (0x00057af8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a9c,	// (0x00057af8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x0005fc3f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x0005fc3f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb29a,	// (0x0005b2f6) title_pane_g1_ParamLimits

0xb2ad,	// (0x0005b309) title_pane_g2_ParamLimits

0xf554,	// (0x0005f5b0) title_pane_g_ParamLimits

0x3e89,	// (0x00053ee5) aid_call2_pane

0x3e91,	// (0x00053eed) aid_call_pane

0x3e99,	// (0x00053ef5) popup_clock_analogue_window_g1

0x3e99,	// (0x00053ef5) popup_clock_analogue_window_g2

0x07e1,	// (0x0005083d) popup_clock_analogue_window_g3

0x07ea,	// (0x00050846) popup_clock_analogue_window_g4

0x28b0,	// (0x0005290c) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0005f75f) popup_clock_analogue_window_g

0x07f2,	// (0x0005084e) popup_clock_analogue_window_t1

0x0800,	// (0x0005085c) clock_digital_number_pane_ParamLimits

0x0800,	// (0x0005085c) clock_digital_number_pane

0x080c,	// (0x00050868) clock_digital_number_pane_cp02_ParamLimits

0x080c,	// (0x00050868) clock_digital_number_pane_cp02

0x0818,	// (0x00050874) clock_digital_number_pane_cp03_ParamLimits

0x0818,	// (0x00050874) clock_digital_number_pane_cp03

0x0824,	// (0x00050880) clock_digital_number_pane_cp04_ParamLimits

0x0824,	// (0x00050880) clock_digital_number_pane_cp04

0x0830,	// (0x0005088c) clock_digital_separator_pane_ParamLimits

0x0830,	// (0x0005088c) clock_digital_separator_pane

0x083c,	// (0x00050898) popup_clock_digital_window_t1_ParamLimits

0x083c,	// (0x00050898) popup_clock_digital_window_t1

0x28b0,	// (0x0005290c) clock_digital_number_pane_g1

0x28b0,	// (0x0005290c) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005f76a) clock_digital_number_pane_g

0x28b0,	// (0x0005290c) clock_digital_separator_pane_g1

0x28b0,	// (0x0005290c) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005f76a) clock_digital_separator_pane_g

0xd12c,	// (0x0005d188) aid_fill_nsta_ParamLimits

0xd262,	// (0x0005d2be) indicator_nsta_pane_ParamLimits

0x4ac4,	// (0x00054b20) popup_clock_analogue_window

0x4ac4,	// (0x00054b20) popup_clock_digital_window

0x39db,	// (0x00053a37) grid_indicator_nsta_pane_ParamLimits

0x6ce5,	// (0x00056d41) clock_nsta_pane_t2

0x0001,

0xfaa9,	// (0x0005fb05) clock_nsta_pane_t

0x07a5,	// (0x00050801) aid_size_max_handle

0xb9e3,	// (0x0005ba3f) aid_size_min_handle

0x44ad,	// (0x00054509) editor_scroll_pane

0x7ab7,	// (0x00057b13) ex_editor_pane

0x3988,	// (0x000539e4) scroll_pane_cp13

0x37b7,	// (0x00053813) scroll_pane_cp14

0x3ec8,	// (0x00053f24) scroll_pane_cp36

0xceda,	// (0x0005cf36) list_single_graphic_hl_pane_cp2_ParamLimits

0xceda,	// (0x0005cf36) list_single_graphic_hl_pane_cp2

0xd6fa,	// (0x0005d756) list_single_graphic_hl_pane_ParamLimits

0xd6fa,	// (0x0005d756) list_single_graphic_hl_pane

0x3313,	// (0x0005336f) aid_size_min_hl_cp1

0x7abf,	// (0x00057b1b) list_highlight_pane_cp34_ParamLimits

0x7abf,	// (0x00057b1b) list_highlight_pane_cp34

0x7ad0,	// (0x00057b2c) list_single_graphic_hl_pane_g1_ParamLimits

0x7ad0,	// (0x00057b2c) list_single_graphic_hl_pane_g1

0xc536,	// (0x0005c592) list_single_graphic_hl_pane_g2_ParamLimits

0xc536,	// (0x0005c592) list_single_graphic_hl_pane_g2

0xc536,	// (0x0005c592) list_single_graphic_hl_pane_g3_ParamLimits

0xc536,	// (0x0005c592) list_single_graphic_hl_pane_g3

0x441e,	// (0x0005447a) list_single_graphic_hl_pane_g4_ParamLimits

0x441e,	// (0x0005447a) list_single_graphic_hl_pane_g4

0x3328,	// (0x00053384) list_single_graphic_hl_pane_g5_ParamLimits

0x3328,	// (0x00053384) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x0005fc50) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x0005fc50) list_single_graphic_hl_pane_g

0xc542,	// (0x0005c59e) list_single_graphic_hl_pane_t1_ParamLimits

0xc542,	// (0x0005c59e) list_single_graphic_hl_pane_t1

0x7add,	// (0x00057b39) aid_size_min_hl_cp2

0x7ae6,	// (0x00057b42) list_highlight_pane_cp34_cp2_ParamLimits

0x7ae6,	// (0x00057b42) list_highlight_pane_cp34_cp2

0x7ad0,	// (0x00057b2c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ad0,	// (0x00057b2c) list_single_graphic_hl_pane_g1_cp2

0x7af3,	// (0x00057b4f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7af3,	// (0x00057b4f) list_single_graphic_hl_pane_g2_cp2

0xdf05,	// (0x0005df61) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdf05,	// (0x0005df61) list_single_graphic_hl_pane_g3_cp2

0x7b0d,	// (0x00057b69) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7b0d,	// (0x00057b69) list_single_graphic_hl_pane_g4_cp2

0x7b19,	// (0x00057b75) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7b19,	// (0x00057b75) list_single_graphic_hl_pane_g5_cp2

0xbaca,	// (0x0005bb26) control_pane_g4_ParamLimits

0xbaca,	// (0x0005bb26) control_pane_g4

0x47ed,	// (0x00054849) bg_popup_sub_pane_cp10_ParamLimits

0x72fa,	// (0x00057356) list_choice_list_pane_ParamLimits

0x7309,	// (0x00057365) scroll_pane_cp23

0x2c23,	// (0x00052c7f) bg_popup_preview_window_pane_cp02_ParamLimits

0x78f1,	// (0x0005794d) list_preview_fixed_pane_ParamLimits

0x7907,	// (0x00057963) list_preview_fixed_pane_cp_ParamLimits

0x7907,	// (0x00057963) list_preview_fixed_pane_cp

0x7913,	// (0x0005796f) popup_preview_fixed_window_g1_ParamLimits

0x7913,	// (0x0005796f) popup_preview_fixed_window_g1

0x791f,	// (0x0005797b) popup_preview_fixed_window_g2_ParamLimits

0x791f,	// (0x0005797b) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0005fbd8) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0005fbd8) popup_preview_fixed_window_g

0x0719,	// (0x00050775) aid_navi_side_left_pane_ParamLimits

0x072e,	// (0x0005078a) aid_navi_side_right_pane_ParamLimits

0x0746,	// (0x000507a2) navi_icon_pane_stacon_ParamLimits

0x075a,	// (0x000507b6) navi_navi_pane_stacon_ParamLimits

0x0746,	// (0x000507a2) navi_text_pane_stacon_ParamLimits

0xf34b,	// (0x0005f3a7) main_text_info_pane

0x7b43,	// (0x00057b9f) listscroll_text_info_pane

0x7b4b,	// (0x00057ba7) list_text_info_pane_ParamLimits

0x7b4b,	// (0x00057ba7) list_text_info_pane

0x7b5a,	// (0x00057bb6) scroll_pane_cp24_ParamLimits

0x7b5a,	// (0x00057bb6) scroll_pane_cp24

0xdf13,	// (0x0005df6f) list_text_info_pane_t1_ParamLimits

0xdf13,	// (0x0005df6f) list_text_info_pane_t1

0xbc15,	// (0x0005bc71) popup_fast_swap2_window_ParamLimits

0xbc15,	// (0x0005bc71) popup_fast_swap2_window

0x7ba9,	// (0x00057c05) aid_size_cell_fast2

0x28a6,	// (0x00052902) bg_popup_window_pane_cp17

0x5143,	// (0x0005519f) heading_pane_cp2

0x2e6f,	// (0x00052ecb) listscroll_fast2_pane

0x7bb3,	// (0x00057c0f) grid_fast2_pane

0x7bbd,	// (0x00057c19) listscroll_fast2_pane_g1

0x7bc5,	// (0x00057c21) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x0005fc5b) listscroll_fast2_pane_g

0x3988,	// (0x000539e4) scroll_pane_cp26

0x7bcf,	// (0x00057c2b) cell_fast2_pane_ParamLimits

0x7bcf,	// (0x00057c2b) cell_fast2_pane

0x7be4,	// (0x00057c40) cell_fast2_pane_g1

0x7bed,	// (0x00057c49) cell_fast2_pane_g2

0x7bf6,	// (0x00057c52) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x0005fc60) cell_fast2_pane_g

0x3574,	// (0x000535d0) grid_highlight_pane_cp9

0x0c88,	// (0x00050ce4) main_eswt_pane_ParamLimits

0x0c88,	// (0x00050ce4) main_eswt_pane

0x7b6f,	// (0x00057bcb) list_single_text_info_pane

0x7bfe,	// (0x00057c5a) eswt_ctrl_button_pane

0x7bfe,	// (0x00057c5a) eswt_ctrl_canvas_pane

0x7c06,	// (0x00057c62) eswt_ctrl_combo_pane

0x7bfe,	// (0x00057c5a) eswt_ctrl_default_pane

0x7bfe,	// (0x00057c5a) eswt_ctrl_label_pane

0x7c0e,	// (0x00057c6a) eswt_ctrl_wait_pane

0x7c16,	// (0x00057c72) eswt_shell_pane

0x28a6,	// (0x00052902) listscroll_eswt_app_pane

0x7c36,	// (0x00057c92) popup_eswt_tasktip_window_ParamLimits

0x7c36,	// (0x00057c92) popup_eswt_tasktip_window

0x4d59,	// (0x00054db5) bg_popup_window_pane_cp18

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_ParamLimits

0x7c47,	// (0x00057ca3) eswt_control_pane_g1

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_ParamLimits

0x7c54,	// (0x00057cb0) eswt_control_pane_g2

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_ParamLimits

0x7c61,	// (0x00057cbd) eswt_control_pane_g3

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_ParamLimits

0x7c6e,	// (0x00057cca) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x0005fc67) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x0005fc67) eswt_control_pane_g

0x3824,	// (0x00053880) bg_button_pane_ParamLimits

0x3824,	// (0x00053880) bg_button_pane

0x3589,	// (0x000535e5) common_borders_pane_copy2_ParamLimits

0x3589,	// (0x000535e5) common_borders_pane_copy2

0x7c7b,	// (0x00057cd7) control_button_pane_g1_ParamLimits

0x7c7b,	// (0x00057cd7) control_button_pane_g1

0x7c87,	// (0x00057ce3) control_button_pane_g2_ParamLimits

0x7c87,	// (0x00057ce3) control_button_pane_g2

0x7c93,	// (0x00057cef) control_button_pane_g3_ParamLimits

0x7c93,	// (0x00057cef) control_button_pane_g3

0x0002,

0xfc14,	// (0x0005fc70) control_button_pane_g_ParamLimits

0xfc14,	// (0x0005fc70) control_button_pane_g

0x7ca7,	// (0x00057d03) control_button_pane_t1

0x7cb5,	// (0x00057d11) control_button_pane_t2

0x0001,

0xfc1b,	// (0x0005fc77) control_button_pane_t

0x4ce5,	// (0x00054d41) bg_button_pane_g1

0x4cf5,	// (0x00054d51) bg_button_pane_g2

0x4ced,	// (0x00054d49) bg_button_pane_g3

0x4d05,	// (0x00054d61) bg_button_pane_g4

0x4cfd,	// (0x00054d59) bg_button_pane_g5

0x4d0d,	// (0x00054d69) bg_button_pane_g6

0x4d15,	// (0x00054d71) bg_button_pane_g7

0x4d25,	// (0x00054d81) bg_button_pane_g8

0x4d1d,	// (0x00054d79) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0005f8c8) bg_button_pane_g

0x72b5,	// (0x00057311) common_borders_pane_ParamLimits

0x72b5,	// (0x00057311) common_borders_pane

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy1_ParamLimits

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy1

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy1_ParamLimits

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy1

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy1_ParamLimits

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy1

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy1_ParamLimits

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy1

0x72f0,	// (0x0005734c) bg_eswt_ctrl_canvas_pane_g1

0x72b5,	// (0x00057311) common_borders_pane_cp2_ParamLimits

0x72b5,	// (0x00057311) common_borders_pane_cp2

0x72b5,	// (0x00057311) common_borders_pane_cp3_ParamLimits

0x72b5,	// (0x00057311) common_borders_pane_cp3

0x7cc3,	// (0x00057d1f) separator_horizontal_pane

0x7ccb,	// (0x00057d27) separator_vertical_pane

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy2_ParamLimits

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy2

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy2_ParamLimits

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy2

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy2_ParamLimits

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy2

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy2_ParamLimits

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy2

0x28a6,	// (0x00052902) common_borders_pane_cp4

0x7cd4,	// (0x00057d30) separator_horizontal_pane_g1

0x7cdd,	// (0x00057d39) separator_horizontal_pane_g2

0x7ce6,	// (0x00057d42) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x0005fc7c) separator_horizontal_pane_g

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy3_ParamLimits

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy3

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy3_ParamLimits

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy3

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy3_ParamLimits

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy3

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy3_ParamLimits

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy3

0x28a6,	// (0x00052902) common_borders_pane_cp5

0x7cef,	// (0x00057d4b) separator_vertical_pane_g1

0x7cf8,	// (0x00057d54) separator_vertical_pane_g2

0x7d01,	// (0x00057d5d) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x0005fc83) separator_vertical_pane_g

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy4_ParamLimits

0x7c47,	// (0x00057ca3) eswt_control_pane_g1_copy4

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy4_ParamLimits

0x7c54,	// (0x00057cb0) eswt_control_pane_g2_copy4

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy4_ParamLimits

0x7c61,	// (0x00057cbd) eswt_control_pane_g3_copy4

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy4_ParamLimits

0x7c6e,	// (0x00057cca) eswt_control_pane_g4_copy4

0xdf2e,	// (0x0005df8a) eswt_ctrl_combo_button_pane

0xdf36,	// (0x0005df92) eswt_ctrl_input_pane

0xdf3e,	// (0x0005df9a) popup_choice_list_window_cp70

0xdf46,	// (0x0005dfa2) eswt_ctrl_input_pane_t1

0x28a6,	// (0x00052902) input_focus_pane_cp70

0x72b5,	// (0x00057311) bg_button_pane_cp70_ParamLimits

0x72b5,	// (0x00057311) bg_button_pane_cp70

0xdf54,	// (0x0005dfb0) eswt_ctrl_combo_button_pane_g1

0x7d38,	// (0x00057d94) wait_bar_pane_cp70

0x4d59,	// (0x00054db5) bg_popup_window_pane_cp70_ParamLimits

0x4d59,	// (0x00054db5) bg_popup_window_pane_cp70

0x7d40,	// (0x00057d9c) popup_eswt_tasktip_window_t1

0x7d56,	// (0x00057db2) wait_bar_pane_cp71_ParamLimits

0x7d56,	// (0x00057db2) wait_bar_pane_cp71

0x7d62,	// (0x00057dbe) grid_eswt_app_pane

0x3ca2,	// (0x00053cfe) scroll_pane_cp70

0xdf5c,	// (0x0005dfb8) cell_eswt_app_pane_ParamLimits

0xdf5c,	// (0x0005dfb8) cell_eswt_app_pane

0xdf86,	// (0x0005dfe2) cell_eswt_app_pane_g1_ParamLimits

0xdf86,	// (0x0005dfe2) cell_eswt_app_pane_g1

0xdfb5,	// (0x0005e011) cell_eswt_app_pane_g2_ParamLimits

0xdfb5,	// (0x0005e011) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x0005fc8a) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x0005fc8a) cell_eswt_app_pane_g

0xdfde,	// (0x0005e03a) cell_eswt_app_pane_t1_ParamLimits

0xdfde,	// (0x0005e03a) cell_eswt_app_pane_t1

0x7e25,	// (0x00057e81) grid_highlight_pane_cp70_ParamLimits

0x7e25,	// (0x00057e81) grid_highlight_pane_cp70

0x4382,	// (0x000543de) set_content_pane_g1

0x474d,	// (0x000547a9) status_small_volume_pane

0x1df4,	// (0x00051e50) status_small_volume_pane_g1

0x1dfc,	// (0x00051e58) volume_small2_pane

0x1e05,	// (0x00051e61) volume_small2_pane_g1

0x1e0e,	// (0x00051e6a) volume_small2_pane_g2

0x1e17,	// (0x00051e73) volume_small2_pane_g3

0x1e20,	// (0x00051e7c) volume_small2_pane_g4

0x1e29,	// (0x00051e85) volume_small2_pane_g5

0x1e32,	// (0x00051e8e) volume_small2_pane_g6

0x1e3b,	// (0x00051e97) volume_small2_pane_g7

0x1e44,	// (0x00051ea0) volume_small2_pane_g8

0x1e4d,	// (0x00051ea9) volume_small2_pane_g9

0x1e56,	// (0x00051eb2) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x0005fc8f) volume_small2_pane_g

0x76b6,	// (0x00057712) fep_vkb_top_text_pane_g1_ParamLimits

0xdead,	// (0x0005df09) fep_vkb_top_text_pane_t1_ParamLimits

0x792b,	// (0x00057987) popup_preview_fixed_window_g3_ParamLimits

0x792b,	// (0x00057987) popup_preview_fixed_window_g3

0xc232,	// (0x0005c28e) popup_toolbar_trans_pane

0xd8c9,	// (0x0005d925) aid_height_set_list_ParamLimits

0x60ce,	// (0x0005612a) aid_size_parent_ParamLimits

0x47ed,	// (0x00054849) list_highlight_pane_cp2_ParamLimits

0x4382,	// (0x000543de) set_content_pane_g1_ParamLimits

0xd70b,	// (0x0005d767) list_single_image_pane_ParamLimits

0xd70b,	// (0x0005d767) list_single_image_pane

0xe010,	// (0x0005e06c) aid_size_cell_image_ParamLimits

0xe010,	// (0x0005e06c) aid_size_cell_image

0xe01d,	// (0x0005e079) grid_single_image_pane_ParamLimits

0xe01d,	// (0x0005e079) grid_single_image_pane

0x4100,	// (0x0005415c) list_single_image_pane_g1_ParamLimits

0x4100,	// (0x0005415c) list_single_image_pane_g1

0x7e4a,	// (0x00057ea6) list_single_image_pane_g2_ParamLimits

0x7e4a,	// (0x00057ea6) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x0005fca4) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x0005fca4) list_single_image_pane_g

0x7e5e,	// (0x00057eba) list_single_image_pane_t1_ParamLimits

0x7e5e,	// (0x00057eba) list_single_image_pane_t1

0xe02b,	// (0x0005e087) cell_image_list_pane_ParamLimits

0xe02b,	// (0x0005e087) cell_image_list_pane

0xe041,	// (0x0005e09d) cell_image_list_pane_g1

0xe04a,	// (0x0005e0a6) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x0005fca9) cell_image_list_pane_g

0x7e9a,	// (0x00057ef6) aid_size_cell_tb_trans_pane

0x3824,	// (0x00053880) bg_tb_trans_pane

0x7eac,	// (0x00057f08) grid_tb_trans_pane

0x4ce5,	// (0x00054d41) bg_tb_trans_pane_g1

0x4cf5,	// (0x00054d51) bg_tb_trans_pane_g2

0x4ced,	// (0x00054d49) bg_tb_trans_pane_g3

0x4d05,	// (0x00054d61) bg_tb_trans_pane_g4

0x4cfd,	// (0x00054d59) bg_tb_trans_pane_g5

0x4d25,	// (0x00054d81) bg_tb_trans_pane_g6

0x4d1d,	// (0x00054d79) bg_tb_trans_pane_g7

0x4d0d,	// (0x00054d69) bg_tb_trans_pane_g8

0x4d15,	// (0x00054d71) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x0005fcae) bg_tb_trans_pane_g

0x7ec0,	// (0x00057f1c) cell_toolbar_trans_pane_ParamLimits

0x7ec0,	// (0x00057f1c) cell_toolbar_trans_pane

0x72f0,	// (0x0005734c) cell_toolbar_trans_pane_g1

0xdc96,	// (0x0005dcf2) list_form2_midp_pane_t1

0xdca4,	// (0x0005dd00) list_form2_midp_pane_t2

0x0001,

0xfaef,	// (0x0005fb4b) list_form2_midp_pane_t

0x6ed6,	// (0x00056f32) scroll_pane_cp51_ParamLimits

0x7092,	// (0x000570ee) form2_midp_wait_pane_g1

0x709b,	// (0x000570f7) form2_midp_wait_pane_g2

0x70a4,	// (0x00057100) form2_midp_wait_pane_g3

0x0002,

0xfb04,	// (0x0005fb60) form2_midp_wait_pane_g

0x299a,	// (0x000529f6) list_highlight_pane_cp21_ParamLimits

0x70fb,	// (0x00057157) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x710a,	// (0x00057166) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6286,	// (0x000562e2) list_single_2graphic_im_pane_ParamLimits

0x6286,	// (0x000562e2) list_single_2graphic_im_pane

0xe053,	// (0x0005e0af) list_single_2graphic_im_pane_g1_ParamLimits

0xe053,	// (0x0005e0af) list_single_2graphic_im_pane_g1

0xe064,	// (0x0005e0c0) list_single_2graphic_im_pane_g2_ParamLimits

0xe064,	// (0x0005e0c0) list_single_2graphic_im_pane_g2

0xe070,	// (0x0005e0cc) list_single_2graphic_im_pane_g3_ParamLimits

0xe070,	// (0x0005e0cc) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x0005fcc1) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x0005fcc1) list_single_2graphic_im_pane_g

0xe084,	// (0x0005e0e0) list_single_2graphic_im_pane_t1_ParamLimits

0xe084,	// (0x0005e0e0) list_single_2graphic_im_pane_t1

0x7937,	// (0x00057993) list_single_graphic_2heading_pane_fp_ParamLimits

0x7937,	// (0x00057993) list_single_graphic_2heading_pane_fp

0x3185,	// (0x000531e1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3185,	// (0x000531e1) list_single_graphic_2heading_pane_fp_g1

0x794c,	// (0x000579a8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x794c,	// (0x000579a8) list_single_graphic_2heading_pane_fp_g2

0x37bf,	// (0x0005381b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x37bf,	// (0x0005381b) list_single_graphic_2heading_pane_fp_g3

0x3832,	// (0x0005388e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3832,	// (0x0005388e) list_single_graphic_2heading_pane_fp_g4

0x7958,	// (0x000579b4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7958,	// (0x000579b4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0005fbe8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0005fbe8) list_single_graphic_2heading_pane_fp_g

0x3352,	// (0x000533ae) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3352,	// (0x000533ae) list_single_graphic_2heading_pane_fp_t1

0x31bd,	// (0x00053219) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x31bd,	// (0x00053219) list_single_graphic_2heading_pane_fp_t2

0x3368,	// (0x000533c4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3368,	// (0x000533c4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x0005fcca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x0005fcca) list_single_graphic_2heading_pane_fp_t

0x737c,	// (0x000573d8) fep_hwr_write_pane_g5_ParamLimits

0x737c,	// (0x000573d8) fep_hwr_write_pane_g5

0x7388,	// (0x000573e4) fep_hwr_write_pane_g6_ParamLimits

0x7388,	// (0x000573e4) fep_hwr_write_pane_g6

0x7c16,	// (0x00057c72) eswt_shell_pane_ParamLimits

0x4d59,	// (0x00054db5) bg_popup_window_pane_cp18_ParamLimits

0x6016,	// (0x00056072) heading_pane_cp70

0x7d40,	// (0x00057d9c) popup_eswt_tasktip_window_t1_ParamLimits

0xd187,	// (0x0005d1e3) aid_touch_tab_arrow_left

0xd19d,	// (0x0005d1f9) aid_touch_tab_arrow_right

0xb2c5,	// (0x0005b321) title_pane_g3_ParamLimits

0xb2c5,	// (0x0005b321) title_pane_g3

0x37e3,	// (0x0005383f) set_value_pane_g1

0xc232,	// (0x0005c28e) popup_toolbar_trans_pane_ParamLimits

0x7e9a,	// (0x00057ef6) aid_size_cell_tb_trans_pane_ParamLimits

0x3824,	// (0x00053880) bg_tb_trans_pane_ParamLimits

0x7eac,	// (0x00057f08) grid_tb_trans_pane_ParamLimits

0x2c23,	// (0x00052c7f) cont_note_pane_ParamLimits

0x2c23,	// (0x00052c7f) cont_note_pane

0x3589,	// (0x000535e5) cont_snote2_single_text_pane_ParamLimits

0x3589,	// (0x000535e5) cont_snote2_single_text_pane

0x3589,	// (0x000535e5) cont_snote2_single_graphic_pane_ParamLimits

0x3589,	// (0x000535e5) cont_snote2_single_graphic_pane

0x535e,	// (0x000553ba) cont_note_wait_pane_ParamLimits

0x535e,	// (0x000553ba) cont_note_wait_pane

0x535e,	// (0x000553ba) cont_note_image_pane_ParamLimits

0x535e,	// (0x000553ba) cont_note_image_pane

0x7f54,	// (0x00057fb0) popup_note2_window_g1_ParamLimits

0x7f54,	// (0x00057fb0) popup_note2_window_g1

0x7f85,	// (0x00057fe1) popup_note2_window_t1_ParamLimits

0x7f85,	// (0x00057fe1) popup_note2_window_t1

0x7fca,	// (0x00058026) popup_note2_window_t2_ParamLimits

0x7fca,	// (0x00058026) popup_note2_window_t2

0x800f,	// (0x0005806b) popup_note2_window_t3_ParamLimits

0x800f,	// (0x0005806b) popup_note2_window_t3

0x8054,	// (0x000580b0) popup_note2_window_t4_ParamLimits

0x8054,	// (0x000580b0) popup_note2_window_t4

0x2ca7,	// (0x00052d03) popup_note2_window_t5_ParamLimits

0x2ca7,	// (0x00052d03) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x0005fcd6) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x0005fcd6) popup_note2_window_t

0x8083,	// (0x000580df) popup_note2_image_window_g1_ParamLimits

0x8083,	// (0x000580df) popup_note2_image_window_g1

0x808f,	// (0x000580eb) popup_note2_image_window_g2_ParamLimits

0x808f,	// (0x000580eb) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x0005fce1) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x0005fce1) popup_note2_image_window_g

0x80a1,	// (0x000580fd) popup_note2_image_window_t1_ParamLimits

0x80a1,	// (0x000580fd) popup_note2_image_window_t1

0x80b9,	// (0x00058115) popup_note2_image_window_t2_ParamLimits

0x80b9,	// (0x00058115) popup_note2_image_window_t2

0x80d1,	// (0x0005812d) popup_note2_image_window_t3_ParamLimits

0x80d1,	// (0x0005812d) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x0005fce6) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x0005fce6) popup_note2_image_window_t

0x536c,	// (0x000553c8) popup_note2_wait_window_g1_ParamLimits

0x536c,	// (0x000553c8) popup_note2_wait_window_g1

0x80ed,	// (0x00058149) popup_note2_wait_window_g2_ParamLimits

0x80ed,	// (0x00058149) popup_note2_wait_window_g2

0x5384,	// (0x000553e0) popup_note2_wait_window_g3_ParamLimits

0x5384,	// (0x000553e0) popup_note2_wait_window_g3

0x0002,

0xfc91,	// (0x0005fced) popup_note2_wait_window_g_ParamLimits

0xfc91,	// (0x0005fced) popup_note2_wait_window_g

0x80f9,	// (0x00058155) popup_note2_wait_window_t1_ParamLimits

0x80f9,	// (0x00058155) popup_note2_wait_window_t1

0x8117,	// (0x00058173) popup_note2_wait_window_t2_ParamLimits

0x8117,	// (0x00058173) popup_note2_wait_window_t2

0x8135,	// (0x00058191) popup_note2_wait_window_t3_ParamLimits

0x8135,	// (0x00058191) popup_note2_wait_window_t3

0x8147,	// (0x000581a3) popup_note2_wait_window_t4_ParamLimits

0x8147,	// (0x000581a3) popup_note2_wait_window_t4

0x0003,

0xfc98,	// (0x0005fcf4) popup_note2_wait_window_t_ParamLimits

0xfc98,	// (0x0005fcf4) popup_note2_wait_window_t

0x8159,	// (0x000581b5) wait_bar2_pane_ParamLimits

0x8159,	// (0x000581b5) wait_bar2_pane

0x8171,	// (0x000581cd) popup_snote2_single_text_window_g1_ParamLimits

0x8171,	// (0x000581cd) popup_snote2_single_text_window_g1

0x8199,	// (0x000581f5) popup_snote2_single_text_window_t1_ParamLimits

0x8199,	// (0x000581f5) popup_snote2_single_text_window_t1

0x81e5,	// (0x00058241) popup_snote2_single_text_window_t2_ParamLimits

0x81e5,	// (0x00058241) popup_snote2_single_text_window_t2

0x8231,	// (0x0005828d) popup_snote2_single_text_window_t3_ParamLimits

0x8231,	// (0x0005828d) popup_snote2_single_text_window_t3

0x8272,	// (0x000582ce) popup_snote2_single_text_window_t4_ParamLimits

0x8272,	// (0x000582ce) popup_snote2_single_text_window_t4

0x82a8,	// (0x00058304) popup_snote2_single_text_window_t5_ParamLimits

0x82a8,	// (0x00058304) popup_snote2_single_text_window_t5

0x0004,

0xfca1,	// (0x0005fcfd) popup_snote2_single_text_window_t_ParamLimits

0xfca1,	// (0x0005fcfd) popup_snote2_single_text_window_t

0x82d3,	// (0x0005832f) popup_snote2_single_graphic_window_g1_ParamLimits

0x82d3,	// (0x0005832f) popup_snote2_single_graphic_window_g1

0x82fb,	// (0x00058357) popup_snote2_single_graphic_window_g2_ParamLimits

0x82fb,	// (0x00058357) popup_snote2_single_graphic_window_g2

0x0001,

0xfcac,	// (0x0005fd08) popup_snote2_single_graphic_window_g_ParamLimits

0xfcac,	// (0x0005fd08) popup_snote2_single_graphic_window_g

0x8323,	// (0x0005837f) popup_snote2_single_graphic_window_t1_ParamLimits

0x8323,	// (0x0005837f) popup_snote2_single_graphic_window_t1

0x836f,	// (0x000583cb) popup_snote2_single_graphic_window_t2_ParamLimits

0x836f,	// (0x000583cb) popup_snote2_single_graphic_window_t2

0x8231,	// (0x0005828d) popup_snote2_single_graphic_window_t3_ParamLimits

0x8231,	// (0x0005828d) popup_snote2_single_graphic_window_t3

0x8272,	// (0x000582ce) popup_snote2_single_graphic_window_t4_ParamLimits

0x8272,	// (0x000582ce) popup_snote2_single_graphic_window_t4

0x82a8,	// (0x00058304) popup_snote2_single_graphic_window_t5_ParamLimits

0x82a8,	// (0x00058304) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb1,	// (0x0005fd0d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb1,	// (0x0005fd0d) popup_snote2_single_graphic_window_t

0x6d97,	// (0x00056df3) clock_nsta_pane_cp2_t1

0x6d97,	// (0x00056df3) clock_nsta_pane_cp2_t2

0x0001,

0xfac5,	// (0x0005fb21) clock_nsta_pane_cp2_t

0x0497,	// (0x000504f3) form_field_data_wide_pane_g1_ParamLimits

0x37bf,	// (0x0005381b) form_field_data_wide_pane_g2_ParamLimits

0x37bf,	// (0x0005381b) form_field_data_wide_pane_g2

0x3832,	// (0x0005388e) form_field_data_wide_pane_g3_ParamLimits

0x3832,	// (0x0005388e) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0005f6e2) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0005f6e2) form_field_data_wide_pane_g

0xdbc3,	// (0x0005dc1f) grid_touch_3_pane_ParamLimits

0xdbc3,	// (0x0005dc1f) grid_touch_3_pane

0xe0b5,	// (0x0005e111) cell_touch_3_pane_ParamLimits

0xe0b5,	// (0x0005e111) cell_touch_3_pane

0x72f0,	// (0x0005734c) cell_touch_3_pane_g1

0x72f0,	// (0x0005734c) cell_touch_3_pane_g2

0x0001,

0xfb4a,	// (0x0005fba6) cell_touch_3_pane_g

0x2cd9,	// (0x00052d35) cont_query_data_pane

0x2ce1,	// (0x00052d3d) cont_query_data_pane_cp1

0x83e9,	// (0x00058445) button_value_adjust_pane_cp7

0x83f1,	// (0x0005844d) query_popup_pane_cp3

0x3f89,	// (0x00053fe5) bg_popup_sub_pane_cp22_ParamLimits

0x085b,	// (0x000508b7) navi_navi_volume_pane_cp2

0x0876,	// (0x000508d2) popup_side_volume_key_window_g2

0x0885,	// (0x000508e1) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005f778) popup_side_volume_key_window_g

0x08a2,	// (0x000508fe) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0005f77f) popup_side_volume_key_window_t

0x424c,	// (0x000542a8) popup_side_volume_key_window_ParamLimits

0xb55f,	// (0x0005b5bb) list_double_graphic_pane_g4_ParamLimits

0xb55f,	// (0x0005b5bb) list_double_graphic_pane_g4

0xda42,	// (0x0005da9e) list_single_2heading_msg_pane_ParamLimits

0xda42,	// (0x0005da9e) list_single_2heading_msg_pane

0xd71c,	// (0x0005d778) list_single_2heading_msg_pane_g1_ParamLimits

0xd71c,	// (0x0005d778) list_single_2heading_msg_pane_g1

0xd728,	// (0x0005d784) list_single_2heading_msg_pane_g2_ParamLimits

0xd728,	// (0x0005d784) list_single_2heading_msg_pane_g2

0xd73b,	// (0x0005d797) list_single_2heading_msg_pane_g3_ParamLimits

0xd73b,	// (0x0005d797) list_single_2heading_msg_pane_g3

0xd747,	// (0x0005d7a3) list_single_2heading_msg_pane_g4_ParamLimits

0xd747,	// (0x0005d7a3) list_single_2heading_msg_pane_g4

0x0003,

0xfcbc,	// (0x0005fd18) list_single_2heading_msg_pane_g_ParamLimits

0xfcbc,	// (0x0005fd18) list_single_2heading_msg_pane_g

0xc558,	// (0x0005c5b4) list_single_2heading_msg_pane_t1_ParamLimits

0xc558,	// (0x0005c5b4) list_single_2heading_msg_pane_t1

0xc580,	// (0x0005c5dc) list_single_2heading_msg_pane_t2_ParamLimits

0xc580,	// (0x0005c5dc) list_single_2heading_msg_pane_t2

0xc5eb,	// (0x0005c647) list_single_2heading_msg_pane_t3_ParamLimits

0xc5eb,	// (0x0005c647) list_single_2heading_msg_pane_t3

0x3441,	// (0x0005349d) list_single_2heading_msg_pane_t4_ParamLimits

0x3441,	// (0x0005349d) list_single_2heading_msg_pane_t4

0x0003,

0xfcc5,	// (0x0005fd21) list_single_2heading_msg_pane_t_ParamLimits

0xfcc5,	// (0x0005fd21) list_single_2heading_msg_pane_t

0x28ee,	// (0x0005294a) title_pane_g4_ParamLimits

0x28ee,	// (0x0005294a) title_pane_g4

0x066a,	// (0x000506c6) title_pane_stacon_g3_ParamLimits

0x066a,	// (0x000506c6) title_pane_stacon_g3

0x7f17,	// (0x00057f73) list_single_2graphic_im_pane_g4_ParamLimits

0x7f17,	// (0x00057f73) list_single_2graphic_im_pane_g4

0x5dbd,	// (0x00055e19) popup_side_volume_key_window_cp

0x65cf,	// (0x0005662b) main_idle_act2_pane_t1

0x128b,	// (0x000512e7) toolbar_button_pane_g10

0xcd6d,	// (0x0005cdc9) popup_toolbar_window_cp1

0x6d88,	// (0x00056de4) clock_nsta_pane_cp_t1

0x6d88,	// (0x00056de4) clock_nsta_pane_cp_t2

0x0001,

0xfac0,	// (0x0005fb1c) clock_nsta_pane_cp_t

0x085b,	// (0x000508b7) navi_navi_volume_pane_cp2_ParamLimits

0x086a,	// (0x000508c6) popup_side_volume_key_window_g1_ParamLimits

0x0876,	// (0x000508d2) popup_side_volume_key_window_g2_ParamLimits

0x0885,	// (0x000508e1) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005f778) popup_side_volume_key_window_g_ParamLimits

0x1a60,	// (0x00051abc) fep_hwr_aid_pane

0x1b07,	// (0x00051b63) bg_fep_hwr_top_pane_g4_ParamLimits

0x734c,	// (0x000573a8) fep_hwr_top_pane_g1_ParamLimits

0x735e,	// (0x000573ba) fep_hwr_top_pane_g2_ParamLimits

0x1b27,	// (0x00051b83) fep_hwr_top_pane_g3_ParamLimits

0xfb15,	// (0x0005fb71) fep_hwr_top_pane_g_ParamLimits

0x1b3c,	// (0x00051b98) fep_hwr_top_text_pane_ParamLimits

0x5b80,	// (0x00055bdc) aid_touch_tab_arrow_arrow_2

0x5b89,	// (0x00055be5) aid_touch_tab_arrow_left_2

0x1a74,	// (0x00051ad0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1aab,	// (0x00051b07) fep_hwr_prediction_pane

0x74be,	// (0x0005751a) fep_vkb_prediction_pane

0xde8d,	// (0x0005dee9) fep_vkb_side_pane_g3_ParamLimits

0xde8d,	// (0x0005dee9) fep_vkb_side_pane_g3

0x1cb7,	// (0x00051d13) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1d23,	// (0x00051d7f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1d30,	// (0x00051d8c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x0005fc20) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1e5f,	// (0x00051ebb) fep_hwr_prediction_pane_g1

0x1e69,	// (0x00051ec5) fep_hwr_prediction_pane_g2

0x1e71,	// (0x00051ecd) fep_hwr_prediction_pane_g3

0x1e79,	// (0x00051ed5) fep_hwr_prediction_pane_g4

0x0003,

0xfcce,	// (0x0005fd2a) fep_hwr_prediction_pane_g

0x8416,	// (0x00058472) fep_vkb_prediction_pane_g1

0x8420,	// (0x0005847c) fep_vkb_prediction_pane_g2

0x8428,	// (0x00058484) fep_vkb_prediction_pane_g3

0x8430,	// (0x0005848c) fep_vkb_prediction_pane_g4

0x0003,

0xfcd7,	// (0x0005fd33) fep_vkb_prediction_pane_g

0x166d,	// (0x000516c9) slider_set_pane_g3

0x1681,	// (0x000516dd) slider_set_pane_g4

0x1699,	// (0x000516f5) slider_set_pane_g5

0x166d,	// (0x000516c9) slider_set_pane_g6

0x16af,	// (0x0005170b) slider_set_pane_g7

0x6233,	// (0x0005628f) slider_form_pane_g3

0x623c,	// (0x00056298) slider_form_pane_g4

0x6244,	// (0x000562a0) slider_form_pane_g5

0x6233,	// (0x0005628f) slider_form_pane_g6

0xda14,	// (0x0005da70) slider_form_pane_g7

0x6879,	// (0x000568d5) slider_set_pane_vc_g3

0x6882,	// (0x000568de) slider_set_pane_vc_g4

0x688b,	// (0x000568e7) slider_set_pane_vc_g5

0x6879,	// (0x000568d5) slider_set_pane_vc_g6

0x6894,	// (0x000568f0) slider_set_pane_vc_g7

0x6a54,	// (0x00056ab0) slider_form_pane_vc_g1

0x6a5d,	// (0x00056ab9) slider_form_pane_vc_g2

0x6a66,	// (0x00056ac2) slider_form_pane_vc_g3

0x6a54,	// (0x00056ab0) slider_form_pane_vc_g4

0x6a6f,	// (0x00056acb) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x0005faee) slider_form_pane_vc_g

0xf34b,	// (0x0005f3a7) main_idle_act3_pane

0x8438,	// (0x00058494) ai3_links_pane

0xe0fd,	// (0x0005e159) popup_ai3_data_window_ParamLimits

0xe0fd,	// (0x0005e159) popup_ai3_data_window

0x28a6,	// (0x00052902) grid_ai3_links_pane

0xe117,	// (0x0005e173) cell_ai3_links_pane_ParamLimits

0xe117,	// (0x0005e173) cell_ai3_links_pane

0x8473,	// (0x000584cf) bg_popup_sub_pane_cp11

0x8480,	// (0x000584dc) cell_ai3_links_pane_g1

0x28a6,	// (0x00052902) bg_popup_sub_pane_cp12

0x84a5,	// (0x00058501) heading_ai3_data_pane

0x84ad,	// (0x00058509) list_ai3_gene_pane

0x84b9,	// (0x00058515) popup_ai3_data_window_g1

0x84c1,	// (0x0005851d) heading_ai3_data_pane_g1

0x84c9,	// (0x00058525) heading_ai3_data_pane_t1

0x84d7,	// (0x00058533) list_double_ai3_gene_pane_ParamLimits

0x84d7,	// (0x00058533) list_double_ai3_gene_pane

0x84e4,	// (0x00058540) list_single_ai3_gene_pane_ParamLimits

0x84e4,	// (0x00058540) list_single_ai3_gene_pane

0x72b5,	// (0x00057311) list_highlight_pane_cp7_ParamLimits

0x72b5,	// (0x00057311) list_highlight_pane_cp7

0x84f1,	// (0x0005854d) list_single_a13_gene_pane_t1_ParamLimits

0x84f1,	// (0x0005854d) list_single_a13_gene_pane_t1

0x8508,	// (0x00058564) list_single_ai3_gene_pane_g1

0x8511,	// (0x0005856d) list_single_ai3_gene_pane_g2

0x0001,

0xfce0,	// (0x0005fd3c) list_single_ai3_gene_pane_g

0x8519,	// (0x00058575) list_double_ai3_gene_pane_g1_ParamLimits

0x8519,	// (0x00058575) list_double_ai3_gene_pane_g1

0x8525,	// (0x00058581) list_double_ai3_gene_pane_t1_ParamLimits

0x8525,	// (0x00058581) list_double_ai3_gene_pane_t1

0x8541,	// (0x0005859d) list_double_ai3_gene_pane_t2_ParamLimits

0x8541,	// (0x0005859d) list_double_ai3_gene_pane_t2

0x8557,	// (0x000585b3) list_double_ai3_gene_pane_t3_ParamLimits

0x8557,	// (0x000585b3) list_double_ai3_gene_pane_t3

0x0002,

0xfce5,	// (0x0005fd41) list_double_ai3_gene_pane_t_ParamLimits

0xfce5,	// (0x0005fd41) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x337e,	// (0x000533da) aid_size_min_col_2

0xe0e7,	// (0x0005e143) aid_size_min_msg_ParamLimits

0xe0e7,	// (0x0005e143) aid_size_min_msg

0xdea1,	// (0x0005defd) fep_vkb_top_text_pane_g2_ParamLimits

0xdea1,	// (0x0005defd) fep_vkb_top_text_pane_g2

0x0001,

0xfb45,	// (0x0005fba1) fep_vkb_top_text_pane_g_ParamLimits

0xfb45,	// (0x0005fba1) fep_vkb_top_text_pane_g

0xf34b,	// (0x0005f3a7) main_hc_apps_shell_pane

0x8574,	// (0x000585d0) grid_hc_apps_pane_ParamLimits

0x8574,	// (0x000585d0) grid_hc_apps_pane

0x8583,	// (0x000585df) list_hc_apps_pane

0x858b,	// (0x000585e7) scroll_pane_cp37_ParamLimits

0x858b,	// (0x000585e7) scroll_pane_cp37

0xe131,	// (0x0005e18d) cell_hc_apps_pane_ParamLimits

0xe131,	// (0x0005e18d) cell_hc_apps_pane

0xe1ef,	// (0x0005e24b) cell_hc_apps_pane_g1_ParamLimits

0xe1ef,	// (0x0005e24b) cell_hc_apps_pane_g1

0x8676,	// (0x000586d2) cell_hc_apps_pane_g2_ParamLimits

0x8676,	// (0x000586d2) cell_hc_apps_pane_g2

0x8692,	// (0x000586ee) cell_hc_apps_pane_g3_ParamLimits

0x8692,	// (0x000586ee) cell_hc_apps_pane_g3

0x0002,

0xfcec,	// (0x0005fd48) cell_hc_apps_pane_g_ParamLimits

0xfcec,	// (0x0005fd48) cell_hc_apps_pane_g

0xe21c,	// (0x0005e278) cell_hc_apps_pane_t1_ParamLimits

0xe21c,	// (0x0005e278) cell_hc_apps_pane_t1

0x2c23,	// (0x00052c7f) grid_highlight_pane_cp10_ParamLimits

0x2c23,	// (0x00052c7f) grid_highlight_pane_cp10

0xe25a,	// (0x0005e2b6) list_single_hc_apps_pane_ParamLimits

0xe25a,	// (0x0005e2b6) list_single_hc_apps_pane

0xe287,	// (0x0005e2e3) list_single_hc_apps_pane_g1

0xd75f,	// (0x0005d7bb) list_single_hc_apps_pane_g2

0x0001,

0xfcf3,	// (0x0005fd4f) list_single_hc_apps_pane_g

0xd778,	// (0x0005d7d4) list_single_hc_apps_pane_g2_copy1

0x349b,	// (0x000534f7) list_single_hc_apps_pane_t1

0x299a,	// (0x000529f6) bg_set_opt_pane_cp_ParamLimits

0xf4cb,	// (0x0005f527) setting_slider_pane_t1_ParamLimits

0xf4e4,	// (0x0005f540) setting_slider_pane_t2_ParamLimits

0xf4fe,	// (0x0005f55a) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005f5c0) setting_slider_pane_t_ParamLimits

0xf516,	// (0x0005f572) slider_set_pane_ParamLimits

0x0b72,	// (0x00050bce) control_pane_g5_ParamLimits

0x0b72,	// (0x00050bce) control_pane_g5

0x6082,	// (0x000560de) slider_set_pane_g1_ParamLimits

0x1661,	// (0x000516bd) slider_set_pane_g2_ParamLimits

0x166d,	// (0x000516c9) slider_set_pane_g3_ParamLimits

0x1681,	// (0x000516dd) slider_set_pane_g4_ParamLimits

0x1699,	// (0x000516f5) slider_set_pane_g5_ParamLimits

0x166d,	// (0x000516c9) slider_set_pane_g6_ParamLimits

0x16af,	// (0x0005170b) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0005f9c6) slider_set_pane_g_ParamLimits

0x432d,	// (0x00054389) navi_icon_text_pane_ParamLimits

0xd150,	// (0x0005d1ac) aid_fill_nsta_2_ParamLimits

0xd187,	// (0x0005d1e3) aid_touch_tab_arrow_left_ParamLimits

0xd19d,	// (0x0005d1f9) aid_touch_tab_arrow_right_ParamLimits

0xd238,	// (0x0005d294) clock_nsta_pane_ParamLimits

0x5b62,	// (0x00055bbe) navi_icon_pane_g1_ParamLimits

0x5b6e,	// (0x00055bca) navi_text_pane_t1_ParamLimits

0xdc8a,	// (0x0005dce6) navi_icon_text_pane_g1_ParamLimits

0x6ea0,	// (0x00056efc) navi_icon_text_pane_t1_ParamLimits

0xe287,	// (0x0005e2e3) list_single_hc_apps_pane_g1_ParamLimits

0xd75f,	// (0x0005d7bb) list_single_hc_apps_pane_g2_ParamLimits

0xfcf3,	// (0x0005fd4f) list_single_hc_apps_pane_g_ParamLimits

0xd778,	// (0x0005d7d4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x349b,	// (0x000534f7) list_single_hc_apps_pane_t1_ParamLimits

0xb22f,	// (0x0005b28b) popup_toolbar2_fixed_window_ParamLimits

0xb22f,	// (0x0005b28b) popup_toolbar2_fixed_window

0xc228,	// (0x0005c284) popup_toolbar2_float_window

0x28a6,	// (0x00052902) bg_popup_sub_pane_cp27

0x8769,	// (0x000587c5) grid_toolbar2_float_pane

0x28a6,	// (0x00052902) bg_popup_sub_pane_cp26

0x8769,	// (0x000587c5) grid_toolbar2_fixed_pane

0xe2a0,	// (0x0005e2fc) cell_toolbar2_fixed_pane_ParamLimits

0xe2a0,	// (0x0005e2fc) cell_toolbar2_fixed_pane

0xe2ba,	// (0x0005e316) cell_toolbar2_fixed_pane_g1

0x878a,	// (0x000587e6) toolbar2_fixed_button_pane

0x4ce5,	// (0x00054d41) toolbar2_fixed_button_pane_g1

0x4cf5,	// (0x00054d51) toolbar2_fixed_button_pane_g2

0x4ced,	// (0x00054d49) toolbar2_fixed_button_pane_g3

0x4d05,	// (0x00054d61) toolbar2_fixed_button_pane_g4

0x4cfd,	// (0x00054d59) toolbar2_fixed_button_pane_g5

0x4d0d,	// (0x00054d69) toolbar2_fixed_button_pane_g6

0x4d15,	// (0x00054d71) toolbar2_fixed_button_pane_g7

0x4d25,	// (0x00054d81) toolbar2_fixed_button_pane_g8

0x4d1d,	// (0x00054d79) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0005f8c8) toolbar2_fixed_button_pane_g

0x8792,	// (0x000587ee) cell_toolbar2_float_pane_ParamLimits

0x8792,	// (0x000587ee) cell_toolbar2_float_pane

0x87a3,	// (0x000587ff) cell_toolbar2_float_pane_g1

0x878a,	// (0x000587e6) toolbar2_fixed_button_pane_cp

0xdd7b,	// (0x0005ddd7) fep_vkb_accented_list_pane_ParamLimits

0xdd7b,	// (0x0005ddd7) fep_vkb_accented_list_pane

0x1c97,	// (0x00051cf3) bg_popup_fep_shadow_pane_g9

0x44ad,	// (0x00054509) bg_popup_fep_shadow_pane_cp3

0x396f,	// (0x000539cb) list_accented_list_pane

0x87ac,	// (0x00058808) list_single_accented_list_pane_ParamLimits

0x87ac,	// (0x00058808) list_single_accented_list_pane

0x44ad,	// (0x00054509) list_highlight_pane_cp10

0x87bd,	// (0x00058819) list_single_accented_list_pane_t1

0xc152,	// (0x0005c1ae) popup_slider_window_ParamLimits

0xc152,	// (0x0005c1ae) popup_slider_window

0x83f9,	// (0x00058455) aid_indentation_list_msg

0xe3e8,	// (0x0005e444) bg_popup_window_pane_cp19

0x88e1,	// (0x0005893d) popup_slider_window_g1

0x88fd,	// (0x00058959) popup_slider_window_g2

0x8919,	// (0x00058975) popup_slider_window_g3

0x0005,

0xfcf8,	// (0x0005fd54) popup_slider_window_g

0x8975,	// (0x000589d1) popup_slider_window_t1

0x89e9,	// (0x00058a45) small_volume_slider_vertical_pane

0x72f0,	// (0x0005734c) small_volume_slider_vertical_pane_g1

0x72f0,	// (0x0005734c) small_volume_slider_vertical_pane_g2

0x8a05,	// (0x00058a61) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0a,	// (0x0005fd66) small_volume_slider_vertical_pane_g

0xb19d,	// (0x0005b1f9) area_side_right_pane_ParamLimits

0xb19d,	// (0x0005b1f9) area_side_right_pane

0xc659,	// (0x0005c6b5) aid_size_side_button_ParamLimits

0xc659,	// (0x0005c6b5) aid_size_side_button

0xc672,	// (0x0005c6ce) grid_sctrl_middle_pane_ParamLimits

0xc672,	// (0x0005c6ce) grid_sctrl_middle_pane

0x1eb4,	// (0x00051f10) sctrl_sk_bottom_pane

0x1ec5,	// (0x00051f21) sctrl_sk_top_pane

0x1ed7,	// (0x00051f33) aid_touch_sctrl_top

0x1ee4,	// (0x00051f40) bg_sctrl_sk_pane_ParamLimits

0x1ee4,	// (0x00051f40) bg_sctrl_sk_pane

0x1ef2,	// (0x00051f4e) sctrl_sk_top_pane_g1

0x1eff,	// (0x00051f5b) sctrl_sk_top_pane_t1

0x1ed7,	// (0x00051f33) aid_touch_sctrl_bottom

0x1ee4,	// (0x00051f40) bg_sctrl_sk_pane_cp_ParamLimits

0x1ee4,	// (0x00051f40) bg_sctrl_sk_pane_cp

0x1f1a,	// (0x00051f76) sctrl_sk_bottom_pane_g1

0x1eff,	// (0x00051f5b) sctrl_sk_bottom_pane_t1

0xc68c,	// (0x0005c6e8) cell_sctrl_middle_pane_ParamLimits

0xc68c,	// (0x0005c6e8) cell_sctrl_middle_pane

0xc69d,	// (0x0005c6f9) aid_touch_sctrl_middle_ParamLimits

0xc69d,	// (0x0005c6f9) aid_touch_sctrl_middle

0xc6aa,	// (0x0005c706) bg_sctrl_middle_pane_ParamLimits

0xc6aa,	// (0x0005c706) bg_sctrl_middle_pane

0x2587,	// (0x000525e3) cell_sctrl_middle_pane_g1_ParamLimits

0x2587,	// (0x000525e3) cell_sctrl_middle_pane_g1

0xc6b8,	// (0x0005c714) cell_sctrl_middle_pane_g2_ParamLimits

0xc6b8,	// (0x0005c714) cell_sctrl_middle_pane_g2

0x0001,

0xfd16,	// (0x0005fd72) cell_sctrl_middle_pane_g_ParamLimits

0xfd16,	// (0x0005fd72) cell_sctrl_middle_pane_g

0x4ce5,	// (0x00054d41) bg_sctrl_middle_pane_g1

0x4ced,	// (0x00054d49) bg_sctrl_middle_pane_g2

0x4cf5,	// (0x00054d51) bg_sctrl_middle_pane_g3

0x4cfd,	// (0x00054d59) bg_sctrl_middle_pane_g4

0x4d05,	// (0x00054d61) bg_sctrl_middle_pane_g5

0x4d0d,	// (0x00054d69) bg_sctrl_middle_pane_g6

0x4d15,	// (0x00054d71) bg_sctrl_middle_pane_g7

0x4d1d,	// (0x00054d79) bg_sctrl_middle_pane_g8

0x0007,

0xfd1b,	// (0x0005fd77) bg_sctrl_middle_pane_g

0x4d25,	// (0x00054d81) bg_sctrl_middle_pane_g8_copy1

0x4ce5,	// (0x00054d41) bg_sctrl_sk_pane_g1

0x4cf5,	// (0x00054d51) bg_sctrl_sk_pane_g2

0x4ced,	// (0x00054d49) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0005f8c8) bg_sctrl_sk_pane_g

0x3747,	// (0x000537a3) aid_size_touch_scroll_bar

0x4d05,	// (0x00054d61) bg_sctrl_sk_pane_g4

0x4cfd,	// (0x00054d59) bg_sctrl_sk_pane_g5

0x4d0d,	// (0x00054d69) bg_sctrl_sk_pane_g6

0x4d15,	// (0x00054d71) bg_sctrl_sk_pane_g7

0x4d25,	// (0x00054d81) bg_sctrl_sk_pane_g8

0x4d1d,	// (0x00054d79) bg_sctrl_sk_pane_g9

0x0d28,	// (0x00050d84) popup_fep_china_hwr2_fs_candidate_window

0xbc72,	// (0x0005bcce) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbc72,	// (0x0005bcce) popup_fep_china_hwr2_fs_control_window

0x1cb7,	// (0x00051d13) sctrl_sk_top_pane_g2

0x0001,

0xfd11,	// (0x0005fd6d) sctrl_sk_top_pane_g

0xe4a0,	// (0x0005e4fc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4a0,	// (0x0005e4fc) aid_fep_china_hwr2_fs_cell

0xe4b4,	// (0x0005e510) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4b4,	// (0x0005e510) bg_popup_fep_shadow_pane_cp4

0xe4cb,	// (0x0005e527) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4cb,	// (0x0005e527) bg_popup_fep_shadow_pane_cp5

0xe4dd,	// (0x0005e539) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe4dd,	// (0x0005e539) popup_fep_china_hwr2_fs_control_bar_grid

0xe4f1,	// (0x0005e54d) popup_fep_china_hwr2_fs_control_funtion_grid

0x8a61,	// (0x00058abd) aid_fep_china_hwr2_fs_candi_cell

0x28a6,	// (0x00052902) bg_popup_fep_shadow_pane_cp6

0x8a6b,	// (0x00058ac7) popup_fep_china_hwr2_fs_candidate_grid

0xe4f9,	// (0x0005e555) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4f9,	// (0x0005e555) cell_fep_china_hwr2_fs_funtion_grid

0x72f0,	// (0x0005734c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8a8d,	// (0x00058ae9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8a8d,	// (0x00058ae9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8abc,	// (0x00058b18) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8abc,	// (0x00058b18) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2c,	// (0x0005fd88) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2c,	// (0x0005fd88) cell_fep_china_hwr2_fs_funtion_grid_g

0xe511,	// (0x0005e56d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe511,	// (0x0005e56d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe526,	// (0x0005e582) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe526,	// (0x0005e582) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd31,	// (0x0005fd8d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd31,	// (0x0005fd8d) cell_fep_china_hwr2_fs_funtion_grid_t

0x8b03,	// (0x00058b5f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8b0b,	// (0x00058b67) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8b13,	// (0x00058b6f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd36,	// (0x0005fd92) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8b1b,	// (0x00058b77) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8b1b,	// (0x00058b77) cell_fep_china_hwr2_fs_candidate_grid

0x8b34,	// (0x00058b90) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8b3c,	// (0x00058b98) popup_fep_china_hwr2_fs_candidate_grid_g21

0x72f0,	// (0x0005734c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x72f0,	// (0x0005734c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4a,	// (0x0005fba6) cell_fep_china_hwr2_fs_candidate_grid_g

0x8b44,	// (0x00058ba0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48e9,	// (0x00054945) clock_nsta_pane_cp_24_ParamLimits

0x48e9,	// (0x00054945) clock_nsta_pane_cp_24

0x4967,	// (0x000549c3) indicator_nsta_pane_cp_24_ParamLimits

0x4967,	// (0x000549c3) indicator_nsta_pane_cp_24

0x59de,	// (0x00055a3a) heading_pane_g1

0x0001,

0xf8d1,	// (0x0005f92d) heading_pane_g

0x63d6,	// (0x00056432) grid_sct_catagory_button_pane

0x6406,	// (0x00056462) scroll_pane_cp5_ParamLimits

0x6ee2,	// (0x00056f3e) button_value_adjust_pane_cp5_ParamLimits

0x6ee2,	// (0x00056f3e) button_value_adjust_pane_cp5

0x6fc1,	// (0x0005701d) form2_midp_time_pane_ParamLimits

0x8b52,	// (0x00058bae) cell_sct_catagory_button_pane_ParamLimits

0x8b52,	// (0x00058bae) cell_sct_catagory_button_pane

0x72b5,	// (0x00057311) bg_button_pane_cp01_ParamLimits

0x72b5,	// (0x00057311) bg_button_pane_cp01

0x72f0,	// (0x0005734c) cell_sct_catagory_button_pane_g1

0xc1cb,	// (0x0005c227) popup_tb_extension_window

0xe542,	// (0x0005e59e) aid_size_cell_ext_ParamLimits

0xe542,	// (0x0005e59e) aid_size_cell_ext

0x3589,	// (0x000535e5) bg_tb_trans_pane_cp1_ParamLimits

0x3589,	// (0x000535e5) bg_tb_trans_pane_cp1

0xe568,	// (0x0005e5c4) grid_tb_ext_pane_ParamLimits

0xe568,	// (0x0005e5c4) grid_tb_ext_pane

0xe5a3,	// (0x0005e5ff) cell_tb_ext_pane_ParamLimits

0xe5a3,	// (0x0005e5ff) cell_tb_ext_pane

0xe5cb,	// (0x0005e627) cell_tb_ext_pane_g1_ParamLimits

0xe5cb,	// (0x0005e627) cell_tb_ext_pane_g1

0x8be6,	// (0x00058c42) cell_tb_ext_pane_t1

0x2c23,	// (0x00052c7f) list_highlight_pane_cp11_ParamLimits

0x2c23,	// (0x00052c7f) list_highlight_pane_cp11

0xf45e,	// (0x0005f4ba) popup_uni_indicator_window_ParamLimits

0xf45e,	// (0x0005f4ba) popup_uni_indicator_window

0x3824,	// (0x00053880) bg_popup_sub_pane_cp14

0x8c01,	// (0x00058c5d) list_uniindi_pane

0x8c0d,	// (0x00058c69) uniindi_top_pane

0x2c23,	// (0x00052c7f) bg_uniindi_top_pane

0x8c2c,	// (0x00058c88) uniindi_top_pane_g1

0x8c42,	// (0x00058c9e) uniindi_top_pane_g2

0x0003,

0xfd3d,	// (0x0005fd99) uniindi_top_pane_g

0x8c6c,	// (0x00058cc8) uniindi_top_pane_t1

0x8c96,	// (0x00058cf2) list_single_uniindi_pane_ParamLimits

0x8c96,	// (0x00058cf2) list_single_uniindi_pane

0x72f0,	// (0x0005734c) bg_uniindi_top_pane_g1

0x8ca9,	// (0x00058d05) list_single_uniindi_pane_g1

0x8cbc,	// (0x00058d18) list_single_uniindi_pane_t1

0xf34b,	// (0x0005f3a7) control_bg_pane

0x8ce1,	// (0x00058d3d) bg_sctrl_sk_pane_cp1

0x8cea,	// (0x00058d46) bg_sctrl_sk_pane_cp2

0x8cf3,	// (0x00058d4f) control_bg_pane_g1

0x8cfc,	// (0x00058d58) control_bg_pane_g2

0x0001,

0xfd46,	// (0x0005fda2) control_bg_pane_g

0x6d2b,	// (0x00056d87) cell_indicator_nsta_pane_g1_ParamLimits

0xdbf2,	// (0x0005dc4e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaae,	// (0x0005fb0a) cell_indicator_nsta_pane_g_ParamLimits

0x315b,	// (0x000531b7) form2_midp_time_pane_t1_ParamLimits

0x1a52,	// (0x00051aae) main_idle_act4_pane_ParamLimits

0x1a52,	// (0x00051aae) main_idle_act4_pane

0xc1cb,	// (0x0005c227) popup_tb_extension_window_ParamLimits

0xe58a,	// (0x0005e5e6) tb_ext_find_pane_ParamLimits

0xe58a,	// (0x0005e5e6) tb_ext_find_pane

0x8d05,	// (0x00058d61) ai_gene_pane_1_cp1

0x45e6,	// (0x00054642) ai_gene_pane_2_cp1

0x8d0d,	// (0x00058d69) list_single_idle_plugin_calendar_pane

0x8d16,	// (0x00058d72) list_single_idle_plugin_notification_pane

0x8d1f,	// (0x00058d7b) list_single_idle_plugin_player_pane

0xe5e8,	// (0x0005e644) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5e8,	// (0x0005e644) list_single_idle_plugin_shortcut_pane

0xe610,	// (0x0005e66c) main_idle_act4_pane_t1

0xe626,	// (0x0005e682) main_idle_act4_pane_t2

0x0001,

0xfd4b,	// (0x0005fda7) main_idle_act4_pane_t

0xe63c,	// (0x0005e698) middle_sk_idle_act4_pane_ParamLimits

0xe63c,	// (0x0005e698) middle_sk_idle_act4_pane

0xe658,	// (0x0005e6b4) popup_clock_digital_analogue_window_cp2

0xe680,	// (0x0005e6dc) shortcut_wheel_idle_act4_pane_ParamLimits

0xe680,	// (0x0005e6dc) shortcut_wheel_idle_act4_pane

0x72f0,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g1

0x72f0,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g2

0x72f0,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g3

0x72f0,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g4

0x72f0,	// (0x0005734c) shortcut_wheel_idle_act4_pane_g5

0x8db2,	// (0x00058e0e) shortcut_wheel_idle_act4_pane_g6

0x8dba,	// (0x00058e16) shortcut_wheel_idle_act4_pane_g7

0x8dc2,	// (0x00058e1e) shortcut_wheel_idle_act4_pane_g8

0x8dca,	// (0x00058e26) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd50,	// (0x0005fdac) shortcut_wheel_idle_act4_pane_g

0xe3b3,	// (0x0005e40f) middle_sk_idle_act4_pane_g1_ParamLimits

0xe3b3,	// (0x0005e40f) middle_sk_idle_act4_pane_g1

0xe6fd,	// (0x0005e759) middle_sk_idle_act4_pane_g2_ParamLimits

0xe6fd,	// (0x0005e759) middle_sk_idle_act4_pane_g2

0x0001,

0xfd73,	// (0x0005fdcf) middle_sk_idle_act4_pane_g_ParamLimits

0xfd73,	// (0x0005fdcf) middle_sk_idle_act4_pane_g

0xe715,	// (0x0005e771) middle_sk_idle_act4_pane_t1_ParamLimits

0xe715,	// (0x0005e771) middle_sk_idle_act4_pane_t1

0xe744,	// (0x0005e7a0) grid_ai_shortcut_pane_ParamLimits

0xe744,	// (0x0005e7a0) grid_ai_shortcut_pane

0xe761,	// (0x0005e7bd) list_highlight_pane_cp16_ParamLimits

0xe761,	// (0x0005e7bd) list_highlight_pane_cp16

0xe76e,	// (0x0005e7ca) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe76e,	// (0x0005e7ca) list_single_idle_plugin_shortcut_pane_g1

0xe77a,	// (0x0005e7d6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe77a,	// (0x0005e7d6) list_single_idle_plugin_shortcut_pane_g2

0xe796,	// (0x0005e7f2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe796,	// (0x0005e7f2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd78,	// (0x0005fdd4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd78,	// (0x0005fdd4) list_single_idle_plugin_shortcut_pane_g

0xe7ab,	// (0x0005e807) cell_ai_shortcut_pane_ParamLimits

0xe7ab,	// (0x0005e807) cell_ai_shortcut_pane

0xe7c1,	// (0x0005e81d) cell_ai_shortcut_pane_g1_ParamLimits

0xe7c1,	// (0x0005e81d) cell_ai_shortcut_pane_g1

0x8d05,	// (0x00058d61) ai_gene_pane_1_cp2

0x8efa,	// (0x00058f56) ai_gene_pane_2_cp2

0x8f02,	// (0x00058f5e) list_highlight_pane_cp15

0x8f0b,	// (0x00058f67) list_single_idle_plugin_calendar_pane_g1

0x8f02,	// (0x00058f5e) list_highlight_pane_cp17

0x8f13,	// (0x00058f6f) list_single_idle_plugin_calendar_pane_g1_copy1

0x8f1b,	// (0x00058f77) list_single_idle_plugin_player_pane_g1

0x6671,	// (0x000566cd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7f,	// (0x0005fddb) list_single_idle_plugin_player_pane_g

0x8f23,	// (0x00058f7f) list_single_idle_plugin_player_pane_t1

0x8f31,	// (0x00058f8d) list_single_idle_plugin_player_pane_t2

0x8f3f,	// (0x00058f9b) list_single_idle_plugin_player_pane_t3

0x8f4d,	// (0x00058fa9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd84,	// (0x0005fde0) list_single_idle_plugin_player_pane_t

0x8f5b,	// (0x00058fb7) wait_bar_pane_cp15

0x8f63,	// (0x00058fbf) grid_ai_notification_pane

0x6671,	// (0x000566cd) list_single_idle_plugin_notification_pane_g1

0xe7e3,	// (0x0005e83f) cell_ai_notification_pane_ParamLimits

0xe7e3,	// (0x0005e83f) cell_ai_notification_pane

0x8f79,	// (0x00058fd5) cell_ai_notification_pane_g1

0x8f81,	// (0x00058fdd) cell_ai_notification_pane_t1

0xe7f0,	// (0x0005e84c) tb_ext_find_button_pane

0xe7f8,	// (0x0005e854) tb_ext_find_pane_g1

0xe800,	// (0x0005e85c) tb_ext_find_pane_t1

0x3e99,	// (0x00053ef5) tb_ext_find_button_pane_g1

0x8fad,	// (0x00059009) tb_ext_find_button_pane_g2

0x0001,

0xfd8d,	// (0x0005fde9) tb_ext_find_button_pane_g

0xe610,	// (0x0005e66c) main_idle_act4_pane_t1_ParamLimits

0xe626,	// (0x0005e682) main_idle_act4_pane_t2_ParamLimits

0xfd4b,	// (0x0005fda7) main_idle_act4_pane_t_ParamLimits

0xe658,	// (0x0005e6b4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe670,	// (0x0005e6cc) sat_plugin_idle_act4_pane_ParamLimits

0xe670,	// (0x0005e6cc) sat_plugin_idle_act4_pane

0xe80e,	// (0x0005e86a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe80e,	// (0x0005e86a) sat_plugin_idle_act4_pane_t1

0xe826,	// (0x0005e882) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe826,	// (0x0005e882) sat_plugin_idle_act4_pane_t2

0xe83e,	// (0x0005e89a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe83e,	// (0x0005e89a) sat_plugin_idle_act4_pane_t3

0xe856,	// (0x0005e8b2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe856,	// (0x0005e8b2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd92,	// (0x0005fdee) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd92,	// (0x0005fdee) sat_plugin_idle_act4_pane_t

0xf410,	// (0x0005f46c) popup_battery_window_ParamLimits

0xf410,	// (0x0005f46c) popup_battery_window

0x2c23,	// (0x00052c7f) bg_popup_sub_pane_cp25_ParamLimits

0x2c23,	// (0x00052c7f) bg_popup_sub_pane_cp25

0x9002,	// (0x0005905e) popup_battery_window_g1_ParamLimits

0x9002,	// (0x0005905e) popup_battery_window_g1

0x900e,	// (0x0005906a) popup_battery_window_t1_ParamLimits

0x900e,	// (0x0005906a) popup_battery_window_t1

0x9020,	// (0x0005907c) popup_battery_window_t2_ParamLimits

0x9020,	// (0x0005907c) popup_battery_window_t2

0x0001,

0xfd9b,	// (0x0005fdf7) popup_battery_window_t_ParamLimits

0xfd9b,	// (0x0005fdf7) popup_battery_window_t

0xd050,	// (0x0005d0ac) midp_canvas_pane_ParamLimits

0xd0ab,	// (0x0005d107) midp_keypad_pane_ParamLimits

0xd0ab,	// (0x0005d107) midp_keypad_pane

0x47ed,	// (0x00054849) main_midp_pane_ParamLimits

0x6da6,	// (0x00056e02) signal_pane_g2_cp_ParamLimits

0xe86e,	// (0x0005e8ca) aid_size_cell_midp_keypad_ParamLimits

0xe86e,	// (0x0005e8ca) aid_size_cell_midp_keypad

0xe88c,	// (0x0005e8e8) midp_keyp_game_grid_pane_ParamLimits

0xe88c,	// (0x0005e8e8) midp_keyp_game_grid_pane

0xe8b3,	// (0x0005e90f) midp_keyp_rocker_pane_ParamLimits

0xe8b3,	// (0x0005e90f) midp_keyp_rocker_pane

0xe8fc,	// (0x0005e958) midp_keyp_sk_left_pane_ParamLimits

0xe8fc,	// (0x0005e958) midp_keyp_sk_left_pane

0xe94e,	// (0x0005e9aa) midp_keyp_sk_right_pane_ParamLimits

0xe94e,	// (0x0005e9aa) midp_keyp_sk_right_pane

0x28a6,	// (0x00052902) bg_button_pane_cp03

0xe9a0,	// (0x0005e9fc) midp_keyp_sk_left_pane_g1

0x28a6,	// (0x00052902) bg_button_pane_cp04

0xe9a0,	// (0x0005e9fc) midp_keyp_sk_right_pane_g1

0x72f0,	// (0x0005734c) midp_keyp_rocker_pane_g1

0xe9a9,	// (0x0005ea05) keyp_game_cell_pane_ParamLimits

0xe9a9,	// (0x0005ea05) keyp_game_cell_pane

0x28a6,	// (0x00052902) bg_button_pane_cp02

0xe9cd,	// (0x0005ea29) keyp_game_cell_pane_g1

0xb1df,	// (0x0005b23b) popup_fep_vkb2_window_ParamLimits

0xb1df,	// (0x0005b23b) popup_fep_vkb2_window

0xc6c4,	// (0x0005c720) aid_size_cell_vkb2_ParamLimits

0xc6c4,	// (0x0005c720) aid_size_cell_vkb2

0xc6fa,	// (0x0005c756) popup_fep_vkb2_window_g1_ParamLimits

0xc6fa,	// (0x0005c756) popup_fep_vkb2_window_g1

0xc74a,	// (0x0005c7a6) vkb2_area_bottom_pane_ParamLimits

0xc74a,	// (0x0005c7a6) vkb2_area_bottom_pane

0xc79e,	// (0x0005c7fa) vkb2_area_keypad_pane_ParamLimits

0xc79e,	// (0x0005c7fa) vkb2_area_keypad_pane

0xc7e6,	// (0x0005c842) vkb2_area_top_pane_ParamLimits

0xc7e6,	// (0x0005c842) vkb2_area_top_pane

0xc86c,	// (0x0005c8c8) vkb2_top_entry_pane_ParamLimits

0xc86c,	// (0x0005c8c8) vkb2_top_entry_pane

0xc899,	// (0x0005c8f5) vkb2_top_grid_left_pane_ParamLimits

0xc899,	// (0x0005c8f5) vkb2_top_grid_left_pane

0xc8b9,	// (0x0005c915) vkb2_top_grid_right_pane_ParamLimits

0xc8b9,	// (0x0005c915) vkb2_top_grid_right_pane

0x2186,	// (0x000521e2) vkb2_cell_keypad_pane_ParamLimits

0x2186,	// (0x000521e2) vkb2_cell_keypad_pane

0xc8ff,	// (0x0005c95b) vkb2_area_bottom_grid_pane_ParamLimits

0xc8ff,	// (0x0005c95b) vkb2_area_bottom_grid_pane

0xc929,	// (0x0005c985) vkb2_area_bottom_pane_g1_ParamLimits

0xc929,	// (0x0005c985) vkb2_area_bottom_pane_g1

0xc94f,	// (0x0005c9ab) vkb2_area_bottom_pane_g2_ParamLimits

0xc94f,	// (0x0005c9ab) vkb2_area_bottom_pane_g2

0xc980,	// (0x0005c9dc) vkb2_area_bottom_pane_g3_ParamLimits

0xc980,	// (0x0005c9dc) vkb2_area_bottom_pane_g3

0x0002,

0xfda0,	// (0x0005fdfc) vkb2_area_bottom_pane_g_ParamLimits

0xfda0,	// (0x0005fdfc) vkb2_area_bottom_pane_g

0x2330,	// (0x0005238c) vkb2_top_cell_left_pane_ParamLimits

0x2330,	// (0x0005238c) vkb2_top_cell_left_pane

0xe9d6,	// (0x0005ea32) vkb2_top_entry_pane_g1_ParamLimits

0xe9d6,	// (0x0005ea32) vkb2_top_entry_pane_g1

0xe9e4,	// (0x0005ea40) vkb2_top_entry_pane_t1_ParamLimits

0xe9e4,	// (0x0005ea40) vkb2_top_entry_pane_t1

0x91c9,	// (0x00059225) vkb2_top_entry_pane_t2_ParamLimits

0x91c9,	// (0x00059225) vkb2_top_entry_pane_t2

0x91fb,	// (0x00059257) vkb2_top_entry_pane_t3_ParamLimits

0x91fb,	// (0x00059257) vkb2_top_entry_pane_t3

0x0002,

0xfda7,	// (0x0005fe03) vkb2_top_entry_pane_t_ParamLimits

0xfda7,	// (0x0005fe03) vkb2_top_entry_pane_t

0xc9ea,	// (0x0005ca46) vkb2_top_grid_right_pane_g1_ParamLimits

0xc9ea,	// (0x0005ca46) vkb2_top_grid_right_pane_g1

0x2393,	// (0x000523ef) vkb2_top_grid_right_pane_g2_ParamLimits

0x2393,	// (0x000523ef) vkb2_top_grid_right_pane_g2

0x23ab,	// (0x00052407) vkb2_top_grid_right_pane_g3_ParamLimits

0x23ab,	// (0x00052407) vkb2_top_grid_right_pane_g3

0xca00,	// (0x0005ca5c) vkb2_top_grid_right_pane_g4_ParamLimits

0xca00,	// (0x0005ca5c) vkb2_top_grid_right_pane_g4

0x0003,

0xfdae,	// (0x0005fe0a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdae,	// (0x0005fe0a) vkb2_top_grid_right_pane_g

0x23d9,	// (0x00052435) vkb2_top_cell_left_pane_g1

0x23f0,	// (0x0005244c) vkb2_cell_keypad_pane_g1_ParamLimits

0x23f0,	// (0x0005244c) vkb2_cell_keypad_pane_g1

0x921f,	// (0x0005927b) vkb2_cell_keypad_pane_t1_ParamLimits

0x921f,	// (0x0005927b) vkb2_cell_keypad_pane_t1

0x23fe,	// (0x0005245a) vkb2_cell_bottom_grid_pane_ParamLimits

0x23fe,	// (0x0005245a) vkb2_cell_bottom_grid_pane

0x2437,	// (0x00052493) vkb2_cell_bottom_grid_pane_g1

0xe6a1,	// (0x0005e6fd) aid_call2_pane_cp02

0xe6a9,	// (0x0005e705) aid_call_pane_cp02

0xe6b1,	// (0x0005e70d) clock_digital_number_pane_cp10

0xe6b9,	// (0x0005e715) clock_digital_number_pane_cp11

0xe6c1,	// (0x0005e71d) clock_digital_number_pane_cp12

0xe6c9,	// (0x0005e725) clock_digital_number_pane_cp13

0xe6d1,	// (0x0005e72d) clock_digital_separator_pane_cp10

0x3e99,	// (0x00053ef5) popup_clock_digital_analogue_window_cp2_g1

0x3e99,	// (0x00053ef5) popup_clock_digital_analogue_window_cp2_g2

0xe6d9,	// (0x0005e735) popup_clock_digital_analogue_window_cp2_g3

0x3e99,	// (0x00053ef5) popup_clock_digital_analogue_window_cp2_g4

0xe6d9,	// (0x0005e735) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd63,	// (0x0005fdbf) popup_clock_digital_analogue_window_cp2_g

0xe6e1,	// (0x0005e73d) popup_clock_digital_analogue_window_cp2_t1

0xe6ef,	// (0x0005e74b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6e,	// (0x0005fdca) popup_clock_digital_analogue_window_cp2_t

0x72f0,	// (0x0005734c) clock_digital_number_pane_cp10_g1

0x72f0,	// (0x0005734c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0005fba6) clock_digital_number_pane_cp10_g

0x72f0,	// (0x0005734c) clock_digital_separator_pane_cp10_g1

0x72f0,	// (0x0005734c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4a,	// (0x0005fba6) clock_digital_separator_pane_cp10_g

0x8c4e,	// (0x00058caa) uniindi_top_pane_g3

0x8c5f,	// (0x00058cbb) uniindi_top_pane_g4

0x2211,	// (0x0005226d) vkb2_row_keypad_pane_ParamLimits

0x2211,	// (0x0005226d) vkb2_row_keypad_pane

0x2453,	// (0x000524af) vkb2_cell_t_keypad_pane_ParamLimits

0x2453,	// (0x000524af) vkb2_cell_t_keypad_pane

0x2463,	// (0x000524bf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2463,	// (0x000524bf) vkb2_cell_t_keypad_pane_cp08

0x2476,	// (0x000524d2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2476,	// (0x000524d2) vkb2_cell_t_keypad_pane_cp09

0x248a,	// (0x000524e6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x248a,	// (0x000524e6) vkb2_cell_t_keypad_pane_cp01

0x249b,	// (0x000524f7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x249b,	// (0x000524f7) vkb2_cell_t_keypad_pane_cp02

0x24ac,	// (0x00052508) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x24ac,	// (0x00052508) vkb2_cell_t_keypad_pane_cp03

0x24bd,	// (0x00052519) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x24bd,	// (0x00052519) vkb2_cell_t_keypad_pane_cp04

0x24ce,	// (0x0005252a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x24ce,	// (0x0005252a) vkb2_cell_t_keypad_pane_cp05

0x24df,	// (0x0005253b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x24df,	// (0x0005253b) vkb2_cell_t_keypad_pane_cp06

0x24f0,	// (0x0005254c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x24f0,	// (0x0005254c) vkb2_cell_t_keypad_pane_cp07

0x2501,	// (0x0005255d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2501,	// (0x0005255d) vkb2_cell_t_keypad_pane_cp10

0x1cb7,	// (0x00051d13) vkb2_cell_t_keypad_pane_g1

0x9236,	// (0x00059292) vkb2_cell_t_keypad_pane_t1

0xf34b,	// (0x0005f3a7) popup_grid_graphic2_window

0xea1d,	// (0x0005ea79) aid_size_cell_graphic2_ParamLimits

0xea1d,	// (0x0005ea79) aid_size_cell_graphic2

0xea5b,	// (0x0005eab7) bg_popup_window_pane_cp21_ParamLimits

0xea5b,	// (0x0005eab7) bg_popup_window_pane_cp21

0xea69,	// (0x0005eac5) graphic2_pages_pane_ParamLimits

0xea69,	// (0x0005eac5) graphic2_pages_pane

0xeabf,	// (0x0005eb1b) grid_graphic2_control_pane_ParamLimits

0xeabf,	// (0x0005eb1b) grid_graphic2_control_pane

0xeb07,	// (0x0005eb63) grid_graphic2_pane_ParamLimits

0xeb07,	// (0x0005eb63) grid_graphic2_pane

0xeb8e,	// (0x0005ebea) cell_graphic2_pane

0xf34b,	// (0x0005f3a7) main_comp_mode_pane

0x84ad,	// (0x00058509) list_ai3_gene_pane_ParamLimits

0xe3e8,	// (0x0005e444) bg_popup_window_pane_cp19_ParamLimits

0x8883,	// (0x000588df) bg_touch_area_indi_pane_ParamLimits

0x8883,	// (0x000588df) bg_touch_area_indi_pane

0x8899,	// (0x000588f5) bg_touch_area_indi_pane_cp01_ParamLimits

0x8899,	// (0x000588f5) bg_touch_area_indi_pane_cp01

0x88af,	// (0x0005890b) bg_touch_area_indi_pane_cp02_ParamLimits

0x88af,	// (0x0005890b) bg_touch_area_indi_pane_cp02

0x88c7,	// (0x00058923) bg_touch_area_indi_pane_cp03_ParamLimits

0x88c7,	// (0x00058923) bg_touch_area_indi_pane_cp03

0x88e1,	// (0x0005893d) popup_slider_window_g1_ParamLimits

0x88fd,	// (0x00058959) popup_slider_window_g2_ParamLimits

0x8919,	// (0x00058975) popup_slider_window_g3_ParamLimits

0xfcf8,	// (0x0005fd54) popup_slider_window_g_ParamLimits

0x8975,	// (0x000589d1) popup_slider_window_t1_ParamLimits

0x89e9,	// (0x00058a45) small_volume_slider_vertical_pane_ParamLimits

0xeb8e,	// (0x0005ebea) cell_graphic2_pane_ParamLimits

0xebeb,	// (0x0005ec47) bg_button_pane_cp10_ParamLimits

0xebeb,	// (0x0005ec47) bg_button_pane_cp10

0xebfe,	// (0x0005ec5a) bg_button_pane_cp11_ParamLimits

0xebfe,	// (0x0005ec5a) bg_button_pane_cp11

0xec11,	// (0x0005ec6d) graphic2_pages_pane_g1_ParamLimits

0xec11,	// (0x0005ec6d) graphic2_pages_pane_g1

0xec2c,	// (0x0005ec88) graphic2_pages_pane_g2_ParamLimits

0xec2c,	// (0x0005ec88) graphic2_pages_pane_g2

0x0001,

0xfdbc,	// (0x0005fe18) graphic2_pages_pane_g_ParamLimits

0xfdbc,	// (0x0005fe18) graphic2_pages_pane_g

0xec44,	// (0x0005eca0) graphic2_pages_pane_t1_ParamLimits

0xec44,	// (0x0005eca0) graphic2_pages_pane_t1

0xec5c,	// (0x0005ecb8) cell_graphic2_control_pane_ParamLimits

0xec5c,	// (0x0005ecb8) cell_graphic2_control_pane

0xec8e,	// (0x0005ecea) cell_graphic2_pane_g1_ParamLimits

0xec8e,	// (0x0005ecea) cell_graphic2_pane_g1

0xe3c1,	// (0x0005e41d) cell_graphic2_pane_g2_ParamLimits

0xe3c1,	// (0x0005e41d) cell_graphic2_pane_g2

0xe3db,	// (0x0005e437) cell_graphic2_pane_g3_ParamLimits

0xe3db,	// (0x0005e437) cell_graphic2_pane_g3

0xe3ce,	// (0x0005e42a) cell_graphic2_pane_g4_ParamLimits

0xe3ce,	// (0x0005e42a) cell_graphic2_pane_g4

0xec9b,	// (0x0005ecf7) cell_graphic2_pane_g5_ParamLimits

0xec9b,	// (0x0005ecf7) cell_graphic2_pane_g5

0x0004,

0xfdc1,	// (0x0005fe1d) cell_graphic2_pane_g_ParamLimits

0xfdc1,	// (0x0005fe1d) cell_graphic2_pane_g

0xecbb,	// (0x0005ed17) cell_graphic2_pane_t1_ParamLimits

0xecbb,	// (0x0005ed17) cell_graphic2_pane_t1

0x59d2,	// (0x00055a2e) grid_highlight_pane_cp11_ParamLimits

0x59d2,	// (0x00055a2e) grid_highlight_pane_cp11

0x2c23,	// (0x00052c7f) bg_button_pane_cp05

0xecf0,	// (0x0005ed4c) cell_graphic2_control_pane_g1

0x72f0,	// (0x0005734c) bg_touch_area_indi_pane_g1

0x9506,	// (0x00059562) aid_cmod_rocker_key_size

0x9510,	// (0x0005956c) aid_cmode_itu_key_size

0x951a,	// (0x00059576) main_cmode_video_pane

0x9524,	// (0x00059580) main_comp_mode_itu_pane

0x9530,	// (0x0005958c) main_comp_mode_rocker_pane

0x953c,	// (0x00059598) cell_cmode_rocker_pane_ParamLimits

0x953c,	// (0x00059598) cell_cmode_rocker_pane

0x954e,	// (0x000595aa) cell_cmode_itu_pane_ParamLimits

0x954e,	// (0x000595aa) cell_cmode_itu_pane

0x3824,	// (0x00053880) bg_button_pane_cp06_ParamLimits

0x3824,	// (0x00053880) bg_button_pane_cp06

0x756e,	// (0x000575ca) cell_cmode_rocker_pane_g1_ParamLimits

0x756e,	// (0x000575ca) cell_cmode_rocker_pane_g1

0x8a8d,	// (0x00058ae9) cell_cmode_rocker_pane_g2_ParamLimits

0x8a8d,	// (0x00058ae9) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x0005fe2d) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x0005fe2d) cell_cmode_rocker_pane_g

0x28a6,	// (0x00052902) bg_button_pane_cp07

0x9563,	// (0x000595bf) cell_cmode_itu_pane_g1

0x956c,	// (0x000595c8) cell_cmode_itu_pane_t1

0x957a,	// (0x000595d6) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x0005fe32) cell_cmode_itu_pane_t

0x8cd1,	// (0x00058d2d) aid_touch_ctrl_left

0x8cd9,	// (0x00058d35) aid_touch_ctrl_right

0x28a6,	// (0x00052902) compa_mode_pane

0xed16,	// (0x0005ed72) aid_cmod_rocker_key_size_cp

0xed20,	// (0x0005ed7c) aid_cmode_itu_key_size_cp

0x959c,	// (0x000595f8) compa_mode_pane_g1

0x95a4,	// (0x00059600) compa_mode_pane_g2

0x95ac,	// (0x00059608) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x0005fe37) compa_mode_pane_g

0xed2a,	// (0x0005ed86) main_comp_mode_itu_pane_cp

0xed32,	// (0x0005ed8e) main_comp_mode_rocker_pane_cp

0xed3a,	// (0x0005ed96) cell_cmode_itu_pane_cp_ParamLimits

0xed3a,	// (0x0005ed96) cell_cmode_itu_pane_cp

0xed4f,	// (0x0005edab) cell_cmode_rocker_pane_cp_ParamLimits

0xed4f,	// (0x0005edab) cell_cmode_rocker_pane_cp

0x3824,	// (0x00053880) bg_button_pane_cp06_cp_ParamLimits

0x3824,	// (0x00053880) bg_button_pane_cp06_cp

0x756e,	// (0x000575ca) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x756e,	// (0x000575ca) cell_cmode_rocker_pane_g1_cp

0x72f0,	// (0x0005734c) cell_cmode_rocker_pane_g2_cp

0x28a6,	// (0x00052902) bg_button_pane_cp07_cp

0xed61,	// (0x0005edbd) cell_cmode_itu_pane_g1_cp

0xed6a,	// (0x0005edc6) cell_cmode_itu_pane_t1_cp

0xed6a,	// (0x0005edc6) cell_cmode_itu_pane_t2_cp

0xda0a,	// (0x0005da66) settings_code_pane_cp2

0x299a,	// (0x000529f6) bg_popup_window_pane_cp3_ParamLimits

0x2dfd,	// (0x00052e59) heading_pane_cp3_ParamLimits

0x2e09,	// (0x00052e65) listscroll_popup_graphic_pane_ParamLimits

0x1a60,	// (0x00051abc) fep_hwr_aid_pane_ParamLimits

0x1ed7,	// (0x00051f33) aid_touch_sctrl_top_ParamLimits

0x1ef2,	// (0x00051f4e) sctrl_sk_top_pane_g1_ParamLimits

0x1cb7,	// (0x00051d13) sctrl_sk_top_pane_g2_ParamLimits

0xfd11,	// (0x0005fd6d) sctrl_sk_top_pane_g_ParamLimits

0x1eff,	// (0x00051f5b) sctrl_sk_top_pane_t1_ParamLimits

0x1ed7,	// (0x00051f33) aid_touch_sctrl_bottom_ParamLimits

0x1eff,	// (0x00051f5b) sctrl_sk_bottom_pane_t1_ParamLimits

0x8c1a,	// (0x00058c76) aid_area_touch_clock

0xc82e,	// (0x0005c88a) aid_vkb2_area_top_pane_cell_ParamLimits

0xc82e,	// (0x0005c88a) aid_vkb2_area_top_pane_cell

0xc8d9,	// (0x0005c935) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc8d9,	// (0x0005c935) aid_vkb2_area_bottom_pane_cell

0x9181,	// (0x000591dd) popup_char_count_window

0x95f9,	// (0x00059655) popup_char_count_window_g1

0x9602,	// (0x0005965e) popup_char_count_window_g2

0x960b,	// (0x00059667) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x0005fe3e) popup_char_count_window_g

0x9614,	// (0x00059670) popup_char_count_window_t1

0x1fae,	// (0x0005200a) popup_fep_char_preview_window_ParamLimits

0x1fae,	// (0x0005200a) popup_fep_char_preview_window

0xc84e,	// (0x0005c8aa) vkb2_top_candi_pane_ParamLimits

0xc84e,	// (0x0005c8aa) vkb2_top_candi_pane

0xed78,	// (0x0005edd4) cell_vkb2_top_candi_pane_ParamLimits

0xed78,	// (0x0005edd4) cell_vkb2_top_candi_pane

0x2516,	// (0x00052572) bg_popup_fep_char_preview_window_ParamLimits

0x2516,	// (0x00052572) bg_popup_fep_char_preview_window

0x2524,	// (0x00052580) popup_fep_char_preview_window_t1_ParamLimits

0x2524,	// (0x00052580) popup_fep_char_preview_window_t1

0x966f,	// (0x000596cb) bg_popup_fep_char_preview_window_g1

0x9677,	// (0x000596d3) bg_popup_fep_char_preview_window_g2

0x967f,	// (0x000596db) bg_popup_fep_char_preview_window_g3

0x9687,	// (0x000596e3) bg_popup_fep_char_preview_window_g4

0x968f,	// (0x000596eb) bg_popup_fep_char_preview_window_g5

0x255e,	// (0x000525ba) bg_popup_fep_char_preview_window_g6

0x9697,	// (0x000596f3) bg_popup_fep_char_preview_window_g7

0x969f,	// (0x000596fb) bg_popup_fep_char_preview_window_g8

0x96a7,	// (0x00059703) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x0005fe45) bg_popup_fep_char_preview_window_g

0x1cb7,	// (0x00051d13) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1cb7,	// (0x00051d13) cell_vkb2_top_candi_pane_g1

0x1cc5,	// (0x00051d21) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1cc5,	// (0x00051d21) cell_vkb2_top_candi_pane_g2

0x8a9b,	// (0x00058af7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8a9b,	// (0x00058af7) cell_vkb2_top_candi_pane_g3

0x2566,	// (0x000525c2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2566,	// (0x000525c2) cell_vkb2_top_candi_pane_g4

0x7a39,	// (0x00057a95) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a39,	// (0x00057a95) cell_vkb2_top_candi_pane_g5

0x2587,	// (0x000525e3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2587,	// (0x000525e3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x0005fe58) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x0005fe58) cell_vkb2_top_candi_pane_g

0x2595,	// (0x000525f1) cell_vkb2_top_candi_pane_t1

0x164d,	// (0x000516a9) aid_size_touch_slider_mark_ParamLimits

0x164d,	// (0x000516a9) aid_size_touch_slider_mark

0xeaa5,	// (0x0005eb01) grid_graphic2_catg_pane_ParamLimits

0xeaa5,	// (0x0005eb01) grid_graphic2_catg_pane

0xeb61,	// (0x0005ebbd) popup_grid_graphic2_window_t1_ParamLimits

0xeb61,	// (0x0005ebbd) popup_grid_graphic2_window_t1

0xeb77,	// (0x0005ebd3) popup_grid_graphic2_window_t2_ParamLimits

0xeb77,	// (0x0005ebd3) popup_grid_graphic2_window_t2

0x0001,

0xfdb7,	// (0x0005fe13) popup_grid_graphic2_window_t_ParamLimits

0xfdb7,	// (0x0005fe13) popup_grid_graphic2_window_t

0x2c23,	// (0x00052c7f) bg_button_pane_cp05_ParamLimits

0xecf0,	// (0x0005ed4c) cell_graphic2_control_pane_g1_ParamLimits

0xedde,	// (0x0005ee3a) cell_graphic2_catg_pane_ParamLimits

0xedde,	// (0x0005ee3a) cell_graphic2_catg_pane

0x28a6,	// (0x00052902) bg_button_pane_cp12

0xedf0,	// (0x0005ee4c) cell_graphic2_catg_pane_g1

0x8be6,	// (0x00058c42) cell_tb_ext_pane_t1_ParamLimits

0x2350,	// (0x000523ac) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2350,	// (0x000523ac) vkb2_top_cell_right_narrow_pane

0x2368,	// (0x000523c4) vkb2_top_cell_right_wide_pane_ParamLimits

0x2368,	// (0x000523c4) vkb2_top_cell_right_wide_pane

0x1a52,	// (0x00051aae) bg_vkb2_func_pane_ParamLimits

0x1a52,	// (0x00051aae) bg_vkb2_func_pane

0x23d9,	// (0x00052435) vkb2_top_cell_left_pane_g1_ParamLimits

0x1a52,	// (0x00051aae) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1a52,	// (0x00051aae) bg_vkb2_fuc_pane_cp03

0x2437,	// (0x00052493) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ced,	// (0x00054d49) bg_vkb2_func_pane_g1

0x4cf5,	// (0x00054d51) bg_vkb2_func_pane_g2

0x4d05,	// (0x00054d61) bg_vkb2_func_pane_g3

0x4cfd,	// (0x00054d59) bg_vkb2_func_pane_g4

0x4d0d,	// (0x00054d69) bg_vkb2_func_pane_g5

0x4d15,	// (0x00054d71) bg_vkb2_func_pane_g6

0x4d1d,	// (0x00054d79) bg_vkb2_func_pane_g7

0x4d25,	// (0x00054d81) bg_vkb2_func_pane_g8

0x4ce5,	// (0x00054d41) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x0005fe65) bg_vkb2_func_pane_g

0x1a52,	// (0x00051aae) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1a52,	// (0x00051aae) bg_vkb2_fuc_pane_cp01

0x23d9,	// (0x00052435) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x23d9,	// (0x00052435) vkb2_top_cell_right_wide_pane_g1

0x1a52,	// (0x00051aae) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1a52,	// (0x00051aae) bg_vkb2_fuc_pane_cp02

0x2437,	// (0x00052493) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2437,	// (0x00052493) vkb2_top_cell_right_narrow_pane_g1

0xe2f3,	// (0x0005e34f) aid_touch_area_decrease_ParamLimits

0xe2f3,	// (0x0005e34f) aid_touch_area_decrease

0xe327,	// (0x0005e383) aid_touch_area_increase_ParamLimits

0xe327,	// (0x0005e383) aid_touch_area_increase

0xe34f,	// (0x0005e3ab) aid_touch_area_mute_ParamLimits

0xe34f,	// (0x0005e3ab) aid_touch_area_mute

0xe37f,	// (0x0005e3db) aid_touch_area_slider_ParamLimits

0xe37f,	// (0x0005e3db) aid_touch_area_slider

0xe3f4,	// (0x0005e450) popup_slider_window_g4_ParamLimits

0xe3f4,	// (0x0005e450) popup_slider_window_g4

0xe41c,	// (0x0005e478) popup_slider_window_g5_ParamLimits

0xe41c,	// (0x0005e478) popup_slider_window_g5

0xe450,	// (0x0005e4ac) popup_slider_window_g6_ParamLimits

0xe450,	// (0x0005e4ac) popup_slider_window_g6

0x89a3,	// (0x000589ff) popup_slider_window_t2_ParamLimits

0x89a3,	// (0x000589ff) popup_slider_window_t2

0x0001,

0xfd05,	// (0x0005fd61) popup_slider_window_t_ParamLimits

0xfd05,	// (0x0005fd61) popup_slider_window_t

0xe46c,	// (0x0005e4c8) slider_pane_ParamLimits

0xe46c,	// (0x0005e4c8) slider_pane

0x96ca,	// (0x00059726) slider_pane_g1_ParamLimits

0x96ca,	// (0x00059726) slider_pane_g1

0x96de,	// (0x0005973a) slider_pane_g2_ParamLimits

0x96de,	// (0x0005973a) slider_pane_g2

0x96f4,	// (0x00059750) slider_pane_g3_ParamLimits

0x96f4,	// (0x00059750) slider_pane_g3

0x0003,

0xfe1c,	// (0x0005fe78) slider_pane_g_ParamLimits

0xfe1c,	// (0x0005fe78) slider_pane_g

0xc213,	// (0x0005c26f) popup_tb_float_extension_window_ParamLimits

0xc213,	// (0x0005c26f) popup_tb_float_extension_window

0x9720,	// (0x0005977c) aid_size_cell_tb_float_ext

0x28a6,	// (0x00052902) bg_popup_sub_window_cp28

0x972c,	// (0x00059788) grid_tb_float_ext_pane

0x9736,	// (0x00059792) cell_tb_float_ext_pane_ParamLimits

0x9736,	// (0x00059792) cell_tb_float_ext_pane

0x9750,	// (0x000597ac) cell_tb_float_ext_pane_g1

0x9759,	// (0x000597b5) grid_highlight_pane_cp12

0xc514,	// (0x0005c570) cell_last_hwr_side_pane_ParamLimits

0xc514,	// (0x0005c570) cell_last_hwr_side_pane

0x72f0,	// (0x0005734c) cell_last_hwr_side_pane_g1

0x9762,	// (0x000597be) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x0005fe81) cell_last_hwr_side_pane_g

0xc9b5,	// (0x0005ca11) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc9b5,	// (0x0005ca11) vkb2_area_bottom_space_btn_pane

0x1cb7,	// (0x00051d13) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9236,	// (0x00059292) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2595,	// (0x000525f1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x25b4,	// (0x00052610) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x25b4,	// (0x00052610) vkb2_area_bottom_space_btn_pane_g1

0x25ee,	// (0x0005264a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x25ee,	// (0x0005264a) vkb2_area_bottom_space_btn_pane_g2

0x2624,	// (0x00052680) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2624,	// (0x00052680) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x0005fe86) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x0005fe86) vkb2_area_bottom_space_btn_pane_g

0x1b15,	// (0x00051b71) cel_fep_hwr_func_pane_ParamLimits

0x1b15,	// (0x00051b71) cel_fep_hwr_func_pane

0xc4e9,	// (0x0005c545) cell_hwr_side_button_pane_ParamLimits

0xc4e9,	// (0x0005c545) cell_hwr_side_button_pane

0x8c1a,	// (0x00058c76) aid_area_touch_clock_ParamLimits

0x2c23,	// (0x00052c7f) bg_uniindi_top_pane_ParamLimits

0x8c2c,	// (0x00058c88) uniindi_top_pane_g1_ParamLimits

0x8c42,	// (0x00058c9e) uniindi_top_pane_g2_ParamLimits

0x8c4e,	// (0x00058caa) uniindi_top_pane_g3_ParamLimits

0x8c5f,	// (0x00058cbb) uniindi_top_pane_g4_ParamLimits

0xfd3d,	// (0x0005fd99) uniindi_top_pane_g_ParamLimits

0x8c6c,	// (0x00058cc8) uniindi_top_pane_t1_ParamLimits

0x2c23,	// (0x00052c7f) bg_vkb2_func_pane_cp01_ParamLimits

0x2c23,	// (0x00052c7f) bg_vkb2_func_pane_cp01

0x976b,	// (0x000597c7) cel_fep_hwr_func_pane_g1_ParamLimits

0x976b,	// (0x000597c7) cel_fep_hwr_func_pane_g1

0x2c23,	// (0x00052c7f) bg_vkb2_func_pane_cp02_ParamLimits

0x2c23,	// (0x00052c7f) bg_vkb2_func_pane_cp02

0x976b,	// (0x000597c7) cell_hwr_side_button_pane_g1_ParamLimits

0x976b,	// (0x000597c7) cell_hwr_side_button_pane_g1

0x4b66,	// (0x00054bc2) status_pane_g4_ParamLimits

0x4b66,	// (0x00054bc2) status_pane_g4

0x4b80,	// (0x00054bdc) status_pane_t1

0x702a,	// (0x00057086) form2_midp_gauge_slider_cont_pane

0x7032,	// (0x0005708e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdcd1,	// (0x0005dd2d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdce3,	// (0x0005dd3f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafd,	// (0x0005fb59) form2_midp_gauge_slider_pane_t_ParamLimits

0x7068,	// (0x000570c4) form2_midp_slider_pane_ParamLimits

0x1f6e,	// (0x00051fca) aid_size_cell_func_vkb2_ParamLimits

0x1f6e,	// (0x00051fca) aid_size_cell_func_vkb2

0x970c,	// (0x00059768) slider_pane_g4_ParamLimits

0x970c,	// (0x00059768) slider_pane_g4

0xca16,	// (0x0005ca72) form2_midp_gauge_slider_pane_t2_cp01

0xca24,	// (0x0005ca80) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca24,	// (0x0005ca80) form2_midp_gauge_slider_pane_t3_cp01

0x2699,	// (0x000526f5) form2_midp_slider_pane_cp01

0x28a6,	// (0x00052902) navi_smil_pane

0x97a4,	// (0x00059800) navi_smil_pane_g1

0x97ac,	// (0x00059808) navi_smil_pane_t1

0x9779,	// (0x000597d5) form2_midp_slider_pane_g1

0x9782,	// (0x000597de) form2_midp_slider_pane_g2

0x978a,	// (0x000597e6) form2_midp_slider_pane_g3

0x9779,	// (0x000597d5) form2_midp_slider_pane_g4

0xedf9,	// (0x0005ee55) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x0005fe8f) form2_midp_slider_pane_g

0x265e,	// (0x000526ba) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x265e,	// (0x000526ba) vkb2_area_bottom_space_btn_pane_g4

0xd283,	// (0x0005d2df) lc0_navi_pane_ParamLimits

0xd283,	// (0x0005d2df) lc0_navi_pane

0xd2ed,	// (0x0005d349) lc0_stat_indi_pane_ParamLimits

0xd2ed,	// (0x0005d349) lc0_stat_indi_pane

0xd302,	// (0x0005d35e) ls0_title_pane_ParamLimits

0xd302,	// (0x0005d35e) ls0_title_pane

0x3824,	// (0x00053880) bg_popup_sub_pane_cp14_ParamLimits

0x8c01,	// (0x00058c5d) list_uniindi_pane_ParamLimits

0x8c0d,	// (0x00058c69) uniindi_top_pane_ParamLimits

0x8ca9,	// (0x00058d05) list_single_uniindi_pane_g1_ParamLimits

0x8cbc,	// (0x00058d18) list_single_uniindi_pane_t1_ParamLimits

0xca41,	// (0x0005ca9d) lc0_stat_clock_pane_ParamLimits

0xca41,	// (0x0005ca9d) lc0_stat_clock_pane

0xee04,	// (0x0005ee60) lc0_stat_indi_pane_g1_ParamLimits

0xee04,	// (0x0005ee60) lc0_stat_indi_pane_g1

0xee11,	// (0x0005ee6d) lc0_stat_indi_pane_g2_ParamLimits

0xee11,	// (0x0005ee6d) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x0005fe9a) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x0005fe9a) lc0_stat_indi_pane_g

0xca4e,	// (0x0005caaa) lc0_uni_indicator_pane_ParamLimits

0xca4e,	// (0x0005caaa) lc0_uni_indicator_pane

0xee1e,	// (0x0005ee7a) ls0_title_pane_g1_ParamLimits

0xee1e,	// (0x0005ee7a) ls0_title_pane_g1

0xee32,	// (0x0005ee8e) ls0_title_pane_t1_ParamLimits

0xee32,	// (0x0005ee8e) ls0_title_pane_t1

0xca5b,	// (0x0005cab7) lc0_uni_indicator_pane_g1_ParamLimits

0xca5b,	// (0x0005cab7) lc0_uni_indicator_pane_g1

0x981e,	// (0x0005987a) lc0_stat_clock_pane_t1

0xf34b,	// (0x0005f3a7) main_ai5_pane

0x982c,	// (0x00059888) ai5_sk_pane_ParamLimits

0x982c,	// (0x00059888) ai5_sk_pane

0xee60,	// (0x0005eebc) cell_ai5_widget_pane_ParamLimits

0xee60,	// (0x0005eebc) cell_ai5_widget_pane

0x98ef,	// (0x0005994b) aid_size_cell_widget_grid

0x9905,	// (0x00059961) bg_ai5_widget_pane_ParamLimits

0x9905,	// (0x00059961) bg_ai5_widget_pane

0x996f,	// (0x000599cb) cell_ai5_widget_pane_g2

0x997f,	// (0x000599db) cell_ai5_widget_pane_g3

0x999e,	// (0x000599fa) cell_ai5_widget_pane_g4

0x99aa,	// (0x00059a06) cell_ai5_widget_pane_g5

0x99b6,	// (0x00059a12) cell_ai5_widget_pane_g6

0x99c2,	// (0x00059a1e) cell_ai5_widget_pane_g7

0x9a0a,	// (0x00059a66) cell_ai5_widget_pane_t1_ParamLimits

0x9a0a,	// (0x00059a66) cell_ai5_widget_pane_t1

0x9a27,	// (0x00059a83) cell_ai5_widget_pane_t2_ParamLimits

0x9a27,	// (0x00059a83) cell_ai5_widget_pane_t2

0x9a3f,	// (0x00059a9b) cell_ai5_widget_pane_t3_ParamLimits

0x9a3f,	// (0x00059a9b) cell_ai5_widget_pane_t3

0x9a57,	// (0x00059ab3) cell_ai5_widget_pane_t4_ParamLimits

0x9a57,	// (0x00059ab3) cell_ai5_widget_pane_t4

0x9a71,	// (0x00059acd) cell_ai5_widget_pane_t5_ParamLimits

0x9a71,	// (0x00059acd) cell_ai5_widget_pane_t5

0x9a90,	// (0x00059aec) cell_ai5_widget_pane_t6_ParamLimits

0x9a90,	// (0x00059aec) cell_ai5_widget_pane_t6

0x9aa2,	// (0x00059afe) cell_ai5_widget_pane_t7_ParamLimits

0x9aa2,	// (0x00059afe) cell_ai5_widget_pane_t7

0x9abb,	// (0x00059b17) cell_ai5_widget_pane_t8_ParamLimits

0x9abb,	// (0x00059b17) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x0005feb4) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x0005feb4) cell_ai5_widget_pane_t

0x9b07,	// (0x00059b63) grid_ai5_widget_pane

0x3824,	// (0x00053880) highlight_cell_ai5_widget_pane_ParamLimits

0x3824,	// (0x00053880) highlight_cell_ai5_widget_pane

0xeeca,	// (0x0005ef26) ai5_sk_left_pane

0xeed4,	// (0x0005ef30) ai5_sk_middle_pane

0xeede,	// (0x0005ef3a) ai5_sk_right_pane

0x9b3d,	// (0x00059b99) bg_ai5_widget_pane_g1_ParamLimits

0x9b3d,	// (0x00059b99) bg_ai5_widget_pane_g1

0x9b49,	// (0x00059ba5) bg_ai5_widget_pane_g2_ParamLimits

0x9b49,	// (0x00059ba5) bg_ai5_widget_pane_g2

0x9b55,	// (0x00059bb1) bg_ai5_widget_pane_g3_ParamLimits

0x9b55,	// (0x00059bb1) bg_ai5_widget_pane_g3

0x9b61,	// (0x00059bbd) bg_ai5_widget_pane_g4_ParamLimits

0x9b61,	// (0x00059bbd) bg_ai5_widget_pane_g4

0x9b6d,	// (0x00059bc9) bg_ai5_widget_pane_g5_ParamLimits

0x9b6d,	// (0x00059bc9) bg_ai5_widget_pane_g5

0x9b79,	// (0x00059bd5) bg_ai5_widget_pane_g6_ParamLimits

0x9b79,	// (0x00059bd5) bg_ai5_widget_pane_g6

0x9b85,	// (0x00059be1) bg_ai5_widget_pane_g7_ParamLimits

0x9b85,	// (0x00059be1) bg_ai5_widget_pane_g7

0x9b91,	// (0x00059bed) bg_ai5_widget_pane_g8_ParamLimits

0x9b91,	// (0x00059bed) bg_ai5_widget_pane_g8

0x9b9d,	// (0x00059bf9) bg_ai5_widget_pane_g9_ParamLimits

0x9b9d,	// (0x00059bf9) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x0005fec9) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x0005fec9) bg_ai5_widget_pane_g

0x9bd0,	// (0x00059c2c) cell_shortcut_ai5_widget_pane_ParamLimits

0x9bd0,	// (0x00059c2c) cell_shortcut_ai5_widget_pane

0x44ad,	// (0x00054509) bg_cell_shortcut_ai5_widget_pane

0x9be1,	// (0x00059c3d) cell_grid_ai5_widget_pane_g1

0x9bea,	// (0x00059c46) highlight_cell_shortcut_ai5_widget_pane

0x4ced,	// (0x00054d49) ai5_sk_left_pane_g1

0x9bf2,	// (0x00059c4e) ai5_sk_left_pane_g2

0x9bfa,	// (0x00059c56) ai5_sk_left_pane_g3

0x9c02,	// (0x00059c5e) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x0005fedc) ai5_sk_left_pane_g

0x9c0a,	// (0x00059c66) ai5_sk_left_pane_t1

0x4cf5,	// (0x00054d51) ai5_sk_right_pane_g1

0x9c18,	// (0x00059c74) ai5_sk_right_pane_g2

0x9c20,	// (0x00059c7c) ai5_sk_right_pane_g3

0x9c28,	// (0x00059c84) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x0005fee5) ai5_sk_right_pane_g

0x9c30,	// (0x00059c8c) ai5_sk_right_pane_t1

0x4cf5,	// (0x00054d51) ai5_sk_middle_pane_g1

0x4ced,	// (0x00054d49) ai5_sk_middle_pane_g2

0x4d0d,	// (0x00054d69) ai5_sk_middle_pane_g3

0x9c20,	// (0x00059c7c) ai5_sk_middle_pane_g4

0x9bfa,	// (0x00059c56) ai5_sk_middle_pane_g5

0x9c3e,	// (0x00059c9a) ai5_sk_middle_pane_g6

0xeee8,	// (0x0005ef44) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x0005feee) ai5_sk_middle_pane_g

0xd16f,	// (0x0005d1cb) aid_touch_area_size_lc0_ParamLimits

0xd16f,	// (0x0005d1cb) aid_touch_area_size_lc0

0x1ce6,	// (0x00051d42) cell_hwr_candidate_pane_t1_ParamLimits

0x484f,	// (0x000548ab) aid_touch_navi_pane

0xd3f5,	// (0x0005d451) status_dt_navi_pane_ParamLimits

0xd3f5,	// (0x0005d451) status_dt_navi_pane

0xd40d,	// (0x0005d469) status_dt_sta_pane_ParamLimits

0xd40d,	// (0x0005d469) status_dt_sta_pane

0xeef0,	// (0x0005ef4c) dt_sta_controll_pane

0xeefd,	// (0x0005ef59) dt_sta_indi_pane

0xef0a,	// (0x0005ef66) dt_sta_title_pane

0x2c23,	// (0x00052c7f) bg_dt_sta_indi_pane_ParamLimits

0x2c23,	// (0x00052c7f) bg_dt_sta_indi_pane

0xef1c,	// (0x0005ef78) dt_sta_battery_pane

0xef24,	// (0x0005ef80) dt_sta_indi_pane_g1

0x9c90,	// (0x00059cec) dt_sta_indi_pane_g2

0x9c99,	// (0x00059cf5) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x0005fefd) dt_sta_indi_pane_g

0x9ca2,	// (0x00059cfe) dt_sta_signal_pane

0x3824,	// (0x00053880) bg_dt_sta_title_pane_ParamLimits

0x3824,	// (0x00053880) bg_dt_sta_title_pane

0x9cab,	// (0x00059d07) dt_sta_title_pane_g1

0x9cb3,	// (0x00059d0f) dt_sta_title_pane_t1_ParamLimits

0x9cb3,	// (0x00059d0f) dt_sta_title_pane_t1

0x28a6,	// (0x00052902) bg_dt_sta_control_pane

0xef2d,	// (0x0005ef89) dt_sta_controll_pane_g1

0x9cd1,	// (0x00059d2d) bg_dt_sta_title_pane_g1

0x9cda,	// (0x00059d36) bg_dt_sta_title_pane_g2

0x9ce3,	// (0x00059d3f) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x0005ff04) bg_dt_sta_title_pane_g

0x72f0,	// (0x0005734c) bg_dt_sta_indi_pane_g1

0x9cec,	// (0x00059d48) dt_sta_signal_pane_g1

0x9cf4,	// (0x00059d50) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x0005ff0b) dt_sta_signal_pane_g

0x9cfc,	// (0x00059d58) dt_sta_battery_pane_g1

0x9d05,	// (0x00059d61) dt_sta_battery_pane_t1

0x72f0,	// (0x0005734c) bg_dt_sta_control_pane_g1

0x3fab,	// (0x00054007) fep_china_uni_eep_pane

0x3fb3,	// (0x0005400f) fep_china_uni_entry_pane_ParamLimits

0x3fc3,	// (0x0005401f) popup_fep_china_uni_window_g1_ParamLimits

0x3fd3,	// (0x0005402f) popup_fep_china_uni_window_g2_ParamLimits

0x3fd3,	// (0x0005402f) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005f784) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005f784) popup_fep_china_uni_window_g

0x9d14,	// (0x00059d70) fep_china_uni_eep_pane_g1

0x9d1c,	// (0x00059d78) fep_china_uni_eep_pane_t1

0x979b,	// (0x000597f7) aid_touch_area_size_smil_player

0x499b,	// (0x000549f7) lc0_clock_pane

0x4b74,	// (0x00054bd0) status_pane_g5_ParamLimits

0x4b74,	// (0x00054bd0) status_pane_g5

0xbd95,	// (0x0005bdf1) popup_keymap_window

0x4b3a,	// (0x00054b96) status_icon_pane

0x997f,	// (0x000599db) cell_ai5_widget_pane_g3_ParamLimits

0x999e,	// (0x000599fa) cell_ai5_widget_pane_g4_ParamLimits

0x99aa,	// (0x00059a06) cell_ai5_widget_pane_g5_ParamLimits

0x99ce,	// (0x00059a2a) cell_ai5_widget_pane_g8_ParamLimits

0x99ce,	// (0x00059a2a) cell_ai5_widget_pane_g8

0x99e2,	// (0x00059a3e) cell_ai5_widget_pane_g9_ParamLimits

0x99e2,	// (0x00059a3e) cell_ai5_widget_pane_g9

0x99f6,	// (0x00059a52) cell_ai5_widget_pane_g10_ParamLimits

0x99f6,	// (0x00059a52) cell_ai5_widget_pane_g10

0x9d2b,	// (0x00059d87) status_icon_pane_g1

0x28a6,	// (0x00052902) bg_popup_sub_pane_cp13

0x9d33,	// (0x00059d8f) popup_keymap_window_t1

0xd0f1,	// (0x0005d14d) control_pane_g6_ParamLimits

0xd0f1,	// (0x0005d14d) control_pane_g6

0xd0fe,	// (0x0005d15a) control_pane_g7_ParamLimits

0xd0fe,	// (0x0005d15a) control_pane_g7

0xd10b,	// (0x0005d167) control_pane_g8_ParamLimits

0xd10b,	// (0x0005d167) control_pane_g8

0xeef0,	// (0x0005ef4c) dt_sta_controll_pane_ParamLimits

0xeefd,	// (0x0005ef59) dt_sta_indi_pane_ParamLimits

0xef0a,	// (0x0005ef66) dt_sta_title_pane_ParamLimits

0x3750,	// (0x000537ac) aid_size_touch_scroll_bar_cale

0xf424,	// (0x0005f480) popup_discreet_window_ParamLimits

0xf424,	// (0x0005f480) popup_discreet_window

0xb225,	// (0x0005b281) popup_sk_window

0x535e,	// (0x000553ba) bg_popup_sub_pane_cp28_ParamLimits

0x535e,	// (0x000553ba) bg_popup_sub_pane_cp28

0x9d41,	// (0x00059d9d) popup_discreet_window_g1_ParamLimits

0x9d41,	// (0x00059d9d) popup_discreet_window_g1

0x9d61,	// (0x00059dbd) popup_discreet_window_t1_ParamLimits

0x9d61,	// (0x00059dbd) popup_discreet_window_t1

0x9d7f,	// (0x00059ddb) popup_discreet_window_t2_ParamLimits

0x9d7f,	// (0x00059ddb) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x0005ff10) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x0005ff10) popup_discreet_window_t

0x26d0,	// (0x0005272c) popup_sk_window_g1

0x26da,	// (0x00052736) popup_sk_window_g2

0x0001,

0xfebb,	// (0x0005ff17) popup_sk_window_g

0x26e4,	// (0x00052740) popup_sk_window_t1

0x26f2,	// (0x0005274e) popup_sk_window_t1_copy1

0x996f,	// (0x000599cb) cell_ai5_widget_pane_g2_ParamLimits

0x9acd,	// (0x00059b29) cell_ai5_widget_pane_t9_ParamLimits

0x9acd,	// (0x00059b29) cell_ai5_widget_pane_t9

0x28a6,	// (0x00052902) main_fep_fshwr2_pane

0xca82,	// (0x0005cade) aid_fshwr2_btn_pane

0xca91,	// (0x0005caed) aid_fshwr2_syb_pane

0xcaa3,	// (0x0005caff) aid_fshwr2_txt_pane

0xcab2,	// (0x0005cb0e) fshwr2_func_candi_pane

0xcac3,	// (0x0005cb1f) fshwr2_hwr_syb_pane

0xcade,	// (0x0005cb3a) fshwr2_icf_pane

0x28a6,	// (0x00052902) fshwr2_icf_bg_pane

0xef36,	// (0x0005ef92) fshwr2_icf_pane_t1_ParamLimits

0xef36,	// (0x0005ef92) fshwr2_icf_pane_t1

0x72f0,	// (0x0005734c) fshwr2_func_candi_pane_g1

0x9de8,	// (0x00059e44) fshwr2_func_candi_row_pane_ParamLimits

0x9de8,	// (0x00059e44) fshwr2_func_candi_row_pane

0xef4e,	// (0x0005efaa) cell_fshwr2_syb_pane_ParamLimits

0xef4e,	// (0x0005efaa) cell_fshwr2_syb_pane

0x756e,	// (0x000575ca) fshwr2_hwr_syb_pane_g1_ParamLimits

0x756e,	// (0x000575ca) fshwr2_hwr_syb_pane_g1

0x28a6,	// (0x00052902) bg_popup_call_pane_cp01

0x9e13,	// (0x00059e6f) fshwr2_func_candi_cell_pane_ParamLimits

0x9e13,	// (0x00059e6f) fshwr2_func_candi_cell_pane

0x9e44,	// (0x00059ea0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9e44,	// (0x00059ea0) fshwr2_func_candi_cell_bg_pane

0x9e5e,	// (0x00059eba) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9e5e,	// (0x00059eba) fshwr2_func_candi_cell_pane_g1

0x9e86,	// (0x00059ee2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e86,	// (0x00059ee2) fshwr2_func_candi_cell_pane_t1

0x28a6,	// (0x00052902) bg_button_pane_cp08

0x44ad,	// (0x00054509) cell_fshwr2_syb_bg_pane

0xef68,	// (0x0005efc4) cell_fshwr2_syb_bg_pane_g1

0xef70,	// (0x0005efcc) cell_fshwr2_syb_bg_pane_t1

0x3824,	// (0x00053880) main_tmo_pane

0xd850,	// (0x0005d8ac) uni_indicator_pane_g1_ParamLimits

0xd865,	// (0x0005d8c1) uni_indicator_pane_g2_ParamLimits

0x5e98,	// (0x00055ef4) uni_indicator_pane_g3_ParamLimits

0x5eae,	// (0x00055f0a) uni_indicator_pane_g4_ParamLimits

0x5eae,	// (0x00055f0a) uni_indicator_pane_g4

0x5ec2,	// (0x00055f1e) uni_indicator_pane_g5_ParamLimits

0x5ec2,	// (0x00055f1e) uni_indicator_pane_g5

0x5ed6,	// (0x00055f32) uni_indicator_pane_g6_ParamLimits

0x5ed6,	// (0x00055f32) uni_indicator_pane_g6

0xf927,	// (0x0005f983) uni_indicator_pane_g_ParamLimits

0xe2cf,	// (0x0005e32b) popup_tmo_note_window_ParamLimits

0xe2cf,	// (0x0005e32b) popup_tmo_note_window

0x1f50,	// (0x00051fac) fshwr2_bg_pane

0x9e77,	// (0x00059ed3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e77,	// (0x00059ed3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x0005ff1c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x0005ff1c) fshwr2_func_candi_cell_pane_g

0x72f0,	// (0x0005734c) bg_popup_window_pane_cp01

0x9eb0,	// (0x00059f0c) bg_popup_window_pane_g1_cp01

0x9eb9,	// (0x00059f15) bg_popup_window_pane_cp22_ParamLimits

0x9eb9,	// (0x00059f15) bg_popup_window_pane_cp22

0x9ec7,	// (0x00059f23) listscroll_tmo_link_pane_ParamLimits

0x9ec7,	// (0x00059f23) listscroll_tmo_link_pane

0x9f07,	// (0x00059f63) popup_tmo_note_window_g1_ParamLimits

0x9f07,	// (0x00059f63) popup_tmo_note_window_g1

0x9f14,	// (0x00059f70) tmo_note_info_pane_ParamLimits

0x9f14,	// (0x00059f70) tmo_note_info_pane

0xef7f,	// (0x0005efdb) list_tmo_note_info_pane_g1_ParamLimits

0xef7f,	// (0x0005efdb) list_tmo_note_info_pane_g1

0x9f45,	// (0x00059fa1) list_tmo_note_info_pane_g2_ParamLimits

0x9f45,	// (0x00059fa1) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x0005ff21) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x0005ff21) list_tmo_note_info_pane_g

0x9f61,	// (0x00059fbd) list_tmo_note_info_text_pane_ParamLimits

0x9f61,	// (0x00059fbd) list_tmo_note_info_text_pane

0x9fe2,	// (0x0005a03e) list_tmo_link_pane

0x9fef,	// (0x0005a04b) scroll_pane_cp20

0x9ffc,	// (0x0005a058) list_single_tmo_link_pane_ParamLimits

0x9ffc,	// (0x0005a058) list_single_tmo_link_pane

0xa00c,	// (0x0005a068) list_single_tmo_link_pane_t1

0xa01a,	// (0x0005a076) list_tmo_note_info_text_pane_t1_ParamLimits

0xa01a,	// (0x0005a076) list_tmo_note_info_text_pane_t1

0xcd77,	// (0x0005cdd3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcd77,	// (0x0005cdd3) aid_size_touch_scroll_bar_cp01

0xb903,	// (0x0005b95f) aid_size_touch_slider_marker

0xb215,	// (0x0005b271) popup_settings_window_ParamLimits

0xb215,	// (0x0005b271) popup_settings_window

0x0ca4,	// (0x00050d00) popup_candi_list_indi_window

0x484f,	// (0x000548ab) aid_touch_navi_pane_ParamLimits

0x1eab,	// (0x00051f07) rs_clock_indi_pane

0x1eb4,	// (0x00051f10) sctrl_sk_bottom_pane_ParamLimits

0x1ec5,	// (0x00051f21) sctrl_sk_top_pane_ParamLimits

0x1fc8,	// (0x00052024) popup_fep_tooltip_window

0x98ef,	// (0x0005994b) aid_size_cell_widget_grid_ParamLimits

0x9963,	// (0x000599bf) cell_ai5_widget_pane_g1_ParamLimits

0x9963,	// (0x000599bf) cell_ai5_widget_pane_g1

0x99b6,	// (0x00059a12) cell_ai5_widget_pane_g6_ParamLimits

0x99c2,	// (0x00059a1e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x0005fe9f) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0005fe9f) cell_ai5_widget_pane_g

0x9af1,	// (0x00059b4d) cell_ai5_widget_pane_t10_ParamLimits

0x9af1,	// (0x00059b4d) cell_ai5_widget_pane_t10

0x9b07,	// (0x00059b63) grid_ai5_widget_pane_ParamLimits

0x9ba9,	// (0x00059c05) cell_contacts_ai5_widget_pane_ParamLimits

0x9ba9,	// (0x00059c05) cell_contacts_ai5_widget_pane

0x9d94,	// (0x00059df0) popup_discreet_window_t3_ParamLimits

0x9d94,	// (0x00059df0) popup_discreet_window_t3

0x276a,	// (0x000527c6) popup_fshwr2_char_preview_window_ParamLimits

0x276a,	// (0x000527c6) popup_fshwr2_char_preview_window

0xef96,	// (0x0005eff2) tmo_note_info_pane_t1

0xefab,	// (0x0005f007) tmo_note_info_pane_t2

0xefc2,	// (0x0005f01e) tmo_note_info_pane_t3

0x9fbe,	// (0x0005a01a) tmo_note_info_pane_t4

0x9fd0,	// (0x0005a02c) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x0005ff26) tmo_note_info_pane_t

0x9fe2,	// (0x0005a03e) list_tmo_link_pane_ParamLimits

0x9fef,	// (0x0005a04b) scroll_pane_cp20_ParamLimits

0x28a6,	// (0x00052902) bg_popup_fep_char_preview_window_cp01

0xa033,	// (0x0005a08f) popup_fshwr2_char_preview_window_t1

0xa041,	// (0x0005a09d) popup_candi_list_indi_window_g1

0xa04a,	// (0x0005a0a6) bg_cell_contacts_ai5_widget_pane

0xa056,	// (0x0005a0b2) cell_contacts_ai5_widget_pane_g1

0xa06a,	// (0x0005a0c6) cell_contacts_ai5_widget_pane_g2

0xa076,	// (0x0005a0d2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x0005ff31) cell_contacts_ai5_widget_pane_g

0xa089,	// (0x0005a0e5) cell_contacts_ai5_widget_pane_t1

0x3824,	// (0x00053880) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0e9,	// (0x0005f145) settings_container_pane

0x44ad,	// (0x00054509) listscroll_set_pane_copy1

0x69dd,	// (0x00056a39) scroll_pane_cp121_copy1

0xa10c,	// (0x0005a168) set_content_pane_copy1

0xf0f5,	// (0x0005f151) aid_height_set_list_copy1_ParamLimits

0xf0f5,	// (0x0005f151) aid_height_set_list_copy1

0x60ce,	// (0x0005612a) aid_size_parent_copy1_ParamLimits

0x60ce,	// (0x0005612a) aid_size_parent_copy1

0xf101,	// (0x0005f15d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf101,	// (0x0005f15d) button_value_adjust_pane_cp6_copy1

0x47ed,	// (0x00054849) list_highlight_pane_cp2_copy1_ParamLimits

0x47ed,	// (0x00054849) list_highlight_pane_cp2_copy1

0xf115,	// (0x0005f171) list_set_pane_copy1_ParamLimits

0xf115,	// (0x0005f171) list_set_pane_copy1

0xefd7,	// (0x0005f033) main_pane_set_t1_copy1_ParamLimits

0xefd7,	// (0x0005f033) main_pane_set_t1_copy1

0xf011,	// (0x0005f06d) main_pane_set_t2_copy1_ParamLimits

0xf011,	// (0x0005f06d) main_pane_set_t2_copy1

0xf1c2,	// (0x0005f21e) main_pane_set_t3_copy1

0xf1d0,	// (0x0005f22c) main_pane_set_t4_copy1

0xf0dd,	// (0x0005f139) set_content_pane_g1_copy1_ParamLimits

0xf0dd,	// (0x0005f139) set_content_pane_g1_copy1

0xf1de,	// (0x0005f23a) setting_code_pane_copy1

0xa205,	// (0x0005a261) setting_slider_graphic_pane_copy1

0xa205,	// (0x0005a261) setting_slider_pane_copy1

0xa205,	// (0x0005a261) setting_text_pane_copy1

0xa205,	// (0x0005a261) setting_volume_pane_copy1

0xf1de,	// (0x0005f23a) settings_code_pane_cp2_copy1

0xf1e6,	// (0x0005f242) settings_code_pane_cp_copy1_ParamLimits

0xf1e6,	// (0x0005f242) settings_code_pane_cp_copy1

0xcaf6,	// (0x0005cb52) volume_set_pane_copy1

0xf1fa,	// (0x0005f256) volume_set_pane_g10_copy1

0xf202,	// (0x0005f25e) volume_set_pane_g1_copy1

0xf20a,	// (0x0005f266) volume_set_pane_g2_copy1

0xf212,	// (0x0005f26e) volume_set_pane_g3_copy1

0xf21a,	// (0x0005f276) volume_set_pane_g4_copy1

0xf222,	// (0x0005f27e) volume_set_pane_g5_copy1

0xf22a,	// (0x0005f286) volume_set_pane_g6_copy1

0xf232,	// (0x0005f28e) volume_set_pane_g7_copy1

0xf23a,	// (0x0005f296) volume_set_pane_g8_copy1

0xf242,	// (0x0005f29e) volume_set_pane_g9_copy1

0x299a,	// (0x000529f6) bg_set_opt_pane_cp_copy1_ParamLimits

0x299a,	// (0x000529f6) bg_set_opt_pane_cp_copy1

0x2786,	// (0x000527e2) setting_slider_pane_t1_copy1_ParamLimits

0x2786,	// (0x000527e2) setting_slider_pane_t1_copy1

0xcafe,	// (0x0005cb5a) setting_slider_pane_t2_copy1_ParamLimits

0xcafe,	// (0x0005cb5a) setting_slider_pane_t2_copy1

0xcb18,	// (0x0005cb74) setting_slider_pane_t3_copy1_ParamLimits

0xcb18,	// (0x0005cb74) setting_slider_pane_t3_copy1

0xcb30,	// (0x0005cb8c) slider_set_pane_copy1_ParamLimits

0xcb30,	// (0x0005cb8c) slider_set_pane_copy1

0x3873,	// (0x000538cf) set_opt_bg_pane_g1_copy2

0x387b,	// (0x000538d7) set_opt_bg_pane_g2_copy2

0xa271,	// (0x0005a2cd) set_opt_bg_pane_g3_copy2

0x388b,	// (0x000538e7) set_opt_bg_pane_g4_copy2

0x3893,	// (0x000538ef) set_opt_bg_pane_g5_copy2

0x389b,	// (0x000538f7) set_opt_bg_pane_g6_copy2

0xf24a,	// (0x0005f2a6) set_opt_bg_pane_g7_copy2

0xa283,	// (0x0005a2df) set_opt_bg_pane_g8_copy2

0xa28d,	// (0x0005a2e9) set_opt_bg_pane_g9_copy2

0xa297,	// (0x0005a2f3) aid_size_touch_slider_mark_copy1_ParamLimits

0xa297,	// (0x0005a2f3) aid_size_touch_slider_mark_copy1

0xa2ab,	// (0x0005a307) slider_set_pane_g1_copy1

0xa2b4,	// (0x0005a310) slider_set_pane_g2_copy1

0x6581,	// (0x000565dd) slider_set_pane_g3_copy1_ParamLimits

0x6581,	// (0x000565dd) slider_set_pane_g3_copy1

0x6595,	// (0x000565f1) slider_set_pane_g4_copy1_ParamLimits

0x6595,	// (0x000565f1) slider_set_pane_g4_copy1

0x65ad,	// (0x00056609) slider_set_pane_g5_copy1_ParamLimits

0x65ad,	// (0x00056609) slider_set_pane_g5_copy1

0x6581,	// (0x000565dd) slider_set_pane_g6_copy1_ParamLimits

0x6581,	// (0x000565dd) slider_set_pane_g6_copy1

0xf252,	// (0x0005f2ae) slider_set_pane_g7_copy1_ParamLimits

0xf252,	// (0x0005f2ae) slider_set_pane_g7_copy1

0x28ba,	// (0x00052916) bg_set_opt_pane_cp2_copy1

0xa2d2,	// (0x0005a32e) setting_slider_graphic_pane_g1_copy1

0xf268,	// (0x0005f2c4) setting_slider_graphic_pane_t1_copy1

0xf278,	// (0x0005f2d4) setting_slider_graphic_pane_t2_copy1

0xf288,	// (0x0005f2e4) slider_set_pane_cp_copy1

0xa30b,	// (0x0005a367) input_focus_pane_cp1_copy1

0xa314,	// (0x0005a370) list_set_text_pane_copy1

0xa31c,	// (0x0005a378) setting_text_pane_g1_copy1

0xf050,	// (0x0005f0ac) set_text_pane_t1_copy1

0xa30b,	// (0x0005a367) input_focus_pane_cp2_copy1

0xa31c,	// (0x0005a378) setting_code_pane_g1_copy1

0xf290,	// (0x0005f2ec) setting_code_pane_t1_copy1

0x6808,	// (0x00056864) list_set_graphic_pane_copy1

0x28ba,	// (0x00052916) bg_set_opt_pane_cp4_copy1

0xcf9e,	// (0x0005cffa) list_set_graphic_pane_g1_copy1_ParamLimits

0xcf9e,	// (0x0005cffa) list_set_graphic_pane_g1_copy1

0xf29e,	// (0x0005f2fa) list_set_graphic_pane_g2_copy1

0xcfb6,	// (0x0005d012) list_set_graphic_pane_t1_copy1_ParamLimits

0xcfb6,	// (0x0005d012) list_set_graphic_pane_t1_copy1

0x72f0,	// (0x0005734c) rs_clock_indi_pane_g1

0xa34d,	// (0x0005a3a9) rs_clock_indi_pane_t1

0xa35b,	// (0x0005a3b7) rs_indi_pane

0xa363,	// (0x0005a3bf) rs_indi_pane_g1

0xa36c,	// (0x0005a3c8) rs_indi_pane_g2

0xa375,	// (0x0005a3d1) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x0005ff38) rs_indi_pane_g

0x44ad,	// (0x00054509) bg_popup_preview_window_pane_cp03

0xa37e,	// (0x0005a3da) popup_fep_tooltip_window_t1

0x7f78,	// (0x00057fd4) popup_note2_window_g2_ParamLimits

0x7f78,	// (0x00057fd4) popup_note2_window_g2

0x0001,

0xfc75,	// (0x0005fcd1) popup_note2_window_g_ParamLimits

0xfc75,	// (0x0005fcd1) popup_note2_window_g

0x8473,	// (0x000584cf) bg_popup_sub_pane_cp11_ParamLimits

0x8480,	// (0x000584dc) cell_ai3_links_pane_g1_ParamLimits

0x8497,	// (0x000584f3) cell_ai3_links_pane_t1

0xf050,	// (0x0005f0ac) set_text_pane_t1_copy1_ParamLimits

0xd02a,	// (0x0005d086) cell_graphic_popup_pane_cp2_ParamLimits

0xd02a,	// (0x0005d086) cell_graphic_popup_pane_cp2

0xf2a6,	// (0x0005f302) cell_graphic_popup_pane_g1_cp2

0x3563,	// (0x000535bf) cell_graphic_popup_pane_g2_cp2

0xa394,	// (0x0005a3f0) cell_graphic_popup_pane_g3_cp2

0xa39c,	// (0x0005a3f8) cell_graphic_popup_pane_t2_cp2

0x3574,	// (0x000535d0) grid_highlight_pane_cp3_cp2

0x3bb8,	// (0x00053c14) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3824,	// (0x00053880) main_tmo_pane_ParamLimits

0xe2c3,	// (0x0005e31f) popup_tmo_big_image_note_window

0x9953,	// (0x000599af) cell_ai5_widget_list_pane

0x995b,	// (0x000599b7) cell_ai5_widget_lrg_icon_pane

0xef96,	// (0x0005eff2) tmo_note_info_pane_t1_ParamLimits

0xefab,	// (0x0005f007) tmo_note_info_pane_t2_ParamLimits

0xefc2,	// (0x0005f01e) tmo_note_info_pane_t3_ParamLimits

0x9fbe,	// (0x0005a01a) tmo_note_info_pane_t4_ParamLimits

0x9fd0,	// (0x0005a02c) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x0005ff26) tmo_note_info_pane_t_ParamLimits

0xf0e9,	// (0x0005f145) settings_container_pane_ParamLimits

0xa303,	// (0x0005a35f) indicator_popup_pane_cp5

0xa303,	// (0x0005a35f) indicator_popup_pane_cp6

0x6808,	// (0x00056864) list_set_graphic_pane_copy1_ParamLimits

0x28a6,	// (0x00052902) bg_popup_window_pane_cp23

0xa3aa,	// (0x0005a406) popup_tmo_big_image_note_window_g1

0xa3b4,	// (0x0005a410) popup_tmo_big_image_note_window_t1

0xa3c4,	// (0x0005a420) popup_tmo_big_image_note_window_t2

0xa3d4,	// (0x0005a430) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x0005ff3f) popup_tmo_big_image_note_window_t

0xa3e4,	// (0x0005a440) cell_ai5_widget_lrg_icon_pane_g1

0xa3ec,	// (0x0005a448) cell_ai5_widget_lrg_icon_pane_t1

0xa3fa,	// (0x0005a456) cell_ai5_widget_list_row_pane_ParamLimits

0xa3fa,	// (0x0005a456) cell_ai5_widget_list_row_pane

0xa412,	// (0x0005a46e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa412,	// (0x0005a46e) cell_ai5_widget_list_row_pane_g1

0xa41f,	// (0x0005a47b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa41f,	// (0x0005a47b) cell_ai5_widget_list_row_pane_t1

0xa437,	// (0x0005a493) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa437,	// (0x0005a493) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeea,	// (0x0005ff46) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x0005ff46) cell_ai5_widget_list_row_pane_t

0xf34b,	// (0x0005f3a7) main_fep_vtchi_ss_pane

0x27fb,	// (0x00052857) popup_fep_char_pre_window

0x2803,	// (0x0005285f) popup_fep_ituss_window

0x2824,	// (0x00052880) popup_fep_vkbss_window

0xa45f,	// (0x0005a4bb) grid_vkbss_keypad_pane_ParamLimits

0xa45f,	// (0x0005a4bb) grid_vkbss_keypad_pane

0xa46f,	// (0x0005a4cb) ituss_keypad_pane

0x284f,	// (0x000528ab) aid_vkbss_key_offset_ParamLimits

0x284f,	// (0x000528ab) aid_vkbss_key_offset

0x285b,	// (0x000528b7) cell_vkbss_key_pane_ParamLimits

0x285b,	// (0x000528b7) cell_vkbss_key_pane

0xa47f,	// (0x0005a4db) bg_cell_vkbss_key_g1_ParamLimits

0xa47f,	// (0x0005a4db) bg_cell_vkbss_key_g1

0xa48b,	// (0x0005a4e7) cell_vkbss_key_3p_pane_ParamLimits

0xa48b,	// (0x0005a4e7) cell_vkbss_key_3p_pane

0xa4a5,	// (0x0005a501) cell_vkbss_key_g1_ParamLimits

0xa4a5,	// (0x0005a501) cell_vkbss_key_g1

0xa4bf,	// (0x0005a51b) cell_vkbss_key_t1_ParamLimits

0xa4bf,	// (0x0005a51b) cell_vkbss_key_t1

0x2871,	// (0x000528cd) cell_ituss_key_pane_ParamLimits

0x2871,	// (0x000528cd) cell_ituss_key_pane

0xa4ea,	// (0x0005a546) bg_cell_ituss_key_g1_ParamLimits

0xa4ea,	// (0x0005a546) bg_cell_ituss_key_g1

0xa4f6,	// (0x0005a552) cell_ituss_key_pane_g1_ParamLimits

0xa4f6,	// (0x0005a552) cell_ituss_key_pane_g1

0xa510,	// (0x0005a56c) cell_ituss_key_pane_g2_ParamLimits

0xa510,	// (0x0005a56c) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0005ff4d) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0005ff4d) cell_ituss_key_pane_g

0xa53e,	// (0x0005a59a) cell_ituss_key_t1_ParamLimits

0xa53e,	// (0x0005a59a) cell_ituss_key_t1

0xa574,	// (0x0005a5d0) cell_ituss_key_t2_ParamLimits

0xa574,	// (0x0005a5d0) cell_ituss_key_t2

0xa5a5,	// (0x0005a601) cell_ituss_key_t3_ParamLimits

0xa5a5,	// (0x0005a601) cell_ituss_key_t3

0xa5df,	// (0x0005a63b) cell_ituss_key_t4_ParamLimits

0xa5df,	// (0x0005a63b) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x0005ff52) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0005ff52) cell_ituss_key_t

0xa619,	// (0x0005a675) cell_vkbss_key_3p_pane_g1

0xa621,	// (0x0005a67d) cell_vkbss_key_3p_pane_g2

0xa629,	// (0x0005a685) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0005ff5b) cell_vkbss_key_3p_pane_g

0x28a6,	// (0x00052902) bg_popup_fep_char_preview_window_cp02

0xa631,	// (0x0005a68d) popup_fep_char_pre_window_t1

0xeec0,	// (0x0005ef1c) main_ai5_sk_pane

0xa04a,	// (0x0005a0a6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa056,	// (0x0005a0b2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa06a,	// (0x0005a0c6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa076,	// (0x0005a0d2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x0005ff31) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa089,	// (0x0005a0e5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3824,	// (0x00053880) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2ae,	// (0x0005f30a) main_ai5_sk_pane_g1

0x5197,	// (0x000551f3) popup_query_code_window_g1

0x2819,	// (0x00052875) popup_fep_vkb_icf_pane

0x282d,	// (0x00052889) popup_fep_vtchi_icf_pane

0x3824,	// (0x00053880) bg_icf_pane

0xa649,	// (0x0005a6a5) list_vkb_icf_pane

0x3824,	// (0x00053880) bg_icf_pane_cp01

0xa655,	// (0x0005a6b1) vtchi_icf_list_pane

0xa666,	// (0x0005a6c2) list_vkb_icf_pane_t1_ParamLimits

0xa666,	// (0x0005a6c2) list_vkb_icf_pane_t1

0xa67c,	// (0x0005a6d8) vtchi_icf_list_pane_t1_ParamLimits

0xa67c,	// (0x0005a6d8) vtchi_icf_list_pane_t1

0x2803,	// (0x0005285f) popup_fep_ituss_window_ParamLimits

0x282d,	// (0x00052889) popup_fep_vtchi_icf_pane_ParamLimits

0xa46f,	// (0x0005a4cb) ituss_keypad_pane_ParamLimits

0x2843,	// (0x0005289f) ituss_sks_pane

0x3824,	// (0x00053880) bg_icf_pane_ParamLimits

0x27ec,	// (0x00052848) icf_edit_indi_pane_ParamLimits

0x27ec,	// (0x00052848) icf_edit_indi_pane

0xa649,	// (0x0005a6a5) list_vkb_icf_pane_ParamLimits

0x3824,	// (0x00053880) bg_icf_pane_cp01_ParamLimits

0x27ec,	// (0x00052848) icf_edit_indi_pane_cp01_ParamLimits

0x27ec,	// (0x00052848) icf_edit_indi_pane_cp01

0xa65d,	// (0x0005a6b9) vtchi_query_pane

0x756e,	// (0x000575ca) icf_edit_indi_pane_g1_ParamLimits

0x756e,	// (0x000575ca) icf_edit_indi_pane_g1

0xa701,	// (0x0005a75d) icf_edit_indi_pane_g2_ParamLimits

0xa701,	// (0x0005a75d) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0005ff73) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0005ff73) icf_edit_indi_pane_g

0xa710,	// (0x0005a76c) icf_edit_indi_pane_t1

0xa697,	// (0x0005a6f3) bg_input_focus_pane_cp042

0x3747,	// (0x000537a3) vtchi_button_pane

0xa6a0,	// (0x0005a6fc) vtchi_query_pane_t1

0xa6ae,	// (0x0005a70a) vtchi_query_pane_t2

0xa6bc,	// (0x0005a718) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0005ff62) vtchi_query_pane_t

0x28a6,	// (0x00052902) bg_button_pane_cp13

0xa6ca,	// (0x0005a726) vtchi_button_pane_g1

0xa6d2,	// (0x0005a72e) ituss_sks_pane_g1

0xa6dd,	// (0x0005a739) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0005ff69) ituss_sks_pane_g

0xa6e5,	// (0x0005a741) ituss_sks_pane_t1

0xa6f3,	// (0x0005a74f) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0005ff6e) ituss_sks_pane_t

0x6d67,	// (0x00056dc3) indicator_nsta_pane_cp_g1

0x6d70,	// (0x00056dcc) indicator_nsta_pane_cp_g2

0x6d78,	// (0x00056dd4) indicator_nsta_pane_cp_g3

0x6d80,	// (0x00056ddc) indicator_nsta_pane_cp_g4

0x6d80,	// (0x00056ddc) indicator_nsta_pane_cp_g5

0x6d80,	// (0x00056ddc) indicator_nsta_pane_cp_g6

0x0005,

0xfab3,	// (0x0005fb0f) indicator_nsta_pane_cp_g

0xecd2,	// (0x0005ed2e) cell_graphic2_pane_t2_ParamLimits

0xecd2,	// (0x0005ed2e) cell_graphic2_pane_t2

0x0001,

0xfdcc,	// (0x0005fe28) cell_graphic2_pane_t_ParamLimits

0xfdcc,	// (0x0005fe28) cell_graphic2_pane_t

0xed08,	// (0x0005ed64) cell_graphic2_control_pane_t1

0xcf3c,	// (0x0005cf98) signal_pane_g3_ParamLimits

0xcf3c,	// (0x0005cf98) signal_pane_g3

0xcf50,	// (0x0005cfac) signal_pane_g4_ParamLimits

0xcf50,	// (0x0005cfac) signal_pane_g4

0xa449,	// (0x0005a4a5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa449,	// (0x0005a4a5) cell_ai5_widget_list_row_pane_t3

0xa52c,	// (0x0005a588) cell_ituss_key_pane_t1_ParamLimits

0xa52c,	// (0x0005a588) cell_ituss_key_pane_t1

0x4dea,	// (0x00054e46) form_field_data_wide_pane_vc_t2_ParamLimits

0x4dea,	// (0x00054e46) form_field_data_wide_pane_vc_t2

0x4dfe,	// (0x00054e5a) form_field_data_wide_pane_vc_t3_ParamLimits

0x4dfe,	// (0x00054e5a) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0005f86b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0005f86b) form_field_data_wide_pane_vc_t

0x6a1f,	// (0x00056a7b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6a1f,	// (0x00056a7b) form_field_slider_wide_pane_vc_t3

0x6afd,	// (0x00056b59) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6afd,	// (0x00056b59) form_field_popup_wide_pane_vc_t2

0x6b14,	// (0x00056b70) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6b14,	// (0x00056b70) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa2,	// (0x0005fafe) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0005fafe) form_field_popup_wide_pane_vc_t

0xca82,	// (0x0005cade) aid_fshwr2_btn_pane_ParamLimits

0xca91,	// (0x0005caed) aid_fshwr2_syb_pane_ParamLimits

0xcaa3,	// (0x0005caff) aid_fshwr2_txt_pane_ParamLimits

0x1f50,	// (0x00051fac) fshwr2_bg_pane_ParamLimits

0xcab2,	// (0x0005cb0e) fshwr2_func_candi_pane_ParamLimits

0xcac3,	// (0x0005cb1f) fshwr2_hwr_syb_pane_ParamLimits

0xcade,	// (0x0005cb3a) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
