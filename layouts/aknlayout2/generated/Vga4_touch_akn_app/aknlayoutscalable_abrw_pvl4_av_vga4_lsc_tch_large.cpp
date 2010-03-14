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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000525ee };

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
0xac2a,	// (0x0005d218) Screen

0xac36,	// (0x0005d224) application_window_ParamLimits

0xac36,	// (0x0005d224) application_window

0xd26f,	// (0x0005f85d) screen_g1

0xac6e,	// (0x0005d25c) area_bottom_pane_ParamLimits

0xac6e,	// (0x0005d25c) area_bottom_pane

0xf0cc,	// (0x000616ba) area_top_pane_ParamLimits

0xf0cc,	// (0x000616ba) area_top_pane

0xf16a,	// (0x00061758) main_pane_ParamLimits

0xf16a,	// (0x00061758) main_pane

0xd279,	// (0x0005f867) misc_graphics

0xcdbc,	// (0x0005f3aa) battery_pane_ParamLimits

0xcdbc,	// (0x0005f3aa) battery_pane

0x5020,	// (0x0005760e) bg_status_flat_pane_g8

0x5028,	// (0x00057616) bg_status_flat_pane_g9

0x4400,	// (0x000569ee) context_pane_ParamLimits

0x4400,	// (0x000569ee) context_pane

0xcf33,	// (0x0005f521) navi_pane_ParamLimits

0xcf33,	// (0x0005f521) navi_pane

0xcfbd,	// (0x0005f5ab) signal_pane_ParamLimits

0xcfbd,	// (0x0005f5ab) signal_pane

0x0008,

0xf88a,	// (0x00061e78) bg_status_flat_pane_g

0xd04d,	// (0x0005f63b) status_pane_g1_ParamLimits

0xd04d,	// (0x0005f63b) status_pane_g1

0xd063,	// (0x0005f651) status_pane_g2_ParamLimits

0xd063,	// (0x0005f651) status_pane_g2

0x4641,	// (0x00056c2f) status_pane_g3_ParamLimits

0x4641,	// (0x00056c2f) status_pane_g3

0x0004,

0xf7bd,	// (0x00061dab) status_pane_g_ParamLimits

0xf7bd,	// (0x00061dab) status_pane_g

0xd06f,	// (0x0005f65d) title_pane_ParamLimits

0xd06f,	// (0x0005f65d) title_pane

0xd0d2,	// (0x0005f6c0) uni_indicator_pane_ParamLimits

0xd0d2,	// (0x0005f6c0) uni_indicator_pane

0x3c2d,	// (0x0005621b) bg_list_pane_ParamLimits

0x3c2d,	// (0x0005621b) bg_list_pane

0xc5e6,	// (0x0005ebd4) find_pane

0xc5ee,	// (0x0005ebdc) listscroll_app_pane_ParamLimits

0xc5ee,	// (0x0005ebdc) listscroll_app_pane

0x3c61,	// (0x0005624f) listscroll_form_pane

0xc5fa,	// (0x0005ebe8) listscroll_gen_pane_ParamLimits

0xc5fa,	// (0x0005ebe8) listscroll_gen_pane

0x3c61,	// (0x0005624f) listscroll_set_pane

0x5bd9,	// (0x000581c7) main_idle_act_pane

0x3911,	// (0x00055eff) main_idle_trad_pane

0x3911,	// (0x00055eff) main_list_empty_pane

0x3c8f,	// (0x0005627d) main_midp_pane

0x3c9b,	// (0x00056289) main_pane_g1_ParamLimits

0x3c9b,	// (0x00056289) main_pane_g1

0xc61c,	// (0x0005ec0a) popup_ai_message_window_ParamLimits

0xc61c,	// (0x0005ec0a) popup_ai_message_window

0xc6bc,	// (0x0005ecaa) popup_fep_china_uni_window_ParamLimits

0xc6bc,	// (0x0005ecaa) popup_fep_china_uni_window

0x3db9,	// (0x000563a7) popup_fep_japan_candidate_window_ParamLimits

0x3db9,	// (0x000563a7) popup_fep_japan_candidate_window

0x3de3,	// (0x000563d1) popup_fep_japan_predictive_window_ParamLimits

0x3de3,	// (0x000563d1) popup_fep_japan_predictive_window

0xc71c,	// (0x0005ed0a) popup_find_window

0xc739,	// (0x0005ed27) popup_grid_graphic_window_ParamLimits

0xc739,	// (0x0005ed27) popup_grid_graphic_window

0x3e54,	// (0x00056442) popup_large_graphic_colour_window

0xc7dd,	// (0x0005edcb) popup_menu_window_ParamLimits

0xc7dd,	// (0x0005edcb) popup_menu_window

0xc9c9,	// (0x0005efb7) popup_note_image_window

0xc989,	// (0x0005ef77) popup_note_wait_window_ParamLimits

0xc989,	// (0x0005ef77) popup_note_wait_window

0xc9e1,	// (0x0005efcf) popup_note_window_ParamLimits

0xc9e1,	// (0x0005efcf) popup_note_window

0xca8f,	// (0x0005f07d) popup_query_code_window_ParamLimits

0xca8f,	// (0x0005f07d) popup_query_code_window

0x40c0,	// (0x000566ae) popup_query_data_code_window_ParamLimits

0x40c0,	// (0x000566ae) popup_query_data_code_window

0xcacf,	// (0x0005f0bd) popup_query_data_window_ParamLimits

0xcacf,	// (0x0005f0bd) popup_query_data_window

0xcb63,	// (0x0005f151) popup_query_sat_info_window_ParamLimits

0xcb63,	// (0x0005f151) popup_query_sat_info_window

0xcc0e,	// (0x0005f1fc) popup_snote_single_graphic_window_ParamLimits

0xcc0e,	// (0x0005f1fc) popup_snote_single_graphic_window

0xcc0e,	// (0x0005f1fc) popup_snote_single_text_window_ParamLimits

0xcc0e,	// (0x0005f1fc) popup_snote_single_text_window

0x415b,	// (0x00056749) popup_sub_window_general

0x42a1,	// (0x0005688f) popup_window_general_ParamLimits

0x42a1,	// (0x0005688f) popup_window_general

0x42ba,	// (0x000568a8) power_save_pane

0xb983,	// (0x0005df71) control_pane_g1_ParamLimits

0xb983,	// (0x0005df71) control_pane_g1

0xb9ac,	// (0x0005df9a) control_pane_g2_ParamLimits

0xb9ac,	// (0x0005df9a) control_pane_g2

0x3bde,	// (0x000561cc) control_pane_g3_ParamLimits

0x3bde,	// (0x000561cc) control_pane_g3

0x0007,

0xf7a5,	// (0x00061d93) control_pane_g_ParamLimits

0xf7a5,	// (0x00061d93) control_pane_g

0xb9e7,	// (0x0005dfd5) control_pane_t1_ParamLimits

0xb9e7,	// (0x0005dfd5) control_pane_t1

0xba45,	// (0x0005e033) control_pane_t2_ParamLimits

0xba45,	// (0x0005e033) control_pane_t2

0x0002,

0xf7b6,	// (0x00061da4) control_pane_t_ParamLimits

0xf7b6,	// (0x00061da4) control_pane_t

0x3aff,	// (0x000560ed) navi_navi_volume_pane_cp1

0x3b08,	// (0x000560f6) status_small_icon_pane

0x3b10,	// (0x000560fe) status_small_pane_g1_ParamLimits

0x3b10,	// (0x000560fe) status_small_pane_g1

0x3b44,	// (0x00056132) status_small_pane_g2_ParamLimits

0x3b44,	// (0x00056132) status_small_pane_g2

0x3b50,	// (0x0005613e) status_small_pane_g3_ParamLimits

0x3b50,	// (0x0005613e) status_small_pane_g3

0x3b5c,	// (0x0005614a) status_small_pane_g4_ParamLimits

0x3b5c,	// (0x0005614a) status_small_pane_g4

0x3b68,	// (0x00056156) status_small_pane_g5_ParamLimits

0x3b68,	// (0x00056156) status_small_pane_g5

0x3b77,	// (0x00056165) status_small_pane_g6_ParamLimits

0x3b77,	// (0x00056165) status_small_pane_g6

0x0007,

0xf794,	// (0x00061d82) status_small_pane_g_ParamLimits

0xf794,	// (0x00061d82) status_small_pane_g

0x3ba7,	// (0x00056195) status_small_pane_t1

0x3bca,	// (0x000561b8) status_small_wait_pane_ParamLimits

0x3bca,	// (0x000561b8) status_small_wait_pane

0xc3c6,	// (0x0005e9b4) aid_levels_signal_ParamLimits

0xc3c6,	// (0x0005e9b4) aid_levels_signal

0xc3de,	// (0x0005e9cc) signal_pane_g1_ParamLimits

0xc3de,	// (0x0005e9cc) signal_pane_g1

0xc3f9,	// (0x0005e9e7) signal_pane_g2_ParamLimits

0xc3f9,	// (0x0005e9e7) signal_pane_g2

0x0003,

0xf725,	// (0x00061d13) signal_pane_g_ParamLimits

0xf725,	// (0x00061d13) signal_pane_g

0x33e4,	// (0x000559d2) context_pane_g1

0xadeb,	// (0x0005d3d9) title_pane_g1

0xae22,	// (0x0005d410) title_pane_t1

0x214f,	// (0x0005473d) title_pane_t2

0x2175,	// (0x00054763) title_pane_t3

0x0002,

0xf56f,	// (0x00061b5d) title_pane_t

0xd0fa,	// (0x0005f6e8) aid_levels_battery_ParamLimits

0xd0fa,	// (0x0005f6e8) aid_levels_battery

0xd116,	// (0x0005f704) battery_pane_g1_ParamLimits

0xd116,	// (0x0005f704) battery_pane_g1

0xd133,	// (0x0005f721) battery_pane_g2_ParamLimits

0xd133,	// (0x0005f721) battery_pane_g2

0x0001,

0xf7c8,	// (0x00061db6) battery_pane_g_ParamLimits

0xf7c8,	// (0x00061db6) battery_pane_g

0xd447,	// (0x0005fa35) uni_indicator_pane_g1

0xd45c,	// (0x0005fa4a) uni_indicator_pane_g2

0xd471,	// (0x0005fa5f) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x00061f20) uni_indicator_pane_g

0x377f,	// (0x00055d6d) navi_icon_pane_ParamLimits

0x377f,	// (0x00055d6d) navi_icon_pane

0x36c6,	// (0x00055cb4) navi_midp_pane

0x379b,	// (0x00055d89) navi_navi_pane

0x37a5,	// (0x00055d93) navi_text_pane_ParamLimits

0x37a5,	// (0x00055d93) navi_text_pane

0xd26f,	// (0x0005f85d) status_small_wait_pane_g1

0x25b9,	// (0x00054ba7) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00061f1b) status_small_wait_pane_g

0xd3e6,	// (0x0005f9d4) navi_navi_icon_text_pane

0xd3ee,	// (0x0005f9dc) navi_navi_pane_g1_ParamLimits

0xd3ee,	// (0x0005f9dc) navi_navi_pane_g1

0xd400,	// (0x0005f9ee) navi_navi_pane_g2_ParamLimits

0xd400,	// (0x0005f9ee) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00061ee9) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00061ee9) navi_navi_pane_g

0x56af,	// (0x00057c9d) navi_navi_tabs_pane

0xd412,	// (0x0005fa00) navi_navi_text_pane

0xd3e6,	// (0x0005f9d4) navi_navi_volume_pane

0xd3d4,	// (0x0005f9c2) navi_text_pane_t1

0xd3c8,	// (0x0005f9b6) navi_icon_pane_g1

0x55a0,	// (0x00057b8e) navi_navi_text_pane_t1

0xbcc2,	// (0x0005e2b0) navi_navi_volume_pane_g1

0xbcca,	// (0x0005e2b8) volume_small_pane

0xd324,	// (0x0005f912) navi_navi_icon_text_pane_g1

0xd32c,	// (0x0005f91a) navi_navi_icon_text_pane_t1

0x379b,	// (0x00055d89) navi_tabs_2_long_pane

0x379b,	// (0x00055d89) navi_tabs_2_pane

0x379b,	// (0x00055d89) navi_tabs_3_long_pane

0x379b,	// (0x00055d89) navi_tabs_3_pane

0x379b,	// (0x00055d89) navi_tabs_4_pane

0xbca2,	// (0x0005e290) tabs_2_active_pane_ParamLimits

0xbca2,	// (0x0005e290) tabs_2_active_pane

0xbcb2,	// (0x0005e2a0) tabs_2_passive_pane_ParamLimits

0xbcb2,	// (0x0005e2a0) tabs_2_passive_pane

0xbc70,	// (0x0005e25e) tabs_3_active_pane_ParamLimits

0xbc70,	// (0x0005e25e) tabs_3_active_pane

0xbc80,	// (0x0005e26e) tabs_3_passive_pane_ParamLimits

0xbc80,	// (0x0005e26e) tabs_3_passive_pane

0xbc91,	// (0x0005e27f) tabs_3_passive_pane_cp_ParamLimits

0xbc91,	// (0x0005e27f) tabs_3_passive_pane_cp

0xbc2c,	// (0x0005e21a) tabs_4_active_pane_ParamLimits

0xbc2c,	// (0x0005e21a) tabs_4_active_pane

0xbc3d,	// (0x0005e22b) tabs_4_passive_pane_ParamLimits

0xbc3d,	// (0x0005e22b) tabs_4_passive_pane

0xbc4e,	// (0x0005e23c) tabs_4_passive_pane_cp_ParamLimits

0xbc4e,	// (0x0005e23c) tabs_4_passive_pane_cp

0xbc5f,	// (0x0005e24d) tabs_4_passive_pane_cp2_ParamLimits

0xbc5f,	// (0x0005e24d) tabs_4_passive_pane_cp2

0xbc08,	// (0x0005e1f6) tabs_2_long_active_pane_ParamLimits

0xbc08,	// (0x0005e1f6) tabs_2_long_active_pane

0xbc1a,	// (0x0005e208) tabs_2_long_passive_pane_ParamLimits

0xbc1a,	// (0x0005e208) tabs_2_long_passive_pane

0xbbbd,	// (0x0005e1ab) tabs_3_long_active_pane_ParamLimits

0xbbbd,	// (0x0005e1ab) tabs_3_long_active_pane

0xbbd6,	// (0x0005e1c4) tabs_3_long_passive_pane_ParamLimits

0xbbd6,	// (0x0005e1c4) tabs_3_long_passive_pane

0xbbef,	// (0x0005e1dd) tabs_3_long_passive_pane_cp_ParamLimits

0xbbef,	// (0x0005e1dd) tabs_3_long_passive_pane_cp

0x0b7c,	// (0x0005316a) volume_small_pane_g1

0xbb6c,	// (0x0005e15a) volume_small_pane_g2

0xbb75,	// (0x0005e163) volume_small_pane_g3

0xbb7e,	// (0x0005e16c) volume_small_pane_g4

0xbb87,	// (0x0005e175) volume_small_pane_g5

0xbb90,	// (0x0005e17e) volume_small_pane_g6

0xbb99,	// (0x0005e187) volume_small_pane_g7

0xbba2,	// (0x0005e190) volume_small_pane_g8

0xbbab,	// (0x0005e199) volume_small_pane_g9

0xbbb4,	// (0x0005e1a2) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00061eb5) volume_small_pane_g

0x2403,	// (0x000549f1) bg_active_tab_pane_cp2_ParamLimits

0x2403,	// (0x000549f1) bg_active_tab_pane_cp2

0xaeae,	// (0x0005d49c) tabs_3_active_pane_g1

0xaeb6,	// (0x0005d4a4) tabs_3_active_pane_t1

0x2403,	// (0x000549f1) bg_passive_tab_pane_cp2_ParamLimits

0x2403,	// (0x000549f1) bg_passive_tab_pane_cp2

0xaeae,	// (0x0005d49c) tabs_3_passive_pane_g1

0xaeb6,	// (0x0005d4a4) tabs_3_passive_pane_t1

0x2403,	// (0x000549f1) bg_active_tab_pane_cp3_ParamLimits

0x2403,	// (0x000549f1) bg_active_tab_pane_cp3

0xaec8,	// (0x0005d4b6) tabs_4_active_pane_g1

0xaed0,	// (0x0005d4be) tabs_4_active_pane_t1

0x2403,	// (0x000549f1) bg_passive_tab_pane_cp3_ParamLimits

0x2403,	// (0x000549f1) bg_passive_tab_pane_cp3

0xaec8,	// (0x0005d4b6) tabs_4_1_passive_pane_g1

0xaed0,	// (0x0005d4be) tabs_4_1_passive_pane_t1

0x3c8f,	// (0x0005627d) list_highlight_pane_cp2

0xd52f,	// (0x0005fb1d) list_set_pane_ParamLimits

0xd52f,	// (0x0005fb1d) list_set_pane

0xd5f7,	// (0x0005fbe5) main_pane_set_t1_ParamLimits

0xd5f7,	// (0x0005fbe5) main_pane_set_t1

0xd617,	// (0x0005fc05) main_pane_set_t2_ParamLimits

0xd617,	// (0x0005fc05) main_pane_set_t2

0xd62b,	// (0x0005fc19) main_pane_set_t3_ParamLimits

0xd62b,	// (0x0005fc19) main_pane_set_t3

0xd63f,	// (0x0005fc2d) main_pane_set_t4_ParamLimits

0xd63f,	// (0x0005fc2d) main_pane_set_t4

0x0003,

0xf997,	// (0x00061f85) main_pane_set_t_ParamLimits

0xf997,	// (0x00061f85) main_pane_set_t

0xd653,	// (0x0005fc41) setting_code_pane

0x5d39,	// (0x00058327) setting_slider_graphic_pane

0x5d39,	// (0x00058327) setting_slider_pane

0x5d39,	// (0x00058327) setting_text_pane

0x5d39,	// (0x00058327) setting_volume_pane

0xf4d6,	// (0x00061ac4) volume_set_pane

0x2187,	// (0x00054775) bg_set_opt_pane_cp

0xf4e0,	// (0x00061ace) setting_slider_pane_t1

0xf4f6,	// (0x00061ae4) setting_slider_pane_t2

0xf510,	// (0x00061afe) setting_slider_pane_t3

0x0002,

0xf576,	// (0x00061b64) setting_slider_pane_t

0xf528,	// (0x00061b16) slider_set_pane

0xd279,	// (0x0005f867) bg_set_opt_pane_cp2

0x21c9,	// (0x000547b7) setting_slider_graphic_pane_g1

0xf53e,	// (0x00061b2c) setting_slider_graphic_pane_t1

0xf54e,	// (0x00061b3c) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00061b6b) setting_slider_graphic_pane_t

0xf55e,	// (0x00061b4c) slider_set_pane_cp

0xd279,	// (0x0005f867) input_focus_pane_cp1

0x5bc0,	// (0x000581ae) list_set_text_pane

0xd26f,	// (0x0005f85d) setting_text_pane_g1

0xd279,	// (0x0005f867) input_focus_pane_cp2

0xd26f,	// (0x0005f85d) setting_code_pane_g1

0x21d2,	// (0x000547c0) setting_code_pane_t1

0xf2e6,	// (0x000618d4) set_text_pane_t1_ParamLimits

0xf2e6,	// (0x000618d4) set_text_pane_t1

0x2b21,	// (0x0005510f) set_opt_bg_pane_g1

0x2b29,	// (0x00055117) set_opt_bg_pane_g2

0x5b98,	// (0x00058186) set_opt_bg_pane_g3

0x2b39,	// (0x00055127) set_opt_bg_pane_g4

0x2b41,	// (0x0005512f) set_opt_bg_pane_g5

0x2b49,	// (0x00055137) set_opt_bg_pane_g6

0x5ba2,	// (0x00058190) set_opt_bg_pane_g7

0x5bac,	// (0x0005819a) set_opt_bg_pane_g8

0x5bb6,	// (0x000581a4) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x00061f72) set_opt_bg_pane_g

0x5b8b,	// (0x00058179) slider_set_pane_g1

0x0d88,	// (0x00053376) slider_set_pane_g2

0x0006,

0xf975,	// (0x00061f63) slider_set_pane_g

0x0ce8,	// (0x000532d6) volume_set_pane_g1

0x0cf2,	// (0x000532e0) volume_set_pane_g2

0x0cfc,	// (0x000532ea) volume_set_pane_g3

0x0d06,	// (0x000532f4) volume_set_pane_g4

0x0d10,	// (0x000532fe) volume_set_pane_g5

0x0d1a,	// (0x00053308) volume_set_pane_g6

0x0d24,	// (0x00053312) volume_set_pane_g7

0x0d2e,	// (0x0005331c) volume_set_pane_g8

0x0d38,	// (0x00053326) volume_set_pane_g9

0x0d42,	// (0x00053330) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00061f3b) volume_set_pane_g

0xaee2,	// (0x0005d4d0) indicator_pane_ParamLimits

0xaee2,	// (0x0005d4d0) indicator_pane

0xaf0e,	// (0x0005d4fc) main_idle_pane_g2_ParamLimits

0xaf0e,	// (0x0005d4fc) main_idle_pane_g2

0xaf46,	// (0x0005d534) main_pane_idle_g1_ParamLimits

0xaf46,	// (0x0005d534) main_pane_idle_g1

0x2222,	// (0x00054810) popup_clock_digital_analogue_window_ParamLimits

0x2222,	// (0x00054810) popup_clock_digital_analogue_window

0xaf74,	// (0x0005d562) soft_indicator_pane_ParamLimits

0xaf74,	// (0x0005d562) soft_indicator_pane

0xaf90,	// (0x0005d57e) wallpaper_pane_ParamLimits

0xaf90,	// (0x0005d57e) wallpaper_pane

0xd26f,	// (0x0005f85d) wallpaper_pane_g1

0xafa2,	// (0x0005d590) indicator_pane_g1_ParamLimits

0xafa2,	// (0x0005d590) indicator_pane_g1

0x5ffd,	// (0x000585eb) navi_navi_icon_text_pane_srt_g1

0x2276,	// (0x00054864) soft_indicator_pane_t1

0x2290,	// (0x0005487e) aid_ps_area_pane

0xafbb,	// (0x0005d5a9) aid_ps_clock_pane

0x22af,	// (0x0005489d) aid_ps_indicator_pane

0x22bb,	// (0x000548a9) indicator_ps_pane_ParamLimits

0x22bb,	// (0x000548a9) indicator_ps_pane

0x22ca,	// (0x000548b8) power_save_pane_g1_ParamLimits

0x22ca,	// (0x000548b8) power_save_pane_g1

0x22d6,	// (0x000548c4) power_save_pane_g2_ParamLimits

0x22d6,	// (0x000548c4) power_save_pane_g2

0xf0ac,	// (0x0006169a) aid_navinavi_width_pane

0x2290,	// (0x0005487e) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00061b70) power_save_pane_g_ParamLimits

0xf582,	// (0x00061b70) power_save_pane_g

0x22e4,	// (0x000548d2) power_save_pane_t1_ParamLimits

0x22e4,	// (0x000548d2) power_save_pane_t1

0xafbb,	// (0x0005d5a9) aid_ps_clock_pane_ParamLimits

0x22af,	// (0x0005489d) aid_ps_indicator_pane_ParamLimits

0x22f6,	// (0x000548e4) power_save_pane_t4_ParamLimits

0x22f6,	// (0x000548e4) power_save_pane_t4

0x0001,

0xf587,	// (0x00061b75) power_save_pane_t_ParamLimits

0xf587,	// (0x00061b75) power_save_pane_t

0x2320,	// (0x0005490e) power_save_t3_ParamLimits

0x2320,	// (0x0005490e) power_save_t3

0x230b,	// (0x000548f9) power_save_t2_ParamLimits

0x230b,	// (0x000548f9) power_save_t2

0x2335,	// (0x00054923) indicator_ps_pane_g1

0xafc9,	// (0x0005d5b7) ai_gene_pane_ParamLimits

0xafc9,	// (0x0005d5b7) ai_gene_pane

0xafe0,	// (0x0005d5ce) ai_links_pane_ParamLimits

0xafe0,	// (0x0005d5ce) ai_links_pane

0xaff8,	// (0x0005d5e6) indicator_pane_cp1_ParamLimits

0xaff8,	// (0x0005d5e6) indicator_pane_cp1

0xb007,	// (0x0005d5f5) main_pane_idle_g1_cp_ParamLimits

0xb007,	// (0x0005d5f5) main_pane_idle_g1_cp

0x236e,	// (0x0005495c) popup_ai_links_title_window

0xb01f,	// (0x0005d60d) soft_indicator_pane_cp1_ParamLimits

0xb01f,	// (0x0005d60d) soft_indicator_pane_cp1

0x595e,	// (0x00057f4c) ai_links_pane_g1

0x5967,	// (0x00057f55) grid_ai_links_pane

0xd43e,	// (0x0005fa2c) ai_gene_pane_1

0x594c,	// (0x00057f3a) ai_gene_pane_2

0x5955,	// (0x00057f43) list_highlight_pane_cp4

0xd41a,	// (0x0005fa08) cell_ai_link_pane_ParamLimits

0xd41a,	// (0x0005fa08) cell_ai_link_pane

0x591b,	// (0x00057f09) cell_ai_link_pane_g1

0x25b9,	// (0x00054ba7) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00061f16) cell_ai_link_pane_g

0xd279,	// (0x0005f867) grid_highlight_cp2

0xd279,	// (0x0005f867) bg_popup_sub_pane_cp1

0x2391,	// (0x0005497f) popup_ai_links_title_window_t1

0x5867,	// (0x00057e55) ai_gene_pane_1_g1_ParamLimits

0x5867,	// (0x00057e55) ai_gene_pane_1_g1

0x5873,	// (0x00057e61) ai_gene_pane_1_g2_ParamLimits

0x5873,	// (0x00057e61) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00061f0c) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00061f0c) ai_gene_pane_1_g

0x5880,	// (0x00057e6e) ai_gene_pane_1_t1_ParamLimits

0x5880,	// (0x00057e6e) ai_gene_pane_1_t1

0x58b4,	// (0x00057ea2) grid_ai_soft_ind_pane

0x5852,	// (0x00057e40) ai_gene_pane_2_t1_ParamLimits

0x5852,	// (0x00057e40) ai_gene_pane_2_t1

0xb033,	// (0x0005d621) main_pane_empty_t1_ParamLimits

0xb033,	// (0x0005d621) main_pane_empty_t1

0xb04b,	// (0x0005d639) main_pane_empty_t2_ParamLimits

0xb04b,	// (0x0005d639) main_pane_empty_t2

0xb060,	// (0x0005d64e) main_pane_empty_t3_ParamLimits

0xb060,	// (0x0005d64e) main_pane_empty_t3

0xb072,	// (0x0005d660) main_pane_empty_t4_ParamLimits

0xb072,	// (0x0005d660) main_pane_empty_t4

0xb084,	// (0x0005d672) main_pane_empty_t5_ParamLimits

0xb084,	// (0x0005d672) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00061b7a) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00061b7a) main_pane_empty_t

0x2b7b,	// (0x00055169) bg_popup_window_pane_ParamLimits

0x2b7b,	// (0x00055169) bg_popup_window_pane

0x55ae,	// (0x00057b9c) find_popup_pane_cp2_ParamLimits

0x55ae,	// (0x00057b9c) find_popup_pane_cp2

0x55ba,	// (0x00057ba8) heading_pane_ParamLimits

0x55ba,	// (0x00057ba8) heading_pane

0xd279,	// (0x0005f867) bg_popup_sub_pane

0xd349,	// (0x0005f937) bg_popup_window_pane_g1_ParamLimits

0xd349,	// (0x0005f937) bg_popup_window_pane_g1

0xd358,	// (0x0005f946) bg_popup_window_pane_g2_ParamLimits

0xd358,	// (0x0005f946) bg_popup_window_pane_g2

0xd364,	// (0x0005f952) bg_popup_window_pane_g3_ParamLimits

0xd364,	// (0x0005f952) bg_popup_window_pane_g3

0xd370,	// (0x0005f95e) bg_popup_window_pane_g4_ParamLimits

0xd370,	// (0x0005f95e) bg_popup_window_pane_g4

0xd37f,	// (0x0005f96d) bg_popup_window_pane_g5_ParamLimits

0xd37f,	// (0x0005f96d) bg_popup_window_pane_g5

0xd38f,	// (0x0005f97d) bg_popup_window_pane_g6_ParamLimits

0xd38f,	// (0x0005f97d) bg_popup_window_pane_g6

0xd39b,	// (0x0005f989) bg_popup_window_pane_g7_ParamLimits

0xd39b,	// (0x0005f989) bg_popup_window_pane_g7

0xd3aa,	// (0x0005f998) bg_popup_window_pane_g8_ParamLimits

0xd3aa,	// (0x0005f998) bg_popup_window_pane_g8

0xd3b9,	// (0x0005f9a7) bg_popup_window_pane_g9_ParamLimits

0xd3b9,	// (0x0005f9a7) bg_popup_window_pane_g9

0x5594,	// (0x00057b82) bg_popup_window_pane_g10_ParamLimits

0x5594,	// (0x00057b82) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00061ed4) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00061ed4) bg_popup_window_pane_g

0x54bd,	// (0x00057aab) bg_popup_heading_pane_ParamLimits

0x54bd,	// (0x00057aab) bg_popup_heading_pane

0x0e5c,	// (0x0005344a) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e5c,	// (0x0005344a) tabs_4_passive_pane_cp_srt

0x0e6e,	// (0x0005345c) tabs_4_passive_pane_srt_ParamLimits

0x54d1,	// (0x00057abf) heading_pane_g2

0x0e6e,	// (0x0005345c) tabs_4_passive_pane_srt

0x48be,	// (0x00056eac) bg_passive_tab_pane_cp3_srt_ParamLimits

0x48be,	// (0x00056eac) bg_passive_tab_pane_cp3_srt

0x54d9,	// (0x00057ac7) heading_pane_t1_ParamLimits

0x54d9,	// (0x00057ac7) heading_pane_t1

0x54f0,	// (0x00057ade) heading_pane_t2_ParamLimits

0x54f0,	// (0x00057ade) heading_pane_t2

0x0001,

0xf8e1,	// (0x00061ecf) heading_pane_t_ParamLimits

0xf8e1,	// (0x00061ecf) heading_pane_t

0x4fe8,	// (0x000575d6) bg_popup_heading_pane_g1

0x5097,	// (0x00057685) bg_popup_heading_pane_g2

0x50a1,	// (0x0005768f) bg_popup_heading_pane_g3

0x50ab,	// (0x00057699) bg_popup_heading_pane_g4

0x50b5,	// (0x000576a3) bg_popup_heading_pane_g5

0x50bf,	// (0x000576ad) bg_popup_heading_pane_g6

0x50c7,	// (0x000576b5) bg_popup_heading_pane_g7

0x50cf,	// (0x000576bd) bg_popup_heading_pane_g8

0x50d9,	// (0x000576c7) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00061e8b) bg_popup_heading_pane_g

0x47cc,	// (0x00056dba) bg_popup_sub_pane_g1

0x47dc,	// (0x00056dca) bg_popup_sub_pane_g2

0x47d4,	// (0x00056dc2) bg_popup_sub_pane_g3

0x47ec,	// (0x00056dda) bg_popup_sub_pane_g4

0x47e4,	// (0x00056dd2) bg_popup_sub_pane_g5

0x47f4,	// (0x00056de2) bg_popup_sub_pane_g6

0x47fc,	// (0x00056dea) bg_popup_sub_pane_g7

0x480c,	// (0x00056dfa) bg_popup_sub_pane_g8

0x4804,	// (0x00056df2) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00061e65) bg_popup_sub_pane_g

0x2403,	// (0x000549f1) bg_popup_window_pane_cp5_ParamLimits

0x2403,	// (0x000549f1) bg_popup_window_pane_cp5

0x241f,	// (0x00054a0d) popup_note_window_g1_ParamLimits

0x241f,	// (0x00054a0d) popup_note_window_g1

0x242b,	// (0x00054a19) popup_note_window_t1_ParamLimits

0x242b,	// (0x00054a19) popup_note_window_t1

0x2441,	// (0x00054a2f) popup_note_window_t2_ParamLimits

0x2441,	// (0x00054a2f) popup_note_window_t2

0x2457,	// (0x00054a45) popup_note_window_t3_ParamLimits

0x2457,	// (0x00054a45) popup_note_window_t3

0x246d,	// (0x00054a5b) popup_note_window_t4_ParamLimits

0x246d,	// (0x00054a5b) popup_note_window_t4

0x2495,	// (0x00054a83) popup_note_window_t5_ParamLimits

0x2495,	// (0x00054a83) popup_note_window_t5

0x0004,

0xf597,	// (0x00061b85) popup_note_window_t_ParamLimits

0xf597,	// (0x00061b85) popup_note_window_t

0x24b9,	// (0x00054aa7) bg_popup_window_pane_cp6_ParamLimits

0x24b9,	// (0x00054aa7) bg_popup_window_pane_cp6

0x4f64,	// (0x00057552) popup_note_image_window_g1_ParamLimits

0x4f64,	// (0x00057552) popup_note_image_window_g1

0x4f70,	// (0x0005755e) popup_note_image_window_g2_ParamLimits

0x4f70,	// (0x0005755e) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00061e59) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00061e59) popup_note_image_window_g

0x4f89,	// (0x00057577) popup_note_image_window_t1_ParamLimits

0x4f89,	// (0x00057577) popup_note_image_window_t1

0x4fa2,	// (0x00057590) popup_note_image_window_t2_ParamLimits

0x4fa2,	// (0x00057590) popup_note_image_window_t2

0x4fbb,	// (0x000575a9) popup_note_image_window_t3_ParamLimits

0x4fbb,	// (0x000575a9) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00061e5e) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00061e5e) popup_note_image_window_t

0x4e24,	// (0x00057412) bg_popup_window_pane_cp7_ParamLimits

0x4e24,	// (0x00057412) bg_popup_window_pane_cp7

0x4e54,	// (0x00057442) popup_note_wait_window_g1_ParamLimits

0x4e54,	// (0x00057442) popup_note_wait_window_g1

0x4e60,	// (0x0005744e) popup_note_wait_window_g2_ParamLimits

0x4e60,	// (0x0005744e) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00061e47) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00061e47) popup_note_wait_window_g

0x4e78,	// (0x00057466) popup_note_wait_window_t1_ParamLimits

0x4e78,	// (0x00057466) popup_note_wait_window_t1

0x4e9f,	// (0x0005748d) popup_note_wait_window_t2_ParamLimits

0x4e9f,	// (0x0005748d) popup_note_wait_window_t2

0x4ebd,	// (0x000574ab) popup_note_wait_window_t3_ParamLimits

0x4ebd,	// (0x000574ab) popup_note_wait_window_t3

0x4ed0,	// (0x000574be) popup_note_wait_window_t4_ParamLimits

0x4ed0,	// (0x000574be) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00061e4e) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00061e4e) popup_note_wait_window_t

0x4ef5,	// (0x000574e3) wait_bar_pane_ParamLimits

0x4ef5,	// (0x000574e3) wait_bar_pane

0xd279,	// (0x0005f867) wait_anim_pane

0xd279,	// (0x0005f867) wait_border_pane

0xd26f,	// (0x0005f85d) wait_anim_pane_g1

0xd26f,	// (0x0005f85d) wait_anim_pane_g2

0x0001,

0xf720,	// (0x00061d0e) wait_anim_pane_g

0x4dc8,	// (0x000573b6) wait_border_pane_g1

0x4dd3,	// (0x000573c1) wait_border_pane_g2

0x4ddc,	// (0x000573ca) wait_border_pane_g3

0x0002,

0xf852,	// (0x00061e40) wait_border_pane_g

0x4c32,	// (0x00057220) bg_popup_window_pane_cp16_ParamLimits

0x4c32,	// (0x00057220) bg_popup_window_pane_cp16

0x4d32,	// (0x00057320) indicator_popup_pane_cp4_ParamLimits

0x4d32,	// (0x00057320) indicator_popup_pane_cp4

0x4d46,	// (0x00057334) popup_query_data_window_t1_ParamLimits

0x4d46,	// (0x00057334) popup_query_data_window_t1

0x4d58,	// (0x00057346) popup_query_data_window_t2_ParamLimits

0x4d58,	// (0x00057346) popup_query_data_window_t2

0x4d71,	// (0x0005735f) popup_query_data_window_t3_ParamLimits

0x4d71,	// (0x0005735f) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00061e39) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00061e39) popup_query_data_window_t

0x4d8b,	// (0x00057379) query_popup_data_pane_ParamLimits

0x4d8b,	// (0x00057379) query_popup_data_pane

0x4d9f,	// (0x0005738d) query_popup_data_pane_cp1_ParamLimits

0x4d9f,	// (0x0005738d) query_popup_data_pane_cp1

0x4c32,	// (0x00057220) bg_popup_window_pane_cp10_ParamLimits

0x4c32,	// (0x00057220) bg_popup_window_pane_cp10

0x4c64,	// (0x00057252) indicator_popup_pane_ParamLimits

0x4c64,	// (0x00057252) indicator_popup_pane

0x4c86,	// (0x00057274) popup_query_code_window_t1_ParamLimits

0x4c86,	// (0x00057274) popup_query_code_window_t1

0x4ca0,	// (0x0005728e) popup_query_code_window_t2_ParamLimits

0x4ca0,	// (0x0005728e) popup_query_code_window_t2

0x4ce9,	// (0x000572d7) popup_query_code_window_t3_ParamLimits

0x4ce9,	// (0x000572d7) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00061e32) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00061e32) popup_query_code_window_t

0x4d18,	// (0x00057306) query_popup_pane_ParamLimits

0x4d18,	// (0x00057306) query_popup_pane

0x24b9,	// (0x00054aa7) bg_popup_window_pane_cp15_ParamLimits

0x24b9,	// (0x00054aa7) bg_popup_window_pane_cp15

0x24d9,	// (0x00054ac7) indicator_popup_pane_cp1_ParamLimits

0x24d9,	// (0x00054ac7) indicator_popup_pane_cp1

0x24ec,	// (0x00054ada) indicator_popup_pane_cp2_ParamLimits

0x24ec,	// (0x00054ada) indicator_popup_pane_cp2

0x2507,	// (0x00054af5) popup_query_data_code_window_g1_ParamLimits

0x2507,	// (0x00054af5) popup_query_data_code_window_g1

0x251a,	// (0x00054b08) popup_query_data_code_window_t1_ParamLimits

0x251a,	// (0x00054b08) popup_query_data_code_window_t1

0x252c,	// (0x00054b1a) popup_query_data_code_window_t2_ParamLimits

0x252c,	// (0x00054b1a) popup_query_data_code_window_t2

0x253e,	// (0x00054b2c) popup_query_data_code_window_t3_ParamLimits

0x253e,	// (0x00054b2c) popup_query_data_code_window_t3

0x2554,	// (0x00054b42) popup_query_data_code_window_t4_ParamLimits

0x2554,	// (0x00054b42) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00061b90) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00061b90) popup_query_data_code_window_t

0x0a3d,	// (0x0005302b) list_single_midp_graphic_pane_g3

0x256e,	// (0x00054b5c) query_popup_data_pane_cp2_ParamLimits

0x2581,	// (0x00054b6f) query_popup_pane_cp2_ParamLimits

0x2581,	// (0x00054b6f) query_popup_pane_cp2

0xd279,	// (0x0005f867) bg_popup_window_pane_cp11

0x4c2a,	// (0x00057218) heading_pane_cp5

0x2671,	// (0x00054c5f) listscroll_popup_info_pane

0xd279,	// (0x0005f867) input_focus_pane_cp3

0x259c,	// (0x00054b8a) query_popup_pane_t1

0x25aa,	// (0x00054b98) list_popup_info_pane_ParamLimits

0x25aa,	// (0x00054b98) list_popup_info_pane

0x25b9,	// (0x00054ba7) listscroll_popup_info_pane_g1

0x25c1,	// (0x00054baf) scroll_pane_cp7

0x25cb,	// (0x00054bb9) popup_info_list_pane_t1_ParamLimits

0x25cb,	// (0x00054bb9) popup_info_list_pane_t1

0x25e5,	// (0x00054bd3) popup_info_list_pane_t2_ParamLimits

0x25e5,	// (0x00054bd3) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00061b99) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00061b99) popup_info_list_pane_t

0xd279,	// (0x0005f867) bg_popup_window_pane_cp12

0x6017,	// (0x00058605) find_popup_pane

0x2187,	// (0x00054775) bg_popup_window_pane_cp3

0x25ff,	// (0x00054bed) heading_pane_cp3

0x260b,	// (0x00054bf9) listscroll_popup_graphic_pane

0xd279,	// (0x0005f867) bg_popup_window_pane_cp4

0xb0e6,	// (0x0005d6d4) heading_pane_cp4

0x2671,	// (0x00054c5f) listscroll_popup_colour_pane

0xb0f0,	// (0x0005d6de) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb0f0,	// (0x0005d6de) cell_large_graphic_colour_none_popup_pane

0xb104,	// (0x0005d6f2) grid_large_graphic_colour_popup_pane_ParamLimits

0xb104,	// (0x0005d6f2) grid_large_graphic_colour_popup_pane

0xb130,	// (0x0005d71e) listscroll_popup_colour_pane_g1_ParamLimits

0xb130,	// (0x0005d71e) listscroll_popup_colour_pane_g1

0xb147,	// (0x0005d735) listscroll_popup_colour_pane_g2_ParamLimits

0xb147,	// (0x0005d735) listscroll_popup_colour_pane_g2

0xb15e,	// (0x0005d74c) listscroll_popup_colour_pane_g3_ParamLimits

0xb15e,	// (0x0005d74c) listscroll_popup_colour_pane_g3

0xb16e,	// (0x0005d75c) listscroll_popup_colour_pane_g4_ParamLimits

0xb16e,	// (0x0005d75c) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00061b9e) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00061b9e) listscroll_popup_colour_pane_g

0x270b,	// (0x00054cf9) scroll_pane_cp6_ParamLimits

0x270b,	// (0x00054cf9) scroll_pane_cp6

0xb182,	// (0x0005d770) cell_large_graphic_colour_popup_pane_ParamLimits

0xb182,	// (0x0005d770) cell_large_graphic_colour_popup_pane

0x2742,	// (0x00054d30) cell_large_graphic_colour_none_popup_pane_t1

0xd279,	// (0x0005f867) grid_highlight_pane_cp5

0x2751,	// (0x00054d3f) cell_large_graphic_colour_popup_pane_g1

0x2759,	// (0x00054d47) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x00061ba7) cell_large_graphic_colour_popup_pane_g

0x2761,	// (0x00054d4f) cell_large_graphic_colour_popup_pane_g2_copy1

0x276a,	// (0x00054d58) grid_highlight_pane_cp4

0x2772,	// (0x00054d60) bg_popup_window_pane_cp8_ParamLimits

0x2772,	// (0x00054d60) bg_popup_window_pane_cp8

0x278d,	// (0x00054d7b) popup_snote_single_text_window_g1_ParamLimits

0x278d,	// (0x00054d7b) popup_snote_single_text_window_g1

0x279f,	// (0x00054d8d) popup_snote_single_text_window_t1_ParamLimits

0x279f,	// (0x00054d8d) popup_snote_single_text_window_t1

0x27b2,	// (0x00054da0) popup_snote_single_text_window_t2_ParamLimits

0x27b2,	// (0x00054da0) popup_snote_single_text_window_t2

0x27c5,	// (0x00054db3) popup_snote_single_text_window_t3_ParamLimits

0x27c5,	// (0x00054db3) popup_snote_single_text_window_t3

0x27fe,	// (0x00054dec) popup_snote_single_text_window_t4_ParamLimits

0x27fe,	// (0x00054dec) popup_snote_single_text_window_t4

0x2832,	// (0x00054e20) popup_snote_single_text_window_t5_ParamLimits

0x2832,	// (0x00054e20) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x00061bac) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x00061bac) popup_snote_single_text_window_t

0x2861,	// (0x00054e4f) bg_popup_window_pane_cp9_ParamLimits

0x2861,	// (0x00054e4f) bg_popup_window_pane_cp9

0x278d,	// (0x00054d7b) popup_snote_single_graphic_window_g1_ParamLimits

0x278d,	// (0x00054d7b) popup_snote_single_graphic_window_g1

0x286f,	// (0x00054e5d) popup_snote_single_graphic_window_g2_ParamLimits

0x286f,	// (0x00054e5d) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x00061bb7) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x00061bb7) popup_snote_single_graphic_window_g

0x287b,	// (0x00054e69) popup_snote_single_graphic_window_t1_ParamLimits

0x287b,	// (0x00054e69) popup_snote_single_graphic_window_t1

0x288e,	// (0x00054e7c) popup_snote_single_graphic_window_t2_ParamLimits

0x288e,	// (0x00054e7c) popup_snote_single_graphic_window_t2

0x28a1,	// (0x00054e8f) popup_snote_single_graphic_window_t3_ParamLimits

0x28a1,	// (0x00054e8f) popup_snote_single_graphic_window_t3

0x28da,	// (0x00054ec8) popup_snote_single_graphic_window_t4_ParamLimits

0x28da,	// (0x00054ec8) popup_snote_single_graphic_window_t4

0x290e,	// (0x00054efc) popup_snote_single_graphic_window_t5_ParamLimits

0x290e,	// (0x00054efc) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00061bbc) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00061bbc) popup_snote_single_graphic_window_t

0x5f55,	// (0x00058543) grid_graphic_popup_pane_ParamLimits

0x5f55,	// (0x00058543) grid_graphic_popup_pane

0x5f83,	// (0x00058571) listscroll_popup_graphic_pane_g1_ParamLimits

0x5f83,	// (0x00058571) listscroll_popup_graphic_pane_g1

0xd753,	// (0x0005fd41) listscroll_popup_graphic_pane_g2_ParamLimits

0xd753,	// (0x0005fd41) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x00061faf) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x00061faf) listscroll_popup_graphic_pane_g

0x5fab,	// (0x00058599) scroll_pane_cp5

0xd713,	// (0x0005fd01) cell_graphic_popup_pane_ParamLimits

0xd713,	// (0x0005fd01) cell_graphic_popup_pane

0x5ede,	// (0x000584cc) cell_graphic_popup_pane_g1

0x5ee6,	// (0x000584d4) cell_graphic_popup_pane_g2

0x2761,	// (0x00054d4f) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x00061fa8) cell_graphic_popup_pane_g

0x5eef,	// (0x000584dd) cell_graphic_popup_pane_t2

0x276a,	// (0x00054d58) grid_highlight_pane_cp3

0x294f,	// (0x00054f3d) list_gen_pane_ParamLimits

0x294f,	// (0x00054f3d) list_gen_pane

0x2981,	// (0x00054f6f) scroll_pane

0xd6ce,	// (0x0005fcbc) bg_list_pane_g1_ParamLimits

0xd6ce,	// (0x0005fcbc) bg_list_pane_g1

0x5e5b,	// (0x00058449) bg_list_pane_g2_ParamLimits

0x5e5b,	// (0x00058449) bg_list_pane_g2

0x5e6e,	// (0x0005845c) bg_list_pane_g3_ParamLimits

0x5e6e,	// (0x0005845c) bg_list_pane_g3

0x5e80,	// (0x0005846e) bg_list_pane_g4_ParamLimits

0x5e80,	// (0x0005846e) bg_list_pane_g4

0xd6e9,	// (0x0005fcd7) bg_list_pane_g5_ParamLimits

0xd6e9,	// (0x0005fcd7) bg_list_pane_g5

0x0004,

0xf9af,	// (0x00061f9d) bg_list_pane_g_ParamLimits

0xf9af,	// (0x00061f9d) bg_list_pane_g

0xd691,	// (0x0005fc7f) list_double2_graphic_large_graphic_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double2_graphic_large_graphic_pane

0xd691,	// (0x0005fc7f) list_double2_graphic_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double2_graphic_pane

0xd691,	// (0x0005fc7f) list_double2_large_graphic_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double2_large_graphic_pane

0xd691,	// (0x0005fc7f) list_double2_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double2_pane

0xd691,	// (0x0005fc7f) list_double_graphic_heading_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_graphic_heading_pane

0xd691,	// (0x0005fc7f) list_double_graphic_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_graphic_pane

0xd691,	// (0x0005fc7f) list_double_heading_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_heading_pane

0xd691,	// (0x0005fc7f) list_double_large_graphic_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_large_graphic_pane

0xd691,	// (0x0005fc7f) list_double_number_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_number_pane

0xd691,	// (0x0005fc7f) list_double_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_pane

0xd691,	// (0x0005fc7f) list_double_time_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_double_time_pane

0xd691,	// (0x0005fc7f) list_setting_number_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_setting_number_pane

0xd691,	// (0x0005fc7f) list_setting_pane_ParamLimits

0xd691,	// (0x0005fc7f) list_setting_pane

0xd6a5,	// (0x0005fc93) list_single_2graphic_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_2graphic_pane

0xd6a5,	// (0x0005fc93) list_single_graphic_heading_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_graphic_heading_pane

0xd6a5,	// (0x0005fc93) list_single_graphic_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_graphic_pane

0xd6a5,	// (0x0005fc93) list_single_heading_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_heading_pane

0xd6a5,	// (0x0005fc93) list_single_large_graphic_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_large_graphic_pane

0xd6a5,	// (0x0005fc93) list_single_number_heading_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_number_heading_pane

0xd6a5,	// (0x0005fc93) list_single_number_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_number_pane

0xd6a5,	// (0x0005fc93) list_single_pane_ParamLimits

0xd6a5,	// (0x0005fc93) list_single_pane

0xd279,	// (0x0005f867) list_highlight_pane_cp1

0x3882,	// (0x00055e70) list_single_pane_g1_ParamLimits

0x3882,	// (0x00055e70) list_single_pane_g1

0x2e28,	// (0x00055416) list_single_pane_g2_ParamLimits

0x2e28,	// (0x00055416) list_single_pane_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_single_pane_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_single_pane_g

0x0f49,	// (0x00053537) list_single_pane_t1_ParamLimits

0x0f49,	// (0x00053537) list_single_pane_t1

0x3882,	// (0x00055e70) list_single_number_pane_g1_ParamLimits

0x3882,	// (0x00055e70) list_single_number_pane_g1

0x2e28,	// (0x00055416) list_single_number_pane_g2_ParamLimits

0x2e28,	// (0x00055416) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_single_number_pane_g

0x0a02,	// (0x00052ff0) list_single_number_pane_t1_ParamLimits

0x0a02,	// (0x00052ff0) list_single_number_pane_t1

0xbcd3,	// (0x0005e2c1) list_single_number_pane_t2_ParamLimits

0xbcd3,	// (0x0005e2c1) list_single_number_pane_t2

0x0001,

0xf970,	// (0x00061f5e) list_single_number_pane_t_ParamLimits

0xf970,	// (0x00061f5e) list_single_number_pane_t

0xb1ad,	// (0x0005d79b) list_single_graphic_pane_g1_ParamLimits

0xb1ad,	// (0x0005d79b) list_single_graphic_pane_g1

0x3882,	// (0x00055e70) list_single_graphic_pane_g2_ParamLimits

0x3882,	// (0x00055e70) list_single_graphic_pane_g2

0x2e28,	// (0x00055416) list_single_graphic_pane_g3_ParamLimits

0x2e28,	// (0x00055416) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x00061bc7) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x00061bc7) list_single_graphic_pane_g

0xb1b9,	// (0x0005d7a7) list_single_graphic_pane_t1_ParamLimits

0xb1b9,	// (0x0005d7a7) list_single_graphic_pane_t1

0xb1cf,	// (0x0005d7bd) list_single_heading_pane_g1_ParamLimits

0xb1cf,	// (0x0005d7bd) list_single_heading_pane_g1

0x2e28,	// (0x00055416) list_single_heading_pane_g2_ParamLimits

0x2e28,	// (0x00055416) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00061bce) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00061bce) list_single_heading_pane_g

0xb1e2,	// (0x0005d7d0) list_single_heading_pane_t1_ParamLimits

0xb1e2,	// (0x0005d7d0) list_single_heading_pane_t1

0xb1f8,	// (0x0005d7e6) list_single_heading_pane_t2_ParamLimits

0xb1f8,	// (0x0005d7e6) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x00061bd3) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x00061bd3) list_single_heading_pane_t

0x3882,	// (0x00055e70) list_single_number_heading_pane_g1_ParamLimits

0x3882,	// (0x00055e70) list_single_number_heading_pane_g1

0x2e28,	// (0x00055416) list_single_number_heading_pane_g2_ParamLimits

0x2e28,	// (0x00055416) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_single_number_heading_pane_g

0x0f5f,	// (0x0005354d) list_single_number_heading_pane_t1_ParamLimits

0x0f5f,	// (0x0005354d) list_single_number_heading_pane_t1

0xb20a,	// (0x0005d7f8) list_single_number_heading_pane_t2_ParamLimits

0xb20a,	// (0x0005d7f8) list_single_number_heading_pane_t2

0x0f25,	// (0x00053513) list_single_number_heading_pane_t3_ParamLimits

0x0f25,	// (0x00053513) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x00061bdd) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x00061bdd) list_single_number_heading_pane_t

0xb21c,	// (0x0005d80a) list_single_graphic_heading_pane_g1_ParamLimits

0xb21c,	// (0x0005d80a) list_single_graphic_heading_pane_g1

0xb234,	// (0x0005d822) list_single_graphic_heading_pane_g4_ParamLimits

0xb234,	// (0x0005d822) list_single_graphic_heading_pane_g4

0x2e28,	// (0x00055416) list_single_graphic_heading_pane_g5_ParamLimits

0x2e28,	// (0x00055416) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x00061be4) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x00061be4) list_single_graphic_heading_pane_g

0x0f5f,	// (0x0005354d) list_single_graphic_heading_pane_t1_ParamLimits

0x0f5f,	// (0x0005354d) list_single_graphic_heading_pane_t1

0xb245,	// (0x0005d833) list_single_graphic_heading_pane_t2_ParamLimits

0xb245,	// (0x0005d833) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x00061beb) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x00061beb) list_single_graphic_heading_pane_t

0x2e78,	// (0x00055466) list_single_large_graphic_pane_g1_ParamLimits

0x2e78,	// (0x00055466) list_single_large_graphic_pane_g1

0x3882,	// (0x00055e70) list_single_large_graphic_pane_g2_ParamLimits

0x3882,	// (0x00055e70) list_single_large_graphic_pane_g2

0x2e28,	// (0x00055416) list_single_large_graphic_pane_g3_ParamLimits

0x2e28,	// (0x00055416) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x00061bf0) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x00061bf0) list_single_large_graphic_pane_g

0x4dd3,	// (0x000573c1) wait_border_pane_g2_copy1

0xb25d,	// (0x0005d84b) list_single_large_graphic_pane_g4_cp2

0x0f5f,	// (0x0005354d) list_single_large_graphic_pane_t1_ParamLimits

0x0f5f,	// (0x0005354d) list_single_large_graphic_pane_t1

0x2ad4,	// (0x000550c2) list_double_pane_g1_ParamLimits

0x2ad4,	// (0x000550c2) list_double_pane_g1

0xb265,	// (0x0005d853) list_double_pane_g2_ParamLimits

0xb265,	// (0x0005d853) list_double_pane_g2

0x0001,

0xf609,	// (0x00061bf7) list_double_pane_g_ParamLimits

0xf609,	// (0x00061bf7) list_double_pane_g

0xb271,	// (0x0005d85f) list_double_pane_t1_ParamLimits

0xb271,	// (0x0005d85f) list_double_pane_t1

0xb287,	// (0x0005d875) list_double_pane_t2_ParamLimits

0xb287,	// (0x0005d875) list_double_pane_t2

0x0001,

0xf60e,	// (0x00061bfc) list_double_pane_t_ParamLimits

0xf60e,	// (0x00061bfc) list_double_pane_t

0xb299,	// (0x0005d887) list_double2_pane_g1_ParamLimits

0xb299,	// (0x0005d887) list_double2_pane_g1

0xb2aa,	// (0x0005d898) list_double2_pane_g2_ParamLimits

0xb2aa,	// (0x0005d898) list_double2_pane_g2

0x0001,

0xf613,	// (0x00061c01) list_double2_pane_g_ParamLimits

0xf613,	// (0x00061c01) list_double2_pane_g

0xb2b6,	// (0x0005d8a4) list_double2_pane_t1_ParamLimits

0xb2b6,	// (0x0005d8a4) list_double2_pane_t1

0xb2cc,	// (0x0005d8ba) list_double2_pane_t2_ParamLimits

0xb2cc,	// (0x0005d8ba) list_double2_pane_t2

0x0001,

0xf618,	// (0x00061c06) list_double2_pane_t_ParamLimits

0xf618,	// (0x00061c06) list_double2_pane_t

0x2ad4,	// (0x000550c2) list_double_number_pane_g1_ParamLimits

0x2ad4,	// (0x000550c2) list_double_number_pane_g1

0xb265,	// (0x0005d853) list_double_number_pane_g2_ParamLimits

0xb265,	// (0x0005d853) list_double_number_pane_g2

0x0001,

0xf609,	// (0x00061bf7) list_double_number_pane_g_ParamLimits

0xf609,	// (0x00061bf7) list_double_number_pane_g

0xb2de,	// (0x0005d8cc) list_double_number_pane_t1_ParamLimits

0xb2de,	// (0x0005d8cc) list_double_number_pane_t1

0xb2f0,	// (0x0005d8de) list_double_number_pane_t2_ParamLimits

0xb2f0,	// (0x0005d8de) list_double_number_pane_t2

0xb306,	// (0x0005d8f4) list_double_number_pane_t3_ParamLimits

0xb306,	// (0x0005d8f4) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x00061c0b) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x00061c0b) list_double_number_pane_t

0xb318,	// (0x0005d906) list_double_graphic_pane_g1_ParamLimits

0xb318,	// (0x0005d906) list_double_graphic_pane_g1

0xb324,	// (0x0005d912) list_double_graphic_pane_g2_ParamLimits

0xb324,	// (0x0005d912) list_double_graphic_pane_g2

0xb333,	// (0x0005d921) list_double_graphic_pane_g3_ParamLimits

0xb333,	// (0x0005d921) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x00061c12) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x00061c12) list_double_graphic_pane_g

0xb34b,	// (0x0005d939) list_double_graphic_pane_t1_ParamLimits

0xb34b,	// (0x0005d939) list_double_graphic_pane_t1

0xb361,	// (0x0005d94f) list_double_graphic_pane_t2_ParamLimits

0xb361,	// (0x0005d94f) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x00061c1b) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x00061c1b) list_double_graphic_pane_t

0xb373,	// (0x0005d961) list_double2_graphic_pane_g1_ParamLimits

0xb373,	// (0x0005d961) list_double2_graphic_pane_g1

0xb37f,	// (0x0005d96d) list_double2_graphic_pane_g2_ParamLimits

0xb37f,	// (0x0005d96d) list_double2_graphic_pane_g2

0xb38b,	// (0x0005d979) list_double2_graphic_pane_g3_ParamLimits

0xb38b,	// (0x0005d979) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x00061c20) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x00061c20) list_double2_graphic_pane_g

0xb397,	// (0x0005d985) list_double2_graphic_pane_t1_ParamLimits

0xb397,	// (0x0005d985) list_double2_graphic_pane_t1

0xb3ad,	// (0x0005d99b) list_double2_graphic_pane_t2_ParamLimits

0xb3ad,	// (0x0005d99b) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x00061c27) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x00061c27) list_double2_graphic_pane_t

0xb3bf,	// (0x0005d9ad) list_double_large_graphic_pane_g1_ParamLimits

0xb3bf,	// (0x0005d9ad) list_double_large_graphic_pane_g1

0xb3ea,	// (0x0005d9d8) list_double_large_graphic_pane_g2_ParamLimits

0xb3ea,	// (0x0005d9d8) list_double_large_graphic_pane_g2

0xb265,	// (0x0005d853) list_double_large_graphic_pane_g3_ParamLimits

0xb265,	// (0x0005d853) list_double_large_graphic_pane_g3

0xb400,	// (0x0005d9ee) list_double_large_graphic_pane_g4_ParamLimits

0xb400,	// (0x0005d9ee) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x00061c2c) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x00061c2c) list_double_large_graphic_pane_g

0xb413,	// (0x0005da01) list_double_large_graphic_pane_t1_ParamLimits

0xb413,	// (0x0005da01) list_double_large_graphic_pane_t1

0xb42c,	// (0x0005da1a) list_double_large_graphic_pane_t2_ParamLimits

0xb42c,	// (0x0005da1a) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x00061c37) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x00061c37) list_double_large_graphic_pane_t

0xb43e,	// (0x0005da2c) list_double2_large_graphic_pane_g1_ParamLimits

0xb43e,	// (0x0005da2c) list_double2_large_graphic_pane_g1

0xb44a,	// (0x0005da38) list_double2_large_graphic_pane_g2_ParamLimits

0xb44a,	// (0x0005da38) list_double2_large_graphic_pane_g2

0xb38b,	// (0x0005d979) list_double2_large_graphic_pane_g3_ParamLimits

0xb38b,	// (0x0005d979) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x00061c3c) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x00061c3c) list_double2_large_graphic_pane_g

0xb45b,	// (0x0005da49) list_double2_large_graphic_pane_t1_ParamLimits

0xb45b,	// (0x0005da49) list_double2_large_graphic_pane_t1

0xb471,	// (0x0005da5f) list_double2_large_graphic_pane_t2_ParamLimits

0xb471,	// (0x0005da5f) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x00061c43) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x00061c43) list_double2_large_graphic_pane_t

0xb483,	// (0x0005da71) list_double_heading_pane_g1_ParamLimits

0xb483,	// (0x0005da71) list_double_heading_pane_g1

0xb494,	// (0x0005da82) list_double_heading_pane_g2_ParamLimits

0xb494,	// (0x0005da82) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x00061c48) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x00061c48) list_double_heading_pane_g

0xb4a0,	// (0x0005da8e) list_double_heading_pane_t1_ParamLimits

0xb4a0,	// (0x0005da8e) list_double_heading_pane_t1

0xb2cc,	// (0x0005d8ba) list_double_heading_pane_t2_ParamLimits

0xb2cc,	// (0x0005d8ba) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x00061c4d) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x00061c4d) list_double_heading_pane_t

0xb4b6,	// (0x0005daa4) list_double_graphic_heading_pane_g1_ParamLimits

0xb4b6,	// (0x0005daa4) list_double_graphic_heading_pane_g1

0xb483,	// (0x0005da71) list_double_graphic_heading_pane_g2_ParamLimits

0xb483,	// (0x0005da71) list_double_graphic_heading_pane_g2

0xb494,	// (0x0005da82) list_double_graphic_heading_pane_g3_ParamLimits

0xb494,	// (0x0005da82) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x00061c52) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x00061c52) list_double_graphic_heading_pane_g

0xb4c2,	// (0x0005dab0) list_double_graphic_heading_pane_t1_ParamLimits

0xb4c2,	// (0x0005dab0) list_double_graphic_heading_pane_t1

0xb3ad,	// (0x0005d99b) list_double_graphic_heading_pane_t2_ParamLimits

0xb3ad,	// (0x0005d99b) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x00061c59) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x00061c59) list_double_graphic_heading_pane_t

0xb4d8,	// (0x0005dac6) list_double_time_pane_g1_ParamLimits

0xb4d8,	// (0x0005dac6) list_double_time_pane_g1

0xb4e9,	// (0x0005dad7) list_double_time_pane_g2_ParamLimits

0xb4e9,	// (0x0005dad7) list_double_time_pane_g2

0x0001,

0xf670,	// (0x00061c5e) list_double_time_pane_g_ParamLimits

0xf670,	// (0x00061c5e) list_double_time_pane_g

0xb4f5,	// (0x0005dae3) list_double_time_pane_t1_ParamLimits

0xb4f5,	// (0x0005dae3) list_double_time_pane_t1

0xb50b,	// (0x0005daf9) list_double_time_pane_t2_ParamLimits

0xb50b,	// (0x0005daf9) list_double_time_pane_t2

0xb51d,	// (0x0005db0b) list_double_time_pane_t3_ParamLimits

0xb51d,	// (0x0005db0b) list_double_time_pane_t3

0xb52f,	// (0x0005db1d) list_double_time_pane_t4_ParamLimits

0xb52f,	// (0x0005db1d) list_double_time_pane_t4

0x0003,

0xf675,	// (0x00061c63) list_double_time_pane_t_ParamLimits

0xf675,	// (0x00061c63) list_double_time_pane_t

0xb541,	// (0x0005db2f) list_setting_pane_g1_ParamLimits

0xb541,	// (0x0005db2f) list_setting_pane_g1

0xb2aa,	// (0x0005d898) list_setting_pane_g2_ParamLimits

0xb2aa,	// (0x0005d898) list_setting_pane_g2

0x0001,

0xf67e,	// (0x00061c6c) list_setting_pane_g_ParamLimits

0xf67e,	// (0x00061c6c) list_setting_pane_g

0xb54d,	// (0x0005db3b) list_setting_pane_t1_ParamLimits

0xb54d,	// (0x0005db3b) list_setting_pane_t1

0xb567,	// (0x0005db55) list_setting_pane_t2_ParamLimits

0xb567,	// (0x0005db55) list_setting_pane_t2

0x0002,

0xf683,	// (0x00061c71) list_setting_pane_t_ParamLimits

0xf683,	// (0x00061c71) list_setting_pane_t

0xb5a6,	// (0x0005db94) set_value_pane_cp_ParamLimits

0xb5a6,	// (0x0005db94) set_value_pane_cp

0xb5b4,	// (0x0005dba2) list_setting_number_pane_g1_ParamLimits

0xb5b4,	// (0x0005dba2) list_setting_number_pane_g1

0xb5c0,	// (0x0005dbae) list_setting_number_pane_g2_ParamLimits

0xb5c0,	// (0x0005dbae) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x00061c78) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x00061c78) list_setting_number_pane_g

0xb5cc,	// (0x0005dbba) list_setting_number_pane_t1_ParamLimits

0xb5cc,	// (0x0005dbba) list_setting_number_pane_t1

0xb5e5,	// (0x0005dbd3) list_setting_number_pane_t2_ParamLimits

0xb5e5,	// (0x0005dbd3) list_setting_number_pane_t2

0xb5ff,	// (0x0005dbed) list_setting_number_pane_t3_ParamLimits

0xb5ff,	// (0x0005dbed) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x00061c7d) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x00061c7d) list_setting_number_pane_t

0xb5a6,	// (0x0005db94) set_value_pane_ParamLimits

0xb5a6,	// (0x0005db94) set_value_pane

0x2a61,	// (0x0005504f) bg_set_opt_pane_ParamLimits

0x2a61,	// (0x0005504f) bg_set_opt_pane

0x0114,	// (0x00052702) set_value_pane_t1

0x2a82,	// (0x00055070) slider_set_pane_cp3

0x2a8b,	// (0x00055079) volume_small_pane_cp

0x2a94,	// (0x00055082) list_form_gen_pane

0x2a9d,	// (0x0005508b) scroll_pane_cp8

0xb642,	// (0x0005dc30) form_field_data_pane_ParamLimits

0xb642,	// (0x0005dc30) form_field_data_pane

0xb65f,	// (0x0005dc4d) form_field_data_wide_pane_ParamLimits

0xb65f,	// (0x0005dc4d) form_field_data_wide_pane

0xb683,	// (0x0005dc71) form_field_popup_pane_ParamLimits

0xb683,	// (0x0005dc71) form_field_popup_pane

0x019b,	// (0x00052789) form_field_popup_wide_pane_ParamLimits

0x019b,	// (0x00052789) form_field_popup_wide_pane

0x01bc,	// (0x000527aa) form_field_slider_pane_ParamLimits

0x01bc,	// (0x000527aa) form_field_slider_pane

0x01cf,	// (0x000527bd) form_field_slider_wide_pane_ParamLimits

0x01cf,	// (0x000527bd) form_field_slider_wide_pane

0x2aae,	// (0x0005509c) data_form_pane

0xb6af,	// (0x0005dc9d) form_field_data_pane_t1

0x2aba,	// (0x000550a8) input_focus_pane

0x2ac8,	// (0x000550b6) data_form_wide_pane

0x0212,	// (0x00052800) form_field_data_wide_pane_t1

0x277f,	// (0x00054d6d) input_focus_pane_cp6

0xb6c9,	// (0x0005dcb7) form_field_popup_pane_t1

0x2aba,	// (0x000550a8) input_focus_pane_cp7

0x2af4,	// (0x000550e2) list_form_pane

0x0256,	// (0x00052844) form_field_popup_wide_pane_t1

0x2aba,	// (0x000550a8) input_focus_pane_cp8

0x2b00,	// (0x000550ee) list_form_wide_pane

0xb6eb,	// (0x0005dcd9) form_field_slider_pane_t1_ParamLimits

0xb6eb,	// (0x0005dcd9) form_field_slider_pane_t1

0xb703,	// (0x0005dcf1) form_field_slider_pane_t2_ParamLimits

0xb703,	// (0x0005dcf1) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x00061c8d) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x00061c8d) form_field_slider_pane_t

0x2403,	// (0x000549f1) input_focus_pane_cp9_ParamLimits

0x2403,	// (0x000549f1) input_focus_pane_cp9

0xb718,	// (0x0005dd06) slider_cont_pane_ParamLimits

0xb718,	// (0x0005dd06) slider_cont_pane

0x2b0f,	// (0x000550fd) form_field_slider_wide_pane_t1_ParamLimits

0x2b0f,	// (0x000550fd) form_field_slider_wide_pane_t1

0x02b4,	// (0x000528a2) form_field_slider_wide_pane_t2_ParamLimits

0x02b4,	// (0x000528a2) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x00061c92) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x00061c92) form_field_slider_wide_pane_t

0x2403,	// (0x000549f1) input_focus_pane_cp10_ParamLimits

0x2403,	// (0x000549f1) input_focus_pane_cp10

0xb72c,	// (0x0005dd1a) slider_cont_pane_cp1_ParamLimits

0xb72c,	// (0x0005dd1a) slider_cont_pane_cp1

0xb740,	// (0x0005dd2e) slider_form_pane_cp

0x2b21,	// (0x0005510f) input_focus_pane_g1

0x2b29,	// (0x00055117) input_focus_pane_g2

0x2b31,	// (0x0005511f) input_focus_pane_g3

0x2b39,	// (0x00055127) input_focus_pane_g4

0x2b41,	// (0x0005512f) input_focus_pane_g5

0x2b49,	// (0x00055137) input_focus_pane_g6

0x2b51,	// (0x0005513f) input_focus_pane_g7

0x2b59,	// (0x00055147) input_focus_pane_g8

0x2b61,	// (0x0005514f) input_focus_pane_g9

0xd26f,	// (0x0005f85d) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x00061c97) input_focus_pane_g

0x4ddc,	// (0x000573ca) wait_border_pane_g3_copy1

0xb748,	// (0x0005dd36) data_form_pane_t1

0xd26f,	// (0x0005f85d) wait_anim_pane_g1_copy1

0xbce5,	// (0x0005e2d3) data_form_wide_pane_t1

0x0301,	// (0x000528ef) list_form_graphic_pane_cp_ParamLimits

0x0301,	// (0x000528ef) list_form_graphic_pane_cp

0x5d61,	// (0x0005834f) slider_form_pane_g1

0x5d6a,	// (0x00058358) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x00061f8e) slider_form_pane_g

0xb764,	// (0x0005dd52) list_form_graphic_pane_ParamLimits

0xb764,	// (0x0005dd52) list_form_graphic_pane

0x0313,	// (0x00052901) list_form_graphic_pane_g1

0x031b,	// (0x00052909) list_form_graphic_pane_t1_ParamLimits

0x031b,	// (0x00052909) list_form_graphic_pane_t1

0x2187,	// (0x00054775) list_highlight_pane_cp5_ParamLimits

0x2187,	// (0x00054775) list_highlight_pane_cp5

0xb775,	// (0x0005dd63) find_pane_g1

0x2b72,	// (0x00055160) input_find_pane

0xb77e,	// (0x0005dd6c) input_find_pane_g1_ParamLimits

0xb77e,	// (0x0005dd6c) input_find_pane_g1

0xb78a,	// (0x0005dd78) input_find_pane_t1_ParamLimits

0xb78a,	// (0x0005dd78) input_find_pane_t1

0xb79f,	// (0x0005dd8d) input_find_pane_t2_ParamLimits

0xb79f,	// (0x0005dd8d) input_find_pane_t2

0x0001,

0xf6be,	// (0x00061cac) input_find_pane_t_ParamLimits

0xf6be,	// (0x00061cac) input_find_pane_t

0x2b7b,	// (0x00055169) input_focus_pane_cp5_ParamLimits

0x2b7b,	// (0x00055169) input_focus_pane_cp5

0xb7c0,	// (0x0005ddae) bg_popup_window_pane_cp2_ParamLimits

0xb7c0,	// (0x0005ddae) bg_popup_window_pane_cp2

0xb7cd,	// (0x0005ddbb) listscroll_menu_pane_ParamLimits

0xb7cd,	// (0x0005ddbb) listscroll_menu_pane

0xb7d9,	// (0x0005ddc7) popup_submenu_window_ParamLimits

0xb7d9,	// (0x0005ddc7) popup_submenu_window

0x2bde,	// (0x000551cc) find_popup_pane_g1

0x2be6,	// (0x000551d4) input_popup_find_pane_cp

0x2b7b,	// (0x00055169) input_focus_pane_cp4_ParamLimits

0x2b7b,	// (0x00055169) input_focus_pane_cp4

0x2bfe,	// (0x000551ec) input_popup_find_pane_t1_ParamLimits

0x2bfe,	// (0x000551ec) input_popup_find_pane_t1

0xd279,	// (0x0005f867) bg_popup_sub_pane_cp

0x2c2c,	// (0x0005521a) listscroll_popup_sub_pane

0x2c34,	// (0x00055222) list_submenu_pane_ParamLimits

0x2c34,	// (0x00055222) list_submenu_pane

0x2c45,	// (0x00055233) scroll_pane_cp4

0x2c4d,	// (0x0005523b) list_single_popup_submenu_pane_ParamLimits

0x2c4d,	// (0x0005523b) list_single_popup_submenu_pane

0x2c62,	// (0x00055250) list_single_popup_submenu_pane_g1

0x2c6a,	// (0x00055258) list_single_popup_submenu_pane_t1_ParamLimits

0x2c6a,	// (0x00055258) list_single_popup_submenu_pane_t1

0x2403,	// (0x000549f1) bg_active_tab_pane_cp1_ParamLimits

0x2403,	// (0x000549f1) bg_active_tab_pane_cp1

0xb817,	// (0x0005de05) tabs_2_active_pane_g1

0xb81f,	// (0x0005de0d) tabs_2_active_pane_t1

0x2403,	// (0x000549f1) bg_passive_tab_pane_cp1_ParamLimits

0x2403,	// (0x000549f1) bg_passive_tab_pane_cp1

0xb817,	// (0x0005de05) tabs_2_passive_pane_g1

0xb81f,	// (0x0005de0d) tabs_2_passive_pane_t1

0x2187,	// (0x00054775) bg_active_tab_pane_cp4

0xb831,	// (0x0005de1f) tabs_2_long_active_pane_t1

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp4

0x0a45,	// (0x00053033) list_single_midp_graphic_pane_g4_ParamLimits

0x2187,	// (0x00054775) bg_active_tab_pane_cp5

0xb844,	// (0x0005de32) tabs_3_long_active_pane_t1

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp5

0x0a45,	// (0x00053033) list_single_midp_graphic_pane_g4

0x2187,	// (0x00054775) bg_popup_window_pane_cp13_ParamLimits

0x2187,	// (0x00054775) bg_popup_window_pane_cp13

0x2ce1,	// (0x000552cf) listscroll_popup_fast_pane_ParamLimits

0x2ce1,	// (0x000552cf) listscroll_popup_fast_pane

0x2cf0,	// (0x000552de) grid_popup_fast_pane_ParamLimits

0x2cf0,	// (0x000552de) grid_popup_fast_pane

0x2d02,	// (0x000552f0) scroll_pane_cp9_ParamLimits

0x2d02,	// (0x000552f0) scroll_pane_cp9

0x7600,	// (0x00059bee) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7600,	// (0x00059bee) list_single_graphic_hl_pane_t1_cp2

0x2d26,	// (0x00055314) input_focus_pane_cp20_ParamLimits

0x2d26,	// (0x00055314) input_focus_pane_cp20

0x2d34,	// (0x00055322) query_popup_data_pane_t1_ParamLimits

0x2d34,	// (0x00055322) query_popup_data_pane_t1

0x2d47,	// (0x00055335) query_popup_data_pane_t2_ParamLimits

0x2d47,	// (0x00055335) query_popup_data_pane_t2

0x2d8d,	// (0x0005537b) query_popup_data_pane_t3_ParamLimits

0x2d8d,	// (0x0005537b) query_popup_data_pane_t3

0x2dce,	// (0x000553bc) query_popup_data_pane_t4_ParamLimits

0x2dce,	// (0x000553bc) query_popup_data_pane_t4

0x2fcf,	// (0x000555bd) query_popup_data_pane_t5_ParamLimits

0x2fcf,	// (0x000555bd) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x00061cb1) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x00061cb1) query_popup_data_pane_t

0x2b21,	// (0x0005510f) bg_set_opt_pane_g1

0x2b29,	// (0x00055117) bg_set_opt_pane_g2

0x2b31,	// (0x0005511f) bg_set_opt_pane_g3

0x2b39,	// (0x00055127) bg_set_opt_pane_g4

0x2b41,	// (0x0005512f) bg_set_opt_pane_g5

0x2b49,	// (0x00055137) bg_set_opt_pane_g6

0x2b51,	// (0x0005513f) bg_set_opt_pane_g7

0x2b59,	// (0x00055147) bg_set_opt_pane_g8

0x2b61,	// (0x0005514f) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x00061cbc) bg_set_opt_pane_g

0x0677,	// (0x00052c65) control_top_pane_stacon_ParamLimits

0x0677,	// (0x00052c65) control_top_pane_stacon

0x06ca,	// (0x00052cb8) signal_pane_stacon_ParamLimits

0x06ca,	// (0x00052cb8) signal_pane_stacon

0x35a6,	// (0x00055b94) stacon_top_pane_g1_ParamLimits

0x35a6,	// (0x00055b94) stacon_top_pane_g1

0x06ef,	// (0x00052cdd) title_pane_stacon_ParamLimits

0x06ef,	// (0x00052cdd) title_pane_stacon

0x0719,	// (0x00052d07) uni_indicator_pane_stacon_ParamLimits

0x0719,	// (0x00052d07) uni_indicator_pane_stacon

0x0731,	// (0x00052d1f) battery_pane_stacon_ParamLimits

0x0731,	// (0x00052d1f) battery_pane_stacon

0x0775,	// (0x00052d63) control_bottom_pane_stacon_ParamLimits

0x0775,	// (0x00052d63) control_bottom_pane_stacon

0x0798,	// (0x00052d86) navi_pane_stacon_ParamLimits

0x0798,	// (0x00052d86) navi_pane_stacon

0x35c8,	// (0x00055bb6) stacon_bottom_pane_g1_ParamLimits

0x35c8,	// (0x00055bb6) stacon_bottom_pane_g1

0x0366,	// (0x00052954) aid_levels_signal_lsc_ParamLimits

0x0366,	// (0x00052954) aid_levels_signal_lsc

0x037d,	// (0x0005296b) signal_pane_stacon_g1_ParamLimits

0x037d,	// (0x0005296b) signal_pane_stacon_g1

0x0391,	// (0x0005297f) signal_pane_stacon_g2_ParamLimits

0x0391,	// (0x0005297f) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x00061ccf) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00061ccf) signal_pane_stacon_g

0x03c6,	// (0x000529b4) title_pane_stacon_t1_ParamLimits

0x03c6,	// (0x000529b4) title_pane_stacon_t1

0x3013,	// (0x00055601) uni_indicator_pane_stacon_g1

0x301d,	// (0x0005560b) uni_indicator_pane_stacon_g2

0x3027,	// (0x00055615) uni_indicator_pane_stacon_g3

0x3031,	// (0x0005561f) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x00061cdb) uni_indicator_pane_stacon_g

0x03eb,	// (0x000529d9) control_top_pane_stacon_g1

0x03f3,	// (0x000529e1) control_top_pane_stacon_t1_ParamLimits

0x03f3,	// (0x000529e1) control_top_pane_stacon_t1

0x042a,	// (0x00052a18) aid_levels_battery_lsc_ParamLimits

0x042a,	// (0x00052a18) aid_levels_battery_lsc

0x0442,	// (0x00052a30) battery_pane_stacon_g1_ParamLimits

0x0442,	// (0x00052a30) battery_pane_stacon_g1

0x0455,	// (0x00052a43) battery_pane_stacon_g2_ParamLimits

0x0455,	// (0x00052a43) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x00061ce4) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x00061ce4) battery_pane_stacon_g

0x0493,	// (0x00052a81) navi_icon_pane_stacon

0x04a7,	// (0x00052a95) navi_navi_pane_stacon

0x0493,	// (0x00052a81) navi_text_pane_stacon

0x03eb,	// (0x000529d9) control_bottom_pane_stacon_g1

0x04bd,	// (0x00052aab) control_bottom_pane_stacon_t1_ParamLimits

0x04bd,	// (0x00052aab) control_bottom_pane_stacon_t1

0xb856,	// (0x0005de44) grid_app_pane_ParamLimits

0xb856,	// (0x0005de44) grid_app_pane

0xb88e,	// (0x0005de7c) scroll_pane_cp15_ParamLimits

0xb88e,	// (0x0005de7c) scroll_pane_cp15

0xb8a7,	// (0x0005de95) cell_app_pane_ParamLimits

0xb8a7,	// (0x0005de95) cell_app_pane

0xb8e8,	// (0x0005ded6) cell_app_pane_g1_ParamLimits

0xb8e8,	// (0x0005ded6) cell_app_pane_g1

0x30de,	// (0x000556cc) cell_app_pane_g2_ParamLimits

0x30de,	// (0x000556cc) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x00061ce9) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x00061ce9) cell_app_pane_g

0x30ea,	// (0x000556d8) cell_app_pane_t1_ParamLimits

0x30ea,	// (0x000556d8) cell_app_pane_t1

0x30fc,	// (0x000556ea) grid_highlight_pane_ParamLimits

0x30fc,	// (0x000556ea) grid_highlight_pane

0x2b21,	// (0x0005510f) cell_highlight_pane_g1

0x2b29,	// (0x00055117) cell_highlight_pane_g2

0x2b31,	// (0x0005511f) cell_highlight_pane_g3

0x2b39,	// (0x00055127) cell_highlight_pane_g4

0x2b41,	// (0x0005512f) cell_highlight_pane_g5

0x2b49,	// (0x00055137) cell_highlight_pane_g6

0x2b51,	// (0x0005513f) cell_highlight_pane_g7

0x2b59,	// (0x00055147) cell_highlight_pane_g8

0x2b61,	// (0x0005514f) cell_highlight_pane_g9

0xd26f,	// (0x0005f85d) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x00061c97) cell_highlight_pane_g

0x310d,	// (0x000556fb) bg_scroll_pane

0x0507,	// (0x00052af5) scroll_handle_pane

0x3154,	// (0x00055742) scroll_bg_pane_g1

0x3169,	// (0x00055757) scroll_bg_pane_g2

0x3181,	// (0x0005576f) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x00061cee) scroll_bg_pane_g

0x3196,	// (0x00055784) scroll_handle_focus_pane_ParamLimits

0x3196,	// (0x00055784) scroll_handle_focus_pane

0x3154,	// (0x00055742) scroll_handle_pane_g1

0x31a3,	// (0x00055791) scroll_handle_pane_g2

0x3181,	// (0x0005576f) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x00061cf5) scroll_handle_pane_g

0x2b7b,	// (0x00055169) bg_popup_sub_pane_cp21_ParamLimits

0x2b7b,	// (0x00055169) bg_popup_sub_pane_cp21

0x31b7,	// (0x000557a5) popup_fep_japan_predictive_window_t1_ParamLimits

0x31b7,	// (0x000557a5) popup_fep_japan_predictive_window_t1

0x31ce,	// (0x000557bc) popup_fep_japan_predictive_window_t2_ParamLimits

0x31ce,	// (0x000557bc) popup_fep_japan_predictive_window_t2

0x3201,	// (0x000557ef) popup_fep_japan_predictive_window_t3_ParamLimits

0x3201,	// (0x000557ef) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x00061cfc) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x00061cfc) popup_fep_japan_predictive_window_t

0xd279,	// (0x0005f867) bg_popup_sub_pane_cp23

0x3238,	// (0x00055826) listscroll_japin_cand_pane

0x3240,	// (0x0005582e) popup_fep_japan_candidate_window_t1

0x324e,	// (0x0005583c) candidate_pane_ParamLimits

0x324e,	// (0x0005583c) candidate_pane

0x3260,	// (0x0005584e) scroll_pane_cp30

0x326a,	// (0x00055858) list_single_popup_jap_candidate_pane_ParamLimits

0x326a,	// (0x00055858) list_single_popup_jap_candidate_pane

0xd279,	// (0x0005f867) list_highlight_pane_cp30

0x327e,	// (0x0005586c) list_single_popup_jap_candidate_pane_t1

0xc32e,	// (0x0005e91c) level_1_signal

0xc340,	// (0x0005e92e) level_2_signal

0xc353,	// (0x0005e941) level_3_signal

0xc366,	// (0x0005e954) level_4_signal

0xc379,	// (0x0005e967) level_5_signal

0xc38c,	// (0x0005e97a) level_6_signal

0xc39f,	// (0x0005e98d) level_7_signal

0xc32e,	// (0x0005e91c) level_1_battery

0xc340,	// (0x0005e92e) level_2_battery

0xc353,	// (0x0005e941) level_3_battery

0xc366,	// (0x0005e954) level_4_battery

0xc379,	// (0x0005e967) level_5_battery

0xc38c,	// (0x0005e97a) level_6_battery

0xc39f,	// (0x0005e98d) level_7_battery

0x3300,	// (0x000558ee) list_menu_pane_ParamLimits

0x3300,	// (0x000558ee) list_menu_pane

0x3316,	// (0x00055904) scroll_pane_cp25_ParamLimits

0x3316,	// (0x00055904) scroll_pane_cp25

0x332f,	// (0x0005591d) list_double2_graphic_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double2_graphic_pane_cp2

0x332f,	// (0x0005591d) list_double2_large_graphic_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double2_large_graphic_pane_cp2

0x332f,	// (0x0005591d) list_double2_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double2_pane_cp2

0x332f,	// (0x0005591d) list_double_graphic_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double_graphic_pane_cp2

0x332f,	// (0x0005591d) list_double_large_graphic_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double_large_graphic_pane_cp2

0x332f,	// (0x0005591d) list_double_number_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double_number_pane_cp2

0x332f,	// (0x0005591d) list_double_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_2graphic_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_2graphic_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_graphic_heading_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_graphic_heading_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_graphic_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_graphic_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_heading_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_heading_pane_cp2

0x3372,	// (0x00055960) list_single_large_graphic_pane_cp2_ParamLimits

0x3372,	// (0x00055960) list_single_large_graphic_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_number_heading_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_number_heading_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_number_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_number_pane_cp2

0xc3b2,	// (0x0005e9a0) list_single_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_pane_cp2

0x33ed,	// (0x000559db) bg_popup_sub_pane_cp22

0x05b9,	// (0x00052ba7) popup_side_volume_key_window_g1

0x05e3,	// (0x00052bd1) popup_side_volume_key_window_t1

0x0601,	// (0x00052bef) volume_small_pane_cp1

0x2403,	// (0x000549f1) bg_popup_sub_pane_cp24_ParamLimits

0x2403,	// (0x000549f1) bg_popup_sub_pane_cp24

0x3403,	// (0x000559f1) fep_china_uni_candidate_pane_ParamLimits

0x3403,	// (0x000559f1) fep_china_uni_candidate_pane

0x3417,	// (0x00055a05) fep_china_uni_entry_pane

0x3427,	// (0x00055a15) popup_fep_china_uni_window_g1

0x3443,	// (0x00055a31) fep_china_uni_entry_pane_g1

0x344d,	// (0x00055a3b) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00061d2d) fep_china_uni_entry_pane_g

0x3457,	// (0x00055a45) fep_entry_item_pane

0x3461,	// (0x00055a4f) fep_candidate_item_pane

0x3469,	// (0x00055a57) fep_china_uni_candidate_pane_g1

0x3473,	// (0x00055a61) fep_china_uni_candidate_pane_g2

0x347b,	// (0x00055a69) fep_china_uni_candidate_pane_g3

0x3483,	// (0x00055a71) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00061d32) fep_china_uni_candidate_pane_g

0xd26f,	// (0x0005f85d) fep_entry_item_pane_g1

0x348d,	// (0x00055a7b) fep_entry_item_pane_t1_ParamLimits

0x348d,	// (0x00055a7b) fep_entry_item_pane_t1

0x34a3,	// (0x00055a91) fep_candidate_item_pane_t1_ParamLimits

0x34a3,	// (0x00055a91) fep_candidate_item_pane_t1

0x34b8,	// (0x00055aa6) fep_candidate_item_pane_t2_ParamLimits

0x34b8,	// (0x00055aa6) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00061d3b) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00061d3b) fep_candidate_item_pane_t

0x2187,	// (0x00054775) list_highlight_pane_cp31_ParamLimits

0x2187,	// (0x00054775) list_highlight_pane_cp31

0x34ca,	// (0x00055ab8) level_1_signal_lsc

0x34d3,	// (0x00055ac1) level_2_signal_lsc

0x34dc,	// (0x00055aca) level_3_signal_lsc

0x34e5,	// (0x00055ad3) level_4_signal_lsc

0x34ee,	// (0x00055adc) level_5_signal_lsc

0x34f7,	// (0x00055ae5) level_6_signal_lsc

0x3500,	// (0x00055aee) level_7_signal_lsc

0x3500,	// (0x00055aee) level_1_battery_lsc

0x3509,	// (0x00055af7) level_2_battery_lsc

0x3512,	// (0x00055b00) level_3_battery_lsc

0x351b,	// (0x00055b09) level_4_battery_lsc

0x3524,	// (0x00055b12) level_5_battery_lsc

0x352d,	// (0x00055b1b) level_6_battery_lsc

0x34ca,	// (0x00055ab8) level_7_battery_lsc

0x3536,	// (0x00055b24) scroll_handle_focus_pane_g1

0x353f,	// (0x00055b2d) scroll_handle_focus_pane_g2

0x3548,	// (0x00055b36) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00061d40) scroll_handle_focus_pane_g

0xb915,	// (0x0005df03) list_single_2graphic_pane_g1_ParamLimits

0xb915,	// (0x0005df03) list_single_2graphic_pane_g1

0xb234,	// (0x0005d822) list_single_2graphic_pane_g2_ParamLimits

0xb234,	// (0x0005d822) list_single_2graphic_pane_g2

0x2e28,	// (0x00055416) list_single_2graphic_pane_g3_ParamLimits

0x2e28,	// (0x00055416) list_single_2graphic_pane_g3

0xc441,	// (0x0005ea2f) list_single_2graphic_pane_g4_ParamLimits

0xc441,	// (0x0005ea2f) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00061d47) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00061d47) list_single_2graphic_pane_g

0xb921,	// (0x0005df0f) list_single_2graphic_pane_t1_ParamLimits

0xb921,	// (0x0005df0f) list_single_2graphic_pane_t1

0xc452,	// (0x0005ea40) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc452,	// (0x0005ea40) list_double2_graphic_large_graphic_pane_g1

0xb44a,	// (0x0005da38) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb44a,	// (0x0005da38) list_double2_graphic_large_graphic_pane_g2

0xb38b,	// (0x0005d979) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb38b,	// (0x0005d979) list_double2_graphic_large_graphic_pane_g3

0xb94f,	// (0x0005df3d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb94f,	// (0x0005df3d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00061d50) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00061d50) list_double2_graphic_large_graphic_pane_g

0xb95b,	// (0x0005df49) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb95b,	// (0x0005df49) list_double2_graphic_large_graphic_pane_t1

0xb971,	// (0x0005df5f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb971,	// (0x0005df5f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00061d59) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00061d59) list_double2_graphic_large_graphic_pane_t

0x368a,	// (0x00055c78) popup_fast_swap_window_ParamLimits

0x368a,	// (0x00055c78) popup_fast_swap_window

0x36a8,	// (0x00055c96) popup_side_volume_key_window

0x36c6,	// (0x00055cb4) stacon_top_pane

0x36d0,	// (0x00055cbe) status_pane_ParamLimits

0x36d0,	// (0x00055cbe) status_pane

0x36c6,	// (0x00055cb4) status_small_pane

0xd279,	// (0x0005f867) control_pane

0xd279,	// (0x0005f867) stacon_bottom_pane

0x2a9d,	// (0x0005508b) scroll_pane_cp121

0x2a94,	// (0x00055082) set_content_pane

0xc464,	// (0x0005ea52) bg_active_tab_pane_g1_cp1

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp1

0xc46d,	// (0x0005ea5b) bg_active_tab_pane_g3_cp1

0xc464,	// (0x0005ea52) bg_passive_tab_pane_g1_cp1

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp1

0xc46d,	// (0x0005ea5b) bg_passive_tab_pane_g3_cp1

0xc476,	// (0x0005ea64) bg_active_tab_pane_g1_cp2

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp2

0xc47f,	// (0x0005ea6d) bg_active_tab_pane_g3_cp2

0xc476,	// (0x0005ea64) bg_passive_tab_pane_g1_cp2

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp2

0xc47f,	// (0x0005ea6d) bg_passive_tab_pane_g3_cp2

0xc488,	// (0x0005ea76) bg_active_tab_pane_g1_cp3

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp3

0xc491,	// (0x0005ea7f) bg_active_tab_pane_g3_cp3

0xc488,	// (0x0005ea76) bg_passive_tab_pane_g1_cp3

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp3

0xc491,	// (0x0005ea7f) bg_passive_tab_pane_g3_cp3

0xc49a,	// (0x0005ea88) bg_active_tab_pane_g1_cp4

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp4

0xc4a3,	// (0x0005ea91) bg_active_tab_pane_g3_cp4

0xc49a,	// (0x0005ea88) bg_passive_tab_pane_g1_cp4

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp4

0xc4a3,	// (0x0005ea91) bg_passive_tab_pane_g3_cp4

0x35e4,	// (0x00055bd2) bg_active_tab_pane_g1_cp5

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp5

0x35ed,	// (0x00055bdb) bg_active_tab_pane_g3_cp5

0x35e4,	// (0x00055bd2) bg_passive_tab_pane_g1_cp5

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp5

0x35ed,	// (0x00055bdb) bg_passive_tab_pane_g3_cp5

0xc4ac,	// (0x0005ea9a) list_set_graphic_pane_ParamLimits

0xc4ac,	// (0x0005ea9a) list_set_graphic_pane

0xd279,	// (0x0005f867) bg_set_opt_pane_cp4

0xc4c1,	// (0x0005eaaf) list_set_graphic_pane_g1_ParamLimits

0xc4c1,	// (0x0005eaaf) list_set_graphic_pane_g1

0xc4cd,	// (0x0005eabb) list_set_graphic_pane_g2_ParamLimits

0xc4cd,	// (0x0005eabb) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00061d5e) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00061d5e) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x000620d6) volume_small_pane_cp_g

0x363b,	// (0x00055c29) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x363b,	// (0x00055c29) list_double2_large_graphic_pane_g1_cp2

0x3649,	// (0x00055c37) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3649,	// (0x00055c37) list_double2_large_graphic_pane_g2_cp2

0x365a,	// (0x00055c48) list_double2_large_graphic_pane_g3_cp2

0x3662,	// (0x00055c50) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3662,	// (0x00055c50) list_double2_large_graphic_pane_t1_cp2

0x3678,	// (0x00055c66) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3678,	// (0x00055c66) list_double2_large_graphic_pane_t2_cp2

0x58c6,	// (0x00057eb4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x58c6,	// (0x00057eb4) list_double_large_graphic_pane_g1_cp2

0x58d9,	// (0x00057ec7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x58d9,	// (0x00057ec7) list_double_large_graphic_pane_g2_cp2

0x37ee,	// (0x00055ddc) list_double_large_graphic_pane_g3_cp2

0x58ea,	// (0x00057ed8) list_double_large_graphic_pane_g4_cp

0x58f2,	// (0x00057ee0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x58f2,	// (0x00057ee0) list_double_large_graphic_pane_t1_cp2

0x5909,	// (0x00057ef7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5909,	// (0x00057ef7) list_double_large_graphic_pane_t2_cp2

0x36de,	// (0x00055ccc) list_double2_graphic_pane_g1_cp2_ParamLimits

0x36de,	// (0x00055ccc) list_double2_graphic_pane_g1_cp2

0x36ec,	// (0x00055cda) list_double2_graphic_pane_g2_cp2_ParamLimits

0x36ec,	// (0x00055cda) list_double2_graphic_pane_g2_cp2

0x36fd,	// (0x00055ceb) list_double2_graphic_pane_g3_cp2

0x3707,	// (0x00055cf5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3707,	// (0x00055cf5) list_double2_graphic_pane_t1_cp2

0x371d,	// (0x00055d0b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x371d,	// (0x00055d0b) list_double2_graphic_pane_t2_cp2

0x372f,	// (0x00055d1d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x372f,	// (0x00055d1d) list_single_number_heading_pane_g1_cp2

0x373b,	// (0x00055d29) list_single_number_heading_pane_g2_cp2

0x3743,	// (0x00055d31) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3743,	// (0x00055d31) list_single_number_heading_pane_t1_cp2

0x3759,	// (0x00055d47) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3759,	// (0x00055d47) list_single_number_heading_pane_t2_cp2

0x376d,	// (0x00055d5b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x376d,	// (0x00055d5b) list_single_number_heading_pane_t3_cp2

0x372f,	// (0x00055d1d) list_single_heading_pane_g1_cp2_ParamLimits

0x372f,	// (0x00055d1d) list_single_heading_pane_g1_cp2

0x373b,	// (0x00055d29) list_single_heading_pane_g2_cp2

0x3743,	// (0x00055d31) list_single_heading_pane_t1_cp2_ParamLimits

0x3743,	// (0x00055d31) list_single_heading_pane_t1_cp2

0x56c0,	// (0x00057cae) list_single_heading_pane_t2_cp2_ParamLimits

0x56c0,	// (0x00057cae) list_single_heading_pane_t2_cp2

0x5602,	// (0x00057bf0) list_double_graphic_pane_g1_cp2_ParamLimits

0x5602,	// (0x00057bf0) list_double_graphic_pane_g1_cp2

0x560e,	// (0x00057bfc) list_double_graphic_pane_g2_cp2_ParamLimits

0x560e,	// (0x00057bfc) list_double_graphic_pane_g2_cp2

0x561d,	// (0x00057c0b) list_double_graphic_pane_g3_cp2

0x5625,	// (0x00057c13) list_double_graphic_pane_t1_cp2_ParamLimits

0x5625,	// (0x00057c13) list_double_graphic_pane_t1_cp2

0x563b,	// (0x00057c29) list_double_graphic_pane_t2_cp2_ParamLimits

0x563b,	// (0x00057c29) list_double_graphic_pane_t2_cp2

0x37e2,	// (0x00055dd0) list_double_number_pane_g1_cp2_ParamLimits

0x37e2,	// (0x00055dd0) list_double_number_pane_g1_cp2

0x37ee,	// (0x00055ddc) list_double_number_pane_g2_cp2

0x55c6,	// (0x00057bb4) list_double_number_pane_t1_cp2_ParamLimits

0x55c6,	// (0x00057bb4) list_double_number_pane_t1_cp2

0x55da,	// (0x00057bc8) list_double_number_pane_t2_cp2_ParamLimits

0x55da,	// (0x00057bc8) list_double_number_pane_t2_cp2

0x55f0,	// (0x00057bde) list_double_number_pane_t3_cp2_ParamLimits

0x55f0,	// (0x00057bde) list_double_number_pane_t3_cp2

0x54af,	// (0x00057a9d) list_single_graphic_pane_g1_cp2_ParamLimits

0x54af,	// (0x00057a9d) list_single_graphic_pane_g1_cp2

0x3848,	// (0x00055e36) list_single_graphic_pane_g2_cp2_ParamLimits

0x3848,	// (0x00055e36) list_single_graphic_pane_g2_cp2

0x3854,	// (0x00055e42) list_single_graphic_pane_g3_cp2

0x5485,	// (0x00057a73) list_single_graphic_pane_t1_cp2_ParamLimits

0x5485,	// (0x00057a73) list_single_graphic_pane_t1_cp2

0x3848,	// (0x00055e36) list_single_number_pane_g1_cp2_ParamLimits

0x3848,	// (0x00055e36) list_single_number_pane_g1_cp2

0x3854,	// (0x00055e42) list_single_number_pane_g2_cp2

0x5485,	// (0x00057a73) list_single_number_pane_t1_cp2_ParamLimits

0x5485,	// (0x00057a73) list_single_number_pane_t1_cp2

0x549b,	// (0x00057a89) list_single_number_pane_t2_cp2_ParamLimits

0x549b,	// (0x00057a89) list_single_number_pane_t2_cp2

0x3649,	// (0x00055c37) list_double2_pane_g1_cp2_ParamLimits

0x3649,	// (0x00055c37) list_double2_pane_g1_cp2

0x365a,	// (0x00055c48) list_double2_pane_g2_cp2

0x37ba,	// (0x00055da8) list_double2_pane_t1_cp2_ParamLimits

0x37ba,	// (0x00055da8) list_double2_pane_t1_cp2

0x37d0,	// (0x00055dbe) list_double2_pane_t2_cp2_ParamLimits

0x37d0,	// (0x00055dbe) list_double2_pane_t2_cp2

0x37e2,	// (0x00055dd0) list_double_pane_g1_cp2_ParamLimits

0x37e2,	// (0x00055dd0) list_double_pane_g1_cp2

0x37ee,	// (0x00055ddc) list_double_pane_g2_cp2

0x37f6,	// (0x00055de4) list_double_pane_t1_cp2_ParamLimits

0x37f6,	// (0x00055de4) list_double_pane_t1_cp2

0x380c,	// (0x00055dfa) list_double_pane_t2_cp2_ParamLimits

0x380c,	// (0x00055dfa) list_double_pane_t2_cp2

0x3838,	// (0x00055e26) list_single_pane_cp2_g3

0x3848,	// (0x00055e36) list_single_pane_g1_cp2_ParamLimits

0x3848,	// (0x00055e36) list_single_pane_g1_cp2

0x3854,	// (0x00055e42) list_single_pane_g2_cp2

0x385c,	// (0x00055e4a) list_single_pane_t1_cp2_ParamLimits

0x385c,	// (0x00055e4a) list_single_pane_t1_cp2

0x3874,	// (0x00055e62) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3874,	// (0x00055e62) list_single_large_graphic_pane_g1_cp2

0x3882,	// (0x00055e70) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3882,	// (0x00055e70) list_single_large_graphic_pane_g2_cp2

0x388e,	// (0x00055e7c) list_single_large_graphic_pane_g3_cp2

0x3896,	// (0x00055e84) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3896,	// (0x00055e84) list_single_large_graphic_pane_g4_cp1

0x38b0,	// (0x00055e9e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x38b0,	// (0x00055e9e) list_single_large_graphic_pane_t1_cp2

0x544f,	// (0x00057a3d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x544f,	// (0x00057a3d) list_single_graphic_heading_pane_g1_cp2

0x541c,	// (0x00057a0a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x541c,	// (0x00057a0a) list_single_graphic_heading_pane_g4_cp2

0x3854,	// (0x00055e42) list_single_graphic_heading_pane_g5_cp2

0x545b,	// (0x00057a49) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x545b,	// (0x00057a49) list_single_graphic_heading_pane_t1_cp2

0x5471,	// (0x00057a5f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5471,	// (0x00057a5f) list_single_graphic_heading_pane_t2_cp2

0x5410,	// (0x000579fe) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5410,	// (0x000579fe) list_single_2graphic_pane_g1_cp2

0x541c,	// (0x00057a0a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x541c,	// (0x00057a0a) list_single_2graphic_pane_g2_cp2

0x3854,	// (0x00055e42) list_single_2graphic_pane_g3_cp2

0x542d,	// (0x00057a1b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x542d,	// (0x00057a1b) list_single_2graphic_pane_g4_cp2

0x5439,	// (0x00057a27) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5439,	// (0x00057a27) list_single_2graphic_pane_t1_cp2

0xd26f,	// (0x0005f85d) list_highlight_pane_g10_cp1

0x4fe8,	// (0x000575d6) list_highlight_pane_g1_cp1

0x4ff0,	// (0x000575de) list_highlight_pane_g2_cp1

0x4ff8,	// (0x000575e6) list_highlight_pane_g3_cp1

0x5000,	// (0x000575ee) list_highlight_pane_g4_cp1

0x5008,	// (0x000575f6) list_highlight_pane_g5_cp1

0x5010,	// (0x000575fe) list_highlight_pane_g6_cp1

0x5018,	// (0x00057606) list_highlight_pane_g7_cp1

0x5020,	// (0x0005760e) list_highlight_pane_g8_cp1

0x5028,	// (0x00057616) list_highlight_pane_g9_cp1

0xd2ea,	// (0x0005f8d8) form_field_slider_pane_t3

0xd2f8,	// (0x0005f8e6) form_field_slider_pane_t4

0x4f24,	// (0x00057512) slider_form_pane_ParamLimits

0x4f24,	// (0x00057512) slider_form_pane

0xd279,	// (0x0005f867) control_abbreviations

0xd279,	// (0x0005f867) control_conventions

0xd279,	// (0x0005f867) control_definitions

0xd279,	// (0x0005f867) format_table_attribute

0x5716,	// (0x00057d04) bg_popup_preview_window_pane_g9

0xd279,	// (0x0005f867) format_table_data2

0xd279,	// (0x0005f867) format_table_data3

0xd279,	// (0x0005f867) format_table_data_example

0x0008,

0xd279,	// (0x0005f867) intro_purpose

0xf900,	// (0x00061eee) bg_popup_preview_window_pane_g

0xd279,	// (0x0005f867) texts_category

0xd279,	// (0x0005f867) texts_graphics

0x38c6,	// (0x00055eb4) text_digital

0x38d5,	// (0x00055ec3) text_primary

0x38e4,	// (0x00055ed2) text_primary_small

0x38f3,	// (0x00055ee1) text_secondary

0x3902,	// (0x00055ef0) text_title

0x5eb2,	// (0x000584a0) bg_passive_tab_pane_g1_cp3_srt

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp3_srt

0x5ebb,	// (0x000584a9) bg_passive_tab_pane_g3_cp3_srt

0x2403,	// (0x000549f1) bg_active_tab_pane_cp3_srt_ParamLimits

0x2403,	// (0x000549f1) bg_active_tab_pane_cp3_srt

0x5ec4,	// (0x000584b2) tabs_4_active_pane_srt_g1

0xd6fd,	// (0x0005fceb) tabs_4_active_pane_srt_t1_ParamLimits

0xd6fd,	// (0x0005fceb) tabs_4_active_pane_srt_t1

0x5eb2,	// (0x000584a0) bg_active_tab_pane_g1_cp3_copy1

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp3_copy1

0x5ebb,	// (0x000584a9) bg_active_tab_pane_g3_cp3_copy1

0x2187,	// (0x00054775) tabs_2_long_active_pane_srt_ParamLimits

0x2187,	// (0x00054775) tabs_2_long_active_pane_srt

0x2187,	// (0x00054775) tabs_2_long_passive_pane_srt_ParamLimits

0x2187,	// (0x00054775) tabs_2_long_passive_pane_srt

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp4_srt

0x5b66,	// (0x00058154) bg_passive_tab_pane_g1_cp4_srt

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp4_srt

0x5b6f,	// (0x0005815d) bg_passive_tab_pane_g3_cp4_srt

0x2187,	// (0x00054775) bg_active_tab_pane_cp4_srt_ParamLimits

0x2187,	// (0x00054775) bg_active_tab_pane_cp4_srt

0xd4f3,	// (0x0005fae1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd4f3,	// (0x0005fae1) tabs_2_long_active_pane_srt_t1

0x5b66,	// (0x00058154) bg_active_tab_pane_g1_cp4_srt

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp4_srt

0x5b6f,	// (0x0005815d) bg_active_tab_pane_g3_cp4_srt

0x2403,	// (0x000549f1) tabs_3_long_active_pane_srt_ParamLimits

0x2403,	// (0x000549f1) tabs_3_long_active_pane_srt

0x2403,	// (0x000549f1) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2403,	// (0x000549f1) tabs_3_long_passive_pane_cp_srt

0x2403,	// (0x000549f1) tabs_3_long_passive_pane_srt_ParamLimits

0x2403,	// (0x000549f1) tabs_3_long_passive_pane_srt

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp5_srt

0x35e4,	// (0x00055bd2) bg_passive_tab_pane_g1_cp5_srt

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp5_srt

0x35ed,	// (0x00055bdb) bg_passive_tab_pane_g3_cp5_srt

0x2187,	// (0x00054775) bg_active_tab_pane_cp5_srt_ParamLimits

0x2187,	// (0x00054775) bg_active_tab_pane_cp5_srt

0xd4dd,	// (0x0005facb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd4dd,	// (0x0005facb) tabs_3_long_active_pane_srt_t1

0x35e4,	// (0x00055bd2) bg_active_tab_pane_g1_cp5_srt

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp5_srt

0x35ed,	// (0x00055bdb) bg_active_tab_pane_g3_cp5_srt

0x5b46,	// (0x00058134) navi_text_pane_srt_t1

0x5b3e,	// (0x0005812c) navi_icon_pane_srt_g1

0x3ad9,	// (0x000560c7) midp_editing_number_pane_srt

0x3911,	// (0x00055eff) midp_ticker_pane_srt

0x3ae1,	// (0x000560cf) midp_ticker_pane_srt_g1

0x3ae9,	// (0x000560d7) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x00061d7d) midp_ticker_pane_srt_g

0x3af1,	// (0x000560df) midp_ticker_pane_srt_t1

0x5b2f,	// (0x0005811d) midp_editing_number_pane_t1_copy1

0xc4f1,	// (0x0005eadf) listscroll_midp_pane

0xc4f1,	// (0x0005eadf) midp_form_pane

0x3987,	// (0x00055f75) midp_info_popup_window_ParamLimits

0x3987,	// (0x00055f75) midp_info_popup_window

0x2b7b,	// (0x00055169) bg_popup_sub_pane_cp50_ParamLimits

0x2b7b,	// (0x00055169) bg_popup_sub_pane_cp50

0x4c1e,	// (0x0005720c) listscroll_midp_info_pane_ParamLimits

0x4c1e,	// (0x0005720c) listscroll_midp_info_pane

0x4c06,	// (0x000571f4) listscroll_form_midp_pane_ParamLimits

0x4c06,	// (0x000571f4) listscroll_form_midp_pane

0x4c12,	// (0x00057200) scroll_bar_cp050

0xd2de,	// (0x0005f8cc) list_midp_pane

0x68fb,	// (0x00058ee9) signal_pane_g2_cp

0x4b20,	// (0x0005710e) listscroll_midp_info_pane_t1_ParamLimits

0x4b20,	// (0x0005710e) listscroll_midp_info_pane_t1

0x4b38,	// (0x00057126) listscroll_midp_info_pane_t2_ParamLimits

0x4b38,	// (0x00057126) listscroll_midp_info_pane_t2

0x4b76,	// (0x00057164) listscroll_midp_info_pane_t3_ParamLimits

0x4b76,	// (0x00057164) listscroll_midp_info_pane_t3

0x4bb0,	// (0x0005719e) listscroll_midp_info_pane_t4_ParamLimits

0x4bb0,	// (0x0005719e) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00061e29) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00061e29) listscroll_midp_info_pane_t

0x2c45,	// (0x00055233) scroll_pane_cp21

0x4aba,	// (0x000570a8) form_midp_field_choice_group_pane

0x4ac3,	// (0x000570b1) form_midp_field_text_pane

0x4b06,	// (0x000570f4) form_midp_field_time_pane

0x4b0e,	// (0x000570fc) form_midp_gauge_slider_pane

0x4b17,	// (0x00057105) form_midp_gauge_wait_pane

0xd279,	// (0x0005f867) form_midp_image_pane

0xbb56,	// (0x0005e144) list_single_midp_pane_ParamLimits

0xbb56,	// (0x0005e144) list_single_midp_pane

0xd2bc,	// (0x0005f8aa) form_midp_field_text_pane_t1

0x48be,	// (0x00056eac) input_focus_pane_cp050

0x4aa9,	// (0x00057097) list_midp_form_text_pane

0x4a5a,	// (0x00057048) form_midp_field_choice_group_pane_t1

0x4a68,	// (0x00057056) input_focus_pane_cp051

0x4a7c,	// (0x0005706a) list_midp_choice_pane

0xd279,	// (0x0005f867) status_idle_pane

0x4a3e,	// (0x0005702c) form_midp_field_time_pane_t1

0xd26f,	// (0x0005f85d) wait_anim_pane_g2_copy1

0x4a4c,	// (0x0005703a) form_midp_field_time_pane_t2

0x0001,

0x3a37,	// (0x00056025) aid_navinavi_width_2_pane

0xf836,	// (0x00061e24) form_midp_field_time_pane_t

0xd279,	// (0x0005f867) input_focus_pane_cp052

0xd279,	// (0x0005f867) bg_input_focus_pane_cp040

0x49fe,	// (0x00056fec) form_midp_gauge_slider_pane_t1

0x4a0c,	// (0x00056ffa) form_midp_gauge_slider_pane_t2

0xd2a0,	// (0x0005f88e) form_midp_gauge_slider_pane_t3

0xd2ae,	// (0x0005f89c) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00061e1b) form_midp_gauge_slider_pane_t

0x4a36,	// (0x00057024) form_midp_slider_pane

0x2187,	// (0x00054775) bg_input_focus_pane_cp041_ParamLimits

0x2187,	// (0x00054775) bg_input_focus_pane_cp041

0x49cb,	// (0x00056fb9) form_midp_gauge_wait_pane_t1_ParamLimits

0x49cb,	// (0x00056fb9) form_midp_gauge_wait_pane_t1

0x49dd,	// (0x00056fcb) form_midp_gauge_wait_pane_t2_ParamLimits

0x49dd,	// (0x00056fcb) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00061e16) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00061e16) form_midp_gauge_wait_pane_t

0x49ef,	// (0x00056fdd) form_midp_wait_pane_ParamLimits

0x49ef,	// (0x00056fdd) form_midp_wait_pane

0x4995,	// (0x00056f83) form_midp_image_pane_g1

0x499e,	// (0x00056f8c) form_midp_image_pane_t1

0x49ad,	// (0x00056f9b) form_midp_image_pane_t2

0xd28f,	// (0x0005f87d) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00061e0f) form_midp_image_pane_t

0x498c,	// (0x00056f7a) list_single_midp_pane_g1

0x0b5b,	// (0x00053149) list_single_midp_pane_t1

0xd1ac,	// (0x0005f79a) list_midp_form_item_pane_ParamLimits

0xd1ac,	// (0x0005f79a) list_midp_form_item_pane

0x39df,	// (0x00055fcd) list_midp_form_item_pane_t1

0x39ee,	// (0x00055fdc) midp_ticker_pane_g1

0x39fa,	// (0x00055fe8) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00061d63) midp_ticker_pane_g

0xc599,	// (0x0005eb87) midp_ticker_pane_t1

0xd682,	// (0x0005fc70) midp_editing_number_pane_t1

0x5d8c,	// (0x0005837a) midp_editing_number_pane

0x5d9b,	// (0x00058389) midp_ticker_pane

0x5b1f,	// (0x0005810d) ai_message_heading_pane

0xd279,	// (0x0005f867) bg_popup_window_pane_cp14

0x5b27,	// (0x00058115) listscroll_ai_message_pane

0x5aa5,	// (0x00058093) ai_message_heading_pane_g1_ParamLimits

0x5aa5,	// (0x00058093) ai_message_heading_pane_g1

0x5ab1,	// (0x0005809f) ai_message_heading_pane_g2_ParamLimits

0x5ab1,	// (0x0005809f) ai_message_heading_pane_g2

0x5abf,	// (0x000580ad) ai_message_heading_pane_g3_ParamLimits

0x5abf,	// (0x000580ad) ai_message_heading_pane_g3

0x5acb,	// (0x000580b9) ai_message_heading_pane_g4_ParamLimits

0x5acb,	// (0x000580b9) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x00061f50) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x00061f50) ai_message_heading_pane_g

0x5ad7,	// (0x000580c5) ai_message_heading_pane_t1_ParamLimits

0x5ad7,	// (0x000580c5) ai_message_heading_pane_t1

0x5af1,	// (0x000580df) ai_message_heading_pane_t2_ParamLimits

0x5af1,	// (0x000580df) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00061f59) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00061f59) ai_message_heading_pane_t

0x5b05,	// (0x000580f3) bg_popup_heading_pane_cp1_ParamLimits

0x5b05,	// (0x000580f3) bg_popup_heading_pane_cp1

0x5a93,	// (0x00058081) list_ai_message_pane_ParamLimits

0x5a93,	// (0x00058081) list_ai_message_pane

0x2c45,	// (0x00055233) scroll_pane_cp10

0x5a2f,	// (0x0005801d) list_ai_message_pane_g1

0x5a37,	// (0x00058025) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00061f2d) list_ai_message_pane_g

0x5a3f,	// (0x0005802d) list_ai_message_pane_t1_ParamLimits

0x5a3f,	// (0x0005802d) list_ai_message_pane_t1

0x5a54,	// (0x00058042) list_ai_message_pane_t2_ParamLimits

0x5a54,	// (0x00058042) list_ai_message_pane_t2

0x5a69,	// (0x00058057) list_ai_message_pane_t3_ParamLimits

0x5a69,	// (0x00058057) list_ai_message_pane_t3

0x5a7e,	// (0x0005806c) list_ai_message_pane_t4_ParamLimits

0x5a7e,	// (0x0005806c) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x00061f32) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x00061f32) list_ai_message_pane_t

0xd4c3,	// (0x0005fab1) cell_ai_soft_ind_pane_ParamLimits

0xd4c3,	// (0x0005fab1) cell_ai_soft_ind_pane

0x3a18,	// (0x00056006) cell_ai_soft_ind_pane_g1_ParamLimits

0x3a18,	// (0x00056006) cell_ai_soft_ind_pane_g1

0xd279,	// (0x0005f867) grid_highlight_cp1

0x3a25,	// (0x00056013) text_secondary_cp56_ParamLimits

0x3a25,	// (0x00056013) text_secondary_cp56

0x59ed,	// (0x00057fdb) example_general_pane_ParamLimits

0x59ed,	// (0x00057fdb) example_general_pane

0x59f9,	// (0x00057fe7) example_parent_pane_g1_ParamLimits

0x59f9,	// (0x00057fe7) example_parent_pane_g1

0x5a05,	// (0x00057ff3) example_parent_pane_t1_ParamLimits

0x5a05,	// (0x00057ff3) example_parent_pane_t1

0xca19,	// (0x0005f007) popup_preview_text_window_ParamLimits

0xca19,	// (0x0005f007) popup_preview_text_window

0x3840,	// (0x00055e2e) list_single_pane_cp2_g4

0x24b9,	// (0x00054aa7) bg_popup_preview_window_pane_ParamLimits

0x24b9,	// (0x00054aa7) bg_popup_preview_window_pane

0x5720,	// (0x00057d0e) popup_preview_text_window_t1_ParamLimits

0x5720,	// (0x00057d0e) popup_preview_text_window_t1

0x573e,	// (0x00057d2c) popup_preview_text_window_t2_ParamLimits

0x573e,	// (0x00057d2c) popup_preview_text_window_t2

0x5787,	// (0x00057d75) popup_preview_text_window_t3_ParamLimits

0x5787,	// (0x00057d75) popup_preview_text_window_t3

0x57cc,	// (0x00057dba) popup_preview_text_window_t4_ParamLimits

0x57cc,	// (0x00057dba) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00061f01) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00061f01) popup_preview_text_window_t

0x584a,	// (0x00057e38) scroll_pane_cp11

0x47cc,	// (0x00056dba) bg_popup_preview_window_pane_g1

0x56d4,	// (0x00057cc2) bg_popup_preview_window_pane_g2

0x56de,	// (0x00057ccc) bg_popup_preview_window_pane_g3

0x56e8,	// (0x00057cd6) bg_popup_preview_window_pane_g4

0x56f2,	// (0x00057ce0) bg_popup_preview_window_pane_g5

0x56fc,	// (0x00057cea) bg_popup_preview_window_pane_g6

0x5704,	// (0x00057cf2) bg_popup_preview_window_pane_g7

0x570c,	// (0x00057cfa) bg_popup_preview_window_pane_g8

0xf0b8,	// (0x000616a6) aid_popup_width_pane

0xc989,	// (0x0005ef77) popup_midp_note_alarm_window_ParamLimits

0xc989,	// (0x0005ef77) popup_midp_note_alarm_window

0x2aae,	// (0x0005509c) data_form_pane_ParamLimits

0xb6a5,	// (0x0005dc93) form_field_data_pane_g1

0xb6af,	// (0x0005dc9d) form_field_data_pane_t1_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_ParamLimits

0x2ac8,	// (0x000550b6) data_form_wide_pane_ParamLimits

0x0206,	// (0x000527f4) form_field_data_wide_pane_g1

0x0212,	// (0x00052800) form_field_data_wide_pane_t1_ParamLimits

0x277f,	// (0x00054d6d) input_focus_pane_cp6_ParamLimits

0xb809,	// (0x0005ddf7) input_popup_find_pane_g1_ParamLimits

0xb809,	// (0x0005ddf7) input_popup_find_pane_g1

0x0466,	// (0x00052a54) aid_navi_side_left_pane

0x047b,	// (0x00052a69) aid_navi_side_right_pane

0x50e3,	// (0x000576d1) bg_popup_window_pane_cp30_ParamLimits

0x50e3,	// (0x000576d1) bg_popup_window_pane_cp30

0x515d,	// (0x0005774b) popup_midp_note_alarm_window_g1_ParamLimits

0x515d,	// (0x0005774b) popup_midp_note_alarm_window_g1

0x518d,	// (0x0005777b) popup_midp_note_alarm_window_t1_ParamLimits

0x518d,	// (0x0005777b) popup_midp_note_alarm_window_t1

0x522e,	// (0x0005781c) popup_midp_note_alarm_window_t2_ParamLimits

0x522e,	// (0x0005781c) popup_midp_note_alarm_window_t2

0x52dc,	// (0x000578ca) popup_midp_note_alarm_window_t3_ParamLimits

0x52dc,	// (0x000578ca) popup_midp_note_alarm_window_t3

0x530e,	// (0x000578fc) popup_midp_note_alarm_window_t4_ParamLimits

0x530e,	// (0x000578fc) popup_midp_note_alarm_window_t4

0x5334,	// (0x00057922) popup_midp_note_alarm_window_t5_ParamLimits

0x5334,	// (0x00057922) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x00061e9e) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x00061e9e) popup_midp_note_alarm_window_t

0x53e0,	// (0x000579ce) wait_bar_pane_cp1_ParamLimits

0x53e0,	// (0x000579ce) wait_bar_pane_cp1

0xd279,	// (0x0005f867) wait_anim_pane_copy1

0xd279,	// (0x0005f867) wait_border_pane_copy1

0x4dc8,	// (0x000573b6) wait_border_pane_g1_copy1

0x022c,	// (0x0005281a) form_field_popup_pane_g1

0xb6c9,	// (0x0005dcb7) form_field_popup_pane_t1_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_cp7_ParamLimits

0x2af4,	// (0x000550e2) list_form_pane_ParamLimits

0x024e,	// (0x0005283c) form_field_popup_wide_pane_g1

0x0256,	// (0x00052844) form_field_popup_wide_pane_t1_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_cp8_ParamLimits

0x2b00,	// (0x000550ee) list_form_wide_pane_ParamLimits

0x5f3f,	// (0x0005852d) aid_size_cell_graphic_pane

0xb748,	// (0x0005dd36) data_form_pane_t1_ParamLimits

0xbce5,	// (0x0005e2d3) data_form_wide_pane_t1_ParamLimits

0xce1b,	// (0x0005f409) bg_status_flat_pane

0xae22,	// (0x0005d410) title_pane_t1_ParamLimits

0x214f,	// (0x0005473d) title_pane_t2_ParamLimits

0x2175,	// (0x00054763) title_pane_t3_ParamLimits

0xf56f,	// (0x00061b5d) title_pane_t_ParamLimits

0xc32e,	// (0x0005e91c) level_1_signal_ParamLimits

0xc340,	// (0x0005e92e) level_2_signal_ParamLimits

0xc353,	// (0x0005e941) level_3_signal_ParamLimits

0xc366,	// (0x0005e954) level_4_signal_ParamLimits

0xc379,	// (0x0005e967) level_5_signal_ParamLimits

0xc38c,	// (0x0005e97a) level_6_signal_ParamLimits

0xc39f,	// (0x0005e98d) level_7_signal_ParamLimits

0xc32e,	// (0x0005e91c) level_1_battery_ParamLimits

0xc340,	// (0x0005e92e) level_2_battery_ParamLimits

0xc353,	// (0x0005e941) level_3_battery_ParamLimits

0xc366,	// (0x0005e954) level_4_battery_ParamLimits

0xc379,	// (0x0005e967) level_5_battery_ParamLimits

0xc38c,	// (0x0005e97a) level_6_battery_ParamLimits

0xc39f,	// (0x0005e98d) level_7_battery_ParamLimits

0x4fe8,	// (0x000575d6) bg_status_flat_pane_g1

0x4ff0,	// (0x000575de) bg_status_flat_pane_g2

0x4ff8,	// (0x000575e6) bg_status_flat_pane_g3

0x5000,	// (0x000575ee) bg_status_flat_pane_g4

0x5008,	// (0x000575f6) bg_status_flat_pane_g5

0x5010,	// (0x000575fe) bg_status_flat_pane_g6

0x5018,	// (0x00057606) bg_status_flat_pane_g7

0xaeb6,	// (0x0005d4a4) tabs_3_active_pane_t1_ParamLimits

0xaeb6,	// (0x0005d4a4) tabs_3_passive_pane_t1_ParamLimits

0xaed0,	// (0x0005d4be) tabs_4_active_pane_t1_ParamLimits

0xaed0,	// (0x0005d4be) tabs_4_1_passive_pane_t1_ParamLimits

0xb81f,	// (0x0005de0d) tabs_2_active_pane_t1_ParamLimits

0xb81f,	// (0x0005de0d) tabs_2_passive_pane_t1_ParamLimits

0x2187,	// (0x00054775) bg_active_tab_pane_cp4_ParamLimits

0xb831,	// (0x0005de1f) tabs_2_long_active_pane_t1_ParamLimits

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp4_ParamLimits

0x0aa2,	// (0x00053090) list_single_midp_graphic_pane_t1_ParamLimits

0x2187,	// (0x00054775) bg_active_tab_pane_cp5_ParamLimits

0xb844,	// (0x0005de32) tabs_3_long_active_pane_t1_ParamLimits

0x3c8f,	// (0x0005627d) bg_passive_tab_pane_cp5_ParamLimits

0x0aa2,	// (0x00053090) list_single_midp_graphic_pane_t1

0xce1b,	// (0x0005f409) bg_status_flat_pane_ParamLimits

0x4444,	// (0x00056a32) indicator_pane_cp2_ParamLimits

0x4444,	// (0x00056a32) indicator_pane_cp2

0xcfb1,	// (0x0005f59f) navi_pane_srt_ParamLimits

0xcfb1,	// (0x0005f59f) navi_pane_srt

0x45ab,	// (0x00056b99) popup_clock_digital_analogue_window_cp1

0x2267,	// (0x00054855) indicator_pane_t1

0x3911,	// (0x00055eff) copy_highlight_pane

0x3911,	// (0x00055eff) cursor_graphics_pane

0x3911,	// (0x00055eff) graphic_within_text_pane

0x3911,	// (0x00055eff) link_highlight_pane

0x580d,	// (0x00057dfb) popup_preview_text_window_t5_ParamLimits

0x580d,	// (0x00057dfb) popup_preview_text_window_t5

0x3a41,	// (0x0005602f) cursor_digital_pane

0x3a41,	// (0x0005602f) cursor_primary_pane

0x3a52,	// (0x00056040) cursor_primary_small_pane

0x3a5a,	// (0x00056048) cursor_secondary_pane

0x3a62,	// (0x00056050) cursor_title_pane

0x3a41,	// (0x0005602f) link_highlight_digital_pane

0x3a49,	// (0x00056037) link_highlight_primary_pane

0x3a52,	// (0x00056040) link_highlight_primary_small_pane

0x3a5a,	// (0x00056048) link_highlight_secondary_pane

0x3a62,	// (0x00056050) link_highlight_title_pane

0x3a41,	// (0x0005602f) copy_highlight_digital_pane

0x3a41,	// (0x0005602f) copy_highlight_primary_pane

0x3a52,	// (0x00056040) copy_highlight_primary_small_pane

0x3a5a,	// (0x00056048) copy_highlight_secondary_pane

0x3a62,	// (0x00056050) copy_highlight_title_pane

0x3a5a,	// (0x00056048) graphic_text_digital_pane

0x5086,	// (0x00057674) graphic_text_primary_pane

0x508f,	// (0x0005767d) graphic_text_primary_small_pane

0x3a52,	// (0x00056040) graphic_text_secondary_pane

0x3a41,	// (0x0005602f) graphic_text_title_pane

0xc5ab,	// (0x0005eb99) cursor_primary_pane_g1

0x5078,	// (0x00057666) cursor_text_primary_t1

0xd31a,	// (0x0005f908) cursor_primary_small_pane_g1

0x506a,	// (0x00057658) cursor_text_primary_small_t1

0xd310,	// (0x0005f8fe) cursor_primary_small_pane_g1_copy1

0x5052,	// (0x00057640) cursor_text_primary_small_t1_copy1

0x5030,	// (0x0005761e) cursor_text_title_t1

0xd306,	// (0x0005f8f4) cursor_title_pane_g1

0xc5ab,	// (0x0005eb99) cursor_digital_pane_g1

0x3a74,	// (0x00056062) cursor_text_digital_t1

0x3a82,	// (0x00056070) link_highlight_primary_pane_g1

0x4fd9,	// (0x000575c7) link_highlight_primary_pane_t1

0x3a82,	// (0x00056070) link_highlight_primary_small_pane_g1

0x3a8a,	// (0x00056078) link_highlight_primary_small_pane_t1

0x3a99,	// (0x00056087) link_highlight_secondary_pane_g1

0x3aa1,	// (0x0005608f) link_highlight_secondary_pane_t1

0x4f4d,	// (0x0005753b) link_highlight_title_pane_g1

0x4f55,	// (0x00057543) link_highlight_title_pane_t1

0x4f36,	// (0x00057524) link_highlight_digital_pane_g1

0x4f3e,	// (0x0005752c) link_highlight_digital_pane_t1

0x4dfe,	// (0x000573ec) copy_highlight_primary_pane_g1

0x4e15,	// (0x00057403) copy_highlight_primary_pane_t1

0x4dfe,	// (0x000573ec) copy_highlight_primary_small_pane_g1

0x4e06,	// (0x000573f4) copy_highlight_primary_small_pane_t1

0x3ab0,	// (0x0005609e) copy_highlight_secondary_pane_g1

0x3ab8,	// (0x000560a6) copy_highlight_secondary_pane_t1

0x4de7,	// (0x000573d5) copy_highlight_title_pane_g1

0x4def,	// (0x000573dd) copy_highlight_title_pane_t1

0x4dfe,	// (0x000573ec) copy_highlight_digital_pane_g1

0x610f,	// (0x000586fd) copy_highlight_digital_pane_t1

0x6063,	// (0x00058651) graphic_text_primary_pane_g1

0x60f3,	// (0x000586e1) graphic_text_primary_pane_t1

0x6101,	// (0x000586ef) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x00061fcd) graphic_text_primary_pane_t

0x60cf,	// (0x000586bd) graphic_text_primary_small_pane_g1

0x60d7,	// (0x000586c5) graphic_text_primary_small_pane_t1

0x60e5,	// (0x000586d3) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00061fc8) graphic_text_primary_small_pane_t

0x60ab,	// (0x00058699) graphic_text_secondary_pane_g1

0x60b3,	// (0x000586a1) graphic_text_secondary_pane_t1

0x60c1,	// (0x000586af) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x00061fc3) graphic_text_secondary_pane_t

0x6087,	// (0x00058675) graphic_text_title_pane_g1

0x608f,	// (0x0005867d) graphic_text_title_pane_t1

0x609d,	// (0x0005868b) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x00061fbe) graphic_text_title_pane_t

0x6063,	// (0x00058651) graphic_text_digital_pane_g1

0x606b,	// (0x00058659) graphic_text_digital_pane_t1

0x6079,	// (0x00058667) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00061fb9) graphic_text_digital_pane_t

0x2187,	// (0x00054775) navi_icon_pane_srt_ParamLimits

0x2187,	// (0x00054775) navi_icon_pane_srt

0xd279,	// (0x0005f867) navi_midp_pane_srt

0xd279,	// (0x0005f867) navi_navi_pane_srt

0x2187,	// (0x00054775) navi_text_pane_srt_ParamLimits

0x2187,	// (0x00054775) navi_text_pane_srt

0x602e,	// (0x0005861c) navi_navi_icon_text_pane_srt

0x6036,	// (0x00058624) navi_navi_pane_srt_g1_ParamLimits

0x6036,	// (0x00058624) navi_navi_pane_srt_g1

0x6048,	// (0x00058636) navi_navi_pane_srt_g2_ParamLimits

0x6048,	// (0x00058636) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x00061fb4) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x00061fb4) navi_navi_pane_srt_g

0x605a,	// (0x00058648) navi_navi_tabs_pane_srt

0x602e,	// (0x0005861c) navi_navi_text_pane_srt

0x602e,	// (0x0005861c) navi_navi_volume_pane_srt

0x601f,	// (0x0005860d) navi_navi_text_pane_srt_t1

0x0ed3,	// (0x000534c1) navi_navi_volume_pane_srt_g1

0x0edb,	// (0x000534c9) volume_small_pane_srt_ParamLimits

0x0edb,	// (0x000534c9) volume_small_pane_srt

0x07bb,	// (0x00052da9) volume_small_pane_srt_g1_ParamLimits

0x07bb,	// (0x00052da9) volume_small_pane_srt_g1

0x07cb,	// (0x00052db9) volume_small_pane_srt_g2_ParamLimits

0x07cb,	// (0x00052db9) volume_small_pane_srt_g2

0x07dc,	// (0x00052dca) volume_small_pane_srt_g3_ParamLimits

0x07dc,	// (0x00052dca) volume_small_pane_srt_g3

0x07ed,	// (0x00052ddb) volume_small_pane_srt_g4_ParamLimits

0x07ed,	// (0x00052ddb) volume_small_pane_srt_g4

0x07fe,	// (0x00052dec) volume_small_pane_srt_g5_ParamLimits

0x07fe,	// (0x00052dec) volume_small_pane_srt_g5

0x080f,	// (0x00052dfd) volume_small_pane_srt_g6_ParamLimits

0x080f,	// (0x00052dfd) volume_small_pane_srt_g6

0x0820,	// (0x00052e0e) volume_small_pane_srt_g7_ParamLimits

0x0820,	// (0x00052e0e) volume_small_pane_srt_g7

0x0831,	// (0x00052e1f) volume_small_pane_srt_g8_ParamLimits

0x0831,	// (0x00052e1f) volume_small_pane_srt_g8

0x0842,	// (0x00052e30) volume_small_pane_srt_g9_ParamLimits

0x0842,	// (0x00052e30) volume_small_pane_srt_g9

0x0853,	// (0x00052e41) volume_small_pane_srt_g10_ParamLimits

0x0853,	// (0x00052e41) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00061d68) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00061d68) volume_small_pane_srt_g

0x256e,	// (0x00054b5c) query_popup_data_pane_cp2

0x6005,	// (0x000585f3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6005,	// (0x000585f3) navi_navi_icon_text_pane_srt_t1

0x5086,	// (0x00057674) navi_tabs_2_long_pane_srt

0x5086,	// (0x00057674) navi_tabs_2_pane_srt

0x5086,	// (0x00057674) navi_tabs_3_long_pane_srt

0x5086,	// (0x00057674) navi_tabs_3_pane_srt

0x5086,	// (0x00057674) navi_tabs_4_pane_srt

0x0eb3,	// (0x000534a1) tabs_2_active_pane_srt_ParamLimits

0x0eb3,	// (0x000534a1) tabs_2_active_pane_srt

0x0ec3,	// (0x000534b1) tabs_2_passive_pane_srt_ParamLimits

0x0ec3,	// (0x000534b1) tabs_2_passive_pane_srt

0x48be,	// (0x00056eac) bg_passive_tab_pane_cp1_srt_ParamLimits

0x48be,	// (0x00056eac) bg_passive_tab_pane_cp1_srt

0x5fd1,	// (0x000585bf) bg_passive_tab_pane_g1_cp1_srt

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp1_srt

0x5fda,	// (0x000585c8) bg_passive_tab_pane_g3_cp1_srt

0x2403,	// (0x000549f1) bg_active_tab_pane_cp1_srt_ParamLimits

0x2403,	// (0x000549f1) bg_active_tab_pane_cp1_srt

0x5fe3,	// (0x000585d1) tabs_2_active_pane_srt_g1

0xd77d,	// (0x0005fd6b) tabs_2_active_pane_srt_t1_ParamLimits

0xd77d,	// (0x0005fd6b) tabs_2_active_pane_srt_t1

0x5fd1,	// (0x000585bf) bg_active_tab_pane_g1_cp1_srt

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp1_srt

0x5fda,	// (0x000585c8) bg_active_tab_pane_g3_cp1_srt

0x0e80,	// (0x0005346e) tabs_3_active_pane_srt_ParamLimits

0x0e80,	// (0x0005346e) tabs_3_active_pane_srt

0x0e91,	// (0x0005347f) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e91,	// (0x0005347f) tabs_3_passive_pane_cp_srt

0x0ea2,	// (0x00053490) tabs_3_passive_pane_srt_ParamLimits

0x0ea2,	// (0x00053490) tabs_3_passive_pane_srt

0x48be,	// (0x00056eac) bg_passive_tab_pane_cp2_srt_ParamLimits

0x48be,	// (0x00056eac) bg_passive_tab_pane_cp2_srt

0x3ac7,	// (0x000560b5) bg_passive_tab_pane_g1_cp2_srt

0x355a,	// (0x00055b48) bg_passive_tab_pane_g2_cp2_srt

0x3ad0,	// (0x000560be) bg_passive_tab_pane_g3_cp2_srt

0x2403,	// (0x000549f1) bg_active_tab_pane_cp2_srt_ParamLimits

0x2403,	// (0x000549f1) bg_active_tab_pane_cp2_srt

0x5fb7,	// (0x000585a5) tabs_3_active_pane_srt_g1

0xd767,	// (0x0005fd55) tabs_3_active_pane_srt_t1_ParamLimits

0xd767,	// (0x0005fd55) tabs_3_active_pane_srt_t1

0x3ac7,	// (0x000560b5) bg_active_tab_pane_g1_cp2_srt

0x355a,	// (0x00055b48) bg_active_tab_pane_g2_cp2_srt

0x3ad0,	// (0x000560be) bg_active_tab_pane_g3_cp2_srt

0x0e38,	// (0x00053426) tabs_4_active_pane_srt_ParamLimits

0x0e38,	// (0x00053426) tabs_4_active_pane_srt

0x0e4a,	// (0x00053438) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e4a,	// (0x00053438) tabs_4_passive_pane_cp2_srt

0x3c25,	// (0x00056213) aid_size_cell_toolbar

0x5bd9,	// (0x000581c7) main_idle_act_pane_ParamLimits

0x3e54,	// (0x00056442) popup_large_graphic_colour_window_ParamLimits

0xccdf,	// (0x0005f2cd) popup_toolbar_window_ParamLimits

0xccdf,	// (0x0005f2cd) popup_toolbar_window

0x5dd1,	// (0x000583bf) list_single_graphic_2heading_pane_ParamLimits

0x5dd1,	// (0x000583bf) list_single_graphic_2heading_pane

0x303b,	// (0x00055629) aid_size_cell_apps_grid_lsc_pane

0x304d,	// (0x0005563b) aid_size_cell_apps_grid_prt_pane

0x3c8f,	// (0x0005627d) bg_wml_button_pane_cp1_ParamLimits

0x3c8f,	// (0x0005627d) bg_wml_button_pane_cp1

0xd2bc,	// (0x0005f8aa) form_midp_field_text_pane_t1_ParamLimits

0x48be,	// (0x00056eac) input_focus_pane_cp050_ParamLimits

0x4aa9,	// (0x00057097) list_midp_form_text_pane_ParamLimits

0x4a68,	// (0x00057056) input_focus_pane_cp051_ParamLimits

0x4a7c,	// (0x0005706a) list_midp_choice_pane_ParamLimits

0xd17c,	// (0x0005f76a) list_single_2graphic_pane_cp3_ParamLimits

0xd17c,	// (0x0005f76a) list_single_2graphic_pane_cp3

0xd18e,	// (0x0005f77c) list_single_midp_graphic_pane_ParamLimits

0xd18e,	// (0x0005f77c) list_single_midp_graphic_pane

0xf2ff,	// (0x000618ed) list_single_graphic_2heading_pane_g1_ParamLimits

0xf2ff,	// (0x000618ed) list_single_graphic_2heading_pane_g1

0xf30b,	// (0x000618f9) list_single_graphic_2heading_pane_g4_ParamLimits

0xf30b,	// (0x000618f9) list_single_graphic_2heading_pane_g4

0xf317,	// (0x00061905) list_single_graphic_2heading_pane_g5_ParamLimits

0xf317,	// (0x00061905) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00061dbb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00061dbb) list_single_graphic_2heading_pane_g

0xf323,	// (0x00061911) list_single_graphic_2heading_pane_t1_ParamLimits

0xf323,	// (0x00061911) list_single_graphic_2heading_pane_t1

0xf337,	// (0x00061925) list_single_graphic_2heading_pane_t2_ParamLimits

0xf337,	// (0x00061925) list_single_graphic_2heading_pane_t2

0xf353,	// (0x00061941) list_single_graphic_2heading_pane_t3_ParamLimits

0xf353,	// (0x00061941) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00061dc2) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00061dc2) list_single_graphic_2heading_pane_t

0x470a,	// (0x00056cf8) bg_popup_sub_pane_cp2

0x4734,	// (0x00056d22) grid_toobar_pane

0x09c6,	// (0x00052fb4) cell_toolbar_pane_ParamLimits

0x09c6,	// (0x00052fb4) cell_toolbar_pane

0x4770,	// (0x00056d5e) cell_toolbar_pane_g1_ParamLimits

0x4770,	// (0x00056d5e) cell_toolbar_pane_g1

0x4784,	// (0x00056d72) cell_toolbar_pane_g2_ParamLimits

0x4784,	// (0x00056d72) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00061dd0) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00061dd0) cell_toolbar_pane_g

0x47a6,	// (0x00056d94) grid_highlight_pane_cp2_ParamLimits

0x47a6,	// (0x00056d94) grid_highlight_pane_cp2

0x47c0,	// (0x00056dae) toolbar_button_pane

0x47cc,	// (0x00056dba) toolbar_button_pane_g1

0x47d4,	// (0x00056dc2) toolbar_button_pane_g2

0x47dc,	// (0x00056dca) toolbar_button_pane_g3

0x47e4,	// (0x00056dd2) toolbar_button_pane_g4

0x47ec,	// (0x00056dda) toolbar_button_pane_g5

0x47f4,	// (0x00056de2) toolbar_button_pane_g6

0x47fc,	// (0x00056dea) toolbar_button_pane_g7

0x4804,	// (0x00056df2) toolbar_button_pane_g8

0x480c,	// (0x00056dfa) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00061dd5) toolbar_button_pane_g

0x0a20,	// (0x0005300e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a20,	// (0x0005300e) list_single_2graphic_pane_g1_cp3

0xbae4,	// (0x0005e0d2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbae4,	// (0x0005e0d2) list_single_2graphic_pane_g2_cp3

0x0a3d,	// (0x0005302b) list_single_2graphic_pane_g3_cp3

0x0a45,	// (0x00053033) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a45,	// (0x00053033) list_single_2graphic_pane_g4_cp3

0x0a51,	// (0x0005303f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a51,	// (0x0005303f) list_single_2graphic_pane_t1_cp3

0x0a96,	// (0x00053084) list_single_midp_graphic_pane_g2_ParamLimits

0x0a96,	// (0x00053084) list_single_midp_graphic_pane_g2

0x09ae,	// (0x00052f9c) aid_zoom_text_primary

0x09b6,	// (0x00052fa4) aid_zoom_text_secondary

0x3b84,	// (0x00056172) status_small_pane_g7_ParamLimits

0x3b84,	// (0x00056172) status_small_pane_g7

0x3ba7,	// (0x00056195) status_small_pane_t1_ParamLimits

0xadfe,	// (0x0005d3ec) title_pane_g2

0x0003,

0xf566,	// (0x00061b54) title_pane_g

0xb096,	// (0x0005d684) aid_size_cell_colour_1_pane_ParamLimits

0xb096,	// (0x0005d684) aid_size_cell_colour_1_pane

0xb0aa,	// (0x0005d698) aid_size_cell_colour_2_pane_ParamLimits

0xb0aa,	// (0x0005d698) aid_size_cell_colour_2_pane

0xb0be,	// (0x0005d6ac) aid_size_cell_colour_3_pane_ParamLimits

0xb0be,	// (0x0005d6ac) aid_size_cell_colour_3_pane

0xb0d2,	// (0x0005d6c0) aid_size_cell_colour_4_pane_ParamLimits

0xb0d2,	// (0x0005d6c0) aid_size_cell_colour_4_pane

0x03a2,	// (0x00052990) title_pane_stacon_g1_ParamLimits

0x03a2,	// (0x00052990) title_pane_stacon_g1

0x4e6c,	// (0x0005745a) popup_note_wait_window_g3_ParamLimits

0x4e6c,	// (0x0005745a) popup_note_wait_window_g3

0x4ee3,	// (0x000574d1) popup_note_wait_window_t5_ParamLimits

0x4ee3,	// (0x000574d1) popup_note_wait_window_t5

0xd279,	// (0x0005f867) main_feb_china_hwr_fs_writing_pane

0xc67a,	// (0x0005ec68) popup_feb_china_hwr_fs_window_ParamLimits

0xc67a,	// (0x0005ec68) popup_feb_china_hwr_fs_window

0xbaf5,	// (0x0005e0e3) aid_size_cell_hwr_fs_ParamLimits

0xbaf5,	// (0x0005e0e3) aid_size_cell_hwr_fs

0x48be,	// (0x00056eac) bg_popup_sub_pane_cp3_ParamLimits

0x48be,	// (0x00056eac) bg_popup_sub_pane_cp3

0xbb0a,	// (0x0005e0f8) grid_hwr_fs_pane_ParamLimits

0xbb0a,	// (0x0005e0f8) grid_hwr_fs_pane

0x0ae5,	// (0x000530d3) linegrid_hwr_fs_pane_ParamLimits

0x0ae5,	// (0x000530d3) linegrid_hwr_fs_pane

0xbb22,	// (0x0005e110) cell_hwr_fs_pane_ParamLimits

0xbb22,	// (0x0005e110) cell_hwr_fs_pane

0x48ca,	// (0x00056eb8) linegrid_hwr_fs_pane_g1_ParamLimits

0x48ca,	// (0x00056eb8) linegrid_hwr_fs_pane_g1

0xd150,	// (0x0005f73e) linegrid_hwr_fs_pane_g2_ParamLimits

0xd150,	// (0x0005f73e) linegrid_hwr_fs_pane_g2

0x48e8,	// (0x00056ed6) linegrid_hwr_fs_pane_g3_ParamLimits

0x48e8,	// (0x00056ed6) linegrid_hwr_fs_pane_g3

0x0b19,	// (0x00053107) linegrid_hwr_fs_pane_g4_ParamLimits

0x0b19,	// (0x00053107) linegrid_hwr_fs_pane_g4

0x0b37,	// (0x00053125) linegrid_hwr_fs_pane_g5_ParamLimits

0x0b37,	// (0x00053125) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00061dfb) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00061dfb) linegrid_hwr_fs_pane_g

0x48f4,	// (0x00056ee2) cell_hwr_fs_pane_g1_ParamLimits

0x48f4,	// (0x00056ee2) cell_hwr_fs_pane_g1

0x4641,	// (0x00056c2f) cell_hwr_fs_pane_g2_ParamLimits

0x4641,	// (0x00056c2f) cell_hwr_fs_pane_g2

0xd162,	// (0x0005f750) cell_hwr_fs_pane_g3_ParamLimits

0xd162,	// (0x0005f750) cell_hwr_fs_pane_g3

0xd16f,	// (0x0005f75d) cell_hwr_fs_pane_g4_ParamLimits

0xd16f,	// (0x0005f75d) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00061e06) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00061e06) cell_hwr_fs_pane_g

0xbb48,	// (0x0005e136) cell_hwr_fs_pane_t1

0xd279,	// (0x0005f867) grid_highlight_pane_cp6

0xd279,	// (0x0005f867) main_idle_act2_pane

0x2c2c,	// (0x0005521a) aid_inside_area_popup_secondary

0xd33a,	// (0x0005f928) aid_inside_area_window_primary_ParamLimits

0xd33a,	// (0x0005f928) aid_inside_area_window_primary

0x611e,	// (0x0005870c) ai2_news_ticker_pane

0x6126,	// (0x00058714) aid_size_cell_ai1_link_ParamLimits

0x6126,	// (0x00058714) aid_size_cell_ai1_link

0x6140,	// (0x0005872e) popup_ai2_data_window_ParamLimits

0x6140,	// (0x0005872e) popup_ai2_data_window

0x615e,	// (0x0005874c) popup_ai2_link_window_ParamLimits

0x615e,	// (0x0005874c) popup_ai2_link_window

0x48be,	// (0x00056eac) bg_popup_sub_pane_cp4_ParamLimits

0x48be,	// (0x00056eac) bg_popup_sub_pane_cp4

0x6174,	// (0x00058762) grid_ai2_link_pane_ParamLimits

0x6174,	// (0x00058762) grid_ai2_link_pane

0x618b,	// (0x00058779) popup_ai2_link_window_g1_ParamLimits

0x618b,	// (0x00058779) popup_ai2_link_window_g1

0x6197,	// (0x00058785) popup_ai2_link_window_g2_ParamLimits

0x6197,	// (0x00058785) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00061fd2) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00061fd2) popup_ai2_link_window_g

0x61a8,	// (0x00058796) ai2_mp_button_pane

0x61b0,	// (0x0005879e) ai2_mp_volume_pane

0x4a68,	// (0x00057056) bg_popup_sub_pane_cp5_ParamLimits

0x4a68,	// (0x00057056) bg_popup_sub_pane_cp5

0x61b8,	// (0x000587a6) heading_ai2_gene_pane_ParamLimits

0x61b8,	// (0x000587a6) heading_ai2_gene_pane

0x61c4,	// (0x000587b2) list_ai2_gene_pane_ParamLimits

0x61c4,	// (0x000587b2) list_ai2_gene_pane

0x620c,	// (0x000587fa) cell_ai2_link_pane_ParamLimits

0x620c,	// (0x000587fa) cell_ai2_link_pane

0x6222,	// (0x00058810) cell_ai2_link_pane_g1

0xd279,	// (0x0005f867) grid_highlight_pane_cp7

0x0ef0,	// (0x000534de) ai2_mp_volume_pane_g1

0x62f5,	// (0x000588e3) ai2_mp_volume_pane_g2

0x626a,	// (0x00058858) list_ai2_gene_pane_t1

0x62fd,	// (0x000588eb) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x00061feb) ai2_mp_volume_pane_g

0x0ef8,	// (0x000534e6) volume_small_pane_cp3

0x6305,	// (0x000588f3) aid_size_cell_ai2_button

0x630d,	// (0x000588fb) grid_ai2_button_pane

0x6316,	// (0x00058904) cell_ai2_button_pane_ParamLimits

0x6316,	// (0x00058904) cell_ai2_button_pane

0xd26f,	// (0x0005f85d) cell_ai2_button_pane_g1

0xd279,	// (0x0005f867) grid_highlight_pane_cp8

0x62b5,	// (0x000588a3) ai2_gene_pane_t1_ParamLimits

0x62b5,	// (0x000588a3) ai2_gene_pane_t1

0xc5dc,	// (0x0005ebca) aid_height_parent_landscape

0xd50a,	// (0x0005faf8) aid_height_set_list

0x5bd9,	// (0x000581c7) aid_size_parent

0x5f3f,	// (0x0005852d) aid_size_cell_graphic_pane_ParamLimits

0x61d4,	// (0x000587c2) popup_ai2_data_window_g1_ParamLimits

0x61d4,	// (0x000587c2) popup_ai2_data_window_g1

0x61e0,	// (0x000587ce) ai2_news_ticker_pane_g1

0x61e8,	// (0x000587d6) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00061fd7) ai2_news_ticker_pane_g

0x61f0,	// (0x000587de) ai2_news_ticker_pane_t1

0x61fe,	// (0x000587ec) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x00061fdc) ai2_news_ticker_pane_t

0x622b,	// (0x00058819) heading_ai2_gene_pane_g1

0x6233,	// (0x00058821) heading_ai2_gene_pane_t1_ParamLimits

0x6233,	// (0x00058821) heading_ai2_gene_pane_t1

0x6248,	// (0x00058836) list_highlight_pane_cp6

0x6250,	// (0x0005883e) ai2_gene_pane_ParamLimits

0x6250,	// (0x0005883e) ai2_gene_pane

0x6278,	// (0x00058866) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00061fe1) list_ai2_gene_pane_t

0x6286,	// (0x00058874) list_highlight_pane_cp8_ParamLimits

0x6286,	// (0x00058874) list_highlight_pane_cp8

0x6297,	// (0x00058885) ai2_gene_pane_g1_ParamLimits

0x6297,	// (0x00058885) ai2_gene_pane_g1

0x62a9,	// (0x00058897) ai2_gene_pane_g2_ParamLimits

0x62a9,	// (0x00058897) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00061fe6) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00061fe6) ai2_gene_pane_g

0x29a4,	// (0x00054f92) scroll_pane_cp12

0xbaa3,	// (0x0005e091) control_pane_t3_ParamLimits

0xbaa3,	// (0x0005e091) control_pane_t3

0x3b98,	// (0x00056186) status_small_pane_g8_ParamLimits

0x3b98,	// (0x00056186) status_small_pane_g8

0xc71c,	// (0x0005ed0a) popup_find_window_ParamLimits

0xc9c9,	// (0x0005efb7) popup_note_image_window_ParamLimits

0x09f6,	// (0x00052fe4) list_double2_graphic_pane_vc_g1_ParamLimits

0x09f6,	// (0x00052fe4) list_double2_graphic_pane_vc_g1

0x3882,	// (0x00055e70) list_double2_graphic_pane_vc_g2_ParamLimits

0x3882,	// (0x00055e70) list_double2_graphic_pane_vc_g2

0x2e28,	// (0x00055416) list_double2_graphic_pane_vc_g3_ParamLimits

0x2e28,	// (0x00055416) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00061dc9) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00061dc9) list_double2_graphic_pane_vc_g

0x0a02,	// (0x00052ff0) list_double2_graphic_pane_vc_t1_ParamLimits

0x0a02,	// (0x00052ff0) list_double2_graphic_pane_vc_t1

0x3882,	// (0x00055e70) list_single_heading_pane_vc_g1_ParamLimits

0x3882,	// (0x00055e70) list_single_heading_pane_vc_g1

0x2e28,	// (0x00055416) list_single_heading_pane_vc_g2_ParamLimits

0x2e28,	// (0x00055416) list_single_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_single_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_single_heading_pane_vc_g

0x0a6c,	// (0x0005305a) list_single_heading_pane_vc_t1_ParamLimits

0x0a6c,	// (0x0005305a) list_single_heading_pane_vc_t1

0x0a84,	// (0x00053072) list_single_heading_pane_vc_t2_ParamLimits

0x0a84,	// (0x00053072) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00061dea) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00061dea) list_single_heading_pane_vc_t

0x4814,	// (0x00056e02) list_setting_number_pane_vc_g1_ParamLimits

0x4814,	// (0x00056e02) list_setting_number_pane_vc_g1

0x4820,	// (0x00056e0e) list_setting_number_pane_vc_g2_ParamLimits

0x4820,	// (0x00056e0e) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00061def) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00061def) list_setting_number_pane_vc_g

0x482c,	// (0x00056e1a) list_setting_number_pane_vc_t1_ParamLimits

0x482c,	// (0x00056e1a) list_setting_number_pane_vc_t1

0x4840,	// (0x00056e2e) list_setting_number_pane_vc_t2_ParamLimits

0x4840,	// (0x00056e2e) list_setting_number_pane_vc_t2

0x485c,	// (0x00056e4a) list_setting_number_pane_vc_t3_ParamLimits

0x485c,	// (0x00056e4a) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00061df4) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00061df4) list_setting_number_pane_vc_t

0x4884,	// (0x00056e72) set_value_pane_vc_ParamLimits

0x4884,	// (0x00056e72) set_value_pane_vc

0x5dd1,	// (0x000583bf) list_double2_graphic_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double2_graphic_pane_vc

0x5dd1,	// (0x000583bf) list_double2_large_graphic_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double2_large_graphic_pane_vc

0x5dd1,	// (0x000583bf) list_double2_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double2_pane_vc

0x5dd1,	// (0x000583bf) list_double_graphic_heading_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_graphic_heading_pane_vc

0x5dd1,	// (0x000583bf) list_double_graphic_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_graphic_pane_vc

0x5dd1,	// (0x000583bf) list_double_heading_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_heading_pane_vc

0x5dd1,	// (0x000583bf) list_double_large_graphic_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_large_graphic_pane_vc

0x5dd1,	// (0x000583bf) list_double_number_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_number_pane_vc

0x5dd1,	// (0x000583bf) list_double_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_pane_vc

0x5dd1,	// (0x000583bf) list_double_time_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_double_time_pane_vc

0x5dd1,	// (0x000583bf) list_setting_number_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_setting_number_pane_vc

0x5dd1,	// (0x000583bf) list_setting_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_setting_pane_vc

0x5dd1,	// (0x000583bf) list_single_graphic_heading_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_single_graphic_heading_pane_vc

0x5dd1,	// (0x000583bf) list_single_heading_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_single_heading_pane_vc

0x5dd1,	// (0x000583bf) list_single_number_heading_pane_vc_ParamLimits

0x5dd1,	// (0x000583bf) list_single_number_heading_pane_vc

0x09f6,	// (0x00052fe4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x09f6,	// (0x00052fe4) list_double_graphic_heading_pane_vc_g1

0x2e60,	// (0x0005544e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2e60,	// (0x0005544e) list_double_graphic_heading_pane_vc_g2

0x2e6c,	// (0x0005545a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2e6c,	// (0x0005545a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x00061ff2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00061ff2) list_double_graphic_heading_pane_vc_g

0x0f01,	// (0x000534ef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0f01,	// (0x000534ef) list_double_graphic_heading_pane_vc_t1

0x0a6c,	// (0x0005305a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0a6c,	// (0x0005305a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00061ff9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00061ff9) list_double_graphic_heading_pane_vc_t

0x4814,	// (0x00056e02) list_setting_pane_vc_g1_ParamLimits

0x4814,	// (0x00056e02) list_setting_pane_vc_g1

0x4820,	// (0x00056e0e) list_setting_pane_vc_g2_ParamLimits

0x4820,	// (0x00056e0e) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00061def) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00061def) list_setting_pane_vc_g

0x6552,	// (0x00058b40) list_setting_pane_vc_t1_ParamLimits

0x6552,	// (0x00058b40) list_setting_pane_vc_t1

0x6566,	// (0x00058b54) list_setting_pane_vc_t2_ParamLimits

0x6566,	// (0x00058b54) list_setting_pane_vc_t2

0x0001,

0xfa4e,	// (0x0006203c) list_setting_pane_vc_t_ParamLimits

0xfa4e,	// (0x0006203c) list_setting_pane_vc_t

0x4884,	// (0x00056e72) set_value_pane_cp_vc_ParamLimits

0x4884,	// (0x00056e72) set_value_pane_cp_vc

0x3882,	// (0x00055e70) list_single_number_heading_pane_vc_g1_ParamLimits

0x3882,	// (0x00055e70) list_single_number_heading_pane_vc_g1

0x2e28,	// (0x00055416) list_single_number_heading_pane_vc_g2_ParamLimits

0x2e28,	// (0x00055416) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_single_number_heading_pane_vc_g

0x0a6c,	// (0x0005305a) list_single_number_heading_pane_vc_t1_ParamLimits

0x0a6c,	// (0x0005305a) list_single_number_heading_pane_vc_t1

0x0f13,	// (0x00053501) list_single_number_heading_pane_vc_t2_ParamLimits

0x0f13,	// (0x00053501) list_single_number_heading_pane_vc_t2

0x0f25,	// (0x00053513) list_single_number_heading_pane_vc_t3_ParamLimits

0x0f25,	// (0x00053513) list_single_number_heading_pane_vc_t3

0x0002,

0xfa53,	// (0x00062041) list_single_number_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x00062041) list_single_number_heading_pane_vc_t

0x09f6,	// (0x00052fe4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x09f6,	// (0x00052fe4) list_single_graphic_heading_pane_vc_g1

0x3882,	// (0x00055e70) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3882,	// (0x00055e70) list_single_graphic_heading_pane_vc_g4

0x2e28,	// (0x00055416) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2e28,	// (0x00055416) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00061dc9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00061dc9) list_single_graphic_heading_pane_vc_g

0x0a6c,	// (0x0005305a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0a6c,	// (0x0005305a) list_single_graphic_heading_pane_vc_t1

0x0f37,	// (0x00053525) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0f37,	// (0x00053525) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00062048) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00062048) list_single_graphic_heading_pane_vc_t

0x3882,	// (0x00055e70) list_double2_pane_vc_g1_ParamLimits

0x3882,	// (0x00055e70) list_double2_pane_vc_g1

0x2e28,	// (0x00055416) list_double2_pane_vc_g2_ParamLimits

0x2e28,	// (0x00055416) list_double2_pane_vc_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_double2_pane_vc_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_double2_pane_vc_g

0x0f49,	// (0x00053537) list_double2_pane_vc_t1_ParamLimits

0x0f49,	// (0x00053537) list_double2_pane_vc_t1

0x2e78,	// (0x00055466) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2e78,	// (0x00055466) list_double2_large_graphic_pane_vc_g1

0x3882,	// (0x00055e70) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3882,	// (0x00055e70) list_double2_large_graphic_pane_vc_g2

0x2e28,	// (0x00055416) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2e28,	// (0x00055416) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf602,	// (0x00061bf0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf602,	// (0x00061bf0) list_double2_large_graphic_pane_vc_g

0x0f5f,	// (0x0005354d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0f5f,	// (0x0005354d) list_double2_large_graphic_pane_vc_t1

0x2e84,	// (0x00055472) list_double_time_pane_vc_g1_ParamLimits

0x2e84,	// (0x00055472) list_double_time_pane_vc_g1

0x2e90,	// (0x0005547e) list_double_time_pane_vc_g2_ParamLimits

0x2e90,	// (0x0005547e) list_double_time_pane_vc_g2

0x0001,

0xfa5f,	// (0x0006204d) list_double_time_pane_vc_g_ParamLimits

0xfa5f,	// (0x0006204d) list_double_time_pane_vc_g

0x0f75,	// (0x00053563) list_double_time_pane_vc_t1_ParamLimits

0x0f75,	// (0x00053563) list_double_time_pane_vc_t1

0x0f90,	// (0x0005357e) list_double_time_pane_vc_t2_ParamLimits

0x0f90,	// (0x0005357e) list_double_time_pane_vc_t2

0x0fce,	// (0x000535bc) list_double_time_pane_vc_t3_ParamLimits

0x0fce,	// (0x000535bc) list_double_time_pane_vc_t3

0x0fe6,	// (0x000535d4) list_double_time_pane_vc_t4_ParamLimits

0x0fe6,	// (0x000535d4) list_double_time_pane_vc_t4

0x0003,

0xfa64,	// (0x00062052) list_double_time_pane_vc_t_ParamLimits

0xfa64,	// (0x00062052) list_double_time_pane_vc_t

0x3882,	// (0x00055e70) list_double_pane_vc_g1_ParamLimits

0x3882,	// (0x00055e70) list_double_pane_vc_g1

0x2e28,	// (0x00055416) list_double_pane_vc_g2_ParamLimits

0x2e28,	// (0x00055416) list_double_pane_vc_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_double_pane_vc_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_double_pane_vc_g

0x0ffa,	// (0x000535e8) list_double_pane_vc_t1_ParamLimits

0x0ffa,	// (0x000535e8) list_double_pane_vc_t1

0x100e,	// (0x000535fc) list_double_pane_vc_t2_ParamLimits

0x100e,	// (0x000535fc) list_double_pane_vc_t2

0x0001,

0xfa6d,	// (0x0006205b) list_double_pane_vc_t_ParamLimits

0xfa6d,	// (0x0006205b) list_double_pane_vc_t

0x3882,	// (0x00055e70) list_double_number_pane_vc_g1_ParamLimits

0x3882,	// (0x00055e70) list_double_number_pane_vc_g1

0x2e28,	// (0x00055416) list_double_number_pane_vc_g2_ParamLimits

0x2e28,	// (0x00055416) list_double_number_pane_vc_g2

0x0001,

0xf5ea,	// (0x00061bd8) list_double_number_pane_vc_g_ParamLimits

0xf5ea,	// (0x00061bd8) list_double_number_pane_vc_g

0x1024,	// (0x00053612) list_double_number_pane_vc_t1_ParamLimits

0x1024,	// (0x00053612) list_double_number_pane_vc_t1

0x1038,	// (0x00053626) list_double_number_pane_vc_t2_ParamLimits

0x1038,	// (0x00053626) list_double_number_pane_vc_t2

0x100e,	// (0x000535fc) list_double_number_pane_vc_t3_ParamLimits

0x100e,	// (0x000535fc) list_double_number_pane_vc_t3

0x0002,

0xfa72,	// (0x00062060) list_double_number_pane_vc_t_ParamLimits

0xfa72,	// (0x00062060) list_double_number_pane_vc_t

0x2e9c,	// (0x0005548a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2e9c,	// (0x0005548a) list_double_large_graphic_pane_vc_g1

0x2ea8,	// (0x00055496) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2ea8,	// (0x00055496) list_double_large_graphic_pane_vc_g2

0x2e28,	// (0x00055416) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2e28,	// (0x00055416) list_double_large_graphic_pane_vc_g3

0x104c,	// (0x0005363a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x104c,	// (0x0005363a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa79,	// (0x00062067) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x00062067) list_double_large_graphic_pane_vc_g

0x1058,	// (0x00053646) list_double_large_graphic_pane_vc_t1_ParamLimits

0x1058,	// (0x00053646) list_double_large_graphic_pane_vc_t1

0x106c,	// (0x0005365a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x106c,	// (0x0005365a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x00062070) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x00062070) list_double_large_graphic_pane_vc_t

0x2e60,	// (0x0005544e) list_double_heading_pane_vc_g1_ParamLimits

0x2e60,	// (0x0005544e) list_double_heading_pane_vc_g1

0x2e6c,	// (0x0005545a) list_double_heading_pane_vc_g2_ParamLimits

0x2e6c,	// (0x0005545a) list_double_heading_pane_vc_g2

0x0001,

0xfa87,	// (0x00062075) list_double_heading_pane_vc_g_ParamLimits

0xfa87,	// (0x00062075) list_double_heading_pane_vc_g

0x1083,	// (0x00053671) list_double_heading_pane_vc_t1_ParamLimits

0x1083,	// (0x00053671) list_double_heading_pane_vc_t1

0x0a6c,	// (0x0005305a) list_double_heading_pane_vc_t2_ParamLimits

0x0a6c,	// (0x0005305a) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0006207a) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0006207a) list_double_heading_pane_vc_t

0x09f6,	// (0x00052fe4) list_double_graphic_pane_vc_g1_ParamLimits

0x09f6,	// (0x00052fe4) list_double_graphic_pane_vc_g1

0x2eb7,	// (0x000554a5) list_double_graphic_pane_vc_g2_ParamLimits

0x2eb7,	// (0x000554a5) list_double_graphic_pane_vc_g2

0x2ec6,	// (0x000554b4) list_double_graphic_pane_vc_g3_ParamLimits

0x2ec6,	// (0x000554b4) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0006207f) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0006207f) list_double_graphic_pane_vc_g

0x1095,	// (0x00053683) list_double_graphic_pane_vc_t1_ParamLimits

0x1095,	// (0x00053683) list_double_graphic_pane_vc_t1

0x100e,	// (0x000535fc) list_double_graphic_pane_vc_t2_ParamLimits

0x100e,	// (0x000535fc) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x00062086) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x00062086) list_double_graphic_pane_vc_t

0xf0c4,	// (0x000616b2) aid_size_cell_fastswap

0xac46,	// (0x0005d234) aid_size_cell_touch_ParamLimits

0xac46,	// (0x0005d234) aid_size_cell_touch

0xf24b,	// (0x00061839) popup_fast_swap_wide_window_ParamLimits

0xf24b,	// (0x00061839) popup_fast_swap_wide_window

0xad95,	// (0x0005d383) touch_pane_ParamLimits

0xad95,	// (0x0005d383) touch_pane

0x2aa6,	// (0x00055094) button_value_adjust_pane_cp2

0x0122,	// (0x00052710) button_value_adjust_pane_cp4

0x014a,	// (0x00052738) form_field_data_pane_cp2

0xb679,	// (0x0005dc67) form_field_data_wide_pane_cp2

0x310d,	// (0x000556fb) bg_scroll_pane_ParamLimits

0x0507,	// (0x00052af5) scroll_handle_pane_ParamLimits

0x051b,	// (0x00052b09) scroll_sc2_down_pane_ParamLimits

0x051b,	// (0x00052b09) scroll_sc2_down_pane

0x313e,	// (0x0005572c) scroll_sc2_up_pane_ParamLimits

0x313e,	// (0x0005572c) scroll_sc2_up_pane

0xd8be,	// (0x0005feac) grid_wheel_folder_pane_g1_ParamLimits

0xd8be,	// (0x0005feac) grid_wheel_folder_pane_g1

0x0753,	// (0x00052d41) clock_nsta_pane_cp2_ParamLimits

0x0753,	// (0x00052d41) clock_nsta_pane_cp2

0xc4f1,	// (0x0005eadf) listscroll_midp_pane_ParamLimits

0xc502,	// (0x0005eaf0) midp_canvas_pane

0x3c13,	// (0x00056201) nsta_clock_indic_pane

0x3c61,	// (0x0005624f) listscroll_form_pane_vc

0x3c7d,	// (0x0005626b) listscroll_set_pane_vc_ParamLimits

0x3c7d,	// (0x0005626b) listscroll_set_pane_vc

0xce43,	// (0x0005f431) clock_nsta_pane

0xce6d,	// (0x0005f45b) indicator_nsta_pane

0x470a,	// (0x00056cf8) bg_popup_sub_pane_cp2_ParamLimits

0x471e,	// (0x00056d0c) find_pane_cp2_ParamLimits

0x471e,	// (0x00056d0c) find_pane_cp2

0x4734,	// (0x00056d22) grid_toobar_pane_ParamLimits

0x4892,	// (0x00056e80) list_form_gen_pane_vc_ParamLimits

0x4892,	// (0x00056e80) list_form_gen_pane_vc

0x48a8,	// (0x00056e96) scroll_pane_cp8_vc_ParamLimits

0x48a8,	// (0x00056e96) scroll_pane_cp8_vc

0x4924,	// (0x00056f12) data_form_wide_pane_vc_ParamLimits

0x4924,	// (0x00056f12) data_form_wide_pane_vc

0x4930,	// (0x00056f1e) form_field_data_wide_pane_vc_g1

0x4938,	// (0x00056f26) form_field_data_wide_pane_vc_t1_ParamLimits

0x4938,	// (0x00056f26) form_field_data_wide_pane_vc_t1

0x2aba,	// (0x000550a8) input_focus_pane_cp6_vc_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_cp6_vc

0xd2de,	// (0x0005f8cc) list_midp_pane_ParamLimits

0x5fab,	// (0x00058599) scroll_pane_cp16_ParamLimits

0x5fab,	// (0x00058599) scroll_pane_cp16

0x4c40,	// (0x0005722e) button_value_adjust_pane_ParamLimits

0x4c40,	// (0x0005722e) button_value_adjust_pane

0xd51b,	// (0x0005fb09) button_value_adjust_pane_cp6_ParamLimits

0xd51b,	// (0x0005fb09) button_value_adjust_pane_cp6

0xd65d,	// (0x0005fc4b) settings_code_pane_cp_ParamLimits

0xd65d,	// (0x0005fc4b) settings_code_pane_cp

0xd26f,	// (0x0005f85d) cell_touch_pane_g1

0xd26f,	// (0x0005f85d) cell_touch_pane_g2

0x0001,

0xf720,	// (0x00061d0e) cell_touch_pane_g

0xd793,	// (0x0005fd81) cell_touch_pane_cp_ParamLimits

0xd793,	// (0x0005fd81) cell_touch_pane_cp

0xd7af,	// (0x0005fd9d) cell_touch_pane_ParamLimits

0xd7af,	// (0x0005fd9d) cell_touch_pane

0xd26f,	// (0x0005f85d) scroll_sc2_down_pane_g1

0xd26f,	// (0x0005f85d) scroll_sc2_up_pane_g1

0xd279,	// (0x0005f867) bg_set_opt_pane_cp4_vc

0x6349,	// (0x00058937) list_set_graphic_pane_vc_g1_ParamLimits

0x6349,	// (0x00058937) list_set_graphic_pane_vc_g1

0x6355,	// (0x00058943) list_set_graphic_pane_vc_g2_ParamLimits

0x6355,	// (0x00058943) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x00061ffe) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x00061ffe) list_set_graphic_pane_vc_g

0x6361,	// (0x0005894f) text_primary_small_cp13_vc_ParamLimits

0x6361,	// (0x0005894f) text_primary_small_cp13_vc

0x6379,	// (0x00058967) list_set_graphic_pane_vc_ParamLimits

0x6379,	// (0x00058967) list_set_graphic_pane_vc

0xd279,	// (0x0005f867) input_focus_pane_cp2_vc

0xd26f,	// (0x0005f85d) setting_code_pane_vc_g1

0x638d,	// (0x0005897b) setting_code_pane_vc_t1

0x639b,	// (0x00058989) set_text_pane_vc_t1_ParamLimits

0x639b,	// (0x00058989) set_text_pane_vc_t1

0xd279,	// (0x0005f867) input_focus_pane_cp1_vc

0x63b9,	// (0x000589a7) list_set_text_pane_vc

0xd26f,	// (0x0005f85d) setting_text_pane_vc_g1

0xd279,	// (0x0005f867) bg_set_opt_pane_cp2_vc

0x63c3,	// (0x000589b1) setting_slider_graphic_pane_vc_g1

0x63cb,	// (0x000589b9) setting_slider_graphic_pane_vc_t1

0x63d9,	// (0x000589c7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x00062003) setting_slider_graphic_pane_vc_t

0x63e7,	// (0x000589d5) slider_set_pane_cp_vc

0x63ef,	// (0x000589dd) slider_set_pane_vc_g1

0x63f8,	// (0x000589e6) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x00062008) slider_set_pane_vc_g

0x2b21,	// (0x0005510f) set_opt_bg_pane_g1_copy1

0x2b29,	// (0x00055117) set_opt_bg_pane_g2_copy1

0x6424,	// (0x00058a12) set_opt_bg_pane_g3_copy1

0x2b39,	// (0x00055127) set_opt_bg_pane_g4_copy1

0x2b41,	// (0x0005512f) set_opt_bg_pane_g5_copy1

0x2b49,	// (0x00055137) set_opt_bg_pane_g6_copy1

0x642e,	// (0x00058a1c) set_opt_bg_pane_g7_copy1

0x6438,	// (0x00058a26) set_opt_bg_pane_g8_copy1

0x6442,	// (0x00058a30) set_opt_bg_pane_g9_copy1

0xd279,	// (0x0005f867) bg_set_opt_pane_cp_vc

0x644c,	// (0x00058a3a) setting_slider_pane_vc_t1

0x63cb,	// (0x000589b9) setting_slider_pane_vc_t2

0x63d9,	// (0x000589c7) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x00062017) setting_slider_pane_vc_t

0x63e7,	// (0x000589d5) slider_set_pane_vc

0x0b7c,	// (0x0005316a) volume_set_pane_vc_g1

0x0b85,	// (0x00053173) volume_set_pane_vc_g2

0x0b8e,	// (0x0005317c) volume_set_pane_vc_g3

0x0b97,	// (0x00053185) volume_set_pane_vc_g4

0x0ba0,	// (0x0005318e) volume_set_pane_vc_g5

0x0ba9,	// (0x00053197) volume_set_pane_vc_g6

0x0bb2,	// (0x000531a0) volume_set_pane_vc_g7

0x0bbb,	// (0x000531a9) volume_set_pane_vc_g8

0x0bc4,	// (0x000531b2) volume_set_pane_vc_g9

0x0bcd,	// (0x000531bb) volume_set_pane_vc_g10

0x0009,

0xfa30,	// (0x0006201e) volume_set_pane_vc_g

0x645b,	// (0x00058a49) volume_set_pane_vc

0x6463,	// (0x00058a51) button_value_adjust_pane_cp1_vc

0x646d,	// (0x00058a5b) list_highlight_pane_cp2_vc

0x6476,	// (0x00058a64) list_set_pane_vc_ParamLimits

0x6476,	// (0x00058a64) list_set_pane_vc

0x64e0,	// (0x00058ace) main_pane_set_vc_t1_ParamLimits

0x64e0,	// (0x00058ace) main_pane_set_vc_t1

0x64f5,	// (0x00058ae3) main_pane_set_vc_t2_ParamLimits

0x64f5,	// (0x00058ae3) main_pane_set_vc_t2

0x6507,	// (0x00058af5) main_pane_set_vc_t3_ParamLimits

0x6507,	// (0x00058af5) main_pane_set_vc_t3

0x651b,	// (0x00058b09) main_pane_set_vc_t4_ParamLimits

0x651b,	// (0x00058b09) main_pane_set_vc_t4

0x0003,

0xfa45,	// (0x00062033) main_pane_set_vc_t_ParamLimits

0xfa45,	// (0x00062033) main_pane_set_vc_t

0x652f,	// (0x00058b1d) setting_code_pane_vc_ParamLimits

0x652f,	// (0x00058b1d) setting_code_pane_vc

0x6540,	// (0x00058b2e) setting_slider_graphic_pane_vc

0x6540,	// (0x00058b2e) setting_slider_pane_vc

0x6540,	// (0x00058b2e) setting_text_pane_vc

0x6540,	// (0x00058b2e) setting_volume_pane_vc

0x654a,	// (0x00058b38) scroll_pane_cp121_vc

0x2a94,	// (0x00055082) set_content_pane_vc

0x6588,	// (0x00058b76) button_value_adjust_pane_g1

0x6591,	// (0x00058b7f) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0006208b) button_value_adjust_pane_g

0x659a,	// (0x00058b88) form_field_slider_wide_pane_vc_t1_ParamLimits

0x659a,	// (0x00058b88) form_field_slider_wide_pane_vc_t1

0x65ae,	// (0x00058b9c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x65ae,	// (0x00058b9c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x00062090) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x00062090) form_field_slider_wide_pane_vc_t

0x2403,	// (0x000549f1) input_focus_pane_cp10_vc_ParamLimits

0x2403,	// (0x000549f1) input_focus_pane_cp10_vc

0x65c0,	// (0x00058bae) slider_cont_pane_cp1_vc_ParamLimits

0x65c0,	// (0x00058bae) slider_cont_pane_cp1_vc

0x63ef,	// (0x000589dd) slider_form_pane_g1_cp2

0x63f8,	// (0x000589e6) slider_form_pane_g2_cp2

0x65d9,	// (0x00058bc7) form_field_slider_pane_vc_t3

0x65e7,	// (0x00058bd5) form_field_slider_pane_vc_t4

0x65f5,	// (0x00058be3) slider_form_pane_vc_ParamLimits

0x65f5,	// (0x00058be3) slider_form_pane_vc

0x6602,	// (0x00058bf0) form_field_slider_pane_vc_t1_ParamLimits

0x6602,	// (0x00058bf0) form_field_slider_pane_vc_t1

0x65ae,	// (0x00058b9c) form_field_slider_pane_vc_t2_ParamLimits

0x65ae,	// (0x00058b9c) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x000620a0) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x000620a0) form_field_slider_pane_vc_t

0x2403,	// (0x000549f1) input_focus_pane_cp9_vc_ParamLimits

0x2403,	// (0x000549f1) input_focus_pane_cp9_vc

0x661e,	// (0x00058c0c) slider_cont_pane_vc_ParamLimits

0x661e,	// (0x00058c0c) slider_cont_pane_vc

0x6630,	// (0x00058c1e) list_form_graphic_pane_cp_vc_ParamLimits

0x6630,	// (0x00058c1e) list_form_graphic_pane_cp_vc

0x4930,	// (0x00056f1e) form_field_popup_wide_pane_vc_g1

0x6645,	// (0x00058c33) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6645,	// (0x00058c33) form_field_popup_wide_pane_vc_t1

0x2aba,	// (0x000550a8) input_focus_pane_cp8_vc_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_cp8_vc

0x665c,	// (0x00058c4a) list_form_wide_pane_vc_ParamLimits

0x665c,	// (0x00058c4a) list_form_wide_pane_vc

0x6668,	// (0x00058c56) list_form_graphic_pane_vc_g1

0x6670,	// (0x00058c5e) list_form_graphic_pane_vc_t1_ParamLimits

0x6670,	// (0x00058c5e) list_form_graphic_pane_vc_t1

0x2187,	// (0x00054775) list_highlight_pane_cp5_vc_ParamLimits

0x2187,	// (0x00054775) list_highlight_pane_cp5_vc

0x668c,	// (0x00058c7a) list_form_graphic_pane_vc_ParamLimits

0x668c,	// (0x00058c7a) list_form_graphic_pane_vc

0x4930,	// (0x00056f1e) form_field_popup_pane_vc_g1

0x66a2,	// (0x00058c90) form_field_popup_pane_vc_t1_ParamLimits

0x66a2,	// (0x00058c90) form_field_popup_pane_vc_t1

0x2aba,	// (0x000550a8) input_focus_pane_cp7_vc_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_cp7_vc

0x66b9,	// (0x00058ca7) list_form_pane_vc_ParamLimits

0x66b9,	// (0x00058ca7) list_form_pane_vc

0x66c5,	// (0x00058cb3) data_form_pane_vc_t1_ParamLimits

0x66c5,	// (0x00058cb3) data_form_pane_vc_t1

0x2b21,	// (0x0005510f) input_focus_pane_vc_g1

0x2b29,	// (0x00055117) input_focus_pane_vc_g2

0x2b31,	// (0x0005511f) input_focus_pane_vc_g3

0x2b39,	// (0x00055127) input_focus_pane_vc_g4

0x2b41,	// (0x0005512f) input_focus_pane_vc_g5

0x2b49,	// (0x00055137) input_focus_pane_vc_g6

0x2b51,	// (0x0005513f) input_focus_pane_vc_g7

0x2b59,	// (0x00055147) input_focus_pane_vc_g8

0x2b61,	// (0x0005514f) input_focus_pane_vc_g9

0xd26f,	// (0x0005f85d) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x00061c97) input_focus_pane_vc_g

0x4924,	// (0x00056f12) data_form_pane_vc_ParamLimits

0x4924,	// (0x00056f12) data_form_pane_vc

0x4930,	// (0x00056f1e) form_field_data_pane_vc_g1

0x66e2,	// (0x00058cd0) form_field_data_pane_vc_t1_ParamLimits

0x66e2,	// (0x00058cd0) form_field_data_pane_vc_t1

0x2aba,	// (0x000550a8) input_focus_pane_vc_ParamLimits

0x2aba,	// (0x000550a8) input_focus_pane_vc

0x66fc,	// (0x00058cea) button_value_adjust_pane_cp3_vc

0x6704,	// (0x00058cf2) button_value_adjust_pane_cp5_vc

0x670c,	// (0x00058cfa) form_field_data_pane_vc_ParamLimits

0x670c,	// (0x00058cfa) form_field_data_pane_vc

0x6727,	// (0x00058d15) form_field_data_pane_vc_cp2

0x672f,	// (0x00058d1d) form_field_data_wide_pane_vc_ParamLimits

0x672f,	// (0x00058d1d) form_field_data_wide_pane_vc

0x6749,	// (0x00058d37) form_field_data_wide_pane_vc_cp2

0x6751,	// (0x00058d3f) form_field_popup_pane_vc_ParamLimits

0x6751,	// (0x00058d3f) form_field_popup_pane_vc

0x676c,	// (0x00058d5a) form_field_popup_wide_pane_vc_ParamLimits

0x676c,	// (0x00058d5a) form_field_popup_wide_pane_vc

0x6786,	// (0x00058d74) form_field_slider_pane_vc_ParamLimits

0x6786,	// (0x00058d74) form_field_slider_pane_vc

0x6799,	// (0x00058d87) form_field_slider_wide_pane_vc_ParamLimits

0x6799,	// (0x00058d87) form_field_slider_wide_pane_vc

0xd7cd,	// (0x0005fdbb) grid_touch_1_pane_ParamLimits

0xd7cd,	// (0x0005fdbb) grid_touch_1_pane

0xd7e1,	// (0x0005fdcf) grid_touch_2_pane_ParamLimits

0xd7e1,	// (0x0005fdcf) grid_touch_2_pane

0x6870,	// (0x00058e5e) touch_pane_g1_ParamLimits

0x6870,	// (0x00058e5e) touch_pane_g1

0x67d2,	// (0x00058dc0) cell_app_pane_cp_wide_ParamLimits

0x67d2,	// (0x00058dc0) cell_app_pane_cp_wide

0x67e3,	// (0x00058dd1) grid_popup_fast_wide_pane_ParamLimits

0x67e3,	// (0x00058dd1) grid_popup_fast_wide_pane

0x67f7,	// (0x00058de5) scroll_pane_cp19_ParamLimits

0x67f7,	// (0x00058de5) scroll_pane_cp19

0xd279,	// (0x0005f867) bg_popup_window_pane_cp20

0x680b,	// (0x00058df9) listscroll_popup_fast_wide_pane

0x2c99,	// (0x00055287) grid_indicator_nsta_pane

0x6813,	// (0x00058e01) clock_nsta_pane_g1

0x681c,	// (0x00058e0a) clock_nsta_pane_t1

0xd80d,	// (0x0005fdfb) cell_indicator_nsta_pane_ParamLimits

0xd80d,	// (0x0005fdfb) cell_indicator_nsta_pane

0x6870,	// (0x00058e5e) cell_indicator_nsta_pane_g1

0xd82a,	// (0x0005fe18) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x000620aa) cell_indicator_nsta_pane_g

0x6894,	// (0x00058e82) clock_nsta_pane_cp

0x689c,	// (0x00058e8a) indicator_nsta_pane_cp

0x68a4,	// (0x00058e92) nsta_clock_indic_pane_g1

0x2253,	// (0x00054841) grid_indicator_pane

0x3230,	// (0x0005581e) scroll_pane_cp29

0x069f,	// (0x00052c8d) indicator_nsta_pane_cp2_ParamLimits

0x069f,	// (0x00052c8d) indicator_nsta_pane_cp2

0x2187,	// (0x00054775) main_apps_wheel_pane

0x4ac3,	// (0x000570b1) form_midp_field_text_pane_ParamLimits

0x4c12,	// (0x00057200) scroll_bar_cp050_ParamLimits

0x690d,	// (0x00058efb) cell_indicator_pane_ParamLimits

0x690d,	// (0x00058efb) cell_indicator_pane

0x6925,	// (0x00058f13) cell_indicator_pane_g1

0xd840,	// (0x0005fe2e) grid_wheel_folder_pane_ParamLimits

0xd840,	// (0x0005fe2e) grid_wheel_folder_pane

0xd84e,	// (0x0005fe3c) list_wheel_apps_pane_ParamLimits

0xd84e,	// (0x0005fe3c) list_wheel_apps_pane

0xd85c,	// (0x0005fe4a) main_apps_wheel_pane_g1_ParamLimits

0xd85c,	// (0x0005fe4a) main_apps_wheel_pane_g1

0xd86c,	// (0x0005fe5a) main_apps_wheel_pane_g2_ParamLimits

0xd86c,	// (0x0005fe5a) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x000620c6) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x000620c6) main_apps_wheel_pane_g

0xd87c,	// (0x0005fe6a) main_apps_wheel_pane_t1_ParamLimits

0xd87c,	// (0x0005fe6a) main_apps_wheel_pane_t1

0xd894,	// (0x0005fe82) list_wheel_apps_pane_g1

0xd89c,	// (0x0005fe8a) list_wheel_apps_pane_g2

0xd8a4,	// (0x0005fe92) list_wheel_apps_pane_g3

0xd8ac,	// (0x0005fe9a) list_wheel_apps_pane_g4

0xd8b4,	// (0x0005fea2) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x000620cb) list_wheel_apps_pane_g

0x378d,	// (0x00055d7b) navi_icon_text_pane

0xcd37,	// (0x0005f325) aid_fill_nsta

0xd8d1,	// (0x0005febf) navi_icon_text_pane_g1

0xd8dd,	// (0x0005fecb) navi_icon_text_pane_t1

0xc4d9,	// (0x0005eac7) list_set_graphic_pane_t1_ParamLimits

0xc4d9,	// (0x0005eac7) list_set_graphic_pane_t1

0x5363,	// (0x00057951) popup_midp_note_alarm_window_t6_ParamLimits

0x5363,	// (0x00057951) popup_midp_note_alarm_window_t6

0x5375,	// (0x00057963) popup_midp_note_alarm_window_t7_ParamLimits

0x5375,	// (0x00057963) popup_midp_note_alarm_window_t7

0x5387,	// (0x00057975) popup_midp_note_alarm_window_t8_ParamLimits

0x5387,	// (0x00057975) popup_midp_note_alarm_window_t8

0x5399,	// (0x00057987) popup_midp_note_alarm_window_t9_ParamLimits

0x5399,	// (0x00057987) popup_midp_note_alarm_window_t9

0x53ab,	// (0x00057999) popup_midp_note_alarm_window_t10_ParamLimits

0x53ab,	// (0x00057999) popup_midp_note_alarm_window_t10

0x53bd,	// (0x000579ab) popup_midp_note_alarm_window_t11_ParamLimits

0x53bd,	// (0x000579ab) popup_midp_note_alarm_window_t11

0x53cf,	// (0x000579bd) scroll_pane_cp17_ParamLimits

0x53cf,	// (0x000579bd) scroll_pane_cp17

0x0b7c,	// (0x0005316a) volume_small_pane_cp_g1

0x10a9,	// (0x00053697) volume_small_pane_cp_g2

0x10b2,	// (0x000536a0) volume_small_pane_cp_g3

0x10bb,	// (0x000536a9) volume_small_pane_cp_g4

0x10c4,	// (0x000536b2) volume_small_pane_cp_g5

0x10cd,	// (0x000536bb) volume_small_pane_cp_g6

0x10d6,	// (0x000536c4) volume_small_pane_cp_g7

0x10df,	// (0x000536cd) volume_small_pane_cp_g8

0x10e8,	// (0x000536d6) volume_small_pane_cp_g9

0x10f1,	// (0x000536df) volume_small_pane_cp_g10

0x39ee,	// (0x00055fdc) midp_ticker_pane_g1_ParamLimits

0x39fa,	// (0x00055fe8) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00061d63) midp_ticker_pane_g_ParamLimits

0xc599,	// (0x0005eb87) midp_ticker_pane_t1_ParamLimits

0xcd5b,	// (0x0005f349) aid_fill_nsta_2

0x4bfe,	// (0x000571ec) list_form2_midp_pane

0x5d8c,	// (0x0005837a) midp_editing_number_pane_ParamLimits

0x5d9b,	// (0x00058389) midp_ticker_pane_ParamLimits

0x6a1e,	// (0x0005900c) form2_midp_field_pane

0x6a42,	// (0x00059030) scroll_pane_cp51

0x6a62,	// (0x00059050) form2_midp_button_pane_ParamLimits

0x6a62,	// (0x00059050) form2_midp_button_pane

0x6a74,	// (0x00059062) form2_midp_content_pane_ParamLimits

0x6a74,	// (0x00059062) form2_midp_content_pane

0x6a8e,	// (0x0005907c) form2_midp_field_choice_group_pane

0x6a96,	// (0x00059084) form2_midp_field_pane_g1

0x6a9e,	// (0x0005908c) form2_midp_field_pane_g2

0x6aa6,	// (0x00059094) form2_midp_field_pane_g3

0x6aae,	// (0x0005909c) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x000620f0) form2_midp_field_pane_g

0x6ab6,	// (0x000590a4) form2_midp_gauge_slider_pane

0x6abe,	// (0x000590ac) form2_midp_gauge_wait_pane

0x6ac6,	// (0x000590b4) form2_midp_image_pane_ParamLimits

0x6ac6,	// (0x000590b4) form2_midp_image_pane

0xd90b,	// (0x0005fef9) form2_midp_label_pane_ParamLimits

0xd90b,	// (0x0005fef9) form2_midp_label_pane

0xd92a,	// (0x0005ff18) form2_midp_label_pane_cp_ParamLimits

0xd92a,	// (0x0005ff18) form2_midp_label_pane_cp

0x6b19,	// (0x00059107) form2_midp_string_pane_ParamLimits

0x6b19,	// (0x00059107) form2_midp_string_pane

0xbd15,	// (0x0005e303) form2_midp_text_pane_ParamLimits

0xbd15,	// (0x0005e303) form2_midp_text_pane

0x6b2b,	// (0x00059119) form2_midp_time_pane

0x6b3b,	// (0x00059129) input_focus_pane_cp51_ParamLimits

0x6b3b,	// (0x00059129) input_focus_pane_cp51

0xd94b,	// (0x0005ff39) form2_midp_label_pane_t1_ParamLimits

0xd94b,	// (0x0005ff39) form2_midp_label_pane_t1

0xbd38,	// (0x0005e326) form2_mdip_text_pane_t1_ParamLimits

0xbd38,	// (0x0005e326) form2_mdip_text_pane_t1

0x112a,	// (0x00053718) form2_midp_time_pane_t1

0x6b91,	// (0x0005917f) form2_midp_gauge_slider_pane_t1

0xd988,	// (0x0005ff76) form2_midp_gauge_slider_pane_t2

0xd99a,	// (0x0005ff88) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x000620f9) form2_midp_gauge_slider_pane_t

0x6bc7,	// (0x000591b5) form2_midp_slider_pane

0x6bd3,	// (0x000591c1) form2_midp_gauge_wait_pane_t1

0x6be1,	// (0x000591cf) form2_midp_wait_pane_ParamLimits

0x6be1,	// (0x000591cf) form2_midp_wait_pane

0xd9ac,	// (0x0005ff9a) list_single_2graphic_pane_cp4_ParamLimits

0xd9ac,	// (0x0005ff9a) list_single_2graphic_pane_cp4

0xd18e,	// (0x0005f77c) list_single_midp_graphic_pane_cp_ParamLimits

0xd18e,	// (0x0005f77c) list_single_midp_graphic_pane_cp

0xd279,	// (0x0005f867) list_highlight_pane_cp20

0x6c1d,	// (0x0005920b) list_single_2graphic_pane_g1_cp4

0x622b,	// (0x00058819) list_single_2graphic_pane_g2_cp4

0x6c25,	// (0x00059213) list_single_2graphic_pane_t1_cp4

0x2187,	// (0x00054775) list_highlight_pane_cp21

0x6c34,	// (0x00059222) list_single_midp_graphic_pane_g4_cp

0x6c43,	// (0x00059231) list_single_midp_graphic_pane_t1_cp

0xd9bf,	// (0x0005ffad) form2_mdip_string_pane_t1_ParamLimits

0xd9bf,	// (0x0005ffad) form2_mdip_string_pane_t1

0xd279,	// (0x0005f867) bg_wml_button_pane_cp2

0xd26f,	// (0x0005f85d) form2_midp_image_pane_g1

0x2a40,	// (0x0005502e) list_double_large_graphic_pane_g5_ParamLimits

0x2a40,	// (0x0005502e) list_double_large_graphic_pane_g5

0xc4f1,	// (0x0005eadf) midp_form_pane_ParamLimits

0x2187,	// (0x00054775) main_apps_wheel_pane_ParamLimits

0xca4f,	// (0x0005f03d) popup_preview_window_ParamLimits

0xca4f,	// (0x0005f03d) popup_preview_window

0x4253,	// (0x00056841) popup_touch_info_window_ParamLimits

0x4253,	// (0x00056841) popup_touch_info_window

0x4275,	// (0x00056863) popup_touch_menu_window_ParamLimits

0x4275,	// (0x00056863) popup_touch_menu_window

0xd265,	// (0x0005f853) bg_popup_sub_pane_cp6

0x6cb2,	// (0x000592a0) list_touch_menu_pane

0x6cba,	// (0x000592a8) list_single_touch_menu_pane_ParamLimits

0x6cba,	// (0x000592a8) list_single_touch_menu_pane

0x6cd5,	// (0x000592c3) list_single_touch_menu_pane_t1

0x2187,	// (0x00054775) bg_popup_sub_pane_cp7_ParamLimits

0x2187,	// (0x00054775) bg_popup_sub_pane_cp7

0x6ce3,	// (0x000592d1) heading_sub_pane

0x6ceb,	// (0x000592d9) list_touch_info_pane_ParamLimits

0x6ceb,	// (0x000592d9) list_touch_info_pane

0x6cfa,	// (0x000592e8) list_single_touch_info_pane_ParamLimits

0x6cfa,	// (0x000592e8) list_single_touch_info_pane

0x6d0c,	// (0x000592fa) list_single_touch_info_pane_t1

0x6d1a,	// (0x00059308) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x00062107) list_single_touch_info_pane_t

0x3911,	// (0x00055eff) bg_popup_heading_pane_cp

0x6d28,	// (0x00059316) heading_sub_pane_t1

0x48be,	// (0x00056eac) bg_popup_preview_window_pane_cp_ParamLimits

0x48be,	// (0x00056eac) bg_popup_preview_window_pane_cp

0x6ce3,	// (0x000592d1) heading_preview_pane

0x6ceb,	// (0x000592d9) list_preview_pane_ParamLimits

0x6ceb,	// (0x000592d9) list_preview_pane

0x6d36,	// (0x00059324) popup_preview_window_g1

0x6cfa,	// (0x000592e8) list_single_preview_pane_ParamLimits

0x6cfa,	// (0x000592e8) list_single_preview_pane

0x6d3e,	// (0x0005932c) list_single_preview_pane_g1

0x6d46,	// (0x00059334) list_single_preview_pane_t1

0x6d0c,	// (0x000592fa) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0006210c) list_single_preview_pane_t

0x6d54,	// (0x00059342) bg_popup_heading_pane_cp2_ParamLimits

0x6d54,	// (0x00059342) bg_popup_heading_pane_cp2

0x6d6a,	// (0x00059358) heading_preview_pane_g1

0x6d72,	// (0x00059360) heading_preview_pane_t1_ParamLimits

0x6d72,	// (0x00059360) heading_preview_pane_t1

0x2276,	// (0x00054864) soft_indicator_pane_t1_ParamLimits

0x2981,	// (0x00054f6f) scroll_pane_ParamLimits

0x312c,	// (0x0005571a) scroll_sc2_left_pane

0x3135,	// (0x00055723) scroll_sc2_right_pane

0x3154,	// (0x00055742) scroll_bg_pane_g1_ParamLimits

0x3169,	// (0x00055757) scroll_bg_pane_g2_ParamLimits

0x3181,	// (0x0005576f) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x00061cee) scroll_bg_pane_g_ParamLimits

0x3154,	// (0x00055742) scroll_handle_pane_g1_ParamLimits

0x31a3,	// (0x00055791) scroll_handle_pane_g2_ParamLimits

0x3181,	// (0x0005576f) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x00061cf5) scroll_handle_pane_g_ParamLimits

0x3cb7,	// (0x000562a5) popup_choice_list_window_ParamLimits

0x3cb7,	// (0x000562a5) popup_choice_list_window

0x4716,	// (0x00056d04) choice_list_pane

0x4798,	// (0x00056d86) cell_toolbar_pane_t1

0x47c0,	// (0x00056dae) toolbar_button_pane_ParamLimits

0x589f,	// (0x00057e8d) ai_gene_pane_1_t2_ParamLimits

0x589f,	// (0x00057e8d) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x00061f11) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x00061f11) ai_gene_pane_1_t

0x6d8f,	// (0x0005937d) scroll_sc2_left_pane_g1

0x6d8f,	// (0x0005937d) scroll_sc2_right_pane_g1

0x3c8f,	// (0x0005627d) bg_popup_sub_pane_cp10

0x6d99,	// (0x00059387) list_choice_list_pane

0x6db0,	// (0x0005939e) list_single_choice_list_pane_ParamLimits

0x6db0,	// (0x0005939e) list_single_choice_list_pane

0x6dc4,	// (0x000593b2) list_single_choice_list_pane_g1

0x6dcc,	// (0x000593ba) list_single_choice_list_pane_t1_ParamLimits

0x6dcc,	// (0x000593ba) list_single_choice_list_pane_t1

0x6de1,	// (0x000593cf) choice_list_pane_g1

0x6de9,	// (0x000593d7) choice_list_pane_t1

0xd265,	// (0x0005f853) input_focus_pane_cp11

0x3006,	// (0x000555f4) title_pane_stacon_g2_ParamLimits

0x3006,	// (0x000555f4) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x00061cd4) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x00061cd4) title_pane_stacon_g

0x3911,	// (0x00055eff) cursor_press_pane

0xc6d0,	// (0x0005ecbe) popup_fep_hwr_window_ParamLimits

0xc6d0,	// (0x0005ecbe) popup_fep_hwr_window

0x3df7,	// (0x000563e5) popup_fep_vkb_window_ParamLimits

0x3df7,	// (0x000563e5) popup_fep_vkb_window

0x6df7,	// (0x000593e5) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x00062135) fep_vkb_side_pane_g_ParamLimits

0x1176,	// (0x00053764) fep_hwr_candidate_pane_ParamLimits

0x1176,	// (0x00053764) fep_hwr_candidate_pane

0x11a0,	// (0x0005378e) fep_hwr_side_pane_ParamLimits

0x11a0,	// (0x0005378e) fep_hwr_side_pane

0x11c2,	// (0x000537b0) fep_hwr_top_pane_ParamLimits

0x11c2,	// (0x000537b0) fep_hwr_top_pane

0x11da,	// (0x000537c8) fep_hwr_write_pane_ParamLimits

0x11da,	// (0x000537c8) fep_hwr_write_pane

0xfb47,	// (0x00062135) fep_vkb_side_pane_g

0x6dff,	// (0x000593ed) fep_hwr_top_pane_g1

0x6e11,	// (0x000593ff) fep_hwr_top_pane_g2

0x1214,	// (0x00053802) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x00062111) fep_hwr_top_pane_g

0x1229,	// (0x00053817) fep_hwr_top_text_pane

0x32f8,	// (0x000558e6) fep_hwr_top_text_pane_g1

0x6e47,	// (0x00059435) fep_hwr_top_text_pane_t1

0x1333,	// (0x00053921) fep_hwr_candidate_pane_g1

0x7092,	// (0x00059680) fep_vkb_keypad_pane_g3_ParamLimits

0x7092,	// (0x00059680) fep_vkb_keypad_pane_g3

0x70be,	// (0x000596ac) fep_vkb_keypad_pane_g4_ParamLimits

0x70be,	// (0x000596ac) fep_vkb_keypad_pane_g4

0x7135,	// (0x00059723) fep_vkb_bottom_pane_g2_ParamLimits

0x7135,	// (0x00059723) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0006213c) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0006213c) fep_vkb_bottom_pane_g

0x6d8f,	// (0x0005937d) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x00062146) cell_vkb_side_pane_g

0x71c0,	// (0x000597ae) cell_vkb_side_pane_t1

0x71ce,	// (0x000597bc) cell_vkb_side_pane_t1_copy1

0x6d8f,	// (0x0005937d) bg_fep_vkb_candidate_pane_g2

0x7312,	// (0x00059900) cell_vkb_candidate_pane_ParamLimits

0x6e55,	// (0x00059443) aid_size_cell_vkb_ParamLimits

0x6e55,	// (0x00059443) aid_size_cell_vkb

0x7312,	// (0x00059900) cell_vkb_candidate_pane

0x135a,	// (0x00053948) bg_popup_fep_shadow_pane_g1

0xda43,	// (0x00060031) fep_vkb_bottom_pane_ParamLimits

0xda43,	// (0x00060031) fep_vkb_bottom_pane

0x6f24,	// (0x00059512) fep_vkb_candidate_pane_ParamLimits

0x6f24,	// (0x00059512) fep_vkb_candidate_pane

0xda6f,	// (0x0006005d) fep_vkb_keypad_pane_ParamLimits

0xda6f,	// (0x0006005d) fep_vkb_keypad_pane

0xda96,	// (0x00060084) fep_vkb_side_pane_ParamLimits

0xda96,	// (0x00060084) fep_vkb_side_pane

0xdad2,	// (0x000600c0) fep_vkb_top_pane_ParamLimits

0xdad2,	// (0x000600c0) fep_vkb_top_pane

0x6feb,	// (0x000595d9) fep_vkb_top_pane_g1_ParamLimits

0x6feb,	// (0x000595d9) fep_vkb_top_pane_g1

0x6ffa,	// (0x000595e8) fep_vkb_top_pane_g2_ParamLimits

0x6ffa,	// (0x000595e8) fep_vkb_top_pane_g2

0x7009,	// (0x000595f7) fep_vkb_top_pane_g3_ParamLimits

0x7009,	// (0x000595f7) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0006212c) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0006212c) fep_vkb_top_pane_g

0x7027,	// (0x00059615) fep_vkb_top_text_pane_ParamLimits

0x7027,	// (0x00059615) fep_vkb_top_text_pane

0xdb0e,	// (0x000600fc) fep_vkb_side_pane_g1_ParamLimits

0xdb0e,	// (0x000600fc) fep_vkb_side_pane_g1

0x7081,	// (0x0005966f) grid_vkb_side_pane_ParamLimits

0x7081,	// (0x0005966f) grid_vkb_side_pane

0x1362,	// (0x00053950) bg_popup_fep_shadow_pane_g2

0x136b,	// (0x00053959) bg_popup_fep_shadow_pane_g3

0x1373,	// (0x00053961) bg_popup_fep_shadow_pane_g4

0x137c,	// (0x0005396a) bg_popup_fep_shadow_pane_g5

0x1386,	// (0x00053974) bg_popup_fep_shadow_pane_g6

0x138e,	// (0x0005397c) bg_popup_fep_shadow_pane_g7

0x2b39,	// (0x00055127) bg_popup_fep_shadow_pane_g8

0x70e0,	// (0x000596ce) grid_vkb_keypad_number_pane_ParamLimits

0x70e0,	// (0x000596ce) grid_vkb_keypad_number_pane

0x70f4,	// (0x000596e2) grid_vkb_keypad_pane_ParamLimits

0x70f4,	// (0x000596e2) grid_vkb_keypad_pane

0x711a,	// (0x00059708) fep_vkb_bottom_pane_g1_ParamLimits

0x711a,	// (0x00059708) fep_vkb_bottom_pane_g1

0x7143,	// (0x00059731) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7143,	// (0x00059731) grid_vkb_keypad_bottom_left_pane

0x7158,	// (0x00059746) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7158,	// (0x00059746) grid_vkb_keypad_bottom_right_pane

0x716d,	// (0x0005975b) fep_vkb_top_text_pane_g1

0xdb55,	// (0x00060143) fep_vkb_top_text_pane_t1

0xdb67,	// (0x00060155) cell_vkb_side_pane_ParamLimits

0xdb67,	// (0x00060155) cell_vkb_side_pane

0x6d8f,	// (0x0005937d) cell_vkb_side_pane_g1

0x71dc,	// (0x000597ca) cell_vkb_keypad_pane_ParamLimits

0x71dc,	// (0x000597ca) cell_vkb_keypad_pane

0x7269,	// (0x00059857) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x00062159) bg_popup_fep_shadow_pane_g

0x13a0,	// (0x0005398e) cell_hwr_side_pane_g1

0x13a0,	// (0x0005398e) cell_hwr_side_pane_g2

0x7273,	// (0x00059861) cell_vkb_keypad_pane_t1

0xdb7d,	// (0x0006016b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdb7d,	// (0x0006016b) cell_vkb_keypad_bottom_left_pane

0xdb92,	// (0x00060180) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdb92,	// (0x00060180) cell_vkb_keypad_bottom_right_pane

0x6d8f,	// (0x0005937d) cell_vkb_keypad_bottom_left_pane_g1

0x6d8f,	// (0x0005937d) cell_vkb_keypad_bottom_right_pane_g1

0x72d7,	// (0x000598c5) cell_vkb_keypad_number_pane_ParamLimits

0x72d7,	// (0x000598c5) cell_vkb_keypad_number_pane

0x72f6,	// (0x000598e4) cell_vkb_keypad_number_pane_g1

0x7300,	// (0x000598ee) cell_vkb_keypad_number_pane_g2

0x7309,	// (0x000598f7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0006214b) cell_vkb_keypad_number_pane_g

0x7273,	// (0x00059861) cell_vkb_keypad_number_pane_t1

0x7333,	// (0x00059921) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x0006216c) cell_hwr_side_pane_g

0x734c,	// (0x0005993a) cell_hwr_side_pane_t1

0x13aa,	// (0x00053998) cell_hwr_side_pane_t1_copy1

0x13b8,	// (0x000539a6) cell_hwr_candidate_pane_g1

0x13e7,	// (0x000539d5) cell_hwr_candidate_pane_t1

0x6d8f,	// (0x0005937d) cell_vkb_candidate_pane_g2

0x7390,	// (0x0005997e) cell_vkb_candidate_pane_t1

0x113d,	// (0x0005372b) bg_popup_fep_shadow_pane_ParamLimits

0x113d,	// (0x0005372b) bg_popup_fep_shadow_pane

0x11f4,	// (0x000537e2) bg_fep_hwr_top_pane_g4

0x6e23,	// (0x00059411) bg_hwr_side_pane_g1_ParamLimits

0x6e23,	// (0x00059411) bg_hwr_side_pane_g1

0xbd69,	// (0x0005e357) cell_hwr_side_pane_ParamLimits

0xbd69,	// (0x0005e357) cell_hwr_side_pane

0x12a4,	// (0x00053892) fep_hwr_write_pane_g1_ParamLimits

0x12a4,	// (0x00053892) fep_hwr_write_pane_g1

0x12b1,	// (0x0005389f) fep_hwr_write_pane_g2_ParamLimits

0x12b1,	// (0x0005389f) fep_hwr_write_pane_g2

0x12be,	// (0x000538ac) fep_hwr_write_pane_g3_ParamLimits

0x12be,	// (0x000538ac) fep_hwr_write_pane_g3

0xbd89,	// (0x0005e377) fep_hwr_write_pane_g4_ParamLimits

0xbd89,	// (0x0005e377) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x00062118) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x00062118) fep_hwr_write_pane_g

0x11f4,	// (0x000537e2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x11f4,	// (0x000537e2) bg_fep_hwr_candidate_pane_g2

0x12e1,	// (0x000538cf) cell_hwr_candidate_pane_ParamLimits

0x12e1,	// (0x000538cf) cell_hwr_candidate_pane

0x1333,	// (0x00053921) fep_hwr_candidate_pane_g1_ParamLimits

0x6e83,	// (0x00059471) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6e83,	// (0x00059471) bg_popup_fep_shadow_pane_cp2

0x7019,	// (0x00059607) fep_vkb_top_pane_g4_ParamLimits

0x7019,	// (0x00059607) fep_vkb_top_pane_g4

0x705f,	// (0x0005964d) fep_vkb_side_pane_g2_ParamLimits

0x705f,	// (0x0005964d) fep_vkb_side_pane_g2

0xb57b,	// (0x0005db69) list_setting_pane_t4_ParamLimits

0xb57b,	// (0x0005db69) list_setting_pane_t4

0xb617,	// (0x0005dc05) list_setting_number_pane_t5_ParamLimits

0xb617,	// (0x0005dc05) list_setting_number_pane_t5

0x332f,	// (0x0005591d) list_double_heading_pane_cp2_ParamLimits

0x332f,	// (0x0005591d) list_double_heading_pane_cp2

0x2ad4,	// (0x000550c2) list_double_heading_pane_g1_cp2_ParamLimits

0x2ad4,	// (0x000550c2) list_double_heading_pane_g1_cp2

0x2ae0,	// (0x000550ce) list_double_heading_pane_g2_cp2_ParamLimits

0x2ae0,	// (0x000550ce) list_double_heading_pane_g2_cp2

0x739e,	// (0x0005998c) list_double_heading_pane_t1_cp2_ParamLimits

0x739e,	// (0x0005998c) list_double_heading_pane_t1_cp2

0x73b4,	// (0x000599a2) list_double_heading_pane_t2_cp2_ParamLimits

0x73b4,	// (0x000599a2) list_double_heading_pane_t2_cp2

0xd25d,	// (0x0005f84b) aid_value_unit2

0xf26f,	// (0x0006185d) popup_preview_fixed_window

0x2411,	// (0x000549ff) bg_popup_preview_window_pane_cp02

0x73c6,	// (0x000599b4) list_preview_fixed_pane

0x740c,	// (0x000599fa) list_empty_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_empty_pane_fp

0x740c,	// (0x000599fa) list_single_cale_day_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_single_cale_day_pane_fp

0x740c,	// (0x000599fa) list_single_graphic_heading_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_single_graphic_heading_pane_fp

0x740c,	// (0x000599fa) list_single_graphic_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_single_graphic_pane_fp

0x740c,	// (0x000599fa) list_single_heading_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_single_heading_pane_fp

0x740c,	// (0x000599fa) list_single_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_single_pane_fp

0x7425,	// (0x00059a13) list_single_pane_fp_g1_ParamLimits

0x7425,	// (0x00059a13) list_single_pane_fp_g1

0x2a34,	// (0x00055022) list_single_pane_fp_g2_ParamLimits

0x2a34,	// (0x00055022) list_single_pane_fp_g2

0x2ed2,	// (0x000554c0) list_single_pane_fp_g3_ParamLimits

0x2ed2,	// (0x000554c0) list_single_pane_fp_g3

0x7431,	// (0x00059a1f) list_single_pane_fp_g4_ParamLimits

0x7431,	// (0x00059a1f) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x0006217f) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x0006217f) list_single_pane_fp_g

0x1405,	// (0x000539f3) list_single_pane_fp_t1_ParamLimits

0x1405,	// (0x000539f3) list_single_pane_fp_t1

0x141c,	// (0x00053a0a) list_single_graphic_pane_fp_g1_ParamLimits

0x141c,	// (0x00053a0a) list_single_graphic_pane_fp_g1

0x7425,	// (0x00059a13) list_single_graphic_pane_fp_g2_ParamLimits

0x7425,	// (0x00059a13) list_single_graphic_pane_fp_g2

0x2a34,	// (0x00055022) list_single_graphic_pane_fp_g3_ParamLimits

0x2a34,	// (0x00055022) list_single_graphic_pane_fp_g3

0x2ed2,	// (0x000554c0) list_single_graphic_pane_fp_g4_ParamLimits

0x2ed2,	// (0x000554c0) list_single_graphic_pane_fp_g4

0x7431,	// (0x00059a1f) list_single_graphic_pane_fp_g5_ParamLimits

0x7431,	// (0x00059a1f) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x00062188) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x00062188) list_single_graphic_pane_fp_g

0x1428,	// (0x00053a16) list_single_graphic_pane_fp_t1_ParamLimits

0x1428,	// (0x00053a16) list_single_graphic_pane_fp_t1

0x141c,	// (0x00053a0a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x141c,	// (0x00053a0a) list_single_graphic_heading_pane_fp_g1

0x7425,	// (0x00059a13) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7425,	// (0x00059a13) list_single_graphic_heading_pane_fp_g2

0x2a34,	// (0x00055022) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2a34,	// (0x00055022) list_single_graphic_heading_pane_fp_g3

0x2ed2,	// (0x000554c0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2ed2,	// (0x000554c0) list_single_graphic_heading_pane_fp_g4

0x7431,	// (0x00059a1f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7431,	// (0x00059a1f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x00062188) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00062188) list_single_graphic_heading_pane_fp_g

0x143e,	// (0x00053a2c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x143e,	// (0x00053a2c) list_single_graphic_heading_pane_fp_t1

0x1454,	// (0x00053a42) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1454,	// (0x00053a42) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x00062193) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x00062193) list_single_graphic_heading_pane_fp_t

0x1466,	// (0x00053a54) list_single_cale_day_pane_fp_g1_ParamLimits

0x1466,	// (0x00053a54) list_single_cale_day_pane_fp_g1

0x743d,	// (0x00059a2b) list_single_cale_day_pane_fp_g2_ParamLimits

0x743d,	// (0x00059a2b) list_single_cale_day_pane_fp_g2

0x2ee6,	// (0x000554d4) list_single_cale_day_pane_fp_g3_ParamLimits

0x2ee6,	// (0x000554d4) list_single_cale_day_pane_fp_g3

0x2f0e,	// (0x000554fc) list_single_cale_day_pane_fp_g4_ParamLimits

0x2f0e,	// (0x000554fc) list_single_cale_day_pane_fp_g4

0x2f32,	// (0x00055520) list_single_cale_day_pane_fp_g5_ParamLimits

0x2f32,	// (0x00055520) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x00062198) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x00062198) list_single_cale_day_pane_fp_g

0x149e,	// (0x00053a8c) list_single_cale_day_pane_fp_t1_ParamLimits

0x149e,	// (0x00053a8c) list_single_cale_day_pane_fp_t1

0x14c4,	// (0x00053ab2) list_single_cale_day_pane_fp_t2_ParamLimits

0x14c4,	// (0x00053ab2) list_single_cale_day_pane_fp_t2

0x14dd,	// (0x00053acb) list_single_cale_day_pane_fp_t3_ParamLimits

0x14dd,	// (0x00053acb) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x000621a3) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x000621a3) list_single_cale_day_pane_fp_t

0x7425,	// (0x00059a13) list_empty_pane_fp_g1_ParamLimits

0x7425,	// (0x00059a13) list_empty_pane_fp_g1

0x14f6,	// (0x00053ae4) list_empty_pane_fp_t1

0x1504,	// (0x00053af2) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x000621aa) list_empty_pane_fp_t

0x7425,	// (0x00059a13) list_single_heading_pane_fp_g1_ParamLimits

0x7425,	// (0x00059a13) list_single_heading_pane_fp_g1

0x2a34,	// (0x00055022) list_single_heading_pane_fp_g2_ParamLimits

0x2a34,	// (0x00055022) list_single_heading_pane_fp_g2

0x2ed2,	// (0x000554c0) list_single_heading_pane_fp_g3_ParamLimits

0x2ed2,	// (0x000554c0) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x000621af) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x000621af) list_single_heading_pane_fp_g

0x1512,	// (0x00053b00) list_single_heading_pane_fp_t1_ParamLimits

0x1512,	// (0x00053b00) list_single_heading_pane_fp_t1

0x1524,	// (0x00053b12) list_single_heading_pane_fp_t2_ParamLimits

0x1524,	// (0x00053b12) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x000621b6) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x000621b6) list_single_heading_pane_fp_t

0x2cd8,	// (0x000552c6) aid_size_cell_fast

0x2383,	// (0x00054971) soft_indicator_pane_cp1_t1

0x2d15,	// (0x00055303) cell_app_pane_cp2_ParamLimits

0x2d15,	// (0x00055303) cell_app_pane_cp2

0x115f,	// (0x0005374d) fep_hwr_candidate_drop_down_list_pane

0x134d,	// (0x0005393b) fep_hwr_candidate_pane_g3_ParamLimits

0x134d,	// (0x0005393b) fep_hwr_candidate_pane_g3

0xe18c,	// (0x0006077a) fep_hwr_candidate_pane_g4_ParamLimits

0xe18c,	// (0x0006077a) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x00062125) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x00062125) fep_hwr_candidate_pane_g

0x6f13,	// (0x00059501) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6f13,	// (0x00059501) fep_vkb_candidate_drop_down_list_pane

0x733b,	// (0x00059929) fep_vkb_candidate_pane_g3

0x7343,	// (0x00059931) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x00062152) fep_vkb_candidate_pane_g

0x13b8,	// (0x000539a6) cell_hwr_candidate_pane_g1_ParamLimits

0x13c6,	// (0x000539b4) cell_hwr_candidate_pane_g3_ParamLimits

0x13c6,	// (0x000539b4) cell_hwr_candidate_pane_g3

0x8bba,	// (0x0005b1a8) cell_hwr_candidate_pane_g4_ParamLimits

0x8bba,	// (0x0005b1a8) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x00062171) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x00062171) cell_hwr_candidate_pane_g

0x735a,	// (0x00059948) cell_vkb_candidate_pane_g3_ParamLimits

0x735a,	// (0x00059948) cell_vkb_candidate_pane_g3

0x7375,	// (0x00059963) cell_vkb_candidate_pane_g4_ParamLimits

0x7375,	// (0x00059963) cell_vkb_candidate_pane_g4

0x7449,	// (0x00059a37) cell_app_pane_cp2_g1_ParamLimits

0x7449,	// (0x00059a37) cell_app_pane_cp2_g1

0x7467,	// (0x00059a55) cell_app_pane_cp2_g2_ParamLimits

0x7467,	// (0x00059a55) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x000621bb) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x000621bb) cell_app_pane_cp2_g

0x7473,	// (0x00059a61) cell_app_pane_cp2_t1_ParamLimits

0x7473,	// (0x00059a61) cell_app_pane_cp2_t1

0x2aba,	// (0x000550a8) grid_highlight_pane_cp1_ParamLimits

0x2aba,	// (0x000550a8) grid_highlight_pane_cp1

0x153a,	// (0x00053b28) cell_hwr_candidate_pane_cp1_ParamLimits

0x153a,	// (0x00053b28) cell_hwr_candidate_pane_cp1

0x13b8,	// (0x000539a6) fep_hwr_candidate_drop_down_list_pane_g1

0x155e,	// (0x00053b4c) fep_hwr_candidate_drop_down_list_pane_g2

0x156b,	// (0x00053b59) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x000621c0) fep_hwr_candidate_drop_down_list_pane_g

0x1578,	// (0x00053b66) fep_hwr_candidate_drop_down_list_scroll_pane

0x1581,	// (0x00053b6f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1581,	// (0x00053b6f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x158e,	// (0x00053b7c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x158e,	// (0x00053b7c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x159b,	// (0x00053b89) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x159b,	// (0x00053b89) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x15a8,	// (0x00053b96) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x15a8,	// (0x00053b96) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x15c3,	// (0x00053bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x15c3,	// (0x00053bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x15de,	// (0x00053bcc) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x15de,	// (0x00053bcc) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x15f9,	// (0x00053be7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x15f9,	// (0x00053be7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1614,	// (0x00053c02) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1614,	// (0x00053c02) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x000621c7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x000621c7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7485,	// (0x00059a73) cell_vkb_candidate_pane_cp1_ParamLimits

0x7485,	// (0x00059a73) cell_vkb_candidate_pane_cp1

0x7019,	// (0x00059607) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7019,	// (0x00059607) fep_vkb_candidate_drop_down_list_pane_g1

0x74ab,	// (0x00059a99) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x74ab,	// (0x00059a99) fep_vkb_candidate_drop_down_list_pane_g2

0x74b8,	// (0x00059aa6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x74b8,	// (0x00059aa6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x000621d8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x000621d8) fep_vkb_candidate_drop_down_list_pane_g

0x74c5,	// (0x00059ab3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x74c5,	// (0x00059ab3) fep_vkb_candidate_drop_down_list_scroll_pane

0x74d2,	// (0x00059ac0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x74d2,	// (0x00059ac0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x74df,	// (0x00059acd) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x74df,	// (0x00059acd) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x74eb,	// (0x00059ad9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x74eb,	// (0x00059ad9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x74f7,	// (0x00059ae5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x74f7,	// (0x00059ae5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7518,	// (0x00059b06) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7518,	// (0x00059b06) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7539,	// (0x00059b27) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7539,	// (0x00059b27) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x755a,	// (0x00059b48) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x755a,	// (0x00059b48) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x757b,	// (0x00059b69) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x757b,	// (0x00059b69) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x000621df) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x000621df) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xadeb,	// (0x0005d3d9) title_pane_g1_ParamLimits

0xadfe,	// (0x0005d3ec) title_pane_g2_ParamLimits

0xf566,	// (0x00061b54) title_pane_g_ParamLimits

0x32e8,	// (0x000558d6) aid_call2_pane

0x32f0,	// (0x000558de) aid_call_pane

0x32f8,	// (0x000558e6) popup_clock_analogue_window_g1

0x32f8,	// (0x000558e6) popup_clock_analogue_window_g2

0x0530,	// (0x00052b1e) popup_clock_analogue_window_g3

0x0539,	// (0x00052b27) popup_clock_analogue_window_g4

0xd26f,	// (0x0005f85d) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x00061d03) popup_clock_analogue_window_g

0x0541,	// (0x00052b2f) popup_clock_analogue_window_t1

0x054f,	// (0x00052b3d) clock_digital_number_pane_ParamLimits

0x054f,	// (0x00052b3d) clock_digital_number_pane

0x055b,	// (0x00052b49) clock_digital_number_pane_cp02_ParamLimits

0x055b,	// (0x00052b49) clock_digital_number_pane_cp02

0x0567,	// (0x00052b55) clock_digital_number_pane_cp03_ParamLimits

0x0567,	// (0x00052b55) clock_digital_number_pane_cp03

0x0573,	// (0x00052b61) clock_digital_number_pane_cp04_ParamLimits

0x0573,	// (0x00052b61) clock_digital_number_pane_cp04

0x057f,	// (0x00052b6d) clock_digital_separator_pane_ParamLimits

0x057f,	// (0x00052b6d) clock_digital_separator_pane

0x058b,	// (0x00052b79) popup_clock_digital_window_t1_ParamLimits

0x058b,	// (0x00052b79) popup_clock_digital_window_t1

0xd26f,	// (0x0005f85d) clock_digital_number_pane_g1

0xd26f,	// (0x0005f85d) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x00061d0e) clock_digital_number_pane_g

0xd26f,	// (0x0005f85d) clock_digital_separator_pane_g1

0xd26f,	// (0x0005f85d) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x00061d0e) clock_digital_separator_pane_g

0xcd37,	// (0x0005f325) aid_fill_nsta_ParamLimits

0xce6d,	// (0x0005f45b) indicator_nsta_pane_ParamLimits

0x45a3,	// (0x00056b91) popup_clock_analogue_window

0x45a3,	// (0x00056b91) popup_clock_digital_window

0x2c99,	// (0x00055287) grid_indicator_nsta_pane_ParamLimits

0x682a,	// (0x00058e18) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x000620a5) clock_nsta_pane_t

0x04f4,	// (0x00052ae2) aid_size_max_handle

0xb90c,	// (0x0005defa) aid_size_min_handle

0x3911,	// (0x00055eff) editor_scroll_pane

0x7596,	// (0x00059b84) ex_editor_pane

0x2c45,	// (0x00055233) scroll_pane_cp13

0x29ad,	// (0x00054f9b) scroll_pane_cp14

0x3327,	// (0x00055915) scroll_pane_cp36

0xc3b2,	// (0x0005e9a0) list_single_graphic_hl_pane_cp2_ParamLimits

0xc3b2,	// (0x0005e9a0) list_single_graphic_hl_pane_cp2

0xd6ba,	// (0x0005fca8) list_single_graphic_hl_pane_ParamLimits

0xd6ba,	// (0x0005fca8) list_single_graphic_hl_pane

0x162f,	// (0x00053c1d) aid_size_min_hl_cp1

0x759e,	// (0x00059b8c) list_highlight_pane_cp34_ParamLimits

0x759e,	// (0x00059b8c) list_highlight_pane_cp34

0x75af,	// (0x00059b9d) list_single_graphic_hl_pane_g1_ParamLimits

0x75af,	// (0x00059b9d) list_single_graphic_hl_pane_g1

0xbd9e,	// (0x0005e38c) list_single_graphic_hl_pane_g2_ParamLimits

0xbd9e,	// (0x0005e38c) list_single_graphic_hl_pane_g2

0xbd9e,	// (0x0005e38c) list_single_graphic_hl_pane_g3_ParamLimits

0xbd9e,	// (0x0005e38c) list_single_graphic_hl_pane_g3

0x29b5,	// (0x00054fa3) list_single_graphic_hl_pane_g4_ParamLimits

0x29b5,	// (0x00054fa3) list_single_graphic_hl_pane_g4

0x75ec,	// (0x00059bda) list_single_graphic_hl_pane_g5_ParamLimits

0x75ec,	// (0x00059bda) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x000621f0) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x000621f0) list_single_graphic_hl_pane_g

0xbdaa,	// (0x0005e398) list_single_graphic_hl_pane_t1_ParamLimits

0xbdaa,	// (0x0005e398) list_single_graphic_hl_pane_t1

0x75bc,	// (0x00059baa) aid_size_min_hl_cp2

0x75c5,	// (0x00059bb3) list_highlight_pane_cp34_cp2_ParamLimits

0x75c5,	// (0x00059bb3) list_highlight_pane_cp34_cp2

0x75af,	// (0x00059b9d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x75af,	// (0x00059b9d) list_single_graphic_hl_pane_g1_cp2

0x75d2,	// (0x00059bc0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x75d2,	// (0x00059bc0) list_single_graphic_hl_pane_g2_cp2

0x75de,	// (0x00059bcc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x75de,	// (0x00059bcc) list_single_graphic_hl_pane_g3_cp2

0x29b5,	// (0x00054fa3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x29b5,	// (0x00054fa3) list_single_graphic_hl_pane_g4_cp2

0x75ec,	// (0x00059bda) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x75ec,	// (0x00059bda) list_single_graphic_hl_pane_g5_cp2

0xb9d1,	// (0x0005dfbf) control_pane_g4_ParamLimits

0xb9d1,	// (0x0005dfbf) control_pane_g4

0x3c8f,	// (0x0005627d) bg_popup_sub_pane_cp10_ParamLimits

0x6d99,	// (0x00059387) list_choice_list_pane_ParamLimits

0x6da8,	// (0x00059396) scroll_pane_cp23

0x2411,	// (0x000549ff) bg_popup_preview_window_pane_cp02_ParamLimits

0x73c6,	// (0x000599b4) list_preview_fixed_pane_ParamLimits

0x73dc,	// (0x000599ca) list_preview_fixed_pane_cp_ParamLimits

0x73dc,	// (0x000599ca) list_preview_fixed_pane_cp

0x73e8,	// (0x000599d6) popup_preview_fixed_window_g1_ParamLimits

0x73e8,	// (0x000599d6) popup_preview_fixed_window_g1

0x73f4,	// (0x000599e2) popup_preview_fixed_window_g2_ParamLimits

0x73f4,	// (0x000599e2) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x00062178) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x00062178) popup_preview_fixed_window_g

0x0466,	// (0x00052a54) aid_navi_side_left_pane_ParamLimits

0x047b,	// (0x00052a69) aid_navi_side_right_pane_ParamLimits

0x0493,	// (0x00052a81) navi_icon_pane_stacon_ParamLimits

0x04a7,	// (0x00052a95) navi_navi_pane_stacon_ParamLimits

0x0493,	// (0x00052a81) navi_text_pane_stacon_ParamLimits

0xd265,	// (0x0005f853) main_text_info_pane

0x7616,	// (0x00059c04) listscroll_text_info_pane

0x761e,	// (0x00059c0c) list_text_info_pane_ParamLimits

0x761e,	// (0x00059c0c) list_text_info_pane

0x762d,	// (0x00059c1b) scroll_pane_cp24_ParamLimits

0x762d,	// (0x00059c1b) scroll_pane_cp24

0xdbad,	// (0x0006019b) list_text_info_pane_t1_ParamLimits

0xdbad,	// (0x0006019b) list_text_info_pane_t1

0xc634,	// (0x0005ec22) popup_fast_swap2_window_ParamLimits

0xc634,	// (0x0005ec22) popup_fast_swap2_window

0x7670,	// (0x00059c5e) aid_size_cell_fast2

0xd265,	// (0x0005f853) bg_popup_window_pane_cp17

0x4c2a,	// (0x00057218) heading_pane_cp2

0x2671,	// (0x00054c5f) listscroll_fast2_pane

0x767a,	// (0x00059c68) grid_fast2_pane

0x7684,	// (0x00059c72) listscroll_fast2_pane_g1

0x768e,	// (0x00059c7c) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x000621fb) listscroll_fast2_pane_g

0x2c45,	// (0x00055233) scroll_pane_cp26

0x7698,	// (0x00059c86) cell_fast2_pane_ParamLimits

0x7698,	// (0x00059c86) cell_fast2_pane

0x76af,	// (0x00059c9d) cell_fast2_pane_g1

0x76b8,	// (0x00059ca6) cell_fast2_pane_g2

0x76c1,	// (0x00059caf) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x00062200) cell_fast2_pane_g

0x276a,	// (0x00054d58) grid_highlight_pane_cp9

0x277f,	// (0x00054d6d) main_eswt_pane_ParamLimits

0x277f,	// (0x00054d6d) main_eswt_pane

0x7642,	// (0x00059c30) list_single_text_info_pane

0x76c9,	// (0x00059cb7) eswt_ctrl_button_pane

0x76c9,	// (0x00059cb7) eswt_ctrl_canvas_pane

0x76d1,	// (0x00059cbf) eswt_ctrl_combo_pane

0x76c9,	// (0x00059cb7) eswt_ctrl_default_pane

0x76c9,	// (0x00059cb7) eswt_ctrl_label_pane

0x76d9,	// (0x00059cc7) eswt_ctrl_wait_pane

0x76e1,	// (0x00059ccf) eswt_shell_pane

0xd265,	// (0x0005f853) listscroll_eswt_app_pane

0x7701,	// (0x00059cef) popup_eswt_tasktip_window_ParamLimits

0x7701,	// (0x00059cef) popup_eswt_tasktip_window

0x48be,	// (0x00056eac) bg_popup_window_pane_cp18

0x7712,	// (0x00059d00) eswt_control_pane_g1_ParamLimits

0x7712,	// (0x00059d00) eswt_control_pane_g1

0x771f,	// (0x00059d0d) eswt_control_pane_g2_ParamLimits

0x771f,	// (0x00059d0d) eswt_control_pane_g2

0x772c,	// (0x00059d1a) eswt_control_pane_g3_ParamLimits

0x772c,	// (0x00059d1a) eswt_control_pane_g3

0x7739,	// (0x00059d27) eswt_control_pane_g4_ParamLimits

0x7739,	// (0x00059d27) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x00062207) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x00062207) eswt_control_pane_g

0x2aba,	// (0x000550a8) bg_button_pane_ParamLimits

0x2aba,	// (0x000550a8) bg_button_pane

0x277f,	// (0x00054d6d) common_borders_pane_copy2_ParamLimits

0x277f,	// (0x00054d6d) common_borders_pane_copy2

0x7746,	// (0x00059d34) control_button_pane_g1_ParamLimits

0x7746,	// (0x00059d34) control_button_pane_g1

0x7752,	// (0x00059d40) control_button_pane_g2_ParamLimits

0x7752,	// (0x00059d40) control_button_pane_g2

0x775e,	// (0x00059d4c) control_button_pane_g3_ParamLimits

0x775e,	// (0x00059d4c) control_button_pane_g3

0x0002,

0xfc22,	// (0x00062210) control_button_pane_g_ParamLimits

0xfc22,	// (0x00062210) control_button_pane_g

0x7772,	// (0x00059d60) control_button_pane_t1

0x7780,	// (0x00059d6e) control_button_pane_t2

0x0001,

0xfc29,	// (0x00062217) control_button_pane_t

0x47cc,	// (0x00056dba) bg_button_pane_g1

0x47dc,	// (0x00056dca) bg_button_pane_g2

0x47d4,	// (0x00056dc2) bg_button_pane_g3

0x47ec,	// (0x00056dda) bg_button_pane_g4

0x47e4,	// (0x00056dd2) bg_button_pane_g5

0x47f4,	// (0x00056de2) bg_button_pane_g6

0x47fc,	// (0x00056dea) bg_button_pane_g7

0x480c,	// (0x00056dfa) bg_button_pane_g8

0x4804,	// (0x00056df2) bg_button_pane_g9

0x0008,

0xf877,	// (0x00061e65) bg_button_pane_g

0x6d54,	// (0x00059342) common_borders_pane_ParamLimits

0x6d54,	// (0x00059342) common_borders_pane

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy1_ParamLimits

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy1

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy1_ParamLimits

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy1

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy1_ParamLimits

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy1

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy1_ParamLimits

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy1

0x6d8f,	// (0x0005937d) bg_eswt_ctrl_canvas_pane_g1

0x6d54,	// (0x00059342) common_borders_pane_cp2_ParamLimits

0x6d54,	// (0x00059342) common_borders_pane_cp2

0x6d54,	// (0x00059342) common_borders_pane_cp3_ParamLimits

0x6d54,	// (0x00059342) common_borders_pane_cp3

0x778e,	// (0x00059d7c) separator_horizontal_pane

0x7796,	// (0x00059d84) separator_vertical_pane

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy2_ParamLimits

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy2

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy2_ParamLimits

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy2

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy2_ParamLimits

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy2

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy2_ParamLimits

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy2

0xd265,	// (0x0005f853) common_borders_pane_cp4

0x779f,	// (0x00059d8d) separator_horizontal_pane_g1

0x77a8,	// (0x00059d96) separator_horizontal_pane_g2

0x77b1,	// (0x00059d9f) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0006221c) separator_horizontal_pane_g

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy3_ParamLimits

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy3

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy3_ParamLimits

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy3

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy3_ParamLimits

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy3

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy3_ParamLimits

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy3

0xd265,	// (0x0005f853) common_borders_pane_cp5

0x77ba,	// (0x00059da8) separator_vertical_pane_g1

0x77c3,	// (0x00059db1) separator_vertical_pane_g2

0x77cc,	// (0x00059dba) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x00062223) separator_vertical_pane_g

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy4_ParamLimits

0x7712,	// (0x00059d00) eswt_control_pane_g1_copy4

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy4_ParamLimits

0x771f,	// (0x00059d0d) eswt_control_pane_g2_copy4

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy4_ParamLimits

0x772c,	// (0x00059d1a) eswt_control_pane_g3_copy4

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy4_ParamLimits

0x7739,	// (0x00059d27) eswt_control_pane_g4_copy4

0xdbcf,	// (0x000601bd) eswt_ctrl_combo_button_pane

0xdbd7,	// (0x000601c5) eswt_ctrl_input_pane

0xdbdf,	// (0x000601cd) popup_choice_list_window_cp70

0xdbe7,	// (0x000601d5) eswt_ctrl_input_pane_t1

0xd265,	// (0x0005f853) input_focus_pane_cp70

0x6d54,	// (0x00059342) bg_button_pane_cp70_ParamLimits

0x6d54,	// (0x00059342) bg_button_pane_cp70

0xdbf5,	// (0x000601e3) eswt_ctrl_combo_button_pane_g1

0x7803,	// (0x00059df1) wait_bar_pane_cp70

0x48be,	// (0x00056eac) bg_popup_window_pane_cp70_ParamLimits

0x48be,	// (0x00056eac) bg_popup_window_pane_cp70

0x780b,	// (0x00059df9) popup_eswt_tasktip_window_t1

0x7821,	// (0x00059e0f) wait_bar_pane_cp71_ParamLimits

0x7821,	// (0x00059e0f) wait_bar_pane_cp71

0x782d,	// (0x00059e1b) grid_eswt_app_pane

0x312c,	// (0x0005571a) scroll_pane_cp70

0xdbfd,	// (0x000601eb) cell_eswt_app_pane_ParamLimits

0xdbfd,	// (0x000601eb) cell_eswt_app_pane

0xdc2f,	// (0x0006021d) cell_eswt_app_pane_g1_ParamLimits

0xdc2f,	// (0x0006021d) cell_eswt_app_pane_g1

0xdc5e,	// (0x0006024c) cell_eswt_app_pane_g2_ParamLimits

0xdc5e,	// (0x0006024c) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0006222a) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0006222a) cell_eswt_app_pane_g

0xdc87,	// (0x00060275) cell_eswt_app_pane_t1_ParamLimits

0xdc87,	// (0x00060275) cell_eswt_app_pane_t1

0x78f2,	// (0x00059ee0) grid_highlight_pane_cp70_ParamLimits

0x78f2,	// (0x00059ee0) grid_highlight_pane_cp70

0x5d23,	// (0x00058311) set_content_pane_g1

0x3bc1,	// (0x000561af) status_small_volume_pane

0x165a,	// (0x00053c48) status_small_volume_pane_g1

0x1662,	// (0x00053c50) volume_small2_pane

0x166b,	// (0x00053c59) volume_small2_pane_g1

0x1674,	// (0x00053c62) volume_small2_pane_g2

0x167d,	// (0x00053c6b) volume_small2_pane_g3

0x1686,	// (0x00053c74) volume_small2_pane_g4

0x168f,	// (0x00053c7d) volume_small2_pane_g5

0x1698,	// (0x00053c86) volume_small2_pane_g6

0x16a1,	// (0x00053c8f) volume_small2_pane_g7

0x16aa,	// (0x00053c98) volume_small2_pane_g8

0x16b3,	// (0x00053ca1) volume_small2_pane_g9

0x16bc,	// (0x00053caa) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0006222f) volume_small2_pane_g

0x716d,	// (0x0005975b) fep_vkb_top_text_pane_g1_ParamLimits

0xdb55,	// (0x00060143) fep_vkb_top_text_pane_t1_ParamLimits

0x7400,	// (0x000599ee) popup_preview_fixed_window_g3_ParamLimits

0x7400,	// (0x000599ee) popup_preview_fixed_window_g3

0xccca,	// (0x0005f2b8) popup_toolbar_trans_pane

0xd50a,	// (0x0005faf8) aid_height_set_list_ParamLimits

0x5bd9,	// (0x000581c7) aid_size_parent_ParamLimits

0x3c8f,	// (0x0005627d) list_highlight_pane_cp2_ParamLimits

0x5d23,	// (0x00058311) set_content_pane_g1_ParamLimits

0xd1d4,	// (0x0005f7c2) list_single_image_pane_ParamLimits

0xd1d4,	// (0x0005f7c2) list_single_image_pane

0xdcb9,	// (0x000602a7) aid_size_cell_image_ParamLimits

0xdcb9,	// (0x000602a7) aid_size_cell_image

0xdcc6,	// (0x000602b4) grid_single_image_pane_ParamLimits

0xdcc6,	// (0x000602b4) grid_single_image_pane

0x2ad4,	// (0x000550c2) list_single_image_pane_g1_ParamLimits

0x2ad4,	// (0x000550c2) list_single_image_pane_g1

0x2ae0,	// (0x000550ce) list_single_image_pane_g2_ParamLimits

0x2ae0,	// (0x000550ce) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x00062244) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x00062244) list_single_image_pane_g

0x7919,	// (0x00059f07) list_single_image_pane_t1_ParamLimits

0x7919,	// (0x00059f07) list_single_image_pane_t1

0xdcd4,	// (0x000602c2) cell_image_list_pane_ParamLimits

0xdcd4,	// (0x000602c2) cell_image_list_pane

0xdcee,	// (0x000602dc) cell_image_list_pane_g1

0xdcf7,	// (0x000602e5) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x00062249) cell_image_list_pane_g

0x7957,	// (0x00059f45) aid_size_cell_tb_trans_pane

0x2aba,	// (0x000550a8) bg_tb_trans_pane

0x7969,	// (0x00059f57) grid_tb_trans_pane

0x47cc,	// (0x00056dba) bg_tb_trans_pane_g1

0x47dc,	// (0x00056dca) bg_tb_trans_pane_g2

0x47d4,	// (0x00056dc2) bg_tb_trans_pane_g3

0x47ec,	// (0x00056dda) bg_tb_trans_pane_g4

0x47e4,	// (0x00056dd2) bg_tb_trans_pane_g5

0x480c,	// (0x00056dfa) bg_tb_trans_pane_g6

0x4804,	// (0x00056df2) bg_tb_trans_pane_g7

0x47f4,	// (0x00056de2) bg_tb_trans_pane_g8

0x47fc,	// (0x00056dea) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0006224e) bg_tb_trans_pane_g

0x797d,	// (0x00059f6b) cell_toolbar_trans_pane_ParamLimits

0x797d,	// (0x00059f6b) cell_toolbar_trans_pane

0x6d8f,	// (0x0005937d) cell_toolbar_trans_pane_g1

0xd8ef,	// (0x0005fedd) list_form2_midp_pane_t1

0xd8fd,	// (0x0005feeb) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x000620eb) list_form2_midp_pane_t

0x6a42,	// (0x00059030) scroll_pane_cp51_ParamLimits

0x6bf1,	// (0x000591df) form2_midp_wait_pane_g1

0x6bfa,	// (0x000591e8) form2_midp_wait_pane_g2

0x6c03,	// (0x000591f1) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x00062100) form2_midp_wait_pane_g

0x2187,	// (0x00054775) list_highlight_pane_cp21_ParamLimits

0x6c34,	// (0x00059222) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6c43,	// (0x00059231) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5dd1,	// (0x000583bf) list_single_2graphic_im_pane_ParamLimits

0x5dd1,	// (0x000583bf) list_single_2graphic_im_pane

0xdd00,	// (0x000602ee) list_single_2graphic_im_pane_g1_ParamLimits

0xdd00,	// (0x000602ee) list_single_2graphic_im_pane_g1

0xdd11,	// (0x000602ff) list_single_2graphic_im_pane_g2_ParamLimits

0xdd11,	// (0x000602ff) list_single_2graphic_im_pane_g2

0xdd1d,	// (0x0006030b) list_single_2graphic_im_pane_g3_ParamLimits

0xdd1d,	// (0x0006030b) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x00062261) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x00062261) list_single_2graphic_im_pane_g

0xdd31,	// (0x0006031f) list_single_2graphic_im_pane_t1_ParamLimits

0xdd31,	// (0x0006031f) list_single_2graphic_im_pane_t1

0x740c,	// (0x000599fa) list_single_graphic_2heading_pane_fp_ParamLimits

0x740c,	// (0x000599fa) list_single_graphic_2heading_pane_fp

0x141c,	// (0x00053a0a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x141c,	// (0x00053a0a) list_single_graphic_2heading_pane_fp_g1

0x7425,	// (0x00059a13) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7425,	// (0x00059a13) list_single_graphic_2heading_pane_fp_g2

0x2a34,	// (0x00055022) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2a34,	// (0x00055022) list_single_graphic_2heading_pane_fp_g3

0x2ed2,	// (0x000554c0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2ed2,	// (0x000554c0) list_single_graphic_2heading_pane_fp_g4

0x7431,	// (0x00059a1f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7431,	// (0x00059a1f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x00062188) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x00062188) list_single_graphic_2heading_pane_fp_g

0x16c5,	// (0x00053cb3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x16c5,	// (0x00053cb3) list_single_graphic_2heading_pane_fp_t1

0x1454,	// (0x00053a42) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1454,	// (0x00053a42) list_single_graphic_2heading_pane_fp_t2

0x16db,	// (0x00053cc9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x16db,	// (0x00053cc9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0006226a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0006226a) list_single_graphic_2heading_pane_fp_t

0x6e2f,	// (0x0005941d) fep_hwr_write_pane_g5_ParamLimits

0x6e2f,	// (0x0005941d) fep_hwr_write_pane_g5

0x6e3b,	// (0x00059429) fep_hwr_write_pane_g6_ParamLimits

0x6e3b,	// (0x00059429) fep_hwr_write_pane_g6

0x76e1,	// (0x00059ccf) eswt_shell_pane_ParamLimits

0x48be,	// (0x00056eac) bg_popup_window_pane_cp18_ParamLimits

0x5b1f,	// (0x0005810d) heading_pane_cp70

0x780b,	// (0x00059df9) popup_eswt_tasktip_window_t1_ParamLimits

0xcd94,	// (0x0005f382) aid_touch_tab_arrow_left

0xcda8,	// (0x0005f396) aid_touch_tab_arrow_right

0xae16,	// (0x0005d404) title_pane_g3_ParamLimits

0xae16,	// (0x0005d404) title_pane_g3

0x2a79,	// (0x00055067) set_value_pane_g1

0xccca,	// (0x0005f2b8) popup_toolbar_trans_pane_ParamLimits

0x7957,	// (0x00059f45) aid_size_cell_tb_trans_pane_ParamLimits

0x2aba,	// (0x000550a8) bg_tb_trans_pane_ParamLimits

0x7969,	// (0x00059f57) grid_tb_trans_pane_ParamLimits

0x2411,	// (0x000549ff) cont_note_pane_ParamLimits

0x2411,	// (0x000549ff) cont_note_pane

0x277f,	// (0x00054d6d) cont_snote2_single_text_pane_ParamLimits

0x277f,	// (0x00054d6d) cont_snote2_single_text_pane

0x277f,	// (0x00054d6d) cont_snote2_single_graphic_pane_ParamLimits

0x277f,	// (0x00054d6d) cont_snote2_single_graphic_pane

0x4e46,	// (0x00057434) cont_note_wait_pane_ParamLimits

0x4e46,	// (0x00057434) cont_note_wait_pane

0x4e46,	// (0x00057434) cont_note_image_pane_ParamLimits

0x4e46,	// (0x00057434) cont_note_image_pane

0x7a11,	// (0x00059fff) popup_note2_window_g1_ParamLimits

0x7a11,	// (0x00059fff) popup_note2_window_g1

0x7a42,	// (0x0005a030) popup_note2_window_t1_ParamLimits

0x7a42,	// (0x0005a030) popup_note2_window_t1

0x7a87,	// (0x0005a075) popup_note2_window_t2_ParamLimits

0x7a87,	// (0x0005a075) popup_note2_window_t2

0x7acc,	// (0x0005a0ba) popup_note2_window_t3_ParamLimits

0x7acc,	// (0x0005a0ba) popup_note2_window_t3

0x7b11,	// (0x0005a0ff) popup_note2_window_t4_ParamLimits

0x7b11,	// (0x0005a0ff) popup_note2_window_t4

0x2495,	// (0x00054a83) popup_note2_window_t5_ParamLimits

0x2495,	// (0x00054a83) popup_note2_window_t5

0x0004,

0xfc88,	// (0x00062276) popup_note2_window_t_ParamLimits

0xfc88,	// (0x00062276) popup_note2_window_t

0x7b40,	// (0x0005a12e) popup_note2_image_window_g1_ParamLimits

0x7b40,	// (0x0005a12e) popup_note2_image_window_g1

0x7b4c,	// (0x0005a13a) popup_note2_image_window_g2_ParamLimits

0x7b4c,	// (0x0005a13a) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x00062281) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x00062281) popup_note2_image_window_g

0x7b5e,	// (0x0005a14c) popup_note2_image_window_t1_ParamLimits

0x7b5e,	// (0x0005a14c) popup_note2_image_window_t1

0x7b76,	// (0x0005a164) popup_note2_image_window_t2_ParamLimits

0x7b76,	// (0x0005a164) popup_note2_image_window_t2

0x7b8e,	// (0x0005a17c) popup_note2_image_window_t3_ParamLimits

0x7b8e,	// (0x0005a17c) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x00062286) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x00062286) popup_note2_image_window_t

0x4e54,	// (0x00057442) popup_note2_wait_window_g1_ParamLimits

0x4e54,	// (0x00057442) popup_note2_wait_window_g1

0x7baa,	// (0x0005a198) popup_note2_wait_window_g2_ParamLimits

0x7baa,	// (0x0005a198) popup_note2_wait_window_g2

0x4e6c,	// (0x0005745a) popup_note2_wait_window_g3_ParamLimits

0x4e6c,	// (0x0005745a) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x0006228d) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x0006228d) popup_note2_wait_window_g

0x7bb6,	// (0x0005a1a4) popup_note2_wait_window_t1_ParamLimits

0x7bb6,	// (0x0005a1a4) popup_note2_wait_window_t1

0x7bd4,	// (0x0005a1c2) popup_note2_wait_window_t2_ParamLimits

0x7bd4,	// (0x0005a1c2) popup_note2_wait_window_t2

0x7bf2,	// (0x0005a1e0) popup_note2_wait_window_t3_ParamLimits

0x7bf2,	// (0x0005a1e0) popup_note2_wait_window_t3

0x7c04,	// (0x0005a1f2) popup_note2_wait_window_t4_ParamLimits

0x7c04,	// (0x0005a1f2) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x00062294) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x00062294) popup_note2_wait_window_t

0x7c16,	// (0x0005a204) wait_bar2_pane_ParamLimits

0x7c16,	// (0x0005a204) wait_bar2_pane

0x7c2e,	// (0x0005a21c) popup_snote2_single_text_window_g1_ParamLimits

0x7c2e,	// (0x0005a21c) popup_snote2_single_text_window_g1

0x7c56,	// (0x0005a244) popup_snote2_single_text_window_t1_ParamLimits

0x7c56,	// (0x0005a244) popup_snote2_single_text_window_t1

0x7ca2,	// (0x0005a290) popup_snote2_single_text_window_t2_ParamLimits

0x7ca2,	// (0x0005a290) popup_snote2_single_text_window_t2

0x7cee,	// (0x0005a2dc) popup_snote2_single_text_window_t3_ParamLimits

0x7cee,	// (0x0005a2dc) popup_snote2_single_text_window_t3

0x7d2f,	// (0x0005a31d) popup_snote2_single_text_window_t4_ParamLimits

0x7d2f,	// (0x0005a31d) popup_snote2_single_text_window_t4

0x7d65,	// (0x0005a353) popup_snote2_single_text_window_t5_ParamLimits

0x7d65,	// (0x0005a353) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x0006229d) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x0006229d) popup_snote2_single_text_window_t

0x7d90,	// (0x0005a37e) popup_snote2_single_graphic_window_g1_ParamLimits

0x7d90,	// (0x0005a37e) popup_snote2_single_graphic_window_g1

0x7db8,	// (0x0005a3a6) popup_snote2_single_graphic_window_g2_ParamLimits

0x7db8,	// (0x0005a3a6) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x000622a8) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x000622a8) popup_snote2_single_graphic_window_g

0x7de0,	// (0x0005a3ce) popup_snote2_single_graphic_window_t1_ParamLimits

0x7de0,	// (0x0005a3ce) popup_snote2_single_graphic_window_t1

0x7e2c,	// (0x0005a41a) popup_snote2_single_graphic_window_t2_ParamLimits

0x7e2c,	// (0x0005a41a) popup_snote2_single_graphic_window_t2

0x7cee,	// (0x0005a2dc) popup_snote2_single_graphic_window_t3_ParamLimits

0x7cee,	// (0x0005a2dc) popup_snote2_single_graphic_window_t3

0x7d2f,	// (0x0005a31d) popup_snote2_single_graphic_window_t4_ParamLimits

0x7d2f,	// (0x0005a31d) popup_snote2_single_graphic_window_t4

0x7d65,	// (0x0005a353) popup_snote2_single_graphic_window_t5_ParamLimits

0x7d65,	// (0x0005a353) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x000622ad) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x000622ad) popup_snote2_single_graphic_window_t

0x68ec,	// (0x00058eda) clock_nsta_pane_cp2_t1

0x68ec,	// (0x00058eda) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x000620c1) clock_nsta_pane_cp2_t

0x0206,	// (0x000527f4) form_field_data_wide_pane_g1_ParamLimits

0x2ad4,	// (0x000550c2) form_field_data_wide_pane_g2_ParamLimits

0x2ad4,	// (0x000550c2) form_field_data_wide_pane_g2

0x2ae0,	// (0x000550ce) form_field_data_wide_pane_g3_ParamLimits

0x2ae0,	// (0x000550ce) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x00061c86) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x00061c86) form_field_data_wide_pane_g

0xd7f7,	// (0x0005fde5) grid_touch_3_pane_ParamLimits

0xd7f7,	// (0x0005fde5) grid_touch_3_pane

0xdd62,	// (0x00060350) cell_touch_3_pane_ParamLimits

0xdd62,	// (0x00060350) cell_touch_3_pane

0x6d8f,	// (0x0005937d) cell_touch_3_pane_g1

0x6d8f,	// (0x0005937d) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x00062146) cell_touch_3_pane_g

0x24c7,	// (0x00054ab5) cont_query_data_pane

0x24cf,	// (0x00054abd) cont_query_data_pane_cp1

0x7eab,	// (0x0005a499) button_value_adjust_pane_cp7

0x7eb3,	// (0x0005a4a1) query_popup_pane_cp3

0x33ed,	// (0x000559db) bg_popup_sub_pane_cp22_ParamLimits

0x05aa,	// (0x00052b98) navi_navi_volume_pane_cp2

0x05c5,	// (0x00052bb3) popup_side_volume_key_window_g2

0x05d4,	// (0x00052bc2) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00061d1c) popup_side_volume_key_window_g

0x05f1,	// (0x00052bdf) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x00061d23) popup_side_volume_key_window_t

0x36a8,	// (0x00055c96) popup_side_volume_key_window_ParamLimits

0xb33f,	// (0x0005d92d) list_double_graphic_pane_g4_ParamLimits

0xb33f,	// (0x0005d92d) list_double_graphic_pane_g4

0xd1bf,	// (0x0005f7ad) list_single_2heading_msg_pane_ParamLimits

0xd1bf,	// (0x0005f7ad) list_single_2heading_msg_pane

0xd1e5,	// (0x0005f7d3) list_single_2heading_msg_pane_g1_ParamLimits

0xd1e5,	// (0x0005f7d3) list_single_2heading_msg_pane_g1

0xd1f1,	// (0x0005f7df) list_single_2heading_msg_pane_g2_ParamLimits

0xd1f1,	// (0x0005f7df) list_single_2heading_msg_pane_g2

0xd204,	// (0x0005f7f2) list_single_2heading_msg_pane_g3_ParamLimits

0xd204,	// (0x0005f7f2) list_single_2heading_msg_pane_g3

0xd210,	// (0x0005f7fe) list_single_2heading_msg_pane_g4_ParamLimits

0xd210,	// (0x0005f7fe) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x000622b8) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x000622b8) list_single_2heading_msg_pane_g

0xbdc0,	// (0x0005e3ae) list_single_2heading_msg_pane_t1_ParamLimits

0xbdc0,	// (0x0005e3ae) list_single_2heading_msg_pane_t1

0xbde8,	// (0x0005e3d6) list_single_2heading_msg_pane_t2_ParamLimits

0xbde8,	// (0x0005e3d6) list_single_2heading_msg_pane_t2

0xbe53,	// (0x0005e441) list_single_2heading_msg_pane_t3_ParamLimits

0xbe53,	// (0x0005e441) list_single_2heading_msg_pane_t3

0x178b,	// (0x00053d79) list_single_2heading_msg_pane_t4_ParamLimits

0x178b,	// (0x00053d79) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x000622c1) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x000622c1) list_single_2heading_msg_pane_t

0xd283,	// (0x0005f871) title_pane_g4_ParamLimits

0xd283,	// (0x0005f871) title_pane_g4

0x03b6,	// (0x000529a4) title_pane_stacon_g3_ParamLimits

0x03b6,	// (0x000529a4) title_pane_stacon_g3

0x79d4,	// (0x00059fc2) list_single_2graphic_im_pane_g4_ParamLimits

0x79d4,	// (0x00059fc2) list_single_2graphic_im_pane_g4

0x58bc,	// (0x00057eaa) popup_side_volume_key_window_cp

0x6132,	// (0x00058720) main_idle_act2_pane_t1

0x0a18,	// (0x00053006) toolbar_button_pane_g10

0xb1a3,	// (0x0005d791) popup_toolbar_window_cp1

0x68dd,	// (0x00058ecb) clock_nsta_pane_cp_t1

0x68dd,	// (0x00058ecb) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x000620bc) clock_nsta_pane_cp_t

0x05aa,	// (0x00052b98) navi_navi_volume_pane_cp2_ParamLimits

0x05b9,	// (0x00052ba7) popup_side_volume_key_window_g1_ParamLimits

0x05c5,	// (0x00052bb3) popup_side_volume_key_window_g2_ParamLimits

0x05d4,	// (0x00052bc2) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00061d1c) popup_side_volume_key_window_g_ParamLimits

0x114b,	// (0x00053739) fep_hwr_aid_pane

0x11f4,	// (0x000537e2) bg_fep_hwr_top_pane_g4_ParamLimits

0x6dff,	// (0x000593ed) fep_hwr_top_pane_g1_ParamLimits

0x6e11,	// (0x000593ff) fep_hwr_top_pane_g2_ParamLimits

0x1214,	// (0x00053802) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x00062111) fep_hwr_top_pane_g_ParamLimits

0x1229,	// (0x00053817) fep_hwr_top_text_pane_ParamLimits

0x5671,	// (0x00057c5f) aid_touch_tab_arrow_arrow_2

0x567a,	// (0x00057c68) aid_touch_tab_arrow_left_2

0x115f,	// (0x0005374d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1196,	// (0x00053784) fep_hwr_prediction_pane

0x6f67,	// (0x00059555) fep_vkb_prediction_pane

0xdb35,	// (0x00060123) fep_vkb_side_pane_g3_ParamLimits

0xdb35,	// (0x00060123) fep_vkb_side_pane_g3

0x13b8,	// (0x000539a6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x155e,	// (0x00053b4c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x156b,	// (0x00053b59) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x000621c0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x17b0,	// (0x00053d9e) fep_hwr_prediction_pane_g1

0x17ba,	// (0x00053da8) fep_hwr_prediction_pane_g2

0x17c2,	// (0x00053db0) fep_hwr_prediction_pane_g3

0x17ca,	// (0x00053db8) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x000622ca) fep_hwr_prediction_pane_g

0x7eda,	// (0x0005a4c8) fep_vkb_prediction_pane_g1

0x7ee4,	// (0x0005a4d2) fep_vkb_prediction_pane_g2

0x7eec,	// (0x0005a4da) fep_vkb_prediction_pane_g3

0x7ef4,	// (0x0005a4e2) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x000622d3) fep_vkb_prediction_pane_g

0x0d94,	// (0x00053382) slider_set_pane_g3

0x0da8,	// (0x00053396) slider_set_pane_g4

0x0dc0,	// (0x000533ae) slider_set_pane_g5

0x0d94,	// (0x00053382) slider_set_pane_g6

0x0dd6,	// (0x000533c4) slider_set_pane_g7

0x5d6a,	// (0x00058358) slider_form_pane_g3

0x5d73,	// (0x00058361) slider_form_pane_g4

0x5d7b,	// (0x00058369) slider_form_pane_g5

0x5d6a,	// (0x00058358) slider_form_pane_g6

0xd679,	// (0x0005fc67) slider_form_pane_g7

0x6400,	// (0x000589ee) slider_set_pane_vc_g3

0x6409,	// (0x000589f7) slider_set_pane_vc_g4

0x6412,	// (0x00058a00) slider_set_pane_vc_g5

0x6400,	// (0x000589ee) slider_set_pane_vc_g6

0x641b,	// (0x00058a09) slider_set_pane_vc_g7

0x6400,	// (0x000589ee) slider_form_pane_vc_g1

0x6409,	// (0x000589f7) slider_form_pane_vc_g2

0x6412,	// (0x00058a00) slider_form_pane_vc_g3

0x6400,	// (0x000589ee) slider_form_pane_vc_g4

0x65d0,	// (0x00058bbe) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x00062095) slider_form_pane_vc_g

0xd265,	// (0x0005f853) main_idle_act3_pane

0x7efc,	// (0x0005a4ea) ai3_links_pane

0xddac,	// (0x0006039a) popup_ai3_data_window_ParamLimits

0xddac,	// (0x0006039a) popup_ai3_data_window

0xd265,	// (0x0005f853) grid_ai3_links_pane

0xddca,	// (0x000603b8) cell_ai3_links_pane_ParamLimits

0xddca,	// (0x000603b8) cell_ai3_links_pane

0x7f3d,	// (0x0005a52b) bg_popup_sub_pane_cp11

0x7f4a,	// (0x0005a538) cell_ai3_links_pane_g1

0xd265,	// (0x0005f853) bg_popup_sub_pane_cp12

0x7f6f,	// (0x0005a55d) heading_ai3_data_pane

0x7f77,	// (0x0005a565) list_ai3_gene_pane

0x7f83,	// (0x0005a571) popup_ai3_data_window_g1

0x7f8b,	// (0x0005a579) heading_ai3_data_pane_g1

0x7f93,	// (0x0005a581) heading_ai3_data_pane_t1

0x7fa1,	// (0x0005a58f) list_double_ai3_gene_pane_ParamLimits

0x7fa1,	// (0x0005a58f) list_double_ai3_gene_pane

0x7fae,	// (0x0005a59c) list_single_ai3_gene_pane_ParamLimits

0x7fae,	// (0x0005a59c) list_single_ai3_gene_pane

0x6d54,	// (0x00059342) list_highlight_pane_cp7_ParamLimits

0x6d54,	// (0x00059342) list_highlight_pane_cp7

0x7fbb,	// (0x0005a5a9) list_single_a13_gene_pane_t1_ParamLimits

0x7fbb,	// (0x0005a5a9) list_single_a13_gene_pane_t1

0x7fd2,	// (0x0005a5c0) list_single_ai3_gene_pane_g1

0x7fdb,	// (0x0005a5c9) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x000622dc) list_single_ai3_gene_pane_g

0x7fe3,	// (0x0005a5d1) list_double_ai3_gene_pane_g1_ParamLimits

0x7fe3,	// (0x0005a5d1) list_double_ai3_gene_pane_g1

0x7fef,	// (0x0005a5dd) list_double_ai3_gene_pane_t1_ParamLimits

0x7fef,	// (0x0005a5dd) list_double_ai3_gene_pane_t1

0x800b,	// (0x0005a5f9) list_double_ai3_gene_pane_t2_ParamLimits

0x800b,	// (0x0005a5f9) list_double_ai3_gene_pane_t2

0x8020,	// (0x0005a60e) list_double_ai3_gene_pane_t3_ParamLimits

0x8020,	// (0x0005a60e) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x000622e1) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x000622e1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x16f1,	// (0x00053cdf) aid_size_min_col_2

0xdd96,	// (0x00060384) aid_size_min_msg_ParamLimits

0xdd96,	// (0x00060384) aid_size_min_msg

0xdb49,	// (0x00060137) fep_vkb_top_text_pane_g2_ParamLimits

0xdb49,	// (0x00060137) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x00062141) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x00062141) fep_vkb_top_text_pane_g

0xd265,	// (0x0005f853) main_hc_apps_shell_pane

0x803d,	// (0x0005a62b) grid_hc_apps_pane_ParamLimits

0x803d,	// (0x0005a62b) grid_hc_apps_pane

0x804c,	// (0x0005a63a) list_hc_apps_pane

0x8054,	// (0x0005a642) scroll_pane_cp37_ParamLimits

0x8054,	// (0x0005a642) scroll_pane_cp37

0xdde4,	// (0x000603d2) cell_hc_apps_pane_ParamLimits

0xdde4,	// (0x000603d2) cell_hc_apps_pane

0xdeae,	// (0x0006049c) cell_hc_apps_pane_g1_ParamLimits

0xdeae,	// (0x0006049c) cell_hc_apps_pane_g1

0x8149,	// (0x0005a737) cell_hc_apps_pane_g2_ParamLimits

0x8149,	// (0x0005a737) cell_hc_apps_pane_g2

0x8165,	// (0x0005a753) cell_hc_apps_pane_g3_ParamLimits

0x8165,	// (0x0005a753) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x000622e8) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x000622e8) cell_hc_apps_pane_g

0xdedb,	// (0x000604c9) cell_hc_apps_pane_t1_ParamLimits

0xdedb,	// (0x000604c9) cell_hc_apps_pane_t1

0x2411,	// (0x000549ff) grid_highlight_pane_cp10_ParamLimits

0x2411,	// (0x000549ff) grid_highlight_pane_cp10

0xdf1b,	// (0x00060509) list_single_hc_apps_pane_ParamLimits

0xdf1b,	// (0x00060509) list_single_hc_apps_pane

0xdf55,	// (0x00060543) list_single_hc_apps_pane_g1

0xd228,	// (0x0005f816) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x000622ef) list_single_hc_apps_pane_g

0xd241,	// (0x0005f82f) list_single_hc_apps_pane_g2_copy1

0xbec1,	// (0x0005e4af) list_single_hc_apps_pane_t1

0x2187,	// (0x00054775) bg_set_opt_pane_cp_ParamLimits

0xf4e0,	// (0x00061ace) setting_slider_pane_t1_ParamLimits

0xf4f6,	// (0x00061ae4) setting_slider_pane_t2_ParamLimits

0xf510,	// (0x00061afe) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x00061b64) setting_slider_pane_t_ParamLimits

0xf528,	// (0x00061b16) slider_set_pane_ParamLimits

0x08c6,	// (0x00052eb4) control_pane_g5_ParamLimits

0x08c6,	// (0x00052eb4) control_pane_g5

0x5b8b,	// (0x00058179) slider_set_pane_g1_ParamLimits

0x0d88,	// (0x00053376) slider_set_pane_g2_ParamLimits

0x0d94,	// (0x00053382) slider_set_pane_g3_ParamLimits

0x0da8,	// (0x00053396) slider_set_pane_g4_ParamLimits

0x0dc0,	// (0x000533ae) slider_set_pane_g5_ParamLimits

0x0d94,	// (0x00053382) slider_set_pane_g6_ParamLimits

0x0dd6,	// (0x000533c4) slider_set_pane_g7_ParamLimits

0xf975,	// (0x00061f63) slider_set_pane_g_ParamLimits

0x378d,	// (0x00055d7b) navi_icon_text_pane_ParamLimits

0xcd5b,	// (0x0005f349) aid_fill_nsta_2_ParamLimits

0xcd94,	// (0x0005f382) aid_touch_tab_arrow_left_ParamLimits

0xcda8,	// (0x0005f396) aid_touch_tab_arrow_right_ParamLimits

0xce43,	// (0x0005f431) clock_nsta_pane_ParamLimits

0xd3c8,	// (0x0005f9b6) navi_icon_pane_g1_ParamLimits

0xd3d4,	// (0x0005f9c2) navi_text_pane_t1_ParamLimits

0xd8d1,	// (0x0005febf) navi_icon_text_pane_g1_ParamLimits

0xd8dd,	// (0x0005fecb) navi_icon_text_pane_t1_ParamLimits

0xdf55,	// (0x00060543) list_single_hc_apps_pane_g1_ParamLimits

0xd228,	// (0x0005f816) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x000622ef) list_single_hc_apps_pane_g_ParamLimits

0xd241,	// (0x0005f82f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbec1,	// (0x0005e4af) list_single_hc_apps_pane_t1_ParamLimits

0xad80,	// (0x0005d36e) popup_toolbar2_fixed_window_ParamLimits

0xad80,	// (0x0005d36e) popup_toolbar2_fixed_window

0xccc0,	// (0x0005f2ae) popup_toolbar2_float_window

0xd265,	// (0x0005f853) bg_popup_sub_pane_cp27

0x821f,	// (0x0005a80d) grid_toolbar2_float_pane

0xd265,	// (0x0005f853) bg_popup_sub_pane_cp26

0x821f,	// (0x0005a80d) grid_toolbar2_fixed_pane

0xdf6e,	// (0x0006055c) cell_toolbar2_fixed_pane_ParamLimits

0xdf6e,	// (0x0006055c) cell_toolbar2_fixed_pane

0xdf8b,	// (0x00060579) cell_toolbar2_fixed_pane_g1

0x8240,	// (0x0005a82e) toolbar2_fixed_button_pane

0x47cc,	// (0x00056dba) toolbar2_fixed_button_pane_g1

0x47dc,	// (0x00056dca) toolbar2_fixed_button_pane_g2

0x47d4,	// (0x00056dc2) toolbar2_fixed_button_pane_g3

0x47ec,	// (0x00056dda) toolbar2_fixed_button_pane_g4

0x47e4,	// (0x00056dd2) toolbar2_fixed_button_pane_g5

0x47f4,	// (0x00056de2) toolbar2_fixed_button_pane_g6

0x47fc,	// (0x00056dea) toolbar2_fixed_button_pane_g7

0x480c,	// (0x00056dfa) toolbar2_fixed_button_pane_g8

0x4804,	// (0x00056df2) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00061e65) toolbar2_fixed_button_pane_g

0x8248,	// (0x0005a836) cell_toolbar2_float_pane_ParamLimits

0x8248,	// (0x0005a836) cell_toolbar2_float_pane

0x8259,	// (0x0005a847) cell_toolbar2_float_pane_g1

0x8240,	// (0x0005a82e) toolbar2_fixed_button_pane_cp

0xda31,	// (0x0006001f) fep_vkb_accented_list_pane_ParamLimits

0xda31,	// (0x0006001f) fep_vkb_accented_list_pane

0x1398,	// (0x00053986) bg_popup_fep_shadow_pane_g9

0x3911,	// (0x00055eff) bg_popup_fep_shadow_pane_cp3

0x2c2c,	// (0x0005521a) list_accented_list_pane

0x8262,	// (0x0005a850) list_single_accented_list_pane_ParamLimits

0x8262,	// (0x0005a850) list_single_accented_list_pane

0x3911,	// (0x00055eff) list_highlight_pane_cp10

0x8273,	// (0x0005a861) list_single_accented_list_pane_t1

0xcbdc,	// (0x0005f1ca) popup_slider_window_ParamLimits

0xcbdc,	// (0x0005f1ca) popup_slider_window

0x7ebb,	// (0x0005a4a9) aid_indentation_list_msg

0xe096,	// (0x00060684) bg_popup_window_pane_cp19

0x83ad,	// (0x0005a99b) popup_slider_window_g1

0x83c9,	// (0x0005a9b7) popup_slider_window_g2

0x83e5,	// (0x0005a9d3) popup_slider_window_g3

0x0005,

0xfd06,	// (0x000622f4) popup_slider_window_g

0x8441,	// (0x0005aa2f) popup_slider_window_t1

0x84b5,	// (0x0005aaa3) small_volume_slider_vertical_pane

0x6d8f,	// (0x0005937d) small_volume_slider_vertical_pane_g1

0x6d8f,	// (0x0005937d) small_volume_slider_vertical_pane_g2

0x84d1,	// (0x0005aabf) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x00062306) small_volume_slider_vertical_pane_g

0xacea,	// (0x0005d2d8) area_side_right_pane_ParamLimits

0xacea,	// (0x0005d2d8) area_side_right_pane

0xbeef,	// (0x0005e4dd) aid_size_side_button_ParamLimits

0xbeef,	// (0x0005e4dd) aid_size_side_button

0xbf08,	// (0x0005e4f6) grid_sctrl_middle_pane_ParamLimits

0xbf08,	// (0x0005e4f6) grid_sctrl_middle_pane

0x1834,	// (0x00053e22) sctrl_sk_bottom_pane

0x1845,	// (0x00053e33) sctrl_sk_top_pane

0x1857,	// (0x00053e45) aid_touch_sctrl_top

0x1864,	// (0x00053e52) bg_sctrl_sk_pane_ParamLimits

0x1864,	// (0x00053e52) bg_sctrl_sk_pane

0x1872,	// (0x00053e60) sctrl_sk_top_pane_g1

0x187f,	// (0x00053e6d) sctrl_sk_top_pane_t1

0x1857,	// (0x00053e45) aid_touch_sctrl_bottom

0x1864,	// (0x00053e52) bg_sctrl_sk_pane_cp_ParamLimits

0x1864,	// (0x00053e52) bg_sctrl_sk_pane_cp

0x189a,	// (0x00053e88) sctrl_sk_bottom_pane_g1

0x187f,	// (0x00053e6d) sctrl_sk_bottom_pane_t1

0xbf22,	// (0x0005e510) cell_sctrl_middle_pane_ParamLimits

0xbf22,	// (0x0005e510) cell_sctrl_middle_pane

0xbf35,	// (0x0005e523) aid_touch_sctrl_middle_ParamLimits

0xbf35,	// (0x0005e523) aid_touch_sctrl_middle

0xbf42,	// (0x0005e530) bg_sctrl_middle_pane_ParamLimits

0xbf42,	// (0x0005e530) bg_sctrl_middle_pane

0x1f14,	// (0x00054502) cell_sctrl_middle_pane_g1_ParamLimits

0x1f14,	// (0x00054502) cell_sctrl_middle_pane_g1

0xbf50,	// (0x0005e53e) cell_sctrl_middle_pane_g2_ParamLimits

0xbf50,	// (0x0005e53e) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x00062312) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x00062312) cell_sctrl_middle_pane_g

0x47cc,	// (0x00056dba) bg_sctrl_middle_pane_g1

0x47d4,	// (0x00056dc2) bg_sctrl_middle_pane_g2

0x47dc,	// (0x00056dca) bg_sctrl_middle_pane_g3

0x47e4,	// (0x00056dd2) bg_sctrl_middle_pane_g4

0x47ec,	// (0x00056dda) bg_sctrl_middle_pane_g5

0x47f4,	// (0x00056de2) bg_sctrl_middle_pane_g6

0x47fc,	// (0x00056dea) bg_sctrl_middle_pane_g7

0x4804,	// (0x00056df2) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x00062317) bg_sctrl_middle_pane_g

0x480c,	// (0x00056dfa) bg_sctrl_middle_pane_g8_copy1

0x47cc,	// (0x00056dba) bg_sctrl_sk_pane_g1

0x47dc,	// (0x00056dca) bg_sctrl_sk_pane_g2

0x47d4,	// (0x00056dc2) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00061e65) bg_sctrl_sk_pane_g

0x293d,	// (0x00054f2b) aid_size_touch_scroll_bar

0x47ec,	// (0x00056dda) bg_sctrl_sk_pane_g4

0x47e4,	// (0x00056dd2) bg_sctrl_sk_pane_g5

0x47f4,	// (0x00056de2) bg_sctrl_sk_pane_g6

0x47fc,	// (0x00056dea) bg_sctrl_sk_pane_g7

0x480c,	// (0x00056dfa) bg_sctrl_sk_pane_g8

0x4804,	// (0x00056df2) bg_sctrl_sk_pane_g9

0x3d39,	// (0x00056327) popup_fep_china_hwr2_fs_candidate_window

0xc698,	// (0x0005ec86) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc698,	// (0x0005ec86) popup_fep_china_hwr2_fs_control_window

0x13b8,	// (0x000539a6) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x0006230d) sctrl_sk_top_pane_g

0xe14e,	// (0x0006073c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe14e,	// (0x0006073c) aid_fep_china_hwr2_fs_cell

0xe199,	// (0x00060787) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe199,	// (0x00060787) bg_popup_fep_shadow_pane_cp4

0xe1b0,	// (0x0006079e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1b0,	// (0x0006079e) bg_popup_fep_shadow_pane_cp5

0xe1c2,	// (0x000607b0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1c2,	// (0x000607b0) popup_fep_china_hwr2_fs_control_bar_grid

0xe1d6,	// (0x000607c4) popup_fep_china_hwr2_fs_control_funtion_grid

0x8530,	// (0x0005ab1e) aid_fep_china_hwr2_fs_candi_cell

0xd265,	// (0x0005f853) bg_popup_fep_shadow_pane_cp6

0x853a,	// (0x0005ab28) popup_fep_china_hwr2_fs_candidate_grid

0xe1de,	// (0x000607cc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1de,	// (0x000607cc) cell_fep_china_hwr2_fs_funtion_grid

0x6d8f,	// (0x0005937d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x855c,	// (0x0005ab4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x855c,	// (0x0005ab4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x856a,	// (0x0005ab58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x856a,	// (0x0005ab58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x00062328) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x00062328) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1f6,	// (0x000607e4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1f6,	// (0x000607e4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe20b,	// (0x000607f9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe20b,	// (0x000607f9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x0006232d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x0006232d) cell_fep_china_hwr2_fs_funtion_grid_t

0x85b1,	// (0x0005ab9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x85b9,	// (0x0005aba7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x85c1,	// (0x0005abaf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x00062332) popup_fep_china_hwr2_fs_control_bar_grid_g

0x85c9,	// (0x0005abb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x85c9,	// (0x0005abb7) cell_fep_china_hwr2_fs_candidate_grid

0x85e8,	// (0x0005abd6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85f0,	// (0x0005abde) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6d8f,	// (0x0005937d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6d8f,	// (0x0005937d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x00062146) cell_fep_china_hwr2_fs_candidate_grid_g

0x85f8,	// (0x0005abe6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x43a8,	// (0x00056996) clock_nsta_pane_cp_24_ParamLimits

0x43a8,	// (0x00056996) clock_nsta_pane_cp_24

0x4428,	// (0x00056a16) indicator_nsta_pane_cp_24_ParamLimits

0x4428,	// (0x00056a16) indicator_nsta_pane_cp_24

0x54c9,	// (0x00057ab7) heading_pane_g1

0x0001,

0xf8dc,	// (0x00061eca) heading_pane_g

0x5f79,	// (0x00058567) grid_sct_catagory_button_pane

0x5fab,	// (0x00058599) scroll_pane_cp5_ParamLimits

0x6a4e,	// (0x0005903c) button_value_adjust_pane_cp5_ParamLimits

0x6a4e,	// (0x0005903c) button_value_adjust_pane_cp5

0x6b2b,	// (0x00059119) form2_midp_time_pane_ParamLimits

0x8606,	// (0x0005abf4) cell_sct_catagory_button_pane_ParamLimits

0x8606,	// (0x0005abf4) cell_sct_catagory_button_pane

0x6d54,	// (0x00059342) bg_button_pane_cp01_ParamLimits

0x6d54,	// (0x00059342) bg_button_pane_cp01

0x6d8f,	// (0x0005937d) cell_sct_catagory_button_pane_g1

0xcc5d,	// (0x0005f24b) popup_tb_extension_window

0xe227,	// (0x00060815) aid_size_cell_ext_ParamLimits

0xe227,	// (0x00060815) aid_size_cell_ext

0x277f,	// (0x00054d6d) bg_tb_trans_pane_cp1_ParamLimits

0x277f,	// (0x00054d6d) bg_tb_trans_pane_cp1

0xe24d,	// (0x0006083b) grid_tb_ext_pane_ParamLimits

0xe24d,	// (0x0006083b) grid_tb_ext_pane

0xe28d,	// (0x0006087b) cell_tb_ext_pane_ParamLimits

0xe28d,	// (0x0006087b) cell_tb_ext_pane

0xe2b5,	// (0x000608a3) cell_tb_ext_pane_g1_ParamLimits

0xe2b5,	// (0x000608a3) cell_tb_ext_pane_g1

0x869c,	// (0x0005ac8a) cell_tb_ext_pane_t1

0x2411,	// (0x000549ff) list_highlight_pane_cp11_ParamLimits

0x2411,	// (0x000549ff) list_highlight_pane_cp11

0xf279,	// (0x00061867) popup_uni_indicator_window_ParamLimits

0xf279,	// (0x00061867) popup_uni_indicator_window

0x2aba,	// (0x000550a8) bg_popup_sub_pane_cp14

0x86b7,	// (0x0005aca5) list_uniindi_pane

0x86c3,	// (0x0005acb1) uniindi_top_pane

0x2411,	// (0x000549ff) bg_uniindi_top_pane

0x86e4,	// (0x0005acd2) uniindi_top_pane_g1

0x86fa,	// (0x0005ace8) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x00062339) uniindi_top_pane_g

0x8724,	// (0x0005ad12) uniindi_top_pane_t1

0x8750,	// (0x0005ad3e) list_single_uniindi_pane_ParamLimits

0x8750,	// (0x0005ad3e) list_single_uniindi_pane

0x6d8f,	// (0x0005937d) bg_uniindi_top_pane_g1

0x8762,	// (0x0005ad50) list_single_uniindi_pane_g1

0x8775,	// (0x0005ad63) list_single_uniindi_pane_t1

0xf160,	// (0x0006174e) control_bg_pane

0x879a,	// (0x0005ad88) bg_sctrl_sk_pane_cp1

0x87a3,	// (0x0005ad91) bg_sctrl_sk_pane_cp2

0x87ac,	// (0x0005ad9a) control_bg_pane_g1

0x87b5,	// (0x0005ada3) control_bg_pane_g2

0x0001,

0xfd54,	// (0x00062342) control_bg_pane_g

0x6870,	// (0x00058e5e) cell_indicator_nsta_pane_g1_ParamLimits

0xd82a,	// (0x0005fe18) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x000620aa) cell_indicator_nsta_pane_g_ParamLimits

0x112a,	// (0x00053718) form2_midp_time_pane_t1_ParamLimits

0xc60e,	// (0x0005ebfc) main_idle_act4_pane_ParamLimits

0xc60e,	// (0x0005ebfc) main_idle_act4_pane

0xcc5d,	// (0x0005f24b) popup_tb_extension_window_ParamLimits

0xe275,	// (0x00060863) tb_ext_find_pane_ParamLimits

0xe275,	// (0x00060863) tb_ext_find_pane

0x87be,	// (0x0005adac) ai_gene_pane_1_cp1

0x3a5a,	// (0x00056048) ai_gene_pane_2_cp1

0x87c6,	// (0x0005adb4) list_single_idle_plugin_calendar_pane

0x87cf,	// (0x0005adbd) list_single_idle_plugin_notification_pane

0x87d8,	// (0x0005adc6) list_single_idle_plugin_player_pane

0xe2d2,	// (0x000608c0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2d2,	// (0x000608c0) list_single_idle_plugin_shortcut_pane

0xe2fa,	// (0x000608e8) main_idle_act4_pane_t1

0xe312,	// (0x00060900) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x00062347) main_idle_act4_pane_t

0xe32a,	// (0x00060918) middle_sk_idle_act4_pane_ParamLimits

0xe32a,	// (0x00060918) middle_sk_idle_act4_pane

0xe346,	// (0x00060934) popup_clock_digital_analogue_window_cp2

0xe36d,	// (0x0006095b) shortcut_wheel_idle_act4_pane_ParamLimits

0xe36d,	// (0x0006095b) shortcut_wheel_idle_act4_pane

0x6d8f,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g1

0x6d8f,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g2

0x6d8f,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g3

0x6d8f,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g4

0x6d8f,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g5

0x886b,	// (0x0005ae59) shortcut_wheel_idle_act4_pane_g6

0x8873,	// (0x0005ae61) shortcut_wheel_idle_act4_pane_g7

0x887b,	// (0x0005ae69) shortcut_wheel_idle_act4_pane_g8

0x8883,	// (0x0005ae71) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x0006234c) shortcut_wheel_idle_act4_pane_g

0xe164,	// (0x00060752) middle_sk_idle_act4_pane_g1_ParamLimits

0xe164,	// (0x00060752) middle_sk_idle_act4_pane_g1

0xe3ea,	// (0x000609d8) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3ea,	// (0x000609d8) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x0006236f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x0006236f) middle_sk_idle_act4_pane_g

0xe402,	// (0x000609f0) middle_sk_idle_act4_pane_t1_ParamLimits

0xe402,	// (0x000609f0) middle_sk_idle_act4_pane_t1

0xe431,	// (0x00060a1f) grid_ai_shortcut_pane_ParamLimits

0xe431,	// (0x00060a1f) grid_ai_shortcut_pane

0xe44e,	// (0x00060a3c) list_highlight_pane_cp16_ParamLimits

0xe44e,	// (0x00060a3c) list_highlight_pane_cp16

0xe45b,	// (0x00060a49) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe45b,	// (0x00060a49) list_single_idle_plugin_shortcut_pane_g1

0xe467,	// (0x00060a55) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe467,	// (0x00060a55) list_single_idle_plugin_shortcut_pane_g2

0xe485,	// (0x00060a73) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe485,	// (0x00060a73) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x00062374) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x00062374) list_single_idle_plugin_shortcut_pane_g

0xe49a,	// (0x00060a88) cell_ai_shortcut_pane_ParamLimits

0xe49a,	// (0x00060a88) cell_ai_shortcut_pane

0xe4b0,	// (0x00060a9e) cell_ai_shortcut_pane_g1_ParamLimits

0xe4b0,	// (0x00060a9e) cell_ai_shortcut_pane_g1

0x87be,	// (0x0005adac) ai_gene_pane_1_cp2

0x89b4,	// (0x0005afa2) ai_gene_pane_2_cp2

0x89bc,	// (0x0005afaa) list_highlight_pane_cp15

0x89c5,	// (0x0005afb3) list_single_idle_plugin_calendar_pane_g1

0x89bc,	// (0x0005afaa) list_highlight_pane_cp17

0x89cd,	// (0x0005afbb) list_single_idle_plugin_calendar_pane_g1_copy1

0x89d5,	// (0x0005afc3) list_single_idle_plugin_player_pane_g1

0x61e0,	// (0x000587ce) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x0006237b) list_single_idle_plugin_player_pane_g

0x89dd,	// (0x0005afcb) list_single_idle_plugin_player_pane_t1

0x89eb,	// (0x0005afd9) list_single_idle_plugin_player_pane_t2

0x89f9,	// (0x0005afe7) list_single_idle_plugin_player_pane_t3

0x8a07,	// (0x0005aff5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x00062380) list_single_idle_plugin_player_pane_t

0x8a15,	// (0x0005b003) wait_bar_pane_cp15

0x8a1d,	// (0x0005b00b) grid_ai_notification_pane

0x61e0,	// (0x000587ce) list_single_idle_plugin_notification_pane_g1

0xe4d2,	// (0x00060ac0) cell_ai_notification_pane_ParamLimits

0xe4d2,	// (0x00060ac0) cell_ai_notification_pane

0x8a33,	// (0x0005b021) cell_ai_notification_pane_g1

0x8a3b,	// (0x0005b029) cell_ai_notification_pane_t1

0xe4df,	// (0x00060acd) tb_ext_find_button_pane

0xe4e7,	// (0x00060ad5) tb_ext_find_pane_g1

0xe4ef,	// (0x00060add) tb_ext_find_pane_t1

0x32f8,	// (0x000558e6) tb_ext_find_button_pane_g1

0x8a67,	// (0x0005b055) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x00062389) tb_ext_find_button_pane_g

0xe2fa,	// (0x000608e8) main_idle_act4_pane_t1_ParamLimits

0xe312,	// (0x00060900) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x00062347) main_idle_act4_pane_t_ParamLimits

0xe346,	// (0x00060934) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe35d,	// (0x0006094b) sat_plugin_idle_act4_pane_ParamLimits

0xe35d,	// (0x0006094b) sat_plugin_idle_act4_pane

0xe4fd,	// (0x00060aeb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4fd,	// (0x00060aeb) sat_plugin_idle_act4_pane_t1

0xe515,	// (0x00060b03) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe515,	// (0x00060b03) sat_plugin_idle_act4_pane_t2

0xe52d,	// (0x00060b1b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe52d,	// (0x00060b1b) sat_plugin_idle_act4_pane_t3

0xe545,	// (0x00060b33) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe545,	// (0x00060b33) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x0006238e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x0006238e) sat_plugin_idle_act4_pane_t

0xf225,	// (0x00061813) popup_battery_window_ParamLimits

0xf225,	// (0x00061813) popup_battery_window

0x2411,	// (0x000549ff) bg_popup_sub_pane_cp25_ParamLimits

0x2411,	// (0x000549ff) bg_popup_sub_pane_cp25

0x8abc,	// (0x0005b0aa) popup_battery_window_g1_ParamLimits

0x8abc,	// (0x0005b0aa) popup_battery_window_g1

0x8ac8,	// (0x0005b0b6) popup_battery_window_t1_ParamLimits

0x8ac8,	// (0x0005b0b6) popup_battery_window_t1

0x8ada,	// (0x0005b0c8) popup_battery_window_t2_ParamLimits

0x8ada,	// (0x0005b0c8) popup_battery_window_t2

0x0001,

0xfda9,	// (0x00062397) popup_battery_window_t_ParamLimits

0xfda9,	// (0x00062397) popup_battery_window_t

0xc502,	// (0x0005eaf0) midp_canvas_pane_ParamLimits

0xc55d,	// (0x0005eb4b) midp_keypad_pane_ParamLimits

0xc55d,	// (0x0005eb4b) midp_keypad_pane

0x3c8f,	// (0x0005627d) main_midp_pane_ParamLimits

0x68fb,	// (0x00058ee9) signal_pane_g2_cp_ParamLimits

0xe55d,	// (0x00060b4b) aid_size_cell_midp_keypad_ParamLimits

0xe55d,	// (0x00060b4b) aid_size_cell_midp_keypad

0xe57b,	// (0x00060b69) midp_keyp_game_grid_pane_ParamLimits

0xe57b,	// (0x00060b69) midp_keyp_game_grid_pane

0xe5a2,	// (0x00060b90) midp_keyp_rocker_pane_ParamLimits

0xe5a2,	// (0x00060b90) midp_keyp_rocker_pane

0xe5e7,	// (0x00060bd5) midp_keyp_sk_left_pane_ParamLimits

0xe5e7,	// (0x00060bd5) midp_keyp_sk_left_pane

0xe63b,	// (0x00060c29) midp_keyp_sk_right_pane_ParamLimits

0xe63b,	// (0x00060c29) midp_keyp_sk_right_pane

0xd265,	// (0x0005f853) bg_button_pane_cp03

0xe68f,	// (0x00060c7d) midp_keyp_sk_left_pane_g1

0xd265,	// (0x0005f853) bg_button_pane_cp04

0xe68f,	// (0x00060c7d) midp_keyp_sk_right_pane_g1

0x6d8f,	// (0x0005937d) midp_keyp_rocker_pane_g1

0xe698,	// (0x00060c86) keyp_game_cell_pane_ParamLimits

0xe698,	// (0x00060c86) keyp_game_cell_pane

0xd265,	// (0x0005f853) bg_button_pane_cp02

0xe6be,	// (0x00060cac) keyp_game_cell_pane_g1

0xad2c,	// (0x0005d31a) popup_fep_vkb2_window_ParamLimits

0xad2c,	// (0x0005d31a) popup_fep_vkb2_window

0xbf5c,	// (0x0005e54a) aid_size_cell_vkb2_ParamLimits

0xbf5c,	// (0x0005e54a) aid_size_cell_vkb2

0xbf8a,	// (0x0005e578) popup_fep_vkb2_window_g1_ParamLimits

0xbf8a,	// (0x0005e578) popup_fep_vkb2_window_g1

0xbfda,	// (0x0005e5c8) vkb2_area_bottom_pane_ParamLimits

0xbfda,	// (0x0005e5c8) vkb2_area_bottom_pane

0xc036,	// (0x0005e624) vkb2_area_keypad_pane_ParamLimits

0xc036,	// (0x0005e624) vkb2_area_keypad_pane

0xc084,	// (0x0005e672) vkb2_area_top_pane_ParamLimits

0xc084,	// (0x0005e672) vkb2_area_top_pane

0xc10a,	// (0x0005e6f8) vkb2_top_entry_pane_ParamLimits

0xc10a,	// (0x0005e6f8) vkb2_top_entry_pane

0xc137,	// (0x0005e725) vkb2_top_grid_left_pane_ParamLimits

0xc137,	// (0x0005e725) vkb2_top_grid_left_pane

0xc157,	// (0x0005e745) vkb2_top_grid_right_pane_ParamLimits

0xc157,	// (0x0005e745) vkb2_top_grid_right_pane

0x1b10,	// (0x000540fe) vkb2_cell_keypad_pane_ParamLimits

0x1b10,	// (0x000540fe) vkb2_cell_keypad_pane

0xc19d,	// (0x0005e78b) vkb2_area_bottom_grid_pane_ParamLimits

0xc19d,	// (0x0005e78b) vkb2_area_bottom_grid_pane

0xc1c7,	// (0x0005e7b5) vkb2_area_bottom_pane_g1_ParamLimits

0xc1c7,	// (0x0005e7b5) vkb2_area_bottom_pane_g1

0xc1ed,	// (0x0005e7db) vkb2_area_bottom_pane_g2_ParamLimits

0xc1ed,	// (0x0005e7db) vkb2_area_bottom_pane_g2

0xc21e,	// (0x0005e80c) vkb2_area_bottom_pane_g3_ParamLimits

0xc21e,	// (0x0005e80c) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x0006239c) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x0006239c) vkb2_area_bottom_pane_g

0x1c9f,	// (0x0005428d) vkb2_top_cell_left_pane_ParamLimits

0x1c9f,	// (0x0005428d) vkb2_top_cell_left_pane

0xe6c7,	// (0x00060cb5) vkb2_top_entry_pane_g1_ParamLimits

0xe6c7,	// (0x00060cb5) vkb2_top_entry_pane_g1

0xe6d5,	// (0x00060cc3) vkb2_top_entry_pane_t1_ParamLimits

0xe6d5,	// (0x00060cc3) vkb2_top_entry_pane_t1

0x8c88,	// (0x0005b276) vkb2_top_entry_pane_t2_ParamLimits

0x8c88,	// (0x0005b276) vkb2_top_entry_pane_t2

0x8ca0,	// (0x0005b28e) vkb2_top_entry_pane_t3_ParamLimits

0x8ca0,	// (0x0005b28e) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x000623a3) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x000623a3) vkb2_top_entry_pane_t

0xc288,	// (0x0005e876) vkb2_top_grid_right_pane_g1_ParamLimits

0xc288,	// (0x0005e876) vkb2_top_grid_right_pane_g1

0x1d02,	// (0x000542f0) vkb2_top_grid_right_pane_g2_ParamLimits

0x1d02,	// (0x000542f0) vkb2_top_grid_right_pane_g2

0x1d1a,	// (0x00054308) vkb2_top_grid_right_pane_g3_ParamLimits

0x1d1a,	// (0x00054308) vkb2_top_grid_right_pane_g3

0xc29e,	// (0x0005e88c) vkb2_top_grid_right_pane_g4_ParamLimits

0xc29e,	// (0x0005e88c) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x000623aa) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x000623aa) vkb2_top_grid_right_pane_g

0x1d48,	// (0x00054336) vkb2_top_cell_left_pane_g1

0x1d5f,	// (0x0005434d) vkb2_cell_keypad_pane_g1_ParamLimits

0x1d5f,	// (0x0005434d) vkb2_cell_keypad_pane_g1

0x8cb6,	// (0x0005b2a4) vkb2_cell_keypad_pane_t1_ParamLimits

0x8cb6,	// (0x0005b2a4) vkb2_cell_keypad_pane_t1

0x1d83,	// (0x00054371) vkb2_cell_bottom_grid_pane_ParamLimits

0x1d83,	// (0x00054371) vkb2_cell_bottom_grid_pane

0x1dbc,	// (0x000543aa) vkb2_cell_bottom_grid_pane_g1

0xe38e,	// (0x0006097c) aid_call2_pane_cp02

0xe396,	// (0x00060984) aid_call_pane_cp02

0xe39e,	// (0x0006098c) clock_digital_number_pane_cp10

0xe3a6,	// (0x00060994) clock_digital_number_pane_cp11

0xe3ae,	// (0x0006099c) clock_digital_number_pane_cp12

0xe3b6,	// (0x000609a4) clock_digital_number_pane_cp13

0xe3be,	// (0x000609ac) clock_digital_separator_pane_cp10

0x32f8,	// (0x000558e6) popup_clock_digital_analogue_window_cp2_g1

0x32f8,	// (0x000558e6) popup_clock_digital_analogue_window_cp2_g2

0xe3c6,	// (0x000609b4) popup_clock_digital_analogue_window_cp2_g3

0x32f8,	// (0x000558e6) popup_clock_digital_analogue_window_cp2_g4

0xe3c6,	// (0x000609b4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x0006235f) popup_clock_digital_analogue_window_cp2_g

0xe3ce,	// (0x000609bc) popup_clock_digital_analogue_window_cp2_t1

0xe3dc,	// (0x000609ca) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x0006236a) popup_clock_digital_analogue_window_cp2_t

0x6d8f,	// (0x0005937d) clock_digital_number_pane_cp10_g1

0x6d8f,	// (0x0005937d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x00062146) clock_digital_number_pane_cp10_g

0x6d8f,	// (0x0005937d) clock_digital_separator_pane_cp10_g1

0x6d8f,	// (0x0005937d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x00062146) clock_digital_separator_pane_cp10_g

0x8706,	// (0x0005acf4) uniindi_top_pane_g3

0x8717,	// (0x0005ad05) uniindi_top_pane_g4

0x1b80,	// (0x0005416e) vkb2_row_keypad_pane_ParamLimits

0x1b80,	// (0x0005416e) vkb2_row_keypad_pane

0x1dd8,	// (0x000543c6) vkb2_cell_t_keypad_pane_ParamLimits

0x1dd8,	// (0x000543c6) vkb2_cell_t_keypad_pane

0x1de8,	// (0x000543d6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1de8,	// (0x000543d6) vkb2_cell_t_keypad_pane_cp08

0x1dfd,	// (0x000543eb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1dfd,	// (0x000543eb) vkb2_cell_t_keypad_pane_cp09

0x1e11,	// (0x000543ff) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1e11,	// (0x000543ff) vkb2_cell_t_keypad_pane_cp01

0x1e22,	// (0x00054410) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1e22,	// (0x00054410) vkb2_cell_t_keypad_pane_cp02

0x1e33,	// (0x00054421) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1e33,	// (0x00054421) vkb2_cell_t_keypad_pane_cp03

0x1e44,	// (0x00054432) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1e44,	// (0x00054432) vkb2_cell_t_keypad_pane_cp04

0x1e55,	// (0x00054443) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1e55,	// (0x00054443) vkb2_cell_t_keypad_pane_cp05

0x1e66,	// (0x00054454) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1e66,	// (0x00054454) vkb2_cell_t_keypad_pane_cp06

0x1e79,	// (0x00054467) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1e79,	// (0x00054467) vkb2_cell_t_keypad_pane_cp07

0x1e8e,	// (0x0005447c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1e8e,	// (0x0005447c) vkb2_cell_t_keypad_pane_cp10

0x13b8,	// (0x000539a6) vkb2_cell_t_keypad_pane_g1

0x8ccd,	// (0x0005b2bb) vkb2_cell_t_keypad_pane_t1

0xf160,	// (0x0006174e) popup_grid_graphic2_window

0xe70e,	// (0x00060cfc) aid_size_cell_graphic2_ParamLimits

0xe70e,	// (0x00060cfc) aid_size_cell_graphic2

0xe74c,	// (0x00060d3a) bg_popup_window_pane_cp21_ParamLimits

0xe74c,	// (0x00060d3a) bg_popup_window_pane_cp21

0xe75a,	// (0x00060d48) graphic2_pages_pane_ParamLimits

0xe75a,	// (0x00060d48) graphic2_pages_pane

0xe7b2,	// (0x00060da0) grid_graphic2_control_pane_ParamLimits

0xe7b2,	// (0x00060da0) grid_graphic2_control_pane

0xe7fa,	// (0x00060de8) grid_graphic2_pane_ParamLimits

0xe7fa,	// (0x00060de8) grid_graphic2_pane

0xe885,	// (0x00060e73) cell_graphic2_pane

0xd265,	// (0x0005f853) main_comp_mode_pane

0x7f77,	// (0x0005a565) list_ai3_gene_pane_ParamLimits

0xe096,	// (0x00060684) bg_popup_window_pane_cp19_ParamLimits

0x834b,	// (0x0005a939) bg_touch_area_indi_pane_ParamLimits

0x834b,	// (0x0005a939) bg_touch_area_indi_pane

0x8361,	// (0x0005a94f) bg_touch_area_indi_pane_cp01_ParamLimits

0x8361,	// (0x0005a94f) bg_touch_area_indi_pane_cp01

0x8379,	// (0x0005a967) bg_touch_area_indi_pane_cp02_ParamLimits

0x8379,	// (0x0005a967) bg_touch_area_indi_pane_cp02

0x8393,	// (0x0005a981) bg_touch_area_indi_pane_cp03_ParamLimits

0x8393,	// (0x0005a981) bg_touch_area_indi_pane_cp03

0x83ad,	// (0x0005a99b) popup_slider_window_g1_ParamLimits

0x83c9,	// (0x0005a9b7) popup_slider_window_g2_ParamLimits

0x83e5,	// (0x0005a9d3) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x000622f4) popup_slider_window_g_ParamLimits

0x8441,	// (0x0005aa2f) popup_slider_window_t1_ParamLimits

0x84b5,	// (0x0005aaa3) small_volume_slider_vertical_pane_ParamLimits

0xe885,	// (0x00060e73) cell_graphic2_pane_ParamLimits

0xe8e8,	// (0x00060ed6) bg_button_pane_cp10_ParamLimits

0xe8e8,	// (0x00060ed6) bg_button_pane_cp10

0xe8fb,	// (0x00060ee9) bg_button_pane_cp11_ParamLimits

0xe8fb,	// (0x00060ee9) bg_button_pane_cp11

0xe90e,	// (0x00060efc) graphic2_pages_pane_g1_ParamLimits

0xe90e,	// (0x00060efc) graphic2_pages_pane_g1

0xe929,	// (0x00060f17) graphic2_pages_pane_g2_ParamLimits

0xe929,	// (0x00060f17) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x000623b8) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x000623b8) graphic2_pages_pane_g

0xe941,	// (0x00060f2f) graphic2_pages_pane_t1_ParamLimits

0xe941,	// (0x00060f2f) graphic2_pages_pane_t1

0xe959,	// (0x00060f47) cell_graphic2_control_pane_ParamLimits

0xe959,	// (0x00060f47) cell_graphic2_control_pane

0xe975,	// (0x00060f63) cell_graphic2_pane_g1_ParamLimits

0xe975,	// (0x00060f63) cell_graphic2_pane_g1

0xe172,	// (0x00060760) cell_graphic2_pane_g2_ParamLimits

0xe172,	// (0x00060760) cell_graphic2_pane_g2

0xe18c,	// (0x0006077a) cell_graphic2_pane_g3_ParamLimits

0xe18c,	// (0x0006077a) cell_graphic2_pane_g3

0xe17f,	// (0x0006076d) cell_graphic2_pane_g4_ParamLimits

0xe17f,	// (0x0006076d) cell_graphic2_pane_g4

0xe982,	// (0x00060f70) cell_graphic2_pane_g5_ParamLimits

0xe982,	// (0x00060f70) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x000623bd) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x000623bd) cell_graphic2_pane_g

0xe9a2,	// (0x00060f90) cell_graphic2_pane_t1_ParamLimits

0xe9a2,	// (0x00060f90) cell_graphic2_pane_t1

0x54bd,	// (0x00057aab) grid_highlight_pane_cp11_ParamLimits

0x54bd,	// (0x00057aab) grid_highlight_pane_cp11

0x2411,	// (0x000549ff) bg_button_pane_cp05

0xe9d7,	// (0x00060fc5) cell_graphic2_control_pane_g1

0x6d8f,	// (0x0005937d) bg_touch_area_indi_pane_g1

0x8f9e,	// (0x0005b58c) aid_cmod_rocker_key_size

0x8fa8,	// (0x0005b596) aid_cmode_itu_key_size

0x8fb2,	// (0x0005b5a0) main_cmode_video_pane

0x8fbc,	// (0x0005b5aa) main_comp_mode_itu_pane

0x8fc8,	// (0x0005b5b6) main_comp_mode_rocker_pane

0x8fd4,	// (0x0005b5c2) cell_cmode_rocker_pane_ParamLimits

0x8fd4,	// (0x0005b5c2) cell_cmode_rocker_pane

0x8fe8,	// (0x0005b5d6) cell_cmode_itu_pane_ParamLimits

0x8fe8,	// (0x0005b5d6) cell_cmode_itu_pane

0x2aba,	// (0x000550a8) bg_button_pane_cp06_ParamLimits

0x2aba,	// (0x000550a8) bg_button_pane_cp06

0x7019,	// (0x00059607) cell_cmode_rocker_pane_g1_ParamLimits

0x7019,	// (0x00059607) cell_cmode_rocker_pane_g1

0x855c,	// (0x0005ab4a) cell_cmode_rocker_pane_g2_ParamLimits

0x855c,	// (0x0005ab4a) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x000623cd) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x000623cd) cell_cmode_rocker_pane_g

0xd265,	// (0x0005f853) bg_button_pane_cp07

0x8fff,	// (0x0005b5ed) cell_cmode_itu_pane_g1

0x9008,	// (0x0005b5f6) cell_cmode_itu_pane_t1

0x9016,	// (0x0005b604) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x000623d2) cell_cmode_itu_pane_t

0x878a,	// (0x0005ad78) aid_touch_ctrl_left

0x8792,	// (0x0005ad80) aid_touch_ctrl_right

0xd265,	// (0x0005f853) compa_mode_pane

0xe9ff,	// (0x00060fed) aid_cmod_rocker_key_size_cp

0xea09,	// (0x00060ff7) aid_cmode_itu_key_size_cp

0x9038,	// (0x0005b626) compa_mode_pane_g1

0x9040,	// (0x0005b62e) compa_mode_pane_g2

0x9048,	// (0x0005b636) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x000623d7) compa_mode_pane_g

0xea13,	// (0x00061001) main_comp_mode_itu_pane_cp

0xea1b,	// (0x00061009) main_comp_mode_rocker_pane_cp

0xea23,	// (0x00061011) cell_cmode_itu_pane_cp_ParamLimits

0xea23,	// (0x00061011) cell_cmode_itu_pane_cp

0xea38,	// (0x00061026) cell_cmode_rocker_pane_cp_ParamLimits

0xea38,	// (0x00061026) cell_cmode_rocker_pane_cp

0x2aba,	// (0x000550a8) bg_button_pane_cp06_cp_ParamLimits

0x2aba,	// (0x000550a8) bg_button_pane_cp06_cp

0x7019,	// (0x00059607) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7019,	// (0x00059607) cell_cmode_rocker_pane_g1_cp

0x6d8f,	// (0x0005937d) cell_cmode_rocker_pane_g2_cp

0xd265,	// (0x0005f853) bg_button_pane_cp07_cp

0xea4a,	// (0x00061038) cell_cmode_itu_pane_g1_cp

0xea53,	// (0x00061041) cell_cmode_itu_pane_t1_cp

0xea53,	// (0x00061041) cell_cmode_itu_pane_t2_cp

0xd671,	// (0x0005fc5f) settings_code_pane_cp2

0x2187,	// (0x00054775) bg_popup_window_pane_cp3_ParamLimits

0x25ff,	// (0x00054bed) heading_pane_cp3_ParamLimits

0x260b,	// (0x00054bf9) listscroll_popup_graphic_pane_ParamLimits

0x114b,	// (0x00053739) fep_hwr_aid_pane_ParamLimits

0x1857,	// (0x00053e45) aid_touch_sctrl_top_ParamLimits

0x1872,	// (0x00053e60) sctrl_sk_top_pane_g1_ParamLimits

0x13b8,	// (0x000539a6) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x0006230d) sctrl_sk_top_pane_g_ParamLimits

0x187f,	// (0x00053e6d) sctrl_sk_top_pane_t1_ParamLimits

0x1857,	// (0x00053e45) aid_touch_sctrl_bottom_ParamLimits

0x187f,	// (0x00053e6d) sctrl_sk_bottom_pane_t1_ParamLimits

0x86d0,	// (0x0005acbe) aid_area_touch_clock

0xc0cc,	// (0x0005e6ba) aid_vkb2_area_top_pane_cell_ParamLimits

0xc0cc,	// (0x0005e6ba) aid_vkb2_area_top_pane_cell

0xc177,	// (0x0005e765) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc177,	// (0x0005e765) aid_vkb2_area_bottom_pane_cell

0x8c5a,	// (0x0005b248) popup_char_count_window

0x909e,	// (0x0005b68c) popup_char_count_window_g1

0x90a7,	// (0x0005b695) popup_char_count_window_g2

0x90b0,	// (0x0005b69e) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x000623de) popup_char_count_window_g

0x90b9,	// (0x0005b6a7) popup_char_count_window_t1

0x192c,	// (0x00053f1a) popup_fep_char_preview_window_ParamLimits

0x192c,	// (0x00053f1a) popup_fep_char_preview_window

0xc0ec,	// (0x0005e6da) vkb2_top_candi_pane_ParamLimits

0xc0ec,	// (0x0005e6da) vkb2_top_candi_pane

0xea61,	// (0x0006104f) cell_vkb2_top_candi_pane_ParamLimits

0xea61,	// (0x0006104f) cell_vkb2_top_candi_pane

0x1ea3,	// (0x00054491) bg_popup_fep_char_preview_window_ParamLimits

0x1ea3,	// (0x00054491) bg_popup_fep_char_preview_window

0x1eb1,	// (0x0005449f) popup_fep_char_preview_window_t1_ParamLimits

0x1eb1,	// (0x0005449f) popup_fep_char_preview_window_t1

0x9118,	// (0x0005b706) bg_popup_fep_char_preview_window_g1

0x9120,	// (0x0005b70e) bg_popup_fep_char_preview_window_g2

0x9128,	// (0x0005b716) bg_popup_fep_char_preview_window_g3

0x9130,	// (0x0005b71e) bg_popup_fep_char_preview_window_g4

0x9138,	// (0x0005b726) bg_popup_fep_char_preview_window_g5

0x1eeb,	// (0x000544d9) bg_popup_fep_char_preview_window_g6

0x9140,	// (0x0005b72e) bg_popup_fep_char_preview_window_g7

0x9148,	// (0x0005b736) bg_popup_fep_char_preview_window_g8

0x9150,	// (0x0005b73e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x000623e5) bg_popup_fep_char_preview_window_g

0x13b8,	// (0x000539a6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x13b8,	// (0x000539a6) cell_vkb2_top_candi_pane_g1

0x13c6,	// (0x000539b4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x13c6,	// (0x000539b4) cell_vkb2_top_candi_pane_g2

0x8bba,	// (0x0005b1a8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8bba,	// (0x0005b1a8) cell_vkb2_top_candi_pane_g3

0x1ef3,	// (0x000544e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1ef3,	// (0x000544e1) cell_vkb2_top_candi_pane_g4

0x7518,	// (0x00059b06) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7518,	// (0x00059b06) cell_vkb2_top_candi_pane_g5

0x1f14,	// (0x00054502) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1f14,	// (0x00054502) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x000623f8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x000623f8) cell_vkb2_top_candi_pane_g

0x1f22,	// (0x00054510) cell_vkb2_top_candi_pane_t1

0x0d74,	// (0x00053362) aid_size_touch_slider_mark_ParamLimits

0x0d74,	// (0x00053362) aid_size_touch_slider_mark

0xe796,	// (0x00060d84) grid_graphic2_catg_pane_ParamLimits

0xe796,	// (0x00060d84) grid_graphic2_catg_pane

0xe854,	// (0x00060e42) popup_grid_graphic2_window_t1_ParamLimits

0xe854,	// (0x00060e42) popup_grid_graphic2_window_t1

0xe86a,	// (0x00060e58) popup_grid_graphic2_window_t2_ParamLimits

0xe86a,	// (0x00060e58) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x000623b3) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x000623b3) popup_grid_graphic2_window_t

0x2411,	// (0x000549ff) bg_button_pane_cp05_ParamLimits

0xe9d7,	// (0x00060fc5) cell_graphic2_control_pane_g1_ParamLimits

0xeab5,	// (0x000610a3) cell_graphic2_catg_pane_ParamLimits

0xeab5,	// (0x000610a3) cell_graphic2_catg_pane

0xd265,	// (0x0005f853) bg_button_pane_cp12

0xeac7,	// (0x000610b5) cell_graphic2_catg_pane_g1

0x869c,	// (0x0005ac8a) cell_tb_ext_pane_t1_ParamLimits

0x1cbf,	// (0x000542ad) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1cbf,	// (0x000542ad) vkb2_top_cell_right_narrow_pane

0x1cd7,	// (0x000542c5) vkb2_top_cell_right_wide_pane_ParamLimits

0x1cd7,	// (0x000542c5) vkb2_top_cell_right_wide_pane

0x113d,	// (0x0005372b) bg_vkb2_func_pane_ParamLimits

0x113d,	// (0x0005372b) bg_vkb2_func_pane

0x1d48,	// (0x00054336) vkb2_top_cell_left_pane_g1_ParamLimits

0x113d,	// (0x0005372b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x113d,	// (0x0005372b) bg_vkb2_fuc_pane_cp03

0x1dbc,	// (0x000543aa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x47d4,	// (0x00056dc2) bg_vkb2_func_pane_g1

0x47dc,	// (0x00056dca) bg_vkb2_func_pane_g2

0x47ec,	// (0x00056dda) bg_vkb2_func_pane_g3

0x47e4,	// (0x00056dd2) bg_vkb2_func_pane_g4

0x47f4,	// (0x00056de2) bg_vkb2_func_pane_g5

0x47fc,	// (0x00056dea) bg_vkb2_func_pane_g6

0x4804,	// (0x00056df2) bg_vkb2_func_pane_g7

0x480c,	// (0x00056dfa) bg_vkb2_func_pane_g8

0x47cc,	// (0x00056dba) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x00062405) bg_vkb2_func_pane_g

0x113d,	// (0x0005372b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x113d,	// (0x0005372b) bg_vkb2_fuc_pane_cp01

0x1d48,	// (0x00054336) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1d48,	// (0x00054336) vkb2_top_cell_right_wide_pane_g1

0x113d,	// (0x0005372b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x113d,	// (0x0005372b) bg_vkb2_fuc_pane_cp02

0x1dbc,	// (0x000543aa) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1dbc,	// (0x000543aa) vkb2_top_cell_right_narrow_pane_g1

0xdfd0,	// (0x000605be) aid_touch_area_decrease_ParamLimits

0xdfd0,	// (0x000605be) aid_touch_area_decrease

0xe00a,	// (0x000605f8) aid_touch_area_increase_ParamLimits

0xe00a,	// (0x000605f8) aid_touch_area_increase

0xe032,	// (0x00060620) aid_touch_area_mute_ParamLimits

0xe032,	// (0x00060620) aid_touch_area_mute

0xe062,	// (0x00060650) aid_touch_area_slider_ParamLimits

0xe062,	// (0x00060650) aid_touch_area_slider

0xe0a2,	// (0x00060690) popup_slider_window_g4_ParamLimits

0xe0a2,	// (0x00060690) popup_slider_window_g4

0xe0ca,	// (0x000606b8) popup_slider_window_g5_ParamLimits

0xe0ca,	// (0x000606b8) popup_slider_window_g5

0xe0fe,	// (0x000606ec) popup_slider_window_g6_ParamLimits

0xe0fe,	// (0x000606ec) popup_slider_window_g6

0x846f,	// (0x0005aa5d) popup_slider_window_t2_ParamLimits

0x846f,	// (0x0005aa5d) popup_slider_window_t2

0x0001,

0xfd13,	// (0x00062301) popup_slider_window_t_ParamLimits

0xfd13,	// (0x00062301) popup_slider_window_t

0xe11a,	// (0x00060708) slider_pane_ParamLimits

0xe11a,	// (0x00060708) slider_pane

0x9173,	// (0x0005b761) slider_pane_g1_ParamLimits

0x9173,	// (0x0005b761) slider_pane_g1

0x9187,	// (0x0005b775) slider_pane_g2_ParamLimits

0x9187,	// (0x0005b775) slider_pane_g2

0x919d,	// (0x0005b78b) slider_pane_g3_ParamLimits

0x919d,	// (0x0005b78b) slider_pane_g3

0x0003,

0xfe2a,	// (0x00062418) slider_pane_g_ParamLimits

0xfe2a,	// (0x00062418) slider_pane_g

0xcca9,	// (0x0005f297) popup_tb_float_extension_window_ParamLimits

0xcca9,	// (0x0005f297) popup_tb_float_extension_window

0x91c9,	// (0x0005b7b7) aid_size_cell_tb_float_ext

0xd265,	// (0x0005f853) bg_popup_sub_window_cp28

0x91d5,	// (0x0005b7c3) grid_tb_float_ext_pane

0x91e1,	// (0x0005b7cf) cell_tb_float_ext_pane_ParamLimits

0x91e1,	// (0x0005b7cf) cell_tb_float_ext_pane

0x91fd,	// (0x0005b7eb) cell_tb_float_ext_pane_g1

0x9206,	// (0x0005b7f4) grid_highlight_pane_cp12

0xbd7c,	// (0x0005e36a) cell_last_hwr_side_pane_ParamLimits

0xbd7c,	// (0x0005e36a) cell_last_hwr_side_pane

0x6d8f,	// (0x0005937d) cell_last_hwr_side_pane_g1

0x920f,	// (0x0005b7fd) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x00062421) cell_last_hwr_side_pane_g

0xc253,	// (0x0005e841) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc253,	// (0x0005e841) vkb2_area_bottom_space_btn_pane

0x13b8,	// (0x000539a6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8ccd,	// (0x0005b2bb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1f22,	// (0x00054510) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1f40,	// (0x0005452e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1f40,	// (0x0005452e) vkb2_area_bottom_space_btn_pane_g1

0x1f7a,	// (0x00054568) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1f7a,	// (0x00054568) vkb2_area_bottom_space_btn_pane_g2

0x1fb0,	// (0x0005459e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1fb0,	// (0x0005459e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x00062426) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x00062426) vkb2_area_bottom_space_btn_pane_g

0x1202,	// (0x000537f0) cel_fep_hwr_func_pane_ParamLimits

0x1202,	// (0x000537f0) cel_fep_hwr_func_pane

0xbd51,	// (0x0005e33f) cell_hwr_side_button_pane_ParamLimits

0xbd51,	// (0x0005e33f) cell_hwr_side_button_pane

0x86d0,	// (0x0005acbe) aid_area_touch_clock_ParamLimits

0x2411,	// (0x000549ff) bg_uniindi_top_pane_ParamLimits

0x86e4,	// (0x0005acd2) uniindi_top_pane_g1_ParamLimits

0x86fa,	// (0x0005ace8) uniindi_top_pane_g2_ParamLimits

0x8706,	// (0x0005acf4) uniindi_top_pane_g3_ParamLimits

0x8717,	// (0x0005ad05) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x00062339) uniindi_top_pane_g_ParamLimits

0x8724,	// (0x0005ad12) uniindi_top_pane_t1_ParamLimits

0x2411,	// (0x000549ff) bg_vkb2_func_pane_cp01_ParamLimits

0x2411,	// (0x000549ff) bg_vkb2_func_pane_cp01

0x9218,	// (0x0005b806) cel_fep_hwr_func_pane_g1_ParamLimits

0x9218,	// (0x0005b806) cel_fep_hwr_func_pane_g1

0x2411,	// (0x000549ff) bg_vkb2_func_pane_cp02_ParamLimits

0x2411,	// (0x000549ff) bg_vkb2_func_pane_cp02

0x9218,	// (0x0005b806) cell_hwr_side_button_pane_g1_ParamLimits

0x9218,	// (0x0005b806) cell_hwr_side_button_pane_g1

0x464d,	// (0x00056c3b) status_pane_g4_ParamLimits

0x464d,	// (0x00056c3b) status_pane_g4

0x4667,	// (0x00056c55) status_pane_t1

0x6b89,	// (0x00059177) form2_midp_gauge_slider_cont_pane

0x6b91,	// (0x0005917f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd988,	// (0x0005ff76) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd99a,	// (0x0005ff88) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x000620f9) form2_midp_gauge_slider_pane_t_ParamLimits

0x6bc7,	// (0x000591b5) form2_midp_slider_pane_ParamLimits

0x18f4,	// (0x00053ee2) aid_size_cell_func_vkb2_ParamLimits

0x18f4,	// (0x00053ee2) aid_size_cell_func_vkb2

0x91b5,	// (0x0005b7a3) slider_pane_g4_ParamLimits

0x91b5,	// (0x0005b7a3) slider_pane_g4

0xc2b4,	// (0x0005e8a2) form2_midp_gauge_slider_pane_t2_cp01

0xc2c2,	// (0x0005e8b0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc2c2,	// (0x0005e8b0) form2_midp_gauge_slider_pane_t3_cp01

0x2025,	// (0x00054613) form2_midp_slider_pane_cp01

0xd265,	// (0x0005f853) navi_smil_pane

0x9251,	// (0x0005b83f) navi_smil_pane_g1

0x9259,	// (0x0005b847) navi_smil_pane_t1

0x9226,	// (0x0005b814) form2_midp_slider_pane_g1

0x922f,	// (0x0005b81d) form2_midp_slider_pane_g2

0x9237,	// (0x0005b825) form2_midp_slider_pane_g3

0x9226,	// (0x0005b814) form2_midp_slider_pane_g4

0xead0,	// (0x000610be) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x0006242f) form2_midp_slider_pane_g

0x1fea,	// (0x000545d8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1fea,	// (0x000545d8) vkb2_area_bottom_space_btn_pane_g4

0xce8e,	// (0x0005f47c) lc0_navi_pane_ParamLimits

0xce8e,	// (0x0005f47c) lc0_navi_pane

0xcefe,	// (0x0005f4ec) lc0_stat_indi_pane_ParamLimits

0xcefe,	// (0x0005f4ec) lc0_stat_indi_pane

0xcf13,	// (0x0005f501) ls0_title_pane_ParamLimits

0xcf13,	// (0x0005f501) ls0_title_pane

0x2aba,	// (0x000550a8) bg_popup_sub_pane_cp14_ParamLimits

0x86b7,	// (0x0005aca5) list_uniindi_pane_ParamLimits

0x86c3,	// (0x0005acb1) uniindi_top_pane_ParamLimits

0x8762,	// (0x0005ad50) list_single_uniindi_pane_g1_ParamLimits

0x8775,	// (0x0005ad63) list_single_uniindi_pane_t1_ParamLimits

0xc2df,	// (0x0005e8cd) lc0_stat_clock_pane_ParamLimits

0xc2df,	// (0x0005e8cd) lc0_stat_clock_pane

0xead9,	// (0x000610c7) lc0_stat_indi_pane_g1_ParamLimits

0xead9,	// (0x000610c7) lc0_stat_indi_pane_g1

0xeae6,	// (0x000610d4) lc0_stat_indi_pane_g2_ParamLimits

0xeae6,	// (0x000610d4) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x0006243a) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x0006243a) lc0_stat_indi_pane_g

0xc2ec,	// (0x0005e8da) lc0_uni_indicator_pane_ParamLimits

0xc2ec,	// (0x0005e8da) lc0_uni_indicator_pane

0xeaf3,	// (0x000610e1) ls0_title_pane_g1_ParamLimits

0xeaf3,	// (0x000610e1) ls0_title_pane_g1

0xeb07,	// (0x000610f5) ls0_title_pane_t1_ParamLimits

0xeb07,	// (0x000610f5) ls0_title_pane_t1

0xc2f9,	// (0x0005e8e7) lc0_uni_indicator_pane_g1_ParamLimits

0xc2f9,	// (0x0005e8e7) lc0_uni_indicator_pane_g1

0x92cb,	// (0x0005b8b9) lc0_stat_clock_pane_t1

0xd265,	// (0x0005f853) main_ai5_pane

0x92d9,	// (0x0005b8c7) ai5_sk_pane_ParamLimits

0x92d9,	// (0x0005b8c7) ai5_sk_pane

0xeb35,	// (0x00061123) cell_ai5_widget_pane_ParamLimits

0xeb35,	// (0x00061123) cell_ai5_widget_pane

0x935c,	// (0x0005b94a) aid_size_cell_widget_grid

0x9370,	// (0x0005b95e) bg_ai5_widget_pane_ParamLimits

0x9370,	// (0x0005b95e) bg_ai5_widget_pane

0xebc2,	// (0x000611b0) cell_ai5_widget_pane_g2

0xebd2,	// (0x000611c0) cell_ai5_widget_pane_g3

0xebf1,	// (0x000611df) cell_ai5_widget_pane_g4

0xebfd,	// (0x000611eb) cell_ai5_widget_pane_g5

0xec09,	// (0x000611f7) cell_ai5_widget_pane_g6

0xec15,	// (0x00061203) cell_ai5_widget_pane_g7

0xec5d,	// (0x0006124b) cell_ai5_widget_pane_t1_ParamLimits

0xec5d,	// (0x0006124b) cell_ai5_widget_pane_t1

0xec7a,	// (0x00061268) cell_ai5_widget_pane_t2_ParamLimits

0xec7a,	// (0x00061268) cell_ai5_widget_pane_t2

0xec92,	// (0x00061280) cell_ai5_widget_pane_t3_ParamLimits

0xec92,	// (0x00061280) cell_ai5_widget_pane_t3

0xecaa,	// (0x00061298) cell_ai5_widget_pane_t4_ParamLimits

0xecaa,	// (0x00061298) cell_ai5_widget_pane_t4

0xecc4,	// (0x000612b2) cell_ai5_widget_pane_t5_ParamLimits

0xecc4,	// (0x000612b2) cell_ai5_widget_pane_t5

0x94bb,	// (0x0005baa9) cell_ai5_widget_pane_t6_ParamLimits

0x94bb,	// (0x0005baa9) cell_ai5_widget_pane_t6

0x94cd,	// (0x0005babb) cell_ai5_widget_pane_t7_ParamLimits

0x94cd,	// (0x0005babb) cell_ai5_widget_pane_t7

0xece3,	// (0x000612d1) cell_ai5_widget_pane_t8_ParamLimits

0xece3,	// (0x000612d1) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x00062454) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x00062454) cell_ai5_widget_pane_t

0xed2f,	// (0x0006131d) grid_ai5_widget_pane

0x2aba,	// (0x000550a8) highlight_cell_ai5_widget_pane_ParamLimits

0x2aba,	// (0x000550a8) highlight_cell_ai5_widget_pane

0xed46,	// (0x00061334) ai5_sk_left_pane

0xed50,	// (0x0006133e) ai5_sk_middle_pane

0xed5a,	// (0x00061348) ai5_sk_right_pane

0x9567,	// (0x0005bb55) bg_ai5_widget_pane_g1_ParamLimits

0x9567,	// (0x0005bb55) bg_ai5_widget_pane_g1

0x9573,	// (0x0005bb61) bg_ai5_widget_pane_g2_ParamLimits

0x9573,	// (0x0005bb61) bg_ai5_widget_pane_g2

0x957f,	// (0x0005bb6d) bg_ai5_widget_pane_g3_ParamLimits

0x957f,	// (0x0005bb6d) bg_ai5_widget_pane_g3

0x958b,	// (0x0005bb79) bg_ai5_widget_pane_g4_ParamLimits

0x958b,	// (0x0005bb79) bg_ai5_widget_pane_g4

0x9597,	// (0x0005bb85) bg_ai5_widget_pane_g5_ParamLimits

0x9597,	// (0x0005bb85) bg_ai5_widget_pane_g5

0x95a3,	// (0x0005bb91) bg_ai5_widget_pane_g6_ParamLimits

0x95a3,	// (0x0005bb91) bg_ai5_widget_pane_g6

0x95af,	// (0x0005bb9d) bg_ai5_widget_pane_g7_ParamLimits

0x95af,	// (0x0005bb9d) bg_ai5_widget_pane_g7

0x95bb,	// (0x0005bba9) bg_ai5_widget_pane_g8_ParamLimits

0x95bb,	// (0x0005bba9) bg_ai5_widget_pane_g8

0x95c7,	// (0x0005bbb5) bg_ai5_widget_pane_g9_ParamLimits

0x95c7,	// (0x0005bbb5) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x00062469) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x00062469) bg_ai5_widget_pane_g

0x95ee,	// (0x0005bbdc) cell_shortcut_ai5_widget_pane_ParamLimits

0x95ee,	// (0x0005bbdc) cell_shortcut_ai5_widget_pane

0x2253,	// (0x00054841) bg_cell_shortcut_ai5_widget_pane

0x9600,	// (0x0005bbee) cell_grid_ai5_widget_pane_g1

0x9609,	// (0x0005bbf7) highlight_cell_shortcut_ai5_widget_pane

0x47d4,	// (0x00056dc2) ai5_sk_left_pane_g1

0x9611,	// (0x0005bbff) ai5_sk_left_pane_g2

0x9619,	// (0x0005bc07) ai5_sk_left_pane_g3

0x9621,	// (0x0005bc0f) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x0006247c) ai5_sk_left_pane_g

0x9629,	// (0x0005bc17) ai5_sk_left_pane_t1

0x47dc,	// (0x00056dca) ai5_sk_right_pane_g1

0x9637,	// (0x0005bc25) ai5_sk_right_pane_g2

0x963f,	// (0x0005bc2d) ai5_sk_right_pane_g3

0x9647,	// (0x0005bc35) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x00062485) ai5_sk_right_pane_g

0x964f,	// (0x0005bc3d) ai5_sk_right_pane_t1

0x47dc,	// (0x00056dca) ai5_sk_middle_pane_g1

0x47d4,	// (0x00056dc2) ai5_sk_middle_pane_g2

0x47f4,	// (0x00056de2) ai5_sk_middle_pane_g3

0x963f,	// (0x0005bc2d) ai5_sk_middle_pane_g4

0x9619,	// (0x0005bc07) ai5_sk_middle_pane_g5

0x965d,	// (0x0005bc4b) ai5_sk_middle_pane_g6

0xed7f,	// (0x0006136d) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x0006248e) ai5_sk_middle_pane_g

0xcd7a,	// (0x0005f368) aid_touch_area_size_lc0_ParamLimits

0xcd7a,	// (0x0005f368) aid_touch_area_size_lc0

0x13e7,	// (0x000539d5) cell_hwr_candidate_pane_t1_ParamLimits

0x4304,	// (0x000568f2) aid_touch_navi_pane

0xd01e,	// (0x0005f60c) status_dt_navi_pane_ParamLimits

0xd01e,	// (0x0005f60c) status_dt_navi_pane

0xd036,	// (0x0005f624) status_dt_sta_pane_ParamLimits

0xd036,	// (0x0005f624) status_dt_sta_pane

0xed87,	// (0x00061375) dt_sta_controll_pane

0xed94,	// (0x00061382) dt_sta_indi_pane

0xeda1,	// (0x0006138f) dt_sta_title_pane

0x2411,	// (0x000549ff) bg_dt_sta_indi_pane_ParamLimits

0x2411,	// (0x000549ff) bg_dt_sta_indi_pane

0xedb3,	// (0x000613a1) dt_sta_battery_pane

0xedbb,	// (0x000613a9) dt_sta_indi_pane_g1

0xedc4,	// (0x000613b2) dt_sta_indi_pane_g2

0xedcd,	// (0x000613bb) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x0006249d) dt_sta_indi_pane_g

0xedd6,	// (0x000613c4) dt_sta_signal_pane

0x2aba,	// (0x000550a8) bg_dt_sta_title_pane_ParamLimits

0x2aba,	// (0x000550a8) bg_dt_sta_title_pane

0xeddf,	// (0x000613cd) dt_sta_title_pane_g1

0xede7,	// (0x000613d5) dt_sta_title_pane_t1_ParamLimits

0xede7,	// (0x000613d5) dt_sta_title_pane_t1

0xd265,	// (0x0005f853) bg_dt_sta_control_pane

0xedfc,	// (0x000613ea) dt_sta_controll_pane_g1

0xee05,	// (0x000613f3) bg_dt_sta_title_pane_g1

0xee0e,	// (0x000613fc) bg_dt_sta_title_pane_g2

0xee17,	// (0x00061405) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x000624a4) bg_dt_sta_title_pane_g

0x6d8f,	// (0x0005937d) bg_dt_sta_indi_pane_g1

0x970b,	// (0x0005bcf9) dt_sta_signal_pane_g1

0x9713,	// (0x0005bd01) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x000624ab) dt_sta_signal_pane_g

0x971b,	// (0x0005bd09) dt_sta_battery_pane_g1

0x9724,	// (0x0005bd12) dt_sta_battery_pane_t1

0x6d8f,	// (0x0005937d) bg_dt_sta_control_pane_g1

0x340f,	// (0x000559fd) fep_china_uni_eep_pane

0x3417,	// (0x00055a05) fep_china_uni_entry_pane_ParamLimits

0x3427,	// (0x00055a15) popup_fep_china_uni_window_g1_ParamLimits

0x3437,	// (0x00055a25) popup_fep_china_uni_window_g2_ParamLimits

0x3437,	// (0x00055a25) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00061d28) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00061d28) popup_fep_china_uni_window_g

0x9733,	// (0x0005bd21) fep_china_uni_eep_pane_g1

0x973b,	// (0x0005bd29) fep_china_uni_eep_pane_t1

0x9248,	// (0x0005b836) aid_touch_area_size_smil_player

0x445c,	// (0x00056a4a) lc0_clock_pane

0x465b,	// (0x00056c49) status_pane_g5_ParamLimits

0x465b,	// (0x00056c49) status_pane_g5

0xc7d3,	// (0x0005edc1) popup_keymap_window

0x4619,	// (0x00056c07) status_icon_pane

0xebd2,	// (0x000611c0) cell_ai5_widget_pane_g3_ParamLimits

0xebf1,	// (0x000611df) cell_ai5_widget_pane_g4_ParamLimits

0xebfd,	// (0x000611eb) cell_ai5_widget_pane_g5_ParamLimits

0xec21,	// (0x0006120f) cell_ai5_widget_pane_g8_ParamLimits

0xec21,	// (0x0006120f) cell_ai5_widget_pane_g8

0xec35,	// (0x00061223) cell_ai5_widget_pane_g9_ParamLimits

0xec35,	// (0x00061223) cell_ai5_widget_pane_g9

0xec49,	// (0x00061237) cell_ai5_widget_pane_g10_ParamLimits

0xec49,	// (0x00061237) cell_ai5_widget_pane_g10

0x974a,	// (0x0005bd38) status_icon_pane_g1

0xd265,	// (0x0005f853) bg_popup_sub_pane_cp13

0x9752,	// (0x0005bd40) popup_keymap_window_t1

0xc5b5,	// (0x0005eba3) control_pane_g6_ParamLimits

0xc5b5,	// (0x0005eba3) control_pane_g6

0xc5c2,	// (0x0005ebb0) control_pane_g7_ParamLimits

0xc5c2,	// (0x0005ebb0) control_pane_g7

0xc5cf,	// (0x0005ebbd) control_pane_g8_ParamLimits

0xc5cf,	// (0x0005ebbd) control_pane_g8

0xed87,	// (0x00061375) dt_sta_controll_pane_ParamLimits

0xed94,	// (0x00061382) dt_sta_indi_pane_ParamLimits

0xeda1,	// (0x0006138f) dt_sta_title_pane_ParamLimits

0x2946,	// (0x00054f34) aid_size_touch_scroll_bar_cale

0xf23d,	// (0x0006182b) popup_discreet_window_ParamLimits

0xf23d,	// (0x0006182b) popup_discreet_window

0xad76,	// (0x0005d364) popup_sk_window

0x4e46,	// (0x00057434) bg_popup_sub_pane_cp28_ParamLimits

0x4e46,	// (0x00057434) bg_popup_sub_pane_cp28

0x9760,	// (0x0005bd4e) popup_discreet_window_g1_ParamLimits

0x9760,	// (0x0005bd4e) popup_discreet_window_g1

0x9780,	// (0x0005bd6e) popup_discreet_window_t1_ParamLimits

0x9780,	// (0x0005bd6e) popup_discreet_window_t1

0x979e,	// (0x0005bd8c) popup_discreet_window_t2_ParamLimits

0x979e,	// (0x0005bd8c) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x000624b0) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x000624b0) popup_discreet_window_t

0x205b,	// (0x00054649) popup_sk_window_g1

0x2065,	// (0x00054653) popup_sk_window_g2

0x0001,

0xfec9,	// (0x000624b7) popup_sk_window_g

0x97f0,	// (0x0005bdde) popup_sk_window_t1

0x97fe,	// (0x0005bdec) popup_sk_window_t1_copy1

0xebc2,	// (0x000611b0) cell_ai5_widget_pane_g2_ParamLimits

0xecf5,	// (0x000612e3) cell_ai5_widget_pane_t9_ParamLimits

0xecf5,	// (0x000612e3) cell_ai5_widget_pane_t9

0xd265,	// (0x0005f853) main_fep_fshwr2_pane

0xee20,	// (0x0006140e) aid_fshwr2_btn_pane

0xee28,	// (0x00061416) aid_fshwr2_syb_pane

0xee30,	// (0x0006141e) aid_fshwr2_txt_pane

0xee38,	// (0x00061426) fshwr2_func_candi_pane

0xee42,	// (0x00061430) fshwr2_hwr_syb_pane

0xee4e,	// (0x0006143c) fshwr2_icf_pane

0xd265,	// (0x0005f853) fshwr2_icf_bg_pane

0xee58,	// (0x00061446) fshwr2_icf_pane_t1_ParamLimits

0xee58,	// (0x00061446) fshwr2_icf_pane_t1

0x6d8f,	// (0x0005937d) fshwr2_func_candi_pane_g1

0x9871,	// (0x0005be5f) fshwr2_func_candi_row_pane_ParamLimits

0x9871,	// (0x0005be5f) fshwr2_func_candi_row_pane

0xee70,	// (0x0006145e) cell_fshwr2_syb_pane_ParamLimits

0xee70,	// (0x0006145e) cell_fshwr2_syb_pane

0x7019,	// (0x00059607) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7019,	// (0x00059607) fshwr2_hwr_syb_pane_g1

0xd265,	// (0x0005f853) bg_popup_call_pane_cp01

0x989c,	// (0x0005be8a) fshwr2_func_candi_cell_pane_ParamLimits

0x989c,	// (0x0005be8a) fshwr2_func_candi_cell_pane

0x98ce,	// (0x0005bebc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x98ce,	// (0x0005bebc) fshwr2_func_candi_cell_bg_pane

0x98e8,	// (0x0005bed6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x98e8,	// (0x0005bed6) fshwr2_func_candi_cell_pane_g1

0x9908,	// (0x0005bef6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9908,	// (0x0005bef6) fshwr2_func_candi_cell_pane_t1

0xd265,	// (0x0005f853) bg_button_pane_cp08

0x3911,	// (0x00055eff) cell_fshwr2_syb_bg_pane

0xee89,	// (0x00061477) cell_fshwr2_syb_bg_pane_g1

0xee91,	// (0x0006147f) cell_fshwr2_syb_bg_pane_t1

0x2aba,	// (0x000550a8) main_tmo_pane

0xd447,	// (0x0005fa35) uni_indicator_pane_g1_ParamLimits

0xd45c,	// (0x0005fa4a) uni_indicator_pane_g2_ParamLimits

0xd471,	// (0x0005fa5f) uni_indicator_pane_g3_ParamLimits

0xd487,	// (0x0005fa75) uni_indicator_pane_g4_ParamLimits

0xd487,	// (0x0005fa75) uni_indicator_pane_g4

0xd49b,	// (0x0005fa89) uni_indicator_pane_g5_ParamLimits

0xd49b,	// (0x0005fa89) uni_indicator_pane_g5

0xd4af,	// (0x0005fa9d) uni_indicator_pane_g6_ParamLimits

0xd4af,	// (0x0005fa9d) uni_indicator_pane_g6

0xf932,	// (0x00061f20) uni_indicator_pane_g_ParamLimits

0xdfa0,	// (0x0006058e) popup_tmo_note_window_ParamLimits

0xdfa0,	// (0x0006058e) popup_tmo_note_window

0xd265,	// (0x0005f853) fshwr2_bg_pane

0x98f9,	// (0x0005bee7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x98f9,	// (0x0005bee7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x000624bc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x000624bc) fshwr2_func_candi_cell_pane_g

0x6d8f,	// (0x0005937d) bg_popup_window_pane_cp01

0x9932,	// (0x0005bf20) bg_popup_window_pane_g1_cp01

0x993b,	// (0x0005bf29) bg_popup_window_pane_cp22_ParamLimits

0x993b,	// (0x0005bf29) bg_popup_window_pane_cp22

0x9949,	// (0x0005bf37) listscroll_tmo_link_pane_ParamLimits

0x9949,	// (0x0005bf37) listscroll_tmo_link_pane

0x9989,	// (0x0005bf77) popup_tmo_note_window_g1_ParamLimits

0x9989,	// (0x0005bf77) popup_tmo_note_window_g1

0x9996,	// (0x0005bf84) tmo_note_info_pane_ParamLimits

0x9996,	// (0x0005bf84) tmo_note_info_pane

0xeea0,	// (0x0006148e) list_tmo_note_info_pane_g1_ParamLimits

0xeea0,	// (0x0006148e) list_tmo_note_info_pane_g1

0x99c7,	// (0x0005bfb5) list_tmo_note_info_pane_g2_ParamLimits

0x99c7,	// (0x0005bfb5) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x000624c1) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x000624c1) list_tmo_note_info_pane_g

0x99e3,	// (0x0005bfd1) list_tmo_note_info_text_pane_ParamLimits

0x99e3,	// (0x0005bfd1) list_tmo_note_info_text_pane

0x9a68,	// (0x0005c056) list_tmo_link_pane

0x9a75,	// (0x0005c063) scroll_pane_cp20

0x9a82,	// (0x0005c070) list_single_tmo_link_pane_ParamLimits

0x9a82,	// (0x0005c070) list_single_tmo_link_pane

0x9a92,	// (0x0005c080) list_single_tmo_link_pane_t1

0x9aa0,	// (0x0005c08e) list_tmo_note_info_text_pane_t1_ParamLimits

0x9aa0,	// (0x0005c08e) list_tmo_note_info_text_pane_t1

0xb7b4,	// (0x0005dda2) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb7b4,	// (0x0005dda2) aid_size_touch_scroll_bar_cp01

0xb6e3,	// (0x0005dcd1) aid_size_touch_slider_marker

0xad66,	// (0x0005d354) popup_settings_window_ParamLimits

0xad66,	// (0x0005d354) popup_settings_window

0x09be,	// (0x00052fac) popup_candi_list_indi_window

0x4304,	// (0x000568f2) aid_touch_navi_pane_ParamLimits

0x182b,	// (0x00053e19) rs_clock_indi_pane

0x1834,	// (0x00053e22) sctrl_sk_bottom_pane_ParamLimits

0x1845,	// (0x00053e33) sctrl_sk_top_pane_ParamLimits

0x1946,	// (0x00053f34) popup_fep_tooltip_window

0x935c,	// (0x0005b94a) aid_size_cell_widget_grid_ParamLimits

0xebb6,	// (0x000611a4) cell_ai5_widget_pane_g1_ParamLimits

0xebb6,	// (0x000611a4) cell_ai5_widget_pane_g1

0xec09,	// (0x000611f7) cell_ai5_widget_pane_g6_ParamLimits

0xec15,	// (0x00061203) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x0006243f) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0006243f) cell_ai5_widget_pane_g

0xed19,	// (0x00061307) cell_ai5_widget_pane_t10_ParamLimits

0xed19,	// (0x00061307) cell_ai5_widget_pane_t10

0xed2f,	// (0x0006131d) grid_ai5_widget_pane_ParamLimits

0xed64,	// (0x00061352) cell_contacts_ai5_widget_pane_ParamLimits

0xed64,	// (0x00061352) cell_contacts_ai5_widget_pane

0x97b3,	// (0x0005bda1) popup_discreet_window_t3_ParamLimits

0x97b3,	// (0x0005bda1) popup_discreet_window_t3

0x9842,	// (0x0005be30) popup_fshwr2_char_preview_window_ParamLimits

0x9842,	// (0x0005be30) popup_fshwr2_char_preview_window

0xeeb7,	// (0x000614a5) tmo_note_info_pane_t1

0xeecc,	// (0x000614ba) tmo_note_info_pane_t2

0xeee5,	// (0x000614d3) tmo_note_info_pane_t3

0x9a44,	// (0x0005c032) tmo_note_info_pane_t4

0x9a56,	// (0x0005c044) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x000624c6) tmo_note_info_pane_t

0x9a68,	// (0x0005c056) list_tmo_link_pane_ParamLimits

0x9a75,	// (0x0005c063) scroll_pane_cp20_ParamLimits

0xd265,	// (0x0005f853) bg_popup_fep_char_preview_window_cp01

0x9ab9,	// (0x0005c0a7) popup_fshwr2_char_preview_window_t1

0x9ac7,	// (0x0005c0b5) popup_candi_list_indi_window_g1

0x9ad0,	// (0x0005c0be) bg_cell_contacts_ai5_widget_pane

0x9adc,	// (0x0005c0ca) cell_contacts_ai5_widget_pane_g1

0x9af0,	// (0x0005c0de) cell_contacts_ai5_widget_pane_g2

0x9aff,	// (0x0005c0ed) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x000624d1) cell_contacts_ai5_widget_pane_g

0x9b12,	// (0x0005c100) cell_contacts_ai5_widget_pane_t1

0x2aba,	// (0x000550a8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef5f,	// (0x0006154d) settings_container_pane

0x3911,	// (0x00055eff) listscroll_set_pane_copy1

0x654a,	// (0x00058b38) scroll_pane_cp121_copy1

0x9b98,	// (0x0005c186) set_content_pane_copy1

0xef6b,	// (0x00061559) aid_height_set_list_copy1_ParamLimits

0xef6b,	// (0x00061559) aid_height_set_list_copy1

0x5bd9,	// (0x000581c7) aid_size_parent_copy1_ParamLimits

0x5bd9,	// (0x000581c7) aid_size_parent_copy1

0xef77,	// (0x00061565) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef77,	// (0x00061565) button_value_adjust_pane_cp6_copy1

0x3c8f,	// (0x0005627d) list_highlight_pane_cp2_copy1_ParamLimits

0x3c8f,	// (0x0005627d) list_highlight_pane_cp2_copy1

0xef8b,	// (0x00061579) list_set_pane_copy1_ParamLimits

0xef8b,	// (0x00061579) list_set_pane_copy1

0xeefa,	// (0x000614e8) main_pane_set_t1_copy1_ParamLimits

0xeefa,	// (0x000614e8) main_pane_set_t1_copy1

0xef34,	// (0x00061522) main_pane_set_t2_copy1_ParamLimits

0xef34,	// (0x00061522) main_pane_set_t2_copy1

0xf052,	// (0x00061640) main_pane_set_t3_copy1

0xf060,	// (0x0006164e) main_pane_set_t4_copy1

0xef53,	// (0x00061541) set_content_pane_g1_copy1_ParamLimits

0xef53,	// (0x00061541) set_content_pane_g1_copy1

0xf06e,	// (0x0006165c) setting_code_pane_copy1

0x9cad,	// (0x0005c29b) setting_slider_graphic_pane_copy1

0x9cad,	// (0x0005c29b) setting_slider_pane_copy1

0x9cad,	// (0x0005c29b) setting_text_pane_copy1

0x9cb7,	// (0x0005c2a5) setting_volume_pane_copy1

0xf078,	// (0x00061666) settings_code_pane_cp2_copy1

0xf080,	// (0x0006166e) settings_code_pane_cp_copy1_ParamLimits

0xf080,	// (0x0006166e) settings_code_pane_cp_copy1

0xf094,	// (0x00061682) volume_set_pane_copy1

0xf0a0,	// (0x0006168e) volume_set_pane_g10_copy1

0xf36b,	// (0x00061959) volume_set_pane_g1_copy1

0xf375,	// (0x00061963) volume_set_pane_g2_copy1

0xf37f,	// (0x0006196d) volume_set_pane_g3_copy1

0xf389,	// (0x00061977) volume_set_pane_g4_copy1

0xf393,	// (0x00061981) volume_set_pane_g5_copy1

0xf39d,	// (0x0006198b) volume_set_pane_g6_copy1

0xf3a7,	// (0x00061995) volume_set_pane_g7_copy1

0xf3b1,	// (0x0006199f) volume_set_pane_g8_copy1

0xf3bb,	// (0x000619a9) volume_set_pane_g9_copy1

0x2187,	// (0x00054775) bg_set_opt_pane_cp_copy1_ParamLimits

0x2187,	// (0x00054775) bg_set_opt_pane_cp_copy1

0x9d4e,	// (0x0005c33c) setting_slider_pane_t1_copy1_ParamLimits

0x9d4e,	// (0x0005c33c) setting_slider_pane_t1_copy1

0xf3c5,	// (0x000619b3) setting_slider_pane_t2_copy1_ParamLimits

0xf3c5,	// (0x000619b3) setting_slider_pane_t2_copy1

0xf3df,	// (0x000619cd) setting_slider_pane_t3_copy1_ParamLimits

0xf3df,	// (0x000619cd) setting_slider_pane_t3_copy1

0xf3f7,	// (0x000619e5) slider_set_pane_copy1_ParamLimits

0xf3f7,	// (0x000619e5) slider_set_pane_copy1

0x2b21,	// (0x0005510f) set_opt_bg_pane_g1_copy2

0x2b29,	// (0x00055117) set_opt_bg_pane_g2_copy2

0x9db4,	// (0x0005c3a2) set_opt_bg_pane_g3_copy2

0x2b39,	// (0x00055127) set_opt_bg_pane_g4_copy2

0x2b41,	// (0x0005512f) set_opt_bg_pane_g5_copy2

0x2b49,	// (0x00055137) set_opt_bg_pane_g6_copy2

0xf40d,	// (0x000619fb) set_opt_bg_pane_g7_copy2

0x9dc8,	// (0x0005c3b6) set_opt_bg_pane_g8_copy2

0x9dd2,	// (0x0005c3c0) set_opt_bg_pane_g9_copy2

0x206f,	// (0x0005465d) aid_size_touch_slider_mark_copy1_ParamLimits

0x206f,	// (0x0005465d) aid_size_touch_slider_mark_copy1

0x9ddc,	// (0x0005c3ca) slider_set_pane_g1_copy1

0x2083,	// (0x00054671) slider_set_pane_g2_copy1

0x0d94,	// (0x00053382) slider_set_pane_g3_copy1_ParamLimits

0x0d94,	// (0x00053382) slider_set_pane_g3_copy1

0x0da8,	// (0x00053396) slider_set_pane_g4_copy1_ParamLimits

0x0da8,	// (0x00053396) slider_set_pane_g4_copy1

0x0dc0,	// (0x000533ae) slider_set_pane_g5_copy1_ParamLimits

0x0dc0,	// (0x000533ae) slider_set_pane_g5_copy1

0x0d94,	// (0x00053382) slider_set_pane_g6_copy1_ParamLimits

0x0d94,	// (0x00053382) slider_set_pane_g6_copy1

0xc318,	// (0x0005e906) slider_set_pane_g7_copy1_ParamLimits

0xc318,	// (0x0005e906) slider_set_pane_g7_copy1

0xd279,	// (0x0005f867) bg_set_opt_pane_cp2_copy1

0x9de5,	// (0x0005c3d3) setting_slider_graphic_pane_g1_copy1

0xf417,	// (0x00061a05) setting_slider_graphic_pane_t1_copy1

0xf427,	// (0x00061a15) setting_slider_graphic_pane_t2_copy1

0xf437,	// (0x00061a25) slider_set_pane_cp_copy1

0x9e1e,	// (0x0005c40c) input_focus_pane_cp1_copy1

0x9e27,	// (0x0005c415) list_set_text_pane_copy1

0x9e2f,	// (0x0005c41d) setting_text_pane_g1_copy1

0xf2e6,	// (0x000618d4) set_text_pane_t1_copy1

0x9e1e,	// (0x0005c40c) input_focus_pane_cp2_copy1

0x9e2f,	// (0x0005c41d) setting_code_pane_g1_copy1

0xf43f,	// (0x00061a2d) setting_code_pane_t1_copy1

0xf44d,	// (0x00061a3b) list_set_graphic_pane_copy1

0xd279,	// (0x0005f867) bg_set_opt_pane_cp4_copy1

0xc4c1,	// (0x0005eaaf) list_set_graphic_pane_g1_copy1_ParamLimits

0xc4c1,	// (0x0005eaaf) list_set_graphic_pane_g1_copy1

0xf45f,	// (0x00061a4d) list_set_graphic_pane_g2_copy1

0xc4d9,	// (0x0005eac7) list_set_graphic_pane_t1_copy1_ParamLimits

0xc4d9,	// (0x0005eac7) list_set_graphic_pane_t1_copy1

0x6d8f,	// (0x0005937d) rs_clock_indi_pane_g1

0x9e60,	// (0x0005c44e) rs_clock_indi_pane_t1

0x9e6e,	// (0x0005c45c) rs_indi_pane

0x9e76,	// (0x0005c464) rs_indi_pane_g1

0x9e7f,	// (0x0005c46d) rs_indi_pane_g2

0x9e88,	// (0x0005c476) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x000624d8) rs_indi_pane_g

0x3911,	// (0x00055eff) bg_popup_preview_window_pane_cp03

0x9e91,	// (0x0005c47f) popup_fep_tooltip_window_t1

0x7a35,	// (0x0005a023) popup_note2_window_g2_ParamLimits

0x7a35,	// (0x0005a023) popup_note2_window_g2

0x0001,

0xfc83,	// (0x00062271) popup_note2_window_g_ParamLimits

0xfc83,	// (0x00062271) popup_note2_window_g

0x7f3d,	// (0x0005a52b) bg_popup_sub_pane_cp11_ParamLimits

0x7f4a,	// (0x0005a538) cell_ai3_links_pane_g1_ParamLimits

0x7f61,	// (0x0005a54f) cell_ai3_links_pane_t1

0xf2e6,	// (0x000618d4) set_text_pane_t1_copy1_ParamLimits

0x381e,	// (0x00055e0c) cell_graphic_popup_pane_cp2_ParamLimits

0x381e,	// (0x00055e0c) cell_graphic_popup_pane_cp2

0x9e9f,	// (0x0005c48d) cell_graphic_popup_pane_g1_cp2

0x2759,	// (0x00054d47) cell_graphic_popup_pane_g2_cp2

0x9ea7,	// (0x0005c495) cell_graphic_popup_pane_g3_cp2

0x9eaf,	// (0x0005c49d) cell_graphic_popup_pane_t2_cp2

0x276a,	// (0x00054d58) grid_highlight_pane_cp3_cp2

0x303b,	// (0x00055629) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2aba,	// (0x000550a8) main_tmo_pane_ParamLimits

0xdf94,	// (0x00060582) popup_tmo_big_image_note_window

0xeba6,	// (0x00061194) cell_ai5_widget_list_pane

0xebae,	// (0x0006119c) cell_ai5_widget_lrg_icon_pane

0xeeb7,	// (0x000614a5) tmo_note_info_pane_t1_ParamLimits

0xeecc,	// (0x000614ba) tmo_note_info_pane_t2_ParamLimits

0xeee5,	// (0x000614d3) tmo_note_info_pane_t3_ParamLimits

0x9a44,	// (0x0005c032) tmo_note_info_pane_t4_ParamLimits

0x9a56,	// (0x0005c044) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x000624c6) tmo_note_info_pane_t_ParamLimits

0xef5f,	// (0x0006154d) settings_container_pane_ParamLimits

0x9e16,	// (0x0005c404) indicator_popup_pane_cp5

0x9e16,	// (0x0005c404) indicator_popup_pane_cp6

0xf44d,	// (0x00061a3b) list_set_graphic_pane_copy1_ParamLimits

0xd265,	// (0x0005f853) bg_popup_window_pane_cp23

0x9ebd,	// (0x0005c4ab) popup_tmo_big_image_note_window_g1

0x9ec9,	// (0x0005c4b7) popup_tmo_big_image_note_window_t1

0x9ed9,	// (0x0005c4c7) popup_tmo_big_image_note_window_t2

0x9ee9,	// (0x0005c4d7) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x000624df) popup_tmo_big_image_note_window_t

0xf467,	// (0x00061a55) cell_ai5_widget_lrg_icon_pane_g1

0xf46f,	// (0x00061a5d) cell_ai5_widget_lrg_icon_pane_t1

0xf47d,	// (0x00061a6b) cell_ai5_widget_list_row_pane_ParamLimits

0xf47d,	// (0x00061a6b) cell_ai5_widget_list_row_pane

0xf496,	// (0x00061a84) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf496,	// (0x00061a84) cell_ai5_widget_list_row_pane_g1

0xf4a3,	// (0x00061a91) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf4a3,	// (0x00061a91) cell_ai5_widget_list_row_pane_t1

0xf4bb,	// (0x00061aa9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf4bb,	// (0x00061aa9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfef8,	// (0x000624e6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x000624e6) cell_ai5_widget_list_row_pane_t

0xf160,	// (0x0006174e) main_fep_vtchi_ss_pane

0x9f5f,	// (0x0005c54d) popup_fep_char_pre_window

0x9f67,	// (0x0005c555) popup_fep_ituss_window

0x9f81,	// (0x0005c56f) popup_fep_vkbss_window

0x9fa1,	// (0x0005c58f) grid_vkbss_keypad_pane_ParamLimits

0x9fa1,	// (0x0005c58f) grid_vkbss_keypad_pane

0x9fb1,	// (0x0005c59f) ituss_keypad_pane

0x9fc7,	// (0x0005c5b5) aid_vkbss_key_offset_ParamLimits

0x9fc7,	// (0x0005c5b5) aid_vkbss_key_offset

0x9fd3,	// (0x0005c5c1) cell_vkbss_key_pane_ParamLimits

0x9fd3,	// (0x0005c5c1) cell_vkbss_key_pane

0x9fe9,	// (0x0005c5d7) bg_cell_vkbss_key_g1_ParamLimits

0x9fe9,	// (0x0005c5d7) bg_cell_vkbss_key_g1

0x9ff5,	// (0x0005c5e3) cell_vkbss_key_3p_pane_ParamLimits

0x9ff5,	// (0x0005c5e3) cell_vkbss_key_3p_pane

0xa00f,	// (0x0005c5fd) cell_vkbss_key_g1_ParamLimits

0xa00f,	// (0x0005c5fd) cell_vkbss_key_g1

0xa029,	// (0x0005c617) cell_vkbss_key_t1_ParamLimits

0xa029,	// (0x0005c617) cell_vkbss_key_t1

0xa054,	// (0x0005c642) cell_ituss_key_pane_ParamLimits

0xa054,	// (0x0005c642) cell_ituss_key_pane

0xa064,	// (0x0005c652) bg_cell_ituss_key_g1_ParamLimits

0xa064,	// (0x0005c652) bg_cell_ituss_key_g1

0xa070,	// (0x0005c65e) cell_ituss_key_pane_g1_ParamLimits

0xa070,	// (0x0005c65e) cell_ituss_key_pane_g1

0xa07c,	// (0x0005c66a) cell_ituss_key_pane_g2_ParamLimits

0xa07c,	// (0x0005c66a) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x000624eb) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x000624eb) cell_ituss_key_pane_g

0xa095,	// (0x0005c683) cell_ituss_key_t1_ParamLimits

0xa095,	// (0x0005c683) cell_ituss_key_t1

0xa0c3,	// (0x0005c6b1) cell_ituss_key_t2_ParamLimits

0xa0c3,	// (0x0005c6b1) cell_ituss_key_t2

0xa0f4,	// (0x0005c6e2) cell_ituss_key_t3_ParamLimits

0xa0f4,	// (0x0005c6e2) cell_ituss_key_t3

0xa125,	// (0x0005c713) cell_ituss_key_t4_ParamLimits

0xa125,	// (0x0005c713) cell_ituss_key_t4

0x0003,

0xff02,	// (0x000624f0) cell_ituss_key_t_ParamLimits

0xff02,	// (0x000624f0) cell_ituss_key_t

0xa156,	// (0x0005c744) cell_vkbss_key_3p_pane_g1

0xa15e,	// (0x0005c74c) cell_vkbss_key_3p_pane_g2

0xa166,	// (0x0005c754) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x000624f9) cell_vkbss_key_3p_pane_g

0xd265,	// (0x0005f853) bg_popup_fep_char_preview_window_cp02

0xa16e,	// (0x0005c75c) popup_fep_char_pre_window_t1

0xeb9c,	// (0x0006118a) main_ai5_sk_pane

0x9ad0,	// (0x0005c0be) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9adc,	// (0x0005c0ca) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9af0,	// (0x0005c0de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9aff,	// (0x0005c0ed) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x000624d1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9b12,	// (0x0005c100) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2aba,	// (0x000550a8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4cd,	// (0x00061abb) main_ai5_sk_pane_g1

0x4c7e,	// (0x0005726c) popup_query_code_window_g1

0x9f76,	// (0x0005c564) popup_fep_vkb_icf_pane

0x9f8c,	// (0x0005c57a) popup_fep_vtchi_icf_pane

0x2aba,	// (0x000550a8) bg_icf_pane

0xa195,	// (0x0005c783) list_vkb_icf_pane

0x2aba,	// (0x000550a8) bg_icf_pane_cp01

0xa1ad,	// (0x0005c79b) vtchi_icf_list_pane

0xa1bd,	// (0x0005c7ab) list_vkb_icf_pane_t1_ParamLimits

0xa1bd,	// (0x0005c7ab) list_vkb_icf_pane_t1

0xa1d4,	// (0x0005c7c2) vtchi_icf_list_pane_t1_ParamLimits

0xa1d4,	// (0x0005c7c2) vtchi_icf_list_pane_t1

0x9f67,	// (0x0005c555) popup_fep_ituss_window_ParamLimits

0x9f8c,	// (0x0005c57a) popup_fep_vtchi_icf_pane_ParamLimits

0x9fb1,	// (0x0005c59f) ituss_keypad_pane_ParamLimits

0x9fbd,	// (0x0005c5ab) ituss_sks_pane

0x2aba,	// (0x000550a8) bg_icf_pane_ParamLimits

0xa186,	// (0x0005c774) icf_edit_indi_pane_ParamLimits

0xa186,	// (0x0005c774) icf_edit_indi_pane

0xa195,	// (0x0005c783) list_vkb_icf_pane_ParamLimits

0x2aba,	// (0x000550a8) bg_icf_pane_cp01_ParamLimits

0xa1a1,	// (0x0005c78f) icf_edit_indi_pane_cp01_ParamLimits

0xa1a1,	// (0x0005c78f) icf_edit_indi_pane_cp01

0xa1b5,	// (0x0005c7a3) vtchi_query_pane

0x7019,	// (0x00059607) icf_edit_indi_pane_g1_ParamLimits

0x7019,	// (0x00059607) icf_edit_indi_pane_g1

0xa1ed,	// (0x0005c7db) icf_edit_indi_pane_g2_ParamLimits

0xa1ed,	// (0x0005c7db) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x00062500) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x00062500) icf_edit_indi_pane_g

0xa1f9,	// (0x0005c7e7) icf_edit_indi_pane_t1

0xa207,	// (0x0005c7f5) bg_input_focus_pane_cp042

0x293d,	// (0x00054f2b) vtchi_button_pane

0xa210,	// (0x0005c7fe) vtchi_query_pane_t1

0xa21e,	// (0x0005c80c) vtchi_query_pane_t2

0xa22c,	// (0x0005c81a) vtchi_query_pane_t3

0x0002,

0xff17,	// (0x00062505) vtchi_query_pane_t

0xd265,	// (0x0005f853) bg_button_pane_cp13

0xa23a,	// (0x0005c828) vtchi_button_pane_g1

0xa242,	// (0x0005c830) ituss_sks_pane_g1

0xa24d,	// (0x0005c83b) ituss_sks_pane_g2

0x0001,

0xff1e,	// (0x0006250c) ituss_sks_pane_g

0xa255,	// (0x0005c843) ituss_sks_pane_t1

0xa263,	// (0x0005c851) ituss_sks_pane_t2

0x0001,

0xff23,	// (0x00062511) ituss_sks_pane_t

0x68ac,	// (0x00058e9a) indicator_nsta_pane_cp_g1

0x68b5,	// (0x00058ea3) indicator_nsta_pane_cp_g2

0x68bd,	// (0x00058eab) indicator_nsta_pane_cp_g3

0x68c5,	// (0x00058eb3) indicator_nsta_pane_cp_g4

0x68cd,	// (0x00058ebb) indicator_nsta_pane_cp_g5

0x68d5,	// (0x00058ec3) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x000620af) indicator_nsta_pane_cp_g

0xe9b9,	// (0x00060fa7) cell_graphic2_pane_t2_ParamLimits

0xe9b9,	// (0x00060fa7) cell_graphic2_pane_t2

0x0001,

0xfdda,	// (0x000623c8) cell_graphic2_pane_t_ParamLimits

0xfdda,	// (0x000623c8) cell_graphic2_pane_t

0xe9f1,	// (0x00060fdf) cell_graphic2_control_pane_t1

0xc415,	// (0x0005ea03) signal_pane_g3_ParamLimits

0xc415,	// (0x0005ea03) signal_pane_g3

0xc429,	// (0x0005ea17) signal_pane_g4_ParamLimits

0xc429,	// (0x0005ea17) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
