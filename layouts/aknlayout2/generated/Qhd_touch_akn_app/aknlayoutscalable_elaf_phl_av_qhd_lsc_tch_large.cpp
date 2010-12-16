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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00041ae7 };

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
0xbcf7,	// (0x0004d7de) Screen

0xbd03,	// (0x0004d7ea) application_window_ParamLimits

0xbd03,	// (0x0004d7ea) application_window

0xd48c,	// (0x0004ef73) screen_g1

0xbd3b,	// (0x0004d822) area_bottom_pane_ParamLimits

0xbd3b,	// (0x0004d822) area_bottom_pane

0x0c4f,	// (0x00042736) area_top_pane_ParamLimits

0x0c4f,	// (0x00042736) area_top_pane

0x0ce3,	// (0x000427ca) main_pane_ParamLimits

0x0ce3,	// (0x000427ca) main_pane

0xd496,	// (0x0004ef7d) misc_graphics

0xd67b,	// (0x0004f162) battery_pane_ParamLimits

0xd67b,	// (0x0004f162) battery_pane

0x5a29,	// (0x00047510) bg_status_flat_pane_g8

0x5a31,	// (0x00047518) bg_status_flat_pane_g9

0x4e0f,	// (0x000468f6) context_pane_ParamLimits

0x4e0f,	// (0x000468f6) context_pane

0xd7e6,	// (0x0004f2cd) navi_pane_ParamLimits

0xd7e6,	// (0x0004f2cd) navi_pane

0xd864,	// (0x0004f34b) signal_pane_ParamLimits

0xd864,	// (0x0004f34b) signal_pane

0x0008,

0xf852,	// (0x00051339) bg_status_flat_pane_g

0xd8f4,	// (0x0004f3db) status_pane_g1_ParamLimits

0xd8f4,	// (0x0004f3db) status_pane_g1

0xd90a,	// (0x0004f3f1) status_pane_g2_ParamLimits

0xd90a,	// (0x0004f3f1) status_pane_g2

0x5036,	// (0x00046b1d) status_pane_g3_ParamLimits

0x5036,	// (0x00046b1d) status_pane_g3

0x0004,

0xf77e,	// (0x00051265) status_pane_g_ParamLimits

0xf77e,	// (0x00051265) status_pane_g

0xd916,	// (0x0004f3fd) title_pane_ParamLimits

0xd916,	// (0x0004f3fd) title_pane

0xd977,	// (0x0004f45e) uni_indicator_pane_ParamLimits

0xd977,	// (0x0004f45e) uni_indicator_pane

0x4c77,	// (0x0004675e) bg_list_pane_ParamLimits

0x4c77,	// (0x0004675e) bg_list_pane

0x166d,	// (0x00043154) find_pane

0x5235,	// (0x00046d1c) listscroll_app_pane_ParamLimits

0x5235,	// (0x00046d1c) listscroll_app_pane

0x4ca3,	// (0x0004678a) listscroll_form_pane

0x1675,	// (0x0004315c) listscroll_gen_pane_ParamLimits

0x1675,	// (0x0004315c) listscroll_gen_pane

0x1689,	// (0x00043170) listscroll_set_pane

0x659a,	// (0x00048081) main_idle_act_pane

0x4973,	// (0x0004645a) main_idle_trad_pane

0x4973,	// (0x0004645a) main_list_empty_pane

0x4c97,	// (0x0004677e) main_midp_pane

0x4cbd,	// (0x000467a4) main_pane_g1_ParamLimits

0x4cbd,	// (0x000467a4) main_pane_g1

0xc5bf,	// (0x0004e0a6) popup_ai_message_window_ParamLimits

0xc5bf,	// (0x0004e0a6) popup_ai_message_window

0xc650,	// (0x0004e137) popup_fep_china_uni_window_ParamLimits

0xc650,	// (0x0004e137) popup_fep_china_uni_window

0x1793,	// (0x0004327a) popup_fep_japan_candidate_window_ParamLimits

0x1793,	// (0x0004327a) popup_fep_japan_candidate_window

0x17b3,	// (0x0004329a) popup_fep_japan_predictive_window_ParamLimits

0x17b3,	// (0x0004329a) popup_fep_japan_predictive_window

0xc6ac,	// (0x0004e193) popup_find_window

0xc6c9,	// (0x0004e1b0) popup_grid_graphic_window_ParamLimits

0xc6c9,	// (0x0004e1b0) popup_grid_graphic_window

0x181c,	// (0x00043303) popup_large_graphic_colour_window

0xc76d,	// (0x0004e254) popup_menu_window_ParamLimits

0xc76d,	// (0x0004e254) popup_menu_window

0xc93f,	// (0x0004e426) popup_note_image_window

0xc905,	// (0x0004e3ec) popup_note_wait_window_ParamLimits

0xc905,	// (0x0004e3ec) popup_note_wait_window

0xc957,	// (0x0004e43e) popup_note_window_ParamLimits

0xc957,	// (0x0004e43e) popup_note_window

0xc9fd,	// (0x0004e4e4) popup_query_code_window_ParamLimits

0xc9fd,	// (0x0004e4e4) popup_query_code_window

0x1a64,	// (0x0004354b) popup_query_data_code_window_ParamLimits

0x1a64,	// (0x0004354b) popup_query_data_code_window

0xca37,	// (0x0004e51e) popup_query_data_window_ParamLimits

0xca37,	// (0x0004e51e) popup_query_data_window

0xcab9,	// (0x0004e5a0) popup_query_sat_info_window_ParamLimits

0xcab9,	// (0x0004e5a0) popup_query_sat_info_window

0xcb50,	// (0x0004e637) popup_snote_single_graphic_window_ParamLimits

0xcb50,	// (0x0004e637) popup_snote_single_graphic_window

0xcb50,	// (0x0004e637) popup_snote_single_text_window_ParamLimits

0xcb50,	// (0x0004e637) popup_snote_single_text_window

0x1aeb,	// (0x000435d2) popup_sub_window_general

0x1c1b,	// (0x00043702) popup_window_general_ParamLimits

0x1c1b,	// (0x00043702) popup_window_general

0x4ccb,	// (0x000467b2) power_save_pane

0xc440,	// (0x0004df27) control_pane_g1_ParamLimits

0xc440,	// (0x0004df27) control_pane_g1

0xc469,	// (0x0004df50) control_pane_g2_ParamLimits

0xc469,	// (0x0004df50) control_pane_g2

0x4c3a,	// (0x00046721) control_pane_g3_ParamLimits

0x4c3a,	// (0x00046721) control_pane_g3

0x0007,

0xf766,	// (0x0005124d) control_pane_g_ParamLimits

0xf766,	// (0x0005124d) control_pane_g

0xc4aa,	// (0x0004df91) control_pane_t1_ParamLimits

0xc4aa,	// (0x0004df91) control_pane_t1

0xc512,	// (0x0004dff9) control_pane_t2_ParamLimits

0xc512,	// (0x0004dff9) control_pane_t2

0x0002,

0xf777,	// (0x0005125e) control_pane_t_ParamLimits

0xf777,	// (0x0005125e) control_pane_t

0x4b5f,	// (0x00046646) navi_navi_volume_pane_cp1

0x4b67,	// (0x0004664e) status_small_icon_pane

0x4b6f,	// (0x00046656) status_small_pane_g1_ParamLimits

0x4b6f,	// (0x00046656) status_small_pane_g1

0x4ba3,	// (0x0004668a) status_small_pane_g2_ParamLimits

0x4ba3,	// (0x0004668a) status_small_pane_g2

0x4baf,	// (0x00046696) status_small_pane_g3_ParamLimits

0x4baf,	// (0x00046696) status_small_pane_g3

0xd597,	// (0x0004f07e) status_small_pane_g4_ParamLimits

0xd597,	// (0x0004f07e) status_small_pane_g4

0xd5a5,	// (0x0004f08c) status_small_pane_g5_ParamLimits

0xd5a5,	// (0x0004f08c) status_small_pane_g5

0x4bd5,	// (0x000466bc) status_small_pane_g6_ParamLimits

0x4bd5,	// (0x000466bc) status_small_pane_g6

0x0007,

0xf755,	// (0x0005123c) status_small_pane_g_ParamLimits

0xf755,	// (0x0005123c) status_small_pane_g

0x4c04,	// (0x000466eb) status_small_pane_t1

0xd5bb,	// (0x0004f0a2) status_small_wait_pane_ParamLimits

0xd5bb,	// (0x0004f0a2) status_small_wait_pane

0xc3fb,	// (0x0004dee2) aid_levels_signal_ParamLimits

0xc3fb,	// (0x0004dee2) aid_levels_signal

0xc413,	// (0x0004defa) signal_pane_g1_ParamLimits

0xc413,	// (0x0004defa) signal_pane_g1

0xd4a0,	// (0x0004ef87) signal_pane_g2_ParamLimits

0xd4a0,	// (0x0004ef87) signal_pane_g2

0x0003,

0xf6e6,	// (0x000511cd) signal_pane_g_ParamLimits

0xf6e6,	// (0x000511cd) signal_pane_g

0x4442,	// (0x00045f29) context_pane_g1

0xbed7,	// (0x0004d9be) title_pane_g1

0xbf0e,	// (0x0004d9f5) title_pane_t1

0x33e8,	// (0x00044ecf) title_pane_t2

0x340e,	// (0x00044ef5) title_pane_t3

0x0002,

0xf530,	// (0x00051017) title_pane_t

0xd99f,	// (0x0004f486) aid_levels_battery_ParamLimits

0xd99f,	// (0x0004f486) aid_levels_battery

0xd9bb,	// (0x0004f4a2) battery_pane_g1_ParamLimits

0xd9bb,	// (0x0004f4a2) battery_pane_g1

0xd9d8,	// (0x0004f4bf) battery_pane_g2_ParamLimits

0xd9d8,	// (0x0004f4bf) battery_pane_g2

0x0001,

0xf789,	// (0x00051270) battery_pane_g_ParamLimits

0xf789,	// (0x00051270) battery_pane_g

0xdb99,	// (0x0004f680) uni_indicator_pane_g1

0xdbaf,	// (0x0004f696) uni_indicator_pane_g2

0xdbc5,	// (0x0004f6ac) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x000513e1) uni_indicator_pane_g

0x47e4,	// (0x000462cb) navi_icon_pane_ParamLimits

0x47e4,	// (0x000462cb) navi_icon_pane

0x472d,	// (0x00046214) navi_midp_pane

0x4800,	// (0x000462e7) navi_navi_pane

0x480a,	// (0x000462f1) navi_text_pane_ParamLimits

0x480a,	// (0x000462f1) navi_text_pane

0xd48c,	// (0x0004ef73) status_small_wait_pane_g1

0x3863,	// (0x0004534a) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x000513dc) status_small_wait_pane_g

0x6084,	// (0x00047b6b) navi_navi_icon_text_pane

0x608c,	// (0x00047b73) navi_navi_pane_g1_ParamLimits

0x608c,	// (0x00047b73) navi_navi_pane_g1

0x609e,	// (0x00047b85) navi_navi_pane_g2_ParamLimits

0x609e,	// (0x00047b85) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x000513aa) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x000513aa) navi_navi_pane_g

0x60b0,	// (0x00047b97) navi_navi_tabs_pane

0x60b9,	// (0x00047ba0) navi_navi_text_pane

0x6084,	// (0x00047b6b) navi_navi_volume_pane

0x6060,	// (0x00047b47) navi_text_pane_t1

0x6054,	// (0x00047b3b) navi_icon_pane_g1

0x5fa7,	// (0x00047a8e) navi_navi_text_pane_t1

0x1ed3,	// (0x000439ba) navi_navi_volume_pane_g1

0x1edb,	// (0x000439c2) volume_small_pane

0x5f0d,	// (0x000479f4) navi_navi_icon_text_pane_g1

0x5f15,	// (0x000479fc) navi_navi_icon_text_pane_t1

0x4800,	// (0x000462e7) navi_tabs_2_long_pane

0x4800,	// (0x000462e7) navi_tabs_2_pane

0x4800,	// (0x000462e7) navi_tabs_3_long_pane

0x4800,	// (0x000462e7) navi_tabs_3_pane

0x4800,	// (0x000462e7) navi_tabs_4_pane

0x1eb3,	// (0x0004399a) tabs_2_active_pane_ParamLimits

0x1eb3,	// (0x0004399a) tabs_2_active_pane

0x1ec3,	// (0x000439aa) tabs_2_passive_pane_ParamLimits

0x1ec3,	// (0x000439aa) tabs_2_passive_pane

0x1e81,	// (0x00043968) tabs_3_active_pane_ParamLimits

0x1e81,	// (0x00043968) tabs_3_active_pane

0x1e91,	// (0x00043978) tabs_3_passive_pane_ParamLimits

0x1e91,	// (0x00043978) tabs_3_passive_pane

0x1ea2,	// (0x00043989) tabs_3_passive_pane_cp_ParamLimits

0x1ea2,	// (0x00043989) tabs_3_passive_pane_cp

0x1e3d,	// (0x00043924) tabs_4_active_pane_ParamLimits

0x1e3d,	// (0x00043924) tabs_4_active_pane

0x1e4e,	// (0x00043935) tabs_4_passive_pane_ParamLimits

0x1e4e,	// (0x00043935) tabs_4_passive_pane

0x1e5f,	// (0x00043946) tabs_4_passive_pane_cp_ParamLimits

0x1e5f,	// (0x00043946) tabs_4_passive_pane_cp

0x1e70,	// (0x00043957) tabs_4_passive_pane_cp2_ParamLimits

0x1e70,	// (0x00043957) tabs_4_passive_pane_cp2

0x1e19,	// (0x00043900) tabs_2_long_active_pane_ParamLimits

0x1e19,	// (0x00043900) tabs_2_long_active_pane

0x1e2b,	// (0x00043912) tabs_2_long_passive_pane_ParamLimits

0x1e2b,	// (0x00043912) tabs_2_long_passive_pane

0x1dda,	// (0x000438c1) tabs_3_long_active_pane_ParamLimits

0x1dda,	// (0x000438c1) tabs_3_long_active_pane

0x1ded,	// (0x000438d4) tabs_3_long_passive_pane_ParamLimits

0x1ded,	// (0x000438d4) tabs_3_long_passive_pane

0x1e06,	// (0x000438ed) tabs_3_long_passive_pane_cp_ParamLimits

0x1e06,	// (0x000438ed) tabs_3_long_passive_pane_cp

0x1d80,	// (0x00043867) volume_small_pane_g1

0x1d89,	// (0x00043870) volume_small_pane_g2

0x1d92,	// (0x00043879) volume_small_pane_g3

0x1d9b,	// (0x00043882) volume_small_pane_g4

0x1da4,	// (0x0004388b) volume_small_pane_g5

0x1dad,	// (0x00043894) volume_small_pane_g6

0x1db6,	// (0x0004389d) volume_small_pane_g7

0x1dbf,	// (0x000438a6) volume_small_pane_g8

0x1dc8,	// (0x000438af) volume_small_pane_g9

0x1dd1,	// (0x000438b8) volume_small_pane_g10

0x0009,

0xf88f,	// (0x00051376) volume_small_pane_g

0x369b,	// (0x00045182) bg_active_tab_pane_cp2_ParamLimits

0x369b,	// (0x00045182) bg_active_tab_pane_cp2

0x342e,	// (0x00044f15) tabs_3_active_pane_g1

0xbf9a,	// (0x0004da81) tabs_3_active_pane_t1

0x369b,	// (0x00045182) bg_passive_tab_pane_cp2_ParamLimits

0x369b,	// (0x00045182) bg_passive_tab_pane_cp2

0x342e,	// (0x00044f15) tabs_3_passive_pane_g1

0xbf9a,	// (0x0004da81) tabs_3_passive_pane_t1

0x369b,	// (0x00045182) bg_active_tab_pane_cp3_ParamLimits

0x369b,	// (0x00045182) bg_active_tab_pane_cp3

0x3448,	// (0x00044f2f) tabs_4_active_pane_g1

0xbfac,	// (0x0004da93) tabs_4_active_pane_t1

0x369b,	// (0x00045182) bg_passive_tab_pane_cp3_ParamLimits

0x369b,	// (0x00045182) bg_passive_tab_pane_cp3

0x3448,	// (0x00044f2f) tabs_4_1_passive_pane_g1

0xbfac,	// (0x0004da93) tabs_4_1_passive_pane_t1

0x4c97,	// (0x0004677e) list_highlight_pane_cp2

0xdc4b,	// (0x0004f732) list_set_pane_ParamLimits

0xdc4b,	// (0x0004f732) list_set_pane

0xdce5,	// (0x0004f7cc) main_pane_set_t1_ParamLimits

0xdce5,	// (0x0004f7cc) main_pane_set_t1

0xdd05,	// (0x0004f7ec) main_pane_set_t2_ParamLimits

0xdd05,	// (0x0004f7ec) main_pane_set_t2

0xdd19,	// (0x0004f800) main_pane_set_t3_ParamLimits

0xdd19,	// (0x0004f800) main_pane_set_t3

0xdd2b,	// (0x0004f812) main_pane_set_t4_ParamLimits

0xdd2b,	// (0x0004f812) main_pane_set_t4

0x0003,

0xf95f,	// (0x00051446) main_pane_set_t_ParamLimits

0xf95f,	// (0x00051446) main_pane_set_t

0xdd3d,	// (0x0004f824) setting_code_pane

0xdd47,	// (0x0004f82e) setting_slider_graphic_pane

0xdd47,	// (0x0004f82e) setting_slider_pane

0xdd47,	// (0x0004f82e) setting_text_pane

0xdd47,	// (0x0004f82e) setting_volume_pane

0x0f32,	// (0x00042a19) volume_set_pane

0x3420,	// (0x00044f07) bg_set_opt_pane_cp

0x0f3a,	// (0x00042a21) setting_slider_pane_t1

0x0f53,	// (0x00042a3a) setting_slider_pane_t2

0x0f6d,	// (0x00042a54) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0005101e) setting_slider_pane_t

0x0f85,	// (0x00042a6c) slider_set_pane

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp2

0x3462,	// (0x00044f49) setting_slider_graphic_pane_g1

0x0f9b,	// (0x00042a82) setting_slider_graphic_pane_t1

0x0fab,	// (0x00042a92) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00051025) setting_slider_graphic_pane_t

0x0fbb,	// (0x00042aa2) slider_set_pane_cp

0xd496,	// (0x0004ef7d) input_focus_pane_cp1

0x6581,	// (0x00048068) list_set_text_pane

0xd48c,	// (0x0004ef73) setting_text_pane_g1

0xd496,	// (0x0004ef7d) input_focus_pane_cp2

0xd48c,	// (0x0004ef73) setting_code_pane_g1

0x346b,	// (0x00044f52) setting_code_pane_t1

0xf42b,	// (0x00050f12) set_text_pane_t1_ParamLimits

0xf42b,	// (0x00050f12) set_text_pane_t1

0x3d05,	// (0x000457ec) set_opt_bg_pane_g1

0x3d0d,	// (0x000457f4) set_opt_bg_pane_g2

0x655b,	// (0x00048042) set_opt_bg_pane_g3

0x3d1d,	// (0x00045804) set_opt_bg_pane_g4

0x3d25,	// (0x0004580c) set_opt_bg_pane_g5

0x3d2d,	// (0x00045814) set_opt_bg_pane_g6

0x6565,	// (0x0004804c) set_opt_bg_pane_g7

0x656d,	// (0x00048054) set_opt_bg_pane_g8

0x6577,	// (0x0004805e) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x00051433) set_opt_bg_pane_g

0x654e,	// (0x00048035) slider_set_pane_g1

0x1f48,	// (0x00043a2f) slider_set_pane_g2

0x0006,

0xf93d,	// (0x00051424) slider_set_pane_g

0x1ee4,	// (0x000439cb) volume_set_pane_g1

0x1eec,	// (0x000439d3) volume_set_pane_g2

0x1ef4,	// (0x000439db) volume_set_pane_g3

0x1efc,	// (0x000439e3) volume_set_pane_g4

0x1f04,	// (0x000439eb) volume_set_pane_g5

0x1f0c,	// (0x000439f3) volume_set_pane_g6

0x1f14,	// (0x000439fb) volume_set_pane_g7

0x1f1c,	// (0x00043a03) volume_set_pane_g8

0x1f24,	// (0x00043a0b) volume_set_pane_g9

0x1f2c,	// (0x00043a13) volume_set_pane_g10

0x0009,

0xf915,	// (0x000513fc) volume_set_pane_g

0xbfbe,	// (0x0004daa5) indicator_pane_ParamLimits

0xbfbe,	// (0x0004daa5) indicator_pane

0xbfe6,	// (0x0004dacd) main_idle_pane_g2_ParamLimits

0xbfe6,	// (0x0004dacd) main_idle_pane_g2

0xc01e,	// (0x0004db05) main_pane_idle_g1_ParamLimits

0xc01e,	// (0x0004db05) main_pane_idle_g1

0x34ba,	// (0x00044fa1) popup_clock_digital_analogue_window_ParamLimits

0x34ba,	// (0x00044fa1) popup_clock_digital_analogue_window

0xc045,	// (0x0004db2c) soft_indicator_pane_ParamLimits

0xc045,	// (0x0004db2c) soft_indicator_pane

0xc05f,	// (0x0004db46) wallpaper_pane_ParamLimits

0xc05f,	// (0x0004db46) wallpaper_pane

0xd48c,	// (0x0004ef73) wallpaper_pane_g1

0xc071,	// (0x0004db58) indicator_pane_g1_ParamLimits

0xc071,	// (0x0004db58) indicator_pane_g1

0x697d,	// (0x00048464) navi_navi_icon_text_pane_srt_g1

0x350c,	// (0x00044ff3) soft_indicator_pane_t1

0x3526,	// (0x0004500d) aid_ps_area_pane

0xc087,	// (0x0004db6e) aid_ps_clock_pane

0x3545,	// (0x0004502c) aid_ps_indicator_pane

0x3551,	// (0x00045038) indicator_ps_pane_ParamLimits

0x3551,	// (0x00045038) indicator_ps_pane

0x3560,	// (0x00045047) power_save_pane_g1_ParamLimits

0x3560,	// (0x00045047) power_save_pane_g1

0x356c,	// (0x00045053) power_save_pane_g2_ParamLimits

0x356c,	// (0x00045053) power_save_pane_g2

0x0b3d,	// (0x00042624) aid_navinavi_width_pane

0x3526,	// (0x0004500d) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0005102a) power_save_pane_g_ParamLimits

0xf543,	// (0x0005102a) power_save_pane_g

0x357a,	// (0x00045061) power_save_pane_t1_ParamLimits

0x357a,	// (0x00045061) power_save_pane_t1

0xc087,	// (0x0004db6e) aid_ps_clock_pane_ParamLimits

0x3545,	// (0x0004502c) aid_ps_indicator_pane_ParamLimits

0x358c,	// (0x00045073) power_save_pane_t4_ParamLimits

0x358c,	// (0x00045073) power_save_pane_t4

0x0001,

0xf548,	// (0x0005102f) power_save_pane_t_ParamLimits

0xf548,	// (0x0005102f) power_save_pane_t

0x35b6,	// (0x0004509d) power_save_t3_ParamLimits

0x35b6,	// (0x0004509d) power_save_t3

0x35a1,	// (0x00045088) power_save_t2_ParamLimits

0x35a1,	// (0x00045088) power_save_t2

0x35cb,	// (0x000450b2) indicator_ps_pane_g1

0xc095,	// (0x0004db7c) ai_gene_pane_ParamLimits

0xc095,	// (0x0004db7c) ai_gene_pane

0xc0ac,	// (0x0004db93) ai_links_pane_ParamLimits

0xc0ac,	// (0x0004db93) ai_links_pane

0xc0c4,	// (0x0004dbab) indicator_pane_cp1_ParamLimits

0xc0c4,	// (0x0004dbab) indicator_pane_cp1

0xc0d3,	// (0x0004dbba) main_pane_idle_g1_cp_ParamLimits

0xc0d3,	// (0x0004dbba) main_pane_idle_g1_cp

0x3604,	// (0x000450eb) popup_ai_links_title_window

0xc0eb,	// (0x0004dbd2) soft_indicator_pane_cp1_ParamLimits

0xc0eb,	// (0x0004dbd2) soft_indicator_pane_cp1

0x634d,	// (0x00047e34) ai_links_pane_g1

0x6356,	// (0x00047e3d) grid_ai_links_pane

0xdb90,	// (0x0004f677) ai_gene_pane_1

0x633b,	// (0x00047e22) ai_gene_pane_2

0x6344,	// (0x00047e2b) list_highlight_pane_cp4

0xdb6c,	// (0x0004f653) cell_ai_link_pane_ParamLimits

0xdb6c,	// (0x0004f653) cell_ai_link_pane

0x630c,	// (0x00047df3) cell_ai_link_pane_g1

0x3863,	// (0x0004534a) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x000513d7) cell_ai_link_pane_g

0xd496,	// (0x0004ef7d) grid_highlight_cp2

0xd496,	// (0x0004ef7d) bg_popup_sub_pane_cp1

0x3627,	// (0x0004510e) popup_ai_links_title_window_t1

0x625a,	// (0x00047d41) ai_gene_pane_1_g1_ParamLimits

0x625a,	// (0x00047d41) ai_gene_pane_1_g1

0x6266,	// (0x00047d4d) ai_gene_pane_1_g2_ParamLimits

0x6266,	// (0x00047d4d) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x000513cd) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x000513cd) ai_gene_pane_1_g

0x6273,	// (0x00047d5a) ai_gene_pane_1_t1_ParamLimits

0x6273,	// (0x00047d5a) ai_gene_pane_1_t1

0x62a7,	// (0x00047d8e) grid_ai_soft_ind_pane

0x6245,	// (0x00047d2c) ai_gene_pane_2_t1_ParamLimits

0x6245,	// (0x00047d2c) ai_gene_pane_2_t1

0xc0ff,	// (0x0004dbe6) main_pane_empty_t1_ParamLimits

0xc0ff,	// (0x0004dbe6) main_pane_empty_t1

0xc117,	// (0x0004dbfe) main_pane_empty_t2_ParamLimits

0xc117,	// (0x0004dbfe) main_pane_empty_t2

0xc12c,	// (0x0004dc13) main_pane_empty_t3_ParamLimits

0xc12c,	// (0x0004dc13) main_pane_empty_t3

0xc13e,	// (0x0004dc25) main_pane_empty_t4_ParamLimits

0xc13e,	// (0x0004dc25) main_pane_empty_t4

0xc150,	// (0x0004dc37) main_pane_empty_t5_ParamLimits

0xc150,	// (0x0004dc37) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00051034) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00051034) main_pane_empty_t

0x3dcc,	// (0x000458b3) bg_popup_window_pane_ParamLimits

0x3dcc,	// (0x000458b3) bg_popup_window_pane

0x5fb5,	// (0x00047a9c) find_popup_pane_cp2_ParamLimits

0x5fb5,	// (0x00047a9c) find_popup_pane_cp2

0x5fc1,	// (0x00047aa8) heading_pane_ParamLimits

0x5fc1,	// (0x00047aa8) heading_pane

0xd496,	// (0x0004ef7d) bg_popup_sub_pane

0xdaed,	// (0x0004f5d4) bg_popup_window_pane_g1_ParamLimits

0xdaed,	// (0x0004f5d4) bg_popup_window_pane_g1

0xdafc,	// (0x0004f5e3) bg_popup_window_pane_g2_ParamLimits

0xdafc,	// (0x0004f5e3) bg_popup_window_pane_g2

0xdb08,	// (0x0004f5ef) bg_popup_window_pane_g3_ParamLimits

0xdb08,	// (0x0004f5ef) bg_popup_window_pane_g3

0xdb14,	// (0x0004f5fb) bg_popup_window_pane_g4_ParamLimits

0xdb14,	// (0x0004f5fb) bg_popup_window_pane_g4

0xdb23,	// (0x0004f60a) bg_popup_window_pane_g5_ParamLimits

0xdb23,	// (0x0004f60a) bg_popup_window_pane_g5

0xdb33,	// (0x0004f61a) bg_popup_window_pane_g6_ParamLimits

0xdb33,	// (0x0004f61a) bg_popup_window_pane_g6

0xdb3f,	// (0x0004f626) bg_popup_window_pane_g7_ParamLimits

0xdb3f,	// (0x0004f626) bg_popup_window_pane_g7

0xdb4e,	// (0x0004f635) bg_popup_window_pane_g8_ParamLimits

0xdb4e,	// (0x0004f635) bg_popup_window_pane_g8

0xdb5d,	// (0x0004f644) bg_popup_window_pane_g9_ParamLimits

0xdb5d,	// (0x0004f644) bg_popup_window_pane_g9

0x5f9b,	// (0x00047a82) bg_popup_window_pane_g10_ParamLimits

0x5f9b,	// (0x00047a82) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x00051395) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x00051395) bg_popup_window_pane_g

0x5ec4,	// (0x000479ab) bg_popup_heading_pane_ParamLimits

0x5ec4,	// (0x000479ab) bg_popup_heading_pane

0x2047,	// (0x00043b2e) tabs_4_passive_pane_cp_srt_ParamLimits

0x2047,	// (0x00043b2e) tabs_4_passive_pane_cp_srt

0x2059,	// (0x00043b40) tabs_4_passive_pane_srt_ParamLimits

0x5ed8,	// (0x000479bf) heading_pane_g2

0x2059,	// (0x00043b40) tabs_4_passive_pane_srt

0x5235,	// (0x00046d1c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5235,	// (0x00046d1c) bg_passive_tab_pane_cp3_srt

0x5ee0,	// (0x000479c7) heading_pane_t1_ParamLimits

0x5ee0,	// (0x000479c7) heading_pane_t1

0x5ef7,	// (0x000479de) heading_pane_t2_ParamLimits

0x5ef7,	// (0x000479de) heading_pane_t2

0x0001,

0xf8a9,	// (0x00051390) heading_pane_t_ParamLimits

0xf8a9,	// (0x00051390) heading_pane_t

0x59f1,	// (0x000474d8) bg_popup_heading_pane_g1

0x5aa0,	// (0x00047587) bg_popup_heading_pane_g2

0x5aaa,	// (0x00047591) bg_popup_heading_pane_g3

0x5ab4,	// (0x0004759b) bg_popup_heading_pane_g4

0x5abe,	// (0x000475a5) bg_popup_heading_pane_g5

0x5ac8,	// (0x000475af) bg_popup_heading_pane_g6

0x5ad0,	// (0x000475b7) bg_popup_heading_pane_g7

0x5ad8,	// (0x000475bf) bg_popup_heading_pane_g8

0x5ae2,	// (0x000475c9) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0005134c) bg_popup_heading_pane_g

0x51c1,	// (0x00046ca8) bg_popup_sub_pane_g1

0x51c9,	// (0x00046cb0) bg_popup_sub_pane_g2

0x51d1,	// (0x00046cb8) bg_popup_sub_pane_g3

0x51d9,	// (0x00046cc0) bg_popup_sub_pane_g4

0x51e1,	// (0x00046cc8) bg_popup_sub_pane_g5

0x51e9,	// (0x00046cd0) bg_popup_sub_pane_g6

0x51f1,	// (0x00046cd8) bg_popup_sub_pane_g7

0x51f9,	// (0x00046ce0) bg_popup_sub_pane_g8

0x5201,	// (0x00046ce8) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x00051326) bg_popup_sub_pane_g

0x369b,	// (0x00045182) bg_popup_window_pane_cp5_ParamLimits

0x369b,	// (0x00045182) bg_popup_window_pane_cp5

0x36b7,	// (0x0004519e) popup_note_window_g1_ParamLimits

0x36b7,	// (0x0004519e) popup_note_window_g1

0x36c3,	// (0x000451aa) popup_note_window_t1_ParamLimits

0x36c3,	// (0x000451aa) popup_note_window_t1

0x36d9,	// (0x000451c0) popup_note_window_t2_ParamLimits

0x36d9,	// (0x000451c0) popup_note_window_t2

0x36ef,	// (0x000451d6) popup_note_window_t3_ParamLimits

0x36ef,	// (0x000451d6) popup_note_window_t3

0x3705,	// (0x000451ec) popup_note_window_t4_ParamLimits

0x3705,	// (0x000451ec) popup_note_window_t4

0x372d,	// (0x00045214) popup_note_window_t5_ParamLimits

0x372d,	// (0x00045214) popup_note_window_t5

0x0004,

0xf558,	// (0x0005103f) popup_note_window_t_ParamLimits

0xf558,	// (0x0005103f) popup_note_window_t

0x3777,	// (0x0004525e) bg_popup_window_pane_cp6_ParamLimits

0x3777,	// (0x0004525e) bg_popup_window_pane_cp6

0x596d,	// (0x00047454) popup_note_image_window_g1_ParamLimits

0x596d,	// (0x00047454) popup_note_image_window_g1

0x5979,	// (0x00047460) popup_note_image_window_g2_ParamLimits

0x5979,	// (0x00047460) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0005131a) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0005131a) popup_note_image_window_g

0x5992,	// (0x00047479) popup_note_image_window_t1_ParamLimits

0x5992,	// (0x00047479) popup_note_image_window_t1

0x59ab,	// (0x00047492) popup_note_image_window_t2_ParamLimits

0x59ab,	// (0x00047492) popup_note_image_window_t2

0x59c4,	// (0x000474ab) popup_note_image_window_t3_ParamLimits

0x59c4,	// (0x000474ab) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0005131f) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0005131f) popup_note_image_window_t

0x582e,	// (0x00047315) bg_popup_window_pane_cp7_ParamLimits

0x582e,	// (0x00047315) bg_popup_window_pane_cp7

0x585e,	// (0x00047345) popup_note_wait_window_g1_ParamLimits

0x585e,	// (0x00047345) popup_note_wait_window_g1

0x586a,	// (0x00047351) popup_note_wait_window_g2_ParamLimits

0x586a,	// (0x00047351) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x00051308) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x00051308) popup_note_wait_window_g

0x5882,	// (0x00047369) popup_note_wait_window_t1_ParamLimits

0x5882,	// (0x00047369) popup_note_wait_window_t1

0x58a9,	// (0x00047390) popup_note_wait_window_t2_ParamLimits

0x58a9,	// (0x00047390) popup_note_wait_window_t2

0x58c6,	// (0x000473ad) popup_note_wait_window_t3_ParamLimits

0x58c6,	// (0x000473ad) popup_note_wait_window_t3

0x58d9,	// (0x000473c0) popup_note_wait_window_t4_ParamLimits

0x58d9,	// (0x000473c0) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0005130f) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0005130f) popup_note_wait_window_t

0x58fe,	// (0x000473e5) wait_bar_pane_ParamLimits

0x58fe,	// (0x000473e5) wait_bar_pane

0xd496,	// (0x0004ef7d) wait_anim_pane

0xd496,	// (0x0004ef7d) wait_border_pane

0xd48c,	// (0x0004ef73) wait_anim_pane_g1

0xd48c,	// (0x0004ef73) wait_anim_pane_g2

0x0001,

0xf6e1,	// (0x000511c8) wait_anim_pane_g

0x57d2,	// (0x000472b9) wait_border_pane_g1

0x57dd,	// (0x000472c4) wait_border_pane_g2

0x57e6,	// (0x000472cd) wait_border_pane_g3

0x0002,

0xf81a,	// (0x00051301) wait_border_pane_g

0x563d,	// (0x00047124) bg_popup_window_pane_cp16_ParamLimits

0x563d,	// (0x00047124) bg_popup_window_pane_cp16

0x573d,	// (0x00047224) indicator_popup_pane_cp4_ParamLimits

0x573d,	// (0x00047224) indicator_popup_pane_cp4

0x5751,	// (0x00047238) popup_query_data_window_t1_ParamLimits

0x5751,	// (0x00047238) popup_query_data_window_t1

0x5763,	// (0x0004724a) popup_query_data_window_t2_ParamLimits

0x5763,	// (0x0004724a) popup_query_data_window_t2

0x577c,	// (0x00047263) popup_query_data_window_t3_ParamLimits

0x577c,	// (0x00047263) popup_query_data_window_t3

0x0002,

0xf813,	// (0x000512fa) popup_query_data_window_t_ParamLimits

0xf813,	// (0x000512fa) popup_query_data_window_t

0x5796,	// (0x0004727d) query_popup_data_pane_ParamLimits

0x5796,	// (0x0004727d) query_popup_data_pane

0x57aa,	// (0x00047291) query_popup_data_pane_cp1_ParamLimits

0x57aa,	// (0x00047291) query_popup_data_pane_cp1

0x563d,	// (0x00047124) bg_popup_window_pane_cp10_ParamLimits

0x563d,	// (0x00047124) bg_popup_window_pane_cp10

0x566f,	// (0x00047156) indicator_popup_pane_ParamLimits

0x566f,	// (0x00047156) indicator_popup_pane

0x5691,	// (0x00047178) popup_query_code_window_t1_ParamLimits

0x5691,	// (0x00047178) popup_query_code_window_t1

0x56ab,	// (0x00047192) popup_query_code_window_t2_ParamLimits

0x56ab,	// (0x00047192) popup_query_code_window_t2

0x56f4,	// (0x000471db) popup_query_code_window_t3_ParamLimits

0x56f4,	// (0x000471db) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x000512f3) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x000512f3) popup_query_code_window_t

0x5723,	// (0x0004720a) query_popup_pane_ParamLimits

0x5723,	// (0x0004720a) query_popup_pane

0x3777,	// (0x0004525e) bg_popup_window_pane_cp15_ParamLimits

0x3777,	// (0x0004525e) bg_popup_window_pane_cp15

0x3795,	// (0x0004527c) indicator_popup_pane_cp1_ParamLimits

0x3795,	// (0x0004527c) indicator_popup_pane_cp1

0x37a8,	// (0x0004528f) indicator_popup_pane_cp2_ParamLimits

0x37a8,	// (0x0004528f) indicator_popup_pane_cp2

0x37bb,	// (0x000452a2) popup_query_data_code_window_g1_ParamLimits

0x37bb,	// (0x000452a2) popup_query_data_code_window_g1

0x37ce,	// (0x000452b5) popup_query_data_code_window_t1_ParamLimits

0x37ce,	// (0x000452b5) popup_query_data_code_window_t1

0x37e0,	// (0x000452c7) popup_query_data_code_window_t2_ParamLimits

0x37e0,	// (0x000452c7) popup_query_data_code_window_t2

0x37f2,	// (0x000452d9) popup_query_data_code_window_t3_ParamLimits

0x37f2,	// (0x000452d9) popup_query_data_code_window_t3

0x3808,	// (0x000452ef) popup_query_data_code_window_t4_ParamLimits

0x3808,	// (0x000452ef) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0005104a) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0005104a) popup_query_data_code_window_t

0x1c85,	// (0x0004376c) list_single_midp_graphic_pane_g3

0x3820,	// (0x00045307) query_popup_data_pane_cp2_ParamLimits

0x3833,	// (0x0004531a) query_popup_pane_cp2_ParamLimits

0x3833,	// (0x0004531a) query_popup_pane_cp2

0xd496,	// (0x0004ef7d) bg_popup_window_pane_cp11

0x5621,	// (0x00047108) heading_pane_cp5

0x5629,	// (0x00047110) listscroll_popup_info_pane

0xd496,	// (0x0004ef7d) input_focus_pane_cp3

0x3846,	// (0x0004532d) query_popup_pane_t1

0x3854,	// (0x0004533b) list_popup_info_pane_ParamLimits

0x3854,	// (0x0004533b) list_popup_info_pane

0x3863,	// (0x0004534a) listscroll_popup_info_pane_g1

0x386b,	// (0x00045352) scroll_pane_cp7

0x3875,	// (0x0004535c) popup_info_list_pane_t1_ParamLimits

0x3875,	// (0x0004535c) popup_info_list_pane_t1

0x388f,	// (0x00045376) popup_info_list_pane_t2_ParamLimits

0x388f,	// (0x00045376) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00051053) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00051053) popup_info_list_pane_t

0xd496,	// (0x0004ef7d) bg_popup_window_pane_cp12

0x6997,	// (0x0004847e) find_popup_pane

0x3420,	// (0x00044f07) bg_popup_window_pane_cp3

0x38a9,	// (0x00045390) heading_pane_cp3

0x38b8,	// (0x0004539f) listscroll_popup_graphic_pane

0xd496,	// (0x0004ef7d) bg_popup_window_pane_cp4

0xc1b2,	// (0x0004dc99) heading_pane_cp4

0x3922,	// (0x00045409) listscroll_popup_colour_pane

0xc1bc,	// (0x0004dca3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc1bc,	// (0x0004dca3) cell_large_graphic_colour_none_popup_pane

0xc1d0,	// (0x0004dcb7) grid_large_graphic_colour_popup_pane_ParamLimits

0xc1d0,	// (0x0004dcb7) grid_large_graphic_colour_popup_pane

0xc1f4,	// (0x0004dcdb) listscroll_popup_colour_pane_g1_ParamLimits

0xc1f4,	// (0x0004dcdb) listscroll_popup_colour_pane_g1

0xc20b,	// (0x0004dcf2) listscroll_popup_colour_pane_g2_ParamLimits

0xc20b,	// (0x0004dcf2) listscroll_popup_colour_pane_g2

0xc21f,	// (0x0004dd06) listscroll_popup_colour_pane_g3_ParamLimits

0xc21f,	// (0x0004dd06) listscroll_popup_colour_pane_g3

0xc22f,	// (0x0004dd16) listscroll_popup_colour_pane_g4_ParamLimits

0xc22f,	// (0x0004dd16) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00051058) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00051058) listscroll_popup_colour_pane_g

0x39b0,	// (0x00045497) scroll_pane_cp6_ParamLimits

0x39b0,	// (0x00045497) scroll_pane_cp6

0xc23f,	// (0x0004dd26) cell_large_graphic_colour_popup_pane_ParamLimits

0xc23f,	// (0x0004dd26) cell_large_graphic_colour_popup_pane

0x39e1,	// (0x000454c8) cell_large_graphic_colour_none_popup_pane_t1

0xd496,	// (0x0004ef7d) grid_highlight_pane_cp5

0x39f0,	// (0x000454d7) cell_large_graphic_colour_popup_pane_g1

0x39f8,	// (0x000454df) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00051061) cell_large_graphic_colour_popup_pane_g

0x3a00,	// (0x000454e7) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a09,	// (0x000454f0) grid_highlight_pane_cp4

0x3a11,	// (0x000454f8) bg_popup_window_pane_cp8_ParamLimits

0x3a11,	// (0x000454f8) bg_popup_window_pane_cp8

0x3a2c,	// (0x00045513) popup_snote_single_text_window_g1_ParamLimits

0x3a2c,	// (0x00045513) popup_snote_single_text_window_g1

0x3a3e,	// (0x00045525) popup_snote_single_text_window_t1_ParamLimits

0x3a3e,	// (0x00045525) popup_snote_single_text_window_t1

0x3a51,	// (0x00045538) popup_snote_single_text_window_t2_ParamLimits

0x3a51,	// (0x00045538) popup_snote_single_text_window_t2

0x3a64,	// (0x0004554b) popup_snote_single_text_window_t3_ParamLimits

0x3a64,	// (0x0004554b) popup_snote_single_text_window_t3

0x3a9d,	// (0x00045584) popup_snote_single_text_window_t4_ParamLimits

0x3a9d,	// (0x00045584) popup_snote_single_text_window_t4

0x3ad1,	// (0x000455b8) popup_snote_single_text_window_t5_ParamLimits

0x3ad1,	// (0x000455b8) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00051066) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00051066) popup_snote_single_text_window_t

0x3b00,	// (0x000455e7) bg_popup_window_pane_cp9_ParamLimits

0x3b00,	// (0x000455e7) bg_popup_window_pane_cp9

0x3a2c,	// (0x00045513) popup_snote_single_graphic_window_g1_ParamLimits

0x3a2c,	// (0x00045513) popup_snote_single_graphic_window_g1

0x3b0e,	// (0x000455f5) popup_snote_single_graphic_window_g2_ParamLimits

0x3b0e,	// (0x000455f5) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00051071) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00051071) popup_snote_single_graphic_window_g

0x3b1a,	// (0x00045601) popup_snote_single_graphic_window_t1_ParamLimits

0x3b1a,	// (0x00045601) popup_snote_single_graphic_window_t1

0x3b2d,	// (0x00045614) popup_snote_single_graphic_window_t2_ParamLimits

0x3b2d,	// (0x00045614) popup_snote_single_graphic_window_t2

0x3b40,	// (0x00045627) popup_snote_single_graphic_window_t3_ParamLimits

0x3b40,	// (0x00045627) popup_snote_single_graphic_window_t3

0x3b79,	// (0x00045660) popup_snote_single_graphic_window_t4_ParamLimits

0x3b79,	// (0x00045660) popup_snote_single_graphic_window_t4

0x3bad,	// (0x00045694) popup_snote_single_graphic_window_t5_ParamLimits

0x3bad,	// (0x00045694) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00051076) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00051076) popup_snote_single_graphic_window_t

0x68d9,	// (0x000483c0) grid_graphic_popup_pane_ParamLimits

0x68d9,	// (0x000483c0) grid_graphic_popup_pane

0x6903,	// (0x000483ea) listscroll_popup_graphic_pane_g1_ParamLimits

0x6903,	// (0x000483ea) listscroll_popup_graphic_pane_g1

0xde3f,	// (0x0004f926) listscroll_popup_graphic_pane_g2_ParamLimits

0xde3f,	// (0x0004f926) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x00051470) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x00051470) listscroll_popup_graphic_pane_g

0x692b,	// (0x00048412) scroll_pane_cp5

0xddfa,	// (0x0004f8e1) cell_graphic_popup_pane_ParamLimits

0xddfa,	// (0x0004f8e1) cell_graphic_popup_pane

0x6848,	// (0x0004832f) cell_graphic_popup_pane_g1

0x6850,	// (0x00048337) cell_graphic_popup_pane_g2

0x3a00,	// (0x000454e7) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x00051469) cell_graphic_popup_pane_g

0x6859,	// (0x00048340) cell_graphic_popup_pane_t2

0x3a09,	// (0x000454f0) grid_highlight_pane_cp3

0x3bee,	// (0x000456d5) list_gen_pane_ParamLimits

0x3bee,	// (0x000456d5) list_gen_pane

0x3c20,	// (0x00045707) scroll_pane

0xddb1,	// (0x0004f898) bg_list_pane_g1_ParamLimits

0xddb1,	// (0x0004f898) bg_list_pane_g1

0x67bd,	// (0x000482a4) bg_list_pane_g2_ParamLimits

0x67bd,	// (0x000482a4) bg_list_pane_g2

0x67d2,	// (0x000482b9) bg_list_pane_g3_ParamLimits

0x67d2,	// (0x000482b9) bg_list_pane_g3

0x67e6,	// (0x000482cd) bg_list_pane_g4_ParamLimits

0x67e6,	// (0x000482cd) bg_list_pane_g4

0xddce,	// (0x0004f8b5) bg_list_pane_g5_ParamLimits

0xddce,	// (0x0004f8b5) bg_list_pane_g5

0x0004,

0xf977,	// (0x0005145e) bg_list_pane_g_ParamLimits

0xf977,	// (0x0005145e) bg_list_pane_g

0xdd7a,	// (0x0004f861) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double2_graphic_large_graphic_pane

0xdd7a,	// (0x0004f861) list_double2_graphic_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double2_graphic_pane

0xdd7a,	// (0x0004f861) list_double2_large_graphic_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double2_large_graphic_pane

0xdd7a,	// (0x0004f861) list_double2_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double2_pane

0xdd7a,	// (0x0004f861) list_double_graphic_heading_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_graphic_heading_pane

0xdd7a,	// (0x0004f861) list_double_graphic_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_graphic_pane

0xdd7a,	// (0x0004f861) list_double_heading_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_heading_pane

0xdd7a,	// (0x0004f861) list_double_large_graphic_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_large_graphic_pane

0xdd7a,	// (0x0004f861) list_double_number_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_number_pane

0xdd7a,	// (0x0004f861) list_double_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_pane

0xdd7a,	// (0x0004f861) list_double_time_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_double_time_pane

0xdd7a,	// (0x0004f861) list_setting_number_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_setting_number_pane

0xdd7a,	// (0x0004f861) list_setting_pane_ParamLimits

0xdd7a,	// (0x0004f861) list_setting_pane

0xdd8c,	// (0x0004f873) list_single_2graphic_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_2graphic_pane

0xdd8c,	// (0x0004f873) list_single_graphic_heading_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_graphic_heading_pane

0xdd8c,	// (0x0004f873) list_single_graphic_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_graphic_pane

0xdd8c,	// (0x0004f873) list_single_heading_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_heading_pane

0xdd8c,	// (0x0004f873) list_single_large_graphic_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_large_graphic_pane

0xdd8c,	// (0x0004f873) list_single_number_heading_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_number_heading_pane

0xdd8c,	// (0x0004f873) list_single_number_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_number_pane

0xdd8c,	// (0x0004f873) list_single_pane_ParamLimits

0xdd8c,	// (0x0004f873) list_single_pane

0xd496,	// (0x0004ef7d) list_highlight_pane_cp1

0x45d4,	// (0x000460bb) list_single_pane_g1_ParamLimits

0x45d4,	// (0x000460bb) list_single_pane_g1

0x0fc3,	// (0x00042aaa) list_single_pane_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_pane_g2

0x0001,

0xf5ab,	// (0x00051092) list_single_pane_g_ParamLimits

0xf5ab,	// (0x00051092) list_single_pane_g

0x053f,	// (0x00042026) list_single_pane_t1_ParamLimits

0x053f,	// (0x00042026) list_single_pane_t1

0x45d4,	// (0x000460bb) list_single_number_pane_g1_ParamLimits

0x45d4,	// (0x000460bb) list_single_number_pane_g1

0x0fc3,	// (0x00042aaa) list_single_number_pane_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_number_pane_g2

0x0001,

0xf5ab,	// (0x00051092) list_single_number_pane_g_ParamLimits

0xf5ab,	// (0x00051092) list_single_number_pane_g

0x0416,	// (0x00041efd) list_single_number_pane_t1_ParamLimits

0x0416,	// (0x00041efd) list_single_number_pane_t1

0x04fd,	// (0x00041fe4) list_single_number_pane_t2_ParamLimits

0x04fd,	// (0x00041fe4) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0005141f) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0005141f) list_single_number_pane_t

0xf444,	// (0x00050f2b) list_single_graphic_pane_g1_ParamLimits

0xf444,	// (0x00050f2b) list_single_graphic_pane_g1

0x45d4,	// (0x000460bb) list_single_graphic_pane_g2_ParamLimits

0x45d4,	// (0x000460bb) list_single_graphic_pane_g2

0x0fc3,	// (0x00042aaa) list_single_graphic_pane_g3_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00051081) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00051081) list_single_graphic_pane_g

0xf450,	// (0x00050f37) list_single_graphic_pane_t1_ParamLimits

0xf450,	// (0x00050f37) list_single_graphic_pane_t1

0xf466,	// (0x00050f4d) list_single_heading_pane_g1_ParamLimits

0xf466,	// (0x00050f4d) list_single_heading_pane_g1

0x0fc3,	// (0x00042aaa) list_single_heading_pane_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00051088) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00051088) list_single_heading_pane_g

0xf479,	// (0x00050f60) list_single_heading_pane_t1_ParamLimits

0xf479,	// (0x00050f60) list_single_heading_pane_t1

0x0fcf,	// (0x00042ab6) list_single_heading_pane_t2_ParamLimits

0x0fcf,	// (0x00042ab6) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0005108d) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0005108d) list_single_heading_pane_t

0x45d4,	// (0x000460bb) list_single_number_heading_pane_g1_ParamLimits

0x45d4,	// (0x000460bb) list_single_number_heading_pane_g1

0x0fc3,	// (0x00042aaa) list_single_number_heading_pane_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_number_heading_pane_g2

0x0001,

0xf5ab,	// (0x00051092) list_single_number_heading_pane_g_ParamLimits

0xf5ab,	// (0x00051092) list_single_number_heading_pane_g

0xf48f,	// (0x00050f76) list_single_number_heading_pane_t1_ParamLimits

0xf48f,	// (0x00050f76) list_single_number_heading_pane_t1

0xf4a5,	// (0x00050f8c) list_single_number_heading_pane_t2_ParamLimits

0xf4a5,	// (0x00050f8c) list_single_number_heading_pane_t2

0xf4b7,	// (0x00050f9e) list_single_number_heading_pane_t3_ParamLimits

0xf4b7,	// (0x00050f9e) list_single_number_heading_pane_t3

0x0002,

0xf5b0,	// (0x00051097) list_single_number_heading_pane_t_ParamLimits

0xf5b0,	// (0x00051097) list_single_number_heading_pane_t

0xf4c9,	// (0x00050fb0) list_single_graphic_heading_pane_g1_ParamLimits

0xf4c9,	// (0x00050fb0) list_single_graphic_heading_pane_g1

0xc268,	// (0x0004dd4f) list_single_graphic_heading_pane_g4_ParamLimits

0xc268,	// (0x0004dd4f) list_single_graphic_heading_pane_g4

0x0fc3,	// (0x00042aaa) list_single_graphic_heading_pane_g5_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_graphic_heading_pane_g5

0x0002,

0xf5b7,	// (0x0005109e) list_single_graphic_heading_pane_g_ParamLimits

0xf5b7,	// (0x0005109e) list_single_graphic_heading_pane_g

0xf48f,	// (0x00050f76) list_single_graphic_heading_pane_t1_ParamLimits

0xf48f,	// (0x00050f76) list_single_graphic_heading_pane_t1

0x0ff2,	// (0x00042ad9) list_single_graphic_heading_pane_t2_ParamLimits

0x0ff2,	// (0x00042ad9) list_single_graphic_heading_pane_t2

0x0001,

0xf5be,	// (0x000510a5) list_single_graphic_heading_pane_t_ParamLimits

0xf5be,	// (0x000510a5) list_single_graphic_heading_pane_t

0x20ec,	// (0x00043bd3) list_single_large_graphic_pane_g1_ParamLimits

0x20ec,	// (0x00043bd3) list_single_large_graphic_pane_g1

0x45d4,	// (0x000460bb) list_single_large_graphic_pane_g2_ParamLimits

0x45d4,	// (0x000460bb) list_single_large_graphic_pane_g2

0x0fc3,	// (0x00042aaa) list_single_large_graphic_pane_g3_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_large_graphic_pane_g3

0x0002,

0xf5c3,	// (0x000510aa) list_single_large_graphic_pane_g_ParamLimits

0xf5c3,	// (0x000510aa) list_single_large_graphic_pane_g

0x57dd,	// (0x000472c4) wait_border_pane_g2_copy1

0xc279,	// (0x0004dd60) list_single_large_graphic_pane_g4_cp2

0x065c,	// (0x00042143) list_single_large_graphic_pane_t1_ParamLimits

0x065c,	// (0x00042143) list_single_large_graphic_pane_t1

0x3c54,	// (0x0004573b) list_double_pane_g1_ParamLimits

0x3c54,	// (0x0004573b) list_double_pane_g1

0x1037,	// (0x00042b1e) list_double_pane_g2_ParamLimits

0x1037,	// (0x00042b1e) list_double_pane_g2

0x0001,

0xf5ca,	// (0x000510b1) list_double_pane_g_ParamLimits

0xf5ca,	// (0x000510b1) list_double_pane_g

0xb6d0,	// (0x0004d1b7) list_double_pane_t1_ParamLimits

0xb6d0,	// (0x0004d1b7) list_double_pane_t1

0xb6e6,	// (0x0004d1cd) list_double_pane_t2_ParamLimits

0xb6e6,	// (0x0004d1cd) list_double_pane_t2

0x0001,

0xf5cf,	// (0x000510b6) list_double_pane_t_ParamLimits

0xf5cf,	// (0x000510b6) list_double_pane_t

0xb6f8,	// (0x0004d1df) list_double2_pane_g1_ParamLimits

0xb6f8,	// (0x0004d1df) list_double2_pane_g1

0xf503,	// (0x00050fea) list_double2_pane_g2_ParamLimits

0xf503,	// (0x00050fea) list_double2_pane_g2

0x0001,

0xf5d4,	// (0x000510bb) list_double2_pane_g_ParamLimits

0xf5d4,	// (0x000510bb) list_double2_pane_g

0xb709,	// (0x0004d1f0) list_double2_pane_t1_ParamLimits

0xb709,	// (0x0004d1f0) list_double2_pane_t1

0xb71f,	// (0x0004d206) list_double2_pane_t2_ParamLimits

0xb71f,	// (0x0004d206) list_double2_pane_t2

0x0001,

0xf5d9,	// (0x000510c0) list_double2_pane_t_ParamLimits

0xf5d9,	// (0x000510c0) list_double2_pane_t

0x3c54,	// (0x0004573b) list_double_number_pane_g1_ParamLimits

0x3c54,	// (0x0004573b) list_double_number_pane_g1

0x1037,	// (0x00042b1e) list_double_number_pane_g2_ParamLimits

0x1037,	// (0x00042b1e) list_double_number_pane_g2

0x0001,

0xf5ca,	// (0x000510b1) list_double_number_pane_g_ParamLimits

0xf5ca,	// (0x000510b1) list_double_number_pane_g

0xb731,	// (0x0004d218) list_double_number_pane_t1_ParamLimits

0xb731,	// (0x0004d218) list_double_number_pane_t1

0xf4d5,	// (0x00050fbc) list_double_number_pane_t2_ParamLimits

0xf4d5,	// (0x00050fbc) list_double_number_pane_t2

0xb743,	// (0x0004d22a) list_double_number_pane_t3_ParamLimits

0xb743,	// (0x0004d22a) list_double_number_pane_t3

0x0002,

0xf5de,	// (0x000510c5) list_double_number_pane_t_ParamLimits

0xf5de,	// (0x000510c5) list_double_number_pane_t

0xf4eb,	// (0x00050fd2) list_double_graphic_pane_g1_ParamLimits

0xf4eb,	// (0x00050fd2) list_double_graphic_pane_g1

0xb755,	// (0x0004d23c) list_double_graphic_pane_g2_ParamLimits

0xb755,	// (0x0004d23c) list_double_graphic_pane_g2

0xb764,	// (0x0004d24b) list_double_graphic_pane_g3_ParamLimits

0xb764,	// (0x0004d24b) list_double_graphic_pane_g3

0x0003,

0xf5e5,	// (0x000510cc) list_double_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000510cc) list_double_graphic_pane_g

0xb77c,	// (0x0004d263) list_double_graphic_pane_t1_ParamLimits

0xb77c,	// (0x0004d263) list_double_graphic_pane_t1

0xb792,	// (0x0004d279) list_double_graphic_pane_t2_ParamLimits

0xb792,	// (0x0004d279) list_double_graphic_pane_t2

0x0001,

0xf5ee,	// (0x000510d5) list_double_graphic_pane_t_ParamLimits

0xf5ee,	// (0x000510d5) list_double_graphic_pane_t

0xb7a4,	// (0x0004d28b) list_double2_graphic_pane_g1_ParamLimits

0xb7a4,	// (0x0004d28b) list_double2_graphic_pane_g1

0x6b01,	// (0x000485e8) list_double2_graphic_pane_g2_ParamLimits

0x6b01,	// (0x000485e8) list_double2_graphic_pane_g2

0xb7b0,	// (0x0004d297) list_double2_graphic_pane_g3_ParamLimits

0xb7b0,	// (0x0004d297) list_double2_graphic_pane_g3

0x0002,

0xf5f3,	// (0x000510da) list_double2_graphic_pane_g_ParamLimits

0xf5f3,	// (0x000510da) list_double2_graphic_pane_g

0xb7bc,	// (0x0004d2a3) list_double2_graphic_pane_t1_ParamLimits

0xb7bc,	// (0x0004d2a3) list_double2_graphic_pane_t1

0xb7d2,	// (0x0004d2b9) list_double2_graphic_pane_t2_ParamLimits

0xb7d2,	// (0x0004d2b9) list_double2_graphic_pane_t2

0x0001,

0xf5fa,	// (0x000510e1) list_double2_graphic_pane_t_ParamLimits

0xf5fa,	// (0x000510e1) list_double2_graphic_pane_t

0xb7e4,	// (0x0004d2cb) list_double_large_graphic_pane_g1_ParamLimits

0xb7e4,	// (0x0004d2cb) list_double_large_graphic_pane_g1

0xb803,	// (0x0004d2ea) list_double_large_graphic_pane_g2_ParamLimits

0xb803,	// (0x0004d2ea) list_double_large_graphic_pane_g2

0x1037,	// (0x00042b1e) list_double_large_graphic_pane_g3_ParamLimits

0x1037,	// (0x00042b1e) list_double_large_graphic_pane_g3

0xb819,	// (0x0004d300) list_double_large_graphic_pane_g4_ParamLimits

0xb819,	// (0x0004d300) list_double_large_graphic_pane_g4

0x0004,

0xf5ff,	// (0x000510e6) list_double_large_graphic_pane_g_ParamLimits

0xf5ff,	// (0x000510e6) list_double_large_graphic_pane_g

0xb82c,	// (0x0004d313) list_double_large_graphic_pane_t1_ParamLimits

0xb82c,	// (0x0004d313) list_double_large_graphic_pane_t1

0xb845,	// (0x0004d32c) list_double_large_graphic_pane_t2_ParamLimits

0xb845,	// (0x0004d32c) list_double_large_graphic_pane_t2

0x0001,

0xf60a,	// (0x000510f1) list_double_large_graphic_pane_t_ParamLimits

0xf60a,	// (0x000510f1) list_double_large_graphic_pane_t

0xc281,	// (0x0004dd68) list_double2_large_graphic_pane_g1_ParamLimits

0xc281,	// (0x0004dd68) list_double2_large_graphic_pane_g1

0xb857,	// (0x0004d33e) list_double2_large_graphic_pane_g2_ParamLimits

0xb857,	// (0x0004d33e) list_double2_large_graphic_pane_g2

0xb7b0,	// (0x0004d297) list_double2_large_graphic_pane_g3_ParamLimits

0xb7b0,	// (0x0004d297) list_double2_large_graphic_pane_g3

0x0002,

0xf60f,	// (0x000510f6) list_double2_large_graphic_pane_g_ParamLimits

0xf60f,	// (0x000510f6) list_double2_large_graphic_pane_g

0xb868,	// (0x0004d34f) list_double2_large_graphic_pane_t1_ParamLimits

0xb868,	// (0x0004d34f) list_double2_large_graphic_pane_t1

0xb87e,	// (0x0004d365) list_double2_large_graphic_pane_t2_ParamLimits

0xb87e,	// (0x0004d365) list_double2_large_graphic_pane_t2

0x0001,

0xf616,	// (0x000510fd) list_double2_large_graphic_pane_t_ParamLimits

0xf616,	// (0x000510fd) list_double2_large_graphic_pane_t

0xb890,	// (0x0004d377) list_double_heading_pane_g1_ParamLimits

0xb890,	// (0x0004d377) list_double_heading_pane_g1

0xb8a1,	// (0x0004d388) list_double_heading_pane_g2_ParamLimits

0xb8a1,	// (0x0004d388) list_double_heading_pane_g2

0x0001,

0xf61b,	// (0x00051102) list_double_heading_pane_g_ParamLimits

0xf61b,	// (0x00051102) list_double_heading_pane_g

0xb8ad,	// (0x0004d394) list_double_heading_pane_t1_ParamLimits

0xb8ad,	// (0x0004d394) list_double_heading_pane_t1

0xb71f,	// (0x0004d206) list_double_heading_pane_t2_ParamLimits

0xb71f,	// (0x0004d206) list_double_heading_pane_t2

0x0001,

0xf620,	// (0x00051107) list_double_heading_pane_t_ParamLimits

0xf620,	// (0x00051107) list_double_heading_pane_t

0xf50f,	// (0x00050ff6) list_double_graphic_heading_pane_g1_ParamLimits

0xf50f,	// (0x00050ff6) list_double_graphic_heading_pane_g1

0xb890,	// (0x0004d377) list_double_graphic_heading_pane_g2_ParamLimits

0xb890,	// (0x0004d377) list_double_graphic_heading_pane_g2

0xb8a1,	// (0x0004d388) list_double_graphic_heading_pane_g3_ParamLimits

0xb8a1,	// (0x0004d388) list_double_graphic_heading_pane_g3

0x0002,

0xf625,	// (0x0005110c) list_double_graphic_heading_pane_g_ParamLimits

0xf625,	// (0x0005110c) list_double_graphic_heading_pane_g

0xb8c3,	// (0x0004d3aa) list_double_graphic_heading_pane_t1_ParamLimits

0xb8c3,	// (0x0004d3aa) list_double_graphic_heading_pane_t1

0xb7d2,	// (0x0004d2b9) list_double_graphic_heading_pane_t2_ParamLimits

0xb7d2,	// (0x0004d2b9) list_double_graphic_heading_pane_t2

0x0001,

0xf62c,	// (0x00051113) list_double_graphic_heading_pane_t_ParamLimits

0xf62c,	// (0x00051113) list_double_graphic_heading_pane_t

0xb8d9,	// (0x0004d3c0) list_double_time_pane_g1_ParamLimits

0xb8d9,	// (0x0004d3c0) list_double_time_pane_g1

0xf4f7,	// (0x00050fde) list_double_time_pane_g2_ParamLimits

0xf4f7,	// (0x00050fde) list_double_time_pane_g2

0x0001,

0xf631,	// (0x00051118) list_double_time_pane_g_ParamLimits

0xf631,	// (0x00051118) list_double_time_pane_g

0xb8ea,	// (0x0004d3d1) list_double_time_pane_t1_ParamLimits

0xb8ea,	// (0x0004d3d1) list_double_time_pane_t1

0xb900,	// (0x0004d3e7) list_double_time_pane_t2_ParamLimits

0xb900,	// (0x0004d3e7) list_double_time_pane_t2

0xb912,	// (0x0004d3f9) list_double_time_pane_t3_ParamLimits

0xb912,	// (0x0004d3f9) list_double_time_pane_t3

0xb924,	// (0x0004d40b) list_double_time_pane_t4_ParamLimits

0xb924,	// (0x0004d40b) list_double_time_pane_t4

0x0003,

0xf636,	// (0x0005111d) list_double_time_pane_t_ParamLimits

0xf636,	// (0x0005111d) list_double_time_pane_t

0xf51b,	// (0x00051002) list_setting_pane_g1_ParamLimits

0xf51b,	// (0x00051002) list_setting_pane_g1

0xf503,	// (0x00050fea) list_setting_pane_g2_ParamLimits

0xf503,	// (0x00050fea) list_setting_pane_g2

0x0001,

0xf63f,	// (0x00051126) list_setting_pane_g_ParamLimits

0xf63f,	// (0x00051126) list_setting_pane_g

0xb936,	// (0x0004d41d) list_setting_pane_t1_ParamLimits

0xb936,	// (0x0004d41d) list_setting_pane_t1

0xb950,	// (0x0004d437) list_setting_pane_t2_ParamLimits

0xb950,	// (0x0004d437) list_setting_pane_t2

0x0002,

0xf644,	// (0x0005112b) list_setting_pane_t_ParamLimits

0xf644,	// (0x0005112b) list_setting_pane_t

0xb98f,	// (0x0004d476) set_value_pane_cp_ParamLimits

0xb98f,	// (0x0004d476) set_value_pane_cp

0x0025,	// (0x00041b0c) list_setting_number_pane_g1_ParamLimits

0x0025,	// (0x00041b0c) list_setting_number_pane_g1

0x0031,	// (0x00041b18) list_setting_number_pane_g2_ParamLimits

0x0031,	// (0x00041b18) list_setting_number_pane_g2

0x0001,

0xf64b,	// (0x00051132) list_setting_number_pane_g_ParamLimits

0xf64b,	// (0x00051132) list_setting_number_pane_g

0xb99b,	// (0x0004d482) list_setting_number_pane_t1_ParamLimits

0xb99b,	// (0x0004d482) list_setting_number_pane_t1

0xb9b4,	// (0x0004d49b) list_setting_number_pane_t2_ParamLimits

0xb9b4,	// (0x0004d49b) list_setting_number_pane_t2

0xb9ce,	// (0x0004d4b5) list_setting_number_pane_t3_ParamLimits

0xb9ce,	// (0x0004d4b5) list_setting_number_pane_t3

0x0003,

0xf650,	// (0x00051137) list_setting_number_pane_t_ParamLimits

0xf650,	// (0x00051137) list_setting_number_pane_t

0xb98f,	// (0x0004d476) set_value_pane_ParamLimits

0xb98f,	// (0x0004d476) set_value_pane

0x3c60,	// (0x00045747) bg_set_opt_pane_ParamLimits

0x3c60,	// (0x00045747) bg_set_opt_pane

0x00b3,	// (0x00041b9a) set_value_pane_t1

0x3c81,	// (0x00045768) slider_set_pane_cp3

0x3c8a,	// (0x00045771) volume_small_pane_cp

0x3c93,	// (0x0004577a) list_form_gen_pane

0x3c9c,	// (0x00045783) scroll_pane_cp8

0xba11,	// (0x0004d4f8) form_field_data_pane_ParamLimits

0xba11,	// (0x0004d4f8) form_field_data_pane

0xba2a,	// (0x0004d511) form_field_data_wide_pane_ParamLimits

0xba2a,	// (0x0004d511) form_field_data_wide_pane

0xba4a,	// (0x0004d531) form_field_popup_pane_ParamLimits

0xba4a,	// (0x0004d531) form_field_popup_pane

0xba62,	// (0x0004d549) form_field_popup_wide_pane_ParamLimits

0xba62,	// (0x0004d549) form_field_popup_wide_pane

0x014f,	// (0x00041c36) form_field_slider_pane_ParamLimits

0x014f,	// (0x00041c36) form_field_slider_pane

0x0162,	// (0x00041c49) form_field_slider_wide_pane_ParamLimits

0x0162,	// (0x00041c49) form_field_slider_wide_pane

0x3cad,	// (0x00045794) data_form_pane

0xba8b,	// (0x0004d572) form_field_data_pane_t1

0x3cb9,	// (0x000457a0) input_focus_pane

0x0197,	// (0x00041c7e) data_form_wide_pane

0x01b4,	// (0x00041c9b) form_field_data_wide_pane_t1

0x3a1e,	// (0x00045505) input_focus_pane_cp6

0xbaa5,	// (0x0004d58c) form_field_popup_pane_t1

0x3cb9,	// (0x000457a0) input_focus_pane_cp7

0x3cdb,	// (0x000457c2) list_form_pane

0x01f6,	// (0x00041cdd) form_field_popup_wide_pane_t1

0x3cb9,	// (0x000457a0) input_focus_pane_cp8

0x3ce7,	// (0x000457ce) list_form_wide_pane

0xbac7,	// (0x0004d5ae) form_field_slider_pane_t1_ParamLimits

0xbac7,	// (0x0004d5ae) form_field_slider_pane_t1

0xbadf,	// (0x0004d5c6) form_field_slider_pane_t2_ParamLimits

0xbadf,	// (0x0004d5c6) form_field_slider_pane_t2

0x0001,

0xf660,	// (0x00051147) form_field_slider_pane_t_ParamLimits

0xf660,	// (0x00051147) form_field_slider_pane_t

0x369b,	// (0x00045182) input_focus_pane_cp9_ParamLimits

0x369b,	// (0x00045182) input_focus_pane_cp9

0xbaf4,	// (0x0004d5db) slider_cont_pane_ParamLimits

0xbaf4,	// (0x0004d5db) slider_cont_pane

0x3cf3,	// (0x000457da) form_field_slider_wide_pane_t1_ParamLimits

0x3cf3,	// (0x000457da) form_field_slider_wide_pane_t1

0x0252,	// (0x00041d39) form_field_slider_wide_pane_t2_ParamLimits

0x0252,	// (0x00041d39) form_field_slider_wide_pane_t2

0x0001,

0xf665,	// (0x0005114c) form_field_slider_wide_pane_t_ParamLimits

0xf665,	// (0x0005114c) form_field_slider_wide_pane_t

0x369b,	// (0x00045182) input_focus_pane_cp10_ParamLimits

0x369b,	// (0x00045182) input_focus_pane_cp10

0xbb08,	// (0x0004d5ef) slider_cont_pane_cp1_ParamLimits

0xbb08,	// (0x0004d5ef) slider_cont_pane_cp1

0xbb1c,	// (0x0004d603) slider_form_pane_cp

0x3d05,	// (0x000457ec) input_focus_pane_g1

0x3d0d,	// (0x000457f4) input_focus_pane_g2

0x3d15,	// (0x000457fc) input_focus_pane_g3

0x3d1d,	// (0x00045804) input_focus_pane_g4

0x3d25,	// (0x0004580c) input_focus_pane_g5

0x3d2d,	// (0x00045814) input_focus_pane_g6

0x3d35,	// (0x0004581c) input_focus_pane_g7

0x3d3d,	// (0x00045824) input_focus_pane_g8

0x3d45,	// (0x0004582c) input_focus_pane_g9

0xd48c,	// (0x0004ef73) input_focus_pane_g10

0x0009,

0xf66a,	// (0x00051151) input_focus_pane_g

0x57e6,	// (0x000472cd) wait_border_pane_g3_copy1

0xbb24,	// (0x0004d60b) data_form_pane_t1

0xd48c,	// (0x0004ef73) wait_anim_pane_g1_copy1

0xbb8d,	// (0x0004d674) data_form_wide_pane_t1

0xbb3e,	// (0x0004d625) list_form_graphic_pane_cp_ParamLimits

0xbb3e,	// (0x0004d625) list_form_graphic_pane_cp

0x66f6,	// (0x000481dd) slider_form_pane_g1

0x66ff,	// (0x000481e6) slider_form_pane_g2

0x0006,

0xf968,	// (0x0005144f) slider_form_pane_g

0xbb3e,	// (0x0004d625) list_form_graphic_pane_ParamLimits

0xbb3e,	// (0x0004d625) list_form_graphic_pane

0x02d0,	// (0x00041db7) list_form_graphic_pane_g1

0x02d8,	// (0x00041dbf) list_form_graphic_pane_t1_ParamLimits

0x02d8,	// (0x00041dbf) list_form_graphic_pane_t1

0x3420,	// (0x00044f07) list_highlight_pane_cp5_ParamLimits

0x3420,	// (0x00044f07) list_highlight_pane_cp5

0x02ed,	// (0x00041dd4) find_pane_g1

0x3d4d,	// (0x00045834) input_find_pane

0x02f6,	// (0x00041ddd) input_find_pane_g1_ParamLimits

0x02f6,	// (0x00041ddd) input_find_pane_g1

0x0302,	// (0x00041de9) input_find_pane_t1_ParamLimits

0x0302,	// (0x00041de9) input_find_pane_t1

0x0317,	// (0x00041dfe) input_find_pane_t2_ParamLimits

0x0317,	// (0x00041dfe) input_find_pane_t2

0x0001,

0xf67f,	// (0x00051166) input_find_pane_t_ParamLimits

0xf67f,	// (0x00051166) input_find_pane_t

0x3d56,	// (0x0004583d) input_focus_pane_cp5_ParamLimits

0x3d56,	// (0x0004583d) input_focus_pane_cp5

0x3d75,	// (0x0004585c) bg_popup_window_pane_cp2_ParamLimits

0x3d75,	// (0x0004585c) bg_popup_window_pane_cp2

0x3d82,	// (0x00045869) listscroll_menu_pane_ParamLimits

0x3d82,	// (0x00045869) listscroll_menu_pane

0xc299,	// (0x0004dd80) popup_submenu_window_ParamLimits

0xc299,	// (0x0004dd80) popup_submenu_window

0x3dba,	// (0x000458a1) find_popup_pane_g1

0x3dc2,	// (0x000458a9) input_popup_find_pane_cp

0x3dcc,	// (0x000458b3) input_focus_pane_cp4_ParamLimits

0x3dcc,	// (0x000458b3) input_focus_pane_cp4

0x3de6,	// (0x000458cd) input_popup_find_pane_t1_ParamLimits

0x3de6,	// (0x000458cd) input_popup_find_pane_t1

0xd496,	// (0x0004ef7d) bg_popup_sub_pane_cp

0x3e14,	// (0x000458fb) listscroll_popup_sub_pane

0x3e1c,	// (0x00045903) list_submenu_pane_ParamLimits

0x3e1c,	// (0x00045903) list_submenu_pane

0x3e2d,	// (0x00045914) scroll_pane_cp4

0x3e35,	// (0x0004591c) list_single_popup_submenu_pane_ParamLimits

0x3e35,	// (0x0004591c) list_single_popup_submenu_pane

0x3e49,	// (0x00045930) list_single_popup_submenu_pane_g1

0x3e51,	// (0x00045938) list_single_popup_submenu_pane_t1_ParamLimits

0x3e51,	// (0x00045938) list_single_popup_submenu_pane_t1

0x369b,	// (0x00045182) bg_active_tab_pane_cp1_ParamLimits

0x369b,	// (0x00045182) bg_active_tab_pane_cp1

0x3e66,	// (0x0004594d) tabs_2_active_pane_g1

0xc2d3,	// (0x0004ddba) tabs_2_active_pane_t1

0x369b,	// (0x00045182) bg_passive_tab_pane_cp1_ParamLimits

0x369b,	// (0x00045182) bg_passive_tab_pane_cp1

0x3e66,	// (0x0004594d) tabs_2_passive_pane_g1

0xc2d3,	// (0x0004ddba) tabs_2_passive_pane_t1

0x3420,	// (0x00044f07) bg_active_tab_pane_cp4

0xc2e5,	// (0x0004ddcc) tabs_2_long_active_pane_t1

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp4

0x1c8d,	// (0x00043774) list_single_midp_graphic_pane_g4_ParamLimits

0x3420,	// (0x00044f07) bg_active_tab_pane_cp5

0xc2f8,	// (0x0004dddf) tabs_3_long_active_pane_t1

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp5

0x1c8d,	// (0x00043774) list_single_midp_graphic_pane_g4

0x3420,	// (0x00044f07) bg_popup_window_pane_cp13_ParamLimits

0x3420,	// (0x00044f07) bg_popup_window_pane_cp13

0x3ec8,	// (0x000459af) listscroll_popup_fast_pane_ParamLimits

0x3ec8,	// (0x000459af) listscroll_popup_fast_pane

0x3ed7,	// (0x000459be) grid_popup_fast_pane_ParamLimits

0x3ed7,	// (0x000459be) grid_popup_fast_pane

0x3ee9,	// (0x000459d0) scroll_pane_cp9_ParamLimits

0x3ee9,	// (0x000459d0) scroll_pane_cp9

0x801b,	// (0x00049b02) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x801b,	// (0x00049b02) list_single_graphic_hl_pane_t1_cp2

0x3f0d,	// (0x000459f4) input_focus_pane_cp20_ParamLimits

0x3f0d,	// (0x000459f4) input_focus_pane_cp20

0x3f1b,	// (0x00045a02) query_popup_data_pane_t1_ParamLimits

0x3f1b,	// (0x00045a02) query_popup_data_pane_t1

0x3f2e,	// (0x00045a15) query_popup_data_pane_t2_ParamLimits

0x3f2e,	// (0x00045a15) query_popup_data_pane_t2

0x3f74,	// (0x00045a5b) query_popup_data_pane_t3_ParamLimits

0x3f74,	// (0x00045a5b) query_popup_data_pane_t3

0x3fb5,	// (0x00045a9c) query_popup_data_pane_t4_ParamLimits

0x3fb5,	// (0x00045a9c) query_popup_data_pane_t4

0x3ff1,	// (0x00045ad8) query_popup_data_pane_t5_ParamLimits

0x3ff1,	// (0x00045ad8) query_popup_data_pane_t5

0x0004,

0xf684,	// (0x0005116b) query_popup_data_pane_t_ParamLimits

0xf684,	// (0x0005116b) query_popup_data_pane_t

0x3d05,	// (0x000457ec) bg_set_opt_pane_g1

0x3d0d,	// (0x000457f4) bg_set_opt_pane_g2

0x3d15,	// (0x000457fc) bg_set_opt_pane_g3

0x3d1d,	// (0x00045804) bg_set_opt_pane_g4

0x3d25,	// (0x0004580c) bg_set_opt_pane_g5

0x3d2d,	// (0x00045814) bg_set_opt_pane_g6

0x3d35,	// (0x0004581c) bg_set_opt_pane_g7

0x3d3d,	// (0x00045824) bg_set_opt_pane_g8

0x3d45,	// (0x0004582c) bg_set_opt_pane_g9

0x0008,

0xf68f,	// (0x00051176) bg_set_opt_pane_g

0x1311,	// (0x00042df8) control_top_pane_stacon_ParamLimits

0x1311,	// (0x00042df8) control_top_pane_stacon

0x1364,	// (0x00042e4b) signal_pane_stacon_ParamLimits

0x1364,	// (0x00042e4b) signal_pane_stacon

0x4608,	// (0x000460ef) stacon_top_pane_g1_ParamLimits

0x4608,	// (0x000460ef) stacon_top_pane_g1

0x1389,	// (0x00042e70) title_pane_stacon_ParamLimits

0x1389,	// (0x00042e70) title_pane_stacon

0x13b3,	// (0x00042e9a) uni_indicator_pane_stacon_ParamLimits

0x13b3,	// (0x00042e9a) uni_indicator_pane_stacon

0x13c8,	// (0x00042eaf) battery_pane_stacon_ParamLimits

0x13c8,	// (0x00042eaf) battery_pane_stacon

0x140c,	// (0x00042ef3) control_bottom_pane_stacon_ParamLimits

0x140c,	// (0x00042ef3) control_bottom_pane_stacon

0x142f,	// (0x00042f16) navi_pane_stacon_ParamLimits

0x142f,	// (0x00042f16) navi_pane_stacon

0x462a,	// (0x00046111) stacon_bottom_pane_g1_ParamLimits

0x462a,	// (0x00046111) stacon_bottom_pane_g1

0x1058,	// (0x00042b3f) aid_levels_signal_lsc_ParamLimits

0x1058,	// (0x00042b3f) aid_levels_signal_lsc

0x106e,	// (0x00042b55) signal_pane_stacon_g1_ParamLimits

0x106e,	// (0x00042b55) signal_pane_stacon_g1

0x1082,	// (0x00042b69) signal_pane_stacon_g2_ParamLimits

0x1082,	// (0x00042b69) signal_pane_stacon_g2

0x0001,

0xf6a2,	// (0x00051189) signal_pane_stacon_g_ParamLimits

0xf6a2,	// (0x00051189) signal_pane_stacon_g

0x10b7,	// (0x00042b9e) title_pane_stacon_t1_ParamLimits

0x10b7,	// (0x00042b9e) title_pane_stacon_t1

0x4035,	// (0x00045b1c) uni_indicator_pane_stacon_g1

0x403f,	// (0x00045b26) uni_indicator_pane_stacon_g2

0x4049,	// (0x00045b30) uni_indicator_pane_stacon_g3

0x4053,	// (0x00045b3a) uni_indicator_pane_stacon_g4

0x0003,

0xf6ae,	// (0x00051195) uni_indicator_pane_stacon_g

0x10dc,	// (0x00042bc3) control_top_pane_stacon_g1

0x10e4,	// (0x00042bcb) control_top_pane_stacon_t1_ParamLimits

0x10e4,	// (0x00042bcb) control_top_pane_stacon_t1

0x111b,	// (0x00042c02) aid_levels_battery_lsc_ParamLimits

0x111b,	// (0x00042c02) aid_levels_battery_lsc

0x1132,	// (0x00042c19) battery_pane_stacon_g1_ParamLimits

0x1132,	// (0x00042c19) battery_pane_stacon_g1

0x1145,	// (0x00042c2c) battery_pane_stacon_g2_ParamLimits

0x1145,	// (0x00042c2c) battery_pane_stacon_g2

0x0001,

0xf6b7,	// (0x0005119e) battery_pane_stacon_g_ParamLimits

0xf6b7,	// (0x0005119e) battery_pane_stacon_g

0x1183,	// (0x00042c6a) navi_icon_pane_stacon

0x1197,	// (0x00042c7e) navi_navi_pane_stacon

0x1183,	// (0x00042c6a) navi_text_pane_stacon

0x10dc,	// (0x00042bc3) control_bottom_pane_stacon_g1

0x11ab,	// (0x00042c92) control_bottom_pane_stacon_t1_ParamLimits

0x11ab,	// (0x00042c92) control_bottom_pane_stacon_t1

0xc30a,	// (0x0004ddf1) grid_app_pane_ParamLimits

0xc30a,	// (0x0004ddf1) grid_app_pane

0xc342,	// (0x0004de29) scroll_pane_cp15_ParamLimits

0xc342,	// (0x0004de29) scroll_pane_cp15

0xc357,	// (0x0004de3e) cell_app_pane_ParamLimits

0xc357,	// (0x0004de3e) cell_app_pane

0xc39c,	// (0x0004de83) cell_app_pane_g1_ParamLimits

0xc39c,	// (0x0004de83) cell_app_pane_g1

0x40f8,	// (0x00045bdf) cell_app_pane_g2_ParamLimits

0x40f8,	// (0x00045bdf) cell_app_pane_g2

0x0001,

0xf6bc,	// (0x000511a3) cell_app_pane_g_ParamLimits

0xf6bc,	// (0x000511a3) cell_app_pane_g

0xc3c0,	// (0x0004dea7) cell_app_pane_t1_ParamLimits

0xc3c0,	// (0x0004dea7) cell_app_pane_t1

0x411b,	// (0x00045c02) grid_highlight_pane_ParamLimits

0x411b,	// (0x00045c02) grid_highlight_pane

0x3d05,	// (0x000457ec) cell_highlight_pane_g1

0x3d0d,	// (0x000457f4) cell_highlight_pane_g2

0x3d15,	// (0x000457fc) cell_highlight_pane_g3

0x3d1d,	// (0x00045804) cell_highlight_pane_g4

0x3d25,	// (0x0004580c) cell_highlight_pane_g5

0x3d2d,	// (0x00045814) cell_highlight_pane_g6

0x3d35,	// (0x0004581c) cell_highlight_pane_g7

0x3d3d,	// (0x00045824) cell_highlight_pane_g8

0x3d45,	// (0x0004582c) cell_highlight_pane_g9

0xd48c,	// (0x0004ef73) cell_highlight_pane_g10

0x0009,

0xf66a,	// (0x00051151) cell_highlight_pane_g

0x412c,	// (0x00045c13) bg_scroll_pane

0x11f5,	// (0x00042cdc) scroll_handle_pane

0x4173,	// (0x00045c5a) scroll_bg_pane_g1

0x4188,	// (0x00045c6f) scroll_bg_pane_g2

0x41a0,	// (0x00045c87) scroll_bg_pane_g3

0x0002,

0xf6c1,	// (0x000511a8) scroll_bg_pane_g

0x41b5,	// (0x00045c9c) scroll_handle_focus_pane_ParamLimits

0x41b5,	// (0x00045c9c) scroll_handle_focus_pane

0x4173,	// (0x00045c5a) scroll_handle_pane_g1

0x41c2,	// (0x00045ca9) scroll_handle_pane_g2

0x41a0,	// (0x00045c87) scroll_handle_pane_g3

0x0002,

0xf6c8,	// (0x000511af) scroll_handle_pane_g

0x3dcc,	// (0x000458b3) bg_popup_sub_pane_cp21_ParamLimits

0x3dcc,	// (0x000458b3) bg_popup_sub_pane_cp21

0x41d6,	// (0x00045cbd) popup_fep_japan_predictive_window_t1_ParamLimits

0x41d6,	// (0x00045cbd) popup_fep_japan_predictive_window_t1

0x41f0,	// (0x00045cd7) popup_fep_japan_predictive_window_t2_ParamLimits

0x41f0,	// (0x00045cd7) popup_fep_japan_predictive_window_t2

0x4223,	// (0x00045d0a) popup_fep_japan_predictive_window_t3_ParamLimits

0x4223,	// (0x00045d0a) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cf,	// (0x000511b6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cf,	// (0x000511b6) popup_fep_japan_predictive_window_t

0xd496,	// (0x0004ef7d) bg_popup_sub_pane_cp23

0x425a,	// (0x00045d41) listscroll_japin_cand_pane

0x4262,	// (0x00045d49) popup_fep_japan_candidate_window_t1

0x4270,	// (0x00045d57) candidate_pane_ParamLimits

0x4270,	// (0x00045d57) candidate_pane

0x4282,	// (0x00045d69) scroll_pane_cp30

0x428a,	// (0x00045d71) list_single_popup_jap_candidate_pane_ParamLimits

0x428a,	// (0x00045d71) list_single_popup_jap_candidate_pane

0xd496,	// (0x0004ef7d) list_highlight_pane_cp30

0x429f,	// (0x00045d86) list_single_popup_jap_candidate_pane_t1

0x42ae,	// (0x00045d95) level_1_signal

0x42c0,	// (0x00045da7) level_2_signal

0x42d3,	// (0x00045dba) level_3_signal

0x42e6,	// (0x00045dcd) level_4_signal

0x42f9,	// (0x00045de0) level_5_signal

0x430c,	// (0x00045df3) level_6_signal

0x431f,	// (0x00045e06) level_7_signal

0x42ae,	// (0x00045d95) level_1_battery

0x42c0,	// (0x00045da7) level_2_battery

0x42d3,	// (0x00045dba) level_3_battery

0x42e6,	// (0x00045dcd) level_4_battery

0x42f9,	// (0x00045de0) level_5_battery

0x430c,	// (0x00045df3) level_6_battery

0x431f,	// (0x00045e06) level_7_battery

0x434a,	// (0x00045e31) list_menu_pane_ParamLimits

0x434a,	// (0x00045e31) list_menu_pane

0x4360,	// (0x00045e47) scroll_pane_cp25_ParamLimits

0x4360,	// (0x00045e47) scroll_pane_cp25

0x4379,	// (0x00045e60) list_double2_graphic_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double2_graphic_pane_cp2

0x4379,	// (0x00045e60) list_double2_large_graphic_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double2_large_graphic_pane_cp2

0x4379,	// (0x00045e60) list_double2_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double2_pane_cp2

0x4379,	// (0x00045e60) list_double_graphic_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double_graphic_pane_cp2

0x4379,	// (0x00045e60) list_double_large_graphic_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double_large_graphic_pane_cp2

0x4379,	// (0x00045e60) list_double_number_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double_number_pane_cp2

0x4379,	// (0x00045e60) list_double_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double_pane_cp2

0xc3d7,	// (0x0004debe) list_single_2graphic_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_2graphic_pane_cp2

0xc3d7,	// (0x0004debe) list_single_graphic_heading_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_graphic_heading_pane_cp2

0xc3d7,	// (0x0004debe) list_single_graphic_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_graphic_pane_cp2

0xc3d7,	// (0x0004debe) list_single_heading_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_heading_pane_cp2

0x43b6,	// (0x00045e9d) list_single_large_graphic_pane_cp2_ParamLimits

0x43b6,	// (0x00045e9d) list_single_large_graphic_pane_cp2

0xc3d7,	// (0x0004debe) list_single_number_heading_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_number_heading_pane_cp2

0xc3d7,	// (0x0004debe) list_single_number_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_number_pane_cp2

0xc3e9,	// (0x0004ded0) list_single_pane_cp2_ParamLimits

0xc3e9,	// (0x0004ded0) list_single_pane_cp2

0x444b,	// (0x00045f32) bg_popup_sub_pane_cp22

0x12a7,	// (0x00042d8e) popup_side_volume_key_window_g1

0x12d1,	// (0x00042db8) popup_side_volume_key_window_t1

0x12ed,	// (0x00042dd4) volume_small_pane_cp1

0x369b,	// (0x00045182) bg_popup_sub_pane_cp24_ParamLimits

0x369b,	// (0x00045182) bg_popup_sub_pane_cp24

0x4461,	// (0x00045f48) fep_china_uni_candidate_pane_ParamLimits

0x4461,	// (0x00045f48) fep_china_uni_candidate_pane

0x4475,	// (0x00045f5c) fep_china_uni_entry_pane

0x4485,	// (0x00045f6c) popup_fep_china_uni_window_g1

0x44a1,	// (0x00045f88) fep_china_uni_entry_pane_g1

0x44a9,	// (0x00045f90) fep_china_uni_entry_pane_g2

0x0001,

0xf700,	// (0x000511e7) fep_china_uni_entry_pane_g

0x44b1,	// (0x00045f98) fep_entry_item_pane

0x44bb,	// (0x00045fa2) fep_candidate_item_pane

0x44c3,	// (0x00045faa) fep_china_uni_candidate_pane_g1

0x44cb,	// (0x00045fb2) fep_china_uni_candidate_pane_g2

0x44d3,	// (0x00045fba) fep_china_uni_candidate_pane_g3

0x44db,	// (0x00045fc2) fep_china_uni_candidate_pane_g4

0x0003,

0xf705,	// (0x000511ec) fep_china_uni_candidate_pane_g

0xd48c,	// (0x0004ef73) fep_entry_item_pane_g1

0x44e3,	// (0x00045fca) fep_entry_item_pane_t1_ParamLimits

0x44e3,	// (0x00045fca) fep_entry_item_pane_t1

0x44f9,	// (0x00045fe0) fep_candidate_item_pane_t1_ParamLimits

0x44f9,	// (0x00045fe0) fep_candidate_item_pane_t1

0x450e,	// (0x00045ff5) fep_candidate_item_pane_t2_ParamLimits

0x450e,	// (0x00045ff5) fep_candidate_item_pane_t2

0x0001,

0xf70e,	// (0x000511f5) fep_candidate_item_pane_t_ParamLimits

0xf70e,	// (0x000511f5) fep_candidate_item_pane_t

0x3420,	// (0x00044f07) list_highlight_pane_cp31_ParamLimits

0x3420,	// (0x00044f07) list_highlight_pane_cp31

0x4520,	// (0x00046007) level_1_signal_lsc

0x4529,	// (0x00046010) level_2_signal_lsc

0x4532,	// (0x00046019) level_3_signal_lsc

0x453b,	// (0x00046022) level_4_signal_lsc

0x4544,	// (0x0004602b) level_5_signal_lsc

0x454d,	// (0x00046034) level_6_signal_lsc

0x4556,	// (0x0004603d) level_7_signal_lsc

0x4556,	// (0x0004603d) level_1_battery_lsc

0x455f,	// (0x00046046) level_2_battery_lsc

0x4568,	// (0x0004604f) level_3_battery_lsc

0x4571,	// (0x00046058) level_4_battery_lsc

0x457a,	// (0x00046061) level_5_battery_lsc

0x4583,	// (0x0004606a) level_6_battery_lsc

0x4520,	// (0x00046007) level_7_battery_lsc

0x458c,	// (0x00046073) scroll_handle_focus_pane_g1

0x4595,	// (0x0004607c) scroll_handle_focus_pane_g2

0x459e,	// (0x00046085) scroll_handle_focus_pane_g3

0x0002,

0xf713,	// (0x000511fa) scroll_handle_focus_pane_g

0x032c,	// (0x00041e13) list_single_2graphic_pane_g1_ParamLimits

0x032c,	// (0x00041e13) list_single_2graphic_pane_g1

0xc268,	// (0x0004dd4f) list_single_2graphic_pane_g2_ParamLimits

0xc268,	// (0x0004dd4f) list_single_2graphic_pane_g2

0x0fc3,	// (0x00042aaa) list_single_2graphic_pane_g3_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_2graphic_pane_g3

0x0338,	// (0x00041e1f) list_single_2graphic_pane_g4_ParamLimits

0x0338,	// (0x00041e1f) list_single_2graphic_pane_g4

0x0003,

0xf71a,	// (0x00051201) list_single_2graphic_pane_g_ParamLimits

0xf71a,	// (0x00051201) list_single_2graphic_pane_g

0x0344,	// (0x00041e2b) list_single_2graphic_pane_t1_ParamLimits

0x0344,	// (0x00041e2b) list_single_2graphic_pane_t1

0xc42e,	// (0x0004df15) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc42e,	// (0x0004df15) list_double2_graphic_large_graphic_pane_g1

0xb857,	// (0x0004d33e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb857,	// (0x0004d33e) list_double2_graphic_large_graphic_pane_g2

0xb7b0,	// (0x0004d297) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb7b0,	// (0x0004d297) list_double2_graphic_large_graphic_pane_g3

0x1c8d,	// (0x00043774) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x1c8d,	// (0x00043774) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf723,	// (0x0005120a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf723,	// (0x0005120a) list_double2_graphic_large_graphic_pane_g

0xbb50,	// (0x0004d637) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb50,	// (0x0004d637) list_double2_graphic_large_graphic_pane_t1

0xbb66,	// (0x0004d64d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb66,	// (0x0004d64d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72c,	// (0x00051213) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72c,	// (0x00051213) list_double2_graphic_large_graphic_pane_t

0x46f5,	// (0x000461dc) popup_fast_swap_window_ParamLimits

0x46f5,	// (0x000461dc) popup_fast_swap_window

0x4711,	// (0x000461f8) popup_side_volume_key_window

0x472d,	// (0x00046214) stacon_top_pane

0x4737,	// (0x0004621e) status_pane_ParamLimits

0x4737,	// (0x0004621e) status_pane

0xd482,	// (0x0004ef69) status_small_pane

0xd496,	// (0x0004ef7d) control_pane

0xd496,	// (0x0004ef7d) stacon_bottom_pane

0x3c9c,	// (0x00045783) scroll_pane_cp121

0x3c93,	// (0x0004577a) set_content_pane

0x45a7,	// (0x0004608e) bg_active_tab_pane_g1_cp1

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp1

0x45b9,	// (0x000460a0) bg_active_tab_pane_g3_cp1

0x45a7,	// (0x0004608e) bg_passive_tab_pane_g1_cp1

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp1

0x45b9,	// (0x000460a0) bg_passive_tab_pane_g3_cp1

0x45c2,	// (0x000460a9) bg_active_tab_pane_g1_cp2

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp2

0x45cb,	// (0x000460b2) bg_active_tab_pane_g3_cp2

0x45c2,	// (0x000460a9) bg_passive_tab_pane_g1_cp2

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp2

0x45cb,	// (0x000460b2) bg_passive_tab_pane_g3_cp2

0x45e0,	// (0x000460c7) bg_active_tab_pane_g1_cp3

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp3

0x45e9,	// (0x000460d0) bg_active_tab_pane_g3_cp3

0x45e0,	// (0x000460c7) bg_passive_tab_pane_g1_cp3

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp3

0x45e9,	// (0x000460d0) bg_passive_tab_pane_g3_cp3

0x45f2,	// (0x000460d9) bg_active_tab_pane_g1_cp4

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp4

0x45fd,	// (0x000460e4) bg_active_tab_pane_g3_cp4

0x45f2,	// (0x000460d9) bg_passive_tab_pane_g1_cp4

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp4

0x45fd,	// (0x000460e4) bg_passive_tab_pane_g3_cp4

0x4646,	// (0x0004612d) bg_active_tab_pane_g1_cp5

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp5

0x464f,	// (0x00046136) bg_active_tab_pane_g3_cp5

0x4646,	// (0x0004612d) bg_passive_tab_pane_g1_cp5

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp5

0x464f,	// (0x00046136) bg_passive_tab_pane_g3_cp5

0x6cf7,	// (0x000487de) list_set_graphic_pane_ParamLimits

0x6cf7,	// (0x000487de) list_set_graphic_pane

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp4

0x4678,	// (0x0004615f) list_set_graphic_pane_g1_ParamLimits

0x4678,	// (0x0004615f) list_set_graphic_pane_g1

0x4684,	// (0x0004616b) list_set_graphic_pane_g2_ParamLimits

0x4684,	// (0x0004616b) list_set_graphic_pane_g2

0x0001,

0xf731,	// (0x00051218) list_set_graphic_pane_g_ParamLimits

0xf731,	// (0x00051218) list_set_graphic_pane_g

0x0009,

0xfaa6,	// (0x0005158d) volume_small_pane_cp_g

0x46a8,	// (0x0004618f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x46a8,	// (0x0004618f) list_double2_large_graphic_pane_g1_cp2

0x46b4,	// (0x0004619b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x46b4,	// (0x0004619b) list_double2_large_graphic_pane_g2_cp2

0x46c5,	// (0x000461ac) list_double2_large_graphic_pane_g3_cp2

0x46cd,	// (0x000461b4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x46cd,	// (0x000461b4) list_double2_large_graphic_pane_t1_cp2

0x46e3,	// (0x000461ca) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x46e3,	// (0x000461ca) list_double2_large_graphic_pane_t2_cp2

0x62b9,	// (0x00047da0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x62b9,	// (0x00047da0) list_double_large_graphic_pane_g1_cp2

0x62ca,	// (0x00047db1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x62ca,	// (0x00047db1) list_double_large_graphic_pane_g2_cp2

0x4853,	// (0x0004633a) list_double_large_graphic_pane_g3_cp2

0x62db,	// (0x00047dc2) list_double_large_graphic_pane_g4_cp

0x62e3,	// (0x00047dca) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x62e3,	// (0x00047dca) list_double_large_graphic_pane_t1_cp2

0x62fa,	// (0x00047de1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x62fa,	// (0x00047de1) list_double_large_graphic_pane_t2_cp2

0x4745,	// (0x0004622c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4745,	// (0x0004622c) list_double2_graphic_pane_g1_cp2

0x4753,	// (0x0004623a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4753,	// (0x0004623a) list_double2_graphic_pane_g2_cp2

0x4764,	// (0x0004624b) list_double2_graphic_pane_g3_cp2

0x476e,	// (0x00046255) list_double2_graphic_pane_t1_cp2_ParamLimits

0x476e,	// (0x00046255) list_double2_graphic_pane_t1_cp2

0x4784,	// (0x0004626b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4784,	// (0x0004626b) list_double2_graphic_pane_t2_cp2

0x4796,	// (0x0004627d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4796,	// (0x0004627d) list_single_number_heading_pane_g1_cp2

0x47a2,	// (0x00046289) list_single_number_heading_pane_g2_cp2

0x47aa,	// (0x00046291) list_single_number_heading_pane_t1_cp2_ParamLimits

0x47aa,	// (0x00046291) list_single_number_heading_pane_t1_cp2

0x47c0,	// (0x000462a7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x47c0,	// (0x000462a7) list_single_number_heading_pane_t2_cp2

0x47d2,	// (0x000462b9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47d2,	// (0x000462b9) list_single_number_heading_pane_t3_cp2

0x4796,	// (0x0004627d) list_single_heading_pane_g1_cp2_ParamLimits

0x4796,	// (0x0004627d) list_single_heading_pane_g1_cp2

0x47a2,	// (0x00046289) list_single_heading_pane_g2_cp2

0x47aa,	// (0x00046291) list_single_heading_pane_t1_cp2_ParamLimits

0x47aa,	// (0x00046291) list_single_heading_pane_t1_cp2

0x60c1,	// (0x00047ba8) list_single_heading_pane_t2_cp2_ParamLimits

0x60c1,	// (0x00047ba8) list_single_heading_pane_t2_cp2

0x6009,	// (0x00047af0) list_double_graphic_pane_g1_cp2_ParamLimits

0x6009,	// (0x00047af0) list_double_graphic_pane_g1_cp2

0x6015,	// (0x00047afc) list_double_graphic_pane_g2_cp2_ParamLimits

0x6015,	// (0x00047afc) list_double_graphic_pane_g2_cp2

0x6024,	// (0x00047b0b) list_double_graphic_pane_g3_cp2

0x602c,	// (0x00047b13) list_double_graphic_pane_t1_cp2_ParamLimits

0x602c,	// (0x00047b13) list_double_graphic_pane_t1_cp2

0x6042,	// (0x00047b29) list_double_graphic_pane_t2_cp2_ParamLimits

0x6042,	// (0x00047b29) list_double_graphic_pane_t2_cp2

0x4847,	// (0x0004632e) list_double_number_pane_g1_cp2_ParamLimits

0x4847,	// (0x0004632e) list_double_number_pane_g1_cp2

0x4853,	// (0x0004633a) list_double_number_pane_g2_cp2

0x5fcd,	// (0x00047ab4) list_double_number_pane_t1_cp2_ParamLimits

0x5fcd,	// (0x00047ab4) list_double_number_pane_t1_cp2

0x5fe1,	// (0x00047ac8) list_double_number_pane_t2_cp2_ParamLimits

0x5fe1,	// (0x00047ac8) list_double_number_pane_t2_cp2

0x5ff7,	// (0x00047ade) list_double_number_pane_t3_cp2_ParamLimits

0x5ff7,	// (0x00047ade) list_double_number_pane_t3_cp2

0x5eb6,	// (0x0004799d) list_single_graphic_pane_g1_cp2_ParamLimits

0x5eb6,	// (0x0004799d) list_single_graphic_pane_g1_cp2

0x48b8,	// (0x0004639f) list_single_graphic_pane_g2_cp2_ParamLimits

0x48b8,	// (0x0004639f) list_single_graphic_pane_g2_cp2

0x48c4,	// (0x000463ab) list_single_graphic_pane_g3_cp2

0x5e8c,	// (0x00047973) list_single_graphic_pane_t1_cp2_ParamLimits

0x5e8c,	// (0x00047973) list_single_graphic_pane_t1_cp2

0x48b8,	// (0x0004639f) list_single_number_pane_g1_cp2_ParamLimits

0x48b8,	// (0x0004639f) list_single_number_pane_g1_cp2

0x48c4,	// (0x000463ab) list_single_number_pane_g2_cp2

0x5e8c,	// (0x00047973) list_single_number_pane_t1_cp2_ParamLimits

0x5e8c,	// (0x00047973) list_single_number_pane_t1_cp2

0x5ea2,	// (0x00047989) list_single_number_pane_t2_cp2_ParamLimits

0x5ea2,	// (0x00047989) list_single_number_pane_t2_cp2

0x46b4,	// (0x0004619b) list_double2_pane_g1_cp2_ParamLimits

0x46b4,	// (0x0004619b) list_double2_pane_g1_cp2

0x46c5,	// (0x000461ac) list_double2_pane_g2_cp2

0x481f,	// (0x00046306) list_double2_pane_t1_cp2_ParamLimits

0x481f,	// (0x00046306) list_double2_pane_t1_cp2

0x4835,	// (0x0004631c) list_double2_pane_t2_cp2_ParamLimits

0x4835,	// (0x0004631c) list_double2_pane_t2_cp2

0x4847,	// (0x0004632e) list_double_pane_g1_cp2_ParamLimits

0x4847,	// (0x0004632e) list_double_pane_g1_cp2

0x4853,	// (0x0004633a) list_double_pane_g2_cp2

0x485b,	// (0x00046342) list_double_pane_t1_cp2_ParamLimits

0x485b,	// (0x00046342) list_double_pane_t1_cp2

0x4871,	// (0x00046358) list_double_pane_t2_cp2_ParamLimits

0x4871,	// (0x00046358) list_double_pane_t2_cp2

0x48a8,	// (0x0004638f) list_single_pane_cp2_g3

0x48b8,	// (0x0004639f) list_single_pane_g1_cp2_ParamLimits

0x48b8,	// (0x0004639f) list_single_pane_g1_cp2

0x48c4,	// (0x000463ab) list_single_pane_g2_cp2

0x48cc,	// (0x000463b3) list_single_pane_t1_cp2_ParamLimits

0x48cc,	// (0x000463b3) list_single_pane_t1_cp2

0x48e4,	// (0x000463cb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x48e4,	// (0x000463cb) list_single_large_graphic_pane_g1_cp2

0x45d4,	// (0x000460bb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x45d4,	// (0x000460bb) list_single_large_graphic_pane_g2_cp2

0x48f0,	// (0x000463d7) list_single_large_graphic_pane_g3_cp2

0x48f8,	// (0x000463df) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x48f8,	// (0x000463df) list_single_large_graphic_pane_g4_cp1

0x4912,	// (0x000463f9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4912,	// (0x000463f9) list_single_large_graphic_pane_t1_cp2

0x5e58,	// (0x0004793f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e58,	// (0x0004793f) list_single_graphic_heading_pane_g1_cp2

0x5e25,	// (0x0004790c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5e25,	// (0x0004790c) list_single_graphic_heading_pane_g4_cp2

0x48c4,	// (0x000463ab) list_single_graphic_heading_pane_g5_cp2

0x5e64,	// (0x0004794b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e64,	// (0x0004794b) list_single_graphic_heading_pane_t1_cp2

0x5e7a,	// (0x00047961) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e7a,	// (0x00047961) list_single_graphic_heading_pane_t2_cp2

0x5e19,	// (0x00047900) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5e19,	// (0x00047900) list_single_2graphic_pane_g1_cp2

0x5e25,	// (0x0004790c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5e25,	// (0x0004790c) list_single_2graphic_pane_g2_cp2

0x48c4,	// (0x000463ab) list_single_2graphic_pane_g3_cp2

0x5e36,	// (0x0004791d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5e36,	// (0x0004791d) list_single_2graphic_pane_g4_cp2

0x5e42,	// (0x00047929) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e42,	// (0x00047929) list_single_2graphic_pane_t1_cp2

0xd48c,	// (0x0004ef73) list_highlight_pane_g10_cp1

0x59f1,	// (0x000474d8) list_highlight_pane_g1_cp1

0x59f9,	// (0x000474e0) list_highlight_pane_g2_cp1

0x5a01,	// (0x000474e8) list_highlight_pane_g3_cp1

0x5a09,	// (0x000474f0) list_highlight_pane_g4_cp1

0x5a11,	// (0x000474f8) list_highlight_pane_g5_cp1

0x5a19,	// (0x00047500) list_highlight_pane_g6_cp1

0x5a21,	// (0x00047508) list_highlight_pane_g7_cp1

0x5a29,	// (0x00047510) list_highlight_pane_g8_cp1

0x5a31,	// (0x00047518) list_highlight_pane_g9_cp1

0xdaa4,	// (0x0004f58b) form_field_slider_pane_t3

0xdab2,	// (0x0004f599) form_field_slider_pane_t4

0x592d,	// (0x00047414) slider_form_pane_ParamLimits

0x592d,	// (0x00047414) slider_form_pane

0xd496,	// (0x0004ef7d) control_abbreviations

0xd496,	// (0x0004ef7d) control_conventions

0xd496,	// (0x0004ef7d) control_definitions

0xd496,	// (0x0004ef7d) format_table_attribute

0x610b,	// (0x00047bf2) bg_popup_preview_window_pane_g9

0xd496,	// (0x0004ef7d) format_table_data2

0xd496,	// (0x0004ef7d) format_table_data3

0xd496,	// (0x0004ef7d) format_table_data_example

0x0008,

0xd496,	// (0x0004ef7d) intro_purpose

0xf8c8,	// (0x000513af) bg_popup_preview_window_pane_g

0xd496,	// (0x0004ef7d) texts_category

0xd496,	// (0x0004ef7d) texts_graphics

0x4928,	// (0x0004640f) text_digital

0x4937,	// (0x0004641e) text_primary

0x4946,	// (0x0004642d) text_primary_small

0x4955,	// (0x0004643c) text_secondary

0x4964,	// (0x0004644b) text_title

0x681c,	// (0x00048303) bg_passive_tab_pane_g1_cp3_srt

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp3_srt

0x6825,	// (0x0004830c) bg_passive_tab_pane_g3_cp3_srt

0x369b,	// (0x00045182) bg_active_tab_pane_cp3_srt_ParamLimits

0x369b,	// (0x00045182) bg_active_tab_pane_cp3_srt

0x682e,	// (0x00048315) tabs_4_active_pane_srt_g1

0xdde4,	// (0x0004f8cb) tabs_4_active_pane_srt_t1_ParamLimits

0xdde4,	// (0x0004f8cb) tabs_4_active_pane_srt_t1

0x681c,	// (0x00048303) bg_active_tab_pane_g1_cp3_copy1

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp3_copy1

0x6825,	// (0x0004830c) bg_active_tab_pane_g3_cp3_copy1

0x3420,	// (0x00044f07) tabs_2_long_active_pane_srt_ParamLimits

0x3420,	// (0x00044f07) tabs_2_long_active_pane_srt

0x3420,	// (0x00044f07) tabs_2_long_passive_pane_srt_ParamLimits

0x3420,	// (0x00044f07) tabs_2_long_passive_pane_srt

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp4_srt

0x6529,	// (0x00048010) bg_passive_tab_pane_g1_cp4_srt

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp4_srt

0x6532,	// (0x00048019) bg_passive_tab_pane_g3_cp4_srt

0x3420,	// (0x00044f07) bg_active_tab_pane_cp4_srt_ParamLimits

0x3420,	// (0x00044f07) bg_active_tab_pane_cp4_srt

0xdc0f,	// (0x0004f6f6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc0f,	// (0x0004f6f6) tabs_2_long_active_pane_srt_t1

0x6529,	// (0x00048010) bg_active_tab_pane_g1_cp4_srt

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp4_srt

0x6532,	// (0x00048019) bg_active_tab_pane_g3_cp4_srt

0x369b,	// (0x00045182) tabs_3_long_active_pane_srt_ParamLimits

0x369b,	// (0x00045182) tabs_3_long_active_pane_srt

0x369b,	// (0x00045182) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x369b,	// (0x00045182) tabs_3_long_passive_pane_cp_srt

0x369b,	// (0x00045182) tabs_3_long_passive_pane_srt_ParamLimits

0x369b,	// (0x00045182) tabs_3_long_passive_pane_srt

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp5_srt

0x4646,	// (0x0004612d) bg_passive_tab_pane_g1_cp5_srt

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp5_srt

0x464f,	// (0x00046136) bg_passive_tab_pane_g3_cp5_srt

0x3420,	// (0x00044f07) bg_active_tab_pane_cp5_srt_ParamLimits

0x3420,	// (0x00044f07) bg_active_tab_pane_cp5_srt

0xdbf9,	// (0x0004f6e0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbf9,	// (0x0004f6e0) tabs_3_long_active_pane_srt_t1

0x4646,	// (0x0004612d) bg_active_tab_pane_g1_cp5_srt

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp5_srt

0x464f,	// (0x00046136) bg_active_tab_pane_g3_cp5_srt

0x6509,	// (0x00047ff0) navi_text_pane_srt_t1

0x6501,	// (0x00047fe8) navi_icon_pane_srt_g1

0x4b39,	// (0x00046620) midp_editing_number_pane_srt

0x4973,	// (0x0004645a) midp_ticker_pane_srt

0x4b41,	// (0x00046628) midp_ticker_pane_srt_g1

0x4b49,	// (0x00046630) midp_ticker_pane_srt_g2

0x0001,

0xf750,	// (0x00051237) midp_ticker_pane_srt_g

0x4b51,	// (0x00046638) midp_ticker_pane_srt_t1

0x64f2,	// (0x00047fd9) midp_editing_number_pane_t1_copy1

0xd4e8,	// (0x0004efcf) listscroll_midp_pane

0xd4e8,	// (0x0004efcf) midp_form_pane

0x49eb,	// (0x000464d2) midp_info_popup_window_ParamLimits

0x49eb,	// (0x000464d2) midp_info_popup_window

0x3dcc,	// (0x000458b3) bg_popup_sub_pane_cp50_ParamLimits

0x3dcc,	// (0x000458b3) bg_popup_sub_pane_cp50

0x5615,	// (0x000470fc) listscroll_midp_info_pane_ParamLimits

0x5615,	// (0x000470fc) listscroll_midp_info_pane

0x55f5,	// (0x000470dc) listscroll_form_midp_pane_ParamLimits

0x55f5,	// (0x000470dc) listscroll_form_midp_pane

0x5601,	// (0x000470e8) scroll_bar_cp050

0x55f5,	// (0x000470dc) list_midp_pane

0x72a6,	// (0x00048d8d) signal_pane_g2_cp

0x550f,	// (0x00046ff6) listscroll_midp_info_pane_t1_ParamLimits

0x550f,	// (0x00046ff6) listscroll_midp_info_pane_t1

0x5527,	// (0x0004700e) listscroll_midp_info_pane_t2_ParamLimits

0x5527,	// (0x0004700e) listscroll_midp_info_pane_t2

0x5565,	// (0x0004704c) listscroll_midp_info_pane_t3_ParamLimits

0x5565,	// (0x0004704c) listscroll_midp_info_pane_t3

0x559f,	// (0x00047086) listscroll_midp_info_pane_t4_ParamLimits

0x559f,	// (0x00047086) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x000512ea) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x000512ea) listscroll_midp_info_pane_t

0x3e2d,	// (0x00045914) scroll_pane_cp21

0x54ad,	// (0x00046f94) form_midp_field_choice_group_pane

0x54b6,	// (0x00046f9d) form_midp_field_text_pane

0x54f5,	// (0x00046fdc) form_midp_field_time_pane

0x54fd,	// (0x00046fe4) form_midp_gauge_slider_pane

0x5506,	// (0x00046fed) form_midp_gauge_wait_pane

0xd496,	// (0x0004ef7d) form_midp_image_pane

0xbb78,	// (0x0004d65f) list_single_midp_pane_ParamLimits

0xbb78,	// (0x0004d65f) list_single_midp_pane

0xda83,	// (0x0004f56a) form_midp_field_text_pane_t1

0x5235,	// (0x00046d1c) input_focus_pane_cp050

0x549c,	// (0x00046f83) list_midp_form_text_pane

0x5434,	// (0x00046f1b) form_midp_field_choice_group_pane_t1

0x5442,	// (0x00046f29) input_focus_pane_cp051

0x5456,	// (0x00046f3d) list_midp_choice_pane

0xd496,	// (0x0004ef7d) status_idle_pane

0x5418,	// (0x00046eff) form_midp_field_time_pane_t1

0xd48c,	// (0x0004ef73) wait_anim_pane_g2_copy1

0x5426,	// (0x00046f0d) form_midp_field_time_pane_t2

0x0001,

0x4a99,	// (0x00046580) aid_navinavi_width_2_pane

0xf7fe,	// (0x000512e5) form_midp_field_time_pane_t

0xd496,	// (0x0004ef7d) input_focus_pane_cp052

0xd496,	// (0x0004ef7d) bg_input_focus_pane_cp040

0x53d8,	// (0x00046ebf) form_midp_gauge_slider_pane_t1

0x53e6,	// (0x00046ecd) form_midp_gauge_slider_pane_t2

0xda67,	// (0x0004f54e) form_midp_gauge_slider_pane_t3

0xda75,	// (0x0004f55c) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x000512dc) form_midp_gauge_slider_pane_t

0x5410,	// (0x00046ef7) form_midp_slider_pane

0x3420,	// (0x00044f07) bg_input_focus_pane_cp041_ParamLimits

0x3420,	// (0x00044f07) bg_input_focus_pane_cp041

0x53a5,	// (0x00046e8c) form_midp_gauge_wait_pane_t1_ParamLimits

0x53a5,	// (0x00046e8c) form_midp_gauge_wait_pane_t1

0x53b7,	// (0x00046e9e) form_midp_gauge_wait_pane_t2_ParamLimits

0x53b7,	// (0x00046e9e) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x000512d7) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x000512d7) form_midp_gauge_wait_pane_t

0x53c9,	// (0x00046eb0) form_midp_wait_pane_ParamLimits

0x53c9,	// (0x00046eb0) form_midp_wait_pane

0x536f,	// (0x00046e56) form_midp_image_pane_g1

0x5378,	// (0x00046e5f) form_midp_image_pane_t1

0x5387,	// (0x00046e6e) form_midp_image_pane_t2

0x5396,	// (0x00046e7d) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x000512d0) form_midp_image_pane_t

0x5366,	// (0x00046e4d) list_single_midp_pane_g1

0x04c4,	// (0x00041fab) list_single_midp_pane_t1

0xda53,	// (0x0004f53a) list_midp_form_item_pane_ParamLimits

0xda53,	// (0x0004f53a) list_midp_form_item_pane

0x4a41,	// (0x00046528) list_midp_form_item_pane_t1

0x4a50,	// (0x00046537) midp_ticker_pane_g1

0x4a5c,	// (0x00046543) midp_ticker_pane_g2

0x0001,

0xf736,	// (0x0005121d) midp_ticker_pane_g

0x4a68,	// (0x0004654f) midp_ticker_pane_t1

0x6743,	// (0x0004822a) midp_editing_number_pane_t1

0x6721,	// (0x00048208) midp_editing_number_pane

0x6730,	// (0x00048217) midp_ticker_pane

0x5621,	// (0x00047108) ai_message_heading_pane

0xd496,	// (0x0004ef7d) bg_popup_window_pane_cp14

0x5629,	// (0x00047110) listscroll_ai_message_pane

0x647c,	// (0x00047f63) ai_message_heading_pane_g1_ParamLimits

0x647c,	// (0x00047f63) ai_message_heading_pane_g1

0x6488,	// (0x00047f6f) ai_message_heading_pane_g2_ParamLimits

0x6488,	// (0x00047f6f) ai_message_heading_pane_g2

0x6494,	// (0x00047f7b) ai_message_heading_pane_g3_ParamLimits

0x6494,	// (0x00047f7b) ai_message_heading_pane_g3

0x64a0,	// (0x00047f87) ai_message_heading_pane_g4_ParamLimits

0x64a0,	// (0x00047f87) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x00051411) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x00051411) ai_message_heading_pane_g

0x64ac,	// (0x00047f93) ai_message_heading_pane_t1_ParamLimits

0x64ac,	// (0x00047f93) ai_message_heading_pane_t1

0x64c6,	// (0x00047fad) ai_message_heading_pane_t2_ParamLimits

0x64c6,	// (0x00047fad) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0005141a) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0005141a) ai_message_heading_pane_t

0x64d8,	// (0x00047fbf) bg_popup_heading_pane_cp1_ParamLimits

0x64d8,	// (0x00047fbf) bg_popup_heading_pane_cp1

0x646a,	// (0x00047f51) list_ai_message_pane_ParamLimits

0x646a,	// (0x00047f51) list_ai_message_pane

0x3e2d,	// (0x00045914) scroll_pane_cp10

0x6406,	// (0x00047eed) list_ai_message_pane_g1

0x640e,	// (0x00047ef5) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x000513ee) list_ai_message_pane_g

0x6416,	// (0x00047efd) list_ai_message_pane_t1_ParamLimits

0x6416,	// (0x00047efd) list_ai_message_pane_t1

0x642b,	// (0x00047f12) list_ai_message_pane_t2_ParamLimits

0x642b,	// (0x00047f12) list_ai_message_pane_t2

0x6440,	// (0x00047f27) list_ai_message_pane_t3_ParamLimits

0x6440,	// (0x00047f27) list_ai_message_pane_t3

0x6455,	// (0x00047f3c) list_ai_message_pane_t4_ParamLimits

0x6455,	// (0x00047f3c) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x000513f3) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x000513f3) list_ai_message_pane_t

0xdbd8,	// (0x0004f6bf) cell_ai_soft_ind_pane_ParamLimits

0xdbd8,	// (0x0004f6bf) cell_ai_soft_ind_pane

0x4a7a,	// (0x00046561) cell_ai_soft_ind_pane_g1_ParamLimits

0x4a7a,	// (0x00046561) cell_ai_soft_ind_pane_g1

0xd496,	// (0x0004ef7d) grid_highlight_cp1

0x4a87,	// (0x0004656e) text_secondary_cp56_ParamLimits

0x4a87,	// (0x0004656e) text_secondary_cp56

0x63c6,	// (0x00047ead) example_general_pane_ParamLimits

0x63c6,	// (0x00047ead) example_general_pane

0x63d2,	// (0x00047eb9) example_parent_pane_g1_ParamLimits

0x63d2,	// (0x00047eb9) example_parent_pane_g1

0x63de,	// (0x00047ec5) example_parent_pane_t1_ParamLimits

0x63de,	// (0x00047ec5) example_parent_pane_t1

0xc989,	// (0x0004e470) popup_preview_text_window_ParamLimits

0xc989,	// (0x0004e470) popup_preview_text_window

0x48b0,	// (0x00046397) list_single_pane_cp2_g4

0x3777,	// (0x0004525e) bg_popup_preview_window_pane_ParamLimits

0x3777,	// (0x0004525e) bg_popup_preview_window_pane

0x6113,	// (0x00047bfa) popup_preview_text_window_t1_ParamLimits

0x6113,	// (0x00047bfa) popup_preview_text_window_t1

0x6131,	// (0x00047c18) popup_preview_text_window_t2_ParamLimits

0x6131,	// (0x00047c18) popup_preview_text_window_t2

0x617a,	// (0x00047c61) popup_preview_text_window_t3_ParamLimits

0x617a,	// (0x00047c61) popup_preview_text_window_t3

0x61bf,	// (0x00047ca6) popup_preview_text_window_t4_ParamLimits

0x61bf,	// (0x00047ca6) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x000513c2) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x000513c2) popup_preview_text_window_t

0x623d,	// (0x00047d24) scroll_pane_cp11

0x51c1,	// (0x00046ca8) bg_popup_preview_window_pane_g1

0x60d3,	// (0x00047bba) bg_popup_preview_window_pane_g2

0x60db,	// (0x00047bc2) bg_popup_preview_window_pane_g3

0x60e3,	// (0x00047bca) bg_popup_preview_window_pane_g4

0x60eb,	// (0x00047bd2) bg_popup_preview_window_pane_g5

0x60f3,	// (0x00047bda) bg_popup_preview_window_pane_g6

0x60fb,	// (0x00047be2) bg_popup_preview_window_pane_g7

0x6103,	// (0x00047bea) bg_popup_preview_window_pane_g8

0x0b49,	// (0x00042630) aid_popup_width_pane

0xc905,	// (0x0004e3ec) popup_midp_note_alarm_window_ParamLimits

0xc905,	// (0x0004e3ec) popup_midp_note_alarm_window

0x3cad,	// (0x00045794) data_form_pane_ParamLimits

0xba81,	// (0x0004d568) form_field_data_pane_g1

0xba8b,	// (0x0004d572) form_field_data_pane_t1_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_ParamLimits

0x0197,	// (0x00041c7e) data_form_wide_pane_ParamLimits

0x01a8,	// (0x00041c8f) form_field_data_wide_pane_g1

0x01b4,	// (0x00041c9b) form_field_data_wide_pane_t1_ParamLimits

0x3a1e,	// (0x00045505) input_focus_pane_cp6_ParamLimits

0xc2c5,	// (0x0004ddac) input_popup_find_pane_g1_ParamLimits

0xc2c5,	// (0x0004ddac) input_popup_find_pane_g1

0x1156,	// (0x00042c3d) aid_navi_side_left_pane

0x116b,	// (0x00042c52) aid_navi_side_right_pane

0x5aec,	// (0x000475d3) bg_popup_window_pane_cp30_ParamLimits

0x5aec,	// (0x000475d3) bg_popup_window_pane_cp30

0x5b66,	// (0x0004764d) popup_midp_note_alarm_window_g1_ParamLimits

0x5b66,	// (0x0004764d) popup_midp_note_alarm_window_g1

0x5b96,	// (0x0004767d) popup_midp_note_alarm_window_t1_ParamLimits

0x5b96,	// (0x0004767d) popup_midp_note_alarm_window_t1

0x5c37,	// (0x0004771e) popup_midp_note_alarm_window_t2_ParamLimits

0x5c37,	// (0x0004771e) popup_midp_note_alarm_window_t2

0x5ce5,	// (0x000477cc) popup_midp_note_alarm_window_t3_ParamLimits

0x5ce5,	// (0x000477cc) popup_midp_note_alarm_window_t3

0x5d17,	// (0x000477fe) popup_midp_note_alarm_window_t4_ParamLimits

0x5d17,	// (0x000477fe) popup_midp_note_alarm_window_t4

0x5d3d,	// (0x00047824) popup_midp_note_alarm_window_t5_ParamLimits

0x5d3d,	// (0x00047824) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0005135f) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0005135f) popup_midp_note_alarm_window_t

0x5de9,	// (0x000478d0) wait_bar_pane_cp1_ParamLimits

0x5de9,	// (0x000478d0) wait_bar_pane_cp1

0xd496,	// (0x0004ef7d) wait_anim_pane_copy1

0xd496,	// (0x0004ef7d) wait_border_pane_copy1

0x57d2,	// (0x000472b9) wait_border_pane_g1_copy1

0x01ce,	// (0x00041cb5) form_field_popup_pane_g1

0xbaa5,	// (0x0004d58c) form_field_popup_pane_t1_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_cp7_ParamLimits

0x3cdb,	// (0x000457c2) list_form_pane_ParamLimits

0x01ee,	// (0x00041cd5) form_field_popup_wide_pane_g1

0x01f6,	// (0x00041cdd) form_field_popup_wide_pane_t1_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_cp8_ParamLimits

0x3ce7,	// (0x000457ce) list_form_wide_pane_ParamLimits

0x68c1,	// (0x000483a8) aid_size_cell_graphic_pane

0xbb24,	// (0x0004d60b) data_form_pane_t1_ParamLimits

0xbb8d,	// (0x0004d674) data_form_wide_pane_t1_ParamLimits

0xd6da,	// (0x0004f1c1) bg_status_flat_pane

0xbf0e,	// (0x0004d9f5) title_pane_t1_ParamLimits

0x33e8,	// (0x00044ecf) title_pane_t2_ParamLimits

0x340e,	// (0x00044ef5) title_pane_t3_ParamLimits

0xf530,	// (0x00051017) title_pane_t_ParamLimits

0x42ae,	// (0x00045d95) level_1_signal_ParamLimits

0x42c0,	// (0x00045da7) level_2_signal_ParamLimits

0x42d3,	// (0x00045dba) level_3_signal_ParamLimits

0x42e6,	// (0x00045dcd) level_4_signal_ParamLimits

0x42f9,	// (0x00045de0) level_5_signal_ParamLimits

0x430c,	// (0x00045df3) level_6_signal_ParamLimits

0x431f,	// (0x00045e06) level_7_signal_ParamLimits

0x42ae,	// (0x00045d95) level_1_battery_ParamLimits

0x42c0,	// (0x00045da7) level_2_battery_ParamLimits

0x42d3,	// (0x00045dba) level_3_battery_ParamLimits

0x42e6,	// (0x00045dcd) level_4_battery_ParamLimits

0x42f9,	// (0x00045de0) level_5_battery_ParamLimits

0x430c,	// (0x00045df3) level_6_battery_ParamLimits

0x431f,	// (0x00045e06) level_7_battery_ParamLimits

0x59f1,	// (0x000474d8) bg_status_flat_pane_g1

0x59f9,	// (0x000474e0) bg_status_flat_pane_g2

0x5a01,	// (0x000474e8) bg_status_flat_pane_g3

0x5a09,	// (0x000474f0) bg_status_flat_pane_g4

0x5a11,	// (0x000474f8) bg_status_flat_pane_g5

0x5a19,	// (0x00047500) bg_status_flat_pane_g6

0x5a21,	// (0x00047508) bg_status_flat_pane_g7

0xbf9a,	// (0x0004da81) tabs_3_active_pane_t1_ParamLimits

0xbf9a,	// (0x0004da81) tabs_3_passive_pane_t1_ParamLimits

0xbfac,	// (0x0004da93) tabs_4_active_pane_t1_ParamLimits

0xbfac,	// (0x0004da93) tabs_4_1_passive_pane_t1_ParamLimits

0xc2d3,	// (0x0004ddba) tabs_2_active_pane_t1_ParamLimits

0xc2d3,	// (0x0004ddba) tabs_2_passive_pane_t1_ParamLimits

0x3420,	// (0x00044f07) bg_active_tab_pane_cp4_ParamLimits

0xc2e5,	// (0x0004ddcc) tabs_2_long_active_pane_t1_ParamLimits

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp4_ParamLimits

0x1cb5,	// (0x0004379c) list_single_midp_graphic_pane_t1_ParamLimits

0x3420,	// (0x00044f07) bg_active_tab_pane_cp5_ParamLimits

0xc2f8,	// (0x0004dddf) tabs_3_long_active_pane_t1_ParamLimits

0x4c97,	// (0x0004677e) bg_passive_tab_pane_cp5_ParamLimits

0x1cb5,	// (0x0004379c) list_single_midp_graphic_pane_t1

0xd6da,	// (0x0004f1c1) bg_status_flat_pane_ParamLimits

0x4e51,	// (0x00046938) indicator_pane_cp2_ParamLimits

0x4e51,	// (0x00046938) indicator_pane_cp2

0xd858,	// (0x0004f33f) navi_pane_srt_ParamLimits

0xd858,	// (0x0004f33f) navi_pane_srt

0x4fa0,	// (0x00046a87) popup_clock_digital_analogue_window_cp1

0x34fd,	// (0x00044fe4) indicator_pane_t1

0x4973,	// (0x0004645a) copy_highlight_pane

0x4973,	// (0x0004645a) cursor_graphics_pane

0x4973,	// (0x0004645a) graphic_within_text_pane

0x4973,	// (0x0004645a) link_highlight_pane

0x6200,	// (0x00047ce7) popup_preview_text_window_t5_ParamLimits

0x6200,	// (0x00047ce7) popup_preview_text_window_t5

0x4aa1,	// (0x00046588) cursor_digital_pane

0x4aa1,	// (0x00046588) cursor_primary_pane

0x4ab2,	// (0x00046599) cursor_primary_small_pane

0x4aba,	// (0x000465a1) cursor_secondary_pane

0x4ac2,	// (0x000465a9) cursor_title_pane

0x4aa1,	// (0x00046588) link_highlight_digital_pane

0x4aa9,	// (0x00046590) link_highlight_primary_pane

0x4ab2,	// (0x00046599) link_highlight_primary_small_pane

0x4aba,	// (0x000465a1) link_highlight_secondary_pane

0x4ac2,	// (0x000465a9) link_highlight_title_pane

0x4aa1,	// (0x00046588) copy_highlight_digital_pane

0x4aa1,	// (0x00046588) copy_highlight_primary_pane

0x4ab2,	// (0x00046599) copy_highlight_primary_small_pane

0x4aba,	// (0x000465a1) copy_highlight_secondary_pane

0x4ac2,	// (0x000465a9) copy_highlight_title_pane

0x4aba,	// (0x000465a1) graphic_text_digital_pane

0x5a8f,	// (0x00047576) graphic_text_primary_pane

0x5a98,	// (0x0004757f) graphic_text_primary_small_pane

0x4ab2,	// (0x00046599) graphic_text_secondary_pane

0x4aa1,	// (0x00046588) graphic_text_title_pane

0xd58d,	// (0x0004f074) cursor_primary_pane_g1

0x5a81,	// (0x00047568) cursor_text_primary_t1

0xdad4,	// (0x0004f5bb) cursor_primary_small_pane_g1

0x5a73,	// (0x0004755a) cursor_text_primary_small_t1

0xdaca,	// (0x0004f5b1) cursor_primary_small_pane_g1_copy1

0x5a5b,	// (0x00047542) cursor_text_primary_small_t1_copy1

0x5a39,	// (0x00047520) cursor_text_title_t1

0xdac0,	// (0x0004f5a7) cursor_title_pane_g1

0xd58d,	// (0x0004f074) cursor_digital_pane_g1

0x4ad4,	// (0x000465bb) cursor_text_digital_t1

0x4af9,	// (0x000465e0) link_highlight_primary_pane_g1

0x59e2,	// (0x000474c9) link_highlight_primary_pane_t1

0x4ae2,	// (0x000465c9) link_highlight_primary_small_pane_g1

0x4aea,	// (0x000465d1) link_highlight_primary_small_pane_t1

0x4af9,	// (0x000465e0) link_highlight_secondary_pane_g1

0x4b01,	// (0x000465e8) link_highlight_secondary_pane_t1

0x5956,	// (0x0004743d) link_highlight_title_pane_g1

0x595e,	// (0x00047445) link_highlight_title_pane_t1

0x593f,	// (0x00047426) link_highlight_digital_pane_g1

0x5947,	// (0x0004742e) link_highlight_digital_pane_t1

0x5817,	// (0x000472fe) copy_highlight_primary_pane_g1

0x581f,	// (0x00047306) copy_highlight_primary_pane_t1

0x57f1,	// (0x000472d8) copy_highlight_primary_small_pane_g1

0x5808,	// (0x000472ef) copy_highlight_primary_small_pane_t1

0x4b10,	// (0x000465f7) copy_highlight_secondary_pane_g1

0x4b18,	// (0x000465ff) copy_highlight_secondary_pane_t1

0x57f1,	// (0x000472d8) copy_highlight_title_pane_g1

0x57f9,	// (0x000472e0) copy_highlight_title_pane_t1

0x5817,	// (0x000472fe) copy_highlight_digital_pane_g1

0x6a8f,	// (0x00048576) copy_highlight_digital_pane_t1

0x69e3,	// (0x000484ca) graphic_text_primary_pane_g1

0x6a73,	// (0x0004855a) graphic_text_primary_pane_t1

0x6a81,	// (0x00048568) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0005148e) graphic_text_primary_pane_t

0x6a4f,	// (0x00048536) graphic_text_primary_small_pane_g1

0x6a57,	// (0x0004853e) graphic_text_primary_small_pane_t1

0x6a65,	// (0x0004854c) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x00051489) graphic_text_primary_small_pane_t

0x6a2b,	// (0x00048512) graphic_text_secondary_pane_g1

0x6a33,	// (0x0004851a) graphic_text_secondary_pane_t1

0x6a41,	// (0x00048528) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x00051484) graphic_text_secondary_pane_t

0x6a07,	// (0x000484ee) graphic_text_title_pane_g1

0x6a0f,	// (0x000484f6) graphic_text_title_pane_t1

0x6a1d,	// (0x00048504) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0005147f) graphic_text_title_pane_t

0x69e3,	// (0x000484ca) graphic_text_digital_pane_g1

0x69eb,	// (0x000484d2) graphic_text_digital_pane_t1

0x69f9,	// (0x000484e0) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0005147a) graphic_text_digital_pane_t

0x3420,	// (0x00044f07) navi_icon_pane_srt_ParamLimits

0x3420,	// (0x00044f07) navi_icon_pane_srt

0xd496,	// (0x0004ef7d) navi_midp_pane_srt

0xd496,	// (0x0004ef7d) navi_navi_pane_srt

0x3420,	// (0x00044f07) navi_text_pane_srt_ParamLimits

0x3420,	// (0x00044f07) navi_text_pane_srt

0x69ae,	// (0x00048495) navi_navi_icon_text_pane_srt

0x69b6,	// (0x0004849d) navi_navi_pane_srt_g1_ParamLimits

0x69b6,	// (0x0004849d) navi_navi_pane_srt_g1

0x69c8,	// (0x000484af) navi_navi_pane_srt_g2_ParamLimits

0x69c8,	// (0x000484af) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x00051475) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x00051475) navi_navi_pane_srt_g

0x69da,	// (0x000484c1) navi_navi_tabs_pane_srt

0x69ae,	// (0x00048495) navi_navi_text_pane_srt

0x69ae,	// (0x00048495) navi_navi_volume_pane_srt

0x699f,	// (0x00048486) navi_navi_text_pane_srt_t1

0x20be,	// (0x00043ba5) navi_navi_volume_pane_srt_g1

0x20c6,	// (0x00043bad) volume_small_pane_srt_ParamLimits

0x20c6,	// (0x00043bad) volume_small_pane_srt

0x1452,	// (0x00042f39) volume_small_pane_srt_g1_ParamLimits

0x1452,	// (0x00042f39) volume_small_pane_srt_g1

0x1462,	// (0x00042f49) volume_small_pane_srt_g2_ParamLimits

0x1462,	// (0x00042f49) volume_small_pane_srt_g2

0x1473,	// (0x00042f5a) volume_small_pane_srt_g3_ParamLimits

0x1473,	// (0x00042f5a) volume_small_pane_srt_g3

0x1484,	// (0x00042f6b) volume_small_pane_srt_g4_ParamLimits

0x1484,	// (0x00042f6b) volume_small_pane_srt_g4

0x1495,	// (0x00042f7c) volume_small_pane_srt_g5_ParamLimits

0x1495,	// (0x00042f7c) volume_small_pane_srt_g5

0x14a6,	// (0x00042f8d) volume_small_pane_srt_g6_ParamLimits

0x14a6,	// (0x00042f8d) volume_small_pane_srt_g6

0x14b7,	// (0x00042f9e) volume_small_pane_srt_g7_ParamLimits

0x14b7,	// (0x00042f9e) volume_small_pane_srt_g7

0x14c8,	// (0x00042faf) volume_small_pane_srt_g8_ParamLimits

0x14c8,	// (0x00042faf) volume_small_pane_srt_g8

0x14d9,	// (0x00042fc0) volume_small_pane_srt_g9_ParamLimits

0x14d9,	// (0x00042fc0) volume_small_pane_srt_g9

0x14ea,	// (0x00042fd1) volume_small_pane_srt_g10_ParamLimits

0x14ea,	// (0x00042fd1) volume_small_pane_srt_g10

0x0009,

0xf73b,	// (0x00051222) volume_small_pane_srt_g_ParamLimits

0xf73b,	// (0x00051222) volume_small_pane_srt_g

0x3820,	// (0x00045307) query_popup_data_pane_cp2

0x6985,	// (0x0004846c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6985,	// (0x0004846c) navi_navi_icon_text_pane_srt_t1

0x5a8f,	// (0x00047576) navi_tabs_2_long_pane_srt

0x5a8f,	// (0x00047576) navi_tabs_2_pane_srt

0x5a8f,	// (0x00047576) navi_tabs_3_long_pane_srt

0x5a8f,	// (0x00047576) navi_tabs_3_pane_srt

0x5a8f,	// (0x00047576) navi_tabs_4_pane_srt

0x209e,	// (0x00043b85) tabs_2_active_pane_srt_ParamLimits

0x209e,	// (0x00043b85) tabs_2_active_pane_srt

0x20ae,	// (0x00043b95) tabs_2_passive_pane_srt_ParamLimits

0x20ae,	// (0x00043b95) tabs_2_passive_pane_srt

0x5235,	// (0x00046d1c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5235,	// (0x00046d1c) bg_passive_tab_pane_cp1_srt

0x6951,	// (0x00048438) bg_passive_tab_pane_g1_cp1_srt

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp1_srt

0x695a,	// (0x00048441) bg_passive_tab_pane_g3_cp1_srt

0x369b,	// (0x00045182) bg_active_tab_pane_cp1_srt_ParamLimits

0x369b,	// (0x00045182) bg_active_tab_pane_cp1_srt

0x6963,	// (0x0004844a) tabs_2_active_pane_srt_g1

0xde69,	// (0x0004f950) tabs_2_active_pane_srt_t1_ParamLimits

0xde69,	// (0x0004f950) tabs_2_active_pane_srt_t1

0x6951,	// (0x00048438) bg_active_tab_pane_g1_cp1_srt

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp1_srt

0x695a,	// (0x00048441) bg_active_tab_pane_g3_cp1_srt

0x206b,	// (0x00043b52) tabs_3_active_pane_srt_ParamLimits

0x206b,	// (0x00043b52) tabs_3_active_pane_srt

0x207c,	// (0x00043b63) tabs_3_passive_pane_cp_srt_ParamLimits

0x207c,	// (0x00043b63) tabs_3_passive_pane_cp_srt

0x208d,	// (0x00043b74) tabs_3_passive_pane_srt_ParamLimits

0x208d,	// (0x00043b74) tabs_3_passive_pane_srt

0x5235,	// (0x00046d1c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5235,	// (0x00046d1c) bg_passive_tab_pane_cp2_srt

0x4b27,	// (0x0004660e) bg_passive_tab_pane_g1_cp2_srt

0x45b0,	// (0x00046097) bg_passive_tab_pane_g2_cp2_srt

0x4b30,	// (0x00046617) bg_passive_tab_pane_g3_cp2_srt

0x369b,	// (0x00045182) bg_active_tab_pane_cp2_srt_ParamLimits

0x369b,	// (0x00045182) bg_active_tab_pane_cp2_srt

0x6937,	// (0x0004841e) tabs_3_active_pane_srt_g1

0xde53,	// (0x0004f93a) tabs_3_active_pane_srt_t1_ParamLimits

0xde53,	// (0x0004f93a) tabs_3_active_pane_srt_t1

0x4b27,	// (0x0004660e) bg_active_tab_pane_g1_cp2_srt

0x45b0,	// (0x00046097) bg_active_tab_pane_g2_cp2_srt

0x4b30,	// (0x00046617) bg_active_tab_pane_g3_cp2_srt

0x2023,	// (0x00043b0a) tabs_4_active_pane_srt_ParamLimits

0x2023,	// (0x00043b0a) tabs_4_active_pane_srt

0x2035,	// (0x00043b1c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2035,	// (0x00043b1c) tabs_4_passive_pane_cp2_srt

0x165d,	// (0x00043144) aid_size_cell_toolbar

0x659a,	// (0x00048081) main_idle_act_pane_ParamLimits

0x181c,	// (0x00043303) popup_large_graphic_colour_window_ParamLimits

0xcc15,	// (0x0004e6fc) popup_toolbar_window_ParamLimits

0xcc15,	// (0x0004e6fc) popup_toolbar_window

0x6752,	// (0x00048239) list_single_graphic_2heading_pane_ParamLimits

0x6752,	// (0x00048239) list_single_graphic_2heading_pane

0x405d,	// (0x00045b44) aid_size_cell_apps_grid_lsc_pane

0x406f,	// (0x00045b56) aid_size_cell_apps_grid_prt_pane

0x4c97,	// (0x0004677e) bg_wml_button_pane_cp1_ParamLimits

0x4c97,	// (0x0004677e) bg_wml_button_pane_cp1

0xda83,	// (0x0004f56a) form_midp_field_text_pane_t1_ParamLimits

0x5235,	// (0x00046d1c) input_focus_pane_cp050_ParamLimits

0x549c,	// (0x00046f83) list_midp_form_text_pane_ParamLimits

0x5442,	// (0x00046f29) input_focus_pane_cp051_ParamLimits

0x5456,	// (0x00046f3d) list_midp_choice_pane_ParamLimits

0xda21,	// (0x0004f508) list_single_2graphic_pane_cp3_ParamLimits

0xda21,	// (0x0004f508) list_single_2graphic_pane_cp3

0xda34,	// (0x0004f51b) list_single_midp_graphic_pane_ParamLimits

0xda34,	// (0x0004f51b) list_single_midp_graphic_pane

0x03aa,	// (0x00041e91) list_single_graphic_2heading_pane_g1_ParamLimits

0x03aa,	// (0x00041e91) list_single_graphic_2heading_pane_g1

0x03b6,	// (0x00041e9d) list_single_graphic_2heading_pane_g4_ParamLimits

0x03b6,	// (0x00041e9d) list_single_graphic_2heading_pane_g4

0x03c2,	// (0x00041ea9) list_single_graphic_2heading_pane_g5_ParamLimits

0x03c2,	// (0x00041ea9) list_single_graphic_2heading_pane_g5

0x0002,

0xf78e,	// (0x00051275) list_single_graphic_2heading_pane_g_ParamLimits

0xf78e,	// (0x00051275) list_single_graphic_2heading_pane_g

0x03ce,	// (0x00041eb5) list_single_graphic_2heading_pane_t1_ParamLimits

0x03ce,	// (0x00041eb5) list_single_graphic_2heading_pane_t1

0x03e2,	// (0x00041ec9) list_single_graphic_2heading_pane_t2_ParamLimits

0x03e2,	// (0x00041ec9) list_single_graphic_2heading_pane_t2

0x03fe,	// (0x00041ee5) list_single_graphic_2heading_pane_t3_ParamLimits

0x03fe,	// (0x00041ee5) list_single_graphic_2heading_pane_t3

0x0002,

0xf795,	// (0x0005127c) list_single_graphic_2heading_pane_t_ParamLimits

0xf795,	// (0x0005127c) list_single_graphic_2heading_pane_t

0x50ff,	// (0x00046be6) bg_popup_sub_pane_cp2

0x5129,	// (0x00046c10) grid_toobar_pane

0x1c30,	// (0x00043717) cell_toolbar_pane_ParamLimits

0x1c30,	// (0x00043717) cell_toolbar_pane

0x5165,	// (0x00046c4c) cell_toolbar_pane_g1_ParamLimits

0x5165,	// (0x00046c4c) cell_toolbar_pane_g1

0x5179,	// (0x00046c60) cell_toolbar_pane_g2_ParamLimits

0x5179,	// (0x00046c60) cell_toolbar_pane_g2

0x0001,

0xf7a3,	// (0x0005128a) cell_toolbar_pane_g_ParamLimits

0xf7a3,	// (0x0005128a) cell_toolbar_pane_g

0x519b,	// (0x00046c82) grid_highlight_pane_cp2_ParamLimits

0x519b,	// (0x00046c82) grid_highlight_pane_cp2

0x51b5,	// (0x00046c9c) toolbar_button_pane

0x51c1,	// (0x00046ca8) toolbar_button_pane_g1

0x51c9,	// (0x00046cb0) toolbar_button_pane_g2

0x51d1,	// (0x00046cb8) toolbar_button_pane_g3

0x51d9,	// (0x00046cc0) toolbar_button_pane_g4

0x51e1,	// (0x00046cc8) toolbar_button_pane_g5

0x51e9,	// (0x00046cd0) toolbar_button_pane_g6

0x51f1,	// (0x00046cd8) toolbar_button_pane_g7

0x51f9,	// (0x00046ce0) toolbar_button_pane_g8

0x5201,	// (0x00046ce8) toolbar_button_pane_g9

0x0009,

0xf7a8,	// (0x0005128f) toolbar_button_pane_g

0x1c68,	// (0x0004374f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1c68,	// (0x0004374f) list_single_2graphic_pane_g1_cp3

0xcc6d,	// (0x0004e754) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcc6d,	// (0x0004e754) list_single_2graphic_pane_g2_cp3

0x1c85,	// (0x0004376c) list_single_2graphic_pane_g3_cp3

0x1c8d,	// (0x00043774) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1c8d,	// (0x00043774) list_single_2graphic_pane_g4_cp3

0x1c99,	// (0x00043780) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1c99,	// (0x00043780) list_single_2graphic_pane_t1_cp3

0x6b01,	// (0x000485e8) list_single_midp_graphic_pane_g2_ParamLimits

0x6b01,	// (0x000485e8) list_single_midp_graphic_pane_g2

0x039a,	// (0x00041e81) aid_zoom_text_primary

0x1665,	// (0x0004314c) aid_zoom_text_secondary

0x4be1,	// (0x000466c8) status_small_pane_g7_ParamLimits

0x4be1,	// (0x000466c8) status_small_pane_g7

0x4c04,	// (0x000466eb) status_small_pane_t1_ParamLimits

0xbeea,	// (0x0004d9d1) title_pane_g2

0x0003,

0xf527,	// (0x0005100e) title_pane_g

0xc162,	// (0x0004dc49) aid_size_cell_colour_1_pane_ParamLimits

0xc162,	// (0x0004dc49) aid_size_cell_colour_1_pane

0xc176,	// (0x0004dc5d) aid_size_cell_colour_2_pane_ParamLimits

0xc176,	// (0x0004dc5d) aid_size_cell_colour_2_pane

0xc18a,	// (0x0004dc71) aid_size_cell_colour_3_pane_ParamLimits

0xc18a,	// (0x0004dc71) aid_size_cell_colour_3_pane

0xc19e,	// (0x0004dc85) aid_size_cell_colour_4_pane_ParamLimits

0xc19e,	// (0x0004dc85) aid_size_cell_colour_4_pane

0x1093,	// (0x00042b7a) title_pane_stacon_g1_ParamLimits

0x1093,	// (0x00042b7a) title_pane_stacon_g1

0x5876,	// (0x0004735d) popup_note_wait_window_g3_ParamLimits

0x5876,	// (0x0004735d) popup_note_wait_window_g3

0x58ec,	// (0x000473d3) popup_note_wait_window_t5_ParamLimits

0x58ec,	// (0x000473d3) popup_note_wait_window_t5

0xd496,	// (0x0004ef7d) main_feb_china_hwr_fs_writing_pane

0xc617,	// (0x0004e0fe) popup_feb_china_hwr_fs_window_ParamLimits

0xc617,	// (0x0004e0fe) popup_feb_china_hwr_fs_window

0xcc7e,	// (0x0004e765) aid_size_cell_hwr_fs_ParamLimits

0xcc7e,	// (0x0004e765) aid_size_cell_hwr_fs

0x5235,	// (0x00046d1c) bg_popup_sub_pane_cp3_ParamLimits

0x5235,	// (0x00046d1c) bg_popup_sub_pane_cp3

0xcc93,	// (0x0004e77a) grid_hwr_fs_pane_ParamLimits

0xcc93,	// (0x0004e77a) grid_hwr_fs_pane

0x1d10,	// (0x000437f7) linegrid_hwr_fs_pane_ParamLimits

0x1d10,	// (0x000437f7) linegrid_hwr_fs_pane

0xccab,	// (0x0004e792) cell_hwr_fs_pane_ParamLimits

0xccab,	// (0x0004e792) cell_hwr_fs_pane

0x5241,	// (0x00046d28) linegrid_hwr_fs_pane_g1_ParamLimits

0x5241,	// (0x00046d28) linegrid_hwr_fs_pane_g1

0xd9f5,	// (0x0004f4dc) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9f5,	// (0x0004f4dc) linegrid_hwr_fs_pane_g2

0x525f,	// (0x00046d46) linegrid_hwr_fs_pane_g3_ParamLimits

0x525f,	// (0x00046d46) linegrid_hwr_fs_pane_g3

0x1d42,	// (0x00043829) linegrid_hwr_fs_pane_g4_ParamLimits

0x1d42,	// (0x00043829) linegrid_hwr_fs_pane_g4

0x1d5c,	// (0x00043843) linegrid_hwr_fs_pane_g5_ParamLimits

0x1d5c,	// (0x00043843) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x000512b5) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x000512b5) linegrid_hwr_fs_pane_g

0x526b,	// (0x00046d52) cell_hwr_fs_pane_g1_ParamLimits

0x526b,	// (0x00046d52) cell_hwr_fs_pane_g1

0x5036,	// (0x00046b1d) cell_hwr_fs_pane_g2_ParamLimits

0x5036,	// (0x00046b1d) cell_hwr_fs_pane_g2

0xda07,	// (0x0004f4ee) cell_hwr_fs_pane_g3_ParamLimits

0xda07,	// (0x0004f4ee) cell_hwr_fs_pane_g3

0xda14,	// (0x0004f4fb) cell_hwr_fs_pane_g4_ParamLimits

0xda14,	// (0x0004f4fb) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x000512c0) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x000512c0) cell_hwr_fs_pane_g

0xccd1,	// (0x0004e7b8) cell_hwr_fs_pane_t1

0xd496,	// (0x0004ef7d) grid_highlight_pane_cp6

0xd496,	// (0x0004ef7d) main_idle_act2_pane

0x3e14,	// (0x000458fb) aid_inside_area_popup_secondary

0xdade,	// (0x0004f5c5) aid_inside_area_window_primary_ParamLimits

0xdade,	// (0x0004f5c5) aid_inside_area_window_primary

0x6a9e,	// (0x00048585) ai2_news_ticker_pane

0x6aa6,	// (0x0004858d) aid_size_cell_ai1_link_ParamLimits

0x6aa6,	// (0x0004858d) aid_size_cell_ai1_link

0xde7f,	// (0x0004f966) popup_ai2_data_window_ParamLimits

0xde7f,	// (0x0004f966) popup_ai2_data_window

0x6ad6,	// (0x000485bd) popup_ai2_link_window_ParamLimits

0x6ad6,	// (0x000485bd) popup_ai2_link_window

0x5235,	// (0x00046d1c) bg_popup_sub_pane_cp4_ParamLimits

0x5235,	// (0x00046d1c) bg_popup_sub_pane_cp4

0x6aea,	// (0x000485d1) grid_ai2_link_pane_ParamLimits

0x6aea,	// (0x000485d1) grid_ai2_link_pane

0x6b0d,	// (0x000485f4) popup_ai2_link_window_g1_ParamLimits

0x6b0d,	// (0x000485f4) popup_ai2_link_window_g1

0x6b19,	// (0x00048600) popup_ai2_link_window_g2_ParamLimits

0x6b19,	// (0x00048600) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x00051493) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x00051493) popup_ai2_link_window_g

0x6b28,	// (0x0004860f) ai2_mp_button_pane

0x6b30,	// (0x00048617) ai2_mp_volume_pane

0x5442,	// (0x00046f29) bg_popup_sub_pane_cp5_ParamLimits

0x5442,	// (0x00046f29) bg_popup_sub_pane_cp5

0x6b38,	// (0x0004861f) heading_ai2_gene_pane_ParamLimits

0x6b38,	// (0x0004861f) heading_ai2_gene_pane

0x6b44,	// (0x0004862b) list_ai2_gene_pane_ParamLimits

0x6b44,	// (0x0004862b) list_ai2_gene_pane

0x6b8c,	// (0x00048673) cell_ai2_link_pane_ParamLimits

0x6b8c,	// (0x00048673) cell_ai2_link_pane

0x6ba2,	// (0x00048689) cell_ai2_link_pane_g1

0xd496,	// (0x0004ef7d) grid_highlight_pane_cp7

0x20db,	// (0x00043bc2) ai2_mp_volume_pane_g1

0x6c72,	// (0x00048759) ai2_mp_volume_pane_g2

0xdea9,	// (0x0004f990) list_ai2_gene_pane_t1

0x6c7a,	// (0x00048761) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x000514ac) ai2_mp_volume_pane_g

0x20e3,	// (0x00043bca) volume_small_pane_cp3

0x6c82,	// (0x00048769) aid_size_cell_ai2_button

0x6c8a,	// (0x00048771) grid_ai2_button_pane

0x6c93,	// (0x0004877a) cell_ai2_button_pane_ParamLimits

0x6c93,	// (0x0004877a) cell_ai2_button_pane

0xd48c,	// (0x0004ef73) cell_ai2_button_pane_g1

0xd496,	// (0x0004ef7d) grid_highlight_pane_cp8

0x6c32,	// (0x00048719) ai2_gene_pane_t1_ParamLimits

0x6c32,	// (0x00048719) ai2_gene_pane_t1

0xc5b5,	// (0x0004e09c) aid_height_parent_landscape

0xdc26,	// (0x0004f70d) aid_height_set_list

0x659a,	// (0x00048081) aid_size_parent

0x68c1,	// (0x000483a8) aid_size_cell_graphic_pane_ParamLimits

0x6b54,	// (0x0004863b) popup_ai2_data_window_g1_ParamLimits

0x6b54,	// (0x0004863b) popup_ai2_data_window_g1

0x6b60,	// (0x00048647) ai2_news_ticker_pane_g1

0x6b68,	// (0x0004864f) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x00051498) ai2_news_ticker_pane_g

0x6b70,	// (0x00048657) ai2_news_ticker_pane_t1

0x6b7e,	// (0x00048665) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0005149d) ai2_news_ticker_pane_t

0x6bab,	// (0x00048692) heading_ai2_gene_pane_g1

0x6bb3,	// (0x0004869a) heading_ai2_gene_pane_t1_ParamLimits

0x6bb3,	// (0x0004869a) heading_ai2_gene_pane_t1

0x6bc8,	// (0x000486af) list_highlight_pane_cp6

0xde93,	// (0x0004f97a) ai2_gene_pane_ParamLimits

0xde93,	// (0x0004f97a) ai2_gene_pane

0xdeb7,	// (0x0004f99e) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x000514a2) list_ai2_gene_pane_t

0x6c03,	// (0x000486ea) list_highlight_pane_cp8_ParamLimits

0x6c03,	// (0x000486ea) list_highlight_pane_cp8

0x6c14,	// (0x000486fb) ai2_gene_pane_g1_ParamLimits

0x6c14,	// (0x000486fb) ai2_gene_pane_g1

0x6c26,	// (0x0004870d) ai2_gene_pane_g2_ParamLimits

0x6c26,	// (0x0004870d) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x000514a7) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x000514a7) ai2_gene_pane_g

0x3c43,	// (0x0004572a) scroll_pane_cp12

0xc572,	// (0x0004e059) control_pane_t3_ParamLimits

0xc572,	// (0x0004e059) control_pane_t3

0x4bf5,	// (0x000466dc) status_small_pane_g8_ParamLimits

0x4bf5,	// (0x000466dc) status_small_pane_g8

0xc6ac,	// (0x0004e193) popup_find_window_ParamLimits

0xc93f,	// (0x0004e426) popup_note_image_window_ParamLimits

0xf4c9,	// (0x00050fb0) list_double2_graphic_pane_vc_g1_ParamLimits

0xf4c9,	// (0x00050fb0) list_double2_graphic_pane_vc_g1

0x45d4,	// (0x000460bb) list_double2_graphic_pane_vc_g2_ParamLimits

0x45d4,	// (0x000460bb) list_double2_graphic_pane_vc_g2

0x0fc3,	// (0x00042aaa) list_double2_graphic_pane_vc_g3_ParamLimits

0x0fc3,	// (0x00042aaa) list_double2_graphic_pane_vc_g3

0x0002,

0xf79c,	// (0x00051283) list_double2_graphic_pane_vc_g_ParamLimits

0xf79c,	// (0x00051283) list_double2_graphic_pane_vc_g

0x0416,	// (0x00041efd) list_double2_graphic_pane_vc_t1_ParamLimits

0x0416,	// (0x00041efd) list_double2_graphic_pane_vc_t1

0x45d4,	// (0x000460bb) list_single_heading_pane_vc_g1_ParamLimits

0x45d4,	// (0x000460bb) list_single_heading_pane_vc_g1

0x0fc3,	// (0x00042aaa) list_single_heading_pane_vc_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00051092) list_single_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00051092) list_single_heading_pane_vc_g

0x042c,	// (0x00041f13) list_single_heading_pane_vc_t1_ParamLimits

0x042c,	// (0x00041f13) list_single_heading_pane_vc_t1

0x0442,	// (0x00041f29) list_single_heading_pane_vc_t2_ParamLimits

0x0442,	// (0x00041f29) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x000512a4) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x000512a4) list_single_heading_pane_vc_t

0x1ccb,	// (0x000437b2) list_setting_number_pane_vc_g1_ParamLimits

0x1ccb,	// (0x000437b2) list_setting_number_pane_vc_g1

0x1cd7,	// (0x000437be) list_setting_number_pane_vc_g2_ParamLimits

0x1cd7,	// (0x000437be) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x000512a9) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x000512a9) list_setting_number_pane_vc_g

0x0458,	// (0x00041f3f) list_setting_number_pane_vc_t1_ParamLimits

0x0458,	// (0x00041f3f) list_setting_number_pane_vc_t1

0x046c,	// (0x00041f53) list_setting_number_pane_vc_t2_ParamLimits

0x046c,	// (0x00041f53) list_setting_number_pane_vc_t2

0x0488,	// (0x00041f6f) list_setting_number_pane_vc_t3_ParamLimits

0x0488,	// (0x00041f6f) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x000512ae) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x000512ae) list_setting_number_pane_vc_t

0x04b4,	// (0x00041f9b) set_value_pane_vc_ParamLimits

0x04b4,	// (0x00041f9b) set_value_pane_vc

0x6752,	// (0x00048239) list_double2_graphic_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double2_graphic_pane_vc

0x6752,	// (0x00048239) list_double2_large_graphic_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double2_large_graphic_pane_vc

0x6752,	// (0x00048239) list_double2_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double2_pane_vc

0x6752,	// (0x00048239) list_double_graphic_heading_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double_graphic_heading_pane_vc

0x6752,	// (0x00048239) list_double_graphic_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double_graphic_pane_vc

0x6752,	// (0x00048239) list_double_heading_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double_heading_pane_vc

0x6764,	// (0x0004824b) list_double_large_graphic_pane_vc_ParamLimits

0x6764,	// (0x0004824b) list_double_large_graphic_pane_vc

0x6752,	// (0x00048239) list_double_number_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double_number_pane_vc

0x6752,	// (0x00048239) list_double_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double_pane_vc

0x6752,	// (0x00048239) list_double_time_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_double_time_pane_vc

0x6752,	// (0x00048239) list_setting_number_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_setting_number_pane_vc

0x6752,	// (0x00048239) list_setting_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_setting_pane_vc

0x6752,	// (0x00048239) list_single_graphic_heading_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_single_graphic_heading_pane_vc

0x6752,	// (0x00048239) list_single_heading_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_single_heading_pane_vc

0x6752,	// (0x00048239) list_single_number_heading_pane_vc_ParamLimits

0x6752,	// (0x00048239) list_single_number_heading_pane_vc

0x058c,	// (0x00042073) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x058c,	// (0x00042073) list_double_graphic_heading_pane_vc_g1

0x0598,	// (0x0004207f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0598,	// (0x0004207f) list_double_graphic_heading_pane_vc_g2

0x05a4,	// (0x0004208b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x05a4,	// (0x0004208b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x000514b3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x000514b3) list_double_graphic_heading_pane_vc_g

0x05b0,	// (0x00042097) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x05b0,	// (0x00042097) list_double_graphic_heading_pane_vc_t1

0x05cc,	// (0x000420b3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x05cc,	// (0x000420b3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x000514ba) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x000514ba) list_double_graphic_heading_pane_vc_t

0x1ccb,	// (0x000437b2) list_setting_pane_vc_g1_ParamLimits

0x1ccb,	// (0x000437b2) list_setting_pane_vc_g1

0x1cd7,	// (0x000437be) list_setting_pane_vc_g2_ParamLimits

0x1cd7,	// (0x000437be) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x000512a9) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x000512a9) list_setting_pane_vc_g

0x05ea,	// (0x000420d1) list_setting_pane_vc_t1_ParamLimits

0x05ea,	// (0x000420d1) list_setting_pane_vc_t1

0x0606,	// (0x000420ed) list_setting_pane_vc_t2_ParamLimits

0x0606,	// (0x000420ed) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x000514e8) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x000514e8) list_setting_pane_vc_t

0x04b4,	// (0x00041f9b) set_value_pane_cp_vc_ParamLimits

0x04b4,	// (0x00041f9b) set_value_pane_cp_vc

0x45d4,	// (0x000460bb) list_single_number_heading_pane_vc_g1_ParamLimits

0x45d4,	// (0x000460bb) list_single_number_heading_pane_vc_g1

0x0fc3,	// (0x00042aaa) list_single_number_heading_pane_vc_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ab,	// (0x00051092) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ab,	// (0x00051092) list_single_number_heading_pane_vc_g

0xf48f,	// (0x00050f76) list_single_number_heading_pane_vc_t1_ParamLimits

0xf48f,	// (0x00050f76) list_single_number_heading_pane_vc_t1

0x0622,	// (0x00042109) list_single_number_heading_pane_vc_t2_ParamLimits

0x0622,	// (0x00042109) list_single_number_heading_pane_vc_t2

0x0638,	// (0x0004211f) list_single_number_heading_pane_vc_t3_ParamLimits

0x0638,	// (0x0004211f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x000514ed) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x000514ed) list_single_number_heading_pane_vc_t

0xf4c9,	// (0x00050fb0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xf4c9,	// (0x00050fb0) list_single_graphic_heading_pane_vc_g1

0x45d4,	// (0x000460bb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x45d4,	// (0x000460bb) list_single_graphic_heading_pane_vc_g4

0x0fc3,	// (0x00042aaa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0fc3,	// (0x00042aaa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79c,	// (0x00051283) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79c,	// (0x00051283) list_single_graphic_heading_pane_vc_g

0xf48f,	// (0x00050f76) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xf48f,	// (0x00050f76) list_single_graphic_heading_pane_vc_t1

0x064a,	// (0x00042131) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x064a,	// (0x00042131) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0d,	// (0x000514f4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x000514f4) list_single_graphic_heading_pane_vc_t

0x45d4,	// (0x000460bb) list_double2_pane_vc_g1_ParamLimits

0x45d4,	// (0x000460bb) list_double2_pane_vc_g1

0x0fc3,	// (0x00042aaa) list_double2_pane_vc_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_double2_pane_vc_g2

0x0001,

0xf5ab,	// (0x00051092) list_double2_pane_vc_g_ParamLimits

0xf5ab,	// (0x00051092) list_double2_pane_vc_g

0x053f,	// (0x00042026) list_double2_pane_vc_t1_ParamLimits

0x053f,	// (0x00042026) list_double2_pane_vc_t1

0x20ec,	// (0x00043bd3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x20ec,	// (0x00043bd3) list_double2_large_graphic_pane_vc_g1

0x45d4,	// (0x000460bb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x45d4,	// (0x000460bb) list_double2_large_graphic_pane_vc_g2

0x0fc3,	// (0x00042aaa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0fc3,	// (0x00042aaa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c3,	// (0x000510aa) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c3,	// (0x000510aa) list_double2_large_graphic_pane_vc_g

0x065c,	// (0x00042143) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x065c,	// (0x00042143) list_double2_large_graphic_pane_vc_t1

0x20f8,	// (0x00043bdf) list_double_time_pane_vc_g1_ParamLimits

0x20f8,	// (0x00043bdf) list_double_time_pane_vc_g1

0x2104,	// (0x00043beb) list_double_time_pane_vc_g2_ParamLimits

0x2104,	// (0x00043beb) list_double_time_pane_vc_g2

0x0001,

0xfa12,	// (0x000514f9) list_double_time_pane_vc_g_ParamLimits

0xfa12,	// (0x000514f9) list_double_time_pane_vc_g

0x0672,	// (0x00042159) list_double_time_pane_vc_t1_ParamLimits

0x0672,	// (0x00042159) list_double_time_pane_vc_t1

0x0696,	// (0x0004217d) list_double_time_pane_vc_t2_ParamLimits

0x0696,	// (0x0004217d) list_double_time_pane_vc_t2

0x06e5,	// (0x000421cc) list_double_time_pane_vc_t3_ParamLimits

0x06e5,	// (0x000421cc) list_double_time_pane_vc_t3

0x06f7,	// (0x000421de) list_double_time_pane_vc_t4_ParamLimits

0x06f7,	// (0x000421de) list_double_time_pane_vc_t4

0x0003,

0xfa17,	// (0x000514fe) list_double_time_pane_vc_t_ParamLimits

0xfa17,	// (0x000514fe) list_double_time_pane_vc_t

0x45d4,	// (0x000460bb) list_double_pane_vc_g1_ParamLimits

0x45d4,	// (0x000460bb) list_double_pane_vc_g1

0x0fc3,	// (0x00042aaa) list_double_pane_vc_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_double_pane_vc_g2

0x0001,

0xf5ab,	// (0x00051092) list_double_pane_vc_g_ParamLimits

0xf5ab,	// (0x00051092) list_double_pane_vc_g

0x070b,	// (0x000421f2) list_double_pane_vc_t1_ParamLimits

0x070b,	// (0x000421f2) list_double_pane_vc_t1

0x071f,	// (0x00042206) list_double_pane_vc_t2_ParamLimits

0x071f,	// (0x00042206) list_double_pane_vc_t2

0x0001,

0xfa20,	// (0x00051507) list_double_pane_vc_t_ParamLimits

0xfa20,	// (0x00051507) list_double_pane_vc_t

0x45d4,	// (0x000460bb) list_double_number_pane_vc_g1_ParamLimits

0x45d4,	// (0x000460bb) list_double_number_pane_vc_g1

0x0fc3,	// (0x00042aaa) list_double_number_pane_vc_g2_ParamLimits

0x0fc3,	// (0x00042aaa) list_double_number_pane_vc_g2

0x0001,

0xf5ab,	// (0x00051092) list_double_number_pane_vc_g_ParamLimits

0xf5ab,	// (0x00051092) list_double_number_pane_vc_g

0x0737,	// (0x0004221e) list_double_number_pane_vc_t1_ParamLimits

0x0737,	// (0x0004221e) list_double_number_pane_vc_t1

0x0749,	// (0x00042230) list_double_number_pane_vc_t2_ParamLimits

0x0749,	// (0x00042230) list_double_number_pane_vc_t2

0x075d,	// (0x00042244) list_double_number_pane_vc_t3_ParamLimits

0x075d,	// (0x00042244) list_double_number_pane_vc_t3

0x0002,

0xfa25,	// (0x0005150c) list_double_number_pane_vc_t_ParamLimits

0xfa25,	// (0x0005150c) list_double_number_pane_vc_t

0x2110,	// (0x00043bf7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2110,	// (0x00043bf7) list_double_large_graphic_pane_vc_g1

0x212c,	// (0x00043c13) list_double_large_graphic_pane_vc_g2_ParamLimits

0x212c,	// (0x00043c13) list_double_large_graphic_pane_vc_g2

0x2140,	// (0x00043c27) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2140,	// (0x00043c27) list_double_large_graphic_pane_vc_g3

0x0777,	// (0x0004225e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0777,	// (0x0004225e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2c,	// (0x00051513) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x00051513) list_double_large_graphic_pane_vc_g

0x0786,	// (0x0004226d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0786,	// (0x0004226d) list_double_large_graphic_pane_vc_t1

0x07a2,	// (0x00042289) list_double_large_graphic_pane_vc_t2_ParamLimits

0x07a2,	// (0x00042289) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa35,	// (0x0005151c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa35,	// (0x0005151c) list_double_large_graphic_pane_vc_t

0x0598,	// (0x0004207f) list_double_heading_pane_vc_g1_ParamLimits

0x0598,	// (0x0004207f) list_double_heading_pane_vc_g1

0x05a4,	// (0x0004208b) list_double_heading_pane_vc_g2_ParamLimits

0x05a4,	// (0x0004208b) list_double_heading_pane_vc_g2

0x0001,

0xfa3a,	// (0x00051521) list_double_heading_pane_vc_g_ParamLimits

0xfa3a,	// (0x00051521) list_double_heading_pane_vc_g

0x07c4,	// (0x000422ab) list_double_heading_pane_vc_t1_ParamLimits

0x07c4,	// (0x000422ab) list_double_heading_pane_vc_t1

0x07d8,	// (0x000422bf) list_double_heading_pane_vc_t2_ParamLimits

0x07d8,	// (0x000422bf) list_double_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00051526) list_double_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00051526) list_double_heading_pane_vc_t

0x07f0,	// (0x000422d7) list_double_graphic_pane_vc_g1_ParamLimits

0x07f0,	// (0x000422d7) list_double_graphic_pane_vc_g1

0x214f,	// (0x00043c36) list_double_graphic_pane_vc_g2_ParamLimits

0x214f,	// (0x00043c36) list_double_graphic_pane_vc_g2

0x45d4,	// (0x000460bb) list_double_graphic_pane_vc_g3_ParamLimits

0x45d4,	// (0x000460bb) list_double_graphic_pane_vc_g3

0x0003,

0xfa44,	// (0x0005152b) list_double_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0005152b) list_double_graphic_pane_vc_g

0x07fc,	// (0x000422e3) list_double_graphic_pane_vc_t1_ParamLimits

0x07fc,	// (0x000422e3) list_double_graphic_pane_vc_t1

0x0826,	// (0x0004230d) list_double_graphic_pane_vc_t2_ParamLimits

0x0826,	// (0x0004230d) list_double_graphic_pane_vc_t2

0x0001,

0xfa4d,	// (0x00051534) list_double_graphic_pane_vc_t_ParamLimits

0xfa4d,	// (0x00051534) list_double_graphic_pane_vc_t

0x0b55,	// (0x0004263c) aid_size_cell_fastswap

0xbd13,	// (0x0004d7fa) aid_size_cell_touch_ParamLimits

0xbd13,	// (0x0004d7fa) aid_size_cell_touch

0x0dbe,	// (0x000428a5) popup_fast_swap_wide_window_ParamLimits

0x0dbe,	// (0x000428a5) popup_fast_swap_wide_window

0xbe81,	// (0x0004d968) touch_pane_ParamLimits

0xbe81,	// (0x0004d968) touch_pane

0x3ca5,	// (0x0004578c) button_value_adjust_pane_cp2

0x00c1,	// (0x00041ba8) button_value_adjust_pane_cp4

0x00e5,	// (0x00041bcc) form_field_data_pane_cp2

0xba40,	// (0x0004d527) form_field_data_wide_pane_cp2

0x412c,	// (0x00045c13) bg_scroll_pane_ParamLimits

0x11f5,	// (0x00042cdc) scroll_handle_pane_ParamLimits

0x1209,	// (0x00042cf0) scroll_sc2_down_pane_ParamLimits

0x1209,	// (0x00042cf0) scroll_sc2_down_pane

0x415d,	// (0x00045c44) scroll_sc2_up_pane_ParamLimits

0x415d,	// (0x00045c44) scroll_sc2_up_pane

0xdfe7,	// (0x0004face) grid_wheel_folder_pane_g1_ParamLimits

0xdfe7,	// (0x0004face) grid_wheel_folder_pane_g1

0x13ea,	// (0x00042ed1) clock_nsta_pane_cp2_ParamLimits

0x13ea,	// (0x00042ed1) clock_nsta_pane_cp2

0xd4e8,	// (0x0004efcf) listscroll_midp_pane_ParamLimits

0xd4f4,	// (0x0004efdb) midp_canvas_pane

0x4c6f,	// (0x00046756) nsta_clock_indic_pane

0x4ca3,	// (0x0004678a) listscroll_form_pane_vc

0x4cab,	// (0x00046792) listscroll_set_pane_vc_ParamLimits

0x4cab,	// (0x00046792) listscroll_set_pane_vc

0xd702,	// (0x0004f1e9) clock_nsta_pane

0xd72c,	// (0x0004f213) indicator_nsta_pane

0x50ff,	// (0x00046be6) bg_popup_sub_pane_cp2_ParamLimits

0x5113,	// (0x00046bfa) find_pane_cp2_ParamLimits

0x5113,	// (0x00046bfa) find_pane_cp2

0x5129,	// (0x00046c10) grid_toobar_pane_ParamLimits

0x5209,	// (0x00046cf0) list_form_gen_pane_vc_ParamLimits

0x5209,	// (0x00046cf0) list_form_gen_pane_vc

0x521f,	// (0x00046d06) scroll_pane_cp8_vc_ParamLimits

0x521f,	// (0x00046d06) scroll_pane_cp8_vc

0x529b,	// (0x00046d82) data_form_wide_pane_vc_ParamLimits

0x529b,	// (0x00046d82) data_form_wide_pane_vc

0x52a7,	// (0x00046d8e) form_field_data_wide_pane_vc_g1

0x52af,	// (0x00046d96) form_field_data_wide_pane_vc_t1_ParamLimits

0x52af,	// (0x00046d96) form_field_data_wide_pane_vc_t1

0x3cb9,	// (0x000457a0) input_focus_pane_cp6_vc_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_cp6_vc

0x55f5,	// (0x000470dc) list_midp_pane_ParamLimits

0x692b,	// (0x00048412) scroll_pane_cp16_ParamLimits

0x692b,	// (0x00048412) scroll_pane_cp16

0x564b,	// (0x00047132) button_value_adjust_pane_ParamLimits

0x564b,	// (0x00047132) button_value_adjust_pane

0xdc37,	// (0x0004f71e) button_value_adjust_pane_cp6_ParamLimits

0xdc37,	// (0x0004f71e) button_value_adjust_pane_cp6

0xdd51,	// (0x0004f838) settings_code_pane_cp_ParamLimits

0xdd51,	// (0x0004f838) settings_code_pane_cp

0xd48c,	// (0x0004ef73) cell_touch_pane_g1

0xd48c,	// (0x0004ef73) cell_touch_pane_g2

0x0001,

0xf6e1,	// (0x000511c8) cell_touch_pane_g

0xdec5,	// (0x0004f9ac) cell_touch_pane_cp_ParamLimits

0xdec5,	// (0x0004f9ac) cell_touch_pane_cp

0xdee1,	// (0x0004f9c8) cell_touch_pane_ParamLimits

0xdee1,	// (0x0004f9c8) cell_touch_pane

0xd48c,	// (0x0004ef73) scroll_sc2_down_pane_g1

0xd48c,	// (0x0004ef73) scroll_sc2_up_pane_g1

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp4_vc

0x6cc7,	// (0x000487ae) list_set_graphic_pane_vc_g1_ParamLimits

0x6cc7,	// (0x000487ae) list_set_graphic_pane_vc_g1

0x6cd3,	// (0x000487ba) list_set_graphic_pane_vc_g2_ParamLimits

0x6cd3,	// (0x000487ba) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x000514bf) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x000514bf) list_set_graphic_pane_vc_g

0x6cdf,	// (0x000487c6) text_primary_small_cp13_vc_ParamLimits

0x6cdf,	// (0x000487c6) text_primary_small_cp13_vc

0x6cf7,	// (0x000487de) list_set_graphic_pane_vc_ParamLimits

0x6cf7,	// (0x000487de) list_set_graphic_pane_vc

0xd496,	// (0x0004ef7d) input_focus_pane_cp2_vc

0xd48c,	// (0x0004ef73) setting_code_pane_vc_g1

0x346b,	// (0x00044f52) setting_code_pane_vc_t1

0x6d0a,	// (0x000487f1) set_text_pane_vc_t1_ParamLimits

0x6d0a,	// (0x000487f1) set_text_pane_vc_t1

0xd496,	// (0x0004ef7d) input_focus_pane_cp1_vc

0x6d26,	// (0x0004880d) list_set_text_pane_vc

0xd48c,	// (0x0004ef73) setting_text_pane_vc_g1

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp2_vc

0x3462,	// (0x00044f49) setting_slider_graphic_pane_vc_g1

0x6d30,	// (0x00048817) setting_slider_graphic_pane_vc_t1

0x6d40,	// (0x00048827) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x000514c4) setting_slider_graphic_pane_vc_t

0x6d50,	// (0x00048837) slider_set_pane_cp_vc

0x6d58,	// (0x0004883f) slider_set_pane_vc_g1

0x6d61,	// (0x00048848) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x000514c9) slider_set_pane_vc_g

0x3d05,	// (0x000457ec) set_opt_bg_pane_g1_copy1

0x3d0d,	// (0x000457f4) set_opt_bg_pane_g2_copy1

0x6d8d,	// (0x00048874) set_opt_bg_pane_g3_copy1

0x3d1d,	// (0x00045804) set_opt_bg_pane_g4_copy1

0x3d25,	// (0x0004580c) set_opt_bg_pane_g5_copy1

0x3d2d,	// (0x00045814) set_opt_bg_pane_g6_copy1

0x6d97,	// (0x0004887e) set_opt_bg_pane_g7_copy1

0x6da1,	// (0x00048888) set_opt_bg_pane_g8_copy1

0x6dab,	// (0x00048892) set_opt_bg_pane_g9_copy1

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp_vc

0x6db5,	// (0x0004889c) setting_slider_pane_vc_t1

0x6dc4,	// (0x000488ab) setting_slider_pane_vc_t2

0x6dd4,	// (0x000488bb) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x000514d8) setting_slider_pane_vc_t

0x6de4,	// (0x000488cb) slider_set_pane_vc

0x1d80,	// (0x00043867) volume_set_pane_vc_g1

0x1d89,	// (0x00043870) volume_set_pane_vc_g2

0x1d92,	// (0x00043879) volume_set_pane_vc_g3

0x1d9b,	// (0x00043882) volume_set_pane_vc_g4

0x1da4,	// (0x0004388b) volume_set_pane_vc_g5

0x1dad,	// (0x00043894) volume_set_pane_vc_g6

0x1db6,	// (0x0004389d) volume_set_pane_vc_g7

0x1dbf,	// (0x000438a6) volume_set_pane_vc_g8

0x1dc8,	// (0x000438af) volume_set_pane_vc_g9

0x1dd1,	// (0x000438b8) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x00051376) volume_set_pane_vc_g

0x6dec,	// (0x000488d3) volume_set_pane_vc

0x6df4,	// (0x000488db) button_value_adjust_pane_cp1_vc

0x6dfe,	// (0x000488e5) list_highlight_pane_cp2_vc

0x6e07,	// (0x000488ee) list_set_pane_vc_ParamLimits

0x6e07,	// (0x000488ee) list_set_pane_vc

0x6e65,	// (0x0004894c) main_pane_set_vc_t1_ParamLimits

0x6e65,	// (0x0004894c) main_pane_set_vc_t1

0x6e7a,	// (0x00048961) main_pane_set_vc_t2_ParamLimits

0x6e7a,	// (0x00048961) main_pane_set_vc_t2

0x6e8c,	// (0x00048973) main_pane_set_vc_t3_ParamLimits

0x6e8c,	// (0x00048973) main_pane_set_vc_t3

0x6ea0,	// (0x00048987) main_pane_set_vc_t4_ParamLimits

0x6ea0,	// (0x00048987) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x000514df) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x000514df) main_pane_set_vc_t

0x6eb4,	// (0x0004899b) setting_code_pane_vc_ParamLimits

0x6eb4,	// (0x0004899b) setting_code_pane_vc

0x6ec5,	// (0x000489ac) setting_slider_graphic_pane_vc

0x6ec5,	// (0x000489ac) setting_slider_pane_vc

0x6ec5,	// (0x000489ac) setting_text_pane_vc

0x6ec5,	// (0x000489ac) setting_volume_pane_vc

0x6ecf,	// (0x000489b6) scroll_pane_cp121_vc

0x3c93,	// (0x0004577a) set_content_pane_vc

0x6ed7,	// (0x000489be) button_value_adjust_pane_g1

0x6ee0,	// (0x000489c7) button_value_adjust_pane_g2

0x0001,

0xfa52,	// (0x00051539) button_value_adjust_pane_g

0x6ee9,	// (0x000489d0) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ee9,	// (0x000489d0) form_field_slider_wide_pane_vc_t1

0x6efd,	// (0x000489e4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6efd,	// (0x000489e4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa57,	// (0x0005153e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa57,	// (0x0005153e) form_field_slider_wide_pane_vc_t

0x369b,	// (0x00045182) input_focus_pane_cp10_vc_ParamLimits

0x369b,	// (0x00045182) input_focus_pane_cp10_vc

0x6f2b,	// (0x00048a12) slider_cont_pane_cp1_vc_ParamLimits

0x6f2b,	// (0x00048a12) slider_cont_pane_cp1_vc

0x6f3d,	// (0x00048a24) slider_form_pane_g1_cp2

0x6d61,	// (0x00048848) slider_form_pane_g2_cp2

0x6f6a,	// (0x00048a51) form_field_slider_pane_vc_t3

0x6f78,	// (0x00048a5f) form_field_slider_pane_vc_t4

0x6f86,	// (0x00048a6d) slider_form_pane_vc_ParamLimits

0x6f86,	// (0x00048a6d) slider_form_pane_vc

0x6f93,	// (0x00048a7a) form_field_slider_pane_vc_t1_ParamLimits

0x6f93,	// (0x00048a7a) form_field_slider_pane_vc_t1

0x6efd,	// (0x000489e4) form_field_slider_pane_vc_t2_ParamLimits

0x6efd,	// (0x000489e4) form_field_slider_pane_vc_t2

0x0001,

0xfa69,	// (0x00051550) form_field_slider_pane_vc_t_ParamLimits

0xfa69,	// (0x00051550) form_field_slider_pane_vc_t

0x369b,	// (0x00045182) input_focus_pane_cp9_vc_ParamLimits

0x369b,	// (0x00045182) input_focus_pane_cp9_vc

0x6faf,	// (0x00048a96) slider_cont_pane_vc_ParamLimits

0x6faf,	// (0x00048a96) slider_cont_pane_vc

0x6fc3,	// (0x00048aaa) list_form_graphic_pane_cp_vc_ParamLimits

0x6fc3,	// (0x00048aaa) list_form_graphic_pane_cp_vc

0x52a7,	// (0x00046d8e) form_field_popup_wide_pane_vc_g1

0x6fd8,	// (0x00048abf) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fd8,	// (0x00048abf) form_field_popup_wide_pane_vc_t1

0x3cb9,	// (0x000457a0) input_focus_pane_cp8_vc_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_cp8_vc

0x701d,	// (0x00048b04) list_form_wide_pane_vc_ParamLimits

0x701d,	// (0x00048b04) list_form_wide_pane_vc

0x7029,	// (0x00048b10) list_form_graphic_pane_vc_g1

0x7031,	// (0x00048b18) list_form_graphic_pane_vc_t1_ParamLimits

0x7031,	// (0x00048b18) list_form_graphic_pane_vc_t1

0x3420,	// (0x00044f07) list_highlight_pane_cp5_vc_ParamLimits

0x3420,	// (0x00044f07) list_highlight_pane_cp5_vc

0x704d,	// (0x00048b34) list_form_graphic_pane_vc_ParamLimits

0x704d,	// (0x00048b34) list_form_graphic_pane_vc

0x52a7,	// (0x00046d8e) form_field_popup_pane_vc_g1

0x7063,	// (0x00048b4a) form_field_popup_pane_vc_t1_ParamLimits

0x7063,	// (0x00048b4a) form_field_popup_pane_vc_t1

0x3cb9,	// (0x000457a0) input_focus_pane_cp7_vc_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_cp7_vc

0x707a,	// (0x00048b61) list_form_pane_vc_ParamLimits

0x707a,	// (0x00048b61) list_form_pane_vc

0x7086,	// (0x00048b6d) data_form_pane_vc_t1_ParamLimits

0x7086,	// (0x00048b6d) data_form_pane_vc_t1

0x3d05,	// (0x000457ec) input_focus_pane_vc_g1

0x3d0d,	// (0x000457f4) input_focus_pane_vc_g2

0x3d15,	// (0x000457fc) input_focus_pane_vc_g3

0x3d1d,	// (0x00045804) input_focus_pane_vc_g4

0x3d25,	// (0x0004580c) input_focus_pane_vc_g5

0x3d2d,	// (0x00045814) input_focus_pane_vc_g6

0x3d35,	// (0x0004581c) input_focus_pane_vc_g7

0x3d3d,	// (0x00045824) input_focus_pane_vc_g8

0x3d45,	// (0x0004582c) input_focus_pane_vc_g9

0xd48c,	// (0x0004ef73) input_focus_pane_vc_g10

0x0009,

0xf66a,	// (0x00051151) input_focus_pane_vc_g

0x529b,	// (0x00046d82) data_form_pane_vc_ParamLimits

0x529b,	// (0x00046d82) data_form_pane_vc

0x52a7,	// (0x00046d8e) form_field_data_pane_vc_g1

0x70a1,	// (0x00048b88) form_field_data_pane_vc_t1_ParamLimits

0x70a1,	// (0x00048b88) form_field_data_pane_vc_t1

0x3cb9,	// (0x000457a0) input_focus_pane_vc_ParamLimits

0x3cb9,	// (0x000457a0) input_focus_pane_vc

0x70bb,	// (0x00048ba2) button_value_adjust_pane_cp3_vc

0x70c3,	// (0x00048baa) button_value_adjust_pane_cp5_vc

0x70cb,	// (0x00048bb2) form_field_data_pane_vc_ParamLimits

0x70cb,	// (0x00048bb2) form_field_data_pane_vc

0x70e2,	// (0x00048bc9) form_field_data_pane_vc_cp2

0x70ea,	// (0x00048bd1) form_field_data_wide_pane_vc_ParamLimits

0x70ea,	// (0x00048bd1) form_field_data_wide_pane_vc

0x7100,	// (0x00048be7) form_field_data_wide_pane_vc_cp2

0x7108,	// (0x00048bef) form_field_popup_pane_vc_ParamLimits

0x7108,	// (0x00048bef) form_field_popup_pane_vc

0x711f,	// (0x00048c06) form_field_popup_wide_pane_vc_ParamLimits

0x711f,	// (0x00048c06) form_field_popup_wide_pane_vc

0x7135,	// (0x00048c1c) form_field_slider_pane_vc_ParamLimits

0x7135,	// (0x00048c1c) form_field_slider_pane_vc

0x7148,	// (0x00048c2f) form_field_slider_wide_pane_vc_ParamLimits

0x7148,	// (0x00048c2f) form_field_slider_wide_pane_vc

0xdeff,	// (0x0004f9e6) grid_touch_1_pane_ParamLimits

0xdeff,	// (0x0004f9e6) grid_touch_1_pane

0xdf13,	// (0x0004f9fa) grid_touch_2_pane_ParamLimits

0xdf13,	// (0x0004f9fa) grid_touch_2_pane

0x722c,	// (0x00048d13) touch_pane_g1_ParamLimits

0x722c,	// (0x00048d13) touch_pane_g1

0x717f,	// (0x00048c66) cell_app_pane_cp_wide_ParamLimits

0x717f,	// (0x00048c66) cell_app_pane_cp_wide

0x7190,	// (0x00048c77) grid_popup_fast_wide_pane_ParamLimits

0x7190,	// (0x00048c77) grid_popup_fast_wide_pane

0x71a4,	// (0x00048c8b) scroll_pane_cp19_ParamLimits

0x71a4,	// (0x00048c8b) scroll_pane_cp19

0xd496,	// (0x0004ef7d) bg_popup_window_pane_cp20

0x71b8,	// (0x00048c9f) listscroll_popup_fast_wide_pane

0xdf3d,	// (0x0004fa24) grid_indicator_nsta_pane

0x71d2,	// (0x00048cb9) clock_nsta_pane_g1

0x71db,	// (0x00048cc2) clock_nsta_pane_t1

0xdf49,	// (0x0004fa30) cell_indicator_nsta_pane_ParamLimits

0xdf49,	// (0x0004fa30) cell_indicator_nsta_pane

0x722c,	// (0x00048d13) cell_indicator_nsta_pane_g1

0xdf64,	// (0x0004fa4b) cell_indicator_nsta_pane_g2

0x0001,

0xfa7a,	// (0x00051561) cell_indicator_nsta_pane_g

0x724c,	// (0x00048d33) clock_nsta_pane_cp

0x7255,	// (0x00048d3c) indicator_nsta_pane_cp

0x725f,	// (0x00048d46) nsta_clock_indic_pane_g1

0x34e9,	// (0x00044fd0) grid_indicator_pane

0x4252,	// (0x00045d39) scroll_pane_cp29

0x1339,	// (0x00042e20) indicator_nsta_pane_cp2_ParamLimits

0x1339,	// (0x00042e20) indicator_nsta_pane_cp2

0x3420,	// (0x00044f07) main_apps_wheel_pane

0x54b6,	// (0x00046f9d) form_midp_field_text_pane_ParamLimits

0x5601,	// (0x000470e8) scroll_bar_cp050_ParamLimits

0x72b8,	// (0x00048d9f) cell_indicator_pane_ParamLimits

0x72b8,	// (0x00048d9f) cell_indicator_pane

0x72cf,	// (0x00048db6) cell_indicator_pane_g1

0xdf71,	// (0x0004fa58) grid_wheel_folder_pane_ParamLimits

0xdf71,	// (0x0004fa58) grid_wheel_folder_pane

0xdf7f,	// (0x0004fa66) list_wheel_apps_pane_ParamLimits

0xdf7f,	// (0x0004fa66) list_wheel_apps_pane

0xdf8d,	// (0x0004fa74) main_apps_wheel_pane_g1_ParamLimits

0xdf8d,	// (0x0004fa74) main_apps_wheel_pane_g1

0xdf99,	// (0x0004fa80) main_apps_wheel_pane_g2_ParamLimits

0xdf99,	// (0x0004fa80) main_apps_wheel_pane_g2

0x0001,

0xfa96,	// (0x0005157d) main_apps_wheel_pane_g_ParamLimits

0xfa96,	// (0x0005157d) main_apps_wheel_pane_g

0xdfa7,	// (0x0004fa8e) main_apps_wheel_pane_t1_ParamLimits

0xdfa7,	// (0x0004fa8e) main_apps_wheel_pane_t1

0xdfbb,	// (0x0004faa2) list_wheel_apps_pane_g1

0xdfc3,	// (0x0004faaa) list_wheel_apps_pane_g2

0xdfcb,	// (0x0004fab2) list_wheel_apps_pane_g3

0xdfd3,	// (0x0004faba) list_wheel_apps_pane_g4

0xdfdd,	// (0x0004fac4) list_wheel_apps_pane_g5

0x0004,

0xfa9b,	// (0x00051582) list_wheel_apps_pane_g

0x47f2,	// (0x000462d9) navi_icon_text_pane

0xd5f6,	// (0x0004f0dd) aid_fill_nsta

0x7394,	// (0x00048e7b) navi_icon_text_pane_g1

0x73a0,	// (0x00048e87) navi_icon_text_pane_t1

0x4690,	// (0x00046177) list_set_graphic_pane_t1_ParamLimits

0x4690,	// (0x00046177) list_set_graphic_pane_t1

0x5d6c,	// (0x00047853) popup_midp_note_alarm_window_t6_ParamLimits

0x5d6c,	// (0x00047853) popup_midp_note_alarm_window_t6

0x5d7e,	// (0x00047865) popup_midp_note_alarm_window_t7_ParamLimits

0x5d7e,	// (0x00047865) popup_midp_note_alarm_window_t7

0x5d90,	// (0x00047877) popup_midp_note_alarm_window_t8_ParamLimits

0x5d90,	// (0x00047877) popup_midp_note_alarm_window_t8

0x5da2,	// (0x00047889) popup_midp_note_alarm_window_t9_ParamLimits

0x5da2,	// (0x00047889) popup_midp_note_alarm_window_t9

0x5db4,	// (0x0004789b) popup_midp_note_alarm_window_t10_ParamLimits

0x5db4,	// (0x0004789b) popup_midp_note_alarm_window_t10

0x5dc6,	// (0x000478ad) popup_midp_note_alarm_window_t11_ParamLimits

0x5dc6,	// (0x000478ad) popup_midp_note_alarm_window_t11

0x5dd8,	// (0x000478bf) scroll_pane_cp17_ParamLimits

0x5dd8,	// (0x000478bf) scroll_pane_cp17

0x1d80,	// (0x00043867) volume_small_pane_cp_g1

0x216c,	// (0x00043c53) volume_small_pane_cp_g2

0x2175,	// (0x00043c5c) volume_small_pane_cp_g3

0x217e,	// (0x00043c65) volume_small_pane_cp_g4

0x2187,	// (0x00043c6e) volume_small_pane_cp_g5

0x2190,	// (0x00043c77) volume_small_pane_cp_g6

0x2199,	// (0x00043c80) volume_small_pane_cp_g7

0x21a2,	// (0x00043c89) volume_small_pane_cp_g8

0x21ab,	// (0x00043c92) volume_small_pane_cp_g9

0x21b4,	// (0x00043c9b) volume_small_pane_cp_g10

0x4a50,	// (0x00046537) midp_ticker_pane_g1_ParamLimits

0x4a5c,	// (0x00046543) midp_ticker_pane_g2_ParamLimits

0xf736,	// (0x0005121d) midp_ticker_pane_g_ParamLimits

0x4a68,	// (0x0004654f) midp_ticker_pane_t1_ParamLimits

0xd61a,	// (0x0004f101) aid_fill_nsta_2

0x55ed,	// (0x000470d4) list_form2_midp_pane

0x6721,	// (0x00048208) midp_editing_number_pane_ParamLimits

0x6730,	// (0x00048217) midp_ticker_pane_ParamLimits

0x73b2,	// (0x00048e99) form2_midp_field_pane

0x73d6,	// (0x00048ebd) scroll_pane_cp51

0x73f6,	// (0x00048edd) form2_midp_button_pane_ParamLimits

0x73f6,	// (0x00048edd) form2_midp_button_pane

0x7408,	// (0x00048eef) form2_midp_content_pane_ParamLimits

0x7408,	// (0x00048eef) form2_midp_content_pane

0x7422,	// (0x00048f09) form2_midp_field_choice_group_pane

0x742a,	// (0x00048f11) form2_midp_field_pane_g1

0x7432,	// (0x00048f19) form2_midp_field_pane_g2

0x743a,	// (0x00048f21) form2_midp_field_pane_g3

0x7442,	// (0x00048f29) form2_midp_field_pane_g4

0x0003,

0xfac0,	// (0x000515a7) form2_midp_field_pane_g

0x744a,	// (0x00048f31) form2_midp_gauge_slider_pane

0x7452,	// (0x00048f39) form2_midp_gauge_wait_pane

0x745a,	// (0x00048f41) form2_midp_image_pane_ParamLimits

0x745a,	// (0x00048f41) form2_midp_image_pane

0x7475,	// (0x00048f5c) form2_midp_label_pane_ParamLimits

0x7475,	// (0x00048f5c) form2_midp_label_pane

0xe010,	// (0x0004faf7) form2_midp_label_pane_cp_ParamLimits

0xe010,	// (0x0004faf7) form2_midp_label_pane_cp

0x74af,	// (0x00048f96) form2_midp_string_pane_ParamLimits

0x74af,	// (0x00048f96) form2_midp_string_pane

0xbbca,	// (0x0004d6b1) form2_midp_text_pane_ParamLimits

0xbbca,	// (0x0004d6b1) form2_midp_text_pane

0x74c1,	// (0x00048fa8) form2_midp_time_pane

0x74d1,	// (0x00048fb8) input_focus_pane_cp51_ParamLimits

0x74d1,	// (0x00048fb8) input_focus_pane_cp51

0x74e9,	// (0x00048fd0) form2_midp_label_pane_t1_ParamLimits

0x74e9,	// (0x00048fd0) form2_midp_label_pane_t1

0xbbe3,	// (0x0004d6ca) form2_mdip_text_pane_t1_ParamLimits

0xbbe3,	// (0x0004d6ca) form2_mdip_text_pane_t1

0x0892,	// (0x00042379) form2_midp_time_pane_t1

0x7532,	// (0x00049019) form2_midp_gauge_slider_pane_t1

0xe02f,	// (0x0004fb16) form2_midp_gauge_slider_pane_t2

0xe041,	// (0x0004fb28) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac9,	// (0x000515b0) form2_midp_gauge_slider_pane_t

0x7568,	// (0x0004904f) form2_midp_slider_pane

0x7574,	// (0x0004905b) form2_midp_gauge_wait_pane_t1

0x7582,	// (0x00049069) form2_midp_wait_pane_ParamLimits

0x7582,	// (0x00049069) form2_midp_wait_pane

0xe053,	// (0x0004fb3a) list_single_2graphic_pane_cp4_ParamLimits

0xe053,	// (0x0004fb3a) list_single_2graphic_pane_cp4

0xda34,	// (0x0004f51b) list_single_midp_graphic_pane_cp_ParamLimits

0xda34,	// (0x0004f51b) list_single_midp_graphic_pane_cp

0xd496,	// (0x0004ef7d) list_highlight_pane_cp20

0x75d1,	// (0x000490b8) list_single_2graphic_pane_g1_cp4

0x75d9,	// (0x000490c0) list_single_2graphic_pane_g2_cp4

0x75e1,	// (0x000490c8) list_single_2graphic_pane_t1_cp4

0x3420,	// (0x00044f07) list_highlight_pane_cp21

0x75f0,	// (0x000490d7) list_single_midp_graphic_pane_g4_cp

0x75ff,	// (0x000490e6) list_single_midp_graphic_pane_t1_cp

0xe067,	// (0x0004fb4e) form2_mdip_string_pane_t1_ParamLimits

0xe067,	// (0x0004fb4e) form2_mdip_string_pane_t1

0xd496,	// (0x0004ef7d) bg_wml_button_pane_cp2

0xd48c,	// (0x0004ef73) form2_midp_image_pane_g1

0x1043,	// (0x00042b2a) list_double_large_graphic_pane_g5_ParamLimits

0x1043,	// (0x00042b2a) list_double_large_graphic_pane_g5

0xd4e8,	// (0x0004efcf) midp_form_pane_ParamLimits

0x3420,	// (0x00044f07) main_apps_wheel_pane_ParamLimits

0xc9bd,	// (0x0004e4a4) popup_preview_window_ParamLimits

0xc9bd,	// (0x0004e4a4) popup_preview_window

0x1bdb,	// (0x000436c2) popup_touch_info_window_ParamLimits

0x1bdb,	// (0x000436c2) popup_touch_info_window

0x1bf9,	// (0x000436e0) popup_touch_menu_window_ParamLimits

0x1bf9,	// (0x000436e0) popup_touch_menu_window

0xd482,	// (0x0004ef69) bg_popup_sub_pane_cp6

0x770d,	// (0x000491f4) list_touch_menu_pane

0x7715,	// (0x000491fc) list_single_touch_menu_pane_ParamLimits

0x7715,	// (0x000491fc) list_single_touch_menu_pane

0x772b,	// (0x00049212) list_single_touch_menu_pane_t1

0x3420,	// (0x00044f07) bg_popup_sub_pane_cp7_ParamLimits

0x3420,	// (0x00044f07) bg_popup_sub_pane_cp7

0x5621,	// (0x00047108) heading_sub_pane

0x7739,	// (0x00049220) list_touch_info_pane_ParamLimits

0x7739,	// (0x00049220) list_touch_info_pane

0x7749,	// (0x00049230) list_single_touch_info_pane_ParamLimits

0x7749,	// (0x00049230) list_single_touch_info_pane

0x775b,	// (0x00049242) list_single_touch_info_pane_t1

0x7769,	// (0x00049250) list_single_touch_info_pane_t2

0x0001,

0xfad7,	// (0x000515be) list_single_touch_info_pane_t

0x4973,	// (0x0004645a) bg_popup_heading_pane_cp

0x7777,	// (0x0004925e) heading_sub_pane_t1

0x5235,	// (0x00046d1c) bg_popup_preview_window_pane_cp_ParamLimits

0x5235,	// (0x00046d1c) bg_popup_preview_window_pane_cp

0x5621,	// (0x00047108) heading_preview_pane

0x7739,	// (0x00049220) list_preview_pane_ParamLimits

0x7739,	// (0x00049220) list_preview_pane

0x7785,	// (0x0004926c) popup_preview_window_g1

0x7749,	// (0x00049230) list_single_preview_pane_ParamLimits

0x7749,	// (0x00049230) list_single_preview_pane

0x778d,	// (0x00049274) list_single_preview_pane_g1

0x7795,	// (0x0004927c) list_single_preview_pane_t1

0x775b,	// (0x00049242) list_single_preview_pane_t2

0x0001,

0xfadc,	// (0x000515c3) list_single_preview_pane_t

0x77a3,	// (0x0004928a) bg_popup_heading_pane_cp2_ParamLimits

0x77a3,	// (0x0004928a) bg_popup_heading_pane_cp2

0x77b9,	// (0x000492a0) heading_preview_pane_g1

0x77c1,	// (0x000492a8) heading_preview_pane_t1_ParamLimits

0x77c1,	// (0x000492a8) heading_preview_pane_t1

0x350c,	// (0x00044ff3) soft_indicator_pane_t1_ParamLimits

0x3c20,	// (0x00045707) scroll_pane_ParamLimits

0x414b,	// (0x00045c32) scroll_sc2_left_pane

0x4154,	// (0x00045c3b) scroll_sc2_right_pane

0x4173,	// (0x00045c5a) scroll_bg_pane_g1_ParamLimits

0x4188,	// (0x00045c6f) scroll_bg_pane_g2_ParamLimits

0x41a0,	// (0x00045c87) scroll_bg_pane_g3_ParamLimits

0xf6c1,	// (0x000511a8) scroll_bg_pane_g_ParamLimits

0x4173,	// (0x00045c5a) scroll_handle_pane_g1_ParamLimits

0x41c2,	// (0x00045ca9) scroll_handle_pane_g2_ParamLimits

0x41a0,	// (0x00045c87) scroll_handle_pane_g3_ParamLimits

0xf6c8,	// (0x000511af) scroll_handle_pane_g_ParamLimits

0x169f,	// (0x00043186) popup_choice_list_window_ParamLimits

0x169f,	// (0x00043186) popup_choice_list_window

0x510b,	// (0x00046bf2) choice_list_pane

0x518d,	// (0x00046c74) cell_toolbar_pane_t1

0x51b5,	// (0x00046c9c) toolbar_button_pane_ParamLimits

0x6292,	// (0x00047d79) ai_gene_pane_1_t2_ParamLimits

0x6292,	// (0x00047d79) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x000513d2) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x000513d2) ai_gene_pane_1_t

0x77de,	// (0x000492c5) scroll_sc2_left_pane_g1

0x77de,	// (0x000492c5) scroll_sc2_right_pane_g1

0x4c97,	// (0x0004677e) bg_popup_sub_pane_cp10

0x77e8,	// (0x000492cf) list_choice_list_pane

0x7801,	// (0x000492e8) list_single_choice_list_pane_ParamLimits

0x7801,	// (0x000492e8) list_single_choice_list_pane

0x7814,	// (0x000492fb) list_single_choice_list_pane_g1

0x3e51,	// (0x00045938) list_single_choice_list_pane_t1_ParamLimits

0x3e51,	// (0x00045938) list_single_choice_list_pane_t1

0x781c,	// (0x00049303) choice_list_pane_g1

0x7824,	// (0x0004930b) choice_list_pane_t1

0xd482,	// (0x0004ef69) input_focus_pane_cp11

0x4028,	// (0x00045b0f) title_pane_stacon_g2_ParamLimits

0x4028,	// (0x00045b0f) title_pane_stacon_g2

0x0002,

0xf6a7,	// (0x0005118e) title_pane_stacon_g_ParamLimits

0xf6a7,	// (0x0005118e) title_pane_stacon_g

0x4973,	// (0x0004645a) cursor_press_pane

0xc664,	// (0x0004e14b) popup_fep_hwr_window_ParamLimits

0xc664,	// (0x0004e14b) popup_fep_hwr_window

0x17c5,	// (0x000432ac) popup_fep_vkb_window_ParamLimits

0x17c5,	// (0x000432ac) popup_fep_vkb_window

0x7832,	// (0x00049319) cursor_press_pane_g1

0x0002,

0xfb05,	// (0x000515ec) fep_vkb_side_pane_g_ParamLimits

0x21f6,	// (0x00043cdd) fep_hwr_candidate_pane_ParamLimits

0x21f6,	// (0x00043cdd) fep_hwr_candidate_pane

0x2220,	// (0x00043d07) fep_hwr_side_pane_ParamLimits

0x2220,	// (0x00043d07) fep_hwr_side_pane

0x2240,	// (0x00043d27) fep_hwr_top_pane_ParamLimits

0x2240,	// (0x00043d27) fep_hwr_top_pane

0x2258,	// (0x00043d3f) fep_hwr_write_pane_ParamLimits

0x2258,	// (0x00043d3f) fep_hwr_write_pane

0xfb05,	// (0x000515ec) fep_vkb_side_pane_g

0x783a,	// (0x00049321) fep_hwr_top_pane_g1

0x784c,	// (0x00049333) fep_hwr_top_pane_g2

0x2284,	// (0x00043d6b) fep_hwr_top_pane_g3

0x0002,

0xfae1,	// (0x000515c8) fep_hwr_top_pane_g

0x2299,	// (0x00043d80) fep_hwr_top_text_pane

0x4342,	// (0x00045e29) fep_hwr_top_text_pane_g1

0x7882,	// (0x00049369) fep_hwr_top_text_pane_t1

0x238f,	// (0x00043e76) fep_hwr_candidate_pane_g1

0x7ad5,	// (0x000495bc) fep_vkb_keypad_pane_g3_ParamLimits

0x7ad5,	// (0x000495bc) fep_vkb_keypad_pane_g3

0x7afd,	// (0x000495e4) fep_vkb_keypad_pane_g4_ParamLimits

0x7afd,	// (0x000495e4) fep_vkb_keypad_pane_g4

0x7b6c,	// (0x00049653) fep_vkb_bottom_pane_g2_ParamLimits

0x7b6c,	// (0x00049653) fep_vkb_bottom_pane_g2

0x0001,

0xfb0c,	// (0x000515f3) fep_vkb_bottom_pane_g_ParamLimits

0xfb0c,	// (0x000515f3) fep_vkb_bottom_pane_g

0x77de,	// (0x000492c5) cell_vkb_side_pane_g2

0x0001,

0xfb16,	// (0x000515fd) cell_vkb_side_pane_g

0x7bf7,	// (0x000496de) cell_vkb_side_pane_t1

0x7c05,	// (0x000496ec) cell_vkb_side_pane_t1_copy1

0x77de,	// (0x000492c5) bg_fep_vkb_candidate_pane_g2

0x7d31,	// (0x00049818) cell_vkb_candidate_pane_ParamLimits

0x7890,	// (0x00049377) aid_size_cell_vkb_ParamLimits

0x7890,	// (0x00049377) aid_size_cell_vkb

0x7d31,	// (0x00049818) cell_vkb_candidate_pane

0x23a9,	// (0x00043e90) bg_popup_fep_shadow_pane_g1

0xe111,	// (0x0004fbf8) fep_vkb_bottom_pane_ParamLimits

0xe111,	// (0x0004fbf8) fep_vkb_bottom_pane

0x7954,	// (0x0004943b) fep_vkb_candidate_pane_ParamLimits

0x7954,	// (0x0004943b) fep_vkb_candidate_pane

0xe136,	// (0x0004fc1d) fep_vkb_keypad_pane_ParamLimits

0xe136,	// (0x0004fc1d) fep_vkb_keypad_pane

0xe172,	// (0x0004fc59) fep_vkb_side_pane_ParamLimits

0xe172,	// (0x0004fc59) fep_vkb_side_pane

0xe1ae,	// (0x0004fc95) fep_vkb_top_pane_ParamLimits

0xe1ae,	// (0x0004fc95) fep_vkb_top_pane

0x7a2e,	// (0x00049515) fep_vkb_top_pane_g1_ParamLimits

0x7a2e,	// (0x00049515) fep_vkb_top_pane_g1

0x7a3d,	// (0x00049524) fep_vkb_top_pane_g2_ParamLimits

0x7a3d,	// (0x00049524) fep_vkb_top_pane_g2

0x7a4c,	// (0x00049533) fep_vkb_top_pane_g3_ParamLimits

0x7a4c,	// (0x00049533) fep_vkb_top_pane_g3

0x0003,

0xfafc,	// (0x000515e3) fep_vkb_top_pane_g_ParamLimits

0xfafc,	// (0x000515e3) fep_vkb_top_pane_g

0x7a6a,	// (0x00049551) fep_vkb_top_text_pane_ParamLimits

0x7a6a,	// (0x00049551) fep_vkb_top_text_pane

0xe1ea,	// (0x0004fcd1) fep_vkb_side_pane_g1_ParamLimits

0xe1ea,	// (0x0004fcd1) fep_vkb_side_pane_g1

0x7ac4,	// (0x000495ab) grid_vkb_side_pane_ParamLimits

0x7ac4,	// (0x000495ab) grid_vkb_side_pane

0x23b1,	// (0x00043e98) bg_popup_fep_shadow_pane_g2

0x23ba,	// (0x00043ea1) bg_popup_fep_shadow_pane_g3

0x23c2,	// (0x00043ea9) bg_popup_fep_shadow_pane_g4

0x23cb,	// (0x00043eb2) bg_popup_fep_shadow_pane_g5

0x23d5,	// (0x00043ebc) bg_popup_fep_shadow_pane_g6

0x23dd,	// (0x00043ec4) bg_popup_fep_shadow_pane_g7

0x3d25,	// (0x0004580c) bg_popup_fep_shadow_pane_g8

0x7b1b,	// (0x00049602) grid_vkb_keypad_number_pane_ParamLimits

0x7b1b,	// (0x00049602) grid_vkb_keypad_number_pane

0x7b2b,	// (0x00049612) grid_vkb_keypad_pane_ParamLimits

0x7b2b,	// (0x00049612) grid_vkb_keypad_pane

0x7b51,	// (0x00049638) fep_vkb_bottom_pane_g1_ParamLimits

0x7b51,	// (0x00049638) fep_vkb_bottom_pane_g1

0x7b7a,	// (0x00049661) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b7a,	// (0x00049661) grid_vkb_keypad_bottom_left_pane

0x7b8f,	// (0x00049676) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b8f,	// (0x00049676) grid_vkb_keypad_bottom_right_pane

0x7ba4,	// (0x0004968b) fep_vkb_top_text_pane_g1

0xe231,	// (0x0004fd18) fep_vkb_top_text_pane_t1

0xe243,	// (0x0004fd2a) cell_vkb_side_pane_ParamLimits

0xe243,	// (0x0004fd2a) cell_vkb_side_pane

0x77de,	// (0x000492c5) cell_vkb_side_pane_g1

0x7c13,	// (0x000496fa) cell_vkb_keypad_pane_ParamLimits

0x7c13,	// (0x000496fa) cell_vkb_keypad_pane

0x7c88,	// (0x0004976f) cell_vkb_keypad_pane_g1

0x0008,

0xfb29,	// (0x00051610) bg_popup_fep_shadow_pane_g

0x77de,	// (0x000492c5) cell_hwr_side_pane_g1

0x77de,	// (0x000492c5) cell_hwr_side_pane_g2

0x7c92,	// (0x00049779) cell_vkb_keypad_pane_t1

0xe259,	// (0x0004fd40) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe259,	// (0x0004fd40) cell_vkb_keypad_bottom_left_pane

0xe26e,	// (0x0004fd55) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe26e,	// (0x0004fd55) cell_vkb_keypad_bottom_right_pane

0x77de,	// (0x000492c5) cell_vkb_keypad_bottom_left_pane_g1

0x77de,	// (0x000492c5) cell_vkb_keypad_bottom_right_pane_g1

0x7cf6,	// (0x000497dd) cell_vkb_keypad_number_pane_ParamLimits

0x7cf6,	// (0x000497dd) cell_vkb_keypad_number_pane

0x7d15,	// (0x000497fc) cell_vkb_keypad_number_pane_g1

0x7d1f,	// (0x00049806) cell_vkb_keypad_number_pane_g2

0x7d28,	// (0x0004980f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1b,	// (0x00051602) cell_vkb_keypad_number_pane_g

0x7c92,	// (0x00049779) cell_vkb_keypad_number_pane_t1

0x7d4c,	// (0x00049833) fep_vkb_candidate_pane_g1

0x0001,

0xfb16,	// (0x000515fd) cell_hwr_side_pane_g

0x7d65,	// (0x0004984c) cell_hwr_side_pane_t1

0x23ef,	// (0x00043ed6) cell_hwr_side_pane_t1_copy1

0x7a5c,	// (0x00049543) cell_hwr_candidate_pane_g1

0x23fd,	// (0x00043ee4) cell_hwr_candidate_pane_t1

0x77de,	// (0x000492c5) cell_vkb_candidate_pane_g2

0x7deb,	// (0x000498d2) cell_vkb_candidate_pane_t1

0x21bd,	// (0x00043ca4) bg_popup_fep_shadow_pane_ParamLimits

0x21bd,	// (0x00043ca4) bg_popup_fep_shadow_pane

0xe0d7,	// (0x0004fbbe) bg_fep_hwr_top_pane_g4

0x785e,	// (0x00049345) bg_hwr_side_pane_g1_ParamLimits

0x785e,	// (0x00049345) bg_hwr_side_pane_g1

0xcd0a,	// (0x0004e7f1) cell_hwr_side_pane_ParamLimits

0xcd0a,	// (0x0004e7f1) cell_hwr_side_pane

0x2310,	// (0x00043df7) fep_hwr_write_pane_g1_ParamLimits

0x2310,	// (0x00043df7) fep_hwr_write_pane_g1

0x231d,	// (0x00043e04) fep_hwr_write_pane_g2_ParamLimits

0x231d,	// (0x00043e04) fep_hwr_write_pane_g2

0x232a,	// (0x00043e11) fep_hwr_write_pane_g3_ParamLimits

0x232a,	// (0x00043e11) fep_hwr_write_pane_g3

0xcd2a,	// (0x0004e811) fep_hwr_write_pane_g4_ParamLimits

0xcd2a,	// (0x0004e811) fep_hwr_write_pane_g4

0x0005,

0xfae8,	// (0x000515cf) fep_hwr_write_pane_g_ParamLimits

0xfae8,	// (0x000515cf) fep_hwr_write_pane_g

0xe0d7,	// (0x0004fbbe) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0d7,	// (0x0004fbbe) bg_fep_hwr_candidate_pane_g2

0x234d,	// (0x00043e34) cell_hwr_candidate_pane_ParamLimits

0x234d,	// (0x00043e34) cell_hwr_candidate_pane

0x238f,	// (0x00043e76) fep_hwr_candidate_pane_g1_ParamLimits

0x78be,	// (0x000493a5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78be,	// (0x000493a5) bg_popup_fep_shadow_pane_cp2

0x7a5c,	// (0x00049543) fep_vkb_top_pane_g4_ParamLimits

0x7a5c,	// (0x00049543) fep_vkb_top_pane_g4

0x7aa2,	// (0x00049589) fep_vkb_side_pane_g2_ParamLimits

0x7aa2,	// (0x00049589) fep_vkb_side_pane_g2

0xb964,	// (0x0004d44b) list_setting_pane_t4_ParamLimits

0xb964,	// (0x0004d44b) list_setting_pane_t4

0xb9e6,	// (0x0004d4cd) list_setting_number_pane_t5_ParamLimits

0xb9e6,	// (0x0004d4cd) list_setting_number_pane_t5

0x4379,	// (0x00045e60) list_double_heading_pane_cp2_ParamLimits

0x4379,	// (0x00045e60) list_double_heading_pane_cp2

0x3c54,	// (0x0004573b) list_double_heading_pane_g1_cp2_ParamLimits

0x3c54,	// (0x0004573b) list_double_heading_pane_g1_cp2

0x3cc7,	// (0x000457ae) list_double_heading_pane_g2_cp2_ParamLimits

0x3cc7,	// (0x000457ae) list_double_heading_pane_g2_cp2

0x7df9,	// (0x000498e0) list_double_heading_pane_t1_cp2_ParamLimits

0x7df9,	// (0x000498e0) list_double_heading_pane_t1_cp2

0x7e0f,	// (0x000498f6) list_double_heading_pane_t2_cp2_ParamLimits

0x7e0f,	// (0x000498f6) list_double_heading_pane_t2_cp2

0xd47a,	// (0x0004ef61) aid_value_unit2

0x0e18,	// (0x000428ff) popup_preview_fixed_window

0x36a9,	// (0x00045190) bg_popup_preview_window_pane_cp02

0x7e21,	// (0x00049908) list_preview_fixed_pane

0x7e67,	// (0x0004994e) list_empty_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_empty_pane_fp

0x7e67,	// (0x0004994e) list_single_cale_day_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_single_cale_day_pane_fp

0x7e67,	// (0x0004994e) list_single_graphic_heading_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_single_graphic_heading_pane_fp

0x7e67,	// (0x0004994e) list_single_graphic_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_single_graphic_pane_fp

0x7e67,	// (0x0004994e) list_single_heading_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_single_heading_pane_fp

0x7e67,	// (0x0004994e) list_single_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_single_pane_fp

0x7e7c,	// (0x00049963) list_single_pane_fp_g1_ParamLimits

0x7e7c,	// (0x00049963) list_single_pane_fp_g1

0x3c54,	// (0x0004573b) list_single_pane_fp_g2_ParamLimits

0x3c54,	// (0x0004573b) list_single_pane_fp_g2

0x3cc7,	// (0x000457ae) list_single_pane_fp_g3_ParamLimits

0x3cc7,	// (0x000457ae) list_single_pane_fp_g3

0x7e88,	// (0x0004996f) list_single_pane_fp_g4_ParamLimits

0x7e88,	// (0x0004996f) list_single_pane_fp_g4

0x0003,

0xfb4a,	// (0x00051631) list_single_pane_fp_g_ParamLimits

0xfb4a,	// (0x00051631) list_single_pane_fp_g

0x08a5,	// (0x0004238c) list_single_pane_fp_t1_ParamLimits

0x08a5,	// (0x0004238c) list_single_pane_fp_t1

0x08bc,	// (0x000423a3) list_single_graphic_pane_fp_g1_ParamLimits

0x08bc,	// (0x000423a3) list_single_graphic_pane_fp_g1

0x7e7c,	// (0x00049963) list_single_graphic_pane_fp_g2_ParamLimits

0x7e7c,	// (0x00049963) list_single_graphic_pane_fp_g2

0x3c54,	// (0x0004573b) list_single_graphic_pane_fp_g3_ParamLimits

0x3c54,	// (0x0004573b) list_single_graphic_pane_fp_g3

0x3cc7,	// (0x000457ae) list_single_graphic_pane_fp_g4_ParamLimits

0x3cc7,	// (0x000457ae) list_single_graphic_pane_fp_g4

0x7e88,	// (0x0004996f) list_single_graphic_pane_fp_g5_ParamLimits

0x7e88,	// (0x0004996f) list_single_graphic_pane_fp_g5

0x0004,

0xfb53,	// (0x0005163a) list_single_graphic_pane_fp_g_ParamLimits

0xfb53,	// (0x0005163a) list_single_graphic_pane_fp_g

0x08c8,	// (0x000423af) list_single_graphic_pane_fp_t1_ParamLimits

0x08c8,	// (0x000423af) list_single_graphic_pane_fp_t1

0x08bc,	// (0x000423a3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x08bc,	// (0x000423a3) list_single_graphic_heading_pane_fp_g1

0x7e7c,	// (0x00049963) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e7c,	// (0x00049963) list_single_graphic_heading_pane_fp_g2

0x3c54,	// (0x0004573b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3c54,	// (0x0004573b) list_single_graphic_heading_pane_fp_g3

0x3cc7,	// (0x000457ae) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3cc7,	// (0x000457ae) list_single_graphic_heading_pane_fp_g4

0x7e88,	// (0x0004996f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e88,	// (0x0004996f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb53,	// (0x0005163a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb53,	// (0x0005163a) list_single_graphic_heading_pane_fp_g

0x08de,	// (0x000423c5) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x08de,	// (0x000423c5) list_single_graphic_heading_pane_fp_t1

0x08f4,	// (0x000423db) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x08f4,	// (0x000423db) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5e,	// (0x00051645) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5e,	// (0x00051645) list_single_graphic_heading_pane_fp_t

0x0906,	// (0x000423ed) list_single_cale_day_pane_fp_g1_ParamLimits

0x0906,	// (0x000423ed) list_single_cale_day_pane_fp_g1

0x7e94,	// (0x0004997b) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e94,	// (0x0004997b) list_single_cale_day_pane_fp_g2

0x241b,	// (0x00043f02) list_single_cale_day_pane_fp_g3_ParamLimits

0x241b,	// (0x00043f02) list_single_cale_day_pane_fp_g3

0x2443,	// (0x00043f2a) list_single_cale_day_pane_fp_g4_ParamLimits

0x2443,	// (0x00043f2a) list_single_cale_day_pane_fp_g4

0x2467,	// (0x00043f4e) list_single_cale_day_pane_fp_g5_ParamLimits

0x2467,	// (0x00043f4e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb63,	// (0x0005164a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb63,	// (0x0005164a) list_single_cale_day_pane_fp_g

0x093e,	// (0x00042425) list_single_cale_day_pane_fp_t1_ParamLimits

0x093e,	// (0x00042425) list_single_cale_day_pane_fp_t1

0x0964,	// (0x0004244b) list_single_cale_day_pane_fp_t2_ParamLimits

0x0964,	// (0x0004244b) list_single_cale_day_pane_fp_t2

0x097d,	// (0x00042464) list_single_cale_day_pane_fp_t3_ParamLimits

0x097d,	// (0x00042464) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6e,	// (0x00051655) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6e,	// (0x00051655) list_single_cale_day_pane_fp_t

0x7e7c,	// (0x00049963) list_empty_pane_fp_g1_ParamLimits

0x7e7c,	// (0x00049963) list_empty_pane_fp_g1

0x0996,	// (0x0004247d) list_empty_pane_fp_t1

0x09a4,	// (0x0004248b) list_empty_pane_fp_t2

0x0001,

0xfb75,	// (0x0005165c) list_empty_pane_fp_t

0x7e7c,	// (0x00049963) list_single_heading_pane_fp_g1_ParamLimits

0x7e7c,	// (0x00049963) list_single_heading_pane_fp_g1

0x3c54,	// (0x0004573b) list_single_heading_pane_fp_g2_ParamLimits

0x3c54,	// (0x0004573b) list_single_heading_pane_fp_g2

0x3cc7,	// (0x000457ae) list_single_heading_pane_fp_g3_ParamLimits

0x3cc7,	// (0x000457ae) list_single_heading_pane_fp_g3

0x0002,

0xfb7a,	// (0x00051661) list_single_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00051661) list_single_heading_pane_fp_g

0x09b2,	// (0x00042499) list_single_heading_pane_fp_t1_ParamLimits

0x09b2,	// (0x00042499) list_single_heading_pane_fp_t1

0x09c4,	// (0x000424ab) list_single_heading_pane_fp_t2_ParamLimits

0x09c4,	// (0x000424ab) list_single_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00051668) list_single_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00051668) list_single_heading_pane_fp_t

0x3ebf,	// (0x000459a6) aid_size_cell_fast

0x3619,	// (0x00045100) soft_indicator_pane_cp1_t1

0x3efc,	// (0x000459e3) cell_app_pane_cp2_ParamLimits

0x3efc,	// (0x000459e3) cell_app_pane_cp2

0x21df,	// (0x00043cc6) fep_hwr_candidate_drop_down_list_pane

0xe0e5,	// (0x0004fbcc) fep_hwr_candidate_pane_g3_ParamLimits

0xe0e5,	// (0x0004fbcc) fep_hwr_candidate_pane_g3

0xe0f2,	// (0x0004fbd9) fep_hwr_candidate_pane_g4_ParamLimits

0xe0f2,	// (0x0004fbd9) fep_hwr_candidate_pane_g4

0x0002,

0xfaf5,	// (0x000515dc) fep_hwr_candidate_pane_g_ParamLimits

0xfaf5,	// (0x000515dc) fep_hwr_candidate_pane_g

0x7943,	// (0x0004942a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7943,	// (0x0004942a) fep_vkb_candidate_drop_down_list_pane

0x7d54,	// (0x0004983b) fep_vkb_candidate_pane_g3

0x7d5c,	// (0x00049843) fep_vkb_candidate_pane_g4

0x0002,

0xfb22,	// (0x00051609) fep_vkb_candidate_pane_g

0x7a5c,	// (0x00049543) cell_hwr_candidate_pane_g1_ParamLimits

0x7d8e,	// (0x00049875) cell_hwr_candidate_pane_g3_ParamLimits

0x7d8e,	// (0x00049875) cell_hwr_candidate_pane_g3

0x7daf,	// (0x00049896) cell_hwr_candidate_pane_g4_ParamLimits

0x7daf,	// (0x00049896) cell_hwr_candidate_pane_g4

0x0002,

0xfb3c,	// (0x00051623) cell_hwr_candidate_pane_g_ParamLimits

0xfb3c,	// (0x00051623) cell_hwr_candidate_pane_g

0x7d73,	// (0x0004985a) cell_vkb_candidate_pane_g3_ParamLimits

0x7d73,	// (0x0004985a) cell_vkb_candidate_pane_g3

0x7dd0,	// (0x000498b7) cell_vkb_candidate_pane_g4_ParamLimits

0x7dd0,	// (0x000498b7) cell_vkb_candidate_pane_g4

0x7ea0,	// (0x00049987) cell_app_pane_cp2_g1_ParamLimits

0x7ea0,	// (0x00049987) cell_app_pane_cp2_g1

0x7ebe,	// (0x000499a5) cell_app_pane_cp2_g2_ParamLimits

0x7ebe,	// (0x000499a5) cell_app_pane_cp2_g2

0x0001,

0xfb86,	// (0x0005166d) cell_app_pane_cp2_g_ParamLimits

0xfb86,	// (0x0005166d) cell_app_pane_cp2_g

0x7eca,	// (0x000499b1) cell_app_pane_cp2_t1_ParamLimits

0x7eca,	// (0x000499b1) cell_app_pane_cp2_t1

0x3cb9,	// (0x000457a0) grid_highlight_pane_cp1_ParamLimits

0x3cb9,	// (0x000457a0) grid_highlight_pane_cp1

0x248b,	// (0x00043f72) cell_hwr_candidate_pane_cp1_ParamLimits

0x248b,	// (0x00043f72) cell_hwr_candidate_pane_cp1

0x7a5c,	// (0x00049543) fep_hwr_candidate_drop_down_list_pane_g1

0x7edc,	// (0x000499c3) fep_hwr_candidate_drop_down_list_pane_g2

0x7ee9,	// (0x000499d0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8b,	// (0x00051672) fep_hwr_candidate_drop_down_list_pane_g

0x24aa,	// (0x00043f91) fep_hwr_candidate_drop_down_list_scroll_pane

0x24b3,	// (0x00043f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x24b3,	// (0x00043f9a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x24c0,	// (0x00043fa7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x24c0,	// (0x00043fa7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x24cd,	// (0x00043fb4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x24cd,	// (0x00043fb4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7d73,	// (0x0004985a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d73,	// (0x0004985a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7dd0,	// (0x000498b7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7dd0,	// (0x000498b7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x24da,	// (0x00043fc1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x24da,	// (0x00043fc1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x24f5,	// (0x00043fdc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x24f5,	// (0x00043fdc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2510,	// (0x00043ff7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2510,	// (0x00043ff7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb92,	// (0x00051679) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb92,	// (0x00051679) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ef6,	// (0x000499dd) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ef6,	// (0x000499dd) cell_vkb_candidate_pane_cp1

0x7a5c,	// (0x00049543) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a5c,	// (0x00049543) fep_vkb_candidate_drop_down_list_pane_g1

0x7edc,	// (0x000499c3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7edc,	// (0x000499c3) fep_vkb_candidate_drop_down_list_pane_g2

0x7ee9,	// (0x000499d0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ee9,	// (0x000499d0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8b,	// (0x00051672) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8b,	// (0x00051672) fep_vkb_candidate_drop_down_list_pane_g

0x7f16,	// (0x000499fd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7f16,	// (0x000499fd) fep_vkb_candidate_drop_down_list_scroll_pane

0x7f23,	// (0x00049a0a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f23,	// (0x00049a0a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f30,	// (0x00049a17) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f30,	// (0x00049a17) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f3c,	// (0x00049a23) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f3c,	// (0x00049a23) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7d8e,	// (0x00049875) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7d8e,	// (0x00049875) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7daf,	// (0x00049896) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7daf,	// (0x00049896) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f48,	// (0x00049a2f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f48,	// (0x00049a2f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f69,	// (0x00049a50) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f69,	// (0x00049a50) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f8a,	// (0x00049a71) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f8a,	// (0x00049a71) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba3,	// (0x0005168a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba3,	// (0x0005168a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbed7,	// (0x0004d9be) title_pane_g1_ParamLimits

0xbeea,	// (0x0004d9d1) title_pane_g2_ParamLimits

0xf527,	// (0x0005100e) title_pane_g_ParamLimits

0x4332,	// (0x00045e19) aid_call2_pane

0x433a,	// (0x00045e21) aid_call_pane

0x4342,	// (0x00045e29) popup_clock_analogue_window_g1

0x4342,	// (0x00045e29) popup_clock_analogue_window_g2

0x121e,	// (0x00042d05) popup_clock_analogue_window_g3

0x1227,	// (0x00042d0e) popup_clock_analogue_window_g4

0xd48c,	// (0x0004ef73) popup_clock_analogue_window_g5

0x0004,

0xf6d6,	// (0x000511bd) popup_clock_analogue_window_g

0x122f,	// (0x00042d16) popup_clock_analogue_window_t1

0x123d,	// (0x00042d24) clock_digital_number_pane_ParamLimits

0x123d,	// (0x00042d24) clock_digital_number_pane

0x1249,	// (0x00042d30) clock_digital_number_pane_cp02_ParamLimits

0x1249,	// (0x00042d30) clock_digital_number_pane_cp02

0x1255,	// (0x00042d3c) clock_digital_number_pane_cp03_ParamLimits

0x1255,	// (0x00042d3c) clock_digital_number_pane_cp03

0x1261,	// (0x00042d48) clock_digital_number_pane_cp04_ParamLimits

0x1261,	// (0x00042d48) clock_digital_number_pane_cp04

0x126d,	// (0x00042d54) clock_digital_separator_pane_ParamLimits

0x126d,	// (0x00042d54) clock_digital_separator_pane

0x1279,	// (0x00042d60) popup_clock_digital_window_t1_ParamLimits

0x1279,	// (0x00042d60) popup_clock_digital_window_t1

0xd48c,	// (0x0004ef73) clock_digital_number_pane_g1

0xd48c,	// (0x0004ef73) clock_digital_number_pane_g2

0x0001,

0xf6e1,	// (0x000511c8) clock_digital_number_pane_g

0xd48c,	// (0x0004ef73) clock_digital_separator_pane_g1

0xd48c,	// (0x0004ef73) clock_digital_separator_pane_g2

0x0001,

0xf6e1,	// (0x000511c8) clock_digital_separator_pane_g

0xd5f6,	// (0x0004f0dd) aid_fill_nsta_ParamLimits

0xd72c,	// (0x0004f213) indicator_nsta_pane_ParamLimits

0x4f98,	// (0x00046a7f) popup_clock_analogue_window

0x4f98,	// (0x00046a7f) popup_clock_digital_window

0xdf3d,	// (0x0004fa24) grid_indicator_nsta_pane_ParamLimits

0x71e9,	// (0x00048cd0) clock_nsta_pane_t2

0x0001,

0xfa75,	// (0x0005155c) clock_nsta_pane_t

0x11e2,	// (0x00042cc9) aid_size_max_handle

0x11ec,	// (0x00042cd3) aid_size_min_handle

0x4973,	// (0x0004645a) editor_scroll_pane

0x7fa5,	// (0x00049a8c) ex_editor_pane

0x3e2d,	// (0x00045914) scroll_pane_cp13

0x3c4c,	// (0x00045733) scroll_pane_cp14

0x4371,	// (0x00045e58) scroll_pane_cp36

0xc3d7,	// (0x0004debe) list_single_graphic_hl_pane_cp2_ParamLimits

0xc3d7,	// (0x0004debe) list_single_graphic_hl_pane_cp2

0xdd9f,	// (0x0004f886) list_single_graphic_hl_pane_ParamLimits

0xdd9f,	// (0x0004f886) list_single_graphic_hl_pane

0x09da,	// (0x000424c1) aid_size_min_hl_cp1

0x7fad,	// (0x00049a94) list_highlight_pane_cp34_ParamLimits

0x7fad,	// (0x00049a94) list_highlight_pane_cp34

0x7fbe,	// (0x00049aa5) list_single_graphic_hl_pane_g1_ParamLimits

0x7fbe,	// (0x00049aa5) list_single_graphic_hl_pane_g1

0xbbfc,	// (0x0004d6e3) list_single_graphic_hl_pane_g2_ParamLimits

0xbbfc,	// (0x0004d6e3) list_single_graphic_hl_pane_g2

0xbbfc,	// (0x0004d6e3) list_single_graphic_hl_pane_g3_ParamLimits

0xbbfc,	// (0x0004d6e3) list_single_graphic_hl_pane_g3

0x4847,	// (0x0004632e) list_single_graphic_hl_pane_g4_ParamLimits

0x4847,	// (0x0004632e) list_single_graphic_hl_pane_g4

0xcd3f,	// (0x0004e826) list_single_graphic_hl_pane_g5_ParamLimits

0xcd3f,	// (0x0004e826) list_single_graphic_hl_pane_g5

0x0004,

0xfbb4,	// (0x0005169b) list_single_graphic_hl_pane_g_ParamLimits

0xfbb4,	// (0x0005169b) list_single_graphic_hl_pane_g

0xbc08,	// (0x0004d6ef) list_single_graphic_hl_pane_t1_ParamLimits

0xbc08,	// (0x0004d6ef) list_single_graphic_hl_pane_t1

0x7fcb,	// (0x00049ab2) aid_size_min_hl_cp2

0x7fd4,	// (0x00049abb) list_highlight_pane_cp34_cp2_ParamLimits

0x7fd4,	// (0x00049abb) list_highlight_pane_cp34_cp2

0x7fbe,	// (0x00049aa5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7fbe,	// (0x00049aa5) list_single_graphic_hl_pane_g1_cp2

0x7fe1,	// (0x00049ac8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7fe1,	// (0x00049ac8) list_single_graphic_hl_pane_g2_cp2

0x7fed,	// (0x00049ad4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7fed,	// (0x00049ad4) list_single_graphic_hl_pane_g3_cp2

0x7ffb,	// (0x00049ae2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7ffb,	// (0x00049ae2) list_single_graphic_hl_pane_g4_cp2

0x8007,	// (0x00049aee) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8007,	// (0x00049aee) list_single_graphic_hl_pane_g5_cp2

0xc492,	// (0x0004df79) control_pane_g4_ParamLimits

0xc492,	// (0x0004df79) control_pane_g4

0x4c97,	// (0x0004677e) bg_popup_sub_pane_cp10_ParamLimits

0x77e8,	// (0x000492cf) list_choice_list_pane_ParamLimits

0x77f7,	// (0x000492de) scroll_pane_cp23

0x36a9,	// (0x00045190) bg_popup_preview_window_pane_cp02_ParamLimits

0x7e21,	// (0x00049908) list_preview_fixed_pane_ParamLimits

0x7e37,	// (0x0004991e) list_preview_fixed_pane_cp_ParamLimits

0x7e37,	// (0x0004991e) list_preview_fixed_pane_cp

0x7e43,	// (0x0004992a) popup_preview_fixed_window_g1_ParamLimits

0x7e43,	// (0x0004992a) popup_preview_fixed_window_g1

0x7e4f,	// (0x00049936) popup_preview_fixed_window_g2_ParamLimits

0x7e4f,	// (0x00049936) popup_preview_fixed_window_g2

0x0002,

0xfb43,	// (0x0005162a) popup_preview_fixed_window_g_ParamLimits

0xfb43,	// (0x0005162a) popup_preview_fixed_window_g

0x1156,	// (0x00042c3d) aid_navi_side_left_pane_ParamLimits

0x116b,	// (0x00042c52) aid_navi_side_right_pane_ParamLimits

0x1183,	// (0x00042c6a) navi_icon_pane_stacon_ParamLimits

0x1197,	// (0x00042c7e) navi_navi_pane_stacon_ParamLimits

0x1183,	// (0x00042c6a) navi_text_pane_stacon_ParamLimits

0xd482,	// (0x0004ef69) main_text_info_pane

0x8031,	// (0x00049b18) listscroll_text_info_pane

0x8039,	// (0x00049b20) list_text_info_pane_ParamLimits

0x8039,	// (0x00049b20) list_text_info_pane

0x8048,	// (0x00049b2f) scroll_pane_cp24_ParamLimits

0x8048,	// (0x00049b2f) scroll_pane_cp24

0xe289,	// (0x0004fd70) list_text_info_pane_t1_ParamLimits

0xe289,	// (0x0004fd70) list_text_info_pane_t1

0xc5d7,	// (0x0004e0be) popup_fast_swap2_window_ParamLimits

0xc5d7,	// (0x0004e0be) popup_fast_swap2_window

0x8097,	// (0x00049b7e) aid_size_cell_fast2

0xd482,	// (0x0004ef69) bg_popup_window_pane_cp17

0x5621,	// (0x00047108) heading_pane_cp2

0x80a1,	// (0x00049b88) listscroll_fast2_pane

0x80a9,	// (0x00049b90) grid_fast2_pane

0x80b3,	// (0x00049b9a) listscroll_fast2_pane_g1

0x80bb,	// (0x00049ba2) listscroll_fast2_pane_g2

0x0001,

0xfbbf,	// (0x000516a6) listscroll_fast2_pane_g

0x3e2d,	// (0x00045914) scroll_pane_cp26

0x80c5,	// (0x00049bac) cell_fast2_pane_ParamLimits

0x80c5,	// (0x00049bac) cell_fast2_pane

0x80da,	// (0x00049bc1) cell_fast2_pane_g1

0x80e3,	// (0x00049bca) cell_fast2_pane_g2

0x80ec,	// (0x00049bd3) cell_fast2_pane_g3

0x0002,

0xfbc4,	// (0x000516ab) cell_fast2_pane_g

0x3a09,	// (0x000454f0) grid_highlight_pane_cp9

0x3a1e,	// (0x00045505) main_eswt_pane_ParamLimits

0x3a1e,	// (0x00045505) main_eswt_pane

0x805d,	// (0x00049b44) list_single_text_info_pane

0x80f4,	// (0x00049bdb) eswt_ctrl_button_pane

0x80f4,	// (0x00049bdb) eswt_ctrl_canvas_pane

0x80fc,	// (0x00049be3) eswt_ctrl_combo_pane

0x80f4,	// (0x00049bdb) eswt_ctrl_default_pane

0x80f4,	// (0x00049bdb) eswt_ctrl_label_pane

0x8104,	// (0x00049beb) eswt_ctrl_wait_pane

0x810c,	// (0x00049bf3) eswt_shell_pane

0xd482,	// (0x0004ef69) listscroll_eswt_app_pane

0x812c,	// (0x00049c13) popup_eswt_tasktip_window_ParamLimits

0x812c,	// (0x00049c13) popup_eswt_tasktip_window

0x5235,	// (0x00046d1c) bg_popup_window_pane_cp18

0x813d,	// (0x00049c24) eswt_control_pane_g1_ParamLimits

0x813d,	// (0x00049c24) eswt_control_pane_g1

0x814a,	// (0x00049c31) eswt_control_pane_g2_ParamLimits

0x814a,	// (0x00049c31) eswt_control_pane_g2

0x8157,	// (0x00049c3e) eswt_control_pane_g3_ParamLimits

0x8157,	// (0x00049c3e) eswt_control_pane_g3

0x8164,	// (0x00049c4b) eswt_control_pane_g4_ParamLimits

0x8164,	// (0x00049c4b) eswt_control_pane_g4

0x0003,

0xfbcb,	// (0x000516b2) eswt_control_pane_g_ParamLimits

0xfbcb,	// (0x000516b2) eswt_control_pane_g

0x3cb9,	// (0x000457a0) bg_button_pane_ParamLimits

0x3cb9,	// (0x000457a0) bg_button_pane

0x3a1e,	// (0x00045505) common_borders_pane_copy2_ParamLimits

0x3a1e,	// (0x00045505) common_borders_pane_copy2

0x8171,	// (0x00049c58) control_button_pane_g1_ParamLimits

0x8171,	// (0x00049c58) control_button_pane_g1

0x817d,	// (0x00049c64) control_button_pane_g2_ParamLimits

0x817d,	// (0x00049c64) control_button_pane_g2

0x8189,	// (0x00049c70) control_button_pane_g3_ParamLimits

0x8189,	// (0x00049c70) control_button_pane_g3

0x0002,

0xfbd4,	// (0x000516bb) control_button_pane_g_ParamLimits

0xfbd4,	// (0x000516bb) control_button_pane_g

0x819d,	// (0x00049c84) control_button_pane_t1

0x81ab,	// (0x00049c92) control_button_pane_t2

0x0001,

0xfbdb,	// (0x000516c2) control_button_pane_t

0x51c1,	// (0x00046ca8) bg_button_pane_g1

0x51c9,	// (0x00046cb0) bg_button_pane_g2

0x51d1,	// (0x00046cb8) bg_button_pane_g3

0x51d9,	// (0x00046cc0) bg_button_pane_g4

0x51e1,	// (0x00046cc8) bg_button_pane_g5

0x51e9,	// (0x00046cd0) bg_button_pane_g6

0x51f1,	// (0x00046cd8) bg_button_pane_g7

0x51f9,	// (0x00046ce0) bg_button_pane_g8

0x5201,	// (0x00046ce8) bg_button_pane_g9

0x0008,

0xf83f,	// (0x00051326) bg_button_pane_g

0x77a3,	// (0x0004928a) common_borders_pane_ParamLimits

0x77a3,	// (0x0004928a) common_borders_pane

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy1_ParamLimits

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy1

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy1_ParamLimits

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy1

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy1_ParamLimits

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy1

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy1_ParamLimits

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy1

0x77de,	// (0x000492c5) bg_eswt_ctrl_canvas_pane_g1

0x77a3,	// (0x0004928a) common_borders_pane_cp2_ParamLimits

0x77a3,	// (0x0004928a) common_borders_pane_cp2

0x77a3,	// (0x0004928a) common_borders_pane_cp3_ParamLimits

0x77a3,	// (0x0004928a) common_borders_pane_cp3

0x81b9,	// (0x00049ca0) separator_horizontal_pane

0x81c1,	// (0x00049ca8) separator_vertical_pane

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy2_ParamLimits

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy2

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy2_ParamLimits

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy2

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy2_ParamLimits

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy2

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy2_ParamLimits

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy2

0xd482,	// (0x0004ef69) common_borders_pane_cp4

0x81ca,	// (0x00049cb1) separator_horizontal_pane_g1

0x81d3,	// (0x00049cba) separator_horizontal_pane_g2

0x81dc,	// (0x00049cc3) separator_horizontal_pane_g3

0x0002,

0xfbe0,	// (0x000516c7) separator_horizontal_pane_g

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy3_ParamLimits

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy3

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy3_ParamLimits

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy3

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy3_ParamLimits

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy3

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy3_ParamLimits

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy3

0xd482,	// (0x0004ef69) common_borders_pane_cp5

0x81e5,	// (0x00049ccc) separator_vertical_pane_g1

0x81ee,	// (0x00049cd5) separator_vertical_pane_g2

0x81f7,	// (0x00049cde) separator_vertical_pane_g3

0x0002,

0xfbe7,	// (0x000516ce) separator_vertical_pane_g

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy4_ParamLimits

0x813d,	// (0x00049c24) eswt_control_pane_g1_copy4

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy4_ParamLimits

0x814a,	// (0x00049c31) eswt_control_pane_g2_copy4

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy4_ParamLimits

0x8157,	// (0x00049c3e) eswt_control_pane_g3_copy4

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy4_ParamLimits

0x8164,	// (0x00049c4b) eswt_control_pane_g4_copy4

0x8200,	// (0x00049ce7) eswt_ctrl_combo_button_pane

0x8208,	// (0x00049cef) eswt_ctrl_input_pane

0x8210,	// (0x00049cf7) popup_choice_list_window_cp70

0x8218,	// (0x00049cff) eswt_ctrl_input_pane_t1

0xd482,	// (0x0004ef69) input_focus_pane_cp70

0x77a3,	// (0x0004928a) bg_button_pane_cp70_ParamLimits

0x77a3,	// (0x0004928a) bg_button_pane_cp70

0x8226,	// (0x00049d0d) eswt_ctrl_combo_button_pane_g1

0x822e,	// (0x00049d15) wait_bar_pane_cp70

0x5235,	// (0x00046d1c) bg_popup_window_pane_cp70_ParamLimits

0x5235,	// (0x00046d1c) bg_popup_window_pane_cp70

0x8236,	// (0x00049d1d) popup_eswt_tasktip_window_t1

0x824c,	// (0x00049d33) wait_bar_pane_cp71_ParamLimits

0x824c,	// (0x00049d33) wait_bar_pane_cp71

0x8258,	// (0x00049d3f) grid_eswt_app_pane

0x4154,	// (0x00045c3b) scroll_pane_cp70

0xe2a4,	// (0x0004fd8b) cell_eswt_app_pane_ParamLimits

0xe2a4,	// (0x0004fd8b) cell_eswt_app_pane

0xe2ce,	// (0x0004fdb5) cell_eswt_app_pane_g1_ParamLimits

0xe2ce,	// (0x0004fdb5) cell_eswt_app_pane_g1

0xe2fd,	// (0x0004fde4) cell_eswt_app_pane_g2_ParamLimits

0xe2fd,	// (0x0004fde4) cell_eswt_app_pane_g2

0x0001,

0xfbee,	// (0x000516d5) cell_eswt_app_pane_g_ParamLimits

0xfbee,	// (0x000516d5) cell_eswt_app_pane_g

0xe326,	// (0x0004fe0d) cell_eswt_app_pane_t1_ParamLimits

0xe326,	// (0x0004fe0d) cell_eswt_app_pane_t1

0x831b,	// (0x00049e02) grid_highlight_pane_cp70_ParamLimits

0x831b,	// (0x00049e02) grid_highlight_pane_cp70

0x4847,	// (0x0004632e) set_content_pane_g1

0xd5b3,	// (0x0004f09a) status_small_volume_pane

0xcd53,	// (0x0004e83a) status_small_volume_pane_g1

0xcd5b,	// (0x0004e842) volume_small2_pane

0xcd64,	// (0x0004e84b) volume_small2_pane_g1

0xcd6d,	// (0x0004e854) volume_small2_pane_g2

0xcd76,	// (0x0004e85d) volume_small2_pane_g3

0xcd7f,	// (0x0004e866) volume_small2_pane_g4

0xcd88,	// (0x0004e86f) volume_small2_pane_g5

0xcd91,	// (0x0004e878) volume_small2_pane_g6

0xcd9a,	// (0x0004e881) volume_small2_pane_g7

0xcda3,	// (0x0004e88a) volume_small2_pane_g8

0xcdac,	// (0x0004e893) volume_small2_pane_g9

0xcdb5,	// (0x0004e89c) volume_small2_pane_g10

0x0009,

0xfbf3,	// (0x000516da) volume_small2_pane_g

0x7ba4,	// (0x0004968b) fep_vkb_top_text_pane_g1_ParamLimits

0xe231,	// (0x0004fd18) fep_vkb_top_text_pane_t1_ParamLimits

0x7e5b,	// (0x00049942) popup_preview_fixed_window_g3_ParamLimits

0x7e5b,	// (0x00049942) popup_preview_fixed_window_g3

0xcc00,	// (0x0004e6e7) popup_toolbar_trans_pane

0xdc26,	// (0x0004f70d) aid_height_set_list_ParamLimits

0x659a,	// (0x00048081) aid_size_parent_ParamLimits

0x4c97,	// (0x0004677e) list_highlight_pane_cp2_ParamLimits

0x4847,	// (0x0004632e) set_content_pane_g1_ParamLimits

0xbbb9,	// (0x0004d6a0) list_single_image_pane_ParamLimits

0xbbb9,	// (0x0004d6a0) list_single_image_pane

0xe358,	// (0x0004fe3f) aid_size_cell_image_ParamLimits

0xe358,	// (0x0004fe3f) aid_size_cell_image

0xe365,	// (0x0004fe4c) grid_single_image_pane_ParamLimits

0xe365,	// (0x0004fe4c) grid_single_image_pane

0x6b01,	// (0x000485e8) list_single_image_pane_g1_ParamLimits

0x6b01,	// (0x000485e8) list_single_image_pane_g1

0x8340,	// (0x00049e27) list_single_image_pane_g2_ParamLimits

0x8340,	// (0x00049e27) list_single_image_pane_g2

0x0001,

0xfc08,	// (0x000516ef) list_single_image_pane_g_ParamLimits

0xfc08,	// (0x000516ef) list_single_image_pane_g

0x8354,	// (0x00049e3b) list_single_image_pane_t1_ParamLimits

0x8354,	// (0x00049e3b) list_single_image_pane_t1

0xe371,	// (0x0004fe58) cell_image_list_pane_ParamLimits

0xe371,	// (0x0004fe58) cell_image_list_pane

0xe385,	// (0x0004fe6c) cell_image_list_pane_g1

0xe38e,	// (0x0004fe75) cell_image_list_pane_g2

0x0001,

0xfc0d,	// (0x000516f4) cell_image_list_pane_g

0x8390,	// (0x00049e77) aid_size_cell_tb_trans_pane

0x3cb9,	// (0x000457a0) bg_tb_trans_pane

0x83a2,	// (0x00049e89) grid_tb_trans_pane

0x51c1,	// (0x00046ca8) bg_tb_trans_pane_g1

0x51c9,	// (0x00046cb0) bg_tb_trans_pane_g2

0x51d1,	// (0x00046cb8) bg_tb_trans_pane_g3

0x51d9,	// (0x00046cc0) bg_tb_trans_pane_g4

0x51e1,	// (0x00046cc8) bg_tb_trans_pane_g5

0x51f9,	// (0x00046ce0) bg_tb_trans_pane_g6

0x5201,	// (0x00046ce8) bg_tb_trans_pane_g7

0x51e9,	// (0x00046cd0) bg_tb_trans_pane_g8

0x51f1,	// (0x00046cd8) bg_tb_trans_pane_g9

0x0008,

0xfc12,	// (0x000516f9) bg_tb_trans_pane_g

0x83b6,	// (0x00049e9d) cell_toolbar_trans_pane_ParamLimits

0x83b6,	// (0x00049e9d) cell_toolbar_trans_pane

0x77de,	// (0x000492c5) cell_toolbar_trans_pane_g1

0xdff4,	// (0x0004fadb) list_form2_midp_pane_t1

0xe002,	// (0x0004fae9) list_form2_midp_pane_t2

0x0001,

0xfabb,	// (0x000515a2) list_form2_midp_pane_t

0x73d6,	// (0x00048ebd) scroll_pane_cp51_ParamLimits

0x7592,	// (0x00049079) form2_midp_wait_pane_g1

0x759b,	// (0x00049082) form2_midp_wait_pane_g2

0x75a4,	// (0x0004908b) form2_midp_wait_pane_g3

0x0002,

0xfad0,	// (0x000515b7) form2_midp_wait_pane_g

0x3420,	// (0x00044f07) list_highlight_pane_cp21_ParamLimits

0x75f0,	// (0x000490d7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x75ff,	// (0x000490e6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6752,	// (0x00048239) list_single_2graphic_im_pane_ParamLimits

0x6752,	// (0x00048239) list_single_2graphic_im_pane

0x83dc,	// (0x00049ec3) list_single_2graphic_im_pane_g1_ParamLimits

0x83dc,	// (0x00049ec3) list_single_2graphic_im_pane_g1

0x83ed,	// (0x00049ed4) list_single_2graphic_im_pane_g2_ParamLimits

0x83ed,	// (0x00049ed4) list_single_2graphic_im_pane_g2

0x83f9,	// (0x00049ee0) list_single_2graphic_im_pane_g3_ParamLimits

0x83f9,	// (0x00049ee0) list_single_2graphic_im_pane_g3

0x0003,

0xfc25,	// (0x0005170c) list_single_2graphic_im_pane_g_ParamLimits

0xfc25,	// (0x0005170c) list_single_2graphic_im_pane_g

0x8419,	// (0x00049f00) list_single_2graphic_im_pane_t1_ParamLimits

0x8419,	// (0x00049f00) list_single_2graphic_im_pane_t1

0x7e67,	// (0x0004994e) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e67,	// (0x0004994e) list_single_graphic_2heading_pane_fp

0x08bc,	// (0x000423a3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x08bc,	// (0x000423a3) list_single_graphic_2heading_pane_fp_g1

0x7e7c,	// (0x00049963) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e7c,	// (0x00049963) list_single_graphic_2heading_pane_fp_g2

0x3c54,	// (0x0004573b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3c54,	// (0x0004573b) list_single_graphic_2heading_pane_fp_g3

0x3cc7,	// (0x000457ae) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3cc7,	// (0x000457ae) list_single_graphic_2heading_pane_fp_g4

0x7e88,	// (0x0004996f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e88,	// (0x0004996f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb53,	// (0x0005163a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb53,	// (0x0005163a) list_single_graphic_2heading_pane_fp_g

0x0a05,	// (0x000424ec) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0a05,	// (0x000424ec) list_single_graphic_2heading_pane_fp_t1

0x08f4,	// (0x000423db) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x08f4,	// (0x000423db) list_single_graphic_2heading_pane_fp_t2

0x0a1b,	// (0x00042502) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0a1b,	// (0x00042502) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2e,	// (0x00051715) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2e,	// (0x00051715) list_single_graphic_2heading_pane_fp_t

0x786a,	// (0x00049351) fep_hwr_write_pane_g5_ParamLimits

0x786a,	// (0x00049351) fep_hwr_write_pane_g5

0x7876,	// (0x0004935d) fep_hwr_write_pane_g6_ParamLimits

0x7876,	// (0x0004935d) fep_hwr_write_pane_g6

0x810c,	// (0x00049bf3) eswt_shell_pane_ParamLimits

0x5235,	// (0x00046d1c) bg_popup_window_pane_cp18_ParamLimits

0x5621,	// (0x00047108) heading_pane_cp70

0x8236,	// (0x00049d1d) popup_eswt_tasktip_window_t1_ParamLimits

0xd651,	// (0x0004f138) aid_touch_tab_arrow_left

0xd667,	// (0x0004f14e) aid_touch_tab_arrow_right

0xbf02,	// (0x0004d9e9) title_pane_g3_ParamLimits

0xbf02,	// (0x0004d9e9) title_pane_g3

0x3c78,	// (0x0004575f) set_value_pane_g1

0xcc00,	// (0x0004e6e7) popup_toolbar_trans_pane_ParamLimits

0x8390,	// (0x00049e77) aid_size_cell_tb_trans_pane_ParamLimits

0x3cb9,	// (0x000457a0) bg_tb_trans_pane_ParamLimits

0x83a2,	// (0x00049e89) grid_tb_trans_pane_ParamLimits

0x36a9,	// (0x00045190) cont_note_pane_ParamLimits

0x36a9,	// (0x00045190) cont_note_pane

0x3a1e,	// (0x00045505) cont_snote2_single_text_pane_ParamLimits

0x3a1e,	// (0x00045505) cont_snote2_single_text_pane

0x3a1e,	// (0x00045505) cont_snote2_single_graphic_pane_ParamLimits

0x3a1e,	// (0x00045505) cont_snote2_single_graphic_pane

0x5850,	// (0x00047337) cont_note_wait_pane_ParamLimits

0x5850,	// (0x00047337) cont_note_wait_pane

0x5850,	// (0x00047337) cont_note_image_pane_ParamLimits

0x5850,	// (0x00047337) cont_note_image_pane

0x844a,	// (0x00049f31) popup_note2_window_g1_ParamLimits

0x844a,	// (0x00049f31) popup_note2_window_g1

0x847b,	// (0x00049f62) popup_note2_window_t1_ParamLimits

0x847b,	// (0x00049f62) popup_note2_window_t1

0x84c0,	// (0x00049fa7) popup_note2_window_t2_ParamLimits

0x84c0,	// (0x00049fa7) popup_note2_window_t2

0x8505,	// (0x00049fec) popup_note2_window_t3_ParamLimits

0x8505,	// (0x00049fec) popup_note2_window_t3

0x854a,	// (0x0004a031) popup_note2_window_t4_ParamLimits

0x854a,	// (0x0004a031) popup_note2_window_t4

0x372d,	// (0x00045214) popup_note2_window_t5_ParamLimits

0x372d,	// (0x00045214) popup_note2_window_t5

0x0004,

0xfc3a,	// (0x00051721) popup_note2_window_t_ParamLimits

0xfc3a,	// (0x00051721) popup_note2_window_t

0x8579,	// (0x0004a060) popup_note2_image_window_g1_ParamLimits

0x8579,	// (0x0004a060) popup_note2_image_window_g1

0x8585,	// (0x0004a06c) popup_note2_image_window_g2_ParamLimits

0x8585,	// (0x0004a06c) popup_note2_image_window_g2

0x0001,

0xfc45,	// (0x0005172c) popup_note2_image_window_g_ParamLimits

0xfc45,	// (0x0005172c) popup_note2_image_window_g

0x8597,	// (0x0004a07e) popup_note2_image_window_t1_ParamLimits

0x8597,	// (0x0004a07e) popup_note2_image_window_t1

0x85af,	// (0x0004a096) popup_note2_image_window_t2_ParamLimits

0x85af,	// (0x0004a096) popup_note2_image_window_t2

0x85c7,	// (0x0004a0ae) popup_note2_image_window_t3_ParamLimits

0x85c7,	// (0x0004a0ae) popup_note2_image_window_t3

0x0002,

0xfc4a,	// (0x00051731) popup_note2_image_window_t_ParamLimits

0xfc4a,	// (0x00051731) popup_note2_image_window_t

0x585e,	// (0x00047345) popup_note2_wait_window_g1_ParamLimits

0x585e,	// (0x00047345) popup_note2_wait_window_g1

0x85e3,	// (0x0004a0ca) popup_note2_wait_window_g2_ParamLimits

0x85e3,	// (0x0004a0ca) popup_note2_wait_window_g2

0x5876,	// (0x0004735d) popup_note2_wait_window_g3_ParamLimits

0x5876,	// (0x0004735d) popup_note2_wait_window_g3

0x0002,

0xfc51,	// (0x00051738) popup_note2_wait_window_g_ParamLimits

0xfc51,	// (0x00051738) popup_note2_wait_window_g

0x85ef,	// (0x0004a0d6) popup_note2_wait_window_t1_ParamLimits

0x85ef,	// (0x0004a0d6) popup_note2_wait_window_t1

0x860d,	// (0x0004a0f4) popup_note2_wait_window_t2_ParamLimits

0x860d,	// (0x0004a0f4) popup_note2_wait_window_t2

0x862b,	// (0x0004a112) popup_note2_wait_window_t3_ParamLimits

0x862b,	// (0x0004a112) popup_note2_wait_window_t3

0x863d,	// (0x0004a124) popup_note2_wait_window_t4_ParamLimits

0x863d,	// (0x0004a124) popup_note2_wait_window_t4

0x0003,

0xfc58,	// (0x0005173f) popup_note2_wait_window_t_ParamLimits

0xfc58,	// (0x0005173f) popup_note2_wait_window_t

0x864f,	// (0x0004a136) wait_bar2_pane_ParamLimits

0x864f,	// (0x0004a136) wait_bar2_pane

0x8667,	// (0x0004a14e) popup_snote2_single_text_window_g1_ParamLimits

0x8667,	// (0x0004a14e) popup_snote2_single_text_window_g1

0x868f,	// (0x0004a176) popup_snote2_single_text_window_t1_ParamLimits

0x868f,	// (0x0004a176) popup_snote2_single_text_window_t1

0x86db,	// (0x0004a1c2) popup_snote2_single_text_window_t2_ParamLimits

0x86db,	// (0x0004a1c2) popup_snote2_single_text_window_t2

0x8727,	// (0x0004a20e) popup_snote2_single_text_window_t3_ParamLimits

0x8727,	// (0x0004a20e) popup_snote2_single_text_window_t3

0x8768,	// (0x0004a24f) popup_snote2_single_text_window_t4_ParamLimits

0x8768,	// (0x0004a24f) popup_snote2_single_text_window_t4

0x879e,	// (0x0004a285) popup_snote2_single_text_window_t5_ParamLimits

0x879e,	// (0x0004a285) popup_snote2_single_text_window_t5

0x0004,

0xfc61,	// (0x00051748) popup_snote2_single_text_window_t_ParamLimits

0xfc61,	// (0x00051748) popup_snote2_single_text_window_t

0x87c9,	// (0x0004a2b0) popup_snote2_single_graphic_window_g1_ParamLimits

0x87c9,	// (0x0004a2b0) popup_snote2_single_graphic_window_g1

0x87f1,	// (0x0004a2d8) popup_snote2_single_graphic_window_g2_ParamLimits

0x87f1,	// (0x0004a2d8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6c,	// (0x00051753) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6c,	// (0x00051753) popup_snote2_single_graphic_window_g

0x8819,	// (0x0004a300) popup_snote2_single_graphic_window_t1_ParamLimits

0x8819,	// (0x0004a300) popup_snote2_single_graphic_window_t1

0x8865,	// (0x0004a34c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8865,	// (0x0004a34c) popup_snote2_single_graphic_window_t2

0x8727,	// (0x0004a20e) popup_snote2_single_graphic_window_t3_ParamLimits

0x8727,	// (0x0004a20e) popup_snote2_single_graphic_window_t3

0x8768,	// (0x0004a24f) popup_snote2_single_graphic_window_t4_ParamLimits

0x8768,	// (0x0004a24f) popup_snote2_single_graphic_window_t4

0x879e,	// (0x0004a285) popup_snote2_single_graphic_window_t5_ParamLimits

0x879e,	// (0x0004a285) popup_snote2_single_graphic_window_t5

0x0004,

0xfc71,	// (0x00051758) popup_snote2_single_graphic_window_t_ParamLimits

0xfc71,	// (0x00051758) popup_snote2_single_graphic_window_t

0x7297,	// (0x00048d7e) clock_nsta_pane_cp2_t1

0x7297,	// (0x00048d7e) clock_nsta_pane_cp2_t2

0x0001,

0xfa91,	// (0x00051578) clock_nsta_pane_cp2_t

0x01a8,	// (0x00041c8f) form_field_data_wide_pane_g1_ParamLimits

0x3c54,	// (0x0004573b) form_field_data_wide_pane_g2_ParamLimits

0x3c54,	// (0x0004573b) form_field_data_wide_pane_g2

0x3cc7,	// (0x000457ae) form_field_data_wide_pane_g3_ParamLimits

0x3cc7,	// (0x000457ae) form_field_data_wide_pane_g3

0x0002,

0xf659,	// (0x00051140) form_field_data_wide_pane_g_ParamLimits

0xf659,	// (0x00051140) form_field_data_wide_pane_g

0xdf27,	// (0x0004fa0e) grid_touch_3_pane_ParamLimits

0xdf27,	// (0x0004fa0e) grid_touch_3_pane

0xe397,	// (0x0004fe7e) cell_touch_3_pane_ParamLimits

0xe397,	// (0x0004fe7e) cell_touch_3_pane

0x77de,	// (0x000492c5) cell_touch_3_pane_g1

0x77de,	// (0x000492c5) cell_touch_3_pane_g2

0x0001,

0xfb16,	// (0x000515fd) cell_touch_3_pane_g

0x3785,	// (0x0004526c) cont_query_data_pane

0x378d,	// (0x00045274) cont_query_data_pane_cp1

0x88df,	// (0x0004a3c6) button_value_adjust_pane_cp7

0x88e7,	// (0x0004a3ce) query_popup_pane_cp3

0x444b,	// (0x00045f32) bg_popup_sub_pane_cp22_ParamLimits

0x1298,	// (0x00042d7f) navi_navi_volume_pane_cp2

0x12b3,	// (0x00042d9a) popup_side_volume_key_window_g2

0x12c2,	// (0x00042da9) popup_side_volume_key_window_g3

0x0002,

0xf6ef,	// (0x000511d6) popup_side_volume_key_window_g

0x12df,	// (0x00042dc6) popup_side_volume_key_window_t2

0x0001,

0xf6f6,	// (0x000511dd) popup_side_volume_key_window_t

0x4711,	// (0x000461f8) popup_side_volume_key_window_ParamLimits

0xb770,	// (0x0004d257) list_double_graphic_pane_g4_ParamLimits

0xb770,	// (0x0004d257) list_double_graphic_pane_g4

0xccdf,	// (0x0004e7c6) list_single_2heading_msg_pane_ParamLimits

0xccdf,	// (0x0004e7c6) list_single_2heading_msg_pane

0xcdbe,	// (0x0004e8a5) list_single_2heading_msg_pane_g1_ParamLimits

0xcdbe,	// (0x0004e8a5) list_single_2heading_msg_pane_g1

0xcdca,	// (0x0004e8b1) list_single_2heading_msg_pane_g2_ParamLimits

0xcdca,	// (0x0004e8b1) list_single_2heading_msg_pane_g2

0xcddd,	// (0x0004e8c4) list_single_2heading_msg_pane_g3_ParamLimits

0xcddd,	// (0x0004e8c4) list_single_2heading_msg_pane_g3

0x25ce,	// (0x000440b5) list_single_2heading_msg_pane_g4_ParamLimits

0x25ce,	// (0x000440b5) list_single_2heading_msg_pane_g4

0x0003,

0xfc7c,	// (0x00051763) list_single_2heading_msg_pane_g_ParamLimits

0xfc7c,	// (0x00051763) list_single_2heading_msg_pane_g

0x0a3b,	// (0x00042522) list_single_2heading_msg_pane_t1_ParamLimits

0x0a3b,	// (0x00042522) list_single_2heading_msg_pane_t1

0xbc1e,	// (0x0004d705) list_single_2heading_msg_pane_t2_ParamLimits

0xbc1e,	// (0x0004d705) list_single_2heading_msg_pane_t2

0xbc89,	// (0x0004d770) list_single_2heading_msg_pane_t3_ParamLimits

0xbc89,	// (0x0004d770) list_single_2heading_msg_pane_t3

0x0ad0,	// (0x000425b7) list_single_2heading_msg_pane_t4_ParamLimits

0x0ad0,	// (0x000425b7) list_single_2heading_msg_pane_t4

0x0003,

0xfc85,	// (0x0005176c) list_single_2heading_msg_pane_t_ParamLimits

0xfc85,	// (0x0005176c) list_single_2heading_msg_pane_t

0x3374,	// (0x00044e5b) title_pane_g4_ParamLimits

0x3374,	// (0x00044e5b) title_pane_g4

0x10a7,	// (0x00042b8e) title_pane_stacon_g3_ParamLimits

0x10a7,	// (0x00042b8e) title_pane_stacon_g3

0x840d,	// (0x00049ef4) list_single_2graphic_im_pane_g4_ParamLimits

0x840d,	// (0x00049ef4) list_single_2graphic_im_pane_g4

0x62af,	// (0x00047d96) popup_side_volume_key_window_cp

0x6ab2,	// (0x00048599) main_idle_act2_pane_t1

0x1c60,	// (0x00043747) toolbar_button_pane_g10

0xc25e,	// (0x0004dd45) popup_toolbar_window_cp1

0x7288,	// (0x00048d6f) clock_nsta_pane_cp_t1

0x7288,	// (0x00048d6f) clock_nsta_pane_cp_t2

0x0001,

0xfa8c,	// (0x00051573) clock_nsta_pane_cp_t

0x1298,	// (0x00042d7f) navi_navi_volume_pane_cp2_ParamLimits

0x12a7,	// (0x00042d8e) popup_side_volume_key_window_g1_ParamLimits

0x12b3,	// (0x00042d9a) popup_side_volume_key_window_g2_ParamLimits

0x12c2,	// (0x00042da9) popup_side_volume_key_window_g3_ParamLimits

0xf6ef,	// (0x000511d6) popup_side_volume_key_window_g_ParamLimits

0x21cb,	// (0x00043cb2) fep_hwr_aid_pane

0xe0d7,	// (0x0004fbbe) bg_fep_hwr_top_pane_g4_ParamLimits

0x783a,	// (0x00049321) fep_hwr_top_pane_g1_ParamLimits

0x784c,	// (0x00049333) fep_hwr_top_pane_g2_ParamLimits

0x2284,	// (0x00043d6b) fep_hwr_top_pane_g3_ParamLimits

0xfae1,	// (0x000515c8) fep_hwr_top_pane_g_ParamLimits

0x2299,	// (0x00043d80) fep_hwr_top_text_pane_ParamLimits

0x6072,	// (0x00047b59) aid_touch_tab_arrow_arrow_2

0x607b,	// (0x00047b62) aid_touch_tab_arrow_left_2

0x21df,	// (0x00043cc6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2216,	// (0x00043cfd) fep_hwr_prediction_pane

0x79ac,	// (0x00049493) fep_vkb_prediction_pane

0xe211,	// (0x0004fcf8) fep_vkb_side_pane_g3_ParamLimits

0xe211,	// (0x0004fcf8) fep_vkb_side_pane_g3

0x7a5c,	// (0x00049543) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7edc,	// (0x000499c3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ee9,	// (0x000499d0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8b,	// (0x00051672) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x890c,	// (0x0004a3f3) fep_hwr_prediction_pane_g1

0x25e6,	// (0x000440cd) fep_hwr_prediction_pane_g2

0x25ee,	// (0x000440d5) fep_hwr_prediction_pane_g3

0x25f6,	// (0x000440dd) fep_hwr_prediction_pane_g4

0x0003,

0xfc8e,	// (0x00051775) fep_hwr_prediction_pane_g

0x890c,	// (0x0004a3f3) fep_vkb_prediction_pane_g1

0x8916,	// (0x0004a3fd) fep_vkb_prediction_pane_g2

0x891e,	// (0x0004a405) fep_vkb_prediction_pane_g3

0x8926,	// (0x0004a40d) fep_vkb_prediction_pane_g4

0x0003,

0xfc97,	// (0x0005177e) fep_vkb_prediction_pane_g

0x1f54,	// (0x00043a3b) slider_set_pane_g3

0x1f68,	// (0x00043a4f) slider_set_pane_g4

0x1f80,	// (0x00043a67) slider_set_pane_g5

0x1f54,	// (0x00043a3b) slider_set_pane_g6

0x1f96,	// (0x00043a7d) slider_set_pane_g7

0x66ff,	// (0x000481e6) slider_form_pane_g3

0x6708,	// (0x000481ef) slider_form_pane_g4

0x6710,	// (0x000481f7) slider_form_pane_g5

0x66ff,	// (0x000481e6) slider_form_pane_g6

0xdd71,	// (0x0004f858) slider_form_pane_g7

0x6d69,	// (0x00048850) slider_set_pane_vc_g3

0x6d72,	// (0x00048859) slider_set_pane_vc_g4

0x6d7b,	// (0x00048862) slider_set_pane_vc_g5

0x6d69,	// (0x00048850) slider_set_pane_vc_g6

0x6d84,	// (0x0004886b) slider_set_pane_vc_g7

0x6f46,	// (0x00048a2d) slider_form_pane_vc_g1

0x6f4f,	// (0x00048a36) slider_form_pane_vc_g2

0x6f58,	// (0x00048a3f) slider_form_pane_vc_g3

0x6f46,	// (0x00048a2d) slider_form_pane_vc_g4

0x6f61,	// (0x00048a48) slider_form_pane_vc_g5

0x0004,

0xfa5e,	// (0x00051545) slider_form_pane_vc_g

0xd482,	// (0x0004ef69) main_idle_act3_pane

0x892e,	// (0x0004a415) ai3_links_pane

0xe3df,	// (0x0004fec6) popup_ai3_data_window_ParamLimits

0xe3df,	// (0x0004fec6) popup_ai3_data_window

0xd482,	// (0x0004ef69) grid_ai3_links_pane

0xe3f9,	// (0x0004fee0) cell_ai3_links_pane_ParamLimits

0xe3f9,	// (0x0004fee0) cell_ai3_links_pane

0x8969,	// (0x0004a450) bg_popup_sub_pane_cp11

0x8976,	// (0x0004a45d) cell_ai3_links_pane_g1

0xd482,	// (0x0004ef69) bg_popup_sub_pane_cp12

0x899b,	// (0x0004a482) heading_ai3_data_pane

0x89a3,	// (0x0004a48a) list_ai3_gene_pane

0x89af,	// (0x0004a496) popup_ai3_data_window_g1

0x89b7,	// (0x0004a49e) heading_ai3_data_pane_g1

0x89bf,	// (0x0004a4a6) heading_ai3_data_pane_t1

0x89cd,	// (0x0004a4b4) list_double_ai3_gene_pane_ParamLimits

0x89cd,	// (0x0004a4b4) list_double_ai3_gene_pane

0x89da,	// (0x0004a4c1) list_single_ai3_gene_pane_ParamLimits

0x89da,	// (0x0004a4c1) list_single_ai3_gene_pane

0x77a3,	// (0x0004928a) list_highlight_pane_cp7_ParamLimits

0x77a3,	// (0x0004928a) list_highlight_pane_cp7

0x89e7,	// (0x0004a4ce) list_single_a13_gene_pane_t1_ParamLimits

0x89e7,	// (0x0004a4ce) list_single_a13_gene_pane_t1

0x89fe,	// (0x0004a4e5) list_single_ai3_gene_pane_g1

0x8a07,	// (0x0004a4ee) list_single_ai3_gene_pane_g2

0x0001,

0xfca0,	// (0x00051787) list_single_ai3_gene_pane_g

0x8a0f,	// (0x0004a4f6) list_double_ai3_gene_pane_g1_ParamLimits

0x8a0f,	// (0x0004a4f6) list_double_ai3_gene_pane_g1

0x8a1b,	// (0x0004a502) list_double_ai3_gene_pane_t1_ParamLimits

0x8a1b,	// (0x0004a502) list_double_ai3_gene_pane_t1

0x8a37,	// (0x0004a51e) list_double_ai3_gene_pane_t2_ParamLimits

0x8a37,	// (0x0004a51e) list_double_ai3_gene_pane_t2

0x8a4d,	// (0x0004a534) list_double_ai3_gene_pane_t3_ParamLimits

0x8a4d,	// (0x0004a534) list_double_ai3_gene_pane_t3

0x0002,

0xfca5,	// (0x0005178c) list_double_ai3_gene_pane_t_ParamLimits

0xfca5,	// (0x0005178c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0a31,	// (0x00042518) aid_size_min_col_2

0xe3c9,	// (0x0004feb0) aid_size_min_msg_ParamLimits

0xe3c9,	// (0x0004feb0) aid_size_min_msg

0xe225,	// (0x0004fd0c) fep_vkb_top_text_pane_g2_ParamLimits

0xe225,	// (0x0004fd0c) fep_vkb_top_text_pane_g2

0x0001,

0xfb11,	// (0x000515f8) fep_vkb_top_text_pane_g_ParamLimits

0xfb11,	// (0x000515f8) fep_vkb_top_text_pane_g

0xd482,	// (0x0004ef69) main_hc_apps_shell_pane

0x8a6a,	// (0x0004a551) grid_hc_apps_pane_ParamLimits

0x8a6a,	// (0x0004a551) grid_hc_apps_pane

0x8a7c,	// (0x0004a563) list_hc_apps_pane

0x8a84,	// (0x0004a56b) scroll_pane_cp37_ParamLimits

0x8a84,	// (0x0004a56b) scroll_pane_cp37

0xe413,	// (0x0004fefa) cell_hc_apps_pane_ParamLimits

0xe413,	// (0x0004fefa) cell_hc_apps_pane

0xe4d1,	// (0x0004ffb8) cell_hc_apps_pane_g1_ParamLimits

0xe4d1,	// (0x0004ffb8) cell_hc_apps_pane_g1

0x8b6e,	// (0x0004a655) cell_hc_apps_pane_g2_ParamLimits

0x8b6e,	// (0x0004a655) cell_hc_apps_pane_g2

0x8b8a,	// (0x0004a671) cell_hc_apps_pane_g3_ParamLimits

0x8b8a,	// (0x0004a671) cell_hc_apps_pane_g3

0x0002,

0xfcac,	// (0x00051793) cell_hc_apps_pane_g_ParamLimits

0xfcac,	// (0x00051793) cell_hc_apps_pane_g

0xe4fd,	// (0x0004ffe4) cell_hc_apps_pane_t1_ParamLimits

0xe4fd,	// (0x0004ffe4) cell_hc_apps_pane_t1

0x36a9,	// (0x00045190) grid_highlight_pane_cp10_ParamLimits

0x36a9,	// (0x00045190) grid_highlight_pane_cp10

0xe53b,	// (0x00050022) list_single_hc_apps_pane_ParamLimits

0xe53b,	// (0x00050022) list_single_hc_apps_pane

0xe568,	// (0x0005004f) list_single_hc_apps_pane_g1

0xcde9,	// (0x0004e8d0) list_single_hc_apps_pane_g2

0x0001,

0xfcb3,	// (0x0005179a) list_single_hc_apps_pane_g

0xce02,	// (0x0004e8e9) list_single_hc_apps_pane_g2_copy1

0x0af5,	// (0x000425dc) list_single_hc_apps_pane_t1

0x3420,	// (0x00044f07) bg_set_opt_pane_cp_ParamLimits

0x0f3a,	// (0x00042a21) setting_slider_pane_t1_ParamLimits

0x0f53,	// (0x00042a3a) setting_slider_pane_t2_ParamLimits

0x0f6d,	// (0x00042a54) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0005101e) setting_slider_pane_t_ParamLimits

0x0f85,	// (0x00042a6c) slider_set_pane_ParamLimits

0x155d,	// (0x00043044) control_pane_g5_ParamLimits

0x155d,	// (0x00043044) control_pane_g5

0x654e,	// (0x00048035) slider_set_pane_g1_ParamLimits

0x1f48,	// (0x00043a2f) slider_set_pane_g2_ParamLimits

0x1f54,	// (0x00043a3b) slider_set_pane_g3_ParamLimits

0x1f68,	// (0x00043a4f) slider_set_pane_g4_ParamLimits

0x1f80,	// (0x00043a67) slider_set_pane_g5_ParamLimits

0x1f54,	// (0x00043a3b) slider_set_pane_g6_ParamLimits

0x1f96,	// (0x00043a7d) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x00051424) slider_set_pane_g_ParamLimits

0x47f2,	// (0x000462d9) navi_icon_text_pane_ParamLimits

0xd61a,	// (0x0004f101) aid_fill_nsta_2_ParamLimits

0xd651,	// (0x0004f138) aid_touch_tab_arrow_left_ParamLimits

0xd667,	// (0x0004f14e) aid_touch_tab_arrow_right_ParamLimits

0xd702,	// (0x0004f1e9) clock_nsta_pane_ParamLimits

0x6054,	// (0x00047b3b) navi_icon_pane_g1_ParamLimits

0x6060,	// (0x00047b47) navi_text_pane_t1_ParamLimits

0x7394,	// (0x00048e7b) navi_icon_text_pane_g1_ParamLimits

0x73a0,	// (0x00048e87) navi_icon_text_pane_t1_ParamLimits

0xe568,	// (0x0005004f) list_single_hc_apps_pane_g1_ParamLimits

0xcde9,	// (0x0004e8d0) list_single_hc_apps_pane_g2_ParamLimits

0xfcb3,	// (0x0005179a) list_single_hc_apps_pane_g_ParamLimits

0xce02,	// (0x0004e8e9) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0af5,	// (0x000425dc) list_single_hc_apps_pane_t1_ParamLimits

0xbe07,	// (0x0004d8ee) popup_toolbar2_fixed_window_ParamLimits

0xbe07,	// (0x0004d8ee) popup_toolbar2_fixed_window

0xcbf6,	// (0x0004e6dd) popup_toolbar2_float_window

0xd482,	// (0x0004ef69) bg_popup_sub_pane_cp27

0x8c61,	// (0x0004a748) grid_toolbar2_float_pane

0xd482,	// (0x0004ef69) bg_popup_sub_pane_cp26

0x8c61,	// (0x0004a748) grid_toolbar2_fixed_pane

0xe581,	// (0x00050068) cell_toolbar2_fixed_pane_ParamLimits

0xe581,	// (0x00050068) cell_toolbar2_fixed_pane

0xe59b,	// (0x00050082) cell_toolbar2_fixed_pane_g1

0x8c82,	// (0x0004a769) toolbar2_fixed_button_pane

0x51c1,	// (0x00046ca8) toolbar2_fixed_button_pane_g1

0x51c9,	// (0x00046cb0) toolbar2_fixed_button_pane_g2

0x51d1,	// (0x00046cb8) toolbar2_fixed_button_pane_g3

0x51d9,	// (0x00046cc0) toolbar2_fixed_button_pane_g4

0x51e1,	// (0x00046cc8) toolbar2_fixed_button_pane_g5

0x51e9,	// (0x00046cd0) toolbar2_fixed_button_pane_g6

0x51f1,	// (0x00046cd8) toolbar2_fixed_button_pane_g7

0x51f9,	// (0x00046ce0) toolbar2_fixed_button_pane_g8

0x5201,	// (0x00046ce8) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x00051326) toolbar2_fixed_button_pane_g

0x8c8a,	// (0x0004a771) cell_toolbar2_float_pane_ParamLimits

0x8c8a,	// (0x0004a771) cell_toolbar2_float_pane

0x8c9b,	// (0x0004a782) cell_toolbar2_float_pane_g1

0x8c82,	// (0x0004a769) toolbar2_fixed_button_pane_cp

0xe0ff,	// (0x0004fbe6) fep_vkb_accented_list_pane_ParamLimits

0xe0ff,	// (0x0004fbe6) fep_vkb_accented_list_pane

0x23e7,	// (0x00043ece) bg_popup_fep_shadow_pane_g9

0x4973,	// (0x0004645a) bg_popup_fep_shadow_pane_cp3

0x3e14,	// (0x000458fb) list_accented_list_pane

0x8ca4,	// (0x0004a78b) list_single_accented_list_pane_ParamLimits

0x8ca4,	// (0x0004a78b) list_single_accented_list_pane

0x4973,	// (0x0004645a) list_highlight_pane_cp10

0x8cb5,	// (0x0004a79c) list_single_accented_list_pane_t1

0xcb20,	// (0x0004e607) popup_slider_window_ParamLimits

0xcb20,	// (0x0004e607) popup_slider_window

0x88ef,	// (0x0004a3d6) aid_indentation_list_msg

0xe692,	// (0x00050179) bg_popup_window_pane_cp19

0x8de1,	// (0x0004a8c8) popup_slider_window_g1

0x8dfd,	// (0x0004a8e4) popup_slider_window_g2

0x8e19,	// (0x0004a900) popup_slider_window_g3

0x0005,

0xfcb8,	// (0x0005179f) popup_slider_window_g

0x8e7f,	// (0x0004a966) popup_slider_window_t1

0x8ef3,	// (0x0004a9da) small_volume_slider_vertical_pane

0x77de,	// (0x000492c5) small_volume_slider_vertical_pane_g1

0x77de,	// (0x000492c5) small_volume_slider_vertical_pane_g2

0x8f0f,	// (0x0004a9f6) small_volume_slider_vertical_pane_g3

0x0002,

0xfcca,	// (0x000517b1) small_volume_slider_vertical_pane_g

0x0c00,	// (0x000426e7) area_side_right_pane_ParamLimits

0x0c00,	// (0x000426e7) area_side_right_pane

0xce1e,	// (0x0004e905) aid_size_side_button_ParamLimits

0xce1e,	// (0x0004e905) aid_size_side_button

0xce37,	// (0x0004e91e) grid_sctrl_middle_pane_ParamLimits

0xce37,	// (0x0004e91e) grid_sctrl_middle_pane

0x2666,	// (0x0004414d) sctrl_sk_bottom_pane

0x2677,	// (0x0004415e) sctrl_sk_top_pane

0x2689,	// (0x00044170) aid_touch_sctrl_top

0x36a9,	// (0x00045190) bg_sctrl_sk_pane_ParamLimits

0x36a9,	// (0x00045190) bg_sctrl_sk_pane

0x2696,	// (0x0004417d) sctrl_sk_top_pane_g1

0x26a3,	// (0x0004418a) sctrl_sk_top_pane_t1

0x2689,	// (0x00044170) aid_touch_sctrl_bottom

0x36a9,	// (0x00045190) bg_sctrl_sk_pane_cp_ParamLimits

0x36a9,	// (0x00045190) bg_sctrl_sk_pane_cp

0x26be,	// (0x000441a5) sctrl_sk_bottom_pane_g1

0x26a3,	// (0x0004418a) sctrl_sk_bottom_pane_t1

0xce56,	// (0x0004e93d) cell_sctrl_middle_pane_ParamLimits

0xce56,	// (0x0004e93d) cell_sctrl_middle_pane

0xce79,	// (0x0004e960) aid_touch_sctrl_middle_ParamLimits

0xce79,	// (0x0004e960) aid_touch_sctrl_middle

0x36a9,	// (0x00045190) bg_sctrl_middle_pane_ParamLimits

0x36a9,	// (0x00045190) bg_sctrl_middle_pane

0x9c8b,	// (0x0004b772) cell_sctrl_middle_pane_g1_ParamLimits

0x9c8b,	// (0x0004b772) cell_sctrl_middle_pane_g1

0xce8d,	// (0x0004e974) cell_sctrl_middle_pane_g2_ParamLimits

0xce8d,	// (0x0004e974) cell_sctrl_middle_pane_g2

0x0001,

0xfcd6,	// (0x000517bd) cell_sctrl_middle_pane_g_ParamLimits

0xfcd6,	// (0x000517bd) cell_sctrl_middle_pane_g

0x51c1,	// (0x00046ca8) bg_sctrl_middle_pane_g1

0x51c9,	// (0x00046cb0) bg_sctrl_middle_pane_g2

0x51d1,	// (0x00046cb8) bg_sctrl_middle_pane_g3

0x51d9,	// (0x00046cc0) bg_sctrl_middle_pane_g4

0x51e1,	// (0x00046cc8) bg_sctrl_middle_pane_g5

0x51e9,	// (0x00046cd0) bg_sctrl_middle_pane_g6

0x51f1,	// (0x00046cd8) bg_sctrl_middle_pane_g7

0x51f9,	// (0x00046ce0) bg_sctrl_middle_pane_g8

0x0007,

0xfcdb,	// (0x000517c2) bg_sctrl_middle_pane_g

0x5201,	// (0x00046ce8) bg_sctrl_middle_pane_g8_copy1

0x51c1,	// (0x00046ca8) bg_sctrl_sk_pane_g1

0x51c9,	// (0x00046cb0) bg_sctrl_sk_pane_g2

0x51d1,	// (0x00046cb8) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x00051326) bg_sctrl_sk_pane_g

0x3bdc,	// (0x000456c3) aid_size_touch_scroll_bar

0x51d9,	// (0x00046cc0) bg_sctrl_sk_pane_g4

0x51e1,	// (0x00046cc8) bg_sctrl_sk_pane_g5

0x51e9,	// (0x00046cd0) bg_sctrl_sk_pane_g6

0x51f1,	// (0x00046cd8) bg_sctrl_sk_pane_g7

0x51f9,	// (0x00046ce0) bg_sctrl_sk_pane_g8

0x5201,	// (0x00046ce8) bg_sctrl_sk_pane_g9

0x171b,	// (0x00043202) popup_fep_china_hwr2_fs_candidate_window

0xc634,	// (0x0004e11b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc634,	// (0x0004e11b) popup_fep_china_hwr2_fs_control_window

0x7a5c,	// (0x00049543) sctrl_sk_top_pane_g2

0x0001,

0xfcd1,	// (0x000517b8) sctrl_sk_top_pane_g

0xe74a,	// (0x00050231) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe74a,	// (0x00050231) aid_fep_china_hwr2_fs_cell

0xe75e,	// (0x00050245) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe75e,	// (0x00050245) bg_popup_fep_shadow_pane_cp4

0xe775,	// (0x0005025c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe775,	// (0x0005025c) bg_popup_fep_shadow_pane_cp5

0xe787,	// (0x0005026e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe787,	// (0x0005026e) popup_fep_china_hwr2_fs_control_bar_grid

0xe79b,	// (0x00050282) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f6b,	// (0x0004aa52) aid_fep_china_hwr2_fs_candi_cell

0xd482,	// (0x0004ef69) bg_popup_fep_shadow_pane_cp6

0x8f75,	// (0x0004aa5c) popup_fep_china_hwr2_fs_candidate_grid

0xe7a3,	// (0x0005028a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7a3,	// (0x0005028a) cell_fep_china_hwr2_fs_funtion_grid

0x77de,	// (0x000492c5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f97,	// (0x0004aa7e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f97,	// (0x0004aa7e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8fa5,	// (0x0004aa8c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8fa5,	// (0x0004aa8c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcec,	// (0x000517d3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcec,	// (0x000517d3) cell_fep_china_hwr2_fs_funtion_grid_g

0xe7bb,	// (0x000502a2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe7bb,	// (0x000502a2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe7d0,	// (0x000502b7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe7d0,	// (0x000502b7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf1,	// (0x000517d8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf1,	// (0x000517d8) cell_fep_china_hwr2_fs_funtion_grid_t

0x900d,	// (0x0004aaf4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9015,	// (0x0004aafc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x901d,	// (0x0004ab04) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf6,	// (0x000517dd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9025,	// (0x0004ab0c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9025,	// (0x0004ab0c) cell_fep_china_hwr2_fs_candidate_grid

0x903e,	// (0x0004ab25) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9046,	// (0x0004ab2d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77de,	// (0x000492c5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77de,	// (0x000492c5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb16,	// (0x000515fd) cell_fep_china_hwr2_fs_candidate_grid_g

0x904e,	// (0x0004ab35) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4db7,	// (0x0004689e) clock_nsta_pane_cp_24_ParamLimits

0x4db7,	// (0x0004689e) clock_nsta_pane_cp_24

0x4e35,	// (0x0004691c) indicator_nsta_pane_cp_24_ParamLimits

0x4e35,	// (0x0004691c) indicator_nsta_pane_cp_24

0x5ed0,	// (0x000479b7) heading_pane_g1

0x0001,

0xf8a4,	// (0x0005138b) heading_pane_g

0x68fb,	// (0x000483e2) grid_sct_catagory_button_pane

0x692b,	// (0x00048412) scroll_pane_cp5_ParamLimits

0x73e2,	// (0x00048ec9) button_value_adjust_pane_cp5_ParamLimits

0x73e2,	// (0x00048ec9) button_value_adjust_pane_cp5

0x74c1,	// (0x00048fa8) form2_midp_time_pane_ParamLimits

0x905c,	// (0x0004ab43) cell_sct_catagory_button_pane_ParamLimits

0x905c,	// (0x0004ab43) cell_sct_catagory_button_pane

0x77a3,	// (0x0004928a) bg_button_pane_cp01_ParamLimits

0x77a3,	// (0x0004928a) bg_button_pane_cp01

0x77de,	// (0x000492c5) cell_sct_catagory_button_pane_g1

0xcb99,	// (0x0004e680) popup_tb_extension_window

0xe7ec,	// (0x000502d3) aid_size_cell_ext_ParamLimits

0xe7ec,	// (0x000502d3) aid_size_cell_ext

0x3a1e,	// (0x00045505) bg_tb_trans_pane_cp1_ParamLimits

0x3a1e,	// (0x00045505) bg_tb_trans_pane_cp1

0xe812,	// (0x000502f9) grid_tb_ext_pane_ParamLimits

0xe812,	// (0x000502f9) grid_tb_ext_pane

0xe84d,	// (0x00050334) cell_tb_ext_pane_ParamLimits

0xe84d,	// (0x00050334) cell_tb_ext_pane

0xe875,	// (0x0005035c) cell_tb_ext_pane_g1_ParamLimits

0xe875,	// (0x0005035c) cell_tb_ext_pane_g1

0x90f0,	// (0x0004abd7) cell_tb_ext_pane_t1

0x36a9,	// (0x00045190) list_highlight_pane_cp11_ParamLimits

0x36a9,	// (0x00045190) list_highlight_pane_cp11

0xbe1c,	// (0x0004d903) popup_uni_indicator_window_ParamLimits

0xbe1c,	// (0x0004d903) popup_uni_indicator_window

0x3cb9,	// (0x000457a0) bg_popup_sub_pane_cp14

0x910b,	// (0x0004abf2) list_uniindi_pane

0x9117,	// (0x0004abfe) uniindi_top_pane

0x36a9,	// (0x00045190) bg_uniindi_top_pane

0x9136,	// (0x0004ac1d) uniindi_top_pane_g1

0x914c,	// (0x0004ac33) uniindi_top_pane_g2

0x0003,

0xfcfd,	// (0x000517e4) uniindi_top_pane_g

0x9176,	// (0x0004ac5d) uniindi_top_pane_t1

0x91a0,	// (0x0004ac87) list_single_uniindi_pane_ParamLimits

0x91a0,	// (0x0004ac87) list_single_uniindi_pane

0x77de,	// (0x000492c5) bg_uniindi_top_pane_g1

0x91b3,	// (0x0004ac9a) list_single_uniindi_pane_g1

0x91c6,	// (0x0004acad) list_single_uniindi_pane_t1

0xd482,	// (0x0004ef69) control_bg_pane

0x91eb,	// (0x0004acd2) bg_sctrl_sk_pane_cp1

0x91f4,	// (0x0004acdb) bg_sctrl_sk_pane_cp2

0x91fd,	// (0x0004ace4) control_bg_pane_g1

0x9206,	// (0x0004aced) control_bg_pane_g2

0x0001,

0xfd06,	// (0x000517ed) control_bg_pane_g

0x722c,	// (0x00048d13) cell_indicator_nsta_pane_g1_ParamLimits

0xdf64,	// (0x0004fa4b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7a,	// (0x00051561) cell_indicator_nsta_pane_g_ParamLimits

0x0892,	// (0x00042379) form2_midp_time_pane_t1_ParamLimits

0x21bd,	// (0x00043ca4) main_idle_act4_pane_ParamLimits

0x21bd,	// (0x00043ca4) main_idle_act4_pane

0xcb99,	// (0x0004e680) popup_tb_extension_window_ParamLimits

0xe834,	// (0x0005031b) tb_ext_find_pane_ParamLimits

0xe834,	// (0x0005031b) tb_ext_find_pane

0x920f,	// (0x0004acf6) ai_gene_pane_1_cp1

0x4aba,	// (0x000465a1) ai_gene_pane_2_cp1

0x9217,	// (0x0004acfe) list_single_idle_plugin_calendar_pane

0x9220,	// (0x0004ad07) list_single_idle_plugin_notification_pane

0x9229,	// (0x0004ad10) list_single_idle_plugin_player_pane

0xe892,	// (0x00050379) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe892,	// (0x00050379) list_single_idle_plugin_shortcut_pane

0xe8ba,	// (0x000503a1) main_idle_act4_pane_t1

0xe8d0,	// (0x000503b7) main_idle_act4_pane_t2

0x0001,

0xfd0b,	// (0x000517f2) main_idle_act4_pane_t

0xe8e6,	// (0x000503cd) middle_sk_idle_act4_pane_ParamLimits

0xe8e6,	// (0x000503cd) middle_sk_idle_act4_pane

0xe902,	// (0x000503e9) popup_clock_digital_analogue_window_cp2

0xe92a,	// (0x00050411) shortcut_wheel_idle_act4_pane_ParamLimits

0xe92a,	// (0x00050411) shortcut_wheel_idle_act4_pane

0x77de,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g1

0x77de,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g2

0x77de,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g3

0x77de,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g4

0x77de,	// (0x000492c5) shortcut_wheel_idle_act4_pane_g5

0x92bc,	// (0x0004ada3) shortcut_wheel_idle_act4_pane_g6

0x92c4,	// (0x0004adab) shortcut_wheel_idle_act4_pane_g7

0x92cc,	// (0x0004adb3) shortcut_wheel_idle_act4_pane_g8

0x92d4,	// (0x0004adbb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd10,	// (0x000517f7) shortcut_wheel_idle_act4_pane_g

0xe0d7,	// (0x0004fbbe) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0d7,	// (0x0004fbbe) middle_sk_idle_act4_pane_g1

0xe9a7,	// (0x0005048e) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9a7,	// (0x0005048e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd33,	// (0x0005181a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd33,	// (0x0005181a) middle_sk_idle_act4_pane_g

0xe9bf,	// (0x000504a6) middle_sk_idle_act4_pane_t1_ParamLimits

0xe9bf,	// (0x000504a6) middle_sk_idle_act4_pane_t1

0xe9ee,	// (0x000504d5) grid_ai_shortcut_pane_ParamLimits

0xe9ee,	// (0x000504d5) grid_ai_shortcut_pane

0xea0b,	// (0x000504f2) list_highlight_pane_cp16_ParamLimits

0xea0b,	// (0x000504f2) list_highlight_pane_cp16

0xea18,	// (0x000504ff) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea18,	// (0x000504ff) list_single_idle_plugin_shortcut_pane_g1

0xea24,	// (0x0005050b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea24,	// (0x0005050b) list_single_idle_plugin_shortcut_pane_g2

0xea40,	// (0x00050527) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea40,	// (0x00050527) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd38,	// (0x0005181f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd38,	// (0x0005181f) list_single_idle_plugin_shortcut_pane_g

0xea55,	// (0x0005053c) cell_ai_shortcut_pane_ParamLimits

0xea55,	// (0x0005053c) cell_ai_shortcut_pane

0xea6b,	// (0x00050552) cell_ai_shortcut_pane_g1_ParamLimits

0xea6b,	// (0x00050552) cell_ai_shortcut_pane_g1

0x920f,	// (0x0004acf6) ai_gene_pane_1_cp2

0x9404,	// (0x0004aeeb) ai_gene_pane_2_cp2

0x940c,	// (0x0004aef3) list_highlight_pane_cp15

0x9415,	// (0x0004aefc) list_single_idle_plugin_calendar_pane_g1

0x940c,	// (0x0004aef3) list_highlight_pane_cp17

0x941d,	// (0x0004af04) list_single_idle_plugin_calendar_pane_g1_copy1

0x9425,	// (0x0004af0c) list_single_idle_plugin_player_pane_g1

0x6b60,	// (0x00048647) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3f,	// (0x00051826) list_single_idle_plugin_player_pane_g

0x942d,	// (0x0004af14) list_single_idle_plugin_player_pane_t1

0x943b,	// (0x0004af22) list_single_idle_plugin_player_pane_t2

0x9449,	// (0x0004af30) list_single_idle_plugin_player_pane_t3

0x9457,	// (0x0004af3e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd44,	// (0x0005182b) list_single_idle_plugin_player_pane_t

0x9465,	// (0x0004af4c) wait_bar_pane_cp15

0x946d,	// (0x0004af54) grid_ai_notification_pane

0x6b60,	// (0x00048647) list_single_idle_plugin_notification_pane_g1

0xea8d,	// (0x00050574) cell_ai_notification_pane_ParamLimits

0xea8d,	// (0x00050574) cell_ai_notification_pane

0x9483,	// (0x0004af6a) cell_ai_notification_pane_g1

0x948b,	// (0x0004af72) cell_ai_notification_pane_t1

0xea9a,	// (0x00050581) tb_ext_find_button_pane

0xeaa2,	// (0x00050589) tb_ext_find_pane_g1

0xeaaa,	// (0x00050591) tb_ext_find_pane_t1

0x4342,	// (0x00045e29) tb_ext_find_button_pane_g1

0x94b7,	// (0x0004af9e) tb_ext_find_button_pane_g2

0x0001,

0xfd4d,	// (0x00051834) tb_ext_find_button_pane_g

0xe8ba,	// (0x000503a1) main_idle_act4_pane_t1_ParamLimits

0xe8d0,	// (0x000503b7) main_idle_act4_pane_t2_ParamLimits

0xfd0b,	// (0x000517f2) main_idle_act4_pane_t_ParamLimits

0xe902,	// (0x000503e9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe91a,	// (0x00050401) sat_plugin_idle_act4_pane_ParamLimits

0xe91a,	// (0x00050401) sat_plugin_idle_act4_pane

0xeab8,	// (0x0005059f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeab8,	// (0x0005059f) sat_plugin_idle_act4_pane_t1

0xead0,	// (0x000505b7) sat_plugin_idle_act4_pane_t2_ParamLimits

0xead0,	// (0x000505b7) sat_plugin_idle_act4_pane_t2

0xeae8,	// (0x000505cf) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeae8,	// (0x000505cf) sat_plugin_idle_act4_pane_t3

0xeb00,	// (0x000505e7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb00,	// (0x000505e7) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd52,	// (0x00051839) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd52,	// (0x00051839) sat_plugin_idle_act4_pane_t

0x0d9e,	// (0x00042885) popup_battery_window_ParamLimits

0x0d9e,	// (0x00042885) popup_battery_window

0x36a9,	// (0x00045190) bg_popup_sub_pane_cp25_ParamLimits

0x36a9,	// (0x00045190) bg_popup_sub_pane_cp25

0x950c,	// (0x0004aff3) popup_battery_window_g1_ParamLimits

0x950c,	// (0x0004aff3) popup_battery_window_g1

0x9518,	// (0x0004afff) popup_battery_window_t1_ParamLimits

0x9518,	// (0x0004afff) popup_battery_window_t1

0x952a,	// (0x0004b011) popup_battery_window_t2_ParamLimits

0x952a,	// (0x0004b011) popup_battery_window_t2

0x0001,

0xfd5b,	// (0x00051842) popup_battery_window_t_ParamLimits

0xfd5b,	// (0x00051842) popup_battery_window_t

0xd4f4,	// (0x0004efdb) midp_canvas_pane_ParamLimits

0xd551,	// (0x0004f038) midp_keypad_pane_ParamLimits

0xd551,	// (0x0004f038) midp_keypad_pane

0x4c97,	// (0x0004677e) main_midp_pane_ParamLimits

0x72a6,	// (0x00048d8d) signal_pane_g2_cp_ParamLimits

0xeb18,	// (0x000505ff) aid_size_cell_midp_keypad_ParamLimits

0xeb18,	// (0x000505ff) aid_size_cell_midp_keypad

0xeb36,	// (0x0005061d) midp_keyp_game_grid_pane_ParamLimits

0xeb36,	// (0x0005061d) midp_keyp_game_grid_pane

0xeb5d,	// (0x00050644) midp_keyp_rocker_pane_ParamLimits

0xeb5d,	// (0x00050644) midp_keyp_rocker_pane

0xebae,	// (0x00050695) midp_keyp_sk_left_pane_ParamLimits

0xebae,	// (0x00050695) midp_keyp_sk_left_pane

0xec02,	// (0x000506e9) midp_keyp_sk_right_pane_ParamLimits

0xec02,	// (0x000506e9) midp_keyp_sk_right_pane

0xd482,	// (0x0004ef69) bg_button_pane_cp03

0xec56,	// (0x0005073d) midp_keyp_sk_left_pane_g1

0xd482,	// (0x0004ef69) bg_button_pane_cp04

0xec56,	// (0x0005073d) midp_keyp_sk_right_pane_g1

0x77de,	// (0x000492c5) midp_keyp_rocker_pane_g1

0xec5f,	// (0x00050746) keyp_game_cell_pane_ParamLimits

0xec5f,	// (0x00050746) keyp_game_cell_pane

0xd482,	// (0x0004ef69) bg_button_pane_cp02

0xec83,	// (0x0005076a) keyp_game_cell_pane_g1

0xbdb7,	// (0x0004d89e) popup_fep_vkb2_window_ParamLimits

0xbdb7,	// (0x0004d89e) popup_fep_vkb2_window

0xce9f,	// (0x0004e986) aid_size_cell_vkb2_ParamLimits

0xce9f,	// (0x0004e986) aid_size_cell_vkb2

0xcecb,	// (0x0004e9b2) popup_fep_vkb2_window_g1_ParamLimits

0xcecb,	// (0x0004e9b2) popup_fep_vkb2_window_g1

0xcf1b,	// (0x0004ea02) vkb2_area_bottom_pane_ParamLimits

0xcf1b,	// (0x0004ea02) vkb2_area_bottom_pane

0xcf6f,	// (0x0004ea56) vkb2_area_keypad_pane_ParamLimits

0xcf6f,	// (0x0004ea56) vkb2_area_keypad_pane

0xcfb7,	// (0x0004ea9e) vkb2_area_top_pane_ParamLimits

0xcfb7,	// (0x0004ea9e) vkb2_area_top_pane

0xd043,	// (0x0004eb2a) vkb2_top_entry_pane_ParamLimits

0xd043,	// (0x0004eb2a) vkb2_top_entry_pane

0xd070,	// (0x0004eb57) vkb2_top_grid_left_pane_ParamLimits

0xd070,	// (0x0004eb57) vkb2_top_grid_left_pane

0xd091,	// (0x0004eb78) vkb2_top_grid_right_pane_ParamLimits

0xd091,	// (0x0004eb78) vkb2_top_grid_right_pane

0x291b,	// (0x00044402) vkb2_cell_keypad_pane_ParamLimits

0x291b,	// (0x00044402) vkb2_cell_keypad_pane

0xd0d9,	// (0x0004ebc0) vkb2_area_bottom_grid_pane_ParamLimits

0xd0d9,	// (0x0004ebc0) vkb2_area_bottom_grid_pane

0xd103,	// (0x0004ebea) vkb2_area_bottom_pane_g1_ParamLimits

0xd103,	// (0x0004ebea) vkb2_area_bottom_pane_g1

0xd129,	// (0x0004ec10) vkb2_area_bottom_pane_g2_ParamLimits

0xd129,	// (0x0004ec10) vkb2_area_bottom_pane_g2

0xd15a,	// (0x0004ec41) vkb2_area_bottom_pane_g3_ParamLimits

0xd15a,	// (0x0004ec41) vkb2_area_bottom_pane_g3

0x0002,

0xfd60,	// (0x00051847) vkb2_area_bottom_pane_g_ParamLimits

0xfd60,	// (0x00051847) vkb2_area_bottom_pane_g

0x2ac5,	// (0x000445ac) vkb2_top_cell_left_pane_ParamLimits

0x2ac5,	// (0x000445ac) vkb2_top_cell_left_pane

0xec8c,	// (0x00050773) vkb2_top_entry_pane_g1_ParamLimits

0xec8c,	// (0x00050773) vkb2_top_entry_pane_g1

0xec9a,	// (0x00050781) vkb2_top_entry_pane_t1_ParamLimits

0xec9a,	// (0x00050781) vkb2_top_entry_pane_t1

0x96db,	// (0x0004b1c2) vkb2_top_entry_pane_t2_ParamLimits

0x96db,	// (0x0004b1c2) vkb2_top_entry_pane_t2

0x970d,	// (0x0004b1f4) vkb2_top_entry_pane_t3_ParamLimits

0x970d,	// (0x0004b1f4) vkb2_top_entry_pane_t3

0x0002,

0xfd67,	// (0x0005184e) vkb2_top_entry_pane_t_ParamLimits

0xfd67,	// (0x0005184e) vkb2_top_entry_pane_t

0xd1c4,	// (0x0004ecab) vkb2_top_grid_right_pane_g1_ParamLimits

0xd1c4,	// (0x0004ecab) vkb2_top_grid_right_pane_g1

0x2b28,	// (0x0004460f) vkb2_top_grid_right_pane_g2_ParamLimits

0x2b28,	// (0x0004460f) vkb2_top_grid_right_pane_g2

0x2b40,	// (0x00044627) vkb2_top_grid_right_pane_g3_ParamLimits

0x2b40,	// (0x00044627) vkb2_top_grid_right_pane_g3

0xd1da,	// (0x0004ecc1) vkb2_top_grid_right_pane_g4_ParamLimits

0xd1da,	// (0x0004ecc1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6e,	// (0x00051855) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6e,	// (0x00051855) vkb2_top_grid_right_pane_g

0x2b6e,	// (0x00044655) vkb2_top_cell_left_pane_g1

0x2b85,	// (0x0004466c) vkb2_cell_keypad_pane_g1_ParamLimits

0x2b85,	// (0x0004466c) vkb2_cell_keypad_pane_g1

0x9731,	// (0x0004b218) vkb2_cell_keypad_pane_t1_ParamLimits

0x9731,	// (0x0004b218) vkb2_cell_keypad_pane_t1

0x2b93,	// (0x0004467a) vkb2_cell_bottom_grid_pane_ParamLimits

0x2b93,	// (0x0004467a) vkb2_cell_bottom_grid_pane

0x2bcc,	// (0x000446b3) vkb2_cell_bottom_grid_pane_g1

0xe94b,	// (0x00050432) aid_call2_pane_cp02

0xe953,	// (0x0005043a) aid_call_pane_cp02

0xe95b,	// (0x00050442) clock_digital_number_pane_cp10

0xe963,	// (0x0005044a) clock_digital_number_pane_cp11

0xe96b,	// (0x00050452) clock_digital_number_pane_cp12

0xe973,	// (0x0005045a) clock_digital_number_pane_cp13

0xe97b,	// (0x00050462) clock_digital_separator_pane_cp10

0x4342,	// (0x00045e29) popup_clock_digital_analogue_window_cp2_g1

0x4342,	// (0x00045e29) popup_clock_digital_analogue_window_cp2_g2

0xe983,	// (0x0005046a) popup_clock_digital_analogue_window_cp2_g3

0x4342,	// (0x00045e29) popup_clock_digital_analogue_window_cp2_g4

0xe983,	// (0x0005046a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd23,	// (0x0005180a) popup_clock_digital_analogue_window_cp2_g

0xe98b,	// (0x00050472) popup_clock_digital_analogue_window_cp2_t1

0xe999,	// (0x00050480) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2e,	// (0x00051815) popup_clock_digital_analogue_window_cp2_t

0x77de,	// (0x000492c5) clock_digital_number_pane_cp10_g1

0x77de,	// (0x000492c5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb16,	// (0x000515fd) clock_digital_number_pane_cp10_g

0x77de,	// (0x000492c5) clock_digital_separator_pane_cp10_g1

0x77de,	// (0x000492c5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb16,	// (0x000515fd) clock_digital_separator_pane_cp10_g

0x9158,	// (0x0004ac3f) uniindi_top_pane_g3

0x9169,	// (0x0004ac50) uniindi_top_pane_g4

0x29a6,	// (0x0004448d) vkb2_row_keypad_pane_ParamLimits

0x29a6,	// (0x0004448d) vkb2_row_keypad_pane

0x2bec,	// (0x000446d3) vkb2_cell_t_keypad_pane_ParamLimits

0x2bec,	// (0x000446d3) vkb2_cell_t_keypad_pane

0x2bfc,	// (0x000446e3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2bfc,	// (0x000446e3) vkb2_cell_t_keypad_pane_cp08

0x2c0f,	// (0x000446f6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2c0f,	// (0x000446f6) vkb2_cell_t_keypad_pane_cp09

0x2c23,	// (0x0004470a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2c23,	// (0x0004470a) vkb2_cell_t_keypad_pane_cp01

0x2c34,	// (0x0004471b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2c34,	// (0x0004471b) vkb2_cell_t_keypad_pane_cp02

0x2c45,	// (0x0004472c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2c45,	// (0x0004472c) vkb2_cell_t_keypad_pane_cp03

0x2c56,	// (0x0004473d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2c56,	// (0x0004473d) vkb2_cell_t_keypad_pane_cp04

0x2c67,	// (0x0004474e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2c67,	// (0x0004474e) vkb2_cell_t_keypad_pane_cp05

0x2c78,	// (0x0004475f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2c78,	// (0x0004475f) vkb2_cell_t_keypad_pane_cp06

0x2c89,	// (0x00044770) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2c89,	// (0x00044770) vkb2_cell_t_keypad_pane_cp07

0x2c9a,	// (0x00044781) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2c9a,	// (0x00044781) vkb2_cell_t_keypad_pane_cp10

0x7a5c,	// (0x00049543) vkb2_cell_t_keypad_pane_g1

0x9748,	// (0x0004b22f) vkb2_cell_t_keypad_pane_t1

0xd482,	// (0x0004ef69) popup_grid_graphic2_window

0xecd3,	// (0x000507ba) aid_size_cell_graphic2_ParamLimits

0xecd3,	// (0x000507ba) aid_size_cell_graphic2

0xed11,	// (0x000507f8) bg_popup_window_pane_cp21_ParamLimits

0xed11,	// (0x000507f8) bg_popup_window_pane_cp21

0xed1f,	// (0x00050806) graphic2_pages_pane_ParamLimits

0xed1f,	// (0x00050806) graphic2_pages_pane

0xed75,	// (0x0005085c) grid_graphic2_control_pane_ParamLimits

0xed75,	// (0x0005085c) grid_graphic2_control_pane

0xedbd,	// (0x000508a4) grid_graphic2_pane_ParamLimits

0xedbd,	// (0x000508a4) grid_graphic2_pane

0xee44,	// (0x0005092b) cell_graphic2_pane

0xd482,	// (0x0004ef69) main_comp_mode_pane

0x89a3,	// (0x0004a48a) list_ai3_gene_pane_ParamLimits

0xe692,	// (0x00050179) bg_popup_window_pane_cp19_ParamLimits

0x8d85,	// (0x0004a86c) bg_touch_area_indi_pane_ParamLimits

0x8d85,	// (0x0004a86c) bg_touch_area_indi_pane

0x8d9b,	// (0x0004a882) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d9b,	// (0x0004a882) bg_touch_area_indi_pane_cp01

0x8db1,	// (0x0004a898) bg_touch_area_indi_pane_cp02_ParamLimits

0x8db1,	// (0x0004a898) bg_touch_area_indi_pane_cp02

0x8dc7,	// (0x0004a8ae) bg_touch_area_indi_pane_cp03_ParamLimits

0x8dc7,	// (0x0004a8ae) bg_touch_area_indi_pane_cp03

0x8de1,	// (0x0004a8c8) popup_slider_window_g1_ParamLimits

0x8dfd,	// (0x0004a8e4) popup_slider_window_g2_ParamLimits

0x8e19,	// (0x0004a900) popup_slider_window_g3_ParamLimits

0xfcb8,	// (0x0005179f) popup_slider_window_g_ParamLimits

0x8e7f,	// (0x0004a966) popup_slider_window_t1_ParamLimits

0x8ef3,	// (0x0004a9da) small_volume_slider_vertical_pane_ParamLimits

0xee44,	// (0x0005092b) cell_graphic2_pane_ParamLimits

0xee9f,	// (0x00050986) bg_button_pane_cp10_ParamLimits

0xee9f,	// (0x00050986) bg_button_pane_cp10

0xeeb2,	// (0x00050999) bg_button_pane_cp11_ParamLimits

0xeeb2,	// (0x00050999) bg_button_pane_cp11

0xeec5,	// (0x000509ac) graphic2_pages_pane_g1_ParamLimits

0xeec5,	// (0x000509ac) graphic2_pages_pane_g1

0xeee0,	// (0x000509c7) graphic2_pages_pane_g2_ParamLimits

0xeee0,	// (0x000509c7) graphic2_pages_pane_g2

0x0001,

0xfd7c,	// (0x00051863) graphic2_pages_pane_g_ParamLimits

0xfd7c,	// (0x00051863) graphic2_pages_pane_g

0xeef8,	// (0x000509df) graphic2_pages_pane_t1_ParamLimits

0xeef8,	// (0x000509df) graphic2_pages_pane_t1

0xef10,	// (0x000509f7) cell_graphic2_control_pane_ParamLimits

0xef10,	// (0x000509f7) cell_graphic2_control_pane

0xef42,	// (0x00050a29) cell_graphic2_pane_g1_ParamLimits

0xef42,	// (0x00050a29) cell_graphic2_pane_g1

0xe0e5,	// (0x0004fbcc) cell_graphic2_pane_g2_ParamLimits

0xe0e5,	// (0x0004fbcc) cell_graphic2_pane_g2

0xef4f,	// (0x00050a36) cell_graphic2_pane_g3_ParamLimits

0xef4f,	// (0x00050a36) cell_graphic2_pane_g3

0xe0f2,	// (0x0004fbd9) cell_graphic2_pane_g4_ParamLimits

0xe0f2,	// (0x0004fbd9) cell_graphic2_pane_g4

0xef5c,	// (0x00050a43) cell_graphic2_pane_g5_ParamLimits

0xef5c,	// (0x00050a43) cell_graphic2_pane_g5

0x0004,

0xfd81,	// (0x00051868) cell_graphic2_pane_g_ParamLimits

0xfd81,	// (0x00051868) cell_graphic2_pane_g

0xef79,	// (0x00050a60) cell_graphic2_pane_t1_ParamLimits

0xef79,	// (0x00050a60) cell_graphic2_pane_t1

0x5ec4,	// (0x000479ab) grid_highlight_pane_cp11_ParamLimits

0x5ec4,	// (0x000479ab) grid_highlight_pane_cp11

0x36a9,	// (0x00045190) bg_button_pane_cp05

0xefc3,	// (0x00050aaa) cell_graphic2_control_pane_g1

0x77de,	// (0x000492c5) bg_touch_area_indi_pane_g1

0x9a21,	// (0x0004b508) aid_cmod_rocker_key_size

0x9a2b,	// (0x0004b512) aid_cmode_itu_key_size

0x9a35,	// (0x0004b51c) main_cmode_video_pane

0x9a3f,	// (0x0004b526) main_comp_mode_itu_pane

0x9a4b,	// (0x0004b532) main_comp_mode_rocker_pane

0x9a57,	// (0x0004b53e) cell_cmode_rocker_pane_ParamLimits

0x9a57,	// (0x0004b53e) cell_cmode_rocker_pane

0x9a69,	// (0x0004b550) cell_cmode_itu_pane_ParamLimits

0x9a69,	// (0x0004b550) cell_cmode_itu_pane

0x3cb9,	// (0x000457a0) bg_button_pane_cp06_ParamLimits

0x3cb9,	// (0x000457a0) bg_button_pane_cp06

0x7a5c,	// (0x00049543) cell_cmode_rocker_pane_g1_ParamLimits

0x7a5c,	// (0x00049543) cell_cmode_rocker_pane_g1

0x8f97,	// (0x0004aa7e) cell_cmode_rocker_pane_g2_ParamLimits

0x8f97,	// (0x0004aa7e) cell_cmode_rocker_pane_g2

0x0001,

0xfd91,	// (0x00051878) cell_cmode_rocker_pane_g_ParamLimits

0xfd91,	// (0x00051878) cell_cmode_rocker_pane_g

0xd482,	// (0x0004ef69) bg_button_pane_cp07

0x9a7e,	// (0x0004b565) cell_cmode_itu_pane_g1

0x9a87,	// (0x0004b56e) cell_cmode_itu_pane_t1

0x9a95,	// (0x0004b57c) cell_cmode_itu_pane_t2

0x0001,

0xfd96,	// (0x0005187d) cell_cmode_itu_pane_t

0x91db,	// (0x0004acc2) aid_touch_ctrl_left

0x91e3,	// (0x0004acca) aid_touch_ctrl_right

0xd482,	// (0x0004ef69) compa_mode_pane

0xefe7,	// (0x00050ace) aid_cmod_rocker_key_size_cp

0xeff1,	// (0x00050ad8) aid_cmode_itu_key_size_cp

0x9ab7,	// (0x0004b59e) compa_mode_pane_g1

0x9abf,	// (0x0004b5a6) compa_mode_pane_g2

0x9ac7,	// (0x0004b5ae) compa_mode_pane_g3

0x0002,

0xfd9b,	// (0x00051882) compa_mode_pane_g

0xeffb,	// (0x00050ae2) main_comp_mode_itu_pane_cp

0xf003,	// (0x00050aea) main_comp_mode_rocker_pane_cp

0xf00b,	// (0x00050af2) cell_cmode_itu_pane_cp_ParamLimits

0xf00b,	// (0x00050af2) cell_cmode_itu_pane_cp

0xf020,	// (0x00050b07) cell_cmode_rocker_pane_cp_ParamLimits

0xf020,	// (0x00050b07) cell_cmode_rocker_pane_cp

0x3cb9,	// (0x000457a0) bg_button_pane_cp06_cp_ParamLimits

0x3cb9,	// (0x000457a0) bg_button_pane_cp06_cp

0x7a5c,	// (0x00049543) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a5c,	// (0x00049543) cell_cmode_rocker_pane_g1_cp

0x77de,	// (0x000492c5) cell_cmode_rocker_pane_g2_cp

0xd482,	// (0x0004ef69) bg_button_pane_cp07_cp

0xf032,	// (0x00050b19) cell_cmode_itu_pane_g1_cp

0xf03b,	// (0x00050b22) cell_cmode_itu_pane_t1_cp

0xf03b,	// (0x00050b22) cell_cmode_itu_pane_t2_cp

0xdd67,	// (0x0004f84e) settings_code_pane_cp2

0x3420,	// (0x00044f07) bg_popup_window_pane_cp3_ParamLimits

0x38a9,	// (0x00045390) heading_pane_cp3_ParamLimits

0x38b8,	// (0x0004539f) listscroll_popup_graphic_pane_ParamLimits

0x21cb,	// (0x00043cb2) fep_hwr_aid_pane_ParamLimits

0x2689,	// (0x00044170) aid_touch_sctrl_top_ParamLimits

0x2696,	// (0x0004417d) sctrl_sk_top_pane_g1_ParamLimits

0x7a5c,	// (0x00049543) sctrl_sk_top_pane_g2_ParamLimits

0xfcd1,	// (0x000517b8) sctrl_sk_top_pane_g_ParamLimits

0x26a3,	// (0x0004418a) sctrl_sk_top_pane_t1_ParamLimits

0x2689,	// (0x00044170) aid_touch_sctrl_bottom_ParamLimits

0x26a3,	// (0x0004418a) sctrl_sk_bottom_pane_t1_ParamLimits

0x9124,	// (0x0004ac0b) aid_area_touch_clock

0xd003,	// (0x0004eaea) aid_vkb2_area_top_pane_cell_ParamLimits

0xd003,	// (0x0004eaea) aid_vkb2_area_top_pane_cell

0xd0b2,	// (0x0004eb99) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd0b2,	// (0x0004eb99) aid_vkb2_area_bottom_pane_cell

0x9693,	// (0x0004b17a) popup_char_count_window

0x9b14,	// (0x0004b5fb) popup_char_count_window_g1

0x9b1d,	// (0x0004b604) popup_char_count_window_g2

0x9b26,	// (0x0004b60d) popup_char_count_window_g3

0x0002,

0xfda2,	// (0x00051889) popup_char_count_window_g

0x9b2f,	// (0x0004b616) popup_char_count_window_t1

0x273c,	// (0x00044223) popup_fep_char_preview_window_ParamLimits

0x273c,	// (0x00044223) popup_fep_char_preview_window

0xd023,	// (0x0004eb0a) vkb2_top_candi_pane_ParamLimits

0xd023,	// (0x0004eb0a) vkb2_top_candi_pane

0xf049,	// (0x00050b30) cell_vkb2_top_candi_pane_ParamLimits

0xf049,	// (0x00050b30) cell_vkb2_top_candi_pane

0x5850,	// (0x00047337) bg_popup_fep_char_preview_window_ParamLimits

0x5850,	// (0x00047337) bg_popup_fep_char_preview_window

0x2caf,	// (0x00044796) popup_fep_char_preview_window_t1_ParamLimits

0x2caf,	// (0x00044796) popup_fep_char_preview_window_t1

0x9b87,	// (0x0004b66e) bg_popup_fep_char_preview_window_g1

0x9b8f,	// (0x0004b676) bg_popup_fep_char_preview_window_g2

0x9b97,	// (0x0004b67e) bg_popup_fep_char_preview_window_g3

0x9b9f,	// (0x0004b686) bg_popup_fep_char_preview_window_g4

0x9ba7,	// (0x0004b68e) bg_popup_fep_char_preview_window_g5

0x9baf,	// (0x0004b696) bg_popup_fep_char_preview_window_g6

0x9bb7,	// (0x0004b69e) bg_popup_fep_char_preview_window_g7

0x9bbf,	// (0x0004b6a6) bg_popup_fep_char_preview_window_g8

0x9bc7,	// (0x0004b6ae) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda9,	// (0x00051890) bg_popup_fep_char_preview_window_g

0x7a5c,	// (0x00049543) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a5c,	// (0x00049543) cell_vkb2_top_candi_pane_g1

0x7d8e,	// (0x00049875) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7d8e,	// (0x00049875) cell_vkb2_top_candi_pane_g2

0x7daf,	// (0x00049896) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7daf,	// (0x00049896) cell_vkb2_top_candi_pane_g3

0x2cf1,	// (0x000447d8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2cf1,	// (0x000447d8) cell_vkb2_top_candi_pane_g4

0x8fec,	// (0x0004aad3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8fec,	// (0x0004aad3) cell_vkb2_top_candi_pane_g5

0x8f97,	// (0x0004aa7e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8f97,	// (0x0004aa7e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbe,	// (0x000518a5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbe,	// (0x000518a5) cell_vkb2_top_candi_pane_g

0x2d12,	// (0x000447f9) cell_vkb2_top_candi_pane_t1

0x1f34,	// (0x00043a1b) aid_size_touch_slider_mark_ParamLimits

0x1f34,	// (0x00043a1b) aid_size_touch_slider_mark

0xed5b,	// (0x00050842) grid_graphic2_catg_pane_ParamLimits

0xed5b,	// (0x00050842) grid_graphic2_catg_pane

0xee17,	// (0x000508fe) popup_grid_graphic2_window_t1_ParamLimits

0xee17,	// (0x000508fe) popup_grid_graphic2_window_t1

0xee2d,	// (0x00050914) popup_grid_graphic2_window_t2_ParamLimits

0xee2d,	// (0x00050914) popup_grid_graphic2_window_t2

0x0001,

0xfd77,	// (0x0005185e) popup_grid_graphic2_window_t_ParamLimits

0xfd77,	// (0x0005185e) popup_grid_graphic2_window_t

0x36a9,	// (0x00045190) bg_button_pane_cp05_ParamLimits

0xefc3,	// (0x00050aaa) cell_graphic2_control_pane_g1_ParamLimits

0xf0a9,	// (0x00050b90) cell_graphic2_catg_pane_ParamLimits

0xf0a9,	// (0x00050b90) cell_graphic2_catg_pane

0xd482,	// (0x0004ef69) bg_button_pane_cp12

0xf0bb,	// (0x00050ba2) cell_graphic2_catg_pane_g1

0x90f0,	// (0x0004abd7) cell_tb_ext_pane_t1_ParamLimits

0x2ae5,	// (0x000445cc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2ae5,	// (0x000445cc) vkb2_top_cell_right_narrow_pane

0x2afd,	// (0x000445e4) vkb2_top_cell_right_wide_pane_ParamLimits

0x2afd,	// (0x000445e4) vkb2_top_cell_right_wide_pane

0x21bd,	// (0x00043ca4) bg_vkb2_func_pane_ParamLimits

0x21bd,	// (0x00043ca4) bg_vkb2_func_pane

0x2b6e,	// (0x00044655) vkb2_top_cell_left_pane_g1_ParamLimits

0x21bd,	// (0x00043ca4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x21bd,	// (0x00043ca4) bg_vkb2_fuc_pane_cp03

0x2bcc,	// (0x000446b3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x51c9,	// (0x00046cb0) bg_vkb2_func_pane_g1

0x51d1,	// (0x00046cb8) bg_vkb2_func_pane_g2

0x51e1,	// (0x00046cc8) bg_vkb2_func_pane_g3

0x51d9,	// (0x00046cc0) bg_vkb2_func_pane_g4

0x51e9,	// (0x00046cd0) bg_vkb2_func_pane_g5

0x51f1,	// (0x00046cd8) bg_vkb2_func_pane_g6

0x51f9,	// (0x00046ce0) bg_vkb2_func_pane_g7

0x5201,	// (0x00046ce8) bg_vkb2_func_pane_g8

0x51c1,	// (0x00046ca8) bg_vkb2_func_pane_g9

0x0008,

0xfdcb,	// (0x000518b2) bg_vkb2_func_pane_g

0x21bd,	// (0x00043ca4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x21bd,	// (0x00043ca4) bg_vkb2_fuc_pane_cp01

0x2b6e,	// (0x00044655) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2b6e,	// (0x00044655) vkb2_top_cell_right_wide_pane_g1

0x21bd,	// (0x00043ca4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x21bd,	// (0x00043ca4) bg_vkb2_fuc_pane_cp02

0x2d31,	// (0x00044818) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2d31,	// (0x00044818) vkb2_top_cell_right_narrow_pane_g1

0xe5d4,	// (0x000500bb) aid_touch_area_decrease_ParamLimits

0xe5d4,	// (0x000500bb) aid_touch_area_decrease

0xe60e,	// (0x000500f5) aid_touch_area_increase_ParamLimits

0xe60e,	// (0x000500f5) aid_touch_area_increase

0xe636,	// (0x0005011d) aid_touch_area_mute_ParamLimits

0xe636,	// (0x0005011d) aid_touch_area_mute

0xe65e,	// (0x00050145) aid_touch_area_slider_ParamLimits

0xe65e,	// (0x00050145) aid_touch_area_slider

0xe69e,	// (0x00050185) popup_slider_window_g4_ParamLimits

0xe69e,	// (0x00050185) popup_slider_window_g4

0xe6c6,	// (0x000501ad) popup_slider_window_g5_ParamLimits

0xe6c6,	// (0x000501ad) popup_slider_window_g5

0xe6fa,	// (0x000501e1) popup_slider_window_g6_ParamLimits

0xe6fa,	// (0x000501e1) popup_slider_window_g6

0x8ead,	// (0x0004a994) popup_slider_window_t2_ParamLimits

0x8ead,	// (0x0004a994) popup_slider_window_t2

0x0001,

0xfcc5,	// (0x000517ac) popup_slider_window_t_ParamLimits

0xfcc5,	// (0x000517ac) popup_slider_window_t

0xe716,	// (0x000501fd) slider_pane_ParamLimits

0xe716,	// (0x000501fd) slider_pane

0x9bea,	// (0x0004b6d1) slider_pane_g1_ParamLimits

0x9bea,	// (0x0004b6d1) slider_pane_g1

0x9bfe,	// (0x0004b6e5) slider_pane_g2_ParamLimits

0x9bfe,	// (0x0004b6e5) slider_pane_g2

0x9c14,	// (0x0004b6fb) slider_pane_g3_ParamLimits

0x9c14,	// (0x0004b6fb) slider_pane_g3

0x0003,

0xfdde,	// (0x000518c5) slider_pane_g_ParamLimits

0xfdde,	// (0x000518c5) slider_pane_g

0xcbe1,	// (0x0004e6c8) popup_tb_float_extension_window_ParamLimits

0xcbe1,	// (0x0004e6c8) popup_tb_float_extension_window

0x9c40,	// (0x0004b727) aid_size_cell_tb_float_ext

0xd482,	// (0x0004ef69) bg_popup_sub_window_cp28

0x9c4c,	// (0x0004b733) grid_tb_float_ext_pane

0x9c56,	// (0x0004b73d) cell_tb_float_ext_pane_ParamLimits

0x9c56,	// (0x0004b73d) cell_tb_float_ext_pane

0x9c70,	// (0x0004b757) cell_tb_float_ext_pane_g1

0x9c79,	// (0x0004b760) grid_highlight_pane_cp12

0xcd1d,	// (0x0004e804) cell_last_hwr_side_pane_ParamLimits

0xcd1d,	// (0x0004e804) cell_last_hwr_side_pane

0x77de,	// (0x000492c5) cell_last_hwr_side_pane_g1

0x9c82,	// (0x0004b769) cell_last_hwr_side_pane_g2

0x0001,

0xfde7,	// (0x000518ce) cell_last_hwr_side_pane_g

0xd18f,	// (0x0004ec76) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd18f,	// (0x0004ec76) vkb2_area_bottom_space_btn_pane

0x7a5c,	// (0x00049543) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9748,	// (0x0004b22f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2d12,	// (0x000447f9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2d51,	// (0x00044838) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2d51,	// (0x00044838) vkb2_area_bottom_space_btn_pane_g1

0x2d8b,	// (0x00044872) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2d8b,	// (0x00044872) vkb2_area_bottom_space_btn_pane_g2

0x2dc1,	// (0x000448a8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2dc1,	// (0x000448a8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdec,	// (0x000518d3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdec,	// (0x000518d3) vkb2_area_bottom_space_btn_pane_g

0x2272,	// (0x00043d59) cel_fep_hwr_func_pane_ParamLimits

0x2272,	// (0x00043d59) cel_fep_hwr_func_pane

0xccf2,	// (0x0004e7d9) cell_hwr_side_button_pane_ParamLimits

0xccf2,	// (0x0004e7d9) cell_hwr_side_button_pane

0x9124,	// (0x0004ac0b) aid_area_touch_clock_ParamLimits

0x36a9,	// (0x00045190) bg_uniindi_top_pane_ParamLimits

0x9136,	// (0x0004ac1d) uniindi_top_pane_g1_ParamLimits

0x914c,	// (0x0004ac33) uniindi_top_pane_g2_ParamLimits

0x9158,	// (0x0004ac3f) uniindi_top_pane_g3_ParamLimits

0x9169,	// (0x0004ac50) uniindi_top_pane_g4_ParamLimits

0xfcfd,	// (0x000517e4) uniindi_top_pane_g_ParamLimits

0x9176,	// (0x0004ac5d) uniindi_top_pane_t1_ParamLimits

0x36a9,	// (0x00045190) bg_vkb2_func_pane_cp01_ParamLimits

0x36a9,	// (0x00045190) bg_vkb2_func_pane_cp01

0x9c8b,	// (0x0004b772) cel_fep_hwr_func_pane_g1_ParamLimits

0x9c8b,	// (0x0004b772) cel_fep_hwr_func_pane_g1

0x36a9,	// (0x00045190) bg_vkb2_func_pane_cp02_ParamLimits

0x36a9,	// (0x00045190) bg_vkb2_func_pane_cp02

0x9c8b,	// (0x0004b772) cell_hwr_side_button_pane_g1_ParamLimits

0x9c8b,	// (0x0004b772) cell_hwr_side_button_pane_g1

0x5042,	// (0x00046b29) status_pane_g4_ParamLimits

0x5042,	// (0x00046b29) status_pane_g4

0x505c,	// (0x00046b43) status_pane_t1

0x752a,	// (0x00049011) form2_midp_gauge_slider_cont_pane

0x7532,	// (0x00049019) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe02f,	// (0x0004fb16) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe041,	// (0x0004fb28) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac9,	// (0x000515b0) form2_midp_gauge_slider_pane_t_ParamLimits

0x7568,	// (0x0004904f) form2_midp_slider_pane_ParamLimits

0x2704,	// (0x000441eb) aid_size_cell_func_vkb2_ParamLimits

0x2704,	// (0x000441eb) aid_size_cell_func_vkb2

0x9c2c,	// (0x0004b713) slider_pane_g4_ParamLimits

0x9c2c,	// (0x0004b713) slider_pane_g4

0xd1f8,	// (0x0004ecdf) form2_midp_gauge_slider_pane_t2_cp01

0xd206,	// (0x0004eced) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd206,	// (0x0004eced) form2_midp_gauge_slider_pane_t3_cp01

0x2e36,	// (0x0004491d) form2_midp_slider_pane_cp01

0xd482,	// (0x0004ef69) navi_smil_pane

0x9cc4,	// (0x0004b7ab) navi_smil_pane_g1

0x9ccc,	// (0x0004b7b3) navi_smil_pane_t1

0x9c99,	// (0x0004b780) form2_midp_slider_pane_g1

0x9ca2,	// (0x0004b789) form2_midp_slider_pane_g2

0x9caa,	// (0x0004b791) form2_midp_slider_pane_g3

0x9c99,	// (0x0004b780) form2_midp_slider_pane_g4

0xf0c4,	// (0x00050bab) form2_midp_slider_pane_g5

0x0004,

0xfdf5,	// (0x000518dc) form2_midp_slider_pane_g

0x2dfb,	// (0x000448e2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2dfb,	// (0x000448e2) vkb2_area_bottom_space_btn_pane_g4

0xd74d,	// (0x0004f234) lc0_navi_pane_ParamLimits

0xd74d,	// (0x0004f234) lc0_navi_pane

0xd7b7,	// (0x0004f29e) lc0_stat_indi_pane_ParamLimits

0xd7b7,	// (0x0004f29e) lc0_stat_indi_pane

0xd7cc,	// (0x0004f2b3) ls0_title_pane_ParamLimits

0xd7cc,	// (0x0004f2b3) ls0_title_pane

0x3cb9,	// (0x000457a0) bg_popup_sub_pane_cp14_ParamLimits

0x910b,	// (0x0004abf2) list_uniindi_pane_ParamLimits

0x9117,	// (0x0004abfe) uniindi_top_pane_ParamLimits

0x91b3,	// (0x0004ac9a) list_single_uniindi_pane_g1_ParamLimits

0x91c6,	// (0x0004acad) list_single_uniindi_pane_t1_ParamLimits

0xd223,	// (0x0004ed0a) lc0_stat_clock_pane_ParamLimits

0xd223,	// (0x0004ed0a) lc0_stat_clock_pane

0xf0cf,	// (0x00050bb6) lc0_stat_indi_pane_g1_ParamLimits

0xf0cf,	// (0x00050bb6) lc0_stat_indi_pane_g1

0xf0dc,	// (0x00050bc3) lc0_stat_indi_pane_g2_ParamLimits

0xf0dc,	// (0x00050bc3) lc0_stat_indi_pane_g2

0x0001,

0xfe00,	// (0x000518e7) lc0_stat_indi_pane_g_ParamLimits

0xfe00,	// (0x000518e7) lc0_stat_indi_pane_g

0xd230,	// (0x0004ed17) lc0_uni_indicator_pane_ParamLimits

0xd230,	// (0x0004ed17) lc0_uni_indicator_pane

0xf0e9,	// (0x00050bd0) ls0_title_pane_g1_ParamLimits

0xf0e9,	// (0x00050bd0) ls0_title_pane_g1

0xf0fd,	// (0x00050be4) ls0_title_pane_t1_ParamLimits

0xf0fd,	// (0x00050be4) ls0_title_pane_t1

0xd23d,	// (0x0004ed24) lc0_uni_indicator_pane_g1_ParamLimits

0xd23d,	// (0x0004ed24) lc0_uni_indicator_pane_g1

0x9d3e,	// (0x0004b825) lc0_stat_clock_pane_t1

0xd482,	// (0x0004ef69) main_ai5_pane

0x9d54,	// (0x0004b83b) ai5_sk_pane_ParamLimits

0x9d54,	// (0x0004b83b) ai5_sk_pane

0xf135,	// (0x00050c1c) cell_ai5_widget_pane_ParamLimits

0xf135,	// (0x00050c1c) cell_ai5_widget_pane

0x9e2a,	// (0x0004b911) aid_size_cell_widget_grid

0x9e38,	// (0x0004b91f) bg_ai5_widget_pane_ParamLimits

0x9e38,	// (0x0004b91f) bg_ai5_widget_pane

0x9eb4,	// (0x0004b99b) cell_ai5_widget_pane_g2

0x9ec8,	// (0x0004b9af) cell_ai5_widget_pane_g3

0x9ee2,	// (0x0004b9c9) cell_ai5_widget_pane_g4

0x9ef2,	// (0x0004b9d9) cell_ai5_widget_pane_g5

0x9f02,	// (0x0004b9e9) cell_ai5_widget_pane_g6

0x9f0e,	// (0x0004b9f5) cell_ai5_widget_pane_g7

0x9f7a,	// (0x0004ba61) cell_ai5_widget_pane_t1_ParamLimits

0x9f7a,	// (0x0004ba61) cell_ai5_widget_pane_t1

0x9f97,	// (0x0004ba7e) cell_ai5_widget_pane_t2_ParamLimits

0x9f97,	// (0x0004ba7e) cell_ai5_widget_pane_t2

0x9faf,	// (0x0004ba96) cell_ai5_widget_pane_t3_ParamLimits

0x9faf,	// (0x0004ba96) cell_ai5_widget_pane_t3

0x9fc7,	// (0x0004baae) cell_ai5_widget_pane_t4_ParamLimits

0x9fc7,	// (0x0004baae) cell_ai5_widget_pane_t4

0x9fed,	// (0x0004bad4) cell_ai5_widget_pane_t5_ParamLimits

0x9fed,	// (0x0004bad4) cell_ai5_widget_pane_t5

0xa00c,	// (0x0004baf3) cell_ai5_widget_pane_t6_ParamLimits

0xa00c,	// (0x0004baf3) cell_ai5_widget_pane_t6

0xa01e,	// (0x0004bb05) cell_ai5_widget_pane_t7_ParamLimits

0xa01e,	// (0x0004bb05) cell_ai5_widget_pane_t7

0xa03d,	// (0x0004bb24) cell_ai5_widget_pane_t8_ParamLimits

0xa03d,	// (0x0004bb24) cell_ai5_widget_pane_t8

0x000b,

0xfe20,	// (0x00051907) cell_ai5_widget_pane_t_ParamLimits

0xfe20,	// (0x00051907) cell_ai5_widget_pane_t

0xa0c1,	// (0x0004bba8) grid_ai5_widget_pane

0x3cb9,	// (0x000457a0) highlight_cell_ai5_widget_pane_ParamLimits

0x3cb9,	// (0x000457a0) highlight_cell_ai5_widget_pane

0xf1a1,	// (0x00050c88) ai5_sk_left_pane

0xf1ab,	// (0x00050c92) ai5_sk_middle_pane

0xf1b5,	// (0x00050c9c) ai5_sk_right_pane

0xa0f3,	// (0x0004bbda) bg_ai5_widget_pane_g1_ParamLimits

0xa0f3,	// (0x0004bbda) bg_ai5_widget_pane_g1

0xa0ff,	// (0x0004bbe6) bg_ai5_widget_pane_g2_ParamLimits

0xa0ff,	// (0x0004bbe6) bg_ai5_widget_pane_g2

0xa10b,	// (0x0004bbf2) bg_ai5_widget_pane_g3_ParamLimits

0xa10b,	// (0x0004bbf2) bg_ai5_widget_pane_g3

0xa117,	// (0x0004bbfe) bg_ai5_widget_pane_g4_ParamLimits

0xa117,	// (0x0004bbfe) bg_ai5_widget_pane_g4

0xa123,	// (0x0004bc0a) bg_ai5_widget_pane_g5_ParamLimits

0xa123,	// (0x0004bc0a) bg_ai5_widget_pane_g5

0xa12f,	// (0x0004bc16) bg_ai5_widget_pane_g6_ParamLimits

0xa12f,	// (0x0004bc16) bg_ai5_widget_pane_g6

0xa13b,	// (0x0004bc22) bg_ai5_widget_pane_g7_ParamLimits

0xa13b,	// (0x0004bc22) bg_ai5_widget_pane_g7

0xa147,	// (0x0004bc2e) bg_ai5_widget_pane_g8_ParamLimits

0xa147,	// (0x0004bc2e) bg_ai5_widget_pane_g8

0xa153,	// (0x0004bc3a) bg_ai5_widget_pane_g9_ParamLimits

0xa153,	// (0x0004bc3a) bg_ai5_widget_pane_g9

0x0008,

0xfe39,	// (0x00051920) bg_ai5_widget_pane_g_ParamLimits

0xfe39,	// (0x00051920) bg_ai5_widget_pane_g

0xa185,	// (0x0004bc6c) cell_shortcut_ai5_widget_pane_ParamLimits

0xa185,	// (0x0004bc6c) cell_shortcut_ai5_widget_pane

0x4973,	// (0x0004645a) bg_cell_shortcut_ai5_widget_pane

0xa196,	// (0x0004bc7d) cell_grid_ai5_widget_pane_g1

0x4973,	// (0x0004645a) highlight_cell_shortcut_ai5_widget_pane

0x51d1,	// (0x00046cb8) ai5_sk_left_pane_g1

0xa19f,	// (0x0004bc86) ai5_sk_left_pane_g2

0xa1a7,	// (0x0004bc8e) ai5_sk_left_pane_g3

0xa1af,	// (0x0004bc96) ai5_sk_left_pane_g4

0x0003,

0xfe4c,	// (0x00051933) ai5_sk_left_pane_g

0xa1b7,	// (0x0004bc9e) ai5_sk_left_pane_t1

0x51c9,	// (0x00046cb0) ai5_sk_right_pane_g1

0xa1c5,	// (0x0004bcac) ai5_sk_right_pane_g2

0xa1cd,	// (0x0004bcb4) ai5_sk_right_pane_g3

0xa1d5,	// (0x0004bcbc) ai5_sk_right_pane_g4

0x0003,

0xfe55,	// (0x0005193c) ai5_sk_right_pane_g

0xa1dd,	// (0x0004bcc4) ai5_sk_right_pane_t1

0x51c9,	// (0x00046cb0) ai5_sk_middle_pane_g1

0x51d1,	// (0x00046cb8) ai5_sk_middle_pane_g2

0x51e9,	// (0x00046cd0) ai5_sk_middle_pane_g3

0xa1cd,	// (0x0004bcb4) ai5_sk_middle_pane_g4

0xa1a7,	// (0x0004bc8e) ai5_sk_middle_pane_g5

0xa1eb,	// (0x0004bcd2) ai5_sk_middle_pane_g6

0xf1bf,	// (0x00050ca6) ai5_sk_middle_pane_g7

0x0006,

0xfe5e,	// (0x00051945) ai5_sk_middle_pane_g

0xd639,	// (0x0004f120) aid_touch_area_size_lc0_ParamLimits

0xd639,	// (0x0004f120) aid_touch_area_size_lc0

0x23fd,	// (0x00043ee4) cell_hwr_candidate_pane_t1_ParamLimits

0x4d13,	// (0x000467fa) aid_touch_navi_pane

0xd8c5,	// (0x0004f3ac) status_dt_navi_pane_ParamLimits

0xd8c5,	// (0x0004f3ac) status_dt_navi_pane

0xd8dd,	// (0x0004f3c4) status_dt_sta_pane_ParamLimits

0xd8dd,	// (0x0004f3c4) status_dt_sta_pane

0xf1c7,	// (0x00050cae) dt_sta_controll_pane

0xf1d4,	// (0x00050cbb) dt_sta_indi_pane

0xf1e1,	// (0x00050cc8) dt_sta_title_pane

0x36a9,	// (0x00045190) bg_dt_sta_indi_pane_ParamLimits

0x36a9,	// (0x00045190) bg_dt_sta_indi_pane

0xf1f3,	// (0x00050cda) dt_sta_battery_pane

0xf1fb,	// (0x00050ce2) dt_sta_indi_pane_g1

0xa23d,	// (0x0004bd24) dt_sta_indi_pane_g2

0xa246,	// (0x0004bd2d) dt_sta_indi_pane_g3

0x0002,

0xfe6d,	// (0x00051954) dt_sta_indi_pane_g

0xa24f,	// (0x0004bd36) dt_sta_signal_pane

0x3cb9,	// (0x000457a0) bg_dt_sta_title_pane_ParamLimits

0x3cb9,	// (0x000457a0) bg_dt_sta_title_pane

0xa258,	// (0x0004bd3f) dt_sta_title_pane_g1

0xa260,	// (0x0004bd47) dt_sta_title_pane_t1_ParamLimits

0xa260,	// (0x0004bd47) dt_sta_title_pane_t1

0xd482,	// (0x0004ef69) bg_dt_sta_control_pane

0xf204,	// (0x00050ceb) dt_sta_controll_pane_g1

0xa27e,	// (0x0004bd65) bg_dt_sta_title_pane_g1

0xa287,	// (0x0004bd6e) bg_dt_sta_title_pane_g2

0xa290,	// (0x0004bd77) bg_dt_sta_title_pane_g3

0x0002,

0xfe74,	// (0x0005195b) bg_dt_sta_title_pane_g

0x77de,	// (0x000492c5) bg_dt_sta_indi_pane_g1

0xa299,	// (0x0004bd80) dt_sta_signal_pane_g1

0xa2a1,	// (0x0004bd88) dt_sta_signal_pane_g2

0x0001,

0xfe7b,	// (0x00051962) dt_sta_signal_pane_g

0xa2a9,	// (0x0004bd90) dt_sta_battery_pane_g1

0xa2b2,	// (0x0004bd99) dt_sta_battery_pane_t1

0x77de,	// (0x000492c5) bg_dt_sta_control_pane_g1

0x446d,	// (0x00045f54) fep_china_uni_eep_pane

0x4475,	// (0x00045f5c) fep_china_uni_entry_pane_ParamLimits

0x4485,	// (0x00045f6c) popup_fep_china_uni_window_g1_ParamLimits

0x4495,	// (0x00045f7c) popup_fep_china_uni_window_g2_ParamLimits

0x4495,	// (0x00045f7c) popup_fep_china_uni_window_g2

0x0001,

0xf6fb,	// (0x000511e2) popup_fep_china_uni_window_g_ParamLimits

0xf6fb,	// (0x000511e2) popup_fep_china_uni_window_g

0xa2c1,	// (0x0004bda8) fep_china_uni_eep_pane_g1

0xa2c9,	// (0x0004bdb0) fep_china_uni_eep_pane_t1

0x9cbb,	// (0x0004b7a2) aid_touch_area_size_smil_player

0x4e69,	// (0x00046950) lc0_clock_pane

0x5050,	// (0x00046b37) status_pane_g5_ParamLimits

0x5050,	// (0x00046b37) status_pane_g5

0xc763,	// (0x0004e24a) popup_keymap_window

0x500e,	// (0x00046af5) status_icon_pane

0x9ec8,	// (0x0004b9af) cell_ai5_widget_pane_g3_ParamLimits

0x9ee2,	// (0x0004b9c9) cell_ai5_widget_pane_g4_ParamLimits

0x9ef2,	// (0x0004b9d9) cell_ai5_widget_pane_g5_ParamLimits

0x9f1a,	// (0x0004ba01) cell_ai5_widget_pane_g8_ParamLimits

0x9f1a,	// (0x0004ba01) cell_ai5_widget_pane_g8

0x9f2e,	// (0x0004ba15) cell_ai5_widget_pane_g9_ParamLimits

0x9f2e,	// (0x0004ba15) cell_ai5_widget_pane_g9

0x9f42,	// (0x0004ba29) cell_ai5_widget_pane_g10_ParamLimits

0x9f42,	// (0x0004ba29) cell_ai5_widget_pane_g10

0xa2d8,	// (0x0004bdbf) status_icon_pane_g1

0xd482,	// (0x0004ef69) bg_popup_sub_pane_cp13

0xa2e0,	// (0x0004bdc7) popup_keymap_window_t1

0xd5cf,	// (0x0004f0b6) control_pane_g6_ParamLimits

0xd5cf,	// (0x0004f0b6) control_pane_g6

0xd5dc,	// (0x0004f0c3) control_pane_g7_ParamLimits

0xd5dc,	// (0x0004f0c3) control_pane_g7

0xd5e9,	// (0x0004f0d0) control_pane_g8_ParamLimits

0xd5e9,	// (0x0004f0d0) control_pane_g8

0xf1c7,	// (0x00050cae) dt_sta_controll_pane_ParamLimits

0xf1d4,	// (0x00050cbb) dt_sta_indi_pane_ParamLimits

0xf1e1,	// (0x00050cc8) dt_sta_title_pane_ParamLimits

0x3be5,	// (0x000456cc) aid_size_touch_scroll_bar_cale

0x0db2,	// (0x00042899) popup_discreet_window_ParamLimits

0x0db2,	// (0x00042899) popup_discreet_window

0xbdfd,	// (0x0004d8e4) popup_sk_window

0x5850,	// (0x00047337) bg_popup_sub_pane_cp28_ParamLimits

0x5850,	// (0x00047337) bg_popup_sub_pane_cp28

0xa2ee,	// (0x0004bdd5) popup_discreet_window_g1_ParamLimits

0xa2ee,	// (0x0004bdd5) popup_discreet_window_g1

0xa30e,	// (0x0004bdf5) popup_discreet_window_t1_ParamLimits

0xa30e,	// (0x0004bdf5) popup_discreet_window_t1

0xa32c,	// (0x0004be13) popup_discreet_window_t2_ParamLimits

0xa32c,	// (0x0004be13) popup_discreet_window_t2

0x0002,

0xfe80,	// (0x00051967) popup_discreet_window_t_ParamLimits

0xfe80,	// (0x00051967) popup_discreet_window_t

0x2e6d,	// (0x00044954) popup_sk_window_g1

0x2e77,	// (0x0004495e) popup_sk_window_g2

0x0001,

0xfe87,	// (0x0005196e) popup_sk_window_g

0x2e7f,	// (0x00044966) popup_sk_window_t1

0x2e8d,	// (0x00044974) popup_sk_window_t1_copy1

0x9eb4,	// (0x0004b99b) cell_ai5_widget_pane_g2_ParamLimits

0xa04f,	// (0x0004bb36) cell_ai5_widget_pane_t9_ParamLimits

0xa04f,	// (0x0004bb36) cell_ai5_widget_pane_t9

0xd482,	// (0x0004ef69) main_fep_fshwr2_pane

0xd264,	// (0x0004ed4b) aid_fshwr2_btn_pane

0xd274,	// (0x0004ed5b) aid_fshwr2_syb_pane

0xd288,	// (0x0004ed6f) aid_fshwr2_txt_pane

0xd298,	// (0x0004ed7f) fshwr2_func_candi_pane

0xd2b8,	// (0x0004ed9f) fshwr2_hwr_syb_pane

0xd2da,	// (0x0004edc1) fshwr2_icf_pane

0xd482,	// (0x0004ef69) fshwr2_icf_bg_pane

0xd30a,	// (0x0004edf1) fshwr2_icf_pane_t1_ParamLimits

0xd30a,	// (0x0004edf1) fshwr2_icf_pane_t1

0x4342,	// (0x00045e29) fshwr2_func_candi_pane_g1

0xf20d,	// (0x00050cf4) fshwr2_func_candi_row_pane_ParamLimits

0xf20d,	// (0x00050cf4) fshwr2_func_candi_row_pane

0xd323,	// (0x0004ee0a) cell_fshwr2_syb_pane_ParamLimits

0xd323,	// (0x0004ee0a) cell_fshwr2_syb_pane

0x9c8b,	// (0x0004b772) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9c8b,	// (0x0004b772) fshwr2_hwr_syb_pane_g1

0xd482,	// (0x0004ef69) bg_popup_call_pane_cp01

0xd349,	// (0x0004ee30) fshwr2_func_candi_cell_pane_ParamLimits

0xd349,	// (0x0004ee30) fshwr2_func_candi_cell_pane

0x5631,	// (0x00047118) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5631,	// (0x00047118) fshwr2_func_candi_cell_bg_pane

0xd394,	// (0x0004ee7b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd394,	// (0x0004ee7b) fshwr2_func_candi_cell_pane_g1

0xd3cb,	// (0x0004eeb2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd3cb,	// (0x0004eeb2) fshwr2_func_candi_cell_pane_t1

0xd482,	// (0x0004ef69) bg_button_pane_cp08

0x4c97,	// (0x0004677e) cell_fshwr2_syb_bg_pane

0xd3e6,	// (0x0004eecd) cell_fshwr2_syb_bg_pane_g1

0xd3f9,	// (0x0004eee0) cell_fshwr2_syb_bg_pane_t1

0x3cb9,	// (0x000457a0) main_tmo_pane

0xdb99,	// (0x0004f680) uni_indicator_pane_g1_ParamLimits

0xdbaf,	// (0x0004f696) uni_indicator_pane_g2_ParamLimits

0xdbc5,	// (0x0004f6ac) uni_indicator_pane_g3_ParamLimits

0x639e,	// (0x00047e85) uni_indicator_pane_g4_ParamLimits

0x639e,	// (0x00047e85) uni_indicator_pane_g4

0x63b2,	// (0x00047e99) uni_indicator_pane_g5_ParamLimits

0x63b2,	// (0x00047e99) uni_indicator_pane_g5

0x63b2,	// (0x00047e99) uni_indicator_pane_g6_ParamLimits

0x63b2,	// (0x00047e99) uni_indicator_pane_g6

0xf8fa,	// (0x000513e1) uni_indicator_pane_g_ParamLimits

0xe5b0,	// (0x00050097) popup_tmo_note_window_ParamLimits

0xe5b0,	// (0x00050097) popup_tmo_note_window

0x3cb9,	// (0x000457a0) fshwr2_bg_pane

0xd3bc,	// (0x0004eea3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd3bc,	// (0x0004eea3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8c,	// (0x00051973) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8c,	// (0x00051973) fshwr2_func_candi_cell_pane_g

0x77de,	// (0x000492c5) bg_popup_window_pane_cp01

0x3029,	// (0x00044b10) bg_popup_window_pane_g1_cp01

0xa3a5,	// (0x0004be8c) bg_popup_window_pane_cp22_ParamLimits

0xa3a5,	// (0x0004be8c) bg_popup_window_pane_cp22

0xa3b3,	// (0x0004be9a) listscroll_tmo_link_pane_ParamLimits

0xa3b3,	// (0x0004be9a) listscroll_tmo_link_pane

0xa3f3,	// (0x0004beda) popup_tmo_note_window_g1_ParamLimits

0xa3f3,	// (0x0004beda) popup_tmo_note_window_g1

0xa400,	// (0x0004bee7) tmo_note_info_pane_ParamLimits

0xa400,	// (0x0004bee7) tmo_note_info_pane

0xf230,	// (0x00050d17) list_tmo_note_info_pane_g1_ParamLimits

0xf230,	// (0x00050d17) list_tmo_note_info_pane_g1

0xa431,	// (0x0004bf18) list_tmo_note_info_pane_g2_ParamLimits

0xa431,	// (0x0004bf18) list_tmo_note_info_pane_g2

0x0001,

0xfe91,	// (0x00051978) list_tmo_note_info_pane_g_ParamLimits

0xfe91,	// (0x00051978) list_tmo_note_info_pane_g

0xa44d,	// (0x0004bf34) list_tmo_note_info_text_pane_ParamLimits

0xa44d,	// (0x0004bf34) list_tmo_note_info_text_pane

0xa4ce,	// (0x0004bfb5) list_tmo_link_pane

0xa4db,	// (0x0004bfc2) scroll_pane_cp20

0xa4e8,	// (0x0004bfcf) list_single_tmo_link_pane_ParamLimits

0xa4e8,	// (0x0004bfcf) list_single_tmo_link_pane

0xa4f8,	// (0x0004bfdf) list_single_tmo_link_pane_t1

0xa506,	// (0x0004bfed) list_tmo_note_info_text_pane_t1_ParamLimits

0xa506,	// (0x0004bfed) list_tmo_note_info_text_pane_t1

0xc28d,	// (0x0004dd74) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc28d,	// (0x0004dd74) aid_size_touch_scroll_bar_cp01

0xbabf,	// (0x0004d5a6) aid_size_touch_slider_marker

0xbded,	// (0x0004d8d4) popup_settings_window_ParamLimits

0xbded,	// (0x0004d8d4) popup_settings_window

0x03a2,	// (0x00041e89) popup_candi_list_indi_window

0x4d13,	// (0x000467fa) aid_touch_navi_pane_ParamLimits

0x265d,	// (0x00044144) rs_clock_indi_pane

0x2666,	// (0x0004414d) sctrl_sk_bottom_pane_ParamLimits

0x2677,	// (0x0004415e) sctrl_sk_top_pane_ParamLimits

0x2756,	// (0x0004423d) popup_fep_tooltip_window

0x9e2a,	// (0x0004b911) aid_size_cell_widget_grid_ParamLimits

0x9e9f,	// (0x0004b986) cell_ai5_widget_pane_g1_ParamLimits

0x9e9f,	// (0x0004b986) cell_ai5_widget_pane_g1

0x9f02,	// (0x0004b9e9) cell_ai5_widget_pane_g6_ParamLimits

0x9f0e,	// (0x0004b9f5) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe05,	// (0x000518ec) cell_ai5_widget_pane_g_ParamLimits

0xfe05,	// (0x000518ec) cell_ai5_widget_pane_g

0xa07e,	// (0x0004bb65) cell_ai5_widget_pane_t10_ParamLimits

0xa07e,	// (0x0004bb65) cell_ai5_widget_pane_t10

0xa0c1,	// (0x0004bba8) grid_ai5_widget_pane_ParamLimits

0xa15f,	// (0x0004bc46) cell_contacts_ai5_widget_pane_ParamLimits

0xa15f,	// (0x0004bc46) cell_contacts_ai5_widget_pane

0xa341,	// (0x0004be28) popup_discreet_window_t3_ParamLimits

0xa341,	// (0x0004be28) popup_discreet_window_t3

0xd2f6,	// (0x0004eddd) popup_fshwr2_char_preview_window_ParamLimits

0xd2f6,	// (0x0004eddd) popup_fshwr2_char_preview_window

0xf247,	// (0x00050d2e) tmo_note_info_pane_t1

0xf25c,	// (0x00050d43) tmo_note_info_pane_t2

0xf273,	// (0x00050d5a) tmo_note_info_pane_t3

0xa4aa,	// (0x0004bf91) tmo_note_info_pane_t4

0xa4bc,	// (0x0004bfa3) tmo_note_info_pane_t5

0x0004,

0xfe96,	// (0x0005197d) tmo_note_info_pane_t

0xa4ce,	// (0x0004bfb5) list_tmo_link_pane_ParamLimits

0xa4db,	// (0x0004bfc2) scroll_pane_cp20_ParamLimits

0xd482,	// (0x0004ef69) bg_popup_fep_char_preview_window_cp01

0xf288,	// (0x00050d6f) popup_fshwr2_char_preview_window_t1

0xa52d,	// (0x0004c014) popup_candi_list_indi_window_g1

0xa536,	// (0x0004c01d) bg_cell_contacts_ai5_widget_pane

0xa542,	// (0x0004c029) cell_contacts_ai5_widget_pane_g1

0x7ebe,	// (0x000499a5) cell_contacts_ai5_widget_pane_g2

0xa557,	// (0x0004c03e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea1,	// (0x00051988) cell_contacts_ai5_widget_pane_g

0xa563,	// (0x0004c04a) cell_contacts_ai5_widget_pane_t1

0x3cb9,	// (0x000457a0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa5da,	// (0x0004c0c1) settings_container_pane

0x4973,	// (0x0004645a) listscroll_set_pane_copy1

0x6ecf,	// (0x000489b6) scroll_pane_cp121_copy1

0x55ed,	// (0x000470d4) set_content_pane_copy1

0xa5e6,	// (0x0004c0cd) aid_height_set_list_copy1_ParamLimits

0xa5e6,	// (0x0004c0cd) aid_height_set_list_copy1

0x659a,	// (0x00048081) aid_size_parent_copy1_ParamLimits

0x659a,	// (0x00048081) aid_size_parent_copy1

0xa5f2,	// (0x0004c0d9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa5f2,	// (0x0004c0d9) button_value_adjust_pane_cp6_copy1

0x4c97,	// (0x0004677e) list_highlight_pane_cp2_copy1_ParamLimits

0x4c97,	// (0x0004677e) list_highlight_pane_cp2_copy1

0xa606,	// (0x0004c0ed) list_set_pane_copy1_ParamLimits

0xa606,	// (0x0004c0ed) list_set_pane_copy1

0xa575,	// (0x0004c05c) main_pane_set_t1_copy1_ParamLimits

0xa575,	// (0x0004c05c) main_pane_set_t1_copy1

0xa5af,	// (0x0004c096) main_pane_set_t2_copy1_ParamLimits

0xa5af,	// (0x0004c096) main_pane_set_t2_copy1

0xa6b3,	// (0x0004c19a) main_pane_set_t3_copy1

0xa6c1,	// (0x0004c1a8) main_pane_set_t4_copy1

0xa5ce,	// (0x0004c0b5) set_content_pane_g1_copy1_ParamLimits

0xa5ce,	// (0x0004c0b5) set_content_pane_g1_copy1

0xa6cf,	// (0x0004c1b6) setting_code_pane_copy1

0xa6d7,	// (0x0004c1be) setting_slider_graphic_pane_copy1

0xa6d7,	// (0x0004c1be) setting_slider_pane_copy1

0xa6df,	// (0x0004c1c6) setting_text_pane_copy1

0xa6df,	// (0x0004c1c6) setting_volume_pane_copy1

0xa6cf,	// (0x0004c1b6) settings_code_pane_cp2_copy1

0xa6e7,	// (0x0004c1ce) settings_code_pane_cp_copy1_ParamLimits

0xa6e7,	// (0x0004c1ce) settings_code_pane_cp_copy1

0x3032,	// (0x00044b19) volume_set_pane_copy1

0xa6fb,	// (0x0004c1e2) volume_set_pane_g10_copy1

0xa703,	// (0x0004c1ea) volume_set_pane_g1_copy1

0xa70b,	// (0x0004c1f2) volume_set_pane_g2_copy1

0xa713,	// (0x0004c1fa) volume_set_pane_g3_copy1

0xa71b,	// (0x0004c202) volume_set_pane_g4_copy1

0xa723,	// (0x0004c20a) volume_set_pane_g5_copy1

0xa72b,	// (0x0004c212) volume_set_pane_g6_copy1

0xa733,	// (0x0004c21a) volume_set_pane_g7_copy1

0xa73b,	// (0x0004c222) volume_set_pane_g8_copy1

0xa743,	// (0x0004c22a) volume_set_pane_g9_copy1

0x3420,	// (0x00044f07) bg_set_opt_pane_cp_copy1_ParamLimits

0x3420,	// (0x00044f07) bg_set_opt_pane_cp_copy1

0x303a,	// (0x00044b21) setting_slider_pane_t1_copy1_ParamLimits

0x303a,	// (0x00044b21) setting_slider_pane_t1_copy1

0x3059,	// (0x00044b40) setting_slider_pane_t2_copy1_ParamLimits

0x3059,	// (0x00044b40) setting_slider_pane_t2_copy1

0x3073,	// (0x00044b5a) setting_slider_pane_t3_copy1_ParamLimits

0x3073,	// (0x00044b5a) setting_slider_pane_t3_copy1

0x308b,	// (0x00044b72) slider_set_pane_copy1_ParamLimits

0x308b,	// (0x00044b72) slider_set_pane_copy1

0x3d05,	// (0x000457ec) set_opt_bg_pane_g1_copy2

0x3d0d,	// (0x000457f4) set_opt_bg_pane_g2_copy2

0xa74b,	// (0x0004c232) set_opt_bg_pane_g3_copy2

0x3d1d,	// (0x00045804) set_opt_bg_pane_g4_copy2

0x3d25,	// (0x0004580c) set_opt_bg_pane_g5_copy2

0x3d2d,	// (0x00045814) set_opt_bg_pane_g6_copy2

0xa755,	// (0x0004c23c) set_opt_bg_pane_g7_copy2

0xa75d,	// (0x0004c244) set_opt_bg_pane_g8_copy2

0xa767,	// (0x0004c24e) set_opt_bg_pane_g9_copy2

0x30a1,	// (0x00044b88) aid_size_touch_slider_mark_copy1_ParamLimits

0x30a1,	// (0x00044b88) aid_size_touch_slider_mark_copy1

0xa771,	// (0x0004c258) slider_set_pane_g1_copy1

0x30b5,	// (0x00044b9c) slider_set_pane_g2_copy1

0x1f54,	// (0x00043a3b) slider_set_pane_g3_copy1_ParamLimits

0x1f54,	// (0x00043a3b) slider_set_pane_g3_copy1

0x1f68,	// (0x00043a4f) slider_set_pane_g4_copy1_ParamLimits

0x1f68,	// (0x00043a4f) slider_set_pane_g4_copy1

0x1f80,	// (0x00043a67) slider_set_pane_g5_copy1_ParamLimits

0x1f80,	// (0x00043a67) slider_set_pane_g5_copy1

0x1f54,	// (0x00043a3b) slider_set_pane_g6_copy1_ParamLimits

0x1f54,	// (0x00043a3b) slider_set_pane_g6_copy1

0x30bd,	// (0x00044ba4) slider_set_pane_g7_copy1_ParamLimits

0x30bd,	// (0x00044ba4) slider_set_pane_g7_copy1

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp2_copy1

0xa77a,	// (0x0004c261) setting_slider_graphic_pane_g1_copy1

0xa783,	// (0x0004c26a) setting_slider_graphic_pane_t1_copy1

0xa793,	// (0x0004c27a) setting_slider_graphic_pane_t2_copy1

0xa7a3,	// (0x0004c28a) slider_set_pane_cp_copy1

0xa7b3,	// (0x0004c29a) input_focus_pane_cp1_copy1

0xa7bc,	// (0x0004c2a3) list_set_text_pane_copy1

0xa7c4,	// (0x0004c2ab) setting_text_pane_g1_copy1

0x0b23,	// (0x0004260a) set_text_pane_t1_copy1

0xa7b3,	// (0x0004c29a) input_focus_pane_cp2_copy1

0xa7c4,	// (0x0004c2ab) setting_code_pane_g1_copy1

0xa7cd,	// (0x0004c2b4) setting_code_pane_t1_copy1

0x6cf7,	// (0x000487de) list_set_graphic_pane_copy1

0xd496,	// (0x0004ef7d) bg_set_opt_pane_cp4_copy1

0x4678,	// (0x0004615f) list_set_graphic_pane_g1_copy1_ParamLimits

0x4678,	// (0x0004615f) list_set_graphic_pane_g1_copy1

0xa7db,	// (0x0004c2c2) list_set_graphic_pane_g2_copy1

0x4690,	// (0x00046177) list_set_graphic_pane_t1_copy1_ParamLimits

0x4690,	// (0x00046177) list_set_graphic_pane_t1_copy1

0x77de,	// (0x000492c5) rs_clock_indi_pane_g1

0xa7e3,	// (0x0004c2ca) rs_clock_indi_pane_t1

0xa7f1,	// (0x0004c2d8) rs_indi_pane

0xa7f9,	// (0x0004c2e0) rs_indi_pane_g1

0xa802,	// (0x0004c2e9) rs_indi_pane_g2

0xa80b,	// (0x0004c2f2) rs_indi_pane_g3

0x0002,

0xfea8,	// (0x0005198f) rs_indi_pane_g

0x4973,	// (0x0004645a) bg_popup_preview_window_pane_cp03

0xa814,	// (0x0004c2fb) popup_fep_tooltip_window_t1

0x846e,	// (0x00049f55) popup_note2_window_g2_ParamLimits

0x846e,	// (0x00049f55) popup_note2_window_g2

0x0001,

0xfc35,	// (0x0005171c) popup_note2_window_g_ParamLimits

0xfc35,	// (0x0005171c) popup_note2_window_g

0x8969,	// (0x0004a450) bg_popup_sub_pane_cp11_ParamLimits

0x8976,	// (0x0004a45d) cell_ai3_links_pane_g1_ParamLimits

0x898d,	// (0x0004a474) cell_ai3_links_pane_t1

0x0b23,	// (0x0004260a) set_text_pane_t1_copy1_ParamLimits

0x4883,	// (0x0004636a) cell_graphic_popup_pane_cp2_ParamLimits

0x4883,	// (0x0004636a) cell_graphic_popup_pane_cp2

0xa822,	// (0x0004c309) cell_graphic_popup_pane_g1_cp2

0x39f8,	// (0x000454df) cell_graphic_popup_pane_g2_cp2

0xa82a,	// (0x0004c311) cell_graphic_popup_pane_g3_cp2

0xa832,	// (0x0004c319) cell_graphic_popup_pane_t2_cp2

0x3a09,	// (0x000454f0) grid_highlight_pane_cp3_cp2

0x405d,	// (0x00045b44) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3cb9,	// (0x000457a0) main_tmo_pane_ParamLimits

0xe5a4,	// (0x0005008b) popup_tmo_big_image_note_window

0x9e8e,	// (0x0004b975) cell_ai5_widget_list_pane

0x9e96,	// (0x0004b97d) cell_ai5_widget_lrg_icon_pane

0xf247,	// (0x00050d2e) tmo_note_info_pane_t1_ParamLimits

0xf25c,	// (0x00050d43) tmo_note_info_pane_t2_ParamLimits

0xf273,	// (0x00050d5a) tmo_note_info_pane_t3_ParamLimits

0xa4aa,	// (0x0004bf91) tmo_note_info_pane_t4_ParamLimits

0xa4bc,	// (0x0004bfa3) tmo_note_info_pane_t5_ParamLimits

0xfe96,	// (0x0005197d) tmo_note_info_pane_t_ParamLimits

0xa5da,	// (0x0004c0c1) settings_container_pane_ParamLimits

0xa7ab,	// (0x0004c292) indicator_popup_pane_cp5

0xa7ab,	// (0x0004c292) indicator_popup_pane_cp6

0x6cf7,	// (0x000487de) list_set_graphic_pane_copy1_ParamLimits

0xd482,	// (0x0004ef69) bg_popup_window_pane_cp23

0xa840,	// (0x0004c327) popup_tmo_big_image_note_window_g1

0xa84a,	// (0x0004c331) popup_tmo_big_image_note_window_t1

0xa85a,	// (0x0004c341) popup_tmo_big_image_note_window_t2

0xa86a,	// (0x0004c351) popup_tmo_big_image_note_window_t3

0x0002,

0xfeaf,	// (0x00051996) popup_tmo_big_image_note_window_t

0x77de,	// (0x000492c5) cell_ai5_widget_lrg_icon_pane_g1

0xa87a,	// (0x0004c361) cell_ai5_widget_lrg_icon_pane_t1

0xa888,	// (0x0004c36f) cell_ai5_widget_list_row_pane_ParamLimits

0xa888,	// (0x0004c36f) cell_ai5_widget_list_row_pane

0xa89f,	// (0x0004c386) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa89f,	// (0x0004c386) cell_ai5_widget_list_row_pane_g1

0xa8ac,	// (0x0004c393) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa8ac,	// (0x0004c393) cell_ai5_widget_list_row_pane_t1

0xa8d7,	// (0x0004c3be) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa8d7,	// (0x0004c3be) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb6,	// (0x0005199d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb6,	// (0x0005199d) cell_ai5_widget_list_row_pane_t

0xd482,	// (0x0004ef69) main_fep_vtchi_ss_pane

0xa927,	// (0x0004c40e) popup_fep_char_pre_window

0xa92f,	// (0x0004c416) popup_fep_ituss_window

0xf2a5,	// (0x00050d8c) popup_fep_vkbss_window

0x4c97,	// (0x0004677e) grid_vkbss_keypad_pane_ParamLimits

0x4c97,	// (0x0004677e) grid_vkbss_keypad_pane

0xa9a7,	// (0x0004c48e) ituss_keypad_pane

0x30fe,	// (0x00044be5) aid_vkbss_key_offset_ParamLimits

0x30fe,	// (0x00044be5) aid_vkbss_key_offset

0xd423,	// (0x0004ef0a) cell_vkbss_key_pane_ParamLimits

0xd423,	// (0x0004ef0a) cell_vkbss_key_pane

0xa9b3,	// (0x0004c49a) bg_cell_vkbss_key_g1_ParamLimits

0xa9b3,	// (0x0004c49a) bg_cell_vkbss_key_g1

0xf2b2,	// (0x00050d99) cell_vkbss_key_3p_pane_ParamLimits

0xf2b2,	// (0x00050d99) cell_vkbss_key_3p_pane

0xf2e8,	// (0x00050dcf) cell_vkbss_key_g1_ParamLimits

0xf2e8,	// (0x00050dcf) cell_vkbss_key_g1

0xf31e,	// (0x00050e05) cell_vkbss_key_t1_ParamLimits

0xf31e,	// (0x00050e05) cell_vkbss_key_t1

0x3168,	// (0x00044c4f) cell_ituss_key_pane_ParamLimits

0x3168,	// (0x00044c4f) cell_ituss_key_pane

0xaa87,	// (0x0004c56e) bg_cell_ituss_key_g1_ParamLimits

0xaa87,	// (0x0004c56e) bg_cell_ituss_key_g1

0xaa93,	// (0x0004c57a) cell_ituss_key_pane_g1_ParamLimits

0xaa93,	// (0x0004c57a) cell_ituss_key_pane_g1

0x3179,	// (0x00044c60) cell_ituss_key_pane_g2_ParamLimits

0x3179,	// (0x00044c60) cell_ituss_key_pane_g2

0x0005,

0xfebd,	// (0x000519a4) cell_ituss_key_pane_g_ParamLimits

0xfebd,	// (0x000519a4) cell_ituss_key_pane_g

0x31fd,	// (0x00044ce4) cell_ituss_key_t1_ParamLimits

0x31fd,	// (0x00044ce4) cell_ituss_key_t1

0x3237,	// (0x00044d1e) cell_ituss_key_t2_ParamLimits

0x3237,	// (0x00044d1e) cell_ituss_key_t2

0x3269,	// (0x00044d50) cell_ituss_key_t3_ParamLimits

0x3269,	// (0x00044d50) cell_ituss_key_t3

0x329a,	// (0x00044d81) cell_ituss_key_t4_ParamLimits

0x329a,	// (0x00044d81) cell_ituss_key_t4

0x0005,

0xfeca,	// (0x000519b1) cell_ituss_key_t_ParamLimits

0xfeca,	// (0x000519b1) cell_ituss_key_t

0xf37a,	// (0x00050e61) cell_vkbss_key_3p_pane_g1

0xf382,	// (0x00050e69) cell_vkbss_key_3p_pane_g2

0xf38a,	// (0x00050e71) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed7,	// (0x000519be) cell_vkbss_key_3p_pane_g

0x4973,	// (0x0004645a) bg_popup_fep_char_preview_window_cp02

0xaad1,	// (0x0004c5b8) popup_fep_char_pre_window_t1

0xf197,	// (0x00050c7e) main_ai5_sk_pane

0xa536,	// (0x0004c01d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa542,	// (0x0004c029) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7ebe,	// (0x000499a5) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa557,	// (0x0004c03e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea1,	// (0x00051988) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa563,	// (0x0004c04a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3cb9,	// (0x000457a0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf392,	// (0x00050e79) main_ai5_sk_pane_g1

0x5689,	// (0x00047170) popup_query_code_window_g1

0xf296,	// (0x00050d7d) popup_fep_vkb_icf_pane

0xa97b,	// (0x0004c462) popup_fep_vtchi_icf_pane

0xaae8,	// (0x0004c5cf) bg_icf_pane

0xaae8,	// (0x0004c5cf) list_vkb_icf_pane

0xaaf4,	// (0x0004c5db) bg_icf_pane_cp01

0xab07,	// (0x0004c5ee) vtchi_icf_list_pane

0xf3e7,	// (0x00050ece) list_vkb_icf_pane_t1_ParamLimits

0xf3e7,	// (0x00050ece) list_vkb_icf_pane_t1

0xab85,	// (0x0004c66c) vtchi_icf_list_pane_t1_ParamLimits

0xab85,	// (0x0004c66c) vtchi_icf_list_pane_t1

0xa92f,	// (0x0004c416) popup_fep_ituss_window_ParamLimits

0xa97b,	// (0x0004c462) popup_fep_vtchi_icf_pane_ParamLimits

0xa9a7,	// (0x0004c48e) ituss_keypad_pane_ParamLimits

0x30f4,	// (0x00044bdb) ituss_sks_pane

0xaae8,	// (0x0004c5cf) bg_icf_pane_ParamLimits

0xa8ff,	// (0x0004c3e6) icf_edit_indi_pane_ParamLimits

0xa8ff,	// (0x0004c3e6) icf_edit_indi_pane

0xaae8,	// (0x0004c5cf) list_vkb_icf_pane_ParamLimits

0xaaf4,	// (0x0004c5db) bg_icf_pane_cp01_ParamLimits

0xa91a,	// (0x0004c401) icf_edit_indi_pane_cp01_ParamLimits

0xa91a,	// (0x0004c401) icf_edit_indi_pane_cp01

0xab07,	// (0x0004c5ee) vtchi_query_pane

0x9c8b,	// (0x0004b772) icf_edit_indi_pane_g1_ParamLimits

0x9c8b,	// (0x0004b772) icf_edit_indi_pane_g1

0xf3fe,	// (0x00050ee5) icf_edit_indi_pane_g2_ParamLimits

0xf3fe,	// (0x00050ee5) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x000519e9) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x000519e9) icf_edit_indi_pane_g

0xf412,	// (0x00050ef9) icf_edit_indi_pane_t1

0xaba3,	// (0x0004c68a) bg_input_focus_pane_cp042

0x3bdc,	// (0x000456c3) vtchi_button_pane

0xabac,	// (0x0004c693) vtchi_query_pane_t1

0xabba,	// (0x0004c6a1) vtchi_query_pane_t2

0xabc8,	// (0x0004c6af) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x000519d8) vtchi_query_pane_t

0xd482,	// (0x0004ef69) bg_button_pane_cp13

0xabd6,	// (0x0004c6bd) vtchi_button_pane_g1

0x331b,	// (0x00044e02) ituss_sks_pane_g1

0x3326,	// (0x00044e0d) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x000519df) ituss_sks_pane_g

0xabde,	// (0x0004c6c5) ituss_sks_pane_t1

0xabec,	// (0x0004c6d3) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x000519e4) ituss_sks_pane_t

0x7267,	// (0x00048d4e) indicator_nsta_pane_cp_g1

0x7270,	// (0x00048d57) indicator_nsta_pane_cp_g2

0x7278,	// (0x00048d5f) indicator_nsta_pane_cp_g3

0x7280,	// (0x00048d67) indicator_nsta_pane_cp_g4

0x7270,	// (0x00048d57) indicator_nsta_pane_cp_g5

0x7278,	// (0x00048d5f) indicator_nsta_pane_cp_g6

0x0005,

0xfa7f,	// (0x00051566) indicator_nsta_pane_cp_g

0xefa4,	// (0x00050a8b) cell_graphic2_pane_t2_ParamLimits

0xefa4,	// (0x00050a8b) cell_graphic2_pane_t2

0x0001,

0xfd8c,	// (0x00051873) cell_graphic2_pane_t_ParamLimits

0xfd8c,	// (0x00051873) cell_graphic2_pane_t

0xefd9,	// (0x00050ac0) cell_graphic2_control_pane_t1

0xd4bc,	// (0x0004efa3) signal_pane_g3_ParamLimits

0xd4bc,	// (0x0004efa3) signal_pane_g3

0xd4d0,	// (0x0004efb7) signal_pane_g4_ParamLimits

0xd4d0,	// (0x0004efb7) signal_pane_g4

0xa8e9,	// (0x0004c3d0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa8e9,	// (0x0004c3d0) cell_ai5_widget_list_row_pane_t3

0xaaa7,	// (0x0004c58e) cell_ituss_key_pane_t1_ParamLimits

0xaaa7,	// (0x0004c58e) cell_ituss_key_pane_t1

0x52c6,	// (0x00046dad) form_field_data_wide_pane_vc_t2_ParamLimits

0x52c6,	// (0x00046dad) form_field_data_wide_pane_vc_t2

0x52da,	// (0x00046dc1) form_field_data_wide_pane_vc_t3_ParamLimits

0x52da,	// (0x00046dc1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x000512c9) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x000512c9) form_field_data_wide_pane_vc_t

0x6f11,	// (0x000489f8) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6f11,	// (0x000489f8) form_field_slider_wide_pane_vc_t3

0x6fef,	// (0x00048ad6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6fef,	// (0x00048ad6) form_field_popup_wide_pane_vc_t2

0x7006,	// (0x00048aed) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7006,	// (0x00048aed) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6e,	// (0x00051555) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x00051555) form_field_popup_wide_pane_vc_t

0xd264,	// (0x0004ed4b) aid_fshwr2_btn_pane_ParamLimits

0xd274,	// (0x0004ed5b) aid_fshwr2_syb_pane_ParamLimits

0xd288,	// (0x0004ed6f) aid_fshwr2_txt_pane_ParamLimits

0x3cb9,	// (0x000457a0) fshwr2_bg_pane_ParamLimits

0xd298,	// (0x0004ed7f) fshwr2_func_candi_pane_ParamLimits

0xd2b8,	// (0x0004ed9f) fshwr2_hwr_syb_pane_ParamLimits

0xd2da,	// (0x0004edc1) fshwr2_icf_pane_ParamLimits

0x2160,	// (0x00043c47) list_double_graphic_pane_vc_g4_ParamLimits

0x2160,	// (0x00043c47) list_double_graphic_pane_vc_g4

0x3199,	// (0x00044c80) cell_ituss_key_pane_g3_ParamLimits

0x3199,	// (0x00044c80) cell_ituss_key_pane_g3

0x32cb,	// (0x00044db2) cell_ituss_key_t5_ParamLimits

0x32cb,	// (0x00044db2) cell_ituss_key_t5

0xf2a5,	// (0x00050d8c) popup_fep_vkbss_window_ParamLimits

0x9e21,	// (0x0004b908) aid_cell_ai5_quarter

0xf412,	// (0x00050ef9) icf_edit_indi_pane_t1_ParamLimits

0x3751,	// (0x00045238) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3751,	// (0x00045238) aid_tch_indicator_popup_pane_cp2

0x3764,	// (0x0004524b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3764,	// (0x0004524b) aid_tch_query_popup_data_pane_cp2

0x5631,	// (0x00047118) aid_tch_query_popup_pane_ParamLimits

0x5631,	// (0x00047118) aid_tch_query_popup_pane

0x5631,	// (0x00047118) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5631,	// (0x00047118) aid_tch_query_popup_data_pane_cp1

0x4c97,	// (0x0004677e) cell_fshwr2_syb_bg_pane_ParamLimits

0xd3e6,	// (0x0004eecd) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd3f9,	// (0x0004eee0) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf296,	// (0x00050d7d) popup_fep_vkb_icf_pane_ParamLimits

0xd1f0,	// (0x0004ecd7) bg_popup_fep_char_preview_window_g10

0x9f56,	// (0x0004ba3d) cell_ai5_widget_pane_g11_ParamLimits

0x9f56,	// (0x0004ba3d) cell_ai5_widget_pane_g11

0x9f62,	// (0x0004ba49) cell_ai5_widget_pane_g12_ParamLimits

0x9f62,	// (0x0004ba49) cell_ai5_widget_pane_g12

0x9f6e,	// (0x0004ba55) cell_ai5_widget_pane_g13_ParamLimits

0x9f6e,	// (0x0004ba55) cell_ai5_widget_pane_g13

0xa09d,	// (0x0004bb84) cell_ai5_widget_pane_t11_ParamLimits

0xa09d,	// (0x0004bb84) cell_ai5_widget_pane_t11

0xa0af,	// (0x0004bb96) cell_ai5_widget_pane_t12_ParamLimits

0xa0af,	// (0x0004bb96) cell_ai5_widget_pane_t12

0x31a5,	// (0x00044c8c) cell_ituss_key_pane_g4_ParamLimits

0x31a5,	// (0x00044c8c) cell_ituss_key_pane_g4

0x31c1,	// (0x00044ca8) cell_ituss_key_pane_g5_ParamLimits

0x31c1,	// (0x00044ca8) cell_ituss_key_pane_g5

0x31dd,	// (0x00044cc4) cell_ituss_key_pane_g6_ParamLimits

0x31dd,	// (0x00044cc4) cell_ituss_key_pane_g6

0x51c1,	// (0x00046ca8) bg_icf_pane_g1

0xf39b,	// (0x00050e82) bg_icf_pane_g2

0xf3a5,	// (0x00050e8c) bg_icf_pane_g3

0xf3ad,	// (0x00050e94) bg_icf_pane_g4

0xf3b7,	// (0x00050e9e) bg_icf_pane_g5

0xf3c1,	// (0x00050ea8) bg_icf_pane_g6

0xf3cb,	// (0x00050eb2) bg_icf_pane_g7

0xf3d3,	// (0x00050eba) bg_icf_pane_g8

0xf3dd,	// (0x00050ec4) bg_icf_pane_g9

0x0008,

0xfede,	// (0x000519c5) bg_icf_pane_g

0xa994,	// (0x0004c47b) popup_hyb_candi_window_ParamLimits

0xa994,	// (0x0004c47b) popup_hyb_candi_window

0x5235,	// (0x00046d1c) bg_popup_sub_pane_cp01_ParamLimits

0x5235,	// (0x00046d1c) bg_popup_sub_pane_cp01

0xac27,	// (0x0004c70e) entry_hyb_candi_pane_ParamLimits

0xac27,	// (0x0004c70e) entry_hyb_candi_pane

0xac36,	// (0x0004c71d) grid_hyb_candi_pane_ParamLimits

0xac36,	// (0x0004c71d) grid_hyb_candi_pane

0xac4b,	// (0x0004c732) grid_hyb_phrase_pane_ParamLimits

0xac4b,	// (0x0004c732) grid_hyb_phrase_pane

0xac5a,	// (0x0004c741) cell_hyb_candi_pane_ParamLimits

0xac5a,	// (0x0004c741) cell_hyb_candi_pane

0xac7d,	// (0x0004c764) cell_hyb_candi_scroll_pane

0x4342,	// (0x00045e29) cell_hyb_candi_pane_g1

0xac86,	// (0x0004c76d) cell_hyb_candi_pane_t1

0xac94,	// (0x0004c77b) cell_hyb_phrase_pane

0x4342,	// (0x00045e29) cell_hyb_phrase_pane_g1

0xac9d,	// (0x0004c784) cell_hyb_phrase_pane_t1

0xacab,	// (0x0004c792) entry_hyb_candi_pane_t1

0x4973,	// (0x0004645a) input_focus_pane_cp06

0xacb9,	// (0x0004c7a0) cell_hyb_candi_scroll_pane_g1

0xacc1,	// (0x0004c7a8) cell_hyb_candi_scroll_pane_g1_aid

0xacc9,	// (0x0004c7b0) cell_hyb_candi_scroll_pane_g2

0xacd1,	// (0x0004c7b8) cell_hyb_candi_scroll_pane_g2_aid

0xacd9,	// (0x0004c7c0) cell_hyb_candi_scroll_pane_g3

0xace1,	// (0x0004c7c8) cell_hyb_candi_scroll_pane_g4

0xf12b,	// (0x00050c12) ai5_page_g1

0x32dd,	// (0x00044dc4) cell_ituss_key_t6_ParamLimits

0x32dd,	// (0x00044dc4) cell_ituss_key_t6

0xd40f,	// (0x0004eef6) icf_edit_indi_pane_cp02_ParamLimits

0xd40f,	// (0x0004eef6) icf_edit_indi_pane_cp02

0x30e7,	// (0x00044bce) icf_edit_indi_pane_cp03_ParamLimits

0x30e7,	// (0x00044bce) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
