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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00035bc0 };

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
0x8fbe,	// (0x0003eb7e) Screen

0x8fca,	// (0x0003eb8a) application_window_ParamLimits

0x8fca,	// (0x0003eb8a) application_window

0xba01,	// (0x000415c1) screen_g1

0x85ae,	// (0x0003e16e) area_bottom_pane_ParamLimits

0x85ae,	// (0x0003e16e) area_bottom_pane

0x14c2,	// (0x00037082) area_top_pane_ParamLimits

0x14c2,	// (0x00037082) area_top_pane

0x1556,	// (0x00037116) main_pane_ParamLimits

0x1556,	// (0x00037116) main_pane

0xba0b,	// (0x000415cb) misc_graphics

0x9d68,	// (0x0003f928) battery_pane_ParamLimits

0x9d68,	// (0x0003f928) battery_pane

0xd939,	// (0x000434f9) bg_status_flat_pane_g8

0xd941,	// (0x00043501) bg_status_flat_pane_g9

0xd05c,	// (0x00042c1c) context_pane_ParamLimits

0xd05c,	// (0x00042c1c) context_pane

0x9ed3,	// (0x0003fa93) navi_pane_ParamLimits

0x9ed3,	// (0x0003fa93) navi_pane

0x9f4a,	// (0x0003fb0a) signal_pane_ParamLimits

0x9f4a,	// (0x0003fb0a) signal_pane

0x0008,

0xf849,	// (0x00045409) bg_status_flat_pane_g

0x9fda,	// (0x0003fb9a) status_pane_g1_ParamLimits

0x9fda,	// (0x0003fb9a) status_pane_g1

0x9ff0,	// (0x0003fbb0) status_pane_g2_ParamLimits

0x9ff0,	// (0x0003fbb0) status_pane_g2

0xd0c1,	// (0x00042c81) status_pane_g3_ParamLimits

0xd0c1,	// (0x00042c81) status_pane_g3

0x0004,

0xf7bd,	// (0x0004537d) status_pane_g_ParamLimits

0xf7bd,	// (0x0004537d) status_pane_g

0x9ffc,	// (0x0003fbbc) title_pane_ParamLimits

0x9ffc,	// (0x0003fbbc) title_pane

0xa05d,	// (0x0003fc1d) uni_indicator_pane_ParamLimits

0xa05d,	// (0x0003fc1d) uni_indicator_pane

0xce87,	// (0x00042a47) bg_list_pane_ParamLimits

0xce87,	// (0x00042a47) bg_list_pane

0x8903,	// (0x0003e4c3) find_pane

0x9656,	// (0x0003f216) listscroll_app_pane_ParamLimits

0x9656,	// (0x0003f216) listscroll_app_pane

0xcea7,	// (0x00042a67) listscroll_form_pane

0x890b,	// (0x0003e4cb) listscroll_gen_pane_ParamLimits

0x890b,	// (0x0003e4cb) listscroll_gen_pane

0xcea7,	// (0x00042a67) listscroll_set_pane

0xd8d8,	// (0x00043498) main_idle_act_pane

0xcc75,	// (0x00042835) main_idle_trad_pane

0xcc75,	// (0x00042835) main_list_empty_pane

0xc385,	// (0x00041f45) main_midp_pane

0xcec1,	// (0x00042a81) main_pane_g1_ParamLimits

0xcec1,	// (0x00042a81) main_pane_g1

0x9662,	// (0x0003f222) popup_ai_message_window_ParamLimits

0x9662,	// (0x0003f222) popup_ai_message_window

0x96f3,	// (0x0003f2b3) popup_fep_china_uni_window_ParamLimits

0x96f3,	// (0x0003f2b3) popup_fep_china_uni_window

0xcef3,	// (0x00042ab3) popup_fep_japan_candidate_window_ParamLimits

0xcef3,	// (0x00042ab3) popup_fep_japan_candidate_window

0xcf11,	// (0x00042ad1) popup_fep_japan_predictive_window_ParamLimits

0xcf11,	// (0x00042ad1) popup_fep_japan_predictive_window

0x974d,	// (0x0003f30d) popup_find_window

0x976a,	// (0x0003f32a) popup_grid_graphic_window_ParamLimits

0x976a,	// (0x0003f32a) popup_grid_graphic_window

0xcf41,	// (0x00042b01) popup_large_graphic_colour_window

0x97fc,	// (0x0003f3bc) popup_menu_window_ParamLimits

0x97fc,	// (0x0003f3bc) popup_menu_window

0x99c8,	// (0x0003f588) popup_note_image_window

0x998e,	// (0x0003f54e) popup_note_wait_window_ParamLimits

0x998e,	// (0x0003f54e) popup_note_wait_window

0x99e0,	// (0x0003f5a0) popup_note_window_ParamLimits

0x99e0,	// (0x0003f5a0) popup_note_window

0x9a86,	// (0x0003f646) popup_query_code_window_ParamLimits

0x9a86,	// (0x0003f646) popup_query_code_window

0xcf67,	// (0x00042b27) popup_query_data_code_window_ParamLimits

0xcf67,	// (0x00042b27) popup_query_data_code_window

0x9ac0,	// (0x0003f680) popup_query_data_window_ParamLimits

0x9ac0,	// (0x0003f680) popup_query_data_window

0x9b36,	// (0x0003f6f6) popup_query_sat_info_window_ParamLimits

0x9b36,	// (0x0003f6f6) popup_query_sat_info_window

0x9bcd,	// (0x0003f78d) popup_snote_single_graphic_window_ParamLimits

0x9bcd,	// (0x0003f78d) popup_snote_single_graphic_window

0x9bcd,	// (0x0003f78d) popup_snote_single_text_window_ParamLimits

0x9bcd,	// (0x0003f78d) popup_snote_single_text_window

0xcf7e,	// (0x00042b3e) popup_sub_window_general

0xcfc4,	// (0x00042b84) popup_window_general_ParamLimits

0xcfc4,	// (0x00042b84) popup_window_general

0xcfd9,	// (0x00042b99) power_save_pane

0x87c3,	// (0x0003e383) control_pane_g1_ParamLimits

0x87c3,	// (0x0003e383) control_pane_g1

0x2300,	// (0x00037ec0) control_pane_g2_ParamLimits

0x2300,	// (0x00037ec0) control_pane_g2

0xce69,	// (0x00042a29) control_pane_g3_ParamLimits

0xce69,	// (0x00042a29) control_pane_g3

0x0007,

0xf7a5,	// (0x00045365) control_pane_g_ParamLimits

0xf7a5,	// (0x00045365) control_pane_g

0x8804,	// (0x0003e3c4) control_pane_t1_ParamLimits

0x8804,	// (0x0003e3c4) control_pane_t1

0x8862,	// (0x0003e422) control_pane_t2_ParamLimits

0x8862,	// (0x0003e422) control_pane_t2

0x0002,

0xf7b6,	// (0x00045376) control_pane_t_ParamLimits

0xf7b6,	// (0x00045376) control_pane_t

0xcd8a,	// (0x0004294a) navi_navi_volume_pane_cp1

0xcd93,	// (0x00042953) status_small_icon_pane

0xcd9b,	// (0x0004295b) status_small_pane_g1_ParamLimits

0xcd9b,	// (0x0004295b) status_small_pane_g1

0xcdcf,	// (0x0004298f) status_small_pane_g2_ParamLimits

0xcdcf,	// (0x0004298f) status_small_pane_g2

0xcddb,	// (0x0004299b) status_small_pane_g3_ParamLimits

0xcddb,	// (0x0004299b) status_small_pane_g3

0xcde7,	// (0x000429a7) status_small_pane_g4_ParamLimits

0xcde7,	// (0x000429a7) status_small_pane_g4

0xcdf3,	// (0x000429b3) status_small_pane_g5_ParamLimits

0xcdf3,	// (0x000429b3) status_small_pane_g5

0xce02,	// (0x000429c2) status_small_pane_g6_ParamLimits

0xce02,	// (0x000429c2) status_small_pane_g6

0x0007,

0xf794,	// (0x00045354) status_small_pane_g_ParamLimits

0xf794,	// (0x00045354) status_small_pane_g

0xce32,	// (0x000429f2) status_small_pane_t1

0xce55,	// (0x00042a15) status_small_wait_pane_ParamLimits

0xce55,	// (0x00042a15) status_small_wait_pane

0x94c6,	// (0x0003f086) aid_levels_signal_ParamLimits

0x94c6,	// (0x0003f086) aid_levels_signal

0x94de,	// (0x0003f09e) signal_pane_g1_ParamLimits

0x94de,	// (0x0003f09e) signal_pane_g1

0x94f9,	// (0x0003f0b9) signal_pane_g2_ParamLimits

0x94f9,	// (0x0003f0b9) signal_pane_g2

0x0001,

0xf729,	// (0x000452e9) signal_pane_g_ParamLimits

0xf729,	// (0x000452e9) signal_pane_g

0xc7b9,	// (0x00042379) context_pane_g1

0x8fda,	// (0x0003eb9a) title_pane_g1

0x900f,	// (0x0003ebcf) title_pane_t1

0xba21,	// (0x000415e1) title_pane_t2

0xba47,	// (0x00041607) title_pane_t3

0x0002,

0xf573,	// (0x00045133) title_pane_t

0xa085,	// (0x0003fc45) aid_levels_battery_ParamLimits

0xa085,	// (0x0003fc45) aid_levels_battery

0xa0a1,	// (0x0003fc61) battery_pane_g1_ParamLimits

0xa0a1,	// (0x0003fc61) battery_pane_g1

0xa0be,	// (0x0003fc7e) battery_pane_g2_ParamLimits

0xa0be,	// (0x0003fc7e) battery_pane_g2

0x0001,

0xf7c8,	// (0x00045388) battery_pane_g_ParamLimits

0xf7c8,	// (0x00045388) battery_pane_g

0xa303,	// (0x0003fec3) uni_indicator_pane_g1

0xa318,	// (0x0003fed8) uni_indicator_pane_g2

0xa32d,	// (0x0003feed) uni_indicator_pane_g3

0x0005,

0xf8da,	// (0x0004549a) uni_indicator_pane_g

0xcae5,	// (0x000426a5) navi_icon_pane_ParamLimits

0xcae5,	// (0x000426a5) navi_icon_pane

0xca2c,	// (0x000425ec) navi_midp_pane

0xcb01,	// (0x000426c1) navi_navi_pane

0xcb0b,	// (0x000426cb) navi_text_pane_ParamLimits

0xcb0b,	// (0x000426cb) navi_text_pane

0xba01,	// (0x000415c1) status_small_wait_pane_g1

0xbe05,	// (0x000419c5) status_small_wait_pane_g2

0x0001,

0xf8d5,	// (0x00045495) status_small_wait_pane_g

0xa2a2,	// (0x0003fe62) navi_navi_icon_text_pane

0xa2aa,	// (0x0003fe6a) navi_navi_pane_g1_ParamLimits

0xa2aa,	// (0x0003fe6a) navi_navi_pane_g1

0xa2bc,	// (0x0003fe7c) navi_navi_pane_g2_ParamLimits

0xa2bc,	// (0x0003fe7c) navi_navi_pane_g2

0x0001,

0xf8a3,	// (0x00045463) navi_navi_pane_g_ParamLimits

0xf8a3,	// (0x00045463) navi_navi_pane_g

0xdebc,	// (0x00043a7c) navi_navi_tabs_pane

0xa2ce,	// (0x0003fe8e) navi_navi_text_pane

0xa2a2,	// (0x0003fe62) navi_navi_volume_pane

0xa290,	// (0x0003fe50) navi_text_pane_t1

0xa284,	// (0x0003fe44) navi_icon_pane_g1

0xddfd,	// (0x000439bd) navi_navi_text_pane_t1

0x8acd,	// (0x0003e68d) navi_navi_volume_pane_g1

0x8ad5,	// (0x0003e695) volume_small_pane

0xa1e0,	// (0x0003fda0) navi_navi_icon_text_pane_g1

0xa1e8,	// (0x0003fda8) navi_navi_icon_text_pane_t1

0xcb01,	// (0x000426c1) navi_tabs_2_long_pane

0xcb01,	// (0x000426c1) navi_tabs_2_pane

0xcb01,	// (0x000426c1) navi_tabs_3_long_pane

0xcb01,	// (0x000426c1) navi_tabs_3_pane

0xcb01,	// (0x000426c1) navi_tabs_4_pane

0x8aad,	// (0x0003e66d) tabs_2_active_pane_ParamLimits

0x8aad,	// (0x0003e66d) tabs_2_active_pane

0x8abd,	// (0x0003e67d) tabs_2_passive_pane_ParamLimits

0x8abd,	// (0x0003e67d) tabs_2_passive_pane

0x8a7b,	// (0x0003e63b) tabs_3_active_pane_ParamLimits

0x8a7b,	// (0x0003e63b) tabs_3_active_pane

0x8a8b,	// (0x0003e64b) tabs_3_passive_pane_ParamLimits

0x8a8b,	// (0x0003e64b) tabs_3_passive_pane

0x8a9c,	// (0x0003e65c) tabs_3_passive_pane_cp_ParamLimits

0x8a9c,	// (0x0003e65c) tabs_3_passive_pane_cp

0x8a37,	// (0x0003e5f7) tabs_4_active_pane_ParamLimits

0x8a37,	// (0x0003e5f7) tabs_4_active_pane

0x8a48,	// (0x0003e608) tabs_4_passive_pane_ParamLimits

0x8a48,	// (0x0003e608) tabs_4_passive_pane

0x8a59,	// (0x0003e619) tabs_4_passive_pane_cp_ParamLimits

0x8a59,	// (0x0003e619) tabs_4_passive_pane_cp

0x8a6a,	// (0x0003e62a) tabs_4_passive_pane_cp2_ParamLimits

0x8a6a,	// (0x0003e62a) tabs_4_passive_pane_cp2

0x8a17,	// (0x0003e5d7) tabs_2_long_active_pane_ParamLimits

0x8a17,	// (0x0003e5d7) tabs_2_long_active_pane

0x8a27,	// (0x0003e5e7) tabs_2_long_passive_pane_ParamLimits

0x8a27,	// (0x0003e5e7) tabs_2_long_passive_pane

0x89e2,	// (0x0003e5a2) tabs_3_long_active_pane_ParamLimits

0x89e2,	// (0x0003e5a2) tabs_3_long_active_pane

0x89f3,	// (0x0003e5b3) tabs_3_long_passive_pane_ParamLimits

0x89f3,	// (0x0003e5b3) tabs_3_long_passive_pane

0x8a06,	// (0x0003e5c6) tabs_3_long_passive_pane_cp_ParamLimits

0x8a06,	// (0x0003e5c6) tabs_3_long_passive_pane_cp

0x259b,	// (0x0003815b) volume_small_pane_g1

0x8991,	// (0x0003e551) volume_small_pane_g2

0x899a,	// (0x0003e55a) volume_small_pane_g3

0x89a3,	// (0x0003e563) volume_small_pane_g4

0x89ac,	// (0x0003e56c) volume_small_pane_g5

0x89b5,	// (0x0003e575) volume_small_pane_g6

0x89be,	// (0x0003e57e) volume_small_pane_g7

0x89c7,	// (0x0003e587) volume_small_pane_g8

0x89d0,	// (0x0003e590) volume_small_pane_g9

0x89d9,	// (0x0003e599) volume_small_pane_g10

0x0009,

0xf86f,	// (0x0004542f) volume_small_pane_g

0xba59,	// (0x00041619) bg_active_tab_pane_cp2_ParamLimits

0xba59,	// (0x00041619) bg_active_tab_pane_cp2

0x909b,	// (0x0003ec5b) tabs_3_active_pane_g1

0x90a3,	// (0x0003ec63) tabs_3_active_pane_t1

0xba59,	// (0x00041619) bg_passive_tab_pane_cp2_ParamLimits

0xba59,	// (0x00041619) bg_passive_tab_pane_cp2

0x909b,	// (0x0003ec5b) tabs_3_passive_pane_g1

0x90a3,	// (0x0003ec63) tabs_3_passive_pane_t1

0xba59,	// (0x00041619) bg_active_tab_pane_cp3_ParamLimits

0xba59,	// (0x00041619) bg_active_tab_pane_cp3

0x90b5,	// (0x0003ec75) tabs_4_active_pane_g1

0x90bd,	// (0x0003ec7d) tabs_4_active_pane_t1

0xba59,	// (0x00041619) bg_passive_tab_pane_cp3_ParamLimits

0xba59,	// (0x00041619) bg_passive_tab_pane_cp3

0x90b5,	// (0x0003ec75) tabs_4_1_passive_pane_g1

0x90bd,	// (0x0003ec7d) tabs_4_1_passive_pane_t1

0xc385,	// (0x00041f45) list_highlight_pane_cp2

0xa3ba,	// (0x0003ff7a) list_set_pane_ParamLimits

0xa3ba,	// (0x0003ff7a) list_set_pane

0xa454,	// (0x00040014) main_pane_set_t1_ParamLimits

0xa454,	// (0x00040014) main_pane_set_t1

0xa474,	// (0x00040034) main_pane_set_t2_ParamLimits

0xa474,	// (0x00040034) main_pane_set_t2

0xa488,	// (0x00040048) main_pane_set_t3_ParamLimits

0xa488,	// (0x00040048) main_pane_set_t3

0xa49a,	// (0x0004005a) main_pane_set_t4_ParamLimits

0xa49a,	// (0x0004005a) main_pane_set_t4

0x0003,

0xf93f,	// (0x000454ff) main_pane_set_t_ParamLimits

0xf93f,	// (0x000454ff) main_pane_set_t

0xa4ac,	// (0x0004006c) setting_code_pane

0xa4b4,	// (0x00040074) setting_slider_graphic_pane

0xa4b4,	// (0x00040074) setting_slider_pane

0xa4b4,	// (0x00040074) setting_text_pane

0xa4b4,	// (0x00040074) setting_volume_pane

0x184d,	// (0x0003740d) volume_set_pane

0xba67,	// (0x00041627) bg_set_opt_pane_cp

0x1855,	// (0x00037415) setting_slider_pane_t1

0x186e,	// (0x0003742e) setting_slider_pane_t2

0x1887,	// (0x00037447) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004513a) setting_slider_pane_t

0x189e,	// (0x0003745e) slider_set_pane

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp2

0xba75,	// (0x00041635) setting_slider_graphic_pane_g1

0x18b4,	// (0x00037474) setting_slider_graphic_pane_t1

0x18c3,	// (0x00037483) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00045141) setting_slider_graphic_pane_t

0x18d2,	// (0x00037492) slider_set_pane_cp

0xba0b,	// (0x000415cb) input_focus_pane_cp1

0xe311,	// (0x00043ed1) list_set_text_pane

0xba01,	// (0x000415c1) setting_text_pane_g1

0xba0b,	// (0x000415cb) input_focus_pane_cp2

0xba01,	// (0x000415c1) setting_code_pane_g1

0xba7e,	// (0x0004163e) setting_code_pane_t1

0x0576,	// (0x00036136) set_text_pane_t1_ParamLimits

0x0576,	// (0x00036136) set_text_pane_t1

0xc295,	// (0x00041e55) set_opt_bg_pane_g1

0xc29d,	// (0x00041e5d) set_opt_bg_pane_g2

0xe2f1,	// (0x00043eb1) set_opt_bg_pane_g3

0xc2ad,	// (0x00041e6d) set_opt_bg_pane_g4

0xc2b5,	// (0x00041e75) set_opt_bg_pane_g5

0xc2bd,	// (0x00041e7d) set_opt_bg_pane_g6

0xe2f9,	// (0x00043eb9) set_opt_bg_pane_g7

0xe301,	// (0x00043ec1) set_opt_bg_pane_g8

0xe309,	// (0x00043ec9) set_opt_bg_pane_g9

0x0008,

0xf92c,	// (0x000454ec) set_opt_bg_pane_g

0xe2e4,	// (0x00043ea4) slider_set_pane_g1

0x2769,	// (0x00038329) slider_set_pane_g2

0x0006,

0xf91d,	// (0x000454dd) slider_set_pane_g

0x2705,	// (0x000382c5) volume_set_pane_g1

0x270d,	// (0x000382cd) volume_set_pane_g2

0x2715,	// (0x000382d5) volume_set_pane_g3

0x271d,	// (0x000382dd) volume_set_pane_g4

0x2725,	// (0x000382e5) volume_set_pane_g5

0x272d,	// (0x000382ed) volume_set_pane_g6

0x2735,	// (0x000382f5) volume_set_pane_g7

0x273d,	// (0x000382fd) volume_set_pane_g8

0x2745,	// (0x00038305) volume_set_pane_g9

0x274d,	// (0x0003830d) volume_set_pane_g10

0x0009,

0xf8f5,	// (0x000454b5) volume_set_pane_g

0x90cf,	// (0x0003ec8f) indicator_pane_ParamLimits

0x90cf,	// (0x0003ec8f) indicator_pane

0x90f7,	// (0x0003ecb7) main_idle_pane_g2_ParamLimits

0x90f7,	// (0x0003ecb7) main_idle_pane_g2

0x912f,	// (0x0003ecef) main_pane_idle_g1_ParamLimits

0x912f,	// (0x0003ecef) main_pane_idle_g1

0xba8c,	// (0x0004164c) popup_clock_digital_analogue_window_ParamLimits

0xba8c,	// (0x0004164c) popup_clock_digital_analogue_window

0x9156,	// (0x0003ed16) soft_indicator_pane_ParamLimits

0x9156,	// (0x0003ed16) soft_indicator_pane

0x9170,	// (0x0003ed30) wallpaper_pane_ParamLimits

0x9170,	// (0x0003ed30) wallpaper_pane

0xba01,	// (0x000415c1) wallpaper_pane_g1

0x9182,	// (0x0003ed42) indicator_pane_g1_ParamLimits

0x9182,	// (0x0003ed42) indicator_pane_g1

0xe458,	// (0x00044018) navi_navi_icon_text_pane_srt_g1

0xbaba,	// (0x0004167a) soft_indicator_pane_t1

0xbad4,	// (0x00041694) aid_ps_area_pane

0x919b,	// (0x0003ed5b) aid_ps_clock_pane

0xbae5,	// (0x000416a5) aid_ps_indicator_pane

0xbaf1,	// (0x000416b1) indicator_ps_pane_ParamLimits

0xbaf1,	// (0x000416b1) indicator_ps_pane

0xbb00,	// (0x000416c0) power_save_pane_g1_ParamLimits

0xbb00,	// (0x000416c0) power_save_pane_g1

0xbb0c,	// (0x000416cc) power_save_pane_g2_ParamLimits

0xbb0c,	// (0x000416cc) power_save_pane_g2

0x13b6,	// (0x00036f76) aid_navinavi_width_pane

0xbad4,	// (0x00041694) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00045146) power_save_pane_g_ParamLimits

0xf586,	// (0x00045146) power_save_pane_g

0xbb1a,	// (0x000416da) power_save_pane_t1_ParamLimits

0xbb1a,	// (0x000416da) power_save_pane_t1

0x919b,	// (0x0003ed5b) aid_ps_clock_pane_ParamLimits

0xbae5,	// (0x000416a5) aid_ps_indicator_pane_ParamLimits

0xbb2c,	// (0x000416ec) power_save_pane_t4_ParamLimits

0xbb2c,	// (0x000416ec) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004514b) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004514b) power_save_pane_t

0xbb56,	// (0x00041716) power_save_t3_ParamLimits

0xbb56,	// (0x00041716) power_save_t3

0xbb41,	// (0x00041701) power_save_t2_ParamLimits

0xbb41,	// (0x00041701) power_save_t2

0xbb6b,	// (0x0004172b) indicator_ps_pane_g1

0x91a9,	// (0x0003ed69) ai_gene_pane_ParamLimits

0x91a9,	// (0x0003ed69) ai_gene_pane

0x91c0,	// (0x0003ed80) ai_links_pane_ParamLimits

0x91c0,	// (0x0003ed80) ai_links_pane

0x91d8,	// (0x0003ed98) indicator_pane_cp1_ParamLimits

0x91d8,	// (0x0003ed98) indicator_pane_cp1

0x91e7,	// (0x0003eda7) main_pane_idle_g1_cp_ParamLimits

0x91e7,	// (0x0003eda7) main_pane_idle_g1_cp

0xbb74,	// (0x00041734) popup_ai_links_title_window

0x91ff,	// (0x0003edbf) soft_indicator_pane_cp1_ParamLimits

0x91ff,	// (0x0003edbf) soft_indicator_pane_cp1

0xe12c,	// (0x00043cec) ai_links_pane_g1

0xe135,	// (0x00043cf5) grid_ai_links_pane

0xa2fa,	// (0x0003feba) ai_gene_pane_1

0xe11a,	// (0x00043cda) ai_gene_pane_2

0xe123,	// (0x00043ce3) list_highlight_pane_cp4

0xa2d6,	// (0x0003fe96) cell_ai_link_pane_ParamLimits

0xa2d6,	// (0x0003fe96) cell_ai_link_pane

0xe112,	// (0x00043cd2) cell_ai_link_pane_g1

0xbe05,	// (0x000419c5) cell_ai_link_pane_g2

0x0001,

0xf8d0,	// (0x00045490) cell_ai_link_pane_g

0xba0b,	// (0x000415cb) grid_highlight_cp2

0xba0b,	// (0x000415cb) bg_popup_sub_pane_cp1

0xbb8b,	// (0x0004174b) popup_ai_links_title_window_t1

0xe060,	// (0x00043c20) ai_gene_pane_1_g1_ParamLimits

0xe060,	// (0x00043c20) ai_gene_pane_1_g1

0xe06c,	// (0x00043c2c) ai_gene_pane_1_g2_ParamLimits

0xe06c,	// (0x00043c2c) ai_gene_pane_1_g2

0x0001,

0xf8c6,	// (0x00045486) ai_gene_pane_1_g_ParamLimits

0xf8c6,	// (0x00045486) ai_gene_pane_1_g

0xe079,	// (0x00043c39) ai_gene_pane_1_t1_ParamLimits

0xe079,	// (0x00043c39) ai_gene_pane_1_t1

0xe0ad,	// (0x00043c6d) grid_ai_soft_ind_pane

0xe04b,	// (0x00043c0b) ai_gene_pane_2_t1_ParamLimits

0xe04b,	// (0x00043c0b) ai_gene_pane_2_t1

0x9213,	// (0x0003edd3) main_pane_empty_t1_ParamLimits

0x9213,	// (0x0003edd3) main_pane_empty_t1

0x922b,	// (0x0003edeb) main_pane_empty_t2_ParamLimits

0x922b,	// (0x0003edeb) main_pane_empty_t2

0x9240,	// (0x0003ee00) main_pane_empty_t3_ParamLimits

0x9240,	// (0x0003ee00) main_pane_empty_t3

0x9252,	// (0x0003ee12) main_pane_empty_t4_ParamLimits

0x9252,	// (0x0003ee12) main_pane_empty_t4

0x9264,	// (0x0003ee24) main_pane_empty_t5_ParamLimits

0x9264,	// (0x0003ee24) main_pane_empty_t5

0x0004,

0xf590,	// (0x00045150) main_pane_empty_t_ParamLimits

0xf590,	// (0x00045150) main_pane_empty_t

0xc2e6,	// (0x00041ea6) bg_popup_window_pane_ParamLimits

0xc2e6,	// (0x00041ea6) bg_popup_window_pane

0xde0b,	// (0x000439cb) find_popup_pane_cp2_ParamLimits

0xde0b,	// (0x000439cb) find_popup_pane_cp2

0xde17,	// (0x000439d7) heading_pane_ParamLimits

0xde17,	// (0x000439d7) heading_pane

0xba0b,	// (0x000415cb) bg_popup_sub_pane

0xa205,	// (0x0003fdc5) bg_popup_window_pane_g1_ParamLimits

0xa205,	// (0x0003fdc5) bg_popup_window_pane_g1

0xa214,	// (0x0003fdd4) bg_popup_window_pane_g2_ParamLimits

0xa214,	// (0x0003fdd4) bg_popup_window_pane_g2

0xa220,	// (0x0003fde0) bg_popup_window_pane_g3_ParamLimits

0xa220,	// (0x0003fde0) bg_popup_window_pane_g3

0xa22c,	// (0x0003fdec) bg_popup_window_pane_g4_ParamLimits

0xa22c,	// (0x0003fdec) bg_popup_window_pane_g4

0xa23b,	// (0x0003fdfb) bg_popup_window_pane_g5_ParamLimits

0xa23b,	// (0x0003fdfb) bg_popup_window_pane_g5

0xa24b,	// (0x0003fe0b) bg_popup_window_pane_g6_ParamLimits

0xa24b,	// (0x0003fe0b) bg_popup_window_pane_g6

0xa257,	// (0x0003fe17) bg_popup_window_pane_g7_ParamLimits

0xa257,	// (0x0003fe17) bg_popup_window_pane_g7

0xa266,	// (0x0003fe26) bg_popup_window_pane_g8_ParamLimits

0xa266,	// (0x0003fe26) bg_popup_window_pane_g8

0xa275,	// (0x0003fe35) bg_popup_window_pane_g9_ParamLimits

0xa275,	// (0x0003fe35) bg_popup_window_pane_g9

0xddf1,	// (0x000439b1) bg_popup_window_pane_g10_ParamLimits

0xddf1,	// (0x000439b1) bg_popup_window_pane_g10

0x0009,

0xf88e,	// (0x0004544e) bg_popup_window_pane_g_ParamLimits

0xf88e,	// (0x0004544e) bg_popup_window_pane_g

0xdda8,	// (0x00043968) bg_popup_heading_pane_ParamLimits

0xdda8,	// (0x00043968) bg_popup_heading_pane

0x28a7,	// (0x00038467) tabs_4_passive_pane_cp_srt_ParamLimits

0x28a7,	// (0x00038467) tabs_4_passive_pane_cp_srt

0x28b9,	// (0x00038479) tabs_4_passive_pane_srt_ParamLimits

0xddbc,	// (0x0004397c) heading_pane_g2

0x28b9,	// (0x00038479) tabs_4_passive_pane_srt

0xd2a5,	// (0x00042e65) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd2a5,	// (0x00042e65) bg_passive_tab_pane_cp3_srt

0xddc4,	// (0x00043984) heading_pane_t1_ParamLimits

0xddc4,	// (0x00043984) heading_pane_t1

0xdddb,	// (0x0004399b) heading_pane_t2_ParamLimits

0xdddb,	// (0x0004399b) heading_pane_t2

0x0001,

0xf889,	// (0x00045449) heading_pane_t_ParamLimits

0xf889,	// (0x00045449) heading_pane_t

0xd901,	// (0x000434c1) bg_popup_heading_pane_g1

0xd992,	// (0x00043552) bg_popup_heading_pane_g2

0xd99c,	// (0x0004355c) bg_popup_heading_pane_g3

0xd9a6,	// (0x00043566) bg_popup_heading_pane_g4

0xd9b0,	// (0x00043570) bg_popup_heading_pane_g5

0xd9ba,	// (0x0004357a) bg_popup_heading_pane_g6

0xd9c2,	// (0x00043582) bg_popup_heading_pane_g7

0xd9ca,	// (0x0004358a) bg_popup_heading_pane_g8

0xd9d4,	// (0x00043594) bg_popup_heading_pane_g9

0x0008,

0xf85c,	// (0x0004541c) bg_popup_heading_pane_g

0xd1b5,	// (0x00042d75) bg_popup_sub_pane_g1

0xd1bd,	// (0x00042d7d) bg_popup_sub_pane_g2

0xd1c5,	// (0x00042d85) bg_popup_sub_pane_g3

0xd1cd,	// (0x00042d8d) bg_popup_sub_pane_g4

0xd1d5,	// (0x00042d95) bg_popup_sub_pane_g5

0xd1dd,	// (0x00042d9d) bg_popup_sub_pane_g6

0xd1e5,	// (0x00042da5) bg_popup_sub_pane_g7

0xd1ed,	// (0x00042dad) bg_popup_sub_pane_g8

0xd1f5,	// (0x00042db5) bg_popup_sub_pane_g9

0x0008,

0xf836,	// (0x000453f6) bg_popup_sub_pane_g

0xba59,	// (0x00041619) bg_popup_window_pane_cp5_ParamLimits

0xba59,	// (0x00041619) bg_popup_window_pane_cp5

0xbba8,	// (0x00041768) popup_note_window_g1_ParamLimits

0xbba8,	// (0x00041768) popup_note_window_g1

0xbbb4,	// (0x00041774) popup_note_window_t1_ParamLimits

0xbbb4,	// (0x00041774) popup_note_window_t1

0xbbc6,	// (0x00041786) popup_note_window_t2_ParamLimits

0xbbc6,	// (0x00041786) popup_note_window_t2

0xbcbb,	// (0x0004187b) popup_note_window_t3_ParamLimits

0xbcbb,	// (0x0004187b) popup_note_window_t3

0xbccd,	// (0x0004188d) popup_note_window_t4_ParamLimits

0xbccd,	// (0x0004188d) popup_note_window_t4

0xbcf5,	// (0x000418b5) popup_note_window_t5_ParamLimits

0xbcf5,	// (0x000418b5) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004515b) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004515b) popup_note_window_t

0xbd19,	// (0x000418d9) bg_popup_window_pane_cp6_ParamLimits

0xbd19,	// (0x000418d9) bg_popup_window_pane_cp6

0xd863,	// (0x00043423) popup_note_image_window_g1_ParamLimits

0xd863,	// (0x00043423) popup_note_image_window_g1

0xd86f,	// (0x0004342f) popup_note_image_window_g2_ParamLimits

0xd86f,	// (0x0004342f) popup_note_image_window_g2

0x0001,

0x0041,	// (0x00035c01) popup_note_image_window_g_ParamLimits

0x0041,	// (0x00035c01) popup_note_image_window_g

0xd888,	// (0x00043448) popup_note_image_window_t1_ParamLimits

0xd888,	// (0x00043448) popup_note_image_window_t1

0xd8a1,	// (0x00043461) popup_note_image_window_t2_ParamLimits

0xd8a1,	// (0x00043461) popup_note_image_window_t2

0xd8ba,	// (0x0004347a) popup_note_image_window_t3_ParamLimits

0xd8ba,	// (0x0004347a) popup_note_image_window_t3

0x0002,

0x0046,	// (0x00035c06) popup_note_image_window_t_ParamLimits

0x0046,	// (0x00035c06) popup_note_image_window_t

0xd740,	// (0x00043300) bg_popup_window_pane_cp7_ParamLimits

0xd740,	// (0x00043300) bg_popup_window_pane_cp7

0xd770,	// (0x00043330) popup_note_wait_window_g1_ParamLimits

0xd770,	// (0x00043330) popup_note_wait_window_g1

0xd77c,	// (0x0004333c) popup_note_wait_window_g2_ParamLimits

0xd77c,	// (0x0004333c) popup_note_wait_window_g2

0x0002,

0x002f,	// (0x00035bef) popup_note_wait_window_g_ParamLimits

0x002f,	// (0x00035bef) popup_note_wait_window_g

0xd794,	// (0x00043354) popup_note_wait_window_t1_ParamLimits

0xd794,	// (0x00043354) popup_note_wait_window_t1

0xd7bb,	// (0x0004337b) popup_note_wait_window_t2_ParamLimits

0xd7bb,	// (0x0004337b) popup_note_wait_window_t2

0xd7d8,	// (0x00043398) popup_note_wait_window_t3_ParamLimits

0xd7d8,	// (0x00043398) popup_note_wait_window_t3

0xd7eb,	// (0x000433ab) popup_note_wait_window_t4_ParamLimits

0xd7eb,	// (0x000433ab) popup_note_wait_window_t4

0x0004,

0x0036,	// (0x00035bf6) popup_note_wait_window_t_ParamLimits

0x0036,	// (0x00035bf6) popup_note_wait_window_t

0xd810,	// (0x000433d0) wait_bar_pane_ParamLimits

0xd810,	// (0x000433d0) wait_bar_pane

0xba0b,	// (0x000415cb) wait_anim_pane

0xba0b,	// (0x000415cb) wait_border_pane

0xba01,	// (0x000415c1) wait_anim_pane_g1

0xba01,	// (0x000415c1) wait_anim_pane_g2

0x0001,

0xf724,	// (0x000452e4) wait_anim_pane_g

0xd6e4,	// (0x000432a4) wait_border_pane_g1

0xd6ef,	// (0x000432af) wait_border_pane_g2

0xd6f8,	// (0x000432b8) wait_border_pane_g3

0x0002,

0x0028,	// (0x00035be8) wait_border_pane_g

0xd554,	// (0x00043114) bg_popup_window_pane_cp16_ParamLimits

0xd554,	// (0x00043114) bg_popup_window_pane_cp16

0xd654,	// (0x00043214) indicator_popup_pane_cp4_ParamLimits

0xd654,	// (0x00043214) indicator_popup_pane_cp4

0xd668,	// (0x00043228) popup_query_data_window_t1_ParamLimits

0xd668,	// (0x00043228) popup_query_data_window_t1

0xd67a,	// (0x0004323a) popup_query_data_window_t2_ParamLimits

0xd67a,	// (0x0004323a) popup_query_data_window_t2

0xd693,	// (0x00043253) popup_query_data_window_t3_ParamLimits

0xd693,	// (0x00043253) popup_query_data_window_t3

0x0002,

0x0021,	// (0x00035be1) popup_query_data_window_t_ParamLimits

0x0021,	// (0x00035be1) popup_query_data_window_t

0xd6ad,	// (0x0004326d) query_popup_data_pane_ParamLimits

0xd6ad,	// (0x0004326d) query_popup_data_pane

0xd6c1,	// (0x00043281) query_popup_data_pane_cp1_ParamLimits

0xd6c1,	// (0x00043281) query_popup_data_pane_cp1

0xd554,	// (0x00043114) bg_popup_window_pane_cp10_ParamLimits

0xd554,	// (0x00043114) bg_popup_window_pane_cp10

0xd586,	// (0x00043146) indicator_popup_pane_ParamLimits

0xd586,	// (0x00043146) indicator_popup_pane

0xd5a8,	// (0x00043168) popup_query_code_window_t1_ParamLimits

0xd5a8,	// (0x00043168) popup_query_code_window_t1

0xd5c2,	// (0x00043182) popup_query_code_window_t2_ParamLimits

0xd5c2,	// (0x00043182) popup_query_code_window_t2

0xd60b,	// (0x000431cb) popup_query_code_window_t3_ParamLimits

0xd60b,	// (0x000431cb) popup_query_code_window_t3

0x0002,

0x001a,	// (0x00035bda) popup_query_code_window_t_ParamLimits

0x001a,	// (0x00035bda) popup_query_code_window_t

0xd63a,	// (0x000431fa) query_popup_pane_ParamLimits

0xd63a,	// (0x000431fa) query_popup_pane

0xbd19,	// (0x000418d9) bg_popup_window_pane_cp15_ParamLimits

0xbd19,	// (0x000418d9) bg_popup_window_pane_cp15

0xbd37,	// (0x000418f7) indicator_popup_pane_cp1_ParamLimits

0xbd37,	// (0x000418f7) indicator_popup_pane_cp1

0xbd4a,	// (0x0004190a) indicator_popup_pane_cp2_ParamLimits

0xbd4a,	// (0x0004190a) indicator_popup_pane_cp2

0xbd5d,	// (0x0004191d) popup_query_data_code_window_g1_ParamLimits

0xbd5d,	// (0x0004191d) popup_query_data_code_window_g1

0xbd70,	// (0x00041930) popup_query_data_code_window_t1_ParamLimits

0xbd70,	// (0x00041930) popup_query_data_code_window_t1

0xbd82,	// (0x00041942) popup_query_data_code_window_t2_ParamLimits

0xbd82,	// (0x00041942) popup_query_data_code_window_t2

0xbd94,	// (0x00041954) popup_query_data_code_window_t3_ParamLimits

0xbd94,	// (0x00041954) popup_query_data_code_window_t3

0xbdaa,	// (0x0004196a) popup_query_data_code_window_t4_ParamLimits

0xbdaa,	// (0x0004196a) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00045166) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00045166) popup_query_data_code_window_t

0xcaa1,	// (0x00042661) list_single_midp_graphic_pane_g3

0xbdc2,	// (0x00041982) query_popup_data_pane_cp2_ParamLimits

0xbdd5,	// (0x00041995) query_popup_pane_cp2_ParamLimits

0xbdd5,	// (0x00041995) query_popup_pane_cp2

0xba0b,	// (0x000415cb) bg_popup_window_pane_cp11

0xd54c,	// (0x0004310c) heading_pane_cp5

0xbe63,	// (0x00041a23) listscroll_popup_info_pane

0xba0b,	// (0x000415cb) input_focus_pane_cp3

0xbde8,	// (0x000419a8) query_popup_pane_t1

0xbdf6,	// (0x000419b6) list_popup_info_pane_ParamLimits

0xbdf6,	// (0x000419b6) list_popup_info_pane

0xbe05,	// (0x000419c5) listscroll_popup_info_pane_g1

0xbe0d,	// (0x000419cd) scroll_pane_cp7

0xbe17,	// (0x000419d7) popup_info_list_pane_t1_ParamLimits

0xbe17,	// (0x000419d7) popup_info_list_pane_t1

0xbe31,	// (0x000419f1) popup_info_list_pane_t2_ParamLimits

0xbe31,	// (0x000419f1) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004516f) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004516f) popup_info_list_pane_t

0xba0b,	// (0x000415cb) bg_popup_window_pane_cp12

0xe472,	// (0x00044032) find_popup_pane

0xba67,	// (0x00041627) bg_popup_window_pane_cp3

0xbe4b,	// (0x00041a0b) heading_pane_cp3

0xbe57,	// (0x00041a17) listscroll_popup_graphic_pane

0xba0b,	// (0x000415cb) bg_popup_window_pane_cp4

0x92c6,	// (0x0003ee86) heading_pane_cp4

0xbe63,	// (0x00041a23) listscroll_popup_colour_pane

0xbe6b,	// (0x00041a2b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbe6b,	// (0x00041a2b) cell_large_graphic_colour_none_popup_pane

0x92ce,	// (0x0003ee8e) grid_large_graphic_colour_popup_pane_ParamLimits

0x92ce,	// (0x0003ee8e) grid_large_graphic_colour_popup_pane

0xbe7f,	// (0x00041a3f) listscroll_popup_colour_pane_g1_ParamLimits

0xbe7f,	// (0x00041a3f) listscroll_popup_colour_pane_g1

0xbe96,	// (0x00041a56) listscroll_popup_colour_pane_g2_ParamLimits

0xbe96,	// (0x00041a56) listscroll_popup_colour_pane_g2

0xbead,	// (0x00041a6d) listscroll_popup_colour_pane_g3_ParamLimits

0xbead,	// (0x00041a6d) listscroll_popup_colour_pane_g3

0x92f2,	// (0x0003eeb2) listscroll_popup_colour_pane_g4_ParamLimits

0x92f2,	// (0x0003eeb2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00045174) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00045174) listscroll_popup_colour_pane_g

0xbebd,	// (0x00041a7d) scroll_pane_cp6_ParamLimits

0xbebd,	// (0x00041a7d) scroll_pane_cp6

0x9301,	// (0x0003eec1) cell_large_graphic_colour_popup_pane_ParamLimits

0x9301,	// (0x0003eec1) cell_large_graphic_colour_popup_pane

0xbecf,	// (0x00041a8f) cell_large_graphic_colour_none_popup_pane_t1

0xba0b,	// (0x000415cb) grid_highlight_pane_cp5

0xbede,	// (0x00041a9e) cell_large_graphic_colour_popup_pane_g1

0xbf83,	// (0x00041b43) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004517d) cell_large_graphic_colour_popup_pane_g

0xbf8b,	// (0x00041b4b) cell_large_graphic_colour_popup_pane_g2_copy1

0xbf94,	// (0x00041b54) grid_highlight_pane_cp4

0xbf9c,	// (0x00041b5c) bg_popup_window_pane_cp8_ParamLimits

0xbf9c,	// (0x00041b5c) bg_popup_window_pane_cp8

0xbfb7,	// (0x00041b77) popup_snote_single_text_window_g1_ParamLimits

0xbfb7,	// (0x00041b77) popup_snote_single_text_window_g1

0xbfc9,	// (0x00041b89) popup_snote_single_text_window_t1_ParamLimits

0xbfc9,	// (0x00041b89) popup_snote_single_text_window_t1

0xbfdc,	// (0x00041b9c) popup_snote_single_text_window_t2_ParamLimits

0xbfdc,	// (0x00041b9c) popup_snote_single_text_window_t2

0xbfef,	// (0x00041baf) popup_snote_single_text_window_t3_ParamLimits

0xbfef,	// (0x00041baf) popup_snote_single_text_window_t3

0xc028,	// (0x00041be8) popup_snote_single_text_window_t4_ParamLimits

0xc028,	// (0x00041be8) popup_snote_single_text_window_t4

0xc05c,	// (0x00041c1c) popup_snote_single_text_window_t5_ParamLimits

0xc05c,	// (0x00041c1c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00045182) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00045182) popup_snote_single_text_window_t

0xc08b,	// (0x00041c4b) bg_popup_window_pane_cp9_ParamLimits

0xc08b,	// (0x00041c4b) bg_popup_window_pane_cp9

0xbfb7,	// (0x00041b77) popup_snote_single_graphic_window_g1_ParamLimits

0xbfb7,	// (0x00041b77) popup_snote_single_graphic_window_g1

0xc099,	// (0x00041c59) popup_snote_single_graphic_window_g2_ParamLimits

0xc099,	// (0x00041c59) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004518d) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004518d) popup_snote_single_graphic_window_g

0xc0a5,	// (0x00041c65) popup_snote_single_graphic_window_t1_ParamLimits

0xc0a5,	// (0x00041c65) popup_snote_single_graphic_window_t1

0xc0b8,	// (0x00041c78) popup_snote_single_graphic_window_t2_ParamLimits

0xc0b8,	// (0x00041c78) popup_snote_single_graphic_window_t2

0xc0cb,	// (0x00041c8b) popup_snote_single_graphic_window_t3_ParamLimits

0xc0cb,	// (0x00041c8b) popup_snote_single_graphic_window_t3

0xc104,	// (0x00041cc4) popup_snote_single_graphic_window_t4_ParamLimits

0xc104,	// (0x00041cc4) popup_snote_single_graphic_window_t4

0xc138,	// (0x00041cf8) popup_snote_single_graphic_window_t5_ParamLimits

0xc138,	// (0x00041cf8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00045192) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00045192) popup_snote_single_graphic_window_t

0xe3f6,	// (0x00043fb6) grid_graphic_popup_pane_ParamLimits

0xe3f6,	// (0x00043fb6) grid_graphic_popup_pane

0xe422,	// (0x00043fe2) listscroll_popup_graphic_pane_g1_ParamLimits

0xe422,	// (0x00043fe2) listscroll_popup_graphic_pane_g1

0xa5b2,	// (0x00040172) listscroll_popup_graphic_pane_g2_ParamLimits

0xa5b2,	// (0x00040172) listscroll_popup_graphic_pane_g2

0x0001,

0xf969,	// (0x00045529) listscroll_popup_graphic_pane_g_ParamLimits

0xf969,	// (0x00045529) listscroll_popup_graphic_pane_g

0xe166,	// (0x00043d26) scroll_pane_cp5

0xa575,	// (0x00040135) cell_graphic_popup_pane_ParamLimits

0xa575,	// (0x00040135) cell_graphic_popup_pane

0xe3c1,	// (0x00043f81) cell_graphic_popup_pane_g1

0xe3c9,	// (0x00043f89) cell_graphic_popup_pane_g2

0xbf8b,	// (0x00041b4b) cell_graphic_popup_pane_g3

0x0002,

0xf962,	// (0x00045522) cell_graphic_popup_pane_g

0xe3d2,	// (0x00043f92) cell_graphic_popup_pane_t2

0xbf94,	// (0x00041b54) grid_highlight_pane_cp3

0xc179,	// (0x00041d39) list_gen_pane_ParamLimits

0xc179,	// (0x00041d39) list_gen_pane

0xc1a1,	// (0x00041d61) scroll_pane

0xa530,	// (0x000400f0) bg_list_pane_g1_ParamLimits

0xa530,	// (0x000400f0) bg_list_pane_g1

0xe370,	// (0x00043f30) bg_list_pane_g2_ParamLimits

0xe370,	// (0x00043f30) bg_list_pane_g2

0xe383,	// (0x00043f43) bg_list_pane_g3_ParamLimits

0xe383,	// (0x00043f43) bg_list_pane_g3

0xe395,	// (0x00043f55) bg_list_pane_g4_ParamLimits

0xe395,	// (0x00043f55) bg_list_pane_g4

0xa54b,	// (0x0004010b) bg_list_pane_g5_ParamLimits

0xa54b,	// (0x0004010b) bg_list_pane_g5

0x0004,

0xf957,	// (0x00045517) bg_list_pane_g_ParamLimits

0xf957,	// (0x00045517) bg_list_pane_g

0xa4f6,	// (0x000400b6) list_double2_graphic_large_graphic_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double2_graphic_large_graphic_pane

0xa4f6,	// (0x000400b6) list_double2_graphic_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double2_graphic_pane

0xa4f6,	// (0x000400b6) list_double2_large_graphic_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double2_large_graphic_pane

0xa4f6,	// (0x000400b6) list_double2_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double2_pane

0xa4f6,	// (0x000400b6) list_double_graphic_heading_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_graphic_heading_pane

0xa4f6,	// (0x000400b6) list_double_graphic_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_graphic_pane

0xa4f6,	// (0x000400b6) list_double_heading_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_heading_pane

0xa4f6,	// (0x000400b6) list_double_large_graphic_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_large_graphic_pane

0xa4f6,	// (0x000400b6) list_double_number_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_number_pane

0xa4f6,	// (0x000400b6) list_double_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_pane

0xa4f6,	// (0x000400b6) list_double_time_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_double_time_pane

0xa4f6,	// (0x000400b6) list_setting_number_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_setting_number_pane

0xa4f6,	// (0x000400b6) list_setting_pane_ParamLimits

0xa4f6,	// (0x000400b6) list_setting_pane

0xa509,	// (0x000400c9) list_single_2graphic_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_2graphic_pane

0xa509,	// (0x000400c9) list_single_graphic_heading_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_graphic_heading_pane

0xa509,	// (0x000400c9) list_single_graphic_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_graphic_pane

0xa509,	// (0x000400c9) list_single_heading_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_heading_pane

0xa509,	// (0x000400c9) list_single_large_graphic_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_large_graphic_pane

0xa509,	// (0x000400c9) list_single_number_heading_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_number_heading_pane

0xa509,	// (0x000400c9) list_single_number_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_number_pane

0xa509,	// (0x000400c9) list_single_pane_ParamLimits

0xa509,	// (0x000400c9) list_single_pane

0xba0b,	// (0x000415cb) list_highlight_pane_cp1

0x1ac2,	// (0x00037682) list_single_pane_g1_ParamLimits

0x1ac2,	// (0x00037682) list_single_pane_g1

0x1ace,	// (0x0003768e) list_single_pane_g2_ParamLimits

0x1ace,	// (0x0003768e) list_single_pane_g2

0x0001,

0xf5ee,	// (0x000451ae) list_single_pane_g_ParamLimits

0xf5ee,	// (0x000451ae) list_single_pane_g

0x0ed6,	// (0x00036a96) list_single_pane_t1_ParamLimits

0x0ed6,	// (0x00036a96) list_single_pane_t1

0x1ac2,	// (0x00037682) list_single_number_pane_g1_ParamLimits

0x1ac2,	// (0x00037682) list_single_number_pane_g1

0x1ace,	// (0x0003768e) list_single_number_pane_g2_ParamLimits

0x1ace,	// (0x0003768e) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x000451ae) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x000451ae) list_single_number_pane_g

0x0d55,	// (0x00036915) list_single_number_pane_t1_ParamLimits

0x0d55,	// (0x00036915) list_single_number_pane_t1

0x8413,	// (0x0003dfd3) list_single_number_pane_t2_ParamLimits

0x8413,	// (0x0003dfd3) list_single_number_pane_t2

0x0001,

0xf918,	// (0x000454d8) list_single_number_pane_t_ParamLimits

0xf918,	// (0x000454d8) list_single_number_pane_t

0x7e85,	// (0x0003da45) list_single_graphic_pane_g1_ParamLimits

0x7e85,	// (0x0003da45) list_single_graphic_pane_g1

0x1ac2,	// (0x00037682) list_single_graphic_pane_g2_ParamLimits

0x1ac2,	// (0x00037682) list_single_graphic_pane_g2

0x1ace,	// (0x0003768e) list_single_graphic_pane_g3_ParamLimits

0x1ace,	// (0x0003768e) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004519d) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004519d) list_single_graphic_pane_g

0x7e91,	// (0x0003da51) list_single_graphic_pane_t1_ParamLimits

0x7e91,	// (0x0003da51) list_single_graphic_pane_t1

0x7ea7,	// (0x0003da67) list_single_heading_pane_g1_ParamLimits

0x7ea7,	// (0x0003da67) list_single_heading_pane_g1

0x1ace,	// (0x0003768e) list_single_heading_pane_g2_ParamLimits

0x1ace,	// (0x0003768e) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000451a4) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000451a4) list_single_heading_pane_g

0x7eba,	// (0x0003da7a) list_single_heading_pane_t1_ParamLimits

0x7eba,	// (0x0003da7a) list_single_heading_pane_t1

0x7ed0,	// (0x0003da90) list_single_heading_pane_t2_ParamLimits

0x7ed0,	// (0x0003da90) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000451a9) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000451a9) list_single_heading_pane_t

0x1ac2,	// (0x00037682) list_single_number_heading_pane_g1_ParamLimits

0x1ac2,	// (0x00037682) list_single_number_heading_pane_g1

0x1ace,	// (0x0003768e) list_single_number_heading_pane_g2_ParamLimits

0x1ace,	// (0x0003768e) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x000451ae) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x000451ae) list_single_number_heading_pane_g

0x0eec,	// (0x00036aac) list_single_number_heading_pane_t1_ParamLimits

0x0eec,	// (0x00036aac) list_single_number_heading_pane_t1

0x7ee2,	// (0x0003daa2) list_single_number_heading_pane_t2_ParamLimits

0x7ee2,	// (0x0003daa2) list_single_number_heading_pane_t2

0x0eb0,	// (0x00036a70) list_single_number_heading_pane_t3_ParamLimits

0x0eb0,	// (0x00036a70) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x000451b3) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x000451b3) list_single_number_heading_pane_t

0x7ef4,	// (0x0003dab4) list_single_graphic_heading_pane_g1_ParamLimits

0x7ef4,	// (0x0003dab4) list_single_graphic_heading_pane_g1

0x8727,	// (0x0003e2e7) list_single_graphic_heading_pane_g4_ParamLimits

0x8727,	// (0x0003e2e7) list_single_graphic_heading_pane_g4

0x1ace,	// (0x0003768e) list_single_graphic_heading_pane_g5_ParamLimits

0x1ace,	// (0x0003768e) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x000451ba) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x000451ba) list_single_graphic_heading_pane_g

0x0eec,	// (0x00036aac) list_single_graphic_heading_pane_t1_ParamLimits

0x0eec,	// (0x00036aac) list_single_graphic_heading_pane_t1

0x7f08,	// (0x0003dac8) list_single_graphic_heading_pane_t2_ParamLimits

0x7f08,	// (0x0003dac8) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x000451c1) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x000451c1) list_single_graphic_heading_pane_t

0x299d,	// (0x0003855d) list_single_large_graphic_pane_g1_ParamLimits

0x299d,	// (0x0003855d) list_single_large_graphic_pane_g1

0x1ac2,	// (0x00037682) list_single_large_graphic_pane_g2_ParamLimits

0x1ac2,	// (0x00037682) list_single_large_graphic_pane_g2

0x1ace,	// (0x0003768e) list_single_large_graphic_pane_g3_ParamLimits

0x1ace,	// (0x0003768e) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x000451c6) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x000451c6) list_single_large_graphic_pane_g

0xd6ef,	// (0x000432af) wait_border_pane_g2_copy1

0x8738,	// (0x0003e2f8) list_single_large_graphic_pane_g4_cp2

0x0eec,	// (0x00036aac) list_single_large_graphic_pane_t1_ParamLimits

0x0eec,	// (0x00036aac) list_single_large_graphic_pane_t1

0x1b15,	// (0x000376d5) list_double_pane_g1_ParamLimits

0x1b15,	// (0x000376d5) list_double_pane_g1

0x1b21,	// (0x000376e1) list_double_pane_g2_ParamLimits

0x1b21,	// (0x000376e1) list_double_pane_g2

0x0001,

0xf60d,	// (0x000451cd) list_double_pane_g_ParamLimits

0xf60d,	// (0x000451cd) list_double_pane_g

0x7f20,	// (0x0003dae0) list_double_pane_t1_ParamLimits

0x7f20,	// (0x0003dae0) list_double_pane_t1

0x7f36,	// (0x0003daf6) list_double_pane_t2_ParamLimits

0x7f36,	// (0x0003daf6) list_double_pane_t2

0x0001,

0xf612,	// (0x000451d2) list_double_pane_t_ParamLimits

0xf612,	// (0x000451d2) list_double_pane_t

0x7f48,	// (0x0003db08) list_double2_pane_g1_ParamLimits

0x7f48,	// (0x0003db08) list_double2_pane_g1

0x08f5,	// (0x000364b5) list_double2_pane_g2_ParamLimits

0x08f5,	// (0x000364b5) list_double2_pane_g2

0x0001,

0xf617,	// (0x000451d7) list_double2_pane_g_ParamLimits

0xf617,	// (0x000451d7) list_double2_pane_g

0x7f59,	// (0x0003db19) list_double2_pane_t1_ParamLimits

0x7f59,	// (0x0003db19) list_double2_pane_t1

0x7f6f,	// (0x0003db2f) list_double2_pane_t2_ParamLimits

0x7f6f,	// (0x0003db2f) list_double2_pane_t2

0x0001,

0xf61c,	// (0x000451dc) list_double2_pane_t_ParamLimits

0xf61c,	// (0x000451dc) list_double2_pane_t

0x1b15,	// (0x000376d5) list_double_number_pane_g1_ParamLimits

0x1b15,	// (0x000376d5) list_double_number_pane_g1

0x1b21,	// (0x000376e1) list_double_number_pane_g2_ParamLimits

0x1b21,	// (0x000376e1) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x000451cd) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x000451cd) list_double_number_pane_g

0x7f81,	// (0x0003db41) list_double_number_pane_t1_ParamLimits

0x7f81,	// (0x0003db41) list_double_number_pane_t1

0x0768,	// (0x00036328) list_double_number_pane_t2_ParamLimits

0x0768,	// (0x00036328) list_double_number_pane_t2

0x7f93,	// (0x0003db53) list_double_number_pane_t3_ParamLimits

0x7f93,	// (0x0003db53) list_double_number_pane_t3

0x0002,

0xf621,	// (0x000451e1) list_double_number_pane_t_ParamLimits

0xf621,	// (0x000451e1) list_double_number_pane_t

0x075c,	// (0x0003631c) list_double_graphic_pane_g1_ParamLimits

0x075c,	// (0x0003631c) list_double_graphic_pane_g1

0x8740,	// (0x0003e300) list_double_graphic_pane_g2_ParamLimits

0x8740,	// (0x0003e300) list_double_graphic_pane_g2

0x874f,	// (0x0003e30f) list_double_graphic_pane_g3_ParamLimits

0x874f,	// (0x0003e30f) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x000451e8) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x000451e8) list_double_graphic_pane_g

0x7fa5,	// (0x0003db65) list_double_graphic_pane_t1_ParamLimits

0x7fa5,	// (0x0003db65) list_double_graphic_pane_t1

0x7fbb,	// (0x0003db7b) list_double_graphic_pane_t2_ParamLimits

0x7fbb,	// (0x0003db7b) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x000451f1) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x000451f1) list_double_graphic_pane_t

0x7fcd,	// (0x0003db8d) list_double2_graphic_pane_g1_ParamLimits

0x7fcd,	// (0x0003db8d) list_double2_graphic_pane_g1

0xc248,	// (0x00041e08) list_double2_graphic_pane_g2_ParamLimits

0xc248,	// (0x00041e08) list_double2_graphic_pane_g2

0x8767,	// (0x0003e327) list_double2_graphic_pane_g3_ParamLimits

0x8767,	// (0x0003e327) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x000451f6) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x000451f6) list_double2_graphic_pane_g

0x7fd9,	// (0x0003db99) list_double2_graphic_pane_t1_ParamLimits

0x7fd9,	// (0x0003db99) list_double2_graphic_pane_t1

0x7fef,	// (0x0003dbaf) list_double2_graphic_pane_t2_ParamLimits

0x7fef,	// (0x0003dbaf) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x000451fd) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x000451fd) list_double2_graphic_pane_t

0x8001,	// (0x0003dbc1) list_double_large_graphic_pane_g1_ParamLimits

0x8001,	// (0x0003dbc1) list_double_large_graphic_pane_g1

0x8020,	// (0x0003dbe0) list_double_large_graphic_pane_g2_ParamLimits

0x8020,	// (0x0003dbe0) list_double_large_graphic_pane_g2

0x1b21,	// (0x000376e1) list_double_large_graphic_pane_g3_ParamLimits

0x1b21,	// (0x000376e1) list_double_large_graphic_pane_g3

0x8036,	// (0x0003dbf6) list_double_large_graphic_pane_g4_ParamLimits

0x8036,	// (0x0003dbf6) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00045202) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00045202) list_double_large_graphic_pane_g

0x8049,	// (0x0003dc09) list_double_large_graphic_pane_t1_ParamLimits

0x8049,	// (0x0003dc09) list_double_large_graphic_pane_t1

0x8062,	// (0x0003dc22) list_double_large_graphic_pane_t2_ParamLimits

0x8062,	// (0x0003dc22) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0004520d) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0004520d) list_double_large_graphic_pane_t

0x8773,	// (0x0003e333) list_double2_large_graphic_pane_g1_ParamLimits

0x8773,	// (0x0003e333) list_double2_large_graphic_pane_g1

0x877f,	// (0x0003e33f) list_double2_large_graphic_pane_g2_ParamLimits

0x877f,	// (0x0003e33f) list_double2_large_graphic_pane_g2

0x8767,	// (0x0003e327) list_double2_large_graphic_pane_g3_ParamLimits

0x8767,	// (0x0003e327) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00045212) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00045212) list_double2_large_graphic_pane_g

0x8074,	// (0x0003dc34) list_double2_large_graphic_pane_t1_ParamLimits

0x8074,	// (0x0003dc34) list_double2_large_graphic_pane_t1

0x808a,	// (0x0003dc4a) list_double2_large_graphic_pane_t2_ParamLimits

0x808a,	// (0x0003dc4a) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00045219) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00045219) list_double2_large_graphic_pane_t

0x809c,	// (0x0003dc5c) list_double_heading_pane_g1_ParamLimits

0x809c,	// (0x0003dc5c) list_double_heading_pane_g1

0x80ad,	// (0x0003dc6d) list_double_heading_pane_g2_ParamLimits

0x80ad,	// (0x0003dc6d) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0004521e) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0004521e) list_double_heading_pane_g

0x80b9,	// (0x0003dc79) list_double_heading_pane_t1_ParamLimits

0x80b9,	// (0x0003dc79) list_double_heading_pane_t1

0x7f6f,	// (0x0003db2f) list_double_heading_pane_t2_ParamLimits

0x7f6f,	// (0x0003db2f) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00045223) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00045223) list_double_heading_pane_t

0x071c,	// (0x000362dc) list_double_graphic_heading_pane_g1_ParamLimits

0x071c,	// (0x000362dc) list_double_graphic_heading_pane_g1

0x809c,	// (0x0003dc5c) list_double_graphic_heading_pane_g2_ParamLimits

0x809c,	// (0x0003dc5c) list_double_graphic_heading_pane_g2

0x80ad,	// (0x0003dc6d) list_double_graphic_heading_pane_g3_ParamLimits

0x80ad,	// (0x0003dc6d) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00045228) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00045228) list_double_graphic_heading_pane_g

0x80cf,	// (0x0003dc8f) list_double_graphic_heading_pane_t1_ParamLimits

0x80cf,	// (0x0003dc8f) list_double_graphic_heading_pane_t1

0x7fef,	// (0x0003dbaf) list_double_graphic_heading_pane_t2_ParamLimits

0x7fef,	// (0x0003dbaf) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004522f) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004522f) list_double_graphic_heading_pane_t

0x80e5,	// (0x0003dca5) list_double_time_pane_g1_ParamLimits

0x80e5,	// (0x0003dca5) list_double_time_pane_g1

0x06ae,	// (0x0003626e) list_double_time_pane_g2_ParamLimits

0x06ae,	// (0x0003626e) list_double_time_pane_g2

0x0001,

0xf674,	// (0x00045234) list_double_time_pane_g_ParamLimits

0xf674,	// (0x00045234) list_double_time_pane_g

0x80f6,	// (0x0003dcb6) list_double_time_pane_t1_ParamLimits

0x80f6,	// (0x0003dcb6) list_double_time_pane_t1

0x810c,	// (0x0003dccc) list_double_time_pane_t2_ParamLimits

0x810c,	// (0x0003dccc) list_double_time_pane_t2

0x811e,	// (0x0003dcde) list_double_time_pane_t3_ParamLimits

0x811e,	// (0x0003dcde) list_double_time_pane_t3

0x8130,	// (0x0003dcf0) list_double_time_pane_t4_ParamLimits

0x8130,	// (0x0003dcf0) list_double_time_pane_t4

0x0003,

0xf679,	// (0x00045239) list_double_time_pane_t_ParamLimits

0xf679,	// (0x00045239) list_double_time_pane_t

0x08e9,	// (0x000364a9) list_setting_pane_g1_ParamLimits

0x08e9,	// (0x000364a9) list_setting_pane_g1

0x08f5,	// (0x000364b5) list_setting_pane_g2_ParamLimits

0x08f5,	// (0x000364b5) list_setting_pane_g2

0x0001,

0xf682,	// (0x00045242) list_setting_pane_g_ParamLimits

0xf682,	// (0x00045242) list_setting_pane_g

0x8142,	// (0x0003dd02) list_setting_pane_t1_ParamLimits

0x8142,	// (0x0003dd02) list_setting_pane_t1

0x815c,	// (0x0003dd1c) list_setting_pane_t2_ParamLimits

0x815c,	// (0x0003dd1c) list_setting_pane_t2

0x0002,

0xf687,	// (0x00045247) list_setting_pane_t_ParamLimits

0xf687,	// (0x00045247) list_setting_pane_t

0x8199,	// (0x0003dd59) set_value_pane_cp_ParamLimits

0x8199,	// (0x0003dd59) set_value_pane_cp

0x0964,	// (0x00036524) list_setting_number_pane_g1_ParamLimits

0x0964,	// (0x00036524) list_setting_number_pane_g1

0x0970,	// (0x00036530) list_setting_number_pane_g2_ParamLimits

0x0970,	// (0x00036530) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0004524e) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0004524e) list_setting_number_pane_g

0x81a5,	// (0x0003dd65) list_setting_number_pane_t1_ParamLimits

0x81a5,	// (0x0003dd65) list_setting_number_pane_t1

0x81be,	// (0x0003dd7e) list_setting_number_pane_t2_ParamLimits

0x81be,	// (0x0003dd7e) list_setting_number_pane_t2

0x81d8,	// (0x0003dd98) list_setting_number_pane_t3_ParamLimits

0x81d8,	// (0x0003dd98) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x00045253) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x00045253) list_setting_number_pane_t

0x8199,	// (0x0003dd59) set_value_pane_ParamLimits

0x8199,	// (0x0003dd59) set_value_pane

0xc1d5,	// (0x00041d95) bg_set_opt_pane_ParamLimits

0xc1d5,	// (0x00041d95) bg_set_opt_pane

0x09f2,	// (0x000365b2) set_value_pane_t1

0xc1f6,	// (0x00041db6) slider_set_pane_cp3

0xc1ff,	// (0x00041dbf) volume_small_pane_cp

0xc208,	// (0x00041dc8) list_form_gen_pane

0xc211,	// (0x00041dd1) scroll_pane_cp8

0x821b,	// (0x0003dddb) form_field_data_pane_ParamLimits

0x821b,	// (0x0003dddb) form_field_data_pane

0x8232,	// (0x0003ddf2) form_field_data_wide_pane_ParamLimits

0x8232,	// (0x0003ddf2) form_field_data_wide_pane

0x8252,	// (0x0003de12) form_field_popup_pane_ParamLimits

0x8252,	// (0x0003de12) form_field_popup_pane

0x826a,	// (0x0003de2a) form_field_popup_wide_pane_ParamLimits

0x826a,	// (0x0003de2a) form_field_popup_wide_pane

0x0a84,	// (0x00036644) form_field_slider_pane_ParamLimits

0x0a84,	// (0x00036644) form_field_slider_pane

0x0a97,	// (0x00036657) form_field_slider_wide_pane_ParamLimits

0x0a97,	// (0x00036657) form_field_slider_wide_pane

0xc222,	// (0x00041de2) data_form_pane

0x8291,	// (0x0003de51) form_field_data_pane_t1

0xc22e,	// (0x00041dee) input_focus_pane

0xc23c,	// (0x00041dfc) data_form_wide_pane

0x0ada,	// (0x0003669a) form_field_data_wide_pane_t1

0xbfa9,	// (0x00041b69) input_focus_pane_cp6

0x82ab,	// (0x0003de6b) form_field_popup_pane_t1

0xc22e,	// (0x00041dee) input_focus_pane_cp7

0xc268,	// (0x00041e28) list_form_pane

0x0b1e,	// (0x000366de) form_field_popup_wide_pane_t1

0xc22e,	// (0x00041dee) input_focus_pane_cp8

0xc274,	// (0x00041e34) list_form_wide_pane

0x82cd,	// (0x0003de8d) form_field_slider_pane_t1_ParamLimits

0x82cd,	// (0x0003de8d) form_field_slider_pane_t1

0x82e5,	// (0x0003dea5) form_field_slider_pane_t2_ParamLimits

0x82e5,	// (0x0003dea5) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x00045263) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x00045263) form_field_slider_pane_t

0xba59,	// (0x00041619) input_focus_pane_cp9_ParamLimits

0xba59,	// (0x00041619) input_focus_pane_cp9

0x82fa,	// (0x0003deba) slider_cont_pane_ParamLimits

0x82fa,	// (0x0003deba) slider_cont_pane

0xc283,	// (0x00041e43) form_field_slider_wide_pane_t1_ParamLimits

0xc283,	// (0x00041e43) form_field_slider_wide_pane_t1

0x0b7c,	// (0x0003673c) form_field_slider_wide_pane_t2_ParamLimits

0x0b7c,	// (0x0003673c) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x00045268) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x00045268) form_field_slider_wide_pane_t

0xba59,	// (0x00041619) input_focus_pane_cp10_ParamLimits

0xba59,	// (0x00041619) input_focus_pane_cp10

0x830e,	// (0x0003dece) slider_cont_pane_cp1_ParamLimits

0x830e,	// (0x0003dece) slider_cont_pane_cp1

0x8322,	// (0x0003dee2) slider_form_pane_cp

0xc295,	// (0x00041e55) input_focus_pane_g1

0xc29d,	// (0x00041e5d) input_focus_pane_g2

0xc2a5,	// (0x00041e65) input_focus_pane_g3

0xc2ad,	// (0x00041e6d) input_focus_pane_g4

0xc2b5,	// (0x00041e75) input_focus_pane_g5

0xc2bd,	// (0x00041e7d) input_focus_pane_g6

0xc2c5,	// (0x00041e85) input_focus_pane_g7

0xc2cd,	// (0x00041e8d) input_focus_pane_g8

0xc2d5,	// (0x00041e95) input_focus_pane_g9

0xba01,	// (0x000415c1) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0004526d) input_focus_pane_g

0xd6f8,	// (0x000432b8) wait_border_pane_g3_copy1

0x832a,	// (0x0003deea) data_form_pane_t1

0xba01,	// (0x000415c1) wait_anim_pane_g1_copy1

0x8425,	// (0x0003dfe5) data_form_wide_pane_t1

0x8344,	// (0x0003df04) list_form_graphic_pane_cp_ParamLimits

0x8344,	// (0x0003df04) list_form_graphic_pane_cp

0xe319,	// (0x00043ed9) slider_form_pane_g1

0xe322,	// (0x00043ee2) slider_form_pane_g2

0x0006,

0xf948,	// (0x00045508) slider_form_pane_g

0x8344,	// (0x0003df04) list_form_graphic_pane_ParamLimits

0x8344,	// (0x0003df04) list_form_graphic_pane

0x0bf6,	// (0x000367b6) list_form_graphic_pane_g1

0x0bfe,	// (0x000367be) list_form_graphic_pane_t1_ParamLimits

0x0bfe,	// (0x000367be) list_form_graphic_pane_t1

0xba67,	// (0x00041627) list_highlight_pane_cp5_ParamLimits

0xba67,	// (0x00041627) list_highlight_pane_cp5

0x8357,	// (0x0003df17) find_pane_g1

0xc2dd,	// (0x00041e9d) input_find_pane

0x8360,	// (0x0003df20) input_find_pane_g1_ParamLimits

0x8360,	// (0x0003df20) input_find_pane_g1

0x836c,	// (0x0003df2c) input_find_pane_t1_ParamLimits

0x836c,	// (0x0003df2c) input_find_pane_t1

0x8381,	// (0x0003df41) input_find_pane_t2_ParamLimits

0x8381,	// (0x0003df41) input_find_pane_t2

0x0001,

0xf6c2,	// (0x00045282) input_find_pane_t_ParamLimits

0xf6c2,	// (0x00045282) input_find_pane_t

0xc2e6,	// (0x00041ea6) input_focus_pane_cp5_ParamLimits

0xc2e6,	// (0x00041ea6) input_focus_pane_cp5

0x9336,	// (0x0003eef6) bg_popup_window_pane_cp2_ParamLimits

0x9336,	// (0x0003eef6) bg_popup_window_pane_cp2

0x9343,	// (0x0003ef03) listscroll_menu_pane_ParamLimits

0x9343,	// (0x0003ef03) listscroll_menu_pane

0x934f,	// (0x0003ef0f) popup_submenu_window_ParamLimits

0x934f,	// (0x0003ef0f) popup_submenu_window

0xc2f4,	// (0x00041eb4) find_popup_pane_g1

0xc2fc,	// (0x00041ebc) input_popup_find_pane_cp

0xc2e6,	// (0x00041ea6) input_focus_pane_cp4_ParamLimits

0xc2e6,	// (0x00041ea6) input_focus_pane_cp4

0xc306,	// (0x00041ec6) input_popup_find_pane_t1_ParamLimits

0xc306,	// (0x00041ec6) input_popup_find_pane_t1

0xba0b,	// (0x000415cb) bg_popup_sub_pane_cp

0xc334,	// (0x00041ef4) listscroll_popup_sub_pane

0xc33c,	// (0x00041efc) list_submenu_pane_ParamLimits

0xc33c,	// (0x00041efc) list_submenu_pane

0xc34d,	// (0x00041f0d) scroll_pane_cp4

0xc355,	// (0x00041f15) list_single_popup_submenu_pane_ParamLimits

0xc355,	// (0x00041f15) list_single_popup_submenu_pane

0xc368,	// (0x00041f28) list_single_popup_submenu_pane_g1

0xc370,	// (0x00041f30) list_single_popup_submenu_pane_t1_ParamLimits

0xc370,	// (0x00041f30) list_single_popup_submenu_pane_t1

0xba59,	// (0x00041619) bg_active_tab_pane_cp1_ParamLimits

0xba59,	// (0x00041619) bg_active_tab_pane_cp1

0x9381,	// (0x0003ef41) tabs_2_active_pane_g1

0x9389,	// (0x0003ef49) tabs_2_active_pane_t1

0xba59,	// (0x00041619) bg_passive_tab_pane_cp1_ParamLimits

0xba59,	// (0x00041619) bg_passive_tab_pane_cp1

0x9381,	// (0x0003ef41) tabs_2_passive_pane_g1

0x9389,	// (0x0003ef49) tabs_2_passive_pane_t1

0xba67,	// (0x00041627) bg_active_tab_pane_cp4

0x939b,	// (0x0003ef5b) tabs_2_long_active_pane_t1

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp4

0x24c2,	// (0x00038082) list_single_midp_graphic_pane_g4_ParamLimits

0xba67,	// (0x00041627) bg_active_tab_pane_cp5

0x93ae,	// (0x0003ef6e) tabs_3_long_active_pane_t1

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp5

0x24c2,	// (0x00038082) list_single_midp_graphic_pane_g4

0xba67,	// (0x00041627) bg_popup_window_pane_cp13_ParamLimits

0xba67,	// (0x00041627) bg_popup_window_pane_cp13

0xc39a,	// (0x00041f5a) listscroll_popup_fast_pane_ParamLimits

0xc39a,	// (0x00041f5a) listscroll_popup_fast_pane

0xc3a9,	// (0x00041f69) grid_popup_fast_pane_ParamLimits

0xc3a9,	// (0x00041f69) grid_popup_fast_pane

0xc3bb,	// (0x00041f7b) scroll_pane_cp9_ParamLimits

0xc3bb,	// (0x00041f7b) scroll_pane_cp9

0x48da,	// (0x0003a49a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x48da,	// (0x0003a49a) list_single_graphic_hl_pane_t1_cp2

0xc3df,	// (0x00041f9f) input_focus_pane_cp20_ParamLimits

0xc3df,	// (0x00041f9f) input_focus_pane_cp20

0xc3ed,	// (0x00041fad) query_popup_data_pane_t1_ParamLimits

0xc3ed,	// (0x00041fad) query_popup_data_pane_t1

0xc400,	// (0x00041fc0) query_popup_data_pane_t2_ParamLimits

0xc400,	// (0x00041fc0) query_popup_data_pane_t2

0xc446,	// (0x00042006) query_popup_data_pane_t3_ParamLimits

0xc446,	// (0x00042006) query_popup_data_pane_t3

0xc487,	// (0x00042047) query_popup_data_pane_t4_ParamLimits

0xc487,	// (0x00042047) query_popup_data_pane_t4

0xc4c3,	// (0x00042083) query_popup_data_pane_t5_ParamLimits

0xc4c3,	// (0x00042083) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x00045287) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x00045287) query_popup_data_pane_t

0xc295,	// (0x00041e55) bg_set_opt_pane_g1

0xc29d,	// (0x00041e5d) bg_set_opt_pane_g2

0xc2a5,	// (0x00041e65) bg_set_opt_pane_g3

0xc2ad,	// (0x00041e6d) bg_set_opt_pane_g4

0xc2b5,	// (0x00041e75) bg_set_opt_pane_g5

0xc2bd,	// (0x00041e7d) bg_set_opt_pane_g6

0xc2c5,	// (0x00041e85) bg_set_opt_pane_g7

0xc2cd,	// (0x00041e8d) bg_set_opt_pane_g8

0xc2d5,	// (0x00041e95) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x00045292) bg_set_opt_pane_g

0x1ffe,	// (0x00037bbe) control_top_pane_stacon_ParamLimits

0x1ffe,	// (0x00037bbe) control_top_pane_stacon

0x2051,	// (0x00037c11) signal_pane_stacon_ParamLimits

0x2051,	// (0x00037c11) signal_pane_stacon

0xc927,	// (0x000424e7) stacon_top_pane_g1_ParamLimits

0xc927,	// (0x000424e7) stacon_top_pane_g1

0x2076,	// (0x00037c36) title_pane_stacon_ParamLimits

0x2076,	// (0x00037c36) title_pane_stacon

0x20a0,	// (0x00037c60) uni_indicator_pane_stacon_ParamLimits

0x20a0,	// (0x00037c60) uni_indicator_pane_stacon

0x20b5,	// (0x00037c75) battery_pane_stacon_ParamLimits

0x20b5,	// (0x00037c75) battery_pane_stacon

0x20f9,	// (0x00037cb9) control_bottom_pane_stacon_ParamLimits

0x20f9,	// (0x00037cb9) control_bottom_pane_stacon

0x211c,	// (0x00037cdc) navi_pane_stacon_ParamLimits

0x211c,	// (0x00037cdc) navi_pane_stacon

0xc949,	// (0x00042509) stacon_bottom_pane_g1_ParamLimits

0xc949,	// (0x00042509) stacon_bottom_pane_g1

0x1c0d,	// (0x000377cd) aid_levels_signal_lsc_ParamLimits

0x1c0d,	// (0x000377cd) aid_levels_signal_lsc

0x1c24,	// (0x000377e4) signal_pane_stacon_g1_ParamLimits

0x1c24,	// (0x000377e4) signal_pane_stacon_g1

0x1c38,	// (0x000377f8) signal_pane_stacon_g2_ParamLimits

0x1c38,	// (0x000377f8) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x000452a5) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x000452a5) signal_pane_stacon_g

0x1c6d,	// (0x0003782d) title_pane_stacon_t1_ParamLimits

0x1c6d,	// (0x0003782d) title_pane_stacon_t1

0xc511,	// (0x000420d1) uni_indicator_pane_stacon_g1

0xc51b,	// (0x000420db) uni_indicator_pane_stacon_g2

0xc507,	// (0x000420c7) uni_indicator_pane_stacon_g3

0xc525,	// (0x000420e5) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x000452b1) uni_indicator_pane_stacon_g

0x1c92,	// (0x00037852) control_top_pane_stacon_g1

0x1c9a,	// (0x0003785a) control_top_pane_stacon_t1_ParamLimits

0x1c9a,	// (0x0003785a) control_top_pane_stacon_t1

0x1cd1,	// (0x00037891) aid_levels_battery_lsc_ParamLimits

0x1cd1,	// (0x00037891) aid_levels_battery_lsc

0x1ce9,	// (0x000378a9) battery_pane_stacon_g1_ParamLimits

0x1ce9,	// (0x000378a9) battery_pane_stacon_g1

0x1cfc,	// (0x000378bc) battery_pane_stacon_g2_ParamLimits

0x1cfc,	// (0x000378bc) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x000452ba) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x000452ba) battery_pane_stacon_g

0x1d3a,	// (0x000378fa) navi_icon_pane_stacon

0x1d4e,	// (0x0003790e) navi_navi_pane_stacon

0x1d3a,	// (0x000378fa) navi_text_pane_stacon

0x1c92,	// (0x00037852) control_bottom_pane_stacon_g1

0x1d62,	// (0x00037922) control_bottom_pane_stacon_t1_ParamLimits

0x1d62,	// (0x00037922) control_bottom_pane_stacon_t1

0x93c0,	// (0x0003ef80) grid_app_pane_ParamLimits

0x93c0,	// (0x0003ef80) grid_app_pane

0x93f6,	// (0x0003efb6) scroll_pane_cp15_ParamLimits

0x93f6,	// (0x0003efb6) scroll_pane_cp15

0x940f,	// (0x0003efcf) cell_app_pane_ParamLimits

0x940f,	// (0x0003efcf) cell_app_pane

0x947e,	// (0x0003f03e) cell_app_pane_g1_ParamLimits

0x947e,	// (0x0003f03e) cell_app_pane_g1

0xc549,	// (0x00042109) cell_app_pane_g2_ParamLimits

0xc549,	// (0x00042109) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x000452bf) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x000452bf) cell_app_pane_g

0xc555,	// (0x00042115) cell_app_pane_t1_ParamLimits

0xc555,	// (0x00042115) cell_app_pane_t1

0xc56c,	// (0x0004212c) grid_highlight_pane_ParamLimits

0xc56c,	// (0x0004212c) grid_highlight_pane

0xc295,	// (0x00041e55) cell_highlight_pane_g1

0xc29d,	// (0x00041e5d) cell_highlight_pane_g2

0xc2a5,	// (0x00041e65) cell_highlight_pane_g3

0xc2ad,	// (0x00041e6d) cell_highlight_pane_g4

0xc2b5,	// (0x00041e75) cell_highlight_pane_g5

0xc2bd,	// (0x00041e7d) cell_highlight_pane_g6

0xc2c5,	// (0x00041e85) cell_highlight_pane_g7

0xc2cd,	// (0x00041e8d) cell_highlight_pane_g8

0xc2d5,	// (0x00041e95) cell_highlight_pane_g9

0xba01,	// (0x000415c1) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0004526d) cell_highlight_pane_g

0xc57d,	// (0x0004213d) bg_scroll_pane

0x1e31,	// (0x000379f1) scroll_handle_pane

0xc5c4,	// (0x00042184) scroll_bg_pane_g1

0xc5d9,	// (0x00042199) scroll_bg_pane_g2

0xc5f1,	// (0x000421b1) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x000452c4) scroll_bg_pane_g

0xc606,	// (0x000421c6) scroll_handle_focus_pane_ParamLimits

0xc606,	// (0x000421c6) scroll_handle_focus_pane

0xc5c4,	// (0x00042184) scroll_handle_pane_g1

0xc613,	// (0x000421d3) scroll_handle_pane_g2

0xc5f1,	// (0x000421b1) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x000452cb) scroll_handle_pane_g

0xc2e6,	// (0x00041ea6) bg_popup_sub_pane_cp21_ParamLimits

0xc2e6,	// (0x00041ea6) bg_popup_sub_pane_cp21

0xc627,	// (0x000421e7) popup_fep_japan_predictive_window_t1_ParamLimits

0xc627,	// (0x000421e7) popup_fep_japan_predictive_window_t1

0xc63e,	// (0x000421fe) popup_fep_japan_predictive_window_t2_ParamLimits

0xc63e,	// (0x000421fe) popup_fep_japan_predictive_window_t2

0xc671,	// (0x00042231) popup_fep_japan_predictive_window_t3_ParamLimits

0xc671,	// (0x00042231) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x000452d2) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x000452d2) popup_fep_japan_predictive_window_t

0xba0b,	// (0x000415cb) bg_popup_sub_pane_cp23

0xc6a8,	// (0x00042268) listscroll_japin_cand_pane

0xc6b0,	// (0x00042270) popup_fep_japan_candidate_window_t1

0xc6be,	// (0x0004227e) candidate_pane_ParamLimits

0xc6be,	// (0x0004227e) candidate_pane

0xc6d0,	// (0x00042290) scroll_pane_cp30

0xc6d8,	// (0x00042298) list_single_popup_jap_candidate_pane_ParamLimits

0xc6d8,	// (0x00042298) list_single_popup_jap_candidate_pane

0xba0b,	// (0x000415cb) list_highlight_pane_cp30

0xc6ec,	// (0x000422ac) list_single_popup_jap_candidate_pane_t1

0xc6fb,	// (0x000422bb) level_1_signal

0xc708,	// (0x000422c8) level_2_signal

0xc715,	// (0x000422d5) level_3_signal

0xc722,	// (0x000422e2) level_4_signal

0xc72f,	// (0x000422ef) level_5_signal

0xc73c,	// (0x000422fc) level_6_signal

0xc749,	// (0x00042309) level_7_signal

0xc6fb,	// (0x000422bb) level_1_battery

0xc708,	// (0x000422c8) level_2_battery

0xc715,	// (0x000422d5) level_3_battery

0xc722,	// (0x000422e2) level_4_battery

0xc72f,	// (0x000422ef) level_5_battery

0xc73c,	// (0x000422fc) level_6_battery

0xc749,	// (0x00042309) level_7_battery

0xc76e,	// (0x0004232e) list_menu_pane_ParamLimits

0xc76e,	// (0x0004232e) list_menu_pane

0xc77f,	// (0x0004233f) scroll_pane_cp25_ParamLimits

0xc77f,	// (0x0004233f) scroll_pane_cp25

0xc798,	// (0x00042358) list_double2_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double2_graphic_pane_cp2

0xc798,	// (0x00042358) list_double2_large_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double2_large_graphic_pane_cp2

0xc798,	// (0x00042358) list_double2_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double2_pane_cp2

0xc798,	// (0x00042358) list_double_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double_graphic_pane_cp2

0xc798,	// (0x00042358) list_double_large_graphic_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double_large_graphic_pane_cp2

0xc798,	// (0x00042358) list_double_number_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double_number_pane_cp2

0xc798,	// (0x00042358) list_double_pane_cp2_ParamLimits

0xc798,	// (0x00042358) list_double_pane_cp2

0x94b3,	// (0x0003f073) list_single_2graphic_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_2graphic_pane_cp2

0x94b3,	// (0x0003f073) list_single_graphic_heading_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_graphic_heading_pane_cp2

0x94b3,	// (0x0003f073) list_single_graphic_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_graphic_pane_cp2

0x94b3,	// (0x0003f073) list_single_heading_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_heading_pane_cp2

0xc7a8,	// (0x00042368) list_single_large_graphic_pane_cp2_ParamLimits

0xc7a8,	// (0x00042368) list_single_large_graphic_pane_cp2

0x94b3,	// (0x0003f073) list_single_number_heading_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_number_heading_pane_cp2

0x94b3,	// (0x0003f073) list_single_number_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_number_pane_cp2

0x94b3,	// (0x0003f073) list_single_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_pane_cp2

0xc7c2,	// (0x00042382) bg_popup_sub_pane_cp22

0x1f48,	// (0x00037b08) popup_side_volume_key_window_g1

0x1f72,	// (0x00037b32) popup_side_volume_key_window_t1

0x1f8e,	// (0x00037b4e) volume_small_pane_cp1

0xba59,	// (0x00041619) bg_popup_sub_pane_cp24_ParamLimits

0xba59,	// (0x00041619) bg_popup_sub_pane_cp24

0xc7d8,	// (0x00042398) fep_china_uni_candidate_pane_ParamLimits

0xc7d8,	// (0x00042398) fep_china_uni_candidate_pane

0xc7ec,	// (0x000423ac) fep_china_uni_entry_pane

0xc7fc,	// (0x000423bc) popup_fep_china_uni_window_g1

0xc818,	// (0x000423d8) fep_china_uni_entry_pane_g1

0xc820,	// (0x000423e0) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x000452ff) fep_china_uni_entry_pane_g

0xc828,	// (0x000423e8) fep_entry_item_pane

0xc832,	// (0x000423f2) fep_candidate_item_pane

0xc83a,	// (0x000423fa) fep_china_uni_candidate_pane_g1

0xc842,	// (0x00042402) fep_china_uni_candidate_pane_g2

0xc84a,	// (0x0004240a) fep_china_uni_candidate_pane_g3

0xc852,	// (0x00042412) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00045304) fep_china_uni_candidate_pane_g

0xba01,	// (0x000415c1) fep_entry_item_pane_g1

0xc85a,	// (0x0004241a) fep_entry_item_pane_t1_ParamLimits

0xc85a,	// (0x0004241a) fep_entry_item_pane_t1

0xc870,	// (0x00042430) fep_candidate_item_pane_t1_ParamLimits

0xc870,	// (0x00042430) fep_candidate_item_pane_t1

0xc885,	// (0x00042445) fep_candidate_item_pane_t2_ParamLimits

0xc885,	// (0x00042445) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004530d) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004530d) fep_candidate_item_pane_t

0xba67,	// (0x00041627) list_highlight_pane_cp31_ParamLimits

0xba67,	// (0x00041627) list_highlight_pane_cp31

0xc897,	// (0x00042457) level_1_signal_lsc

0xc8a0,	// (0x00042460) level_2_signal_lsc

0xc8a9,	// (0x00042469) level_3_signal_lsc

0xc8b2,	// (0x00042472) level_4_signal_lsc

0xc8bb,	// (0x0004247b) level_5_signal_lsc

0xc8c4,	// (0x00042484) level_6_signal_lsc

0xc8cd,	// (0x0004248d) level_7_signal_lsc

0xc8cd,	// (0x0004248d) level_1_battery_lsc

0xc8d6,	// (0x00042496) level_2_battery_lsc

0xc8df,	// (0x0004249f) level_3_battery_lsc

0xc8e8,	// (0x000424a8) level_4_battery_lsc

0xc8f1,	// (0x000424b1) level_5_battery_lsc

0xc8fa,	// (0x000424ba) level_6_battery_lsc

0xc897,	// (0x00042457) level_7_battery_lsc

0xc903,	// (0x000424c3) scroll_handle_focus_pane_g1

0xc90c,	// (0x000424cc) scroll_handle_focus_pane_g2

0xc915,	// (0x000424d5) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00045312) scroll_handle_focus_pane_g

0x8396,	// (0x0003df56) list_single_2graphic_pane_g1_ParamLimits

0x8396,	// (0x0003df56) list_single_2graphic_pane_g1

0x8727,	// (0x0003e2e7) list_single_2graphic_pane_g2_ParamLimits

0x8727,	// (0x0003e2e7) list_single_2graphic_pane_g2

0x1ace,	// (0x0003768e) list_single_2graphic_pane_g3_ParamLimits

0x1ace,	// (0x0003768e) list_single_2graphic_pane_g3

0x8799,	// (0x0003e359) list_single_2graphic_pane_g4_ParamLimits

0x8799,	// (0x0003e359) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00045319) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00045319) list_single_2graphic_pane_g

0x83a2,	// (0x0003df62) list_single_2graphic_pane_t1_ParamLimits

0x83a2,	// (0x0003df62) list_single_2graphic_pane_t1

0x87a5,	// (0x0003e365) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x87a5,	// (0x0003e365) list_double2_graphic_large_graphic_pane_g1

0x877f,	// (0x0003e33f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x877f,	// (0x0003e33f) list_double2_graphic_large_graphic_pane_g2

0x8767,	// (0x0003e327) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8767,	// (0x0003e327) list_double2_graphic_large_graphic_pane_g3

0x87b7,	// (0x0003e377) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x87b7,	// (0x0003e377) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00045322) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00045322) list_double2_graphic_large_graphic_pane_g

0x83d0,	// (0x0003df90) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x83d0,	// (0x0003df90) list_double2_graphic_large_graphic_pane_t1

0x83e6,	// (0x0003dfa6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x83e6,	// (0x0003dfa6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004532b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004532b) list_double2_graphic_large_graphic_pane_t

0xc9f6,	// (0x000425b6) popup_fast_swap_window_ParamLimits

0xc9f6,	// (0x000425b6) popup_fast_swap_window

0xca12,	// (0x000425d2) popup_side_volume_key_window

0xca2c,	// (0x000425ec) stacon_top_pane

0xca36,	// (0x000425f6) status_pane_ParamLimits

0xca36,	// (0x000425f6) status_pane

0xca2c,	// (0x000425ec) status_small_pane

0xba0b,	// (0x000415cb) control_pane

0xba0b,	// (0x000415cb) stacon_bottom_pane

0xc211,	// (0x00041dd1) scroll_pane_cp121

0xc208,	// (0x00041dc8) set_content_pane

0x9515,	// (0x0003f0d5) bg_active_tab_pane_g1_cp1

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp1

0x951e,	// (0x0003f0de) bg_active_tab_pane_g3_cp1

0x9515,	// (0x0003f0d5) bg_passive_tab_pane_g1_cp1

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp1

0x951e,	// (0x0003f0de) bg_passive_tab_pane_g3_cp1

0x9527,	// (0x0003f0e7) bg_active_tab_pane_g1_cp2

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp2

0x9530,	// (0x0003f0f0) bg_active_tab_pane_g3_cp2

0x9527,	// (0x0003f0e7) bg_passive_tab_pane_g1_cp2

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp2

0x9530,	// (0x0003f0f0) bg_passive_tab_pane_g3_cp2

0x9539,	// (0x0003f0f9) bg_active_tab_pane_g1_cp3

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp3

0x9542,	// (0x0003f102) bg_active_tab_pane_g3_cp3

0x9539,	// (0x0003f0f9) bg_passive_tab_pane_g1_cp3

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp3

0x9542,	// (0x0003f102) bg_passive_tab_pane_g3_cp3

0x954b,	// (0x0003f10b) bg_active_tab_pane_g1_cp4

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp4

0x9554,	// (0x0003f114) bg_active_tab_pane_g3_cp4

0x954b,	// (0x0003f10b) bg_passive_tab_pane_g1_cp4

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp4

0x9554,	// (0x0003f114) bg_passive_tab_pane_g3_cp4

0xc965,	// (0x00042525) bg_active_tab_pane_g1_cp5

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp5

0xc96e,	// (0x0004252e) bg_active_tab_pane_g3_cp5

0xc965,	// (0x00042525) bg_passive_tab_pane_g1_cp5

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp5

0xc96e,	// (0x0004252e) bg_passive_tab_pane_g3_cp5

0x69c7,	// (0x0003c587) list_set_graphic_pane_ParamLimits

0x69c7,	// (0x0003c587) list_set_graphic_pane

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp4

0xc977,	// (0x00042537) list_set_graphic_pane_g1_ParamLimits

0xc977,	// (0x00042537) list_set_graphic_pane_g1

0xc983,	// (0x00042543) list_set_graphic_pane_g2_ParamLimits

0xc983,	// (0x00042543) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00045330) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00045330) list_set_graphic_pane_g

0x0009,

0xfa84,	// (0x00045644) volume_small_pane_cp_g

0xc9a7,	// (0x00042567) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc9a7,	// (0x00042567) list_double2_large_graphic_pane_g1_cp2

0xc9b5,	// (0x00042575) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc9b5,	// (0x00042575) list_double2_large_graphic_pane_g2_cp2

0xc9c6,	// (0x00042586) list_double2_large_graphic_pane_g3_cp2

0xc9ce,	// (0x0004258e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc9ce,	// (0x0004258e) list_double2_large_graphic_pane_t1_cp2

0xc9e4,	// (0x000425a4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc9e4,	// (0x000425a4) list_double2_large_graphic_pane_t2_cp2

0xe0bd,	// (0x00043c7d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe0bd,	// (0x00043c7d) list_double_large_graphic_pane_g1_cp2

0xe0d0,	// (0x00043c90) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe0d0,	// (0x00043c90) list_double_large_graphic_pane_g2_cp2

0xcb54,	// (0x00042714) list_double_large_graphic_pane_g3_cp2

0xe0e1,	// (0x00043ca1) list_double_large_graphic_pane_g4_cp

0xe0e9,	// (0x00043ca9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe0e9,	// (0x00043ca9) list_double_large_graphic_pane_t1_cp2

0xe100,	// (0x00043cc0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe100,	// (0x00043cc0) list_double_large_graphic_pane_t2_cp2

0xca44,	// (0x00042604) list_double2_graphic_pane_g1_cp2_ParamLimits

0xca44,	// (0x00042604) list_double2_graphic_pane_g1_cp2

0xca52,	// (0x00042612) list_double2_graphic_pane_g2_cp2_ParamLimits

0xca52,	// (0x00042612) list_double2_graphic_pane_g2_cp2

0xca63,	// (0x00042623) list_double2_graphic_pane_g3_cp2

0xca6d,	// (0x0004262d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xca6d,	// (0x0004262d) list_double2_graphic_pane_t1_cp2

0xca83,	// (0x00042643) list_double2_graphic_pane_t2_cp2_ParamLimits

0xca83,	// (0x00042643) list_double2_graphic_pane_t2_cp2

0xca95,	// (0x00042655) list_single_number_heading_pane_g1_cp2_ParamLimits

0xca95,	// (0x00042655) list_single_number_heading_pane_g1_cp2

0xcaa1,	// (0x00042661) list_single_number_heading_pane_g2_cp2

0xcaa9,	// (0x00042669) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcaa9,	// (0x00042669) list_single_number_heading_pane_t1_cp2

0xcabf,	// (0x0004267f) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcabf,	// (0x0004267f) list_single_number_heading_pane_t2_cp2

0xcad3,	// (0x00042693) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcad3,	// (0x00042693) list_single_number_heading_pane_t3_cp2

0xca95,	// (0x00042655) list_single_heading_pane_g1_cp2_ParamLimits

0xca95,	// (0x00042655) list_single_heading_pane_g1_cp2

0xcaa1,	// (0x00042661) list_single_heading_pane_g2_cp2

0xcaa9,	// (0x00042669) list_single_heading_pane_t1_cp2_ParamLimits

0xcaa9,	// (0x00042669) list_single_heading_pane_t1_cp2

0xdec5,	// (0x00043a85) list_single_heading_pane_t2_cp2_ParamLimits

0xdec5,	// (0x00043a85) list_single_heading_pane_t2_cp2

0xde5f,	// (0x00043a1f) list_double_graphic_pane_g1_cp2_ParamLimits

0xde5f,	// (0x00043a1f) list_double_graphic_pane_g1_cp2

0xde6b,	// (0x00043a2b) list_double_graphic_pane_g2_cp2_ParamLimits

0xde6b,	// (0x00043a2b) list_double_graphic_pane_g2_cp2

0xde7a,	// (0x00043a3a) list_double_graphic_pane_g3_cp2

0xde82,	// (0x00043a42) list_double_graphic_pane_t1_cp2_ParamLimits

0xde82,	// (0x00043a42) list_double_graphic_pane_t1_cp2

0xde98,	// (0x00043a58) list_double_graphic_pane_t2_cp2_ParamLimits

0xde98,	// (0x00043a58) list_double_graphic_pane_t2_cp2

0xcb48,	// (0x00042708) list_double_number_pane_g1_cp2_ParamLimits

0xcb48,	// (0x00042708) list_double_number_pane_g1_cp2

0xcb54,	// (0x00042714) list_double_number_pane_g2_cp2

0xde23,	// (0x000439e3) list_double_number_pane_t1_cp2_ParamLimits

0xde23,	// (0x000439e3) list_double_number_pane_t1_cp2

0xde37,	// (0x000439f7) list_double_number_pane_t2_cp2_ParamLimits

0xde37,	// (0x000439f7) list_double_number_pane_t2_cp2

0xde4d,	// (0x00043a0d) list_double_number_pane_t3_cp2_ParamLimits

0xde4d,	// (0x00043a0d) list_double_number_pane_t3_cp2

0xdd9a,	// (0x0004395a) list_single_graphic_pane_g1_cp2_ParamLimits

0xdd9a,	// (0x0004395a) list_single_graphic_pane_g1_cp2

0xcbac,	// (0x0004276c) list_single_graphic_pane_g2_cp2_ParamLimits

0xcbac,	// (0x0004276c) list_single_graphic_pane_g2_cp2

0xcbb8,	// (0x00042778) list_single_graphic_pane_g3_cp2

0xdd70,	// (0x00043930) list_single_graphic_pane_t1_cp2_ParamLimits

0xdd70,	// (0x00043930) list_single_graphic_pane_t1_cp2

0xcbac,	// (0x0004276c) list_single_number_pane_g1_cp2_ParamLimits

0xcbac,	// (0x0004276c) list_single_number_pane_g1_cp2

0xcbb8,	// (0x00042778) list_single_number_pane_g2_cp2

0xdd70,	// (0x00043930) list_single_number_pane_t1_cp2_ParamLimits

0xdd70,	// (0x00043930) list_single_number_pane_t1_cp2

0xdd86,	// (0x00043946) list_single_number_pane_t2_cp2_ParamLimits

0xdd86,	// (0x00043946) list_single_number_pane_t2_cp2

0xc9b5,	// (0x00042575) list_double2_pane_g1_cp2_ParamLimits

0xc9b5,	// (0x00042575) list_double2_pane_g1_cp2

0xc9c6,	// (0x00042586) list_double2_pane_g2_cp2

0xcb20,	// (0x000426e0) list_double2_pane_t1_cp2_ParamLimits

0xcb20,	// (0x000426e0) list_double2_pane_t1_cp2

0xcb36,	// (0x000426f6) list_double2_pane_t2_cp2_ParamLimits

0xcb36,	// (0x000426f6) list_double2_pane_t2_cp2

0xcb48,	// (0x00042708) list_double_pane_g1_cp2_ParamLimits

0xcb48,	// (0x00042708) list_double_pane_g1_cp2

0xcb54,	// (0x00042714) list_double_pane_g2_cp2

0xcb5c,	// (0x0004271c) list_double_pane_t1_cp2_ParamLimits

0xcb5c,	// (0x0004271c) list_double_pane_t1_cp2

0xcb72,	// (0x00042732) list_double_pane_t2_cp2_ParamLimits

0xcb72,	// (0x00042732) list_double_pane_t2_cp2

0xcb9c,	// (0x0004275c) list_single_pane_cp2_g3

0xcbac,	// (0x0004276c) list_single_pane_g1_cp2_ParamLimits

0xcbac,	// (0x0004276c) list_single_pane_g1_cp2

0xcbb8,	// (0x00042778) list_single_pane_g2_cp2

0xcbc0,	// (0x00042780) list_single_pane_t1_cp2_ParamLimits

0xcbc0,	// (0x00042780) list_single_pane_t1_cp2

0xcbd8,	// (0x00042798) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xcbd8,	// (0x00042798) list_single_large_graphic_pane_g1_cp2

0xcbe6,	// (0x000427a6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcbe6,	// (0x000427a6) list_single_large_graphic_pane_g2_cp2

0xcbf2,	// (0x000427b2) list_single_large_graphic_pane_g3_cp2

0xcbfa,	// (0x000427ba) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xcbfa,	// (0x000427ba) list_single_large_graphic_pane_g4_cp1

0xcc14,	// (0x000427d4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcc14,	// (0x000427d4) list_single_large_graphic_pane_t1_cp2

0xdd3a,	// (0x000438fa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xdd3a,	// (0x000438fa) list_single_graphic_heading_pane_g1_cp2

0xdd07,	// (0x000438c7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xdd07,	// (0x000438c7) list_single_graphic_heading_pane_g4_cp2

0xcbb8,	// (0x00042778) list_single_graphic_heading_pane_g5_cp2

0xdd46,	// (0x00043906) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xdd46,	// (0x00043906) list_single_graphic_heading_pane_t1_cp2

0xdd5c,	// (0x0004391c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xdd5c,	// (0x0004391c) list_single_graphic_heading_pane_t2_cp2

0xdcfb,	// (0x000438bb) list_single_2graphic_pane_g1_cp2_ParamLimits

0xdcfb,	// (0x000438bb) list_single_2graphic_pane_g1_cp2

0xdd07,	// (0x000438c7) list_single_2graphic_pane_g2_cp2_ParamLimits

0xdd07,	// (0x000438c7) list_single_2graphic_pane_g2_cp2

0xcbb8,	// (0x00042778) list_single_2graphic_pane_g3_cp2

0xdd18,	// (0x000438d8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdd18,	// (0x000438d8) list_single_2graphic_pane_g4_cp2

0xdd24,	// (0x000438e4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xdd24,	// (0x000438e4) list_single_2graphic_pane_t1_cp2

0xba01,	// (0x000415c1) list_highlight_pane_g10_cp1

0xd901,	// (0x000434c1) list_highlight_pane_g1_cp1

0xd909,	// (0x000434c9) list_highlight_pane_g2_cp1

0xd911,	// (0x000434d1) list_highlight_pane_g3_cp1

0xd919,	// (0x000434d9) list_highlight_pane_g4_cp1

0xd921,	// (0x000434e1) list_highlight_pane_g5_cp1

0xd929,	// (0x000434e9) list_highlight_pane_g6_cp1

0xd931,	// (0x000434f1) list_highlight_pane_g7_cp1

0xd939,	// (0x000434f9) list_highlight_pane_g8_cp1

0xd941,	// (0x00043501) list_highlight_pane_g9_cp1

0xa1a2,	// (0x0003fd62) form_field_slider_pane_t3

0xa1b2,	// (0x0003fd72) form_field_slider_pane_t4

0xd823,	// (0x000433e3) slider_form_pane_ParamLimits

0xd823,	// (0x000433e3) slider_form_pane

0xba0b,	// (0x000415cb) control_abbreviations

0xba0b,	// (0x000415cb) control_conventions

0xba0b,	// (0x000415cb) control_definitions

0xba0b,	// (0x000415cb) format_table_attribute

0xdf11,	// (0x00043ad1) bg_popup_preview_window_pane_g9

0xba0b,	// (0x000415cb) format_table_data2

0xba0b,	// (0x000415cb) format_table_data3

0xba0b,	// (0x000415cb) format_table_data_example

0x0008,

0xba0b,	// (0x000415cb) intro_purpose

0xf8a8,	// (0x00045468) bg_popup_preview_window_pane_g

0xba0b,	// (0x000415cb) texts_category

0xba0b,	// (0x000415cb) texts_graphics

0xcc2a,	// (0x000427ea) text_digital

0xcc39,	// (0x000427f9) text_primary

0xcc48,	// (0x00042808) text_primary_small

0xcc57,	// (0x00042817) text_secondary

0xcc66,	// (0x00042826) text_title

0xe3a7,	// (0x00043f67) bg_passive_tab_pane_g1_cp3_srt

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp3_srt

0xe3b0,	// (0x00043f70) bg_passive_tab_pane_g3_cp3_srt

0xba59,	// (0x00041619) bg_active_tab_pane_cp3_srt_ParamLimits

0xba59,	// (0x00041619) bg_active_tab_pane_cp3_srt

0xe3b9,	// (0x00043f79) tabs_4_active_pane_srt_g1

0xa55f,	// (0x0004011f) tabs_4_active_pane_srt_t1_ParamLimits

0xa55f,	// (0x0004011f) tabs_4_active_pane_srt_t1

0xe3a7,	// (0x00043f67) bg_active_tab_pane_g1_cp3_copy1

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp3_copy1

0xe3b0,	// (0x00043f70) bg_active_tab_pane_g3_cp3_copy1

0xba67,	// (0x00041627) tabs_2_long_active_pane_srt_ParamLimits

0xba67,	// (0x00041627) tabs_2_long_active_pane_srt

0xba67,	// (0x00041627) tabs_2_long_passive_pane_srt_ParamLimits

0xba67,	// (0x00041627) tabs_2_long_passive_pane_srt

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp4_srt

0xe2d2,	// (0x00043e92) bg_passive_tab_pane_g1_cp4_srt

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp4_srt

0xe2db,	// (0x00043e9b) bg_passive_tab_pane_g3_cp4_srt

0xba67,	// (0x00041627) bg_active_tab_pane_cp4_srt_ParamLimits

0xba67,	// (0x00041627) bg_active_tab_pane_cp4_srt

0xa37e,	// (0x0003ff3e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa37e,	// (0x0003ff3e) tabs_2_long_active_pane_srt_t1

0xe2d2,	// (0x00043e92) bg_active_tab_pane_g1_cp4_srt

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp4_srt

0xe2db,	// (0x00043e9b) bg_active_tab_pane_g3_cp4_srt

0xba59,	// (0x00041619) tabs_3_long_active_pane_srt_ParamLimits

0xba59,	// (0x00041619) tabs_3_long_active_pane_srt

0xba59,	// (0x00041619) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xba59,	// (0x00041619) tabs_3_long_passive_pane_cp_srt

0xba59,	// (0x00041619) tabs_3_long_passive_pane_srt_ParamLimits

0xba59,	// (0x00041619) tabs_3_long_passive_pane_srt

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp5_srt

0xc965,	// (0x00042525) bg_passive_tab_pane_g1_cp5_srt

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp5_srt

0xc96e,	// (0x0004252e) bg_passive_tab_pane_g3_cp5_srt

0xba67,	// (0x00041627) bg_active_tab_pane_cp5_srt_ParamLimits

0xba67,	// (0x00041627) bg_active_tab_pane_cp5_srt

0xa368,	// (0x0003ff28) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa368,	// (0x0003ff28) tabs_3_long_active_pane_srt_t1

0xc965,	// (0x00042525) bg_active_tab_pane_g1_cp5_srt

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp5_srt

0xc96e,	// (0x0004252e) bg_active_tab_pane_g3_cp5_srt

0xe2c4,	// (0x00043e84) navi_text_pane_srt_t1

0xe2bc,	// (0x00043e7c) navi_icon_pane_srt_g1

0xcd64,	// (0x00042924) midp_editing_number_pane_srt

0xcc75,	// (0x00042835) midp_ticker_pane_srt

0xcd6c,	// (0x0004292c) midp_ticker_pane_srt_g1

0xcd74,	// (0x00042934) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004534f) midp_ticker_pane_srt_g

0xcd7c,	// (0x0004293c) midp_ticker_pane_srt_t1

0xe2ad,	// (0x00043e6d) midp_editing_number_pane_t1_copy1

0x955d,	// (0x0003f11d) listscroll_midp_pane

0x955d,	// (0x0003f11d) midp_form_pane

0xcc7d,	// (0x0004283d) midp_info_popup_window_ParamLimits

0xcc7d,	// (0x0004283d) midp_info_popup_window

0xc2e6,	// (0x00041ea6) bg_popup_sub_pane_cp50_ParamLimits

0xc2e6,	// (0x00041ea6) bg_popup_sub_pane_cp50

0xd540,	// (0x00043100) listscroll_midp_info_pane_ParamLimits

0xd540,	// (0x00043100) listscroll_midp_info_pane

0xd528,	// (0x000430e8) listscroll_form_midp_pane_ParamLimits

0xd528,	// (0x000430e8) listscroll_form_midp_pane

0xd534,	// (0x000430f4) scroll_bar_cp050

0xa196,	// (0x0003fd56) list_midp_pane

0xec7b,	// (0x0004483b) signal_pane_g2_cp

0xd45a,	// (0x0004301a) listscroll_midp_info_pane_t1_ParamLimits

0xd45a,	// (0x0004301a) listscroll_midp_info_pane_t1

0xd472,	// (0x00043032) listscroll_midp_info_pane_t2_ParamLimits

0xd472,	// (0x00043032) listscroll_midp_info_pane_t2

0xd4b0,	// (0x00043070) listscroll_midp_info_pane_t3_ParamLimits

0xd4b0,	// (0x00043070) listscroll_midp_info_pane_t3

0xd4ea,	// (0x000430aa) listscroll_midp_info_pane_t4_ParamLimits

0xd4ea,	// (0x000430aa) listscroll_midp_info_pane_t4

0x0003,

0x0011,	// (0x00035bd1) listscroll_midp_info_pane_t_ParamLimits

0x0011,	// (0x00035bd1) listscroll_midp_info_pane_t

0xc34d,	// (0x00041f0d) scroll_pane_cp21

0xd3fe,	// (0x00042fbe) form_midp_field_choice_group_pane

0xd407,	// (0x00042fc7) form_midp_field_text_pane

0xd440,	// (0x00043000) form_midp_field_time_pane

0xd448,	// (0x00043008) form_midp_gauge_slider_pane

0xd451,	// (0x00043011) form_midp_gauge_wait_pane

0xba0b,	// (0x000415cb) form_midp_image_pane

0x83f8,	// (0x0003dfb8) list_single_midp_pane_ParamLimits

0x83f8,	// (0x0003dfb8) list_single_midp_pane

0xa172,	// (0x0003fd32) form_midp_field_text_pane_t1

0xd2a5,	// (0x00042e65) input_focus_pane_cp050

0xd3ed,	// (0x00042fad) list_midp_form_text_pane

0xd3bc,	// (0x00042f7c) form_midp_field_choice_group_pane_t1

0xd3ca,	// (0x00042f8a) input_focus_pane_cp051

0xd3de,	// (0x00042f9e) list_midp_choice_pane

0xba0b,	// (0x000415cb) status_idle_pane

0xd3a0,	// (0x00042f60) form_midp_field_time_pane_t1

0xba01,	// (0x000415c1) wait_anim_pane_g2_copy1

0xd3ae,	// (0x00042f6e) form_midp_field_time_pane_t2

0x0001,

0xccd6,	// (0x00042896) aid_navinavi_width_2_pane

0x000c,	// (0x00035bcc) form_midp_field_time_pane_t

0xba0b,	// (0x000415cb) input_focus_pane_cp052

0xba0b,	// (0x000415cb) bg_input_focus_pane_cp040

0xd37c,	// (0x00042f3c) form_midp_gauge_slider_pane_t1

0xd38a,	// (0x00042f4a) form_midp_gauge_slider_pane_t2

0xa156,	// (0x0003fd16) form_midp_gauge_slider_pane_t3

0xa164,	// (0x0003fd24) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x000453ed) form_midp_gauge_slider_pane_t

0xd398,	// (0x00042f58) form_midp_slider_pane

0xba67,	// (0x00041627) bg_input_focus_pane_cp041_ParamLimits

0xba67,	// (0x00041627) bg_input_focus_pane_cp041

0xd349,	// (0x00042f09) form_midp_gauge_wait_pane_t1_ParamLimits

0xd349,	// (0x00042f09) form_midp_gauge_wait_pane_t1

0xd35b,	// (0x00042f1b) form_midp_gauge_wait_pane_t2_ParamLimits

0xd35b,	// (0x00042f1b) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x000453e8) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x000453e8) form_midp_gauge_wait_pane_t

0xd36d,	// (0x00042f2d) form_midp_wait_pane_ParamLimits

0xd36d,	// (0x00042f2d) form_midp_wait_pane

0xd313,	// (0x00042ed3) form_midp_image_pane_g1

0xd31c,	// (0x00042edc) form_midp_image_pane_t1

0xd32b,	// (0x00042eeb) form_midp_image_pane_t2

0xd33a,	// (0x00042efa) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x000453e1) form_midp_image_pane_t

0xd30a,	// (0x00042eca) list_single_midp_pane_g1

0x0d95,	// (0x00036955) list_single_midp_pane_t1

0xa13f,	// (0x0003fcff) list_midp_form_item_pane_ParamLimits

0xa13f,	// (0x0003fcff) list_midp_form_item_pane

0xcc90,	// (0x00042850) list_midp_form_item_pane_t1

0xcc9f,	// (0x0004285f) midp_ticker_pane_g1

0xccab,	// (0x0004286b) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x00045335) midp_ticker_pane_g

0x9609,	// (0x0003f1c9) midp_ticker_pane_t1

0xa4e7,	// (0x000400a7) midp_editing_number_pane_t1

0xe33b,	// (0x00043efb) midp_editing_number_pane

0xe34a,	// (0x00043f0a) midp_ticker_pane

0xe29d,	// (0x00043e5d) ai_message_heading_pane

0xba0b,	// (0x000415cb) bg_popup_window_pane_cp14

0xe2a5,	// (0x00043e65) listscroll_ai_message_pane

0xe227,	// (0x00043de7) ai_message_heading_pane_g1_ParamLimits

0xe227,	// (0x00043de7) ai_message_heading_pane_g1

0xe233,	// (0x00043df3) ai_message_heading_pane_g2_ParamLimits

0xe233,	// (0x00043df3) ai_message_heading_pane_g2

0xe23f,	// (0x00043dff) ai_message_heading_pane_g3_ParamLimits

0xe23f,	// (0x00043dff) ai_message_heading_pane_g3

0xe24b,	// (0x00043e0b) ai_message_heading_pane_g4_ParamLimits

0xe24b,	// (0x00043e0b) ai_message_heading_pane_g4

0x0003,

0xf90a,	// (0x000454ca) ai_message_heading_pane_g_ParamLimits

0xf90a,	// (0x000454ca) ai_message_heading_pane_g

0xe257,	// (0x00043e17) ai_message_heading_pane_t1_ParamLimits

0xe257,	// (0x00043e17) ai_message_heading_pane_t1

0xe271,	// (0x00043e31) ai_message_heading_pane_t2_ParamLimits

0xe271,	// (0x00043e31) ai_message_heading_pane_t2

0x0001,

0xf913,	// (0x000454d3) ai_message_heading_pane_t_ParamLimits

0xf913,	// (0x000454d3) ai_message_heading_pane_t

0xe283,	// (0x00043e43) bg_popup_heading_pane_cp1_ParamLimits

0xe283,	// (0x00043e43) bg_popup_heading_pane_cp1

0xe215,	// (0x00043dd5) list_ai_message_pane_ParamLimits

0xe215,	// (0x00043dd5) list_ai_message_pane

0xc34d,	// (0x00041f0d) scroll_pane_cp10

0xe1b1,	// (0x00043d71) list_ai_message_pane_g1

0xe1b9,	// (0x00043d79) list_ai_message_pane_g2

0x0001,

0xf8e7,	// (0x000454a7) list_ai_message_pane_g

0xe1c1,	// (0x00043d81) list_ai_message_pane_t1_ParamLimits

0xe1c1,	// (0x00043d81) list_ai_message_pane_t1

0xe1d6,	// (0x00043d96) list_ai_message_pane_t2_ParamLimits

0xe1d6,	// (0x00043d96) list_ai_message_pane_t2

0xe1eb,	// (0x00043dab) list_ai_message_pane_t3_ParamLimits

0xe1eb,	// (0x00043dab) list_ai_message_pane_t3

0xe200,	// (0x00043dc0) list_ai_message_pane_t4_ParamLimits

0xe200,	// (0x00043dc0) list_ai_message_pane_t4

0x0003,

0xf8ec,	// (0x000454ac) list_ai_message_pane_t_ParamLimits

0xf8ec,	// (0x000454ac) list_ai_message_pane_t

0xa343,	// (0x0003ff03) cell_ai_soft_ind_pane_ParamLimits

0xa343,	// (0x0003ff03) cell_ai_soft_ind_pane

0xccb7,	// (0x00042877) cell_ai_soft_ind_pane_g1_ParamLimits

0xccb7,	// (0x00042877) cell_ai_soft_ind_pane_g1

0xba0b,	// (0x000415cb) grid_highlight_cp1

0xccc4,	// (0x00042884) text_secondary_cp56_ParamLimits

0xccc4,	// (0x00042884) text_secondary_cp56

0xe186,	// (0x00043d46) example_general_pane_ParamLimits

0xe186,	// (0x00043d46) example_general_pane

0xe192,	// (0x00043d52) example_parent_pane_g1_ParamLimits

0xe192,	// (0x00043d52) example_parent_pane_g1

0xe19e,	// (0x00043d5e) example_parent_pane_t1_ParamLimits

0xe19e,	// (0x00043d5e) example_parent_pane_t1

0x9a12,	// (0x0003f5d2) popup_preview_text_window_ParamLimits

0x9a12,	// (0x0003f5d2) popup_preview_text_window

0xcba4,	// (0x00042764) list_single_pane_cp2_g4

0xbd19,	// (0x000418d9) bg_popup_preview_window_pane_ParamLimits

0xbd19,	// (0x000418d9) bg_popup_preview_window_pane

0xdf19,	// (0x00043ad9) popup_preview_text_window_t1_ParamLimits

0xdf19,	// (0x00043ad9) popup_preview_text_window_t1

0xdf37,	// (0x00043af7) popup_preview_text_window_t2_ParamLimits

0xdf37,	// (0x00043af7) popup_preview_text_window_t2

0xdf80,	// (0x00043b40) popup_preview_text_window_t3_ParamLimits

0xdf80,	// (0x00043b40) popup_preview_text_window_t3

0xdfc5,	// (0x00043b85) popup_preview_text_window_t4_ParamLimits

0xdfc5,	// (0x00043b85) popup_preview_text_window_t4

0x0004,

0xf8bb,	// (0x0004547b) popup_preview_text_window_t_ParamLimits

0xf8bb,	// (0x0004547b) popup_preview_text_window_t

0xe043,	// (0x00043c03) scroll_pane_cp11

0xd1b5,	// (0x00042d75) bg_popup_preview_window_pane_g1

0xded9,	// (0x00043a99) bg_popup_preview_window_pane_g2

0xdee1,	// (0x00043aa1) bg_popup_preview_window_pane_g3

0xdee9,	// (0x00043aa9) bg_popup_preview_window_pane_g4

0xdef1,	// (0x00043ab1) bg_popup_preview_window_pane_g5

0xdef9,	// (0x00043ab9) bg_popup_preview_window_pane_g6

0xdf01,	// (0x00043ac1) bg_popup_preview_window_pane_g7

0xdf09,	// (0x00043ac9) bg_popup_preview_window_pane_g8

0x13c2,	// (0x00036f82) aid_popup_width_pane

0x998e,	// (0x0003f54e) popup_midp_note_alarm_window_ParamLimits

0x998e,	// (0x0003f54e) popup_midp_note_alarm_window

0xc222,	// (0x00041de2) data_form_pane_ParamLimits

0x8287,	// (0x0003de47) form_field_data_pane_g1

0x8291,	// (0x0003de51) form_field_data_pane_t1_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_ParamLimits

0xc23c,	// (0x00041dfc) data_form_wide_pane_ParamLimits

0x0ace,	// (0x0003668e) form_field_data_wide_pane_g1

0x0ada,	// (0x0003669a) form_field_data_wide_pane_t1_ParamLimits

0xbfa9,	// (0x00041b69) input_focus_pane_cp6_ParamLimits

0x9373,	// (0x0003ef33) input_popup_find_pane_g1_ParamLimits

0x9373,	// (0x0003ef33) input_popup_find_pane_g1

0x1d0d,	// (0x000378cd) aid_navi_side_left_pane

0x1d22,	// (0x000378e2) aid_navi_side_right_pane

0xd9de,	// (0x0004359e) bg_popup_window_pane_cp30_ParamLimits

0xd9de,	// (0x0004359e) bg_popup_window_pane_cp30

0xda58,	// (0x00043618) popup_midp_note_alarm_window_g1_ParamLimits

0xda58,	// (0x00043618) popup_midp_note_alarm_window_g1

0xda88,	// (0x00043648) popup_midp_note_alarm_window_t1_ParamLimits

0xda88,	// (0x00043648) popup_midp_note_alarm_window_t1

0xdb29,	// (0x000436e9) popup_midp_note_alarm_window_t2_ParamLimits

0xdb29,	// (0x000436e9) popup_midp_note_alarm_window_t2

0xdbd7,	// (0x00043797) popup_midp_note_alarm_window_t3_ParamLimits

0xdbd7,	// (0x00043797) popup_midp_note_alarm_window_t3

0xdbff,	// (0x000437bf) popup_midp_note_alarm_window_t4_ParamLimits

0xdbff,	// (0x000437bf) popup_midp_note_alarm_window_t4

0xdc1f,	// (0x000437df) popup_midp_note_alarm_window_t5_ParamLimits

0xdc1f,	// (0x000437df) popup_midp_note_alarm_window_t5

0x000a,

0x0073,	// (0x00035c33) popup_midp_note_alarm_window_t_ParamLimits

0x0073,	// (0x00035c33) popup_midp_note_alarm_window_t

0xdccb,	// (0x0004388b) wait_bar_pane_cp1_ParamLimits

0xdccb,	// (0x0004388b) wait_bar_pane_cp1

0xba0b,	// (0x000415cb) wait_anim_pane_copy1

0xba0b,	// (0x000415cb) wait_border_pane_copy1

0xd6e4,	// (0x000432a4) wait_border_pane_g1_copy1

0x0af4,	// (0x000366b4) form_field_popup_pane_g1

0x82ab,	// (0x0003de6b) form_field_popup_pane_t1_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_cp7_ParamLimits

0xc268,	// (0x00041e28) list_form_pane_ParamLimits

0x0b16,	// (0x000366d6) form_field_popup_wide_pane_g1

0x0b1e,	// (0x000366de) form_field_popup_wide_pane_t1_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_cp8_ParamLimits

0xc274,	// (0x00041e34) list_form_wide_pane_ParamLimits

0xe3e0,	// (0x00043fa0) aid_size_cell_graphic_pane

0x832a,	// (0x0003deea) data_form_pane_t1_ParamLimits

0x8425,	// (0x0003dfe5) data_form_wide_pane_t1_ParamLimits

0x9dc7,	// (0x0003f987) bg_status_flat_pane

0x900f,	// (0x0003ebcf) title_pane_t1_ParamLimits

0xba21,	// (0x000415e1) title_pane_t2_ParamLimits

0xba47,	// (0x00041607) title_pane_t3_ParamLimits

0xf573,	// (0x00045133) title_pane_t_ParamLimits

0xc6fb,	// (0x000422bb) level_1_signal_ParamLimits

0xc708,	// (0x000422c8) level_2_signal_ParamLimits

0xc715,	// (0x000422d5) level_3_signal_ParamLimits

0xc722,	// (0x000422e2) level_4_signal_ParamLimits

0xc72f,	// (0x000422ef) level_5_signal_ParamLimits

0xc73c,	// (0x000422fc) level_6_signal_ParamLimits

0xc749,	// (0x00042309) level_7_signal_ParamLimits

0xc6fb,	// (0x000422bb) level_1_battery_ParamLimits

0xc708,	// (0x000422c8) level_2_battery_ParamLimits

0xc715,	// (0x000422d5) level_3_battery_ParamLimits

0xc722,	// (0x000422e2) level_4_battery_ParamLimits

0xc72f,	// (0x000422ef) level_5_battery_ParamLimits

0xc73c,	// (0x000422fc) level_6_battery_ParamLimits

0xc749,	// (0x00042309) level_7_battery_ParamLimits

0xd901,	// (0x000434c1) bg_status_flat_pane_g1

0xd909,	// (0x000434c9) bg_status_flat_pane_g2

0xd911,	// (0x000434d1) bg_status_flat_pane_g3

0xd919,	// (0x000434d9) bg_status_flat_pane_g4

0xd921,	// (0x000434e1) bg_status_flat_pane_g5

0xd929,	// (0x000434e9) bg_status_flat_pane_g6

0xd931,	// (0x000434f1) bg_status_flat_pane_g7

0x90a3,	// (0x0003ec63) tabs_3_active_pane_t1_ParamLimits

0x90a3,	// (0x0003ec63) tabs_3_passive_pane_t1_ParamLimits

0x90bd,	// (0x0003ec7d) tabs_4_active_pane_t1_ParamLimits

0x90bd,	// (0x0003ec7d) tabs_4_1_passive_pane_t1_ParamLimits

0x9389,	// (0x0003ef49) tabs_2_active_pane_t1_ParamLimits

0x9389,	// (0x0003ef49) tabs_2_passive_pane_t1_ParamLimits

0xba67,	// (0x00041627) bg_active_tab_pane_cp4_ParamLimits

0x939b,	// (0x0003ef5b) tabs_2_long_active_pane_t1_ParamLimits

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp4_ParamLimits

0x24e8,	// (0x000380a8) list_single_midp_graphic_pane_t1_ParamLimits

0xba67,	// (0x00041627) bg_active_tab_pane_cp5_ParamLimits

0x93ae,	// (0x0003ef6e) tabs_3_long_active_pane_t1_ParamLimits

0xc385,	// (0x00041f45) bg_passive_tab_pane_cp5_ParamLimits

0x24e8,	// (0x000380a8) list_single_midp_graphic_pane_t1

0x9dc7,	// (0x0003f987) bg_status_flat_pane_ParamLimits

0xd088,	// (0x00042c48) indicator_pane_cp2_ParamLimits

0xd088,	// (0x00042c48) indicator_pane_cp2

0x9f3e,	// (0x0003fafe) navi_pane_srt_ParamLimits

0x9f3e,	// (0x0003fafe) navi_pane_srt

0xd0b0,	// (0x00042c70) popup_clock_digital_analogue_window_cp1

0xbaab,	// (0x0004166b) indicator_pane_t1

0xcc75,	// (0x00042835) copy_highlight_pane

0xcc75,	// (0x00042835) cursor_graphics_pane

0xcc75,	// (0x00042835) graphic_within_text_pane

0xcc75,	// (0x00042835) link_highlight_pane

0xe006,	// (0x00043bc6) popup_preview_text_window_t5_ParamLimits

0xe006,	// (0x00043bc6) popup_preview_text_window_t5

0xccde,	// (0x0004289e) cursor_digital_pane

0xccde,	// (0x0004289e) cursor_primary_pane

0xccef,	// (0x000428af) cursor_primary_small_pane

0xccf7,	// (0x000428b7) cursor_secondary_pane

0xccff,	// (0x000428bf) cursor_title_pane

0xccde,	// (0x0004289e) link_highlight_digital_pane

0xcce6,	// (0x000428a6) link_highlight_primary_pane

0xccef,	// (0x000428af) link_highlight_primary_small_pane

0xccf7,	// (0x000428b7) link_highlight_secondary_pane

0xccff,	// (0x000428bf) link_highlight_title_pane

0xccde,	// (0x0004289e) copy_highlight_digital_pane

0xccde,	// (0x0004289e) copy_highlight_primary_pane

0xccef,	// (0x000428af) copy_highlight_primary_small_pane

0xccf7,	// (0x000428b7) copy_highlight_secondary_pane

0xccff,	// (0x000428bf) copy_highlight_title_pane

0xccf7,	// (0x000428b7) graphic_text_digital_pane

0xd981,	// (0x00043541) graphic_text_primary_pane

0xd98a,	// (0x0004354a) graphic_text_primary_small_pane

0xccef,	// (0x000428af) graphic_text_secondary_pane

0xccde,	// (0x0004289e) graphic_text_title_pane

0x961b,	// (0x0003f1db) cursor_primary_pane_g1

0xd973,	// (0x00043533) cursor_text_primary_t1

0xa1d6,	// (0x0003fd96) cursor_primary_small_pane_g1

0xd965,	// (0x00043525) cursor_text_primary_small_t1

0xa1cc,	// (0x0003fd8c) cursor_primary_small_pane_g1_copy1

0xd957,	// (0x00043517) cursor_text_primary_small_t1_copy1

0xd949,	// (0x00043509) cursor_text_title_t1

0xa1c2,	// (0x0003fd82) cursor_title_pane_g1

0x961b,	// (0x0003f1db) cursor_digital_pane_g1

0xcd07,	// (0x000428c7) cursor_text_digital_t1

0xd8ea,	// (0x000434aa) link_highlight_primary_pane_g1

0xd8f2,	// (0x000434b2) link_highlight_primary_pane_t1

0xcd15,	// (0x000428d5) link_highlight_primary_small_pane_g1

0xcd1d,	// (0x000428dd) link_highlight_primary_small_pane_t1

0xcd15,	// (0x000428d5) link_highlight_secondary_pane_g1

0xcd2c,	// (0x000428ec) link_highlight_secondary_pane_t1

0xd84c,	// (0x0004340c) link_highlight_title_pane_g1

0xd854,	// (0x00043414) link_highlight_title_pane_t1

0xd835,	// (0x000433f5) link_highlight_digital_pane_g1

0xd83d,	// (0x000433fd) link_highlight_digital_pane_t1

0xd729,	// (0x000432e9) copy_highlight_primary_pane_g1

0xd731,	// (0x000432f1) copy_highlight_primary_pane_t1

0xd703,	// (0x000432c3) copy_highlight_primary_small_pane_g1

0xd71a,	// (0x000432da) copy_highlight_primary_small_pane_t1

0xcd3b,	// (0x000428fb) copy_highlight_secondary_pane_g1

0xcd43,	// (0x00042903) copy_highlight_secondary_pane_t1

0xd703,	// (0x000432c3) copy_highlight_title_pane_g1

0xd70b,	// (0x000432cb) copy_highlight_title_pane_t1

0xd729,	// (0x000432e9) copy_highlight_digital_pane_g1

0xe56a,	// (0x0004412a) copy_highlight_digital_pane_t1

0xe4be,	// (0x0004407e) graphic_text_primary_pane_g1

0xe54e,	// (0x0004410e) graphic_text_primary_pane_t1

0xe55c,	// (0x0004411c) graphic_text_primary_pane_t2

0x0001,

0xf987,	// (0x00045547) graphic_text_primary_pane_t

0xe52a,	// (0x000440ea) graphic_text_primary_small_pane_g1

0xe532,	// (0x000440f2) graphic_text_primary_small_pane_t1

0xe540,	// (0x00044100) graphic_text_primary_small_pane_t2

0x0001,

0xf982,	// (0x00045542) graphic_text_primary_small_pane_t

0xe506,	// (0x000440c6) graphic_text_secondary_pane_g1

0xe50e,	// (0x000440ce) graphic_text_secondary_pane_t1

0xe51c,	// (0x000440dc) graphic_text_secondary_pane_t2

0x0001,

0xf97d,	// (0x0004553d) graphic_text_secondary_pane_t

0xe4e2,	// (0x000440a2) graphic_text_title_pane_g1

0xe4ea,	// (0x000440aa) graphic_text_title_pane_t1

0xe4f8,	// (0x000440b8) graphic_text_title_pane_t2

0x0001,

0xf978,	// (0x00045538) graphic_text_title_pane_t

0xe4be,	// (0x0004407e) graphic_text_digital_pane_g1

0xe4c6,	// (0x00044086) graphic_text_digital_pane_t1

0xe4d4,	// (0x00044094) graphic_text_digital_pane_t2

0x0001,

0xf973,	// (0x00045533) graphic_text_digital_pane_t

0xba67,	// (0x00041627) navi_icon_pane_srt_ParamLimits

0xba67,	// (0x00041627) navi_icon_pane_srt

0xba0b,	// (0x000415cb) navi_midp_pane_srt

0xba0b,	// (0x000415cb) navi_navi_pane_srt

0xba67,	// (0x00041627) navi_text_pane_srt_ParamLimits

0xba67,	// (0x00041627) navi_text_pane_srt

0xe489,	// (0x00044049) navi_navi_icon_text_pane_srt

0xe491,	// (0x00044051) navi_navi_pane_srt_g1_ParamLimits

0xe491,	// (0x00044051) navi_navi_pane_srt_g1

0xe4a3,	// (0x00044063) navi_navi_pane_srt_g2_ParamLimits

0xe4a3,	// (0x00044063) navi_navi_pane_srt_g2

0x0001,

0xf96e,	// (0x0004552e) navi_navi_pane_srt_g_ParamLimits

0xf96e,	// (0x0004552e) navi_navi_pane_srt_g

0xe4b5,	// (0x00044075) navi_navi_tabs_pane_srt

0xe489,	// (0x00044049) navi_navi_text_pane_srt

0xe489,	// (0x00044049) navi_navi_volume_pane_srt

0xe47a,	// (0x0004403a) navi_navi_text_pane_srt_t1

0x291e,	// (0x000384de) navi_navi_volume_pane_srt_g1

0x2926,	// (0x000384e6) volume_small_pane_srt_ParamLimits

0x2926,	// (0x000384e6) volume_small_pane_srt

0x222e,	// (0x00037dee) volume_small_pane_srt_g1_ParamLimits

0x222e,	// (0x00037dee) volume_small_pane_srt_g1

0x223e,	// (0x00037dfe) volume_small_pane_srt_g2_ParamLimits

0x223e,	// (0x00037dfe) volume_small_pane_srt_g2

0x224f,	// (0x00037e0f) volume_small_pane_srt_g3_ParamLimits

0x224f,	// (0x00037e0f) volume_small_pane_srt_g3

0x2260,	// (0x00037e20) volume_small_pane_srt_g4_ParamLimits

0x2260,	// (0x00037e20) volume_small_pane_srt_g4

0x2271,	// (0x00037e31) volume_small_pane_srt_g5_ParamLimits

0x2271,	// (0x00037e31) volume_small_pane_srt_g5

0x2282,	// (0x00037e42) volume_small_pane_srt_g6_ParamLimits

0x2282,	// (0x00037e42) volume_small_pane_srt_g6

0x2293,	// (0x00037e53) volume_small_pane_srt_g7_ParamLimits

0x2293,	// (0x00037e53) volume_small_pane_srt_g7

0x22a4,	// (0x00037e64) volume_small_pane_srt_g8_ParamLimits

0x22a4,	// (0x00037e64) volume_small_pane_srt_g8

0x22b5,	// (0x00037e75) volume_small_pane_srt_g9_ParamLimits

0x22b5,	// (0x00037e75) volume_small_pane_srt_g9

0x22c6,	// (0x00037e86) volume_small_pane_srt_g10_ParamLimits

0x22c6,	// (0x00037e86) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004533a) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004533a) volume_small_pane_srt_g

0xbdc2,	// (0x00041982) query_popup_data_pane_cp2

0xe460,	// (0x00044020) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe460,	// (0x00044020) navi_navi_icon_text_pane_srt_t1

0xd981,	// (0x00043541) navi_tabs_2_long_pane_srt

0xd981,	// (0x00043541) navi_tabs_2_pane_srt

0xd981,	// (0x00043541) navi_tabs_3_long_pane_srt

0xd981,	// (0x00043541) navi_tabs_3_pane_srt

0xd981,	// (0x00043541) navi_tabs_4_pane_srt

0x28fe,	// (0x000384be) tabs_2_active_pane_srt_ParamLimits

0x28fe,	// (0x000384be) tabs_2_active_pane_srt

0x290e,	// (0x000384ce) tabs_2_passive_pane_srt_ParamLimits

0x290e,	// (0x000384ce) tabs_2_passive_pane_srt

0xd2a5,	// (0x00042e65) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd2a5,	// (0x00042e65) bg_passive_tab_pane_cp1_srt

0xe43e,	// (0x00043ffe) bg_passive_tab_pane_g1_cp1_srt

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp1_srt

0xe447,	// (0x00044007) bg_passive_tab_pane_g3_cp1_srt

0xba59,	// (0x00041619) bg_active_tab_pane_cp1_srt_ParamLimits

0xba59,	// (0x00041619) bg_active_tab_pane_cp1_srt

0xe450,	// (0x00044010) tabs_2_active_pane_srt_g1

0xa5dc,	// (0x0004019c) tabs_2_active_pane_srt_t1_ParamLimits

0xa5dc,	// (0x0004019c) tabs_2_active_pane_srt_t1

0xe43e,	// (0x00043ffe) bg_active_tab_pane_g1_cp1_srt

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp1_srt

0xe447,	// (0x00044007) bg_active_tab_pane_g3_cp1_srt

0x28cb,	// (0x0003848b) tabs_3_active_pane_srt_ParamLimits

0x28cb,	// (0x0003848b) tabs_3_active_pane_srt

0x28dc,	// (0x0003849c) tabs_3_passive_pane_cp_srt_ParamLimits

0x28dc,	// (0x0003849c) tabs_3_passive_pane_cp_srt

0x28ed,	// (0x000384ad) tabs_3_passive_pane_srt_ParamLimits

0x28ed,	// (0x000384ad) tabs_3_passive_pane_srt

0xd2a5,	// (0x00042e65) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd2a5,	// (0x00042e65) bg_passive_tab_pane_cp2_srt

0xcd52,	// (0x00042912) bg_passive_tab_pane_g1_cp2_srt

0xc91e,	// (0x000424de) bg_passive_tab_pane_g2_cp2_srt

0xcd5b,	// (0x0004291b) bg_passive_tab_pane_g3_cp2_srt

0xba59,	// (0x00041619) bg_active_tab_pane_cp2_srt_ParamLimits

0xba59,	// (0x00041619) bg_active_tab_pane_cp2_srt

0xe436,	// (0x00043ff6) tabs_3_active_pane_srt_g1

0xa5c6,	// (0x00040186) tabs_3_active_pane_srt_t1_ParamLimits

0xa5c6,	// (0x00040186) tabs_3_active_pane_srt_t1

0xcd52,	// (0x00042912) bg_active_tab_pane_g1_cp2_srt

0xc91e,	// (0x000424de) bg_active_tab_pane_g2_cp2_srt

0xcd5b,	// (0x0004291b) bg_active_tab_pane_g3_cp2_srt

0x2883,	// (0x00038443) tabs_4_active_pane_srt_ParamLimits

0x2883,	// (0x00038443) tabs_4_active_pane_srt

0x2895,	// (0x00038455) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2895,	// (0x00038455) tabs_4_passive_pane_cp2_srt

0xce7f,	// (0x00042a3f) aid_size_cell_toolbar

0xd8d8,	// (0x00043498) main_idle_act_pane_ParamLimits

0xcf41,	// (0x00042b01) popup_large_graphic_colour_window_ParamLimits

0x9c92,	// (0x0003f852) popup_toolbar_window_ParamLimits

0x9c92,	// (0x0003f852) popup_toolbar_window

0xe35d,	// (0x00043f1d) list_single_graphic_2heading_pane_ParamLimits

0xe35d,	// (0x00043f1d) list_single_graphic_2heading_pane

0xc52f,	// (0x000420ef) aid_size_cell_apps_grid_lsc_pane

0xc541,	// (0x00042101) aid_size_cell_apps_grid_prt_pane

0xc385,	// (0x00041f45) bg_wml_button_pane_cp1_ParamLimits

0xc385,	// (0x00041f45) bg_wml_button_pane_cp1

0xa172,	// (0x0003fd32) form_midp_field_text_pane_t1_ParamLimits

0xd2a5,	// (0x00042e65) input_focus_pane_cp050_ParamLimits

0xd3ed,	// (0x00042fad) list_midp_form_text_pane_ParamLimits

0xd3ca,	// (0x00042f8a) input_focus_pane_cp051_ParamLimits

0xd3de,	// (0x00042f9e) list_midp_choice_pane_ParamLimits

0xa107,	// (0x0003fcc7) list_single_2graphic_pane_cp3_ParamLimits

0xa107,	// (0x0003fcc7) list_single_2graphic_pane_cp3

0xa11d,	// (0x0003fcdd) list_single_midp_graphic_pane_ParamLimits

0xa11d,	// (0x0003fcdd) list_single_midp_graphic_pane

0x0cdd,	// (0x0003689d) list_single_graphic_2heading_pane_g1_ParamLimits

0x0cdd,	// (0x0003689d) list_single_graphic_2heading_pane_g1

0x0ce9,	// (0x000368a9) list_single_graphic_2heading_pane_g4_ParamLimits

0x0ce9,	// (0x000368a9) list_single_graphic_2heading_pane_g4

0x0cf5,	// (0x000368b5) list_single_graphic_2heading_pane_g5_ParamLimits

0x0cf5,	// (0x000368b5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004538d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004538d) list_single_graphic_2heading_pane_g

0x0d01,	// (0x000368c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x0d01,	// (0x000368c1) list_single_graphic_2heading_pane_t1

0x0d15,	// (0x000368d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x0d15,	// (0x000368d5) list_single_graphic_2heading_pane_t2

0x0d31,	// (0x000368f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x0d31,	// (0x000368f1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00045394) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00045394) list_single_graphic_2heading_pane_t

0xd0f3,	// (0x00042cb3) bg_popup_sub_pane_cp2

0xd11d,	// (0x00042cdd) grid_toobar_pane

0x246d,	// (0x0003802d) cell_toolbar_pane_ParamLimits

0x246d,	// (0x0003802d) cell_toolbar_pane

0xd159,	// (0x00042d19) cell_toolbar_pane_g1_ParamLimits

0xd159,	// (0x00042d19) cell_toolbar_pane_g1

0xd16d,	// (0x00042d2d) cell_toolbar_pane_g2_ParamLimits

0xd16d,	// (0x00042d2d) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x000453a2) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x000453a2) cell_toolbar_pane_g

0xd18f,	// (0x00042d4f) grid_highlight_pane_cp2_ParamLimits

0xd18f,	// (0x00042d4f) grid_highlight_pane_cp2

0xd1a9,	// (0x00042d69) toolbar_button_pane

0xd1b5,	// (0x00042d75) toolbar_button_pane_g1

0xd1bd,	// (0x00042d7d) toolbar_button_pane_g2

0xd1c5,	// (0x00042d85) toolbar_button_pane_g3

0xd1cd,	// (0x00042d8d) toolbar_button_pane_g4

0xd1d5,	// (0x00042d95) toolbar_button_pane_g5

0xd1dd,	// (0x00042d9d) toolbar_button_pane_g6

0xd1e5,	// (0x00042da5) toolbar_button_pane_g7

0xd1ed,	// (0x00042dad) toolbar_button_pane_g8

0xd1f5,	// (0x00042db5) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x000453a7) toolbar_button_pane_g

0x24a5,	// (0x00038065) list_single_2graphic_pane_g1_cp3_ParamLimits

0x24a5,	// (0x00038065) list_single_2graphic_pane_g1_cp3

0x891f,	// (0x0003e4df) list_single_2graphic_pane_g2_cp3_ParamLimits

0x891f,	// (0x0003e4df) list_single_2graphic_pane_g2_cp3

0xcaa1,	// (0x00042661) list_single_2graphic_pane_g3_cp3

0x24c2,	// (0x00038082) list_single_2graphic_pane_g4_cp3_ParamLimits

0x24c2,	// (0x00038082) list_single_2graphic_pane_g4_cp3

0x24ce,	// (0x0003808e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x24ce,	// (0x0003808e) list_single_2graphic_pane_t1_cp3

0xca95,	// (0x00042655) list_single_midp_graphic_pane_g2_ParamLimits

0xca95,	// (0x00042655) list_single_midp_graphic_pane_g2

0x0cc5,	// (0x00036885) aid_zoom_text_primary

0x0ccd,	// (0x0003688d) aid_zoom_text_secondary

0xce0f,	// (0x000429cf) status_small_pane_g7_ParamLimits

0xce0f,	// (0x000429cf) status_small_pane_g7

0xce32,	// (0x000429f2) status_small_pane_t1_ParamLimits

0x8feb,	// (0x0003ebab) title_pane_g2

0x0003,

0xf56a,	// (0x0004512a) title_pane_g

0x9276,	// (0x0003ee36) aid_size_cell_colour_1_pane_ParamLimits

0x9276,	// (0x0003ee36) aid_size_cell_colour_1_pane

0x928a,	// (0x0003ee4a) aid_size_cell_colour_2_pane_ParamLimits

0x928a,	// (0x0003ee4a) aid_size_cell_colour_2_pane

0x929e,	// (0x0003ee5e) aid_size_cell_colour_3_pane_ParamLimits

0x929e,	// (0x0003ee5e) aid_size_cell_colour_3_pane

0x92b2,	// (0x0003ee72) aid_size_cell_colour_4_pane_ParamLimits

0x92b2,	// (0x0003ee72) aid_size_cell_colour_4_pane

0x1c49,	// (0x00037809) title_pane_stacon_g1_ParamLimits

0x1c49,	// (0x00037809) title_pane_stacon_g1

0xd788,	// (0x00043348) popup_note_wait_window_g3_ParamLimits

0xd788,	// (0x00043348) popup_note_wait_window_g3

0xd7fe,	// (0x000433be) popup_note_wait_window_t5_ParamLimits

0xd7fe,	// (0x000433be) popup_note_wait_window_t5

0xba0b,	// (0x000415cb) main_feb_china_hwr_fs_writing_pane

0x96ba,	// (0x0003f27a) popup_feb_china_hwr_fs_window_ParamLimits

0x96ba,	// (0x0003f27a) popup_feb_china_hwr_fs_window

0x8930,	// (0x0003e4f0) aid_size_cell_hwr_fs_ParamLimits

0x8930,	// (0x0003e4f0) aid_size_cell_hwr_fs

0xd2a5,	// (0x00042e65) bg_popup_sub_pane_cp3_ParamLimits

0xd2a5,	// (0x00042e65) bg_popup_sub_pane_cp3

0x8945,	// (0x0003e505) grid_hwr_fs_pane_ParamLimits

0x8945,	// (0x0003e505) grid_hwr_fs_pane

0x252b,	// (0x000380eb) linegrid_hwr_fs_pane_ParamLimits

0x252b,	// (0x000380eb) linegrid_hwr_fs_pane

0x895d,	// (0x0003e51d) cell_hwr_fs_pane_ParamLimits

0x895d,	// (0x0003e51d) cell_hwr_fs_pane

0xd2b1,	// (0x00042e71) linegrid_hwr_fs_pane_g1_ParamLimits

0xd2b1,	// (0x00042e71) linegrid_hwr_fs_pane_g1

0xa0db,	// (0x0003fc9b) linegrid_hwr_fs_pane_g2_ParamLimits

0xa0db,	// (0x0003fc9b) linegrid_hwr_fs_pane_g2

0xd2bd,	// (0x00042e7d) linegrid_hwr_fs_pane_g3_ParamLimits

0xd2bd,	// (0x00042e7d) linegrid_hwr_fs_pane_g3

0x255d,	// (0x0003811d) linegrid_hwr_fs_pane_g4_ParamLimits

0x255d,	// (0x0003811d) linegrid_hwr_fs_pane_g4

0x2577,	// (0x00038137) linegrid_hwr_fs_pane_g5_ParamLimits

0x2577,	// (0x00038137) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x000453cd) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x000453cd) linegrid_hwr_fs_pane_g

0xd2c9,	// (0x00042e89) cell_hwr_fs_pane_g1_ParamLimits

0xd2c9,	// (0x00042e89) cell_hwr_fs_pane_g1

0xd0c1,	// (0x00042c81) cell_hwr_fs_pane_g2_ParamLimits

0xd0c1,	// (0x00042c81) cell_hwr_fs_pane_g2

0xa0ed,	// (0x0003fcad) cell_hwr_fs_pane_g3_ParamLimits

0xa0ed,	// (0x0003fcad) cell_hwr_fs_pane_g3

0xa0fa,	// (0x0003fcba) cell_hwr_fs_pane_g4_ParamLimits

0xa0fa,	// (0x0003fcba) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x000453d8) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x000453d8) cell_hwr_fs_pane_g

0x8983,	// (0x0003e543) cell_hwr_fs_pane_t1

0xba0b,	// (0x000415cb) grid_highlight_pane_cp6

0xba0b,	// (0x000415cb) main_idle_act2_pane

0xc334,	// (0x00041ef4) aid_inside_area_popup_secondary

0xa1f6,	// (0x0003fdb6) aid_inside_area_window_primary_ParamLimits

0xa1f6,	// (0x0003fdb6) aid_inside_area_window_primary

0xe579,	// (0x00044139) ai2_news_ticker_pane

0xe581,	// (0x00044141) aid_size_cell_ai1_link_ParamLimits

0xe581,	// (0x00044141) aid_size_cell_ai1_link

0xe59b,	// (0x0004415b) popup_ai2_data_window_ParamLimits

0xe59b,	// (0x0004415b) popup_ai2_data_window

0xe5af,	// (0x0004416f) popup_ai2_link_window_ParamLimits

0xe5af,	// (0x0004416f) popup_ai2_link_window

0xd2a5,	// (0x00042e65) bg_popup_sub_pane_cp4_ParamLimits

0xd2a5,	// (0x00042e65) bg_popup_sub_pane_cp4

0xe5c3,	// (0x00044183) grid_ai2_link_pane_ParamLimits

0xe5c3,	// (0x00044183) grid_ai2_link_pane

0xe5da,	// (0x0004419a) popup_ai2_link_window_g1_ParamLimits

0xe5da,	// (0x0004419a) popup_ai2_link_window_g1

0xe5e6,	// (0x000441a6) popup_ai2_link_window_g2_ParamLimits

0xe5e6,	// (0x000441a6) popup_ai2_link_window_g2

0x0001,

0xf98c,	// (0x0004554c) popup_ai2_link_window_g_ParamLimits

0xf98c,	// (0x0004554c) popup_ai2_link_window_g

0xe5f5,	// (0x000441b5) ai2_mp_button_pane

0xe5fd,	// (0x000441bd) ai2_mp_volume_pane

0xd3ca,	// (0x00042f8a) bg_popup_sub_pane_cp5_ParamLimits

0xd3ca,	// (0x00042f8a) bg_popup_sub_pane_cp5

0xe605,	// (0x000441c5) heading_ai2_gene_pane_ParamLimits

0xe605,	// (0x000441c5) heading_ai2_gene_pane

0xe611,	// (0x000441d1) list_ai2_gene_pane_ParamLimits

0xe611,	// (0x000441d1) list_ai2_gene_pane

0xe659,	// (0x00044219) cell_ai2_link_pane_ParamLimits

0xe659,	// (0x00044219) cell_ai2_link_pane

0xe66f,	// (0x0004422f) cell_ai2_link_pane_g1

0xba0b,	// (0x000415cb) grid_highlight_pane_cp7

0x293b,	// (0x000384fb) ai2_mp_volume_pane_g1

0xe740,	// (0x00044300) ai2_mp_volume_pane_g2

0xe6b5,	// (0x00044275) list_ai2_gene_pane_t1

0xe748,	// (0x00044308) ai2_mp_volume_pane_g3

0x0002,

0xf9a5,	// (0x00045565) ai2_mp_volume_pane_g

0x2943,	// (0x00038503) volume_small_pane_cp3

0xe750,	// (0x00044310) aid_size_cell_ai2_button

0xe758,	// (0x00044318) grid_ai2_button_pane

0xe761,	// (0x00044321) cell_ai2_button_pane_ParamLimits

0xe761,	// (0x00044321) cell_ai2_button_pane

0xba01,	// (0x000415c1) cell_ai2_button_pane_g1

0xba0b,	// (0x000415cb) grid_highlight_pane_cp8

0xe700,	// (0x000442c0) ai2_gene_pane_t1_ParamLimits

0xe700,	// (0x000442c0) ai2_gene_pane_t1

0x964c,	// (0x0003f20c) aid_height_parent_landscape

0xa395,	// (0x0003ff55) aid_height_set_list

0xd8d8,	// (0x00043498) aid_size_parent

0xe3e0,	// (0x00043fa0) aid_size_cell_graphic_pane_ParamLimits

0xe621,	// (0x000441e1) popup_ai2_data_window_g1_ParamLimits

0xe621,	// (0x000441e1) popup_ai2_data_window_g1

0xe62d,	// (0x000441ed) ai2_news_ticker_pane_g1

0xe635,	// (0x000441f5) ai2_news_ticker_pane_g2

0x0001,

0xf991,	// (0x00045551) ai2_news_ticker_pane_g

0xe63d,	// (0x000441fd) ai2_news_ticker_pane_t1

0xe64b,	// (0x0004420b) ai2_news_ticker_pane_t2

0x0001,

0xf996,	// (0x00045556) ai2_news_ticker_pane_t

0xe678,	// (0x00044238) heading_ai2_gene_pane_g1

0xe680,	// (0x00044240) heading_ai2_gene_pane_t1_ParamLimits

0xe680,	// (0x00044240) heading_ai2_gene_pane_t1

0xe695,	// (0x00044255) list_highlight_pane_cp6

0xe69d,	// (0x0004425d) ai2_gene_pane_ParamLimits

0xe69d,	// (0x0004425d) ai2_gene_pane

0xe6c3,	// (0x00044283) list_ai2_gene_pane_t2

0x0001,

0xf99b,	// (0x0004555b) list_ai2_gene_pane_t

0xe6d1,	// (0x00044291) list_highlight_pane_cp8_ParamLimits

0xe6d1,	// (0x00044291) list_highlight_pane_cp8

0xe6e2,	// (0x000442a2) ai2_gene_pane_g1_ParamLimits

0xe6e2,	// (0x000442a2) ai2_gene_pane_g1

0xe6f4,	// (0x000442b4) ai2_gene_pane_g2_ParamLimits

0xe6f4,	// (0x000442b4) ai2_gene_pane_g2

0x0001,

0xf9a0,	// (0x00045560) ai2_gene_pane_g_ParamLimits

0xf9a0,	// (0x00045560) ai2_gene_pane_g

0xc1c4,	// (0x00041d84) scroll_pane_cp12

0x88c0,	// (0x0003e480) control_pane_t3_ParamLimits

0x88c0,	// (0x0003e480) control_pane_t3

0xce23,	// (0x000429e3) status_small_pane_g8_ParamLimits

0xce23,	// (0x000429e3) status_small_pane_g8

0x974d,	// (0x0003f30d) popup_find_window_ParamLimits

0x99c8,	// (0x0003f588) popup_note_image_window_ParamLimits

0x0d49,	// (0x00036909) list_double2_graphic_pane_vc_g1_ParamLimits

0x0d49,	// (0x00036909) list_double2_graphic_pane_vc_g1

0x1ac2,	// (0x00037682) list_double2_graphic_pane_vc_g2_ParamLimits

0x1ac2,	// (0x00037682) list_double2_graphic_pane_vc_g2

0x1ace,	// (0x0003768e) list_double2_graphic_pane_vc_g3_ParamLimits

0x1ace,	// (0x0003768e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004539b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004539b) list_double2_graphic_pane_vc_g

0x0d55,	// (0x00036915) list_double2_graphic_pane_vc_t1_ParamLimits

0x0d55,	// (0x00036915) list_double2_graphic_pane_vc_t1

0x1ac2,	// (0x00037682) list_single_heading_pane_vc_g1_ParamLimits

0x1ac2,	// (0x00037682) list_single_heading_pane_vc_g1

0x1ace,	// (0x0003768e) list_single_heading_pane_vc_g2_ParamLimits

0x1ace,	// (0x0003768e) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x000451ae) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x000451ae) list_single_heading_pane_vc_g

0x0d6b,	// (0x0003692b) list_single_heading_pane_vc_t1_ParamLimits

0x0d6b,	// (0x0003692b) list_single_heading_pane_vc_t1

0x0d81,	// (0x00036941) list_single_heading_pane_vc_t2_ParamLimits

0x0d81,	// (0x00036941) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x000453bc) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x000453bc) list_single_heading_pane_vc_t

0xd1fd,	// (0x00042dbd) list_setting_number_pane_vc_g1_ParamLimits

0xd1fd,	// (0x00042dbd) list_setting_number_pane_vc_g1

0xd209,	// (0x00042dc9) list_setting_number_pane_vc_g2_ParamLimits

0xd209,	// (0x00042dc9) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x000453c1) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x000453c1) list_setting_number_pane_vc_g

0xd215,	// (0x00042dd5) list_setting_number_pane_vc_t1_ParamLimits

0xd215,	// (0x00042dd5) list_setting_number_pane_vc_t1

0xd229,	// (0x00042de9) list_setting_number_pane_vc_t2_ParamLimits

0xd229,	// (0x00042de9) list_setting_number_pane_vc_t2

0xd245,	// (0x00042e05) list_setting_number_pane_vc_t3_ParamLimits

0xd245,	// (0x00042e05) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x000453c6) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x000453c6) list_setting_number_pane_vc_t

0xd26d,	// (0x00042e2d) set_value_pane_vc_ParamLimits

0xd26d,	// (0x00042e2d) set_value_pane_vc

0xe35d,	// (0x00043f1d) list_double2_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double2_graphic_pane_vc

0xe35d,	// (0x00043f1d) list_double2_large_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double2_large_graphic_pane_vc

0xe35d,	// (0x00043f1d) list_double2_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double2_pane_vc

0xe35d,	// (0x00043f1d) list_double_graphic_heading_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_graphic_heading_pane_vc

0xe35d,	// (0x00043f1d) list_double_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_graphic_pane_vc

0xe35d,	// (0x00043f1d) list_double_heading_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_heading_pane_vc

0xe35d,	// (0x00043f1d) list_double_large_graphic_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_large_graphic_pane_vc

0xe35d,	// (0x00043f1d) list_double_number_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_number_pane_vc

0xe35d,	// (0x00043f1d) list_double_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_pane_vc

0xe35d,	// (0x00043f1d) list_double_time_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_double_time_pane_vc

0xe35d,	// (0x00043f1d) list_setting_number_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_setting_number_pane_vc

0xe35d,	// (0x00043f1d) list_setting_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_setting_pane_vc

0xe35d,	// (0x00043f1d) list_single_graphic_heading_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_single_graphic_heading_pane_vc

0xe35d,	// (0x00043f1d) list_single_heading_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_single_heading_pane_vc

0xe35d,	// (0x00043f1d) list_single_number_heading_pane_vc_ParamLimits

0xe35d,	// (0x00043f1d) list_single_number_heading_pane_vc

0x0d49,	// (0x00036909) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0d49,	// (0x00036909) list_double_graphic_heading_pane_vc_g1

0x1ac2,	// (0x00037682) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1ac2,	// (0x00037682) list_double_graphic_heading_pane_vc_g2

0x1ace,	// (0x0003768e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1ace,	// (0x0003768e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0004539b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004539b) list_double_graphic_heading_pane_vc_g

0x0e88,	// (0x00036a48) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0e88,	// (0x00036a48) list_double_graphic_heading_pane_vc_t1

0x0d6b,	// (0x0003692b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0d6b,	// (0x0003692b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ac,	// (0x0004556c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ac,	// (0x0004556c) list_double_graphic_heading_pane_vc_t

0xd1fd,	// (0x00042dbd) list_setting_pane_vc_g1_ParamLimits

0xd1fd,	// (0x00042dbd) list_setting_pane_vc_g1

0xd209,	// (0x00042dc9) list_setting_pane_vc_g2_ParamLimits

0xd209,	// (0x00042dc9) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x000453c1) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x000453c1) list_setting_pane_vc_g

0xe957,	// (0x00044517) list_setting_pane_vc_t1_ParamLimits

0xe957,	// (0x00044517) list_setting_pane_vc_t1

0xe96b,	// (0x0004452b) list_setting_pane_vc_t2_ParamLimits

0xe96b,	// (0x0004452b) list_setting_pane_vc_t2

0x0001,

0xf9ef,	// (0x000455af) list_setting_pane_vc_t_ParamLimits

0xf9ef,	// (0x000455af) list_setting_pane_vc_t

0xd26d,	// (0x00042e2d) set_value_pane_cp_vc_ParamLimits

0xd26d,	// (0x00042e2d) set_value_pane_cp_vc

0x1ac2,	// (0x00037682) list_single_number_heading_pane_vc_g1_ParamLimits

0x1ac2,	// (0x00037682) list_single_number_heading_pane_vc_g1

0x1ace,	// (0x0003768e) list_single_number_heading_pane_vc_g2_ParamLimits

0x1ace,	// (0x0003768e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x000451ae) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x000451ae) list_single_number_heading_pane_vc_g

0x0d6b,	// (0x0003692b) list_single_number_heading_pane_vc_t1_ParamLimits

0x0d6b,	// (0x0003692b) list_single_number_heading_pane_vc_t1

0x0e9c,	// (0x00036a5c) list_single_number_heading_pane_vc_t2_ParamLimits

0x0e9c,	// (0x00036a5c) list_single_number_heading_pane_vc_t2

0x0eb0,	// (0x00036a70) list_single_number_heading_pane_vc_t3_ParamLimits

0x0eb0,	// (0x00036a70) list_single_number_heading_pane_vc_t3

0x0002,

0xf9f4,	// (0x000455b4) list_single_number_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x000455b4) list_single_number_heading_pane_vc_t

0x0d49,	// (0x00036909) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0d49,	// (0x00036909) list_single_graphic_heading_pane_vc_g1

0x1ac2,	// (0x00037682) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1ac2,	// (0x00037682) list_single_graphic_heading_pane_vc_g4

0x1ace,	// (0x0003768e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1ace,	// (0x0003768e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004539b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004539b) list_single_graphic_heading_pane_vc_g

0x0d6b,	// (0x0003692b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0d6b,	// (0x0003692b) list_single_graphic_heading_pane_vc_t1

0x0ec2,	// (0x00036a82) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0ec2,	// (0x00036a82) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x000455bb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x000455bb) list_single_graphic_heading_pane_vc_t

0x1ac2,	// (0x00037682) list_double2_pane_vc_g1_ParamLimits

0x1ac2,	// (0x00037682) list_double2_pane_vc_g1

0x1ace,	// (0x0003768e) list_double2_pane_vc_g2_ParamLimits

0x1ace,	// (0x0003768e) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x000451ae) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x000451ae) list_double2_pane_vc_g

0x0ed6,	// (0x00036a96) list_double2_pane_vc_t1_ParamLimits

0x0ed6,	// (0x00036a96) list_double2_pane_vc_t1

0x299d,	// (0x0003855d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x299d,	// (0x0003855d) list_double2_large_graphic_pane_vc_g1

0x1ac2,	// (0x00037682) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1ac2,	// (0x00037682) list_double2_large_graphic_pane_vc_g2

0x1ace,	// (0x0003768e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1ace,	// (0x0003768e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x000451c6) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x000451c6) list_double2_large_graphic_pane_vc_g

0x0eec,	// (0x00036aac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0eec,	// (0x00036aac) list_double2_large_graphic_pane_vc_t1

0x29a9,	// (0x00038569) list_double_time_pane_vc_g1_ParamLimits

0x29a9,	// (0x00038569) list_double_time_pane_vc_g1

0x29b5,	// (0x00038575) list_double_time_pane_vc_g2_ParamLimits

0x29b5,	// (0x00038575) list_double_time_pane_vc_g2

0x0001,

0xfa00,	// (0x000455c0) list_double_time_pane_vc_g_ParamLimits

0xfa00,	// (0x000455c0) list_double_time_pane_vc_g

0x0f02,	// (0x00036ac2) list_double_time_pane_vc_t1_ParamLimits

0x0f02,	// (0x00036ac2) list_double_time_pane_vc_t1

0x0f1b,	// (0x00036adb) list_double_time_pane_vc_t2_ParamLimits

0x0f1b,	// (0x00036adb) list_double_time_pane_vc_t2

0x0f5b,	// (0x00036b1b) list_double_time_pane_vc_t3_ParamLimits

0x0f5b,	// (0x00036b1b) list_double_time_pane_vc_t3

0x0f73,	// (0x00036b33) list_double_time_pane_vc_t4_ParamLimits

0x0f73,	// (0x00036b33) list_double_time_pane_vc_t4

0x0003,

0xfa05,	// (0x000455c5) list_double_time_pane_vc_t_ParamLimits

0xfa05,	// (0x000455c5) list_double_time_pane_vc_t

0x1ac2,	// (0x00037682) list_double_pane_vc_g1_ParamLimits

0x1ac2,	// (0x00037682) list_double_pane_vc_g1

0x1ace,	// (0x0003768e) list_double_pane_vc_g2_ParamLimits

0x1ace,	// (0x0003768e) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x000451ae) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x000451ae) list_double_pane_vc_g

0x0f87,	// (0x00036b47) list_double_pane_vc_t1_ParamLimits

0x0f87,	// (0x00036b47) list_double_pane_vc_t1

0x0f99,	// (0x00036b59) list_double_pane_vc_t2_ParamLimits

0x0f99,	// (0x00036b59) list_double_pane_vc_t2

0x0001,

0xfa0e,	// (0x000455ce) list_double_pane_vc_t_ParamLimits

0xfa0e,	// (0x000455ce) list_double_pane_vc_t

0x1ac2,	// (0x00037682) list_double_number_pane_vc_g1_ParamLimits

0x1ac2,	// (0x00037682) list_double_number_pane_vc_g1

0x1ace,	// (0x0003768e) list_double_number_pane_vc_g2_ParamLimits

0x1ace,	// (0x0003768e) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x000451ae) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x000451ae) list_double_number_pane_vc_g

0x0fb1,	// (0x00036b71) list_double_number_pane_vc_t1_ParamLimits

0x0fb1,	// (0x00036b71) list_double_number_pane_vc_t1

0x0fc5,	// (0x00036b85) list_double_number_pane_vc_t2_ParamLimits

0x0fc5,	// (0x00036b85) list_double_number_pane_vc_t2

0x0f99,	// (0x00036b59) list_double_number_pane_vc_t3_ParamLimits

0x0f99,	// (0x00036b59) list_double_number_pane_vc_t3

0x0002,

0xfa13,	// (0x000455d3) list_double_number_pane_vc_t_ParamLimits

0xfa13,	// (0x000455d3) list_double_number_pane_vc_t

0x29c1,	// (0x00038581) list_double_large_graphic_pane_vc_g1_ParamLimits

0x29c1,	// (0x00038581) list_double_large_graphic_pane_vc_g1

0x29cd,	// (0x0003858d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x29cd,	// (0x0003858d) list_double_large_graphic_pane_vc_g2

0x1ace,	// (0x0003768e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1ace,	// (0x0003768e) list_double_large_graphic_pane_vc_g3

0x0fd7,	// (0x00036b97) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0fd7,	// (0x00036b97) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa1a,	// (0x000455da) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa1a,	// (0x000455da) list_double_large_graphic_pane_vc_g

0x0fe3,	// (0x00036ba3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0fe3,	// (0x00036ba3) list_double_large_graphic_pane_vc_t1

0x0ff5,	// (0x00036bb5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0ff5,	// (0x00036bb5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa23,	// (0x000455e3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa23,	// (0x000455e3) list_double_large_graphic_pane_vc_t

0x1ac2,	// (0x00037682) list_double_heading_pane_vc_g1_ParamLimits

0x1ac2,	// (0x00037682) list_double_heading_pane_vc_g1

0x1ace,	// (0x0003768e) list_double_heading_pane_vc_g2_ParamLimits

0x1ace,	// (0x0003768e) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x000451ae) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x000451ae) list_double_heading_pane_vc_g

0x100e,	// (0x00036bce) list_double_heading_pane_vc_t1_ParamLimits

0x100e,	// (0x00036bce) list_double_heading_pane_vc_t1

0x0d6b,	// (0x0003692b) list_double_heading_pane_vc_t2_ParamLimits

0x0d6b,	// (0x0003692b) list_double_heading_pane_vc_t2

0x0001,

0xfa28,	// (0x000455e8) list_double_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x000455e8) list_double_heading_pane_vc_t

0x0d49,	// (0x00036909) list_double_graphic_pane_vc_g1_ParamLimits

0x0d49,	// (0x00036909) list_double_graphic_pane_vc_g1

0x29dc,	// (0x0003859c) list_double_graphic_pane_vc_g2_ParamLimits

0x29dc,	// (0x0003859c) list_double_graphic_pane_vc_g2

0x29eb,	// (0x000385ab) list_double_graphic_pane_vc_g3_ParamLimits

0x29eb,	// (0x000385ab) list_double_graphic_pane_vc_g3

0x0002,

0xfa2d,	// (0x000455ed) list_double_graphic_pane_vc_g_ParamLimits

0xfa2d,	// (0x000455ed) list_double_graphic_pane_vc_g

0x1022,	// (0x00036be2) list_double_graphic_pane_vc_t1_ParamLimits

0x1022,	// (0x00036be2) list_double_graphic_pane_vc_t1

0x0f99,	// (0x00036b59) list_double_graphic_pane_vc_t2_ParamLimits

0x0f99,	// (0x00036b59) list_double_graphic_pane_vc_t2

0x0001,

0xfa34,	// (0x000455f4) list_double_graphic_pane_vc_t_ParamLimits

0xfa34,	// (0x000455f4) list_double_graphic_pane_vc_t

0x13ce,	// (0x00036f8e) aid_size_cell_fastswap

0x8586,	// (0x0003e146) aid_size_cell_touch_ParamLimits

0x8586,	// (0x0003e146) aid_size_cell_touch

0x1631,	// (0x000371f1) popup_fast_swap_wide_window_ParamLimits

0x1631,	// (0x000371f1) popup_fast_swap_wide_window

0x86d1,	// (0x0003e291) touch_pane_ParamLimits

0x86d1,	// (0x0003e291) touch_pane

0xc21a,	// (0x00041dda) button_value_adjust_pane_cp2

0x0a00,	// (0x000365c0) button_value_adjust_pane_cp4

0x0a20,	// (0x000365e0) form_field_data_pane_cp2

0x8248,	// (0x0003de08) form_field_data_wide_pane_cp2

0xc57d,	// (0x0004213d) bg_scroll_pane_ParamLimits

0x1e31,	// (0x000379f1) scroll_handle_pane_ParamLimits

0x1e45,	// (0x00037a05) scroll_sc2_down_pane_ParamLimits

0x1e45,	// (0x00037a05) scroll_sc2_down_pane

0xc5ae,	// (0x0004216e) scroll_sc2_up_pane_ParamLimits

0xc5ae,	// (0x0004216e) scroll_sc2_up_pane

0xa713,	// (0x000402d3) grid_wheel_folder_pane_g1_ParamLimits

0xa713,	// (0x000402d3) grid_wheel_folder_pane_g1

0x20d7,	// (0x00037c97) clock_nsta_pane_cp2_ParamLimits

0x20d7,	// (0x00037c97) clock_nsta_pane_cp2

0x955d,	// (0x0003f11d) listscroll_midp_pane_ParamLimits

0x956e,	// (0x0003f12e) midp_canvas_pane

0xce77,	// (0x00042a37) nsta_clock_indic_pane

0xcea7,	// (0x00042a67) listscroll_form_pane_vc

0xceaf,	// (0x00042a6f) listscroll_set_pane_vc_ParamLimits

0xceaf,	// (0x00042a6f) listscroll_set_pane_vc

0x9def,	// (0x0003f9af) clock_nsta_pane

0x9e19,	// (0x0003f9d9) indicator_nsta_pane

0xd0f3,	// (0x00042cb3) bg_popup_sub_pane_cp2_ParamLimits

0xd107,	// (0x00042cc7) find_pane_cp2_ParamLimits

0xd107,	// (0x00042cc7) find_pane_cp2

0xd11d,	// (0x00042cdd) grid_toobar_pane_ParamLimits

0xd279,	// (0x00042e39) list_form_gen_pane_vc_ParamLimits

0xd279,	// (0x00042e39) list_form_gen_pane_vc

0xd28f,	// (0x00042e4f) scroll_pane_cp8_vc_ParamLimits

0xd28f,	// (0x00042e4f) scroll_pane_cp8_vc

0xd2df,	// (0x00042e9f) data_form_wide_pane_vc_ParamLimits

0xd2df,	// (0x00042e9f) data_form_wide_pane_vc

0xd2eb,	// (0x00042eab) form_field_data_wide_pane_vc_g1

0xd2f3,	// (0x00042eb3) form_field_data_wide_pane_vc_t1_ParamLimits

0xd2f3,	// (0x00042eb3) form_field_data_wide_pane_vc_t1

0xc22e,	// (0x00041dee) input_focus_pane_cp6_vc_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_cp6_vc

0xa196,	// (0x0003fd56) list_midp_pane_ParamLimits

0xe166,	// (0x00043d26) scroll_pane_cp16_ParamLimits

0xe166,	// (0x00043d26) scroll_pane_cp16

0xd562,	// (0x00043122) button_value_adjust_pane_ParamLimits

0xd562,	// (0x00043122) button_value_adjust_pane

0xa3a6,	// (0x0003ff66) button_value_adjust_pane_cp6_ParamLimits

0xa3a6,	// (0x0003ff66) button_value_adjust_pane_cp6

0xa4bc,	// (0x0004007c) settings_code_pane_cp_ParamLimits

0xa4bc,	// (0x0004007c) settings_code_pane_cp

0xba01,	// (0x000415c1) cell_touch_pane_g1

0xba01,	// (0x000415c1) cell_touch_pane_g2

0x0001,

0xf724,	// (0x000452e4) cell_touch_pane_g

0xa5f2,	// (0x000401b2) cell_touch_pane_cp_ParamLimits

0xa5f2,	// (0x000401b2) cell_touch_pane_cp

0xa60e,	// (0x000401ce) cell_touch_pane_ParamLimits

0xa60e,	// (0x000401ce) cell_touch_pane

0xba01,	// (0x000415c1) scroll_sc2_down_pane_g1

0xba01,	// (0x000415c1) scroll_sc2_up_pane_g1

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp4_vc

0xe773,	// (0x00044333) list_set_graphic_pane_vc_g1_ParamLimits

0xe773,	// (0x00044333) list_set_graphic_pane_vc_g1

0xe77f,	// (0x0004433f) list_set_graphic_pane_vc_g2_ParamLimits

0xe77f,	// (0x0004433f) list_set_graphic_pane_vc_g2

0x0001,

0xf9b1,	// (0x00045571) list_set_graphic_pane_vc_g_ParamLimits

0xf9b1,	// (0x00045571) list_set_graphic_pane_vc_g

0xe78b,	// (0x0004434b) text_primary_small_cp13_vc_ParamLimits

0xe78b,	// (0x0004434b) text_primary_small_cp13_vc

0xe7a3,	// (0x00044363) list_set_graphic_pane_vc_ParamLimits

0xe7a3,	// (0x00044363) list_set_graphic_pane_vc

0xba0b,	// (0x000415cb) input_focus_pane_cp2_vc

0xba01,	// (0x000415c1) setting_code_pane_vc_g1

0xe7b7,	// (0x00044377) setting_code_pane_vc_t1

0xe7c5,	// (0x00044385) set_text_pane_vc_t1_ParamLimits

0xe7c5,	// (0x00044385) set_text_pane_vc_t1

0xba0b,	// (0x000415cb) input_focus_pane_cp1_vc

0xe7e4,	// (0x000443a4) list_set_text_pane_vc

0xba01,	// (0x000415c1) setting_text_pane_vc_g1

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp2_vc

0xe7ee,	// (0x000443ae) setting_slider_graphic_pane_vc_g1

0xe7f6,	// (0x000443b6) setting_slider_graphic_pane_vc_t1

0xe804,	// (0x000443c4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9b6,	// (0x00045576) setting_slider_graphic_pane_vc_t

0xe812,	// (0x000443d2) slider_set_pane_cp_vc

0xe81a,	// (0x000443da) slider_set_pane_vc_g1

0xe823,	// (0x000443e3) slider_set_pane_vc_g2

0x0006,

0xf9bb,	// (0x0004557b) slider_set_pane_vc_g

0xc295,	// (0x00041e55) set_opt_bg_pane_g1_copy1

0xc29d,	// (0x00041e5d) set_opt_bg_pane_g2_copy1

0xe84f,	// (0x0004440f) set_opt_bg_pane_g3_copy1

0xc2ad,	// (0x00041e6d) set_opt_bg_pane_g4_copy1

0xc2b5,	// (0x00041e75) set_opt_bg_pane_g5_copy1

0xc2bd,	// (0x00041e7d) set_opt_bg_pane_g6_copy1

0xe857,	// (0x00044417) set_opt_bg_pane_g7_copy1

0xe861,	// (0x00044421) set_opt_bg_pane_g8_copy1

0xe869,	// (0x00044429) set_opt_bg_pane_g9_copy1

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp_vc

0xe871,	// (0x00044431) setting_slider_pane_vc_t1

0xe7f6,	// (0x000443b6) setting_slider_pane_vc_t2

0xe804,	// (0x000443c4) setting_slider_pane_vc_t3

0x0002,

0xf9ca,	// (0x0004558a) setting_slider_pane_vc_t

0xe812,	// (0x000443d2) slider_set_pane_vc

0x259b,	// (0x0003815b) volume_set_pane_vc_g1

0x294c,	// (0x0003850c) volume_set_pane_vc_g2

0x2955,	// (0x00038515) volume_set_pane_vc_g3

0x295e,	// (0x0003851e) volume_set_pane_vc_g4

0x2967,	// (0x00038527) volume_set_pane_vc_g5

0x2970,	// (0x00038530) volume_set_pane_vc_g6

0x2979,	// (0x00038539) volume_set_pane_vc_g7

0x2982,	// (0x00038542) volume_set_pane_vc_g8

0x298b,	// (0x0003854b) volume_set_pane_vc_g9

0x2994,	// (0x00038554) volume_set_pane_vc_g10

0x0009,

0xf9d1,	// (0x00045591) volume_set_pane_vc_g

0xe880,	// (0x00044440) volume_set_pane_vc

0xe888,	// (0x00044448) button_value_adjust_pane_cp1_vc

0xe892,	// (0x00044452) list_highlight_pane_cp2_vc

0xe89b,	// (0x0004445b) list_set_pane_vc_ParamLimits

0xe89b,	// (0x0004445b) list_set_pane_vc

0xe8ed,	// (0x000444ad) main_pane_set_vc_t1_ParamLimits

0xe8ed,	// (0x000444ad) main_pane_set_vc_t1

0xe902,	// (0x000444c2) main_pane_set_vc_t2_ParamLimits

0xe902,	// (0x000444c2) main_pane_set_vc_t2

0xe914,	// (0x000444d4) main_pane_set_vc_t3_ParamLimits

0xe914,	// (0x000444d4) main_pane_set_vc_t3

0xe926,	// (0x000444e6) main_pane_set_vc_t4_ParamLimits

0xe926,	// (0x000444e6) main_pane_set_vc_t4

0x0003,

0xf9e6,	// (0x000455a6) main_pane_set_vc_t_ParamLimits

0xf9e6,	// (0x000455a6) main_pane_set_vc_t

0xe938,	// (0x000444f8) setting_code_pane_vc_ParamLimits

0xe938,	// (0x000444f8) setting_code_pane_vc

0xe947,	// (0x00044507) setting_slider_graphic_pane_vc

0xe947,	// (0x00044507) setting_slider_pane_vc

0xe947,	// (0x00044507) setting_text_pane_vc

0xe947,	// (0x00044507) setting_volume_pane_vc

0xe94f,	// (0x0004450f) scroll_pane_cp121_vc

0xc208,	// (0x00041dc8) set_content_pane_vc

0xe98d,	// (0x0004454d) button_value_adjust_pane_g1

0xe996,	// (0x00044556) button_value_adjust_pane_g2

0x0001,

0xfa39,	// (0x000455f9) button_value_adjust_pane_g

0xe99f,	// (0x0004455f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe99f,	// (0x0004455f) form_field_slider_wide_pane_vc_t1

0xe9b3,	// (0x00044573) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe9b3,	// (0x00044573) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa3e,	// (0x000455fe) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa3e,	// (0x000455fe) form_field_slider_wide_pane_vc_t

0xba59,	// (0x00041619) input_focus_pane_cp10_vc_ParamLimits

0xba59,	// (0x00041619) input_focus_pane_cp10_vc

0xe9c5,	// (0x00044585) slider_cont_pane_cp1_vc_ParamLimits

0xe9c5,	// (0x00044585) slider_cont_pane_cp1_vc

0xe81a,	// (0x000443da) slider_form_pane_g1_cp2

0xe823,	// (0x000443e3) slider_form_pane_g2_cp2

0xe9de,	// (0x0004459e) form_field_slider_pane_vc_t3

0xe9ec,	// (0x000445ac) form_field_slider_pane_vc_t4

0xe9fa,	// (0x000445ba) slider_form_pane_vc_ParamLimits

0xe9fa,	// (0x000445ba) slider_form_pane_vc

0xea07,	// (0x000445c7) form_field_slider_pane_vc_t1_ParamLimits

0xea07,	// (0x000445c7) form_field_slider_pane_vc_t1

0xe9b3,	// (0x00044573) form_field_slider_pane_vc_t2_ParamLimits

0xe9b3,	// (0x00044573) form_field_slider_pane_vc_t2

0x0001,

0xfa4e,	// (0x0004560e) form_field_slider_pane_vc_t_ParamLimits

0xfa4e,	// (0x0004560e) form_field_slider_pane_vc_t

0xba59,	// (0x00041619) input_focus_pane_cp9_vc_ParamLimits

0xba59,	// (0x00041619) input_focus_pane_cp9_vc

0xea23,	// (0x000445e3) slider_cont_pane_vc_ParamLimits

0xea23,	// (0x000445e3) slider_cont_pane_vc

0xea35,	// (0x000445f5) list_form_graphic_pane_cp_vc_ParamLimits

0xea35,	// (0x000445f5) list_form_graphic_pane_cp_vc

0xd2eb,	// (0x00042eab) form_field_popup_wide_pane_vc_g1

0xea4a,	// (0x0004460a) form_field_popup_wide_pane_vc_t1_ParamLimits

0xea4a,	// (0x0004460a) form_field_popup_wide_pane_vc_t1

0xc22e,	// (0x00041dee) input_focus_pane_cp8_vc_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_cp8_vc

0xea61,	// (0x00044621) list_form_wide_pane_vc_ParamLimits

0xea61,	// (0x00044621) list_form_wide_pane_vc

0xea6d,	// (0x0004462d) list_form_graphic_pane_vc_g1

0xea75,	// (0x00044635) list_form_graphic_pane_vc_t1_ParamLimits

0xea75,	// (0x00044635) list_form_graphic_pane_vc_t1

0xba67,	// (0x00041627) list_highlight_pane_cp5_vc_ParamLimits

0xba67,	// (0x00041627) list_highlight_pane_cp5_vc

0xea91,	// (0x00044651) list_form_graphic_pane_vc_ParamLimits

0xea91,	// (0x00044651) list_form_graphic_pane_vc

0xd2eb,	// (0x00042eab) form_field_popup_pane_vc_g1

0xeaa7,	// (0x00044667) form_field_popup_pane_vc_t1_ParamLimits

0xeaa7,	// (0x00044667) form_field_popup_pane_vc_t1

0xc22e,	// (0x00041dee) input_focus_pane_cp7_vc_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_cp7_vc

0xeabe,	// (0x0004467e) list_form_pane_vc_ParamLimits

0xeabe,	// (0x0004467e) list_form_pane_vc

0xeaca,	// (0x0004468a) data_form_pane_vc_t1_ParamLimits

0xeaca,	// (0x0004468a) data_form_pane_vc_t1

0xc295,	// (0x00041e55) input_focus_pane_vc_g1

0xc29d,	// (0x00041e5d) input_focus_pane_vc_g2

0xc2a5,	// (0x00041e65) input_focus_pane_vc_g3

0xc2ad,	// (0x00041e6d) input_focus_pane_vc_g4

0xc2b5,	// (0x00041e75) input_focus_pane_vc_g5

0xc2bd,	// (0x00041e7d) input_focus_pane_vc_g6

0xc2c5,	// (0x00041e85) input_focus_pane_vc_g7

0xc2cd,	// (0x00041e8d) input_focus_pane_vc_g8

0xc2d5,	// (0x00041e95) input_focus_pane_vc_g9

0xba01,	// (0x000415c1) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0004526d) input_focus_pane_vc_g

0xd2df,	// (0x00042e9f) data_form_pane_vc_ParamLimits

0xd2df,	// (0x00042e9f) data_form_pane_vc

0xd2eb,	// (0x00042eab) form_field_data_pane_vc_g1

0xeae5,	// (0x000446a5) form_field_data_pane_vc_t1_ParamLimits

0xeae5,	// (0x000446a5) form_field_data_pane_vc_t1

0xc22e,	// (0x00041dee) input_focus_pane_vc_ParamLimits

0xc22e,	// (0x00041dee) input_focus_pane_vc

0xeaff,	// (0x000446bf) button_value_adjust_pane_cp3_vc

0xeb07,	// (0x000446c7) button_value_adjust_pane_cp5_vc

0xeb0f,	// (0x000446cf) form_field_data_pane_vc_ParamLimits

0xeb0f,	// (0x000446cf) form_field_data_pane_vc

0xeb26,	// (0x000446e6) form_field_data_pane_vc_cp2

0xeb2e,	// (0x000446ee) form_field_data_wide_pane_vc_ParamLimits

0xeb2e,	// (0x000446ee) form_field_data_wide_pane_vc

0xeb44,	// (0x00044704) form_field_data_wide_pane_vc_cp2

0xeb4c,	// (0x0004470c) form_field_popup_pane_vc_ParamLimits

0xeb4c,	// (0x0004470c) form_field_popup_pane_vc

0xeb63,	// (0x00044723) form_field_popup_wide_pane_vc_ParamLimits

0xeb63,	// (0x00044723) form_field_popup_wide_pane_vc

0xeb79,	// (0x00044739) form_field_slider_pane_vc_ParamLimits

0xeb79,	// (0x00044739) form_field_slider_pane_vc

0xeb8c,	// (0x0004474c) form_field_slider_wide_pane_vc_ParamLimits

0xeb8c,	// (0x0004474c) form_field_slider_wide_pane_vc

0xa62c,	// (0x000401ec) grid_touch_1_pane_ParamLimits

0xa62c,	// (0x000401ec) grid_touch_1_pane

0xa640,	// (0x00040200) grid_touch_2_pane_ParamLimits

0xa640,	// (0x00040200) grid_touch_2_pane

0xeb9f,	// (0x0004475f) touch_pane_g1_ParamLimits

0xeb9f,	// (0x0004475f) touch_pane_g1

0xebad,	// (0x0004476d) cell_app_pane_cp_wide_ParamLimits

0xebad,	// (0x0004476d) cell_app_pane_cp_wide

0xebbe,	// (0x0004477e) grid_popup_fast_wide_pane_ParamLimits

0xebbe,	// (0x0004477e) grid_popup_fast_wide_pane

0xebd2,	// (0x00044792) scroll_pane_cp19_ParamLimits

0xebd2,	// (0x00044792) scroll_pane_cp19

0xba0b,	// (0x000415cb) bg_popup_window_pane_cp20

0xebe6,	// (0x000447a6) listscroll_popup_fast_wide_pane

0xd04e,	// (0x00042c0e) grid_indicator_nsta_pane

0xebee,	// (0x000447ae) clock_nsta_pane_g1

0xebf7,	// (0x000447b7) clock_nsta_pane_t1

0xa66a,	// (0x0004022a) cell_indicator_nsta_pane_ParamLimits

0xa66a,	// (0x0004022a) cell_indicator_nsta_pane

0xeb9f,	// (0x0004475f) cell_indicator_nsta_pane_g1

0xa687,	// (0x00040247) cell_indicator_nsta_pane_g2

0x0001,

0xfa58,	// (0x00045618) cell_indicator_nsta_pane_g

0xec13,	// (0x000447d3) clock_nsta_pane_cp

0xec1b,	// (0x000447db) indicator_nsta_pane_cp

0xec24,	// (0x000447e4) nsta_clock_indic_pane_g1

0xbaa3,	// (0x00041663) grid_indicator_pane

0xc6a0,	// (0x00042260) scroll_pane_cp29

0x2026,	// (0x00037be6) indicator_nsta_pane_cp2_ParamLimits

0x2026,	// (0x00037be6) indicator_nsta_pane_cp2

0xba67,	// (0x00041627) main_apps_wheel_pane

0xd407,	// (0x00042fc7) form_midp_field_text_pane_ParamLimits

0xd534,	// (0x000430f4) scroll_bar_cp050_ParamLimits

0xec8d,	// (0x0004484d) cell_indicator_pane_ParamLimits

0xec8d,	// (0x0004484d) cell_indicator_pane

0xecaa,	// (0x0004486a) cell_indicator_pane_g1

0xa69d,	// (0x0004025d) grid_wheel_folder_pane_ParamLimits

0xa69d,	// (0x0004025d) grid_wheel_folder_pane

0xa6ab,	// (0x0004026b) list_wheel_apps_pane_ParamLimits

0xa6ab,	// (0x0004026b) list_wheel_apps_pane

0xa6b9,	// (0x00040279) main_apps_wheel_pane_g1_ParamLimits

0xa6b9,	// (0x00040279) main_apps_wheel_pane_g1

0xa6c5,	// (0x00040285) main_apps_wheel_pane_g2_ParamLimits

0xa6c5,	// (0x00040285) main_apps_wheel_pane_g2

0x0001,

0xfa74,	// (0x00045634) main_apps_wheel_pane_g_ParamLimits

0xfa74,	// (0x00045634) main_apps_wheel_pane_g

0xa6d3,	// (0x00040293) main_apps_wheel_pane_t1_ParamLimits

0xa6d3,	// (0x00040293) main_apps_wheel_pane_t1

0xa6e7,	// (0x000402a7) list_wheel_apps_pane_g1

0xa6ef,	// (0x000402af) list_wheel_apps_pane_g2

0xa6f7,	// (0x000402b7) list_wheel_apps_pane_g3

0xa6ff,	// (0x000402bf) list_wheel_apps_pane_g4

0xa709,	// (0x000402c9) list_wheel_apps_pane_g5

0x0004,

0xfa79,	// (0x00045639) list_wheel_apps_pane_g

0xcaf3,	// (0x000426b3) navi_icon_text_pane

0x9cea,	// (0x0003f8aa) aid_fill_nsta

0xa720,	// (0x000402e0) navi_icon_text_pane_g1

0xa72c,	// (0x000402ec) navi_icon_text_pane_t1

0xc98f,	// (0x0004254f) list_set_graphic_pane_t1_ParamLimits

0xc98f,	// (0x0004254f) list_set_graphic_pane_t1

0xdc4e,	// (0x0004380e) popup_midp_note_alarm_window_t6_ParamLimits

0xdc4e,	// (0x0004380e) popup_midp_note_alarm_window_t6

0xdc60,	// (0x00043820) popup_midp_note_alarm_window_t7_ParamLimits

0xdc60,	// (0x00043820) popup_midp_note_alarm_window_t7

0xdc72,	// (0x00043832) popup_midp_note_alarm_window_t8_ParamLimits

0xdc72,	// (0x00043832) popup_midp_note_alarm_window_t8

0xdc84,	// (0x00043844) popup_midp_note_alarm_window_t9_ParamLimits

0xdc84,	// (0x00043844) popup_midp_note_alarm_window_t9

0xdc96,	// (0x00043856) popup_midp_note_alarm_window_t10_ParamLimits

0xdc96,	// (0x00043856) popup_midp_note_alarm_window_t10

0xdca8,	// (0x00043868) popup_midp_note_alarm_window_t11_ParamLimits

0xdca8,	// (0x00043868) popup_midp_note_alarm_window_t11

0xdcba,	// (0x0004387a) scroll_pane_cp17_ParamLimits

0xdcba,	// (0x0004387a) scroll_pane_cp17

0x259b,	// (0x0003815b) volume_small_pane_cp_g1

0x29f7,	// (0x000385b7) volume_small_pane_cp_g2

0x2a00,	// (0x000385c0) volume_small_pane_cp_g3

0x2a09,	// (0x000385c9) volume_small_pane_cp_g4

0x2a12,	// (0x000385d2) volume_small_pane_cp_g5

0x2a1b,	// (0x000385db) volume_small_pane_cp_g6

0x2a24,	// (0x000385e4) volume_small_pane_cp_g7

0x2a2d,	// (0x000385ed) volume_small_pane_cp_g8

0x2a36,	// (0x000385f6) volume_small_pane_cp_g9

0x2a3f,	// (0x000385ff) volume_small_pane_cp_g10

0xcc9f,	// (0x0004285f) midp_ticker_pane_g1_ParamLimits

0xccab,	// (0x0004286b) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x00045335) midp_ticker_pane_g_ParamLimits

0x9609,	// (0x0003f1c9) midp_ticker_pane_t1_ParamLimits

0x9d0a,	// (0x0003f8ca) aid_fill_nsta_2

0xd520,	// (0x000430e0) list_form2_midp_pane

0xe33b,	// (0x00043efb) midp_editing_number_pane_ParamLimits

0xe34a,	// (0x00043f0a) midp_ticker_pane_ParamLimits

0xecb4,	// (0x00044874) form2_midp_field_pane

0xecbc,	// (0x0004487c) scroll_pane_cp51

0xecdc,	// (0x0004489c) form2_midp_button_pane_ParamLimits

0xecdc,	// (0x0004489c) form2_midp_button_pane

0xecee,	// (0x000448ae) form2_midp_content_pane_ParamLimits

0xecee,	// (0x000448ae) form2_midp_content_pane

0xed08,	// (0x000448c8) form2_midp_field_choice_group_pane

0xed10,	// (0x000448d0) form2_midp_field_pane_g1

0xed18,	// (0x000448d8) form2_midp_field_pane_g2

0xed20,	// (0x000448e0) form2_midp_field_pane_g3

0xed28,	// (0x000448e8) form2_midp_field_pane_g4

0x0003,

0xfa9e,	// (0x0004565e) form2_midp_field_pane_g

0xed30,	// (0x000448f0) form2_midp_gauge_slider_pane

0xed38,	// (0x000448f8) form2_midp_gauge_wait_pane

0xed40,	// (0x00044900) form2_midp_image_pane_ParamLimits

0xed40,	// (0x00044900) form2_midp_image_pane

0xed5b,	// (0x0004491b) form2_midp_label_pane_ParamLimits

0xed5b,	// (0x0004491b) form2_midp_label_pane

0xa75a,	// (0x0004031a) form2_midp_label_pane_cp_ParamLimits

0xa75a,	// (0x0004031a) form2_midp_label_pane_cp

0xed74,	// (0x00044934) form2_midp_string_pane_ParamLimits

0xed74,	// (0x00044934) form2_midp_string_pane

0x1034,	// (0x00036bf4) form2_midp_text_pane_ParamLimits

0x1034,	// (0x00036bf4) form2_midp_text_pane

0xed86,	// (0x00044946) form2_midp_time_pane

0xed96,	// (0x00044956) input_focus_pane_cp51_ParamLimits

0xed96,	// (0x00044956) input_focus_pane_cp51

0xedae,	// (0x0004496e) form2_midp_label_pane_t1_ParamLimits

0xedae,	// (0x0004496e) form2_midp_label_pane_t1

0x104f,	// (0x00036c0f) form2_mdip_text_pane_t1_ParamLimits

0x104f,	// (0x00036c0f) form2_mdip_text_pane_t1

0x106b,	// (0x00036c2b) form2_midp_time_pane_t1

0xedf6,	// (0x000449b6) form2_midp_gauge_slider_pane_t1

0xa77b,	// (0x0004033b) form2_midp_gauge_slider_pane_t2

0xa78d,	// (0x0004034d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaa7,	// (0x00045667) form2_midp_gauge_slider_pane_t

0xee08,	// (0x000449c8) form2_midp_slider_pane

0xee14,	// (0x000449d4) form2_midp_gauge_wait_pane_t1

0xee22,	// (0x000449e2) form2_midp_wait_pane_ParamLimits

0xee22,	// (0x000449e2) form2_midp_wait_pane

0xa79f,	// (0x0004035f) list_single_2graphic_pane_cp4_ParamLimits

0xa79f,	// (0x0004035f) list_single_2graphic_pane_cp4

0xa11d,	// (0x0003fcdd) list_single_midp_graphic_pane_cp_ParamLimits

0xa11d,	// (0x0003fcdd) list_single_midp_graphic_pane_cp

0xba0b,	// (0x000415cb) list_highlight_pane_cp20

0xee4d,	// (0x00044a0d) list_single_2graphic_pane_g1_cp4

0xe678,	// (0x00044238) list_single_2graphic_pane_g2_cp4

0xee55,	// (0x00044a15) list_single_2graphic_pane_t1_cp4

0xba67,	// (0x00041627) list_highlight_pane_cp21

0xee64,	// (0x00044a24) list_single_midp_graphic_pane_g4_cp

0xee73,	// (0x00044a33) list_single_midp_graphic_pane_t1_cp

0xa7b6,	// (0x00040376) form2_mdip_string_pane_t1_ParamLimits

0xa7b6,	// (0x00040376) form2_mdip_string_pane_t1

0xba0b,	// (0x000415cb) bg_wml_button_pane_cp2

0xba01,	// (0x000415c1) form2_midp_image_pane_g1

0x1b2d,	// (0x000376ed) list_double_large_graphic_pane_g5_ParamLimits

0x1b2d,	// (0x000376ed) list_double_large_graphic_pane_g5

0x955d,	// (0x0003f11d) midp_form_pane_ParamLimits

0xba67,	// (0x00041627) main_apps_wheel_pane_ParamLimits

0x9a46,	// (0x0003f606) popup_preview_window_ParamLimits

0x9a46,	// (0x0003f606) popup_preview_window

0xcf86,	// (0x00042b46) popup_touch_info_window_ParamLimits

0xcf86,	// (0x00042b46) popup_touch_info_window

0xcfa4,	// (0x00042b64) popup_touch_menu_window_ParamLimits

0xcfa4,	// (0x00042b64) popup_touch_menu_window

0xb9f7,	// (0x000415b7) bg_popup_sub_pane_cp6

0xee88,	// (0x00044a48) list_touch_menu_pane

0xee90,	// (0x00044a50) list_single_touch_menu_pane_ParamLimits

0xee90,	// (0x00044a50) list_single_touch_menu_pane

0xeea5,	// (0x00044a65) list_single_touch_menu_pane_t1

0xba67,	// (0x00041627) bg_popup_sub_pane_cp7_ParamLimits

0xba67,	// (0x00041627) bg_popup_sub_pane_cp7

0xeeb3,	// (0x00044a73) heading_sub_pane

0xeebb,	// (0x00044a7b) list_touch_info_pane_ParamLimits

0xeebb,	// (0x00044a7b) list_touch_info_pane

0xeeca,	// (0x00044a8a) list_single_touch_info_pane_ParamLimits

0xeeca,	// (0x00044a8a) list_single_touch_info_pane

0xeedc,	// (0x00044a9c) list_single_touch_info_pane_t1

0xeeea,	// (0x00044aaa) list_single_touch_info_pane_t2

0x0001,

0xfab5,	// (0x00045675) list_single_touch_info_pane_t

0xcc75,	// (0x00042835) bg_popup_heading_pane_cp

0xeef8,	// (0x00044ab8) heading_sub_pane_t1

0xd2a5,	// (0x00042e65) bg_popup_preview_window_pane_cp_ParamLimits

0xd2a5,	// (0x00042e65) bg_popup_preview_window_pane_cp

0xeeb3,	// (0x00044a73) heading_preview_pane

0xeebb,	// (0x00044a7b) list_preview_pane_ParamLimits

0xeebb,	// (0x00044a7b) list_preview_pane

0xef06,	// (0x00044ac6) popup_preview_window_g1

0xeeca,	// (0x00044a8a) list_single_preview_pane_ParamLimits

0xeeca,	// (0x00044a8a) list_single_preview_pane

0xef0e,	// (0x00044ace) list_single_preview_pane_g1

0xef16,	// (0x00044ad6) list_single_preview_pane_t1

0xeedc,	// (0x00044a9c) list_single_preview_pane_t2

0x0001,

0xfaba,	// (0x0004567a) list_single_preview_pane_t

0xef24,	// (0x00044ae4) bg_popup_heading_pane_cp2_ParamLimits

0xef24,	// (0x00044ae4) bg_popup_heading_pane_cp2

0xef3a,	// (0x00044afa) heading_preview_pane_g1

0xef42,	// (0x00044b02) heading_preview_pane_t1_ParamLimits

0xef42,	// (0x00044b02) heading_preview_pane_t1

0xbaba,	// (0x0004167a) soft_indicator_pane_t1_ParamLimits

0xc1a1,	// (0x00041d61) scroll_pane_ParamLimits

0xc59c,	// (0x0004215c) scroll_sc2_left_pane

0xc5a5,	// (0x00042165) scroll_sc2_right_pane

0xc5c4,	// (0x00042184) scroll_bg_pane_g1_ParamLimits

0xc5d9,	// (0x00042199) scroll_bg_pane_g2_ParamLimits

0xc5f1,	// (0x000421b1) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x000452c4) scroll_bg_pane_g_ParamLimits

0xc5c4,	// (0x00042184) scroll_handle_pane_g1_ParamLimits

0xc613,	// (0x000421d3) scroll_handle_pane_g2_ParamLimits

0xc5f1,	// (0x000421b1) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x000452cb) scroll_handle_pane_g_ParamLimits

0xcecf,	// (0x00042a8f) popup_choice_list_window_ParamLimits

0xcecf,	// (0x00042a8f) popup_choice_list_window

0xd0ff,	// (0x00042cbf) choice_list_pane

0xd181,	// (0x00042d41) cell_toolbar_pane_t1

0xd1a9,	// (0x00042d69) toolbar_button_pane_ParamLimits

0xe098,	// (0x00043c58) ai_gene_pane_1_t2_ParamLimits

0xe098,	// (0x00043c58) ai_gene_pane_1_t2

0x0001,

0xf8cb,	// (0x0004548b) ai_gene_pane_1_t_ParamLimits

0xf8cb,	// (0x0004548b) ai_gene_pane_1_t

0xef5f,	// (0x00044b1f) scroll_sc2_left_pane_g1

0xef5f,	// (0x00044b1f) scroll_sc2_right_pane_g1

0xc385,	// (0x00041f45) bg_popup_sub_pane_cp10

0xef69,	// (0x00044b29) list_choice_list_pane

0xef80,	// (0x00044b40) list_single_choice_list_pane_ParamLimits

0xef80,	// (0x00044b40) list_single_choice_list_pane

0xef94,	// (0x00044b54) list_single_choice_list_pane_g1

0xef9c,	// (0x00044b5c) list_single_choice_list_pane_t1_ParamLimits

0xef9c,	// (0x00044b5c) list_single_choice_list_pane_t1

0xefb1,	// (0x00044b71) choice_list_pane_g1

0xefb9,	// (0x00044b79) choice_list_pane_t1

0xb9f7,	// (0x000415b7) input_focus_pane_cp11

0xc4fa,	// (0x000420ba) title_pane_stacon_g2_ParamLimits

0xc4fa,	// (0x000420ba) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x000452aa) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x000452aa) title_pane_stacon_g

0xcc75,	// (0x00042835) cursor_press_pane

0x9705,	// (0x0003f2c5) popup_fep_hwr_window_ParamLimits

0x9705,	// (0x0003f2c5) popup_fep_hwr_window

0xcf23,	// (0x00042ae3) popup_fep_vkb_window_ParamLimits

0xcf23,	// (0x00042ae3) popup_fep_vkb_window

0xefc7,	// (0x00044b87) cursor_press_pane_g1

0x0002,

0xfae3,	// (0x000456a3) fep_vkb_side_pane_g_ParamLimits

0x2a73,	// (0x00038633) fep_hwr_candidate_pane_ParamLimits

0x2a73,	// (0x00038633) fep_hwr_candidate_pane

0x2a9d,	// (0x0003865d) fep_hwr_side_pane_ParamLimits

0x2a9d,	// (0x0003865d) fep_hwr_side_pane

0x2abd,	// (0x0003867d) fep_hwr_top_pane_ParamLimits

0x2abd,	// (0x0003867d) fep_hwr_top_pane

0x2ad5,	// (0x00038695) fep_hwr_write_pane_ParamLimits

0x2ad5,	// (0x00038695) fep_hwr_write_pane

0xfae3,	// (0x000456a3) fep_vkb_side_pane_g

0xefcf,	// (0x00044b8f) fep_hwr_top_pane_g1

0xefe1,	// (0x00044ba1) fep_hwr_top_pane_g2

0x2b01,	// (0x000386c1) fep_hwr_top_pane_g3

0x0002,

0xfabf,	// (0x0004567f) fep_hwr_top_pane_g

0x2b16,	// (0x000386d6) fep_hwr_top_text_pane

0xc766,	// (0x00042326) fep_hwr_top_text_pane_g1

0xf017,	// (0x00044bd7) fep_hwr_top_text_pane_t1

0x2c0c,	// (0x000387cc) fep_hwr_candidate_pane_g1

0xf232,	// (0x00044df2) fep_vkb_keypad_pane_g3_ParamLimits

0xf232,	// (0x00044df2) fep_vkb_keypad_pane_g3

0xf25a,	// (0x00044e1a) fep_vkb_keypad_pane_g4_ParamLimits

0xf25a,	// (0x00044e1a) fep_vkb_keypad_pane_g4

0xf2c9,	// (0x00044e89) fep_vkb_bottom_pane_g2_ParamLimits

0xf2c9,	// (0x00044e89) fep_vkb_bottom_pane_g2

0x0001,

0x01f4,	// (0x00035db4) fep_vkb_bottom_pane_g_ParamLimits

0x01f4,	// (0x00035db4) fep_vkb_bottom_pane_g

0xef5f,	// (0x00044b1f) cell_vkb_side_pane_g2

0x0001,

0xfaef,	// (0x000456af) cell_vkb_side_pane_g

0xf30d,	// (0x00044ecd) cell_vkb_side_pane_t1

0xf31b,	// (0x00044edb) cell_vkb_side_pane_t1_copy1

0xef5f,	// (0x00044b1f) bg_fep_vkb_candidate_pane_g2

0xf3f7,	// (0x00044fb7) cell_vkb_candidate_pane_ParamLimits

0xf025,	// (0x00044be5) aid_size_cell_vkb_ParamLimits

0xf025,	// (0x00044be5) aid_size_cell_vkb

0xf3f7,	// (0x00044fb7) cell_vkb_candidate_pane

0x2c26,	// (0x000387e6) bg_popup_fep_shadow_pane_g1

0xf0a1,	// (0x00044c61) fep_vkb_bottom_pane_ParamLimits

0xf0a1,	// (0x00044c61) fep_vkb_bottom_pane

0xf0de,	// (0x00044c9e) fep_vkb_candidate_pane_ParamLimits

0xf0de,	// (0x00044c9e) fep_vkb_candidate_pane

0xf0fa,	// (0x00044cba) fep_vkb_keypad_pane_ParamLimits

0xf0fa,	// (0x00044cba) fep_vkb_keypad_pane

0xf140,	// (0x00044d00) fep_vkb_side_pane_ParamLimits

0xf140,	// (0x00044d00) fep_vkb_side_pane

0xf17c,	// (0x00044d3c) fep_vkb_top_pane_ParamLimits

0xf17c,	// (0x00044d3c) fep_vkb_top_pane

0xf1b8,	// (0x00044d78) fep_vkb_top_pane_g1_ParamLimits

0xf1b8,	// (0x00044d78) fep_vkb_top_pane_g1

0xf1c7,	// (0x00044d87) fep_vkb_top_pane_g2_ParamLimits

0xf1c7,	// (0x00044d87) fep_vkb_top_pane_g2

0xf1d6,	// (0x00044d96) fep_vkb_top_pane_g3_ParamLimits

0xf1d6,	// (0x00044d96) fep_vkb_top_pane_g3

0x0003,

0xfada,	// (0x0004569a) fep_vkb_top_pane_g_ParamLimits

0xfada,	// (0x0004569a) fep_vkb_top_pane_g

0xf202,	// (0x00044dc2) fep_vkb_top_text_pane_ParamLimits

0xf202,	// (0x00044dc2) fep_vkb_top_text_pane

0xa84e,	// (0x0004040e) fep_vkb_side_pane_g1_ParamLimits

0xa84e,	// (0x0004040e) fep_vkb_side_pane_g1

0xf221,	// (0x00044de1) grid_vkb_side_pane_ParamLimits

0xf221,	// (0x00044de1) grid_vkb_side_pane

0x2c2e,	// (0x000387ee) bg_popup_fep_shadow_pane_g2

0x2c37,	// (0x000387f7) bg_popup_fep_shadow_pane_g3

0x2c3f,	// (0x000387ff) bg_popup_fep_shadow_pane_g4

0x2c48,	// (0x00038808) bg_popup_fep_shadow_pane_g5

0x2c52,	// (0x00038812) bg_popup_fep_shadow_pane_g6

0x2c5a,	// (0x0003881a) bg_popup_fep_shadow_pane_g7

0xc2b5,	// (0x00041e75) bg_popup_fep_shadow_pane_g8

0xf278,	// (0x00044e38) grid_vkb_keypad_number_pane_ParamLimits

0xf278,	// (0x00044e38) grid_vkb_keypad_number_pane

0xf288,	// (0x00044e48) grid_vkb_keypad_pane_ParamLimits

0xf288,	// (0x00044e48) grid_vkb_keypad_pane

0xf2ae,	// (0x00044e6e) fep_vkb_bottom_pane_g1_ParamLimits

0xf2ae,	// (0x00044e6e) fep_vkb_bottom_pane_g1

0xf2d7,	// (0x00044e97) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xf2d7,	// (0x00044e97) grid_vkb_keypad_bottom_left_pane

0xf2ec,	// (0x00044eac) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xf2ec,	// (0x00044eac) grid_vkb_keypad_bottom_right_pane

0xf301,	// (0x00044ec1) fep_vkb_top_text_pane_g1

0xa895,	// (0x00040455) fep_vkb_top_text_pane_t1

0xa8a7,	// (0x00040467) cell_vkb_side_pane_ParamLimits

0xa8a7,	// (0x00040467) cell_vkb_side_pane

0xef5f,	// (0x00044b1f) cell_vkb_side_pane_g1

0xf329,	// (0x00044ee9) cell_vkb_keypad_pane_ParamLimits

0xf329,	// (0x00044ee9) cell_vkb_keypad_pane

0xf3a4,	// (0x00044f64) cell_vkb_keypad_pane_g1

0x0008,

0xfb02,	// (0x000456c2) bg_popup_fep_shadow_pane_g

0xef5f,	// (0x00044b1f) cell_hwr_side_pane_g1

0xef5f,	// (0x00044b1f) cell_hwr_side_pane_g2

0xf3ae,	// (0x00044f6e) cell_vkb_keypad_pane_t1

0xa8bd,	// (0x0004047d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa8bd,	// (0x0004047d) cell_vkb_keypad_bottom_left_pane

0xa8d2,	// (0x00040492) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa8d2,	// (0x00040492) cell_vkb_keypad_bottom_right_pane

0xef5f,	// (0x00044b1f) cell_vkb_keypad_bottom_left_pane_g1

0xef5f,	// (0x00044b1f) cell_vkb_keypad_bottom_right_pane_g1

0xf3bc,	// (0x00044f7c) cell_vkb_keypad_number_pane_ParamLimits

0xf3bc,	// (0x00044f7c) cell_vkb_keypad_number_pane

0xf3db,	// (0x00044f9b) cell_vkb_keypad_number_pane_g1

0xf3e5,	// (0x00044fa5) cell_vkb_keypad_number_pane_g2

0xf3ee,	// (0x00044fae) cell_vkb_keypad_number_pane_g3

0x0002,

0xfaf4,	// (0x000456b4) cell_vkb_keypad_number_pane_g

0xf3ae,	// (0x00044f6e) cell_vkb_keypad_number_pane_t1

0xf414,	// (0x00044fd4) fep_vkb_candidate_pane_g1

0x0001,

0xfaef,	// (0x000456af) cell_hwr_side_pane_g

0xf42d,	// (0x00044fed) cell_hwr_side_pane_t1

0x2c6c,	// (0x0003882c) cell_hwr_side_pane_t1_copy1

0xf1f4,	// (0x00044db4) cell_hwr_candidate_pane_g1

0x2c7a,	// (0x0003883a) cell_hwr_candidate_pane_t1

0xef5f,	// (0x00044b1f) cell_vkb_candidate_pane_g2

0xf471,	// (0x00045031) cell_vkb_candidate_pane_t1

0xf1e6,	// (0x00044da6) bg_popup_fep_shadow_pane_ParamLimits

0xf1e6,	// (0x00044da6) bg_popup_fep_shadow_pane

0x9456,	// (0x0003f016) bg_fep_hwr_top_pane_g4

0xeff3,	// (0x00044bb3) bg_hwr_side_pane_g1_ParamLimits

0xeff3,	// (0x00044bb3) bg_hwr_side_pane_g1

0x8b0a,	// (0x0003e6ca) cell_hwr_side_pane_ParamLimits

0x8b0a,	// (0x0003e6ca) cell_hwr_side_pane

0x2b8d,	// (0x0003874d) fep_hwr_write_pane_g1_ParamLimits

0x2b8d,	// (0x0003874d) fep_hwr_write_pane_g1

0x2b9a,	// (0x0003875a) fep_hwr_write_pane_g2_ParamLimits

0x2b9a,	// (0x0003875a) fep_hwr_write_pane_g2

0x2ba7,	// (0x00038767) fep_hwr_write_pane_g3_ParamLimits

0x2ba7,	// (0x00038767) fep_hwr_write_pane_g3

0x8b2a,	// (0x0003e6ea) fep_hwr_write_pane_g4_ParamLimits

0x8b2a,	// (0x0003e6ea) fep_hwr_write_pane_g4

0x0005,

0xfac6,	// (0x00045686) fep_hwr_write_pane_g_ParamLimits

0xfac6,	// (0x00045686) fep_hwr_write_pane_g

0x9456,	// (0x0003f016) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9456,	// (0x0003f016) bg_fep_hwr_candidate_pane_g2

0x2bca,	// (0x0003878a) cell_hwr_candidate_pane_ParamLimits

0x2bca,	// (0x0003878a) cell_hwr_candidate_pane

0x2c0c,	// (0x000387cc) fep_hwr_candidate_pane_g1_ParamLimits

0xf053,	// (0x00044c13) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xf053,	// (0x00044c13) bg_popup_fep_shadow_pane_cp2

0xf1f4,	// (0x00044db4) fep_vkb_top_pane_g4_ParamLimits

0xf1f4,	// (0x00044db4) fep_vkb_top_pane_g4

0xf213,	// (0x00044dd3) fep_vkb_side_pane_g2_ParamLimits

0xf213,	// (0x00044dd3) fep_vkb_side_pane_g2

0x816e,	// (0x0003dd2e) list_setting_pane_t4_ParamLimits

0x816e,	// (0x0003dd2e) list_setting_pane_t4

0x81f0,	// (0x0003ddb0) list_setting_number_pane_t5_ParamLimits

0x81f0,	// (0x0003ddb0) list_setting_number_pane_t5

0x94a2,	// (0x0003f062) list_double_heading_pane_cp2_ParamLimits

0x94a2,	// (0x0003f062) list_double_heading_pane_cp2

0xc248,	// (0x00041e08) list_double_heading_pane_g1_cp2_ParamLimits

0xc248,	// (0x00041e08) list_double_heading_pane_g1_cp2

0xc254,	// (0x00041e14) list_double_heading_pane_g2_cp2_ParamLimits

0xc254,	// (0x00041e14) list_double_heading_pane_g2_cp2

0xf47f,	// (0x0004503f) list_double_heading_pane_t1_cp2_ParamLimits

0xf47f,	// (0x0004503f) list_double_heading_pane_t1_cp2

0xf495,	// (0x00045055) list_double_heading_pane_t2_cp2_ParamLimits

0xf495,	// (0x00045055) list_double_heading_pane_t2_cp2

0xb9ef,	// (0x000415af) aid_value_unit2

0x167d,	// (0x0003723d) popup_preview_fixed_window

0xbb9a,	// (0x0004175a) bg_popup_preview_window_pane_cp02

0xf4e9,	// (0x000450a9) list_preview_fixed_pane

0xf52f,	// (0x000450ef) list_empty_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_empty_pane_fp

0xf52f,	// (0x000450ef) list_single_cale_day_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_single_cale_day_pane_fp

0xf52f,	// (0x000450ef) list_single_graphic_heading_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_single_graphic_heading_pane_fp

0xf52f,	// (0x000450ef) list_single_graphic_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_single_graphic_pane_fp

0xf52f,	// (0x000450ef) list_single_heading_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_single_heading_pane_fp

0xf52f,	// (0x000450ef) list_single_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_single_pane_fp

0xf546,	// (0x00045106) list_single_pane_fp_g1_ParamLimits

0xf546,	// (0x00045106) list_single_pane_fp_g1

0x1b15,	// (0x000376d5) list_single_pane_fp_g2_ParamLimits

0x1b15,	// (0x000376d5) list_single_pane_fp_g2

0x107e,	// (0x00036c3e) list_single_pane_fp_g3_ParamLimits

0x107e,	// (0x00036c3e) list_single_pane_fp_g3

0xf552,	// (0x00045112) list_single_pane_fp_g4_ParamLimits

0xf552,	// (0x00045112) list_single_pane_fp_g4

0x0003,

0xfb23,	// (0x000456e3) list_single_pane_fp_g_ParamLimits

0xfb23,	// (0x000456e3) list_single_pane_fp_g

0x1092,	// (0x00036c52) list_single_pane_fp_t1_ParamLimits

0x1092,	// (0x00036c52) list_single_pane_fp_t1

0x10a9,	// (0x00036c69) list_single_graphic_pane_fp_g1_ParamLimits

0x10a9,	// (0x00036c69) list_single_graphic_pane_fp_g1

0xf546,	// (0x00045106) list_single_graphic_pane_fp_g2_ParamLimits

0xf546,	// (0x00045106) list_single_graphic_pane_fp_g2

0x1b15,	// (0x000376d5) list_single_graphic_pane_fp_g3_ParamLimits

0x1b15,	// (0x000376d5) list_single_graphic_pane_fp_g3

0x107e,	// (0x00036c3e) list_single_graphic_pane_fp_g4_ParamLimits

0x107e,	// (0x00036c3e) list_single_graphic_pane_fp_g4

0xf552,	// (0x00045112) list_single_graphic_pane_fp_g5_ParamLimits

0xf552,	// (0x00045112) list_single_graphic_pane_fp_g5

0x0004,

0xfb2c,	// (0x000456ec) list_single_graphic_pane_fp_g_ParamLimits

0xfb2c,	// (0x000456ec) list_single_graphic_pane_fp_g

0x10b5,	// (0x00036c75) list_single_graphic_pane_fp_t1_ParamLimits

0x10b5,	// (0x00036c75) list_single_graphic_pane_fp_t1

0x10a9,	// (0x00036c69) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x10a9,	// (0x00036c69) list_single_graphic_heading_pane_fp_g1

0xf546,	// (0x00045106) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf546,	// (0x00045106) list_single_graphic_heading_pane_fp_g2

0x1b15,	// (0x000376d5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1b15,	// (0x000376d5) list_single_graphic_heading_pane_fp_g3

0x107e,	// (0x00036c3e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x107e,	// (0x00036c3e) list_single_graphic_heading_pane_fp_g4

0xf552,	// (0x00045112) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf552,	// (0x00045112) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb2c,	// (0x000456ec) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb2c,	// (0x000456ec) list_single_graphic_heading_pane_fp_g

0x10cb,	// (0x00036c8b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x10cb,	// (0x00036c8b) list_single_graphic_heading_pane_fp_t1

0x10e1,	// (0x00036ca1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x10e1,	// (0x00036ca1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb37,	// (0x000456f7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb37,	// (0x000456f7) list_single_graphic_heading_pane_fp_t

0x10f3,	// (0x00036cb3) list_single_cale_day_pane_fp_g1_ParamLimits

0x10f3,	// (0x00036cb3) list_single_cale_day_pane_fp_g1

0xf55e,	// (0x0004511e) list_single_cale_day_pane_fp_g2_ParamLimits

0xf55e,	// (0x0004511e) list_single_cale_day_pane_fp_g2

0x112b,	// (0x00036ceb) list_single_cale_day_pane_fp_g3_ParamLimits

0x112b,	// (0x00036ceb) list_single_cale_day_pane_fp_g3

0x1153,	// (0x00036d13) list_single_cale_day_pane_fp_g4_ParamLimits

0x1153,	// (0x00036d13) list_single_cale_day_pane_fp_g4

0x1177,	// (0x00036d37) list_single_cale_day_pane_fp_g5_ParamLimits

0x1177,	// (0x00036d37) list_single_cale_day_pane_fp_g5

0x0004,

0xfb3c,	// (0x000456fc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb3c,	// (0x000456fc) list_single_cale_day_pane_fp_g

0x119b,	// (0x00036d5b) list_single_cale_day_pane_fp_t1_ParamLimits

0x119b,	// (0x00036d5b) list_single_cale_day_pane_fp_t1

0x11c1,	// (0x00036d81) list_single_cale_day_pane_fp_t2_ParamLimits

0x11c1,	// (0x00036d81) list_single_cale_day_pane_fp_t2

0x11da,	// (0x00036d9a) list_single_cale_day_pane_fp_t3_ParamLimits

0x11da,	// (0x00036d9a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb47,	// (0x00045707) list_single_cale_day_pane_fp_t_ParamLimits

0xfb47,	// (0x00045707) list_single_cale_day_pane_fp_t

0xf546,	// (0x00045106) list_empty_pane_fp_g1_ParamLimits

0xf546,	// (0x00045106) list_empty_pane_fp_g1

0x11f3,	// (0x00036db3) list_empty_pane_fp_t1

0x1201,	// (0x00036dc1) list_empty_pane_fp_t2

0x0001,

0xfb4e,	// (0x0004570e) list_empty_pane_fp_t

0xf546,	// (0x00045106) list_single_heading_pane_fp_g1_ParamLimits

0xf546,	// (0x00045106) list_single_heading_pane_fp_g1

0x1b15,	// (0x000376d5) list_single_heading_pane_fp_g2_ParamLimits

0x1b15,	// (0x000376d5) list_single_heading_pane_fp_g2

0x107e,	// (0x00036c3e) list_single_heading_pane_fp_g3_ParamLimits

0x107e,	// (0x00036c3e) list_single_heading_pane_fp_g3

0x0002,

0xfb53,	// (0x00045713) list_single_heading_pane_fp_g_ParamLimits

0xfb53,	// (0x00045713) list_single_heading_pane_fp_g

0x120f,	// (0x00036dcf) list_single_heading_pane_fp_t1_ParamLimits

0x120f,	// (0x00036dcf) list_single_heading_pane_fp_t1

0x1221,	// (0x00036de1) list_single_heading_pane_fp_t2_ParamLimits

0x1221,	// (0x00036de1) list_single_heading_pane_fp_t2

0x0001,

0xfb5a,	// (0x0004571a) list_single_heading_pane_fp_t_ParamLimits

0xfb5a,	// (0x0004571a) list_single_heading_pane_fp_t

0xc391,	// (0x00041f51) aid_size_cell_fast

0xbb7d,	// (0x0004173d) soft_indicator_pane_cp1_t1

0xc3ce,	// (0x00041f8e) cell_app_pane_cp2_ParamLimits

0xc3ce,	// (0x00041f8e) cell_app_pane_cp2

0x2a5c,	// (0x0003861c) fep_hwr_candidate_drop_down_list_pane

0x9464,	// (0x0003f024) fep_hwr_candidate_pane_g3_ParamLimits

0x9464,	// (0x0003f024) fep_hwr_candidate_pane_g3

0x9471,	// (0x0003f031) fep_hwr_candidate_pane_g4_ParamLimits

0x9471,	// (0x0003f031) fep_hwr_candidate_pane_g4

0x0002,

0xfad3,	// (0x00045693) fep_hwr_candidate_pane_g_ParamLimits

0xfad3,	// (0x00045693) fep_hwr_candidate_pane_g

0xf0cd,	// (0x00044c8d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xf0cd,	// (0x00044c8d) fep_vkb_candidate_drop_down_list_pane

0xf41c,	// (0x00044fdc) fep_vkb_candidate_pane_g3

0xf424,	// (0x00044fe4) fep_vkb_candidate_pane_g4

0x0002,

0xfafb,	// (0x000456bb) fep_vkb_candidate_pane_g

0xf1f4,	// (0x00044db4) cell_hwr_candidate_pane_g1_ParamLimits

0xf4a7,	// (0x00045067) cell_hwr_candidate_pane_g3_ParamLimits

0xf4a7,	// (0x00045067) cell_hwr_candidate_pane_g3

0xf4c8,	// (0x00045088) cell_hwr_candidate_pane_g4_ParamLimits

0xf4c8,	// (0x00045088) cell_hwr_candidate_pane_g4

0x0002,

0xfb15,	// (0x000456d5) cell_hwr_candidate_pane_g_ParamLimits

0xfb15,	// (0x000456d5) cell_hwr_candidate_pane_g

0xf43b,	// (0x00044ffb) cell_vkb_candidate_pane_g3_ParamLimits

0xf43b,	// (0x00044ffb) cell_vkb_candidate_pane_g3

0xf456,	// (0x00045016) cell_vkb_candidate_pane_g4_ParamLimits

0xf456,	// (0x00045016) cell_vkb_candidate_pane_g4

0x476b,	// (0x0003a32b) cell_app_pane_cp2_g1_ParamLimits

0x476b,	// (0x0003a32b) cell_app_pane_cp2_g1

0x4789,	// (0x0003a349) cell_app_pane_cp2_g2_ParamLimits

0x4789,	// (0x0003a349) cell_app_pane_cp2_g2

0x0001,

0xfb5f,	// (0x0004571f) cell_app_pane_cp2_g_ParamLimits

0xfb5f,	// (0x0004571f) cell_app_pane_cp2_g

0x4795,	// (0x0003a355) cell_app_pane_cp2_t1_ParamLimits

0x4795,	// (0x0003a355) cell_app_pane_cp2_t1

0xc22e,	// (0x00041dee) grid_highlight_pane_cp1_ParamLimits

0xc22e,	// (0x00041dee) grid_highlight_pane_cp1

0x2c98,	// (0x00038858) cell_hwr_candidate_pane_cp1_ParamLimits

0x2c98,	// (0x00038858) cell_hwr_candidate_pane_cp1

0xf1f4,	// (0x00044db4) fep_hwr_candidate_drop_down_list_pane_g1

0x47a7,	// (0x0003a367) fep_hwr_candidate_drop_down_list_pane_g2

0x47b4,	// (0x0003a374) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb64,	// (0x00045724) fep_hwr_candidate_drop_down_list_pane_g

0x2cb7,	// (0x00038877) fep_hwr_candidate_drop_down_list_scroll_pane

0x2cc0,	// (0x00038880) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2cc0,	// (0x00038880) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2ccd,	// (0x0003888d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ccd,	// (0x0003888d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2cda,	// (0x0003889a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2cda,	// (0x0003889a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf43b,	// (0x00044ffb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf43b,	// (0x00044ffb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf456,	// (0x00045016) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf456,	// (0x00045016) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2ce7,	// (0x000388a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2ce7,	// (0x000388a7) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2d02,	// (0x000388c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2d02,	// (0x000388c2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x47c1,	// (0x0003a381) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x47c1,	// (0x0003a381) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb6b,	// (0x0004572b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb6b,	// (0x0004572b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x47dc,	// (0x0003a39c) cell_vkb_candidate_pane_cp1_ParamLimits

0x47dc,	// (0x0003a39c) cell_vkb_candidate_pane_cp1

0xf1f4,	// (0x00044db4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xf1f4,	// (0x00044db4) fep_vkb_candidate_drop_down_list_pane_g1

0x47a7,	// (0x0003a367) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x47a7,	// (0x0003a367) fep_vkb_candidate_drop_down_list_pane_g2

0x47b4,	// (0x0003a374) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x47b4,	// (0x0003a374) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb64,	// (0x00045724) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb64,	// (0x00045724) fep_vkb_candidate_drop_down_list_pane_g

0x47fc,	// (0x0003a3bc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x47fc,	// (0x0003a3bc) fep_vkb_candidate_drop_down_list_scroll_pane

0x4809,	// (0x0003a3c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4809,	// (0x0003a3c9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4816,	// (0x0003a3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4816,	// (0x0003a3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4822,	// (0x0003a3e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4822,	// (0x0003a3e2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf4a7,	// (0x00045067) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf4a7,	// (0x00045067) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf4c8,	// (0x00045088) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf4c8,	// (0x00045088) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x482e,	// (0x0003a3ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x482e,	// (0x0003a3ee) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x484f,	// (0x0003a40f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x484f,	// (0x0003a40f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x47c1,	// (0x0003a381) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x47c1,	// (0x0003a381) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb7c,	// (0x0004573c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb7c,	// (0x0004573c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8fda,	// (0x0003eb9a) title_pane_g1_ParamLimits

0x8feb,	// (0x0003ebab) title_pane_g2_ParamLimits

0xf56a,	// (0x0004512a) title_pane_g_ParamLimits

0xc756,	// (0x00042316) aid_call2_pane

0xc75e,	// (0x0004231e) aid_call_pane

0xc766,	// (0x00042326) popup_clock_analogue_window_g1

0xc766,	// (0x00042326) popup_clock_analogue_window_g2

0x1e5a,	// (0x00037a1a) popup_clock_analogue_window_g3

0x1e63,	// (0x00037a23) popup_clock_analogue_window_g4

0xba01,	// (0x000415c1) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x000452d9) popup_clock_analogue_window_g

0x1e6b,	// (0x00037a2b) popup_clock_analogue_window_t1

0x1ea2,	// (0x00037a62) clock_digital_number_pane_ParamLimits

0x1ea2,	// (0x00037a62) clock_digital_number_pane

0x1eae,	// (0x00037a6e) clock_digital_number_pane_cp02_ParamLimits

0x1eae,	// (0x00037a6e) clock_digital_number_pane_cp02

0x1eba,	// (0x00037a7a) clock_digital_number_pane_cp03_ParamLimits

0x1eba,	// (0x00037a7a) clock_digital_number_pane_cp03

0x1ec6,	// (0x00037a86) clock_digital_number_pane_cp04_ParamLimits

0x1ec6,	// (0x00037a86) clock_digital_number_pane_cp04

0x1ed2,	// (0x00037a92) clock_digital_separator_pane_ParamLimits

0x1ed2,	// (0x00037a92) clock_digital_separator_pane

0x1ede,	// (0x00037a9e) popup_clock_digital_window_t1_ParamLimits

0x1ede,	// (0x00037a9e) popup_clock_digital_window_t1

0xba01,	// (0x000415c1) clock_digital_number_pane_g1

0xba01,	// (0x000415c1) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x000452e4) clock_digital_number_pane_g

0xba01,	// (0x000415c1) clock_digital_separator_pane_g1

0xba01,	// (0x000415c1) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x000452e4) clock_digital_separator_pane_g

0x9cea,	// (0x0003f8aa) aid_fill_nsta_ParamLimits

0x9e19,	// (0x0003f9d9) indicator_nsta_pane_ParamLimits

0xd0a8,	// (0x00042c68) popup_clock_analogue_window

0xd0a8,	// (0x00042c68) popup_clock_digital_window

0xd04e,	// (0x00042c0e) grid_indicator_nsta_pane_ParamLimits

0xec05,	// (0x000447c5) clock_nsta_pane_t2

0x0001,

0xfa53,	// (0x00045613) clock_nsta_pane_t

0x1e1e,	// (0x000379de) aid_size_max_handle

0x8790,	// (0x0003e350) aid_size_min_handle

0xcc75,	// (0x00042835) editor_scroll_pane

0x4870,	// (0x0003a430) ex_editor_pane

0xc34d,	// (0x00041f0d) scroll_pane_cp13

0xc1cd,	// (0x00041d8d) scroll_pane_cp14

0xc790,	// (0x00042350) scroll_pane_cp36

0x94b3,	// (0x0003f073) list_single_graphic_hl_pane_cp2_ParamLimits

0x94b3,	// (0x0003f073) list_single_graphic_hl_pane_cp2

0xa51d,	// (0x000400dd) list_single_graphic_hl_pane_ParamLimits

0xa51d,	// (0x000400dd) list_single_graphic_hl_pane

0x1237,	// (0x00036df7) aid_size_min_hl_cp1

0x4878,	// (0x0003a438) list_highlight_pane_cp34_ParamLimits

0x4878,	// (0x0003a438) list_highlight_pane_cp34

0x4889,	// (0x0003a449) list_single_graphic_hl_pane_g1_ParamLimits

0x4889,	// (0x0003a449) list_single_graphic_hl_pane_g1

0x8463,	// (0x0003e023) list_single_graphic_hl_pane_g2_ParamLimits

0x8463,	// (0x0003e023) list_single_graphic_hl_pane_g2

0x8463,	// (0x0003e023) list_single_graphic_hl_pane_g3_ParamLimits

0x8463,	// (0x0003e023) list_single_graphic_hl_pane_g3

0x2d94,	// (0x00038954) list_single_graphic_hl_pane_g4_ParamLimits

0x2d94,	// (0x00038954) list_single_graphic_hl_pane_g4

0x8b3f,	// (0x0003e6ff) list_single_graphic_hl_pane_g5_ParamLimits

0x8b3f,	// (0x0003e6ff) list_single_graphic_hl_pane_g5

0x0004,

0xfb8d,	// (0x0004574d) list_single_graphic_hl_pane_g_ParamLimits

0xfb8d,	// (0x0004574d) list_single_graphic_hl_pane_g

0x846f,	// (0x0003e02f) list_single_graphic_hl_pane_t1_ParamLimits

0x846f,	// (0x0003e02f) list_single_graphic_hl_pane_t1

0x4896,	// (0x0003a456) aid_size_min_hl_cp2

0x489f,	// (0x0003a45f) list_highlight_pane_cp34_cp2_ParamLimits

0x489f,	// (0x0003a45f) list_highlight_pane_cp34_cp2

0x4889,	// (0x0003a449) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4889,	// (0x0003a449) list_single_graphic_hl_pane_g1_cp2

0x48ac,	// (0x0003a46c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x48ac,	// (0x0003a46c) list_single_graphic_hl_pane_g2_cp2

0x48b8,	// (0x0003a478) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x48b8,	// (0x0003a478) list_single_graphic_hl_pane_g3_cp2

0xcbac,	// (0x0004276c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcbac,	// (0x0004276c) list_single_graphic_hl_pane_g4_cp2

0x48c6,	// (0x0003a486) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x48c6,	// (0x0003a486) list_single_graphic_hl_pane_g5_cp2

0x87ec,	// (0x0003e3ac) control_pane_g4_ParamLimits

0x87ec,	// (0x0003e3ac) control_pane_g4

0xc385,	// (0x00041f45) bg_popup_sub_pane_cp10_ParamLimits

0xef69,	// (0x00044b29) list_choice_list_pane_ParamLimits

0xef78,	// (0x00044b38) scroll_pane_cp23

0xbb9a,	// (0x0004175a) bg_popup_preview_window_pane_cp02_ParamLimits

0xf4e9,	// (0x000450a9) list_preview_fixed_pane_ParamLimits

0xf4ff,	// (0x000450bf) list_preview_fixed_pane_cp_ParamLimits

0xf4ff,	// (0x000450bf) list_preview_fixed_pane_cp

0xf50b,	// (0x000450cb) popup_preview_fixed_window_g1_ParamLimits

0xf50b,	// (0x000450cb) popup_preview_fixed_window_g1

0xf517,	// (0x000450d7) popup_preview_fixed_window_g2_ParamLimits

0xf517,	// (0x000450d7) popup_preview_fixed_window_g2

0x0002,

0xfb1c,	// (0x000456dc) popup_preview_fixed_window_g_ParamLimits

0xfb1c,	// (0x000456dc) popup_preview_fixed_window_g

0x1d0d,	// (0x000378cd) aid_navi_side_left_pane_ParamLimits

0x1d22,	// (0x000378e2) aid_navi_side_right_pane_ParamLimits

0x1d3a,	// (0x000378fa) navi_icon_pane_stacon_ParamLimits

0x1d4e,	// (0x0003790e) navi_navi_pane_stacon_ParamLimits

0x1d3a,	// (0x000378fa) navi_text_pane_stacon_ParamLimits

0xb9f7,	// (0x000415b7) main_text_info_pane

0x48f0,	// (0x0003a4b0) listscroll_text_info_pane

0x48f8,	// (0x0003a4b8) list_text_info_pane_ParamLimits

0x48f8,	// (0x0003a4b8) list_text_info_pane

0x4907,	// (0x0003a4c7) scroll_pane_cp24_ParamLimits

0x4907,	// (0x0003a4c7) scroll_pane_cp24

0xa8ed,	// (0x000404ad) list_text_info_pane_t1_ParamLimits

0xa8ed,	// (0x000404ad) list_text_info_pane_t1

0x967a,	// (0x0003f23a) popup_fast_swap2_window_ParamLimits

0x967a,	// (0x0003f23a) popup_fast_swap2_window

0x495e,	// (0x0003a51e) aid_size_cell_fast2

0xb9f7,	// (0x000415b7) bg_popup_window_pane_cp17

0xd54c,	// (0x0004310c) heading_pane_cp2

0xbe63,	// (0x00041a23) listscroll_fast2_pane

0x4968,	// (0x0003a528) grid_fast2_pane

0x4972,	// (0x0003a532) listscroll_fast2_pane_g1

0x497a,	// (0x0003a53a) listscroll_fast2_pane_g2

0x0001,

0xfb98,	// (0x00045758) listscroll_fast2_pane_g

0xc34d,	// (0x00041f0d) scroll_pane_cp26

0x4984,	// (0x0003a544) cell_fast2_pane_ParamLimits

0x4984,	// (0x0003a544) cell_fast2_pane

0x4999,	// (0x0003a559) cell_fast2_pane_g1

0x49a2,	// (0x0003a562) cell_fast2_pane_g2

0x49ab,	// (0x0003a56b) cell_fast2_pane_g3

0x0002,

0xfb9d,	// (0x0004575d) cell_fast2_pane_g

0xbf94,	// (0x00041b54) grid_highlight_pane_cp9

0xbfa9,	// (0x00041b69) main_eswt_pane_ParamLimits

0xbfa9,	// (0x00041b69) main_eswt_pane

0x491c,	// (0x0003a4dc) list_single_text_info_pane

0x49b3,	// (0x0003a573) eswt_ctrl_button_pane

0x49b3,	// (0x0003a573) eswt_ctrl_canvas_pane

0x49bb,	// (0x0003a57b) eswt_ctrl_combo_pane

0x49b3,	// (0x0003a573) eswt_ctrl_default_pane

0x49b3,	// (0x0003a573) eswt_ctrl_label_pane

0x49c3,	// (0x0003a583) eswt_ctrl_wait_pane

0x49cb,	// (0x0003a58b) eswt_shell_pane

0xb9f7,	// (0x000415b7) listscroll_eswt_app_pane

0x49eb,	// (0x0003a5ab) popup_eswt_tasktip_window_ParamLimits

0x49eb,	// (0x0003a5ab) popup_eswt_tasktip_window

0xd2a5,	// (0x00042e65) bg_popup_window_pane_cp18

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_ParamLimits

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_ParamLimits

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_ParamLimits

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_ParamLimits

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4

0x0003,

0xfba4,	// (0x00045764) eswt_control_pane_g_ParamLimits

0xfba4,	// (0x00045764) eswt_control_pane_g

0xc22e,	// (0x00041dee) bg_button_pane_ParamLimits

0xc22e,	// (0x00041dee) bg_button_pane

0xbfa9,	// (0x00041b69) common_borders_pane_copy2_ParamLimits

0xbfa9,	// (0x00041b69) common_borders_pane_copy2

0x4a30,	// (0x0003a5f0) control_button_pane_g1_ParamLimits

0x4a30,	// (0x0003a5f0) control_button_pane_g1

0x4a3c,	// (0x0003a5fc) control_button_pane_g2_ParamLimits

0x4a3c,	// (0x0003a5fc) control_button_pane_g2

0x4a48,	// (0x0003a608) control_button_pane_g3_ParamLimits

0x4a48,	// (0x0003a608) control_button_pane_g3

0x0002,

0xfbad,	// (0x0004576d) control_button_pane_g_ParamLimits

0xfbad,	// (0x0004576d) control_button_pane_g

0x4a5c,	// (0x0003a61c) control_button_pane_t1

0x4a6a,	// (0x0003a62a) control_button_pane_t2

0x0001,

0xfbb4,	// (0x00045774) control_button_pane_t

0xd1b5,	// (0x00042d75) bg_button_pane_g1

0xd1bd,	// (0x00042d7d) bg_button_pane_g2

0xd1c5,	// (0x00042d85) bg_button_pane_g3

0xd1cd,	// (0x00042d8d) bg_button_pane_g4

0xd1d5,	// (0x00042d95) bg_button_pane_g5

0xd1dd,	// (0x00042d9d) bg_button_pane_g6

0xd1e5,	// (0x00042da5) bg_button_pane_g7

0xd1ed,	// (0x00042dad) bg_button_pane_g8

0xd1f5,	// (0x00042db5) bg_button_pane_g9

0x0008,

0xf836,	// (0x000453f6) bg_button_pane_g

0xef24,	// (0x00044ae4) common_borders_pane_ParamLimits

0xef24,	// (0x00044ae4) common_borders_pane

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy1_ParamLimits

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy1

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy1_ParamLimits

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy1

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy1_ParamLimits

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy1

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy1_ParamLimits

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy1

0xef5f,	// (0x00044b1f) bg_eswt_ctrl_canvas_pane_g1

0xef24,	// (0x00044ae4) common_borders_pane_cp2_ParamLimits

0xef24,	// (0x00044ae4) common_borders_pane_cp2

0xef24,	// (0x00044ae4) common_borders_pane_cp3_ParamLimits

0xef24,	// (0x00044ae4) common_borders_pane_cp3

0x4a78,	// (0x0003a638) separator_horizontal_pane

0x4a80,	// (0x0003a640) separator_vertical_pane

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy2_ParamLimits

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy2

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy2_ParamLimits

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy2

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy2_ParamLimits

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy2

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy2_ParamLimits

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy2

0xb9f7,	// (0x000415b7) common_borders_pane_cp4

0x4a89,	// (0x0003a649) separator_horizontal_pane_g1

0x4a92,	// (0x0003a652) separator_horizontal_pane_g2

0x4a9b,	// (0x0003a65b) separator_horizontal_pane_g3

0x0002,

0xfbb9,	// (0x00045779) separator_horizontal_pane_g

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy3_ParamLimits

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy3

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy3_ParamLimits

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy3

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy3_ParamLimits

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy3

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy3_ParamLimits

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy3

0xb9f7,	// (0x000415b7) common_borders_pane_cp5

0x4aa4,	// (0x0003a664) separator_vertical_pane_g1

0x4aad,	// (0x0003a66d) separator_vertical_pane_g2

0x4ab6,	// (0x0003a676) separator_vertical_pane_g3

0x0002,

0xfbc0,	// (0x00045780) separator_vertical_pane_g

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy4_ParamLimits

0x49fc,	// (0x0003a5bc) eswt_control_pane_g1_copy4

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy4_ParamLimits

0x4a09,	// (0x0003a5c9) eswt_control_pane_g2_copy4

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy4_ParamLimits

0x4a16,	// (0x0003a5d6) eswt_control_pane_g3_copy4

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy4_ParamLimits

0x4a23,	// (0x0003a5e3) eswt_control_pane_g4_copy4

0xa90b,	// (0x000404cb) eswt_ctrl_combo_button_pane

0xa913,	// (0x000404d3) eswt_ctrl_input_pane

0xa91b,	// (0x000404db) popup_choice_list_window_cp70

0xa923,	// (0x000404e3) eswt_ctrl_input_pane_t1

0xb9f7,	// (0x000415b7) input_focus_pane_cp70

0xef24,	// (0x00044ae4) bg_button_pane_cp70_ParamLimits

0xef24,	// (0x00044ae4) bg_button_pane_cp70

0xa931,	// (0x000404f1) eswt_ctrl_combo_button_pane_g1

0x4aed,	// (0x0003a6ad) wait_bar_pane_cp70

0xd2a5,	// (0x00042e65) bg_popup_window_pane_cp70_ParamLimits

0xd2a5,	// (0x00042e65) bg_popup_window_pane_cp70

0x4af5,	// (0x0003a6b5) popup_eswt_tasktip_window_t1

0x4b0b,	// (0x0003a6cb) wait_bar_pane_cp71_ParamLimits

0x4b0b,	// (0x0003a6cb) wait_bar_pane_cp71

0x4b17,	// (0x0003a6d7) grid_eswt_app_pane

0xc5a5,	// (0x00042165) scroll_pane_cp70

0xa939,	// (0x000404f9) cell_eswt_app_pane_ParamLimits

0xa939,	// (0x000404f9) cell_eswt_app_pane

0xa963,	// (0x00040523) cell_eswt_app_pane_g1_ParamLimits

0xa963,	// (0x00040523) cell_eswt_app_pane_g1

0xa992,	// (0x00040552) cell_eswt_app_pane_g2_ParamLimits

0xa992,	// (0x00040552) cell_eswt_app_pane_g2

0x0001,

0xfbc7,	// (0x00045787) cell_eswt_app_pane_g_ParamLimits

0xfbc7,	// (0x00045787) cell_eswt_app_pane_g

0xa9bb,	// (0x0004057b) cell_eswt_app_pane_t1_ParamLimits

0xa9bb,	// (0x0004057b) cell_eswt_app_pane_t1

0x4bde,	// (0x0003a79e) grid_highlight_pane_cp70_ParamLimits

0x4bde,	// (0x0003a79e) grid_highlight_pane_cp70

0xcb48,	// (0x00042708) set_content_pane_g1

0xce4c,	// (0x00042a0c) status_small_volume_pane

0x2d1d,	// (0x000388dd) status_small_volume_pane_g1

0x2d25,	// (0x000388e5) volume_small2_pane

0x2d2e,	// (0x000388ee) volume_small2_pane_g1

0x2d37,	// (0x000388f7) volume_small2_pane_g2

0x2d40,	// (0x00038900) volume_small2_pane_g3

0x2d49,	// (0x00038909) volume_small2_pane_g4

0x2d52,	// (0x00038912) volume_small2_pane_g5

0x2d5b,	// (0x0003891b) volume_small2_pane_g6

0x2d64,	// (0x00038924) volume_small2_pane_g7

0x2d6d,	// (0x0003892d) volume_small2_pane_g8

0x2d76,	// (0x00038936) volume_small2_pane_g9

0x2d7f,	// (0x0003893f) volume_small2_pane_g10

0x0009,

0xfbcc,	// (0x0004578c) volume_small2_pane_g

0xf301,	// (0x00044ec1) fep_vkb_top_text_pane_g1_ParamLimits

0xa895,	// (0x00040455) fep_vkb_top_text_pane_t1_ParamLimits

0xf523,	// (0x000450e3) popup_preview_fixed_window_g3_ParamLimits

0xf523,	// (0x000450e3) popup_preview_fixed_window_g3

0x9c7d,	// (0x0003f83d) popup_toolbar_trans_pane

0xa395,	// (0x0003ff55) aid_height_set_list_ParamLimits

0xd8d8,	// (0x00043498) aid_size_parent_ParamLimits

0xc385,	// (0x00041f45) list_highlight_pane_cp2_ParamLimits

0xcb48,	// (0x00042708) set_content_pane_g1_ParamLimits

0x8451,	// (0x0003e011) list_single_image_pane_ParamLimits

0x8451,	// (0x0003e011) list_single_image_pane

0xa9ed,	// (0x000405ad) aid_size_cell_image_ParamLimits

0xa9ed,	// (0x000405ad) aid_size_cell_image

0xa9fa,	// (0x000405ba) grid_single_image_pane_ParamLimits

0xa9fa,	// (0x000405ba) grid_single_image_pane

0xc248,	// (0x00041e08) list_single_image_pane_g1_ParamLimits

0xc248,	// (0x00041e08) list_single_image_pane_g1

0xc254,	// (0x00041e14) list_single_image_pane_g2_ParamLimits

0xc254,	// (0x00041e14) list_single_image_pane_g2

0x0001,

0xfbe1,	// (0x000457a1) list_single_image_pane_g_ParamLimits

0xfbe1,	// (0x000457a1) list_single_image_pane_g

0x4c03,	// (0x0003a7c3) list_single_image_pane_t1_ParamLimits

0x4c03,	// (0x0003a7c3) list_single_image_pane_t1

0xaa06,	// (0x000405c6) cell_image_list_pane_ParamLimits

0xaa06,	// (0x000405c6) cell_image_list_pane

0xaa1a,	// (0x000405da) cell_image_list_pane_g1

0xaa23,	// (0x000405e3) cell_image_list_pane_g2

0x0001,

0xfbe6,	// (0x000457a6) cell_image_list_pane_g

0x4c3f,	// (0x0003a7ff) aid_size_cell_tb_trans_pane

0xc22e,	// (0x00041dee) bg_tb_trans_pane

0x4c51,	// (0x0003a811) grid_tb_trans_pane

0xd1b5,	// (0x00042d75) bg_tb_trans_pane_g1

0xd1bd,	// (0x00042d7d) bg_tb_trans_pane_g2

0xd1c5,	// (0x00042d85) bg_tb_trans_pane_g3

0xd1cd,	// (0x00042d8d) bg_tb_trans_pane_g4

0xd1d5,	// (0x00042d95) bg_tb_trans_pane_g5

0xd1ed,	// (0x00042dad) bg_tb_trans_pane_g6

0xd1f5,	// (0x00042db5) bg_tb_trans_pane_g7

0xd1dd,	// (0x00042d9d) bg_tb_trans_pane_g8

0xd1e5,	// (0x00042da5) bg_tb_trans_pane_g9

0x0008,

0xfbeb,	// (0x000457ab) bg_tb_trans_pane_g

0x4c65,	// (0x0003a825) cell_toolbar_trans_pane_ParamLimits

0x4c65,	// (0x0003a825) cell_toolbar_trans_pane

0xef5f,	// (0x00044b1f) cell_toolbar_trans_pane_g1

0xa73e,	// (0x000402fe) list_form2_midp_pane_t1

0xa74c,	// (0x0004030c) list_form2_midp_pane_t2

0x0001,

0xfa99,	// (0x00045659) list_form2_midp_pane_t

0xecbc,	// (0x0004487c) scroll_pane_cp51_ParamLimits

0xee32,	// (0x000449f2) form2_midp_wait_pane_g1

0xee3b,	// (0x000449fb) form2_midp_wait_pane_g2

0xee44,	// (0x00044a04) form2_midp_wait_pane_g3

0x0002,

0xfaae,	// (0x0004566e) form2_midp_wait_pane_g

0xba67,	// (0x00041627) list_highlight_pane_cp21_ParamLimits

0xee64,	// (0x00044a24) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xee73,	// (0x00044a33) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe35d,	// (0x00043f1d) list_single_2graphic_im_pane_ParamLimits

0xe35d,	// (0x00043f1d) list_single_2graphic_im_pane

0xaa2c,	// (0x000405ec) list_single_2graphic_im_pane_g1_ParamLimits

0xaa2c,	// (0x000405ec) list_single_2graphic_im_pane_g1

0xaa3d,	// (0x000405fd) list_single_2graphic_im_pane_g2_ParamLimits

0xaa3d,	// (0x000405fd) list_single_2graphic_im_pane_g2

0xaa49,	// (0x00040609) list_single_2graphic_im_pane_g3_ParamLimits

0xaa49,	// (0x00040609) list_single_2graphic_im_pane_g3

0x0003,

0xfbfe,	// (0x000457be) list_single_2graphic_im_pane_g_ParamLimits

0xfbfe,	// (0x000457be) list_single_2graphic_im_pane_g

0xaa5d,	// (0x0004061d) list_single_2graphic_im_pane_t1_ParamLimits

0xaa5d,	// (0x0004061d) list_single_2graphic_im_pane_t1

0xf52f,	// (0x000450ef) list_single_graphic_2heading_pane_fp_ParamLimits

0xf52f,	// (0x000450ef) list_single_graphic_2heading_pane_fp

0x10a9,	// (0x00036c69) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x10a9,	// (0x00036c69) list_single_graphic_2heading_pane_fp_g1

0xf546,	// (0x00045106) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf546,	// (0x00045106) list_single_graphic_2heading_pane_fp_g2

0x1b15,	// (0x000376d5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1b15,	// (0x000376d5) list_single_graphic_2heading_pane_fp_g3

0x107e,	// (0x00036c3e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x107e,	// (0x00036c3e) list_single_graphic_2heading_pane_fp_g4

0xf552,	// (0x00045112) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf552,	// (0x00045112) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb2c,	// (0x000456ec) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb2c,	// (0x000456ec) list_single_graphic_2heading_pane_fp_g

0x1260,	// (0x00036e20) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1260,	// (0x00036e20) list_single_graphic_2heading_pane_fp_t1

0x10e1,	// (0x00036ca1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x10e1,	// (0x00036ca1) list_single_graphic_2heading_pane_fp_t2

0x1276,	// (0x00036e36) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1276,	// (0x00036e36) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc07,	// (0x000457c7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc07,	// (0x000457c7) list_single_graphic_2heading_pane_fp_t

0xefff,	// (0x00044bbf) fep_hwr_write_pane_g5_ParamLimits

0xefff,	// (0x00044bbf) fep_hwr_write_pane_g5

0xf00b,	// (0x00044bcb) fep_hwr_write_pane_g6_ParamLimits

0xf00b,	// (0x00044bcb) fep_hwr_write_pane_g6

0x49cb,	// (0x0003a58b) eswt_shell_pane_ParamLimits

0xd2a5,	// (0x00042e65) bg_popup_window_pane_cp18_ParamLimits

0xe29d,	// (0x00043e5d) heading_pane_cp70

0x4af5,	// (0x0003a6b5) popup_eswt_tasktip_window_t1_ParamLimits

0x9d3e,	// (0x0003f8fe) aid_touch_tab_arrow_left

0x9d54,	// (0x0003f914) aid_touch_tab_arrow_right

0x9003,	// (0x0003ebc3) title_pane_g3_ParamLimits

0x9003,	// (0x0003ebc3) title_pane_g3

0xc1ed,	// (0x00041dad) set_value_pane_g1

0x9c7d,	// (0x0003f83d) popup_toolbar_trans_pane_ParamLimits

0x4c3f,	// (0x0003a7ff) aid_size_cell_tb_trans_pane_ParamLimits

0xc22e,	// (0x00041dee) bg_tb_trans_pane_ParamLimits

0x4c51,	// (0x0003a811) grid_tb_trans_pane_ParamLimits

0xbb9a,	// (0x0004175a) cont_note_pane_ParamLimits

0xbb9a,	// (0x0004175a) cont_note_pane

0xbfa9,	// (0x00041b69) cont_snote2_single_text_pane_ParamLimits

0xbfa9,	// (0x00041b69) cont_snote2_single_text_pane

0xbfa9,	// (0x00041b69) cont_snote2_single_graphic_pane_ParamLimits

0xbfa9,	// (0x00041b69) cont_snote2_single_graphic_pane

0xd762,	// (0x00043322) cont_note_wait_pane_ParamLimits

0xd762,	// (0x00043322) cont_note_wait_pane

0xd762,	// (0x00043322) cont_note_image_pane_ParamLimits

0xd762,	// (0x00043322) cont_note_image_pane

0x4cf9,	// (0x0003a8b9) popup_note2_window_g1_ParamLimits

0x4cf9,	// (0x0003a8b9) popup_note2_window_g1

0x4d2a,	// (0x0003a8ea) popup_note2_window_t1_ParamLimits

0x4d2a,	// (0x0003a8ea) popup_note2_window_t1

0x4d6f,	// (0x0003a92f) popup_note2_window_t2_ParamLimits

0x4d6f,	// (0x0003a92f) popup_note2_window_t2

0x4db4,	// (0x0003a974) popup_note2_window_t3_ParamLimits

0x4db4,	// (0x0003a974) popup_note2_window_t3

0x4df9,	// (0x0003a9b9) popup_note2_window_t4_ParamLimits

0x4df9,	// (0x0003a9b9) popup_note2_window_t4

0xbcf5,	// (0x000418b5) popup_note2_window_t5_ParamLimits

0xbcf5,	// (0x000418b5) popup_note2_window_t5

0x0004,

0xfc13,	// (0x000457d3) popup_note2_window_t_ParamLimits

0xfc13,	// (0x000457d3) popup_note2_window_t

0x4e28,	// (0x0003a9e8) popup_note2_image_window_g1_ParamLimits

0x4e28,	// (0x0003a9e8) popup_note2_image_window_g1

0x4e34,	// (0x0003a9f4) popup_note2_image_window_g2_ParamLimits

0x4e34,	// (0x0003a9f4) popup_note2_image_window_g2

0x0001,

0xfc1e,	// (0x000457de) popup_note2_image_window_g_ParamLimits

0xfc1e,	// (0x000457de) popup_note2_image_window_g

0x4e46,	// (0x0003aa06) popup_note2_image_window_t1_ParamLimits

0x4e46,	// (0x0003aa06) popup_note2_image_window_t1

0x4e5e,	// (0x0003aa1e) popup_note2_image_window_t2_ParamLimits

0x4e5e,	// (0x0003aa1e) popup_note2_image_window_t2

0x4e76,	// (0x0003aa36) popup_note2_image_window_t3_ParamLimits

0x4e76,	// (0x0003aa36) popup_note2_image_window_t3

0x0002,

0xfc23,	// (0x000457e3) popup_note2_image_window_t_ParamLimits

0xfc23,	// (0x000457e3) popup_note2_image_window_t

0xd770,	// (0x00043330) popup_note2_wait_window_g1_ParamLimits

0xd770,	// (0x00043330) popup_note2_wait_window_g1

0xd77c,	// (0x0004333c) popup_note2_wait_window_g2_ParamLimits

0xd77c,	// (0x0004333c) popup_note2_wait_window_g2

0xd788,	// (0x00043348) popup_note2_wait_window_g3_ParamLimits

0xd788,	// (0x00043348) popup_note2_wait_window_g3

0x0002,

0x002f,	// (0x00035bef) popup_note2_wait_window_g_ParamLimits

0x002f,	// (0x00035bef) popup_note2_wait_window_g

0x4e92,	// (0x0003aa52) popup_note2_wait_window_t1_ParamLimits

0x4e92,	// (0x0003aa52) popup_note2_wait_window_t1

0x4eb0,	// (0x0003aa70) popup_note2_wait_window_t2_ParamLimits

0x4eb0,	// (0x0003aa70) popup_note2_wait_window_t2

0x4ece,	// (0x0003aa8e) popup_note2_wait_window_t3_ParamLimits

0x4ece,	// (0x0003aa8e) popup_note2_wait_window_t3

0x4ee0,	// (0x0003aaa0) popup_note2_wait_window_t4_ParamLimits

0x4ee0,	// (0x0003aaa0) popup_note2_wait_window_t4

0x0003,

0xfc2a,	// (0x000457ea) popup_note2_wait_window_t_ParamLimits

0xfc2a,	// (0x000457ea) popup_note2_wait_window_t

0x4ef2,	// (0x0003aab2) wait_bar2_pane_ParamLimits

0x4ef2,	// (0x0003aab2) wait_bar2_pane

0x4f0a,	// (0x0003aaca) popup_snote2_single_text_window_g1_ParamLimits

0x4f0a,	// (0x0003aaca) popup_snote2_single_text_window_g1

0x4f32,	// (0x0003aaf2) popup_snote2_single_text_window_t1_ParamLimits

0x4f32,	// (0x0003aaf2) popup_snote2_single_text_window_t1

0x4f7e,	// (0x0003ab3e) popup_snote2_single_text_window_t2_ParamLimits

0x4f7e,	// (0x0003ab3e) popup_snote2_single_text_window_t2

0x4fca,	// (0x0003ab8a) popup_snote2_single_text_window_t3_ParamLimits

0x4fca,	// (0x0003ab8a) popup_snote2_single_text_window_t3

0x500b,	// (0x0003abcb) popup_snote2_single_text_window_t4_ParamLimits

0x500b,	// (0x0003abcb) popup_snote2_single_text_window_t4

0x5041,	// (0x0003ac01) popup_snote2_single_text_window_t5_ParamLimits

0x5041,	// (0x0003ac01) popup_snote2_single_text_window_t5

0x0004,

0xfc33,	// (0x000457f3) popup_snote2_single_text_window_t_ParamLimits

0xfc33,	// (0x000457f3) popup_snote2_single_text_window_t

0x506c,	// (0x0003ac2c) popup_snote2_single_graphic_window_g1_ParamLimits

0x506c,	// (0x0003ac2c) popup_snote2_single_graphic_window_g1

0x5094,	// (0x0003ac54) popup_snote2_single_graphic_window_g2_ParamLimits

0x5094,	// (0x0003ac54) popup_snote2_single_graphic_window_g2

0x0001,

0xfc3e,	// (0x000457fe) popup_snote2_single_graphic_window_g_ParamLimits

0xfc3e,	// (0x000457fe) popup_snote2_single_graphic_window_g

0x50bc,	// (0x0003ac7c) popup_snote2_single_graphic_window_t1_ParamLimits

0x50bc,	// (0x0003ac7c) popup_snote2_single_graphic_window_t1

0x5108,	// (0x0003acc8) popup_snote2_single_graphic_window_t2_ParamLimits

0x5108,	// (0x0003acc8) popup_snote2_single_graphic_window_t2

0x4fca,	// (0x0003ab8a) popup_snote2_single_graphic_window_t3_ParamLimits

0x4fca,	// (0x0003ab8a) popup_snote2_single_graphic_window_t3

0x500b,	// (0x0003abcb) popup_snote2_single_graphic_window_t4_ParamLimits

0x500b,	// (0x0003abcb) popup_snote2_single_graphic_window_t4

0x5041,	// (0x0003ac01) popup_snote2_single_graphic_window_t5_ParamLimits

0x5041,	// (0x0003ac01) popup_snote2_single_graphic_window_t5

0x0004,

0xfc43,	// (0x00045803) popup_snote2_single_graphic_window_t_ParamLimits

0xfc43,	// (0x00045803) popup_snote2_single_graphic_window_t

0xec6c,	// (0x0004482c) clock_nsta_pane_cp2_t1

0xec6c,	// (0x0004482c) clock_nsta_pane_cp2_t2

0x0001,

0xfa6f,	// (0x0004562f) clock_nsta_pane_cp2_t

0x0ace,	// (0x0003668e) form_field_data_wide_pane_g1_ParamLimits

0xc248,	// (0x00041e08) form_field_data_wide_pane_g2_ParamLimits

0xc248,	// (0x00041e08) form_field_data_wide_pane_g2

0xc254,	// (0x00041e14) form_field_data_wide_pane_g3_ParamLimits

0xc254,	// (0x00041e14) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0004525c) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0004525c) form_field_data_wide_pane_g

0xa654,	// (0x00040214) grid_touch_3_pane_ParamLimits

0xa654,	// (0x00040214) grid_touch_3_pane

0xaa8e,	// (0x0004064e) cell_touch_3_pane_ParamLimits

0xaa8e,	// (0x0004064e) cell_touch_3_pane

0xef5f,	// (0x00044b1f) cell_touch_3_pane_g1

0xef5f,	// (0x00044b1f) cell_touch_3_pane_g2

0x0001,

0xfaef,	// (0x000456af) cell_touch_3_pane_g

0xbd27,	// (0x000418e7) cont_query_data_pane

0xbd2f,	// (0x000418ef) cont_query_data_pane_cp1

0x5183,	// (0x0003ad43) button_value_adjust_pane_cp7

0x518b,	// (0x0003ad4b) query_popup_pane_cp3

0xc7c2,	// (0x00042382) bg_popup_sub_pane_cp22_ParamLimits

0x1f39,	// (0x00037af9) navi_navi_volume_pane_cp2

0x1f54,	// (0x00037b14) popup_side_volume_key_window_g2

0x1f63,	// (0x00037b23) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x000452ee) popup_side_volume_key_window_g

0x1f80,	// (0x00037b40) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x000452f5) popup_side_volume_key_window_t

0xca12,	// (0x000425d2) popup_side_volume_key_window_ParamLimits

0x875b,	// (0x0003e31b) list_double_graphic_pane_g4_ParamLimits

0x875b,	// (0x0003e31b) list_double_graphic_pane_g4

0x8ade,	// (0x0003e69e) list_single_2heading_msg_pane_ParamLimits

0x8ade,	// (0x0003e69e) list_single_2heading_msg_pane

0x8b53,	// (0x0003e713) list_single_2heading_msg_pane_g1_ParamLimits

0x8b53,	// (0x0003e713) list_single_2heading_msg_pane_g1

0x8b5f,	// (0x0003e71f) list_single_2heading_msg_pane_g2_ParamLimits

0x8b5f,	// (0x0003e71f) list_single_2heading_msg_pane_g2

0x8b72,	// (0x0003e732) list_single_2heading_msg_pane_g3_ParamLimits

0x8b72,	// (0x0003e732) list_single_2heading_msg_pane_g3

0x8b7e,	// (0x0003e73e) list_single_2heading_msg_pane_g4_ParamLimits

0x8b7e,	// (0x0003e73e) list_single_2heading_msg_pane_g4

0x0003,

0xfc4e,	// (0x0004580e) list_single_2heading_msg_pane_g_ParamLimits

0xfc4e,	// (0x0004580e) list_single_2heading_msg_pane_g

0x8485,	// (0x0003e045) list_single_2heading_msg_pane_t1_ParamLimits

0x8485,	// (0x0003e045) list_single_2heading_msg_pane_t1

0x84ad,	// (0x0003e06d) list_single_2heading_msg_pane_t2_ParamLimits

0x84ad,	// (0x0003e06d) list_single_2heading_msg_pane_t2

0x8518,	// (0x0003e0d8) list_single_2heading_msg_pane_t3_ParamLimits

0x8518,	// (0x0003e0d8) list_single_2heading_msg_pane_t3

0x132b,	// (0x00036eeb) list_single_2heading_msg_pane_t4_ParamLimits

0x132b,	// (0x00036eeb) list_single_2heading_msg_pane_t4

0x0003,

0xfc57,	// (0x00045817) list_single_2heading_msg_pane_t_ParamLimits

0xfc57,	// (0x00045817) list_single_2heading_msg_pane_t

0xba15,	// (0x000415d5) title_pane_g4_ParamLimits

0xba15,	// (0x000415d5) title_pane_g4

0x1c5d,	// (0x0003781d) title_pane_stacon_g3_ParamLimits

0x1c5d,	// (0x0003781d) title_pane_stacon_g3

0x4cbc,	// (0x0003a87c) list_single_2graphic_im_pane_g4_ParamLimits

0x4cbc,	// (0x0003a87c) list_single_2graphic_im_pane_g4

0xe0b5,	// (0x00043c75) popup_side_volume_key_window_cp

0xe58d,	// (0x0004414d) main_idle_act2_pane_t1

0x249d,	// (0x0003805d) toolbar_button_pane_g10

0x9320,	// (0x0003eee0) popup_toolbar_window_cp1

0xec5d,	// (0x0004481d) clock_nsta_pane_cp_t1

0xec5d,	// (0x0004481d) clock_nsta_pane_cp_t2

0x0001,

0xfa6a,	// (0x0004562a) clock_nsta_pane_cp_t

0x1f39,	// (0x00037af9) navi_navi_volume_pane_cp2_ParamLimits

0x1f48,	// (0x00037b08) popup_side_volume_key_window_g1_ParamLimits

0x1f54,	// (0x00037b14) popup_side_volume_key_window_g2_ParamLimits

0x1f63,	// (0x00037b23) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x000452ee) popup_side_volume_key_window_g_ParamLimits

0x2a48,	// (0x00038608) fep_hwr_aid_pane

0x9456,	// (0x0003f016) bg_fep_hwr_top_pane_g4_ParamLimits

0xefcf,	// (0x00044b8f) fep_hwr_top_pane_g1_ParamLimits

0xefe1,	// (0x00044ba1) fep_hwr_top_pane_g2_ParamLimits

0x2b01,	// (0x000386c1) fep_hwr_top_pane_g3_ParamLimits

0xfabf,	// (0x0004567f) fep_hwr_top_pane_g_ParamLimits

0x2b16,	// (0x000386d6) fep_hwr_top_text_pane_ParamLimits

0xdeaa,	// (0x00043a6a) aid_touch_tab_arrow_arrow_2

0xdeb3,	// (0x00043a73) aid_touch_tab_arrow_left_2

0x2a5c,	// (0x0003861c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2a93,	// (0x00038653) fep_hwr_prediction_pane

0xf136,	// (0x00044cf6) fep_vkb_prediction_pane

0xa875,	// (0x00040435) fep_vkb_side_pane_g3_ParamLimits

0xa875,	// (0x00040435) fep_vkb_side_pane_g3

0xf1f4,	// (0x00044db4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x47a7,	// (0x0003a367) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x47b4,	// (0x0003a374) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb64,	// (0x00045724) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x51b0,	// (0x0003ad70) fep_hwr_prediction_pane_g1

0x2dc4,	// (0x00038984) fep_hwr_prediction_pane_g2

0x2dcc,	// (0x0003898c) fep_hwr_prediction_pane_g3

0x2dd4,	// (0x00038994) fep_hwr_prediction_pane_g4

0x0003,

0xfc60,	// (0x00045820) fep_hwr_prediction_pane_g

0x51b0,	// (0x0003ad70) fep_vkb_prediction_pane_g1

0x51ba,	// (0x0003ad7a) fep_vkb_prediction_pane_g2

0x51c2,	// (0x0003ad82) fep_vkb_prediction_pane_g3

0x51ca,	// (0x0003ad8a) fep_vkb_prediction_pane_g4

0x0003,

0xfc69,	// (0x00045829) fep_vkb_prediction_pane_g

0x2775,	// (0x00038335) slider_set_pane_g3

0x2789,	// (0x00038349) slider_set_pane_g4

0x27a1,	// (0x00038361) slider_set_pane_g5

0x2775,	// (0x00038335) slider_set_pane_g6

0x27b7,	// (0x00038377) slider_set_pane_g7

0xe322,	// (0x00043ee2) slider_form_pane_g3

0xe32b,	// (0x00043eeb) slider_form_pane_g4

0xe333,	// (0x00043ef3) slider_form_pane_g5

0xe322,	// (0x00043ee2) slider_form_pane_g6

0xa4dc,	// (0x0004009c) slider_form_pane_g7

0xe82b,	// (0x000443eb) slider_set_pane_vc_g3

0xe834,	// (0x000443f4) slider_set_pane_vc_g4

0xe83d,	// (0x000443fd) slider_set_pane_vc_g5

0xe82b,	// (0x000443eb) slider_set_pane_vc_g6

0xe846,	// (0x00044406) slider_set_pane_vc_g7

0xe82b,	// (0x000443eb) slider_form_pane_vc_g1

0xe834,	// (0x000443f4) slider_form_pane_vc_g2

0xe83d,	// (0x000443fd) slider_form_pane_vc_g3

0xe82b,	// (0x000443eb) slider_form_pane_vc_g4

0xe9d5,	// (0x00044595) slider_form_pane_vc_g5

0x0004,

0xfa43,	// (0x00045603) slider_form_pane_vc_g

0xb9f7,	// (0x000415b7) main_idle_act3_pane

0x51d2,	// (0x0003ad92) ai3_links_pane

0xaad7,	// (0x00040697) popup_ai3_data_window_ParamLimits

0xaad7,	// (0x00040697) popup_ai3_data_window

0xb9f7,	// (0x000415b7) grid_ai3_links_pane

0xaaef,	// (0x000406af) cell_ai3_links_pane_ParamLimits

0xaaef,	// (0x000406af) cell_ai3_links_pane

0x520b,	// (0x0003adcb) bg_popup_sub_pane_cp11

0x5218,	// (0x0003add8) cell_ai3_links_pane_g1

0xb9f7,	// (0x000415b7) bg_popup_sub_pane_cp12

0x523d,	// (0x0003adfd) heading_ai3_data_pane

0x5245,	// (0x0003ae05) list_ai3_gene_pane

0x5251,	// (0x0003ae11) popup_ai3_data_window_g1

0x5259,	// (0x0003ae19) heading_ai3_data_pane_g1

0x5261,	// (0x0003ae21) heading_ai3_data_pane_t1

0x526f,	// (0x0003ae2f) list_double_ai3_gene_pane_ParamLimits

0x526f,	// (0x0003ae2f) list_double_ai3_gene_pane

0x527c,	// (0x0003ae3c) list_single_ai3_gene_pane_ParamLimits

0x527c,	// (0x0003ae3c) list_single_ai3_gene_pane

0xef24,	// (0x00044ae4) list_highlight_pane_cp7_ParamLimits

0xef24,	// (0x00044ae4) list_highlight_pane_cp7

0x5289,	// (0x0003ae49) list_single_a13_gene_pane_t1_ParamLimits

0x5289,	// (0x0003ae49) list_single_a13_gene_pane_t1

0x52a0,	// (0x0003ae60) list_single_ai3_gene_pane_g1

0x52a9,	// (0x0003ae69) list_single_ai3_gene_pane_g2

0x0001,

0xfc72,	// (0x00045832) list_single_ai3_gene_pane_g

0x52b1,	// (0x0003ae71) list_double_ai3_gene_pane_g1_ParamLimits

0x52b1,	// (0x0003ae71) list_double_ai3_gene_pane_g1

0x52bd,	// (0x0003ae7d) list_double_ai3_gene_pane_t1_ParamLimits

0x52bd,	// (0x0003ae7d) list_double_ai3_gene_pane_t1

0x52d9,	// (0x0003ae99) list_double_ai3_gene_pane_t2_ParamLimits

0x52d9,	// (0x0003ae99) list_double_ai3_gene_pane_t2

0x52ee,	// (0x0003aeae) list_double_ai3_gene_pane_t3_ParamLimits

0x52ee,	// (0x0003aeae) list_double_ai3_gene_pane_t3

0x0002,

0xfc77,	// (0x00045837) list_double_ai3_gene_pane_t_ParamLimits

0xfc77,	// (0x00045837) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x128c,	// (0x00036e4c) aid_size_min_col_2

0xaac1,	// (0x00040681) aid_size_min_msg_ParamLimits

0xaac1,	// (0x00040681) aid_size_min_msg

0xa889,	// (0x00040449) fep_vkb_top_text_pane_g2_ParamLimits

0xa889,	// (0x00040449) fep_vkb_top_text_pane_g2

0x0001,

0xfaea,	// (0x000456aa) fep_vkb_top_text_pane_g_ParamLimits

0xfaea,	// (0x000456aa) fep_vkb_top_text_pane_g

0xb9f7,	// (0x000415b7) main_hc_apps_shell_pane

0x530b,	// (0x0003aecb) grid_hc_apps_pane_ParamLimits

0x530b,	// (0x0003aecb) grid_hc_apps_pane

0x531a,	// (0x0003aeda) list_hc_apps_pane

0x5322,	// (0x0003aee2) scroll_pane_cp37_ParamLimits

0x5322,	// (0x0003aee2) scroll_pane_cp37

0xab09,	// (0x000406c9) cell_hc_apps_pane_ParamLimits

0xab09,	// (0x000406c9) cell_hc_apps_pane

0xabc9,	// (0x00040789) cell_hc_apps_pane_g1_ParamLimits

0xabc9,	// (0x00040789) cell_hc_apps_pane_g1

0x540f,	// (0x0003afcf) cell_hc_apps_pane_g2_ParamLimits

0x540f,	// (0x0003afcf) cell_hc_apps_pane_g2

0x542b,	// (0x0003afeb) cell_hc_apps_pane_g3_ParamLimits

0x542b,	// (0x0003afeb) cell_hc_apps_pane_g3

0x0002,

0xfc7e,	// (0x0004583e) cell_hc_apps_pane_g_ParamLimits

0xfc7e,	// (0x0004583e) cell_hc_apps_pane_g

0xabf6,	// (0x000407b6) cell_hc_apps_pane_t1_ParamLimits

0xabf6,	// (0x000407b6) cell_hc_apps_pane_t1

0xbb9a,	// (0x0004175a) grid_highlight_pane_cp10_ParamLimits

0xbb9a,	// (0x0004175a) grid_highlight_pane_cp10

0xac34,	// (0x000407f4) list_single_hc_apps_pane_ParamLimits

0xac34,	// (0x000407f4) list_single_hc_apps_pane

0x5500,	// (0x0003b0c0) list_single_hc_apps_pane_g1

0x2ddc,	// (0x0003899c) list_single_hc_apps_pane_g2

0x0001,

0xfc85,	// (0x00045845) list_single_hc_apps_pane_g

0x2df5,	// (0x000389b5) list_single_hc_apps_pane_g2_copy1

0x1350,	// (0x00036f10) list_single_hc_apps_pane_t1

0xba67,	// (0x00041627) bg_set_opt_pane_cp_ParamLimits

0x1855,	// (0x00037415) setting_slider_pane_t1_ParamLimits

0x186e,	// (0x0003742e) setting_slider_pane_t2_ParamLimits

0x1887,	// (0x00037447) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004513a) setting_slider_pane_t_ParamLimits

0x189e,	// (0x0003745e) slider_set_pane_ParamLimits

0x2338,	// (0x00037ef8) control_pane_g5_ParamLimits

0x2338,	// (0x00037ef8) control_pane_g5

0xe2e4,	// (0x00043ea4) slider_set_pane_g1_ParamLimits

0x2769,	// (0x00038329) slider_set_pane_g2_ParamLimits

0x2775,	// (0x00038335) slider_set_pane_g3_ParamLimits

0x2789,	// (0x00038349) slider_set_pane_g4_ParamLimits

0x27a1,	// (0x00038361) slider_set_pane_g5_ParamLimits

0x2775,	// (0x00038335) slider_set_pane_g6_ParamLimits

0x27b7,	// (0x00038377) slider_set_pane_g7_ParamLimits

0xf91d,	// (0x000454dd) slider_set_pane_g_ParamLimits

0xcaf3,	// (0x000426b3) navi_icon_text_pane_ParamLimits

0x9d0a,	// (0x0003f8ca) aid_fill_nsta_2_ParamLimits

0x9d3e,	// (0x0003f8fe) aid_touch_tab_arrow_left_ParamLimits

0x9d54,	// (0x0003f914) aid_touch_tab_arrow_right_ParamLimits

0x9def,	// (0x0003f9af) clock_nsta_pane_ParamLimits

0xa284,	// (0x0003fe44) navi_icon_pane_g1_ParamLimits

0xa290,	// (0x0003fe50) navi_text_pane_t1_ParamLimits

0xa720,	// (0x000402e0) navi_icon_text_pane_g1_ParamLimits

0xa72c,	// (0x000402ec) navi_icon_text_pane_t1_ParamLimits

0x5500,	// (0x0003b0c0) list_single_hc_apps_pane_g1_ParamLimits

0x2ddc,	// (0x0003899c) list_single_hc_apps_pane_g2_ParamLimits

0xfc85,	// (0x00045845) list_single_hc_apps_pane_g_ParamLimits

0x2df5,	// (0x000389b5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1350,	// (0x00036f10) list_single_hc_apps_pane_t1_ParamLimits

0x86bc,	// (0x0003e27c) popup_toolbar2_fixed_window_ParamLimits

0x86bc,	// (0x0003e27c) popup_toolbar2_fixed_window

0x9c73,	// (0x0003f833) popup_toolbar2_float_window

0xb9f7,	// (0x000415b7) bg_popup_sub_pane_cp27

0x5519,	// (0x0003b0d9) grid_toolbar2_float_pane

0xb9f7,	// (0x000415b7) bg_popup_sub_pane_cp26

0x5519,	// (0x0003b0d9) grid_toolbar2_fixed_pane

0xac67,	// (0x00040827) cell_toolbar2_fixed_pane_ParamLimits

0xac67,	// (0x00040827) cell_toolbar2_fixed_pane

0xac82,	// (0x00040842) cell_toolbar2_fixed_pane_g1

0x553b,	// (0x0003b0fb) toolbar2_fixed_button_pane

0xd1b5,	// (0x00042d75) toolbar2_fixed_button_pane_g1

0xd1bd,	// (0x00042d7d) toolbar2_fixed_button_pane_g2

0xd1c5,	// (0x00042d85) toolbar2_fixed_button_pane_g3

0xd1cd,	// (0x00042d8d) toolbar2_fixed_button_pane_g4

0xd1d5,	// (0x00042d95) toolbar2_fixed_button_pane_g5

0xd1dd,	// (0x00042d9d) toolbar2_fixed_button_pane_g6

0xd1e5,	// (0x00042da5) toolbar2_fixed_button_pane_g7

0xd1ed,	// (0x00042dad) toolbar2_fixed_button_pane_g8

0xd1f5,	// (0x00042db5) toolbar2_fixed_button_pane_g9

0x0008,

0xf836,	// (0x000453f6) toolbar2_fixed_button_pane_g

0x5543,	// (0x0003b103) cell_toolbar2_float_pane_ParamLimits

0x5543,	// (0x0003b103) cell_toolbar2_float_pane

0x5554,	// (0x0003b114) cell_toolbar2_float_pane_g1

0x553b,	// (0x0003b0fb) toolbar2_fixed_button_pane_cp

0xa83c,	// (0x000403fc) fep_vkb_accented_list_pane_ParamLimits

0xa83c,	// (0x000403fc) fep_vkb_accented_list_pane

0x2c64,	// (0x00038824) bg_popup_fep_shadow_pane_g9

0xcc75,	// (0x00042835) bg_popup_fep_shadow_pane_cp3

0xc334,	// (0x00041ef4) list_accented_list_pane

0x555d,	// (0x0003b11d) list_single_accented_list_pane_ParamLimits

0x555d,	// (0x0003b11d) list_single_accented_list_pane

0xcc75,	// (0x00042835) list_highlight_pane_cp10

0x556e,	// (0x0003b12e) list_single_accented_list_pane_t1

0x9b9d,	// (0x0003f75d) popup_slider_window_ParamLimits

0x9b9d,	// (0x0003f75d) popup_slider_window

0x5193,	// (0x0003ad53) aid_indentation_list_msg

0xad7b,	// (0x0004093b) bg_popup_window_pane_cp19

0x5692,	// (0x0003b252) popup_slider_window_g1

0x56ae,	// (0x0003b26e) popup_slider_window_g2

0x56ca,	// (0x0003b28a) popup_slider_window_g3

0x0005,

0xfc8a,	// (0x0004584a) popup_slider_window_g

0x5726,	// (0x0003b2e6) popup_slider_window_t1

0x579a,	// (0x0003b35a) small_volume_slider_vertical_pane

0xef5f,	// (0x00044b1f) small_volume_slider_vertical_pane_g1

0xef5f,	// (0x00044b1f) small_volume_slider_vertical_pane_g2

0x57b6,	// (0x0003b376) small_volume_slider_vertical_pane_g3

0x0002,

0xfc9c,	// (0x0004585c) small_volume_slider_vertical_pane_g

0x862a,	// (0x0003e1ea) area_side_right_pane_ParamLimits

0x862a,	// (0x0003e1ea) area_side_right_pane

0x8b96,	// (0x0003e756) aid_size_side_button_ParamLimits

0x8b96,	// (0x0003e756) aid_size_side_button

0x8baf,	// (0x0003e76f) grid_sctrl_middle_pane_ParamLimits

0x8baf,	// (0x0003e76f) grid_sctrl_middle_pane

0x2e45,	// (0x00038a05) sctrl_sk_bottom_pane

0x2e56,	// (0x00038a16) sctrl_sk_top_pane

0x2e68,	// (0x00038a28) aid_touch_sctrl_top

0xbb9a,	// (0x0004175a) bg_sctrl_sk_pane_ParamLimits

0xbb9a,	// (0x0004175a) bg_sctrl_sk_pane

0x2e75,	// (0x00038a35) sctrl_sk_top_pane_g1

0x2e82,	// (0x00038a42) sctrl_sk_top_pane_t1

0x2e68,	// (0x00038a28) aid_touch_sctrl_bottom

0xbb9a,	// (0x0004175a) bg_sctrl_sk_pane_cp_ParamLimits

0xbb9a,	// (0x0004175a) bg_sctrl_sk_pane_cp

0x2e9d,	// (0x00038a5d) sctrl_sk_bottom_pane_g1

0x2e82,	// (0x00038a42) sctrl_sk_bottom_pane_t1

0x8bc9,	// (0x0003e789) cell_sctrl_middle_pane_ParamLimits

0x8bc9,	// (0x0003e789) cell_sctrl_middle_pane

0x8bda,	// (0x0003e79a) aid_touch_sctrl_middle_ParamLimits

0x8bda,	// (0x0003e79a) aid_touch_sctrl_middle

0x8be7,	// (0x0003e7a7) bg_sctrl_middle_pane_ParamLimits

0x8be7,	// (0x0003e7a7) bg_sctrl_middle_pane

0x583e,	// (0x0003b3fe) cell_sctrl_middle_pane_g1_ParamLimits

0x583e,	// (0x0003b3fe) cell_sctrl_middle_pane_g1

0x8bf5,	// (0x0003e7b5) cell_sctrl_middle_pane_g2_ParamLimits

0x8bf5,	// (0x0003e7b5) cell_sctrl_middle_pane_g2

0x0001,

0xfca8,	// (0x00045868) cell_sctrl_middle_pane_g_ParamLimits

0xfca8,	// (0x00045868) cell_sctrl_middle_pane_g

0xd1b5,	// (0x00042d75) bg_sctrl_middle_pane_g1

0xd1bd,	// (0x00042d7d) bg_sctrl_middle_pane_g2

0xd1c5,	// (0x00042d85) bg_sctrl_middle_pane_g3

0xd1cd,	// (0x00042d8d) bg_sctrl_middle_pane_g4

0xd1d5,	// (0x00042d95) bg_sctrl_middle_pane_g5

0xd1dd,	// (0x00042d9d) bg_sctrl_middle_pane_g6

0xd1e5,	// (0x00042da5) bg_sctrl_middle_pane_g7

0xd1ed,	// (0x00042dad) bg_sctrl_middle_pane_g8

0x0007,

0xfcad,	// (0x0004586d) bg_sctrl_middle_pane_g

0xd1f5,	// (0x00042db5) bg_sctrl_middle_pane_g8_copy1

0xd1b5,	// (0x00042d75) bg_sctrl_sk_pane_g1

0xd1bd,	// (0x00042d7d) bg_sctrl_sk_pane_g2

0xd1c5,	// (0x00042d85) bg_sctrl_sk_pane_g3

0x0008,

0xf836,	// (0x000453f6) bg_sctrl_sk_pane_g

0xc167,	// (0x00041d27) aid_size_touch_scroll_bar

0xd1cd,	// (0x00042d8d) bg_sctrl_sk_pane_g4

0xd1d5,	// (0x00042d95) bg_sctrl_sk_pane_g5

0xd1dd,	// (0x00042d9d) bg_sctrl_sk_pane_g6

0xd1e5,	// (0x00042da5) bg_sctrl_sk_pane_g7

0xd1ed,	// (0x00042dad) bg_sctrl_sk_pane_g8

0xd1f5,	// (0x00042db5) bg_sctrl_sk_pane_g9

0xcee9,	// (0x00042aa9) popup_fep_china_hwr2_fs_candidate_window

0x96d7,	// (0x0003f297) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x96d7,	// (0x0003f297) popup_fep_china_hwr2_fs_control_window

0xf1f4,	// (0x00044db4) sctrl_sk_top_pane_g2

0x0001,

0xfca3,	// (0x00045863) sctrl_sk_top_pane_g

0xae33,	// (0x000409f3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xae33,	// (0x000409f3) aid_fep_china_hwr2_fs_cell

0xae47,	// (0x00040a07) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xae47,	// (0x00040a07) bg_popup_fep_shadow_pane_cp4

0xae5e,	// (0x00040a1e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xae5e,	// (0x00040a1e) bg_popup_fep_shadow_pane_cp5

0xae70,	// (0x00040a30) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xae70,	// (0x00040a30) popup_fep_china_hwr2_fs_control_bar_grid

0xae84,	// (0x00040a44) popup_fep_china_hwr2_fs_control_funtion_grid

0x5812,	// (0x0003b3d2) aid_fep_china_hwr2_fs_candi_cell

0xb9f7,	// (0x000415b7) bg_popup_fep_shadow_pane_cp6

0x581c,	// (0x0003b3dc) popup_fep_china_hwr2_fs_candidate_grid

0xae8c,	// (0x00040a4c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xae8c,	// (0x00040a4c) cell_fep_china_hwr2_fs_funtion_grid

0xef5f,	// (0x00044b1f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x583e,	// (0x0003b3fe) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x583e,	// (0x0003b3fe) cell_fep_china_hwr2_fs_funtion_grid_g1

0x584c,	// (0x0003b40c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x584c,	// (0x0003b40c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcbe,	// (0x0004587e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcbe,	// (0x0004587e) cell_fep_china_hwr2_fs_funtion_grid_g

0xaea4,	// (0x00040a64) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaea4,	// (0x00040a64) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaeb9,	// (0x00040a79) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaeb9,	// (0x00040a79) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcc3,	// (0x00045883) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcc3,	// (0x00045883) cell_fep_china_hwr2_fs_funtion_grid_t

0x5893,	// (0x0003b453) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x589b,	// (0x0003b45b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x58a3,	// (0x0003b463) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcc8,	// (0x00045888) popup_fep_china_hwr2_fs_control_bar_grid_g

0x58ab,	// (0x0003b46b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x58ab,	// (0x0003b46b) cell_fep_china_hwr2_fs_candidate_grid

0x58c4,	// (0x0003b484) popup_fep_china_hwr2_fs_candidate_grid_g20

0x58cc,	// (0x0003b48c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xef5f,	// (0x00044b1f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xef5f,	// (0x00044b1f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfaef,	// (0x000456af) cell_fep_china_hwr2_fs_candidate_grid_g

0x58d4,	// (0x0003b494) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcff6,	// (0x00042bb6) clock_nsta_pane_cp_24_ParamLimits

0xcff6,	// (0x00042bb6) clock_nsta_pane_cp_24

0xd06c,	// (0x00042c2c) indicator_nsta_pane_cp_24_ParamLimits

0xd06c,	// (0x00042c2c) indicator_nsta_pane_cp_24

0xddb4,	// (0x00043974) heading_pane_g1

0x0001,

0xf884,	// (0x00045444) heading_pane_g

0xe418,	// (0x00043fd8) grid_sct_catagory_button_pane

0xe166,	// (0x00043d26) scroll_pane_cp5_ParamLimits

0xecc8,	// (0x00044888) button_value_adjust_pane_cp5_ParamLimits

0xecc8,	// (0x00044888) button_value_adjust_pane_cp5

0xed86,	// (0x00044946) form2_midp_time_pane_ParamLimits

0x58e2,	// (0x0003b4a2) cell_sct_catagory_button_pane_ParamLimits

0x58e2,	// (0x0003b4a2) cell_sct_catagory_button_pane

0xef24,	// (0x00044ae4) bg_button_pane_cp01_ParamLimits

0xef24,	// (0x00044ae4) bg_button_pane_cp01

0xef5f,	// (0x00044b1f) cell_sct_catagory_button_pane_g1

0x9c16,	// (0x0003f7d6) popup_tb_extension_window

0xaed5,	// (0x00040a95) aid_size_cell_ext_ParamLimits

0xaed5,	// (0x00040a95) aid_size_cell_ext

0xbfa9,	// (0x00041b69) bg_tb_trans_pane_cp1_ParamLimits

0xbfa9,	// (0x00041b69) bg_tb_trans_pane_cp1

0xaefb,	// (0x00040abb) grid_tb_ext_pane_ParamLimits

0xaefb,	// (0x00040abb) grid_tb_ext_pane

0xaf3b,	// (0x00040afb) cell_tb_ext_pane_ParamLimits

0xaf3b,	// (0x00040afb) cell_tb_ext_pane

0xaf63,	// (0x00040b23) cell_tb_ext_pane_g1_ParamLimits

0xaf63,	// (0x00040b23) cell_tb_ext_pane_g1

0x597a,	// (0x0003b53a) cell_tb_ext_pane_t1

0xbb9a,	// (0x0004175a) list_highlight_pane_cp11_ParamLimits

0xbb9a,	// (0x0004175a) list_highlight_pane_cp11

0x16c8,	// (0x00037288) popup_uni_indicator_window_ParamLimits

0x16c8,	// (0x00037288) popup_uni_indicator_window

0xc22e,	// (0x00041dee) bg_popup_sub_pane_cp14

0x5995,	// (0x0003b555) list_uniindi_pane

0x59a1,	// (0x0003b561) uniindi_top_pane

0xbb9a,	// (0x0004175a) bg_uniindi_top_pane

0x59c0,	// (0x0003b580) uniindi_top_pane_g1

0x59d6,	// (0x0003b596) uniindi_top_pane_g2

0x0003,

0xfccf,	// (0x0004588f) uniindi_top_pane_g

0x5a00,	// (0x0003b5c0) uniindi_top_pane_t1

0x5a2a,	// (0x0003b5ea) list_single_uniindi_pane_ParamLimits

0x5a2a,	// (0x0003b5ea) list_single_uniindi_pane

0xef5f,	// (0x00044b1f) bg_uniindi_top_pane_g1

0x5a3c,	// (0x0003b5fc) list_single_uniindi_pane_g1

0x5a4f,	// (0x0003b60f) list_single_uniindi_pane_t1

0xb9f7,	// (0x000415b7) control_bg_pane

0x5a74,	// (0x0003b634) bg_sctrl_sk_pane_cp1

0x5a7d,	// (0x0003b63d) bg_sctrl_sk_pane_cp2

0x5a86,	// (0x0003b646) control_bg_pane_g1

0x5a8f,	// (0x0003b64f) control_bg_pane_g2

0x0001,

0xfcd8,	// (0x00045898) control_bg_pane_g

0xeb9f,	// (0x0004475f) cell_indicator_nsta_pane_g1_ParamLimits

0xa687,	// (0x00040247) cell_indicator_nsta_pane_g2_ParamLimits

0xfa58,	// (0x00045618) cell_indicator_nsta_pane_g_ParamLimits

0x106b,	// (0x00036c2b) form2_midp_time_pane_t1_ParamLimits

0xf1e6,	// (0x00044da6) main_idle_act4_pane_ParamLimits

0xf1e6,	// (0x00044da6) main_idle_act4_pane

0x9c16,	// (0x0003f7d6) popup_tb_extension_window_ParamLimits

0xaf22,	// (0x00040ae2) tb_ext_find_pane_ParamLimits

0xaf22,	// (0x00040ae2) tb_ext_find_pane

0x5a98,	// (0x0003b658) ai_gene_pane_1_cp1

0xccf7,	// (0x000428b7) ai_gene_pane_2_cp1

0x5aa0,	// (0x0003b660) list_single_idle_plugin_calendar_pane

0x5aa9,	// (0x0003b669) list_single_idle_plugin_notification_pane

0x5ab2,	// (0x0003b672) list_single_idle_plugin_player_pane

0xaf80,	// (0x00040b40) list_single_idle_plugin_shortcut_pane_ParamLimits

0xaf80,	// (0x00040b40) list_single_idle_plugin_shortcut_pane

0xafa8,	// (0x00040b68) main_idle_act4_pane_t1

0xafbe,	// (0x00040b7e) main_idle_act4_pane_t2

0x0001,

0xfcdd,	// (0x0004589d) main_idle_act4_pane_t

0xafd6,	// (0x00040b96) middle_sk_idle_act4_pane_ParamLimits

0xafd6,	// (0x00040b96) middle_sk_idle_act4_pane

0xaff2,	// (0x00040bb2) popup_clock_digital_analogue_window_cp2

0xb019,	// (0x00040bd9) shortcut_wheel_idle_act4_pane_ParamLimits

0xb019,	// (0x00040bd9) shortcut_wheel_idle_act4_pane

0xef5f,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g1

0xef5f,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g2

0xef5f,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g3

0xef5f,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g4

0xef5f,	// (0x00044b1f) shortcut_wheel_idle_act4_pane_g5

0x5b45,	// (0x0003b705) shortcut_wheel_idle_act4_pane_g6

0x5b4d,	// (0x0003b70d) shortcut_wheel_idle_act4_pane_g7

0x5b55,	// (0x0003b715) shortcut_wheel_idle_act4_pane_g8

0x5b5d,	// (0x0003b71d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfce2,	// (0x000458a2) shortcut_wheel_idle_act4_pane_g

0x9456,	// (0x0003f016) middle_sk_idle_act4_pane_g1_ParamLimits

0x9456,	// (0x0003f016) middle_sk_idle_act4_pane_g1

0xb096,	// (0x00040c56) middle_sk_idle_act4_pane_g2_ParamLimits

0xb096,	// (0x00040c56) middle_sk_idle_act4_pane_g2

0x0001,

0xfd05,	// (0x000458c5) middle_sk_idle_act4_pane_g_ParamLimits

0xfd05,	// (0x000458c5) middle_sk_idle_act4_pane_g

0xb0ae,	// (0x00040c6e) middle_sk_idle_act4_pane_t1_ParamLimits

0xb0ae,	// (0x00040c6e) middle_sk_idle_act4_pane_t1

0xb0dd,	// (0x00040c9d) grid_ai_shortcut_pane_ParamLimits

0xb0dd,	// (0x00040c9d) grid_ai_shortcut_pane

0xb0fa,	// (0x00040cba) list_highlight_pane_cp16_ParamLimits

0xb0fa,	// (0x00040cba) list_highlight_pane_cp16

0xb107,	// (0x00040cc7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb107,	// (0x00040cc7) list_single_idle_plugin_shortcut_pane_g1

0xb113,	// (0x00040cd3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb113,	// (0x00040cd3) list_single_idle_plugin_shortcut_pane_g2

0xb12f,	// (0x00040cef) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb12f,	// (0x00040cef) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd0a,	// (0x000458ca) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd0a,	// (0x000458ca) list_single_idle_plugin_shortcut_pane_g

0xb144,	// (0x00040d04) cell_ai_shortcut_pane_ParamLimits

0xb144,	// (0x00040d04) cell_ai_shortcut_pane

0xb15a,	// (0x00040d1a) cell_ai_shortcut_pane_g1_ParamLimits

0xb15a,	// (0x00040d1a) cell_ai_shortcut_pane_g1

0x5a98,	// (0x0003b658) ai_gene_pane_1_cp2

0x5c8a,	// (0x0003b84a) ai_gene_pane_2_cp2

0x5c92,	// (0x0003b852) list_highlight_pane_cp15

0x5c9b,	// (0x0003b85b) list_single_idle_plugin_calendar_pane_g1

0x5c92,	// (0x0003b852) list_highlight_pane_cp17

0x5ca3,	// (0x0003b863) list_single_idle_plugin_calendar_pane_g1_copy1

0x5cab,	// (0x0003b86b) list_single_idle_plugin_player_pane_g1

0xe62d,	// (0x000441ed) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd11,	// (0x000458d1) list_single_idle_plugin_player_pane_g

0x5cb3,	// (0x0003b873) list_single_idle_plugin_player_pane_t1

0x5cc1,	// (0x0003b881) list_single_idle_plugin_player_pane_t2

0x5ccf,	// (0x0003b88f) list_single_idle_plugin_player_pane_t3

0x5cdd,	// (0x0003b89d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd16,	// (0x000458d6) list_single_idle_plugin_player_pane_t

0x5ceb,	// (0x0003b8ab) wait_bar_pane_cp15

0x5cf3,	// (0x0003b8b3) grid_ai_notification_pane

0xe62d,	// (0x000441ed) list_single_idle_plugin_notification_pane_g1

0xb17c,	// (0x00040d3c) cell_ai_notification_pane_ParamLimits

0xb17c,	// (0x00040d3c) cell_ai_notification_pane

0x5d09,	// (0x0003b8c9) cell_ai_notification_pane_g1

0x5d11,	// (0x0003b8d1) cell_ai_notification_pane_t1

0xb189,	// (0x00040d49) tb_ext_find_button_pane

0xb191,	// (0x00040d51) tb_ext_find_pane_g1

0xb199,	// (0x00040d59) tb_ext_find_pane_t1

0xc766,	// (0x00042326) tb_ext_find_button_pane_g1

0x5d3d,	// (0x0003b8fd) tb_ext_find_button_pane_g2

0x0001,

0xfd1f,	// (0x000458df) tb_ext_find_button_pane_g

0xafa8,	// (0x00040b68) main_idle_act4_pane_t1_ParamLimits

0xafbe,	// (0x00040b7e) main_idle_act4_pane_t2_ParamLimits

0xfcdd,	// (0x0004589d) main_idle_act4_pane_t_ParamLimits

0xaff2,	// (0x00040bb2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb009,	// (0x00040bc9) sat_plugin_idle_act4_pane_ParamLimits

0xb009,	// (0x00040bc9) sat_plugin_idle_act4_pane

0xb1a7,	// (0x00040d67) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb1a7,	// (0x00040d67) sat_plugin_idle_act4_pane_t1

0xb1bf,	// (0x00040d7f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb1bf,	// (0x00040d7f) sat_plugin_idle_act4_pane_t2

0xb1d7,	// (0x00040d97) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb1d7,	// (0x00040d97) sat_plugin_idle_act4_pane_t3

0xb1ef,	// (0x00040daf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb1ef,	// (0x00040daf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd24,	// (0x000458e4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd24,	// (0x000458e4) sat_plugin_idle_act4_pane_t

0x1611,	// (0x000371d1) popup_battery_window_ParamLimits

0x1611,	// (0x000371d1) popup_battery_window

0xbb9a,	// (0x0004175a) bg_popup_sub_pane_cp25_ParamLimits

0xbb9a,	// (0x0004175a) bg_popup_sub_pane_cp25

0x5d92,	// (0x0003b952) popup_battery_window_g1_ParamLimits

0x5d92,	// (0x0003b952) popup_battery_window_g1

0x5d9e,	// (0x0003b95e) popup_battery_window_t1_ParamLimits

0x5d9e,	// (0x0003b95e) popup_battery_window_t1

0x5db0,	// (0x0003b970) popup_battery_window_t2_ParamLimits

0x5db0,	// (0x0003b970) popup_battery_window_t2

0x0001,

0xfd2d,	// (0x000458ed) popup_battery_window_t_ParamLimits

0xfd2d,	// (0x000458ed) popup_battery_window_t

0x956e,	// (0x0003f12e) midp_canvas_pane_ParamLimits

0x95cb,	// (0x0003f18b) midp_keypad_pane_ParamLimits

0x95cb,	// (0x0003f18b) midp_keypad_pane

0xc385,	// (0x00041f45) main_midp_pane_ParamLimits

0xec7b,	// (0x0004483b) signal_pane_g2_cp_ParamLimits

0xb207,	// (0x00040dc7) aid_size_cell_midp_keypad_ParamLimits

0xb207,	// (0x00040dc7) aid_size_cell_midp_keypad

0xb225,	// (0x00040de5) midp_keyp_game_grid_pane_ParamLimits

0xb225,	// (0x00040de5) midp_keyp_game_grid_pane

0xb24c,	// (0x00040e0c) midp_keyp_rocker_pane_ParamLimits

0xb24c,	// (0x00040e0c) midp_keyp_rocker_pane

0xb2a5,	// (0x00040e65) midp_keyp_sk_left_pane_ParamLimits

0xb2a5,	// (0x00040e65) midp_keyp_sk_left_pane

0xb2f9,	// (0x00040eb9) midp_keyp_sk_right_pane_ParamLimits

0xb2f9,	// (0x00040eb9) midp_keyp_sk_right_pane

0xb9f7,	// (0x000415b7) bg_button_pane_cp03

0xb34d,	// (0x00040f0d) midp_keyp_sk_left_pane_g1

0xb9f7,	// (0x000415b7) bg_button_pane_cp04

0xb34d,	// (0x00040f0d) midp_keyp_sk_right_pane_g1

0xef5f,	// (0x00044b1f) midp_keyp_rocker_pane_g1

0xb356,	// (0x00040f16) keyp_game_cell_pane_ParamLimits

0xb356,	// (0x00040f16) keyp_game_cell_pane

0xb9f7,	// (0x000415b7) bg_button_pane_cp02

0xb37a,	// (0x00040f3a) keyp_game_cell_pane_g1

0x866c,	// (0x0003e22c) popup_fep_vkb2_window_ParamLimits

0x866c,	// (0x0003e22c) popup_fep_vkb2_window

0x8c01,	// (0x0003e7c1) aid_size_cell_vkb2_ParamLimits

0x8c01,	// (0x0003e7c1) aid_size_cell_vkb2

0x8c37,	// (0x0003e7f7) popup_fep_vkb2_window_g1_ParamLimits

0x8c37,	// (0x0003e7f7) popup_fep_vkb2_window_g1

0x8c7e,	// (0x0003e83e) vkb2_area_bottom_pane_ParamLimits

0x8c7e,	// (0x0003e83e) vkb2_area_bottom_pane

0x8cd2,	// (0x0003e892) vkb2_area_keypad_pane_ParamLimits

0x8cd2,	// (0x0003e892) vkb2_area_keypad_pane

0x8d1a,	// (0x0003e8da) vkb2_area_top_pane_ParamLimits

0x8d1a,	// (0x0003e8da) vkb2_area_top_pane

0x8da0,	// (0x0003e960) vkb2_top_entry_pane_ParamLimits

0x8da0,	// (0x0003e960) vkb2_top_entry_pane

0x8dcd,	// (0x0003e98d) vkb2_top_grid_left_pane_ParamLimits

0x8dcd,	// (0x0003e98d) vkb2_top_grid_left_pane

0x8ded,	// (0x0003e9ad) vkb2_top_grid_right_pane_ParamLimits

0x8ded,	// (0x0003e9ad) vkb2_top_grid_right_pane

0x30f7,	// (0x00038cb7) vkb2_cell_keypad_pane_ParamLimits

0x30f7,	// (0x00038cb7) vkb2_cell_keypad_pane

0x8e33,	// (0x0003e9f3) vkb2_area_bottom_grid_pane_ParamLimits

0x8e33,	// (0x0003e9f3) vkb2_area_bottom_grid_pane

0x8e5d,	// (0x0003ea1d) vkb2_area_bottom_pane_g1_ParamLimits

0x8e5d,	// (0x0003ea1d) vkb2_area_bottom_pane_g1

0x8e83,	// (0x0003ea43) vkb2_area_bottom_pane_g2_ParamLimits

0x8e83,	// (0x0003ea43) vkb2_area_bottom_pane_g2

0x8eb4,	// (0x0003ea74) vkb2_area_bottom_pane_g3_ParamLimits

0x8eb4,	// (0x0003ea74) vkb2_area_bottom_pane_g3

0x0002,

0xfd32,	// (0x000458f2) vkb2_area_bottom_pane_g_ParamLimits

0xfd32,	// (0x000458f2) vkb2_area_bottom_pane_g

0x32a1,	// (0x00038e61) vkb2_top_cell_left_pane_ParamLimits

0x32a1,	// (0x00038e61) vkb2_top_cell_left_pane

0xb383,	// (0x00040f43) vkb2_top_entry_pane_g1_ParamLimits

0xb383,	// (0x00040f43) vkb2_top_entry_pane_g1

0xb391,	// (0x00040f51) vkb2_top_entry_pane_t1_ParamLimits

0xb391,	// (0x00040f51) vkb2_top_entry_pane_t1

0x5f82,	// (0x0003bb42) vkb2_top_entry_pane_t2_ParamLimits

0x5f82,	// (0x0003bb42) vkb2_top_entry_pane_t2

0x5fb4,	// (0x0003bb74) vkb2_top_entry_pane_t3_ParamLimits

0x5fb4,	// (0x0003bb74) vkb2_top_entry_pane_t3

0x0002,

0xfd39,	// (0x000458f9) vkb2_top_entry_pane_t_ParamLimits

0xfd39,	// (0x000458f9) vkb2_top_entry_pane_t

0x8f1e,	// (0x0003eade) vkb2_top_grid_right_pane_g1_ParamLimits

0x8f1e,	// (0x0003eade) vkb2_top_grid_right_pane_g1

0x3304,	// (0x00038ec4) vkb2_top_grid_right_pane_g2_ParamLimits

0x3304,	// (0x00038ec4) vkb2_top_grid_right_pane_g2

0x331c,	// (0x00038edc) vkb2_top_grid_right_pane_g3_ParamLimits

0x331c,	// (0x00038edc) vkb2_top_grid_right_pane_g3

0x8f34,	// (0x0003eaf4) vkb2_top_grid_right_pane_g4_ParamLimits

0x8f34,	// (0x0003eaf4) vkb2_top_grid_right_pane_g4

0x0003,

0xfd40,	// (0x00045900) vkb2_top_grid_right_pane_g_ParamLimits

0xfd40,	// (0x00045900) vkb2_top_grid_right_pane_g

0x334a,	// (0x00038f0a) vkb2_top_cell_left_pane_g1

0x3361,	// (0x00038f21) vkb2_cell_keypad_pane_g1_ParamLimits

0x3361,	// (0x00038f21) vkb2_cell_keypad_pane_g1

0x5fd8,	// (0x0003bb98) vkb2_cell_keypad_pane_t1_ParamLimits

0x5fd8,	// (0x0003bb98) vkb2_cell_keypad_pane_t1

0x336f,	// (0x00038f2f) vkb2_cell_bottom_grid_pane_ParamLimits

0x336f,	// (0x00038f2f) vkb2_cell_bottom_grid_pane

0x33a8,	// (0x00038f68) vkb2_cell_bottom_grid_pane_g1

0xb03a,	// (0x00040bfa) aid_call2_pane_cp02

0xb042,	// (0x00040c02) aid_call_pane_cp02

0xb04a,	// (0x00040c0a) clock_digital_number_pane_cp10

0xb052,	// (0x00040c12) clock_digital_number_pane_cp11

0xb05a,	// (0x00040c1a) clock_digital_number_pane_cp12

0xb062,	// (0x00040c22) clock_digital_number_pane_cp13

0xb06a,	// (0x00040c2a) clock_digital_separator_pane_cp10

0xc766,	// (0x00042326) popup_clock_digital_analogue_window_cp2_g1

0xc766,	// (0x00042326) popup_clock_digital_analogue_window_cp2_g2

0xb072,	// (0x00040c32) popup_clock_digital_analogue_window_cp2_g3

0xc766,	// (0x00042326) popup_clock_digital_analogue_window_cp2_g4

0xb072,	// (0x00040c32) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfcf5,	// (0x000458b5) popup_clock_digital_analogue_window_cp2_g

0xb07a,	// (0x00040c3a) popup_clock_digital_analogue_window_cp2_t1

0xb088,	// (0x00040c48) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd00,	// (0x000458c0) popup_clock_digital_analogue_window_cp2_t

0xef5f,	// (0x00044b1f) clock_digital_number_pane_cp10_g1

0xef5f,	// (0x00044b1f) clock_digital_number_pane_cp10_g2

0x0001,

0xfaef,	// (0x000456af) clock_digital_number_pane_cp10_g

0xef5f,	// (0x00044b1f) clock_digital_separator_pane_cp10_g1

0xef5f,	// (0x00044b1f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfaef,	// (0x000456af) clock_digital_separator_pane_cp10_g

0x59e2,	// (0x0003b5a2) uniindi_top_pane_g3

0x59f3,	// (0x0003b5b3) uniindi_top_pane_g4

0x3182,	// (0x00038d42) vkb2_row_keypad_pane_ParamLimits

0x3182,	// (0x00038d42) vkb2_row_keypad_pane

0x33c8,	// (0x00038f88) vkb2_cell_t_keypad_pane_ParamLimits

0x33c8,	// (0x00038f88) vkb2_cell_t_keypad_pane

0x33d8,	// (0x00038f98) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x33d8,	// (0x00038f98) vkb2_cell_t_keypad_pane_cp08

0x33eb,	// (0x00038fab) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x33eb,	// (0x00038fab) vkb2_cell_t_keypad_pane_cp09

0x33ff,	// (0x00038fbf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x33ff,	// (0x00038fbf) vkb2_cell_t_keypad_pane_cp01

0x3410,	// (0x00038fd0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3410,	// (0x00038fd0) vkb2_cell_t_keypad_pane_cp02

0x3421,	// (0x00038fe1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3421,	// (0x00038fe1) vkb2_cell_t_keypad_pane_cp03

0x3432,	// (0x00038ff2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3432,	// (0x00038ff2) vkb2_cell_t_keypad_pane_cp04

0x3443,	// (0x00039003) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3443,	// (0x00039003) vkb2_cell_t_keypad_pane_cp05

0x3454,	// (0x00039014) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3454,	// (0x00039014) vkb2_cell_t_keypad_pane_cp06

0x3465,	// (0x00039025) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3465,	// (0x00039025) vkb2_cell_t_keypad_pane_cp07

0x3476,	// (0x00039036) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3476,	// (0x00039036) vkb2_cell_t_keypad_pane_cp10

0xf1f4,	// (0x00044db4) vkb2_cell_t_keypad_pane_g1

0x5fef,	// (0x0003bbaf) vkb2_cell_t_keypad_pane_t1

0xb9f7,	// (0x000415b7) popup_grid_graphic2_window

0xb3ca,	// (0x00040f8a) aid_size_cell_graphic2_ParamLimits

0xb3ca,	// (0x00040f8a) aid_size_cell_graphic2

0xd762,	// (0x00043322) bg_popup_window_pane_cp21_ParamLimits

0xd762,	// (0x00043322) bg_popup_window_pane_cp21

0xb3fc,	// (0x00040fbc) graphic2_pages_pane_ParamLimits

0xb3fc,	// (0x00040fbc) graphic2_pages_pane

0xb45f,	// (0x0004101f) grid_graphic2_control_pane_ParamLimits

0xb45f,	// (0x0004101f) grid_graphic2_control_pane

0xb493,	// (0x00041053) grid_graphic2_pane_ParamLimits

0xb493,	// (0x00041053) grid_graphic2_pane

0xb506,	// (0x000410c6) cell_graphic2_pane

0xb9f7,	// (0x000415b7) main_comp_mode_pane

0x5245,	// (0x0003ae05) list_ai3_gene_pane_ParamLimits

0xad7b,	// (0x0004093b) bg_popup_window_pane_cp19_ParamLimits

0x5634,	// (0x0003b1f4) bg_touch_area_indi_pane_ParamLimits

0x5634,	// (0x0003b1f4) bg_touch_area_indi_pane

0x564a,	// (0x0003b20a) bg_touch_area_indi_pane_cp01_ParamLimits

0x564a,	// (0x0003b20a) bg_touch_area_indi_pane_cp01

0x5660,	// (0x0003b220) bg_touch_area_indi_pane_cp02_ParamLimits

0x5660,	// (0x0003b220) bg_touch_area_indi_pane_cp02

0x5678,	// (0x0003b238) bg_touch_area_indi_pane_cp03_ParamLimits

0x5678,	// (0x0003b238) bg_touch_area_indi_pane_cp03

0x5692,	// (0x0003b252) popup_slider_window_g1_ParamLimits

0x56ae,	// (0x0003b26e) popup_slider_window_g2_ParamLimits

0x56ca,	// (0x0003b28a) popup_slider_window_g3_ParamLimits

0xfc8a,	// (0x0004584a) popup_slider_window_g_ParamLimits

0x5726,	// (0x0003b2e6) popup_slider_window_t1_ParamLimits

0x579a,	// (0x0003b35a) small_volume_slider_vertical_pane_ParamLimits

0xb506,	// (0x000410c6) cell_graphic2_pane_ParamLimits

0xb561,	// (0x00041121) bg_button_pane_cp10_ParamLimits

0xb561,	// (0x00041121) bg_button_pane_cp10

0xb574,	// (0x00041134) bg_button_pane_cp11_ParamLimits

0xb574,	// (0x00041134) bg_button_pane_cp11

0xb587,	// (0x00041147) graphic2_pages_pane_g1_ParamLimits

0xb587,	// (0x00041147) graphic2_pages_pane_g1

0xb5a2,	// (0x00041162) graphic2_pages_pane_g2_ParamLimits

0xb5a2,	// (0x00041162) graphic2_pages_pane_g2

0x0001,

0xfd4e,	// (0x0004590e) graphic2_pages_pane_g_ParamLimits

0xfd4e,	// (0x0004590e) graphic2_pages_pane_g

0xb5ba,	// (0x0004117a) graphic2_pages_pane_t1_ParamLimits

0xb5ba,	// (0x0004117a) graphic2_pages_pane_t1

0xb5d2,	// (0x00041192) cell_graphic2_control_pane_ParamLimits

0xb5d2,	// (0x00041192) cell_graphic2_control_pane

0xb5ec,	// (0x000411ac) cell_graphic2_pane_g1_ParamLimits

0xb5ec,	// (0x000411ac) cell_graphic2_pane_g1

0x9464,	// (0x0003f024) cell_graphic2_pane_g2_ParamLimits

0x9464,	// (0x0003f024) cell_graphic2_pane_g2

0xb438,	// (0x00040ff8) cell_graphic2_pane_g3_ParamLimits

0xb438,	// (0x00040ff8) cell_graphic2_pane_g3

0x9471,	// (0x0003f031) cell_graphic2_pane_g4_ParamLimits

0x9471,	// (0x0003f031) cell_graphic2_pane_g4

0xb5f9,	// (0x000411b9) cell_graphic2_pane_g5_ParamLimits

0xb5f9,	// (0x000411b9) cell_graphic2_pane_g5

0x0004,

0xfd53,	// (0x00045913) cell_graphic2_pane_g_ParamLimits

0xfd53,	// (0x00045913) cell_graphic2_pane_g

0xb619,	// (0x000411d9) cell_graphic2_pane_t1_ParamLimits

0xb619,	// (0x000411d9) cell_graphic2_pane_t1

0xdda8,	// (0x00043968) grid_highlight_pane_cp11_ParamLimits

0xdda8,	// (0x00043968) grid_highlight_pane_cp11

0xc22e,	// (0x00041dee) bg_button_pane_cp05

0xb64e,	// (0x0004120e) cell_graphic2_control_pane_g1

0xef5f,	// (0x00044b1f) bg_touch_area_indi_pane_g1

0x6001,	// (0x0003bbc1) aid_cmod_rocker_key_size

0x600b,	// (0x0003bbcb) aid_cmode_itu_key_size

0x6015,	// (0x0003bbd5) main_cmode_video_pane

0x601f,	// (0x0003bbdf) main_comp_mode_itu_pane

0x602b,	// (0x0003bbeb) main_comp_mode_rocker_pane

0x6037,	// (0x0003bbf7) cell_cmode_rocker_pane_ParamLimits

0x6037,	// (0x0003bbf7) cell_cmode_rocker_pane

0x6049,	// (0x0003bc09) cell_cmode_itu_pane_ParamLimits

0x6049,	// (0x0003bc09) cell_cmode_itu_pane

0xc22e,	// (0x00041dee) bg_button_pane_cp06_ParamLimits

0xc22e,	// (0x00041dee) bg_button_pane_cp06

0xf1f4,	// (0x00044db4) cell_cmode_rocker_pane_g1_ParamLimits

0xf1f4,	// (0x00044db4) cell_cmode_rocker_pane_g1

0x583e,	// (0x0003b3fe) cell_cmode_rocker_pane_g2_ParamLimits

0x583e,	// (0x0003b3fe) cell_cmode_rocker_pane_g2

0x0001,

0xfd63,	// (0x00045923) cell_cmode_rocker_pane_g_ParamLimits

0xfd63,	// (0x00045923) cell_cmode_rocker_pane_g

0xb9f7,	// (0x000415b7) bg_button_pane_cp07

0x605e,	// (0x0003bc1e) cell_cmode_itu_pane_g1

0x6067,	// (0x0003bc27) cell_cmode_itu_pane_t1

0x6075,	// (0x0003bc35) cell_cmode_itu_pane_t2

0x0001,

0xfd68,	// (0x00045928) cell_cmode_itu_pane_t

0x5a64,	// (0x0003b624) aid_touch_ctrl_left

0x5a6c,	// (0x0003b62c) aid_touch_ctrl_right

0xb9f7,	// (0x000415b7) compa_mode_pane

0xb65b,	// (0x0004121b) aid_cmod_rocker_key_size_cp

0xb665,	// (0x00041225) aid_cmode_itu_key_size_cp

0x6083,	// (0x0003bc43) compa_mode_pane_g1

0x608b,	// (0x0003bc4b) compa_mode_pane_g2

0x6093,	// (0x0003bc53) compa_mode_pane_g3

0x0002,

0xfd6d,	// (0x0004592d) compa_mode_pane_g

0xb66f,	// (0x0004122f) main_comp_mode_itu_pane_cp

0xb677,	// (0x00041237) main_comp_mode_rocker_pane_cp

0xb67f,	// (0x0004123f) cell_cmode_itu_pane_cp_ParamLimits

0xb67f,	// (0x0004123f) cell_cmode_itu_pane_cp

0xb694,	// (0x00041254) cell_cmode_rocker_pane_cp_ParamLimits

0xb694,	// (0x00041254) cell_cmode_rocker_pane_cp

0xc22e,	// (0x00041dee) bg_button_pane_cp06_cp_ParamLimits

0xc22e,	// (0x00041dee) bg_button_pane_cp06_cp

0xf1f4,	// (0x00044db4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xf1f4,	// (0x00044db4) cell_cmode_rocker_pane_g1_cp

0xef5f,	// (0x00044b1f) cell_cmode_rocker_pane_g2_cp

0xb9f7,	// (0x000415b7) bg_button_pane_cp07_cp

0xb6a6,	// (0x00041266) cell_cmode_itu_pane_g1_cp

0xb6af,	// (0x0004126f) cell_cmode_itu_pane_t1_cp

0xb6af,	// (0x0004126f) cell_cmode_itu_pane_t2_cp

0xa4d2,	// (0x00040092) settings_code_pane_cp2

0xba67,	// (0x00041627) bg_popup_window_pane_cp3_ParamLimits

0xbe4b,	// (0x00041a0b) heading_pane_cp3_ParamLimits

0xbe57,	// (0x00041a17) listscroll_popup_graphic_pane_ParamLimits

0x2a48,	// (0x00038608) fep_hwr_aid_pane_ParamLimits

0x2e68,	// (0x00038a28) aid_touch_sctrl_top_ParamLimits

0x2e75,	// (0x00038a35) sctrl_sk_top_pane_g1_ParamLimits

0xf1f4,	// (0x00044db4) sctrl_sk_top_pane_g2_ParamLimits

0xfca3,	// (0x00045863) sctrl_sk_top_pane_g_ParamLimits

0x2e82,	// (0x00038a42) sctrl_sk_top_pane_t1_ParamLimits

0x2e68,	// (0x00038a28) aid_touch_sctrl_bottom_ParamLimits

0x2e82,	// (0x00038a42) sctrl_sk_bottom_pane_t1_ParamLimits

0x59ae,	// (0x0003b56e) aid_area_touch_clock

0x8d62,	// (0x0003e922) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d62,	// (0x0003e922) aid_vkb2_area_top_pane_cell

0x8e0d,	// (0x0003e9cd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8e0d,	// (0x0003e9cd) aid_vkb2_area_bottom_pane_cell

0x5f19,	// (0x0003bad9) popup_char_count_window

0x609b,	// (0x0003bc5b) popup_char_count_window_g1

0x60a4,	// (0x0003bc64) popup_char_count_window_g2

0x60ad,	// (0x0003bc6d) popup_char_count_window_g3

0x0002,

0xfd74,	// (0x00045934) popup_char_count_window_g

0x60b6,	// (0x0003bc76) popup_char_count_window_t1

0x2f27,	// (0x00038ae7) popup_fep_char_preview_window_ParamLimits

0x2f27,	// (0x00038ae7) popup_fep_char_preview_window

0x8d82,	// (0x0003e942) vkb2_top_candi_pane_ParamLimits

0x8d82,	// (0x0003e942) vkb2_top_candi_pane

0xb6bd,	// (0x0004127d) cell_vkb2_top_candi_pane_ParamLimits

0xb6bd,	// (0x0004127d) cell_vkb2_top_candi_pane

0xd762,	// (0x00043322) bg_popup_fep_char_preview_window_ParamLimits

0xd762,	// (0x00043322) bg_popup_fep_char_preview_window

0x348b,	// (0x0003904b) popup_fep_char_preview_window_t1_ParamLimits

0x348b,	// (0x0003904b) popup_fep_char_preview_window_t1

0x60c4,	// (0x0003bc84) bg_popup_fep_char_preview_window_g1

0x60cc,	// (0x0003bc8c) bg_popup_fep_char_preview_window_g2

0x60d4,	// (0x0003bc94) bg_popup_fep_char_preview_window_g3

0x60dc,	// (0x0003bc9c) bg_popup_fep_char_preview_window_g4

0x60e4,	// (0x0003bca4) bg_popup_fep_char_preview_window_g5

0x34c5,	// (0x00039085) bg_popup_fep_char_preview_window_g6

0x60ec,	// (0x0003bcac) bg_popup_fep_char_preview_window_g7

0x60f4,	// (0x0003bcb4) bg_popup_fep_char_preview_window_g8

0x60fc,	// (0x0003bcbc) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd7b,	// (0x0004593b) bg_popup_fep_char_preview_window_g

0xf1f4,	// (0x00044db4) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf1f4,	// (0x00044db4) cell_vkb2_top_candi_pane_g1

0xf4a7,	// (0x00045067) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf4a7,	// (0x00045067) cell_vkb2_top_candi_pane_g2

0xf4c8,	// (0x00045088) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf4c8,	// (0x00045088) cell_vkb2_top_candi_pane_g3

0x34cd,	// (0x0003908d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x34cd,	// (0x0003908d) cell_vkb2_top_candi_pane_g4

0x5f2f,	// (0x0003baef) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5f2f,	// (0x0003baef) cell_vkb2_top_candi_pane_g5

0x583e,	// (0x0003b3fe) cell_vkb2_top_candi_pane_g6_ParamLimits

0x583e,	// (0x0003b3fe) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd8e,	// (0x0004594e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd8e,	// (0x0004594e) cell_vkb2_top_candi_pane_g

0x34ee,	// (0x000390ae) cell_vkb2_top_candi_pane_t1

0x2755,	// (0x00038315) aid_size_touch_slider_mark_ParamLimits

0x2755,	// (0x00038315) aid_size_touch_slider_mark

0xb445,	// (0x00041005) grid_graphic2_catg_pane_ParamLimits

0xb445,	// (0x00041005) grid_graphic2_catg_pane

0xb4d9,	// (0x00041099) popup_grid_graphic2_window_t1_ParamLimits

0xb4d9,	// (0x00041099) popup_grid_graphic2_window_t1

0xb4ef,	// (0x000410af) popup_grid_graphic2_window_t2_ParamLimits

0xb4ef,	// (0x000410af) popup_grid_graphic2_window_t2

0x0001,

0xfd49,	// (0x00045909) popup_grid_graphic2_window_t_ParamLimits

0xfd49,	// (0x00045909) popup_grid_graphic2_window_t

0xc22e,	// (0x00041dee) bg_button_pane_cp05_ParamLimits

0xb64e,	// (0x0004120e) cell_graphic2_control_pane_g1_ParamLimits

0xb723,	// (0x000412e3) cell_graphic2_catg_pane_ParamLimits

0xb723,	// (0x000412e3) cell_graphic2_catg_pane

0xb9f7,	// (0x000415b7) bg_button_pane_cp12

0xb735,	// (0x000412f5) cell_graphic2_catg_pane_g1

0x597a,	// (0x0003b53a) cell_tb_ext_pane_t1_ParamLimits

0x32c1,	// (0x00038e81) vkb2_top_cell_right_narrow_pane_ParamLimits

0x32c1,	// (0x00038e81) vkb2_top_cell_right_narrow_pane

0x32d9,	// (0x00038e99) vkb2_top_cell_right_wide_pane_ParamLimits

0x32d9,	// (0x00038e99) vkb2_top_cell_right_wide_pane

0xf1e6,	// (0x00044da6) bg_vkb2_func_pane_ParamLimits

0xf1e6,	// (0x00044da6) bg_vkb2_func_pane

0x334a,	// (0x00038f0a) vkb2_top_cell_left_pane_g1_ParamLimits

0xf1e6,	// (0x00044da6) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf1e6,	// (0x00044da6) bg_vkb2_fuc_pane_cp03

0x33a8,	// (0x00038f68) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd1bd,	// (0x00042d7d) bg_vkb2_func_pane_g1

0xd1c5,	// (0x00042d85) bg_vkb2_func_pane_g2

0xd1d5,	// (0x00042d95) bg_vkb2_func_pane_g3

0xd1cd,	// (0x00042d8d) bg_vkb2_func_pane_g4

0xd1dd,	// (0x00042d9d) bg_vkb2_func_pane_g5

0xd1e5,	// (0x00042da5) bg_vkb2_func_pane_g6

0xd1ed,	// (0x00042dad) bg_vkb2_func_pane_g7

0xd1f5,	// (0x00042db5) bg_vkb2_func_pane_g8

0xd1b5,	// (0x00042d75) bg_vkb2_func_pane_g9

0x0008,

0xfd9b,	// (0x0004595b) bg_vkb2_func_pane_g

0xf1e6,	// (0x00044da6) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf1e6,	// (0x00044da6) bg_vkb2_fuc_pane_cp01

0x334a,	// (0x00038f0a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x334a,	// (0x00038f0a) vkb2_top_cell_right_wide_pane_g1

0xf1e6,	// (0x00044da6) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf1e6,	// (0x00044da6) bg_vkb2_fuc_pane_cp02

0x33a8,	// (0x00038f68) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x33a8,	// (0x00038f68) vkb2_top_cell_right_narrow_pane_g1

0xacb5,	// (0x00040875) aid_touch_area_decrease_ParamLimits

0xacb5,	// (0x00040875) aid_touch_area_decrease

0xacef,	// (0x000408af) aid_touch_area_increase_ParamLimits

0xacef,	// (0x000408af) aid_touch_area_increase

0xad17,	// (0x000408d7) aid_touch_area_mute_ParamLimits

0xad17,	// (0x000408d7) aid_touch_area_mute

0xad47,	// (0x00040907) aid_touch_area_slider_ParamLimits

0xad47,	// (0x00040907) aid_touch_area_slider

0xad87,	// (0x00040947) popup_slider_window_g4_ParamLimits

0xad87,	// (0x00040947) popup_slider_window_g4

0xadaf,	// (0x0004096f) popup_slider_window_g5_ParamLimits

0xadaf,	// (0x0004096f) popup_slider_window_g5

0xade3,	// (0x000409a3) popup_slider_window_g6_ParamLimits

0xade3,	// (0x000409a3) popup_slider_window_g6

0x5754,	// (0x0003b314) popup_slider_window_t2_ParamLimits

0x5754,	// (0x0003b314) popup_slider_window_t2

0x0001,

0xfc97,	// (0x00045857) popup_slider_window_t_ParamLimits

0xfc97,	// (0x00045857) popup_slider_window_t

0xadff,	// (0x000409bf) slider_pane_ParamLimits

0xadff,	// (0x000409bf) slider_pane

0x6104,	// (0x0003bcc4) slider_pane_g1_ParamLimits

0x6104,	// (0x0003bcc4) slider_pane_g1

0x6118,	// (0x0003bcd8) slider_pane_g2_ParamLimits

0x6118,	// (0x0003bcd8) slider_pane_g2

0x612e,	// (0x0003bcee) slider_pane_g3_ParamLimits

0x612e,	// (0x0003bcee) slider_pane_g3

0x0003,

0xfdae,	// (0x0004596e) slider_pane_g_ParamLimits

0xfdae,	// (0x0004596e) slider_pane_g

0x9c5e,	// (0x0003f81e) popup_tb_float_extension_window_ParamLimits

0x9c5e,	// (0x0003f81e) popup_tb_float_extension_window

0x615a,	// (0x0003bd1a) aid_size_cell_tb_float_ext

0xb9f7,	// (0x000415b7) bg_popup_sub_window_cp28

0x6166,	// (0x0003bd26) grid_tb_float_ext_pane

0x6170,	// (0x0003bd30) cell_tb_float_ext_pane_ParamLimits

0x6170,	// (0x0003bd30) cell_tb_float_ext_pane

0x618a,	// (0x0003bd4a) cell_tb_float_ext_pane_g1

0x6193,	// (0x0003bd53) grid_highlight_pane_cp12

0x8b1d,	// (0x0003e6dd) cell_last_hwr_side_pane_ParamLimits

0x8b1d,	// (0x0003e6dd) cell_last_hwr_side_pane

0xef5f,	// (0x00044b1f) cell_last_hwr_side_pane_g1

0x619c,	// (0x0003bd5c) cell_last_hwr_side_pane_g2

0x0001,

0xfdb7,	// (0x00045977) cell_last_hwr_side_pane_g

0x8ee9,	// (0x0003eaa9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8ee9,	// (0x0003eaa9) vkb2_area_bottom_space_btn_pane

0xf1f4,	// (0x00044db4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5fef,	// (0x0003bbaf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x34ee,	// (0x000390ae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x350d,	// (0x000390cd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x350d,	// (0x000390cd) vkb2_area_bottom_space_btn_pane_g1

0x3547,	// (0x00039107) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3547,	// (0x00039107) vkb2_area_bottom_space_btn_pane_g2

0x357d,	// (0x0003913d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x357d,	// (0x0003913d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdbc,	// (0x0004597c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdbc,	// (0x0004597c) vkb2_area_bottom_space_btn_pane_g

0x2aef,	// (0x000386af) cel_fep_hwr_func_pane_ParamLimits

0x2aef,	// (0x000386af) cel_fep_hwr_func_pane

0x8af2,	// (0x0003e6b2) cell_hwr_side_button_pane_ParamLimits

0x8af2,	// (0x0003e6b2) cell_hwr_side_button_pane

0x59ae,	// (0x0003b56e) aid_area_touch_clock_ParamLimits

0xbb9a,	// (0x0004175a) bg_uniindi_top_pane_ParamLimits

0x59c0,	// (0x0003b580) uniindi_top_pane_g1_ParamLimits

0x59d6,	// (0x0003b596) uniindi_top_pane_g2_ParamLimits

0x59e2,	// (0x0003b5a2) uniindi_top_pane_g3_ParamLimits

0x59f3,	// (0x0003b5b3) uniindi_top_pane_g4_ParamLimits

0xfccf,	// (0x0004588f) uniindi_top_pane_g_ParamLimits

0x5a00,	// (0x0003b5c0) uniindi_top_pane_t1_ParamLimits

0xbb9a,	// (0x0004175a) bg_vkb2_func_pane_cp01_ParamLimits

0xbb9a,	// (0x0004175a) bg_vkb2_func_pane_cp01

0x61a5,	// (0x0003bd65) cel_fep_hwr_func_pane_g1_ParamLimits

0x61a5,	// (0x0003bd65) cel_fep_hwr_func_pane_g1

0xbb9a,	// (0x0004175a) bg_vkb2_func_pane_cp02_ParamLimits

0xbb9a,	// (0x0004175a) bg_vkb2_func_pane_cp02

0x61a5,	// (0x0003bd65) cell_hwr_side_button_pane_g1_ParamLimits

0x61a5,	// (0x0003bd65) cell_hwr_side_button_pane_g1

0xd0cd,	// (0x00042c8d) status_pane_g4_ParamLimits

0xd0cd,	// (0x00042c8d) status_pane_g4

0xd0e5,	// (0x00042ca5) status_pane_t1

0xedee,	// (0x000449ae) form2_midp_gauge_slider_cont_pane

0xedf6,	// (0x000449b6) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa77b,	// (0x0004033b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa78d,	// (0x0004034d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaa7,	// (0x00045667) form2_midp_gauge_slider_pane_t_ParamLimits

0xee08,	// (0x000449c8) form2_midp_slider_pane_ParamLimits

0x2ee7,	// (0x00038aa7) aid_size_cell_func_vkb2_ParamLimits

0x2ee7,	// (0x00038aa7) aid_size_cell_func_vkb2

0x6146,	// (0x0003bd06) slider_pane_g4_ParamLimits

0x6146,	// (0x0003bd06) slider_pane_g4

0x8f4a,	// (0x0003eb0a) form2_midp_gauge_slider_pane_t2_cp01

0x8f58,	// (0x0003eb18) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8f58,	// (0x0003eb18) form2_midp_gauge_slider_pane_t3_cp01

0x35f2,	// (0x000391b2) form2_midp_slider_pane_cp01

0xb9f7,	// (0x000415b7) navi_smil_pane

0x61d5,	// (0x0003bd95) navi_smil_pane_g1

0x61dd,	// (0x0003bd9d) navi_smil_pane_t1

0x61b3,	// (0x0003bd73) form2_midp_slider_pane_g1

0x61bc,	// (0x0003bd7c) form2_midp_slider_pane_g2

0x61c4,	// (0x0003bd84) form2_midp_slider_pane_g3

0x61b3,	// (0x0003bd73) form2_midp_slider_pane_g4

0xb73e,	// (0x000412fe) form2_midp_slider_pane_g5

0x0004,

0xfdc5,	// (0x00045985) form2_midp_slider_pane_g

0x35b7,	// (0x00039177) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x35b7,	// (0x00039177) vkb2_area_bottom_space_btn_pane_g4

0x9e3a,	// (0x0003f9fa) lc0_navi_pane_ParamLimits

0x9e3a,	// (0x0003f9fa) lc0_navi_pane

0x9ea4,	// (0x0003fa64) lc0_stat_indi_pane_ParamLimits

0x9ea4,	// (0x0003fa64) lc0_stat_indi_pane

0x9eb9,	// (0x0003fa79) ls0_title_pane_ParamLimits

0x9eb9,	// (0x0003fa79) ls0_title_pane

0xc22e,	// (0x00041dee) bg_popup_sub_pane_cp14_ParamLimits

0x5995,	// (0x0003b555) list_uniindi_pane_ParamLimits

0x59a1,	// (0x0003b561) uniindi_top_pane_ParamLimits

0x5a3c,	// (0x0003b5fc) list_single_uniindi_pane_g1_ParamLimits

0x5a4f,	// (0x0003b60f) list_single_uniindi_pane_t1_ParamLimits

0x8f75,	// (0x0003eb35) lc0_stat_clock_pane_ParamLimits

0x8f75,	// (0x0003eb35) lc0_stat_clock_pane

0xb747,	// (0x00041307) lc0_stat_indi_pane_g1_ParamLimits

0xb747,	// (0x00041307) lc0_stat_indi_pane_g1

0xb754,	// (0x00041314) lc0_stat_indi_pane_g2_ParamLimits

0xb754,	// (0x00041314) lc0_stat_indi_pane_g2

0x0001,

0xfdd0,	// (0x00045990) lc0_stat_indi_pane_g_ParamLimits

0xfdd0,	// (0x00045990) lc0_stat_indi_pane_g

0x8f82,	// (0x0003eb42) lc0_uni_indicator_pane_ParamLimits

0x8f82,	// (0x0003eb42) lc0_uni_indicator_pane

0xb761,	// (0x00041321) ls0_title_pane_g1_ParamLimits

0xb761,	// (0x00041321) ls0_title_pane_g1

0xb775,	// (0x00041335) ls0_title_pane_t1_ParamLimits

0xb775,	// (0x00041335) ls0_title_pane_t1

0x8f8f,	// (0x0003eb4f) lc0_uni_indicator_pane_g1_ParamLimits

0x8f8f,	// (0x0003eb4f) lc0_uni_indicator_pane_g1

0x61eb,	// (0x0003bdab) lc0_stat_clock_pane_t1

0xb9f7,	// (0x000415b7) main_ai5_pane

0x61f9,	// (0x0003bdb9) ai5_sk_pane_ParamLimits

0x61f9,	// (0x0003bdb9) ai5_sk_pane

0xb7a3,	// (0x00041363) cell_ai5_widget_pane_ParamLimits

0xb7a3,	// (0x00041363) cell_ai5_widget_pane

0x6206,	// (0x0003bdc6) aid_size_cell_widget_grid

0x621a,	// (0x0003bdda) bg_ai5_widget_pane_ParamLimits

0x621a,	// (0x0003bdda) bg_ai5_widget_pane

0xb82c,	// (0x000413ec) cell_ai5_widget_pane_g2

0xb83c,	// (0x000413fc) cell_ai5_widget_pane_g3

0xb85b,	// (0x0004141b) cell_ai5_widget_pane_g4

0xb867,	// (0x00041427) cell_ai5_widget_pane_g5

0xb873,	// (0x00041433) cell_ai5_widget_pane_g6

0xb87f,	// (0x0004143f) cell_ai5_widget_pane_g7

0xb8c7,	// (0x00041487) cell_ai5_widget_pane_t1_ParamLimits

0xb8c7,	// (0x00041487) cell_ai5_widget_pane_t1

0xb8e4,	// (0x000414a4) cell_ai5_widget_pane_t2_ParamLimits

0xb8e4,	// (0x000414a4) cell_ai5_widget_pane_t2

0xb8fc,	// (0x000414bc) cell_ai5_widget_pane_t3_ParamLimits

0xb8fc,	// (0x000414bc) cell_ai5_widget_pane_t3

0xb914,	// (0x000414d4) cell_ai5_widget_pane_t4_ParamLimits

0xb914,	// (0x000414d4) cell_ai5_widget_pane_t4

0xb92e,	// (0x000414ee) cell_ai5_widget_pane_t5_ParamLimits

0xb92e,	// (0x000414ee) cell_ai5_widget_pane_t5

0x6226,	// (0x0003bde6) cell_ai5_widget_pane_t6_ParamLimits

0x6226,	// (0x0003bde6) cell_ai5_widget_pane_t6

0x6238,	// (0x0003bdf8) cell_ai5_widget_pane_t7_ParamLimits

0x6238,	// (0x0003bdf8) cell_ai5_widget_pane_t7

0xb94d,	// (0x0004150d) cell_ai5_widget_pane_t8_ParamLimits

0xb94d,	// (0x0004150d) cell_ai5_widget_pane_t8

0x0009,

0xfdea,	// (0x000459aa) cell_ai5_widget_pane_t_ParamLimits

0xfdea,	// (0x000459aa) cell_ai5_widget_pane_t

0xb999,	// (0x00041559) grid_ai5_widget_pane

0xc22e,	// (0x00041dee) highlight_cell_ai5_widget_pane_ParamLimits

0xc22e,	// (0x00041dee) highlight_cell_ai5_widget_pane

0xb9af,	// (0x0004156f) ai5_sk_left_pane

0xb9b9,	// (0x00041579) ai5_sk_middle_pane

0xb9c3,	// (0x00041583) ai5_sk_right_pane

0x6251,	// (0x0003be11) bg_ai5_widget_pane_g1_ParamLimits

0x6251,	// (0x0003be11) bg_ai5_widget_pane_g1

0x625d,	// (0x0003be1d) bg_ai5_widget_pane_g2_ParamLimits

0x625d,	// (0x0003be1d) bg_ai5_widget_pane_g2

0x6269,	// (0x0003be29) bg_ai5_widget_pane_g3_ParamLimits

0x6269,	// (0x0003be29) bg_ai5_widget_pane_g3

0x6275,	// (0x0003be35) bg_ai5_widget_pane_g4_ParamLimits

0x6275,	// (0x0003be35) bg_ai5_widget_pane_g4

0x6281,	// (0x0003be41) bg_ai5_widget_pane_g5_ParamLimits

0x6281,	// (0x0003be41) bg_ai5_widget_pane_g5

0x628d,	// (0x0003be4d) bg_ai5_widget_pane_g6_ParamLimits

0x628d,	// (0x0003be4d) bg_ai5_widget_pane_g6

0x6299,	// (0x0003be59) bg_ai5_widget_pane_g7_ParamLimits

0x6299,	// (0x0003be59) bg_ai5_widget_pane_g7

0x62a5,	// (0x0003be65) bg_ai5_widget_pane_g8_ParamLimits

0x62a5,	// (0x0003be65) bg_ai5_widget_pane_g8

0x62b1,	// (0x0003be71) bg_ai5_widget_pane_g9_ParamLimits

0x62b1,	// (0x0003be71) bg_ai5_widget_pane_g9

0x0008,

0xfdff,	// (0x000459bf) bg_ai5_widget_pane_g_ParamLimits

0xfdff,	// (0x000459bf) bg_ai5_widget_pane_g

0x62e4,	// (0x0003bea4) cell_shortcut_ai5_widget_pane_ParamLimits

0x62e4,	// (0x0003bea4) cell_shortcut_ai5_widget_pane

0xbaa3,	// (0x00041663) bg_cell_shortcut_ai5_widget_pane

0x62f5,	// (0x0003beb5) cell_grid_ai5_widget_pane_g1

0x62fe,	// (0x0003bebe) highlight_cell_shortcut_ai5_widget_pane

0xd1c5,	// (0x00042d85) ai5_sk_left_pane_g1

0x6306,	// (0x0003bec6) ai5_sk_left_pane_g2

0x630e,	// (0x0003bece) ai5_sk_left_pane_g3

0x6316,	// (0x0003bed6) ai5_sk_left_pane_g4

0x0003,

0xfe12,	// (0x000459d2) ai5_sk_left_pane_g

0x631e,	// (0x0003bede) ai5_sk_left_pane_t1

0xd1bd,	// (0x00042d7d) ai5_sk_right_pane_g1

0x632c,	// (0x0003beec) ai5_sk_right_pane_g2

0x6334,	// (0x0003bef4) ai5_sk_right_pane_g3

0x633c,	// (0x0003befc) ai5_sk_right_pane_g4

0x0003,

0xfe1b,	// (0x000459db) ai5_sk_right_pane_g

0x6344,	// (0x0003bf04) ai5_sk_right_pane_t1

0xd1bd,	// (0x00042d7d) ai5_sk_middle_pane_g1

0xd1c5,	// (0x00042d85) ai5_sk_middle_pane_g2

0xd1dd,	// (0x00042d9d) ai5_sk_middle_pane_g3

0x6334,	// (0x0003bef4) ai5_sk_middle_pane_g4

0x630e,	// (0x0003bece) ai5_sk_middle_pane_g5

0x6352,	// (0x0003bf12) ai5_sk_middle_pane_g6

0xb9cd,	// (0x0004158d) ai5_sk_middle_pane_g7

0x0006,

0xfe24,	// (0x000459e4) ai5_sk_middle_pane_g

0x9d26,	// (0x0003f8e6) aid_touch_area_size_lc0_ParamLimits

0x9d26,	// (0x0003f8e6) aid_touch_area_size_lc0

0x2c7a,	// (0x0003883a) cell_hwr_candidate_pane_t1_ParamLimits

0xcfe1,	// (0x00042ba1) aid_touch_navi_pane

0x9fab,	// (0x0003fb6b) status_dt_navi_pane_ParamLimits

0x9fab,	// (0x0003fb6b) status_dt_navi_pane

0x9fc3,	// (0x0003fb83) status_dt_sta_pane_ParamLimits

0x9fc3,	// (0x0003fb83) status_dt_sta_pane

0xb9d5,	// (0x00041595) dt_sta_controll_pane

0xb9e2,	// (0x000415a2) dt_sta_indi_pane

0xbbd8,	// (0x00041798) dt_sta_title_pane

0xbb9a,	// (0x0004175a) bg_dt_sta_indi_pane_ParamLimits

0xbb9a,	// (0x0004175a) bg_dt_sta_indi_pane

0xbbea,	// (0x000417aa) dt_sta_battery_pane

0xbbf2,	// (0x000417b2) dt_sta_indi_pane_g1

0x635a,	// (0x0003bf1a) dt_sta_indi_pane_g2

0x6363,	// (0x0003bf23) dt_sta_indi_pane_g3

0x0002,

0xfe33,	// (0x000459f3) dt_sta_indi_pane_g

0x636c,	// (0x0003bf2c) dt_sta_signal_pane

0xc22e,	// (0x00041dee) bg_dt_sta_title_pane_ParamLimits

0xc22e,	// (0x00041dee) bg_dt_sta_title_pane

0xde7a,	// (0x00043a3a) dt_sta_title_pane_g1

0xbbfb,	// (0x000417bb) dt_sta_title_pane_t1_ParamLimits

0xbbfb,	// (0x000417bb) dt_sta_title_pane_t1

0xb9f7,	// (0x000415b7) bg_dt_sta_control_pane

0xbc10,	// (0x000417d0) dt_sta_controll_pane_g1

0x6375,	// (0x0003bf35) bg_dt_sta_title_pane_g1

0x637e,	// (0x0003bf3e) bg_dt_sta_title_pane_g2

0x6387,	// (0x0003bf47) bg_dt_sta_title_pane_g3

0x0002,

0xfe3a,	// (0x000459fa) bg_dt_sta_title_pane_g

0xef5f,	// (0x00044b1f) bg_dt_sta_indi_pane_g1

0x6390,	// (0x0003bf50) dt_sta_signal_pane_g1

0x6398,	// (0x0003bf58) dt_sta_signal_pane_g2

0x0001,

0xfe41,	// (0x00045a01) dt_sta_signal_pane_g

0x63a0,	// (0x0003bf60) dt_sta_battery_pane_g1

0x63a9,	// (0x0003bf69) dt_sta_battery_pane_t1

0xef5f,	// (0x00044b1f) bg_dt_sta_control_pane_g1

0xc7e4,	// (0x000423a4) fep_china_uni_eep_pane

0xc7ec,	// (0x000423ac) fep_china_uni_entry_pane_ParamLimits

0xc7fc,	// (0x000423bc) popup_fep_china_uni_window_g1_ParamLimits

0xc80c,	// (0x000423cc) popup_fep_china_uni_window_g2_ParamLimits

0xc80c,	// (0x000423cc) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x000452fa) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x000452fa) popup_fep_china_uni_window_g

0x63b8,	// (0x0003bf78) fep_china_uni_eep_pane_g1

0x63c0,	// (0x0003bf80) fep_china_uni_eep_pane_t1

0x61cc,	// (0x0003bd8c) aid_touch_area_size_smil_player

0xd0a0,	// (0x00042c60) lc0_clock_pane

0xd0d9,	// (0x00042c99) status_pane_g5_ParamLimits

0xd0d9,	// (0x00042c99) status_pane_g5

0x97f2,	// (0x0003f3b2) popup_keymap_window

0xd0b9,	// (0x00042c79) status_icon_pane

0xb83c,	// (0x000413fc) cell_ai5_widget_pane_g3_ParamLimits

0xb85b,	// (0x0004141b) cell_ai5_widget_pane_g4_ParamLimits

0xb867,	// (0x00041427) cell_ai5_widget_pane_g5_ParamLimits

0xb88b,	// (0x0004144b) cell_ai5_widget_pane_g8_ParamLimits

0xb88b,	// (0x0004144b) cell_ai5_widget_pane_g8

0xb89f,	// (0x0004145f) cell_ai5_widget_pane_g9_ParamLimits

0xb89f,	// (0x0004145f) cell_ai5_widget_pane_g9

0xb8b3,	// (0x00041473) cell_ai5_widget_pane_g10_ParamLimits

0xb8b3,	// (0x00041473) cell_ai5_widget_pane_g10

0x63cf,	// (0x0003bf8f) status_icon_pane_g1

0xb9f7,	// (0x000415b7) bg_popup_sub_pane_cp13

0x63d7,	// (0x0003bf97) popup_keymap_window_t1

0x9625,	// (0x0003f1e5) control_pane_g6_ParamLimits

0x9625,	// (0x0003f1e5) control_pane_g6

0x9632,	// (0x0003f1f2) control_pane_g7_ParamLimits

0x9632,	// (0x0003f1f2) control_pane_g7

0x963f,	// (0x0003f1ff) control_pane_g8_ParamLimits

0x963f,	// (0x0003f1ff) control_pane_g8

0xb9d5,	// (0x00041595) dt_sta_controll_pane_ParamLimits

0xb9e2,	// (0x000415a2) dt_sta_indi_pane_ParamLimits

0xbbd8,	// (0x00041798) dt_sta_title_pane_ParamLimits

0xc170,	// (0x00041d30) aid_size_touch_scroll_bar_cale

0x1625,	// (0x000371e5) popup_discreet_window_ParamLimits

0x1625,	// (0x000371e5) popup_discreet_window

0x86b2,	// (0x0003e272) popup_sk_window

0xd762,	// (0x00043322) bg_popup_sub_pane_cp28_ParamLimits

0xd762,	// (0x00043322) bg_popup_sub_pane_cp28

0x63e5,	// (0x0003bfa5) popup_discreet_window_g1_ParamLimits

0x63e5,	// (0x0003bfa5) popup_discreet_window_g1

0x6405,	// (0x0003bfc5) popup_discreet_window_t1_ParamLimits

0x6405,	// (0x0003bfc5) popup_discreet_window_t1

0x6423,	// (0x0003bfe3) popup_discreet_window_t2_ParamLimits

0x6423,	// (0x0003bfe3) popup_discreet_window_t2

0x0002,

0xfe46,	// (0x00045a06) popup_discreet_window_t_ParamLimits

0xfe46,	// (0x00045a06) popup_discreet_window_t

0x362b,	// (0x000391eb) popup_sk_window_g1

0x3635,	// (0x000391f5) popup_sk_window_g2

0x0001,

0xfe4d,	// (0x00045a0d) popup_sk_window_g

0x6475,	// (0x0003c035) popup_sk_window_t1

0x6483,	// (0x0003c043) popup_sk_window_t1_copy1

0xb82c,	// (0x000413ec) cell_ai5_widget_pane_g2_ParamLimits

0xb95f,	// (0x0004151f) cell_ai5_widget_pane_t9_ParamLimits

0xb95f,	// (0x0004151f) cell_ai5_widget_pane_t9

0xb9f7,	// (0x000415b7) main_fep_fshwr2_pane

0xbc19,	// (0x000417d9) aid_fshwr2_btn_pane

0xbc21,	// (0x000417e1) aid_fshwr2_syb_pane

0xbc29,	// (0x000417e9) aid_fshwr2_txt_pane

0xbc31,	// (0x000417f1) fshwr2_func_candi_pane

0xbc3b,	// (0x000417fb) fshwr2_hwr_syb_pane

0xbc49,	// (0x00041809) fshwr2_icf_pane

0xb9f7,	// (0x000415b7) fshwr2_icf_bg_pane

0xbc53,	// (0x00041813) fshwr2_icf_pane_t1_ParamLimits

0xbc53,	// (0x00041813) fshwr2_icf_pane_t1

0xef5f,	// (0x00044b1f) fshwr2_func_candi_pane_g1

0x64a5,	// (0x0003c065) fshwr2_func_candi_row_pane_ParamLimits

0x64a5,	// (0x0003c065) fshwr2_func_candi_row_pane

0xbc6d,	// (0x0004182d) cell_fshwr2_syb_pane_ParamLimits

0xbc6d,	// (0x0004182d) cell_fshwr2_syb_pane

0xf1f4,	// (0x00044db4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf1f4,	// (0x00044db4) fshwr2_hwr_syb_pane_g1

0xb9f7,	// (0x000415b7) bg_popup_call_pane_cp01

0x64b6,	// (0x0003c076) fshwr2_func_candi_cell_pane_ParamLimits

0x64b6,	// (0x0003c076) fshwr2_func_candi_cell_pane

0x64e7,	// (0x0003c0a7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x64e7,	// (0x0003c0a7) fshwr2_func_candi_cell_bg_pane

0x6501,	// (0x0003c0c1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6501,	// (0x0003c0c1) fshwr2_func_candi_cell_pane_g1

0x6521,	// (0x0003c0e1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6521,	// (0x0003c0e1) fshwr2_func_candi_cell_pane_t1

0xb9f7,	// (0x000415b7) bg_button_pane_cp08

0xcc75,	// (0x00042835) cell_fshwr2_syb_bg_pane

0xbc87,	// (0x00041847) cell_fshwr2_syb_bg_pane_g1

0x6534,	// (0x0003c0f4) cell_fshwr2_syb_bg_pane_t1

0xc22e,	// (0x00041dee) main_tmo_pane

0xa303,	// (0x0003fec3) uni_indicator_pane_g1_ParamLimits

0xa318,	// (0x0003fed8) uni_indicator_pane_g2_ParamLimits

0xa32d,	// (0x0003feed) uni_indicator_pane_g3_ParamLimits

0xe13e,	// (0x00043cfe) uni_indicator_pane_g4_ParamLimits

0xe13e,	// (0x00043cfe) uni_indicator_pane_g4

0xe152,	// (0x00043d12) uni_indicator_pane_g5_ParamLimits

0xe152,	// (0x00043d12) uni_indicator_pane_g5

0xe172,	// (0x00043d32) uni_indicator_pane_g6_ParamLimits

0xe172,	// (0x00043d32) uni_indicator_pane_g6

0xf8da,	// (0x0004549a) uni_indicator_pane_g_ParamLimits

0xac97,	// (0x00040857) popup_tmo_note_window_ParamLimits

0xac97,	// (0x00040857) popup_tmo_note_window

0xb9f7,	// (0x000415b7) fshwr2_bg_pane

0x6512,	// (0x0003c0d2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6512,	// (0x0003c0d2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe52,	// (0x00045a12) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe52,	// (0x00045a12) fshwr2_func_candi_cell_pane_g

0xef5f,	// (0x00044b1f) bg_popup_window_pane_cp01

0x6543,	// (0x0003c103) bg_popup_window_pane_g1_cp01

0x654c,	// (0x0003c10c) bg_popup_window_pane_cp22_ParamLimits

0x654c,	// (0x0003c10c) bg_popup_window_pane_cp22

0x655a,	// (0x0003c11a) listscroll_tmo_link_pane_ParamLimits

0x655a,	// (0x0003c11a) listscroll_tmo_link_pane

0x659a,	// (0x0003c15a) popup_tmo_note_window_g1_ParamLimits

0x659a,	// (0x0003c15a) popup_tmo_note_window_g1

0x65a7,	// (0x0003c167) tmo_note_info_pane_ParamLimits

0x65a7,	// (0x0003c167) tmo_note_info_pane

0xbc8f,	// (0x0004184f) list_tmo_note_info_pane_g1_ParamLimits

0xbc8f,	// (0x0004184f) list_tmo_note_info_pane_g1

0x65c1,	// (0x0003c181) list_tmo_note_info_pane_g2_ParamLimits

0x65c1,	// (0x0003c181) list_tmo_note_info_pane_g2

0x0001,

0xfe57,	// (0x00045a17) list_tmo_note_info_pane_g_ParamLimits

0xfe57,	// (0x00045a17) list_tmo_note_info_pane_g

0x65dd,	// (0x0003c19d) list_tmo_note_info_text_pane_ParamLimits

0x65dd,	// (0x0003c19d) list_tmo_note_info_text_pane

0x661f,	// (0x0003c1df) list_tmo_link_pane

0x662c,	// (0x0003c1ec) scroll_pane_cp20

0x6639,	// (0x0003c1f9) list_single_tmo_link_pane_ParamLimits

0x6639,	// (0x0003c1f9) list_single_tmo_link_pane

0x6649,	// (0x0003c209) list_single_tmo_link_pane_t1

0x6657,	// (0x0003c217) list_tmo_note_info_text_pane_t1_ParamLimits

0x6657,	// (0x0003c217) list_tmo_note_info_text_pane_t1

0x932a,	// (0x0003eeea) aid_size_touch_scroll_bar_cp01_ParamLimits

0x932a,	// (0x0003eeea) aid_size_touch_scroll_bar_cp01

0x82c5,	// (0x0003de85) aid_size_touch_slider_marker

0x86a2,	// (0x0003e262) popup_settings_window_ParamLimits

0x86a2,	// (0x0003e262) popup_settings_window

0x0cd5,	// (0x00036895) popup_candi_list_indi_window

0xcfe1,	// (0x00042ba1) aid_touch_navi_pane_ParamLimits

0x2e3c,	// (0x000389fc) rs_clock_indi_pane

0x2e45,	// (0x00038a05) sctrl_sk_bottom_pane_ParamLimits

0x2e56,	// (0x00038a16) sctrl_sk_top_pane_ParamLimits

0x2f41,	// (0x00038b01) popup_fep_tooltip_window

0x6206,	// (0x0003bdc6) aid_size_cell_widget_grid_ParamLimits

0xb820,	// (0x000413e0) cell_ai5_widget_pane_g1_ParamLimits

0xb820,	// (0x000413e0) cell_ai5_widget_pane_g1

0xb873,	// (0x00041433) cell_ai5_widget_pane_g6_ParamLimits

0xb87f,	// (0x0004143f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdd5,	// (0x00045995) cell_ai5_widget_pane_g_ParamLimits

0xfdd5,	// (0x00045995) cell_ai5_widget_pane_g

0xb983,	// (0x00041543) cell_ai5_widget_pane_t10_ParamLimits

0xb983,	// (0x00041543) cell_ai5_widget_pane_t10

0xb999,	// (0x00041559) grid_ai5_widget_pane_ParamLimits

0x62bd,	// (0x0003be7d) cell_contacts_ai5_widget_pane_ParamLimits

0x62bd,	// (0x0003be7d) cell_contacts_ai5_widget_pane

0x6438,	// (0x0003bff8) popup_discreet_window_t3_ParamLimits

0x6438,	// (0x0003bff8) popup_discreet_window_t3

0x6491,	// (0x0003c051) popup_fshwr2_char_preview_window_ParamLimits

0x6491,	// (0x0003c051) popup_fshwr2_char_preview_window

0xbca6,	// (0x00041866) tmo_note_info_pane_t1

0xbee6,	// (0x00041aa6) tmo_note_info_pane_t2

0xbeff,	// (0x00041abf) tmo_note_info_pane_t3

0x65fb,	// (0x0003c1bb) tmo_note_info_pane_t4

0x660d,	// (0x0003c1cd) tmo_note_info_pane_t5

0x0004,

0xfe5c,	// (0x00045a1c) tmo_note_info_pane_t

0x661f,	// (0x0003c1df) list_tmo_link_pane_ParamLimits

0x662c,	// (0x0003c1ec) scroll_pane_cp20_ParamLimits

0xb9f7,	// (0x000415b7) bg_popup_fep_char_preview_window_cp01

0x6670,	// (0x0003c230) popup_fshwr2_char_preview_window_t1

0x667e,	// (0x0003c23e) popup_candi_list_indi_window_g1

0x6687,	// (0x0003c247) bg_cell_contacts_ai5_widget_pane

0x6693,	// (0x0003c253) cell_contacts_ai5_widget_pane_g1

0x66a7,	// (0x0003c267) cell_contacts_ai5_widget_pane_g2

0x66b6,	// (0x0003c276) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe67,	// (0x00045a27) cell_contacts_ai5_widget_pane_g

0x66c9,	// (0x0003c289) cell_contacts_ai5_widget_pane_t1

0xc22e,	// (0x00041dee) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6743,	// (0x0003c303) settings_container_pane

0xcc75,	// (0x00042835) listscroll_set_pane_copy1

0xe94f,	// (0x0004450f) scroll_pane_cp121_copy1

0x674f,	// (0x0003c30f) set_content_pane_copy1

0x6757,	// (0x0003c317) aid_height_set_list_copy1_ParamLimits

0x6757,	// (0x0003c317) aid_height_set_list_copy1

0xd8d8,	// (0x00043498) aid_size_parent_copy1_ParamLimits

0xd8d8,	// (0x00043498) aid_size_parent_copy1

0x6763,	// (0x0003c323) button_value_adjust_pane_cp6_copy1_ParamLimits

0x6763,	// (0x0003c323) button_value_adjust_pane_cp6_copy1

0xc385,	// (0x00041f45) list_highlight_pane_cp2_copy1_ParamLimits

0xc385,	// (0x00041f45) list_highlight_pane_cp2_copy1

0x6777,	// (0x0003c337) list_set_pane_copy1_ParamLimits

0x6777,	// (0x0003c337) list_set_pane_copy1

0x66de,	// (0x0003c29e) main_pane_set_t1_copy1_ParamLimits

0x66de,	// (0x0003c29e) main_pane_set_t1_copy1

0x6718,	// (0x0003c2d8) main_pane_set_t2_copy1_ParamLimits

0x6718,	// (0x0003c2d8) main_pane_set_t2_copy1

0x6824,	// (0x0003c3e4) main_pane_set_t3_copy1

0x6832,	// (0x0003c3f2) main_pane_set_t4_copy1

0x6737,	// (0x0003c2f7) set_content_pane_g1_copy1_ParamLimits

0x6737,	// (0x0003c2f7) set_content_pane_g1_copy1

0x6840,	// (0x0003c400) setting_code_pane_copy1

0x684a,	// (0x0003c40a) setting_slider_graphic_pane_copy1

0x684a,	// (0x0003c40a) setting_slider_pane_copy1

0x684a,	// (0x0003c40a) setting_text_pane_copy1

0x6854,	// (0x0003c414) setting_volume_pane_copy1

0x685d,	// (0x0003c41d) settings_code_pane_cp2_copy1

0x6865,	// (0x0003c425) settings_code_pane_cp_copy1_ParamLimits

0x6865,	// (0x0003c425) settings_code_pane_cp_copy1

0x6879,	// (0x0003c439) volume_set_pane_copy1

0x6881,	// (0x0003c441) volume_set_pane_g10_copy1

0x6889,	// (0x0003c449) volume_set_pane_g1_copy1

0x6891,	// (0x0003c451) volume_set_pane_g2_copy1

0x6899,	// (0x0003c459) volume_set_pane_g3_copy1

0x68a1,	// (0x0003c461) volume_set_pane_g4_copy1

0x68a9,	// (0x0003c469) volume_set_pane_g5_copy1

0x68b1,	// (0x0003c471) volume_set_pane_g6_copy1

0x68b9,	// (0x0003c479) volume_set_pane_g7_copy1

0x68c1,	// (0x0003c481) volume_set_pane_g8_copy1

0x68c9,	// (0x0003c489) volume_set_pane_g9_copy1

0xba67,	// (0x00041627) bg_set_opt_pane_cp_copy1_ParamLimits

0xba67,	// (0x00041627) bg_set_opt_pane_cp_copy1

0x68d1,	// (0x0003c491) setting_slider_pane_t1_copy1_ParamLimits

0x68d1,	// (0x0003c491) setting_slider_pane_t1_copy1

0x68ef,	// (0x0003c4af) setting_slider_pane_t2_copy1_ParamLimits

0x68ef,	// (0x0003c4af) setting_slider_pane_t2_copy1

0x6909,	// (0x0003c4c9) setting_slider_pane_t3_copy1_ParamLimits

0x6909,	// (0x0003c4c9) setting_slider_pane_t3_copy1

0x6921,	// (0x0003c4e1) slider_set_pane_copy1_ParamLimits

0x6921,	// (0x0003c4e1) slider_set_pane_copy1

0xc295,	// (0x00041e55) set_opt_bg_pane_g1_copy2

0xc29d,	// (0x00041e5d) set_opt_bg_pane_g2_copy2

0x6937,	// (0x0003c4f7) set_opt_bg_pane_g3_copy2

0xc2ad,	// (0x00041e6d) set_opt_bg_pane_g4_copy2

0xc2b5,	// (0x00041e75) set_opt_bg_pane_g5_copy2

0xc2bd,	// (0x00041e7d) set_opt_bg_pane_g6_copy2

0x6941,	// (0x0003c501) set_opt_bg_pane_g7_copy2

0x6949,	// (0x0003c509) set_opt_bg_pane_g8_copy2

0x6953,	// (0x0003c513) set_opt_bg_pane_g9_copy2

0x363f,	// (0x000391ff) aid_size_touch_slider_mark_copy1_ParamLimits

0x363f,	// (0x000391ff) aid_size_touch_slider_mark_copy1

0x695d,	// (0x0003c51d) slider_set_pane_g1_copy1

0x3653,	// (0x00039213) slider_set_pane_g2_copy1

0x2775,	// (0x00038335) slider_set_pane_g3_copy1_ParamLimits

0x2775,	// (0x00038335) slider_set_pane_g3_copy1

0x2789,	// (0x00038349) slider_set_pane_g4_copy1_ParamLimits

0x2789,	// (0x00038349) slider_set_pane_g4_copy1

0x27a1,	// (0x00038361) slider_set_pane_g5_copy1_ParamLimits

0x27a1,	// (0x00038361) slider_set_pane_g5_copy1

0x2775,	// (0x00038335) slider_set_pane_g6_copy1_ParamLimits

0x2775,	// (0x00038335) slider_set_pane_g6_copy1

0x365b,	// (0x0003921b) slider_set_pane_g7_copy1_ParamLimits

0x365b,	// (0x0003921b) slider_set_pane_g7_copy1

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp2_copy1

0x6966,	// (0x0003c526) setting_slider_graphic_pane_g1_copy1

0x696f,	// (0x0003c52f) setting_slider_graphic_pane_t1_copy1

0x697f,	// (0x0003c53f) setting_slider_graphic_pane_t2_copy1

0x698f,	// (0x0003c54f) slider_set_pane_cp_copy1

0x699f,	// (0x0003c55f) input_focus_pane_cp1_copy1

0x69a8,	// (0x0003c568) list_set_text_pane_copy1

0x69b0,	// (0x0003c570) setting_text_pane_g1_copy1

0x137e,	// (0x00036f3e) set_text_pane_t1_copy1

0x699f,	// (0x0003c55f) input_focus_pane_cp2_copy1

0x69b0,	// (0x0003c570) setting_code_pane_g1_copy1

0x69b9,	// (0x0003c579) setting_code_pane_t1_copy1

0x69c7,	// (0x0003c587) list_set_graphic_pane_copy1

0xba0b,	// (0x000415cb) bg_set_opt_pane_cp4_copy1

0xc977,	// (0x00042537) list_set_graphic_pane_g1_copy1_ParamLimits

0xc977,	// (0x00042537) list_set_graphic_pane_g1_copy1

0x69db,	// (0x0003c59b) list_set_graphic_pane_g2_copy1

0xc98f,	// (0x0004254f) list_set_graphic_pane_t1_copy1_ParamLimits

0xc98f,	// (0x0004254f) list_set_graphic_pane_t1_copy1

0xef5f,	// (0x00044b1f) rs_clock_indi_pane_g1

0x69e3,	// (0x0003c5a3) rs_clock_indi_pane_t1

0x69f1,	// (0x0003c5b1) rs_indi_pane

0x69f9,	// (0x0003c5b9) rs_indi_pane_g1

0x6a02,	// (0x0003c5c2) rs_indi_pane_g2

0x6a0b,	// (0x0003c5cb) rs_indi_pane_g3

0x0002,

0xfe6e,	// (0x00045a2e) rs_indi_pane_g

0xcc75,	// (0x00042835) bg_popup_preview_window_pane_cp03

0x6a14,	// (0x0003c5d4) popup_fep_tooltip_window_t1

0x4d1d,	// (0x0003a8dd) popup_note2_window_g2_ParamLimits

0x4d1d,	// (0x0003a8dd) popup_note2_window_g2

0x0001,

0xfc0e,	// (0x000457ce) popup_note2_window_g_ParamLimits

0xfc0e,	// (0x000457ce) popup_note2_window_g

0x520b,	// (0x0003adcb) bg_popup_sub_pane_cp11_ParamLimits

0x5218,	// (0x0003add8) cell_ai3_links_pane_g1_ParamLimits

0x522f,	// (0x0003adef) cell_ai3_links_pane_t1

0x137e,	// (0x00036f3e) set_text_pane_t1_copy1_ParamLimits

0xcb84,	// (0x00042744) cell_graphic_popup_pane_cp2_ParamLimits

0xcb84,	// (0x00042744) cell_graphic_popup_pane_cp2

0x6a22,	// (0x0003c5e2) cell_graphic_popup_pane_g1_cp2

0xbf83,	// (0x00041b43) cell_graphic_popup_pane_g2_cp2

0x6a2a,	// (0x0003c5ea) cell_graphic_popup_pane_g3_cp2

0x6a32,	// (0x0003c5f2) cell_graphic_popup_pane_t2_cp2

0xbf94,	// (0x00041b54) grid_highlight_pane_cp3_cp2

0xc52f,	// (0x000420ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc22e,	// (0x00041dee) main_tmo_pane_ParamLimits

0xac8b,	// (0x0004084b) popup_tmo_big_image_note_window

0xb810,	// (0x000413d0) cell_ai5_widget_list_pane

0xb818,	// (0x000413d8) cell_ai5_widget_lrg_icon_pane

0xbca6,	// (0x00041866) tmo_note_info_pane_t1_ParamLimits

0xbee6,	// (0x00041aa6) tmo_note_info_pane_t2_ParamLimits

0xbeff,	// (0x00041abf) tmo_note_info_pane_t3_ParamLimits

0x65fb,	// (0x0003c1bb) tmo_note_info_pane_t4_ParamLimits

0x660d,	// (0x0003c1cd) tmo_note_info_pane_t5_ParamLimits

0xfe5c,	// (0x00045a1c) tmo_note_info_pane_t_ParamLimits

0x6743,	// (0x0003c303) settings_container_pane_ParamLimits

0x6997,	// (0x0003c557) indicator_popup_pane_cp5

0x6997,	// (0x0003c557) indicator_popup_pane_cp6

0x69c7,	// (0x0003c587) list_set_graphic_pane_copy1_ParamLimits

0xb9f7,	// (0x000415b7) bg_popup_window_pane_cp23

0x6a40,	// (0x0003c600) popup_tmo_big_image_note_window_g1

0x6a4b,	// (0x0003c60b) popup_tmo_big_image_note_window_t1

0x6a5b,	// (0x0003c61b) popup_tmo_big_image_note_window_t2

0x6a6b,	// (0x0003c62b) popup_tmo_big_image_note_window_t3

0x0002,

0xfe75,	// (0x00045a35) popup_tmo_big_image_note_window_t

0xbf14,	// (0x00041ad4) cell_ai5_widget_lrg_icon_pane_g1

0xbf1c,	// (0x00041adc) cell_ai5_widget_lrg_icon_pane_t1

0xbf2a,	// (0x00041aea) cell_ai5_widget_list_row_pane_ParamLimits

0xbf2a,	// (0x00041aea) cell_ai5_widget_list_row_pane

0xbf43,	// (0x00041b03) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xbf43,	// (0x00041b03) cell_ai5_widget_list_row_pane_g1

0xbf50,	// (0x00041b10) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xbf50,	// (0x00041b10) cell_ai5_widget_list_row_pane_t1

0xbf68,	// (0x00041b28) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xbf68,	// (0x00041b28) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe7c,	// (0x00045a3c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe7c,	// (0x00045a3c) cell_ai5_widget_list_row_pane_t

0xb9f7,	// (0x000415b7) main_fep_vtchi_ss_pane

0x6a7b,	// (0x0003c63b) popup_fep_char_pre_window

0x6a83,	// (0x0003c643) popup_fep_ituss_window

0x6aa4,	// (0x0003c664) popup_fep_vkbss_window

0x6ac3,	// (0x0003c683) grid_vkbss_keypad_pane_ParamLimits

0x6ac3,	// (0x0003c683) grid_vkbss_keypad_pane

0x6ad3,	// (0x0003c693) ituss_keypad_pane

0x6aeb,	// (0x0003c6ab) aid_vkbss_key_offset_ParamLimits

0x6aeb,	// (0x0003c6ab) aid_vkbss_key_offset

0x6af7,	// (0x0003c6b7) cell_vkbss_key_pane_ParamLimits

0x6af7,	// (0x0003c6b7) cell_vkbss_key_pane

0x6b0d,	// (0x0003c6cd) bg_cell_vkbss_key_g1_ParamLimits

0x6b0d,	// (0x0003c6cd) bg_cell_vkbss_key_g1

0x6b19,	// (0x0003c6d9) cell_vkbss_key_3p_pane_ParamLimits

0x6b19,	// (0x0003c6d9) cell_vkbss_key_3p_pane

0x6b33,	// (0x0003c6f3) cell_vkbss_key_g1_ParamLimits

0x6b33,	// (0x0003c6f3) cell_vkbss_key_g1

0x6b4d,	// (0x0003c70d) cell_vkbss_key_t1_ParamLimits

0x6b4d,	// (0x0003c70d) cell_vkbss_key_t1

0x6b78,	// (0x0003c738) cell_ituss_key_pane_ParamLimits

0x6b78,	// (0x0003c738) cell_ituss_key_pane

0x6b88,	// (0x0003c748) bg_cell_ituss_key_g1_ParamLimits

0x6b88,	// (0x0003c748) bg_cell_ituss_key_g1

0x6b94,	// (0x0003c754) cell_ituss_key_pane_g1_ParamLimits

0x6b94,	// (0x0003c754) cell_ituss_key_pane_g1

0x6ba0,	// (0x0003c760) cell_ituss_key_pane_g2_ParamLimits

0x6ba0,	// (0x0003c760) cell_ituss_key_pane_g2

0x0001,

0xfe81,	// (0x00045a41) cell_ituss_key_pane_g_ParamLimits

0xfe81,	// (0x00045a41) cell_ituss_key_pane_g

0x6bb9,	// (0x0003c779) cell_ituss_key_t1_ParamLimits

0x6bb9,	// (0x0003c779) cell_ituss_key_t1

0x6be7,	// (0x0003c7a7) cell_ituss_key_t2_ParamLimits

0x6be7,	// (0x0003c7a7) cell_ituss_key_t2

0x6c18,	// (0x0003c7d8) cell_ituss_key_t3_ParamLimits

0x6c18,	// (0x0003c7d8) cell_ituss_key_t3

0x6c49,	// (0x0003c809) cell_ituss_key_t4_ParamLimits

0x6c49,	// (0x0003c809) cell_ituss_key_t4

0x0003,

0xfe86,	// (0x00045a46) cell_ituss_key_t_ParamLimits

0xfe86,	// (0x00045a46) cell_ituss_key_t

0x6c7a,	// (0x0003c83a) cell_vkbss_key_3p_pane_g1

0x6c82,	// (0x0003c842) cell_vkbss_key_3p_pane_g2

0x6c8a,	// (0x0003c84a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe8f,	// (0x00045a4f) cell_vkbss_key_3p_pane_g

0xb9f7,	// (0x000415b7) bg_popup_fep_char_preview_window_cp02

0x6c92,	// (0x0003c852) popup_fep_char_pre_window_t1

0xb806,	// (0x000413c6) main_ai5_sk_pane

0x6687,	// (0x0003c247) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6693,	// (0x0003c253) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x66a7,	// (0x0003c267) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x66b6,	// (0x0003c276) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe67,	// (0x00045a27) cell_contacts_ai5_widget_pane_g_ParamLimits

0x66c9,	// (0x0003c289) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc22e,	// (0x00041dee) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xbf7a,	// (0x00041b3a) main_ai5_sk_pane_g1

0xd5a0,	// (0x00043160) popup_query_code_window_g1

0x6a99,	// (0x0003c659) popup_fep_vkb_icf_pane

0x6aad,	// (0x0003c66d) popup_fep_vtchi_icf_pane

0xc22e,	// (0x00041dee) bg_icf_pane

0x6cb0,	// (0x0003c870) list_vkb_icf_pane

0xc22e,	// (0x00041dee) bg_icf_pane_cp01

0x553b,	// (0x0003b0fb) vtchi_icf_list_pane

0x6cd0,	// (0x0003c890) list_vkb_icf_pane_t1_ParamLimits

0x6cd0,	// (0x0003c890) list_vkb_icf_pane_t1

0x6cea,	// (0x0003c8aa) vtchi_icf_list_pane_t1_ParamLimits

0x6cea,	// (0x0003c8aa) vtchi_icf_list_pane_t1

0x6a83,	// (0x0003c643) popup_fep_ituss_window_ParamLimits

0x6aad,	// (0x0003c66d) popup_fep_vtchi_icf_pane_ParamLimits

0x6ad3,	// (0x0003c693) ituss_keypad_pane_ParamLimits

0x6ae2,	// (0x0003c6a2) ituss_sks_pane

0xc22e,	// (0x00041dee) bg_icf_pane_ParamLimits

0x6ca1,	// (0x0003c861) icf_edit_indi_pane_ParamLimits

0x6ca1,	// (0x0003c861) icf_edit_indi_pane

0x6cb0,	// (0x0003c870) list_vkb_icf_pane_ParamLimits

0xc22e,	// (0x00041dee) bg_icf_pane_cp01_ParamLimits

0x6cbc,	// (0x0003c87c) icf_edit_indi_pane_cp01_ParamLimits

0x6cbc,	// (0x0003c87c) icf_edit_indi_pane_cp01

0x6cc8,	// (0x0003c888) vtchi_query_pane

0xf1f4,	// (0x00044db4) icf_edit_indi_pane_g1_ParamLimits

0xf1f4,	// (0x00044db4) icf_edit_indi_pane_g1

0x6d0f,	// (0x0003c8cf) icf_edit_indi_pane_g2_ParamLimits

0x6d0f,	// (0x0003c8cf) icf_edit_indi_pane_g2

0x0001,

0xfe96,	// (0x00045a56) icf_edit_indi_pane_g_ParamLimits

0xfe96,	// (0x00045a56) icf_edit_indi_pane_g

0x6d1b,	// (0x0003c8db) icf_edit_indi_pane_t1

0x6d29,	// (0x0003c8e9) bg_input_focus_pane_cp042

0xc167,	// (0x00041d27) vtchi_button_pane

0x6d32,	// (0x0003c8f2) vtchi_query_pane_t1

0x6d40,	// (0x0003c900) vtchi_query_pane_t2

0x6d4e,	// (0x0003c90e) vtchi_query_pane_t3

0x0002,

0xfe9b,	// (0x00045a5b) vtchi_query_pane_t

0xb9f7,	// (0x000415b7) bg_button_pane_cp13

0x6d5c,	// (0x0003c91c) vtchi_button_pane_g1

0x5a86,	// (0x0003b646) ituss_sks_pane_g1

0x6d64,	// (0x0003c924) ituss_sks_pane_g2

0x0001,

0xfea2,	// (0x00045a62) ituss_sks_pane_g

0x6d6d,	// (0x0003c92d) ituss_sks_pane_t1

0x6d7b,	// (0x0003c93b) ituss_sks_pane_t2

0x0001,

0xfea7,	// (0x00045a67) ituss_sks_pane_t

0xec2c,	// (0x000447ec) indicator_nsta_pane_cp_g1

0xec35,	// (0x000447f5) indicator_nsta_pane_cp_g2

0xec3d,	// (0x000447fd) indicator_nsta_pane_cp_g3

0xec45,	// (0x00044805) indicator_nsta_pane_cp_g4

0xec4d,	// (0x0004480d) indicator_nsta_pane_cp_g5

0xec55,	// (0x00044815) indicator_nsta_pane_cp_g6

0x0005,

0xfa5d,	// (0x0004561d) indicator_nsta_pane_cp_g

0xb630,	// (0x000411f0) cell_graphic2_pane_t2_ParamLimits

0xb630,	// (0x000411f0) cell_graphic2_pane_t2

0x0001,

0xfd5e,	// (0x0004591e) cell_graphic2_pane_t_ParamLimits

0xfd5e,	// (0x0004591e) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
