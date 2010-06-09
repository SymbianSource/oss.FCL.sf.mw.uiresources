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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00001ea4 };

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
0x95c4,	// (0x0000b468) Screen

0x95d0,	// (0x0000b474) application_window_ParamLimits

0x95d0,	// (0x0000b474) application_window

0xe770,	// (0x00010614) screen_g1

0x9608,	// (0x0000b4ac) area_bottom_pane_ParamLimits

0x9608,	// (0x0000b4ac) area_bottom_pane

0xe79a,	// (0x0001063e) area_top_pane_ParamLimits

0xe79a,	// (0x0001063e) area_top_pane

0xe82e,	// (0x000106d2) main_pane_ParamLimits

0xe82e,	// (0x000106d2) main_pane

0xe8e9,	// (0x0001078d) misc_graphics

0xb39b,	// (0x0000d23f) battery_pane_ParamLimits

0xb39b,	// (0x0000d23f) battery_pane

0x2188,	// (0x0000402c) bg_status_flat_pane_g8

0x2190,	// (0x00004034) bg_status_flat_pane_g9

0x1309,	// (0x000031ad) context_pane_ParamLimits

0x1309,	// (0x000031ad) context_pane

0xb506,	// (0x0000d3aa) navi_pane_ParamLimits

0xb506,	// (0x0000d3aa) navi_pane

0xb584,	// (0x0000d428) signal_pane_ParamLimits

0xb584,	// (0x0000d428) signal_pane

0x0008,

0xf85e,	// (0x00011702) bg_status_flat_pane_g

0xb614,	// (0x0000d4b8) status_pane_g1_ParamLimits

0xb614,	// (0x0000d4b8) status_pane_g1

0xb62a,	// (0x0000d4ce) status_pane_g2_ParamLimits

0xb62a,	// (0x0000d4ce) status_pane_g2

0x1530,	// (0x000033d4) status_pane_g3_ParamLimits

0x1530,	// (0x000033d4) status_pane_g3

0x0004,

0xf791,	// (0x00011635) status_pane_g_ParamLimits

0xf791,	// (0x00011635) status_pane_g

0xb636,	// (0x0000d4da) title_pane_ParamLimits

0xb636,	// (0x0000d4da) title_pane

0xb699,	// (0x0000d53d) uni_indicator_pane_ParamLimits

0xb699,	// (0x0000d53d) uni_indicator_pane

0x0b99,	// (0x00002a3d) bg_list_pane_ParamLimits

0x0b99,	// (0x00002a3d) bg_list_pane

0xab4f,	// (0x0000c9f3) find_pane

0xab57,	// (0x0000c9fb) listscroll_app_pane_ParamLimits

0xab57,	// (0x0000c9fb) listscroll_app_pane

0x0bd2,	// (0x00002a76) listscroll_form_pane

0xab6b,	// (0x0000ca0f) listscroll_gen_pane_ParamLimits

0xab6b,	// (0x0000ca0f) listscroll_gen_pane

0x0bee,	// (0x00002a92) listscroll_set_pane

0x2f30,	// (0x00004dd4) main_idle_act_pane

0x067a,	// (0x0000251e) main_idle_trad_pane

0x067a,	// (0x0000251e) main_list_empty_pane

0x0c08,	// (0x00002aac) main_midp_pane

0x0c14,	// (0x00002ab8) main_pane_g1_ParamLimits

0x0c14,	// (0x00002ab8) main_pane_g1

0xab7f,	// (0x0000ca23) popup_ai_message_window_ParamLimits

0xab7f,	// (0x0000ca23) popup_ai_message_window

0xac30,	// (0x0000cad4) popup_fep_china_uni_window_ParamLimits

0xac30,	// (0x0000cad4) popup_fep_china_uni_window

0xac8a,	// (0x0000cb2e) popup_fep_japan_candidate_window_ParamLimits

0xac8a,	// (0x0000cb2e) popup_fep_japan_candidate_window

0xaca8,	// (0x0000cb4c) popup_fep_japan_predictive_window_ParamLimits

0xaca8,	// (0x0000cb4c) popup_fep_japan_predictive_window

0xacba,	// (0x0000cb5e) popup_find_window

0xacd7,	// (0x0000cb7b) popup_grid_graphic_window_ParamLimits

0xacd7,	// (0x0000cb7b) popup_grid_graphic_window

0xad75,	// (0x0000cc19) popup_large_graphic_colour_window

0xad9b,	// (0x0000cc3f) popup_menu_window_ParamLimits

0xad9b,	// (0x0000cc3f) popup_menu_window

0xaf6d,	// (0x0000ce11) popup_note_image_window

0xaf33,	// (0x0000cdd7) popup_note_wait_window_ParamLimits

0xaf33,	// (0x0000cdd7) popup_note_wait_window

0xaf85,	// (0x0000ce29) popup_note_window_ParamLimits

0xaf85,	// (0x0000ce29) popup_note_window

0xb034,	// (0x0000ced8) popup_query_code_window_ParamLimits

0xb034,	// (0x0000ced8) popup_query_code_window

0xb06e,	// (0x0000cf12) popup_query_data_code_window_ParamLimits

0xb06e,	// (0x0000cf12) popup_query_data_code_window

0xb08b,	// (0x0000cf2f) popup_query_data_window_ParamLimits

0xb08b,	// (0x0000cf2f) popup_query_data_window

0xb10d,	// (0x0000cfb1) popup_query_sat_info_window_ParamLimits

0xb10d,	// (0x0000cfb1) popup_query_sat_info_window

0xb1a4,	// (0x0000d048) popup_snote_single_graphic_window_ParamLimits

0xb1a4,	// (0x0000d048) popup_snote_single_graphic_window

0xb1a4,	// (0x0000d048) popup_snote_single_text_window_ParamLimits

0xb1a4,	// (0x0000d048) popup_snote_single_text_window

0x1080,	// (0x00002f24) popup_sub_window_general

0xb301,	// (0x0000d1a5) popup_window_general_ParamLimits

0xb301,	// (0x0000d1a5) popup_window_general

0x11c5,	// (0x00003069) power_save_pane

0xa9ad,	// (0x0000c851) control_pane_g1_ParamLimits

0xa9ad,	// (0x0000c851) control_pane_g1

0xa9d6,	// (0x0000c87a) control_pane_g2_ParamLimits

0xa9d6,	// (0x0000c87a) control_pane_g2

0x0a34,	// (0x000028d8) control_pane_g3_ParamLimits

0x0a34,	// (0x000028d8) control_pane_g3

0x0007,

0xf779,	// (0x0001161d) control_pane_g_ParamLimits

0xf779,	// (0x0001161d) control_pane_g

0xaa3e,	// (0x0000c8e2) control_pane_t1_ParamLimits

0xaa3e,	// (0x0000c8e2) control_pane_t1

0xaaa4,	// (0x0000c948) control_pane_t2_ParamLimits

0xaaa4,	// (0x0000c948) control_pane_t2

0x0002,

0xf78a,	// (0x0001162e) control_pane_t_ParamLimits

0xf78a,	// (0x0001162e) control_pane_t

0xa906,	// (0x0000c7aa) navi_navi_volume_pane_cp1

0xa90e,	// (0x0000c7b2) status_small_icon_pane

0x091b,	// (0x000027bf) status_small_pane_g1_ParamLimits

0x091b,	// (0x000027bf) status_small_pane_g1

0xa916,	// (0x0000c7ba) status_small_pane_g2_ParamLimits

0xa916,	// (0x0000c7ba) status_small_pane_g2

0xa922,	// (0x0000c7c6) status_small_pane_g3_ParamLimits

0xa922,	// (0x0000c7c6) status_small_pane_g3

0xa92e,	// (0x0000c7d2) status_small_pane_g4_ParamLimits

0xa92e,	// (0x0000c7d2) status_small_pane_g4

0xa93a,	// (0x0000c7de) status_small_pane_g5_ParamLimits

0xa93a,	// (0x0000c7de) status_small_pane_g5

0xa948,	// (0x0000c7ec) status_small_pane_g6_ParamLimits

0xa948,	// (0x0000c7ec) status_small_pane_g6

0x0007,

0xf768,	// (0x0001160c) status_small_pane_g_ParamLimits

0xf768,	// (0x0001160c) status_small_pane_g

0xa977,	// (0x0000c81b) status_small_pane_t1

0xa999,	// (0x0000c83d) status_small_wait_pane_ParamLimits

0xa999,	// (0x0000c83d) status_small_wait_pane

0xa5e2,	// (0x0000c486) aid_levels_signal_ParamLimits

0xa5e2,	// (0x0000c486) aid_levels_signal

0xa5fa,	// (0x0000c49e) signal_pane_g1_ParamLimits

0xa5fa,	// (0x0000c49e) signal_pane_g1

0xa615,	// (0x0000c4b9) signal_pane_g2_ParamLimits

0xa615,	// (0x0000c4b9) signal_pane_g2

0x0003,

0xf6f9,	// (0x0001159d) signal_pane_g_ParamLimits

0xf6f9,	// (0x0001159d) signal_pane_g

0xf4d5,	// (0x00011379) context_pane_g1

0x9806,	// (0x0000b6aa) title_pane_g1

0x983d,	// (0x0000b6e1) title_pane_t1

0xe91f,	// (0x000107c3) title_pane_t2

0xe945,	// (0x000107e9) title_pane_t3

0x0002,

0xf557,	// (0x000113fb) title_pane_t

0xb6c1,	// (0x0000d565) aid_levels_battery_ParamLimits

0xb6c1,	// (0x0000d565) aid_levels_battery

0xb6dd,	// (0x0000d581) battery_pane_g1_ParamLimits

0xb6dd,	// (0x0000d581) battery_pane_g1

0xb6fa,	// (0x0000d59e) battery_pane_g2_ParamLimits

0xb6fa,	// (0x0000d59e) battery_pane_g2

0x0001,

0xf79c,	// (0x00011640) battery_pane_g_ParamLimits

0xf79c,	// (0x00011640) battery_pane_g

0xbd87,	// (0x0000dc2b) uni_indicator_pane_g1

0xbd9d,	// (0x0000dc41) uni_indicator_pane_g2

0xbdb3,	// (0x0000dc57) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x000117aa) uni_indicator_pane_g

0x04ec,	// (0x00002390) navi_icon_pane_ParamLimits

0x04ec,	// (0x00002390) navi_icon_pane

0x0436,	// (0x000022da) navi_midp_pane

0x0508,	// (0x000023ac) navi_navi_pane

0x0512,	// (0x000023b6) navi_text_pane_ParamLimits

0x0512,	// (0x000023b6) navi_text_pane

0xe770,	// (0x00010614) status_small_wait_pane_g1

0xebb0,	// (0x00010a54) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x000117a5) status_small_wait_pane_g

0xbce0,	// (0x0000db84) navi_navi_icon_text_pane

0x2945,	// (0x000047e9) navi_navi_pane_g1_ParamLimits

0x2945,	// (0x000047e9) navi_navi_pane_g1

0x2957,	// (0x000047fb) navi_navi_pane_g2_ParamLimits

0x2957,	// (0x000047fb) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00011773) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00011773) navi_navi_pane_g

0x2969,	// (0x0000480d) navi_navi_tabs_pane

0x2972,	// (0x00004816) navi_navi_text_pane

0xbce0,	// (0x0000db84) navi_navi_volume_pane

0x2919,	// (0x000047bd) navi_text_pane_t1

0x290d,	// (0x000047b1) navi_icon_pane_g1

0x2860,	// (0x00004704) navi_navi_text_pane_t1

0xbccc,	// (0x0000db70) navi_navi_volume_pane_g1

0x2857,	// (0x000046fb) volume_small_pane

0x27b5,	// (0x00004659) navi_navi_icon_text_pane_g1

0xbc30,	// (0x0000dad4) navi_navi_icon_text_pane_t1

0x0508,	// (0x000023ac) navi_tabs_2_long_pane

0x0508,	// (0x000023ac) navi_tabs_2_pane

0x0508,	// (0x000023ac) navi_tabs_3_long_pane

0x0508,	// (0x000023ac) navi_tabs_3_pane

0x0508,	// (0x000023ac) navi_tabs_4_pane

0x2714,	// (0x000045b8) tabs_2_active_pane_ParamLimits

0x2714,	// (0x000045b8) tabs_2_active_pane

0x2724,	// (0x000045c8) tabs_2_passive_pane_ParamLimits

0x2724,	// (0x000045c8) tabs_2_passive_pane

0x26e2,	// (0x00004586) tabs_3_active_pane_ParamLimits

0x26e2,	// (0x00004586) tabs_3_active_pane

0x26f2,	// (0x00004596) tabs_3_passive_pane_ParamLimits

0x26f2,	// (0x00004596) tabs_3_passive_pane

0x2703,	// (0x000045a7) tabs_3_passive_pane_cp_ParamLimits

0x2703,	// (0x000045a7) tabs_3_passive_pane_cp

0x269e,	// (0x00004542) tabs_4_active_pane_ParamLimits

0x269e,	// (0x00004542) tabs_4_active_pane

0x26af,	// (0x00004553) tabs_4_passive_pane_ParamLimits

0x26af,	// (0x00004553) tabs_4_passive_pane

0x26c0,	// (0x00004564) tabs_4_passive_pane_cp_ParamLimits

0x26c0,	// (0x00004564) tabs_4_passive_pane_cp

0x26d1,	// (0x00004575) tabs_4_passive_pane_cp2_ParamLimits

0x26d1,	// (0x00004575) tabs_4_passive_pane_cp2

0x267a,	// (0x0000451e) tabs_2_long_active_pane_ParamLimits

0x267a,	// (0x0000451e) tabs_2_long_active_pane

0x268c,	// (0x00004530) tabs_2_long_passive_pane_ParamLimits

0x268c,	// (0x00004530) tabs_2_long_passive_pane

0x2635,	// (0x000044d9) tabs_3_long_active_pane_ParamLimits

0x2635,	// (0x000044d9) tabs_3_long_active_pane

0x264e,	// (0x000044f2) tabs_3_long_passive_pane_ParamLimits

0x264e,	// (0x000044f2) tabs_3_long_passive_pane

0x2661,	// (0x00004505) tabs_3_long_passive_pane_cp_ParamLimits

0x2661,	// (0x00004505) tabs_3_long_passive_pane_cp

0x25db,	// (0x0000447f) volume_small_pane_g1

0x25e4,	// (0x00004488) volume_small_pane_g2

0x25ed,	// (0x00004491) volume_small_pane_g3

0x25f6,	// (0x0000449a) volume_small_pane_g4

0x25ff,	// (0x000044a3) volume_small_pane_g5

0x2608,	// (0x000044ac) volume_small_pane_g6

0x2611,	// (0x000044b5) volume_small_pane_g7

0x261a,	// (0x000044be) volume_small_pane_g8

0x2623,	// (0x000044c7) volume_small_pane_g9

0x262c,	// (0x000044d0) volume_small_pane_g10

0x0009,

0xf89b,	// (0x0001173f) volume_small_pane_g

0xe957,	// (0x000107fb) bg_active_tab_pane_cp2_ParamLimits

0xe957,	// (0x000107fb) bg_active_tab_pane_cp2

0x98c9,	// (0x0000b76d) tabs_3_active_pane_g1

0x98d1,	// (0x0000b775) tabs_3_active_pane_t1

0xe957,	// (0x000107fb) bg_passive_tab_pane_cp2_ParamLimits

0xe957,	// (0x000107fb) bg_passive_tab_pane_cp2

0x98c9,	// (0x0000b76d) tabs_3_passive_pane_g1

0x98d1,	// (0x0000b775) tabs_3_passive_pane_t1

0xe957,	// (0x000107fb) bg_active_tab_pane_cp3_ParamLimits

0xe957,	// (0x000107fb) bg_active_tab_pane_cp3

0x98e3,	// (0x0000b787) tabs_4_active_pane_g1

0x98eb,	// (0x0000b78f) tabs_4_active_pane_t1

0xe957,	// (0x000107fb) bg_passive_tab_pane_cp3_ParamLimits

0xe957,	// (0x000107fb) bg_passive_tab_pane_cp3

0x98e3,	// (0x0000b787) tabs_4_1_passive_pane_g1

0x98eb,	// (0x0000b78f) tabs_4_1_passive_pane_t1

0x0c08,	// (0x00002aac) list_highlight_pane_cp2

0xbf87,	// (0x0000de2b) list_set_pane_ParamLimits

0xbf87,	// (0x0000de2b) list_set_pane

0xc021,	// (0x0000dec5) main_pane_set_t1_ParamLimits

0xc021,	// (0x0000dec5) main_pane_set_t1

0xc041,	// (0x0000dee5) main_pane_set_t2_ParamLimits

0xc041,	// (0x0000dee5) main_pane_set_t2

0xc055,	// (0x0000def9) main_pane_set_t3_ParamLimits

0xc055,	// (0x0000def9) main_pane_set_t3

0xc067,	// (0x0000df0b) main_pane_set_t4_ParamLimits

0xc067,	// (0x0000df0b) main_pane_set_t4

0x0003,

0xf96b,	// (0x0001180f) main_pane_set_t_ParamLimits

0xf96b,	// (0x0001180f) main_pane_set_t

0xc079,	// (0x0000df1d) setting_code_pane

0xc083,	// (0x0000df27) setting_slider_graphic_pane

0xc083,	// (0x0000df27) setting_slider_pane

0xc083,	// (0x0000df27) setting_text_pane

0xc083,	// (0x0000df27) setting_volume_pane

0x98fd,	// (0x0000b7a1) volume_set_pane

0xe965,	// (0x00010809) bg_set_opt_pane_cp

0x9905,	// (0x0000b7a9) setting_slider_pane_t1

0x991e,	// (0x0000b7c2) setting_slider_pane_t2

0x9938,	// (0x0000b7dc) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011402) setting_slider_pane_t

0x9950,	// (0x0000b7f4) slider_set_pane

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp2

0xe973,	// (0x00010817) setting_slider_graphic_pane_g1

0x9966,	// (0x0000b80a) setting_slider_graphic_pane_t1

0x9976,	// (0x0000b81a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00011409) setting_slider_graphic_pane_t

0x9986,	// (0x0000b82a) slider_set_pane_cp

0xe8e9,	// (0x0001078d) input_focus_pane_cp1

0x2f17,	// (0x00004dbb) list_set_text_pane

0xe770,	// (0x00010614) setting_text_pane_g1

0xe8e9,	// (0x0001078d) input_focus_pane_cp2

0xe770,	// (0x00010614) setting_code_pane_g1

0xe97c,	// (0x00010820) setting_code_pane_t1

0xe98a,	// (0x0001082e) set_text_pane_t1_ParamLimits

0xe98a,	// (0x0001082e) set_text_pane_t1

0xee61,	// (0x00010d05) set_opt_bg_pane_g1

0xee69,	// (0x00010d0d) set_opt_bg_pane_g2

0xbf3c,	// (0x0000dde0) set_opt_bg_pane_g3

0xee79,	// (0x00010d1d) set_opt_bg_pane_g4

0xee81,	// (0x00010d25) set_opt_bg_pane_g5

0xee89,	// (0x00010d2d) set_opt_bg_pane_g6

0xbf46,	// (0x0000ddea) set_opt_bg_pane_g7

0xbf4e,	// (0x0000ddf2) set_opt_bg_pane_g8

0xbf58,	// (0x0000ddfc) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x000117fc) set_opt_bg_pane_g

0xbed7,	// (0x0000dd7b) slider_set_pane_g1

0x2e8d,	// (0x00004d31) slider_set_pane_g2

0x0006,

0xf949,	// (0x000117ed) slider_set_pane_g

0xbdea,	// (0x0000dc8e) volume_set_pane_g1

0xbdf2,	// (0x0000dc96) volume_set_pane_g2

0xbdfa,	// (0x0000dc9e) volume_set_pane_g3

0xbe02,	// (0x0000dca6) volume_set_pane_g4

0xbe0a,	// (0x0000dcae) volume_set_pane_g5

0xbe12,	// (0x0000dcb6) volume_set_pane_g6

0xbe1a,	// (0x0000dcbe) volume_set_pane_g7

0xbe22,	// (0x0000dcc6) volume_set_pane_g8

0xbe2a,	// (0x0000dcce) volume_set_pane_g9

0xbe32,	// (0x0000dcd6) volume_set_pane_g10

0x0009,

0xf921,	// (0x000117c5) volume_set_pane_g

0x998e,	// (0x0000b832) indicator_pane_ParamLimits

0x998e,	// (0x0000b832) indicator_pane

0x99b6,	// (0x0000b85a) main_idle_pane_g2_ParamLimits

0x99b6,	// (0x0000b85a) main_idle_pane_g2

0x99ee,	// (0x0000b892) main_pane_idle_g1_ParamLimits

0x99ee,	// (0x0000b892) main_pane_idle_g1

0xe9a4,	// (0x00010848) popup_clock_digital_analogue_window_ParamLimits

0xe9a4,	// (0x00010848) popup_clock_digital_analogue_window

0x9a15,	// (0x0000b8b9) soft_indicator_pane_ParamLimits

0x9a15,	// (0x0000b8b9) soft_indicator_pane

0x9a39,	// (0x0000b8dd) wallpaper_pane_ParamLimits

0x9a39,	// (0x0000b8dd) wallpaper_pane

0xe770,	// (0x00010614) wallpaper_pane_g1

0x9a4b,	// (0x0000b8ef) indicator_pane_g1_ParamLimits

0x9a4b,	// (0x0000b8ef) indicator_pane_g1

0x3485,	// (0x00005329) navi_navi_icon_text_pane_srt_g1

0xe9d2,	// (0x00010876) soft_indicator_pane_t1

0xe9ec,	// (0x00010890) aid_ps_area_pane

0x9a61,	// (0x0000b905) aid_ps_clock_pane

0xe9fd,	// (0x000108a1) aid_ps_indicator_pane

0xea09,	// (0x000108ad) indicator_ps_pane_ParamLimits

0xea09,	// (0x000108ad) indicator_ps_pane

0xea18,	// (0x000108bc) power_save_pane_g1_ParamLimits

0xea18,	// (0x000108bc) power_save_pane_g1

0xea24,	// (0x000108c8) power_save_pane_g2_ParamLimits

0xea24,	// (0x000108c8) power_save_pane_g2

0xe77a,	// (0x0001061e) aid_navinavi_width_pane

0xe9ec,	// (0x00010890) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001140e) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001140e) power_save_pane_g

0xea32,	// (0x000108d6) power_save_pane_t1_ParamLimits

0xea32,	// (0x000108d6) power_save_pane_t1

0x9a61,	// (0x0000b905) aid_ps_clock_pane_ParamLimits

0xe9fd,	// (0x000108a1) aid_ps_indicator_pane_ParamLimits

0xea44,	// (0x000108e8) power_save_pane_t4_ParamLimits

0xea44,	// (0x000108e8) power_save_pane_t4

0x0001,

0xf56f,	// (0x00011413) power_save_pane_t_ParamLimits

0xf56f,	// (0x00011413) power_save_pane_t

0xea6e,	// (0x00010912) power_save_t3_ParamLimits

0xea6e,	// (0x00010912) power_save_t3

0xea59,	// (0x000108fd) power_save_t2_ParamLimits

0xea59,	// (0x000108fd) power_save_t2

0xea83,	// (0x00010927) indicator_ps_pane_g1

0x9a6f,	// (0x0000b913) ai_gene_pane_ParamLimits

0x9a6f,	// (0x0000b913) ai_gene_pane

0x9a86,	// (0x0000b92a) ai_links_pane_ParamLimits

0x9a86,	// (0x0000b92a) ai_links_pane

0x9a9e,	// (0x0000b942) indicator_pane_cp1_ParamLimits

0x9a9e,	// (0x0000b942) indicator_pane_cp1

0x9aad,	// (0x0000b951) main_pane_idle_g1_cp_ParamLimits

0x9aad,	// (0x0000b951) main_pane_idle_g1_cp

0x9ac5,	// (0x0000b969) popup_ai_links_title_window

0x9ace,	// (0x0000b972) soft_indicator_pane_cp1_ParamLimits

0x9ace,	// (0x0000b972) soft_indicator_pane_cp1

0x2c04,	// (0x00004aa8) ai_links_pane_g1

0x2c0d,	// (0x00004ab1) grid_ai_links_pane

0xbd7e,	// (0x0000dc22) ai_gene_pane_1

0x2bf2,	// (0x00004a96) ai_gene_pane_2

0x2bfb,	// (0x00004a9f) list_highlight_pane_cp4

0xbd5a,	// (0x0000dbfe) cell_ai_link_pane_ParamLimits

0xbd5a,	// (0x0000dbfe) cell_ai_link_pane

0x2bc3,	// (0x00004a67) cell_ai_link_pane_g1

0xebb0,	// (0x00010a54) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x000117a0) cell_ai_link_pane_g

0xe8e9,	// (0x0001078d) grid_highlight_cp2

0xe8e9,	// (0x0001078d) bg_popup_sub_pane_cp1

0xea9a,	// (0x0001093e) popup_ai_links_title_window_t1

0x2b13,	// (0x000049b7) ai_gene_pane_1_g1_ParamLimits

0x2b13,	// (0x000049b7) ai_gene_pane_1_g1

0x2b1f,	// (0x000049c3) ai_gene_pane_1_g2_ParamLimits

0x2b1f,	// (0x000049c3) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00011796) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00011796) ai_gene_pane_1_g

0x2b2c,	// (0x000049d0) ai_gene_pane_1_t1_ParamLimits

0x2b2c,	// (0x000049d0) ai_gene_pane_1_t1

0x2b60,	// (0x00004a04) grid_ai_soft_ind_pane

0x2afe,	// (0x000049a2) ai_gene_pane_2_t1_ParamLimits

0x2afe,	// (0x000049a2) ai_gene_pane_2_t1

0x9ae2,	// (0x0000b986) main_pane_empty_t1_ParamLimits

0x9ae2,	// (0x0000b986) main_pane_empty_t1

0x9afa,	// (0x0000b99e) main_pane_empty_t2_ParamLimits

0x9afa,	// (0x0000b99e) main_pane_empty_t2

0x9b0f,	// (0x0000b9b3) main_pane_empty_t3_ParamLimits

0x9b0f,	// (0x0000b9b3) main_pane_empty_t3

0x9b21,	// (0x0000b9c5) main_pane_empty_t4_ParamLimits

0x9b21,	// (0x0000b9c5) main_pane_empty_t4

0x9b33,	// (0x0000b9d7) main_pane_empty_t5_ParamLimits

0x9b33,	// (0x0000b9d7) main_pane_empty_t5

0x0004,

0xf574,	// (0x00011418) main_pane_empty_t_ParamLimits

0xf574,	// (0x00011418) main_pane_empty_t

0xeeb2,	// (0x00010d56) bg_popup_window_pane_ParamLimits

0xeeb2,	// (0x00010d56) bg_popup_window_pane

0xbcd4,	// (0x0000db78) find_popup_pane_cp2_ParamLimits

0xbcd4,	// (0x0000db78) find_popup_pane_cp2

0x287a,	// (0x0000471e) heading_pane_ParamLimits

0x287a,	// (0x0000471e) heading_pane

0xe8e9,	// (0x0001078d) bg_popup_sub_pane

0xbc4d,	// (0x0000daf1) bg_popup_window_pane_g1_ParamLimits

0xbc4d,	// (0x0000daf1) bg_popup_window_pane_g1

0xbc5c,	// (0x0000db00) bg_popup_window_pane_g2_ParamLimits

0xbc5c,	// (0x0000db00) bg_popup_window_pane_g2

0xbc68,	// (0x0000db0c) bg_popup_window_pane_g3_ParamLimits

0xbc68,	// (0x0000db0c) bg_popup_window_pane_g3

0xbc74,	// (0x0000db18) bg_popup_window_pane_g4_ParamLimits

0xbc74,	// (0x0000db18) bg_popup_window_pane_g4

0xbc83,	// (0x0000db27) bg_popup_window_pane_g5_ParamLimits

0xbc83,	// (0x0000db27) bg_popup_window_pane_g5

0xbc93,	// (0x0000db37) bg_popup_window_pane_g6_ParamLimits

0xbc93,	// (0x0000db37) bg_popup_window_pane_g6

0xbc9f,	// (0x0000db43) bg_popup_window_pane_g7_ParamLimits

0xbc9f,	// (0x0000db43) bg_popup_window_pane_g7

0xbcae,	// (0x0000db52) bg_popup_window_pane_g8_ParamLimits

0xbcae,	// (0x0000db52) bg_popup_window_pane_g8

0xbcbd,	// (0x0000db61) bg_popup_window_pane_g9_ParamLimits

0xbcbd,	// (0x0000db61) bg_popup_window_pane_g9

0x2843,	// (0x000046e7) bg_popup_window_pane_g10_ParamLimits

0x2843,	// (0x000046e7) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x0001175e) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x0001175e) bg_popup_window_pane_g

0x276c,	// (0x00004610) bg_popup_heading_pane_ParamLimits

0x276c,	// (0x00004610) bg_popup_heading_pane

0x33c8,	// (0x0000526c) tabs_4_passive_pane_cp_srt_ParamLimits

0x33c8,	// (0x0000526c) tabs_4_passive_pane_cp_srt

0x33da,	// (0x0000527e) tabs_4_passive_pane_srt_ParamLimits

0x2780,	// (0x00004624) heading_pane_g2

0x33da,	// (0x0000527e) tabs_4_passive_pane_srt

0x18e8,	// (0x0000378c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x18e8,	// (0x0000378c) bg_passive_tab_pane_cp3_srt

0x2788,	// (0x0000462c) heading_pane_t1_ParamLimits

0x2788,	// (0x0000462c) heading_pane_t1

0x279f,	// (0x00004643) heading_pane_t2_ParamLimits

0x279f,	// (0x00004643) heading_pane_t2

0x0001,

0xf8b5,	// (0x00011759) heading_pane_t_ParamLimits

0xf8b5,	// (0x00011759) heading_pane_t

0x2150,	// (0x00003ff4) bg_popup_heading_pane_g1

0x21ff,	// (0x000040a3) bg_popup_heading_pane_g2

0x2209,	// (0x000040ad) bg_popup_heading_pane_g3

0x2213,	// (0x000040b7) bg_popup_heading_pane_g4

0x221d,	// (0x000040c1) bg_popup_heading_pane_g5

0x2227,	// (0x000040cb) bg_popup_heading_pane_g6

0x222f,	// (0x000040d3) bg_popup_heading_pane_g7

0x2237,	// (0x000040db) bg_popup_heading_pane_g8

0x2241,	// (0x000040e5) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00011715) bg_popup_heading_pane_g

0x175c,	// (0x00003600) bg_popup_sub_pane_g1

0x1764,	// (0x00003608) bg_popup_sub_pane_g2

0x176c,	// (0x00003610) bg_popup_sub_pane_g3

0x1774,	// (0x00003618) bg_popup_sub_pane_g4

0x177c,	// (0x00003620) bg_popup_sub_pane_g5

0x1784,	// (0x00003628) bg_popup_sub_pane_g6

0x178c,	// (0x00003630) bg_popup_sub_pane_g7

0x1794,	// (0x00003638) bg_popup_sub_pane_g8

0x179c,	// (0x00003640) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x000116ef) bg_popup_sub_pane_g

0xe957,	// (0x000107fb) bg_popup_window_pane_cp5_ParamLimits

0xe957,	// (0x000107fb) bg_popup_window_pane_cp5

0xeab7,	// (0x0001095b) popup_note_window_g1_ParamLimits

0xeab7,	// (0x0001095b) popup_note_window_g1

0xeac3,	// (0x00010967) popup_note_window_t1_ParamLimits

0xeac3,	// (0x00010967) popup_note_window_t1

0xead9,	// (0x0001097d) popup_note_window_t2_ParamLimits

0xead9,	// (0x0001097d) popup_note_window_t2

0xeaef,	// (0x00010993) popup_note_window_t3_ParamLimits

0xeaef,	// (0x00010993) popup_note_window_t3

0xeb05,	// (0x000109a9) popup_note_window_t4_ParamLimits

0xeb05,	// (0x000109a9) popup_note_window_t4

0xeb2d,	// (0x000109d1) popup_note_window_t5_ParamLimits

0xeb2d,	// (0x000109d1) popup_note_window_t5

0x0004,

0xf57f,	// (0x00011423) popup_note_window_t_ParamLimits

0xf57f,	// (0x00011423) popup_note_window_t

0xeb51,	// (0x000109f5) bg_popup_window_pane_cp6_ParamLimits

0xeb51,	// (0x000109f5) bg_popup_window_pane_cp6

0x20cc,	// (0x00003f70) popup_note_image_window_g1_ParamLimits

0x20cc,	// (0x00003f70) popup_note_image_window_g1

0xbaf2,	// (0x0000d996) popup_note_image_window_g2_ParamLimits

0xbaf2,	// (0x0000d996) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x000116e3) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x000116e3) popup_note_image_window_g

0x20f1,	// (0x00003f95) popup_note_image_window_t1_ParamLimits

0x20f1,	// (0x00003f95) popup_note_image_window_t1

0x210a,	// (0x00003fae) popup_note_image_window_t2_ParamLimits

0x210a,	// (0x00003fae) popup_note_image_window_t2

0x2123,	// (0x00003fc7) popup_note_image_window_t3_ParamLimits

0x2123,	// (0x00003fc7) popup_note_image_window_t3

0x0002,

0xf844,	// (0x000116e8) popup_note_image_window_t_ParamLimits

0xf844,	// (0x000116e8) popup_note_image_window_t

0x1f95,	// (0x00003e39) bg_popup_window_pane_cp7_ParamLimits

0x1f95,	// (0x00003e39) bg_popup_window_pane_cp7

0x1fc5,	// (0x00003e69) popup_note_wait_window_g1_ParamLimits

0x1fc5,	// (0x00003e69) popup_note_wait_window_g1

0x1fd1,	// (0x00003e75) popup_note_wait_window_g2_ParamLimits

0x1fd1,	// (0x00003e75) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x000116d1) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x000116d1) popup_note_wait_window_g

0x1fe9,	// (0x00003e8d) popup_note_wait_window_t1_ParamLimits

0x1fe9,	// (0x00003e8d) popup_note_wait_window_t1

0xba93,	// (0x0000d937) popup_note_wait_window_t2_ParamLimits

0xba93,	// (0x0000d937) popup_note_wait_window_t2

0xbab0,	// (0x0000d954) popup_note_wait_window_t3_ParamLimits

0xbab0,	// (0x0000d954) popup_note_wait_window_t3

0xbac3,	// (0x0000d967) popup_note_wait_window_t4_ParamLimits

0xbac3,	// (0x0000d967) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x000116d8) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x000116d8) popup_note_wait_window_t

0x2065,	// (0x00003f09) wait_bar_pane_ParamLimits

0x2065,	// (0x00003f09) wait_bar_pane

0xe8e9,	// (0x0001078d) wait_anim_pane

0xe8e9,	// (0x0001078d) wait_border_pane

0xe770,	// (0x00010614) wait_anim_pane_g1

0xe770,	// (0x00010614) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00011598) wait_anim_pane_g

0x1f41,	// (0x00003de5) wait_border_pane_g1

0x1f4c,	// (0x00003df0) wait_border_pane_g2

0x1f55,	// (0x00003df9) wait_border_pane_g3

0x0002,

0xf826,	// (0x000116ca) wait_border_pane_g

0x1dac,	// (0x00003c50) bg_popup_window_pane_cp16_ParamLimits

0x1dac,	// (0x00003c50) bg_popup_window_pane_cp16

0xba43,	// (0x0000d8e7) indicator_popup_pane_cp4_ParamLimits

0xba43,	// (0x0000d8e7) indicator_popup_pane_cp4

0x1ec0,	// (0x00003d64) popup_query_data_window_t1_ParamLimits

0x1ec0,	// (0x00003d64) popup_query_data_window_t1

0x1ed2,	// (0x00003d76) popup_query_data_window_t2_ParamLimits

0x1ed2,	// (0x00003d76) popup_query_data_window_t2

0x1eeb,	// (0x00003d8f) popup_query_data_window_t3_ParamLimits

0x1eeb,	// (0x00003d8f) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x000116c3) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x000116c3) popup_query_data_window_t

0xba57,	// (0x0000d8fb) query_popup_data_pane_ParamLimits

0xba57,	// (0x0000d8fb) query_popup_data_pane

0xba6b,	// (0x0000d90f) query_popup_data_pane_cp1_ParamLimits

0xba6b,	// (0x0000d90f) query_popup_data_pane_cp1

0x1dac,	// (0x00003c50) bg_popup_window_pane_cp10_ParamLimits

0x1dac,	// (0x00003c50) bg_popup_window_pane_cp10

0xb9be,	// (0x0000d862) indicator_popup_pane_ParamLimits

0xb9be,	// (0x0000d862) indicator_popup_pane

0xb9e0,	// (0x0000d884) popup_query_code_window_t1_ParamLimits

0xb9e0,	// (0x0000d884) popup_query_code_window_t1

0xb9fa,	// (0x0000d89e) popup_query_code_window_t2_ParamLimits

0xb9fa,	// (0x0000d89e) popup_query_code_window_t2

0x1e63,	// (0x00003d07) popup_query_code_window_t3_ParamLimits

0x1e63,	// (0x00003d07) popup_query_code_window_t3

0x0002,

0xf818,	// (0x000116bc) popup_query_code_window_t_ParamLimits

0xf818,	// (0x000116bc) popup_query_code_window_t

0x1e92,	// (0x00003d36) query_popup_pane_ParamLimits

0x1e92,	// (0x00003d36) query_popup_pane

0xeb51,	// (0x000109f5) bg_popup_window_pane_cp15_ParamLimits

0xeb51,	// (0x000109f5) bg_popup_window_pane_cp15

0x9b45,	// (0x0000b9e9) indicator_popup_pane_cp1_ParamLimits

0x9b45,	// (0x0000b9e9) indicator_popup_pane_cp1

0x9b58,	// (0x0000b9fc) indicator_popup_pane_cp2_ParamLimits

0x9b58,	// (0x0000b9fc) indicator_popup_pane_cp2

0x9b6b,	// (0x0000ba0f) popup_query_data_code_window_g1_ParamLimits

0x9b6b,	// (0x0000ba0f) popup_query_data_code_window_g1

0xeb6f,	// (0x00010a13) popup_query_data_code_window_t1_ParamLimits

0xeb6f,	// (0x00010a13) popup_query_data_code_window_t1

0xeb81,	// (0x00010a25) popup_query_data_code_window_t2_ParamLimits

0xeb81,	// (0x00010a25) popup_query_data_code_window_t2

0x9b7e,	// (0x0000ba22) popup_query_data_code_window_t3_ParamLimits

0x9b7e,	// (0x0000ba22) popup_query_data_code_window_t3

0x9b94,	// (0x0000ba38) popup_query_data_code_window_t4_ParamLimits

0x9b94,	// (0x0000ba38) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001142e) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001142e) popup_query_data_code_window_t

0x04aa,	// (0x0000234e) list_single_midp_graphic_pane_g3

0x9bac,	// (0x0000ba50) query_popup_data_pane_cp2_ParamLimits

0x9bbf,	// (0x0000ba63) query_popup_pane_cp2_ParamLimits

0x9bbf,	// (0x0000ba63) query_popup_pane_cp2

0xe8e9,	// (0x0001078d) bg_popup_window_pane_cp11

0x1da4,	// (0x00003c48) heading_pane_cp5

0xebdd,	// (0x00010a81) listscroll_popup_info_pane

0xe8e9,	// (0x0001078d) input_focus_pane_cp3

0xeb93,	// (0x00010a37) query_popup_pane_t1

0xeba1,	// (0x00010a45) list_popup_info_pane_ParamLimits

0xeba1,	// (0x00010a45) list_popup_info_pane

0xebb0,	// (0x00010a54) listscroll_popup_info_pane_g1

0xebb8,	// (0x00010a5c) scroll_pane_cp7

0x9bd2,	// (0x0000ba76) popup_info_list_pane_t1_ParamLimits

0x9bd2,	// (0x0000ba76) popup_info_list_pane_t1

0x9bec,	// (0x0000ba90) popup_info_list_pane_t2_ParamLimits

0x9bec,	// (0x0000ba90) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00011437) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00011437) popup_info_list_pane_t

0xe8e9,	// (0x0001078d) bg_popup_window_pane_cp12

0xc2ea,	// (0x0000e18e) find_popup_pane

0xe965,	// (0x00010809) bg_popup_window_pane_cp3

0xebc2,	// (0x00010a66) heading_pane_cp3

0xebce,	// (0x00010a72) listscroll_popup_graphic_pane

0xe8e9,	// (0x0001078d) bg_popup_window_pane_cp4

0x9c56,	// (0x0000bafa) heading_pane_cp4

0xebdd,	// (0x00010a81) listscroll_popup_colour_pane

0x9c5e,	// (0x0000bb02) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9c5e,	// (0x0000bb02) cell_large_graphic_colour_none_popup_pane

0x9c72,	// (0x0000bb16) grid_large_graphic_colour_popup_pane_ParamLimits

0x9c72,	// (0x0000bb16) grid_large_graphic_colour_popup_pane

0x9c96,	// (0x0000bb3a) listscroll_popup_colour_pane_g1_ParamLimits

0x9c96,	// (0x0000bb3a) listscroll_popup_colour_pane_g1

0x9cad,	// (0x0000bb51) listscroll_popup_colour_pane_g2_ParamLimits

0x9cad,	// (0x0000bb51) listscroll_popup_colour_pane_g2

0x9cc4,	// (0x0000bb68) listscroll_popup_colour_pane_g3_ParamLimits

0x9cc4,	// (0x0000bb68) listscroll_popup_colour_pane_g3

0x9cd4,	// (0x0000bb78) listscroll_popup_colour_pane_g4_ParamLimits

0x9cd4,	// (0x0000bb78) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001143c) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001143c) listscroll_popup_colour_pane_g

0xebe5,	// (0x00010a89) scroll_pane_cp6_ParamLimits

0xebe5,	// (0x00010a89) scroll_pane_cp6

0x9ce4,	// (0x0000bb88) cell_large_graphic_colour_popup_pane_ParamLimits

0x9ce4,	// (0x0000bb88) cell_large_graphic_colour_popup_pane

0x9d03,	// (0x0000bba7) cell_large_graphic_colour_none_popup_pane_t1

0xe8e9,	// (0x0001078d) grid_highlight_pane_cp5

0xebf7,	// (0x00010a9b) cell_large_graphic_colour_popup_pane_g1

0xebff,	// (0x00010aa3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00011445) cell_large_graphic_colour_popup_pane_g

0xec07,	// (0x00010aab) cell_large_graphic_colour_popup_pane_g2_copy1

0xec10,	// (0x00010ab4) grid_highlight_pane_cp4

0xec18,	// (0x00010abc) bg_popup_window_pane_cp8_ParamLimits

0xec18,	// (0x00010abc) bg_popup_window_pane_cp8

0x9d12,	// (0x0000bbb6) popup_snote_single_text_window_g1_ParamLimits

0x9d12,	// (0x0000bbb6) popup_snote_single_text_window_g1

0x9d24,	// (0x0000bbc8) popup_snote_single_text_window_t1_ParamLimits

0x9d24,	// (0x0000bbc8) popup_snote_single_text_window_t1

0x9d37,	// (0x0000bbdb) popup_snote_single_text_window_t2_ParamLimits

0x9d37,	// (0x0000bbdb) popup_snote_single_text_window_t2

0x9d4a,	// (0x0000bbee) popup_snote_single_text_window_t3_ParamLimits

0x9d4a,	// (0x0000bbee) popup_snote_single_text_window_t3

0x9d83,	// (0x0000bc27) popup_snote_single_text_window_t4_ParamLimits

0x9d83,	// (0x0000bc27) popup_snote_single_text_window_t4

0x9db7,	// (0x0000bc5b) popup_snote_single_text_window_t5_ParamLimits

0x9db7,	// (0x0000bc5b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001144a) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001144a) popup_snote_single_text_window_t

0xec33,	// (0x00010ad7) bg_popup_window_pane_cp9_ParamLimits

0xec33,	// (0x00010ad7) bg_popup_window_pane_cp9

0x9d12,	// (0x0000bbb6) popup_snote_single_graphic_window_g1_ParamLimits

0x9d12,	// (0x0000bbb6) popup_snote_single_graphic_window_g1

0xec41,	// (0x00010ae5) popup_snote_single_graphic_window_g2_ParamLimits

0xec41,	// (0x00010ae5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00011455) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00011455) popup_snote_single_graphic_window_g

0xec4d,	// (0x00010af1) popup_snote_single_graphic_window_t1_ParamLimits

0xec4d,	// (0x00010af1) popup_snote_single_graphic_window_t1

0xec60,	// (0x00010b04) popup_snote_single_graphic_window_t2_ParamLimits

0xec60,	// (0x00010b04) popup_snote_single_graphic_window_t2

0x9d4a,	// (0x0000bbee) popup_snote_single_graphic_window_t3_ParamLimits

0x9d4a,	// (0x0000bbee) popup_snote_single_graphic_window_t3

0x9d83,	// (0x0000bc27) popup_snote_single_graphic_window_t4_ParamLimits

0x9d83,	// (0x0000bc27) popup_snote_single_graphic_window_t4

0x9de6,	// (0x0000bc8a) popup_snote_single_graphic_window_t5_ParamLimits

0x9de6,	// (0x0000bc8a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001145a) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001145a) popup_snote_single_graphic_window_t

0x3346,	// (0x000051ea) grid_graphic_popup_pane_ParamLimits

0x3346,	// (0x000051ea) grid_graphic_popup_pane

0x3370,	// (0x00005214) listscroll_popup_graphic_pane_g1_ParamLimits

0x3370,	// (0x00005214) listscroll_popup_graphic_pane_g1

0xc235,	// (0x0000e0d9) listscroll_popup_graphic_pane_g2_ParamLimits

0xc235,	// (0x0000e0d9) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00011839) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00011839) listscroll_popup_graphic_pane_g

0x3398,	// (0x0000523c) scroll_pane_cp5

0xc1da,	// (0x0000e07e) cell_graphic_popup_pane_ParamLimits

0xc1da,	// (0x0000e07e) cell_graphic_popup_pane

0x32c6,	// (0x0000516a) cell_graphic_popup_pane_g1

0x32ce,	// (0x00005172) cell_graphic_popup_pane_g2

0xec07,	// (0x00010aab) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00011832) cell_graphic_popup_pane_g

0x32d7,	// (0x0000517b) cell_graphic_popup_pane_t2

0xec10,	// (0x00010ab4) grid_highlight_pane_cp3

0xec85,	// (0x00010b29) list_gen_pane_ParamLimits

0xec85,	// (0x00010b29) list_gen_pane

0xecad,	// (0x00010b51) scroll_pane

0xc144,	// (0x0000dfe8) bg_list_pane_g1_ParamLimits

0xc144,	// (0x0000dfe8) bg_list_pane_g1

0xc15f,	// (0x0000e003) bg_list_pane_g2_ParamLimits

0xc15f,	// (0x0000e003) bg_list_pane_g2

0xc172,	// (0x0000e016) bg_list_pane_g3_ParamLimits

0xc172,	// (0x0000e016) bg_list_pane_g3

0xc184,	// (0x0000e028) bg_list_pane_g4_ParamLimits

0xc184,	// (0x0000e028) bg_list_pane_g4

0xc196,	// (0x0000e03a) bg_list_pane_g5_ParamLimits

0xc196,	// (0x0000e03a) bg_list_pane_g5

0x0004,

0xf983,	// (0x00011827) bg_list_pane_g_ParamLimits

0xf983,	// (0x00011827) bg_list_pane_g

0xc0e8,	// (0x0000df8c) list_double2_graphic_large_graphic_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double2_graphic_large_graphic_pane

0xc0e8,	// (0x0000df8c) list_double2_graphic_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double2_graphic_pane

0xc0e8,	// (0x0000df8c) list_double2_large_graphic_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double2_large_graphic_pane

0xc0e8,	// (0x0000df8c) list_double2_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double2_pane

0xc0e8,	// (0x0000df8c) list_double_graphic_heading_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_graphic_heading_pane

0xc0e8,	// (0x0000df8c) list_double_graphic_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_graphic_pane

0xc0e8,	// (0x0000df8c) list_double_heading_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_heading_pane

0xc0e8,	// (0x0000df8c) list_double_large_graphic_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_large_graphic_pane

0xc0e8,	// (0x0000df8c) list_double_number_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_number_pane

0xc0e8,	// (0x0000df8c) list_double_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_pane

0xc0e8,	// (0x0000df8c) list_double_time_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_double_time_pane

0xc0e8,	// (0x0000df8c) list_setting_number_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_setting_number_pane

0xc0e8,	// (0x0000df8c) list_setting_pane_ParamLimits

0xc0e8,	// (0x0000df8c) list_setting_pane

0xc0fa,	// (0x0000df9e) list_single_2graphic_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_2graphic_pane

0xc0fa,	// (0x0000df9e) list_single_graphic_heading_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_graphic_heading_pane

0xc0fa,	// (0x0000df9e) list_single_graphic_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_graphic_pane

0xc0fa,	// (0x0000df9e) list_single_heading_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_heading_pane

0xc0fa,	// (0x0000df9e) list_single_large_graphic_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_large_graphic_pane

0xc0fa,	// (0x0000df9e) list_single_number_heading_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_number_heading_pane

0xc0fa,	// (0x0000df9e) list_single_number_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_number_pane

0xc0fa,	// (0x0000df9e) list_single_pane_ParamLimits

0xc0fa,	// (0x0000df9e) list_single_pane

0xe8e9,	// (0x0001078d) list_highlight_pane_cp1

0xece1,	// (0x00010b85) list_single_pane_g1_ParamLimits

0xece1,	// (0x00010b85) list_single_pane_g1

0xeced,	// (0x00010b91) list_single_pane_g2_ParamLimits

0xeced,	// (0x00010b91) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001146c) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001146c) list_single_pane_g

0xc0d2,	// (0x0000df76) list_single_pane_t1_ParamLimits

0xc0d2,	// (0x0000df76) list_single_pane_t1

0xece1,	// (0x00010b85) list_single_number_pane_g1_ParamLimits

0xece1,	// (0x00010b85) list_single_number_pane_g1

0xeced,	// (0x00010b91) list_single_number_pane_g2_ParamLimits

0xeced,	// (0x00010b91) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001146c) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001146c) list_single_number_pane_g

0x16ea,	// (0x0000358e) list_single_number_pane_t1_ParamLimits

0x16ea,	// (0x0000358e) list_single_number_pane_t1

0xbe72,	// (0x0000dd16) list_single_number_pane_t2_ParamLimits

0xbe72,	// (0x0000dd16) list_single_number_pane_t2

0x0001,

0xf944,	// (0x000117e8) list_single_number_pane_t_ParamLimits

0xf944,	// (0x000117e8) list_single_number_pane_t

0x16de,	// (0x00003582) list_single_graphic_pane_g1_ParamLimits

0x16de,	// (0x00003582) list_single_graphic_pane_g1

0xece1,	// (0x00010b85) list_single_graphic_pane_g2_ParamLimits

0xece1,	// (0x00010b85) list_single_graphic_pane_g2

0xeced,	// (0x00010b91) list_single_graphic_pane_g3_ParamLimits

0xeced,	// (0x00010b91) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00011465) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00011465) list_single_graphic_pane_g

0x16ea,	// (0x0000358e) list_single_graphic_pane_t1_ParamLimits

0x16ea,	// (0x0000358e) list_single_graphic_pane_t1

0xece1,	// (0x00010b85) list_single_heading_pane_g1_ParamLimits

0xece1,	// (0x00010b85) list_single_heading_pane_g1

0xeced,	// (0x00010b91) list_single_heading_pane_g2_ParamLimits

0xeced,	// (0x00010b91) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001146c) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001146c) list_single_heading_pane_g

0x9e1f,	// (0x0000bcc3) list_single_heading_pane_t1_ParamLimits

0x9e1f,	// (0x0000bcc3) list_single_heading_pane_t1

0x9e35,	// (0x0000bcd9) list_single_heading_pane_t2_ParamLimits

0x9e35,	// (0x0000bcd9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011471) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011471) list_single_heading_pane_t

0xece1,	// (0x00010b85) list_single_number_heading_pane_g1_ParamLimits

0xece1,	// (0x00010b85) list_single_number_heading_pane_g1

0xeced,	// (0x00010b91) list_single_number_heading_pane_g2_ParamLimits

0xeced,	// (0x00010b91) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001146c) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001146c) list_single_number_heading_pane_g

0x9e1f,	// (0x0000bcc3) list_single_number_heading_pane_t1_ParamLimits

0x9e1f,	// (0x0000bcc3) list_single_number_heading_pane_t1

0x9e47,	// (0x0000bceb) list_single_number_heading_pane_t2_ParamLimits

0x9e47,	// (0x0000bceb) list_single_number_heading_pane_t2

0x9e59,	// (0x0000bcfd) list_single_number_heading_pane_t3_ParamLimits

0x9e59,	// (0x0000bcfd) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00011476) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00011476) list_single_number_heading_pane_t

0x9e6b,	// (0x0000bd0f) list_single_graphic_heading_pane_g1_ParamLimits

0x9e6b,	// (0x0000bd0f) list_single_graphic_heading_pane_g1

0x9e77,	// (0x0000bd1b) list_single_graphic_heading_pane_g4_ParamLimits

0x9e77,	// (0x0000bd1b) list_single_graphic_heading_pane_g4

0xeced,	// (0x00010b91) list_single_graphic_heading_pane_g5_ParamLimits

0xeced,	// (0x00010b91) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001147d) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001147d) list_single_graphic_heading_pane_g

0x9e1f,	// (0x0000bcc3) list_single_graphic_heading_pane_t1_ParamLimits

0x9e1f,	// (0x0000bcc3) list_single_graphic_heading_pane_t1

0x9e88,	// (0x0000bd2c) list_single_graphic_heading_pane_t2_ParamLimits

0x9e88,	// (0x0000bd2c) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011484) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011484) list_single_graphic_heading_pane_t

0x3b36,	// (0x000059da) list_single_large_graphic_pane_g1_ParamLimits

0x3b36,	// (0x000059da) list_single_large_graphic_pane_g1

0xece1,	// (0x00010b85) list_single_large_graphic_pane_g2_ParamLimits

0xece1,	// (0x00010b85) list_single_large_graphic_pane_g2

0xeced,	// (0x00010b91) list_single_large_graphic_pane_g3_ParamLimits

0xeced,	// (0x00010b91) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00011489) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00011489) list_single_large_graphic_pane_g

0x1f4c,	// (0x00003df0) wait_border_pane_g2_copy1

0x9e9a,	// (0x0000bd3e) list_single_large_graphic_pane_g4_cp2

0x16ea,	// (0x0000358e) list_single_large_graphic_pane_t1_ParamLimits

0x16ea,	// (0x0000358e) list_single_large_graphic_pane_t1

0x9ea2,	// (0x0000bd46) list_double_pane_g1_ParamLimits

0x9ea2,	// (0x0000bd46) list_double_pane_g1

0x9eae,	// (0x0000bd52) list_double_pane_g2_ParamLimits

0x9eae,	// (0x0000bd52) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011490) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011490) list_double_pane_g

0x9eba,	// (0x0000bd5e) list_double_pane_t1_ParamLimits

0x9eba,	// (0x0000bd5e) list_double_pane_t1

0x9ed0,	// (0x0000bd74) list_double_pane_t2_ParamLimits

0x9ed0,	// (0x0000bd74) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011495) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011495) list_double_pane_t

0x9ee2,	// (0x0000bd86) list_double2_pane_g1_ParamLimits

0x9ee2,	// (0x0000bd86) list_double2_pane_g1

0x9ef3,	// (0x0000bd97) list_double2_pane_g2_ParamLimits

0x9ef3,	// (0x0000bd97) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001149a) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001149a) list_double2_pane_g

0x9eff,	// (0x0000bda3) list_double2_pane_t1_ParamLimits

0x9eff,	// (0x0000bda3) list_double2_pane_t1

0x9f15,	// (0x0000bdb9) list_double2_pane_t2_ParamLimits

0x9f15,	// (0x0000bdb9) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001149f) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001149f) list_double2_pane_t

0x9ea2,	// (0x0000bd46) list_double_number_pane_g1_ParamLimits

0x9ea2,	// (0x0000bd46) list_double_number_pane_g1

0x9eae,	// (0x0000bd52) list_double_number_pane_g2_ParamLimits

0x9eae,	// (0x0000bd52) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011490) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011490) list_double_number_pane_g

0x9f27,	// (0x0000bdcb) list_double_number_pane_t1_ParamLimits

0x9f27,	// (0x0000bdcb) list_double_number_pane_t1

0x9f39,	// (0x0000bddd) list_double_number_pane_t2_ParamLimits

0x9f39,	// (0x0000bddd) list_double_number_pane_t2

0x9f4f,	// (0x0000bdf3) list_double_number_pane_t3_ParamLimits

0x9f4f,	// (0x0000bdf3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000114a4) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000114a4) list_double_number_pane_t

0x9f61,	// (0x0000be05) list_double_graphic_pane_g1_ParamLimits

0x9f61,	// (0x0000be05) list_double_graphic_pane_g1

0x9f6d,	// (0x0000be11) list_double_graphic_pane_g2_ParamLimits

0x9f6d,	// (0x0000be11) list_double_graphic_pane_g2

0x9f7c,	// (0x0000be20) list_double_graphic_pane_g3_ParamLimits

0x9f7c,	// (0x0000be20) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000114ab) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000114ab) list_double_graphic_pane_g

0x9f39,	// (0x0000bddd) list_double_graphic_pane_t1_ParamLimits

0x9f39,	// (0x0000bddd) list_double_graphic_pane_t1

0x9f4f,	// (0x0000bdf3) list_double_graphic_pane_t2_ParamLimits

0x9f4f,	// (0x0000bdf3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000114b4) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000114b4) list_double_graphic_pane_t

0x9f94,	// (0x0000be38) list_double2_graphic_pane_g1_ParamLimits

0x9f94,	// (0x0000be38) list_double2_graphic_pane_g1

0x4f7a,	// (0x00006e1e) list_double2_graphic_pane_g2_ParamLimits

0x4f7a,	// (0x00006e1e) list_double2_graphic_pane_g2

0x9ef3,	// (0x0000bd97) list_double2_graphic_pane_g3_ParamLimits

0x9ef3,	// (0x0000bd97) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000114b9) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000114b9) list_double2_graphic_pane_g

0x9fa0,	// (0x0000be44) list_double2_graphic_pane_t1_ParamLimits

0x9fa0,	// (0x0000be44) list_double2_graphic_pane_t1

0x9fb6,	// (0x0000be5a) list_double2_graphic_pane_t2_ParamLimits

0x9fb6,	// (0x0000be5a) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000114c0) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000114c0) list_double2_graphic_pane_t

0x9fc8,	// (0x0000be6c) list_double_large_graphic_pane_g1_ParamLimits

0x9fc8,	// (0x0000be6c) list_double_large_graphic_pane_g1

0x9fe7,	// (0x0000be8b) list_double_large_graphic_pane_g2_ParamLimits

0x9fe7,	// (0x0000be8b) list_double_large_graphic_pane_g2

0x9eae,	// (0x0000bd52) list_double_large_graphic_pane_g3_ParamLimits

0x9eae,	// (0x0000bd52) list_double_large_graphic_pane_g3

0x9ff8,	// (0x0000be9c) list_double_large_graphic_pane_g4_ParamLimits

0x9ff8,	// (0x0000be9c) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000114c5) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000114c5) list_double_large_graphic_pane_g

0xa00b,	// (0x0000beaf) list_double_large_graphic_pane_t1_ParamLimits

0xa00b,	// (0x0000beaf) list_double_large_graphic_pane_t1

0xa024,	// (0x0000bec8) list_double_large_graphic_pane_t2_ParamLimits

0xa024,	// (0x0000bec8) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000114d0) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000114d0) list_double_large_graphic_pane_t

0xa036,	// (0x0000beda) list_double2_large_graphic_pane_g1_ParamLimits

0xa036,	// (0x0000beda) list_double2_large_graphic_pane_g1

0x9ee2,	// (0x0000bd86) list_double2_large_graphic_pane_g2_ParamLimits

0x9ee2,	// (0x0000bd86) list_double2_large_graphic_pane_g2

0x9ef3,	// (0x0000bd97) list_double2_large_graphic_pane_g3_ParamLimits

0x9ef3,	// (0x0000bd97) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000114d5) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000114d5) list_double2_large_graphic_pane_g

0x9fa0,	// (0x0000be44) list_double2_large_graphic_pane_t1_ParamLimits

0x9fa0,	// (0x0000be44) list_double2_large_graphic_pane_t1

0x9fb6,	// (0x0000be5a) list_double2_large_graphic_pane_t2_ParamLimits

0x9fb6,	// (0x0000be5a) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x000114c0) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x000114c0) list_double2_large_graphic_pane_t

0xa042,	// (0x0000bee6) list_double_heading_pane_g1_ParamLimits

0xa042,	// (0x0000bee6) list_double_heading_pane_g1

0xa053,	// (0x0000bef7) list_double_heading_pane_g2_ParamLimits

0xa053,	// (0x0000bef7) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x000114dc) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x000114dc) list_double_heading_pane_g

0xa05f,	// (0x0000bf03) list_double_heading_pane_t1_ParamLimits

0xa05f,	// (0x0000bf03) list_double_heading_pane_t1

0xa075,	// (0x0000bf19) list_double_heading_pane_t2_ParamLimits

0xa075,	// (0x0000bf19) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x000114e1) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x000114e1) list_double_heading_pane_t

0x9f61,	// (0x0000be05) list_double_graphic_heading_pane_g1_ParamLimits

0x9f61,	// (0x0000be05) list_double_graphic_heading_pane_g1

0xa042,	// (0x0000bee6) list_double_graphic_heading_pane_g2_ParamLimits

0xa042,	// (0x0000bee6) list_double_graphic_heading_pane_g2

0xa053,	// (0x0000bef7) list_double_graphic_heading_pane_g3_ParamLimits

0xa053,	// (0x0000bef7) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x000114e6) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x000114e6) list_double_graphic_heading_pane_g

0xa05f,	// (0x0000bf03) list_double_graphic_heading_pane_t1_ParamLimits

0xa05f,	// (0x0000bf03) list_double_graphic_heading_pane_t1

0xa075,	// (0x0000bf19) list_double_graphic_heading_pane_t2_ParamLimits

0xa075,	// (0x0000bf19) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x000114e1) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x000114e1) list_double_graphic_heading_pane_t

0x9fe7,	// (0x0000be8b) list_double_time_pane_g1_ParamLimits

0x9fe7,	// (0x0000be8b) list_double_time_pane_g1

0x9eae,	// (0x0000bd52) list_double_time_pane_g2_ParamLimits

0x9eae,	// (0x0000bd52) list_double_time_pane_g2

0x0001,

0xf649,	// (0x000114ed) list_double_time_pane_g_ParamLimits

0xf649,	// (0x000114ed) list_double_time_pane_g

0xa087,	// (0x0000bf2b) list_double_time_pane_t1_ParamLimits

0xa087,	// (0x0000bf2b) list_double_time_pane_t1

0xa09d,	// (0x0000bf41) list_double_time_pane_t2_ParamLimits

0xa09d,	// (0x0000bf41) list_double_time_pane_t2

0xa0af,	// (0x0000bf53) list_double_time_pane_t3_ParamLimits

0xa0af,	// (0x0000bf53) list_double_time_pane_t3

0xa0c1,	// (0x0000bf65) list_double_time_pane_t4_ParamLimits

0xa0c1,	// (0x0000bf65) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x000114f2) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x000114f2) list_double_time_pane_t

0x4f7a,	// (0x00006e1e) list_setting_pane_g1_ParamLimits

0x4f7a,	// (0x00006e1e) list_setting_pane_g1

0x9ef3,	// (0x0000bd97) list_setting_pane_g2_ParamLimits

0x9ef3,	// (0x0000bd97) list_setting_pane_g2

0x0001,

0xf657,	// (0x000114fb) list_setting_pane_g_ParamLimits

0xf657,	// (0x000114fb) list_setting_pane_g

0xa0d3,	// (0x0000bf77) list_setting_pane_t1_ParamLimits

0xa0d3,	// (0x0000bf77) list_setting_pane_t1

0xa0ea,	// (0x0000bf8e) list_setting_pane_t2_ParamLimits

0xa0ea,	// (0x0000bf8e) list_setting_pane_t2

0x0002,

0xf65c,	// (0x00011500) list_setting_pane_t_ParamLimits

0xf65c,	// (0x00011500) list_setting_pane_t

0xa129,	// (0x0000bfcd) set_value_pane_cp_ParamLimits

0xa129,	// (0x0000bfcd) set_value_pane_cp

0x4f7a,	// (0x00006e1e) list_setting_number_pane_g1_ParamLimits

0x4f7a,	// (0x00006e1e) list_setting_number_pane_g1

0x9ef3,	// (0x0000bd97) list_setting_number_pane_g2_ParamLimits

0x9ef3,	// (0x0000bd97) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x000114fb) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x000114fb) list_setting_number_pane_g

0xa135,	// (0x0000bfd9) list_setting_number_pane_t1_ParamLimits

0xa135,	// (0x0000bfd9) list_setting_number_pane_t1

0xa149,	// (0x0000bfed) list_setting_number_pane_t2_ParamLimits

0xa149,	// (0x0000bfed) list_setting_number_pane_t2

0xa160,	// (0x0000c004) list_setting_number_pane_t3_ParamLimits

0xa160,	// (0x0000c004) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00011507) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00011507) list_setting_number_pane_t

0xa129,	// (0x0000bfcd) set_value_pane_ParamLimits

0xa129,	// (0x0000bfcd) set_value_pane

0xed26,	// (0x00010bca) bg_set_opt_pane_ParamLimits

0xed26,	// (0x00010bca) bg_set_opt_pane

0xed47,	// (0x00010beb) set_value_pane_t1

0xed55,	// (0x00010bf9) slider_set_pane_cp3

0xa1a3,	// (0x0000c047) volume_small_pane_cp

0xed5e,	// (0x00010c02) list_form_gen_pane

0xed67,	// (0x00010c0b) scroll_pane_cp8

0xa1ac,	// (0x0000c050) form_field_data_pane_ParamLimits

0xa1ac,	// (0x0000c050) form_field_data_pane

0xa1c3,	// (0x0000c067) form_field_data_wide_pane_ParamLimits

0xa1c3,	// (0x0000c067) form_field_data_wide_pane

0xa1e3,	// (0x0000c087) form_field_popup_pane_ParamLimits

0xa1e3,	// (0x0000c087) form_field_popup_pane

0xa203,	// (0x0000c0a7) form_field_popup_wide_pane_ParamLimits

0xa203,	// (0x0000c0a7) form_field_popup_wide_pane

0xed88,	// (0x00010c2c) form_field_slider_pane_ParamLimits

0xed88,	// (0x00010c2c) form_field_slider_pane

0xa21a,	// (0x0000c0be) form_field_slider_wide_pane_ParamLimits

0xa21a,	// (0x0000c0be) form_field_slider_wide_pane

0xed9b,	// (0x00010c3f) data_form_pane

0xa237,	// (0x0000c0db) form_field_data_pane_t1

0xeda7,	// (0x00010c4b) input_focus_pane

0xedb5,	// (0x00010c59) data_form_wide_pane

0xede6,	// (0x00010c8a) form_field_data_wide_pane_t1

0xec25,	// (0x00010ac9) input_focus_pane_cp6

0xa251,	// (0x0000c0f5) form_field_popup_pane_t1

0xeda7,	// (0x00010c4b) input_focus_pane_cp7

0xee08,	// (0x00010cac) list_form_pane

0xee1c,	// (0x00010cc0) form_field_popup_wide_pane_t1

0xeda7,	// (0x00010c4b) input_focus_pane_cp8

0xee31,	// (0x00010cd5) list_form_wide_pane

0xa273,	// (0x0000c117) form_field_slider_pane_t1_ParamLimits

0xa273,	// (0x0000c117) form_field_slider_pane_t1

0xa28b,	// (0x0000c12f) form_field_slider_pane_t2_ParamLimits

0xa28b,	// (0x0000c12f) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00011517) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00011517) form_field_slider_pane_t

0xe957,	// (0x000107fb) input_focus_pane_cp9_ParamLimits

0xe957,	// (0x000107fb) input_focus_pane_cp9

0xa2a0,	// (0x0000c144) slider_cont_pane_ParamLimits

0xa2a0,	// (0x0000c144) slider_cont_pane

0xee3d,	// (0x00010ce1) form_field_slider_wide_pane_t1_ParamLimits

0xee3d,	// (0x00010ce1) form_field_slider_wide_pane_t1

0xee4f,	// (0x00010cf3) form_field_slider_wide_pane_t2_ParamLimits

0xee4f,	// (0x00010cf3) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0001151c) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0001151c) form_field_slider_wide_pane_t

0xe957,	// (0x000107fb) input_focus_pane_cp10_ParamLimits

0xe957,	// (0x000107fb) input_focus_pane_cp10

0xa2b4,	// (0x0000c158) slider_cont_pane_cp1_ParamLimits

0xa2b4,	// (0x0000c158) slider_cont_pane_cp1

0xa2c8,	// (0x0000c16c) slider_form_pane_cp

0xee61,	// (0x00010d05) input_focus_pane_g1

0xee69,	// (0x00010d0d) input_focus_pane_g2

0xee71,	// (0x00010d15) input_focus_pane_g3

0xee79,	// (0x00010d1d) input_focus_pane_g4

0xee81,	// (0x00010d25) input_focus_pane_g5

0xee89,	// (0x00010d2d) input_focus_pane_g6

0xee91,	// (0x00010d35) input_focus_pane_g7

0xee99,	// (0x00010d3d) input_focus_pane_g8

0xeea1,	// (0x00010d45) input_focus_pane_g9

0xe770,	// (0x00010614) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00011521) input_focus_pane_g

0x1f55,	// (0x00003df9) wait_border_pane_g3_copy1

0xa2d0,	// (0x0000c174) data_form_pane_t1

0xe770,	// (0x00010614) wait_anim_pane_g1_copy1

0xc0b6,	// (0x0000df5a) data_form_wide_pane_t1

0xa2ea,	// (0x0000c18e) list_form_graphic_pane_cp_ParamLimits

0xa2ea,	// (0x0000c18e) list_form_graphic_pane_cp

0x3088,	// (0x00004f2c) slider_form_pane_g1

0x3091,	// (0x00004f35) slider_form_pane_g2

0x0006,

0xf974,	// (0x00011818) slider_form_pane_g

0xa2fc,	// (0x0000c1a0) list_form_graphic_pane_ParamLimits

0xa2fc,	// (0x0000c1a0) list_form_graphic_pane

0xa30f,	// (0x0000c1b3) list_form_graphic_pane_g1

0xa317,	// (0x0000c1bb) list_form_graphic_pane_t1_ParamLimits

0xa317,	// (0x0000c1bb) list_form_graphic_pane_t1

0xe965,	// (0x00010809) list_highlight_pane_cp5_ParamLimits

0xe965,	// (0x00010809) list_highlight_pane_cp5

0xa32c,	// (0x0000c1d0) find_pane_g1

0xeea9,	// (0x00010d4d) input_find_pane

0xa335,	// (0x0000c1d9) input_find_pane_g1_ParamLimits

0xa335,	// (0x0000c1d9) input_find_pane_g1

0xa341,	// (0x0000c1e5) input_find_pane_t1_ParamLimits

0xa341,	// (0x0000c1e5) input_find_pane_t1

0xa356,	// (0x0000c1fa) input_find_pane_t2_ParamLimits

0xa356,	// (0x0000c1fa) input_find_pane_t2

0x0001,

0xf692,	// (0x00011536) input_find_pane_t_ParamLimits

0xf692,	// (0x00011536) input_find_pane_t

0xeeb2,	// (0x00010d56) input_focus_pane_cp5_ParamLimits

0xeeb2,	// (0x00010d56) input_focus_pane_cp5

0xeec0,	// (0x00010d64) bg_popup_window_pane_cp2_ParamLimits

0xeec0,	// (0x00010d64) bg_popup_window_pane_cp2

0xeecd,	// (0x00010d71) listscroll_menu_pane_ParamLimits

0xeecd,	// (0x00010d71) listscroll_menu_pane

0xa377,	// (0x0000c21b) popup_submenu_window_ParamLimits

0xa377,	// (0x0000c21b) popup_submenu_window

0xeed9,	// (0x00010d7d) find_popup_pane_g1

0xa39f,	// (0x0000c243) input_popup_find_pane_cp

0xeeb2,	// (0x00010d56) input_focus_pane_cp4_ParamLimits

0xeeb2,	// (0x00010d56) input_focus_pane_cp4

0xeee1,	// (0x00010d85) input_popup_find_pane_t1_ParamLimits

0xeee1,	// (0x00010d85) input_popup_find_pane_t1

0xe8e9,	// (0x0001078d) bg_popup_sub_pane_cp

0xef0f,	// (0x00010db3) listscroll_popup_sub_pane

0xef17,	// (0x00010dbb) list_submenu_pane_ParamLimits

0xef17,	// (0x00010dbb) list_submenu_pane

0xef28,	// (0x00010dcc) scroll_pane_cp4

0xa3b7,	// (0x0000c25b) list_single_popup_submenu_pane_ParamLimits

0xa3b7,	// (0x0000c25b) list_single_popup_submenu_pane

0xa3cb,	// (0x0000c26f) list_single_popup_submenu_pane_g1

0xa3d3,	// (0x0000c277) list_single_popup_submenu_pane_t1_ParamLimits

0xa3d3,	// (0x0000c277) list_single_popup_submenu_pane_t1

0xe957,	// (0x000107fb) bg_active_tab_pane_cp1_ParamLimits

0xe957,	// (0x000107fb) bg_active_tab_pane_cp1

0xef30,	// (0x00010dd4) tabs_2_active_pane_g1

0xa3e8,	// (0x0000c28c) tabs_2_active_pane_t1

0xe957,	// (0x000107fb) bg_passive_tab_pane_cp1_ParamLimits

0xe957,	// (0x000107fb) bg_passive_tab_pane_cp1

0xef30,	// (0x00010dd4) tabs_2_passive_pane_g1

0xa3e8,	// (0x0000c28c) tabs_2_passive_pane_t1

0xe965,	// (0x00010809) bg_active_tab_pane_cp4

0xa3fa,	// (0x0000c29e) tabs_2_long_active_pane_t1

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp4

0x014d,	// (0x00001ff1) list_single_midp_graphic_pane_g4_ParamLimits

0xe965,	// (0x00010809) bg_active_tab_pane_cp5

0xa40d,	// (0x0000c2b1) tabs_3_long_active_pane_t1

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp5

0x014d,	// (0x00001ff1) list_single_midp_graphic_pane_g4

0xe965,	// (0x00010809) bg_popup_window_pane_cp13_ParamLimits

0xe965,	// (0x00010809) bg_popup_window_pane_cp13

0xef38,	// (0x00010ddc) listscroll_popup_fast_pane_ParamLimits

0xef38,	// (0x00010ddc) listscroll_popup_fast_pane

0xef5a,	// (0x00010dfe) grid_popup_fast_pane_ParamLimits

0xef5a,	// (0x00010dfe) grid_popup_fast_pane

0xef6c,	// (0x00010e10) scroll_pane_cp9_ParamLimits

0xef6c,	// (0x00010e10) scroll_pane_cp9

0x5461,	// (0x00007305) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5461,	// (0x00007305) list_single_graphic_hl_pane_t1_cp2

0xef7f,	// (0x00010e23) input_focus_pane_cp20_ParamLimits

0xef7f,	// (0x00010e23) input_focus_pane_cp20

0xef8d,	// (0x00010e31) query_popup_data_pane_t1_ParamLimits

0xef8d,	// (0x00010e31) query_popup_data_pane_t1

0xefa0,	// (0x00010e44) query_popup_data_pane_t2_ParamLimits

0xefa0,	// (0x00010e44) query_popup_data_pane_t2

0xefe6,	// (0x00010e8a) query_popup_data_pane_t3_ParamLimits

0xefe6,	// (0x00010e8a) query_popup_data_pane_t3

0xf027,	// (0x00010ecb) query_popup_data_pane_t4_ParamLimits

0xf027,	// (0x00010ecb) query_popup_data_pane_t4

0xf063,	// (0x00010f07) query_popup_data_pane_t5_ParamLimits

0xf063,	// (0x00010f07) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x0001153b) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x0001153b) query_popup_data_pane_t

0xee61,	// (0x00010d05) bg_set_opt_pane_g1

0xee69,	// (0x00010d0d) bg_set_opt_pane_g2

0xee71,	// (0x00010d15) bg_set_opt_pane_g3

0xee79,	// (0x00010d1d) bg_set_opt_pane_g4

0xee81,	// (0x00010d25) bg_set_opt_pane_g5

0xee89,	// (0x00010d2d) bg_set_opt_pane_g6

0xee91,	// (0x00010d35) bg_set_opt_pane_g7

0xee99,	// (0x00010d3d) bg_set_opt_pane_g8

0xeea1,	// (0x00010d45) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00011546) bg_set_opt_pane_g

0x01d6,	// (0x0000207a) control_top_pane_stacon_ParamLimits

0x01d6,	// (0x0000207a) control_top_pane_stacon

0x0229,	// (0x000020cd) signal_pane_stacon_ParamLimits

0x0229,	// (0x000020cd) signal_pane_stacon

0x024e,	// (0x000020f2) stacon_top_pane_g1_ParamLimits

0x024e,	// (0x000020f2) stacon_top_pane_g1

0x0270,	// (0x00002114) title_pane_stacon_ParamLimits

0x0270,	// (0x00002114) title_pane_stacon

0x029a,	// (0x0000213e) uni_indicator_pane_stacon_ParamLimits

0x029a,	// (0x0000213e) uni_indicator_pane_stacon

0x02af,	// (0x00002153) battery_pane_stacon_ParamLimits

0x02af,	// (0x00002153) battery_pane_stacon

0x02f3,	// (0x00002197) control_bottom_pane_stacon_ParamLimits

0x02f3,	// (0x00002197) control_bottom_pane_stacon

0x0316,	// (0x000021ba) navi_pane_stacon_ParamLimits

0x0316,	// (0x000021ba) navi_pane_stacon

0x0339,	// (0x000021dd) stacon_bottom_pane_g1_ParamLimits

0x0339,	// (0x000021dd) stacon_bottom_pane_g1

0xf09a,	// (0x00010f3e) aid_levels_signal_lsc_ParamLimits

0xf09a,	// (0x00010f3e) aid_levels_signal_lsc

0xf0b0,	// (0x00010f54) signal_pane_stacon_g1_ParamLimits

0xf0b0,	// (0x00010f54) signal_pane_stacon_g1

0xf0c4,	// (0x00010f68) signal_pane_stacon_g2_ParamLimits

0xf0c4,	// (0x00010f68) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00011559) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00011559) signal_pane_stacon_g

0xf106,	// (0x00010faa) title_pane_stacon_t1_ParamLimits

0xf106,	// (0x00010faa) title_pane_stacon_t1

0xf12b,	// (0x00010fcf) uni_indicator_pane_stacon_g1

0xf135,	// (0x00010fd9) uni_indicator_pane_stacon_g2

0xf13f,	// (0x00010fe3) uni_indicator_pane_stacon_g3

0xf149,	// (0x00010fed) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00011565) uni_indicator_pane_stacon_g

0xf153,	// (0x00010ff7) control_top_pane_stacon_g1

0xf15b,	// (0x00010fff) control_top_pane_stacon_t1_ParamLimits

0xf15b,	// (0x00010fff) control_top_pane_stacon_t1

0xf192,	// (0x00011036) aid_levels_battery_lsc_ParamLimits

0xf192,	// (0x00011036) aid_levels_battery_lsc

0xf1a9,	// (0x0001104d) battery_pane_stacon_g1_ParamLimits

0xf1a9,	// (0x0001104d) battery_pane_stacon_g1

0xf1bc,	// (0x00011060) battery_pane_stacon_g2_ParamLimits

0xf1bc,	// (0x00011060) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0001156e) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001156e) battery_pane_stacon_g

0xf1fa,	// (0x0001109e) navi_icon_pane_stacon

0xf20e,	// (0x000110b2) navi_navi_pane_stacon

0xf1fa,	// (0x0001109e) navi_text_pane_stacon

0xf153,	// (0x00010ff7) control_bottom_pane_stacon_g1

0xf222,	// (0x000110c6) control_bottom_pane_stacon_t1_ParamLimits

0xf222,	// (0x000110c6) control_bottom_pane_stacon_t1

0xa439,	// (0x0000c2dd) grid_app_pane_ParamLimits

0xa439,	// (0x0000c2dd) grid_app_pane

0xa471,	// (0x0000c315) scroll_pane_cp15_ParamLimits

0xa471,	// (0x0000c315) scroll_pane_cp15

0xa486,	// (0x0000c32a) cell_app_pane_ParamLimits

0xa486,	// (0x0000c32a) cell_app_pane

0xa4cb,	// (0x0000c36f) cell_app_pane_g1_ParamLimits

0xa4cb,	// (0x0000c36f) cell_app_pane_g1

0xf273,	// (0x00011117) cell_app_pane_g2_ParamLimits

0xf273,	// (0x00011117) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00011573) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00011573) cell_app_pane_g

0xa4ef,	// (0x0000c393) cell_app_pane_t1_ParamLimits

0xa4ef,	// (0x0000c393) cell_app_pane_t1

0xf27f,	// (0x00011123) grid_highlight_pane_ParamLimits

0xf27f,	// (0x00011123) grid_highlight_pane

0xee61,	// (0x00010d05) cell_highlight_pane_g1

0xee69,	// (0x00010d0d) cell_highlight_pane_g2

0xee71,	// (0x00010d15) cell_highlight_pane_g3

0xee79,	// (0x00010d1d) cell_highlight_pane_g4

0xee81,	// (0x00010d25) cell_highlight_pane_g5

0xee89,	// (0x00010d2d) cell_highlight_pane_g6

0xee91,	// (0x00010d35) cell_highlight_pane_g7

0xee99,	// (0x00010d3d) cell_highlight_pane_g8

0xeea1,	// (0x00010d45) cell_highlight_pane_g9

0xe770,	// (0x00010614) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00011521) cell_highlight_pane_g

0xf29a,	// (0x0001113e) bg_scroll_pane

0xa50f,	// (0x0000c3b3) scroll_handle_pane

0xf2f6,	// (0x0001119a) scroll_bg_pane_g1

0xf30b,	// (0x000111af) scroll_bg_pane_g2

0xf323,	// (0x000111c7) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00011578) scroll_bg_pane_g

0xa523,	// (0x0000c3c7) scroll_handle_focus_pane_ParamLimits

0xa523,	// (0x0000c3c7) scroll_handle_focus_pane

0xf2f6,	// (0x0001119a) scroll_handle_pane_g1

0xf338,	// (0x000111dc) scroll_handle_pane_g2

0xf323,	// (0x000111c7) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x0001157f) scroll_handle_pane_g

0xeeb2,	// (0x00010d56) bg_popup_sub_pane_cp21_ParamLimits

0xeeb2,	// (0x00010d56) bg_popup_sub_pane_cp21

0xa530,	// (0x0000c3d4) popup_fep_japan_predictive_window_t1_ParamLimits

0xa530,	// (0x0000c3d4) popup_fep_japan_predictive_window_t1

0xa547,	// (0x0000c3eb) popup_fep_japan_predictive_window_t2_ParamLimits

0xa547,	// (0x0000c3eb) popup_fep_japan_predictive_window_t2

0xa57a,	// (0x0000c41e) popup_fep_japan_predictive_window_t3_ParamLimits

0xa57a,	// (0x0000c41e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00011586) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00011586) popup_fep_japan_predictive_window_t

0xe8e9,	// (0x0001078d) bg_popup_sub_pane_cp23

0xa5b1,	// (0x0000c455) listscroll_japin_cand_pane

0xf34c,	// (0x000111f0) popup_fep_japan_candidate_window_t1

0xf35a,	// (0x000111fe) candidate_pane_ParamLimits

0xf35a,	// (0x000111fe) candidate_pane

0xa5b9,	// (0x0000c45d) scroll_pane_cp30

0xf36c,	// (0x00011210) list_single_popup_jap_candidate_pane_ParamLimits

0xf36c,	// (0x00011210) list_single_popup_jap_candidate_pane

0xe8e9,	// (0x0001078d) list_highlight_pane_cp30

0xf381,	// (0x00011225) list_single_popup_jap_candidate_pane_t1

0xf390,	// (0x00011234) level_1_signal

0xf39d,	// (0x00011241) level_2_signal

0xf3aa,	// (0x0001124e) level_3_signal

0xf3b7,	// (0x0001125b) level_4_signal

0xf3c4,	// (0x00011268) level_5_signal

0xf3d9,	// (0x0001127d) level_6_signal

0xf3e6,	// (0x0001128a) level_7_signal

0xf390,	// (0x00011234) level_1_battery

0xf39d,	// (0x00011241) level_2_battery

0xf3aa,	// (0x0001124e) level_3_battery

0xf3b7,	// (0x0001125b) level_4_battery

0xf3c4,	// (0x00011268) level_5_battery

0xf3d9,	// (0x0001127d) level_6_battery

0xf3e6,	// (0x0001128a) level_7_battery

0xf42a,	// (0x000112ce) list_menu_pane_ParamLimits

0xf42a,	// (0x000112ce) list_menu_pane

0xf440,	// (0x000112e4) scroll_pane_cp25_ParamLimits

0xf440,	// (0x000112e4) scroll_pane_cp25

0xa5c1,	// (0x0000c465) list_double2_graphic_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double2_graphic_pane_cp2

0xa5c1,	// (0x0000c465) list_double2_large_graphic_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double2_large_graphic_pane_cp2

0xa5c1,	// (0x0000c465) list_double2_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double2_pane_cp2

0xa5c1,	// (0x0000c465) list_double_graphic_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double_graphic_pane_cp2

0xa5c1,	// (0x0000c465) list_double_large_graphic_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double_large_graphic_pane_cp2

0xa5c1,	// (0x0000c465) list_double_number_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double_number_pane_cp2

0xa5c1,	// (0x0000c465) list_double_pane_cp2_ParamLimits

0xa5c1,	// (0x0000c465) list_double_pane_cp2

0xa5d0,	// (0x0000c474) list_single_2graphic_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_2graphic_pane_cp2

0xa5d0,	// (0x0000c474) list_single_graphic_heading_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_graphic_heading_pane_cp2

0xa5d0,	// (0x0000c474) list_single_graphic_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_graphic_pane_cp2

0xa5d0,	// (0x0000c474) list_single_heading_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_heading_pane_cp2

0xf469,	// (0x0001130d) list_single_large_graphic_pane_cp2_ParamLimits

0xf469,	// (0x0001130d) list_single_large_graphic_pane_cp2

0xa5d0,	// (0x0000c474) list_single_number_heading_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_number_heading_pane_cp2

0xa5d0,	// (0x0000c474) list_single_number_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_number_pane_cp2

0xa5d0,	// (0x0000c474) list_single_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_pane_cp2

0xf4de,	// (0x00011382) bg_popup_sub_pane_cp22

0xf4f4,	// (0x00011398) popup_side_volume_key_window_g1

0xf500,	// (0x000113a4) popup_side_volume_key_window_t1

0xa698,	// (0x0000c53c) volume_small_pane_cp1

0xe957,	// (0x000107fb) bg_popup_sub_pane_cp24_ParamLimits

0xe957,	// (0x000107fb) bg_popup_sub_pane_cp24

0xf50e,	// (0x000113b2) fep_china_uni_candidate_pane_ParamLimits

0xf50e,	// (0x000113b2) fep_china_uni_candidate_pane

0xf522,	// (0x000113c6) fep_china_uni_entry_pane

0xf532,	// (0x000113d6) popup_fep_china_uni_window_g1

0xa6a0,	// (0x0000c544) fep_china_uni_entry_pane_g1

0xa6a8,	// (0x0000c54c) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x000115b7) fep_china_uni_entry_pane_g

0x0001,	// (0x00001ea5) fep_entry_item_pane

0x000b,	// (0x00001eaf) fep_candidate_item_pane

0xa6b0,	// (0x0000c554) fep_china_uni_candidate_pane_g1

0x001b,	// (0x00001ebf) fep_china_uni_candidate_pane_g2

0x0023,	// (0x00001ec7) fep_china_uni_candidate_pane_g3

0xa6b8,	// (0x0000c55c) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x000115bc) fep_china_uni_candidate_pane_g

0xe770,	// (0x00010614) fep_entry_item_pane_g1

0x0033,	// (0x00001ed7) fep_entry_item_pane_t1_ParamLimits

0x0033,	// (0x00001ed7) fep_entry_item_pane_t1

0x0049,	// (0x00001eed) fep_candidate_item_pane_t1_ParamLimits

0x0049,	// (0x00001eed) fep_candidate_item_pane_t1

0x005e,	// (0x00001f02) fep_candidate_item_pane_t2_ParamLimits

0x005e,	// (0x00001f02) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x000115c5) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x000115c5) fep_candidate_item_pane_t

0xe965,	// (0x00010809) list_highlight_pane_cp31_ParamLimits

0xe965,	// (0x00010809) list_highlight_pane_cp31

0x0070,	// (0x00001f14) level_1_signal_lsc

0x0079,	// (0x00001f1d) level_2_signal_lsc

0x0082,	// (0x00001f26) level_3_signal_lsc

0x008b,	// (0x00001f2f) level_4_signal_lsc

0x0094,	// (0x00001f38) level_5_signal_lsc

0x009d,	// (0x00001f41) level_6_signal_lsc

0x00a6,	// (0x00001f4a) level_7_signal_lsc

0x00a6,	// (0x00001f4a) level_1_battery_lsc

0x00af,	// (0x00001f53) level_2_battery_lsc

0x00b8,	// (0x00001f5c) level_3_battery_lsc

0x00c1,	// (0x00001f65) level_4_battery_lsc

0x00ca,	// (0x00001f6e) level_5_battery_lsc

0x00d3,	// (0x00001f77) level_6_battery_lsc

0x0070,	// (0x00001f14) level_7_battery_lsc

0x00dc,	// (0x00001f80) scroll_handle_focus_pane_g1

0x00e5,	// (0x00001f89) scroll_handle_focus_pane_g2

0x00ee,	// (0x00001f92) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x000115ca) scroll_handle_focus_pane_g

0xa6c0,	// (0x0000c564) list_single_2graphic_pane_g1_ParamLimits

0xa6c0,	// (0x0000c564) list_single_2graphic_pane_g1

0x9e77,	// (0x0000bd1b) list_single_2graphic_pane_g2_ParamLimits

0x9e77,	// (0x0000bd1b) list_single_2graphic_pane_g2

0xeced,	// (0x00010b91) list_single_2graphic_pane_g3_ParamLimits

0xeced,	// (0x00010b91) list_single_2graphic_pane_g3

0xa6cc,	// (0x0000c570) list_single_2graphic_pane_g4_ParamLimits

0xa6cc,	// (0x0000c570) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x000115d1) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x000115d1) list_single_2graphic_pane_g

0xa6d8,	// (0x0000c57c) list_single_2graphic_pane_t1_ParamLimits

0xa6d8,	// (0x0000c57c) list_single_2graphic_pane_t1

0xa706,	// (0x0000c5aa) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa706,	// (0x0000c5aa) list_double2_graphic_large_graphic_pane_g1

0x9ee2,	// (0x0000bd86) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ee2,	// (0x0000bd86) list_double2_graphic_large_graphic_pane_g2

0x9ef3,	// (0x0000bd97) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9ef3,	// (0x0000bd97) list_double2_graphic_large_graphic_pane_g3

0xa718,	// (0x0000c5bc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa718,	// (0x0000c5bc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x000115da) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x000115da) list_double2_graphic_large_graphic_pane_g

0xa724,	// (0x0000c5c8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa724,	// (0x0000c5c8) list_double2_graphic_large_graphic_pane_t1

0xa73a,	// (0x0000c5de) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa73a,	// (0x0000c5de) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x000115e3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x000115e3) list_double2_graphic_large_graphic_pane_t

0xa7bf,	// (0x0000c663) popup_fast_swap_window_ParamLimits

0xa7bf,	// (0x0000c663) popup_fast_swap_window

0xa7db,	// (0x0000c67f) popup_side_volume_key_window

0x0436,	// (0x000022da) stacon_top_pane

0x0440,	// (0x000022e4) status_pane_ParamLimits

0x0440,	// (0x000022e4) status_pane

0xa7f5,	// (0x0000c699) status_small_pane

0xe8e9,	// (0x0001078d) control_pane

0xe8e9,	// (0x0001078d) stacon_bottom_pane

0xed67,	// (0x00010c0b) scroll_pane_cp121

0xed5e,	// (0x00010c02) set_content_pane

0xa74c,	// (0x0000c5f0) bg_active_tab_pane_g1_cp1

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp1

0xa75e,	// (0x0000c602) bg_active_tab_pane_g3_cp1

0xa74c,	// (0x0000c5f0) bg_passive_tab_pane_g1_cp1

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp1

0xa75e,	// (0x0000c602) bg_passive_tab_pane_g3_cp1

0xa767,	// (0x0000c60b) bg_active_tab_pane_g1_cp2

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp2

0xa770,	// (0x0000c614) bg_active_tab_pane_g3_cp2

0xa767,	// (0x0000c60b) bg_passive_tab_pane_g1_cp2

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp2

0xa770,	// (0x0000c614) bg_passive_tab_pane_g3_cp2

0xa779,	// (0x0000c61d) bg_active_tab_pane_g1_cp3

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp3

0xa782,	// (0x0000c626) bg_active_tab_pane_g3_cp3

0xa779,	// (0x0000c61d) bg_passive_tab_pane_g1_cp3

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp3

0xa782,	// (0x0000c626) bg_passive_tab_pane_g3_cp3

0xa78b,	// (0x0000c62f) bg_active_tab_pane_g1_cp4

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp4

0xa796,	// (0x0000c63a) bg_active_tab_pane_g3_cp4

0xa78b,	// (0x0000c62f) bg_passive_tab_pane_g1_cp4

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp4

0xa796,	// (0x0000c63a) bg_passive_tab_pane_g3_cp4

0xa7a1,	// (0x0000c645) bg_active_tab_pane_g1_cp5

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp5

0xa7aa,	// (0x0000c64e) bg_active_tab_pane_g3_cp5

0xa7a1,	// (0x0000c645) bg_passive_tab_pane_g1_cp5

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp5

0xa7aa,	// (0x0000c64e) bg_passive_tab_pane_g3_cp5

0x3859,	// (0x000056fd) list_set_graphic_pane_ParamLimits

0x3859,	// (0x000056fd) list_set_graphic_pane

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp4

0x0385,	// (0x00002229) list_set_graphic_pane_g1_ParamLimits

0x0385,	// (0x00002229) list_set_graphic_pane_g1

0x0391,	// (0x00002235) list_set_graphic_pane_g2_ParamLimits

0x0391,	// (0x00002235) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x000115e8) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x000115e8) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x0001196d) volume_small_pane_cp_g

0xa7b3,	// (0x0000c657) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa7b3,	// (0x0000c657) list_double2_large_graphic_pane_g1_cp2

0x03bf,	// (0x00002263) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x03bf,	// (0x00002263) list_double2_large_graphic_pane_g2_cp2

0x03d0,	// (0x00002274) list_double2_large_graphic_pane_g3_cp2

0x03d8,	// (0x0000227c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x03d8,	// (0x0000227c) list_double2_large_graphic_pane_t1_cp2

0x03ee,	// (0x00002292) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x03ee,	// (0x00002292) list_double2_large_graphic_pane_t2_cp2

0xbd49,	// (0x0000dbed) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbd49,	// (0x0000dbed) list_double_large_graphic_pane_g1_cp2

0x2b81,	// (0x00004a25) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2b81,	// (0x00004a25) list_double_large_graphic_pane_g2_cp2

0x055b,	// (0x000023ff) list_double_large_graphic_pane_g3_cp2

0x2b92,	// (0x00004a36) list_double_large_graphic_pane_g4_cp

0x2b9a,	// (0x00004a3e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2b9a,	// (0x00004a3e) list_double_large_graphic_pane_t1_cp2

0x2bb1,	// (0x00004a55) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2bb1,	// (0x00004a55) list_double_large_graphic_pane_t2_cp2

0x0459,	// (0x000022fd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0459,	// (0x000022fd) list_double2_graphic_pane_g1_cp2

0x0467,	// (0x0000230b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0467,	// (0x0000230b) list_double2_graphic_pane_g2_cp2

0x0478,	// (0x0000231c) list_double2_graphic_pane_g3_cp2

0x0482,	// (0x00002326) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0482,	// (0x00002326) list_double2_graphic_pane_t1_cp2

0x0498,	// (0x0000233c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0498,	// (0x0000233c) list_double2_graphic_pane_t2_cp2

0xed1a,	// (0x00010bbe) list_single_number_heading_pane_g1_cp2_ParamLimits

0xed1a,	// (0x00010bbe) list_single_number_heading_pane_g1_cp2

0x04aa,	// (0x0000234e) list_single_number_heading_pane_g2_cp2

0x04b2,	// (0x00002356) list_single_number_heading_pane_t1_cp2_ParamLimits

0x04b2,	// (0x00002356) list_single_number_heading_pane_t1_cp2

0x04c8,	// (0x0000236c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x04c8,	// (0x0000236c) list_single_number_heading_pane_t2_cp2

0x04da,	// (0x0000237e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x04da,	// (0x0000237e) list_single_number_heading_pane_t3_cp2

0xed1a,	// (0x00010bbe) list_single_heading_pane_g1_cp2_ParamLimits

0xed1a,	// (0x00010bbe) list_single_heading_pane_g1_cp2

0x04aa,	// (0x0000234e) list_single_heading_pane_g2_cp2

0x04b2,	// (0x00002356) list_single_heading_pane_t1_cp2_ParamLimits

0x04b2,	// (0x00002356) list_single_heading_pane_t1_cp2

0x297a,	// (0x0000481e) list_single_heading_pane_t2_cp2_ParamLimits

0x297a,	// (0x0000481e) list_single_heading_pane_t2_cp2

0x28c2,	// (0x00004766) list_double_graphic_pane_g1_cp2_ParamLimits

0x28c2,	// (0x00004766) list_double_graphic_pane_g1_cp2

0x28ce,	// (0x00004772) list_double_graphic_pane_g2_cp2_ParamLimits

0x28ce,	// (0x00004772) list_double_graphic_pane_g2_cp2

0x28dd,	// (0x00004781) list_double_graphic_pane_g3_cp2

0x28e5,	// (0x00004789) list_double_graphic_pane_t1_cp2_ParamLimits

0x28e5,	// (0x00004789) list_double_graphic_pane_t1_cp2

0x28fb,	// (0x0000479f) list_double_graphic_pane_t2_cp2_ParamLimits

0x28fb,	// (0x0000479f) list_double_graphic_pane_t2_cp2

0x054f,	// (0x000023f3) list_double_number_pane_g1_cp2_ParamLimits

0x054f,	// (0x000023f3) list_double_number_pane_g1_cp2

0x055b,	// (0x000023ff) list_double_number_pane_g2_cp2

0x2886,	// (0x0000472a) list_double_number_pane_t1_cp2_ParamLimits

0x2886,	// (0x0000472a) list_double_number_pane_t1_cp2

0x289a,	// (0x0000473e) list_double_number_pane_t2_cp2_ParamLimits

0x289a,	// (0x0000473e) list_double_number_pane_t2_cp2

0x28b0,	// (0x00004754) list_double_number_pane_t3_cp2_ParamLimits

0x28b0,	// (0x00004754) list_double_number_pane_t3_cp2

0x275e,	// (0x00004602) list_single_graphic_pane_g1_cp2_ParamLimits

0x275e,	// (0x00004602) list_single_graphic_pane_g1_cp2

0x05b3,	// (0x00002457) list_single_graphic_pane_g2_cp2_ParamLimits

0x05b3,	// (0x00002457) list_single_graphic_pane_g2_cp2

0x05bf,	// (0x00002463) list_single_graphic_pane_g3_cp2

0x2734,	// (0x000045d8) list_single_graphic_pane_t1_cp2_ParamLimits

0x2734,	// (0x000045d8) list_single_graphic_pane_t1_cp2

0x05b3,	// (0x00002457) list_single_number_pane_g1_cp2_ParamLimits

0x05b3,	// (0x00002457) list_single_number_pane_g1_cp2

0x05bf,	// (0x00002463) list_single_number_pane_g2_cp2

0x2734,	// (0x000045d8) list_single_number_pane_t1_cp2_ParamLimits

0x2734,	// (0x000045d8) list_single_number_pane_t1_cp2

0x274a,	// (0x000045ee) list_single_number_pane_t2_cp2_ParamLimits

0x274a,	// (0x000045ee) list_single_number_pane_t2_cp2

0x03bf,	// (0x00002263) list_double2_pane_g1_cp2_ParamLimits

0x03bf,	// (0x00002263) list_double2_pane_g1_cp2

0x03d0,	// (0x00002274) list_double2_pane_g2_cp2

0x0527,	// (0x000023cb) list_double2_pane_t1_cp2_ParamLimits

0x0527,	// (0x000023cb) list_double2_pane_t1_cp2

0x053d,	// (0x000023e1) list_double2_pane_t2_cp2_ParamLimits

0x053d,	// (0x000023e1) list_double2_pane_t2_cp2

0x054f,	// (0x000023f3) list_double_pane_g1_cp2_ParamLimits

0x054f,	// (0x000023f3) list_double_pane_g1_cp2

0x055b,	// (0x000023ff) list_double_pane_g2_cp2

0x0563,	// (0x00002407) list_double_pane_t1_cp2_ParamLimits

0x0563,	// (0x00002407) list_double_pane_t1_cp2

0x0579,	// (0x0000241d) list_double_pane_t2_cp2_ParamLimits

0x0579,	// (0x0000241d) list_double_pane_t2_cp2

0xa800,	// (0x0000c6a4) list_single_pane_cp2_g3

0x05b3,	// (0x00002457) list_single_pane_g1_cp2_ParamLimits

0x05b3,	// (0x00002457) list_single_pane_g1_cp2

0x05bf,	// (0x00002463) list_single_pane_g2_cp2

0x05c7,	// (0x0000246b) list_single_pane_t1_cp2_ParamLimits

0x05c7,	// (0x0000246b) list_single_pane_t1_cp2

0xa808,	// (0x0000c6ac) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa808,	// (0x0000c6ac) list_single_large_graphic_pane_g1_cp2

0x05eb,	// (0x0000248f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x05eb,	// (0x0000248f) list_single_large_graphic_pane_g2_cp2

0x05f7,	// (0x0000249b) list_single_large_graphic_pane_g3_cp2

0xa814,	// (0x0000c6b8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa814,	// (0x0000c6b8) list_single_large_graphic_pane_g4_cp1

0x0619,	// (0x000024bd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0619,	// (0x000024bd) list_single_large_graphic_pane_t1_cp2

0x25a7,	// (0x0000444b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x25a7,	// (0x0000444b) list_single_graphic_heading_pane_g1_cp2

0x2574,	// (0x00004418) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2574,	// (0x00004418) list_single_graphic_heading_pane_g4_cp2

0x05bf,	// (0x00002463) list_single_graphic_heading_pane_g5_cp2

0x25b3,	// (0x00004457) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x25b3,	// (0x00004457) list_single_graphic_heading_pane_t1_cp2

0x25c9,	// (0x0000446d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x25c9,	// (0x0000446d) list_single_graphic_heading_pane_t2_cp2

0x2568,	// (0x0000440c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2568,	// (0x0000440c) list_single_2graphic_pane_g1_cp2

0x2574,	// (0x00004418) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2574,	// (0x00004418) list_single_2graphic_pane_g2_cp2

0x05bf,	// (0x00002463) list_single_2graphic_pane_g3_cp2

0x2585,	// (0x00004429) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2585,	// (0x00004429) list_single_2graphic_pane_g4_cp2

0x2591,	// (0x00004435) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2591,	// (0x00004435) list_single_2graphic_pane_t1_cp2

0xe770,	// (0x00010614) list_highlight_pane_g10_cp1

0x2150,	// (0x00003ff4) list_highlight_pane_g1_cp1

0x2158,	// (0x00003ffc) list_highlight_pane_g2_cp1

0x2160,	// (0x00004004) list_highlight_pane_g3_cp1

0x2168,	// (0x0000400c) list_highlight_pane_g4_cp1

0x2170,	// (0x00004014) list_highlight_pane_g5_cp1

0x2178,	// (0x0000401c) list_highlight_pane_g6_cp1

0x2180,	// (0x00004024) list_highlight_pane_g7_cp1

0x2188,	// (0x0000402c) list_highlight_pane_g8_cp1

0x2190,	// (0x00004034) list_highlight_pane_g9_cp1

0xbad6,	// (0x0000d97a) form_field_slider_pane_t3

0xbae4,	// (0x0000d988) form_field_slider_pane_t4

0x2094,	// (0x00003f38) slider_form_pane_ParamLimits

0x2094,	// (0x00003f38) slider_form_pane

0xe8e9,	// (0x0001078d) control_abbreviations

0xe8e9,	// (0x0001078d) control_conventions

0xe8e9,	// (0x0001078d) control_definitions

0xe8e9,	// (0x0001078d) format_table_attribute

0xbd20,	// (0x0000dbc4) bg_popup_preview_window_pane_g9

0xe8e9,	// (0x0001078d) format_table_data2

0xe8e9,	// (0x0001078d) format_table_data3

0xe8e9,	// (0x0001078d) format_table_data_example

0x0008,

0xe8e9,	// (0x0001078d) intro_purpose

0xf8d4,	// (0x00011778) bg_popup_preview_window_pane_g

0xe8e9,	// (0x0001078d) texts_category

0xe8e9,	// (0x0001078d) texts_graphics

0x062f,	// (0x000024d3) text_digital

0x063e,	// (0x000024e2) text_primary

0x064d,	// (0x000024f1) text_primary_small

0x065c,	// (0x00002500) text_secondary

0x066b,	// (0x0000250f) text_title

0xc1aa,	// (0x0000e04e) bg_passive_tab_pane_g1_cp3_srt

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp3_srt

0xc1b3,	// (0x0000e057) bg_passive_tab_pane_g3_cp3_srt

0xe957,	// (0x000107fb) bg_active_tab_pane_cp3_srt_ParamLimits

0xe957,	// (0x000107fb) bg_active_tab_pane_cp3_srt

0xc1bc,	// (0x0000e060) tabs_4_active_pane_srt_g1

0xc1c4,	// (0x0000e068) tabs_4_active_pane_srt_t1_ParamLimits

0xc1c4,	// (0x0000e068) tabs_4_active_pane_srt_t1

0xc1aa,	// (0x0000e04e) bg_active_tab_pane_g1_cp3_copy1

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp3_copy1

0xc1b3,	// (0x0000e057) bg_active_tab_pane_g3_cp3_copy1

0xe965,	// (0x00010809) tabs_2_long_active_pane_srt_ParamLimits

0xe965,	// (0x00010809) tabs_2_long_active_pane_srt

0xe965,	// (0x00010809) tabs_2_long_passive_pane_srt_ParamLimits

0xe965,	// (0x00010809) tabs_2_long_passive_pane_srt

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp4_srt

0xbe9a,	// (0x0000dd3e) bg_passive_tab_pane_g1_cp4_srt

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp4_srt

0xbea3,	// (0x0000dd47) bg_passive_tab_pane_g3_cp4_srt

0xe965,	// (0x00010809) bg_active_tab_pane_cp4_srt_ParamLimits

0xe965,	// (0x00010809) bg_active_tab_pane_cp4_srt

0xbeac,	// (0x0000dd50) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbeac,	// (0x0000dd50) tabs_2_long_active_pane_srt_t1

0xbe9a,	// (0x0000dd3e) bg_active_tab_pane_g1_cp4_srt

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp4_srt

0xbea3,	// (0x0000dd47) bg_active_tab_pane_g3_cp4_srt

0xe957,	// (0x000107fb) tabs_3_long_active_pane_srt_ParamLimits

0xe957,	// (0x000107fb) tabs_3_long_active_pane_srt

0xe957,	// (0x000107fb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe957,	// (0x000107fb) tabs_3_long_passive_pane_cp_srt

0xe957,	// (0x000107fb) tabs_3_long_passive_pane_srt_ParamLimits

0xe957,	// (0x000107fb) tabs_3_long_passive_pane_srt

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp5_srt

0xa7a1,	// (0x0000c645) bg_passive_tab_pane_g1_cp5_srt

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp5_srt

0xa7aa,	// (0x0000c64e) bg_passive_tab_pane_g3_cp5_srt

0xe965,	// (0x00010809) bg_active_tab_pane_cp5_srt_ParamLimits

0xe965,	// (0x00010809) bg_active_tab_pane_cp5_srt

0xbe84,	// (0x0000dd28) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbe84,	// (0x0000dd28) tabs_3_long_active_pane_srt_t1

0xa7a1,	// (0x0000c645) bg_active_tab_pane_g1_cp5_srt

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp5_srt

0xa7aa,	// (0x0000c64e) bg_active_tab_pane_g3_cp5_srt

0x2e27,	// (0x00004ccb) navi_text_pane_srt_t1

0x2e1f,	// (0x00004cc3) navi_icon_pane_srt_g1

0x08e5,	// (0x00002789) midp_editing_number_pane_srt

0x067a,	// (0x0000251e) midp_ticker_pane_srt

0x08ed,	// (0x00002791) midp_ticker_pane_srt_g1

0x08f5,	// (0x00002799) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00011607) midp_ticker_pane_srt_g

0x08fd,	// (0x000027a1) midp_ticker_pane_srt_t1

0x2e10,	// (0x00004cb4) midp_editing_number_pane_t1_copy1

0xa82e,	// (0x0000c6d2) listscroll_midp_pane

0xa82e,	// (0x0000c6d2) midp_form_pane

0xa899,	// (0x0000c73d) midp_info_popup_window_ParamLimits

0xa899,	// (0x0000c73d) midp_info_popup_window

0xeeb2,	// (0x00010d56) bg_popup_sub_pane_cp50_ParamLimits

0xeeb2,	// (0x00010d56) bg_popup_sub_pane_cp50

0x1d98,	// (0x00003c3c) listscroll_midp_info_pane_ParamLimits

0x1d98,	// (0x00003c3c) listscroll_midp_info_pane

0x1d78,	// (0x00003c1c) listscroll_form_midp_pane_ParamLimits

0x1d78,	// (0x00003c1c) listscroll_form_midp_pane

0x1d84,	// (0x00003c28) scroll_bar_cp050

0x1d78,	// (0x00003c1c) list_midp_pane

0xc3b4,	// (0x0000e258) signal_pane_g2_cp

0x1c92,	// (0x00003b36) listscroll_midp_info_pane_t1_ParamLimits

0x1c92,	// (0x00003b36) listscroll_midp_info_pane_t1

0xb910,	// (0x0000d7b4) listscroll_midp_info_pane_t2_ParamLimits

0xb910,	// (0x0000d7b4) listscroll_midp_info_pane_t2

0xb94e,	// (0x0000d7f2) listscroll_midp_info_pane_t3_ParamLimits

0xb94e,	// (0x0000d7f2) listscroll_midp_info_pane_t3

0xb988,	// (0x0000d82c) listscroll_midp_info_pane_t4_ParamLimits

0xb988,	// (0x0000d82c) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x000116b3) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x000116b3) listscroll_midp_info_pane_t

0xef28,	// (0x00010dcc) scroll_pane_cp21

0x1c32,	// (0x00003ad6) form_midp_field_choice_group_pane

0xb8d3,	// (0x0000d777) form_midp_field_text_pane

0x1c78,	// (0x00003b1c) form_midp_field_time_pane

0x1c80,	// (0x00003b24) form_midp_gauge_slider_pane

0x1c89,	// (0x00003b2d) form_midp_gauge_wait_pane

0xe8e9,	// (0x0001078d) form_midp_image_pane

0xb8bc,	// (0x0000d760) list_single_midp_pane_ParamLimits

0xb8bc,	// (0x0000d760) list_single_midp_pane

0xb89a,	// (0x0000d73e) form_midp_field_text_pane_t1

0x18e8,	// (0x0000378c) input_focus_pane_cp050

0x1bef,	// (0x00003a93) list_midp_form_text_pane

0x1b84,	// (0x00003a28) form_midp_field_choice_group_pane_t1

0x1b92,	// (0x00003a36) input_focus_pane_cp051

0x1ba6,	// (0x00003a4a) list_midp_choice_pane

0xe8e9,	// (0x0001078d) status_idle_pane

0x1b68,	// (0x00003a0c) form_midp_field_time_pane_t1

0xe770,	// (0x00010614) wait_anim_pane_g2_copy1

0x1b76,	// (0x00003a1a) form_midp_field_time_pane_t2

0x0001,

0x07a4,	// (0x00002648) aid_navinavi_width_2_pane

0xf80a,	// (0x000116ae) form_midp_field_time_pane_t

0xe8e9,	// (0x0001078d) input_focus_pane_cp052

0xe8e9,	// (0x0001078d) bg_input_focus_pane_cp040

0x1b28,	// (0x000039cc) form_midp_gauge_slider_pane_t1

0x1b36,	// (0x000039da) form_midp_gauge_slider_pane_t2

0xb87e,	// (0x0000d722) form_midp_gauge_slider_pane_t3

0xb88c,	// (0x0000d730) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x000116a5) form_midp_gauge_slider_pane_t

0x1b60,	// (0x00003a04) form_midp_slider_pane

0xe965,	// (0x00010809) bg_input_focus_pane_cp041_ParamLimits

0xe965,	// (0x00010809) bg_input_focus_pane_cp041

0x1af5,	// (0x00003999) form_midp_gauge_wait_pane_t1_ParamLimits

0x1af5,	// (0x00003999) form_midp_gauge_wait_pane_t1

0x1b07,	// (0x000039ab) form_midp_gauge_wait_pane_t2_ParamLimits

0x1b07,	// (0x000039ab) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x000116a0) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x000116a0) form_midp_gauge_wait_pane_t

0x1b19,	// (0x000039bd) form_midp_wait_pane_ParamLimits

0x1b19,	// (0x000039bd) form_midp_wait_pane

0xb848,	// (0x0000d6ec) form_midp_image_pane_g1

0xb851,	// (0x0000d6f5) form_midp_image_pane_t1

0xb860,	// (0x0000d704) form_midp_image_pane_t2

0xb86f,	// (0x0000d713) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00011699) form_midp_image_pane_t

0x1aa7,	// (0x0000394b) list_single_midp_pane_g1

0x1ab0,	// (0x00003954) list_single_midp_pane_t1

0xb833,	// (0x0000d6d7) list_midp_form_item_pane_ParamLimits

0xb833,	// (0x0000d6d7) list_midp_form_item_pane

0x074c,	// (0x000025f0) list_midp_form_item_pane_t1

0x075b,	// (0x000025ff) midp_ticker_pane_g1

0x0767,	// (0x0000260b) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x000115ed) midp_ticker_pane_g

0x0773,	// (0x00002617) midp_ticker_pane_t1

0x3108,	// (0x00004fac) midp_editing_number_pane_t1

0x30e6,	// (0x00004f8a) midp_editing_number_pane

0x30f5,	// (0x00004f99) midp_ticker_pane

0x2dee,	// (0x00004c92) ai_message_heading_pane

0xe8e9,	// (0x0001078d) bg_popup_window_pane_cp14

0x2df6,	// (0x00004c9a) listscroll_ai_message_pane

0x2d78,	// (0x00004c1c) ai_message_heading_pane_g1_ParamLimits

0x2d78,	// (0x00004c1c) ai_message_heading_pane_g1

0xbe3a,	// (0x0000dcde) ai_message_heading_pane_g2_ParamLimits

0xbe3a,	// (0x0000dcde) ai_message_heading_pane_g2

0x2d90,	// (0x00004c34) ai_message_heading_pane_g3_ParamLimits

0x2d90,	// (0x00004c34) ai_message_heading_pane_g3

0x2d9c,	// (0x00004c40) ai_message_heading_pane_g4_ParamLimits

0x2d9c,	// (0x00004c40) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x000117da) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x000117da) ai_message_heading_pane_g

0xbe46,	// (0x0000dcea) ai_message_heading_pane_t1_ParamLimits

0xbe46,	// (0x0000dcea) ai_message_heading_pane_t1

0xbe60,	// (0x0000dd04) ai_message_heading_pane_t2_ParamLimits

0xbe60,	// (0x0000dd04) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x000117e3) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x000117e3) ai_message_heading_pane_t

0x2dd4,	// (0x00004c78) bg_popup_heading_pane_cp1_ParamLimits

0x2dd4,	// (0x00004c78) bg_popup_heading_pane_cp1

0x2d66,	// (0x00004c0a) list_ai_message_pane_ParamLimits

0x2d66,	// (0x00004c0a) list_ai_message_pane

0xef28,	// (0x00010dcc) scroll_pane_cp10

0x2cb2,	// (0x00004b56) list_ai_message_pane_g1

0x2cba,	// (0x00004b5e) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x000117b7) list_ai_message_pane_g

0x2cc2,	// (0x00004b66) list_ai_message_pane_t1_ParamLimits

0x2cc2,	// (0x00004b66) list_ai_message_pane_t1

0x2cd7,	// (0x00004b7b) list_ai_message_pane_t2_ParamLimits

0x2cd7,	// (0x00004b7b) list_ai_message_pane_t2

0x2cec,	// (0x00004b90) list_ai_message_pane_t3_ParamLimits

0x2cec,	// (0x00004b90) list_ai_message_pane_t3

0x2d01,	// (0x00004ba5) list_ai_message_pane_t4_ParamLimits

0x2d01,	// (0x00004ba5) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x000117bc) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x000117bc) list_ai_message_pane_t

0xbdc6,	// (0x0000dc6a) cell_ai_soft_ind_pane_ParamLimits

0xbdc6,	// (0x0000dc6a) cell_ai_soft_ind_pane

0x0785,	// (0x00002629) cell_ai_soft_ind_pane_g1_ParamLimits

0x0785,	// (0x00002629) cell_ai_soft_ind_pane_g1

0xe8e9,	// (0x0001078d) grid_highlight_cp1

0x0792,	// (0x00002636) text_secondary_cp56_ParamLimits

0x0792,	// (0x00002636) text_secondary_cp56

0x2c72,	// (0x00004b16) example_general_pane_ParamLimits

0x2c72,	// (0x00004b16) example_general_pane

0x2c7e,	// (0x00004b22) example_parent_pane_g1_ParamLimits

0x2c7e,	// (0x00004b22) example_parent_pane_g1

0x2c8a,	// (0x00004b2e) example_parent_pane_t1_ParamLimits

0x2c8a,	// (0x00004b2e) example_parent_pane_t1

0xafb7,	// (0x0000ce5b) popup_preview_text_window_ParamLimits

0xafb7,	// (0x0000ce5b) popup_preview_text_window

0x05ab,	// (0x0000244f) list_single_pane_cp2_g4

0xeb51,	// (0x000109f5) bg_popup_preview_window_pane_ParamLimits

0xeb51,	// (0x000109f5) bg_popup_preview_window_pane

0xbd28,	// (0x0000dbcc) popup_preview_text_window_t1_ParamLimits

0xbd28,	// (0x0000dbcc) popup_preview_text_window_t1

0x29ea,	// (0x0000488e) popup_preview_text_window_t2_ParamLimits

0x29ea,	// (0x0000488e) popup_preview_text_window_t2

0x2a33,	// (0x000048d7) popup_preview_text_window_t3_ParamLimits

0x2a33,	// (0x000048d7) popup_preview_text_window_t3

0x2a78,	// (0x0000491c) popup_preview_text_window_t4_ParamLimits

0x2a78,	// (0x0000491c) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x0001178b) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x0001178b) popup_preview_text_window_t

0x2af6,	// (0x0000499a) scroll_pane_cp11

0x175c,	// (0x00003600) bg_popup_preview_window_pane_g1

0xbce8,	// (0x0000db8c) bg_popup_preview_window_pane_g2

0xbcf0,	// (0x0000db94) bg_popup_preview_window_pane_g3

0xbcf8,	// (0x0000db9c) bg_popup_preview_window_pane_g4

0xbd00,	// (0x0000dba4) bg_popup_preview_window_pane_g5

0xbd08,	// (0x0000dbac) bg_popup_preview_window_pane_g6

0xbd10,	// (0x0000dbb4) bg_popup_preview_window_pane_g7

0xbd18,	// (0x0000dbbc) bg_popup_preview_window_pane_g8

0xe786,	// (0x0001062a) aid_popup_width_pane

0xaf33,	// (0x0000cdd7) popup_midp_note_alarm_window_ParamLimits

0xaf33,	// (0x0000cdd7) popup_midp_note_alarm_window

0xed9b,	// (0x00010c3f) data_form_pane_ParamLimits

0xa22d,	// (0x0000c0d1) form_field_data_pane_g1

0xa237,	// (0x0000c0db) form_field_data_pane_t1_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_ParamLimits

0xedb5,	// (0x00010c59) data_form_wide_pane_ParamLimits

0xedc6,	// (0x00010c6a) form_field_data_wide_pane_g1

0xede6,	// (0x00010c8a) form_field_data_wide_pane_t1_ParamLimits

0xec25,	// (0x00010ac9) input_focus_pane_cp6_ParamLimits

0xa3a9,	// (0x0000c24d) input_popup_find_pane_g1_ParamLimits

0xa3a9,	// (0x0000c24d) input_popup_find_pane_g1

0xf1cd,	// (0x00011071) aid_navi_side_left_pane

0xf1e2,	// (0x00011086) aid_navi_side_right_pane

0x224b,	// (0x000040ef) bg_popup_window_pane_cp30_ParamLimits

0x224b,	// (0x000040ef) bg_popup_window_pane_cp30

0x22c5,	// (0x00004169) popup_midp_note_alarm_window_g1_ParamLimits

0x22c5,	// (0x00004169) popup_midp_note_alarm_window_g1

0x22f5,	// (0x00004199) popup_midp_note_alarm_window_t1_ParamLimits

0x22f5,	// (0x00004199) popup_midp_note_alarm_window_t1

0xbb29,	// (0x0000d9cd) popup_midp_note_alarm_window_t2_ParamLimits

0xbb29,	// (0x0000d9cd) popup_midp_note_alarm_window_t2

0xbbd7,	// (0x0000da7b) popup_midp_note_alarm_window_t3_ParamLimits

0xbbd7,	// (0x0000da7b) popup_midp_note_alarm_window_t3

0xbbff,	// (0x0000daa3) popup_midp_note_alarm_window_t4_ParamLimits

0xbbff,	// (0x0000daa3) popup_midp_note_alarm_window_t4

0x248c,	// (0x00004330) popup_midp_note_alarm_window_t5_ParamLimits

0x248c,	// (0x00004330) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x00011728) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x00011728) popup_midp_note_alarm_window_t

0x2538,	// (0x000043dc) wait_bar_pane_cp1_ParamLimits

0x2538,	// (0x000043dc) wait_bar_pane_cp1

0xe8e9,	// (0x0001078d) wait_anim_pane_copy1

0xe8e9,	// (0x0001078d) wait_border_pane_copy1

0x1f41,	// (0x00003de5) wait_border_pane_g1_copy1

0xee00,	// (0x00010ca4) form_field_popup_pane_g1

0xa251,	// (0x0000c0f5) form_field_popup_pane_t1_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_cp7_ParamLimits

0xee08,	// (0x00010cac) list_form_pane_ParamLimits

0xee14,	// (0x00010cb8) form_field_popup_wide_pane_g1

0xee1c,	// (0x00010cc0) form_field_popup_wide_pane_t1_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_cp8_ParamLimits

0xee31,	// (0x00010cd5) list_form_wide_pane_ParamLimits

0xc21d,	// (0x0000e0c1) aid_size_cell_graphic_pane

0xa2d0,	// (0x0000c174) data_form_pane_t1_ParamLimits

0xc0b6,	// (0x0000df5a) data_form_wide_pane_t1_ParamLimits

0xb3fa,	// (0x0000d29e) bg_status_flat_pane

0x983d,	// (0x0000b6e1) title_pane_t1_ParamLimits

0xe91f,	// (0x000107c3) title_pane_t2_ParamLimits

0xe945,	// (0x000107e9) title_pane_t3_ParamLimits

0xf557,	// (0x000113fb) title_pane_t_ParamLimits

0xf390,	// (0x00011234) level_1_signal_ParamLimits

0xf39d,	// (0x00011241) level_2_signal_ParamLimits

0xf3aa,	// (0x0001124e) level_3_signal_ParamLimits

0xf3b7,	// (0x0001125b) level_4_signal_ParamLimits

0xf3c4,	// (0x00011268) level_5_signal_ParamLimits

0xf3d9,	// (0x0001127d) level_6_signal_ParamLimits

0xf3e6,	// (0x0001128a) level_7_signal_ParamLimits

0xf390,	// (0x00011234) level_1_battery_ParamLimits

0xf39d,	// (0x00011241) level_2_battery_ParamLimits

0xf3aa,	// (0x0001124e) level_3_battery_ParamLimits

0xf3b7,	// (0x0001125b) level_4_battery_ParamLimits

0xf3c4,	// (0x00011268) level_5_battery_ParamLimits

0xf3d9,	// (0x0001127d) level_6_battery_ParamLimits

0xf3e6,	// (0x0001128a) level_7_battery_ParamLimits

0x2150,	// (0x00003ff4) bg_status_flat_pane_g1

0x2158,	// (0x00003ffc) bg_status_flat_pane_g2

0x2160,	// (0x00004004) bg_status_flat_pane_g3

0x2168,	// (0x0000400c) bg_status_flat_pane_g4

0x2170,	// (0x00004014) bg_status_flat_pane_g5

0x2178,	// (0x0000401c) bg_status_flat_pane_g6

0x2180,	// (0x00004024) bg_status_flat_pane_g7

0x98d1,	// (0x0000b775) tabs_3_active_pane_t1_ParamLimits

0x98d1,	// (0x0000b775) tabs_3_passive_pane_t1_ParamLimits

0x98eb,	// (0x0000b78f) tabs_4_active_pane_t1_ParamLimits

0x98eb,	// (0x0000b78f) tabs_4_1_passive_pane_t1_ParamLimits

0xa3e8,	// (0x0000c28c) tabs_2_active_pane_t1_ParamLimits

0xa3e8,	// (0x0000c28c) tabs_2_passive_pane_t1_ParamLimits

0xe965,	// (0x00010809) bg_active_tab_pane_cp4_ParamLimits

0xa3fa,	// (0x0000c29e) tabs_2_long_active_pane_t1_ParamLimits

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp4_ParamLimits

0x180d,	// (0x000036b1) list_single_midp_graphic_pane_t1_ParamLimits

0xe965,	// (0x00010809) bg_active_tab_pane_cp5_ParamLimits

0xa40d,	// (0x0000c2b1) tabs_3_long_active_pane_t1_ParamLimits

0x0c08,	// (0x00002aac) bg_passive_tab_pane_cp5_ParamLimits

0x180d,	// (0x000036b1) list_single_midp_graphic_pane_t1

0xb3fa,	// (0x0000d29e) bg_status_flat_pane_ParamLimits

0x134b,	// (0x000031ef) indicator_pane_cp2_ParamLimits

0x134b,	// (0x000031ef) indicator_pane_cp2

0xb578,	// (0x0000d41c) navi_pane_srt_ParamLimits

0xb578,	// (0x0000d41c) navi_pane_srt

0x149a,	// (0x0000333e) popup_clock_digital_analogue_window_cp1

0xe9c3,	// (0x00010867) indicator_pane_t1

0x067a,	// (0x0000251e) copy_highlight_pane

0x067a,	// (0x0000251e) cursor_graphics_pane

0x067a,	// (0x0000251e) graphic_within_text_pane

0x067a,	// (0x0000251e) link_highlight_pane

0x2ab9,	// (0x0000495d) popup_preview_text_window_t5_ParamLimits

0x2ab9,	// (0x0000495d) popup_preview_text_window_t5

0x07ac,	// (0x00002650) cursor_digital_pane

0x07ac,	// (0x00002650) cursor_primary_pane

0x07bd,	// (0x00002661) cursor_primary_small_pane

0x07c5,	// (0x00002669) cursor_secondary_pane

0x07cd,	// (0x00002671) cursor_title_pane

0x07ac,	// (0x00002650) link_highlight_digital_pane

0x07b4,	// (0x00002658) link_highlight_primary_pane

0x07bd,	// (0x00002661) link_highlight_primary_small_pane

0x07c5,	// (0x00002669) link_highlight_secondary_pane

0x07cd,	// (0x00002671) link_highlight_title_pane

0x07ac,	// (0x00002650) copy_highlight_digital_pane

0x07ac,	// (0x00002650) copy_highlight_primary_pane

0x07bd,	// (0x00002661) copy_highlight_primary_small_pane

0x07c5,	// (0x00002669) copy_highlight_secondary_pane

0x07cd,	// (0x00002671) copy_highlight_title_pane

0x07c5,	// (0x00002669) graphic_text_digital_pane

0x21ee,	// (0x00004092) graphic_text_primary_pane

0x21f7,	// (0x0000409b) graphic_text_primary_small_pane

0x07bd,	// (0x00002661) graphic_text_secondary_pane

0x07ac,	// (0x00002650) graphic_text_title_pane

0xa8ea,	// (0x0000c78e) cursor_primary_pane_g1

0x21e0,	// (0x00004084) cursor_text_primary_t1

0xbb1f,	// (0x0000d9c3) cursor_primary_small_pane_g1

0x21d2,	// (0x00004076) cursor_text_primary_small_t1

0xbb15,	// (0x0000d9b9) cursor_primary_small_pane_g1_copy1

0x21ba,	// (0x0000405e) cursor_text_primary_small_t1_copy1

0x2198,	// (0x0000403c) cursor_text_title_t1

0xbb0b,	// (0x0000d9af) cursor_title_pane_g1

0xa8ea,	// (0x0000c78e) cursor_digital_pane_g1

0x07df,	// (0x00002683) cursor_text_digital_t1

0x07ed,	// (0x00002691) link_highlight_primary_pane_g1

0x2141,	// (0x00003fe5) link_highlight_primary_pane_t1

0x07ed,	// (0x00002691) link_highlight_primary_small_pane_g1

0x07f5,	// (0x00002699) link_highlight_primary_small_pane_t1

0x07ed,	// (0x00002691) link_highlight_secondary_pane_g1

0x0804,	// (0x000026a8) link_highlight_secondary_pane_t1

0x20a6,	// (0x00003f4a) link_highlight_title_pane_g1

0x20bd,	// (0x00003f61) link_highlight_title_pane_t1

0x20a6,	// (0x00003f4a) link_highlight_digital_pane_g1

0x20ae,	// (0x00003f52) link_highlight_digital_pane_t1

0x1f60,	// (0x00003e04) copy_highlight_primary_pane_g1

0x1f86,	// (0x00003e2a) copy_highlight_primary_pane_t1

0x1f60,	// (0x00003e04) copy_highlight_primary_small_pane_g1

0x1f77,	// (0x00003e1b) copy_highlight_primary_small_pane_t1

0x0813,	// (0x000026b7) copy_highlight_secondary_pane_g1

0x081b,	// (0x000026bf) copy_highlight_secondary_pane_t1

0x1f60,	// (0x00003e04) copy_highlight_title_pane_g1

0x1f68,	// (0x00003e0c) copy_highlight_title_pane_t1

0x1f60,	// (0x00003e04) copy_highlight_digital_pane_g1

0x35b4,	// (0x00005458) copy_highlight_digital_pane_t1

0x3508,	// (0x000053ac) graphic_text_primary_pane_g1

0x3598,	// (0x0000543c) graphic_text_primary_pane_t1

0x35a6,	// (0x0000544a) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00011857) graphic_text_primary_pane_t

0x3574,	// (0x00005418) graphic_text_primary_small_pane_g1

0x357c,	// (0x00005420) graphic_text_primary_small_pane_t1

0x358a,	// (0x0000542e) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00011852) graphic_text_primary_small_pane_t

0x3550,	// (0x000053f4) graphic_text_secondary_pane_g1

0x3558,	// (0x000053fc) graphic_text_secondary_pane_t1

0x3566,	// (0x0000540a) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x0001184d) graphic_text_secondary_pane_t

0x352c,	// (0x000053d0) graphic_text_title_pane_g1

0x3534,	// (0x000053d8) graphic_text_title_pane_t1

0x3542,	// (0x000053e6) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00011848) graphic_text_title_pane_t

0x3508,	// (0x000053ac) graphic_text_digital_pane_g1

0x3510,	// (0x000053b4) graphic_text_digital_pane_t1

0x351e,	// (0x000053c2) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00011843) graphic_text_digital_pane_t

0xe965,	// (0x00010809) navi_icon_pane_srt_ParamLimits

0xe965,	// (0x00010809) navi_icon_pane_srt

0xe8e9,	// (0x0001078d) navi_midp_pane_srt

0xe8e9,	// (0x0001078d) navi_navi_pane_srt

0xe965,	// (0x00010809) navi_text_pane_srt_ParamLimits

0xe965,	// (0x00010809) navi_text_pane_srt

0x34d3,	// (0x00005377) navi_navi_icon_text_pane_srt

0x34db,	// (0x0000537f) navi_navi_pane_srt_g1_ParamLimits

0x34db,	// (0x0000537f) navi_navi_pane_srt_g1

0x34ed,	// (0x00005391) navi_navi_pane_srt_g2_ParamLimits

0x34ed,	// (0x00005391) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x0001183e) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x0001183e) navi_navi_pane_srt_g

0x34ff,	// (0x000053a3) navi_navi_tabs_pane_srt

0x34d3,	// (0x00005377) navi_navi_text_pane_srt

0x34d3,	// (0x00005377) navi_navi_volume_pane_srt

0x34c4,	// (0x00005368) navi_navi_text_pane_srt_t1

0x349f,	// (0x00005343) navi_navi_volume_pane_srt_g1

0x34a7,	// (0x0000534b) volume_small_pane_srt_ParamLimits

0x34a7,	// (0x0000534b) volume_small_pane_srt

0x082a,	// (0x000026ce) volume_small_pane_srt_g1_ParamLimits

0x082a,	// (0x000026ce) volume_small_pane_srt_g1

0x083a,	// (0x000026de) volume_small_pane_srt_g2_ParamLimits

0x083a,	// (0x000026de) volume_small_pane_srt_g2

0x084b,	// (0x000026ef) volume_small_pane_srt_g3_ParamLimits

0x084b,	// (0x000026ef) volume_small_pane_srt_g3

0x085c,	// (0x00002700) volume_small_pane_srt_g4_ParamLimits

0x085c,	// (0x00002700) volume_small_pane_srt_g4

0x086d,	// (0x00002711) volume_small_pane_srt_g5_ParamLimits

0x086d,	// (0x00002711) volume_small_pane_srt_g5

0x087e,	// (0x00002722) volume_small_pane_srt_g6_ParamLimits

0x087e,	// (0x00002722) volume_small_pane_srt_g6

0x088f,	// (0x00002733) volume_small_pane_srt_g7_ParamLimits

0x088f,	// (0x00002733) volume_small_pane_srt_g7

0x08a0,	// (0x00002744) volume_small_pane_srt_g8_ParamLimits

0x08a0,	// (0x00002744) volume_small_pane_srt_g8

0x08b1,	// (0x00002755) volume_small_pane_srt_g9_ParamLimits

0x08b1,	// (0x00002755) volume_small_pane_srt_g9

0x08c2,	// (0x00002766) volume_small_pane_srt_g10_ParamLimits

0x08c2,	// (0x00002766) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x000115f2) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x000115f2) volume_small_pane_srt_g

0x9bac,	// (0x0000ba50) query_popup_data_pane_cp2

0x348d,	// (0x00005331) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x348d,	// (0x00005331) navi_navi_icon_text_pane_srt_t1

0x21ee,	// (0x00004092) navi_tabs_2_long_pane_srt

0x21ee,	// (0x00004092) navi_tabs_2_pane_srt

0x21ee,	// (0x00004092) navi_tabs_3_long_pane_srt

0x21ee,	// (0x00004092) navi_tabs_3_pane_srt

0x21ee,	// (0x00004092) navi_tabs_4_pane_srt

0xc2ca,	// (0x0000e16e) tabs_2_active_pane_srt_ParamLimits

0xc2ca,	// (0x0000e16e) tabs_2_active_pane_srt

0xc2da,	// (0x0000e17e) tabs_2_passive_pane_srt_ParamLimits

0xc2da,	// (0x0000e17e) tabs_2_passive_pane_srt

0x18e8,	// (0x0000378c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x18e8,	// (0x0000378c) bg_passive_tab_pane_cp1_srt

0xc29a,	// (0x0000e13e) bg_passive_tab_pane_g1_cp1_srt

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp1_srt

0xc2a3,	// (0x0000e147) bg_passive_tab_pane_g3_cp1_srt

0xe957,	// (0x000107fb) bg_active_tab_pane_cp1_srt_ParamLimits

0xe957,	// (0x000107fb) bg_active_tab_pane_cp1_srt

0xc2ac,	// (0x0000e150) tabs_2_active_pane_srt_g1

0xc2b4,	// (0x0000e158) tabs_2_active_pane_srt_t1_ParamLimits

0xc2b4,	// (0x0000e158) tabs_2_active_pane_srt_t1

0xc29a,	// (0x0000e13e) bg_active_tab_pane_g1_cp1_srt

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp1_srt

0xc2a3,	// (0x0000e147) bg_active_tab_pane_g3_cp1_srt

0xc267,	// (0x0000e10b) tabs_3_active_pane_srt_ParamLimits

0xc267,	// (0x0000e10b) tabs_3_active_pane_srt

0xc278,	// (0x0000e11c) tabs_3_passive_pane_cp_srt_ParamLimits

0xc278,	// (0x0000e11c) tabs_3_passive_pane_cp_srt

0xc289,	// (0x0000e12d) tabs_3_passive_pane_srt_ParamLimits

0xc289,	// (0x0000e12d) tabs_3_passive_pane_srt

0x18e8,	// (0x0000378c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x18e8,	// (0x0000378c) bg_passive_tab_pane_cp2_srt

0xa8f4,	// (0x0000c798) bg_passive_tab_pane_g1_cp2_srt

0xa755,	// (0x0000c5f9) bg_passive_tab_pane_g2_cp2_srt

0xa8fd,	// (0x0000c7a1) bg_passive_tab_pane_g3_cp2_srt

0xe957,	// (0x000107fb) bg_active_tab_pane_cp2_srt_ParamLimits

0xe957,	// (0x000107fb) bg_active_tab_pane_cp2_srt

0xc249,	// (0x0000e0ed) tabs_3_active_pane_srt_g1

0xc251,	// (0x0000e0f5) tabs_3_active_pane_srt_t1_ParamLimits

0xc251,	// (0x0000e0f5) tabs_3_active_pane_srt_t1

0xa8f4,	// (0x0000c798) bg_active_tab_pane_g1_cp2_srt

0xa755,	// (0x0000c5f9) bg_active_tab_pane_g2_cp2_srt

0xa8fd,	// (0x0000c7a1) bg_active_tab_pane_g3_cp2_srt

0x33a4,	// (0x00005248) tabs_4_active_pane_srt_ParamLimits

0x33a4,	// (0x00005248) tabs_4_active_pane_srt

0x33b6,	// (0x0000525a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x33b6,	// (0x0000525a) tabs_4_passive_pane_cp2_srt

0x0b81,	// (0x00002a25) aid_size_cell_toolbar

0x2f30,	// (0x00004dd4) main_idle_act_pane_ParamLimits

0xad75,	// (0x0000cc19) popup_large_graphic_colour_window_ParamLimits

0xb269,	// (0x0000d10d) popup_toolbar_window_ParamLimits

0xb269,	// (0x0000d10d) popup_toolbar_window

0x3133,	// (0x00004fd7) list_single_graphic_2heading_pane_ParamLimits

0x3133,	// (0x00004fd7) list_single_graphic_2heading_pane

0xf259,	// (0x000110fd) aid_size_cell_apps_grid_lsc_pane

0xf26b,	// (0x0001110f) aid_size_cell_apps_grid_prt_pane

0x0c08,	// (0x00002aac) bg_wml_button_pane_cp1_ParamLimits

0x0c08,	// (0x00002aac) bg_wml_button_pane_cp1

0xb89a,	// (0x0000d73e) form_midp_field_text_pane_t1_ParamLimits

0x18e8,	// (0x0000378c) input_focus_pane_cp050_ParamLimits

0x1bef,	// (0x00003a93) list_midp_form_text_pane_ParamLimits

0x1b92,	// (0x00003a36) input_focus_pane_cp051_ParamLimits

0x1ba6,	// (0x00003a4a) list_midp_choice_pane_ParamLimits

0xb7ff,	// (0x0000d6a3) list_single_2graphic_pane_cp3_ParamLimits

0xb7ff,	// (0x0000d6a3) list_single_2graphic_pane_cp3

0xb813,	// (0x0000d6b7) list_single_midp_graphic_pane_ParamLimits

0xb813,	// (0x0000d6b7) list_single_midp_graphic_pane

0x15f6,	// (0x0000349a) list_single_graphic_2heading_pane_g1_ParamLimits

0x15f6,	// (0x0000349a) list_single_graphic_2heading_pane_g1

0xece1,	// (0x00010b85) list_single_graphic_2heading_pane_g4_ParamLimits

0xece1,	// (0x00010b85) list_single_graphic_2heading_pane_g4

0xeced,	// (0x00010b91) list_single_graphic_2heading_pane_g5_ParamLimits

0xeced,	// (0x00010b91) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00011645) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00011645) list_single_graphic_2heading_pane_g

0x1602,	// (0x000034a6) list_single_graphic_2heading_pane_t1_ParamLimits

0x1602,	// (0x000034a6) list_single_graphic_2heading_pane_t1

0x1616,	// (0x000034ba) list_single_graphic_2heading_pane_t2_ParamLimits

0x1616,	// (0x000034ba) list_single_graphic_2heading_pane_t2

0x1630,	// (0x000034d4) list_single_graphic_2heading_pane_t3_ParamLimits

0x1630,	// (0x000034d4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x0001164c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x0001164c) list_single_graphic_2heading_pane_t

0x1648,	// (0x000034ec) bg_popup_sub_pane_cp2

0x1672,	// (0x00003516) grid_toobar_pane

0x16ae,	// (0x00003552) cell_toolbar_pane_ParamLimits

0x16ae,	// (0x00003552) cell_toolbar_pane

0x1700,	// (0x000035a4) cell_toolbar_pane_g1_ParamLimits

0x1700,	// (0x000035a4) cell_toolbar_pane_g1

0xb717,	// (0x0000d5bb) cell_toolbar_pane_g2_ParamLimits

0xb717,	// (0x0000d5bb) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00011653) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00011653) cell_toolbar_pane_g

0x1736,	// (0x000035da) grid_highlight_pane_cp2_ParamLimits

0x1736,	// (0x000035da) grid_highlight_pane_cp2

0x1750,	// (0x000035f4) toolbar_button_pane

0x175c,	// (0x00003600) toolbar_button_pane_g1

0x1764,	// (0x00003608) toolbar_button_pane_g2

0x176c,	// (0x00003610) toolbar_button_pane_g3

0x1774,	// (0x00003618) toolbar_button_pane_g4

0x177c,	// (0x00003620) toolbar_button_pane_g5

0x1784,	// (0x00003628) toolbar_button_pane_g6

0x178c,	// (0x00003630) toolbar_button_pane_g7

0x1794,	// (0x00003638) toolbar_button_pane_g8

0x179c,	// (0x00003640) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00011658) toolbar_button_pane_g

0x17ac,	// (0x00003650) list_single_2graphic_pane_g1_cp3_ParamLimits

0x17ac,	// (0x00003650) list_single_2graphic_pane_g1_cp3

0xb72b,	// (0x0000d5cf) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb72b,	// (0x0000d5cf) list_single_2graphic_pane_g2_cp3

0x04aa,	// (0x0000234e) list_single_2graphic_pane_g3_cp3

0x014d,	// (0x00001ff1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x014d,	// (0x00001ff1) list_single_2graphic_pane_g4_cp3

0xb73c,	// (0x0000d5e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb73c,	// (0x0000d5e0) list_single_2graphic_pane_t1_cp3

0xed1a,	// (0x00010bbe) list_single_midp_graphic_pane_g2_ParamLimits

0xed1a,	// (0x00010bbe) list_single_midp_graphic_pane_g2

0x0b89,	// (0x00002a2d) aid_zoom_text_primary

0x0b91,	// (0x00002a35) aid_zoom_text_secondary

0xa954,	// (0x0000c7f8) status_small_pane_g7_ParamLimits

0xa954,	// (0x0000c7f8) status_small_pane_g7

0xa977,	// (0x0000c81b) status_small_pane_t1_ParamLimits

0x9819,	// (0x0000b6bd) title_pane_g2

0x0003,

0xf54e,	// (0x000113f2) title_pane_g

0x9c06,	// (0x0000baaa) aid_size_cell_colour_1_pane_ParamLimits

0x9c06,	// (0x0000baaa) aid_size_cell_colour_1_pane

0x9c1a,	// (0x0000babe) aid_size_cell_colour_2_pane_ParamLimits

0x9c1a,	// (0x0000babe) aid_size_cell_colour_2_pane

0x9c2e,	// (0x0000bad2) aid_size_cell_colour_3_pane_ParamLimits

0x9c2e,	// (0x0000bad2) aid_size_cell_colour_3_pane

0x9c42,	// (0x0000bae6) aid_size_cell_colour_4_pane_ParamLimits

0x9c42,	// (0x0000bae6) aid_size_cell_colour_4_pane

0xf0d5,	// (0x00010f79) title_pane_stacon_g1_ParamLimits

0xf0d5,	// (0x00010f79) title_pane_stacon_g1

0x1fdd,	// (0x00003e81) popup_note_wait_window_g3_ParamLimits

0x1fdd,	// (0x00003e81) popup_note_wait_window_g3

0x2053,	// (0x00003ef7) popup_note_wait_window_t5_ParamLimits

0x2053,	// (0x00003ef7) popup_note_wait_window_t5

0xe8e9,	// (0x0001078d) main_feb_china_hwr_fs_writing_pane

0xabf7,	// (0x0000ca9b) popup_feb_china_hwr_fs_window_ParamLimits

0xabf7,	// (0x0000ca9b) popup_feb_china_hwr_fs_window

0xb758,	// (0x0000d5fc) aid_size_cell_hwr_fs_ParamLimits

0xb758,	// (0x0000d5fc) aid_size_cell_hwr_fs

0x18e8,	// (0x0000378c) bg_popup_sub_pane_cp3_ParamLimits

0x18e8,	// (0x0000378c) bg_popup_sub_pane_cp3

0xb76d,	// (0x0000d611) grid_hwr_fs_pane_ParamLimits

0xb76d,	// (0x0000d611) grid_hwr_fs_pane

0x190c,	// (0x000037b0) linegrid_hwr_fs_pane_ParamLimits

0x190c,	// (0x000037b0) linegrid_hwr_fs_pane

0xb785,	// (0x0000d629) cell_hwr_fs_pane_ParamLimits

0xb785,	// (0x0000d629) cell_hwr_fs_pane

0x193e,	// (0x000037e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x193e,	// (0x000037e2) linegrid_hwr_fs_pane_g1

0xb7ab,	// (0x0000d64f) linegrid_hwr_fs_pane_g2_ParamLimits

0xb7ab,	// (0x0000d64f) linegrid_hwr_fs_pane_g2

0x195c,	// (0x00003800) linegrid_hwr_fs_pane_g3_ParamLimits

0x195c,	// (0x00003800) linegrid_hwr_fs_pane_g3

0xb7bd,	// (0x0000d661) linegrid_hwr_fs_pane_g4_ParamLimits

0xb7bd,	// (0x0000d661) linegrid_hwr_fs_pane_g4

0x1982,	// (0x00003826) linegrid_hwr_fs_pane_g5_ParamLimits

0x1982,	// (0x00003826) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x0001167e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x0001167e) linegrid_hwr_fs_pane_g

0x1998,	// (0x0000383c) cell_hwr_fs_pane_g1_ParamLimits

0x1998,	// (0x0000383c) cell_hwr_fs_pane_g1

0x1530,	// (0x000033d4) cell_hwr_fs_pane_g2_ParamLimits

0x1530,	// (0x000033d4) cell_hwr_fs_pane_g2

0xb7d7,	// (0x0000d67b) cell_hwr_fs_pane_g3_ParamLimits

0xb7d7,	// (0x0000d67b) cell_hwr_fs_pane_g3

0xb7e4,	// (0x0000d688) cell_hwr_fs_pane_g4_ParamLimits

0xb7e4,	// (0x0000d688) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00011689) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00011689) cell_hwr_fs_pane_g

0xb7f1,	// (0x0000d695) cell_hwr_fs_pane_t1

0xe8e9,	// (0x0001078d) grid_highlight_pane_cp6

0xe8e9,	// (0x0001078d) main_idle_act2_pane

0xef0f,	// (0x00010db3) aid_inside_area_popup_secondary

0xbc3e,	// (0x0000dae2) aid_inside_area_window_primary_ParamLimits

0xbc3e,	// (0x0000dae2) aid_inside_area_window_primary

0xc2f2,	// (0x0000e196) ai2_news_ticker_pane

0x35cb,	// (0x0000546f) aid_size_cell_ai1_link_ParamLimits

0x35cb,	// (0x0000546f) aid_size_cell_ai1_link

0xc2fa,	// (0x0000e19e) popup_ai2_data_window_ParamLimits

0xc2fa,	// (0x0000e19e) popup_ai2_data_window

0x35fb,	// (0x0000549f) popup_ai2_link_window_ParamLimits

0x35fb,	// (0x0000549f) popup_ai2_link_window

0x18e8,	// (0x0000378c) bg_popup_sub_pane_cp4_ParamLimits

0x18e8,	// (0x0000378c) bg_popup_sub_pane_cp4

0x360f,	// (0x000054b3) grid_ai2_link_pane_ParamLimits

0x360f,	// (0x000054b3) grid_ai2_link_pane

0x3626,	// (0x000054ca) popup_ai2_link_window_g1_ParamLimits

0x3626,	// (0x000054ca) popup_ai2_link_window_g1

0x3632,	// (0x000054d6) popup_ai2_link_window_g2_ParamLimits

0x3632,	// (0x000054d6) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x0001185c) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x0001185c) popup_ai2_link_window_g

0x3641,	// (0x000054e5) ai2_mp_button_pane

0x3649,	// (0x000054ed) ai2_mp_volume_pane

0x1b92,	// (0x00003a36) bg_popup_sub_pane_cp5_ParamLimits

0x1b92,	// (0x00003a36) bg_popup_sub_pane_cp5

0x3651,	// (0x000054f5) heading_ai2_gene_pane_ParamLimits

0x3651,	// (0x000054f5) heading_ai2_gene_pane

0x365d,	// (0x00005501) list_ai2_gene_pane_ParamLimits

0x365d,	// (0x00005501) list_ai2_gene_pane

0x36a5,	// (0x00005549) cell_ai2_link_pane_ParamLimits

0x36a5,	// (0x00005549) cell_ai2_link_pane

0x36bb,	// (0x0000555f) cell_ai2_link_pane_g1

0xe8e9,	// (0x0001078d) grid_highlight_pane_cp7

0x378b,	// (0x0000562f) ai2_mp_volume_pane_g1

0x3793,	// (0x00005637) ai2_mp_volume_pane_g2

0x3700,	// (0x000055a4) list_ai2_gene_pane_t1

0x379b,	// (0x0000563f) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00011875) ai2_mp_volume_pane_g

0xc310,	// (0x0000e1b4) volume_small_pane_cp3

0x37ac,	// (0x00005650) aid_size_cell_ai2_button

0x37b4,	// (0x00005658) grid_ai2_button_pane

0x37bd,	// (0x00005661) cell_ai2_button_pane_ParamLimits

0x37bd,	// (0x00005661) cell_ai2_button_pane

0xe770,	// (0x00010614) cell_ai2_button_pane_g1

0xe8e9,	// (0x0001078d) grid_highlight_pane_cp8

0x374b,	// (0x000055ef) ai2_gene_pane_t1_ParamLimits

0x374b,	// (0x000055ef) ai2_gene_pane_t1

0xab45,	// (0x0000c9e9) aid_height_parent_landscape

0xbf62,	// (0x0000de06) aid_height_set_list

0x2f30,	// (0x00004dd4) aid_size_parent

0xc21d,	// (0x0000e0c1) aid_size_cell_graphic_pane_ParamLimits

0x366d,	// (0x00005511) popup_ai2_data_window_g1_ParamLimits

0x366d,	// (0x00005511) popup_ai2_data_window_g1

0x3679,	// (0x0000551d) ai2_news_ticker_pane_g1

0x3681,	// (0x00005525) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00011861) ai2_news_ticker_pane_g

0x3689,	// (0x0000552d) ai2_news_ticker_pane_t1

0x3697,	// (0x0000553b) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00011866) ai2_news_ticker_pane_t

0x36c4,	// (0x00005568) heading_ai2_gene_pane_g1

0x36cc,	// (0x00005570) heading_ai2_gene_pane_t1_ParamLimits

0x36cc,	// (0x00005570) heading_ai2_gene_pane_t1

0x36e1,	// (0x00005585) list_highlight_pane_cp6

0x36e9,	// (0x0000558d) ai2_gene_pane_ParamLimits

0x36e9,	// (0x0000558d) ai2_gene_pane

0x370e,	// (0x000055b2) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x0001186b) list_ai2_gene_pane_t

0x371c,	// (0x000055c0) list_highlight_pane_cp8_ParamLimits

0x371c,	// (0x000055c0) list_highlight_pane_cp8

0x372d,	// (0x000055d1) ai2_gene_pane_g1_ParamLimits

0x372d,	// (0x000055d1) ai2_gene_pane_g1

0x373f,	// (0x000055e3) ai2_gene_pane_g2_ParamLimits

0x373f,	// (0x000055e3) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00011870) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00011870) ai2_gene_pane_g

0xecd0,	// (0x00010b74) scroll_pane_cp12

0xab02,	// (0x0000c9a6) control_pane_t3_ParamLimits

0xab02,	// (0x0000c9a6) control_pane_t3

0xa968,	// (0x0000c80c) status_small_pane_g8_ParamLimits

0xa968,	// (0x0000c80c) status_small_pane_g8

0xacba,	// (0x0000cb5e) popup_find_window_ParamLimits

0xaf6d,	// (0x0000ce11) popup_note_image_window_ParamLimits

0x16de,	// (0x00003582) list_double2_graphic_pane_vc_g1_ParamLimits

0x16de,	// (0x00003582) list_double2_graphic_pane_vc_g1

0xece1,	// (0x00010b85) list_double2_graphic_pane_vc_g2_ParamLimits

0xece1,	// (0x00010b85) list_double2_graphic_pane_vc_g2

0xeced,	// (0x00010b91) list_double2_graphic_pane_vc_g3_ParamLimits

0xeced,	// (0x00010b91) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00011465) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00011465) list_double2_graphic_pane_vc_g

0x16ea,	// (0x0000358e) list_double2_graphic_pane_vc_t1_ParamLimits

0x16ea,	// (0x0000358e) list_double2_graphic_pane_vc_t1

0xece1,	// (0x00010b85) list_single_heading_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b85) list_single_heading_pane_vc_g1

0xeced,	// (0x00010b91) list_single_heading_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b91) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001146c) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001146c) list_single_heading_pane_vc_g

0x17e5,	// (0x00003689) list_single_heading_pane_vc_t1_ParamLimits

0x17e5,	// (0x00003689) list_single_heading_pane_vc_t1

0x17fb,	// (0x0000369f) list_single_heading_pane_vc_t2_ParamLimits

0x17fb,	// (0x0000369f) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x0001166d) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x0001166d) list_single_heading_pane_vc_t

0x1823,	// (0x000036c7) list_setting_number_pane_vc_g1_ParamLimits

0x1823,	// (0x000036c7) list_setting_number_pane_vc_g1

0x182f,	// (0x000036d3) list_setting_number_pane_vc_g2_ParamLimits

0x182f,	// (0x000036d3) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00011672) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00011672) list_setting_number_pane_vc_g

0x183b,	// (0x000036df) list_setting_number_pane_vc_t1_ParamLimits

0x183b,	// (0x000036df) list_setting_number_pane_vc_t1

0x184f,	// (0x000036f3) list_setting_number_pane_vc_t2_ParamLimits

0x184f,	// (0x000036f3) list_setting_number_pane_vc_t2

0x186b,	// (0x0000370f) list_setting_number_pane_vc_t3_ParamLimits

0x186b,	// (0x0000370f) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00011677) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00011677) list_setting_number_pane_vc_t

0x1897,	// (0x0000373b) set_value_pane_vc_ParamLimits

0x1897,	// (0x0000373b) set_value_pane_vc

0x3133,	// (0x00004fd7) list_double2_graphic_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double2_graphic_pane_vc

0x3133,	// (0x00004fd7) list_double2_large_graphic_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double2_large_graphic_pane_vc

0x3133,	// (0x00004fd7) list_double2_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double2_pane_vc

0x3133,	// (0x00004fd7) list_double_graphic_heading_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double_graphic_heading_pane_vc

0x3133,	// (0x00004fd7) list_double_graphic_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double_graphic_pane_vc

0x3133,	// (0x00004fd7) list_double_heading_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double_heading_pane_vc

0x3145,	// (0x00004fe9) list_double_large_graphic_pane_vc_ParamLimits

0x3145,	// (0x00004fe9) list_double_large_graphic_pane_vc

0x3133,	// (0x00004fd7) list_double_number_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double_number_pane_vc

0x3133,	// (0x00004fd7) list_double_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double_pane_vc

0x3133,	// (0x00004fd7) list_double_time_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_double_time_pane_vc

0x3133,	// (0x00004fd7) list_setting_number_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_setting_number_pane_vc

0x3133,	// (0x00004fd7) list_setting_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_setting_pane_vc

0x3133,	// (0x00004fd7) list_single_graphic_heading_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_single_graphic_heading_pane_vc

0x3133,	// (0x00004fd7) list_single_heading_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_single_heading_pane_vc

0x3133,	// (0x00004fd7) list_single_number_heading_pane_vc_ParamLimits

0x3133,	// (0x00004fd7) list_single_number_heading_pane_vc

0x37f1,	// (0x00005695) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x37f1,	// (0x00005695) list_double_graphic_heading_pane_vc_g1

0xece1,	// (0x00010b85) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xece1,	// (0x00010b85) list_double_graphic_heading_pane_vc_g2

0xeced,	// (0x00010b91) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeced,	// (0x00010b91) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x0001187c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x0001187c) list_double_graphic_heading_pane_vc_g

0x37fd,	// (0x000056a1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x37fd,	// (0x000056a1) list_double_graphic_heading_pane_vc_t1

0x3811,	// (0x000056b5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3811,	// (0x000056b5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00011883) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00011883) list_double_graphic_heading_pane_vc_t

0x1823,	// (0x000036c7) list_setting_pane_vc_g1_ParamLimits

0x1823,	// (0x000036c7) list_setting_pane_vc_g1

0x182f,	// (0x000036d3) list_setting_pane_vc_g2_ParamLimits

0x182f,	// (0x000036d3) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00011672) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00011672) list_setting_pane_vc_g

0x3a7a,	// (0x0000591e) list_setting_pane_vc_t1_ParamLimits

0x3a7a,	// (0x0000591e) list_setting_pane_vc_t1

0x3a96,	// (0x0000593a) list_setting_pane_vc_t2_ParamLimits

0x3a96,	// (0x0000593a) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x000118c6) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x000118c6) list_setting_pane_vc_t

0x1897,	// (0x0000373b) set_value_pane_cp_vc_ParamLimits

0x1897,	// (0x0000373b) set_value_pane_cp_vc

0xece1,	// (0x00010b85) list_single_number_heading_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b85) list_single_number_heading_pane_vc_g1

0xeced,	// (0x00010b91) list_single_number_heading_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b91) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001146c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001146c) list_single_number_heading_pane_vc_g

0x3ab0,	// (0x00005954) list_single_number_heading_pane_vc_t1_ParamLimits

0x3ab0,	// (0x00005954) list_single_number_heading_pane_vc_t1

0x3ac6,	// (0x0000596a) list_single_number_heading_pane_vc_t2_ParamLimits

0x3ac6,	// (0x0000596a) list_single_number_heading_pane_vc_t2

0x3ad8,	// (0x0000597c) list_single_number_heading_pane_vc_t3_ParamLimits

0x3ad8,	// (0x0000597c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x000118cb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x000118cb) list_single_number_heading_pane_vc_t

0x3aea,	// (0x0000598e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3aea,	// (0x0000598e) list_single_graphic_heading_pane_vc_g1

0xece1,	// (0x00010b85) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xece1,	// (0x00010b85) list_single_graphic_heading_pane_vc_g4

0xeced,	// (0x00010b91) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeced,	// (0x00010b91) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x000118d2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x000118d2) list_single_graphic_heading_pane_vc_g

0x3af6,	// (0x0000599a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3af6,	// (0x0000599a) list_single_graphic_heading_pane_vc_t1

0x3b0c,	// (0x000059b0) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3b0c,	// (0x000059b0) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x000118d9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x000118d9) list_single_graphic_heading_pane_vc_t

0xece1,	// (0x00010b85) list_double2_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b85) list_double2_pane_vc_g1

0xeced,	// (0x00010b91) list_double2_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b91) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001146c) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001146c) list_double2_pane_vc_g

0x3b1e,	// (0x000059c2) list_double2_pane_vc_t1_ParamLimits

0x3b1e,	// (0x000059c2) list_double2_pane_vc_t1

0x3b36,	// (0x000059da) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3b36,	// (0x000059da) list_double2_large_graphic_pane_vc_g1

0xece1,	// (0x00010b85) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xece1,	// (0x00010b85) list_double2_large_graphic_pane_vc_g2

0xeced,	// (0x00010b91) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeced,	// (0x00010b91) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00011489) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00011489) list_double2_large_graphic_pane_vc_g

0x16ea,	// (0x0000358e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x16ea,	// (0x0000358e) list_double2_large_graphic_pane_vc_t1

0x3b42,	// (0x000059e6) list_double_time_pane_vc_g1_ParamLimits

0x3b42,	// (0x000059e6) list_double_time_pane_vc_g1

0x3b4e,	// (0x000059f2) list_double_time_pane_vc_g2_ParamLimits

0x3b4e,	// (0x000059f2) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x000118de) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x000118de) list_double_time_pane_vc_g

0x3b5a,	// (0x000059fe) list_double_time_pane_vc_t1_ParamLimits

0x3b5a,	// (0x000059fe) list_double_time_pane_vc_t1

0x3b7e,	// (0x00005a22) list_double_time_pane_vc_t2_ParamLimits

0x3b7e,	// (0x00005a22) list_double_time_pane_vc_t2

0x3bad,	// (0x00005a51) list_double_time_pane_vc_t3_ParamLimits

0x3bad,	// (0x00005a51) list_double_time_pane_vc_t3

0x3bbf,	// (0x00005a63) list_double_time_pane_vc_t4_ParamLimits

0x3bbf,	// (0x00005a63) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x000118e3) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x000118e3) list_double_time_pane_vc_t

0xece1,	// (0x00010b85) list_double_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b85) list_double_pane_vc_g1

0xeced,	// (0x00010b91) list_double_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b91) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001146c) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001146c) list_double_pane_vc_g

0x3bd3,	// (0x00005a77) list_double_pane_vc_t1_ParamLimits

0x3bd3,	// (0x00005a77) list_double_pane_vc_t1

0x3be7,	// (0x00005a8b) list_double_pane_vc_t2_ParamLimits

0x3be7,	// (0x00005a8b) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x000118ec) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x000118ec) list_double_pane_vc_t

0xece1,	// (0x00010b85) list_double_number_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b85) list_double_number_pane_vc_g1

0xeced,	// (0x00010b91) list_double_number_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b91) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001146c) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001146c) list_double_number_pane_vc_g

0x3bff,	// (0x00005aa3) list_double_number_pane_vc_t1_ParamLimits

0x3bff,	// (0x00005aa3) list_double_number_pane_vc_t1

0x3bd3,	// (0x00005a77) list_double_number_pane_vc_t2_ParamLimits

0x3bd3,	// (0x00005a77) list_double_number_pane_vc_t2

0x3c11,	// (0x00005ab5) list_double_number_pane_vc_t3_ParamLimits

0x3c11,	// (0x00005ab5) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x000118f1) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x000118f1) list_double_number_pane_vc_t

0x3c29,	// (0x00005acd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3c29,	// (0x00005acd) list_double_large_graphic_pane_vc_g1

0x3c4b,	// (0x00005aef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3c4b,	// (0x00005aef) list_double_large_graphic_pane_vc_g2

0x3c5f,	// (0x00005b03) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3c5f,	// (0x00005b03) list_double_large_graphic_pane_vc_g3

0x3c6e,	// (0x00005b12) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3c6e,	// (0x00005b12) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x000118f8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x000118f8) list_double_large_graphic_pane_vc_g

0x3c7a,	// (0x00005b1e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3c7a,	// (0x00005b1e) list_double_large_graphic_pane_vc_t1

0x3c96,	// (0x00005b3a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3c96,	// (0x00005b3a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00011901) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00011901) list_double_large_graphic_pane_vc_t

0xece1,	// (0x00010b85) list_double_heading_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b85) list_double_heading_pane_vc_g1

0xeced,	// (0x00010b91) list_double_heading_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b91) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001146c) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001146c) list_double_heading_pane_vc_g

0x3cb8,	// (0x00005b5c) list_double_heading_pane_vc_t1_ParamLimits

0x3cb8,	// (0x00005b5c) list_double_heading_pane_vc_t1

0x3ccc,	// (0x00005b70) list_double_heading_pane_vc_t2_ParamLimits

0x3ccc,	// (0x00005b70) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00011906) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00011906) list_double_heading_pane_vc_t

0x3ce4,	// (0x00005b88) list_double_graphic_pane_vc_g1_ParamLimits

0x3ce4,	// (0x00005b88) list_double_graphic_pane_vc_g1

0x3cf7,	// (0x00005b9b) list_double_graphic_pane_vc_g2_ParamLimits

0x3cf7,	// (0x00005b9b) list_double_graphic_pane_vc_g2

0xece1,	// (0x00010b85) list_double_graphic_pane_vc_g3_ParamLimits

0xece1,	// (0x00010b85) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x0001190b) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0001190b) list_double_graphic_pane_vc_g

0x3d14,	// (0x00005bb8) list_double_graphic_pane_vc_t1_ParamLimits

0x3d14,	// (0x00005bb8) list_double_graphic_pane_vc_t1

0x3d33,	// (0x00005bd7) list_double_graphic_pane_vc_t2_ParamLimits

0x3d33,	// (0x00005bd7) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00011914) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00011914) list_double_graphic_pane_vc_t

0xe792,	// (0x00010636) aid_size_cell_fastswap

0x95e0,	// (0x0000b484) aid_size_cell_touch_ParamLimits

0x95e0,	// (0x0000b484) aid_size_cell_touch

0xe8f3,	// (0x00010797) popup_fast_swap_wide_window_ParamLimits

0xe8f3,	// (0x00010797) popup_fast_swap_wide_window

0x97b0,	// (0x0000b654) touch_pane_ParamLimits

0x97b0,	// (0x0000b654) touch_pane

0xed70,	// (0x00010c14) button_value_adjust_pane_cp2

0xed78,	// (0x00010c1c) button_value_adjust_pane_cp4

0xed80,	// (0x00010c24) form_field_data_pane_cp2

0xa1d9,	// (0x0000c07d) form_field_data_wide_pane_cp2

0xf29a,	// (0x0001113e) bg_scroll_pane_ParamLimits

0xa50f,	// (0x0000c3b3) scroll_handle_pane_ParamLimits

0xf2b9,	// (0x0001115d) scroll_sc2_down_pane_ParamLimits

0xf2b9,	// (0x0001115d) scroll_sc2_down_pane

0xf2e0,	// (0x00011184) scroll_sc2_up_pane_ParamLimits

0xf2e0,	// (0x00011184) scroll_sc2_up_pane

0xc43c,	// (0x0000e2e0) grid_wheel_folder_pane_g1_ParamLimits

0xc43c,	// (0x0000e2e0) grid_wheel_folder_pane_g1

0x02d1,	// (0x00002175) clock_nsta_pane_cp2_ParamLimits

0x02d1,	// (0x00002175) clock_nsta_pane_cp2

0xa82e,	// (0x0000c6d2) listscroll_midp_pane_ParamLimits

0xa83a,	// (0x0000c6de) midp_canvas_pane

0x0b6f,	// (0x00002a13) nsta_clock_indic_pane

0x0bd2,	// (0x00002a76) listscroll_form_pane_vc

0x0bf6,	// (0x00002a9a) listscroll_set_pane_vc_ParamLimits

0x0bf6,	// (0x00002a9a) listscroll_set_pane_vc

0xb422,	// (0x0000d2c6) clock_nsta_pane

0xb44c,	// (0x0000d2f0) indicator_nsta_pane

0x1648,	// (0x000034ec) bg_popup_sub_pane_cp2_ParamLimits

0x165c,	// (0x00003500) find_pane_cp2_ParamLimits

0x165c,	// (0x00003500) find_pane_cp2

0x1672,	// (0x00003516) grid_toobar_pane_ParamLimits

0x18a7,	// (0x0000374b) list_form_gen_pane_vc_ParamLimits

0x18a7,	// (0x0000374b) list_form_gen_pane_vc

0x18bd,	// (0x00003761) scroll_pane_cp8_vc_ParamLimits

0x18bd,	// (0x00003761) scroll_pane_cp8_vc

0x19d6,	// (0x0000387a) data_form_wide_pane_vc_ParamLimits

0x19d6,	// (0x0000387a) data_form_wide_pane_vc

0x19e2,	// (0x00003886) form_field_data_wide_pane_vc_g1

0x19ea,	// (0x0000388e) form_field_data_wide_pane_vc_t1_ParamLimits

0x19ea,	// (0x0000388e) form_field_data_wide_pane_vc_t1

0xeda7,	// (0x00010c4b) input_focus_pane_cp6_vc_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_cp6_vc

0x1d78,	// (0x00003c1c) list_midp_pane_ParamLimits

0x3398,	// (0x0000523c) scroll_pane_cp16_ParamLimits

0x3398,	// (0x0000523c) scroll_pane_cp16

0x1dba,	// (0x00003c5e) button_value_adjust_pane_ParamLimits

0x1dba,	// (0x00003c5e) button_value_adjust_pane

0xbf73,	// (0x0000de17) button_value_adjust_pane_cp6_ParamLimits

0xbf73,	// (0x0000de17) button_value_adjust_pane_cp6

0xc08d,	// (0x0000df31) settings_code_pane_cp_ParamLimits

0xc08d,	// (0x0000df31) settings_code_pane_cp

0xe770,	// (0x00010614) cell_touch_pane_g1

0xe770,	// (0x00010614) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00011598) cell_touch_pane_g

0xc319,	// (0x0000e1bd) cell_touch_pane_cp_ParamLimits

0xc319,	// (0x0000e1bd) cell_touch_pane_cp

0xc335,	// (0x0000e1d9) cell_touch_pane_ParamLimits

0xc335,	// (0x0000e1d9) cell_touch_pane

0xe770,	// (0x00010614) scroll_sc2_down_pane_g1

0xe770,	// (0x00010614) scroll_sc2_up_pane_g1

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp4_vc

0x3829,	// (0x000056cd) list_set_graphic_pane_vc_g1_ParamLimits

0x3829,	// (0x000056cd) list_set_graphic_pane_vc_g1

0x3835,	// (0x000056d9) list_set_graphic_pane_vc_g2_ParamLimits

0x3835,	// (0x000056d9) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00011888) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00011888) list_set_graphic_pane_vc_g

0x3841,	// (0x000056e5) text_primary_small_cp13_vc_ParamLimits

0x3841,	// (0x000056e5) text_primary_small_cp13_vc

0x3859,	// (0x000056fd) list_set_graphic_pane_vc_ParamLimits

0x3859,	// (0x000056fd) list_set_graphic_pane_vc

0xe8e9,	// (0x0001078d) input_focus_pane_cp2_vc

0xe770,	// (0x00010614) setting_code_pane_vc_g1

0xe97c,	// (0x00010820) setting_code_pane_vc_t1

0x386c,	// (0x00005710) set_text_pane_vc_t1_ParamLimits

0x386c,	// (0x00005710) set_text_pane_vc_t1

0xe8e9,	// (0x0001078d) input_focus_pane_cp1_vc

0x3888,	// (0x0000572c) list_set_text_pane_vc

0xe770,	// (0x00010614) setting_text_pane_vc_g1

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp2_vc

0xe973,	// (0x00010817) setting_slider_graphic_pane_vc_g1

0x3892,	// (0x00005736) setting_slider_graphic_pane_vc_t1

0x38a2,	// (0x00005746) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x0001188d) setting_slider_graphic_pane_vc_t

0x38b2,	// (0x00005756) slider_set_pane_cp_vc

0x38ba,	// (0x0000575e) slider_set_pane_vc_g1

0x38c3,	// (0x00005767) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00011892) slider_set_pane_vc_g

0xee61,	// (0x00010d05) set_opt_bg_pane_g1_copy1

0xee69,	// (0x00010d0d) set_opt_bg_pane_g2_copy1

0x38ef,	// (0x00005793) set_opt_bg_pane_g3_copy1

0xee79,	// (0x00010d1d) set_opt_bg_pane_g4_copy1

0xee81,	// (0x00010d25) set_opt_bg_pane_g5_copy1

0xee89,	// (0x00010d2d) set_opt_bg_pane_g6_copy1

0x38f7,	// (0x0000579b) set_opt_bg_pane_g7_copy1

0x38ff,	// (0x000057a3) set_opt_bg_pane_g8_copy1

0x3907,	// (0x000057ab) set_opt_bg_pane_g9_copy1

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp_vc

0x390f,	// (0x000057b3) setting_slider_pane_vc_t1

0x391e,	// (0x000057c2) setting_slider_pane_vc_t2

0x392e,	// (0x000057d2) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x000118a1) setting_slider_pane_vc_t

0x393e,	// (0x000057e2) slider_set_pane_vc

0x25db,	// (0x0000447f) volume_set_pane_vc_g1

0x3946,	// (0x000057ea) volume_set_pane_vc_g2

0x394f,	// (0x000057f3) volume_set_pane_vc_g3

0x3958,	// (0x000057fc) volume_set_pane_vc_g4

0x3961,	// (0x00005805) volume_set_pane_vc_g5

0x396a,	// (0x0000580e) volume_set_pane_vc_g6

0x3973,	// (0x00005817) volume_set_pane_vc_g7

0x397c,	// (0x00005820) volume_set_pane_vc_g8

0x3985,	// (0x00005829) volume_set_pane_vc_g9

0x398e,	// (0x00005832) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x000118a8) volume_set_pane_vc_g

0x3997,	// (0x0000583b) volume_set_pane_vc

0x399f,	// (0x00005843) button_value_adjust_pane_cp1_vc

0x39a9,	// (0x0000584d) list_highlight_pane_cp2_vc

0x39b2,	// (0x00005856) list_set_pane_vc_ParamLimits

0x39b2,	// (0x00005856) list_set_pane_vc

0x3a10,	// (0x000058b4) main_pane_set_vc_t1_ParamLimits

0x3a10,	// (0x000058b4) main_pane_set_vc_t1

0x3a25,	// (0x000058c9) main_pane_set_vc_t2_ParamLimits

0x3a25,	// (0x000058c9) main_pane_set_vc_t2

0x3a37,	// (0x000058db) main_pane_set_vc_t3_ParamLimits

0x3a37,	// (0x000058db) main_pane_set_vc_t3

0x3a49,	// (0x000058ed) main_pane_set_vc_t4_ParamLimits

0x3a49,	// (0x000058ed) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x000118bd) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x000118bd) main_pane_set_vc_t

0x3a5b,	// (0x000058ff) setting_code_pane_vc_ParamLimits

0x3a5b,	// (0x000058ff) setting_code_pane_vc

0x3a6a,	// (0x0000590e) setting_slider_graphic_pane_vc

0x3a6a,	// (0x0000590e) setting_slider_pane_vc

0x3a6a,	// (0x0000590e) setting_text_pane_vc

0x3a6a,	// (0x0000590e) setting_volume_pane_vc

0x3a72,	// (0x00005916) scroll_pane_cp121_vc

0xed5e,	// (0x00010c02) set_content_pane_vc

0x3d5d,	// (0x00005c01) button_value_adjust_pane_g1

0x3d66,	// (0x00005c0a) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00011919) button_value_adjust_pane_g

0x3d6f,	// (0x00005c13) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d6f,	// (0x00005c13) form_field_slider_wide_pane_vc_t1

0x3d83,	// (0x00005c27) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d83,	// (0x00005c27) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x0001191e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001191e) form_field_slider_wide_pane_vc_t

0xe957,	// (0x000107fb) input_focus_pane_cp10_vc_ParamLimits

0xe957,	// (0x000107fb) input_focus_pane_cp10_vc

0x3db1,	// (0x00005c55) slider_cont_pane_cp1_vc_ParamLimits

0x3db1,	// (0x00005c55) slider_cont_pane_cp1_vc

0x3dc3,	// (0x00005c67) slider_form_pane_g1_cp2

0x38c3,	// (0x00005767) slider_form_pane_g2_cp2

0x3df0,	// (0x00005c94) form_field_slider_pane_vc_t3

0x3dfe,	// (0x00005ca2) form_field_slider_pane_vc_t4

0x3e0c,	// (0x00005cb0) slider_form_pane_vc_ParamLimits

0x3e0c,	// (0x00005cb0) slider_form_pane_vc

0x3e19,	// (0x00005cbd) form_field_slider_pane_vc_t1_ParamLimits

0x3e19,	// (0x00005cbd) form_field_slider_pane_vc_t1

0x3d83,	// (0x00005c27) form_field_slider_pane_vc_t2_ParamLimits

0x3d83,	// (0x00005c27) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00011930) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00011930) form_field_slider_pane_vc_t

0xe957,	// (0x000107fb) input_focus_pane_cp9_vc_ParamLimits

0xe957,	// (0x000107fb) input_focus_pane_cp9_vc

0x3e35,	// (0x00005cd9) slider_cont_pane_vc_ParamLimits

0x3e35,	// (0x00005cd9) slider_cont_pane_vc

0x3e49,	// (0x00005ced) list_form_graphic_pane_cp_vc_ParamLimits

0x3e49,	// (0x00005ced) list_form_graphic_pane_cp_vc

0x19e2,	// (0x00003886) form_field_popup_wide_pane_vc_g1

0x3e5e,	// (0x00005d02) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e5e,	// (0x00005d02) form_field_popup_wide_pane_vc_t1

0xeda7,	// (0x00010c4b) input_focus_pane_cp8_vc_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_cp8_vc

0x3ea3,	// (0x00005d47) list_form_wide_pane_vc_ParamLimits

0x3ea3,	// (0x00005d47) list_form_wide_pane_vc

0x3eaf,	// (0x00005d53) list_form_graphic_pane_vc_g1

0x3eb7,	// (0x00005d5b) list_form_graphic_pane_vc_t1_ParamLimits

0x3eb7,	// (0x00005d5b) list_form_graphic_pane_vc_t1

0xe965,	// (0x00010809) list_highlight_pane_cp5_vc_ParamLimits

0xe965,	// (0x00010809) list_highlight_pane_cp5_vc

0x3ed3,	// (0x00005d77) list_form_graphic_pane_vc_ParamLimits

0x3ed3,	// (0x00005d77) list_form_graphic_pane_vc

0x19e2,	// (0x00003886) form_field_popup_pane_vc_g1

0x3ee9,	// (0x00005d8d) form_field_popup_pane_vc_t1_ParamLimits

0x3ee9,	// (0x00005d8d) form_field_popup_pane_vc_t1

0xeda7,	// (0x00010c4b) input_focus_pane_cp7_vc_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_cp7_vc

0x3f00,	// (0x00005da4) list_form_pane_vc_ParamLimits

0x3f00,	// (0x00005da4) list_form_pane_vc

0x3f0c,	// (0x00005db0) data_form_pane_vc_t1_ParamLimits

0x3f0c,	// (0x00005db0) data_form_pane_vc_t1

0xee61,	// (0x00010d05) input_focus_pane_vc_g1

0xee69,	// (0x00010d0d) input_focus_pane_vc_g2

0xee71,	// (0x00010d15) input_focus_pane_vc_g3

0xee79,	// (0x00010d1d) input_focus_pane_vc_g4

0xee81,	// (0x00010d25) input_focus_pane_vc_g5

0xee89,	// (0x00010d2d) input_focus_pane_vc_g6

0xee91,	// (0x00010d35) input_focus_pane_vc_g7

0xee99,	// (0x00010d3d) input_focus_pane_vc_g8

0xeea1,	// (0x00010d45) input_focus_pane_vc_g9

0xe770,	// (0x00010614) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00011521) input_focus_pane_vc_g

0x19d6,	// (0x0000387a) data_form_pane_vc_ParamLimits

0x19d6,	// (0x0000387a) data_form_pane_vc

0x19e2,	// (0x00003886) form_field_data_pane_vc_g1

0x3f27,	// (0x00005dcb) form_field_data_pane_vc_t1_ParamLimits

0x3f27,	// (0x00005dcb) form_field_data_pane_vc_t1

0xeda7,	// (0x00010c4b) input_focus_pane_vc_ParamLimits

0xeda7,	// (0x00010c4b) input_focus_pane_vc

0x3f41,	// (0x00005de5) button_value_adjust_pane_cp3_vc

0x3f49,	// (0x00005ded) button_value_adjust_pane_cp5_vc

0x3f51,	// (0x00005df5) form_field_data_pane_vc_ParamLimits

0x3f51,	// (0x00005df5) form_field_data_pane_vc

0x3f68,	// (0x00005e0c) form_field_data_pane_vc_cp2

0x3f70,	// (0x00005e14) form_field_data_wide_pane_vc_ParamLimits

0x3f70,	// (0x00005e14) form_field_data_wide_pane_vc

0x3f86,	// (0x00005e2a) form_field_data_wide_pane_vc_cp2

0x3f8e,	// (0x00005e32) form_field_popup_pane_vc_ParamLimits

0x3f8e,	// (0x00005e32) form_field_popup_pane_vc

0x3fa5,	// (0x00005e49) form_field_popup_wide_pane_vc_ParamLimits

0x3fa5,	// (0x00005e49) form_field_popup_wide_pane_vc

0x3fbb,	// (0x00005e5f) form_field_slider_pane_vc_ParamLimits

0x3fbb,	// (0x00005e5f) form_field_slider_pane_vc

0x3fce,	// (0x00005e72) form_field_slider_wide_pane_vc_ParamLimits

0x3fce,	// (0x00005e72) form_field_slider_wide_pane_vc

0xc352,	// (0x0000e1f6) grid_touch_1_pane_ParamLimits

0xc352,	// (0x0000e1f6) grid_touch_1_pane

0xc366,	// (0x0000e20a) grid_touch_2_pane_ParamLimits

0xc366,	// (0x0000e20a) grid_touch_2_pane

0x409c,	// (0x00005f40) touch_pane_g1_ParamLimits

0x409c,	// (0x00005f40) touch_pane_g1

0x4005,	// (0x00005ea9) cell_app_pane_cp_wide_ParamLimits

0x4005,	// (0x00005ea9) cell_app_pane_cp_wide

0x4016,	// (0x00005eba) grid_popup_fast_wide_pane_ParamLimits

0x4016,	// (0x00005eba) grid_popup_fast_wide_pane

0x402a,	// (0x00005ece) scroll_pane_cp19_ParamLimits

0x402a,	// (0x00005ece) scroll_pane_cp19

0xe8e9,	// (0x0001078d) bg_popup_window_pane_cp20

0x403e,	// (0x00005ee2) listscroll_popup_fast_wide_pane

0xef44,	// (0x00010de8) grid_indicator_nsta_pane

0x4046,	// (0x00005eea) clock_nsta_pane_g1

0x404f,	// (0x00005ef3) clock_nsta_pane_t1

0xc390,	// (0x0000e234) cell_indicator_nsta_pane_ParamLimits

0xc390,	// (0x0000e234) cell_indicator_nsta_pane

0x409c,	// (0x00005f40) cell_indicator_nsta_pane_g1

0xc3a7,	// (0x0000e24b) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00011941) cell_indicator_nsta_pane_g

0x40b7,	// (0x00005f5b) clock_nsta_pane_cp

0x40bf,	// (0x00005f63) indicator_nsta_pane_cp

0x40c7,	// (0x00005f6b) nsta_clock_indic_pane_g1

0xe9bb,	// (0x0001085f) grid_indicator_pane

0xa5a9,	// (0x0000c44d) scroll_pane_cp29

0x01fe,	// (0x000020a2) indicator_nsta_pane_cp2_ParamLimits

0x01fe,	// (0x000020a2) indicator_nsta_pane_cp2

0xe965,	// (0x00010809) main_apps_wheel_pane

0xb8d3,	// (0x0000d777) form_midp_field_text_pane_ParamLimits

0x1d84,	// (0x00003c28) scroll_bar_cp050_ParamLimits

0x4117,	// (0x00005fbb) cell_indicator_pane_ParamLimits

0x4117,	// (0x00005fbb) cell_indicator_pane

0x4130,	// (0x00005fd4) cell_indicator_pane_g1

0xc3c6,	// (0x0000e26a) grid_wheel_folder_pane_ParamLimits

0xc3c6,	// (0x0000e26a) grid_wheel_folder_pane

0xc3d4,	// (0x0000e278) list_wheel_apps_pane_ParamLimits

0xc3d4,	// (0x0000e278) list_wheel_apps_pane

0xc3e2,	// (0x0000e286) main_apps_wheel_pane_g1_ParamLimits

0xc3e2,	// (0x0000e286) main_apps_wheel_pane_g1

0xc3ee,	// (0x0000e292) main_apps_wheel_pane_g2_ParamLimits

0xc3ee,	// (0x0000e292) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x0001195d) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x0001195d) main_apps_wheel_pane_g

0xc3fc,	// (0x0000e2a0) main_apps_wheel_pane_t1_ParamLimits

0xc3fc,	// (0x0000e2a0) main_apps_wheel_pane_t1

0xc410,	// (0x0000e2b4) list_wheel_apps_pane_g1

0xc418,	// (0x0000e2bc) list_wheel_apps_pane_g2

0xc420,	// (0x0000e2c4) list_wheel_apps_pane_g3

0xc428,	// (0x0000e2cc) list_wheel_apps_pane_g4

0xc432,	// (0x0000e2d6) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00011962) list_wheel_apps_pane_g

0x04fa,	// (0x0000239e) navi_icon_text_pane

0xb316,	// (0x0000d1ba) aid_fill_nsta

0x41f7,	// (0x0000609b) navi_icon_text_pane_g1

0x4203,	// (0x000060a7) navi_icon_text_pane_t1

0x039d,	// (0x00002241) list_set_graphic_pane_t1_ParamLimits

0x039d,	// (0x00002241) list_set_graphic_pane_t1

0x24bb,	// (0x0000435f) popup_midp_note_alarm_window_t6_ParamLimits

0x24bb,	// (0x0000435f) popup_midp_note_alarm_window_t6

0x24cd,	// (0x00004371) popup_midp_note_alarm_window_t7_ParamLimits

0x24cd,	// (0x00004371) popup_midp_note_alarm_window_t7

0x24df,	// (0x00004383) popup_midp_note_alarm_window_t8_ParamLimits

0x24df,	// (0x00004383) popup_midp_note_alarm_window_t8

0x24f1,	// (0x00004395) popup_midp_note_alarm_window_t9_ParamLimits

0x24f1,	// (0x00004395) popup_midp_note_alarm_window_t9

0x2503,	// (0x000043a7) popup_midp_note_alarm_window_t10_ParamLimits

0x2503,	// (0x000043a7) popup_midp_note_alarm_window_t10

0x2515,	// (0x000043b9) popup_midp_note_alarm_window_t11_ParamLimits

0x2515,	// (0x000043b9) popup_midp_note_alarm_window_t11

0xbc1f,	// (0x0000dac3) scroll_pane_cp17_ParamLimits

0xbc1f,	// (0x0000dac3) scroll_pane_cp17

0x25db,	// (0x0000447f) volume_small_pane_cp_g1

0x4215,	// (0x000060b9) volume_small_pane_cp_g2

0x421e,	// (0x000060c2) volume_small_pane_cp_g3

0x4227,	// (0x000060cb) volume_small_pane_cp_g4

0x4230,	// (0x000060d4) volume_small_pane_cp_g5

0x3961,	// (0x00005805) volume_small_pane_cp_g6

0x4239,	// (0x000060dd) volume_small_pane_cp_g7

0x4242,	// (0x000060e6) volume_small_pane_cp_g8

0x424b,	// (0x000060ef) volume_small_pane_cp_g9

0x4254,	// (0x000060f8) volume_small_pane_cp_g10

0x075b,	// (0x000025ff) midp_ticker_pane_g1_ParamLimits

0x0767,	// (0x0000260b) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x000115ed) midp_ticker_pane_g_ParamLimits

0x0773,	// (0x00002617) midp_ticker_pane_t1_ParamLimits

0xb33a,	// (0x0000d1de) aid_fill_nsta_2

0x1d70,	// (0x00003c14) list_form2_midp_pane

0x30e6,	// (0x00004f8a) midp_editing_number_pane_ParamLimits

0x30f5,	// (0x00004f99) midp_ticker_pane_ParamLimits

0x425d,	// (0x00006101) form2_midp_field_pane

0x4281,	// (0x00006125) scroll_pane_cp51

0x42a1,	// (0x00006145) form2_midp_button_pane_ParamLimits

0x42a1,	// (0x00006145) form2_midp_button_pane

0x42b3,	// (0x00006157) form2_midp_content_pane_ParamLimits

0x42b3,	// (0x00006157) form2_midp_content_pane

0x42cd,	// (0x00006171) form2_midp_field_choice_group_pane

0x42d5,	// (0x00006179) form2_midp_field_pane_g1

0x42dd,	// (0x00006181) form2_midp_field_pane_g2

0x42e5,	// (0x00006189) form2_midp_field_pane_g3

0x42ed,	// (0x00006191) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00011987) form2_midp_field_pane_g

0x42f5,	// (0x00006199) form2_midp_gauge_slider_pane

0x42fd,	// (0x000061a1) form2_midp_gauge_wait_pane

0x4305,	// (0x000061a9) form2_midp_image_pane_ParamLimits

0x4305,	// (0x000061a9) form2_midp_image_pane

0xc465,	// (0x0000e309) form2_midp_label_pane_ParamLimits

0xc465,	// (0x0000e309) form2_midp_label_pane

0xc47e,	// (0x0000e322) form2_midp_label_pane_cp_ParamLimits

0xc47e,	// (0x0000e322) form2_midp_label_pane_cp

0x435a,	// (0x000061fe) form2_midp_string_pane_ParamLimits

0x435a,	// (0x000061fe) form2_midp_string_pane

0xc49d,	// (0x0000e341) form2_midp_text_pane_ParamLimits

0xc49d,	// (0x0000e341) form2_midp_text_pane

0x4387,	// (0x0000622b) form2_midp_time_pane

0x4397,	// (0x0000623b) input_focus_pane_cp51_ParamLimits

0x4397,	// (0x0000623b) input_focus_pane_cp51

0xc4b6,	// (0x0000e35a) form2_midp_label_pane_t1_ParamLimits

0xc4b6,	// (0x0000e35a) form2_midp_label_pane_t1

0xc4f6,	// (0x0000e39a) form2_mdip_text_pane_t1_ParamLimits

0xc4f6,	// (0x0000e39a) form2_mdip_text_pane_t1

0x440f,	// (0x000062b3) form2_midp_time_pane_t1

0x442a,	// (0x000062ce) form2_midp_gauge_slider_pane_t1

0xc512,	// (0x0000e3b6) form2_midp_gauge_slider_pane_t2

0xc524,	// (0x0000e3c8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00011990) form2_midp_gauge_slider_pane_t

0x4460,	// (0x00006304) form2_midp_slider_pane

0x446c,	// (0x00006310) form2_midp_gauge_wait_pane_t1

0x447a,	// (0x0000631e) form2_midp_wait_pane_ParamLimits

0x447a,	// (0x0000631e) form2_midp_wait_pane

0xc536,	// (0x0000e3da) list_single_2graphic_pane_cp4_ParamLimits

0xc536,	// (0x0000e3da) list_single_2graphic_pane_cp4

0xb813,	// (0x0000d6b7) list_single_midp_graphic_pane_cp_ParamLimits

0xb813,	// (0x0000d6b7) list_single_midp_graphic_pane_cp

0xe8e9,	// (0x0001078d) list_highlight_pane_cp20

0x44cd,	// (0x00006371) list_single_2graphic_pane_g1_cp4

0x36c4,	// (0x00005568) list_single_2graphic_pane_g2_cp4

0x44d5,	// (0x00006379) list_single_2graphic_pane_t1_cp4

0xe965,	// (0x00010809) list_highlight_pane_cp21

0x44e4,	// (0x00006388) list_single_midp_graphic_pane_g4_cp

0x44f3,	// (0x00006397) list_single_midp_graphic_pane_t1_cp

0xc54b,	// (0x0000e3ef) form2_mdip_string_pane_t1_ParamLimits

0xc54b,	// (0x0000e3ef) form2_mdip_string_pane_t1

0xe8e9,	// (0x0001078d) bg_wml_button_pane_cp2

0xe770,	// (0x00010614) form2_midp_image_pane_g1

0xecf9,	// (0x00010b9d) list_double_large_graphic_pane_g5_ParamLimits

0xecf9,	// (0x00010b9d) list_double_large_graphic_pane_g5

0xa82e,	// (0x0000c6d2) midp_form_pane_ParamLimits

0xe965,	// (0x00010809) main_apps_wheel_pane_ParamLimits

0xaff4,	// (0x0000ce98) popup_preview_window_ParamLimits

0xaff4,	// (0x0000ce98) popup_preview_window

0xb2c1,	// (0x0000d165) popup_touch_info_window_ParamLimits

0xb2c1,	// (0x0000d165) popup_touch_info_window

0xb2df,	// (0x0000d183) popup_touch_menu_window_ParamLimits

0xb2df,	// (0x0000d183) popup_touch_menu_window

0xe766,	// (0x0001060a) bg_popup_sub_pane_cp6

0x460f,	// (0x000064b3) list_touch_menu_pane

0xc5c1,	// (0x0000e465) list_single_touch_menu_pane_ParamLimits

0xc5c1,	// (0x0000e465) list_single_touch_menu_pane

0xc5d5,	// (0x0000e479) list_single_touch_menu_pane_t1

0xe965,	// (0x00010809) bg_popup_sub_pane_cp7_ParamLimits

0xe965,	// (0x00010809) bg_popup_sub_pane_cp7

0x463b,	// (0x000064df) heading_sub_pane

0x4643,	// (0x000064e7) list_touch_info_pane_ParamLimits

0x4643,	// (0x000064e7) list_touch_info_pane

0x4652,	// (0x000064f6) list_single_touch_info_pane_ParamLimits

0x4652,	// (0x000064f6) list_single_touch_info_pane

0x4664,	// (0x00006508) list_single_touch_info_pane_t1

0x4672,	// (0x00006516) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x0001199e) list_single_touch_info_pane_t

0x067a,	// (0x0000251e) bg_popup_heading_pane_cp

0x4680,	// (0x00006524) heading_sub_pane_t1

0x18e8,	// (0x0000378c) bg_popup_preview_window_pane_cp_ParamLimits

0x18e8,	// (0x0000378c) bg_popup_preview_window_pane_cp

0x463b,	// (0x000064df) heading_preview_pane

0x4643,	// (0x000064e7) list_preview_pane_ParamLimits

0x4643,	// (0x000064e7) list_preview_pane

0x468e,	// (0x00006532) popup_preview_window_g1

0x4652,	// (0x000064f6) list_single_preview_pane_ParamLimits

0x4652,	// (0x000064f6) list_single_preview_pane

0x4696,	// (0x0000653a) list_single_preview_pane_g1

0x469e,	// (0x00006542) list_single_preview_pane_t1

0x4664,	// (0x00006508) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x000119a3) list_single_preview_pane_t

0x46ac,	// (0x00006550) bg_popup_heading_pane_cp2_ParamLimits

0x46ac,	// (0x00006550) bg_popup_heading_pane_cp2

0x46c2,	// (0x00006566) heading_preview_pane_g1

0x46ca,	// (0x0000656e) heading_preview_pane_t1_ParamLimits

0x46ca,	// (0x0000656e) heading_preview_pane_t1

0xe9d2,	// (0x00010876) soft_indicator_pane_t1_ParamLimits

0xecad,	// (0x00010b51) scroll_pane_ParamLimits

0xf2ce,	// (0x00011172) scroll_sc2_left_pane

0xf2d7,	// (0x0001117b) scroll_sc2_right_pane

0xf2f6,	// (0x0001119a) scroll_bg_pane_g1_ParamLimits

0xf30b,	// (0x000111af) scroll_bg_pane_g2_ParamLimits

0xf323,	// (0x000111c7) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00011578) scroll_bg_pane_g_ParamLimits

0xf2f6,	// (0x0001119a) scroll_handle_pane_g1_ParamLimits

0xf338,	// (0x000111dc) scroll_handle_pane_g2_ParamLimits

0xf323,	// (0x000111c7) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x0001157f) scroll_handle_pane_g_ParamLimits

0xab9b,	// (0x0000ca3f) popup_choice_list_window_ParamLimits

0xab9b,	// (0x0000ca3f) popup_choice_list_window

0x1654,	// (0x000034f8) choice_list_pane

0x1728,	// (0x000035cc) cell_toolbar_pane_t1

0x1750,	// (0x000035f4) toolbar_button_pane_ParamLimits

0x2b4b,	// (0x000049ef) ai_gene_pane_1_t2_ParamLimits

0x2b4b,	// (0x000049ef) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x0001179b) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x0001179b) ai_gene_pane_1_t

0x46e7,	// (0x0000658b) scroll_sc2_left_pane_g1

0x46e7,	// (0x0000658b) scroll_sc2_right_pane_g1

0x0c08,	// (0x00002aac) bg_popup_sub_pane_cp10

0x46f1,	// (0x00006595) list_choice_list_pane

0xc5e3,	// (0x0000e487) list_single_choice_list_pane_ParamLimits

0xc5e3,	// (0x0000e487) list_single_choice_list_pane

0xef52,	// (0x00010df6) list_single_choice_list_pane_g1

0xa3d3,	// (0x0000c277) list_single_choice_list_pane_t1_ParamLimits

0xa3d3,	// (0x0000c277) list_single_choice_list_pane_t1

0x4725,	// (0x000065c9) choice_list_pane_g1

0xc5f7,	// (0x0000e49b) choice_list_pane_t1

0xe766,	// (0x0001060a) input_focus_pane_cp11

0xf0e9,	// (0x00010f8d) title_pane_stacon_g2_ParamLimits

0xf0e9,	// (0x00010f8d) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x0001155e) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0001155e) title_pane_stacon_g

0x067a,	// (0x0000251e) cursor_press_pane

0xac42,	// (0x0000cae6) popup_fep_hwr_window_ParamLimits

0xac42,	// (0x0000cae6) popup_fep_hwr_window

0x0d58,	// (0x00002bfc) popup_fep_vkb_window_ParamLimits

0x0d58,	// (0x00002bfc) popup_fep_vkb_window

0xc605,	// (0x0000e4a9) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x000119cc) fep_vkb_side_pane_g_ParamLimits

0x477c,	// (0x00006620) fep_hwr_candidate_pane_ParamLimits

0x477c,	// (0x00006620) fep_hwr_candidate_pane

0x47a6,	// (0x0000664a) fep_hwr_side_pane_ParamLimits

0x47a6,	// (0x0000664a) fep_hwr_side_pane

0x47c6,	// (0x0000666a) fep_hwr_top_pane_ParamLimits

0x47c6,	// (0x0000666a) fep_hwr_top_pane

0x47de,	// (0x00006682) fep_hwr_write_pane_ParamLimits

0x47de,	// (0x00006682) fep_hwr_write_pane

0xfb28,	// (0x000119cc) fep_vkb_side_pane_g

0x4818,	// (0x000066bc) fep_hwr_top_pane_g1

0x482a,	// (0x000066ce) fep_hwr_top_pane_g2

0x483c,	// (0x000066e0) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x000119a8) fep_hwr_top_pane_g

0x4851,	// (0x000066f5) fep_hwr_top_text_pane

0xf403,	// (0x000112a7) fep_hwr_top_text_pane_g1

0x4929,	// (0x000067cd) fep_hwr_top_text_pane_t1

0x4979,	// (0x0000681d) fep_hwr_candidate_pane_g1

0x4be4,	// (0x00006a88) fep_vkb_keypad_pane_g3_ParamLimits

0x4be4,	// (0x00006a88) fep_vkb_keypad_pane_g3

0x4c0c,	// (0x00006ab0) fep_vkb_keypad_pane_g4_ParamLimits

0x4c0c,	// (0x00006ab0) fep_vkb_keypad_pane_g4

0x4c7b,	// (0x00006b1f) fep_vkb_bottom_pane_g2_ParamLimits

0x4c7b,	// (0x00006b1f) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x000119d3) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x000119d3) fep_vkb_bottom_pane_g

0x46e7,	// (0x0000658b) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x000119dd) cell_vkb_side_pane_g

0x4d06,	// (0x00006baa) cell_vkb_side_pane_t1

0x4d14,	// (0x00006bb8) cell_vkb_side_pane_t1_copy1

0x46e7,	// (0x0000658b) bg_fep_vkb_candidate_pane_g2

0x4e40,	// (0x00006ce4) cell_vkb_candidate_pane_ParamLimits

0x49ad,	// (0x00006851) aid_size_cell_vkb_ParamLimits

0x49ad,	// (0x00006851) aid_size_cell_vkb

0x4e40,	// (0x00006ce4) cell_vkb_candidate_pane

0x4e74,	// (0x00006d18) bg_popup_fep_shadow_pane_g1

0xc66c,	// (0x0000e510) fep_vkb_bottom_pane_ParamLimits

0xc66c,	// (0x0000e510) fep_vkb_bottom_pane

0x4a71,	// (0x00006915) fep_vkb_candidate_pane_ParamLimits

0x4a71,	// (0x00006915) fep_vkb_candidate_pane

0xc691,	// (0x0000e535) fep_vkb_keypad_pane_ParamLimits

0xc691,	// (0x0000e535) fep_vkb_keypad_pane

0xc6c6,	// (0x0000e56a) fep_vkb_side_pane_ParamLimits

0xc6c6,	// (0x0000e56a) fep_vkb_side_pane

0xc702,	// (0x0000e5a6) fep_vkb_top_pane_ParamLimits

0xc702,	// (0x0000e5a6) fep_vkb_top_pane

0x4b3d,	// (0x000069e1) fep_vkb_top_pane_g1_ParamLimits

0x4b3d,	// (0x000069e1) fep_vkb_top_pane_g1

0x4b4c,	// (0x000069f0) fep_vkb_top_pane_g2_ParamLimits

0x4b4c,	// (0x000069f0) fep_vkb_top_pane_g2

0x4b5b,	// (0x000069ff) fep_vkb_top_pane_g3_ParamLimits

0x4b5b,	// (0x000069ff) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x000119c3) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x000119c3) fep_vkb_top_pane_g

0x4b79,	// (0x00006a1d) fep_vkb_top_text_pane_ParamLimits

0x4b79,	// (0x00006a1d) fep_vkb_top_text_pane

0xc737,	// (0x0000e5db) fep_vkb_side_pane_g1_ParamLimits

0xc737,	// (0x0000e5db) fep_vkb_side_pane_g1

0x4bd3,	// (0x00006a77) grid_vkb_side_pane_ParamLimits

0x4bd3,	// (0x00006a77) grid_vkb_side_pane

0x4e7c,	// (0x00006d20) bg_popup_fep_shadow_pane_g2

0x4e85,	// (0x00006d29) bg_popup_fep_shadow_pane_g3

0x4e8d,	// (0x00006d31) bg_popup_fep_shadow_pane_g4

0x4e96,	// (0x00006d3a) bg_popup_fep_shadow_pane_g5

0x4ea0,	// (0x00006d44) bg_popup_fep_shadow_pane_g6

0x4ea8,	// (0x00006d4c) bg_popup_fep_shadow_pane_g7

0xee81,	// (0x00010d25) bg_popup_fep_shadow_pane_g8

0x4c2a,	// (0x00006ace) grid_vkb_keypad_number_pane_ParamLimits

0x4c2a,	// (0x00006ace) grid_vkb_keypad_number_pane

0x4c3a,	// (0x00006ade) grid_vkb_keypad_pane_ParamLimits

0x4c3a,	// (0x00006ade) grid_vkb_keypad_pane

0x4c60,	// (0x00006b04) fep_vkb_bottom_pane_g1_ParamLimits

0x4c60,	// (0x00006b04) fep_vkb_bottom_pane_g1

0x4c89,	// (0x00006b2d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4c89,	// (0x00006b2d) grid_vkb_keypad_bottom_left_pane

0x4c9e,	// (0x00006b42) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4c9e,	// (0x00006b42) grid_vkb_keypad_bottom_right_pane

0x4cb3,	// (0x00006b57) fep_vkb_top_text_pane_g1

0xc77e,	// (0x0000e622) fep_vkb_top_text_pane_t1

0xc790,	// (0x0000e634) cell_vkb_side_pane_ParamLimits

0xc790,	// (0x0000e634) cell_vkb_side_pane

0x46e7,	// (0x0000658b) cell_vkb_side_pane_g1

0x4d22,	// (0x00006bc6) cell_vkb_keypad_pane_ParamLimits

0x4d22,	// (0x00006bc6) cell_vkb_keypad_pane

0x4d97,	// (0x00006c3b) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x000119f0) bg_popup_fep_shadow_pane_g

0x46e7,	// (0x0000658b) cell_hwr_side_pane_g1

0x46e7,	// (0x0000658b) cell_hwr_side_pane_g2

0x4da1,	// (0x00006c45) cell_vkb_keypad_pane_t1

0xc7a6,	// (0x0000e64a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7a6,	// (0x0000e64a) cell_vkb_keypad_bottom_left_pane

0xc7bb,	// (0x0000e65f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7bb,	// (0x0000e65f) cell_vkb_keypad_bottom_right_pane

0x46e7,	// (0x0000658b) cell_vkb_keypad_bottom_left_pane_g1

0x46e7,	// (0x0000658b) cell_vkb_keypad_bottom_right_pane_g1

0x4e05,	// (0x00006ca9) cell_vkb_keypad_number_pane_ParamLimits

0x4e05,	// (0x00006ca9) cell_vkb_keypad_number_pane

0x4e24,	// (0x00006cc8) cell_vkb_keypad_number_pane_g1

0x4e2e,	// (0x00006cd2) cell_vkb_keypad_number_pane_g2

0x4e37,	// (0x00006cdb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x000119e2) cell_vkb_keypad_number_pane_g

0x4da1,	// (0x00006c45) cell_vkb_keypad_number_pane_t1

0x4e5b,	// (0x00006cff) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x000119dd) cell_hwr_side_pane_g

0x4eba,	// (0x00006d5e) cell_hwr_side_pane_t1

0x4ec8,	// (0x00006d6c) cell_hwr_side_pane_t1_copy1

0x4b6b,	// (0x00006a0f) cell_hwr_candidate_pane_g1

0x4f18,	// (0x00006dbc) cell_hwr_candidate_pane_t1

0x46e7,	// (0x0000658b) cell_vkb_candidate_pane_g2

0x4f6c,	// (0x00006e10) cell_vkb_candidate_pane_t1

0x4743,	// (0x000065e7) bg_popup_fep_shadow_pane_ParamLimits

0x4743,	// (0x000065e7) bg_popup_fep_shadow_pane

0x47f8,	// (0x0000669c) bg_fep_hwr_top_pane_g4

0x4866,	// (0x0000670a) bg_hwr_side_pane_g1_ParamLimits

0x4866,	// (0x0000670a) bg_hwr_side_pane_g1

0xc625,	// (0x0000e4c9) cell_hwr_side_pane_ParamLimits

0xc625,	// (0x0000e4c9) cell_hwr_side_pane

0x48d4,	// (0x00006778) fep_hwr_write_pane_g1_ParamLimits

0x48d4,	// (0x00006778) fep_hwr_write_pane_g1

0x48e1,	// (0x00006785) fep_hwr_write_pane_g2_ParamLimits

0x48e1,	// (0x00006785) fep_hwr_write_pane_g2

0x48ee,	// (0x00006792) fep_hwr_write_pane_g3_ParamLimits

0x48ee,	// (0x00006792) fep_hwr_write_pane_g3

0xc645,	// (0x0000e4e9) fep_hwr_write_pane_g4_ParamLimits

0xc645,	// (0x0000e4e9) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x000119af) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x000119af) fep_hwr_write_pane_g

0x47f8,	// (0x0000669c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x47f8,	// (0x0000669c) bg_fep_hwr_candidate_pane_g2

0x4937,	// (0x000067db) cell_hwr_candidate_pane_ParamLimits

0x4937,	// (0x000067db) cell_hwr_candidate_pane

0x4979,	// (0x0000681d) fep_hwr_candidate_pane_g1_ParamLimits

0x49db,	// (0x0000687f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x49db,	// (0x0000687f) bg_popup_fep_shadow_pane_cp2

0x4b6b,	// (0x00006a0f) fep_vkb_top_pane_g4_ParamLimits

0x4b6b,	// (0x00006a0f) fep_vkb_top_pane_g4

0x4bb1,	// (0x00006a55) fep_vkb_side_pane_g2_ParamLimits

0x4bb1,	// (0x00006a55) fep_vkb_side_pane_g2

0xa0fe,	// (0x0000bfa2) list_setting_pane_t4_ParamLimits

0xa0fe,	// (0x0000bfa2) list_setting_pane_t4

0xa178,	// (0x0000c01c) list_setting_number_pane_t5_ParamLimits

0xa178,	// (0x0000c01c) list_setting_number_pane_t5

0xf459,	// (0x000112fd) list_double_heading_pane_cp2_ParamLimits

0xf459,	// (0x000112fd) list_double_heading_pane_cp2

0x4f7a,	// (0x00006e1e) list_double_heading_pane_g1_cp2_ParamLimits

0x4f7a,	// (0x00006e1e) list_double_heading_pane_g1_cp2

0x4f86,	// (0x00006e2a) list_double_heading_pane_g2_cp2_ParamLimits

0x4f86,	// (0x00006e2a) list_double_heading_pane_g2_cp2

0x4f9a,	// (0x00006e3e) list_double_heading_pane_t1_cp2_ParamLimits

0x4f9a,	// (0x00006e3e) list_double_heading_pane_t1_cp2

0x4fb0,	// (0x00006e54) list_double_heading_pane_t2_cp2_ParamLimits

0x4fb0,	// (0x00006e54) list_double_heading_pane_t2_cp2

0xe75e,	// (0x00010602) aid_value_unit2

0xe909,	// (0x000107ad) popup_preview_fixed_window

0xeaa9,	// (0x0001094d) bg_popup_preview_window_pane_cp02

0x4fc2,	// (0x00006e66) list_preview_fixed_pane

0x5008,	// (0x00006eac) list_empty_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_empty_pane_fp

0x5008,	// (0x00006eac) list_single_cale_day_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_single_cale_day_pane_fp

0x5008,	// (0x00006eac) list_single_graphic_heading_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_single_graphic_heading_pane_fp

0x5008,	// (0x00006eac) list_single_graphic_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_single_graphic_pane_fp

0x5008,	// (0x00006eac) list_single_heading_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_single_heading_pane_fp

0x5008,	// (0x00006eac) list_single_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_single_pane_fp

0x501e,	// (0x00006ec2) list_single_pane_fp_g1_ParamLimits

0x501e,	// (0x00006ec2) list_single_pane_fp_g1

0x502a,	// (0x00006ece) list_single_pane_fp_g2_ParamLimits

0x502a,	// (0x00006ece) list_single_pane_fp_g2

0x5036,	// (0x00006eda) list_single_pane_fp_g3_ParamLimits

0x5036,	// (0x00006eda) list_single_pane_fp_g3

0x504a,	// (0x00006eee) list_single_pane_fp_g4_ParamLimits

0x504a,	// (0x00006eee) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x00011a11) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x00011a11) list_single_pane_fp_g

0x5056,	// (0x00006efa) list_single_pane_fp_t1_ParamLimits

0x5056,	// (0x00006efa) list_single_pane_fp_t1

0x506d,	// (0x00006f11) list_single_graphic_pane_fp_g1_ParamLimits

0x506d,	// (0x00006f11) list_single_graphic_pane_fp_g1

0x501e,	// (0x00006ec2) list_single_graphic_pane_fp_g2_ParamLimits

0x501e,	// (0x00006ec2) list_single_graphic_pane_fp_g2

0x502a,	// (0x00006ece) list_single_graphic_pane_fp_g3_ParamLimits

0x502a,	// (0x00006ece) list_single_graphic_pane_fp_g3

0x5036,	// (0x00006eda) list_single_graphic_pane_fp_g4_ParamLimits

0x5036,	// (0x00006eda) list_single_graphic_pane_fp_g4

0x504a,	// (0x00006eee) list_single_graphic_pane_fp_g5_ParamLimits

0x504a,	// (0x00006eee) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x00011a1a) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x00011a1a) list_single_graphic_pane_fp_g

0x5079,	// (0x00006f1d) list_single_graphic_pane_fp_t1_ParamLimits

0x5079,	// (0x00006f1d) list_single_graphic_pane_fp_t1

0x506d,	// (0x00006f11) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x506d,	// (0x00006f11) list_single_graphic_heading_pane_fp_g1

0x501e,	// (0x00006ec2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x501e,	// (0x00006ec2) list_single_graphic_heading_pane_fp_g2

0x502a,	// (0x00006ece) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x502a,	// (0x00006ece) list_single_graphic_heading_pane_fp_g3

0x5036,	// (0x00006eda) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5036,	// (0x00006eda) list_single_graphic_heading_pane_fp_g4

0x504a,	// (0x00006eee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x504a,	// (0x00006eee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00011a1a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00011a1a) list_single_graphic_heading_pane_fp_g

0x508f,	// (0x00006f33) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x508f,	// (0x00006f33) list_single_graphic_heading_pane_fp_t1

0x50a5,	// (0x00006f49) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x50a5,	// (0x00006f49) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00011a25) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00011a25) list_single_graphic_heading_pane_fp_t

0x50b7,	// (0x00006f5b) list_single_cale_day_pane_fp_g1_ParamLimits

0x50b7,	// (0x00006f5b) list_single_cale_day_pane_fp_g1

0x50ef,	// (0x00006f93) list_single_cale_day_pane_fp_g2_ParamLimits

0x50ef,	// (0x00006f93) list_single_cale_day_pane_fp_g2

0x50fb,	// (0x00006f9f) list_single_cale_day_pane_fp_g3_ParamLimits

0x50fb,	// (0x00006f9f) list_single_cale_day_pane_fp_g3

0x5123,	// (0x00006fc7) list_single_cale_day_pane_fp_g4_ParamLimits

0x5123,	// (0x00006fc7) list_single_cale_day_pane_fp_g4

0x5147,	// (0x00006feb) list_single_cale_day_pane_fp_g5_ParamLimits

0x5147,	// (0x00006feb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x00011a2a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x00011a2a) list_single_cale_day_pane_fp_g

0x516b,	// (0x0000700f) list_single_cale_day_pane_fp_t1_ParamLimits

0x516b,	// (0x0000700f) list_single_cale_day_pane_fp_t1

0x5191,	// (0x00007035) list_single_cale_day_pane_fp_t2_ParamLimits

0x5191,	// (0x00007035) list_single_cale_day_pane_fp_t2

0x51aa,	// (0x0000704e) list_single_cale_day_pane_fp_t3_ParamLimits

0x51aa,	// (0x0000704e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x00011a35) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x00011a35) list_single_cale_day_pane_fp_t

0x501e,	// (0x00006ec2) list_empty_pane_fp_g1_ParamLimits

0x501e,	// (0x00006ec2) list_empty_pane_fp_g1

0x51c3,	// (0x00007067) list_empty_pane_fp_t1

0x51d1,	// (0x00007075) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x00011a3c) list_empty_pane_fp_t

0x501e,	// (0x00006ec2) list_single_heading_pane_fp_g1_ParamLimits

0x501e,	// (0x00006ec2) list_single_heading_pane_fp_g1

0x502a,	// (0x00006ece) list_single_heading_pane_fp_g2_ParamLimits

0x502a,	// (0x00006ece) list_single_heading_pane_fp_g2

0x5036,	// (0x00006eda) list_single_heading_pane_fp_g3_ParamLimits

0x5036,	// (0x00006eda) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00011a41) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00011a41) list_single_heading_pane_fp_g

0x51df,	// (0x00007083) list_single_heading_pane_fp_t1_ParamLimits

0x51df,	// (0x00007083) list_single_heading_pane_fp_t1

0x51f1,	// (0x00007095) list_single_heading_pane_fp_t2_ParamLimits

0x51f1,	// (0x00007095) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x00011a48) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x00011a48) list_single_heading_pane_fp_t

0xa41f,	// (0x0000c2c3) aid_size_cell_fast

0xea8c,	// (0x00010930) soft_indicator_pane_cp1_t1

0xa428,	// (0x0000c2cc) cell_app_pane_cp2_ParamLimits

0xa428,	// (0x0000c2cc) cell_app_pane_cp2

0x4765,	// (0x00006609) fep_hwr_candidate_drop_down_list_pane

0x4993,	// (0x00006837) fep_hwr_candidate_pane_g3_ParamLimits

0x4993,	// (0x00006837) fep_hwr_candidate_pane_g3

0x49a0,	// (0x00006844) fep_hwr_candidate_pane_g4_ParamLimits

0x49a0,	// (0x00006844) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x000119bc) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x000119bc) fep_hwr_candidate_pane_g

0x4a60,	// (0x00006904) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4a60,	// (0x00006904) fep_vkb_candidate_drop_down_list_pane

0x4e63,	// (0x00006d07) fep_vkb_candidate_pane_g3

0x4e6b,	// (0x00006d0f) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x000119e9) fep_vkb_candidate_pane_g

0x4b6b,	// (0x00006a0f) cell_hwr_candidate_pane_g1_ParamLimits

0x4ed6,	// (0x00006d7a) cell_hwr_candidate_pane_g3_ParamLimits

0x4ed6,	// (0x00006d7a) cell_hwr_candidate_pane_g3

0x4ef7,	// (0x00006d9b) cell_hwr_candidate_pane_g4_ParamLimits

0x4ef7,	// (0x00006d9b) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x00011a03) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x00011a03) cell_hwr_candidate_pane_g

0x4f36,	// (0x00006dda) cell_vkb_candidate_pane_g3_ParamLimits

0x4f36,	// (0x00006dda) cell_vkb_candidate_pane_g3

0x4f51,	// (0x00006df5) cell_vkb_candidate_pane_g4_ParamLimits

0x4f51,	// (0x00006df5) cell_vkb_candidate_pane_g4

0xc7d6,	// (0x0000e67a) cell_app_pane_cp2_g1_ParamLimits

0xc7d6,	// (0x0000e67a) cell_app_pane_cp2_g1

0x5225,	// (0x000070c9) cell_app_pane_cp2_g2_ParamLimits

0x5225,	// (0x000070c9) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x00011a4d) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x00011a4d) cell_app_pane_cp2_g

0x5231,	// (0x000070d5) cell_app_pane_cp2_t1_ParamLimits

0x5231,	// (0x000070d5) cell_app_pane_cp2_t1

0xeda7,	// (0x00010c4b) grid_highlight_pane_cp1_ParamLimits

0xeda7,	// (0x00010c4b) grid_highlight_pane_cp1

0x5243,	// (0x000070e7) cell_hwr_candidate_pane_cp1_ParamLimits

0x5243,	// (0x000070e7) cell_hwr_candidate_pane_cp1

0x4b6b,	// (0x00006a0f) fep_hwr_candidate_drop_down_list_pane_g1

0x5262,	// (0x00007106) fep_hwr_candidate_drop_down_list_pane_g2

0x526f,	// (0x00007113) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00011a52) fep_hwr_candidate_drop_down_list_pane_g

0x527c,	// (0x00007120) fep_hwr_candidate_drop_down_list_scroll_pane

0x5285,	// (0x00007129) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5285,	// (0x00007129) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5292,	// (0x00007136) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5292,	// (0x00007136) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x529f,	// (0x00007143) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x529f,	// (0x00007143) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4f36,	// (0x00006dda) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4f36,	// (0x00006dda) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4f51,	// (0x00006df5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4f51,	// (0x00006df5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x52ac,	// (0x00007150) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x52ac,	// (0x00007150) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x52c7,	// (0x0000716b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x52c7,	// (0x0000716b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x52e2,	// (0x00007186) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x52e2,	// (0x00007186) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00011a59) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00011a59) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x52fd,	// (0x000071a1) cell_vkb_candidate_pane_cp1_ParamLimits

0x52fd,	// (0x000071a1) cell_vkb_candidate_pane_cp1

0x4b6b,	// (0x00006a0f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4b6b,	// (0x00006a0f) fep_vkb_candidate_drop_down_list_pane_g1

0x5262,	// (0x00007106) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5262,	// (0x00007106) fep_vkb_candidate_drop_down_list_pane_g2

0x526f,	// (0x00007113) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x526f,	// (0x00007113) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00011a52) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x00011a52) fep_vkb_candidate_drop_down_list_pane_g

0x531d,	// (0x000071c1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x531d,	// (0x000071c1) fep_vkb_candidate_drop_down_list_scroll_pane

0x532a,	// (0x000071ce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x532a,	// (0x000071ce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5337,	// (0x000071db) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5337,	// (0x000071db) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5343,	// (0x000071e7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5343,	// (0x000071e7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4ed6,	// (0x00006d7a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4ed6,	// (0x00006d7a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4ef7,	// (0x00006d9b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ef7,	// (0x00006d9b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x534f,	// (0x000071f3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x534f,	// (0x000071f3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5370,	// (0x00007214) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5370,	// (0x00007214) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5391,	// (0x00007235) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5391,	// (0x00007235) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00011a6a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00011a6a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9806,	// (0x0000b6aa) title_pane_g1_ParamLimits

0x9819,	// (0x0000b6bd) title_pane_g2_ParamLimits

0xf54e,	// (0x000113f2) title_pane_g_ParamLimits

0xf3f3,	// (0x00011297) aid_call2_pane

0xf3fb,	// (0x0001129f) aid_call_pane

0xf403,	// (0x000112a7) popup_clock_analogue_window_g1

0xf403,	// (0x000112a7) popup_clock_analogue_window_g2

0xf40b,	// (0x000112af) popup_clock_analogue_window_g3

0xf414,	// (0x000112b8) popup_clock_analogue_window_g4

0xe770,	// (0x00010614) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0001158d) popup_clock_analogue_window_g

0xf41c,	// (0x000112c0) popup_clock_analogue_window_t1

0xf47a,	// (0x0001131e) clock_digital_number_pane_ParamLimits

0xf47a,	// (0x0001131e) clock_digital_number_pane

0xf486,	// (0x0001132a) clock_digital_number_pane_cp02_ParamLimits

0xf486,	// (0x0001132a) clock_digital_number_pane_cp02

0xf492,	// (0x00011336) clock_digital_number_pane_cp03_ParamLimits

0xf492,	// (0x00011336) clock_digital_number_pane_cp03

0xf49e,	// (0x00011342) clock_digital_number_pane_cp04_ParamLimits

0xf49e,	// (0x00011342) clock_digital_number_pane_cp04

0xf4aa,	// (0x0001134e) clock_digital_separator_pane_ParamLimits

0xf4aa,	// (0x0001134e) clock_digital_separator_pane

0xf4b6,	// (0x0001135a) popup_clock_digital_window_t1_ParamLimits

0xf4b6,	// (0x0001135a) popup_clock_digital_window_t1

0xe770,	// (0x00010614) clock_digital_number_pane_g1

0xe770,	// (0x00010614) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00011598) clock_digital_number_pane_g

0xe770,	// (0x00010614) clock_digital_separator_pane_g1

0xe770,	// (0x00010614) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00011598) clock_digital_separator_pane_g

0xb316,	// (0x0000d1ba) aid_fill_nsta_ParamLimits

0xb44c,	// (0x0000d2f0) indicator_nsta_pane_ParamLimits

0x1492,	// (0x00003336) popup_clock_analogue_window

0x1492,	// (0x00003336) popup_clock_digital_window

0xef44,	// (0x00010de8) grid_indicator_nsta_pane_ParamLimits

0x405d,	// (0x00005f01) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x0001193c) clock_nsta_pane_t

0xf290,	// (0x00011134) aid_size_max_handle

0xa506,	// (0x0000c3aa) aid_size_min_handle

0x067a,	// (0x0000251e) editor_scroll_pane

0x53ac,	// (0x00007250) ex_editor_pane

0xef28,	// (0x00010dcc) scroll_pane_cp13

0xecd9,	// (0x00010b7d) scroll_pane_cp14

0xf451,	// (0x000112f5) scroll_pane_cp36

0xa5d0,	// (0x0000c474) list_single_graphic_hl_pane_cp2_ParamLimits

0xa5d0,	// (0x0000c474) list_single_graphic_hl_pane_cp2

0xc120,	// (0x0000dfc4) list_single_graphic_hl_pane_ParamLimits

0xc120,	// (0x0000dfc4) list_single_graphic_hl_pane

0xc7f4,	// (0x0000e698) aid_size_min_hl_cp1

0x53bd,	// (0x00007261) list_highlight_pane_cp34_ParamLimits

0x53bd,	// (0x00007261) list_highlight_pane_cp34

0x53ce,	// (0x00007272) list_single_graphic_hl_pane_g1_ParamLimits

0x53ce,	// (0x00007272) list_single_graphic_hl_pane_g1

0xc7fd,	// (0x0000e6a1) list_single_graphic_hl_pane_g2_ParamLimits

0xc7fd,	// (0x0000e6a1) list_single_graphic_hl_pane_g2

0xc7fd,	// (0x0000e6a1) list_single_graphic_hl_pane_g3_ParamLimits

0xc7fd,	// (0x0000e6a1) list_single_graphic_hl_pane_g3

0x05b3,	// (0x00002457) list_single_graphic_hl_pane_g4_ParamLimits

0x05b3,	// (0x00002457) list_single_graphic_hl_pane_g4

0x544d,	// (0x000072f1) list_single_graphic_hl_pane_g5_ParamLimits

0x544d,	// (0x000072f1) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00011a7b) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00011a7b) list_single_graphic_hl_pane_g

0xc809,	// (0x0000e6ad) list_single_graphic_hl_pane_t1_ParamLimits

0xc809,	// (0x0000e6ad) list_single_graphic_hl_pane_t1

0x541d,	// (0x000072c1) aid_size_min_hl_cp2

0x5426,	// (0x000072ca) list_highlight_pane_cp34_cp2_ParamLimits

0x5426,	// (0x000072ca) list_highlight_pane_cp34_cp2

0x53ce,	// (0x00007272) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x53ce,	// (0x00007272) list_single_graphic_hl_pane_g1_cp2

0x5433,	// (0x000072d7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5433,	// (0x000072d7) list_single_graphic_hl_pane_g2_cp2

0xc81f,	// (0x0000e6c3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc81f,	// (0x0000e6c3) list_single_graphic_hl_pane_g3_cp2

0x05b3,	// (0x00002457) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x05b3,	// (0x00002457) list_single_graphic_hl_pane_g4_cp2

0x544d,	// (0x000072f1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x544d,	// (0x000072f1) list_single_graphic_hl_pane_g5_cp2

0xa9ff,	// (0x0000c8a3) control_pane_g4_ParamLimits

0xa9ff,	// (0x0000c8a3) control_pane_g4

0x0c08,	// (0x00002aac) bg_popup_sub_pane_cp10_ParamLimits

0x46f1,	// (0x00006595) list_choice_list_pane_ParamLimits

0x4700,	// (0x000065a4) scroll_pane_cp23

0xeaa9,	// (0x0001094d) bg_popup_preview_window_pane_cp02_ParamLimits

0x4fc2,	// (0x00006e66) list_preview_fixed_pane_ParamLimits

0x4fd8,	// (0x00006e7c) list_preview_fixed_pane_cp_ParamLimits

0x4fd8,	// (0x00006e7c) list_preview_fixed_pane_cp

0x4fe4,	// (0x00006e88) popup_preview_fixed_window_g1_ParamLimits

0x4fe4,	// (0x00006e88) popup_preview_fixed_window_g1

0x4ff0,	// (0x00006e94) popup_preview_fixed_window_g2_ParamLimits

0x4ff0,	// (0x00006e94) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x00011a0a) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x00011a0a) popup_preview_fixed_window_g

0xf1cd,	// (0x00011071) aid_navi_side_left_pane_ParamLimits

0xf1e2,	// (0x00011086) aid_navi_side_right_pane_ParamLimits

0xf1fa,	// (0x0001109e) navi_icon_pane_stacon_ParamLimits

0xf20e,	// (0x000110b2) navi_navi_pane_stacon_ParamLimits

0xf1fa,	// (0x0001109e) navi_text_pane_stacon_ParamLimits

0xe766,	// (0x0001060a) main_text_info_pane

0x5477,	// (0x0000731b) listscroll_text_info_pane

0x547f,	// (0x00007323) list_text_info_pane_ParamLimits

0x547f,	// (0x00007323) list_text_info_pane

0x548e,	// (0x00007332) scroll_pane_cp24_ParamLimits

0x548e,	// (0x00007332) scroll_pane_cp24

0xc82d,	// (0x0000e6d1) list_text_info_pane_t1_ParamLimits

0xc82d,	// (0x0000e6d1) list_text_info_pane_t1

0xabb7,	// (0x0000ca5b) popup_fast_swap2_window_ParamLimits

0xabb7,	// (0x0000ca5b) popup_fast_swap2_window

0x54e0,	// (0x00007384) aid_size_cell_fast2

0xe766,	// (0x0001060a) bg_popup_window_pane_cp17

0x1da4,	// (0x00003c48) heading_pane_cp2

0xebdd,	// (0x00010a81) listscroll_fast2_pane

0x54ea,	// (0x0000738e) grid_fast2_pane

0x54f4,	// (0x00007398) listscroll_fast2_pane_g1

0x54fc,	// (0x000073a0) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00011a86) listscroll_fast2_pane_g

0xef28,	// (0x00010dcc) scroll_pane_cp26

0x5506,	// (0x000073aa) cell_fast2_pane_ParamLimits

0x5506,	// (0x000073aa) cell_fast2_pane

0x551b,	// (0x000073bf) cell_fast2_pane_g1

0x5524,	// (0x000073c8) cell_fast2_pane_g2

0x552d,	// (0x000073d1) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00011a8b) cell_fast2_pane_g

0xec10,	// (0x00010ab4) grid_highlight_pane_cp9

0xec25,	// (0x00010ac9) main_eswt_pane_ParamLimits

0xec25,	// (0x00010ac9) main_eswt_pane

0x54a3,	// (0x00007347) list_single_text_info_pane

0x5535,	// (0x000073d9) eswt_ctrl_button_pane

0x5535,	// (0x000073d9) eswt_ctrl_canvas_pane

0xc849,	// (0x0000e6ed) eswt_ctrl_combo_pane

0x5535,	// (0x000073d9) eswt_ctrl_default_pane

0x5535,	// (0x000073d9) eswt_ctrl_label_pane

0x5545,	// (0x000073e9) eswt_ctrl_wait_pane

0xc851,	// (0x0000e6f5) eswt_shell_pane

0xe766,	// (0x0001060a) listscroll_eswt_app_pane

0x556d,	// (0x00007411) popup_eswt_tasktip_window_ParamLimits

0x556d,	// (0x00007411) popup_eswt_tasktip_window

0x18e8,	// (0x0000378c) bg_popup_window_pane_cp18

0x557e,	// (0x00007422) eswt_control_pane_g1_ParamLimits

0x557e,	// (0x00007422) eswt_control_pane_g1

0x558b,	// (0x0000742f) eswt_control_pane_g2_ParamLimits

0x558b,	// (0x0000742f) eswt_control_pane_g2

0x5598,	// (0x0000743c) eswt_control_pane_g3_ParamLimits

0x5598,	// (0x0000743c) eswt_control_pane_g3

0x55a5,	// (0x00007449) eswt_control_pane_g4_ParamLimits

0x55a5,	// (0x00007449) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00011a92) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00011a92) eswt_control_pane_g

0xeda7,	// (0x00010c4b) bg_button_pane_ParamLimits

0xeda7,	// (0x00010c4b) bg_button_pane

0xec25,	// (0x00010ac9) common_borders_pane_copy2_ParamLimits

0xec25,	// (0x00010ac9) common_borders_pane_copy2

0x55b2,	// (0x00007456) control_button_pane_g1_ParamLimits

0x55b2,	// (0x00007456) control_button_pane_g1

0x55be,	// (0x00007462) control_button_pane_g2_ParamLimits

0x55be,	// (0x00007462) control_button_pane_g2

0x55ca,	// (0x0000746e) control_button_pane_g3_ParamLimits

0x55ca,	// (0x0000746e) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00011a9b) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00011a9b) control_button_pane_g

0x55de,	// (0x00007482) control_button_pane_t1

0x55ec,	// (0x00007490) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00011aa2) control_button_pane_t

0x175c,	// (0x00003600) bg_button_pane_g1

0x1764,	// (0x00003608) bg_button_pane_g2

0x176c,	// (0x00003610) bg_button_pane_g3

0x1774,	// (0x00003618) bg_button_pane_g4

0x177c,	// (0x00003620) bg_button_pane_g5

0x1784,	// (0x00003628) bg_button_pane_g6

0x178c,	// (0x00003630) bg_button_pane_g7

0x1794,	// (0x00003638) bg_button_pane_g8

0x179c,	// (0x00003640) bg_button_pane_g9

0x0008,

0xf84b,	// (0x000116ef) bg_button_pane_g

0x46ac,	// (0x00006550) common_borders_pane_ParamLimits

0x46ac,	// (0x00006550) common_borders_pane

0x557e,	// (0x00007422) eswt_control_pane_g1_copy1_ParamLimits

0x557e,	// (0x00007422) eswt_control_pane_g1_copy1

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy1_ParamLimits

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy1

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy1_ParamLimits

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy1

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy1_ParamLimits

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy1

0x46e7,	// (0x0000658b) bg_eswt_ctrl_canvas_pane_g1

0x46ac,	// (0x00006550) common_borders_pane_cp2_ParamLimits

0x46ac,	// (0x00006550) common_borders_pane_cp2

0x46ac,	// (0x00006550) common_borders_pane_cp3_ParamLimits

0x46ac,	// (0x00006550) common_borders_pane_cp3

0x55fa,	// (0x0000749e) separator_horizontal_pane

0x5602,	// (0x000074a6) separator_vertical_pane

0x557e,	// (0x00007422) eswt_control_pane_g1_copy2_ParamLimits

0x557e,	// (0x00007422) eswt_control_pane_g1_copy2

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy2_ParamLimits

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy2

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy2_ParamLimits

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy2

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy2_ParamLimits

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy2

0xe766,	// (0x0001060a) common_borders_pane_cp4

0x560b,	// (0x000074af) separator_horizontal_pane_g1

0x5614,	// (0x000074b8) separator_horizontal_pane_g2

0x561d,	// (0x000074c1) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00011aa7) separator_horizontal_pane_g

0x557e,	// (0x00007422) eswt_control_pane_g1_copy3_ParamLimits

0x557e,	// (0x00007422) eswt_control_pane_g1_copy3

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy3_ParamLimits

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy3

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy3_ParamLimits

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy3

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy3_ParamLimits

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy3

0xe766,	// (0x0001060a) common_borders_pane_cp5

0x5626,	// (0x000074ca) separator_vertical_pane_g1

0x562f,	// (0x000074d3) separator_vertical_pane_g2

0x5638,	// (0x000074dc) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00011aae) separator_vertical_pane_g

0x557e,	// (0x00007422) eswt_control_pane_g1_copy4_ParamLimits

0x557e,	// (0x00007422) eswt_control_pane_g1_copy4

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy4_ParamLimits

0x558b,	// (0x0000742f) eswt_control_pane_g2_copy4

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy4_ParamLimits

0x5598,	// (0x0000743c) eswt_control_pane_g3_copy4

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy4_ParamLimits

0x55a5,	// (0x00007449) eswt_control_pane_g4_copy4

0xc871,	// (0x0000e715) eswt_ctrl_combo_button_pane

0xc879,	// (0x0000e71d) eswt_ctrl_input_pane

0xc881,	// (0x0000e725) popup_choice_list_window_cp70

0xc889,	// (0x0000e72d) eswt_ctrl_input_pane_t1

0xe766,	// (0x0001060a) input_focus_pane_cp70

0x46ac,	// (0x00006550) bg_button_pane_cp70_ParamLimits

0x46ac,	// (0x00006550) bg_button_pane_cp70

0xc897,	// (0x0000e73b) eswt_ctrl_combo_button_pane_g1

0x566f,	// (0x00007513) wait_bar_pane_cp70

0x18e8,	// (0x0000378c) bg_popup_window_pane_cp70_ParamLimits

0x18e8,	// (0x0000378c) bg_popup_window_pane_cp70

0x5677,	// (0x0000751b) popup_eswt_tasktip_window_t1

0x568d,	// (0x00007531) wait_bar_pane_cp71_ParamLimits

0x568d,	// (0x00007531) wait_bar_pane_cp71

0x5699,	// (0x0000753d) grid_eswt_app_pane

0xf2d7,	// (0x0001117b) scroll_pane_cp70

0xc89f,	// (0x0000e743) cell_eswt_app_pane_ParamLimits

0xc89f,	// (0x0000e743) cell_eswt_app_pane

0xc8c9,	// (0x0000e76d) cell_eswt_app_pane_g1_ParamLimits

0xc8c9,	// (0x0000e76d) cell_eswt_app_pane_g1

0xc8f8,	// (0x0000e79c) cell_eswt_app_pane_g2_ParamLimits

0xc8f8,	// (0x0000e79c) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00011ab5) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00011ab5) cell_eswt_app_pane_g

0xc91c,	// (0x0000e7c0) cell_eswt_app_pane_t1_ParamLimits

0xc91c,	// (0x0000e7c0) cell_eswt_app_pane_t1

0x5757,	// (0x000075fb) grid_highlight_pane_cp70_ParamLimits

0x5757,	// (0x000075fb) grid_highlight_pane_cp70

0x054f,	// (0x000023f3) set_content_pane_g1

0xa991,	// (0x0000c835) status_small_volume_pane

0xc94e,	// (0x0000e7f2) status_small_volume_pane_g1

0xc956,	// (0x0000e7fa) volume_small2_pane

0xc95f,	// (0x0000e803) volume_small2_pane_g1

0xc968,	// (0x0000e80c) volume_small2_pane_g2

0xc971,	// (0x0000e815) volume_small2_pane_g3

0xc97a,	// (0x0000e81e) volume_small2_pane_g4

0xc983,	// (0x0000e827) volume_small2_pane_g5

0xc98c,	// (0x0000e830) volume_small2_pane_g6

0xc995,	// (0x0000e839) volume_small2_pane_g7

0xc99e,	// (0x0000e842) volume_small2_pane_g8

0xc9a7,	// (0x0000e84b) volume_small2_pane_g9

0xc9b0,	// (0x0000e854) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00011aba) volume_small2_pane_g

0x4cb3,	// (0x00006b57) fep_vkb_top_text_pane_g1_ParamLimits

0xc77e,	// (0x0000e622) fep_vkb_top_text_pane_t1_ParamLimits

0x4ffc,	// (0x00006ea0) popup_preview_fixed_window_g3_ParamLimits

0x4ffc,	// (0x00006ea0) popup_preview_fixed_window_g3

0xb254,	// (0x0000d0f8) popup_toolbar_trans_pane

0xbf62,	// (0x0000de06) aid_height_set_list_ParamLimits

0x2f30,	// (0x00004dd4) aid_size_parent_ParamLimits

0x0c08,	// (0x00002aac) list_highlight_pane_cp2_ParamLimits

0x054f,	// (0x000023f3) set_content_pane_g1_ParamLimits

0xc132,	// (0x0000dfd6) list_single_image_pane_ParamLimits

0xc132,	// (0x0000dfd6) list_single_image_pane

0xc9b9,	// (0x0000e85d) aid_size_cell_image_ParamLimits

0xc9b9,	// (0x0000e85d) aid_size_cell_image

0xc9c6,	// (0x0000e86a) grid_single_image_pane_ParamLimits

0xc9c6,	// (0x0000e86a) grid_single_image_pane

0x502a,	// (0x00006ece) list_single_image_pane_g1_ParamLimits

0x502a,	// (0x00006ece) list_single_image_pane_g1

0x5036,	// (0x00006eda) list_single_image_pane_g2_ParamLimits

0x5036,	// (0x00006eda) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00011acf) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00011acf) list_single_image_pane_g

0x57e9,	// (0x0000768d) list_single_image_pane_t1_ParamLimits

0x57e9,	// (0x0000768d) list_single_image_pane_t1

0xc9d2,	// (0x0000e876) cell_image_list_pane_ParamLimits

0xc9d2,	// (0x0000e876) cell_image_list_pane

0xc9e6,	// (0x0000e88a) cell_image_list_pane_g1

0xc9ef,	// (0x0000e893) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00011ad4) cell_image_list_pane_g

0xc9f8,	// (0x0000e89c) aid_size_cell_tb_trans_pane

0xeda7,	// (0x00010c4b) bg_tb_trans_pane

0xca0a,	// (0x0000e8ae) grid_tb_trans_pane

0x175c,	// (0x00003600) bg_tb_trans_pane_g1

0x1764,	// (0x00003608) bg_tb_trans_pane_g2

0x176c,	// (0x00003610) bg_tb_trans_pane_g3

0x1774,	// (0x00003618) bg_tb_trans_pane_g4

0x177c,	// (0x00003620) bg_tb_trans_pane_g5

0x1794,	// (0x00003638) bg_tb_trans_pane_g6

0x179c,	// (0x00003640) bg_tb_trans_pane_g7

0x1784,	// (0x00003628) bg_tb_trans_pane_g8

0x178c,	// (0x00003630) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00011ad9) bg_tb_trans_pane_g

0xca1e,	// (0x0000e8c2) cell_toolbar_trans_pane_ParamLimits

0xca1e,	// (0x0000e8c2) cell_toolbar_trans_pane

0x46e7,	// (0x0000658b) cell_toolbar_trans_pane_g1

0xc449,	// (0x0000e2ed) list_form2_midp_pane_t1

0xc457,	// (0x0000e2fb) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00011982) list_form2_midp_pane_t

0x4281,	// (0x00006125) scroll_pane_cp51_ParamLimits

0x448a,	// (0x0000632e) form2_midp_wait_pane_g1

0x4493,	// (0x00006337) form2_midp_wait_pane_g2

0x449c,	// (0x00006340) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00011997) form2_midp_wait_pane_g

0xe965,	// (0x00010809) list_highlight_pane_cp21_ParamLimits

0x44e4,	// (0x00006388) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x44f3,	// (0x00006397) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3133,	// (0x00004fd7) list_single_2graphic_im_pane_ParamLimits

0x3133,	// (0x00004fd7) list_single_2graphic_im_pane

0xca44,	// (0x0000e8e8) list_single_2graphic_im_pane_g1_ParamLimits

0xca44,	// (0x0000e8e8) list_single_2graphic_im_pane_g1

0xca55,	// (0x0000e8f9) list_single_2graphic_im_pane_g2_ParamLimits

0xca55,	// (0x0000e8f9) list_single_2graphic_im_pane_g2

0xca61,	// (0x0000e905) list_single_2graphic_im_pane_g3_ParamLimits

0xca61,	// (0x0000e905) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x00011aec) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x00011aec) list_single_2graphic_im_pane_g

0xca75,	// (0x0000e919) list_single_2graphic_im_pane_t1_ParamLimits

0xca75,	// (0x0000e919) list_single_2graphic_im_pane_t1

0x5008,	// (0x00006eac) list_single_graphic_2heading_pane_fp_ParamLimits

0x5008,	// (0x00006eac) list_single_graphic_2heading_pane_fp

0x506d,	// (0x00006f11) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x506d,	// (0x00006f11) list_single_graphic_2heading_pane_fp_g1

0x501e,	// (0x00006ec2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x501e,	// (0x00006ec2) list_single_graphic_2heading_pane_fp_g2

0x502a,	// (0x00006ece) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x502a,	// (0x00006ece) list_single_graphic_2heading_pane_fp_g3

0x5036,	// (0x00006eda) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5036,	// (0x00006eda) list_single_graphic_2heading_pane_fp_g4

0x504a,	// (0x00006eee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x504a,	// (0x00006eee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00011a1a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00011a1a) list_single_graphic_2heading_pane_fp_g

0x58df,	// (0x00007783) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x58df,	// (0x00007783) list_single_graphic_2heading_pane_fp_t1

0x50a5,	// (0x00006f49) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x50a5,	// (0x00006f49) list_single_graphic_2heading_pane_fp_t2

0x58f5,	// (0x00007799) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x58f5,	// (0x00007799) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x00011af5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x00011af5) list_single_graphic_2heading_pane_fp_t

0x4911,	// (0x000067b5) fep_hwr_write_pane_g5_ParamLimits

0x4911,	// (0x000067b5) fep_hwr_write_pane_g5

0x491d,	// (0x000067c1) fep_hwr_write_pane_g6_ParamLimits

0x491d,	// (0x000067c1) fep_hwr_write_pane_g6

0xc851,	// (0x0000e6f5) eswt_shell_pane_ParamLimits

0x18e8,	// (0x0000378c) bg_popup_window_pane_cp18_ParamLimits

0x2dee,	// (0x00004c92) heading_pane_cp70

0x5677,	// (0x0000751b) popup_eswt_tasktip_window_t1_ParamLimits

0xb371,	// (0x0000d215) aid_touch_tab_arrow_left

0xb387,	// (0x0000d22b) aid_touch_tab_arrow_right

0x9831,	// (0x0000b6d5) title_pane_g3_ParamLimits

0x9831,	// (0x0000b6d5) title_pane_g3

0xed3e,	// (0x00010be2) set_value_pane_g1

0xb254,	// (0x0000d0f8) popup_toolbar_trans_pane_ParamLimits

0xc9f8,	// (0x0000e89c) aid_size_cell_tb_trans_pane_ParamLimits

0xeda7,	// (0x00010c4b) bg_tb_trans_pane_ParamLimits

0xca0a,	// (0x0000e8ae) grid_tb_trans_pane_ParamLimits

0xeaa9,	// (0x0001094d) cont_note_pane_ParamLimits

0xeaa9,	// (0x0001094d) cont_note_pane

0xec25,	// (0x00010ac9) cont_snote2_single_text_pane_ParamLimits

0xec25,	// (0x00010ac9) cont_snote2_single_text_pane

0xec25,	// (0x00010ac9) cont_snote2_single_graphic_pane_ParamLimits

0xec25,	// (0x00010ac9) cont_snote2_single_graphic_pane

0x1fb7,	// (0x00003e5b) cont_note_wait_pane_ParamLimits

0x1fb7,	// (0x00003e5b) cont_note_wait_pane

0x1fb7,	// (0x00003e5b) cont_note_image_pane_ParamLimits

0x1fb7,	// (0x00003e5b) cont_note_image_pane

0x590b,	// (0x000077af) popup_note2_window_g1_ParamLimits

0x590b,	// (0x000077af) popup_note2_window_g1

0xcab3,	// (0x0000e957) popup_note2_window_t1_ParamLimits

0xcab3,	// (0x0000e957) popup_note2_window_t1

0xcaf8,	// (0x0000e99c) popup_note2_window_t2_ParamLimits

0xcaf8,	// (0x0000e99c) popup_note2_window_t2

0xcb3d,	// (0x0000e9e1) popup_note2_window_t3_ParamLimits

0xcb3d,	// (0x0000e9e1) popup_note2_window_t3

0x5a0b,	// (0x000078af) popup_note2_window_t4_ParamLimits

0x5a0b,	// (0x000078af) popup_note2_window_t4

0xeb2d,	// (0x000109d1) popup_note2_window_t5_ParamLimits

0xeb2d,	// (0x000109d1) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x00011b01) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x00011b01) popup_note2_window_t

0x5a3a,	// (0x000078de) popup_note2_image_window_g1_ParamLimits

0x5a3a,	// (0x000078de) popup_note2_image_window_g1

0xcb82,	// (0x0000ea26) popup_note2_image_window_g2_ParamLimits

0xcb82,	// (0x0000ea26) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x00011b0c) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x00011b0c) popup_note2_image_window_g

0x5a58,	// (0x000078fc) popup_note2_image_window_t1_ParamLimits

0x5a58,	// (0x000078fc) popup_note2_image_window_t1

0x5a70,	// (0x00007914) popup_note2_image_window_t2_ParamLimits

0x5a70,	// (0x00007914) popup_note2_image_window_t2

0x5a88,	// (0x0000792c) popup_note2_image_window_t3_ParamLimits

0x5a88,	// (0x0000792c) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x00011b11) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x00011b11) popup_note2_image_window_t

0x1fc5,	// (0x00003e69) popup_note2_wait_window_g1_ParamLimits

0x1fc5,	// (0x00003e69) popup_note2_wait_window_g1

0x1fd1,	// (0x00003e75) popup_note2_wait_window_g2_ParamLimits

0x1fd1,	// (0x00003e75) popup_note2_wait_window_g2

0x1fdd,	// (0x00003e81) popup_note2_wait_window_g3_ParamLimits

0x1fdd,	// (0x00003e81) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x000116d1) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x000116d1) popup_note2_wait_window_g

0x5aa4,	// (0x00007948) popup_note2_wait_window_t1_ParamLimits

0x5aa4,	// (0x00007948) popup_note2_wait_window_t1

0x5ac2,	// (0x00007966) popup_note2_wait_window_t2_ParamLimits

0x5ac2,	// (0x00007966) popup_note2_wait_window_t2

0x5ae0,	// (0x00007984) popup_note2_wait_window_t3_ParamLimits

0x5ae0,	// (0x00007984) popup_note2_wait_window_t3

0x5af2,	// (0x00007996) popup_note2_wait_window_t4_ParamLimits

0x5af2,	// (0x00007996) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x00011b18) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x00011b18) popup_note2_wait_window_t

0x5b04,	// (0x000079a8) wait_bar2_pane_ParamLimits

0x5b04,	// (0x000079a8) wait_bar2_pane

0x5b1c,	// (0x000079c0) popup_snote2_single_text_window_g1_ParamLimits

0x5b1c,	// (0x000079c0) popup_snote2_single_text_window_g1

0x5b44,	// (0x000079e8) popup_snote2_single_text_window_t1_ParamLimits

0x5b44,	// (0x000079e8) popup_snote2_single_text_window_t1

0x5b90,	// (0x00007a34) popup_snote2_single_text_window_t2_ParamLimits

0x5b90,	// (0x00007a34) popup_snote2_single_text_window_t2

0x5bdc,	// (0x00007a80) popup_snote2_single_text_window_t3_ParamLimits

0x5bdc,	// (0x00007a80) popup_snote2_single_text_window_t3

0x5c1d,	// (0x00007ac1) popup_snote2_single_text_window_t4_ParamLimits

0x5c1d,	// (0x00007ac1) popup_snote2_single_text_window_t4

0x5c53,	// (0x00007af7) popup_snote2_single_text_window_t5_ParamLimits

0x5c53,	// (0x00007af7) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x00011b21) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x00011b21) popup_snote2_single_text_window_t

0xcb94,	// (0x0000ea38) popup_snote2_single_graphic_window_g1_ParamLimits

0xcb94,	// (0x0000ea38) popup_snote2_single_graphic_window_g1

0x5ca6,	// (0x00007b4a) popup_snote2_single_graphic_window_g2_ParamLimits

0x5ca6,	// (0x00007b4a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x00011b2c) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x00011b2c) popup_snote2_single_graphic_window_g

0x5cce,	// (0x00007b72) popup_snote2_single_graphic_window_t1_ParamLimits

0x5cce,	// (0x00007b72) popup_snote2_single_graphic_window_t1

0x5d1a,	// (0x00007bbe) popup_snote2_single_graphic_window_t2_ParamLimits

0x5d1a,	// (0x00007bbe) popup_snote2_single_graphic_window_t2

0x5bdc,	// (0x00007a80) popup_snote2_single_graphic_window_t3_ParamLimits

0x5bdc,	// (0x00007a80) popup_snote2_single_graphic_window_t3

0x5c1d,	// (0x00007ac1) popup_snote2_single_graphic_window_t4_ParamLimits

0x5c1d,	// (0x00007ac1) popup_snote2_single_graphic_window_t4

0x5c53,	// (0x00007af7) popup_snote2_single_graphic_window_t5_ParamLimits

0x5c53,	// (0x00007af7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x00011b31) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x00011b31) popup_snote2_single_graphic_window_t

0x40f6,	// (0x00005f9a) clock_nsta_pane_cp2_t1

0x40f6,	// (0x00005f9a) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00011958) clock_nsta_pane_cp2_t

0xedc6,	// (0x00010c6a) form_field_data_wide_pane_g1_ParamLimits

0xed0e,	// (0x00010bb2) form_field_data_wide_pane_g2_ParamLimits

0xed0e,	// (0x00010bb2) form_field_data_wide_pane_g2

0xedd2,	// (0x00010c76) form_field_data_wide_pane_g3_ParamLimits

0xedd2,	// (0x00010c76) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00011510) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00011510) form_field_data_wide_pane_g

0xc37a,	// (0x0000e21e) grid_touch_3_pane_ParamLimits

0xc37a,	// (0x0000e21e) grid_touch_3_pane

0xcbbc,	// (0x0000ea60) cell_touch_3_pane_ParamLimits

0xcbbc,	// (0x0000ea60) cell_touch_3_pane

0x46e7,	// (0x0000658b) cell_touch_3_pane_g1

0x46e7,	// (0x0000658b) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x000119dd) cell_touch_3_pane_g

0xeb5f,	// (0x00010a03) cont_query_data_pane

0xeb67,	// (0x00010a0b) cont_query_data_pane_cp1

0x5d94,	// (0x00007c38) button_value_adjust_pane_cp7

0x5d9c,	// (0x00007c40) query_popup_pane_cp3

0xf4de,	// (0x00011382) bg_popup_sub_pane_cp22_ParamLimits

0xa65d,	// (0x0000c501) navi_navi_volume_pane_cp2

0xa66c,	// (0x0000c510) popup_side_volume_key_window_g2

0xa67b,	// (0x0000c51f) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x000115a6) popup_side_volume_key_window_g

0xa68a,	// (0x0000c52e) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x000115ad) popup_side_volume_key_window_t

0xa7db,	// (0x0000c67f) popup_side_volume_key_window_ParamLimits

0x9f88,	// (0x0000be2c) list_double_graphic_pane_g4_ParamLimits

0x9f88,	// (0x0000be2c) list_double_graphic_pane_g4

0xc10d,	// (0x0000dfb1) list_single_2heading_msg_pane_ParamLimits

0xc10d,	// (0x0000dfb1) list_single_2heading_msg_pane

0xcc05,	// (0x0000eaa9) list_single_2heading_msg_pane_g1_ParamLimits

0xcc05,	// (0x0000eaa9) list_single_2heading_msg_pane_g1

0xcc11,	// (0x0000eab5) list_single_2heading_msg_pane_g2_ParamLimits

0xcc11,	// (0x0000eab5) list_single_2heading_msg_pane_g2

0xcc24,	// (0x0000eac8) list_single_2heading_msg_pane_g3_ParamLimits

0xcc24,	// (0x0000eac8) list_single_2heading_msg_pane_g3

0xcc30,	// (0x0000ead4) list_single_2heading_msg_pane_g4_ParamLimits

0xcc30,	// (0x0000ead4) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x00011b3c) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x00011b3c) list_single_2heading_msg_pane_g

0xcc48,	// (0x0000eaec) list_single_2heading_msg_pane_t1_ParamLimits

0xcc48,	// (0x0000eaec) list_single_2heading_msg_pane_t1

0xcc70,	// (0x0000eb14) list_single_2heading_msg_pane_t2_ParamLimits

0xcc70,	// (0x0000eb14) list_single_2heading_msg_pane_t2

0xccdb,	// (0x0000eb7f) list_single_2heading_msg_pane_t3_ParamLimits

0xccdb,	// (0x0000eb7f) list_single_2heading_msg_pane_t3

0x5e8b,	// (0x00007d2f) list_single_2heading_msg_pane_t4_ParamLimits

0x5e8b,	// (0x00007d2f) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x00011b45) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x00011b45) list_single_2heading_msg_pane_t

0xe913,	// (0x000107b7) title_pane_g4_ParamLimits

0xe913,	// (0x000107b7) title_pane_g4

0xf0f6,	// (0x00010f9a) title_pane_stacon_g3_ParamLimits

0xf0f6,	// (0x00010f9a) title_pane_stacon_g3

0x58a2,	// (0x00007746) list_single_2graphic_im_pane_g4_ParamLimits

0x58a2,	// (0x00007746) list_single_2graphic_im_pane_g4

0xbd41,	// (0x0000dbe5) popup_side_volume_key_window_cp

0x35d7,	// (0x0000547b) main_idle_act2_pane_t1

0x17a4,	// (0x00003648) toolbar_button_pane_g10

0x9e15,	// (0x0000bcb9) popup_toolbar_window_cp1

0x40e7,	// (0x00005f8b) clock_nsta_pane_cp_t1

0x40e7,	// (0x00005f8b) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00011953) clock_nsta_pane_cp_t

0xa65d,	// (0x0000c501) navi_navi_volume_pane_cp2_ParamLimits

0xf4f4,	// (0x00011398) popup_side_volume_key_window_g1_ParamLimits

0xa66c,	// (0x0000c510) popup_side_volume_key_window_g2_ParamLimits

0xa67b,	// (0x0000c51f) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x000115a6) popup_side_volume_key_window_g_ParamLimits

0x4751,	// (0x000065f5) fep_hwr_aid_pane

0x47f8,	// (0x0000669c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4818,	// (0x000066bc) fep_hwr_top_pane_g1_ParamLimits

0x482a,	// (0x000066ce) fep_hwr_top_pane_g2_ParamLimits

0x483c,	// (0x000066e0) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x000119a8) fep_hwr_top_pane_g_ParamLimits

0x4851,	// (0x000066f5) fep_hwr_top_text_pane_ParamLimits

0x292b,	// (0x000047cf) aid_touch_tab_arrow_arrow_2

0x2934,	// (0x000047d8) aid_touch_tab_arrow_left_2

0x4765,	// (0x00006609) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x479c,	// (0x00006640) fep_hwr_prediction_pane

0x4ac2,	// (0x00006966) fep_vkb_prediction_pane

0xc75e,	// (0x0000e602) fep_vkb_side_pane_g3_ParamLimits

0xc75e,	// (0x0000e602) fep_vkb_side_pane_g3

0x4b6b,	// (0x00006a0f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5262,	// (0x00007106) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x526f,	// (0x00007113) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00011a52) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5eb0,	// (0x00007d54) fep_hwr_prediction_pane_g1

0x5eba,	// (0x00007d5e) fep_hwr_prediction_pane_g2

0x5ec2,	// (0x00007d66) fep_hwr_prediction_pane_g3

0x5eca,	// (0x00007d6e) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x00011b4e) fep_hwr_prediction_pane_g

0x5eb0,	// (0x00007d54) fep_vkb_prediction_pane_g1

0x5ed2,	// (0x00007d76) fep_vkb_prediction_pane_g2

0x5eda,	// (0x00007d7e) fep_vkb_prediction_pane_g3

0x5ee2,	// (0x00007d86) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x00011b57) fep_vkb_prediction_pane_g

0xbee4,	// (0x0000dd88) slider_set_pane_g3

0xbef8,	// (0x0000dd9c) slider_set_pane_g4

0xbf10,	// (0x0000ddb4) slider_set_pane_g5

0xbee4,	// (0x0000dd88) slider_set_pane_g6

0xbf26,	// (0x0000ddca) slider_set_pane_g7

0x3091,	// (0x00004f35) slider_form_pane_g3

0x309a,	// (0x00004f3e) slider_form_pane_g4

0x30a2,	// (0x00004f46) slider_form_pane_g5

0x3091,	// (0x00004f35) slider_form_pane_g6

0xc0ad,	// (0x0000df51) slider_form_pane_g7

0x38cb,	// (0x0000576f) slider_set_pane_vc_g3

0x38d4,	// (0x00005778) slider_set_pane_vc_g4

0x38dd,	// (0x00005781) slider_set_pane_vc_g5

0x38cb,	// (0x0000576f) slider_set_pane_vc_g6

0x38e6,	// (0x0000578a) slider_set_pane_vc_g7

0x3dcc,	// (0x00005c70) slider_form_pane_vc_g1

0x3dd5,	// (0x00005c79) slider_form_pane_vc_g2

0x3dde,	// (0x00005c82) slider_form_pane_vc_g3

0x3dcc,	// (0x00005c70) slider_form_pane_vc_g4

0x3de7,	// (0x00005c8b) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00011925) slider_form_pane_vc_g

0xe766,	// (0x0001060a) main_idle_act3_pane

0x5eea,	// (0x00007d8e) ai3_links_pane

0xcd49,	// (0x0000ebed) popup_ai3_data_window_ParamLimits

0xcd49,	// (0x0000ebed) popup_ai3_data_window

0xe766,	// (0x0001060a) grid_ai3_links_pane

0xcd61,	// (0x0000ec05) cell_ai3_links_pane_ParamLimits

0xcd61,	// (0x0000ec05) cell_ai3_links_pane

0x5f23,	// (0x00007dc7) bg_popup_sub_pane_cp11

0x5f30,	// (0x00007dd4) cell_ai3_links_pane_g1

0xe766,	// (0x0001060a) bg_popup_sub_pane_cp12

0x5f55,	// (0x00007df9) heading_ai3_data_pane

0x5f5d,	// (0x00007e01) list_ai3_gene_pane

0x5f69,	// (0x00007e0d) popup_ai3_data_window_g1

0x5f71,	// (0x00007e15) heading_ai3_data_pane_g1

0x5f79,	// (0x00007e1d) heading_ai3_data_pane_t1

0xcd7b,	// (0x0000ec1f) list_double_ai3_gene_pane_ParamLimits

0xcd7b,	// (0x0000ec1f) list_double_ai3_gene_pane

0x5f94,	// (0x00007e38) list_single_ai3_gene_pane_ParamLimits

0x5f94,	// (0x00007e38) list_single_ai3_gene_pane

0x46ac,	// (0x00006550) list_highlight_pane_cp7_ParamLimits

0x46ac,	// (0x00006550) list_highlight_pane_cp7

0x5fa1,	// (0x00007e45) list_single_a13_gene_pane_t1_ParamLimits

0x5fa1,	// (0x00007e45) list_single_a13_gene_pane_t1

0x5fb8,	// (0x00007e5c) list_single_ai3_gene_pane_g1

0x5fc1,	// (0x00007e65) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x00011b60) list_single_ai3_gene_pane_g

0x5fc9,	// (0x00007e6d) list_double_ai3_gene_pane_g1_ParamLimits

0x5fc9,	// (0x00007e6d) list_double_ai3_gene_pane_g1

0xcd88,	// (0x0000ec2c) list_double_ai3_gene_pane_t1_ParamLimits

0xcd88,	// (0x0000ec2c) list_double_ai3_gene_pane_t1

0x5ff1,	// (0x00007e95) list_double_ai3_gene_pane_t2_ParamLimits

0x5ff1,	// (0x00007e95) list_double_ai3_gene_pane_t2

0x6006,	// (0x00007eaa) list_double_ai3_gene_pane_t3_ParamLimits

0x6006,	// (0x00007eaa) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x00011b65) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x00011b65) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5dad,	// (0x00007c51) aid_size_min_col_2

0xcbef,	// (0x0000ea93) aid_size_min_msg_ParamLimits

0xcbef,	// (0x0000ea93) aid_size_min_msg

0xc772,	// (0x0000e616) fep_vkb_top_text_pane_g2_ParamLimits

0xc772,	// (0x0000e616) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x000119d8) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x000119d8) fep_vkb_top_text_pane_g

0xe766,	// (0x0001060a) main_hc_apps_shell_pane

0x6023,	// (0x00007ec7) grid_hc_apps_pane_ParamLimits

0x6023,	// (0x00007ec7) grid_hc_apps_pane

0x6032,	// (0x00007ed6) list_hc_apps_pane

0x603a,	// (0x00007ede) scroll_pane_cp37_ParamLimits

0x603a,	// (0x00007ede) scroll_pane_cp37

0xcda4,	// (0x0000ec48) cell_hc_apps_pane_ParamLimits

0xcda4,	// (0x0000ec48) cell_hc_apps_pane

0xce62,	// (0x0000ed06) cell_hc_apps_pane_g1_ParamLimits

0xce62,	// (0x0000ed06) cell_hc_apps_pane_g1

0x6125,	// (0x00007fc9) cell_hc_apps_pane_g2_ParamLimits

0x6125,	// (0x00007fc9) cell_hc_apps_pane_g2

0x6141,	// (0x00007fe5) cell_hc_apps_pane_g3_ParamLimits

0x6141,	// (0x00007fe5) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x00011b6c) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x00011b6c) cell_hc_apps_pane_g

0xce8f,	// (0x0000ed33) cell_hc_apps_pane_t1_ParamLimits

0xce8f,	// (0x0000ed33) cell_hc_apps_pane_t1

0xeaa9,	// (0x0001094d) grid_highlight_pane_cp10_ParamLimits

0xeaa9,	// (0x0001094d) grid_highlight_pane_cp10

0xcecd,	// (0x0000ed71) list_single_hc_apps_pane_ParamLimits

0xcecd,	// (0x0000ed71) list_single_hc_apps_pane

0xcefd,	// (0x0000eda1) list_single_hc_apps_pane_g1

0xcf16,	// (0x0000edba) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x00011b73) list_single_hc_apps_pane_g

0xcf2f,	// (0x0000edd3) list_single_hc_apps_pane_g2_copy1

0xcf4b,	// (0x0000edef) list_single_hc_apps_pane_t1

0xe965,	// (0x00010809) bg_set_opt_pane_cp_ParamLimits

0x9905,	// (0x0000b7a9) setting_slider_pane_t1_ParamLimits

0x991e,	// (0x0000b7c2) setting_slider_pane_t2_ParamLimits

0x9938,	// (0x0000b7dc) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011402) setting_slider_pane_t_ParamLimits

0x9950,	// (0x0000b7f4) slider_set_pane_ParamLimits

0x0a56,	// (0x000028fa) control_pane_g5_ParamLimits

0x0a56,	// (0x000028fa) control_pane_g5

0xbed7,	// (0x0000dd7b) slider_set_pane_g1_ParamLimits

0x2e8d,	// (0x00004d31) slider_set_pane_g2_ParamLimits

0xbee4,	// (0x0000dd88) slider_set_pane_g3_ParamLimits

0xbef8,	// (0x0000dd9c) slider_set_pane_g4_ParamLimits

0xbf10,	// (0x0000ddb4) slider_set_pane_g5_ParamLimits

0xbee4,	// (0x0000dd88) slider_set_pane_g6_ParamLimits

0xbf26,	// (0x0000ddca) slider_set_pane_g7_ParamLimits

0xf949,	// (0x000117ed) slider_set_pane_g_ParamLimits

0x04fa,	// (0x0000239e) navi_icon_text_pane_ParamLimits

0xb33a,	// (0x0000d1de) aid_fill_nsta_2_ParamLimits

0xb371,	// (0x0000d215) aid_touch_tab_arrow_left_ParamLimits

0xb387,	// (0x0000d22b) aid_touch_tab_arrow_right_ParamLimits

0xb422,	// (0x0000d2c6) clock_nsta_pane_ParamLimits

0x290d,	// (0x000047b1) navi_icon_pane_g1_ParamLimits

0x2919,	// (0x000047bd) navi_text_pane_t1_ParamLimits

0x41f7,	// (0x0000609b) navi_icon_text_pane_g1_ParamLimits

0x4203,	// (0x000060a7) navi_icon_text_pane_t1_ParamLimits

0xcefd,	// (0x0000eda1) list_single_hc_apps_pane_g1_ParamLimits

0xcf16,	// (0x0000edba) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x00011b73) list_single_hc_apps_pane_g_ParamLimits

0xcf2f,	// (0x0000edd3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcf4b,	// (0x0000edef) list_single_hc_apps_pane_t1_ParamLimits

0x9736,	// (0x0000b5da) popup_toolbar2_fixed_window_ParamLimits

0x9736,	// (0x0000b5da) popup_toolbar2_fixed_window

0xb24a,	// (0x0000d0ee) popup_toolbar2_float_window

0xe766,	// (0x0001060a) bg_popup_sub_pane_cp27

0x6282,	// (0x00008126) grid_toolbar2_float_pane

0xe766,	// (0x0001060a) bg_popup_sub_pane_cp26

0x6282,	// (0x00008126) grid_toolbar2_fixed_pane

0xcf79,	// (0x0000ee1d) cell_toolbar2_fixed_pane_ParamLimits

0xcf79,	// (0x0000ee1d) cell_toolbar2_fixed_pane

0xcf93,	// (0x0000ee37) cell_toolbar2_fixed_pane_g1

0x168a,	// (0x0000352e) toolbar2_fixed_button_pane

0x175c,	// (0x00003600) toolbar2_fixed_button_pane_g1

0x1764,	// (0x00003608) toolbar2_fixed_button_pane_g2

0x176c,	// (0x00003610) toolbar2_fixed_button_pane_g3

0x1774,	// (0x00003618) toolbar2_fixed_button_pane_g4

0x177c,	// (0x00003620) toolbar2_fixed_button_pane_g5

0x1784,	// (0x00003628) toolbar2_fixed_button_pane_g6

0x178c,	// (0x00003630) toolbar2_fixed_button_pane_g7

0x1794,	// (0x00003638) toolbar2_fixed_button_pane_g8

0x179c,	// (0x00003640) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x000116ef) toolbar2_fixed_button_pane_g

0x62a3,	// (0x00008147) cell_toolbar2_float_pane_ParamLimits

0x62a3,	// (0x00008147) cell_toolbar2_float_pane

0x62b4,	// (0x00008158) cell_toolbar2_float_pane_g1

0x168a,	// (0x0000352e) toolbar2_fixed_button_pane_cp

0xc65a,	// (0x0000e4fe) fep_vkb_accented_list_pane_ParamLimits

0xc65a,	// (0x0000e4fe) fep_vkb_accented_list_pane

0x4eb2,	// (0x00006d56) bg_popup_fep_shadow_pane_g9

0x067a,	// (0x0000251e) bg_popup_fep_shadow_pane_cp3

0xef0f,	// (0x00010db3) list_accented_list_pane

0x62bd,	// (0x00008161) list_single_accented_list_pane_ParamLimits

0x62bd,	// (0x00008161) list_single_accented_list_pane

0x067a,	// (0x0000251e) list_highlight_pane_cp10

0x62ce,	// (0x00008172) list_single_accented_list_pane_t1

0xb174,	// (0x0000d018) popup_slider_window_ParamLimits

0xb174,	// (0x0000d018) popup_slider_window

0x5da4,	// (0x00007c48) aid_indentation_list_msg

0xd088,	// (0x0000ef2c) bg_popup_window_pane_cp19

0x63ee,	// (0x00008292) popup_slider_window_g1

0x640a,	// (0x000082ae) popup_slider_window_g2

0x6426,	// (0x000082ca) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x00011b78) popup_slider_window_g

0x6482,	// (0x00008326) popup_slider_window_t1

0x64f6,	// (0x0000839a) small_volume_slider_vertical_pane

0x46e7,	// (0x0000658b) small_volume_slider_vertical_pane_g1

0x46e7,	// (0x0000658b) small_volume_slider_vertical_pane_g2

0x6512,	// (0x000083b6) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x00011b8a) small_volume_slider_vertical_pane_g

0x9684,	// (0x0000b528) area_side_right_pane_ParamLimits

0x9684,	// (0x0000b528) area_side_right_pane

0xd140,	// (0x0000efe4) aid_size_side_button_ParamLimits

0xd140,	// (0x0000efe4) aid_size_side_button

0xd159,	// (0x0000effd) grid_sctrl_middle_pane_ParamLimits

0xd159,	// (0x0000effd) grid_sctrl_middle_pane

0x654e,	// (0x000083f2) sctrl_sk_bottom_pane

0x655f,	// (0x00008403) sctrl_sk_top_pane

0x6571,	// (0x00008415) aid_touch_sctrl_top

0xeaa9,	// (0x0001094d) bg_sctrl_sk_pane_ParamLimits

0xeaa9,	// (0x0001094d) bg_sctrl_sk_pane

0x657e,	// (0x00008422) sctrl_sk_top_pane_g1

0x658b,	// (0x0000842f) sctrl_sk_top_pane_t1

0x6571,	// (0x00008415) aid_touch_sctrl_bottom

0xeaa9,	// (0x0001094d) bg_sctrl_sk_pane_cp_ParamLimits

0xeaa9,	// (0x0001094d) bg_sctrl_sk_pane_cp

0x65a6,	// (0x0000844a) sctrl_sk_bottom_pane_g1

0x658b,	// (0x0000842f) sctrl_sk_bottom_pane_t1

0xd173,	// (0x0000f017) cell_sctrl_middle_pane_ParamLimits

0xd173,	// (0x0000f017) cell_sctrl_middle_pane

0xd184,	// (0x0000f028) aid_touch_sctrl_middle_ParamLimits

0xd184,	// (0x0000f028) aid_touch_sctrl_middle

0xd191,	// (0x0000f035) bg_sctrl_middle_pane_ParamLimits

0xd191,	// (0x0000f035) bg_sctrl_middle_pane

0x666b,	// (0x0000850f) cell_sctrl_middle_pane_g1_ParamLimits

0x666b,	// (0x0000850f) cell_sctrl_middle_pane_g1

0xd19f,	// (0x0000f043) cell_sctrl_middle_pane_g2_ParamLimits

0xd19f,	// (0x0000f043) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x00011b96) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x00011b96) cell_sctrl_middle_pane_g

0x175c,	// (0x00003600) bg_sctrl_middle_pane_g1

0x1764,	// (0x00003608) bg_sctrl_middle_pane_g2

0x176c,	// (0x00003610) bg_sctrl_middle_pane_g3

0x1774,	// (0x00003618) bg_sctrl_middle_pane_g4

0x177c,	// (0x00003620) bg_sctrl_middle_pane_g5

0x1784,	// (0x00003628) bg_sctrl_middle_pane_g6

0x178c,	// (0x00003630) bg_sctrl_middle_pane_g7

0x1794,	// (0x00003638) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x00011b9b) bg_sctrl_middle_pane_g

0x179c,	// (0x00003640) bg_sctrl_middle_pane_g8_copy1

0x175c,	// (0x00003600) bg_sctrl_sk_pane_g1

0x1764,	// (0x00003608) bg_sctrl_sk_pane_g2

0x176c,	// (0x00003610) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x000116ef) bg_sctrl_sk_pane_g

0xec73,	// (0x00010b17) aid_size_touch_scroll_bar

0x1774,	// (0x00003618) bg_sctrl_sk_pane_g4

0x177c,	// (0x00003620) bg_sctrl_sk_pane_g5

0x1784,	// (0x00003628) bg_sctrl_sk_pane_g6

0x178c,	// (0x00003630) bg_sctrl_sk_pane_g7

0x1794,	// (0x00003638) bg_sctrl_sk_pane_g8

0x179c,	// (0x00003640) bg_sctrl_sk_pane_g9

0x0cb2,	// (0x00002b56) popup_fep_china_hwr2_fs_candidate_window

0xac14,	// (0x0000cab8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xac14,	// (0x0000cab8) popup_fep_china_hwr2_fs_control_window

0x4b6b,	// (0x00006a0f) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x00011b91) sctrl_sk_top_pane_g

0xd1ab,	// (0x0000f04f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1ab,	// (0x0000f04f) aid_fep_china_hwr2_fs_cell

0xd1bf,	// (0x0000f063) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd1bf,	// (0x0000f063) bg_popup_fep_shadow_pane_cp4

0xd1d6,	// (0x0000f07a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd1d6,	// (0x0000f07a) bg_popup_fep_shadow_pane_cp5

0xd1e8,	// (0x0000f08c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd1e8,	// (0x0000f08c) popup_fep_china_hwr2_fs_control_bar_grid

0xf3d1,	// (0x00011275) popup_fep_china_hwr2_fs_control_funtion_grid

0x663f,	// (0x000084e3) aid_fep_china_hwr2_fs_candi_cell

0xe766,	// (0x0001060a) bg_popup_fep_shadow_pane_cp6

0x6649,	// (0x000084ed) popup_fep_china_hwr2_fs_candidate_grid

0xd1fc,	// (0x0000f0a0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd1fc,	// (0x0000f0a0) cell_fep_china_hwr2_fs_funtion_grid

0x46e7,	// (0x0000658b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x666b,	// (0x0000850f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x666b,	// (0x0000850f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6679,	// (0x0000851d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6679,	// (0x0000851d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x00011bac) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x00011bac) cell_fep_china_hwr2_fs_funtion_grid_g

0xd214,	// (0x0000f0b8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd214,	// (0x0000f0b8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd229,	// (0x0000f0cd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd229,	// (0x0000f0cd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00011bb1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00011bb1) cell_fep_china_hwr2_fs_funtion_grid_t

0x66c0,	// (0x00008564) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x66c8,	// (0x0000856c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x66d0,	// (0x00008574) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x00011bb6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x66d8,	// (0x0000857c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x66d8,	// (0x0000857c) cell_fep_china_hwr2_fs_candidate_grid

0x66f1,	// (0x00008595) popup_fep_china_hwr2_fs_candidate_grid_g20

0x66f9,	// (0x0000859d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46e7,	// (0x0000658b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46e7,	// (0x0000658b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x000119dd) cell_fep_china_hwr2_fs_candidate_grid_g

0x6701,	// (0x000085a5) cell_fep_china_hwr2_fs_candidate_grid_t1

0x12b1,	// (0x00003155) clock_nsta_pane_cp_24_ParamLimits

0x12b1,	// (0x00003155) clock_nsta_pane_cp_24

0x132f,	// (0x000031d3) indicator_nsta_pane_cp_24_ParamLimits

0x132f,	// (0x000031d3) indicator_nsta_pane_cp_24

0x2778,	// (0x0000461c) heading_pane_g1

0x0001,

0xf8b0,	// (0x00011754) heading_pane_g

0x3368,	// (0x0000520c) grid_sct_catagory_button_pane

0x3398,	// (0x0000523c) scroll_pane_cp5_ParamLimits

0x428d,	// (0x00006131) button_value_adjust_pane_cp5_ParamLimits

0x428d,	// (0x00006131) button_value_adjust_pane_cp5

0x4387,	// (0x0000622b) form2_midp_time_pane_ParamLimits

0x670f,	// (0x000085b3) cell_sct_catagory_button_pane_ParamLimits

0x670f,	// (0x000085b3) cell_sct_catagory_button_pane

0x46ac,	// (0x00006550) bg_button_pane_cp01_ParamLimits

0x46ac,	// (0x00006550) bg_button_pane_cp01

0x46e7,	// (0x0000658b) cell_sct_catagory_button_pane_g1

0xb1ed,	// (0x0000d091) popup_tb_extension_window

0xd245,	// (0x0000f0e9) aid_size_cell_ext_ParamLimits

0xd245,	// (0x0000f0e9) aid_size_cell_ext

0xec25,	// (0x00010ac9) bg_tb_trans_pane_cp1_ParamLimits

0xec25,	// (0x00010ac9) bg_tb_trans_pane_cp1

0xd26b,	// (0x0000f10f) grid_tb_ext_pane_ParamLimits

0xd26b,	// (0x0000f10f) grid_tb_ext_pane

0xd2aa,	// (0x0000f14e) cell_tb_ext_pane_ParamLimits

0xd2aa,	// (0x0000f14e) cell_tb_ext_pane

0xd2d2,	// (0x0000f176) cell_tb_ext_pane_g1_ParamLimits

0xd2d2,	// (0x0000f176) cell_tb_ext_pane_g1

0x67a5,	// (0x00008649) cell_tb_ext_pane_t1

0xeaa9,	// (0x0001094d) list_highlight_pane_cp11_ParamLimits

0xeaa9,	// (0x0001094d) list_highlight_pane_cp11

0x974b,	// (0x0000b5ef) popup_uni_indicator_window_ParamLimits

0x974b,	// (0x0000b5ef) popup_uni_indicator_window

0xeda7,	// (0x00010c4b) bg_popup_sub_pane_cp14

0xd2ef,	// (0x0000f193) list_uniindi_pane

0xd2fb,	// (0x0000f19f) uniindi_top_pane

0xeaa9,	// (0x0001094d) bg_uniindi_top_pane

0xd31a,	// (0x0000f1be) uniindi_top_pane_g1

0xd330,	// (0x0000f1d4) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x00011bbd) uniindi_top_pane_g

0xd34d,	// (0x0000f1f1) uniindi_top_pane_t1

0x6856,	// (0x000086fa) list_single_uniindi_pane_ParamLimits

0x6856,	// (0x000086fa) list_single_uniindi_pane

0x46e7,	// (0x0000658b) bg_uniindi_top_pane_g1

0x6868,	// (0x0000870c) list_single_uniindi_pane_g1

0x687b,	// (0x0000871f) list_single_uniindi_pane_t1

0xe766,	// (0x0001060a) control_bg_pane

0x68a0,	// (0x00008744) bg_sctrl_sk_pane_cp1

0x68a9,	// (0x0000874d) bg_sctrl_sk_pane_cp2

0x68b2,	// (0x00008756) control_bg_pane_g1

0x68bb,	// (0x0000875f) control_bg_pane_g2

0x0001,

0xfd22,	// (0x00011bc6) control_bg_pane_g

0x409c,	// (0x00005f40) cell_indicator_nsta_pane_g1_ParamLimits

0xc3a7,	// (0x0000e24b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00011941) cell_indicator_nsta_pane_g_ParamLimits

0x440f,	// (0x000062b3) form2_midp_time_pane_t1_ParamLimits

0x4743,	// (0x000065e7) main_idle_act4_pane_ParamLimits

0x4743,	// (0x000065e7) main_idle_act4_pane

0xb1ed,	// (0x0000d091) popup_tb_extension_window_ParamLimits

0xd290,	// (0x0000f134) tb_ext_find_pane_ParamLimits

0xd290,	// (0x0000f134) tb_ext_find_pane

0x68c4,	// (0x00008768) ai_gene_pane_1_cp1

0x07c5,	// (0x00002669) ai_gene_pane_2_cp1

0xd377,	// (0x0000f21b) list_single_idle_plugin_calendar_pane

0x68d5,	// (0x00008779) list_single_idle_plugin_notification_pane

0x68de,	// (0x00008782) list_single_idle_plugin_player_pane

0xd380,	// (0x0000f224) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd380,	// (0x0000f224) list_single_idle_plugin_shortcut_pane

0xd3a8,	// (0x0000f24c) main_idle_act4_pane_t1

0xd3bf,	// (0x0000f263) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x00011bcb) main_idle_act4_pane_t

0xd3d6,	// (0x0000f27a) middle_sk_idle_act4_pane_ParamLimits

0xd3d6,	// (0x0000f27a) middle_sk_idle_act4_pane

0xd3f2,	// (0x0000f296) popup_clock_digital_analogue_window_cp2

0xd41e,	// (0x0000f2c2) shortcut_wheel_idle_act4_pane_ParamLimits

0xd41e,	// (0x0000f2c2) shortcut_wheel_idle_act4_pane

0x46e7,	// (0x0000658b) shortcut_wheel_idle_act4_pane_g1

0x46e7,	// (0x0000658b) shortcut_wheel_idle_act4_pane_g2

0x46e7,	// (0x0000658b) shortcut_wheel_idle_act4_pane_g3

0x46e7,	// (0x0000658b) shortcut_wheel_idle_act4_pane_g4

0x46e7,	// (0x0000658b) shortcut_wheel_idle_act4_pane_g5

0x6971,	// (0x00008815) shortcut_wheel_idle_act4_pane_g6

0x6979,	// (0x0000881d) shortcut_wheel_idle_act4_pane_g7

0x6981,	// (0x00008825) shortcut_wheel_idle_act4_pane_g8

0x6989,	// (0x0000882d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x00011bd0) shortcut_wheel_idle_act4_pane_g

0x47f8,	// (0x0000669c) middle_sk_idle_act4_pane_g1_ParamLimits

0x47f8,	// (0x0000669c) middle_sk_idle_act4_pane_g1

0xd49b,	// (0x0000f33f) middle_sk_idle_act4_pane_g2_ParamLimits

0xd49b,	// (0x0000f33f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x00011bf3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x00011bf3) middle_sk_idle_act4_pane_g

0xd4b3,	// (0x0000f357) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4b3,	// (0x0000f357) middle_sk_idle_act4_pane_t1

0xd4e2,	// (0x0000f386) grid_ai_shortcut_pane_ParamLimits

0xd4e2,	// (0x0000f386) grid_ai_shortcut_pane

0xd4ff,	// (0x0000f3a3) list_highlight_pane_cp16_ParamLimits

0xd4ff,	// (0x0000f3a3) list_highlight_pane_cp16

0xd50c,	// (0x0000f3b0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd50c,	// (0x0000f3b0) list_single_idle_plugin_shortcut_pane_g1

0xd518,	// (0x0000f3bc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd518,	// (0x0000f3bc) list_single_idle_plugin_shortcut_pane_g2

0xd534,	// (0x0000f3d8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd534,	// (0x0000f3d8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x00011bf8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x00011bf8) list_single_idle_plugin_shortcut_pane_g

0xd549,	// (0x0000f3ed) cell_ai_shortcut_pane_ParamLimits

0xd549,	// (0x0000f3ed) cell_ai_shortcut_pane

0xd55f,	// (0x0000f403) cell_ai_shortcut_pane_g1_ParamLimits

0xd55f,	// (0x0000f403) cell_ai_shortcut_pane_g1

0x68c4,	// (0x00008768) ai_gene_pane_1_cp2

0x6ab9,	// (0x0000895d) ai_gene_pane_2_cp2

0x6ac1,	// (0x00008965) list_highlight_pane_cp15

0xd581,	// (0x0000f425) list_single_idle_plugin_calendar_pane_g1

0x6ac1,	// (0x00008965) list_highlight_pane_cp17

0x6ad2,	// (0x00008976) list_single_idle_plugin_calendar_pane_g1_copy1

0x6ada,	// (0x0000897e) list_single_idle_plugin_player_pane_g1

0x3679,	// (0x0000551d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x00011bff) list_single_idle_plugin_player_pane_g

0x6ae2,	// (0x00008986) list_single_idle_plugin_player_pane_t1

0x6af0,	// (0x00008994) list_single_idle_plugin_player_pane_t2

0x6afe,	// (0x000089a2) list_single_idle_plugin_player_pane_t3

0x6b0c,	// (0x000089b0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x00011c04) list_single_idle_plugin_player_pane_t

0x6b1a,	// (0x000089be) wait_bar_pane_cp15

0x6b22,	// (0x000089c6) grid_ai_notification_pane

0x3679,	// (0x0000551d) list_single_idle_plugin_notification_pane_g1

0xd589,	// (0x0000f42d) cell_ai_notification_pane_ParamLimits

0xd589,	// (0x0000f42d) cell_ai_notification_pane

0x6b38,	// (0x000089dc) cell_ai_notification_pane_g1

0x6b40,	// (0x000089e4) cell_ai_notification_pane_t1

0xd596,	// (0x0000f43a) tb_ext_find_button_pane

0xd59e,	// (0x0000f442) tb_ext_find_pane_g1

0xd5a6,	// (0x0000f44a) tb_ext_find_pane_t1

0xf403,	// (0x000112a7) tb_ext_find_button_pane_g1

0xd5b4,	// (0x0000f458) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x00011c0d) tb_ext_find_button_pane_g

0xd3a8,	// (0x0000f24c) main_idle_act4_pane_t1_ParamLimits

0xd3bf,	// (0x0000f263) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x00011bcb) main_idle_act4_pane_t_ParamLimits

0xd3f2,	// (0x0000f296) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd40a,	// (0x0000f2ae) sat_plugin_idle_act4_pane_ParamLimits

0xd40a,	// (0x0000f2ae) sat_plugin_idle_act4_pane

0xd5bd,	// (0x0000f461) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd5bd,	// (0x0000f461) sat_plugin_idle_act4_pane_t1

0xd5d5,	// (0x0000f479) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd5d5,	// (0x0000f479) sat_plugin_idle_act4_pane_t2

0xd5ed,	// (0x0000f491) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd5ed,	// (0x0000f491) sat_plugin_idle_act4_pane_t3

0xd605,	// (0x0000f4a9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd605,	// (0x0000f4a9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x00011c12) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x00011c12) sat_plugin_idle_act4_pane_t

0x96c6,	// (0x0000b56a) popup_battery_window_ParamLimits

0x96c6,	// (0x0000b56a) popup_battery_window

0xeaa9,	// (0x0001094d) bg_popup_sub_pane_cp25_ParamLimits

0xeaa9,	// (0x0001094d) bg_popup_sub_pane_cp25

0x6bc1,	// (0x00008a65) popup_battery_window_g1_ParamLimits

0x6bc1,	// (0x00008a65) popup_battery_window_g1

0x6bcd,	// (0x00008a71) popup_battery_window_t1_ParamLimits

0x6bcd,	// (0x00008a71) popup_battery_window_t1

0x6bdf,	// (0x00008a83) popup_battery_window_t2_ParamLimits

0x6bdf,	// (0x00008a83) popup_battery_window_t2

0x0001,

0xfd77,	// (0x00011c1b) popup_battery_window_t_ParamLimits

0xfd77,	// (0x00011c1b) popup_battery_window_t

0xa83a,	// (0x0000c6de) midp_canvas_pane_ParamLimits

0xa8ac,	// (0x0000c750) midp_keypad_pane_ParamLimits

0xa8ac,	// (0x0000c750) midp_keypad_pane

0x0c08,	// (0x00002aac) main_midp_pane_ParamLimits

0xc3b4,	// (0x0000e258) signal_pane_g2_cp_ParamLimits

0xd61d,	// (0x0000f4c1) aid_size_cell_midp_keypad_ParamLimits

0xd61d,	// (0x0000f4c1) aid_size_cell_midp_keypad

0xd63b,	// (0x0000f4df) midp_keyp_game_grid_pane_ParamLimits

0xd63b,	// (0x0000f4df) midp_keyp_game_grid_pane

0xd662,	// (0x0000f506) midp_keyp_rocker_pane_ParamLimits

0xd662,	// (0x0000f506) midp_keyp_rocker_pane

0xd6b3,	// (0x0000f557) midp_keyp_sk_left_pane_ParamLimits

0xd6b3,	// (0x0000f557) midp_keyp_sk_left_pane

0xd707,	// (0x0000f5ab) midp_keyp_sk_right_pane_ParamLimits

0xd707,	// (0x0000f5ab) midp_keyp_sk_right_pane

0xe766,	// (0x0001060a) bg_button_pane_cp03

0xd75b,	// (0x0000f5ff) midp_keyp_sk_left_pane_g1

0xe766,	// (0x0001060a) bg_button_pane_cp04

0xd75b,	// (0x0000f5ff) midp_keyp_sk_right_pane_g1

0x46e7,	// (0x0000658b) midp_keyp_rocker_pane_g1

0xd764,	// (0x0000f608) keyp_game_cell_pane_ParamLimits

0xd764,	// (0x0000f608) keyp_game_cell_pane

0xe766,	// (0x0001060a) bg_button_pane_cp02

0xd788,	// (0x0000f62c) keyp_game_cell_pane_g1

0x96e6,	// (0x0000b58a) popup_fep_vkb2_window_ParamLimits

0x96e6,	// (0x0000b58a) popup_fep_vkb2_window

0xd791,	// (0x0000f635) aid_size_cell_vkb2_ParamLimits

0xd791,	// (0x0000f635) aid_size_cell_vkb2

0xd7cf,	// (0x0000f673) popup_fep_vkb2_window_g1_ParamLimits

0xd7cf,	// (0x0000f673) popup_fep_vkb2_window_g1

0xd81f,	// (0x0000f6c3) vkb2_area_bottom_pane_ParamLimits

0xd81f,	// (0x0000f6c3) vkb2_area_bottom_pane

0xd873,	// (0x0000f717) vkb2_area_keypad_pane_ParamLimits

0xd873,	// (0x0000f717) vkb2_area_keypad_pane

0xd8bb,	// (0x0000f75f) vkb2_area_top_pane_ParamLimits

0xd8bb,	// (0x0000f75f) vkb2_area_top_pane

0xd941,	// (0x0000f7e5) vkb2_top_entry_pane_ParamLimits

0xd941,	// (0x0000f7e5) vkb2_top_entry_pane

0xd96e,	// (0x0000f812) vkb2_top_grid_left_pane_ParamLimits

0xd96e,	// (0x0000f812) vkb2_top_grid_left_pane

0xd98e,	// (0x0000f832) vkb2_top_grid_right_pane_ParamLimits

0xd98e,	// (0x0000f832) vkb2_top_grid_right_pane

0x6f60,	// (0x00008e04) vkb2_cell_keypad_pane_ParamLimits

0x6f60,	// (0x00008e04) vkb2_cell_keypad_pane

0xd9d4,	// (0x0000f878) vkb2_area_bottom_grid_pane_ParamLimits

0xd9d4,	// (0x0000f878) vkb2_area_bottom_grid_pane

0xd9fe,	// (0x0000f8a2) vkb2_area_bottom_pane_g1_ParamLimits

0xd9fe,	// (0x0000f8a2) vkb2_area_bottom_pane_g1

0xda24,	// (0x0000f8c8) vkb2_area_bottom_pane_g2_ParamLimits

0xda24,	// (0x0000f8c8) vkb2_area_bottom_pane_g2

0xda55,	// (0x0000f8f9) vkb2_area_bottom_pane_g3_ParamLimits

0xda55,	// (0x0000f8f9) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x00011c20) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x00011c20) vkb2_area_bottom_pane_g

0x710a,	// (0x00008fae) vkb2_top_cell_left_pane_ParamLimits

0x710a,	// (0x00008fae) vkb2_top_cell_left_pane

0xdabf,	// (0x0000f963) vkb2_top_entry_pane_g1_ParamLimits

0xdabf,	// (0x0000f963) vkb2_top_entry_pane_g1

0xdacd,	// (0x0000f971) vkb2_top_entry_pane_t1_ParamLimits

0xdacd,	// (0x0000f971) vkb2_top_entry_pane_t1

0x7172,	// (0x00009016) vkb2_top_entry_pane_t2_ParamLimits

0x7172,	// (0x00009016) vkb2_top_entry_pane_t2

0x71a4,	// (0x00009048) vkb2_top_entry_pane_t3_ParamLimits

0x71a4,	// (0x00009048) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x00011c27) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x00011c27) vkb2_top_entry_pane_t

0xdb06,	// (0x0000f9aa) vkb2_top_grid_right_pane_g1_ParamLimits

0xdb06,	// (0x0000f9aa) vkb2_top_grid_right_pane_g1

0x720b,	// (0x000090af) vkb2_top_grid_right_pane_g2_ParamLimits

0x720b,	// (0x000090af) vkb2_top_grid_right_pane_g2

0x7223,	// (0x000090c7) vkb2_top_grid_right_pane_g3_ParamLimits

0x7223,	// (0x000090c7) vkb2_top_grid_right_pane_g3

0xdb1c,	// (0x0000f9c0) vkb2_top_grid_right_pane_g4_ParamLimits

0xdb1c,	// (0x0000f9c0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x00011c2e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x00011c2e) vkb2_top_grid_right_pane_g

0x7251,	// (0x000090f5) vkb2_top_cell_left_pane_g1

0x7268,	// (0x0000910c) vkb2_cell_keypad_pane_g1_ParamLimits

0x7268,	// (0x0000910c) vkb2_cell_keypad_pane_g1

0x7276,	// (0x0000911a) vkb2_cell_keypad_pane_t1_ParamLimits

0x7276,	// (0x0000911a) vkb2_cell_keypad_pane_t1

0x728d,	// (0x00009131) vkb2_cell_bottom_grid_pane_ParamLimits

0x728d,	// (0x00009131) vkb2_cell_bottom_grid_pane

0x72c6,	// (0x0000916a) vkb2_cell_bottom_grid_pane_g1

0xd43f,	// (0x0000f2e3) aid_call2_pane_cp02

0xd447,	// (0x0000f2eb) aid_call_pane_cp02

0xd44f,	// (0x0000f2f3) clock_digital_number_pane_cp10

0xd457,	// (0x0000f2fb) clock_digital_number_pane_cp11

0xd45f,	// (0x0000f303) clock_digital_number_pane_cp12

0xd467,	// (0x0000f30b) clock_digital_number_pane_cp13

0xd46f,	// (0x0000f313) clock_digital_separator_pane_cp10

0xf403,	// (0x000112a7) popup_clock_digital_analogue_window_cp2_g1

0xf403,	// (0x000112a7) popup_clock_digital_analogue_window_cp2_g2

0xd477,	// (0x0000f31b) popup_clock_digital_analogue_window_cp2_g3

0xf403,	// (0x000112a7) popup_clock_digital_analogue_window_cp2_g4

0xd477,	// (0x0000f31b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x00011be3) popup_clock_digital_analogue_window_cp2_g

0xd47f,	// (0x0000f323) popup_clock_digital_analogue_window_cp2_t1

0xd48d,	// (0x0000f331) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x00011bee) popup_clock_digital_analogue_window_cp2_t

0x46e7,	// (0x0000658b) clock_digital_number_pane_cp10_g1

0x46e7,	// (0x0000658b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x000119dd) clock_digital_number_pane_cp10_g

0x46e7,	// (0x0000658b) clock_digital_separator_pane_cp10_g1

0x46e7,	// (0x0000658b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x000119dd) clock_digital_separator_pane_cp10_g

0xd33c,	// (0x0000f1e0) uniindi_top_pane_g3

0x681f,	// (0x000086c3) uniindi_top_pane_g4

0x6feb,	// (0x00008e8f) vkb2_row_keypad_pane_ParamLimits

0x6feb,	// (0x00008e8f) vkb2_row_keypad_pane

0x72e2,	// (0x00009186) vkb2_cell_t_keypad_pane_ParamLimits

0x72e2,	// (0x00009186) vkb2_cell_t_keypad_pane

0x72f2,	// (0x00009196) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x72f2,	// (0x00009196) vkb2_cell_t_keypad_pane_cp08

0x7305,	// (0x000091a9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7305,	// (0x000091a9) vkb2_cell_t_keypad_pane_cp09

0x7319,	// (0x000091bd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7319,	// (0x000091bd) vkb2_cell_t_keypad_pane_cp01

0x732a,	// (0x000091ce) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x732a,	// (0x000091ce) vkb2_cell_t_keypad_pane_cp02

0x733b,	// (0x000091df) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x733b,	// (0x000091df) vkb2_cell_t_keypad_pane_cp03

0x734c,	// (0x000091f0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x734c,	// (0x000091f0) vkb2_cell_t_keypad_pane_cp04

0x735d,	// (0x00009201) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x735d,	// (0x00009201) vkb2_cell_t_keypad_pane_cp05

0x736e,	// (0x00009212) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x736e,	// (0x00009212) vkb2_cell_t_keypad_pane_cp06

0x737f,	// (0x00009223) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x737f,	// (0x00009223) vkb2_cell_t_keypad_pane_cp07

0x7390,	// (0x00009234) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7390,	// (0x00009234) vkb2_cell_t_keypad_pane_cp10

0x4b6b,	// (0x00006a0f) vkb2_cell_t_keypad_pane_g1

0x73a5,	// (0x00009249) vkb2_cell_t_keypad_pane_t1

0xe766,	// (0x0001060a) popup_grid_graphic2_window

0xdb32,	// (0x0000f9d6) aid_size_cell_graphic2_ParamLimits

0xdb32,	// (0x0000f9d6) aid_size_cell_graphic2

0xdb70,	// (0x0000fa14) bg_popup_window_pane_cp21_ParamLimits

0xdb70,	// (0x0000fa14) bg_popup_window_pane_cp21

0xdb7e,	// (0x0000fa22) graphic2_pages_pane_ParamLimits

0xdb7e,	// (0x0000fa22) graphic2_pages_pane

0xdbd4,	// (0x0000fa78) grid_graphic2_control_pane_ParamLimits

0xdbd4,	// (0x0000fa78) grid_graphic2_control_pane

0xdc1c,	// (0x0000fac0) grid_graphic2_pane_ParamLimits

0xdc1c,	// (0x0000fac0) grid_graphic2_pane

0xdca3,	// (0x0000fb47) cell_graphic2_pane

0xe766,	// (0x0001060a) main_comp_mode_pane

0x5f5d,	// (0x00007e01) list_ai3_gene_pane_ParamLimits

0xd088,	// (0x0000ef2c) bg_popup_window_pane_cp19_ParamLimits

0x6390,	// (0x00008234) bg_touch_area_indi_pane_ParamLimits

0x6390,	// (0x00008234) bg_touch_area_indi_pane

0x63a6,	// (0x0000824a) bg_touch_area_indi_pane_cp01_ParamLimits

0x63a6,	// (0x0000824a) bg_touch_area_indi_pane_cp01

0x63bc,	// (0x00008260) bg_touch_area_indi_pane_cp02_ParamLimits

0x63bc,	// (0x00008260) bg_touch_area_indi_pane_cp02

0x63d4,	// (0x00008278) bg_touch_area_indi_pane_cp03_ParamLimits

0x63d4,	// (0x00008278) bg_touch_area_indi_pane_cp03

0x63ee,	// (0x00008292) popup_slider_window_g1_ParamLimits

0x640a,	// (0x000082ae) popup_slider_window_g2_ParamLimits

0x6426,	// (0x000082ca) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x00011b78) popup_slider_window_g_ParamLimits

0x6482,	// (0x00008326) popup_slider_window_t1_ParamLimits

0x64f6,	// (0x0000839a) small_volume_slider_vertical_pane_ParamLimits

0xdca3,	// (0x0000fb47) cell_graphic2_pane_ParamLimits

0xdcfe,	// (0x0000fba2) bg_button_pane_cp10_ParamLimits

0xdcfe,	// (0x0000fba2) bg_button_pane_cp10

0xdd11,	// (0x0000fbb5) bg_button_pane_cp11_ParamLimits

0xdd11,	// (0x0000fbb5) bg_button_pane_cp11

0xdd24,	// (0x0000fbc8) graphic2_pages_pane_g1_ParamLimits

0xdd24,	// (0x0000fbc8) graphic2_pages_pane_g1

0xdd3f,	// (0x0000fbe3) graphic2_pages_pane_g2_ParamLimits

0xdd3f,	// (0x0000fbe3) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x00011c3c) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x00011c3c) graphic2_pages_pane_g

0xdd57,	// (0x0000fbfb) graphic2_pages_pane_t1_ParamLimits

0xdd57,	// (0x0000fbfb) graphic2_pages_pane_t1

0xdd6f,	// (0x0000fc13) cell_graphic2_control_pane_ParamLimits

0xdd6f,	// (0x0000fc13) cell_graphic2_control_pane

0xdda1,	// (0x0000fc45) cell_graphic2_pane_g1_ParamLimits

0xdda1,	// (0x0000fc45) cell_graphic2_pane_g1

0x4993,	// (0x00006837) cell_graphic2_pane_g2_ParamLimits

0x4993,	// (0x00006837) cell_graphic2_pane_g2

0xddae,	// (0x0000fc52) cell_graphic2_pane_g3_ParamLimits

0xddae,	// (0x0000fc52) cell_graphic2_pane_g3

0x49a0,	// (0x00006844) cell_graphic2_pane_g4_ParamLimits

0x49a0,	// (0x00006844) cell_graphic2_pane_g4

0xddbb,	// (0x0000fc5f) cell_graphic2_pane_g5_ParamLimits

0xddbb,	// (0x0000fc5f) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x00011c41) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x00011c41) cell_graphic2_pane_g

0xdddb,	// (0x0000fc7f) cell_graphic2_pane_t1_ParamLimits

0xdddb,	// (0x0000fc7f) cell_graphic2_pane_t1

0x276c,	// (0x00004610) grid_highlight_pane_cp11_ParamLimits

0x276c,	// (0x00004610) grid_highlight_pane_cp11

0xeaa9,	// (0x0001094d) bg_button_pane_cp05

0xde27,	// (0x0000fccb) cell_graphic2_control_pane_g1

0x46e7,	// (0x0000658b) bg_touch_area_indi_pane_g1

0x7681,	// (0x00009525) aid_cmod_rocker_key_size

0x768b,	// (0x0000952f) aid_cmode_itu_key_size

0x7695,	// (0x00009539) main_cmode_video_pane

0x769f,	// (0x00009543) main_comp_mode_itu_pane

0x76ab,	// (0x0000954f) main_comp_mode_rocker_pane

0x76b7,	// (0x0000955b) cell_cmode_rocker_pane_ParamLimits

0x76b7,	// (0x0000955b) cell_cmode_rocker_pane

0x76c9,	// (0x0000956d) cell_cmode_itu_pane_ParamLimits

0x76c9,	// (0x0000956d) cell_cmode_itu_pane

0xeda7,	// (0x00010c4b) bg_button_pane_cp06_ParamLimits

0xeda7,	// (0x00010c4b) bg_button_pane_cp06

0x4b6b,	// (0x00006a0f) cell_cmode_rocker_pane_g1_ParamLimits

0x4b6b,	// (0x00006a0f) cell_cmode_rocker_pane_g1

0x666b,	// (0x0000850f) cell_cmode_rocker_pane_g2_ParamLimits

0x666b,	// (0x0000850f) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x00011c51) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x00011c51) cell_cmode_rocker_pane_g

0xe766,	// (0x0001060a) bg_button_pane_cp07

0x76de,	// (0x00009582) cell_cmode_itu_pane_g1

0x76e7,	// (0x0000958b) cell_cmode_itu_pane_t1

0x76f5,	// (0x00009599) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x00011c56) cell_cmode_itu_pane_t

0x6890,	// (0x00008734) aid_touch_ctrl_left

0x6898,	// (0x0000873c) aid_touch_ctrl_right

0xe766,	// (0x0001060a) compa_mode_pane

0xde4d,	// (0x0000fcf1) aid_cmod_rocker_key_size_cp

0xde57,	// (0x0000fcfb) aid_cmode_itu_key_size_cp

0x7717,	// (0x000095bb) compa_mode_pane_g1

0x771f,	// (0x000095c3) compa_mode_pane_g2

0x7727,	// (0x000095cb) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x00011c5b) compa_mode_pane_g

0xde61,	// (0x0000fd05) main_comp_mode_itu_pane_cp

0xde69,	// (0x0000fd0d) main_comp_mode_rocker_pane_cp

0xde71,	// (0x0000fd15) cell_cmode_itu_pane_cp_ParamLimits

0xde71,	// (0x0000fd15) cell_cmode_itu_pane_cp

0xde86,	// (0x0000fd2a) cell_cmode_rocker_pane_cp_ParamLimits

0xde86,	// (0x0000fd2a) cell_cmode_rocker_pane_cp

0xeda7,	// (0x00010c4b) bg_button_pane_cp06_cp_ParamLimits

0xeda7,	// (0x00010c4b) bg_button_pane_cp06_cp

0x4b6b,	// (0x00006a0f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4b6b,	// (0x00006a0f) cell_cmode_rocker_pane_g1_cp

0x46e7,	// (0x0000658b) cell_cmode_rocker_pane_g2_cp

0xe766,	// (0x0001060a) bg_button_pane_cp07_cp

0xde98,	// (0x0000fd3c) cell_cmode_itu_pane_g1_cp

0xdea1,	// (0x0000fd45) cell_cmode_itu_pane_t1_cp

0xdea1,	// (0x0000fd45) cell_cmode_itu_pane_t2_cp

0xc0a3,	// (0x0000df47) settings_code_pane_cp2

0xe965,	// (0x00010809) bg_popup_window_pane_cp3_ParamLimits

0xebc2,	// (0x00010a66) heading_pane_cp3_ParamLimits

0xebce,	// (0x00010a72) listscroll_popup_graphic_pane_ParamLimits

0x4751,	// (0x000065f5) fep_hwr_aid_pane_ParamLimits

0x6571,	// (0x00008415) aid_touch_sctrl_top_ParamLimits

0x657e,	// (0x00008422) sctrl_sk_top_pane_g1_ParamLimits

0x4b6b,	// (0x00006a0f) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x00011b91) sctrl_sk_top_pane_g_ParamLimits

0x658b,	// (0x0000842f) sctrl_sk_top_pane_t1_ParamLimits

0x6571,	// (0x00008415) aid_touch_sctrl_bottom_ParamLimits

0x658b,	// (0x0000842f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd308,	// (0x0000f1ac) aid_area_touch_clock

0xd903,	// (0x0000f7a7) aid_vkb2_area_top_pane_cell_ParamLimits

0xd903,	// (0x0000f7a7) aid_vkb2_area_top_pane_cell

0xd9ae,	// (0x0000f852) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd9ae,	// (0x0000f852) aid_vkb2_area_bottom_pane_cell

0x712a,	// (0x00008fce) popup_char_count_window

0x777d,	// (0x00009621) popup_char_count_window_g1

0x7786,	// (0x0000962a) popup_char_count_window_g2

0x778f,	// (0x00009633) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x00011c62) popup_char_count_window_g

0x7798,	// (0x0000963c) popup_char_count_window_t1

0x6d88,	// (0x00008c2c) popup_fep_char_preview_window_ParamLimits

0x6d88,	// (0x00008c2c) popup_fep_char_preview_window

0xd923,	// (0x0000f7c7) vkb2_top_candi_pane_ParamLimits

0xd923,	// (0x0000f7c7) vkb2_top_candi_pane

0xdeaf,	// (0x0000fd53) cell_vkb2_top_candi_pane_ParamLimits

0xdeaf,	// (0x0000fd53) cell_vkb2_top_candi_pane

0x1fb7,	// (0x00003e5b) bg_popup_fep_char_preview_window_ParamLimits

0x1fb7,	// (0x00003e5b) bg_popup_fep_char_preview_window

0x77f3,	// (0x00009697) popup_fep_char_preview_window_t1_ParamLimits

0x77f3,	// (0x00009697) popup_fep_char_preview_window_t1

0x782d,	// (0x000096d1) bg_popup_fep_char_preview_window_g1

0x7835,	// (0x000096d9) bg_popup_fep_char_preview_window_g2

0x783d,	// (0x000096e1) bg_popup_fep_char_preview_window_g3

0x7845,	// (0x000096e9) bg_popup_fep_char_preview_window_g4

0x784d,	// (0x000096f1) bg_popup_fep_char_preview_window_g5

0x7855,	// (0x000096f9) bg_popup_fep_char_preview_window_g6

0x785d,	// (0x00009701) bg_popup_fep_char_preview_window_g7

0x7865,	// (0x00009709) bg_popup_fep_char_preview_window_g8

0x786d,	// (0x00009711) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc5,	// (0x00011c69) bg_popup_fep_char_preview_window_g

0x4b6b,	// (0x00006a0f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4b6b,	// (0x00006a0f) cell_vkb2_top_candi_pane_g1

0x4ed6,	// (0x00006d7a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4ed6,	// (0x00006d7a) cell_vkb2_top_candi_pane_g2

0x4ef7,	// (0x00006d9b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4ef7,	// (0x00006d9b) cell_vkb2_top_candi_pane_g3

0x7875,	// (0x00009719) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7875,	// (0x00009719) cell_vkb2_top_candi_pane_g4

0x7896,	// (0x0000973a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7896,	// (0x0000973a) cell_vkb2_top_candi_pane_g5

0x666b,	// (0x0000850f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x666b,	// (0x0000850f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x00011c7c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x00011c7c) cell_vkb2_top_candi_pane_g

0x78b7,	// (0x0000975b) cell_vkb2_top_candi_pane_t1

0xbec3,	// (0x0000dd67) aid_size_touch_slider_mark_ParamLimits

0xbec3,	// (0x0000dd67) aid_size_touch_slider_mark

0xdbba,	// (0x0000fa5e) grid_graphic2_catg_pane_ParamLimits

0xdbba,	// (0x0000fa5e) grid_graphic2_catg_pane

0xdc76,	// (0x0000fb1a) popup_grid_graphic2_window_t1_ParamLimits

0xdc76,	// (0x0000fb1a) popup_grid_graphic2_window_t1

0xdc8c,	// (0x0000fb30) popup_grid_graphic2_window_t2_ParamLimits

0xdc8c,	// (0x0000fb30) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x00011c37) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x00011c37) popup_grid_graphic2_window_t

0xeaa9,	// (0x0001094d) bg_button_pane_cp05_ParamLimits

0xde27,	// (0x0000fccb) cell_graphic2_control_pane_g1_ParamLimits

0xdf15,	// (0x0000fdb9) cell_graphic2_catg_pane_ParamLimits

0xdf15,	// (0x0000fdb9) cell_graphic2_catg_pane

0xe766,	// (0x0001060a) bg_button_pane_cp12

0xdf27,	// (0x0000fdcb) cell_graphic2_catg_pane_g1

0x67a5,	// (0x00008649) cell_tb_ext_pane_t1_ParamLimits

0x71c8,	// (0x0000906c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x71c8,	// (0x0000906c) vkb2_top_cell_right_narrow_pane

0x71e0,	// (0x00009084) vkb2_top_cell_right_wide_pane_ParamLimits

0x71e0,	// (0x00009084) vkb2_top_cell_right_wide_pane

0x4743,	// (0x000065e7) bg_vkb2_func_pane_ParamLimits

0x4743,	// (0x000065e7) bg_vkb2_func_pane

0x7251,	// (0x000090f5) vkb2_top_cell_left_pane_g1_ParamLimits

0x4743,	// (0x000065e7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4743,	// (0x000065e7) bg_vkb2_fuc_pane_cp03

0x72c6,	// (0x0000916a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1764,	// (0x00003608) bg_vkb2_func_pane_g1

0x176c,	// (0x00003610) bg_vkb2_func_pane_g2

0x177c,	// (0x00003620) bg_vkb2_func_pane_g3

0x1774,	// (0x00003618) bg_vkb2_func_pane_g4

0x1784,	// (0x00003628) bg_vkb2_func_pane_g5

0x178c,	// (0x00003630) bg_vkb2_func_pane_g6

0x1794,	// (0x00003638) bg_vkb2_func_pane_g7

0x179c,	// (0x00003640) bg_vkb2_func_pane_g8

0x175c,	// (0x00003600) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00011c89) bg_vkb2_func_pane_g

0x4743,	// (0x000065e7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4743,	// (0x000065e7) bg_vkb2_fuc_pane_cp01

0x7251,	// (0x000090f5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7251,	// (0x000090f5) vkb2_top_cell_right_wide_pane_g1

0x4743,	// (0x000065e7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4743,	// (0x000065e7) bg_vkb2_fuc_pane_cp02

0x72c6,	// (0x0000916a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x72c6,	// (0x0000916a) vkb2_top_cell_right_narrow_pane_g1

0xcfc6,	// (0x0000ee6a) aid_touch_area_decrease_ParamLimits

0xcfc6,	// (0x0000ee6a) aid_touch_area_decrease

0xcffc,	// (0x0000eea0) aid_touch_area_increase_ParamLimits

0xcffc,	// (0x0000eea0) aid_touch_area_increase

0xd024,	// (0x0000eec8) aid_touch_area_mute_ParamLimits

0xd024,	// (0x0000eec8) aid_touch_area_mute

0xd054,	// (0x0000eef8) aid_touch_area_slider_ParamLimits

0xd054,	// (0x0000eef8) aid_touch_area_slider

0xd094,	// (0x0000ef38) popup_slider_window_g4_ParamLimits

0xd094,	// (0x0000ef38) popup_slider_window_g4

0xd0bc,	// (0x0000ef60) popup_slider_window_g5_ParamLimits

0xd0bc,	// (0x0000ef60) popup_slider_window_g5

0xd0f0,	// (0x0000ef94) popup_slider_window_g6_ParamLimits

0xd0f0,	// (0x0000ef94) popup_slider_window_g6

0x64b0,	// (0x00008354) popup_slider_window_t2_ParamLimits

0x64b0,	// (0x00008354) popup_slider_window_t2

0x0001,

0xfce1,	// (0x00011b85) popup_slider_window_t_ParamLimits

0xfce1,	// (0x00011b85) popup_slider_window_t

0xd10c,	// (0x0000efb0) slider_pane_ParamLimits

0xd10c,	// (0x0000efb0) slider_pane

0x78f1,	// (0x00009795) slider_pane_g1_ParamLimits

0x78f1,	// (0x00009795) slider_pane_g1

0x7905,	// (0x000097a9) slider_pane_g2_ParamLimits

0x7905,	// (0x000097a9) slider_pane_g2

0x791b,	// (0x000097bf) slider_pane_g3_ParamLimits

0x791b,	// (0x000097bf) slider_pane_g3

0x0003,

0xfdf8,	// (0x00011c9c) slider_pane_g_ParamLimits

0xfdf8,	// (0x00011c9c) slider_pane_g

0xb235,	// (0x0000d0d9) popup_tb_float_extension_window_ParamLimits

0xb235,	// (0x0000d0d9) popup_tb_float_extension_window

0x7947,	// (0x000097eb) aid_size_cell_tb_float_ext

0xe766,	// (0x0001060a) bg_popup_sub_window_cp28

0xdf30,	// (0x0000fdd4) grid_tb_float_ext_pane

0xdf3a,	// (0x0000fdde) cell_tb_float_ext_pane_ParamLimits

0xdf3a,	// (0x0000fdde) cell_tb_float_ext_pane

0xdf54,	// (0x0000fdf8) cell_tb_float_ext_pane_g1

0xdf5d,	// (0x0000fe01) grid_highlight_pane_cp12

0xc638,	// (0x0000e4dc) cell_last_hwr_side_pane_ParamLimits

0xc638,	// (0x0000e4dc) cell_last_hwr_side_pane

0x46e7,	// (0x0000658b) cell_last_hwr_side_pane_g1

0x7989,	// (0x0000982d) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00011ca5) cell_last_hwr_side_pane_g

0xda8a,	// (0x0000f92e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xda8a,	// (0x0000f92e) vkb2_area_bottom_space_btn_pane

0x4b6b,	// (0x00006a0f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x73a5,	// (0x00009249) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x78b7,	// (0x0000975b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7992,	// (0x00009836) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7992,	// (0x00009836) vkb2_area_bottom_space_btn_pane_g1

0x79cc,	// (0x00009870) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79cc,	// (0x00009870) vkb2_area_bottom_space_btn_pane_g2

0x7a02,	// (0x000098a6) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a02,	// (0x000098a6) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00011caa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00011caa) vkb2_area_bottom_space_btn_pane_g

0x4806,	// (0x000066aa) cel_fep_hwr_func_pane_ParamLimits

0x4806,	// (0x000066aa) cel_fep_hwr_func_pane

0xc60d,	// (0x0000e4b1) cell_hwr_side_button_pane_ParamLimits

0xc60d,	// (0x0000e4b1) cell_hwr_side_button_pane

0xd308,	// (0x0000f1ac) aid_area_touch_clock_ParamLimits

0xeaa9,	// (0x0001094d) bg_uniindi_top_pane_ParamLimits

0xd31a,	// (0x0000f1be) uniindi_top_pane_g1_ParamLimits

0xd330,	// (0x0000f1d4) uniindi_top_pane_g2_ParamLimits

0xd33c,	// (0x0000f1e0) uniindi_top_pane_g3_ParamLimits

0x681f,	// (0x000086c3) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x00011bbd) uniindi_top_pane_g_ParamLimits

0xd34d,	// (0x0000f1f1) uniindi_top_pane_t1_ParamLimits

0xeaa9,	// (0x0001094d) bg_vkb2_func_pane_cp01_ParamLimits

0xeaa9,	// (0x0001094d) bg_vkb2_func_pane_cp01

0x7a4c,	// (0x000098f0) cel_fep_hwr_func_pane_g1_ParamLimits

0x7a4c,	// (0x000098f0) cel_fep_hwr_func_pane_g1

0xeaa9,	// (0x0001094d) bg_vkb2_func_pane_cp02_ParamLimits

0xeaa9,	// (0x0001094d) bg_vkb2_func_pane_cp02

0x7a4c,	// (0x000098f0) cell_hwr_side_button_pane_g1_ParamLimits

0x7a4c,	// (0x000098f0) cell_hwr_side_button_pane_g1

0x153c,	// (0x000033e0) status_pane_g4_ParamLimits

0x153c,	// (0x000033e0) status_pane_g4

0x1556,	// (0x000033fa) status_pane_t1

0x4422,	// (0x000062c6) form2_midp_gauge_slider_cont_pane

0x442a,	// (0x000062ce) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc512,	// (0x0000e3b6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc524,	// (0x0000e3c8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00011990) form2_midp_gauge_slider_pane_t_ParamLimits

0x4460,	// (0x00006304) form2_midp_slider_pane_ParamLimits

0x6d48,	// (0x00008bec) aid_size_cell_func_vkb2_ParamLimits

0x6d48,	// (0x00008bec) aid_size_cell_func_vkb2

0x7933,	// (0x000097d7) slider_pane_g4_ParamLimits

0x7933,	// (0x000097d7) slider_pane_g4

0xdf66,	// (0x0000fe0a) form2_midp_gauge_slider_pane_t2_cp01

0xdf74,	// (0x0000fe18) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdf74,	// (0x0000fe18) form2_midp_gauge_slider_pane_t3_cp01

0x7a85,	// (0x00009929) form2_midp_slider_pane_cp01

0xe766,	// (0x0001060a) navi_smil_pane

0x7ab9,	// (0x0000995d) navi_smil_pane_g1

0x7ac1,	// (0x00009965) navi_smil_pane_t1

0x7a8e,	// (0x00009932) form2_midp_slider_pane_g1

0x7a97,	// (0x0000993b) form2_midp_slider_pane_g2

0x7a9f,	// (0x00009943) form2_midp_slider_pane_g3

0x7a8e,	// (0x00009932) form2_midp_slider_pane_g4

0xdf91,	// (0x0000fe35) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00011cb3) form2_midp_slider_pane_g

0x7a3c,	// (0x000098e0) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a3c,	// (0x000098e0) vkb2_area_bottom_space_btn_pane_g4

0xb46d,	// (0x0000d311) lc0_navi_pane_ParamLimits

0xb46d,	// (0x0000d311) lc0_navi_pane

0xb4d7,	// (0x0000d37b) lc0_stat_indi_pane_ParamLimits

0xb4d7,	// (0x0000d37b) lc0_stat_indi_pane

0xb4ec,	// (0x0000d390) ls0_title_pane_ParamLimits

0xb4ec,	// (0x0000d390) ls0_title_pane

0xeda7,	// (0x00010c4b) bg_popup_sub_pane_cp14_ParamLimits

0xd2ef,	// (0x0000f193) list_uniindi_pane_ParamLimits

0xd2fb,	// (0x0000f19f) uniindi_top_pane_ParamLimits

0x6868,	// (0x0000870c) list_single_uniindi_pane_g1_ParamLimits

0x687b,	// (0x0000871f) list_single_uniindi_pane_t1_ParamLimits

0xdf9c,	// (0x0000fe40) lc0_stat_clock_pane_ParamLimits

0xdf9c,	// (0x0000fe40) lc0_stat_clock_pane

0xdfac,	// (0x0000fe50) lc0_stat_indi_pane_g1_ParamLimits

0xdfac,	// (0x0000fe50) lc0_stat_indi_pane_g1

0xdfb9,	// (0x0000fe5d) lc0_stat_indi_pane_g2_ParamLimits

0xdfb9,	// (0x0000fe5d) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x00011cbe) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x00011cbe) lc0_stat_indi_pane_g

0xdfc6,	// (0x0000fe6a) lc0_uni_indicator_pane_ParamLimits

0xdfc6,	// (0x0000fe6a) lc0_uni_indicator_pane

0xdfd6,	// (0x0000fe7a) ls0_title_pane_g1_ParamLimits

0xdfd6,	// (0x0000fe7a) ls0_title_pane_g1

0xdfea,	// (0x0000fe8e) ls0_title_pane_t1_ParamLimits

0xdfea,	// (0x0000fe8e) ls0_title_pane_t1

0xe018,	// (0x0000febc) lc0_uni_indicator_pane_g1_ParamLimits

0xe018,	// (0x0000febc) lc0_uni_indicator_pane_g1

0x7b61,	// (0x00009a05) lc0_stat_clock_pane_t1

0xe766,	// (0x0001060a) main_ai5_pane

0x7b6f,	// (0x00009a13) ai5_sk_pane_ParamLimits

0x7b6f,	// (0x00009a13) ai5_sk_pane

0xe043,	// (0x0000fee7) cell_ai5_widget_pane_ParamLimits

0xe043,	// (0x0000fee7) cell_ai5_widget_pane

0x7c2e,	// (0x00009ad2) aid_size_cell_widget_grid

0x7c3c,	// (0x00009ae0) bg_ai5_widget_pane_ParamLimits

0x7c3c,	// (0x00009ae0) bg_ai5_widget_pane

0x7cb0,	// (0x00009b54) cell_ai5_widget_pane_g2

0x7cc0,	// (0x00009b64) cell_ai5_widget_pane_g3

0x7cd7,	// (0x00009b7b) cell_ai5_widget_pane_g4

0x7ce3,	// (0x00009b87) cell_ai5_widget_pane_g5

0x7cef,	// (0x00009b93) cell_ai5_widget_pane_g6

0x7cfb,	// (0x00009b9f) cell_ai5_widget_pane_g7

0x7d43,	// (0x00009be7) cell_ai5_widget_pane_t1_ParamLimits

0x7d43,	// (0x00009be7) cell_ai5_widget_pane_t1

0x7d60,	// (0x00009c04) cell_ai5_widget_pane_t2_ParamLimits

0x7d60,	// (0x00009c04) cell_ai5_widget_pane_t2

0x7d78,	// (0x00009c1c) cell_ai5_widget_pane_t3_ParamLimits

0x7d78,	// (0x00009c1c) cell_ai5_widget_pane_t3

0x7d90,	// (0x00009c34) cell_ai5_widget_pane_t4_ParamLimits

0x7d90,	// (0x00009c34) cell_ai5_widget_pane_t4

0x7dad,	// (0x00009c51) cell_ai5_widget_pane_t5_ParamLimits

0x7dad,	// (0x00009c51) cell_ai5_widget_pane_t5

0x7dcc,	// (0x00009c70) cell_ai5_widget_pane_t6_ParamLimits

0x7dcc,	// (0x00009c70) cell_ai5_widget_pane_t6

0x7dde,	// (0x00009c82) cell_ai5_widget_pane_t7_ParamLimits

0x7dde,	// (0x00009c82) cell_ai5_widget_pane_t7

0x7df7,	// (0x00009c9b) cell_ai5_widget_pane_t8_ParamLimits

0x7df7,	// (0x00009c9b) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x00011cd8) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00011cd8) cell_ai5_widget_pane_t

0x7e4b,	// (0x00009cef) grid_ai5_widget_pane

0xeda7,	// (0x00010c4b) highlight_cell_ai5_widget_pane_ParamLimits

0xeda7,	// (0x00010c4b) highlight_cell_ai5_widget_pane

0xe0a9,	// (0x0000ff4d) ai5_sk_left_pane

0xe0b3,	// (0x0000ff57) ai5_sk_middle_pane

0xe0bd,	// (0x0000ff61) ai5_sk_right_pane

0x7e77,	// (0x00009d1b) bg_ai5_widget_pane_g1_ParamLimits

0x7e77,	// (0x00009d1b) bg_ai5_widget_pane_g1

0x7e83,	// (0x00009d27) bg_ai5_widget_pane_g2_ParamLimits

0x7e83,	// (0x00009d27) bg_ai5_widget_pane_g2

0x7e8f,	// (0x00009d33) bg_ai5_widget_pane_g3_ParamLimits

0x7e8f,	// (0x00009d33) bg_ai5_widget_pane_g3

0x7e9b,	// (0x00009d3f) bg_ai5_widget_pane_g4_ParamLimits

0x7e9b,	// (0x00009d3f) bg_ai5_widget_pane_g4

0x7ea7,	// (0x00009d4b) bg_ai5_widget_pane_g5_ParamLimits

0x7ea7,	// (0x00009d4b) bg_ai5_widget_pane_g5

0x7eb3,	// (0x00009d57) bg_ai5_widget_pane_g6_ParamLimits

0x7eb3,	// (0x00009d57) bg_ai5_widget_pane_g6

0x7ebf,	// (0x00009d63) bg_ai5_widget_pane_g7_ParamLimits

0x7ebf,	// (0x00009d63) bg_ai5_widget_pane_g7

0x7ecb,	// (0x00009d6f) bg_ai5_widget_pane_g8_ParamLimits

0x7ecb,	// (0x00009d6f) bg_ai5_widget_pane_g8

0x7ed7,	// (0x00009d7b) bg_ai5_widget_pane_g9_ParamLimits

0x7ed7,	// (0x00009d7b) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x00011ced) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x00011ced) bg_ai5_widget_pane_g

0x7f09,	// (0x00009dad) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f09,	// (0x00009dad) cell_shortcut_ai5_widget_pane

0x067a,	// (0x0000251e) bg_cell_shortcut_ai5_widget_pane

0x7f1a,	// (0x00009dbe) cell_grid_ai5_widget_pane_g1

0x067a,	// (0x0000251e) highlight_cell_shortcut_ai5_widget_pane

0x176c,	// (0x00003610) ai5_sk_left_pane_g1

0x7f23,	// (0x00009dc7) ai5_sk_left_pane_g2

0x7f2b,	// (0x00009dcf) ai5_sk_left_pane_g3

0x7f33,	// (0x00009dd7) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x00011d00) ai5_sk_left_pane_g

0x7f3b,	// (0x00009ddf) ai5_sk_left_pane_t1

0x1764,	// (0x00003608) ai5_sk_right_pane_g1

0x7f49,	// (0x00009ded) ai5_sk_right_pane_g2

0x7f51,	// (0x00009df5) ai5_sk_right_pane_g3

0x7f59,	// (0x00009dfd) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x00011d09) ai5_sk_right_pane_g

0x7f61,	// (0x00009e05) ai5_sk_right_pane_t1

0x1764,	// (0x00003608) ai5_sk_middle_pane_g1

0x176c,	// (0x00003610) ai5_sk_middle_pane_g2

0x1784,	// (0x00003628) ai5_sk_middle_pane_g3

0x7f51,	// (0x00009df5) ai5_sk_middle_pane_g4

0x7f2b,	// (0x00009dcf) ai5_sk_middle_pane_g5

0x7f6f,	// (0x00009e13) ai5_sk_middle_pane_g6

0xe0c7,	// (0x0000ff6b) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x00011d12) ai5_sk_middle_pane_g

0xb359,	// (0x0000d1fd) aid_touch_area_size_lc0_ParamLimits

0xb359,	// (0x0000d1fd) aid_touch_area_size_lc0

0x4f18,	// (0x00006dbc) cell_hwr_candidate_pane_t1_ParamLimits

0x120d,	// (0x000030b1) aid_touch_navi_pane

0xb5e5,	// (0x0000d489) status_dt_navi_pane_ParamLimits

0xb5e5,	// (0x0000d489) status_dt_navi_pane

0xb5fd,	// (0x0000d4a1) status_dt_sta_pane_ParamLimits

0xb5fd,	// (0x0000d4a1) status_dt_sta_pane

0xe0cf,	// (0x0000ff73) dt_sta_controll_pane

0xe0dc,	// (0x0000ff80) dt_sta_indi_pane

0xe0e9,	// (0x0000ff8d) dt_sta_title_pane

0xeaa9,	// (0x0001094d) bg_dt_sta_indi_pane_ParamLimits

0xeaa9,	// (0x0001094d) bg_dt_sta_indi_pane

0xe0fb,	// (0x0000ff9f) dt_sta_battery_pane

0xe103,	// (0x0000ffa7) dt_sta_indi_pane_g1

0x7fc1,	// (0x00009e65) dt_sta_indi_pane_g2

0x7fca,	// (0x00009e6e) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x00011d21) dt_sta_indi_pane_g

0x7fd3,	// (0x00009e77) dt_sta_signal_pane

0xeda7,	// (0x00010c4b) bg_dt_sta_title_pane_ParamLimits

0xeda7,	// (0x00010c4b) bg_dt_sta_title_pane

0x28dd,	// (0x00004781) dt_sta_title_pane_g1

0xe10c,	// (0x0000ffb0) dt_sta_title_pane_t1_ParamLimits

0xe10c,	// (0x0000ffb0) dt_sta_title_pane_t1

0xe766,	// (0x0001060a) bg_dt_sta_control_pane

0xe121,	// (0x0000ffc5) dt_sta_controll_pane_g1

0xe12a,	// (0x0000ffce) bg_dt_sta_title_pane_g1

0xe133,	// (0x0000ffd7) bg_dt_sta_title_pane_g2

0xe13c,	// (0x0000ffe0) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x00011d28) bg_dt_sta_title_pane_g

0x46e7,	// (0x0000658b) bg_dt_sta_indi_pane_g1

0x8015,	// (0x00009eb9) dt_sta_signal_pane_g1

0x801d,	// (0x00009ec1) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x00011d2f) dt_sta_signal_pane_g

0x8025,	// (0x00009ec9) dt_sta_battery_pane_g1

0x802e,	// (0x00009ed2) dt_sta_battery_pane_t1

0x46e7,	// (0x0000658b) bg_dt_sta_control_pane_g1

0xf51a,	// (0x000113be) fep_china_uni_eep_pane

0xf522,	// (0x000113c6) fep_china_uni_entry_pane_ParamLimits

0xf532,	// (0x000113d6) popup_fep_china_uni_window_g1_ParamLimits

0xf542,	// (0x000113e6) popup_fep_china_uni_window_g2_ParamLimits

0xf542,	// (0x000113e6) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x000115b2) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x000115b2) popup_fep_china_uni_window_g

0x803d,	// (0x00009ee1) fep_china_uni_eep_pane_g1

0x8045,	// (0x00009ee9) fep_china_uni_eep_pane_t1

0x7ab0,	// (0x00009954) aid_touch_area_size_smil_player

0x1363,	// (0x00003207) lc0_clock_pane

0x154a,	// (0x000033ee) status_pane_g5_ParamLimits

0x154a,	// (0x000033ee) status_pane_g5

0xad6b,	// (0x0000cc0f) popup_keymap_window

0x1508,	// (0x000033ac) status_icon_pane

0x7cc0,	// (0x00009b64) cell_ai5_widget_pane_g3_ParamLimits

0x7cd7,	// (0x00009b7b) cell_ai5_widget_pane_g4_ParamLimits

0x7ce3,	// (0x00009b87) cell_ai5_widget_pane_g5_ParamLimits

0x7d07,	// (0x00009bab) cell_ai5_widget_pane_g8_ParamLimits

0x7d07,	// (0x00009bab) cell_ai5_widget_pane_g8

0x7d1b,	// (0x00009bbf) cell_ai5_widget_pane_g9_ParamLimits

0x7d1b,	// (0x00009bbf) cell_ai5_widget_pane_g9

0x7d2f,	// (0x00009bd3) cell_ai5_widget_pane_g10_ParamLimits

0x7d2f,	// (0x00009bd3) cell_ai5_widget_pane_g10

0x8054,	// (0x00009ef8) status_icon_pane_g1

0xe766,	// (0x0001060a) bg_popup_sub_pane_cp13

0x805c,	// (0x00009f00) popup_keymap_window_t1

0xaa17,	// (0x0000c8bb) control_pane_g6_ParamLimits

0xaa17,	// (0x0000c8bb) control_pane_g6

0xaa24,	// (0x0000c8c8) control_pane_g7_ParamLimits

0xaa24,	// (0x0000c8c8) control_pane_g7

0xaa31,	// (0x0000c8d5) control_pane_g8_ParamLimits

0xaa31,	// (0x0000c8d5) control_pane_g8

0xe0cf,	// (0x0000ff73) dt_sta_controll_pane_ParamLimits

0xe0dc,	// (0x0000ff80) dt_sta_indi_pane_ParamLimits

0xe0e9,	// (0x0000ff8d) dt_sta_title_pane_ParamLimits

0xec7c,	// (0x00010b20) aid_size_touch_scroll_bar_cale

0x96da,	// (0x0000b57e) popup_discreet_window_ParamLimits

0x96da,	// (0x0000b57e) popup_discreet_window

0x972c,	// (0x0000b5d0) popup_sk_window

0x1fb7,	// (0x00003e5b) bg_popup_sub_pane_cp28_ParamLimits

0x1fb7,	// (0x00003e5b) bg_popup_sub_pane_cp28

0x806a,	// (0x00009f0e) popup_discreet_window_g1_ParamLimits

0x806a,	// (0x00009f0e) popup_discreet_window_g1

0xe145,	// (0x0000ffe9) popup_discreet_window_t1_ParamLimits

0xe145,	// (0x0000ffe9) popup_discreet_window_t1

0x80a8,	// (0x00009f4c) popup_discreet_window_t2_ParamLimits

0x80a8,	// (0x00009f4c) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x00011d34) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x00011d34) popup_discreet_window_t

0x80fa,	// (0x00009f9e) popup_sk_window_g1

0x8104,	// (0x00009fa8) popup_sk_window_g2

0x0001,

0xfe97,	// (0x00011d3b) popup_sk_window_g

0xe163,	// (0x00010007) popup_sk_window_t1

0xe171,	// (0x00010015) popup_sk_window_t1_copy1

0x7cb0,	// (0x00009b54) cell_ai5_widget_pane_g2_ParamLimits

0x7e09,	// (0x00009cad) cell_ai5_widget_pane_t9_ParamLimits

0x7e09,	// (0x00009cad) cell_ai5_widget_pane_t9

0xe766,	// (0x0001060a) main_fep_fshwr2_pane

0xe17f,	// (0x00010023) aid_fshwr2_btn_pane

0xe191,	// (0x00010035) aid_fshwr2_syb_pane

0xe1a3,	// (0x00010047) aid_fshwr2_txt_pane

0xe1b2,	// (0x00010056) fshwr2_func_candi_pane

0xe1d1,	// (0x00010075) fshwr2_hwr_syb_pane

0xe1ec,	// (0x00010090) fshwr2_icf_pane

0xe766,	// (0x0001060a) fshwr2_icf_bg_pane

0x81a9,	// (0x0000a04d) fshwr2_icf_pane_t1_ParamLimits

0x81a9,	// (0x0000a04d) fshwr2_icf_pane_t1

0xf403,	// (0x000112a7) fshwr2_func_candi_pane_g1

0xe218,	// (0x000100bc) fshwr2_func_candi_row_pane_ParamLimits

0xe218,	// (0x000100bc) fshwr2_func_candi_row_pane

0xe23b,	// (0x000100df) cell_fshwr2_syb_pane_ParamLimits

0xe23b,	// (0x000100df) cell_fshwr2_syb_pane

0x4b6b,	// (0x00006a0f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4b6b,	// (0x00006a0f) fshwr2_hwr_syb_pane_g1

0xe766,	// (0x0001060a) bg_popup_call_pane_cp01

0xe251,	// (0x000100f5) fshwr2_func_candi_cell_pane_ParamLimits

0xe251,	// (0x000100f5) fshwr2_func_candi_cell_pane

0xe29c,	// (0x00010140) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe29c,	// (0x00010140) fshwr2_func_candi_cell_bg_pane

0xe2a8,	// (0x0001014c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe2a8,	// (0x0001014c) fshwr2_func_candi_cell_pane_g1

0xe2df,	// (0x00010183) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2df,	// (0x00010183) fshwr2_func_candi_cell_pane_t1

0xe766,	// (0x0001060a) bg_button_pane_cp08

0x826e,	// (0x0000a112) cell_fshwr2_syb_bg_pane

0xe2fa,	// (0x0001019e) cell_fshwr2_syb_bg_pane_g1

0xe302,	// (0x000101a6) cell_fshwr2_syb_bg_pane_t1

0xeda7,	// (0x00010c4b) main_tmo_pane

0xbd87,	// (0x0000dc2b) uni_indicator_pane_g1_ParamLimits

0xbd9d,	// (0x0000dc41) uni_indicator_pane_g2_ParamLimits

0xbdb3,	// (0x0000dc57) uni_indicator_pane_g3_ParamLimits

0x2c4a,	// (0x00004aee) uni_indicator_pane_g4_ParamLimits

0x2c4a,	// (0x00004aee) uni_indicator_pane_g4

0x2c5e,	// (0x00004b02) uni_indicator_pane_g5_ParamLimits

0x2c5e,	// (0x00004b02) uni_indicator_pane_g5

0x2c5e,	// (0x00004b02) uni_indicator_pane_g6_ParamLimits

0x2c5e,	// (0x00004b02) uni_indicator_pane_g6

0xf906,	// (0x000117aa) uni_indicator_pane_g_ParamLimits

0xcfa8,	// (0x0000ee4c) popup_tmo_note_window_ParamLimits

0xcfa8,	// (0x0000ee4c) popup_tmo_note_window

0xeda7,	// (0x00010c4b) fshwr2_bg_pane

0xe2d0,	// (0x00010174) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe2d0,	// (0x00010174) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x00011d40) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x00011d40) fshwr2_func_candi_cell_pane_g

0x46e7,	// (0x0000658b) bg_popup_window_pane_cp01

0x828d,	// (0x0000a131) bg_popup_window_pane_g1_cp01

0x8296,	// (0x0000a13a) bg_popup_window_pane_cp22_ParamLimits

0x8296,	// (0x0000a13a) bg_popup_window_pane_cp22

0xe311,	// (0x000101b5) listscroll_tmo_link_pane_ParamLimits

0xe311,	// (0x000101b5) listscroll_tmo_link_pane

0x82e4,	// (0x0000a188) popup_tmo_note_window_g1_ParamLimits

0x82e4,	// (0x0000a188) popup_tmo_note_window_g1

0xe351,	// (0x000101f5) tmo_note_info_pane_ParamLimits

0xe351,	// (0x000101f5) tmo_note_info_pane

0xe36b,	// (0x0001020f) list_tmo_note_info_pane_g1_ParamLimits

0xe36b,	// (0x0001020f) list_tmo_note_info_pane_g1

0x8322,	// (0x0000a1c6) list_tmo_note_info_pane_g2_ParamLimits

0x8322,	// (0x0000a1c6) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x00011d45) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x00011d45) list_tmo_note_info_pane_g

0x833e,	// (0x0000a1e2) list_tmo_note_info_text_pane_ParamLimits

0x833e,	// (0x0000a1e2) list_tmo_note_info_text_pane

0x83bf,	// (0x0000a263) list_tmo_link_pane

0x83cc,	// (0x0000a270) scroll_pane_cp20

0x83d9,	// (0x0000a27d) list_single_tmo_link_pane_ParamLimits

0x83d9,	// (0x0000a27d) list_single_tmo_link_pane

0x83e9,	// (0x0000a28d) list_single_tmo_link_pane_t1

0x83f7,	// (0x0000a29b) list_tmo_note_info_text_pane_t1_ParamLimits

0x83f7,	// (0x0000a29b) list_tmo_note_info_text_pane_t1

0xa36b,	// (0x0000c20f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa36b,	// (0x0000c20f) aid_size_touch_scroll_bar_cp01

0xa26b,	// (0x0000c10f) aid_size_touch_slider_marker

0x971c,	// (0x0000b5c0) popup_settings_window_ParamLimits

0x971c,	// (0x0000b5c0) popup_settings_window

0x0c30,	// (0x00002ad4) popup_candi_list_indi_window

0x120d,	// (0x000030b1) aid_touch_navi_pane_ParamLimits

0x6545,	// (0x000083e9) rs_clock_indi_pane

0x654e,	// (0x000083f2) sctrl_sk_bottom_pane_ParamLimits

0x655f,	// (0x00008403) sctrl_sk_top_pane_ParamLimits

0xd7c7,	// (0x0000f66b) popup_fep_tooltip_window

0x7c2e,	// (0x00009ad2) aid_size_cell_widget_grid_ParamLimits

0x7c9b,	// (0x00009b3f) cell_ai5_widget_pane_g1_ParamLimits

0x7c9b,	// (0x00009b3f) cell_ai5_widget_pane_g1

0x7cef,	// (0x00009b93) cell_ai5_widget_pane_g6_ParamLimits

0x7cfb,	// (0x00009b9f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x00011cc3) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x00011cc3) cell_ai5_widget_pane_g

0x7e2d,	// (0x00009cd1) cell_ai5_widget_pane_t10_ParamLimits

0x7e2d,	// (0x00009cd1) cell_ai5_widget_pane_t10

0x7e4b,	// (0x00009cef) grid_ai5_widget_pane_ParamLimits

0x7ee3,	// (0x00009d87) cell_contacts_ai5_widget_pane_ParamLimits

0x7ee3,	// (0x00009d87) cell_contacts_ai5_widget_pane

0x80bd,	// (0x00009f61) popup_discreet_window_t3_ParamLimits

0x80bd,	// (0x00009f61) popup_discreet_window_t3

0xe204,	// (0x000100a8) popup_fshwr2_char_preview_window_ParamLimits

0xe204,	// (0x000100a8) popup_fshwr2_char_preview_window

0xe382,	// (0x00010226) tmo_note_info_pane_t1

0xe397,	// (0x0001023b) tmo_note_info_pane_t2

0xe3ae,	// (0x00010252) tmo_note_info_pane_t3

0x839b,	// (0x0000a23f) tmo_note_info_pane_t4

0x83ad,	// (0x0000a251) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x00011d4a) tmo_note_info_pane_t

0x83bf,	// (0x0000a263) list_tmo_link_pane_ParamLimits

0x83cc,	// (0x0000a270) scroll_pane_cp20_ParamLimits

0xe766,	// (0x0001060a) bg_popup_fep_char_preview_window_cp01

0xe3c3,	// (0x00010267) popup_fshwr2_char_preview_window_t1

0x841e,	// (0x0000a2c2) popup_candi_list_indi_window_g1

0x8427,	// (0x0000a2cb) bg_cell_contacts_ai5_widget_pane

0x8433,	// (0x0000a2d7) cell_contacts_ai5_widget_pane_g1

0x5225,	// (0x000070c9) cell_contacts_ai5_widget_pane_g2

0x8448,	// (0x0000a2ec) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x00011d55) cell_contacts_ai5_widget_pane_g

0x8454,	// (0x0000a2f8) cell_contacts_ai5_widget_pane_t1

0xeda7,	// (0x00010c4b) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84cb,	// (0x0000a36f) settings_container_pane

0x067a,	// (0x0000251e) listscroll_set_pane_copy1

0x3a72,	// (0x00005916) scroll_pane_cp121_copy1

0x1d70,	// (0x00003c14) set_content_pane_copy1

0xe436,	// (0x000102da) aid_height_set_list_copy1_ParamLimits

0xe436,	// (0x000102da) aid_height_set_list_copy1

0x2f30,	// (0x00004dd4) aid_size_parent_copy1_ParamLimits

0x2f30,	// (0x00004dd4) aid_size_parent_copy1

0xe442,	// (0x000102e6) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe442,	// (0x000102e6) button_value_adjust_pane_cp6_copy1

0x0c08,	// (0x00002aac) list_highlight_pane_cp2_copy1_ParamLimits

0x0c08,	// (0x00002aac) list_highlight_pane_cp2_copy1

0xe456,	// (0x000102fa) list_set_pane_copy1_ParamLimits

0xe456,	// (0x000102fa) list_set_pane_copy1

0xe3d1,	// (0x00010275) main_pane_set_t1_copy1_ParamLimits

0xe3d1,	// (0x00010275) main_pane_set_t1_copy1

0xe40b,	// (0x000102af) main_pane_set_t2_copy1_ParamLimits

0xe40b,	// (0x000102af) main_pane_set_t2_copy1

0xe503,	// (0x000103a7) main_pane_set_t3_copy1

0xe511,	// (0x000103b5) main_pane_set_t4_copy1

0xe42a,	// (0x000102ce) set_content_pane_g1_copy1_ParamLimits

0xe42a,	// (0x000102ce) set_content_pane_g1_copy1

0xe51f,	// (0x000103c3) setting_code_pane_copy1

0x85c8,	// (0x0000a46c) setting_slider_graphic_pane_copy1

0x85c8,	// (0x0000a46c) setting_slider_pane_copy1

0x85c8,	// (0x0000a46c) setting_text_pane_copy1

0x85c8,	// (0x0000a46c) setting_volume_pane_copy1

0xe51f,	// (0x000103c3) settings_code_pane_cp2_copy1

0xe527,	// (0x000103cb) settings_code_pane_cp_copy1_ParamLimits

0xe527,	// (0x000103cb) settings_code_pane_cp_copy1

0xe53b,	// (0x000103df) volume_set_pane_copy1

0xe543,	// (0x000103e7) volume_set_pane_g10_copy1

0xe54b,	// (0x000103ef) volume_set_pane_g1_copy1

0xe553,	// (0x000103f7) volume_set_pane_g2_copy1

0xe55b,	// (0x000103ff) volume_set_pane_g3_copy1

0xe563,	// (0x00010407) volume_set_pane_g4_copy1

0xe56b,	// (0x0001040f) volume_set_pane_g5_copy1

0xe573,	// (0x00010417) volume_set_pane_g6_copy1

0xe57b,	// (0x0001041f) volume_set_pane_g7_copy1

0xe583,	// (0x00010427) volume_set_pane_g8_copy1

0xe58b,	// (0x0001042f) volume_set_pane_g9_copy1

0xe965,	// (0x00010809) bg_set_opt_pane_cp_copy1_ParamLimits

0xe965,	// (0x00010809) bg_set_opt_pane_cp_copy1

0xe593,	// (0x00010437) setting_slider_pane_t1_copy1_ParamLimits

0xe593,	// (0x00010437) setting_slider_pane_t1_copy1

0xe5b1,	// (0x00010455) setting_slider_pane_t2_copy1_ParamLimits

0xe5b1,	// (0x00010455) setting_slider_pane_t2_copy1

0xe5cb,	// (0x0001046f) setting_slider_pane_t3_copy1_ParamLimits

0xe5cb,	// (0x0001046f) setting_slider_pane_t3_copy1

0xe5e3,	// (0x00010487) slider_set_pane_copy1_ParamLimits

0xe5e3,	// (0x00010487) slider_set_pane_copy1

0xee61,	// (0x00010d05) set_opt_bg_pane_g1_copy2

0xee69,	// (0x00010d0d) set_opt_bg_pane_g2_copy2

0x86a2,	// (0x0000a546) set_opt_bg_pane_g3_copy2

0xee79,	// (0x00010d1d) set_opt_bg_pane_g4_copy2

0xee81,	// (0x00010d25) set_opt_bg_pane_g5_copy2

0xee89,	// (0x00010d2d) set_opt_bg_pane_g6_copy2

0xe5f9,	// (0x0001049d) set_opt_bg_pane_g7_copy2

0x86b4,	// (0x0000a558) set_opt_bg_pane_g8_copy2

0x86be,	// (0x0000a562) set_opt_bg_pane_g9_copy2

0xe601,	// (0x000104a5) aid_size_touch_slider_mark_copy1_ParamLimits

0xe601,	// (0x000104a5) aid_size_touch_slider_mark_copy1

0xe615,	// (0x000104b9) slider_set_pane_g1_copy1

0x86e5,	// (0x0000a589) slider_set_pane_g2_copy1

0xbee4,	// (0x0000dd88) slider_set_pane_g3_copy1_ParamLimits

0xbee4,	// (0x0000dd88) slider_set_pane_g3_copy1

0xbef8,	// (0x0000dd9c) slider_set_pane_g4_copy1_ParamLimits

0xbef8,	// (0x0000dd9c) slider_set_pane_g4_copy1

0xbf10,	// (0x0000ddb4) slider_set_pane_g5_copy1_ParamLimits

0xbf10,	// (0x0000ddb4) slider_set_pane_g5_copy1

0xbee4,	// (0x0000dd88) slider_set_pane_g6_copy1_ParamLimits

0xbee4,	// (0x0000dd88) slider_set_pane_g6_copy1

0xe61e,	// (0x000104c2) slider_set_pane_g7_copy1_ParamLimits

0xe61e,	// (0x000104c2) slider_set_pane_g7_copy1

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp2_copy1

0xe634,	// (0x000104d8) setting_slider_graphic_pane_g1_copy1

0xe63d,	// (0x000104e1) setting_slider_graphic_pane_t1_copy1

0xe64d,	// (0x000104f1) setting_slider_graphic_pane_t2_copy1

0xe65d,	// (0x00010501) slider_set_pane_cp_copy1

0x873c,	// (0x0000a5e0) input_focus_pane_cp1_copy1

0x8745,	// (0x0000a5e9) list_set_text_pane_copy1

0x874d,	// (0x0000a5f1) setting_text_pane_g1_copy1

0x8756,	// (0x0000a5fa) set_text_pane_t1_copy1

0x873c,	// (0x0000a5e0) input_focus_pane_cp2_copy1

0x874d,	// (0x0000a5f1) setting_code_pane_g1_copy1

0x8771,	// (0x0000a615) setting_code_pane_t1_copy1

0x877f,	// (0x0000a623) list_set_graphic_pane_copy1

0xe8e9,	// (0x0001078d) bg_set_opt_pane_cp4_copy1

0x0385,	// (0x00002229) list_set_graphic_pane_g1_copy1_ParamLimits

0x0385,	// (0x00002229) list_set_graphic_pane_g1_copy1

0x8793,	// (0x0000a637) list_set_graphic_pane_g2_copy1

0x039d,	// (0x00002241) list_set_graphic_pane_t1_copy1_ParamLimits

0x039d,	// (0x00002241) list_set_graphic_pane_t1_copy1

0x46e7,	// (0x0000658b) rs_clock_indi_pane_g1

0x879b,	// (0x0000a63f) rs_clock_indi_pane_t1

0x87a9,	// (0x0000a64d) rs_indi_pane

0x87b1,	// (0x0000a655) rs_indi_pane_g1

0x87ba,	// (0x0000a65e) rs_indi_pane_g2

0x841e,	// (0x0000a2c2) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x00011d5c) rs_indi_pane_g

0x067a,	// (0x0000251e) bg_popup_preview_window_pane_cp03

0x87c3,	// (0x0000a667) popup_fep_tooltip_window_t1

0xcaa6,	// (0x0000e94a) popup_note2_window_g2_ParamLimits

0xcaa6,	// (0x0000e94a) popup_note2_window_g2

0x0001,

0xfc58,	// (0x00011afc) popup_note2_window_g_ParamLimits

0xfc58,	// (0x00011afc) popup_note2_window_g

0x5f23,	// (0x00007dc7) bg_popup_sub_pane_cp11_ParamLimits

0x5f30,	// (0x00007dd4) cell_ai3_links_pane_g1_ParamLimits

0x5f47,	// (0x00007deb) cell_ai3_links_pane_t1

0x8756,	// (0x0000a5fa) set_text_pane_t1_copy1_ParamLimits

0x058b,	// (0x0000242f) cell_graphic_popup_pane_cp2_ParamLimits

0x058b,	// (0x0000242f) cell_graphic_popup_pane_cp2

0xe66d,	// (0x00010511) cell_graphic_popup_pane_g1_cp2

0xebff,	// (0x00010aa3) cell_graphic_popup_pane_g2_cp2

0x87d9,	// (0x0000a67d) cell_graphic_popup_pane_g3_cp2

0xe675,	// (0x00010519) cell_graphic_popup_pane_t2_cp2

0xec10,	// (0x00010ab4) grid_highlight_pane_cp3_cp2

0xf259,	// (0x000110fd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xeda7,	// (0x00010c4b) main_tmo_pane_ParamLimits

0xcf9c,	// (0x0000ee40) popup_tmo_big_image_note_window

0x7c8a,	// (0x00009b2e) cell_ai5_widget_list_pane

0x7c92,	// (0x00009b36) cell_ai5_widget_lrg_icon_pane

0xe382,	// (0x00010226) tmo_note_info_pane_t1_ParamLimits

0xe397,	// (0x0001023b) tmo_note_info_pane_t2_ParamLimits

0xe3ae,	// (0x00010252) tmo_note_info_pane_t3_ParamLimits

0x839b,	// (0x0000a23f) tmo_note_info_pane_t4_ParamLimits

0x83ad,	// (0x0000a251) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x00011d4a) tmo_note_info_pane_t_ParamLimits

0x84cb,	// (0x0000a36f) settings_container_pane_ParamLimits

0xe665,	// (0x00010509) indicator_popup_pane_cp5

0xe665,	// (0x00010509) indicator_popup_pane_cp6

0x877f,	// (0x0000a623) list_set_graphic_pane_copy1_ParamLimits

0xe766,	// (0x0001060a) bg_popup_window_pane_cp23

0x87ef,	// (0x0000a693) popup_tmo_big_image_note_window_g1

0x87f8,	// (0x0000a69c) popup_tmo_big_image_note_window_t1

0x8808,	// (0x0000a6ac) popup_tmo_big_image_note_window_t2

0x8818,	// (0x0000a6bc) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x00011d63) popup_tmo_big_image_note_window_t

0x46e7,	// (0x0000658b) cell_ai5_widget_lrg_icon_pane_g1

0x8828,	// (0x0000a6cc) cell_ai5_widget_lrg_icon_pane_t1

0x8836,	// (0x0000a6da) cell_ai5_widget_list_row_pane_ParamLimits

0x8836,	// (0x0000a6da) cell_ai5_widget_list_row_pane

0x884d,	// (0x0000a6f1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x884d,	// (0x0000a6f1) cell_ai5_widget_list_row_pane_g1

0xe683,	// (0x00010527) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe683,	// (0x00010527) cell_ai5_widget_list_row_pane_t1

0x8885,	// (0x0000a729) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8885,	// (0x0000a729) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x00011d6a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x00011d6a) cell_ai5_widget_list_row_pane_t

0xe766,	// (0x0001060a) main_fep_vtchi_ss_pane

0x88c9,	// (0x0000a76d) popup_fep_char_pre_window

0x88d1,	// (0x0000a775) popup_fep_ituss_window

0xe6c3,	// (0x00010567) popup_fep_vkbss_window

0xe6d0,	// (0x00010574) grid_vkbss_keypad_pane_ParamLimits

0xe6d0,	// (0x00010574) grid_vkbss_keypad_pane

0x892c,	// (0x0000a7d0) ituss_keypad_pane

0x8947,	// (0x0000a7eb) aid_vkbss_key_offset_ParamLimits

0x8947,	// (0x0000a7eb) aid_vkbss_key_offset

0xe6e0,	// (0x00010584) cell_vkbss_key_pane_ParamLimits

0xe6e0,	// (0x00010584) cell_vkbss_key_pane

0x1524,	// (0x000033c8) bg_cell_vkbss_key_g1_ParamLimits

0x1524,	// (0x000033c8) bg_cell_vkbss_key_g1

0xe6f6,	// (0x0001059a) cell_vkbss_key_3p_pane_ParamLimits

0xe6f6,	// (0x0001059a) cell_vkbss_key_3p_pane

0xe710,	// (0x000105b4) cell_vkbss_key_g1_ParamLimits

0xe710,	// (0x000105b4) cell_vkbss_key_g1

0xe72a,	// (0x000105ce) cell_vkbss_key_t1_ParamLimits

0xe72a,	// (0x000105ce) cell_vkbss_key_t1

0x89bc,	// (0x0000a860) cell_ituss_key_pane_ParamLimits

0x89bc,	// (0x0000a860) cell_ituss_key_pane

0x89cd,	// (0x0000a871) bg_cell_ituss_key_g1_ParamLimits

0x89cd,	// (0x0000a871) bg_cell_ituss_key_g1

0x89d9,	// (0x0000a87d) cell_ituss_key_pane_g1_ParamLimits

0x89d9,	// (0x0000a87d) cell_ituss_key_pane_g1

0x89ed,	// (0x0000a891) cell_ituss_key_pane_g2_ParamLimits

0x89ed,	// (0x0000a891) cell_ituss_key_pane_g2

0x0002,

0xfecd,	// (0x00011d71) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00011d71) cell_ituss_key_pane_g

0x8a2b,	// (0x0000a8cf) cell_ituss_key_t1_ParamLimits

0x8a2b,	// (0x0000a8cf) cell_ituss_key_t1

0x8a65,	// (0x0000a909) cell_ituss_key_t2_ParamLimits

0x8a65,	// (0x0000a909) cell_ituss_key_t2

0x8a96,	// (0x0000a93a) cell_ituss_key_t3_ParamLimits

0x8a96,	// (0x0000a93a) cell_ituss_key_t3

0x8a65,	// (0x0000a909) cell_ituss_key_t4_ParamLimits

0x8a65,	// (0x0000a909) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x00011d78) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x00011d78) cell_ituss_key_t

0x8ad9,	// (0x0000a97d) cell_vkbss_key_3p_pane_g1

0x8ae1,	// (0x0000a985) cell_vkbss_key_3p_pane_g2

0x8ae9,	// (0x0000a98d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x00011d83) cell_vkbss_key_3p_pane_g

0xe766,	// (0x0001060a) bg_popup_fep_char_preview_window_cp02

0x8af1,	// (0x0000a995) popup_fep_char_pre_window_t1

0xe09f,	// (0x0000ff43) main_ai5_sk_pane

0x8427,	// (0x0000a2cb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8433,	// (0x0000a2d7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5225,	// (0x000070c9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8448,	// (0x0000a2ec) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x00011d55) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8454,	// (0x0000a2f8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xeda7,	// (0x00010c4b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe755,	// (0x000105f9) main_ai5_sk_pane_g1

0xb9d8,	// (0x0000d87c) popup_query_code_window_g1

0x88e7,	// (0x0000a78b) popup_fep_vkb_icf_pane

0x8906,	// (0x0000a7aa) popup_fep_vtchi_icf_pane

0x8b09,	// (0x0000a9ad) bg_icf_pane

0x8b15,	// (0x0000a9b9) list_vkb_icf_pane

0x8b24,	// (0x0000a9c8) bg_icf_pane_cp01

0x8b37,	// (0x0000a9db) vtchi_icf_list_pane

0x8b47,	// (0x0000a9eb) list_vkb_icf_pane_t1_ParamLimits

0x8b47,	// (0x0000a9eb) list_vkb_icf_pane_t1

0x8b5e,	// (0x0000aa02) vtchi_icf_list_pane_t1_ParamLimits

0x8b5e,	// (0x0000aa02) vtchi_icf_list_pane_t1

0x88d1,	// (0x0000a775) popup_fep_ituss_window_ParamLimits

0x8906,	// (0x0000a7aa) popup_fep_vtchi_icf_pane_ParamLimits

0x892c,	// (0x0000a7d0) ituss_keypad_pane_ParamLimits

0x893b,	// (0x0000a7df) ituss_sks_pane

0x8b09,	// (0x0000a9ad) bg_icf_pane_ParamLimits

0xe6b4,	// (0x00010558) icf_edit_indi_pane_ParamLimits

0xe6b4,	// (0x00010558) icf_edit_indi_pane

0x8b15,	// (0x0000a9b9) list_vkb_icf_pane_ParamLimits

0x8b24,	// (0x0000a9c8) bg_icf_pane_cp01_ParamLimits

0x88bc,	// (0x0000a760) icf_edit_indi_pane_cp01_ParamLimits

0x88bc,	// (0x0000a760) icf_edit_indi_pane_cp01

0x8b3f,	// (0x0000a9e3) vtchi_query_pane

0x4b6b,	// (0x00006a0f) icf_edit_indi_pane_g1_ParamLimits

0x4b6b,	// (0x00006a0f) icf_edit_indi_pane_g1

0x8be6,	// (0x0000aa8a) icf_edit_indi_pane_g2_ParamLimits

0x8be6,	// (0x0000aa8a) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00011d9b) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00011d9b) icf_edit_indi_pane_g

0x8bf5,	// (0x0000aa99) icf_edit_indi_pane_t1

0x8b7c,	// (0x0000aa20) bg_input_focus_pane_cp042

0xec73,	// (0x00010b17) vtchi_button_pane

0x8b85,	// (0x0000aa29) vtchi_query_pane_t1

0x8b93,	// (0x0000aa37) vtchi_query_pane_t2

0x8ba1,	// (0x0000aa45) vtchi_query_pane_t3

0x0002,

0xfee6,	// (0x00011d8a) vtchi_query_pane_t

0xe766,	// (0x0001060a) bg_button_pane_cp13

0x8baf,	// (0x0000aa53) vtchi_button_pane_g1

0x8bb7,	// (0x0000aa5b) ituss_sks_pane_g1

0x8bc2,	// (0x0000aa66) ituss_sks_pane_g2

0x0001,

0xfeed,	// (0x00011d91) ituss_sks_pane_g

0x8bca,	// (0x0000aa6e) ituss_sks_pane_t1

0x8bd8,	// (0x0000aa7c) ituss_sks_pane_t2

0x0001,

0xfef2,	// (0x00011d96) ituss_sks_pane_t

0x40cf,	// (0x00005f73) indicator_nsta_pane_cp_g1

0x40d7,	// (0x00005f7b) indicator_nsta_pane_cp_g2

0x40df,	// (0x00005f83) indicator_nsta_pane_cp_g3

0x40cf,	// (0x00005f73) indicator_nsta_pane_cp_g4

0x40d7,	// (0x00005f7b) indicator_nsta_pane_cp_g5

0x40df,	// (0x00005f83) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00011946) indicator_nsta_pane_cp_g

0xde06,	// (0x0000fcaa) cell_graphic2_pane_t2_ParamLimits

0xde06,	// (0x0000fcaa) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x00011c4c) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x00011c4c) cell_graphic2_pane_t

0xde3f,	// (0x0000fce3) cell_graphic2_control_pane_t1

0xa631,	// (0x0000c4d5) signal_pane_g3_ParamLimits

0xa631,	// (0x0000c4d5) signal_pane_g3

0xa645,	// (0x0000c4e9) signal_pane_g4_ParamLimits

0xa645,	// (0x0000c4e9) signal_pane_g4

0x8897,	// (0x0000a73b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8897,	// (0x0000a73b) cell_ai5_widget_list_row_pane_t3

0x8a19,	// (0x0000a8bd) cell_ituss_key_pane_t1_ParamLimits

0x8a19,	// (0x0000a8bd) cell_ituss_key_pane_t1

0x19fe,	// (0x000038a2) form_field_data_wide_pane_vc_t2_ParamLimits

0x19fe,	// (0x000038a2) form_field_data_wide_pane_vc_t2

0x1a12,	// (0x000038b6) form_field_data_wide_pane_vc_t3_ParamLimits

0x1a12,	// (0x000038b6) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00011692) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00011692) form_field_data_wide_pane_vc_t

0x3d97,	// (0x00005c3b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d97,	// (0x00005c3b) form_field_slider_wide_pane_vc_t3

0x3e75,	// (0x00005d19) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e75,	// (0x00005d19) form_field_popup_wide_pane_vc_t2

0x3e8c,	// (0x00005d30) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e8c,	// (0x00005d30) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00011935) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00011935) form_field_popup_wide_pane_vc_t

0xe17f,	// (0x00010023) aid_fshwr2_btn_pane_ParamLimits

0xe191,	// (0x00010035) aid_fshwr2_syb_pane_ParamLimits

0xe1a3,	// (0x00010047) aid_fshwr2_txt_pane_ParamLimits

0xeda7,	// (0x00010c4b) fshwr2_bg_pane_ParamLimits

0xe1b2,	// (0x00010056) fshwr2_func_candi_pane_ParamLimits

0xe1d1,	// (0x00010075) fshwr2_hwr_syb_pane_ParamLimits

0xe1ec,	// (0x00010090) fshwr2_icf_pane_ParamLimits

0x3d08,	// (0x00005bac) list_double_graphic_pane_vc_g4_ParamLimits

0x3d08,	// (0x00005bac) list_double_graphic_pane_vc_g4

0x8a0d,	// (0x0000a8b1) cell_ituss_key_pane_g3_ParamLimits

0x8a0d,	// (0x0000a8b1) cell_ituss_key_pane_g3

0x8ac7,	// (0x0000a96b) cell_ituss_key_t5_ParamLimits

0x8ac7,	// (0x0000a96b) cell_ituss_key_t5

0xe6c3,	// (0x00010567) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
