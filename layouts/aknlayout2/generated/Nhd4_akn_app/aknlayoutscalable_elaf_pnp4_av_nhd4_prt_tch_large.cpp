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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00041e2f };

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
0x632a,	// (0x00048159) Screen

0x6336,	// (0x00048165) application_window_ParamLimits

0x6336,	// (0x00048165) application_window

0x09ac,	// (0x000427db) screen_g1

0x6392,	// (0x000481c1) area_bottom_pane_ParamLimits

0x6392,	// (0x000481c1) area_bottom_pane

0x6452,	// (0x00048281) area_top_pane_ParamLimits

0x6452,	// (0x00048281) area_top_pane

0x64e6,	// (0x00048315) main_pane_ParamLimits

0x64e6,	// (0x00048315) main_pane

0x09b6,	// (0x000427e5) misc_graphics

0x98db,	// (0x0004b70a) battery_pane_ParamLimits

0x98db,	// (0x0004b70a) battery_pane

0xa59d,	// (0x0004c3cc) bg_status_flat_pane_g8

0xa5a5,	// (0x0004c3d4) bg_status_flat_pane_g9

0x99a3,	// (0x0004b7d2) context_pane_ParamLimits

0x99a3,	// (0x0004b7d2) context_pane

0x9ab9,	// (0x0004b8e8) navi_pane_ParamLimits

0x9ab9,	// (0x0004b8e8) navi_pane

0x9b3d,	// (0x0004b96c) signal_pane_ParamLimits

0x9b3d,	// (0x0004b96c) signal_pane

0x0008,

0xf874,	// (0x000516a3) bg_status_flat_pane_g

0x9baa,	// (0x0004b9d9) status_pane_g1_ParamLimits

0x9baa,	// (0x0004b9d9) status_pane_g1

0x9bbe,	// (0x0004b9ed) status_pane_g2_ParamLimits

0x9bbe,	// (0x0004b9ed) status_pane_g2

0x9bca,	// (0x0004b9f9) status_pane_g3_ParamLimits

0x9bca,	// (0x0004b9f9) status_pane_g3

0x0004,

0xf79b,	// (0x000515ca) status_pane_g_ParamLimits

0xf79b,	// (0x000515ca) status_pane_g

0x9bfe,	// (0x0004ba2d) title_pane_ParamLimits

0x9bfe,	// (0x0004ba2d) title_pane

0x9c3b,	// (0x0004ba6a) uni_indicator_pane_ParamLimits

0x9c3b,	// (0x0004ba6a) uni_indicator_pane

0x97ff,	// (0x0004b62e) bg_list_pane_ParamLimits

0x97ff,	// (0x0004b62e) bg_list_pane

0x78af,	// (0x000496de) find_pane

0x981f,	// (0x0004b64e) listscroll_app_pane_ParamLimits

0x981f,	// (0x0004b64e) listscroll_app_pane

0x982b,	// (0x0004b65a) listscroll_form_pane

0x78b7,	// (0x000496e6) listscroll_gen_pane_ParamLimits

0x78b7,	// (0x000496e6) listscroll_gen_pane

0x78cb,	// (0x000496fa) listscroll_set_pane

0x6e63,	// (0x00048c92) main_idle_act_pane

0x94ff,	// (0x0004b32e) main_idle_trad_pane

0x94ff,	// (0x0004b32e) main_list_empty_pane

0x9845,	// (0x0004b674) main_midp_pane

0x9851,	// (0x0004b680) main_pane_g1_ParamLimits

0x9851,	// (0x0004b680) main_pane_g1

0x78d3,	// (0x00049702) popup_ai_message_window_ParamLimits

0x78d3,	// (0x00049702) popup_ai_message_window

0x7977,	// (0x000497a6) popup_fep_china_uni_window_ParamLimits

0x7977,	// (0x000497a6) popup_fep_china_uni_window

0x79d1,	// (0x00049800) popup_fep_japan_candidate_window_ParamLimits

0x79d1,	// (0x00049800) popup_fep_japan_candidate_window

0x79ef,	// (0x0004981e) popup_fep_japan_predictive_window_ParamLimits

0x79ef,	// (0x0004981e) popup_fep_japan_predictive_window

0x7a1f,	// (0x0004984e) popup_find_window

0x7a2c,	// (0x0004985b) popup_grid_graphic_window_ParamLimits

0x7a2c,	// (0x0004985b) popup_grid_graphic_window

0x7a56,	// (0x00049885) popup_large_graphic_colour_window

0x7a7c,	// (0x000498ab) popup_menu_window_ParamLimits

0x7a7c,	// (0x000498ab) popup_menu_window

0x7c38,	// (0x00049a67) popup_note_image_window

0x7c24,	// (0x00049a53) popup_note_wait_window_ParamLimits

0x7c24,	// (0x00049a53) popup_note_wait_window

0x7c24,	// (0x00049a53) popup_note_window_ParamLimits

0x7c24,	// (0x00049a53) popup_note_window

0x7c8e,	// (0x00049abd) popup_query_code_window_ParamLimits

0x7c8e,	// (0x00049abd) popup_query_code_window

0x7ca2,	// (0x00049ad1) popup_query_data_code_window_ParamLimits

0x7ca2,	// (0x00049ad1) popup_query_data_code_window

0x7cbf,	// (0x00049aee) popup_query_data_window_ParamLimits

0x7cbf,	// (0x00049aee) popup_query_data_window

0x7cdb,	// (0x00049b0a) popup_query_sat_info_window_ParamLimits

0x7cdb,	// (0x00049b0a) popup_query_sat_info_window

0x7d14,	// (0x00049b43) popup_snote_single_graphic_window_ParamLimits

0x7d14,	// (0x00049b43) popup_snote_single_graphic_window

0x7d14,	// (0x00049b43) popup_snote_single_text_window_ParamLimits

0x7d14,	// (0x00049b43) popup_snote_single_text_window

0x7d29,	// (0x00049b58) popup_sub_window_general

0x7e59,	// (0x00049c88) popup_window_general_ParamLimits

0x7e59,	// (0x00049c88) popup_window_general

0x985f,	// (0x0004b68e) power_save_pane

0x7741,	// (0x00049570) control_pane_g1_ParamLimits

0x7741,	// (0x00049570) control_pane_g1

0x7768,	// (0x00049597) control_pane_g2_ParamLimits

0x7768,	// (0x00049597) control_pane_g2

0x97c2,	// (0x0004b5f1) control_pane_g3_ParamLimits

0x97c2,	// (0x0004b5f1) control_pane_g3

0x0007,

0xf783,	// (0x000515b2) control_pane_g_ParamLimits

0xf783,	// (0x000515b2) control_pane_g

0x77b2,	// (0x000495e1) control_pane_t1_ParamLimits

0x77b2,	// (0x000495e1) control_pane_t1

0x7806,	// (0x00049635) control_pane_t2_ParamLimits

0x7806,	// (0x00049635) control_pane_t2

0x0002,

0xf794,	// (0x000515c3) control_pane_t_ParamLimits

0xf794,	// (0x000515c3) control_pane_t

0x96e7,	// (0x0004b516) navi_navi_volume_pane_cp1

0x96ef,	// (0x0004b51e) status_small_icon_pane

0x96f7,	// (0x0004b526) status_small_pane_g1_ParamLimits

0x96f7,	// (0x0004b526) status_small_pane_g1

0x972b,	// (0x0004b55a) status_small_pane_g2_ParamLimits

0x972b,	// (0x0004b55a) status_small_pane_g2

0x9737,	// (0x0004b566) status_small_pane_g3_ParamLimits

0x9737,	// (0x0004b566) status_small_pane_g3

0x9743,	// (0x0004b572) status_small_pane_g4_ParamLimits

0x9743,	// (0x0004b572) status_small_pane_g4

0x974f,	// (0x0004b57e) status_small_pane_g5_ParamLimits

0x974f,	// (0x0004b57e) status_small_pane_g5

0x975d,	// (0x0004b58c) status_small_pane_g6_ParamLimits

0x975d,	// (0x0004b58c) status_small_pane_g6

0x0007,

0xf772,	// (0x000515a1) status_small_pane_g_ParamLimits

0xf772,	// (0x000515a1) status_small_pane_g

0x978c,	// (0x0004b5bb) status_small_pane_t1

0x97ae,	// (0x0004b5dd) status_small_wait_pane_ParamLimits

0x97ae,	// (0x0004b5dd) status_small_wait_pane

0x7238,	// (0x00049067) aid_levels_signal_ParamLimits

0x7238,	// (0x00049067) aid_levels_signal

0x724a,	// (0x00049079) signal_pane_g1_ParamLimits

0x724a,	// (0x00049079) signal_pane_g1

0x725f,	// (0x0004908e) signal_pane_g2_ParamLimits

0x725f,	// (0x0004908e) signal_pane_g2

0x0003,

0xf703,	// (0x00051532) signal_pane_g_ParamLimits

0xf703,	// (0x00051532) signal_pane_g

0x124f,	// (0x0004307e) context_pane_g1

0x6727,	// (0x00048556) title_pane_g1

0x6751,	// (0x00048580) title_pane_t1

0x09cc,	// (0x000427fb) title_pane_t2

0x09f2,	// (0x00042821) title_pane_t3

0x0002,

0xf557,	// (0x00051386) title_pane_t

0x9c53,	// (0x0004ba82) aid_levels_battery_ParamLimits

0x9c53,	// (0x0004ba82) aid_levels_battery

0x9c67,	// (0x0004ba96) battery_pane_g1_ParamLimits

0x9c67,	// (0x0004ba96) battery_pane_g1

0x9c7d,	// (0x0004baac) battery_pane_g2_ParamLimits

0x9c7d,	// (0x0004baac) battery_pane_g2

0x0001,

0xf7a6,	// (0x000515d5) battery_pane_g_ParamLimits

0xf7a6,	// (0x000515d5) battery_pane_g

0xaec1,	// (0x0004ccf0) uni_indicator_pane_g1

0xaed4,	// (0x0004cd03) uni_indicator_pane_g2

0xaee6,	// (0x0004cd15) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0005174b) uni_indicator_pane_g

0x75d1,	// (0x00049400) navi_icon_pane_ParamLimits

0x75d1,	// (0x00049400) navi_icon_pane

0x751b,	// (0x0004934a) navi_midp_pane

0x75ed,	// (0x0004941c) navi_navi_pane

0x75f7,	// (0x00049426) navi_text_pane_ParamLimits

0x75f7,	// (0x00049426) navi_text_pane

0x09ac,	// (0x000427db) status_small_wait_pane_g1

0x0c43,	// (0x00042a72) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00051746) status_small_wait_pane_g

0xabe8,	// (0x0004ca17) navi_navi_icon_text_pane

0xabf0,	// (0x0004ca1f) navi_navi_pane_g1_ParamLimits

0xabf0,	// (0x0004ca1f) navi_navi_pane_g1

0xac02,	// (0x0004ca31) navi_navi_pane_g2_ParamLimits

0xac02,	// (0x0004ca31) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00051714) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00051714) navi_navi_pane_g

0xac14,	// (0x0004ca43) navi_navi_tabs_pane

0xac1d,	// (0x0004ca4c) navi_navi_text_pane

0xabe8,	// (0x0004ca17) navi_navi_volume_pane

0xabc4,	// (0x0004c9f3) navi_text_pane_t1

0xabb8,	// (0x0004c9e7) navi_icon_pane_g1

0xab0b,	// (0x0004c93a) navi_navi_text_pane_t1

0x810f,	// (0x00049f3e) navi_navi_volume_pane_g1

0x8117,	// (0x00049f46) volume_small_pane

0xaa71,	// (0x0004c8a0) navi_navi_icon_text_pane_g1

0xaa79,	// (0x0004c8a8) navi_navi_icon_text_pane_t1

0x75ed,	// (0x0004941c) navi_tabs_2_long_pane

0x75ed,	// (0x0004941c) navi_tabs_2_pane

0x75ed,	// (0x0004941c) navi_tabs_3_long_pane

0x75ed,	// (0x0004941c) navi_tabs_3_pane

0x75ed,	// (0x0004941c) navi_tabs_4_pane

0x80ef,	// (0x00049f1e) tabs_2_active_pane_ParamLimits

0x80ef,	// (0x00049f1e) tabs_2_active_pane

0x80ff,	// (0x00049f2e) tabs_2_passive_pane_ParamLimits

0x80ff,	// (0x00049f2e) tabs_2_passive_pane

0x80bd,	// (0x00049eec) tabs_3_active_pane_ParamLimits

0x80bd,	// (0x00049eec) tabs_3_active_pane

0x80cd,	// (0x00049efc) tabs_3_passive_pane_ParamLimits

0x80cd,	// (0x00049efc) tabs_3_passive_pane

0x80de,	// (0x00049f0d) tabs_3_passive_pane_cp_ParamLimits

0x80de,	// (0x00049f0d) tabs_3_passive_pane_cp

0x8079,	// (0x00049ea8) tabs_4_active_pane_ParamLimits

0x8079,	// (0x00049ea8) tabs_4_active_pane

0x808a,	// (0x00049eb9) tabs_4_passive_pane_ParamLimits

0x808a,	// (0x00049eb9) tabs_4_passive_pane

0x809b,	// (0x00049eca) tabs_4_passive_pane_cp_ParamLimits

0x809b,	// (0x00049eca) tabs_4_passive_pane_cp

0x80ac,	// (0x00049edb) tabs_4_passive_pane_cp2_ParamLimits

0x80ac,	// (0x00049edb) tabs_4_passive_pane_cp2

0x8055,	// (0x00049e84) tabs_2_long_active_pane_ParamLimits

0x8055,	// (0x00049e84) tabs_2_long_active_pane

0x8067,	// (0x00049e96) tabs_2_long_passive_pane_ParamLimits

0x8067,	// (0x00049e96) tabs_2_long_passive_pane

0x8010,	// (0x00049e3f) tabs_3_long_active_pane_ParamLimits

0x8010,	// (0x00049e3f) tabs_3_long_active_pane

0x8029,	// (0x00049e58) tabs_3_long_passive_pane_ParamLimits

0x8029,	// (0x00049e58) tabs_3_long_passive_pane

0x803c,	// (0x00049e6b) tabs_3_long_passive_pane_cp_ParamLimits

0x803c,	// (0x00049e6b) tabs_3_long_passive_pane_cp

0x7fb6,	// (0x00049de5) volume_small_pane_g1

0x7fbf,	// (0x00049dee) volume_small_pane_g2

0x7fc8,	// (0x00049df7) volume_small_pane_g3

0x7fd1,	// (0x00049e00) volume_small_pane_g4

0x7fda,	// (0x00049e09) volume_small_pane_g5

0x7fe3,	// (0x00049e12) volume_small_pane_g6

0x7fec,	// (0x00049e1b) volume_small_pane_g7

0x7ff5,	// (0x00049e24) volume_small_pane_g8

0x7ffe,	// (0x00049e2d) volume_small_pane_g9

0x8007,	// (0x00049e36) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x000516e0) volume_small_pane_g

0x0a12,	// (0x00042841) bg_active_tab_pane_cp2_ParamLimits

0x0a12,	// (0x00042841) bg_active_tab_pane_cp2

0x67b9,	// (0x000485e8) tabs_3_active_pane_g1

0x67c1,	// (0x000485f0) tabs_3_active_pane_t1

0x0a12,	// (0x00042841) bg_passive_tab_pane_cp2_ParamLimits

0x0a12,	// (0x00042841) bg_passive_tab_pane_cp2

0x67b9,	// (0x000485e8) tabs_3_passive_pane_g1

0x67c1,	// (0x000485f0) tabs_3_passive_pane_t1

0x0a12,	// (0x00042841) bg_active_tab_pane_cp3_ParamLimits

0x0a12,	// (0x00042841) bg_active_tab_pane_cp3

0x67d3,	// (0x00048602) tabs_4_active_pane_g1

0x67db,	// (0x0004860a) tabs_4_active_pane_t1

0x0a12,	// (0x00042841) bg_passive_tab_pane_cp3_ParamLimits

0x0a12,	// (0x00042841) bg_passive_tab_pane_cp3

0x67d3,	// (0x00048602) tabs_4_1_passive_pane_g1

0x67db,	// (0x0004860a) tabs_4_1_passive_pane_t1

0x9845,	// (0x0004b674) list_highlight_pane_cp2

0xb129,	// (0x0004cf58) list_set_pane_ParamLimits

0xb129,	// (0x0004cf58) list_set_pane

0xb1cb,	// (0x0004cffa) main_pane_set_t1_ParamLimits

0xb1cb,	// (0x0004cffa) main_pane_set_t1

0xb1eb,	// (0x0004d01a) main_pane_set_t2_ParamLimits

0xb1eb,	// (0x0004d01a) main_pane_set_t2

0xb1ff,	// (0x0004d02e) main_pane_set_t3_ParamLimits

0xb1ff,	// (0x0004d02e) main_pane_set_t3

0xb211,	// (0x0004d040) main_pane_set_t4_ParamLimits

0xb211,	// (0x0004d040) main_pane_set_t4

0x0003,

0xf981,	// (0x000517b0) main_pane_set_t_ParamLimits

0xf981,	// (0x000517b0) main_pane_set_t

0xb223,	// (0x0004d052) setting_code_pane

0xb22f,	// (0x0004d05e) setting_slider_graphic_pane

0xb22f,	// (0x0004d05e) setting_slider_pane

0xb22f,	// (0x0004d05e) setting_text_pane

0xb22f,	// (0x0004d05e) setting_volume_pane

0x67ed,	// (0x0004861c) volume_set_pane

0x0a12,	// (0x00042841) bg_set_opt_pane_cp

0x67f5,	// (0x00048624) setting_slider_pane_t1

0x680e,	// (0x0004863d) setting_slider_pane_t2

0x6828,	// (0x00048657) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005138d) setting_slider_pane_t

0x6840,	// (0x0004866f) slider_set_pane

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp2

0x0a20,	// (0x0004284f) setting_slider_graphic_pane_g1

0x6856,	// (0x00048685) setting_slider_graphic_pane_t1

0x6866,	// (0x00048695) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00051394) setting_slider_graphic_pane_t

0x6876,	// (0x000486a5) slider_set_pane_cp

0x09b6,	// (0x000427e5) input_focus_pane_cp1

0xb0e8,	// (0x0004cf17) list_set_text_pane

0x09ac,	// (0x000427db) setting_text_pane_g1

0x09b6,	// (0x000427e5) input_focus_pane_cp2

0x09ac,	// (0x000427db) setting_code_pane_g1

0x0a29,	// (0x00042858) setting_code_pane_t1

0x54d7,	// (0x00047306) set_text_pane_t1_ParamLimits

0x54d7,	// (0x00047306) set_text_pane_t1

0x0e1c,	// (0x00042c4b) set_opt_bg_pane_g1

0x0e24,	// (0x00042c53) set_opt_bg_pane_g2

0xb0c2,	// (0x0004cef1) set_opt_bg_pane_g3

0x0e34,	// (0x00042c63) set_opt_bg_pane_g4

0x0e3c,	// (0x00042c6b) set_opt_bg_pane_g5

0x0e44,	// (0x00042c73) set_opt_bg_pane_g6

0xb0cc,	// (0x0004cefb) set_opt_bg_pane_g7

0xb0d4,	// (0x0004cf03) set_opt_bg_pane_g8

0xb0de,	// (0x0004cf0d) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0005179d) set_opt_bg_pane_g

0xb0b5,	// (0x0004cee4) slider_set_pane_g1

0x8184,	// (0x00049fb3) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0005178e) slider_set_pane_g

0x8120,	// (0x00049f4f) volume_set_pane_g1

0x8128,	// (0x00049f57) volume_set_pane_g2

0x8130,	// (0x00049f5f) volume_set_pane_g3

0x8138,	// (0x00049f67) volume_set_pane_g4

0x8140,	// (0x00049f6f) volume_set_pane_g5

0x8148,	// (0x00049f77) volume_set_pane_g6

0x8150,	// (0x00049f7f) volume_set_pane_g7

0x8158,	// (0x00049f87) volume_set_pane_g8

0x8160,	// (0x00049f8f) volume_set_pane_g9

0x8168,	// (0x00049f97) volume_set_pane_g10

0x0009,

0xf937,	// (0x00051766) volume_set_pane_g

0x687e,	// (0x000486ad) indicator_pane_ParamLimits

0x687e,	// (0x000486ad) indicator_pane

0x688a,	// (0x000486b9) main_idle_pane_g2_ParamLimits

0x688a,	// (0x000486b9) main_idle_pane_g2

0x68b2,	// (0x000486e1) main_pane_idle_g1_ParamLimits

0x68b2,	// (0x000486e1) main_pane_idle_g1

0x0a37,	// (0x00042866) popup_clock_digital_analogue_window_ParamLimits

0x0a37,	// (0x00042866) popup_clock_digital_analogue_window

0x68bf,	// (0x000486ee) soft_indicator_pane_ParamLimits

0x68bf,	// (0x000486ee) soft_indicator_pane

0x68cb,	// (0x000486fa) wallpaper_pane_ParamLimits

0x68cb,	// (0x000486fa) wallpaper_pane

0x09ac,	// (0x000427db) wallpaper_pane_g1

0x68d7,	// (0x00048706) indicator_pane_g1_ParamLimits

0x68d7,	// (0x00048706) indicator_pane_g1

0xb4b1,	// (0x0004d2e0) navi_navi_icon_text_pane_srt_g1

0x0a65,	// (0x00042894) soft_indicator_pane_t1

0x0a7f,	// (0x000428ae) aid_ps_area_pane

0x68e3,	// (0x00048712) aid_ps_clock_pane

0x0a90,	// (0x000428bf) aid_ps_indicator_pane

0x0a9c,	// (0x000428cb) indicator_ps_pane_ParamLimits

0x0a9c,	// (0x000428cb) indicator_ps_pane

0x0aab,	// (0x000428da) power_save_pane_g1_ParamLimits

0x0aab,	// (0x000428da) power_save_pane_g1

0x0ab7,	// (0x000428e6) power_save_pane_g2_ParamLimits

0x0ab7,	// (0x000428e6) power_save_pane_g2

0x6346,	// (0x00048175) aid_navinavi_width_pane

0x0a7f,	// (0x000428ae) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00051399) power_save_pane_g_ParamLimits

0xf56a,	// (0x00051399) power_save_pane_g

0x0ac5,	// (0x000428f4) power_save_pane_t1_ParamLimits

0x0ac5,	// (0x000428f4) power_save_pane_t1

0x68e3,	// (0x00048712) aid_ps_clock_pane_ParamLimits

0x0a90,	// (0x000428bf) aid_ps_indicator_pane_ParamLimits

0x0ad7,	// (0x00042906) power_save_pane_t4_ParamLimits

0x0ad7,	// (0x00042906) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005139e) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005139e) power_save_pane_t

0x0b01,	// (0x00042930) power_save_t3_ParamLimits

0x0b01,	// (0x00042930) power_save_t3

0x0aec,	// (0x0004291b) power_save_t2_ParamLimits

0x0aec,	// (0x0004291b) power_save_t2

0x0b16,	// (0x00042945) indicator_ps_pane_g1

0x68f1,	// (0x00048720) ai_gene_pane_ParamLimits

0x68f1,	// (0x00048720) ai_gene_pane

0x68fd,	// (0x0004872c) ai_links_pane_ParamLimits

0x68fd,	// (0x0004872c) ai_links_pane

0x6909,	// (0x00048738) indicator_pane_cp1_ParamLimits

0x6909,	// (0x00048738) indicator_pane_cp1

0x6915,	// (0x00048744) main_pane_idle_g1_cp_ParamLimits

0x6915,	// (0x00048744) main_pane_idle_g1_cp

0x6921,	// (0x00048750) popup_ai_links_title_window

0x692a,	// (0x00048759) soft_indicator_pane_cp1_ParamLimits

0x692a,	// (0x00048759) soft_indicator_pane_cp1

0xaeaf,	// (0x0004ccde) ai_links_pane_g1

0xaeb8,	// (0x0004cce7) grid_ai_links_pane

0xae92,	// (0x0004ccc1) ai_gene_pane_1

0xae9d,	// (0x0004cccc) ai_gene_pane_2

0xaea6,	// (0x0004ccd5) list_highlight_pane_cp4

0xae76,	// (0x0004cca5) cell_ai_link_pane_ParamLimits

0xae76,	// (0x0004cca5) cell_ai_link_pane

0xae6e,	// (0x0004cc9d) cell_ai_link_pane_g1

0x0c43,	// (0x00042a72) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00051741) cell_ai_link_pane_g

0x09b6,	// (0x000427e5) grid_highlight_cp2

0x09b6,	// (0x000427e5) bg_popup_sub_pane_cp1

0x0b2d,	// (0x0004295c) popup_ai_links_title_window_t1

0xadbe,	// (0x0004cbed) ai_gene_pane_1_g1_ParamLimits

0xadbe,	// (0x0004cbed) ai_gene_pane_1_g1

0xadca,	// (0x0004cbf9) ai_gene_pane_1_g2_ParamLimits

0xadca,	// (0x0004cbf9) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00051737) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00051737) ai_gene_pane_1_g

0xadd7,	// (0x0004cc06) ai_gene_pane_1_t1_ParamLimits

0xadd7,	// (0x0004cc06) ai_gene_pane_1_t1

0xae0b,	// (0x0004cc3a) grid_ai_soft_ind_pane

0xada9,	// (0x0004cbd8) ai_gene_pane_2_t1_ParamLimits

0xada9,	// (0x0004cbd8) ai_gene_pane_2_t1

0x6936,	// (0x00048765) main_pane_empty_t1_ParamLimits

0x6936,	// (0x00048765) main_pane_empty_t1

0x694e,	// (0x0004877d) main_pane_empty_t2_ParamLimits

0x694e,	// (0x0004877d) main_pane_empty_t2

0x6963,	// (0x00048792) main_pane_empty_t3_ParamLimits

0x6963,	// (0x00048792) main_pane_empty_t3

0x6975,	// (0x000487a4) main_pane_empty_t4_ParamLimits

0x6975,	// (0x000487a4) main_pane_empty_t4

0x6987,	// (0x000487b6) main_pane_empty_t5_ParamLimits

0x6987,	// (0x000487b6) main_pane_empty_t5

0x0004,

0xf574,	// (0x000513a3) main_pane_empty_t_ParamLimits

0xf574,	// (0x000513a3) main_pane_empty_t

0x0e6d,	// (0x00042c9c) bg_popup_window_pane_ParamLimits

0x0e6d,	// (0x00042c9c) bg_popup_window_pane

0xab19,	// (0x0004c948) find_popup_pane_cp2_ParamLimits

0xab19,	// (0x0004c948) find_popup_pane_cp2

0xab25,	// (0x0004c954) heading_pane_ParamLimits

0xab25,	// (0x0004c954) heading_pane

0x09b6,	// (0x000427e5) bg_popup_sub_pane

0xaa93,	// (0x0004c8c2) bg_popup_window_pane_g1_ParamLimits

0xaa93,	// (0x0004c8c2) bg_popup_window_pane_g1

0xaa9f,	// (0x0004c8ce) bg_popup_window_pane_g2_ParamLimits

0xaa9f,	// (0x0004c8ce) bg_popup_window_pane_g2

0xaaab,	// (0x0004c8da) bg_popup_window_pane_g3_ParamLimits

0xaaab,	// (0x0004c8da) bg_popup_window_pane_g3

0xaab7,	// (0x0004c8e6) bg_popup_window_pane_g4_ParamLimits

0xaab7,	// (0x0004c8e6) bg_popup_window_pane_g4

0xaac3,	// (0x0004c8f2) bg_popup_window_pane_g5_ParamLimits

0xaac3,	// (0x0004c8f2) bg_popup_window_pane_g5

0xaacf,	// (0x0004c8fe) bg_popup_window_pane_g6_ParamLimits

0xaacf,	// (0x0004c8fe) bg_popup_window_pane_g6

0xaadb,	// (0x0004c90a) bg_popup_window_pane_g7_ParamLimits

0xaadb,	// (0x0004c90a) bg_popup_window_pane_g7

0xaae7,	// (0x0004c916) bg_popup_window_pane_g8_ParamLimits

0xaae7,	// (0x0004c916) bg_popup_window_pane_g8

0xaaf3,	// (0x0004c922) bg_popup_window_pane_g9_ParamLimits

0xaaf3,	// (0x0004c922) bg_popup_window_pane_g9

0xaaff,	// (0x0004c92e) bg_popup_window_pane_g10_ParamLimits

0xaaff,	// (0x0004c92e) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x000516ff) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x000516ff) bg_popup_window_pane_g

0xaa28,	// (0x0004c857) bg_popup_heading_pane_ParamLimits

0xaa28,	// (0x0004c857) bg_popup_heading_pane

0x82a8,	// (0x0004a0d7) tabs_4_passive_pane_cp_srt_ParamLimits

0x82a8,	// (0x0004a0d7) tabs_4_passive_pane_cp_srt

0x82ba,	// (0x0004a0e9) tabs_4_passive_pane_srt_ParamLimits

0xaa3c,	// (0x0004c86b) heading_pane_g2

0x82ba,	// (0x0004a0e9) tabs_4_passive_pane_srt

0x9845,	// (0x0004b674) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9845,	// (0x0004b674) bg_passive_tab_pane_cp3_srt

0xaa44,	// (0x0004c873) heading_pane_t1_ParamLimits

0xaa44,	// (0x0004c873) heading_pane_t1

0xaa5b,	// (0x0004c88a) heading_pane_t2_ParamLimits

0xaa5b,	// (0x0004c88a) heading_pane_t2

0x0001,

0xf8cb,	// (0x000516fa) heading_pane_t_ParamLimits

0xf8cb,	// (0x000516fa) heading_pane_t

0xa565,	// (0x0004c394) bg_popup_heading_pane_g1

0xa614,	// (0x0004c443) bg_popup_heading_pane_g2

0xa61e,	// (0x0004c44d) bg_popup_heading_pane_g3

0xa628,	// (0x0004c457) bg_popup_heading_pane_g4

0xa632,	// (0x0004c461) bg_popup_heading_pane_g5

0xa63c,	// (0x0004c46b) bg_popup_heading_pane_g6

0xa644,	// (0x0004c473) bg_popup_heading_pane_g7

0xa64c,	// (0x0004c47b) bg_popup_heading_pane_g8

0xa656,	// (0x0004c485) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x000516b6) bg_popup_heading_pane_g

0x9d52,	// (0x0004bb81) bg_popup_sub_pane_g1

0x9d5a,	// (0x0004bb89) bg_popup_sub_pane_g2

0x9d62,	// (0x0004bb91) bg_popup_sub_pane_g3

0x9d6a,	// (0x0004bb99) bg_popup_sub_pane_g4

0x9d72,	// (0x0004bba1) bg_popup_sub_pane_g5

0x9d7a,	// (0x0004bba9) bg_popup_sub_pane_g6

0x9d82,	// (0x0004bbb1) bg_popup_sub_pane_g7

0x9d8a,	// (0x0004bbb9) bg_popup_sub_pane_g8

0x9d92,	// (0x0004bbc1) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00051690) bg_popup_sub_pane_g

0x0a04,	// (0x00042833) bg_popup_window_pane_cp5_ParamLimits

0x0a04,	// (0x00042833) bg_popup_window_pane_cp5

0x0b4a,	// (0x00042979) popup_note_window_g1_ParamLimits

0x0b4a,	// (0x00042979) popup_note_window_g1

0x0b56,	// (0x00042985) popup_note_window_t1_ParamLimits

0x0b56,	// (0x00042985) popup_note_window_t1

0x0b6c,	// (0x0004299b) popup_note_window_t2_ParamLimits

0x0b6c,	// (0x0004299b) popup_note_window_t2

0x0b82,	// (0x000429b1) popup_note_window_t3_ParamLimits

0x0b82,	// (0x000429b1) popup_note_window_t3

0x0b98,	// (0x000429c7) popup_note_window_t4_ParamLimits

0x0b98,	// (0x000429c7) popup_note_window_t4

0x0bc0,	// (0x000429ef) popup_note_window_t5_ParamLimits

0x0bc0,	// (0x000429ef) popup_note_window_t5

0x0004,

0xf57f,	// (0x000513ae) popup_note_window_t_ParamLimits

0xf57f,	// (0x000513ae) popup_note_window_t

0x0be4,	// (0x00042a13) bg_popup_window_pane_cp6_ParamLimits

0x0be4,	// (0x00042a13) bg_popup_window_pane_cp6

0xa4e1,	// (0x0004c310) popup_note_image_window_g1_ParamLimits

0xa4e1,	// (0x0004c310) popup_note_image_window_g1

0xa4ed,	// (0x0004c31c) popup_note_image_window_g2_ParamLimits

0xa4ed,	// (0x0004c31c) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00051684) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00051684) popup_note_image_window_g

0xa506,	// (0x0004c335) popup_note_image_window_t1_ParamLimits

0xa506,	// (0x0004c335) popup_note_image_window_t1

0xa51f,	// (0x0004c34e) popup_note_image_window_t2_ParamLimits

0xa51f,	// (0x0004c34e) popup_note_image_window_t2

0xa538,	// (0x0004c367) popup_note_image_window_t3_ParamLimits

0xa538,	// (0x0004c367) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00051689) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00051689) popup_note_image_window_t

0xa3aa,	// (0x0004c1d9) bg_popup_window_pane_cp7_ParamLimits

0xa3aa,	// (0x0004c1d9) bg_popup_window_pane_cp7

0xa3da,	// (0x0004c209) popup_note_wait_window_g1_ParamLimits

0xa3da,	// (0x0004c209) popup_note_wait_window_g1

0xa3e6,	// (0x0004c215) popup_note_wait_window_g2_ParamLimits

0xa3e6,	// (0x0004c215) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00051672) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00051672) popup_note_wait_window_g

0xa3fe,	// (0x0004c22d) popup_note_wait_window_t1_ParamLimits

0xa3fe,	// (0x0004c22d) popup_note_wait_window_t1

0xa425,	// (0x0004c254) popup_note_wait_window_t2_ParamLimits

0xa425,	// (0x0004c254) popup_note_wait_window_t2

0xa442,	// (0x0004c271) popup_note_wait_window_t3_ParamLimits

0xa442,	// (0x0004c271) popup_note_wait_window_t3

0xa455,	// (0x0004c284) popup_note_wait_window_t4_ParamLimits

0xa455,	// (0x0004c284) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00051679) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00051679) popup_note_wait_window_t

0xa47a,	// (0x0004c2a9) wait_bar_pane_ParamLimits

0xa47a,	// (0x0004c2a9) wait_bar_pane

0x09b6,	// (0x000427e5) wait_anim_pane

0x09b6,	// (0x000427e5) wait_border_pane

0x09ac,	// (0x000427db) wait_anim_pane_g1

0x09ac,	// (0x000427db) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0005152d) wait_anim_pane_g

0xa356,	// (0x0004c185) wait_border_pane_g1

0xa361,	// (0x0004c190) wait_border_pane_g2

0xa36a,	// (0x0004c199) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0005166b) wait_border_pane_g

0xa1c1,	// (0x0004bff0) bg_popup_window_pane_cp16_ParamLimits

0xa1c1,	// (0x0004bff0) bg_popup_window_pane_cp16

0xa2c1,	// (0x0004c0f0) indicator_popup_pane_cp4_ParamLimits

0xa2c1,	// (0x0004c0f0) indicator_popup_pane_cp4

0xa2d5,	// (0x0004c104) popup_query_data_window_t1_ParamLimits

0xa2d5,	// (0x0004c104) popup_query_data_window_t1

0xa2e7,	// (0x0004c116) popup_query_data_window_t2_ParamLimits

0xa2e7,	// (0x0004c116) popup_query_data_window_t2

0xa300,	// (0x0004c12f) popup_query_data_window_t3_ParamLimits

0xa300,	// (0x0004c12f) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00051664) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00051664) popup_query_data_window_t

0xa31a,	// (0x0004c149) query_popup_data_pane_ParamLimits

0xa31a,	// (0x0004c149) query_popup_data_pane

0xa32e,	// (0x0004c15d) query_popup_data_pane_cp1_ParamLimits

0xa32e,	// (0x0004c15d) query_popup_data_pane_cp1

0xa1c1,	// (0x0004bff0) bg_popup_window_pane_cp10_ParamLimits

0xa1c1,	// (0x0004bff0) bg_popup_window_pane_cp10

0xa1f3,	// (0x0004c022) indicator_popup_pane_ParamLimits

0xa1f3,	// (0x0004c022) indicator_popup_pane

0xa215,	// (0x0004c044) popup_query_code_window_t1_ParamLimits

0xa215,	// (0x0004c044) popup_query_code_window_t1

0xa22f,	// (0x0004c05e) popup_query_code_window_t2_ParamLimits

0xa22f,	// (0x0004c05e) popup_query_code_window_t2

0xa278,	// (0x0004c0a7) popup_query_code_window_t3_ParamLimits

0xa278,	// (0x0004c0a7) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0005165d) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0005165d) popup_query_code_window_t

0xa2a7,	// (0x0004c0d6) query_popup_pane_ParamLimits

0xa2a7,	// (0x0004c0d6) query_popup_pane

0x0be4,	// (0x00042a13) bg_popup_window_pane_cp15_ParamLimits

0x0be4,	// (0x00042a13) bg_popup_window_pane_cp15

0x699b,	// (0x000487ca) indicator_popup_pane_cp1_ParamLimits

0x699b,	// (0x000487ca) indicator_popup_pane_cp1

0x69ae,	// (0x000487dd) indicator_popup_pane_cp2_ParamLimits

0x69ae,	// (0x000487dd) indicator_popup_pane_cp2

0x69c1,	// (0x000487f0) popup_query_data_code_window_g1_ParamLimits

0x69c1,	// (0x000487f0) popup_query_data_code_window_g1

0x0c02,	// (0x00042a31) popup_query_data_code_window_t1_ParamLimits

0x0c02,	// (0x00042a31) popup_query_data_code_window_t1

0x0c14,	// (0x00042a43) popup_query_data_code_window_t2_ParamLimits

0x0c14,	// (0x00042a43) popup_query_data_code_window_t2

0x69d4,	// (0x00048803) popup_query_data_code_window_t3_ParamLimits

0x69d4,	// (0x00048803) popup_query_data_code_window_t3

0x69ea,	// (0x00048819) popup_query_data_code_window_t4_ParamLimits

0x69ea,	// (0x00048819) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000513b9) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000513b9) popup_query_data_code_window_t

0x758f,	// (0x000493be) list_single_midp_graphic_pane_g3

0x6a02,	// (0x00048831) query_popup_data_pane_cp2_ParamLimits

0x6a15,	// (0x00048844) query_popup_pane_cp2_ParamLimits

0x6a15,	// (0x00048844) query_popup_pane_cp2

0x09b6,	// (0x000427e5) bg_popup_window_pane_cp11

0xa1b9,	// (0x0004bfe8) heading_pane_cp5

0x0c70,	// (0x00042a9f) listscroll_popup_info_pane

0x09b6,	// (0x000427e5) input_focus_pane_cp3

0x0c26,	// (0x00042a55) query_popup_pane_t1

0x0c34,	// (0x00042a63) list_popup_info_pane_ParamLimits

0x0c34,	// (0x00042a63) list_popup_info_pane

0x0c43,	// (0x00042a72) listscroll_popup_info_pane_g1

0x0c4b,	// (0x00042a7a) scroll_pane_cp7

0x6a28,	// (0x00048857) popup_info_list_pane_t1_ParamLimits

0x6a28,	// (0x00048857) popup_info_list_pane_t1

0x6a42,	// (0x00048871) popup_info_list_pane_t2_ParamLimits

0x6a42,	// (0x00048871) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000513c2) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000513c2) popup_info_list_pane_t

0x09b6,	// (0x000427e5) bg_popup_window_pane_cp12

0xb4cb,	// (0x0004d2fa) find_popup_pane

0x0a12,	// (0x00042841) bg_popup_window_pane_cp3

0x0c55,	// (0x00042a84) heading_pane_cp3

0x0c61,	// (0x00042a90) listscroll_popup_graphic_pane

0x09b6,	// (0x000427e5) bg_popup_window_pane_cp4

0x6aac,	// (0x000488db) heading_pane_cp4

0x0c70,	// (0x00042a9f) listscroll_popup_colour_pane

0x6ab6,	// (0x000488e5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6ab6,	// (0x000488e5) cell_large_graphic_colour_none_popup_pane

0x6aca,	// (0x000488f9) grid_large_graphic_colour_popup_pane_ParamLimits

0x6aca,	// (0x000488f9) grid_large_graphic_colour_popup_pane

0x6af2,	// (0x00048921) listscroll_popup_colour_pane_g1_ParamLimits

0x6af2,	// (0x00048921) listscroll_popup_colour_pane_g1

0x6b09,	// (0x00048938) listscroll_popup_colour_pane_g2_ParamLimits

0x6b09,	// (0x00048938) listscroll_popup_colour_pane_g2

0x6b20,	// (0x0004894f) listscroll_popup_colour_pane_g3_ParamLimits

0x6b20,	// (0x0004894f) listscroll_popup_colour_pane_g3

0x6b30,	// (0x0004895f) listscroll_popup_colour_pane_g4_ParamLimits

0x6b30,	// (0x0004895f) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000513c7) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000513c7) listscroll_popup_colour_pane_g

0x0c78,	// (0x00042aa7) scroll_pane_cp6_ParamLimits

0x0c78,	// (0x00042aa7) scroll_pane_cp6

0x6b40,	// (0x0004896f) cell_large_graphic_colour_popup_pane_ParamLimits

0x6b40,	// (0x0004896f) cell_large_graphic_colour_popup_pane

0x6b5f,	// (0x0004898e) cell_large_graphic_colour_none_popup_pane_t1

0x09b6,	// (0x000427e5) grid_highlight_pane_cp5

0x0c8a,	// (0x00042ab9) cell_large_graphic_colour_popup_pane_g1

0x0c92,	// (0x00042ac1) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000513d0) cell_large_graphic_colour_popup_pane_g

0x0c9a,	// (0x00042ac9) cell_large_graphic_colour_popup_pane_g2_copy1

0x0ca3,	// (0x00042ad2) grid_highlight_pane_cp4

0x0cab,	// (0x00042ada) bg_popup_window_pane_cp8_ParamLimits

0x0cab,	// (0x00042ada) bg_popup_window_pane_cp8

0x6b6e,	// (0x0004899d) popup_snote_single_text_window_g1_ParamLimits

0x6b6e,	// (0x0004899d) popup_snote_single_text_window_g1

0x6b80,	// (0x000489af) popup_snote_single_text_window_t1_ParamLimits

0x6b80,	// (0x000489af) popup_snote_single_text_window_t1

0x6b93,	// (0x000489c2) popup_snote_single_text_window_t2_ParamLimits

0x6b93,	// (0x000489c2) popup_snote_single_text_window_t2

0x6ba6,	// (0x000489d5) popup_snote_single_text_window_t3_ParamLimits

0x6ba6,	// (0x000489d5) popup_snote_single_text_window_t3

0x6bdf,	// (0x00048a0e) popup_snote_single_text_window_t4_ParamLimits

0x6bdf,	// (0x00048a0e) popup_snote_single_text_window_t4

0x6c13,	// (0x00048a42) popup_snote_single_text_window_t5_ParamLimits

0x6c13,	// (0x00048a42) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000513d5) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000513d5) popup_snote_single_text_window_t

0x0cc6,	// (0x00042af5) bg_popup_window_pane_cp9_ParamLimits

0x0cc6,	// (0x00042af5) bg_popup_window_pane_cp9

0x6b6e,	// (0x0004899d) popup_snote_single_graphic_window_g1_ParamLimits

0x6b6e,	// (0x0004899d) popup_snote_single_graphic_window_g1

0x0cd4,	// (0x00042b03) popup_snote_single_graphic_window_g2_ParamLimits

0x0cd4,	// (0x00042b03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000513e0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000513e0) popup_snote_single_graphic_window_g

0x0ce0,	// (0x00042b0f) popup_snote_single_graphic_window_t1_ParamLimits

0x0ce0,	// (0x00042b0f) popup_snote_single_graphic_window_t1

0x0cf3,	// (0x00042b22) popup_snote_single_graphic_window_t2_ParamLimits

0x0cf3,	// (0x00042b22) popup_snote_single_graphic_window_t2

0x6c42,	// (0x00048a71) popup_snote_single_graphic_window_t3_ParamLimits

0x6c42,	// (0x00048a71) popup_snote_single_graphic_window_t3

0x6c7b,	// (0x00048aaa) popup_snote_single_graphic_window_t4_ParamLimits

0x6c7b,	// (0x00048aaa) popup_snote_single_graphic_window_t4

0x6caf,	// (0x00048ade) popup_snote_single_graphic_window_t5_ParamLimits

0x6caf,	// (0x00048ade) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000513e5) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000513e5) popup_snote_single_graphic_window_t

0xb40d,	// (0x0004d23c) grid_graphic_popup_pane_ParamLimits

0xb40d,	// (0x0004d23c) grid_graphic_popup_pane

0xb437,	// (0x0004d266) listscroll_popup_graphic_pane_g1_ParamLimits

0xb437,	// (0x0004d266) listscroll_popup_graphic_pane_g1

0xb44b,	// (0x0004d27a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb44b,	// (0x0004d27a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x000517da) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x000517da) listscroll_popup_graphic_pane_g

0xb45f,	// (0x0004d28e) scroll_pane_cp5

0xb3ac,	// (0x0004d1db) cell_graphic_popup_pane_ParamLimits

0xb3ac,	// (0x0004d1db) cell_graphic_popup_pane

0xb38d,	// (0x0004d1bc) cell_graphic_popup_pane_g1

0xb395,	// (0x0004d1c4) cell_graphic_popup_pane_g2

0x0c9a,	// (0x00042ac9) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x000517d3) cell_graphic_popup_pane_g

0xb39e,	// (0x0004d1cd) cell_graphic_popup_pane_t2

0x0ca3,	// (0x00042ad2) grid_highlight_pane_cp3

0x0d18,	// (0x00042b47) list_gen_pane_ParamLimits

0x0d18,	// (0x00042b47) list_gen_pane

0x0d40,	// (0x00042b6f) scroll_pane

0xb2e5,	// (0x0004d114) bg_list_pane_g1_ParamLimits

0xb2e5,	// (0x0004d114) bg_list_pane_g1

0xb302,	// (0x0004d131) bg_list_pane_g2_ParamLimits

0xb302,	// (0x0004d131) bg_list_pane_g2

0xb317,	// (0x0004d146) bg_list_pane_g3_ParamLimits

0xb317,	// (0x0004d146) bg_list_pane_g3

0xb32b,	// (0x0004d15a) bg_list_pane_g4_ParamLimits

0xb32b,	// (0x0004d15a) bg_list_pane_g4

0xb33f,	// (0x0004d16e) bg_list_pane_g5_ParamLimits

0xb33f,	// (0x0004d16e) bg_list_pane_g5

0x0004,

0xf999,	// (0x000517c8) bg_list_pane_g_ParamLimits

0xf999,	// (0x000517c8) bg_list_pane_g

0x5d5d,	// (0x00047b8c) list_double2_graphic_large_graphic_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double2_graphic_large_graphic_pane

0x5d5d,	// (0x00047b8c) list_double2_graphic_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double2_graphic_pane

0x5d5d,	// (0x00047b8c) list_double2_large_graphic_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double2_large_graphic_pane

0x5d5d,	// (0x00047b8c) list_double2_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double2_pane

0x5d5d,	// (0x00047b8c) list_double_graphic_heading_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_graphic_heading_pane

0x5d5d,	// (0x00047b8c) list_double_graphic_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_graphic_pane

0x5d5d,	// (0x00047b8c) list_double_heading_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_heading_pane

0x5d5d,	// (0x00047b8c) list_double_large_graphic_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_large_graphic_pane

0x5d5d,	// (0x00047b8c) list_double_number_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_number_pane

0x5d5d,	// (0x00047b8c) list_double_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_pane

0x5d5d,	// (0x00047b8c) list_double_time_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_double_time_pane

0x5d5d,	// (0x00047b8c) list_setting_number_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_setting_number_pane

0x5d5d,	// (0x00047b8c) list_setting_pane_ParamLimits

0x5d5d,	// (0x00047b8c) list_setting_pane

0x8207,	// (0x0004a036) list_single_2graphic_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_2graphic_pane

0x8207,	// (0x0004a036) list_single_graphic_heading_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_graphic_heading_pane

0x8207,	// (0x0004a036) list_single_graphic_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_graphic_pane

0x8207,	// (0x0004a036) list_single_heading_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_heading_pane

0x8262,	// (0x0004a091) list_single_large_graphic_pane_ParamLimits

0x8262,	// (0x0004a091) list_single_large_graphic_pane

0x8207,	// (0x0004a036) list_single_number_heading_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_number_heading_pane

0x8207,	// (0x0004a036) list_single_number_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_number_pane

0x8207,	// (0x0004a036) list_single_pane_ParamLimits

0x8207,	// (0x0004a036) list_single_pane

0x09b6,	// (0x000427e5) list_highlight_pane_cp1

0x6ce8,	// (0x00048b17) list_single_pane_g1_ParamLimits

0x6ce8,	// (0x00048b17) list_single_pane_g1

0x6cf4,	// (0x00048b23) list_single_pane_g2_ParamLimits

0x6cf4,	// (0x00048b23) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00051401) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00051401) list_single_pane_g

0x5d47,	// (0x00047b76) list_single_pane_t1_ParamLimits

0x5d47,	// (0x00047b76) list_single_pane_t1

0x6ce8,	// (0x00048b17) list_single_number_pane_g1_ParamLimits

0x6ce8,	// (0x00048b17) list_single_number_pane_g1

0x6cf4,	// (0x00048b23) list_single_number_pane_g2_ParamLimits

0x6cf4,	// (0x00048b23) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00051401) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00051401) list_single_number_pane_g

0x54fc,	// (0x0004732b) list_single_number_pane_t1_ParamLimits

0x54fc,	// (0x0004732b) list_single_number_pane_t1

0x5d05,	// (0x00047b34) list_single_number_pane_t2_ParamLimits

0x5d05,	// (0x00047b34) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00051789) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00051789) list_single_number_pane_t

0x54f0,	// (0x0004731f) list_single_graphic_pane_g1_ParamLimits

0x54f0,	// (0x0004731f) list_single_graphic_pane_g1

0x6ce8,	// (0x00048b17) list_single_graphic_pane_g2_ParamLimits

0x6ce8,	// (0x00048b17) list_single_graphic_pane_g2

0x6cf4,	// (0x00048b23) list_single_graphic_pane_g3_ParamLimits

0x6cf4,	// (0x00048b23) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000513f0) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000513f0) list_single_graphic_pane_g

0x54fc,	// (0x0004732b) list_single_graphic_pane_t1_ParamLimits

0x54fc,	// (0x0004732b) list_single_graphic_pane_t1

0x5512,	// (0x00047341) list_single_heading_pane_g1_ParamLimits

0x5512,	// (0x00047341) list_single_heading_pane_g1

0x6cf4,	// (0x00048b23) list_single_heading_pane_g2_ParamLimits

0x6cf4,	// (0x00048b23) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000513f7) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000513f7) list_single_heading_pane_g

0x5525,	// (0x00047354) list_single_heading_pane_t1_ParamLimits

0x5525,	// (0x00047354) list_single_heading_pane_t1

0x6d00,	// (0x00048b2f) list_single_heading_pane_t2_ParamLimits

0x6d00,	// (0x00048b2f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000513fc) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000513fc) list_single_heading_pane_t

0x6ce8,	// (0x00048b17) list_single_number_heading_pane_g1_ParamLimits

0x6ce8,	// (0x00048b17) list_single_number_heading_pane_g1

0x6cf4,	// (0x00048b23) list_single_number_heading_pane_g2_ParamLimits

0x6cf4,	// (0x00048b23) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00051401) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00051401) list_single_number_heading_pane_g

0x553b,	// (0x0004736a) list_single_number_heading_pane_t1_ParamLimits

0x553b,	// (0x0004736a) list_single_number_heading_pane_t1

0x5551,	// (0x00047380) list_single_number_heading_pane_t2_ParamLimits

0x5551,	// (0x00047380) list_single_number_heading_pane_t2

0x5563,	// (0x00047392) list_single_number_heading_pane_t3_ParamLimits

0x5563,	// (0x00047392) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00051406) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00051406) list_single_number_heading_pane_t

0x5575,	// (0x000473a4) list_single_graphic_heading_pane_g1_ParamLimits

0x5575,	// (0x000473a4) list_single_graphic_heading_pane_g1

0x6d12,	// (0x00048b41) list_single_graphic_heading_pane_g4_ParamLimits

0x6d12,	// (0x00048b41) list_single_graphic_heading_pane_g4

0x6cf4,	// (0x00048b23) list_single_graphic_heading_pane_g5_ParamLimits

0x6cf4,	// (0x00048b23) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005140d) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005140d) list_single_graphic_heading_pane_g

0x553b,	// (0x0004736a) list_single_graphic_heading_pane_t1_ParamLimits

0x553b,	// (0x0004736a) list_single_graphic_heading_pane_t1

0x558b,	// (0x000473ba) list_single_graphic_heading_pane_t2_ParamLimits

0x558b,	// (0x000473ba) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00051414) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00051414) list_single_graphic_heading_pane_t

0x6d23,	// (0x00048b52) list_single_large_graphic_pane_g1_ParamLimits

0x6d23,	// (0x00048b52) list_single_large_graphic_pane_g1

0x6d2f,	// (0x00048b5e) list_single_large_graphic_pane_g2_ParamLimits

0x6d2f,	// (0x00048b5e) list_single_large_graphic_pane_g2

0x6d3b,	// (0x00048b6a) list_single_large_graphic_pane_g3_ParamLimits

0x6d3b,	// (0x00048b6a) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00051419) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00051419) list_single_large_graphic_pane_g

0xa361,	// (0x0004c190) wait_border_pane_g2_copy1

0x6d47,	// (0x00048b76) list_single_large_graphic_pane_g4_cp2

0x55a3,	// (0x000473d2) list_single_large_graphic_pane_t1_ParamLimits

0x55a3,	// (0x000473d2) list_single_large_graphic_pane_t1

0x6d4f,	// (0x00048b7e) list_double_pane_g1_ParamLimits

0x6d4f,	// (0x00048b7e) list_double_pane_g1

0x6d5b,	// (0x00048b8a) list_double_pane_g2_ParamLimits

0x6d5b,	// (0x00048b8a) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00051420) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00051420) list_double_pane_g

0x55b9,	// (0x000473e8) list_double_pane_t1_ParamLimits

0x55b9,	// (0x000473e8) list_double_pane_t1

0x55cf,	// (0x000473fe) list_double_pane_t2_ParamLimits

0x55cf,	// (0x000473fe) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00051425) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00051425) list_double_pane_t

0x55e1,	// (0x00047410) list_double2_pane_g1_ParamLimits

0x55e1,	// (0x00047410) list_double2_pane_g1

0x55f2,	// (0x00047421) list_double2_pane_g2_ParamLimits

0x55f2,	// (0x00047421) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005142a) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005142a) list_double2_pane_g

0x55fe,	// (0x0004742d) list_double2_pane_t1_ParamLimits

0x55fe,	// (0x0004742d) list_double2_pane_t1

0x5614,	// (0x00047443) list_double2_pane_t2_ParamLimits

0x5614,	// (0x00047443) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005142f) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005142f) list_double2_pane_t

0x6d4f,	// (0x00048b7e) list_double_number_pane_g1_ParamLimits

0x6d4f,	// (0x00048b7e) list_double_number_pane_g1

0x6d5b,	// (0x00048b8a) list_double_number_pane_g2_ParamLimits

0x6d5b,	// (0x00048b8a) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00051420) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00051420) list_double_number_pane_g

0x5626,	// (0x00047455) list_double_number_pane_t1_ParamLimits

0x5626,	// (0x00047455) list_double_number_pane_t1

0x5638,	// (0x00047467) list_double_number_pane_t2_ParamLimits

0x5638,	// (0x00047467) list_double_number_pane_t2

0x564e,	// (0x0004747d) list_double_number_pane_t3_ParamLimits

0x564e,	// (0x0004747d) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00051434) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00051434) list_double_number_pane_t

0x5660,	// (0x0004748f) list_double_graphic_pane_g1_ParamLimits

0x5660,	// (0x0004748f) list_double_graphic_pane_g1

0x6d67,	// (0x00048b96) list_double_graphic_pane_g2_ParamLimits

0x6d67,	// (0x00048b96) list_double_graphic_pane_g2

0x6d76,	// (0x00048ba5) list_double_graphic_pane_g3_ParamLimits

0x6d76,	// (0x00048ba5) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005143b) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005143b) list_double_graphic_pane_g

0x5638,	// (0x00047467) list_double_graphic_pane_t1_ParamLimits

0x5638,	// (0x00047467) list_double_graphic_pane_t1

0x564e,	// (0x0004747d) list_double_graphic_pane_t2_ParamLimits

0x564e,	// (0x0004747d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00051444) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00051444) list_double_graphic_pane_t

0x5678,	// (0x000474a7) list_double2_graphic_pane_g1_ParamLimits

0x5678,	// (0x000474a7) list_double2_graphic_pane_g1

0xbca8,	// (0x0004dad7) list_double2_graphic_pane_g2_ParamLimits

0xbca8,	// (0x0004dad7) list_double2_graphic_pane_g2

0x6d82,	// (0x00048bb1) list_double2_graphic_pane_g3_ParamLimits

0x6d82,	// (0x00048bb1) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00051449) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00051449) list_double2_graphic_pane_g

0x5684,	// (0x000474b3) list_double2_graphic_pane_t1_ParamLimits

0x5684,	// (0x000474b3) list_double2_graphic_pane_t1

0x569a,	// (0x000474c9) list_double2_graphic_pane_t2_ParamLimits

0x569a,	// (0x000474c9) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00051450) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00051450) list_double2_graphic_pane_t

0x56ac,	// (0x000474db) list_double_large_graphic_pane_g1_ParamLimits

0x56ac,	// (0x000474db) list_double_large_graphic_pane_g1

0x56cb,	// (0x000474fa) list_double_large_graphic_pane_g2_ParamLimits

0x56cb,	// (0x000474fa) list_double_large_graphic_pane_g2

0x6d5b,	// (0x00048b8a) list_double_large_graphic_pane_g3_ParamLimits

0x6d5b,	// (0x00048b8a) list_double_large_graphic_pane_g3

0x56e1,	// (0x00047510) list_double_large_graphic_pane_g4_ParamLimits

0x56e1,	// (0x00047510) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00051455) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00051455) list_double_large_graphic_pane_g

0x56f3,	// (0x00047522) list_double_large_graphic_pane_t1_ParamLimits

0x56f3,	// (0x00047522) list_double_large_graphic_pane_t1

0x570c,	// (0x0004753b) list_double_large_graphic_pane_t2_ParamLimits

0x570c,	// (0x0004753b) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00051460) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00051460) list_double_large_graphic_pane_t

0x571e,	// (0x0004754d) list_double2_large_graphic_pane_g1_ParamLimits

0x571e,	// (0x0004754d) list_double2_large_graphic_pane_g1

0x572a,	// (0x00047559) list_double2_large_graphic_pane_g2_ParamLimits

0x572a,	// (0x00047559) list_double2_large_graphic_pane_g2

0x6d82,	// (0x00048bb1) list_double2_large_graphic_pane_g3_ParamLimits

0x6d82,	// (0x00048bb1) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00051465) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00051465) list_double2_large_graphic_pane_g

0x5684,	// (0x000474b3) list_double2_large_graphic_pane_t1_ParamLimits

0x5684,	// (0x000474b3) list_double2_large_graphic_pane_t1

0x569a,	// (0x000474c9) list_double2_large_graphic_pane_t2_ParamLimits

0x569a,	// (0x000474c9) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00051450) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00051450) list_double2_large_graphic_pane_t

0x6da3,	// (0x00048bd2) list_double_heading_pane_g1_ParamLimits

0x6da3,	// (0x00048bd2) list_double_heading_pane_g1

0x6db4,	// (0x00048be3) list_double_heading_pane_g2_ParamLimits

0x6db4,	// (0x00048be3) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0005146c) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0005146c) list_double_heading_pane_g

0x573b,	// (0x0004756a) list_double_heading_pane_t1_ParamLimits

0x573b,	// (0x0004756a) list_double_heading_pane_t1

0x569a,	// (0x000474c9) list_double_heading_pane_t2_ParamLimits

0x569a,	// (0x000474c9) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00051471) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00051471) list_double_heading_pane_t

0x5751,	// (0x00047580) list_double_graphic_heading_pane_g1_ParamLimits

0x5751,	// (0x00047580) list_double_graphic_heading_pane_g1

0x6da3,	// (0x00048bd2) list_double_graphic_heading_pane_g2_ParamLimits

0x6da3,	// (0x00048bd2) list_double_graphic_heading_pane_g2

0x6db4,	// (0x00048be3) list_double_graphic_heading_pane_g3_ParamLimits

0x6db4,	// (0x00048be3) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00051476) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00051476) list_double_graphic_heading_pane_g

0x573b,	// (0x0004756a) list_double_graphic_heading_pane_t1_ParamLimits

0x573b,	// (0x0004756a) list_double_graphic_heading_pane_t1

0x569a,	// (0x000474c9) list_double_graphic_heading_pane_t2_ParamLimits

0x569a,	// (0x000474c9) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00051471) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00051471) list_double_graphic_heading_pane_t

0x575d,	// (0x0004758c) list_double_time_pane_g1_ParamLimits

0x575d,	// (0x0004758c) list_double_time_pane_g1

0x576e,	// (0x0004759d) list_double_time_pane_g2_ParamLimits

0x576e,	// (0x0004759d) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x0005147d) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x0005147d) list_double_time_pane_g

0x577a,	// (0x000475a9) list_double_time_pane_t1_ParamLimits

0x577a,	// (0x000475a9) list_double_time_pane_t1

0x5790,	// (0x000475bf) list_double_time_pane_t2_ParamLimits

0x5790,	// (0x000475bf) list_double_time_pane_t2

0x57a2,	// (0x000475d1) list_double_time_pane_t3_ParamLimits

0x57a2,	// (0x000475d1) list_double_time_pane_t3

0x57b4,	// (0x000475e3) list_double_time_pane_t4_ParamLimits

0x57b4,	// (0x000475e3) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00051482) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00051482) list_double_time_pane_t

0x57c6,	// (0x000475f5) list_setting_pane_g1_ParamLimits

0x57c6,	// (0x000475f5) list_setting_pane_g1

0x55f2,	// (0x00047421) list_setting_pane_g2_ParamLimits

0x55f2,	// (0x00047421) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0005148b) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0005148b) list_setting_pane_g

0x57d2,	// (0x00047601) list_setting_pane_t1_ParamLimits

0x57d2,	// (0x00047601) list_setting_pane_t1

0x57ec,	// (0x0004761b) list_setting_pane_t2_ParamLimits

0x57ec,	// (0x0004761b) list_setting_pane_t2

0x0002,

0xf661,	// (0x00051490) list_setting_pane_t_ParamLimits

0xf661,	// (0x00051490) list_setting_pane_t

0x5829,	// (0x00047658) set_value_pane_cp_ParamLimits

0x5829,	// (0x00047658) set_value_pane_cp

0x5835,	// (0x00047664) list_setting_number_pane_g1_ParamLimits

0x5835,	// (0x00047664) list_setting_number_pane_g1

0x5841,	// (0x00047670) list_setting_number_pane_g2_ParamLimits

0x5841,	// (0x00047670) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00051497) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00051497) list_setting_number_pane_g

0x584d,	// (0x0004767c) list_setting_number_pane_t1_ParamLimits

0x584d,	// (0x0004767c) list_setting_number_pane_t1

0x5866,	// (0x00047695) list_setting_number_pane_t2_ParamLimits

0x5866,	// (0x00047695) list_setting_number_pane_t2

0x5880,	// (0x000476af) list_setting_number_pane_t3_ParamLimits

0x5880,	// (0x000476af) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0005149c) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0005149c) list_setting_number_pane_t

0x5829,	// (0x00047658) set_value_pane_ParamLimits

0x5829,	// (0x00047658) set_value_pane

0x0d74,	// (0x00042ba3) bg_set_opt_pane_ParamLimits

0x0d74,	// (0x00042ba3) bg_set_opt_pane

0x58c3,	// (0x000476f2) set_value_pane_t1

0x0d95,	// (0x00042bc4) slider_set_pane_cp3

0x6dc0,	// (0x00048bef) volume_small_pane_cp

0x0d9e,	// (0x00042bcd) list_form_gen_pane

0x0da7,	// (0x00042bd6) scroll_pane_cp8

0x58d9,	// (0x00047708) form_field_data_pane_ParamLimits

0x58d9,	// (0x00047708) form_field_data_pane

0x58fb,	// (0x0004772a) form_field_data_wide_pane_ParamLimits

0x58fb,	// (0x0004772a) form_field_data_wide_pane

0x591e,	// (0x0004774d) form_field_popup_pane_ParamLimits

0x591e,	// (0x0004774d) form_field_popup_pane

0x593e,	// (0x0004776d) form_field_popup_wide_pane_ParamLimits

0x593e,	// (0x0004776d) form_field_popup_wide_pane

0x595b,	// (0x0004778a) form_field_slider_pane_ParamLimits

0x595b,	// (0x0004778a) form_field_slider_pane

0x596e,	// (0x0004779d) form_field_slider_wide_pane_ParamLimits

0x596e,	// (0x0004779d) form_field_slider_wide_pane

0x0db8,	// (0x00042be7) data_form_pane

0x598b,	// (0x000477ba) form_field_data_pane_t1

0x0dc4,	// (0x00042bf3) input_focus_pane

0x59a3,	// (0x000477d2) data_form_wide_pane

0x59c0,	// (0x000477ef) form_field_data_wide_pane_t1

0x0cb8,	// (0x00042ae7) input_focus_pane_cp6

0x59e2,	// (0x00047811) form_field_popup_pane_t1

0x0dc4,	// (0x00042bf3) input_focus_pane_cp7

0x0df2,	// (0x00042c21) list_form_pane

0x5a02,	// (0x00047831) form_field_popup_wide_pane_t1

0x0dc4,	// (0x00042bf3) input_focus_pane_cp8

0x0dfe,	// (0x00042c2d) list_form_wide_pane

0x5a1f,	// (0x0004784e) form_field_slider_pane_t1_ParamLimits

0x5a1f,	// (0x0004784e) form_field_slider_pane_t1

0x5a35,	// (0x00047864) form_field_slider_pane_t2_ParamLimits

0x5a35,	// (0x00047864) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000514ac) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000514ac) form_field_slider_pane_t

0x0a04,	// (0x00042833) input_focus_pane_cp9_ParamLimits

0x0a04,	// (0x00042833) input_focus_pane_cp9

0x5a4a,	// (0x00047879) slider_cont_pane_ParamLimits

0x5a4a,	// (0x00047879) slider_cont_pane

0x0e0a,	// (0x00042c39) form_field_slider_wide_pane_t1_ParamLimits

0x0e0a,	// (0x00042c39) form_field_slider_wide_pane_t1

0x5a5e,	// (0x0004788d) form_field_slider_wide_pane_t2_ParamLimits

0x5a5e,	// (0x0004788d) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000514b1) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000514b1) form_field_slider_wide_pane_t

0x0a04,	// (0x00042833) input_focus_pane_cp10_ParamLimits

0x0a04,	// (0x00042833) input_focus_pane_cp10

0x5a70,	// (0x0004789f) slider_cont_pane_cp1_ParamLimits

0x5a70,	// (0x0004789f) slider_cont_pane_cp1

0x5a84,	// (0x000478b3) slider_form_pane_cp

0x0e1c,	// (0x00042c4b) input_focus_pane_g1

0x0e24,	// (0x00042c53) input_focus_pane_g2

0x0e2c,	// (0x00042c5b) input_focus_pane_g3

0x0e34,	// (0x00042c63) input_focus_pane_g4

0x0e3c,	// (0x00042c6b) input_focus_pane_g5

0x0e44,	// (0x00042c73) input_focus_pane_g6

0x0e4c,	// (0x00042c7b) input_focus_pane_g7

0x0e54,	// (0x00042c83) input_focus_pane_g8

0x0e5c,	// (0x00042c8b) input_focus_pane_g9

0x09ac,	// (0x000427db) input_focus_pane_g10

0x0009,

0xf687,	// (0x000514b6) input_focus_pane_g

0xa36a,	// (0x0004c199) wait_border_pane_g3_copy1

0x5a8c,	// (0x000478bb) data_form_pane_t1

0x09ac,	// (0x000427db) wait_anim_pane_g1_copy1

0x5d17,	// (0x00047b46) data_form_wide_pane_t1

0x5aa7,	// (0x000478d6) list_form_graphic_pane_cp_ParamLimits

0x5aa7,	// (0x000478d6) list_form_graphic_pane_cp

0xb259,	// (0x0004d088) slider_form_pane_g1

0xb262,	// (0x0004d091) slider_form_pane_g2

0x0006,

0xf98a,	// (0x000517b9) slider_form_pane_g

0x5aa7,	// (0x000478d6) list_form_graphic_pane_ParamLimits

0x5aa7,	// (0x000478d6) list_form_graphic_pane

0x5ac0,	// (0x000478ef) list_form_graphic_pane_g1

0x5ac8,	// (0x000478f7) list_form_graphic_pane_t1_ParamLimits

0x5ac8,	// (0x000478f7) list_form_graphic_pane_t1

0x0a12,	// (0x00042841) list_highlight_pane_cp5_ParamLimits

0x0a12,	// (0x00042841) list_highlight_pane_cp5

0x5add,	// (0x0004790c) find_pane_g1

0x0e64,	// (0x00042c93) input_find_pane

0x5ae6,	// (0x00047915) input_find_pane_g1_ParamLimits

0x5ae6,	// (0x00047915) input_find_pane_g1

0x5af2,	// (0x00047921) input_find_pane_t1_ParamLimits

0x5af2,	// (0x00047921) input_find_pane_t1

0x5b07,	// (0x00047936) input_find_pane_t2_ParamLimits

0x5b07,	// (0x00047936) input_find_pane_t2

0x0001,

0xf69c,	// (0x000514cb) input_find_pane_t_ParamLimits

0xf69c,	// (0x000514cb) input_find_pane_t

0x0e6d,	// (0x00042c9c) input_focus_pane_cp5_ParamLimits

0x0e6d,	// (0x00042c9c) input_focus_pane_cp5

0x0e7b,	// (0x00042caa) bg_popup_window_pane_cp2_ParamLimits

0x0e7b,	// (0x00042caa) bg_popup_window_pane_cp2

0x0e88,	// (0x00042cb7) listscroll_menu_pane_ParamLimits

0x0e88,	// (0x00042cb7) listscroll_menu_pane

0x6dd5,	// (0x00048c04) popup_submenu_window_ParamLimits

0x6dd5,	// (0x00048c04) popup_submenu_window

0x0e94,	// (0x00042cc3) find_popup_pane_g1

0x6dfd,	// (0x00048c2c) input_popup_find_pane_cp

0x0e6d,	// (0x00042c9c) input_focus_pane_cp4_ParamLimits

0x0e6d,	// (0x00042c9c) input_focus_pane_cp4

0x0e9c,	// (0x00042ccb) input_popup_find_pane_t1_ParamLimits

0x0e9c,	// (0x00042ccb) input_popup_find_pane_t1

0x09b6,	// (0x000427e5) bg_popup_sub_pane_cp

0x0eca,	// (0x00042cf9) listscroll_popup_sub_pane

0x0ed2,	// (0x00042d01) list_submenu_pane_ParamLimits

0x0ed2,	// (0x00042d01) list_submenu_pane

0x0ee3,	// (0x00042d12) scroll_pane_cp4

0x6e15,	// (0x00048c44) list_single_popup_submenu_pane_ParamLimits

0x6e15,	// (0x00048c44) list_single_popup_submenu_pane

0x2334,	// (0x00044163) list_single_popup_submenu_pane_g1

0x6e29,	// (0x00048c58) list_single_popup_submenu_pane_t1_ParamLimits

0x6e29,	// (0x00048c58) list_single_popup_submenu_pane_t1

0x0a12,	// (0x00042841) bg_active_tab_pane_cp1_ParamLimits

0x0a12,	// (0x00042841) bg_active_tab_pane_cp1

0x0eeb,	// (0x00042d1a) tabs_2_active_pane_g1

0x6e3e,	// (0x00048c6d) tabs_2_active_pane_t1

0x0a12,	// (0x00042841) bg_passive_tab_pane_cp1_ParamLimits

0x0a12,	// (0x00042841) bg_passive_tab_pane_cp1

0x0eeb,	// (0x00042d1a) tabs_2_passive_pane_g1

0x6e3e,	// (0x00048c6d) tabs_2_passive_pane_t1

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp4

0x6e50,	// (0x00048c7f) tabs_2_long_active_pane_t1

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp4

0x7ec3,	// (0x00049cf2) list_single_midp_graphic_pane_g4_ParamLimits

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp5

0x6e6f,	// (0x00048c9e) tabs_3_long_active_pane_t1

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp5

0x7ec3,	// (0x00049cf2) list_single_midp_graphic_pane_g4

0x0a12,	// (0x00042841) bg_popup_window_pane_cp13_ParamLimits

0x0a12,	// (0x00042841) bg_popup_window_pane_cp13

0x0ef3,	// (0x00042d22) listscroll_popup_fast_pane_ParamLimits

0x0ef3,	// (0x00042d22) listscroll_popup_fast_pane

0x0eff,	// (0x00042d2e) grid_popup_fast_pane_ParamLimits

0x0eff,	// (0x00042d2e) grid_popup_fast_pane

0x0f11,	// (0x00042d40) scroll_pane_cp9_ParamLimits

0x0f11,	// (0x00042d40) scroll_pane_cp9

0xcb42,	// (0x0004e971) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb42,	// (0x0004e971) list_single_graphic_hl_pane_t1_cp2

0x0f24,	// (0x00042d53) input_focus_pane_cp20_ParamLimits

0x0f24,	// (0x00042d53) input_focus_pane_cp20

0x0f32,	// (0x00042d61) query_popup_data_pane_t1_ParamLimits

0x0f32,	// (0x00042d61) query_popup_data_pane_t1

0x0f45,	// (0x00042d74) query_popup_data_pane_t2_ParamLimits

0x0f45,	// (0x00042d74) query_popup_data_pane_t2

0x0f8b,	// (0x00042dba) query_popup_data_pane_t3_ParamLimits

0x0f8b,	// (0x00042dba) query_popup_data_pane_t3

0x0fcc,	// (0x00042dfb) query_popup_data_pane_t4_ParamLimits

0x0fcc,	// (0x00042dfb) query_popup_data_pane_t4

0x1008,	// (0x00042e37) query_popup_data_pane_t5_ParamLimits

0x1008,	// (0x00042e37) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000514d0) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000514d0) query_popup_data_pane_t

0x0e1c,	// (0x00042c4b) bg_set_opt_pane_g1

0x0e24,	// (0x00042c53) bg_set_opt_pane_g2

0x0e2c,	// (0x00042c5b) bg_set_opt_pane_g3

0x0e34,	// (0x00042c63) bg_set_opt_pane_g4

0x0e3c,	// (0x00042c6b) bg_set_opt_pane_g5

0x0e44,	// (0x00042c73) bg_set_opt_pane_g6

0x0e4c,	// (0x00042c7b) bg_set_opt_pane_g7

0x0e54,	// (0x00042c83) bg_set_opt_pane_g8

0x0e5c,	// (0x00042c8b) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000514db) bg_set_opt_pane_g

0x7368,	// (0x00049197) control_top_pane_stacon_ParamLimits

0x7368,	// (0x00049197) control_top_pane_stacon

0x73bb,	// (0x000491ea) signal_pane_stacon_ParamLimits

0x73bb,	// (0x000491ea) signal_pane_stacon

0x49a7,	// (0x000467d6) stacon_top_pane_g1_ParamLimits

0x49a7,	// (0x000467d6) stacon_top_pane_g1

0x73e0,	// (0x0004920f) title_pane_stacon_ParamLimits

0x73e0,	// (0x0004920f) title_pane_stacon

0x740a,	// (0x00049239) uni_indicator_pane_stacon_ParamLimits

0x740a,	// (0x00049239) uni_indicator_pane_stacon

0x741f,	// (0x0004924e) battery_pane_stacon_ParamLimits

0x741f,	// (0x0004924e) battery_pane_stacon

0x7463,	// (0x00049292) control_bottom_pane_stacon_ParamLimits

0x7463,	// (0x00049292) control_bottom_pane_stacon

0x7486,	// (0x000492b5) navi_pane_stacon_ParamLimits

0x7486,	// (0x000492b5) navi_pane_stacon

0x4a92,	// (0x000468c1) stacon_bottom_pane_g1_ParamLimits

0x4a92,	// (0x000468c1) stacon_bottom_pane_g1

0x6e9b,	// (0x00048cca) aid_levels_signal_lsc_ParamLimits

0x6e9b,	// (0x00048cca) aid_levels_signal_lsc

0x6eb1,	// (0x00048ce0) signal_pane_stacon_g1_ParamLimits

0x6eb1,	// (0x00048ce0) signal_pane_stacon_g1

0x6ec5,	// (0x00048cf4) signal_pane_stacon_g2_ParamLimits

0x6ec5,	// (0x00048cf4) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000514ee) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000514ee) signal_pane_stacon_g

0x6efa,	// (0x00048d29) title_pane_stacon_t1_ParamLimits

0x6efa,	// (0x00048d29) title_pane_stacon_t1

0x1060,	// (0x00042e8f) uni_indicator_pane_stacon_g1

0x106a,	// (0x00042e99) uni_indicator_pane_stacon_g2

0x104c,	// (0x00042e7b) uni_indicator_pane_stacon_g3

0x1056,	// (0x00042e85) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000514fa) uni_indicator_pane_stacon_g

0x6f1f,	// (0x00048d4e) control_top_pane_stacon_g1

0x6f27,	// (0x00048d56) control_top_pane_stacon_t1_ParamLimits

0x6f27,	// (0x00048d56) control_top_pane_stacon_t1

0x6f5e,	// (0x00048d8d) aid_levels_battery_lsc_ParamLimits

0x6f5e,	// (0x00048d8d) aid_levels_battery_lsc

0x6f75,	// (0x00048da4) battery_pane_stacon_g1_ParamLimits

0x6f75,	// (0x00048da4) battery_pane_stacon_g1

0x6f88,	// (0x00048db7) battery_pane_stacon_g2_ParamLimits

0x6f88,	// (0x00048db7) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00051503) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00051503) battery_pane_stacon_g

0x6fc6,	// (0x00048df5) navi_icon_pane_stacon

0x6fda,	// (0x00048e09) navi_navi_pane_stacon

0x6fc6,	// (0x00048df5) navi_text_pane_stacon

0x6f1f,	// (0x00048d4e) control_bottom_pane_stacon_g1

0x6fee,	// (0x00048e1d) control_bottom_pane_stacon_t1_ParamLimits

0x6fee,	// (0x00048e1d) control_bottom_pane_stacon_t1

0x7025,	// (0x00048e54) grid_app_pane_ParamLimits

0x7025,	// (0x00048e54) grid_app_pane

0x7049,	// (0x00048e78) scroll_pane_cp15_ParamLimits

0x7049,	// (0x00048e78) scroll_pane_cp15

0x705c,	// (0x00048e8b) cell_app_pane_ParamLimits

0x705c,	// (0x00048e8b) cell_app_pane

0x7084,	// (0x00048eb3) cell_app_pane_g1_ParamLimits

0x7084,	// (0x00048eb3) cell_app_pane_g1

0x108e,	// (0x00042ebd) cell_app_pane_g2_ParamLimits

0x108e,	// (0x00042ebd) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00051508) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00051508) cell_app_pane_g

0x70a8,	// (0x00048ed7) cell_app_pane_t1_ParamLimits

0x70a8,	// (0x00048ed7) cell_app_pane_t1

0x109a,	// (0x00042ec9) grid_highlight_pane_ParamLimits

0x109a,	// (0x00042ec9) grid_highlight_pane

0x0e1c,	// (0x00042c4b) cell_highlight_pane_g1

0x0e24,	// (0x00042c53) cell_highlight_pane_g2

0x0e2c,	// (0x00042c5b) cell_highlight_pane_g3

0x0e34,	// (0x00042c63) cell_highlight_pane_g4

0x0e3c,	// (0x00042c6b) cell_highlight_pane_g5

0x0e44,	// (0x00042c73) cell_highlight_pane_g6

0x0e4c,	// (0x00042c7b) cell_highlight_pane_g7

0x0e54,	// (0x00042c83) cell_highlight_pane_g8

0x0e5c,	// (0x00042c8b) cell_highlight_pane_g9

0x09ac,	// (0x000427db) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x000514b6) cell_highlight_pane_g

0x10ab,	// (0x00042eda) bg_scroll_pane

0x70d2,	// (0x00048f01) scroll_handle_pane

0x10f2,	// (0x00042f21) scroll_bg_pane_g1

0x1107,	// (0x00042f36) scroll_bg_pane_g2

0x111f,	// (0x00042f4e) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0005150d) scroll_bg_pane_g

0x70fb,	// (0x00048f2a) scroll_handle_focus_pane_ParamLimits

0x70fb,	// (0x00048f2a) scroll_handle_focus_pane

0x10f2,	// (0x00042f21) scroll_handle_pane_g1

0x1134,	// (0x00042f63) scroll_handle_pane_g2

0x111f,	// (0x00042f4e) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00051514) scroll_handle_pane_g

0x0e6d,	// (0x00042c9c) bg_popup_sub_pane_cp21_ParamLimits

0x0e6d,	// (0x00042c9c) bg_popup_sub_pane_cp21

0x7108,	// (0x00048f37) popup_fep_japan_predictive_window_t1_ParamLimits

0x7108,	// (0x00048f37) popup_fep_japan_predictive_window_t1

0x7122,	// (0x00048f51) popup_fep_japan_predictive_window_t2_ParamLimits

0x7122,	// (0x00048f51) popup_fep_japan_predictive_window_t2

0x7155,	// (0x00048f84) popup_fep_japan_predictive_window_t3_ParamLimits

0x7155,	// (0x00048f84) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0005151b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0005151b) popup_fep_japan_predictive_window_t

0x09b6,	// (0x000427e5) bg_popup_sub_pane_cp23

0x3471,	// (0x000452a0) listscroll_japin_cand_pane

0x1148,	// (0x00042f77) popup_fep_japan_candidate_window_t1

0x1156,	// (0x00042f85) candidate_pane_ParamLimits

0x1156,	// (0x00042f85) candidate_pane

0x718c,	// (0x00048fbb) scroll_pane_cp30

0x1168,	// (0x00042f97) list_single_popup_jap_candidate_pane_ParamLimits

0x1168,	// (0x00042f97) list_single_popup_jap_candidate_pane

0x09b6,	// (0x000427e5) list_highlight_pane_cp30

0x117d,	// (0x00042fac) list_single_popup_jap_candidate_pane_t1

0x118c,	// (0x00042fbb) level_1_signal

0x1199,	// (0x00042fc8) level_2_signal

0x11a6,	// (0x00042fd5) level_3_signal

0x11b3,	// (0x00042fe2) level_4_signal

0x11c0,	// (0x00042fef) level_5_signal

0x11cd,	// (0x00042ffc) level_6_signal

0x11da,	// (0x00043009) level_7_signal

0x118c,	// (0x00042fbb) level_1_battery

0x1199,	// (0x00042fc8) level_2_battery

0x11a6,	// (0x00042fd5) level_3_battery

0x11b3,	// (0x00042fe2) level_4_battery

0x11c0,	// (0x00042fef) level_5_battery

0x11cd,	// (0x00042ffc) level_6_battery

0x11da,	// (0x00043009) level_7_battery

0x11ff,	// (0x0004302e) list_menu_pane_ParamLimits

0x11ff,	// (0x0004302e) list_menu_pane

0x1215,	// (0x00043044) scroll_pane_cp25_ParamLimits

0x1215,	// (0x00043044) scroll_pane_cp25

0x122e,	// (0x0004305d) list_double2_graphic_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double2_graphic_pane_cp2

0x122e,	// (0x0004305d) list_double2_large_graphic_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double2_large_graphic_pane_cp2

0x122e,	// (0x0004305d) list_double2_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double2_pane_cp2

0x122e,	// (0x0004305d) list_double_graphic_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double_graphic_pane_cp2

0x122e,	// (0x0004305d) list_double_large_graphic_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double_large_graphic_pane_cp2

0x122e,	// (0x0004305d) list_double_number_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double_number_pane_cp2

0x122e,	// (0x0004305d) list_double_pane_cp2_ParamLimits

0x122e,	// (0x0004305d) list_double_pane_cp2

0x71c7,	// (0x00048ff6) list_single_2graphic_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_2graphic_pane_cp2

0x71c7,	// (0x00048ff6) list_single_graphic_heading_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_graphic_heading_pane_cp2

0x71c7,	// (0x00048ff6) list_single_graphic_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_graphic_pane_cp2

0x71c7,	// (0x00048ff6) list_single_heading_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_heading_pane_cp2

0x123e,	// (0x0004306d) list_single_large_graphic_pane_cp2_ParamLimits

0x123e,	// (0x0004306d) list_single_large_graphic_pane_cp2

0x71c7,	// (0x00048ff6) list_single_number_heading_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_number_heading_pane_cp2

0x71c7,	// (0x00048ff6) list_single_number_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_number_pane_cp2

0x71c7,	// (0x00048ff6) list_single_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_pane_cp2

0x1258,	// (0x00043087) bg_popup_sub_pane_cp22

0x729f,	// (0x000490ce) popup_side_volume_key_window_g1

0x72c3,	// (0x000490f2) popup_side_volume_key_window_t1

0x72df,	// (0x0004910e) volume_small_pane_cp1

0x0a04,	// (0x00042833) bg_popup_sub_pane_cp24_ParamLimits

0x0a04,	// (0x00042833) bg_popup_sub_pane_cp24

0x126e,	// (0x0004309d) fep_china_uni_candidate_pane_ParamLimits

0x126e,	// (0x0004309d) fep_china_uni_candidate_pane

0x1282,	// (0x000430b1) fep_china_uni_entry_pane

0x1292,	// (0x000430c1) popup_fep_china_uni_window_g1

0x72e7,	// (0x00049116) fep_china_uni_entry_pane_g1

0x72ef,	// (0x0004911e) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0005154c) fep_china_uni_entry_pane_g

0x4849,	// (0x00046678) fep_entry_item_pane

0x4853,	// (0x00046682) fep_candidate_item_pane

0x72f7,	// (0x00049126) fep_china_uni_candidate_pane_g1

0x485b,	// (0x0004668a) fep_china_uni_candidate_pane_g2

0x4863,	// (0x00046692) fep_china_uni_candidate_pane_g3

0x72ff,	// (0x0004912e) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00051551) fep_china_uni_candidate_pane_g

0x09ac,	// (0x000427db) fep_entry_item_pane_g1

0x486b,	// (0x0004669a) fep_entry_item_pane_t1_ParamLimits

0x486b,	// (0x0004669a) fep_entry_item_pane_t1

0x4881,	// (0x000466b0) fep_candidate_item_pane_t1_ParamLimits

0x4881,	// (0x000466b0) fep_candidate_item_pane_t1

0x4896,	// (0x000466c5) fep_candidate_item_pane_t2_ParamLimits

0x4896,	// (0x000466c5) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0005155a) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0005155a) fep_candidate_item_pane_t

0x0a12,	// (0x00042841) list_highlight_pane_cp31_ParamLimits

0x0a12,	// (0x00042841) list_highlight_pane_cp31

0x48a8,	// (0x000466d7) level_1_signal_lsc

0x48b1,	// (0x000466e0) level_2_signal_lsc

0x48ba,	// (0x000466e9) level_3_signal_lsc

0x48c3,	// (0x000466f2) level_4_signal_lsc

0x48cc,	// (0x000466fb) level_5_signal_lsc

0x48d5,	// (0x00046704) level_6_signal_lsc

0x48de,	// (0x0004670d) level_7_signal_lsc

0x48de,	// (0x0004670d) level_1_battery_lsc

0x48e7,	// (0x00046716) level_2_battery_lsc

0x48f0,	// (0x0004671f) level_3_battery_lsc

0x48f9,	// (0x00046728) level_4_battery_lsc

0x4902,	// (0x00046731) level_5_battery_lsc

0x490b,	// (0x0004673a) level_6_battery_lsc

0x48a8,	// (0x000466d7) level_7_battery_lsc

0x4914,	// (0x00046743) scroll_handle_focus_pane_g1

0x491d,	// (0x0004674c) scroll_handle_focus_pane_g2

0x4926,	// (0x00046755) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0005155f) scroll_handle_focus_pane_g

0x5b1c,	// (0x0004794b) list_single_2graphic_pane_g1_ParamLimits

0x5b1c,	// (0x0004794b) list_single_2graphic_pane_g1

0x6d12,	// (0x00048b41) list_single_2graphic_pane_g2_ParamLimits

0x6d12,	// (0x00048b41) list_single_2graphic_pane_g2

0x6cf4,	// (0x00048b23) list_single_2graphic_pane_g3_ParamLimits

0x6cf4,	// (0x00048b23) list_single_2graphic_pane_g3

0x5b28,	// (0x00047957) list_single_2graphic_pane_g4_ParamLimits

0x5b28,	// (0x00047957) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00051566) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00051566) list_single_2graphic_pane_g

0x5b34,	// (0x00047963) list_single_2graphic_pane_t1_ParamLimits

0x5b34,	// (0x00047963) list_single_2graphic_pane_t1

0x5b62,	// (0x00047991) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b62,	// (0x00047991) list_double2_graphic_large_graphic_pane_g1

0x572a,	// (0x00047559) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x572a,	// (0x00047559) list_double2_graphic_large_graphic_pane_g2

0x6d82,	// (0x00048bb1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6d82,	// (0x00048bb1) list_double2_graphic_large_graphic_pane_g3

0x7307,	// (0x00049136) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7307,	// (0x00049136) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0005156f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0005156f) list_double2_graphic_large_graphic_pane_g

0x5b72,	// (0x000479a1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5b72,	// (0x000479a1) list_double2_graphic_large_graphic_pane_t1

0x5b88,	// (0x000479b7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5b88,	// (0x000479b7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00051578) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00051578) list_double2_graphic_large_graphic_pane_t

0x74e5,	// (0x00049314) popup_fast_swap_window_ParamLimits

0x74e5,	// (0x00049314) popup_fast_swap_window

0x7501,	// (0x00049330) popup_side_volume_key_window

0x751b,	// (0x0004934a) stacon_top_pane

0x7525,	// (0x00049354) status_pane_ParamLimits

0x7525,	// (0x00049354) status_pane

0x7533,	// (0x00049362) status_small_pane

0x09b6,	// (0x000427e5) control_pane

0x09b6,	// (0x000427e5) stacon_bottom_pane

0x0da7,	// (0x00042bd6) scroll_pane_cp121

0x0d9e,	// (0x00042bcd) set_content_pane

0x7313,	// (0x00049142) bg_active_tab_pane_g1_cp1

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp1

0x7325,	// (0x00049154) bg_active_tab_pane_g3_cp1

0x7313,	// (0x00049142) bg_passive_tab_pane_g1_cp1

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp1

0x7325,	// (0x00049154) bg_passive_tab_pane_g3_cp1

0x732e,	// (0x0004915d) bg_active_tab_pane_g1_cp2

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp2

0x7337,	// (0x00049166) bg_active_tab_pane_g3_cp2

0x732e,	// (0x0004915d) bg_passive_tab_pane_g1_cp2

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp2

0x7337,	// (0x00049166) bg_passive_tab_pane_g3_cp2

0x7340,	// (0x0004916f) bg_active_tab_pane_g1_cp3

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp3

0x7349,	// (0x00049178) bg_active_tab_pane_g3_cp3

0x7340,	// (0x0004916f) bg_passive_tab_pane_g1_cp3

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp3

0x7349,	// (0x00049178) bg_passive_tab_pane_g3_cp3

0x7352,	// (0x00049181) bg_active_tab_pane_g1_cp4

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp4

0x735d,	// (0x0004918c) bg_active_tab_pane_g3_cp4

0x7352,	// (0x00049181) bg_passive_tab_pane_g1_cp4

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp4

0x735d,	// (0x0004918c) bg_passive_tab_pane_g3_cp4

0x74a9,	// (0x000492d8) bg_active_tab_pane_g1_cp5

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp5

0x74b2,	// (0x000492e1) bg_active_tab_pane_g3_cp5

0x74a9,	// (0x000492d8) bg_passive_tab_pane_g1_cp5

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp5

0x74b2,	// (0x000492e1) bg_passive_tab_pane_g3_cp5

0x74bb,	// (0x000492ea) list_set_graphic_pane_ParamLimits

0x74bb,	// (0x000492ea) list_set_graphic_pane

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp4

0x4aae,	// (0x000468dd) list_set_graphic_pane_g1_ParamLimits

0x4aae,	// (0x000468dd) list_set_graphic_pane_g1

0x4aba,	// (0x000468e9) list_set_graphic_pane_g2_ParamLimits

0x4aba,	// (0x000468e9) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0005157d) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0005157d) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00051915) volume_small_pane_cp_g

0x74d9,	// (0x00049308) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x74d9,	// (0x00049308) list_double2_large_graphic_pane_g1_cp2

0x4adc,	// (0x0004690b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4adc,	// (0x0004690b) list_double2_large_graphic_pane_g2_cp2

0x4aed,	// (0x0004691c) list_double2_large_graphic_pane_g3_cp2

0x4af5,	// (0x00046924) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4af5,	// (0x00046924) list_double2_large_graphic_pane_t1_cp2

0x4b0b,	// (0x0004693a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4b0b,	// (0x0004693a) list_double2_large_graphic_pane_t2_cp2

0xae1b,	// (0x0004cc4a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae1b,	// (0x0004cc4a) list_double_large_graphic_pane_g1_cp2

0xae2c,	// (0x0004cc5b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae2c,	// (0x0004cc5b) list_double_large_graphic_pane_g2_cp2

0x7640,	// (0x0004946f) list_double_large_graphic_pane_g3_cp2

0xae3d,	// (0x0004cc6c) list_double_large_graphic_pane_g4_cp

0xae45,	// (0x0004cc74) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae45,	// (0x0004cc74) list_double_large_graphic_pane_t1_cp2

0xae5c,	// (0x0004cc8b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae5c,	// (0x0004cc8b) list_double_large_graphic_pane_t2_cp2

0x753e,	// (0x0004936d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x753e,	// (0x0004936d) list_double2_graphic_pane_g1_cp2

0x754c,	// (0x0004937b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x754c,	// (0x0004937b) list_double2_graphic_pane_g2_cp2

0x755d,	// (0x0004938c) list_double2_graphic_pane_g3_cp2

0x7567,	// (0x00049396) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7567,	// (0x00049396) list_double2_graphic_pane_t1_cp2

0x757d,	// (0x000493ac) list_double2_graphic_pane_t2_cp2_ParamLimits

0x757d,	// (0x000493ac) list_double2_graphic_pane_t2_cp2

0x12ae,	// (0x000430dd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x12ae,	// (0x000430dd) list_single_number_heading_pane_g1_cp2

0x758f,	// (0x000493be) list_single_number_heading_pane_g2_cp2

0x7597,	// (0x000493c6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7597,	// (0x000493c6) list_single_number_heading_pane_t1_cp2

0x75ad,	// (0x000493dc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x75ad,	// (0x000493dc) list_single_number_heading_pane_t2_cp2

0x75bf,	// (0x000493ee) list_single_number_heading_pane_t3_cp2_ParamLimits

0x75bf,	// (0x000493ee) list_single_number_heading_pane_t3_cp2

0x12ae,	// (0x000430dd) list_single_heading_pane_g1_cp2_ParamLimits

0x12ae,	// (0x000430dd) list_single_heading_pane_g1_cp2

0x758f,	// (0x000493be) list_single_heading_pane_g2_cp2

0x7597,	// (0x000493c6) list_single_heading_pane_t1_cp2_ParamLimits

0x7597,	// (0x000493c6) list_single_heading_pane_t1_cp2

0xac25,	// (0x0004ca54) list_single_heading_pane_t2_cp2_ParamLimits

0xac25,	// (0x0004ca54) list_single_heading_pane_t2_cp2

0xab6d,	// (0x0004c99c) list_double_graphic_pane_g1_cp2_ParamLimits

0xab6d,	// (0x0004c99c) list_double_graphic_pane_g1_cp2

0xab79,	// (0x0004c9a8) list_double_graphic_pane_g2_cp2_ParamLimits

0xab79,	// (0x0004c9a8) list_double_graphic_pane_g2_cp2

0xab88,	// (0x0004c9b7) list_double_graphic_pane_g3_cp2

0xab90,	// (0x0004c9bf) list_double_graphic_pane_t1_cp2_ParamLimits

0xab90,	// (0x0004c9bf) list_double_graphic_pane_t1_cp2

0xaba6,	// (0x0004c9d5) list_double_graphic_pane_t2_cp2_ParamLimits

0xaba6,	// (0x0004c9d5) list_double_graphic_pane_t2_cp2

0x7634,	// (0x00049463) list_double_number_pane_g1_cp2_ParamLimits

0x7634,	// (0x00049463) list_double_number_pane_g1_cp2

0x7640,	// (0x0004946f) list_double_number_pane_g2_cp2

0xab31,	// (0x0004c960) list_double_number_pane_t1_cp2_ParamLimits

0xab31,	// (0x0004c960) list_double_number_pane_t1_cp2

0xab45,	// (0x0004c974) list_double_number_pane_t2_cp2_ParamLimits

0xab45,	// (0x0004c974) list_double_number_pane_t2_cp2

0xab5b,	// (0x0004c98a) list_double_number_pane_t3_cp2_ParamLimits

0xab5b,	// (0x0004c98a) list_double_number_pane_t3_cp2

0xaa1a,	// (0x0004c849) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa1a,	// (0x0004c849) list_single_graphic_pane_g1_cp2

0x9438,	// (0x0004b267) list_single_graphic_pane_g2_cp2_ParamLimits

0x9438,	// (0x0004b267) list_single_graphic_pane_g2_cp2

0x9444,	// (0x0004b273) list_single_graphic_pane_g3_cp2

0xa9f0,	// (0x0004c81f) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9f0,	// (0x0004c81f) list_single_graphic_pane_t1_cp2

0x9438,	// (0x0004b267) list_single_number_pane_g1_cp2_ParamLimits

0x9438,	// (0x0004b267) list_single_number_pane_g1_cp2

0x9444,	// (0x0004b273) list_single_number_pane_g2_cp2

0xa9f0,	// (0x0004c81f) list_single_number_pane_t1_cp2_ParamLimits

0xa9f0,	// (0x0004c81f) list_single_number_pane_t1_cp2

0xaa06,	// (0x0004c835) list_single_number_pane_t2_cp2_ParamLimits

0xaa06,	// (0x0004c835) list_single_number_pane_t2_cp2

0x4adc,	// (0x0004690b) list_double2_pane_g1_cp2_ParamLimits

0x4adc,	// (0x0004690b) list_double2_pane_g1_cp2

0x4aed,	// (0x0004691c) list_double2_pane_g2_cp2

0x760c,	// (0x0004943b) list_double2_pane_t1_cp2_ParamLimits

0x760c,	// (0x0004943b) list_double2_pane_t1_cp2

0x7622,	// (0x00049451) list_double2_pane_t2_cp2_ParamLimits

0x7622,	// (0x00049451) list_double2_pane_t2_cp2

0x7634,	// (0x00049463) list_double_pane_g1_cp2_ParamLimits

0x7634,	// (0x00049463) list_double_pane_g1_cp2

0x7640,	// (0x0004946f) list_double_pane_g2_cp2

0x7648,	// (0x00049477) list_double_pane_t1_cp2_ParamLimits

0x7648,	// (0x00049477) list_double_pane_t1_cp2

0x765e,	// (0x0004948d) list_double_pane_t2_cp2_ParamLimits

0x765e,	// (0x0004948d) list_double_pane_t2_cp2

0x7688,	// (0x000494b7) list_single_pane_cp2_g3

0x9438,	// (0x0004b267) list_single_pane_g1_cp2_ParamLimits

0x9438,	// (0x0004b267) list_single_pane_g1_cp2

0x9444,	// (0x0004b273) list_single_pane_g2_cp2

0x944c,	// (0x0004b27b) list_single_pane_t1_cp2_ParamLimits

0x944c,	// (0x0004b27b) list_single_pane_t1_cp2

0x9464,	// (0x0004b293) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9464,	// (0x0004b293) list_single_large_graphic_pane_g1_cp2

0x9470,	// (0x0004b29f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9470,	// (0x0004b29f) list_single_large_graphic_pane_g2_cp2

0x947c,	// (0x0004b2ab) list_single_large_graphic_pane_g3_cp2

0x9484,	// (0x0004b2b3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9484,	// (0x0004b2b3) list_single_large_graphic_pane_g4_cp1

0x949e,	// (0x0004b2cd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x949e,	// (0x0004b2cd) list_single_large_graphic_pane_t1_cp2

0xa9bc,	// (0x0004c7eb) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa9bc,	// (0x0004c7eb) list_single_graphic_heading_pane_g1_cp2

0xa989,	// (0x0004c7b8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa989,	// (0x0004c7b8) list_single_graphic_heading_pane_g4_cp2

0x9444,	// (0x0004b273) list_single_graphic_heading_pane_g5_cp2

0xa9c8,	// (0x0004c7f7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9c8,	// (0x0004c7f7) list_single_graphic_heading_pane_t1_cp2

0xa9de,	// (0x0004c80d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9de,	// (0x0004c80d) list_single_graphic_heading_pane_t2_cp2

0xa97d,	// (0x0004c7ac) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa97d,	// (0x0004c7ac) list_single_2graphic_pane_g1_cp2

0xa989,	// (0x0004c7b8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa989,	// (0x0004c7b8) list_single_2graphic_pane_g2_cp2

0x9444,	// (0x0004b273) list_single_2graphic_pane_g3_cp2

0xa99a,	// (0x0004c7c9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa99a,	// (0x0004c7c9) list_single_2graphic_pane_g4_cp2

0xa9a6,	// (0x0004c7d5) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9a6,	// (0x0004c7d5) list_single_2graphic_pane_t1_cp2

0x09ac,	// (0x000427db) list_highlight_pane_g10_cp1

0xa565,	// (0x0004c394) list_highlight_pane_g1_cp1

0xa56d,	// (0x0004c39c) list_highlight_pane_g2_cp1

0xa575,	// (0x0004c3a4) list_highlight_pane_g3_cp1

0xa57d,	// (0x0004c3ac) list_highlight_pane_g4_cp1

0xa585,	// (0x0004c3b4) list_highlight_pane_g5_cp1

0xa58d,	// (0x0004c3bc) list_highlight_pane_g6_cp1

0xa595,	// (0x0004c3c4) list_highlight_pane_g7_cp1

0xa59d,	// (0x0004c3cc) list_highlight_pane_g8_cp1

0xa5a5,	// (0x0004c3d4) list_highlight_pane_g9_cp1

0xa48d,	// (0x0004c2bc) form_field_slider_pane_t3

0xa49b,	// (0x0004c2ca) form_field_slider_pane_t4

0xa4a9,	// (0x0004c2d8) slider_form_pane_ParamLimits

0xa4a9,	// (0x0004c2d8) slider_form_pane

0x09b6,	// (0x000427e5) control_abbreviations

0x09b6,	// (0x000427e5) control_conventions

0x09b6,	// (0x000427e5) control_definitions

0x09b6,	// (0x000427e5) format_table_attribute

0xac6f,	// (0x0004ca9e) bg_popup_preview_window_pane_g9

0x09b6,	// (0x000427e5) format_table_data2

0x09b6,	// (0x000427e5) format_table_data3

0x09b6,	// (0x000427e5) format_table_data_example

0x0008,

0x09b6,	// (0x000427e5) intro_purpose

0xf8ea,	// (0x00051719) bg_popup_preview_window_pane_g

0x09b6,	// (0x000427e5) texts_category

0x09b6,	// (0x000427e5) texts_graphics

0x94b4,	// (0x0004b2e3) text_digital

0x94c3,	// (0x0004b2f2) text_primary

0x94d2,	// (0x0004b301) text_primary_small

0x94e1,	// (0x0004b310) text_secondary

0x94f0,	// (0x0004b31f) text_title

0xb361,	// (0x0004d190) bg_passive_tab_pane_g1_cp3_srt

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp3_srt

0xb36a,	// (0x0004d199) bg_passive_tab_pane_g3_cp3_srt

0x0a12,	// (0x00042841) bg_active_tab_pane_cp3_srt_ParamLimits

0x0a12,	// (0x00042841) bg_active_tab_pane_cp3_srt

0xb373,	// (0x0004d1a2) tabs_4_active_pane_srt_g1

0xb37b,	// (0x0004d1aa) tabs_4_active_pane_srt_t1_ParamLimits

0xb37b,	// (0x0004d1aa) tabs_4_active_pane_srt_t1

0xb361,	// (0x0004d190) bg_active_tab_pane_g1_cp3_copy1

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp3_copy1

0xb36a,	// (0x0004d199) bg_active_tab_pane_g3_cp3_copy1

0x0a12,	// (0x00042841) tabs_2_long_active_pane_srt_ParamLimits

0x0a12,	// (0x00042841) tabs_2_long_active_pane_srt

0x0a12,	// (0x00042841) tabs_2_long_passive_pane_srt_ParamLimits

0x0a12,	// (0x00042841) tabs_2_long_passive_pane_srt

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp4_srt

0xb090,	// (0x0004cebf) bg_passive_tab_pane_g1_cp4_srt

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp4_srt

0xb099,	// (0x0004cec8) bg_passive_tab_pane_g3_cp4_srt

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp4_srt_ParamLimits

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp4_srt

0xb0a2,	// (0x0004ced1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0a2,	// (0x0004ced1) tabs_2_long_active_pane_srt_t1

0xb090,	// (0x0004cebf) bg_active_tab_pane_g1_cp4_srt

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp4_srt

0xb099,	// (0x0004cec8) bg_active_tab_pane_g3_cp4_srt

0x0a04,	// (0x00042833) tabs_3_long_active_pane_srt_ParamLimits

0x0a04,	// (0x00042833) tabs_3_long_active_pane_srt

0x0a04,	// (0x00042833) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0a04,	// (0x00042833) tabs_3_long_passive_pane_cp_srt

0x0a04,	// (0x00042833) tabs_3_long_passive_pane_srt_ParamLimits

0x0a04,	// (0x00042833) tabs_3_long_passive_pane_srt

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp5_srt

0x74a9,	// (0x000492d8) bg_passive_tab_pane_g1_cp5_srt

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp5_srt

0x74b2,	// (0x000492e1) bg_passive_tab_pane_g3_cp5_srt

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp5_srt_ParamLimits

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp5_srt

0xb07e,	// (0x0004cead) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb07e,	// (0x0004cead) tabs_3_long_active_pane_srt_t1

0x74a9,	// (0x000492d8) bg_active_tab_pane_g1_cp5_srt

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp5_srt

0x74b2,	// (0x000492e1) bg_active_tab_pane_g3_cp5_srt

0xb070,	// (0x0004ce9f) navi_text_pane_srt_t1

0xb068,	// (0x0004ce97) navi_icon_pane_srt_g1

0x96c1,	// (0x0004b4f0) midp_editing_number_pane_srt

0x94ff,	// (0x0004b32e) midp_ticker_pane_srt

0x96c9,	// (0x0004b4f8) midp_ticker_pane_srt_g1

0x96d1,	// (0x0004b500) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0005159c) midp_ticker_pane_srt_g

0x96d9,	// (0x0004b508) midp_ticker_pane_srt_t1

0xb059,	// (0x0004ce88) midp_editing_number_pane_t1_copy1

0x9507,	// (0x0004b336) listscroll_midp_pane

0x9507,	// (0x0004b336) midp_form_pane

0x9579,	// (0x0004b3a8) midp_info_popup_window_ParamLimits

0x9579,	// (0x0004b3a8) midp_info_popup_window

0x0e6d,	// (0x00042c9c) bg_popup_sub_pane_cp50_ParamLimits

0x0e6d,	// (0x00042c9c) bg_popup_sub_pane_cp50

0xa1ad,	// (0x0004bfdc) listscroll_midp_info_pane_ParamLimits

0xa1ad,	// (0x0004bfdc) listscroll_midp_info_pane

0xa18d,	// (0x0004bfbc) listscroll_form_midp_pane_ParamLimits

0xa18d,	// (0x0004bfbc) listscroll_form_midp_pane

0xa199,	// (0x0004bfc8) scroll_bar_cp050

0xa16d,	// (0x0004bf9c) list_midp_pane

0xbda3,	// (0x0004dbd2) signal_pane_g2_cp

0xa0a7,	// (0x0004bed6) listscroll_midp_info_pane_t1_ParamLimits

0xa0a7,	// (0x0004bed6) listscroll_midp_info_pane_t1

0xa0bf,	// (0x0004beee) listscroll_midp_info_pane_t2_ParamLimits

0xa0bf,	// (0x0004beee) listscroll_midp_info_pane_t2

0xa0fd,	// (0x0004bf2c) listscroll_midp_info_pane_t3_ParamLimits

0xa0fd,	// (0x0004bf2c) listscroll_midp_info_pane_t3

0xa137,	// (0x0004bf66) listscroll_midp_info_pane_t4_ParamLimits

0xa137,	// (0x0004bf66) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00051654) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00051654) listscroll_midp_info_pane_t

0x0ee3,	// (0x00042d12) scroll_pane_cp21

0xa047,	// (0x0004be76) form_midp_field_choice_group_pane

0xa050,	// (0x0004be7f) form_midp_field_text_pane

0xa08d,	// (0x0004bebc) form_midp_field_time_pane

0xa095,	// (0x0004bec4) form_midp_gauge_slider_pane

0xa09e,	// (0x0004becd) form_midp_gauge_wait_pane

0x09b6,	// (0x000427e5) form_midp_image_pane

0x5cd7,	// (0x00047b06) list_single_midp_pane_ParamLimits

0x5cd7,	// (0x00047b06) list_single_midp_pane

0x9ffc,	// (0x0004be2b) form_midp_field_text_pane_t1

0x9dc6,	// (0x0004bbf5) input_focus_pane_cp050

0xa036,	// (0x0004be65) list_midp_form_text_pane

0x9fcb,	// (0x0004bdfa) form_midp_field_choice_group_pane_t1

0x9fd9,	// (0x0004be08) input_focus_pane_cp051

0x9fed,	// (0x0004be1c) list_midp_choice_pane

0x09b6,	// (0x000427e5) status_idle_pane

0x9faf,	// (0x0004bdde) form_midp_field_time_pane_t1

0x09ac,	// (0x000427db) wait_anim_pane_g2_copy1

0x9fbd,	// (0x0004bdec) form_midp_field_time_pane_t2

0x0001,

0x9629,	// (0x0004b458) aid_navinavi_width_2_pane

0xf820,	// (0x0005164f) form_midp_field_time_pane_t

0x09b6,	// (0x000427e5) input_focus_pane_cp052

0x09b6,	// (0x000427e5) bg_input_focus_pane_cp040

0x9f6f,	// (0x0004bd9e) form_midp_gauge_slider_pane_t1

0x9f7d,	// (0x0004bdac) form_midp_gauge_slider_pane_t2

0x9f8b,	// (0x0004bdba) form_midp_gauge_slider_pane_t3

0x9f99,	// (0x0004bdc8) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00051646) form_midp_gauge_slider_pane_t

0x9fa7,	// (0x0004bdd6) form_midp_slider_pane

0x0a12,	// (0x00042841) bg_input_focus_pane_cp041_ParamLimits

0x0a12,	// (0x00042841) bg_input_focus_pane_cp041

0x9f3c,	// (0x0004bd6b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f3c,	// (0x0004bd6b) form_midp_gauge_wait_pane_t1

0x9f4e,	// (0x0004bd7d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f4e,	// (0x0004bd7d) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00051641) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00051641) form_midp_gauge_wait_pane_t

0x9f60,	// (0x0004bd8f) form_midp_wait_pane_ParamLimits

0x9f60,	// (0x0004bd8f) form_midp_wait_pane

0x9f06,	// (0x0004bd35) form_midp_image_pane_g1

0x9f0f,	// (0x0004bd3e) form_midp_image_pane_t1

0x9f1e,	// (0x0004bd4d) form_midp_image_pane_t2

0x9f2d,	// (0x0004bd5c) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0005163a) form_midp_image_pane_t

0x9efd,	// (0x0004bd2c) list_single_midp_pane_g1

0x5cc8,	// (0x00047af7) list_single_midp_pane_t1

0x9ed4,	// (0x0004bd03) list_midp_form_item_pane_ParamLimits

0x9ed4,	// (0x0004bd03) list_midp_form_item_pane

0x95d1,	// (0x0004b400) list_midp_form_item_pane_t1

0x95e0,	// (0x0004b40f) midp_ticker_pane_g1

0x95ec,	// (0x0004b41b) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00051582) midp_ticker_pane_g

0x95f8,	// (0x0004b427) midp_ticker_pane_t1

0xb2a6,	// (0x0004d0d5) midp_editing_number_pane_t1

0xb284,	// (0x0004d0b3) midp_editing_number_pane

0xb293,	// (0x0004d0c2) midp_ticker_pane

0xb049,	// (0x0004ce78) ai_message_heading_pane

0x09b6,	// (0x000427e5) bg_popup_window_pane_cp14

0xb051,	// (0x0004ce80) listscroll_ai_message_pane

0xafd3,	// (0x0004ce02) ai_message_heading_pane_g1_ParamLimits

0xafd3,	// (0x0004ce02) ai_message_heading_pane_g1

0xafdf,	// (0x0004ce0e) ai_message_heading_pane_g2_ParamLimits

0xafdf,	// (0x0004ce0e) ai_message_heading_pane_g2

0xafeb,	// (0x0004ce1a) ai_message_heading_pane_g3_ParamLimits

0xafeb,	// (0x0004ce1a) ai_message_heading_pane_g3

0xaff7,	// (0x0004ce26) ai_message_heading_pane_g4_ParamLimits

0xaff7,	// (0x0004ce26) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0005177b) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0005177b) ai_message_heading_pane_g

0xb003,	// (0x0004ce32) ai_message_heading_pane_t1_ParamLimits

0xb003,	// (0x0004ce32) ai_message_heading_pane_t1

0xb01d,	// (0x0004ce4c) ai_message_heading_pane_t2_ParamLimits

0xb01d,	// (0x0004ce4c) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00051784) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00051784) ai_message_heading_pane_t

0xb02f,	// (0x0004ce5e) bg_popup_heading_pane_cp1_ParamLimits

0xb02f,	// (0x0004ce5e) bg_popup_heading_pane_cp1

0xafc1,	// (0x0004cdf0) list_ai_message_pane_ParamLimits

0xafc1,	// (0x0004cdf0) list_ai_message_pane

0x0ee3,	// (0x00042d12) scroll_pane_cp10

0xaf5d,	// (0x0004cd8c) list_ai_message_pane_g1

0xaf65,	// (0x0004cd94) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00051758) list_ai_message_pane_g

0xaf6d,	// (0x0004cd9c) list_ai_message_pane_t1_ParamLimits

0xaf6d,	// (0x0004cd9c) list_ai_message_pane_t1

0xaf82,	// (0x0004cdb1) list_ai_message_pane_t2_ParamLimits

0xaf82,	// (0x0004cdb1) list_ai_message_pane_t2

0xaf97,	// (0x0004cdc6) list_ai_message_pane_t3_ParamLimits

0xaf97,	// (0x0004cdc6) list_ai_message_pane_t3

0xafac,	// (0x0004cddb) list_ai_message_pane_t4_ParamLimits

0xafac,	// (0x0004cddb) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0005175d) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0005175d) list_ai_message_pane_t

0xaf48,	// (0x0004cd77) cell_ai_soft_ind_pane_ParamLimits

0xaf48,	// (0x0004cd77) cell_ai_soft_ind_pane

0x960a,	// (0x0004b439) cell_ai_soft_ind_pane_g1_ParamLimits

0x960a,	// (0x0004b439) cell_ai_soft_ind_pane_g1

0x09b6,	// (0x000427e5) grid_highlight_cp1

0x9617,	// (0x0004b446) text_secondary_cp56_ParamLimits

0x9617,	// (0x0004b446) text_secondary_cp56

0xaf1d,	// (0x0004cd4c) example_general_pane_ParamLimits

0xaf1d,	// (0x0004cd4c) example_general_pane

0xaf29,	// (0x0004cd58) example_parent_pane_g1_ParamLimits

0xaf29,	// (0x0004cd58) example_parent_pane_g1

0xaf35,	// (0x0004cd64) example_parent_pane_t1_ParamLimits

0xaf35,	// (0x0004cd64) example_parent_pane_t1

0x7c46,	// (0x00049a75) popup_preview_text_window_ParamLimits

0x7c46,	// (0x00049a75) popup_preview_text_window

0x7690,	// (0x000494bf) list_single_pane_cp2_g4

0x0be4,	// (0x00042a13) bg_popup_preview_window_pane_ParamLimits

0x0be4,	// (0x00042a13) bg_popup_preview_window_pane

0xac77,	// (0x0004caa6) popup_preview_text_window_t1_ParamLimits

0xac77,	// (0x0004caa6) popup_preview_text_window_t1

0xac95,	// (0x0004cac4) popup_preview_text_window_t2_ParamLimits

0xac95,	// (0x0004cac4) popup_preview_text_window_t2

0xacde,	// (0x0004cb0d) popup_preview_text_window_t3_ParamLimits

0xacde,	// (0x0004cb0d) popup_preview_text_window_t3

0xad23,	// (0x0004cb52) popup_preview_text_window_t4_ParamLimits

0xad23,	// (0x0004cb52) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0005172c) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0005172c) popup_preview_text_window_t

0xada1,	// (0x0004cbd0) scroll_pane_cp11

0x9d52,	// (0x0004bb81) bg_popup_preview_window_pane_g1

0xac37,	// (0x0004ca66) bg_popup_preview_window_pane_g2

0xac3f,	// (0x0004ca6e) bg_popup_preview_window_pane_g3

0xac47,	// (0x0004ca76) bg_popup_preview_window_pane_g4

0xac4f,	// (0x0004ca7e) bg_popup_preview_window_pane_g5

0xac57,	// (0x0004ca86) bg_popup_preview_window_pane_g6

0xac5f,	// (0x0004ca8e) bg_popup_preview_window_pane_g7

0xac67,	// (0x0004ca96) bg_popup_preview_window_pane_g8

0x6352,	// (0x00048181) aid_popup_width_pane

0x7c24,	// (0x00049a53) popup_midp_note_alarm_window_ParamLimits

0x7c24,	// (0x00049a53) popup_midp_note_alarm_window

0x0db8,	// (0x00042be7) data_form_pane_ParamLimits

0x5981,	// (0x000477b0) form_field_data_pane_g1

0x598b,	// (0x000477ba) form_field_data_pane_t1_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_ParamLimits

0x59a3,	// (0x000477d2) data_form_wide_pane_ParamLimits

0x59b4,	// (0x000477e3) form_field_data_wide_pane_g1

0x59c0,	// (0x000477ef) form_field_data_wide_pane_t1_ParamLimits

0x0cb8,	// (0x00042ae7) input_focus_pane_cp6_ParamLimits

0x6e07,	// (0x00048c36) input_popup_find_pane_g1_ParamLimits

0x6e07,	// (0x00048c36) input_popup_find_pane_g1

0x6f99,	// (0x00048dc8) aid_navi_side_left_pane

0x6fae,	// (0x00048ddd) aid_navi_side_right_pane

0xa660,	// (0x0004c48f) bg_popup_window_pane_cp30_ParamLimits

0xa660,	// (0x0004c48f) bg_popup_window_pane_cp30

0xa6da,	// (0x0004c509) popup_midp_note_alarm_window_g1_ParamLimits

0xa6da,	// (0x0004c509) popup_midp_note_alarm_window_g1

0xa70a,	// (0x0004c539) popup_midp_note_alarm_window_t1_ParamLimits

0xa70a,	// (0x0004c539) popup_midp_note_alarm_window_t1

0xa7ab,	// (0x0004c5da) popup_midp_note_alarm_window_t2_ParamLimits

0xa7ab,	// (0x0004c5da) popup_midp_note_alarm_window_t2

0xa859,	// (0x0004c688) popup_midp_note_alarm_window_t3_ParamLimits

0xa859,	// (0x0004c688) popup_midp_note_alarm_window_t3

0xa881,	// (0x0004c6b0) popup_midp_note_alarm_window_t4_ParamLimits

0xa881,	// (0x0004c6b0) popup_midp_note_alarm_window_t4

0xa8a1,	// (0x0004c6d0) popup_midp_note_alarm_window_t5_ParamLimits

0xa8a1,	// (0x0004c6d0) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x000516c9) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x000516c9) popup_midp_note_alarm_window_t

0xa94d,	// (0x0004c77c) wait_bar_pane_cp1_ParamLimits

0xa94d,	// (0x0004c77c) wait_bar_pane_cp1

0x09b6,	// (0x000427e5) wait_anim_pane_copy1

0x09b6,	// (0x000427e5) wait_border_pane_copy1

0xa356,	// (0x0004c185) wait_border_pane_g1_copy1

0x59da,	// (0x00047809) form_field_popup_pane_g1

0x59e2,	// (0x00047811) form_field_popup_pane_t1_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_cp7_ParamLimits

0x0df2,	// (0x00042c21) list_form_pane_ParamLimits

0x59fa,	// (0x00047829) form_field_popup_wide_pane_g1

0x5a02,	// (0x00047831) form_field_popup_wide_pane_t1_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_cp8_ParamLimits

0x0dfe,	// (0x00042c2d) list_form_wide_pane_ParamLimits

0xb3f5,	// (0x0004d224) aid_size_cell_graphic_pane

0x5a8c,	// (0x000478bb) data_form_pane_t1_ParamLimits

0x5d17,	// (0x00047b46) data_form_wide_pane_t1_ParamLimits

0x991c,	// (0x0004b74b) bg_status_flat_pane

0x6751,	// (0x00048580) title_pane_t1_ParamLimits

0x09cc,	// (0x000427fb) title_pane_t2_ParamLimits

0x09f2,	// (0x00042821) title_pane_t3_ParamLimits

0xf557,	// (0x00051386) title_pane_t_ParamLimits

0x118c,	// (0x00042fbb) level_1_signal_ParamLimits

0x1199,	// (0x00042fc8) level_2_signal_ParamLimits

0x11a6,	// (0x00042fd5) level_3_signal_ParamLimits

0x11b3,	// (0x00042fe2) level_4_signal_ParamLimits

0x11c0,	// (0x00042fef) level_5_signal_ParamLimits

0x11cd,	// (0x00042ffc) level_6_signal_ParamLimits

0x11da,	// (0x00043009) level_7_signal_ParamLimits

0x118c,	// (0x00042fbb) level_1_battery_ParamLimits

0x1199,	// (0x00042fc8) level_2_battery_ParamLimits

0x11a6,	// (0x00042fd5) level_3_battery_ParamLimits

0x11b3,	// (0x00042fe2) level_4_battery_ParamLimits

0x11c0,	// (0x00042fef) level_5_battery_ParamLimits

0x11cd,	// (0x00042ffc) level_6_battery_ParamLimits

0x11da,	// (0x00043009) level_7_battery_ParamLimits

0xa565,	// (0x0004c394) bg_status_flat_pane_g1

0xa56d,	// (0x0004c39c) bg_status_flat_pane_g2

0xa575,	// (0x0004c3a4) bg_status_flat_pane_g3

0xa57d,	// (0x0004c3ac) bg_status_flat_pane_g4

0xa585,	// (0x0004c3b4) bg_status_flat_pane_g5

0xa58d,	// (0x0004c3bc) bg_status_flat_pane_g6

0xa595,	// (0x0004c3c4) bg_status_flat_pane_g7

0x67c1,	// (0x000485f0) tabs_3_active_pane_t1_ParamLimits

0x67c1,	// (0x000485f0) tabs_3_passive_pane_t1_ParamLimits

0x67db,	// (0x0004860a) tabs_4_active_pane_t1_ParamLimits

0x67db,	// (0x0004860a) tabs_4_1_passive_pane_t1_ParamLimits

0x6e3e,	// (0x00048c6d) tabs_2_active_pane_t1_ParamLimits

0x6e3e,	// (0x00048c6d) tabs_2_passive_pane_t1_ParamLimits

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp4_ParamLimits

0x6e50,	// (0x00048c7f) tabs_2_long_active_pane_t1_ParamLimits

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp4_ParamLimits

0x7eeb,	// (0x00049d1a) list_single_midp_graphic_pane_t1_ParamLimits

0x20ec,	// (0x00043f1b) bg_active_tab_pane_cp5_ParamLimits

0x6e6f,	// (0x00048c9e) tabs_3_long_active_pane_t1_ParamLimits

0x6e63,	// (0x00048c92) bg_passive_tab_pane_cp5_ParamLimits

0x7eeb,	// (0x00049d1a) list_single_midp_graphic_pane_t1

0x991c,	// (0x0004b74b) bg_status_flat_pane_ParamLimits

0x99e5,	// (0x0004b814) indicator_pane_cp2_ParamLimits

0x99e5,	// (0x0004b814) indicator_pane_cp2

0x9b10,	// (0x0004b93f) navi_pane_srt_ParamLimits

0x9b10,	// (0x0004b93f) navi_pane_srt

0x9b34,	// (0x0004b963) popup_clock_digital_analogue_window_cp1

0x0a56,	// (0x00042885) indicator_pane_t1

0x94ff,	// (0x0004b32e) copy_highlight_pane

0x94ff,	// (0x0004b32e) cursor_graphics_pane

0x94ff,	// (0x0004b32e) graphic_within_text_pane

0x94ff,	// (0x0004b32e) link_highlight_pane

0xad64,	// (0x0004cb93) popup_preview_text_window_t5_ParamLimits

0xad64,	// (0x0004cb93) popup_preview_text_window_t5

0x9631,	// (0x0004b460) cursor_digital_pane

0x9631,	// (0x0004b460) cursor_primary_pane

0x9642,	// (0x0004b471) cursor_primary_small_pane

0x964a,	// (0x0004b479) cursor_secondary_pane

0x9652,	// (0x0004b481) cursor_title_pane

0x9631,	// (0x0004b460) link_highlight_digital_pane

0x9639,	// (0x0004b468) link_highlight_primary_pane

0x9642,	// (0x0004b471) link_highlight_primary_small_pane

0x964a,	// (0x0004b479) link_highlight_secondary_pane

0x9652,	// (0x0004b481) link_highlight_title_pane

0x9631,	// (0x0004b460) copy_highlight_digital_pane

0x9631,	// (0x0004b460) copy_highlight_primary_pane

0x9642,	// (0x0004b471) copy_highlight_primary_small_pane

0x964a,	// (0x0004b479) copy_highlight_secondary_pane

0x9652,	// (0x0004b481) copy_highlight_title_pane

0x964a,	// (0x0004b479) graphic_text_digital_pane

0xa603,	// (0x0004c432) graphic_text_primary_pane

0xa60c,	// (0x0004c43b) graphic_text_primary_small_pane

0x9642,	// (0x0004b471) graphic_text_secondary_pane

0x9631,	// (0x0004b460) graphic_text_title_pane

0x965a,	// (0x0004b489) cursor_primary_pane_g1

0xa5f5,	// (0x0004c424) cursor_text_primary_t1

0xa5dd,	// (0x0004c40c) cursor_primary_small_pane_g1

0xa5e7,	// (0x0004c416) cursor_text_primary_small_t1

0xa5c5,	// (0x0004c3f4) cursor_primary_small_pane_g1_copy1

0xa5cf,	// (0x0004c3fe) cursor_text_primary_small_t1_copy1

0xa5ad,	// (0x0004c3dc) cursor_text_title_t1

0xa5bb,	// (0x0004c3ea) cursor_title_pane_g1

0x965a,	// (0x0004b489) cursor_digital_pane_g1

0x9664,	// (0x0004b493) cursor_text_digital_t1

0x9672,	// (0x0004b4a1) link_highlight_primary_pane_g1

0xa556,	// (0x0004c385) link_highlight_primary_pane_t1

0x9672,	// (0x0004b4a1) link_highlight_primary_small_pane_g1

0x967a,	// (0x0004b4a9) link_highlight_primary_small_pane_t1

0x9672,	// (0x0004b4a1) link_highlight_secondary_pane_g1

0x9689,	// (0x0004b4b8) link_highlight_secondary_pane_t1

0xa4bb,	// (0x0004c2ea) link_highlight_title_pane_g1

0xa4d2,	// (0x0004c301) link_highlight_title_pane_t1

0xa4bb,	// (0x0004c2ea) link_highlight_digital_pane_g1

0xa4c3,	// (0x0004c2f2) link_highlight_digital_pane_t1

0xa375,	// (0x0004c1a4) copy_highlight_primary_pane_g1

0xa39b,	// (0x0004c1ca) copy_highlight_primary_pane_t1

0xa375,	// (0x0004c1a4) copy_highlight_primary_small_pane_g1

0xa38c,	// (0x0004c1bb) copy_highlight_primary_small_pane_t1

0x9698,	// (0x0004b4c7) copy_highlight_secondary_pane_g1

0x96a0,	// (0x0004b4cf) copy_highlight_secondary_pane_t1

0xa375,	// (0x0004c1a4) copy_highlight_title_pane_g1

0xa37d,	// (0x0004c1ac) copy_highlight_title_pane_t1

0xa375,	// (0x0004c1a4) copy_highlight_digital_pane_g1

0xb5c3,	// (0x0004d3f2) copy_highlight_digital_pane_t1

0xb517,	// (0x0004d346) graphic_text_primary_pane_g1

0xb5a7,	// (0x0004d3d6) graphic_text_primary_pane_t1

0xb5b5,	// (0x0004d3e4) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000517f8) graphic_text_primary_pane_t

0xb583,	// (0x0004d3b2) graphic_text_primary_small_pane_g1

0xb58b,	// (0x0004d3ba) graphic_text_primary_small_pane_t1

0xb599,	// (0x0004d3c8) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000517f3) graphic_text_primary_small_pane_t

0xb55f,	// (0x0004d38e) graphic_text_secondary_pane_g1

0xb567,	// (0x0004d396) graphic_text_secondary_pane_t1

0xb575,	// (0x0004d3a4) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000517ee) graphic_text_secondary_pane_t

0xb53b,	// (0x0004d36a) graphic_text_title_pane_g1

0xb543,	// (0x0004d372) graphic_text_title_pane_t1

0xb551,	// (0x0004d380) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x000517e9) graphic_text_title_pane_t

0xb517,	// (0x0004d346) graphic_text_digital_pane_g1

0xb51f,	// (0x0004d34e) graphic_text_digital_pane_t1

0xb52d,	// (0x0004d35c) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x000517e4) graphic_text_digital_pane_t

0x0a12,	// (0x00042841) navi_icon_pane_srt_ParamLimits

0x0a12,	// (0x00042841) navi_icon_pane_srt

0x09b6,	// (0x000427e5) navi_midp_pane_srt

0x09b6,	// (0x000427e5) navi_navi_pane_srt

0x0a12,	// (0x00042841) navi_text_pane_srt_ParamLimits

0x0a12,	// (0x00042841) navi_text_pane_srt

0xb4e2,	// (0x0004d311) navi_navi_icon_text_pane_srt

0xb4ea,	// (0x0004d319) navi_navi_pane_srt_g1_ParamLimits

0xb4ea,	// (0x0004d319) navi_navi_pane_srt_g1

0xb4fc,	// (0x0004d32b) navi_navi_pane_srt_g2_ParamLimits

0xb4fc,	// (0x0004d32b) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x000517df) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x000517df) navi_navi_pane_srt_g

0xb50e,	// (0x0004d33d) navi_navi_tabs_pane_srt

0xb4e2,	// (0x0004d311) navi_navi_text_pane_srt

0xb4e2,	// (0x0004d311) navi_navi_volume_pane_srt

0xb4d3,	// (0x0004d302) navi_navi_text_pane_srt_t1

0x831f,	// (0x0004a14e) navi_navi_volume_pane_srt_g1

0x8327,	// (0x0004a156) volume_small_pane_srt_ParamLimits

0x8327,	// (0x0004a156) volume_small_pane_srt

0x7698,	// (0x000494c7) volume_small_pane_srt_g1_ParamLimits

0x7698,	// (0x000494c7) volume_small_pane_srt_g1

0x76a8,	// (0x000494d7) volume_small_pane_srt_g2_ParamLimits

0x76a8,	// (0x000494d7) volume_small_pane_srt_g2

0x76b9,	// (0x000494e8) volume_small_pane_srt_g3_ParamLimits

0x76b9,	// (0x000494e8) volume_small_pane_srt_g3

0x76ca,	// (0x000494f9) volume_small_pane_srt_g4_ParamLimits

0x76ca,	// (0x000494f9) volume_small_pane_srt_g4

0x76db,	// (0x0004950a) volume_small_pane_srt_g5_ParamLimits

0x76db,	// (0x0004950a) volume_small_pane_srt_g5

0x76ec,	// (0x0004951b) volume_small_pane_srt_g6_ParamLimits

0x76ec,	// (0x0004951b) volume_small_pane_srt_g6

0x76fd,	// (0x0004952c) volume_small_pane_srt_g7_ParamLimits

0x76fd,	// (0x0004952c) volume_small_pane_srt_g7

0x770e,	// (0x0004953d) volume_small_pane_srt_g8_ParamLimits

0x770e,	// (0x0004953d) volume_small_pane_srt_g8

0x771f,	// (0x0004954e) volume_small_pane_srt_g9_ParamLimits

0x771f,	// (0x0004954e) volume_small_pane_srt_g9

0x7730,	// (0x0004955f) volume_small_pane_srt_g10_ParamLimits

0x7730,	// (0x0004955f) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00051587) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00051587) volume_small_pane_srt_g

0x6a02,	// (0x00048831) query_popup_data_pane_cp2

0xb4b9,	// (0x0004d2e8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4b9,	// (0x0004d2e8) navi_navi_icon_text_pane_srt_t1

0xa603,	// (0x0004c432) navi_tabs_2_long_pane_srt

0xa603,	// (0x0004c432) navi_tabs_2_pane_srt

0xa603,	// (0x0004c432) navi_tabs_3_long_pane_srt

0xa603,	// (0x0004c432) navi_tabs_3_pane_srt

0xa603,	// (0x0004c432) navi_tabs_4_pane_srt

0x82ff,	// (0x0004a12e) tabs_2_active_pane_srt_ParamLimits

0x82ff,	// (0x0004a12e) tabs_2_active_pane_srt

0x830f,	// (0x0004a13e) tabs_2_passive_pane_srt_ParamLimits

0x830f,	// (0x0004a13e) tabs_2_passive_pane_srt

0x9845,	// (0x0004b674) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9845,	// (0x0004b674) bg_passive_tab_pane_cp1_srt

0xb485,	// (0x0004d2b4) bg_passive_tab_pane_g1_cp1_srt

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp1_srt

0xb48e,	// (0x0004d2bd) bg_passive_tab_pane_g3_cp1_srt

0x0a12,	// (0x00042841) bg_active_tab_pane_cp1_srt_ParamLimits

0x0a12,	// (0x00042841) bg_active_tab_pane_cp1_srt

0xb497,	// (0x0004d2c6) tabs_2_active_pane_srt_g1

0xb49f,	// (0x0004d2ce) tabs_2_active_pane_srt_t1_ParamLimits

0xb49f,	// (0x0004d2ce) tabs_2_active_pane_srt_t1

0xb485,	// (0x0004d2b4) bg_active_tab_pane_g1_cp1_srt

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp1_srt

0xb48e,	// (0x0004d2bd) bg_active_tab_pane_g3_cp1_srt

0x82cc,	// (0x0004a0fb) tabs_3_active_pane_srt_ParamLimits

0x82cc,	// (0x0004a0fb) tabs_3_active_pane_srt

0x82dd,	// (0x0004a10c) tabs_3_passive_pane_cp_srt_ParamLimits

0x82dd,	// (0x0004a10c) tabs_3_passive_pane_cp_srt

0x82ee,	// (0x0004a11d) tabs_3_passive_pane_srt_ParamLimits

0x82ee,	// (0x0004a11d) tabs_3_passive_pane_srt

0x9845,	// (0x0004b674) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9845,	// (0x0004b674) bg_passive_tab_pane_cp2_srt

0x96af,	// (0x0004b4de) bg_passive_tab_pane_g1_cp2_srt

0x731c,	// (0x0004914b) bg_passive_tab_pane_g2_cp2_srt

0x96b8,	// (0x0004b4e7) bg_passive_tab_pane_g3_cp2_srt

0x0a12,	// (0x00042841) bg_active_tab_pane_cp2_srt_ParamLimits

0x0a12,	// (0x00042841) bg_active_tab_pane_cp2_srt

0xb46b,	// (0x0004d29a) tabs_3_active_pane_srt_g1

0xb473,	// (0x0004d2a2) tabs_3_active_pane_srt_t1_ParamLimits

0xb473,	// (0x0004d2a2) tabs_3_active_pane_srt_t1

0x96af,	// (0x0004b4de) bg_active_tab_pane_g1_cp2_srt

0x731c,	// (0x0004914b) bg_active_tab_pane_g2_cp2_srt

0x96b8,	// (0x0004b4e7) bg_active_tab_pane_g3_cp2_srt

0x8284,	// (0x0004a0b3) tabs_4_active_pane_srt_ParamLimits

0x8284,	// (0x0004a0b3) tabs_4_active_pane_srt

0x8296,	// (0x0004a0c5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8296,	// (0x0004a0c5) tabs_4_passive_pane_cp2_srt

0x789f,	// (0x000496ce) aid_size_cell_toolbar

0x6e63,	// (0x00048c92) main_idle_act_pane_ParamLimits

0x7a56,	// (0x00049885) popup_large_graphic_colour_window_ParamLimits

0x7dc1,	// (0x00049bf0) popup_toolbar_window_ParamLimits

0x7dc1,	// (0x00049bf0) popup_toolbar_window

0xb2b5,	// (0x0004d0e4) list_single_graphic_2heading_pane_ParamLimits

0xb2b5,	// (0x0004d0e4) list_single_graphic_2heading_pane

0x1074,	// (0x00042ea3) aid_size_cell_apps_grid_lsc_pane

0x1086,	// (0x00042eb5) aid_size_cell_apps_grid_prt_pane

0x9845,	// (0x0004b674) bg_wml_button_pane_cp1_ParamLimits

0x9845,	// (0x0004b674) bg_wml_button_pane_cp1

0x9ffc,	// (0x0004be2b) form_midp_field_text_pane_t1_ParamLimits

0x9dc6,	// (0x0004bbf5) input_focus_pane_cp050_ParamLimits

0xa036,	// (0x0004be65) list_midp_form_text_pane_ParamLimits

0x9fd9,	// (0x0004be08) input_focus_pane_cp051_ParamLimits

0x9fed,	// (0x0004be1c) list_midp_choice_pane_ParamLimits

0x9e7c,	// (0x0004bcab) list_single_2graphic_pane_cp3_ParamLimits

0x9e7c,	// (0x0004bcab) list_single_2graphic_pane_cp3

0x9ea1,	// (0x0004bcd0) list_single_midp_graphic_pane_ParamLimits

0x9ea1,	// (0x0004bcd0) list_single_midp_graphic_pane

0x5baa,	// (0x000479d9) list_single_graphic_2heading_pane_g1_ParamLimits

0x5baa,	// (0x000479d9) list_single_graphic_2heading_pane_g1

0x5bb6,	// (0x000479e5) list_single_graphic_2heading_pane_g4_ParamLimits

0x5bb6,	// (0x000479e5) list_single_graphic_2heading_pane_g4

0x5bc2,	// (0x000479f1) list_single_graphic_2heading_pane_g5_ParamLimits

0x5bc2,	// (0x000479f1) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000515da) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000515da) list_single_graphic_2heading_pane_g

0x5bce,	// (0x000479fd) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bce,	// (0x000479fd) list_single_graphic_2heading_pane_t1

0x5be2,	// (0x00047a11) list_single_graphic_2heading_pane_t2_ParamLimits

0x5be2,	// (0x00047a11) list_single_graphic_2heading_pane_t2

0x5bfc,	// (0x00047a2b) list_single_graphic_2heading_pane_t3_ParamLimits

0x5bfc,	// (0x00047a2b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000515e1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000515e1) list_single_graphic_2heading_pane_t

0x9c90,	// (0x0004babf) bg_popup_sub_pane_cp2

0x9cba,	// (0x0004bae9) grid_toobar_pane

0x7e6e,	// (0x00049c9d) cell_toolbar_pane_ParamLimits

0x7e6e,	// (0x00049c9d) cell_toolbar_pane

0x9cf6,	// (0x0004bb25) cell_toolbar_pane_g1_ParamLimits

0x9cf6,	// (0x0004bb25) cell_toolbar_pane_g1

0x9d0a,	// (0x0004bb39) cell_toolbar_pane_g2_ParamLimits

0x9d0a,	// (0x0004bb39) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000515ef) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000515ef) cell_toolbar_pane_g

0x9d2c,	// (0x0004bb5b) grid_highlight_pane_cp2_ParamLimits

0x9d2c,	// (0x0004bb5b) grid_highlight_pane_cp2

0x9d46,	// (0x0004bb75) toolbar_button_pane

0x9d52,	// (0x0004bb81) toolbar_button_pane_g1

0x9d5a,	// (0x0004bb89) toolbar_button_pane_g2

0x9d62,	// (0x0004bb91) toolbar_button_pane_g3

0x9d6a,	// (0x0004bb99) toolbar_button_pane_g4

0x9d72,	// (0x0004bba1) toolbar_button_pane_g5

0x9d7a,	// (0x0004bba9) toolbar_button_pane_g6

0x9d82,	// (0x0004bbb1) toolbar_button_pane_g7

0x9d8a,	// (0x0004bbb9) toolbar_button_pane_g8

0x9d92,	// (0x0004bbc1) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000515f4) toolbar_button_pane_g

0x7ea6,	// (0x00049cd5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7ea6,	// (0x00049cd5) list_single_2graphic_pane_g1_cp3

0x7eb2,	// (0x00049ce1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7eb2,	// (0x00049ce1) list_single_2graphic_pane_g2_cp3

0x758f,	// (0x000493be) list_single_2graphic_pane_g3_cp3

0x7ec3,	// (0x00049cf2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7ec3,	// (0x00049cf2) list_single_2graphic_pane_g4_cp3

0x7ecf,	// (0x00049cfe) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7ecf,	// (0x00049cfe) list_single_2graphic_pane_t1_cp3

0x12ae,	// (0x000430dd) list_single_midp_graphic_pane_g2_ParamLimits

0x12ae,	// (0x000430dd) list_single_midp_graphic_pane_g2

0x5b9a,	// (0x000479c9) aid_zoom_text_primary

0x78a7,	// (0x000496d6) aid_zoom_text_secondary

0x9769,	// (0x0004b598) status_small_pane_g7_ParamLimits

0x9769,	// (0x0004b598) status_small_pane_g7

0x978c,	// (0x0004b5bb) status_small_pane_t1_ParamLimits

0x6734,	// (0x00048563) title_pane_g2

0x0003,

0xf54e,	// (0x0005137d) title_pane_g

0x6a5c,	// (0x0004888b) aid_size_cell_colour_1_pane_ParamLimits

0x6a5c,	// (0x0004888b) aid_size_cell_colour_1_pane

0x6a70,	// (0x0004889f) aid_size_cell_colour_2_pane_ParamLimits

0x6a70,	// (0x0004889f) aid_size_cell_colour_2_pane

0x6a84,	// (0x000488b3) aid_size_cell_colour_3_pane_ParamLimits

0x6a84,	// (0x000488b3) aid_size_cell_colour_3_pane

0x6a98,	// (0x000488c7) aid_size_cell_colour_4_pane_ParamLimits

0x6a98,	// (0x000488c7) aid_size_cell_colour_4_pane

0x6ed6,	// (0x00048d05) title_pane_stacon_g1_ParamLimits

0x6ed6,	// (0x00048d05) title_pane_stacon_g1

0xa3f2,	// (0x0004c221) popup_note_wait_window_g3_ParamLimits

0xa3f2,	// (0x0004c221) popup_note_wait_window_g3

0xa468,	// (0x0004c297) popup_note_wait_window_t5_ParamLimits

0xa468,	// (0x0004c297) popup_note_wait_window_t5

0x09b6,	// (0x000427e5) main_feb_china_hwr_fs_writing_pane

0x793d,	// (0x0004976c) popup_feb_china_hwr_fs_window_ParamLimits

0x793d,	// (0x0004976c) popup_feb_china_hwr_fs_window

0x7f19,	// (0x00049d48) aid_size_cell_hwr_fs_ParamLimits

0x7f19,	// (0x00049d48) aid_size_cell_hwr_fs

0x9dc6,	// (0x0004bbf5) bg_popup_sub_pane_cp3_ParamLimits

0x9dc6,	// (0x0004bbf5) bg_popup_sub_pane_cp3

0x7f2e,	// (0x00049d5d) grid_hwr_fs_pane_ParamLimits

0x7f2e,	// (0x00049d5d) grid_hwr_fs_pane

0x7f46,	// (0x00049d75) linegrid_hwr_fs_pane_ParamLimits

0x7f46,	// (0x00049d75) linegrid_hwr_fs_pane

0x7f56,	// (0x00049d85) cell_hwr_fs_pane_ParamLimits

0x7f56,	// (0x00049d85) cell_hwr_fs_pane

0x9dd2,	// (0x0004bc01) linegrid_hwr_fs_pane_g1_ParamLimits

0x9dd2,	// (0x0004bc01) linegrid_hwr_fs_pane_g1

0x9dde,	// (0x0004bc0d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9dde,	// (0x0004bc0d) linegrid_hwr_fs_pane_g2

0x9df0,	// (0x0004bc1f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9df0,	// (0x0004bc1f) linegrid_hwr_fs_pane_g3

0x7f78,	// (0x00049da7) linegrid_hwr_fs_pane_g4_ParamLimits

0x7f78,	// (0x00049da7) linegrid_hwr_fs_pane_g4

0x7f92,	// (0x00049dc1) linegrid_hwr_fs_pane_g5_ParamLimits

0x7f92,	// (0x00049dc1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0005161f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0005161f) linegrid_hwr_fs_pane_g

0x9dfc,	// (0x0004bc2b) cell_hwr_fs_pane_g1_ParamLimits

0x9dfc,	// (0x0004bc2b) cell_hwr_fs_pane_g1

0x9bca,	// (0x0004b9f9) cell_hwr_fs_pane_g2_ParamLimits

0x9bca,	// (0x0004b9f9) cell_hwr_fs_pane_g2

0x9e12,	// (0x0004bc41) cell_hwr_fs_pane_g3_ParamLimits

0x9e12,	// (0x0004bc41) cell_hwr_fs_pane_g3

0x9e1f,	// (0x0004bc4e) cell_hwr_fs_pane_g4_ParamLimits

0x9e1f,	// (0x0004bc4e) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0005162a) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0005162a) cell_hwr_fs_pane_g

0x7fa8,	// (0x00049dd7) cell_hwr_fs_pane_t1

0x09b6,	// (0x000427e5) grid_highlight_pane_cp6

0x09b6,	// (0x000427e5) main_idle_act2_pane

0x0eca,	// (0x00042cf9) aid_inside_area_popup_secondary

0xaa87,	// (0x0004c8b6) aid_inside_area_window_primary_ParamLimits

0xaa87,	// (0x0004c8b6) aid_inside_area_window_primary

0xb5d2,	// (0x0004d401) ai2_news_ticker_pane

0xb5da,	// (0x0004d409) aid_size_cell_ai1_link_ParamLimits

0xb5da,	// (0x0004d409) aid_size_cell_ai1_link

0xb5f4,	// (0x0004d423) popup_ai2_data_window_ParamLimits

0xb5f4,	// (0x0004d423) popup_ai2_data_window

0xb60a,	// (0x0004d439) popup_ai2_link_window_ParamLimits

0xb60a,	// (0x0004d439) popup_ai2_link_window

0x9dc6,	// (0x0004bbf5) bg_popup_sub_pane_cp4_ParamLimits

0x9dc6,	// (0x0004bbf5) bg_popup_sub_pane_cp4

0xb61e,	// (0x0004d44d) grid_ai2_link_pane_ParamLimits

0xb61e,	// (0x0004d44d) grid_ai2_link_pane

0xb635,	// (0x0004d464) popup_ai2_link_window_g1_ParamLimits

0xb635,	// (0x0004d464) popup_ai2_link_window_g1

0xb641,	// (0x0004d470) popup_ai2_link_window_g2_ParamLimits

0xb641,	// (0x0004d470) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000517fd) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000517fd) popup_ai2_link_window_g

0xb650,	// (0x0004d47f) ai2_mp_button_pane

0xb658,	// (0x0004d487) ai2_mp_volume_pane

0x9fd9,	// (0x0004be08) bg_popup_sub_pane_cp5_ParamLimits

0x9fd9,	// (0x0004be08) bg_popup_sub_pane_cp5

0xb660,	// (0x0004d48f) heading_ai2_gene_pane_ParamLimits

0xb660,	// (0x0004d48f) heading_ai2_gene_pane

0xb66c,	// (0x0004d49b) list_ai2_gene_pane_ParamLimits

0xb66c,	// (0x0004d49b) list_ai2_gene_pane

0xb6b4,	// (0x0004d4e3) cell_ai2_link_pane_ParamLimits

0xb6b4,	// (0x0004d4e3) cell_ai2_link_pane

0xb6ca,	// (0x0004d4f9) cell_ai2_link_pane_g1

0x09b6,	// (0x000427e5) grid_highlight_pane_cp7

0x833c,	// (0x0004a16b) ai2_mp_volume_pane_g1

0xb79a,	// (0x0004d5c9) ai2_mp_volume_pane_g2

0xb70f,	// (0x0004d53e) list_ai2_gene_pane_t1

0xb7a2,	// (0x0004d5d1) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00051816) ai2_mp_volume_pane_g

0x8344,	// (0x0004a173) volume_small_pane_cp3

0xb7aa,	// (0x0004d5d9) aid_size_cell_ai2_button

0xb7b2,	// (0x0004d5e1) grid_ai2_button_pane

0xb7bb,	// (0x0004d5ea) cell_ai2_button_pane_ParamLimits

0xb7bb,	// (0x0004d5ea) cell_ai2_button_pane

0x09ac,	// (0x000427db) cell_ai2_button_pane_g1

0x09b6,	// (0x000427e5) grid_highlight_pane_cp8

0xb75a,	// (0x0004d589) ai2_gene_pane_t1_ParamLimits

0xb75a,	// (0x0004d589) ai2_gene_pane_t1

0x7895,	// (0x000496c4) aid_height_parent_landscape

0xb0f0,	// (0x0004cf1f) aid_height_set_list

0xb101,	// (0x0004cf30) aid_size_parent

0xb3f5,	// (0x0004d224) aid_size_cell_graphic_pane_ParamLimits

0xb67c,	// (0x0004d4ab) popup_ai2_data_window_g1_ParamLimits

0xb67c,	// (0x0004d4ab) popup_ai2_data_window_g1

0xb688,	// (0x0004d4b7) ai2_news_ticker_pane_g1

0xb690,	// (0x0004d4bf) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00051802) ai2_news_ticker_pane_g

0xb698,	// (0x0004d4c7) ai2_news_ticker_pane_t1

0xb6a6,	// (0x0004d4d5) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00051807) ai2_news_ticker_pane_t

0xb6d3,	// (0x0004d502) heading_ai2_gene_pane_g1

0xb6db,	// (0x0004d50a) heading_ai2_gene_pane_t1_ParamLimits

0xb6db,	// (0x0004d50a) heading_ai2_gene_pane_t1

0xb6f0,	// (0x0004d51f) list_highlight_pane_cp6

0xb6f8,	// (0x0004d527) ai2_gene_pane_ParamLimits

0xb6f8,	// (0x0004d527) ai2_gene_pane

0xb71d,	// (0x0004d54c) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0005180c) list_ai2_gene_pane_t

0xb72b,	// (0x0004d55a) list_highlight_pane_cp8_ParamLimits

0xb72b,	// (0x0004d55a) list_highlight_pane_cp8

0xb73c,	// (0x0004d56b) ai2_gene_pane_g1_ParamLimits

0xb73c,	// (0x0004d56b) ai2_gene_pane_g1

0xb74e,	// (0x0004d57d) ai2_gene_pane_g2_ParamLimits

0xb74e,	// (0x0004d57d) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00051811) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00051811) ai2_gene_pane_g

0x0d63,	// (0x00042b92) scroll_pane_cp12

0x7852,	// (0x00049681) control_pane_t3_ParamLimits

0x7852,	// (0x00049681) control_pane_t3

0x977d,	// (0x0004b5ac) status_small_pane_g8_ParamLimits

0x977d,	// (0x0004b5ac) status_small_pane_g8

0x7a1f,	// (0x0004984e) popup_find_window_ParamLimits

0x7c38,	// (0x00049a67) popup_note_image_window_ParamLimits

0x5c14,	// (0x00047a43) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c14,	// (0x00047a43) list_double2_graphic_pane_vc_g1

0x6d2f,	// (0x00048b5e) list_double2_graphic_pane_vc_g2_ParamLimits

0x6d2f,	// (0x00048b5e) list_double2_graphic_pane_vc_g2

0x6d3b,	// (0x00048b6a) list_double2_graphic_pane_vc_g3_ParamLimits

0x6d3b,	// (0x00048b6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000515e8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000515e8) list_double2_graphic_pane_vc_g

0x5c20,	// (0x00047a4f) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c20,	// (0x00047a4f) list_double2_graphic_pane_vc_t1

0x6d2f,	// (0x00048b5e) list_single_heading_pane_vc_g1_ParamLimits

0x6d2f,	// (0x00048b5e) list_single_heading_pane_vc_g1

0x6d3b,	// (0x00048b6a) list_single_heading_pane_vc_g2_ParamLimits

0x6d3b,	// (0x00048b6a) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051609) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051609) list_single_heading_pane_vc_g

0x5c36,	// (0x00047a65) list_single_heading_pane_vc_t1_ParamLimits

0x5c36,	// (0x00047a65) list_single_heading_pane_vc_t1

0x5c4c,	// (0x00047a7b) list_single_heading_pane_vc_t2_ParamLimits

0x5c4c,	// (0x00047a7b) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0005160e) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0005160e) list_single_heading_pane_vc_t

0x7f01,	// (0x00049d30) list_setting_number_pane_vc_g1_ParamLimits

0x7f01,	// (0x00049d30) list_setting_number_pane_vc_g1

0x7f0d,	// (0x00049d3c) list_setting_number_pane_vc_g2_ParamLimits

0x7f0d,	// (0x00049d3c) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051613) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051613) list_setting_number_pane_vc_g

0x5c5e,	// (0x00047a8d) list_setting_number_pane_vc_t1_ParamLimits

0x5c5e,	// (0x00047a8d) list_setting_number_pane_vc_t1

0x5c72,	// (0x00047aa1) list_setting_number_pane_vc_t2_ParamLimits

0x5c72,	// (0x00047aa1) list_setting_number_pane_vc_t2

0x5c8e,	// (0x00047abd) list_setting_number_pane_vc_t3_ParamLimits

0x5c8e,	// (0x00047abd) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00051618) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00051618) list_setting_number_pane_vc_t

0x5cb8,	// (0x00047ae7) set_value_pane_vc_ParamLimits

0x5cb8,	// (0x00047ae7) set_value_pane_vc

0xb2b5,	// (0x0004d0e4) list_double2_graphic_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double2_graphic_pane_vc

0xb2b5,	// (0x0004d0e4) list_double2_large_graphic_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double2_large_graphic_pane_vc

0xb2b5,	// (0x0004d0e4) list_double2_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double2_pane_vc

0xb2b5,	// (0x0004d0e4) list_double_graphic_heading_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double_graphic_heading_pane_vc

0xb2b5,	// (0x0004d0e4) list_double_graphic_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double_graphic_pane_vc

0xb2b5,	// (0x0004d0e4) list_double_heading_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double_heading_pane_vc

0xb2c7,	// (0x0004d0f6) list_double_large_graphic_pane_vc_ParamLimits

0xb2c7,	// (0x0004d0f6) list_double_large_graphic_pane_vc

0xb2b5,	// (0x0004d0e4) list_double_number_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double_number_pane_vc

0xb2b5,	// (0x0004d0e4) list_double_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double_pane_vc

0xb2b5,	// (0x0004d0e4) list_double_time_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_double_time_pane_vc

0xb2b5,	// (0x0004d0e4) list_setting_number_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_setting_number_pane_vc

0xb2b5,	// (0x0004d0e4) list_setting_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_setting_pane_vc

0xb2b5,	// (0x0004d0e4) list_single_graphic_heading_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_single_graphic_heading_pane_vc

0xb2b5,	// (0x0004d0e4) list_single_heading_pane_vc_ParamLimits

0xb2b5,	// (0x0004d0e4) list_single_heading_pane_vc

0x81e8,	// (0x0004a017) list_single_number_heading_pane_vc_ParamLimits

0x81e8,	// (0x0004a017) list_single_number_heading_pane_vc

0x5d96,	// (0x00047bc5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5d96,	// (0x00047bc5) list_double_graphic_heading_pane_vc_g1

0x6d2f,	// (0x00048b5e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6d2f,	// (0x00048b5e) list_double_graphic_heading_pane_vc_g2

0x6d3b,	// (0x00048b6a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6d3b,	// (0x00048b6a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0005181d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0005181d) list_double_graphic_heading_pane_vc_g

0x5da2,	// (0x00047bd1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5da2,	// (0x00047bd1) list_double_graphic_heading_pane_vc_t1

0x5db6,	// (0x00047be5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5db6,	// (0x00047be5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00051824) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00051824) list_double_graphic_heading_pane_vc_t

0x7f01,	// (0x00049d30) list_setting_pane_vc_g1_ParamLimits

0x7f01,	// (0x00049d30) list_setting_pane_vc_g1

0x7f0d,	// (0x00049d3c) list_setting_pane_vc_g2_ParamLimits

0x7f0d,	// (0x00049d3c) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00051613) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00051613) list_setting_pane_vc_g

0x5dce,	// (0x00047bfd) list_setting_pane_vc_t1_ParamLimits

0x5dce,	// (0x00047bfd) list_setting_pane_vc_t1

0x5dea,	// (0x00047c19) list_setting_pane_vc_t2_ParamLimits

0x5dea,	// (0x00047c19) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00051867) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00051867) list_setting_pane_vc_t

0x5cb8,	// (0x00047ae7) set_value_pane_cp_vc_ParamLimits

0x5cb8,	// (0x00047ae7) set_value_pane_cp_vc

0x6d2f,	// (0x00048b5e) list_single_number_heading_pane_vc_g1_ParamLimits

0x6d2f,	// (0x00048b5e) list_single_number_heading_pane_vc_g1

0x6d3b,	// (0x00048b6a) list_single_number_heading_pane_vc_g2_ParamLimits

0x6d3b,	// (0x00048b6a) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051609) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051609) list_single_number_heading_pane_vc_g

0x5e04,	// (0x00047c33) list_single_number_heading_pane_vc_t1_ParamLimits

0x5e04,	// (0x00047c33) list_single_number_heading_pane_vc_t1

0x5e1a,	// (0x00047c49) list_single_number_heading_pane_vc_t2_ParamLimits

0x5e1a,	// (0x00047c49) list_single_number_heading_pane_vc_t2

0x5e2c,	// (0x00047c5b) list_single_number_heading_pane_vc_t3_ParamLimits

0x5e2c,	// (0x00047c5b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x0005186c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005186c) list_single_number_heading_pane_vc_t

0x5e3e,	// (0x00047c6d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e3e,	// (0x00047c6d) list_single_graphic_heading_pane_vc_g1

0x6d2f,	// (0x00048b5e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6d2f,	// (0x00048b5e) list_single_graphic_heading_pane_vc_g4

0x6d3b,	// (0x00048b6a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6d3b,	// (0x00048b6a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x00051873) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x00051873) list_single_graphic_heading_pane_vc_g

0x5c36,	// (0x00047a65) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5c36,	// (0x00047a65) list_single_graphic_heading_pane_vc_t1

0x5e4a,	// (0x00047c79) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5e4a,	// (0x00047c79) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x0005187a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x0005187a) list_single_graphic_heading_pane_vc_t

0x6d2f,	// (0x00048b5e) list_double2_pane_vc_g1_ParamLimits

0x6d2f,	// (0x00048b5e) list_double2_pane_vc_g1

0x6d3b,	// (0x00048b6a) list_double2_pane_vc_g2_ParamLimits

0x6d3b,	// (0x00048b6a) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00051609) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00051609) list_double2_pane_vc_g

0x5e5c,	// (0x00047c8b) list_double2_pane_vc_t1_ParamLimits

0x5e5c,	// (0x00047c8b) list_double2_pane_vc_t1

0x839e,	// (0x0004a1cd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x839e,	// (0x0004a1cd) list_double2_large_graphic_pane_vc_g1

0x6d2f,	// (0x00048b5e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6d2f,	// (0x00048b5e) list_double2_large_graphic_pane_vc_g2

0x6d3b,	// (0x00048b6a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6d3b,	// (0x00048b6a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x0005187f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x0005187f) list_double2_large_graphic_pane_vc_g

0x5c20,	// (0x00047a4f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5c20,	// (0x00047a4f) list_double2_large_graphic_pane_vc_t1

0x83aa,	// (0x0004a1d9) list_double_time_pane_vc_g1_ParamLimits

0x83aa,	// (0x0004a1d9) list_double_time_pane_vc_g1

0x83b6,	// (0x0004a1e5) list_double_time_pane_vc_g2_ParamLimits

0x83b6,	// (0x0004a1e5) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x00051886) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x00051886) list_double_time_pane_vc_g

0x5e74,	// (0x00047ca3) list_double_time_pane_vc_t1_ParamLimits

0x5e74,	// (0x00047ca3) list_double_time_pane_vc_t1

0x5e98,	// (0x00047cc7) list_double_time_pane_vc_t2_ParamLimits

0x5e98,	// (0x00047cc7) list_double_time_pane_vc_t2

0x5ee7,	// (0x00047d16) list_double_time_pane_vc_t3_ParamLimits

0x5ee7,	// (0x00047d16) list_double_time_pane_vc_t3

0x5ef9,	// (0x00047d28) list_double_time_pane_vc_t4_ParamLimits

0x5ef9,	// (0x00047d28) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x0005188b) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x0005188b) list_double_time_pane_vc_t

0x6d2f,	// (0x00048b5e) list_double_pane_vc_g1_ParamLimits

0x6d2f,	// (0x00048b5e) list_double_pane_vc_g1

0x6d3b,	// (0x00048b6a) list_double_pane_vc_g2_ParamLimits

0x6d3b,	// (0x00048b6a) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00051609) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00051609) list_double_pane_vc_g

0x5f0d,	// (0x00047d3c) list_double_pane_vc_t1_ParamLimits

0x5f0d,	// (0x00047d3c) list_double_pane_vc_t1

0x5f21,	// (0x00047d50) list_double_pane_vc_t2_ParamLimits

0x5f21,	// (0x00047d50) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x00051894) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x00051894) list_double_pane_vc_t

0x6d2f,	// (0x00048b5e) list_double_number_pane_vc_g1_ParamLimits

0x6d2f,	// (0x00048b5e) list_double_number_pane_vc_g1

0x6d3b,	// (0x00048b6a) list_double_number_pane_vc_g2_ParamLimits

0x6d3b,	// (0x00048b6a) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00051609) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00051609) list_double_number_pane_vc_g

0x5f39,	// (0x00047d68) list_double_number_pane_vc_t1_ParamLimits

0x5f39,	// (0x00047d68) list_double_number_pane_vc_t1

0x5f0d,	// (0x00047d3c) list_double_number_pane_vc_t2_ParamLimits

0x5f0d,	// (0x00047d3c) list_double_number_pane_vc_t2

0x5f4b,	// (0x00047d7a) list_double_number_pane_vc_t3_ParamLimits

0x5f4b,	// (0x00047d7a) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x00051899) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x00051899) list_double_number_pane_vc_t

0x83c2,	// (0x0004a1f1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x83c2,	// (0x0004a1f1) list_double_large_graphic_pane_vc_g1

0x83e4,	// (0x0004a213) list_double_large_graphic_pane_vc_g2_ParamLimits

0x83e4,	// (0x0004a213) list_double_large_graphic_pane_vc_g2

0x83f8,	// (0x0004a227) list_double_large_graphic_pane_vc_g3_ParamLimits

0x83f8,	// (0x0004a227) list_double_large_graphic_pane_vc_g3

0x5f63,	// (0x00047d92) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5f63,	// (0x00047d92) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x000518a0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x000518a0) list_double_large_graphic_pane_vc_g

0x5f6f,	// (0x00047d9e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5f6f,	// (0x00047d9e) list_double_large_graphic_pane_vc_t1

0x5f8b,	// (0x00047dba) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5f8b,	// (0x00047dba) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x000518a9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x000518a9) list_double_large_graphic_pane_vc_t

0x6d2f,	// (0x00048b5e) list_double_heading_pane_vc_g1_ParamLimits

0x6d2f,	// (0x00048b5e) list_double_heading_pane_vc_g1

0x6d3b,	// (0x00048b6a) list_double_heading_pane_vc_g2_ParamLimits

0x6d3b,	// (0x00048b6a) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00051609) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00051609) list_double_heading_pane_vc_g

0x5fad,	// (0x00047ddc) list_double_heading_pane_vc_t1_ParamLimits

0x5fad,	// (0x00047ddc) list_double_heading_pane_vc_t1

0x5fc1,	// (0x00047df0) list_double_heading_pane_vc_t2_ParamLimits

0x5fc1,	// (0x00047df0) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x000518ae) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x000518ae) list_double_heading_pane_vc_t

0x5fd9,	// (0x00047e08) list_double_graphic_pane_vc_g1_ParamLimits

0x5fd9,	// (0x00047e08) list_double_graphic_pane_vc_g1

0x8407,	// (0x0004a236) list_double_graphic_pane_vc_g2_ParamLimits

0x8407,	// (0x0004a236) list_double_graphic_pane_vc_g2

0x6d2f,	// (0x00048b5e) list_double_graphic_pane_vc_g3_ParamLimits

0x6d2f,	// (0x00048b5e) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x000518b3) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x000518b3) list_double_graphic_pane_vc_g

0x5fec,	// (0x00047e1b) list_double_graphic_pane_vc_t1_ParamLimits

0x5fec,	// (0x00047e1b) list_double_graphic_pane_vc_t1

0x600b,	// (0x00047e3a) list_double_graphic_pane_vc_t2_ParamLimits

0x600b,	// (0x00047e3a) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x000518bc) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x000518bc) list_double_graphic_pane_vc_t

0x635e,	// (0x0004818d) aid_size_cell_fastswap

0x6366,	// (0x00048195) aid_size_cell_touch_ParamLimits

0x6366,	// (0x00048195) aid_size_cell_touch

0x65c1,	// (0x000483f0) popup_fast_swap_wide_window_ParamLimits

0x65c1,	// (0x000483f0) popup_fast_swap_wide_window

0x66c7,	// (0x000484f6) touch_pane_ParamLimits

0x66c7,	// (0x000484f6) touch_pane

0x0db0,	// (0x00042bdf) button_value_adjust_pane_cp2

0x58d1,	// (0x00047700) button_value_adjust_pane_cp4

0x58f3,	// (0x00047722) form_field_data_pane_cp2

0x5914,	// (0x00047743) form_field_data_wide_pane_cp2

0x10ab,	// (0x00042eda) bg_scroll_pane_ParamLimits

0x70d2,	// (0x00048f01) scroll_handle_pane_ParamLimits

0x70e6,	// (0x00048f15) scroll_sc2_down_pane_ParamLimits

0x70e6,	// (0x00048f15) scroll_sc2_down_pane

0x10dc,	// (0x00042f0b) scroll_sc2_up_pane_ParamLimits

0x10dc,	// (0x00042f0b) scroll_sc2_up_pane

0xbe7c,	// (0x0004dcab) grid_wheel_folder_pane_g1_ParamLimits

0xbe7c,	// (0x0004dcab) grid_wheel_folder_pane_g1

0x7441,	// (0x00049270) clock_nsta_pane_cp2_ParamLimits

0x7441,	// (0x00049270) clock_nsta_pane_cp2

0x9507,	// (0x0004b336) listscroll_midp_pane_ParamLimits

0x9513,	// (0x0004b342) midp_canvas_pane

0x97f7,	// (0x0004b626) nsta_clock_indic_pane

0x982b,	// (0x0004b65a) listscroll_form_pane_vc

0x9833,	// (0x0004b662) listscroll_set_pane_vc_ParamLimits

0x9833,	// (0x0004b662) listscroll_set_pane_vc

0x9938,	// (0x0004b767) clock_nsta_pane

0x99b3,	// (0x0004b7e2) indicator_nsta_pane

0x9c90,	// (0x0004babf) bg_popup_sub_pane_cp2_ParamLimits

0x9ca4,	// (0x0004bad3) find_pane_cp2_ParamLimits

0x9ca4,	// (0x0004bad3) find_pane_cp2

0x9cba,	// (0x0004bae9) grid_toobar_pane_ParamLimits

0x9d9a,	// (0x0004bbc9) list_form_gen_pane_vc_ParamLimits

0x9d9a,	// (0x0004bbc9) list_form_gen_pane_vc

0x9db0,	// (0x0004bbdf) scroll_pane_cp8_vc_ParamLimits

0x9db0,	// (0x0004bbdf) scroll_pane_cp8_vc

0x9e2c,	// (0x0004bc5b) data_form_wide_pane_vc_ParamLimits

0x9e2c,	// (0x0004bc5b) data_form_wide_pane_vc

0x9e38,	// (0x0004bc67) form_field_data_wide_pane_vc_g1

0x9e40,	// (0x0004bc6f) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e40,	// (0x0004bc6f) form_field_data_wide_pane_vc_t1

0x0dc4,	// (0x00042bf3) input_focus_pane_cp6_vc_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_cp6_vc

0xa16d,	// (0x0004bf9c) list_midp_pane_ParamLimits

0xa179,	// (0x0004bfa8) scroll_pane_cp16_ParamLimits

0xa179,	// (0x0004bfa8) scroll_pane_cp16

0xa1cf,	// (0x0004bffe) button_value_adjust_pane_ParamLimits

0xa1cf,	// (0x0004bffe) button_value_adjust_pane

0xb113,	// (0x0004cf42) button_value_adjust_pane_cp6_ParamLimits

0xb113,	// (0x0004cf42) button_value_adjust_pane_cp6

0xb239,	// (0x0004d068) settings_code_pane_cp_ParamLimits

0xb239,	// (0x0004d068) settings_code_pane_cp

0x09ac,	// (0x000427db) cell_touch_pane_g1

0x09ac,	// (0x000427db) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0005152d) cell_touch_pane_g

0xb7cd,	// (0x0004d5fc) cell_touch_pane_cp_ParamLimits

0xb7cd,	// (0x0004d5fc) cell_touch_pane_cp

0xb7dd,	// (0x0004d60c) cell_touch_pane_ParamLimits

0xb7dd,	// (0x0004d60c) cell_touch_pane

0x09ac,	// (0x000427db) scroll_sc2_down_pane_g1

0x09ac,	// (0x000427db) scroll_sc2_up_pane_g1

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp4_vc

0xb7ef,	// (0x0004d61e) list_set_graphic_pane_vc_g1_ParamLimits

0xb7ef,	// (0x0004d61e) list_set_graphic_pane_vc_g1

0xb7fb,	// (0x0004d62a) list_set_graphic_pane_vc_g2_ParamLimits

0xb7fb,	// (0x0004d62a) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00051829) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00051829) list_set_graphic_pane_vc_g

0xb807,	// (0x0004d636) text_primary_small_cp13_vc_ParamLimits

0xb807,	// (0x0004d636) text_primary_small_cp13_vc

0xb81f,	// (0x0004d64e) list_set_graphic_pane_vc_ParamLimits

0xb81f,	// (0x0004d64e) list_set_graphic_pane_vc

0x09b6,	// (0x000427e5) input_focus_pane_cp2_vc

0x09ac,	// (0x000427db) setting_code_pane_vc_g1

0x0a29,	// (0x00042858) setting_code_pane_vc_t1

0xb832,	// (0x0004d661) set_text_pane_vc_t1_ParamLimits

0xb832,	// (0x0004d661) set_text_pane_vc_t1

0x09b6,	// (0x000427e5) input_focus_pane_cp1_vc

0xb84e,	// (0x0004d67d) list_set_text_pane_vc

0x09ac,	// (0x000427db) setting_text_pane_vc_g1

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp2_vc

0x0a20,	// (0x0004284f) setting_slider_graphic_pane_vc_g1

0xb858,	// (0x0004d687) setting_slider_graphic_pane_vc_t1

0xb868,	// (0x0004d697) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0005182e) setting_slider_graphic_pane_vc_t

0xb878,	// (0x0004d6a7) slider_set_pane_cp_vc

0xb880,	// (0x0004d6af) slider_set_pane_vc_g1

0xb889,	// (0x0004d6b8) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00051833) slider_set_pane_vc_g

0x0e1c,	// (0x00042c4b) set_opt_bg_pane_g1_copy1

0x0e24,	// (0x00042c53) set_opt_bg_pane_g2_copy1

0xb8b5,	// (0x0004d6e4) set_opt_bg_pane_g3_copy1

0x0e34,	// (0x00042c63) set_opt_bg_pane_g4_copy1

0x0e3c,	// (0x00042c6b) set_opt_bg_pane_g5_copy1

0x0e44,	// (0x00042c73) set_opt_bg_pane_g6_copy1

0xb8bd,	// (0x0004d6ec) set_opt_bg_pane_g7_copy1

0xb8c5,	// (0x0004d6f4) set_opt_bg_pane_g8_copy1

0xb8cd,	// (0x0004d6fc) set_opt_bg_pane_g9_copy1

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp_vc

0xb8d5,	// (0x0004d704) setting_slider_pane_vc_t1

0xb8e4,	// (0x0004d713) setting_slider_pane_vc_t2

0xb8f4,	// (0x0004d723) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00051842) setting_slider_pane_vc_t

0xb904,	// (0x0004d733) slider_set_pane_vc

0x7fb6,	// (0x00049de5) volume_set_pane_vc_g1

0x834d,	// (0x0004a17c) volume_set_pane_vc_g2

0x8356,	// (0x0004a185) volume_set_pane_vc_g3

0x835f,	// (0x0004a18e) volume_set_pane_vc_g4

0x8368,	// (0x0004a197) volume_set_pane_vc_g5

0x8371,	// (0x0004a1a0) volume_set_pane_vc_g6

0x837a,	// (0x0004a1a9) volume_set_pane_vc_g7

0x8383,	// (0x0004a1b2) volume_set_pane_vc_g8

0x838c,	// (0x0004a1bb) volume_set_pane_vc_g9

0x8395,	// (0x0004a1c4) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00051849) volume_set_pane_vc_g

0xb90c,	// (0x0004d73b) volume_set_pane_vc

0xb914,	// (0x0004d743) button_value_adjust_pane_cp1_vc

0xb91e,	// (0x0004d74d) list_highlight_pane_cp2_vc

0xb927,	// (0x0004d756) list_set_pane_vc_ParamLimits

0xb927,	// (0x0004d756) list_set_pane_vc

0xb985,	// (0x0004d7b4) main_pane_set_vc_t1_ParamLimits

0xb985,	// (0x0004d7b4) main_pane_set_vc_t1

0xb99a,	// (0x0004d7c9) main_pane_set_vc_t2_ParamLimits

0xb99a,	// (0x0004d7c9) main_pane_set_vc_t2

0xb9ac,	// (0x0004d7db) main_pane_set_vc_t3_ParamLimits

0xb9ac,	// (0x0004d7db) main_pane_set_vc_t3

0xb9be,	// (0x0004d7ed) main_pane_set_vc_t4_ParamLimits

0xb9be,	// (0x0004d7ed) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x0005185e) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x0005185e) main_pane_set_vc_t

0xb9d0,	// (0x0004d7ff) setting_code_pane_vc_ParamLimits

0xb9d0,	// (0x0004d7ff) setting_code_pane_vc

0xb9df,	// (0x0004d80e) setting_slider_graphic_pane_vc

0xb9df,	// (0x0004d80e) setting_slider_pane_vc

0xb9df,	// (0x0004d80e) setting_text_pane_vc

0xb9df,	// (0x0004d80e) setting_volume_pane_vc

0xb9e7,	// (0x0004d816) scroll_pane_cp121_vc

0x0d9e,	// (0x00042bcd) set_content_pane_vc

0xb9ef,	// (0x0004d81e) button_value_adjust_pane_g1

0xb9f8,	// (0x0004d827) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x000518c1) button_value_adjust_pane_g

0xba01,	// (0x0004d830) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba01,	// (0x0004d830) form_field_slider_wide_pane_vc_t1

0xba15,	// (0x0004d844) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba15,	// (0x0004d844) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x000518c6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x000518c6) form_field_slider_wide_pane_vc_t

0x0a04,	// (0x00042833) input_focus_pane_cp10_vc_ParamLimits

0x0a04,	// (0x00042833) input_focus_pane_cp10_vc

0xba43,	// (0x0004d872) slider_cont_pane_cp1_vc_ParamLimits

0xba43,	// (0x0004d872) slider_cont_pane_cp1_vc

0xba55,	// (0x0004d884) slider_form_pane_g1_cp2

0xb889,	// (0x0004d6b8) slider_form_pane_g2_cp2

0xba82,	// (0x0004d8b1) form_field_slider_pane_vc_t3

0xba90,	// (0x0004d8bf) form_field_slider_pane_vc_t4

0xba9e,	// (0x0004d8cd) slider_form_pane_vc_ParamLimits

0xba9e,	// (0x0004d8cd) slider_form_pane_vc

0xbaab,	// (0x0004d8da) form_field_slider_pane_vc_t1_ParamLimits

0xbaab,	// (0x0004d8da) form_field_slider_pane_vc_t1

0xba15,	// (0x0004d844) form_field_slider_pane_vc_t2_ParamLimits

0xba15,	// (0x0004d844) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x000518d8) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x000518d8) form_field_slider_pane_vc_t

0x0a04,	// (0x00042833) input_focus_pane_cp9_vc_ParamLimits

0x0a04,	// (0x00042833) input_focus_pane_cp9_vc

0xbac7,	// (0x0004d8f6) slider_cont_pane_vc_ParamLimits

0xbac7,	// (0x0004d8f6) slider_cont_pane_vc

0xbadb,	// (0x0004d90a) list_form_graphic_pane_cp_vc_ParamLimits

0xbadb,	// (0x0004d90a) list_form_graphic_pane_cp_vc

0x9e38,	// (0x0004bc67) form_field_popup_wide_pane_vc_g1

0xbaf0,	// (0x0004d91f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaf0,	// (0x0004d91f) form_field_popup_wide_pane_vc_t1

0x0dc4,	// (0x00042bf3) input_focus_pane_cp8_vc_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_cp8_vc

0xbb35,	// (0x0004d964) list_form_wide_pane_vc_ParamLimits

0xbb35,	// (0x0004d964) list_form_wide_pane_vc

0xbb41,	// (0x0004d970) list_form_graphic_pane_vc_g1

0xbb49,	// (0x0004d978) list_form_graphic_pane_vc_t1_ParamLimits

0xbb49,	// (0x0004d978) list_form_graphic_pane_vc_t1

0x0a12,	// (0x00042841) list_highlight_pane_cp5_vc_ParamLimits

0x0a12,	// (0x00042841) list_highlight_pane_cp5_vc

0xbb65,	// (0x0004d994) list_form_graphic_pane_vc_ParamLimits

0xbb65,	// (0x0004d994) list_form_graphic_pane_vc

0x9e38,	// (0x0004bc67) form_field_popup_pane_vc_g1

0xbb7b,	// (0x0004d9aa) form_field_popup_pane_vc_t1_ParamLimits

0xbb7b,	// (0x0004d9aa) form_field_popup_pane_vc_t1

0x0dc4,	// (0x00042bf3) input_focus_pane_cp7_vc_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_cp7_vc

0xbb92,	// (0x0004d9c1) list_form_pane_vc_ParamLimits

0xbb92,	// (0x0004d9c1) list_form_pane_vc

0xbb9e,	// (0x0004d9cd) data_form_pane_vc_t1_ParamLimits

0xbb9e,	// (0x0004d9cd) data_form_pane_vc_t1

0x0e1c,	// (0x00042c4b) input_focus_pane_vc_g1

0x0e24,	// (0x00042c53) input_focus_pane_vc_g2

0x0e2c,	// (0x00042c5b) input_focus_pane_vc_g3

0x0e34,	// (0x00042c63) input_focus_pane_vc_g4

0x0e3c,	// (0x00042c6b) input_focus_pane_vc_g5

0x0e44,	// (0x00042c73) input_focus_pane_vc_g6

0x0e4c,	// (0x00042c7b) input_focus_pane_vc_g7

0x0e54,	// (0x00042c83) input_focus_pane_vc_g8

0x0e5c,	// (0x00042c8b) input_focus_pane_vc_g9

0x09ac,	// (0x000427db) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x000514b6) input_focus_pane_vc_g

0x9e2c,	// (0x0004bc5b) data_form_pane_vc_ParamLimits

0x9e2c,	// (0x0004bc5b) data_form_pane_vc

0x9e38,	// (0x0004bc67) form_field_data_pane_vc_g1

0xbbb9,	// (0x0004d9e8) form_field_data_pane_vc_t1_ParamLimits

0xbbb9,	// (0x0004d9e8) form_field_data_pane_vc_t1

0x0dc4,	// (0x00042bf3) input_focus_pane_vc_ParamLimits

0x0dc4,	// (0x00042bf3) input_focus_pane_vc

0xbbd3,	// (0x0004da02) button_value_adjust_pane_cp3_vc

0xbbdb,	// (0x0004da0a) button_value_adjust_pane_cp5_vc

0xbbe3,	// (0x0004da12) form_field_data_pane_vc_ParamLimits

0xbbe3,	// (0x0004da12) form_field_data_pane_vc

0xbbfa,	// (0x0004da29) form_field_data_pane_vc_cp2

0xbc02,	// (0x0004da31) form_field_data_wide_pane_vc_ParamLimits

0xbc02,	// (0x0004da31) form_field_data_wide_pane_vc

0xbc18,	// (0x0004da47) form_field_data_wide_pane_vc_cp2

0xbc20,	// (0x0004da4f) form_field_popup_pane_vc_ParamLimits

0xbc20,	// (0x0004da4f) form_field_popup_pane_vc

0xbc37,	// (0x0004da66) form_field_popup_wide_pane_vc_ParamLimits

0xbc37,	// (0x0004da66) form_field_popup_wide_pane_vc

0xbc4d,	// (0x0004da7c) form_field_slider_pane_vc_ParamLimits

0xbc4d,	// (0x0004da7c) form_field_slider_pane_vc

0xbc60,	// (0x0004da8f) form_field_slider_wide_pane_vc_ParamLimits

0xbc60,	// (0x0004da8f) form_field_slider_wide_pane_vc

0xbc73,	// (0x0004daa2) grid_touch_1_pane_ParamLimits

0xbc73,	// (0x0004daa2) grid_touch_1_pane

0xbc7f,	// (0x0004daae) grid_touch_2_pane_ParamLimits

0xbc7f,	// (0x0004daae) grid_touch_2_pane

0x97c2,	// (0x0004b5f1) touch_pane_g1_ParamLimits

0x97c2,	// (0x0004b5f1) touch_pane_g1

0xbc97,	// (0x0004dac6) cell_app_pane_cp_wide_ParamLimits

0xbc97,	// (0x0004dac6) cell_app_pane_cp_wide

0xbcb4,	// (0x0004dae3) grid_popup_fast_wide_pane_ParamLimits

0xbcb4,	// (0x0004dae3) grid_popup_fast_wide_pane

0xbcc8,	// (0x0004daf7) scroll_pane_cp19_ParamLimits

0xbcc8,	// (0x0004daf7) scroll_pane_cp19

0x09b6,	// (0x000427e5) bg_popup_window_pane_cp20

0xbcdc,	// (0x0004db0b) listscroll_popup_fast_wide_pane

0x0a12,	// (0x00042841) grid_indicator_nsta_pane

0xbce4,	// (0x0004db13) clock_nsta_pane_g1

0xbced,	// (0x0004db1c) clock_nsta_pane_t1

0xbd09,	// (0x0004db38) cell_indicator_nsta_pane_ParamLimits

0xbd09,	// (0x0004db38) cell_indicator_nsta_pane

0xbd3a,	// (0x0004db69) cell_indicator_nsta_pane_g1

0xbd48,	// (0x0004db77) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x000518e9) cell_indicator_nsta_pane_g

0xbd55,	// (0x0004db84) clock_nsta_pane_cp

0xbd5d,	// (0x0004db8c) indicator_nsta_pane_cp

0xbd65,	// (0x0004db94) nsta_clock_indic_pane_g1

0x0a4e,	// (0x0004287d) grid_indicator_pane

0x7184,	// (0x00048fb3) scroll_pane_cp29

0x7390,	// (0x000491bf) indicator_nsta_pane_cp2_ParamLimits

0x7390,	// (0x000491bf) indicator_nsta_pane_cp2

0x0a12,	// (0x00042841) main_apps_wheel_pane

0xa050,	// (0x0004be7f) form_midp_field_text_pane_ParamLimits

0xa199,	// (0x0004bfc8) scroll_bar_cp050_ParamLimits

0xbdb5,	// (0x0004dbe4) cell_indicator_pane_ParamLimits

0xbdb5,	// (0x0004dbe4) cell_indicator_pane

0xbdce,	// (0x0004dbfd) cell_indicator_pane_g1

0xbdd8,	// (0x0004dc07) grid_wheel_folder_pane_ParamLimits

0xbdd8,	// (0x0004dc07) grid_wheel_folder_pane

0xbdee,	// (0x0004dc1d) list_wheel_apps_pane_ParamLimits

0xbdee,	// (0x0004dc1d) list_wheel_apps_pane

0xbdff,	// (0x0004dc2e) main_apps_wheel_pane_g1_ParamLimits

0xbdff,	// (0x0004dc2e) main_apps_wheel_pane_g1

0xbe13,	// (0x0004dc42) main_apps_wheel_pane_g2_ParamLimits

0xbe13,	// (0x0004dc42) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00051905) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00051905) main_apps_wheel_pane_g

0xbe2b,	// (0x0004dc5a) main_apps_wheel_pane_t1_ParamLimits

0xbe2b,	// (0x0004dc5a) main_apps_wheel_pane_t1

0xbe4e,	// (0x0004dc7d) list_wheel_apps_pane_g1

0xbe56,	// (0x0004dc85) list_wheel_apps_pane_g2

0xbe5e,	// (0x0004dc8d) list_wheel_apps_pane_g3

0xbe68,	// (0x0004dc97) list_wheel_apps_pane_g4

0xbe72,	// (0x0004dca1) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x0005190a) list_wheel_apps_pane_g

0x75df,	// (0x0004940e) navi_icon_text_pane

0x9867,	// (0x0004b696) aid_fill_nsta

0xbe95,	// (0x0004dcc4) navi_icon_text_pane_g1

0xbea1,	// (0x0004dcd0) navi_icon_text_pane_t1

0x4ac6,	// (0x000468f5) list_set_graphic_pane_t1_ParamLimits

0x4ac6,	// (0x000468f5) list_set_graphic_pane_t1

0xa8d0,	// (0x0004c6ff) popup_midp_note_alarm_window_t6_ParamLimits

0xa8d0,	// (0x0004c6ff) popup_midp_note_alarm_window_t6

0xa8e2,	// (0x0004c711) popup_midp_note_alarm_window_t7_ParamLimits

0xa8e2,	// (0x0004c711) popup_midp_note_alarm_window_t7

0xa8f4,	// (0x0004c723) popup_midp_note_alarm_window_t8_ParamLimits

0xa8f4,	// (0x0004c723) popup_midp_note_alarm_window_t8

0xa906,	// (0x0004c735) popup_midp_note_alarm_window_t9_ParamLimits

0xa906,	// (0x0004c735) popup_midp_note_alarm_window_t9

0xa918,	// (0x0004c747) popup_midp_note_alarm_window_t10_ParamLimits

0xa918,	// (0x0004c747) popup_midp_note_alarm_window_t10

0xa92a,	// (0x0004c759) popup_midp_note_alarm_window_t11_ParamLimits

0xa92a,	// (0x0004c759) popup_midp_note_alarm_window_t11

0xa93c,	// (0x0004c76b) scroll_pane_cp17_ParamLimits

0xa93c,	// (0x0004c76b) scroll_pane_cp17

0x7fb6,	// (0x00049de5) volume_small_pane_cp_g1

0x8424,	// (0x0004a253) volume_small_pane_cp_g2

0x842d,	// (0x0004a25c) volume_small_pane_cp_g3

0x8436,	// (0x0004a265) volume_small_pane_cp_g4

0x843f,	// (0x0004a26e) volume_small_pane_cp_g5

0x8368,	// (0x0004a197) volume_small_pane_cp_g6

0x8448,	// (0x0004a277) volume_small_pane_cp_g7

0x8451,	// (0x0004a280) volume_small_pane_cp_g8

0x845a,	// (0x0004a289) volume_small_pane_cp_g9

0x8463,	// (0x0004a292) volume_small_pane_cp_g10

0x95e0,	// (0x0004b40f) midp_ticker_pane_g1_ParamLimits

0x95ec,	// (0x0004b41b) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00051582) midp_ticker_pane_g_ParamLimits

0x95f8,	// (0x0004b427) midp_ticker_pane_t1_ParamLimits

0x987d,	// (0x0004b6ac) aid_fill_nsta_2

0xa185,	// (0x0004bfb4) list_form2_midp_pane

0xb284,	// (0x0004d0b3) midp_editing_number_pane_ParamLimits

0xb293,	// (0x0004d0c2) midp_ticker_pane_ParamLimits

0xbeb3,	// (0x0004dce2) form2_midp_field_pane

0xbed7,	// (0x0004dd06) scroll_pane_cp51

0xbef7,	// (0x0004dd26) form2_midp_button_pane_ParamLimits

0xbef7,	// (0x0004dd26) form2_midp_button_pane

0xbf09,	// (0x0004dd38) form2_midp_content_pane_ParamLimits

0xbf09,	// (0x0004dd38) form2_midp_content_pane

0xbf23,	// (0x0004dd52) form2_midp_field_choice_group_pane

0xbf2b,	// (0x0004dd5a) form2_midp_field_pane_g1

0xbf33,	// (0x0004dd62) form2_midp_field_pane_g2

0xbf3b,	// (0x0004dd6a) form2_midp_field_pane_g3

0xbf43,	// (0x0004dd72) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0005192f) form2_midp_field_pane_g

0xbf4b,	// (0x0004dd7a) form2_midp_gauge_slider_pane

0xbf53,	// (0x0004dd82) form2_midp_gauge_wait_pane

0xbf5b,	// (0x0004dd8a) form2_midp_image_pane_ParamLimits

0xbf5b,	// (0x0004dd8a) form2_midp_image_pane

0xbf76,	// (0x0004dda5) form2_midp_label_pane_ParamLimits

0xbf76,	// (0x0004dda5) form2_midp_label_pane

0xbf8f,	// (0x0004ddbe) form2_midp_label_pane_cp_ParamLimits

0xbf8f,	// (0x0004ddbe) form2_midp_label_pane_cp

0xbfb0,	// (0x0004dddf) form2_midp_string_pane_ParamLimits

0xbfb0,	// (0x0004dddf) form2_midp_string_pane

0x6035,	// (0x00047e64) form2_midp_text_pane_ParamLimits

0x6035,	// (0x00047e64) form2_midp_text_pane

0xbfc2,	// (0x0004ddf1) form2_midp_time_pane

0xbfd2,	// (0x0004de01) input_focus_pane_cp51_ParamLimits

0xbfd2,	// (0x0004de01) input_focus_pane_cp51

0xbfea,	// (0x0004de19) form2_midp_label_pane_t1_ParamLimits

0xbfea,	// (0x0004de19) form2_midp_label_pane_t1

0x6052,	// (0x00047e81) form2_mdip_text_pane_t1_ParamLimits

0x6052,	// (0x00047e81) form2_mdip_text_pane_t1

0x6070,	// (0x00047e9f) form2_midp_time_pane_t1

0xc033,	// (0x0004de62) form2_midp_gauge_slider_pane_t1

0xc045,	// (0x0004de74) form2_midp_gauge_slider_pane_t2

0xc057,	// (0x0004de86) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00051938) form2_midp_gauge_slider_pane_t

0xc069,	// (0x0004de98) form2_midp_slider_pane

0xc075,	// (0x0004dea4) form2_midp_gauge_wait_pane_t1

0xc083,	// (0x0004deb2) form2_midp_wait_pane_ParamLimits

0xc083,	// (0x0004deb2) form2_midp_wait_pane

0xc0ae,	// (0x0004dedd) list_single_2graphic_pane_cp4_ParamLimits

0xc0ae,	// (0x0004dedd) list_single_2graphic_pane_cp4

0x9ea1,	// (0x0004bcd0) list_single_midp_graphic_pane_cp_ParamLimits

0x9ea1,	// (0x0004bcd0) list_single_midp_graphic_pane_cp

0x09b6,	// (0x000427e5) list_highlight_pane_cp20

0xc0d6,	// (0x0004df05) list_single_2graphic_pane_g1_cp4

0xb6d3,	// (0x0004d502) list_single_2graphic_pane_g2_cp4

0xc0de,	// (0x0004df0d) list_single_2graphic_pane_t1_cp4

0x0a12,	// (0x00042841) list_highlight_pane_cp21

0xc0ed,	// (0x0004df1c) list_single_midp_graphic_pane_g4_cp

0xc0fc,	// (0x0004df2b) list_single_midp_graphic_pane_t1_cp

0xc111,	// (0x0004df40) form2_mdip_string_pane_t1_ParamLimits

0xc111,	// (0x0004df40) form2_mdip_string_pane_t1

0x09b6,	// (0x000427e5) bg_wml_button_pane_cp2

0x09ac,	// (0x000427db) form2_midp_image_pane_g1

0x6d8e,	// (0x00048bbd) list_double_large_graphic_pane_g5_ParamLimits

0x6d8e,	// (0x00048bbd) list_double_large_graphic_pane_g5

0x9507,	// (0x0004b336) midp_form_pane_ParamLimits

0x0a12,	// (0x00042841) main_apps_wheel_pane_ParamLimits

0x7c5e,	// (0x00049a8d) popup_preview_window_ParamLimits

0x7c5e,	// (0x00049a8d) popup_preview_window

0x7e19,	// (0x00049c48) popup_touch_info_window_ParamLimits

0x7e19,	// (0x00049c48) popup_touch_info_window

0x7e37,	// (0x00049c66) popup_touch_menu_window_ParamLimits

0x7e37,	// (0x00049c66) popup_touch_menu_window

0x09a2,	// (0x000427d1) bg_popup_sub_pane_cp6

0xc212,	// (0x0004e041) list_touch_menu_pane

0xc21a,	// (0x0004e049) list_single_touch_menu_pane_ParamLimits

0xc21a,	// (0x0004e049) list_single_touch_menu_pane

0xc230,	// (0x0004e05f) list_single_touch_menu_pane_t1

0x0a12,	// (0x00042841) bg_popup_sub_pane_cp7_ParamLimits

0x0a12,	// (0x00042841) bg_popup_sub_pane_cp7

0xc23e,	// (0x0004e06d) heading_sub_pane

0xc246,	// (0x0004e075) list_touch_info_pane_ParamLimits

0xc246,	// (0x0004e075) list_touch_info_pane

0xc255,	// (0x0004e084) list_single_touch_info_pane_ParamLimits

0xc255,	// (0x0004e084) list_single_touch_info_pane

0xc267,	// (0x0004e096) list_single_touch_info_pane_t1

0xc275,	// (0x0004e0a4) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00051946) list_single_touch_info_pane_t

0x94ff,	// (0x0004b32e) bg_popup_heading_pane_cp

0xc283,	// (0x0004e0b2) heading_sub_pane_t1

0x9dc6,	// (0x0004bbf5) bg_popup_preview_window_pane_cp_ParamLimits

0x9dc6,	// (0x0004bbf5) bg_popup_preview_window_pane_cp

0xc23e,	// (0x0004e06d) heading_preview_pane

0xc246,	// (0x0004e075) list_preview_pane_ParamLimits

0xc246,	// (0x0004e075) list_preview_pane

0xc291,	// (0x0004e0c0) popup_preview_window_g1

0xc255,	// (0x0004e084) list_single_preview_pane_ParamLimits

0xc255,	// (0x0004e084) list_single_preview_pane

0xc299,	// (0x0004e0c8) list_single_preview_pane_g1

0xc2a1,	// (0x0004e0d0) list_single_preview_pane_t1

0xc267,	// (0x0004e096) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x0005194b) list_single_preview_pane_t

0xc2af,	// (0x0004e0de) bg_popup_heading_pane_cp2_ParamLimits

0xc2af,	// (0x0004e0de) bg_popup_heading_pane_cp2

0xc2c5,	// (0x0004e0f4) heading_preview_pane_g1

0xc2cd,	// (0x0004e0fc) heading_preview_pane_t1_ParamLimits

0xc2cd,	// (0x0004e0fc) heading_preview_pane_t1

0x0a65,	// (0x00042894) soft_indicator_pane_t1_ParamLimits

0x0d40,	// (0x00042b6f) scroll_pane_ParamLimits

0x10d3,	// (0x00042f02) scroll_sc2_left_pane

0x10ca,	// (0x00042ef9) scroll_sc2_right_pane

0x10f2,	// (0x00042f21) scroll_bg_pane_g1_ParamLimits

0x1107,	// (0x00042f36) scroll_bg_pane_g2_ParamLimits

0x111f,	// (0x00042f4e) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0005150d) scroll_bg_pane_g_ParamLimits

0x10f2,	// (0x00042f21) scroll_handle_pane_g1_ParamLimits

0x1134,	// (0x00042f63) scroll_handle_pane_g2_ParamLimits

0x111f,	// (0x00042f4e) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00051514) scroll_handle_pane_g_ParamLimits

0x78e1,	// (0x00049710) popup_choice_list_window_ParamLimits

0x78e1,	// (0x00049710) popup_choice_list_window

0x9c9c,	// (0x0004bacb) choice_list_pane

0x9d1e,	// (0x0004bb4d) cell_toolbar_pane_t1

0x9d46,	// (0x0004bb75) toolbar_button_pane_ParamLimits

0xadf6,	// (0x0004cc25) ai_gene_pane_1_t2_ParamLimits

0xadf6,	// (0x0004cc25) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0005173c) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0005173c) ai_gene_pane_1_t

0xc2ea,	// (0x0004e119) scroll_sc2_left_pane_g1

0xc2ea,	// (0x0004e119) scroll_sc2_right_pane_g1

0x9845,	// (0x0004b674) bg_popup_sub_pane_cp10

0xc2f4,	// (0x0004e123) list_choice_list_pane

0xc30d,	// (0x0004e13c) list_single_choice_list_pane_ParamLimits

0xc30d,	// (0x0004e13c) list_single_choice_list_pane

0xc320,	// (0x0004e14f) list_single_choice_list_pane_g1

0x6e29,	// (0x00048c58) list_single_choice_list_pane_t1_ParamLimits

0x6e29,	// (0x00048c58) list_single_choice_list_pane_t1

0xc328,	// (0x0004e157) choice_list_pane_g1

0xc330,	// (0x0004e15f) choice_list_pane_t1

0x09a2,	// (0x000427d1) input_focus_pane_cp11

0x103f,	// (0x00042e6e) title_pane_stacon_g2_ParamLimits

0x103f,	// (0x00042e6e) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000514f3) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000514f3) title_pane_stacon_g

0x94ff,	// (0x0004b32e) cursor_press_pane

0x7989,	// (0x000497b8) popup_fep_hwr_window_ParamLimits

0x7989,	// (0x000497b8) popup_fep_hwr_window

0x7a01,	// (0x00049830) popup_fep_vkb_window_ParamLimits

0x7a01,	// (0x00049830) popup_fep_vkb_window

0xc33e,	// (0x0004e16d) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00051974) fep_vkb_side_pane_g_ParamLimits

0x84a5,	// (0x0004a2d4) fep_hwr_candidate_pane_ParamLimits

0x84a5,	// (0x0004a2d4) fep_hwr_candidate_pane

0x84cf,	// (0x0004a2fe) fep_hwr_side_pane_ParamLimits

0x84cf,	// (0x0004a2fe) fep_hwr_side_pane

0x84ef,	// (0x0004a31e) fep_hwr_top_pane_ParamLimits

0x84ef,	// (0x0004a31e) fep_hwr_top_pane

0x8507,	// (0x0004a336) fep_hwr_write_pane_ParamLimits

0x8507,	// (0x0004a336) fep_hwr_write_pane

0xfb45,	// (0x00051974) fep_vkb_side_pane_g

0xc346,	// (0x0004e175) fep_hwr_top_pane_g1

0xc358,	// (0x0004e187) fep_hwr_top_pane_g2

0x8533,	// (0x0004a362) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00051950) fep_hwr_top_pane_g

0x8548,	// (0x0004a377) fep_hwr_top_text_pane

0x11f7,	// (0x00043026) fep_hwr_top_text_pane_g1

0xc38e,	// (0x0004e1bd) fep_hwr_top_text_pane_t1

0x863e,	// (0x0004a46d) fep_hwr_candidate_pane_g1

0xc5d3,	// (0x0004e402) fep_vkb_keypad_pane_g3_ParamLimits

0xc5d3,	// (0x0004e402) fep_vkb_keypad_pane_g3

0xc5fb,	// (0x0004e42a) fep_vkb_keypad_pane_g4_ParamLimits

0xc5fb,	// (0x0004e42a) fep_vkb_keypad_pane_g4

0xc66a,	// (0x0004e499) fep_vkb_bottom_pane_g2_ParamLimits

0xc66a,	// (0x0004e499) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x0005197b) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x0005197b) fep_vkb_bottom_pane_g

0xc2ea,	// (0x0004e119) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00051985) cell_vkb_side_pane_g

0xc6f5,	// (0x0004e524) cell_vkb_side_pane_t1

0xc703,	// (0x0004e532) cell_vkb_side_pane_t1_copy1

0xc2ea,	// (0x0004e119) bg_fep_vkb_candidate_pane_g2

0xc82f,	// (0x0004e65e) cell_vkb_candidate_pane_ParamLimits

0xc39c,	// (0x0004e1cb) aid_size_cell_vkb_ParamLimits

0xc39c,	// (0x0004e1cb) aid_size_cell_vkb

0xc82f,	// (0x0004e65e) cell_vkb_candidate_pane

0x8658,	// (0x0004a487) bg_popup_fep_shadow_pane_g1

0xc42a,	// (0x0004e259) fep_vkb_bottom_pane_ParamLimits

0xc42a,	// (0x0004e259) fep_vkb_bottom_pane

0xc460,	// (0x0004e28f) fep_vkb_candidate_pane_ParamLimits

0xc460,	// (0x0004e28f) fep_vkb_candidate_pane

0xc47c,	// (0x0004e2ab) fep_vkb_keypad_pane_ParamLimits

0xc47c,	// (0x0004e2ab) fep_vkb_keypad_pane

0xc4bb,	// (0x0004e2ea) fep_vkb_side_pane_ParamLimits

0xc4bb,	// (0x0004e2ea) fep_vkb_side_pane

0xc4f7,	// (0x0004e326) fep_vkb_top_pane_ParamLimits

0xc4f7,	// (0x0004e326) fep_vkb_top_pane

0xc52c,	// (0x0004e35b) fep_vkb_top_pane_g1_ParamLimits

0xc52c,	// (0x0004e35b) fep_vkb_top_pane_g1

0xc53b,	// (0x0004e36a) fep_vkb_top_pane_g2_ParamLimits

0xc53b,	// (0x0004e36a) fep_vkb_top_pane_g2

0xc54a,	// (0x0004e379) fep_vkb_top_pane_g3_ParamLimits

0xc54a,	// (0x0004e379) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x0005196b) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x0005196b) fep_vkb_top_pane_g

0xc568,	// (0x0004e397) fep_vkb_top_text_pane_ParamLimits

0xc568,	// (0x0004e397) fep_vkb_top_text_pane

0xc579,	// (0x0004e3a8) fep_vkb_side_pane_g1_ParamLimits

0xc579,	// (0x0004e3a8) fep_vkb_side_pane_g1

0xc5c2,	// (0x0004e3f1) grid_vkb_side_pane_ParamLimits

0xc5c2,	// (0x0004e3f1) grid_vkb_side_pane

0x8660,	// (0x0004a48f) bg_popup_fep_shadow_pane_g2

0x8669,	// (0x0004a498) bg_popup_fep_shadow_pane_g3

0x8671,	// (0x0004a4a0) bg_popup_fep_shadow_pane_g4

0x867a,	// (0x0004a4a9) bg_popup_fep_shadow_pane_g5

0x8684,	// (0x0004a4b3) bg_popup_fep_shadow_pane_g6

0x868c,	// (0x0004a4bb) bg_popup_fep_shadow_pane_g7

0x0e3c,	// (0x00042c6b) bg_popup_fep_shadow_pane_g8

0xc619,	// (0x0004e448) grid_vkb_keypad_number_pane_ParamLimits

0xc619,	// (0x0004e448) grid_vkb_keypad_number_pane

0xc629,	// (0x0004e458) grid_vkb_keypad_pane_ParamLimits

0xc629,	// (0x0004e458) grid_vkb_keypad_pane

0xc64f,	// (0x0004e47e) fep_vkb_bottom_pane_g1_ParamLimits

0xc64f,	// (0x0004e47e) fep_vkb_bottom_pane_g1

0xc678,	// (0x0004e4a7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc678,	// (0x0004e4a7) grid_vkb_keypad_bottom_left_pane

0xc68d,	// (0x0004e4bc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc68d,	// (0x0004e4bc) grid_vkb_keypad_bottom_right_pane

0xc6a2,	// (0x0004e4d1) fep_vkb_top_text_pane_g1

0xc6bd,	// (0x0004e4ec) fep_vkb_top_text_pane_t1

0xc6d2,	// (0x0004e501) cell_vkb_side_pane_ParamLimits

0xc6d2,	// (0x0004e501) cell_vkb_side_pane

0xc2ea,	// (0x0004e119) cell_vkb_side_pane_g1

0xc711,	// (0x0004e540) cell_vkb_keypad_pane_ParamLimits

0xc711,	// (0x0004e540) cell_vkb_keypad_pane

0xc786,	// (0x0004e5b5) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00051998) bg_popup_fep_shadow_pane_g

0xc2ea,	// (0x0004e119) cell_hwr_side_pane_g1

0xc2ea,	// (0x0004e119) cell_hwr_side_pane_g2

0xc790,	// (0x0004e5bf) cell_vkb_keypad_pane_t1

0xc79e,	// (0x0004e5cd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc79e,	// (0x0004e5cd) cell_vkb_keypad_bottom_left_pane

0xc7bb,	// (0x0004e5ea) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7bb,	// (0x0004e5ea) cell_vkb_keypad_bottom_right_pane

0xc2ea,	// (0x0004e119) cell_vkb_keypad_bottom_left_pane_g1

0xc2ea,	// (0x0004e119) cell_vkb_keypad_bottom_right_pane_g1

0xc7f4,	// (0x0004e623) cell_vkb_keypad_number_pane_ParamLimits

0xc7f4,	// (0x0004e623) cell_vkb_keypad_number_pane

0xc813,	// (0x0004e642) cell_vkb_keypad_number_pane_g1

0xc81d,	// (0x0004e64c) cell_vkb_keypad_number_pane_g2

0xc826,	// (0x0004e655) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x0005198a) cell_vkb_keypad_number_pane_g

0xc790,	// (0x0004e5bf) cell_vkb_keypad_number_pane_t1

0xc84a,	// (0x0004e679) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00051985) cell_hwr_side_pane_g

0xc863,	// (0x0004e692) cell_hwr_side_pane_t1

0x869e,	// (0x0004a4cd) cell_hwr_side_pane_t1_copy1

0xc55a,	// (0x0004e389) cell_hwr_candidate_pane_g1

0x86ac,	// (0x0004a4db) cell_hwr_candidate_pane_t1

0xc2ea,	// (0x0004e119) cell_vkb_candidate_pane_g2

0xc8e9,	// (0x0004e718) cell_vkb_candidate_pane_t1

0x846c,	// (0x0004a29b) bg_popup_fep_shadow_pane_ParamLimits

0x846c,	// (0x0004a29b) bg_popup_fep_shadow_pane

0x279f,	// (0x000445ce) bg_fep_hwr_top_pane_g4

0xc36a,	// (0x0004e199) bg_hwr_side_pane_g1_ParamLimits

0xc36a,	// (0x0004e199) bg_hwr_side_pane_g1

0x8584,	// (0x0004a3b3) cell_hwr_side_pane_ParamLimits

0x8584,	// (0x0004a3b3) cell_hwr_side_pane

0x85bf,	// (0x0004a3ee) fep_hwr_write_pane_g1_ParamLimits

0x85bf,	// (0x0004a3ee) fep_hwr_write_pane_g1

0x85cc,	// (0x0004a3fb) fep_hwr_write_pane_g2_ParamLimits

0x85cc,	// (0x0004a3fb) fep_hwr_write_pane_g2

0x85d9,	// (0x0004a408) fep_hwr_write_pane_g3_ParamLimits

0x85d9,	// (0x0004a408) fep_hwr_write_pane_g3

0x85e7,	// (0x0004a416) fep_hwr_write_pane_g4_ParamLimits

0x85e7,	// (0x0004a416) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00051957) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00051957) fep_hwr_write_pane_g

0x279f,	// (0x000445ce) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x279f,	// (0x000445ce) bg_fep_hwr_candidate_pane_g2

0x85fc,	// (0x0004a42b) cell_hwr_candidate_pane_ParamLimits

0x85fc,	// (0x0004a42b) cell_hwr_candidate_pane

0x863e,	// (0x0004a46d) fep_hwr_candidate_pane_g1_ParamLimits

0xc3ca,	// (0x0004e1f9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc3ca,	// (0x0004e1f9) bg_popup_fep_shadow_pane_cp2

0xc55a,	// (0x0004e389) fep_vkb_top_pane_g4_ParamLimits

0xc55a,	// (0x0004e389) fep_vkb_top_pane_g4

0xc5a0,	// (0x0004e3cf) fep_vkb_side_pane_g2_ParamLimits

0xc5a0,	// (0x0004e3cf) fep_vkb_side_pane_g2

0x57fe,	// (0x0004762d) list_setting_pane_t4_ParamLimits

0x57fe,	// (0x0004762d) list_setting_pane_t4

0x5898,	// (0x000476c7) list_setting_number_pane_t5_ParamLimits

0x5898,	// (0x000476c7) list_setting_number_pane_t5

0x71b3,	// (0x00048fe2) list_double_heading_pane_cp2_ParamLimits

0x71b3,	// (0x00048fe2) list_double_heading_pane_cp2

0xbca8,	// (0x0004dad7) list_double_heading_pane_g1_cp2_ParamLimits

0xbca8,	// (0x0004dad7) list_double_heading_pane_g1_cp2

0xc8f7,	// (0x0004e726) list_double_heading_pane_g2_cp2_ParamLimits

0xc8f7,	// (0x0004e726) list_double_heading_pane_g2_cp2

0xc90b,	// (0x0004e73a) list_double_heading_pane_t1_cp2_ParamLimits

0xc90b,	// (0x0004e73a) list_double_heading_pane_t1_cp2

0xc921,	// (0x0004e750) list_double_heading_pane_t2_cp2_ParamLimits

0xc921,	// (0x0004e750) list_double_heading_pane_t2_cp2

0x099a,	// (0x000427c9) aid_value_unit2

0x660d,	// (0x0004843c) popup_preview_fixed_window

0x0b3c,	// (0x0004296b) bg_popup_preview_window_pane_cp02

0xc933,	// (0x0004e762) list_preview_fixed_pane

0xc979,	// (0x0004e7a8) list_empty_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_empty_pane_fp

0xc979,	// (0x0004e7a8) list_single_cale_day_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_single_cale_day_pane_fp

0xc979,	// (0x0004e7a8) list_single_graphic_heading_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_single_graphic_heading_pane_fp

0xc979,	// (0x0004e7a8) list_single_graphic_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_single_graphic_pane_fp

0xc979,	// (0x0004e7a8) list_single_heading_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_single_heading_pane_fp

0xc979,	// (0x0004e7a8) list_single_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_single_pane_fp

0xc98f,	// (0x0004e7be) list_single_pane_fp_g1_ParamLimits

0xc98f,	// (0x0004e7be) list_single_pane_fp_g1

0xc99b,	// (0x0004e7ca) list_single_pane_fp_g2_ParamLimits

0xc99b,	// (0x0004e7ca) list_single_pane_fp_g2

0xc9a7,	// (0x0004e7d6) list_single_pane_fp_g3_ParamLimits

0xc9a7,	// (0x0004e7d6) list_single_pane_fp_g3

0xc9bb,	// (0x0004e7ea) list_single_pane_fp_g4_ParamLimits

0xc9bb,	// (0x0004e7ea) list_single_pane_fp_g4

0x0003,

0xfb8a,	// (0x000519b9) list_single_pane_fp_g_ParamLimits

0xfb8a,	// (0x000519b9) list_single_pane_fp_g

0x6083,	// (0x00047eb2) list_single_pane_fp_t1_ParamLimits

0x6083,	// (0x00047eb2) list_single_pane_fp_t1

0x609a,	// (0x00047ec9) list_single_graphic_pane_fp_g1_ParamLimits

0x609a,	// (0x00047ec9) list_single_graphic_pane_fp_g1

0xc98f,	// (0x0004e7be) list_single_graphic_pane_fp_g2_ParamLimits

0xc98f,	// (0x0004e7be) list_single_graphic_pane_fp_g2

0xc99b,	// (0x0004e7ca) list_single_graphic_pane_fp_g3_ParamLimits

0xc99b,	// (0x0004e7ca) list_single_graphic_pane_fp_g3

0xc9a7,	// (0x0004e7d6) list_single_graphic_pane_fp_g4_ParamLimits

0xc9a7,	// (0x0004e7d6) list_single_graphic_pane_fp_g4

0xc9bb,	// (0x0004e7ea) list_single_graphic_pane_fp_g5_ParamLimits

0xc9bb,	// (0x0004e7ea) list_single_graphic_pane_fp_g5

0x0004,

0xfb93,	// (0x000519c2) list_single_graphic_pane_fp_g_ParamLimits

0xfb93,	// (0x000519c2) list_single_graphic_pane_fp_g

0x60a6,	// (0x00047ed5) list_single_graphic_pane_fp_t1_ParamLimits

0x60a6,	// (0x00047ed5) list_single_graphic_pane_fp_t1

0x609a,	// (0x00047ec9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x609a,	// (0x00047ec9) list_single_graphic_heading_pane_fp_g1

0xc98f,	// (0x0004e7be) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc98f,	// (0x0004e7be) list_single_graphic_heading_pane_fp_g2

0xc99b,	// (0x0004e7ca) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc99b,	// (0x0004e7ca) list_single_graphic_heading_pane_fp_g3

0xc9a7,	// (0x0004e7d6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc9a7,	// (0x0004e7d6) list_single_graphic_heading_pane_fp_g4

0xc9bb,	// (0x0004e7ea) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9bb,	// (0x0004e7ea) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000519c2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000519c2) list_single_graphic_heading_pane_fp_g

0x60bc,	// (0x00047eeb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x60bc,	// (0x00047eeb) list_single_graphic_heading_pane_fp_t1

0x60d2,	// (0x00047f01) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x60d2,	// (0x00047f01) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9e,	// (0x000519cd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9e,	// (0x000519cd) list_single_graphic_heading_pane_fp_t

0x60e4,	// (0x00047f13) list_single_cale_day_pane_fp_g1_ParamLimits

0x60e4,	// (0x00047f13) list_single_cale_day_pane_fp_g1

0xc9c7,	// (0x0004e7f6) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9c7,	// (0x0004e7f6) list_single_cale_day_pane_fp_g2

0x86ca,	// (0x0004a4f9) list_single_cale_day_pane_fp_g3_ParamLimits

0x86ca,	// (0x0004a4f9) list_single_cale_day_pane_fp_g3

0x86f2,	// (0x0004a521) list_single_cale_day_pane_fp_g4_ParamLimits

0x86f2,	// (0x0004a521) list_single_cale_day_pane_fp_g4

0x8716,	// (0x0004a545) list_single_cale_day_pane_fp_g5_ParamLimits

0x8716,	// (0x0004a545) list_single_cale_day_pane_fp_g5

0x0004,

0xfba3,	// (0x000519d2) list_single_cale_day_pane_fp_g_ParamLimits

0xfba3,	// (0x000519d2) list_single_cale_day_pane_fp_g

0x611c,	// (0x00047f4b) list_single_cale_day_pane_fp_t1_ParamLimits

0x611c,	// (0x00047f4b) list_single_cale_day_pane_fp_t1

0x6142,	// (0x00047f71) list_single_cale_day_pane_fp_t2_ParamLimits

0x6142,	// (0x00047f71) list_single_cale_day_pane_fp_t2

0x615b,	// (0x00047f8a) list_single_cale_day_pane_fp_t3_ParamLimits

0x615b,	// (0x00047f8a) list_single_cale_day_pane_fp_t3

0x0002,

0xfbae,	// (0x000519dd) list_single_cale_day_pane_fp_t_ParamLimits

0xfbae,	// (0x000519dd) list_single_cale_day_pane_fp_t

0xc98f,	// (0x0004e7be) list_empty_pane_fp_g1_ParamLimits

0xc98f,	// (0x0004e7be) list_empty_pane_fp_g1

0x6174,	// (0x00047fa3) list_empty_pane_fp_t1

0x6182,	// (0x00047fb1) list_empty_pane_fp_t2

0x0001,

0xfbb5,	// (0x000519e4) list_empty_pane_fp_t

0xc98f,	// (0x0004e7be) list_single_heading_pane_fp_g1_ParamLimits

0xc98f,	// (0x0004e7be) list_single_heading_pane_fp_g1

0xc99b,	// (0x0004e7ca) list_single_heading_pane_fp_g2_ParamLimits

0xc99b,	// (0x0004e7ca) list_single_heading_pane_fp_g2

0xc9a7,	// (0x0004e7d6) list_single_heading_pane_fp_g3_ParamLimits

0xc9a7,	// (0x0004e7d6) list_single_heading_pane_fp_g3

0x0002,

0xfbba,	// (0x000519e9) list_single_heading_pane_fp_g_ParamLimits

0xfbba,	// (0x000519e9) list_single_heading_pane_fp_g

0x6190,	// (0x00047fbf) list_single_heading_pane_fp_t1_ParamLimits

0x6190,	// (0x00047fbf) list_single_heading_pane_fp_t1

0x61a2,	// (0x00047fd1) list_single_heading_pane_fp_t2_ParamLimits

0x61a2,	// (0x00047fd1) list_single_heading_pane_fp_t2

0x0001,

0xfbc1,	// (0x000519f0) list_single_heading_pane_fp_t_ParamLimits

0xfbc1,	// (0x000519f0) list_single_heading_pane_fp_t

0x6e81,	// (0x00048cb0) aid_size_cell_fast

0x0b1f,	// (0x0004294e) soft_indicator_pane_cp1_t1

0x6e8a,	// (0x00048cb9) cell_app_pane_cp2_ParamLimits

0x6e8a,	// (0x00048cb9) cell_app_pane_cp2

0x848e,	// (0x0004a2bd) fep_hwr_candidate_drop_down_list_pane

0x27ad,	// (0x000445dc) fep_hwr_candidate_pane_g3_ParamLimits

0x27ad,	// (0x000445dc) fep_hwr_candidate_pane_g3

0x27ba,	// (0x000445e9) fep_hwr_candidate_pane_g4_ParamLimits

0x27ba,	// (0x000445e9) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00051964) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00051964) fep_hwr_candidate_pane_g

0xc44f,	// (0x0004e27e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc44f,	// (0x0004e27e) fep_vkb_candidate_drop_down_list_pane

0xc852,	// (0x0004e681) fep_vkb_candidate_pane_g3

0xc85a,	// (0x0004e689) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00051991) fep_vkb_candidate_pane_g

0xc55a,	// (0x0004e389) cell_hwr_candidate_pane_g1_ParamLimits

0xc871,	// (0x0004e6a0) cell_hwr_candidate_pane_g3_ParamLimits

0xc871,	// (0x0004e6a0) cell_hwr_candidate_pane_g3

0xc892,	// (0x0004e6c1) cell_hwr_candidate_pane_g4_ParamLimits

0xc892,	// (0x0004e6c1) cell_hwr_candidate_pane_g4

0x0002,

0xfb7c,	// (0x000519ab) cell_hwr_candidate_pane_g_ParamLimits

0xfb7c,	// (0x000519ab) cell_hwr_candidate_pane_g

0xc8b3,	// (0x0004e6e2) cell_vkb_candidate_pane_g3_ParamLimits

0xc8b3,	// (0x0004e6e2) cell_vkb_candidate_pane_g3

0xc8ce,	// (0x0004e6fd) cell_vkb_candidate_pane_g4_ParamLimits

0xc8ce,	// (0x0004e6fd) cell_vkb_candidate_pane_g4

0xc9d3,	// (0x0004e802) cell_app_pane_cp2_g1_ParamLimits

0xc9d3,	// (0x0004e802) cell_app_pane_cp2_g1

0xc9f1,	// (0x0004e820) cell_app_pane_cp2_g2_ParamLimits

0xc9f1,	// (0x0004e820) cell_app_pane_cp2_g2

0x0001,

0xfbc6,	// (0x000519f5) cell_app_pane_cp2_g_ParamLimits

0xfbc6,	// (0x000519f5) cell_app_pane_cp2_g

0xc9fd,	// (0x0004e82c) cell_app_pane_cp2_t1_ParamLimits

0xc9fd,	// (0x0004e82c) cell_app_pane_cp2_t1

0x0dc4,	// (0x00042bf3) grid_highlight_pane_cp1_ParamLimits

0x0dc4,	// (0x00042bf3) grid_highlight_pane_cp1

0x873a,	// (0x0004a569) cell_hwr_candidate_pane_cp1_ParamLimits

0x873a,	// (0x0004a569) cell_hwr_candidate_pane_cp1

0xc55a,	// (0x0004e389) fep_hwr_candidate_drop_down_list_pane_g1

0xca0f,	// (0x0004e83e) fep_hwr_candidate_drop_down_list_pane_g2

0xca1c,	// (0x0004e84b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x000519fa) fep_hwr_candidate_drop_down_list_pane_g

0x8759,	// (0x0004a588) fep_hwr_candidate_drop_down_list_scroll_pane

0x8762,	// (0x0004a591) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8762,	// (0x0004a591) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x876f,	// (0x0004a59e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x876f,	// (0x0004a59e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x877c,	// (0x0004a5ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x877c,	// (0x0004a5ab) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8b3,	// (0x0004e6e2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8b3,	// (0x0004e6e2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc8ce,	// (0x0004e6fd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8ce,	// (0x0004e6fd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8789,	// (0x0004a5b8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8789,	// (0x0004a5b8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x87a4,	// (0x0004a5d3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x87a4,	// (0x0004a5d3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x87bf,	// (0x0004a5ee) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x87bf,	// (0x0004a5ee) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00051a01) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00051a01) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca29,	// (0x0004e858) cell_vkb_candidate_pane_cp1_ParamLimits

0xca29,	// (0x0004e858) cell_vkb_candidate_pane_cp1

0xc55a,	// (0x0004e389) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) fep_vkb_candidate_drop_down_list_pane_g1

0xca0f,	// (0x0004e83e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca0f,	// (0x0004e83e) fep_vkb_candidate_drop_down_list_pane_g2

0xca1c,	// (0x0004e84b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca1c,	// (0x0004e84b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x000519fa) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x000519fa) fep_vkb_candidate_drop_down_list_pane_g

0xca49,	// (0x0004e878) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca49,	// (0x0004e878) fep_vkb_candidate_drop_down_list_scroll_pane

0xca56,	// (0x0004e885) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca56,	// (0x0004e885) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca63,	// (0x0004e892) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca63,	// (0x0004e892) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca6f,	// (0x0004e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca6f,	// (0x0004e89e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc871,	// (0x0004e6a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc871,	// (0x0004e6a0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc892,	// (0x0004e6c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc892,	// (0x0004e6c1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca7b,	// (0x0004e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca7b,	// (0x0004e8aa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca9c,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca9c,	// (0x0004e8cb) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcabd,	// (0x0004e8ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcabd,	// (0x0004e8ec) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe3,	// (0x00051a12) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe3,	// (0x00051a12) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6727,	// (0x00048556) title_pane_g1_ParamLimits

0x6734,	// (0x00048563) title_pane_g2_ParamLimits

0xf54e,	// (0x0005137d) title_pane_g_ParamLimits

0x11ef,	// (0x0004301e) aid_call2_pane

0x11e7,	// (0x00043016) aid_call_pane

0x11f7,	// (0x00043026) popup_clock_analogue_window_g1

0x11f7,	// (0x00043026) popup_clock_analogue_window_g2

0x7194,	// (0x00048fc3) popup_clock_analogue_window_g3

0x719d,	// (0x00048fcc) popup_clock_analogue_window_g4

0x09ac,	// (0x000427db) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00051522) popup_clock_analogue_window_g

0x71a5,	// (0x00048fd4) popup_clock_analogue_window_t1

0x71dd,	// (0x0004900c) clock_digital_number_pane_ParamLimits

0x71dd,	// (0x0004900c) clock_digital_number_pane

0x71e9,	// (0x00049018) clock_digital_number_pane_cp02_ParamLimits

0x71e9,	// (0x00049018) clock_digital_number_pane_cp02

0x71f5,	// (0x00049024) clock_digital_number_pane_cp03_ParamLimits

0x71f5,	// (0x00049024) clock_digital_number_pane_cp03

0x7201,	// (0x00049030) clock_digital_number_pane_cp04_ParamLimits

0x7201,	// (0x00049030) clock_digital_number_pane_cp04

0x720d,	// (0x0004903c) clock_digital_separator_pane_ParamLimits

0x720d,	// (0x0004903c) clock_digital_separator_pane

0x7219,	// (0x00049048) popup_clock_digital_window_t1_ParamLimits

0x7219,	// (0x00049048) popup_clock_digital_window_t1

0x09ac,	// (0x000427db) clock_digital_number_pane_g1

0x09ac,	// (0x000427db) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0005152d) clock_digital_number_pane_g

0x09ac,	// (0x000427db) clock_digital_separator_pane_g1

0x09ac,	// (0x000427db) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0005152d) clock_digital_separator_pane_g

0x9867,	// (0x0004b696) aid_fill_nsta_ParamLimits

0x99b3,	// (0x0004b7e2) indicator_nsta_pane_ParamLimits

0x9b2c,	// (0x0004b95b) popup_clock_analogue_window

0x9b2c,	// (0x0004b95b) popup_clock_digital_window

0x0a12,	// (0x00042841) grid_indicator_nsta_pane_ParamLimits

0xbcfb,	// (0x0004db2a) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x000518e4) clock_nsta_pane_t

0x70bf,	// (0x00048eee) aid_size_max_handle

0x70c9,	// (0x00048ef8) aid_size_min_handle

0x94ff,	// (0x0004b32e) editor_scroll_pane

0xcad8,	// (0x0004e907) ex_editor_pane

0x0ee3,	// (0x00042d12) scroll_pane_cp13

0x0d6c,	// (0x00042b9b) scroll_pane_cp14

0x1226,	// (0x00043055) scroll_pane_cp36

0x71c7,	// (0x00048ff6) list_single_graphic_hl_pane_cp2_ParamLimits

0x71c7,	// (0x00048ff6) list_single_graphic_hl_pane_cp2

0x5d78,	// (0x00047ba7) list_single_graphic_hl_pane_ParamLimits

0x5d78,	// (0x00047ba7) list_single_graphic_hl_pane

0x61b8,	// (0x00047fe7) aid_size_min_hl_cp1

0xcae0,	// (0x0004e90f) list_highlight_pane_cp34_ParamLimits

0xcae0,	// (0x0004e90f) list_highlight_pane_cp34

0xcaf1,	// (0x0004e920) list_single_graphic_hl_pane_g1_ParamLimits

0xcaf1,	// (0x0004e920) list_single_graphic_hl_pane_g1

0x61c1,	// (0x00047ff0) list_single_graphic_hl_pane_g2_ParamLimits

0x61c1,	// (0x00047ff0) list_single_graphic_hl_pane_g2

0x61c1,	// (0x00047ff0) list_single_graphic_hl_pane_g3_ParamLimits

0x61c1,	// (0x00047ff0) list_single_graphic_hl_pane_g3

0x9470,	// (0x0004b29f) list_single_graphic_hl_pane_g4_ParamLimits

0x9470,	// (0x0004b29f) list_single_graphic_hl_pane_g4

0x61cd,	// (0x00047ffc) list_single_graphic_hl_pane_g5_ParamLimits

0x61cd,	// (0x00047ffc) list_single_graphic_hl_pane_g5

0x0004,

0xfbf4,	// (0x00051a23) list_single_graphic_hl_pane_g_ParamLimits

0xfbf4,	// (0x00051a23) list_single_graphic_hl_pane_g

0x61e1,	// (0x00048010) list_single_graphic_hl_pane_t1_ParamLimits

0x61e1,	// (0x00048010) list_single_graphic_hl_pane_t1

0xcafe,	// (0x0004e92d) aid_size_min_hl_cp2

0xcb07,	// (0x0004e936) list_highlight_pane_cp34_cp2_ParamLimits

0xcb07,	// (0x0004e936) list_highlight_pane_cp34_cp2

0xcaf1,	// (0x0004e920) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcaf1,	// (0x0004e920) list_single_graphic_hl_pane_g1_cp2

0xcb14,	// (0x0004e943) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb14,	// (0x0004e943) list_single_graphic_hl_pane_g2_cp2

0xcb20,	// (0x0004e94f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb20,	// (0x0004e94f) list_single_graphic_hl_pane_g3_cp2

0x9438,	// (0x0004b267) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9438,	// (0x0004b267) list_single_graphic_hl_pane_g4_cp2

0xcb2e,	// (0x0004e95d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb2e,	// (0x0004e95d) list_single_graphic_hl_pane_g5_cp2

0x778f,	// (0x000495be) control_pane_g4_ParamLimits

0x778f,	// (0x000495be) control_pane_g4

0x9845,	// (0x0004b674) bg_popup_sub_pane_cp10_ParamLimits

0xc2f4,	// (0x0004e123) list_choice_list_pane_ParamLimits

0xc303,	// (0x0004e132) scroll_pane_cp23

0x0b3c,	// (0x0004296b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc933,	// (0x0004e762) list_preview_fixed_pane_ParamLimits

0xc949,	// (0x0004e778) list_preview_fixed_pane_cp_ParamLimits

0xc949,	// (0x0004e778) list_preview_fixed_pane_cp

0xc955,	// (0x0004e784) popup_preview_fixed_window_g1_ParamLimits

0xc955,	// (0x0004e784) popup_preview_fixed_window_g1

0xc961,	// (0x0004e790) popup_preview_fixed_window_g2_ParamLimits

0xc961,	// (0x0004e790) popup_preview_fixed_window_g2

0x0002,

0xfb83,	// (0x000519b2) popup_preview_fixed_window_g_ParamLimits

0xfb83,	// (0x000519b2) popup_preview_fixed_window_g

0x6f99,	// (0x00048dc8) aid_navi_side_left_pane_ParamLimits

0x6fae,	// (0x00048ddd) aid_navi_side_right_pane_ParamLimits

0x6fc6,	// (0x00048df5) navi_icon_pane_stacon_ParamLimits

0x6fda,	// (0x00048e09) navi_navi_pane_stacon_ParamLimits

0x6fc6,	// (0x00048df5) navi_text_pane_stacon_ParamLimits

0x09a2,	// (0x000427d1) main_text_info_pane

0xcb58,	// (0x0004e987) listscroll_text_info_pane

0xcb60,	// (0x0004e98f) list_text_info_pane_ParamLimits

0xcb60,	// (0x0004e98f) list_text_info_pane

0xcb6f,	// (0x0004e99e) scroll_pane_cp24_ParamLimits

0xcb6f,	// (0x0004e99e) scroll_pane_cp24

0xcb8d,	// (0x0004e9bc) list_text_info_pane_t1_ParamLimits

0xcb8d,	// (0x0004e9bc) list_text_info_pane_t1

0x78fd,	// (0x0004972c) popup_fast_swap2_window_ParamLimits

0x78fd,	// (0x0004972c) popup_fast_swap2_window

0xcbc1,	// (0x0004e9f0) aid_size_cell_fast2

0x09a2,	// (0x000427d1) bg_popup_window_pane_cp17

0xa1b9,	// (0x0004bfe8) heading_pane_cp2

0x0c70,	// (0x00042a9f) listscroll_fast2_pane

0xcbcb,	// (0x0004e9fa) grid_fast2_pane

0xcbd5,	// (0x0004ea04) listscroll_fast2_pane_g1

0xcbdd,	// (0x0004ea0c) listscroll_fast2_pane_g2

0x0001,

0xfbff,	// (0x00051a2e) listscroll_fast2_pane_g

0x0ee3,	// (0x00042d12) scroll_pane_cp26

0xcbe7,	// (0x0004ea16) cell_fast2_pane_ParamLimits

0xcbe7,	// (0x0004ea16) cell_fast2_pane

0xcbfc,	// (0x0004ea2b) cell_fast2_pane_g1

0xcc05,	// (0x0004ea34) cell_fast2_pane_g2

0xcc0e,	// (0x0004ea3d) cell_fast2_pane_g3

0x0002,

0xfc04,	// (0x00051a33) cell_fast2_pane_g

0x0ca3,	// (0x00042ad2) grid_highlight_pane_cp9

0x0cb8,	// (0x00042ae7) main_eswt_pane_ParamLimits

0x0cb8,	// (0x00042ae7) main_eswt_pane

0xcb84,	// (0x0004e9b3) list_single_text_info_pane

0xcc16,	// (0x0004ea45) eswt_ctrl_button_pane

0xcc16,	// (0x0004ea45) eswt_ctrl_canvas_pane

0xcc1e,	// (0x0004ea4d) eswt_ctrl_combo_pane

0xcc16,	// (0x0004ea45) eswt_ctrl_default_pane

0xcc16,	// (0x0004ea45) eswt_ctrl_label_pane

0xcc26,	// (0x0004ea55) eswt_ctrl_wait_pane

0xcc2e,	// (0x0004ea5d) eswt_shell_pane

0x09a2,	// (0x000427d1) listscroll_eswt_app_pane

0xcc4e,	// (0x0004ea7d) popup_eswt_tasktip_window_ParamLimits

0xcc4e,	// (0x0004ea7d) popup_eswt_tasktip_window

0x9dc6,	// (0x0004bbf5) bg_popup_window_pane_cp18

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_ParamLimits

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_ParamLimits

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_ParamLimits

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_ParamLimits

0xcc86,	// (0x0004eab5) eswt_control_pane_g4

0x0003,

0xfc0b,	// (0x00051a3a) eswt_control_pane_g_ParamLimits

0xfc0b,	// (0x00051a3a) eswt_control_pane_g

0x0dc4,	// (0x00042bf3) bg_button_pane_ParamLimits

0x0dc4,	// (0x00042bf3) bg_button_pane

0x0cb8,	// (0x00042ae7) common_borders_pane_copy2_ParamLimits

0x0cb8,	// (0x00042ae7) common_borders_pane_copy2

0xcc93,	// (0x0004eac2) control_button_pane_g1_ParamLimits

0xcc93,	// (0x0004eac2) control_button_pane_g1

0xcc9f,	// (0x0004eace) control_button_pane_g2_ParamLimits

0xcc9f,	// (0x0004eace) control_button_pane_g2

0xccab,	// (0x0004eada) control_button_pane_g3_ParamLimits

0xccab,	// (0x0004eada) control_button_pane_g3

0x0002,

0xfc14,	// (0x00051a43) control_button_pane_g_ParamLimits

0xfc14,	// (0x00051a43) control_button_pane_g

0xccbf,	// (0x0004eaee) control_button_pane_t1

0xcccd,	// (0x0004eafc) control_button_pane_t2

0x0001,

0xfc1b,	// (0x00051a4a) control_button_pane_t

0x9d52,	// (0x0004bb81) bg_button_pane_g1

0x9d5a,	// (0x0004bb89) bg_button_pane_g2

0x9d62,	// (0x0004bb91) bg_button_pane_g3

0x9d6a,	// (0x0004bb99) bg_button_pane_g4

0x9d72,	// (0x0004bba1) bg_button_pane_g5

0x9d7a,	// (0x0004bba9) bg_button_pane_g6

0x9d82,	// (0x0004bbb1) bg_button_pane_g7

0x9d8a,	// (0x0004bbb9) bg_button_pane_g8

0x9d92,	// (0x0004bbc1) bg_button_pane_g9

0x0008,

0xf861,	// (0x00051690) bg_button_pane_g

0xc2af,	// (0x0004e0de) common_borders_pane_ParamLimits

0xc2af,	// (0x0004e0de) common_borders_pane

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy1_ParamLimits

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy1

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy1_ParamLimits

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy1

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy1_ParamLimits

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy1

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy1_ParamLimits

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy1

0xc2ea,	// (0x0004e119) bg_eswt_ctrl_canvas_pane_g1

0xc2af,	// (0x0004e0de) common_borders_pane_cp2_ParamLimits

0xc2af,	// (0x0004e0de) common_borders_pane_cp2

0xc2af,	// (0x0004e0de) common_borders_pane_cp3_ParamLimits

0xc2af,	// (0x0004e0de) common_borders_pane_cp3

0xccdb,	// (0x0004eb0a) separator_horizontal_pane

0xcce3,	// (0x0004eb12) separator_vertical_pane

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy2_ParamLimits

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy2

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy2_ParamLimits

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy2

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy2_ParamLimits

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy2

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy2_ParamLimits

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy2

0x09a2,	// (0x000427d1) common_borders_pane_cp4

0xccec,	// (0x0004eb1b) separator_horizontal_pane_g1

0xccf5,	// (0x0004eb24) separator_horizontal_pane_g2

0xccfe,	// (0x0004eb2d) separator_horizontal_pane_g3

0x0002,

0xfc20,	// (0x00051a4f) separator_horizontal_pane_g

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy3_ParamLimits

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy3

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy3_ParamLimits

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy3

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy3_ParamLimits

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy3

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy3_ParamLimits

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy3

0x09a2,	// (0x000427d1) common_borders_pane_cp5

0xcd07,	// (0x0004eb36) separator_vertical_pane_g1

0xcd10,	// (0x0004eb3f) separator_vertical_pane_g2

0xcd19,	// (0x0004eb48) separator_vertical_pane_g3

0x0002,

0xfc27,	// (0x00051a56) separator_vertical_pane_g

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy4_ParamLimits

0xcc5f,	// (0x0004ea8e) eswt_control_pane_g1_copy4

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy4_ParamLimits

0xcc6c,	// (0x0004ea9b) eswt_control_pane_g2_copy4

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy4_ParamLimits

0xcc79,	// (0x0004eaa8) eswt_control_pane_g3_copy4

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy4_ParamLimits

0xcc86,	// (0x0004eab5) eswt_control_pane_g4_copy4

0xcd22,	// (0x0004eb51) eswt_ctrl_combo_button_pane

0xcd2a,	// (0x0004eb59) eswt_ctrl_input_pane

0xcd32,	// (0x0004eb61) popup_choice_list_window_cp70

0xcd3a,	// (0x0004eb69) eswt_ctrl_input_pane_t1

0x09a2,	// (0x000427d1) input_focus_pane_cp70

0xc2af,	// (0x0004e0de) bg_button_pane_cp70_ParamLimits

0xc2af,	// (0x0004e0de) bg_button_pane_cp70

0xcd48,	// (0x0004eb77) eswt_ctrl_combo_button_pane_g1

0xcd50,	// (0x0004eb7f) wait_bar_pane_cp70

0x9dc6,	// (0x0004bbf5) bg_popup_window_pane_cp70_ParamLimits

0x9dc6,	// (0x0004bbf5) bg_popup_window_pane_cp70

0xcd58,	// (0x0004eb87) popup_eswt_tasktip_window_t1

0xcd6e,	// (0x0004eb9d) wait_bar_pane_cp71_ParamLimits

0xcd6e,	// (0x0004eb9d) wait_bar_pane_cp71

0xcd7a,	// (0x0004eba9) grid_eswt_app_pane

0x10ca,	// (0x00042ef9) scroll_pane_cp70

0xcd83,	// (0x0004ebb2) cell_eswt_app_pane_ParamLimits

0xcd83,	// (0x0004ebb2) cell_eswt_app_pane

0xcdb3,	// (0x0004ebe2) cell_eswt_app_pane_g1_ParamLimits

0xcdb3,	// (0x0004ebe2) cell_eswt_app_pane_g1

0xcde2,	// (0x0004ec11) cell_eswt_app_pane_g2_ParamLimits

0xcde2,	// (0x0004ec11) cell_eswt_app_pane_g2

0x0001,

0xfc2e,	// (0x00051a5d) cell_eswt_app_pane_g_ParamLimits

0xfc2e,	// (0x00051a5d) cell_eswt_app_pane_g

0xce06,	// (0x0004ec35) cell_eswt_app_pane_t1_ParamLimits

0xce06,	// (0x0004ec35) cell_eswt_app_pane_t1

0xce38,	// (0x0004ec67) grid_highlight_pane_cp70_ParamLimits

0xce38,	// (0x0004ec67) grid_highlight_pane_cp70

0x7634,	// (0x00049463) set_content_pane_g1

0x97a6,	// (0x0004b5d5) status_small_volume_pane

0x87da,	// (0x0004a609) status_small_volume_pane_g1

0x87e2,	// (0x0004a611) volume_small2_pane

0x87eb,	// (0x0004a61a) volume_small2_pane_g1

0x87f4,	// (0x0004a623) volume_small2_pane_g2

0x87fd,	// (0x0004a62c) volume_small2_pane_g3

0x8806,	// (0x0004a635) volume_small2_pane_g4

0x880f,	// (0x0004a63e) volume_small2_pane_g5

0x8818,	// (0x0004a647) volume_small2_pane_g6

0x8821,	// (0x0004a650) volume_small2_pane_g7

0x882a,	// (0x0004a659) volume_small2_pane_g8

0x8833,	// (0x0004a662) volume_small2_pane_g9

0x883c,	// (0x0004a66b) volume_small2_pane_g10

0x0009,

0xfc33,	// (0x00051a62) volume_small2_pane_g

0xc6a2,	// (0x0004e4d1) fep_vkb_top_text_pane_g1_ParamLimits

0xc6bd,	// (0x0004e4ec) fep_vkb_top_text_pane_t1_ParamLimits

0xc96d,	// (0x0004e79c) popup_preview_fixed_window_g3_ParamLimits

0xc96d,	// (0x0004e79c) popup_preview_fixed_window_g3

0x7dac,	// (0x00049bdb) popup_toolbar_trans_pane

0xb0f0,	// (0x0004cf1f) aid_height_set_list_ParamLimits

0xb101,	// (0x0004cf30) aid_size_parent_ParamLimits

0x9845,	// (0x0004b674) list_highlight_pane_cp2_ParamLimits

0x7634,	// (0x00049463) set_content_pane_g1_ParamLimits

0x8247,	// (0x0004a076) list_single_image_pane_ParamLimits

0x8247,	// (0x0004a076) list_single_image_pane

0xce44,	// (0x0004ec73) aid_size_cell_image_ParamLimits

0xce44,	// (0x0004ec73) aid_size_cell_image

0xce51,	// (0x0004ec80) grid_single_image_pane_ParamLimits

0xce51,	// (0x0004ec80) grid_single_image_pane

0xc99b,	// (0x0004e7ca) list_single_image_pane_g1_ParamLimits

0xc99b,	// (0x0004e7ca) list_single_image_pane_g1

0xc9a7,	// (0x0004e7d6) list_single_image_pane_g2_ParamLimits

0xc9a7,	// (0x0004e7d6) list_single_image_pane_g2

0x0001,

0xfc48,	// (0x00051a77) list_single_image_pane_g_ParamLimits

0xfc48,	// (0x00051a77) list_single_image_pane_g

0xce5f,	// (0x0004ec8e) list_single_image_pane_t1_ParamLimits

0xce5f,	// (0x0004ec8e) list_single_image_pane_t1

0xce75,	// (0x0004eca4) cell_image_list_pane_ParamLimits

0xce75,	// (0x0004eca4) cell_image_list_pane

0xce89,	// (0x0004ecb8) cell_image_list_pane_g1

0xce92,	// (0x0004ecc1) cell_image_list_pane_g2

0x0001,

0xfc4d,	// (0x00051a7c) cell_image_list_pane_g

0xce9b,	// (0x0004ecca) aid_size_cell_tb_trans_pane

0x0dc4,	// (0x00042bf3) bg_tb_trans_pane

0xcead,	// (0x0004ecdc) grid_tb_trans_pane

0x9d52,	// (0x0004bb81) bg_tb_trans_pane_g1

0x9d5a,	// (0x0004bb89) bg_tb_trans_pane_g2

0x9d62,	// (0x0004bb91) bg_tb_trans_pane_g3

0x9d6a,	// (0x0004bb99) bg_tb_trans_pane_g4

0x9d72,	// (0x0004bba1) bg_tb_trans_pane_g5

0x9d8a,	// (0x0004bbb9) bg_tb_trans_pane_g6

0x9d92,	// (0x0004bbc1) bg_tb_trans_pane_g7

0x9d7a,	// (0x0004bba9) bg_tb_trans_pane_g8

0x9d82,	// (0x0004bbb1) bg_tb_trans_pane_g9

0x0008,

0xfc52,	// (0x00051a81) bg_tb_trans_pane_g

0xcec1,	// (0x0004ecf0) cell_toolbar_trans_pane_ParamLimits

0xcec1,	// (0x0004ecf0) cell_toolbar_trans_pane

0xc2ea,	// (0x0004e119) cell_toolbar_trans_pane_g1

0xbebb,	// (0x0004dcea) list_form2_midp_pane_t1

0xbec9,	// (0x0004dcf8) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x0005192a) list_form2_midp_pane_t

0xbed7,	// (0x0004dd06) scroll_pane_cp51_ParamLimits

0xc093,	// (0x0004dec2) form2_midp_wait_pane_g1

0xc09c,	// (0x0004decb) form2_midp_wait_pane_g2

0xc0a5,	// (0x0004ded4) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0005193f) form2_midp_wait_pane_g

0x0a12,	// (0x00042841) list_highlight_pane_cp21_ParamLimits

0xc0ed,	// (0x0004df1c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0fc,	// (0x0004df2b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x81e8,	// (0x0004a017) list_single_2graphic_im_pane_ParamLimits

0x81e8,	// (0x0004a017) list_single_2graphic_im_pane

0xcee7,	// (0x0004ed16) list_single_2graphic_im_pane_g1_ParamLimits

0xcee7,	// (0x0004ed16) list_single_2graphic_im_pane_g1

0xcef8,	// (0x0004ed27) list_single_2graphic_im_pane_g2_ParamLimits

0xcef8,	// (0x0004ed27) list_single_2graphic_im_pane_g2

0xcf04,	// (0x0004ed33) list_single_2graphic_im_pane_g3_ParamLimits

0xcf04,	// (0x0004ed33) list_single_2graphic_im_pane_g3

0x0003,

0xfc65,	// (0x00051a94) list_single_2graphic_im_pane_g_ParamLimits

0xfc65,	// (0x00051a94) list_single_2graphic_im_pane_g

0xcf24,	// (0x0004ed53) list_single_2graphic_im_pane_t1_ParamLimits

0xcf24,	// (0x0004ed53) list_single_2graphic_im_pane_t1

0xc979,	// (0x0004e7a8) list_single_graphic_2heading_pane_fp_ParamLimits

0xc979,	// (0x0004e7a8) list_single_graphic_2heading_pane_fp

0x609a,	// (0x00047ec9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x609a,	// (0x00047ec9) list_single_graphic_2heading_pane_fp_g1

0xc98f,	// (0x0004e7be) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc98f,	// (0x0004e7be) list_single_graphic_2heading_pane_fp_g2

0xc99b,	// (0x0004e7ca) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc99b,	// (0x0004e7ca) list_single_graphic_2heading_pane_fp_g3

0xc9a7,	// (0x0004e7d6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc9a7,	// (0x0004e7d6) list_single_graphic_2heading_pane_fp_g4

0xc9bb,	// (0x0004e7ea) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9bb,	// (0x0004e7ea) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb93,	// (0x000519c2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb93,	// (0x000519c2) list_single_graphic_2heading_pane_fp_g

0x61f7,	// (0x00048026) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x61f7,	// (0x00048026) list_single_graphic_2heading_pane_fp_t1

0x60d2,	// (0x00047f01) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x60d2,	// (0x00047f01) list_single_graphic_2heading_pane_fp_t2

0x620d,	// (0x0004803c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x620d,	// (0x0004803c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6e,	// (0x00051a9d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6e,	// (0x00051a9d) list_single_graphic_2heading_pane_fp_t

0xc376,	// (0x0004e1a5) fep_hwr_write_pane_g5_ParamLimits

0xc376,	// (0x0004e1a5) fep_hwr_write_pane_g5

0xc382,	// (0x0004e1b1) fep_hwr_write_pane_g6_ParamLimits

0xc382,	// (0x0004e1b1) fep_hwr_write_pane_g6

0xcc2e,	// (0x0004ea5d) eswt_shell_pane_ParamLimits

0x9dc6,	// (0x0004bbf5) bg_popup_window_pane_cp18_ParamLimits

0xb049,	// (0x0004ce78) heading_pane_cp70

0xcd58,	// (0x0004eb87) popup_eswt_tasktip_window_t1_ParamLimits

0x98bc,	// (0x0004b6eb) aid_touch_tab_arrow_left

0x98cb,	// (0x0004b6fa) aid_touch_tab_arrow_right

0x6745,	// (0x00048574) title_pane_g3_ParamLimits

0x6745,	// (0x00048574) title_pane_g3

0x0d8c,	// (0x00042bbb) set_value_pane_g1

0x7dac,	// (0x00049bdb) popup_toolbar_trans_pane_ParamLimits

0xce9b,	// (0x0004ecca) aid_size_cell_tb_trans_pane_ParamLimits

0x0dc4,	// (0x00042bf3) bg_tb_trans_pane_ParamLimits

0xcead,	// (0x0004ecdc) grid_tb_trans_pane_ParamLimits

0x0b3c,	// (0x0004296b) cont_note_pane_ParamLimits

0x0b3c,	// (0x0004296b) cont_note_pane

0x0cb8,	// (0x00042ae7) cont_snote2_single_text_pane_ParamLimits

0x0cb8,	// (0x00042ae7) cont_snote2_single_text_pane

0x0cb8,	// (0x00042ae7) cont_snote2_single_graphic_pane_ParamLimits

0x0cb8,	// (0x00042ae7) cont_snote2_single_graphic_pane

0xa3cc,	// (0x0004c1fb) cont_note_wait_pane_ParamLimits

0xa3cc,	// (0x0004c1fb) cont_note_wait_pane

0xa3cc,	// (0x0004c1fb) cont_note_image_pane_ParamLimits

0xa3cc,	// (0x0004c1fb) cont_note_image_pane

0xcf55,	// (0x0004ed84) popup_note2_window_g1_ParamLimits

0xcf55,	// (0x0004ed84) popup_note2_window_g1

0xcf86,	// (0x0004edb5) popup_note2_window_t1_ParamLimits

0xcf86,	// (0x0004edb5) popup_note2_window_t1

0xcfcb,	// (0x0004edfa) popup_note2_window_t2_ParamLimits

0xcfcb,	// (0x0004edfa) popup_note2_window_t2

0xd010,	// (0x0004ee3f) popup_note2_window_t3_ParamLimits

0xd010,	// (0x0004ee3f) popup_note2_window_t3

0xd055,	// (0x0004ee84) popup_note2_window_t4_ParamLimits

0xd055,	// (0x0004ee84) popup_note2_window_t4

0x0bc0,	// (0x000429ef) popup_note2_window_t5_ParamLimits

0x0bc0,	// (0x000429ef) popup_note2_window_t5

0x0004,

0xfc7a,	// (0x00051aa9) popup_note2_window_t_ParamLimits

0xfc7a,	// (0x00051aa9) popup_note2_window_t

0xd084,	// (0x0004eeb3) popup_note2_image_window_g1_ParamLimits

0xd084,	// (0x0004eeb3) popup_note2_image_window_g1

0xd090,	// (0x0004eebf) popup_note2_image_window_g2_ParamLimits

0xd090,	// (0x0004eebf) popup_note2_image_window_g2

0x0001,

0xfc85,	// (0x00051ab4) popup_note2_image_window_g_ParamLimits

0xfc85,	// (0x00051ab4) popup_note2_image_window_g

0xd0a2,	// (0x0004eed1) popup_note2_image_window_t1_ParamLimits

0xd0a2,	// (0x0004eed1) popup_note2_image_window_t1

0xd0ba,	// (0x0004eee9) popup_note2_image_window_t2_ParamLimits

0xd0ba,	// (0x0004eee9) popup_note2_image_window_t2

0xd0d2,	// (0x0004ef01) popup_note2_image_window_t3_ParamLimits

0xd0d2,	// (0x0004ef01) popup_note2_image_window_t3

0x0002,

0xfc8a,	// (0x00051ab9) popup_note2_image_window_t_ParamLimits

0xfc8a,	// (0x00051ab9) popup_note2_image_window_t

0xa3da,	// (0x0004c209) popup_note2_wait_window_g1_ParamLimits

0xa3da,	// (0x0004c209) popup_note2_wait_window_g1

0xa3e6,	// (0x0004c215) popup_note2_wait_window_g2_ParamLimits

0xa3e6,	// (0x0004c215) popup_note2_wait_window_g2

0xa3f2,	// (0x0004c221) popup_note2_wait_window_g3_ParamLimits

0xa3f2,	// (0x0004c221) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x00051672) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x00051672) popup_note2_wait_window_g

0xd0ee,	// (0x0004ef1d) popup_note2_wait_window_t1_ParamLimits

0xd0ee,	// (0x0004ef1d) popup_note2_wait_window_t1

0xd10c,	// (0x0004ef3b) popup_note2_wait_window_t2_ParamLimits

0xd10c,	// (0x0004ef3b) popup_note2_wait_window_t2

0xd12a,	// (0x0004ef59) popup_note2_wait_window_t3_ParamLimits

0xd12a,	// (0x0004ef59) popup_note2_wait_window_t3

0xd13c,	// (0x0004ef6b) popup_note2_wait_window_t4_ParamLimits

0xd13c,	// (0x0004ef6b) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x00051ac0) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x00051ac0) popup_note2_wait_window_t

0xd14e,	// (0x0004ef7d) wait_bar2_pane_ParamLimits

0xd14e,	// (0x0004ef7d) wait_bar2_pane

0xd166,	// (0x0004ef95) popup_snote2_single_text_window_g1_ParamLimits

0xd166,	// (0x0004ef95) popup_snote2_single_text_window_g1

0xd18e,	// (0x0004efbd) popup_snote2_single_text_window_t1_ParamLimits

0xd18e,	// (0x0004efbd) popup_snote2_single_text_window_t1

0xd1da,	// (0x0004f009) popup_snote2_single_text_window_t2_ParamLimits

0xd1da,	// (0x0004f009) popup_snote2_single_text_window_t2

0xd226,	// (0x0004f055) popup_snote2_single_text_window_t3_ParamLimits

0xd226,	// (0x0004f055) popup_snote2_single_text_window_t3

0xd267,	// (0x0004f096) popup_snote2_single_text_window_t4_ParamLimits

0xd267,	// (0x0004f096) popup_snote2_single_text_window_t4

0xd29d,	// (0x0004f0cc) popup_snote2_single_text_window_t5_ParamLimits

0xd29d,	// (0x0004f0cc) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x00051ac9) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x00051ac9) popup_snote2_single_text_window_t

0xd2c8,	// (0x0004f0f7) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2c8,	// (0x0004f0f7) popup_snote2_single_graphic_window_g1

0xd2f0,	// (0x0004f11f) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2f0,	// (0x0004f11f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x00051ad4) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x00051ad4) popup_snote2_single_graphic_window_g

0xd318,	// (0x0004f147) popup_snote2_single_graphic_window_t1_ParamLimits

0xd318,	// (0x0004f147) popup_snote2_single_graphic_window_t1

0xd364,	// (0x0004f193) popup_snote2_single_graphic_window_t2_ParamLimits

0xd364,	// (0x0004f193) popup_snote2_single_graphic_window_t2

0xd226,	// (0x0004f055) popup_snote2_single_graphic_window_t3_ParamLimits

0xd226,	// (0x0004f055) popup_snote2_single_graphic_window_t3

0xd267,	// (0x0004f096) popup_snote2_single_graphic_window_t4_ParamLimits

0xd267,	// (0x0004f096) popup_snote2_single_graphic_window_t4

0xd29d,	// (0x0004f0cc) popup_snote2_single_graphic_window_t5_ParamLimits

0xd29d,	// (0x0004f0cc) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x00051ad9) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x00051ad9) popup_snote2_single_graphic_window_t

0xbd94,	// (0x0004dbc3) clock_nsta_pane_cp2_t1

0xbd94,	// (0x0004dbc3) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00051900) clock_nsta_pane_cp2_t

0x59b4,	// (0x000477e3) form_field_data_wide_pane_g1_ParamLimits

0x0dd2,	// (0x00042c01) form_field_data_wide_pane_g2_ParamLimits

0x0dd2,	// (0x00042c01) form_field_data_wide_pane_g2

0x0dde,	// (0x00042c0d) form_field_data_wide_pane_g3_ParamLimits

0x0dde,	// (0x00042c0d) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000514a5) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000514a5) form_field_data_wide_pane_g

0xbc8b,	// (0x0004daba) grid_touch_3_pane_ParamLimits

0xbc8b,	// (0x0004daba) grid_touch_3_pane

0xd3b0,	// (0x0004f1df) cell_touch_3_pane_ParamLimits

0xd3b0,	// (0x0004f1df) cell_touch_3_pane

0xc2ea,	// (0x0004e119) cell_touch_3_pane_g1

0xc2ea,	// (0x0004e119) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00051985) cell_touch_3_pane_g

0x0bf2,	// (0x00042a21) cont_query_data_pane

0x0bfa,	// (0x00042a29) cont_query_data_pane_cp1

0xd3de,	// (0x0004f20d) button_value_adjust_pane_cp7

0xd3e6,	// (0x0004f215) query_popup_pane_cp3

0x1258,	// (0x00043087) bg_popup_sub_pane_cp22_ParamLimits

0x7293,	// (0x000490c2) navi_navi_volume_pane_cp2

0x72ab,	// (0x000490da) popup_side_volume_key_window_g2

0x72b7,	// (0x000490e6) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0005153b) popup_side_volume_key_window_g

0x72d1,	// (0x00049100) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00051542) popup_side_volume_key_window_t

0x7501,	// (0x00049330) popup_side_volume_key_window_ParamLimits

0x566c,	// (0x0004749b) list_double_graphic_pane_g4_ParamLimits

0x566c,	// (0x0004749b) list_double_graphic_pane_g4

0x8227,	// (0x0004a056) list_single_2heading_msg_pane_ParamLimits

0x8227,	// (0x0004a056) list_single_2heading_msg_pane

0x8845,	// (0x0004a674) list_single_2heading_msg_pane_g1_ParamLimits

0x8845,	// (0x0004a674) list_single_2heading_msg_pane_g1

0x6ce8,	// (0x00048b17) list_single_2heading_msg_pane_g2_ParamLimits

0x6ce8,	// (0x00048b17) list_single_2heading_msg_pane_g2

0x8851,	// (0x0004a680) list_single_2heading_msg_pane_g3_ParamLimits

0x8851,	// (0x0004a680) list_single_2heading_msg_pane_g3

0x885d,	// (0x0004a68c) list_single_2heading_msg_pane_g4_ParamLimits

0x885d,	// (0x0004a68c) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x00051ae4) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x00051ae4) list_single_2heading_msg_pane_g

0x622d,	// (0x0004805c) list_single_2heading_msg_pane_t1_ParamLimits

0x622d,	// (0x0004805c) list_single_2heading_msg_pane_t1

0x6255,	// (0x00048084) list_single_2heading_msg_pane_t2_ParamLimits

0x6255,	// (0x00048084) list_single_2heading_msg_pane_t2

0x6284,	// (0x000480b3) list_single_2heading_msg_pane_t3_ParamLimits

0x6284,	// (0x000480b3) list_single_2heading_msg_pane_t3

0x62bd,	// (0x000480ec) list_single_2heading_msg_pane_t4_ParamLimits

0x62bd,	// (0x000480ec) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x00051aed) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x00051aed) list_single_2heading_msg_pane_t

0x09c0,	// (0x000427ef) title_pane_g4_ParamLimits

0x09c0,	// (0x000427ef) title_pane_g4

0x6eea,	// (0x00048d19) title_pane_stacon_g3_ParamLimits

0x6eea,	// (0x00048d19) title_pane_stacon_g3

0xcf18,	// (0x0004ed47) list_single_2graphic_im_pane_g4_ParamLimits

0xcf18,	// (0x0004ed47) list_single_2graphic_im_pane_g4

0xae13,	// (0x0004cc42) popup_side_volume_key_window_cp

0xb5e6,	// (0x0004d415) main_idle_act2_pane_t1

0x7e9e,	// (0x00049ccd) toolbar_button_pane_g10

0x6cde,	// (0x00048b0d) popup_toolbar_window_cp1

0xbd85,	// (0x0004dbb4) clock_nsta_pane_cp_t1

0xbd85,	// (0x0004dbb4) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x000518fb) clock_nsta_pane_cp_t

0x7293,	// (0x000490c2) navi_navi_volume_pane_cp2_ParamLimits

0x729f,	// (0x000490ce) popup_side_volume_key_window_g1_ParamLimits

0x72ab,	// (0x000490da) popup_side_volume_key_window_g2_ParamLimits

0x72b7,	// (0x000490e6) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0005153b) popup_side_volume_key_window_g_ParamLimits

0x847a,	// (0x0004a2a9) fep_hwr_aid_pane

0x279f,	// (0x000445ce) bg_fep_hwr_top_pane_g4_ParamLimits

0xc346,	// (0x0004e175) fep_hwr_top_pane_g1_ParamLimits

0xc358,	// (0x0004e187) fep_hwr_top_pane_g2_ParamLimits

0x8533,	// (0x0004a362) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00051950) fep_hwr_top_pane_g_ParamLimits

0x8548,	// (0x0004a377) fep_hwr_top_text_pane_ParamLimits

0xabd6,	// (0x0004ca05) aid_touch_tab_arrow_arrow_2

0xabdf,	// (0x0004ca0e) aid_touch_tab_arrow_left_2

0x848e,	// (0x0004a2bd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x84c5,	// (0x0004a2f4) fep_hwr_prediction_pane

0xc4b1,	// (0x0004e2e0) fep_vkb_prediction_pane

0xc5ae,	// (0x0004e3dd) fep_vkb_side_pane_g3_ParamLimits

0xc5ae,	// (0x0004e3dd) fep_vkb_side_pane_g3

0xc55a,	// (0x0004e389) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xca0f,	// (0x0004e83e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca1c,	// (0x0004e84b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcb,	// (0x000519fa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd40b,	// (0x0004f23a) fep_hwr_prediction_pane_g1

0x8875,	// (0x0004a6a4) fep_hwr_prediction_pane_g2

0x887d,	// (0x0004a6ac) fep_hwr_prediction_pane_g3

0x8885,	// (0x0004a6b4) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00051af6) fep_hwr_prediction_pane_g

0xd40b,	// (0x0004f23a) fep_vkb_prediction_pane_g1

0xd415,	// (0x0004f244) fep_vkb_prediction_pane_g2

0xd41d,	// (0x0004f24c) fep_vkb_prediction_pane_g3

0xd425,	// (0x0004f254) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00051aff) fep_vkb_prediction_pane_g

0x8190,	// (0x00049fbf) slider_set_pane_g3

0x81a4,	// (0x00049fd3) slider_set_pane_g4

0x81bc,	// (0x00049feb) slider_set_pane_g5

0x8190,	// (0x00049fbf) slider_set_pane_g6

0x81d2,	// (0x0004a001) slider_set_pane_g7

0xb262,	// (0x0004d091) slider_form_pane_g3

0xb26b,	// (0x0004d09a) slider_form_pane_g4

0xb273,	// (0x0004d0a2) slider_form_pane_g5

0xb262,	// (0x0004d091) slider_form_pane_g6

0xb27b,	// (0x0004d0aa) slider_form_pane_g7

0xb891,	// (0x0004d6c0) slider_set_pane_vc_g3

0xb89a,	// (0x0004d6c9) slider_set_pane_vc_g4

0xb8a3,	// (0x0004d6d2) slider_set_pane_vc_g5

0xb891,	// (0x0004d6c0) slider_set_pane_vc_g6

0xb8ac,	// (0x0004d6db) slider_set_pane_vc_g7

0xba5e,	// (0x0004d88d) slider_form_pane_vc_g1

0xba67,	// (0x0004d896) slider_form_pane_vc_g2

0xba70,	// (0x0004d89f) slider_form_pane_vc_g3

0xba5e,	// (0x0004d88d) slider_form_pane_vc_g4

0xba79,	// (0x0004d8a8) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x000518cd) slider_form_pane_vc_g

0x09a2,	// (0x000427d1) main_idle_act3_pane

0xd42d,	// (0x0004f25c) ai3_links_pane

0xd436,	// (0x0004f265) popup_ai3_data_window_ParamLimits

0xd436,	// (0x0004f265) popup_ai3_data_window

0x09a2,	// (0x000427d1) grid_ai3_links_pane

0xd44e,	// (0x0004f27d) cell_ai3_links_pane_ParamLimits

0xd44e,	// (0x0004f27d) cell_ai3_links_pane

0xd466,	// (0x0004f295) bg_popup_sub_pane_cp11

0xd473,	// (0x0004f2a2) cell_ai3_links_pane_g1

0x09a2,	// (0x000427d1) bg_popup_sub_pane_cp12

0xd498,	// (0x0004f2c7) heading_ai3_data_pane

0xd4a0,	// (0x0004f2cf) list_ai3_gene_pane

0xd4ac,	// (0x0004f2db) popup_ai3_data_window_g1

0xd4b4,	// (0x0004f2e3) heading_ai3_data_pane_g1

0xd4bc,	// (0x0004f2eb) heading_ai3_data_pane_t1

0xd4ca,	// (0x0004f2f9) list_double_ai3_gene_pane_ParamLimits

0xd4ca,	// (0x0004f2f9) list_double_ai3_gene_pane

0xd4d7,	// (0x0004f306) list_single_ai3_gene_pane_ParamLimits

0xd4d7,	// (0x0004f306) list_single_ai3_gene_pane

0xc2af,	// (0x0004e0de) list_highlight_pane_cp7_ParamLimits

0xc2af,	// (0x0004e0de) list_highlight_pane_cp7

0xd4e4,	// (0x0004f313) list_single_a13_gene_pane_t1_ParamLimits

0xd4e4,	// (0x0004f313) list_single_a13_gene_pane_t1

0xd4fb,	// (0x0004f32a) list_single_ai3_gene_pane_g1

0xd504,	// (0x0004f333) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x00051b08) list_single_ai3_gene_pane_g

0xd50c,	// (0x0004f33b) list_double_ai3_gene_pane_g1_ParamLimits

0xd50c,	// (0x0004f33b) list_double_ai3_gene_pane_g1

0xd518,	// (0x0004f347) list_double_ai3_gene_pane_t1_ParamLimits

0xd518,	// (0x0004f347) list_double_ai3_gene_pane_t1

0xd534,	// (0x0004f363) list_double_ai3_gene_pane_t2_ParamLimits

0xd534,	// (0x0004f363) list_double_ai3_gene_pane_t2

0xd549,	// (0x0004f378) list_double_ai3_gene_pane_t3_ParamLimits

0xd549,	// (0x0004f378) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x00051b0d) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x00051b0d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6223,	// (0x00048052) aid_size_min_col_2

0xd3f7,	// (0x0004f226) aid_size_min_msg_ParamLimits

0xd3f7,	// (0x0004f226) aid_size_min_msg

0xc6ae,	// (0x0004e4dd) fep_vkb_top_text_pane_g2_ParamLimits

0xc6ae,	// (0x0004e4dd) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00051980) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00051980) fep_vkb_top_text_pane_g

0x09a2,	// (0x000427d1) main_hc_apps_shell_pane

0xd566,	// (0x0004f395) grid_hc_apps_pane_ParamLimits

0xd566,	// (0x0004f395) grid_hc_apps_pane

0xd575,	// (0x0004f3a4) list_hc_apps_pane

0xd57d,	// (0x0004f3ac) scroll_pane_cp37_ParamLimits

0xd57d,	// (0x0004f3ac) scroll_pane_cp37

0xd589,	// (0x0004f3b8) cell_hc_apps_pane_ParamLimits

0xd589,	// (0x0004f3b8) cell_hc_apps_pane

0xd637,	// (0x0004f466) cell_hc_apps_pane_g1_ParamLimits

0xd637,	// (0x0004f466) cell_hc_apps_pane_g1

0xd668,	// (0x0004f497) cell_hc_apps_pane_g2_ParamLimits

0xd668,	// (0x0004f497) cell_hc_apps_pane_g2

0xd684,	// (0x0004f4b3) cell_hc_apps_pane_g3_ParamLimits

0xd684,	// (0x0004f4b3) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x00051b14) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x00051b14) cell_hc_apps_pane_g

0xd6a6,	// (0x0004f4d5) cell_hc_apps_pane_t1_ParamLimits

0xd6a6,	// (0x0004f4d5) cell_hc_apps_pane_t1

0x0b3c,	// (0x0004296b) grid_highlight_pane_cp10_ParamLimits

0x0b3c,	// (0x0004296b) grid_highlight_pane_cp10

0xd6e6,	// (0x0004f515) list_single_hc_apps_pane_ParamLimits

0xd6e6,	// (0x0004f515) list_single_hc_apps_pane

0xd749,	// (0x0004f578) list_single_hc_apps_pane_g1

0x888d,	// (0x0004a6bc) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x00051b1b) list_single_hc_apps_pane_g

0x88a6,	// (0x0004a6d5) list_single_hc_apps_pane_g2_copy1

0x62e2,	// (0x00048111) list_single_hc_apps_pane_t1

0x0a12,	// (0x00042841) bg_set_opt_pane_cp_ParamLimits

0x67f5,	// (0x00048624) setting_slider_pane_t1_ParamLimits

0x680e,	// (0x0004863d) setting_slider_pane_t2_ParamLimits

0x6828,	// (0x00048657) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005138d) setting_slider_pane_t_ParamLimits

0x6840,	// (0x0004866f) slider_set_pane_ParamLimits

0x77a3,	// (0x000495d2) control_pane_g5_ParamLimits

0x77a3,	// (0x000495d2) control_pane_g5

0xb0b5,	// (0x0004cee4) slider_set_pane_g1_ParamLimits

0x8184,	// (0x00049fb3) slider_set_pane_g2_ParamLimits

0x8190,	// (0x00049fbf) slider_set_pane_g3_ParamLimits

0x81a4,	// (0x00049fd3) slider_set_pane_g4_ParamLimits

0x81bc,	// (0x00049feb) slider_set_pane_g5_ParamLimits

0x8190,	// (0x00049fbf) slider_set_pane_g6_ParamLimits

0x81d2,	// (0x0004a001) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0005178e) slider_set_pane_g_ParamLimits

0x75df,	// (0x0004940e) navi_icon_text_pane_ParamLimits

0x987d,	// (0x0004b6ac) aid_fill_nsta_2_ParamLimits

0x98bc,	// (0x0004b6eb) aid_touch_tab_arrow_left_ParamLimits

0x98cb,	// (0x0004b6fa) aid_touch_tab_arrow_right_ParamLimits

0x9938,	// (0x0004b767) clock_nsta_pane_ParamLimits

0xabb8,	// (0x0004c9e7) navi_icon_pane_g1_ParamLimits

0xabc4,	// (0x0004c9f3) navi_text_pane_t1_ParamLimits

0xbe95,	// (0x0004dcc4) navi_icon_text_pane_g1_ParamLimits

0xbea1,	// (0x0004dcd0) navi_icon_text_pane_t1_ParamLimits

0xd749,	// (0x0004f578) list_single_hc_apps_pane_g1_ParamLimits

0x888d,	// (0x0004a6bc) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x00051b1b) list_single_hc_apps_pane_g_ParamLimits

0x88a6,	// (0x0004a6d5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x62e2,	// (0x00048111) list_single_hc_apps_pane_t1_ParamLimits

0x6639,	// (0x00048468) popup_toolbar2_fixed_window_ParamLimits

0x6639,	// (0x00048468) popup_toolbar2_fixed_window

0x7da2,	// (0x00049bd1) popup_toolbar2_float_window

0x09a2,	// (0x000427d1) bg_popup_sub_pane_cp27

0xd762,	// (0x0004f591) grid_toolbar2_float_pane

0x09a2,	// (0x000427d1) bg_popup_sub_pane_cp26

0xd762,	// (0x0004f591) grid_toolbar2_fixed_pane

0xd76a,	// (0x0004f599) cell_toolbar2_fixed_pane_ParamLimits

0xd76a,	// (0x0004f599) cell_toolbar2_fixed_pane

0xd77a,	// (0x0004f5a9) cell_toolbar2_fixed_pane_g1

0x9cd2,	// (0x0004bb01) toolbar2_fixed_button_pane

0x9d52,	// (0x0004bb81) toolbar2_fixed_button_pane_g1

0x9d5a,	// (0x0004bb89) toolbar2_fixed_button_pane_g2

0x9d62,	// (0x0004bb91) toolbar2_fixed_button_pane_g3

0x9d6a,	// (0x0004bb99) toolbar2_fixed_button_pane_g4

0x9d72,	// (0x0004bba1) toolbar2_fixed_button_pane_g5

0x9d7a,	// (0x0004bba9) toolbar2_fixed_button_pane_g6

0x9d82,	// (0x0004bbb1) toolbar2_fixed_button_pane_g7

0x9d8a,	// (0x0004bbb9) toolbar2_fixed_button_pane_g8

0x9d92,	// (0x0004bbc1) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00051690) toolbar2_fixed_button_pane_g

0xd783,	// (0x0004f5b2) cell_toolbar2_float_pane_ParamLimits

0xd783,	// (0x0004f5b2) cell_toolbar2_float_pane

0xd794,	// (0x0004f5c3) cell_toolbar2_float_pane_g1

0x9cd2,	// (0x0004bb01) toolbar2_fixed_button_pane_cp

0xc418,	// (0x0004e247) fep_vkb_accented_list_pane_ParamLimits

0xc418,	// (0x0004e247) fep_vkb_accented_list_pane

0x8696,	// (0x0004a4c5) bg_popup_fep_shadow_pane_g9

0x94ff,	// (0x0004b32e) bg_popup_fep_shadow_pane_cp3

0x0eca,	// (0x00042cf9) list_accented_list_pane

0xd79d,	// (0x0004f5cc) list_single_accented_list_pane_ParamLimits

0xd79d,	// (0x0004f5cc) list_single_accented_list_pane

0x94ff,	// (0x0004b32e) list_highlight_pane_cp10

0xd7ae,	// (0x0004f5dd) list_single_accented_list_pane_t1

0x7cf2,	// (0x00049b21) popup_slider_window_ParamLimits

0x7cf2,	// (0x00049b21) popup_slider_window

0xd3ee,	// (0x0004f21d) aid_indentation_list_msg

0xd864,	// (0x0004f693) bg_popup_window_pane_cp19

0xd8ce,	// (0x0004f6fd) popup_slider_window_g1

0xd8ea,	// (0x0004f719) popup_slider_window_g2

0xd906,	// (0x0004f735) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x00051b20) popup_slider_window_g

0xd962,	// (0x0004f791) popup_slider_window_t1

0xd9d6,	// (0x0004f805) small_volume_slider_vertical_pane

0xc2ea,	// (0x0004e119) small_volume_slider_vertical_pane_g1

0xc2ea,	// (0x0004e119) small_volume_slider_vertical_pane_g2

0xd9f2,	// (0x0004f821) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x00051b32) small_volume_slider_vertical_pane_g

0x6409,	// (0x00048238) area_side_right_pane_ParamLimits

0x6409,	// (0x00048238) area_side_right_pane

0x88c2,	// (0x0004a6f1) aid_size_side_button_ParamLimits

0x88c2,	// (0x0004a6f1) aid_size_side_button

0x88d6,	// (0x0004a705) grid_sctrl_middle_pane_ParamLimits

0x88d6,	// (0x0004a705) grid_sctrl_middle_pane

0x88f5,	// (0x0004a724) sctrl_sk_bottom_pane

0x8906,	// (0x0004a735) sctrl_sk_top_pane

0x8918,	// (0x0004a747) aid_touch_sctrl_top

0x0b3c,	// (0x0004296b) bg_sctrl_sk_pane_ParamLimits

0x0b3c,	// (0x0004296b) bg_sctrl_sk_pane

0x8925,	// (0x0004a754) sctrl_sk_top_pane_g1

0x8932,	// (0x0004a761) sctrl_sk_top_pane_t1

0x8918,	// (0x0004a747) aid_touch_sctrl_bottom

0x0b3c,	// (0x0004296b) bg_sctrl_sk_pane_cp_ParamLimits

0x0b3c,	// (0x0004296b) bg_sctrl_sk_pane_cp

0x894d,	// (0x0004a77c) sctrl_sk_bottom_pane_g1

0x8932,	// (0x0004a761) sctrl_sk_bottom_pane_t1

0x8956,	// (0x0004a785) cell_sctrl_middle_pane_ParamLimits

0x8956,	// (0x0004a785) cell_sctrl_middle_pane

0x8971,	// (0x0004a7a0) aid_touch_sctrl_middle_ParamLimits

0x8971,	// (0x0004a7a0) aid_touch_sctrl_middle

0x0dc4,	// (0x00042bf3) bg_sctrl_middle_pane_ParamLimits

0x0dc4,	// (0x00042bf3) bg_sctrl_middle_pane

0xc55a,	// (0x0004e389) cell_sctrl_middle_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) cell_sctrl_middle_pane_g1

0x8983,	// (0x0004a7b2) cell_sctrl_middle_pane_g2_ParamLimits

0x8983,	// (0x0004a7b2) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x00051b3e) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x00051b3e) cell_sctrl_middle_pane_g

0x9d52,	// (0x0004bb81) bg_sctrl_middle_pane_g1

0x9d5a,	// (0x0004bb89) bg_sctrl_middle_pane_g2

0x9d62,	// (0x0004bb91) bg_sctrl_middle_pane_g3

0x9d6a,	// (0x0004bb99) bg_sctrl_middle_pane_g4

0x9d72,	// (0x0004bba1) bg_sctrl_middle_pane_g5

0x9d7a,	// (0x0004bba9) bg_sctrl_middle_pane_g6

0x9d82,	// (0x0004bbb1) bg_sctrl_middle_pane_g7

0x9d8a,	// (0x0004bbb9) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x00051b43) bg_sctrl_middle_pane_g

0x9d92,	// (0x0004bbc1) bg_sctrl_middle_pane_g8_copy1

0x9d52,	// (0x0004bb81) bg_sctrl_sk_pane_g1

0x9d5a,	// (0x0004bb89) bg_sctrl_sk_pane_g2

0x9d62,	// (0x0004bb91) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00051690) bg_sctrl_sk_pane_g

0x0d06,	// (0x00042b35) aid_size_touch_scroll_bar

0x9d6a,	// (0x0004bb99) bg_sctrl_sk_pane_g4

0x9d72,	// (0x0004bba1) bg_sctrl_sk_pane_g5

0x9d7a,	// (0x0004bba9) bg_sctrl_sk_pane_g6

0x9d82,	// (0x0004bbb1) bg_sctrl_sk_pane_g7

0x9d8a,	// (0x0004bbb9) bg_sctrl_sk_pane_g8

0x9d92,	// (0x0004bbc1) bg_sctrl_sk_pane_g9

0x795b,	// (0x0004978a) popup_fep_china_hwr2_fs_candidate_window

0x7965,	// (0x00049794) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7965,	// (0x00049794) popup_fep_china_hwr2_fs_control_window

0xc55a,	// (0x0004e389) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x00051b39) sctrl_sk_top_pane_g

0xd9fb,	// (0x0004f82a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9fb,	// (0x0004f82a) aid_fep_china_hwr2_fs_cell

0xda0d,	// (0x0004f83c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda0d,	// (0x0004f83c) bg_popup_fep_shadow_pane_cp4

0xda24,	// (0x0004f853) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda24,	// (0x0004f853) bg_popup_fep_shadow_pane_cp5

0xda36,	// (0x0004f865) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda36,	// (0x0004f865) popup_fep_china_hwr2_fs_control_bar_grid

0xda46,	// (0x0004f875) popup_fep_china_hwr2_fs_control_funtion_grid

0xda4e,	// (0x0004f87d) aid_fep_china_hwr2_fs_candi_cell

0x09a2,	// (0x000427d1) bg_popup_fep_shadow_pane_cp6

0xda58,	// (0x0004f887) popup_fep_china_hwr2_fs_candidate_grid

0xda62,	// (0x0004f891) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda62,	// (0x0004f891) cell_fep_china_hwr2_fs_funtion_grid

0xc2ea,	// (0x0004e119) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda7a,	// (0x0004f8a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda7a,	// (0x0004f8a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda88,	// (0x0004f8b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda88,	// (0x0004f8b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x00051b54) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x00051b54) cell_fep_china_hwr2_fs_funtion_grid_g

0xda9e,	// (0x0004f8cd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda9e,	// (0x0004f8cd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdab3,	// (0x0004f8e2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdab3,	// (0x0004f8e2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x00051b59) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x00051b59) cell_fep_china_hwr2_fs_funtion_grid_t

0xdacf,	// (0x0004f8fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdad7,	// (0x0004f906) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdadf,	// (0x0004f90e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x00051b5e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdae7,	// (0x0004f916) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdae7,	// (0x0004f916) cell_fep_china_hwr2_fs_candidate_grid

0xdb00,	// (0x0004f92f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb08,	// (0x0004f937) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2ea,	// (0x0004e119) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2ea,	// (0x0004e119) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00051985) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb10,	// (0x0004f93f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x994b,	// (0x0004b77a) clock_nsta_pane_cp_24_ParamLimits

0x994b,	// (0x0004b77a) clock_nsta_pane_cp_24

0x99c9,	// (0x0004b7f8) indicator_nsta_pane_cp_24_ParamLimits

0x99c9,	// (0x0004b7f8) indicator_nsta_pane_cp_24

0xaa34,	// (0x0004c863) heading_pane_g1

0x0001,

0xf8c6,	// (0x000516f5) heading_pane_g

0xb42f,	// (0x0004d25e) grid_sct_catagory_button_pane

0xb45f,	// (0x0004d28e) scroll_pane_cp5_ParamLimits

0xbee3,	// (0x0004dd12) button_value_adjust_pane_cp5_ParamLimits

0xbee3,	// (0x0004dd12) button_value_adjust_pane_cp5

0xbfc2,	// (0x0004ddf1) form2_midp_time_pane_ParamLimits

0xdb1e,	// (0x0004f94d) cell_sct_catagory_button_pane_ParamLimits

0xdb1e,	// (0x0004f94d) cell_sct_catagory_button_pane

0xc2af,	// (0x0004e0de) bg_button_pane_cp01_ParamLimits

0xc2af,	// (0x0004e0de) bg_button_pane_cp01

0xc2ea,	// (0x0004e119) cell_sct_catagory_button_pane_g1

0x7d31,	// (0x00049b60) popup_tb_extension_window

0xdb30,	// (0x0004f95f) aid_size_cell_ext_ParamLimits

0xdb30,	// (0x0004f95f) aid_size_cell_ext

0x0b3c,	// (0x0004296b) bg_tb_trans_pane_cp1_ParamLimits

0x0b3c,	// (0x0004296b) bg_tb_trans_pane_cp1

0xdb50,	// (0x0004f97f) grid_tb_ext_pane_ParamLimits

0xdb50,	// (0x0004f97f) grid_tb_ext_pane

0xdb80,	// (0x0004f9af) cell_tb_ext_pane_ParamLimits

0xdb80,	// (0x0004f9af) cell_tb_ext_pane

0xdb97,	// (0x0004f9c6) cell_tb_ext_pane_g1_ParamLimits

0xdb97,	// (0x0004f9c6) cell_tb_ext_pane_g1

0xdbb4,	// (0x0004f9e3) cell_tb_ext_pane_t1

0x0b3c,	// (0x0004296b) list_highlight_pane_cp11_ParamLimits

0x0b3c,	// (0x0004296b) list_highlight_pane_cp11

0x6658,	// (0x00048487) popup_uni_indicator_window_ParamLimits

0x6658,	// (0x00048487) popup_uni_indicator_window

0x0dc4,	// (0x00042bf3) bg_popup_sub_pane_cp14

0xdbd0,	// (0x0004f9ff) list_uniindi_pane

0xdbdc,	// (0x0004fa0b) uniindi_top_pane

0x0b3c,	// (0x0004296b) bg_uniindi_top_pane

0xdbfb,	// (0x0004fa2a) uniindi_top_pane_g1

0xdc11,	// (0x0004fa40) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x00051b65) uniindi_top_pane_g

0xdc3b,	// (0x0004fa6a) uniindi_top_pane_t1

0xdc65,	// (0x0004fa94) list_single_uniindi_pane_ParamLimits

0xdc65,	// (0x0004fa94) list_single_uniindi_pane

0xc2ea,	// (0x0004e119) bg_uniindi_top_pane_g1

0xdc77,	// (0x0004faa6) list_single_uniindi_pane_g1

0xdc8a,	// (0x0004fab9) list_single_uniindi_pane_t1

0x09a2,	// (0x000427d1) control_bg_pane

0xdcaf,	// (0x0004fade) bg_sctrl_sk_pane_cp1

0xdcb8,	// (0x0004fae7) bg_sctrl_sk_pane_cp2

0xdcc1,	// (0x0004faf0) control_bg_pane_g1

0xdcca,	// (0x0004faf9) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x00051b6e) control_bg_pane_g

0xbd3a,	// (0x0004db69) cell_indicator_nsta_pane_g1_ParamLimits

0xbd48,	// (0x0004db77) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x000518e9) cell_indicator_nsta_pane_g_ParamLimits

0x6070,	// (0x00047e9f) form2_midp_time_pane_t1_ParamLimits

0x0cb8,	// (0x00042ae7) main_idle_act4_pane_ParamLimits

0x0cb8,	// (0x00042ae7) main_idle_act4_pane

0x7d31,	// (0x00049b60) popup_tb_extension_window_ParamLimits

0xdb70,	// (0x0004f99f) tb_ext_find_pane_ParamLimits

0xdb70,	// (0x0004f99f) tb_ext_find_pane

0xdcd3,	// (0x0004fb02) ai_gene_pane_1_cp1

0x964a,	// (0x0004b479) ai_gene_pane_2_cp1

0xdcdb,	// (0x0004fb0a) list_single_idle_plugin_calendar_pane

0xdce4,	// (0x0004fb13) list_single_idle_plugin_notification_pane

0xdced,	// (0x0004fb1c) list_single_idle_plugin_player_pane

0xdcf6,	// (0x0004fb25) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcf6,	// (0x0004fb25) list_single_idle_plugin_shortcut_pane

0xdd18,	// (0x0004fb47) main_idle_act4_pane_t1

0xdd2a,	// (0x0004fb59) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x00051b73) main_idle_act4_pane_t

0xdd3c,	// (0x0004fb6b) middle_sk_idle_act4_pane_ParamLimits

0xdd3c,	// (0x0004fb6b) middle_sk_idle_act4_pane

0xdd52,	// (0x0004fb81) popup_clock_digital_analogue_window_cp2

0xdd6c,	// (0x0004fb9b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd6c,	// (0x0004fb9b) shortcut_wheel_idle_act4_pane

0xc2ea,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g1

0xc2ea,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g2

0xc2ea,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g3

0xc2ea,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g4

0xc2ea,	// (0x0004e119) shortcut_wheel_idle_act4_pane_g5

0xdd80,	// (0x0004fbaf) shortcut_wheel_idle_act4_pane_g6

0xdd88,	// (0x0004fbb7) shortcut_wheel_idle_act4_pane_g7

0xdd90,	// (0x0004fbbf) shortcut_wheel_idle_act4_pane_g8

0xdd98,	// (0x0004fbc7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x00051b78) shortcut_wheel_idle_act4_pane_g

0xc55a,	// (0x0004e389) middle_sk_idle_act4_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) middle_sk_idle_act4_pane_g1

0xddfc,	// (0x0004fc2b) middle_sk_idle_act4_pane_g2_ParamLimits

0xddfc,	// (0x0004fc2b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x00051b9b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x00051b9b) middle_sk_idle_act4_pane_g

0xde08,	// (0x0004fc37) middle_sk_idle_act4_pane_t1_ParamLimits

0xde08,	// (0x0004fc37) middle_sk_idle_act4_pane_t1

0xde25,	// (0x0004fc54) grid_ai_shortcut_pane_ParamLimits

0xde25,	// (0x0004fc54) grid_ai_shortcut_pane

0xde3e,	// (0x0004fc6d) list_highlight_pane_cp16_ParamLimits

0xde3e,	// (0x0004fc6d) list_highlight_pane_cp16

0xde4b,	// (0x0004fc7a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde4b,	// (0x0004fc7a) list_single_idle_plugin_shortcut_pane_g1

0xde57,	// (0x0004fc86) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde57,	// (0x0004fc86) list_single_idle_plugin_shortcut_pane_g2

0xde6f,	// (0x0004fc9e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde6f,	// (0x0004fc9e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x00051ba0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x00051ba0) list_single_idle_plugin_shortcut_pane_g

0xde82,	// (0x0004fcb1) cell_ai_shortcut_pane_ParamLimits

0xde82,	// (0x0004fcb1) cell_ai_shortcut_pane

0xdea6,	// (0x0004fcd5) cell_ai_shortcut_pane_g1_ParamLimits

0xdea6,	// (0x0004fcd5) cell_ai_shortcut_pane_g1

0xdcd3,	// (0x0004fb02) ai_gene_pane_1_cp2

0xdec8,	// (0x0004fcf7) ai_gene_pane_2_cp2

0xded0,	// (0x0004fcff) list_highlight_pane_cp15

0xded9,	// (0x0004fd08) list_single_idle_plugin_calendar_pane_g1

0xded0,	// (0x0004fcff) list_highlight_pane_cp17

0xdee1,	// (0x0004fd10) list_single_idle_plugin_calendar_pane_g1_copy1

0xdee9,	// (0x0004fd18) list_single_idle_plugin_player_pane_g1

0xb688,	// (0x0004d4b7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x00051ba7) list_single_idle_plugin_player_pane_g

0xdef1,	// (0x0004fd20) list_single_idle_plugin_player_pane_t1

0xdeff,	// (0x0004fd2e) list_single_idle_plugin_player_pane_t2

0xdf0d,	// (0x0004fd3c) list_single_idle_plugin_player_pane_t3

0xdf1b,	// (0x0004fd4a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x00051bac) list_single_idle_plugin_player_pane_t

0xdf29,	// (0x0004fd58) wait_bar_pane_cp15

0xdf31,	// (0x0004fd60) grid_ai_notification_pane

0xb688,	// (0x0004d4b7) list_single_idle_plugin_notification_pane_g1

0xdf3a,	// (0x0004fd69) cell_ai_notification_pane_ParamLimits

0xdf3a,	// (0x0004fd69) cell_ai_notification_pane

0xdf47,	// (0x0004fd76) cell_ai_notification_pane_g1

0xdf4f,	// (0x0004fd7e) cell_ai_notification_pane_t1

0xdf5d,	// (0x0004fd8c) tb_ext_find_button_pane

0xdf65,	// (0x0004fd94) tb_ext_find_pane_g1

0xdf6d,	// (0x0004fd9c) tb_ext_find_pane_t1

0x11f7,	// (0x00043026) tb_ext_find_button_pane_g1

0xdf7b,	// (0x0004fdaa) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x00051bb5) tb_ext_find_button_pane_g

0xdd18,	// (0x0004fb47) main_idle_act4_pane_t1_ParamLimits

0xdd2a,	// (0x0004fb59) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x00051b73) main_idle_act4_pane_t_ParamLimits

0xdd52,	// (0x0004fb81) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd60,	// (0x0004fb8f) sat_plugin_idle_act4_pane_ParamLimits

0xdd60,	// (0x0004fb8f) sat_plugin_idle_act4_pane

0xdf84,	// (0x0004fdb3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf84,	// (0x0004fdb3) sat_plugin_idle_act4_pane_t1

0xdf97,	// (0x0004fdc6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf97,	// (0x0004fdc6) sat_plugin_idle_act4_pane_t2

0xdfaa,	// (0x0004fdd9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfaa,	// (0x0004fdd9) sat_plugin_idle_act4_pane_t3

0xdfbd,	// (0x0004fdec) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfbd,	// (0x0004fdec) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x00051bba) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x00051bba) sat_plugin_idle_act4_pane_t

0x65a1,	// (0x000483d0) popup_battery_window_ParamLimits

0x65a1,	// (0x000483d0) popup_battery_window

0x0b3c,	// (0x0004296b) bg_popup_sub_pane_cp25_ParamLimits

0x0b3c,	// (0x0004296b) bg_popup_sub_pane_cp25

0xdfd0,	// (0x0004fdff) popup_battery_window_g1_ParamLimits

0xdfd0,	// (0x0004fdff) popup_battery_window_g1

0xdfdc,	// (0x0004fe0b) popup_battery_window_t1_ParamLimits

0xdfdc,	// (0x0004fe0b) popup_battery_window_t1

0xdfee,	// (0x0004fe1d) popup_battery_window_t2_ParamLimits

0xdfee,	// (0x0004fe1d) popup_battery_window_t2

0x0001,

0xfd94,	// (0x00051bc3) popup_battery_window_t_ParamLimits

0xfd94,	// (0x00051bc3) popup_battery_window_t

0x9513,	// (0x0004b342) midp_canvas_pane_ParamLimits

0x958c,	// (0x0004b3bb) midp_keypad_pane_ParamLimits

0x958c,	// (0x0004b3bb) midp_keypad_pane

0x9845,	// (0x0004b674) main_midp_pane_ParamLimits

0xbda3,	// (0x0004dbd2) signal_pane_g2_cp_ParamLimits

0xe00b,	// (0x0004fe3a) aid_size_cell_midp_keypad_ParamLimits

0xe00b,	// (0x0004fe3a) aid_size_cell_midp_keypad

0xe025,	// (0x0004fe54) midp_keyp_game_grid_pane_ParamLimits

0xe025,	// (0x0004fe54) midp_keyp_game_grid_pane

0xe045,	// (0x0004fe74) midp_keyp_rocker_pane_ParamLimits

0xe045,	// (0x0004fe74) midp_keyp_rocker_pane

0xe07e,	// (0x0004fead) midp_keyp_sk_left_pane_ParamLimits

0xe07e,	// (0x0004fead) midp_keyp_sk_left_pane

0xe0d8,	// (0x0004ff07) midp_keyp_sk_right_pane_ParamLimits

0xe0d8,	// (0x0004ff07) midp_keyp_sk_right_pane

0x09a2,	// (0x000427d1) bg_button_pane_cp03

0xe132,	// (0x0004ff61) midp_keyp_sk_left_pane_g1

0x09a2,	// (0x000427d1) bg_button_pane_cp04

0xe132,	// (0x0004ff61) midp_keyp_sk_right_pane_g1

0xc2ea,	// (0x0004e119) midp_keyp_rocker_pane_g1

0xe13b,	// (0x0004ff6a) keyp_game_cell_pane_ParamLimits

0xe13b,	// (0x0004ff6a) keyp_game_cell_pane

0x09a2,	// (0x000427d1) bg_button_pane_cp02

0xe14e,	// (0x0004ff7d) keyp_game_cell_pane_g1

0x65d7,	// (0x00048406) popup_fep_vkb2_window_ParamLimits

0x65d7,	// (0x00048406) popup_fep_vkb2_window

0x89a1,	// (0x0004a7d0) aid_size_cell_vkb2_ParamLimits

0x89a1,	// (0x0004a7d0) aid_size_cell_vkb2

0x89f5,	// (0x0004a824) popup_fep_vkb2_window_g1_ParamLimits

0x89f5,	// (0x0004a824) popup_fep_vkb2_window_g1

0x8a3d,	// (0x0004a86c) vkb2_area_bottom_pane_ParamLimits

0x8a3d,	// (0x0004a86c) vkb2_area_bottom_pane

0x8a89,	// (0x0004a8b8) vkb2_area_keypad_pane_ParamLimits

0x8a89,	// (0x0004a8b8) vkb2_area_keypad_pane

0x8acb,	// (0x0004a8fa) vkb2_area_top_pane_ParamLimits

0x8acb,	// (0x0004a8fa) vkb2_area_top_pane

0x8b45,	// (0x0004a974) vkb2_top_entry_pane_ParamLimits

0x8b45,	// (0x0004a974) vkb2_top_entry_pane

0x8b6f,	// (0x0004a99e) vkb2_top_grid_left_pane_ParamLimits

0x8b6f,	// (0x0004a99e) vkb2_top_grid_left_pane

0x8b8d,	// (0x0004a9bc) vkb2_top_grid_right_pane_ParamLimits

0x8b8d,	// (0x0004a9bc) vkb2_top_grid_right_pane

0x8bab,	// (0x0004a9da) vkb2_cell_keypad_pane_ParamLimits

0x8bab,	// (0x0004a9da) vkb2_cell_keypad_pane

0x8c7c,	// (0x0004aaab) vkb2_area_bottom_grid_pane_ParamLimits

0x8c7c,	// (0x0004aaab) vkb2_area_bottom_grid_pane

0x8ca2,	// (0x0004aad1) vkb2_area_bottom_pane_g1_ParamLimits

0x8ca2,	// (0x0004aad1) vkb2_area_bottom_pane_g1

0x8cc6,	// (0x0004aaf5) vkb2_area_bottom_pane_g2_ParamLimits

0x8cc6,	// (0x0004aaf5) vkb2_area_bottom_pane_g2

0x8cf4,	// (0x0004ab23) vkb2_area_bottom_pane_g3_ParamLimits

0x8cf4,	// (0x0004ab23) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x00051bc8) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x00051bc8) vkb2_area_bottom_pane_g

0x8d55,	// (0x0004ab84) vkb2_top_cell_left_pane_ParamLimits

0x8d55,	// (0x0004ab84) vkb2_top_cell_left_pane

0xe15f,	// (0x0004ff8e) vkb2_top_entry_pane_g1_ParamLimits

0xe15f,	// (0x0004ff8e) vkb2_top_entry_pane_g1

0xe16d,	// (0x0004ff9c) vkb2_top_entry_pane_t1_ParamLimits

0xe16d,	// (0x0004ff9c) vkb2_top_entry_pane_t1

0xe19f,	// (0x0004ffce) vkb2_top_entry_pane_t2_ParamLimits

0xe19f,	// (0x0004ffce) vkb2_top_entry_pane_t2

0xe1d1,	// (0x00050000) vkb2_top_entry_pane_t3_ParamLimits

0xe1d1,	// (0x00050000) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x00051bcf) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x00051bcf) vkb2_top_entry_pane_t

0x8da2,	// (0x0004abd1) vkb2_top_grid_right_pane_g1_ParamLimits

0x8da2,	// (0x0004abd1) vkb2_top_grid_right_pane_g1

0x8db8,	// (0x0004abe7) vkb2_top_grid_right_pane_g2_ParamLimits

0x8db8,	// (0x0004abe7) vkb2_top_grid_right_pane_g2

0x8dd0,	// (0x0004abff) vkb2_top_grid_right_pane_g3_ParamLimits

0x8dd0,	// (0x0004abff) vkb2_top_grid_right_pane_g3

0x8de8,	// (0x0004ac17) vkb2_top_grid_right_pane_g4_ParamLimits

0x8de8,	// (0x0004ac17) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x00051bd6) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x00051bd6) vkb2_top_grid_right_pane_g

0x8dfe,	// (0x0004ac2d) vkb2_top_cell_left_pane_g1

0x8e15,	// (0x0004ac44) vkb2_cell_keypad_pane_g1_ParamLimits

0x8e15,	// (0x0004ac44) vkb2_cell_keypad_pane_g1

0xe1f5,	// (0x00050024) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1f5,	// (0x00050024) vkb2_cell_keypad_pane_t1

0x8e23,	// (0x0004ac52) vkb2_cell_bottom_grid_pane_ParamLimits

0x8e23,	// (0x0004ac52) vkb2_cell_bottom_grid_pane

0x8e5c,	// (0x0004ac8b) vkb2_cell_bottom_grid_pane_g1

0xdda0,	// (0x0004fbcf) aid_call2_pane_cp02

0xdda8,	// (0x0004fbd7) aid_call_pane_cp02

0xddb0,	// (0x0004fbdf) clock_digital_number_pane_cp10

0xddb8,	// (0x0004fbe7) clock_digital_number_pane_cp11

0xddc0,	// (0x0004fbef) clock_digital_number_pane_cp12

0xddc8,	// (0x0004fbf7) clock_digital_number_pane_cp13

0xddd0,	// (0x0004fbff) clock_digital_separator_pane_cp10

0x11f7,	// (0x00043026) popup_clock_digital_analogue_window_cp2_g1

0x11f7,	// (0x00043026) popup_clock_digital_analogue_window_cp2_g2

0xddd8,	// (0x0004fc07) popup_clock_digital_analogue_window_cp2_g3

0x11f7,	// (0x00043026) popup_clock_digital_analogue_window_cp2_g4

0xddd8,	// (0x0004fc07) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x00051b8b) popup_clock_digital_analogue_window_cp2_g

0xdde0,	// (0x0004fc0f) popup_clock_digital_analogue_window_cp2_t1

0xddee,	// (0x0004fc1d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x00051b96) popup_clock_digital_analogue_window_cp2_t

0xc2ea,	// (0x0004e119) clock_digital_number_pane_cp10_g1

0xc2ea,	// (0x0004e119) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00051985) clock_digital_number_pane_cp10_g

0xc2ea,	// (0x0004e119) clock_digital_separator_pane_cp10_g1

0xc2ea,	// (0x0004e119) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00051985) clock_digital_separator_pane_cp10_g

0xdc1d,	// (0x0004fa4c) uniindi_top_pane_g3

0xdc2e,	// (0x0004fa5d) uniindi_top_pane_g4

0x8c36,	// (0x0004aa65) vkb2_row_keypad_pane_ParamLimits

0x8c36,	// (0x0004aa65) vkb2_row_keypad_pane

0x8e78,	// (0x0004aca7) vkb2_cell_t_keypad_pane_ParamLimits

0x8e78,	// (0x0004aca7) vkb2_cell_t_keypad_pane

0x8e88,	// (0x0004acb7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8e88,	// (0x0004acb7) vkb2_cell_t_keypad_pane_cp08

0x8e9b,	// (0x0004acca) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8e9b,	// (0x0004acca) vkb2_cell_t_keypad_pane_cp09

0x8eaf,	// (0x0004acde) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8eaf,	// (0x0004acde) vkb2_cell_t_keypad_pane_cp01

0x8ec0,	// (0x0004acef) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8ec0,	// (0x0004acef) vkb2_cell_t_keypad_pane_cp02

0x8ed1,	// (0x0004ad00) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8ed1,	// (0x0004ad00) vkb2_cell_t_keypad_pane_cp03

0x8ee2,	// (0x0004ad11) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8ee2,	// (0x0004ad11) vkb2_cell_t_keypad_pane_cp04

0x8ef3,	// (0x0004ad22) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8ef3,	// (0x0004ad22) vkb2_cell_t_keypad_pane_cp05

0x8f04,	// (0x0004ad33) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8f04,	// (0x0004ad33) vkb2_cell_t_keypad_pane_cp06

0x8f15,	// (0x0004ad44) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8f15,	// (0x0004ad44) vkb2_cell_t_keypad_pane_cp07

0x8f26,	// (0x0004ad55) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8f26,	// (0x0004ad55) vkb2_cell_t_keypad_pane_cp10

0xc55a,	// (0x0004e389) vkb2_cell_t_keypad_pane_g1

0xe20c,	// (0x0005003b) vkb2_cell_t_keypad_pane_t1

0x09a2,	// (0x000427d1) popup_grid_graphic2_window

0xe21e,	// (0x0005004d) aid_size_cell_graphic2_ParamLimits

0xe21e,	// (0x0005004d) aid_size_cell_graphic2

0xe256,	// (0x00050085) bg_popup_window_pane_cp21_ParamLimits

0xe256,	// (0x00050085) bg_popup_window_pane_cp21

0xe264,	// (0x00050093) graphic2_pages_pane_ParamLimits

0xe264,	// (0x00050093) graphic2_pages_pane

0xe2aa,	// (0x000500d9) grid_graphic2_control_pane_ParamLimits

0xe2aa,	// (0x000500d9) grid_graphic2_control_pane

0xe2e8,	// (0x00050117) grid_graphic2_pane_ParamLimits

0xe2e8,	// (0x00050117) grid_graphic2_pane

0xe35c,	// (0x0005018b) cell_graphic2_pane

0x09a2,	// (0x000427d1) main_comp_mode_pane

0xd4a0,	// (0x0004f2cf) list_ai3_gene_pane_ParamLimits

0xd864,	// (0x0004f693) bg_popup_window_pane_cp19_ParamLimits

0xd870,	// (0x0004f69f) bg_touch_area_indi_pane_ParamLimits

0xd870,	// (0x0004f69f) bg_touch_area_indi_pane

0xd886,	// (0x0004f6b5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd886,	// (0x0004f6b5) bg_touch_area_indi_pane_cp01

0xd89c,	// (0x0004f6cb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd89c,	// (0x0004f6cb) bg_touch_area_indi_pane_cp02

0xd8b4,	// (0x0004f6e3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8b4,	// (0x0004f6e3) bg_touch_area_indi_pane_cp03

0xd8ce,	// (0x0004f6fd) popup_slider_window_g1_ParamLimits

0xd8ea,	// (0x0004f719) popup_slider_window_g2_ParamLimits

0xd906,	// (0x0004f735) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x00051b20) popup_slider_window_g_ParamLimits

0xd962,	// (0x0004f791) popup_slider_window_t1_ParamLimits

0xd9d6,	// (0x0004f805) small_volume_slider_vertical_pane_ParamLimits

0xe35c,	// (0x0005018b) cell_graphic2_pane_ParamLimits

0xe3ab,	// (0x000501da) bg_button_pane_cp10_ParamLimits

0xe3ab,	// (0x000501da) bg_button_pane_cp10

0xe3be,	// (0x000501ed) bg_button_pane_cp11_ParamLimits

0xe3be,	// (0x000501ed) bg_button_pane_cp11

0xe3d1,	// (0x00050200) graphic2_pages_pane_g1_ParamLimits

0xe3d1,	// (0x00050200) graphic2_pages_pane_g1

0xe3ec,	// (0x0005021b) graphic2_pages_pane_g2_ParamLimits

0xe3ec,	// (0x0005021b) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x00051be4) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x00051be4) graphic2_pages_pane_g

0xe404,	// (0x00050233) graphic2_pages_pane_t1_ParamLimits

0xe404,	// (0x00050233) graphic2_pages_pane_t1

0xe41c,	// (0x0005024b) cell_graphic2_control_pane_ParamLimits

0xe41c,	// (0x0005024b) cell_graphic2_control_pane

0xe43a,	// (0x00050269) cell_graphic2_pane_g1_ParamLimits

0xe43a,	// (0x00050269) cell_graphic2_pane_g1

0xe447,	// (0x00050276) cell_graphic2_pane_g2_ParamLimits

0xe447,	// (0x00050276) cell_graphic2_pane_g2

0xe454,	// (0x00050283) cell_graphic2_pane_g3_ParamLimits

0xe454,	// (0x00050283) cell_graphic2_pane_g3

0xe461,	// (0x00050290) cell_graphic2_pane_g4_ParamLimits

0xe461,	// (0x00050290) cell_graphic2_pane_g4

0xe46e,	// (0x0005029d) cell_graphic2_pane_g5_ParamLimits

0xe46e,	// (0x0005029d) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x00051be9) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x00051be9) cell_graphic2_pane_g

0xe489,	// (0x000502b8) cell_graphic2_pane_t1_ParamLimits

0xe489,	// (0x000502b8) cell_graphic2_pane_t1

0x9dc6,	// (0x0004bbf5) grid_highlight_pane_cp11_ParamLimits

0x9dc6,	// (0x0004bbf5) grid_highlight_pane_cp11

0x0b3c,	// (0x0004296b) bg_button_pane_cp05

0xe4c0,	// (0x000502ef) cell_graphic2_control_pane_g1

0xc2ea,	// (0x0004e119) bg_touch_area_indi_pane_g1

0xe4e8,	// (0x00050317) aid_cmod_rocker_key_size

0xe4f2,	// (0x00050321) aid_cmode_itu_key_size

0xe51d,	// (0x0005034c) main_cmode_video_pane

0xe527,	// (0x00050356) main_comp_mode_itu_pane

0xe533,	// (0x00050362) main_comp_mode_rocker_pane

0xe53f,	// (0x0005036e) cell_cmode_rocker_pane_ParamLimits

0xe53f,	// (0x0005036e) cell_cmode_rocker_pane

0xe551,	// (0x00050380) cell_cmode_itu_pane_ParamLimits

0xe551,	// (0x00050380) cell_cmode_itu_pane

0x0dc4,	// (0x00042bf3) bg_button_pane_cp06_ParamLimits

0x0dc4,	// (0x00042bf3) bg_button_pane_cp06

0xc55a,	// (0x0004e389) cell_cmode_rocker_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) cell_cmode_rocker_pane_g1

0xda7a,	// (0x0004f8a9) cell_cmode_rocker_pane_g2_ParamLimits

0xda7a,	// (0x0004f8a9) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00051bf9) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00051bf9) cell_cmode_rocker_pane_g

0x09a2,	// (0x000427d1) bg_button_pane_cp07

0xe566,	// (0x00050395) cell_cmode_itu_pane_g1

0xe56f,	// (0x0005039e) cell_cmode_itu_pane_t1

0xe57d,	// (0x000503ac) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00051bfe) cell_cmode_itu_pane_t

0xdc9f,	// (0x0004face) aid_touch_ctrl_left

0xdca7,	// (0x0004fad6) aid_touch_ctrl_right

0x09a2,	// (0x000427d1) compa_mode_pane

0xe58b,	// (0x000503ba) aid_cmod_rocker_key_size_cp

0xe595,	// (0x000503c4) aid_cmode_itu_key_size_cp

0xe59f,	// (0x000503ce) compa_mode_pane_g1

0xe5a7,	// (0x000503d6) compa_mode_pane_g2

0xe5af,	// (0x000503de) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00051c03) compa_mode_pane_g

0xe5b7,	// (0x000503e6) main_comp_mode_itu_pane_cp

0xe5bf,	// (0x000503ee) main_comp_mode_rocker_pane_cp

0xe5c7,	// (0x000503f6) cell_cmode_itu_pane_cp_ParamLimits

0xe5c7,	// (0x000503f6) cell_cmode_itu_pane_cp

0xe5dc,	// (0x0005040b) cell_cmode_rocker_pane_cp_ParamLimits

0xe5dc,	// (0x0005040b) cell_cmode_rocker_pane_cp

0x0dc4,	// (0x00042bf3) bg_button_pane_cp06_cp_ParamLimits

0x0dc4,	// (0x00042bf3) bg_button_pane_cp06_cp

0xc55a,	// (0x0004e389) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc55a,	// (0x0004e389) cell_cmode_rocker_pane_g1_cp

0xc2ea,	// (0x0004e119) cell_cmode_rocker_pane_g2_cp

0x09a2,	// (0x000427d1) bg_button_pane_cp07_cp

0xe5ee,	// (0x0005041d) cell_cmode_itu_pane_g1_cp

0xe5f7,	// (0x00050426) cell_cmode_itu_pane_t1_cp

0xe5f7,	// (0x00050426) cell_cmode_itu_pane_t2_cp

0xb24f,	// (0x0004d07e) settings_code_pane_cp2

0x0a12,	// (0x00042841) bg_popup_window_pane_cp3_ParamLimits

0x0c55,	// (0x00042a84) heading_pane_cp3_ParamLimits

0x0c61,	// (0x00042a90) listscroll_popup_graphic_pane_ParamLimits

0x847a,	// (0x0004a2a9) fep_hwr_aid_pane_ParamLimits

0x8918,	// (0x0004a747) aid_touch_sctrl_top_ParamLimits

0x8925,	// (0x0004a754) sctrl_sk_top_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x00051b39) sctrl_sk_top_pane_g_ParamLimits

0x8932,	// (0x0004a761) sctrl_sk_top_pane_t1_ParamLimits

0x8918,	// (0x0004a747) aid_touch_sctrl_bottom_ParamLimits

0x8932,	// (0x0004a761) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbe9,	// (0x0004fa18) aid_area_touch_clock

0x8b0d,	// (0x0004a93c) aid_vkb2_area_top_pane_cell_ParamLimits

0x8b0d,	// (0x0004a93c) aid_vkb2_area_top_pane_cell

0x8c58,	// (0x0004aa87) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8c58,	// (0x0004aa87) aid_vkb2_area_bottom_pane_cell

0xe157,	// (0x0004ff86) popup_char_count_window

0xe605,	// (0x00050434) popup_char_count_window_g1

0xe60e,	// (0x0005043d) popup_char_count_window_g2

0xe617,	// (0x00050446) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00051c0a) popup_char_count_window_g

0xe620,	// (0x0005044f) popup_char_count_window_t1

0x89d3,	// (0x0004a802) popup_fep_char_preview_window_ParamLimits

0x89d3,	// (0x0004a802) popup_fep_char_preview_window

0x8b2b,	// (0x0004a95a) vkb2_top_candi_pane_ParamLimits

0x8b2b,	// (0x0004a95a) vkb2_top_candi_pane

0xe62e,	// (0x0005045d) cell_vkb2_top_candi_pane_ParamLimits

0xe62e,	// (0x0005045d) cell_vkb2_top_candi_pane

0xa3cc,	// (0x0004c1fb) bg_popup_fep_char_preview_window_ParamLimits

0xa3cc,	// (0x0004c1fb) bg_popup_fep_char_preview_window

0x8f3b,	// (0x0004ad6a) popup_fep_char_preview_window_t1_ParamLimits

0x8f3b,	// (0x0004ad6a) popup_fep_char_preview_window_t1

0xe67b,	// (0x000504aa) bg_popup_fep_char_preview_window_g1

0xe683,	// (0x000504b2) bg_popup_fep_char_preview_window_g2

0xe68b,	// (0x000504ba) bg_popup_fep_char_preview_window_g3

0xe693,	// (0x000504c2) bg_popup_fep_char_preview_window_g4

0xe69b,	// (0x000504ca) bg_popup_fep_char_preview_window_g5

0x8f75,	// (0x0004ada4) bg_popup_fep_char_preview_window_g6

0xe6a3,	// (0x000504d2) bg_popup_fep_char_preview_window_g7

0xe6ab,	// (0x000504da) bg_popup_fep_char_preview_window_g8

0xe6b3,	// (0x000504e2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00051c11) bg_popup_fep_char_preview_window_g

0xc55a,	// (0x0004e389) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) cell_vkb2_top_candi_pane_g1

0xc871,	// (0x0004e6a0) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc871,	// (0x0004e6a0) cell_vkb2_top_candi_pane_g2

0xc892,	// (0x0004e6c1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc892,	// (0x0004e6c1) cell_vkb2_top_candi_pane_g3

0x8f7d,	// (0x0004adac) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8f7d,	// (0x0004adac) cell_vkb2_top_candi_pane_g4

0xe4fc,	// (0x0005032b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe4fc,	// (0x0005032b) cell_vkb2_top_candi_pane_g5

0xda7a,	// (0x0004f8a9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda7a,	// (0x0004f8a9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00051c24) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00051c24) cell_vkb2_top_candi_pane_g

0x8f9e,	// (0x0004adcd) cell_vkb2_top_candi_pane_t1

0x8170,	// (0x00049f9f) aid_size_touch_slider_mark_ParamLimits

0x8170,	// (0x00049f9f) aid_size_touch_slider_mark

0xe29a,	// (0x000500c9) grid_graphic2_catg_pane_ParamLimits

0xe29a,	// (0x000500c9) grid_graphic2_catg_pane

0xe338,	// (0x00050167) popup_grid_graphic2_window_t1_ParamLimits

0xe338,	// (0x00050167) popup_grid_graphic2_window_t1

0xe34a,	// (0x00050179) popup_grid_graphic2_window_t2_ParamLimits

0xe34a,	// (0x00050179) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x00051bdf) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x00051bdf) popup_grid_graphic2_window_t

0x0b3c,	// (0x0004296b) bg_button_pane_cp05_ParamLimits

0xe4c0,	// (0x000502ef) cell_graphic2_control_pane_g1_ParamLimits

0xe6bb,	// (0x000504ea) cell_graphic2_catg_pane_ParamLimits

0xe6bb,	// (0x000504ea) cell_graphic2_catg_pane

0x09a2,	// (0x000427d1) bg_button_pane_cp12

0xe6cd,	// (0x000504fc) cell_graphic2_catg_pane_g1

0xdbb4,	// (0x0004f9e3) cell_tb_ext_pane_t1_ParamLimits

0x8d75,	// (0x0004aba4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8d75,	// (0x0004aba4) vkb2_top_cell_right_narrow_pane

0x8d8d,	// (0x0004abbc) vkb2_top_cell_right_wide_pane_ParamLimits

0x8d8d,	// (0x0004abbc) vkb2_top_cell_right_wide_pane

0x846c,	// (0x0004a29b) bg_vkb2_func_pane_ParamLimits

0x846c,	// (0x0004a29b) bg_vkb2_func_pane

0x8dfe,	// (0x0004ac2d) vkb2_top_cell_left_pane_g1_ParamLimits

0x846c,	// (0x0004a29b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x846c,	// (0x0004a29b) bg_vkb2_fuc_pane_cp03

0x8e5c,	// (0x0004ac8b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d5a,	// (0x0004bb89) bg_vkb2_func_pane_g1

0x9d62,	// (0x0004bb91) bg_vkb2_func_pane_g2

0x9d72,	// (0x0004bba1) bg_vkb2_func_pane_g3

0x9d6a,	// (0x0004bb99) bg_vkb2_func_pane_g4

0x9d7a,	// (0x0004bba9) bg_vkb2_func_pane_g5

0x9d82,	// (0x0004bbb1) bg_vkb2_func_pane_g6

0x9d8a,	// (0x0004bbb9) bg_vkb2_func_pane_g7

0x9d92,	// (0x0004bbc1) bg_vkb2_func_pane_g8

0x9d52,	// (0x0004bb81) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00051c31) bg_vkb2_func_pane_g

0x846c,	// (0x0004a29b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x846c,	// (0x0004a29b) bg_vkb2_fuc_pane_cp01

0x8dfe,	// (0x0004ac2d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8dfe,	// (0x0004ac2d) vkb2_top_cell_right_wide_pane_g1

0x846c,	// (0x0004a29b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x846c,	// (0x0004a29b) bg_vkb2_fuc_pane_cp02

0x8e5c,	// (0x0004ac8b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8e5c,	// (0x0004ac8b) vkb2_top_cell_right_narrow_pane_g1

0xd7e6,	// (0x0004f615) aid_touch_area_decrease_ParamLimits

0xd7e6,	// (0x0004f615) aid_touch_area_decrease

0xd806,	// (0x0004f635) aid_touch_area_increase_ParamLimits

0xd806,	// (0x0004f635) aid_touch_area_increase

0xd812,	// (0x0004f641) aid_touch_area_mute_ParamLimits

0xd812,	// (0x0004f641) aid_touch_area_mute

0xd836,	// (0x0004f665) aid_touch_area_slider_ParamLimits

0xd836,	// (0x0004f665) aid_touch_area_slider

0xd922,	// (0x0004f751) popup_slider_window_g4_ParamLimits

0xd922,	// (0x0004f751) popup_slider_window_g4

0xd92e,	// (0x0004f75d) popup_slider_window_g5_ParamLimits

0xd92e,	// (0x0004f75d) popup_slider_window_g5

0xd950,	// (0x0004f77f) popup_slider_window_g6_ParamLimits

0xd950,	// (0x0004f77f) popup_slider_window_g6

0xd990,	// (0x0004f7bf) popup_slider_window_t2_ParamLimits

0xd990,	// (0x0004f7bf) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x00051b2d) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x00051b2d) popup_slider_window_t

0xd9a8,	// (0x0004f7d7) slider_pane_ParamLimits

0xd9a8,	// (0x0004f7d7) slider_pane

0xe6d6,	// (0x00050505) slider_pane_g1_ParamLimits

0xe6d6,	// (0x00050505) slider_pane_g1

0xe6ea,	// (0x00050519) slider_pane_g2_ParamLimits

0xe6ea,	// (0x00050519) slider_pane_g2

0xe700,	// (0x0005052f) slider_pane_g3_ParamLimits

0xe700,	// (0x0005052f) slider_pane_g3

0x0003,

0xfe15,	// (0x00051c44) slider_pane_g_ParamLimits

0xfe15,	// (0x00051c44) slider_pane_g

0x7d8d,	// (0x00049bbc) popup_tb_float_extension_window_ParamLimits

0x7d8d,	// (0x00049bbc) popup_tb_float_extension_window

0xe72c,	// (0x0005055b) aid_size_cell_tb_float_ext

0x09a2,	// (0x000427d1) bg_popup_sub_window_cp28

0xe738,	// (0x00050567) grid_tb_float_ext_pane

0xe742,	// (0x00050571) cell_tb_float_ext_pane_ParamLimits

0xe742,	// (0x00050571) cell_tb_float_ext_pane

0xe75c,	// (0x0005058b) cell_tb_float_ext_pane_g1

0xe765,	// (0x00050594) grid_highlight_pane_cp12

0x85ad,	// (0x0004a3dc) cell_last_hwr_side_pane_ParamLimits

0x85ad,	// (0x0004a3dc) cell_last_hwr_side_pane

0xc2ea,	// (0x0004e119) cell_last_hwr_side_pane_g1

0xe76e,	// (0x0005059d) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00051c4d) cell_last_hwr_side_pane_g

0x8d24,	// (0x0004ab53) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8d24,	// (0x0004ab53) vkb2_area_bottom_space_btn_pane

0xc55a,	// (0x0004e389) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe20c,	// (0x0005003b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8f9e,	// (0x0004adcd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8fbd,	// (0x0004adec) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8fbd,	// (0x0004adec) vkb2_area_bottom_space_btn_pane_g1

0x8ff7,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8ff7,	// (0x0004ae26) vkb2_area_bottom_space_btn_pane_g2

0x902d,	// (0x0004ae5c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x902d,	// (0x0004ae5c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00051c52) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00051c52) vkb2_area_bottom_space_btn_pane_g

0x8521,	// (0x0004a350) cel_fep_hwr_func_pane_ParamLimits

0x8521,	// (0x0004a350) cel_fep_hwr_func_pane

0x855d,	// (0x0004a38c) cell_hwr_side_button_pane_ParamLimits

0x855d,	// (0x0004a38c) cell_hwr_side_button_pane

0xdbe9,	// (0x0004fa18) aid_area_touch_clock_ParamLimits

0x0b3c,	// (0x0004296b) bg_uniindi_top_pane_ParamLimits

0xdbfb,	// (0x0004fa2a) uniindi_top_pane_g1_ParamLimits

0xdc11,	// (0x0004fa40) uniindi_top_pane_g2_ParamLimits

0xdc1d,	// (0x0004fa4c) uniindi_top_pane_g3_ParamLimits

0xdc2e,	// (0x0004fa5d) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x00051b65) uniindi_top_pane_g_ParamLimits

0xdc3b,	// (0x0004fa6a) uniindi_top_pane_t1_ParamLimits

0x0b3c,	// (0x0004296b) bg_vkb2_func_pane_cp01_ParamLimits

0x0b3c,	// (0x0004296b) bg_vkb2_func_pane_cp01

0xe777,	// (0x000505a6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe777,	// (0x000505a6) cel_fep_hwr_func_pane_g1

0x0b3c,	// (0x0004296b) bg_vkb2_func_pane_cp02_ParamLimits

0x0b3c,	// (0x0004296b) bg_vkb2_func_pane_cp02

0xe777,	// (0x000505a6) cell_hwr_side_button_pane_g1_ParamLimits

0xe777,	// (0x000505a6) cell_hwr_side_button_pane_g1

0x9bd6,	// (0x0004ba05) status_pane_g4_ParamLimits

0x9bd6,	// (0x0004ba05) status_pane_g4

0x9bf0,	// (0x0004ba1f) status_pane_t1

0xc02b,	// (0x0004de5a) form2_midp_gauge_slider_cont_pane

0xc033,	// (0x0004de62) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc045,	// (0x0004de74) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc057,	// (0x0004de86) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00051938) form2_midp_gauge_slider_pane_t_ParamLimits

0xc069,	// (0x0004de98) form2_midp_slider_pane_ParamLimits

0x8993,	// (0x0004a7c2) aid_size_cell_func_vkb2_ParamLimits

0x8993,	// (0x0004a7c2) aid_size_cell_func_vkb2

0xe718,	// (0x00050547) slider_pane_g4_ParamLimits

0xe718,	// (0x00050547) slider_pane_g4

0x9077,	// (0x0004aea6) form2_midp_gauge_slider_pane_t2_cp01

0x9085,	// (0x0004aeb4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9085,	// (0x0004aeb4) form2_midp_gauge_slider_pane_t3_cp01

0x90a2,	// (0x0004aed1) form2_midp_slider_pane_cp01

0x09a2,	// (0x000427d1) navi_smil_pane

0xe7b0,	// (0x000505df) navi_smil_pane_g1

0xe7b8,	// (0x000505e7) navi_smil_pane_t1

0xe785,	// (0x000505b4) form2_midp_slider_pane_g1

0xe78e,	// (0x000505bd) form2_midp_slider_pane_g2

0xe796,	// (0x000505c5) form2_midp_slider_pane_g3

0xe785,	// (0x000505b4) form2_midp_slider_pane_g4

0xe79e,	// (0x000505cd) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00051c5b) form2_midp_slider_pane_g

0x9067,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9067,	// (0x0004ae96) vkb2_area_bottom_space_btn_pane_g4

0x9a05,	// (0x0004b834) lc0_navi_pane_ParamLimits

0x9a05,	// (0x0004b834) lc0_navi_pane

0x9a7b,	// (0x0004b8aa) lc0_stat_indi_pane_ParamLimits

0x9a7b,	// (0x0004b8aa) lc0_stat_indi_pane

0x9a92,	// (0x0004b8c1) ls0_title_pane_ParamLimits

0x9a92,	// (0x0004b8c1) ls0_title_pane

0x0dc4,	// (0x00042bf3) bg_popup_sub_pane_cp14_ParamLimits

0xdbd0,	// (0x0004f9ff) list_uniindi_pane_ParamLimits

0xdbdc,	// (0x0004fa0b) uniindi_top_pane_ParamLimits

0xdc77,	// (0x0004faa6) list_single_uniindi_pane_g1_ParamLimits

0xdc8a,	// (0x0004fab9) list_single_uniindi_pane_t1_ParamLimits

0x90ab,	// (0x0004aeda) lc0_stat_clock_pane_ParamLimits

0x90ab,	// (0x0004aeda) lc0_stat_clock_pane

0xe7c6,	// (0x000505f5) lc0_stat_indi_pane_g1_ParamLimits

0xe7c6,	// (0x000505f5) lc0_stat_indi_pane_g1

0xe7d3,	// (0x00050602) lc0_stat_indi_pane_g2_ParamLimits

0xe7d3,	// (0x00050602) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00051c66) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00051c66) lc0_stat_indi_pane_g

0x90b8,	// (0x0004aee7) lc0_uni_indicator_pane_ParamLimits

0x90b8,	// (0x0004aee7) lc0_uni_indicator_pane

0xe7e0,	// (0x0005060f) ls0_title_pane_g1_ParamLimits

0xe7e0,	// (0x0005060f) ls0_title_pane_g1

0xe7f4,	// (0x00050623) ls0_title_pane_t1_ParamLimits

0xe7f4,	// (0x00050623) ls0_title_pane_t1

0x90c5,	// (0x0004aef4) lc0_uni_indicator_pane_g1_ParamLimits

0x90c5,	// (0x0004aef4) lc0_uni_indicator_pane_g1

0xe82a,	// (0x00050659) lc0_stat_clock_pane_t1

0x09a2,	// (0x000427d1) main_ai5_pane

0xe838,	// (0x00050667) ai5_sk_pane_ParamLimits

0xe838,	// (0x00050667) ai5_sk_pane

0xe845,	// (0x00050674) cell_ai5_widget_pane_ParamLimits

0xe845,	// (0x00050674) cell_ai5_widget_pane

0xe8f7,	// (0x00050726) aid_size_cell_widget_grid

0xe905,	// (0x00050734) bg_ai5_widget_pane_ParamLimits

0xe905,	// (0x00050734) bg_ai5_widget_pane

0xe979,	// (0x000507a8) cell_ai5_widget_pane_g2

0xe989,	// (0x000507b8) cell_ai5_widget_pane_g3

0xe9a0,	// (0x000507cf) cell_ai5_widget_pane_g4

0xe9ac,	// (0x000507db) cell_ai5_widget_pane_g5

0xe9b8,	// (0x000507e7) cell_ai5_widget_pane_g6

0xe9c4,	// (0x000507f3) cell_ai5_widget_pane_g7

0xea0c,	// (0x0005083b) cell_ai5_widget_pane_t1_ParamLimits

0xea0c,	// (0x0005083b) cell_ai5_widget_pane_t1

0xea29,	// (0x00050858) cell_ai5_widget_pane_t2_ParamLimits

0xea29,	// (0x00050858) cell_ai5_widget_pane_t2

0xea41,	// (0x00050870) cell_ai5_widget_pane_t3_ParamLimits

0xea41,	// (0x00050870) cell_ai5_widget_pane_t3

0xea59,	// (0x00050888) cell_ai5_widget_pane_t4_ParamLimits

0xea59,	// (0x00050888) cell_ai5_widget_pane_t4

0xea76,	// (0x000508a5) cell_ai5_widget_pane_t5_ParamLimits

0xea76,	// (0x000508a5) cell_ai5_widget_pane_t5

0xea95,	// (0x000508c4) cell_ai5_widget_pane_t6_ParamLimits

0xea95,	// (0x000508c4) cell_ai5_widget_pane_t6

0xeaa7,	// (0x000508d6) cell_ai5_widget_pane_t7_ParamLimits

0xeaa7,	// (0x000508d6) cell_ai5_widget_pane_t7

0xeac0,	// (0x000508ef) cell_ai5_widget_pane_t8_ParamLimits

0xeac0,	// (0x000508ef) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00051c80) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00051c80) cell_ai5_widget_pane_t

0xeb14,	// (0x00050943) grid_ai5_widget_pane

0x0dc4,	// (0x00042bf3) highlight_cell_ai5_widget_pane_ParamLimits

0x0dc4,	// (0x00042bf3) highlight_cell_ai5_widget_pane

0xeb22,	// (0x00050951) ai5_sk_left_pane

0xeb2c,	// (0x0005095b) ai5_sk_middle_pane

0xeb36,	// (0x00050965) ai5_sk_right_pane

0xeb40,	// (0x0005096f) bg_ai5_widget_pane_g1_ParamLimits

0xeb40,	// (0x0005096f) bg_ai5_widget_pane_g1

0xeb4c,	// (0x0005097b) bg_ai5_widget_pane_g2_ParamLimits

0xeb4c,	// (0x0005097b) bg_ai5_widget_pane_g2

0xeb58,	// (0x00050987) bg_ai5_widget_pane_g3_ParamLimits

0xeb58,	// (0x00050987) bg_ai5_widget_pane_g3

0xeb64,	// (0x00050993) bg_ai5_widget_pane_g4_ParamLimits

0xeb64,	// (0x00050993) bg_ai5_widget_pane_g4

0xeb70,	// (0x0005099f) bg_ai5_widget_pane_g5_ParamLimits

0xeb70,	// (0x0005099f) bg_ai5_widget_pane_g5

0xeb7c,	// (0x000509ab) bg_ai5_widget_pane_g6_ParamLimits

0xeb7c,	// (0x000509ab) bg_ai5_widget_pane_g6

0xeb88,	// (0x000509b7) bg_ai5_widget_pane_g7_ParamLimits

0xeb88,	// (0x000509b7) bg_ai5_widget_pane_g7

0xeb94,	// (0x000509c3) bg_ai5_widget_pane_g8_ParamLimits

0xeb94,	// (0x000509c3) bg_ai5_widget_pane_g8

0xeba0,	// (0x000509cf) bg_ai5_widget_pane_g9_ParamLimits

0xeba0,	// (0x000509cf) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00051c95) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00051c95) bg_ai5_widget_pane_g

0xebd2,	// (0x00050a01) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd2,	// (0x00050a01) cell_shortcut_ai5_widget_pane

0x94ff,	// (0x0004b32e) bg_cell_shortcut_ai5_widget_pane

0xebe3,	// (0x00050a12) cell_grid_ai5_widget_pane_g1

0x94ff,	// (0x0004b32e) highlight_cell_shortcut_ai5_widget_pane

0x9d62,	// (0x0004bb91) ai5_sk_left_pane_g1

0xebec,	// (0x00050a1b) ai5_sk_left_pane_g2

0xebf4,	// (0x00050a23) ai5_sk_left_pane_g3

0xebfc,	// (0x00050a2b) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00051ca8) ai5_sk_left_pane_g

0xec04,	// (0x00050a33) ai5_sk_left_pane_t1

0x9d5a,	// (0x0004bb89) ai5_sk_right_pane_g1

0xec12,	// (0x00050a41) ai5_sk_right_pane_g2

0xec1a,	// (0x00050a49) ai5_sk_right_pane_g3

0xec22,	// (0x00050a51) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00051cb1) ai5_sk_right_pane_g

0xec2a,	// (0x00050a59) ai5_sk_right_pane_t1

0x9d5a,	// (0x0004bb89) ai5_sk_middle_pane_g1

0x9d62,	// (0x0004bb91) ai5_sk_middle_pane_g2

0x9d7a,	// (0x0004bba9) ai5_sk_middle_pane_g3

0xec1a,	// (0x00050a49) ai5_sk_middle_pane_g4

0xebf4,	// (0x00050a23) ai5_sk_middle_pane_g5

0xec38,	// (0x00050a67) ai5_sk_middle_pane_g6

0xec40,	// (0x00050a6f) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00051cba) ai5_sk_middle_pane_g

0x988b,	// (0x0004b6ba) aid_touch_area_size_lc0_ParamLimits

0x988b,	// (0x0004b6ba) aid_touch_area_size_lc0

0x86ac,	// (0x0004a4db) cell_hwr_candidate_pane_t1_ParamLimits

0x98a7,	// (0x0004b6d6) aid_touch_navi_pane

0x9b80,	// (0x0004b9af) status_dt_navi_pane_ParamLimits

0x9b80,	// (0x0004b9af) status_dt_navi_pane

0x9b8d,	// (0x0004b9bc) status_dt_sta_pane_ParamLimits

0x9b8d,	// (0x0004b9bc) status_dt_sta_pane

0xec48,	// (0x00050a77) dt_sta_controll_pane

0xec55,	// (0x00050a84) dt_sta_indi_pane

0xec66,	// (0x00050a95) dt_sta_title_pane

0x0b3c,	// (0x0004296b) bg_dt_sta_indi_pane_ParamLimits

0x0b3c,	// (0x0004296b) bg_dt_sta_indi_pane

0xec79,	// (0x00050aa8) dt_sta_battery_pane

0xec81,	// (0x00050ab0) dt_sta_indi_pane_g1

0xec8a,	// (0x00050ab9) dt_sta_indi_pane_g2

0xec93,	// (0x00050ac2) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00051cc9) dt_sta_indi_pane_g

0xec9c,	// (0x00050acb) dt_sta_signal_pane

0x0dc4,	// (0x00042bf3) bg_dt_sta_title_pane_ParamLimits

0x0dc4,	// (0x00042bf3) bg_dt_sta_title_pane

0xab88,	// (0x0004c9b7) dt_sta_title_pane_g1

0xeca5,	// (0x00050ad4) dt_sta_title_pane_t1_ParamLimits

0xeca5,	// (0x00050ad4) dt_sta_title_pane_t1

0x09a2,	// (0x000427d1) bg_dt_sta_control_pane

0xecba,	// (0x00050ae9) dt_sta_controll_pane_g1

0xecc3,	// (0x00050af2) bg_dt_sta_title_pane_g1

0xeccc,	// (0x00050afb) bg_dt_sta_title_pane_g2

0xecd5,	// (0x00050b04) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00051cd0) bg_dt_sta_title_pane_g

0xc2ea,	// (0x0004e119) bg_dt_sta_indi_pane_g1

0xecde,	// (0x00050b0d) dt_sta_signal_pane_g1

0xece6,	// (0x00050b15) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00051cd7) dt_sta_signal_pane_g

0xecee,	// (0x00050b1d) dt_sta_battery_pane_g1

0xecf7,	// (0x00050b26) dt_sta_battery_pane_t1

0xc2ea,	// (0x0004e119) bg_dt_sta_control_pane_g1

0x127a,	// (0x000430a9) fep_china_uni_eep_pane

0x1282,	// (0x000430b1) fep_china_uni_entry_pane_ParamLimits

0x1292,	// (0x000430c1) popup_fep_china_uni_window_g1_ParamLimits

0x12a2,	// (0x000430d1) popup_fep_china_uni_window_g2_ParamLimits

0x12a2,	// (0x000430d1) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00051547) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00051547) popup_fep_china_uni_window_g

0xed06,	// (0x00050b35) fep_china_uni_eep_pane_g1

0xed0e,	// (0x00050b3d) fep_china_uni_eep_pane_t1

0xe7a7,	// (0x000505d6) aid_touch_area_size_smil_player

0x99fd,	// (0x0004b82c) lc0_clock_pane

0x9be4,	// (0x0004ba13) status_pane_g5_ParamLimits

0x9be4,	// (0x0004ba13) status_pane_g5

0x7a4e,	// (0x0004987d) popup_keymap_window

0x9ba2,	// (0x0004b9d1) status_icon_pane

0xe989,	// (0x000507b8) cell_ai5_widget_pane_g3_ParamLimits

0xe9a0,	// (0x000507cf) cell_ai5_widget_pane_g4_ParamLimits

0xe9ac,	// (0x000507db) cell_ai5_widget_pane_g5_ParamLimits

0xe9d0,	// (0x000507ff) cell_ai5_widget_pane_g8_ParamLimits

0xe9d0,	// (0x000507ff) cell_ai5_widget_pane_g8

0xe9e4,	// (0x00050813) cell_ai5_widget_pane_g9_ParamLimits

0xe9e4,	// (0x00050813) cell_ai5_widget_pane_g9

0xe9f8,	// (0x00050827) cell_ai5_widget_pane_g10_ParamLimits

0xe9f8,	// (0x00050827) cell_ai5_widget_pane_g10

0xed1d,	// (0x00050b4c) status_icon_pane_g1

0x09a2,	// (0x000427d1) bg_popup_sub_pane_cp13

0xed25,	// (0x00050b54) popup_keymap_window_t1

0x97d0,	// (0x0004b5ff) control_pane_g6_ParamLimits

0x97d0,	// (0x0004b5ff) control_pane_g6

0x97dd,	// (0x0004b60c) control_pane_g7_ParamLimits

0x97dd,	// (0x0004b60c) control_pane_g7

0x97ea,	// (0x0004b619) control_pane_g8_ParamLimits

0x97ea,	// (0x0004b619) control_pane_g8

0xec48,	// (0x00050a77) dt_sta_controll_pane_ParamLimits

0xec55,	// (0x00050a84) dt_sta_indi_pane_ParamLimits

0xec66,	// (0x00050a95) dt_sta_title_pane_ParamLimits

0x0d0f,	// (0x00042b3e) aid_size_touch_scroll_bar_cale

0x65b5,	// (0x000483e4) popup_discreet_window_ParamLimits

0x65b5,	// (0x000483e4) popup_discreet_window

0x662f,	// (0x0004845e) popup_sk_window

0xa3cc,	// (0x0004c1fb) bg_popup_sub_pane_cp28_ParamLimits

0xa3cc,	// (0x0004c1fb) bg_popup_sub_pane_cp28

0xed33,	// (0x00050b62) popup_discreet_window_g1_ParamLimits

0xed33,	// (0x00050b62) popup_discreet_window_g1

0xed53,	// (0x00050b82) popup_discreet_window_t1_ParamLimits

0xed53,	// (0x00050b82) popup_discreet_window_t1

0xed71,	// (0x00050ba0) popup_discreet_window_t2_ParamLimits

0xed71,	// (0x00050ba0) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00051cdc) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00051cdc) popup_discreet_window_t

0x90d9,	// (0x0004af08) popup_sk_window_g1

0x90e3,	// (0x0004af12) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00051ce3) popup_sk_window_g

0x90eb,	// (0x0004af1a) popup_sk_window_t1

0x90f9,	// (0x0004af28) popup_sk_window_t1_copy1

0xe979,	// (0x000507a8) cell_ai5_widget_pane_g2_ParamLimits

0xead2,	// (0x00050901) cell_ai5_widget_pane_t9_ParamLimits

0xead2,	// (0x00050901) cell_ai5_widget_pane_t9

0x09a2,	// (0x000427d1) main_fep_fshwr2_pane

0x9107,	// (0x0004af36) aid_fshwr2_btn_pane

0x9113,	// (0x0004af42) aid_fshwr2_syb_pane

0x9124,	// (0x0004af53) aid_fshwr2_txt_pane

0x9130,	// (0x0004af5f) fshwr2_func_candi_pane

0x9148,	// (0x0004af77) fshwr2_hwr_syb_pane

0x915f,	// (0x0004af8e) fshwr2_icf_pane

0x09a2,	// (0x000427d1) fshwr2_icf_bg_pane

0x9188,	// (0x0004afb7) fshwr2_icf_pane_t1_ParamLimits

0x9188,	// (0x0004afb7) fshwr2_icf_pane_t1

0x11f7,	// (0x00043026) fshwr2_func_candi_pane_g1

0xedc3,	// (0x00050bf2) fshwr2_func_candi_row_pane_ParamLimits

0xedc3,	// (0x00050bf2) fshwr2_func_candi_row_pane

0x91a1,	// (0x0004afd0) cell_fshwr2_syb_pane_ParamLimits

0x91a1,	// (0x0004afd0) cell_fshwr2_syb_pane

0xc55a,	// (0x0004e389) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) fshwr2_hwr_syb_pane_g1

0x09a2,	// (0x000427d1) bg_popup_call_pane_cp01

0x91b7,	// (0x0004afe6) fshwr2_func_candi_cell_pane_ParamLimits

0x91b7,	// (0x0004afe6) fshwr2_func_candi_cell_pane

0xaa28,	// (0x0004c857) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa28,	// (0x0004c857) fshwr2_func_candi_cell_bg_pane

0x9202,	// (0x0004b031) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9202,	// (0x0004b031) fshwr2_func_candi_cell_pane_g1

0x922a,	// (0x0004b059) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x922a,	// (0x0004b059) fshwr2_func_candi_cell_pane_t1

0x09a2,	// (0x000427d1) bg_button_pane_cp08

0xedd3,	// (0x00050c02) cell_fshwr2_syb_bg_pane

0x923d,	// (0x0004b06c) cell_fshwr2_syb_bg_pane_g1

0x9245,	// (0x0004b074) cell_fshwr2_syb_bg_pane_t1

0x0dc4,	// (0x00042bf3) main_tmo_pane

0xaec1,	// (0x0004ccf0) uni_indicator_pane_g1_ParamLimits

0xaed4,	// (0x0004cd03) uni_indicator_pane_g2_ParamLimits

0xaee6,	// (0x0004cd15) uni_indicator_pane_g3_ParamLimits

0xaef5,	// (0x0004cd24) uni_indicator_pane_g4_ParamLimits

0xaef5,	// (0x0004cd24) uni_indicator_pane_g4

0xaf09,	// (0x0004cd38) uni_indicator_pane_g5_ParamLimits

0xaf09,	// (0x0004cd38) uni_indicator_pane_g5

0xaf09,	// (0x0004cd38) uni_indicator_pane_g6_ParamLimits

0xaf09,	// (0x0004cd38) uni_indicator_pane_g6

0xf91c,	// (0x0005174b) uni_indicator_pane_g_ParamLimits

0xd7c8,	// (0x0004f5f7) popup_tmo_note_window_ParamLimits

0xd7c8,	// (0x0004f5f7) popup_tmo_note_window

0x0dc4,	// (0x00042bf3) fshwr2_bg_pane

0x921b,	// (0x0004b04a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x921b,	// (0x0004b04a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00051ce8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00051ce8) fshwr2_func_candi_cell_pane_g

0xc2ea,	// (0x0004e119) bg_popup_window_pane_cp01

0x9254,	// (0x0004b083) bg_popup_window_pane_g1_cp01

0xeddb,	// (0x00050c0a) bg_popup_window_pane_cp22_ParamLimits

0xeddb,	// (0x00050c0a) bg_popup_window_pane_cp22

0xede9,	// (0x00050c18) listscroll_tmo_link_pane_ParamLimits

0xede9,	// (0x00050c18) listscroll_tmo_link_pane

0xee29,	// (0x00050c58) popup_tmo_note_window_g1_ParamLimits

0xee29,	// (0x00050c58) popup_tmo_note_window_g1

0xee36,	// (0x00050c65) tmo_note_info_pane_ParamLimits

0xee36,	// (0x00050c65) tmo_note_info_pane

0xee50,	// (0x00050c7f) list_tmo_note_info_pane_g1_ParamLimits

0xee50,	// (0x00050c7f) list_tmo_note_info_pane_g1

0xee67,	// (0x00050c96) list_tmo_note_info_pane_g2_ParamLimits

0xee67,	// (0x00050c96) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00051ced) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00051ced) list_tmo_note_info_pane_g

0xee83,	// (0x00050cb2) list_tmo_note_info_text_pane_ParamLimits

0xee83,	// (0x00050cb2) list_tmo_note_info_text_pane

0xef04,	// (0x00050d33) list_tmo_link_pane

0xef11,	// (0x00050d40) scroll_pane_cp20

0xef1e,	// (0x00050d4d) list_single_tmo_link_pane_ParamLimits

0xef1e,	// (0x00050d4d) list_single_tmo_link_pane

0xef2e,	// (0x00050d5d) list_single_tmo_link_pane_t1

0xef3c,	// (0x00050d6b) list_tmo_note_info_text_pane_t1_ParamLimits

0xef3c,	// (0x00050d6b) list_tmo_note_info_text_pane_t1

0x6dc9,	// (0x00048bf8) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6dc9,	// (0x00048bf8) aid_size_touch_scroll_bar_cp01

0x5a17,	// (0x00047846) aid_size_touch_slider_marker

0x6617,	// (0x00048446) popup_settings_window_ParamLimits

0x6617,	// (0x00048446) popup_settings_window

0x5ba2,	// (0x000479d1) popup_candi_list_indi_window

0x98a7,	// (0x0004b6d6) aid_touch_navi_pane_ParamLimits

0x88ec,	// (0x0004a71b) rs_clock_indi_pane

0x88f5,	// (0x0004a724) sctrl_sk_bottom_pane_ParamLimits

0x8906,	// (0x0004a735) sctrl_sk_top_pane_ParamLimits

0x89ed,	// (0x0004a81c) popup_fep_tooltip_window

0xe8f7,	// (0x00050726) aid_size_cell_widget_grid_ParamLimits

0xe964,	// (0x00050793) cell_ai5_widget_pane_g1_ParamLimits

0xe964,	// (0x00050793) cell_ai5_widget_pane_g1

0xe9b8,	// (0x000507e7) cell_ai5_widget_pane_g6_ParamLimits

0xe9c4,	// (0x000507f3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00051c6b) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00051c6b) cell_ai5_widget_pane_g

0xeaf6,	// (0x00050925) cell_ai5_widget_pane_t10_ParamLimits

0xeaf6,	// (0x00050925) cell_ai5_widget_pane_t10

0xeb14,	// (0x00050943) grid_ai5_widget_pane_ParamLimits

0xebac,	// (0x000509db) cell_contacts_ai5_widget_pane_ParamLimits

0xebac,	// (0x000509db) cell_contacts_ai5_widget_pane

0xed86,	// (0x00050bb5) popup_discreet_window_t3_ParamLimits

0xed86,	// (0x00050bb5) popup_discreet_window_t3

0x9174,	// (0x0004afa3) popup_fshwr2_char_preview_window_ParamLimits

0x9174,	// (0x0004afa3) popup_fshwr2_char_preview_window

0xeea1,	// (0x00050cd0) tmo_note_info_pane_t1

0xeeb6,	// (0x00050ce5) tmo_note_info_pane_t2

0xeecb,	// (0x00050cfa) tmo_note_info_pane_t3

0xeee0,	// (0x00050d0f) tmo_note_info_pane_t4

0xeef2,	// (0x00050d21) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00051cf2) tmo_note_info_pane_t

0xef04,	// (0x00050d33) list_tmo_link_pane_ParamLimits

0xef11,	// (0x00050d40) scroll_pane_cp20_ParamLimits

0x09a2,	// (0x000427d1) bg_popup_fep_char_preview_window_cp01

0xef55,	// (0x00050d84) popup_fshwr2_char_preview_window_t1

0xef63,	// (0x00050d92) popup_candi_list_indi_window_g1

0xef6c,	// (0x00050d9b) bg_cell_contacts_ai5_widget_pane

0xef78,	// (0x00050da7) cell_contacts_ai5_widget_pane_g1

0xc9f1,	// (0x0004e820) cell_contacts_ai5_widget_pane_g2

0xef8d,	// (0x00050dbc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00051cfd) cell_contacts_ai5_widget_pane_g

0xef99,	// (0x00050dc8) cell_contacts_ai5_widget_pane_t1

0x0dc4,	// (0x00042bf3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf010,	// (0x00050e3f) settings_container_pane

0x94ff,	// (0x0004b32e) listscroll_set_pane_copy1

0xb9e7,	// (0x0004d816) scroll_pane_cp121_copy1

0xa185,	// (0x0004bfb4) set_content_pane_copy1

0xf01c,	// (0x00050e4b) aid_height_set_list_copy1_ParamLimits

0xf01c,	// (0x00050e4b) aid_height_set_list_copy1

0xb101,	// (0x0004cf30) aid_size_parent_copy1_ParamLimits

0xb101,	// (0x0004cf30) aid_size_parent_copy1

0xf028,	// (0x00050e57) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf028,	// (0x00050e57) button_value_adjust_pane_cp6_copy1

0x9845,	// (0x0004b674) list_highlight_pane_cp2_copy1_ParamLimits

0x9845,	// (0x0004b674) list_highlight_pane_cp2_copy1

0xf03c,	// (0x00050e6b) list_set_pane_copy1_ParamLimits

0xf03c,	// (0x00050e6b) list_set_pane_copy1

0xefab,	// (0x00050dda) main_pane_set_t1_copy1_ParamLimits

0xefab,	// (0x00050dda) main_pane_set_t1_copy1

0xefe5,	// (0x00050e14) main_pane_set_t2_copy1_ParamLimits

0xefe5,	// (0x00050e14) main_pane_set_t2_copy1

0xf0e9,	// (0x00050f18) main_pane_set_t3_copy1

0xf0f7,	// (0x00050f26) main_pane_set_t4_copy1

0xf004,	// (0x00050e33) set_content_pane_g1_copy1_ParamLimits

0xf004,	// (0x00050e33) set_content_pane_g1_copy1

0xf105,	// (0x00050f34) setting_code_pane_copy1

0xf10d,	// (0x00050f3c) setting_slider_graphic_pane_copy1

0xf10d,	// (0x00050f3c) setting_slider_pane_copy1

0xf10d,	// (0x00050f3c) setting_text_pane_copy1

0xf10d,	// (0x00050f3c) setting_volume_pane_copy1

0xf105,	// (0x00050f34) settings_code_pane_cp2_copy1

0xf115,	// (0x00050f44) settings_code_pane_cp_copy1_ParamLimits

0xf115,	// (0x00050f44) settings_code_pane_cp_copy1

0x925d,	// (0x0004b08c) volume_set_pane_copy1

0xf129,	// (0x00050f58) volume_set_pane_g10_copy1

0xf131,	// (0x00050f60) volume_set_pane_g1_copy1

0xf139,	// (0x00050f68) volume_set_pane_g2_copy1

0xf141,	// (0x00050f70) volume_set_pane_g3_copy1

0xf149,	// (0x00050f78) volume_set_pane_g4_copy1

0xf151,	// (0x00050f80) volume_set_pane_g5_copy1

0xf159,	// (0x00050f88) volume_set_pane_g6_copy1

0xf161,	// (0x00050f90) volume_set_pane_g7_copy1

0xf169,	// (0x00050f98) volume_set_pane_g8_copy1

0xf171,	// (0x00050fa0) volume_set_pane_g9_copy1

0x0a12,	// (0x00042841) bg_set_opt_pane_cp_copy1_ParamLimits

0x0a12,	// (0x00042841) bg_set_opt_pane_cp_copy1

0x9265,	// (0x0004b094) setting_slider_pane_t1_copy1_ParamLimits

0x9265,	// (0x0004b094) setting_slider_pane_t1_copy1

0x9283,	// (0x0004b0b2) setting_slider_pane_t2_copy1_ParamLimits

0x9283,	// (0x0004b0b2) setting_slider_pane_t2_copy1

0x929d,	// (0x0004b0cc) setting_slider_pane_t3_copy1_ParamLimits

0x929d,	// (0x0004b0cc) setting_slider_pane_t3_copy1

0x92b5,	// (0x0004b0e4) slider_set_pane_copy1_ParamLimits

0x92b5,	// (0x0004b0e4) slider_set_pane_copy1

0x0e1c,	// (0x00042c4b) set_opt_bg_pane_g1_copy2

0x0e24,	// (0x00042c53) set_opt_bg_pane_g2_copy2

0xf179,	// (0x00050fa8) set_opt_bg_pane_g3_copy2

0x0e34,	// (0x00042c63) set_opt_bg_pane_g4_copy2

0x0e3c,	// (0x00042c6b) set_opt_bg_pane_g5_copy2

0x0e44,	// (0x00042c73) set_opt_bg_pane_g6_copy2

0xf183,	// (0x00050fb2) set_opt_bg_pane_g7_copy2

0xf18b,	// (0x00050fba) set_opt_bg_pane_g8_copy2

0xf195,	// (0x00050fc4) set_opt_bg_pane_g9_copy2

0x92cb,	// (0x0004b0fa) aid_size_touch_slider_mark_copy1_ParamLimits

0x92cb,	// (0x0004b0fa) aid_size_touch_slider_mark_copy1

0xf19f,	// (0x00050fce) slider_set_pane_g1_copy1

0x92df,	// (0x0004b10e) slider_set_pane_g2_copy1

0x8190,	// (0x00049fbf) slider_set_pane_g3_copy1_ParamLimits

0x8190,	// (0x00049fbf) slider_set_pane_g3_copy1

0x81a4,	// (0x00049fd3) slider_set_pane_g4_copy1_ParamLimits

0x81a4,	// (0x00049fd3) slider_set_pane_g4_copy1

0x81bc,	// (0x00049feb) slider_set_pane_g5_copy1_ParamLimits

0x81bc,	// (0x00049feb) slider_set_pane_g5_copy1

0x8190,	// (0x00049fbf) slider_set_pane_g6_copy1_ParamLimits

0x8190,	// (0x00049fbf) slider_set_pane_g6_copy1

0x92e7,	// (0x0004b116) slider_set_pane_g7_copy1_ParamLimits

0x92e7,	// (0x0004b116) slider_set_pane_g7_copy1

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp2_copy1

0xf1a8,	// (0x00050fd7) setting_slider_graphic_pane_g1_copy1

0xf1b1,	// (0x00050fe0) setting_slider_graphic_pane_t1_copy1

0xf1c1,	// (0x00050ff0) setting_slider_graphic_pane_t2_copy1

0xf1d1,	// (0x00051000) slider_set_pane_cp_copy1

0xf1e1,	// (0x00051010) input_focus_pane_cp1_copy1

0xf1ea,	// (0x00051019) list_set_text_pane_copy1

0xf1f2,	// (0x00051021) setting_text_pane_g1_copy1

0x6310,	// (0x0004813f) set_text_pane_t1_copy1

0xf1e1,	// (0x00051010) input_focus_pane_cp2_copy1

0xf1f2,	// (0x00051021) setting_code_pane_g1_copy1

0xf1fb,	// (0x0005102a) setting_code_pane_t1_copy1

0xf209,	// (0x00051038) list_set_graphic_pane_copy1

0x09b6,	// (0x000427e5) bg_set_opt_pane_cp4_copy1

0x4aae,	// (0x000468dd) list_set_graphic_pane_g1_copy1_ParamLimits

0x4aae,	// (0x000468dd) list_set_graphic_pane_g1_copy1

0xf21d,	// (0x0005104c) list_set_graphic_pane_g2_copy1

0x4ac6,	// (0x000468f5) list_set_graphic_pane_t1_copy1_ParamLimits

0x4ac6,	// (0x000468f5) list_set_graphic_pane_t1_copy1

0xc2ea,	// (0x0004e119) rs_clock_indi_pane_g1

0xf225,	// (0x00051054) rs_clock_indi_pane_t1

0xf233,	// (0x00051062) rs_indi_pane

0xf23b,	// (0x0005106a) rs_indi_pane_g1

0xf244,	// (0x00051073) rs_indi_pane_g2

0xef63,	// (0x00050d92) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00051d04) rs_indi_pane_g

0x94ff,	// (0x0004b32e) bg_popup_preview_window_pane_cp03

0xf24d,	// (0x0005107c) popup_fep_tooltip_window_t1

0xcf79,	// (0x0004eda8) popup_note2_window_g2_ParamLimits

0xcf79,	// (0x0004eda8) popup_note2_window_g2

0x0001,

0xfc75,	// (0x00051aa4) popup_note2_window_g_ParamLimits

0xfc75,	// (0x00051aa4) popup_note2_window_g

0xd466,	// (0x0004f295) bg_popup_sub_pane_cp11_ParamLimits

0xd473,	// (0x0004f2a2) cell_ai3_links_pane_g1_ParamLimits

0xd48a,	// (0x0004f2b9) cell_ai3_links_pane_t1

0x6310,	// (0x0004813f) set_text_pane_t1_copy1_ParamLimits

0x7670,	// (0x0004949f) cell_graphic_popup_pane_cp2_ParamLimits

0x7670,	// (0x0004949f) cell_graphic_popup_pane_cp2

0xf25b,	// (0x0005108a) cell_graphic_popup_pane_g1_cp2

0x0c92,	// (0x00042ac1) cell_graphic_popup_pane_g2_cp2

0xf263,	// (0x00051092) cell_graphic_popup_pane_g3_cp2

0xf26b,	// (0x0005109a) cell_graphic_popup_pane_t2_cp2

0x0ca3,	// (0x00042ad2) grid_highlight_pane_cp3_cp2

0x1074,	// (0x00042ea3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0dc4,	// (0x00042bf3) main_tmo_pane_ParamLimits

0xd7bc,	// (0x0004f5eb) popup_tmo_big_image_note_window

0xe953,	// (0x00050782) cell_ai5_widget_list_pane

0xe95b,	// (0x0005078a) cell_ai5_widget_lrg_icon_pane

0xeea1,	// (0x00050cd0) tmo_note_info_pane_t1_ParamLimits

0xeeb6,	// (0x00050ce5) tmo_note_info_pane_t2_ParamLimits

0xeecb,	// (0x00050cfa) tmo_note_info_pane_t3_ParamLimits

0xeee0,	// (0x00050d0f) tmo_note_info_pane_t4_ParamLimits

0xeef2,	// (0x00050d21) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00051cf2) tmo_note_info_pane_t_ParamLimits

0xf010,	// (0x00050e3f) settings_container_pane_ParamLimits

0xf1d9,	// (0x00051008) indicator_popup_pane_cp5

0xf1d9,	// (0x00051008) indicator_popup_pane_cp6

0xf209,	// (0x00051038) list_set_graphic_pane_copy1_ParamLimits

0x09a2,	// (0x000427d1) bg_popup_window_pane_cp23

0xf279,	// (0x000510a8) popup_tmo_big_image_note_window_g1

0xf282,	// (0x000510b1) popup_tmo_big_image_note_window_t1

0xf292,	// (0x000510c1) popup_tmo_big_image_note_window_t2

0xf2a2,	// (0x000510d1) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00051d0b) popup_tmo_big_image_note_window_t

0xc2ea,	// (0x0004e119) cell_ai5_widget_lrg_icon_pane_g1

0xf2b2,	// (0x000510e1) cell_ai5_widget_lrg_icon_pane_t1

0xf2c0,	// (0x000510ef) cell_ai5_widget_list_row_pane_ParamLimits

0xf2c0,	// (0x000510ef) cell_ai5_widget_list_row_pane

0xf2d7,	// (0x00051106) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2d7,	// (0x00051106) cell_ai5_widget_list_row_pane_g1

0xf2e4,	// (0x00051113) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2e4,	// (0x00051113) cell_ai5_widget_list_row_pane_t1

0xf30f,	// (0x0005113e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf30f,	// (0x0005113e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x00051d12) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00051d12) cell_ai5_widget_list_row_pane_t

0x09a2,	// (0x000427d1) main_fep_vtchi_ss_pane

0xf353,	// (0x00051182) popup_fep_char_pre_window

0xf35b,	// (0x0005118a) popup_fep_ituss_window

0xf37c,	// (0x000511ab) popup_fep_vkbss_window

0xf3a6,	// (0x000511d5) grid_vkbss_keypad_pane_ParamLimits

0xf3a6,	// (0x000511d5) grid_vkbss_keypad_pane

0xf3b2,	// (0x000511e1) ituss_keypad_pane

0x9309,	// (0x0004b138) aid_vkbss_key_offset_ParamLimits

0x9309,	// (0x0004b138) aid_vkbss_key_offset

0x9315,	// (0x0004b144) cell_vkbss_key_pane_ParamLimits

0x9315,	// (0x0004b144) cell_vkbss_key_pane

0x9bbe,	// (0x0004b9ed) bg_cell_vkbss_key_g1_ParamLimits

0x9bbe,	// (0x0004b9ed) bg_cell_vkbss_key_g1

0xf3c1,	// (0x000511f0) cell_vkbss_key_3p_pane_ParamLimits

0xf3c1,	// (0x000511f0) cell_vkbss_key_3p_pane

0xf3d5,	// (0x00051204) cell_vkbss_key_g1_ParamLimits

0xf3d5,	// (0x00051204) cell_vkbss_key_g1

0xf3e9,	// (0x00051218) cell_vkbss_key_t1_ParamLimits

0xf3e9,	// (0x00051218) cell_vkbss_key_t1

0x932b,	// (0x0004b15a) cell_ituss_key_pane_ParamLimits

0x932b,	// (0x0004b15a) cell_ituss_key_pane

0xf414,	// (0x00051243) bg_cell_ituss_key_g1_ParamLimits

0xf414,	// (0x00051243) bg_cell_ituss_key_g1

0xf420,	// (0x0005124f) cell_ituss_key_pane_g1_ParamLimits

0xf420,	// (0x0005124f) cell_ituss_key_pane_g1

0x933c,	// (0x0004b16b) cell_ituss_key_pane_g2_ParamLimits

0x933c,	// (0x0004b16b) cell_ituss_key_pane_g2

0x0002,

0xfeea,	// (0x00051d19) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x00051d19) cell_ituss_key_pane_g

0x9368,	// (0x0004b197) cell_ituss_key_t1_ParamLimits

0x9368,	// (0x0004b197) cell_ituss_key_t1

0x93a2,	// (0x0004b1d1) cell_ituss_key_t2_ParamLimits

0x93a2,	// (0x0004b1d1) cell_ituss_key_t2

0x93d3,	// (0x0004b202) cell_ituss_key_t3_ParamLimits

0x93d3,	// (0x0004b202) cell_ituss_key_t3

0x93a2,	// (0x0004b1d1) cell_ituss_key_t4_ParamLimits

0x93a2,	// (0x0004b1d1) cell_ituss_key_t4

0x0004,

0xfef1,	// (0x00051d20) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00051d20) cell_ituss_key_t

0xf446,	// (0x00051275) cell_vkbss_key_3p_pane_g1

0xf44e,	// (0x0005127d) cell_vkbss_key_3p_pane_g2

0xf456,	// (0x00051285) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x00051d2b) cell_vkbss_key_3p_pane_g

0x09a2,	// (0x000427d1) bg_popup_fep_char_preview_window_cp02

0x9416,	// (0x0004b245) popup_fep_char_pre_window_t1

0xe8ed,	// (0x0005071c) main_ai5_sk_pane

0xef6c,	// (0x00050d9b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef78,	// (0x00050da7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9f1,	// (0x0004e820) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef8d,	// (0x00050dbc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00051cfd) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef99,	// (0x00050dc8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0dc4,	// (0x00042bf3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf45e,	// (0x0005128d) main_ai5_sk_pane_g1

0xa20d,	// (0x0004c03c) popup_query_code_window_g1

0xf371,	// (0x000511a0) popup_fep_vkb_icf_pane

0xf390,	// (0x000511bf) popup_fep_vtchi_icf_pane

0xf467,	// (0x00051296) bg_icf_pane

0xf473,	// (0x000512a2) list_vkb_icf_pane

0xf482,	// (0x000512b1) bg_icf_pane_cp01

0xf495,	// (0x000512c4) vtchi_icf_list_pane

0xf4a5,	// (0x000512d4) list_vkb_icf_pane_t1_ParamLimits

0xf4a5,	// (0x000512d4) list_vkb_icf_pane_t1

0xf4bc,	// (0x000512eb) vtchi_icf_list_pane_t1_ParamLimits

0xf4bc,	// (0x000512eb) vtchi_icf_list_pane_t1

0xf35b,	// (0x0005118a) popup_fep_ituss_window_ParamLimits

0xf390,	// (0x000511bf) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b2,	// (0x000511e1) ituss_keypad_pane_ParamLimits

0x92fd,	// (0x0004b12c) ituss_sks_pane

0xf467,	// (0x00051296) bg_icf_pane_ParamLimits

0xf337,	// (0x00051166) icf_edit_indi_pane_ParamLimits

0xf337,	// (0x00051166) icf_edit_indi_pane

0xf473,	// (0x000512a2) list_vkb_icf_pane_ParamLimits

0xf482,	// (0x000512b1) bg_icf_pane_cp01_ParamLimits

0xf346,	// (0x00051175) icf_edit_indi_pane_cp01_ParamLimits

0xf346,	// (0x00051175) icf_edit_indi_pane_cp01

0xf49d,	// (0x000512cc) vtchi_query_pane

0xc55a,	// (0x0004e389) icf_edit_indi_pane_g1_ParamLimits

0xc55a,	// (0x0004e389) icf_edit_indi_pane_g1

0xf531,	// (0x00051360) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00051360) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00051d43) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00051d43) icf_edit_indi_pane_g

0xf540,	// (0x0005136f) icf_edit_indi_pane_t1

0xf4da,	// (0x00051309) bg_input_focus_pane_cp042

0x0d06,	// (0x00042b35) vtchi_button_pane

0xf4e3,	// (0x00051312) vtchi_query_pane_t1

0xf4f1,	// (0x00051320) vtchi_query_pane_t2

0xf4ff,	// (0x0005132e) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00051d32) vtchi_query_pane_t

0x09a2,	// (0x000427d1) bg_button_pane_cp13

0xf50d,	// (0x0005133c) vtchi_button_pane_g1

0x9425,	// (0x0004b254) ituss_sks_pane_g1

0x9430,	// (0x0004b25f) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00051d39) ituss_sks_pane_g

0xf515,	// (0x00051344) ituss_sks_pane_t1

0xf523,	// (0x00051352) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00051d3e) ituss_sks_pane_t

0xbd6d,	// (0x0004db9c) indicator_nsta_pane_cp_g1

0xbd75,	// (0x0004dba4) indicator_nsta_pane_cp_g2

0xbd7d,	// (0x0004dbac) indicator_nsta_pane_cp_g3

0xbd6d,	// (0x0004db9c) indicator_nsta_pane_cp_g4

0xbd75,	// (0x0004dba4) indicator_nsta_pane_cp_g5

0xbd7d,	// (0x0004dbac) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x000518ee) indicator_nsta_pane_cp_g

0xe4ad,	// (0x000502dc) cell_graphic2_pane_t2_ParamLimits

0xe4ad,	// (0x000502dc) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x00051bf4) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x00051bf4) cell_graphic2_pane_t

0xe4da,	// (0x00050309) cell_graphic2_control_pane_t1

0x7271,	// (0x000490a0) signal_pane_g3_ParamLimits

0x7271,	// (0x000490a0) signal_pane_g3

0x7283,	// (0x000490b2) signal_pane_g4_ParamLimits

0x7283,	// (0x000490b2) signal_pane_g4

0xf321,	// (0x00051150) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf321,	// (0x00051150) cell_ai5_widget_list_row_pane_t3

0xf434,	// (0x00051263) cell_ituss_key_pane_t1_ParamLimits

0xf434,	// (0x00051263) cell_ituss_key_pane_t1

0x9e54,	// (0x0004bc83) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e54,	// (0x0004bc83) form_field_data_wide_pane_vc_t2

0x9e68,	// (0x0004bc97) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e68,	// (0x0004bc97) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00051633) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00051633) form_field_data_wide_pane_vc_t

0xba29,	// (0x0004d858) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba29,	// (0x0004d858) form_field_slider_wide_pane_vc_t3

0xbb07,	// (0x0004d936) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb07,	// (0x0004d936) form_field_popup_wide_pane_vc_t2

0xbb1e,	// (0x0004d94d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb1e,	// (0x0004d94d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x000518dd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x000518dd) form_field_popup_wide_pane_vc_t

0x9107,	// (0x0004af36) aid_fshwr2_btn_pane_ParamLimits

0x9113,	// (0x0004af42) aid_fshwr2_syb_pane_ParamLimits

0x9124,	// (0x0004af53) aid_fshwr2_txt_pane_ParamLimits

0x0dc4,	// (0x00042bf3) fshwr2_bg_pane_ParamLimits

0x9130,	// (0x0004af5f) fshwr2_func_candi_pane_ParamLimits

0x9148,	// (0x0004af77) fshwr2_hwr_syb_pane_ParamLimits

0x915f,	// (0x0004af8e) fshwr2_icf_pane_ParamLimits

0x8418,	// (0x0004a247) list_double_graphic_pane_vc_g4_ParamLimits

0x8418,	// (0x0004a247) list_double_graphic_pane_vc_g4

0x935c,	// (0x0004b18b) cell_ituss_key_pane_g3_ParamLimits

0x935c,	// (0x0004b18b) cell_ituss_key_pane_g3

0x9404,	// (0x0004b233) cell_ituss_key_t5_ParamLimits

0x9404,	// (0x0004b233) cell_ituss_key_t5

0xf37c,	// (0x000511ab) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
