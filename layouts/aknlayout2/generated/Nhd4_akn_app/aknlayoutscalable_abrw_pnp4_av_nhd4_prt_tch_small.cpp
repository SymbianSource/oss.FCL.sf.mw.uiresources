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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00031c5c };

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
0x5cbb,	// (0x00037917) Screen

0x5cc7,	// (0x00037923) application_window_ParamLimits

0x5cc7,	// (0x00037923) application_window

0x2038,	// (0x00033c94) screen_g1

0x5d23,	// (0x0003797f) area_bottom_pane_ParamLimits

0x5d23,	// (0x0003797f) area_bottom_pane

0x5de9,	// (0x00037a45) area_top_pane_ParamLimits

0x5de9,	// (0x00037a45) area_top_pane

0x5e87,	// (0x00037ae3) main_pane_ParamLimits

0x5e87,	// (0x00037ae3) main_pane

0x2042,	// (0x00033c9e) misc_graphics

0x7d11,	// (0x0003996d) battery_pane_ParamLimits

0x7d11,	// (0x0003996d) battery_pane

0xa26b,	// (0x0003bec7) bg_status_flat_pane_g8

0xa273,	// (0x0003becf) bg_status_flat_pane_g9

0x7dd9,	// (0x00039a35) context_pane_ParamLimits

0x7dd9,	// (0x00039a35) context_pane

0x7eef,	// (0x00039b4b) navi_pane_ParamLimits

0x7eef,	// (0x00039b4b) navi_pane

0x7f73,	// (0x00039bcf) signal_pane_ParamLimits

0x7f73,	// (0x00039bcf) signal_pane

0x0008,

0xf839,	// (0x00041495) bg_status_flat_pane_g

0x984c,	// (0x0003b4a8) status_pane_g1_ParamLimits

0x984c,	// (0x0003b4a8) status_pane_g1

0x9860,	// (0x0003b4bc) status_pane_g2_ParamLimits

0x9860,	// (0x0003b4bc) status_pane_g2

0x986c,	// (0x0003b4c8) status_pane_g3_ParamLimits

0x986c,	// (0x0003b4c8) status_pane_g3

0x0004,

0xf765,	// (0x000413c1) status_pane_g_ParamLimits

0xf765,	// (0x000413c1) status_pane_g

0x98a0,	// (0x0003b4fc) title_pane_ParamLimits

0x98a0,	// (0x0003b4fc) title_pane

0x98dd,	// (0x0003b539) uni_indicator_pane_ParamLimits

0x98dd,	// (0x0003b539) uni_indicator_pane

0x2e80,	// (0x00034adc) bg_list_pane_ParamLimits

0x2e80,	// (0x00034adc) bg_list_pane

0x76dc,	// (0x00039338) find_pane

0x2596,	// (0x000341f2) listscroll_app_pane_ParamLimits

0x2596,	// (0x000341f2) listscroll_app_pane

0x2ea0,	// (0x00034afc) listscroll_form_pane

0x5c3d,	// (0x00037899) listscroll_gen_pane_ParamLimits

0x5c3d,	// (0x00037899) listscroll_gen_pane

0x76e4,	// (0x00039340) listscroll_set_pane

0x6be9,	// (0x00038845) main_idle_act_pane

0x2d14,	// (0x00034970) main_idle_trad_pane

0x2d14,	// (0x00034970) main_list_empty_pane

0x2596,	// (0x000341f2) main_midp_pane

0x2eba,	// (0x00034b16) main_pane_g1_ParamLimits

0x2eba,	// (0x00034b16) main_pane_g1

0x76fa,	// (0x00039356) popup_ai_message_window_ParamLimits

0x76fa,	// (0x00039356) popup_ai_message_window

0x779e,	// (0x000393fa) popup_fep_china_uni_window_ParamLimits

0x779e,	// (0x000393fa) popup_fep_china_uni_window

0x77f8,	// (0x00039454) popup_fep_japan_candidate_window_ParamLimits

0x77f8,	// (0x00039454) popup_fep_japan_candidate_window

0x7816,	// (0x00039472) popup_fep_japan_predictive_window_ParamLimits

0x7816,	// (0x00039472) popup_fep_japan_predictive_window

0x7846,	// (0x000394a2) popup_find_window

0x7853,	// (0x000394af) popup_grid_graphic_window_ParamLimits

0x7853,	// (0x000394af) popup_grid_graphic_window

0x787d,	// (0x000394d9) popup_large_graphic_colour_window

0x78a3,	// (0x000394ff) popup_menu_window_ParamLimits

0x78a3,	// (0x000394ff) popup_menu_window

0x7a5f,	// (0x000396bb) popup_note_image_window

0x7a4b,	// (0x000396a7) popup_note_wait_window_ParamLimits

0x7a4b,	// (0x000396a7) popup_note_wait_window

0x7a4b,	// (0x000396a7) popup_note_window_ParamLimits

0x7a4b,	// (0x000396a7) popup_note_window

0x7ab5,	// (0x00039711) popup_query_code_window_ParamLimits

0x7ab5,	// (0x00039711) popup_query_code_window

0x7ac9,	// (0x00039725) popup_query_data_code_window_ParamLimits

0x7ac9,	// (0x00039725) popup_query_data_code_window

0x7ae6,	// (0x00039742) popup_query_data_window_ParamLimits

0x7ae6,	// (0x00039742) popup_query_data_window

0x7b02,	// (0x0003975e) popup_query_sat_info_window_ParamLimits

0x7b02,	// (0x0003975e) popup_query_sat_info_window

0x7b3b,	// (0x00039797) popup_snote_single_graphic_window_ParamLimits

0x7b3b,	// (0x00039797) popup_snote_single_graphic_window

0x7b3b,	// (0x00039797) popup_snote_single_text_window_ParamLimits

0x7b3b,	// (0x00039797) popup_snote_single_text_window

0x7b50,	// (0x000397ac) popup_sub_window_general

0x7c80,	// (0x000398dc) popup_window_general_ParamLimits

0x7c80,	// (0x000398dc) popup_window_general

0x7c95,	// (0x000398f1) power_save_pane

0x7543,	// (0x0003919f) control_pane_g1_ParamLimits

0x7543,	// (0x0003919f) control_pane_g1

0x756a,	// (0x000391c6) control_pane_g2_ParamLimits

0x756a,	// (0x000391c6) control_pane_g2

0x2e6a,	// (0x00034ac6) control_pane_g3_ParamLimits

0x2e6a,	// (0x00034ac6) control_pane_g3

0x0007,

0xf74d,	// (0x000413a9) control_pane_g_ParamLimits

0xf74d,	// (0x000413a9) control_pane_g

0x75db,	// (0x00039237) control_pane_t1_ParamLimits

0x75db,	// (0x00039237) control_pane_t1

0x7631,	// (0x0003928d) control_pane_t2_ParamLimits

0x7631,	// (0x0003928d) control_pane_t2

0x0002,

0xf75e,	// (0x000413ba) control_pane_t_ParamLimits

0xf75e,	// (0x000413ba) control_pane_t

0x74bc,	// (0x00039118) navi_navi_volume_pane_cp1

0x74c4,	// (0x00039120) status_small_icon_pane

0x2e16,	// (0x00034a72) status_small_pane_g1_ParamLimits

0x2e16,	// (0x00034a72) status_small_pane_g1

0x74cc,	// (0x00039128) status_small_pane_g2_ParamLimits

0x74cc,	// (0x00039128) status_small_pane_g2

0x2e4a,	// (0x00034aa6) status_small_pane_g3_ParamLimits

0x2e4a,	// (0x00034aa6) status_small_pane_g3

0x74d8,	// (0x00039134) status_small_pane_g4_ParamLimits

0x74d8,	// (0x00039134) status_small_pane_g4

0x74e4,	// (0x00039140) status_small_pane_g5_ParamLimits

0x74e4,	// (0x00039140) status_small_pane_g5

0x74f2,	// (0x0003914e) status_small_pane_g6_ParamLimits

0x74f2,	// (0x0003914e) status_small_pane_g6

0x0007,

0xf73c,	// (0x00041398) status_small_pane_g_ParamLimits

0xf73c,	// (0x00041398) status_small_pane_g

0x750d,	// (0x00039169) status_small_pane_t1

0x752f,	// (0x0003918b) status_small_wait_pane_ParamLimits

0x752f,	// (0x0003918b) status_small_wait_pane

0x6fd2,	// (0x00038c2e) aid_levels_signal_ParamLimits

0x6fd2,	// (0x00038c2e) aid_levels_signal

0x6fe4,	// (0x00038c40) signal_pane_g1_ParamLimits

0x6fe4,	// (0x00038c40) signal_pane_g1

0x6ff9,	// (0x00038c55) signal_pane_g2_ParamLimits

0x6ff9,	// (0x00038c55) signal_pane_g2

0x0003,

0xf6cd,	// (0x00041329) signal_pane_g_ParamLimits

0xf6cd,	// (0x00041329) signal_pane_g

0x28fe,	// (0x0003455a) context_pane_g1

0x60c8,	// (0x00037d24) title_pane_g1

0x60f2,	// (0x00037d4e) title_pane_t1

0x2058,	// (0x00033cb4) title_pane_t2

0x207e,	// (0x00033cda) title_pane_t3

0x0002,

0xf530,	// (0x0004118c) title_pane_t

0x98f5,	// (0x0003b551) aid_levels_battery_ParamLimits

0x98f5,	// (0x0003b551) aid_levels_battery

0x9909,	// (0x0003b565) battery_pane_g1_ParamLimits

0x9909,	// (0x0003b565) battery_pane_g1

0x991f,	// (0x0003b57b) battery_pane_g2_ParamLimits

0x991f,	// (0x0003b57b) battery_pane_g2

0x0001,

0xf770,	// (0x000413cc) battery_pane_g_ParamLimits

0xf770,	// (0x000413cc) battery_pane_g

0xab8f,	// (0x0003c7eb) uni_indicator_pane_g1

0xaba2,	// (0x0003c7fe) uni_indicator_pane_g2

0xabb4,	// (0x0003c810) uni_indicator_pane_g3

0x0005,

0xf8e1,	// (0x0004153d) uni_indicator_pane_g

0x2ba7,	// (0x00034803) navi_icon_pane_ParamLimits

0x2ba7,	// (0x00034803) navi_icon_pane

0x2af0,	// (0x0003474c) navi_midp_pane

0x2bc3,	// (0x0003481f) navi_navi_pane

0x2bcd,	// (0x00034829) navi_text_pane_ParamLimits

0x2bcd,	// (0x00034829) navi_text_pane

0x2038,	// (0x00033c94) status_small_wait_pane_g1

0x22cf,	// (0x00033f2b) status_small_wait_pane_g2

0x0001,

0xf8dc,	// (0x00041538) status_small_wait_pane_g

0xa8b6,	// (0x0003c512) navi_navi_icon_text_pane

0xa8be,	// (0x0003c51a) navi_navi_pane_g1_ParamLimits

0xa8be,	// (0x0003c51a) navi_navi_pane_g1

0xa8d0,	// (0x0003c52c) navi_navi_pane_g2_ParamLimits

0xa8d0,	// (0x0003c52c) navi_navi_pane_g2

0x0001,

0xf8aa,	// (0x00041506) navi_navi_pane_g_ParamLimits

0xf8aa,	// (0x00041506) navi_navi_pane_g

0xa8e2,	// (0x0003c53e) navi_navi_tabs_pane

0xa8eb,	// (0x0003c547) navi_navi_text_pane

0xa8b6,	// (0x0003c512) navi_navi_volume_pane

0xa892,	// (0x0003c4ee) navi_text_pane_t1

0xa886,	// (0x0003c4e2) navi_icon_pane_g1

0xa7d9,	// (0x0003c435) navi_navi_text_pane_t1

0x8286,	// (0x00039ee2) navi_navi_volume_pane_g1

0x828e,	// (0x00039eea) volume_small_pane

0xa73f,	// (0x0003c39b) navi_navi_icon_text_pane_g1

0xa747,	// (0x0003c3a3) navi_navi_icon_text_pane_t1

0x2bc3,	// (0x0003481f) navi_tabs_2_long_pane

0x2bc3,	// (0x0003481f) navi_tabs_2_pane

0x2bc3,	// (0x0003481f) navi_tabs_3_long_pane

0x2bc3,	// (0x0003481f) navi_tabs_3_pane

0x2bc3,	// (0x0003481f) navi_tabs_4_pane

0x8266,	// (0x00039ec2) tabs_2_active_pane_ParamLimits

0x8266,	// (0x00039ec2) tabs_2_active_pane

0x8276,	// (0x00039ed2) tabs_2_passive_pane_ParamLimits

0x8276,	// (0x00039ed2) tabs_2_passive_pane

0x8234,	// (0x00039e90) tabs_3_active_pane_ParamLimits

0x8234,	// (0x00039e90) tabs_3_active_pane

0x8244,	// (0x00039ea0) tabs_3_passive_pane_ParamLimits

0x8244,	// (0x00039ea0) tabs_3_passive_pane

0x8255,	// (0x00039eb1) tabs_3_passive_pane_cp_ParamLimits

0x8255,	// (0x00039eb1) tabs_3_passive_pane_cp

0x81f0,	// (0x00039e4c) tabs_4_active_pane_ParamLimits

0x81f0,	// (0x00039e4c) tabs_4_active_pane

0x8201,	// (0x00039e5d) tabs_4_passive_pane_ParamLimits

0x8201,	// (0x00039e5d) tabs_4_passive_pane

0x8212,	// (0x00039e6e) tabs_4_passive_pane_cp_ParamLimits

0x8212,	// (0x00039e6e) tabs_4_passive_pane_cp

0x8223,	// (0x00039e7f) tabs_4_passive_pane_cp2_ParamLimits

0x8223,	// (0x00039e7f) tabs_4_passive_pane_cp2

0x81cc,	// (0x00039e28) tabs_2_long_active_pane_ParamLimits

0x81cc,	// (0x00039e28) tabs_2_long_active_pane

0x81de,	// (0x00039e3a) tabs_2_long_passive_pane_ParamLimits

0x81de,	// (0x00039e3a) tabs_2_long_passive_pane

0x8187,	// (0x00039de3) tabs_3_long_active_pane_ParamLimits

0x8187,	// (0x00039de3) tabs_3_long_active_pane

0x81a0,	// (0x00039dfc) tabs_3_long_passive_pane_ParamLimits

0x81a0,	// (0x00039dfc) tabs_3_long_passive_pane

0x81b3,	// (0x00039e0f) tabs_3_long_passive_pane_cp_ParamLimits

0x81b3,	// (0x00039e0f) tabs_3_long_passive_pane_cp

0x812d,	// (0x00039d89) volume_small_pane_g1

0x8136,	// (0x00039d92) volume_small_pane_g2

0x813f,	// (0x00039d9b) volume_small_pane_g3

0x8148,	// (0x00039da4) volume_small_pane_g4

0x8151,	// (0x00039dad) volume_small_pane_g5

0x815a,	// (0x00039db6) volume_small_pane_g6

0x8163,	// (0x00039dbf) volume_small_pane_g7

0x816c,	// (0x00039dc8) volume_small_pane_g8

0x8175,	// (0x00039dd1) volume_small_pane_g9

0x817e,	// (0x00039dda) volume_small_pane_g10

0x0009,

0xf876,	// (0x000414d2) volume_small_pane_g

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp2_ParamLimits

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp2

0x615a,	// (0x00037db6) tabs_3_active_pane_g1

0x6162,	// (0x00037dbe) tabs_3_active_pane_t1

0x209e,	// (0x00033cfa) bg_passive_tab_pane_cp2_ParamLimits

0x209e,	// (0x00033cfa) bg_passive_tab_pane_cp2

0x615a,	// (0x00037db6) tabs_3_passive_pane_g1

0x6162,	// (0x00037dbe) tabs_3_passive_pane_t1

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp3_ParamLimits

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp3

0x6174,	// (0x00037dd0) tabs_4_active_pane_g1

0x617c,	// (0x00037dd8) tabs_4_active_pane_t1

0x209e,	// (0x00033cfa) bg_passive_tab_pane_cp3_ParamLimits

0x209e,	// (0x00033cfa) bg_passive_tab_pane_cp3

0x6174,	// (0x00037dd0) tabs_4_1_passive_pane_g1

0x617c,	// (0x00037dd8) tabs_4_1_passive_pane_t1

0x2596,	// (0x000341f2) list_highlight_pane_cp2

0xade7,	// (0x0003ca43) list_set_pane_ParamLimits

0xade7,	// (0x0003ca43) list_set_pane

0xae89,	// (0x0003cae5) main_pane_set_t1_ParamLimits

0xae89,	// (0x0003cae5) main_pane_set_t1

0xaea9,	// (0x0003cb05) main_pane_set_t2_ParamLimits

0xaea9,	// (0x0003cb05) main_pane_set_t2

0xaebd,	// (0x0003cb19) main_pane_set_t3_ParamLimits

0xaebd,	// (0x0003cb19) main_pane_set_t3

0xaecf,	// (0x0003cb2b) main_pane_set_t4_ParamLimits

0xaecf,	// (0x0003cb2b) main_pane_set_t4

0x0003,

0xf946,	// (0x000415a2) main_pane_set_t_ParamLimits

0xf946,	// (0x000415a2) main_pane_set_t

0xaee1,	// (0x0003cb3d) setting_code_pane

0xaeed,	// (0x0003cb49) setting_slider_graphic_pane

0xaeed,	// (0x0003cb49) setting_slider_pane

0xaeed,	// (0x0003cb49) setting_text_pane

0xaeed,	// (0x0003cb49) setting_volume_pane

0x618e,	// (0x00037dea) volume_set_pane

0x209e,	// (0x00033cfa) bg_set_opt_pane_cp

0x6196,	// (0x00037df2) setting_slider_pane_t1

0x61af,	// (0x00037e0b) setting_slider_pane_t2

0x61c9,	// (0x00037e25) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00041193) setting_slider_pane_t

0x61e1,	// (0x00037e3d) slider_set_pane

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp2

0x20ac,	// (0x00033d08) setting_slider_graphic_pane_g1

0x61f7,	// (0x00037e53) setting_slider_graphic_pane_t1

0x6207,	// (0x00037e63) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0004119a) setting_slider_graphic_pane_t

0x6217,	// (0x00037e73) slider_set_pane_cp

0x2042,	// (0x00033c9e) input_focus_pane_cp1

0xada6,	// (0x0003ca02) list_set_text_pane

0x2038,	// (0x00033c94) setting_text_pane_g1

0x2042,	// (0x00033c9e) input_focus_pane_cp2

0x2038,	// (0x00033c94) setting_code_pane_g1

0x20b5,	// (0x00033d11) setting_code_pane_t1

0x4549,	// (0x000361a5) set_text_pane_t1_ParamLimits

0x4549,	// (0x000361a5) set_text_pane_t1

0x24ac,	// (0x00034108) set_opt_bg_pane_g1

0x24b4,	// (0x00034110) set_opt_bg_pane_g2

0xad80,	// (0x0003c9dc) set_opt_bg_pane_g3

0x24c4,	// (0x00034120) set_opt_bg_pane_g4

0x24cc,	// (0x00034128) set_opt_bg_pane_g5

0x24d4,	// (0x00034130) set_opt_bg_pane_g6

0xad8a,	// (0x0003c9e6) set_opt_bg_pane_g7

0xad92,	// (0x0003c9ee) set_opt_bg_pane_g8

0xad9c,	// (0x0003c9f8) set_opt_bg_pane_g9

0x0008,

0xf933,	// (0x0004158f) set_opt_bg_pane_g

0xad73,	// (0x0003c9cf) slider_set_pane_g1

0x830d,	// (0x00039f69) slider_set_pane_g2

0x0006,

0xf924,	// (0x00041580) slider_set_pane_g

0x8297,	// (0x00039ef3) volume_set_pane_g1

0x829f,	// (0x00039efb) volume_set_pane_g2

0x82a7,	// (0x00039f03) volume_set_pane_g3

0x82af,	// (0x00039f0b) volume_set_pane_g4

0x82b7,	// (0x00039f13) volume_set_pane_g5

0x82bf,	// (0x00039f1b) volume_set_pane_g6

0x82c7,	// (0x00039f23) volume_set_pane_g7

0x82cf,	// (0x00039f2b) volume_set_pane_g8

0x82d7,	// (0x00039f33) volume_set_pane_g9

0x82df,	// (0x00039f3b) volume_set_pane_g10

0x0009,

0xf8fc,	// (0x00041558) volume_set_pane_g

0x621f,	// (0x00037e7b) indicator_pane_ParamLimits

0x621f,	// (0x00037e7b) indicator_pane

0x622b,	// (0x00037e87) main_idle_pane_g2_ParamLimits

0x622b,	// (0x00037e87) main_idle_pane_g2

0x6253,	// (0x00037eaf) main_pane_idle_g1_ParamLimits

0x6253,	// (0x00037eaf) main_pane_idle_g1

0x20c3,	// (0x00033d1f) popup_clock_digital_analogue_window_ParamLimits

0x20c3,	// (0x00033d1f) popup_clock_digital_analogue_window

0x6260,	// (0x00037ebc) soft_indicator_pane_ParamLimits

0x6260,	// (0x00037ebc) soft_indicator_pane

0x626c,	// (0x00037ec8) wallpaper_pane_ParamLimits

0x626c,	// (0x00037ec8) wallpaper_pane

0x2038,	// (0x00033c94) wallpaper_pane_g1

0x6278,	// (0x00037ed4) indicator_pane_g1_ParamLimits

0x6278,	// (0x00037ed4) indicator_pane_g1

0xb1c0,	// (0x0003ce1c) navi_navi_icon_text_pane_srt_g1

0x20f1,	// (0x00033d4d) soft_indicator_pane_t1

0x210b,	// (0x00033d67) aid_ps_area_pane

0x6284,	// (0x00037ee0) aid_ps_clock_pane

0x211c,	// (0x00033d78) aid_ps_indicator_pane

0x2128,	// (0x00033d84) indicator_ps_pane_ParamLimits

0x2128,	// (0x00033d84) indicator_ps_pane

0x2137,	// (0x00033d93) power_save_pane_g1_ParamLimits

0x2137,	// (0x00033d93) power_save_pane_g1

0x2143,	// (0x00033d9f) power_save_pane_g2_ParamLimits

0x2143,	// (0x00033d9f) power_save_pane_g2

0x5cd7,	// (0x00037933) aid_navinavi_width_pane

0x210b,	// (0x00033d67) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0004119f) power_save_pane_g_ParamLimits

0xf543,	// (0x0004119f) power_save_pane_g

0x2151,	// (0x00033dad) power_save_pane_t1_ParamLimits

0x2151,	// (0x00033dad) power_save_pane_t1

0x6284,	// (0x00037ee0) aid_ps_clock_pane_ParamLimits

0x211c,	// (0x00033d78) aid_ps_indicator_pane_ParamLimits

0x2163,	// (0x00033dbf) power_save_pane_t4_ParamLimits

0x2163,	// (0x00033dbf) power_save_pane_t4

0x0001,

0xf548,	// (0x000411a4) power_save_pane_t_ParamLimits

0xf548,	// (0x000411a4) power_save_pane_t

0x218d,	// (0x00033de9) power_save_t3_ParamLimits

0x218d,	// (0x00033de9) power_save_t3

0x2178,	// (0x00033dd4) power_save_t2_ParamLimits

0x2178,	// (0x00033dd4) power_save_t2

0x21a2,	// (0x00033dfe) indicator_ps_pane_g1

0x6292,	// (0x00037eee) ai_gene_pane_ParamLimits

0x6292,	// (0x00037eee) ai_gene_pane

0x629e,	// (0x00037efa) ai_links_pane_ParamLimits

0x629e,	// (0x00037efa) ai_links_pane

0x62aa,	// (0x00037f06) indicator_pane_cp1_ParamLimits

0x62aa,	// (0x00037f06) indicator_pane_cp1

0x62b6,	// (0x00037f12) main_pane_idle_g1_cp_ParamLimits

0x62b6,	// (0x00037f12) main_pane_idle_g1_cp

0x62c2,	// (0x00037f1e) popup_ai_links_title_window

0x62cb,	// (0x00037f27) soft_indicator_pane_cp1_ParamLimits

0x62cb,	// (0x00037f27) soft_indicator_pane_cp1

0xab7d,	// (0x0003c7d9) ai_links_pane_g1

0xab86,	// (0x0003c7e2) grid_ai_links_pane

0xab60,	// (0x0003c7bc) ai_gene_pane_1

0xab6b,	// (0x0003c7c7) ai_gene_pane_2

0xab74,	// (0x0003c7d0) list_highlight_pane_cp4

0xab44,	// (0x0003c7a0) cell_ai_link_pane_ParamLimits

0xab44,	// (0x0003c7a0) cell_ai_link_pane

0xab3c,	// (0x0003c798) cell_ai_link_pane_g1

0x22cf,	// (0x00033f2b) cell_ai_link_pane_g2

0x0001,

0xf8d7,	// (0x00041533) cell_ai_link_pane_g

0x2042,	// (0x00033c9e) grid_highlight_cp2

0x2042,	// (0x00033c9e) bg_popup_sub_pane_cp1

0x21b9,	// (0x00033e15) popup_ai_links_title_window_t1

0xaa8c,	// (0x0003c6e8) ai_gene_pane_1_g1_ParamLimits

0xaa8c,	// (0x0003c6e8) ai_gene_pane_1_g1

0xaa98,	// (0x0003c6f4) ai_gene_pane_1_g2_ParamLimits

0xaa98,	// (0x0003c6f4) ai_gene_pane_1_g2

0x0001,

0xf8cd,	// (0x00041529) ai_gene_pane_1_g_ParamLimits

0xf8cd,	// (0x00041529) ai_gene_pane_1_g

0xaaa5,	// (0x0003c701) ai_gene_pane_1_t1_ParamLimits

0xaaa5,	// (0x0003c701) ai_gene_pane_1_t1

0xaad9,	// (0x0003c735) grid_ai_soft_ind_pane

0xaa77,	// (0x0003c6d3) ai_gene_pane_2_t1_ParamLimits

0xaa77,	// (0x0003c6d3) ai_gene_pane_2_t1

0x62d7,	// (0x00037f33) main_pane_empty_t1_ParamLimits

0x62d7,	// (0x00037f33) main_pane_empty_t1

0x62ef,	// (0x00037f4b) main_pane_empty_t2_ParamLimits

0x62ef,	// (0x00037f4b) main_pane_empty_t2

0x6304,	// (0x00037f60) main_pane_empty_t3_ParamLimits

0x6304,	// (0x00037f60) main_pane_empty_t3

0x6316,	// (0x00037f72) main_pane_empty_t4_ParamLimits

0x6316,	// (0x00037f72) main_pane_empty_t4

0x6328,	// (0x00037f84) main_pane_empty_t5_ParamLimits

0x6328,	// (0x00037f84) main_pane_empty_t5

0x0004,

0xf54d,	// (0x000411a9) main_pane_empty_t_ParamLimits

0xf54d,	// (0x000411a9) main_pane_empty_t

0x2531,	// (0x0003418d) bg_popup_window_pane_ParamLimits

0x2531,	// (0x0003418d) bg_popup_window_pane

0xa7e7,	// (0x0003c443) find_popup_pane_cp2_ParamLimits

0xa7e7,	// (0x0003c443) find_popup_pane_cp2

0xa7f3,	// (0x0003c44f) heading_pane_ParamLimits

0xa7f3,	// (0x0003c44f) heading_pane

0x2042,	// (0x00033c9e) bg_popup_sub_pane

0xa761,	// (0x0003c3bd) bg_popup_window_pane_g1_ParamLimits

0xa761,	// (0x0003c3bd) bg_popup_window_pane_g1

0xa76d,	// (0x0003c3c9) bg_popup_window_pane_g2_ParamLimits

0xa76d,	// (0x0003c3c9) bg_popup_window_pane_g2

0xa779,	// (0x0003c3d5) bg_popup_window_pane_g3_ParamLimits

0xa779,	// (0x0003c3d5) bg_popup_window_pane_g3

0xa785,	// (0x0003c3e1) bg_popup_window_pane_g4_ParamLimits

0xa785,	// (0x0003c3e1) bg_popup_window_pane_g4

0xa791,	// (0x0003c3ed) bg_popup_window_pane_g5_ParamLimits

0xa791,	// (0x0003c3ed) bg_popup_window_pane_g5

0xa79d,	// (0x0003c3f9) bg_popup_window_pane_g6_ParamLimits

0xa79d,	// (0x0003c3f9) bg_popup_window_pane_g6

0xa7a9,	// (0x0003c405) bg_popup_window_pane_g7_ParamLimits

0xa7a9,	// (0x0003c405) bg_popup_window_pane_g7

0xa7b5,	// (0x0003c411) bg_popup_window_pane_g8_ParamLimits

0xa7b5,	// (0x0003c411) bg_popup_window_pane_g8

0xa7c1,	// (0x0003c41d) bg_popup_window_pane_g9_ParamLimits

0xa7c1,	// (0x0003c41d) bg_popup_window_pane_g9

0xa7cd,	// (0x0003c429) bg_popup_window_pane_g10_ParamLimits

0xa7cd,	// (0x0003c429) bg_popup_window_pane_g10

0x0009,

0xf895,	// (0x000414f1) bg_popup_window_pane_g_ParamLimits

0xf895,	// (0x000414f1) bg_popup_window_pane_g

0xa6f6,	// (0x0003c352) bg_popup_heading_pane_ParamLimits

0xa6f6,	// (0x0003c352) bg_popup_heading_pane

0x8448,	// (0x0003a0a4) tabs_4_passive_pane_cp_srt_ParamLimits

0x8448,	// (0x0003a0a4) tabs_4_passive_pane_cp_srt

0x845a,	// (0x0003a0b6) tabs_4_passive_pane_srt_ParamLimits

0xa70a,	// (0x0003c366) heading_pane_g2

0x845a,	// (0x0003a0b6) tabs_4_passive_pane_srt

0x2596,	// (0x000341f2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2596,	// (0x000341f2) bg_passive_tab_pane_cp3_srt

0xa712,	// (0x0003c36e) heading_pane_t1_ParamLimits

0xa712,	// (0x0003c36e) heading_pane_t1

0xa729,	// (0x0003c385) heading_pane_t2_ParamLimits

0xa729,	// (0x0003c385) heading_pane_t2

0x0001,

0xf890,	// (0x000414ec) heading_pane_t_ParamLimits

0xf890,	// (0x000414ec) heading_pane_t

0xa233,	// (0x0003be8f) bg_popup_heading_pane_g1

0xa2e2,	// (0x0003bf3e) bg_popup_heading_pane_g2

0xa2ec,	// (0x0003bf48) bg_popup_heading_pane_g3

0xa2f6,	// (0x0003bf52) bg_popup_heading_pane_g4

0xa300,	// (0x0003bf5c) bg_popup_heading_pane_g5

0xa30a,	// (0x0003bf66) bg_popup_heading_pane_g6

0xa312,	// (0x0003bf6e) bg_popup_heading_pane_g7

0xa31a,	// (0x0003bf76) bg_popup_heading_pane_g8

0xa324,	// (0x0003bf80) bg_popup_heading_pane_g9

0x0008,

0xf84c,	// (0x000414a8) bg_popup_heading_pane_g

0x99f4,	// (0x0003b650) bg_popup_sub_pane_g1

0x9a04,	// (0x0003b660) bg_popup_sub_pane_g2

0x99fc,	// (0x0003b658) bg_popup_sub_pane_g3

0x9a14,	// (0x0003b670) bg_popup_sub_pane_g4

0x9a0c,	// (0x0003b668) bg_popup_sub_pane_g5

0x9a1c,	// (0x0003b678) bg_popup_sub_pane_g6

0x9a24,	// (0x0003b680) bg_popup_sub_pane_g7

0x9a34,	// (0x0003b690) bg_popup_sub_pane_g8

0x9a2c,	// (0x0003b688) bg_popup_sub_pane_g9

0x0008,

0xf826,	// (0x00041482) bg_popup_sub_pane_g

0x2090,	// (0x00033cec) bg_popup_window_pane_cp5_ParamLimits

0x2090,	// (0x00033cec) bg_popup_window_pane_cp5

0x21d6,	// (0x00033e32) popup_note_window_g1_ParamLimits

0x21d6,	// (0x00033e32) popup_note_window_g1

0x21e2,	// (0x00033e3e) popup_note_window_t1_ParamLimits

0x21e2,	// (0x00033e3e) popup_note_window_t1

0x21f8,	// (0x00033e54) popup_note_window_t2_ParamLimits

0x21f8,	// (0x00033e54) popup_note_window_t2

0x220e,	// (0x00033e6a) popup_note_window_t3_ParamLimits

0x220e,	// (0x00033e6a) popup_note_window_t3

0x2224,	// (0x00033e80) popup_note_window_t4_ParamLimits

0x2224,	// (0x00033e80) popup_note_window_t4

0x224c,	// (0x00033ea8) popup_note_window_t5_ParamLimits

0x224c,	// (0x00033ea8) popup_note_window_t5

0x0004,

0xf558,	// (0x000411b4) popup_note_window_t_ParamLimits

0xf558,	// (0x000411b4) popup_note_window_t

0x2270,	// (0x00033ecc) bg_popup_window_pane_cp6_ParamLimits

0x2270,	// (0x00033ecc) bg_popup_window_pane_cp6

0xa1af,	// (0x0003be0b) popup_note_image_window_g1_ParamLimits

0xa1af,	// (0x0003be0b) popup_note_image_window_g1

0xa1bb,	// (0x0003be17) popup_note_image_window_g2_ParamLimits

0xa1bb,	// (0x0003be17) popup_note_image_window_g2

0x0001,

0xf81a,	// (0x00041476) popup_note_image_window_g_ParamLimits

0xf81a,	// (0x00041476) popup_note_image_window_g

0xa1d4,	// (0x0003be30) popup_note_image_window_t1_ParamLimits

0xa1d4,	// (0x0003be30) popup_note_image_window_t1

0xa1ed,	// (0x0003be49) popup_note_image_window_t2_ParamLimits

0xa1ed,	// (0x0003be49) popup_note_image_window_t2

0xa206,	// (0x0003be62) popup_note_image_window_t3_ParamLimits

0xa206,	// (0x0003be62) popup_note_image_window_t3

0x0002,

0xf81f,	// (0x0004147b) popup_note_image_window_t_ParamLimits

0xf81f,	// (0x0004147b) popup_note_image_window_t

0xa078,	// (0x0003bcd4) bg_popup_window_pane_cp7_ParamLimits

0xa078,	// (0x0003bcd4) bg_popup_window_pane_cp7

0xa0a8,	// (0x0003bd04) popup_note_wait_window_g1_ParamLimits

0xa0a8,	// (0x0003bd04) popup_note_wait_window_g1

0xa0b4,	// (0x0003bd10) popup_note_wait_window_g2_ParamLimits

0xa0b4,	// (0x0003bd10) popup_note_wait_window_g2

0x0002,

0xf808,	// (0x00041464) popup_note_wait_window_g_ParamLimits

0xf808,	// (0x00041464) popup_note_wait_window_g

0xa0cc,	// (0x0003bd28) popup_note_wait_window_t1_ParamLimits

0xa0cc,	// (0x0003bd28) popup_note_wait_window_t1

0xa0f3,	// (0x0003bd4f) popup_note_wait_window_t2_ParamLimits

0xa0f3,	// (0x0003bd4f) popup_note_wait_window_t2

0xa110,	// (0x0003bd6c) popup_note_wait_window_t3_ParamLimits

0xa110,	// (0x0003bd6c) popup_note_wait_window_t3

0xa123,	// (0x0003bd7f) popup_note_wait_window_t4_ParamLimits

0xa123,	// (0x0003bd7f) popup_note_wait_window_t4

0x0004,

0xf80f,	// (0x0004146b) popup_note_wait_window_t_ParamLimits

0xf80f,	// (0x0004146b) popup_note_wait_window_t

0xa148,	// (0x0003bda4) wait_bar_pane_ParamLimits

0xa148,	// (0x0003bda4) wait_bar_pane

0x2042,	// (0x00033c9e) wait_anim_pane

0x2042,	// (0x00033c9e) wait_border_pane

0x2038,	// (0x00033c94) wait_anim_pane_g1

0x2038,	// (0x00033c94) wait_anim_pane_g2

0x0001,

0xf6c8,	// (0x00041324) wait_anim_pane_g

0xa024,	// (0x0003bc80) wait_border_pane_g1

0xa02f,	// (0x0003bc8b) wait_border_pane_g2

0xa038,	// (0x0003bc94) wait_border_pane_g3

0x0002,

0xf801,	// (0x0004145d) wait_border_pane_g

0x9e8f,	// (0x0003baeb) bg_popup_window_pane_cp16_ParamLimits

0x9e8f,	// (0x0003baeb) bg_popup_window_pane_cp16

0x9f8f,	// (0x0003bbeb) indicator_popup_pane_cp4_ParamLimits

0x9f8f,	// (0x0003bbeb) indicator_popup_pane_cp4

0x9fa3,	// (0x0003bbff) popup_query_data_window_t1_ParamLimits

0x9fa3,	// (0x0003bbff) popup_query_data_window_t1

0x9fb5,	// (0x0003bc11) popup_query_data_window_t2_ParamLimits

0x9fb5,	// (0x0003bc11) popup_query_data_window_t2

0x9fce,	// (0x0003bc2a) popup_query_data_window_t3_ParamLimits

0x9fce,	// (0x0003bc2a) popup_query_data_window_t3

0x0002,

0xf7fa,	// (0x00041456) popup_query_data_window_t_ParamLimits

0xf7fa,	// (0x00041456) popup_query_data_window_t

0x9fe8,	// (0x0003bc44) query_popup_data_pane_ParamLimits

0x9fe8,	// (0x0003bc44) query_popup_data_pane

0x9ffc,	// (0x0003bc58) query_popup_data_pane_cp1_ParamLimits

0x9ffc,	// (0x0003bc58) query_popup_data_pane_cp1

0x9e8f,	// (0x0003baeb) bg_popup_window_pane_cp10_ParamLimits

0x9e8f,	// (0x0003baeb) bg_popup_window_pane_cp10

0x9ec1,	// (0x0003bb1d) indicator_popup_pane_ParamLimits

0x9ec1,	// (0x0003bb1d) indicator_popup_pane

0x9ee3,	// (0x0003bb3f) popup_query_code_window_t1_ParamLimits

0x9ee3,	// (0x0003bb3f) popup_query_code_window_t1

0x9efd,	// (0x0003bb59) popup_query_code_window_t2_ParamLimits

0x9efd,	// (0x0003bb59) popup_query_code_window_t2

0x9f46,	// (0x0003bba2) popup_query_code_window_t3_ParamLimits

0x9f46,	// (0x0003bba2) popup_query_code_window_t3

0x0002,

0xf7f3,	// (0x0004144f) popup_query_code_window_t_ParamLimits

0xf7f3,	// (0x0004144f) popup_query_code_window_t

0x9f75,	// (0x0003bbd1) query_popup_pane_ParamLimits

0x9f75,	// (0x0003bbd1) query_popup_pane

0x2270,	// (0x00033ecc) bg_popup_window_pane_cp15_ParamLimits

0x2270,	// (0x00033ecc) bg_popup_window_pane_cp15

0x6362,	// (0x00037fbe) indicator_popup_pane_cp1_ParamLimits

0x6362,	// (0x00037fbe) indicator_popup_pane_cp1

0x6375,	// (0x00037fd1) indicator_popup_pane_cp2_ParamLimits

0x6375,	// (0x00037fd1) indicator_popup_pane_cp2

0x6388,	// (0x00037fe4) popup_query_data_code_window_g1_ParamLimits

0x6388,	// (0x00037fe4) popup_query_data_code_window_g1

0x228e,	// (0x00033eea) popup_query_data_code_window_t1_ParamLimits

0x228e,	// (0x00033eea) popup_query_data_code_window_t1

0x22a0,	// (0x00033efc) popup_query_data_code_window_t2_ParamLimits

0x22a0,	// (0x00033efc) popup_query_data_code_window_t2

0x639b,	// (0x00037ff7) popup_query_data_code_window_t3_ParamLimits

0x639b,	// (0x00037ff7) popup_query_data_code_window_t3

0x63b1,	// (0x0003800d) popup_query_data_code_window_t4_ParamLimits

0x63b1,	// (0x0003800d) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x000411bf) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x000411bf) popup_query_data_code_window_t

0x800b,	// (0x00039c67) list_single_midp_graphic_pane_g3

0x63c9,	// (0x00038025) query_popup_data_pane_cp2_ParamLimits

0x63dc,	// (0x00038038) query_popup_pane_cp2_ParamLimits

0x63dc,	// (0x00038038) query_popup_pane_cp2

0x2042,	// (0x00033c9e) bg_popup_window_pane_cp11

0x9e73,	// (0x0003bacf) heading_pane_cp5

0x9e7b,	// (0x0003bad7) listscroll_popup_info_pane

0x2042,	// (0x00033c9e) input_focus_pane_cp3

0x22b2,	// (0x00033f0e) query_popup_pane_t1

0x22c0,	// (0x00033f1c) list_popup_info_pane_ParamLimits

0x22c0,	// (0x00033f1c) list_popup_info_pane

0x22cf,	// (0x00033f2b) listscroll_popup_info_pane_g1

0x22d7,	// (0x00033f33) scroll_pane_cp7

0x63ef,	// (0x0003804b) popup_info_list_pane_t1_ParamLimits

0x63ef,	// (0x0003804b) popup_info_list_pane_t1

0x6409,	// (0x00038065) popup_info_list_pane_t2_ParamLimits

0x6409,	// (0x00038065) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x000411c8) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x000411c8) popup_info_list_pane_t

0x2042,	// (0x00033c9e) bg_popup_window_pane_cp12

0xb1da,	// (0x0003ce36) find_popup_pane

0x209e,	// (0x00033cfa) bg_popup_window_pane_cp3

0x22e1,	// (0x00033f3d) heading_pane_cp3

0x22f0,	// (0x00033f4c) listscroll_popup_graphic_pane

0x2042,	// (0x00033c9e) bg_popup_window_pane_cp4

0x6473,	// (0x000380cf) heading_pane_cp4

0x2300,	// (0x00033f5c) listscroll_popup_colour_pane

0x647d,	// (0x000380d9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x647d,	// (0x000380d9) cell_large_graphic_colour_none_popup_pane

0x6491,	// (0x000380ed) grid_large_graphic_colour_popup_pane_ParamLimits

0x6491,	// (0x000380ed) grid_large_graphic_colour_popup_pane

0x64b5,	// (0x00038111) listscroll_popup_colour_pane_g1_ParamLimits

0x64b5,	// (0x00038111) listscroll_popup_colour_pane_g1

0x64cc,	// (0x00038128) listscroll_popup_colour_pane_g2_ParamLimits

0x64cc,	// (0x00038128) listscroll_popup_colour_pane_g2

0x64e3,	// (0x0003813f) listscroll_popup_colour_pane_g3_ParamLimits

0x64e3,	// (0x0003813f) listscroll_popup_colour_pane_g3

0x64f3,	// (0x0003814f) listscroll_popup_colour_pane_g4_ParamLimits

0x64f3,	// (0x0003814f) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x000411cd) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x000411cd) listscroll_popup_colour_pane_g

0x2308,	// (0x00033f64) scroll_pane_cp6_ParamLimits

0x2308,	// (0x00033f64) scroll_pane_cp6

0x6503,	// (0x0003815f) cell_large_graphic_colour_popup_pane_ParamLimits

0x6503,	// (0x0003815f) cell_large_graphic_colour_popup_pane

0x6522,	// (0x0003817e) cell_large_graphic_colour_none_popup_pane_t1

0x2042,	// (0x00033c9e) grid_highlight_pane_cp5

0x231a,	// (0x00033f76) cell_large_graphic_colour_popup_pane_g1

0x2322,	// (0x00033f7e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x000411d6) cell_large_graphic_colour_popup_pane_g

0x232a,	// (0x00033f86) cell_large_graphic_colour_popup_pane_g2_copy1

0x2333,	// (0x00033f8f) grid_highlight_pane_cp4

0x233b,	// (0x00033f97) bg_popup_window_pane_cp8_ParamLimits

0x233b,	// (0x00033f97) bg_popup_window_pane_cp8

0x6531,	// (0x0003818d) popup_snote_single_text_window_g1_ParamLimits

0x6531,	// (0x0003818d) popup_snote_single_text_window_g1

0x6543,	// (0x0003819f) popup_snote_single_text_window_t1_ParamLimits

0x6543,	// (0x0003819f) popup_snote_single_text_window_t1

0x6556,	// (0x000381b2) popup_snote_single_text_window_t2_ParamLimits

0x6556,	// (0x000381b2) popup_snote_single_text_window_t2

0x6569,	// (0x000381c5) popup_snote_single_text_window_t3_ParamLimits

0x6569,	// (0x000381c5) popup_snote_single_text_window_t3

0x65a2,	// (0x000381fe) popup_snote_single_text_window_t4_ParamLimits

0x65a2,	// (0x000381fe) popup_snote_single_text_window_t4

0x65d6,	// (0x00038232) popup_snote_single_text_window_t5_ParamLimits

0x65d6,	// (0x00038232) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x000411db) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x000411db) popup_snote_single_text_window_t

0x2356,	// (0x00033fb2) bg_popup_window_pane_cp9_ParamLimits

0x2356,	// (0x00033fb2) bg_popup_window_pane_cp9

0x6531,	// (0x0003818d) popup_snote_single_graphic_window_g1_ParamLimits

0x6531,	// (0x0003818d) popup_snote_single_graphic_window_g1

0x2364,	// (0x00033fc0) popup_snote_single_graphic_window_g2_ParamLimits

0x2364,	// (0x00033fc0) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x000411e6) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x000411e6) popup_snote_single_graphic_window_g

0x2370,	// (0x00033fcc) popup_snote_single_graphic_window_t1_ParamLimits

0x2370,	// (0x00033fcc) popup_snote_single_graphic_window_t1

0x2383,	// (0x00033fdf) popup_snote_single_graphic_window_t2_ParamLimits

0x2383,	// (0x00033fdf) popup_snote_single_graphic_window_t2

0x6605,	// (0x00038261) popup_snote_single_graphic_window_t3_ParamLimits

0x6605,	// (0x00038261) popup_snote_single_graphic_window_t3

0x663e,	// (0x0003829a) popup_snote_single_graphic_window_t4_ParamLimits

0x663e,	// (0x0003829a) popup_snote_single_graphic_window_t4

0x6672,	// (0x000382ce) popup_snote_single_graphic_window_t5_ParamLimits

0x6672,	// (0x000382ce) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x000411eb) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x000411eb) popup_snote_single_graphic_window_t

0xb11c,	// (0x0003cd78) grid_graphic_popup_pane_ParamLimits

0xb11c,	// (0x0003cd78) grid_graphic_popup_pane

0xb146,	// (0x0003cda2) listscroll_popup_graphic_pane_g1_ParamLimits

0xb146,	// (0x0003cda2) listscroll_popup_graphic_pane_g1

0xb15a,	// (0x0003cdb6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb15a,	// (0x0003cdb6) listscroll_popup_graphic_pane_g2

0x0001,

0xf970,	// (0x000415cc) listscroll_popup_graphic_pane_g_ParamLimits

0xf970,	// (0x000415cc) listscroll_popup_graphic_pane_g

0xb16e,	// (0x0003cdca) scroll_pane_cp5

0xb0ab,	// (0x0003cd07) cell_graphic_popup_pane_ParamLimits

0xb0ab,	// (0x0003cd07) cell_graphic_popup_pane

0xb08c,	// (0x0003cce8) cell_graphic_popup_pane_g1

0xb094,	// (0x0003ccf0) cell_graphic_popup_pane_g2

0x232a,	// (0x00033f86) cell_graphic_popup_pane_g3

0x0002,

0xf969,	// (0x000415c5) cell_graphic_popup_pane_g

0xb09d,	// (0x0003ccf9) cell_graphic_popup_pane_t2

0x2333,	// (0x00033f8f) grid_highlight_pane_cp3

0x23a8,	// (0x00034004) list_gen_pane_ParamLimits

0x23a8,	// (0x00034004) list_gen_pane

0x23d0,	// (0x0003402c) scroll_pane

0xafe4,	// (0x0003cc40) bg_list_pane_g1_ParamLimits

0xafe4,	// (0x0003cc40) bg_list_pane_g1

0xb001,	// (0x0003cc5d) bg_list_pane_g2_ParamLimits

0xb001,	// (0x0003cc5d) bg_list_pane_g2

0xb016,	// (0x0003cc72) bg_list_pane_g3_ParamLimits

0xb016,	// (0x0003cc72) bg_list_pane_g3

0xb02a,	// (0x0003cc86) bg_list_pane_g4_ParamLimits

0xb02a,	// (0x0003cc86) bg_list_pane_g4

0xb03e,	// (0x0003cc9a) bg_list_pane_g5_ParamLimits

0xb03e,	// (0x0003cc9a) bg_list_pane_g5

0x0004,

0xf95e,	// (0x000415ba) bg_list_pane_g_ParamLimits

0xf95e,	// (0x000415ba) bg_list_pane_g

0x839d,	// (0x00039ff9) list_double2_graphic_large_graphic_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double2_graphic_large_graphic_pane

0x839d,	// (0x00039ff9) list_double2_graphic_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double2_graphic_pane

0x839d,	// (0x00039ff9) list_double2_large_graphic_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double2_large_graphic_pane

0x839d,	// (0x00039ff9) list_double2_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double2_pane

0x839d,	// (0x00039ff9) list_double_graphic_heading_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_graphic_heading_pane

0x839d,	// (0x00039ff9) list_double_graphic_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_graphic_pane

0x839d,	// (0x00039ff9) list_double_heading_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_heading_pane

0x839d,	// (0x00039ff9) list_double_large_graphic_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_large_graphic_pane

0x839d,	// (0x00039ff9) list_double_number_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_number_pane

0x839d,	// (0x00039ff9) list_double_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_pane

0x839d,	// (0x00039ff9) list_double_time_pane_ParamLimits

0x839d,	// (0x00039ff9) list_double_time_pane

0x839d,	// (0x00039ff9) list_setting_number_pane_ParamLimits

0x839d,	// (0x00039ff9) list_setting_number_pane

0x839d,	// (0x00039ff9) list_setting_pane_ParamLimits

0x839d,	// (0x00039ff9) list_setting_pane

0x83de,	// (0x0003a03a) list_single_2graphic_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_2graphic_pane

0x83de,	// (0x0003a03a) list_single_graphic_heading_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_graphic_heading_pane

0x83de,	// (0x0003a03a) list_single_graphic_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_graphic_pane

0x83de,	// (0x0003a03a) list_single_heading_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_heading_pane

0xafc1,	// (0x0003cc1d) list_single_large_graphic_pane_ParamLimits

0xafc1,	// (0x0003cc1d) list_single_large_graphic_pane

0x83de,	// (0x0003a03a) list_single_number_heading_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_number_heading_pane

0x83de,	// (0x0003a03a) list_single_number_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_number_pane

0x83de,	// (0x0003a03a) list_single_pane_ParamLimits

0x83de,	// (0x0003a03a) list_single_pane

0x2042,	// (0x00033c9e) list_highlight_pane_cp1

0x4570,	// (0x000361cc) list_single_pane_g1_ParamLimits

0x4570,	// (0x000361cc) list_single_pane_g1

0x457c,	// (0x000361d8) list_single_pane_g2_ParamLimits

0x457c,	// (0x000361d8) list_single_pane_g2

0x0001,

0xf5a1,	// (0x000411fd) list_single_pane_g_ParamLimits

0xf5a1,	// (0x000411fd) list_single_pane_g

0x66b7,	// (0x00038313) list_single_pane_t1_ParamLimits

0x66b7,	// (0x00038313) list_single_pane_t1

0x4570,	// (0x000361cc) list_single_number_pane_g1_ParamLimits

0x4570,	// (0x000361cc) list_single_number_pane_g1

0x457c,	// (0x000361d8) list_single_number_pane_g2_ParamLimits

0x457c,	// (0x000361d8) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x000411fd) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x000411fd) list_single_number_pane_g

0x66b7,	// (0x00038313) list_single_number_pane_t1_ParamLimits

0x66b7,	// (0x00038313) list_single_number_pane_t1

0x82e7,	// (0x00039f43) list_single_number_pane_t2_ParamLimits

0x82e7,	// (0x00039f43) list_single_number_pane_t2

0x0001,

0xf91f,	// (0x0004157b) list_single_number_pane_t_ParamLimits

0xf91f,	// (0x0004157b) list_single_number_pane_t

0x66ab,	// (0x00038307) list_single_graphic_pane_g1_ParamLimits

0x66ab,	// (0x00038307) list_single_graphic_pane_g1

0x4570,	// (0x000361cc) list_single_graphic_pane_g2_ParamLimits

0x4570,	// (0x000361cc) list_single_graphic_pane_g2

0x457c,	// (0x000361d8) list_single_graphic_pane_g3_ParamLimits

0x457c,	// (0x000361d8) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x000411f6) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x000411f6) list_single_graphic_pane_g

0x66b7,	// (0x00038313) list_single_graphic_pane_t1_ParamLimits

0x66b7,	// (0x00038313) list_single_graphic_pane_t1

0x4570,	// (0x000361cc) list_single_heading_pane_g1_ParamLimits

0x4570,	// (0x000361cc) list_single_heading_pane_g1

0x457c,	// (0x000361d8) list_single_heading_pane_g2_ParamLimits

0x457c,	// (0x000361d8) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x000411fd) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x000411fd) list_single_heading_pane_g

0x4588,	// (0x000361e4) list_single_heading_pane_t1_ParamLimits

0x4588,	// (0x000361e4) list_single_heading_pane_t1

0x459e,	// (0x000361fa) list_single_heading_pane_t2_ParamLimits

0x459e,	// (0x000361fa) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00041202) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00041202) list_single_heading_pane_t

0x4570,	// (0x000361cc) list_single_number_heading_pane_g1_ParamLimits

0x4570,	// (0x000361cc) list_single_number_heading_pane_g1

0x457c,	// (0x000361d8) list_single_number_heading_pane_g2_ParamLimits

0x457c,	// (0x000361d8) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x000411fd) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x000411fd) list_single_number_heading_pane_g

0x4588,	// (0x000361e4) list_single_number_heading_pane_t1_ParamLimits

0x4588,	// (0x000361e4) list_single_number_heading_pane_t1

0x45b0,	// (0x0003620c) list_single_number_heading_pane_t2_ParamLimits

0x45b0,	// (0x0003620c) list_single_number_heading_pane_t2

0x45c2,	// (0x0003621e) list_single_number_heading_pane_t3_ParamLimits

0x45c2,	// (0x0003621e) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00041207) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00041207) list_single_number_heading_pane_t

0x66cd,	// (0x00038329) list_single_graphic_heading_pane_g1_ParamLimits

0x66cd,	// (0x00038329) list_single_graphic_heading_pane_g1

0x66d9,	// (0x00038335) list_single_graphic_heading_pane_g4_ParamLimits

0x66d9,	// (0x00038335) list_single_graphic_heading_pane_g4

0x457c,	// (0x000361d8) list_single_graphic_heading_pane_g5_ParamLimits

0x457c,	// (0x000361d8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0004120e) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0004120e) list_single_graphic_heading_pane_g

0x4588,	// (0x000361e4) list_single_graphic_heading_pane_t1_ParamLimits

0x4588,	// (0x000361e4) list_single_graphic_heading_pane_t1

0x66ea,	// (0x00038346) list_single_graphic_heading_pane_t2_ParamLimits

0x66ea,	// (0x00038346) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00041215) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00041215) list_single_graphic_heading_pane_t

0x66fc,	// (0x00038358) list_single_large_graphic_pane_g1_ParamLimits

0x66fc,	// (0x00038358) list_single_large_graphic_pane_g1

0x6708,	// (0x00038364) list_single_large_graphic_pane_g2_ParamLimits

0x6708,	// (0x00038364) list_single_large_graphic_pane_g2

0x6714,	// (0x00038370) list_single_large_graphic_pane_g3_ParamLimits

0x6714,	// (0x00038370) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0004121a) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0004121a) list_single_large_graphic_pane_g

0xa02f,	// (0x0003bc8b) wait_border_pane_g2_copy1

0x6720,	// (0x0003837c) list_single_large_graphic_pane_g4_cp2

0x6728,	// (0x00038384) list_single_large_graphic_pane_t1_ParamLimits

0x6728,	// (0x00038384) list_single_large_graphic_pane_t1

0x45f6,	// (0x00036252) list_double_pane_g1_ParamLimits

0x45f6,	// (0x00036252) list_double_pane_g1

0x4602,	// (0x0003625e) list_double_pane_g2_ParamLimits

0x4602,	// (0x0003625e) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00041221) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00041221) list_double_pane_g

0x673e,	// (0x0003839a) list_double_pane_t1_ParamLimits

0x673e,	// (0x0003839a) list_double_pane_t1

0x6754,	// (0x000383b0) list_double_pane_t2_ParamLimits

0x6754,	// (0x000383b0) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00041226) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00041226) list_double_pane_t

0x6766,	// (0x000383c2) list_double2_pane_g1_ParamLimits

0x6766,	// (0x000383c2) list_double2_pane_g1

0x4602,	// (0x0003625e) list_double2_pane_g2_ParamLimits

0x4602,	// (0x0003625e) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0004122b) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0004122b) list_double2_pane_g

0x673e,	// (0x0003839a) list_double2_pane_t1_ParamLimits

0x673e,	// (0x0003839a) list_double2_pane_t1

0x6777,	// (0x000383d3) list_double2_pane_t2_ParamLimits

0x6777,	// (0x000383d3) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00041230) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00041230) list_double2_pane_t

0x45f6,	// (0x00036252) list_double_number_pane_g1_ParamLimits

0x45f6,	// (0x00036252) list_double_number_pane_g1

0x4602,	// (0x0003625e) list_double_number_pane_g2_ParamLimits

0x4602,	// (0x0003625e) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00041221) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00041221) list_double_number_pane_g

0x6789,	// (0x000383e5) list_double_number_pane_t1_ParamLimits

0x6789,	// (0x000383e5) list_double_number_pane_t1

0x673e,	// (0x0003839a) list_double_number_pane_t2_ParamLimits

0x673e,	// (0x0003839a) list_double_number_pane_t2

0x6754,	// (0x000383b0) list_double_number_pane_t3_ParamLimits

0x6754,	// (0x000383b0) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00041235) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00041235) list_double_number_pane_t

0x679b,	// (0x000383f7) list_double_graphic_pane_g1_ParamLimits

0x679b,	// (0x000383f7) list_double_graphic_pane_g1

0x460e,	// (0x0003626a) list_double_graphic_pane_g2_ParamLimits

0x460e,	// (0x0003626a) list_double_graphic_pane_g2

0x461d,	// (0x00036279) list_double_graphic_pane_g3_ParamLimits

0x461d,	// (0x00036279) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0004123c) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0004123c) list_double_graphic_pane_g

0x673e,	// (0x0003839a) list_double_graphic_pane_t1_ParamLimits

0x673e,	// (0x0003839a) list_double_graphic_pane_t1

0x6754,	// (0x000383b0) list_double_graphic_pane_t2_ParamLimits

0x6754,	// (0x000383b0) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x00041226) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x00041226) list_double_graphic_pane_t

0x679b,	// (0x000383f7) list_double2_graphic_pane_g1_ParamLimits

0x679b,	// (0x000383f7) list_double2_graphic_pane_g1

0x4629,	// (0x00036285) list_double2_graphic_pane_g2_ParamLimits

0x4629,	// (0x00036285) list_double2_graphic_pane_g2

0x4635,	// (0x00036291) list_double2_graphic_pane_g3_ParamLimits

0x4635,	// (0x00036291) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x00041245) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x00041245) list_double2_graphic_pane_g

0x673e,	// (0x0003839a) list_double2_graphic_pane_t1_ParamLimits

0x673e,	// (0x0003839a) list_double2_graphic_pane_t1

0x6777,	// (0x000383d3) list_double2_graphic_pane_t2_ParamLimits

0x6777,	// (0x000383d3) list_double2_graphic_pane_t2

0x0001,

0xf5d4,	// (0x00041230) list_double2_graphic_pane_t_ParamLimits

0xf5d4,	// (0x00041230) list_double2_graphic_pane_t

0x67b3,	// (0x0003840f) list_double_large_graphic_pane_g1_ParamLimits

0x67b3,	// (0x0003840f) list_double_large_graphic_pane_g1

0x6766,	// (0x000383c2) list_double_large_graphic_pane_g2_ParamLimits

0x6766,	// (0x000383c2) list_double_large_graphic_pane_g2

0x4602,	// (0x0003625e) list_double_large_graphic_pane_g3_ParamLimits

0x4602,	// (0x0003625e) list_double_large_graphic_pane_g3

0x67c6,	// (0x00038422) list_double_large_graphic_pane_g4_ParamLimits

0x67c6,	// (0x00038422) list_double_large_graphic_pane_g4

0x0004,

0xf5f0,	// (0x0004124c) list_double_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004124c) list_double_large_graphic_pane_g

0x67d8,	// (0x00038434) list_double_large_graphic_pane_t1_ParamLimits

0x67d8,	// (0x00038434) list_double_large_graphic_pane_t1

0x67f1,	// (0x0003844d) list_double_large_graphic_pane_t2_ParamLimits

0x67f1,	// (0x0003844d) list_double_large_graphic_pane_t2

0x0001,

0xf5fb,	// (0x00041257) list_double_large_graphic_pane_t_ParamLimits

0xf5fb,	// (0x00041257) list_double_large_graphic_pane_t

0x6803,	// (0x0003845f) list_double2_large_graphic_pane_g1_ParamLimits

0x6803,	// (0x0003845f) list_double2_large_graphic_pane_g1

0x6766,	// (0x000383c2) list_double2_large_graphic_pane_g2_ParamLimits

0x6766,	// (0x000383c2) list_double2_large_graphic_pane_g2

0x4602,	// (0x0003625e) list_double2_large_graphic_pane_g3_ParamLimits

0x4602,	// (0x0003625e) list_double2_large_graphic_pane_g3

0x0002,

0xf600,	// (0x0004125c) list_double2_large_graphic_pane_g_ParamLimits

0xf600,	// (0x0004125c) list_double2_large_graphic_pane_g

0x680f,	// (0x0003846b) list_double2_large_graphic_pane_t1_ParamLimits

0x680f,	// (0x0003846b) list_double2_large_graphic_pane_t1

0x6825,	// (0x00038481) list_double2_large_graphic_pane_t2_ParamLimits

0x6825,	// (0x00038481) list_double2_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00041263) list_double2_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00041263) list_double2_large_graphic_pane_t

0x6837,	// (0x00038493) list_double_heading_pane_g1_ParamLimits

0x6837,	// (0x00038493) list_double_heading_pane_g1

0x4656,	// (0x000362b2) list_double_heading_pane_g2_ParamLimits

0x4656,	// (0x000362b2) list_double_heading_pane_g2

0x0001,

0xf60c,	// (0x00041268) list_double_heading_pane_g_ParamLimits

0xf60c,	// (0x00041268) list_double_heading_pane_g

0x6848,	// (0x000384a4) list_double_heading_pane_t1_ParamLimits

0x6848,	// (0x000384a4) list_double_heading_pane_t1

0x6777,	// (0x000383d3) list_double_heading_pane_t2_ParamLimits

0x6777,	// (0x000383d3) list_double_heading_pane_t2

0x0001,

0xf611,	// (0x0004126d) list_double_heading_pane_t_ParamLimits

0xf611,	// (0x0004126d) list_double_heading_pane_t

0x685e,	// (0x000384ba) list_double_graphic_heading_pane_g1_ParamLimits

0x685e,	// (0x000384ba) list_double_graphic_heading_pane_g1

0x6837,	// (0x00038493) list_double_graphic_heading_pane_g2_ParamLimits

0x6837,	// (0x00038493) list_double_graphic_heading_pane_g2

0x4656,	// (0x000362b2) list_double_graphic_heading_pane_g3_ParamLimits

0x4656,	// (0x000362b2) list_double_graphic_heading_pane_g3

0x0002,

0xf616,	// (0x00041272) list_double_graphic_heading_pane_g_ParamLimits

0xf616,	// (0x00041272) list_double_graphic_heading_pane_g

0x6848,	// (0x000384a4) list_double_graphic_heading_pane_t1_ParamLimits

0x6848,	// (0x000384a4) list_double_graphic_heading_pane_t1

0x6777,	// (0x000383d3) list_double_graphic_heading_pane_t2_ParamLimits

0x6777,	// (0x000383d3) list_double_graphic_heading_pane_t2

0x0001,

0xf611,	// (0x0004126d) list_double_graphic_heading_pane_t_ParamLimits

0xf611,	// (0x0004126d) list_double_graphic_heading_pane_t

0x6766,	// (0x000383c2) list_double_time_pane_g1_ParamLimits

0x6766,	// (0x000383c2) list_double_time_pane_g1

0x4602,	// (0x0003625e) list_double_time_pane_g2_ParamLimits

0x4602,	// (0x0003625e) list_double_time_pane_g2

0x0001,

0xf5cf,	// (0x0004122b) list_double_time_pane_g_ParamLimits

0xf5cf,	// (0x0004122b) list_double_time_pane_g

0x4662,	// (0x000362be) list_double_time_pane_t1_ParamLimits

0x4662,	// (0x000362be) list_double_time_pane_t1

0x4678,	// (0x000362d4) list_double_time_pane_t2_ParamLimits

0x4678,	// (0x000362d4) list_double_time_pane_t2

0x468a,	// (0x000362e6) list_double_time_pane_t3_ParamLimits

0x468a,	// (0x000362e6) list_double_time_pane_t3

0x469c,	// (0x000362f8) list_double_time_pane_t4_ParamLimits

0x469c,	// (0x000362f8) list_double_time_pane_t4

0x0003,

0xf61d,	// (0x00041279) list_double_time_pane_t_ParamLimits

0xf61d,	// (0x00041279) list_double_time_pane_t

0x46ae,	// (0x0003630a) list_setting_pane_g1_ParamLimits

0x46ae,	// (0x0003630a) list_setting_pane_g1

0x46ba,	// (0x00036316) list_setting_pane_g2_ParamLimits

0x46ba,	// (0x00036316) list_setting_pane_g2

0x0001,

0xf626,	// (0x00041282) list_setting_pane_g_ParamLimits

0xf626,	// (0x00041282) list_setting_pane_g

0x686a,	// (0x000384c6) list_setting_pane_t1_ParamLimits

0x686a,	// (0x000384c6) list_setting_pane_t1

0x6881,	// (0x000384dd) list_setting_pane_t2_ParamLimits

0x6881,	// (0x000384dd) list_setting_pane_t2

0x0002,

0xf62b,	// (0x00041287) list_setting_pane_t_ParamLimits

0xf62b,	// (0x00041287) list_setting_pane_t

0x68be,	// (0x0003851a) set_value_pane_cp_ParamLimits

0x68be,	// (0x0003851a) set_value_pane_cp

0x46c6,	// (0x00036322) list_setting_number_pane_g1_ParamLimits

0x46c6,	// (0x00036322) list_setting_number_pane_g1

0x46d2,	// (0x0003632e) list_setting_number_pane_g2_ParamLimits

0x46d2,	// (0x0003632e) list_setting_number_pane_g2

0x0001,

0xf632,	// (0x0004128e) list_setting_number_pane_g_ParamLimits

0xf632,	// (0x0004128e) list_setting_number_pane_g

0x68ca,	// (0x00038526) list_setting_number_pane_t1_ParamLimits

0x68ca,	// (0x00038526) list_setting_number_pane_t1

0x46de,	// (0x0003633a) list_setting_number_pane_t2_ParamLimits

0x46de,	// (0x0003633a) list_setting_number_pane_t2

0x68de,	// (0x0003853a) list_setting_number_pane_t3_ParamLimits

0x68de,	// (0x0003853a) list_setting_number_pane_t3

0x0003,

0xf637,	// (0x00041293) list_setting_number_pane_t_ParamLimits

0xf637,	// (0x00041293) list_setting_number_pane_t

0x68be,	// (0x0003851a) set_value_pane_ParamLimits

0x68be,	// (0x0003851a) set_value_pane

0x2404,	// (0x00034060) bg_set_opt_pane_ParamLimits

0x2404,	// (0x00034060) bg_set_opt_pane

0x68f6,	// (0x00038552) set_value_pane_t1

0x2425,	// (0x00034081) slider_set_pane_cp3

0x6904,	// (0x00038560) volume_small_pane_cp

0x242e,	// (0x0003408a) list_form_gen_pane

0x2437,	// (0x00034093) scroll_pane_cp8

0x690d,	// (0x00038569) form_field_data_pane_ParamLimits

0x690d,	// (0x00038569) form_field_data_pane

0x6925,	// (0x00038581) form_field_data_wide_pane_ParamLimits

0x6925,	// (0x00038581) form_field_data_wide_pane

0x6946,	// (0x000385a2) form_field_popup_pane_ParamLimits

0x6946,	// (0x000385a2) form_field_popup_pane

0x6964,	// (0x000385c0) form_field_popup_wide_pane_ParamLimits

0x6964,	// (0x000385c0) form_field_popup_wide_pane

0x4730,	// (0x0003638c) form_field_slider_pane_ParamLimits

0x4730,	// (0x0003638c) form_field_slider_pane

0x6981,	// (0x000385dd) form_field_slider_wide_pane_ParamLimits

0x6981,	// (0x000385dd) form_field_slider_wide_pane

0x2448,	// (0x000340a4) data_form_pane

0x699e,	// (0x000385fa) form_field_data_pane_t1

0x2454,	// (0x000340b0) input_focus_pane

0x69b6,	// (0x00038612) data_form_wide_pane

0x69d3,	// (0x0003862f) form_field_data_wide_pane_t1

0x2348,	// (0x00033fa4) input_focus_pane_cp6

0x69f5,	// (0x00038651) form_field_popup_pane_t1

0x2454,	// (0x000340b0) input_focus_pane_cp7

0x2482,	// (0x000340de) list_form_pane

0x6a15,	// (0x00038671) form_field_popup_wide_pane_t1

0x2454,	// (0x000340b0) input_focus_pane_cp8

0x248e,	// (0x000340ea) list_form_wide_pane

0x6a32,	// (0x0003868e) form_field_slider_pane_t1_ParamLimits

0x6a32,	// (0x0003868e) form_field_slider_pane_t1

0x6a48,	// (0x000386a4) form_field_slider_pane_t2_ParamLimits

0x6a48,	// (0x000386a4) form_field_slider_pane_t2

0x0001,

0xf647,	// (0x000412a3) form_field_slider_pane_t_ParamLimits

0xf647,	// (0x000412a3) form_field_slider_pane_t

0x2090,	// (0x00033cec) input_focus_pane_cp9_ParamLimits

0x2090,	// (0x00033cec) input_focus_pane_cp9

0x6a5d,	// (0x000386b9) slider_cont_pane_ParamLimits

0x6a5d,	// (0x000386b9) slider_cont_pane

0x249a,	// (0x000340f6) form_field_slider_wide_pane_t1_ParamLimits

0x249a,	// (0x000340f6) form_field_slider_wide_pane_t1

0x6a71,	// (0x000386cd) form_field_slider_wide_pane_t2_ParamLimits

0x6a71,	// (0x000386cd) form_field_slider_wide_pane_t2

0x0001,

0xf64c,	// (0x000412a8) form_field_slider_wide_pane_t_ParamLimits

0xf64c,	// (0x000412a8) form_field_slider_wide_pane_t

0x2090,	// (0x00033cec) input_focus_pane_cp10_ParamLimits

0x2090,	// (0x00033cec) input_focus_pane_cp10

0x6a83,	// (0x000386df) slider_cont_pane_cp1_ParamLimits

0x6a83,	// (0x000386df) slider_cont_pane_cp1

0x6a97,	// (0x000386f3) slider_form_pane_cp

0x24ac,	// (0x00034108) input_focus_pane_g1

0x24b4,	// (0x00034110) input_focus_pane_g2

0x24bc,	// (0x00034118) input_focus_pane_g3

0x24c4,	// (0x00034120) input_focus_pane_g4

0x24cc,	// (0x00034128) input_focus_pane_g5

0x24d4,	// (0x00034130) input_focus_pane_g6

0x24dc,	// (0x00034138) input_focus_pane_g7

0x24e4,	// (0x00034140) input_focus_pane_g8

0x24ec,	// (0x00034148) input_focus_pane_g9

0x2038,	// (0x00033c94) input_focus_pane_g10

0x0009,

0xf651,	// (0x000412ad) input_focus_pane_g

0xa038,	// (0x0003bc94) wait_border_pane_g3_copy1

0x6a9f,	// (0x000386fb) data_form_pane_t1

0x2038,	// (0x00033c94) wait_anim_pane_g1_copy1

0x8371,	// (0x00039fcd) data_form_wide_pane_t1

0x6aba,	// (0x00038716) list_form_graphic_pane_cp_ParamLimits

0x6aba,	// (0x00038716) list_form_graphic_pane_cp

0xaf17,	// (0x0003cb73) slider_form_pane_g1

0xaf20,	// (0x0003cb7c) slider_form_pane_g2

0x0006,

0xf94f,	// (0x000415ab) slider_form_pane_g

0x6ace,	// (0x0003872a) list_form_graphic_pane_ParamLimits

0x6ace,	// (0x0003872a) list_form_graphic_pane

0x6ae5,	// (0x00038741) list_form_graphic_pane_g1

0x6aed,	// (0x00038749) list_form_graphic_pane_t1_ParamLimits

0x6aed,	// (0x00038749) list_form_graphic_pane_t1

0x209e,	// (0x00033cfa) list_highlight_pane_cp5_ParamLimits

0x209e,	// (0x00033cfa) list_highlight_pane_cp5

0x6b02,	// (0x0003875e) find_pane_g1

0x24f4,	// (0x00034150) input_find_pane

0x6b0b,	// (0x00038767) input_find_pane_g1_ParamLimits

0x6b0b,	// (0x00038767) input_find_pane_g1

0x6b17,	// (0x00038773) input_find_pane_t1_ParamLimits

0x6b17,	// (0x00038773) input_find_pane_t1

0x6b2c,	// (0x00038788) input_find_pane_t2_ParamLimits

0x6b2c,	// (0x00038788) input_find_pane_t2

0x0001,

0xf666,	// (0x000412c2) input_find_pane_t_ParamLimits

0xf666,	// (0x000412c2) input_find_pane_t

0x24fd,	// (0x00034159) input_focus_pane_cp5_ParamLimits

0x24fd,	// (0x00034159) input_focus_pane_cp5

0x2510,	// (0x0003416c) bg_popup_window_pane_cp2_ParamLimits

0x2510,	// (0x0003416c) bg_popup_window_pane_cp2

0x251d,	// (0x00034179) listscroll_menu_pane_ParamLimits

0x251d,	// (0x00034179) listscroll_menu_pane

0x6b4d,	// (0x000387a9) popup_submenu_window_ParamLimits

0x6b4d,	// (0x000387a9) popup_submenu_window

0x2529,	// (0x00034185) find_popup_pane_g1

0x6b75,	// (0x000387d1) input_popup_find_pane_cp

0x2531,	// (0x0003418d) input_focus_pane_cp4_ParamLimits

0x2531,	// (0x0003418d) input_focus_pane_cp4

0x253f,	// (0x0003419b) input_popup_find_pane_t1_ParamLimits

0x253f,	// (0x0003419b) input_popup_find_pane_t1

0x2042,	// (0x00033c9e) bg_popup_sub_pane_cp

0x256d,	// (0x000341c9) listscroll_popup_sub_pane

0x2575,	// (0x000341d1) list_submenu_pane_ParamLimits

0x2575,	// (0x000341d1) list_submenu_pane

0x2586,	// (0x000341e2) scroll_pane_cp4

0x6b8d,	// (0x000387e9) list_single_popup_submenu_pane_ParamLimits

0x6b8d,	// (0x000387e9) list_single_popup_submenu_pane

0x2ec8,	// (0x00034b24) list_single_popup_submenu_pane_g1

0x6ba1,	// (0x000387fd) list_single_popup_submenu_pane_t1_ParamLimits

0x6ba1,	// (0x000387fd) list_single_popup_submenu_pane_t1

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp1_ParamLimits

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp1

0x258e,	// (0x000341ea) tabs_2_active_pane_g1

0x6bb6,	// (0x00038812) tabs_2_active_pane_t1

0x209e,	// (0x00033cfa) bg_passive_tab_pane_cp1_ParamLimits

0x209e,	// (0x00033cfa) bg_passive_tab_pane_cp1

0x258e,	// (0x000341ea) tabs_2_passive_pane_g1

0x6bb6,	// (0x00038812) tabs_2_passive_pane_t1

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp4

0x6bd6,	// (0x00038832) tabs_2_long_active_pane_t1

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp4

0x8013,	// (0x00039c6f) list_single_midp_graphic_pane_g4_ParamLimits

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp5

0x6bf5,	// (0x00038851) tabs_3_long_active_pane_t1

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp5

0x8013,	// (0x00039c6f) list_single_midp_graphic_pane_g4

0x209e,	// (0x00033cfa) bg_popup_window_pane_cp13_ParamLimits

0x209e,	// (0x00033cfa) bg_popup_window_pane_cp13

0x25a2,	// (0x000341fe) listscroll_popup_fast_pane_ParamLimits

0x25a2,	// (0x000341fe) listscroll_popup_fast_pane

0x25ae,	// (0x0003420a) grid_popup_fast_pane_ParamLimits

0x25ae,	// (0x0003420a) grid_popup_fast_pane

0x25c0,	// (0x0003421c) scroll_pane_cp9_ParamLimits

0x25c0,	// (0x0003421c) scroll_pane_cp9

0xc87a,	// (0x0003e4d6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc87a,	// (0x0003e4d6) list_single_graphic_hl_pane_t1_cp2

0x25d3,	// (0x0003422f) input_focus_pane_cp20_ParamLimits

0x25d3,	// (0x0003422f) input_focus_pane_cp20

0x25e1,	// (0x0003423d) query_popup_data_pane_t1_ParamLimits

0x25e1,	// (0x0003423d) query_popup_data_pane_t1

0x25f4,	// (0x00034250) query_popup_data_pane_t2_ParamLimits

0x25f4,	// (0x00034250) query_popup_data_pane_t2

0x263a,	// (0x00034296) query_popup_data_pane_t3_ParamLimits

0x263a,	// (0x00034296) query_popup_data_pane_t3

0x267b,	// (0x000342d7) query_popup_data_pane_t4_ParamLimits

0x267b,	// (0x000342d7) query_popup_data_pane_t4

0x26b7,	// (0x00034313) query_popup_data_pane_t5_ParamLimits

0x26b7,	// (0x00034313) query_popup_data_pane_t5

0x0004,

0xf66b,	// (0x000412c7) query_popup_data_pane_t_ParamLimits

0xf66b,	// (0x000412c7) query_popup_data_pane_t

0x24ac,	// (0x00034108) bg_set_opt_pane_g1

0x24b4,	// (0x00034110) bg_set_opt_pane_g2

0x24bc,	// (0x00034118) bg_set_opt_pane_g3

0x24c4,	// (0x00034120) bg_set_opt_pane_g4

0x24cc,	// (0x00034128) bg_set_opt_pane_g5

0x24d4,	// (0x00034130) bg_set_opt_pane_g6

0x24dc,	// (0x00034138) bg_set_opt_pane_g7

0x24e4,	// (0x00034140) bg_set_opt_pane_g8

0x24ec,	// (0x00034148) bg_set_opt_pane_g9

0x0008,

0xf676,	// (0x000412d2) bg_set_opt_pane_g

0x714c,	// (0x00038da8) control_top_pane_stacon_ParamLimits

0x714c,	// (0x00038da8) control_top_pane_stacon

0x719f,	// (0x00038dfb) signal_pane_stacon_ParamLimits

0x719f,	// (0x00038dfb) signal_pane_stacon

0x2a43,	// (0x0003469f) stacon_top_pane_g1_ParamLimits

0x2a43,	// (0x0003469f) stacon_top_pane_g1

0x71c4,	// (0x00038e20) title_pane_stacon_ParamLimits

0x71c4,	// (0x00038e20) title_pane_stacon

0x71ee,	// (0x00038e4a) uni_indicator_pane_stacon_ParamLimits

0x71ee,	// (0x00038e4a) uni_indicator_pane_stacon

0x7203,	// (0x00038e5f) battery_pane_stacon_ParamLimits

0x7203,	// (0x00038e5f) battery_pane_stacon

0x7247,	// (0x00038ea3) control_bottom_pane_stacon_ParamLimits

0x7247,	// (0x00038ea3) control_bottom_pane_stacon

0x726a,	// (0x00038ec6) navi_pane_stacon_ParamLimits

0x726a,	// (0x00038ec6) navi_pane_stacon

0x2a65,	// (0x000346c1) stacon_bottom_pane_g1_ParamLimits

0x2a65,	// (0x000346c1) stacon_bottom_pane_g1

0x6c21,	// (0x0003887d) aid_levels_signal_lsc_ParamLimits

0x6c21,	// (0x0003887d) aid_levels_signal_lsc

0x6c37,	// (0x00038893) signal_pane_stacon_g1_ParamLimits

0x6c37,	// (0x00038893) signal_pane_stacon_g1

0x6c4b,	// (0x000388a7) signal_pane_stacon_g2_ParamLimits

0x6c4b,	// (0x000388a7) signal_pane_stacon_g2

0x0001,

0xf689,	// (0x000412e5) signal_pane_stacon_g_ParamLimits

0xf689,	// (0x000412e5) signal_pane_stacon_g

0x6c80,	// (0x000388dc) title_pane_stacon_t1_ParamLimits

0x6c80,	// (0x000388dc) title_pane_stacon_t1

0x270f,	// (0x0003436b) uni_indicator_pane_stacon_g1

0x2719,	// (0x00034375) uni_indicator_pane_stacon_g2

0x26fb,	// (0x00034357) uni_indicator_pane_stacon_g3

0x2705,	// (0x00034361) uni_indicator_pane_stacon_g4

0x0003,

0xf695,	// (0x000412f1) uni_indicator_pane_stacon_g

0x6ca5,	// (0x00038901) control_top_pane_stacon_g1

0x6cad,	// (0x00038909) control_top_pane_stacon_t1_ParamLimits

0x6cad,	// (0x00038909) control_top_pane_stacon_t1

0x6ce4,	// (0x00038940) aid_levels_battery_lsc_ParamLimits

0x6ce4,	// (0x00038940) aid_levels_battery_lsc

0x6cfb,	// (0x00038957) battery_pane_stacon_g1_ParamLimits

0x6cfb,	// (0x00038957) battery_pane_stacon_g1

0x6d0e,	// (0x0003896a) battery_pane_stacon_g2_ParamLimits

0x6d0e,	// (0x0003896a) battery_pane_stacon_g2

0x0001,

0xf69e,	// (0x000412fa) battery_pane_stacon_g_ParamLimits

0xf69e,	// (0x000412fa) battery_pane_stacon_g

0x6d4c,	// (0x000389a8) navi_icon_pane_stacon

0x6d60,	// (0x000389bc) navi_navi_pane_stacon

0x6d4c,	// (0x000389a8) navi_text_pane_stacon

0x6ca5,	// (0x00038901) control_bottom_pane_stacon_g1

0x6d74,	// (0x000389d0) control_bottom_pane_stacon_t1_ParamLimits

0x6d74,	// (0x000389d0) control_bottom_pane_stacon_t1

0x6dab,	// (0x00038a07) grid_app_pane_ParamLimits

0x6dab,	// (0x00038a07) grid_app_pane

0x6dcd,	// (0x00038a29) scroll_pane_cp15_ParamLimits

0x6dcd,	// (0x00038a29) scroll_pane_cp15

0x6de0,	// (0x00038a3c) cell_app_pane_ParamLimits

0x6de0,	// (0x00038a3c) cell_app_pane

0x6e08,	// (0x00038a64) cell_app_pane_g1_ParamLimits

0x6e08,	// (0x00038a64) cell_app_pane_g1

0x273d,	// (0x00034399) cell_app_pane_g2_ParamLimits

0x273d,	// (0x00034399) cell_app_pane_g2

0x0001,

0xf6a3,	// (0x000412ff) cell_app_pane_g_ParamLimits

0xf6a3,	// (0x000412ff) cell_app_pane_g

0x6e2c,	// (0x00038a88) cell_app_pane_t1_ParamLimits

0x6e2c,	// (0x00038a88) cell_app_pane_t1

0x2749,	// (0x000343a5) grid_highlight_pane_ParamLimits

0x2749,	// (0x000343a5) grid_highlight_pane

0x24ac,	// (0x00034108) cell_highlight_pane_g1

0x24b4,	// (0x00034110) cell_highlight_pane_g2

0x24bc,	// (0x00034118) cell_highlight_pane_g3

0x24c4,	// (0x00034120) cell_highlight_pane_g4

0x24cc,	// (0x00034128) cell_highlight_pane_g5

0x24d4,	// (0x00034130) cell_highlight_pane_g6

0x24dc,	// (0x00034138) cell_highlight_pane_g7

0x24e4,	// (0x00034140) cell_highlight_pane_g8

0x24ec,	// (0x00034148) cell_highlight_pane_g9

0x2038,	// (0x00033c94) cell_highlight_pane_g10

0x0009,

0xf651,	// (0x000412ad) cell_highlight_pane_g

0x275a,	// (0x000343b6) bg_scroll_pane

0x6e56,	// (0x00038ab2) scroll_handle_pane

0x27a1,	// (0x000343fd) scroll_bg_pane_g1

0x27b6,	// (0x00034412) scroll_bg_pane_g2

0x27ce,	// (0x0003442a) scroll_bg_pane_g3

0x0002,

0xf6a8,	// (0x00041304) scroll_bg_pane_g

0x6e7f,	// (0x00038adb) scroll_handle_focus_pane_ParamLimits

0x6e7f,	// (0x00038adb) scroll_handle_focus_pane

0x27a1,	// (0x000343fd) scroll_handle_pane_g1

0x27e3,	// (0x0003443f) scroll_handle_pane_g2

0x27ce,	// (0x0003442a) scroll_handle_pane_g3

0x0002,

0xf6af,	// (0x0004130b) scroll_handle_pane_g

0x2531,	// (0x0003418d) bg_popup_sub_pane_cp21_ParamLimits

0x2531,	// (0x0003418d) bg_popup_sub_pane_cp21

0x6e8c,	// (0x00038ae8) popup_fep_japan_predictive_window_t1_ParamLimits

0x6e8c,	// (0x00038ae8) popup_fep_japan_predictive_window_t1

0x6ea6,	// (0x00038b02) popup_fep_japan_predictive_window_t2_ParamLimits

0x6ea6,	// (0x00038b02) popup_fep_japan_predictive_window_t2

0x6ed9,	// (0x00038b35) popup_fep_japan_predictive_window_t3_ParamLimits

0x6ed9,	// (0x00038b35) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b6,	// (0x00041312) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b6,	// (0x00041312) popup_fep_japan_predictive_window_t

0x2042,	// (0x00033c9e) bg_popup_sub_pane_cp23

0x351a,	// (0x00035176) listscroll_japin_cand_pane

0x27f7,	// (0x00034453) popup_fep_japan_candidate_window_t1

0x2805,	// (0x00034461) candidate_pane_ParamLimits

0x2805,	// (0x00034461) candidate_pane

0x6f10,	// (0x00038b6c) scroll_pane_cp30

0x2817,	// (0x00034473) list_single_popup_jap_candidate_pane_ParamLimits

0x2817,	// (0x00034473) list_single_popup_jap_candidate_pane

0x2042,	// (0x00033c9e) list_highlight_pane_cp30

0x282c,	// (0x00034488) list_single_popup_jap_candidate_pane_t1

0x283b,	// (0x00034497) level_1_signal

0x2848,	// (0x000344a4) level_2_signal

0x2855,	// (0x000344b1) level_3_signal

0x2862,	// (0x000344be) level_4_signal

0x286f,	// (0x000344cb) level_5_signal

0x287c,	// (0x000344d8) level_6_signal

0x2889,	// (0x000344e5) level_7_signal

0x283b,	// (0x00034497) level_1_battery

0x2848,	// (0x000344a4) level_2_battery

0x2855,	// (0x000344b1) level_3_battery

0x2862,	// (0x000344be) level_4_battery

0x286f,	// (0x000344cb) level_5_battery

0x287c,	// (0x000344d8) level_6_battery

0x2889,	// (0x000344e5) level_7_battery

0x28ae,	// (0x0003450a) list_menu_pane_ParamLimits

0x28ae,	// (0x0003450a) list_menu_pane

0x28c4,	// (0x00034520) scroll_pane_cp25_ParamLimits

0x28c4,	// (0x00034520) scroll_pane_cp25

0x28dd,	// (0x00034539) list_double2_graphic_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double2_graphic_pane_cp2

0x28dd,	// (0x00034539) list_double2_large_graphic_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double2_large_graphic_pane_cp2

0x28dd,	// (0x00034539) list_double2_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double2_pane_cp2

0x28dd,	// (0x00034539) list_double_graphic_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double_graphic_pane_cp2

0x28dd,	// (0x00034539) list_double_large_graphic_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double_large_graphic_pane_cp2

0x28dd,	// (0x00034539) list_double_number_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double_number_pane_cp2

0x28dd,	// (0x00034539) list_double_pane_cp2_ParamLimits

0x28dd,	// (0x00034539) list_double_pane_cp2

0x6f4b,	// (0x00038ba7) list_single_2graphic_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_2graphic_pane_cp2

0x6f4b,	// (0x00038ba7) list_single_graphic_heading_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_graphic_heading_pane_cp2

0x6f4b,	// (0x00038ba7) list_single_graphic_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_graphic_pane_cp2

0x6f4b,	// (0x00038ba7) list_single_heading_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_heading_pane_cp2

0x28ed,	// (0x00034549) list_single_large_graphic_pane_cp2_ParamLimits

0x28ed,	// (0x00034549) list_single_large_graphic_pane_cp2

0x6f4b,	// (0x00038ba7) list_single_number_heading_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_number_heading_pane_cp2

0x6f4b,	// (0x00038ba7) list_single_number_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_number_pane_cp2

0x6f61,	// (0x00038bbd) list_single_pane_cp2_ParamLimits

0x6f61,	// (0x00038bbd) list_single_pane_cp2

0x2907,	// (0x00034563) bg_popup_sub_pane_cp22

0x7039,	// (0x00038c95) popup_side_volume_key_window_g1

0x705d,	// (0x00038cb9) popup_side_volume_key_window_t1

0x7079,	// (0x00038cd5) volume_small_pane_cp1

0x2090,	// (0x00033cec) bg_popup_sub_pane_cp24_ParamLimits

0x2090,	// (0x00033cec) bg_popup_sub_pane_cp24

0x291d,	// (0x00034579) fep_china_uni_candidate_pane_ParamLimits

0x291d,	// (0x00034579) fep_china_uni_candidate_pane

0x2931,	// (0x0003458d) fep_china_uni_entry_pane

0x2941,	// (0x0003459d) popup_fep_china_uni_window_g1

0x7081,	// (0x00038cdd) fep_china_uni_entry_pane_g1

0x7089,	// (0x00038ce5) fep_china_uni_entry_pane_g2

0x0001,

0xf6e7,	// (0x00041343) fep_china_uni_entry_pane_g

0x295d,	// (0x000345b9) fep_entry_item_pane

0x2967,	// (0x000345c3) fep_candidate_item_pane

0x7091,	// (0x00038ced) fep_china_uni_candidate_pane_g1

0x296f,	// (0x000345cb) fep_china_uni_candidate_pane_g2

0x2977,	// (0x000345d3) fep_china_uni_candidate_pane_g3

0x7099,	// (0x00038cf5) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ec,	// (0x00041348) fep_china_uni_candidate_pane_g

0x2038,	// (0x00033c94) fep_entry_item_pane_g1

0x297f,	// (0x000345db) fep_entry_item_pane_t1_ParamLimits

0x297f,	// (0x000345db) fep_entry_item_pane_t1

0x2995,	// (0x000345f1) fep_candidate_item_pane_t1_ParamLimits

0x2995,	// (0x000345f1) fep_candidate_item_pane_t1

0x29aa,	// (0x00034606) fep_candidate_item_pane_t2_ParamLimits

0x29aa,	// (0x00034606) fep_candidate_item_pane_t2

0x0001,

0xf6f5,	// (0x00041351) fep_candidate_item_pane_t_ParamLimits

0xf6f5,	// (0x00041351) fep_candidate_item_pane_t

0x209e,	// (0x00033cfa) list_highlight_pane_cp31_ParamLimits

0x209e,	// (0x00033cfa) list_highlight_pane_cp31

0x29bc,	// (0x00034618) level_1_signal_lsc

0x29c5,	// (0x00034621) level_2_signal_lsc

0x29ce,	// (0x0003462a) level_3_signal_lsc

0x29d7,	// (0x00034633) level_4_signal_lsc

0x29e0,	// (0x0003463c) level_5_signal_lsc

0x29e9,	// (0x00034645) level_6_signal_lsc

0x29f2,	// (0x0003464e) level_7_signal_lsc

0x29f2,	// (0x0003464e) level_1_battery_lsc

0x29fb,	// (0x00034657) level_2_battery_lsc

0x2a04,	// (0x00034660) level_3_battery_lsc

0x2a0d,	// (0x00034669) level_4_battery_lsc

0x2a16,	// (0x00034672) level_5_battery_lsc

0x2a1f,	// (0x0003467b) level_6_battery_lsc

0x29bc,	// (0x00034618) level_7_battery_lsc

0x2a28,	// (0x00034684) scroll_handle_focus_pane_g1

0x2a31,	// (0x0003468d) scroll_handle_focus_pane_g2

0x2a3a,	// (0x00034696) scroll_handle_focus_pane_g3

0x0002,

0xf6fa,	// (0x00041356) scroll_handle_focus_pane_g

0x70a1,	// (0x00038cfd) list_single_2graphic_pane_g1_ParamLimits

0x70a1,	// (0x00038cfd) list_single_2graphic_pane_g1

0x66d9,	// (0x00038335) list_single_2graphic_pane_g2_ParamLimits

0x66d9,	// (0x00038335) list_single_2graphic_pane_g2

0x457c,	// (0x000361d8) list_single_2graphic_pane_g3_ParamLimits

0x457c,	// (0x000361d8) list_single_2graphic_pane_g3

0x70ad,	// (0x00038d09) list_single_2graphic_pane_g4_ParamLimits

0x70ad,	// (0x00038d09) list_single_2graphic_pane_g4

0x0003,

0xf701,	// (0x0004135d) list_single_2graphic_pane_g_ParamLimits

0xf701,	// (0x0004135d) list_single_2graphic_pane_g

0x70b9,	// (0x00038d15) list_single_2graphic_pane_t1_ParamLimits

0x70b9,	// (0x00038d15) list_single_2graphic_pane_t1

0x70e7,	// (0x00038d43) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x70e7,	// (0x00038d43) list_double2_graphic_large_graphic_pane_g1

0x6766,	// (0x000383c2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6766,	// (0x000383c2) list_double2_graphic_large_graphic_pane_g2

0x4602,	// (0x0003625e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4602,	// (0x0003625e) list_double2_graphic_large_graphic_pane_g3

0x4743,	// (0x0003639f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4743,	// (0x0003639f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70a,	// (0x00041366) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70a,	// (0x00041366) list_double2_graphic_large_graphic_pane_g

0x474f,	// (0x000363ab) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x474f,	// (0x000363ab) list_double2_graphic_large_graphic_pane_t1

0x4765,	// (0x000363c1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4765,	// (0x000363c1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf713,	// (0x0004136f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf713,	// (0x0004136f) list_double2_graphic_large_graphic_pane_t

0x72c9,	// (0x00038f25) popup_fast_swap_window_ParamLimits

0x72c9,	// (0x00038f25) popup_fast_swap_window

0x72e5,	// (0x00038f41) popup_side_volume_key_window

0x2af0,	// (0x0003474c) stacon_top_pane

0x2afa,	// (0x00034756) status_pane_ParamLimits

0x2afa,	// (0x00034756) status_pane

0x202e,	// (0x00033c8a) status_small_pane

0x2042,	// (0x00033c9e) control_pane

0x2042,	// (0x00033c9e) stacon_bottom_pane

0x2437,	// (0x00034093) scroll_pane_cp121

0x242e,	// (0x0003408a) set_content_pane

0x70f7,	// (0x00038d53) bg_active_tab_pane_g1_cp1

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp1

0x7109,	// (0x00038d65) bg_active_tab_pane_g3_cp1

0x70f7,	// (0x00038d53) bg_passive_tab_pane_g1_cp1

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp1

0x7109,	// (0x00038d65) bg_passive_tab_pane_g3_cp1

0x7112,	// (0x00038d6e) bg_active_tab_pane_g1_cp2

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp2

0x711b,	// (0x00038d77) bg_active_tab_pane_g3_cp2

0x7112,	// (0x00038d6e) bg_passive_tab_pane_g1_cp2

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp2

0x711b,	// (0x00038d77) bg_passive_tab_pane_g3_cp2

0x7124,	// (0x00038d80) bg_active_tab_pane_g1_cp3

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp3

0x712d,	// (0x00038d89) bg_active_tab_pane_g3_cp3

0x7124,	// (0x00038d80) bg_passive_tab_pane_g1_cp3

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp3

0x712d,	// (0x00038d89) bg_passive_tab_pane_g3_cp3

0x7136,	// (0x00038d92) bg_active_tab_pane_g1_cp4

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp4

0x7141,	// (0x00038d9d) bg_active_tab_pane_g3_cp4

0x7136,	// (0x00038d92) bg_passive_tab_pane_g1_cp4

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp4

0x7141,	// (0x00038d9d) bg_passive_tab_pane_g3_cp4

0x728d,	// (0x00038ee9) bg_active_tab_pane_g1_cp5

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp5

0x7296,	// (0x00038ef2) bg_active_tab_pane_g3_cp5

0x728d,	// (0x00038ee9) bg_passive_tab_pane_g1_cp5

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp5

0x7296,	// (0x00038ef2) bg_passive_tab_pane_g3_cp5

0x729f,	// (0x00038efb) list_set_graphic_pane_ParamLimits

0x729f,	// (0x00038efb) list_set_graphic_pane

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp4

0x2a81,	// (0x000346dd) list_set_graphic_pane_g1_ParamLimits

0x2a81,	// (0x000346dd) list_set_graphic_pane_g1

0x2a8d,	// (0x000346e9) list_set_graphic_pane_g2_ParamLimits

0x2a8d,	// (0x000346e9) list_set_graphic_pane_g2

0x0001,

0xf718,	// (0x00041374) list_set_graphic_pane_g_ParamLimits

0xf718,	// (0x00041374) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x0004170c) volume_small_pane_cp_g

0x72bd,	// (0x00038f19) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x72bd,	// (0x00038f19) list_double2_large_graphic_pane_g1_cp2

0x2aaf,	// (0x0003470b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2aaf,	// (0x0003470b) list_double2_large_graphic_pane_g2_cp2

0x2ac0,	// (0x0003471c) list_double2_large_graphic_pane_g3_cp2

0x2ac8,	// (0x00034724) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2ac8,	// (0x00034724) list_double2_large_graphic_pane_t1_cp2

0x2ade,	// (0x0003473a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2ade,	// (0x0003473a) list_double2_large_graphic_pane_t2_cp2

0xaae9,	// (0x0003c745) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaae9,	// (0x0003c745) list_double_large_graphic_pane_g1_cp2

0xaafa,	// (0x0003c756) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaafa,	// (0x0003c756) list_double_large_graphic_pane_g2_cp2

0x2c16,	// (0x00034872) list_double_large_graphic_pane_g3_cp2

0xab0b,	// (0x0003c767) list_double_large_graphic_pane_g4_cp

0xab13,	// (0x0003c76f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab13,	// (0x0003c76f) list_double_large_graphic_pane_t1_cp2

0xab2a,	// (0x0003c786) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab2a,	// (0x0003c786) list_double_large_graphic_pane_t2_cp2

0x2b08,	// (0x00034764) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2b08,	// (0x00034764) list_double2_graphic_pane_g1_cp2

0x2b16,	// (0x00034772) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2b16,	// (0x00034772) list_double2_graphic_pane_g2_cp2

0x2b27,	// (0x00034783) list_double2_graphic_pane_g3_cp2

0x2b31,	// (0x0003478d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2b31,	// (0x0003478d) list_double2_graphic_pane_t1_cp2

0x2b47,	// (0x000347a3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2b47,	// (0x000347a3) list_double2_graphic_pane_t2_cp2

0x2b59,	// (0x000347b5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2b59,	// (0x000347b5) list_single_number_heading_pane_g1_cp2

0x2b65,	// (0x000347c1) list_single_number_heading_pane_g2_cp2

0x2b6d,	// (0x000347c9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b6d,	// (0x000347c9) list_single_number_heading_pane_t1_cp2

0x2b83,	// (0x000347df) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b83,	// (0x000347df) list_single_number_heading_pane_t2_cp2

0x2b95,	// (0x000347f1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2b95,	// (0x000347f1) list_single_number_heading_pane_t3_cp2

0x2b59,	// (0x000347b5) list_single_heading_pane_g1_cp2_ParamLimits

0x2b59,	// (0x000347b5) list_single_heading_pane_g1_cp2

0x2b65,	// (0x000347c1) list_single_heading_pane_g2_cp2

0x2b6d,	// (0x000347c9) list_single_heading_pane_t1_cp2_ParamLimits

0x2b6d,	// (0x000347c9) list_single_heading_pane_t1_cp2

0xa8f3,	// (0x0003c54f) list_single_heading_pane_t2_cp2_ParamLimits

0xa8f3,	// (0x0003c54f) list_single_heading_pane_t2_cp2

0xa83b,	// (0x0003c497) list_double_graphic_pane_g1_cp2_ParamLimits

0xa83b,	// (0x0003c497) list_double_graphic_pane_g1_cp2

0xa847,	// (0x0003c4a3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa847,	// (0x0003c4a3) list_double_graphic_pane_g2_cp2

0xa856,	// (0x0003c4b2) list_double_graphic_pane_g3_cp2

0xa85e,	// (0x0003c4ba) list_double_graphic_pane_t1_cp2_ParamLimits

0xa85e,	// (0x0003c4ba) list_double_graphic_pane_t1_cp2

0xa874,	// (0x0003c4d0) list_double_graphic_pane_t2_cp2_ParamLimits

0xa874,	// (0x0003c4d0) list_double_graphic_pane_t2_cp2

0x2c0a,	// (0x00034866) list_double_number_pane_g1_cp2_ParamLimits

0x2c0a,	// (0x00034866) list_double_number_pane_g1_cp2

0x2c16,	// (0x00034872) list_double_number_pane_g2_cp2

0xa7ff,	// (0x0003c45b) list_double_number_pane_t1_cp2_ParamLimits

0xa7ff,	// (0x0003c45b) list_double_number_pane_t1_cp2

0xa813,	// (0x0003c46f) list_double_number_pane_t2_cp2_ParamLimits

0xa813,	// (0x0003c46f) list_double_number_pane_t2_cp2

0xa829,	// (0x0003c485) list_double_number_pane_t3_cp2_ParamLimits

0xa829,	// (0x0003c485) list_double_number_pane_t3_cp2

0xa6e8,	// (0x0003c344) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6e8,	// (0x0003c344) list_single_graphic_pane_g1_cp2

0x2c73,	// (0x000348cf) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c73,	// (0x000348cf) list_single_graphic_pane_g2_cp2

0x2c7f,	// (0x000348db) list_single_graphic_pane_g3_cp2

0xa6be,	// (0x0003c31a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6be,	// (0x0003c31a) list_single_graphic_pane_t1_cp2

0x2c73,	// (0x000348cf) list_single_number_pane_g1_cp2_ParamLimits

0x2c73,	// (0x000348cf) list_single_number_pane_g1_cp2

0x2c7f,	// (0x000348db) list_single_number_pane_g2_cp2

0xa6be,	// (0x0003c31a) list_single_number_pane_t1_cp2_ParamLimits

0xa6be,	// (0x0003c31a) list_single_number_pane_t1_cp2

0xa6d4,	// (0x0003c330) list_single_number_pane_t2_cp2_ParamLimits

0xa6d4,	// (0x0003c330) list_single_number_pane_t2_cp2

0x2aaf,	// (0x0003470b) list_double2_pane_g1_cp2_ParamLimits

0x2aaf,	// (0x0003470b) list_double2_pane_g1_cp2

0x2ac0,	// (0x0003471c) list_double2_pane_g2_cp2

0x2be2,	// (0x0003483e) list_double2_pane_t1_cp2_ParamLimits

0x2be2,	// (0x0003483e) list_double2_pane_t1_cp2

0x2bf8,	// (0x00034854) list_double2_pane_t2_cp2_ParamLimits

0x2bf8,	// (0x00034854) list_double2_pane_t2_cp2

0x2c0a,	// (0x00034866) list_double_pane_g1_cp2_ParamLimits

0x2c0a,	// (0x00034866) list_double_pane_g1_cp2

0x2c16,	// (0x00034872) list_double_pane_g2_cp2

0x2c1e,	// (0x0003487a) list_double_pane_t1_cp2_ParamLimits

0x2c1e,	// (0x0003487a) list_double_pane_t1_cp2

0x2c34,	// (0x00034890) list_double_pane_t2_cp2_ParamLimits

0x2c34,	// (0x00034890) list_double_pane_t2_cp2

0x72ff,	// (0x00038f5b) list_single_pane_cp2_g3

0x2c73,	// (0x000348cf) list_single_pane_g1_cp2_ParamLimits

0x2c73,	// (0x000348cf) list_single_pane_g1_cp2

0x2c7f,	// (0x000348db) list_single_pane_g2_cp2

0x2c87,	// (0x000348e3) list_single_pane_t1_cp2_ParamLimits

0x2c87,	// (0x000348e3) list_single_pane_t1_cp2

0x7307,	// (0x00038f63) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7307,	// (0x00038f63) list_single_large_graphic_pane_g1_cp2

0x2c9f,	// (0x000348fb) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c9f,	// (0x000348fb) list_single_large_graphic_pane_g2_cp2

0x2cab,	// (0x00034907) list_single_large_graphic_pane_g3_cp2

0x7313,	// (0x00038f6f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7313,	// (0x00038f6f) list_single_large_graphic_pane_g4_cp1

0x2cb3,	// (0x0003490f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2cb3,	// (0x0003490f) list_single_large_graphic_pane_t1_cp2

0xa68a,	// (0x0003c2e6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa68a,	// (0x0003c2e6) list_single_graphic_heading_pane_g1_cp2

0xa657,	// (0x0003c2b3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa657,	// (0x0003c2b3) list_single_graphic_heading_pane_g4_cp2

0x2c7f,	// (0x000348db) list_single_graphic_heading_pane_g5_cp2

0xa696,	// (0x0003c2f2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa696,	// (0x0003c2f2) list_single_graphic_heading_pane_t1_cp2

0xa6ac,	// (0x0003c308) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ac,	// (0x0003c308) list_single_graphic_heading_pane_t2_cp2

0xa64b,	// (0x0003c2a7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa64b,	// (0x0003c2a7) list_single_2graphic_pane_g1_cp2

0xa657,	// (0x0003c2b3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa657,	// (0x0003c2b3) list_single_2graphic_pane_g2_cp2

0x2c7f,	// (0x000348db) list_single_2graphic_pane_g3_cp2

0xa668,	// (0x0003c2c4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa668,	// (0x0003c2c4) list_single_2graphic_pane_g4_cp2

0xa674,	// (0x0003c2d0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa674,	// (0x0003c2d0) list_single_2graphic_pane_t1_cp2

0x2038,	// (0x00033c94) list_highlight_pane_g10_cp1

0xa233,	// (0x0003be8f) list_highlight_pane_g1_cp1

0xa23b,	// (0x0003be97) list_highlight_pane_g2_cp1

0xa243,	// (0x0003be9f) list_highlight_pane_g3_cp1

0xa24b,	// (0x0003bea7) list_highlight_pane_g4_cp1

0xa253,	// (0x0003beaf) list_highlight_pane_g5_cp1

0xa25b,	// (0x0003beb7) list_highlight_pane_g6_cp1

0xa263,	// (0x0003bebf) list_highlight_pane_g7_cp1

0xa26b,	// (0x0003bec7) list_highlight_pane_g8_cp1

0xa273,	// (0x0003becf) list_highlight_pane_g9_cp1

0xa15b,	// (0x0003bdb7) form_field_slider_pane_t3

0xa169,	// (0x0003bdc5) form_field_slider_pane_t4

0xa177,	// (0x0003bdd3) slider_form_pane_ParamLimits

0xa177,	// (0x0003bdd3) slider_form_pane

0x2042,	// (0x00033c9e) control_abbreviations

0x2042,	// (0x00033c9e) control_conventions

0x2042,	// (0x00033c9e) control_definitions

0x2042,	// (0x00033c9e) format_table_attribute

0xa93d,	// (0x0003c599) bg_popup_preview_window_pane_g9

0x2042,	// (0x00033c9e) format_table_data2

0x2042,	// (0x00033c9e) format_table_data3

0x2042,	// (0x00033c9e) format_table_data_example

0x0008,

0x2042,	// (0x00033c9e) intro_purpose

0xf8af,	// (0x0004150b) bg_popup_preview_window_pane_g

0x2042,	// (0x00033c9e) texts_category

0x2042,	// (0x00033c9e) texts_graphics

0x2cc9,	// (0x00034925) text_digital

0x2cd8,	// (0x00034934) text_primary

0x2ce7,	// (0x00034943) text_primary_small

0x2cf6,	// (0x00034952) text_secondary

0x2d05,	// (0x00034961) text_title

0xb060,	// (0x0003ccbc) bg_passive_tab_pane_g1_cp3_srt

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp3_srt

0xb069,	// (0x0003ccc5) bg_passive_tab_pane_g3_cp3_srt

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp3_srt_ParamLimits

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp3_srt

0xb072,	// (0x0003ccce) tabs_4_active_pane_srt_g1

0xb07a,	// (0x0003ccd6) tabs_4_active_pane_srt_t1_ParamLimits

0xb07a,	// (0x0003ccd6) tabs_4_active_pane_srt_t1

0xb060,	// (0x0003ccbc) bg_active_tab_pane_g1_cp3_copy1

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp3_copy1

0xb069,	// (0x0003ccc5) bg_active_tab_pane_g3_cp3_copy1

0x209e,	// (0x00033cfa) tabs_2_long_active_pane_srt_ParamLimits

0x209e,	// (0x00033cfa) tabs_2_long_active_pane_srt

0x209e,	// (0x00033cfa) tabs_2_long_passive_pane_srt_ParamLimits

0x209e,	// (0x00033cfa) tabs_2_long_passive_pane_srt

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp4_srt

0xad4e,	// (0x0003c9aa) bg_passive_tab_pane_g1_cp4_srt

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp4_srt

0xad57,	// (0x0003c9b3) bg_passive_tab_pane_g3_cp4_srt

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp4_srt_ParamLimits

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp4_srt

0xad60,	// (0x0003c9bc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad60,	// (0x0003c9bc) tabs_2_long_active_pane_srt_t1

0xad4e,	// (0x0003c9aa) bg_active_tab_pane_g1_cp4_srt

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp4_srt

0xad57,	// (0x0003c9b3) bg_active_tab_pane_g3_cp4_srt

0x2090,	// (0x00033cec) tabs_3_long_active_pane_srt_ParamLimits

0x2090,	// (0x00033cec) tabs_3_long_active_pane_srt

0x2090,	// (0x00033cec) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2090,	// (0x00033cec) tabs_3_long_passive_pane_cp_srt

0x2090,	// (0x00033cec) tabs_3_long_passive_pane_srt_ParamLimits

0x2090,	// (0x00033cec) tabs_3_long_passive_pane_srt

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp5_srt

0x728d,	// (0x00038ee9) bg_passive_tab_pane_g1_cp5_srt

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp5_srt

0x7296,	// (0x00038ef2) bg_passive_tab_pane_g3_cp5_srt

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp5_srt_ParamLimits

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp5_srt

0xad3c,	// (0x0003c998) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad3c,	// (0x0003c998) tabs_3_long_active_pane_srt_t1

0x728d,	// (0x00038ee9) bg_active_tab_pane_g1_cp5_srt

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp5_srt

0x7296,	// (0x00038ef2) bg_active_tab_pane_g3_cp5_srt

0xad2e,	// (0x0003c98a) navi_text_pane_srt_t1

0xad26,	// (0x0003c982) navi_icon_pane_srt_g1

0x2df0,	// (0x00034a4c) midp_editing_number_pane_srt

0x2d14,	// (0x00034970) midp_ticker_pane_srt

0x2df8,	// (0x00034a54) midp_ticker_pane_srt_g1

0x2e00,	// (0x00034a5c) midp_ticker_pane_srt_g2

0x0001,

0xf737,	// (0x00041393) midp_ticker_pane_srt_g

0x2e08,	// (0x00034a64) midp_ticker_pane_srt_t1

0xad17,	// (0x0003c973) midp_editing_number_pane_t1_copy1

0x732d,	// (0x00038f89) listscroll_midp_pane

0x732d,	// (0x00038f89) midp_form_pane

0x739f,	// (0x00038ffb) midp_info_popup_window_ParamLimits

0x739f,	// (0x00038ffb) midp_info_popup_window

0x2531,	// (0x0003418d) bg_popup_sub_pane_cp50_ParamLimits

0x2531,	// (0x0003418d) bg_popup_sub_pane_cp50

0x9e67,	// (0x0003bac3) listscroll_midp_info_pane_ParamLimits

0x9e67,	// (0x0003bac3) listscroll_midp_info_pane

0x9e47,	// (0x0003baa3) listscroll_form_midp_pane_ParamLimits

0x9e47,	// (0x0003baa3) listscroll_form_midp_pane

0x9e53,	// (0x0003baaf) scroll_bar_cp050

0x9e27,	// (0x0003ba83) list_midp_pane

0xbad2,	// (0x0003d72e) signal_pane_g2_cp

0x9d61,	// (0x0003b9bd) listscroll_midp_info_pane_t1_ParamLimits

0x9d61,	// (0x0003b9bd) listscroll_midp_info_pane_t1

0x9d79,	// (0x0003b9d5) listscroll_midp_info_pane_t2_ParamLimits

0x9d79,	// (0x0003b9d5) listscroll_midp_info_pane_t2

0x9db7,	// (0x0003ba13) listscroll_midp_info_pane_t3_ParamLimits

0x9db7,	// (0x0003ba13) listscroll_midp_info_pane_t3

0x9df1,	// (0x0003ba4d) listscroll_midp_info_pane_t4_ParamLimits

0x9df1,	// (0x0003ba4d) listscroll_midp_info_pane_t4

0x0003,

0xf7ea,	// (0x00041446) listscroll_midp_info_pane_t_ParamLimits

0xf7ea,	// (0x00041446) listscroll_midp_info_pane_t

0x2586,	// (0x000341e2) scroll_pane_cp21

0x9d01,	// (0x0003b95d) form_midp_field_choice_group_pane

0x9d0a,	// (0x0003b966) form_midp_field_text_pane

0x9d47,	// (0x0003b9a3) form_midp_field_time_pane

0x9d4f,	// (0x0003b9ab) form_midp_gauge_slider_pane

0x9d58,	// (0x0003b9b4) form_midp_gauge_wait_pane

0x2042,	// (0x00033c9e) form_midp_image_pane

0x80fa,	// (0x00039d56) list_single_midp_pane_ParamLimits

0x80fa,	// (0x00039d56) list_single_midp_pane

0x9cb6,	// (0x0003b912) form_midp_field_text_pane_t1

0x9a80,	// (0x0003b6dc) input_focus_pane_cp050

0x9cf0,	// (0x0003b94c) list_midp_form_text_pane

0x9c85,	// (0x0003b8e1) form_midp_field_choice_group_pane_t1

0x9c93,	// (0x0003b8ef) input_focus_pane_cp051

0x9ca7,	// (0x0003b903) list_midp_choice_pane

0x2042,	// (0x00033c9e) status_idle_pane

0x9c69,	// (0x0003b8c5) form_midp_field_time_pane_t1

0x2038,	// (0x00033c94) wait_anim_pane_g2_copy1

0x9c77,	// (0x0003b8d3) form_midp_field_time_pane_t2

0x0001,

0x2d74,	// (0x000349d0) aid_navinavi_width_2_pane

0xf7e5,	// (0x00041441) form_midp_field_time_pane_t

0x2042,	// (0x00033c9e) input_focus_pane_cp052

0x2042,	// (0x00033c9e) bg_input_focus_pane_cp040

0x9c29,	// (0x0003b885) form_midp_gauge_slider_pane_t1

0x9c37,	// (0x0003b893) form_midp_gauge_slider_pane_t2

0x9c45,	// (0x0003b8a1) form_midp_gauge_slider_pane_t3

0x9c53,	// (0x0003b8af) form_midp_gauge_slider_pane_t4

0x0003,

0xf7dc,	// (0x00041438) form_midp_gauge_slider_pane_t

0x9c61,	// (0x0003b8bd) form_midp_slider_pane

0x209e,	// (0x00033cfa) bg_input_focus_pane_cp041_ParamLimits

0x209e,	// (0x00033cfa) bg_input_focus_pane_cp041

0x9bf6,	// (0x0003b852) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bf6,	// (0x0003b852) form_midp_gauge_wait_pane_t1

0x9c08,	// (0x0003b864) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c08,	// (0x0003b864) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d7,	// (0x00041433) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d7,	// (0x00041433) form_midp_gauge_wait_pane_t

0x9c1a,	// (0x0003b876) form_midp_wait_pane_ParamLimits

0x9c1a,	// (0x0003b876) form_midp_wait_pane

0x9bc0,	// (0x0003b81c) form_midp_image_pane_g1

0x9bc9,	// (0x0003b825) form_midp_image_pane_t1

0x9bd8,	// (0x0003b834) form_midp_image_pane_t2

0x9be7,	// (0x0003b843) form_midp_image_pane_t3

0x0002,

0xf7d0,	// (0x0004142c) form_midp_image_pane_t

0x9bb7,	// (0x0003b813) list_single_midp_pane_g1

0x488f,	// (0x000364eb) list_single_midp_pane_t1

0x9b8e,	// (0x0003b7ea) list_midp_form_item_pane_ParamLimits

0x9b8e,	// (0x0003b7ea) list_midp_form_item_pane

0x2d1c,	// (0x00034978) list_midp_form_item_pane_t1

0x2d2b,	// (0x00034987) midp_ticker_pane_g1

0x2d37,	// (0x00034993) midp_ticker_pane_g2

0x0001,

0xf71d,	// (0x00041379) midp_ticker_pane_g

0x2d43,	// (0x0003499f) midp_ticker_pane_t1

0xaf64,	// (0x0003cbc0) midp_editing_number_pane_t1

0xaf42,	// (0x0003cb9e) midp_editing_number_pane

0xaf51,	// (0x0003cbad) midp_ticker_pane

0x9e73,	// (0x0003bacf) ai_message_heading_pane

0x2042,	// (0x00033c9e) bg_popup_window_pane_cp14

0x9e7b,	// (0x0003bad7) listscroll_ai_message_pane

0xaca1,	// (0x0003c8fd) ai_message_heading_pane_g1_ParamLimits

0xaca1,	// (0x0003c8fd) ai_message_heading_pane_g1

0xacad,	// (0x0003c909) ai_message_heading_pane_g2_ParamLimits

0xacad,	// (0x0003c909) ai_message_heading_pane_g2

0xacb9,	// (0x0003c915) ai_message_heading_pane_g3_ParamLimits

0xacb9,	// (0x0003c915) ai_message_heading_pane_g3

0xacc5,	// (0x0003c921) ai_message_heading_pane_g4_ParamLimits

0xacc5,	// (0x0003c921) ai_message_heading_pane_g4

0x0003,

0xf911,	// (0x0004156d) ai_message_heading_pane_g_ParamLimits

0xf911,	// (0x0004156d) ai_message_heading_pane_g

0xacd1,	// (0x0003c92d) ai_message_heading_pane_t1_ParamLimits

0xacd1,	// (0x0003c92d) ai_message_heading_pane_t1

0xaceb,	// (0x0003c947) ai_message_heading_pane_t2_ParamLimits

0xaceb,	// (0x0003c947) ai_message_heading_pane_t2

0x0001,

0xf91a,	// (0x00041576) ai_message_heading_pane_t_ParamLimits

0xf91a,	// (0x00041576) ai_message_heading_pane_t

0xacfd,	// (0x0003c959) bg_popup_heading_pane_cp1_ParamLimits

0xacfd,	// (0x0003c959) bg_popup_heading_pane_cp1

0xac8f,	// (0x0003c8eb) list_ai_message_pane_ParamLimits

0xac8f,	// (0x0003c8eb) list_ai_message_pane

0x2586,	// (0x000341e2) scroll_pane_cp10

0xac2b,	// (0x0003c887) list_ai_message_pane_g1

0xac33,	// (0x0003c88f) list_ai_message_pane_g2

0x0001,

0xf8ee,	// (0x0004154a) list_ai_message_pane_g

0xac3b,	// (0x0003c897) list_ai_message_pane_t1_ParamLimits

0xac3b,	// (0x0003c897) list_ai_message_pane_t1

0xac50,	// (0x0003c8ac) list_ai_message_pane_t2_ParamLimits

0xac50,	// (0x0003c8ac) list_ai_message_pane_t2

0xac65,	// (0x0003c8c1) list_ai_message_pane_t3_ParamLimits

0xac65,	// (0x0003c8c1) list_ai_message_pane_t3

0xac7a,	// (0x0003c8d6) list_ai_message_pane_t4_ParamLimits

0xac7a,	// (0x0003c8d6) list_ai_message_pane_t4

0x0003,

0xf8f3,	// (0x0004154f) list_ai_message_pane_t_ParamLimits

0xf8f3,	// (0x0004154f) list_ai_message_pane_t

0xac16,	// (0x0003c872) cell_ai_soft_ind_pane_ParamLimits

0xac16,	// (0x0003c872) cell_ai_soft_ind_pane

0x2d55,	// (0x000349b1) cell_ai_soft_ind_pane_g1_ParamLimits

0x2d55,	// (0x000349b1) cell_ai_soft_ind_pane_g1

0x2042,	// (0x00033c9e) grid_highlight_cp1

0x2d62,	// (0x000349be) text_secondary_cp56_ParamLimits

0x2d62,	// (0x000349be) text_secondary_cp56

0xabeb,	// (0x0003c847) example_general_pane_ParamLimits

0xabeb,	// (0x0003c847) example_general_pane

0xabf7,	// (0x0003c853) example_parent_pane_g1_ParamLimits

0xabf7,	// (0x0003c853) example_parent_pane_g1

0xac03,	// (0x0003c85f) example_parent_pane_t1_ParamLimits

0xac03,	// (0x0003c85f) example_parent_pane_t1

0x7a6d,	// (0x000396c9) popup_preview_text_window_ParamLimits

0x7a6d,	// (0x000396c9) popup_preview_text_window

0x2c6b,	// (0x000348c7) list_single_pane_cp2_g4

0x2270,	// (0x00033ecc) bg_popup_preview_window_pane_ParamLimits

0x2270,	// (0x00033ecc) bg_popup_preview_window_pane

0xa945,	// (0x0003c5a1) popup_preview_text_window_t1_ParamLimits

0xa945,	// (0x0003c5a1) popup_preview_text_window_t1

0xa963,	// (0x0003c5bf) popup_preview_text_window_t2_ParamLimits

0xa963,	// (0x0003c5bf) popup_preview_text_window_t2

0xa9ac,	// (0x0003c608) popup_preview_text_window_t3_ParamLimits

0xa9ac,	// (0x0003c608) popup_preview_text_window_t3

0xa9f1,	// (0x0003c64d) popup_preview_text_window_t4_ParamLimits

0xa9f1,	// (0x0003c64d) popup_preview_text_window_t4

0x0004,

0xf8c2,	// (0x0004151e) popup_preview_text_window_t_ParamLimits

0xf8c2,	// (0x0004151e) popup_preview_text_window_t

0xaa6f,	// (0x0003c6cb) scroll_pane_cp11

0x99f4,	// (0x0003b650) bg_popup_preview_window_pane_g1

0xa905,	// (0x0003c561) bg_popup_preview_window_pane_g2

0xa90d,	// (0x0003c569) bg_popup_preview_window_pane_g3

0xa915,	// (0x0003c571) bg_popup_preview_window_pane_g4

0xa91d,	// (0x0003c579) bg_popup_preview_window_pane_g5

0xa925,	// (0x0003c581) bg_popup_preview_window_pane_g6

0xa92d,	// (0x0003c589) bg_popup_preview_window_pane_g7

0xa935,	// (0x0003c591) bg_popup_preview_window_pane_g8

0x5ce3,	// (0x0003793f) aid_popup_width_pane

0x7a4b,	// (0x000396a7) popup_midp_note_alarm_window_ParamLimits

0x7a4b,	// (0x000396a7) popup_midp_note_alarm_window

0x2448,	// (0x000340a4) data_form_pane_ParamLimits

0x6994,	// (0x000385f0) form_field_data_pane_g1

0x699e,	// (0x000385fa) form_field_data_pane_t1_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_ParamLimits

0x69b6,	// (0x00038612) data_form_wide_pane_ParamLimits

0x69c7,	// (0x00038623) form_field_data_wide_pane_g1

0x69d3,	// (0x0003862f) form_field_data_wide_pane_t1_ParamLimits

0x2348,	// (0x00033fa4) input_focus_pane_cp6_ParamLimits

0x6b7f,	// (0x000387db) input_popup_find_pane_g1_ParamLimits

0x6b7f,	// (0x000387db) input_popup_find_pane_g1

0x6d1f,	// (0x0003897b) aid_navi_side_left_pane

0x6d34,	// (0x00038990) aid_navi_side_right_pane

0xa32e,	// (0x0003bf8a) bg_popup_window_pane_cp30_ParamLimits

0xa32e,	// (0x0003bf8a) bg_popup_window_pane_cp30

0xa3a8,	// (0x0003c004) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a8,	// (0x0003c004) popup_midp_note_alarm_window_g1

0xa3d8,	// (0x0003c034) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d8,	// (0x0003c034) popup_midp_note_alarm_window_t1

0xa479,	// (0x0003c0d5) popup_midp_note_alarm_window_t2_ParamLimits

0xa479,	// (0x0003c0d5) popup_midp_note_alarm_window_t2

0xa527,	// (0x0003c183) popup_midp_note_alarm_window_t3_ParamLimits

0xa527,	// (0x0003c183) popup_midp_note_alarm_window_t3

0xa54f,	// (0x0003c1ab) popup_midp_note_alarm_window_t4_ParamLimits

0xa54f,	// (0x0003c1ab) popup_midp_note_alarm_window_t4

0xa56f,	// (0x0003c1cb) popup_midp_note_alarm_window_t5_ParamLimits

0xa56f,	// (0x0003c1cb) popup_midp_note_alarm_window_t5

0x000a,

0xf85f,	// (0x000414bb) popup_midp_note_alarm_window_t_ParamLimits

0xf85f,	// (0x000414bb) popup_midp_note_alarm_window_t

0xa61b,	// (0x0003c277) wait_bar_pane_cp1_ParamLimits

0xa61b,	// (0x0003c277) wait_bar_pane_cp1

0x2042,	// (0x00033c9e) wait_anim_pane_copy1

0x2042,	// (0x00033c9e) wait_border_pane_copy1

0xa024,	// (0x0003bc80) wait_border_pane_g1_copy1

0x69ed,	// (0x00038649) form_field_popup_pane_g1

0x69f5,	// (0x00038651) form_field_popup_pane_t1_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_cp7_ParamLimits

0x2482,	// (0x000340de) list_form_pane_ParamLimits

0x6a0d,	// (0x00038669) form_field_popup_wide_pane_g1

0x6a15,	// (0x00038671) form_field_popup_wide_pane_t1_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_cp8_ParamLimits

0x248e,	// (0x000340ea) list_form_wide_pane_ParamLimits

0xb104,	// (0x0003cd60) aid_size_cell_graphic_pane

0x6a9f,	// (0x000386fb) data_form_pane_t1_ParamLimits

0x8371,	// (0x00039fcd) data_form_wide_pane_t1_ParamLimits

0x7d52,	// (0x000399ae) bg_status_flat_pane

0x60f2,	// (0x00037d4e) title_pane_t1_ParamLimits

0x2058,	// (0x00033cb4) title_pane_t2_ParamLimits

0x207e,	// (0x00033cda) title_pane_t3_ParamLimits

0xf530,	// (0x0004118c) title_pane_t_ParamLimits

0x283b,	// (0x00034497) level_1_signal_ParamLimits

0x2848,	// (0x000344a4) level_2_signal_ParamLimits

0x2855,	// (0x000344b1) level_3_signal_ParamLimits

0x2862,	// (0x000344be) level_4_signal_ParamLimits

0x286f,	// (0x000344cb) level_5_signal_ParamLimits

0x287c,	// (0x000344d8) level_6_signal_ParamLimits

0x2889,	// (0x000344e5) level_7_signal_ParamLimits

0x283b,	// (0x00034497) level_1_battery_ParamLimits

0x2848,	// (0x000344a4) level_2_battery_ParamLimits

0x2855,	// (0x000344b1) level_3_battery_ParamLimits

0x2862,	// (0x000344be) level_4_battery_ParamLimits

0x286f,	// (0x000344cb) level_5_battery_ParamLimits

0x287c,	// (0x000344d8) level_6_battery_ParamLimits

0x2889,	// (0x000344e5) level_7_battery_ParamLimits

0xa233,	// (0x0003be8f) bg_status_flat_pane_g1

0xa23b,	// (0x0003be97) bg_status_flat_pane_g2

0xa243,	// (0x0003be9f) bg_status_flat_pane_g3

0xa24b,	// (0x0003bea7) bg_status_flat_pane_g4

0xa253,	// (0x0003beaf) bg_status_flat_pane_g5

0xa25b,	// (0x0003beb7) bg_status_flat_pane_g6

0xa263,	// (0x0003bebf) bg_status_flat_pane_g7

0x6162,	// (0x00037dbe) tabs_3_active_pane_t1_ParamLimits

0x6162,	// (0x00037dbe) tabs_3_passive_pane_t1_ParamLimits

0x617c,	// (0x00037dd8) tabs_4_active_pane_t1_ParamLimits

0x617c,	// (0x00037dd8) tabs_4_1_passive_pane_t1_ParamLimits

0x6bb6,	// (0x00038812) tabs_2_active_pane_t1_ParamLimits

0x6bb6,	// (0x00038812) tabs_2_passive_pane_t1_ParamLimits

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp4_ParamLimits

0x6bd6,	// (0x00038832) tabs_2_long_active_pane_t1_ParamLimits

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp4_ParamLimits

0x8047,	// (0x00039ca3) list_single_midp_graphic_pane_t1_ParamLimits

0x6bc8,	// (0x00038824) bg_active_tab_pane_cp5_ParamLimits

0x6bf5,	// (0x00038851) tabs_3_long_active_pane_t1_ParamLimits

0x6be9,	// (0x00038845) bg_passive_tab_pane_cp5_ParamLimits

0x8047,	// (0x00039ca3) list_single_midp_graphic_pane_t1

0x7d52,	// (0x000399ae) bg_status_flat_pane_ParamLimits

0x7e1b,	// (0x00039a77) indicator_pane_cp2_ParamLimits

0x7e1b,	// (0x00039a77) indicator_pane_cp2

0x7f46,	// (0x00039ba2) navi_pane_srt_ParamLimits

0x7f46,	// (0x00039ba2) navi_pane_srt

0x7f6a,	// (0x00039bc6) popup_clock_digital_analogue_window_cp1

0x20e2,	// (0x00033d3e) indicator_pane_t1

0x2d14,	// (0x00034970) copy_highlight_pane

0x2d14,	// (0x00034970) cursor_graphics_pane

0x2d14,	// (0x00034970) graphic_within_text_pane

0x2d14,	// (0x00034970) link_highlight_pane

0xaa32,	// (0x0003c68e) popup_preview_text_window_t5_ParamLimits

0xaa32,	// (0x0003c68e) popup_preview_text_window_t5

0x2d7c,	// (0x000349d8) cursor_digital_pane

0x2d7c,	// (0x000349d8) cursor_primary_pane

0x2d8d,	// (0x000349e9) cursor_primary_small_pane

0x2d95,	// (0x000349f1) cursor_secondary_pane

0x2d9d,	// (0x000349f9) cursor_title_pane

0x2d7c,	// (0x000349d8) link_highlight_digital_pane

0x2d84,	// (0x000349e0) link_highlight_primary_pane

0x2d8d,	// (0x000349e9) link_highlight_primary_small_pane

0x2d95,	// (0x000349f1) link_highlight_secondary_pane

0x2d9d,	// (0x000349f9) link_highlight_title_pane

0x2d7c,	// (0x000349d8) copy_highlight_digital_pane

0x2d7c,	// (0x000349d8) copy_highlight_primary_pane

0x2d8d,	// (0x000349e9) copy_highlight_primary_small_pane

0x2d95,	// (0x000349f1) copy_highlight_secondary_pane

0x2d9d,	// (0x000349f9) copy_highlight_title_pane

0x2d95,	// (0x000349f1) graphic_text_digital_pane

0xa2d1,	// (0x0003bf2d) graphic_text_primary_pane

0xa2da,	// (0x0003bf36) graphic_text_primary_small_pane

0x2d8d,	// (0x000349e9) graphic_text_secondary_pane

0x2d7c,	// (0x000349d8) graphic_text_title_pane

0x73f7,	// (0x00039053) cursor_primary_pane_g1

0xa2c3,	// (0x0003bf1f) cursor_text_primary_t1

0xa2ab,	// (0x0003bf07) cursor_primary_small_pane_g1

0xa2b5,	// (0x0003bf11) cursor_text_primary_small_t1

0xa293,	// (0x0003beef) cursor_primary_small_pane_g1_copy1

0xa29d,	// (0x0003bef9) cursor_text_primary_small_t1_copy1

0xa27b,	// (0x0003bed7) cursor_text_title_t1

0xa289,	// (0x0003bee5) cursor_title_pane_g1

0x73f7,	// (0x00039053) cursor_digital_pane_g1

0x2da5,	// (0x00034a01) cursor_text_digital_t1

0x2db3,	// (0x00034a0f) link_highlight_primary_pane_g1

0xa224,	// (0x0003be80) link_highlight_primary_pane_t1

0x2db3,	// (0x00034a0f) link_highlight_primary_small_pane_g1

0x2dbb,	// (0x00034a17) link_highlight_primary_small_pane_t1

0x2db3,	// (0x00034a0f) link_highlight_secondary_pane_g1

0x2dca,	// (0x00034a26) link_highlight_secondary_pane_t1

0xa189,	// (0x0003bde5) link_highlight_title_pane_g1

0xa1a0,	// (0x0003bdfc) link_highlight_title_pane_t1

0xa189,	// (0x0003bde5) link_highlight_digital_pane_g1

0xa191,	// (0x0003bded) link_highlight_digital_pane_t1

0xa043,	// (0x0003bc9f) copy_highlight_primary_pane_g1

0xa069,	// (0x0003bcc5) copy_highlight_primary_pane_t1

0xa043,	// (0x0003bc9f) copy_highlight_primary_small_pane_g1

0xa05a,	// (0x0003bcb6) copy_highlight_primary_small_pane_t1

0x2dd9,	// (0x00034a35) copy_highlight_secondary_pane_g1

0x2de1,	// (0x00034a3d) copy_highlight_secondary_pane_t1

0xa043,	// (0x0003bc9f) copy_highlight_title_pane_g1

0xa04b,	// (0x0003bca7) copy_highlight_title_pane_t1

0xa043,	// (0x0003bc9f) copy_highlight_digital_pane_g1

0xb2d2,	// (0x0003cf2e) copy_highlight_digital_pane_t1

0xb226,	// (0x0003ce82) graphic_text_primary_pane_g1

0xb2b6,	// (0x0003cf12) graphic_text_primary_pane_t1

0xb2c4,	// (0x0003cf20) graphic_text_primary_pane_t2

0x0001,

0xf98e,	// (0x000415ea) graphic_text_primary_pane_t

0xb292,	// (0x0003ceee) graphic_text_primary_small_pane_g1

0xb29a,	// (0x0003cef6) graphic_text_primary_small_pane_t1

0xb2a8,	// (0x0003cf04) graphic_text_primary_small_pane_t2

0x0001,

0xf989,	// (0x000415e5) graphic_text_primary_small_pane_t

0xb26e,	// (0x0003ceca) graphic_text_secondary_pane_g1

0xb276,	// (0x0003ced2) graphic_text_secondary_pane_t1

0xb284,	// (0x0003cee0) graphic_text_secondary_pane_t2

0x0001,

0xf984,	// (0x000415e0) graphic_text_secondary_pane_t

0xb24a,	// (0x0003cea6) graphic_text_title_pane_g1

0xb252,	// (0x0003ceae) graphic_text_title_pane_t1

0xb260,	// (0x0003cebc) graphic_text_title_pane_t2

0x0001,

0xf97f,	// (0x000415db) graphic_text_title_pane_t

0xb226,	// (0x0003ce82) graphic_text_digital_pane_g1

0xb22e,	// (0x0003ce8a) graphic_text_digital_pane_t1

0xb23c,	// (0x0003ce98) graphic_text_digital_pane_t2

0x0001,

0xf97a,	// (0x000415d6) graphic_text_digital_pane_t

0x209e,	// (0x00033cfa) navi_icon_pane_srt_ParamLimits

0x209e,	// (0x00033cfa) navi_icon_pane_srt

0x2042,	// (0x00033c9e) navi_midp_pane_srt

0x2042,	// (0x00033c9e) navi_navi_pane_srt

0x209e,	// (0x00033cfa) navi_text_pane_srt_ParamLimits

0x209e,	// (0x00033cfa) navi_text_pane_srt

0xb1f1,	// (0x0003ce4d) navi_navi_icon_text_pane_srt

0xb1f9,	// (0x0003ce55) navi_navi_pane_srt_g1_ParamLimits

0xb1f9,	// (0x0003ce55) navi_navi_pane_srt_g1

0xb20b,	// (0x0003ce67) navi_navi_pane_srt_g2_ParamLimits

0xb20b,	// (0x0003ce67) navi_navi_pane_srt_g2

0x0001,

0xf975,	// (0x000415d1) navi_navi_pane_srt_g_ParamLimits

0xf975,	// (0x000415d1) navi_navi_pane_srt_g

0xb21d,	// (0x0003ce79) navi_navi_tabs_pane_srt

0xb1f1,	// (0x0003ce4d) navi_navi_text_pane_srt

0xb1f1,	// (0x0003ce4d) navi_navi_volume_pane_srt

0xb1e2,	// (0x0003ce3e) navi_navi_text_pane_srt_t1

0x84bf,	// (0x0003a11b) navi_navi_volume_pane_srt_g1

0x84c7,	// (0x0003a123) volume_small_pane_srt_ParamLimits

0x84c7,	// (0x0003a123) volume_small_pane_srt

0x7401,	// (0x0003905d) volume_small_pane_srt_g1_ParamLimits

0x7401,	// (0x0003905d) volume_small_pane_srt_g1

0x7411,	// (0x0003906d) volume_small_pane_srt_g2_ParamLimits

0x7411,	// (0x0003906d) volume_small_pane_srt_g2

0x7422,	// (0x0003907e) volume_small_pane_srt_g3_ParamLimits

0x7422,	// (0x0003907e) volume_small_pane_srt_g3

0x7433,	// (0x0003908f) volume_small_pane_srt_g4_ParamLimits

0x7433,	// (0x0003908f) volume_small_pane_srt_g4

0x7444,	// (0x000390a0) volume_small_pane_srt_g5_ParamLimits

0x7444,	// (0x000390a0) volume_small_pane_srt_g5

0x7455,	// (0x000390b1) volume_small_pane_srt_g6_ParamLimits

0x7455,	// (0x000390b1) volume_small_pane_srt_g6

0x7466,	// (0x000390c2) volume_small_pane_srt_g7_ParamLimits

0x7466,	// (0x000390c2) volume_small_pane_srt_g7

0x7477,	// (0x000390d3) volume_small_pane_srt_g8_ParamLimits

0x7477,	// (0x000390d3) volume_small_pane_srt_g8

0x7488,	// (0x000390e4) volume_small_pane_srt_g9_ParamLimits

0x7488,	// (0x000390e4) volume_small_pane_srt_g9

0x7499,	// (0x000390f5) volume_small_pane_srt_g10_ParamLimits

0x7499,	// (0x000390f5) volume_small_pane_srt_g10

0x0009,

0xf722,	// (0x0004137e) volume_small_pane_srt_g_ParamLimits

0xf722,	// (0x0004137e) volume_small_pane_srt_g

0x63c9,	// (0x00038025) query_popup_data_pane_cp2

0xb1c8,	// (0x0003ce24) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c8,	// (0x0003ce24) navi_navi_icon_text_pane_srt_t1

0xa2d1,	// (0x0003bf2d) navi_tabs_2_long_pane_srt

0xa2d1,	// (0x0003bf2d) navi_tabs_2_pane_srt

0xa2d1,	// (0x0003bf2d) navi_tabs_3_long_pane_srt

0xa2d1,	// (0x0003bf2d) navi_tabs_3_pane_srt

0xa2d1,	// (0x0003bf2d) navi_tabs_4_pane_srt

0x849f,	// (0x0003a0fb) tabs_2_active_pane_srt_ParamLimits

0x849f,	// (0x0003a0fb) tabs_2_active_pane_srt

0x84af,	// (0x0003a10b) tabs_2_passive_pane_srt_ParamLimits

0x84af,	// (0x0003a10b) tabs_2_passive_pane_srt

0x2596,	// (0x000341f2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2596,	// (0x000341f2) bg_passive_tab_pane_cp1_srt

0xb194,	// (0x0003cdf0) bg_passive_tab_pane_g1_cp1_srt

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp1_srt

0xb19d,	// (0x0003cdf9) bg_passive_tab_pane_g3_cp1_srt

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp1_srt_ParamLimits

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp1_srt

0xb1a6,	// (0x0003ce02) tabs_2_active_pane_srt_g1

0xb1ae,	// (0x0003ce0a) tabs_2_active_pane_srt_t1_ParamLimits

0xb1ae,	// (0x0003ce0a) tabs_2_active_pane_srt_t1

0xb194,	// (0x0003cdf0) bg_active_tab_pane_g1_cp1_srt

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp1_srt

0xb19d,	// (0x0003cdf9) bg_active_tab_pane_g3_cp1_srt

0x846c,	// (0x0003a0c8) tabs_3_active_pane_srt_ParamLimits

0x846c,	// (0x0003a0c8) tabs_3_active_pane_srt

0x847d,	// (0x0003a0d9) tabs_3_passive_pane_cp_srt_ParamLimits

0x847d,	// (0x0003a0d9) tabs_3_passive_pane_cp_srt

0x848e,	// (0x0003a0ea) tabs_3_passive_pane_srt_ParamLimits

0x848e,	// (0x0003a0ea) tabs_3_passive_pane_srt

0x2596,	// (0x000341f2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2596,	// (0x000341f2) bg_passive_tab_pane_cp2_srt

0x74aa,	// (0x00039106) bg_passive_tab_pane_g1_cp2_srt

0x7100,	// (0x00038d5c) bg_passive_tab_pane_g2_cp2_srt

0x74b3,	// (0x0003910f) bg_passive_tab_pane_g3_cp2_srt

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp2_srt_ParamLimits

0x209e,	// (0x00033cfa) bg_active_tab_pane_cp2_srt

0xb17a,	// (0x0003cdd6) tabs_3_active_pane_srt_g1

0xb182,	// (0x0003cdde) tabs_3_active_pane_srt_t1_ParamLimits

0xb182,	// (0x0003cdde) tabs_3_active_pane_srt_t1

0x74aa,	// (0x00039106) bg_active_tab_pane_g1_cp2_srt

0x7100,	// (0x00038d5c) bg_active_tab_pane_g2_cp2_srt

0x74b3,	// (0x0003910f) bg_active_tab_pane_g3_cp2_srt

0x8424,	// (0x0003a080) tabs_4_active_pane_srt_ParamLimits

0x8424,	// (0x0003a080) tabs_4_active_pane_srt

0x8436,	// (0x0003a092) tabs_4_passive_pane_cp2_srt_ParamLimits

0x8436,	// (0x0003a092) tabs_4_passive_pane_cp2_srt

0x76cc,	// (0x00039328) aid_size_cell_toolbar

0x6be9,	// (0x00038845) main_idle_act_pane_ParamLimits

0x787d,	// (0x000394d9) popup_large_graphic_colour_window_ParamLimits

0x7be8,	// (0x00039844) popup_toolbar_window_ParamLimits

0x7be8,	// (0x00039844) popup_toolbar_window

0xaf73,	// (0x0003cbcf) list_single_graphic_2heading_pane_ParamLimits

0xaf73,	// (0x0003cbcf) list_single_graphic_2heading_pane

0x2723,	// (0x0003437f) aid_size_cell_apps_grid_lsc_pane

0x2735,	// (0x00034391) aid_size_cell_apps_grid_prt_pane

0x2596,	// (0x000341f2) bg_wml_button_pane_cp1_ParamLimits

0x2596,	// (0x000341f2) bg_wml_button_pane_cp1

0x9cb6,	// (0x0003b912) form_midp_field_text_pane_t1_ParamLimits

0x9a80,	// (0x0003b6dc) input_focus_pane_cp050_ParamLimits

0x9cf0,	// (0x0003b94c) list_midp_form_text_pane_ParamLimits

0x9c93,	// (0x0003b8ef) input_focus_pane_cp051_ParamLimits

0x9ca7,	// (0x0003b903) list_midp_choice_pane_ParamLimits

0x9b36,	// (0x0003b792) list_single_2graphic_pane_cp3_ParamLimits

0x9b36,	// (0x0003b792) list_single_2graphic_pane_cp3

0x9b5b,	// (0x0003b7b7) list_single_midp_graphic_pane_ParamLimits

0x9b5b,	// (0x0003b7b7) list_single_midp_graphic_pane

0x5c51,	// (0x000378ad) list_single_graphic_2heading_pane_g1_ParamLimits

0x5c51,	// (0x000378ad) list_single_graphic_2heading_pane_g1

0x5c5d,	// (0x000378b9) list_single_graphic_2heading_pane_g4_ParamLimits

0x5c5d,	// (0x000378b9) list_single_graphic_2heading_pane_g4

0x5c69,	// (0x000378c5) list_single_graphic_2heading_pane_g5_ParamLimits

0x5c69,	// (0x000378c5) list_single_graphic_2heading_pane_g5

0x0002,

0xf775,	// (0x000413d1) list_single_graphic_2heading_pane_g_ParamLimits

0xf775,	// (0x000413d1) list_single_graphic_2heading_pane_g

0x5c75,	// (0x000378d1) list_single_graphic_2heading_pane_t1_ParamLimits

0x5c75,	// (0x000378d1) list_single_graphic_2heading_pane_t1

0x5c89,	// (0x000378e5) list_single_graphic_2heading_pane_t2_ParamLimits

0x5c89,	// (0x000378e5) list_single_graphic_2heading_pane_t2

0x5ca3,	// (0x000378ff) list_single_graphic_2heading_pane_t3_ParamLimits

0x5ca3,	// (0x000378ff) list_single_graphic_2heading_pane_t3

0x0002,

0xf77c,	// (0x000413d8) list_single_graphic_2heading_pane_t_ParamLimits

0xf77c,	// (0x000413d8) list_single_graphic_2heading_pane_t

0x9932,	// (0x0003b58e) bg_popup_sub_pane_cp2

0x995c,	// (0x0003b5b8) grid_toobar_pane

0x7fb6,	// (0x00039c12) cell_toolbar_pane_ParamLimits

0x7fb6,	// (0x00039c12) cell_toolbar_pane

0x9998,	// (0x0003b5f4) cell_toolbar_pane_g1_ParamLimits

0x9998,	// (0x0003b5f4) cell_toolbar_pane_g1

0x99ac,	// (0x0003b608) cell_toolbar_pane_g2_ParamLimits

0x99ac,	// (0x0003b608) cell_toolbar_pane_g2

0x0001,

0xf78a,	// (0x000413e6) cell_toolbar_pane_g_ParamLimits

0xf78a,	// (0x000413e6) cell_toolbar_pane_g

0x99ce,	// (0x0003b62a) grid_highlight_pane_cp2_ParamLimits

0x99ce,	// (0x0003b62a) grid_highlight_pane_cp2

0x99e8,	// (0x0003b644) toolbar_button_pane

0x99f4,	// (0x0003b650) toolbar_button_pane_g1

0x99fc,	// (0x0003b658) toolbar_button_pane_g2

0x9a04,	// (0x0003b660) toolbar_button_pane_g3

0x9a0c,	// (0x0003b668) toolbar_button_pane_g4

0x9a14,	// (0x0003b670) toolbar_button_pane_g5

0x9a1c,	// (0x0003b678) toolbar_button_pane_g6

0x9a24,	// (0x0003b680) toolbar_button_pane_g7

0x9a2c,	// (0x0003b688) toolbar_button_pane_g8

0x9a34,	// (0x0003b690) toolbar_button_pane_g9

0x0009,

0xf78f,	// (0x000413eb) toolbar_button_pane_g

0x7fee,	// (0x00039c4a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7fee,	// (0x00039c4a) list_single_2graphic_pane_g1_cp3

0x7ffa,	// (0x00039c56) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7ffa,	// (0x00039c56) list_single_2graphic_pane_g2_cp3

0x800b,	// (0x00039c67) list_single_2graphic_pane_g3_cp3

0x8013,	// (0x00039c6f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8013,	// (0x00039c6f) list_single_2graphic_pane_g4_cp3

0x801f,	// (0x00039c7b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x801f,	// (0x00039c7b) list_single_2graphic_pane_t1_cp3

0x803b,	// (0x00039c97) list_single_midp_graphic_pane_g2_ParamLimits

0x803b,	// (0x00039c97) list_single_midp_graphic_pane_g2

0x76d4,	// (0x00039330) aid_zoom_text_primary

0x5c35,	// (0x00037891) aid_zoom_text_secondary

0x2e56,	// (0x00034ab2) status_small_pane_g7_ParamLimits

0x2e56,	// (0x00034ab2) status_small_pane_g7

0x750d,	// (0x00039169) status_small_pane_t1_ParamLimits

0x60d5,	// (0x00037d31) title_pane_g2

0x0003,

0xf527,	// (0x00041183) title_pane_g

0x6423,	// (0x0003807f) aid_size_cell_colour_1_pane_ParamLimits

0x6423,	// (0x0003807f) aid_size_cell_colour_1_pane

0x6437,	// (0x00038093) aid_size_cell_colour_2_pane_ParamLimits

0x6437,	// (0x00038093) aid_size_cell_colour_2_pane

0x644b,	// (0x000380a7) aid_size_cell_colour_3_pane_ParamLimits

0x644b,	// (0x000380a7) aid_size_cell_colour_3_pane

0x645f,	// (0x000380bb) aid_size_cell_colour_4_pane_ParamLimits

0x645f,	// (0x000380bb) aid_size_cell_colour_4_pane

0x6c5c,	// (0x000388b8) title_pane_stacon_g1_ParamLimits

0x6c5c,	// (0x000388b8) title_pane_stacon_g1

0xa0c0,	// (0x0003bd1c) popup_note_wait_window_g3_ParamLimits

0xa0c0,	// (0x0003bd1c) popup_note_wait_window_g3

0xa136,	// (0x0003bd92) popup_note_wait_window_t5_ParamLimits

0xa136,	// (0x0003bd92) popup_note_wait_window_t5

0x2042,	// (0x00033c9e) main_feb_china_hwr_fs_writing_pane

0x7764,	// (0x000393c0) popup_feb_china_hwr_fs_window_ParamLimits

0x7764,	// (0x000393c0) popup_feb_china_hwr_fs_window

0x805d,	// (0x00039cb9) aid_size_cell_hwr_fs_ParamLimits

0x805d,	// (0x00039cb9) aid_size_cell_hwr_fs

0x9a80,	// (0x0003b6dc) bg_popup_sub_pane_cp3_ParamLimits

0x9a80,	// (0x0003b6dc) bg_popup_sub_pane_cp3

0x8072,	// (0x00039cce) grid_hwr_fs_pane_ParamLimits

0x8072,	// (0x00039cce) grid_hwr_fs_pane

0x808a,	// (0x00039ce6) linegrid_hwr_fs_pane_ParamLimits

0x808a,	// (0x00039ce6) linegrid_hwr_fs_pane

0x809a,	// (0x00039cf6) cell_hwr_fs_pane_ParamLimits

0x809a,	// (0x00039cf6) cell_hwr_fs_pane

0x9a8c,	// (0x0003b6e8) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a8c,	// (0x0003b6e8) linegrid_hwr_fs_pane_g1

0x9a98,	// (0x0003b6f4) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a98,	// (0x0003b6f4) linegrid_hwr_fs_pane_g2

0x9aaa,	// (0x0003b706) linegrid_hwr_fs_pane_g3_ParamLimits

0x9aaa,	// (0x0003b706) linegrid_hwr_fs_pane_g3

0x80bc,	// (0x00039d18) linegrid_hwr_fs_pane_g4_ParamLimits

0x80bc,	// (0x00039d18) linegrid_hwr_fs_pane_g4

0x80d6,	// (0x00039d32) linegrid_hwr_fs_pane_g5_ParamLimits

0x80d6,	// (0x00039d32) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b5,	// (0x00041411) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b5,	// (0x00041411) linegrid_hwr_fs_pane_g

0x9ab6,	// (0x0003b712) cell_hwr_fs_pane_g1_ParamLimits

0x9ab6,	// (0x0003b712) cell_hwr_fs_pane_g1

0x986c,	// (0x0003b4c8) cell_hwr_fs_pane_g2_ParamLimits

0x986c,	// (0x0003b4c8) cell_hwr_fs_pane_g2

0x9acc,	// (0x0003b728) cell_hwr_fs_pane_g3_ParamLimits

0x9acc,	// (0x0003b728) cell_hwr_fs_pane_g3

0x9ad9,	// (0x0003b735) cell_hwr_fs_pane_g4_ParamLimits

0x9ad9,	// (0x0003b735) cell_hwr_fs_pane_g4

0x0003,

0xf7c0,	// (0x0004141c) cell_hwr_fs_pane_g_ParamLimits

0xf7c0,	// (0x0004141c) cell_hwr_fs_pane_g

0x80ec,	// (0x00039d48) cell_hwr_fs_pane_t1

0x2042,	// (0x00033c9e) grid_highlight_pane_cp6

0x2042,	// (0x00033c9e) main_idle_act2_pane

0x256d,	// (0x000341c9) aid_inside_area_popup_secondary

0xa755,	// (0x0003c3b1) aid_inside_area_window_primary_ParamLimits

0xa755,	// (0x0003c3b1) aid_inside_area_window_primary

0xb2e1,	// (0x0003cf3d) ai2_news_ticker_pane

0xb2e9,	// (0x0003cf45) aid_size_cell_ai1_link_ParamLimits

0xb2e9,	// (0x0003cf45) aid_size_cell_ai1_link

0xb303,	// (0x0003cf5f) popup_ai2_data_window_ParamLimits

0xb303,	// (0x0003cf5f) popup_ai2_data_window

0xb319,	// (0x0003cf75) popup_ai2_link_window_ParamLimits

0xb319,	// (0x0003cf75) popup_ai2_link_window

0x9a80,	// (0x0003b6dc) bg_popup_sub_pane_cp4_ParamLimits

0x9a80,	// (0x0003b6dc) bg_popup_sub_pane_cp4

0xb32d,	// (0x0003cf89) grid_ai2_link_pane_ParamLimits

0xb32d,	// (0x0003cf89) grid_ai2_link_pane

0xb344,	// (0x0003cfa0) popup_ai2_link_window_g1_ParamLimits

0xb344,	// (0x0003cfa0) popup_ai2_link_window_g1

0xb350,	// (0x0003cfac) popup_ai2_link_window_g2_ParamLimits

0xb350,	// (0x0003cfac) popup_ai2_link_window_g2

0x0001,

0xf993,	// (0x000415ef) popup_ai2_link_window_g_ParamLimits

0xf993,	// (0x000415ef) popup_ai2_link_window_g

0xb35f,	// (0x0003cfbb) ai2_mp_button_pane

0xb367,	// (0x0003cfc3) ai2_mp_volume_pane

0x9c93,	// (0x0003b8ef) bg_popup_sub_pane_cp5_ParamLimits

0x9c93,	// (0x0003b8ef) bg_popup_sub_pane_cp5

0xb36f,	// (0x0003cfcb) heading_ai2_gene_pane_ParamLimits

0xb36f,	// (0x0003cfcb) heading_ai2_gene_pane

0xb37b,	// (0x0003cfd7) list_ai2_gene_pane_ParamLimits

0xb37b,	// (0x0003cfd7) list_ai2_gene_pane

0xb3c3,	// (0x0003d01f) cell_ai2_link_pane_ParamLimits

0xb3c3,	// (0x0003d01f) cell_ai2_link_pane

0xb3d9,	// (0x0003d035) cell_ai2_link_pane_g1

0x2042,	// (0x00033c9e) grid_highlight_pane_cp7

0x84dc,	// (0x0003a138) ai2_mp_volume_pane_g1

0xb4a9,	// (0x0003d105) ai2_mp_volume_pane_g2

0xb41e,	// (0x0003d07a) list_ai2_gene_pane_t1

0xb4b1,	// (0x0003d10d) ai2_mp_volume_pane_g3

0x0002,

0xf9ac,	// (0x00041608) ai2_mp_volume_pane_g

0x84e4,	// (0x0003a140) volume_small_pane_cp3

0xb4b9,	// (0x0003d115) aid_size_cell_ai2_button

0xb4c1,	// (0x0003d11d) grid_ai2_button_pane

0xb4ca,	// (0x0003d126) cell_ai2_button_pane_ParamLimits

0xb4ca,	// (0x0003d126) cell_ai2_button_pane

0x2038,	// (0x00033c94) cell_ai2_button_pane_g1

0x2042,	// (0x00033c9e) grid_highlight_pane_cp8

0xb469,	// (0x0003d0c5) ai2_gene_pane_t1_ParamLimits

0xb469,	// (0x0003d0c5) ai2_gene_pane_t1

0x76c2,	// (0x0003931e) aid_height_parent_landscape

0xadae,	// (0x0003ca0a) aid_height_set_list

0xadbf,	// (0x0003ca1b) aid_size_parent

0xb104,	// (0x0003cd60) aid_size_cell_graphic_pane_ParamLimits

0xb38b,	// (0x0003cfe7) popup_ai2_data_window_g1_ParamLimits

0xb38b,	// (0x0003cfe7) popup_ai2_data_window_g1

0xb397,	// (0x0003cff3) ai2_news_ticker_pane_g1

0xb39f,	// (0x0003cffb) ai2_news_ticker_pane_g2

0x0001,

0xf998,	// (0x000415f4) ai2_news_ticker_pane_g

0xb3a7,	// (0x0003d003) ai2_news_ticker_pane_t1

0xb3b5,	// (0x0003d011) ai2_news_ticker_pane_t2

0x0001,

0xf99d,	// (0x000415f9) ai2_news_ticker_pane_t

0xb3e2,	// (0x0003d03e) heading_ai2_gene_pane_g1

0xb3ea,	// (0x0003d046) heading_ai2_gene_pane_t1_ParamLimits

0xb3ea,	// (0x0003d046) heading_ai2_gene_pane_t1

0xb3ff,	// (0x0003d05b) list_highlight_pane_cp6

0xb407,	// (0x0003d063) ai2_gene_pane_ParamLimits

0xb407,	// (0x0003d063) ai2_gene_pane

0xb42c,	// (0x0003d088) list_ai2_gene_pane_t2

0x0001,

0xf9a2,	// (0x000415fe) list_ai2_gene_pane_t

0xb43a,	// (0x0003d096) list_highlight_pane_cp8_ParamLimits

0xb43a,	// (0x0003d096) list_highlight_pane_cp8

0xb44b,	// (0x0003d0a7) ai2_gene_pane_g1_ParamLimits

0xb44b,	// (0x0003d0a7) ai2_gene_pane_g1

0xb45d,	// (0x0003d0b9) ai2_gene_pane_g2_ParamLimits

0xb45d,	// (0x0003d0b9) ai2_gene_pane_g2

0x0001,

0xf9a7,	// (0x00041603) ai2_gene_pane_g_ParamLimits

0xf9a7,	// (0x00041603) ai2_gene_pane_g

0x23f3,	// (0x0003404f) scroll_pane_cp12

0x767f,	// (0x000392db) control_pane_t3_ParamLimits

0x767f,	// (0x000392db) control_pane_t3

0x74fe,	// (0x0003915a) status_small_pane_g8_ParamLimits

0x74fe,	// (0x0003915a) status_small_pane_g8

0x7846,	// (0x000394a2) popup_find_window_ParamLimits

0x7a5f,	// (0x000396bb) popup_note_image_window_ParamLimits

0x47d9,	// (0x00036435) list_double2_graphic_pane_vc_g1_ParamLimits

0x47d9,	// (0x00036435) list_double2_graphic_pane_vc_g1

0x47e5,	// (0x00036441) list_double2_graphic_pane_vc_g2_ParamLimits

0x47e5,	// (0x00036441) list_double2_graphic_pane_vc_g2

0x47f1,	// (0x0003644d) list_double2_graphic_pane_vc_g3_ParamLimits

0x47f1,	// (0x0003644d) list_double2_graphic_pane_vc_g3

0x0002,

0xf783,	// (0x000413df) list_double2_graphic_pane_vc_g_ParamLimits

0xf783,	// (0x000413df) list_double2_graphic_pane_vc_g

0x45e0,	// (0x0003623c) list_double2_graphic_pane_vc_t1_ParamLimits

0x45e0,	// (0x0003623c) list_double2_graphic_pane_vc_t1

0x4570,	// (0x000361cc) list_single_heading_pane_vc_g1_ParamLimits

0x4570,	// (0x000361cc) list_single_heading_pane_vc_g1

0x457c,	// (0x000361d8) list_single_heading_pane_vc_g2_ParamLimits

0x457c,	// (0x000361d8) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x000411fd) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x000411fd) list_single_heading_pane_vc_g

0x47fd,	// (0x00036459) list_single_heading_pane_vc_t1_ParamLimits

0x47fd,	// (0x00036459) list_single_heading_pane_vc_t1

0x4813,	// (0x0003646f) list_single_heading_pane_vc_t2_ParamLimits

0x4813,	// (0x0003646f) list_single_heading_pane_vc_t2

0x0001,

0xf7a4,	// (0x00041400) list_single_heading_pane_vc_t_ParamLimits

0xf7a4,	// (0x00041400) list_single_heading_pane_vc_t

0x9a3c,	// (0x0003b698) list_setting_number_pane_vc_g1_ParamLimits

0x9a3c,	// (0x0003b698) list_setting_number_pane_vc_g1

0x9a48,	// (0x0003b6a4) list_setting_number_pane_vc_g2_ParamLimits

0x9a48,	// (0x0003b6a4) list_setting_number_pane_vc_g2

0x0001,

0xf7a9,	// (0x00041405) list_setting_number_pane_vc_g_ParamLimits

0xf7a9,	// (0x00041405) list_setting_number_pane_vc_g

0x4825,	// (0x00036481) list_setting_number_pane_vc_t1_ParamLimits

0x4825,	// (0x00036481) list_setting_number_pane_vc_t1

0x4839,	// (0x00036495) list_setting_number_pane_vc_t2_ParamLimits

0x4839,	// (0x00036495) list_setting_number_pane_vc_t2

0x4855,	// (0x000364b1) list_setting_number_pane_vc_t3_ParamLimits

0x4855,	// (0x000364b1) list_setting_number_pane_vc_t3

0x0002,

0xf7ae,	// (0x0004140a) list_setting_number_pane_vc_t_ParamLimits

0xf7ae,	// (0x0004140a) list_setting_number_pane_vc_t

0x487f,	// (0x000364db) set_value_pane_vc_ParamLimits

0x487f,	// (0x000364db) set_value_pane_vc

0xaf73,	// (0x0003cbcf) list_double2_graphic_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double2_graphic_pane_vc

0xaf73,	// (0x0003cbcf) list_double2_large_graphic_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double2_large_graphic_pane_vc

0xaf73,	// (0x0003cbcf) list_double2_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double2_pane_vc

0xaf73,	// (0x0003cbcf) list_double_graphic_heading_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double_graphic_heading_pane_vc

0xaf73,	// (0x0003cbcf) list_double_graphic_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double_graphic_pane_vc

0xaf73,	// (0x0003cbcf) list_double_heading_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double_heading_pane_vc

0x489e,	// (0x000364fa) list_double_large_graphic_pane_vc_ParamLimits

0x489e,	// (0x000364fa) list_double_large_graphic_pane_vc

0xaf73,	// (0x0003cbcf) list_double_number_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double_number_pane_vc

0xaf73,	// (0x0003cbcf) list_double_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double_pane_vc

0xaf73,	// (0x0003cbcf) list_double_time_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_double_time_pane_vc

0xaf73,	// (0x0003cbcf) list_setting_number_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_setting_number_pane_vc

0xaf73,	// (0x0003cbcf) list_setting_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_setting_pane_vc

0xaf73,	// (0x0003cbcf) list_single_graphic_heading_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_single_graphic_heading_pane_vc

0xaf73,	// (0x0003cbcf) list_single_heading_pane_vc_ParamLimits

0xaf73,	// (0x0003cbcf) list_single_heading_pane_vc

0x83bc,	// (0x0003a018) list_single_number_heading_pane_vc_ParamLimits

0x83bc,	// (0x0003a018) list_single_number_heading_pane_vc

0x4564,	// (0x000361c0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4564,	// (0x000361c0) list_double_graphic_heading_pane_vc_g1

0x47e5,	// (0x00036441) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x47e5,	// (0x00036441) list_double_graphic_heading_pane_vc_g2

0x47f1,	// (0x0003644d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x47f1,	// (0x0003644d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b3,	// (0x0004160f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b3,	// (0x0004160f) list_double_graphic_heading_pane_vc_g

0x48bd,	// (0x00036519) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48bd,	// (0x00036519) list_double_graphic_heading_pane_vc_t1

0x48d1,	// (0x0003652d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x48d1,	// (0x0003652d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ba,	// (0x00041616) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ba,	// (0x00041616) list_double_graphic_heading_pane_vc_t

0x9a3c,	// (0x0003b698) list_setting_pane_vc_g1_ParamLimits

0x9a3c,	// (0x0003b698) list_setting_pane_vc_g1

0x9a48,	// (0x0003b6a4) list_setting_pane_vc_g2_ParamLimits

0x9a48,	// (0x0003b6a4) list_setting_pane_vc_g2

0x0001,

0xf7a9,	// (0x00041405) list_setting_pane_vc_g_ParamLimits

0xf7a9,	// (0x00041405) list_setting_pane_vc_g

0x48e9,	// (0x00036545) list_setting_pane_vc_t1_ParamLimits

0x48e9,	// (0x00036545) list_setting_pane_vc_t1

0x4905,	// (0x00036561) list_setting_pane_vc_t2_ParamLimits

0x4905,	// (0x00036561) list_setting_pane_vc_t2

0x0001,

0xf9fd,	// (0x00041659) list_setting_pane_vc_t_ParamLimits

0xf9fd,	// (0x00041659) list_setting_pane_vc_t

0x487f,	// (0x000364db) set_value_pane_cp_vc_ParamLimits

0x487f,	// (0x000364db) set_value_pane_cp_vc

0x4570,	// (0x000361cc) list_single_number_heading_pane_vc_g1_ParamLimits

0x4570,	// (0x000361cc) list_single_number_heading_pane_vc_g1

0x457c,	// (0x000361d8) list_single_number_heading_pane_vc_g2_ParamLimits

0x457c,	// (0x000361d8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x000411fd) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x000411fd) list_single_number_heading_pane_vc_g

0x4588,	// (0x000361e4) list_single_number_heading_pane_vc_t1_ParamLimits

0x4588,	// (0x000361e4) list_single_number_heading_pane_vc_t1

0x491f,	// (0x0003657b) list_single_number_heading_pane_vc_t2_ParamLimits

0x491f,	// (0x0003657b) list_single_number_heading_pane_vc_t2

0x4935,	// (0x00036591) list_single_number_heading_pane_vc_t3_ParamLimits

0x4935,	// (0x00036591) list_single_number_heading_pane_vc_t3

0x0002,

0xfa02,	// (0x0004165e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa02,	// (0x0004165e) list_single_number_heading_pane_vc_t

0x4947,	// (0x000365a3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4947,	// (0x000365a3) list_single_graphic_heading_pane_vc_g1

0x4570,	// (0x000361cc) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4570,	// (0x000361cc) list_single_graphic_heading_pane_vc_g4

0x457c,	// (0x000361d8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x457c,	// (0x000361d8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa09,	// (0x00041665) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x00041665) list_single_graphic_heading_pane_vc_g

0x4588,	// (0x000361e4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4588,	// (0x000361e4) list_single_graphic_heading_pane_vc_t1

0x45b0,	// (0x0003620c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x45b0,	// (0x0003620c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0004166c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0004166c) list_single_graphic_heading_pane_vc_t

0x4570,	// (0x000361cc) list_double2_pane_vc_g1_ParamLimits

0x4570,	// (0x000361cc) list_double2_pane_vc_g1

0x457c,	// (0x000361d8) list_double2_pane_vc_g2_ParamLimits

0x457c,	// (0x000361d8) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x000411fd) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x000411fd) list_double2_pane_vc_g

0x4953,	// (0x000365af) list_double2_pane_vc_t1_ParamLimits

0x4953,	// (0x000365af) list_double2_pane_vc_t1

0x45d4,	// (0x00036230) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x45d4,	// (0x00036230) list_double2_large_graphic_pane_vc_g1

0x4570,	// (0x000361cc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4570,	// (0x000361cc) list_double2_large_graphic_pane_vc_g2

0x457c,	// (0x000361d8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x457c,	// (0x000361d8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa15,	// (0x00041671) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x00041671) list_double2_large_graphic_pane_vc_g

0x45e0,	// (0x0003623c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x45e0,	// (0x0003623c) list_double2_large_graphic_pane_vc_t1

0x496b,	// (0x000365c7) list_double_time_pane_vc_g1_ParamLimits

0x496b,	// (0x000365c7) list_double_time_pane_vc_g1

0x4977,	// (0x000365d3) list_double_time_pane_vc_g2_ParamLimits

0x4977,	// (0x000365d3) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00041678) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00041678) list_double_time_pane_vc_g

0x4983,	// (0x000365df) list_double_time_pane_vc_t1_ParamLimits

0x4983,	// (0x000365df) list_double_time_pane_vc_t1

0x49a7,	// (0x00036603) list_double_time_pane_vc_t2_ParamLimits

0x49a7,	// (0x00036603) list_double_time_pane_vc_t2

0x49f6,	// (0x00036652) list_double_time_pane_vc_t3_ParamLimits

0x49f6,	// (0x00036652) list_double_time_pane_vc_t3

0x4a08,	// (0x00036664) list_double_time_pane_vc_t4_ParamLimits

0x4a08,	// (0x00036664) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x0004167d) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x0004167d) list_double_time_pane_vc_t

0x4570,	// (0x000361cc) list_double_pane_vc_g1_ParamLimits

0x4570,	// (0x000361cc) list_double_pane_vc_g1

0x457c,	// (0x000361d8) list_double_pane_vc_g2_ParamLimits

0x457c,	// (0x000361d8) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x000411fd) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x000411fd) list_double_pane_vc_g

0x4a1c,	// (0x00036678) list_double_pane_vc_t1_ParamLimits

0x4a1c,	// (0x00036678) list_double_pane_vc_t1

0x4a30,	// (0x0003668c) list_double_pane_vc_t2_ParamLimits

0x4a30,	// (0x0003668c) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00041686) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00041686) list_double_pane_vc_t

0x4570,	// (0x000361cc) list_double_number_pane_vc_g1_ParamLimits

0x4570,	// (0x000361cc) list_double_number_pane_vc_g1

0x457c,	// (0x000361d8) list_double_number_pane_vc_g2_ParamLimits

0x457c,	// (0x000361d8) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x000411fd) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x000411fd) list_double_number_pane_vc_g

0x4a48,	// (0x000366a4) list_double_number_pane_vc_t1_ParamLimits

0x4a48,	// (0x000366a4) list_double_number_pane_vc_t1

0x4a1c,	// (0x00036678) list_double_number_pane_vc_t2_ParamLimits

0x4a1c,	// (0x00036678) list_double_number_pane_vc_t2

0x4a5a,	// (0x000366b6) list_double_number_pane_vc_t3_ParamLimits

0x4a5a,	// (0x000366b6) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x0004168b) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x0004168b) list_double_number_pane_vc_t

0x4a72,	// (0x000366ce) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4a72,	// (0x000366ce) list_double_large_graphic_pane_vc_g1

0x4a8e,	// (0x000366ea) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4a8e,	// (0x000366ea) list_double_large_graphic_pane_vc_g2

0x4aa2,	// (0x000366fe) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4aa2,	// (0x000366fe) list_double_large_graphic_pane_vc_g3

0x4ab1,	// (0x0003670d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4ab1,	// (0x0003670d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00041692) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00041692) list_double_large_graphic_pane_vc_g

0x4abd,	// (0x00036719) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4abd,	// (0x00036719) list_double_large_graphic_pane_vc_t1

0x4ad9,	// (0x00036735) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4ad9,	// (0x00036735) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x0004169b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x0004169b) list_double_large_graphic_pane_vc_t

0x47e5,	// (0x00036441) list_double_heading_pane_vc_g1_ParamLimits

0x47e5,	// (0x00036441) list_double_heading_pane_vc_g1

0x47f1,	// (0x0003644d) list_double_heading_pane_vc_g2_ParamLimits

0x47f1,	// (0x0003644d) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x000416a0) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x000416a0) list_double_heading_pane_vc_g

0x4afb,	// (0x00036757) list_double_heading_pane_vc_t1_ParamLimits

0x4afb,	// (0x00036757) list_double_heading_pane_vc_t1

0x4b0f,	// (0x0003676b) list_double_heading_pane_vc_t2_ParamLimits

0x4b0f,	// (0x0003676b) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x000416a5) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x000416a5) list_double_heading_pane_vc_t

0x4b27,	// (0x00036783) list_double_graphic_pane_vc_g1_ParamLimits

0x4b27,	// (0x00036783) list_double_graphic_pane_vc_g1

0x4b3a,	// (0x00036796) list_double_graphic_pane_vc_g2_ParamLimits

0x4b3a,	// (0x00036796) list_double_graphic_pane_vc_g2

0x4570,	// (0x000361cc) list_double_graphic_pane_vc_g3_ParamLimits

0x4570,	// (0x000361cc) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x000416aa) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x000416aa) list_double_graphic_pane_vc_g

0x4b57,	// (0x000367b3) list_double_graphic_pane_vc_t1_ParamLimits

0x4b57,	// (0x000367b3) list_double_graphic_pane_vc_t1

0x4b76,	// (0x000367d2) list_double_graphic_pane_vc_t2_ParamLimits

0x4b76,	// (0x000367d2) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x000416b3) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x000416b3) list_double_graphic_pane_vc_t

0x5cef,	// (0x0003794b) aid_size_cell_fastswap

0x5cf7,	// (0x00037953) aid_size_cell_touch_ParamLimits

0x5cf7,	// (0x00037953) aid_size_cell_touch

0x5f62,	// (0x00037bbe) popup_fast_swap_wide_window_ParamLimits

0x5f62,	// (0x00037bbe) popup_fast_swap_wide_window

0x6068,	// (0x00037cc4) touch_pane_ParamLimits

0x6068,	// (0x00037cc4) touch_pane

0x2440,	// (0x0003409c) button_value_adjust_pane_cp2

0x4720,	// (0x0003637c) button_value_adjust_pane_cp4

0x4728,	// (0x00036384) form_field_data_pane_cp2

0x693c,	// (0x00038598) form_field_data_wide_pane_cp2

0x275a,	// (0x000343b6) bg_scroll_pane_ParamLimits

0x6e56,	// (0x00038ab2) scroll_handle_pane_ParamLimits

0x6e6a,	// (0x00038ac6) scroll_sc2_down_pane_ParamLimits

0x6e6a,	// (0x00038ac6) scroll_sc2_down_pane

0x278b,	// (0x000343e7) scroll_sc2_up_pane_ParamLimits

0x278b,	// (0x000343e7) scroll_sc2_up_pane

0xbbab,	// (0x0003d807) grid_wheel_folder_pane_g1_ParamLimits

0xbbab,	// (0x0003d807) grid_wheel_folder_pane_g1

0x7225,	// (0x00038e81) clock_nsta_pane_cp2_ParamLimits

0x7225,	// (0x00038e81) clock_nsta_pane_cp2

0x732d,	// (0x00038f89) listscroll_midp_pane_ParamLimits

0x7339,	// (0x00038f95) midp_canvas_pane

0x2e78,	// (0x00034ad4) nsta_clock_indic_pane

0x2ea0,	// (0x00034afc) listscroll_form_pane_vc

0x2ea8,	// (0x00034b04) listscroll_set_pane_vc_ParamLimits

0x2ea8,	// (0x00034b04) listscroll_set_pane_vc

0x7d6e,	// (0x000399ca) clock_nsta_pane

0x7de9,	// (0x00039a45) indicator_nsta_pane

0x9932,	// (0x0003b58e) bg_popup_sub_pane_cp2_ParamLimits

0x9946,	// (0x0003b5a2) find_pane_cp2_ParamLimits

0x9946,	// (0x0003b5a2) find_pane_cp2

0x995c,	// (0x0003b5b8) grid_toobar_pane_ParamLimits

0x9a54,	// (0x0003b6b0) list_form_gen_pane_vc_ParamLimits

0x9a54,	// (0x0003b6b0) list_form_gen_pane_vc

0x9a6a,	// (0x0003b6c6) scroll_pane_cp8_vc_ParamLimits

0x9a6a,	// (0x0003b6c6) scroll_pane_cp8_vc

0x9ae6,	// (0x0003b742) data_form_wide_pane_vc_ParamLimits

0x9ae6,	// (0x0003b742) data_form_wide_pane_vc

0x9af2,	// (0x0003b74e) form_field_data_wide_pane_vc_g1

0x9afa,	// (0x0003b756) form_field_data_wide_pane_vc_t1_ParamLimits

0x9afa,	// (0x0003b756) form_field_data_wide_pane_vc_t1

0x2454,	// (0x000340b0) input_focus_pane_cp6_vc_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_cp6_vc

0x9e27,	// (0x0003ba83) list_midp_pane_ParamLimits

0x9e33,	// (0x0003ba8f) scroll_pane_cp16_ParamLimits

0x9e33,	// (0x0003ba8f) scroll_pane_cp16

0x9e9d,	// (0x0003baf9) button_value_adjust_pane_ParamLimits

0x9e9d,	// (0x0003baf9) button_value_adjust_pane

0xadd1,	// (0x0003ca2d) button_value_adjust_pane_cp6_ParamLimits

0xadd1,	// (0x0003ca2d) button_value_adjust_pane_cp6

0xaef7,	// (0x0003cb53) settings_code_pane_cp_ParamLimits

0xaef7,	// (0x0003cb53) settings_code_pane_cp

0x2038,	// (0x00033c94) cell_touch_pane_g1

0x2038,	// (0x00033c94) cell_touch_pane_g2

0x0001,

0xf6c8,	// (0x00041324) cell_touch_pane_g

0xb4dc,	// (0x0003d138) cell_touch_pane_cp_ParamLimits

0xb4dc,	// (0x0003d138) cell_touch_pane_cp

0xb4ec,	// (0x0003d148) cell_touch_pane_ParamLimits

0xb4ec,	// (0x0003d148) cell_touch_pane

0x2038,	// (0x00033c94) scroll_sc2_down_pane_g1

0x2038,	// (0x00033c94) scroll_sc2_up_pane_g1

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp4_vc

0xb4fe,	// (0x0003d15a) list_set_graphic_pane_vc_g1_ParamLimits

0xb4fe,	// (0x0003d15a) list_set_graphic_pane_vc_g1

0xb50a,	// (0x0003d166) list_set_graphic_pane_vc_g2_ParamLimits

0xb50a,	// (0x0003d166) list_set_graphic_pane_vc_g2

0x0001,

0xf9bf,	// (0x0004161b) list_set_graphic_pane_vc_g_ParamLimits

0xf9bf,	// (0x0004161b) list_set_graphic_pane_vc_g

0xb516,	// (0x0003d172) text_primary_small_cp13_vc_ParamLimits

0xb516,	// (0x0003d172) text_primary_small_cp13_vc

0xb52e,	// (0x0003d18a) list_set_graphic_pane_vc_ParamLimits

0xb52e,	// (0x0003d18a) list_set_graphic_pane_vc

0x2042,	// (0x00033c9e) input_focus_pane_cp2_vc

0x2038,	// (0x00033c94) setting_code_pane_vc_g1

0x20b5,	// (0x00033d11) setting_code_pane_vc_t1

0xb541,	// (0x0003d19d) set_text_pane_vc_t1_ParamLimits

0xb541,	// (0x0003d19d) set_text_pane_vc_t1

0x2042,	// (0x00033c9e) input_focus_pane_cp1_vc

0xb55e,	// (0x0003d1ba) list_set_text_pane_vc

0x2038,	// (0x00033c94) setting_text_pane_vc_g1

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp2_vc

0x20ac,	// (0x00033d08) setting_slider_graphic_pane_vc_g1

0xb568,	// (0x0003d1c4) setting_slider_graphic_pane_vc_t1

0xb578,	// (0x0003d1d4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c4,	// (0x00041620) setting_slider_graphic_pane_vc_t

0xb588,	// (0x0003d1e4) slider_set_pane_cp_vc

0xb590,	// (0x0003d1ec) slider_set_pane_vc_g1

0xb599,	// (0x0003d1f5) slider_set_pane_vc_g2

0x0006,

0xf9c9,	// (0x00041625) slider_set_pane_vc_g

0x24ac,	// (0x00034108) set_opt_bg_pane_g1_copy1

0x24b4,	// (0x00034110) set_opt_bg_pane_g2_copy1

0xb5c5,	// (0x0003d221) set_opt_bg_pane_g3_copy1

0x24c4,	// (0x00034120) set_opt_bg_pane_g4_copy1

0x24cc,	// (0x00034128) set_opt_bg_pane_g5_copy1

0x24d4,	// (0x00034130) set_opt_bg_pane_g6_copy1

0xb5cd,	// (0x0003d229) set_opt_bg_pane_g7_copy1

0xb5d7,	// (0x0003d233) set_opt_bg_pane_g8_copy1

0xb5df,	// (0x0003d23b) set_opt_bg_pane_g9_copy1

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp_vc

0xb5e7,	// (0x0003d243) setting_slider_pane_vc_t1

0xb5f6,	// (0x0003d252) setting_slider_pane_vc_t2

0xb606,	// (0x0003d262) setting_slider_pane_vc_t3

0x0002,

0xf9d8,	// (0x00041634) setting_slider_pane_vc_t

0xb616,	// (0x0003d272) slider_set_pane_vc

0x812d,	// (0x00039d89) volume_set_pane_vc_g1

0x84ed,	// (0x0003a149) volume_set_pane_vc_g2

0x84f6,	// (0x0003a152) volume_set_pane_vc_g3

0x84ff,	// (0x0003a15b) volume_set_pane_vc_g4

0x8508,	// (0x0003a164) volume_set_pane_vc_g5

0x8511,	// (0x0003a16d) volume_set_pane_vc_g6

0x851a,	// (0x0003a176) volume_set_pane_vc_g7

0x8523,	// (0x0003a17f) volume_set_pane_vc_g8

0x852c,	// (0x0003a188) volume_set_pane_vc_g9

0x8535,	// (0x0003a191) volume_set_pane_vc_g10

0x0009,

0xf9df,	// (0x0004163b) volume_set_pane_vc_g

0xb61e,	// (0x0003d27a) volume_set_pane_vc

0xb628,	// (0x0003d284) button_value_adjust_pane_cp1_vc

0xb632,	// (0x0003d28e) list_highlight_pane_cp2_vc

0xb63b,	// (0x0003d297) list_set_pane_vc_ParamLimits

0xb63b,	// (0x0003d297) list_set_pane_vc

0xb699,	// (0x0003d2f5) main_pane_set_vc_t1_ParamLimits

0xb699,	// (0x0003d2f5) main_pane_set_vc_t1

0xb6ae,	// (0x0003d30a) main_pane_set_vc_t2_ParamLimits

0xb6ae,	// (0x0003d30a) main_pane_set_vc_t2

0xb6c0,	// (0x0003d31c) main_pane_set_vc_t3_ParamLimits

0xb6c0,	// (0x0003d31c) main_pane_set_vc_t3

0xb6d2,	// (0x0003d32e) main_pane_set_vc_t4_ParamLimits

0xb6d2,	// (0x0003d32e) main_pane_set_vc_t4

0x0003,

0xf9f4,	// (0x00041650) main_pane_set_vc_t_ParamLimits

0xf9f4,	// (0x00041650) main_pane_set_vc_t

0xb6e4,	// (0x0003d340) setting_code_pane_vc_ParamLimits

0xb6e4,	// (0x0003d340) setting_code_pane_vc

0xb6f3,	// (0x0003d34f) setting_slider_graphic_pane_vc

0xb6f3,	// (0x0003d34f) setting_slider_pane_vc

0xb6f3,	// (0x0003d34f) setting_text_pane_vc

0xb6f3,	// (0x0003d34f) setting_volume_pane_vc

0xb6fb,	// (0x0003d357) scroll_pane_cp121_vc

0x242e,	// (0x0003408a) set_content_pane_vc

0xb703,	// (0x0003d35f) button_value_adjust_pane_g1

0xb70c,	// (0x0003d368) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x000416b8) button_value_adjust_pane_g

0xb715,	// (0x0003d371) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb715,	// (0x0003d371) form_field_slider_wide_pane_vc_t1

0xb729,	// (0x0003d385) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb729,	// (0x0003d385) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x000416bd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x000416bd) form_field_slider_wide_pane_vc_t

0x2090,	// (0x00033cec) input_focus_pane_cp10_vc_ParamLimits

0x2090,	// (0x00033cec) input_focus_pane_cp10_vc

0xb757,	// (0x0003d3b3) slider_cont_pane_cp1_vc_ParamLimits

0xb757,	// (0x0003d3b3) slider_cont_pane_cp1_vc

0xb769,	// (0x0003d3c5) slider_form_pane_g1_cp2

0xb599,	// (0x0003d1f5) slider_form_pane_g2_cp2

0xb796,	// (0x0003d3f2) form_field_slider_pane_vc_t3

0xb7a4,	// (0x0003d400) form_field_slider_pane_vc_t4

0xb7b2,	// (0x0003d40e) slider_form_pane_vc_ParamLimits

0xb7b2,	// (0x0003d40e) slider_form_pane_vc

0xb7bf,	// (0x0003d41b) form_field_slider_pane_vc_t1_ParamLimits

0xb7bf,	// (0x0003d41b) form_field_slider_pane_vc_t1

0xb729,	// (0x0003d385) form_field_slider_pane_vc_t2_ParamLimits

0xb729,	// (0x0003d385) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x000416cf) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x000416cf) form_field_slider_pane_vc_t

0x2090,	// (0x00033cec) input_focus_pane_cp9_vc_ParamLimits

0x2090,	// (0x00033cec) input_focus_pane_cp9_vc

0xb7db,	// (0x0003d437) slider_cont_pane_vc_ParamLimits

0xb7db,	// (0x0003d437) slider_cont_pane_vc

0xb7ef,	// (0x0003d44b) list_form_graphic_pane_cp_vc_ParamLimits

0xb7ef,	// (0x0003d44b) list_form_graphic_pane_cp_vc

0x9af2,	// (0x0003b74e) form_field_popup_wide_pane_vc_g1

0xb804,	// (0x0003d460) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb804,	// (0x0003d460) form_field_popup_wide_pane_vc_t1

0x2454,	// (0x000340b0) input_focus_pane_cp8_vc_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_cp8_vc

0xb849,	// (0x0003d4a5) list_form_wide_pane_vc_ParamLimits

0xb849,	// (0x0003d4a5) list_form_wide_pane_vc

0xb855,	// (0x0003d4b1) list_form_graphic_pane_vc_g1

0xb85d,	// (0x0003d4b9) list_form_graphic_pane_vc_t1_ParamLimits

0xb85d,	// (0x0003d4b9) list_form_graphic_pane_vc_t1

0x209e,	// (0x00033cfa) list_highlight_pane_cp5_vc_ParamLimits

0x209e,	// (0x00033cfa) list_highlight_pane_cp5_vc

0xb879,	// (0x0003d4d5) list_form_graphic_pane_vc_ParamLimits

0xb879,	// (0x0003d4d5) list_form_graphic_pane_vc

0x9af2,	// (0x0003b74e) form_field_popup_pane_vc_g1

0xb88f,	// (0x0003d4eb) form_field_popup_pane_vc_t1_ParamLimits

0xb88f,	// (0x0003d4eb) form_field_popup_pane_vc_t1

0x2454,	// (0x000340b0) input_focus_pane_cp7_vc_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_cp7_vc

0xb8a6,	// (0x0003d502) list_form_pane_vc_ParamLimits

0xb8a6,	// (0x0003d502) list_form_pane_vc

0xb8b2,	// (0x0003d50e) data_form_pane_vc_t1_ParamLimits

0xb8b2,	// (0x0003d50e) data_form_pane_vc_t1

0x24ac,	// (0x00034108) input_focus_pane_vc_g1

0x24b4,	// (0x00034110) input_focus_pane_vc_g2

0x24bc,	// (0x00034118) input_focus_pane_vc_g3

0x24c4,	// (0x00034120) input_focus_pane_vc_g4

0x24cc,	// (0x00034128) input_focus_pane_vc_g5

0x24d4,	// (0x00034130) input_focus_pane_vc_g6

0x24dc,	// (0x00034138) input_focus_pane_vc_g7

0x24e4,	// (0x00034140) input_focus_pane_vc_g8

0x24ec,	// (0x00034148) input_focus_pane_vc_g9

0x2038,	// (0x00033c94) input_focus_pane_vc_g10

0x0009,

0xf651,	// (0x000412ad) input_focus_pane_vc_g

0x9ae6,	// (0x0003b742) data_form_pane_vc_ParamLimits

0x9ae6,	// (0x0003b742) data_form_pane_vc

0x9af2,	// (0x0003b74e) form_field_data_pane_vc_g1

0xb8cd,	// (0x0003d529) form_field_data_pane_vc_t1_ParamLimits

0xb8cd,	// (0x0003d529) form_field_data_pane_vc_t1

0x2454,	// (0x000340b0) input_focus_pane_vc_ParamLimits

0x2454,	// (0x000340b0) input_focus_pane_vc

0xb8e7,	// (0x0003d543) button_value_adjust_pane_cp3_vc

0xb8ef,	// (0x0003d54b) button_value_adjust_pane_cp5_vc

0xb8f7,	// (0x0003d553) form_field_data_pane_vc_ParamLimits

0xb8f7,	// (0x0003d553) form_field_data_pane_vc

0xb90e,	// (0x0003d56a) form_field_data_pane_vc_cp2

0xb916,	// (0x0003d572) form_field_data_wide_pane_vc_ParamLimits

0xb916,	// (0x0003d572) form_field_data_wide_pane_vc

0xb92c,	// (0x0003d588) form_field_data_wide_pane_vc_cp2

0xb934,	// (0x0003d590) form_field_popup_pane_vc_ParamLimits

0xb934,	// (0x0003d590) form_field_popup_pane_vc

0xb94b,	// (0x0003d5a7) form_field_popup_wide_pane_vc_ParamLimits

0xb94b,	// (0x0003d5a7) form_field_popup_wide_pane_vc

0xb961,	// (0x0003d5bd) form_field_slider_pane_vc_ParamLimits

0xb961,	// (0x0003d5bd) form_field_slider_pane_vc

0xb974,	// (0x0003d5d0) form_field_slider_wide_pane_vc_ParamLimits

0xb974,	// (0x0003d5d0) form_field_slider_wide_pane_vc

0xb987,	// (0x0003d5e3) grid_touch_1_pane_ParamLimits

0xb987,	// (0x0003d5e3) grid_touch_1_pane

0xb993,	// (0x0003d5ef) grid_touch_2_pane_ParamLimits

0xb993,	// (0x0003d5ef) grid_touch_2_pane

0x2e6a,	// (0x00034ac6) touch_pane_g1_ParamLimits

0x2e6a,	// (0x00034ac6) touch_pane_g1

0xb9ab,	// (0x0003d607) cell_app_pane_cp_wide_ParamLimits

0xb9ab,	// (0x0003d607) cell_app_pane_cp_wide

0xb9bc,	// (0x0003d618) grid_popup_fast_wide_pane_ParamLimits

0xb9bc,	// (0x0003d618) grid_popup_fast_wide_pane

0xb9d0,	// (0x0003d62c) scroll_pane_cp19_ParamLimits

0xb9d0,	// (0x0003d62c) scroll_pane_cp19

0x2042,	// (0x00033c9e) bg_popup_window_pane_cp20

0xb9e4,	// (0x0003d640) listscroll_popup_fast_wide_pane

0xb9ec,	// (0x0003d648) grid_indicator_nsta_pane

0xb9fe,	// (0x0003d65a) clock_nsta_pane_g1

0xba07,	// (0x0003d663) clock_nsta_pane_t1

0xba23,	// (0x0003d67f) cell_indicator_nsta_pane_ParamLimits

0xba23,	// (0x0003d67f) cell_indicator_nsta_pane

0xba58,	// (0x0003d6b4) cell_indicator_nsta_pane_g1

0xba66,	// (0x0003d6c2) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x000416e0) cell_indicator_nsta_pane_g

0xba78,	// (0x0003d6d4) clock_nsta_pane_cp

0xba81,	// (0x0003d6dd) indicator_nsta_pane_cp

0xba8b,	// (0x0003d6e7) nsta_clock_indic_pane_g1

0x20da,	// (0x00033d36) grid_indicator_pane

0x6f08,	// (0x00038b64) scroll_pane_cp29

0x7174,	// (0x00038dd0) indicator_nsta_pane_cp2_ParamLimits

0x7174,	// (0x00038dd0) indicator_nsta_pane_cp2

0x209e,	// (0x00033cfa) main_apps_wheel_pane

0x9d0a,	// (0x0003b966) form_midp_field_text_pane_ParamLimits

0x9e53,	// (0x0003baaf) scroll_bar_cp050_ParamLimits

0xbae4,	// (0x0003d740) cell_indicator_pane_ParamLimits

0xbae4,	// (0x0003d740) cell_indicator_pane

0xbafd,	// (0x0003d759) cell_indicator_pane_g1

0xbb07,	// (0x0003d763) grid_wheel_folder_pane_ParamLimits

0xbb07,	// (0x0003d763) grid_wheel_folder_pane

0xbb1d,	// (0x0003d779) list_wheel_apps_pane_ParamLimits

0xbb1d,	// (0x0003d779) list_wheel_apps_pane

0xbb2e,	// (0x0003d78a) main_apps_wheel_pane_g1_ParamLimits

0xbb2e,	// (0x0003d78a) main_apps_wheel_pane_g1

0xbb42,	// (0x0003d79e) main_apps_wheel_pane_g2_ParamLimits

0xbb42,	// (0x0003d79e) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x000416fc) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x000416fc) main_apps_wheel_pane_g

0xbb5a,	// (0x0003d7b6) main_apps_wheel_pane_t1_ParamLimits

0xbb5a,	// (0x0003d7b6) main_apps_wheel_pane_t1

0xbb7d,	// (0x0003d7d9) list_wheel_apps_pane_g1

0xbb85,	// (0x0003d7e1) list_wheel_apps_pane_g2

0xbb8d,	// (0x0003d7e9) list_wheel_apps_pane_g3

0xbb97,	// (0x0003d7f3) list_wheel_apps_pane_g4

0xbba1,	// (0x0003d7fd) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x00041701) list_wheel_apps_pane_g

0x2bb5,	// (0x00034811) navi_icon_text_pane

0x7c9d,	// (0x000398f9) aid_fill_nsta

0xbbc4,	// (0x0003d820) navi_icon_text_pane_g1

0xbbd0,	// (0x0003d82c) navi_icon_text_pane_t1

0x2a99,	// (0x000346f5) list_set_graphic_pane_t1_ParamLimits

0x2a99,	// (0x000346f5) list_set_graphic_pane_t1

0xa59e,	// (0x0003c1fa) popup_midp_note_alarm_window_t6_ParamLimits

0xa59e,	// (0x0003c1fa) popup_midp_note_alarm_window_t6

0xa5b0,	// (0x0003c20c) popup_midp_note_alarm_window_t7_ParamLimits

0xa5b0,	// (0x0003c20c) popup_midp_note_alarm_window_t7

0xa5c2,	// (0x0003c21e) popup_midp_note_alarm_window_t8_ParamLimits

0xa5c2,	// (0x0003c21e) popup_midp_note_alarm_window_t8

0xa5d4,	// (0x0003c230) popup_midp_note_alarm_window_t9_ParamLimits

0xa5d4,	// (0x0003c230) popup_midp_note_alarm_window_t9

0xa5e6,	// (0x0003c242) popup_midp_note_alarm_window_t10_ParamLimits

0xa5e6,	// (0x0003c242) popup_midp_note_alarm_window_t10

0xa5f8,	// (0x0003c254) popup_midp_note_alarm_window_t11_ParamLimits

0xa5f8,	// (0x0003c254) popup_midp_note_alarm_window_t11

0xa60a,	// (0x0003c266) scroll_pane_cp17_ParamLimits

0xa60a,	// (0x0003c266) scroll_pane_cp17

0x812d,	// (0x00039d89) volume_small_pane_cp_g1

0x853e,	// (0x0003a19a) volume_small_pane_cp_g2

0x8547,	// (0x0003a1a3) volume_small_pane_cp_g3

0x8550,	// (0x0003a1ac) volume_small_pane_cp_g4

0x8559,	// (0x0003a1b5) volume_small_pane_cp_g5

0x8508,	// (0x0003a164) volume_small_pane_cp_g6

0x8562,	// (0x0003a1be) volume_small_pane_cp_g7

0x856b,	// (0x0003a1c7) volume_small_pane_cp_g8

0x8574,	// (0x0003a1d0) volume_small_pane_cp_g9

0x857d,	// (0x0003a1d9) volume_small_pane_cp_g10

0x2d2b,	// (0x00034987) midp_ticker_pane_g1_ParamLimits

0x2d37,	// (0x00034993) midp_ticker_pane_g2_ParamLimits

0xf71d,	// (0x00041379) midp_ticker_pane_g_ParamLimits

0x2d43,	// (0x0003499f) midp_ticker_pane_t1_ParamLimits

0x7cb3,	// (0x0003990f) aid_fill_nsta_2

0x9e3f,	// (0x0003ba9b) list_form2_midp_pane

0xaf42,	// (0x0003cb9e) midp_editing_number_pane_ParamLimits

0xaf51,	// (0x0003cbad) midp_ticker_pane_ParamLimits

0xbbe2,	// (0x0003d83e) form2_midp_field_pane

0xbc06,	// (0x0003d862) scroll_pane_cp51

0xbc26,	// (0x0003d882) form2_midp_button_pane_ParamLimits

0xbc26,	// (0x0003d882) form2_midp_button_pane

0xbc38,	// (0x0003d894) form2_midp_content_pane_ParamLimits

0xbc38,	// (0x0003d894) form2_midp_content_pane

0xbc52,	// (0x0003d8ae) form2_midp_field_choice_group_pane

0xbc5a,	// (0x0003d8b6) form2_midp_field_pane_g1

0xbc62,	// (0x0003d8be) form2_midp_field_pane_g2

0xbc6a,	// (0x0003d8c6) form2_midp_field_pane_g3

0xbc72,	// (0x0003d8ce) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x00041726) form2_midp_field_pane_g

0xbc7a,	// (0x0003d8d6) form2_midp_gauge_slider_pane

0xbc82,	// (0x0003d8de) form2_midp_gauge_wait_pane

0xbc8a,	// (0x0003d8e6) form2_midp_image_pane_ParamLimits

0xbc8a,	// (0x0003d8e6) form2_midp_image_pane

0xbca5,	// (0x0003d901) form2_midp_label_pane_ParamLimits

0xbca5,	// (0x0003d901) form2_midp_label_pane

0xbcbe,	// (0x0003d91a) form2_midp_label_pane_cp_ParamLimits

0xbcbe,	// (0x0003d91a) form2_midp_label_pane_cp

0xbcdf,	// (0x0003d93b) form2_midp_string_pane_ParamLimits

0xbcdf,	// (0x0003d93b) form2_midp_string_pane

0x4ba0,	// (0x000367fc) form2_midp_text_pane_ParamLimits

0x4ba0,	// (0x000367fc) form2_midp_text_pane

0xbcf1,	// (0x0003d94d) form2_midp_time_pane

0xbd01,	// (0x0003d95d) input_focus_pane_cp51_ParamLimits

0xbd01,	// (0x0003d95d) input_focus_pane_cp51

0xbd19,	// (0x0003d975) form2_midp_label_pane_t1_ParamLimits

0xbd19,	// (0x0003d975) form2_midp_label_pane_t1

0x4bb9,	// (0x00036815) form2_mdip_text_pane_t1_ParamLimits

0x4bb9,	// (0x00036815) form2_mdip_text_pane_t1

0x4bd7,	// (0x00036833) form2_midp_time_pane_t1

0xbd62,	// (0x0003d9be) form2_midp_gauge_slider_pane_t1

0xbd74,	// (0x0003d9d0) form2_midp_gauge_slider_pane_t2

0xbd86,	// (0x0003d9e2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x0004172f) form2_midp_gauge_slider_pane_t

0xbd98,	// (0x0003d9f4) form2_midp_slider_pane

0xbda4,	// (0x0003da00) form2_midp_gauge_wait_pane_t1

0xbdb2,	// (0x0003da0e) form2_midp_wait_pane_ParamLimits

0xbdb2,	// (0x0003da0e) form2_midp_wait_pane

0xbddd,	// (0x0003da39) list_single_2graphic_pane_cp4_ParamLimits

0xbddd,	// (0x0003da39) list_single_2graphic_pane_cp4

0x9b5b,	// (0x0003b7b7) list_single_midp_graphic_pane_cp_ParamLimits

0x9b5b,	// (0x0003b7b7) list_single_midp_graphic_pane_cp

0x2042,	// (0x00033c9e) list_highlight_pane_cp20

0xbe05,	// (0x0003da61) list_single_2graphic_pane_g1_cp4

0xb3e2,	// (0x0003d03e) list_single_2graphic_pane_g2_cp4

0xbe0d,	// (0x0003da69) list_single_2graphic_pane_t1_cp4

0x209e,	// (0x00033cfa) list_highlight_pane_cp21

0xbe1c,	// (0x0003da78) list_single_midp_graphic_pane_g4_cp

0xbe2b,	// (0x0003da87) list_single_midp_graphic_pane_t1_cp

0xbe40,	// (0x0003da9c) form2_mdip_string_pane_t1_ParamLimits

0xbe40,	// (0x0003da9c) form2_mdip_string_pane_t1

0x2042,	// (0x00033c9e) bg_wml_button_pane_cp2

0x2038,	// (0x00033c94) form2_midp_image_pane_g1

0x4641,	// (0x0003629d) list_double_large_graphic_pane_g5_ParamLimits

0x4641,	// (0x0003629d) list_double_large_graphic_pane_g5

0x732d,	// (0x00038f89) midp_form_pane_ParamLimits

0x209e,	// (0x00033cfa) main_apps_wheel_pane_ParamLimits

0x7a85,	// (0x000396e1) popup_preview_window_ParamLimits

0x7a85,	// (0x000396e1) popup_preview_window

0x7c40,	// (0x0003989c) popup_touch_info_window_ParamLimits

0x7c40,	// (0x0003989c) popup_touch_info_window

0x7c5e,	// (0x000398ba) popup_touch_menu_window_ParamLimits

0x7c5e,	// (0x000398ba) popup_touch_menu_window

0x202e,	// (0x00033c8a) bg_popup_sub_pane_cp6

0xbf47,	// (0x0003dba3) list_touch_menu_pane

0xbf4f,	// (0x0003dbab) list_single_touch_menu_pane_ParamLimits

0xbf4f,	// (0x0003dbab) list_single_touch_menu_pane

0xbf65,	// (0x0003dbc1) list_single_touch_menu_pane_t1

0x209e,	// (0x00033cfa) bg_popup_sub_pane_cp7_ParamLimits

0x209e,	// (0x00033cfa) bg_popup_sub_pane_cp7

0x9e73,	// (0x0003bacf) heading_sub_pane

0xbf73,	// (0x0003dbcf) list_touch_info_pane_ParamLimits

0xbf73,	// (0x0003dbcf) list_touch_info_pane

0xbf83,	// (0x0003dbdf) list_single_touch_info_pane_ParamLimits

0xbf83,	// (0x0003dbdf) list_single_touch_info_pane

0xbf95,	// (0x0003dbf1) list_single_touch_info_pane_t1

0xbfa3,	// (0x0003dbff) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x0004173d) list_single_touch_info_pane_t

0x2d14,	// (0x00034970) bg_popup_heading_pane_cp

0xbfb1,	// (0x0003dc0d) heading_sub_pane_t1

0x9a80,	// (0x0003b6dc) bg_popup_preview_window_pane_cp_ParamLimits

0x9a80,	// (0x0003b6dc) bg_popup_preview_window_pane_cp

0x9e73,	// (0x0003bacf) heading_preview_pane

0xbf73,	// (0x0003dbcf) list_preview_pane_ParamLimits

0xbf73,	// (0x0003dbcf) list_preview_pane

0xbfbf,	// (0x0003dc1b) popup_preview_window_g1

0xbf83,	// (0x0003dbdf) list_single_preview_pane_ParamLimits

0xbf83,	// (0x0003dbdf) list_single_preview_pane

0xbfc7,	// (0x0003dc23) list_single_preview_pane_g1

0xbfcf,	// (0x0003dc2b) list_single_preview_pane_t1

0xbf95,	// (0x0003dbf1) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00041742) list_single_preview_pane_t

0xbfdd,	// (0x0003dc39) bg_popup_heading_pane_cp2_ParamLimits

0xbfdd,	// (0x0003dc39) bg_popup_heading_pane_cp2

0xbff3,	// (0x0003dc4f) heading_preview_pane_g1

0xbffb,	// (0x0003dc57) heading_preview_pane_t1_ParamLimits

0xbffb,	// (0x0003dc57) heading_preview_pane_t1

0x20f1,	// (0x00033d4d) soft_indicator_pane_t1_ParamLimits

0x23d0,	// (0x0003402c) scroll_pane_ParamLimits

0x2782,	// (0x000343de) scroll_sc2_left_pane

0x2779,	// (0x000343d5) scroll_sc2_right_pane

0x27a1,	// (0x000343fd) scroll_bg_pane_g1_ParamLimits

0x27b6,	// (0x00034412) scroll_bg_pane_g2_ParamLimits

0x27ce,	// (0x0003442a) scroll_bg_pane_g3_ParamLimits

0xf6a8,	// (0x00041304) scroll_bg_pane_g_ParamLimits

0x27a1,	// (0x000343fd) scroll_handle_pane_g1_ParamLimits

0x27e3,	// (0x0003443f) scroll_handle_pane_g2_ParamLimits

0x27ce,	// (0x0003442a) scroll_handle_pane_g3_ParamLimits

0xf6af,	// (0x0004130b) scroll_handle_pane_g_ParamLimits

0x7708,	// (0x00039364) popup_choice_list_window_ParamLimits

0x7708,	// (0x00039364) popup_choice_list_window

0x993e,	// (0x0003b59a) choice_list_pane

0x99c0,	// (0x0003b61c) cell_toolbar_pane_t1

0x99e8,	// (0x0003b644) toolbar_button_pane_ParamLimits

0xaac4,	// (0x0003c720) ai_gene_pane_1_t2_ParamLimits

0xaac4,	// (0x0003c720) ai_gene_pane_1_t2

0x0001,

0xf8d2,	// (0x0004152e) ai_gene_pane_1_t_ParamLimits

0xf8d2,	// (0x0004152e) ai_gene_pane_1_t

0xc018,	// (0x0003dc74) scroll_sc2_left_pane_g1

0xc018,	// (0x0003dc74) scroll_sc2_right_pane_g1

0x2596,	// (0x000341f2) bg_popup_sub_pane_cp10

0xc022,	// (0x0003dc7e) list_choice_list_pane

0xc03b,	// (0x0003dc97) list_single_choice_list_pane_ParamLimits

0xc03b,	// (0x0003dc97) list_single_choice_list_pane

0xc04e,	// (0x0003dcaa) list_single_choice_list_pane_g1

0x6ba1,	// (0x000387fd) list_single_choice_list_pane_t1_ParamLimits

0x6ba1,	// (0x000387fd) list_single_choice_list_pane_t1

0xc056,	// (0x0003dcb2) choice_list_pane_g1

0xc05e,	// (0x0003dcba) choice_list_pane_t1

0x202e,	// (0x00033c8a) input_focus_pane_cp11

0x26ee,	// (0x0003434a) title_pane_stacon_g2_ParamLimits

0x26ee,	// (0x0003434a) title_pane_stacon_g2

0x0002,

0xf68e,	// (0x000412ea) title_pane_stacon_g_ParamLimits

0xf68e,	// (0x000412ea) title_pane_stacon_g

0x2d14,	// (0x00034970) cursor_press_pane

0x77b0,	// (0x0003940c) popup_fep_hwr_window_ParamLimits

0x77b0,	// (0x0003940c) popup_fep_hwr_window

0x7828,	// (0x00039484) popup_fep_vkb_window_ParamLimits

0x7828,	// (0x00039484) popup_fep_vkb_window

0xc06c,	// (0x0003dcc8) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x0004176b) fep_vkb_side_pane_g_ParamLimits

0x85bf,	// (0x0003a21b) fep_hwr_candidate_pane_ParamLimits

0x85bf,	// (0x0003a21b) fep_hwr_candidate_pane

0x85e9,	// (0x0003a245) fep_hwr_side_pane_ParamLimits

0x85e9,	// (0x0003a245) fep_hwr_side_pane

0x8609,	// (0x0003a265) fep_hwr_top_pane_ParamLimits

0x8609,	// (0x0003a265) fep_hwr_top_pane

0x8621,	// (0x0003a27d) fep_hwr_write_pane_ParamLimits

0x8621,	// (0x0003a27d) fep_hwr_write_pane

0xfb0f,	// (0x0004176b) fep_vkb_side_pane_g

0xc074,	// (0x0003dcd0) fep_hwr_top_pane_g1

0xc086,	// (0x0003dce2) fep_hwr_top_pane_g2

0x865b,	// (0x0003a2b7) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00041747) fep_hwr_top_pane_g

0x8670,	// (0x0003a2cc) fep_hwr_top_text_pane

0x28a6,	// (0x00034502) fep_hwr_top_text_pane_g1

0xc0bc,	// (0x0003dd18) fep_hwr_top_text_pane_t1

0x8766,	// (0x0003a3c2) fep_hwr_candidate_pane_g1

0xc301,	// (0x0003df5d) fep_vkb_keypad_pane_g3_ParamLimits

0xc301,	// (0x0003df5d) fep_vkb_keypad_pane_g3

0xc329,	// (0x0003df85) fep_vkb_keypad_pane_g4_ParamLimits

0xc329,	// (0x0003df85) fep_vkb_keypad_pane_g4

0xc398,	// (0x0003dff4) fep_vkb_bottom_pane_g2_ParamLimits

0xc398,	// (0x0003dff4) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x00041772) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x00041772) fep_vkb_bottom_pane_g

0xc018,	// (0x0003dc74) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x0004177c) cell_vkb_side_pane_g

0xc423,	// (0x0003e07f) cell_vkb_side_pane_t1

0xc431,	// (0x0003e08d) cell_vkb_side_pane_t1_copy1

0xc018,	// (0x0003dc74) bg_fep_vkb_candidate_pane_g2

0xc55d,	// (0x0003e1b9) cell_vkb_candidate_pane_ParamLimits

0xc0ca,	// (0x0003dd26) aid_size_cell_vkb_ParamLimits

0xc0ca,	// (0x0003dd26) aid_size_cell_vkb

0xc55d,	// (0x0003e1b9) cell_vkb_candidate_pane

0x878d,	// (0x0003a3e9) bg_popup_fep_shadow_pane_g1

0xc158,	// (0x0003ddb4) fep_vkb_bottom_pane_ParamLimits

0xc158,	// (0x0003ddb4) fep_vkb_bottom_pane

0xc18e,	// (0x0003ddea) fep_vkb_candidate_pane_ParamLimits

0xc18e,	// (0x0003ddea) fep_vkb_candidate_pane

0xc1aa,	// (0x0003de06) fep_vkb_keypad_pane_ParamLimits

0xc1aa,	// (0x0003de06) fep_vkb_keypad_pane

0xc1e9,	// (0x0003de45) fep_vkb_side_pane_ParamLimits

0xc1e9,	// (0x0003de45) fep_vkb_side_pane

0xc225,	// (0x0003de81) fep_vkb_top_pane_ParamLimits

0xc225,	// (0x0003de81) fep_vkb_top_pane

0xc25a,	// (0x0003deb6) fep_vkb_top_pane_g1_ParamLimits

0xc25a,	// (0x0003deb6) fep_vkb_top_pane_g1

0xc269,	// (0x0003dec5) fep_vkb_top_pane_g2_ParamLimits

0xc269,	// (0x0003dec5) fep_vkb_top_pane_g2

0xc278,	// (0x0003ded4) fep_vkb_top_pane_g3_ParamLimits

0xc278,	// (0x0003ded4) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00041762) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00041762) fep_vkb_top_pane_g

0xc296,	// (0x0003def2) fep_vkb_top_text_pane_ParamLimits

0xc296,	// (0x0003def2) fep_vkb_top_text_pane

0xc2a7,	// (0x0003df03) fep_vkb_side_pane_g1_ParamLimits

0xc2a7,	// (0x0003df03) fep_vkb_side_pane_g1

0xc2f0,	// (0x0003df4c) grid_vkb_side_pane_ParamLimits

0xc2f0,	// (0x0003df4c) grid_vkb_side_pane

0x8795,	// (0x0003a3f1) bg_popup_fep_shadow_pane_g2

0x879e,	// (0x0003a3fa) bg_popup_fep_shadow_pane_g3

0x87a6,	// (0x0003a402) bg_popup_fep_shadow_pane_g4

0x87af,	// (0x0003a40b) bg_popup_fep_shadow_pane_g5

0x87b9,	// (0x0003a415) bg_popup_fep_shadow_pane_g6

0x87c1,	// (0x0003a41d) bg_popup_fep_shadow_pane_g7

0x24c4,	// (0x00034120) bg_popup_fep_shadow_pane_g8

0xc347,	// (0x0003dfa3) grid_vkb_keypad_number_pane_ParamLimits

0xc347,	// (0x0003dfa3) grid_vkb_keypad_number_pane

0xc357,	// (0x0003dfb3) grid_vkb_keypad_pane_ParamLimits

0xc357,	// (0x0003dfb3) grid_vkb_keypad_pane

0xc37d,	// (0x0003dfd9) fep_vkb_bottom_pane_g1_ParamLimits

0xc37d,	// (0x0003dfd9) fep_vkb_bottom_pane_g1

0xc3a6,	// (0x0003e002) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3a6,	// (0x0003e002) grid_vkb_keypad_bottom_left_pane

0xc3bb,	// (0x0003e017) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3bb,	// (0x0003e017) grid_vkb_keypad_bottom_right_pane

0xc3d0,	// (0x0003e02c) fep_vkb_top_text_pane_g1

0xc3eb,	// (0x0003e047) fep_vkb_top_text_pane_t1

0xc400,	// (0x0003e05c) cell_vkb_side_pane_ParamLimits

0xc400,	// (0x0003e05c) cell_vkb_side_pane

0xc018,	// (0x0003dc74) cell_vkb_side_pane_g1

0xc43f,	// (0x0003e09b) cell_vkb_keypad_pane_ParamLimits

0xc43f,	// (0x0003e09b) cell_vkb_keypad_pane

0xc4b4,	// (0x0003e110) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x0004178f) bg_popup_fep_shadow_pane_g

0x87d3,	// (0x0003a42f) cell_hwr_side_pane_g1

0x87d3,	// (0x0003a42f) cell_hwr_side_pane_g2

0xc4be,	// (0x0003e11a) cell_vkb_keypad_pane_t1

0xc4cc,	// (0x0003e128) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cc,	// (0x0003e128) cell_vkb_keypad_bottom_left_pane

0xc4e9,	// (0x0003e145) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e9,	// (0x0003e145) cell_vkb_keypad_bottom_right_pane

0xc018,	// (0x0003dc74) cell_vkb_keypad_bottom_left_pane_g1

0xc018,	// (0x0003dc74) cell_vkb_keypad_bottom_right_pane_g1

0xc522,	// (0x0003e17e) cell_vkb_keypad_number_pane_ParamLimits

0xc522,	// (0x0003e17e) cell_vkb_keypad_number_pane

0xc541,	// (0x0003e19d) cell_vkb_keypad_number_pane_g1

0xc54b,	// (0x0003e1a7) cell_vkb_keypad_number_pane_g2

0xc554,	// (0x0003e1b0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x00041781) cell_vkb_keypad_number_pane_g

0xc4be,	// (0x0003e11a) cell_vkb_keypad_number_pane_t1

0xc578,	// (0x0003e1d4) fep_vkb_candidate_pane_g1

0x0001,

0xfb46,	// (0x000417a2) cell_hwr_side_pane_g

0xc591,	// (0x0003e1ed) cell_hwr_side_pane_t1

0x87dd,	// (0x0003a439) cell_hwr_side_pane_t1_copy1

0x87eb,	// (0x0003a447) cell_hwr_candidate_pane_g1

0x881a,	// (0x0003a476) cell_hwr_candidate_pane_t1

0xc018,	// (0x0003dc74) cell_vkb_candidate_pane_g2

0xc5f6,	// (0x0003e252) cell_vkb_candidate_pane_t1

0x8586,	// (0x0003a1e2) bg_popup_fep_shadow_pane_ParamLimits

0x8586,	// (0x0003a1e2) bg_popup_fep_shadow_pane

0x863b,	// (0x0003a297) bg_fep_hwr_top_pane_g4

0xc098,	// (0x0003dcf4) bg_hwr_side_pane_g1_ParamLimits

0xc098,	// (0x0003dcf4) bg_hwr_side_pane_g1

0x86ac,	// (0x0003a308) cell_hwr_side_pane_ParamLimits

0x86ac,	// (0x0003a308) cell_hwr_side_pane

0x86e7,	// (0x0003a343) fep_hwr_write_pane_g1_ParamLimits

0x86e7,	// (0x0003a343) fep_hwr_write_pane_g1

0x86f4,	// (0x0003a350) fep_hwr_write_pane_g2_ParamLimits

0x86f4,	// (0x0003a350) fep_hwr_write_pane_g2

0x8701,	// (0x0003a35d) fep_hwr_write_pane_g3_ParamLimits

0x8701,	// (0x0003a35d) fep_hwr_write_pane_g3

0x870f,	// (0x0003a36b) fep_hwr_write_pane_g4_ParamLimits

0x870f,	// (0x0003a36b) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x0004174e) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x0004174e) fep_hwr_write_pane_g

0x863b,	// (0x0003a297) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x863b,	// (0x0003a297) bg_fep_hwr_candidate_pane_g2

0x8724,	// (0x0003a380) cell_hwr_candidate_pane_ParamLimits

0x8724,	// (0x0003a380) cell_hwr_candidate_pane

0x8766,	// (0x0003a3c2) fep_hwr_candidate_pane_g1_ParamLimits

0xc0f8,	// (0x0003dd54) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0f8,	// (0x0003dd54) bg_popup_fep_shadow_pane_cp2

0xc288,	// (0x0003dee4) fep_vkb_top_pane_g4_ParamLimits

0xc288,	// (0x0003dee4) fep_vkb_top_pane_g4

0xc2ce,	// (0x0003df2a) fep_vkb_side_pane_g2_ParamLimits

0xc2ce,	// (0x0003df2a) fep_vkb_side_pane_g2

0x6893,	// (0x000384ef) list_setting_pane_t4_ParamLimits

0x6893,	// (0x000384ef) list_setting_pane_t4

0x46f5,	// (0x00036351) list_setting_number_pane_t5_ParamLimits

0x46f5,	// (0x00036351) list_setting_number_pane_t5

0x6f37,	// (0x00038b93) list_double_heading_pane_cp2_ParamLimits

0x6f37,	// (0x00038b93) list_double_heading_pane_cp2

0x2ef8,	// (0x00034b54) list_double_heading_pane_g1_cp2_ParamLimits

0x2ef8,	// (0x00034b54) list_double_heading_pane_g1_cp2

0xc604,	// (0x0003e260) list_double_heading_pane_g2_cp2_ParamLimits

0xc604,	// (0x0003e260) list_double_heading_pane_g2_cp2

0xc618,	// (0x0003e274) list_double_heading_pane_t1_cp2_ParamLimits

0xc618,	// (0x0003e274) list_double_heading_pane_t1_cp2

0xc62e,	// (0x0003e28a) list_double_heading_pane_t2_cp2_ParamLimits

0xc62e,	// (0x0003e28a) list_double_heading_pane_t2_cp2

0x2026,	// (0x00033c82) aid_value_unit2

0x5fae,	// (0x00037c0a) popup_preview_fixed_window

0x21c8,	// (0x00033e24) bg_popup_preview_window_pane_cp02

0xc640,	// (0x0003e29c) list_preview_fixed_pane

0xc686,	// (0x0003e2e2) list_empty_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_empty_pane_fp

0xc686,	// (0x0003e2e2) list_single_cale_day_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_single_cale_day_pane_fp

0xc686,	// (0x0003e2e2) list_single_graphic_heading_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_single_graphic_heading_pane_fp

0xc686,	// (0x0003e2e2) list_single_graphic_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_single_graphic_pane_fp

0xc686,	// (0x0003e2e2) list_single_heading_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_single_heading_pane_fp

0xc686,	// (0x0003e2e2) list_single_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_single_pane_fp

0xc69c,	// (0x0003e2f8) list_single_pane_fp_g1_ParamLimits

0xc69c,	// (0x0003e2f8) list_single_pane_fp_g1

0x4629,	// (0x00036285) list_single_pane_fp_g2_ParamLimits

0x4629,	// (0x00036285) list_single_pane_fp_g2

0x4bea,	// (0x00036846) list_single_pane_fp_g3_ParamLimits

0x4bea,	// (0x00036846) list_single_pane_fp_g3

0xc6a8,	// (0x0003e304) list_single_pane_fp_g4_ParamLimits

0xc6a8,	// (0x0003e304) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x000417b5) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x000417b5) list_single_pane_fp_g

0x4bfe,	// (0x0003685a) list_single_pane_fp_t1_ParamLimits

0x4bfe,	// (0x0003685a) list_single_pane_fp_t1

0x4c15,	// (0x00036871) list_single_graphic_pane_fp_g1_ParamLimits

0x4c15,	// (0x00036871) list_single_graphic_pane_fp_g1

0xc69c,	// (0x0003e2f8) list_single_graphic_pane_fp_g2_ParamLimits

0xc69c,	// (0x0003e2f8) list_single_graphic_pane_fp_g2

0x4629,	// (0x00036285) list_single_graphic_pane_fp_g3_ParamLimits

0x4629,	// (0x00036285) list_single_graphic_pane_fp_g3

0x4bea,	// (0x00036846) list_single_graphic_pane_fp_g4_ParamLimits

0x4bea,	// (0x00036846) list_single_graphic_pane_fp_g4

0xc6a8,	// (0x0003e304) list_single_graphic_pane_fp_g5_ParamLimits

0xc6a8,	// (0x0003e304) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x000417be) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x000417be) list_single_graphic_pane_fp_g

0x4c21,	// (0x0003687d) list_single_graphic_pane_fp_t1_ParamLimits

0x4c21,	// (0x0003687d) list_single_graphic_pane_fp_t1

0x4c15,	// (0x00036871) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c15,	// (0x00036871) list_single_graphic_heading_pane_fp_g1

0xc69c,	// (0x0003e2f8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc69c,	// (0x0003e2f8) list_single_graphic_heading_pane_fp_g2

0x4629,	// (0x00036285) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4629,	// (0x00036285) list_single_graphic_heading_pane_fp_g3

0x4bea,	// (0x00036846) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4bea,	// (0x00036846) list_single_graphic_heading_pane_fp_g4

0xc6a8,	// (0x0003e304) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6a8,	// (0x0003e304) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x000417be) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x000417be) list_single_graphic_heading_pane_fp_g

0x4c37,	// (0x00036893) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c37,	// (0x00036893) list_single_graphic_heading_pane_fp_t1

0x4c4d,	// (0x000368a9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4c4d,	// (0x000368a9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x000417c9) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x000417c9) list_single_graphic_heading_pane_fp_t

0x4c5f,	// (0x000368bb) list_single_cale_day_pane_fp_g1_ParamLimits

0x4c5f,	// (0x000368bb) list_single_cale_day_pane_fp_g1

0xc6b4,	// (0x0003e310) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6b4,	// (0x0003e310) list_single_cale_day_pane_fp_g2

0x4c97,	// (0x000368f3) list_single_cale_day_pane_fp_g3_ParamLimits

0x4c97,	// (0x000368f3) list_single_cale_day_pane_fp_g3

0x4cbf,	// (0x0003691b) list_single_cale_day_pane_fp_g4_ParamLimits

0x4cbf,	// (0x0003691b) list_single_cale_day_pane_fp_g4

0x4ce3,	// (0x0003693f) list_single_cale_day_pane_fp_g5_ParamLimits

0x4ce3,	// (0x0003693f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x000417ce) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x000417ce) list_single_cale_day_pane_fp_g

0x4d07,	// (0x00036963) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d07,	// (0x00036963) list_single_cale_day_pane_fp_t1

0x4d2d,	// (0x00036989) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d2d,	// (0x00036989) list_single_cale_day_pane_fp_t2

0x4d46,	// (0x000369a2) list_single_cale_day_pane_fp_t3_ParamLimits

0x4d46,	// (0x000369a2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x000417d9) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x000417d9) list_single_cale_day_pane_fp_t

0xc69c,	// (0x0003e2f8) list_empty_pane_fp_g1_ParamLimits

0xc69c,	// (0x0003e2f8) list_empty_pane_fp_g1

0x4d5f,	// (0x000369bb) list_empty_pane_fp_t1

0x4d6d,	// (0x000369c9) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x000417e0) list_empty_pane_fp_t

0xc69c,	// (0x0003e2f8) list_single_heading_pane_fp_g1_ParamLimits

0xc69c,	// (0x0003e2f8) list_single_heading_pane_fp_g1

0x4629,	// (0x00036285) list_single_heading_pane_fp_g2_ParamLimits

0x4629,	// (0x00036285) list_single_heading_pane_fp_g2

0x4bea,	// (0x00036846) list_single_heading_pane_fp_g3_ParamLimits

0x4bea,	// (0x00036846) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x000417e5) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x000417e5) list_single_heading_pane_fp_g

0x4d7b,	// (0x000369d7) list_single_heading_pane_fp_t1_ParamLimits

0x4d7b,	// (0x000369d7) list_single_heading_pane_fp_t1

0x4d8d,	// (0x000369e9) list_single_heading_pane_fp_t2_ParamLimits

0x4d8d,	// (0x000369e9) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x000417ec) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x000417ec) list_single_heading_pane_fp_t

0x6c07,	// (0x00038863) aid_size_cell_fast

0x21ab,	// (0x00033e07) soft_indicator_pane_cp1_t1

0x6c10,	// (0x0003886c) cell_app_pane_cp2_ParamLimits

0x6c10,	// (0x0003886c) cell_app_pane_cp2

0x85a8,	// (0x0003a204) fep_hwr_candidate_drop_down_list_pane

0x8780,	// (0x0003a3dc) fep_hwr_candidate_pane_g3_ParamLimits

0x8780,	// (0x0003a3dc) fep_hwr_candidate_pane_g3

0x3d7a,	// (0x000359d6) fep_hwr_candidate_pane_g4_ParamLimits

0x3d7a,	// (0x000359d6) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x0004175b) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x0004175b) fep_hwr_candidate_pane_g

0xc17d,	// (0x0003ddd9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc17d,	// (0x0003ddd9) fep_vkb_candidate_drop_down_list_pane

0xc580,	// (0x0003e1dc) fep_vkb_candidate_pane_g3

0xc588,	// (0x0003e1e4) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00041788) fep_vkb_candidate_pane_g

0x87eb,	// (0x0003a447) cell_hwr_candidate_pane_g1_ParamLimits

0x87f9,	// (0x0003a455) cell_hwr_candidate_pane_g3_ParamLimits

0x87f9,	// (0x0003a455) cell_hwr_candidate_pane_g3

0xc59f,	// (0x0003e1fb) cell_hwr_candidate_pane_g4_ParamLimits

0xc59f,	// (0x0003e1fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x000417a7) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x000417a7) cell_hwr_candidate_pane_g

0xc5c0,	// (0x0003e21c) cell_vkb_candidate_pane_g3_ParamLimits

0xc5c0,	// (0x0003e21c) cell_vkb_candidate_pane_g3

0xc5db,	// (0x0003e237) cell_vkb_candidate_pane_g4_ParamLimits

0xc5db,	// (0x0003e237) cell_vkb_candidate_pane_g4

0xc6c0,	// (0x0003e31c) cell_app_pane_cp2_g1_ParamLimits

0xc6c0,	// (0x0003e31c) cell_app_pane_cp2_g1

0xc6de,	// (0x0003e33a) cell_app_pane_cp2_g2_ParamLimits

0xc6de,	// (0x0003e33a) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x000417f1) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x000417f1) cell_app_pane_cp2_g

0xc6ea,	// (0x0003e346) cell_app_pane_cp2_t1_ParamLimits

0xc6ea,	// (0x0003e346) cell_app_pane_cp2_t1

0x2454,	// (0x000340b0) grid_highlight_pane_cp1_ParamLimits

0x2454,	// (0x000340b0) grid_highlight_pane_cp1

0x8838,	// (0x0003a494) cell_hwr_candidate_pane_cp1_ParamLimits

0x8838,	// (0x0003a494) cell_hwr_candidate_pane_cp1

0x87eb,	// (0x0003a447) fep_hwr_candidate_drop_down_list_pane_g1

0x8857,	// (0x0003a4b3) fep_hwr_candidate_drop_down_list_pane_g2

0x8864,	// (0x0003a4c0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x000417f6) fep_hwr_candidate_drop_down_list_pane_g

0x8871,	// (0x0003a4cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x887a,	// (0x0003a4d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x887a,	// (0x0003a4d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8887,	// (0x0003a4e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8887,	// (0x0003a4e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8894,	// (0x0003a4f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8894,	// (0x0003a4f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x88a1,	// (0x0003a4fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x88a1,	// (0x0003a4fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x88bc,	// (0x0003a518) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x88bc,	// (0x0003a518) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x88d7,	// (0x0003a533) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x88d7,	// (0x0003a533) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x88f2,	// (0x0003a54e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x88f2,	// (0x0003a54e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x890d,	// (0x0003a569) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x890d,	// (0x0003a569) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x000417fd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x000417fd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6fc,	// (0x0003e358) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6fc,	// (0x0003e358) cell_vkb_candidate_pane_cp1

0xc288,	// (0x0003dee4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc288,	// (0x0003dee4) fep_vkb_candidate_drop_down_list_pane_g1

0xc71c,	// (0x0003e378) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71c,	// (0x0003e378) fep_vkb_candidate_drop_down_list_pane_g2

0xc729,	// (0x0003e385) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc729,	// (0x0003e385) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004180e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0004180e) fep_vkb_candidate_drop_down_list_pane_g

0xc736,	// (0x0003e392) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc736,	// (0x0003e392) fep_vkb_candidate_drop_down_list_scroll_pane

0xc743,	// (0x0003e39f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc743,	// (0x0003e39f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc750,	// (0x0003e3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc750,	// (0x0003e3ac) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc75c,	// (0x0003e3b8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc75c,	// (0x0003e3b8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc768,	// (0x0003e3c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc768,	// (0x0003e3c4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc789,	// (0x0003e3e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc789,	// (0x0003e3e5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7aa,	// (0x0003e406) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7aa,	// (0x0003e406) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7cb,	// (0x0003e427) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7cb,	// (0x0003e427) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7ec,	// (0x0003e448) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7ec,	// (0x0003e448) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x00041815) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x00041815) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x60c8,	// (0x00037d24) title_pane_g1_ParamLimits

0x60d5,	// (0x00037d31) title_pane_g2_ParamLimits

0xf527,	// (0x00041183) title_pane_g_ParamLimits

0x289e,	// (0x000344fa) aid_call2_pane

0x2896,	// (0x000344f2) aid_call_pane

0x28a6,	// (0x00034502) popup_clock_analogue_window_g1

0x28a6,	// (0x00034502) popup_clock_analogue_window_g2

0x6f18,	// (0x00038b74) popup_clock_analogue_window_g3

0x6f21,	// (0x00038b7d) popup_clock_analogue_window_g4

0x2038,	// (0x00033c94) popup_clock_analogue_window_g5

0x0004,

0xf6bd,	// (0x00041319) popup_clock_analogue_window_g

0x6f29,	// (0x00038b85) popup_clock_analogue_window_t1

0x6f77,	// (0x00038bd3) clock_digital_number_pane_ParamLimits

0x6f77,	// (0x00038bd3) clock_digital_number_pane

0x6f83,	// (0x00038bdf) clock_digital_number_pane_cp02_ParamLimits

0x6f83,	// (0x00038bdf) clock_digital_number_pane_cp02

0x6f8f,	// (0x00038beb) clock_digital_number_pane_cp03_ParamLimits

0x6f8f,	// (0x00038beb) clock_digital_number_pane_cp03

0x6f9b,	// (0x00038bf7) clock_digital_number_pane_cp04_ParamLimits

0x6f9b,	// (0x00038bf7) clock_digital_number_pane_cp04

0x6fa7,	// (0x00038c03) clock_digital_separator_pane_ParamLimits

0x6fa7,	// (0x00038c03) clock_digital_separator_pane

0x6fb3,	// (0x00038c0f) popup_clock_digital_window_t1_ParamLimits

0x6fb3,	// (0x00038c0f) popup_clock_digital_window_t1

0x2038,	// (0x00033c94) clock_digital_number_pane_g1

0x2038,	// (0x00033c94) clock_digital_number_pane_g2

0x0001,

0xf6c8,	// (0x00041324) clock_digital_number_pane_g

0x2038,	// (0x00033c94) clock_digital_separator_pane_g1

0x2038,	// (0x00033c94) clock_digital_separator_pane_g2

0x0001,

0xf6c8,	// (0x00041324) clock_digital_separator_pane_g

0x7c9d,	// (0x000398f9) aid_fill_nsta_ParamLimits

0x7de9,	// (0x00039a45) indicator_nsta_pane_ParamLimits

0x7f62,	// (0x00039bbe) popup_clock_analogue_window

0x7f62,	// (0x00039bbe) popup_clock_digital_window

0xb9ec,	// (0x0003d648) grid_indicator_nsta_pane_ParamLimits

0xba15,	// (0x0003d671) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x000416db) clock_nsta_pane_t

0x6e43,	// (0x00038a9f) aid_size_max_handle

0x6e4d,	// (0x00038aa9) aid_size_min_handle

0x2d14,	// (0x00034970) editor_scroll_pane

0xc807,	// (0x0003e463) ex_editor_pane

0x2586,	// (0x000341e2) scroll_pane_cp13

0x23fc,	// (0x00034058) scroll_pane_cp14

0x28d5,	// (0x00034531) scroll_pane_cp36

0x6f4b,	// (0x00038ba7) list_single_graphic_hl_pane_cp2_ParamLimits

0x6f4b,	// (0x00038ba7) list_single_graphic_hl_pane_cp2

0xaf86,	// (0x0003cbe2) list_single_graphic_hl_pane_ParamLimits

0xaf86,	// (0x0003cbe2) list_single_graphic_hl_pane

0xc80f,	// (0x0003e46b) aid_size_min_hl_cp1

0xc818,	// (0x0003e474) list_highlight_pane_cp34_ParamLimits

0xc818,	// (0x0003e474) list_highlight_pane_cp34

0xc829,	// (0x0003e485) list_single_graphic_hl_pane_g1_ParamLimits

0xc829,	// (0x0003e485) list_single_graphic_hl_pane_g1

0x8928,	// (0x0003a584) list_single_graphic_hl_pane_g2_ParamLimits

0x8928,	// (0x0003a584) list_single_graphic_hl_pane_g2

0x8928,	// (0x0003a584) list_single_graphic_hl_pane_g3_ParamLimits

0x8928,	// (0x0003a584) list_single_graphic_hl_pane_g3

0x47e5,	// (0x00036441) list_single_graphic_hl_pane_g4_ParamLimits

0x47e5,	// (0x00036441) list_single_graphic_hl_pane_g4

0x8934,	// (0x0003a590) list_single_graphic_hl_pane_g5_ParamLimits

0x8934,	// (0x0003a590) list_single_graphic_hl_pane_g5

0x0004,

0xfbca,	// (0x00041826) list_single_graphic_hl_pane_g_ParamLimits

0xfbca,	// (0x00041826) list_single_graphic_hl_pane_g

0x8948,	// (0x0003a5a4) list_single_graphic_hl_pane_t1_ParamLimits

0x8948,	// (0x0003a5a4) list_single_graphic_hl_pane_t1

0xc836,	// (0x0003e492) aid_size_min_hl_cp2

0xc83f,	// (0x0003e49b) list_highlight_pane_cp34_cp2_ParamLimits

0xc83f,	// (0x0003e49b) list_highlight_pane_cp34_cp2

0xc829,	// (0x0003e485) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc829,	// (0x0003e485) list_single_graphic_hl_pane_g1_cp2

0xc84c,	// (0x0003e4a8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc84c,	// (0x0003e4a8) list_single_graphic_hl_pane_g2_cp2

0xc858,	// (0x0003e4b4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc858,	// (0x0003e4b4) list_single_graphic_hl_pane_g3_cp2

0x2c73,	// (0x000348cf) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2c73,	// (0x000348cf) list_single_graphic_hl_pane_g4_cp2

0xc866,	// (0x0003e4c2) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc866,	// (0x0003e4c2) list_single_graphic_hl_pane_g5_cp2

0x7591,	// (0x000391ed) control_pane_g4_ParamLimits

0x7591,	// (0x000391ed) control_pane_g4

0x2596,	// (0x000341f2) bg_popup_sub_pane_cp10_ParamLimits

0xc022,	// (0x0003dc7e) list_choice_list_pane_ParamLimits

0xc031,	// (0x0003dc8d) scroll_pane_cp23

0x21c8,	// (0x00033e24) bg_popup_preview_window_pane_cp02_ParamLimits

0xc640,	// (0x0003e29c) list_preview_fixed_pane_ParamLimits

0xc656,	// (0x0003e2b2) list_preview_fixed_pane_cp_ParamLimits

0xc656,	// (0x0003e2b2) list_preview_fixed_pane_cp

0xc662,	// (0x0003e2be) popup_preview_fixed_window_g1_ParamLimits

0xc662,	// (0x0003e2be) popup_preview_fixed_window_g1

0xc66e,	// (0x0003e2ca) popup_preview_fixed_window_g2_ParamLimits

0xc66e,	// (0x0003e2ca) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x000417ae) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x000417ae) popup_preview_fixed_window_g

0x6d1f,	// (0x0003897b) aid_navi_side_left_pane_ParamLimits

0x6d34,	// (0x00038990) aid_navi_side_right_pane_ParamLimits

0x6d4c,	// (0x000389a8) navi_icon_pane_stacon_ParamLimits

0x6d60,	// (0x000389bc) navi_navi_pane_stacon_ParamLimits

0x6d4c,	// (0x000389a8) navi_text_pane_stacon_ParamLimits

0x5e7d,	// (0x00037ad9) main_text_info_pane

0xc890,	// (0x0003e4ec) listscroll_text_info_pane

0xc898,	// (0x0003e4f4) list_text_info_pane_ParamLimits

0xc898,	// (0x0003e4f4) list_text_info_pane

0xc8a7,	// (0x0003e503) scroll_pane_cp24_ParamLimits

0xc8a7,	// (0x0003e503) scroll_pane_cp24

0xc8c5,	// (0x0003e521) list_text_info_pane_t1_ParamLimits

0xc8c5,	// (0x0003e521) list_text_info_pane_t1

0x7724,	// (0x00039380) popup_fast_swap2_window_ParamLimits

0x7724,	// (0x00039380) popup_fast_swap2_window

0xc8f9,	// (0x0003e555) aid_size_cell_fast2

0x202e,	// (0x00033c8a) bg_popup_window_pane_cp17

0x9e73,	// (0x0003bacf) heading_pane_cp2

0xc903,	// (0x0003e55f) listscroll_fast2_pane

0xc90b,	// (0x0003e567) grid_fast2_pane

0xc915,	// (0x0003e571) listscroll_fast2_pane_g1

0xc91d,	// (0x0003e579) listscroll_fast2_pane_g2

0x0001,

0xfbd5,	// (0x00041831) listscroll_fast2_pane_g

0x2586,	// (0x000341e2) scroll_pane_cp26

0xc927,	// (0x0003e583) cell_fast2_pane_ParamLimits

0xc927,	// (0x0003e583) cell_fast2_pane

0xc93c,	// (0x0003e598) cell_fast2_pane_g1

0xc945,	// (0x0003e5a1) cell_fast2_pane_g2

0xc94e,	// (0x0003e5aa) cell_fast2_pane_g3

0x0002,

0xfbda,	// (0x00041836) cell_fast2_pane_g

0x2333,	// (0x00033f8f) grid_highlight_pane_cp9

0x76ec,	// (0x00039348) main_eswt_pane_ParamLimits

0x76ec,	// (0x00039348) main_eswt_pane

0xc8bc,	// (0x0003e518) list_single_text_info_pane

0xc956,	// (0x0003e5b2) eswt_ctrl_button_pane

0xc956,	// (0x0003e5b2) eswt_ctrl_canvas_pane

0xc95e,	// (0x0003e5ba) eswt_ctrl_combo_pane

0xc956,	// (0x0003e5b2) eswt_ctrl_default_pane

0xc956,	// (0x0003e5b2) eswt_ctrl_label_pane

0xc966,	// (0x0003e5c2) eswt_ctrl_wait_pane

0xc96e,	// (0x0003e5ca) eswt_shell_pane

0x202e,	// (0x00033c8a) listscroll_eswt_app_pane

0xc98e,	// (0x0003e5ea) popup_eswt_tasktip_window_ParamLimits

0xc98e,	// (0x0003e5ea) popup_eswt_tasktip_window

0x9a80,	// (0x0003b6dc) bg_popup_window_pane_cp18

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_ParamLimits

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_ParamLimits

0xc9ac,	// (0x0003e608) eswt_control_pane_g2

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_ParamLimits

0xc9b9,	// (0x0003e615) eswt_control_pane_g3

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_ParamLimits

0xc9c6,	// (0x0003e622) eswt_control_pane_g4

0x0003,

0xfbe1,	// (0x0004183d) eswt_control_pane_g_ParamLimits

0xfbe1,	// (0x0004183d) eswt_control_pane_g

0x2454,	// (0x000340b0) bg_button_pane_ParamLimits

0x2454,	// (0x000340b0) bg_button_pane

0x2348,	// (0x00033fa4) common_borders_pane_copy2_ParamLimits

0x2348,	// (0x00033fa4) common_borders_pane_copy2

0xc9d3,	// (0x0003e62f) control_button_pane_g1_ParamLimits

0xc9d3,	// (0x0003e62f) control_button_pane_g1

0xc9df,	// (0x0003e63b) control_button_pane_g2_ParamLimits

0xc9df,	// (0x0003e63b) control_button_pane_g2

0xc9eb,	// (0x0003e647) control_button_pane_g3_ParamLimits

0xc9eb,	// (0x0003e647) control_button_pane_g3

0x0002,

0xfbea,	// (0x00041846) control_button_pane_g_ParamLimits

0xfbea,	// (0x00041846) control_button_pane_g

0xc9ff,	// (0x0003e65b) control_button_pane_t1

0xca0d,	// (0x0003e669) control_button_pane_t2

0x0001,

0xfbf1,	// (0x0004184d) control_button_pane_t

0x99f4,	// (0x0003b650) bg_button_pane_g1

0x9a04,	// (0x0003b660) bg_button_pane_g2

0x99fc,	// (0x0003b658) bg_button_pane_g3

0x9a14,	// (0x0003b670) bg_button_pane_g4

0x9a0c,	// (0x0003b668) bg_button_pane_g5

0x9a1c,	// (0x0003b678) bg_button_pane_g6

0x9a24,	// (0x0003b680) bg_button_pane_g7

0x9a34,	// (0x0003b690) bg_button_pane_g8

0x9a2c,	// (0x0003b688) bg_button_pane_g9

0x0008,

0xf826,	// (0x00041482) bg_button_pane_g

0xbfdd,	// (0x0003dc39) common_borders_pane_ParamLimits

0xbfdd,	// (0x0003dc39) common_borders_pane

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy1_ParamLimits

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy1

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy1_ParamLimits

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy1

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy1_ParamLimits

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy1

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy1_ParamLimits

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy1

0xc018,	// (0x0003dc74) bg_eswt_ctrl_canvas_pane_g1

0xbfdd,	// (0x0003dc39) common_borders_pane_cp2_ParamLimits

0xbfdd,	// (0x0003dc39) common_borders_pane_cp2

0xbfdd,	// (0x0003dc39) common_borders_pane_cp3_ParamLimits

0xbfdd,	// (0x0003dc39) common_borders_pane_cp3

0xca1b,	// (0x0003e677) separator_horizontal_pane

0xca23,	// (0x0003e67f) separator_vertical_pane

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy2_ParamLimits

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy2

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy2_ParamLimits

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy2

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy2_ParamLimits

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy2

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy2_ParamLimits

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy2

0x202e,	// (0x00033c8a) common_borders_pane_cp4

0xca2c,	// (0x0003e688) separator_horizontal_pane_g1

0xca35,	// (0x0003e691) separator_horizontal_pane_g2

0xca3e,	// (0x0003e69a) separator_horizontal_pane_g3

0x0002,

0xfbf6,	// (0x00041852) separator_horizontal_pane_g

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy3_ParamLimits

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy3

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy3_ParamLimits

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy3

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy3_ParamLimits

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy3

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy3_ParamLimits

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy3

0x202e,	// (0x00033c8a) common_borders_pane_cp5

0xca47,	// (0x0003e6a3) separator_vertical_pane_g1

0xca50,	// (0x0003e6ac) separator_vertical_pane_g2

0xca59,	// (0x0003e6b5) separator_vertical_pane_g3

0x0002,

0xfbfd,	// (0x00041859) separator_vertical_pane_g

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy4_ParamLimits

0xc99f,	// (0x0003e5fb) eswt_control_pane_g1_copy4

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy4_ParamLimits

0xc9ac,	// (0x0003e608) eswt_control_pane_g2_copy4

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy4_ParamLimits

0xc9b9,	// (0x0003e615) eswt_control_pane_g3_copy4

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy4_ParamLimits

0xc9c6,	// (0x0003e622) eswt_control_pane_g4_copy4

0xca62,	// (0x0003e6be) eswt_ctrl_combo_button_pane

0xca6a,	// (0x0003e6c6) eswt_ctrl_input_pane

0xca72,	// (0x0003e6ce) popup_choice_list_window_cp70

0xca7a,	// (0x0003e6d6) eswt_ctrl_input_pane_t1

0x202e,	// (0x00033c8a) input_focus_pane_cp70

0xbfdd,	// (0x0003dc39) bg_button_pane_cp70_ParamLimits

0xbfdd,	// (0x0003dc39) bg_button_pane_cp70

0xca88,	// (0x0003e6e4) eswt_ctrl_combo_button_pane_g1

0xca90,	// (0x0003e6ec) wait_bar_pane_cp70

0x9a80,	// (0x0003b6dc) bg_popup_window_pane_cp70_ParamLimits

0x9a80,	// (0x0003b6dc) bg_popup_window_pane_cp70

0xca98,	// (0x0003e6f4) popup_eswt_tasktip_window_t1

0xcaae,	// (0x0003e70a) wait_bar_pane_cp71_ParamLimits

0xcaae,	// (0x0003e70a) wait_bar_pane_cp71

0xcaba,	// (0x0003e716) grid_eswt_app_pane

0x2782,	// (0x000343de) scroll_pane_cp70

0xcac3,	// (0x0003e71f) cell_eswt_app_pane_ParamLimits

0xcac3,	// (0x0003e71f) cell_eswt_app_pane

0xcaf3,	// (0x0003e74f) cell_eswt_app_pane_g1_ParamLimits

0xcaf3,	// (0x0003e74f) cell_eswt_app_pane_g1

0xcb22,	// (0x0003e77e) cell_eswt_app_pane_g2_ParamLimits

0xcb22,	// (0x0003e77e) cell_eswt_app_pane_g2

0x0001,

0xfc04,	// (0x00041860) cell_eswt_app_pane_g_ParamLimits

0xfc04,	// (0x00041860) cell_eswt_app_pane_g

0xcb46,	// (0x0003e7a2) cell_eswt_app_pane_t1_ParamLimits

0xcb46,	// (0x0003e7a2) cell_eswt_app_pane_t1

0xcb78,	// (0x0003e7d4) grid_highlight_pane_cp70_ParamLimits

0xcb78,	// (0x0003e7d4) grid_highlight_pane_cp70

0x2c0a,	// (0x00034866) set_content_pane_g1

0x7527,	// (0x00039183) status_small_volume_pane

0x895e,	// (0x0003a5ba) status_small_volume_pane_g1

0x8966,	// (0x0003a5c2) volume_small2_pane

0x896f,	// (0x0003a5cb) volume_small2_pane_g1

0x8978,	// (0x0003a5d4) volume_small2_pane_g2

0x8981,	// (0x0003a5dd) volume_small2_pane_g3

0x898a,	// (0x0003a5e6) volume_small2_pane_g4

0x8993,	// (0x0003a5ef) volume_small2_pane_g5

0x899c,	// (0x0003a5f8) volume_small2_pane_g6

0x89a5,	// (0x0003a601) volume_small2_pane_g7

0x89ae,	// (0x0003a60a) volume_small2_pane_g8

0x89b7,	// (0x0003a613) volume_small2_pane_g9

0x89c0,	// (0x0003a61c) volume_small2_pane_g10

0x0009,

0xfc09,	// (0x00041865) volume_small2_pane_g

0xc3d0,	// (0x0003e02c) fep_vkb_top_text_pane_g1_ParamLimits

0xc3eb,	// (0x0003e047) fep_vkb_top_text_pane_t1_ParamLimits

0xc67a,	// (0x0003e2d6) popup_preview_fixed_window_g3_ParamLimits

0xc67a,	// (0x0003e2d6) popup_preview_fixed_window_g3

0x7bd3,	// (0x0003982f) popup_toolbar_trans_pane

0xadae,	// (0x0003ca0a) aid_height_set_list_ParamLimits

0xadbf,	// (0x0003ca1b) aid_size_parent_ParamLimits

0x2596,	// (0x000341f2) list_highlight_pane_cp2_ParamLimits

0x2c0a,	// (0x00034866) set_content_pane_g1_ParamLimits

0xafa5,	// (0x0003cc01) list_single_image_pane_ParamLimits

0xafa5,	// (0x0003cc01) list_single_image_pane

0xcb84,	// (0x0003e7e0) aid_size_cell_image_ParamLimits

0xcb84,	// (0x0003e7e0) aid_size_cell_image

0xcb91,	// (0x0003e7ed) grid_single_image_pane_ParamLimits

0xcb91,	// (0x0003e7ed) grid_single_image_pane

0x2f1d,	// (0x00034b79) list_single_image_pane_g1_ParamLimits

0x2f1d,	// (0x00034b79) list_single_image_pane_g1

0xcb9d,	// (0x0003e7f9) list_single_image_pane_g2_ParamLimits

0xcb9d,	// (0x0003e7f9) list_single_image_pane_g2

0x0001,

0xfc1e,	// (0x0004187a) list_single_image_pane_g_ParamLimits

0xfc1e,	// (0x0004187a) list_single_image_pane_g

0xcbb1,	// (0x0003e80d) list_single_image_pane_t1_ParamLimits

0xcbb1,	// (0x0003e80d) list_single_image_pane_t1

0xcbc7,	// (0x0003e823) cell_image_list_pane_ParamLimits

0xcbc7,	// (0x0003e823) cell_image_list_pane

0xcbdb,	// (0x0003e837) cell_image_list_pane_g1

0xcbe4,	// (0x0003e840) cell_image_list_pane_g2

0x0001,

0xfc23,	// (0x0004187f) cell_image_list_pane_g

0xcbed,	// (0x0003e849) aid_size_cell_tb_trans_pane

0x2454,	// (0x000340b0) bg_tb_trans_pane

0xcbff,	// (0x0003e85b) grid_tb_trans_pane

0x99f4,	// (0x0003b650) bg_tb_trans_pane_g1

0x9a04,	// (0x0003b660) bg_tb_trans_pane_g2

0x99fc,	// (0x0003b658) bg_tb_trans_pane_g3

0x9a14,	// (0x0003b670) bg_tb_trans_pane_g4

0x9a0c,	// (0x0003b668) bg_tb_trans_pane_g5

0x9a34,	// (0x0003b690) bg_tb_trans_pane_g6

0x9a2c,	// (0x0003b688) bg_tb_trans_pane_g7

0x9a1c,	// (0x0003b678) bg_tb_trans_pane_g8

0x9a24,	// (0x0003b680) bg_tb_trans_pane_g9

0x0008,

0xfc28,	// (0x00041884) bg_tb_trans_pane_g

0xcc13,	// (0x0003e86f) cell_toolbar_trans_pane_ParamLimits

0xcc13,	// (0x0003e86f) cell_toolbar_trans_pane

0xc018,	// (0x0003dc74) cell_toolbar_trans_pane_g1

0xbbea,	// (0x0003d846) list_form2_midp_pane_t1

0xbbf8,	// (0x0003d854) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x00041721) list_form2_midp_pane_t

0xbc06,	// (0x0003d862) scroll_pane_cp51_ParamLimits

0xbdc2,	// (0x0003da1e) form2_midp_wait_pane_g1

0xbdcb,	// (0x0003da27) form2_midp_wait_pane_g2

0xbdd4,	// (0x0003da30) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00041736) form2_midp_wait_pane_g

0x209e,	// (0x00033cfa) list_highlight_pane_cp21_ParamLimits

0xbe1c,	// (0x0003da78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe2b,	// (0x0003da87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x83bc,	// (0x0003a018) list_single_2graphic_im_pane_ParamLimits

0x83bc,	// (0x0003a018) list_single_2graphic_im_pane

0xcc39,	// (0x0003e895) list_single_2graphic_im_pane_g1_ParamLimits

0xcc39,	// (0x0003e895) list_single_2graphic_im_pane_g1

0xcc4a,	// (0x0003e8a6) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4a,	// (0x0003e8a6) list_single_2graphic_im_pane_g2

0xcc56,	// (0x0003e8b2) list_single_2graphic_im_pane_g3_ParamLimits

0xcc56,	// (0x0003e8b2) list_single_2graphic_im_pane_g3

0x0003,

0xfc3b,	// (0x00041897) list_single_2graphic_im_pane_g_ParamLimits

0xfc3b,	// (0x00041897) list_single_2graphic_im_pane_g

0xcc76,	// (0x0003e8d2) list_single_2graphic_im_pane_t1_ParamLimits

0xcc76,	// (0x0003e8d2) list_single_2graphic_im_pane_t1

0xc686,	// (0x0003e2e2) list_single_graphic_2heading_pane_fp_ParamLimits

0xc686,	// (0x0003e2e2) list_single_graphic_2heading_pane_fp

0x4c15,	// (0x00036871) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c15,	// (0x00036871) list_single_graphic_2heading_pane_fp_g1

0xc69c,	// (0x0003e2f8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc69c,	// (0x0003e2f8) list_single_graphic_2heading_pane_fp_g2

0x4629,	// (0x00036285) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4629,	// (0x00036285) list_single_graphic_2heading_pane_fp_g3

0x4bea,	// (0x00036846) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4bea,	// (0x00036846) list_single_graphic_2heading_pane_fp_g4

0xc6a8,	// (0x0003e304) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6a8,	// (0x0003e304) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x000417be) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x000417be) list_single_graphic_2heading_pane_fp_g

0x4da3,	// (0x000369ff) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4da3,	// (0x000369ff) list_single_graphic_2heading_pane_fp_t1

0x4c4d,	// (0x000368a9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4c4d,	// (0x000368a9) list_single_graphic_2heading_pane_fp_t2

0x4db9,	// (0x00036a15) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4db9,	// (0x00036a15) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc44,	// (0x000418a0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc44,	// (0x000418a0) list_single_graphic_2heading_pane_fp_t

0xc0a4,	// (0x0003dd00) fep_hwr_write_pane_g5_ParamLimits

0xc0a4,	// (0x0003dd00) fep_hwr_write_pane_g5

0xc0b0,	// (0x0003dd0c) fep_hwr_write_pane_g6_ParamLimits

0xc0b0,	// (0x0003dd0c) fep_hwr_write_pane_g6

0xc96e,	// (0x0003e5ca) eswt_shell_pane_ParamLimits

0x9a80,	// (0x0003b6dc) bg_popup_window_pane_cp18_ParamLimits

0x9e73,	// (0x0003bacf) heading_pane_cp70

0xca98,	// (0x0003e6f4) popup_eswt_tasktip_window_t1_ParamLimits

0x7cf2,	// (0x0003994e) aid_touch_tab_arrow_left

0x7d01,	// (0x0003995d) aid_touch_tab_arrow_right

0x60e6,	// (0x00037d42) title_pane_g3_ParamLimits

0x60e6,	// (0x00037d42) title_pane_g3

0x241c,	// (0x00034078) set_value_pane_g1

0x7bd3,	// (0x0003982f) popup_toolbar_trans_pane_ParamLimits

0xcbed,	// (0x0003e849) aid_size_cell_tb_trans_pane_ParamLimits

0x2454,	// (0x000340b0) bg_tb_trans_pane_ParamLimits

0xcbff,	// (0x0003e85b) grid_tb_trans_pane_ParamLimits

0x21c8,	// (0x00033e24) cont_note_pane_ParamLimits

0x21c8,	// (0x00033e24) cont_note_pane

0x2348,	// (0x00033fa4) cont_snote2_single_text_pane_ParamLimits

0x2348,	// (0x00033fa4) cont_snote2_single_text_pane

0x2348,	// (0x00033fa4) cont_snote2_single_graphic_pane_ParamLimits

0x2348,	// (0x00033fa4) cont_snote2_single_graphic_pane

0xa09a,	// (0x0003bcf6) cont_note_wait_pane_ParamLimits

0xa09a,	// (0x0003bcf6) cont_note_wait_pane

0xa09a,	// (0x0003bcf6) cont_note_image_pane_ParamLimits

0xa09a,	// (0x0003bcf6) cont_note_image_pane

0xcca7,	// (0x0003e903) popup_note2_window_g1_ParamLimits

0xcca7,	// (0x0003e903) popup_note2_window_g1

0xccd8,	// (0x0003e934) popup_note2_window_t1_ParamLimits

0xccd8,	// (0x0003e934) popup_note2_window_t1

0xcd1d,	// (0x0003e979) popup_note2_window_t2_ParamLimits

0xcd1d,	// (0x0003e979) popup_note2_window_t2

0xcd62,	// (0x0003e9be) popup_note2_window_t3_ParamLimits

0xcd62,	// (0x0003e9be) popup_note2_window_t3

0xcda7,	// (0x0003ea03) popup_note2_window_t4_ParamLimits

0xcda7,	// (0x0003ea03) popup_note2_window_t4

0x224c,	// (0x00033ea8) popup_note2_window_t5_ParamLimits

0x224c,	// (0x00033ea8) popup_note2_window_t5

0x0004,

0xfc50,	// (0x000418ac) popup_note2_window_t_ParamLimits

0xfc50,	// (0x000418ac) popup_note2_window_t

0xcdd6,	// (0x0003ea32) popup_note2_image_window_g1_ParamLimits

0xcdd6,	// (0x0003ea32) popup_note2_image_window_g1

0xcde2,	// (0x0003ea3e) popup_note2_image_window_g2_ParamLimits

0xcde2,	// (0x0003ea3e) popup_note2_image_window_g2

0x0001,

0xfc5b,	// (0x000418b7) popup_note2_image_window_g_ParamLimits

0xfc5b,	// (0x000418b7) popup_note2_image_window_g

0xcdf4,	// (0x0003ea50) popup_note2_image_window_t1_ParamLimits

0xcdf4,	// (0x0003ea50) popup_note2_image_window_t1

0xce0c,	// (0x0003ea68) popup_note2_image_window_t2_ParamLimits

0xce0c,	// (0x0003ea68) popup_note2_image_window_t2

0xce24,	// (0x0003ea80) popup_note2_image_window_t3_ParamLimits

0xce24,	// (0x0003ea80) popup_note2_image_window_t3

0x0002,

0xfc60,	// (0x000418bc) popup_note2_image_window_t_ParamLimits

0xfc60,	// (0x000418bc) popup_note2_image_window_t

0xa0a8,	// (0x0003bd04) popup_note2_wait_window_g1_ParamLimits

0xa0a8,	// (0x0003bd04) popup_note2_wait_window_g1

0xa0b4,	// (0x0003bd10) popup_note2_wait_window_g2_ParamLimits

0xa0b4,	// (0x0003bd10) popup_note2_wait_window_g2

0xa0c0,	// (0x0003bd1c) popup_note2_wait_window_g3_ParamLimits

0xa0c0,	// (0x0003bd1c) popup_note2_wait_window_g3

0x0002,

0xf808,	// (0x00041464) popup_note2_wait_window_g_ParamLimits

0xf808,	// (0x00041464) popup_note2_wait_window_g

0xce40,	// (0x0003ea9c) popup_note2_wait_window_t1_ParamLimits

0xce40,	// (0x0003ea9c) popup_note2_wait_window_t1

0xce5e,	// (0x0003eaba) popup_note2_wait_window_t2_ParamLimits

0xce5e,	// (0x0003eaba) popup_note2_wait_window_t2

0xce7c,	// (0x0003ead8) popup_note2_wait_window_t3_ParamLimits

0xce7c,	// (0x0003ead8) popup_note2_wait_window_t3

0xce8e,	// (0x0003eaea) popup_note2_wait_window_t4_ParamLimits

0xce8e,	// (0x0003eaea) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x000418c3) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x000418c3) popup_note2_wait_window_t

0xcea0,	// (0x0003eafc) wait_bar2_pane_ParamLimits

0xcea0,	// (0x0003eafc) wait_bar2_pane

0xceb8,	// (0x0003eb14) popup_snote2_single_text_window_g1_ParamLimits

0xceb8,	// (0x0003eb14) popup_snote2_single_text_window_g1

0xcee0,	// (0x0003eb3c) popup_snote2_single_text_window_t1_ParamLimits

0xcee0,	// (0x0003eb3c) popup_snote2_single_text_window_t1

0xcf2c,	// (0x0003eb88) popup_snote2_single_text_window_t2_ParamLimits

0xcf2c,	// (0x0003eb88) popup_snote2_single_text_window_t2

0xcf78,	// (0x0003ebd4) popup_snote2_single_text_window_t3_ParamLimits

0xcf78,	// (0x0003ebd4) popup_snote2_single_text_window_t3

0xcfb9,	// (0x0003ec15) popup_snote2_single_text_window_t4_ParamLimits

0xcfb9,	// (0x0003ec15) popup_snote2_single_text_window_t4

0xcfef,	// (0x0003ec4b) popup_snote2_single_text_window_t5_ParamLimits

0xcfef,	// (0x0003ec4b) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x000418cc) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x000418cc) popup_snote2_single_text_window_t

0xd01a,	// (0x0003ec76) popup_snote2_single_graphic_window_g1_ParamLimits

0xd01a,	// (0x0003ec76) popup_snote2_single_graphic_window_g1

0xd042,	// (0x0003ec9e) popup_snote2_single_graphic_window_g2_ParamLimits

0xd042,	// (0x0003ec9e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x000418d7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x000418d7) popup_snote2_single_graphic_window_g

0xd06a,	// (0x0003ecc6) popup_snote2_single_graphic_window_t1_ParamLimits

0xd06a,	// (0x0003ecc6) popup_snote2_single_graphic_window_t1

0xd0b6,	// (0x0003ed12) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0b6,	// (0x0003ed12) popup_snote2_single_graphic_window_t2

0xcf78,	// (0x0003ebd4) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf78,	// (0x0003ebd4) popup_snote2_single_graphic_window_t3

0xcfb9,	// (0x0003ec15) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfb9,	// (0x0003ec15) popup_snote2_single_graphic_window_t4

0xcfef,	// (0x0003ec4b) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfef,	// (0x0003ec4b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x000418dc) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x000418dc) popup_snote2_single_graphic_window_t

0xbac3,	// (0x0003d71f) clock_nsta_pane_cp2_t1

0xbac3,	// (0x0003d71f) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x000416f7) clock_nsta_pane_cp2_t

0x69c7,	// (0x00038623) form_field_data_wide_pane_g1_ParamLimits

0x2462,	// (0x000340be) form_field_data_wide_pane_g2_ParamLimits

0x2462,	// (0x000340be) form_field_data_wide_pane_g2

0x246e,	// (0x000340ca) form_field_data_wide_pane_g3_ParamLimits

0x246e,	// (0x000340ca) form_field_data_wide_pane_g3

0x0002,

0xf640,	// (0x0004129c) form_field_data_wide_pane_g_ParamLimits

0xf640,	// (0x0004129c) form_field_data_wide_pane_g

0xb99f,	// (0x0003d5fb) grid_touch_3_pane_ParamLimits

0xb99f,	// (0x0003d5fb) grid_touch_3_pane

0xd102,	// (0x0003ed5e) cell_touch_3_pane_ParamLimits

0xd102,	// (0x0003ed5e) cell_touch_3_pane

0xc018,	// (0x0003dc74) cell_touch_3_pane_g1

0xc018,	// (0x0003dc74) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x0004177c) cell_touch_3_pane_g

0x227e,	// (0x00033eda) cont_query_data_pane

0x2286,	// (0x00033ee2) cont_query_data_pane_cp1

0xd130,	// (0x0003ed8c) button_value_adjust_pane_cp7

0xd138,	// (0x0003ed94) query_popup_pane_cp3

0x2907,	// (0x00034563) bg_popup_sub_pane_cp22_ParamLimits

0x702d,	// (0x00038c89) navi_navi_volume_pane_cp2

0x7045,	// (0x00038ca1) popup_side_volume_key_window_g2

0x7051,	// (0x00038cad) popup_side_volume_key_window_g3

0x0002,

0xf6d6,	// (0x00041332) popup_side_volume_key_window_g

0x706b,	// (0x00038cc7) popup_side_volume_key_window_t2

0x0001,

0xf6dd,	// (0x00041339) popup_side_volume_key_window_t

0x72e5,	// (0x00038f41) popup_side_volume_key_window_ParamLimits

0x67a7,	// (0x00038403) list_double_graphic_pane_g4_ParamLimits

0x67a7,	// (0x00038403) list_double_graphic_pane_g4

0x8401,	// (0x0003a05d) list_single_2heading_msg_pane_ParamLimits

0x8401,	// (0x0003a05d) list_single_2heading_msg_pane

0x89c9,	// (0x0003a625) list_single_2heading_msg_pane_g1_ParamLimits

0x89c9,	// (0x0003a625) list_single_2heading_msg_pane_g1

0x4570,	// (0x000361cc) list_single_2heading_msg_pane_g2_ParamLimits

0x4570,	// (0x000361cc) list_single_2heading_msg_pane_g2

0x496b,	// (0x000365c7) list_single_2heading_msg_pane_g3_ParamLimits

0x496b,	// (0x000365c7) list_single_2heading_msg_pane_g3

0x4dd9,	// (0x00036a35) list_single_2heading_msg_pane_g4_ParamLimits

0x4dd9,	// (0x00036a35) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x000418e7) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x000418e7) list_single_2heading_msg_pane_g

0x89d5,	// (0x0003a631) list_single_2heading_msg_pane_t1_ParamLimits

0x89d5,	// (0x0003a631) list_single_2heading_msg_pane_t1

0x89fd,	// (0x0003a659) list_single_2heading_msg_pane_t2_ParamLimits

0x89fd,	// (0x0003a659) list_single_2heading_msg_pane_t2

0x8a31,	// (0x0003a68d) list_single_2heading_msg_pane_t3_ParamLimits

0x8a31,	// (0x0003a68d) list_single_2heading_msg_pane_t3

0x4df1,	// (0x00036a4d) list_single_2heading_msg_pane_t4_ParamLimits

0x4df1,	// (0x00036a4d) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x000418f0) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x000418f0) list_single_2heading_msg_pane_t

0x204c,	// (0x00033ca8) title_pane_g4_ParamLimits

0x204c,	// (0x00033ca8) title_pane_g4

0x6c70,	// (0x000388cc) title_pane_stacon_g3_ParamLimits

0x6c70,	// (0x000388cc) title_pane_stacon_g3

0xcc6a,	// (0x0003e8c6) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6a,	// (0x0003e8c6) list_single_2graphic_im_pane_g4

0xaae1,	// (0x0003c73d) popup_side_volume_key_window_cp

0xb2f5,	// (0x0003cf51) main_idle_act2_pane_t1

0x7fe6,	// (0x00039c42) toolbar_button_pane_g10

0x66a1,	// (0x000382fd) popup_toolbar_window_cp1

0xbab4,	// (0x0003d710) clock_nsta_pane_cp_t1

0xbab4,	// (0x0003d710) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x000416f2) clock_nsta_pane_cp_t

0x702d,	// (0x00038c89) navi_navi_volume_pane_cp2_ParamLimits

0x7039,	// (0x00038c95) popup_side_volume_key_window_g1_ParamLimits

0x7045,	// (0x00038ca1) popup_side_volume_key_window_g2_ParamLimits

0x7051,	// (0x00038cad) popup_side_volume_key_window_g3_ParamLimits

0xf6d6,	// (0x00041332) popup_side_volume_key_window_g_ParamLimits

0x8594,	// (0x0003a1f0) fep_hwr_aid_pane

0x863b,	// (0x0003a297) bg_fep_hwr_top_pane_g4_ParamLimits

0xc074,	// (0x0003dcd0) fep_hwr_top_pane_g1_ParamLimits

0xc086,	// (0x0003dce2) fep_hwr_top_pane_g2_ParamLimits

0x865b,	// (0x0003a2b7) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00041747) fep_hwr_top_pane_g_ParamLimits

0x8670,	// (0x0003a2cc) fep_hwr_top_text_pane_ParamLimits

0xa8a4,	// (0x0003c500) aid_touch_tab_arrow_arrow_2

0xa8ad,	// (0x0003c509) aid_touch_tab_arrow_left_2

0x85a8,	// (0x0003a204) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x85df,	// (0x0003a23b) fep_hwr_prediction_pane

0xc1df,	// (0x0003de3b) fep_vkb_prediction_pane

0xc2dc,	// (0x0003df38) fep_vkb_side_pane_g3_ParamLimits

0xc2dc,	// (0x0003df38) fep_vkb_side_pane_g3

0x87eb,	// (0x0003a447) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8857,	// (0x0003a4b3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8864,	// (0x0003a4c0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x000417f6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a6a,	// (0x0003a6c6) fep_hwr_prediction_pane_g1

0x8a74,	// (0x0003a6d0) fep_hwr_prediction_pane_g2

0x8a7c,	// (0x0003a6d8) fep_hwr_prediction_pane_g3

0x8a84,	// (0x0003a6e0) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x000418f9) fep_hwr_prediction_pane_g

0xd15d,	// (0x0003edb9) fep_vkb_prediction_pane_g1

0xd167,	// (0x0003edc3) fep_vkb_prediction_pane_g2

0xd16f,	// (0x0003edcb) fep_vkb_prediction_pane_g3

0xd177,	// (0x0003edd3) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x00041902) fep_vkb_prediction_pane_g

0x8319,	// (0x00039f75) slider_set_pane_g3

0x832d,	// (0x00039f89) slider_set_pane_g4

0x8345,	// (0x00039fa1) slider_set_pane_g5

0x8319,	// (0x00039f75) slider_set_pane_g6

0x835b,	// (0x00039fb7) slider_set_pane_g7

0xaf20,	// (0x0003cb7c) slider_form_pane_g3

0xaf29,	// (0x0003cb85) slider_form_pane_g4

0xaf31,	// (0x0003cb8d) slider_form_pane_g5

0xaf20,	// (0x0003cb7c) slider_form_pane_g6

0xaf39,	// (0x0003cb95) slider_form_pane_g7

0xb5a1,	// (0x0003d1fd) slider_set_pane_vc_g3

0xb5aa,	// (0x0003d206) slider_set_pane_vc_g4

0xb5b3,	// (0x0003d20f) slider_set_pane_vc_g5

0xb5a1,	// (0x0003d1fd) slider_set_pane_vc_g6

0xb5bc,	// (0x0003d218) slider_set_pane_vc_g7

0xb772,	// (0x0003d3ce) slider_form_pane_vc_g1

0xb77b,	// (0x0003d3d7) slider_form_pane_vc_g2

0xb784,	// (0x0003d3e0) slider_form_pane_vc_g3

0xb772,	// (0x0003d3ce) slider_form_pane_vc_g4

0xb78d,	// (0x0003d3e9) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x000416c4) slider_form_pane_vc_g

0x5e7d,	// (0x00037ad9) main_idle_act3_pane

0xd17f,	// (0x0003eddb) ai3_links_pane

0xd188,	// (0x0003ede4) popup_ai3_data_window_ParamLimits

0xd188,	// (0x0003ede4) popup_ai3_data_window

0x202e,	// (0x00033c8a) grid_ai3_links_pane

0xd1a0,	// (0x0003edfc) cell_ai3_links_pane_ParamLimits

0xd1a0,	// (0x0003edfc) cell_ai3_links_pane

0xd1b8,	// (0x0003ee14) bg_popup_sub_pane_cp11

0xd1c5,	// (0x0003ee21) cell_ai3_links_pane_g1

0x202e,	// (0x00033c8a) bg_popup_sub_pane_cp12

0xd1ea,	// (0x0003ee46) heading_ai3_data_pane

0xd1f2,	// (0x0003ee4e) list_ai3_gene_pane

0xd1fe,	// (0x0003ee5a) popup_ai3_data_window_g1

0xd206,	// (0x0003ee62) heading_ai3_data_pane_g1

0xd20e,	// (0x0003ee6a) heading_ai3_data_pane_t1

0xd21c,	// (0x0003ee78) list_double_ai3_gene_pane_ParamLimits

0xd21c,	// (0x0003ee78) list_double_ai3_gene_pane

0xd229,	// (0x0003ee85) list_single_ai3_gene_pane_ParamLimits

0xd229,	// (0x0003ee85) list_single_ai3_gene_pane

0xbfdd,	// (0x0003dc39) list_highlight_pane_cp7_ParamLimits

0xbfdd,	// (0x0003dc39) list_highlight_pane_cp7

0xd236,	// (0x0003ee92) list_single_a13_gene_pane_t1_ParamLimits

0xd236,	// (0x0003ee92) list_single_a13_gene_pane_t1

0xd24d,	// (0x0003eea9) list_single_ai3_gene_pane_g1

0xd256,	// (0x0003eeb2) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0004190b) list_single_ai3_gene_pane_g

0xd25e,	// (0x0003eeba) list_double_ai3_gene_pane_g1_ParamLimits

0xd25e,	// (0x0003eeba) list_double_ai3_gene_pane_g1

0xd26a,	// (0x0003eec6) list_double_ai3_gene_pane_t1_ParamLimits

0xd26a,	// (0x0003eec6) list_double_ai3_gene_pane_t1

0xd286,	// (0x0003eee2) list_double_ai3_gene_pane_t2_ParamLimits

0xd286,	// (0x0003eee2) list_double_ai3_gene_pane_t2

0xd29b,	// (0x0003eef7) list_double_ai3_gene_pane_t3_ParamLimits

0xd29b,	// (0x0003eef7) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x00041910) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x00041910) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4dcf,	// (0x00036a2b) aid_size_min_col_2

0xd149,	// (0x0003eda5) aid_size_min_msg_ParamLimits

0xd149,	// (0x0003eda5) aid_size_min_msg

0xc3dc,	// (0x0003e038) fep_vkb_top_text_pane_g2_ParamLimits

0xc3dc,	// (0x0003e038) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00041777) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00041777) fep_vkb_top_text_pane_g

0x5e7d,	// (0x00037ad9) main_hc_apps_shell_pane

0xd2b8,	// (0x0003ef14) grid_hc_apps_pane_ParamLimits

0xd2b8,	// (0x0003ef14) grid_hc_apps_pane

0xd2ca,	// (0x0003ef26) list_hc_apps_pane

0xd2d2,	// (0x0003ef2e) scroll_pane_cp37_ParamLimits

0xd2d2,	// (0x0003ef2e) scroll_pane_cp37

0xd2de,	// (0x0003ef3a) cell_hc_apps_pane_ParamLimits

0xd2de,	// (0x0003ef3a) cell_hc_apps_pane

0xd38c,	// (0x0003efe8) cell_hc_apps_pane_g1_ParamLimits

0xd38c,	// (0x0003efe8) cell_hc_apps_pane_g1

0xd3bc,	// (0x0003f018) cell_hc_apps_pane_g2_ParamLimits

0xd3bc,	// (0x0003f018) cell_hc_apps_pane_g2

0xd3d8,	// (0x0003f034) cell_hc_apps_pane_g3_ParamLimits

0xd3d8,	// (0x0003f034) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x00041917) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x00041917) cell_hc_apps_pane_g

0xd3fa,	// (0x0003f056) cell_hc_apps_pane_t1_ParamLimits

0xd3fa,	// (0x0003f056) cell_hc_apps_pane_t1

0x21c8,	// (0x00033e24) grid_highlight_pane_cp10_ParamLimits

0x21c8,	// (0x00033e24) grid_highlight_pane_cp10

0xd43a,	// (0x0003f096) list_single_hc_apps_pane_ParamLimits

0xd43a,	// (0x0003f096) list_single_hc_apps_pane

0xd49d,	// (0x0003f0f9) list_single_hc_apps_pane_g1

0x8a8c,	// (0x0003a6e8) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0004191e) list_single_hc_apps_pane_g

0x8aa5,	// (0x0003a701) list_single_hc_apps_pane_g2_copy1

0x8ac1,	// (0x0003a71d) list_single_hc_apps_pane_t1

0x209e,	// (0x00033cfa) bg_set_opt_pane_cp_ParamLimits

0x6196,	// (0x00037df2) setting_slider_pane_t1_ParamLimits

0x61af,	// (0x00037e0b) setting_slider_pane_t2_ParamLimits

0x61c9,	// (0x00037e25) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00041193) setting_slider_pane_t_ParamLimits

0x61e1,	// (0x00037e3d) slider_set_pane_ParamLimits

0x75a5,	// (0x00039201) control_pane_g5_ParamLimits

0x75a5,	// (0x00039201) control_pane_g5

0xad73,	// (0x0003c9cf) slider_set_pane_g1_ParamLimits

0x830d,	// (0x00039f69) slider_set_pane_g2_ParamLimits

0x8319,	// (0x00039f75) slider_set_pane_g3_ParamLimits

0x832d,	// (0x00039f89) slider_set_pane_g4_ParamLimits

0x8345,	// (0x00039fa1) slider_set_pane_g5_ParamLimits

0x8319,	// (0x00039f75) slider_set_pane_g6_ParamLimits

0x835b,	// (0x00039fb7) slider_set_pane_g7_ParamLimits

0xf924,	// (0x00041580) slider_set_pane_g_ParamLimits

0x2bb5,	// (0x00034811) navi_icon_text_pane_ParamLimits

0x7cb3,	// (0x0003990f) aid_fill_nsta_2_ParamLimits

0x7cf2,	// (0x0003994e) aid_touch_tab_arrow_left_ParamLimits

0x7d01,	// (0x0003995d) aid_touch_tab_arrow_right_ParamLimits

0x7d6e,	// (0x000399ca) clock_nsta_pane_ParamLimits

0xa886,	// (0x0003c4e2) navi_icon_pane_g1_ParamLimits

0xa892,	// (0x0003c4ee) navi_text_pane_t1_ParamLimits

0xbbc4,	// (0x0003d820) navi_icon_text_pane_g1_ParamLimits

0xbbd0,	// (0x0003d82c) navi_icon_text_pane_t1_ParamLimits

0xd49d,	// (0x0003f0f9) list_single_hc_apps_pane_g1_ParamLimits

0x8a8c,	// (0x0003a6e8) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0004191e) list_single_hc_apps_pane_g_ParamLimits

0x8aa5,	// (0x0003a701) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8ac1,	// (0x0003a71d) list_single_hc_apps_pane_t1_ParamLimits

0x5fda,	// (0x00037c36) popup_toolbar2_fixed_window_ParamLimits

0x5fda,	// (0x00037c36) popup_toolbar2_fixed_window

0x7bc9,	// (0x00039825) popup_toolbar2_float_window

0x202e,	// (0x00033c8a) bg_popup_sub_pane_cp27

0xd4b6,	// (0x0003f112) grid_toolbar2_float_pane

0x202e,	// (0x00033c8a) bg_popup_sub_pane_cp26

0xd4b6,	// (0x0003f112) grid_toolbar2_fixed_pane

0xd4be,	// (0x0003f11a) cell_toolbar2_fixed_pane_ParamLimits

0xd4be,	// (0x0003f11a) cell_toolbar2_fixed_pane

0xd4ce,	// (0x0003f12a) cell_toolbar2_fixed_pane_g1

0x7a9b,	// (0x000396f7) toolbar2_fixed_button_pane

0x99f4,	// (0x0003b650) toolbar2_fixed_button_pane_g1

0x9a04,	// (0x0003b660) toolbar2_fixed_button_pane_g2

0x99fc,	// (0x0003b658) toolbar2_fixed_button_pane_g3

0x9a14,	// (0x0003b670) toolbar2_fixed_button_pane_g4

0x9a0c,	// (0x0003b668) toolbar2_fixed_button_pane_g5

0x9a1c,	// (0x0003b678) toolbar2_fixed_button_pane_g6

0x9a24,	// (0x0003b680) toolbar2_fixed_button_pane_g7

0x9a34,	// (0x0003b690) toolbar2_fixed_button_pane_g8

0x9a2c,	// (0x0003b688) toolbar2_fixed_button_pane_g9

0x0008,

0xf826,	// (0x00041482) toolbar2_fixed_button_pane_g

0xd4d7,	// (0x0003f133) cell_toolbar2_float_pane_ParamLimits

0xd4d7,	// (0x0003f133) cell_toolbar2_float_pane

0xd4e8,	// (0x0003f144) cell_toolbar2_float_pane_g1

0x7a9b,	// (0x000396f7) toolbar2_fixed_button_pane_cp

0xc146,	// (0x0003dda2) fep_vkb_accented_list_pane_ParamLimits

0xc146,	// (0x0003dda2) fep_vkb_accented_list_pane

0x87cb,	// (0x0003a427) bg_popup_fep_shadow_pane_g9

0x2d14,	// (0x00034970) bg_popup_fep_shadow_pane_cp3

0x256d,	// (0x000341c9) list_accented_list_pane

0xd4f1,	// (0x0003f14d) list_single_accented_list_pane_ParamLimits

0xd4f1,	// (0x0003f14d) list_single_accented_list_pane

0x2d14,	// (0x00034970) list_highlight_pane_cp10

0xd502,	// (0x0003f15e) list_single_accented_list_pane_t1

0x7b19,	// (0x00039775) popup_slider_window_ParamLimits

0x7b19,	// (0x00039775) popup_slider_window

0xd140,	// (0x0003ed9c) aid_indentation_list_msg

0xd5c0,	// (0x0003f21c) bg_popup_window_pane_cp19

0xd628,	// (0x0003f284) popup_slider_window_g1

0xd644,	// (0x0003f2a0) popup_slider_window_g2

0xd660,	// (0x0003f2bc) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x00041923) popup_slider_window_g

0xd6c6,	// (0x0003f322) popup_slider_window_t1

0xd73a,	// (0x0003f396) small_volume_slider_vertical_pane

0xc018,	// (0x0003dc74) small_volume_slider_vertical_pane_g1

0xc018,	// (0x0003dc74) small_volume_slider_vertical_pane_g2

0xd756,	// (0x0003f3b2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x00041935) small_volume_slider_vertical_pane_g

0x5d9a,	// (0x000379f6) area_side_right_pane_ParamLimits

0x5d9a,	// (0x000379f6) area_side_right_pane

0x8aef,	// (0x0003a74b) aid_size_side_button_ParamLimits

0x8aef,	// (0x0003a74b) aid_size_side_button

0x8b03,	// (0x0003a75f) grid_sctrl_middle_pane_ParamLimits

0x8b03,	// (0x0003a75f) grid_sctrl_middle_pane

0x8b22,	// (0x0003a77e) sctrl_sk_bottom_pane

0x8b33,	// (0x0003a78f) sctrl_sk_top_pane

0x8b45,	// (0x0003a7a1) aid_touch_sctrl_top

0x8b52,	// (0x0003a7ae) bg_sctrl_sk_pane_ParamLimits

0x8b52,	// (0x0003a7ae) bg_sctrl_sk_pane

0x8b60,	// (0x0003a7bc) sctrl_sk_top_pane_g1

0x8b6d,	// (0x0003a7c9) sctrl_sk_top_pane_t1

0x8b45,	// (0x0003a7a1) aid_touch_sctrl_bottom

0x8b52,	// (0x0003a7ae) bg_sctrl_sk_pane_cp_ParamLimits

0x8b52,	// (0x0003a7ae) bg_sctrl_sk_pane_cp

0x8b88,	// (0x0003a7e4) sctrl_sk_bottom_pane_g1

0x8b6d,	// (0x0003a7c9) sctrl_sk_bottom_pane_t1

0x8b91,	// (0x0003a7ed) cell_sctrl_middle_pane_ParamLimits

0x8b91,	// (0x0003a7ed) cell_sctrl_middle_pane

0x8bac,	// (0x0003a808) aid_touch_sctrl_middle_ParamLimits

0x8bac,	// (0x0003a808) aid_touch_sctrl_middle

0x8bbe,	// (0x0003a81a) bg_sctrl_middle_pane_ParamLimits

0x8bbe,	// (0x0003a81a) bg_sctrl_middle_pane

0x87eb,	// (0x0003a447) cell_sctrl_middle_pane_g1_ParamLimits

0x87eb,	// (0x0003a447) cell_sctrl_middle_pane_g1

0x8bcc,	// (0x0003a828) cell_sctrl_middle_pane_g2_ParamLimits

0x8bcc,	// (0x0003a828) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x00041941) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x00041941) cell_sctrl_middle_pane_g

0x99f4,	// (0x0003b650) bg_sctrl_middle_pane_g1

0x99fc,	// (0x0003b658) bg_sctrl_middle_pane_g2

0x9a04,	// (0x0003b660) bg_sctrl_middle_pane_g3

0x9a0c,	// (0x0003b668) bg_sctrl_middle_pane_g4

0x9a14,	// (0x0003b670) bg_sctrl_middle_pane_g5

0x9a1c,	// (0x0003b678) bg_sctrl_middle_pane_g6

0x9a24,	// (0x0003b680) bg_sctrl_middle_pane_g7

0x9a2c,	// (0x0003b688) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x00041946) bg_sctrl_middle_pane_g

0x9a34,	// (0x0003b690) bg_sctrl_middle_pane_g8_copy1

0x99f4,	// (0x0003b650) bg_sctrl_sk_pane_g1

0x9a04,	// (0x0003b660) bg_sctrl_sk_pane_g2

0x99fc,	// (0x0003b658) bg_sctrl_sk_pane_g3

0x0008,

0xf826,	// (0x00041482) bg_sctrl_sk_pane_g

0x2396,	// (0x00033ff2) aid_size_touch_scroll_bar

0x9a14,	// (0x0003b670) bg_sctrl_sk_pane_g4

0x9a0c,	// (0x0003b668) bg_sctrl_sk_pane_g5

0x9a1c,	// (0x0003b678) bg_sctrl_sk_pane_g6

0x9a24,	// (0x0003b680) bg_sctrl_sk_pane_g7

0x9a34,	// (0x0003b690) bg_sctrl_sk_pane_g8

0x9a2c,	// (0x0003b688) bg_sctrl_sk_pane_g9

0x7782,	// (0x000393de) popup_fep_china_hwr2_fs_candidate_window

0x778c,	// (0x000393e8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x778c,	// (0x000393e8) popup_fep_china_hwr2_fs_control_window

0x87eb,	// (0x0003a447) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0004193c) sctrl_sk_top_pane_g

0xd75f,	// (0x0003f3bb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd75f,	// (0x0003f3bb) aid_fep_china_hwr2_fs_cell

0xd771,	// (0x0003f3cd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd771,	// (0x0003f3cd) bg_popup_fep_shadow_pane_cp4

0xd788,	// (0x0003f3e4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd788,	// (0x0003f3e4) bg_popup_fep_shadow_pane_cp5

0xd79a,	// (0x0003f3f6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79a,	// (0x0003f3f6) popup_fep_china_hwr2_fs_control_bar_grid

0xd7aa,	// (0x0003f406) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b2,	// (0x0003f40e) aid_fep_china_hwr2_fs_candi_cell

0x202e,	// (0x00033c8a) bg_popup_fep_shadow_pane_cp6

0xd7bc,	// (0x0003f418) popup_fep_china_hwr2_fs_candidate_grid

0xd7c6,	// (0x0003f422) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c6,	// (0x0003f422) cell_fep_china_hwr2_fs_funtion_grid

0xc018,	// (0x0003dc74) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7de,	// (0x0003f43a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7de,	// (0x0003f43a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7ec,	// (0x0003f448) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7ec,	// (0x0003f448) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x00041957) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x00041957) cell_fep_china_hwr2_fs_funtion_grid_g

0xd802,	// (0x0003f45e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd802,	// (0x0003f45e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd817,	// (0x0003f473) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd817,	// (0x0003f473) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd00,	// (0x0004195c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd00,	// (0x0004195c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd833,	// (0x0003f48f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd83b,	// (0x0003f497) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd843,	// (0x0003f49f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd05,	// (0x00041961) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd84b,	// (0x0003f4a7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd84b,	// (0x0003f4a7) cell_fep_china_hwr2_fs_candidate_grid

0xd864,	// (0x0003f4c0) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd86c,	// (0x0003f4c8) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc018,	// (0x0003dc74) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc018,	// (0x0003dc74) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x0004177c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd874,	// (0x0003f4d0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7d81,	// (0x000399dd) clock_nsta_pane_cp_24_ParamLimits

0x7d81,	// (0x000399dd) clock_nsta_pane_cp_24

0x7dff,	// (0x00039a5b) indicator_nsta_pane_cp_24_ParamLimits

0x7dff,	// (0x00039a5b) indicator_nsta_pane_cp_24

0xa702,	// (0x0003c35e) heading_pane_g1

0x0001,

0xf88b,	// (0x000414e7) heading_pane_g

0xb13e,	// (0x0003cd9a) grid_sct_catagory_button_pane

0xb16e,	// (0x0003cdca) scroll_pane_cp5_ParamLimits

0xbc12,	// (0x0003d86e) button_value_adjust_pane_cp5_ParamLimits

0xbc12,	// (0x0003d86e) button_value_adjust_pane_cp5

0xbcf1,	// (0x0003d94d) form2_midp_time_pane_ParamLimits

0xd882,	// (0x0003f4de) cell_sct_catagory_button_pane_ParamLimits

0xd882,	// (0x0003f4de) cell_sct_catagory_button_pane

0xbfdd,	// (0x0003dc39) bg_button_pane_cp01_ParamLimits

0xbfdd,	// (0x0003dc39) bg_button_pane_cp01

0xc018,	// (0x0003dc74) cell_sct_catagory_button_pane_g1

0x7b58,	// (0x000397b4) popup_tb_extension_window

0xd894,	// (0x0003f4f0) aid_size_cell_ext_ParamLimits

0xd894,	// (0x0003f4f0) aid_size_cell_ext

0x21c8,	// (0x00033e24) bg_tb_trans_pane_cp1_ParamLimits

0x21c8,	// (0x00033e24) bg_tb_trans_pane_cp1

0xd8b4,	// (0x0003f510) grid_tb_ext_pane_ParamLimits

0xd8b4,	// (0x0003f510) grid_tb_ext_pane

0xd8e4,	// (0x0003f540) cell_tb_ext_pane_ParamLimits

0xd8e4,	// (0x0003f540) cell_tb_ext_pane

0xd8fb,	// (0x0003f557) cell_tb_ext_pane_g1_ParamLimits

0xd8fb,	// (0x0003f557) cell_tb_ext_pane_g1

0xd918,	// (0x0003f574) cell_tb_ext_pane_t1

0x21c8,	// (0x00033e24) list_highlight_pane_cp11_ParamLimits

0x21c8,	// (0x00033e24) list_highlight_pane_cp11

0x5ff9,	// (0x00037c55) popup_uni_indicator_window_ParamLimits

0x5ff9,	// (0x00037c55) popup_uni_indicator_window

0x2454,	// (0x000340b0) bg_popup_sub_pane_cp14

0xd934,	// (0x0003f590) list_uniindi_pane

0xd940,	// (0x0003f59c) uniindi_top_pane

0x21c8,	// (0x00033e24) bg_uniindi_top_pane

0xd95f,	// (0x0003f5bb) uniindi_top_pane_g1

0xd975,	// (0x0003f5d1) uniindi_top_pane_g2

0x0003,

0xfd0c,	// (0x00041968) uniindi_top_pane_g

0xd99f,	// (0x0003f5fb) uniindi_top_pane_t1

0xd9c9,	// (0x0003f625) list_single_uniindi_pane_ParamLimits

0xd9c9,	// (0x0003f625) list_single_uniindi_pane

0xc018,	// (0x0003dc74) bg_uniindi_top_pane_g1

0xd9dc,	// (0x0003f638) list_single_uniindi_pane_g1

0xd9ef,	// (0x0003f64b) list_single_uniindi_pane_t1

0x5e7d,	// (0x00037ad9) control_bg_pane

0xda14,	// (0x0003f670) bg_sctrl_sk_pane_cp1

0xda1d,	// (0x0003f679) bg_sctrl_sk_pane_cp2

0xda26,	// (0x0003f682) control_bg_pane_g1

0xda2f,	// (0x0003f68b) control_bg_pane_g2

0x0001,

0xfd15,	// (0x00041971) control_bg_pane_g

0xba58,	// (0x0003d6b4) cell_indicator_nsta_pane_g1_ParamLimits

0xba66,	// (0x0003d6c2) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x000416e0) cell_indicator_nsta_pane_g_ParamLimits

0x4bd7,	// (0x00036833) form2_midp_time_pane_t1_ParamLimits

0x76ec,	// (0x00039348) main_idle_act4_pane_ParamLimits

0x76ec,	// (0x00039348) main_idle_act4_pane

0x7b58,	// (0x000397b4) popup_tb_extension_window_ParamLimits

0xd8d4,	// (0x0003f530) tb_ext_find_pane_ParamLimits

0xd8d4,	// (0x0003f530) tb_ext_find_pane

0xda38,	// (0x0003f694) ai_gene_pane_1_cp1

0x2d95,	// (0x000349f1) ai_gene_pane_2_cp1

0xda40,	// (0x0003f69c) list_single_idle_plugin_calendar_pane

0xda49,	// (0x0003f6a5) list_single_idle_plugin_notification_pane

0xda52,	// (0x0003f6ae) list_single_idle_plugin_player_pane

0xda5b,	// (0x0003f6b7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5b,	// (0x0003f6b7) list_single_idle_plugin_shortcut_pane

0xda7d,	// (0x0003f6d9) main_idle_act4_pane_t1

0xda8f,	// (0x0003f6eb) main_idle_act4_pane_t2

0x0001,

0xfd1a,	// (0x00041976) main_idle_act4_pane_t

0xdaa1,	// (0x0003f6fd) middle_sk_idle_act4_pane_ParamLimits

0xdaa1,	// (0x0003f6fd) middle_sk_idle_act4_pane

0xdab7,	// (0x0003f713) popup_clock_digital_analogue_window_cp2

0xdad1,	// (0x0003f72d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad1,	// (0x0003f72d) shortcut_wheel_idle_act4_pane

0xc018,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g1

0xc018,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g2

0xc018,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g3

0xc018,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g4

0xc018,	// (0x0003dc74) shortcut_wheel_idle_act4_pane_g5

0xdae5,	// (0x0003f741) shortcut_wheel_idle_act4_pane_g6

0xdaed,	// (0x0003f749) shortcut_wheel_idle_act4_pane_g7

0xdaf5,	// (0x0003f751) shortcut_wheel_idle_act4_pane_g8

0xdafd,	// (0x0003f759) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1f,	// (0x0004197b) shortcut_wheel_idle_act4_pane_g

0xc288,	// (0x0003dee4) middle_sk_idle_act4_pane_g1_ParamLimits

0xc288,	// (0x0003dee4) middle_sk_idle_act4_pane_g1

0xdb61,	// (0x0003f7bd) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb61,	// (0x0003f7bd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd42,	// (0x0004199e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd42,	// (0x0004199e) middle_sk_idle_act4_pane_g

0xdb6d,	// (0x0003f7c9) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb6d,	// (0x0003f7c9) middle_sk_idle_act4_pane_t1

0xdb8a,	// (0x0003f7e6) grid_ai_shortcut_pane_ParamLimits

0xdb8a,	// (0x0003f7e6) grid_ai_shortcut_pane

0xdba3,	// (0x0003f7ff) list_highlight_pane_cp16_ParamLimits

0xdba3,	// (0x0003f7ff) list_highlight_pane_cp16

0xdbb0,	// (0x0003f80c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb0,	// (0x0003f80c) list_single_idle_plugin_shortcut_pane_g1

0xdbbc,	// (0x0003f818) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbbc,	// (0x0003f818) list_single_idle_plugin_shortcut_pane_g2

0xdbd4,	// (0x0003f830) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd4,	// (0x0003f830) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd47,	// (0x000419a3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd47,	// (0x000419a3) list_single_idle_plugin_shortcut_pane_g

0xdbe7,	// (0x0003f843) cell_ai_shortcut_pane_ParamLimits

0xdbe7,	// (0x0003f843) cell_ai_shortcut_pane

0xdc0b,	// (0x0003f867) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0b,	// (0x0003f867) cell_ai_shortcut_pane_g1

0xda38,	// (0x0003f694) ai_gene_pane_1_cp2

0xdc2d,	// (0x0003f889) ai_gene_pane_2_cp2

0xdc35,	// (0x0003f891) list_highlight_pane_cp15

0xdc3e,	// (0x0003f89a) list_single_idle_plugin_calendar_pane_g1

0xdc35,	// (0x0003f891) list_highlight_pane_cp17

0xdc46,	// (0x0003f8a2) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc4e,	// (0x0003f8aa) list_single_idle_plugin_player_pane_g1

0xb397,	// (0x0003cff3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4e,	// (0x000419aa) list_single_idle_plugin_player_pane_g

0xdc56,	// (0x0003f8b2) list_single_idle_plugin_player_pane_t1

0xdc64,	// (0x0003f8c0) list_single_idle_plugin_player_pane_t2

0xdc72,	// (0x0003f8ce) list_single_idle_plugin_player_pane_t3

0xdc80,	// (0x0003f8dc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd53,	// (0x000419af) list_single_idle_plugin_player_pane_t

0xdc8e,	// (0x0003f8ea) wait_bar_pane_cp15

0xdc96,	// (0x0003f8f2) grid_ai_notification_pane

0xb397,	// (0x0003cff3) list_single_idle_plugin_notification_pane_g1

0xdc9f,	// (0x0003f8fb) cell_ai_notification_pane_ParamLimits

0xdc9f,	// (0x0003f8fb) cell_ai_notification_pane

0xdcac,	// (0x0003f908) cell_ai_notification_pane_g1

0xdcb4,	// (0x0003f910) cell_ai_notification_pane_t1

0xdcc2,	// (0x0003f91e) tb_ext_find_button_pane

0xdcca,	// (0x0003f926) tb_ext_find_pane_g1

0xdcd2,	// (0x0003f92e) tb_ext_find_pane_t1

0x28a6,	// (0x00034502) tb_ext_find_button_pane_g1

0xdce0,	// (0x0003f93c) tb_ext_find_button_pane_g2

0x0001,

0xfd5c,	// (0x000419b8) tb_ext_find_button_pane_g

0xda7d,	// (0x0003f6d9) main_idle_act4_pane_t1_ParamLimits

0xda8f,	// (0x0003f6eb) main_idle_act4_pane_t2_ParamLimits

0xfd1a,	// (0x00041976) main_idle_act4_pane_t_ParamLimits

0xdab7,	// (0x0003f713) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac5,	// (0x0003f721) sat_plugin_idle_act4_pane_ParamLimits

0xdac5,	// (0x0003f721) sat_plugin_idle_act4_pane

0xdce9,	// (0x0003f945) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdce9,	// (0x0003f945) sat_plugin_idle_act4_pane_t1

0xdcfc,	// (0x0003f958) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcfc,	// (0x0003f958) sat_plugin_idle_act4_pane_t2

0xdd0f,	// (0x0003f96b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd0f,	// (0x0003f96b) sat_plugin_idle_act4_pane_t3

0xdd22,	// (0x0003f97e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd22,	// (0x0003f97e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd61,	// (0x000419bd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd61,	// (0x000419bd) sat_plugin_idle_act4_pane_t

0x5f42,	// (0x00037b9e) popup_battery_window_ParamLimits

0x5f42,	// (0x00037b9e) popup_battery_window

0x21c8,	// (0x00033e24) bg_popup_sub_pane_cp25_ParamLimits

0x21c8,	// (0x00033e24) bg_popup_sub_pane_cp25

0xdd35,	// (0x0003f991) popup_battery_window_g1_ParamLimits

0xdd35,	// (0x0003f991) popup_battery_window_g1

0xdd41,	// (0x0003f99d) popup_battery_window_t1_ParamLimits

0xdd41,	// (0x0003f99d) popup_battery_window_t1

0xdd53,	// (0x0003f9af) popup_battery_window_t2_ParamLimits

0xdd53,	// (0x0003f9af) popup_battery_window_t2

0x0001,

0xfd6a,	// (0x000419c6) popup_battery_window_t_ParamLimits

0xfd6a,	// (0x000419c6) popup_battery_window_t

0x7339,	// (0x00038f95) midp_canvas_pane_ParamLimits

0x73b2,	// (0x0003900e) midp_keypad_pane_ParamLimits

0x73b2,	// (0x0003900e) midp_keypad_pane

0x2596,	// (0x000341f2) main_midp_pane_ParamLimits

0xbad2,	// (0x0003d72e) signal_pane_g2_cp_ParamLimits

0xdd70,	// (0x0003f9cc) aid_size_cell_midp_keypad_ParamLimits

0xdd70,	// (0x0003f9cc) aid_size_cell_midp_keypad

0xdd8a,	// (0x0003f9e6) midp_keyp_game_grid_pane_ParamLimits

0xdd8a,	// (0x0003f9e6) midp_keyp_game_grid_pane

0xddaa,	// (0x0003fa06) midp_keyp_rocker_pane_ParamLimits

0xddaa,	// (0x0003fa06) midp_keyp_rocker_pane

0xdde3,	// (0x0003fa3f) midp_keyp_sk_left_pane_ParamLimits

0xdde3,	// (0x0003fa3f) midp_keyp_sk_left_pane

0xde3d,	// (0x0003fa99) midp_keyp_sk_right_pane_ParamLimits

0xde3d,	// (0x0003fa99) midp_keyp_sk_right_pane

0x202e,	// (0x00033c8a) bg_button_pane_cp03

0xde97,	// (0x0003faf3) midp_keyp_sk_left_pane_g1

0x202e,	// (0x00033c8a) bg_button_pane_cp04

0xde97,	// (0x0003faf3) midp_keyp_sk_right_pane_g1

0xc018,	// (0x0003dc74) midp_keyp_rocker_pane_g1

0xdea0,	// (0x0003fafc) keyp_game_cell_pane_ParamLimits

0xdea0,	// (0x0003fafc) keyp_game_cell_pane

0x202e,	// (0x00033c8a) bg_button_pane_cp02

0xdeb3,	// (0x0003fb0f) keyp_game_cell_pane_g1

0x5f78,	// (0x00037bd4) popup_fep_vkb2_window_ParamLimits

0x5f78,	// (0x00037bd4) popup_fep_vkb2_window

0x8bea,	// (0x0003a846) aid_size_cell_vkb2_ParamLimits

0x8bea,	// (0x0003a846) aid_size_cell_vkb2

0x8c36,	// (0x0003a892) popup_fep_vkb2_window_g1_ParamLimits

0x8c36,	// (0x0003a892) popup_fep_vkb2_window_g1

0x8c7e,	// (0x0003a8da) vkb2_area_bottom_pane_ParamLimits

0x8c7e,	// (0x0003a8da) vkb2_area_bottom_pane

0x8cca,	// (0x0003a926) vkb2_area_keypad_pane_ParamLimits

0x8cca,	// (0x0003a926) vkb2_area_keypad_pane

0x8d0c,	// (0x0003a968) vkb2_area_top_pane_ParamLimits

0x8d0c,	// (0x0003a968) vkb2_area_top_pane

0x8d8b,	// (0x0003a9e7) vkb2_top_entry_pane_ParamLimits

0x8d8b,	// (0x0003a9e7) vkb2_top_entry_pane

0x8db5,	// (0x0003aa11) vkb2_top_grid_left_pane_ParamLimits

0x8db5,	// (0x0003aa11) vkb2_top_grid_left_pane

0x8dd4,	// (0x0003aa30) vkb2_top_grid_right_pane_ParamLimits

0x8dd4,	// (0x0003aa30) vkb2_top_grid_right_pane

0x8df3,	// (0x0003aa4f) vkb2_cell_keypad_pane_ParamLimits

0x8df3,	// (0x0003aa4f) vkb2_cell_keypad_pane

0x8ec4,	// (0x0003ab20) vkb2_area_bottom_grid_pane_ParamLimits

0x8ec4,	// (0x0003ab20) vkb2_area_bottom_grid_pane

0x8eea,	// (0x0003ab46) vkb2_area_bottom_pane_g1_ParamLimits

0x8eea,	// (0x0003ab46) vkb2_area_bottom_pane_g1

0x8f0e,	// (0x0003ab6a) vkb2_area_bottom_pane_g2_ParamLimits

0x8f0e,	// (0x0003ab6a) vkb2_area_bottom_pane_g2

0x8f3c,	// (0x0003ab98) vkb2_area_bottom_pane_g3_ParamLimits

0x8f3c,	// (0x0003ab98) vkb2_area_bottom_pane_g3

0x0002,

0xfd6f,	// (0x000419cb) vkb2_area_bottom_pane_g_ParamLimits

0xfd6f,	// (0x000419cb) vkb2_area_bottom_pane_g

0x8f9d,	// (0x0003abf9) vkb2_top_cell_left_pane_ParamLimits

0x8f9d,	// (0x0003abf9) vkb2_top_cell_left_pane

0xdec4,	// (0x0003fb20) vkb2_top_entry_pane_g1_ParamLimits

0xdec4,	// (0x0003fb20) vkb2_top_entry_pane_g1

0xded2,	// (0x0003fb2e) vkb2_top_entry_pane_t1_ParamLimits

0xded2,	// (0x0003fb2e) vkb2_top_entry_pane_t1

0xdf04,	// (0x0003fb60) vkb2_top_entry_pane_t2_ParamLimits

0xdf04,	// (0x0003fb60) vkb2_top_entry_pane_t2

0xdf36,	// (0x0003fb92) vkb2_top_entry_pane_t3_ParamLimits

0xdf36,	// (0x0003fb92) vkb2_top_entry_pane_t3

0x0002,

0xfd76,	// (0x000419d2) vkb2_top_entry_pane_t_ParamLimits

0xfd76,	// (0x000419d2) vkb2_top_entry_pane_t

0x8fea,	// (0x0003ac46) vkb2_top_grid_right_pane_g1_ParamLimits

0x8fea,	// (0x0003ac46) vkb2_top_grid_right_pane_g1

0x9000,	// (0x0003ac5c) vkb2_top_grid_right_pane_g2_ParamLimits

0x9000,	// (0x0003ac5c) vkb2_top_grid_right_pane_g2

0x9018,	// (0x0003ac74) vkb2_top_grid_right_pane_g3_ParamLimits

0x9018,	// (0x0003ac74) vkb2_top_grid_right_pane_g3

0x9030,	// (0x0003ac8c) vkb2_top_grid_right_pane_g4_ParamLimits

0x9030,	// (0x0003ac8c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7d,	// (0x000419d9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7d,	// (0x000419d9) vkb2_top_grid_right_pane_g

0x9046,	// (0x0003aca2) vkb2_top_cell_left_pane_g1

0x9068,	// (0x0003acc4) vkb2_cell_keypad_pane_g1_ParamLimits

0x9068,	// (0x0003acc4) vkb2_cell_keypad_pane_g1

0xdf5a,	// (0x0003fbb6) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5a,	// (0x0003fbb6) vkb2_cell_keypad_pane_t1

0x9076,	// (0x0003acd2) vkb2_cell_bottom_grid_pane_ParamLimits

0x9076,	// (0x0003acd2) vkb2_cell_bottom_grid_pane

0x90af,	// (0x0003ad0b) vkb2_cell_bottom_grid_pane_g1

0xdb05,	// (0x0003f761) aid_call2_pane_cp02

0xdb0d,	// (0x0003f769) aid_call_pane_cp02

0xdb15,	// (0x0003f771) clock_digital_number_pane_cp10

0xdb1d,	// (0x0003f779) clock_digital_number_pane_cp11

0xdb25,	// (0x0003f781) clock_digital_number_pane_cp12

0xdb2d,	// (0x0003f789) clock_digital_number_pane_cp13

0xdb35,	// (0x0003f791) clock_digital_separator_pane_cp10

0x28a6,	// (0x00034502) popup_clock_digital_analogue_window_cp2_g1

0x28a6,	// (0x00034502) popup_clock_digital_analogue_window_cp2_g2

0xdb3d,	// (0x0003f799) popup_clock_digital_analogue_window_cp2_g3

0x28a6,	// (0x00034502) popup_clock_digital_analogue_window_cp2_g4

0xdb3d,	// (0x0003f799) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd32,	// (0x0004198e) popup_clock_digital_analogue_window_cp2_g

0xdb45,	// (0x0003f7a1) popup_clock_digital_analogue_window_cp2_t1

0xdb53,	// (0x0003f7af) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3d,	// (0x00041999) popup_clock_digital_analogue_window_cp2_t

0xc018,	// (0x0003dc74) clock_digital_number_pane_cp10_g1

0xc018,	// (0x0003dc74) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x0004177c) clock_digital_number_pane_cp10_g

0xc018,	// (0x0003dc74) clock_digital_separator_pane_cp10_g1

0xc018,	// (0x0003dc74) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x0004177c) clock_digital_separator_pane_cp10_g

0xd981,	// (0x0003f5dd) uniindi_top_pane_g3

0xd992,	// (0x0003f5ee) uniindi_top_pane_g4

0x8e7e,	// (0x0003aada) vkb2_row_keypad_pane_ParamLimits

0x8e7e,	// (0x0003aada) vkb2_row_keypad_pane

0x90cf,	// (0x0003ad2b) vkb2_cell_t_keypad_pane_ParamLimits

0x90cf,	// (0x0003ad2b) vkb2_cell_t_keypad_pane

0x90df,	// (0x0003ad3b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x90df,	// (0x0003ad3b) vkb2_cell_t_keypad_pane_cp08

0x90f2,	// (0x0003ad4e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x90f2,	// (0x0003ad4e) vkb2_cell_t_keypad_pane_cp09

0x9106,	// (0x0003ad62) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9106,	// (0x0003ad62) vkb2_cell_t_keypad_pane_cp01

0x9117,	// (0x0003ad73) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9117,	// (0x0003ad73) vkb2_cell_t_keypad_pane_cp02

0x9128,	// (0x0003ad84) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9128,	// (0x0003ad84) vkb2_cell_t_keypad_pane_cp03

0x9139,	// (0x0003ad95) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9139,	// (0x0003ad95) vkb2_cell_t_keypad_pane_cp04

0x914a,	// (0x0003ada6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x914a,	// (0x0003ada6) vkb2_cell_t_keypad_pane_cp05

0x915b,	// (0x0003adb7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x915b,	// (0x0003adb7) vkb2_cell_t_keypad_pane_cp06

0x916c,	// (0x0003adc8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x916c,	// (0x0003adc8) vkb2_cell_t_keypad_pane_cp07

0x917d,	// (0x0003add9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x917d,	// (0x0003add9) vkb2_cell_t_keypad_pane_cp10

0x87eb,	// (0x0003a447) vkb2_cell_t_keypad_pane_g1

0xdf71,	// (0x0003fbcd) vkb2_cell_t_keypad_pane_t1

0x5e7d,	// (0x00037ad9) popup_grid_graphic2_window

0xdf83,	// (0x0003fbdf) aid_size_cell_graphic2_ParamLimits

0xdf83,	// (0x0003fbdf) aid_size_cell_graphic2

0xdfbb,	// (0x0003fc17) bg_popup_window_pane_cp21_ParamLimits

0xdfbb,	// (0x0003fc17) bg_popup_window_pane_cp21

0xdfc9,	// (0x0003fc25) graphic2_pages_pane_ParamLimits

0xdfc9,	// (0x0003fc25) graphic2_pages_pane

0xe00f,	// (0x0003fc6b) grid_graphic2_control_pane_ParamLimits

0xe00f,	// (0x0003fc6b) grid_graphic2_control_pane

0xe04d,	// (0x0003fca9) grid_graphic2_pane_ParamLimits

0xe04d,	// (0x0003fca9) grid_graphic2_pane

0xe0c1,	// (0x0003fd1d) cell_graphic2_pane

0x5e7d,	// (0x00037ad9) main_comp_mode_pane

0xd1f2,	// (0x0003ee4e) list_ai3_gene_pane_ParamLimits

0xd5c0,	// (0x0003f21c) bg_popup_window_pane_cp19_ParamLimits

0xd5cc,	// (0x0003f228) bg_touch_area_indi_pane_ParamLimits

0xd5cc,	// (0x0003f228) bg_touch_area_indi_pane

0xd5e2,	// (0x0003f23e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5e2,	// (0x0003f23e) bg_touch_area_indi_pane_cp01

0xd5f8,	// (0x0003f254) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f8,	// (0x0003f254) bg_touch_area_indi_pane_cp02

0xd60e,	// (0x0003f26a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd60e,	// (0x0003f26a) bg_touch_area_indi_pane_cp03

0xd628,	// (0x0003f284) popup_slider_window_g1_ParamLimits

0xd644,	// (0x0003f2a0) popup_slider_window_g2_ParamLimits

0xd660,	// (0x0003f2bc) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x00041923) popup_slider_window_g_ParamLimits

0xd6c6,	// (0x0003f322) popup_slider_window_t1_ParamLimits

0xd73a,	// (0x0003f396) small_volume_slider_vertical_pane_ParamLimits

0xe0c1,	// (0x0003fd1d) cell_graphic2_pane_ParamLimits

0xe110,	// (0x0003fd6c) bg_button_pane_cp10_ParamLimits

0xe110,	// (0x0003fd6c) bg_button_pane_cp10

0xe123,	// (0x0003fd7f) bg_button_pane_cp11_ParamLimits

0xe123,	// (0x0003fd7f) bg_button_pane_cp11

0xe136,	// (0x0003fd92) graphic2_pages_pane_g1_ParamLimits

0xe136,	// (0x0003fd92) graphic2_pages_pane_g1

0xe151,	// (0x0003fdad) graphic2_pages_pane_g2_ParamLimits

0xe151,	// (0x0003fdad) graphic2_pages_pane_g2

0x0001,

0xfd8b,	// (0x000419e7) graphic2_pages_pane_g_ParamLimits

0xfd8b,	// (0x000419e7) graphic2_pages_pane_g

0xe169,	// (0x0003fdc5) graphic2_pages_pane_t1_ParamLimits

0xe169,	// (0x0003fdc5) graphic2_pages_pane_t1

0xe181,	// (0x0003fddd) cell_graphic2_control_pane_ParamLimits

0xe181,	// (0x0003fddd) cell_graphic2_control_pane

0xe19f,	// (0x0003fdfb) cell_graphic2_pane_g1_ParamLimits

0xe19f,	// (0x0003fdfb) cell_graphic2_pane_g1

0xe1ac,	// (0x0003fe08) cell_graphic2_pane_g2_ParamLimits

0xe1ac,	// (0x0003fe08) cell_graphic2_pane_g2

0xe1b9,	// (0x0003fe15) cell_graphic2_pane_g3_ParamLimits

0xe1b9,	// (0x0003fe15) cell_graphic2_pane_g3

0xe1c6,	// (0x0003fe22) cell_graphic2_pane_g4_ParamLimits

0xe1c6,	// (0x0003fe22) cell_graphic2_pane_g4

0xe1d3,	// (0x0003fe2f) cell_graphic2_pane_g5_ParamLimits

0xe1d3,	// (0x0003fe2f) cell_graphic2_pane_g5

0x0004,

0xfd90,	// (0x000419ec) cell_graphic2_pane_g_ParamLimits

0xfd90,	// (0x000419ec) cell_graphic2_pane_g

0xe1ec,	// (0x0003fe48) cell_graphic2_pane_t1_ParamLimits

0xe1ec,	// (0x0003fe48) cell_graphic2_pane_t1

0x9a80,	// (0x0003b6dc) grid_highlight_pane_cp11_ParamLimits

0x9a80,	// (0x0003b6dc) grid_highlight_pane_cp11

0x21c8,	// (0x00033e24) bg_button_pane_cp05

0xe222,	// (0x0003fe7e) cell_graphic2_control_pane_g1

0xc018,	// (0x0003dc74) bg_touch_area_indi_pane_g1

0xe24a,	// (0x0003fea6) aid_cmod_rocker_key_size

0xe254,	// (0x0003feb0) aid_cmode_itu_key_size

0xe25e,	// (0x0003feba) main_cmode_video_pane

0xe268,	// (0x0003fec4) main_comp_mode_itu_pane

0xe274,	// (0x0003fed0) main_comp_mode_rocker_pane

0xe280,	// (0x0003fedc) cell_cmode_rocker_pane_ParamLimits

0xe280,	// (0x0003fedc) cell_cmode_rocker_pane

0xe292,	// (0x0003feee) cell_cmode_itu_pane_ParamLimits

0xe292,	// (0x0003feee) cell_cmode_itu_pane

0x2454,	// (0x000340b0) bg_button_pane_cp06_ParamLimits

0x2454,	// (0x000340b0) bg_button_pane_cp06

0xc288,	// (0x0003dee4) cell_cmode_rocker_pane_g1_ParamLimits

0xc288,	// (0x0003dee4) cell_cmode_rocker_pane_g1

0xd7de,	// (0x0003f43a) cell_cmode_rocker_pane_g2_ParamLimits

0xd7de,	// (0x0003f43a) cell_cmode_rocker_pane_g2

0x0001,

0xfda0,	// (0x000419fc) cell_cmode_rocker_pane_g_ParamLimits

0xfda0,	// (0x000419fc) cell_cmode_rocker_pane_g

0x202e,	// (0x00033c8a) bg_button_pane_cp07

0xe2a7,	// (0x0003ff03) cell_cmode_itu_pane_g1

0xe2b0,	// (0x0003ff0c) cell_cmode_itu_pane_t1

0xe2be,	// (0x0003ff1a) cell_cmode_itu_pane_t2

0x0001,

0xfda5,	// (0x00041a01) cell_cmode_itu_pane_t

0xda04,	// (0x0003f660) aid_touch_ctrl_left

0xda0c,	// (0x0003f668) aid_touch_ctrl_right

0x202e,	// (0x00033c8a) compa_mode_pane

0xe2cc,	// (0x0003ff28) aid_cmod_rocker_key_size_cp

0xe2d6,	// (0x0003ff32) aid_cmode_itu_key_size_cp

0xe2e0,	// (0x0003ff3c) compa_mode_pane_g1

0xe2e8,	// (0x0003ff44) compa_mode_pane_g2

0xe2f0,	// (0x0003ff4c) compa_mode_pane_g3

0x0002,

0xfdaa,	// (0x00041a06) compa_mode_pane_g

0xe2f8,	// (0x0003ff54) main_comp_mode_itu_pane_cp

0xe300,	// (0x0003ff5c) main_comp_mode_rocker_pane_cp

0xe308,	// (0x0003ff64) cell_cmode_itu_pane_cp_ParamLimits

0xe308,	// (0x0003ff64) cell_cmode_itu_pane_cp

0xe31d,	// (0x0003ff79) cell_cmode_rocker_pane_cp_ParamLimits

0xe31d,	// (0x0003ff79) cell_cmode_rocker_pane_cp

0x2454,	// (0x000340b0) bg_button_pane_cp06_cp_ParamLimits

0x2454,	// (0x000340b0) bg_button_pane_cp06_cp

0xc288,	// (0x0003dee4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc288,	// (0x0003dee4) cell_cmode_rocker_pane_g1_cp

0xc018,	// (0x0003dc74) cell_cmode_rocker_pane_g2_cp

0x202e,	// (0x00033c8a) bg_button_pane_cp07_cp

0xe32f,	// (0x0003ff8b) cell_cmode_itu_pane_g1_cp

0xe338,	// (0x0003ff94) cell_cmode_itu_pane_t1_cp

0xe338,	// (0x0003ff94) cell_cmode_itu_pane_t2_cp

0xaf0d,	// (0x0003cb69) settings_code_pane_cp2

0x209e,	// (0x00033cfa) bg_popup_window_pane_cp3_ParamLimits

0x22e1,	// (0x00033f3d) heading_pane_cp3_ParamLimits

0x22f0,	// (0x00033f4c) listscroll_popup_graphic_pane_ParamLimits

0x8594,	// (0x0003a1f0) fep_hwr_aid_pane_ParamLimits

0x8b45,	// (0x0003a7a1) aid_touch_sctrl_top_ParamLimits

0x8b60,	// (0x0003a7bc) sctrl_sk_top_pane_g1_ParamLimits

0x87eb,	// (0x0003a447) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0004193c) sctrl_sk_top_pane_g_ParamLimits

0x8b6d,	// (0x0003a7c9) sctrl_sk_top_pane_t1_ParamLimits

0x8b45,	// (0x0003a7a1) aid_touch_sctrl_bottom_ParamLimits

0x8b6d,	// (0x0003a7c9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd94d,	// (0x0003f5a9) aid_area_touch_clock

0x8d52,	// (0x0003a9ae) aid_vkb2_area_top_pane_cell_ParamLimits

0x8d52,	// (0x0003a9ae) aid_vkb2_area_top_pane_cell

0x8ea0,	// (0x0003aafc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8ea0,	// (0x0003aafc) aid_vkb2_area_bottom_pane_cell

0xdebc,	// (0x0003fb18) popup_char_count_window

0xe346,	// (0x0003ffa2) popup_char_count_window_g1

0xe34f,	// (0x0003ffab) popup_char_count_window_g2

0xe358,	// (0x0003ffb4) popup_char_count_window_g3

0x0002,

0xfdb1,	// (0x00041a0d) popup_char_count_window_g

0xe361,	// (0x0003ffbd) popup_char_count_window_t1

0x8c14,	// (0x0003a870) popup_fep_char_preview_window_ParamLimits

0x8c14,	// (0x0003a870) popup_fep_char_preview_window

0x8d70,	// (0x0003a9cc) vkb2_top_candi_pane_ParamLimits

0x8d70,	// (0x0003a9cc) vkb2_top_candi_pane

0xe36f,	// (0x0003ffcb) cell_vkb2_top_candi_pane_ParamLimits

0xe36f,	// (0x0003ffcb) cell_vkb2_top_candi_pane

0x9192,	// (0x0003adee) bg_popup_fep_char_preview_window_ParamLimits

0x9192,	// (0x0003adee) bg_popup_fep_char_preview_window

0x91a0,	// (0x0003adfc) popup_fep_char_preview_window_t1_ParamLimits

0x91a0,	// (0x0003adfc) popup_fep_char_preview_window_t1

0xe3b9,	// (0x00040015) bg_popup_fep_char_preview_window_g1

0xe3c1,	// (0x0004001d) bg_popup_fep_char_preview_window_g2

0xe3c9,	// (0x00040025) bg_popup_fep_char_preview_window_g3

0xe3d1,	// (0x0004002d) bg_popup_fep_char_preview_window_g4

0xe3d9,	// (0x00040035) bg_popup_fep_char_preview_window_g5

0xe3e1,	// (0x0004003d) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x00040045) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x0004004d) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x00040055) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb8,	// (0x00041a14) bg_popup_fep_char_preview_window_g

0x87eb,	// (0x0003a447) cell_vkb2_top_candi_pane_g1_ParamLimits

0x87eb,	// (0x0003a447) cell_vkb2_top_candi_pane_g1

0x87f9,	// (0x0003a455) cell_vkb2_top_candi_pane_g2_ParamLimits

0x87f9,	// (0x0003a455) cell_vkb2_top_candi_pane_g2

0xc59f,	// (0x0003e1fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc59f,	// (0x0003e1fb) cell_vkb2_top_candi_pane_g3

0x91e2,	// (0x0003ae3e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x91e2,	// (0x0003ae3e) cell_vkb2_top_candi_pane_g4

0xc789,	// (0x0003e3e5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc789,	// (0x0003e3e5) cell_vkb2_top_candi_pane_g5

0x9203,	// (0x0003ae5f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9203,	// (0x0003ae5f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcd,	// (0x00041a29) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcd,	// (0x00041a29) cell_vkb2_top_candi_pane_g

0x9211,	// (0x0003ae6d) cell_vkb2_top_candi_pane_t1

0x82f9,	// (0x00039f55) aid_size_touch_slider_mark_ParamLimits

0x82f9,	// (0x00039f55) aid_size_touch_slider_mark

0xdfff,	// (0x0003fc5b) grid_graphic2_catg_pane_ParamLimits

0xdfff,	// (0x0003fc5b) grid_graphic2_catg_pane

0xe09d,	// (0x0003fcf9) popup_grid_graphic2_window_t1_ParamLimits

0xe09d,	// (0x0003fcf9) popup_grid_graphic2_window_t1

0xe0af,	// (0x0003fd0b) popup_grid_graphic2_window_t2_ParamLimits

0xe0af,	// (0x0003fd0b) popup_grid_graphic2_window_t2

0x0001,

0xfd86,	// (0x000419e2) popup_grid_graphic2_window_t_ParamLimits

0xfd86,	// (0x000419e2) popup_grid_graphic2_window_t

0x21c8,	// (0x00033e24) bg_button_pane_cp05_ParamLimits

0xe222,	// (0x0003fe7e) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x0004005d) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x0004005d) cell_graphic2_catg_pane

0x202e,	// (0x00033c8a) bg_button_pane_cp12

0xe413,	// (0x0004006f) cell_graphic2_catg_pane_g1

0xd918,	// (0x0003f574) cell_tb_ext_pane_t1_ParamLimits

0x8fbd,	// (0x0003ac19) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8fbd,	// (0x0003ac19) vkb2_top_cell_right_narrow_pane

0x8fd5,	// (0x0003ac31) vkb2_top_cell_right_wide_pane_ParamLimits

0x8fd5,	// (0x0003ac31) vkb2_top_cell_right_wide_pane

0x8586,	// (0x0003a1e2) bg_vkb2_func_pane_ParamLimits

0x8586,	// (0x0003a1e2) bg_vkb2_func_pane

0x9046,	// (0x0003aca2) vkb2_top_cell_left_pane_g1_ParamLimits

0x8586,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8586,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp03

0x90af,	// (0x0003ad0b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99fc,	// (0x0003b658) bg_vkb2_func_pane_g1

0x9a04,	// (0x0003b660) bg_vkb2_func_pane_g2

0x9a14,	// (0x0003b670) bg_vkb2_func_pane_g3

0x9a0c,	// (0x0003b668) bg_vkb2_func_pane_g4

0x9a1c,	// (0x0003b678) bg_vkb2_func_pane_g5

0x9a24,	// (0x0003b680) bg_vkb2_func_pane_g6

0x9a2c,	// (0x0003b688) bg_vkb2_func_pane_g7

0x9a34,	// (0x0003b690) bg_vkb2_func_pane_g8

0x99f4,	// (0x0003b650) bg_vkb2_func_pane_g9

0x0008,

0xfdda,	// (0x00041a36) bg_vkb2_func_pane_g

0x8586,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8586,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp01

0x9046,	// (0x0003aca2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9046,	// (0x0003aca2) vkb2_top_cell_right_wide_pane_g1

0x8586,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8586,	// (0x0003a1e2) bg_vkb2_fuc_pane_cp02

0x9230,	// (0x0003ae8c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9230,	// (0x0003ae8c) vkb2_top_cell_right_narrow_pane_g1

0xd53a,	// (0x0003f196) aid_touch_area_decrease_ParamLimits

0xd53a,	// (0x0003f196) aid_touch_area_decrease

0xd55e,	// (0x0003f1ba) aid_touch_area_increase_ParamLimits

0xd55e,	// (0x0003f1ba) aid_touch_area_increase

0xd576,	// (0x0003f1d2) aid_touch_area_mute_ParamLimits

0xd576,	// (0x0003f1d2) aid_touch_area_mute

0xd592,	// (0x0003f1ee) aid_touch_area_slider_ParamLimits

0xd592,	// (0x0003f1ee) aid_touch_area_slider

0xd67c,	// (0x0003f2d8) popup_slider_window_g4_ParamLimits

0xd67c,	// (0x0003f2d8) popup_slider_window_g4

0xd694,	// (0x0003f2f0) popup_slider_window_g5_ParamLimits

0xd694,	// (0x0003f2f0) popup_slider_window_g5

0xd6b6,	// (0x0003f312) popup_slider_window_g6_ParamLimits

0xd6b6,	// (0x0003f312) popup_slider_window_g6

0xd6f4,	// (0x0003f350) popup_slider_window_t2_ParamLimits

0xd6f4,	// (0x0003f350) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x00041930) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x00041930) popup_slider_window_t

0xd70c,	// (0x0003f368) slider_pane_ParamLimits

0xd70c,	// (0x0003f368) slider_pane

0xe41c,	// (0x00040078) slider_pane_g1_ParamLimits

0xe41c,	// (0x00040078) slider_pane_g1

0xe430,	// (0x0004008c) slider_pane_g2_ParamLimits

0xe430,	// (0x0004008c) slider_pane_g2

0xe446,	// (0x000400a2) slider_pane_g3_ParamLimits

0xe446,	// (0x000400a2) slider_pane_g3

0x0003,

0xfded,	// (0x00041a49) slider_pane_g_ParamLimits

0xfded,	// (0x00041a49) slider_pane_g

0x7bb4,	// (0x00039810) popup_tb_float_extension_window_ParamLimits

0x7bb4,	// (0x00039810) popup_tb_float_extension_window

0xe472,	// (0x000400ce) aid_size_cell_tb_float_ext

0x202e,	// (0x00033c8a) bg_popup_sub_window_cp28

0xe47e,	// (0x000400da) grid_tb_float_ext_pane

0xe488,	// (0x000400e4) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x000400e4) cell_tb_float_ext_pane

0xe4a2,	// (0x000400fe) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x00040107) grid_highlight_pane_cp12

0x86d5,	// (0x0003a331) cell_last_hwr_side_pane_ParamLimits

0x86d5,	// (0x0003a331) cell_last_hwr_side_pane

0xc018,	// (0x0003dc74) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x00040110) cell_last_hwr_side_pane_g2

0x0001,

0xfdf6,	// (0x00041a52) cell_last_hwr_side_pane_g

0x8f6c,	// (0x0003abc8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8f6c,	// (0x0003abc8) vkb2_area_bottom_space_btn_pane

0x87eb,	// (0x0003a447) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf71,	// (0x0003fbcd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9211,	// (0x0003ae6d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9250,	// (0x0003aeac) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9250,	// (0x0003aeac) vkb2_area_bottom_space_btn_pane_g1

0x928a,	// (0x0003aee6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x928a,	// (0x0003aee6) vkb2_area_bottom_space_btn_pane_g2

0x92c0,	// (0x0003af1c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x92c0,	// (0x0003af1c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfb,	// (0x00041a57) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfb,	// (0x00041a57) vkb2_area_bottom_space_btn_pane_g

0x8649,	// (0x0003a2a5) cel_fep_hwr_func_pane_ParamLimits

0x8649,	// (0x0003a2a5) cel_fep_hwr_func_pane

0x8685,	// (0x0003a2e1) cell_hwr_side_button_pane_ParamLimits

0x8685,	// (0x0003a2e1) cell_hwr_side_button_pane

0xd94d,	// (0x0003f5a9) aid_area_touch_clock_ParamLimits

0x21c8,	// (0x00033e24) bg_uniindi_top_pane_ParamLimits

0xd95f,	// (0x0003f5bb) uniindi_top_pane_g1_ParamLimits

0xd975,	// (0x0003f5d1) uniindi_top_pane_g2_ParamLimits

0xd981,	// (0x0003f5dd) uniindi_top_pane_g3_ParamLimits

0xd992,	// (0x0003f5ee) uniindi_top_pane_g4_ParamLimits

0xfd0c,	// (0x00041968) uniindi_top_pane_g_ParamLimits

0xd99f,	// (0x0003f5fb) uniindi_top_pane_t1_ParamLimits

0x21c8,	// (0x00033e24) bg_vkb2_func_pane_cp01_ParamLimits

0x21c8,	// (0x00033e24) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x00040119) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x00040119) cel_fep_hwr_func_pane_g1

0x21c8,	// (0x00033e24) bg_vkb2_func_pane_cp02_ParamLimits

0x21c8,	// (0x00033e24) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x00040119) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x00040119) cell_hwr_side_button_pane_g1

0x9878,	// (0x0003b4d4) status_pane_g4_ParamLimits

0x9878,	// (0x0003b4d4) status_pane_g4

0x9892,	// (0x0003b4ee) status_pane_t1

0xbd5a,	// (0x0003d9b6) form2_midp_gauge_slider_cont_pane

0xbd62,	// (0x0003d9be) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd74,	// (0x0003d9d0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd86,	// (0x0003d9e2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x0004172f) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd98,	// (0x0003d9f4) form2_midp_slider_pane_ParamLimits

0x8bdc,	// (0x0003a838) aid_size_cell_func_vkb2_ParamLimits

0x8bdc,	// (0x0003a838) aid_size_cell_func_vkb2

0xe45e,	// (0x000400ba) slider_pane_g4_ParamLimits

0xe45e,	// (0x000400ba) slider_pane_g4

0x930a,	// (0x0003af66) form2_midp_gauge_slider_pane_t2_cp01

0x9318,	// (0x0003af74) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9318,	// (0x0003af74) form2_midp_gauge_slider_pane_t3_cp01

0x9335,	// (0x0003af91) form2_midp_slider_pane_cp01

0x202e,	// (0x00033c8a) navi_smil_pane

0xe4f6,	// (0x00040152) navi_smil_pane_g1

0xe4fe,	// (0x0004015a) navi_smil_pane_t1

0xe4cb,	// (0x00040127) form2_midp_slider_pane_g1

0xe4d4,	// (0x00040130) form2_midp_slider_pane_g2

0xe4dc,	// (0x00040138) form2_midp_slider_pane_g3

0xe4cb,	// (0x00040127) form2_midp_slider_pane_g4

0xe4e4,	// (0x00040140) form2_midp_slider_pane_g5

0x0004,

0xfe04,	// (0x00041a60) form2_midp_slider_pane_g

0x92fa,	// (0x0003af56) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x92fa,	// (0x0003af56) vkb2_area_bottom_space_btn_pane_g4

0x7e3b,	// (0x00039a97) lc0_navi_pane_ParamLimits

0x7e3b,	// (0x00039a97) lc0_navi_pane

0x7eb1,	// (0x00039b0d) lc0_stat_indi_pane_ParamLimits

0x7eb1,	// (0x00039b0d) lc0_stat_indi_pane

0x7ec8,	// (0x00039b24) ls0_title_pane_ParamLimits

0x7ec8,	// (0x00039b24) ls0_title_pane

0x2454,	// (0x000340b0) bg_popup_sub_pane_cp14_ParamLimits

0xd934,	// (0x0003f590) list_uniindi_pane_ParamLimits

0xd940,	// (0x0003f59c) uniindi_top_pane_ParamLimits

0xd9dc,	// (0x0003f638) list_single_uniindi_pane_g1_ParamLimits

0xd9ef,	// (0x0003f64b) list_single_uniindi_pane_t1_ParamLimits

0x933e,	// (0x0003af9a) lc0_stat_clock_pane_ParamLimits

0x933e,	// (0x0003af9a) lc0_stat_clock_pane

0xe50c,	// (0x00040168) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x00040168) lc0_stat_indi_pane_g1

0xe519,	// (0x00040175) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x00040175) lc0_stat_indi_pane_g2

0x0001,

0xfe0f,	// (0x00041a6b) lc0_stat_indi_pane_g_ParamLimits

0xfe0f,	// (0x00041a6b) lc0_stat_indi_pane_g

0x934b,	// (0x0003afa7) lc0_uni_indicator_pane_ParamLimits

0x934b,	// (0x0003afa7) lc0_uni_indicator_pane

0xe526,	// (0x00040182) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x00040182) ls0_title_pane_g1

0xe53a,	// (0x00040196) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x00040196) ls0_title_pane_t1

0x9358,	// (0x0003afb4) lc0_uni_indicator_pane_g1_ParamLimits

0x9358,	// (0x0003afb4) lc0_uni_indicator_pane_g1

0xe570,	// (0x000401cc) lc0_stat_clock_pane_t1

0x5e7d,	// (0x00037ad9) main_ai5_pane

0xe586,	// (0x000401e2) ai5_sk_pane_ParamLimits

0xe586,	// (0x000401e2) ai5_sk_pane

0xe593,	// (0x000401ef) cell_ai5_widget_pane_ParamLimits

0xe593,	// (0x000401ef) cell_ai5_widget_pane

0xe653,	// (0x000402af) aid_size_cell_widget_grid

0xe661,	// (0x000402bd) bg_ai5_widget_pane_ParamLimits

0xe661,	// (0x000402bd) bg_ai5_widget_pane

0xe6df,	// (0x0004033b) cell_ai5_widget_pane_g2

0xe6f3,	// (0x0004034f) cell_ai5_widget_pane_g3

0xe70d,	// (0x00040369) cell_ai5_widget_pane_g4

0xe71d,	// (0x00040379) cell_ai5_widget_pane_g5

0xe72d,	// (0x00040389) cell_ai5_widget_pane_g6

0xe739,	// (0x00040395) cell_ai5_widget_pane_g7

0xe7a5,	// (0x00040401) cell_ai5_widget_pane_t1_ParamLimits

0xe7a5,	// (0x00040401) cell_ai5_widget_pane_t1

0xe7c2,	// (0x0004041e) cell_ai5_widget_pane_t2_ParamLimits

0xe7c2,	// (0x0004041e) cell_ai5_widget_pane_t2

0xe7da,	// (0x00040436) cell_ai5_widget_pane_t3_ParamLimits

0xe7da,	// (0x00040436) cell_ai5_widget_pane_t3

0xe7f2,	// (0x0004044e) cell_ai5_widget_pane_t4_ParamLimits

0xe7f2,	// (0x0004044e) cell_ai5_widget_pane_t4

0xe818,	// (0x00040474) cell_ai5_widget_pane_t5_ParamLimits

0xe818,	// (0x00040474) cell_ai5_widget_pane_t5

0xe837,	// (0x00040493) cell_ai5_widget_pane_t6_ParamLimits

0xe837,	// (0x00040493) cell_ai5_widget_pane_t6

0xe849,	// (0x000404a5) cell_ai5_widget_pane_t7_ParamLimits

0xe849,	// (0x000404a5) cell_ai5_widget_pane_t7

0xe868,	// (0x000404c4) cell_ai5_widget_pane_t8_ParamLimits

0xe868,	// (0x000404c4) cell_ai5_widget_pane_t8

0x000b,

0xfe2f,	// (0x00041a8b) cell_ai5_widget_pane_t_ParamLimits

0xfe2f,	// (0x00041a8b) cell_ai5_widget_pane_t

0xe8ec,	// (0x00040548) grid_ai5_widget_pane

0x2454,	// (0x000340b0) highlight_cell_ai5_widget_pane_ParamLimits

0x2454,	// (0x000340b0) highlight_cell_ai5_widget_pane

0xe900,	// (0x0004055c) ai5_sk_left_pane

0xe90a,	// (0x00040566) ai5_sk_middle_pane

0xe914,	// (0x00040570) ai5_sk_right_pane

0xe91e,	// (0x0004057a) bg_ai5_widget_pane_g1_ParamLimits

0xe91e,	// (0x0004057a) bg_ai5_widget_pane_g1

0xe92a,	// (0x00040586) bg_ai5_widget_pane_g2_ParamLimits

0xe92a,	// (0x00040586) bg_ai5_widget_pane_g2

0xe936,	// (0x00040592) bg_ai5_widget_pane_g3_ParamLimits

0xe936,	// (0x00040592) bg_ai5_widget_pane_g3

0xe942,	// (0x0004059e) bg_ai5_widget_pane_g4_ParamLimits

0xe942,	// (0x0004059e) bg_ai5_widget_pane_g4

0xe94e,	// (0x000405aa) bg_ai5_widget_pane_g5_ParamLimits

0xe94e,	// (0x000405aa) bg_ai5_widget_pane_g5

0xe95a,	// (0x000405b6) bg_ai5_widget_pane_g6_ParamLimits

0xe95a,	// (0x000405b6) bg_ai5_widget_pane_g6

0xe966,	// (0x000405c2) bg_ai5_widget_pane_g7_ParamLimits

0xe966,	// (0x000405c2) bg_ai5_widget_pane_g7

0xe972,	// (0x000405ce) bg_ai5_widget_pane_g8_ParamLimits

0xe972,	// (0x000405ce) bg_ai5_widget_pane_g8

0xe97e,	// (0x000405da) bg_ai5_widget_pane_g9_ParamLimits

0xe97e,	// (0x000405da) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x00041aa4) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x00041aa4) bg_ai5_widget_pane_g

0xe9b0,	// (0x0004060c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9b0,	// (0x0004060c) cell_shortcut_ai5_widget_pane

0x2d14,	// (0x00034970) bg_cell_shortcut_ai5_widget_pane

0xe9c1,	// (0x0004061d) cell_grid_ai5_widget_pane_g1

0x2d14,	// (0x00034970) highlight_cell_shortcut_ai5_widget_pane

0x99fc,	// (0x0003b658) ai5_sk_left_pane_g1

0xe9ca,	// (0x00040626) ai5_sk_left_pane_g2

0xe9d2,	// (0x0004062e) ai5_sk_left_pane_g3

0xe9da,	// (0x00040636) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x00041ab7) ai5_sk_left_pane_g

0xe9e2,	// (0x0004063e) ai5_sk_left_pane_t1

0x9a04,	// (0x0003b660) ai5_sk_right_pane_g1

0xe9f0,	// (0x0004064c) ai5_sk_right_pane_g2

0xe9f8,	// (0x00040654) ai5_sk_right_pane_g3

0xea00,	// (0x0004065c) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x00041ac0) ai5_sk_right_pane_g

0xea08,	// (0x00040664) ai5_sk_right_pane_t1

0x9a04,	// (0x0003b660) ai5_sk_middle_pane_g1

0x99fc,	// (0x0003b658) ai5_sk_middle_pane_g2

0x9a1c,	// (0x0003b678) ai5_sk_middle_pane_g3

0xe9f8,	// (0x00040654) ai5_sk_middle_pane_g4

0xe9d2,	// (0x0004062e) ai5_sk_middle_pane_g5

0xea16,	// (0x00040672) ai5_sk_middle_pane_g6

0xea1e,	// (0x0004067a) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x00041ac9) ai5_sk_middle_pane_g

0x7cc1,	// (0x0003991d) aid_touch_area_size_lc0_ParamLimits

0x7cc1,	// (0x0003991d) aid_touch_area_size_lc0

0x881a,	// (0x0003a476) cell_hwr_candidate_pane_t1_ParamLimits

0x7cdd,	// (0x00039939) aid_touch_navi_pane

0x9822,	// (0x0003b47e) status_dt_navi_pane_ParamLimits

0x9822,	// (0x0003b47e) status_dt_navi_pane

0x982f,	// (0x0003b48b) status_dt_sta_pane_ParamLimits

0x982f,	// (0x0003b48b) status_dt_sta_pane

0xea26,	// (0x00040682) dt_sta_controll_pane

0xea33,	// (0x0004068f) dt_sta_indi_pane

0xea44,	// (0x000406a0) dt_sta_title_pane

0x21c8,	// (0x00033e24) bg_dt_sta_indi_pane_ParamLimits

0x21c8,	// (0x00033e24) bg_dt_sta_indi_pane

0xea57,	// (0x000406b3) dt_sta_battery_pane

0xea5f,	// (0x000406bb) dt_sta_indi_pane_g1

0xea68,	// (0x000406c4) dt_sta_indi_pane_g2

0xea71,	// (0x000406cd) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x00041ad8) dt_sta_indi_pane_g

0xea7a,	// (0x000406d6) dt_sta_signal_pane

0x2454,	// (0x000340b0) bg_dt_sta_title_pane_ParamLimits

0x2454,	// (0x000340b0) bg_dt_sta_title_pane

0xa856,	// (0x0003c4b2) dt_sta_title_pane_g1

0xea83,	// (0x000406df) dt_sta_title_pane_t1_ParamLimits

0xea83,	// (0x000406df) dt_sta_title_pane_t1

0x202e,	// (0x00033c8a) bg_dt_sta_control_pane

0xea98,	// (0x000406f4) dt_sta_controll_pane_g1

0xeaa1,	// (0x000406fd) bg_dt_sta_title_pane_g1

0xeaaa,	// (0x00040706) bg_dt_sta_title_pane_g2

0xeab3,	// (0x0004070f) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x00041adf) bg_dt_sta_title_pane_g

0xc018,	// (0x0003dc74) bg_dt_sta_indi_pane_g1

0xeabc,	// (0x00040718) dt_sta_signal_pane_g1

0xeac4,	// (0x00040720) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x00041ae6) dt_sta_signal_pane_g

0xeacc,	// (0x00040728) dt_sta_battery_pane_g1

0xead5,	// (0x00040731) dt_sta_battery_pane_t1

0xc018,	// (0x0003dc74) bg_dt_sta_control_pane_g1

0x2929,	// (0x00034585) fep_china_uni_eep_pane

0x2931,	// (0x0003458d) fep_china_uni_entry_pane_ParamLimits

0x2941,	// (0x0003459d) popup_fep_china_uni_window_g1_ParamLimits

0x2951,	// (0x000345ad) popup_fep_china_uni_window_g2_ParamLimits

0x2951,	// (0x000345ad) popup_fep_china_uni_window_g2

0x0001,

0xf6e2,	// (0x0004133e) popup_fep_china_uni_window_g_ParamLimits

0xf6e2,	// (0x0004133e) popup_fep_china_uni_window_g

0xeae4,	// (0x00040740) fep_china_uni_eep_pane_g1

0xeaec,	// (0x00040748) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x00040149) aid_touch_area_size_smil_player

0x7e33,	// (0x00039a8f) lc0_clock_pane

0x9886,	// (0x0003b4e2) status_pane_g5_ParamLimits

0x9886,	// (0x0003b4e2) status_pane_g5

0x7875,	// (0x000394d1) popup_keymap_window

0x9844,	// (0x0003b4a0) status_icon_pane

0xe6f3,	// (0x0004034f) cell_ai5_widget_pane_g3_ParamLimits

0xe70d,	// (0x00040369) cell_ai5_widget_pane_g4_ParamLimits

0xe71d,	// (0x00040379) cell_ai5_widget_pane_g5_ParamLimits

0xe745,	// (0x000403a1) cell_ai5_widget_pane_g8_ParamLimits

0xe745,	// (0x000403a1) cell_ai5_widget_pane_g8

0xe759,	// (0x000403b5) cell_ai5_widget_pane_g9_ParamLimits

0xe759,	// (0x000403b5) cell_ai5_widget_pane_g9

0xe76d,	// (0x000403c9) cell_ai5_widget_pane_g10_ParamLimits

0xe76d,	// (0x000403c9) cell_ai5_widget_pane_g10

0xeafb,	// (0x00040757) status_icon_pane_g1

0x202e,	// (0x00033c8a) bg_popup_sub_pane_cp13

0xeb03,	// (0x0004075f) popup_keymap_window_t1

0x75b4,	// (0x00039210) control_pane_g6_ParamLimits

0x75b4,	// (0x00039210) control_pane_g6

0x75c1,	// (0x0003921d) control_pane_g7_ParamLimits

0x75c1,	// (0x0003921d) control_pane_g7

0x75ce,	// (0x0003922a) control_pane_g8_ParamLimits

0x75ce,	// (0x0003922a) control_pane_g8

0xea26,	// (0x00040682) dt_sta_controll_pane_ParamLimits

0xea33,	// (0x0004068f) dt_sta_indi_pane_ParamLimits

0xea44,	// (0x000406a0) dt_sta_title_pane_ParamLimits

0x239f,	// (0x00033ffb) aid_size_touch_scroll_bar_cale

0x5f56,	// (0x00037bb2) popup_discreet_window_ParamLimits

0x5f56,	// (0x00037bb2) popup_discreet_window

0x5fd0,	// (0x00037c2c) popup_sk_window

0xa09a,	// (0x0003bcf6) bg_popup_sub_pane_cp28_ParamLimits

0xa09a,	// (0x0003bcf6) bg_popup_sub_pane_cp28

0xeb11,	// (0x0004076d) popup_discreet_window_g1_ParamLimits

0xeb11,	// (0x0004076d) popup_discreet_window_g1

0xeb31,	// (0x0004078d) popup_discreet_window_t1_ParamLimits

0xeb31,	// (0x0004078d) popup_discreet_window_t1

0xeb4f,	// (0x000407ab) popup_discreet_window_t2_ParamLimits

0xeb4f,	// (0x000407ab) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x00041aeb) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x00041aeb) popup_discreet_window_t

0x936c,	// (0x0003afc8) popup_sk_window_g1

0x9376,	// (0x0003afd2) popup_sk_window_g2

0x0001,

0xfe96,	// (0x00041af2) popup_sk_window_g

0x937e,	// (0x0003afda) popup_sk_window_t1

0x938c,	// (0x0003afe8) popup_sk_window_t1_copy1

0xe6df,	// (0x0004033b) cell_ai5_widget_pane_g2_ParamLimits

0xe87a,	// (0x000404d6) cell_ai5_widget_pane_t9_ParamLimits

0xe87a,	// (0x000404d6) cell_ai5_widget_pane_t9

0x202e,	// (0x00033c8a) main_fep_fshwr2_pane

0x939a,	// (0x0003aff6) aid_fshwr2_btn_pane

0x93ae,	// (0x0003b00a) aid_fshwr2_syb_pane

0x93c2,	// (0x0003b01e) aid_fshwr2_txt_pane

0x93d2,	// (0x0003b02e) fshwr2_func_candi_pane

0x93f6,	// (0x0003b052) fshwr2_hwr_syb_pane

0x9410,	// (0x0003b06c) fshwr2_icf_pane

0x5e7d,	// (0x00037ad9) fshwr2_icf_bg_pane

0x943e,	// (0x0003b09a) fshwr2_icf_pane_t1_ParamLimits

0x943e,	// (0x0003b09a) fshwr2_icf_pane_t1

0x28a6,	// (0x00034502) fshwr2_func_candi_pane_g1

0xeba1,	// (0x000407fd) fshwr2_func_candi_row_pane_ParamLimits

0xeba1,	// (0x000407fd) fshwr2_func_candi_row_pane

0x9457,	// (0x0003b0b3) cell_fshwr2_syb_pane_ParamLimits

0x9457,	// (0x0003b0b3) cell_fshwr2_syb_pane

0x947a,	// (0x0003b0d6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x947a,	// (0x0003b0d6) fshwr2_hwr_syb_pane_g1

0x5e7d,	// (0x00037ad9) bg_popup_call_pane_cp01

0x9488,	// (0x0003b0e4) fshwr2_func_candi_cell_pane_ParamLimits

0x9488,	// (0x0003b0e4) fshwr2_func_candi_cell_pane

0xa6f6,	// (0x0003c352) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6f6,	// (0x0003c352) fshwr2_func_candi_cell_bg_pane

0x94d3,	// (0x0003b12f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x94d3,	// (0x0003b12f) fshwr2_func_candi_cell_pane_g1

0x94f3,	// (0x0003b14f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x94f3,	// (0x0003b14f) fshwr2_func_candi_cell_pane_t1

0x5e7d,	// (0x00037ad9) bg_button_pane_cp08

0x2596,	// (0x000341f2) cell_fshwr2_syb_bg_pane

0x9506,	// (0x0003b162) cell_fshwr2_syb_bg_pane_g1

0x951a,	// (0x0003b176) cell_fshwr2_syb_bg_pane_t1

0x2454,	// (0x000340b0) main_tmo_pane

0xab8f,	// (0x0003c7eb) uni_indicator_pane_g1_ParamLimits

0xaba2,	// (0x0003c7fe) uni_indicator_pane_g2_ParamLimits

0xabb4,	// (0x0003c810) uni_indicator_pane_g3_ParamLimits

0xabc3,	// (0x0003c81f) uni_indicator_pane_g4_ParamLimits

0xabc3,	// (0x0003c81f) uni_indicator_pane_g4

0xabd7,	// (0x0003c833) uni_indicator_pane_g5_ParamLimits

0xabd7,	// (0x0003c833) uni_indicator_pane_g5

0xabd7,	// (0x0003c833) uni_indicator_pane_g6_ParamLimits

0xabd7,	// (0x0003c833) uni_indicator_pane_g6

0xf8e1,	// (0x0004153d) uni_indicator_pane_g_ParamLimits

0xd51c,	// (0x0003f178) popup_tmo_note_window_ParamLimits

0xd51c,	// (0x0003f178) popup_tmo_note_window

0x8bbe,	// (0x0003a81a) fshwr2_bg_pane

0x94e4,	// (0x0003b140) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x94e4,	// (0x0003b140) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x00041af7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x00041af7) fshwr2_func_candi_cell_pane_g

0x87d3,	// (0x0003a42f) bg_popup_window_pane_cp01

0x9530,	// (0x0003b18c) bg_popup_window_pane_g1_cp01

0xebc8,	// (0x00040824) bg_popup_window_pane_cp22_ParamLimits

0xebc8,	// (0x00040824) bg_popup_window_pane_cp22

0xebd6,	// (0x00040832) listscroll_tmo_link_pane_ParamLimits

0xebd6,	// (0x00040832) listscroll_tmo_link_pane

0xec16,	// (0x00040872) popup_tmo_note_window_g1_ParamLimits

0xec16,	// (0x00040872) popup_tmo_note_window_g1

0xec23,	// (0x0004087f) tmo_note_info_pane_ParamLimits

0xec23,	// (0x0004087f) tmo_note_info_pane

0xec3d,	// (0x00040899) list_tmo_note_info_pane_g1_ParamLimits

0xec3d,	// (0x00040899) list_tmo_note_info_pane_g1

0xec54,	// (0x000408b0) list_tmo_note_info_pane_g2_ParamLimits

0xec54,	// (0x000408b0) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x00041afc) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x00041afc) list_tmo_note_info_pane_g

0xec70,	// (0x000408cc) list_tmo_note_info_text_pane_ParamLimits

0xec70,	// (0x000408cc) list_tmo_note_info_text_pane

0xecf1,	// (0x0004094d) list_tmo_link_pane

0xecfe,	// (0x0004095a) scroll_pane_cp20

0xed0b,	// (0x00040967) list_single_tmo_link_pane_ParamLimits

0xed0b,	// (0x00040967) list_single_tmo_link_pane

0xed1b,	// (0x00040977) list_single_tmo_link_pane_t1

0xed29,	// (0x00040985) list_tmo_note_info_text_pane_t1_ParamLimits

0xed29,	// (0x00040985) list_tmo_note_info_text_pane_t1

0x6b41,	// (0x0003879d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6b41,	// (0x0003879d) aid_size_touch_scroll_bar_cp01

0x6a2a,	// (0x00038686) aid_size_touch_slider_marker

0x5fb8,	// (0x00037c14) popup_settings_window_ParamLimits

0x5fb8,	// (0x00037c14) popup_settings_window

0x477f,	// (0x000363db) popup_candi_list_indi_window

0x7cdd,	// (0x00039939) aid_touch_navi_pane_ParamLimits

0x8b19,	// (0x0003a775) rs_clock_indi_pane

0x8b22,	// (0x0003a77e) sctrl_sk_bottom_pane_ParamLimits

0x8b33,	// (0x0003a78f) sctrl_sk_top_pane_ParamLimits

0x8c2e,	// (0x0003a88a) popup_fep_tooltip_window

0xe653,	// (0x000402af) aid_size_cell_widget_grid_ParamLimits

0xe6c8,	// (0x00040324) cell_ai5_widget_pane_g1_ParamLimits

0xe6c8,	// (0x00040324) cell_ai5_widget_pane_g1

0xe72d,	// (0x00040389) cell_ai5_widget_pane_g6_ParamLimits

0xe739,	// (0x00040395) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe14,	// (0x00041a70) cell_ai5_widget_pane_g_ParamLimits

0xfe14,	// (0x00041a70) cell_ai5_widget_pane_g

0xe8a9,	// (0x00040505) cell_ai5_widget_pane_t10_ParamLimits

0xe8a9,	// (0x00040505) cell_ai5_widget_pane_t10

0xe8ec,	// (0x00040548) grid_ai5_widget_pane_ParamLimits

0xe98a,	// (0x000405e6) cell_contacts_ai5_widget_pane_ParamLimits

0xe98a,	// (0x000405e6) cell_contacts_ai5_widget_pane

0xeb64,	// (0x000407c0) popup_discreet_window_t3_ParamLimits

0xeb64,	// (0x000407c0) popup_discreet_window_t3

0x9428,	// (0x0003b084) popup_fshwr2_char_preview_window_ParamLimits

0x9428,	// (0x0003b084) popup_fshwr2_char_preview_window

0xec8e,	// (0x000408ea) tmo_note_info_pane_t1

0xeca3,	// (0x000408ff) tmo_note_info_pane_t2

0xecb8,	// (0x00040914) tmo_note_info_pane_t3

0xeccd,	// (0x00040929) tmo_note_info_pane_t4

0xecdf,	// (0x0004093b) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x00041b01) tmo_note_info_pane_t

0xecf1,	// (0x0004094d) list_tmo_link_pane_ParamLimits

0xecfe,	// (0x0004095a) scroll_pane_cp20_ParamLimits

0x5e7d,	// (0x00037ad9) bg_popup_fep_char_preview_window_cp01

0xed42,	// (0x0004099e) popup_fshwr2_char_preview_window_t1

0xed50,	// (0x000409ac) popup_candi_list_indi_window_g1

0xed59,	// (0x000409b5) bg_cell_contacts_ai5_widget_pane

0xed65,	// (0x000409c1) cell_contacts_ai5_widget_pane_g1

0xc6de,	// (0x0003e33a) cell_contacts_ai5_widget_pane_g2

0xed7a,	// (0x000409d6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x00041b0c) cell_contacts_ai5_widget_pane_g

0xed86,	// (0x000409e2) cell_contacts_ai5_widget_pane_t1

0x2454,	// (0x000340b0) highlight_cell_shortcut_ai5_widget_pane_cp01

0xedfd,	// (0x00040a59) settings_container_pane

0x2d14,	// (0x00034970) listscroll_set_pane_copy1

0xb6fb,	// (0x0003d357) scroll_pane_cp121_copy1

0x9e3f,	// (0x0003ba9b) set_content_pane_copy1

0xee09,	// (0x00040a65) aid_height_set_list_copy1_ParamLimits

0xee09,	// (0x00040a65) aid_height_set_list_copy1

0xadbf,	// (0x0003ca1b) aid_size_parent_copy1_ParamLimits

0xadbf,	// (0x0003ca1b) aid_size_parent_copy1

0xee15,	// (0x00040a71) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee15,	// (0x00040a71) button_value_adjust_pane_cp6_copy1

0x2596,	// (0x000341f2) list_highlight_pane_cp2_copy1_ParamLimits

0x2596,	// (0x000341f2) list_highlight_pane_cp2_copy1

0xee29,	// (0x00040a85) list_set_pane_copy1_ParamLimits

0xee29,	// (0x00040a85) list_set_pane_copy1

0xed98,	// (0x000409f4) main_pane_set_t1_copy1_ParamLimits

0xed98,	// (0x000409f4) main_pane_set_t1_copy1

0xedd2,	// (0x00040a2e) main_pane_set_t2_copy1_ParamLimits

0xedd2,	// (0x00040a2e) main_pane_set_t2_copy1

0xeed6,	// (0x00040b32) main_pane_set_t3_copy1

0xeee4,	// (0x00040b40) main_pane_set_t4_copy1

0xedf1,	// (0x00040a4d) set_content_pane_g1_copy1_ParamLimits

0xedf1,	// (0x00040a4d) set_content_pane_g1_copy1

0xeef2,	// (0x00040b4e) setting_code_pane_copy1

0xeefa,	// (0x00040b56) setting_slider_graphic_pane_copy1

0xeefa,	// (0x00040b56) setting_slider_pane_copy1

0xef02,	// (0x00040b5e) setting_text_pane_copy1

0xef02,	// (0x00040b5e) setting_volume_pane_copy1

0xeef2,	// (0x00040b4e) settings_code_pane_cp2_copy1

0xef0a,	// (0x00040b66) settings_code_pane_cp_copy1_ParamLimits

0xef0a,	// (0x00040b66) settings_code_pane_cp_copy1

0x9539,	// (0x0003b195) volume_set_pane_copy1

0xef1e,	// (0x00040b7a) volume_set_pane_g10_copy1

0xef26,	// (0x00040b82) volume_set_pane_g1_copy1

0xef2e,	// (0x00040b8a) volume_set_pane_g2_copy1

0xef36,	// (0x00040b92) volume_set_pane_g3_copy1

0xef3e,	// (0x00040b9a) volume_set_pane_g4_copy1

0xef46,	// (0x00040ba2) volume_set_pane_g5_copy1

0xef4e,	// (0x00040baa) volume_set_pane_g6_copy1

0xef56,	// (0x00040bb2) volume_set_pane_g7_copy1

0xef5e,	// (0x00040bba) volume_set_pane_g8_copy1

0xef66,	// (0x00040bc2) volume_set_pane_g9_copy1

0x209e,	// (0x00033cfa) bg_set_opt_pane_cp_copy1_ParamLimits

0x209e,	// (0x00033cfa) bg_set_opt_pane_cp_copy1

0x9541,	// (0x0003b19d) setting_slider_pane_t1_copy1_ParamLimits

0x9541,	// (0x0003b19d) setting_slider_pane_t1_copy1

0x9560,	// (0x0003b1bc) setting_slider_pane_t2_copy1_ParamLimits

0x9560,	// (0x0003b1bc) setting_slider_pane_t2_copy1

0x957a,	// (0x0003b1d6) setting_slider_pane_t3_copy1_ParamLimits

0x957a,	// (0x0003b1d6) setting_slider_pane_t3_copy1

0x9592,	// (0x0003b1ee) slider_set_pane_copy1_ParamLimits

0x9592,	// (0x0003b1ee) slider_set_pane_copy1

0x24ac,	// (0x00034108) set_opt_bg_pane_g1_copy2

0x24b4,	// (0x00034110) set_opt_bg_pane_g2_copy2

0xef6e,	// (0x00040bca) set_opt_bg_pane_g3_copy2

0x24c4,	// (0x00034120) set_opt_bg_pane_g4_copy2

0x24cc,	// (0x00034128) set_opt_bg_pane_g5_copy2

0x24d4,	// (0x00034130) set_opt_bg_pane_g6_copy2

0xef78,	// (0x00040bd4) set_opt_bg_pane_g7_copy2

0xef80,	// (0x00040bdc) set_opt_bg_pane_g8_copy2

0xef8a,	// (0x00040be6) set_opt_bg_pane_g9_copy2

0x95a8,	// (0x0003b204) aid_size_touch_slider_mark_copy1_ParamLimits

0x95a8,	// (0x0003b204) aid_size_touch_slider_mark_copy1

0xef94,	// (0x00040bf0) slider_set_pane_g1_copy1

0x95bc,	// (0x0003b218) slider_set_pane_g2_copy1

0x8319,	// (0x00039f75) slider_set_pane_g3_copy1_ParamLimits

0x8319,	// (0x00039f75) slider_set_pane_g3_copy1

0x832d,	// (0x00039f89) slider_set_pane_g4_copy1_ParamLimits

0x832d,	// (0x00039f89) slider_set_pane_g4_copy1

0x8345,	// (0x00039fa1) slider_set_pane_g5_copy1_ParamLimits

0x8345,	// (0x00039fa1) slider_set_pane_g5_copy1

0x8319,	// (0x00039f75) slider_set_pane_g6_copy1_ParamLimits

0x8319,	// (0x00039f75) slider_set_pane_g6_copy1

0x95c4,	// (0x0003b220) slider_set_pane_g7_copy1_ParamLimits

0x95c4,	// (0x0003b220) slider_set_pane_g7_copy1

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp2_copy1

0xef9d,	// (0x00040bf9) setting_slider_graphic_pane_g1_copy1

0xefa6,	// (0x00040c02) setting_slider_graphic_pane_t1_copy1

0xefb6,	// (0x00040c12) setting_slider_graphic_pane_t2_copy1

0xefc6,	// (0x00040c22) slider_set_pane_cp_copy1

0xefd6,	// (0x00040c32) input_focus_pane_cp1_copy1

0xefdf,	// (0x00040c3b) list_set_text_pane_copy1

0xefe7,	// (0x00040c43) setting_text_pane_g1_copy1

0x4e16,	// (0x00036a72) set_text_pane_t1_copy1

0xefd6,	// (0x00040c32) input_focus_pane_cp2_copy1

0xefe7,	// (0x00040c43) setting_code_pane_g1_copy1

0xeff0,	// (0x00040c4c) setting_code_pane_t1_copy1

0xeffe,	// (0x00040c5a) list_set_graphic_pane_copy1

0x2042,	// (0x00033c9e) bg_set_opt_pane_cp4_copy1

0x2a81,	// (0x000346dd) list_set_graphic_pane_g1_copy1_ParamLimits

0x2a81,	// (0x000346dd) list_set_graphic_pane_g1_copy1

0xf012,	// (0x00040c6e) list_set_graphic_pane_g2_copy1

0x2a99,	// (0x000346f5) list_set_graphic_pane_t1_copy1_ParamLimits

0x2a99,	// (0x000346f5) list_set_graphic_pane_t1_copy1

0xc018,	// (0x0003dc74) rs_clock_indi_pane_g1

0xf01a,	// (0x00040c76) rs_clock_indi_pane_t1

0xf028,	// (0x00040c84) rs_indi_pane

0xf030,	// (0x00040c8c) rs_indi_pane_g1

0xf039,	// (0x00040c95) rs_indi_pane_g2

0xed50,	// (0x000409ac) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x00041b13) rs_indi_pane_g

0x2d14,	// (0x00034970) bg_popup_preview_window_pane_cp03

0xf042,	// (0x00040c9e) popup_fep_tooltip_window_t1

0xcccb,	// (0x0003e927) popup_note2_window_g2_ParamLimits

0xcccb,	// (0x0003e927) popup_note2_window_g2

0x0001,

0xfc4b,	// (0x000418a7) popup_note2_window_g_ParamLimits

0xfc4b,	// (0x000418a7) popup_note2_window_g

0xd1b8,	// (0x0003ee14) bg_popup_sub_pane_cp11_ParamLimits

0xd1c5,	// (0x0003ee21) cell_ai3_links_pane_g1_ParamLimits

0xd1dc,	// (0x0003ee38) cell_ai3_links_pane_t1

0x4e16,	// (0x00036a72) set_text_pane_t1_copy1_ParamLimits

0x2c46,	// (0x000348a2) cell_graphic_popup_pane_cp2_ParamLimits

0x2c46,	// (0x000348a2) cell_graphic_popup_pane_cp2

0xf050,	// (0x00040cac) cell_graphic_popup_pane_g1_cp2

0x2322,	// (0x00033f7e) cell_graphic_popup_pane_g2_cp2

0xf058,	// (0x00040cb4) cell_graphic_popup_pane_g3_cp2

0xf060,	// (0x00040cbc) cell_graphic_popup_pane_t2_cp2

0x2333,	// (0x00033f8f) grid_highlight_pane_cp3_cp2

0x2723,	// (0x0003437f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2454,	// (0x000340b0) main_tmo_pane_ParamLimits

0xd510,	// (0x0003f16c) popup_tmo_big_image_note_window

0xe6b7,	// (0x00040313) cell_ai5_widget_list_pane

0xe6bf,	// (0x0004031b) cell_ai5_widget_lrg_icon_pane

0xec8e,	// (0x000408ea) tmo_note_info_pane_t1_ParamLimits

0xeca3,	// (0x000408ff) tmo_note_info_pane_t2_ParamLimits

0xecb8,	// (0x00040914) tmo_note_info_pane_t3_ParamLimits

0xeccd,	// (0x00040929) tmo_note_info_pane_t4_ParamLimits

0xecdf,	// (0x0004093b) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x00041b01) tmo_note_info_pane_t_ParamLimits

0xedfd,	// (0x00040a59) settings_container_pane_ParamLimits

0xefce,	// (0x00040c2a) indicator_popup_pane_cp5

0xefce,	// (0x00040c2a) indicator_popup_pane_cp6

0xeffe,	// (0x00040c5a) list_set_graphic_pane_copy1_ParamLimits

0x202e,	// (0x00033c8a) bg_popup_window_pane_cp23

0xf06e,	// (0x00040cca) popup_tmo_big_image_note_window_g1

0xf077,	// (0x00040cd3) popup_tmo_big_image_note_window_t1

0xf087,	// (0x00040ce3) popup_tmo_big_image_note_window_t2

0xf097,	// (0x00040cf3) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x00041b1a) popup_tmo_big_image_note_window_t

0xc018,	// (0x0003dc74) cell_ai5_widget_lrg_icon_pane_g1

0xf0a7,	// (0x00040d03) cell_ai5_widget_lrg_icon_pane_t1

0xf0b5,	// (0x00040d11) cell_ai5_widget_list_row_pane_ParamLimits

0xf0b5,	// (0x00040d11) cell_ai5_widget_list_row_pane

0xf0cc,	// (0x00040d28) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0cc,	// (0x00040d28) cell_ai5_widget_list_row_pane_g1

0xf0d9,	// (0x00040d35) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0d9,	// (0x00040d35) cell_ai5_widget_list_row_pane_t1

0xf104,	// (0x00040d60) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf104,	// (0x00040d60) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x00041b21) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x00041b21) cell_ai5_widget_list_row_pane_t

0x5e7d,	// (0x00037ad9) main_fep_vtchi_ss_pane

0xf154,	// (0x00040db0) popup_fep_char_pre_window

0xf15c,	// (0x00040db8) popup_fep_ituss_window

0xf18e,	// (0x00040dea) popup_fep_vkbss_window

0x2596,	// (0x000341f2) grid_vkbss_keypad_pane_ParamLimits

0x2596,	// (0x000341f2) grid_vkbss_keypad_pane

0xf1d4,	// (0x00040e30) ituss_keypad_pane

0x9605,	// (0x0003b261) aid_vkbss_key_offset_ParamLimits

0x9605,	// (0x0003b261) aid_vkbss_key_offset

0x9611,	// (0x0003b26d) cell_vkbss_key_pane_ParamLimits

0x9611,	// (0x0003b26d) cell_vkbss_key_pane

0xf1e4,	// (0x00040e40) bg_cell_vkbss_key_g1_ParamLimits

0xf1e4,	// (0x00040e40) bg_cell_vkbss_key_g1

0xf1f0,	// (0x00040e4c) cell_vkbss_key_3p_pane_ParamLimits

0xf1f0,	// (0x00040e4c) cell_vkbss_key_3p_pane

0xf226,	// (0x00040e82) cell_vkbss_key_g1_ParamLimits

0xf226,	// (0x00040e82) cell_vkbss_key_g1

0xf25c,	// (0x00040eb8) cell_vkbss_key_t1_ParamLimits

0xf25c,	// (0x00040eb8) cell_vkbss_key_t1

0x965c,	// (0x0003b2b8) cell_ituss_key_pane_ParamLimits

0x965c,	// (0x0003b2b8) cell_ituss_key_pane

0xf2b8,	// (0x00040f14) bg_cell_ituss_key_g1_ParamLimits

0xf2b8,	// (0x00040f14) bg_cell_ituss_key_g1

0xf2c4,	// (0x00040f20) cell_ituss_key_pane_g1_ParamLimits

0xf2c4,	// (0x00040f20) cell_ituss_key_pane_g1

0x966d,	// (0x0003b2c9) cell_ituss_key_pane_g2_ParamLimits

0x966d,	// (0x0003b2c9) cell_ituss_key_pane_g2

0x0005,

0xfecc,	// (0x00041b28) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x00041b28) cell_ituss_key_pane_g

0x96f1,	// (0x0003b34d) cell_ituss_key_t1_ParamLimits

0x96f1,	// (0x0003b34d) cell_ituss_key_t1

0x972b,	// (0x0003b387) cell_ituss_key_t2_ParamLimits

0x972b,	// (0x0003b387) cell_ituss_key_t2

0x975d,	// (0x0003b3b9) cell_ituss_key_t3_ParamLimits

0x975d,	// (0x0003b3b9) cell_ituss_key_t3

0x978e,	// (0x0003b3ea) cell_ituss_key_t4_ParamLimits

0x978e,	// (0x0003b3ea) cell_ituss_key_t4

0x0005,

0xfed9,	// (0x00041b35) cell_ituss_key_t_ParamLimits

0xfed9,	// (0x00041b35) cell_ituss_key_t

0xf2ea,	// (0x00040f46) cell_vkbss_key_3p_pane_g1

0xf2f2,	// (0x00040f4e) cell_vkbss_key_3p_pane_g2

0xf2fa,	// (0x00040f56) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee6,	// (0x00041b42) cell_vkbss_key_3p_pane_g

0x2d14,	// (0x00034970) bg_popup_fep_char_preview_window_cp02

0xf302,	// (0x00040f5e) popup_fep_char_pre_window_t1

0xe649,	// (0x000402a5) main_ai5_sk_pane

0xed59,	// (0x000409b5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed65,	// (0x000409c1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6de,	// (0x0003e33a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7a,	// (0x000409d6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x00041b0c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed86,	// (0x000409e2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2454,	// (0x000340b0) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf310,	// (0x00040f6c) main_ai5_sk_pane_g1

0x9edb,	// (0x0003bb37) popup_query_code_window_g1

0xf175,	// (0x00040dd1) popup_fep_vkb_icf_pane

0xf1a8,	// (0x00040e04) popup_fep_vtchi_icf_pane

0xf319,	// (0x00040f75) bg_icf_pane

0xf319,	// (0x00040f75) list_vkb_icf_pane

0xf325,	// (0x00040f81) bg_icf_pane_cp01

0xf338,	// (0x00040f94) vtchi_icf_list_pane

0xf398,	// (0x00040ff4) list_vkb_icf_pane_t1_ParamLimits

0xf398,	// (0x00040ff4) list_vkb_icf_pane_t1

0xf3bd,	// (0x00041019) vtchi_icf_list_pane_t1_ParamLimits

0xf3bd,	// (0x00041019) vtchi_icf_list_pane_t1

0xf15c,	// (0x00040db8) popup_fep_ituss_window_ParamLimits

0xf1a8,	// (0x00040e04) popup_fep_vtchi_icf_pane_ParamLimits

0xf1d4,	// (0x00040e30) ituss_keypad_pane_ParamLimits

0x95fb,	// (0x0003b257) ituss_sks_pane

0xf319,	// (0x00040f75) bg_icf_pane_ParamLimits

0xf12c,	// (0x00040d88) icf_edit_indi_pane_ParamLimits

0xf12c,	// (0x00040d88) icf_edit_indi_pane

0xf319,	// (0x00040f75) list_vkb_icf_pane_ParamLimits

0xf325,	// (0x00040f81) bg_icf_pane_cp01_ParamLimits

0xf147,	// (0x00040da3) icf_edit_indi_pane_cp01_ParamLimits

0xf147,	// (0x00040da3) icf_edit_indi_pane_cp01

0xf338,	// (0x00040f94) vtchi_query_pane

0xe4bd,	// (0x00040119) icf_edit_indi_pane_g1_ParamLimits

0xe4bd,	// (0x00040119) icf_edit_indi_pane_g1

0xf438,	// (0x00041094) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x00041094) icf_edit_indi_pane_g2

0x0001,

0xff11,	// (0x00041b6d) icf_edit_indi_pane_g_ParamLimits

0xff11,	// (0x00041b6d) icf_edit_indi_pane_g

0xf44c,	// (0x000410a8) icf_edit_indi_pane_t1

0xf3e1,	// (0x0004103d) bg_input_focus_pane_cp042

0x2396,	// (0x00033ff2) vtchi_button_pane

0xf3ea,	// (0x00041046) vtchi_query_pane_t1

0xf3f8,	// (0x00041054) vtchi_query_pane_t2

0xf406,	// (0x00041062) vtchi_query_pane_t3

0x0002,

0xff00,	// (0x00041b5c) vtchi_query_pane_t

0x5e7d,	// (0x00037ad9) bg_button_pane_cp13

0xf414,	// (0x00041070) vtchi_button_pane_g1

0x980f,	// (0x0003b46b) ituss_sks_pane_g1

0x981a,	// (0x0003b476) ituss_sks_pane_g2

0x0001,

0xff07,	// (0x00041b63) ituss_sks_pane_g

0xf41c,	// (0x00041078) ituss_sks_pane_t1

0xf42a,	// (0x00041086) ituss_sks_pane_t2

0x0001,

0xff0c,	// (0x00041b68) ituss_sks_pane_t

0xba93,	// (0x0003d6ef) indicator_nsta_pane_cp_g1

0xba9c,	// (0x0003d6f8) indicator_nsta_pane_cp_g2

0xbaa4,	// (0x0003d700) indicator_nsta_pane_cp_g3

0xbaac,	// (0x0003d708) indicator_nsta_pane_cp_g4

0xba9c,	// (0x0003d6f8) indicator_nsta_pane_cp_g5

0xbaa4,	// (0x0003d700) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x000416e5) indicator_nsta_pane_cp_g

0xe210,	// (0x0003fe6c) cell_graphic2_pane_t2_ParamLimits

0xe210,	// (0x0003fe6c) cell_graphic2_pane_t2

0x0001,

0xfd9b,	// (0x000419f7) cell_graphic2_pane_t_ParamLimits

0xfd9b,	// (0x000419f7) cell_graphic2_pane_t

0xe23c,	// (0x0003fe98) cell_graphic2_control_pane_t1

0x700b,	// (0x00038c67) signal_pane_g3_ParamLimits

0x700b,	// (0x00038c67) signal_pane_g3

0x701d,	// (0x00038c79) signal_pane_g4_ParamLimits

0x701d,	// (0x00038c79) signal_pane_g4

0xf116,	// (0x00040d72) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf116,	// (0x00040d72) cell_ai5_widget_list_row_pane_t3

0xf2d8,	// (0x00040f34) cell_ituss_key_pane_t1_ParamLimits

0xf2d8,	// (0x00040f34) cell_ituss_key_pane_t1

0x9b0e,	// (0x0003b76a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9b0e,	// (0x0003b76a) form_field_data_wide_pane_vc_t2

0x9b22,	// (0x0003b77e) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b22,	// (0x0003b77e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c9,	// (0x00041425) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c9,	// (0x00041425) form_field_data_wide_pane_vc_t

0xb73d,	// (0x0003d399) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb73d,	// (0x0003d399) form_field_slider_wide_pane_vc_t3

0xb81b,	// (0x0003d477) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb81b,	// (0x0003d477) form_field_popup_wide_pane_vc_t2

0xb832,	// (0x0003d48e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb832,	// (0x0003d48e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x000416d4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x000416d4) form_field_popup_wide_pane_vc_t

0x939a,	// (0x0003aff6) aid_fshwr2_btn_pane_ParamLimits

0x93ae,	// (0x0003b00a) aid_fshwr2_syb_pane_ParamLimits

0x93c2,	// (0x0003b01e) aid_fshwr2_txt_pane_ParamLimits

0x8bbe,	// (0x0003a81a) fshwr2_bg_pane_ParamLimits

0x93d2,	// (0x0003b02e) fshwr2_func_candi_pane_ParamLimits

0x93f6,	// (0x0003b052) fshwr2_hwr_syb_pane_ParamLimits

0x9410,	// (0x0003b06c) fshwr2_icf_pane_ParamLimits

0x4b4b,	// (0x000367a7) list_double_graphic_pane_vc_g4_ParamLimits

0x4b4b,	// (0x000367a7) list_double_graphic_pane_vc_g4

0x968d,	// (0x0003b2e9) cell_ituss_key_pane_g3_ParamLimits

0x968d,	// (0x0003b2e9) cell_ituss_key_pane_g3

0x97bf,	// (0x0003b41b) cell_ituss_key_t5_ParamLimits

0x97bf,	// (0x0003b41b) cell_ituss_key_t5

0xf18e,	// (0x00040dea) popup_fep_vkbss_window_ParamLimits

0xc80f,	// (0x0003e46b) aid_cell_ai5_quarter

0xf44c,	// (0x000410a8) icf_edit_indi_pane_t1_ParamLimits

0x633c,	// (0x00037f98) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x633c,	// (0x00037f98) aid_tch_indicator_popup_pane_cp2

0x634f,	// (0x00037fab) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x634f,	// (0x00037fab) aid_tch_query_popup_data_pane_cp2

0x9e83,	// (0x0003badf) aid_tch_query_popup_pane_ParamLimits

0x9e83,	// (0x0003badf) aid_tch_query_popup_pane

0x9e83,	// (0x0003badf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e83,	// (0x0003badf) aid_tch_query_popup_data_pane_cp1

0x2596,	// (0x000341f2) cell_fshwr2_syb_bg_pane_ParamLimits

0x9506,	// (0x0003b162) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x951a,	// (0x0003b176) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf175,	// (0x00040dd1) popup_fep_vkb_icf_pane_ParamLimits

0x91da,	// (0x0003ae36) bg_popup_fep_char_preview_window_g10

0xe781,	// (0x000403dd) cell_ai5_widget_pane_g11_ParamLimits

0xe781,	// (0x000403dd) cell_ai5_widget_pane_g11

0xe78d,	// (0x000403e9) cell_ai5_widget_pane_g12_ParamLimits

0xe78d,	// (0x000403e9) cell_ai5_widget_pane_g12

0xe799,	// (0x000403f5) cell_ai5_widget_pane_g13_ParamLimits

0xe799,	// (0x000403f5) cell_ai5_widget_pane_g13

0xe8c8,	// (0x00040524) cell_ai5_widget_pane_t11_ParamLimits

0xe8c8,	// (0x00040524) cell_ai5_widget_pane_t11

0xe8da,	// (0x00040536) cell_ai5_widget_pane_t12_ParamLimits

0xe8da,	// (0x00040536) cell_ai5_widget_pane_t12

0x9699,	// (0x0003b2f5) cell_ituss_key_pane_g4_ParamLimits

0x9699,	// (0x0003b2f5) cell_ituss_key_pane_g4

0x96b5,	// (0x0003b311) cell_ituss_key_pane_g5_ParamLimits

0x96b5,	// (0x0003b311) cell_ituss_key_pane_g5

0x96d1,	// (0x0003b32d) cell_ituss_key_pane_g6_ParamLimits

0x96d1,	// (0x0003b32d) cell_ituss_key_pane_g6

0x99f4,	// (0x0003b650) bg_icf_pane_g1

0xf340,	// (0x00040f9c) bg_icf_pane_g2

0xf34c,	// (0x00040fa8) bg_icf_pane_g3

0xf356,	// (0x00040fb2) bg_icf_pane_g4

0xf362,	// (0x00040fbe) bg_icf_pane_g5

0xf36c,	// (0x00040fc8) bg_icf_pane_g6

0xf378,	// (0x00040fd4) bg_icf_pane_g7

0xf382,	// (0x00040fde) bg_icf_pane_g8

0xf38e,	// (0x00040fea) bg_icf_pane_g9

0x0008,

0xfeed,	// (0x00041b49) bg_icf_pane_g

0xf1c1,	// (0x00040e1d) popup_hyb_candi_window_ParamLimits

0xf1c1,	// (0x00040e1d) popup_hyb_candi_window

0x9a80,	// (0x0003b6dc) bg_popup_sub_pane_cp01_ParamLimits

0x9a80,	// (0x0003b6dc) bg_popup_sub_pane_cp01

0xf465,	// (0x000410c1) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x000410c1) entry_hyb_candi_pane

0xf474,	// (0x000410d0) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x000410d0) grid_hyb_candi_pane

0xf489,	// (0x000410e5) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x000410e5) grid_hyb_phrase_pane

0xf498,	// (0x000410f4) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x000410f4) cell_hyb_candi_pane

0xf4bb,	// (0x00041117) cell_hyb_candi_scroll_pane

0x28a6,	// (0x00034502) cell_hyb_candi_pane_g1

0xf4c4,	// (0x00041120) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0004112e) cell_hyb_phrase_pane

0x28a6,	// (0x00034502) cell_hyb_phrase_pane_g1

0xf4db,	// (0x00041137) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x00041145) entry_hyb_candi_pane_t1

0x2d14,	// (0x00034970) input_focus_pane_cp06

0xf4f7,	// (0x00041153) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0004115b) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x00041163) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0004116b) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x00041173) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0004117b) cell_hyb_candi_scroll_pane_g4

0xe57e,	// (0x000401da) ai5_page_g1

0x97d1,	// (0x0003b42d) cell_ituss_key_t6_ParamLimits

0x97d1,	// (0x0003b42d) cell_ituss_key_t6

0x95da,	// (0x0003b236) icf_edit_indi_pane_cp02_ParamLimits

0x95da,	// (0x0003b236) icf_edit_indi_pane_cp02

0x95ee,	// (0x0003b24a) icf_edit_indi_pane_cp03_ParamLimits

0x95ee,	// (0x0003b24a) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
