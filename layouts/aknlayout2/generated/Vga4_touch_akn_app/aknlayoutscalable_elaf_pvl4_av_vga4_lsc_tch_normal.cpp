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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001ade };

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
0xa00b,	// (0x0000bae9) Screen

0xa017,	// (0x0000baf5) application_window_ParamLimits

0xa017,	// (0x0000baf5) application_window

0xe629,	// (0x00010107) screen_g1

0xa04f,	// (0x0000bb2d) area_bottom_pane_ParamLimits

0xa04f,	// (0x0000bb2d) area_bottom_pane

0xe653,	// (0x00010131) area_top_pane_ParamLimits

0xe653,	// (0x00010131) area_top_pane

0xe6e7,	// (0x000101c5) main_pane_ParamLimits

0xe6e7,	// (0x000101c5) main_pane

0xe7a2,	// (0x00010280) misc_graphics

0xb885,	// (0x0000d363) battery_pane_ParamLimits

0xb885,	// (0x0000d363) battery_pane

0x274a,	// (0x00004228) bg_status_flat_pane_g8

0x2752,	// (0x00004230) bg_status_flat_pane_g9

0x18b4,	// (0x00003392) context_pane_ParamLimits

0x18b4,	// (0x00003392) context_pane

0xb9fc,	// (0x0000d4da) navi_pane_ParamLimits

0xb9fc,	// (0x0000d4da) navi_pane

0xba86,	// (0x0000d564) signal_pane_ParamLimits

0xba86,	// (0x0000d564) signal_pane

0x0008,

0xf843,	// (0x00011321) bg_status_flat_pane_g

0xbb16,	// (0x0000d5f4) status_pane_g1_ParamLimits

0xbb16,	// (0x0000d5f4) status_pane_g1

0xbb2c,	// (0x0000d60a) status_pane_g2_ParamLimits

0xbb2c,	// (0x0000d60a) status_pane_g2

0x1aed,	// (0x000035cb) status_pane_g3_ParamLimits

0x1aed,	// (0x000035cb) status_pane_g3

0x0004,

0xf776,	// (0x00011254) status_pane_g_ParamLimits

0xf776,	// (0x00011254) status_pane_g

0xbb38,	// (0x0000d616) title_pane_ParamLimits

0xbb38,	// (0x0000d616) title_pane

0xbb9f,	// (0x0000d67d) uni_indicator_pane_ParamLimits

0xbb9f,	// (0x0000d67d) uni_indicator_pane

0x10db,	// (0x00002bb9) bg_list_pane_ParamLimits

0x10db,	// (0x00002bb9) bg_list_pane

0xb0bd,	// (0x0000cb9b) find_pane

0x1ec1,	// (0x0000399f) listscroll_app_pane_ParamLimits

0x1ec1,	// (0x0000399f) listscroll_app_pane

0x110f,	// (0x00002bed) listscroll_form_pane

0xb0c5,	// (0x0000cba3) listscroll_gen_pane_ParamLimits

0xb0c5,	// (0x0000cba3) listscroll_gen_pane

0x112b,	// (0x00002c09) listscroll_set_pane

0x3557,	// (0x00005035) main_idle_act_pane

0x0bd2,	// (0x000026b0) main_idle_trad_pane

0x0bd2,	// (0x000026b0) main_list_empty_pane

0x1103,	// (0x00002be1) main_midp_pane

0x1145,	// (0x00002c23) main_pane_g1_ParamLimits

0x1145,	// (0x00002c23) main_pane_g1

0xb0d9,	// (0x0000cbb7) popup_ai_message_window_ParamLimits

0xb0d9,	// (0x0000cbb7) popup_ai_message_window

0xb179,	// (0x0000cc57) popup_fep_china_uni_window_ParamLimits

0xb179,	// (0x0000cc57) popup_fep_china_uni_window

0x126f,	// (0x00002d4d) popup_fep_japan_candidate_window_ParamLimits

0x126f,	// (0x00002d4d) popup_fep_japan_candidate_window

0x1299,	// (0x00002d77) popup_fep_japan_predictive_window_ParamLimits

0x1299,	// (0x00002d77) popup_fep_japan_predictive_window

0xb1d9,	// (0x0000ccb7) popup_find_window

0xb1f6,	// (0x0000ccd4) popup_grid_graphic_window_ParamLimits

0xb1f6,	// (0x0000ccd4) popup_grid_graphic_window

0x130c,	// (0x00002dea) popup_large_graphic_colour_window

0xb2a0,	// (0x0000cd7e) popup_menu_window_ParamLimits

0xb2a0,	// (0x0000cd7e) popup_menu_window

0xb490,	// (0x0000cf6e) popup_note_image_window

0xb450,	// (0x0000cf2e) popup_note_wait_window_ParamLimits

0xb450,	// (0x0000cf2e) popup_note_wait_window

0xb4a8,	// (0x0000cf86) popup_note_window_ParamLimits

0xb4a8,	// (0x0000cf86) popup_note_window

0xb556,	// (0x0000d034) popup_query_code_window_ParamLimits

0xb556,	// (0x0000d034) popup_query_code_window

0x1578,	// (0x00003056) popup_query_data_code_window_ParamLimits

0x1578,	// (0x00003056) popup_query_data_code_window

0xb596,	// (0x0000d074) popup_query_data_window_ParamLimits

0xb596,	// (0x0000d074) popup_query_data_window

0xb62a,	// (0x0000d108) popup_query_sat_info_window_ParamLimits

0xb62a,	// (0x0000d108) popup_query_sat_info_window

0xb6d5,	// (0x0000d1b3) popup_snote_single_graphic_window_ParamLimits

0xb6d5,	// (0x0000d1b3) popup_snote_single_graphic_window

0xb6d5,	// (0x0000d1b3) popup_snote_single_text_window_ParamLimits

0xb6d5,	// (0x0000d1b3) popup_snote_single_text_window

0x1613,	// (0x000030f1) popup_sub_window_general

0x1759,	// (0x00003237) popup_window_general_ParamLimits

0x1759,	// (0x00003237) popup_window_general

0x1772,	// (0x00003250) power_save_pane

0x0f45,	// (0x00002a23) control_pane_g1_ParamLimits

0x0f45,	// (0x00002a23) control_pane_g1

0x0f68,	// (0x00002a46) control_pane_g2_ParamLimits

0x0f68,	// (0x00002a46) control_pane_g2

0x0f8a,	// (0x00002a68) control_pane_g3_ParamLimits

0x0f8a,	// (0x00002a68) control_pane_g3

0x0007,

0xf75e,	// (0x0001123c) control_pane_g_ParamLimits

0xf75e,	// (0x0001123c) control_pane_g

0xafd4,	// (0x0000cab2) control_pane_t1_ParamLimits

0xafd4,	// (0x0000cab2) control_pane_t1

0xb024,	// (0x0000cb02) control_pane_t2_ParamLimits

0xb024,	// (0x0000cb02) control_pane_t2

0x0002,

0xf76f,	// (0x0001124d) control_pane_t_ParamLimits

0xf76f,	// (0x0001124d) control_pane_t

0x0e6a,	// (0x00002948) navi_navi_volume_pane_cp1

0x0e72,	// (0x00002950) status_small_icon_pane

0x0e7a,	// (0x00002958) status_small_pane_g1_ParamLimits

0x0e7a,	// (0x00002958) status_small_pane_g1

0x0eae,	// (0x0000298c) status_small_pane_g2_ParamLimits

0x0eae,	// (0x0000298c) status_small_pane_g2

0x0eba,	// (0x00002998) status_small_pane_g3_ParamLimits

0x0eba,	// (0x00002998) status_small_pane_g3

0xaf86,	// (0x0000ca64) status_small_pane_g4_ParamLimits

0xaf86,	// (0x0000ca64) status_small_pane_g4

0xaf94,	// (0x0000ca72) status_small_pane_g5_ParamLimits

0xaf94,	// (0x0000ca72) status_small_pane_g5

0x0ee0,	// (0x000029be) status_small_pane_g6_ParamLimits

0x0ee0,	// (0x000029be) status_small_pane_g6

0x0007,

0xf74d,	// (0x0001122b) status_small_pane_g_ParamLimits

0xf74d,	// (0x0001122b) status_small_pane_g

0x0f0f,	// (0x000029ed) status_small_pane_t1

0xafaa,	// (0x0000ca88) status_small_wait_pane_ParamLimits

0xafaa,	// (0x0000ca88) status_small_wait_pane

0xad72,	// (0x0000c850) aid_levels_signal_ParamLimits

0xad72,	// (0x0000c850) aid_levels_signal

0xad8a,	// (0x0000c868) signal_pane_g1_ParamLimits

0xad8a,	// (0x0000c868) signal_pane_g1

0xada5,	// (0x0000c883) signal_pane_g2_ParamLimits

0xada5,	// (0x0000c883) signal_pane_g2

0x0003,

0xf6de,	// (0x000111bc) signal_pane_g_ParamLimits

0xf6de,	// (0x000111bc) signal_pane_g

0x0468,	// (0x00001f46) context_pane_g1

0xa23b,	// (0x0000bd19) title_pane_g1

0xa27e,	// (0x0000bd5c) title_pane_t1

0xe80c,	// (0x000102ea) title_pane_t2

0xe832,	// (0x00010310) title_pane_t3

0x0002,

0xf532,	// (0x00011010) title_pane_t

0xbbc7,	// (0x0000d6a5) aid_levels_battery_ParamLimits

0xbbc7,	// (0x0000d6a5) aid_levels_battery

0xbbe3,	// (0x0000d6c1) battery_pane_g1_ParamLimits

0xbbe3,	// (0x0000d6c1) battery_pane_g1

0xbc00,	// (0x0000d6de) battery_pane_g2_ParamLimits

0xbc00,	// (0x0000d6de) battery_pane_g2

0x0001,

0xf781,	// (0x0001125f) battery_pane_g_ParamLimits

0xf781,	// (0x0001125f) battery_pane_g

0xc016,	// (0x0000daf4) uni_indicator_pane_g1

0xc02c,	// (0x0000db0a) uni_indicator_pane_g2

0xc042,	// (0x0000db20) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x000113c9) uni_indicator_pane_g

0x0a35,	// (0x00002513) navi_icon_pane_ParamLimits

0x0a35,	// (0x00002513) navi_icon_pane

0x097c,	// (0x0000245a) navi_midp_pane

0x0a51,	// (0x0000252f) navi_navi_pane

0x0a5b,	// (0x00002539) navi_text_pane_ParamLimits

0x0a5b,	// (0x00002539) navi_text_pane

0xe629,	// (0x00010107) status_small_wait_pane_g1

0xec00,	// (0x000106de) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x000113c4) status_small_wait_pane_g

0xbfb5,	// (0x0000da93) navi_navi_icon_text_pane

0xbfbd,	// (0x0000da9b) navi_navi_pane_g1_ParamLimits

0xbfbd,	// (0x0000da9b) navi_navi_pane_g1

0xbfcf,	// (0x0000daad) navi_navi_pane_g2_ParamLimits

0xbfcf,	// (0x0000daad) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x00011392) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x00011392) navi_navi_pane_g

0x2f3f,	// (0x00004a1d) navi_navi_tabs_pane

0xbfe1,	// (0x0000dabf) navi_navi_text_pane

0xbfb5,	// (0x0000da93) navi_navi_volume_pane

0xbfa3,	// (0x0000da81) navi_text_pane_t1

0xbf97,	// (0x0000da75) navi_icon_pane_g1

0x2e36,	// (0x00004914) navi_navi_text_pane_t1

0xbf86,	// (0x0000da64) navi_navi_volume_pane_g1

0xbf8e,	// (0x0000da6c) volume_small_pane

0xbee2,	// (0x0000d9c0) navi_navi_icon_text_pane_g1

0xbeea,	// (0x0000d9c8) navi_navi_icon_text_pane_t1

0x0a51,	// (0x0000252f) navi_tabs_2_long_pane

0x0a51,	// (0x0000252f) navi_tabs_2_pane

0x0a51,	// (0x0000252f) navi_tabs_3_long_pane

0x0a51,	// (0x0000252f) navi_tabs_3_pane

0x0a51,	// (0x0000252f) navi_tabs_4_pane

0xbec2,	// (0x0000d9a0) tabs_2_active_pane_ParamLimits

0xbec2,	// (0x0000d9a0) tabs_2_active_pane

0xbed2,	// (0x0000d9b0) tabs_2_passive_pane_ParamLimits

0xbed2,	// (0x0000d9b0) tabs_2_passive_pane

0xbe90,	// (0x0000d96e) tabs_3_active_pane_ParamLimits

0xbe90,	// (0x0000d96e) tabs_3_active_pane

0xbea0,	// (0x0000d97e) tabs_3_passive_pane_ParamLimits

0xbea0,	// (0x0000d97e) tabs_3_passive_pane

0xbeb1,	// (0x0000d98f) tabs_3_passive_pane_cp_ParamLimits

0xbeb1,	// (0x0000d98f) tabs_3_passive_pane_cp

0xbe4c,	// (0x0000d92a) tabs_4_active_pane_ParamLimits

0xbe4c,	// (0x0000d92a) tabs_4_active_pane

0xbe5d,	// (0x0000d93b) tabs_4_passive_pane_ParamLimits

0xbe5d,	// (0x0000d93b) tabs_4_passive_pane

0xbe6e,	// (0x0000d94c) tabs_4_passive_pane_cp_ParamLimits

0xbe6e,	// (0x0000d94c) tabs_4_passive_pane_cp

0xbe7f,	// (0x0000d95d) tabs_4_passive_pane_cp2_ParamLimits

0xbe7f,	// (0x0000d95d) tabs_4_passive_pane_cp2

0xbe28,	// (0x0000d906) tabs_2_long_active_pane_ParamLimits

0xbe28,	// (0x0000d906) tabs_2_long_active_pane

0xbe3a,	// (0x0000d918) tabs_2_long_passive_pane_ParamLimits

0xbe3a,	// (0x0000d918) tabs_2_long_passive_pane

0xbdef,	// (0x0000d8cd) tabs_3_long_active_pane_ParamLimits

0xbdef,	// (0x0000d8cd) tabs_3_long_active_pane

0xbe02,	// (0x0000d8e0) tabs_3_long_passive_pane_ParamLimits

0xbe02,	// (0x0000d8e0) tabs_3_long_passive_pane

0xbe15,	// (0x0000d8f3) tabs_3_long_passive_pane_cp_ParamLimits

0xbe15,	// (0x0000d8f3) tabs_3_long_passive_pane_cp

0x2baf,	// (0x0000468d) volume_small_pane_g1

0xbd9e,	// (0x0000d87c) volume_small_pane_g2

0xbda7,	// (0x0000d885) volume_small_pane_g3

0xbdb0,	// (0x0000d88e) volume_small_pane_g4

0xbdb9,	// (0x0000d897) volume_small_pane_g5

0xbdc2,	// (0x0000d8a0) volume_small_pane_g6

0xbdcb,	// (0x0000d8a9) volume_small_pane_g7

0xbdd4,	// (0x0000d8b2) volume_small_pane_g8

0xbddd,	// (0x0000d8bb) volume_small_pane_g9

0xbde6,	// (0x0000d8c4) volume_small_pane_g10

0x0009,

0xf880,	// (0x0001135e) volume_small_pane_g

0xe844,	// (0x00010322) bg_active_tab_pane_cp2_ParamLimits

0xe844,	// (0x00010322) bg_active_tab_pane_cp2

0xa30a,	// (0x0000bde8) tabs_3_active_pane_g1

0xa312,	// (0x0000bdf0) tabs_3_active_pane_t1

0xe844,	// (0x00010322) bg_passive_tab_pane_cp2_ParamLimits

0xe844,	// (0x00010322) bg_passive_tab_pane_cp2

0xa30a,	// (0x0000bde8) tabs_3_passive_pane_g1

0xa312,	// (0x0000bdf0) tabs_3_passive_pane_t1

0xe844,	// (0x00010322) bg_active_tab_pane_cp3_ParamLimits

0xe844,	// (0x00010322) bg_active_tab_pane_cp3

0xa324,	// (0x0000be02) tabs_4_active_pane_g1

0xa32c,	// (0x0000be0a) tabs_4_active_pane_t1

0xe844,	// (0x00010322) bg_passive_tab_pane_cp3_ParamLimits

0xe844,	// (0x00010322) bg_passive_tab_pane_cp3

0xa324,	// (0x0000be02) tabs_4_1_passive_pane_g1

0xa32c,	// (0x0000be0a) tabs_4_1_passive_pane_t1

0x1103,	// (0x00002be1) list_highlight_pane_cp2

0xc0d5,	// (0x0000dbb3) list_set_pane_ParamLimits

0xc0d5,	// (0x0000dbb3) list_set_pane

0xc197,	// (0x0000dc75) main_pane_set_t1_ParamLimits

0xc197,	// (0x0000dc75) main_pane_set_t1

0xc1b7,	// (0x0000dc95) main_pane_set_t2_ParamLimits

0xc1b7,	// (0x0000dc95) main_pane_set_t2

0xc1cb,	// (0x0000dca9) main_pane_set_t3_ParamLimits

0xc1cb,	// (0x0000dca9) main_pane_set_t3

0xc1df,	// (0x0000dcbd) main_pane_set_t4_ParamLimits

0xc1df,	// (0x0000dcbd) main_pane_set_t4

0x0003,

0xf950,	// (0x0001142e) main_pane_set_t_ParamLimits

0xf950,	// (0x0001142e) main_pane_set_t

0xc1f3,	// (0x0000dcd1) setting_code_pane

0x36a5,	// (0x00005183) setting_slider_graphic_pane

0x36a5,	// (0x00005183) setting_slider_pane

0x36a5,	// (0x00005183) setting_text_pane

0x36a5,	// (0x00005183) setting_volume_pane

0xe852,	// (0x00010330) volume_set_pane

0xe85c,	// (0x0001033a) bg_set_opt_pane_cp

0xe86a,	// (0x00010348) setting_slider_pane_t1

0xe883,	// (0x00010361) setting_slider_pane_t2

0xe89d,	// (0x0001037b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00011017) setting_slider_pane_t

0xe8b5,	// (0x00010393) slider_set_pane

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp2

0xe8cb,	// (0x000103a9) setting_slider_graphic_pane_g1

0xe8d4,	// (0x000103b2) setting_slider_graphic_pane_t1

0xe8e4,	// (0x000103c2) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001101e) setting_slider_graphic_pane_t

0xe8f4,	// (0x000103d2) slider_set_pane_cp

0xe7a2,	// (0x00010280) input_focus_pane_cp1

0x353e,	// (0x0000501c) list_set_text_pane

0xe629,	// (0x00010107) setting_text_pane_g1

0xe7a2,	// (0x00010280) input_focus_pane_cp2

0xe629,	// (0x00010107) setting_code_pane_g1

0xe8fc,	// (0x000103da) setting_code_pane_t1

0xe90a,	// (0x000103e8) set_text_pane_t1_ParamLimits

0xe90a,	// (0x000103e8) set_text_pane_t1

0xf08f,	// (0x00010b6d) set_opt_bg_pane_g1

0xf097,	// (0x00010b75) set_opt_bg_pane_g2

0x3516,	// (0x00004ff4) set_opt_bg_pane_g3

0xf0a7,	// (0x00010b85) set_opt_bg_pane_g4

0xf0af,	// (0x00010b8d) set_opt_bg_pane_g5

0xf0b7,	// (0x00010b95) set_opt_bg_pane_g6

0x3520,	// (0x00004ffe) set_opt_bg_pane_g7

0x352a,	// (0x00005008) set_opt_bg_pane_g8

0x3534,	// (0x00005012) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x0001141b) set_opt_bg_pane_g

0x34a5,	// (0x00004f83) slider_set_pane_g1

0x34b2,	// (0x00004f90) slider_set_pane_g2

0x0006,

0xf92e,	// (0x0001140c) slider_set_pane_g

0x330d,	// (0x00004deb) volume_set_pane_g1

0x3317,	// (0x00004df5) volume_set_pane_g2

0x3321,	// (0x00004dff) volume_set_pane_g3

0x332b,	// (0x00004e09) volume_set_pane_g4

0x3335,	// (0x00004e13) volume_set_pane_g5

0x333f,	// (0x00004e1d) volume_set_pane_g6

0x3349,	// (0x00004e27) volume_set_pane_g7

0x3353,	// (0x00004e31) volume_set_pane_g8

0x335d,	// (0x00004e3b) volume_set_pane_g9

0x3367,	// (0x00004e45) volume_set_pane_g10

0x0009,

0xf906,	// (0x000113e4) volume_set_pane_g

0xa33e,	// (0x0000be1c) indicator_pane_ParamLimits

0xa33e,	// (0x0000be1c) indicator_pane

0xa36a,	// (0x0000be48) main_idle_pane_g2_ParamLimits

0xa36a,	// (0x0000be48) main_idle_pane_g2

0xa3a2,	// (0x0000be80) main_pane_idle_g1_ParamLimits

0xa3a2,	// (0x0000be80) main_pane_idle_g1

0xe924,	// (0x00010402) popup_clock_digital_analogue_window_ParamLimits

0xe924,	// (0x00010402) popup_clock_digital_analogue_window

0xa3cc,	// (0x0000beaa) soft_indicator_pane_ParamLimits

0xa3cc,	// (0x0000beaa) soft_indicator_pane

0xa3e8,	// (0x0000bec6) wallpaper_pane_ParamLimits

0xa3e8,	// (0x0000bec6) wallpaper_pane

0xe629,	// (0x00010107) wallpaper_pane_g1

0xa3fa,	// (0x0000bed8) indicator_pane_g1_ParamLimits

0xa3fa,	// (0x0000bed8) indicator_pane_g1

0x3aaa,	// (0x00005588) navi_navi_icon_text_pane_srt_g1

0xe952,	// (0x00010430) soft_indicator_pane_t1

0xe96c,	// (0x0001044a) aid_ps_area_pane

0xa413,	// (0x0000bef1) aid_ps_clock_pane

0xe97d,	// (0x0001045b) aid_ps_indicator_pane

0xe989,	// (0x00010467) indicator_ps_pane_ParamLimits

0xe989,	// (0x00010467) indicator_ps_pane

0xe998,	// (0x00010476) power_save_pane_g1_ParamLimits

0xe998,	// (0x00010476) power_save_pane_g1

0xe9a4,	// (0x00010482) power_save_pane_g2_ParamLimits

0xe9a4,	// (0x00010482) power_save_pane_g2

0xe633,	// (0x00010111) aid_navinavi_width_pane

0xe96c,	// (0x0001044a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00011023) power_save_pane_g_ParamLimits

0xf545,	// (0x00011023) power_save_pane_g

0xe9b2,	// (0x00010490) power_save_pane_t1_ParamLimits

0xe9b2,	// (0x00010490) power_save_pane_t1

0xa413,	// (0x0000bef1) aid_ps_clock_pane_ParamLimits

0xe97d,	// (0x0001045b) aid_ps_indicator_pane_ParamLimits

0xe9c4,	// (0x000104a2) power_save_pane_t4_ParamLimits

0xe9c4,	// (0x000104a2) power_save_pane_t4

0x0001,

0xf54a,	// (0x00011028) power_save_pane_t_ParamLimits

0xf54a,	// (0x00011028) power_save_pane_t

0xe9ee,	// (0x000104cc) power_save_t3_ParamLimits

0xe9ee,	// (0x000104cc) power_save_t3

0xe9d9,	// (0x000104b7) power_save_t2_ParamLimits

0xe9d9,	// (0x000104b7) power_save_t2

0xea03,	// (0x000104e1) indicator_ps_pane_g1

0xa421,	// (0x0000beff) ai_gene_pane_ParamLimits

0xa421,	// (0x0000beff) ai_gene_pane

0xa438,	// (0x0000bf16) ai_links_pane_ParamLimits

0xa438,	// (0x0000bf16) ai_links_pane

0xa450,	// (0x0000bf2e) indicator_pane_cp1_ParamLimits

0xa450,	// (0x0000bf2e) indicator_pane_cp1

0xa45f,	// (0x0000bf3d) main_pane_idle_g1_cp_ParamLimits

0xa45f,	// (0x0000bf3d) main_pane_idle_g1_cp

0xea0c,	// (0x000104ea) popup_ai_links_title_window

0xa477,	// (0x0000bf55) soft_indicator_pane_cp1_ParamLimits

0xa477,	// (0x0000bf55) soft_indicator_pane_cp1

0x31ee,	// (0x00004ccc) ai_links_pane_g1

0x31f7,	// (0x00004cd5) grid_ai_links_pane

0xc00d,	// (0x0000daeb) ai_gene_pane_1

0x31dc,	// (0x00004cba) ai_gene_pane_2

0x31e5,	// (0x00004cc3) list_highlight_pane_cp4

0xbfe9,	// (0x0000dac7) cell_ai_link_pane_ParamLimits

0xbfe9,	// (0x0000dac7) cell_ai_link_pane

0x31ab,	// (0x00004c89) cell_ai_link_pane_g1

0xec00,	// (0x000106de) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x000113bf) cell_ai_link_pane_g

0xe7a2,	// (0x00010280) grid_highlight_cp2

0xe7a2,	// (0x00010280) bg_popup_sub_pane_cp1

0xea23,	// (0x00010501) popup_ai_links_title_window_t1

0x30f7,	// (0x00004bd5) ai_gene_pane_1_g1_ParamLimits

0x30f7,	// (0x00004bd5) ai_gene_pane_1_g1

0x3103,	// (0x00004be1) ai_gene_pane_1_g2_ParamLimits

0x3103,	// (0x00004be1) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x000113b5) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x000113b5) ai_gene_pane_1_g

0x3110,	// (0x00004bee) ai_gene_pane_1_t1_ParamLimits

0x3110,	// (0x00004bee) ai_gene_pane_1_t1

0x3144,	// (0x00004c22) grid_ai_soft_ind_pane

0x30e2,	// (0x00004bc0) ai_gene_pane_2_t1_ParamLimits

0x30e2,	// (0x00004bc0) ai_gene_pane_2_t1

0xa48b,	// (0x0000bf69) main_pane_empty_t1_ParamLimits

0xa48b,	// (0x0000bf69) main_pane_empty_t1

0xa4a3,	// (0x0000bf81) main_pane_empty_t2_ParamLimits

0xa4a3,	// (0x0000bf81) main_pane_empty_t2

0xa4b8,	// (0x0000bf96) main_pane_empty_t3_ParamLimits

0xa4b8,	// (0x0000bf96) main_pane_empty_t3

0xa4ca,	// (0x0000bfa8) main_pane_empty_t4_ParamLimits

0xa4ca,	// (0x0000bfa8) main_pane_empty_t4

0xa4dc,	// (0x0000bfba) main_pane_empty_t5_ParamLimits

0xa4dc,	// (0x0000bfba) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001102d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001102d) main_pane_empty_t

0xf14d,	// (0x00010c2b) bg_popup_window_pane_ParamLimits

0xf14d,	// (0x00010c2b) bg_popup_window_pane

0x2e44,	// (0x00004922) find_popup_pane_cp2_ParamLimits

0x2e44,	// (0x00004922) find_popup_pane_cp2

0x2e50,	// (0x0000492e) heading_pane_ParamLimits

0x2e50,	// (0x0000492e) heading_pane

0xe7a2,	// (0x00010280) bg_popup_sub_pane

0xbf07,	// (0x0000d9e5) bg_popup_window_pane_g1_ParamLimits

0xbf07,	// (0x0000d9e5) bg_popup_window_pane_g1

0xbf16,	// (0x0000d9f4) bg_popup_window_pane_g2_ParamLimits

0xbf16,	// (0x0000d9f4) bg_popup_window_pane_g2

0xbf22,	// (0x0000da00) bg_popup_window_pane_g3_ParamLimits

0xbf22,	// (0x0000da00) bg_popup_window_pane_g3

0xbf2e,	// (0x0000da0c) bg_popup_window_pane_g4_ParamLimits

0xbf2e,	// (0x0000da0c) bg_popup_window_pane_g4

0xbf3d,	// (0x0000da1b) bg_popup_window_pane_g5_ParamLimits

0xbf3d,	// (0x0000da1b) bg_popup_window_pane_g5

0xbf4d,	// (0x0000da2b) bg_popup_window_pane_g6_ParamLimits

0xbf4d,	// (0x0000da2b) bg_popup_window_pane_g6

0xbf59,	// (0x0000da37) bg_popup_window_pane_g7_ParamLimits

0xbf59,	// (0x0000da37) bg_popup_window_pane_g7

0xbf68,	// (0x0000da46) bg_popup_window_pane_g8_ParamLimits

0xbf68,	// (0x0000da46) bg_popup_window_pane_g8

0xbf77,	// (0x0000da55) bg_popup_window_pane_g9_ParamLimits

0xbf77,	// (0x0000da55) bg_popup_window_pane_g9

0x2e19,	// (0x000048f7) bg_popup_window_pane_g10_ParamLimits

0x2e19,	// (0x000048f7) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x0001137d) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x0001137d) bg_popup_window_pane_g

0x2d42,	// (0x00004820) bg_popup_heading_pane_ParamLimits

0x2d42,	// (0x00004820) bg_popup_heading_pane

0x39ed,	// (0x000054cb) tabs_4_passive_pane_cp_srt_ParamLimits

0x39ed,	// (0x000054cb) tabs_4_passive_pane_cp_srt

0x39ff,	// (0x000054dd) tabs_4_passive_pane_srt_ParamLimits

0x2d56,	// (0x00004834) heading_pane_g2

0x39ff,	// (0x000054dd) tabs_4_passive_pane_srt

0x1ec1,	// (0x0000399f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1ec1,	// (0x0000399f) bg_passive_tab_pane_cp3_srt

0x2d5e,	// (0x0000483c) heading_pane_t1_ParamLimits

0x2d5e,	// (0x0000483c) heading_pane_t1

0x2d75,	// (0x00004853) heading_pane_t2_ParamLimits

0x2d75,	// (0x00004853) heading_pane_t2

0x0001,

0xf89a,	// (0x00011378) heading_pane_t_ParamLimits

0xf89a,	// (0x00011378) heading_pane_t

0x2712,	// (0x000041f0) bg_popup_heading_pane_g1

0x27c1,	// (0x0000429f) bg_popup_heading_pane_g2

0x27cb,	// (0x000042a9) bg_popup_heading_pane_g3

0x27d5,	// (0x000042b3) bg_popup_heading_pane_g4

0x27df,	// (0x000042bd) bg_popup_heading_pane_g5

0x27e9,	// (0x000042c7) bg_popup_heading_pane_g6

0x27f1,	// (0x000042cf) bg_popup_heading_pane_g7

0x27f9,	// (0x000042d7) bg_popup_heading_pane_g8

0x2803,	// (0x000042e1) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x00011334) bg_popup_heading_pane_g

0x1d26,	// (0x00003804) bg_popup_sub_pane_g1

0x1d2e,	// (0x0000380c) bg_popup_sub_pane_g2

0x1d36,	// (0x00003814) bg_popup_sub_pane_g3

0x1d3e,	// (0x0000381c) bg_popup_sub_pane_g4

0x1d46,	// (0x00003824) bg_popup_sub_pane_g5

0x1d4e,	// (0x0000382c) bg_popup_sub_pane_g6

0x1d56,	// (0x00003834) bg_popup_sub_pane_g7

0x1d5e,	// (0x0000383c) bg_popup_sub_pane_g8

0x1d66,	// (0x00003844) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x0001130e) bg_popup_sub_pane_g

0xe844,	// (0x00010322) bg_popup_window_pane_cp5_ParamLimits

0xe844,	// (0x00010322) bg_popup_window_pane_cp5

0xea40,	// (0x0001051e) popup_note_window_g1_ParamLimits

0xea40,	// (0x0001051e) popup_note_window_g1

0xea4c,	// (0x0001052a) popup_note_window_t1_ParamLimits

0xea4c,	// (0x0001052a) popup_note_window_t1

0xea62,	// (0x00010540) popup_note_window_t2_ParamLimits

0xea62,	// (0x00010540) popup_note_window_t2

0xea78,	// (0x00010556) popup_note_window_t3_ParamLimits

0xea78,	// (0x00010556) popup_note_window_t3

0xea8e,	// (0x0001056c) popup_note_window_t4_ParamLimits

0xea8e,	// (0x0001056c) popup_note_window_t4

0xeab6,	// (0x00010594) popup_note_window_t5_ParamLimits

0xeab6,	// (0x00010594) popup_note_window_t5

0x0004,

0xf55a,	// (0x00011038) popup_note_window_t_ParamLimits

0xf55a,	// (0x00011038) popup_note_window_t

0xeb00,	// (0x000105de) bg_popup_window_pane_cp6_ParamLimits

0xeb00,	// (0x000105de) bg_popup_window_pane_cp6

0x268e,	// (0x0000416c) popup_note_image_window_g1_ParamLimits

0x268e,	// (0x0000416c) popup_note_image_window_g1

0x269a,	// (0x00004178) popup_note_image_window_g2_ParamLimits

0x269a,	// (0x00004178) popup_note_image_window_g2

0x0001,

0xf824,	// (0x00011302) popup_note_image_window_g_ParamLimits

0xf824,	// (0x00011302) popup_note_image_window_g

0x26b3,	// (0x00004191) popup_note_image_window_t1_ParamLimits

0x26b3,	// (0x00004191) popup_note_image_window_t1

0x26cc,	// (0x000041aa) popup_note_image_window_t2_ParamLimits

0x26cc,	// (0x000041aa) popup_note_image_window_t2

0x26e5,	// (0x000041c3) popup_note_image_window_t3_ParamLimits

0x26e5,	// (0x000041c3) popup_note_image_window_t3

0x0002,

0xf829,	// (0x00011307) popup_note_image_window_t_ParamLimits

0xf829,	// (0x00011307) popup_note_image_window_t

0x254e,	// (0x0000402c) bg_popup_window_pane_cp7_ParamLimits

0x254e,	// (0x0000402c) bg_popup_window_pane_cp7

0x257e,	// (0x0000405c) popup_note_wait_window_g1_ParamLimits

0x257e,	// (0x0000405c) popup_note_wait_window_g1

0x258a,	// (0x00004068) popup_note_wait_window_g2_ParamLimits

0x258a,	// (0x00004068) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x000112f0) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x000112f0) popup_note_wait_window_g

0x25a2,	// (0x00004080) popup_note_wait_window_t1_ParamLimits

0x25a2,	// (0x00004080) popup_note_wait_window_t1

0x25c9,	// (0x000040a7) popup_note_wait_window_t2_ParamLimits

0x25c9,	// (0x000040a7) popup_note_wait_window_t2

0x25e7,	// (0x000040c5) popup_note_wait_window_t3_ParamLimits

0x25e7,	// (0x000040c5) popup_note_wait_window_t3

0x25fa,	// (0x000040d8) popup_note_wait_window_t4_ParamLimits

0x25fa,	// (0x000040d8) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x000112f7) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x000112f7) popup_note_wait_window_t

0x261f,	// (0x000040fd) wait_bar_pane_ParamLimits

0x261f,	// (0x000040fd) wait_bar_pane

0xe7a2,	// (0x00010280) wait_anim_pane

0xe7a2,	// (0x00010280) wait_border_pane

0xe629,	// (0x00010107) wait_anim_pane_g1

0xe629,	// (0x00010107) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x000111b7) wait_anim_pane_g

0x24f2,	// (0x00003fd0) wait_border_pane_g1

0x24fd,	// (0x00003fdb) wait_border_pane_g2

0x2506,	// (0x00003fe4) wait_border_pane_g3

0x0002,

0xf80b,	// (0x000112e9) wait_border_pane_g

0x235c,	// (0x00003e3a) bg_popup_window_pane_cp16_ParamLimits

0x235c,	// (0x00003e3a) bg_popup_window_pane_cp16

0x245c,	// (0x00003f3a) indicator_popup_pane_cp4_ParamLimits

0x245c,	// (0x00003f3a) indicator_popup_pane_cp4

0x2470,	// (0x00003f4e) popup_query_data_window_t1_ParamLimits

0x2470,	// (0x00003f4e) popup_query_data_window_t1

0x2482,	// (0x00003f60) popup_query_data_window_t2_ParamLimits

0x2482,	// (0x00003f60) popup_query_data_window_t2

0x249b,	// (0x00003f79) popup_query_data_window_t3_ParamLimits

0x249b,	// (0x00003f79) popup_query_data_window_t3

0x0002,

0xf804,	// (0x000112e2) popup_query_data_window_t_ParamLimits

0xf804,	// (0x000112e2) popup_query_data_window_t

0x24b5,	// (0x00003f93) query_popup_data_pane_ParamLimits

0x24b5,	// (0x00003f93) query_popup_data_pane

0x24c9,	// (0x00003fa7) query_popup_data_pane_cp1_ParamLimits

0x24c9,	// (0x00003fa7) query_popup_data_pane_cp1

0x235c,	// (0x00003e3a) bg_popup_window_pane_cp10_ParamLimits

0x235c,	// (0x00003e3a) bg_popup_window_pane_cp10

0x238e,	// (0x00003e6c) indicator_popup_pane_ParamLimits

0x238e,	// (0x00003e6c) indicator_popup_pane

0x23b0,	// (0x00003e8e) popup_query_code_window_t1_ParamLimits

0x23b0,	// (0x00003e8e) popup_query_code_window_t1

0x23ca,	// (0x00003ea8) popup_query_code_window_t2_ParamLimits

0x23ca,	// (0x00003ea8) popup_query_code_window_t2

0x2413,	// (0x00003ef1) popup_query_code_window_t3_ParamLimits

0x2413,	// (0x00003ef1) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x000112db) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x000112db) popup_query_code_window_t

0x2442,	// (0x00003f20) query_popup_pane_ParamLimits

0x2442,	// (0x00003f20) query_popup_pane

0xeb00,	// (0x000105de) bg_popup_window_pane_cp15_ParamLimits

0xeb00,	// (0x000105de) bg_popup_window_pane_cp15

0xeb20,	// (0x000105fe) indicator_popup_pane_cp1_ParamLimits

0xeb20,	// (0x000105fe) indicator_popup_pane_cp1

0xeb33,	// (0x00010611) indicator_popup_pane_cp2_ParamLimits

0xeb33,	// (0x00010611) indicator_popup_pane_cp2

0xeb4e,	// (0x0001062c) popup_query_data_code_window_g1_ParamLimits

0xeb4e,	// (0x0001062c) popup_query_data_code_window_g1

0xeb61,	// (0x0001063f) popup_query_data_code_window_t1_ParamLimits

0xeb61,	// (0x0001063f) popup_query_data_code_window_t1

0xeb73,	// (0x00010651) popup_query_data_code_window_t2_ParamLimits

0xeb73,	// (0x00010651) popup_query_data_code_window_t2

0xeb85,	// (0x00010663) popup_query_data_code_window_t3_ParamLimits

0xeb85,	// (0x00010663) popup_query_data_code_window_t3

0xeb9b,	// (0x00010679) popup_query_data_code_window_t4_ParamLimits

0xeb9b,	// (0x00010679) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00011043) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00011043) popup_query_data_code_window_t

0x09f1,	// (0x000024cf) list_single_midp_graphic_pane_g3

0xebb5,	// (0x00010693) query_popup_data_pane_cp2_ParamLimits

0xebc8,	// (0x000106a6) query_popup_pane_cp2_ParamLimits

0xebc8,	// (0x000106a6) query_popup_pane_cp2

0xe7a2,	// (0x00010280) bg_popup_window_pane_cp11

0x2340,	// (0x00003e1e) heading_pane_cp5

0x2348,	// (0x00003e26) listscroll_popup_info_pane

0xe7a2,	// (0x00010280) input_focus_pane_cp3

0xebe3,	// (0x000106c1) query_popup_pane_t1

0xebf1,	// (0x000106cf) list_popup_info_pane_ParamLimits

0xebf1,	// (0x000106cf) list_popup_info_pane

0xec00,	// (0x000106de) listscroll_popup_info_pane_g1

0xec08,	// (0x000106e6) scroll_pane_cp7

0xec12,	// (0x000106f0) popup_info_list_pane_t1_ParamLimits

0xec12,	// (0x000106f0) popup_info_list_pane_t1

0xec2c,	// (0x0001070a) popup_info_list_pane_t2_ParamLimits

0xec2c,	// (0x0001070a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001104c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001104c) popup_info_list_pane_t

0xe7a2,	// (0x00010280) bg_popup_window_pane_cp12

0x3ae1,	// (0x000055bf) find_popup_pane

0xe85c,	// (0x0001033a) bg_popup_window_pane_cp3

0xec46,	// (0x00010724) heading_pane_cp3

0xec55,	// (0x00010733) listscroll_popup_graphic_pane

0xe7a2,	// (0x00010280) bg_popup_window_pane_cp4

0xa53e,	// (0x0000c01c) heading_pane_cp4

0xec65,	// (0x00010743) listscroll_popup_colour_pane

0xa548,	// (0x0000c026) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa548,	// (0x0000c026) cell_large_graphic_colour_none_popup_pane

0xa55c,	// (0x0000c03a) grid_large_graphic_colour_popup_pane_ParamLimits

0xa55c,	// (0x0000c03a) grid_large_graphic_colour_popup_pane

0xa584,	// (0x0000c062) listscroll_popup_colour_pane_g1_ParamLimits

0xa584,	// (0x0000c062) listscroll_popup_colour_pane_g1

0xa59b,	// (0x0000c079) listscroll_popup_colour_pane_g2_ParamLimits

0xa59b,	// (0x0000c079) listscroll_popup_colour_pane_g2

0xa5b2,	// (0x0000c090) listscroll_popup_colour_pane_g3_ParamLimits

0xa5b2,	// (0x0000c090) listscroll_popup_colour_pane_g3

0xa5c2,	// (0x0000c0a0) listscroll_popup_colour_pane_g4_ParamLimits

0xa5c2,	// (0x0000c0a0) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00011051) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00011051) listscroll_popup_colour_pane_g

0xec6d,	// (0x0001074b) scroll_pane_cp6_ParamLimits

0xec6d,	// (0x0001074b) scroll_pane_cp6

0xa5d2,	// (0x0000c0b0) cell_large_graphic_colour_popup_pane_ParamLimits

0xa5d2,	// (0x0000c0b0) cell_large_graphic_colour_popup_pane

0xec7f,	// (0x0001075d) cell_large_graphic_colour_none_popup_pane_t1

0xe7a2,	// (0x00010280) grid_highlight_pane_cp5

0xec8e,	// (0x0001076c) cell_large_graphic_colour_popup_pane_g1

0xec96,	// (0x00010774) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001105a) cell_large_graphic_colour_popup_pane_g

0xec9e,	// (0x0001077c) cell_large_graphic_colour_popup_pane_g2_copy1

0xeca7,	// (0x00010785) grid_highlight_pane_cp4

0xecaf,	// (0x0001078d) bg_popup_window_pane_cp8_ParamLimits

0xecaf,	// (0x0001078d) bg_popup_window_pane_cp8

0xecca,	// (0x000107a8) popup_snote_single_text_window_g1_ParamLimits

0xecca,	// (0x000107a8) popup_snote_single_text_window_g1

0xecdc,	// (0x000107ba) popup_snote_single_text_window_t1_ParamLimits

0xecdc,	// (0x000107ba) popup_snote_single_text_window_t1

0xecef,	// (0x000107cd) popup_snote_single_text_window_t2_ParamLimits

0xecef,	// (0x000107cd) popup_snote_single_text_window_t2

0xed02,	// (0x000107e0) popup_snote_single_text_window_t3_ParamLimits

0xed02,	// (0x000107e0) popup_snote_single_text_window_t3

0xed3b,	// (0x00010819) popup_snote_single_text_window_t4_ParamLimits

0xed3b,	// (0x00010819) popup_snote_single_text_window_t4

0xed6f,	// (0x0001084d) popup_snote_single_text_window_t5_ParamLimits

0xed6f,	// (0x0001084d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001105f) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001105f) popup_snote_single_text_window_t

0xed9e,	// (0x0001087c) bg_popup_window_pane_cp9_ParamLimits

0xed9e,	// (0x0001087c) bg_popup_window_pane_cp9

0xecca,	// (0x000107a8) popup_snote_single_graphic_window_g1_ParamLimits

0xecca,	// (0x000107a8) popup_snote_single_graphic_window_g1

0xedac,	// (0x0001088a) popup_snote_single_graphic_window_g2_ParamLimits

0xedac,	// (0x0001088a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001106a) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001106a) popup_snote_single_graphic_window_g

0xedb8,	// (0x00010896) popup_snote_single_graphic_window_t1_ParamLimits

0xedb8,	// (0x00010896) popup_snote_single_graphic_window_t1

0xedcb,	// (0x000108a9) popup_snote_single_graphic_window_t2_ParamLimits

0xedcb,	// (0x000108a9) popup_snote_single_graphic_window_t2

0xedde,	// (0x000108bc) popup_snote_single_graphic_window_t3_ParamLimits

0xedde,	// (0x000108bc) popup_snote_single_graphic_window_t3

0xee17,	// (0x000108f5) popup_snote_single_graphic_window_t4_ParamLimits

0xee17,	// (0x000108f5) popup_snote_single_graphic_window_t4

0xee4b,	// (0x00010929) popup_snote_single_graphic_window_t5_ParamLimits

0xee4b,	// (0x00010929) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001106f) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001106f) popup_snote_single_graphic_window_t

0x3967,	// (0x00005445) grid_graphic_popup_pane_ParamLimits

0x3967,	// (0x00005445) grid_graphic_popup_pane

0x3995,	// (0x00005473) listscroll_popup_graphic_pane_g1_ParamLimits

0x3995,	// (0x00005473) listscroll_popup_graphic_pane_g1

0xc344,	// (0x0000de22) listscroll_popup_graphic_pane_g2_ParamLimits

0xc344,	// (0x0000de22) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x00011458) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x00011458) listscroll_popup_graphic_pane_g

0x39bd,	// (0x0000549b) scroll_pane_cp5

0xc2fc,	// (0x0000ddda) cell_graphic_popup_pane_ParamLimits

0xc2fc,	// (0x0000ddda) cell_graphic_popup_pane

0x38e0,	// (0x000053be) cell_graphic_popup_pane_g1

0x38e8,	// (0x000053c6) cell_graphic_popup_pane_g2

0xec9e,	// (0x0001077c) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x00011451) cell_graphic_popup_pane_g

0x38f1,	// (0x000053cf) cell_graphic_popup_pane_t2

0xeca7,	// (0x00010785) grid_highlight_pane_cp3

0xee8c,	// (0x0001096a) list_gen_pane_ParamLimits

0xee8c,	// (0x0001096a) list_gen_pane

0xeeb4,	// (0x00010992) scroll_pane

0xc2b3,	// (0x0000dd91) bg_list_pane_g1_ParamLimits

0xc2b3,	// (0x0000dd91) bg_list_pane_g1

0x3855,	// (0x00005333) bg_list_pane_g2_ParamLimits

0x3855,	// (0x00005333) bg_list_pane_g2

0x386a,	// (0x00005348) bg_list_pane_g3_ParamLimits

0x386a,	// (0x00005348) bg_list_pane_g3

0x387e,	// (0x0000535c) bg_list_pane_g4_ParamLimits

0x387e,	// (0x0000535c) bg_list_pane_g4

0xc2d0,	// (0x0000ddae) bg_list_pane_g5_ParamLimits

0xc2d0,	// (0x0000ddae) bg_list_pane_g5

0x0004,

0xf968,	// (0x00011446) bg_list_pane_g_ParamLimits

0xf968,	// (0x00011446) bg_list_pane_g

0xc24d,	// (0x0000dd2b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double2_graphic_large_graphic_pane

0xc24d,	// (0x0000dd2b) list_double2_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double2_graphic_pane

0xc24d,	// (0x0000dd2b) list_double2_large_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double2_large_graphic_pane

0xc24d,	// (0x0000dd2b) list_double2_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double2_pane

0xc24d,	// (0x0000dd2b) list_double_graphic_heading_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_graphic_heading_pane

0xc24d,	// (0x0000dd2b) list_double_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_graphic_pane

0xc24d,	// (0x0000dd2b) list_double_heading_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_heading_pane

0xc24d,	// (0x0000dd2b) list_double_large_graphic_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_large_graphic_pane

0xc24d,	// (0x0000dd2b) list_double_number_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_number_pane

0xc24d,	// (0x0000dd2b) list_double_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_pane

0xc24d,	// (0x0000dd2b) list_double_time_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_double_time_pane

0xc24d,	// (0x0000dd2b) list_setting_number_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_setting_number_pane

0xc24d,	// (0x0000dd2b) list_setting_pane_ParamLimits

0xc24d,	// (0x0000dd2b) list_setting_pane

0xc261,	// (0x0000dd3f) list_single_2graphic_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_2graphic_pane

0xc261,	// (0x0000dd3f) list_single_graphic_heading_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_graphic_heading_pane

0xc261,	// (0x0000dd3f) list_single_graphic_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_graphic_pane

0xc261,	// (0x0000dd3f) list_single_heading_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_heading_pane

0xc261,	// (0x0000dd3f) list_single_large_graphic_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_large_graphic_pane

0xc261,	// (0x0000dd3f) list_single_number_heading_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_number_heading_pane

0xc261,	// (0x0000dd3f) list_single_number_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_number_pane

0xc261,	// (0x0000dd3f) list_single_pane_ParamLimits

0xc261,	// (0x0000dd3f) list_single_pane

0xe7a2,	// (0x00010280) list_highlight_pane_cp1

0x1bbe,	// (0x0000369c) list_single_pane_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_single_pane_g1

0x1bca,	// (0x000036a8) list_single_pane_g2_ParamLimits

0x1bca,	// (0x000036a8) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00011081) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00011081) list_single_pane_g

0x411f,	// (0x00005bfd) list_single_pane_t1_ParamLimits

0x411f,	// (0x00005bfd) list_single_pane_t1

0x1bbe,	// (0x0000369c) list_single_number_pane_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_single_number_pane_g1

0x1bca,	// (0x000036a8) list_single_number_pane_g2_ParamLimits

0x1bca,	// (0x000036a8) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00011081) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00011081) list_single_number_pane_g

0x1cb4,	// (0x00003792) list_single_number_pane_t1_ParamLimits

0x1cb4,	// (0x00003792) list_single_number_pane_t1

0x4218,	// (0x00005cf6) list_single_number_pane_t2_ParamLimits

0x4218,	// (0x00005cf6) list_single_number_pane_t2

0x0001,

0xf929,	// (0x00011407) list_single_number_pane_t_ParamLimits

0xf929,	// (0x00011407) list_single_number_pane_t

0xa5fd,	// (0x0000c0db) list_single_graphic_pane_g1_ParamLimits

0xa5fd,	// (0x0000c0db) list_single_graphic_pane_g1

0x1bbe,	// (0x0000369c) list_single_graphic_pane_g2_ParamLimits

0x1bbe,	// (0x0000369c) list_single_graphic_pane_g2

0x1bca,	// (0x000036a8) list_single_graphic_pane_g3_ParamLimits

0x1bca,	// (0x000036a8) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001107a) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001107a) list_single_graphic_pane_g

0xa609,	// (0x0000c0e7) list_single_graphic_pane_t1_ParamLimits

0xa609,	// (0x0000c0e7) list_single_graphic_pane_t1

0x1bbe,	// (0x0000369c) list_single_heading_pane_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_single_heading_pane_g1

0x1bca,	// (0x000036a8) list_single_heading_pane_g2_ParamLimits

0x1bca,	// (0x000036a8) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00011081) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00011081) list_single_heading_pane_g

0x40cf,	// (0x00005bad) list_single_heading_pane_t1_ParamLimits

0x40cf,	// (0x00005bad) list_single_heading_pane_t1

0xa61f,	// (0x0000c0fd) list_single_heading_pane_t2_ParamLimits

0xa61f,	// (0x0000c0fd) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00011086) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00011086) list_single_heading_pane_t

0x1bbe,	// (0x0000369c) list_single_number_heading_pane_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_single_number_heading_pane_g1

0x1bca,	// (0x000036a8) list_single_number_heading_pane_g2_ParamLimits

0x1bca,	// (0x000036a8) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00011081) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00011081) list_single_number_heading_pane_g

0x40cf,	// (0x00005bad) list_single_number_heading_pane_t1_ParamLimits

0x40cf,	// (0x00005bad) list_single_number_heading_pane_t1

0xa631,	// (0x0000c10f) list_single_number_heading_pane_t2_ParamLimits

0xa631,	// (0x0000c10f) list_single_number_heading_pane_t2

0x40fb,	// (0x00005bd9) list_single_number_heading_pane_t3_ParamLimits

0x40fb,	// (0x00005bd9) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001108b) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001108b) list_single_number_heading_pane_t

0x1bb2,	// (0x00003690) list_single_graphic_heading_pane_g1_ParamLimits

0x1bb2,	// (0x00003690) list_single_graphic_heading_pane_g1

0xa643,	// (0x0000c121) list_single_graphic_heading_pane_g4_ParamLimits

0xa643,	// (0x0000c121) list_single_graphic_heading_pane_g4

0x1bca,	// (0x000036a8) list_single_graphic_heading_pane_g5_ParamLimits

0x1bca,	// (0x000036a8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00011092) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00011092) list_single_graphic_heading_pane_g

0x40cf,	// (0x00005bad) list_single_graphic_heading_pane_t1_ParamLimits

0x40cf,	// (0x00005bad) list_single_graphic_heading_pane_t1

0xa654,	// (0x0000c132) list_single_graphic_heading_pane_t2_ParamLimits

0xa654,	// (0x0000c132) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00011099) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00011099) list_single_graphic_heading_pane_t

0x4135,	// (0x00005c13) list_single_large_graphic_pane_g1_ParamLimits

0x4135,	// (0x00005c13) list_single_large_graphic_pane_g1

0x1bbe,	// (0x0000369c) list_single_large_graphic_pane_g2_ParamLimits

0x1bbe,	// (0x0000369c) list_single_large_graphic_pane_g2

0x1bca,	// (0x000036a8) list_single_large_graphic_pane_g3_ParamLimits

0x1bca,	// (0x000036a8) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001109e) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001109e) list_single_large_graphic_pane_g

0x24fd,	// (0x00003fdb) wait_border_pane_g2_copy1

0xa666,	// (0x0000c144) list_single_large_graphic_pane_g4_cp2

0x4141,	// (0x00005c1f) list_single_large_graphic_pane_t1_ParamLimits

0x4141,	// (0x00005c1f) list_single_large_graphic_pane_t1

0xa66e,	// (0x0000c14c) list_double_pane_g1_ParamLimits

0xa66e,	// (0x0000c14c) list_double_pane_g1

0xa67a,	// (0x0000c158) list_double_pane_g2_ParamLimits

0xa67a,	// (0x0000c158) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000110a5) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000110a5) list_double_pane_g

0xa686,	// (0x0000c164) list_double_pane_t1_ParamLimits

0xa686,	// (0x0000c164) list_double_pane_t1

0xa69c,	// (0x0000c17a) list_double_pane_t2_ParamLimits

0xa69c,	// (0x0000c17a) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000110aa) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000110aa) list_double_pane_t

0xa6ae,	// (0x0000c18c) list_double2_pane_g1_ParamLimits

0xa6ae,	// (0x0000c18c) list_double2_pane_g1

0xa6bf,	// (0x0000c19d) list_double2_pane_g2_ParamLimits

0xa6bf,	// (0x0000c19d) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000110af) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000110af) list_double2_pane_g

0xa6cb,	// (0x0000c1a9) list_double2_pane_t1_ParamLimits

0xa6cb,	// (0x0000c1a9) list_double2_pane_t1

0xa6e1,	// (0x0000c1bf) list_double2_pane_t2_ParamLimits

0xa6e1,	// (0x0000c1bf) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000110b4) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000110b4) list_double2_pane_t

0xa66e,	// (0x0000c14c) list_double_number_pane_g1_ParamLimits

0xa66e,	// (0x0000c14c) list_double_number_pane_g1

0xa67a,	// (0x0000c158) list_double_number_pane_g2_ParamLimits

0xa67a,	// (0x0000c158) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000110a5) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000110a5) list_double_number_pane_g

0xa6f3,	// (0x0000c1d1) list_double_number_pane_t1_ParamLimits

0xa6f3,	// (0x0000c1d1) list_double_number_pane_t1

0xa705,	// (0x0000c1e3) list_double_number_pane_t2_ParamLimits

0xa705,	// (0x0000c1e3) list_double_number_pane_t2

0xa71b,	// (0x0000c1f9) list_double_number_pane_t3_ParamLimits

0xa71b,	// (0x0000c1f9) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000110b9) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000110b9) list_double_number_pane_t

0xa72d,	// (0x0000c20b) list_double_graphic_pane_g1_ParamLimits

0xa72d,	// (0x0000c20b) list_double_graphic_pane_g1

0xa739,	// (0x0000c217) list_double_graphic_pane_g2_ParamLimits

0xa739,	// (0x0000c217) list_double_graphic_pane_g2

0x3e70,	// (0x0000594e) list_double_graphic_pane_g3_ParamLimits

0x3e70,	// (0x0000594e) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000110c0) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000110c0) list_double_graphic_pane_g

0xa754,	// (0x0000c232) list_double_graphic_pane_t1_ParamLimits

0xa754,	// (0x0000c232) list_double_graphic_pane_t1

0xa76a,	// (0x0000c248) list_double_graphic_pane_t2_ParamLimits

0xa76a,	// (0x0000c248) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000110c9) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000110c9) list_double_graphic_pane_t

0xeee8,	// (0x000109c6) list_double2_graphic_pane_g1_ParamLimits

0xeee8,	// (0x000109c6) list_double2_graphic_pane_g1

0xa77c,	// (0x0000c25a) list_double2_graphic_pane_g2_ParamLimits

0xa77c,	// (0x0000c25a) list_double2_graphic_pane_g2

0xa6bf,	// (0x0000c19d) list_double2_graphic_pane_g3_ParamLimits

0xa6bf,	// (0x0000c19d) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000110ce) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000110ce) list_double2_graphic_pane_g

0xa788,	// (0x0000c266) list_double2_graphic_pane_t1_ParamLimits

0xa788,	// (0x0000c266) list_double2_graphic_pane_t1

0xa79e,	// (0x0000c27c) list_double2_graphic_pane_t2_ParamLimits

0xa79e,	// (0x0000c27c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000110d5) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000110d5) list_double2_graphic_pane_t

0xa7b0,	// (0x0000c28e) list_double_large_graphic_pane_g1_ParamLimits

0xa7b0,	// (0x0000c28e) list_double_large_graphic_pane_g1

0xa7cf,	// (0x0000c2ad) list_double_large_graphic_pane_g2_ParamLimits

0xa7cf,	// (0x0000c2ad) list_double_large_graphic_pane_g2

0xa67a,	// (0x0000c158) list_double_large_graphic_pane_g3_ParamLimits

0xa67a,	// (0x0000c158) list_double_large_graphic_pane_g3

0xa7e0,	// (0x0000c2be) list_double_large_graphic_pane_g4_ParamLimits

0xa7e0,	// (0x0000c2be) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000110da) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000110da) list_double_large_graphic_pane_g

0xa7f3,	// (0x0000c2d1) list_double_large_graphic_pane_t1_ParamLimits

0xa7f3,	// (0x0000c2d1) list_double_large_graphic_pane_t1

0xa80c,	// (0x0000c2ea) list_double_large_graphic_pane_t2_ParamLimits

0xa80c,	// (0x0000c2ea) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000110e5) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000110e5) list_double_large_graphic_pane_t

0xa81e,	// (0x0000c2fc) list_double2_large_graphic_pane_g1_ParamLimits

0xa81e,	// (0x0000c2fc) list_double2_large_graphic_pane_g1

0xa6ae,	// (0x0000c18c) list_double2_large_graphic_pane_g2_ParamLimits

0xa6ae,	// (0x0000c18c) list_double2_large_graphic_pane_g2

0xa6bf,	// (0x0000c19d) list_double2_large_graphic_pane_g3_ParamLimits

0xa6bf,	// (0x0000c19d) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000110ea) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000110ea) list_double2_large_graphic_pane_g

0xa82a,	// (0x0000c308) list_double2_large_graphic_pane_t1_ParamLimits

0xa82a,	// (0x0000c308) list_double2_large_graphic_pane_t1

0xa840,	// (0x0000c31e) list_double2_large_graphic_pane_t2_ParamLimits

0xa840,	// (0x0000c31e) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x000110f1) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x000110f1) list_double2_large_graphic_pane_t

0xa852,	// (0x0000c330) list_double_heading_pane_g1_ParamLimits

0xa852,	// (0x0000c330) list_double_heading_pane_g1

0xa863,	// (0x0000c341) list_double_heading_pane_g2_ParamLimits

0xa863,	// (0x0000c341) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000110f6) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000110f6) list_double_heading_pane_g

0xa86f,	// (0x0000c34d) list_double_heading_pane_t1_ParamLimits

0xa86f,	// (0x0000c34d) list_double_heading_pane_t1

0xa885,	// (0x0000c363) list_double_heading_pane_t2_ParamLimits

0xa885,	// (0x0000c363) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x000110fb) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x000110fb) list_double_heading_pane_t

0xa897,	// (0x0000c375) list_double_graphic_heading_pane_g1_ParamLimits

0xa897,	// (0x0000c375) list_double_graphic_heading_pane_g1

0xa852,	// (0x0000c330) list_double_graphic_heading_pane_g2_ParamLimits

0xa852,	// (0x0000c330) list_double_graphic_heading_pane_g2

0xa863,	// (0x0000c341) list_double_graphic_heading_pane_g3_ParamLimits

0xa863,	// (0x0000c341) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00011100) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00011100) list_double_graphic_heading_pane_g

0xa8a3,	// (0x0000c381) list_double_graphic_heading_pane_t1_ParamLimits

0xa8a3,	// (0x0000c381) list_double_graphic_heading_pane_t1

0xa8b9,	// (0x0000c397) list_double_graphic_heading_pane_t2_ParamLimits

0xa8b9,	// (0x0000c397) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00011107) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00011107) list_double_graphic_heading_pane_t

0xa7cf,	// (0x0000c2ad) list_double_time_pane_g1_ParamLimits

0xa7cf,	// (0x0000c2ad) list_double_time_pane_g1

0xa67a,	// (0x0000c158) list_double_time_pane_g2_ParamLimits

0xa67a,	// (0x0000c158) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001110c) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001110c) list_double_time_pane_g

0xa8cb,	// (0x0000c3a9) list_double_time_pane_t1_ParamLimits

0xa8cb,	// (0x0000c3a9) list_double_time_pane_t1

0xa8e1,	// (0x0000c3bf) list_double_time_pane_t2_ParamLimits

0xa8e1,	// (0x0000c3bf) list_double_time_pane_t2

0xa8f3,	// (0x0000c3d1) list_double_time_pane_t3_ParamLimits

0xa8f3,	// (0x0000c3d1) list_double_time_pane_t3

0xa905,	// (0x0000c3e3) list_double_time_pane_t4_ParamLimits

0xa905,	// (0x0000c3e3) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00011111) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00011111) list_double_time_pane_t

0xa77c,	// (0x0000c25a) list_setting_pane_g1_ParamLimits

0xa77c,	// (0x0000c25a) list_setting_pane_g1

0xa6bf,	// (0x0000c19d) list_setting_pane_g2_ParamLimits

0xa6bf,	// (0x0000c19d) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001111a) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001111a) list_setting_pane_g

0xa917,	// (0x0000c3f5) list_setting_pane_t1_ParamLimits

0xa917,	// (0x0000c3f5) list_setting_pane_t1

0xa92e,	// (0x0000c40c) list_setting_pane_t2_ParamLimits

0xa92e,	// (0x0000c40c) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001111f) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001111f) list_setting_pane_t

0xa96d,	// (0x0000c44b) set_value_pane_cp_ParamLimits

0xa96d,	// (0x0000c44b) set_value_pane_cp

0xa77c,	// (0x0000c25a) list_setting_number_pane_g1_ParamLimits

0xa77c,	// (0x0000c25a) list_setting_number_pane_g1

0xa6bf,	// (0x0000c19d) list_setting_number_pane_g2_ParamLimits

0xa6bf,	// (0x0000c19d) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x0001111a) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x0001111a) list_setting_number_pane_g

0xa97b,	// (0x0000c459) list_setting_number_pane_t1_ParamLimits

0xa97b,	// (0x0000c459) list_setting_number_pane_t1

0xa98f,	// (0x0000c46d) list_setting_number_pane_t2_ParamLimits

0xa98f,	// (0x0000c46d) list_setting_number_pane_t2

0xa9a6,	// (0x0000c484) list_setting_number_pane_t3_ParamLimits

0xa9a6,	// (0x0000c484) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00011126) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00011126) list_setting_number_pane_t

0xa96d,	// (0x0000c44b) set_value_pane_ParamLimits

0xa96d,	// (0x0000c44b) set_value_pane

0xef15,	// (0x000109f3) bg_set_opt_pane_ParamLimits

0xef15,	// (0x000109f3) bg_set_opt_pane

0xef36,	// (0x00010a14) set_value_pane_t1

0xef44,	// (0x00010a22) slider_set_pane_cp3

0xef4d,	// (0x00010a2b) volume_small_pane_cp

0xef56,	// (0x00010a34) list_form_gen_pane

0xef5f,	// (0x00010a3d) scroll_pane_cp8

0xa9e9,	// (0x0000c4c7) form_field_data_pane_ParamLimits

0xa9e9,	// (0x0000c4c7) form_field_data_pane

0xaa04,	// (0x0000c4e2) form_field_data_wide_pane_ParamLimits

0xaa04,	// (0x0000c4e2) form_field_data_wide_pane

0xef80,	// (0x00010a5e) form_field_popup_pane_ParamLimits

0xef80,	// (0x00010a5e) form_field_popup_pane

0xaa28,	// (0x0000c506) form_field_popup_wide_pane_ParamLimits

0xaa28,	// (0x0000c506) form_field_popup_wide_pane

0xefa2,	// (0x00010a80) form_field_slider_pane_ParamLimits

0xefa2,	// (0x00010a80) form_field_slider_pane

0xefb5,	// (0x00010a93) form_field_slider_wide_pane_ParamLimits

0xefb5,	// (0x00010a93) form_field_slider_wide_pane

0xefc8,	// (0x00010aa6) data_form_pane

0xaa53,	// (0x0000c531) form_field_data_pane_t1

0xefd4,	// (0x00010ab2) input_focus_pane

0xefe2,	// (0x00010ac0) data_form_wide_pane

0xf01a,	// (0x00010af8) form_field_data_wide_pane_t1

0xecbc,	// (0x0001079a) input_focus_pane_cp6

0xaa6d,	// (0x0000c54b) form_field_popup_pane_t1

0xefd4,	// (0x00010ab2) input_focus_pane_cp7

0xf039,	// (0x00010b17) list_form_pane

0xf04d,	// (0x00010b2b) form_field_popup_wide_pane_t1

0xefd4,	// (0x00010ab2) input_focus_pane_cp8

0xf05f,	// (0x00010b3d) list_form_wide_pane

0xaa8f,	// (0x0000c56d) form_field_slider_pane_t1_ParamLimits

0xaa8f,	// (0x0000c56d) form_field_slider_pane_t1

0xaaa7,	// (0x0000c585) form_field_slider_pane_t2_ParamLimits

0xaaa7,	// (0x0000c585) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00011136) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00011136) form_field_slider_pane_t

0xe844,	// (0x00010322) input_focus_pane_cp9_ParamLimits

0xe844,	// (0x00010322) input_focus_pane_cp9

0xaabc,	// (0x0000c59a) slider_cont_pane_ParamLimits

0xaabc,	// (0x0000c59a) slider_cont_pane

0xf06b,	// (0x00010b49) form_field_slider_wide_pane_t1_ParamLimits

0xf06b,	// (0x00010b49) form_field_slider_wide_pane_t1

0xf07d,	// (0x00010b5b) form_field_slider_wide_pane_t2_ParamLimits

0xf07d,	// (0x00010b5b) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x0001113b) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x0001113b) form_field_slider_wide_pane_t

0xe844,	// (0x00010322) input_focus_pane_cp10_ParamLimits

0xe844,	// (0x00010322) input_focus_pane_cp10

0xaad0,	// (0x0000c5ae) slider_cont_pane_cp1_ParamLimits

0xaad0,	// (0x0000c5ae) slider_cont_pane_cp1

0xaae4,	// (0x0000c5c2) slider_form_pane_cp

0xf08f,	// (0x00010b6d) input_focus_pane_g1

0xf097,	// (0x00010b75) input_focus_pane_g2

0xf09f,	// (0x00010b7d) input_focus_pane_g3

0xf0a7,	// (0x00010b85) input_focus_pane_g4

0xf0af,	// (0x00010b8d) input_focus_pane_g5

0xf0b7,	// (0x00010b95) input_focus_pane_g6

0xf0bf,	// (0x00010b9d) input_focus_pane_g7

0xf0c7,	// (0x00010ba5) input_focus_pane_g8

0xf0cf,	// (0x00010bad) input_focus_pane_g9

0xe629,	// (0x00010107) input_focus_pane_g10

0x0009,

0xf662,	// (0x00011140) input_focus_pane_g

0x2506,	// (0x00003fe4) wait_border_pane_g3_copy1

0xaaec,	// (0x0000c5ca) data_form_pane_t1

0xe629,	// (0x00010107) wait_anim_pane_g1_copy1

0xc222,	// (0x0000dd00) data_form_wide_pane_t1

0xf0d7,	// (0x00010bb5) list_form_graphic_pane_cp_ParamLimits

0xf0d7,	// (0x00010bb5) list_form_graphic_pane_cp

0x36cd,	// (0x000051ab) slider_form_pane_g1

0x36d6,	// (0x000051b4) slider_form_pane_g2

0x0006,

0xf959,	// (0x00011437) slider_form_pane_g

0xf0d7,	// (0x00010bb5) list_form_graphic_pane_ParamLimits

0xf0d7,	// (0x00010bb5) list_form_graphic_pane

0xf0e9,	// (0x00010bc7) list_form_graphic_pane_g1

0xf0f1,	// (0x00010bcf) list_form_graphic_pane_t1_ParamLimits

0xf0f1,	// (0x00010bcf) list_form_graphic_pane_t1

0xe85c,	// (0x0001033a) list_highlight_pane_cp5_ParamLimits

0xe85c,	// (0x0001033a) list_highlight_pane_cp5

0xab08,	// (0x0000c5e6) find_pane_g1

0xf106,	// (0x00010be4) input_find_pane

0xab11,	// (0x0000c5ef) input_find_pane_g1_ParamLimits

0xab11,	// (0x0000c5ef) input_find_pane_g1

0xab1d,	// (0x0000c5fb) input_find_pane_t1_ParamLimits

0xab1d,	// (0x0000c5fb) input_find_pane_t1

0xab32,	// (0x0000c610) input_find_pane_t2_ParamLimits

0xab32,	// (0x0000c610) input_find_pane_t2

0x0001,

0xf677,	// (0x00011155) input_find_pane_t_ParamLimits

0xf677,	// (0x00011155) input_find_pane_t

0xf10f,	// (0x00010bed) input_focus_pane_cp5_ParamLimits

0xf10f,	// (0x00010bed) input_focus_pane_cp5

0xf122,	// (0x00010c00) bg_popup_window_pane_cp2_ParamLimits

0xf122,	// (0x00010c00) bg_popup_window_pane_cp2

0xf12f,	// (0x00010c0d) listscroll_menu_pane_ParamLimits

0xf12f,	// (0x00010c0d) listscroll_menu_pane

0xab53,	// (0x0000c631) popup_submenu_window_ParamLimits

0xab53,	// (0x0000c631) popup_submenu_window

0xf13b,	// (0x00010c19) find_popup_pane_g1

0xf143,	// (0x00010c21) input_popup_find_pane_cp

0xf14d,	// (0x00010c2b) input_focus_pane_cp4_ParamLimits

0xf14d,	// (0x00010c2b) input_focus_pane_cp4

0xf15b,	// (0x00010c39) input_popup_find_pane_t1_ParamLimits

0xf15b,	// (0x00010c39) input_popup_find_pane_t1

0xe7a2,	// (0x00010280) bg_popup_sub_pane_cp

0xf189,	// (0x00010c67) listscroll_popup_sub_pane

0xf191,	// (0x00010c6f) list_submenu_pane_ParamLimits

0xf191,	// (0x00010c6f) list_submenu_pane

0xf1a2,	// (0x00010c80) scroll_pane_cp4

0xf1aa,	// (0x00010c88) list_single_popup_submenu_pane_ParamLimits

0xf1aa,	// (0x00010c88) list_single_popup_submenu_pane

0xf1bf,	// (0x00010c9d) list_single_popup_submenu_pane_g1

0xf1c7,	// (0x00010ca5) list_single_popup_submenu_pane_t1_ParamLimits

0xf1c7,	// (0x00010ca5) list_single_popup_submenu_pane_t1

0xe844,	// (0x00010322) bg_active_tab_pane_cp1_ParamLimits

0xe844,	// (0x00010322) bg_active_tab_pane_cp1

0xab91,	// (0x0000c66f) tabs_2_active_pane_g1

0xab99,	// (0x0000c677) tabs_2_active_pane_t1

0xe844,	// (0x00010322) bg_passive_tab_pane_cp1_ParamLimits

0xe844,	// (0x00010322) bg_passive_tab_pane_cp1

0xab91,	// (0x0000c66f) tabs_2_passive_pane_g1

0xab99,	// (0x0000c677) tabs_2_passive_pane_t1

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp4

0xabab,	// (0x0000c689) tabs_2_long_active_pane_t1

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp4

0x1d93,	// (0x00003871) list_single_midp_graphic_pane_g4_ParamLimits

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp5

0xabbe,	// (0x0000c69c) tabs_3_long_active_pane_t1

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp5

0x1d93,	// (0x00003871) list_single_midp_graphic_pane_g4

0xe85c,	// (0x0001033a) bg_popup_window_pane_cp13_ParamLimits

0xe85c,	// (0x0001033a) bg_popup_window_pane_cp13

0xf1e5,	// (0x00010cc3) listscroll_popup_fast_pane_ParamLimits

0xf1e5,	// (0x00010cc3) listscroll_popup_fast_pane

0xf1f4,	// (0x00010cd2) grid_popup_fast_pane_ParamLimits

0xf1f4,	// (0x00010cd2) grid_popup_fast_pane

0xf206,	// (0x00010ce4) scroll_pane_cp9_ParamLimits

0xf206,	// (0x00010ce4) scroll_pane_cp9

0x5a98,	// (0x00007576) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5a98,	// (0x00007576) list_single_graphic_hl_pane_t1_cp2

0xf22a,	// (0x00010d08) input_focus_pane_cp20_ParamLimits

0xf22a,	// (0x00010d08) input_focus_pane_cp20

0xf238,	// (0x00010d16) query_popup_data_pane_t1_ParamLimits

0xf238,	// (0x00010d16) query_popup_data_pane_t1

0xf24b,	// (0x00010d29) query_popup_data_pane_t2_ParamLimits

0xf24b,	// (0x00010d29) query_popup_data_pane_t2

0xf291,	// (0x00010d6f) query_popup_data_pane_t3_ParamLimits

0xf291,	// (0x00010d6f) query_popup_data_pane_t3

0xf2d2,	// (0x00010db0) query_popup_data_pane_t4_ParamLimits

0xf2d2,	// (0x00010db0) query_popup_data_pane_t4

0xf30e,	// (0x00010dec) query_popup_data_pane_t5_ParamLimits

0xf30e,	// (0x00010dec) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x0001115a) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x0001115a) query_popup_data_pane_t

0xf08f,	// (0x00010b6d) bg_set_opt_pane_g1

0xf097,	// (0x00010b75) bg_set_opt_pane_g2

0xf09f,	// (0x00010b7d) bg_set_opt_pane_g3

0xf0a7,	// (0x00010b85) bg_set_opt_pane_g4

0xf0af,	// (0x00010b8d) bg_set_opt_pane_g5

0xf0b7,	// (0x00010b95) bg_set_opt_pane_g6

0xf0bf,	// (0x00010b9d) bg_set_opt_pane_g7

0xf0c7,	// (0x00010ba5) bg_set_opt_pane_g8

0xf0cf,	// (0x00010bad) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00011165) bg_set_opt_pane_g

0x071a,	// (0x000021f8) control_top_pane_stacon_ParamLimits

0x071a,	// (0x000021f8) control_top_pane_stacon

0x076d,	// (0x0000224b) signal_pane_stacon_ParamLimits

0x076d,	// (0x0000224b) signal_pane_stacon

0x0792,	// (0x00002270) stacon_top_pane_g1_ParamLimits

0x0792,	// (0x00002270) stacon_top_pane_g1

0x07b4,	// (0x00002292) title_pane_stacon_ParamLimits

0x07b4,	// (0x00002292) title_pane_stacon

0x07de,	// (0x000022bc) uni_indicator_pane_stacon_ParamLimits

0x07de,	// (0x000022bc) uni_indicator_pane_stacon

0x07f3,	// (0x000022d1) battery_pane_stacon_ParamLimits

0x07f3,	// (0x000022d1) battery_pane_stacon

0x0837,	// (0x00002315) control_bottom_pane_stacon_ParamLimits

0x0837,	// (0x00002315) control_bottom_pane_stacon

0x085a,	// (0x00002338) navi_pane_stacon_ParamLimits

0x085a,	// (0x00002338) navi_pane_stacon

0x087d,	// (0x0000235b) stacon_bottom_pane_g1_ParamLimits

0x087d,	// (0x0000235b) stacon_bottom_pane_g1

0xf345,	// (0x00010e23) aid_levels_signal_lsc_ParamLimits

0xf345,	// (0x00010e23) aid_levels_signal_lsc

0xf35c,	// (0x00010e3a) signal_pane_stacon_g1_ParamLimits

0xf35c,	// (0x00010e3a) signal_pane_stacon_g1

0xf370,	// (0x00010e4e) signal_pane_stacon_g2_ParamLimits

0xf370,	// (0x00010e4e) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00011178) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00011178) signal_pane_stacon_g

0xf3b2,	// (0x00010e90) title_pane_stacon_t1_ParamLimits

0xf3b2,	// (0x00010e90) title_pane_stacon_t1

0xf3d7,	// (0x00010eb5) uni_indicator_pane_stacon_g1

0xf3e1,	// (0x00010ebf) uni_indicator_pane_stacon_g2

0xf3eb,	// (0x00010ec9) uni_indicator_pane_stacon_g3

0xf3f5,	// (0x00010ed3) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00011184) uni_indicator_pane_stacon_g

0xf3ff,	// (0x00010edd) control_top_pane_stacon_g1

0xf407,	// (0x00010ee5) control_top_pane_stacon_t1_ParamLimits

0xf407,	// (0x00010ee5) control_top_pane_stacon_t1

0xf43e,	// (0x00010f1c) aid_levels_battery_lsc_ParamLimits

0xf43e,	// (0x00010f1c) aid_levels_battery_lsc

0xf456,	// (0x00010f34) battery_pane_stacon_g1_ParamLimits

0xf456,	// (0x00010f34) battery_pane_stacon_g1

0xf468,	// (0x00010f46) battery_pane_stacon_g2_ParamLimits

0xf468,	// (0x00010f46) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x0001118d) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x0001118d) battery_pane_stacon_g

0xf4a6,	// (0x00010f84) navi_icon_pane_stacon

0xf4ba,	// (0x00010f98) navi_navi_pane_stacon

0xf4a6,	// (0x00010f84) navi_text_pane_stacon

0xf4d0,	// (0x00010fae) control_bottom_pane_stacon_g1

0xf4d8,	// (0x00010fb6) control_bottom_pane_stacon_t1_ParamLimits

0xf4d8,	// (0x00010fb6) control_bottom_pane_stacon_t1

0xabd0,	// (0x0000c6ae) grid_app_pane_ParamLimits

0xabd0,	// (0x0000c6ae) grid_app_pane

0xac08,	// (0x0000c6e6) scroll_pane_cp15_ParamLimits

0xac08,	// (0x0000c6e6) scroll_pane_cp15

0xac1d,	// (0x0000c6fb) cell_app_pane_ParamLimits

0xac1d,	// (0x0000c6fb) cell_app_pane

0xac68,	// (0x0000c746) cell_app_pane_g1_ParamLimits

0xac68,	// (0x0000c746) cell_app_pane_g1

0x007d,	// (0x00001b5b) cell_app_pane_g2_ParamLimits

0x007d,	// (0x00001b5b) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00011192) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00011192) cell_app_pane_g

0xac8c,	// (0x0000c76a) cell_app_pane_t1_ParamLimits

0xac8c,	// (0x0000c76a) cell_app_pane_t1

0x00ba,	// (0x00001b98) grid_highlight_pane_ParamLimits

0x00ba,	// (0x00001b98) grid_highlight_pane

0xf08f,	// (0x00010b6d) cell_highlight_pane_g1

0xf097,	// (0x00010b75) cell_highlight_pane_g2

0xf09f,	// (0x00010b7d) cell_highlight_pane_g3

0xf0a7,	// (0x00010b85) cell_highlight_pane_g4

0xf0af,	// (0x00010b8d) cell_highlight_pane_g5

0xf0b7,	// (0x00010b95) cell_highlight_pane_g6

0xf0bf,	// (0x00010b9d) cell_highlight_pane_g7

0xf0c7,	// (0x00010ba5) cell_highlight_pane_g8

0xf0cf,	// (0x00010bad) cell_highlight_pane_g9

0xe629,	// (0x00010107) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00011140) cell_highlight_pane_g

0x00de,	// (0x00001bbc) bg_scroll_pane

0x00fd,	// (0x00001bdb) scroll_handle_pane

0x014e,	// (0x00001c2c) scroll_bg_pane_g1

0x0163,	// (0x00001c41) scroll_bg_pane_g2

0x017b,	// (0x00001c59) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00011197) scroll_bg_pane_g

0x0190,	// (0x00001c6e) scroll_handle_focus_pane_ParamLimits

0x0190,	// (0x00001c6e) scroll_handle_focus_pane

0x014e,	// (0x00001c2c) scroll_handle_pane_g1

0x019d,	// (0x00001c7b) scroll_handle_pane_g2

0x017b,	// (0x00001c59) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x0001119e) scroll_handle_pane_g

0xf14d,	// (0x00010c2b) bg_popup_sub_pane_cp21_ParamLimits

0xf14d,	// (0x00010c2b) bg_popup_sub_pane_cp21

0x01b1,	// (0x00001c8f) popup_fep_japan_predictive_window_t1_ParamLimits

0x01b1,	// (0x00001c8f) popup_fep_japan_predictive_window_t1

0x01c8,	// (0x00001ca6) popup_fep_japan_predictive_window_t2_ParamLimits

0x01c8,	// (0x00001ca6) popup_fep_japan_predictive_window_t2

0x01fb,	// (0x00001cd9) popup_fep_japan_predictive_window_t3_ParamLimits

0x01fb,	// (0x00001cd9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x000111a5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x000111a5) popup_fep_japan_predictive_window_t

0xe7a2,	// (0x00010280) bg_popup_sub_pane_cp23

0x0232,	// (0x00001d10) listscroll_japin_cand_pane

0x023a,	// (0x00001d18) popup_fep_japan_candidate_window_t1

0x0248,	// (0x00001d26) candidate_pane_ParamLimits

0x0248,	// (0x00001d26) candidate_pane

0x025a,	// (0x00001d38) scroll_pane_cp30

0x0264,	// (0x00001d42) list_single_popup_jap_candidate_pane_ParamLimits

0x0264,	// (0x00001d42) list_single_popup_jap_candidate_pane

0xe7a2,	// (0x00010280) list_highlight_pane_cp30

0x0278,	// (0x00001d56) list_single_popup_jap_candidate_pane_t1

0xacc6,	// (0x0000c7a4) level_1_signal

0xacd8,	// (0x0000c7b6) level_2_signal

0xaceb,	// (0x0000c7c9) level_3_signal

0xacfe,	// (0x0000c7dc) level_4_signal

0xad11,	// (0x0000c7ef) level_5_signal

0xad24,	// (0x0000c802) level_6_signal

0xad37,	// (0x0000c815) level_7_signal

0xacc6,	// (0x0000c7a4) level_1_battery

0xacd8,	// (0x0000c7b6) level_2_battery

0xaceb,	// (0x0000c7c9) level_3_battery

0xacfe,	// (0x0000c7dc) level_4_battery

0xad11,	// (0x0000c7ef) level_5_battery

0xad24,	// (0x0000c802) level_6_battery

0xad37,	// (0x0000c815) level_7_battery

0x0319,	// (0x00001df7) list_menu_pane_ParamLimits

0x0319,	// (0x00001df7) list_menu_pane

0x032f,	// (0x00001e0d) scroll_pane_cp25_ParamLimits

0x032f,	// (0x00001e0d) scroll_pane_cp25

0x0348,	// (0x00001e26) list_double2_graphic_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double2_graphic_pane_cp2

0x0348,	// (0x00001e26) list_double2_large_graphic_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double2_large_graphic_pane_cp2

0x0348,	// (0x00001e26) list_double2_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double2_pane_cp2

0x0348,	// (0x00001e26) list_double_graphic_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double_graphic_pane_cp2

0x0348,	// (0x00001e26) list_double_large_graphic_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double_large_graphic_pane_cp2

0x0348,	// (0x00001e26) list_double_number_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double_number_pane_cp2

0x0348,	// (0x00001e26) list_double_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double_pane_cp2

0xad4a,	// (0x0000c828) list_single_2graphic_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_2graphic_pane_cp2

0xad4a,	// (0x0000c828) list_single_graphic_heading_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_graphic_heading_pane_cp2

0xad4a,	// (0x0000c828) list_single_graphic_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_graphic_pane_cp2

0xad4a,	// (0x0000c828) list_single_heading_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_heading_pane_cp2

0x038b,	// (0x00001e69) list_single_large_graphic_pane_cp2_ParamLimits

0x038b,	// (0x00001e69) list_single_large_graphic_pane_cp2

0xad4a,	// (0x0000c828) list_single_number_heading_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_number_heading_pane_cp2

0xad4a,	// (0x0000c828) list_single_number_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_number_pane_cp2

0xad5e,	// (0x0000c83c) list_single_pane_cp2_ParamLimits

0xad5e,	// (0x0000c83c) list_single_pane_cp2

0x0471,	// (0x00001f4f) bg_popup_sub_pane_cp22

0x0496,	// (0x00001f74) popup_side_volume_key_window_g1

0x04c0,	// (0x00001f9e) popup_side_volume_key_window_t1

0x04de,	// (0x00001fbc) volume_small_pane_cp1

0xe844,	// (0x00010322) bg_popup_sub_pane_cp24_ParamLimits

0xe844,	// (0x00010322) bg_popup_sub_pane_cp24

0x04e6,	// (0x00001fc4) fep_china_uni_candidate_pane_ParamLimits

0x04e6,	// (0x00001fc4) fep_china_uni_candidate_pane

0x04fa,	// (0x00001fd8) fep_china_uni_entry_pane

0x050a,	// (0x00001fe8) popup_fep_china_uni_window_g1

0x0526,	// (0x00002004) fep_china_uni_entry_pane_g1

0x0530,	// (0x0000200e) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x000111d6) fep_china_uni_entry_pane_g

0x053a,	// (0x00002018) fep_entry_item_pane

0x0544,	// (0x00002022) fep_candidate_item_pane

0x054c,	// (0x0000202a) fep_china_uni_candidate_pane_g1

0x0556,	// (0x00002034) fep_china_uni_candidate_pane_g2

0x055e,	// (0x0000203c) fep_china_uni_candidate_pane_g3

0x0566,	// (0x00002044) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x000111db) fep_china_uni_candidate_pane_g

0xe629,	// (0x00010107) fep_entry_item_pane_g1

0x0570,	// (0x0000204e) fep_entry_item_pane_t1_ParamLimits

0x0570,	// (0x0000204e) fep_entry_item_pane_t1

0x0586,	// (0x00002064) fep_candidate_item_pane_t1_ParamLimits

0x0586,	// (0x00002064) fep_candidate_item_pane_t1

0x059b,	// (0x00002079) fep_candidate_item_pane_t2_ParamLimits

0x059b,	// (0x00002079) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x000111e4) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x000111e4) fep_candidate_item_pane_t

0xe85c,	// (0x0001033a) list_highlight_pane_cp31_ParamLimits

0xe85c,	// (0x0001033a) list_highlight_pane_cp31

0x05ad,	// (0x0000208b) level_1_signal_lsc

0x05b6,	// (0x00002094) level_2_signal_lsc

0x05bf,	// (0x0000209d) level_3_signal_lsc

0x05c8,	// (0x000020a6) level_4_signal_lsc

0x05d1,	// (0x000020af) level_5_signal_lsc

0x05da,	// (0x000020b8) level_6_signal_lsc

0x05e3,	// (0x000020c1) level_7_signal_lsc

0x05e3,	// (0x000020c1) level_1_battery_lsc

0x05ec,	// (0x000020ca) level_2_battery_lsc

0x05f5,	// (0x000020d3) level_3_battery_lsc

0x05fe,	// (0x000020dc) level_4_battery_lsc

0x0607,	// (0x000020e5) level_5_battery_lsc

0x0610,	// (0x000020ee) level_6_battery_lsc

0x05ad,	// (0x0000208b) level_7_battery_lsc

0x0619,	// (0x000020f7) scroll_handle_focus_pane_g1

0x0622,	// (0x00002100) scroll_handle_focus_pane_g2

0x062b,	// (0x00002109) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x000111e9) scroll_handle_focus_pane_g

0xaded,	// (0x0000c8cb) list_single_2graphic_pane_g1_ParamLimits

0xaded,	// (0x0000c8cb) list_single_2graphic_pane_g1

0xa643,	// (0x0000c121) list_single_2graphic_pane_g2_ParamLimits

0xa643,	// (0x0000c121) list_single_2graphic_pane_g2

0x1bca,	// (0x000036a8) list_single_2graphic_pane_g3_ParamLimits

0x1bca,	// (0x000036a8) list_single_2graphic_pane_g3

0xadf9,	// (0x0000c8d7) list_single_2graphic_pane_g4_ParamLimits

0xadf9,	// (0x0000c8d7) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x000111f0) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x000111f0) list_single_2graphic_pane_g

0xae0a,	// (0x0000c8e8) list_single_2graphic_pane_t1_ParamLimits

0xae0a,	// (0x0000c8e8) list_single_2graphic_pane_t1

0xae38,	// (0x0000c916) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xae38,	// (0x0000c916) list_double2_graphic_large_graphic_pane_g1

0xa6ae,	// (0x0000c18c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa6ae,	// (0x0000c18c) list_double2_graphic_large_graphic_pane_g2

0xa6bf,	// (0x0000c19d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa6bf,	// (0x0000c19d) list_double2_graphic_large_graphic_pane_g3

0xae4a,	// (0x0000c928) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xae4a,	// (0x0000c928) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x000111f9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x000111f9) list_double2_graphic_large_graphic_pane_g

0xae56,	// (0x0000c934) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xae56,	// (0x0000c934) list_double2_graphic_large_graphic_pane_t1

0xae6c,	// (0x0000c94a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xae6c,	// (0x0000c94a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00011202) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00011202) list_double2_graphic_large_graphic_pane_t

0x0940,	// (0x0000241e) popup_fast_swap_window_ParamLimits

0x0940,	// (0x0000241e) popup_fast_swap_window

0x095e,	// (0x0000243c) popup_side_volume_key_window

0x097c,	// (0x0000245a) stacon_top_pane

0x0986,	// (0x00002464) status_pane_ParamLimits

0x0986,	// (0x00002464) status_pane

0xe61f,	// (0x000100fd) status_small_pane

0xe7a2,	// (0x00010280) control_pane

0xe7a2,	// (0x00010280) stacon_bottom_pane

0xef5f,	// (0x00010a3d) scroll_pane_cp121

0xef56,	// (0x00010a34) set_content_pane

0xae7e,	// (0x0000c95c) bg_active_tab_pane_g1_cp1

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp1

0xae87,	// (0x0000c965) bg_active_tab_pane_g3_cp1

0xae7e,	// (0x0000c95c) bg_passive_tab_pane_g1_cp1

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp1

0xae87,	// (0x0000c965) bg_passive_tab_pane_g3_cp1

0xae90,	// (0x0000c96e) bg_active_tab_pane_g1_cp2

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp2

0xae99,	// (0x0000c977) bg_active_tab_pane_g3_cp2

0xae90,	// (0x0000c96e) bg_passive_tab_pane_g1_cp2

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp2

0xae99,	// (0x0000c977) bg_passive_tab_pane_g3_cp2

0xaea2,	// (0x0000c980) bg_active_tab_pane_g1_cp3

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp3

0xaeab,	// (0x0000c989) bg_active_tab_pane_g3_cp3

0xaea2,	// (0x0000c980) bg_passive_tab_pane_g1_cp3

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp3

0xaeab,	// (0x0000c989) bg_passive_tab_pane_g3_cp3

0xaeb4,	// (0x0000c992) bg_active_tab_pane_g1_cp4

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp4

0xaebd,	// (0x0000c99b) bg_active_tab_pane_g3_cp4

0xaeb4,	// (0x0000c992) bg_passive_tab_pane_g1_cp4

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp4

0xaebd,	// (0x0000c99b) bg_passive_tab_pane_g3_cp4

0x0899,	// (0x00002377) bg_active_tab_pane_g1_cp5

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp5

0x08a2,	// (0x00002380) bg_active_tab_pane_g3_cp5

0x0899,	// (0x00002377) bg_passive_tab_pane_g1_cp5

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp5

0x08a2,	// (0x00002380) bg_passive_tab_pane_g3_cp5

0x3e94,	// (0x00005972) list_set_graphic_pane_ParamLimits

0x3e94,	// (0x00005972) list_set_graphic_pane

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp4

0x08c1,	// (0x0000239f) list_set_graphic_pane_g1_ParamLimits

0x08c1,	// (0x0000239f) list_set_graphic_pane_g1

0x08cd,	// (0x000023ab) list_set_graphic_pane_g2_ParamLimits

0x08cd,	// (0x000023ab) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00011207) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00011207) list_set_graphic_pane_g

0x0009,

0xfaac,	// (0x0001158a) volume_small_pane_cp_g

0x08f1,	// (0x000023cf) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x08f1,	// (0x000023cf) list_double2_large_graphic_pane_g1_cp2

0x08ff,	// (0x000023dd) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x08ff,	// (0x000023dd) list_double2_large_graphic_pane_g2_cp2

0x0910,	// (0x000023ee) list_double2_large_graphic_pane_g3_cp2

0x0918,	// (0x000023f6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0918,	// (0x000023f6) list_double2_large_graphic_pane_t1_cp2

0x092e,	// (0x0000240c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x092e,	// (0x0000240c) list_double2_large_graphic_pane_t2_cp2

0x3156,	// (0x00004c34) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3156,	// (0x00004c34) list_double_large_graphic_pane_g1_cp2

0x3169,	// (0x00004c47) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3169,	// (0x00004c47) list_double_large_graphic_pane_g2_cp2

0x0aa4,	// (0x00002582) list_double_large_graphic_pane_g3_cp2

0x317a,	// (0x00004c58) list_double_large_graphic_pane_g4_cp

0x3182,	// (0x00004c60) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3182,	// (0x00004c60) list_double_large_graphic_pane_t1_cp2

0x3199,	// (0x00004c77) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3199,	// (0x00004c77) list_double_large_graphic_pane_t2_cp2

0x0994,	// (0x00002472) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0994,	// (0x00002472) list_double2_graphic_pane_g1_cp2

0x09a2,	// (0x00002480) list_double2_graphic_pane_g2_cp2_ParamLimits

0x09a2,	// (0x00002480) list_double2_graphic_pane_g2_cp2

0x09b3,	// (0x00002491) list_double2_graphic_pane_g3_cp2

0x09bd,	// (0x0000249b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x09bd,	// (0x0000249b) list_double2_graphic_pane_t1_cp2

0x09d3,	// (0x000024b1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x09d3,	// (0x000024b1) list_double2_graphic_pane_t2_cp2

0x09e5,	// (0x000024c3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x09e5,	// (0x000024c3) list_single_number_heading_pane_g1_cp2

0x09f1,	// (0x000024cf) list_single_number_heading_pane_g2_cp2

0x09f9,	// (0x000024d7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x09f9,	// (0x000024d7) list_single_number_heading_pane_t1_cp2

0x0a0f,	// (0x000024ed) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0a0f,	// (0x000024ed) list_single_number_heading_pane_t2_cp2

0x0a23,	// (0x00002501) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0a23,	// (0x00002501) list_single_number_heading_pane_t3_cp2

0x09e5,	// (0x000024c3) list_single_heading_pane_g1_cp2_ParamLimits

0x09e5,	// (0x000024c3) list_single_heading_pane_g1_cp2

0x09f1,	// (0x000024cf) list_single_heading_pane_g2_cp2

0x09f9,	// (0x000024d7) list_single_heading_pane_t1_cp2_ParamLimits

0x09f9,	// (0x000024d7) list_single_heading_pane_t1_cp2

0x2f50,	// (0x00004a2e) list_single_heading_pane_t2_cp2_ParamLimits

0x2f50,	// (0x00004a2e) list_single_heading_pane_t2_cp2

0x2e98,	// (0x00004976) list_double_graphic_pane_g1_cp2_ParamLimits

0x2e98,	// (0x00004976) list_double_graphic_pane_g1_cp2

0x2ea4,	// (0x00004982) list_double_graphic_pane_g2_cp2_ParamLimits

0x2ea4,	// (0x00004982) list_double_graphic_pane_g2_cp2

0x2eb3,	// (0x00004991) list_double_graphic_pane_g3_cp2

0x2ebb,	// (0x00004999) list_double_graphic_pane_t1_cp2_ParamLimits

0x2ebb,	// (0x00004999) list_double_graphic_pane_t1_cp2

0x2ed1,	// (0x000049af) list_double_graphic_pane_t2_cp2_ParamLimits

0x2ed1,	// (0x000049af) list_double_graphic_pane_t2_cp2

0x0a98,	// (0x00002576) list_double_number_pane_g1_cp2_ParamLimits

0x0a98,	// (0x00002576) list_double_number_pane_g1_cp2

0x0aa4,	// (0x00002582) list_double_number_pane_g2_cp2

0x2e5c,	// (0x0000493a) list_double_number_pane_t1_cp2_ParamLimits

0x2e5c,	// (0x0000493a) list_double_number_pane_t1_cp2

0x2e70,	// (0x0000494e) list_double_number_pane_t2_cp2_ParamLimits

0x2e70,	// (0x0000494e) list_double_number_pane_t2_cp2

0x2e86,	// (0x00004964) list_double_number_pane_t3_cp2_ParamLimits

0x2e86,	// (0x00004964) list_double_number_pane_t3_cp2

0x2d34,	// (0x00004812) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d34,	// (0x00004812) list_single_graphic_pane_g1_cp2

0x0b09,	// (0x000025e7) list_single_graphic_pane_g2_cp2_ParamLimits

0x0b09,	// (0x000025e7) list_single_graphic_pane_g2_cp2

0x0b15,	// (0x000025f3) list_single_graphic_pane_g3_cp2

0x2d0a,	// (0x000047e8) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d0a,	// (0x000047e8) list_single_graphic_pane_t1_cp2

0x0b09,	// (0x000025e7) list_single_number_pane_g1_cp2_ParamLimits

0x0b09,	// (0x000025e7) list_single_number_pane_g1_cp2

0x0b15,	// (0x000025f3) list_single_number_pane_g2_cp2

0x2d0a,	// (0x000047e8) list_single_number_pane_t1_cp2_ParamLimits

0x2d0a,	// (0x000047e8) list_single_number_pane_t1_cp2

0x2d20,	// (0x000047fe) list_single_number_pane_t2_cp2_ParamLimits

0x2d20,	// (0x000047fe) list_single_number_pane_t2_cp2

0x08ff,	// (0x000023dd) list_double2_pane_g1_cp2_ParamLimits

0x08ff,	// (0x000023dd) list_double2_pane_g1_cp2

0x0910,	// (0x000023ee) list_double2_pane_g2_cp2

0x0a70,	// (0x0000254e) list_double2_pane_t1_cp2_ParamLimits

0x0a70,	// (0x0000254e) list_double2_pane_t1_cp2

0x0a86,	// (0x00002564) list_double2_pane_t2_cp2_ParamLimits

0x0a86,	// (0x00002564) list_double2_pane_t2_cp2

0x0a98,	// (0x00002576) list_double_pane_g1_cp2_ParamLimits

0x0a98,	// (0x00002576) list_double_pane_g1_cp2

0x0aa4,	// (0x00002582) list_double_pane_g2_cp2

0x0aac,	// (0x0000258a) list_double_pane_t1_cp2_ParamLimits

0x0aac,	// (0x0000258a) list_double_pane_t1_cp2

0x0ac2,	// (0x000025a0) list_double_pane_t2_cp2_ParamLimits

0x0ac2,	// (0x000025a0) list_double_pane_t2_cp2

0x0af9,	// (0x000025d7) list_single_pane_cp2_g3

0x0b09,	// (0x000025e7) list_single_pane_g1_cp2_ParamLimits

0x0b09,	// (0x000025e7) list_single_pane_g1_cp2

0x0b15,	// (0x000025f3) list_single_pane_g2_cp2

0x0b1d,	// (0x000025fb) list_single_pane_t1_cp2_ParamLimits

0x0b1d,	// (0x000025fb) list_single_pane_t1_cp2

0x0b35,	// (0x00002613) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0b35,	// (0x00002613) list_single_large_graphic_pane_g1_cp2

0x0b43,	// (0x00002621) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0b43,	// (0x00002621) list_single_large_graphic_pane_g2_cp2

0x0b4f,	// (0x0000262d) list_single_large_graphic_pane_g3_cp2

0x0b57,	// (0x00002635) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0b57,	// (0x00002635) list_single_large_graphic_pane_g4_cp1

0x0b71,	// (0x0000264f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0b71,	// (0x0000264f) list_single_large_graphic_pane_t1_cp2

0x2b79,	// (0x00004657) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2b79,	// (0x00004657) list_single_graphic_heading_pane_g1_cp2

0x2b46,	// (0x00004624) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2b46,	// (0x00004624) list_single_graphic_heading_pane_g4_cp2

0x0b15,	// (0x000025f3) list_single_graphic_heading_pane_g5_cp2

0x2b85,	// (0x00004663) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2b85,	// (0x00004663) list_single_graphic_heading_pane_t1_cp2

0x2b9b,	// (0x00004679) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2b9b,	// (0x00004679) list_single_graphic_heading_pane_t2_cp2

0x2b3a,	// (0x00004618) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2b3a,	// (0x00004618) list_single_2graphic_pane_g1_cp2

0x2b46,	// (0x00004624) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2b46,	// (0x00004624) list_single_2graphic_pane_g2_cp2

0x0b15,	// (0x000025f3) list_single_2graphic_pane_g3_cp2

0x2b57,	// (0x00004635) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2b57,	// (0x00004635) list_single_2graphic_pane_g4_cp2

0x2b63,	// (0x00004641) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2b63,	// (0x00004641) list_single_2graphic_pane_t1_cp2

0xe629,	// (0x00010107) list_highlight_pane_g10_cp1

0x2712,	// (0x000041f0) list_highlight_pane_g1_cp1

0x271a,	// (0x000041f8) list_highlight_pane_g2_cp1

0x2722,	// (0x00004200) list_highlight_pane_g3_cp1

0x272a,	// (0x00004208) list_highlight_pane_g4_cp1

0x2732,	// (0x00004210) list_highlight_pane_g5_cp1

0x273a,	// (0x00004218) list_highlight_pane_g6_cp1

0x2742,	// (0x00004220) list_highlight_pane_g7_cp1

0x274a,	// (0x00004228) list_highlight_pane_g8_cp1

0x2752,	// (0x00004230) list_highlight_pane_g9_cp1

0xbd64,	// (0x0000d842) form_field_slider_pane_t3

0xbd72,	// (0x0000d850) form_field_slider_pane_t4

0x264e,	// (0x0000412c) slider_form_pane_ParamLimits

0x264e,	// (0x0000412c) slider_form_pane

0xe7a2,	// (0x00010280) control_abbreviations

0xe7a2,	// (0x00010280) control_conventions

0xe7a2,	// (0x00010280) control_definitions

0xe7a2,	// (0x00010280) format_table_attribute

0x2fa6,	// (0x00004a84) bg_popup_preview_window_pane_g9

0xe7a2,	// (0x00010280) format_table_data2

0xe7a2,	// (0x00010280) format_table_data3

0xe7a2,	// (0x00010280) format_table_data_example

0x0008,

0xe7a2,	// (0x00010280) intro_purpose

0xf8b9,	// (0x00011397) bg_popup_preview_window_pane_g

0xe7a2,	// (0x00010280) texts_category

0xe7a2,	// (0x00010280) texts_graphics

0x0b87,	// (0x00002665) text_digital

0x0b96,	// (0x00002674) text_primary

0x0ba5,	// (0x00002683) text_primary_small

0x0bb4,	// (0x00002692) text_secondary

0x0bc3,	// (0x000026a1) text_title

0x38b4,	// (0x00005392) bg_passive_tab_pane_g1_cp3_srt

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp3_srt

0x38bd,	// (0x0000539b) bg_passive_tab_pane_g3_cp3_srt

0xe844,	// (0x00010322) bg_active_tab_pane_cp3_srt_ParamLimits

0xe844,	// (0x00010322) bg_active_tab_pane_cp3_srt

0x38c6,	// (0x000053a4) tabs_4_active_pane_srt_g1

0xc2e6,	// (0x0000ddc4) tabs_4_active_pane_srt_t1_ParamLimits

0xc2e6,	// (0x0000ddc4) tabs_4_active_pane_srt_t1

0x38b4,	// (0x00005392) bg_active_tab_pane_g1_cp3_copy1

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp3_copy1

0x38bd,	// (0x0000539b) bg_active_tab_pane_g3_cp3_copy1

0xe85c,	// (0x0001033a) tabs_2_long_active_pane_srt_ParamLimits

0xe85c,	// (0x0001033a) tabs_2_long_active_pane_srt

0xe85c,	// (0x0001033a) tabs_2_long_passive_pane_srt_ParamLimits

0xe85c,	// (0x0001033a) tabs_2_long_passive_pane_srt

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp4_srt

0x346c,	// (0x00004f4a) bg_passive_tab_pane_g1_cp4_srt

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp4_srt

0x3475,	// (0x00004f53) bg_passive_tab_pane_g3_cp4_srt

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp4_srt_ParamLimits

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp4_srt

0xc099,	// (0x0000db77) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc099,	// (0x0000db77) tabs_2_long_active_pane_srt_t1

0x346c,	// (0x00004f4a) bg_active_tab_pane_g1_cp4_srt

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp4_srt

0x3475,	// (0x00004f53) bg_active_tab_pane_g3_cp4_srt

0xe844,	// (0x00010322) tabs_3_long_active_pane_srt_ParamLimits

0xe844,	// (0x00010322) tabs_3_long_active_pane_srt

0xe844,	// (0x00010322) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe844,	// (0x00010322) tabs_3_long_passive_pane_cp_srt

0xe844,	// (0x00010322) tabs_3_long_passive_pane_srt_ParamLimits

0xe844,	// (0x00010322) tabs_3_long_passive_pane_srt

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp5_srt

0x0899,	// (0x00002377) bg_passive_tab_pane_g1_cp5_srt

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp5_srt

0x08a2,	// (0x00002380) bg_passive_tab_pane_g3_cp5_srt

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp5_srt_ParamLimits

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp5_srt

0xc083,	// (0x0000db61) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc083,	// (0x0000db61) tabs_3_long_active_pane_srt_t1

0x0899,	// (0x00002377) bg_active_tab_pane_g1_cp5_srt

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp5_srt

0x08a2,	// (0x00002380) bg_active_tab_pane_g3_cp5_srt

0x344c,	// (0x00004f2a) navi_text_pane_srt_t1

0x3444,	// (0x00004f22) navi_icon_pane_srt_g1

0x0e44,	// (0x00002922) midp_editing_number_pane_srt

0x0bd2,	// (0x000026b0) midp_ticker_pane_srt

0x0e4c,	// (0x0000292a) midp_ticker_pane_srt_g1

0x0e54,	// (0x00002932) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00011226) midp_ticker_pane_srt_g

0x0e5c,	// (0x0000293a) midp_ticker_pane_srt_t1

0x3435,	// (0x00004f13) midp_editing_number_pane_t1_copy1

0xaec6,	// (0x0000c9a4) listscroll_midp_pane

0xaec6,	// (0x0000c9a4) midp_form_pane

0x0c49,	// (0x00002727) midp_info_popup_window_ParamLimits

0x0c49,	// (0x00002727) midp_info_popup_window

0xf14d,	// (0x00010c2b) bg_popup_sub_pane_cp50_ParamLimits

0xf14d,	// (0x00010c2b) bg_popup_sub_pane_cp50

0x2334,	// (0x00003e12) listscroll_midp_info_pane_ParamLimits

0x2334,	// (0x00003e12) listscroll_midp_info_pane

0x2314,	// (0x00003df2) listscroll_form_midp_pane_ParamLimits

0x2314,	// (0x00003df2) listscroll_form_midp_pane

0x2320,	// (0x00003dfe) scroll_bar_cp050

0x2314,	// (0x00003df2) list_midp_pane

0x4740,	// (0x0000621e) signal_pane_g2_cp

0x222e,	// (0x00003d0c) listscroll_midp_info_pane_t1_ParamLimits

0x222e,	// (0x00003d0c) listscroll_midp_info_pane_t1

0x2246,	// (0x00003d24) listscroll_midp_info_pane_t2_ParamLimits

0x2246,	// (0x00003d24) listscroll_midp_info_pane_t2

0x2284,	// (0x00003d62) listscroll_midp_info_pane_t3_ParamLimits

0x2284,	// (0x00003d62) listscroll_midp_info_pane_t3

0x22be,	// (0x00003d9c) listscroll_midp_info_pane_t4_ParamLimits

0x22be,	// (0x00003d9c) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x000112d2) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x000112d2) listscroll_midp_info_pane_t

0xf1a2,	// (0x00010c80) scroll_pane_cp21

0x21c8,	// (0x00003ca6) form_midp_field_choice_group_pane

0x21d1,	// (0x00003caf) form_midp_field_text_pane

0x2214,	// (0x00003cf2) form_midp_field_time_pane

0x221c,	// (0x00003cfa) form_midp_gauge_slider_pane

0x2225,	// (0x00003d03) form_midp_gauge_wait_pane

0xe7a2,	// (0x00010280) form_midp_image_pane

0xbd47,	// (0x0000d825) list_single_midp_pane_ParamLimits

0xbd47,	// (0x0000d825) list_single_midp_pane

0xbd22,	// (0x0000d800) form_midp_field_text_pane_t1

0x1ec1,	// (0x0000399f) input_focus_pane_cp050

0x2197,	// (0x00003c75) list_midp_form_text_pane

0x213b,	// (0x00003c19) form_midp_field_choice_group_pane_t1

0x2149,	// (0x00003c27) input_focus_pane_cp051

0x215d,	// (0x00003c3b) list_midp_choice_pane

0xe7a2,	// (0x00010280) status_idle_pane

0x211f,	// (0x00003bfd) form_midp_field_time_pane_t1

0xe629,	// (0x00010107) wait_anim_pane_g2_copy1

0x212d,	// (0x00003c0b) form_midp_field_time_pane_t2

0x0001,

0x0cf9,	// (0x000027d7) aid_navinavi_width_2_pane

0xf7ef,	// (0x000112cd) form_midp_field_time_pane_t

0xe7a2,	// (0x00010280) input_focus_pane_cp052

0xe7a2,	// (0x00010280) bg_input_focus_pane_cp040

0x20df,	// (0x00003bbd) form_midp_gauge_slider_pane_t1

0x20ed,	// (0x00003bcb) form_midp_gauge_slider_pane_t2

0xbd06,	// (0x0000d7e4) form_midp_gauge_slider_pane_t3

0xbd14,	// (0x0000d7f2) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x000112c4) form_midp_gauge_slider_pane_t

0x2117,	// (0x00003bf5) form_midp_slider_pane

0xe85c,	// (0x0001033a) bg_input_focus_pane_cp041_ParamLimits

0xe85c,	// (0x0001033a) bg_input_focus_pane_cp041

0x20ac,	// (0x00003b8a) form_midp_gauge_wait_pane_t1_ParamLimits

0x20ac,	// (0x00003b8a) form_midp_gauge_wait_pane_t1

0x20be,	// (0x00003b9c) form_midp_gauge_wait_pane_t2_ParamLimits

0x20be,	// (0x00003b9c) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x000112bf) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x000112bf) form_midp_gauge_wait_pane_t

0x20d0,	// (0x00003bae) form_midp_wait_pane_ParamLimits

0x20d0,	// (0x00003bae) form_midp_wait_pane

0x2074,	// (0x00003b52) form_midp_image_pane_g1

0x207d,	// (0x00003b5b) form_midp_image_pane_t1

0x208c,	// (0x00003b6a) form_midp_image_pane_t2

0x209b,	// (0x00003b79) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x000112b8) form_midp_image_pane_t

0x205c,	// (0x00003b3a) list_single_midp_pane_g1

0x2065,	// (0x00003b43) list_single_midp_pane_t1

0xbcef,	// (0x0000d7cd) list_midp_form_item_pane_ParamLimits

0xbcef,	// (0x0000d7cd) list_midp_form_item_pane

0x0ca1,	// (0x0000277f) list_midp_form_item_pane_t1

0x0cb0,	// (0x0000278e) midp_ticker_pane_g1

0x0cbc,	// (0x0000279a) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x0001120c) midp_ticker_pane_g

0xaf6a,	// (0x0000ca48) midp_ticker_pane_t1

0xc23e,	// (0x0000dd1c) midp_editing_number_pane_t1

0x372d,	// (0x0000520b) midp_editing_number_pane

0x373c,	// (0x0000521a) midp_ticker_pane

0x33fd,	// (0x00004edb) ai_message_heading_pane

0xe7a2,	// (0x00010280) bg_popup_window_pane_cp14

0x3405,	// (0x00004ee3) listscroll_ai_message_pane

0x3383,	// (0x00004e61) ai_message_heading_pane_g1_ParamLimits

0x3383,	// (0x00004e61) ai_message_heading_pane_g1

0x338f,	// (0x00004e6d) ai_message_heading_pane_g2_ParamLimits

0x338f,	// (0x00004e6d) ai_message_heading_pane_g2

0x339d,	// (0x00004e7b) ai_message_heading_pane_g3_ParamLimits

0x339d,	// (0x00004e7b) ai_message_heading_pane_g3

0x33a9,	// (0x00004e87) ai_message_heading_pane_g4_ParamLimits

0x33a9,	// (0x00004e87) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x000113f9) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x000113f9) ai_message_heading_pane_g

0x33b5,	// (0x00004e93) ai_message_heading_pane_t1_ParamLimits

0x33b5,	// (0x00004e93) ai_message_heading_pane_t1

0x33cf,	// (0x00004ead) ai_message_heading_pane_t2_ParamLimits

0x33cf,	// (0x00004ead) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x00011402) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x00011402) ai_message_heading_pane_t

0x33e3,	// (0x00004ec1) bg_popup_heading_pane_cp1_ParamLimits

0x33e3,	// (0x00004ec1) bg_popup_heading_pane_cp1

0x3371,	// (0x00004e4f) list_ai_message_pane_ParamLimits

0x3371,	// (0x00004e4f) list_ai_message_pane

0xf1a2,	// (0x00010c80) scroll_pane_cp10

0x32a9,	// (0x00004d87) list_ai_message_pane_g1

0x32b1,	// (0x00004d8f) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x000113d6) list_ai_message_pane_g

0x32b9,	// (0x00004d97) list_ai_message_pane_t1_ParamLimits

0x32b9,	// (0x00004d97) list_ai_message_pane_t1

0x32ce,	// (0x00004dac) list_ai_message_pane_t2_ParamLimits

0x32ce,	// (0x00004dac) list_ai_message_pane_t2

0x32e3,	// (0x00004dc1) list_ai_message_pane_t3_ParamLimits

0x32e3,	// (0x00004dc1) list_ai_message_pane_t3

0x32f8,	// (0x00004dd6) list_ai_message_pane_t4_ParamLimits

0x32f8,	// (0x00004dd6) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x000113db) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x000113db) list_ai_message_pane_t

0xc069,	// (0x0000db47) cell_ai_soft_ind_pane_ParamLimits

0xc069,	// (0x0000db47) cell_ai_soft_ind_pane

0x0cda,	// (0x000027b8) cell_ai_soft_ind_pane_g1_ParamLimits

0x0cda,	// (0x000027b8) cell_ai_soft_ind_pane_g1

0xe7a2,	// (0x00010280) grid_highlight_cp1

0x0ce7,	// (0x000027c5) text_secondary_cp56_ParamLimits

0x0ce7,	// (0x000027c5) text_secondary_cp56

0x3267,	// (0x00004d45) example_general_pane_ParamLimits

0x3267,	// (0x00004d45) example_general_pane

0x3273,	// (0x00004d51) example_parent_pane_g1_ParamLimits

0x3273,	// (0x00004d51) example_parent_pane_g1

0x327f,	// (0x00004d5d) example_parent_pane_t1_ParamLimits

0x327f,	// (0x00004d5d) example_parent_pane_t1

0xb4e0,	// (0x0000cfbe) popup_preview_text_window_ParamLimits

0xb4e0,	// (0x0000cfbe) popup_preview_text_window

0x0b01,	// (0x000025df) list_single_pane_cp2_g4

0xeb00,	// (0x000105de) bg_popup_preview_window_pane_ParamLimits

0xeb00,	// (0x000105de) bg_popup_preview_window_pane

0x2fb0,	// (0x00004a8e) popup_preview_text_window_t1_ParamLimits

0x2fb0,	// (0x00004a8e) popup_preview_text_window_t1

0x2fce,	// (0x00004aac) popup_preview_text_window_t2_ParamLimits

0x2fce,	// (0x00004aac) popup_preview_text_window_t2

0x3017,	// (0x00004af5) popup_preview_text_window_t3_ParamLimits

0x3017,	// (0x00004af5) popup_preview_text_window_t3

0x305c,	// (0x00004b3a) popup_preview_text_window_t4_ParamLimits

0x305c,	// (0x00004b3a) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x000113aa) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x000113aa) popup_preview_text_window_t

0x30da,	// (0x00004bb8) scroll_pane_cp11

0x1d26,	// (0x00003804) bg_popup_preview_window_pane_g1

0x2f64,	// (0x00004a42) bg_popup_preview_window_pane_g2

0x2f6e,	// (0x00004a4c) bg_popup_preview_window_pane_g3

0x2f78,	// (0x00004a56) bg_popup_preview_window_pane_g4

0x2f82,	// (0x00004a60) bg_popup_preview_window_pane_g5

0x2f8c,	// (0x00004a6a) bg_popup_preview_window_pane_g6

0x2f94,	// (0x00004a72) bg_popup_preview_window_pane_g7

0x2f9c,	// (0x00004a7a) bg_popup_preview_window_pane_g8

0xe63f,	// (0x0001011d) aid_popup_width_pane

0xb450,	// (0x0000cf2e) popup_midp_note_alarm_window_ParamLimits

0xb450,	// (0x0000cf2e) popup_midp_note_alarm_window

0xefc8,	// (0x00010aa6) data_form_pane_ParamLimits

0xaa49,	// (0x0000c527) form_field_data_pane_g1

0xaa53,	// (0x0000c531) form_field_data_pane_t1_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_ParamLimits

0xefe2,	// (0x00010ac0) data_form_wide_pane_ParamLimits

0xefee,	// (0x00010acc) form_field_data_wide_pane_g1

0xf01a,	// (0x00010af8) form_field_data_wide_pane_t1_ParamLimits

0xecbc,	// (0x0001079a) input_focus_pane_cp6_ParamLimits

0xab83,	// (0x0000c661) input_popup_find_pane_g1_ParamLimits

0xab83,	// (0x0000c661) input_popup_find_pane_g1

0xf479,	// (0x00010f57) aid_navi_side_left_pane

0xf48e,	// (0x00010f6c) aid_navi_side_right_pane

0x280d,	// (0x000042eb) bg_popup_window_pane_cp30_ParamLimits

0x280d,	// (0x000042eb) bg_popup_window_pane_cp30

0x2887,	// (0x00004365) popup_midp_note_alarm_window_g1_ParamLimits

0x2887,	// (0x00004365) popup_midp_note_alarm_window_g1

0x28b7,	// (0x00004395) popup_midp_note_alarm_window_t1_ParamLimits

0x28b7,	// (0x00004395) popup_midp_note_alarm_window_t1

0x2958,	// (0x00004436) popup_midp_note_alarm_window_t2_ParamLimits

0x2958,	// (0x00004436) popup_midp_note_alarm_window_t2

0x2a06,	// (0x000044e4) popup_midp_note_alarm_window_t3_ParamLimits

0x2a06,	// (0x000044e4) popup_midp_note_alarm_window_t3

0x2a38,	// (0x00004516) popup_midp_note_alarm_window_t4_ParamLimits

0x2a38,	// (0x00004516) popup_midp_note_alarm_window_t4

0x2a5e,	// (0x0000453c) popup_midp_note_alarm_window_t5_ParamLimits

0x2a5e,	// (0x0000453c) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x00011347) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x00011347) popup_midp_note_alarm_window_t

0x2b0a,	// (0x000045e8) wait_bar_pane_cp1_ParamLimits

0x2b0a,	// (0x000045e8) wait_bar_pane_cp1

0xe7a2,	// (0x00010280) wait_anim_pane_copy1

0xe7a2,	// (0x00010280) wait_border_pane_copy1

0x24f2,	// (0x00003fd0) wait_border_pane_g1_copy1

0xf031,	// (0x00010b0f) form_field_popup_pane_g1

0xaa6d,	// (0x0000c54b) form_field_popup_pane_t1_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_cp7_ParamLimits

0xf039,	// (0x00010b17) list_form_pane_ParamLimits

0xf045,	// (0x00010b23) form_field_popup_wide_pane_g1

0xf04d,	// (0x00010b2b) form_field_popup_wide_pane_t1_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_cp8_ParamLimits

0xf05f,	// (0x00010b3d) list_form_wide_pane_ParamLimits

0x394f,	// (0x0000542d) aid_size_cell_graphic_pane

0xaaec,	// (0x0000c5ca) data_form_pane_t1_ParamLimits

0xc222,	// (0x0000dd00) data_form_wide_pane_t1_ParamLimits

0xb8e4,	// (0x0000d3c2) bg_status_flat_pane

0xa27e,	// (0x0000bd5c) title_pane_t1_ParamLimits

0xe80c,	// (0x000102ea) title_pane_t2_ParamLimits

0xe832,	// (0x00010310) title_pane_t3_ParamLimits

0xf532,	// (0x00011010) title_pane_t_ParamLimits

0xacc6,	// (0x0000c7a4) level_1_signal_ParamLimits

0xacd8,	// (0x0000c7b6) level_2_signal_ParamLimits

0xaceb,	// (0x0000c7c9) level_3_signal_ParamLimits

0xacfe,	// (0x0000c7dc) level_4_signal_ParamLimits

0xad11,	// (0x0000c7ef) level_5_signal_ParamLimits

0xad24,	// (0x0000c802) level_6_signal_ParamLimits

0xad37,	// (0x0000c815) level_7_signal_ParamLimits

0xacc6,	// (0x0000c7a4) level_1_battery_ParamLimits

0xacd8,	// (0x0000c7b6) level_2_battery_ParamLimits

0xaceb,	// (0x0000c7c9) level_3_battery_ParamLimits

0xacfe,	// (0x0000c7dc) level_4_battery_ParamLimits

0xad11,	// (0x0000c7ef) level_5_battery_ParamLimits

0xad24,	// (0x0000c802) level_6_battery_ParamLimits

0xad37,	// (0x0000c815) level_7_battery_ParamLimits

0x2712,	// (0x000041f0) bg_status_flat_pane_g1

0x271a,	// (0x000041f8) bg_status_flat_pane_g2

0x2722,	// (0x00004200) bg_status_flat_pane_g3

0x272a,	// (0x00004208) bg_status_flat_pane_g4

0x2732,	// (0x00004210) bg_status_flat_pane_g5

0x273a,	// (0x00004218) bg_status_flat_pane_g6

0x2742,	// (0x00004220) bg_status_flat_pane_g7

0xa312,	// (0x0000bdf0) tabs_3_active_pane_t1_ParamLimits

0xa312,	// (0x0000bdf0) tabs_3_passive_pane_t1_ParamLimits

0xa32c,	// (0x0000be0a) tabs_4_active_pane_t1_ParamLimits

0xa32c,	// (0x0000be0a) tabs_4_1_passive_pane_t1_ParamLimits

0xab99,	// (0x0000c677) tabs_2_active_pane_t1_ParamLimits

0xab99,	// (0x0000c677) tabs_2_passive_pane_t1_ParamLimits

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp4_ParamLimits

0xabab,	// (0x0000c689) tabs_2_long_active_pane_t1_ParamLimits

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp4_ParamLimits

0x1de2,	// (0x000038c0) list_single_midp_graphic_pane_t1_ParamLimits

0xe85c,	// (0x0001033a) bg_active_tab_pane_cp5_ParamLimits

0xabbe,	// (0x0000c69c) tabs_3_long_active_pane_t1_ParamLimits

0x1103,	// (0x00002be1) bg_passive_tab_pane_cp5_ParamLimits

0x1de2,	// (0x000038c0) list_single_midp_graphic_pane_t1

0xb8e4,	// (0x0000d3c2) bg_status_flat_pane_ParamLimits

0x18f8,	// (0x000033d6) indicator_pane_cp2_ParamLimits

0x18f8,	// (0x000033d6) indicator_pane_cp2

0xba7a,	// (0x0000d558) navi_pane_srt_ParamLimits

0xba7a,	// (0x0000d558) navi_pane_srt

0x1a5f,	// (0x0000353d) popup_clock_digital_analogue_window_cp1

0xe943,	// (0x00010421) indicator_pane_t1

0x0bd2,	// (0x000026b0) copy_highlight_pane

0x0bd2,	// (0x000026b0) cursor_graphics_pane

0x0bd2,	// (0x000026b0) graphic_within_text_pane

0x0bd2,	// (0x000026b0) link_highlight_pane

0x309d,	// (0x00004b7b) popup_preview_text_window_t5_ParamLimits

0x309d,	// (0x00004b7b) popup_preview_text_window_t5

0x0d03,	// (0x000027e1) cursor_digital_pane

0x0d03,	// (0x000027e1) cursor_primary_pane

0x0d14,	// (0x000027f2) cursor_primary_small_pane

0x0d1c,	// (0x000027fa) cursor_secondary_pane

0x0d24,	// (0x00002802) cursor_title_pane

0x0d03,	// (0x000027e1) link_highlight_digital_pane

0x0d0b,	// (0x000027e9) link_highlight_primary_pane

0x0d14,	// (0x000027f2) link_highlight_primary_small_pane

0x0d1c,	// (0x000027fa) link_highlight_secondary_pane

0x0d24,	// (0x00002802) link_highlight_title_pane

0x0d03,	// (0x000027e1) copy_highlight_digital_pane

0x0d03,	// (0x000027e1) copy_highlight_primary_pane

0x0d14,	// (0x000027f2) copy_highlight_primary_small_pane

0x0d1c,	// (0x000027fa) copy_highlight_secondary_pane

0x0d24,	// (0x00002802) copy_highlight_title_pane

0x0d1c,	// (0x000027fa) graphic_text_digital_pane

0x27b0,	// (0x0000428e) graphic_text_primary_pane

0x27b9,	// (0x00004297) graphic_text_primary_small_pane

0x0d14,	// (0x000027f2) graphic_text_secondary_pane

0x0d03,	// (0x000027e1) graphic_text_title_pane

0xaf7c,	// (0x0000ca5a) cursor_primary_pane_g1

0x27a2,	// (0x00004280) cursor_text_primary_t1

0xbd94,	// (0x0000d872) cursor_primary_small_pane_g1

0x2794,	// (0x00004272) cursor_text_primary_small_t1

0xbd8a,	// (0x0000d868) cursor_primary_small_pane_g1_copy1

0x277c,	// (0x0000425a) cursor_text_primary_small_t1_copy1

0x275a,	// (0x00004238) cursor_text_title_t1

0xbd80,	// (0x0000d85e) cursor_title_pane_g1

0xaf7c,	// (0x0000ca5a) cursor_digital_pane_g1

0x0d36,	// (0x00002814) cursor_text_digital_t1

0x0d44,	// (0x00002822) link_highlight_primary_pane_g1

0x2703,	// (0x000041e1) link_highlight_primary_pane_t1

0x0d44,	// (0x00002822) link_highlight_primary_small_pane_g1

0x0d4c,	// (0x0000282a) link_highlight_primary_small_pane_t1

0x0d5b,	// (0x00002839) link_highlight_secondary_pane_g1

0x0d63,	// (0x00002841) link_highlight_secondary_pane_t1

0x2677,	// (0x00004155) link_highlight_title_pane_g1

0x267f,	// (0x0000415d) link_highlight_title_pane_t1

0x2660,	// (0x0000413e) link_highlight_digital_pane_g1

0x2668,	// (0x00004146) link_highlight_digital_pane_t1

0x2528,	// (0x00004006) copy_highlight_primary_pane_g1

0x253f,	// (0x0000401d) copy_highlight_primary_pane_t1

0x2528,	// (0x00004006) copy_highlight_primary_small_pane_g1

0x2530,	// (0x0000400e) copy_highlight_primary_small_pane_t1

0x0d72,	// (0x00002850) copy_highlight_secondary_pane_g1

0x0d7a,	// (0x00002858) copy_highlight_secondary_pane_t1

0x2511,	// (0x00003fef) copy_highlight_title_pane_g1

0x2519,	// (0x00003ff7) copy_highlight_title_pane_t1

0x2528,	// (0x00004006) copy_highlight_digital_pane_g1

0x3bd9,	// (0x000056b7) copy_highlight_digital_pane_t1

0x3b2d,	// (0x0000560b) graphic_text_primary_pane_g1

0x3bbd,	// (0x0000569b) graphic_text_primary_pane_t1

0x3bcb,	// (0x000056a9) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x00011476) graphic_text_primary_pane_t

0x3b99,	// (0x00005677) graphic_text_primary_small_pane_g1

0x3ba1,	// (0x0000567f) graphic_text_primary_small_pane_t1

0x3baf,	// (0x0000568d) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x00011471) graphic_text_primary_small_pane_t

0x3b75,	// (0x00005653) graphic_text_secondary_pane_g1

0x3b7d,	// (0x0000565b) graphic_text_secondary_pane_t1

0x3b8b,	// (0x00005669) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x0001146c) graphic_text_secondary_pane_t

0x3b51,	// (0x0000562f) graphic_text_title_pane_g1

0x3b59,	// (0x00005637) graphic_text_title_pane_t1

0x3b67,	// (0x00005645) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x00011467) graphic_text_title_pane_t

0x3b2d,	// (0x0000560b) graphic_text_digital_pane_g1

0x3b35,	// (0x00005613) graphic_text_digital_pane_t1

0x3b43,	// (0x00005621) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x00011462) graphic_text_digital_pane_t

0xe85c,	// (0x0001033a) navi_icon_pane_srt_ParamLimits

0xe85c,	// (0x0001033a) navi_icon_pane_srt

0xe7a2,	// (0x00010280) navi_midp_pane_srt

0xe7a2,	// (0x00010280) navi_navi_pane_srt

0xe85c,	// (0x0001033a) navi_text_pane_srt_ParamLimits

0xe85c,	// (0x0001033a) navi_text_pane_srt

0x3af8,	// (0x000055d6) navi_navi_icon_text_pane_srt

0x3b00,	// (0x000055de) navi_navi_pane_srt_g1_ParamLimits

0x3b00,	// (0x000055de) navi_navi_pane_srt_g1

0x3b12,	// (0x000055f0) navi_navi_pane_srt_g2_ParamLimits

0x3b12,	// (0x000055f0) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x0001145d) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x0001145d) navi_navi_pane_srt_g

0x3b24,	// (0x00005602) navi_navi_tabs_pane_srt

0x3af8,	// (0x000055d6) navi_navi_text_pane_srt

0x3af8,	// (0x000055d6) navi_navi_volume_pane_srt

0x3ae9,	// (0x000055c7) navi_navi_text_pane_srt_t1

0x3ac4,	// (0x000055a2) navi_navi_volume_pane_srt_g1

0x3acc,	// (0x000055aa) volume_small_pane_srt_ParamLimits

0x3acc,	// (0x000055aa) volume_small_pane_srt

0x0d89,	// (0x00002867) volume_small_pane_srt_g1_ParamLimits

0x0d89,	// (0x00002867) volume_small_pane_srt_g1

0x0d99,	// (0x00002877) volume_small_pane_srt_g2_ParamLimits

0x0d99,	// (0x00002877) volume_small_pane_srt_g2

0x0daa,	// (0x00002888) volume_small_pane_srt_g3_ParamLimits

0x0daa,	// (0x00002888) volume_small_pane_srt_g3

0x0dbb,	// (0x00002899) volume_small_pane_srt_g4_ParamLimits

0x0dbb,	// (0x00002899) volume_small_pane_srt_g4

0x0dcc,	// (0x000028aa) volume_small_pane_srt_g5_ParamLimits

0x0dcc,	// (0x000028aa) volume_small_pane_srt_g5

0x0ddd,	// (0x000028bb) volume_small_pane_srt_g6_ParamLimits

0x0ddd,	// (0x000028bb) volume_small_pane_srt_g6

0x0dee,	// (0x000028cc) volume_small_pane_srt_g7_ParamLimits

0x0dee,	// (0x000028cc) volume_small_pane_srt_g7

0x0dff,	// (0x000028dd) volume_small_pane_srt_g8_ParamLimits

0x0dff,	// (0x000028dd) volume_small_pane_srt_g8

0x0e10,	// (0x000028ee) volume_small_pane_srt_g9_ParamLimits

0x0e10,	// (0x000028ee) volume_small_pane_srt_g9

0x0e21,	// (0x000028ff) volume_small_pane_srt_g10_ParamLimits

0x0e21,	// (0x000028ff) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00011211) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00011211) volume_small_pane_srt_g

0xebb5,	// (0x00010693) query_popup_data_pane_cp2

0x3ab2,	// (0x00005590) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ab2,	// (0x00005590) navi_navi_icon_text_pane_srt_t1

0x27b0,	// (0x0000428e) navi_tabs_2_long_pane_srt

0x27b0,	// (0x0000428e) navi_tabs_2_pane_srt

0x27b0,	// (0x0000428e) navi_tabs_3_long_pane_srt

0x27b0,	// (0x0000428e) navi_tabs_3_pane_srt

0x27b0,	// (0x0000428e) navi_tabs_4_pane_srt

0x3a8a,	// (0x00005568) tabs_2_active_pane_srt_ParamLimits

0x3a8a,	// (0x00005568) tabs_2_active_pane_srt

0x3a9a,	// (0x00005578) tabs_2_passive_pane_srt_ParamLimits

0x3a9a,	// (0x00005578) tabs_2_passive_pane_srt

0x1ec1,	// (0x0000399f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1ec1,	// (0x0000399f) bg_passive_tab_pane_cp1_srt

0x3a5e,	// (0x0000553c) bg_passive_tab_pane_g1_cp1_srt

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp1_srt

0x3a67,	// (0x00005545) bg_passive_tab_pane_g3_cp1_srt

0xe844,	// (0x00010322) bg_active_tab_pane_cp1_srt_ParamLimits

0xe844,	// (0x00010322) bg_active_tab_pane_cp1_srt

0x3a70,	// (0x0000554e) tabs_2_active_pane_srt_g1

0xc36e,	// (0x0000de4c) tabs_2_active_pane_srt_t1_ParamLimits

0xc36e,	// (0x0000de4c) tabs_2_active_pane_srt_t1

0x3a5e,	// (0x0000553c) bg_active_tab_pane_g1_cp1_srt

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp1_srt

0x3a67,	// (0x00005545) bg_active_tab_pane_g3_cp1_srt

0x3a2b,	// (0x00005509) tabs_3_active_pane_srt_ParamLimits

0x3a2b,	// (0x00005509) tabs_3_active_pane_srt

0x3a3c,	// (0x0000551a) tabs_3_passive_pane_cp_srt_ParamLimits

0x3a3c,	// (0x0000551a) tabs_3_passive_pane_cp_srt

0x3a4d,	// (0x0000552b) tabs_3_passive_pane_srt_ParamLimits

0x3a4d,	// (0x0000552b) tabs_3_passive_pane_srt

0x1ec1,	// (0x0000399f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1ec1,	// (0x0000399f) bg_passive_tab_pane_cp2_srt

0x0e32,	// (0x00002910) bg_passive_tab_pane_g1_cp2_srt

0x06ce,	// (0x000021ac) bg_passive_tab_pane_g2_cp2_srt

0x0e3b,	// (0x00002919) bg_passive_tab_pane_g3_cp2_srt

0xe844,	// (0x00010322) bg_active_tab_pane_cp2_srt_ParamLimits

0xe844,	// (0x00010322) bg_active_tab_pane_cp2_srt

0x3a11,	// (0x000054ef) tabs_3_active_pane_srt_g1

0xc358,	// (0x0000de36) tabs_3_active_pane_srt_t1_ParamLimits

0xc358,	// (0x0000de36) tabs_3_active_pane_srt_t1

0x0e32,	// (0x00002910) bg_active_tab_pane_g1_cp2_srt

0x06ce,	// (0x000021ac) bg_active_tab_pane_g2_cp2_srt

0x0e3b,	// (0x00002919) bg_active_tab_pane_g3_cp2_srt

0x39c9,	// (0x000054a7) tabs_4_active_pane_srt_ParamLimits

0x39c9,	// (0x000054a7) tabs_4_active_pane_srt

0x39db,	// (0x000054b9) tabs_4_passive_pane_cp2_srt_ParamLimits

0x39db,	// (0x000054b9) tabs_4_passive_pane_cp2_srt

0x10c3,	// (0x00002ba1) aid_size_cell_toolbar

0x3557,	// (0x00005035) main_idle_act_pane_ParamLimits

0x130c,	// (0x00002dea) popup_large_graphic_colour_window_ParamLimits

0xb7a6,	// (0x0000d284) popup_toolbar_window_ParamLimits

0xb7a6,	// (0x0000d284) popup_toolbar_window

0x3775,	// (0x00005253) list_single_graphic_2heading_pane_ParamLimits

0x3775,	// (0x00005253) list_single_graphic_2heading_pane

0xf50f,	// (0x00010fed) aid_size_cell_apps_grid_lsc_pane

0xf521,	// (0x00010fff) aid_size_cell_apps_grid_prt_pane

0x1103,	// (0x00002be1) bg_wml_button_pane_cp1_ParamLimits

0x1103,	// (0x00002be1) bg_wml_button_pane_cp1

0xbd22,	// (0x0000d800) form_midp_field_text_pane_t1_ParamLimits

0x1ec1,	// (0x0000399f) input_focus_pane_cp050_ParamLimits

0x2197,	// (0x00003c75) list_midp_form_text_pane_ParamLimits

0x2149,	// (0x00003c27) input_focus_pane_cp051_ParamLimits

0x215d,	// (0x00003c3b) list_midp_choice_pane_ParamLimits

0xbcbb,	// (0x0000d799) list_single_2graphic_pane_cp3_ParamLimits

0xbcbb,	// (0x0000d799) list_single_2graphic_pane_cp3

0xbcce,	// (0x0000d7ac) list_single_midp_graphic_pane_ParamLimits

0xbcce,	// (0x0000d7ac) list_single_midp_graphic_pane

0x1bb2,	// (0x00003690) list_single_graphic_2heading_pane_g1_ParamLimits

0x1bb2,	// (0x00003690) list_single_graphic_2heading_pane_g1

0x1bbe,	// (0x0000369c) list_single_graphic_2heading_pane_g4_ParamLimits

0x1bbe,	// (0x0000369c) list_single_graphic_2heading_pane_g4

0x1bca,	// (0x000036a8) list_single_graphic_2heading_pane_g5_ParamLimits

0x1bca,	// (0x000036a8) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00011264) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00011264) list_single_graphic_2heading_pane_g

0x1bd6,	// (0x000036b4) list_single_graphic_2heading_pane_t1_ParamLimits

0x1bd6,	// (0x000036b4) list_single_graphic_2heading_pane_t1

0x1bea,	// (0x000036c8) list_single_graphic_2heading_pane_t2_ParamLimits

0x1bea,	// (0x000036c8) list_single_graphic_2heading_pane_t2

0x1c06,	// (0x000036e4) list_single_graphic_2heading_pane_t3_ParamLimits

0x1c06,	// (0x000036e4) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x0001126b) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x0001126b) list_single_graphic_2heading_pane_t

0x1c1e,	// (0x000036fc) bg_popup_sub_pane_cp2

0x1c48,	// (0x00003726) grid_toobar_pane

0x1c84,	// (0x00003762) cell_toolbar_pane_ParamLimits

0x1c84,	// (0x00003762) cell_toolbar_pane

0x1cca,	// (0x000037a8) cell_toolbar_pane_g1_ParamLimits

0x1cca,	// (0x000037a8) cell_toolbar_pane_g1

0x1cde,	// (0x000037bc) cell_toolbar_pane_g2_ParamLimits

0x1cde,	// (0x000037bc) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x00011272) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x00011272) cell_toolbar_pane_g

0x1d00,	// (0x000037de) grid_highlight_pane_cp2_ParamLimits

0x1d00,	// (0x000037de) grid_highlight_pane_cp2

0x1d1a,	// (0x000037f8) toolbar_button_pane

0x1d26,	// (0x00003804) toolbar_button_pane_g1

0x1d2e,	// (0x0000380c) toolbar_button_pane_g2

0x1d36,	// (0x00003814) toolbar_button_pane_g3

0x1d3e,	// (0x0000381c) toolbar_button_pane_g4

0x1d46,	// (0x00003824) toolbar_button_pane_g5

0x1d4e,	// (0x0000382c) toolbar_button_pane_g6

0x1d56,	// (0x00003834) toolbar_button_pane_g7

0x1d5e,	// (0x0000383c) toolbar_button_pane_g8

0x1d66,	// (0x00003844) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x00011277) toolbar_button_pane_g

0x1d76,	// (0x00003854) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1d76,	// (0x00003854) list_single_2graphic_pane_g1_cp3

0xbc1d,	// (0x0000d6fb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc1d,	// (0x0000d6fb) list_single_2graphic_pane_g2_cp3

0x09f1,	// (0x000024cf) list_single_2graphic_pane_g3_cp3

0x1d93,	// (0x00003871) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1d93,	// (0x00003871) list_single_2graphic_pane_g4_cp3

0x1d9f,	// (0x0000387d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1d9f,	// (0x0000387d) list_single_2graphic_pane_t1_cp3

0x09e5,	// (0x000024c3) list_single_midp_graphic_pane_g2_ParamLimits

0x09e5,	// (0x000024c3) list_single_midp_graphic_pane_g2

0x10cb,	// (0x00002ba9) aid_zoom_text_primary

0x10d3,	// (0x00002bb1) aid_zoom_text_secondary

0x0eec,	// (0x000029ca) status_small_pane_g7_ParamLimits

0x0eec,	// (0x000029ca) status_small_pane_g7

0x0f0f,	// (0x000029ed) status_small_pane_t1_ParamLimits

0xa24e,	// (0x0000bd2c) title_pane_g2

0x0003,

0xf529,	// (0x00011007) title_pane_g

0xa4ee,	// (0x0000bfcc) aid_size_cell_colour_1_pane_ParamLimits

0xa4ee,	// (0x0000bfcc) aid_size_cell_colour_1_pane

0xa502,	// (0x0000bfe0) aid_size_cell_colour_2_pane_ParamLimits

0xa502,	// (0x0000bfe0) aid_size_cell_colour_2_pane

0xa516,	// (0x0000bff4) aid_size_cell_colour_3_pane_ParamLimits

0xa516,	// (0x0000bff4) aid_size_cell_colour_3_pane

0xa52a,	// (0x0000c008) aid_size_cell_colour_4_pane_ParamLimits

0xa52a,	// (0x0000c008) aid_size_cell_colour_4_pane

0xf381,	// (0x00010e5f) title_pane_stacon_g1_ParamLimits

0xf381,	// (0x00010e5f) title_pane_stacon_g1

0x2596,	// (0x00004074) popup_note_wait_window_g3_ParamLimits

0x2596,	// (0x00004074) popup_note_wait_window_g3

0x260d,	// (0x000040eb) popup_note_wait_window_t5_ParamLimits

0x260d,	// (0x000040eb) popup_note_wait_window_t5

0xe7a2,	// (0x00010280) main_feb_china_hwr_fs_writing_pane

0xb137,	// (0x0000cc15) popup_feb_china_hwr_fs_window_ParamLimits

0xb137,	// (0x0000cc15) popup_feb_china_hwr_fs_window

0xbc2e,	// (0x0000d70c) aid_size_cell_hwr_fs_ParamLimits

0xbc2e,	// (0x0000d70c) aid_size_cell_hwr_fs

0x1ec1,	// (0x0000399f) bg_popup_sub_pane_cp3_ParamLimits

0x1ec1,	// (0x0000399f) bg_popup_sub_pane_cp3

0xbc43,	// (0x0000d721) grid_hwr_fs_pane_ParamLimits

0xbc43,	// (0x0000d721) grid_hwr_fs_pane

0x1ee5,	// (0x000039c3) linegrid_hwr_fs_pane_ParamLimits

0x1ee5,	// (0x000039c3) linegrid_hwr_fs_pane

0xbc5b,	// (0x0000d739) cell_hwr_fs_pane_ParamLimits

0xbc5b,	// (0x0000d739) cell_hwr_fs_pane

0x1f19,	// (0x000039f7) linegrid_hwr_fs_pane_g1_ParamLimits

0x1f19,	// (0x000039f7) linegrid_hwr_fs_pane_g1

0xbc81,	// (0x0000d75f) linegrid_hwr_fs_pane_g2_ParamLimits

0xbc81,	// (0x0000d75f) linegrid_hwr_fs_pane_g2

0x1f37,	// (0x00003a15) linegrid_hwr_fs_pane_g3_ParamLimits

0x1f37,	// (0x00003a15) linegrid_hwr_fs_pane_g3

0x1f43,	// (0x00003a21) linegrid_hwr_fs_pane_g4_ParamLimits

0x1f43,	// (0x00003a21) linegrid_hwr_fs_pane_g4

0x1f61,	// (0x00003a3f) linegrid_hwr_fs_pane_g5_ParamLimits

0x1f61,	// (0x00003a3f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x0001129d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x0001129d) linegrid_hwr_fs_pane_g

0x1f77,	// (0x00003a55) cell_hwr_fs_pane_g1_ParamLimits

0x1f77,	// (0x00003a55) cell_hwr_fs_pane_g1

0x1aed,	// (0x000035cb) cell_hwr_fs_pane_g2_ParamLimits

0x1aed,	// (0x000035cb) cell_hwr_fs_pane_g2

0xbc93,	// (0x0000d771) cell_hwr_fs_pane_g3_ParamLimits

0xbc93,	// (0x0000d771) cell_hwr_fs_pane_g3

0xbca0,	// (0x0000d77e) cell_hwr_fs_pane_g4_ParamLimits

0xbca0,	// (0x0000d77e) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x000112a8) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x000112a8) cell_hwr_fs_pane_g

0xbcad,	// (0x0000d78b) cell_hwr_fs_pane_t1

0xe7a2,	// (0x00010280) grid_highlight_pane_cp6

0xe7a2,	// (0x00010280) main_idle_act2_pane

0xf189,	// (0x00010c67) aid_inside_area_popup_secondary

0xbef8,	// (0x0000d9d6) aid_inside_area_window_primary_ParamLimits

0xbef8,	// (0x0000d9d6) aid_inside_area_window_primary

0x3be8,	// (0x000056c6) ai2_news_ticker_pane

0x3bf0,	// (0x000056ce) aid_size_cell_ai1_link_ParamLimits

0x3bf0,	// (0x000056ce) aid_size_cell_ai1_link

0x3c0a,	// (0x000056e8) popup_ai2_data_window_ParamLimits

0x3c0a,	// (0x000056e8) popup_ai2_data_window

0x3c28,	// (0x00005706) popup_ai2_link_window_ParamLimits

0x3c28,	// (0x00005706) popup_ai2_link_window

0x1ec1,	// (0x0000399f) bg_popup_sub_pane_cp4_ParamLimits

0x1ec1,	// (0x0000399f) bg_popup_sub_pane_cp4

0x3c3e,	// (0x0000571c) grid_ai2_link_pane_ParamLimits

0x3c3e,	// (0x0000571c) grid_ai2_link_pane

0x3c55,	// (0x00005733) popup_ai2_link_window_g1_ParamLimits

0x3c55,	// (0x00005733) popup_ai2_link_window_g1

0x3c61,	// (0x0000573f) popup_ai2_link_window_g2_ParamLimits

0x3c61,	// (0x0000573f) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x0001147b) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x0001147b) popup_ai2_link_window_g

0x3c72,	// (0x00005750) ai2_mp_button_pane

0x3c7a,	// (0x00005758) ai2_mp_volume_pane

0x2149,	// (0x00003c27) bg_popup_sub_pane_cp5_ParamLimits

0x2149,	// (0x00003c27) bg_popup_sub_pane_cp5

0x3c82,	// (0x00005760) heading_ai2_gene_pane_ParamLimits

0x3c82,	// (0x00005760) heading_ai2_gene_pane

0x3c8e,	// (0x0000576c) list_ai2_gene_pane_ParamLimits

0x3c8e,	// (0x0000576c) list_ai2_gene_pane

0x3cd6,	// (0x000057b4) cell_ai2_link_pane_ParamLimits

0x3cd6,	// (0x000057b4) cell_ai2_link_pane

0x3cec,	// (0x000057ca) cell_ai2_link_pane_g1

0xe7a2,	// (0x00010280) grid_highlight_pane_cp7

0x3dbf,	// (0x0000589d) ai2_mp_volume_pane_g1

0x3dc7,	// (0x000058a5) ai2_mp_volume_pane_g2

0x3d34,	// (0x00005812) list_ai2_gene_pane_t1

0x3dcf,	// (0x000058ad) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x00011494) ai2_mp_volume_pane_g

0x3dd7,	// (0x000058b5) volume_small_pane_cp3

0x3de0,	// (0x000058be) aid_size_cell_ai2_button

0x3de8,	// (0x000058c6) grid_ai2_button_pane

0x3df1,	// (0x000058cf) cell_ai2_button_pane_ParamLimits

0x3df1,	// (0x000058cf) cell_ai2_button_pane

0xe629,	// (0x00010107) cell_ai2_button_pane_g1

0xe7a2,	// (0x00010280) grid_highlight_pane_cp8

0x3d7f,	// (0x0000585d) ai2_gene_pane_t1_ParamLimits

0x3d7f,	// (0x0000585d) ai2_gene_pane_t1

0xb0b3,	// (0x0000cb91) aid_height_parent_landscape

0xc0b0,	// (0x0000db8e) aid_height_set_list

0x3557,	// (0x00005035) aid_size_parent

0x394f,	// (0x0000542d) aid_size_cell_graphic_pane_ParamLimits

0x3c9e,	// (0x0000577c) popup_ai2_data_window_g1_ParamLimits

0x3c9e,	// (0x0000577c) popup_ai2_data_window_g1

0x3caa,	// (0x00005788) ai2_news_ticker_pane_g1

0x3cb2,	// (0x00005790) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x00011480) ai2_news_ticker_pane_g

0x3cba,	// (0x00005798) ai2_news_ticker_pane_t1

0x3cc8,	// (0x000057a6) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x00011485) ai2_news_ticker_pane_t

0x3cf5,	// (0x000057d3) heading_ai2_gene_pane_g1

0x3cfd,	// (0x000057db) heading_ai2_gene_pane_t1_ParamLimits

0x3cfd,	// (0x000057db) heading_ai2_gene_pane_t1

0x3d12,	// (0x000057f0) list_highlight_pane_cp6

0x3d1a,	// (0x000057f8) ai2_gene_pane_ParamLimits

0x3d1a,	// (0x000057f8) ai2_gene_pane

0x3d42,	// (0x00005820) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x0001148a) list_ai2_gene_pane_t

0x3d50,	// (0x0000582e) list_highlight_pane_cp8_ParamLimits

0x3d50,	// (0x0000582e) list_highlight_pane_cp8

0x3d61,	// (0x0000583f) ai2_gene_pane_g1_ParamLimits

0x3d61,	// (0x0000583f) ai2_gene_pane_g1

0x3d73,	// (0x00005851) ai2_gene_pane_g2_ParamLimits

0x3d73,	// (0x00005851) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0001148f) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0001148f) ai2_gene_pane_g

0xeed7,	// (0x000109b5) scroll_pane_cp12

0xb072,	// (0x0000cb50) control_pane_t3_ParamLimits

0xb072,	// (0x0000cb50) control_pane_t3

0x0f00,	// (0x000029de) status_small_pane_g8_ParamLimits

0x0f00,	// (0x000029de) status_small_pane_g8

0xb1d9,	// (0x0000ccb7) popup_find_window_ParamLimits

0xb490,	// (0x0000cf6e) popup_note_image_window_ParamLimits

0x1bb2,	// (0x00003690) list_double2_graphic_pane_vc_g1_ParamLimits

0x1bb2,	// (0x00003690) list_double2_graphic_pane_vc_g1

0x1bbe,	// (0x0000369c) list_double2_graphic_pane_vc_g2_ParamLimits

0x1bbe,	// (0x0000369c) list_double2_graphic_pane_vc_g2

0x1bca,	// (0x000036a8) list_double2_graphic_pane_vc_g3_ParamLimits

0x1bca,	// (0x000036a8) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x00011264) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x00011264) list_double2_graphic_pane_vc_g

0x1cb4,	// (0x00003792) list_double2_graphic_pane_vc_t1_ParamLimits

0x1cb4,	// (0x00003792) list_double2_graphic_pane_vc_t1

0x1bbe,	// (0x0000369c) list_single_heading_pane_vc_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_single_heading_pane_vc_g1

0x1bca,	// (0x000036a8) list_single_heading_pane_vc_g2_ParamLimits

0x1bca,	// (0x000036a8) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011081) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011081) list_single_heading_pane_vc_g

0x1dba,	// (0x00003898) list_single_heading_pane_vc_t1_ParamLimits

0x1dba,	// (0x00003898) list_single_heading_pane_vc_t1

0x1dd0,	// (0x000038ae) list_single_heading_pane_vc_t2_ParamLimits

0x1dd0,	// (0x000038ae) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x0001128c) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x0001128c) list_single_heading_pane_vc_t

0x1df8,	// (0x000038d6) list_setting_number_pane_vc_g1_ParamLimits

0x1df8,	// (0x000038d6) list_setting_number_pane_vc_g1

0x1e04,	// (0x000038e2) list_setting_number_pane_vc_g2_ParamLimits

0x1e04,	// (0x000038e2) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x00011291) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x00011291) list_setting_number_pane_vc_g

0x1e10,	// (0x000038ee) list_setting_number_pane_vc_t1_ParamLimits

0x1e10,	// (0x000038ee) list_setting_number_pane_vc_t1

0x1e24,	// (0x00003902) list_setting_number_pane_vc_t2_ParamLimits

0x1e24,	// (0x00003902) list_setting_number_pane_vc_t2

0x1e40,	// (0x0000391e) list_setting_number_pane_vc_t3_ParamLimits

0x1e40,	// (0x0000391e) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x00011296) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x00011296) list_setting_number_pane_vc_t

0x1e6e,	// (0x0000394c) set_value_pane_vc_ParamLimits

0x1e6e,	// (0x0000394c) set_value_pane_vc

0x3775,	// (0x00005253) list_double2_graphic_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double2_graphic_pane_vc

0x3775,	// (0x00005253) list_double2_large_graphic_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double2_large_graphic_pane_vc

0x3775,	// (0x00005253) list_double2_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double2_pane_vc

0x3775,	// (0x00005253) list_double_graphic_heading_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double_graphic_heading_pane_vc

0x3775,	// (0x00005253) list_double_graphic_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double_graphic_pane_vc

0x3775,	// (0x00005253) list_double_heading_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double_heading_pane_vc

0x3789,	// (0x00005267) list_double_large_graphic_pane_vc_ParamLimits

0x3789,	// (0x00005267) list_double_large_graphic_pane_vc

0x3775,	// (0x00005253) list_double_number_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double_number_pane_vc

0x3775,	// (0x00005253) list_double_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double_pane_vc

0x3775,	// (0x00005253) list_double_time_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_double_time_pane_vc

0x3775,	// (0x00005253) list_setting_number_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_setting_number_pane_vc

0x3775,	// (0x00005253) list_setting_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_setting_pane_vc

0x3775,	// (0x00005253) list_single_graphic_heading_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_single_graphic_heading_pane_vc

0x3775,	// (0x00005253) list_single_heading_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_single_heading_pane_vc

0x3775,	// (0x00005253) list_single_number_heading_pane_vc_ParamLimits

0x3775,	// (0x00005253) list_single_number_heading_pane_vc

0x1bb2,	// (0x00003690) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1bb2,	// (0x00003690) list_double_graphic_heading_pane_vc_g1

0x0b43,	// (0x00002621) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0b43,	// (0x00002621) list_double_graphic_heading_pane_vc_g2

0x3e24,	// (0x00005902) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3e24,	// (0x00005902) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x0001149b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x0001149b) list_double_graphic_heading_pane_vc_g

0x3e30,	// (0x0000590e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3e30,	// (0x0000590e) list_double_graphic_heading_pane_vc_t1

0x3e46,	// (0x00005924) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3e46,	// (0x00005924) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x000114a2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x000114a2) list_double_graphic_heading_pane_vc_t

0x1df8,	// (0x000038d6) list_setting_pane_vc_g1_ParamLimits

0x1df8,	// (0x000038d6) list_setting_pane_vc_g1

0x1e04,	// (0x000038e2) list_setting_pane_vc_g2_ParamLimits

0x1e04,	// (0x000038e2) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x00011291) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x00011291) list_setting_pane_vc_g

0x4097,	// (0x00005b75) list_setting_pane_vc_t1_ParamLimits

0x4097,	// (0x00005b75) list_setting_pane_vc_t1

0x40b3,	// (0x00005b91) list_setting_pane_vc_t2_ParamLimits

0x40b3,	// (0x00005b91) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x000114e5) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x000114e5) list_setting_pane_vc_t

0x1e6e,	// (0x0000394c) set_value_pane_cp_vc_ParamLimits

0x1e6e,	// (0x0000394c) set_value_pane_cp_vc

0x1bbe,	// (0x0000369c) list_single_number_heading_pane_vc_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_single_number_heading_pane_vc_g1

0x1bca,	// (0x000036a8) list_single_number_heading_pane_vc_g2_ParamLimits

0x1bca,	// (0x000036a8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011081) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011081) list_single_number_heading_pane_vc_g

0x40cf,	// (0x00005bad) list_single_number_heading_pane_vc_t1_ParamLimits

0x40cf,	// (0x00005bad) list_single_number_heading_pane_vc_t1

0x40e5,	// (0x00005bc3) list_single_number_heading_pane_vc_t2_ParamLimits

0x40e5,	// (0x00005bc3) list_single_number_heading_pane_vc_t2

0x40fb,	// (0x00005bd9) list_single_number_heading_pane_vc_t3_ParamLimits

0x40fb,	// (0x00005bd9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x000114ea) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x000114ea) list_single_number_heading_pane_vc_t

0x1bb2,	// (0x00003690) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1bb2,	// (0x00003690) list_single_graphic_heading_pane_vc_g1

0x1bbe,	// (0x0000369c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1bbe,	// (0x0000369c) list_single_graphic_heading_pane_vc_g4

0x1bca,	// (0x000036a8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1bca,	// (0x000036a8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x00011264) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x00011264) list_single_graphic_heading_pane_vc_g

0x40cf,	// (0x00005bad) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x40cf,	// (0x00005bad) list_single_graphic_heading_pane_vc_t1

0x410d,	// (0x00005beb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x410d,	// (0x00005beb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x000114f1) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x000114f1) list_single_graphic_heading_pane_vc_t

0x1bbe,	// (0x0000369c) list_double2_pane_vc_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_double2_pane_vc_g1

0x1bca,	// (0x000036a8) list_double2_pane_vc_g2_ParamLimits

0x1bca,	// (0x000036a8) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011081) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011081) list_double2_pane_vc_g

0x411f,	// (0x00005bfd) list_double2_pane_vc_t1_ParamLimits

0x411f,	// (0x00005bfd) list_double2_pane_vc_t1

0x4135,	// (0x00005c13) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4135,	// (0x00005c13) list_double2_large_graphic_pane_vc_g1

0x1bbe,	// (0x0000369c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1bbe,	// (0x0000369c) list_double2_large_graphic_pane_vc_g2

0x1bca,	// (0x000036a8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1bca,	// (0x000036a8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0001109e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0001109e) list_double2_large_graphic_pane_vc_g

0x4141,	// (0x00005c1f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4141,	// (0x00005c1f) list_double2_large_graphic_pane_vc_t1

0x4157,	// (0x00005c35) list_double_time_pane_vc_g1_ParamLimits

0x4157,	// (0x00005c35) list_double_time_pane_vc_g1

0x4163,	// (0x00005c41) list_double_time_pane_vc_g2_ParamLimits

0x4163,	// (0x00005c41) list_double_time_pane_vc_g2

0x0001,

0xfa18,	// (0x000114f6) list_double_time_pane_vc_g_ParamLimits

0xfa18,	// (0x000114f6) list_double_time_pane_vc_g

0x416f,	// (0x00005c4d) list_double_time_pane_vc_t1_ParamLimits

0x416f,	// (0x00005c4d) list_double_time_pane_vc_t1

0x419f,	// (0x00005c7d) list_double_time_pane_vc_t2_ParamLimits

0x419f,	// (0x00005c7d) list_double_time_pane_vc_t2

0x41c8,	// (0x00005ca6) list_double_time_pane_vc_t3_ParamLimits

0x41c8,	// (0x00005ca6) list_double_time_pane_vc_t3

0x41da,	// (0x00005cb8) list_double_time_pane_vc_t4_ParamLimits

0x41da,	// (0x00005cb8) list_double_time_pane_vc_t4

0x0003,

0xfa1d,	// (0x000114fb) list_double_time_pane_vc_t_ParamLimits

0xfa1d,	// (0x000114fb) list_double_time_pane_vc_t

0x1bbe,	// (0x0000369c) list_double_pane_vc_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_double_pane_vc_g1

0x1bca,	// (0x000036a8) list_double_pane_vc_g2_ParamLimits

0x1bca,	// (0x000036a8) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011081) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011081) list_double_pane_vc_g

0x41ee,	// (0x00005ccc) list_double_pane_vc_t1_ParamLimits

0x41ee,	// (0x00005ccc) list_double_pane_vc_t1

0x4202,	// (0x00005ce0) list_double_pane_vc_t2_ParamLimits

0x4202,	// (0x00005ce0) list_double_pane_vc_t2

0x0001,

0xfa26,	// (0x00011504) list_double_pane_vc_t_ParamLimits

0xfa26,	// (0x00011504) list_double_pane_vc_t

0x1bbe,	// (0x0000369c) list_double_number_pane_vc_g1_ParamLimits

0x1bbe,	// (0x0000369c) list_double_number_pane_vc_g1

0x1bca,	// (0x000036a8) list_double_number_pane_vc_g2_ParamLimits

0x1bca,	// (0x000036a8) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00011081) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00011081) list_double_number_pane_vc_g

0x4218,	// (0x00005cf6) list_double_number_pane_vc_t1_ParamLimits

0x4218,	// (0x00005cf6) list_double_number_pane_vc_t1

0x422a,	// (0x00005d08) list_double_number_pane_vc_t2_ParamLimits

0x422a,	// (0x00005d08) list_double_number_pane_vc_t2

0x4202,	// (0x00005ce0) list_double_number_pane_vc_t3_ParamLimits

0x4202,	// (0x00005ce0) list_double_number_pane_vc_t3

0x0002,

0xfa2b,	// (0x00011509) list_double_number_pane_vc_t_ParamLimits

0xfa2b,	// (0x00011509) list_double_number_pane_vc_t

0x423e,	// (0x00005d1c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x423e,	// (0x00005d1c) list_double_large_graphic_pane_vc_g1

0x4260,	// (0x00005d3e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4260,	// (0x00005d3e) list_double_large_graphic_pane_vc_g2

0x4274,	// (0x00005d52) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4274,	// (0x00005d52) list_double_large_graphic_pane_vc_g3

0x4283,	// (0x00005d61) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4283,	// (0x00005d61) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa32,	// (0x00011510) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x00011510) list_double_large_graphic_pane_vc_g

0x428f,	// (0x00005d6d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x428f,	// (0x00005d6d) list_double_large_graphic_pane_vc_t1

0x42ab,	// (0x00005d89) list_double_large_graphic_pane_vc_t2_ParamLimits

0x42ab,	// (0x00005d89) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x00011519) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3b,	// (0x00011519) list_double_large_graphic_pane_vc_t

0x0b43,	// (0x00002621) list_double_heading_pane_vc_g1_ParamLimits

0x0b43,	// (0x00002621) list_double_heading_pane_vc_g1

0x3e24,	// (0x00005902) list_double_heading_pane_vc_g2_ParamLimits

0x3e24,	// (0x00005902) list_double_heading_pane_vc_g2

0x0001,

0xfa40,	// (0x0001151e) list_double_heading_pane_vc_g_ParamLimits

0xfa40,	// (0x0001151e) list_double_heading_pane_vc_g

0x42cb,	// (0x00005da9) list_double_heading_pane_vc_t1_ParamLimits

0x42cb,	// (0x00005da9) list_double_heading_pane_vc_t1

0x42dd,	// (0x00005dbb) list_double_heading_pane_vc_t2_ParamLimits

0x42dd,	// (0x00005dbb) list_double_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00011523) list_double_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00011523) list_double_heading_pane_vc_t

0x42f5,	// (0x00005dd3) list_double_graphic_pane_vc_g1_ParamLimits

0x42f5,	// (0x00005dd3) list_double_graphic_pane_vc_g1

0x4301,	// (0x00005ddf) list_double_graphic_pane_vc_g2_ParamLimits

0x4301,	// (0x00005ddf) list_double_graphic_pane_vc_g2

0x1bbe,	// (0x0000369c) list_double_graphic_pane_vc_g3_ParamLimits

0x1bbe,	// (0x0000369c) list_double_graphic_pane_vc_g3

0x0003,

0xfa4a,	// (0x00011528) list_double_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00011528) list_double_graphic_pane_vc_g

0x431e,	// (0x00005dfc) list_double_graphic_pane_vc_t1_ParamLimits

0x431e,	// (0x00005dfc) list_double_graphic_pane_vc_t1

0x4348,	// (0x00005e26) list_double_graphic_pane_vc_t2_ParamLimits

0x4348,	// (0x00005e26) list_double_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x00011531) list_double_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x00011531) list_double_graphic_pane_vc_t

0xe64b,	// (0x00010129) aid_size_cell_fastswap

0xa027,	// (0x0000bb05) aid_size_cell_touch_ParamLimits

0xa027,	// (0x0000bb05) aid_size_cell_touch

0xe7d2,	// (0x000102b0) popup_fast_swap_wide_window_ParamLimits

0xe7d2,	// (0x000102b0) popup_fast_swap_wide_window

0xa1e5,	// (0x0000bcc3) touch_pane_ParamLimits

0xa1e5,	// (0x0000bcc3) touch_pane

0xef68,	// (0x00010a46) button_value_adjust_pane_cp2

0xef70,	// (0x00010a4e) button_value_adjust_pane_cp4

0xef78,	// (0x00010a56) form_field_data_pane_cp2

0xaa1e,	// (0x0000c4fc) form_field_data_wide_pane_cp2

0x00de,	// (0x00001bbc) bg_scroll_pane_ParamLimits

0x00fd,	// (0x00001bdb) scroll_handle_pane_ParamLimits

0x0111,	// (0x00001bef) scroll_sc2_down_pane_ParamLimits

0x0111,	// (0x00001bef) scroll_sc2_down_pane

0x0138,	// (0x00001c16) scroll_sc2_up_pane_ParamLimits

0x0138,	// (0x00001c16) scroll_sc2_up_pane

0xc4b0,	// (0x0000df8e) grid_wheel_folder_pane_g1_ParamLimits

0xc4b0,	// (0x0000df8e) grid_wheel_folder_pane_g1

0x0815,	// (0x000022f3) clock_nsta_pane_cp2_ParamLimits

0x0815,	// (0x000022f3) clock_nsta_pane_cp2

0xaec6,	// (0x0000c9a4) listscroll_midp_pane_ParamLimits

0xaed2,	// (0x0000c9b0) midp_canvas_pane

0x10b1,	// (0x00002b8f) nsta_clock_indic_pane

0x110f,	// (0x00002bed) listscroll_form_pane_vc

0x1133,	// (0x00002c11) listscroll_set_pane_vc_ParamLimits

0x1133,	// (0x00002c11) listscroll_set_pane_vc

0xb90c,	// (0x0000d3ea) clock_nsta_pane

0xb936,	// (0x0000d414) indicator_nsta_pane

0x1c1e,	// (0x000036fc) bg_popup_sub_pane_cp2_ParamLimits

0x1c32,	// (0x00003710) find_pane_cp2_ParamLimits

0x1c32,	// (0x00003710) find_pane_cp2

0x1c48,	// (0x00003726) grid_toobar_pane_ParamLimits

0x1e80,	// (0x0000395e) list_form_gen_pane_vc_ParamLimits

0x1e80,	// (0x0000395e) list_form_gen_pane_vc

0x1e96,	// (0x00003974) scroll_pane_cp8_vc_ParamLimits

0x1e96,	// (0x00003974) scroll_pane_cp8_vc

0x1fb5,	// (0x00003a93) data_form_wide_pane_vc_ParamLimits

0x1fb5,	// (0x00003a93) data_form_wide_pane_vc

0x1fc1,	// (0x00003a9f) form_field_data_wide_pane_vc_g1

0x1fc9,	// (0x00003aa7) form_field_data_wide_pane_vc_t1_ParamLimits

0x1fc9,	// (0x00003aa7) form_field_data_wide_pane_vc_t1

0xefd4,	// (0x00010ab2) input_focus_pane_cp6_vc_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_cp6_vc

0x2314,	// (0x00003df2) list_midp_pane_ParamLimits

0x39bd,	// (0x0000549b) scroll_pane_cp16_ParamLimits

0x39bd,	// (0x0000549b) scroll_pane_cp16

0x236a,	// (0x00003e48) button_value_adjust_pane_ParamLimits

0x236a,	// (0x00003e48) button_value_adjust_pane

0xc0c1,	// (0x0000db9f) button_value_adjust_pane_cp6_ParamLimits

0xc0c1,	// (0x0000db9f) button_value_adjust_pane_cp6

0xc1fd,	// (0x0000dcdb) settings_code_pane_cp_ParamLimits

0xc1fd,	// (0x0000dcdb) settings_code_pane_cp

0xe629,	// (0x00010107) cell_touch_pane_g1

0xe629,	// (0x00010107) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x000111b7) cell_touch_pane_g

0xc384,	// (0x0000de62) cell_touch_pane_cp_ParamLimits

0xc384,	// (0x0000de62) cell_touch_pane_cp

0xc3a0,	// (0x0000de7e) cell_touch_pane_ParamLimits

0xc3a0,	// (0x0000de7e) cell_touch_pane

0xe629,	// (0x00010107) scroll_sc2_down_pane_g1

0xe629,	// (0x00010107) scroll_sc2_up_pane_g1

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp4_vc

0x3e64,	// (0x00005942) list_set_graphic_pane_vc_g1_ParamLimits

0x3e64,	// (0x00005942) list_set_graphic_pane_vc_g1

0x3e70,	// (0x0000594e) list_set_graphic_pane_vc_g2_ParamLimits

0x3e70,	// (0x0000594e) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x000114a7) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x000114a7) list_set_graphic_pane_vc_g

0x3e7c,	// (0x0000595a) text_primary_small_cp13_vc_ParamLimits

0x3e7c,	// (0x0000595a) text_primary_small_cp13_vc

0x3e94,	// (0x00005972) list_set_graphic_pane_vc_ParamLimits

0x3e94,	// (0x00005972) list_set_graphic_pane_vc

0xe7a2,	// (0x00010280) input_focus_pane_cp2_vc

0xe629,	// (0x00010107) setting_code_pane_vc_g1

0xe8fc,	// (0x000103da) setting_code_pane_vc_t1

0x3ea7,	// (0x00005985) set_text_pane_vc_t1_ParamLimits

0x3ea7,	// (0x00005985) set_text_pane_vc_t1

0xe7a2,	// (0x00010280) input_focus_pane_cp1_vc

0x3ec8,	// (0x000059a6) list_set_text_pane_vc

0xe629,	// (0x00010107) setting_text_pane_vc_g1

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp2_vc

0xe8cb,	// (0x000103a9) setting_slider_graphic_pane_vc_g1

0x3ed2,	// (0x000059b0) setting_slider_graphic_pane_vc_t1

0x3ee4,	// (0x000059c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x000114ac) setting_slider_graphic_pane_vc_t

0x3ef6,	// (0x000059d4) slider_set_pane_cp_vc

0x3f00,	// (0x000059de) slider_set_pane_vc_g1

0x3f09,	// (0x000059e7) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x000114b1) slider_set_pane_vc_g

0xf08f,	// (0x00010b6d) set_opt_bg_pane_g1_copy1

0xf097,	// (0x00010b75) set_opt_bg_pane_g2_copy1

0x3f35,	// (0x00005a13) set_opt_bg_pane_g3_copy1

0xf0a7,	// (0x00010b85) set_opt_bg_pane_g4_copy1

0xf0af,	// (0x00010b8d) set_opt_bg_pane_g5_copy1

0xf0b7,	// (0x00010b95) set_opt_bg_pane_g6_copy1

0x3f3f,	// (0x00005a1d) set_opt_bg_pane_g7_copy1

0x3f49,	// (0x00005a27) set_opt_bg_pane_g8_copy1

0x3f53,	// (0x00005a31) set_opt_bg_pane_g9_copy1

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp_vc

0x3f5d,	// (0x00005a3b) setting_slider_pane_vc_t1

0x3f6c,	// (0x00005a4a) setting_slider_pane_vc_t2

0x3f7e,	// (0x00005a5c) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x000114c0) setting_slider_pane_vc_t

0x3f90,	// (0x00005a6e) slider_set_pane_vc

0x2baf,	// (0x0000468d) volume_set_pane_vc_g1

0x2bb8,	// (0x00004696) volume_set_pane_vc_g2

0x2bc1,	// (0x0000469f) volume_set_pane_vc_g3

0x2bca,	// (0x000046a8) volume_set_pane_vc_g4

0x2bd3,	// (0x000046b1) volume_set_pane_vc_g5

0x2bdc,	// (0x000046ba) volume_set_pane_vc_g6

0x2be5,	// (0x000046c3) volume_set_pane_vc_g7

0x2bee,	// (0x000046cc) volume_set_pane_vc_g8

0x2bf7,	// (0x000046d5) volume_set_pane_vc_g9

0x2c00,	// (0x000046de) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x000114c7) volume_set_pane_vc_g

0x3f9a,	// (0x00005a78) volume_set_pane_vc

0x3fa4,	// (0x00005a82) button_value_adjust_pane_cp1_vc

0x3fae,	// (0x00005a8c) list_highlight_pane_cp2_vc

0x3fb7,	// (0x00005a95) list_set_pane_vc_ParamLimits

0x3fb7,	// (0x00005a95) list_set_pane_vc

0x4025,	// (0x00005b03) main_pane_set_vc_t1_ParamLimits

0x4025,	// (0x00005b03) main_pane_set_vc_t1

0x403a,	// (0x00005b18) main_pane_set_vc_t2_ParamLimits

0x403a,	// (0x00005b18) main_pane_set_vc_t2

0x404c,	// (0x00005b2a) main_pane_set_vc_t3_ParamLimits

0x404c,	// (0x00005b2a) main_pane_set_vc_t3

0x4060,	// (0x00005b3e) main_pane_set_vc_t4_ParamLimits

0x4060,	// (0x00005b3e) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x000114dc) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x000114dc) main_pane_set_vc_t

0x4074,	// (0x00005b52) setting_code_pane_vc_ParamLimits

0x4074,	// (0x00005b52) setting_code_pane_vc

0x4085,	// (0x00005b63) setting_slider_graphic_pane_vc

0x4085,	// (0x00005b63) setting_slider_pane_vc

0x4085,	// (0x00005b63) setting_text_pane_vc

0x4085,	// (0x00005b63) setting_volume_pane_vc

0x408f,	// (0x00005b6d) scroll_pane_cp121_vc

0xef56,	// (0x00010a34) set_content_pane_vc

0x4366,	// (0x00005e44) button_value_adjust_pane_g1

0x436f,	// (0x00005e4d) button_value_adjust_pane_g2

0x0001,

0xfa58,	// (0x00011536) button_value_adjust_pane_g

0x4378,	// (0x00005e56) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4378,	// (0x00005e56) form_field_slider_wide_pane_vc_t1

0x438a,	// (0x00005e68) form_field_slider_wide_pane_vc_t2_ParamLimits

0x438a,	// (0x00005e68) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5d,	// (0x0001153b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5d,	// (0x0001153b) form_field_slider_wide_pane_vc_t

0xe844,	// (0x00010322) input_focus_pane_cp10_vc_ParamLimits

0xe844,	// (0x00010322) input_focus_pane_cp10_vc

0x43b6,	// (0x00005e94) slider_cont_pane_cp1_vc_ParamLimits

0x43b6,	// (0x00005e94) slider_cont_pane_cp1_vc

0x43c8,	// (0x00005ea6) slider_form_pane_g1_cp2

0x3f09,	// (0x000059e7) slider_form_pane_g2_cp2

0x43f5,	// (0x00005ed3) form_field_slider_pane_vc_t3

0x4403,	// (0x00005ee1) form_field_slider_pane_vc_t4

0x4411,	// (0x00005eef) slider_form_pane_vc_ParamLimits

0x4411,	// (0x00005eef) slider_form_pane_vc

0x441e,	// (0x00005efc) form_field_slider_pane_vc_t1_ParamLimits

0x441e,	// (0x00005efc) form_field_slider_pane_vc_t1

0x438a,	// (0x00005e68) form_field_slider_pane_vc_t2_ParamLimits

0x438a,	// (0x00005e68) form_field_slider_pane_vc_t2

0x0001,

0xfa6f,	// (0x0001154d) form_field_slider_pane_vc_t_ParamLimits

0xfa6f,	// (0x0001154d) form_field_slider_pane_vc_t

0xe844,	// (0x00010322) input_focus_pane_cp9_vc_ParamLimits

0xe844,	// (0x00010322) input_focus_pane_cp9_vc

0x4434,	// (0x00005f12) slider_cont_pane_vc_ParamLimits

0x4434,	// (0x00005f12) slider_cont_pane_vc

0x4448,	// (0x00005f26) list_form_graphic_pane_cp_vc_ParamLimits

0x4448,	// (0x00005f26) list_form_graphic_pane_cp_vc

0x1fc1,	// (0x00003a9f) form_field_popup_wide_pane_vc_g1

0x445d,	// (0x00005f3b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x445d,	// (0x00005f3b) form_field_popup_wide_pane_vc_t1

0xefd4,	// (0x00010ab2) input_focus_pane_cp8_vc_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_cp8_vc

0x44a2,	// (0x00005f80) list_form_wide_pane_vc_ParamLimits

0x44a2,	// (0x00005f80) list_form_wide_pane_vc

0x44ae,	// (0x00005f8c) list_form_graphic_pane_vc_g1

0x44b6,	// (0x00005f94) list_form_graphic_pane_vc_t1_ParamLimits

0x44b6,	// (0x00005f94) list_form_graphic_pane_vc_t1

0xe85c,	// (0x0001033a) list_highlight_pane_cp5_vc_ParamLimits

0xe85c,	// (0x0001033a) list_highlight_pane_cp5_vc

0x44d2,	// (0x00005fb0) list_form_graphic_pane_vc_ParamLimits

0x44d2,	// (0x00005fb0) list_form_graphic_pane_vc

0x1fc1,	// (0x00003a9f) form_field_popup_pane_vc_g1

0x44e8,	// (0x00005fc6) form_field_popup_pane_vc_t1_ParamLimits

0x44e8,	// (0x00005fc6) form_field_popup_pane_vc_t1

0xefd4,	// (0x00010ab2) input_focus_pane_cp7_vc_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_cp7_vc

0x44ff,	// (0x00005fdd) list_form_pane_vc_ParamLimits

0x44ff,	// (0x00005fdd) list_form_pane_vc

0x450b,	// (0x00005fe9) data_form_pane_vc_t1_ParamLimits

0x450b,	// (0x00005fe9) data_form_pane_vc_t1

0xf08f,	// (0x00010b6d) input_focus_pane_vc_g1

0xf097,	// (0x00010b75) input_focus_pane_vc_g2

0xf09f,	// (0x00010b7d) input_focus_pane_vc_g3

0xf0a7,	// (0x00010b85) input_focus_pane_vc_g4

0xf0af,	// (0x00010b8d) input_focus_pane_vc_g5

0xf0b7,	// (0x00010b95) input_focus_pane_vc_g6

0xf0bf,	// (0x00010b9d) input_focus_pane_vc_g7

0xf0c7,	// (0x00010ba5) input_focus_pane_vc_g8

0xf0cf,	// (0x00010bad) input_focus_pane_vc_g9

0xe629,	// (0x00010107) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00011140) input_focus_pane_vc_g

0x1fb5,	// (0x00003a93) data_form_pane_vc_ParamLimits

0x1fb5,	// (0x00003a93) data_form_pane_vc

0x1fc1,	// (0x00003a9f) form_field_data_pane_vc_g1

0x4528,	// (0x00006006) form_field_data_pane_vc_t1_ParamLimits

0x4528,	// (0x00006006) form_field_data_pane_vc_t1

0xefd4,	// (0x00010ab2) input_focus_pane_vc_ParamLimits

0xefd4,	// (0x00010ab2) input_focus_pane_vc

0x4542,	// (0x00006020) button_value_adjust_pane_cp3_vc

0x454a,	// (0x00006028) button_value_adjust_pane_cp5_vc

0x4552,	// (0x00006030) form_field_data_pane_vc_ParamLimits

0x4552,	// (0x00006030) form_field_data_pane_vc

0x456d,	// (0x0000604b) form_field_data_pane_vc_cp2

0x4575,	// (0x00006053) form_field_data_wide_pane_vc_ParamLimits

0x4575,	// (0x00006053) form_field_data_wide_pane_vc

0x458f,	// (0x0000606d) form_field_data_wide_pane_vc_cp2

0x4597,	// (0x00006075) form_field_popup_pane_vc_ParamLimits

0x4597,	// (0x00006075) form_field_popup_pane_vc

0x45b2,	// (0x00006090) form_field_popup_wide_pane_vc_ParamLimits

0x45b2,	// (0x00006090) form_field_popup_wide_pane_vc

0x45cc,	// (0x000060aa) form_field_slider_pane_vc_ParamLimits

0x45cc,	// (0x000060aa) form_field_slider_pane_vc

0x45df,	// (0x000060bd) form_field_slider_wide_pane_vc_ParamLimits

0x45df,	// (0x000060bd) form_field_slider_wide_pane_vc

0xc3be,	// (0x0000de9c) grid_touch_1_pane_ParamLimits

0xc3be,	// (0x0000de9c) grid_touch_1_pane

0xc3d2,	// (0x0000deb0) grid_touch_2_pane_ParamLimits

0xc3d2,	// (0x0000deb0) grid_touch_2_pane

0x46c5,	// (0x000061a3) touch_pane_g1_ParamLimits

0x46c5,	// (0x000061a3) touch_pane_g1

0x4618,	// (0x000060f6) cell_app_pane_cp_wide_ParamLimits

0x4618,	// (0x000060f6) cell_app_pane_cp_wide

0x4629,	// (0x00006107) grid_popup_fast_wide_pane_ParamLimits

0x4629,	// (0x00006107) grid_popup_fast_wide_pane

0x463d,	// (0x0000611b) scroll_pane_cp19_ParamLimits

0x463d,	// (0x0000611b) scroll_pane_cp19

0xe7a2,	// (0x00010280) bg_popup_window_pane_cp20

0x4651,	// (0x0000612f) listscroll_popup_fast_wide_pane

0xc3fe,	// (0x0000dedc) grid_indicator_nsta_pane

0x466b,	// (0x00006149) clock_nsta_pane_g1

0x4674,	// (0x00006152) clock_nsta_pane_t1

0xc40a,	// (0x0000dee8) cell_indicator_nsta_pane_ParamLimits

0xc40a,	// (0x0000dee8) cell_indicator_nsta_pane

0x46c5,	// (0x000061a3) cell_indicator_nsta_pane_g1

0xc425,	// (0x0000df03) cell_indicator_nsta_pane_g2

0x0001,

0xfa80,	// (0x0001155e) cell_indicator_nsta_pane_g

0x46e6,	// (0x000061c4) clock_nsta_pane_cp

0x46ef,	// (0x000061cd) indicator_nsta_pane_cp

0x46f9,	// (0x000061d7) nsta_clock_indic_pane_g1

0xe93b,	// (0x00010419) grid_indicator_pane

0x022a,	// (0x00001d08) scroll_pane_cp29

0x0742,	// (0x00002220) indicator_nsta_pane_cp2_ParamLimits

0x0742,	// (0x00002220) indicator_nsta_pane_cp2

0xe85c,	// (0x0001033a) main_apps_wheel_pane

0x21d1,	// (0x00003caf) form_midp_field_text_pane_ParamLimits

0x2320,	// (0x00003dfe) scroll_bar_cp050_ParamLimits

0x4752,	// (0x00006230) cell_indicator_pane_ParamLimits

0x4752,	// (0x00006230) cell_indicator_pane

0x476a,	// (0x00006248) cell_indicator_pane_g1

0xc432,	// (0x0000df10) grid_wheel_folder_pane_ParamLimits

0xc432,	// (0x0000df10) grid_wheel_folder_pane

0xc440,	// (0x0000df1e) list_wheel_apps_pane_ParamLimits

0xc440,	// (0x0000df1e) list_wheel_apps_pane

0xc44e,	// (0x0000df2c) main_apps_wheel_pane_g1_ParamLimits

0xc44e,	// (0x0000df2c) main_apps_wheel_pane_g1

0xc45e,	// (0x0000df3c) main_apps_wheel_pane_g2_ParamLimits

0xc45e,	// (0x0000df3c) main_apps_wheel_pane_g2

0x0001,

0xfa9c,	// (0x0001157a) main_apps_wheel_pane_g_ParamLimits

0xfa9c,	// (0x0001157a) main_apps_wheel_pane_g

0xc46e,	// (0x0000df4c) main_apps_wheel_pane_t1_ParamLimits

0xc46e,	// (0x0000df4c) main_apps_wheel_pane_t1

0xc486,	// (0x0000df64) list_wheel_apps_pane_g1

0xc48e,	// (0x0000df6c) list_wheel_apps_pane_g2

0xc496,	// (0x0000df74) list_wheel_apps_pane_g3

0xc49e,	// (0x0000df7c) list_wheel_apps_pane_g4

0xc4a6,	// (0x0000df84) list_wheel_apps_pane_g5

0x0004,

0xfaa1,	// (0x0001157f) list_wheel_apps_pane_g

0x0a43,	// (0x00002521) navi_icon_text_pane

0xb7fe,	// (0x0000d2dc) aid_fill_nsta

0xc4c1,	// (0x0000df9f) navi_icon_text_pane_g1

0xc4cd,	// (0x0000dfab) navi_icon_text_pane_t1

0x08d9,	// (0x000023b7) list_set_graphic_pane_t1_ParamLimits

0x08d9,	// (0x000023b7) list_set_graphic_pane_t1

0x2a8d,	// (0x0000456b) popup_midp_note_alarm_window_t6_ParamLimits

0x2a8d,	// (0x0000456b) popup_midp_note_alarm_window_t6

0x2a9f,	// (0x0000457d) popup_midp_note_alarm_window_t7_ParamLimits

0x2a9f,	// (0x0000457d) popup_midp_note_alarm_window_t7

0x2ab1,	// (0x0000458f) popup_midp_note_alarm_window_t8_ParamLimits

0x2ab1,	// (0x0000458f) popup_midp_note_alarm_window_t8

0x2ac3,	// (0x000045a1) popup_midp_note_alarm_window_t9_ParamLimits

0x2ac3,	// (0x000045a1) popup_midp_note_alarm_window_t9

0x2ad5,	// (0x000045b3) popup_midp_note_alarm_window_t10_ParamLimits

0x2ad5,	// (0x000045b3) popup_midp_note_alarm_window_t10

0x2ae7,	// (0x000045c5) popup_midp_note_alarm_window_t11_ParamLimits

0x2ae7,	// (0x000045c5) popup_midp_note_alarm_window_t11

0x2af9,	// (0x000045d7) scroll_pane_cp17_ParamLimits

0x2af9,	// (0x000045d7) scroll_pane_cp17

0x2baf,	// (0x0000468d) volume_small_pane_cp_g1

0x485d,	// (0x0000633b) volume_small_pane_cp_g2

0x4866,	// (0x00006344) volume_small_pane_cp_g3

0x486f,	// (0x0000634d) volume_small_pane_cp_g4

0x4878,	// (0x00006356) volume_small_pane_cp_g5

0x4881,	// (0x0000635f) volume_small_pane_cp_g6

0x488a,	// (0x00006368) volume_small_pane_cp_g7

0x4893,	// (0x00006371) volume_small_pane_cp_g8

0x489c,	// (0x0000637a) volume_small_pane_cp_g9

0x48a5,	// (0x00006383) volume_small_pane_cp_g10

0x0cb0,	// (0x0000278e) midp_ticker_pane_g1_ParamLimits

0x0cbc,	// (0x0000279a) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x0001120c) midp_ticker_pane_g_ParamLimits

0xaf6a,	// (0x0000ca48) midp_ticker_pane_t1_ParamLimits

0xb822,	// (0x0000d300) aid_fill_nsta_2

0x230c,	// (0x00003dea) list_form2_midp_pane

0x372d,	// (0x0000520b) midp_editing_number_pane_ParamLimits

0x373c,	// (0x0000521a) midp_ticker_pane_ParamLimits

0x48ae,	// (0x0000638c) form2_midp_field_pane

0x48d2,	// (0x000063b0) scroll_pane_cp51

0x48f2,	// (0x000063d0) form2_midp_button_pane_ParamLimits

0x48f2,	// (0x000063d0) form2_midp_button_pane

0x4904,	// (0x000063e2) form2_midp_content_pane_ParamLimits

0x4904,	// (0x000063e2) form2_midp_content_pane

0x491e,	// (0x000063fc) form2_midp_field_choice_group_pane

0x4926,	// (0x00006404) form2_midp_field_pane_g1

0x492e,	// (0x0000640c) form2_midp_field_pane_g2

0x4936,	// (0x00006414) form2_midp_field_pane_g3

0x493e,	// (0x0000641c) form2_midp_field_pane_g4

0x0003,

0xfac6,	// (0x000115a4) form2_midp_field_pane_g

0x4946,	// (0x00006424) form2_midp_gauge_slider_pane

0x494e,	// (0x0000642c) form2_midp_gauge_wait_pane

0x4956,	// (0x00006434) form2_midp_image_pane_ParamLimits

0x4956,	// (0x00006434) form2_midp_image_pane

0x4971,	// (0x0000644f) form2_midp_label_pane_ParamLimits

0x4971,	// (0x0000644f) form2_midp_label_pane

0xc4fb,	// (0x0000dfd9) form2_midp_label_pane_cp_ParamLimits

0xc4fb,	// (0x0000dfd9) form2_midp_label_pane_cp

0x49b1,	// (0x0000648f) form2_midp_string_pane_ParamLimits

0x49b1,	// (0x0000648f) form2_midp_string_pane

0xc51c,	// (0x0000dffa) form2_midp_text_pane_ParamLimits

0xc51c,	// (0x0000dffa) form2_midp_text_pane

0x49e4,	// (0x000064c2) form2_midp_time_pane

0x49f4,	// (0x000064d2) input_focus_pane_cp51_ParamLimits

0x49f4,	// (0x000064d2) input_focus_pane_cp51

0x4a0c,	// (0x000064ea) form2_midp_label_pane_t1_ParamLimits

0x4a0c,	// (0x000064ea) form2_midp_label_pane_t1

0xc53d,	// (0x0000e01b) form2_mdip_text_pane_t1_ParamLimits

0xc53d,	// (0x0000e01b) form2_mdip_text_pane_t1

0x4a71,	// (0x0000654f) form2_midp_time_pane_t1

0x4a8c,	// (0x0000656a) form2_midp_gauge_slider_pane_t1

0xc559,	// (0x0000e037) form2_midp_gauge_slider_pane_t2

0xc56b,	// (0x0000e049) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacf,	// (0x000115ad) form2_midp_gauge_slider_pane_t

0x4ac2,	// (0x000065a0) form2_midp_slider_pane

0x4ace,	// (0x000065ac) form2_midp_gauge_wait_pane_t1

0x4adc,	// (0x000065ba) form2_midp_wait_pane_ParamLimits

0x4adc,	// (0x000065ba) form2_midp_wait_pane

0x2008,	// (0x00003ae6) list_single_2graphic_pane_cp4_ParamLimits

0x2008,	// (0x00003ae6) list_single_2graphic_pane_cp4

0xbcce,	// (0x0000d7ac) list_single_midp_graphic_pane_cp_ParamLimits

0xbcce,	// (0x0000d7ac) list_single_midp_graphic_pane_cp

0xe7a2,	// (0x00010280) list_highlight_pane_cp20

0x4b20,	// (0x000065fe) list_single_2graphic_pane_g1_cp4

0x3cf5,	// (0x000057d3) list_single_2graphic_pane_g2_cp4

0x4b28,	// (0x00006606) list_single_2graphic_pane_t1_cp4

0xe85c,	// (0x0001033a) list_highlight_pane_cp21

0x4b37,	// (0x00006615) list_single_midp_graphic_pane_g4_cp

0x4b46,	// (0x00006624) list_single_midp_graphic_pane_t1_cp

0xc57d,	// (0x0000e05b) form2_mdip_string_pane_t1_ParamLimits

0xc57d,	// (0x0000e05b) form2_mdip_string_pane_t1

0xe7a2,	// (0x00010280) bg_wml_button_pane_cp2

0xe629,	// (0x00010107) form2_midp_image_pane_g1

0xeef4,	// (0x000109d2) list_double_large_graphic_pane_g5_ParamLimits

0xeef4,	// (0x000109d2) list_double_large_graphic_pane_g5

0xaec6,	// (0x0000c9a4) midp_form_pane_ParamLimits

0xe85c,	// (0x0001033a) main_apps_wheel_pane_ParamLimits

0xb516,	// (0x0000cff4) popup_preview_window_ParamLimits

0xb516,	// (0x0000cff4) popup_preview_window

0x170b,	// (0x000031e9) popup_touch_info_window_ParamLimits

0x170b,	// (0x000031e9) popup_touch_info_window

0x172d,	// (0x0000320b) popup_touch_menu_window_ParamLimits

0x172d,	// (0x0000320b) popup_touch_menu_window

0xe61f,	// (0x000100fd) bg_popup_sub_pane_cp6

0x4bf7,	// (0x000066d5) list_touch_menu_pane

0x4bff,	// (0x000066dd) list_single_touch_menu_pane_ParamLimits

0x4bff,	// (0x000066dd) list_single_touch_menu_pane

0x4c17,	// (0x000066f5) list_single_touch_menu_pane_t1

0xe85c,	// (0x0001033a) bg_popup_sub_pane_cp7_ParamLimits

0xe85c,	// (0x0001033a) bg_popup_sub_pane_cp7

0x4c25,	// (0x00006703) heading_sub_pane

0x4c2d,	// (0x0000670b) list_touch_info_pane_ParamLimits

0x4c2d,	// (0x0000670b) list_touch_info_pane

0x4c3c,	// (0x0000671a) list_single_touch_info_pane_ParamLimits

0x4c3c,	// (0x0000671a) list_single_touch_info_pane

0x4c4e,	// (0x0000672c) list_single_touch_info_pane_t1

0x4c5c,	// (0x0000673a) list_single_touch_info_pane_t2

0x0001,

0xfadd,	// (0x000115bb) list_single_touch_info_pane_t

0x0bd2,	// (0x000026b0) bg_popup_heading_pane_cp

0x4c6a,	// (0x00006748) heading_sub_pane_t1

0x1ec1,	// (0x0000399f) bg_popup_preview_window_pane_cp_ParamLimits

0x1ec1,	// (0x0000399f) bg_popup_preview_window_pane_cp

0x4c25,	// (0x00006703) heading_preview_pane

0x4c2d,	// (0x0000670b) list_preview_pane_ParamLimits

0x4c2d,	// (0x0000670b) list_preview_pane

0x4c78,	// (0x00006756) popup_preview_window_g1

0x4c3c,	// (0x0000671a) list_single_preview_pane_ParamLimits

0x4c3c,	// (0x0000671a) list_single_preview_pane

0x4c80,	// (0x0000675e) list_single_preview_pane_g1

0x4c88,	// (0x00006766) list_single_preview_pane_t1

0x4c4e,	// (0x0000672c) list_single_preview_pane_t2

0x0001,

0xfae2,	// (0x000115c0) list_single_preview_pane_t

0x4c96,	// (0x00006774) bg_popup_heading_pane_cp2_ParamLimits

0x4c96,	// (0x00006774) bg_popup_heading_pane_cp2

0x4cac,	// (0x0000678a) heading_preview_pane_g1

0x4cb4,	// (0x00006792) heading_preview_pane_t1_ParamLimits

0x4cb4,	// (0x00006792) heading_preview_pane_t1

0xe952,	// (0x00010430) soft_indicator_pane_t1_ParamLimits

0xeeb4,	// (0x00010992) scroll_pane_ParamLimits

0x0126,	// (0x00001c04) scroll_sc2_left_pane

0x012f,	// (0x00001c0d) scroll_sc2_right_pane

0x014e,	// (0x00001c2c) scroll_bg_pane_g1_ParamLimits

0x0163,	// (0x00001c41) scroll_bg_pane_g2_ParamLimits

0x017b,	// (0x00001c59) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00011197) scroll_bg_pane_g_ParamLimits

0x014e,	// (0x00001c2c) scroll_handle_pane_g1_ParamLimits

0x019d,	// (0x00001c7b) scroll_handle_pane_g2_ParamLimits

0x017b,	// (0x00001c59) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x0001119e) scroll_handle_pane_g_ParamLimits

0x1169,	// (0x00002c47) popup_choice_list_window_ParamLimits

0x1169,	// (0x00002c47) popup_choice_list_window

0x1c2a,	// (0x00003708) choice_list_pane

0x1cf2,	// (0x000037d0) cell_toolbar_pane_t1

0x1d1a,	// (0x000037f8) toolbar_button_pane_ParamLimits

0x312f,	// (0x00004c0d) ai_gene_pane_1_t2_ParamLimits

0x312f,	// (0x00004c0d) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x000113ba) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x000113ba) ai_gene_pane_1_t

0x4cd1,	// (0x000067af) scroll_sc2_left_pane_g1

0x4cd1,	// (0x000067af) scroll_sc2_right_pane_g1

0x1103,	// (0x00002be1) bg_popup_sub_pane_cp10

0x4cdb,	// (0x000067b9) list_choice_list_pane

0x4cf4,	// (0x000067d2) list_single_choice_list_pane_ParamLimits

0x4cf4,	// (0x000067d2) list_single_choice_list_pane

0x4d0c,	// (0x000067ea) list_single_choice_list_pane_g1

0xf1c7,	// (0x00010ca5) list_single_choice_list_pane_t1_ParamLimits

0xf1c7,	// (0x00010ca5) list_single_choice_list_pane_t1

0x4d14,	// (0x000067f2) choice_list_pane_g1

0x4d1c,	// (0x000067fa) choice_list_pane_t1

0xe61f,	// (0x000100fd) input_focus_pane_cp11

0xf395,	// (0x00010e73) title_pane_stacon_g2_ParamLimits

0xf395,	// (0x00010e73) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x0001117d) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001117d) title_pane_stacon_g

0x0bd2,	// (0x000026b0) cursor_press_pane

0xb18d,	// (0x0000cc6b) popup_fep_hwr_window_ParamLimits

0xb18d,	// (0x0000cc6b) popup_fep_hwr_window

0x12ad,	// (0x00002d8b) popup_fep_vkb_window_ParamLimits

0x12ad,	// (0x00002d8b) popup_fep_vkb_window

0x4d2a,	// (0x00006808) cursor_press_pane_g1

0x0002,

0xfb0b,	// (0x000115e9) fep_vkb_side_pane_g_ParamLimits

0x4d6b,	// (0x00006849) fep_hwr_candidate_pane_ParamLimits

0x4d6b,	// (0x00006849) fep_hwr_candidate_pane

0x4d95,	// (0x00006873) fep_hwr_side_pane_ParamLimits

0x4d95,	// (0x00006873) fep_hwr_side_pane

0x4db7,	// (0x00006895) fep_hwr_top_pane_ParamLimits

0x4db7,	// (0x00006895) fep_hwr_top_pane

0x4dcf,	// (0x000068ad) fep_hwr_write_pane_ParamLimits

0x4dcf,	// (0x000068ad) fep_hwr_write_pane

0xfb0b,	// (0x000115e9) fep_vkb_side_pane_g

0x4e09,	// (0x000068e7) fep_hwr_top_pane_g1

0x4e1b,	// (0x000068f9) fep_hwr_top_pane_g2

0x4e2d,	// (0x0000690b) fep_hwr_top_pane_g3

0x0002,

0xfae7,	// (0x000115c5) fep_hwr_top_pane_g

0x4e42,	// (0x00006920) fep_hwr_top_text_pane

0x02f2,	// (0x00001dd0) fep_hwr_top_text_pane_g1

0x4f1e,	// (0x000069fc) fep_hwr_top_text_pane_t1

0x4f7e,	// (0x00006a5c) fep_hwr_candidate_pane_g1

0x51ef,	// (0x00006ccd) fep_vkb_keypad_pane_g3_ParamLimits

0x51ef,	// (0x00006ccd) fep_vkb_keypad_pane_g3

0x521b,	// (0x00006cf9) fep_vkb_keypad_pane_g4_ParamLimits

0x521b,	// (0x00006cf9) fep_vkb_keypad_pane_g4

0x5292,	// (0x00006d70) fep_vkb_bottom_pane_g2_ParamLimits

0x5292,	// (0x00006d70) fep_vkb_bottom_pane_g2

0x0001,

0xfb12,	// (0x000115f0) fep_vkb_bottom_pane_g_ParamLimits

0xfb12,	// (0x000115f0) fep_vkb_bottom_pane_g

0x4cd1,	// (0x000067af) cell_vkb_side_pane_g2

0x0001,

0xfb1c,	// (0x000115fa) cell_vkb_side_pane_g

0x531d,	// (0x00006dfb) cell_vkb_side_pane_t1

0x532b,	// (0x00006e09) cell_vkb_side_pane_t1_copy1

0x4cd1,	// (0x000067af) bg_fep_vkb_candidate_pane_g2

0x546f,	// (0x00006f4d) cell_vkb_candidate_pane_ParamLimits

0x4fb2,	// (0x00006a90) aid_size_cell_vkb_ParamLimits

0x4fb2,	// (0x00006a90) aid_size_cell_vkb

0x546f,	// (0x00006f4d) cell_vkb_candidate_pane

0x54a9,	// (0x00006f87) bg_popup_fep_shadow_pane_g1

0xc660,	// (0x0000e13e) fep_vkb_bottom_pane_ParamLimits

0xc660,	// (0x0000e13e) fep_vkb_bottom_pane

0x5081,	// (0x00006b5f) fep_vkb_candidate_pane_ParamLimits

0x5081,	// (0x00006b5f) fep_vkb_candidate_pane

0xc68c,	// (0x0000e16a) fep_vkb_keypad_pane_ParamLimits

0xc68c,	// (0x0000e16a) fep_vkb_keypad_pane

0xc6b3,	// (0x0000e191) fep_vkb_side_pane_ParamLimits

0xc6b3,	// (0x0000e191) fep_vkb_side_pane

0xc6ef,	// (0x0000e1cd) fep_vkb_top_pane_ParamLimits

0xc6ef,	// (0x0000e1cd) fep_vkb_top_pane

0x5148,	// (0x00006c26) fep_vkb_top_pane_g1_ParamLimits

0x5148,	// (0x00006c26) fep_vkb_top_pane_g1

0x5157,	// (0x00006c35) fep_vkb_top_pane_g2_ParamLimits

0x5157,	// (0x00006c35) fep_vkb_top_pane_g2

0x5166,	// (0x00006c44) fep_vkb_top_pane_g3_ParamLimits

0x5166,	// (0x00006c44) fep_vkb_top_pane_g3

0x0003,

0xfb02,	// (0x000115e0) fep_vkb_top_pane_g_ParamLimits

0xfb02,	// (0x000115e0) fep_vkb_top_pane_g

0x5184,	// (0x00006c62) fep_vkb_top_text_pane_ParamLimits

0x5184,	// (0x00006c62) fep_vkb_top_text_pane

0xc72b,	// (0x0000e209) fep_vkb_side_pane_g1_ParamLimits

0xc72b,	// (0x0000e209) fep_vkb_side_pane_g1

0x51de,	// (0x00006cbc) grid_vkb_side_pane_ParamLimits

0x51de,	// (0x00006cbc) grid_vkb_side_pane

0x54b1,	// (0x00006f8f) bg_popup_fep_shadow_pane_g2

0x54ba,	// (0x00006f98) bg_popup_fep_shadow_pane_g3

0x54c2,	// (0x00006fa0) bg_popup_fep_shadow_pane_g4

0x54cb,	// (0x00006fa9) bg_popup_fep_shadow_pane_g5

0x54d5,	// (0x00006fb3) bg_popup_fep_shadow_pane_g6

0x54dd,	// (0x00006fbb) bg_popup_fep_shadow_pane_g7

0xf0af,	// (0x00010b8d) bg_popup_fep_shadow_pane_g8

0x523d,	// (0x00006d1b) grid_vkb_keypad_number_pane_ParamLimits

0x523d,	// (0x00006d1b) grid_vkb_keypad_number_pane

0x5251,	// (0x00006d2f) grid_vkb_keypad_pane_ParamLimits

0x5251,	// (0x00006d2f) grid_vkb_keypad_pane

0x5277,	// (0x00006d55) fep_vkb_bottom_pane_g1_ParamLimits

0x5277,	// (0x00006d55) fep_vkb_bottom_pane_g1

0x52a0,	// (0x00006d7e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x52a0,	// (0x00006d7e) grid_vkb_keypad_bottom_left_pane

0x52b5,	// (0x00006d93) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x52b5,	// (0x00006d93) grid_vkb_keypad_bottom_right_pane

0x52ca,	// (0x00006da8) fep_vkb_top_text_pane_g1

0xc772,	// (0x0000e250) fep_vkb_top_text_pane_t1

0xc784,	// (0x0000e262) cell_vkb_side_pane_ParamLimits

0xc784,	// (0x0000e262) cell_vkb_side_pane

0x4cd1,	// (0x000067af) cell_vkb_side_pane_g1

0x5339,	// (0x00006e17) cell_vkb_keypad_pane_ParamLimits

0x5339,	// (0x00006e17) cell_vkb_keypad_pane

0x53c6,	// (0x00006ea4) cell_vkb_keypad_pane_g1

0x0008,

0xfb2f,	// (0x0001160d) bg_popup_fep_shadow_pane_g

0x4cd1,	// (0x000067af) cell_hwr_side_pane_g1

0x4cd1,	// (0x000067af) cell_hwr_side_pane_g2

0x53d0,	// (0x00006eae) cell_vkb_keypad_pane_t1

0xc79a,	// (0x0000e278) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc79a,	// (0x0000e278) cell_vkb_keypad_bottom_left_pane

0xc7af,	// (0x0000e28d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7af,	// (0x0000e28d) cell_vkb_keypad_bottom_right_pane

0x4cd1,	// (0x000067af) cell_vkb_keypad_bottom_left_pane_g1

0x4cd1,	// (0x000067af) cell_vkb_keypad_bottom_right_pane_g1

0x5434,	// (0x00006f12) cell_vkb_keypad_number_pane_ParamLimits

0x5434,	// (0x00006f12) cell_vkb_keypad_number_pane

0x5453,	// (0x00006f31) cell_vkb_keypad_number_pane_g1

0x545d,	// (0x00006f3b) cell_vkb_keypad_number_pane_g2

0x5466,	// (0x00006f44) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb21,	// (0x000115ff) cell_vkb_keypad_number_pane_g

0x53d0,	// (0x00006eae) cell_vkb_keypad_number_pane_t1

0x5490,	// (0x00006f6e) fep_vkb_candidate_pane_g1

0x0001,

0xfb1c,	// (0x000115fa) cell_hwr_side_pane_g

0x54ef,	// (0x00006fcd) cell_hwr_side_pane_t1

0x54fd,	// (0x00006fdb) cell_hwr_side_pane_t1_copy1

0x5176,	// (0x00006c54) cell_hwr_candidate_pane_g1

0x554d,	// (0x0000702b) cell_hwr_candidate_pane_t1

0x4cd1,	// (0x000067af) cell_vkb_candidate_pane_g2

0x55a1,	// (0x0000707f) cell_vkb_candidate_pane_t1

0x4d32,	// (0x00006810) bg_popup_fep_shadow_pane_ParamLimits

0x4d32,	// (0x00006810) bg_popup_fep_shadow_pane

0x4de9,	// (0x000068c7) bg_fep_hwr_top_pane_g4

0x4e57,	// (0x00006935) bg_hwr_side_pane_g1_ParamLimits

0x4e57,	// (0x00006935) bg_hwr_side_pane_g1

0xc619,	// (0x0000e0f7) cell_hwr_side_pane_ParamLimits

0xc619,	// (0x0000e0f7) cell_hwr_side_pane

0x4ec9,	// (0x000069a7) fep_hwr_write_pane_g1_ParamLimits

0x4ec9,	// (0x000069a7) fep_hwr_write_pane_g1

0x4ed6,	// (0x000069b4) fep_hwr_write_pane_g2_ParamLimits

0x4ed6,	// (0x000069b4) fep_hwr_write_pane_g2

0x4ee3,	// (0x000069c1) fep_hwr_write_pane_g3_ParamLimits

0x4ee3,	// (0x000069c1) fep_hwr_write_pane_g3

0xc639,	// (0x0000e117) fep_hwr_write_pane_g4_ParamLimits

0xc639,	// (0x0000e117) fep_hwr_write_pane_g4

0x0005,

0xfaee,	// (0x000115cc) fep_hwr_write_pane_g_ParamLimits

0xfaee,	// (0x000115cc) fep_hwr_write_pane_g

0x4de9,	// (0x000068c7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x4de9,	// (0x000068c7) bg_fep_hwr_candidate_pane_g2

0x4f2c,	// (0x00006a0a) cell_hwr_candidate_pane_ParamLimits

0x4f2c,	// (0x00006a0a) cell_hwr_candidate_pane

0x4f7e,	// (0x00006a5c) fep_hwr_candidate_pane_g1_ParamLimits

0x4fe0,	// (0x00006abe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4fe0,	// (0x00006abe) bg_popup_fep_shadow_pane_cp2

0x5176,	// (0x00006c54) fep_vkb_top_pane_g4_ParamLimits

0x5176,	// (0x00006c54) fep_vkb_top_pane_g4

0x51bc,	// (0x00006c9a) fep_vkb_side_pane_g2_ParamLimits

0x51bc,	// (0x00006c9a) fep_vkb_side_pane_g2

0xa942,	// (0x0000c420) list_setting_pane_t4_ParamLimits

0xa942,	// (0x0000c420) list_setting_pane_t4

0xa9be,	// (0x0000c49c) list_setting_number_pane_t5_ParamLimits

0xa9be,	// (0x0000c49c) list_setting_number_pane_t5

0x0348,	// (0x00001e26) list_double_heading_pane_cp2_ParamLimits

0x0348,	// (0x00001e26) list_double_heading_pane_cp2

0x55af,	// (0x0000708d) list_double_heading_pane_g1_cp2_ParamLimits

0x55af,	// (0x0000708d) list_double_heading_pane_g1_cp2

0x55bb,	// (0x00007099) list_double_heading_pane_g2_cp2_ParamLimits

0x55bb,	// (0x00007099) list_double_heading_pane_g2_cp2

0x55cf,	// (0x000070ad) list_double_heading_pane_t1_cp2_ParamLimits

0x55cf,	// (0x000070ad) list_double_heading_pane_t1_cp2

0x55e5,	// (0x000070c3) list_double_heading_pane_t2_cp2_ParamLimits

0x55e5,	// (0x000070c3) list_double_heading_pane_t2_cp2

0xe617,	// (0x000100f5) aid_value_unit2

0xe7f6,	// (0x000102d4) popup_preview_fixed_window

0xea32,	// (0x00010510) bg_popup_preview_window_pane_cp02

0x55f7,	// (0x000070d5) list_preview_fixed_pane

0x563d,	// (0x0000711b) list_empty_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_empty_pane_fp

0x563d,	// (0x0000711b) list_single_cale_day_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_single_cale_day_pane_fp

0x563d,	// (0x0000711b) list_single_graphic_heading_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_single_graphic_heading_pane_fp

0x563d,	// (0x0000711b) list_single_graphic_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_single_graphic_pane_fp

0x563d,	// (0x0000711b) list_single_heading_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_single_heading_pane_fp

0x563d,	// (0x0000711b) list_single_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_single_pane_fp

0x5656,	// (0x00007134) list_single_pane_fp_g1_ParamLimits

0x5656,	// (0x00007134) list_single_pane_fp_g1

0xef09,	// (0x000109e7) list_single_pane_fp_g2_ParamLimits

0xef09,	// (0x000109e7) list_single_pane_fp_g2

0x5662,	// (0x00007140) list_single_pane_fp_g3_ParamLimits

0x5662,	// (0x00007140) list_single_pane_fp_g3

0x5676,	// (0x00007154) list_single_pane_fp_g4_ParamLimits

0x5676,	// (0x00007154) list_single_pane_fp_g4

0x0003,

0xfb50,	// (0x0001162e) list_single_pane_fp_g_ParamLimits

0xfb50,	// (0x0001162e) list_single_pane_fp_g

0x5682,	// (0x00007160) list_single_pane_fp_t1_ParamLimits

0x5682,	// (0x00007160) list_single_pane_fp_t1

0x5699,	// (0x00007177) list_single_graphic_pane_fp_g1_ParamLimits

0x5699,	// (0x00007177) list_single_graphic_pane_fp_g1

0x5656,	// (0x00007134) list_single_graphic_pane_fp_g2_ParamLimits

0x5656,	// (0x00007134) list_single_graphic_pane_fp_g2

0xef09,	// (0x000109e7) list_single_graphic_pane_fp_g3_ParamLimits

0xef09,	// (0x000109e7) list_single_graphic_pane_fp_g3

0x5662,	// (0x00007140) list_single_graphic_pane_fp_g4_ParamLimits

0x5662,	// (0x00007140) list_single_graphic_pane_fp_g4

0x5676,	// (0x00007154) list_single_graphic_pane_fp_g5_ParamLimits

0x5676,	// (0x00007154) list_single_graphic_pane_fp_g5

0x0004,

0xfb59,	// (0x00011637) list_single_graphic_pane_fp_g_ParamLimits

0xfb59,	// (0x00011637) list_single_graphic_pane_fp_g

0x56a5,	// (0x00007183) list_single_graphic_pane_fp_t1_ParamLimits

0x56a5,	// (0x00007183) list_single_graphic_pane_fp_t1

0x5699,	// (0x00007177) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5699,	// (0x00007177) list_single_graphic_heading_pane_fp_g1

0x5656,	// (0x00007134) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5656,	// (0x00007134) list_single_graphic_heading_pane_fp_g2

0xef09,	// (0x000109e7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xef09,	// (0x000109e7) list_single_graphic_heading_pane_fp_g3

0x5662,	// (0x00007140) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5662,	// (0x00007140) list_single_graphic_heading_pane_fp_g4

0x5676,	// (0x00007154) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5676,	// (0x00007154) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb59,	// (0x00011637) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb59,	// (0x00011637) list_single_graphic_heading_pane_fp_g

0x56bb,	// (0x00007199) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x56bb,	// (0x00007199) list_single_graphic_heading_pane_fp_t1

0x56d1,	// (0x000071af) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x56d1,	// (0x000071af) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb64,	// (0x00011642) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb64,	// (0x00011642) list_single_graphic_heading_pane_fp_t

0x56e3,	// (0x000071c1) list_single_cale_day_pane_fp_g1_ParamLimits

0x56e3,	// (0x000071c1) list_single_cale_day_pane_fp_g1

0x571b,	// (0x000071f9) list_single_cale_day_pane_fp_g2_ParamLimits

0x571b,	// (0x000071f9) list_single_cale_day_pane_fp_g2

0x5727,	// (0x00007205) list_single_cale_day_pane_fp_g3_ParamLimits

0x5727,	// (0x00007205) list_single_cale_day_pane_fp_g3

0x574f,	// (0x0000722d) list_single_cale_day_pane_fp_g4_ParamLimits

0x574f,	// (0x0000722d) list_single_cale_day_pane_fp_g4

0x5773,	// (0x00007251) list_single_cale_day_pane_fp_g5_ParamLimits

0x5773,	// (0x00007251) list_single_cale_day_pane_fp_g5

0x0004,

0xfb69,	// (0x00011647) list_single_cale_day_pane_fp_g_ParamLimits

0xfb69,	// (0x00011647) list_single_cale_day_pane_fp_g

0x5797,	// (0x00007275) list_single_cale_day_pane_fp_t1_ParamLimits

0x5797,	// (0x00007275) list_single_cale_day_pane_fp_t1

0x57bd,	// (0x0000729b) list_single_cale_day_pane_fp_t2_ParamLimits

0x57bd,	// (0x0000729b) list_single_cale_day_pane_fp_t2

0x57d6,	// (0x000072b4) list_single_cale_day_pane_fp_t3_ParamLimits

0x57d6,	// (0x000072b4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb74,	// (0x00011652) list_single_cale_day_pane_fp_t_ParamLimits

0xfb74,	// (0x00011652) list_single_cale_day_pane_fp_t

0x5656,	// (0x00007134) list_empty_pane_fp_g1_ParamLimits

0x5656,	// (0x00007134) list_empty_pane_fp_g1

0x57ef,	// (0x000072cd) list_empty_pane_fp_t1

0x57fd,	// (0x000072db) list_empty_pane_fp_t2

0x0001,

0xfb7b,	// (0x00011659) list_empty_pane_fp_t

0x5656,	// (0x00007134) list_single_heading_pane_fp_g1_ParamLimits

0x5656,	// (0x00007134) list_single_heading_pane_fp_g1

0xef09,	// (0x000109e7) list_single_heading_pane_fp_g2_ParamLimits

0xef09,	// (0x000109e7) list_single_heading_pane_fp_g2

0x5662,	// (0x00007140) list_single_heading_pane_fp_g3_ParamLimits

0x5662,	// (0x00007140) list_single_heading_pane_fp_g3

0x0002,

0xfb80,	// (0x0001165e) list_single_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0001165e) list_single_heading_pane_fp_g

0x580b,	// (0x000072e9) list_single_heading_pane_fp_t1_ParamLimits

0x580b,	// (0x000072e9) list_single_heading_pane_fp_t1

0x581d,	// (0x000072fb) list_single_heading_pane_fp_t2_ParamLimits

0x581d,	// (0x000072fb) list_single_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x00011665) list_single_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x00011665) list_single_heading_pane_fp_t

0xf1dc,	// (0x00010cba) aid_size_cell_fast

0xea15,	// (0x000104f3) soft_indicator_pane_cp1_t1

0xf219,	// (0x00010cf7) cell_app_pane_cp2_ParamLimits

0xf219,	// (0x00010cf7) cell_app_pane_cp2

0x4d54,	// (0x00006832) fep_hwr_candidate_drop_down_list_pane

0x4f98,	// (0x00006a76) fep_hwr_candidate_pane_g3_ParamLimits

0x4f98,	// (0x00006a76) fep_hwr_candidate_pane_g3

0x4fa5,	// (0x00006a83) fep_hwr_candidate_pane_g4_ParamLimits

0x4fa5,	// (0x00006a83) fep_hwr_candidate_pane_g4

0x0002,

0xfafb,	// (0x000115d9) fep_hwr_candidate_pane_g_ParamLimits

0xfafb,	// (0x000115d9) fep_hwr_candidate_pane_g

0x5070,	// (0x00006b4e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5070,	// (0x00006b4e) fep_vkb_candidate_drop_down_list_pane

0x5498,	// (0x00006f76) fep_vkb_candidate_pane_g3

0x54a0,	// (0x00006f7e) fep_vkb_candidate_pane_g4

0x0002,

0xfb28,	// (0x00011606) fep_vkb_candidate_pane_g

0x5176,	// (0x00006c54) cell_hwr_candidate_pane_g1_ParamLimits

0x550b,	// (0x00006fe9) cell_hwr_candidate_pane_g3_ParamLimits

0x550b,	// (0x00006fe9) cell_hwr_candidate_pane_g3

0x552c,	// (0x0000700a) cell_hwr_candidate_pane_g4_ParamLimits

0x552c,	// (0x0000700a) cell_hwr_candidate_pane_g4

0x0002,

0xfb42,	// (0x00011620) cell_hwr_candidate_pane_g_ParamLimits

0xfb42,	// (0x00011620) cell_hwr_candidate_pane_g

0x556b,	// (0x00007049) cell_vkb_candidate_pane_g3_ParamLimits

0x556b,	// (0x00007049) cell_vkb_candidate_pane_g3

0x5586,	// (0x00007064) cell_vkb_candidate_pane_g4_ParamLimits

0x5586,	// (0x00007064) cell_vkb_candidate_pane_g4

0x5833,	// (0x00007311) cell_app_pane_cp2_g1_ParamLimits

0x5833,	// (0x00007311) cell_app_pane_cp2_g1

0x5851,	// (0x0000732f) cell_app_pane_cp2_g2_ParamLimits

0x5851,	// (0x0000732f) cell_app_pane_cp2_g2

0x0001,

0xfb8c,	// (0x0001166a) cell_app_pane_cp2_g_ParamLimits

0xfb8c,	// (0x0001166a) cell_app_pane_cp2_g

0x585d,	// (0x0000733b) cell_app_pane_cp2_t1_ParamLimits

0x585d,	// (0x0000733b) cell_app_pane_cp2_t1

0xefd4,	// (0x00010ab2) grid_highlight_pane_cp1_ParamLimits

0xefd4,	// (0x00010ab2) grid_highlight_pane_cp1

0x586f,	// (0x0000734d) cell_hwr_candidate_pane_cp1_ParamLimits

0x586f,	// (0x0000734d) cell_hwr_candidate_pane_cp1

0x5176,	// (0x00006c54) fep_hwr_candidate_drop_down_list_pane_g1

0x5893,	// (0x00007371) fep_hwr_candidate_drop_down_list_pane_g2

0x58a0,	// (0x0000737e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x0001166f) fep_hwr_candidate_drop_down_list_pane_g

0x58ad,	// (0x0000738b) fep_hwr_candidate_drop_down_list_scroll_pane

0x58b6,	// (0x00007394) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x58b6,	// (0x00007394) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x58c3,	// (0x000073a1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x58c3,	// (0x000073a1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x58d0,	// (0x000073ae) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x58d0,	// (0x000073ae) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x556b,	// (0x00007049) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x556b,	// (0x00007049) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5586,	// (0x00007064) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5586,	// (0x00007064) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x58dd,	// (0x000073bb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x58dd,	// (0x000073bb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x58f8,	// (0x000073d6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x58f8,	// (0x000073d6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5913,	// (0x000073f1) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5913,	// (0x000073f1) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb98,	// (0x00011676) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb98,	// (0x00011676) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x592e,	// (0x0000740c) cell_vkb_candidate_pane_cp1_ParamLimits

0x592e,	// (0x0000740c) cell_vkb_candidate_pane_cp1

0x5176,	// (0x00006c54) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5176,	// (0x00006c54) fep_vkb_candidate_drop_down_list_pane_g1

0x5893,	// (0x00007371) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5893,	// (0x00007371) fep_vkb_candidate_drop_down_list_pane_g2

0x58a0,	// (0x0000737e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x58a0,	// (0x0000737e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x0001166f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb91,	// (0x0001166f) fep_vkb_candidate_drop_down_list_pane_g

0x5954,	// (0x00007432) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5954,	// (0x00007432) fep_vkb_candidate_drop_down_list_scroll_pane

0x5961,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5961,	// (0x0000743f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x596e,	// (0x0000744c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x596e,	// (0x0000744c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x597a,	// (0x00007458) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x597a,	// (0x00007458) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x550b,	// (0x00006fe9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x550b,	// (0x00006fe9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x552c,	// (0x0000700a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x552c,	// (0x0000700a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5986,	// (0x00007464) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5986,	// (0x00007464) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x59a7,	// (0x00007485) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x59a7,	// (0x00007485) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x59c8,	// (0x000074a6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x59c8,	// (0x000074a6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x00011687) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x00011687) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa23b,	// (0x0000bd19) title_pane_g1_ParamLimits

0xa24e,	// (0x0000bd2c) title_pane_g2_ParamLimits

0xf529,	// (0x00011007) title_pane_g_ParamLimits

0x02e2,	// (0x00001dc0) aid_call2_pane

0x02ea,	// (0x00001dc8) aid_call_pane

0x02f2,	// (0x00001dd0) popup_clock_analogue_window_g1

0x02f2,	// (0x00001dd0) popup_clock_analogue_window_g2

0x02fa,	// (0x00001dd8) popup_clock_analogue_window_g3

0x0303,	// (0x00001de1) popup_clock_analogue_window_g4

0xe629,	// (0x00010107) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x000111ac) popup_clock_analogue_window_g

0x030b,	// (0x00001de9) popup_clock_analogue_window_t1

0x03b8,	// (0x00001e96) clock_digital_number_pane_ParamLimits

0x03b8,	// (0x00001e96) clock_digital_number_pane

0x03c4,	// (0x00001ea2) clock_digital_number_pane_cp02_ParamLimits

0x03c4,	// (0x00001ea2) clock_digital_number_pane_cp02

0x03d0,	// (0x00001eae) clock_digital_number_pane_cp03_ParamLimits

0x03d0,	// (0x00001eae) clock_digital_number_pane_cp03

0x03dc,	// (0x00001eba) clock_digital_number_pane_cp04_ParamLimits

0x03dc,	// (0x00001eba) clock_digital_number_pane_cp04

0x03e8,	// (0x00001ec6) clock_digital_separator_pane_ParamLimits

0x03e8,	// (0x00001ec6) clock_digital_separator_pane

0x03f4,	// (0x00001ed2) popup_clock_digital_window_t1_ParamLimits

0x03f4,	// (0x00001ed2) popup_clock_digital_window_t1

0xe629,	// (0x00010107) clock_digital_number_pane_g1

0xe629,	// (0x00010107) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x000111b7) clock_digital_number_pane_g

0xe629,	// (0x00010107) clock_digital_separator_pane_g1

0xe629,	// (0x00010107) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x000111b7) clock_digital_separator_pane_g

0xb7fe,	// (0x0000d2dc) aid_fill_nsta_ParamLimits

0xb936,	// (0x0000d414) indicator_nsta_pane_ParamLimits

0x1a57,	// (0x00003535) popup_clock_analogue_window

0x1a57,	// (0x00003535) popup_clock_digital_window

0xc3fe,	// (0x0000dedc) grid_indicator_nsta_pane_ParamLimits

0x4682,	// (0x00006160) clock_nsta_pane_t2

0x0001,

0xfa7b,	// (0x00011559) clock_nsta_pane_t

0x00cb,	// (0x00001ba9) aid_size_max_handle

0xacbd,	// (0x0000c79b) aid_size_min_handle

0x0bd2,	// (0x000026b0) editor_scroll_pane

0x59e3,	// (0x000074c1) ex_editor_pane

0xf1a2,	// (0x00010c80) scroll_pane_cp13

0xeee0,	// (0x000109be) scroll_pane_cp14

0x0340,	// (0x00001e1e) scroll_pane_cp36

0xad4a,	// (0x0000c828) list_single_graphic_hl_pane_cp2_ParamLimits

0xad4a,	// (0x0000c828) list_single_graphic_hl_pane_cp2

0xc28b,	// (0x0000dd69) list_single_graphic_hl_pane_ParamLimits

0xc28b,	// (0x0000dd69) list_single_graphic_hl_pane

0x59eb,	// (0x000074c9) aid_size_min_hl_cp1

0x59f4,	// (0x000074d2) list_highlight_pane_cp34_ParamLimits

0x59f4,	// (0x000074d2) list_highlight_pane_cp34

0x5a05,	// (0x000074e3) list_single_graphic_hl_pane_g1_ParamLimits

0x5a05,	// (0x000074e3) list_single_graphic_hl_pane_g1

0xc7ca,	// (0x0000e2a8) list_single_graphic_hl_pane_g2_ParamLimits

0xc7ca,	// (0x0000e2a8) list_single_graphic_hl_pane_g2

0xc7ca,	// (0x0000e2a8) list_single_graphic_hl_pane_g3_ParamLimits

0xc7ca,	// (0x0000e2a8) list_single_graphic_hl_pane_g3

0x0b09,	// (0x000025e7) list_single_graphic_hl_pane_g4_ParamLimits

0x0b09,	// (0x000025e7) list_single_graphic_hl_pane_g4

0xc7d6,	// (0x0000e2b4) list_single_graphic_hl_pane_g5_ParamLimits

0xc7d6,	// (0x0000e2b4) list_single_graphic_hl_pane_g5

0x0004,

0xfbba,	// (0x00011698) list_single_graphic_hl_pane_g_ParamLimits

0xfbba,	// (0x00011698) list_single_graphic_hl_pane_g

0x2d0a,	// (0x000047e8) list_single_graphic_hl_pane_t1_ParamLimits

0x2d0a,	// (0x000047e8) list_single_graphic_hl_pane_t1

0x5a48,	// (0x00007526) aid_size_min_hl_cp2

0x5a51,	// (0x0000752f) list_highlight_pane_cp34_cp2_ParamLimits

0x5a51,	// (0x0000752f) list_highlight_pane_cp34_cp2

0x5a05,	// (0x000074e3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5a05,	// (0x000074e3) list_single_graphic_hl_pane_g1_cp2

0x5a5e,	// (0x0000753c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5a5e,	// (0x0000753c) list_single_graphic_hl_pane_g2_cp2

0x5a6a,	// (0x00007548) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5a6a,	// (0x00007548) list_single_graphic_hl_pane_g3_cp2

0x5a78,	// (0x00007556) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5a78,	// (0x00007556) list_single_graphic_hl_pane_g4_cp2

0x5a84,	// (0x00007562) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5a84,	// (0x00007562) list_single_graphic_hl_pane_g5_cp2

0xafbe,	// (0x0000ca9c) control_pane_g4_ParamLimits

0xafbe,	// (0x0000ca9c) control_pane_g4

0x1103,	// (0x00002be1) bg_popup_sub_pane_cp10_ParamLimits

0x4cdb,	// (0x000067b9) list_choice_list_pane_ParamLimits

0x4cea,	// (0x000067c8) scroll_pane_cp23

0xea32,	// (0x00010510) bg_popup_preview_window_pane_cp02_ParamLimits

0x55f7,	// (0x000070d5) list_preview_fixed_pane_ParamLimits

0x560d,	// (0x000070eb) list_preview_fixed_pane_cp_ParamLimits

0x560d,	// (0x000070eb) list_preview_fixed_pane_cp

0x5619,	// (0x000070f7) popup_preview_fixed_window_g1_ParamLimits

0x5619,	// (0x000070f7) popup_preview_fixed_window_g1

0x5625,	// (0x00007103) popup_preview_fixed_window_g2_ParamLimits

0x5625,	// (0x00007103) popup_preview_fixed_window_g2

0x0002,

0xfb49,	// (0x00011627) popup_preview_fixed_window_g_ParamLimits

0xfb49,	// (0x00011627) popup_preview_fixed_window_g

0xf479,	// (0x00010f57) aid_navi_side_left_pane_ParamLimits

0xf48e,	// (0x00010f6c) aid_navi_side_right_pane_ParamLimits

0xf4a6,	// (0x00010f84) navi_icon_pane_stacon_ParamLimits

0xf4ba,	// (0x00010f98) navi_navi_pane_stacon_ParamLimits

0xf4a6,	// (0x00010f84) navi_text_pane_stacon_ParamLimits

0xe61f,	// (0x000100fd) main_text_info_pane

0x5aae,	// (0x0000758c) listscroll_text_info_pane

0x5ab6,	// (0x00007594) list_text_info_pane_ParamLimits

0x5ab6,	// (0x00007594) list_text_info_pane

0x5ac5,	// (0x000075a3) scroll_pane_cp24_ParamLimits

0x5ac5,	// (0x000075a3) scroll_pane_cp24

0xc7ea,	// (0x0000e2c8) list_text_info_pane_t1_ParamLimits

0xc7ea,	// (0x0000e2c8) list_text_info_pane_t1

0xb0f1,	// (0x0000cbcf) popup_fast_swap2_window_ParamLimits

0xb0f1,	// (0x0000cbcf) popup_fast_swap2_window

0x5b08,	// (0x000075e6) aid_size_cell_fast2

0xe61f,	// (0x000100fd) bg_popup_window_pane_cp17

0x5b12,	// (0x000075f0) heading_pane_cp2

0x5b1a,	// (0x000075f8) listscroll_fast2_pane

0x5b22,	// (0x00007600) grid_fast2_pane

0x5b2c,	// (0x0000760a) listscroll_fast2_pane_g1

0x5b36,	// (0x00007614) listscroll_fast2_pane_g2

0x0001,

0xfbc5,	// (0x000116a3) listscroll_fast2_pane_g

0xf1a2,	// (0x00010c80) scroll_pane_cp26

0x5b40,	// (0x0000761e) cell_fast2_pane_ParamLimits

0x5b40,	// (0x0000761e) cell_fast2_pane

0x5b57,	// (0x00007635) cell_fast2_pane_g1

0x5b60,	// (0x0000763e) cell_fast2_pane_g2

0x5b69,	// (0x00007647) cell_fast2_pane_g3

0x0002,

0xfbca,	// (0x000116a8) cell_fast2_pane_g

0xeca7,	// (0x00010785) grid_highlight_pane_cp9

0xecbc,	// (0x0001079a) main_eswt_pane_ParamLimits

0xecbc,	// (0x0001079a) main_eswt_pane

0x5ada,	// (0x000075b8) list_single_text_info_pane

0x5b71,	// (0x0000764f) eswt_ctrl_button_pane

0x5b71,	// (0x0000764f) eswt_ctrl_canvas_pane

0x5b79,	// (0x00007657) eswt_ctrl_combo_pane

0x5b71,	// (0x0000764f) eswt_ctrl_default_pane

0x5b71,	// (0x0000764f) eswt_ctrl_label_pane

0x5b81,	// (0x0000765f) eswt_ctrl_wait_pane

0x5b89,	// (0x00007667) eswt_shell_pane

0xe61f,	// (0x000100fd) listscroll_eswt_app_pane

0x5ba9,	// (0x00007687) popup_eswt_tasktip_window_ParamLimits

0x5ba9,	// (0x00007687) popup_eswt_tasktip_window

0x1ec1,	// (0x0000399f) bg_popup_window_pane_cp18

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_ParamLimits

0x5bc2,	// (0x000076a0) eswt_control_pane_g1

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_ParamLimits

0x5bcf,	// (0x000076ad) eswt_control_pane_g2

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_ParamLimits

0x5bdc,	// (0x000076ba) eswt_control_pane_g3

0x5be9,	// (0x000076c7) eswt_control_pane_g4_ParamLimits

0x5be9,	// (0x000076c7) eswt_control_pane_g4

0x0003,

0xfbd1,	// (0x000116af) eswt_control_pane_g_ParamLimits

0xfbd1,	// (0x000116af) eswt_control_pane_g

0xefd4,	// (0x00010ab2) bg_button_pane_ParamLimits

0xefd4,	// (0x00010ab2) bg_button_pane

0xecbc,	// (0x0001079a) common_borders_pane_copy2_ParamLimits

0xecbc,	// (0x0001079a) common_borders_pane_copy2

0x5bf6,	// (0x000076d4) control_button_pane_g1_ParamLimits

0x5bf6,	// (0x000076d4) control_button_pane_g1

0x5c02,	// (0x000076e0) control_button_pane_g2_ParamLimits

0x5c02,	// (0x000076e0) control_button_pane_g2

0x5c0e,	// (0x000076ec) control_button_pane_g3_ParamLimits

0x5c0e,	// (0x000076ec) control_button_pane_g3

0x0002,

0xfbda,	// (0x000116b8) control_button_pane_g_ParamLimits

0xfbda,	// (0x000116b8) control_button_pane_g

0x5c22,	// (0x00007700) control_button_pane_t1

0x5c30,	// (0x0000770e) control_button_pane_t2

0x0001,

0xfbe1,	// (0x000116bf) control_button_pane_t

0x1d26,	// (0x00003804) bg_button_pane_g1

0x1d2e,	// (0x0000380c) bg_button_pane_g2

0x1d36,	// (0x00003814) bg_button_pane_g3

0x1d3e,	// (0x0000381c) bg_button_pane_g4

0x1d46,	// (0x00003824) bg_button_pane_g5

0x1d4e,	// (0x0000382c) bg_button_pane_g6

0x1d56,	// (0x00003834) bg_button_pane_g7

0x1d5e,	// (0x0000383c) bg_button_pane_g8

0x1d66,	// (0x00003844) bg_button_pane_g9

0x0008,

0xf830,	// (0x0001130e) bg_button_pane_g

0x4c96,	// (0x00006774) common_borders_pane_ParamLimits

0x4c96,	// (0x00006774) common_borders_pane

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy1_ParamLimits

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy1

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy1_ParamLimits

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy1

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy1_ParamLimits

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy1

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy1_ParamLimits

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy1

0x4cd1,	// (0x000067af) bg_eswt_ctrl_canvas_pane_g1

0x4c96,	// (0x00006774) common_borders_pane_cp2_ParamLimits

0x4c96,	// (0x00006774) common_borders_pane_cp2

0x4c96,	// (0x00006774) common_borders_pane_cp3_ParamLimits

0x4c96,	// (0x00006774) common_borders_pane_cp3

0x5c3e,	// (0x0000771c) separator_horizontal_pane

0x5c46,	// (0x00007724) separator_vertical_pane

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy2_ParamLimits

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy2

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy2_ParamLimits

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy2

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy2_ParamLimits

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy2

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy2_ParamLimits

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy2

0xe61f,	// (0x000100fd) common_borders_pane_cp4

0x5c4f,	// (0x0000772d) separator_horizontal_pane_g1

0x5c58,	// (0x00007736) separator_horizontal_pane_g2

0x5c61,	// (0x0000773f) separator_horizontal_pane_g3

0x0002,

0xfbe6,	// (0x000116c4) separator_horizontal_pane_g

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy3_ParamLimits

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy3

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy3_ParamLimits

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy3

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy3_ParamLimits

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy3

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy3_ParamLimits

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy3

0xe61f,	// (0x000100fd) common_borders_pane_cp5

0x5c6a,	// (0x00007748) separator_vertical_pane_g1

0x5c73,	// (0x00007751) separator_vertical_pane_g2

0x5c7c,	// (0x0000775a) separator_vertical_pane_g3

0x0002,

0xfbed,	// (0x000116cb) separator_vertical_pane_g

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy4_ParamLimits

0x5bc2,	// (0x000076a0) eswt_control_pane_g1_copy4

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy4_ParamLimits

0x5bcf,	// (0x000076ad) eswt_control_pane_g2_copy4

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy4_ParamLimits

0x5bdc,	// (0x000076ba) eswt_control_pane_g3_copy4

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy4_ParamLimits

0x5be9,	// (0x000076c7) eswt_control_pane_g4_copy4

0xc80c,	// (0x0000e2ea) eswt_ctrl_combo_button_pane

0xc814,	// (0x0000e2f2) eswt_ctrl_input_pane

0xc81c,	// (0x0000e2fa) popup_choice_list_window_cp70

0xc824,	// (0x0000e302) eswt_ctrl_input_pane_t1

0xe61f,	// (0x000100fd) input_focus_pane_cp70

0x4c96,	// (0x00006774) bg_button_pane_cp70_ParamLimits

0x4c96,	// (0x00006774) bg_button_pane_cp70

0xc832,	// (0x0000e310) eswt_ctrl_combo_button_pane_g1

0x5cb3,	// (0x00007791) wait_bar_pane_cp70

0x1ec1,	// (0x0000399f) bg_popup_window_pane_cp70_ParamLimits

0x1ec1,	// (0x0000399f) bg_popup_window_pane_cp70

0x5cbb,	// (0x00007799) popup_eswt_tasktip_window_t1

0x5cd1,	// (0x000077af) wait_bar_pane_cp71_ParamLimits

0x5cd1,	// (0x000077af) wait_bar_pane_cp71

0x5cdd,	// (0x000077bb) grid_eswt_app_pane

0x012f,	// (0x00001c0d) scroll_pane_cp70

0xc83a,	// (0x0000e318) cell_eswt_app_pane_ParamLimits

0xc83a,	// (0x0000e318) cell_eswt_app_pane

0xc86c,	// (0x0000e34a) cell_eswt_app_pane_g1_ParamLimits

0xc86c,	// (0x0000e34a) cell_eswt_app_pane_g1

0xc89b,	// (0x0000e379) cell_eswt_app_pane_g2_ParamLimits

0xc89b,	// (0x0000e379) cell_eswt_app_pane_g2

0x0001,

0xfbf4,	// (0x000116d2) cell_eswt_app_pane_g_ParamLimits

0xfbf4,	// (0x000116d2) cell_eswt_app_pane_g

0xc8c4,	// (0x0000e3a2) cell_eswt_app_pane_t1_ParamLimits

0xc8c4,	// (0x0000e3a2) cell_eswt_app_pane_t1

0x5da2,	// (0x00007880) grid_highlight_pane_cp70_ParamLimits

0x5da2,	// (0x00007880) grid_highlight_pane_cp70

0x0a98,	// (0x00002576) set_content_pane_g1

0xafa2,	// (0x0000ca80) status_small_volume_pane

0xc8f6,	// (0x0000e3d4) status_small_volume_pane_g1

0xc8fe,	// (0x0000e3dc) volume_small2_pane

0xc907,	// (0x0000e3e5) volume_small2_pane_g1

0xc910,	// (0x0000e3ee) volume_small2_pane_g2

0xc919,	// (0x0000e3f7) volume_small2_pane_g3

0xc922,	// (0x0000e400) volume_small2_pane_g4

0xc92b,	// (0x0000e409) volume_small2_pane_g5

0xc934,	// (0x0000e412) volume_small2_pane_g6

0xc93d,	// (0x0000e41b) volume_small2_pane_g7

0xc946,	// (0x0000e424) volume_small2_pane_g8

0xc94f,	// (0x0000e42d) volume_small2_pane_g9

0xc958,	// (0x0000e436) volume_small2_pane_g10

0x0009,

0xfbf9,	// (0x000116d7) volume_small2_pane_g

0x52ca,	// (0x00006da8) fep_vkb_top_text_pane_g1_ParamLimits

0xc772,	// (0x0000e250) fep_vkb_top_text_pane_t1_ParamLimits

0x5631,	// (0x0000710f) popup_preview_fixed_window_g3_ParamLimits

0x5631,	// (0x0000710f) popup_preview_fixed_window_g3

0xb791,	// (0x0000d26f) popup_toolbar_trans_pane

0xc0b0,	// (0x0000db8e) aid_height_set_list_ParamLimits

0x3557,	// (0x00005035) aid_size_parent_ParamLimits

0x1103,	// (0x00002be1) list_highlight_pane_cp2_ParamLimits

0x0a98,	// (0x00002576) set_content_pane_g1_ParamLimits

0xc29f,	// (0x0000dd7d) list_single_image_pane_ParamLimits

0xc29f,	// (0x0000dd7d) list_single_image_pane

0xc961,	// (0x0000e43f) aid_size_cell_image_ParamLimits

0xc961,	// (0x0000e43f) aid_size_cell_image

0xc96e,	// (0x0000e44c) grid_single_image_pane_ParamLimits

0xc96e,	// (0x0000e44c) grid_single_image_pane

0xeffa,	// (0x00010ad8) list_single_image_pane_g1_ParamLimits

0xeffa,	// (0x00010ad8) list_single_image_pane_g1

0xf006,	// (0x00010ae4) list_single_image_pane_g2_ParamLimits

0xf006,	// (0x00010ae4) list_single_image_pane_g2

0x0001,

0xfc0e,	// (0x000116ec) list_single_image_pane_g_ParamLimits

0xfc0e,	// (0x000116ec) list_single_image_pane_g

0x5e34,	// (0x00007912) list_single_image_pane_t1_ParamLimits

0x5e34,	// (0x00007912) list_single_image_pane_t1

0xc97c,	// (0x0000e45a) cell_image_list_pane_ParamLimits

0xc97c,	// (0x0000e45a) cell_image_list_pane

0xc992,	// (0x0000e470) cell_image_list_pane_g1

0xc99b,	// (0x0000e479) cell_image_list_pane_g2

0x0001,

0xfc13,	// (0x000116f1) cell_image_list_pane_g

0x5e74,	// (0x00007952) aid_size_cell_tb_trans_pane

0xefd4,	// (0x00010ab2) bg_tb_trans_pane

0x5e86,	// (0x00007964) grid_tb_trans_pane

0x1d26,	// (0x00003804) bg_tb_trans_pane_g1

0x1d2e,	// (0x0000380c) bg_tb_trans_pane_g2

0x1d36,	// (0x00003814) bg_tb_trans_pane_g3

0x1d3e,	// (0x0000381c) bg_tb_trans_pane_g4

0x1d46,	// (0x00003824) bg_tb_trans_pane_g5

0x1d5e,	// (0x0000383c) bg_tb_trans_pane_g6

0x1d66,	// (0x00003844) bg_tb_trans_pane_g7

0x1d4e,	// (0x0000382c) bg_tb_trans_pane_g8

0x1d56,	// (0x00003834) bg_tb_trans_pane_g9

0x0008,

0xfc18,	// (0x000116f6) bg_tb_trans_pane_g

0x5e9a,	// (0x00007978) cell_toolbar_trans_pane_ParamLimits

0x5e9a,	// (0x00007978) cell_toolbar_trans_pane

0x4cd1,	// (0x000067af) cell_toolbar_trans_pane_g1

0xc4df,	// (0x0000dfbd) list_form2_midp_pane_t1

0xc4ed,	// (0x0000dfcb) list_form2_midp_pane_t2

0x0001,

0xfac1,	// (0x0001159f) list_form2_midp_pane_t

0x48d2,	// (0x000063b0) scroll_pane_cp51_ParamLimits

0x4aec,	// (0x000065ca) form2_midp_wait_pane_g1

0x4af5,	// (0x000065d3) form2_midp_wait_pane_g2

0x4afe,	// (0x000065dc) form2_midp_wait_pane_g3

0x0002,

0xfad6,	// (0x000115b4) form2_midp_wait_pane_g

0xe85c,	// (0x0001033a) list_highlight_pane_cp21_ParamLimits

0x4b37,	// (0x00006615) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b46,	// (0x00006624) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3775,	// (0x00005253) list_single_2graphic_im_pane_ParamLimits

0x3775,	// (0x00005253) list_single_2graphic_im_pane

0xc9a4,	// (0x0000e482) list_single_2graphic_im_pane_g1_ParamLimits

0xc9a4,	// (0x0000e482) list_single_2graphic_im_pane_g1

0xc9b5,	// (0x0000e493) list_single_2graphic_im_pane_g2_ParamLimits

0xc9b5,	// (0x0000e493) list_single_2graphic_im_pane_g2

0xc9c1,	// (0x0000e49f) list_single_2graphic_im_pane_g3_ParamLimits

0xc9c1,	// (0x0000e49f) list_single_2graphic_im_pane_g3

0x0003,

0xfc2b,	// (0x00011709) list_single_2graphic_im_pane_g_ParamLimits

0xfc2b,	// (0x00011709) list_single_2graphic_im_pane_g

0xc9d5,	// (0x0000e4b3) list_single_2graphic_im_pane_t1_ParamLimits

0xc9d5,	// (0x0000e4b3) list_single_2graphic_im_pane_t1

0x563d,	// (0x0000711b) list_single_graphic_2heading_pane_fp_ParamLimits

0x563d,	// (0x0000711b) list_single_graphic_2heading_pane_fp

0x5699,	// (0x00007177) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5699,	// (0x00007177) list_single_graphic_2heading_pane_fp_g1

0x5656,	// (0x00007134) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5656,	// (0x00007134) list_single_graphic_2heading_pane_fp_g2

0xef09,	// (0x000109e7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xef09,	// (0x000109e7) list_single_graphic_2heading_pane_fp_g3

0x5662,	// (0x00007140) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5662,	// (0x00007140) list_single_graphic_2heading_pane_fp_g4

0x5676,	// (0x00007154) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5676,	// (0x00007154) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb59,	// (0x00011637) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb59,	// (0x00011637) list_single_graphic_2heading_pane_fp_g

0x5f2e,	// (0x00007a0c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5f2e,	// (0x00007a0c) list_single_graphic_2heading_pane_fp_t1

0x56d1,	// (0x000071af) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x56d1,	// (0x000071af) list_single_graphic_2heading_pane_fp_t2

0x5f44,	// (0x00007a22) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5f44,	// (0x00007a22) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc34,	// (0x00011712) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc34,	// (0x00011712) list_single_graphic_2heading_pane_fp_t

0x4f06,	// (0x000069e4) fep_hwr_write_pane_g5_ParamLimits

0x4f06,	// (0x000069e4) fep_hwr_write_pane_g5

0x4f12,	// (0x000069f0) fep_hwr_write_pane_g6_ParamLimits

0x4f12,	// (0x000069f0) fep_hwr_write_pane_g6

0x5b89,	// (0x00007667) eswt_shell_pane_ParamLimits

0x1ec1,	// (0x0000399f) bg_popup_window_pane_cp18_ParamLimits

0x5bba,	// (0x00007698) heading_pane_cp70

0x5cbb,	// (0x00007799) popup_eswt_tasktip_window_t1_ParamLimits

0xb85b,	// (0x0000d339) aid_touch_tab_arrow_left

0xb871,	// (0x0000d34f) aid_touch_tab_arrow_right

0xa272,	// (0x0000bd50) title_pane_g3_ParamLimits

0xa272,	// (0x0000bd50) title_pane_g3

0xef2d,	// (0x00010a0b) set_value_pane_g1

0xb791,	// (0x0000d26f) popup_toolbar_trans_pane_ParamLimits

0x5e74,	// (0x00007952) aid_size_cell_tb_trans_pane_ParamLimits

0xefd4,	// (0x00010ab2) bg_tb_trans_pane_ParamLimits

0x5e86,	// (0x00007964) grid_tb_trans_pane_ParamLimits

0xea32,	// (0x00010510) cont_note_pane_ParamLimits

0xea32,	// (0x00010510) cont_note_pane

0xecbc,	// (0x0001079a) cont_snote2_single_text_pane_ParamLimits

0xecbc,	// (0x0001079a) cont_snote2_single_text_pane

0xecbc,	// (0x0001079a) cont_snote2_single_graphic_pane_ParamLimits

0xecbc,	// (0x0001079a) cont_snote2_single_graphic_pane

0x2570,	// (0x0000404e) cont_note_wait_pane_ParamLimits

0x2570,	// (0x0000404e) cont_note_wait_pane

0x2570,	// (0x0000404e) cont_note_image_pane_ParamLimits

0x2570,	// (0x0000404e) cont_note_image_pane

0x5f5a,	// (0x00007a38) popup_note2_window_g1_ParamLimits

0x5f5a,	// (0x00007a38) popup_note2_window_g1

0x5f8b,	// (0x00007a69) popup_note2_window_t1_ParamLimits

0x5f8b,	// (0x00007a69) popup_note2_window_t1

0x5fd0,	// (0x00007aae) popup_note2_window_t2_ParamLimits

0x5fd0,	// (0x00007aae) popup_note2_window_t2

0x6015,	// (0x00007af3) popup_note2_window_t3_ParamLimits

0x6015,	// (0x00007af3) popup_note2_window_t3

0x605a,	// (0x00007b38) popup_note2_window_t4_ParamLimits

0x605a,	// (0x00007b38) popup_note2_window_t4

0xeab6,	// (0x00010594) popup_note2_window_t5_ParamLimits

0xeab6,	// (0x00010594) popup_note2_window_t5

0x0004,

0xfc40,	// (0x0001171e) popup_note2_window_t_ParamLimits

0xfc40,	// (0x0001171e) popup_note2_window_t

0x6089,	// (0x00007b67) popup_note2_image_window_g1_ParamLimits

0x6089,	// (0x00007b67) popup_note2_image_window_g1

0x6095,	// (0x00007b73) popup_note2_image_window_g2_ParamLimits

0x6095,	// (0x00007b73) popup_note2_image_window_g2

0x0001,

0xfc4b,	// (0x00011729) popup_note2_image_window_g_ParamLimits

0xfc4b,	// (0x00011729) popup_note2_image_window_g

0x60a7,	// (0x00007b85) popup_note2_image_window_t1_ParamLimits

0x60a7,	// (0x00007b85) popup_note2_image_window_t1

0x60bf,	// (0x00007b9d) popup_note2_image_window_t2_ParamLimits

0x60bf,	// (0x00007b9d) popup_note2_image_window_t2

0x60d7,	// (0x00007bb5) popup_note2_image_window_t3_ParamLimits

0x60d7,	// (0x00007bb5) popup_note2_image_window_t3

0x0002,

0xfc50,	// (0x0001172e) popup_note2_image_window_t_ParamLimits

0xfc50,	// (0x0001172e) popup_note2_image_window_t

0x257e,	// (0x0000405c) popup_note2_wait_window_g1_ParamLimits

0x257e,	// (0x0000405c) popup_note2_wait_window_g1

0x60f3,	// (0x00007bd1) popup_note2_wait_window_g2_ParamLimits

0x60f3,	// (0x00007bd1) popup_note2_wait_window_g2

0x2596,	// (0x00004074) popup_note2_wait_window_g3_ParamLimits

0x2596,	// (0x00004074) popup_note2_wait_window_g3

0x0002,

0xfc57,	// (0x00011735) popup_note2_wait_window_g_ParamLimits

0xfc57,	// (0x00011735) popup_note2_wait_window_g

0x60ff,	// (0x00007bdd) popup_note2_wait_window_t1_ParamLimits

0x60ff,	// (0x00007bdd) popup_note2_wait_window_t1

0x611d,	// (0x00007bfb) popup_note2_wait_window_t2_ParamLimits

0x611d,	// (0x00007bfb) popup_note2_wait_window_t2

0x613b,	// (0x00007c19) popup_note2_wait_window_t3_ParamLimits

0x613b,	// (0x00007c19) popup_note2_wait_window_t3

0x614d,	// (0x00007c2b) popup_note2_wait_window_t4_ParamLimits

0x614d,	// (0x00007c2b) popup_note2_wait_window_t4

0x0003,

0xfc5e,	// (0x0001173c) popup_note2_wait_window_t_ParamLimits

0xfc5e,	// (0x0001173c) popup_note2_wait_window_t

0x615f,	// (0x00007c3d) wait_bar2_pane_ParamLimits

0x615f,	// (0x00007c3d) wait_bar2_pane

0x6177,	// (0x00007c55) popup_snote2_single_text_window_g1_ParamLimits

0x6177,	// (0x00007c55) popup_snote2_single_text_window_g1

0x619f,	// (0x00007c7d) popup_snote2_single_text_window_t1_ParamLimits

0x619f,	// (0x00007c7d) popup_snote2_single_text_window_t1

0x61eb,	// (0x00007cc9) popup_snote2_single_text_window_t2_ParamLimits

0x61eb,	// (0x00007cc9) popup_snote2_single_text_window_t2

0x6237,	// (0x00007d15) popup_snote2_single_text_window_t3_ParamLimits

0x6237,	// (0x00007d15) popup_snote2_single_text_window_t3

0x6278,	// (0x00007d56) popup_snote2_single_text_window_t4_ParamLimits

0x6278,	// (0x00007d56) popup_snote2_single_text_window_t4

0x62ae,	// (0x00007d8c) popup_snote2_single_text_window_t5_ParamLimits

0x62ae,	// (0x00007d8c) popup_snote2_single_text_window_t5

0x0004,

0xfc67,	// (0x00011745) popup_snote2_single_text_window_t_ParamLimits

0xfc67,	// (0x00011745) popup_snote2_single_text_window_t

0x62d9,	// (0x00007db7) popup_snote2_single_graphic_window_g1_ParamLimits

0x62d9,	// (0x00007db7) popup_snote2_single_graphic_window_g1

0x6301,	// (0x00007ddf) popup_snote2_single_graphic_window_g2_ParamLimits

0x6301,	// (0x00007ddf) popup_snote2_single_graphic_window_g2

0x0001,

0xfc72,	// (0x00011750) popup_snote2_single_graphic_window_g_ParamLimits

0xfc72,	// (0x00011750) popup_snote2_single_graphic_window_g

0x6329,	// (0x00007e07) popup_snote2_single_graphic_window_t1_ParamLimits

0x6329,	// (0x00007e07) popup_snote2_single_graphic_window_t1

0x6375,	// (0x00007e53) popup_snote2_single_graphic_window_t2_ParamLimits

0x6375,	// (0x00007e53) popup_snote2_single_graphic_window_t2

0x6237,	// (0x00007d15) popup_snote2_single_graphic_window_t3_ParamLimits

0x6237,	// (0x00007d15) popup_snote2_single_graphic_window_t3

0x6278,	// (0x00007d56) popup_snote2_single_graphic_window_t4_ParamLimits

0x6278,	// (0x00007d56) popup_snote2_single_graphic_window_t4

0x62ae,	// (0x00007d8c) popup_snote2_single_graphic_window_t5_ParamLimits

0x62ae,	// (0x00007d8c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc77,	// (0x00011755) popup_snote2_single_graphic_window_t_ParamLimits

0xfc77,	// (0x00011755) popup_snote2_single_graphic_window_t

0x4731,	// (0x0000620f) clock_nsta_pane_cp2_t1

0x4731,	// (0x0000620f) clock_nsta_pane_cp2_t2

0x0001,

0xfa97,	// (0x00011575) clock_nsta_pane_cp2_t

0xefee,	// (0x00010acc) form_field_data_wide_pane_g1_ParamLimits

0xeffa,	// (0x00010ad8) form_field_data_wide_pane_g2_ParamLimits

0xeffa,	// (0x00010ad8) form_field_data_wide_pane_g2

0xf006,	// (0x00010ae4) form_field_data_wide_pane_g3_ParamLimits

0xf006,	// (0x00010ae4) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x0001112f) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x0001112f) form_field_data_wide_pane_g

0xc3e8,	// (0x0000dec6) grid_touch_3_pane_ParamLimits

0xc3e8,	// (0x0000dec6) grid_touch_3_pane

0xca06,	// (0x0000e4e4) cell_touch_3_pane_ParamLimits

0xca06,	// (0x0000e4e4) cell_touch_3_pane

0x4cd1,	// (0x000067af) cell_touch_3_pane_g1

0x4cd1,	// (0x000067af) cell_touch_3_pane_g2

0x0001,

0xfb1c,	// (0x000115fa) cell_touch_3_pane_g

0xeb0e,	// (0x000105ec) cont_query_data_pane

0xeb16,	// (0x000105f4) cont_query_data_pane_cp1

0x63f4,	// (0x00007ed2) button_value_adjust_pane_cp7

0x63fc,	// (0x00007eda) query_popup_pane_cp3

0x0471,	// (0x00001f4f) bg_popup_sub_pane_cp22_ParamLimits

0x0487,	// (0x00001f65) navi_navi_volume_pane_cp2

0x04a2,	// (0x00001f80) popup_side_volume_key_window_g2

0x04b1,	// (0x00001f8f) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x000111c5) popup_side_volume_key_window_g

0x04ce,	// (0x00001fac) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x000111cc) popup_side_volume_key_window_t

0x095e,	// (0x0000243c) popup_side_volume_key_window_ParamLimits

0xa748,	// (0x0000c226) list_double_graphic_pane_g4_ParamLimits

0xa748,	// (0x0000c226) list_double_graphic_pane_g4

0xc276,	// (0x0000dd54) list_single_2heading_msg_pane_ParamLimits

0xc276,	// (0x0000dd54) list_single_2heading_msg_pane

0xca52,	// (0x0000e530) list_single_2heading_msg_pane_g1_ParamLimits

0xca52,	// (0x0000e530) list_single_2heading_msg_pane_g1

0xca5e,	// (0x0000e53c) list_single_2heading_msg_pane_g2_ParamLimits

0xca5e,	// (0x0000e53c) list_single_2heading_msg_pane_g2

0xca71,	// (0x0000e54f) list_single_2heading_msg_pane_g3_ParamLimits

0xca71,	// (0x0000e54f) list_single_2heading_msg_pane_g3

0xca7d,	// (0x0000e55b) list_single_2heading_msg_pane_g4_ParamLimits

0xca7d,	// (0x0000e55b) list_single_2heading_msg_pane_g4

0x0003,

0xfc82,	// (0x00011760) list_single_2heading_msg_pane_g_ParamLimits

0xfc82,	// (0x00011760) list_single_2heading_msg_pane_g

0xca95,	// (0x0000e573) list_single_2heading_msg_pane_t1_ParamLimits

0xca95,	// (0x0000e573) list_single_2heading_msg_pane_t1

0xcabd,	// (0x0000e59b) list_single_2heading_msg_pane_t2_ParamLimits

0xcabd,	// (0x0000e59b) list_single_2heading_msg_pane_t2

0xcb28,	// (0x0000e606) list_single_2heading_msg_pane_t3_ParamLimits

0xcb28,	// (0x0000e606) list_single_2heading_msg_pane_t3

0x64f9,	// (0x00007fd7) list_single_2heading_msg_pane_t4_ParamLimits

0x64f9,	// (0x00007fd7) list_single_2heading_msg_pane_t4

0x0003,

0xfc8b,	// (0x00011769) list_single_2heading_msg_pane_t_ParamLimits

0xfc8b,	// (0x00011769) list_single_2heading_msg_pane_t

0xe800,	// (0x000102de) title_pane_g4_ParamLimits

0xe800,	// (0x000102de) title_pane_g4

0xf3a2,	// (0x00010e80) title_pane_stacon_g3_ParamLimits

0xf3a2,	// (0x00010e80) title_pane_stacon_g3

0x5ef1,	// (0x000079cf) list_single_2graphic_im_pane_g4_ParamLimits

0x5ef1,	// (0x000079cf) list_single_2graphic_im_pane_g4

0x314c,	// (0x00004c2a) popup_side_volume_key_window_cp

0x3bfc,	// (0x000056da) main_idle_act2_pane_t1

0x1d6e,	// (0x0000384c) toolbar_button_pane_g10

0xa5f3,	// (0x0000c0d1) popup_toolbar_window_cp1

0x4722,	// (0x00006200) clock_nsta_pane_cp_t1

0x4722,	// (0x00006200) clock_nsta_pane_cp_t2

0x0001,

0xfa92,	// (0x00011570) clock_nsta_pane_cp_t

0x0487,	// (0x00001f65) navi_navi_volume_pane_cp2_ParamLimits

0x0496,	// (0x00001f74) popup_side_volume_key_window_g1_ParamLimits

0x04a2,	// (0x00001f80) popup_side_volume_key_window_g2_ParamLimits

0x04b1,	// (0x00001f8f) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x000111c5) popup_side_volume_key_window_g_ParamLimits

0x4d40,	// (0x0000681e) fep_hwr_aid_pane

0x4de9,	// (0x000068c7) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e09,	// (0x000068e7) fep_hwr_top_pane_g1_ParamLimits

0x4e1b,	// (0x000068f9) fep_hwr_top_pane_g2_ParamLimits

0x4e2d,	// (0x0000690b) fep_hwr_top_pane_g3_ParamLimits

0xfae7,	// (0x000115c5) fep_hwr_top_pane_g_ParamLimits

0x4e42,	// (0x00006920) fep_hwr_top_text_pane_ParamLimits

0x2f01,	// (0x000049df) aid_touch_tab_arrow_arrow_2

0x2f0a,	// (0x000049e8) aid_touch_tab_arrow_left_2

0x4d54,	// (0x00006832) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4d8b,	// (0x00006869) fep_hwr_prediction_pane

0x50c4,	// (0x00006ba2) fep_vkb_prediction_pane

0xc752,	// (0x0000e230) fep_vkb_side_pane_g3_ParamLimits

0xc752,	// (0x0000e230) fep_vkb_side_pane_g3

0x5176,	// (0x00006c54) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5893,	// (0x00007371) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x58a0,	// (0x0000737e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb91,	// (0x0001166f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x651e,	// (0x00007ffc) fep_hwr_prediction_pane_g1

0x6528,	// (0x00008006) fep_hwr_prediction_pane_g2

0x6530,	// (0x0000800e) fep_hwr_prediction_pane_g3

0x6538,	// (0x00008016) fep_hwr_prediction_pane_g4

0x0003,

0xfc94,	// (0x00011772) fep_hwr_prediction_pane_g

0x651e,	// (0x00007ffc) fep_vkb_prediction_pane_g1

0x6540,	// (0x0000801e) fep_vkb_prediction_pane_g2

0x6548,	// (0x00008026) fep_vkb_prediction_pane_g3

0x6550,	// (0x0000802e) fep_vkb_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0001177b) fep_vkb_prediction_pane_g

0x34be,	// (0x00004f9c) slider_set_pane_g3

0x34d2,	// (0x00004fb0) slider_set_pane_g4

0x34ea,	// (0x00004fc8) slider_set_pane_g5

0x34be,	// (0x00004f9c) slider_set_pane_g6

0x3500,	// (0x00004fde) slider_set_pane_g7

0x36d6,	// (0x000051b4) slider_form_pane_g3

0x36df,	// (0x000051bd) slider_form_pane_g4

0x36e7,	// (0x000051c5) slider_form_pane_g5

0x36d6,	// (0x000051b4) slider_form_pane_g6

0xc219,	// (0x0000dcf7) slider_form_pane_g7

0x3f11,	// (0x000059ef) slider_set_pane_vc_g3

0x3f1a,	// (0x000059f8) slider_set_pane_vc_g4

0x3f23,	// (0x00005a01) slider_set_pane_vc_g5

0x3f11,	// (0x000059ef) slider_set_pane_vc_g6

0x3f2c,	// (0x00005a0a) slider_set_pane_vc_g7

0x43d1,	// (0x00005eaf) slider_form_pane_vc_g1

0x43da,	// (0x00005eb8) slider_form_pane_vc_g2

0x43e3,	// (0x00005ec1) slider_form_pane_vc_g3

0x43d1,	// (0x00005eaf) slider_form_pane_vc_g4

0x43ec,	// (0x00005eca) slider_form_pane_vc_g5

0x0004,

0xfa64,	// (0x00011542) slider_form_pane_vc_g

0xe61f,	// (0x000100fd) main_idle_act3_pane

0x6558,	// (0x00008036) ai3_links_pane

0xcb96,	// (0x0000e674) popup_ai3_data_window_ParamLimits

0xcb96,	// (0x0000e674) popup_ai3_data_window

0xe61f,	// (0x000100fd) grid_ai3_links_pane

0xcbb4,	// (0x0000e692) cell_ai3_links_pane_ParamLimits

0xcbb4,	// (0x0000e692) cell_ai3_links_pane

0x6599,	// (0x00008077) bg_popup_sub_pane_cp11

0x65a6,	// (0x00008084) cell_ai3_links_pane_g1

0xe61f,	// (0x000100fd) bg_popup_sub_pane_cp12

0x65cb,	// (0x000080a9) heading_ai3_data_pane

0x65d3,	// (0x000080b1) list_ai3_gene_pane

0x65df,	// (0x000080bd) popup_ai3_data_window_g1

0x65e7,	// (0x000080c5) heading_ai3_data_pane_g1

0x65ef,	// (0x000080cd) heading_ai3_data_pane_t1

0x65fd,	// (0x000080db) list_double_ai3_gene_pane_ParamLimits

0x65fd,	// (0x000080db) list_double_ai3_gene_pane

0x660a,	// (0x000080e8) list_single_ai3_gene_pane_ParamLimits

0x660a,	// (0x000080e8) list_single_ai3_gene_pane

0x4c96,	// (0x00006774) list_highlight_pane_cp7_ParamLimits

0x4c96,	// (0x00006774) list_highlight_pane_cp7

0x6617,	// (0x000080f5) list_single_a13_gene_pane_t1_ParamLimits

0x6617,	// (0x000080f5) list_single_a13_gene_pane_t1

0x662e,	// (0x0000810c) list_single_ai3_gene_pane_g1

0x6637,	// (0x00008115) list_single_ai3_gene_pane_g2

0x0001,

0xfca6,	// (0x00011784) list_single_ai3_gene_pane_g

0x663f,	// (0x0000811d) list_double_ai3_gene_pane_g1_ParamLimits

0x663f,	// (0x0000811d) list_double_ai3_gene_pane_g1

0x664b,	// (0x00008129) list_double_ai3_gene_pane_t1_ParamLimits

0x664b,	// (0x00008129) list_double_ai3_gene_pane_t1

0x6667,	// (0x00008145) list_double_ai3_gene_pane_t2_ParamLimits

0x6667,	// (0x00008145) list_double_ai3_gene_pane_t2

0x667c,	// (0x0000815a) list_double_ai3_gene_pane_t3_ParamLimits

0x667c,	// (0x0000815a) list_double_ai3_gene_pane_t3

0x0002,

0xfcab,	// (0x00011789) list_double_ai3_gene_pane_t_ParamLimits

0xfcab,	// (0x00011789) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x640d,	// (0x00007eeb) aid_size_min_col_2

0xca3c,	// (0x0000e51a) aid_size_min_msg_ParamLimits

0xca3c,	// (0x0000e51a) aid_size_min_msg

0xc766,	// (0x0000e244) fep_vkb_top_text_pane_g2_ParamLimits

0xc766,	// (0x0000e244) fep_vkb_top_text_pane_g2

0x0001,

0xfb17,	// (0x000115f5) fep_vkb_top_text_pane_g_ParamLimits

0xfb17,	// (0x000115f5) fep_vkb_top_text_pane_g

0xe61f,	// (0x000100fd) main_hc_apps_shell_pane

0x6699,	// (0x00008177) grid_hc_apps_pane_ParamLimits

0x6699,	// (0x00008177) grid_hc_apps_pane

0x66ab,	// (0x00008189) list_hc_apps_pane

0x66b3,	// (0x00008191) scroll_pane_cp37_ParamLimits

0x66b3,	// (0x00008191) scroll_pane_cp37

0xcbce,	// (0x0000e6ac) cell_hc_apps_pane_ParamLimits

0xcbce,	// (0x0000e6ac) cell_hc_apps_pane

0xcc94,	// (0x0000e772) cell_hc_apps_pane_g1_ParamLimits

0xcc94,	// (0x0000e772) cell_hc_apps_pane_g1

0x679f,	// (0x0000827d) cell_hc_apps_pane_g2_ParamLimits

0x679f,	// (0x0000827d) cell_hc_apps_pane_g2

0x67bb,	// (0x00008299) cell_hc_apps_pane_g3_ParamLimits

0x67bb,	// (0x00008299) cell_hc_apps_pane_g3

0x0002,

0xfcb2,	// (0x00011790) cell_hc_apps_pane_g_ParamLimits

0xfcb2,	// (0x00011790) cell_hc_apps_pane_g

0xccc0,	// (0x0000e79e) cell_hc_apps_pane_t1_ParamLimits

0xccc0,	// (0x0000e79e) cell_hc_apps_pane_t1

0xea32,	// (0x00010510) grid_highlight_pane_cp10_ParamLimits

0xea32,	// (0x00010510) grid_highlight_pane_cp10

0xccfe,	// (0x0000e7dc) list_single_hc_apps_pane_ParamLimits

0xccfe,	// (0x0000e7dc) list_single_hc_apps_pane

0xcd31,	// (0x0000e80f) list_single_hc_apps_pane_g1

0xcd4a,	// (0x0000e828) list_single_hc_apps_pane_g2

0x0001,

0xfcb9,	// (0x00011797) list_single_hc_apps_pane_g

0xcd63,	// (0x0000e841) list_single_hc_apps_pane_g2_copy1

0xcd7f,	// (0x0000e85d) list_single_hc_apps_pane_t1

0xe85c,	// (0x0001033a) bg_set_opt_pane_cp_ParamLimits

0xe86a,	// (0x00010348) setting_slider_pane_t1_ParamLimits

0xe883,	// (0x00010361) setting_slider_pane_t2_ParamLimits

0xe89d,	// (0x0001037b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00011017) setting_slider_pane_t_ParamLimits

0xe8b5,	// (0x00010393) slider_set_pane_ParamLimits

0x0fac,	// (0x00002a8a) control_pane_g5_ParamLimits

0x0fac,	// (0x00002a8a) control_pane_g5

0x34a5,	// (0x00004f83) slider_set_pane_g1_ParamLimits

0x34b2,	// (0x00004f90) slider_set_pane_g2_ParamLimits

0x34be,	// (0x00004f9c) slider_set_pane_g3_ParamLimits

0x34d2,	// (0x00004fb0) slider_set_pane_g4_ParamLimits

0x34ea,	// (0x00004fc8) slider_set_pane_g5_ParamLimits

0x34be,	// (0x00004f9c) slider_set_pane_g6_ParamLimits

0x3500,	// (0x00004fde) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x0001140c) slider_set_pane_g_ParamLimits

0x0a43,	// (0x00002521) navi_icon_text_pane_ParamLimits

0xb822,	// (0x0000d300) aid_fill_nsta_2_ParamLimits

0xb85b,	// (0x0000d339) aid_touch_tab_arrow_left_ParamLimits

0xb871,	// (0x0000d34f) aid_touch_tab_arrow_right_ParamLimits

0xb90c,	// (0x0000d3ea) clock_nsta_pane_ParamLimits

0xbf97,	// (0x0000da75) navi_icon_pane_g1_ParamLimits

0xbfa3,	// (0x0000da81) navi_text_pane_t1_ParamLimits

0xc4c1,	// (0x0000df9f) navi_icon_text_pane_g1_ParamLimits

0xc4cd,	// (0x0000dfab) navi_icon_text_pane_t1_ParamLimits

0xcd31,	// (0x0000e80f) list_single_hc_apps_pane_g1_ParamLimits

0xcd4a,	// (0x0000e828) list_single_hc_apps_pane_g2_ParamLimits

0xfcb9,	// (0x00011797) list_single_hc_apps_pane_g_ParamLimits

0xcd63,	// (0x0000e841) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcd7f,	// (0x0000e85d) list_single_hc_apps_pane_t1_ParamLimits

0xa161,	// (0x0000bc3f) popup_toolbar2_fixed_window_ParamLimits

0xa161,	// (0x0000bc3f) popup_toolbar2_fixed_window

0xb787,	// (0x0000d265) popup_toolbar2_float_window

0xe61f,	// (0x000100fd) bg_popup_sub_pane_cp27

0x68d8,	// (0x000083b6) grid_toolbar2_float_pane

0xe61f,	// (0x000100fd) bg_popup_sub_pane_cp26

0x68d8,	// (0x000083b6) grid_toolbar2_fixed_pane

0xcdad,	// (0x0000e88b) cell_toolbar2_fixed_pane_ParamLimits

0xcdad,	// (0x0000e88b) cell_toolbar2_fixed_pane

0xcdc7,	// (0x0000e8a5) cell_toolbar2_fixed_pane_g1

0x68f9,	// (0x000083d7) toolbar2_fixed_button_pane

0x1d26,	// (0x00003804) toolbar2_fixed_button_pane_g1

0x1d2e,	// (0x0000380c) toolbar2_fixed_button_pane_g2

0x1d36,	// (0x00003814) toolbar2_fixed_button_pane_g3

0x1d3e,	// (0x0000381c) toolbar2_fixed_button_pane_g4

0x1d46,	// (0x00003824) toolbar2_fixed_button_pane_g5

0x1d4e,	// (0x0000382c) toolbar2_fixed_button_pane_g6

0x1d56,	// (0x00003834) toolbar2_fixed_button_pane_g7

0x1d5e,	// (0x0000383c) toolbar2_fixed_button_pane_g8

0x1d66,	// (0x00003844) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x0001130e) toolbar2_fixed_button_pane_g

0x6901,	// (0x000083df) cell_toolbar2_float_pane_ParamLimits

0x6901,	// (0x000083df) cell_toolbar2_float_pane

0x6912,	// (0x000083f0) cell_toolbar2_float_pane_g1

0x68f9,	// (0x000083d7) toolbar2_fixed_button_pane_cp

0xc64e,	// (0x0000e12c) fep_vkb_accented_list_pane_ParamLimits

0xc64e,	// (0x0000e12c) fep_vkb_accented_list_pane

0x54e7,	// (0x00006fc5) bg_popup_fep_shadow_pane_g9

0x0bd2,	// (0x000026b0) bg_popup_fep_shadow_pane_cp3

0xf189,	// (0x00010c67) list_accented_list_pane

0x691b,	// (0x000083f9) list_single_accented_list_pane_ParamLimits

0x691b,	// (0x000083f9) list_single_accented_list_pane

0x0bd2,	// (0x000026b0) list_highlight_pane_cp10

0x692c,	// (0x0000840a) list_single_accented_list_pane_t1

0xb6a3,	// (0x0000d181) popup_slider_window_ParamLimits

0xb6a3,	// (0x0000d181) popup_slider_window

0x6404,	// (0x00007ee2) aid_indentation_list_msg

0xceca,	// (0x0000e9a8) bg_popup_window_pane_cp19

0x6a68,	// (0x00008546) popup_slider_window_g1

0x6a84,	// (0x00008562) popup_slider_window_g2

0x6aa0,	// (0x0000857e) popup_slider_window_g3

0x0005,

0xfcbe,	// (0x0001179c) popup_slider_window_g

0x6b06,	// (0x000085e4) popup_slider_window_t1

0x6b7a,	// (0x00008658) small_volume_slider_vertical_pane

0x4cd1,	// (0x000067af) small_volume_slider_vertical_pane_g1

0x4cd1,	// (0x000067af) small_volume_slider_vertical_pane_g2

0x6b96,	// (0x00008674) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd0,	// (0x000117ae) small_volume_slider_vertical_pane_g

0xa0cb,	// (0x0000bba9) area_side_right_pane_ParamLimits

0xa0cb,	// (0x0000bba9) area_side_right_pane

0xcf82,	// (0x0000ea60) aid_size_side_button_ParamLimits

0xcf82,	// (0x0000ea60) aid_size_side_button

0xcf9b,	// (0x0000ea79) grid_sctrl_middle_pane_ParamLimits

0xcf9b,	// (0x0000ea79) grid_sctrl_middle_pane

0x6bd2,	// (0x000086b0) sctrl_sk_bottom_pane

0x6be3,	// (0x000086c1) sctrl_sk_top_pane

0x6bf5,	// (0x000086d3) aid_touch_sctrl_top

0xea32,	// (0x00010510) bg_sctrl_sk_pane_ParamLimits

0xea32,	// (0x00010510) bg_sctrl_sk_pane

0x6c02,	// (0x000086e0) sctrl_sk_top_pane_g1

0x6c0f,	// (0x000086ed) sctrl_sk_top_pane_t1

0x6bf5,	// (0x000086d3) aid_touch_sctrl_bottom

0xea32,	// (0x00010510) bg_sctrl_sk_pane_cp_ParamLimits

0xea32,	// (0x00010510) bg_sctrl_sk_pane_cp

0x6c2a,	// (0x00008708) sctrl_sk_bottom_pane_g1

0x6c0f,	// (0x000086ed) sctrl_sk_bottom_pane_t1

0xcfb5,	// (0x0000ea93) cell_sctrl_middle_pane_ParamLimits

0xcfb5,	// (0x0000ea93) cell_sctrl_middle_pane

0xcfc8,	// (0x0000eaa6) aid_touch_sctrl_middle_ParamLimits

0xcfc8,	// (0x0000eaa6) aid_touch_sctrl_middle

0xcfd5,	// (0x0000eab3) bg_sctrl_middle_pane_ParamLimits

0xcfd5,	// (0x0000eab3) bg_sctrl_middle_pane

0x6cf4,	// (0x000087d2) cell_sctrl_middle_pane_g1_ParamLimits

0x6cf4,	// (0x000087d2) cell_sctrl_middle_pane_g1

0xcfe3,	// (0x0000eac1) cell_sctrl_middle_pane_g2_ParamLimits

0xcfe3,	// (0x0000eac1) cell_sctrl_middle_pane_g2

0x0001,

0xfcdc,	// (0x000117ba) cell_sctrl_middle_pane_g_ParamLimits

0xfcdc,	// (0x000117ba) cell_sctrl_middle_pane_g

0x1d26,	// (0x00003804) bg_sctrl_middle_pane_g1

0x1d2e,	// (0x0000380c) bg_sctrl_middle_pane_g2

0x1d36,	// (0x00003814) bg_sctrl_middle_pane_g3

0x1d3e,	// (0x0000381c) bg_sctrl_middle_pane_g4

0x1d46,	// (0x00003824) bg_sctrl_middle_pane_g5

0x1d4e,	// (0x0000382c) bg_sctrl_middle_pane_g6

0x1d56,	// (0x00003834) bg_sctrl_middle_pane_g7

0x1d5e,	// (0x0000383c) bg_sctrl_middle_pane_g8

0x0007,

0xfce1,	// (0x000117bf) bg_sctrl_middle_pane_g

0x1d66,	// (0x00003844) bg_sctrl_middle_pane_g8_copy1

0x1d26,	// (0x00003804) bg_sctrl_sk_pane_g1

0x1d2e,	// (0x0000380c) bg_sctrl_sk_pane_g2

0x1d36,	// (0x00003814) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x0001130e) bg_sctrl_sk_pane_g

0xee7a,	// (0x00010958) aid_size_touch_scroll_bar

0x1d3e,	// (0x0000381c) bg_sctrl_sk_pane_g4

0x1d46,	// (0x00003824) bg_sctrl_sk_pane_g5

0x1d4e,	// (0x0000382c) bg_sctrl_sk_pane_g6

0x1d56,	// (0x00003834) bg_sctrl_sk_pane_g7

0x1d5e,	// (0x0000383c) bg_sctrl_sk_pane_g8

0x1d66,	// (0x00003844) bg_sctrl_sk_pane_g9

0x11ef,	// (0x00002ccd) popup_fep_china_hwr2_fs_candidate_window

0xb155,	// (0x0000cc33) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb155,	// (0x0000cc33) popup_fep_china_hwr2_fs_control_window

0x5176,	// (0x00006c54) sctrl_sk_top_pane_g2

0x0001,

0xfcd7,	// (0x000117b5) sctrl_sk_top_pane_g

0xcfef,	// (0x0000eacd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcfef,	// (0x0000eacd) aid_fep_china_hwr2_fs_cell

0xd005,	// (0x0000eae3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd005,	// (0x0000eae3) bg_popup_fep_shadow_pane_cp4

0xd01c,	// (0x0000eafa) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd01c,	// (0x0000eafa) bg_popup_fep_shadow_pane_cp5

0xd02e,	// (0x0000eb0c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd02e,	// (0x0000eb0c) popup_fep_china_hwr2_fs_control_bar_grid

0xd042,	// (0x0000eb20) popup_fep_china_hwr2_fs_control_funtion_grid

0x6cc8,	// (0x000087a6) aid_fep_china_hwr2_fs_candi_cell

0xe61f,	// (0x000100fd) bg_popup_fep_shadow_pane_cp6

0x6cd2,	// (0x000087b0) popup_fep_china_hwr2_fs_candidate_grid

0xd04a,	// (0x0000eb28) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd04a,	// (0x0000eb28) cell_fep_china_hwr2_fs_funtion_grid

0x4cd1,	// (0x000067af) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6cf4,	// (0x000087d2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6cf4,	// (0x000087d2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6d02,	// (0x000087e0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6d02,	// (0x000087e0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf2,	// (0x000117d0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf2,	// (0x000117d0) cell_fep_china_hwr2_fs_funtion_grid_g

0xd062,	// (0x0000eb40) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd062,	// (0x0000eb40) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd077,	// (0x0000eb55) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd077,	// (0x0000eb55) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf7,	// (0x000117d5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf7,	// (0x000117d5) cell_fep_china_hwr2_fs_funtion_grid_t

0x6d49,	// (0x00008827) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6d51,	// (0x0000882f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6d59,	// (0x00008837) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfc,	// (0x000117da) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6d61,	// (0x0000883f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6d61,	// (0x0000883f) cell_fep_china_hwr2_fs_candidate_grid

0x6d80,	// (0x0000885e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6d88,	// (0x00008866) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4cd1,	// (0x000067af) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4cd1,	// (0x000067af) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1c,	// (0x000115fa) cell_fep_china_hwr2_fs_candidate_grid_g

0x6d90,	// (0x0000886e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x185c,	// (0x0000333a) clock_nsta_pane_cp_24_ParamLimits

0x185c,	// (0x0000333a) clock_nsta_pane_cp_24

0x18dc,	// (0x000033ba) indicator_nsta_pane_cp_24_ParamLimits

0x18dc,	// (0x000033ba) indicator_nsta_pane_cp_24

0x2d4e,	// (0x0000482c) heading_pane_g1

0x0001,

0xf895,	// (0x00011373) heading_pane_g

0x398b,	// (0x00005469) grid_sct_catagory_button_pane

0x39bd,	// (0x0000549b) scroll_pane_cp5_ParamLimits

0x48de,	// (0x000063bc) button_value_adjust_pane_cp5_ParamLimits

0x48de,	// (0x000063bc) button_value_adjust_pane_cp5

0x49e4,	// (0x000064c2) form2_midp_time_pane_ParamLimits

0x6d9e,	// (0x0000887c) cell_sct_catagory_button_pane_ParamLimits

0x6d9e,	// (0x0000887c) cell_sct_catagory_button_pane

0x4c96,	// (0x00006774) bg_button_pane_cp01_ParamLimits

0x4c96,	// (0x00006774) bg_button_pane_cp01

0x4cd1,	// (0x000067af) cell_sct_catagory_button_pane_g1

0xb724,	// (0x0000d202) popup_tb_extension_window

0xd093,	// (0x0000eb71) aid_size_cell_ext_ParamLimits

0xd093,	// (0x0000eb71) aid_size_cell_ext

0xecbc,	// (0x0001079a) bg_tb_trans_pane_cp1_ParamLimits

0xecbc,	// (0x0001079a) bg_tb_trans_pane_cp1

0xd0b9,	// (0x0000eb97) grid_tb_ext_pane_ParamLimits

0xd0b9,	// (0x0000eb97) grid_tb_ext_pane

0xd0f6,	// (0x0000ebd4) cell_tb_ext_pane_ParamLimits

0xd0f6,	// (0x0000ebd4) cell_tb_ext_pane

0xd11e,	// (0x0000ebfc) cell_tb_ext_pane_g1_ParamLimits

0xd11e,	// (0x0000ebfc) cell_tb_ext_pane_g1

0x6e32,	// (0x00008910) cell_tb_ext_pane_t1

0xea32,	// (0x00010510) list_highlight_pane_cp11_ParamLimits

0xea32,	// (0x00010510) list_highlight_pane_cp11

0xa176,	// (0x0000bc54) popup_uni_indicator_window_ParamLimits

0xa176,	// (0x0000bc54) popup_uni_indicator_window

0xefd4,	// (0x00010ab2) bg_popup_sub_pane_cp14

0x6e4d,	// (0x0000892b) list_uniindi_pane

0x6e59,	// (0x00008937) uniindi_top_pane

0xea32,	// (0x00010510) bg_uniindi_top_pane

0x6e7a,	// (0x00008958) uniindi_top_pane_g1

0x6e90,	// (0x0000896e) uniindi_top_pane_g2

0x0003,

0xfd03,	// (0x000117e1) uniindi_top_pane_g

0x6eba,	// (0x00008998) uniindi_top_pane_t1

0x6ee6,	// (0x000089c4) list_single_uniindi_pane_ParamLimits

0x6ee6,	// (0x000089c4) list_single_uniindi_pane

0x4cd1,	// (0x000067af) bg_uniindi_top_pane_g1

0x6ef9,	// (0x000089d7) list_single_uniindi_pane_g1

0x6f0c,	// (0x000089ea) list_single_uniindi_pane_t1

0xe61f,	// (0x000100fd) control_bg_pane

0x6f31,	// (0x00008a0f) bg_sctrl_sk_pane_cp1

0x6f3a,	// (0x00008a18) bg_sctrl_sk_pane_cp2

0x6f43,	// (0x00008a21) control_bg_pane_g1

0x6f4c,	// (0x00008a2a) control_bg_pane_g2

0x0001,

0xfd0c,	// (0x000117ea) control_bg_pane_g

0x46c5,	// (0x000061a3) cell_indicator_nsta_pane_g1_ParamLimits

0xc425,	// (0x0000df03) cell_indicator_nsta_pane_g2_ParamLimits

0xfa80,	// (0x0001155e) cell_indicator_nsta_pane_g_ParamLimits

0x4a71,	// (0x0000654f) form2_midp_time_pane_t1_ParamLimits

0x4d32,	// (0x00006810) main_idle_act4_pane_ParamLimits

0x4d32,	// (0x00006810) main_idle_act4_pane

0xb724,	// (0x0000d202) popup_tb_extension_window_ParamLimits

0xd0de,	// (0x0000ebbc) tb_ext_find_pane_ParamLimits

0xd0de,	// (0x0000ebbc) tb_ext_find_pane

0x6f55,	// (0x00008a33) ai_gene_pane_1_cp1

0x0d1c,	// (0x000027fa) ai_gene_pane_2_cp1

0x6f5d,	// (0x00008a3b) list_single_idle_plugin_calendar_pane

0x6f66,	// (0x00008a44) list_single_idle_plugin_notification_pane

0x6f6f,	// (0x00008a4d) list_single_idle_plugin_player_pane

0xd13b,	// (0x0000ec19) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd13b,	// (0x0000ec19) list_single_idle_plugin_shortcut_pane

0xd163,	// (0x0000ec41) main_idle_act4_pane_t1

0xd17b,	// (0x0000ec59) main_idle_act4_pane_t2

0x0001,

0xfd11,	// (0x000117ef) main_idle_act4_pane_t

0xd193,	// (0x0000ec71) middle_sk_idle_act4_pane_ParamLimits

0xd193,	// (0x0000ec71) middle_sk_idle_act4_pane

0xd1af,	// (0x0000ec8d) popup_clock_digital_analogue_window_cp2

0xd1d6,	// (0x0000ecb4) shortcut_wheel_idle_act4_pane_ParamLimits

0xd1d6,	// (0x0000ecb4) shortcut_wheel_idle_act4_pane

0x4cd1,	// (0x000067af) shortcut_wheel_idle_act4_pane_g1

0x4cd1,	// (0x000067af) shortcut_wheel_idle_act4_pane_g2

0x4cd1,	// (0x000067af) shortcut_wheel_idle_act4_pane_g3

0x4cd1,	// (0x000067af) shortcut_wheel_idle_act4_pane_g4

0x4cd1,	// (0x000067af) shortcut_wheel_idle_act4_pane_g5

0x7002,	// (0x00008ae0) shortcut_wheel_idle_act4_pane_g6

0x700a,	// (0x00008ae8) shortcut_wheel_idle_act4_pane_g7

0x7012,	// (0x00008af0) shortcut_wheel_idle_act4_pane_g8

0x701a,	// (0x00008af8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd16,	// (0x000117f4) shortcut_wheel_idle_act4_pane_g

0x4de9,	// (0x000068c7) middle_sk_idle_act4_pane_g1_ParamLimits

0x4de9,	// (0x000068c7) middle_sk_idle_act4_pane_g1

0xd253,	// (0x0000ed31) middle_sk_idle_act4_pane_g2_ParamLimits

0xd253,	// (0x0000ed31) middle_sk_idle_act4_pane_g2

0x0001,

0xfd39,	// (0x00011817) middle_sk_idle_act4_pane_g_ParamLimits

0xfd39,	// (0x00011817) middle_sk_idle_act4_pane_g

0xd26b,	// (0x0000ed49) middle_sk_idle_act4_pane_t1_ParamLimits

0xd26b,	// (0x0000ed49) middle_sk_idle_act4_pane_t1

0xd29a,	// (0x0000ed78) grid_ai_shortcut_pane_ParamLimits

0xd29a,	// (0x0000ed78) grid_ai_shortcut_pane

0xd2b7,	// (0x0000ed95) list_highlight_pane_cp16_ParamLimits

0xd2b7,	// (0x0000ed95) list_highlight_pane_cp16

0xd2c4,	// (0x0000eda2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd2c4,	// (0x0000eda2) list_single_idle_plugin_shortcut_pane_g1

0xd2d0,	// (0x0000edae) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd2d0,	// (0x0000edae) list_single_idle_plugin_shortcut_pane_g2

0xd2ee,	// (0x0000edcc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2ee,	// (0x0000edcc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3e,	// (0x0001181c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3e,	// (0x0001181c) list_single_idle_plugin_shortcut_pane_g

0xd303,	// (0x0000ede1) cell_ai_shortcut_pane_ParamLimits

0xd303,	// (0x0000ede1) cell_ai_shortcut_pane

0xd319,	// (0x0000edf7) cell_ai_shortcut_pane_g1_ParamLimits

0xd319,	// (0x0000edf7) cell_ai_shortcut_pane_g1

0x6f55,	// (0x00008a33) ai_gene_pane_1_cp2

0x714b,	// (0x00008c29) ai_gene_pane_2_cp2

0x7153,	// (0x00008c31) list_highlight_pane_cp15

0x715c,	// (0x00008c3a) list_single_idle_plugin_calendar_pane_g1

0x7153,	// (0x00008c31) list_highlight_pane_cp17

0x7164,	// (0x00008c42) list_single_idle_plugin_calendar_pane_g1_copy1

0x716c,	// (0x00008c4a) list_single_idle_plugin_player_pane_g1

0x3caa,	// (0x00005788) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd45,	// (0x00011823) list_single_idle_plugin_player_pane_g

0x7174,	// (0x00008c52) list_single_idle_plugin_player_pane_t1

0x7182,	// (0x00008c60) list_single_idle_plugin_player_pane_t2

0x7190,	// (0x00008c6e) list_single_idle_plugin_player_pane_t3

0x719e,	// (0x00008c7c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4a,	// (0x00011828) list_single_idle_plugin_player_pane_t

0x71ac,	// (0x00008c8a) wait_bar_pane_cp15

0x71b4,	// (0x00008c92) grid_ai_notification_pane

0x3caa,	// (0x00005788) list_single_idle_plugin_notification_pane_g1

0xd33b,	// (0x0000ee19) cell_ai_notification_pane_ParamLimits

0xd33b,	// (0x0000ee19) cell_ai_notification_pane

0x71ca,	// (0x00008ca8) cell_ai_notification_pane_g1

0x71d2,	// (0x00008cb0) cell_ai_notification_pane_t1

0xd348,	// (0x0000ee26) tb_ext_find_button_pane

0xd350,	// (0x0000ee2e) tb_ext_find_pane_g1

0xd358,	// (0x0000ee36) tb_ext_find_pane_t1

0x02f2,	// (0x00001dd0) tb_ext_find_button_pane_g1

0x71fe,	// (0x00008cdc) tb_ext_find_button_pane_g2

0x0001,

0xfd53,	// (0x00011831) tb_ext_find_button_pane_g

0xd163,	// (0x0000ec41) main_idle_act4_pane_t1_ParamLimits

0xd17b,	// (0x0000ec59) main_idle_act4_pane_t2_ParamLimits

0xfd11,	// (0x000117ef) main_idle_act4_pane_t_ParamLimits

0xd1af,	// (0x0000ec8d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd1c6,	// (0x0000eca4) sat_plugin_idle_act4_pane_ParamLimits

0xd1c6,	// (0x0000eca4) sat_plugin_idle_act4_pane

0xd366,	// (0x0000ee44) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd366,	// (0x0000ee44) sat_plugin_idle_act4_pane_t1

0xd37e,	// (0x0000ee5c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd37e,	// (0x0000ee5c) sat_plugin_idle_act4_pane_t2

0xd396,	// (0x0000ee74) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd396,	// (0x0000ee74) sat_plugin_idle_act4_pane_t3

0xd3ae,	// (0x0000ee8c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd3ae,	// (0x0000ee8c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd58,	// (0x00011836) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd58,	// (0x00011836) sat_plugin_idle_act4_pane_t

0xe7ac,	// (0x0001028a) popup_battery_window_ParamLimits

0xe7ac,	// (0x0001028a) popup_battery_window

0xea32,	// (0x00010510) bg_popup_sub_pane_cp25_ParamLimits

0xea32,	// (0x00010510) bg_popup_sub_pane_cp25

0x7253,	// (0x00008d31) popup_battery_window_g1_ParamLimits

0x7253,	// (0x00008d31) popup_battery_window_g1

0x725f,	// (0x00008d3d) popup_battery_window_t1_ParamLimits

0x725f,	// (0x00008d3d) popup_battery_window_t1

0x7271,	// (0x00008d4f) popup_battery_window_t2_ParamLimits

0x7271,	// (0x00008d4f) popup_battery_window_t2

0x0001,

0xfd61,	// (0x0001183f) popup_battery_window_t_ParamLimits

0xfd61,	// (0x0001183f) popup_battery_window_t

0xaed2,	// (0x0000c9b0) midp_canvas_pane_ParamLimits

0xaf2e,	// (0x0000ca0c) midp_keypad_pane_ParamLimits

0xaf2e,	// (0x0000ca0c) midp_keypad_pane

0x1103,	// (0x00002be1) main_midp_pane_ParamLimits

0x4740,	// (0x0000621e) signal_pane_g2_cp_ParamLimits

0xd3c6,	// (0x0000eea4) aid_size_cell_midp_keypad_ParamLimits

0xd3c6,	// (0x0000eea4) aid_size_cell_midp_keypad

0xd3e4,	// (0x0000eec2) midp_keyp_game_grid_pane_ParamLimits

0xd3e4,	// (0x0000eec2) midp_keyp_game_grid_pane

0xd40b,	// (0x0000eee9) midp_keyp_rocker_pane_ParamLimits

0xd40b,	// (0x0000eee9) midp_keyp_rocker_pane

0xd45a,	// (0x0000ef38) midp_keyp_sk_left_pane_ParamLimits

0xd45a,	// (0x0000ef38) midp_keyp_sk_left_pane

0xd4b0,	// (0x0000ef8e) midp_keyp_sk_right_pane_ParamLimits

0xd4b0,	// (0x0000ef8e) midp_keyp_sk_right_pane

0xe61f,	// (0x000100fd) bg_button_pane_cp03

0xd506,	// (0x0000efe4) midp_keyp_sk_left_pane_g1

0xe61f,	// (0x000100fd) bg_button_pane_cp04

0xd506,	// (0x0000efe4) midp_keyp_sk_right_pane_g1

0x4cd1,	// (0x000067af) midp_keyp_rocker_pane_g1

0xd50e,	// (0x0000efec) keyp_game_cell_pane_ParamLimits

0xd50e,	// (0x0000efec) keyp_game_cell_pane

0xe61f,	// (0x000100fd) bg_button_pane_cp02

0xd534,	// (0x0000f012) keyp_game_cell_pane_g1

0xa10d,	// (0x0000bbeb) popup_fep_vkb2_window_ParamLimits

0xa10d,	// (0x0000bbeb) popup_fep_vkb2_window

0xd53d,	// (0x0000f01b) aid_size_cell_vkb2_ParamLimits

0xd53d,	// (0x0000f01b) aid_size_cell_vkb2

0xd569,	// (0x0000f047) popup_fep_vkb2_window_g1_ParamLimits

0xd569,	// (0x0000f047) popup_fep_vkb2_window_g1

0xd5b9,	// (0x0000f097) vkb2_area_bottom_pane_ParamLimits

0xd5b9,	// (0x0000f097) vkb2_area_bottom_pane

0xd615,	// (0x0000f0f3) vkb2_area_keypad_pane_ParamLimits

0xd615,	// (0x0000f0f3) vkb2_area_keypad_pane

0xd663,	// (0x0000f141) vkb2_area_top_pane_ParamLimits

0xd663,	// (0x0000f141) vkb2_area_top_pane

0xd6f0,	// (0x0000f1ce) vkb2_top_entry_pane_ParamLimits

0xd6f0,	// (0x0000f1ce) vkb2_top_entry_pane

0xd71d,	// (0x0000f1fb) vkb2_top_grid_left_pane_ParamLimits

0xd71d,	// (0x0000f1fb) vkb2_top_grid_left_pane

0xd73e,	// (0x0000f21c) vkb2_top_grid_right_pane_ParamLimits

0xd73e,	// (0x0000f21c) vkb2_top_grid_right_pane

0x75f7,	// (0x000090d5) vkb2_cell_keypad_pane_ParamLimits

0x75f7,	// (0x000090d5) vkb2_cell_keypad_pane

0xd786,	// (0x0000f264) vkb2_area_bottom_grid_pane_ParamLimits

0xd786,	// (0x0000f264) vkb2_area_bottom_grid_pane

0xd7b0,	// (0x0000f28e) vkb2_area_bottom_pane_g1_ParamLimits

0xd7b0,	// (0x0000f28e) vkb2_area_bottom_pane_g1

0xd7d6,	// (0x0000f2b4) vkb2_area_bottom_pane_g2_ParamLimits

0xd7d6,	// (0x0000f2b4) vkb2_area_bottom_pane_g2

0xd807,	// (0x0000f2e5) vkb2_area_bottom_pane_g3_ParamLimits

0xd807,	// (0x0000f2e5) vkb2_area_bottom_pane_g3

0x0002,

0xfd66,	// (0x00011844) vkb2_area_bottom_pane_g_ParamLimits

0xfd66,	// (0x00011844) vkb2_area_bottom_pane_g

0x77a1,	// (0x0000927f) vkb2_top_cell_left_pane_ParamLimits

0x77a1,	// (0x0000927f) vkb2_top_cell_left_pane

0xd871,	// (0x0000f34f) vkb2_top_entry_pane_g1_ParamLimits

0xd871,	// (0x0000f34f) vkb2_top_entry_pane_g1

0xd87f,	// (0x0000f35d) vkb2_top_entry_pane_t1_ParamLimits

0xd87f,	// (0x0000f35d) vkb2_top_entry_pane_t1

0x7809,	// (0x000092e7) vkb2_top_entry_pane_t2_ParamLimits

0x7809,	// (0x000092e7) vkb2_top_entry_pane_t2

0x783b,	// (0x00009319) vkb2_top_entry_pane_t3_ParamLimits

0x783b,	// (0x00009319) vkb2_top_entry_pane_t3

0x0002,

0xfd6d,	// (0x0001184b) vkb2_top_entry_pane_t_ParamLimits

0xfd6d,	// (0x0001184b) vkb2_top_entry_pane_t

0xd8b8,	// (0x0000f396) vkb2_top_grid_right_pane_g1_ParamLimits

0xd8b8,	// (0x0000f396) vkb2_top_grid_right_pane_g1

0x78a2,	// (0x00009380) vkb2_top_grid_right_pane_g2_ParamLimits

0x78a2,	// (0x00009380) vkb2_top_grid_right_pane_g2

0x78ba,	// (0x00009398) vkb2_top_grid_right_pane_g3_ParamLimits

0x78ba,	// (0x00009398) vkb2_top_grid_right_pane_g3

0xd8ce,	// (0x0000f3ac) vkb2_top_grid_right_pane_g4_ParamLimits

0xd8ce,	// (0x0000f3ac) vkb2_top_grid_right_pane_g4

0x0003,

0xfd74,	// (0x00011852) vkb2_top_grid_right_pane_g_ParamLimits

0xfd74,	// (0x00011852) vkb2_top_grid_right_pane_g

0x78e8,	// (0x000093c6) vkb2_top_cell_left_pane_g1

0x78ff,	// (0x000093dd) vkb2_cell_keypad_pane_g1_ParamLimits

0x78ff,	// (0x000093dd) vkb2_cell_keypad_pane_g1

0x790d,	// (0x000093eb) vkb2_cell_keypad_pane_t1_ParamLimits

0x790d,	// (0x000093eb) vkb2_cell_keypad_pane_t1

0x7924,	// (0x00009402) vkb2_cell_bottom_grid_pane_ParamLimits

0x7924,	// (0x00009402) vkb2_cell_bottom_grid_pane

0x795d,	// (0x0000943b) vkb2_cell_bottom_grid_pane_g1

0xd1f7,	// (0x0000ecd5) aid_call2_pane_cp02

0xd1ff,	// (0x0000ecdd) aid_call_pane_cp02

0xd207,	// (0x0000ece5) clock_digital_number_pane_cp10

0xd20f,	// (0x0000eced) clock_digital_number_pane_cp11

0xd217,	// (0x0000ecf5) clock_digital_number_pane_cp12

0xd21f,	// (0x0000ecfd) clock_digital_number_pane_cp13

0xd227,	// (0x0000ed05) clock_digital_separator_pane_cp10

0x02f2,	// (0x00001dd0) popup_clock_digital_analogue_window_cp2_g1

0x02f2,	// (0x00001dd0) popup_clock_digital_analogue_window_cp2_g2

0xd22f,	// (0x0000ed0d) popup_clock_digital_analogue_window_cp2_g3

0x02f2,	// (0x00001dd0) popup_clock_digital_analogue_window_cp2_g4

0xd22f,	// (0x0000ed0d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd29,	// (0x00011807) popup_clock_digital_analogue_window_cp2_g

0xd237,	// (0x0000ed15) popup_clock_digital_analogue_window_cp2_t1

0xd245,	// (0x0000ed23) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd34,	// (0x00011812) popup_clock_digital_analogue_window_cp2_t

0x4cd1,	// (0x000067af) clock_digital_number_pane_cp10_g1

0x4cd1,	// (0x000067af) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000115fa) clock_digital_number_pane_cp10_g

0x4cd1,	// (0x000067af) clock_digital_separator_pane_cp10_g1

0x4cd1,	// (0x000067af) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1c,	// (0x000115fa) clock_digital_separator_pane_cp10_g

0x6e9c,	// (0x0000897a) uniindi_top_pane_g3

0x6ead,	// (0x0000898b) uniindi_top_pane_g4

0x7682,	// (0x00009160) vkb2_row_keypad_pane_ParamLimits

0x7682,	// (0x00009160) vkb2_row_keypad_pane

0x7979,	// (0x00009457) vkb2_cell_t_keypad_pane_ParamLimits

0x7979,	// (0x00009457) vkb2_cell_t_keypad_pane

0x7989,	// (0x00009467) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7989,	// (0x00009467) vkb2_cell_t_keypad_pane_cp08

0x799e,	// (0x0000947c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x799e,	// (0x0000947c) vkb2_cell_t_keypad_pane_cp09

0x79b2,	// (0x00009490) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x79b2,	// (0x00009490) vkb2_cell_t_keypad_pane_cp01

0x79c3,	// (0x000094a1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x79c3,	// (0x000094a1) vkb2_cell_t_keypad_pane_cp02

0x79d4,	// (0x000094b2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x79d4,	// (0x000094b2) vkb2_cell_t_keypad_pane_cp03

0x79e5,	// (0x000094c3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x79e5,	// (0x000094c3) vkb2_cell_t_keypad_pane_cp04

0x79f6,	// (0x000094d4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x79f6,	// (0x000094d4) vkb2_cell_t_keypad_pane_cp05

0x7a07,	// (0x000094e5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7a07,	// (0x000094e5) vkb2_cell_t_keypad_pane_cp06

0x7a1a,	// (0x000094f8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7a1a,	// (0x000094f8) vkb2_cell_t_keypad_pane_cp07

0x7a2f,	// (0x0000950d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7a2f,	// (0x0000950d) vkb2_cell_t_keypad_pane_cp10

0x5176,	// (0x00006c54) vkb2_cell_t_keypad_pane_g1

0x7a44,	// (0x00009522) vkb2_cell_t_keypad_pane_t1

0xe61f,	// (0x000100fd) popup_grid_graphic2_window

0xd8e4,	// (0x0000f3c2) aid_size_cell_graphic2_ParamLimits

0xd8e4,	// (0x0000f3c2) aid_size_cell_graphic2

0xd922,	// (0x0000f400) bg_popup_window_pane_cp21_ParamLimits

0xd922,	// (0x0000f400) bg_popup_window_pane_cp21

0xd930,	// (0x0000f40e) graphic2_pages_pane_ParamLimits

0xd930,	// (0x0000f40e) graphic2_pages_pane

0xd988,	// (0x0000f466) grid_graphic2_control_pane_ParamLimits

0xd988,	// (0x0000f466) grid_graphic2_control_pane

0xd9d0,	// (0x0000f4ae) grid_graphic2_pane_ParamLimits

0xd9d0,	// (0x0000f4ae) grid_graphic2_pane

0xda5b,	// (0x0000f539) cell_graphic2_pane

0xe61f,	// (0x000100fd) main_comp_mode_pane

0x65d3,	// (0x000080b1) list_ai3_gene_pane_ParamLimits

0xceca,	// (0x0000e9a8) bg_popup_window_pane_cp19_ParamLimits

0x6a08,	// (0x000084e6) bg_touch_area_indi_pane_ParamLimits

0x6a08,	// (0x000084e6) bg_touch_area_indi_pane

0x6a1e,	// (0x000084fc) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a1e,	// (0x000084fc) bg_touch_area_indi_pane_cp01

0x6a34,	// (0x00008512) bg_touch_area_indi_pane_cp02_ParamLimits

0x6a34,	// (0x00008512) bg_touch_area_indi_pane_cp02

0x6a4e,	// (0x0000852c) bg_touch_area_indi_pane_cp03_ParamLimits

0x6a4e,	// (0x0000852c) bg_touch_area_indi_pane_cp03

0x6a68,	// (0x00008546) popup_slider_window_g1_ParamLimits

0x6a84,	// (0x00008562) popup_slider_window_g2_ParamLimits

0x6aa0,	// (0x0000857e) popup_slider_window_g3_ParamLimits

0xfcbe,	// (0x0001179c) popup_slider_window_g_ParamLimits

0x6b06,	// (0x000085e4) popup_slider_window_t1_ParamLimits

0x6b7a,	// (0x00008658) small_volume_slider_vertical_pane_ParamLimits

0xda5b,	// (0x0000f539) cell_graphic2_pane_ParamLimits

0xdabd,	// (0x0000f59b) bg_button_pane_cp10_ParamLimits

0xdabd,	// (0x0000f59b) bg_button_pane_cp10

0xdad0,	// (0x0000f5ae) bg_button_pane_cp11_ParamLimits

0xdad0,	// (0x0000f5ae) bg_button_pane_cp11

0xdae3,	// (0x0000f5c1) graphic2_pages_pane_g1_ParamLimits

0xdae3,	// (0x0000f5c1) graphic2_pages_pane_g1

0xdafe,	// (0x0000f5dc) graphic2_pages_pane_g2_ParamLimits

0xdafe,	// (0x0000f5dc) graphic2_pages_pane_g2

0x0001,

0xfd82,	// (0x00011860) graphic2_pages_pane_g_ParamLimits

0xfd82,	// (0x00011860) graphic2_pages_pane_g

0xdb16,	// (0x0000f5f4) graphic2_pages_pane_t1_ParamLimits

0xdb16,	// (0x0000f5f4) graphic2_pages_pane_t1

0xdb2e,	// (0x0000f60c) cell_graphic2_control_pane_ParamLimits

0xdb2e,	// (0x0000f60c) cell_graphic2_control_pane

0xdb62,	// (0x0000f640) cell_graphic2_pane_g1_ParamLimits

0xdb62,	// (0x0000f640) cell_graphic2_pane_g1

0x4f98,	// (0x00006a76) cell_graphic2_pane_g2_ParamLimits

0x4f98,	// (0x00006a76) cell_graphic2_pane_g2

0xdb6f,	// (0x0000f64d) cell_graphic2_pane_g3_ParamLimits

0xdb6f,	// (0x0000f64d) cell_graphic2_pane_g3

0x4fa5,	// (0x00006a83) cell_graphic2_pane_g4_ParamLimits

0x4fa5,	// (0x00006a83) cell_graphic2_pane_g4

0xdb7c,	// (0x0000f65a) cell_graphic2_pane_g5_ParamLimits

0xdb7c,	// (0x0000f65a) cell_graphic2_pane_g5

0x0004,

0xfd87,	// (0x00011865) cell_graphic2_pane_g_ParamLimits

0xfd87,	// (0x00011865) cell_graphic2_pane_g

0xdb98,	// (0x0000f676) cell_graphic2_pane_t1_ParamLimits

0xdb98,	// (0x0000f676) cell_graphic2_pane_t1

0x2d42,	// (0x00004820) grid_highlight_pane_cp11_ParamLimits

0x2d42,	// (0x00004820) grid_highlight_pane_cp11

0xea32,	// (0x00010510) bg_button_pane_cp05

0xdbe1,	// (0x0000f6bf) cell_graphic2_control_pane_g1

0x4cd1,	// (0x000067af) bg_touch_area_indi_pane_g1

0x7d27,	// (0x00009805) aid_cmod_rocker_key_size

0x7d31,	// (0x0000980f) aid_cmode_itu_key_size

0x7d3b,	// (0x00009819) main_cmode_video_pane

0x7d45,	// (0x00009823) main_comp_mode_itu_pane

0x7d51,	// (0x0000982f) main_comp_mode_rocker_pane

0x7d5d,	// (0x0000983b) cell_cmode_rocker_pane_ParamLimits

0x7d5d,	// (0x0000983b) cell_cmode_rocker_pane

0x7d71,	// (0x0000984f) cell_cmode_itu_pane_ParamLimits

0x7d71,	// (0x0000984f) cell_cmode_itu_pane

0xefd4,	// (0x00010ab2) bg_button_pane_cp06_ParamLimits

0xefd4,	// (0x00010ab2) bg_button_pane_cp06

0x5176,	// (0x00006c54) cell_cmode_rocker_pane_g1_ParamLimits

0x5176,	// (0x00006c54) cell_cmode_rocker_pane_g1

0x6cf4,	// (0x000087d2) cell_cmode_rocker_pane_g2_ParamLimits

0x6cf4,	// (0x000087d2) cell_cmode_rocker_pane_g2

0x0001,

0xfd97,	// (0x00011875) cell_cmode_rocker_pane_g_ParamLimits

0xfd97,	// (0x00011875) cell_cmode_rocker_pane_g

0xe61f,	// (0x000100fd) bg_button_pane_cp07

0x7d88,	// (0x00009866) cell_cmode_itu_pane_g1

0x7d91,	// (0x0000986f) cell_cmode_itu_pane_t1

0x7d9f,	// (0x0000987d) cell_cmode_itu_pane_t2

0x0001,

0xfd9c,	// (0x0001187a) cell_cmode_itu_pane_t

0x6f21,	// (0x000089ff) aid_touch_ctrl_left

0x6f29,	// (0x00008a07) aid_touch_ctrl_right

0xe61f,	// (0x000100fd) compa_mode_pane

0xdc09,	// (0x0000f6e7) aid_cmod_rocker_key_size_cp

0xdc13,	// (0x0000f6f1) aid_cmode_itu_key_size_cp

0x7dc1,	// (0x0000989f) compa_mode_pane_g1

0x7dc9,	// (0x000098a7) compa_mode_pane_g2

0x7dd1,	// (0x000098af) compa_mode_pane_g3

0x0002,

0xfda1,	// (0x0001187f) compa_mode_pane_g

0xdc1d,	// (0x0000f6fb) main_comp_mode_itu_pane_cp

0xdc25,	// (0x0000f703) main_comp_mode_rocker_pane_cp

0xdc2d,	// (0x0000f70b) cell_cmode_itu_pane_cp_ParamLimits

0xdc2d,	// (0x0000f70b) cell_cmode_itu_pane_cp

0xdc42,	// (0x0000f720) cell_cmode_rocker_pane_cp_ParamLimits

0xdc42,	// (0x0000f720) cell_cmode_rocker_pane_cp

0xefd4,	// (0x00010ab2) bg_button_pane_cp06_cp_ParamLimits

0xefd4,	// (0x00010ab2) bg_button_pane_cp06_cp

0x5176,	// (0x00006c54) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5176,	// (0x00006c54) cell_cmode_rocker_pane_g1_cp

0x4cd1,	// (0x000067af) cell_cmode_rocker_pane_g2_cp

0xe61f,	// (0x000100fd) bg_button_pane_cp07_cp

0xdc54,	// (0x0000f732) cell_cmode_itu_pane_g1_cp

0xdc5d,	// (0x0000f73b) cell_cmode_itu_pane_t1_cp

0xdc5d,	// (0x0000f73b) cell_cmode_itu_pane_t2_cp

0xc211,	// (0x0000dcef) settings_code_pane_cp2

0xe85c,	// (0x0001033a) bg_popup_window_pane_cp3_ParamLimits

0xec46,	// (0x00010724) heading_pane_cp3_ParamLimits

0xec55,	// (0x00010733) listscroll_popup_graphic_pane_ParamLimits

0x4d40,	// (0x0000681e) fep_hwr_aid_pane_ParamLimits

0x6bf5,	// (0x000086d3) aid_touch_sctrl_top_ParamLimits

0x6c02,	// (0x000086e0) sctrl_sk_top_pane_g1_ParamLimits

0x5176,	// (0x00006c54) sctrl_sk_top_pane_g2_ParamLimits

0xfcd7,	// (0x000117b5) sctrl_sk_top_pane_g_ParamLimits

0x6c0f,	// (0x000086ed) sctrl_sk_top_pane_t1_ParamLimits

0x6bf5,	// (0x000086d3) aid_touch_sctrl_bottom_ParamLimits

0x6c0f,	// (0x000086ed) sctrl_sk_bottom_pane_t1_ParamLimits

0x6e66,	// (0x00008944) aid_area_touch_clock

0xd6af,	// (0x0000f18d) aid_vkb2_area_top_pane_cell_ParamLimits

0xd6af,	// (0x0000f18d) aid_vkb2_area_top_pane_cell

0xd75f,	// (0x0000f23d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd75f,	// (0x0000f23d) aid_vkb2_area_bottom_pane_cell

0x77c1,	// (0x0000929f) popup_char_count_window

0x7e27,	// (0x00009905) popup_char_count_window_g1

0x7e30,	// (0x0000990e) popup_char_count_window_g2

0x7e39,	// (0x00009917) popup_char_count_window_g3

0x0002,

0xfda8,	// (0x00011886) popup_char_count_window_g

0x7e42,	// (0x00009920) popup_char_count_window_t1

0x740b,	// (0x00008ee9) popup_fep_char_preview_window_ParamLimits

0x740b,	// (0x00008ee9) popup_fep_char_preview_window

0xd6cf,	// (0x0000f1ad) vkb2_top_candi_pane_ParamLimits

0xd6cf,	// (0x0000f1ad) vkb2_top_candi_pane

0xdc6b,	// (0x0000f749) cell_vkb2_top_candi_pane_ParamLimits

0xdc6b,	// (0x0000f749) cell_vkb2_top_candi_pane

0x2570,	// (0x0000404e) bg_popup_fep_char_preview_window_ParamLimits

0x2570,	// (0x0000404e) bg_popup_fep_char_preview_window

0x7e9e,	// (0x0000997c) popup_fep_char_preview_window_t1_ParamLimits

0x7e9e,	// (0x0000997c) popup_fep_char_preview_window_t1

0x7ed8,	// (0x000099b6) bg_popup_fep_char_preview_window_g1

0x7ee0,	// (0x000099be) bg_popup_fep_char_preview_window_g2

0x7ee8,	// (0x000099c6) bg_popup_fep_char_preview_window_g3

0x7ef0,	// (0x000099ce) bg_popup_fep_char_preview_window_g4

0x7ef8,	// (0x000099d6) bg_popup_fep_char_preview_window_g5

0x7f00,	// (0x000099de) bg_popup_fep_char_preview_window_g6

0x7f08,	// (0x000099e6) bg_popup_fep_char_preview_window_g7

0x7f10,	// (0x000099ee) bg_popup_fep_char_preview_window_g8

0x7f18,	// (0x000099f6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaf,	// (0x0001188d) bg_popup_fep_char_preview_window_g

0x5176,	// (0x00006c54) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5176,	// (0x00006c54) cell_vkb2_top_candi_pane_g1

0x550b,	// (0x00006fe9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x550b,	// (0x00006fe9) cell_vkb2_top_candi_pane_g2

0x552c,	// (0x0000700a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x552c,	// (0x0000700a) cell_vkb2_top_candi_pane_g3

0x7f28,	// (0x00009a06) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7f28,	// (0x00009a06) cell_vkb2_top_candi_pane_g4

0x7f49,	// (0x00009a27) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7f49,	// (0x00009a27) cell_vkb2_top_candi_pane_g5

0x6cf4,	// (0x000087d2) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6cf4,	// (0x000087d2) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc4,	// (0x000118a2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc4,	// (0x000118a2) cell_vkb2_top_candi_pane_g

0x7f6a,	// (0x00009a48) cell_vkb2_top_candi_pane_t1

0x3491,	// (0x00004f6f) aid_size_touch_slider_mark_ParamLimits

0x3491,	// (0x00004f6f) aid_size_touch_slider_mark

0xd96c,	// (0x0000f44a) grid_graphic2_catg_pane_ParamLimits

0xd96c,	// (0x0000f44a) grid_graphic2_catg_pane

0xda2a,	// (0x0000f508) popup_grid_graphic2_window_t1_ParamLimits

0xda2a,	// (0x0000f508) popup_grid_graphic2_window_t1

0xda40,	// (0x0000f51e) popup_grid_graphic2_window_t2_ParamLimits

0xda40,	// (0x0000f51e) popup_grid_graphic2_window_t2

0x0001,

0xfd7d,	// (0x0001185b) popup_grid_graphic2_window_t_ParamLimits

0xfd7d,	// (0x0001185b) popup_grid_graphic2_window_t

0xea32,	// (0x00010510) bg_button_pane_cp05_ParamLimits

0xdbe1,	// (0x0000f6bf) cell_graphic2_control_pane_g1_ParamLimits

0xdcd7,	// (0x0000f7b5) cell_graphic2_catg_pane_ParamLimits

0xdcd7,	// (0x0000f7b5) cell_graphic2_catg_pane

0xe61f,	// (0x000100fd) bg_button_pane_cp12

0xdce9,	// (0x0000f7c7) cell_graphic2_catg_pane_g1

0x6e32,	// (0x00008910) cell_tb_ext_pane_t1_ParamLimits

0x785f,	// (0x0000933d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x785f,	// (0x0000933d) vkb2_top_cell_right_narrow_pane

0x7877,	// (0x00009355) vkb2_top_cell_right_wide_pane_ParamLimits

0x7877,	// (0x00009355) vkb2_top_cell_right_wide_pane

0x4d32,	// (0x00006810) bg_vkb2_func_pane_ParamLimits

0x4d32,	// (0x00006810) bg_vkb2_func_pane

0x78e8,	// (0x000093c6) vkb2_top_cell_left_pane_g1_ParamLimits

0x4d32,	// (0x00006810) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4d32,	// (0x00006810) bg_vkb2_fuc_pane_cp03

0x795d,	// (0x0000943b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1d2e,	// (0x0000380c) bg_vkb2_func_pane_g1

0x1d36,	// (0x00003814) bg_vkb2_func_pane_g2

0x1d46,	// (0x00003824) bg_vkb2_func_pane_g3

0x1d3e,	// (0x0000381c) bg_vkb2_func_pane_g4

0x1d4e,	// (0x0000382c) bg_vkb2_func_pane_g5

0x1d56,	// (0x00003834) bg_vkb2_func_pane_g6

0x1d5e,	// (0x0000383c) bg_vkb2_func_pane_g7

0x1d66,	// (0x00003844) bg_vkb2_func_pane_g8

0x1d26,	// (0x00003804) bg_vkb2_func_pane_g9

0x0008,

0xfdd1,	// (0x000118af) bg_vkb2_func_pane_g

0x4d32,	// (0x00006810) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4d32,	// (0x00006810) bg_vkb2_fuc_pane_cp01

0x78e8,	// (0x000093c6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x78e8,	// (0x000093c6) vkb2_top_cell_right_wide_pane_g1

0x4d32,	// (0x00006810) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4d32,	// (0x00006810) bg_vkb2_fuc_pane_cp02

0x7fa3,	// (0x00009a81) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7fa3,	// (0x00009a81) vkb2_top_cell_right_narrow_pane_g1

0xce0c,	// (0x0000e8ea) aid_touch_area_decrease_ParamLimits

0xce0c,	// (0x0000e8ea) aid_touch_area_decrease

0xce46,	// (0x0000e924) aid_touch_area_increase_ParamLimits

0xce46,	// (0x0000e924) aid_touch_area_increase

0xce6e,	// (0x0000e94c) aid_touch_area_mute_ParamLimits

0xce6e,	// (0x0000e94c) aid_touch_area_mute

0xce96,	// (0x0000e974) aid_touch_area_slider_ParamLimits

0xce96,	// (0x0000e974) aid_touch_area_slider

0xced6,	// (0x0000e9b4) popup_slider_window_g4_ParamLimits

0xced6,	// (0x0000e9b4) popup_slider_window_g4

0xcefe,	// (0x0000e9dc) popup_slider_window_g5_ParamLimits

0xcefe,	// (0x0000e9dc) popup_slider_window_g5

0xcf32,	// (0x0000ea10) popup_slider_window_g6_ParamLimits

0xcf32,	// (0x0000ea10) popup_slider_window_g6

0x6b34,	// (0x00008612) popup_slider_window_t2_ParamLimits

0x6b34,	// (0x00008612) popup_slider_window_t2

0x0001,

0xfccb,	// (0x000117a9) popup_slider_window_t_ParamLimits

0xfccb,	// (0x000117a9) popup_slider_window_t

0xcf4e,	// (0x0000ea2c) slider_pane_ParamLimits

0xcf4e,	// (0x0000ea2c) slider_pane

0x7fbf,	// (0x00009a9d) slider_pane_g1_ParamLimits

0x7fbf,	// (0x00009a9d) slider_pane_g1

0x7fd3,	// (0x00009ab1) slider_pane_g2_ParamLimits

0x7fd3,	// (0x00009ab1) slider_pane_g2

0x7fe9,	// (0x00009ac7) slider_pane_g3_ParamLimits

0x7fe9,	// (0x00009ac7) slider_pane_g3

0x0003,

0xfde4,	// (0x000118c2) slider_pane_g_ParamLimits

0xfde4,	// (0x000118c2) slider_pane_g

0xb770,	// (0x0000d24e) popup_tb_float_extension_window_ParamLimits

0xb770,	// (0x0000d24e) popup_tb_float_extension_window

0x8015,	// (0x00009af3) aid_size_cell_tb_float_ext

0xe61f,	// (0x000100fd) bg_popup_sub_window_cp28

0x8021,	// (0x00009aff) grid_tb_float_ext_pane

0x802d,	// (0x00009b0b) cell_tb_float_ext_pane_ParamLimits

0x802d,	// (0x00009b0b) cell_tb_float_ext_pane

0x8049,	// (0x00009b27) cell_tb_float_ext_pane_g1

0x8052,	// (0x00009b30) grid_highlight_pane_cp12

0xc62c,	// (0x0000e10a) cell_last_hwr_side_pane_ParamLimits

0xc62c,	// (0x0000e10a) cell_last_hwr_side_pane

0x4cd1,	// (0x000067af) cell_last_hwr_side_pane_g1

0x805b,	// (0x00009b39) cell_last_hwr_side_pane_g2

0x0001,

0xfded,	// (0x000118cb) cell_last_hwr_side_pane_g

0xd83c,	// (0x0000f31a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd83c,	// (0x0000f31a) vkb2_area_bottom_space_btn_pane

0x5176,	// (0x00006c54) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7a44,	// (0x00009522) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7f6a,	// (0x00009a48) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8064,	// (0x00009b42) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8064,	// (0x00009b42) vkb2_area_bottom_space_btn_pane_g1

0x809e,	// (0x00009b7c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x809e,	// (0x00009b7c) vkb2_area_bottom_space_btn_pane_g2

0x80d4,	// (0x00009bb2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x80d4,	// (0x00009bb2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf2,	// (0x000118d0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf2,	// (0x000118d0) vkb2_area_bottom_space_btn_pane_g

0x4df7,	// (0x000068d5) cel_fep_hwr_func_pane_ParamLimits

0x4df7,	// (0x000068d5) cel_fep_hwr_func_pane

0xc601,	// (0x0000e0df) cell_hwr_side_button_pane_ParamLimits

0xc601,	// (0x0000e0df) cell_hwr_side_button_pane

0x6e66,	// (0x00008944) aid_area_touch_clock_ParamLimits

0xea32,	// (0x00010510) bg_uniindi_top_pane_ParamLimits

0x6e7a,	// (0x00008958) uniindi_top_pane_g1_ParamLimits

0x6e90,	// (0x0000896e) uniindi_top_pane_g2_ParamLimits

0x6e9c,	// (0x0000897a) uniindi_top_pane_g3_ParamLimits

0x6ead,	// (0x0000898b) uniindi_top_pane_g4_ParamLimits

0xfd03,	// (0x000117e1) uniindi_top_pane_g_ParamLimits

0x6eba,	// (0x00008998) uniindi_top_pane_t1_ParamLimits

0xea32,	// (0x00010510) bg_vkb2_func_pane_cp01_ParamLimits

0xea32,	// (0x00010510) bg_vkb2_func_pane_cp01

0x811e,	// (0x00009bfc) cel_fep_hwr_func_pane_g1_ParamLimits

0x811e,	// (0x00009bfc) cel_fep_hwr_func_pane_g1

0xea32,	// (0x00010510) bg_vkb2_func_pane_cp02_ParamLimits

0xea32,	// (0x00010510) bg_vkb2_func_pane_cp02

0x811e,	// (0x00009bfc) cell_hwr_side_button_pane_g1_ParamLimits

0x811e,	// (0x00009bfc) cell_hwr_side_button_pane_g1

0x1af9,	// (0x000035d7) status_pane_g4_ParamLimits

0x1af9,	// (0x000035d7) status_pane_g4

0x1b13,	// (0x000035f1) status_pane_t1

0x4a84,	// (0x00006562) form2_midp_gauge_slider_cont_pane

0x4a8c,	// (0x0000656a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc559,	// (0x0000e037) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc56b,	// (0x0000e049) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacf,	// (0x000115ad) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ac2,	// (0x000065a0) form2_midp_slider_pane_ParamLimits

0x73d3,	// (0x00008eb1) aid_size_cell_func_vkb2_ParamLimits

0x73d3,	// (0x00008eb1) aid_size_cell_func_vkb2

0x8001,	// (0x00009adf) slider_pane_g4_ParamLimits

0x8001,	// (0x00009adf) slider_pane_g4

0xdcf2,	// (0x0000f7d0) form2_midp_gauge_slider_pane_t2_cp01

0xdd00,	// (0x0000f7de) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdd00,	// (0x0000f7de) form2_midp_gauge_slider_pane_t3_cp01

0x8157,	// (0x00009c35) form2_midp_slider_pane_cp01

0xe61f,	// (0x000100fd) navi_smil_pane

0x818b,	// (0x00009c69) navi_smil_pane_g1

0x8193,	// (0x00009c71) navi_smil_pane_t1

0x8160,	// (0x00009c3e) form2_midp_slider_pane_g1

0x8169,	// (0x00009c47) form2_midp_slider_pane_g2

0x8171,	// (0x00009c4f) form2_midp_slider_pane_g3

0x8160,	// (0x00009c3e) form2_midp_slider_pane_g4

0xdd1d,	// (0x0000f7fb) form2_midp_slider_pane_g5

0x0004,

0xfdfb,	// (0x000118d9) form2_midp_slider_pane_g

0x810e,	// (0x00009bec) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x810e,	// (0x00009bec) vkb2_area_bottom_space_btn_pane_g4

0xb957,	// (0x0000d435) lc0_navi_pane_ParamLimits

0xb957,	// (0x0000d435) lc0_navi_pane

0xb9c7,	// (0x0000d4a5) lc0_stat_indi_pane_ParamLimits

0xb9c7,	// (0x0000d4a5) lc0_stat_indi_pane

0xb9dc,	// (0x0000d4ba) ls0_title_pane_ParamLimits

0xb9dc,	// (0x0000d4ba) ls0_title_pane

0xefd4,	// (0x00010ab2) bg_popup_sub_pane_cp14_ParamLimits

0x6e4d,	// (0x0000892b) list_uniindi_pane_ParamLimits

0x6e59,	// (0x00008937) uniindi_top_pane_ParamLimits

0x6ef9,	// (0x000089d7) list_single_uniindi_pane_g1_ParamLimits

0x6f0c,	// (0x000089ea) list_single_uniindi_pane_t1_ParamLimits

0xdd26,	// (0x0000f804) lc0_stat_clock_pane_ParamLimits

0xdd26,	// (0x0000f804) lc0_stat_clock_pane

0xdd33,	// (0x0000f811) lc0_stat_indi_pane_g1_ParamLimits

0xdd33,	// (0x0000f811) lc0_stat_indi_pane_g1

0xdd40,	// (0x0000f81e) lc0_stat_indi_pane_g2_ParamLimits

0xdd40,	// (0x0000f81e) lc0_stat_indi_pane_g2

0x0001,

0xfe06,	// (0x000118e4) lc0_stat_indi_pane_g_ParamLimits

0xfe06,	// (0x000118e4) lc0_stat_indi_pane_g

0xdd4d,	// (0x0000f82b) lc0_uni_indicator_pane_ParamLimits

0xdd4d,	// (0x0000f82b) lc0_uni_indicator_pane

0xdd5a,	// (0x0000f838) ls0_title_pane_g1_ParamLimits

0xdd5a,	// (0x0000f838) ls0_title_pane_g1

0xdd6e,	// (0x0000f84c) ls0_title_pane_t1_ParamLimits

0xdd6e,	// (0x0000f84c) ls0_title_pane_t1

0xdd9c,	// (0x0000f87a) lc0_uni_indicator_pane_g1_ParamLimits

0xdd9c,	// (0x0000f87a) lc0_uni_indicator_pane_g1

0x8232,	// (0x00009d10) lc0_stat_clock_pane_t1

0xe61f,	// (0x000100fd) main_ai5_pane

0x8240,	// (0x00009d1e) ai5_sk_pane_ParamLimits

0x8240,	// (0x00009d1e) ai5_sk_pane

0xddbb,	// (0x0000f899) cell_ai5_widget_pane_ParamLimits

0xddbb,	// (0x0000f899) cell_ai5_widget_pane

0xde3a,	// (0x0000f918) aid_size_cell_widget_grid

0x82fa,	// (0x00009dd8) bg_ai5_widget_pane_ParamLimits

0x82fa,	// (0x00009dd8) bg_ai5_widget_pane

0xde6e,	// (0x0000f94c) cell_ai5_widget_pane_g2

0xde82,	// (0x0000f960) cell_ai5_widget_pane_g3

0xde9c,	// (0x0000f97a) cell_ai5_widget_pane_g4

0xdeac,	// (0x0000f98a) cell_ai5_widget_pane_g5

0xdebc,	// (0x0000f99a) cell_ai5_widget_pane_g6

0xdec8,	// (0x0000f9a6) cell_ai5_widget_pane_g7

0xdf34,	// (0x0000fa12) cell_ai5_widget_pane_t1_ParamLimits

0xdf34,	// (0x0000fa12) cell_ai5_widget_pane_t1

0xdf51,	// (0x0000fa2f) cell_ai5_widget_pane_t2_ParamLimits

0xdf51,	// (0x0000fa2f) cell_ai5_widget_pane_t2

0xdf69,	// (0x0000fa47) cell_ai5_widget_pane_t3_ParamLimits

0xdf69,	// (0x0000fa47) cell_ai5_widget_pane_t3

0xdf81,	// (0x0000fa5f) cell_ai5_widget_pane_t4_ParamLimits

0xdf81,	// (0x0000fa5f) cell_ai5_widget_pane_t4

0xdfa7,	// (0x0000fa85) cell_ai5_widget_pane_t5_ParamLimits

0xdfa7,	// (0x0000fa85) cell_ai5_widget_pane_t5

0x84cf,	// (0x00009fad) cell_ai5_widget_pane_t6_ParamLimits

0x84cf,	// (0x00009fad) cell_ai5_widget_pane_t6

0x84e1,	// (0x00009fbf) cell_ai5_widget_pane_t7_ParamLimits

0x84e1,	// (0x00009fbf) cell_ai5_widget_pane_t7

0xdfc7,	// (0x0000faa5) cell_ai5_widget_pane_t8_ParamLimits

0xdfc7,	// (0x0000faa5) cell_ai5_widget_pane_t8

0x000b,

0xfe26,	// (0x00011904) cell_ai5_widget_pane_t_ParamLimits

0xfe26,	// (0x00011904) cell_ai5_widget_pane_t

0xe04b,	// (0x0000fb29) grid_ai5_widget_pane

0xefd4,	// (0x00010ab2) highlight_cell_ai5_widget_pane_ParamLimits

0xefd4,	// (0x00010ab2) highlight_cell_ai5_widget_pane

0xe059,	// (0x0000fb37) ai5_sk_left_pane

0xe063,	// (0x0000fb41) ai5_sk_middle_pane

0xe06d,	// (0x0000fb4b) ai5_sk_right_pane

0x85b0,	// (0x0000a08e) bg_ai5_widget_pane_g1_ParamLimits

0x85b0,	// (0x0000a08e) bg_ai5_widget_pane_g1

0x85bc,	// (0x0000a09a) bg_ai5_widget_pane_g2_ParamLimits

0x85bc,	// (0x0000a09a) bg_ai5_widget_pane_g2

0x85c8,	// (0x0000a0a6) bg_ai5_widget_pane_g3_ParamLimits

0x85c8,	// (0x0000a0a6) bg_ai5_widget_pane_g3

0x85d4,	// (0x0000a0b2) bg_ai5_widget_pane_g4_ParamLimits

0x85d4,	// (0x0000a0b2) bg_ai5_widget_pane_g4

0x85e0,	// (0x0000a0be) bg_ai5_widget_pane_g5_ParamLimits

0x85e0,	// (0x0000a0be) bg_ai5_widget_pane_g5

0x85ec,	// (0x0000a0ca) bg_ai5_widget_pane_g6_ParamLimits

0x85ec,	// (0x0000a0ca) bg_ai5_widget_pane_g6

0x85f8,	// (0x0000a0d6) bg_ai5_widget_pane_g7_ParamLimits

0x85f8,	// (0x0000a0d6) bg_ai5_widget_pane_g7

0x8604,	// (0x0000a0e2) bg_ai5_widget_pane_g8_ParamLimits

0x8604,	// (0x0000a0e2) bg_ai5_widget_pane_g8

0x8610,	// (0x0000a0ee) bg_ai5_widget_pane_g9_ParamLimits

0x8610,	// (0x0000a0ee) bg_ai5_widget_pane_g9

0x0008,

0xfe3f,	// (0x0001191d) bg_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x0001191d) bg_ai5_widget_pane_g

0xe0a1,	// (0x0000fb7f) cell_shortcut_ai5_widget_pane_ParamLimits

0xe0a1,	// (0x0000fb7f) cell_shortcut_ai5_widget_pane

0x0bd2,	// (0x000026b0) bg_cell_shortcut_ai5_widget_pane

0x865b,	// (0x0000a139) cell_grid_ai5_widget_pane_g1

0x0bd2,	// (0x000026b0) highlight_cell_shortcut_ai5_widget_pane

0x1d36,	// (0x00003814) ai5_sk_left_pane_g1

0x8664,	// (0x0000a142) ai5_sk_left_pane_g2

0x866c,	// (0x0000a14a) ai5_sk_left_pane_g3

0x8674,	// (0x0000a152) ai5_sk_left_pane_g4

0x0003,

0xfe52,	// (0x00011930) ai5_sk_left_pane_g

0x867c,	// (0x0000a15a) ai5_sk_left_pane_t1

0x1d2e,	// (0x0000380c) ai5_sk_right_pane_g1

0x868a,	// (0x0000a168) ai5_sk_right_pane_g2

0x8692,	// (0x0000a170) ai5_sk_right_pane_g3

0x869a,	// (0x0000a178) ai5_sk_right_pane_g4

0x0003,

0xfe5b,	// (0x00011939) ai5_sk_right_pane_g

0x86a2,	// (0x0000a180) ai5_sk_right_pane_t1

0x1d2e,	// (0x0000380c) ai5_sk_middle_pane_g1

0x1d36,	// (0x00003814) ai5_sk_middle_pane_g2

0x1d4e,	// (0x0000382c) ai5_sk_middle_pane_g3

0x8692,	// (0x0000a170) ai5_sk_middle_pane_g4

0x866c,	// (0x0000a14a) ai5_sk_middle_pane_g5

0x86b0,	// (0x0000a18e) ai5_sk_middle_pane_g6

0xe0b4,	// (0x0000fb92) ai5_sk_middle_pane_g7

0x0006,

0xfe64,	// (0x00011942) ai5_sk_middle_pane_g

0xb841,	// (0x0000d31f) aid_touch_area_size_lc0_ParamLimits

0xb841,	// (0x0000d31f) aid_touch_area_size_lc0

0x554d,	// (0x0000702b) cell_hwr_candidate_pane_t1_ParamLimits

0x17bc,	// (0x0000329a) aid_touch_navi_pane

0xbae7,	// (0x0000d5c5) status_dt_navi_pane_ParamLimits

0xbae7,	// (0x0000d5c5) status_dt_navi_pane

0xbaff,	// (0x0000d5dd) status_dt_sta_pane_ParamLimits

0xbaff,	// (0x0000d5dd) status_dt_sta_pane

0xe0bc,	// (0x0000fb9a) dt_sta_controll_pane

0xe0c9,	// (0x0000fba7) dt_sta_indi_pane

0xe0d6,	// (0x0000fbb4) dt_sta_title_pane

0xea32,	// (0x00010510) bg_dt_sta_indi_pane_ParamLimits

0xea32,	// (0x00010510) bg_dt_sta_indi_pane

0xe0e8,	// (0x0000fbc6) dt_sta_battery_pane

0xe0f0,	// (0x0000fbce) dt_sta_indi_pane_g1

0xe0f9,	// (0x0000fbd7) dt_sta_indi_pane_g2

0xe102,	// (0x0000fbe0) dt_sta_indi_pane_g3

0x0002,

0xfe73,	// (0x00011951) dt_sta_indi_pane_g

0xe10b,	// (0x0000fbe9) dt_sta_signal_pane

0xefd4,	// (0x00010ab2) bg_dt_sta_title_pane_ParamLimits

0xefd4,	// (0x00010ab2) bg_dt_sta_title_pane

0xe114,	// (0x0000fbf2) dt_sta_title_pane_g1

0xe11c,	// (0x0000fbfa) dt_sta_title_pane_t1_ParamLimits

0xe11c,	// (0x0000fbfa) dt_sta_title_pane_t1

0xe61f,	// (0x000100fd) bg_dt_sta_control_pane

0xe131,	// (0x0000fc0f) dt_sta_controll_pane_g1

0xe13a,	// (0x0000fc18) bg_dt_sta_title_pane_g1

0xe143,	// (0x0000fc21) bg_dt_sta_title_pane_g2

0xe14c,	// (0x0000fc2a) bg_dt_sta_title_pane_g3

0x0002,

0xfe7a,	// (0x00011958) bg_dt_sta_title_pane_g

0x4cd1,	// (0x000067af) bg_dt_sta_indi_pane_g1

0x875e,	// (0x0000a23c) dt_sta_signal_pane_g1

0x8766,	// (0x0000a244) dt_sta_signal_pane_g2

0x0001,

0xfe81,	// (0x0001195f) dt_sta_signal_pane_g

0x876e,	// (0x0000a24c) dt_sta_battery_pane_g1

0x8777,	// (0x0000a255) dt_sta_battery_pane_t1

0x4cd1,	// (0x000067af) bg_dt_sta_control_pane_g1

0x04f2,	// (0x00001fd0) fep_china_uni_eep_pane

0x04fa,	// (0x00001fd8) fep_china_uni_entry_pane_ParamLimits

0x050a,	// (0x00001fe8) popup_fep_china_uni_window_g1_ParamLimits

0x051a,	// (0x00001ff8) popup_fep_china_uni_window_g2_ParamLimits

0x051a,	// (0x00001ff8) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x000111d1) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x000111d1) popup_fep_china_uni_window_g

0x8786,	// (0x0000a264) fep_china_uni_eep_pane_g1

0x878e,	// (0x0000a26c) fep_china_uni_eep_pane_t1

0x8182,	// (0x00009c60) aid_touch_area_size_smil_player

0x1910,	// (0x000033ee) lc0_clock_pane

0x1b07,	// (0x000035e5) status_pane_g5_ParamLimits

0x1b07,	// (0x000035e5) status_pane_g5

0xb296,	// (0x0000cd74) popup_keymap_window

0x1acd,	// (0x000035ab) status_icon_pane

0xde82,	// (0x0000f960) cell_ai5_widget_pane_g3_ParamLimits

0xde9c,	// (0x0000f97a) cell_ai5_widget_pane_g4_ParamLimits

0xdeac,	// (0x0000f98a) cell_ai5_widget_pane_g5_ParamLimits

0xded4,	// (0x0000f9b2) cell_ai5_widget_pane_g8_ParamLimits

0xded4,	// (0x0000f9b2) cell_ai5_widget_pane_g8

0xdee8,	// (0x0000f9c6) cell_ai5_widget_pane_g9_ParamLimits

0xdee8,	// (0x0000f9c6) cell_ai5_widget_pane_g9

0xdefc,	// (0x0000f9da) cell_ai5_widget_pane_g10_ParamLimits

0xdefc,	// (0x0000f9da) cell_ai5_widget_pane_g10

0x879d,	// (0x0000a27b) status_icon_pane_g1

0xe61f,	// (0x000100fd) bg_popup_sub_pane_cp13

0x87a5,	// (0x0000a283) popup_keymap_window_t1

0x0fbb,	// (0x00002a99) control_pane_g6_ParamLimits

0x0fbb,	// (0x00002a99) control_pane_g6

0x0fc8,	// (0x00002aa6) control_pane_g7_ParamLimits

0x0fc8,	// (0x00002aa6) control_pane_g7

0x0fd5,	// (0x00002ab3) control_pane_g8_ParamLimits

0x0fd5,	// (0x00002ab3) control_pane_g8

0xe0bc,	// (0x0000fb9a) dt_sta_controll_pane_ParamLimits

0xe0c9,	// (0x0000fba7) dt_sta_indi_pane_ParamLimits

0xe0d6,	// (0x0000fbb4) dt_sta_title_pane_ParamLimits

0xee83,	// (0x00010961) aid_size_touch_scroll_bar_cale

0xe7c4,	// (0x000102a2) popup_discreet_window_ParamLimits

0xe7c4,	// (0x000102a2) popup_discreet_window

0xa157,	// (0x0000bc35) popup_sk_window

0x2570,	// (0x0000404e) bg_popup_sub_pane_cp28_ParamLimits

0x2570,	// (0x0000404e) bg_popup_sub_pane_cp28

0x87b3,	// (0x0000a291) popup_discreet_window_g1_ParamLimits

0x87b3,	// (0x0000a291) popup_discreet_window_g1

0x87d3,	// (0x0000a2b1) popup_discreet_window_t1_ParamLimits

0x87d3,	// (0x0000a2b1) popup_discreet_window_t1

0x87f1,	// (0x0000a2cf) popup_discreet_window_t2_ParamLimits

0x87f1,	// (0x0000a2cf) popup_discreet_window_t2

0x0002,

0xfe86,	// (0x00011964) popup_discreet_window_t_ParamLimits

0xfe86,	// (0x00011964) popup_discreet_window_t

0x8843,	// (0x0000a321) popup_sk_window_g1

0x884d,	// (0x0000a32b) popup_sk_window_g2

0x0001,

0xfe8d,	// (0x0001196b) popup_sk_window_g

0x8855,	// (0x0000a333) popup_sk_window_t1

0x8863,	// (0x0000a341) popup_sk_window_t1_copy1

0xde6e,	// (0x0000f94c) cell_ai5_widget_pane_g2_ParamLimits

0xdfd9,	// (0x0000fab7) cell_ai5_widget_pane_t9_ParamLimits

0xdfd9,	// (0x0000fab7) cell_ai5_widget_pane_t9

0xe61f,	// (0x000100fd) main_fep_fshwr2_pane

0xe155,	// (0x0000fc33) aid_fshwr2_btn_pane

0xe169,	// (0x0000fc47) aid_fshwr2_syb_pane

0xe17d,	// (0x0000fc5b) aid_fshwr2_txt_pane

0xe18d,	// (0x0000fc6b) fshwr2_func_candi_pane

0xe1af,	// (0x0000fc8d) fshwr2_hwr_syb_pane

0xe1d3,	// (0x0000fcb1) fshwr2_icf_pane

0xe61f,	// (0x000100fd) fshwr2_icf_bg_pane

0x890f,	// (0x0000a3ed) fshwr2_icf_pane_t1_ParamLimits

0x890f,	// (0x0000a3ed) fshwr2_icf_pane_t1

0x02f2,	// (0x00001dd0) fshwr2_func_candi_pane_g1

0xe203,	// (0x0000fce1) fshwr2_func_candi_row_pane_ParamLimits

0xe203,	// (0x0000fce1) fshwr2_func_candi_row_pane

0xe22a,	// (0x0000fd08) cell_fshwr2_syb_pane_ParamLimits

0xe22a,	// (0x0000fd08) cell_fshwr2_syb_pane

0x811e,	// (0x00009bfc) fshwr2_hwr_syb_pane_g1_ParamLimits

0x811e,	// (0x00009bfc) fshwr2_hwr_syb_pane_g1

0xe61f,	// (0x000100fd) bg_popup_call_pane_cp01

0xe252,	// (0x0000fd30) fshwr2_func_candi_cell_pane_ParamLimits

0xe252,	// (0x0000fd30) fshwr2_func_candi_cell_pane

0x2350,	// (0x00003e2e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2350,	// (0x00003e2e) fshwr2_func_candi_cell_bg_pane

0xe29d,	// (0x0000fd7b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe29d,	// (0x0000fd7b) fshwr2_func_candi_cell_pane_g1

0xe2d4,	// (0x0000fdb2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2d4,	// (0x0000fdb2) fshwr2_func_candi_cell_pane_t1

0xe61f,	// (0x000100fd) bg_button_pane_cp08

0x1103,	// (0x00002be1) cell_fshwr2_syb_bg_pane

0xe2ef,	// (0x0000fdcd) cell_fshwr2_syb_bg_pane_g1

0xe303,	// (0x0000fde1) cell_fshwr2_syb_bg_pane_t1

0xefd4,	// (0x00010ab2) main_tmo_pane

0xc016,	// (0x0000daf4) uni_indicator_pane_g1_ParamLimits

0xc02c,	// (0x0000db0a) uni_indicator_pane_g2_ParamLimits

0xc042,	// (0x0000db20) uni_indicator_pane_g3_ParamLimits

0xc055,	// (0x0000db33) uni_indicator_pane_g4_ParamLimits

0xc055,	// (0x0000db33) uni_indicator_pane_g4

0x3253,	// (0x00004d31) uni_indicator_pane_g5_ParamLimits

0x3253,	// (0x00004d31) uni_indicator_pane_g5

0x3253,	// (0x00004d31) uni_indicator_pane_g6_ParamLimits

0x3253,	// (0x00004d31) uni_indicator_pane_g6

0xf8eb,	// (0x000113c9) uni_indicator_pane_g_ParamLimits

0xcddc,	// (0x0000e8ba) popup_tmo_note_window_ParamLimits

0xcddc,	// (0x0000e8ba) popup_tmo_note_window

0xefd4,	// (0x00010ab2) fshwr2_bg_pane

0xe2c5,	// (0x0000fda3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe2c5,	// (0x0000fda3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe92,	// (0x00011970) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe92,	// (0x00011970) fshwr2_func_candi_cell_pane_g

0x4cd1,	// (0x000067af) bg_popup_window_pane_cp01

0x8a24,	// (0x0000a502) bg_popup_window_pane_g1_cp01

0x8a2d,	// (0x0000a50b) bg_popup_window_pane_cp22_ParamLimits

0x8a2d,	// (0x0000a50b) bg_popup_window_pane_cp22

0x8a3b,	// (0x0000a519) listscroll_tmo_link_pane_ParamLimits

0x8a3b,	// (0x0000a519) listscroll_tmo_link_pane

0x8a7b,	// (0x0000a559) popup_tmo_note_window_g1_ParamLimits

0x8a7b,	// (0x0000a559) popup_tmo_note_window_g1

0x8a88,	// (0x0000a566) tmo_note_info_pane_ParamLimits

0x8a88,	// (0x0000a566) tmo_note_info_pane

0xe319,	// (0x0000fdf7) list_tmo_note_info_pane_g1_ParamLimits

0xe319,	// (0x0000fdf7) list_tmo_note_info_pane_g1

0x8ab9,	// (0x0000a597) list_tmo_note_info_pane_g2_ParamLimits

0x8ab9,	// (0x0000a597) list_tmo_note_info_pane_g2

0x0001,

0xfe97,	// (0x00011975) list_tmo_note_info_pane_g_ParamLimits

0xfe97,	// (0x00011975) list_tmo_note_info_pane_g

0x8ad5,	// (0x0000a5b3) list_tmo_note_info_text_pane_ParamLimits

0x8ad5,	// (0x0000a5b3) list_tmo_note_info_text_pane

0x8b5a,	// (0x0000a638) list_tmo_link_pane

0x8b67,	// (0x0000a645) scroll_pane_cp20

0x8b74,	// (0x0000a652) list_single_tmo_link_pane_ParamLimits

0x8b74,	// (0x0000a652) list_single_tmo_link_pane

0x8b84,	// (0x0000a662) list_single_tmo_link_pane_t1

0x8b92,	// (0x0000a670) list_tmo_note_info_text_pane_t1_ParamLimits

0x8b92,	// (0x0000a670) list_tmo_note_info_text_pane_t1

0xab47,	// (0x0000c625) aid_size_touch_scroll_bar_cp01_ParamLimits

0xab47,	// (0x0000c625) aid_size_touch_scroll_bar_cp01

0xaa87,	// (0x0000c565) aid_size_touch_slider_marker

0xa147,	// (0x0000bc25) popup_settings_window_ParamLimits

0xa147,	// (0x0000bc25) popup_settings_window

0x1161,	// (0x00002c3f) popup_candi_list_indi_window

0x17bc,	// (0x0000329a) aid_touch_navi_pane_ParamLimits

0x6bc9,	// (0x000086a7) rs_clock_indi_pane

0x6bd2,	// (0x000086b0) sctrl_sk_bottom_pane_ParamLimits

0x6be3,	// (0x000086c1) sctrl_sk_top_pane_ParamLimits

0x7425,	// (0x00008f03) popup_fep_tooltip_window

0xde3a,	// (0x0000f918) aid_size_cell_widget_grid_ParamLimits

0xde59,	// (0x0000f937) cell_ai5_widget_pane_g1_ParamLimits

0xde59,	// (0x0000f937) cell_ai5_widget_pane_g1

0xdebc,	// (0x0000f99a) cell_ai5_widget_pane_g6_ParamLimits

0xdec8,	// (0x0000f9a6) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0b,	// (0x000118e9) cell_ai5_widget_pane_g_ParamLimits

0xfe0b,	// (0x000118e9) cell_ai5_widget_pane_g

0xe008,	// (0x0000fae6) cell_ai5_widget_pane_t10_ParamLimits

0xe008,	// (0x0000fae6) cell_ai5_widget_pane_t10

0xe04b,	// (0x0000fb29) grid_ai5_widget_pane_ParamLimits

0xe077,	// (0x0000fb55) cell_contacts_ai5_widget_pane_ParamLimits

0xe077,	// (0x0000fb55) cell_contacts_ai5_widget_pane

0x8806,	// (0x0000a2e4) popup_discreet_window_t3_ParamLimits

0x8806,	// (0x0000a2e4) popup_discreet_window_t3

0xe1ef,	// (0x0000fccd) popup_fshwr2_char_preview_window_ParamLimits

0xe1ef,	// (0x0000fccd) popup_fshwr2_char_preview_window

0xe330,	// (0x0000fe0e) tmo_note_info_pane_t1

0xe345,	// (0x0000fe23) tmo_note_info_pane_t2

0xe35e,	// (0x0000fe3c) tmo_note_info_pane_t3

0x8b36,	// (0x0000a614) tmo_note_info_pane_t4

0x8b48,	// (0x0000a626) tmo_note_info_pane_t5

0x0004,

0xfe9c,	// (0x0001197a) tmo_note_info_pane_t

0x8b5a,	// (0x0000a638) list_tmo_link_pane_ParamLimits

0x8b67,	// (0x0000a645) scroll_pane_cp20_ParamLimits

0xe61f,	// (0x000100fd) bg_popup_fep_char_preview_window_cp01

0x8bab,	// (0x0000a689) popup_fshwr2_char_preview_window_t1

0x8bb9,	// (0x0000a697) popup_candi_list_indi_window_g1

0x8bc2,	// (0x0000a6a0) bg_cell_contacts_ai5_widget_pane

0xe373,	// (0x0000fe51) cell_contacts_ai5_widget_pane_g1

0x8be3,	// (0x0000a6c1) cell_contacts_ai5_widget_pane_g2

0x8bef,	// (0x0000a6cd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea7,	// (0x00011985) cell_contacts_ai5_widget_pane_g

0x8bfb,	// (0x0000a6d9) cell_contacts_ai5_widget_pane_t1

0xefd4,	// (0x00010ab2) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8c72,	// (0x0000a750) settings_container_pane

0x0bd2,	// (0x000026b0) listscroll_set_pane_copy1

0x408f,	// (0x00005b6d) scroll_pane_cp121_copy1

0x8c7e,	// (0x0000a75c) set_content_pane_copy1

0x8c86,	// (0x0000a764) aid_height_set_list_copy1_ParamLimits

0x8c86,	// (0x0000a764) aid_height_set_list_copy1

0x3557,	// (0x00005035) aid_size_parent_copy1_ParamLimits

0x3557,	// (0x00005035) aid_size_parent_copy1

0x8c92,	// (0x0000a770) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8c92,	// (0x0000a770) button_value_adjust_pane_cp6_copy1

0x1103,	// (0x00002be1) list_highlight_pane_cp2_copy1_ParamLimits

0x1103,	// (0x00002be1) list_highlight_pane_cp2_copy1

0x8ca6,	// (0x0000a784) list_set_pane_copy1_ParamLimits

0x8ca6,	// (0x0000a784) list_set_pane_copy1

0x8c0d,	// (0x0000a6eb) main_pane_set_t1_copy1_ParamLimits

0x8c0d,	// (0x0000a6eb) main_pane_set_t1_copy1

0x8c47,	// (0x0000a725) main_pane_set_t2_copy1_ParamLimits

0x8c47,	// (0x0000a725) main_pane_set_t2_copy1

0x8d67,	// (0x0000a845) main_pane_set_t3_copy1

0x8d75,	// (0x0000a853) main_pane_set_t4_copy1

0x8c66,	// (0x0000a744) set_content_pane_g1_copy1_ParamLimits

0x8c66,	// (0x0000a744) set_content_pane_g1_copy1

0x8d83,	// (0x0000a861) setting_code_pane_copy1

0x8d8b,	// (0x0000a869) setting_slider_graphic_pane_copy1

0x8d8b,	// (0x0000a869) setting_slider_pane_copy1

0x8d93,	// (0x0000a871) setting_text_pane_copy1

0x8d93,	// (0x0000a871) setting_volume_pane_copy1

0x8d83,	// (0x0000a861) settings_code_pane_cp2_copy1

0x8d9b,	// (0x0000a879) settings_code_pane_cp_copy1_ParamLimits

0x8d9b,	// (0x0000a879) settings_code_pane_cp_copy1

0x8daf,	// (0x0000a88d) volume_set_pane_copy1

0x8dbb,	// (0x0000a899) volume_set_pane_g10_copy1

0x8dc7,	// (0x0000a8a5) volume_set_pane_g1_copy1

0x8dd1,	// (0x0000a8af) volume_set_pane_g2_copy1

0x8ddb,	// (0x0000a8b9) volume_set_pane_g3_copy1

0x8de5,	// (0x0000a8c3) volume_set_pane_g4_copy1

0x8def,	// (0x0000a8cd) volume_set_pane_g5_copy1

0x8df9,	// (0x0000a8d7) volume_set_pane_g6_copy1

0x8e03,	// (0x0000a8e1) volume_set_pane_g7_copy1

0x8e0d,	// (0x0000a8eb) volume_set_pane_g8_copy1

0x8e17,	// (0x0000a8f5) volume_set_pane_g9_copy1

0xe85c,	// (0x0001033a) bg_set_opt_pane_cp_copy1_ParamLimits

0xe85c,	// (0x0001033a) bg_set_opt_pane_cp_copy1

0x8e23,	// (0x0000a901) setting_slider_pane_t1_copy1_ParamLimits

0x8e23,	// (0x0000a901) setting_slider_pane_t1_copy1

0x8e42,	// (0x0000a920) setting_slider_pane_t2_copy1_ParamLimits

0x8e42,	// (0x0000a920) setting_slider_pane_t2_copy1

0x8e5c,	// (0x0000a93a) setting_slider_pane_t3_copy1_ParamLimits

0x8e5c,	// (0x0000a93a) setting_slider_pane_t3_copy1

0x8e74,	// (0x0000a952) slider_set_pane_copy1_ParamLimits

0x8e74,	// (0x0000a952) slider_set_pane_copy1

0xf08f,	// (0x00010b6d) set_opt_bg_pane_g1_copy2

0xf097,	// (0x00010b75) set_opt_bg_pane_g2_copy2

0x8e8a,	// (0x0000a968) set_opt_bg_pane_g3_copy2

0xf0a7,	// (0x00010b85) set_opt_bg_pane_g4_copy2

0xf0af,	// (0x00010b8d) set_opt_bg_pane_g5_copy2

0xf0b7,	// (0x00010b95) set_opt_bg_pane_g6_copy2

0x8e94,	// (0x0000a972) set_opt_bg_pane_g7_copy2

0x8e9e,	// (0x0000a97c) set_opt_bg_pane_g8_copy2

0x8ea8,	// (0x0000a986) set_opt_bg_pane_g9_copy2

0x8eb2,	// (0x0000a990) aid_size_touch_slider_mark_copy1_ParamLimits

0x8eb2,	// (0x0000a990) aid_size_touch_slider_mark_copy1

0x8ec6,	// (0x0000a9a4) slider_set_pane_g1_copy1

0x8ecf,	// (0x0000a9ad) slider_set_pane_g2_copy1

0x34be,	// (0x00004f9c) slider_set_pane_g3_copy1_ParamLimits

0x34be,	// (0x00004f9c) slider_set_pane_g3_copy1

0x34d2,	// (0x00004fb0) slider_set_pane_g4_copy1_ParamLimits

0x34d2,	// (0x00004fb0) slider_set_pane_g4_copy1

0x34ea,	// (0x00004fc8) slider_set_pane_g5_copy1_ParamLimits

0x34ea,	// (0x00004fc8) slider_set_pane_g5_copy1

0x34be,	// (0x00004f9c) slider_set_pane_g6_copy1_ParamLimits

0x34be,	// (0x00004f9c) slider_set_pane_g6_copy1

0x8ed7,	// (0x0000a9b5) slider_set_pane_g7_copy1_ParamLimits

0x8ed7,	// (0x0000a9b5) slider_set_pane_g7_copy1

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp2_copy1

0x8eed,	// (0x0000a9cb) setting_slider_graphic_pane_g1_copy1

0x8ef6,	// (0x0000a9d4) setting_slider_graphic_pane_t1_copy1

0x8f06,	// (0x0000a9e4) setting_slider_graphic_pane_t2_copy1

0x8f16,	// (0x0000a9f4) slider_set_pane_cp_copy1

0x8f26,	// (0x0000aa04) input_focus_pane_cp1_copy1

0x8f2f,	// (0x0000aa0d) list_set_text_pane_copy1

0x8f37,	// (0x0000aa15) setting_text_pane_g1_copy1

0xe90a,	// (0x000103e8) set_text_pane_t1_copy1

0x8f26,	// (0x0000aa04) input_focus_pane_cp2_copy1

0x8f37,	// (0x0000aa15) setting_code_pane_g1_copy1

0x8f40,	// (0x0000aa1e) setting_code_pane_t1_copy1

0x3e94,	// (0x00005972) list_set_graphic_pane_copy1

0xe7a2,	// (0x00010280) bg_set_opt_pane_cp4_copy1

0x08c1,	// (0x0000239f) list_set_graphic_pane_g1_copy1_ParamLimits

0x08c1,	// (0x0000239f) list_set_graphic_pane_g1_copy1

0x8f4e,	// (0x0000aa2c) list_set_graphic_pane_g2_copy1

0x08d9,	// (0x000023b7) list_set_graphic_pane_t1_copy1_ParamLimits

0x08d9,	// (0x000023b7) list_set_graphic_pane_t1_copy1

0x4cd1,	// (0x000067af) rs_clock_indi_pane_g1

0x8f56,	// (0x0000aa34) rs_clock_indi_pane_t1

0x8f64,	// (0x0000aa42) rs_indi_pane

0x8f6c,	// (0x0000aa4a) rs_indi_pane_g1

0x8f75,	// (0x0000aa53) rs_indi_pane_g2

0x8bb9,	// (0x0000a697) rs_indi_pane_g3

0x0002,

0xfeae,	// (0x0001198c) rs_indi_pane_g

0x0bd2,	// (0x000026b0) bg_popup_preview_window_pane_cp03

0x8f7e,	// (0x0000aa5c) popup_fep_tooltip_window_t1

0x5f7e,	// (0x00007a5c) popup_note2_window_g2_ParamLimits

0x5f7e,	// (0x00007a5c) popup_note2_window_g2

0x0001,

0xfc3b,	// (0x00011719) popup_note2_window_g_ParamLimits

0xfc3b,	// (0x00011719) popup_note2_window_g

0x6599,	// (0x00008077) bg_popup_sub_pane_cp11_ParamLimits

0x65a6,	// (0x00008084) cell_ai3_links_pane_g1_ParamLimits

0x65bd,	// (0x0000809b) cell_ai3_links_pane_t1

0xe90a,	// (0x000103e8) set_text_pane_t1_copy1_ParamLimits

0x0ad4,	// (0x000025b2) cell_graphic_popup_pane_cp2_ParamLimits

0x0ad4,	// (0x000025b2) cell_graphic_popup_pane_cp2

0x8f8c,	// (0x0000aa6a) cell_graphic_popup_pane_g1_cp2

0xec96,	// (0x00010774) cell_graphic_popup_pane_g2_cp2

0x8f94,	// (0x0000aa72) cell_graphic_popup_pane_g3_cp2

0x8f9c,	// (0x0000aa7a) cell_graphic_popup_pane_t2_cp2

0xeca7,	// (0x00010785) grid_highlight_pane_cp3_cp2

0xf50f,	// (0x00010fed) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xefd4,	// (0x00010ab2) main_tmo_pane_ParamLimits

0xcdd0,	// (0x0000e8ae) popup_tmo_big_image_note_window

0xde48,	// (0x0000f926) cell_ai5_widget_list_pane

0xde50,	// (0x0000f92e) cell_ai5_widget_lrg_icon_pane

0xe330,	// (0x0000fe0e) tmo_note_info_pane_t1_ParamLimits

0xe345,	// (0x0000fe23) tmo_note_info_pane_t2_ParamLimits

0xe35e,	// (0x0000fe3c) tmo_note_info_pane_t3_ParamLimits

0x8b36,	// (0x0000a614) tmo_note_info_pane_t4_ParamLimits

0x8b48,	// (0x0000a626) tmo_note_info_pane_t5_ParamLimits

0xfe9c,	// (0x0001197a) tmo_note_info_pane_t_ParamLimits

0x8c72,	// (0x0000a750) settings_container_pane_ParamLimits

0x8f1e,	// (0x0000a9fc) indicator_popup_pane_cp5

0x8f1e,	// (0x0000a9fc) indicator_popup_pane_cp6

0x3e94,	// (0x00005972) list_set_graphic_pane_copy1_ParamLimits

0xe61f,	// (0x000100fd) bg_popup_window_pane_cp23

0x8faa,	// (0x0000aa88) popup_tmo_big_image_note_window_g1

0x8fb6,	// (0x0000aa94) popup_tmo_big_image_note_window_t1

0x8fc6,	// (0x0000aaa4) popup_tmo_big_image_note_window_t2

0x8fd6,	// (0x0000aab4) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb5,	// (0x00011993) popup_tmo_big_image_note_window_t

0x4cd1,	// (0x000067af) cell_ai5_widget_lrg_icon_pane_g1

0xe388,	// (0x0000fe66) cell_ai5_widget_lrg_icon_pane_t1

0xe396,	// (0x0000fe74) cell_ai5_widget_list_row_pane_ParamLimits

0xe396,	// (0x0000fe74) cell_ai5_widget_list_row_pane

0xe3ae,	// (0x0000fe8c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe3ae,	// (0x0000fe8c) cell_ai5_widget_list_row_pane_g1

0xe3bb,	// (0x0000fe99) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe3bb,	// (0x0000fe99) cell_ai5_widget_list_row_pane_t1

0xe3e6,	// (0x0000fec4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe3e6,	// (0x0000fec4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebc,	// (0x0001199a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebc,	// (0x0001199a) cell_ai5_widget_list_row_pane_t

0xe61f,	// (0x000100fd) main_fep_vtchi_ss_pane

0x9094,	// (0x0000ab72) popup_fep_char_pre_window

0x909c,	// (0x0000ab7a) popup_fep_ituss_window

0xe438,	// (0x0000ff16) popup_fep_vkbss_window

0x1103,	// (0x00002be1) grid_vkbss_keypad_pane_ParamLimits

0x1103,	// (0x00002be1) grid_vkbss_keypad_pane

0x910a,	// (0x0000abe8) ituss_keypad_pane

0x9120,	// (0x0000abfe) aid_vkbss_key_offset_ParamLimits

0x9120,	// (0x0000abfe) aid_vkbss_key_offset

0xe447,	// (0x0000ff25) cell_vkbss_key_pane_ParamLimits

0xe447,	// (0x0000ff25) cell_vkbss_key_pane

0x918e,	// (0x0000ac6c) bg_cell_vkbss_key_g1_ParamLimits

0x918e,	// (0x0000ac6c) bg_cell_vkbss_key_g1

0xe49e,	// (0x0000ff7c) cell_vkbss_key_3p_pane_ParamLimits

0xe49e,	// (0x0000ff7c) cell_vkbss_key_3p_pane

0xe4d4,	// (0x0000ffb2) cell_vkbss_key_g1_ParamLimits

0xe4d4,	// (0x0000ffb2) cell_vkbss_key_g1

0xe50a,	// (0x0000ffe8) cell_vkbss_key_t1_ParamLimits

0xe50a,	// (0x0000ffe8) cell_vkbss_key_t1

0x9262,	// (0x0000ad40) cell_ituss_key_pane_ParamLimits

0x9262,	// (0x0000ad40) cell_ituss_key_pane

0x9273,	// (0x0000ad51) bg_cell_ituss_key_g1_ParamLimits

0x9273,	// (0x0000ad51) bg_cell_ituss_key_g1

0x927f,	// (0x0000ad5d) cell_ituss_key_pane_g1_ParamLimits

0x927f,	// (0x0000ad5d) cell_ituss_key_pane_g1

0x9293,	// (0x0000ad71) cell_ituss_key_pane_g2_ParamLimits

0x9293,	// (0x0000ad71) cell_ituss_key_pane_g2

0x0005,

0xfec3,	// (0x000119a1) cell_ituss_key_pane_g_ParamLimits

0xfec3,	// (0x000119a1) cell_ituss_key_pane_g

0x9329,	// (0x0000ae07) cell_ituss_key_t1_ParamLimits

0x9329,	// (0x0000ae07) cell_ituss_key_t1

0x9363,	// (0x0000ae41) cell_ituss_key_t2_ParamLimits

0x9363,	// (0x0000ae41) cell_ituss_key_t2

0x9395,	// (0x0000ae73) cell_ituss_key_t3_ParamLimits

0x9395,	// (0x0000ae73) cell_ituss_key_t3

0x93c6,	// (0x0000aea4) cell_ituss_key_t4_ParamLimits

0x93c6,	// (0x0000aea4) cell_ituss_key_t4

0x0004,

0xfed0,	// (0x000119ae) cell_ituss_key_t_ParamLimits

0xfed0,	// (0x000119ae) cell_ituss_key_t

0xe566,	// (0x00010044) cell_vkbss_key_3p_pane_g1

0xe56e,	// (0x0001004c) cell_vkbss_key_3p_pane_g2

0xe576,	// (0x00010054) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x000119b9) cell_vkbss_key_3p_pane_g

0x0bd2,	// (0x000026b0) bg_popup_fep_char_preview_window_cp02

0x9421,	// (0x0000aeff) popup_fep_char_pre_window_t1

0xde27,	// (0x0000f905) main_ai5_sk_pane

0x8bc2,	// (0x0000a6a0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe373,	// (0x0000fe51) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8be3,	// (0x0000a6c1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8bef,	// (0x0000a6cd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea7,	// (0x00011985) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8bfb,	// (0x0000a6d9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xefd4,	// (0x00010ab2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe57e,	// (0x0001005c) main_ai5_sk_pane_g1

0x23a8,	// (0x00003e86) popup_query_code_window_g1

0xe429,	// (0x0000ff07) popup_fep_vkb_icf_pane

0x90e1,	// (0x0000abbf) popup_fep_vtchi_icf_pane

0x9438,	// (0x0000af16) bg_icf_pane

0x9438,	// (0x0000af16) list_vkb_icf_pane

0x9444,	// (0x0000af22) bg_icf_pane_cp01

0x9457,	// (0x0000af35) vtchi_icf_list_pane

0xe5d3,	// (0x000100b1) list_vkb_icf_pane_t1_ParamLimits

0xe5d3,	// (0x000100b1) list_vkb_icf_pane_t1

0x94d0,	// (0x0000afae) vtchi_icf_list_pane_t1_ParamLimits

0x94d0,	// (0x0000afae) vtchi_icf_list_pane_t1

0x909c,	// (0x0000ab7a) popup_fep_ituss_window_ParamLimits

0x90e1,	// (0x0000abbf) popup_fep_vtchi_icf_pane_ParamLimits

0x910a,	// (0x0000abe8) ituss_keypad_pane_ParamLimits

0x9116,	// (0x0000abf4) ituss_sks_pane

0x9438,	// (0x0000af16) bg_icf_pane_ParamLimits

0xe40e,	// (0x0000feec) icf_edit_indi_pane_ParamLimits

0xe40e,	// (0x0000feec) icf_edit_indi_pane

0x9438,	// (0x0000af16) list_vkb_icf_pane_ParamLimits

0x9444,	// (0x0000af22) bg_icf_pane_cp01_ParamLimits

0x9087,	// (0x0000ab65) icf_edit_indi_pane_cp01_ParamLimits

0x9087,	// (0x0000ab65) icf_edit_indi_pane_cp01

0x9457,	// (0x0000af35) vtchi_query_pane

0x811e,	// (0x00009bfc) icf_edit_indi_pane_g1_ParamLimits

0x811e,	// (0x00009bfc) icf_edit_indi_pane_g1

0xe5ea,	// (0x000100c8) icf_edit_indi_pane_g2_ParamLimits

0xe5ea,	// (0x000100c8) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000119e4) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000119e4) icf_edit_indi_pane_g

0xe5fe,	// (0x000100dc) icf_edit_indi_pane_t1

0x94e9,	// (0x0000afc7) bg_input_focus_pane_cp042

0xee7a,	// (0x00010958) vtchi_button_pane

0x94f2,	// (0x0000afd0) vtchi_query_pane_t1

0x9500,	// (0x0000afde) vtchi_query_pane_t2

0x950e,	// (0x0000afec) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x000119d3) vtchi_query_pane_t

0xe61f,	// (0x000100fd) bg_button_pane_cp13

0x951c,	// (0x0000affa) vtchi_button_pane_g1

0x9524,	// (0x0000b002) ituss_sks_pane_g1

0x952f,	// (0x0000b00d) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x000119da) ituss_sks_pane_g

0x9537,	// (0x0000b015) ituss_sks_pane_t1

0x9545,	// (0x0000b023) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000119df) ituss_sks_pane_t

0x4701,	// (0x000061df) indicator_nsta_pane_cp_g1

0x470a,	// (0x000061e8) indicator_nsta_pane_cp_g2

0x4712,	// (0x000061f0) indicator_nsta_pane_cp_g3

0x471a,	// (0x000061f8) indicator_nsta_pane_cp_g4

0x470a,	// (0x000061e8) indicator_nsta_pane_cp_g5

0x4712,	// (0x000061f0) indicator_nsta_pane_cp_g6

0x0005,

0xfa85,	// (0x00011563) indicator_nsta_pane_cp_g

0xdbc3,	// (0x0000f6a1) cell_graphic2_pane_t2_ParamLimits

0xdbc3,	// (0x0000f6a1) cell_graphic2_pane_t2

0x0001,

0xfd92,	// (0x00011870) cell_graphic2_pane_t_ParamLimits

0xfd92,	// (0x00011870) cell_graphic2_pane_t

0xdbfb,	// (0x0000f6d9) cell_graphic2_control_pane_t1

0xadc1,	// (0x0000c89f) signal_pane_g3_ParamLimits

0xadc1,	// (0x0000c89f) signal_pane_g3

0xadd5,	// (0x0000c8b3) signal_pane_g4_ParamLimits

0xadd5,	// (0x0000c8b3) signal_pane_g4

0xe3f8,	// (0x0000fed6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe3f8,	// (0x0000fed6) cell_ai5_widget_list_row_pane_t3

0x9317,	// (0x0000adf5) cell_ituss_key_pane_t1_ParamLimits

0x9317,	// (0x0000adf5) cell_ituss_key_pane_t1

0x1fe0,	// (0x00003abe) form_field_data_wide_pane_vc_t2_ParamLimits

0x1fe0,	// (0x00003abe) form_field_data_wide_pane_vc_t2

0x1ff4,	// (0x00003ad2) form_field_data_wide_pane_vc_t3_ParamLimits

0x1ff4,	// (0x00003ad2) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x000112b1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x000112b1) form_field_data_wide_pane_vc_t

0x439e,	// (0x00005e7c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x439e,	// (0x00005e7c) form_field_slider_wide_pane_vc_t3

0x4474,	// (0x00005f52) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4474,	// (0x00005f52) form_field_popup_wide_pane_vc_t2

0x448b,	// (0x00005f69) form_field_popup_wide_pane_vc_t3_ParamLimits

0x448b,	// (0x00005f69) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa74,	// (0x00011552) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x00011552) form_field_popup_wide_pane_vc_t

0xe155,	// (0x0000fc33) aid_fshwr2_btn_pane_ParamLimits

0xe169,	// (0x0000fc47) aid_fshwr2_syb_pane_ParamLimits

0xe17d,	// (0x0000fc5b) aid_fshwr2_txt_pane_ParamLimits

0xefd4,	// (0x00010ab2) fshwr2_bg_pane_ParamLimits

0xe18d,	// (0x0000fc6b) fshwr2_func_candi_pane_ParamLimits

0xe1af,	// (0x0000fc8d) fshwr2_hwr_syb_pane_ParamLimits

0xe1d3,	// (0x0000fcb1) fshwr2_icf_pane_ParamLimits

0x4312,	// (0x00005df0) list_double_graphic_pane_vc_g4_ParamLimits

0x4312,	// (0x00005df0) list_double_graphic_pane_vc_g4

0x92b3,	// (0x0000ad91) cell_ituss_key_pane_g3_ParamLimits

0x92b3,	// (0x0000ad91) cell_ituss_key_pane_g3

0x93f7,	// (0x0000aed5) cell_ituss_key_t5_ParamLimits

0x93f7,	// (0x0000aed5) cell_ituss_key_t5

0xe438,	// (0x0000ff16) popup_fep_vkbss_window_ParamLimits

0xde31,	// (0x0000f90f) aid_cell_ai5_quarter

0xe5fe,	// (0x000100dc) icf_edit_indi_pane_t1_ParamLimits

0xeada,	// (0x000105b8) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xeada,	// (0x000105b8) aid_tch_indicator_popup_pane_cp2

0xeaed,	// (0x000105cb) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xeaed,	// (0x000105cb) aid_tch_query_popup_data_pane_cp2

0x2350,	// (0x00003e2e) aid_tch_query_popup_pane_ParamLimits

0x2350,	// (0x00003e2e) aid_tch_query_popup_pane

0x2350,	// (0x00003e2e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2350,	// (0x00003e2e) aid_tch_query_popup_data_pane_cp1

0x1103,	// (0x00002be1) cell_fshwr2_syb_bg_pane_ParamLimits

0xe2ef,	// (0x0000fdcd) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe303,	// (0x0000fde1) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe429,	// (0x0000ff07) popup_fep_vkb_icf_pane_ParamLimits

0xdccf,	// (0x0000f7ad) bg_popup_fep_char_preview_window_g10

0xdf10,	// (0x0000f9ee) cell_ai5_widget_pane_g11_ParamLimits

0xdf10,	// (0x0000f9ee) cell_ai5_widget_pane_g11

0xdf1c,	// (0x0000f9fa) cell_ai5_widget_pane_g12_ParamLimits

0xdf1c,	// (0x0000f9fa) cell_ai5_widget_pane_g12

0xdf28,	// (0x0000fa06) cell_ai5_widget_pane_g13_ParamLimits

0xdf28,	// (0x0000fa06) cell_ai5_widget_pane_g13

0xe027,	// (0x0000fb05) cell_ai5_widget_pane_t11_ParamLimits

0xe027,	// (0x0000fb05) cell_ai5_widget_pane_t11

0xe039,	// (0x0000fb17) cell_ai5_widget_pane_t12_ParamLimits

0xe039,	// (0x0000fb17) cell_ai5_widget_pane_t12

0x92bf,	// (0x0000ad9d) cell_ituss_key_pane_g4_ParamLimits

0x92bf,	// (0x0000ad9d) cell_ituss_key_pane_g4

0x92db,	// (0x0000adb9) cell_ituss_key_pane_g5_ParamLimits

0x92db,	// (0x0000adb9) cell_ituss_key_pane_g5

0x92f7,	// (0x0000add5) cell_ituss_key_pane_g6_ParamLimits

0x92f7,	// (0x0000add5) cell_ituss_key_pane_g6

0x1d26,	// (0x00003804) bg_icf_pane_g1

0xe587,	// (0x00010065) bg_icf_pane_g2

0xe591,	// (0x0001006f) bg_icf_pane_g3

0xe599,	// (0x00010077) bg_icf_pane_g4

0xe5a3,	// (0x00010081) bg_icf_pane_g5

0xe5ad,	// (0x0001008b) bg_icf_pane_g6

0xe5b7,	// (0x00010095) bg_icf_pane_g7

0xe5bf,	// (0x0001009d) bg_icf_pane_g8

0xe5c9,	// (0x000100a7) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x000119c0) bg_icf_pane_g

0x90f7,	// (0x0000abd5) popup_hyb_candi_window_ParamLimits

0x90f7,	// (0x0000abd5) popup_hyb_candi_window

0x1ec1,	// (0x0000399f) bg_popup_sub_pane_cp01_ParamLimits

0x1ec1,	// (0x0000399f) bg_popup_sub_pane_cp01

0x9580,	// (0x0000b05e) entry_hyb_candi_pane_ParamLimits

0x9580,	// (0x0000b05e) entry_hyb_candi_pane

0x958f,	// (0x0000b06d) grid_hyb_candi_pane_ParamLimits

0x958f,	// (0x0000b06d) grid_hyb_candi_pane

0x95a4,	// (0x0000b082) grid_hyb_phrase_pane_ParamLimits

0x95a4,	// (0x0000b082) grid_hyb_phrase_pane

0x95b3,	// (0x0000b091) cell_hyb_candi_pane_ParamLimits

0x95b3,	// (0x0000b091) cell_hyb_candi_pane

0xee83,	// (0x00010961) cell_hyb_candi_scroll_pane

0x02f2,	// (0x00001dd0) cell_hyb_candi_pane_g1

0x95cf,	// (0x0000b0ad) cell_hyb_candi_pane_t1

0x95dd,	// (0x0000b0bb) cell_hyb_phrase_pane

0x02f2,	// (0x00001dd0) cell_hyb_phrase_pane_g1

0x95e6,	// (0x0000b0c4) cell_hyb_phrase_pane_t1

0x95f4,	// (0x0000b0d2) entry_hyb_candi_pane_t1

0x0bd2,	// (0x000026b0) input_focus_pane_cp06

0x9602,	// (0x0000b0e0) cell_hyb_candi_scroll_pane_g1

0x960a,	// (0x0000b0e8) cell_hyb_candi_scroll_pane_g1_aid

0x9612,	// (0x0000b0f0) cell_hyb_candi_scroll_pane_g2

0x961a,	// (0x0000b0f8) cell_hyb_candi_scroll_pane_g2_aid

0x9622,	// (0x0000b100) cell_hyb_candi_scroll_pane_g3

0x962a,	// (0x0000b108) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
