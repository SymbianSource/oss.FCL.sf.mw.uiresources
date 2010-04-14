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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001a822 };

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
0x7f62,	// (0x00022784) Screen

0x7f76,	// (0x00022798) application_window_ParamLimits

0x7f76,	// (0x00022798) application_window

0x7f90,	// (0x000227b2) screen_g1

0x5bde,	// (0x00020400) area_bottom_pane_ParamLimits

0x5bde,	// (0x00020400) area_bottom_pane

0x5c9e,	// (0x000204c0) area_top_pane_ParamLimits

0x5c9e,	// (0x000204c0) area_top_pane

0x5d32,	// (0x00020554) main_pane_ParamLimits

0x5d32,	// (0x00020554) main_pane

0x7f9a,	// (0x000227bc) misc_graphics

0x9908,	// (0x0002412a) battery_pane_ParamLimits

0x9908,	// (0x0002412a) battery_pane

0xa5db,	// (0x00024dfd) bg_status_flat_pane_g8

0xa5e3,	// (0x00024e05) bg_status_flat_pane_g9

0x99ca,	// (0x000241ec) context_pane_ParamLimits

0x99ca,	// (0x000241ec) context_pane

0x9ae0,	// (0x00024302) navi_pane_ParamLimits

0x9ae0,	// (0x00024302) navi_pane

0x9b64,	// (0x00024386) signal_pane_ParamLimits

0x9b64,	// (0x00024386) signal_pane

0x0008,

0xf872,	// (0x0002a094) bg_status_flat_pane_g

0x9bd1,	// (0x000243f3) status_pane_g1_ParamLimits

0x9bd1,	// (0x000243f3) status_pane_g1

0x9bdd,	// (0x000243ff) status_pane_g2_ParamLimits

0x9bdd,	// (0x000243ff) status_pane_g2

0x9be9,	// (0x0002440b) status_pane_g3_ParamLimits

0x9be9,	// (0x0002440b) status_pane_g3

0x0004,

0xf7a0,	// (0x00029fc2) status_pane_g_ParamLimits

0xf7a0,	// (0x00029fc2) status_pane_g

0x9c1d,	// (0x0002443f) title_pane_ParamLimits

0x9c1d,	// (0x0002443f) title_pane

0x9c5a,	// (0x0002447c) uni_indicator_pane_ParamLimits

0x9c5a,	// (0x0002447c) uni_indicator_pane

0x9830,	// (0x00024052) bg_list_pane_ParamLimits

0x9830,	// (0x00024052) bg_list_pane

0x51aa,	// (0x0001f9cc) find_pane

0x9850,	// (0x00024072) listscroll_app_pane_ParamLimits

0x9850,	// (0x00024072) listscroll_app_pane

0x985c,	// (0x0002407e) listscroll_form_pane

0x51b2,	// (0x0001f9d4) listscroll_gen_pane_ParamLimits

0x51b2,	// (0x0001f9d4) listscroll_gen_pane

0x65e6,	// (0x00020e08) listscroll_set_pane

0x8ab6,	// (0x000232d8) main_idle_act_pane

0x953c,	// (0x00023d5e) main_idle_trad_pane

0x953c,	// (0x00023d5e) main_list_empty_pane

0x9876,	// (0x00024098) main_midp_pane

0x9882,	// (0x000240a4) main_pane_g1_ParamLimits

0x9882,	// (0x000240a4) main_pane_g1

0x65ee,	// (0x00020e10) popup_ai_message_window_ParamLimits

0x65ee,	// (0x00020e10) popup_ai_message_window

0x6692,	// (0x00020eb4) popup_fep_china_uni_window_ParamLimits

0x6692,	// (0x00020eb4) popup_fep_china_uni_window

0x66ec,	// (0x00020f0e) popup_fep_japan_candidate_window_ParamLimits

0x66ec,	// (0x00020f0e) popup_fep_japan_candidate_window

0x670a,	// (0x00020f2c) popup_fep_japan_predictive_window_ParamLimits

0x670a,	// (0x00020f2c) popup_fep_japan_predictive_window

0x673a,	// (0x00020f5c) popup_find_window

0x6747,	// (0x00020f69) popup_grid_graphic_window_ParamLimits

0x6747,	// (0x00020f69) popup_grid_graphic_window

0x676f,	// (0x00020f91) popup_large_graphic_colour_window

0x6795,	// (0x00020fb7) popup_menu_window_ParamLimits

0x6795,	// (0x00020fb7) popup_menu_window

0x694f,	// (0x00021171) popup_note_image_window

0x693b,	// (0x0002115d) popup_note_wait_window_ParamLimits

0x693b,	// (0x0002115d) popup_note_wait_window

0x693b,	// (0x0002115d) popup_note_window_ParamLimits

0x693b,	// (0x0002115d) popup_note_window

0x69a5,	// (0x000211c7) popup_query_code_window_ParamLimits

0x69a5,	// (0x000211c7) popup_query_code_window

0x69b9,	// (0x000211db) popup_query_data_code_window_ParamLimits

0x69b9,	// (0x000211db) popup_query_data_code_window

0x69d4,	// (0x000211f6) popup_query_data_window_ParamLimits

0x69d4,	// (0x000211f6) popup_query_data_window

0x69ee,	// (0x00021210) popup_query_sat_info_window_ParamLimits

0x69ee,	// (0x00021210) popup_query_sat_info_window

0x6a27,	// (0x00021249) popup_snote_single_graphic_window_ParamLimits

0x6a27,	// (0x00021249) popup_snote_single_graphic_window

0x6a27,	// (0x00021249) popup_snote_single_text_window_ParamLimits

0x6a27,	// (0x00021249) popup_snote_single_text_window

0x6a3c,	// (0x0002125e) popup_sub_window_general

0x6b6a,	// (0x0002138c) popup_window_general_ParamLimits

0x6b6a,	// (0x0002138c) popup_window_general

0x9890,	// (0x000240b2) power_save_pane

0x6484,	// (0x00020ca6) control_pane_g1_ParamLimits

0x6484,	// (0x00020ca6) control_pane_g1

0x64ab,	// (0x00020ccd) control_pane_g2_ParamLimits

0x64ab,	// (0x00020ccd) control_pane_g2

0x97f3,	// (0x00024015) control_pane_g3_ParamLimits

0x97f3,	// (0x00024015) control_pane_g3

0x0007,

0xf788,	// (0x00029faa) control_pane_g_ParamLimits

0xf788,	// (0x00029faa) control_pane_g

0x64f3,	// (0x00020d15) control_pane_t1_ParamLimits

0x64f3,	// (0x00020d15) control_pane_t1

0x653f,	// (0x00020d61) control_pane_t2_ParamLimits

0x653f,	// (0x00020d61) control_pane_t2

0x0002,

0xf799,	// (0x00029fbb) control_pane_t_ParamLimits

0xf799,	// (0x00029fbb) control_pane_t

0x9718,	// (0x00023f3a) navi_navi_volume_pane_cp1

0x9720,	// (0x00023f42) status_small_icon_pane

0x9728,	// (0x00023f4a) status_small_pane_g1_ParamLimits

0x9728,	// (0x00023f4a) status_small_pane_g1

0x975c,	// (0x00023f7e) status_small_pane_g2_ParamLimits

0x975c,	// (0x00023f7e) status_small_pane_g2

0x9768,	// (0x00023f8a) status_small_pane_g3_ParamLimits

0x9768,	// (0x00023f8a) status_small_pane_g3

0x9774,	// (0x00023f96) status_small_pane_g4_ParamLimits

0x9774,	// (0x00023f96) status_small_pane_g4

0x9780,	// (0x00023fa2) status_small_pane_g5_ParamLimits

0x9780,	// (0x00023fa2) status_small_pane_g5

0x978e,	// (0x00023fb0) status_small_pane_g6_ParamLimits

0x978e,	// (0x00023fb0) status_small_pane_g6

0x0007,

0xf777,	// (0x00029f99) status_small_pane_g_ParamLimits

0xf777,	// (0x00029f99) status_small_pane_g

0x97bd,	// (0x00023fdf) status_small_pane_t1

0x97df,	// (0x00024001) status_small_wait_pane_ParamLimits

0x97df,	// (0x00024001) status_small_wait_pane

0x8fa6,	// (0x000237c8) aid_levels_signal_ParamLimits

0x8fa6,	// (0x000237c8) aid_levels_signal

0x8fb8,	// (0x000237da) signal_pane_g1_ParamLimits

0x8fb8,	// (0x000237da) signal_pane_g1

0x8fcd,	// (0x000237ef) signal_pane_g2_ParamLimits

0x8fcd,	// (0x000237ef) signal_pane_g2

0x0003,

0xf708,	// (0x00029f2a) signal_pane_g_ParamLimits

0xf708,	// (0x00029f2a) signal_pane_g

0x9007,	// (0x00023829) context_pane_g1

0x7fa4,	// (0x000227c6) title_pane_g1

0x7fda,	// (0x000227fc) title_pane_t1

0x8042,	// (0x00022864) title_pane_t2

0x8068,	// (0x0002288a) title_pane_t3

0x0002,

0xf557,	// (0x00029d79) title_pane_t

0x9c72,	// (0x00024494) aid_levels_battery_ParamLimits

0x9c72,	// (0x00024494) aid_levels_battery

0x9c86,	// (0x000244a8) battery_pane_g1_ParamLimits

0x9c86,	// (0x000244a8) battery_pane_g1

0x9c9c,	// (0x000244be) battery_pane_g2_ParamLimits

0x9c9c,	// (0x000244be) battery_pane_g2

0x0001,

0xf7ab,	// (0x00029fcd) battery_pane_g_ParamLimits

0xf7ab,	// (0x00029fcd) battery_pane_g

0xaf0f,	// (0x00025731) uni_indicator_pane_g1

0xaf25,	// (0x00025747) uni_indicator_pane_g2

0xaf3b,	// (0x0002575d) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0002a13c) uni_indicator_pane_g

0x93ba,	// (0x00023bdc) navi_icon_pane_ParamLimits

0x93ba,	// (0x00023bdc) navi_icon_pane

0x92f8,	// (0x00023b1a) navi_midp_pane

0x93d6,	// (0x00023bf8) navi_navi_pane

0x93e0,	// (0x00023c02) navi_text_pane_ParamLimits

0x93e0,	// (0x00023c02) navi_text_pane

0x7f90,	// (0x000227b2) status_small_wait_pane_g1

0x848b,	// (0x00022cad) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0002a137) status_small_wait_pane_g

0xac36,	// (0x00025458) navi_navi_icon_text_pane

0xac3e,	// (0x00025460) navi_navi_pane_g1_ParamLimits

0xac3e,	// (0x00025460) navi_navi_pane_g1

0xac50,	// (0x00025472) navi_navi_pane_g2_ParamLimits

0xac50,	// (0x00025472) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0002a105) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0002a105) navi_navi_pane_g

0xac62,	// (0x00025484) navi_navi_tabs_pane

0xac6b,	// (0x0002548d) navi_navi_text_pane

0xac36,	// (0x00025458) navi_navi_volume_pane

0xac12,	// (0x00025434) navi_text_pane_t1

0xac06,	// (0x00025428) navi_icon_pane_g1

0xab59,	// (0x0002537b) navi_navi_text_pane_t1

0x6dfa,	// (0x0002161c) navi_navi_volume_pane_g1

0x6e02,	// (0x00021624) volume_small_pane

0xaabf,	// (0x000252e1) navi_navi_icon_text_pane_g1

0xaac7,	// (0x000252e9) navi_navi_icon_text_pane_t1

0x93d6,	// (0x00023bf8) navi_tabs_2_long_pane

0x93d6,	// (0x00023bf8) navi_tabs_2_pane

0x93d6,	// (0x00023bf8) navi_tabs_3_long_pane

0x93d6,	// (0x00023bf8) navi_tabs_3_pane

0x93d6,	// (0x00023bf8) navi_tabs_4_pane

0x6dda,	// (0x000215fc) tabs_2_active_pane_ParamLimits

0x6dda,	// (0x000215fc) tabs_2_active_pane

0x6dea,	// (0x0002160c) tabs_2_passive_pane_ParamLimits

0x6dea,	// (0x0002160c) tabs_2_passive_pane

0x6da8,	// (0x000215ca) tabs_3_active_pane_ParamLimits

0x6da8,	// (0x000215ca) tabs_3_active_pane

0x6db8,	// (0x000215da) tabs_3_passive_pane_ParamLimits

0x6db8,	// (0x000215da) tabs_3_passive_pane

0x6dc9,	// (0x000215eb) tabs_3_passive_pane_cp_ParamLimits

0x6dc9,	// (0x000215eb) tabs_3_passive_pane_cp

0x6d64,	// (0x00021586) tabs_4_active_pane_ParamLimits

0x6d64,	// (0x00021586) tabs_4_active_pane

0x6d75,	// (0x00021597) tabs_4_passive_pane_ParamLimits

0x6d75,	// (0x00021597) tabs_4_passive_pane

0x6d86,	// (0x000215a8) tabs_4_passive_pane_cp_ParamLimits

0x6d86,	// (0x000215a8) tabs_4_passive_pane_cp

0x6d97,	// (0x000215b9) tabs_4_passive_pane_cp2_ParamLimits

0x6d97,	// (0x000215b9) tabs_4_passive_pane_cp2

0x6d40,	// (0x00021562) tabs_2_long_active_pane_ParamLimits

0x6d40,	// (0x00021562) tabs_2_long_active_pane

0x6d52,	// (0x00021574) tabs_2_long_passive_pane_ParamLimits

0x6d52,	// (0x00021574) tabs_2_long_passive_pane

0x6d07,	// (0x00021529) tabs_3_long_active_pane_ParamLimits

0x6d07,	// (0x00021529) tabs_3_long_active_pane

0x6d1a,	// (0x0002153c) tabs_3_long_passive_pane_ParamLimits

0x6d1a,	// (0x0002153c) tabs_3_long_passive_pane

0x6d2d,	// (0x0002154f) tabs_3_long_passive_pane_cp_ParamLimits

0x6d2d,	// (0x0002154f) tabs_3_long_passive_pane_cp

0x6cad,	// (0x000214cf) volume_small_pane_g1

0x6cb6,	// (0x000214d8) volume_small_pane_g2

0x6cbf,	// (0x000214e1) volume_small_pane_g3

0x6cc8,	// (0x000214ea) volume_small_pane_g4

0x6cd1,	// (0x000214f3) volume_small_pane_g5

0x6cda,	// (0x000214fc) volume_small_pane_g6

0x6ce3,	// (0x00021505) volume_small_pane_g7

0x6cec,	// (0x0002150e) volume_small_pane_g8

0x6cf5,	// (0x00021517) volume_small_pane_g9

0x6cfe,	// (0x00021520) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0002a0d1) volume_small_pane_g

0x807a,	// (0x0002289c) bg_active_tab_pane_cp2_ParamLimits

0x807a,	// (0x0002289c) bg_active_tab_pane_cp2

0x8088,	// (0x000228aa) tabs_3_active_pane_g1

0x8090,	// (0x000228b2) tabs_3_active_pane_t1

0x807a,	// (0x0002289c) bg_passive_tab_pane_cp2_ParamLimits

0x807a,	// (0x0002289c) bg_passive_tab_pane_cp2

0x8088,	// (0x000228aa) tabs_3_passive_pane_g1

0x8090,	// (0x000228b2) tabs_3_passive_pane_t1

0x807a,	// (0x0002289c) bg_active_tab_pane_cp3_ParamLimits

0x807a,	// (0x0002289c) bg_active_tab_pane_cp3

0x80a2,	// (0x000228c4) tabs_4_active_pane_g1

0x80aa,	// (0x000228cc) tabs_4_active_pane_t1

0x807a,	// (0x0002289c) bg_passive_tab_pane_cp3_ParamLimits

0x807a,	// (0x0002289c) bg_passive_tab_pane_cp3

0x80a2,	// (0x000228c4) tabs_4_1_passive_pane_g1

0x80aa,	// (0x000228cc) tabs_4_1_passive_pane_t1

0x9876,	// (0x00024098) list_highlight_pane_cp2

0xb17f,	// (0x000259a1) list_set_pane_ParamLimits

0xb17f,	// (0x000259a1) list_set_pane

0xb221,	// (0x00025a43) main_pane_set_t1_ParamLimits

0xb221,	// (0x00025a43) main_pane_set_t1

0xb241,	// (0x00025a63) main_pane_set_t2_ParamLimits

0xb241,	// (0x00025a63) main_pane_set_t2

0xb255,	// (0x00025a77) main_pane_set_t3_ParamLimits

0xb255,	// (0x00025a77) main_pane_set_t3

0xb267,	// (0x00025a89) main_pane_set_t4_ParamLimits

0xb267,	// (0x00025a89) main_pane_set_t4

0x0003,

0xf97f,	// (0x0002a1a1) main_pane_set_t_ParamLimits

0xf97f,	// (0x0002a1a1) main_pane_set_t

0xb279,	// (0x00025a9b) setting_code_pane

0xb283,	// (0x00025aa5) setting_slider_graphic_pane

0xb283,	// (0x00025aa5) setting_slider_pane

0xb283,	// (0x00025aa5) setting_text_pane

0xb283,	// (0x00025aa5) setting_volume_pane

0x5f73,	// (0x00020795) volume_set_pane

0x807a,	// (0x0002289c) bg_set_opt_pane_cp

0x5f7b,	// (0x0002079d) setting_slider_pane_t1

0x5f94,	// (0x000207b6) setting_slider_pane_t2

0x5fae,	// (0x000207d0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00029d80) setting_slider_pane_t

0x5fc6,	// (0x000207e8) slider_set_pane

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp2

0x80bc,	// (0x000228de) setting_slider_graphic_pane_g1

0x5fdc,	// (0x000207fe) setting_slider_graphic_pane_t1

0x5fec,	// (0x0002080e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00029d87) setting_slider_graphic_pane_t

0x5ffc,	// (0x0002081e) slider_set_pane_cp

0x7f9a,	// (0x000227bc) input_focus_pane_cp1

0xb13e,	// (0x00025960) list_set_text_pane

0x7f90,	// (0x000227b2) setting_text_pane_g1

0x7f9a,	// (0x000227bc) input_focus_pane_cp2

0x7f90,	// (0x000227b2) setting_code_pane_g1

0x80c5,	// (0x000228e7) setting_code_pane_t1

0x4a29,	// (0x0001f24b) set_text_pane_t1_ParamLimits

0x4a29,	// (0x0001f24b) set_text_pane_t1

0x892f,	// (0x00023151) set_opt_bg_pane_g1

0x8937,	// (0x00023159) set_opt_bg_pane_g2

0xb11e,	// (0x00025940) set_opt_bg_pane_g3

0x8947,	// (0x00023169) set_opt_bg_pane_g4

0x894f,	// (0x00023171) set_opt_bg_pane_g5

0x8957,	// (0x00023179) set_opt_bg_pane_g6

0xb126,	// (0x00025948) set_opt_bg_pane_g7

0xb12e,	// (0x00025950) set_opt_bg_pane_g8

0xb136,	// (0x00025958) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0002a18e) set_opt_bg_pane_g

0xb111,	// (0x00025933) slider_set_pane_g1

0x6e6f,	// (0x00021691) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0002a17f) slider_set_pane_g

0x6e0b,	// (0x0002162d) volume_set_pane_g1

0x6e13,	// (0x00021635) volume_set_pane_g2

0x6e1b,	// (0x0002163d) volume_set_pane_g3

0x6e23,	// (0x00021645) volume_set_pane_g4

0x6e2b,	// (0x0002164d) volume_set_pane_g5

0x6e33,	// (0x00021655) volume_set_pane_g6

0x6e3b,	// (0x0002165d) volume_set_pane_g7

0x6e43,	// (0x00021665) volume_set_pane_g8

0x6e4b,	// (0x0002166d) volume_set_pane_g9

0x6e53,	// (0x00021675) volume_set_pane_g10

0x0009,

0xf935,	// (0x0002a157) volume_set_pane_g

0x80d3,	// (0x000228f5) indicator_pane_ParamLimits

0x80d3,	// (0x000228f5) indicator_pane

0x80df,	// (0x00022901) main_idle_pane_g2_ParamLimits

0x80df,	// (0x00022901) main_idle_pane_g2

0x8107,	// (0x00022929) main_pane_idle_g1_ParamLimits

0x8107,	// (0x00022929) main_pane_idle_g1

0x8114,	// (0x00022936) popup_clock_digital_analogue_window_ParamLimits

0x8114,	// (0x00022936) popup_clock_digital_analogue_window

0x812b,	// (0x0002294d) soft_indicator_pane_ParamLimits

0x812b,	// (0x0002294d) soft_indicator_pane

0x8137,	// (0x00022959) wallpaper_pane_ParamLimits

0x8137,	// (0x00022959) wallpaper_pane

0x7f90,	// (0x000227b2) wallpaper_pane_g1

0x814b,	// (0x0002296d) indicator_pane_g1_ParamLimits

0x814b,	// (0x0002296d) indicator_pane_g1

0xb4da,	// (0x00025cfc) navi_navi_icon_text_pane_srt_g1

0x8166,	// (0x00022988) soft_indicator_pane_t1

0x8180,	// (0x000229a2) aid_ps_area_pane

0x8191,	// (0x000229b3) aid_ps_clock_pane

0x819f,	// (0x000229c1) aid_ps_indicator_pane

0x81ab,	// (0x000229cd) indicator_ps_pane_ParamLimits

0x81ab,	// (0x000229cd) indicator_ps_pane

0x81ba,	// (0x000229dc) power_save_pane_g1_ParamLimits

0x81ba,	// (0x000229dc) power_save_pane_g1

0x81c6,	// (0x000229e8) power_save_pane_g2_ParamLimits

0x81c6,	// (0x000229e8) power_save_pane_g2

0x5b92,	// (0x000203b4) aid_navinavi_width_pane

0x8180,	// (0x000229a2) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00029d8c) power_save_pane_g_ParamLimits

0xf56a,	// (0x00029d8c) power_save_pane_g

0x81d4,	// (0x000229f6) power_save_pane_t1_ParamLimits

0x81d4,	// (0x000229f6) power_save_pane_t1

0x8191,	// (0x000229b3) aid_ps_clock_pane_ParamLimits

0x819f,	// (0x000229c1) aid_ps_indicator_pane_ParamLimits

0x81e6,	// (0x00022a08) power_save_pane_t4_ParamLimits

0x81e6,	// (0x00022a08) power_save_pane_t4

0x0001,

0xf56f,	// (0x00029d91) power_save_pane_t_ParamLimits

0xf56f,	// (0x00029d91) power_save_pane_t

0x8210,	// (0x00022a32) power_save_t3_ParamLimits

0x8210,	// (0x00022a32) power_save_t3

0x81fb,	// (0x00022a1d) power_save_t2_ParamLimits

0x81fb,	// (0x00022a1d) power_save_t2

0x8225,	// (0x00022a47) indicator_ps_pane_g1

0x822e,	// (0x00022a50) ai_gene_pane_ParamLimits

0x822e,	// (0x00022a50) ai_gene_pane

0x823a,	// (0x00022a5c) ai_links_pane_ParamLimits

0x823a,	// (0x00022a5c) ai_links_pane

0x8246,	// (0x00022a68) indicator_pane_cp1_ParamLimits

0x8246,	// (0x00022a68) indicator_pane_cp1

0x8252,	// (0x00022a74) main_pane_idle_g1_cp_ParamLimits

0x8252,	// (0x00022a74) main_pane_idle_g1_cp

0x825e,	// (0x00022a80) popup_ai_links_title_window

0x8267,	// (0x00022a89) soft_indicator_pane_cp1_ParamLimits

0x8267,	// (0x00022a89) soft_indicator_pane_cp1

0xaefd,	// (0x0002571f) ai_links_pane_g1

0xaf06,	// (0x00025728) grid_ai_links_pane

0xaee0,	// (0x00025702) ai_gene_pane_1

0xaeeb,	// (0x0002570d) ai_gene_pane_2

0xaef4,	// (0x00025716) list_highlight_pane_cp4

0xaec4,	// (0x000256e6) cell_ai_link_pane_ParamLimits

0xaec4,	// (0x000256e6) cell_ai_link_pane

0xaebc,	// (0x000256de) cell_ai_link_pane_g1

0x848b,	// (0x00022cad) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0002a132) cell_ai_link_pane_g

0x7f9a,	// (0x000227bc) grid_highlight_cp2

0x7f9a,	// (0x000227bc) bg_popup_sub_pane_cp1

0x8281,	// (0x00022aa3) popup_ai_links_title_window_t1

0xae0c,	// (0x0002562e) ai_gene_pane_1_g1_ParamLimits

0xae0c,	// (0x0002562e) ai_gene_pane_1_g1

0xae18,	// (0x0002563a) ai_gene_pane_1_g2_ParamLimits

0xae18,	// (0x0002563a) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0002a128) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0002a128) ai_gene_pane_1_g

0xae25,	// (0x00025647) ai_gene_pane_1_t1_ParamLimits

0xae25,	// (0x00025647) ai_gene_pane_1_t1

0xae59,	// (0x0002567b) grid_ai_soft_ind_pane

0xadf7,	// (0x00025619) ai_gene_pane_2_t1_ParamLimits

0xadf7,	// (0x00025619) ai_gene_pane_2_t1

0x8290,	// (0x00022ab2) main_pane_empty_t1_ParamLimits

0x8290,	// (0x00022ab2) main_pane_empty_t1

0x82a8,	// (0x00022aca) main_pane_empty_t2_ParamLimits

0x82a8,	// (0x00022aca) main_pane_empty_t2

0x82bd,	// (0x00022adf) main_pane_empty_t3_ParamLimits

0x82bd,	// (0x00022adf) main_pane_empty_t3

0x82cf,	// (0x00022af1) main_pane_empty_t4_ParamLimits

0x82cf,	// (0x00022af1) main_pane_empty_t4

0x82e1,	// (0x00022b03) main_pane_empty_t5_ParamLimits

0x82e1,	// (0x00022b03) main_pane_empty_t5

0x0004,

0xf574,	// (0x00029d96) main_pane_empty_t_ParamLimits

0xf574,	// (0x00029d96) main_pane_empty_t

0x8980,	// (0x000231a2) bg_popup_window_pane_ParamLimits

0x8980,	// (0x000231a2) bg_popup_window_pane

0xab67,	// (0x00025389) find_popup_pane_cp2_ParamLimits

0xab67,	// (0x00025389) find_popup_pane_cp2

0xab73,	// (0x00025395) heading_pane_ParamLimits

0xab73,	// (0x00025395) heading_pane

0x7f9a,	// (0x000227bc) bg_popup_sub_pane

0xaae1,	// (0x00025303) bg_popup_window_pane_g1_ParamLimits

0xaae1,	// (0x00025303) bg_popup_window_pane_g1

0xaaed,	// (0x0002530f) bg_popup_window_pane_g2_ParamLimits

0xaaed,	// (0x0002530f) bg_popup_window_pane_g2

0xaaf9,	// (0x0002531b) bg_popup_window_pane_g3_ParamLimits

0xaaf9,	// (0x0002531b) bg_popup_window_pane_g3

0xab05,	// (0x00025327) bg_popup_window_pane_g4_ParamLimits

0xab05,	// (0x00025327) bg_popup_window_pane_g4

0xab11,	// (0x00025333) bg_popup_window_pane_g5_ParamLimits

0xab11,	// (0x00025333) bg_popup_window_pane_g5

0xab1d,	// (0x0002533f) bg_popup_window_pane_g6_ParamLimits

0xab1d,	// (0x0002533f) bg_popup_window_pane_g6

0xab29,	// (0x0002534b) bg_popup_window_pane_g7_ParamLimits

0xab29,	// (0x0002534b) bg_popup_window_pane_g7

0xab35,	// (0x00025357) bg_popup_window_pane_g8_ParamLimits

0xab35,	// (0x00025357) bg_popup_window_pane_g8

0xab41,	// (0x00025363) bg_popup_window_pane_g9_ParamLimits

0xab41,	// (0x00025363) bg_popup_window_pane_g9

0xab4d,	// (0x0002536f) bg_popup_window_pane_g10_ParamLimits

0xab4d,	// (0x0002536f) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0002a0f0) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0002a0f0) bg_popup_window_pane_g

0xaa76,	// (0x00025298) bg_popup_heading_pane_ParamLimits

0xaa76,	// (0x00025298) bg_popup_heading_pane

0x6ef7,	// (0x00021719) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ef7,	// (0x00021719) tabs_4_passive_pane_cp_srt

0x6f09,	// (0x0002172b) tabs_4_passive_pane_srt_ParamLimits

0xaa8a,	// (0x000252ac) heading_pane_g2

0x6f09,	// (0x0002172b) tabs_4_passive_pane_srt

0x9876,	// (0x00024098) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9876,	// (0x00024098) bg_passive_tab_pane_cp3_srt

0xaa92,	// (0x000252b4) heading_pane_t1_ParamLimits

0xaa92,	// (0x000252b4) heading_pane_t1

0xaaa9,	// (0x000252cb) heading_pane_t2_ParamLimits

0xaaa9,	// (0x000252cb) heading_pane_t2

0x0001,

0xf8c9,	// (0x0002a0eb) heading_pane_t_ParamLimits

0xf8c9,	// (0x0002a0eb) heading_pane_t

0xa5a3,	// (0x00024dc5) bg_popup_heading_pane_g1

0xa652,	// (0x00024e74) bg_popup_heading_pane_g2

0xa65c,	// (0x00024e7e) bg_popup_heading_pane_g3

0xa666,	// (0x00024e88) bg_popup_heading_pane_g4

0xa670,	// (0x00024e92) bg_popup_heading_pane_g5

0xa67a,	// (0x00024e9c) bg_popup_heading_pane_g6

0xa682,	// (0x00024ea4) bg_popup_heading_pane_g7

0xa68a,	// (0x00024eac) bg_popup_heading_pane_g8

0xa694,	// (0x00024eb6) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0002a0a7) bg_popup_heading_pane_g

0x9d74,	// (0x00024596) bg_popup_sub_pane_g1

0x9d7c,	// (0x0002459e) bg_popup_sub_pane_g2

0x9d84,	// (0x000245a6) bg_popup_sub_pane_g3

0x9d8c,	// (0x000245ae) bg_popup_sub_pane_g4

0x9d94,	// (0x000245b6) bg_popup_sub_pane_g5

0x9d9c,	// (0x000245be) bg_popup_sub_pane_g6

0x9da4,	// (0x000245c6) bg_popup_sub_pane_g7

0x9dac,	// (0x000245ce) bg_popup_sub_pane_g8

0x9db4,	// (0x000245d6) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0002a081) bg_popup_sub_pane_g

0x82f5,	// (0x00022b17) bg_popup_window_pane_cp5_ParamLimits

0x82f5,	// (0x00022b17) bg_popup_window_pane_cp5

0x8311,	// (0x00022b33) popup_note_window_g1_ParamLimits

0x8311,	// (0x00022b33) popup_note_window_g1

0x831d,	// (0x00022b3f) popup_note_window_t1_ParamLimits

0x831d,	// (0x00022b3f) popup_note_window_t1

0x832f,	// (0x00022b51) popup_note_window_t2_ParamLimits

0x832f,	// (0x00022b51) popup_note_window_t2

0x8341,	// (0x00022b63) popup_note_window_t3_ParamLimits

0x8341,	// (0x00022b63) popup_note_window_t3

0x8353,	// (0x00022b75) popup_note_window_t4_ParamLimits

0x8353,	// (0x00022b75) popup_note_window_t4

0x837b,	// (0x00022b9d) popup_note_window_t5_ParamLimits

0x837b,	// (0x00022b9d) popup_note_window_t5

0x0004,

0xf57f,	// (0x00029da1) popup_note_window_t_ParamLimits

0xf57f,	// (0x00029da1) popup_note_window_t

0x839f,	// (0x00022bc1) bg_popup_window_pane_cp6_ParamLimits

0x839f,	// (0x00022bc1) bg_popup_window_pane_cp6

0xa517,	// (0x00024d39) popup_note_image_window_g1_ParamLimits

0xa517,	// (0x00024d39) popup_note_image_window_g1

0xa523,	// (0x00024d45) popup_note_image_window_g2_ParamLimits

0xa523,	// (0x00024d45) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0002a075) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0002a075) popup_note_image_window_g

0xa53c,	// (0x00024d5e) popup_note_image_window_t1_ParamLimits

0xa53c,	// (0x00024d5e) popup_note_image_window_t1

0xa555,	// (0x00024d77) popup_note_image_window_t2_ParamLimits

0xa555,	// (0x00024d77) popup_note_image_window_t2

0xa56e,	// (0x00024d90) popup_note_image_window_t3_ParamLimits

0xa56e,	// (0x00024d90) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0002a07a) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0002a07a) popup_note_image_window_t

0xa3d8,	// (0x00024bfa) bg_popup_window_pane_cp7_ParamLimits

0xa3d8,	// (0x00024bfa) bg_popup_window_pane_cp7

0xa408,	// (0x00024c2a) popup_note_wait_window_g1_ParamLimits

0xa408,	// (0x00024c2a) popup_note_wait_window_g1

0xa414,	// (0x00024c36) popup_note_wait_window_g2_ParamLimits

0xa414,	// (0x00024c36) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0002a063) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0002a063) popup_note_wait_window_g

0xa42c,	// (0x00024c4e) popup_note_wait_window_t1_ParamLimits

0xa42c,	// (0x00024c4e) popup_note_wait_window_t1

0xa453,	// (0x00024c75) popup_note_wait_window_t2_ParamLimits

0xa453,	// (0x00024c75) popup_note_wait_window_t2

0xa470,	// (0x00024c92) popup_note_wait_window_t3_ParamLimits

0xa470,	// (0x00024c92) popup_note_wait_window_t3

0xa483,	// (0x00024ca5) popup_note_wait_window_t4_ParamLimits

0xa483,	// (0x00024ca5) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0002a06a) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0002a06a) popup_note_wait_window_t

0xa4a8,	// (0x00024cca) wait_bar_pane_ParamLimits

0xa4a8,	// (0x00024cca) wait_bar_pane

0x7f9a,	// (0x000227bc) wait_anim_pane

0x7f9a,	// (0x000227bc) wait_border_pane

0x7f90,	// (0x000227b2) wait_anim_pane_g1

0x7f90,	// (0x000227b2) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00029f25) wait_anim_pane_g

0xa37c,	// (0x00024b9e) wait_border_pane_g1

0xa387,	// (0x00024ba9) wait_border_pane_g2

0xa390,	// (0x00024bb2) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0002a05c) wait_border_pane_g

0xa1ec,	// (0x00024a0e) bg_popup_window_pane_cp16_ParamLimits

0xa1ec,	// (0x00024a0e) bg_popup_window_pane_cp16

0xa2ec,	// (0x00024b0e) indicator_popup_pane_cp4_ParamLimits

0xa2ec,	// (0x00024b0e) indicator_popup_pane_cp4

0xa300,	// (0x00024b22) popup_query_data_window_t1_ParamLimits

0xa300,	// (0x00024b22) popup_query_data_window_t1

0xa312,	// (0x00024b34) popup_query_data_window_t2_ParamLimits

0xa312,	// (0x00024b34) popup_query_data_window_t2

0xa32b,	// (0x00024b4d) popup_query_data_window_t3_ParamLimits

0xa32b,	// (0x00024b4d) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0002a055) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0002a055) popup_query_data_window_t

0xa345,	// (0x00024b67) query_popup_data_pane_ParamLimits

0xa345,	// (0x00024b67) query_popup_data_pane

0xa359,	// (0x00024b7b) query_popup_data_pane_cp1_ParamLimits

0xa359,	// (0x00024b7b) query_popup_data_pane_cp1

0xa1ec,	// (0x00024a0e) bg_popup_window_pane_cp10_ParamLimits

0xa1ec,	// (0x00024a0e) bg_popup_window_pane_cp10

0xa21e,	// (0x00024a40) indicator_popup_pane_ParamLimits

0xa21e,	// (0x00024a40) indicator_popup_pane

0xa240,	// (0x00024a62) popup_query_code_window_t1_ParamLimits

0xa240,	// (0x00024a62) popup_query_code_window_t1

0xa25a,	// (0x00024a7c) popup_query_code_window_t2_ParamLimits

0xa25a,	// (0x00024a7c) popup_query_code_window_t2

0xa2a3,	// (0x00024ac5) popup_query_code_window_t3_ParamLimits

0xa2a3,	// (0x00024ac5) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0002a04e) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0002a04e) popup_query_code_window_t

0xa2d2,	// (0x00024af4) query_popup_pane_ParamLimits

0xa2d2,	// (0x00024af4) query_popup_pane

0x839f,	// (0x00022bc1) bg_popup_window_pane_cp15_ParamLimits

0x839f,	// (0x00022bc1) bg_popup_window_pane_cp15

0x83bd,	// (0x00022bdf) indicator_popup_pane_cp1_ParamLimits

0x83bd,	// (0x00022bdf) indicator_popup_pane_cp1

0x83d0,	// (0x00022bf2) indicator_popup_pane_cp2_ParamLimits

0x83d0,	// (0x00022bf2) indicator_popup_pane_cp2

0x83e3,	// (0x00022c05) popup_query_data_code_window_g1_ParamLimits

0x83e3,	// (0x00022c05) popup_query_data_code_window_g1

0x83f6,	// (0x00022c18) popup_query_data_code_window_t1_ParamLimits

0x83f6,	// (0x00022c18) popup_query_data_code_window_t1

0x8408,	// (0x00022c2a) popup_query_data_code_window_t2_ParamLimits

0x8408,	// (0x00022c2a) popup_query_data_code_window_t2

0x841a,	// (0x00022c3c) popup_query_data_code_window_t3_ParamLimits

0x841a,	// (0x00022c3c) popup_query_data_code_window_t3

0x8430,	// (0x00022c52) popup_query_data_code_window_t4_ParamLimits

0x8430,	// (0x00022c52) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00029dac) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00029dac) popup_query_data_code_window_t

0x9378,	// (0x00023b9a) list_single_midp_graphic_pane_g3

0x8448,	// (0x00022c6a) query_popup_data_pane_cp2_ParamLimits

0x845b,	// (0x00022c7d) query_popup_pane_cp2_ParamLimits

0x845b,	// (0x00022c7d) query_popup_pane_cp2

0x7f9a,	// (0x000227bc) bg_popup_window_pane_cp11

0xa1e4,	// (0x00024a06) heading_pane_cp5

0x8546,	// (0x00022d68) listscroll_popup_info_pane

0x7f9a,	// (0x000227bc) input_focus_pane_cp3

0x846e,	// (0x00022c90) query_popup_pane_t1

0x847c,	// (0x00022c9e) list_popup_info_pane_ParamLimits

0x847c,	// (0x00022c9e) list_popup_info_pane

0x848b,	// (0x00022cad) listscroll_popup_info_pane_g1

0x8493,	// (0x00022cb5) scroll_pane_cp7

0x849d,	// (0x00022cbf) popup_info_list_pane_t1_ParamLimits

0x849d,	// (0x00022cbf) popup_info_list_pane_t1

0x84b7,	// (0x00022cd9) popup_info_list_pane_t2_ParamLimits

0x84b7,	// (0x00022cd9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00029db5) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00029db5) popup_info_list_pane_t

0x7f9a,	// (0x000227bc) bg_popup_window_pane_cp12

0xb4f4,	// (0x00025d16) find_popup_pane

0x807a,	// (0x0002289c) bg_popup_window_pane_cp3

0x84d1,	// (0x00022cf3) heading_pane_cp3

0x84dd,	// (0x00022cff) listscroll_popup_graphic_pane

0x7f9a,	// (0x000227bc) bg_popup_window_pane_cp4

0x853c,	// (0x00022d5e) heading_pane_cp4

0x8546,	// (0x00022d68) listscroll_popup_colour_pane

0x854e,	// (0x00022d70) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x854e,	// (0x00022d70) cell_large_graphic_colour_none_popup_pane

0x8562,	// (0x00022d84) grid_large_graphic_colour_popup_pane_ParamLimits

0x8562,	// (0x00022d84) grid_large_graphic_colour_popup_pane

0x858a,	// (0x00022dac) listscroll_popup_colour_pane_g1_ParamLimits

0x858a,	// (0x00022dac) listscroll_popup_colour_pane_g1

0x85a1,	// (0x00022dc3) listscroll_popup_colour_pane_g2_ParamLimits

0x85a1,	// (0x00022dc3) listscroll_popup_colour_pane_g2

0x85b8,	// (0x00022dda) listscroll_popup_colour_pane_g3_ParamLimits

0x85b8,	// (0x00022dda) listscroll_popup_colour_pane_g3

0x85c8,	// (0x00022dea) listscroll_popup_colour_pane_g4_ParamLimits

0x85c8,	// (0x00022dea) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00029dba) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00029dba) listscroll_popup_colour_pane_g

0x85d7,	// (0x00022df9) scroll_pane_cp6_ParamLimits

0x85d7,	// (0x00022df9) scroll_pane_cp6

0x85e9,	// (0x00022e0b) cell_large_graphic_colour_popup_pane_ParamLimits

0x85e9,	// (0x00022e0b) cell_large_graphic_colour_popup_pane

0x8608,	// (0x00022e2a) cell_large_graphic_colour_none_popup_pane_t1

0x7f9a,	// (0x000227bc) grid_highlight_pane_cp5

0x8617,	// (0x00022e39) cell_large_graphic_colour_popup_pane_g1

0x861f,	// (0x00022e41) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00029dc3) cell_large_graphic_colour_popup_pane_g

0x8627,	// (0x00022e49) cell_large_graphic_colour_popup_pane_g2_copy1

0x8630,	// (0x00022e52) grid_highlight_pane_cp4

0x8638,	// (0x00022e5a) bg_popup_window_pane_cp8_ParamLimits

0x8638,	// (0x00022e5a) bg_popup_window_pane_cp8

0x8653,	// (0x00022e75) popup_snote_single_text_window_g1_ParamLimits

0x8653,	// (0x00022e75) popup_snote_single_text_window_g1

0x8665,	// (0x00022e87) popup_snote_single_text_window_t1_ParamLimits

0x8665,	// (0x00022e87) popup_snote_single_text_window_t1

0x8678,	// (0x00022e9a) popup_snote_single_text_window_t2_ParamLimits

0x8678,	// (0x00022e9a) popup_snote_single_text_window_t2

0x868b,	// (0x00022ead) popup_snote_single_text_window_t3_ParamLimits

0x868b,	// (0x00022ead) popup_snote_single_text_window_t3

0x86c4,	// (0x00022ee6) popup_snote_single_text_window_t4_ParamLimits

0x86c4,	// (0x00022ee6) popup_snote_single_text_window_t4

0x86f8,	// (0x00022f1a) popup_snote_single_text_window_t5_ParamLimits

0x86f8,	// (0x00022f1a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00029dc8) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00029dc8) popup_snote_single_text_window_t

0x8727,	// (0x00022f49) bg_popup_window_pane_cp9_ParamLimits

0x8727,	// (0x00022f49) bg_popup_window_pane_cp9

0x8653,	// (0x00022e75) popup_snote_single_graphic_window_g1_ParamLimits

0x8653,	// (0x00022e75) popup_snote_single_graphic_window_g1

0x8735,	// (0x00022f57) popup_snote_single_graphic_window_g2_ParamLimits

0x8735,	// (0x00022f57) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00029dd3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00029dd3) popup_snote_single_graphic_window_g

0x8741,	// (0x00022f63) popup_snote_single_graphic_window_t1_ParamLimits

0x8741,	// (0x00022f63) popup_snote_single_graphic_window_t1

0x8754,	// (0x00022f76) popup_snote_single_graphic_window_t2_ParamLimits

0x8754,	// (0x00022f76) popup_snote_single_graphic_window_t2

0x8767,	// (0x00022f89) popup_snote_single_graphic_window_t3_ParamLimits

0x8767,	// (0x00022f89) popup_snote_single_graphic_window_t3

0x87a0,	// (0x00022fc2) popup_snote_single_graphic_window_t4_ParamLimits

0x87a0,	// (0x00022fc2) popup_snote_single_graphic_window_t4

0x87d4,	// (0x00022ff6) popup_snote_single_graphic_window_t5_ParamLimits

0x87d4,	// (0x00022ff6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00029dd8) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00029dd8) popup_snote_single_graphic_window_t

0xb437,	// (0x00025c59) grid_graphic_popup_pane_ParamLimits

0xb437,	// (0x00025c59) grid_graphic_popup_pane

0xb460,	// (0x00025c82) listscroll_popup_graphic_pane_g1_ParamLimits

0xb460,	// (0x00025c82) listscroll_popup_graphic_pane_g1

0xb474,	// (0x00025c96) listscroll_popup_graphic_pane_g2_ParamLimits

0xb474,	// (0x00025c96) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0002a1cb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0002a1cb) listscroll_popup_graphic_pane_g

0xb488,	// (0x00025caa) scroll_pane_cp5

0xb3d7,	// (0x00025bf9) cell_graphic_popup_pane_ParamLimits

0xb3d7,	// (0x00025bf9) cell_graphic_popup_pane

0xb3b8,	// (0x00025bda) cell_graphic_popup_pane_g1

0xb3c0,	// (0x00025be2) cell_graphic_popup_pane_g2

0x8627,	// (0x00022e49) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0002a1c4) cell_graphic_popup_pane_g

0xb3c9,	// (0x00025beb) cell_graphic_popup_pane_t2

0x8630,	// (0x00022e52) grid_highlight_pane_cp3

0x8815,	// (0x00023037) list_gen_pane_ParamLimits

0x8815,	// (0x00023037) list_gen_pane

0x8847,	// (0x00023069) scroll_pane

0xb31a,	// (0x00025b3c) bg_list_pane_g1_ParamLimits

0xb31a,	// (0x00025b3c) bg_list_pane_g1

0xb335,	// (0x00025b57) bg_list_pane_g2_ParamLimits

0xb335,	// (0x00025b57) bg_list_pane_g2

0xb348,	// (0x00025b6a) bg_list_pane_g3_ParamLimits

0xb348,	// (0x00025b6a) bg_list_pane_g3

0xb35a,	// (0x00025b7c) bg_list_pane_g4_ParamLimits

0xb35a,	// (0x00025b7c) bg_list_pane_g4

0xb36c,	// (0x00025b8e) bg_list_pane_g5_ParamLimits

0xb36c,	// (0x00025b8e) bg_list_pane_g5

0x0004,

0xf997,	// (0x0002a1b9) bg_list_pane_g_ParamLimits

0xf997,	// (0x0002a1b9) bg_list_pane_g

0x538d,	// (0x0001fbaf) list_double2_graphic_large_graphic_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double2_graphic_large_graphic_pane

0x538d,	// (0x0001fbaf) list_double2_graphic_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double2_graphic_pane

0x538d,	// (0x0001fbaf) list_double2_large_graphic_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double2_large_graphic_pane

0x538d,	// (0x0001fbaf) list_double2_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double2_pane

0x538d,	// (0x0001fbaf) list_double_graphic_heading_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_graphic_heading_pane

0x538d,	// (0x0001fbaf) list_double_graphic_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_graphic_pane

0x538d,	// (0x0001fbaf) list_double_heading_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_heading_pane

0x538d,	// (0x0001fbaf) list_double_large_graphic_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_large_graphic_pane

0x538d,	// (0x0001fbaf) list_double_number_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_number_pane

0x538d,	// (0x0001fbaf) list_double_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_pane

0x538d,	// (0x0001fbaf) list_double_time_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_double_time_pane

0x538d,	// (0x0001fbaf) list_setting_number_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_setting_number_pane

0x538d,	// (0x0001fbaf) list_setting_pane_ParamLimits

0x538d,	// (0x0001fbaf) list_setting_pane

0x53ef,	// (0x0001fc11) list_single_2graphic_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_2graphic_pane

0x53ef,	// (0x0001fc11) list_single_graphic_heading_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_graphic_heading_pane

0x53ef,	// (0x0001fc11) list_single_graphic_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_graphic_pane

0x53ef,	// (0x0001fc11) list_single_heading_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_heading_pane

0x5478,	// (0x0001fc9a) list_single_large_graphic_pane_ParamLimits

0x5478,	// (0x0001fc9a) list_single_large_graphic_pane

0x53ef,	// (0x0001fc11) list_single_number_heading_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_number_heading_pane

0x53ef,	// (0x0001fc11) list_single_number_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_number_pane

0x53ef,	// (0x0001fc11) list_single_pane_ParamLimits

0x53ef,	// (0x0001fc11) list_single_pane

0x7f9a,	// (0x000227bc) list_highlight_pane_cp1

0x4a4f,	// (0x0001f271) list_single_pane_g1_ParamLimits

0x4a4f,	// (0x0001f271) list_single_pane_g1

0x4a5b,	// (0x0001f27d) list_single_pane_g2_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00029dea) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00029dea) list_single_pane_g

0x5377,	// (0x0001fb99) list_single_pane_t1_ParamLimits

0x5377,	// (0x0001fb99) list_single_pane_t1

0x4a4f,	// (0x0001f271) list_single_number_pane_g1_ParamLimits

0x4a4f,	// (0x0001f271) list_single_number_pane_g1

0x4a5b,	// (0x0001f27d) list_single_number_pane_g2_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00029dea) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00029dea) list_single_number_pane_g

0x5321,	// (0x0001fb43) list_single_number_pane_t1_ParamLimits

0x5321,	// (0x0001fb43) list_single_number_pane_t1

0x5337,	// (0x0001fb59) list_single_number_pane_t2_ParamLimits

0x5337,	// (0x0001fb59) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0002a17a) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0002a17a) list_single_number_pane_t

0x4a43,	// (0x0001f265) list_single_graphic_pane_g1_ParamLimits

0x4a43,	// (0x0001f265) list_single_graphic_pane_g1

0x4a4f,	// (0x0001f271) list_single_graphic_pane_g2_ParamLimits

0x4a4f,	// (0x0001f271) list_single_graphic_pane_g2

0x4a5b,	// (0x0001f27d) list_single_graphic_pane_g3_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00029de3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00029de3) list_single_graphic_pane_g

0x4a67,	// (0x0001f289) list_single_graphic_pane_t1_ParamLimits

0x4a67,	// (0x0001f289) list_single_graphic_pane_t1

0x4a4f,	// (0x0001f271) list_single_heading_pane_g1_ParamLimits

0x4a4f,	// (0x0001f271) list_single_heading_pane_g1

0x4a5b,	// (0x0001f27d) list_single_heading_pane_g2_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029dea) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029dea) list_single_heading_pane_g

0x4a7d,	// (0x0001f29f) list_single_heading_pane_t1_ParamLimits

0x4a7d,	// (0x0001f29f) list_single_heading_pane_t1

0x4a93,	// (0x0001f2b5) list_single_heading_pane_t2_ParamLimits

0x4a93,	// (0x0001f2b5) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00029def) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00029def) list_single_heading_pane_t

0x4a4f,	// (0x0001f271) list_single_number_heading_pane_g1_ParamLimits

0x4a4f,	// (0x0001f271) list_single_number_heading_pane_g1

0x4a5b,	// (0x0001f27d) list_single_number_heading_pane_g2_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00029dea) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00029dea) list_single_number_heading_pane_g

0x4a7d,	// (0x0001f29f) list_single_number_heading_pane_t1_ParamLimits

0x4a7d,	// (0x0001f29f) list_single_number_heading_pane_t1

0x4aa5,	// (0x0001f2c7) list_single_number_heading_pane_t2_ParamLimits

0x4aa5,	// (0x0001f2c7) list_single_number_heading_pane_t2

0x4ab7,	// (0x0001f2d9) list_single_number_heading_pane_t3_ParamLimits

0x4ab7,	// (0x0001f2d9) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00029df4) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00029df4) list_single_number_heading_pane_t

0x4ac9,	// (0x0001f2eb) list_single_graphic_heading_pane_g1_ParamLimits

0x4ac9,	// (0x0001f2eb) list_single_graphic_heading_pane_g1

0x4ad5,	// (0x0001f2f7) list_single_graphic_heading_pane_g4_ParamLimits

0x4ad5,	// (0x0001f2f7) list_single_graphic_heading_pane_g4

0x4a5b,	// (0x0001f27d) list_single_graphic_heading_pane_g5_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00029dfb) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00029dfb) list_single_graphic_heading_pane_g

0x4a7d,	// (0x0001f29f) list_single_graphic_heading_pane_t1_ParamLimits

0x4a7d,	// (0x0001f29f) list_single_graphic_heading_pane_t1

0x4ae6,	// (0x0001f308) list_single_graphic_heading_pane_t2_ParamLimits

0x4ae6,	// (0x0001f308) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00029e02) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00029e02) list_single_graphic_heading_pane_t

0x4af8,	// (0x0001f31a) list_single_large_graphic_pane_g1_ParamLimits

0x4af8,	// (0x0001f31a) list_single_large_graphic_pane_g1

0x4b04,	// (0x0001f326) list_single_large_graphic_pane_g2_ParamLimits

0x4b04,	// (0x0001f326) list_single_large_graphic_pane_g2

0x4b10,	// (0x0001f332) list_single_large_graphic_pane_g3_ParamLimits

0x4b10,	// (0x0001f332) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00029e07) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00029e07) list_single_large_graphic_pane_g

0xa387,	// (0x00024ba9) wait_border_pane_g2_copy1

0x4b1c,	// (0x0001f33e) list_single_large_graphic_pane_g4_cp2

0x4b24,	// (0x0001f346) list_single_large_graphic_pane_t1_ParamLimits

0x4b24,	// (0x0001f346) list_single_large_graphic_pane_t1

0x4b3a,	// (0x0001f35c) list_double_pane_g1_ParamLimits

0x4b3a,	// (0x0001f35c) list_double_pane_g1

0x4b46,	// (0x0001f368) list_double_pane_g2_ParamLimits

0x4b46,	// (0x0001f368) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00029e0e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00029e0e) list_double_pane_g

0x4b52,	// (0x0001f374) list_double_pane_t1_ParamLimits

0x4b52,	// (0x0001f374) list_double_pane_t1

0x4b68,	// (0x0001f38a) list_double_pane_t2_ParamLimits

0x4b68,	// (0x0001f38a) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00029e13) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00029e13) list_double_pane_t

0x4b7a,	// (0x0001f39c) list_double2_pane_g1_ParamLimits

0x4b7a,	// (0x0001f39c) list_double2_pane_g1

0x4b8b,	// (0x0001f3ad) list_double2_pane_g2_ParamLimits

0x4b8b,	// (0x0001f3ad) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00029e18) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00029e18) list_double2_pane_g

0x4b97,	// (0x0001f3b9) list_double2_pane_t1_ParamLimits

0x4b97,	// (0x0001f3b9) list_double2_pane_t1

0x4bad,	// (0x0001f3cf) list_double2_pane_t2_ParamLimits

0x4bad,	// (0x0001f3cf) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00029e1d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00029e1d) list_double2_pane_t

0x4b3a,	// (0x0001f35c) list_double_number_pane_g1_ParamLimits

0x4b3a,	// (0x0001f35c) list_double_number_pane_g1

0x4b46,	// (0x0001f368) list_double_number_pane_g2_ParamLimits

0x4b46,	// (0x0001f368) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00029e0e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00029e0e) list_double_number_pane_g

0x4bbf,	// (0x0001f3e1) list_double_number_pane_t1_ParamLimits

0x4bbf,	// (0x0001f3e1) list_double_number_pane_t1

0x4bd1,	// (0x0001f3f3) list_double_number_pane_t2_ParamLimits

0x4bd1,	// (0x0001f3f3) list_double_number_pane_t2

0x4be7,	// (0x0001f409) list_double_number_pane_t3_ParamLimits

0x4be7,	// (0x0001f409) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00029e22) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00029e22) list_double_number_pane_t

0x4bf9,	// (0x0001f41b) list_double_graphic_pane_g1_ParamLimits

0x4bf9,	// (0x0001f41b) list_double_graphic_pane_g1

0x4c05,	// (0x0001f427) list_double_graphic_pane_g2_ParamLimits

0x4c05,	// (0x0001f427) list_double_graphic_pane_g2

0x4c14,	// (0x0001f436) list_double_graphic_pane_g3_ParamLimits

0x4c14,	// (0x0001f436) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00029e29) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00029e29) list_double_graphic_pane_g

0x4c2c,	// (0x0001f44e) list_double_graphic_pane_t1_ParamLimits

0x4c2c,	// (0x0001f44e) list_double_graphic_pane_t1

0x4c42,	// (0x0001f464) list_double_graphic_pane_t2_ParamLimits

0x4c42,	// (0x0001f464) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00029e32) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00029e32) list_double_graphic_pane_t

0x4c54,	// (0x0001f476) list_double2_graphic_pane_g1_ParamLimits

0x4c54,	// (0x0001f476) list_double2_graphic_pane_g1

0x4b3a,	// (0x0001f35c) list_double2_graphic_pane_g2_ParamLimits

0x4b3a,	// (0x0001f35c) list_double2_graphic_pane_g2

0x4b46,	// (0x0001f368) list_double2_graphic_pane_g3_ParamLimits

0x4b46,	// (0x0001f368) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00029e37) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00029e37) list_double2_graphic_pane_g

0x4c60,	// (0x0001f482) list_double2_graphic_pane_t1_ParamLimits

0x4c60,	// (0x0001f482) list_double2_graphic_pane_t1

0x4c76,	// (0x0001f498) list_double2_graphic_pane_t2_ParamLimits

0x4c76,	// (0x0001f498) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00029e3e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00029e3e) list_double2_graphic_pane_t

0x4c88,	// (0x0001f4aa) list_double_large_graphic_pane_g1_ParamLimits

0x4c88,	// (0x0001f4aa) list_double_large_graphic_pane_g1

0x4ca7,	// (0x0001f4c9) list_double_large_graphic_pane_g2_ParamLimits

0x4ca7,	// (0x0001f4c9) list_double_large_graphic_pane_g2

0x4b46,	// (0x0001f368) list_double_large_graphic_pane_g3_ParamLimits

0x4b46,	// (0x0001f368) list_double_large_graphic_pane_g3

0x4cb8,	// (0x0001f4da) list_double_large_graphic_pane_g4_ParamLimits

0x4cb8,	// (0x0001f4da) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00029e43) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00029e43) list_double_large_graphic_pane_g

0x4ce0,	// (0x0001f502) list_double_large_graphic_pane_t1_ParamLimits

0x4ce0,	// (0x0001f502) list_double_large_graphic_pane_t1

0x4cf9,	// (0x0001f51b) list_double_large_graphic_pane_t2_ParamLimits

0x4cf9,	// (0x0001f51b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029e4e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029e4e) list_double_large_graphic_pane_t

0x4d0b,	// (0x0001f52d) list_double2_large_graphic_pane_g1_ParamLimits

0x4d0b,	// (0x0001f52d) list_double2_large_graphic_pane_g1

0x4b7a,	// (0x0001f39c) list_double2_large_graphic_pane_g2_ParamLimits

0x4b7a,	// (0x0001f39c) list_double2_large_graphic_pane_g2

0x4b8b,	// (0x0001f3ad) list_double2_large_graphic_pane_g3_ParamLimits

0x4b8b,	// (0x0001f3ad) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00029e53) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00029e53) list_double2_large_graphic_pane_g

0x4d17,	// (0x0001f539) list_double2_large_graphic_pane_t1_ParamLimits

0x4d17,	// (0x0001f539) list_double2_large_graphic_pane_t1

0x4d2d,	// (0x0001f54f) list_double2_large_graphic_pane_t2_ParamLimits

0x4d2d,	// (0x0001f54f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00029e5a) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00029e5a) list_double2_large_graphic_pane_t

0x4d3f,	// (0x0001f561) list_double_heading_pane_g1_ParamLimits

0x4d3f,	// (0x0001f561) list_double_heading_pane_g1

0x4d50,	// (0x0001f572) list_double_heading_pane_g2_ParamLimits

0x4d50,	// (0x0001f572) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00029e5f) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00029e5f) list_double_heading_pane_g

0x4d5c,	// (0x0001f57e) list_double_heading_pane_t1_ParamLimits

0x4d5c,	// (0x0001f57e) list_double_heading_pane_t1

0x4bad,	// (0x0001f3cf) list_double_heading_pane_t2_ParamLimits

0x4bad,	// (0x0001f3cf) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00029e64) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00029e64) list_double_heading_pane_t

0x4c54,	// (0x0001f476) list_double_graphic_heading_pane_g1_ParamLimits

0x4c54,	// (0x0001f476) list_double_graphic_heading_pane_g1

0x4d3f,	// (0x0001f561) list_double_graphic_heading_pane_g2_ParamLimits

0x4d3f,	// (0x0001f561) list_double_graphic_heading_pane_g2

0x4d50,	// (0x0001f572) list_double_graphic_heading_pane_g3_ParamLimits

0x4d50,	// (0x0001f572) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00029e69) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00029e69) list_double_graphic_heading_pane_g

0x4d72,	// (0x0001f594) list_double_graphic_heading_pane_t1_ParamLimits

0x4d72,	// (0x0001f594) list_double_graphic_heading_pane_t1

0x4c76,	// (0x0001f498) list_double_graphic_heading_pane_t2_ParamLimits

0x4c76,	// (0x0001f498) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00029e70) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00029e70) list_double_graphic_heading_pane_t

0x4ca7,	// (0x0001f4c9) list_double_time_pane_g1_ParamLimits

0x4ca7,	// (0x0001f4c9) list_double_time_pane_g1

0x4b46,	// (0x0001f368) list_double_time_pane_g2_ParamLimits

0x4b46,	// (0x0001f368) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00029e75) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00029e75) list_double_time_pane_g

0x4d88,	// (0x0001f5aa) list_double_time_pane_t1_ParamLimits

0x4d88,	// (0x0001f5aa) list_double_time_pane_t1

0x4d9e,	// (0x0001f5c0) list_double_time_pane_t2_ParamLimits

0x4d9e,	// (0x0001f5c0) list_double_time_pane_t2

0x4db0,	// (0x0001f5d2) list_double_time_pane_t3_ParamLimits

0x4db0,	// (0x0001f5d2) list_double_time_pane_t3

0x4dc2,	// (0x0001f5e4) list_double_time_pane_t4_ParamLimits

0x4dc2,	// (0x0001f5e4) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00029e7a) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00029e7a) list_double_time_pane_t

0x4dd4,	// (0x0001f5f6) list_setting_pane_g1_ParamLimits

0x4dd4,	// (0x0001f5f6) list_setting_pane_g1

0x4d50,	// (0x0001f572) list_setting_pane_g2_ParamLimits

0x4d50,	// (0x0001f572) list_setting_pane_g2

0x0001,

0xf661,	// (0x00029e83) list_setting_pane_g_ParamLimits

0xf661,	// (0x00029e83) list_setting_pane_g

0x4de0,	// (0x0001f602) list_setting_pane_t1_ParamLimits

0x4de0,	// (0x0001f602) list_setting_pane_t1

0x4df7,	// (0x0001f619) list_setting_pane_t2_ParamLimits

0x4df7,	// (0x0001f619) list_setting_pane_t2

0x0002,

0xf666,	// (0x00029e88) list_setting_pane_t_ParamLimits

0xf666,	// (0x00029e88) list_setting_pane_t

0x4e34,	// (0x0001f656) set_value_pane_cp_ParamLimits

0x4e34,	// (0x0001f656) set_value_pane_cp

0x4e40,	// (0x0001f662) list_setting_number_pane_g1_ParamLimits

0x4e40,	// (0x0001f662) list_setting_number_pane_g1

0x4e4c,	// (0x0001f66e) list_setting_number_pane_g2_ParamLimits

0x4e4c,	// (0x0001f66e) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00029e8f) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00029e8f) list_setting_number_pane_g

0x4e58,	// (0x0001f67a) list_setting_number_pane_t1_ParamLimits

0x4e58,	// (0x0001f67a) list_setting_number_pane_t1

0x4e6c,	// (0x0001f68e) list_setting_number_pane_t2_ParamLimits

0x4e6c,	// (0x0001f68e) list_setting_number_pane_t2

0x4e83,	// (0x0001f6a5) list_setting_number_pane_t3_ParamLimits

0x4e83,	// (0x0001f6a5) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00029e94) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00029e94) list_setting_number_pane_t

0x4e34,	// (0x0001f656) set_value_pane_ParamLimits

0x4e34,	// (0x0001f656) set_value_pane

0x887b,	// (0x0002309d) bg_set_opt_pane_ParamLimits

0x887b,	// (0x0002309d) bg_set_opt_pane

0x4ec6,	// (0x0001f6e8) set_value_pane_t1

0x889c,	// (0x000230be) slider_set_pane_cp3

0x88a5,	// (0x000230c7) volume_small_pane_cp

0x88ae,	// (0x000230d0) list_form_gen_pane

0x88b7,	// (0x000230d9) scroll_pane_cp8

0x4edc,	// (0x0001f6fe) form_field_data_pane_ParamLimits

0x4edc,	// (0x0001f6fe) form_field_data_pane

0x4efc,	// (0x0001f71e) form_field_data_wide_pane_ParamLimits

0x4efc,	// (0x0001f71e) form_field_data_wide_pane

0x4f1d,	// (0x0001f73f) form_field_popup_pane_ParamLimits

0x4f1d,	// (0x0001f73f) form_field_popup_pane

0x4f3b,	// (0x0001f75d) form_field_popup_wide_pane_ParamLimits

0x4f3b,	// (0x0001f75d) form_field_popup_wide_pane

0x4f58,	// (0x0001f77a) form_field_slider_pane_ParamLimits

0x4f58,	// (0x0001f77a) form_field_slider_pane

0x4f6b,	// (0x0001f78d) form_field_slider_wide_pane_ParamLimits

0x4f6b,	// (0x0001f78d) form_field_slider_wide_pane

0x88c8,	// (0x000230ea) data_form_pane

0x4f88,	// (0x0001f7aa) form_field_data_pane_t1

0x88d4,	// (0x000230f6) input_focus_pane

0x4fa2,	// (0x0001f7c4) data_form_wide_pane

0x4fbf,	// (0x0001f7e1) form_field_data_wide_pane_t1

0x8645,	// (0x00022e67) input_focus_pane_cp6

0x4fe1,	// (0x0001f803) form_field_popup_pane_t1

0x88d4,	// (0x000230f6) input_focus_pane_cp7

0x8902,	// (0x00023124) list_form_pane

0x5003,	// (0x0001f825) form_field_popup_wide_pane_t1

0x88d4,	// (0x000230f6) input_focus_pane_cp8

0x890e,	// (0x00023130) list_form_wide_pane

0x5020,	// (0x0001f842) form_field_slider_pane_t1_ParamLimits

0x5020,	// (0x0001f842) form_field_slider_pane_t1

0x5034,	// (0x0001f856) form_field_slider_pane_t2_ParamLimits

0x5034,	// (0x0001f856) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00029ea4) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00029ea4) form_field_slider_pane_t

0x82f5,	// (0x00022b17) input_focus_pane_cp9_ParamLimits

0x82f5,	// (0x00022b17) input_focus_pane_cp9

0x5046,	// (0x0001f868) slider_cont_pane_ParamLimits

0x5046,	// (0x0001f868) slider_cont_pane

0x891d,	// (0x0002313f) form_field_slider_wide_pane_t1_ParamLimits

0x891d,	// (0x0002313f) form_field_slider_wide_pane_t1

0x505a,	// (0x0001f87c) form_field_slider_wide_pane_t2_ParamLimits

0x505a,	// (0x0001f87c) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00029ea9) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00029ea9) form_field_slider_wide_pane_t

0x82f5,	// (0x00022b17) input_focus_pane_cp10_ParamLimits

0x82f5,	// (0x00022b17) input_focus_pane_cp10

0x506c,	// (0x0001f88e) slider_cont_pane_cp1_ParamLimits

0x506c,	// (0x0001f88e) slider_cont_pane_cp1

0x5080,	// (0x0001f8a2) slider_form_pane_cp

0x892f,	// (0x00023151) input_focus_pane_g1

0x8937,	// (0x00023159) input_focus_pane_g2

0x893f,	// (0x00023161) input_focus_pane_g3

0x8947,	// (0x00023169) input_focus_pane_g4

0x894f,	// (0x00023171) input_focus_pane_g5

0x8957,	// (0x00023179) input_focus_pane_g6

0x895f,	// (0x00023181) input_focus_pane_g7

0x8967,	// (0x00023189) input_focus_pane_g8

0x896f,	// (0x00023191) input_focus_pane_g9

0x7f90,	// (0x000227b2) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00029eae) input_focus_pane_g

0xa390,	// (0x00024bb2) wait_border_pane_g3_copy1

0x5088,	// (0x0001f8aa) data_form_pane_t1

0x7f90,	// (0x000227b2) wait_anim_pane_g1_copy1

0x5349,	// (0x0001fb6b) data_form_wide_pane_t1

0x50a3,	// (0x0001f8c5) list_form_graphic_pane_cp_ParamLimits

0x50a3,	// (0x0001f8c5) list_form_graphic_pane_cp

0xb2ab,	// (0x00025acd) slider_form_pane_g1

0xb2b4,	// (0x00025ad6) slider_form_pane_g2

0x0006,

0xf988,	// (0x0002a1aa) slider_form_pane_g

0x50a3,	// (0x0001f8c5) list_form_graphic_pane_ParamLimits

0x50a3,	// (0x0001f8c5) list_form_graphic_pane

0x50ba,	// (0x0001f8dc) list_form_graphic_pane_g1

0x50c2,	// (0x0001f8e4) list_form_graphic_pane_t1_ParamLimits

0x50c2,	// (0x0001f8e4) list_form_graphic_pane_t1

0x807a,	// (0x0002289c) list_highlight_pane_cp5_ParamLimits

0x807a,	// (0x0002289c) list_highlight_pane_cp5

0x50d7,	// (0x0001f8f9) find_pane_g1

0x8977,	// (0x00023199) input_find_pane

0x50e0,	// (0x0001f902) input_find_pane_g1_ParamLimits

0x50e0,	// (0x0001f902) input_find_pane_g1

0x50ec,	// (0x0001f90e) input_find_pane_t1_ParamLimits

0x50ec,	// (0x0001f90e) input_find_pane_t1

0x5101,	// (0x0001f923) input_find_pane_t2_ParamLimits

0x5101,	// (0x0001f923) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00029ec3) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00029ec3) input_find_pane_t

0x8980,	// (0x000231a2) input_focus_pane_cp5_ParamLimits

0x8980,	// (0x000231a2) input_focus_pane_cp5

0x899a,	// (0x000231bc) bg_popup_window_pane_cp2_ParamLimits

0x899a,	// (0x000231bc) bg_popup_window_pane_cp2

0x89a7,	// (0x000231c9) listscroll_menu_pane_ParamLimits

0x89a7,	// (0x000231c9) listscroll_menu_pane

0x89b3,	// (0x000231d5) popup_submenu_window_ParamLimits

0x89b3,	// (0x000231d5) popup_submenu_window

0x89db,	// (0x000231fd) find_popup_pane_g1

0x89e3,	// (0x00023205) input_popup_find_pane_cp

0x8980,	// (0x000231a2) input_focus_pane_cp4_ParamLimits

0x8980,	// (0x000231a2) input_focus_pane_cp4

0x89fb,	// (0x0002321d) input_popup_find_pane_t1_ParamLimits

0x89fb,	// (0x0002321d) input_popup_find_pane_t1

0x7f9a,	// (0x000227bc) bg_popup_sub_pane_cp

0x8a29,	// (0x0002324b) listscroll_popup_sub_pane

0x8a31,	// (0x00023253) list_submenu_pane_ParamLimits

0x8a31,	// (0x00023253) list_submenu_pane

0x8a42,	// (0x00023264) scroll_pane_cp4

0x8a4a,	// (0x0002326c) list_single_popup_submenu_pane_ParamLimits

0x8a4a,	// (0x0002326c) list_single_popup_submenu_pane

0x8a5e,	// (0x00023280) list_single_popup_submenu_pane_g1

0x8a66,	// (0x00023288) list_single_popup_submenu_pane_t1_ParamLimits

0x8a66,	// (0x00023288) list_single_popup_submenu_pane_t1

0x807a,	// (0x0002289c) bg_active_tab_pane_cp1_ParamLimits

0x807a,	// (0x0002289c) bg_active_tab_pane_cp1

0x8a7b,	// (0x0002329d) tabs_2_active_pane_g1

0x8a83,	// (0x000232a5) tabs_2_active_pane_t1

0x807a,	// (0x0002289c) bg_passive_tab_pane_cp1_ParamLimits

0x807a,	// (0x0002289c) bg_passive_tab_pane_cp1

0x8a7b,	// (0x0002329d) tabs_2_passive_pane_g1

0x8a83,	// (0x000232a5) tabs_2_passive_pane_t1

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp4

0x8aa3,	// (0x000232c5) tabs_2_long_active_pane_t1

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp4

0x6bd4,	// (0x000213f6) list_single_midp_graphic_pane_g4_ParamLimits

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp5

0x8ac2,	// (0x000232e4) tabs_3_long_active_pane_t1

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp5

0x6bd4,	// (0x000213f6) list_single_midp_graphic_pane_g4

0x807a,	// (0x0002289c) bg_popup_window_pane_cp13_ParamLimits

0x807a,	// (0x0002289c) bg_popup_window_pane_cp13

0x8add,	// (0x000232ff) listscroll_popup_fast_pane_ParamLimits

0x8add,	// (0x000232ff) listscroll_popup_fast_pane

0x8ae9,	// (0x0002330b) grid_popup_fast_pane_ParamLimits

0x8ae9,	// (0x0002330b) grid_popup_fast_pane

0x8afb,	// (0x0002331d) scroll_pane_cp9_ParamLimits

0x8afb,	// (0x0002331d) scroll_pane_cp9

0xcb52,	// (0x00027374) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb52,	// (0x00027374) list_single_graphic_hl_pane_t1_cp2

0x8b1f,	// (0x00023341) input_focus_pane_cp20_ParamLimits

0x8b1f,	// (0x00023341) input_focus_pane_cp20

0x8b2d,	// (0x0002334f) query_popup_data_pane_t1_ParamLimits

0x8b2d,	// (0x0002334f) query_popup_data_pane_t1

0x8b40,	// (0x00023362) query_popup_data_pane_t2_ParamLimits

0x8b40,	// (0x00023362) query_popup_data_pane_t2

0x8b86,	// (0x000233a8) query_popup_data_pane_t3_ParamLimits

0x8b86,	// (0x000233a8) query_popup_data_pane_t3

0x8bc7,	// (0x000233e9) query_popup_data_pane_t4_ParamLimits

0x8bc7,	// (0x000233e9) query_popup_data_pane_t4

0x8c03,	// (0x00023425) query_popup_data_pane_t5_ParamLimits

0x8c03,	// (0x00023425) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00029ec8) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00029ec8) query_popup_data_pane_t

0x892f,	// (0x00023151) bg_set_opt_pane_g1

0x8937,	// (0x00023159) bg_set_opt_pane_g2

0x893f,	// (0x00023161) bg_set_opt_pane_g3

0x8947,	// (0x00023169) bg_set_opt_pane_g4

0x894f,	// (0x00023171) bg_set_opt_pane_g5

0x8957,	// (0x00023179) bg_set_opt_pane_g6

0x895f,	// (0x00023181) bg_set_opt_pane_g7

0x8967,	// (0x00023189) bg_set_opt_pane_g8

0x896f,	// (0x00023191) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00029ed3) bg_set_opt_pane_g

0x629a,	// (0x00020abc) control_top_pane_stacon_ParamLimits

0x629a,	// (0x00020abc) control_top_pane_stacon

0x62ed,	// (0x00020b0f) signal_pane_stacon_ParamLimits

0x62ed,	// (0x00020b0f) signal_pane_stacon

0x91d9,	// (0x000239fb) stacon_top_pane_g1_ParamLimits

0x91d9,	// (0x000239fb) stacon_top_pane_g1

0x6312,	// (0x00020b34) title_pane_stacon_ParamLimits

0x6312,	// (0x00020b34) title_pane_stacon

0x633c,	// (0x00020b5e) uni_indicator_pane_stacon_ParamLimits

0x633c,	// (0x00020b5e) uni_indicator_pane_stacon

0x6351,	// (0x00020b73) battery_pane_stacon_ParamLimits

0x6351,	// (0x00020b73) battery_pane_stacon

0x6395,	// (0x00020bb7) control_bottom_pane_stacon_ParamLimits

0x6395,	// (0x00020bb7) control_bottom_pane_stacon

0x63b8,	// (0x00020bda) navi_pane_stacon_ParamLimits

0x63b8,	// (0x00020bda) navi_pane_stacon

0x91fb,	// (0x00023a1d) stacon_bottom_pane_g1_ParamLimits

0x91fb,	// (0x00023a1d) stacon_bottom_pane_g1

0x6004,	// (0x00020826) aid_levels_signal_lsc_ParamLimits

0x6004,	// (0x00020826) aid_levels_signal_lsc

0x601b,	// (0x0002083d) signal_pane_stacon_g1_ParamLimits

0x601b,	// (0x0002083d) signal_pane_stacon_g1

0x602f,	// (0x00020851) signal_pane_stacon_g2_ParamLimits

0x602f,	// (0x00020851) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00029ee6) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00029ee6) signal_pane_stacon_g

0x6064,	// (0x00020886) title_pane_stacon_t1_ParamLimits

0x6064,	// (0x00020886) title_pane_stacon_t1

0x8c47,	// (0x00023469) uni_indicator_pane_stacon_g1

0x8c51,	// (0x00023473) uni_indicator_pane_stacon_g2

0x8c5b,	// (0x0002347d) uni_indicator_pane_stacon_g3

0x8c65,	// (0x00023487) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00029ef2) uni_indicator_pane_stacon_g

0x6089,	// (0x000208ab) control_top_pane_stacon_g1

0x6091,	// (0x000208b3) control_top_pane_stacon_t1_ParamLimits

0x6091,	// (0x000208b3) control_top_pane_stacon_t1

0x60c8,	// (0x000208ea) aid_levels_battery_lsc_ParamLimits

0x60c8,	// (0x000208ea) aid_levels_battery_lsc

0x60e0,	// (0x00020902) battery_pane_stacon_g1_ParamLimits

0x60e0,	// (0x00020902) battery_pane_stacon_g1

0x60f3,	// (0x00020915) battery_pane_stacon_g2_ParamLimits

0x60f3,	// (0x00020915) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00029efb) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00029efb) battery_pane_stacon_g

0x6131,	// (0x00020953) navi_icon_pane_stacon

0x6145,	// (0x00020967) navi_navi_pane_stacon

0x6131,	// (0x00020953) navi_text_pane_stacon

0x6089,	// (0x000208ab) control_bottom_pane_stacon_g1

0x6159,	// (0x0002097b) control_bottom_pane_stacon_t1_ParamLimits

0x6159,	// (0x0002097b) control_bottom_pane_stacon_t1

0x8c89,	// (0x000234ab) grid_app_pane_ParamLimits

0x8c89,	// (0x000234ab) grid_app_pane

0x8cab,	// (0x000234cd) scroll_pane_cp15_ParamLimits

0x8cab,	// (0x000234cd) scroll_pane_cp15

0x8cbe,	// (0x000234e0) cell_app_pane_ParamLimits

0x8cbe,	// (0x000234e0) cell_app_pane

0x8ce4,	// (0x00023506) cell_app_pane_g1_ParamLimits

0x8ce4,	// (0x00023506) cell_app_pane_g1

0x8d04,	// (0x00023526) cell_app_pane_g2_ParamLimits

0x8d04,	// (0x00023526) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00029f00) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00029f00) cell_app_pane_g

0x8d10,	// (0x00023532) cell_app_pane_t1_ParamLimits

0x8d10,	// (0x00023532) cell_app_pane_t1

0x8d27,	// (0x00023549) grid_highlight_pane_ParamLimits

0x8d27,	// (0x00023549) grid_highlight_pane

0x892f,	// (0x00023151) cell_highlight_pane_g1

0x8937,	// (0x00023159) cell_highlight_pane_g2

0x893f,	// (0x00023161) cell_highlight_pane_g3

0x8947,	// (0x00023169) cell_highlight_pane_g4

0x894f,	// (0x00023171) cell_highlight_pane_g5

0x8957,	// (0x00023179) cell_highlight_pane_g6

0x895f,	// (0x00023181) cell_highlight_pane_g7

0x8967,	// (0x00023189) cell_highlight_pane_g8

0x896f,	// (0x00023191) cell_highlight_pane_g9

0x7f90,	// (0x000227b2) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00029eae) cell_highlight_pane_g

0x8d38,	// (0x0002355a) bg_scroll_pane

0x61a3,	// (0x000209c5) scroll_handle_pane

0x8d7f,	// (0x000235a1) scroll_bg_pane_g1

0x8d94,	// (0x000235b6) scroll_bg_pane_g2

0x8dac,	// (0x000235ce) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00029f05) scroll_bg_pane_g

0x8dc1,	// (0x000235e3) scroll_handle_focus_pane_ParamLimits

0x8dc1,	// (0x000235e3) scroll_handle_focus_pane

0x8d7f,	// (0x000235a1) scroll_handle_pane_g1

0x8dce,	// (0x000235f0) scroll_handle_pane_g2

0x8dac,	// (0x000235ce) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00029f0c) scroll_handle_pane_g

0x8980,	// (0x000231a2) bg_popup_sub_pane_cp21_ParamLimits

0x8980,	// (0x000231a2) bg_popup_sub_pane_cp21

0x8de2,	// (0x00023604) popup_fep_japan_predictive_window_t1_ParamLimits

0x8de2,	// (0x00023604) popup_fep_japan_predictive_window_t1

0x8dfc,	// (0x0002361e) popup_fep_japan_predictive_window_t2_ParamLimits

0x8dfc,	// (0x0002361e) popup_fep_japan_predictive_window_t2

0x8e2f,	// (0x00023651) popup_fep_japan_predictive_window_t3_ParamLimits

0x8e2f,	// (0x00023651) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00029f13) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00029f13) popup_fep_japan_predictive_window_t

0x7f9a,	// (0x000227bc) bg_popup_sub_pane_cp23

0x8e66,	// (0x00023688) listscroll_japin_cand_pane

0x8e6e,	// (0x00023690) popup_fep_japan_candidate_window_t1

0x8e7c,	// (0x0002369e) candidate_pane_ParamLimits

0x8e7c,	// (0x0002369e) candidate_pane

0x8e8e,	// (0x000236b0) scroll_pane_cp30

0x8e96,	// (0x000236b8) list_single_popup_jap_candidate_pane_ParamLimits

0x8e96,	// (0x000236b8) list_single_popup_jap_candidate_pane

0x7f9a,	// (0x000227bc) list_highlight_pane_cp30

0x8eaa,	// (0x000236cc) list_single_popup_jap_candidate_pane_t1

0x8eb9,	// (0x000236db) level_1_signal

0x8ec6,	// (0x000236e8) level_2_signal

0x8ed3,	// (0x000236f5) level_3_signal

0x8ee0,	// (0x00023702) level_4_signal

0x8eed,	// (0x0002370f) level_5_signal

0x8efa,	// (0x0002371c) level_6_signal

0x8f07,	// (0x00023729) level_7_signal

0x8eb9,	// (0x000236db) level_1_battery

0x8ec6,	// (0x000236e8) level_2_battery

0x8ed3,	// (0x000236f5) level_3_battery

0x8ee0,	// (0x00023702) level_4_battery

0x8eed,	// (0x0002370f) level_5_battery

0x8efa,	// (0x0002371c) level_6_battery

0x8f07,	// (0x00023729) level_7_battery

0x8f2c,	// (0x0002374e) list_menu_pane_ParamLimits

0x8f2c,	// (0x0002374e) list_menu_pane

0x8f42,	// (0x00023764) scroll_pane_cp25_ParamLimits

0x8f42,	// (0x00023764) scroll_pane_cp25

0x8f5b,	// (0x0002377d) list_double2_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double2_graphic_pane_cp2

0x8f5b,	// (0x0002377d) list_double2_large_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double2_large_graphic_pane_cp2

0x8f5b,	// (0x0002377d) list_double2_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double2_pane_cp2

0x8f5b,	// (0x0002377d) list_double_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double_graphic_pane_cp2

0x8f5b,	// (0x0002377d) list_double_large_graphic_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double_large_graphic_pane_cp2

0x8f5b,	// (0x0002377d) list_double_number_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double_number_pane_cp2

0x8f5b,	// (0x0002377d) list_double_pane_cp2_ParamLimits

0x8f5b,	// (0x0002377d) list_double_pane_cp2

0x8f7f,	// (0x000237a1) list_single_2graphic_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_2graphic_pane_cp2

0x8f7f,	// (0x000237a1) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_graphic_heading_pane_cp2

0x8f7f,	// (0x000237a1) list_single_graphic_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_graphic_pane_cp2

0x8f7f,	// (0x000237a1) list_single_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_heading_pane_cp2

0x8f95,	// (0x000237b7) list_single_large_graphic_pane_cp2_ParamLimits

0x8f95,	// (0x000237b7) list_single_large_graphic_pane_cp2

0x8f7f,	// (0x000237a1) list_single_number_heading_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_number_heading_pane_cp2

0x8f7f,	// (0x000237a1) list_single_number_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_number_pane_cp2

0x8f7f,	// (0x000237a1) list_single_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_pane_cp2

0x9010,	// (0x00023832) bg_popup_sub_pane_cp22

0x6252,	// (0x00020a74) popup_side_volume_key_window_g1

0x6276,	// (0x00020a98) popup_side_volume_key_window_t1

0x6292,	// (0x00020ab4) volume_small_pane_cp1

0x82f5,	// (0x00022b17) bg_popup_sub_pane_cp24_ParamLimits

0x82f5,	// (0x00022b17) bg_popup_sub_pane_cp24

0x9026,	// (0x00023848) fep_china_uni_candidate_pane_ParamLimits

0x9026,	// (0x00023848) fep_china_uni_candidate_pane

0x903a,	// (0x0002385c) fep_china_uni_entry_pane

0x904a,	// (0x0002386c) popup_fep_china_uni_window_g1

0x9066,	// (0x00023888) fep_china_uni_entry_pane_g1

0x906e,	// (0x00023890) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00029f44) fep_china_uni_entry_pane_g

0x9076,	// (0x00023898) fep_entry_item_pane

0x9080,	// (0x000238a2) fep_candidate_item_pane

0x90a0,	// (0x000238c2) fep_china_uni_candidate_pane_g1

0x90a8,	// (0x000238ca) fep_china_uni_candidate_pane_g2

0x90b0,	// (0x000238d2) fep_china_uni_candidate_pane_g3

0x90b8,	// (0x000238da) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00029f49) fep_china_uni_candidate_pane_g

0x7f90,	// (0x000227b2) fep_entry_item_pane_g1

0x90c0,	// (0x000238e2) fep_entry_item_pane_t1_ParamLimits

0x90c0,	// (0x000238e2) fep_entry_item_pane_t1

0x90d6,	// (0x000238f8) fep_candidate_item_pane_t1_ParamLimits

0x90d6,	// (0x000238f8) fep_candidate_item_pane_t1

0x90eb,	// (0x0002390d) fep_candidate_item_pane_t2_ParamLimits

0x90eb,	// (0x0002390d) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00029f52) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00029f52) fep_candidate_item_pane_t

0x807a,	// (0x0002289c) list_highlight_pane_cp31_ParamLimits

0x807a,	// (0x0002289c) list_highlight_pane_cp31

0x90fd,	// (0x0002391f) level_1_signal_lsc

0x9106,	// (0x00023928) level_2_signal_lsc

0x910f,	// (0x00023931) level_3_signal_lsc

0x9118,	// (0x0002393a) level_4_signal_lsc

0x9121,	// (0x00023943) level_5_signal_lsc

0x912a,	// (0x0002394c) level_6_signal_lsc

0x9133,	// (0x00023955) level_7_signal_lsc

0x9133,	// (0x00023955) level_1_battery_lsc

0x913c,	// (0x0002395e) level_2_battery_lsc

0x9145,	// (0x00023967) level_3_battery_lsc

0x914e,	// (0x00023970) level_4_battery_lsc

0x9157,	// (0x00023979) level_5_battery_lsc

0x9160,	// (0x00023982) level_6_battery_lsc

0x90fd,	// (0x0002391f) level_7_battery_lsc

0x9169,	// (0x0002398b) scroll_handle_focus_pane_g1

0x9172,	// (0x00023994) scroll_handle_focus_pane_g2

0x917b,	// (0x0002399d) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00029f57) scroll_handle_focus_pane_g

0x5116,	// (0x0001f938) list_single_2graphic_pane_g1_ParamLimits

0x5116,	// (0x0001f938) list_single_2graphic_pane_g1

0x4ad5,	// (0x0001f2f7) list_single_2graphic_pane_g2_ParamLimits

0x4ad5,	// (0x0001f2f7) list_single_2graphic_pane_g2

0x4a5b,	// (0x0001f27d) list_single_2graphic_pane_g3_ParamLimits

0x4a5b,	// (0x0001f27d) list_single_2graphic_pane_g3

0x5122,	// (0x0001f944) list_single_2graphic_pane_g4_ParamLimits

0x5122,	// (0x0001f944) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00029f5e) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00029f5e) list_single_2graphic_pane_g

0x512e,	// (0x0001f950) list_single_2graphic_pane_t1_ParamLimits

0x512e,	// (0x0001f950) list_single_2graphic_pane_t1

0x515c,	// (0x0001f97e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x515c,	// (0x0001f97e) list_double2_graphic_large_graphic_pane_g1

0x4b7a,	// (0x0001f39c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b7a,	// (0x0001f39c) list_double2_graphic_large_graphic_pane_g2

0x4b8b,	// (0x0001f3ad) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b8b,	// (0x0001f3ad) list_double2_graphic_large_graphic_pane_g3

0x516e,	// (0x0001f990) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x516e,	// (0x0001f990) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00029f67) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00029f67) list_double2_graphic_large_graphic_pane_g

0x517a,	// (0x0001f99c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x517a,	// (0x0001f99c) list_double2_graphic_large_graphic_pane_t1

0x5190,	// (0x0001f9b2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5190,	// (0x0001f9b2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00029f70) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00029f70) list_double2_graphic_large_graphic_pane_t

0x92c2,	// (0x00023ae4) popup_fast_swap_window_ParamLimits

0x92c2,	// (0x00023ae4) popup_fast_swap_window

0x92de,	// (0x00023b00) popup_side_volume_key_window

0x92f8,	// (0x00023b1a) stacon_top_pane

0x9302,	// (0x00023b24) status_pane_ParamLimits

0x9302,	// (0x00023b24) status_pane

0x9310,	// (0x00023b32) status_small_pane

0x7f9a,	// (0x000227bc) control_pane

0x7f9a,	// (0x000227bc) stacon_bottom_pane

0x88b7,	// (0x000230d9) scroll_pane_cp121

0x88ae,	// (0x000230d0) set_content_pane

0x9184,	// (0x000239a6) bg_active_tab_pane_g1_cp1

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp1

0x9196,	// (0x000239b8) bg_active_tab_pane_g3_cp1

0x9184,	// (0x000239a6) bg_passive_tab_pane_g1_cp1

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp1

0x9196,	// (0x000239b8) bg_passive_tab_pane_g3_cp1

0x919f,	// (0x000239c1) bg_active_tab_pane_g1_cp2

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp2

0x91a8,	// (0x000239ca) bg_active_tab_pane_g3_cp2

0x919f,	// (0x000239c1) bg_passive_tab_pane_g1_cp2

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp2

0x91a8,	// (0x000239ca) bg_passive_tab_pane_g3_cp2

0x91b1,	// (0x000239d3) bg_active_tab_pane_g1_cp3

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp3

0x91ba,	// (0x000239dc) bg_active_tab_pane_g3_cp3

0x91b1,	// (0x000239d3) bg_passive_tab_pane_g1_cp3

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp3

0x91ba,	// (0x000239dc) bg_passive_tab_pane_g3_cp3

0x91c3,	// (0x000239e5) bg_active_tab_pane_g1_cp4

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp4

0x91ce,	// (0x000239f0) bg_active_tab_pane_g3_cp4

0x91c3,	// (0x000239e5) bg_passive_tab_pane_g1_cp4

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp4

0x91ce,	// (0x000239f0) bg_passive_tab_pane_g3_cp4

0x9217,	// (0x00023a39) bg_active_tab_pane_g1_cp5

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp5

0x9220,	// (0x00023a42) bg_active_tab_pane_g3_cp5

0x9217,	// (0x00023a39) bg_passive_tab_pane_g1_cp5

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp5

0x9220,	// (0x00023a42) bg_passive_tab_pane_g3_cp5

0x9229,	// (0x00023a4b) list_set_graphic_pane_ParamLimits

0x9229,	// (0x00023a4b) list_set_graphic_pane

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp4

0x9247,	// (0x00023a69) list_set_graphic_pane_g1_ParamLimits

0x9247,	// (0x00023a69) list_set_graphic_pane_g1

0x9253,	// (0x00023a75) list_set_graphic_pane_g2_ParamLimits

0x9253,	// (0x00023a75) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00029f75) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00029f75) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0002a2ff) volume_small_pane_cp_g

0x9275,	// (0x00023a97) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9275,	// (0x00023a97) list_double2_large_graphic_pane_g1_cp2

0x9281,	// (0x00023aa3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9281,	// (0x00023aa3) list_double2_large_graphic_pane_g2_cp2

0x9292,	// (0x00023ab4) list_double2_large_graphic_pane_g3_cp2

0x929a,	// (0x00023abc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x929a,	// (0x00023abc) list_double2_large_graphic_pane_t1_cp2

0x92b0,	// (0x00023ad2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x92b0,	// (0x00023ad2) list_double2_large_graphic_pane_t2_cp2

0xae69,	// (0x0002568b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae69,	// (0x0002568b) list_double_large_graphic_pane_g1_cp2

0xae7a,	// (0x0002569c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae7a,	// (0x0002569c) list_double_large_graphic_pane_g2_cp2

0x9429,	// (0x00023c4b) list_double_large_graphic_pane_g3_cp2

0xae8b,	// (0x000256ad) list_double_large_graphic_pane_g4_cp

0xae93,	// (0x000256b5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae93,	// (0x000256b5) list_double_large_graphic_pane_t1_cp2

0xaeaa,	// (0x000256cc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaeaa,	// (0x000256cc) list_double_large_graphic_pane_t2_cp2

0x931b,	// (0x00023b3d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x931b,	// (0x00023b3d) list_double2_graphic_pane_g1_cp2

0x9329,	// (0x00023b4b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9329,	// (0x00023b4b) list_double2_graphic_pane_g2_cp2

0x933a,	// (0x00023b5c) list_double2_graphic_pane_g3_cp2

0x9344,	// (0x00023b66) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9344,	// (0x00023b66) list_double2_graphic_pane_t1_cp2

0x935a,	// (0x00023b7c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x935a,	// (0x00023b7c) list_double2_graphic_pane_t2_cp2

0x936c,	// (0x00023b8e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x936c,	// (0x00023b8e) list_single_number_heading_pane_g1_cp2

0x9378,	// (0x00023b9a) list_single_number_heading_pane_g2_cp2

0x9380,	// (0x00023ba2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9380,	// (0x00023ba2) list_single_number_heading_pane_t1_cp2

0x9396,	// (0x00023bb8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9396,	// (0x00023bb8) list_single_number_heading_pane_t2_cp2

0x93a8,	// (0x00023bca) list_single_number_heading_pane_t3_cp2_ParamLimits

0x93a8,	// (0x00023bca) list_single_number_heading_pane_t3_cp2

0x936c,	// (0x00023b8e) list_single_heading_pane_g1_cp2_ParamLimits

0x936c,	// (0x00023b8e) list_single_heading_pane_g1_cp2

0x9378,	// (0x00023b9a) list_single_heading_pane_g2_cp2

0x9380,	// (0x00023ba2) list_single_heading_pane_t1_cp2_ParamLimits

0x9380,	// (0x00023ba2) list_single_heading_pane_t1_cp2

0xac73,	// (0x00025495) list_single_heading_pane_t2_cp2_ParamLimits

0xac73,	// (0x00025495) list_single_heading_pane_t2_cp2

0xabbb,	// (0x000253dd) list_double_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x000253dd) list_double_graphic_pane_g1_cp2

0xabc7,	// (0x000253e9) list_double_graphic_pane_g2_cp2_ParamLimits

0xabc7,	// (0x000253e9) list_double_graphic_pane_g2_cp2

0xabd6,	// (0x000253f8) list_double_graphic_pane_g3_cp2

0xabde,	// (0x00025400) list_double_graphic_pane_t1_cp2_ParamLimits

0xabde,	// (0x00025400) list_double_graphic_pane_t1_cp2

0xabf4,	// (0x00025416) list_double_graphic_pane_t2_cp2_ParamLimits

0xabf4,	// (0x00025416) list_double_graphic_pane_t2_cp2

0x941d,	// (0x00023c3f) list_double_number_pane_g1_cp2_ParamLimits

0x941d,	// (0x00023c3f) list_double_number_pane_g1_cp2

0x9429,	// (0x00023c4b) list_double_number_pane_g2_cp2

0xab7f,	// (0x000253a1) list_double_number_pane_t1_cp2_ParamLimits

0xab7f,	// (0x000253a1) list_double_number_pane_t1_cp2

0xab93,	// (0x000253b5) list_double_number_pane_t2_cp2_ParamLimits

0xab93,	// (0x000253b5) list_double_number_pane_t2_cp2

0xaba9,	// (0x000253cb) list_double_number_pane_t3_cp2_ParamLimits

0xaba9,	// (0x000253cb) list_double_number_pane_t3_cp2

0xaa68,	// (0x0002528a) list_single_graphic_pane_g1_cp2_ParamLimits

0xaa68,	// (0x0002528a) list_single_graphic_pane_g1_cp2

0x9088,	// (0x000238aa) list_single_graphic_pane_g2_cp2_ParamLimits

0x9088,	// (0x000238aa) list_single_graphic_pane_g2_cp2

0x9481,	// (0x00023ca3) list_single_graphic_pane_g3_cp2

0xaa3e,	// (0x00025260) list_single_graphic_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x00025260) list_single_graphic_pane_t1_cp2

0x9088,	// (0x000238aa) list_single_number_pane_g1_cp2_ParamLimits

0x9088,	// (0x000238aa) list_single_number_pane_g1_cp2

0x9481,	// (0x00023ca3) list_single_number_pane_g2_cp2

0xaa3e,	// (0x00025260) list_single_number_pane_t1_cp2_ParamLimits

0xaa3e,	// (0x00025260) list_single_number_pane_t1_cp2

0xaa54,	// (0x00025276) list_single_number_pane_t2_cp2_ParamLimits

0xaa54,	// (0x00025276) list_single_number_pane_t2_cp2

0x9281,	// (0x00023aa3) list_double2_pane_g1_cp2_ParamLimits

0x9281,	// (0x00023aa3) list_double2_pane_g1_cp2

0x9292,	// (0x00023ab4) list_double2_pane_g2_cp2

0x93f5,	// (0x00023c17) list_double2_pane_t1_cp2_ParamLimits

0x93f5,	// (0x00023c17) list_double2_pane_t1_cp2

0x940b,	// (0x00023c2d) list_double2_pane_t2_cp2_ParamLimits

0x940b,	// (0x00023c2d) list_double2_pane_t2_cp2

0x941d,	// (0x00023c3f) list_double_pane_g1_cp2_ParamLimits

0x941d,	// (0x00023c3f) list_double_pane_g1_cp2

0x9429,	// (0x00023c4b) list_double_pane_g2_cp2

0x9431,	// (0x00023c53) list_double_pane_t1_cp2_ParamLimits

0x9431,	// (0x00023c53) list_double_pane_t1_cp2

0x9447,	// (0x00023c69) list_double_pane_t2_cp2_ParamLimits

0x9447,	// (0x00023c69) list_double_pane_t2_cp2

0x9471,	// (0x00023c93) list_single_pane_cp2_g3

0x9088,	// (0x000238aa) list_single_pane_g1_cp2_ParamLimits

0x9088,	// (0x000238aa) list_single_pane_g1_cp2

0x9481,	// (0x00023ca3) list_single_pane_g2_cp2

0x9489,	// (0x00023cab) list_single_pane_t1_cp2_ParamLimits

0x9489,	// (0x00023cab) list_single_pane_t1_cp2

0x94a1,	// (0x00023cc3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x94a1,	// (0x00023cc3) list_single_large_graphic_pane_g1_cp2

0x94ad,	// (0x00023ccf) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x94ad,	// (0x00023ccf) list_single_large_graphic_pane_g2_cp2

0x94b9,	// (0x00023cdb) list_single_large_graphic_pane_g3_cp2

0x94c1,	// (0x00023ce3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x94c1,	// (0x00023ce3) list_single_large_graphic_pane_g4_cp1

0x94db,	// (0x00023cfd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x94db,	// (0x00023cfd) list_single_large_graphic_pane_t1_cp2

0xaa0a,	// (0x0002522c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xaa0a,	// (0x0002522c) list_single_graphic_heading_pane_g1_cp2

0xa9d7,	// (0x000251f9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa9d7,	// (0x000251f9) list_single_graphic_heading_pane_g4_cp2

0x9481,	// (0x00023ca3) list_single_graphic_heading_pane_g5_cp2

0xaa16,	// (0x00025238) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xaa16,	// (0x00025238) list_single_graphic_heading_pane_t1_cp2

0xaa2c,	// (0x0002524e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xaa2c,	// (0x0002524e) list_single_graphic_heading_pane_t2_cp2

0xa9cb,	// (0x000251ed) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa9cb,	// (0x000251ed) list_single_2graphic_pane_g1_cp2

0xa9d7,	// (0x000251f9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa9d7,	// (0x000251f9) list_single_2graphic_pane_g2_cp2

0x9481,	// (0x00023ca3) list_single_2graphic_pane_g3_cp2

0xa9e8,	// (0x0002520a) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa9e8,	// (0x0002520a) list_single_2graphic_pane_g4_cp2

0xa9f4,	// (0x00025216) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa9f4,	// (0x00025216) list_single_2graphic_pane_t1_cp2

0x7f90,	// (0x000227b2) list_highlight_pane_g10_cp1

0xa5a3,	// (0x00024dc5) list_highlight_pane_g1_cp1

0xa5ab,	// (0x00024dcd) list_highlight_pane_g2_cp1

0xa5b3,	// (0x00024dd5) list_highlight_pane_g3_cp1

0xa5bb,	// (0x00024ddd) list_highlight_pane_g4_cp1

0xa5c3,	// (0x00024de5) list_highlight_pane_g5_cp1

0xa5cb,	// (0x00024ded) list_highlight_pane_g6_cp1

0xa5d3,	// (0x00024df5) list_highlight_pane_g7_cp1

0xa5db,	// (0x00024dfd) list_highlight_pane_g8_cp1

0xa5e3,	// (0x00024e05) list_highlight_pane_g9_cp1

0xa4bb,	// (0x00024cdd) form_field_slider_pane_t3

0xa4c9,	// (0x00024ceb) form_field_slider_pane_t4

0xa4d7,	// (0x00024cf9) slider_form_pane_ParamLimits

0xa4d7,	// (0x00024cf9) slider_form_pane

0x7f9a,	// (0x000227bc) control_abbreviations

0x7f9a,	// (0x000227bc) control_conventions

0x7f9a,	// (0x000227bc) control_definitions

0x7f9a,	// (0x000227bc) format_table_attribute

0xacbd,	// (0x000254df) bg_popup_preview_window_pane_g9

0x7f9a,	// (0x000227bc) format_table_data2

0x7f9a,	// (0x000227bc) format_table_data3

0x7f9a,	// (0x000227bc) format_table_data_example

0x0008,

0x7f9a,	// (0x000227bc) intro_purpose

0xf8e8,	// (0x0002a10a) bg_popup_preview_window_pane_g

0x7f9a,	// (0x000227bc) texts_category

0x7f9a,	// (0x000227bc) texts_graphics

0x94f1,	// (0x00023d13) text_digital

0x9500,	// (0x00023d22) text_primary

0x950f,	// (0x00023d31) text_primary_small

0x951e,	// (0x00023d40) text_secondary

0x952d,	// (0x00023d4f) text_title

0xb38c,	// (0x00025bae) bg_passive_tab_pane_g1_cp3_srt

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp3_srt

0xb395,	// (0x00025bb7) bg_passive_tab_pane_g3_cp3_srt

0x807a,	// (0x0002289c) bg_active_tab_pane_cp3_srt_ParamLimits

0x807a,	// (0x0002289c) bg_active_tab_pane_cp3_srt

0xb39e,	// (0x00025bc0) tabs_4_active_pane_srt_g1

0xb3a6,	// (0x00025bc8) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a6,	// (0x00025bc8) tabs_4_active_pane_srt_t1

0xb38c,	// (0x00025bae) bg_active_tab_pane_g1_cp3_copy1

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp3_copy1

0xb395,	// (0x00025bb7) bg_active_tab_pane_g3_cp3_copy1

0x807a,	// (0x0002289c) tabs_2_long_active_pane_srt_ParamLimits

0x807a,	// (0x0002289c) tabs_2_long_active_pane_srt

0x807a,	// (0x0002289c) tabs_2_long_passive_pane_srt_ParamLimits

0x807a,	// (0x0002289c) tabs_2_long_passive_pane_srt

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp4_srt

0xb0ec,	// (0x0002590e) bg_passive_tab_pane_g1_cp4_srt

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp4_srt

0xb0f5,	// (0x00025917) bg_passive_tab_pane_g3_cp4_srt

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp4_srt

0xb0fe,	// (0x00025920) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb0fe,	// (0x00025920) tabs_2_long_active_pane_srt_t1

0xb0ec,	// (0x0002590e) bg_active_tab_pane_g1_cp4_srt

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp4_srt

0xb0f5,	// (0x00025917) bg_active_tab_pane_g3_cp4_srt

0x82f5,	// (0x00022b17) tabs_3_long_active_pane_srt_ParamLimits

0x82f5,	// (0x00022b17) tabs_3_long_active_pane_srt

0x82f5,	// (0x00022b17) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x82f5,	// (0x00022b17) tabs_3_long_passive_pane_cp_srt

0x82f5,	// (0x00022b17) tabs_3_long_passive_pane_srt_ParamLimits

0x82f5,	// (0x00022b17) tabs_3_long_passive_pane_srt

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp5_srt

0x9217,	// (0x00023a39) bg_passive_tab_pane_g1_cp5_srt

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp5_srt

0x9220,	// (0x00023a42) bg_passive_tab_pane_g3_cp5_srt

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp5_srt

0xb0da,	// (0x000258fc) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb0da,	// (0x000258fc) tabs_3_long_active_pane_srt_t1

0x9217,	// (0x00023a39) bg_active_tab_pane_g1_cp5_srt

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp5_srt

0x9220,	// (0x00023a42) bg_active_tab_pane_g3_cp5_srt

0xb0cc,	// (0x000258ee) navi_text_pane_srt_t1

0xb0c4,	// (0x000258e6) navi_icon_pane_srt_g1

0x96f2,	// (0x00023f14) midp_editing_number_pane_srt

0x953c,	// (0x00023d5e) midp_ticker_pane_srt

0x96fa,	// (0x00023f1c) midp_ticker_pane_srt_g1

0x9702,	// (0x00023f24) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00029f94) midp_ticker_pane_srt_g

0x970a,	// (0x00023f2c) midp_ticker_pane_srt_t1

0xb0b5,	// (0x000258d7) midp_editing_number_pane_t1_copy1

0x8ab6,	// (0x000232d8) listscroll_midp_pane

0x8ab6,	// (0x000232d8) midp_form_pane

0x95aa,	// (0x00023dcc) midp_info_popup_window_ParamLimits

0x95aa,	// (0x00023dcc) midp_info_popup_window

0x8980,	// (0x000231a2) bg_popup_sub_pane_cp50_ParamLimits

0x8980,	// (0x000231a2) bg_popup_sub_pane_cp50

0xa1d8,	// (0x000249fa) listscroll_midp_info_pane_ParamLimits

0xa1d8,	// (0x000249fa) listscroll_midp_info_pane

0xa1c0,	// (0x000249e2) listscroll_form_midp_pane_ParamLimits

0xa1c0,	// (0x000249e2) listscroll_form_midp_pane

0xa1cc,	// (0x000249ee) scroll_bar_cp050

0xa1a0,	// (0x000249c2) list_midp_pane

0xbdc1,	// (0x000265e3) signal_pane_g2_cp

0xa0da,	// (0x000248fc) listscroll_midp_info_pane_t1_ParamLimits

0xa0da,	// (0x000248fc) listscroll_midp_info_pane_t1

0xa0f2,	// (0x00024914) listscroll_midp_info_pane_t2_ParamLimits

0xa0f2,	// (0x00024914) listscroll_midp_info_pane_t2

0xa130,	// (0x00024952) listscroll_midp_info_pane_t3_ParamLimits

0xa130,	// (0x00024952) listscroll_midp_info_pane_t3

0xa16a,	// (0x0002498c) listscroll_midp_info_pane_t4_ParamLimits

0xa16a,	// (0x0002498c) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0002a045) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0002a045) listscroll_midp_info_pane_t

0x8a42,	// (0x00023264) scroll_pane_cp21

0xa07c,	// (0x0002489e) form_midp_field_choice_group_pane

0xa085,	// (0x000248a7) form_midp_field_text_pane

0xa0c0,	// (0x000248e2) form_midp_field_time_pane

0xa0c8,	// (0x000248ea) form_midp_gauge_slider_pane

0xa0d1,	// (0x000248f3) form_midp_gauge_wait_pane

0x7f9a,	// (0x000227bc) form_midp_image_pane

0x52e7,	// (0x0001fb09) list_single_midp_pane_ParamLimits

0x52e7,	// (0x0001fb09) list_single_midp_pane

0xa030,	// (0x00024852) form_midp_field_text_pane_t1

0x9de8,	// (0x0002460a) input_focus_pane_cp050

0xa06b,	// (0x0002488d) list_midp_form_text_pane

0x9fff,	// (0x00024821) form_midp_field_choice_group_pane_t1

0xa00d,	// (0x0002482f) input_focus_pane_cp051

0xa021,	// (0x00024843) list_midp_choice_pane

0x7f9a,	// (0x000227bc) status_idle_pane

0x9fe3,	// (0x00024805) form_midp_field_time_pane_t1

0x7f90,	// (0x000227b2) wait_anim_pane_g2_copy1

0x9ff1,	// (0x00024813) form_midp_field_time_pane_t2

0x0001,

0x965a,	// (0x00023e7c) aid_navinavi_width_2_pane

0xf81e,	// (0x0002a040) form_midp_field_time_pane_t

0x7f9a,	// (0x000227bc) input_focus_pane_cp052

0x7f9a,	// (0x000227bc) bg_input_focus_pane_cp040

0x9fa3,	// (0x000247c5) form_midp_gauge_slider_pane_t1

0x9fb1,	// (0x000247d3) form_midp_gauge_slider_pane_t2

0x9fbf,	// (0x000247e1) form_midp_gauge_slider_pane_t3

0x9fcd,	// (0x000247ef) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0002a037) form_midp_gauge_slider_pane_t

0x9fdb,	// (0x000247fd) form_midp_slider_pane

0x807a,	// (0x0002289c) bg_input_focus_pane_cp041_ParamLimits

0x807a,	// (0x0002289c) bg_input_focus_pane_cp041

0x9f70,	// (0x00024792) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f70,	// (0x00024792) form_midp_gauge_wait_pane_t1

0x9f82,	// (0x000247a4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f82,	// (0x000247a4) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0002a032) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0002a032) form_midp_gauge_wait_pane_t

0x9f94,	// (0x000247b6) form_midp_wait_pane_ParamLimits

0x9f94,	// (0x000247b6) form_midp_wait_pane

0x9f3a,	// (0x0002475c) form_midp_image_pane_g1

0x9f43,	// (0x00024765) form_midp_image_pane_t1

0x9f52,	// (0x00024774) form_midp_image_pane_t2

0x9f61,	// (0x00024783) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0002a02b) form_midp_image_pane_t

0x9f31,	// (0x00024753) list_single_midp_pane_g1

0x52d8,	// (0x0001fafa) list_single_midp_pane_t1

0x9f02,	// (0x00024724) list_midp_form_item_pane_ParamLimits

0x9f02,	// (0x00024724) list_midp_form_item_pane

0x9602,	// (0x00023e24) list_midp_form_item_pane_t1

0x9611,	// (0x00023e33) midp_ticker_pane_g1

0x961d,	// (0x00023e3f) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00029f7a) midp_ticker_pane_g

0x9629,	// (0x00023e4b) midp_ticker_pane_t1

0xb2f8,	// (0x00025b1a) midp_editing_number_pane_t1

0xb2d6,	// (0x00025af8) midp_editing_number_pane

0xb2e5,	// (0x00025b07) midp_ticker_pane

0xb0a5,	// (0x000258c7) ai_message_heading_pane

0x7f9a,	// (0x000227bc) bg_popup_window_pane_cp14

0xb0ad,	// (0x000258cf) listscroll_ai_message_pane

0xb02f,	// (0x00025851) ai_message_heading_pane_g1_ParamLimits

0xb02f,	// (0x00025851) ai_message_heading_pane_g1

0xb03b,	// (0x0002585d) ai_message_heading_pane_g2_ParamLimits

0xb03b,	// (0x0002585d) ai_message_heading_pane_g2

0xb047,	// (0x00025869) ai_message_heading_pane_g3_ParamLimits

0xb047,	// (0x00025869) ai_message_heading_pane_g3

0xb053,	// (0x00025875) ai_message_heading_pane_g4_ParamLimits

0xb053,	// (0x00025875) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0002a16c) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0002a16c) ai_message_heading_pane_g

0xb05f,	// (0x00025881) ai_message_heading_pane_t1_ParamLimits

0xb05f,	// (0x00025881) ai_message_heading_pane_t1

0xb079,	// (0x0002589b) ai_message_heading_pane_t2_ParamLimits

0xb079,	// (0x0002589b) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0002a175) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0002a175) ai_message_heading_pane_t

0xb08b,	// (0x000258ad) bg_popup_heading_pane_cp1_ParamLimits

0xb08b,	// (0x000258ad) bg_popup_heading_pane_cp1

0xb01d,	// (0x0002583f) list_ai_message_pane_ParamLimits

0xb01d,	// (0x0002583f) list_ai_message_pane

0x8a42,	// (0x00023264) scroll_pane_cp10

0xafb9,	// (0x000257db) list_ai_message_pane_g1

0xafc1,	// (0x000257e3) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0002a149) list_ai_message_pane_g

0xafc9,	// (0x000257eb) list_ai_message_pane_t1_ParamLimits

0xafc9,	// (0x000257eb) list_ai_message_pane_t1

0xafde,	// (0x00025800) list_ai_message_pane_t2_ParamLimits

0xafde,	// (0x00025800) list_ai_message_pane_t2

0xaff3,	// (0x00025815) list_ai_message_pane_t3_ParamLimits

0xaff3,	// (0x00025815) list_ai_message_pane_t3

0xb008,	// (0x0002582a) list_ai_message_pane_t4_ParamLimits

0xb008,	// (0x0002582a) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0002a14e) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0002a14e) list_ai_message_pane_t

0xafa3,	// (0x000257c5) cell_ai_soft_ind_pane_ParamLimits

0xafa3,	// (0x000257c5) cell_ai_soft_ind_pane

0x963b,	// (0x00023e5d) cell_ai_soft_ind_pane_g1_ParamLimits

0x963b,	// (0x00023e5d) cell_ai_soft_ind_pane_g1

0x7f9a,	// (0x000227bc) grid_highlight_cp1

0x9648,	// (0x00023e6a) text_secondary_cp56_ParamLimits

0x9648,	// (0x00023e6a) text_secondary_cp56

0xaf78,	// (0x0002579a) example_general_pane_ParamLimits

0xaf78,	// (0x0002579a) example_general_pane

0xaf84,	// (0x000257a6) example_parent_pane_g1_ParamLimits

0xaf84,	// (0x000257a6) example_parent_pane_g1

0xaf90,	// (0x000257b2) example_parent_pane_t1_ParamLimits

0xaf90,	// (0x000257b2) example_parent_pane_t1

0x695d,	// (0x0002117f) popup_preview_text_window_ParamLimits

0x695d,	// (0x0002117f) popup_preview_text_window

0x9479,	// (0x00023c9b) list_single_pane_cp2_g4

0x839f,	// (0x00022bc1) bg_popup_preview_window_pane_ParamLimits

0x839f,	// (0x00022bc1) bg_popup_preview_window_pane

0xacc5,	// (0x000254e7) popup_preview_text_window_t1_ParamLimits

0xacc5,	// (0x000254e7) popup_preview_text_window_t1

0xace3,	// (0x00025505) popup_preview_text_window_t2_ParamLimits

0xace3,	// (0x00025505) popup_preview_text_window_t2

0xad2c,	// (0x0002554e) popup_preview_text_window_t3_ParamLimits

0xad2c,	// (0x0002554e) popup_preview_text_window_t3

0xad71,	// (0x00025593) popup_preview_text_window_t4_ParamLimits

0xad71,	// (0x00025593) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0002a11d) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0002a11d) popup_preview_text_window_t

0xadef,	// (0x00025611) scroll_pane_cp11

0x9d74,	// (0x00024596) bg_popup_preview_window_pane_g1

0xac85,	// (0x000254a7) bg_popup_preview_window_pane_g2

0xac8d,	// (0x000254af) bg_popup_preview_window_pane_g3

0xac95,	// (0x000254b7) bg_popup_preview_window_pane_g4

0xac9d,	// (0x000254bf) bg_popup_preview_window_pane_g5

0xaca5,	// (0x000254c7) bg_popup_preview_window_pane_g6

0xacad,	// (0x000254cf) bg_popup_preview_window_pane_g7

0xacb5,	// (0x000254d7) bg_popup_preview_window_pane_g8

0x5b9e,	// (0x000203c0) aid_popup_width_pane

0x693b,	// (0x0002115d) popup_midp_note_alarm_window_ParamLimits

0x693b,	// (0x0002115d) popup_midp_note_alarm_window

0x88c8,	// (0x000230ea) data_form_pane_ParamLimits

0x4f7e,	// (0x0001f7a0) form_field_data_pane_g1

0x4f88,	// (0x0001f7aa) form_field_data_pane_t1_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_ParamLimits

0x4fa2,	// (0x0001f7c4) data_form_wide_pane_ParamLimits

0x4fb3,	// (0x0001f7d5) form_field_data_wide_pane_g1

0x4fbf,	// (0x0001f7e1) form_field_data_wide_pane_t1_ParamLimits

0x8645,	// (0x00022e67) input_focus_pane_cp6_ParamLimits

0x89ed,	// (0x0002320f) input_popup_find_pane_g1_ParamLimits

0x89ed,	// (0x0002320f) input_popup_find_pane_g1

0x6104,	// (0x00020926) aid_navi_side_left_pane

0x6119,	// (0x0002093b) aid_navi_side_right_pane

0xa69e,	// (0x00024ec0) bg_popup_window_pane_cp30_ParamLimits

0xa69e,	// (0x00024ec0) bg_popup_window_pane_cp30

0xa718,	// (0x00024f3a) popup_midp_note_alarm_window_g1_ParamLimits

0xa718,	// (0x00024f3a) popup_midp_note_alarm_window_g1

0xa748,	// (0x00024f6a) popup_midp_note_alarm_window_t1_ParamLimits

0xa748,	// (0x00024f6a) popup_midp_note_alarm_window_t1

0xa7e9,	// (0x0002500b) popup_midp_note_alarm_window_t2_ParamLimits

0xa7e9,	// (0x0002500b) popup_midp_note_alarm_window_t2

0xa897,	// (0x000250b9) popup_midp_note_alarm_window_t3_ParamLimits

0xa897,	// (0x000250b9) popup_midp_note_alarm_window_t3

0xa8c9,	// (0x000250eb) popup_midp_note_alarm_window_t4_ParamLimits

0xa8c9,	// (0x000250eb) popup_midp_note_alarm_window_t4

0xa8ef,	// (0x00025111) popup_midp_note_alarm_window_t5_ParamLimits

0xa8ef,	// (0x00025111) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0002a0ba) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0002a0ba) popup_midp_note_alarm_window_t

0xa99b,	// (0x000251bd) wait_bar_pane_cp1_ParamLimits

0xa99b,	// (0x000251bd) wait_bar_pane_cp1

0x7f9a,	// (0x000227bc) wait_anim_pane_copy1

0x7f9a,	// (0x000227bc) wait_border_pane_copy1

0xa37c,	// (0x00024b9e) wait_border_pane_g1_copy1

0x4fd9,	// (0x0001f7fb) form_field_popup_pane_g1

0x4fe1,	// (0x0001f803) form_field_popup_pane_t1_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_cp7_ParamLimits

0x8902,	// (0x00023124) list_form_pane_ParamLimits

0x4ffb,	// (0x0001f81d) form_field_popup_wide_pane_g1

0x5003,	// (0x0001f825) form_field_popup_wide_pane_t1_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_cp8_ParamLimits

0x890e,	// (0x00023130) list_form_wide_pane_ParamLimits

0xb421,	// (0x00025c43) aid_size_cell_graphic_pane

0x5088,	// (0x0001f8aa) data_form_pane_t1_ParamLimits

0x5349,	// (0x0001fb6b) data_form_wide_pane_t1_ParamLimits

0x9949,	// (0x0002416b) bg_status_flat_pane

0x7fda,	// (0x000227fc) title_pane_t1_ParamLimits

0x8042,	// (0x00022864) title_pane_t2_ParamLimits

0x8068,	// (0x0002288a) title_pane_t3_ParamLimits

0xf557,	// (0x00029d79) title_pane_t_ParamLimits

0x8eb9,	// (0x000236db) level_1_signal_ParamLimits

0x8ec6,	// (0x000236e8) level_2_signal_ParamLimits

0x8ed3,	// (0x000236f5) level_3_signal_ParamLimits

0x8ee0,	// (0x00023702) level_4_signal_ParamLimits

0x8eed,	// (0x0002370f) level_5_signal_ParamLimits

0x8efa,	// (0x0002371c) level_6_signal_ParamLimits

0x8f07,	// (0x00023729) level_7_signal_ParamLimits

0x8eb9,	// (0x000236db) level_1_battery_ParamLimits

0x8ec6,	// (0x000236e8) level_2_battery_ParamLimits

0x8ed3,	// (0x000236f5) level_3_battery_ParamLimits

0x8ee0,	// (0x00023702) level_4_battery_ParamLimits

0x8eed,	// (0x0002370f) level_5_battery_ParamLimits

0x8efa,	// (0x0002371c) level_6_battery_ParamLimits

0x8f07,	// (0x00023729) level_7_battery_ParamLimits

0xa5a3,	// (0x00024dc5) bg_status_flat_pane_g1

0xa5ab,	// (0x00024dcd) bg_status_flat_pane_g2

0xa5b3,	// (0x00024dd5) bg_status_flat_pane_g3

0xa5bb,	// (0x00024ddd) bg_status_flat_pane_g4

0xa5c3,	// (0x00024de5) bg_status_flat_pane_g5

0xa5cb,	// (0x00024ded) bg_status_flat_pane_g6

0xa5d3,	// (0x00024df5) bg_status_flat_pane_g7

0x8090,	// (0x000228b2) tabs_3_active_pane_t1_ParamLimits

0x8090,	// (0x000228b2) tabs_3_passive_pane_t1_ParamLimits

0x80aa,	// (0x000228cc) tabs_4_active_pane_t1_ParamLimits

0x80aa,	// (0x000228cc) tabs_4_1_passive_pane_t1_ParamLimits

0x8a83,	// (0x000232a5) tabs_2_active_pane_t1_ParamLimits

0x8a83,	// (0x000232a5) tabs_2_passive_pane_t1_ParamLimits

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp4_ParamLimits

0x8aa3,	// (0x000232c5) tabs_2_long_active_pane_t1_ParamLimits

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp4_ParamLimits

0x6bfa,	// (0x0002141c) list_single_midp_graphic_pane_t1_ParamLimits

0x8a95,	// (0x000232b7) bg_active_tab_pane_cp5_ParamLimits

0x8ac2,	// (0x000232e4) tabs_3_long_active_pane_t1_ParamLimits

0x8ab6,	// (0x000232d8) bg_passive_tab_pane_cp5_ParamLimits

0x6bfa,	// (0x0002141c) list_single_midp_graphic_pane_t1

0x9949,	// (0x0002416b) bg_status_flat_pane_ParamLimits

0x9a0c,	// (0x0002422e) indicator_pane_cp2_ParamLimits

0x9a0c,	// (0x0002422e) indicator_pane_cp2

0x9b37,	// (0x00024359) navi_pane_srt_ParamLimits

0x9b37,	// (0x00024359) navi_pane_srt

0x9b5b,	// (0x0002437d) popup_clock_digital_analogue_window_cp1

0x8157,	// (0x00022979) indicator_pane_t1

0x953c,	// (0x00023d5e) copy_highlight_pane

0x953c,	// (0x00023d5e) cursor_graphics_pane

0x953c,	// (0x00023d5e) graphic_within_text_pane

0x953c,	// (0x00023d5e) link_highlight_pane

0xadb2,	// (0x000255d4) popup_preview_text_window_t5_ParamLimits

0xadb2,	// (0x000255d4) popup_preview_text_window_t5

0x9662,	// (0x00023e84) cursor_digital_pane

0x9662,	// (0x00023e84) cursor_primary_pane

0x9673,	// (0x00023e95) cursor_primary_small_pane

0x967b,	// (0x00023e9d) cursor_secondary_pane

0x9683,	// (0x00023ea5) cursor_title_pane

0x9662,	// (0x00023e84) link_highlight_digital_pane

0x966a,	// (0x00023e8c) link_highlight_primary_pane

0x9673,	// (0x00023e95) link_highlight_primary_small_pane

0x967b,	// (0x00023e9d) link_highlight_secondary_pane

0x9683,	// (0x00023ea5) link_highlight_title_pane

0x9662,	// (0x00023e84) copy_highlight_digital_pane

0x9662,	// (0x00023e84) copy_highlight_primary_pane

0x9673,	// (0x00023e95) copy_highlight_primary_small_pane

0x967b,	// (0x00023e9d) copy_highlight_secondary_pane

0x9683,	// (0x00023ea5) copy_highlight_title_pane

0x967b,	// (0x00023e9d) graphic_text_digital_pane

0xa641,	// (0x00024e63) graphic_text_primary_pane

0xa64a,	// (0x00024e6c) graphic_text_primary_small_pane

0x9673,	// (0x00023e95) graphic_text_secondary_pane

0x9662,	// (0x00023e84) graphic_text_title_pane

0x968b,	// (0x00023ead) cursor_primary_pane_g1

0xa633,	// (0x00024e55) cursor_text_primary_t1

0xa61b,	// (0x00024e3d) cursor_primary_small_pane_g1

0xa625,	// (0x00024e47) cursor_text_primary_small_t1

0xa603,	// (0x00024e25) cursor_primary_small_pane_g1_copy1

0xa60d,	// (0x00024e2f) cursor_text_primary_small_t1_copy1

0xa5eb,	// (0x00024e0d) cursor_text_title_t1

0xa5f9,	// (0x00024e1b) cursor_title_pane_g1

0x968b,	// (0x00023ead) cursor_digital_pane_g1

0x9695,	// (0x00023eb7) cursor_text_digital_t1

0xa58c,	// (0x00024dae) link_highlight_primary_pane_g1

0xa594,	// (0x00024db6) link_highlight_primary_pane_t1

0x96a3,	// (0x00023ec5) link_highlight_primary_small_pane_g1

0x96ab,	// (0x00023ecd) link_highlight_primary_small_pane_t1

0x96a3,	// (0x00023ec5) link_highlight_secondary_pane_g1

0x96ba,	// (0x00023edc) link_highlight_secondary_pane_t1

0xa500,	// (0x00024d22) link_highlight_title_pane_g1

0xa508,	// (0x00024d2a) link_highlight_title_pane_t1

0xa4e9,	// (0x00024d0b) link_highlight_digital_pane_g1

0xa4f1,	// (0x00024d13) link_highlight_digital_pane_t1

0xa3c1,	// (0x00024be3) copy_highlight_primary_pane_g1

0xa3c9,	// (0x00024beb) copy_highlight_primary_pane_t1

0xa39b,	// (0x00024bbd) copy_highlight_primary_small_pane_g1

0xa3b2,	// (0x00024bd4) copy_highlight_primary_small_pane_t1

0x96c9,	// (0x00023eeb) copy_highlight_secondary_pane_g1

0x96d1,	// (0x00023ef3) copy_highlight_secondary_pane_t1

0xa39b,	// (0x00024bbd) copy_highlight_title_pane_g1

0xa3a3,	// (0x00024bc5) copy_highlight_title_pane_t1

0xa3c1,	// (0x00024be3) copy_highlight_digital_pane_g1

0xb5ec,	// (0x00025e0e) copy_highlight_digital_pane_t1

0xb540,	// (0x00025d62) graphic_text_primary_pane_g1

0xb5d0,	// (0x00025df2) graphic_text_primary_pane_t1

0xb5de,	// (0x00025e00) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0002a1e9) graphic_text_primary_pane_t

0xb5ac,	// (0x00025dce) graphic_text_primary_small_pane_g1

0xb5b4,	// (0x00025dd6) graphic_text_primary_small_pane_t1

0xb5c2,	// (0x00025de4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0002a1e4) graphic_text_primary_small_pane_t

0xb588,	// (0x00025daa) graphic_text_secondary_pane_g1

0xb590,	// (0x00025db2) graphic_text_secondary_pane_t1

0xb59e,	// (0x00025dc0) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0002a1df) graphic_text_secondary_pane_t

0xb564,	// (0x00025d86) graphic_text_title_pane_g1

0xb56c,	// (0x00025d8e) graphic_text_title_pane_t1

0xb57a,	// (0x00025d9c) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0002a1da) graphic_text_title_pane_t

0xb540,	// (0x00025d62) graphic_text_digital_pane_g1

0xb548,	// (0x00025d6a) graphic_text_digital_pane_t1

0xb556,	// (0x00025d78) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0002a1d5) graphic_text_digital_pane_t

0x807a,	// (0x0002289c) navi_icon_pane_srt_ParamLimits

0x807a,	// (0x0002289c) navi_icon_pane_srt

0x7f9a,	// (0x000227bc) navi_midp_pane_srt

0x7f9a,	// (0x000227bc) navi_navi_pane_srt

0x807a,	// (0x0002289c) navi_text_pane_srt_ParamLimits

0x807a,	// (0x0002289c) navi_text_pane_srt

0xb50b,	// (0x00025d2d) navi_navi_icon_text_pane_srt

0xb513,	// (0x00025d35) navi_navi_pane_srt_g1_ParamLimits

0xb513,	// (0x00025d35) navi_navi_pane_srt_g1

0xb525,	// (0x00025d47) navi_navi_pane_srt_g2_ParamLimits

0xb525,	// (0x00025d47) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0002a1d0) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0002a1d0) navi_navi_pane_srt_g

0xb537,	// (0x00025d59) navi_navi_tabs_pane_srt

0xb50b,	// (0x00025d2d) navi_navi_text_pane_srt

0xb50b,	// (0x00025d2d) navi_navi_volume_pane_srt

0xb4fc,	// (0x00025d1e) navi_navi_text_pane_srt_t1

0x6f6e,	// (0x00021790) navi_navi_volume_pane_srt_g1

0x6f76,	// (0x00021798) volume_small_pane_srt_ParamLimits

0x6f76,	// (0x00021798) volume_small_pane_srt

0x63db,	// (0x00020bfd) volume_small_pane_srt_g1_ParamLimits

0x63db,	// (0x00020bfd) volume_small_pane_srt_g1

0x63eb,	// (0x00020c0d) volume_small_pane_srt_g2_ParamLimits

0x63eb,	// (0x00020c0d) volume_small_pane_srt_g2

0x63fc,	// (0x00020c1e) volume_small_pane_srt_g3_ParamLimits

0x63fc,	// (0x00020c1e) volume_small_pane_srt_g3

0x640d,	// (0x00020c2f) volume_small_pane_srt_g4_ParamLimits

0x640d,	// (0x00020c2f) volume_small_pane_srt_g4

0x641e,	// (0x00020c40) volume_small_pane_srt_g5_ParamLimits

0x641e,	// (0x00020c40) volume_small_pane_srt_g5

0x642f,	// (0x00020c51) volume_small_pane_srt_g6_ParamLimits

0x642f,	// (0x00020c51) volume_small_pane_srt_g6

0x6440,	// (0x00020c62) volume_small_pane_srt_g7_ParamLimits

0x6440,	// (0x00020c62) volume_small_pane_srt_g7

0x6451,	// (0x00020c73) volume_small_pane_srt_g8_ParamLimits

0x6451,	// (0x00020c73) volume_small_pane_srt_g8

0x6462,	// (0x00020c84) volume_small_pane_srt_g9_ParamLimits

0x6462,	// (0x00020c84) volume_small_pane_srt_g9

0x6473,	// (0x00020c95) volume_small_pane_srt_g10_ParamLimits

0x6473,	// (0x00020c95) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00029f7f) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00029f7f) volume_small_pane_srt_g

0x8448,	// (0x00022c6a) query_popup_data_pane_cp2

0xb4e2,	// (0x00025d04) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e2,	// (0x00025d04) navi_navi_icon_text_pane_srt_t1

0xa641,	// (0x00024e63) navi_tabs_2_long_pane_srt

0xa641,	// (0x00024e63) navi_tabs_2_pane_srt

0xa641,	// (0x00024e63) navi_tabs_3_long_pane_srt

0xa641,	// (0x00024e63) navi_tabs_3_pane_srt

0xa641,	// (0x00024e63) navi_tabs_4_pane_srt

0x6f4e,	// (0x00021770) tabs_2_active_pane_srt_ParamLimits

0x6f4e,	// (0x00021770) tabs_2_active_pane_srt

0x6f5e,	// (0x00021780) tabs_2_passive_pane_srt_ParamLimits

0x6f5e,	// (0x00021780) tabs_2_passive_pane_srt

0x9876,	// (0x00024098) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9876,	// (0x00024098) bg_passive_tab_pane_cp1_srt

0xb4ae,	// (0x00025cd0) bg_passive_tab_pane_g1_cp1_srt

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00025cd9) bg_passive_tab_pane_g3_cp1_srt

0x807a,	// (0x0002289c) bg_active_tab_pane_cp1_srt_ParamLimits

0x807a,	// (0x0002289c) bg_active_tab_pane_cp1_srt

0xb4c0,	// (0x00025ce2) tabs_2_active_pane_srt_g1

0xb4c8,	// (0x00025cea) tabs_2_active_pane_srt_t1_ParamLimits

0xb4c8,	// (0x00025cea) tabs_2_active_pane_srt_t1

0xb4ae,	// (0x00025cd0) bg_active_tab_pane_g1_cp1_srt

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp1_srt

0xb4b7,	// (0x00025cd9) bg_active_tab_pane_g3_cp1_srt

0x6f1b,	// (0x0002173d) tabs_3_active_pane_srt_ParamLimits

0x6f1b,	// (0x0002173d) tabs_3_active_pane_srt

0x6f2c,	// (0x0002174e) tabs_3_passive_pane_cp_srt_ParamLimits

0x6f2c,	// (0x0002174e) tabs_3_passive_pane_cp_srt

0x6f3d,	// (0x0002175f) tabs_3_passive_pane_srt_ParamLimits

0x6f3d,	// (0x0002175f) tabs_3_passive_pane_srt

0x9876,	// (0x00024098) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9876,	// (0x00024098) bg_passive_tab_pane_cp2_srt

0x96e0,	// (0x00023f02) bg_passive_tab_pane_g1_cp2_srt

0x918d,	// (0x000239af) bg_passive_tab_pane_g2_cp2_srt

0x96e9,	// (0x00023f0b) bg_passive_tab_pane_g3_cp2_srt

0x807a,	// (0x0002289c) bg_active_tab_pane_cp2_srt_ParamLimits

0x807a,	// (0x0002289c) bg_active_tab_pane_cp2_srt

0xb494,	// (0x00025cb6) tabs_3_active_pane_srt_g1

0xb49c,	// (0x00025cbe) tabs_3_active_pane_srt_t1_ParamLimits

0xb49c,	// (0x00025cbe) tabs_3_active_pane_srt_t1

0x96e0,	// (0x00023f02) bg_active_tab_pane_g1_cp2_srt

0x918d,	// (0x000239af) bg_active_tab_pane_g2_cp2_srt

0x96e9,	// (0x00023f0b) bg_active_tab_pane_g3_cp2_srt

0x6ed3,	// (0x000216f5) tabs_4_active_pane_srt_ParamLimits

0x6ed3,	// (0x000216f5) tabs_4_active_pane_srt

0x6ee5,	// (0x00021707) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6ee5,	// (0x00021707) tabs_4_passive_pane_cp2_srt

0x65d6,	// (0x00020df8) aid_size_cell_toolbar

0x8ab6,	// (0x000232d8) main_idle_act_pane_ParamLimits

0x676f,	// (0x00020f91) popup_large_graphic_colour_window_ParamLimits

0x6ad4,	// (0x000212f6) popup_toolbar_window_ParamLimits

0x6ad4,	// (0x000212f6) popup_toolbar_window

0xb307,	// (0x00025b29) list_single_graphic_2heading_pane_ParamLimits

0xb307,	// (0x00025b29) list_single_graphic_2heading_pane

0x8c6f,	// (0x00023491) aid_size_cell_apps_grid_lsc_pane

0x8c81,	// (0x000234a3) aid_size_cell_apps_grid_prt_pane

0x9876,	// (0x00024098) bg_wml_button_pane_cp1_ParamLimits

0x9876,	// (0x00024098) bg_wml_button_pane_cp1

0xa030,	// (0x00024852) form_midp_field_text_pane_t1_ParamLimits

0x9de8,	// (0x0002460a) input_focus_pane_cp050_ParamLimits

0xa06b,	// (0x0002488d) list_midp_form_text_pane_ParamLimits

0xa00d,	// (0x0002482f) input_focus_pane_cp051_ParamLimits

0xa021,	// (0x00024843) list_midp_choice_pane_ParamLimits

0x9e9e,	// (0x000246c0) list_single_2graphic_pane_cp3_ParamLimits

0x9e9e,	// (0x000246c0) list_single_2graphic_pane_cp3

0x9ec9,	// (0x000246eb) list_single_midp_graphic_pane_ParamLimits

0x9ec9,	// (0x000246eb) list_single_midp_graphic_pane

0x51ce,	// (0x0001f9f0) list_single_graphic_2heading_pane_g1_ParamLimits

0x51ce,	// (0x0001f9f0) list_single_graphic_2heading_pane_g1

0x4b04,	// (0x0001f326) list_single_graphic_2heading_pane_g4_ParamLimits

0x4b04,	// (0x0001f326) list_single_graphic_2heading_pane_g4

0x4b10,	// (0x0001f332) list_single_graphic_2heading_pane_g5_ParamLimits

0x4b10,	// (0x0001f332) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00029fd2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00029fd2) list_single_graphic_2heading_pane_g

0x51da,	// (0x0001f9fc) list_single_graphic_2heading_pane_t1_ParamLimits

0x51da,	// (0x0001f9fc) list_single_graphic_2heading_pane_t1

0x51ee,	// (0x0001fa10) list_single_graphic_2heading_pane_t2_ParamLimits

0x51ee,	// (0x0001fa10) list_single_graphic_2heading_pane_t2

0x5208,	// (0x0001fa2a) list_single_graphic_2heading_pane_t3_ParamLimits

0x5208,	// (0x0001fa2a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00029fd9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00029fd9) list_single_graphic_2heading_pane_t

0x9cb2,	// (0x000244d4) bg_popup_sub_pane_cp2

0x9cdc,	// (0x000244fe) grid_toobar_pane

0x6b7f,	// (0x000213a1) cell_toolbar_pane_ParamLimits

0x6b7f,	// (0x000213a1) cell_toolbar_pane

0x9d18,	// (0x0002453a) cell_toolbar_pane_g1_ParamLimits

0x9d18,	// (0x0002453a) cell_toolbar_pane_g1

0x9d2c,	// (0x0002454e) cell_toolbar_pane_g2_ParamLimits

0x9d2c,	// (0x0002454e) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x00029fe0) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x00029fe0) cell_toolbar_pane_g

0x9d4e,	// (0x00024570) grid_highlight_pane_cp2_ParamLimits

0x9d4e,	// (0x00024570) grid_highlight_pane_cp2

0x9d68,	// (0x0002458a) toolbar_button_pane

0x9d74,	// (0x00024596) toolbar_button_pane_g1

0x9d7c,	// (0x0002459e) toolbar_button_pane_g2

0x9d84,	// (0x000245a6) toolbar_button_pane_g3

0x9d8c,	// (0x000245ae) toolbar_button_pane_g4

0x9d94,	// (0x000245b6) toolbar_button_pane_g5

0x9d9c,	// (0x000245be) toolbar_button_pane_g6

0x9da4,	// (0x000245c6) toolbar_button_pane_g7

0x9dac,	// (0x000245ce) toolbar_button_pane_g8

0x9db4,	// (0x000245d6) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x00029fe5) toolbar_button_pane_g

0x6bb7,	// (0x000213d9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6bb7,	// (0x000213d9) list_single_2graphic_pane_g1_cp3

0x6bc3,	// (0x000213e5) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6bc3,	// (0x000213e5) list_single_2graphic_pane_g2_cp3

0x9378,	// (0x00023b9a) list_single_2graphic_pane_g3_cp3

0x6bd4,	// (0x000213f6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6bd4,	// (0x000213f6) list_single_2graphic_pane_g4_cp3

0x6be0,	// (0x00021402) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6be0,	// (0x00021402) list_single_2graphic_pane_t1_cp3

0x936c,	// (0x00023b8e) list_single_midp_graphic_pane_g2_ParamLimits

0x936c,	// (0x00023b8e) list_single_midp_graphic_pane_g2

0x65de,	// (0x00020e00) aid_zoom_text_primary

0x51a2,	// (0x0001f9c4) aid_zoom_text_secondary

0x979a,	// (0x00023fbc) status_small_pane_g7_ParamLimits

0x979a,	// (0x00023fbc) status_small_pane_g7

0x97bd,	// (0x00023fdf) status_small_pane_t1_ParamLimits

0x7fb1,	// (0x000227d3) title_pane_g2

0x0003,

0xf54e,	// (0x00029d70) title_pane_g

0x84ec,	// (0x00022d0e) aid_size_cell_colour_1_pane_ParamLimits

0x84ec,	// (0x00022d0e) aid_size_cell_colour_1_pane

0x8500,	// (0x00022d22) aid_size_cell_colour_2_pane_ParamLimits

0x8500,	// (0x00022d22) aid_size_cell_colour_2_pane

0x8514,	// (0x00022d36) aid_size_cell_colour_3_pane_ParamLimits

0x8514,	// (0x00022d36) aid_size_cell_colour_3_pane

0x8528,	// (0x00022d4a) aid_size_cell_colour_4_pane_ParamLimits

0x8528,	// (0x00022d4a) aid_size_cell_colour_4_pane

0x6040,	// (0x00020862) title_pane_stacon_g1_ParamLimits

0x6040,	// (0x00020862) title_pane_stacon_g1

0xa420,	// (0x00024c42) popup_note_wait_window_g3_ParamLimits

0xa420,	// (0x00024c42) popup_note_wait_window_g3

0xa496,	// (0x00024cb8) popup_note_wait_window_t5_ParamLimits

0xa496,	// (0x00024cb8) popup_note_wait_window_t5

0x7f9a,	// (0x000227bc) main_feb_china_hwr_fs_writing_pane

0x6658,	// (0x00020e7a) popup_feb_china_hwr_fs_window_ParamLimits

0x6658,	// (0x00020e7a) popup_feb_china_hwr_fs_window

0x6c10,	// (0x00021432) aid_size_cell_hwr_fs_ParamLimits

0x6c10,	// (0x00021432) aid_size_cell_hwr_fs

0x9de8,	// (0x0002460a) bg_popup_sub_pane_cp3_ParamLimits

0x9de8,	// (0x0002460a) bg_popup_sub_pane_cp3

0x6c25,	// (0x00021447) grid_hwr_fs_pane_ParamLimits

0x6c25,	// (0x00021447) grid_hwr_fs_pane

0x6c3d,	// (0x0002145f) linegrid_hwr_fs_pane_ParamLimits

0x6c3d,	// (0x0002145f) linegrid_hwr_fs_pane

0x6c4d,	// (0x0002146f) cell_hwr_fs_pane_ParamLimits

0x6c4d,	// (0x0002146f) cell_hwr_fs_pane

0x9df4,	// (0x00024616) linegrid_hwr_fs_pane_g1_ParamLimits

0x9df4,	// (0x00024616) linegrid_hwr_fs_pane_g1

0x9e00,	// (0x00024622) linegrid_hwr_fs_pane_g2_ParamLimits

0x9e00,	// (0x00024622) linegrid_hwr_fs_pane_g2

0x9e12,	// (0x00024634) linegrid_hwr_fs_pane_g3_ParamLimits

0x9e12,	// (0x00024634) linegrid_hwr_fs_pane_g3

0x6c6f,	// (0x00021491) linegrid_hwr_fs_pane_g4_ParamLimits

0x6c6f,	// (0x00021491) linegrid_hwr_fs_pane_g4

0x6c89,	// (0x000214ab) linegrid_hwr_fs_pane_g5_ParamLimits

0x6c89,	// (0x000214ab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0002a010) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0002a010) linegrid_hwr_fs_pane_g

0x9e1e,	// (0x00024640) cell_hwr_fs_pane_g1_ParamLimits

0x9e1e,	// (0x00024640) cell_hwr_fs_pane_g1

0x9be9,	// (0x0002440b) cell_hwr_fs_pane_g2_ParamLimits

0x9be9,	// (0x0002440b) cell_hwr_fs_pane_g2

0x9e34,	// (0x00024656) cell_hwr_fs_pane_g3_ParamLimits

0x9e34,	// (0x00024656) cell_hwr_fs_pane_g3

0x9e41,	// (0x00024663) cell_hwr_fs_pane_g4_ParamLimits

0x9e41,	// (0x00024663) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0002a01b) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0002a01b) cell_hwr_fs_pane_g

0x6c9f,	// (0x000214c1) cell_hwr_fs_pane_t1

0x7f9a,	// (0x000227bc) grid_highlight_pane_cp6

0x7f9a,	// (0x000227bc) main_idle_act2_pane

0x8a29,	// (0x0002324b) aid_inside_area_popup_secondary

0xaad5,	// (0x000252f7) aid_inside_area_window_primary_ParamLimits

0xaad5,	// (0x000252f7) aid_inside_area_window_primary

0xb5fb,	// (0x00025e1d) ai2_news_ticker_pane

0xb603,	// (0x00025e25) aid_size_cell_ai1_link_ParamLimits

0xb603,	// (0x00025e25) aid_size_cell_ai1_link

0xb61d,	// (0x00025e3f) popup_ai2_data_window_ParamLimits

0xb61d,	// (0x00025e3f) popup_ai2_data_window

0xb631,	// (0x00025e53) popup_ai2_link_window_ParamLimits

0xb631,	// (0x00025e53) popup_ai2_link_window

0x9de8,	// (0x0002460a) bg_popup_sub_pane_cp4_ParamLimits

0x9de8,	// (0x0002460a) bg_popup_sub_pane_cp4

0xb645,	// (0x00025e67) grid_ai2_link_pane_ParamLimits

0xb645,	// (0x00025e67) grid_ai2_link_pane

0xb65c,	// (0x00025e7e) popup_ai2_link_window_g1_ParamLimits

0xb65c,	// (0x00025e7e) popup_ai2_link_window_g1

0xb668,	// (0x00025e8a) popup_ai2_link_window_g2_ParamLimits

0xb668,	// (0x00025e8a) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0002a1ee) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0002a1ee) popup_ai2_link_window_g

0xb677,	// (0x00025e99) ai2_mp_button_pane

0xb67f,	// (0x00025ea1) ai2_mp_volume_pane

0xa00d,	// (0x0002482f) bg_popup_sub_pane_cp5_ParamLimits

0xa00d,	// (0x0002482f) bg_popup_sub_pane_cp5

0xb687,	// (0x00025ea9) heading_ai2_gene_pane_ParamLimits

0xb687,	// (0x00025ea9) heading_ai2_gene_pane

0xb693,	// (0x00025eb5) list_ai2_gene_pane_ParamLimits

0xb693,	// (0x00025eb5) list_ai2_gene_pane

0xb6db,	// (0x00025efd) cell_ai2_link_pane_ParamLimits

0xb6db,	// (0x00025efd) cell_ai2_link_pane

0xb6f1,	// (0x00025f13) cell_ai2_link_pane_g1

0x7f9a,	// (0x000227bc) grid_highlight_pane_cp7

0x6f8b,	// (0x000217ad) ai2_mp_volume_pane_g1

0xb7c2,	// (0x00025fe4) ai2_mp_volume_pane_g2

0xb737,	// (0x00025f59) list_ai2_gene_pane_t1

0xb7ca,	// (0x00025fec) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0002a207) ai2_mp_volume_pane_g

0x6f93,	// (0x000217b5) volume_small_pane_cp3

0xb7d2,	// (0x00025ff4) aid_size_cell_ai2_button

0xb7da,	// (0x00025ffc) grid_ai2_button_pane

0xb7e3,	// (0x00026005) cell_ai2_button_pane_ParamLimits

0xb7e3,	// (0x00026005) cell_ai2_button_pane

0x7f90,	// (0x000227b2) cell_ai2_button_pane_g1

0x7f9a,	// (0x000227bc) grid_highlight_pane_cp8

0xb782,	// (0x00025fa4) ai2_gene_pane_t1_ParamLimits

0xb782,	// (0x00025fa4) ai2_gene_pane_t1

0x65cc,	// (0x00020dee) aid_height_parent_landscape

0xb146,	// (0x00025968) aid_height_set_list

0xb157,	// (0x00025979) aid_size_parent

0xb421,	// (0x00025c43) aid_size_cell_graphic_pane_ParamLimits

0xb6a3,	// (0x00025ec5) popup_ai2_data_window_g1_ParamLimits

0xb6a3,	// (0x00025ec5) popup_ai2_data_window_g1

0xb6af,	// (0x00025ed1) ai2_news_ticker_pane_g1

0xb6b7,	// (0x00025ed9) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0002a1f3) ai2_news_ticker_pane_g

0xb6bf,	// (0x00025ee1) ai2_news_ticker_pane_t1

0xb6cd,	// (0x00025eef) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0002a1f8) ai2_news_ticker_pane_t

0xb6fa,	// (0x00025f1c) heading_ai2_gene_pane_g1

0xb702,	// (0x00025f24) heading_ai2_gene_pane_t1_ParamLimits

0xb702,	// (0x00025f24) heading_ai2_gene_pane_t1

0xb717,	// (0x00025f39) list_highlight_pane_cp6

0xb71f,	// (0x00025f41) ai2_gene_pane_ParamLimits

0xb71f,	// (0x00025f41) ai2_gene_pane

0xb745,	// (0x00025f67) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0002a1fd) list_ai2_gene_pane_t

0xb753,	// (0x00025f75) list_highlight_pane_cp8_ParamLimits

0xb753,	// (0x00025f75) list_highlight_pane_cp8

0xb764,	// (0x00025f86) ai2_gene_pane_g1_ParamLimits

0xb764,	// (0x00025f86) ai2_gene_pane_g1

0xb776,	// (0x00025f98) ai2_gene_pane_g2_ParamLimits

0xb776,	// (0x00025f98) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0002a202) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0002a202) ai2_gene_pane_g

0x886a,	// (0x0002308c) scroll_pane_cp12

0x658b,	// (0x00020dad) control_pane_t3_ParamLimits

0x658b,	// (0x00020dad) control_pane_t3

0x97ae,	// (0x00023fd0) status_small_pane_g8_ParamLimits

0x97ae,	// (0x00023fd0) status_small_pane_g8

0x673a,	// (0x00020f5c) popup_find_window_ParamLimits

0x694f,	// (0x00021171) popup_note_image_window_ParamLimits

0x51ce,	// (0x0001f9f0) list_double2_graphic_pane_vc_g1_ParamLimits

0x51ce,	// (0x0001f9f0) list_double2_graphic_pane_vc_g1

0x4b04,	// (0x0001f326) list_double2_graphic_pane_vc_g2_ParamLimits

0x4b04,	// (0x0001f326) list_double2_graphic_pane_vc_g2

0x4b10,	// (0x0001f332) list_double2_graphic_pane_vc_g3_ParamLimits

0x4b10,	// (0x0001f332) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x00029fd2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x00029fd2) list_double2_graphic_pane_vc_g

0x5220,	// (0x0001fa42) list_double2_graphic_pane_vc_t1_ParamLimits

0x5220,	// (0x0001fa42) list_double2_graphic_pane_vc_t1

0x4b04,	// (0x0001f326) list_single_heading_pane_vc_g1_ParamLimits

0x4b04,	// (0x0001f326) list_single_heading_pane_vc_g1

0x4b10,	// (0x0001f332) list_single_heading_pane_vc_g2_ParamLimits

0x4b10,	// (0x0001f332) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x00029ffa) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x00029ffa) list_single_heading_pane_vc_g

0x5236,	// (0x0001fa58) list_single_heading_pane_vc_t1_ParamLimits

0x5236,	// (0x0001fa58) list_single_heading_pane_vc_t1

0x524c,	// (0x0001fa6e) list_single_heading_pane_vc_t2_ParamLimits

0x524c,	// (0x0001fa6e) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x00029fff) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x00029fff) list_single_heading_pane_vc_t

0x5268,	// (0x0001fa8a) list_setting_number_pane_vc_g1_ParamLimits

0x5268,	// (0x0001fa8a) list_setting_number_pane_vc_g1

0x5274,	// (0x0001fa96) list_setting_number_pane_vc_g2_ParamLimits

0x5274,	// (0x0001fa96) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a004) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a004) list_setting_number_pane_vc_g

0x5280,	// (0x0001faa2) list_setting_number_pane_vc_t1_ParamLimits

0x5280,	// (0x0001faa2) list_setting_number_pane_vc_t1

0x5294,	// (0x0001fab6) list_setting_number_pane_vc_t2_ParamLimits

0x5294,	// (0x0001fab6) list_setting_number_pane_vc_t2

0x52ae,	// (0x0001fad0) list_setting_number_pane_vc_t3_ParamLimits

0x52ae,	// (0x0001fad0) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0002a009) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0002a009) list_setting_number_pane_vc_t

0x52c8,	// (0x0001faea) set_value_pane_vc_ParamLimits

0x52c8,	// (0x0001faea) set_value_pane_vc

0xb307,	// (0x00025b29) list_double2_graphic_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double2_graphic_pane_vc

0xb307,	// (0x00025b29) list_double2_large_graphic_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double2_large_graphic_pane_vc

0xb307,	// (0x00025b29) list_double2_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double2_pane_vc

0xb307,	// (0x00025b29) list_double_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double_graphic_heading_pane_vc

0xb307,	// (0x00025b29) list_double_graphic_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double_graphic_pane_vc

0xb307,	// (0x00025b29) list_double_heading_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double_heading_pane_vc

0x53ac,	// (0x0001fbce) list_double_large_graphic_pane_vc_ParamLimits

0x53ac,	// (0x0001fbce) list_double_large_graphic_pane_vc

0xb307,	// (0x00025b29) list_double_number_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double_number_pane_vc

0xb307,	// (0x00025b29) list_double_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double_pane_vc

0xb307,	// (0x00025b29) list_double_time_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_double_time_pane_vc

0xb307,	// (0x00025b29) list_setting_number_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_setting_number_pane_vc

0xb307,	// (0x00025b29) list_setting_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_setting_pane_vc

0xb307,	// (0x00025b29) list_single_graphic_heading_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_single_graphic_heading_pane_vc

0xb307,	// (0x00025b29) list_single_heading_pane_vc_ParamLimits

0xb307,	// (0x00025b29) list_single_heading_pane_vc

0x53cc,	// (0x0001fbee) list_single_number_heading_pane_vc_ParamLimits

0x53cc,	// (0x0001fbee) list_single_number_heading_pane_vc

0x549e,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x549e,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_g1

0x4b04,	// (0x0001f326) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4b04,	// (0x0001f326) list_double_graphic_heading_pane_vc_g2

0x4b10,	// (0x0001f332) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4b10,	// (0x0001f332) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ec,	// (0x0002a20e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002a20e) list_double_graphic_heading_pane_vc_g

0x54aa,	// (0x0001fccc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x54aa,	// (0x0001fccc) list_double_graphic_heading_pane_vc_t1

0x54c6,	// (0x0001fce8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x54c6,	// (0x0001fce8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0002a215) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0002a215) list_double_graphic_heading_pane_vc_t

0x5268,	// (0x0001fa8a) list_setting_pane_vc_g1_ParamLimits

0x5268,	// (0x0001fa8a) list_setting_pane_vc_g1

0x5274,	// (0x0001fa96) list_setting_pane_vc_g2_ParamLimits

0x5274,	// (0x0001fa96) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0002a004) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0002a004) list_setting_pane_vc_g

0x54de,	// (0x0001fd00) list_setting_pane_vc_t1_ParamLimits

0x54de,	// (0x0001fd00) list_setting_pane_vc_t1

0x54f8,	// (0x0001fd1a) list_setting_pane_vc_t2_ParamLimits

0x54f8,	// (0x0001fd1a) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0002a258) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0002a258) list_setting_pane_vc_t

0x52c8,	// (0x0001faea) set_value_pane_cp_vc_ParamLimits

0x52c8,	// (0x0001faea) set_value_pane_cp_vc

0x4b04,	// (0x0001f326) list_single_number_heading_pane_vc_g1_ParamLimits

0x4b04,	// (0x0001f326) list_single_number_heading_pane_vc_g1

0x4b10,	// (0x0001f332) list_single_number_heading_pane_vc_g2_ParamLimits

0x4b10,	// (0x0001f332) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x00029ffa) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x00029ffa) list_single_number_heading_pane_vc_g

0x5236,	// (0x0001fa58) list_single_number_heading_pane_vc_t1_ParamLimits

0x5236,	// (0x0001fa58) list_single_number_heading_pane_vc_t1

0x5510,	// (0x0001fd32) list_single_number_heading_pane_vc_t2_ParamLimits

0x5510,	// (0x0001fd32) list_single_number_heading_pane_vc_t2

0x5524,	// (0x0001fd46) list_single_number_heading_pane_vc_t3_ParamLimits

0x5524,	// (0x0001fd46) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0002a25d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0002a25d) list_single_number_heading_pane_vc_t

0x51ce,	// (0x0001f9f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x51ce,	// (0x0001f9f0) list_single_graphic_heading_pane_vc_g1

0x4b04,	// (0x0001f326) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4b04,	// (0x0001f326) list_single_graphic_heading_pane_vc_g4

0x4b10,	// (0x0001f332) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4b10,	// (0x0001f332) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x00029fd2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x00029fd2) list_single_graphic_heading_pane_vc_g

0x5236,	// (0x0001fa58) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5236,	// (0x0001fa58) list_single_graphic_heading_pane_vc_t1

0x5536,	// (0x0001fd58) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5536,	// (0x0001fd58) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0002a264) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0002a264) list_single_graphic_heading_pane_vc_t

0x4b04,	// (0x0001f326) list_double2_pane_vc_g1_ParamLimits

0x4b04,	// (0x0001f326) list_double2_pane_vc_g1

0x4b10,	// (0x0001f332) list_double2_pane_vc_g2_ParamLimits

0x4b10,	// (0x0001f332) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x00029ffa) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x00029ffa) list_double2_pane_vc_g

0x554a,	// (0x0001fd6c) list_double2_pane_vc_t1_ParamLimits

0x554a,	// (0x0001fd6c) list_double2_pane_vc_t1

0x5560,	// (0x0001fd82) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5560,	// (0x0001fd82) list_double2_large_graphic_pane_vc_g1

0x4b04,	// (0x0001f326) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4b04,	// (0x0001f326) list_double2_large_graphic_pane_vc_g2

0x4b10,	// (0x0001f332) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4b10,	// (0x0001f332) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x0002a269) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0002a269) list_double2_large_graphic_pane_vc_g

0x556c,	// (0x0001fd8e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x556c,	// (0x0001fd8e) list_double2_large_graphic_pane_vc_t1

0x5582,	// (0x0001fda4) list_double_time_pane_vc_g1_ParamLimits

0x5582,	// (0x0001fda4) list_double_time_pane_vc_g1

0x558e,	// (0x0001fdb0) list_double_time_pane_vc_g2_ParamLimits

0x558e,	// (0x0001fdb0) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0002a270) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0002a270) list_double_time_pane_vc_g

0x559a,	// (0x0001fdbc) list_double_time_pane_vc_t1_ParamLimits

0x559a,	// (0x0001fdbc) list_double_time_pane_vc_t1

0x55b8,	// (0x0001fdda) list_double_time_pane_vc_t2_ParamLimits

0x55b8,	// (0x0001fdda) list_double_time_pane_vc_t2

0x5602,	// (0x0001fe24) list_double_time_pane_vc_t3_ParamLimits

0x5602,	// (0x0001fe24) list_double_time_pane_vc_t3

0x5614,	// (0x0001fe36) list_double_time_pane_vc_t4_ParamLimits

0x5614,	// (0x0001fe36) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0002a275) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0002a275) list_double_time_pane_vc_t

0x4b04,	// (0x0001f326) list_double_pane_vc_g1_ParamLimits

0x4b04,	// (0x0001f326) list_double_pane_vc_g1

0x4b10,	// (0x0001f332) list_double_pane_vc_g2_ParamLimits

0x4b10,	// (0x0001f332) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x00029ffa) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x00029ffa) list_double_pane_vc_g

0x5628,	// (0x0001fe4a) list_double_pane_vc_t1_ParamLimits

0x5628,	// (0x0001fe4a) list_double_pane_vc_t1

0x563a,	// (0x0001fe5c) list_double_pane_vc_t2_ParamLimits

0x563a,	// (0x0001fe5c) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002a27e) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002a27e) list_double_pane_vc_t

0x4b04,	// (0x0001f326) list_double_number_pane_vc_g1_ParamLimits

0x4b04,	// (0x0001f326) list_double_number_pane_vc_g1

0x4b10,	// (0x0001f332) list_double_number_pane_vc_g2_ParamLimits

0x4b10,	// (0x0001f332) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00029ffa) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00029ffa) list_double_number_pane_vc_g

0x5652,	// (0x0001fe74) list_double_number_pane_vc_t1_ParamLimits

0x5652,	// (0x0001fe74) list_double_number_pane_vc_t1

0x5664,	// (0x0001fe86) list_double_number_pane_vc_t2_ParamLimits

0x5664,	// (0x0001fe86) list_double_number_pane_vc_t2

0x5676,	// (0x0001fe98) list_double_number_pane_vc_t3_ParamLimits

0x5676,	// (0x0001fe98) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0002a283) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0002a283) list_double_number_pane_vc_t

0x568e,	// (0x0001feb0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x568e,	// (0x0001feb0) list_double_large_graphic_pane_vc_g1

0x56aa,	// (0x0001fecc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x56aa,	// (0x0001fecc) list_double_large_graphic_pane_vc_g2

0x56be,	// (0x0001fee0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x56be,	// (0x0001fee0) list_double_large_graphic_pane_vc_g3

0x56cd,	// (0x0001feef) list_double_large_graphic_pane_vc_g4_ParamLimits

0x56cd,	// (0x0001feef) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0002a28a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002a28a) list_double_large_graphic_pane_vc_g

0x56dc,	// (0x0001fefe) list_double_large_graphic_pane_vc_t1_ParamLimits

0x56dc,	// (0x0001fefe) list_double_large_graphic_pane_vc_t1

0x56f6,	// (0x0001ff18) list_double_large_graphic_pane_vc_t2_ParamLimits

0x56f6,	// (0x0001ff18) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002a293) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002a293) list_double_large_graphic_pane_vc_t

0x4b04,	// (0x0001f326) list_double_heading_pane_vc_g1_ParamLimits

0x4b04,	// (0x0001f326) list_double_heading_pane_vc_g1

0x4b10,	// (0x0001f332) list_double_heading_pane_vc_g2_ParamLimits

0x4b10,	// (0x0001f332) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x00029ffa) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x00029ffa) list_double_heading_pane_vc_g

0x5718,	// (0x0001ff3a) list_double_heading_pane_vc_t1_ParamLimits

0x5718,	// (0x0001ff3a) list_double_heading_pane_vc_t1

0x5236,	// (0x0001fa58) list_double_heading_pane_vc_t2_ParamLimits

0x5236,	// (0x0001fa58) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0002a298) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0002a298) list_double_heading_pane_vc_t

0x572c,	// (0x0001ff4e) list_double_graphic_pane_vc_g1_ParamLimits

0x572c,	// (0x0001ff4e) list_double_graphic_pane_vc_g1

0x573f,	// (0x0001ff61) list_double_graphic_pane_vc_g2_ParamLimits

0x573f,	// (0x0001ff61) list_double_graphic_pane_vc_g2

0x4b04,	// (0x0001f326) list_double_graphic_pane_vc_g3_ParamLimits

0x4b04,	// (0x0001f326) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x0002a29d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0002a29d) list_double_graphic_pane_vc_g

0x575c,	// (0x0001ff7e) list_double_graphic_pane_vc_t1_ParamLimits

0x575c,	// (0x0001ff7e) list_double_graphic_pane_vc_t1

0x577a,	// (0x0001ff9c) list_double_graphic_pane_vc_t2_ParamLimits

0x577a,	// (0x0001ff9c) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0002a2a6) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a2a6) list_double_graphic_pane_vc_t

0x5baa,	// (0x000203cc) aid_size_cell_fastswap

0x5bb2,	// (0x000203d4) aid_size_cell_touch_ParamLimits

0x5bb2,	// (0x000203d4) aid_size_cell_touch

0x5e0d,	// (0x0002062f) popup_fast_swap_wide_window_ParamLimits

0x5e0d,	// (0x0002062f) popup_fast_swap_wide_window

0x5f13,	// (0x00020735) touch_pane_ParamLimits

0x5f13,	// (0x00020735) touch_pane

0x88c0,	// (0x000230e2) button_value_adjust_pane_cp2

0x4ed4,	// (0x0001f6f6) button_value_adjust_pane_cp4

0x4ef4,	// (0x0001f716) form_field_data_pane_cp2

0x4f13,	// (0x0001f735) form_field_data_wide_pane_cp2

0x8d38,	// (0x0002355a) bg_scroll_pane_ParamLimits

0x61a3,	// (0x000209c5) scroll_handle_pane_ParamLimits

0x61b7,	// (0x000209d9) scroll_sc2_down_pane_ParamLimits

0x61b7,	// (0x000209d9) scroll_sc2_down_pane

0x8d69,	// (0x0002358b) scroll_sc2_up_pane_ParamLimits

0x8d69,	// (0x0002358b) scroll_sc2_up_pane

0xbe9c,	// (0x000266be) grid_wheel_folder_pane_g1_ParamLimits

0xbe9c,	// (0x000266be) grid_wheel_folder_pane_g1

0x6373,	// (0x00020b95) clock_nsta_pane_cp2_ParamLimits

0x6373,	// (0x00020b95) clock_nsta_pane_cp2

0x8ab6,	// (0x000232d8) listscroll_midp_pane_ParamLimits

0x9544,	// (0x00023d66) midp_canvas_pane

0x9828,	// (0x0002404a) nsta_clock_indic_pane

0x985c,	// (0x0002407e) listscroll_form_pane_vc

0x9864,	// (0x00024086) listscroll_set_pane_vc_ParamLimits

0x9864,	// (0x00024086) listscroll_set_pane_vc

0x9965,	// (0x00024187) clock_nsta_pane

0x99da,	// (0x000241fc) indicator_nsta_pane

0x9cb2,	// (0x000244d4) bg_popup_sub_pane_cp2_ParamLimits

0x9cc6,	// (0x000244e8) find_pane_cp2_ParamLimits

0x9cc6,	// (0x000244e8) find_pane_cp2

0x9cdc,	// (0x000244fe) grid_toobar_pane_ParamLimits

0x9dbc,	// (0x000245de) list_form_gen_pane_vc_ParamLimits

0x9dbc,	// (0x000245de) list_form_gen_pane_vc

0x9dd2,	// (0x000245f4) scroll_pane_cp8_vc_ParamLimits

0x9dd2,	// (0x000245f4) scroll_pane_cp8_vc

0x9e4e,	// (0x00024670) data_form_wide_pane_vc_ParamLimits

0x9e4e,	// (0x00024670) data_form_wide_pane_vc

0x9e5a,	// (0x0002467c) form_field_data_wide_pane_vc_g1

0x9e62,	// (0x00024684) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e62,	// (0x00024684) form_field_data_wide_pane_vc_t1

0x88d4,	// (0x000230f6) input_focus_pane_cp6_vc_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_cp6_vc

0xa1a0,	// (0x000249c2) list_midp_pane_ParamLimits

0xa1ac,	// (0x000249ce) scroll_pane_cp16_ParamLimits

0xa1ac,	// (0x000249ce) scroll_pane_cp16

0xa1fa,	// (0x00024a1c) button_value_adjust_pane_ParamLimits

0xa1fa,	// (0x00024a1c) button_value_adjust_pane

0xb169,	// (0x0002598b) button_value_adjust_pane_cp6_ParamLimits

0xb169,	// (0x0002598b) button_value_adjust_pane_cp6

0xb28b,	// (0x00025aad) settings_code_pane_cp_ParamLimits

0xb28b,	// (0x00025aad) settings_code_pane_cp

0x7f90,	// (0x000227b2) cell_touch_pane_g1

0x7f90,	// (0x000227b2) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00029f25) cell_touch_pane_g

0xb7f5,	// (0x00026017) cell_touch_pane_cp_ParamLimits

0xb7f5,	// (0x00026017) cell_touch_pane_cp

0xb805,	// (0x00026027) cell_touch_pane_ParamLimits

0xb805,	// (0x00026027) cell_touch_pane

0x7f90,	// (0x000227b2) scroll_sc2_down_pane_g1

0x7f90,	// (0x000227b2) scroll_sc2_up_pane_g1

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp4_vc

0xb816,	// (0x00026038) list_set_graphic_pane_vc_g1_ParamLimits

0xb816,	// (0x00026038) list_set_graphic_pane_vc_g1

0x9094,	// (0x000238b6) list_set_graphic_pane_vc_g2_ParamLimits

0x9094,	// (0x000238b6) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0002a21a) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0002a21a) list_set_graphic_pane_vc_g

0xb822,	// (0x00026044) text_primary_small_cp13_vc_ParamLimits

0xb822,	// (0x00026044) text_primary_small_cp13_vc

0xb83a,	// (0x0002605c) list_set_graphic_pane_vc_ParamLimits

0xb83a,	// (0x0002605c) list_set_graphic_pane_vc

0x7f9a,	// (0x000227bc) input_focus_pane_cp2_vc

0x7f90,	// (0x000227b2) setting_code_pane_vc_g1

0x80c5,	// (0x000228e7) setting_code_pane_vc_t1

0xb84e,	// (0x00026070) set_text_pane_vc_t1_ParamLimits

0xb84e,	// (0x00026070) set_text_pane_vc_t1

0x7f9a,	// (0x000227bc) input_focus_pane_cp1_vc

0xb86b,	// (0x0002608d) list_set_text_pane_vc

0x7f90,	// (0x000227b2) setting_text_pane_vc_g1

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp2_vc

0x80bc,	// (0x000228de) setting_slider_graphic_pane_vc_g1

0xb875,	// (0x00026097) setting_slider_graphic_pane_vc_t1

0xb885,	// (0x000260a7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0002a21f) setting_slider_graphic_pane_vc_t

0xb895,	// (0x000260b7) slider_set_pane_cp_vc

0xb89d,	// (0x000260bf) slider_set_pane_vc_g1

0xb8a6,	// (0x000260c8) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0002a224) slider_set_pane_vc_g

0x892f,	// (0x00023151) set_opt_bg_pane_g1_copy1

0x8937,	// (0x00023159) set_opt_bg_pane_g2_copy1

0xb8d2,	// (0x000260f4) set_opt_bg_pane_g3_copy1

0x8947,	// (0x00023169) set_opt_bg_pane_g4_copy1

0x894f,	// (0x00023171) set_opt_bg_pane_g5_copy1

0x8957,	// (0x00023179) set_opt_bg_pane_g6_copy1

0xb8da,	// (0x000260fc) set_opt_bg_pane_g7_copy1

0xb8e4,	// (0x00026106) set_opt_bg_pane_g8_copy1

0xb8ec,	// (0x0002610e) set_opt_bg_pane_g9_copy1

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp_vc

0xb8f4,	// (0x00026116) setting_slider_pane_vc_t1

0xb903,	// (0x00026125) setting_slider_pane_vc_t2

0xb913,	// (0x00026135) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0002a233) setting_slider_pane_vc_t

0xb923,	// (0x00026145) slider_set_pane_vc

0x6cad,	// (0x000214cf) volume_set_pane_vc_g1

0x6f9c,	// (0x000217be) volume_set_pane_vc_g2

0x6fa5,	// (0x000217c7) volume_set_pane_vc_g3

0x6fae,	// (0x000217d0) volume_set_pane_vc_g4

0x6fb7,	// (0x000217d9) volume_set_pane_vc_g5

0x6fc0,	// (0x000217e2) volume_set_pane_vc_g6

0x6cda,	// (0x000214fc) volume_set_pane_vc_g7

0x6fc9,	// (0x000217eb) volume_set_pane_vc_g8

0x6fd2,	// (0x000217f4) volume_set_pane_vc_g9

0x6fdb,	// (0x000217fd) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0002a23a) volume_set_pane_vc_g

0xb92b,	// (0x0002614d) volume_set_pane_vc

0xb933,	// (0x00026155) button_value_adjust_pane_cp1_vc

0xb93d,	// (0x0002615f) list_highlight_pane_cp2_vc

0xb946,	// (0x00026168) list_set_pane_vc_ParamLimits

0xb946,	// (0x00026168) list_set_pane_vc

0xb9a4,	// (0x000261c6) main_pane_set_vc_t1_ParamLimits

0xb9a4,	// (0x000261c6) main_pane_set_vc_t1

0xb9b9,	// (0x000261db) main_pane_set_vc_t2_ParamLimits

0xb9b9,	// (0x000261db) main_pane_set_vc_t2

0xb9cb,	// (0x000261ed) main_pane_set_vc_t3_ParamLimits

0xb9cb,	// (0x000261ed) main_pane_set_vc_t3

0xb9dd,	// (0x000261ff) main_pane_set_vc_t4_ParamLimits

0xb9dd,	// (0x000261ff) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0002a24f) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0002a24f) main_pane_set_vc_t

0xb9ef,	// (0x00026211) setting_code_pane_vc_ParamLimits

0xb9ef,	// (0x00026211) setting_code_pane_vc

0xb9fe,	// (0x00026220) setting_slider_graphic_pane_vc

0xb9fe,	// (0x00026220) setting_slider_pane_vc

0xb9fe,	// (0x00026220) setting_text_pane_vc

0xb9fe,	// (0x00026220) setting_volume_pane_vc

0xba06,	// (0x00026228) scroll_pane_cp121_vc

0x88ae,	// (0x000230d0) set_content_pane_vc

0xba0e,	// (0x00026230) button_value_adjust_pane_g1

0xba17,	// (0x00026239) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x0002a2ab) button_value_adjust_pane_g

0xba20,	// (0x00026242) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba20,	// (0x00026242) form_field_slider_wide_pane_vc_t1

0xba34,	// (0x00026256) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba34,	// (0x00026256) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x0002a2b0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002a2b0) form_field_slider_wide_pane_vc_t

0x82f5,	// (0x00022b17) input_focus_pane_cp10_vc_ParamLimits

0x82f5,	// (0x00022b17) input_focus_pane_cp10_vc

0xba60,	// (0x00026282) slider_cont_pane_cp1_vc_ParamLimits

0xba60,	// (0x00026282) slider_cont_pane_cp1_vc

0xba70,	// (0x00026292) slider_form_pane_g1_cp2

0xb8a6,	// (0x000260c8) slider_form_pane_g2_cp2

0xba9d,	// (0x000262bf) form_field_slider_pane_vc_t3

0xbaab,	// (0x000262cd) form_field_slider_pane_vc_t4

0xbab9,	// (0x000262db) slider_form_pane_vc_ParamLimits

0xbab9,	// (0x000262db) slider_form_pane_vc

0xbac6,	// (0x000262e8) form_field_slider_pane_vc_t1_ParamLimits

0xbac6,	// (0x000262e8) form_field_slider_pane_vc_t1

0xba34,	// (0x00026256) form_field_slider_pane_vc_t2_ParamLimits

0xba34,	// (0x00026256) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x0002a2c2) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002a2c2) form_field_slider_pane_vc_t

0x82f5,	// (0x00022b17) input_focus_pane_cp9_vc_ParamLimits

0x82f5,	// (0x00022b17) input_focus_pane_cp9_vc

0xbae2,	// (0x00026304) slider_cont_pane_vc_ParamLimits

0xbae2,	// (0x00026304) slider_cont_pane_vc

0xbaf4,	// (0x00026316) list_form_graphic_pane_cp_vc_ParamLimits

0xbaf4,	// (0x00026316) list_form_graphic_pane_cp_vc

0x9e5a,	// (0x0002467c) form_field_popup_wide_pane_vc_g1

0xbb09,	// (0x0002632b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb09,	// (0x0002632b) form_field_popup_wide_pane_vc_t1

0x88d4,	// (0x000230f6) input_focus_pane_cp8_vc_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_cp8_vc

0xbb4e,	// (0x00026370) list_form_wide_pane_vc_ParamLimits

0xbb4e,	// (0x00026370) list_form_wide_pane_vc

0xbb5a,	// (0x0002637c) list_form_graphic_pane_vc_g1

0xbb62,	// (0x00026384) list_form_graphic_pane_vc_t1_ParamLimits

0xbb62,	// (0x00026384) list_form_graphic_pane_vc_t1

0x807a,	// (0x0002289c) list_highlight_pane_cp5_vc_ParamLimits

0x807a,	// (0x0002289c) list_highlight_pane_cp5_vc

0xbb7e,	// (0x000263a0) list_form_graphic_pane_vc_ParamLimits

0xbb7e,	// (0x000263a0) list_form_graphic_pane_vc

0x9e5a,	// (0x0002467c) form_field_popup_pane_vc_g1

0xbb94,	// (0x000263b6) form_field_popup_pane_vc_t1_ParamLimits

0xbb94,	// (0x000263b6) form_field_popup_pane_vc_t1

0x88d4,	// (0x000230f6) input_focus_pane_cp7_vc_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_cp7_vc

0xbbab,	// (0x000263cd) list_form_pane_vc_ParamLimits

0xbbab,	// (0x000263cd) list_form_pane_vc

0xbbb7,	// (0x000263d9) data_form_pane_vc_t1_ParamLimits

0xbbb7,	// (0x000263d9) data_form_pane_vc_t1

0x892f,	// (0x00023151) input_focus_pane_vc_g1

0x8937,	// (0x00023159) input_focus_pane_vc_g2

0x893f,	// (0x00023161) input_focus_pane_vc_g3

0x8947,	// (0x00023169) input_focus_pane_vc_g4

0x894f,	// (0x00023171) input_focus_pane_vc_g5

0x8957,	// (0x00023179) input_focus_pane_vc_g6

0x895f,	// (0x00023181) input_focus_pane_vc_g7

0x8967,	// (0x00023189) input_focus_pane_vc_g8

0x896f,	// (0x00023191) input_focus_pane_vc_g9

0x7f90,	// (0x000227b2) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00029eae) input_focus_pane_vc_g

0x9e4e,	// (0x00024670) data_form_pane_vc_ParamLimits

0x9e4e,	// (0x00024670) data_form_pane_vc

0x9e5a,	// (0x0002467c) form_field_data_pane_vc_g1

0xbbd2,	// (0x000263f4) form_field_data_pane_vc_t1_ParamLimits

0xbbd2,	// (0x000263f4) form_field_data_pane_vc_t1

0x88d4,	// (0x000230f6) input_focus_pane_vc_ParamLimits

0x88d4,	// (0x000230f6) input_focus_pane_vc

0xbbec,	// (0x0002640e) button_value_adjust_pane_cp3_vc

0xbbf4,	// (0x00026416) button_value_adjust_pane_cp5_vc

0xbbfc,	// (0x0002641e) form_field_data_pane_vc_ParamLimits

0xbbfc,	// (0x0002641e) form_field_data_pane_vc

0xbc13,	// (0x00026435) form_field_data_pane_vc_cp2

0xbc1b,	// (0x0002643d) form_field_data_wide_pane_vc_ParamLimits

0xbc1b,	// (0x0002643d) form_field_data_wide_pane_vc

0xbc31,	// (0x00026453) form_field_data_wide_pane_vc_cp2

0xbc39,	// (0x0002645b) form_field_popup_pane_vc_ParamLimits

0xbc39,	// (0x0002645b) form_field_popup_pane_vc

0xbc50,	// (0x00026472) form_field_popup_wide_pane_vc_ParamLimits

0xbc50,	// (0x00026472) form_field_popup_wide_pane_vc

0xbc66,	// (0x00026488) form_field_slider_pane_vc_ParamLimits

0xbc66,	// (0x00026488) form_field_slider_pane_vc

0xbc79,	// (0x0002649b) form_field_slider_wide_pane_vc_ParamLimits

0xbc79,	// (0x0002649b) form_field_slider_wide_pane_vc

0xbc8c,	// (0x000264ae) grid_touch_1_pane_ParamLimits

0xbc8c,	// (0x000264ae) grid_touch_1_pane

0xbc98,	// (0x000264ba) grid_touch_2_pane_ParamLimits

0xbc98,	// (0x000264ba) grid_touch_2_pane

0x97f3,	// (0x00024015) touch_pane_g1_ParamLimits

0x97f3,	// (0x00024015) touch_pane_g1

0xbcb0,	// (0x000264d2) cell_app_pane_cp_wide_ParamLimits

0xbcb0,	// (0x000264d2) cell_app_pane_cp_wide

0xbcc1,	// (0x000264e3) grid_popup_fast_wide_pane_ParamLimits

0xbcc1,	// (0x000264e3) grid_popup_fast_wide_pane

0xbcd5,	// (0x000264f7) scroll_pane_cp19_ParamLimits

0xbcd5,	// (0x000264f7) scroll_pane_cp19

0x7f9a,	// (0x000227bc) bg_popup_window_pane_cp20

0xbce9,	// (0x0002650b) listscroll_popup_fast_wide_pane

0x807a,	// (0x0002289c) grid_indicator_nsta_pane

0xbcf1,	// (0x00026513) clock_nsta_pane_g1

0xbcfa,	// (0x0002651c) clock_nsta_pane_t1

0xbd16,	// (0x00026538) cell_indicator_nsta_pane_ParamLimits

0xbd16,	// (0x00026538) cell_indicator_nsta_pane

0xbd47,	// (0x00026569) cell_indicator_nsta_pane_g1

0xbd55,	// (0x00026577) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x0002a2d3) cell_indicator_nsta_pane_g

0xbd62,	// (0x00026584) clock_nsta_pane_cp

0xbd6a,	// (0x0002658c) indicator_nsta_pane_cp

0xbd72,	// (0x00026594) nsta_clock_indic_pane_g1

0x8143,	// (0x00022965) grid_indicator_pane

0x8e5e,	// (0x00023680) scroll_pane_cp29

0x62c2,	// (0x00020ae4) indicator_nsta_pane_cp2_ParamLimits

0x62c2,	// (0x00020ae4) indicator_nsta_pane_cp2

0x807a,	// (0x0002289c) main_apps_wheel_pane

0xa085,	// (0x000248a7) form_midp_field_text_pane_ParamLimits

0xa1cc,	// (0x000249ee) scroll_bar_cp050_ParamLimits

0xbdd3,	// (0x000265f5) cell_indicator_pane_ParamLimits

0xbdd3,	// (0x000265f5) cell_indicator_pane

0xbdee,	// (0x00026610) cell_indicator_pane_g1

0xbdf8,	// (0x0002661a) grid_wheel_folder_pane_ParamLimits

0xbdf8,	// (0x0002661a) grid_wheel_folder_pane

0xbe0e,	// (0x00026630) list_wheel_apps_pane_ParamLimits

0xbe0e,	// (0x00026630) list_wheel_apps_pane

0xbe1f,	// (0x00026641) main_apps_wheel_pane_g1_ParamLimits

0xbe1f,	// (0x00026641) main_apps_wheel_pane_g1

0xbe33,	// (0x00026655) main_apps_wheel_pane_g2_ParamLimits

0xbe33,	// (0x00026655) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x0002a2ef) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x0002a2ef) main_apps_wheel_pane_g

0xbe4b,	// (0x0002666d) main_apps_wheel_pane_t1_ParamLimits

0xbe4b,	// (0x0002666d) main_apps_wheel_pane_t1

0xbe6e,	// (0x00026690) list_wheel_apps_pane_g1

0xbe76,	// (0x00026698) list_wheel_apps_pane_g2

0xbe7e,	// (0x000266a0) list_wheel_apps_pane_g3

0xbe88,	// (0x000266aa) list_wheel_apps_pane_g4

0xbe92,	// (0x000266b4) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x0002a2f4) list_wheel_apps_pane_g

0x93c8,	// (0x00023bea) navi_icon_text_pane

0x9898,	// (0x000240ba) aid_fill_nsta

0xbeb5,	// (0x000266d7) navi_icon_text_pane_g1

0xbec1,	// (0x000266e3) navi_icon_text_pane_t1

0x925f,	// (0x00023a81) list_set_graphic_pane_t1_ParamLimits

0x925f,	// (0x00023a81) list_set_graphic_pane_t1

0xa91e,	// (0x00025140) popup_midp_note_alarm_window_t6_ParamLimits

0xa91e,	// (0x00025140) popup_midp_note_alarm_window_t6

0xa930,	// (0x00025152) popup_midp_note_alarm_window_t7_ParamLimits

0xa930,	// (0x00025152) popup_midp_note_alarm_window_t7

0xa942,	// (0x00025164) popup_midp_note_alarm_window_t8_ParamLimits

0xa942,	// (0x00025164) popup_midp_note_alarm_window_t8

0xa954,	// (0x00025176) popup_midp_note_alarm_window_t9_ParamLimits

0xa954,	// (0x00025176) popup_midp_note_alarm_window_t9

0xa966,	// (0x00025188) popup_midp_note_alarm_window_t10_ParamLimits

0xa966,	// (0x00025188) popup_midp_note_alarm_window_t10

0xa978,	// (0x0002519a) popup_midp_note_alarm_window_t11_ParamLimits

0xa978,	// (0x0002519a) popup_midp_note_alarm_window_t11

0xa98a,	// (0x000251ac) scroll_pane_cp17_ParamLimits

0xa98a,	// (0x000251ac) scroll_pane_cp17

0x6cad,	// (0x000214cf) volume_small_pane_cp_g1

0x6fe4,	// (0x00021806) volume_small_pane_cp_g2

0x6fed,	// (0x0002180f) volume_small_pane_cp_g3

0x6cbf,	// (0x000214e1) volume_small_pane_cp_g4

0x6ff6,	// (0x00021818) volume_small_pane_cp_g5

0x6fb7,	// (0x000217d9) volume_small_pane_cp_g6

0x6cd1,	// (0x000214f3) volume_small_pane_cp_g7

0x6fff,	// (0x00021821) volume_small_pane_cp_g8

0x7008,	// (0x0002182a) volume_small_pane_cp_g9

0x6ce3,	// (0x00021505) volume_small_pane_cp_g10

0x9611,	// (0x00023e33) midp_ticker_pane_g1_ParamLimits

0x961d,	// (0x00023e3f) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00029f7a) midp_ticker_pane_g_ParamLimits

0x9629,	// (0x00023e4b) midp_ticker_pane_t1_ParamLimits

0x98ae,	// (0x000240d0) aid_fill_nsta_2

0xa1b8,	// (0x000249da) list_form2_midp_pane

0xb2d6,	// (0x00025af8) midp_editing_number_pane_ParamLimits

0xb2e5,	// (0x00025b07) midp_ticker_pane_ParamLimits

0xbed3,	// (0x000266f5) form2_midp_field_pane

0xbef7,	// (0x00026719) scroll_pane_cp51

0xbf17,	// (0x00026739) form2_midp_button_pane_ParamLimits

0xbf17,	// (0x00026739) form2_midp_button_pane

0xbf29,	// (0x0002674b) form2_midp_content_pane_ParamLimits

0xbf29,	// (0x0002674b) form2_midp_content_pane

0xbf43,	// (0x00026765) form2_midp_field_choice_group_pane

0xbf4b,	// (0x0002676d) form2_midp_field_pane_g1

0xbf53,	// (0x00026775) form2_midp_field_pane_g2

0xbf5b,	// (0x0002677d) form2_midp_field_pane_g3

0xbf63,	// (0x00026785) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0002a319) form2_midp_field_pane_g

0xbf6b,	// (0x0002678d) form2_midp_gauge_slider_pane

0xbf73,	// (0x00026795) form2_midp_gauge_wait_pane

0xbf7b,	// (0x0002679d) form2_midp_image_pane_ParamLimits

0xbf7b,	// (0x0002679d) form2_midp_image_pane

0xbf96,	// (0x000267b8) form2_midp_label_pane_ParamLimits

0xbf96,	// (0x000267b8) form2_midp_label_pane

0xbfaf,	// (0x000267d1) form2_midp_label_pane_cp_ParamLimits

0xbfaf,	// (0x000267d1) form2_midp_label_pane_cp

0xbfd0,	// (0x000267f2) form2_midp_string_pane_ParamLimits

0xbfd0,	// (0x000267f2) form2_midp_string_pane

0x57a4,	// (0x0001ffc6) form2_midp_text_pane_ParamLimits

0x57a4,	// (0x0001ffc6) form2_midp_text_pane

0xbfe2,	// (0x00026804) form2_midp_time_pane

0xbff2,	// (0x00026814) input_focus_pane_cp51_ParamLimits

0xbff2,	// (0x00026814) input_focus_pane_cp51

0xc00a,	// (0x0002682c) form2_midp_label_pane_t1_ParamLimits

0xc00a,	// (0x0002682c) form2_midp_label_pane_t1

0x57bd,	// (0x0001ffdf) form2_mdip_text_pane_t1_ParamLimits

0x57bd,	// (0x0001ffdf) form2_mdip_text_pane_t1

0x57db,	// (0x0001fffd) form2_midp_time_pane_t1

0xc052,	// (0x00026874) form2_midp_gauge_slider_pane_t1

0xc064,	// (0x00026886) form2_midp_gauge_slider_pane_t2

0xc076,	// (0x00026898) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0002a322) form2_midp_gauge_slider_pane_t

0xc088,	// (0x000268aa) form2_midp_slider_pane

0xc094,	// (0x000268b6) form2_midp_gauge_wait_pane_t1

0xc0a2,	// (0x000268c4) form2_midp_wait_pane_ParamLimits

0xc0a2,	// (0x000268c4) form2_midp_wait_pane

0xc0ce,	// (0x000268f0) list_single_2graphic_pane_cp4_ParamLimits

0xc0ce,	// (0x000268f0) list_single_2graphic_pane_cp4

0x9ec9,	// (0x000246eb) list_single_midp_graphic_pane_cp_ParamLimits

0x9ec9,	// (0x000246eb) list_single_midp_graphic_pane_cp

0x7f9a,	// (0x000227bc) list_highlight_pane_cp20

0xc0fc,	// (0x0002691e) list_single_2graphic_pane_g1_cp4

0xb6fa,	// (0x00025f1c) list_single_2graphic_pane_g2_cp4

0xc104,	// (0x00026926) list_single_2graphic_pane_t1_cp4

0x807a,	// (0x0002289c) list_highlight_pane_cp21

0xc113,	// (0x00026935) list_single_midp_graphic_pane_g4_cp

0xc122,	// (0x00026944) list_single_midp_graphic_pane_t1_cp

0xc137,	// (0x00026959) form2_mdip_string_pane_t1_ParamLimits

0xc137,	// (0x00026959) form2_mdip_string_pane_t1

0x7f9a,	// (0x000227bc) bg_wml_button_pane_cp2

0x7f90,	// (0x000227b2) form2_midp_image_pane_g1

0x4ccb,	// (0x0001f4ed) list_double_large_graphic_pane_g5_ParamLimits

0x4ccb,	// (0x0001f4ed) list_double_large_graphic_pane_g5

0x8ab6,	// (0x000232d8) midp_form_pane_ParamLimits

0x807a,	// (0x0002289c) main_apps_wheel_pane_ParamLimits

0x6975,	// (0x00021197) popup_preview_window_ParamLimits

0x6975,	// (0x00021197) popup_preview_window

0x6b2c,	// (0x0002134e) popup_touch_info_window_ParamLimits

0x6b2c,	// (0x0002134e) popup_touch_info_window

0x6b4a,	// (0x0002136c) popup_touch_menu_window_ParamLimits

0x6b4a,	// (0x0002136c) popup_touch_menu_window

0x7f86,	// (0x000227a8) bg_popup_sub_pane_cp6

0xc25a,	// (0x00026a7c) list_touch_menu_pane

0xc262,	// (0x00026a84) list_single_touch_menu_pane_ParamLimits

0xc262,	// (0x00026a84) list_single_touch_menu_pane

0xc276,	// (0x00026a98) list_single_touch_menu_pane_t1

0x807a,	// (0x0002289c) bg_popup_sub_pane_cp7_ParamLimits

0x807a,	// (0x0002289c) bg_popup_sub_pane_cp7

0xc284,	// (0x00026aa6) heading_sub_pane

0xc28c,	// (0x00026aae) list_touch_info_pane_ParamLimits

0xc28c,	// (0x00026aae) list_touch_info_pane

0xc29b,	// (0x00026abd) list_single_touch_info_pane_ParamLimits

0xc29b,	// (0x00026abd) list_single_touch_info_pane

0xc2ad,	// (0x00026acf) list_single_touch_info_pane_t1

0xc2bb,	// (0x00026add) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x0002a330) list_single_touch_info_pane_t

0x953c,	// (0x00023d5e) bg_popup_heading_pane_cp

0xc2c9,	// (0x00026aeb) heading_sub_pane_t1

0x9de8,	// (0x0002460a) bg_popup_preview_window_pane_cp_ParamLimits

0x9de8,	// (0x0002460a) bg_popup_preview_window_pane_cp

0xc284,	// (0x00026aa6) heading_preview_pane

0xc28c,	// (0x00026aae) list_preview_pane_ParamLimits

0xc28c,	// (0x00026aae) list_preview_pane

0xc2d7,	// (0x00026af9) popup_preview_window_g1

0xc29b,	// (0x00026abd) list_single_preview_pane_ParamLimits

0xc29b,	// (0x00026abd) list_single_preview_pane

0xc2df,	// (0x00026b01) list_single_preview_pane_g1

0xc2e7,	// (0x00026b09) list_single_preview_pane_t1

0xc2ad,	// (0x00026acf) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x0002a335) list_single_preview_pane_t

0xc2f5,	// (0x00026b17) bg_popup_heading_pane_cp2_ParamLimits

0xc2f5,	// (0x00026b17) bg_popup_heading_pane_cp2

0xc30b,	// (0x00026b2d) heading_preview_pane_g1

0xc313,	// (0x00026b35) heading_preview_pane_t1_ParamLimits

0xc313,	// (0x00026b35) heading_preview_pane_t1

0x8166,	// (0x00022988) soft_indicator_pane_t1_ParamLimits

0x8847,	// (0x00023069) scroll_pane_ParamLimits

0x8d57,	// (0x00023579) scroll_sc2_left_pane

0x8d60,	// (0x00023582) scroll_sc2_right_pane

0x8d7f,	// (0x000235a1) scroll_bg_pane_g1_ParamLimits

0x8d94,	// (0x000235b6) scroll_bg_pane_g2_ParamLimits

0x8dac,	// (0x000235ce) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00029f05) scroll_bg_pane_g_ParamLimits

0x8d7f,	// (0x000235a1) scroll_handle_pane_g1_ParamLimits

0x8dce,	// (0x000235f0) scroll_handle_pane_g2_ParamLimits

0x8dac,	// (0x000235ce) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00029f0c) scroll_handle_pane_g_ParamLimits

0x65fc,	// (0x00020e1e) popup_choice_list_window_ParamLimits

0x65fc,	// (0x00020e1e) popup_choice_list_window

0x9cbe,	// (0x000244e0) choice_list_pane

0x9d40,	// (0x00024562) cell_toolbar_pane_t1

0x9d68,	// (0x0002458a) toolbar_button_pane_ParamLimits

0xae44,	// (0x00025666) ai_gene_pane_1_t2_ParamLimits

0xae44,	// (0x00025666) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0002a12d) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0002a12d) ai_gene_pane_1_t

0xc330,	// (0x00026b52) scroll_sc2_left_pane_g1

0xc330,	// (0x00026b52) scroll_sc2_right_pane_g1

0x9876,	// (0x00024098) bg_popup_sub_pane_cp10

0xc33a,	// (0x00026b5c) list_choice_list_pane

0xc353,	// (0x00026b75) list_single_choice_list_pane_ParamLimits

0xc353,	// (0x00026b75) list_single_choice_list_pane

0xc366,	// (0x00026b88) list_single_choice_list_pane_g1

0x8a66,	// (0x00023288) list_single_choice_list_pane_t1_ParamLimits

0x8a66,	// (0x00023288) list_single_choice_list_pane_t1

0xc36e,	// (0x00026b90) choice_list_pane_g1

0xc376,	// (0x00026b98) choice_list_pane_t1

0x7f86,	// (0x000227a8) input_focus_pane_cp11

0x8c3a,	// (0x0002345c) title_pane_stacon_g2_ParamLimits

0x8c3a,	// (0x0002345c) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00029eeb) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00029eeb) title_pane_stacon_g

0x953c,	// (0x00023d5e) cursor_press_pane

0x66a4,	// (0x00020ec6) popup_fep_hwr_window_ParamLimits

0x66a4,	// (0x00020ec6) popup_fep_hwr_window

0x671c,	// (0x00020f3e) popup_fep_vkb_window_ParamLimits

0x671c,	// (0x00020f3e) popup_fep_vkb_window

0xc384,	// (0x00026ba6) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0002a35e) fep_vkb_side_pane_g_ParamLimits

0x704a,	// (0x0002186c) fep_hwr_candidate_pane_ParamLimits

0x704a,	// (0x0002186c) fep_hwr_candidate_pane

0x7074,	// (0x00021896) fep_hwr_side_pane_ParamLimits

0x7074,	// (0x00021896) fep_hwr_side_pane

0x7094,	// (0x000218b6) fep_hwr_top_pane_ParamLimits

0x7094,	// (0x000218b6) fep_hwr_top_pane

0x70ac,	// (0x000218ce) fep_hwr_write_pane_ParamLimits

0x70ac,	// (0x000218ce) fep_hwr_write_pane

0xfb3c,	// (0x0002a35e) fep_vkb_side_pane_g

0xc38c,	// (0x00026bae) fep_hwr_top_pane_g1

0xc39e,	// (0x00026bc0) fep_hwr_top_pane_g2

0x70d8,	// (0x000218fa) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0002a33a) fep_hwr_top_pane_g

0x70ed,	// (0x0002190f) fep_hwr_top_text_pane

0x8f24,	// (0x00023746) fep_hwr_top_text_pane_g1

0xc3d4,	// (0x00026bf6) fep_hwr_top_text_pane_t1

0x71e3,	// (0x00021a05) fep_hwr_candidate_pane_g1

0xc617,	// (0x00026e39) fep_vkb_keypad_pane_g3_ParamLimits

0xc617,	// (0x00026e39) fep_vkb_keypad_pane_g3

0xc63f,	// (0x00026e61) fep_vkb_keypad_pane_g4_ParamLimits

0xc63f,	// (0x00026e61) fep_vkb_keypad_pane_g4

0xc6ae,	// (0x00026ed0) fep_vkb_bottom_pane_g2_ParamLimits

0xc6ae,	// (0x00026ed0) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0002a365) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0002a365) fep_vkb_bottom_pane_g

0xc330,	// (0x00026b52) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0002a36f) cell_vkb_side_pane_g

0xc739,	// (0x00026f5b) cell_vkb_side_pane_t1

0xc747,	// (0x00026f69) cell_vkb_side_pane_t1_copy1

0xc330,	// (0x00026b52) bg_fep_vkb_candidate_pane_g2

0xc873,	// (0x00027095) cell_vkb_candidate_pane_ParamLimits

0xc3e2,	// (0x00026c04) aid_size_cell_vkb_ParamLimits

0xc3e2,	// (0x00026c04) aid_size_cell_vkb

0xc873,	// (0x00027095) cell_vkb_candidate_pane

0x71fd,	// (0x00021a1f) bg_popup_fep_shadow_pane_g1

0xc46e,	// (0x00026c90) fep_vkb_bottom_pane_ParamLimits

0xc46e,	// (0x00026c90) fep_vkb_bottom_pane

0xc4a4,	// (0x00026cc6) fep_vkb_candidate_pane_ParamLimits

0xc4a4,	// (0x00026cc6) fep_vkb_candidate_pane

0xc4c0,	// (0x00026ce2) fep_vkb_keypad_pane_ParamLimits

0xc4c0,	// (0x00026ce2) fep_vkb_keypad_pane

0xc4ff,	// (0x00026d21) fep_vkb_side_pane_ParamLimits

0xc4ff,	// (0x00026d21) fep_vkb_side_pane

0xc53b,	// (0x00026d5d) fep_vkb_top_pane_ParamLimits

0xc53b,	// (0x00026d5d) fep_vkb_top_pane

0xc570,	// (0x00026d92) fep_vkb_top_pane_g1_ParamLimits

0xc570,	// (0x00026d92) fep_vkb_top_pane_g1

0xc57f,	// (0x00026da1) fep_vkb_top_pane_g2_ParamLimits

0xc57f,	// (0x00026da1) fep_vkb_top_pane_g2

0xc58e,	// (0x00026db0) fep_vkb_top_pane_g3_ParamLimits

0xc58e,	// (0x00026db0) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0002a355) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0002a355) fep_vkb_top_pane_g

0xc5ac,	// (0x00026dce) fep_vkb_top_text_pane_ParamLimits

0xc5ac,	// (0x00026dce) fep_vkb_top_text_pane

0xc5bd,	// (0x00026ddf) fep_vkb_side_pane_g1_ParamLimits

0xc5bd,	// (0x00026ddf) fep_vkb_side_pane_g1

0xc606,	// (0x00026e28) grid_vkb_side_pane_ParamLimits

0xc606,	// (0x00026e28) grid_vkb_side_pane

0x7205,	// (0x00021a27) bg_popup_fep_shadow_pane_g2

0x720e,	// (0x00021a30) bg_popup_fep_shadow_pane_g3

0x7216,	// (0x00021a38) bg_popup_fep_shadow_pane_g4

0x721f,	// (0x00021a41) bg_popup_fep_shadow_pane_g5

0x7229,	// (0x00021a4b) bg_popup_fep_shadow_pane_g6

0x7231,	// (0x00021a53) bg_popup_fep_shadow_pane_g7

0x894f,	// (0x00023171) bg_popup_fep_shadow_pane_g8

0xc65d,	// (0x00026e7f) grid_vkb_keypad_number_pane_ParamLimits

0xc65d,	// (0x00026e7f) grid_vkb_keypad_number_pane

0xc66d,	// (0x00026e8f) grid_vkb_keypad_pane_ParamLimits

0xc66d,	// (0x00026e8f) grid_vkb_keypad_pane

0xc693,	// (0x00026eb5) fep_vkb_bottom_pane_g1_ParamLimits

0xc693,	// (0x00026eb5) fep_vkb_bottom_pane_g1

0xc6bc,	// (0x00026ede) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6bc,	// (0x00026ede) grid_vkb_keypad_bottom_left_pane

0xc6d1,	// (0x00026ef3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6d1,	// (0x00026ef3) grid_vkb_keypad_bottom_right_pane

0xc6e6,	// (0x00026f08) fep_vkb_top_text_pane_g1

0xc701,	// (0x00026f23) fep_vkb_top_text_pane_t1

0xc716,	// (0x00026f38) cell_vkb_side_pane_ParamLimits

0xc716,	// (0x00026f38) cell_vkb_side_pane

0xc330,	// (0x00026b52) cell_vkb_side_pane_g1

0xc755,	// (0x00026f77) cell_vkb_keypad_pane_ParamLimits

0xc755,	// (0x00026f77) cell_vkb_keypad_pane

0xc7ca,	// (0x00026fec) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0002a382) bg_popup_fep_shadow_pane_g

0xc330,	// (0x00026b52) cell_hwr_side_pane_g1

0xc330,	// (0x00026b52) cell_hwr_side_pane_g2

0xc7d4,	// (0x00026ff6) cell_vkb_keypad_pane_t1

0xc7e2,	// (0x00027004) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7e2,	// (0x00027004) cell_vkb_keypad_bottom_left_pane

0xc7ff,	// (0x00027021) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7ff,	// (0x00027021) cell_vkb_keypad_bottom_right_pane

0xc330,	// (0x00026b52) cell_vkb_keypad_bottom_left_pane_g1

0xc330,	// (0x00026b52) cell_vkb_keypad_bottom_right_pane_g1

0xc838,	// (0x0002705a) cell_vkb_keypad_number_pane_ParamLimits

0xc838,	// (0x0002705a) cell_vkb_keypad_number_pane

0xc857,	// (0x00027079) cell_vkb_keypad_number_pane_g1

0xc861,	// (0x00027083) cell_vkb_keypad_number_pane_g2

0xc86a,	// (0x0002708c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0002a374) cell_vkb_keypad_number_pane_g

0xc7d4,	// (0x00026ff6) cell_vkb_keypad_number_pane_t1

0xc88e,	// (0x000270b0) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0002a36f) cell_hwr_side_pane_g

0xc8a7,	// (0x000270c9) cell_hwr_side_pane_t1

0x7243,	// (0x00021a65) cell_hwr_side_pane_t1_copy1

0xc59e,	// (0x00026dc0) cell_hwr_candidate_pane_g1

0x7251,	// (0x00021a73) cell_hwr_candidate_pane_t1

0xc330,	// (0x00026b52) cell_vkb_candidate_pane_g2

0xc92d,	// (0x0002714f) cell_vkb_candidate_pane_t1

0x7011,	// (0x00021833) bg_popup_fep_shadow_pane_ParamLimits

0x7011,	// (0x00021833) bg_popup_fep_shadow_pane

0x201a,	// (0x0001c83c) bg_fep_hwr_top_pane_g4

0xc3b0,	// (0x00026bd2) bg_hwr_side_pane_g1_ParamLimits

0xc3b0,	// (0x00026bd2) bg_hwr_side_pane_g1

0x7129,	// (0x0002194b) cell_hwr_side_pane_ParamLimits

0x7129,	// (0x0002194b) cell_hwr_side_pane

0x7164,	// (0x00021986) fep_hwr_write_pane_g1_ParamLimits

0x7164,	// (0x00021986) fep_hwr_write_pane_g1

0x7171,	// (0x00021993) fep_hwr_write_pane_g2_ParamLimits

0x7171,	// (0x00021993) fep_hwr_write_pane_g2

0x717e,	// (0x000219a0) fep_hwr_write_pane_g3_ParamLimits

0x717e,	// (0x000219a0) fep_hwr_write_pane_g3

0x718c,	// (0x000219ae) fep_hwr_write_pane_g4_ParamLimits

0x718c,	// (0x000219ae) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0002a341) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0002a341) fep_hwr_write_pane_g

0x201a,	// (0x0001c83c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x201a,	// (0x0001c83c) bg_fep_hwr_candidate_pane_g2

0x71a1,	// (0x000219c3) cell_hwr_candidate_pane_ParamLimits

0x71a1,	// (0x000219c3) cell_hwr_candidate_pane

0x71e3,	// (0x00021a05) fep_hwr_candidate_pane_g1_ParamLimits

0xc410,	// (0x00026c32) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc410,	// (0x00026c32) bg_popup_fep_shadow_pane_cp2

0xc59e,	// (0x00026dc0) fep_vkb_top_pane_g4_ParamLimits

0xc59e,	// (0x00026dc0) fep_vkb_top_pane_g4

0xc5e4,	// (0x00026e06) fep_vkb_side_pane_g2_ParamLimits

0xc5e4,	// (0x00026e06) fep_vkb_side_pane_g2

0x4e09,	// (0x0001f62b) list_setting_pane_t4_ParamLimits

0x4e09,	// (0x0001f62b) list_setting_pane_t4

0x4e9b,	// (0x0001f6bd) list_setting_number_pane_t5_ParamLimits

0x4e9b,	// (0x0001f6bd) list_setting_number_pane_t5

0x8f6b,	// (0x0002378d) list_double_heading_pane_cp2_ParamLimits

0x8f6b,	// (0x0002378d) list_double_heading_pane_cp2

0x88e2,	// (0x00023104) list_double_heading_pane_g1_cp2_ParamLimits

0x88e2,	// (0x00023104) list_double_heading_pane_g1_cp2

0x88ee,	// (0x00023110) list_double_heading_pane_g2_cp2_ParamLimits

0x88ee,	// (0x00023110) list_double_heading_pane_g2_cp2

0xc93b,	// (0x0002715d) list_double_heading_pane_t1_cp2_ParamLimits

0xc93b,	// (0x0002715d) list_double_heading_pane_t1_cp2

0xc951,	// (0x00027173) list_double_heading_pane_t2_cp2_ParamLimits

0xc951,	// (0x00027173) list_double_heading_pane_t2_cp2

0x7f6e,	// (0x00022790) aid_value_unit2

0x5e59,	// (0x0002067b) popup_preview_fixed_window

0x8303,	// (0x00022b25) bg_popup_preview_window_pane_cp02

0xc963,	// (0x00027185) list_preview_fixed_pane

0xc9a9,	// (0x000271cb) list_empty_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_empty_pane_fp

0xc9a9,	// (0x000271cb) list_single_cale_day_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_single_cale_day_pane_fp

0xc9a9,	// (0x000271cb) list_single_graphic_heading_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_single_graphic_heading_pane_fp

0xc9a9,	// (0x000271cb) list_single_graphic_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_single_graphic_pane_fp

0xc9a9,	// (0x000271cb) list_single_heading_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_single_heading_pane_fp

0xc9a9,	// (0x000271cb) list_single_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_single_pane_fp

0xc9bf,	// (0x000271e1) list_single_pane_fp_g1_ParamLimits

0xc9bf,	// (0x000271e1) list_single_pane_fp_g1

0x4b3a,	// (0x0001f35c) list_single_pane_fp_g2_ParamLimits

0x4b3a,	// (0x0001f35c) list_single_pane_fp_g2

0x57ee,	// (0x00020010) list_single_pane_fp_g3_ParamLimits

0x57ee,	// (0x00020010) list_single_pane_fp_g3

0xc9cb,	// (0x000271ed) list_single_pane_fp_g4_ParamLimits

0xc9cb,	// (0x000271ed) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0002a3a3) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0002a3a3) list_single_pane_fp_g

0x5802,	// (0x00020024) list_single_pane_fp_t1_ParamLimits

0x5802,	// (0x00020024) list_single_pane_fp_t1

0x5819,	// (0x0002003b) list_single_graphic_pane_fp_g1_ParamLimits

0x5819,	// (0x0002003b) list_single_graphic_pane_fp_g1

0xc9bf,	// (0x000271e1) list_single_graphic_pane_fp_g2_ParamLimits

0xc9bf,	// (0x000271e1) list_single_graphic_pane_fp_g2

0x4b3a,	// (0x0001f35c) list_single_graphic_pane_fp_g3_ParamLimits

0x4b3a,	// (0x0001f35c) list_single_graphic_pane_fp_g3

0x57ee,	// (0x00020010) list_single_graphic_pane_fp_g4_ParamLimits

0x57ee,	// (0x00020010) list_single_graphic_pane_fp_g4

0xc9cb,	// (0x000271ed) list_single_graphic_pane_fp_g5_ParamLimits

0xc9cb,	// (0x000271ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002a3ac) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002a3ac) list_single_graphic_pane_fp_g

0x5825,	// (0x00020047) list_single_graphic_pane_fp_t1_ParamLimits

0x5825,	// (0x00020047) list_single_graphic_pane_fp_t1

0x5819,	// (0x0002003b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5819,	// (0x0002003b) list_single_graphic_heading_pane_fp_g1

0xc9bf,	// (0x000271e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc9bf,	// (0x000271e1) list_single_graphic_heading_pane_fp_g2

0x4b3a,	// (0x0001f35c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b3a,	// (0x0001f35c) list_single_graphic_heading_pane_fp_g3

0x57ee,	// (0x00020010) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x57ee,	// (0x00020010) list_single_graphic_heading_pane_fp_g4

0xc9cb,	// (0x000271ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9cb,	// (0x000271ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002a3ac) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002a3ac) list_single_graphic_heading_pane_fp_g

0x583b,	// (0x0002005d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x583b,	// (0x0002005d) list_single_graphic_heading_pane_fp_t1

0x5851,	// (0x00020073) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5851,	// (0x00020073) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0002a3b7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0002a3b7) list_single_graphic_heading_pane_fp_t

0x5863,	// (0x00020085) list_single_cale_day_pane_fp_g1_ParamLimits

0x5863,	// (0x00020085) list_single_cale_day_pane_fp_g1

0xc9d7,	// (0x000271f9) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9d7,	// (0x000271f9) list_single_cale_day_pane_fp_g2

0x589b,	// (0x000200bd) list_single_cale_day_pane_fp_g3_ParamLimits

0x589b,	// (0x000200bd) list_single_cale_day_pane_fp_g3

0x58c3,	// (0x000200e5) list_single_cale_day_pane_fp_g4_ParamLimits

0x58c3,	// (0x000200e5) list_single_cale_day_pane_fp_g4

0x58e7,	// (0x00020109) list_single_cale_day_pane_fp_g5_ParamLimits

0x58e7,	// (0x00020109) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002a3bc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002a3bc) list_single_cale_day_pane_fp_g

0x590b,	// (0x0002012d) list_single_cale_day_pane_fp_t1_ParamLimits

0x590b,	// (0x0002012d) list_single_cale_day_pane_fp_t1

0x5931,	// (0x00020153) list_single_cale_day_pane_fp_t2_ParamLimits

0x5931,	// (0x00020153) list_single_cale_day_pane_fp_t2

0x594a,	// (0x0002016c) list_single_cale_day_pane_fp_t3_ParamLimits

0x594a,	// (0x0002016c) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0002a3c7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0002a3c7) list_single_cale_day_pane_fp_t

0xc9bf,	// (0x000271e1) list_empty_pane_fp_g1_ParamLimits

0xc9bf,	// (0x000271e1) list_empty_pane_fp_g1

0x5963,	// (0x00020185) list_empty_pane_fp_t1

0x5971,	// (0x00020193) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0002a3ce) list_empty_pane_fp_t

0xc9bf,	// (0x000271e1) list_single_heading_pane_fp_g1_ParamLimits

0xc9bf,	// (0x000271e1) list_single_heading_pane_fp_g1

0x4b3a,	// (0x0001f35c) list_single_heading_pane_fp_g2_ParamLimits

0x4b3a,	// (0x0001f35c) list_single_heading_pane_fp_g2

0x57ee,	// (0x00020010) list_single_heading_pane_fp_g3_ParamLimits

0x57ee,	// (0x00020010) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0002a3d3) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002a3d3) list_single_heading_pane_fp_g

0x597f,	// (0x000201a1) list_single_heading_pane_fp_t1_ParamLimits

0x597f,	// (0x000201a1) list_single_heading_pane_fp_t1

0x5991,	// (0x000201b3) list_single_heading_pane_fp_t2_ParamLimits

0x5991,	// (0x000201b3) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0002a3da) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0002a3da) list_single_heading_pane_fp_t

0x8ad4,	// (0x000232f6) aid_size_cell_fast

0x8273,	// (0x00022a95) soft_indicator_pane_cp1_t1

0x8b0e,	// (0x00023330) cell_app_pane_cp2_ParamLimits

0x8b0e,	// (0x00023330) cell_app_pane_cp2

0x7033,	// (0x00021855) fep_hwr_candidate_drop_down_list_pane

0x2028,	// (0x0001c84a) fep_hwr_candidate_pane_g3_ParamLimits

0x2028,	// (0x0001c84a) fep_hwr_candidate_pane_g3

0x2035,	// (0x0001c857) fep_hwr_candidate_pane_g4_ParamLimits

0x2035,	// (0x0001c857) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0002a34e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0002a34e) fep_hwr_candidate_pane_g

0xc493,	// (0x00026cb5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc493,	// (0x00026cb5) fep_vkb_candidate_drop_down_list_pane

0xc896,	// (0x000270b8) fep_vkb_candidate_pane_g3

0xc89e,	// (0x000270c0) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x0002a37b) fep_vkb_candidate_pane_g

0xc59e,	// (0x00026dc0) cell_hwr_candidate_pane_g1_ParamLimits

0xc8b5,	// (0x000270d7) cell_hwr_candidate_pane_g3_ParamLimits

0xc8b5,	// (0x000270d7) cell_hwr_candidate_pane_g3

0xc8d6,	// (0x000270f8) cell_hwr_candidate_pane_g4_ParamLimits

0xc8d6,	// (0x000270f8) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002a395) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0002a395) cell_hwr_candidate_pane_g

0xc8f7,	// (0x00027119) cell_vkb_candidate_pane_g3_ParamLimits

0xc8f7,	// (0x00027119) cell_vkb_candidate_pane_g3

0xc912,	// (0x00027134) cell_vkb_candidate_pane_g4_ParamLimits

0xc912,	// (0x00027134) cell_vkb_candidate_pane_g4

0xc9e3,	// (0x00027205) cell_app_pane_cp2_g1_ParamLimits

0xc9e3,	// (0x00027205) cell_app_pane_cp2_g1

0xca01,	// (0x00027223) cell_app_pane_cp2_g2_ParamLimits

0xca01,	// (0x00027223) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0002a3df) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0002a3df) cell_app_pane_cp2_g

0xca0d,	// (0x0002722f) cell_app_pane_cp2_t1_ParamLimits

0xca0d,	// (0x0002722f) cell_app_pane_cp2_t1

0x88d4,	// (0x000230f6) grid_highlight_pane_cp1_ParamLimits

0x88d4,	// (0x000230f6) grid_highlight_pane_cp1

0x726f,	// (0x00021a91) cell_hwr_candidate_pane_cp1_ParamLimits

0x726f,	// (0x00021a91) cell_hwr_candidate_pane_cp1

0xc59e,	// (0x00026dc0) fep_hwr_candidate_drop_down_list_pane_g1

0xca1f,	// (0x00027241) fep_hwr_candidate_drop_down_list_pane_g2

0xca2c,	// (0x0002724e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002a3e4) fep_hwr_candidate_drop_down_list_pane_g

0x728e,	// (0x00021ab0) fep_hwr_candidate_drop_down_list_scroll_pane

0x7297,	// (0x00021ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7297,	// (0x00021ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x72a4,	// (0x00021ac6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72a4,	// (0x00021ac6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x72b1,	// (0x00021ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72b1,	// (0x00021ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc8f7,	// (0x00027119) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8f7,	// (0x00027119) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc912,	// (0x00027134) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc912,	// (0x00027134) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x72be,	// (0x00021ae0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x72be,	// (0x00021ae0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x72d9,	// (0x00021afb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x72d9,	// (0x00021afb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x72f4,	// (0x00021b16) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x72f4,	// (0x00021b16) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0002a3eb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0002a3eb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xca39,	// (0x0002725b) cell_vkb_candidate_pane_cp1_ParamLimits

0xca39,	// (0x0002725b) cell_vkb_candidate_pane_cp1

0xc59e,	// (0x00026dc0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) fep_vkb_candidate_drop_down_list_pane_g1

0xca1f,	// (0x00027241) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca1f,	// (0x00027241) fep_vkb_candidate_drop_down_list_pane_g2

0xca2c,	// (0x0002724e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca2c,	// (0x0002724e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002a3e4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x0002a3e4) fep_vkb_candidate_drop_down_list_pane_g

0xca59,	// (0x0002727b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca59,	// (0x0002727b) fep_vkb_candidate_drop_down_list_scroll_pane

0xca66,	// (0x00027288) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca66,	// (0x00027288) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca73,	// (0x00027295) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca73,	// (0x00027295) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca7f,	// (0x000272a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca7f,	// (0x000272a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc8b5,	// (0x000270d7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc8b5,	// (0x000270d7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc8d6,	// (0x000270f8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc8d6,	// (0x000270f8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca8b,	// (0x000272ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca8b,	// (0x000272ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcaac,	// (0x000272ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcaac,	// (0x000272ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcacd,	// (0x000272ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcacd,	// (0x000272ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0002a3fc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0002a3fc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7fa4,	// (0x000227c6) title_pane_g1_ParamLimits

0x7fb1,	// (0x000227d3) title_pane_g2_ParamLimits

0xf54e,	// (0x00029d70) title_pane_g_ParamLimits

0x8f14,	// (0x00023736) aid_call2_pane

0x8f1c,	// (0x0002373e) aid_call_pane

0x8f24,	// (0x00023746) popup_clock_analogue_window_g1

0x8f24,	// (0x00023746) popup_clock_analogue_window_g2

0x61cc,	// (0x000209ee) popup_clock_analogue_window_g3

0x61d5,	// (0x000209f7) popup_clock_analogue_window_g4

0x7f90,	// (0x000227b2) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00029f1a) popup_clock_analogue_window_g

0x61dd,	// (0x000209ff) popup_clock_analogue_window_t1

0x61eb,	// (0x00020a0d) clock_digital_number_pane_ParamLimits

0x61eb,	// (0x00020a0d) clock_digital_number_pane

0x61f7,	// (0x00020a19) clock_digital_number_pane_cp02_ParamLimits

0x61f7,	// (0x00020a19) clock_digital_number_pane_cp02

0x6203,	// (0x00020a25) clock_digital_number_pane_cp03_ParamLimits

0x6203,	// (0x00020a25) clock_digital_number_pane_cp03

0x620f,	// (0x00020a31) clock_digital_number_pane_cp04_ParamLimits

0x620f,	// (0x00020a31) clock_digital_number_pane_cp04

0x621b,	// (0x00020a3d) clock_digital_separator_pane_ParamLimits

0x621b,	// (0x00020a3d) clock_digital_separator_pane

0x6227,	// (0x00020a49) popup_clock_digital_window_t1_ParamLimits

0x6227,	// (0x00020a49) popup_clock_digital_window_t1

0x7f90,	// (0x000227b2) clock_digital_number_pane_g1

0x7f90,	// (0x000227b2) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00029f25) clock_digital_number_pane_g

0x7f90,	// (0x000227b2) clock_digital_separator_pane_g1

0x7f90,	// (0x000227b2) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00029f25) clock_digital_separator_pane_g

0x9898,	// (0x000240ba) aid_fill_nsta_ParamLimits

0x99da,	// (0x000241fc) indicator_nsta_pane_ParamLimits

0x9b53,	// (0x00024375) popup_clock_analogue_window

0x9b53,	// (0x00024375) popup_clock_digital_window

0x807a,	// (0x0002289c) grid_indicator_nsta_pane_ParamLimits

0xbd08,	// (0x0002652a) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x0002a2ce) clock_nsta_pane_t

0x6190,	// (0x000209b2) aid_size_max_handle

0x619a,	// (0x000209bc) aid_size_min_handle

0x953c,	// (0x00023d5e) editor_scroll_pane

0xcae8,	// (0x0002730a) ex_editor_pane

0x8a42,	// (0x00023264) scroll_pane_cp13

0x8873,	// (0x00023095) scroll_pane_cp14

0x8f53,	// (0x00023775) scroll_pane_cp36

0x8f7f,	// (0x000237a1) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f7f,	// (0x000237a1) list_single_graphic_hl_pane_cp2

0x5437,	// (0x0001fc59) list_single_graphic_hl_pane_ParamLimits

0x5437,	// (0x0001fc59) list_single_graphic_hl_pane

0x59a7,	// (0x000201c9) aid_size_min_hl_cp1

0xcaf0,	// (0x00027312) list_highlight_pane_cp34_ParamLimits

0xcaf0,	// (0x00027312) list_highlight_pane_cp34

0xcb01,	// (0x00027323) list_single_graphic_hl_pane_g1_ParamLimits

0xcb01,	// (0x00027323) list_single_graphic_hl_pane_g1

0x59b0,	// (0x000201d2) list_single_graphic_hl_pane_g2_ParamLimits

0x59b0,	// (0x000201d2) list_single_graphic_hl_pane_g2

0x59b0,	// (0x000201d2) list_single_graphic_hl_pane_g3_ParamLimits

0x59b0,	// (0x000201d2) list_single_graphic_hl_pane_g3

0x59bc,	// (0x000201de) list_single_graphic_hl_pane_g4_ParamLimits

0x59bc,	// (0x000201de) list_single_graphic_hl_pane_g4

0x59c8,	// (0x000201ea) list_single_graphic_hl_pane_g5_ParamLimits

0x59c8,	// (0x000201ea) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0002a40d) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0002a40d) list_single_graphic_hl_pane_g

0x59dc,	// (0x000201fe) list_single_graphic_hl_pane_t1_ParamLimits

0x59dc,	// (0x000201fe) list_single_graphic_hl_pane_t1

0xcb0e,	// (0x00027330) aid_size_min_hl_cp2

0xcb17,	// (0x00027339) list_highlight_pane_cp34_cp2_ParamLimits

0xcb17,	// (0x00027339) list_highlight_pane_cp34_cp2

0xcb01,	// (0x00027323) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb01,	// (0x00027323) list_single_graphic_hl_pane_g1_cp2

0xcb24,	// (0x00027346) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb24,	// (0x00027346) list_single_graphic_hl_pane_g2_cp2

0xcb30,	// (0x00027352) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb30,	// (0x00027352) list_single_graphic_hl_pane_g3_cp2

0x9088,	// (0x000238aa) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9088,	// (0x000238aa) list_single_graphic_hl_pane_g4_cp2

0xcb3e,	// (0x00027360) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb3e,	// (0x00027360) list_single_graphic_hl_pane_g5_cp2

0x64d2,	// (0x00020cf4) control_pane_g4_ParamLimits

0x64d2,	// (0x00020cf4) control_pane_g4

0x9876,	// (0x00024098) bg_popup_sub_pane_cp10_ParamLimits

0xc33a,	// (0x00026b5c) list_choice_list_pane_ParamLimits

0xc349,	// (0x00026b6b) scroll_pane_cp23

0x8303,	// (0x00022b25) bg_popup_preview_window_pane_cp02_ParamLimits

0xc963,	// (0x00027185) list_preview_fixed_pane_ParamLimits

0xc979,	// (0x0002719b) list_preview_fixed_pane_cp_ParamLimits

0xc979,	// (0x0002719b) list_preview_fixed_pane_cp

0xc985,	// (0x000271a7) popup_preview_fixed_window_g1_ParamLimits

0xc985,	// (0x000271a7) popup_preview_fixed_window_g1

0xc991,	// (0x000271b3) popup_preview_fixed_window_g2_ParamLimits

0xc991,	// (0x000271b3) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0002a39c) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0002a39c) popup_preview_fixed_window_g

0x6104,	// (0x00020926) aid_navi_side_left_pane_ParamLimits

0x6119,	// (0x0002093b) aid_navi_side_right_pane_ParamLimits

0x6131,	// (0x00020953) navi_icon_pane_stacon_ParamLimits

0x6145,	// (0x00020967) navi_navi_pane_stacon_ParamLimits

0x6131,	// (0x00020953) navi_text_pane_stacon_ParamLimits

0x7f86,	// (0x000227a8) main_text_info_pane

0xcb68,	// (0x0002738a) listscroll_text_info_pane

0xcb70,	// (0x00027392) list_text_info_pane_ParamLimits

0xcb70,	// (0x00027392) list_text_info_pane

0xcb7f,	// (0x000273a1) scroll_pane_cp24_ParamLimits

0xcb7f,	// (0x000273a1) scroll_pane_cp24

0xcb9d,	// (0x000273bf) list_text_info_pane_t1_ParamLimits

0xcb9d,	// (0x000273bf) list_text_info_pane_t1

0x6618,	// (0x00020e3a) popup_fast_swap2_window_ParamLimits

0x6618,	// (0x00020e3a) popup_fast_swap2_window

0xcbd2,	// (0x000273f4) aid_size_cell_fast2

0x7f86,	// (0x000227a8) bg_popup_window_pane_cp17

0xa1e4,	// (0x00024a06) heading_pane_cp2

0x8546,	// (0x00022d68) listscroll_fast2_pane

0xcbdc,	// (0x000273fe) grid_fast2_pane

0xcbe6,	// (0x00027408) listscroll_fast2_pane_g1

0xcbee,	// (0x00027410) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0002a418) listscroll_fast2_pane_g

0x8a42,	// (0x00023264) scroll_pane_cp26

0xcbf8,	// (0x0002741a) cell_fast2_pane_ParamLimits

0xcbf8,	// (0x0002741a) cell_fast2_pane

0xcc0d,	// (0x0002742f) cell_fast2_pane_g1

0xcc16,	// (0x00027438) cell_fast2_pane_g2

0xcc1f,	// (0x00027441) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0002a41d) cell_fast2_pane_g

0x8630,	// (0x00022e52) grid_highlight_pane_cp9

0x8645,	// (0x00022e67) main_eswt_pane_ParamLimits

0x8645,	// (0x00022e67) main_eswt_pane

0xcb94,	// (0x000273b6) list_single_text_info_pane

0xcc27,	// (0x00027449) eswt_ctrl_button_pane

0xcc27,	// (0x00027449) eswt_ctrl_canvas_pane

0xcc2f,	// (0x00027451) eswt_ctrl_combo_pane

0xcc27,	// (0x00027449) eswt_ctrl_default_pane

0xcc27,	// (0x00027449) eswt_ctrl_label_pane

0xcc37,	// (0x00027459) eswt_ctrl_wait_pane

0xcc3f,	// (0x00027461) eswt_shell_pane

0x7f86,	// (0x000227a8) listscroll_eswt_app_pane

0xcc5f,	// (0x00027481) popup_eswt_tasktip_window_ParamLimits

0xcc5f,	// (0x00027481) popup_eswt_tasktip_window

0x9de8,	// (0x0002460a) bg_popup_window_pane_cp18

0xcc70,	// (0x00027492) eswt_control_pane_g1_ParamLimits

0xcc70,	// (0x00027492) eswt_control_pane_g1

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_ParamLimits

0xcc7d,	// (0x0002749f) eswt_control_pane_g2

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_ParamLimits

0xcc8a,	// (0x000274ac) eswt_control_pane_g3

0xcc97,	// (0x000274b9) eswt_control_pane_g4_ParamLimits

0xcc97,	// (0x000274b9) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0002a424) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0002a424) eswt_control_pane_g

0x88d4,	// (0x000230f6) bg_button_pane_ParamLimits

0x88d4,	// (0x000230f6) bg_button_pane

0x8645,	// (0x00022e67) common_borders_pane_copy2_ParamLimits

0x8645,	// (0x00022e67) common_borders_pane_copy2

0xcca4,	// (0x000274c6) control_button_pane_g1_ParamLimits

0xcca4,	// (0x000274c6) control_button_pane_g1

0xccb0,	// (0x000274d2) control_button_pane_g2_ParamLimits

0xccb0,	// (0x000274d2) control_button_pane_g2

0xccbc,	// (0x000274de) control_button_pane_g3_ParamLimits

0xccbc,	// (0x000274de) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0002a42d) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0002a42d) control_button_pane_g

0xccd0,	// (0x000274f2) control_button_pane_t1

0xccde,	// (0x00027500) control_button_pane_t2

0x0001,

0xfc12,	// (0x0002a434) control_button_pane_t

0x9d74,	// (0x00024596) bg_button_pane_g1

0x9d7c,	// (0x0002459e) bg_button_pane_g2

0x9d84,	// (0x000245a6) bg_button_pane_g3

0x9d8c,	// (0x000245ae) bg_button_pane_g4

0x9d94,	// (0x000245b6) bg_button_pane_g5

0x9d9c,	// (0x000245be) bg_button_pane_g6

0x9da4,	// (0x000245c6) bg_button_pane_g7

0x9dac,	// (0x000245ce) bg_button_pane_g8

0x9db4,	// (0x000245d6) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0002a081) bg_button_pane_g

0xc2f5,	// (0x00026b17) common_borders_pane_ParamLimits

0xc2f5,	// (0x00026b17) common_borders_pane

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy1_ParamLimits

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy1

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy1_ParamLimits

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy1

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy1_ParamLimits

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy1

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy1_ParamLimits

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy1

0xc330,	// (0x00026b52) bg_eswt_ctrl_canvas_pane_g1

0xc2f5,	// (0x00026b17) common_borders_pane_cp2_ParamLimits

0xc2f5,	// (0x00026b17) common_borders_pane_cp2

0xc2f5,	// (0x00026b17) common_borders_pane_cp3_ParamLimits

0xc2f5,	// (0x00026b17) common_borders_pane_cp3

0xccec,	// (0x0002750e) separator_horizontal_pane

0xccf4,	// (0x00027516) separator_vertical_pane

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy2_ParamLimits

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy2

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy2_ParamLimits

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy2

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy2_ParamLimits

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy2

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy2_ParamLimits

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy2

0x7f86,	// (0x000227a8) common_borders_pane_cp4

0xccfd,	// (0x0002751f) separator_horizontal_pane_g1

0xcd06,	// (0x00027528) separator_horizontal_pane_g2

0xcd0f,	// (0x00027531) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0002a439) separator_horizontal_pane_g

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy3_ParamLimits

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy3

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy3_ParamLimits

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy3

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy3_ParamLimits

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy3

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy3_ParamLimits

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy3

0x7f86,	// (0x000227a8) common_borders_pane_cp5

0xcd18,	// (0x0002753a) separator_vertical_pane_g1

0xcd21,	// (0x00027543) separator_vertical_pane_g2

0xcd2a,	// (0x0002754c) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0002a440) separator_vertical_pane_g

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy4_ParamLimits

0xcc70,	// (0x00027492) eswt_control_pane_g1_copy4

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy4_ParamLimits

0xcc7d,	// (0x0002749f) eswt_control_pane_g2_copy4

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy4_ParamLimits

0xcc8a,	// (0x000274ac) eswt_control_pane_g3_copy4

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy4_ParamLimits

0xcc97,	// (0x000274b9) eswt_control_pane_g4_copy4

0xcd33,	// (0x00027555) eswt_ctrl_combo_button_pane

0xcd3b,	// (0x0002755d) eswt_ctrl_input_pane

0xcd43,	// (0x00027565) popup_choice_list_window_cp70

0xcd4b,	// (0x0002756d) eswt_ctrl_input_pane_t1

0x7f86,	// (0x000227a8) input_focus_pane_cp70

0xc2f5,	// (0x00026b17) bg_button_pane_cp70_ParamLimits

0xc2f5,	// (0x00026b17) bg_button_pane_cp70

0xcd59,	// (0x0002757b) eswt_ctrl_combo_button_pane_g1

0xcd61,	// (0x00027583) wait_bar_pane_cp70

0x9de8,	// (0x0002460a) bg_popup_window_pane_cp70_ParamLimits

0x9de8,	// (0x0002460a) bg_popup_window_pane_cp70

0xcd69,	// (0x0002758b) popup_eswt_tasktip_window_t1

0xcd7f,	// (0x000275a1) wait_bar_pane_cp71_ParamLimits

0xcd7f,	// (0x000275a1) wait_bar_pane_cp71

0xcd8b,	// (0x000275ad) grid_eswt_app_pane

0x8d60,	// (0x00023582) scroll_pane_cp70

0xcd94,	// (0x000275b6) cell_eswt_app_pane_ParamLimits

0xcd94,	// (0x000275b6) cell_eswt_app_pane

0xcdc8,	// (0x000275ea) cell_eswt_app_pane_g1_ParamLimits

0xcdc8,	// (0x000275ea) cell_eswt_app_pane_g1

0xcdf7,	// (0x00027619) cell_eswt_app_pane_g2_ParamLimits

0xcdf7,	// (0x00027619) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0002a447) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0002a447) cell_eswt_app_pane_g

0xce1b,	// (0x0002763d) cell_eswt_app_pane_t1_ParamLimits

0xce1b,	// (0x0002763d) cell_eswt_app_pane_t1

0xce4d,	// (0x0002766f) grid_highlight_pane_cp70_ParamLimits

0xce4d,	// (0x0002766f) grid_highlight_pane_cp70

0x941d,	// (0x00023c3f) set_content_pane_g1

0x97d7,	// (0x00023ff9) status_small_volume_pane

0x730f,	// (0x00021b31) status_small_volume_pane_g1

0x7317,	// (0x00021b39) volume_small2_pane

0x7320,	// (0x00021b42) volume_small2_pane_g1

0x7329,	// (0x00021b4b) volume_small2_pane_g2

0x7332,	// (0x00021b54) volume_small2_pane_g3

0x733b,	// (0x00021b5d) volume_small2_pane_g4

0x7344,	// (0x00021b66) volume_small2_pane_g5

0x734d,	// (0x00021b6f) volume_small2_pane_g6

0x7356,	// (0x00021b78) volume_small2_pane_g7

0x735f,	// (0x00021b81) volume_small2_pane_g8

0x7368,	// (0x00021b8a) volume_small2_pane_g9

0x7371,	// (0x00021b93) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0002a44c) volume_small2_pane_g

0xc6e6,	// (0x00026f08) fep_vkb_top_text_pane_g1_ParamLimits

0xc701,	// (0x00026f23) fep_vkb_top_text_pane_t1_ParamLimits

0xc99d,	// (0x000271bf) popup_preview_fixed_window_g3_ParamLimits

0xc99d,	// (0x000271bf) popup_preview_fixed_window_g3

0x6abf,	// (0x000212e1) popup_toolbar_trans_pane

0xb146,	// (0x00025968) aid_height_set_list_ParamLimits

0xb157,	// (0x00025979) aid_size_parent_ParamLimits

0x9876,	// (0x00024098) list_highlight_pane_cp2_ParamLimits

0x941d,	// (0x00023c3f) set_content_pane_g1_ParamLimits

0x5459,	// (0x0001fc7b) list_single_image_pane_ParamLimits

0x5459,	// (0x0001fc7b) list_single_image_pane

0xce59,	// (0x0002767b) aid_size_cell_image_ParamLimits

0xce59,	// (0x0002767b) aid_size_cell_image

0xce66,	// (0x00027688) grid_single_image_pane_ParamLimits

0xce66,	// (0x00027688) grid_single_image_pane

0xce72,	// (0x00027694) list_single_image_pane_g1_ParamLimits

0xce72,	// (0x00027694) list_single_image_pane_g1

0xce7e,	// (0x000276a0) list_single_image_pane_g2_ParamLimits

0xce7e,	// (0x000276a0) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0002a461) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0002a461) list_single_image_pane_g

0xce92,	// (0x000276b4) list_single_image_pane_t1_ParamLimits

0xce92,	// (0x000276b4) list_single_image_pane_t1

0xcea8,	// (0x000276ca) cell_image_list_pane_ParamLimits

0xcea8,	// (0x000276ca) cell_image_list_pane

0xcebc,	// (0x000276de) cell_image_list_pane_g1

0xcec5,	// (0x000276e7) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0002a466) cell_image_list_pane_g

0xcece,	// (0x000276f0) aid_size_cell_tb_trans_pane

0x88d4,	// (0x000230f6) bg_tb_trans_pane

0xcee0,	// (0x00027702) grid_tb_trans_pane

0x9d74,	// (0x00024596) bg_tb_trans_pane_g1

0x9d7c,	// (0x0002459e) bg_tb_trans_pane_g2

0x9d84,	// (0x000245a6) bg_tb_trans_pane_g3

0x9d8c,	// (0x000245ae) bg_tb_trans_pane_g4

0x9d94,	// (0x000245b6) bg_tb_trans_pane_g5

0x9dac,	// (0x000245ce) bg_tb_trans_pane_g6

0x9db4,	// (0x000245d6) bg_tb_trans_pane_g7

0x9d9c,	// (0x000245be) bg_tb_trans_pane_g8

0x9da4,	// (0x000245c6) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0002a46b) bg_tb_trans_pane_g

0xcef4,	// (0x00027716) cell_toolbar_trans_pane_ParamLimits

0xcef4,	// (0x00027716) cell_toolbar_trans_pane

0xc330,	// (0x00026b52) cell_toolbar_trans_pane_g1

0xbedb,	// (0x000266fd) list_form2_midp_pane_t1

0xbee9,	// (0x0002670b) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x0002a314) list_form2_midp_pane_t

0xbef7,	// (0x00026719) scroll_pane_cp51_ParamLimits

0xc0b3,	// (0x000268d5) form2_midp_wait_pane_g1

0xc0bc,	// (0x000268de) form2_midp_wait_pane_g2

0xc0c5,	// (0x000268e7) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0002a329) form2_midp_wait_pane_g

0x807a,	// (0x0002289c) list_highlight_pane_cp21_ParamLimits

0xc113,	// (0x00026935) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc122,	// (0x00026944) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x53cc,	// (0x0001fbee) list_single_2graphic_im_pane_ParamLimits

0x53cc,	// (0x0001fbee) list_single_2graphic_im_pane

0xcf1a,	// (0x0002773c) list_single_2graphic_im_pane_g1_ParamLimits

0xcf1a,	// (0x0002773c) list_single_2graphic_im_pane_g1

0xcf2b,	// (0x0002774d) list_single_2graphic_im_pane_g2_ParamLimits

0xcf2b,	// (0x0002774d) list_single_2graphic_im_pane_g2

0xcf37,	// (0x00027759) list_single_2graphic_im_pane_g3_ParamLimits

0xcf37,	// (0x00027759) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0002a47e) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0002a47e) list_single_2graphic_im_pane_g

0xcf57,	// (0x00027779) list_single_2graphic_im_pane_t1_ParamLimits

0xcf57,	// (0x00027779) list_single_2graphic_im_pane_t1

0xc9a9,	// (0x000271cb) list_single_graphic_2heading_pane_fp_ParamLimits

0xc9a9,	// (0x000271cb) list_single_graphic_2heading_pane_fp

0x5819,	// (0x0002003b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5819,	// (0x0002003b) list_single_graphic_2heading_pane_fp_g1

0xc9bf,	// (0x000271e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc9bf,	// (0x000271e1) list_single_graphic_2heading_pane_fp_g2

0x4b3a,	// (0x0001f35c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b3a,	// (0x0001f35c) list_single_graphic_2heading_pane_fp_g3

0x57ee,	// (0x00020010) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x57ee,	// (0x00020010) list_single_graphic_2heading_pane_fp_g4

0xc9cb,	// (0x000271ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9cb,	// (0x000271ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0002a3ac) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0002a3ac) list_single_graphic_2heading_pane_fp_g

0x59f2,	// (0x00020214) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x59f2,	// (0x00020214) list_single_graphic_2heading_pane_fp_t1

0x5851,	// (0x00020073) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5851,	// (0x00020073) list_single_graphic_2heading_pane_fp_t2

0x5a08,	// (0x0002022a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5a08,	// (0x0002022a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0002a487) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0002a487) list_single_graphic_2heading_pane_fp_t

0xc3bc,	// (0x00026bde) fep_hwr_write_pane_g5_ParamLimits

0xc3bc,	// (0x00026bde) fep_hwr_write_pane_g5

0xc3c8,	// (0x00026bea) fep_hwr_write_pane_g6_ParamLimits

0xc3c8,	// (0x00026bea) fep_hwr_write_pane_g6

0xcc3f,	// (0x00027461) eswt_shell_pane_ParamLimits

0x9de8,	// (0x0002460a) bg_popup_window_pane_cp18_ParamLimits

0xb0a5,	// (0x000258c7) heading_pane_cp70

0xcd69,	// (0x0002758b) popup_eswt_tasktip_window_t1_ParamLimits

0x98ed,	// (0x0002410f) aid_touch_tab_arrow_left

0x98f9,	// (0x0002411b) aid_touch_tab_arrow_right

0x7fc2,	// (0x000227e4) title_pane_g3_ParamLimits

0x7fc2,	// (0x000227e4) title_pane_g3

0x8893,	// (0x000230b5) set_value_pane_g1

0x6abf,	// (0x000212e1) popup_toolbar_trans_pane_ParamLimits

0xcece,	// (0x000276f0) aid_size_cell_tb_trans_pane_ParamLimits

0x88d4,	// (0x000230f6) bg_tb_trans_pane_ParamLimits

0xcee0,	// (0x00027702) grid_tb_trans_pane_ParamLimits

0x8303,	// (0x00022b25) cont_note_pane_ParamLimits

0x8303,	// (0x00022b25) cont_note_pane

0x8645,	// (0x00022e67) cont_snote2_single_text_pane_ParamLimits

0x8645,	// (0x00022e67) cont_snote2_single_text_pane

0x8645,	// (0x00022e67) cont_snote2_single_graphic_pane_ParamLimits

0x8645,	// (0x00022e67) cont_snote2_single_graphic_pane

0xa3fa,	// (0x00024c1c) cont_note_wait_pane_ParamLimits

0xa3fa,	// (0x00024c1c) cont_note_wait_pane

0xa3fa,	// (0x00024c1c) cont_note_image_pane_ParamLimits

0xa3fa,	// (0x00024c1c) cont_note_image_pane

0xcf88,	// (0x000277aa) popup_note2_window_g1_ParamLimits

0xcf88,	// (0x000277aa) popup_note2_window_g1

0xcfb9,	// (0x000277db) popup_note2_window_t1_ParamLimits

0xcfb9,	// (0x000277db) popup_note2_window_t1

0xcffe,	// (0x00027820) popup_note2_window_t2_ParamLimits

0xcffe,	// (0x00027820) popup_note2_window_t2

0xd043,	// (0x00027865) popup_note2_window_t3_ParamLimits

0xd043,	// (0x00027865) popup_note2_window_t3

0xd088,	// (0x000278aa) popup_note2_window_t4_ParamLimits

0xd088,	// (0x000278aa) popup_note2_window_t4

0x837b,	// (0x00022b9d) popup_note2_window_t5_ParamLimits

0x837b,	// (0x00022b9d) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0002a493) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0002a493) popup_note2_window_t

0xd0b7,	// (0x000278d9) popup_note2_image_window_g1_ParamLimits

0xd0b7,	// (0x000278d9) popup_note2_image_window_g1

0xd0c3,	// (0x000278e5) popup_note2_image_window_g2_ParamLimits

0xd0c3,	// (0x000278e5) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0002a49e) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0002a49e) popup_note2_image_window_g

0xd0d5,	// (0x000278f7) popup_note2_image_window_t1_ParamLimits

0xd0d5,	// (0x000278f7) popup_note2_image_window_t1

0xd0ed,	// (0x0002790f) popup_note2_image_window_t2_ParamLimits

0xd0ed,	// (0x0002790f) popup_note2_image_window_t2

0xd105,	// (0x00027927) popup_note2_image_window_t3_ParamLimits

0xd105,	// (0x00027927) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0002a4a3) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0002a4a3) popup_note2_image_window_t

0xa408,	// (0x00024c2a) popup_note2_wait_window_g1_ParamLimits

0xa408,	// (0x00024c2a) popup_note2_wait_window_g1

0xd121,	// (0x00027943) popup_note2_wait_window_g2_ParamLimits

0xd121,	// (0x00027943) popup_note2_wait_window_g2

0xa420,	// (0x00024c42) popup_note2_wait_window_g3_ParamLimits

0xa420,	// (0x00024c42) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x0002a4aa) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x0002a4aa) popup_note2_wait_window_g

0xd12d,	// (0x0002794f) popup_note2_wait_window_t1_ParamLimits

0xd12d,	// (0x0002794f) popup_note2_wait_window_t1

0xd14b,	// (0x0002796d) popup_note2_wait_window_t2_ParamLimits

0xd14b,	// (0x0002796d) popup_note2_wait_window_t2

0xd169,	// (0x0002798b) popup_note2_wait_window_t3_ParamLimits

0xd169,	// (0x0002798b) popup_note2_wait_window_t3

0xd17b,	// (0x0002799d) popup_note2_wait_window_t4_ParamLimits

0xd17b,	// (0x0002799d) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x0002a4b1) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x0002a4b1) popup_note2_wait_window_t

0xd18d,	// (0x000279af) wait_bar2_pane_ParamLimits

0xd18d,	// (0x000279af) wait_bar2_pane

0xd1a5,	// (0x000279c7) popup_snote2_single_text_window_g1_ParamLimits

0xd1a5,	// (0x000279c7) popup_snote2_single_text_window_g1

0xd1cd,	// (0x000279ef) popup_snote2_single_text_window_t1_ParamLimits

0xd1cd,	// (0x000279ef) popup_snote2_single_text_window_t1

0xd219,	// (0x00027a3b) popup_snote2_single_text_window_t2_ParamLimits

0xd219,	// (0x00027a3b) popup_snote2_single_text_window_t2

0xd265,	// (0x00027a87) popup_snote2_single_text_window_t3_ParamLimits

0xd265,	// (0x00027a87) popup_snote2_single_text_window_t3

0xd2a6,	// (0x00027ac8) popup_snote2_single_text_window_t4_ParamLimits

0xd2a6,	// (0x00027ac8) popup_snote2_single_text_window_t4

0xd2dc,	// (0x00027afe) popup_snote2_single_text_window_t5_ParamLimits

0xd2dc,	// (0x00027afe) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x0002a4ba) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x0002a4ba) popup_snote2_single_text_window_t

0xd307,	// (0x00027b29) popup_snote2_single_graphic_window_g1_ParamLimits

0xd307,	// (0x00027b29) popup_snote2_single_graphic_window_g1

0xd32f,	// (0x00027b51) popup_snote2_single_graphic_window_g2_ParamLimits

0xd32f,	// (0x00027b51) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x0002a4c5) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x0002a4c5) popup_snote2_single_graphic_window_g

0xd357,	// (0x00027b79) popup_snote2_single_graphic_window_t1_ParamLimits

0xd357,	// (0x00027b79) popup_snote2_single_graphic_window_t1

0xd3a3,	// (0x00027bc5) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3a3,	// (0x00027bc5) popup_snote2_single_graphic_window_t2

0xd265,	// (0x00027a87) popup_snote2_single_graphic_window_t3_ParamLimits

0xd265,	// (0x00027a87) popup_snote2_single_graphic_window_t3

0xd2a6,	// (0x00027ac8) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2a6,	// (0x00027ac8) popup_snote2_single_graphic_window_t4

0xd2dc,	// (0x00027afe) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2dc,	// (0x00027afe) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x0002a4ca) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x0002a4ca) popup_snote2_single_graphic_window_t

0xbdb2,	// (0x000265d4) clock_nsta_pane_cp2_t1

0xbdb2,	// (0x000265d4) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0002a2ea) clock_nsta_pane_cp2_t

0x4fb3,	// (0x0001f7d5) form_field_data_wide_pane_g1_ParamLimits

0x88e2,	// (0x00023104) form_field_data_wide_pane_g2_ParamLimits

0x88e2,	// (0x00023104) form_field_data_wide_pane_g2

0x88ee,	// (0x00023110) form_field_data_wide_pane_g3_ParamLimits

0x88ee,	// (0x00023110) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00029e9d) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00029e9d) form_field_data_wide_pane_g

0xbca4,	// (0x000264c6) grid_touch_3_pane_ParamLimits

0xbca4,	// (0x000264c6) grid_touch_3_pane

0xd3ef,	// (0x00027c11) cell_touch_3_pane_ParamLimits

0xd3ef,	// (0x00027c11) cell_touch_3_pane

0xc330,	// (0x00026b52) cell_touch_3_pane_g1

0xc330,	// (0x00026b52) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0002a36f) cell_touch_3_pane_g

0x83ad,	// (0x00022bcf) cont_query_data_pane

0x83b5,	// (0x00022bd7) cont_query_data_pane_cp1

0xd420,	// (0x00027c42) button_value_adjust_pane_cp7

0xd428,	// (0x00027c4a) query_popup_pane_cp3

0x9010,	// (0x00023832) bg_popup_sub_pane_cp22_ParamLimits

0x6246,	// (0x00020a68) navi_navi_volume_pane_cp2

0x625e,	// (0x00020a80) popup_side_volume_key_window_g2

0x626a,	// (0x00020a8c) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00029f33) popup_side_volume_key_window_g

0x6284,	// (0x00020aa6) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00029f3a) popup_side_volume_key_window_t

0x92de,	// (0x00023b00) popup_side_volume_key_window_ParamLimits

0x4c20,	// (0x0001f442) list_double_graphic_pane_g4_ParamLimits

0x4c20,	// (0x0001f442) list_double_graphic_pane_g4

0x5413,	// (0x0001fc35) list_single_2heading_msg_pane_ParamLimits

0x5413,	// (0x0001fc35) list_single_2heading_msg_pane

0x5a28,	// (0x0002024a) list_single_2heading_msg_pane_g1_ParamLimits

0x5a28,	// (0x0002024a) list_single_2heading_msg_pane_g1

0x4a4f,	// (0x0001f271) list_single_2heading_msg_pane_g2_ParamLimits

0x4a4f,	// (0x0001f271) list_single_2heading_msg_pane_g2

0x5a34,	// (0x00020256) list_single_2heading_msg_pane_g3_ParamLimits

0x5a34,	// (0x00020256) list_single_2heading_msg_pane_g3

0x5a40,	// (0x00020262) list_single_2heading_msg_pane_g4_ParamLimits

0x5a40,	// (0x00020262) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x0002a4d5) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x0002a4d5) list_single_2heading_msg_pane_g

0x5a58,	// (0x0002027a) list_single_2heading_msg_pane_t1_ParamLimits

0x5a58,	// (0x0002027a) list_single_2heading_msg_pane_t1

0x5a80,	// (0x000202a2) list_single_2heading_msg_pane_t2_ParamLimits

0x5a80,	// (0x000202a2) list_single_2heading_msg_pane_t2

0x5ab4,	// (0x000202d6) list_single_2heading_msg_pane_t3_ParamLimits

0x5ab4,	// (0x000202d6) list_single_2heading_msg_pane_t3

0x5aed,	// (0x0002030f) list_single_2heading_msg_pane_t4_ParamLimits

0x5aed,	// (0x0002030f) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x0002a4de) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x0002a4de) list_single_2heading_msg_pane_t

0x7fce,	// (0x000227f0) title_pane_g4_ParamLimits

0x7fce,	// (0x000227f0) title_pane_g4

0x6054,	// (0x00020876) title_pane_stacon_g3_ParamLimits

0x6054,	// (0x00020876) title_pane_stacon_g3

0xcf4b,	// (0x0002776d) list_single_2graphic_im_pane_g4_ParamLimits

0xcf4b,	// (0x0002776d) list_single_2graphic_im_pane_g4

0xae61,	// (0x00025683) popup_side_volume_key_window_cp

0xb60f,	// (0x00025e31) main_idle_act2_pane_t1

0x6baf,	// (0x000213d1) toolbar_button_pane_g10

0x883d,	// (0x0002305f) popup_toolbar_window_cp1

0xbda3,	// (0x000265c5) clock_nsta_pane_cp_t1

0xbda3,	// (0x000265c5) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x0002a2e5) clock_nsta_pane_cp_t

0x6246,	// (0x00020a68) navi_navi_volume_pane_cp2_ParamLimits

0x6252,	// (0x00020a74) popup_side_volume_key_window_g1_ParamLimits

0x625e,	// (0x00020a80) popup_side_volume_key_window_g2_ParamLimits

0x626a,	// (0x00020a8c) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00029f33) popup_side_volume_key_window_g_ParamLimits

0x701f,	// (0x00021841) fep_hwr_aid_pane

0x201a,	// (0x0001c83c) bg_fep_hwr_top_pane_g4_ParamLimits

0xc38c,	// (0x00026bae) fep_hwr_top_pane_g1_ParamLimits

0xc39e,	// (0x00026bc0) fep_hwr_top_pane_g2_ParamLimits

0x70d8,	// (0x000218fa) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0002a33a) fep_hwr_top_pane_g_ParamLimits

0x70ed,	// (0x0002190f) fep_hwr_top_text_pane_ParamLimits

0xac24,	// (0x00025446) aid_touch_tab_arrow_arrow_2

0xac2d,	// (0x0002544f) aid_touch_tab_arrow_left_2

0x7033,	// (0x00021855) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x706a,	// (0x0002188c) fep_hwr_prediction_pane

0xc4f5,	// (0x00026d17) fep_vkb_prediction_pane

0xc5f2,	// (0x00026e14) fep_vkb_side_pane_g3_ParamLimits

0xc5f2,	// (0x00026e14) fep_vkb_side_pane_g3

0xc59e,	// (0x00026dc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xca1f,	// (0x00027241) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xca2c,	// (0x0002724e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0002a3e4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd44d,	// (0x00027c6f) fep_hwr_prediction_pane_g1

0x737a,	// (0x00021b9c) fep_hwr_prediction_pane_g2

0x7382,	// (0x00021ba4) fep_hwr_prediction_pane_g3

0x738a,	// (0x00021bac) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0002a4e7) fep_hwr_prediction_pane_g

0xd44d,	// (0x00027c6f) fep_vkb_prediction_pane_g1

0xd457,	// (0x00027c79) fep_vkb_prediction_pane_g2

0xd45f,	// (0x00027c81) fep_vkb_prediction_pane_g3

0xd467,	// (0x00027c89) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x0002a4f0) fep_vkb_prediction_pane_g

0x6e7b,	// (0x0002169d) slider_set_pane_g3

0x6e8f,	// (0x000216b1) slider_set_pane_g4

0x6ea7,	// (0x000216c9) slider_set_pane_g5

0x6e7b,	// (0x0002169d) slider_set_pane_g6

0x6ebd,	// (0x000216df) slider_set_pane_g7

0xb2b4,	// (0x00025ad6) slider_form_pane_g3

0xb2bd,	// (0x00025adf) slider_form_pane_g4

0xb2c5,	// (0x00025ae7) slider_form_pane_g5

0xb2b4,	// (0x00025ad6) slider_form_pane_g6

0xb2cd,	// (0x00025aef) slider_form_pane_g7

0xb8ae,	// (0x000260d0) slider_set_pane_vc_g3

0xb8b7,	// (0x000260d9) slider_set_pane_vc_g4

0xb8c0,	// (0x000260e2) slider_set_pane_vc_g5

0xb8ae,	// (0x000260d0) slider_set_pane_vc_g6

0xb8c9,	// (0x000260eb) slider_set_pane_vc_g7

0xba79,	// (0x0002629b) slider_form_pane_vc_g1

0xba82,	// (0x000262a4) slider_form_pane_vc_g2

0xba8b,	// (0x000262ad) slider_form_pane_vc_g3

0xba79,	// (0x0002629b) slider_form_pane_vc_g4

0xba94,	// (0x000262b6) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x0002a2b7) slider_form_pane_vc_g

0x7f86,	// (0x000227a8) main_idle_act3_pane

0xd46f,	// (0x00027c91) ai3_links_pane

0xd478,	// (0x00027c9a) popup_ai3_data_window_ParamLimits

0xd478,	// (0x00027c9a) popup_ai3_data_window

0x7f86,	// (0x000227a8) grid_ai3_links_pane

0xd490,	// (0x00027cb2) cell_ai3_links_pane_ParamLimits

0xd490,	// (0x00027cb2) cell_ai3_links_pane

0xd4a8,	// (0x00027cca) bg_popup_sub_pane_cp11

0xd4b5,	// (0x00027cd7) cell_ai3_links_pane_g1

0x7f86,	// (0x000227a8) bg_popup_sub_pane_cp12

0xd4da,	// (0x00027cfc) heading_ai3_data_pane

0xd4e2,	// (0x00027d04) list_ai3_gene_pane

0xd4ee,	// (0x00027d10) popup_ai3_data_window_g1

0xd4f6,	// (0x00027d18) heading_ai3_data_pane_g1

0xd4fe,	// (0x00027d20) heading_ai3_data_pane_t1

0xd50c,	// (0x00027d2e) list_double_ai3_gene_pane_ParamLimits

0xd50c,	// (0x00027d2e) list_double_ai3_gene_pane

0xd519,	// (0x00027d3b) list_single_ai3_gene_pane_ParamLimits

0xd519,	// (0x00027d3b) list_single_ai3_gene_pane

0xc2f5,	// (0x00026b17) list_highlight_pane_cp7_ParamLimits

0xc2f5,	// (0x00026b17) list_highlight_pane_cp7

0xd526,	// (0x00027d48) list_single_a13_gene_pane_t1_ParamLimits

0xd526,	// (0x00027d48) list_single_a13_gene_pane_t1

0xd53d,	// (0x00027d5f) list_single_ai3_gene_pane_g1

0xd546,	// (0x00027d68) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x0002a4f9) list_single_ai3_gene_pane_g

0xd54e,	// (0x00027d70) list_double_ai3_gene_pane_g1_ParamLimits

0xd54e,	// (0x00027d70) list_double_ai3_gene_pane_g1

0xd55a,	// (0x00027d7c) list_double_ai3_gene_pane_t1_ParamLimits

0xd55a,	// (0x00027d7c) list_double_ai3_gene_pane_t1

0xd576,	// (0x00027d98) list_double_ai3_gene_pane_t2_ParamLimits

0xd576,	// (0x00027d98) list_double_ai3_gene_pane_t2

0xd58b,	// (0x00027dad) list_double_ai3_gene_pane_t3_ParamLimits

0xd58b,	// (0x00027dad) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x0002a4fe) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x0002a4fe) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5a1e,	// (0x00020240) aid_size_min_col_2

0xd439,	// (0x00027c5b) aid_size_min_msg_ParamLimits

0xd439,	// (0x00027c5b) aid_size_min_msg

0xc6f2,	// (0x00026f14) fep_vkb_top_text_pane_g2_ParamLimits

0xc6f2,	// (0x00026f14) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0002a36a) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0002a36a) fep_vkb_top_text_pane_g

0x7f86,	// (0x000227a8) main_hc_apps_shell_pane

0xd5a8,	// (0x00027dca) grid_hc_apps_pane_ParamLimits

0xd5a8,	// (0x00027dca) grid_hc_apps_pane

0xd5b7,	// (0x00027dd9) list_hc_apps_pane

0xd5bf,	// (0x00027de1) scroll_pane_cp37_ParamLimits

0xd5bf,	// (0x00027de1) scroll_pane_cp37

0xd5cb,	// (0x00027ded) cell_hc_apps_pane_ParamLimits

0xd5cb,	// (0x00027ded) cell_hc_apps_pane

0xd679,	// (0x00027e9b) cell_hc_apps_pane_g1_ParamLimits

0xd679,	// (0x00027e9b) cell_hc_apps_pane_g1

0xd6aa,	// (0x00027ecc) cell_hc_apps_pane_g2_ParamLimits

0xd6aa,	// (0x00027ecc) cell_hc_apps_pane_g2

0xd6c6,	// (0x00027ee8) cell_hc_apps_pane_g3_ParamLimits

0xd6c6,	// (0x00027ee8) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x0002a505) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x0002a505) cell_hc_apps_pane_g

0xd6e8,	// (0x00027f0a) cell_hc_apps_pane_t1_ParamLimits

0xd6e8,	// (0x00027f0a) cell_hc_apps_pane_t1

0x8303,	// (0x00022b25) grid_highlight_pane_cp10_ParamLimits

0x8303,	// (0x00022b25) grid_highlight_pane_cp10

0xd728,	// (0x00027f4a) list_single_hc_apps_pane_ParamLimits

0xd728,	// (0x00027f4a) list_single_hc_apps_pane

0xd790,	// (0x00027fb2) list_single_hc_apps_pane_g1

0x5b12,	// (0x00020334) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x0002a50c) list_single_hc_apps_pane_g

0x5b2b,	// (0x0002034d) list_single_hc_apps_pane_g2_copy1

0x5b47,	// (0x00020369) list_single_hc_apps_pane_t1

0x807a,	// (0x0002289c) bg_set_opt_pane_cp_ParamLimits

0x5f7b,	// (0x0002079d) setting_slider_pane_t1_ParamLimits

0x5f94,	// (0x000207b6) setting_slider_pane_t2_ParamLimits

0x5fae,	// (0x000207d0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00029d80) setting_slider_pane_t_ParamLimits

0x5fc6,	// (0x000207e8) slider_set_pane_ParamLimits

0x64e6,	// (0x00020d08) control_pane_g5_ParamLimits

0x64e6,	// (0x00020d08) control_pane_g5

0xb111,	// (0x00025933) slider_set_pane_g1_ParamLimits

0x6e6f,	// (0x00021691) slider_set_pane_g2_ParamLimits

0x6e7b,	// (0x0002169d) slider_set_pane_g3_ParamLimits

0x6e8f,	// (0x000216b1) slider_set_pane_g4_ParamLimits

0x6ea7,	// (0x000216c9) slider_set_pane_g5_ParamLimits

0x6e7b,	// (0x0002169d) slider_set_pane_g6_ParamLimits

0x6ebd,	// (0x000216df) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0002a17f) slider_set_pane_g_ParamLimits

0x93c8,	// (0x00023bea) navi_icon_text_pane_ParamLimits

0x98ae,	// (0x000240d0) aid_fill_nsta_2_ParamLimits

0x98ed,	// (0x0002410f) aid_touch_tab_arrow_left_ParamLimits

0x98f9,	// (0x0002411b) aid_touch_tab_arrow_right_ParamLimits

0x9965,	// (0x00024187) clock_nsta_pane_ParamLimits

0xac06,	// (0x00025428) navi_icon_pane_g1_ParamLimits

0xac12,	// (0x00025434) navi_text_pane_t1_ParamLimits

0xbeb5,	// (0x000266d7) navi_icon_text_pane_g1_ParamLimits

0xbec1,	// (0x000266e3) navi_icon_text_pane_t1_ParamLimits

0xd790,	// (0x00027fb2) list_single_hc_apps_pane_g1_ParamLimits

0x5b12,	// (0x00020334) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x0002a50c) list_single_hc_apps_pane_g_ParamLimits

0x5b2b,	// (0x0002034d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5b47,	// (0x00020369) list_single_hc_apps_pane_t1_ParamLimits

0x5e85,	// (0x000206a7) popup_toolbar2_fixed_window_ParamLimits

0x5e85,	// (0x000206a7) popup_toolbar2_fixed_window

0x6ab5,	// (0x000212d7) popup_toolbar2_float_window

0x7f86,	// (0x000227a8) bg_popup_sub_pane_cp27

0xd7a9,	// (0x00027fcb) grid_toolbar2_float_pane

0x7f86,	// (0x000227a8) bg_popup_sub_pane_cp26

0xd7a9,	// (0x00027fcb) grid_toolbar2_fixed_pane

0xd7b1,	// (0x00027fd3) cell_toolbar2_fixed_pane_ParamLimits

0xd7b1,	// (0x00027fd3) cell_toolbar2_fixed_pane

0xd7c2,	// (0x00027fe4) cell_toolbar2_fixed_pane_g1

0x09ce,	// (0x0001b1f0) toolbar2_fixed_button_pane

0x9d74,	// (0x00024596) toolbar2_fixed_button_pane_g1

0x9d7c,	// (0x0002459e) toolbar2_fixed_button_pane_g2

0x9d84,	// (0x000245a6) toolbar2_fixed_button_pane_g3

0x9d8c,	// (0x000245ae) toolbar2_fixed_button_pane_g4

0x9d94,	// (0x000245b6) toolbar2_fixed_button_pane_g5

0x9d9c,	// (0x000245be) toolbar2_fixed_button_pane_g6

0x9da4,	// (0x000245c6) toolbar2_fixed_button_pane_g7

0x9dac,	// (0x000245ce) toolbar2_fixed_button_pane_g8

0x9db4,	// (0x000245d6) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0002a081) toolbar2_fixed_button_pane_g

0xd7cb,	// (0x00027fed) cell_toolbar2_float_pane_ParamLimits

0xd7cb,	// (0x00027fed) cell_toolbar2_float_pane

0xd7df,	// (0x00028001) cell_toolbar2_float_pane_g1

0x09ce,	// (0x0001b1f0) toolbar2_fixed_button_pane_cp

0xc45c,	// (0x00026c7e) fep_vkb_accented_list_pane_ParamLimits

0xc45c,	// (0x00026c7e) fep_vkb_accented_list_pane

0x723b,	// (0x00021a5d) bg_popup_fep_shadow_pane_g9

0x953c,	// (0x00023d5e) bg_popup_fep_shadow_pane_cp3

0x8a29,	// (0x0002324b) list_accented_list_pane

0xd7e8,	// (0x0002800a) list_single_accented_list_pane_ParamLimits

0xd7e8,	// (0x0002800a) list_single_accented_list_pane

0x953c,	// (0x00023d5e) list_highlight_pane_cp10

0xd7f9,	// (0x0002801b) list_single_accented_list_pane_t1

0x6a05,	// (0x00021227) popup_slider_window_ParamLimits

0x6a05,	// (0x00021227) popup_slider_window

0xd430,	// (0x00027c52) aid_indentation_list_msg

0xd8b3,	// (0x000280d5) bg_popup_window_pane_cp19

0xd91d,	// (0x0002813f) popup_slider_window_g1

0xd939,	// (0x0002815b) popup_slider_window_g2

0xd955,	// (0x00028177) popup_slider_window_g3

0x0005,

0xfcef,	// (0x0002a511) popup_slider_window_g

0xd9b1,	// (0x000281d3) popup_slider_window_t1

0xda25,	// (0x00028247) small_volume_slider_vertical_pane

0xc330,	// (0x00026b52) small_volume_slider_vertical_pane_g1

0xc330,	// (0x00026b52) small_volume_slider_vertical_pane_g2

0xda41,	// (0x00028263) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x0002a523) small_volume_slider_vertical_pane_g

0x5c55,	// (0x00020477) area_side_right_pane_ParamLimits

0x5c55,	// (0x00020477) area_side_right_pane

0x7392,	// (0x00021bb4) aid_size_side_button_ParamLimits

0x7392,	// (0x00021bb4) aid_size_side_button

0x73a6,	// (0x00021bc8) grid_sctrl_middle_pane_ParamLimits

0x73a6,	// (0x00021bc8) grid_sctrl_middle_pane

0x73c5,	// (0x00021be7) sctrl_sk_bottom_pane

0x73d6,	// (0x00021bf8) sctrl_sk_top_pane

0x73e8,	// (0x00021c0a) aid_touch_sctrl_top

0x8303,	// (0x00022b25) bg_sctrl_sk_pane_ParamLimits

0x8303,	// (0x00022b25) bg_sctrl_sk_pane

0x73f5,	// (0x00021c17) sctrl_sk_top_pane_g1

0x7402,	// (0x00021c24) sctrl_sk_top_pane_t1

0x73e8,	// (0x00021c0a) aid_touch_sctrl_bottom

0x8303,	// (0x00022b25) bg_sctrl_sk_pane_cp_ParamLimits

0x8303,	// (0x00022b25) bg_sctrl_sk_pane_cp

0x741d,	// (0x00021c3f) sctrl_sk_bottom_pane_g1

0x7402,	// (0x00021c24) sctrl_sk_bottom_pane_t1

0x7426,	// (0x00021c48) cell_sctrl_middle_pane_ParamLimits

0x7426,	// (0x00021c48) cell_sctrl_middle_pane

0x7441,	// (0x00021c63) aid_touch_sctrl_middle_ParamLimits

0x7441,	// (0x00021c63) aid_touch_sctrl_middle

0x88d4,	// (0x000230f6) bg_sctrl_middle_pane_ParamLimits

0x88d4,	// (0x000230f6) bg_sctrl_middle_pane

0xc59e,	// (0x00026dc0) cell_sctrl_middle_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) cell_sctrl_middle_pane_g1

0x7453,	// (0x00021c75) cell_sctrl_middle_pane_g2_ParamLimits

0x7453,	// (0x00021c75) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0002a52f) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0002a52f) cell_sctrl_middle_pane_g

0x9d74,	// (0x00024596) bg_sctrl_middle_pane_g1

0x9d7c,	// (0x0002459e) bg_sctrl_middle_pane_g2

0x9d84,	// (0x000245a6) bg_sctrl_middle_pane_g3

0x9d8c,	// (0x000245ae) bg_sctrl_middle_pane_g4

0x9d94,	// (0x000245b6) bg_sctrl_middle_pane_g5

0x9d9c,	// (0x000245be) bg_sctrl_middle_pane_g6

0x9da4,	// (0x000245c6) bg_sctrl_middle_pane_g7

0x9dac,	// (0x000245ce) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x0002a534) bg_sctrl_middle_pane_g

0x9db4,	// (0x000245d6) bg_sctrl_middle_pane_g8_copy1

0x9d74,	// (0x00024596) bg_sctrl_sk_pane_g1

0x9d7c,	// (0x0002459e) bg_sctrl_sk_pane_g2

0x9d84,	// (0x000245a6) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0002a081) bg_sctrl_sk_pane_g

0x8803,	// (0x00023025) aid_size_touch_scroll_bar

0x9d8c,	// (0x000245ae) bg_sctrl_sk_pane_g4

0x9d94,	// (0x000245b6) bg_sctrl_sk_pane_g5

0x9d9c,	// (0x000245be) bg_sctrl_sk_pane_g6

0x9da4,	// (0x000245c6) bg_sctrl_sk_pane_g7

0x9dac,	// (0x000245ce) bg_sctrl_sk_pane_g8

0x9db4,	// (0x000245d6) bg_sctrl_sk_pane_g9

0x6676,	// (0x00020e98) popup_fep_china_hwr2_fs_candidate_window

0x6680,	// (0x00020ea2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6680,	// (0x00020ea2) popup_fep_china_hwr2_fs_control_window

0xc59e,	// (0x00026dc0) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x0002a52a) sctrl_sk_top_pane_g

0xda4a,	// (0x0002826c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4a,	// (0x0002826c) aid_fep_china_hwr2_fs_cell

0xda5c,	// (0x0002827e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5c,	// (0x0002827e) bg_popup_fep_shadow_pane_cp4

0xda73,	// (0x00028295) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda73,	// (0x00028295) bg_popup_fep_shadow_pane_cp5

0xda85,	// (0x000282a7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda85,	// (0x000282a7) popup_fep_china_hwr2_fs_control_bar_grid

0xda95,	// (0x000282b7) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9d,	// (0x000282bf) aid_fep_china_hwr2_fs_candi_cell

0x7f86,	// (0x000227a8) bg_popup_fep_shadow_pane_cp6

0xdaa7,	// (0x000282c9) popup_fep_china_hwr2_fs_candidate_grid

0xdab1,	// (0x000282d3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab1,	// (0x000282d3) cell_fep_china_hwr2_fs_funtion_grid

0xc330,	// (0x00026b52) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdac9,	// (0x000282eb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdac9,	// (0x000282eb) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad7,	// (0x000282f9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad7,	// (0x000282f9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x0002a545) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x0002a545) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaed,	// (0x0002830f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaed,	// (0x0002830f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb02,	// (0x00028324) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb02,	// (0x00028324) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x0002a54a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x0002a54a) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1e,	// (0x00028340) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb26,	// (0x00028348) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2e,	// (0x00028350) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0002a54f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb36,	// (0x00028358) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb36,	// (0x00028358) cell_fep_china_hwr2_fs_candidate_grid

0xdb4f,	// (0x00028371) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb57,	// (0x00028379) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc330,	// (0x00026b52) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc330,	// (0x00026b52) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0002a36f) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb5f,	// (0x00028381) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9972,	// (0x00024194) clock_nsta_pane_cp_24_ParamLimits

0x9972,	// (0x00024194) clock_nsta_pane_cp_24

0x99f0,	// (0x00024212) indicator_nsta_pane_cp_24_ParamLimits

0x99f0,	// (0x00024212) indicator_nsta_pane_cp_24

0xaa82,	// (0x000252a4) heading_pane_g1

0x0001,

0xf8c4,	// (0x0002a0e6) heading_pane_g

0xb458,	// (0x00025c7a) grid_sct_catagory_button_pane

0xb488,	// (0x00025caa) scroll_pane_cp5_ParamLimits

0xbf03,	// (0x00026725) button_value_adjust_pane_cp5_ParamLimits

0xbf03,	// (0x00026725) button_value_adjust_pane_cp5

0xbfe2,	// (0x00026804) form2_midp_time_pane_ParamLimits

0xdb6d,	// (0x0002838f) cell_sct_catagory_button_pane_ParamLimits

0xdb6d,	// (0x0002838f) cell_sct_catagory_button_pane

0xc2f5,	// (0x00026b17) bg_button_pane_cp01_ParamLimits

0xc2f5,	// (0x00026b17) bg_button_pane_cp01

0xc330,	// (0x00026b52) cell_sct_catagory_button_pane_g1

0x6a44,	// (0x00021266) popup_tb_extension_window

0xdb7f,	// (0x000283a1) aid_size_cell_ext_ParamLimits

0xdb7f,	// (0x000283a1) aid_size_cell_ext

0x8303,	// (0x00022b25) bg_tb_trans_pane_cp1_ParamLimits

0x8303,	// (0x00022b25) bg_tb_trans_pane_cp1

0xdb9f,	// (0x000283c1) grid_tb_ext_pane_ParamLimits

0xdb9f,	// (0x000283c1) grid_tb_ext_pane

0xdbd1,	// (0x000283f3) cell_tb_ext_pane_ParamLimits

0xdbd1,	// (0x000283f3) cell_tb_ext_pane

0xdbe8,	// (0x0002840a) cell_tb_ext_pane_g1_ParamLimits

0xdbe8,	// (0x0002840a) cell_tb_ext_pane_g1

0xdc05,	// (0x00028427) cell_tb_ext_pane_t1

0x8303,	// (0x00022b25) list_highlight_pane_cp11_ParamLimits

0x8303,	// (0x00022b25) list_highlight_pane_cp11

0x5ea4,	// (0x000206c6) popup_uni_indicator_window_ParamLimits

0x5ea4,	// (0x000206c6) popup_uni_indicator_window

0x88d4,	// (0x000230f6) bg_popup_sub_pane_cp14

0xdc20,	// (0x00028442) list_uniindi_pane

0xdc2c,	// (0x0002844e) uniindi_top_pane

0x8303,	// (0x00022b25) bg_uniindi_top_pane

0xdc4b,	// (0x0002846d) uniindi_top_pane_g1

0xdc61,	// (0x00028483) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x0002a556) uniindi_top_pane_g

0xdc8b,	// (0x000284ad) uniindi_top_pane_t1

0xdcb5,	// (0x000284d7) list_single_uniindi_pane_ParamLimits

0xdcb5,	// (0x000284d7) list_single_uniindi_pane

0xc330,	// (0x00026b52) bg_uniindi_top_pane_g1

0xdcc8,	// (0x000284ea) list_single_uniindi_pane_g1

0xdcdb,	// (0x000284fd) list_single_uniindi_pane_t1

0x7f86,	// (0x000227a8) control_bg_pane

0xdd00,	// (0x00028522) bg_sctrl_sk_pane_cp1

0xdd09,	// (0x0002852b) bg_sctrl_sk_pane_cp2

0xdd12,	// (0x00028534) control_bg_pane_g1

0xdd1b,	// (0x0002853d) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0002a55f) control_bg_pane_g

0xbd47,	// (0x00026569) cell_indicator_nsta_pane_g1_ParamLimits

0xbd55,	// (0x00026577) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x0002a2d3) cell_indicator_nsta_pane_g_ParamLimits

0x57db,	// (0x0001fffd) form2_midp_time_pane_t1_ParamLimits

0x8645,	// (0x00022e67) main_idle_act4_pane_ParamLimits

0x8645,	// (0x00022e67) main_idle_act4_pane

0x6a44,	// (0x00021266) popup_tb_extension_window_ParamLimits

0xdbc1,	// (0x000283e3) tb_ext_find_pane_ParamLimits

0xdbc1,	// (0x000283e3) tb_ext_find_pane

0xdd24,	// (0x00028546) ai_gene_pane_1_cp1

0x967b,	// (0x00023e9d) ai_gene_pane_2_cp1

0xdd2c,	// (0x0002854e) list_single_idle_plugin_calendar_pane

0xdd35,	// (0x00028557) list_single_idle_plugin_notification_pane

0xdd3e,	// (0x00028560) list_single_idle_plugin_player_pane

0xdd47,	// (0x00028569) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd47,	// (0x00028569) list_single_idle_plugin_shortcut_pane

0xdd69,	// (0x0002858b) main_idle_act4_pane_t1

0xdd7b,	// (0x0002859d) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x0002a564) main_idle_act4_pane_t

0xdd8d,	// (0x000285af) middle_sk_idle_act4_pane_ParamLimits

0xdd8d,	// (0x000285af) middle_sk_idle_act4_pane

0xdda3,	// (0x000285c5) popup_clock_digital_analogue_window_cp2

0xddbd,	// (0x000285df) shortcut_wheel_idle_act4_pane_ParamLimits

0xddbd,	// (0x000285df) shortcut_wheel_idle_act4_pane

0xc330,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g1

0xc330,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g2

0xc330,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g3

0xc330,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g4

0xc330,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g5

0xddd1,	// (0x000285f3) shortcut_wheel_idle_act4_pane_g6

0xddd9,	// (0x000285fb) shortcut_wheel_idle_act4_pane_g7

0xdde1,	// (0x00028603) shortcut_wheel_idle_act4_pane_g8

0xdde9,	// (0x0002860b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x0002a569) shortcut_wheel_idle_act4_pane_g

0xc59e,	// (0x00026dc0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) middle_sk_idle_act4_pane_g1

0xde4d,	// (0x0002866f) middle_sk_idle_act4_pane_g2_ParamLimits

0xde4d,	// (0x0002866f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x0002a58c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x0002a58c) middle_sk_idle_act4_pane_g

0xde59,	// (0x0002867b) middle_sk_idle_act4_pane_t1_ParamLimits

0xde59,	// (0x0002867b) middle_sk_idle_act4_pane_t1

0xde76,	// (0x00028698) grid_ai_shortcut_pane_ParamLimits

0xde76,	// (0x00028698) grid_ai_shortcut_pane

0xde8f,	// (0x000286b1) list_highlight_pane_cp16_ParamLimits

0xde8f,	// (0x000286b1) list_highlight_pane_cp16

0xde9c,	// (0x000286be) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde9c,	// (0x000286be) list_single_idle_plugin_shortcut_pane_g1

0xdea8,	// (0x000286ca) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdea8,	// (0x000286ca) list_single_idle_plugin_shortcut_pane_g2

0xdec0,	// (0x000286e2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdec0,	// (0x000286e2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0002a591) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0002a591) list_single_idle_plugin_shortcut_pane_g

0xded3,	// (0x000286f5) cell_ai_shortcut_pane_ParamLimits

0xded3,	// (0x000286f5) cell_ai_shortcut_pane

0xdef4,	// (0x00028716) cell_ai_shortcut_pane_g1_ParamLimits

0xdef4,	// (0x00028716) cell_ai_shortcut_pane_g1

0xdd24,	// (0x00028546) ai_gene_pane_1_cp2

0xdf16,	// (0x00028738) ai_gene_pane_2_cp2

0xdf1e,	// (0x00028740) list_highlight_pane_cp15

0xdf27,	// (0x00028749) list_single_idle_plugin_calendar_pane_g1

0xdf1e,	// (0x00028740) list_highlight_pane_cp17

0xdf2f,	// (0x00028751) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf37,	// (0x00028759) list_single_idle_plugin_player_pane_g1

0xb6af,	// (0x00025ed1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x0002a598) list_single_idle_plugin_player_pane_g

0xdf3f,	// (0x00028761) list_single_idle_plugin_player_pane_t1

0xdf4d,	// (0x0002876f) list_single_idle_plugin_player_pane_t2

0xdf5b,	// (0x0002877d) list_single_idle_plugin_player_pane_t3

0xdf69,	// (0x0002878b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x0002a59d) list_single_idle_plugin_player_pane_t

0xdf77,	// (0x00028799) wait_bar_pane_cp15

0xdf7f,	// (0x000287a1) grid_ai_notification_pane

0xb6af,	// (0x00025ed1) list_single_idle_plugin_notification_pane_g1

0xdf88,	// (0x000287aa) cell_ai_notification_pane_ParamLimits

0xdf88,	// (0x000287aa) cell_ai_notification_pane

0xdf95,	// (0x000287b7) cell_ai_notification_pane_g1

0xdf9d,	// (0x000287bf) cell_ai_notification_pane_t1

0xdfab,	// (0x000287cd) tb_ext_find_button_pane

0xdfb3,	// (0x000287d5) tb_ext_find_pane_g1

0xdfbb,	// (0x000287dd) tb_ext_find_pane_t1

0x8f24,	// (0x00023746) tb_ext_find_button_pane_g1

0xdfc9,	// (0x000287eb) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x0002a5a6) tb_ext_find_button_pane_g

0xdd69,	// (0x0002858b) main_idle_act4_pane_t1_ParamLimits

0xdd7b,	// (0x0002859d) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x0002a564) main_idle_act4_pane_t_ParamLimits

0xdda3,	// (0x000285c5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddb1,	// (0x000285d3) sat_plugin_idle_act4_pane_ParamLimits

0xddb1,	// (0x000285d3) sat_plugin_idle_act4_pane

0xdfd2,	// (0x000287f4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfd2,	// (0x000287f4) sat_plugin_idle_act4_pane_t1

0xdfe5,	// (0x00028807) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfe5,	// (0x00028807) sat_plugin_idle_act4_pane_t2

0xdff8,	// (0x0002881a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdff8,	// (0x0002881a) sat_plugin_idle_act4_pane_t3

0xe00b,	// (0x0002882d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe00b,	// (0x0002882d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x0002a5ab) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x0002a5ab) sat_plugin_idle_act4_pane_t

0x5ded,	// (0x0002060f) popup_battery_window_ParamLimits

0x5ded,	// (0x0002060f) popup_battery_window

0x8303,	// (0x00022b25) bg_popup_sub_pane_cp25_ParamLimits

0x8303,	// (0x00022b25) bg_popup_sub_pane_cp25

0xe01e,	// (0x00028840) popup_battery_window_g1_ParamLimits

0xe01e,	// (0x00028840) popup_battery_window_g1

0xe02a,	// (0x0002884c) popup_battery_window_t1_ParamLimits

0xe02a,	// (0x0002884c) popup_battery_window_t1

0xe03c,	// (0x0002885e) popup_battery_window_t2_ParamLimits

0xe03c,	// (0x0002885e) popup_battery_window_t2

0x0001,

0xfd92,	// (0x0002a5b4) popup_battery_window_t_ParamLimits

0xfd92,	// (0x0002a5b4) popup_battery_window_t

0x9544,	// (0x00023d66) midp_canvas_pane_ParamLimits

0x95bd,	// (0x00023ddf) midp_keypad_pane_ParamLimits

0x95bd,	// (0x00023ddf) midp_keypad_pane

0x9876,	// (0x00024098) main_midp_pane_ParamLimits

0xbdc1,	// (0x000265e3) signal_pane_g2_cp_ParamLimits

0xe059,	// (0x0002887b) aid_size_cell_midp_keypad_ParamLimits

0xe059,	// (0x0002887b) aid_size_cell_midp_keypad

0xe073,	// (0x00028895) midp_keyp_game_grid_pane_ParamLimits

0xe073,	// (0x00028895) midp_keyp_game_grid_pane

0xe093,	// (0x000288b5) midp_keyp_rocker_pane_ParamLimits

0xe093,	// (0x000288b5) midp_keyp_rocker_pane

0xe0cc,	// (0x000288ee) midp_keyp_sk_left_pane_ParamLimits

0xe0cc,	// (0x000288ee) midp_keyp_sk_left_pane

0xe126,	// (0x00028948) midp_keyp_sk_right_pane_ParamLimits

0xe126,	// (0x00028948) midp_keyp_sk_right_pane

0x7f86,	// (0x000227a8) bg_button_pane_cp03

0xe180,	// (0x000289a2) midp_keyp_sk_left_pane_g1

0x7f86,	// (0x000227a8) bg_button_pane_cp04

0xe180,	// (0x000289a2) midp_keyp_sk_right_pane_g1

0xc330,	// (0x00026b52) midp_keyp_rocker_pane_g1

0xe189,	// (0x000289ab) keyp_game_cell_pane_ParamLimits

0xe189,	// (0x000289ab) keyp_game_cell_pane

0x7f86,	// (0x000227a8) bg_button_pane_cp02

0xe19c,	// (0x000289be) keyp_game_cell_pane_g1

0x5e23,	// (0x00020645) popup_fep_vkb2_window_ParamLimits

0x5e23,	// (0x00020645) popup_fep_vkb2_window

0x7471,	// (0x00021c93) aid_size_cell_vkb2_ParamLimits

0x7471,	// (0x00021c93) aid_size_cell_vkb2

0x74c5,	// (0x00021ce7) popup_fep_vkb2_window_g1_ParamLimits

0x74c5,	// (0x00021ce7) popup_fep_vkb2_window_g1

0x750d,	// (0x00021d2f) vkb2_area_bottom_pane_ParamLimits

0x750d,	// (0x00021d2f) vkb2_area_bottom_pane

0x7559,	// (0x00021d7b) vkb2_area_keypad_pane_ParamLimits

0x7559,	// (0x00021d7b) vkb2_area_keypad_pane

0x759b,	// (0x00021dbd) vkb2_area_top_pane_ParamLimits

0x759b,	// (0x00021dbd) vkb2_area_top_pane

0x7615,	// (0x00021e37) vkb2_top_entry_pane_ParamLimits

0x7615,	// (0x00021e37) vkb2_top_entry_pane

0x763f,	// (0x00021e61) vkb2_top_grid_left_pane_ParamLimits

0x763f,	// (0x00021e61) vkb2_top_grid_left_pane

0x765d,	// (0x00021e7f) vkb2_top_grid_right_pane_ParamLimits

0x765d,	// (0x00021e7f) vkb2_top_grid_right_pane

0x767b,	// (0x00021e9d) vkb2_cell_keypad_pane_ParamLimits

0x767b,	// (0x00021e9d) vkb2_cell_keypad_pane

0x774c,	// (0x00021f6e) vkb2_area_bottom_grid_pane_ParamLimits

0x774c,	// (0x00021f6e) vkb2_area_bottom_grid_pane

0x7772,	// (0x00021f94) vkb2_area_bottom_pane_g1_ParamLimits

0x7772,	// (0x00021f94) vkb2_area_bottom_pane_g1

0x7796,	// (0x00021fb8) vkb2_area_bottom_pane_g2_ParamLimits

0x7796,	// (0x00021fb8) vkb2_area_bottom_pane_g2

0x77c4,	// (0x00021fe6) vkb2_area_bottom_pane_g3_ParamLimits

0x77c4,	// (0x00021fe6) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x0002a5b9) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x0002a5b9) vkb2_area_bottom_pane_g

0x7825,	// (0x00022047) vkb2_top_cell_left_pane_ParamLimits

0x7825,	// (0x00022047) vkb2_top_cell_left_pane

0xe1ad,	// (0x000289cf) vkb2_top_entry_pane_g1_ParamLimits

0xe1ad,	// (0x000289cf) vkb2_top_entry_pane_g1

0xe1bb,	// (0x000289dd) vkb2_top_entry_pane_t1_ParamLimits

0xe1bb,	// (0x000289dd) vkb2_top_entry_pane_t1

0xe1ed,	// (0x00028a0f) vkb2_top_entry_pane_t2_ParamLimits

0xe1ed,	// (0x00028a0f) vkb2_top_entry_pane_t2

0xe21f,	// (0x00028a41) vkb2_top_entry_pane_t3_ParamLimits

0xe21f,	// (0x00028a41) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0002a5c0) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0002a5c0) vkb2_top_entry_pane_t

0x7872,	// (0x00022094) vkb2_top_grid_right_pane_g1_ParamLimits

0x7872,	// (0x00022094) vkb2_top_grid_right_pane_g1

0x7888,	// (0x000220aa) vkb2_top_grid_right_pane_g2_ParamLimits

0x7888,	// (0x000220aa) vkb2_top_grid_right_pane_g2

0x78a0,	// (0x000220c2) vkb2_top_grid_right_pane_g3_ParamLimits

0x78a0,	// (0x000220c2) vkb2_top_grid_right_pane_g3

0x78b8,	// (0x000220da) vkb2_top_grid_right_pane_g4_ParamLimits

0x78b8,	// (0x000220da) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x0002a5c7) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x0002a5c7) vkb2_top_grid_right_pane_g

0x78ce,	// (0x000220f0) vkb2_top_cell_left_pane_g1

0x78e5,	// (0x00022107) vkb2_cell_keypad_pane_g1_ParamLimits

0x78e5,	// (0x00022107) vkb2_cell_keypad_pane_g1

0xe243,	// (0x00028a65) vkb2_cell_keypad_pane_t1_ParamLimits

0xe243,	// (0x00028a65) vkb2_cell_keypad_pane_t1

0x78f3,	// (0x00022115) vkb2_cell_bottom_grid_pane_ParamLimits

0x78f3,	// (0x00022115) vkb2_cell_bottom_grid_pane

0x792c,	// (0x0002214e) vkb2_cell_bottom_grid_pane_g1

0xddf1,	// (0x00028613) aid_call2_pane_cp02

0xddf9,	// (0x0002861b) aid_call_pane_cp02

0xde01,	// (0x00028623) clock_digital_number_pane_cp10

0xde09,	// (0x0002862b) clock_digital_number_pane_cp11

0xde11,	// (0x00028633) clock_digital_number_pane_cp12

0xde19,	// (0x0002863b) clock_digital_number_pane_cp13

0xde21,	// (0x00028643) clock_digital_separator_pane_cp10

0x8f24,	// (0x00023746) popup_clock_digital_analogue_window_cp2_g1

0x8f24,	// (0x00023746) popup_clock_digital_analogue_window_cp2_g2

0xde29,	// (0x0002864b) popup_clock_digital_analogue_window_cp2_g3

0x8f24,	// (0x00023746) popup_clock_digital_analogue_window_cp2_g4

0xde29,	// (0x0002864b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x0002a57c) popup_clock_digital_analogue_window_cp2_g

0xde31,	// (0x00028653) popup_clock_digital_analogue_window_cp2_t1

0xde3f,	// (0x00028661) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x0002a587) popup_clock_digital_analogue_window_cp2_t

0xc330,	// (0x00026b52) clock_digital_number_pane_cp10_g1

0xc330,	// (0x00026b52) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0002a36f) clock_digital_number_pane_cp10_g

0xc330,	// (0x00026b52) clock_digital_separator_pane_cp10_g1

0xc330,	// (0x00026b52) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0002a36f) clock_digital_separator_pane_cp10_g

0xdc6d,	// (0x0002848f) uniindi_top_pane_g3

0xdc7e,	// (0x000284a0) uniindi_top_pane_g4

0x7706,	// (0x00021f28) vkb2_row_keypad_pane_ParamLimits

0x7706,	// (0x00021f28) vkb2_row_keypad_pane

0x794c,	// (0x0002216e) vkb2_cell_t_keypad_pane_ParamLimits

0x794c,	// (0x0002216e) vkb2_cell_t_keypad_pane

0x795c,	// (0x0002217e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x795c,	// (0x0002217e) vkb2_cell_t_keypad_pane_cp08

0x796f,	// (0x00022191) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x796f,	// (0x00022191) vkb2_cell_t_keypad_pane_cp09

0x7983,	// (0x000221a5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7983,	// (0x000221a5) vkb2_cell_t_keypad_pane_cp01

0x7994,	// (0x000221b6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7994,	// (0x000221b6) vkb2_cell_t_keypad_pane_cp02

0x79a5,	// (0x000221c7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x79a5,	// (0x000221c7) vkb2_cell_t_keypad_pane_cp03

0x79b6,	// (0x000221d8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x79b6,	// (0x000221d8) vkb2_cell_t_keypad_pane_cp04

0x79c7,	// (0x000221e9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x79c7,	// (0x000221e9) vkb2_cell_t_keypad_pane_cp05

0x79d8,	// (0x000221fa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x79d8,	// (0x000221fa) vkb2_cell_t_keypad_pane_cp06

0x79e9,	// (0x0002220b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x79e9,	// (0x0002220b) vkb2_cell_t_keypad_pane_cp07

0x79fa,	// (0x0002221c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x79fa,	// (0x0002221c) vkb2_cell_t_keypad_pane_cp10

0xc59e,	// (0x00026dc0) vkb2_cell_t_keypad_pane_g1

0xe25a,	// (0x00028a7c) vkb2_cell_t_keypad_pane_t1

0x7f86,	// (0x000227a8) popup_grid_graphic2_window

0xe26c,	// (0x00028a8e) aid_size_cell_graphic2_ParamLimits

0xe26c,	// (0x00028a8e) aid_size_cell_graphic2

0xe2a4,	// (0x00028ac6) bg_popup_window_pane_cp21_ParamLimits

0xe2a4,	// (0x00028ac6) bg_popup_window_pane_cp21

0xe2b2,	// (0x00028ad4) graphic2_pages_pane_ParamLimits

0xe2b2,	// (0x00028ad4) graphic2_pages_pane

0xe2f8,	// (0x00028b1a) grid_graphic2_control_pane_ParamLimits

0xe2f8,	// (0x00028b1a) grid_graphic2_control_pane

0xe336,	// (0x00028b58) grid_graphic2_pane_ParamLimits

0xe336,	// (0x00028b58) grid_graphic2_pane

0xe3aa,	// (0x00028bcc) cell_graphic2_pane

0x7f86,	// (0x000227a8) main_comp_mode_pane

0xd4e2,	// (0x00027d04) list_ai3_gene_pane_ParamLimits

0xd8b3,	// (0x000280d5) bg_popup_window_pane_cp19_ParamLimits

0xd8bf,	// (0x000280e1) bg_touch_area_indi_pane_ParamLimits

0xd8bf,	// (0x000280e1) bg_touch_area_indi_pane

0xd8d5,	// (0x000280f7) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d5,	// (0x000280f7) bg_touch_area_indi_pane_cp01

0xd8eb,	// (0x0002810d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8eb,	// (0x0002810d) bg_touch_area_indi_pane_cp02

0xd903,	// (0x00028125) bg_touch_area_indi_pane_cp03_ParamLimits

0xd903,	// (0x00028125) bg_touch_area_indi_pane_cp03

0xd91d,	// (0x0002813f) popup_slider_window_g1_ParamLimits

0xd939,	// (0x0002815b) popup_slider_window_g2_ParamLimits

0xd955,	// (0x00028177) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x0002a511) popup_slider_window_g_ParamLimits

0xd9b1,	// (0x000281d3) popup_slider_window_t1_ParamLimits

0xda25,	// (0x00028247) small_volume_slider_vertical_pane_ParamLimits

0xe3aa,	// (0x00028bcc) cell_graphic2_pane_ParamLimits

0xe3f8,	// (0x00028c1a) bg_button_pane_cp10_ParamLimits

0xe3f8,	// (0x00028c1a) bg_button_pane_cp10

0xe40b,	// (0x00028c2d) bg_button_pane_cp11_ParamLimits

0xe40b,	// (0x00028c2d) bg_button_pane_cp11

0xe41e,	// (0x00028c40) graphic2_pages_pane_g1_ParamLimits

0xe41e,	// (0x00028c40) graphic2_pages_pane_g1

0xe439,	// (0x00028c5b) graphic2_pages_pane_g2_ParamLimits

0xe439,	// (0x00028c5b) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x0002a5d5) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x0002a5d5) graphic2_pages_pane_g

0xe451,	// (0x00028c73) graphic2_pages_pane_t1_ParamLimits

0xe451,	// (0x00028c73) graphic2_pages_pane_t1

0xe467,	// (0x00028c89) cell_graphic2_control_pane_ParamLimits

0xe467,	// (0x00028c89) cell_graphic2_control_pane

0xe488,	// (0x00028caa) cell_graphic2_pane_g1_ParamLimits

0xe488,	// (0x00028caa) cell_graphic2_pane_g1

0xe495,	// (0x00028cb7) cell_graphic2_pane_g2_ParamLimits

0xe495,	// (0x00028cb7) cell_graphic2_pane_g2

0xe4a2,	// (0x00028cc4) cell_graphic2_pane_g3_ParamLimits

0xe4a2,	// (0x00028cc4) cell_graphic2_pane_g3

0xe4af,	// (0x00028cd1) cell_graphic2_pane_g4_ParamLimits

0xe4af,	// (0x00028cd1) cell_graphic2_pane_g4

0xe4bc,	// (0x00028cde) cell_graphic2_pane_g5_ParamLimits

0xe4bc,	// (0x00028cde) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x0002a5da) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x0002a5da) cell_graphic2_pane_g

0xe4d7,	// (0x00028cf9) cell_graphic2_pane_t1_ParamLimits

0xe4d7,	// (0x00028cf9) cell_graphic2_pane_t1

0x9de8,	// (0x0002460a) grid_highlight_pane_cp11_ParamLimits

0x9de8,	// (0x0002460a) grid_highlight_pane_cp11

0x8303,	// (0x00022b25) bg_button_pane_cp05

0xe500,	// (0x00028d22) cell_graphic2_control_pane_g1

0xc330,	// (0x00026b52) bg_touch_area_indi_pane_g1

0xe528,	// (0x00028d4a) aid_cmod_rocker_key_size

0xe532,	// (0x00028d54) aid_cmode_itu_key_size

0xe53c,	// (0x00028d5e) main_cmode_video_pane

0xe546,	// (0x00028d68) main_comp_mode_itu_pane

0xe552,	// (0x00028d74) main_comp_mode_rocker_pane

0xe55e,	// (0x00028d80) cell_cmode_rocker_pane_ParamLimits

0xe55e,	// (0x00028d80) cell_cmode_rocker_pane

0xe570,	// (0x00028d92) cell_cmode_itu_pane_ParamLimits

0xe570,	// (0x00028d92) cell_cmode_itu_pane

0x88d4,	// (0x000230f6) bg_button_pane_cp06_ParamLimits

0x88d4,	// (0x000230f6) bg_button_pane_cp06

0xc59e,	// (0x00026dc0) cell_cmode_rocker_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) cell_cmode_rocker_pane_g1

0xdac9,	// (0x000282eb) cell_cmode_rocker_pane_g2_ParamLimits

0xdac9,	// (0x000282eb) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x0002a5ea) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x0002a5ea) cell_cmode_rocker_pane_g

0x7f86,	// (0x000227a8) bg_button_pane_cp07

0xe585,	// (0x00028da7) cell_cmode_itu_pane_g1

0xe58e,	// (0x00028db0) cell_cmode_itu_pane_t1

0xe59c,	// (0x00028dbe) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x0002a5ef) cell_cmode_itu_pane_t

0xdcf0,	// (0x00028512) aid_touch_ctrl_left

0xdcf8,	// (0x0002851a) aid_touch_ctrl_right

0x7f86,	// (0x000227a8) compa_mode_pane

0xe5aa,	// (0x00028dcc) aid_cmod_rocker_key_size_cp

0xe5b4,	// (0x00028dd6) aid_cmode_itu_key_size_cp

0xe5be,	// (0x00028de0) compa_mode_pane_g1

0xe5c6,	// (0x00028de8) compa_mode_pane_g2

0xe5ce,	// (0x00028df0) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x0002a5f4) compa_mode_pane_g

0xe5d6,	// (0x00028df8) main_comp_mode_itu_pane_cp

0xe5de,	// (0x00028e00) main_comp_mode_rocker_pane_cp

0xe5e6,	// (0x00028e08) cell_cmode_itu_pane_cp_ParamLimits

0xe5e6,	// (0x00028e08) cell_cmode_itu_pane_cp

0xe5fb,	// (0x00028e1d) cell_cmode_rocker_pane_cp_ParamLimits

0xe5fb,	// (0x00028e1d) cell_cmode_rocker_pane_cp

0x88d4,	// (0x000230f6) bg_button_pane_cp06_cp_ParamLimits

0x88d4,	// (0x000230f6) bg_button_pane_cp06_cp

0xc59e,	// (0x00026dc0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc59e,	// (0x00026dc0) cell_cmode_rocker_pane_g1_cp

0xc330,	// (0x00026b52) cell_cmode_rocker_pane_g2_cp

0x7f86,	// (0x000227a8) bg_button_pane_cp07_cp

0xe60d,	// (0x00028e2f) cell_cmode_itu_pane_g1_cp

0xe616,	// (0x00028e38) cell_cmode_itu_pane_t1_cp

0xe616,	// (0x00028e38) cell_cmode_itu_pane_t2_cp

0xb2a1,	// (0x00025ac3) settings_code_pane_cp2

0x807a,	// (0x0002289c) bg_popup_window_pane_cp3_ParamLimits

0x84d1,	// (0x00022cf3) heading_pane_cp3_ParamLimits

0x84dd,	// (0x00022cff) listscroll_popup_graphic_pane_ParamLimits

0x701f,	// (0x00021841) fep_hwr_aid_pane_ParamLimits

0x73e8,	// (0x00021c0a) aid_touch_sctrl_top_ParamLimits

0x73f5,	// (0x00021c17) sctrl_sk_top_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x0002a52a) sctrl_sk_top_pane_g_ParamLimits

0x7402,	// (0x00021c24) sctrl_sk_top_pane_t1_ParamLimits

0x73e8,	// (0x00021c0a) aid_touch_sctrl_bottom_ParamLimits

0x7402,	// (0x00021c24) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc39,	// (0x0002845b) aid_area_touch_clock

0x75dd,	// (0x00021dff) aid_vkb2_area_top_pane_cell_ParamLimits

0x75dd,	// (0x00021dff) aid_vkb2_area_top_pane_cell

0x7728,	// (0x00021f4a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7728,	// (0x00021f4a) aid_vkb2_area_bottom_pane_cell

0xe1a5,	// (0x000289c7) popup_char_count_window

0xe624,	// (0x00028e46) popup_char_count_window_g1

0xe62d,	// (0x00028e4f) popup_char_count_window_g2

0xe636,	// (0x00028e58) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x0002a5fb) popup_char_count_window_g

0xe63f,	// (0x00028e61) popup_char_count_window_t1

0x74a3,	// (0x00021cc5) popup_fep_char_preview_window_ParamLimits

0x74a3,	// (0x00021cc5) popup_fep_char_preview_window

0x75fb,	// (0x00021e1d) vkb2_top_candi_pane_ParamLimits

0x75fb,	// (0x00021e1d) vkb2_top_candi_pane

0xe64d,	// (0x00028e6f) cell_vkb2_top_candi_pane_ParamLimits

0xe64d,	// (0x00028e6f) cell_vkb2_top_candi_pane

0xa3fa,	// (0x00024c1c) bg_popup_fep_char_preview_window_ParamLimits

0xa3fa,	// (0x00024c1c) bg_popup_fep_char_preview_window

0x7a0f,	// (0x00022231) popup_fep_char_preview_window_t1_ParamLimits

0x7a0f,	// (0x00022231) popup_fep_char_preview_window_t1

0xe69a,	// (0x00028ebc) bg_popup_fep_char_preview_window_g1

0xe6a2,	// (0x00028ec4) bg_popup_fep_char_preview_window_g2

0xe6aa,	// (0x00028ecc) bg_popup_fep_char_preview_window_g3

0xe6b2,	// (0x00028ed4) bg_popup_fep_char_preview_window_g4

0xe6ba,	// (0x00028edc) bg_popup_fep_char_preview_window_g5

0x7a49,	// (0x0002226b) bg_popup_fep_char_preview_window_g6

0xe6c2,	// (0x00028ee4) bg_popup_fep_char_preview_window_g7

0xe6ca,	// (0x00028eec) bg_popup_fep_char_preview_window_g8

0xe6d2,	// (0x00028ef4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x0002a602) bg_popup_fep_char_preview_window_g

0xc59e,	// (0x00026dc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) cell_vkb2_top_candi_pane_g1

0xc8b5,	// (0x000270d7) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc8b5,	// (0x000270d7) cell_vkb2_top_candi_pane_g2

0xc8d6,	// (0x000270f8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc8d6,	// (0x000270f8) cell_vkb2_top_candi_pane_g3

0x7a51,	// (0x00022273) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a51,	// (0x00022273) cell_vkb2_top_candi_pane_g4

0xe6da,	// (0x00028efc) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe6da,	// (0x00028efc) cell_vkb2_top_candi_pane_g5

0xdac9,	// (0x000282eb) cell_vkb2_top_candi_pane_g6_ParamLimits

0xdac9,	// (0x000282eb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x0002a615) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x0002a615) cell_vkb2_top_candi_pane_g

0x7a72,	// (0x00022294) cell_vkb2_top_candi_pane_t1

0x6e5b,	// (0x0002167d) aid_size_touch_slider_mark_ParamLimits

0x6e5b,	// (0x0002167d) aid_size_touch_slider_mark

0xe2e8,	// (0x00028b0a) grid_graphic2_catg_pane_ParamLimits

0xe2e8,	// (0x00028b0a) grid_graphic2_catg_pane

0xe386,	// (0x00028ba8) popup_grid_graphic2_window_t1_ParamLimits

0xe386,	// (0x00028ba8) popup_grid_graphic2_window_t1

0xe398,	// (0x00028bba) popup_grid_graphic2_window_t2_ParamLimits

0xe398,	// (0x00028bba) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x0002a5d0) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x0002a5d0) popup_grid_graphic2_window_t

0x8303,	// (0x00022b25) bg_button_pane_cp05_ParamLimits

0xe500,	// (0x00028d22) cell_graphic2_control_pane_g1_ParamLimits

0xe6fb,	// (0x00028f1d) cell_graphic2_catg_pane_ParamLimits

0xe6fb,	// (0x00028f1d) cell_graphic2_catg_pane

0x7f86,	// (0x000227a8) bg_button_pane_cp12

0xe70d,	// (0x00028f2f) cell_graphic2_catg_pane_g1

0xdc05,	// (0x00028427) cell_tb_ext_pane_t1_ParamLimits

0x7845,	// (0x00022067) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7845,	// (0x00022067) vkb2_top_cell_right_narrow_pane

0x785d,	// (0x0002207f) vkb2_top_cell_right_wide_pane_ParamLimits

0x785d,	// (0x0002207f) vkb2_top_cell_right_wide_pane

0x7011,	// (0x00021833) bg_vkb2_func_pane_ParamLimits

0x7011,	// (0x00021833) bg_vkb2_func_pane

0x78ce,	// (0x000220f0) vkb2_top_cell_left_pane_g1_ParamLimits

0x7011,	// (0x00021833) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7011,	// (0x00021833) bg_vkb2_fuc_pane_cp03

0x792c,	// (0x0002214e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d7c,	// (0x0002459e) bg_vkb2_func_pane_g1

0x9d84,	// (0x000245a6) bg_vkb2_func_pane_g2

0x9d94,	// (0x000245b6) bg_vkb2_func_pane_g3

0x9d8c,	// (0x000245ae) bg_vkb2_func_pane_g4

0x9d9c,	// (0x000245be) bg_vkb2_func_pane_g5

0x9da4,	// (0x000245c6) bg_vkb2_func_pane_g6

0x9dac,	// (0x000245ce) bg_vkb2_func_pane_g7

0x9db4,	// (0x000245d6) bg_vkb2_func_pane_g8

0x9d74,	// (0x00024596) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x0002a622) bg_vkb2_func_pane_g

0x7011,	// (0x00021833) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7011,	// (0x00021833) bg_vkb2_fuc_pane_cp01

0x78ce,	// (0x000220f0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x78ce,	// (0x000220f0) vkb2_top_cell_right_wide_pane_g1

0x7011,	// (0x00021833) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7011,	// (0x00021833) bg_vkb2_fuc_pane_cp02

0x792c,	// (0x0002214e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x792c,	// (0x0002214e) vkb2_top_cell_right_narrow_pane_g1

0xd831,	// (0x00028053) aid_touch_area_decrease_ParamLimits

0xd831,	// (0x00028053) aid_touch_area_decrease

0xd855,	// (0x00028077) aid_touch_area_increase_ParamLimits

0xd855,	// (0x00028077) aid_touch_area_increase

0xd861,	// (0x00028083) aid_touch_area_mute_ParamLimits

0xd861,	// (0x00028083) aid_touch_area_mute

0xd885,	// (0x000280a7) aid_touch_area_slider_ParamLimits

0xd885,	// (0x000280a7) aid_touch_area_slider

0xd971,	// (0x00028193) popup_slider_window_g4_ParamLimits

0xd971,	// (0x00028193) popup_slider_window_g4

0xd97d,	// (0x0002819f) popup_slider_window_g5_ParamLimits

0xd97d,	// (0x0002819f) popup_slider_window_g5

0xd99f,	// (0x000281c1) popup_slider_window_g6_ParamLimits

0xd99f,	// (0x000281c1) popup_slider_window_g6

0xd9df,	// (0x00028201) popup_slider_window_t2_ParamLimits

0xd9df,	// (0x00028201) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x0002a51e) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x0002a51e) popup_slider_window_t

0xd9f7,	// (0x00028219) slider_pane_ParamLimits

0xd9f7,	// (0x00028219) slider_pane

0xe716,	// (0x00028f38) slider_pane_g1_ParamLimits

0xe716,	// (0x00028f38) slider_pane_g1

0xe72a,	// (0x00028f4c) slider_pane_g2_ParamLimits

0xe72a,	// (0x00028f4c) slider_pane_g2

0xe740,	// (0x00028f62) slider_pane_g3_ParamLimits

0xe740,	// (0x00028f62) slider_pane_g3

0x0003,

0xfe13,	// (0x0002a635) slider_pane_g_ParamLimits

0xfe13,	// (0x0002a635) slider_pane_g

0x6aa0,	// (0x000212c2) popup_tb_float_extension_window_ParamLimits

0x6aa0,	// (0x000212c2) popup_tb_float_extension_window

0xe76c,	// (0x00028f8e) aid_size_cell_tb_float_ext

0x7f86,	// (0x000227a8) bg_popup_sub_window_cp28

0xe778,	// (0x00028f9a) grid_tb_float_ext_pane

0xe782,	// (0x00028fa4) cell_tb_float_ext_pane_ParamLimits

0xe782,	// (0x00028fa4) cell_tb_float_ext_pane

0xe79c,	// (0x00028fbe) cell_tb_float_ext_pane_g1

0xe7a5,	// (0x00028fc7) grid_highlight_pane_cp12

0x7152,	// (0x00021974) cell_last_hwr_side_pane_ParamLimits

0x7152,	// (0x00021974) cell_last_hwr_side_pane

0xc330,	// (0x00026b52) cell_last_hwr_side_pane_g1

0xe7ae,	// (0x00028fd0) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0002a63e) cell_last_hwr_side_pane_g

0x77f4,	// (0x00022016) vkb2_area_bottom_space_btn_pane_ParamLimits

0x77f4,	// (0x00022016) vkb2_area_bottom_space_btn_pane

0xc59e,	// (0x00026dc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe25a,	// (0x00028a7c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a72,	// (0x00022294) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a91,	// (0x000222b3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a91,	// (0x000222b3) vkb2_area_bottom_space_btn_pane_g1

0x7acb,	// (0x000222ed) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7acb,	// (0x000222ed) vkb2_area_bottom_space_btn_pane_g2

0x7b01,	// (0x00022323) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7b01,	// (0x00022323) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0002a643) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0002a643) vkb2_area_bottom_space_btn_pane_g

0x70c6,	// (0x000218e8) cel_fep_hwr_func_pane_ParamLimits

0x70c6,	// (0x000218e8) cel_fep_hwr_func_pane

0x7102,	// (0x00021924) cell_hwr_side_button_pane_ParamLimits

0x7102,	// (0x00021924) cell_hwr_side_button_pane

0xdc39,	// (0x0002845b) aid_area_touch_clock_ParamLimits

0x8303,	// (0x00022b25) bg_uniindi_top_pane_ParamLimits

0xdc4b,	// (0x0002846d) uniindi_top_pane_g1_ParamLimits

0xdc61,	// (0x00028483) uniindi_top_pane_g2_ParamLimits

0xdc6d,	// (0x0002848f) uniindi_top_pane_g3_ParamLimits

0xdc7e,	// (0x000284a0) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x0002a556) uniindi_top_pane_g_ParamLimits

0xdc8b,	// (0x000284ad) uniindi_top_pane_t1_ParamLimits

0x8303,	// (0x00022b25) bg_vkb2_func_pane_cp01_ParamLimits

0x8303,	// (0x00022b25) bg_vkb2_func_pane_cp01

0xe7b7,	// (0x00028fd9) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b7,	// (0x00028fd9) cel_fep_hwr_func_pane_g1

0x8303,	// (0x00022b25) bg_vkb2_func_pane_cp02_ParamLimits

0x8303,	// (0x00022b25) bg_vkb2_func_pane_cp02

0xe7b7,	// (0x00028fd9) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b7,	// (0x00028fd9) cell_hwr_side_button_pane_g1

0x9bf5,	// (0x00024417) status_pane_g4_ParamLimits

0x9bf5,	// (0x00024417) status_pane_g4

0x9c0f,	// (0x00024431) status_pane_t1

0xc04a,	// (0x0002686c) form2_midp_gauge_slider_cont_pane

0xc052,	// (0x00026874) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc064,	// (0x00026886) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc076,	// (0x00026898) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0002a322) form2_midp_gauge_slider_pane_t_ParamLimits

0xc088,	// (0x000268aa) form2_midp_slider_pane_ParamLimits

0x7463,	// (0x00021c85) aid_size_cell_func_vkb2_ParamLimits

0x7463,	// (0x00021c85) aid_size_cell_func_vkb2

0xe758,	// (0x00028f7a) slider_pane_g4_ParamLimits

0xe758,	// (0x00028f7a) slider_pane_g4

0x7b4b,	// (0x0002236d) form2_midp_gauge_slider_pane_t2_cp01

0x7b59,	// (0x0002237b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7b59,	// (0x0002237b) form2_midp_gauge_slider_pane_t3_cp01

0x7b76,	// (0x00022398) form2_midp_slider_pane_cp01

0x7f86,	// (0x000227a8) navi_smil_pane

0xe7f0,	// (0x00029012) navi_smil_pane_g1

0xe7f8,	// (0x0002901a) navi_smil_pane_t1

0xe7c5,	// (0x00028fe7) form2_midp_slider_pane_g1

0xe7ce,	// (0x00028ff0) form2_midp_slider_pane_g2

0xe7d6,	// (0x00028ff8) form2_midp_slider_pane_g3

0xe7c5,	// (0x00028fe7) form2_midp_slider_pane_g4

0xe7de,	// (0x00029000) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x0002a64c) form2_midp_slider_pane_g

0x7b3b,	// (0x0002235d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7b3b,	// (0x0002235d) vkb2_area_bottom_space_btn_pane_g4

0x9a2c,	// (0x0002424e) lc0_navi_pane_ParamLimits

0x9a2c,	// (0x0002424e) lc0_navi_pane

0x9aa2,	// (0x000242c4) lc0_stat_indi_pane_ParamLimits

0x9aa2,	// (0x000242c4) lc0_stat_indi_pane

0x9ab9,	// (0x000242db) ls0_title_pane_ParamLimits

0x9ab9,	// (0x000242db) ls0_title_pane

0x88d4,	// (0x000230f6) bg_popup_sub_pane_cp14_ParamLimits

0xdc20,	// (0x00028442) list_uniindi_pane_ParamLimits

0xdc2c,	// (0x0002844e) uniindi_top_pane_ParamLimits

0xdcc8,	// (0x000284ea) list_single_uniindi_pane_g1_ParamLimits

0xdcdb,	// (0x000284fd) list_single_uniindi_pane_t1_ParamLimits

0x7b7f,	// (0x000223a1) lc0_stat_clock_pane_ParamLimits

0x7b7f,	// (0x000223a1) lc0_stat_clock_pane

0xe806,	// (0x00029028) lc0_stat_indi_pane_g1_ParamLimits

0xe806,	// (0x00029028) lc0_stat_indi_pane_g1

0xe813,	// (0x00029035) lc0_stat_indi_pane_g2_ParamLimits

0xe813,	// (0x00029035) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x0002a657) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x0002a657) lc0_stat_indi_pane_g

0x7b8c,	// (0x000223ae) lc0_uni_indicator_pane_ParamLimits

0x7b8c,	// (0x000223ae) lc0_uni_indicator_pane

0xe820,	// (0x00029042) ls0_title_pane_g1_ParamLimits

0xe820,	// (0x00029042) ls0_title_pane_g1

0xe834,	// (0x00029056) ls0_title_pane_t1_ParamLimits

0xe834,	// (0x00029056) ls0_title_pane_t1

0x7b99,	// (0x000223bb) lc0_uni_indicator_pane_g1_ParamLimits

0x7b99,	// (0x000223bb) lc0_uni_indicator_pane_g1

0xe86a,	// (0x0002908c) lc0_stat_clock_pane_t1

0x7f86,	// (0x000227a8) main_ai5_pane

0xe878,	// (0x0002909a) ai5_sk_pane_ParamLimits

0xe878,	// (0x0002909a) ai5_sk_pane

0xe885,	// (0x000290a7) cell_ai5_widget_pane_ParamLimits

0xe885,	// (0x000290a7) cell_ai5_widget_pane

0xe94f,	// (0x00029171) aid_size_cell_widget_grid

0xe965,	// (0x00029187) bg_ai5_widget_pane_ParamLimits

0xe965,	// (0x00029187) bg_ai5_widget_pane

0xe9d9,	// (0x000291fb) cell_ai5_widget_pane_g2

0xe9e9,	// (0x0002920b) cell_ai5_widget_pane_g3

0xea00,	// (0x00029222) cell_ai5_widget_pane_g4

0xea0c,	// (0x0002922e) cell_ai5_widget_pane_g5

0xea18,	// (0x0002923a) cell_ai5_widget_pane_g6

0xea24,	// (0x00029246) cell_ai5_widget_pane_g7

0xea6c,	// (0x0002928e) cell_ai5_widget_pane_t1_ParamLimits

0xea6c,	// (0x0002928e) cell_ai5_widget_pane_t1

0xea89,	// (0x000292ab) cell_ai5_widget_pane_t2_ParamLimits

0xea89,	// (0x000292ab) cell_ai5_widget_pane_t2

0xeaa1,	// (0x000292c3) cell_ai5_widget_pane_t3_ParamLimits

0xeaa1,	// (0x000292c3) cell_ai5_widget_pane_t3

0xeab9,	// (0x000292db) cell_ai5_widget_pane_t4_ParamLimits

0xeab9,	// (0x000292db) cell_ai5_widget_pane_t4

0xead6,	// (0x000292f8) cell_ai5_widget_pane_t5_ParamLimits

0xead6,	// (0x000292f8) cell_ai5_widget_pane_t5

0xeaf5,	// (0x00029317) cell_ai5_widget_pane_t6_ParamLimits

0xeaf5,	// (0x00029317) cell_ai5_widget_pane_t6

0xeb07,	// (0x00029329) cell_ai5_widget_pane_t7_ParamLimits

0xeb07,	// (0x00029329) cell_ai5_widget_pane_t7

0xeb20,	// (0x00029342) cell_ai5_widget_pane_t8_ParamLimits

0xeb20,	// (0x00029342) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0002a671) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0002a671) cell_ai5_widget_pane_t

0xeb74,	// (0x00029396) grid_ai5_widget_pane

0x88d4,	// (0x000230f6) highlight_cell_ai5_widget_pane_ParamLimits

0x88d4,	// (0x000230f6) highlight_cell_ai5_widget_pane

0xeb8c,	// (0x000293ae) ai5_sk_left_pane

0xeb96,	// (0x000293b8) ai5_sk_middle_pane

0xeba0,	// (0x000293c2) ai5_sk_right_pane

0xebaa,	// (0x000293cc) bg_ai5_widget_pane_g1_ParamLimits

0xebaa,	// (0x000293cc) bg_ai5_widget_pane_g1

0xebb6,	// (0x000293d8) bg_ai5_widget_pane_g2_ParamLimits

0xebb6,	// (0x000293d8) bg_ai5_widget_pane_g2

0xebc2,	// (0x000293e4) bg_ai5_widget_pane_g3_ParamLimits

0xebc2,	// (0x000293e4) bg_ai5_widget_pane_g3

0xebce,	// (0x000293f0) bg_ai5_widget_pane_g4_ParamLimits

0xebce,	// (0x000293f0) bg_ai5_widget_pane_g4

0xebda,	// (0x000293fc) bg_ai5_widget_pane_g5_ParamLimits

0xebda,	// (0x000293fc) bg_ai5_widget_pane_g5

0xebe6,	// (0x00029408) bg_ai5_widget_pane_g6_ParamLimits

0xebe6,	// (0x00029408) bg_ai5_widget_pane_g6

0xebf2,	// (0x00029414) bg_ai5_widget_pane_g7_ParamLimits

0xebf2,	// (0x00029414) bg_ai5_widget_pane_g7

0xebfe,	// (0x00029420) bg_ai5_widget_pane_g8_ParamLimits

0xebfe,	// (0x00029420) bg_ai5_widget_pane_g8

0xec0a,	// (0x0002942c) bg_ai5_widget_pane_g9_ParamLimits

0xec0a,	// (0x0002942c) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x0002a686) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x0002a686) bg_ai5_widget_pane_g

0xec3c,	// (0x0002945e) cell_shortcut_ai5_widget_pane_ParamLimits

0xec3c,	// (0x0002945e) cell_shortcut_ai5_widget_pane

0x953c,	// (0x00023d5e) bg_cell_shortcut_ai5_widget_pane

0xec4d,	// (0x0002946f) cell_grid_ai5_widget_pane_g1

0x953c,	// (0x00023d5e) highlight_cell_shortcut_ai5_widget_pane

0x9d84,	// (0x000245a6) ai5_sk_left_pane_g1

0xec56,	// (0x00029478) ai5_sk_left_pane_g2

0xec5e,	// (0x00029480) ai5_sk_left_pane_g3

0xec66,	// (0x00029488) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x0002a699) ai5_sk_left_pane_g

0xec6e,	// (0x00029490) ai5_sk_left_pane_t1

0x9d7c,	// (0x0002459e) ai5_sk_right_pane_g1

0xec7c,	// (0x0002949e) ai5_sk_right_pane_g2

0xec84,	// (0x000294a6) ai5_sk_right_pane_g3

0xec8c,	// (0x000294ae) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0002a6a2) ai5_sk_right_pane_g

0xec94,	// (0x000294b6) ai5_sk_right_pane_t1

0x9d7c,	// (0x0002459e) ai5_sk_middle_pane_g1

0x9d84,	// (0x000245a6) ai5_sk_middle_pane_g2

0x9d9c,	// (0x000245be) ai5_sk_middle_pane_g3

0xec84,	// (0x000294a6) ai5_sk_middle_pane_g4

0xec5e,	// (0x00029480) ai5_sk_middle_pane_g5

0xeca2,	// (0x000294c4) ai5_sk_middle_pane_g6

0xecaa,	// (0x000294cc) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x0002a6ab) ai5_sk_middle_pane_g

0x98bc,	// (0x000240de) aid_touch_area_size_lc0_ParamLimits

0x98bc,	// (0x000240de) aid_touch_area_size_lc0

0x7251,	// (0x00021a73) cell_hwr_candidate_pane_t1_ParamLimits

0x98d8,	// (0x000240fa) aid_touch_navi_pane

0x9ba7,	// (0x000243c9) status_dt_navi_pane_ParamLimits

0x9ba7,	// (0x000243c9) status_dt_navi_pane

0x9bb4,	// (0x000243d6) status_dt_sta_pane_ParamLimits

0x9bb4,	// (0x000243d6) status_dt_sta_pane

0xecb2,	// (0x000294d4) dt_sta_controll_pane

0xecbf,	// (0x000294e1) dt_sta_indi_pane

0xecd0,	// (0x000294f2) dt_sta_title_pane

0x8303,	// (0x00022b25) bg_dt_sta_indi_pane_ParamLimits

0x8303,	// (0x00022b25) bg_dt_sta_indi_pane

0xece3,	// (0x00029505) dt_sta_battery_pane

0xeceb,	// (0x0002950d) dt_sta_indi_pane_g1

0xecf4,	// (0x00029516) dt_sta_indi_pane_g2

0xecfd,	// (0x0002951f) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x0002a6ba) dt_sta_indi_pane_g

0xed06,	// (0x00029528) dt_sta_signal_pane

0x88d4,	// (0x000230f6) bg_dt_sta_title_pane_ParamLimits

0x88d4,	// (0x000230f6) bg_dt_sta_title_pane

0xed0f,	// (0x00029531) dt_sta_title_pane_g1

0xed17,	// (0x00029539) dt_sta_title_pane_t1_ParamLimits

0xed17,	// (0x00029539) dt_sta_title_pane_t1

0x7f86,	// (0x000227a8) bg_dt_sta_control_pane

0xed2c,	// (0x0002954e) dt_sta_controll_pane_g1

0xed35,	// (0x00029557) bg_dt_sta_title_pane_g1

0xed3e,	// (0x00029560) bg_dt_sta_title_pane_g2

0xed47,	// (0x00029569) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0002a6c1) bg_dt_sta_title_pane_g

0xc330,	// (0x00026b52) bg_dt_sta_indi_pane_g1

0xed50,	// (0x00029572) dt_sta_signal_pane_g1

0xed58,	// (0x0002957a) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x0002a6c8) dt_sta_signal_pane_g

0xed60,	// (0x00029582) dt_sta_battery_pane_g1

0xed69,	// (0x0002958b) dt_sta_battery_pane_t1

0xc330,	// (0x00026b52) bg_dt_sta_control_pane_g1

0x9032,	// (0x00023854) fep_china_uni_eep_pane

0x903a,	// (0x0002385c) fep_china_uni_entry_pane_ParamLimits

0x904a,	// (0x0002386c) popup_fep_china_uni_window_g1_ParamLimits

0x905a,	// (0x0002387c) popup_fep_china_uni_window_g2_ParamLimits

0x905a,	// (0x0002387c) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00029f3f) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00029f3f) popup_fep_china_uni_window_g

0xed78,	// (0x0002959a) fep_china_uni_eep_pane_g1

0xed80,	// (0x000295a2) fep_china_uni_eep_pane_t1

0xe7e7,	// (0x00029009) aid_touch_area_size_smil_player

0x9a24,	// (0x00024246) lc0_clock_pane

0x9c03,	// (0x00024425) status_pane_g5_ParamLimits

0x9c03,	// (0x00024425) status_pane_g5

0x6767,	// (0x00020f89) popup_keymap_window

0x9bc9,	// (0x000243eb) status_icon_pane

0xe9e9,	// (0x0002920b) cell_ai5_widget_pane_g3_ParamLimits

0xea00,	// (0x00029222) cell_ai5_widget_pane_g4_ParamLimits

0xea0c,	// (0x0002922e) cell_ai5_widget_pane_g5_ParamLimits

0xea30,	// (0x00029252) cell_ai5_widget_pane_g8_ParamLimits

0xea30,	// (0x00029252) cell_ai5_widget_pane_g8

0xea44,	// (0x00029266) cell_ai5_widget_pane_g9_ParamLimits

0xea44,	// (0x00029266) cell_ai5_widget_pane_g9

0xea58,	// (0x0002927a) cell_ai5_widget_pane_g10_ParamLimits

0xea58,	// (0x0002927a) cell_ai5_widget_pane_g10

0xed8f,	// (0x000295b1) status_icon_pane_g1

0x7f86,	// (0x000227a8) bg_popup_sub_pane_cp13

0xed97,	// (0x000295b9) popup_keymap_window_t1

0x9801,	// (0x00024023) control_pane_g6_ParamLimits

0x9801,	// (0x00024023) control_pane_g6

0x980e,	// (0x00024030) control_pane_g7_ParamLimits

0x980e,	// (0x00024030) control_pane_g7

0x981b,	// (0x0002403d) control_pane_g8_ParamLimits

0x981b,	// (0x0002403d) control_pane_g8

0xecb2,	// (0x000294d4) dt_sta_controll_pane_ParamLimits

0xecbf,	// (0x000294e1) dt_sta_indi_pane_ParamLimits

0xecd0,	// (0x000294f2) dt_sta_title_pane_ParamLimits

0x880c,	// (0x0002302e) aid_size_touch_scroll_bar_cale

0x5e01,	// (0x00020623) popup_discreet_window_ParamLimits

0x5e01,	// (0x00020623) popup_discreet_window

0x5e7b,	// (0x0002069d) popup_sk_window

0xa3fa,	// (0x00024c1c) bg_popup_sub_pane_cp28_ParamLimits

0xa3fa,	// (0x00024c1c) bg_popup_sub_pane_cp28

0xeda5,	// (0x000295c7) popup_discreet_window_g1_ParamLimits

0xeda5,	// (0x000295c7) popup_discreet_window_g1

0xedc5,	// (0x000295e7) popup_discreet_window_t1_ParamLimits

0xedc5,	// (0x000295e7) popup_discreet_window_t1

0xede3,	// (0x00029605) popup_discreet_window_t2_ParamLimits

0xede3,	// (0x00029605) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x0002a6cd) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x0002a6cd) popup_discreet_window_t

0x7bae,	// (0x000223d0) popup_sk_window_g1

0x7bb8,	// (0x000223da) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x0002a6d4) popup_sk_window_g

0x7bc2,	// (0x000223e4) popup_sk_window_t1

0x7bd0,	// (0x000223f2) popup_sk_window_t1_copy1

0xe9d9,	// (0x000291fb) cell_ai5_widget_pane_g2_ParamLimits

0xeb32,	// (0x00029354) cell_ai5_widget_pane_t9_ParamLimits

0xeb32,	// (0x00029354) cell_ai5_widget_pane_t9

0x7f86,	// (0x000227a8) main_fep_fshwr2_pane

0x7bde,	// (0x00022400) aid_fshwr2_btn_pane

0x7bea,	// (0x0002240c) aid_fshwr2_syb_pane

0x7bf6,	// (0x00022418) aid_fshwr2_txt_pane

0x7c02,	// (0x00022424) fshwr2_func_candi_pane

0x7c17,	// (0x00022439) fshwr2_hwr_syb_pane

0x7c27,	// (0x00022449) fshwr2_icf_pane

0x7f86,	// (0x000227a8) fshwr2_icf_bg_pane

0x7c50,	// (0x00022472) fshwr2_icf_pane_t1_ParamLimits

0x7c50,	// (0x00022472) fshwr2_icf_pane_t1

0x8f24,	// (0x00023746) fshwr2_func_candi_pane_g1

0xee35,	// (0x00029657) fshwr2_func_candi_row_pane_ParamLimits

0xee35,	// (0x00029657) fshwr2_func_candi_row_pane

0x7c68,	// (0x0002248a) cell_fshwr2_syb_pane_ParamLimits

0x7c68,	// (0x0002248a) cell_fshwr2_syb_pane

0xc59e,	// (0x00026dc0) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) fshwr2_hwr_syb_pane_g1

0x7f86,	// (0x000227a8) bg_popup_call_pane_cp01

0x7c7e,	// (0x000224a0) fshwr2_func_candi_cell_pane_ParamLimits

0x7c7e,	// (0x000224a0) fshwr2_func_candi_cell_pane

0xaa76,	// (0x00025298) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xaa76,	// (0x00025298) fshwr2_func_candi_cell_bg_pane

0x7cb3,	// (0x000224d5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7cb3,	// (0x000224d5) fshwr2_func_candi_cell_pane_g1

0x7cd3,	// (0x000224f5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7cd3,	// (0x000224f5) fshwr2_func_candi_cell_pane_t1

0x7f86,	// (0x000227a8) bg_button_pane_cp08

0xb717,	// (0x00025f39) cell_fshwr2_syb_bg_pane

0x7ce6,	// (0x00022508) cell_fshwr2_syb_bg_pane_g1

0x7cee,	// (0x00022510) cell_fshwr2_syb_bg_pane_t1

0x88d4,	// (0x000230f6) main_tmo_pane

0xaf0f,	// (0x00025731) uni_indicator_pane_g1_ParamLimits

0xaf25,	// (0x00025747) uni_indicator_pane_g2_ParamLimits

0xaf3b,	// (0x0002575d) uni_indicator_pane_g3_ParamLimits

0xaf50,	// (0x00025772) uni_indicator_pane_g4_ParamLimits

0xaf50,	// (0x00025772) uni_indicator_pane_g4

0xaf64,	// (0x00025786) uni_indicator_pane_g5_ParamLimits

0xaf64,	// (0x00025786) uni_indicator_pane_g5

0xaf64,	// (0x00025786) uni_indicator_pane_g6_ParamLimits

0xaf64,	// (0x00025786) uni_indicator_pane_g6

0xf91a,	// (0x0002a13c) uni_indicator_pane_g_ParamLimits

0xd813,	// (0x00028035) popup_tmo_note_window_ParamLimits

0xd813,	// (0x00028035) popup_tmo_note_window

0x88d4,	// (0x000230f6) fshwr2_bg_pane

0x7cc4,	// (0x000224e6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7cc4,	// (0x000224e6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x0002a6d9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x0002a6d9) fshwr2_func_candi_cell_pane_g

0xc330,	// (0x00026b52) bg_popup_window_pane_cp01

0x7cfd,	// (0x0002251f) bg_popup_window_pane_g1_cp01

0xee45,	// (0x00029667) bg_popup_window_pane_cp22_ParamLimits

0xee45,	// (0x00029667) bg_popup_window_pane_cp22

0xee53,	// (0x00029675) listscroll_tmo_link_pane_ParamLimits

0xee53,	// (0x00029675) listscroll_tmo_link_pane

0xee93,	// (0x000296b5) popup_tmo_note_window_g1_ParamLimits

0xee93,	// (0x000296b5) popup_tmo_note_window_g1

0xeea0,	// (0x000296c2) tmo_note_info_pane_ParamLimits

0xeea0,	// (0x000296c2) tmo_note_info_pane

0xeeba,	// (0x000296dc) list_tmo_note_info_pane_g1_ParamLimits

0xeeba,	// (0x000296dc) list_tmo_note_info_pane_g1

0xeed1,	// (0x000296f3) list_tmo_note_info_pane_g2_ParamLimits

0xeed1,	// (0x000296f3) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x0002a6de) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x0002a6de) list_tmo_note_info_pane_g

0xeeed,	// (0x0002970f) list_tmo_note_info_text_pane_ParamLimits

0xeeed,	// (0x0002970f) list_tmo_note_info_text_pane

0xef70,	// (0x00029792) list_tmo_link_pane

0xef7d,	// (0x0002979f) scroll_pane_cp20

0xef8a,	// (0x000297ac) list_single_tmo_link_pane_ParamLimits

0xef8a,	// (0x000297ac) list_single_tmo_link_pane

0xef9a,	// (0x000297bc) list_single_tmo_link_pane_t1

0xefa8,	// (0x000297ca) list_tmo_note_info_text_pane_t1_ParamLimits

0xefa8,	// (0x000297ca) list_tmo_note_info_text_pane_t1

0x898e,	// (0x000231b0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x898e,	// (0x000231b0) aid_size_touch_scroll_bar_cp01

0x5018,	// (0x0001f83a) aid_size_touch_slider_marker

0x5e63,	// (0x00020685) popup_settings_window_ParamLimits

0x5e63,	// (0x00020685) popup_settings_window

0x51c6,	// (0x0001f9e8) popup_candi_list_indi_window

0x98d8,	// (0x000240fa) aid_touch_navi_pane_ParamLimits

0x73bc,	// (0x00021bde) rs_clock_indi_pane

0x73c5,	// (0x00021be7) sctrl_sk_bottom_pane_ParamLimits

0x73d6,	// (0x00021bf8) sctrl_sk_top_pane_ParamLimits

0x74bd,	// (0x00021cdf) popup_fep_tooltip_window

0xe94f,	// (0x00029171) aid_size_cell_widget_grid_ParamLimits

0xe9c4,	// (0x000291e6) cell_ai5_widget_pane_g1_ParamLimits

0xe9c4,	// (0x000291e6) cell_ai5_widget_pane_g1

0xea18,	// (0x0002923a) cell_ai5_widget_pane_g6_ParamLimits

0xea24,	// (0x00029246) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x0002a65c) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0002a65c) cell_ai5_widget_pane_g

0xeb56,	// (0x00029378) cell_ai5_widget_pane_t10_ParamLimits

0xeb56,	// (0x00029378) cell_ai5_widget_pane_t10

0xeb74,	// (0x00029396) grid_ai5_widget_pane_ParamLimits

0xec16,	// (0x00029438) cell_contacts_ai5_widget_pane_ParamLimits

0xec16,	// (0x00029438) cell_contacts_ai5_widget_pane

0xedf8,	// (0x0002961a) popup_discreet_window_t3_ParamLimits

0xedf8,	// (0x0002961a) popup_discreet_window_t3

0x7c3c,	// (0x0002245e) popup_fshwr2_char_preview_window_ParamLimits

0x7c3c,	// (0x0002245e) popup_fshwr2_char_preview_window

0xef0b,	// (0x0002972d) tmo_note_info_pane_t1

0xef20,	// (0x00029742) tmo_note_info_pane_t2

0xef37,	// (0x00029759) tmo_note_info_pane_t3

0xef4c,	// (0x0002976e) tmo_note_info_pane_t4

0xef5e,	// (0x00029780) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x0002a6e3) tmo_note_info_pane_t

0xef70,	// (0x00029792) list_tmo_link_pane_ParamLimits

0xef7d,	// (0x0002979f) scroll_pane_cp20_ParamLimits

0x7f86,	// (0x000227a8) bg_popup_fep_char_preview_window_cp01

0xefc1,	// (0x000297e3) popup_fshwr2_char_preview_window_t1

0xefcf,	// (0x000297f1) popup_candi_list_indi_window_g1

0xefd8,	// (0x000297fa) bg_cell_contacts_ai5_widget_pane

0xefe4,	// (0x00029806) cell_contacts_ai5_widget_pane_g1

0xeff9,	// (0x0002981b) cell_contacts_ai5_widget_pane_g2

0xf005,	// (0x00029827) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x0002a6ee) cell_contacts_ai5_widget_pane_g

0xf011,	// (0x00029833) cell_contacts_ai5_widget_pane_t1

0x88d4,	// (0x000230f6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf088,	// (0x000298aa) settings_container_pane

0x953c,	// (0x00023d5e) listscroll_set_pane_copy1

0xba06,	// (0x00026228) scroll_pane_cp121_copy1

0xf094,	// (0x000298b6) set_content_pane_copy1

0xf09c,	// (0x000298be) aid_height_set_list_copy1_ParamLimits

0xf09c,	// (0x000298be) aid_height_set_list_copy1

0xb157,	// (0x00025979) aid_size_parent_copy1_ParamLimits

0xb157,	// (0x00025979) aid_size_parent_copy1

0xf0a8,	// (0x000298ca) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0a8,	// (0x000298ca) button_value_adjust_pane_cp6_copy1

0x9876,	// (0x00024098) list_highlight_pane_cp2_copy1_ParamLimits

0x9876,	// (0x00024098) list_highlight_pane_cp2_copy1

0xf0bc,	// (0x000298de) list_set_pane_copy1_ParamLimits

0xf0bc,	// (0x000298de) list_set_pane_copy1

0xf023,	// (0x00029845) main_pane_set_t1_copy1_ParamLimits

0xf023,	// (0x00029845) main_pane_set_t1_copy1

0xf05d,	// (0x0002987f) main_pane_set_t2_copy1_ParamLimits

0xf05d,	// (0x0002987f) main_pane_set_t2_copy1

0xf169,	// (0x0002998b) main_pane_set_t3_copy1

0xf177,	// (0x00029999) main_pane_set_t4_copy1

0xf07c,	// (0x0002989e) set_content_pane_g1_copy1_ParamLimits

0xf07c,	// (0x0002989e) set_content_pane_g1_copy1

0xf185,	// (0x000299a7) setting_code_pane_copy1

0xf18d,	// (0x000299af) setting_slider_graphic_pane_copy1

0xf18d,	// (0x000299af) setting_slider_pane_copy1

0xf18d,	// (0x000299af) setting_text_pane_copy1

0xf18d,	// (0x000299af) setting_volume_pane_copy1

0xf185,	// (0x000299a7) settings_code_pane_cp2_copy1

0xf195,	// (0x000299b7) settings_code_pane_cp_copy1_ParamLimits

0xf195,	// (0x000299b7) settings_code_pane_cp_copy1

0x7d06,	// (0x00022528) volume_set_pane_copy1

0xf1a9,	// (0x000299cb) volume_set_pane_g10_copy1

0xf1b1,	// (0x000299d3) volume_set_pane_g1_copy1

0xf1b9,	// (0x000299db) volume_set_pane_g2_copy1

0xf1c1,	// (0x000299e3) volume_set_pane_g3_copy1

0xf1c9,	// (0x000299eb) volume_set_pane_g4_copy1

0xf1d1,	// (0x000299f3) volume_set_pane_g5_copy1

0xf1d9,	// (0x000299fb) volume_set_pane_g6_copy1

0xf1e1,	// (0x00029a03) volume_set_pane_g7_copy1

0xf1e9,	// (0x00029a0b) volume_set_pane_g8_copy1

0xf1f1,	// (0x00029a13) volume_set_pane_g9_copy1

0x807a,	// (0x0002289c) bg_set_opt_pane_cp_copy1_ParamLimits

0x807a,	// (0x0002289c) bg_set_opt_pane_cp_copy1

0x7d0e,	// (0x00022530) setting_slider_pane_t1_copy1_ParamLimits

0x7d0e,	// (0x00022530) setting_slider_pane_t1_copy1

0x7d2c,	// (0x0002254e) setting_slider_pane_t2_copy1_ParamLimits

0x7d2c,	// (0x0002254e) setting_slider_pane_t2_copy1

0x7d46,	// (0x00022568) setting_slider_pane_t3_copy1_ParamLimits

0x7d46,	// (0x00022568) setting_slider_pane_t3_copy1

0x7d5e,	// (0x00022580) slider_set_pane_copy1_ParamLimits

0x7d5e,	// (0x00022580) slider_set_pane_copy1

0x892f,	// (0x00023151) set_opt_bg_pane_g1_copy2

0x8937,	// (0x00023159) set_opt_bg_pane_g2_copy2

0xf1f9,	// (0x00029a1b) set_opt_bg_pane_g3_copy2

0x8947,	// (0x00023169) set_opt_bg_pane_g4_copy2

0x894f,	// (0x00023171) set_opt_bg_pane_g5_copy2

0x8957,	// (0x00023179) set_opt_bg_pane_g6_copy2

0xf203,	// (0x00029a25) set_opt_bg_pane_g7_copy2

0xf20b,	// (0x00029a2d) set_opt_bg_pane_g8_copy2

0xf215,	// (0x00029a37) set_opt_bg_pane_g9_copy2

0x7d74,	// (0x00022596) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d74,	// (0x00022596) aid_size_touch_slider_mark_copy1

0xf21f,	// (0x00029a41) slider_set_pane_g1_copy1

0x7d88,	// (0x000225aa) slider_set_pane_g2_copy1

0x6e7b,	// (0x0002169d) slider_set_pane_g3_copy1_ParamLimits

0x6e7b,	// (0x0002169d) slider_set_pane_g3_copy1

0x6e8f,	// (0x000216b1) slider_set_pane_g4_copy1_ParamLimits

0x6e8f,	// (0x000216b1) slider_set_pane_g4_copy1

0x6ea7,	// (0x000216c9) slider_set_pane_g5_copy1_ParamLimits

0x6ea7,	// (0x000216c9) slider_set_pane_g5_copy1

0x6e7b,	// (0x0002169d) slider_set_pane_g6_copy1_ParamLimits

0x6e7b,	// (0x0002169d) slider_set_pane_g6_copy1

0x7d90,	// (0x000225b2) slider_set_pane_g7_copy1_ParamLimits

0x7d90,	// (0x000225b2) slider_set_pane_g7_copy1

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp2_copy1

0xf228,	// (0x00029a4a) setting_slider_graphic_pane_g1_copy1

0xf231,	// (0x00029a53) setting_slider_graphic_pane_t1_copy1

0xf241,	// (0x00029a63) setting_slider_graphic_pane_t2_copy1

0xf251,	// (0x00029a73) slider_set_pane_cp_copy1

0xf261,	// (0x00029a83) input_focus_pane_cp1_copy1

0xf26a,	// (0x00029a8c) list_set_text_pane_copy1

0xf272,	// (0x00029a94) setting_text_pane_g1_copy1

0x5b75,	// (0x00020397) set_text_pane_t1_copy1

0xf261,	// (0x00029a83) input_focus_pane_cp2_copy1

0xf272,	// (0x00029a94) setting_code_pane_g1_copy1

0xf27b,	// (0x00029a9d) setting_code_pane_t1_copy1

0xf289,	// (0x00029aab) list_set_graphic_pane_copy1

0x7f9a,	// (0x000227bc) bg_set_opt_pane_cp4_copy1

0x9247,	// (0x00023a69) list_set_graphic_pane_g1_copy1_ParamLimits

0x9247,	// (0x00023a69) list_set_graphic_pane_g1_copy1

0xf29d,	// (0x00029abf) list_set_graphic_pane_g2_copy1

0x925f,	// (0x00023a81) list_set_graphic_pane_t1_copy1_ParamLimits

0x925f,	// (0x00023a81) list_set_graphic_pane_t1_copy1

0xc330,	// (0x00026b52) rs_clock_indi_pane_g1

0xf2a5,	// (0x00029ac7) rs_clock_indi_pane_t1

0xf2b3,	// (0x00029ad5) rs_indi_pane

0xf2bb,	// (0x00029add) rs_indi_pane_g1

0xf2c4,	// (0x00029ae6) rs_indi_pane_g2

0xf2cd,	// (0x00029aef) rs_indi_pane_g3

0x0002,

0x0203,	// (0x0001aa25) rs_indi_pane_g

0x953c,	// (0x00023d5e) bg_popup_preview_window_pane_cp03

0xf2d6,	// (0x00029af8) popup_fep_tooltip_window_t1

0xcfac,	// (0x000277ce) popup_note2_window_g2_ParamLimits

0xcfac,	// (0x000277ce) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0002a48e) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0002a48e) popup_note2_window_g

0xd4a8,	// (0x00027cca) bg_popup_sub_pane_cp11_ParamLimits

0xd4b5,	// (0x00027cd7) cell_ai3_links_pane_g1_ParamLimits

0xd4cc,	// (0x00027cee) cell_ai3_links_pane_t1

0x5b75,	// (0x00020397) set_text_pane_t1_copy1_ParamLimits

0x9459,	// (0x00023c7b) cell_graphic_popup_pane_cp2_ParamLimits

0x9459,	// (0x00023c7b) cell_graphic_popup_pane_cp2

0xf2e4,	// (0x00029b06) cell_graphic_popup_pane_g1_cp2

0x861f,	// (0x00022e41) cell_graphic_popup_pane_g2_cp2

0xf2ec,	// (0x00029b0e) cell_graphic_popup_pane_g3_cp2

0xf2f4,	// (0x00029b16) cell_graphic_popup_pane_t2_cp2

0x8630,	// (0x00022e52) grid_highlight_pane_cp3_cp2

0x8c6f,	// (0x00023491) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x88d4,	// (0x000230f6) main_tmo_pane_ParamLimits

0xd807,	// (0x00028029) popup_tmo_big_image_note_window

0xe9b3,	// (0x000291d5) cell_ai5_widget_list_pane

0xe9bb,	// (0x000291dd) cell_ai5_widget_lrg_icon_pane

0xef0b,	// (0x0002972d) tmo_note_info_pane_t1_ParamLimits

0xef20,	// (0x00029742) tmo_note_info_pane_t2_ParamLimits

0xef37,	// (0x00029759) tmo_note_info_pane_t3_ParamLimits

0xef4c,	// (0x0002976e) tmo_note_info_pane_t4_ParamLimits

0xef5e,	// (0x00029780) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x0002a6e3) tmo_note_info_pane_t_ParamLimits

0xf088,	// (0x000298aa) settings_container_pane_ParamLimits

0xf259,	// (0x00029a7b) indicator_popup_pane_cp5

0xf259,	// (0x00029a7b) indicator_popup_pane_cp6

0xf289,	// (0x00029aab) list_set_graphic_pane_copy1_ParamLimits

0x7f86,	// (0x000227a8) bg_popup_window_pane_cp23

0xf302,	// (0x00029b24) popup_tmo_big_image_note_window_g1

0xf30b,	// (0x00029b2d) popup_tmo_big_image_note_window_t1

0xf31b,	// (0x00029b3d) popup_tmo_big_image_note_window_t2

0xf32b,	// (0x00029b4d) popup_tmo_big_image_note_window_t3

0x0002,

0x020a,	// (0x0001aa2c) popup_tmo_big_image_note_window_t

0xc330,	// (0x00026b52) cell_ai5_widget_lrg_icon_pane_g1

0xf33b,	// (0x00029b5d) cell_ai5_widget_lrg_icon_pane_t1

0xf349,	// (0x00029b6b) cell_ai5_widget_list_row_pane_ParamLimits

0xf349,	// (0x00029b6b) cell_ai5_widget_list_row_pane

0xf360,	// (0x00029b82) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf360,	// (0x00029b82) cell_ai5_widget_list_row_pane_g1

0xf36d,	// (0x00029b8f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf36d,	// (0x00029b8f) cell_ai5_widget_list_row_pane_t1

0xf39b,	// (0x00029bbd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf39b,	// (0x00029bbd) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0211,	// (0x0001aa33) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0211,	// (0x0001aa33) cell_ai5_widget_list_row_pane_t

0x7f86,	// (0x000227a8) main_fep_vtchi_ss_pane

0x7dc2,	// (0x000225e4) popup_fep_char_pre_window

0x7dca,	// (0x000225ec) popup_fep_ituss_window

0x7deb,	// (0x0002260d) popup_fep_vkbss_window

0xf3c3,	// (0x00029be5) grid_vkbss_keypad_pane_ParamLimits

0xf3c3,	// (0x00029be5) grid_vkbss_keypad_pane

0xf3d3,	// (0x00029bf5) ituss_keypad_pane

0x7e16,	// (0x00022638) aid_vkbss_key_offset_ParamLimits

0x7e16,	// (0x00022638) aid_vkbss_key_offset

0x7e22,	// (0x00022644) cell_vkbss_key_pane_ParamLimits

0x7e22,	// (0x00022644) cell_vkbss_key_pane

0x9bdd,	// (0x000243ff) bg_cell_vkbss_key_g1_ParamLimits

0x9bdd,	// (0x000243ff) bg_cell_vkbss_key_g1

0xf3e2,	// (0x00029c04) cell_vkbss_key_3p_pane_ParamLimits

0xf3e2,	// (0x00029c04) cell_vkbss_key_3p_pane

0xf3fc,	// (0x00029c1e) cell_vkbss_key_g1_ParamLimits

0xf3fc,	// (0x00029c1e) cell_vkbss_key_g1

0xf416,	// (0x00029c38) cell_vkbss_key_t1_ParamLimits

0xf416,	// (0x00029c38) cell_vkbss_key_t1

0x7e38,	// (0x0002265a) cell_ituss_key_pane_ParamLimits

0x7e38,	// (0x0002265a) cell_ituss_key_pane

0xf441,	// (0x00029c63) bg_cell_ituss_key_g1_ParamLimits

0xf441,	// (0x00029c63) bg_cell_ituss_key_g1

0xf44d,	// (0x00029c6f) cell_ituss_key_pane_g1_ParamLimits

0xf44d,	// (0x00029c6f) cell_ituss_key_pane_g1

0x7e49,	// (0x0002266b) cell_ituss_key_pane_g2_ParamLimits

0x7e49,	// (0x0002266b) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0002a6f5) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0002a6f5) cell_ituss_key_pane_g

0x7e75,	// (0x00022697) cell_ituss_key_t1_ParamLimits

0x7e75,	// (0x00022697) cell_ituss_key_t1

0x7eaf,	// (0x000226d1) cell_ituss_key_t2_ParamLimits

0x7eaf,	// (0x000226d1) cell_ituss_key_t2

0x7ee0,	// (0x00022702) cell_ituss_key_t3_ParamLimits

0x7ee0,	// (0x00022702) cell_ituss_key_t3

0x7eaf,	// (0x000226d1) cell_ituss_key_t4_ParamLimits

0x7eaf,	// (0x000226d1) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0002a6fc) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0002a6fc) cell_ituss_key_t

0xf473,	// (0x00029c95) cell_vkbss_key_3p_pane_g1

0xf47b,	// (0x00029c9d) cell_vkbss_key_3p_pane_g2

0xf483,	// (0x00029ca5) cell_vkbss_key_3p_pane_g3

0x0002,

0x022a,	// (0x0001aa4c) cell_vkbss_key_3p_pane_g

0x7f86,	// (0x000227a8) bg_popup_fep_char_preview_window_cp02

0x7f23,	// (0x00022745) popup_fep_char_pre_window_t1

0xe945,	// (0x00029167) main_ai5_sk_pane

0xefd8,	// (0x000297fa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefe4,	// (0x00029806) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeff9,	// (0x0002981b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf005,	// (0x00029827) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x0002a6ee) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf011,	// (0x00029833) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x88d4,	// (0x000230f6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48b,	// (0x00029cad) main_ai5_sk_pane_g1

0xa238,	// (0x00024a5a) popup_query_code_window_g1

0x7de0,	// (0x00022602) popup_fep_vkb_icf_pane

0x7df4,	// (0x00022616) popup_fep_vtchi_icf_pane

0xf494,	// (0x00029cb6) bg_icf_pane

0xf4a0,	// (0x00029cc2) list_vkb_icf_pane

0x9876,	// (0x00024098) bg_icf_pane_cp01

0xf4ac,	// (0x00029cce) vtchi_icf_list_pane

0xf4bd,	// (0x00029cdf) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00029cdf) list_vkb_icf_pane_t1

0xf4d5,	// (0x00029cf7) vtchi_icf_list_pane_t1_ParamLimits

0xf4d5,	// (0x00029cf7) vtchi_icf_list_pane_t1

0x7dca,	// (0x000225ec) popup_fep_ituss_window_ParamLimits

0x7df4,	// (0x00022616) popup_fep_vtchi_icf_pane_ParamLimits

0xf3d3,	// (0x00029bf5) ituss_keypad_pane_ParamLimits

0x7e0a,	// (0x0002262c) ituss_sks_pane

0xf494,	// (0x00029cb6) bg_icf_pane_ParamLimits

0x7da6,	// (0x000225c8) icf_edit_indi_pane_ParamLimits

0x7da6,	// (0x000225c8) icf_edit_indi_pane

0xf4a0,	// (0x00029cc2) list_vkb_icf_pane_ParamLimits

0x9876,	// (0x00024098) bg_icf_pane_cp01_ParamLimits

0x7db5,	// (0x000225d7) icf_edit_indi_pane_cp01_ParamLimits

0x7db5,	// (0x000225d7) icf_edit_indi_pane_cp01

0xf4b4,	// (0x00029cd6) vtchi_query_pane

0xc59e,	// (0x00026dc0) icf_edit_indi_pane_g1_ParamLimits

0xc59e,	// (0x00026dc0) icf_edit_indi_pane_g1

0x7f45,	// (0x00022767) icf_edit_indi_pane_g2_ParamLimits

0x7f45,	// (0x00022767) icf_edit_indi_pane_g2

0x0001,

0xfeea,	// (0x0002a70c) icf_edit_indi_pane_g_ParamLimits

0xfeea,	// (0x0002a70c) icf_edit_indi_pane_g

0x7f54,	// (0x00022776) icf_edit_indi_pane_t1

0xf4f7,	// (0x00029d19) bg_input_focus_pane_cp042

0x8803,	// (0x00023025) vtchi_button_pane

0xf500,	// (0x00029d22) vtchi_query_pane_t1

0xf50e,	// (0x00029d30) vtchi_query_pane_t2

0xf51c,	// (0x00029d3e) vtchi_query_pane_t3

0x0002,

0x0231,	// (0x0001aa53) vtchi_query_pane_t

0x7f86,	// (0x000227a8) bg_button_pane_cp13

0xf52a,	// (0x00029d4c) vtchi_button_pane_g1

0x7f32,	// (0x00022754) ituss_sks_pane_g1

0x7f3d,	// (0x0002275f) ituss_sks_pane_g2

0x0001,

0xfee5,	// (0x0002a707) ituss_sks_pane_g

0xf532,	// (0x00029d54) ituss_sks_pane_t1

0xf540,	// (0x00029d62) ituss_sks_pane_t2

0x0001,

0x023d,	// (0x0001aa5f) ituss_sks_pane_t

0xbd7a,	// (0x0002659c) indicator_nsta_pane_cp_g1

0xbd83,	// (0x000265a5) indicator_nsta_pane_cp_g2

0xbd8b,	// (0x000265ad) indicator_nsta_pane_cp_g3

0xbd93,	// (0x000265b5) indicator_nsta_pane_cp_g4

0xbd9b,	// (0x000265bd) indicator_nsta_pane_cp_g5

0xbd9b,	// (0x000265bd) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x0002a2d8) indicator_nsta_pane_cp_g

0xe4ed,	// (0x00028d0f) cell_graphic2_pane_t2_ParamLimits

0xe4ed,	// (0x00028d0f) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x0002a5e5) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x0002a5e5) cell_graphic2_pane_t

0xe51a,	// (0x00028d3c) cell_graphic2_control_pane_t1

0x8fe2,	// (0x00023804) signal_pane_g3_ParamLimits

0x8fe2,	// (0x00023804) signal_pane_g3

0x8ff4,	// (0x00023816) signal_pane_g4_ParamLimits

0x8ff4,	// (0x00023816) signal_pane_g4

0xf3ad,	// (0x00029bcf) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3ad,	// (0x00029bcf) cell_ai5_widget_list_row_pane_t3

0xf461,	// (0x00029c83) cell_ituss_key_pane_t1_ParamLimits

0xf461,	// (0x00029c83) cell_ituss_key_pane_t1

0x9e76,	// (0x00024698) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e76,	// (0x00024698) form_field_data_wide_pane_vc_t2

0x9e8a,	// (0x000246ac) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e8a,	// (0x000246ac) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0002a024) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0002a024) form_field_data_wide_pane_vc_t

0xba46,	// (0x00026268) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba46,	// (0x00026268) form_field_slider_wide_pane_vc_t3

0xbb20,	// (0x00026342) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb20,	// (0x00026342) form_field_popup_wide_pane_vc_t2

0xbb37,	// (0x00026359) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb37,	// (0x00026359) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x0002a2c7) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x0002a2c7) form_field_popup_wide_pane_vc_t

0x7bde,	// (0x00022400) aid_fshwr2_btn_pane_ParamLimits

0x7bea,	// (0x0002240c) aid_fshwr2_syb_pane_ParamLimits

0x7bf6,	// (0x00022418) aid_fshwr2_txt_pane_ParamLimits

0x88d4,	// (0x000230f6) fshwr2_bg_pane_ParamLimits

0x7c02,	// (0x00022424) fshwr2_func_candi_pane_ParamLimits

0x7c17,	// (0x00022439) fshwr2_hwr_syb_pane_ParamLimits

0x7c27,	// (0x00022449) fshwr2_icf_pane_ParamLimits

0x5750,	// (0x0001ff72) list_double_graphic_pane_vc_g4_ParamLimits

0x5750,	// (0x0001ff72) list_double_graphic_pane_vc_g4

0x7e69,	// (0x0002268b) cell_ituss_key_pane_g3_ParamLimits

0x7e69,	// (0x0002268b) cell_ituss_key_pane_g3

0x7f11,	// (0x00022733) cell_ituss_key_t5_ParamLimits

0x7f11,	// (0x00022733) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
