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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000410cc };

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
0x5e86,	// (0x00046f52) Screen

0x5e92,	// (0x00046f5e) application_window_ParamLimits

0x5e92,	// (0x00046f5e) application_window

0x08ed,	// (0x000419b9) screen_g1

0x5eee,	// (0x00046fba) area_bottom_pane_ParamLimits

0x5eee,	// (0x00046fba) area_bottom_pane

0x5fae,	// (0x0004707a) area_top_pane_ParamLimits

0x5fae,	// (0x0004707a) area_top_pane

0x6042,	// (0x0004710e) main_pane_ParamLimits

0x6042,	// (0x0004710e) main_pane

0x08f7,	// (0x000419c3) misc_graphics

0x9541,	// (0x0004a60d) battery_pane_ParamLimits

0x9541,	// (0x0004a60d) battery_pane

0xa209,	// (0x0004b2d5) bg_status_flat_pane_g8

0xa211,	// (0x0004b2dd) bg_status_flat_pane_g9

0x9609,	// (0x0004a6d5) context_pane_ParamLimits

0x9609,	// (0x0004a6d5) context_pane

0x972d,	// (0x0004a7f9) navi_pane_ParamLimits

0x972d,	// (0x0004a7f9) navi_pane

0x97bd,	// (0x0004a889) signal_pane_ParamLimits

0x97bd,	// (0x0004a889) signal_pane

0x0008,

0xf859,	// (0x00050925) bg_status_flat_pane_g

0x982a,	// (0x0004a8f6) status_pane_g1_ParamLimits

0x982a,	// (0x0004a8f6) status_pane_g1

0x9836,	// (0x0004a902) status_pane_g2_ParamLimits

0x9836,	// (0x0004a902) status_pane_g2

0x9842,	// (0x0004a90e) status_pane_g3_ParamLimits

0x9842,	// (0x0004a90e) status_pane_g3

0x0004,

0xf780,	// (0x0005084c) status_pane_g_ParamLimits

0xf780,	// (0x0005084c) status_pane_g

0x9876,	// (0x0004a942) title_pane_ParamLimits

0x9876,	// (0x0004a942) title_pane

0x98b5,	// (0x0004a981) uni_indicator_pane_ParamLimits

0x98b5,	// (0x0004a981) uni_indicator_pane

0x9473,	// (0x0004a53f) bg_list_pane_ParamLimits

0x9473,	// (0x0004a53f) bg_list_pane

0x6f4f,	// (0x0004801b) find_pane

0x9493,	// (0x0004a55f) listscroll_app_pane_ParamLimits

0x9493,	// (0x0004a55f) listscroll_app_pane

0x949f,	// (0x0004a56b) listscroll_form_pane

0x6f57,	// (0x00048023) listscroll_gen_pane_ParamLimits

0x6f57,	// (0x00048023) listscroll_gen_pane

0x6f6b,	// (0x00048037) listscroll_set_pane

0x675f,	// (0x0004782b) main_idle_act_pane

0x916c,	// (0x0004a238) main_idle_trad_pane

0x916c,	// (0x0004a238) main_list_empty_pane

0x9493,	// (0x0004a55f) main_midp_pane

0x94b9,	// (0x0004a585) main_pane_g1_ParamLimits

0x94b9,	// (0x0004a585) main_pane_g1

0x6f73,	// (0x0004803f) popup_ai_message_window_ParamLimits

0x6f73,	// (0x0004803f) popup_ai_message_window

0x7027,	// (0x000480f3) popup_fep_china_uni_window_ParamLimits

0x7027,	// (0x000480f3) popup_fep_china_uni_window

0x7087,	// (0x00048153) popup_fep_japan_candidate_window_ParamLimits

0x7087,	// (0x00048153) popup_fep_japan_candidate_window

0x70b1,	// (0x0004817d) popup_fep_japan_predictive_window_ParamLimits

0x70b1,	// (0x0004817d) popup_fep_japan_predictive_window

0x70e7,	// (0x000481b3) popup_find_window

0x70f4,	// (0x000481c0) popup_grid_graphic_window_ParamLimits

0x70f4,	// (0x000481c0) popup_grid_graphic_window

0x7124,	// (0x000481f0) popup_large_graphic_colour_window

0x714a,	// (0x00048216) popup_menu_window_ParamLimits

0x714a,	// (0x00048216) popup_menu_window

0x7314,	// (0x000483e0) popup_note_image_window

0x72fe,	// (0x000483ca) popup_note_wait_window_ParamLimits

0x72fe,	// (0x000483ca) popup_note_wait_window

0x72fe,	// (0x000483ca) popup_note_window_ParamLimits

0x72fe,	// (0x000483ca) popup_note_window

0x737a,	// (0x00048446) popup_query_code_window_ParamLimits

0x737a,	// (0x00048446) popup_query_code_window

0x7390,	// (0x0004845c) popup_query_data_code_window_ParamLimits

0x7390,	// (0x0004845c) popup_query_data_code_window

0x73b3,	// (0x0004847f) popup_query_data_window_ParamLimits

0x73b3,	// (0x0004847f) popup_query_data_window

0x73d5,	// (0x000484a1) popup_query_sat_info_window_ParamLimits

0x73d5,	// (0x000484a1) popup_query_sat_info_window

0x7414,	// (0x000484e0) popup_snote_single_graphic_window_ParamLimits

0x7414,	// (0x000484e0) popup_snote_single_graphic_window

0x7414,	// (0x000484e0) popup_snote_single_text_window_ParamLimits

0x7414,	// (0x000484e0) popup_snote_single_text_window

0x742b,	// (0x000484f7) popup_sub_window_general

0x7571,	// (0x0004863d) popup_window_general_ParamLimits

0x7571,	// (0x0004863d) popup_window_general

0x94c7,	// (0x0004a593) power_save_pane

0x6dd5,	// (0x00047ea1) control_pane_g1_ParamLimits

0x6dd5,	// (0x00047ea1) control_pane_g1

0x6dfe,	// (0x00047eca) control_pane_g2_ParamLimits

0x6dfe,	// (0x00047eca) control_pane_g2

0x9436,	// (0x0004a502) control_pane_g3_ParamLimits

0x9436,	// (0x0004a502) control_pane_g3

0x0007,

0xf768,	// (0x00050834) control_pane_g_ParamLimits

0xf768,	// (0x00050834) control_pane_g

0x6e4a,	// (0x00047f16) control_pane_t1_ParamLimits

0x6e4a,	// (0x00047f16) control_pane_t1

0x6ea6,	// (0x00047f72) control_pane_t2_ParamLimits

0x6ea6,	// (0x00047f72) control_pane_t2

0x0002,

0xf779,	// (0x00050845) control_pane_t_ParamLimits

0xf779,	// (0x00050845) control_pane_t

0x935b,	// (0x0004a427) navi_navi_volume_pane_cp1

0x9363,	// (0x0004a42f) status_small_icon_pane

0x936b,	// (0x0004a437) status_small_pane_g1_ParamLimits

0x936b,	// (0x0004a437) status_small_pane_g1

0x939f,	// (0x0004a46b) status_small_pane_g2_ParamLimits

0x939f,	// (0x0004a46b) status_small_pane_g2

0x93ab,	// (0x0004a477) status_small_pane_g3_ParamLimits

0x93ab,	// (0x0004a477) status_small_pane_g3

0x93b7,	// (0x0004a483) status_small_pane_g4_ParamLimits

0x93b7,	// (0x0004a483) status_small_pane_g4

0x93c3,	// (0x0004a48f) status_small_pane_g5_ParamLimits

0x93c3,	// (0x0004a48f) status_small_pane_g5

0x93d1,	// (0x0004a49d) status_small_pane_g6_ParamLimits

0x93d1,	// (0x0004a49d) status_small_pane_g6

0x0007,

0xf757,	// (0x00050823) status_small_pane_g_ParamLimits

0xf757,	// (0x00050823) status_small_pane_g

0x9400,	// (0x0004a4cc) status_small_pane_t1

0x9422,	// (0x0004a4ee) status_small_wait_pane_ParamLimits

0x9422,	// (0x0004a4ee) status_small_wait_pane

0x6b08,	// (0x00047bd4) aid_levels_signal_ParamLimits

0x6b08,	// (0x00047bd4) aid_levels_signal

0x6b17,	// (0x00047be3) signal_pane_g1_ParamLimits

0x6b17,	// (0x00047be3) signal_pane_g1

0x6b2c,	// (0x00047bf8) signal_pane_g2_ParamLimits

0x6b2c,	// (0x00047bf8) signal_pane_g2

0x0003,

0xf6e8,	// (0x000507b4) signal_pane_g_ParamLimits

0xf6e8,	// (0x000507b4) signal_pane_g

0x44d2,	// (0x0004559e) context_pane_g1

0x62a1,	// (0x0004736d) title_pane_g1

0x62d3,	// (0x0004739f) title_pane_t1

0x090d,	// (0x000419d9) title_pane_t2

0x0933,	// (0x000419ff) title_pane_t3

0x0002,

0xf532,	// (0x000505fe) title_pane_t

0x98cd,	// (0x0004a999) aid_levels_battery_ParamLimits

0x98cd,	// (0x0004a999) aid_levels_battery

0x98de,	// (0x0004a9aa) battery_pane_g1_ParamLimits

0x98de,	// (0x0004a9aa) battery_pane_g1

0x98f4,	// (0x0004a9c0) battery_pane_g2_ParamLimits

0x98f4,	// (0x0004a9c0) battery_pane_g2

0x0001,

0xf78b,	// (0x00050857) battery_pane_g_ParamLimits

0xf78b,	// (0x00050857) battery_pane_g

0xab53,	// (0x0004bc1f) uni_indicator_pane_g1

0xab69,	// (0x0004bc35) uni_indicator_pane_g2

0xab7f,	// (0x0004bc4b) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x000509cd) uni_indicator_pane_g

0x8fcf,	// (0x0004a09b) navi_icon_pane_ParamLimits

0x8fcf,	// (0x0004a09b) navi_icon_pane

0x8f17,	// (0x00049fe3) navi_midp_pane

0x8feb,	// (0x0004a0b7) navi_navi_pane

0x8ff5,	// (0x0004a0c1) navi_text_pane_ParamLimits

0x8ff5,	// (0x0004a0c1) navi_text_pane

0x08ed,	// (0x000419b9) status_small_wait_pane_g1

0x0c54,	// (0x00041d20) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x000509c8) status_small_wait_pane_g

0xa866,	// (0x0004b932) navi_navi_icon_text_pane

0xa86e,	// (0x0004b93a) navi_navi_pane_g1_ParamLimits

0xa86e,	// (0x0004b93a) navi_navi_pane_g1

0xa880,	// (0x0004b94c) navi_navi_pane_g2_ParamLimits

0xa880,	// (0x0004b94c) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x00050996) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x00050996) navi_navi_pane_g

0xa892,	// (0x0004b95e) navi_navi_tabs_pane

0xa89b,	// (0x0004b967) navi_navi_text_pane

0xa866,	// (0x0004b932) navi_navi_volume_pane

0xa842,	// (0x0004b90e) navi_text_pane_t1

0xa836,	// (0x0004b902) navi_icon_pane_g1

0xa789,	// (0x0004b855) navi_navi_text_pane_t1

0x7832,	// (0x000488fe) navi_navi_volume_pane_g1

0x783a,	// (0x00048906) volume_small_pane

0xa6ef,	// (0x0004b7bb) navi_navi_icon_text_pane_g1

0xa6f7,	// (0x0004b7c3) navi_navi_icon_text_pane_t1

0x8feb,	// (0x0004a0b7) navi_tabs_2_long_pane

0x8feb,	// (0x0004a0b7) navi_tabs_2_pane

0x8feb,	// (0x0004a0b7) navi_tabs_3_long_pane

0x8feb,	// (0x0004a0b7) navi_tabs_3_pane

0x8feb,	// (0x0004a0b7) navi_tabs_4_pane

0x7812,	// (0x000488de) tabs_2_active_pane_ParamLimits

0x7812,	// (0x000488de) tabs_2_active_pane

0x7822,	// (0x000488ee) tabs_2_passive_pane_ParamLimits

0x7822,	// (0x000488ee) tabs_2_passive_pane

0x77e0,	// (0x000488ac) tabs_3_active_pane_ParamLimits

0x77e0,	// (0x000488ac) tabs_3_active_pane

0x77f0,	// (0x000488bc) tabs_3_passive_pane_ParamLimits

0x77f0,	// (0x000488bc) tabs_3_passive_pane

0x7801,	// (0x000488cd) tabs_3_passive_pane_cp_ParamLimits

0x7801,	// (0x000488cd) tabs_3_passive_pane_cp

0x7794,	// (0x00048860) tabs_4_active_pane_ParamLimits

0x7794,	// (0x00048860) tabs_4_active_pane

0x77a7,	// (0x00048873) tabs_4_passive_pane_ParamLimits

0x77a7,	// (0x00048873) tabs_4_passive_pane

0x77b8,	// (0x00048884) tabs_4_passive_pane_cp_ParamLimits

0x77b8,	// (0x00048884) tabs_4_passive_pane_cp

0x77c9,	// (0x00048895) tabs_4_passive_pane_cp2_ParamLimits

0x77c9,	// (0x00048895) tabs_4_passive_pane_cp2

0x7770,	// (0x0004883c) tabs_2_long_active_pane_ParamLimits

0x7770,	// (0x0004883c) tabs_2_long_active_pane

0x7782,	// (0x0004884e) tabs_2_long_passive_pane_ParamLimits

0x7782,	// (0x0004884e) tabs_2_long_passive_pane

0x7731,	// (0x000487fd) tabs_3_long_active_pane_ParamLimits

0x7731,	// (0x000487fd) tabs_3_long_active_pane

0x7744,	// (0x00048810) tabs_3_long_passive_pane_ParamLimits

0x7744,	// (0x00048810) tabs_3_long_passive_pane

0x775d,	// (0x00048829) tabs_3_long_passive_pane_cp_ParamLimits

0x775d,	// (0x00048829) tabs_3_long_passive_pane_cp

0x76d7,	// (0x000487a3) volume_small_pane_g1

0x76e0,	// (0x000487ac) volume_small_pane_g2

0x76e9,	// (0x000487b5) volume_small_pane_g3

0x76f2,	// (0x000487be) volume_small_pane_g4

0x76fb,	// (0x000487c7) volume_small_pane_g5

0x7704,	// (0x000487d0) volume_small_pane_g6

0x770d,	// (0x000487d9) volume_small_pane_g7

0x7716,	// (0x000487e2) volume_small_pane_g8

0x771f,	// (0x000487eb) volume_small_pane_g9

0x7728,	// (0x000487f4) volume_small_pane_g10

0x0009,

0xf896,	// (0x00050962) volume_small_pane_g

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp2_ParamLimits

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp2

0x633b,	// (0x00047407) tabs_3_active_pane_g1

0x6343,	// (0x0004740f) tabs_3_active_pane_t1

0x0953,	// (0x00041a1f) bg_passive_tab_pane_cp2_ParamLimits

0x0953,	// (0x00041a1f) bg_passive_tab_pane_cp2

0x633b,	// (0x00047407) tabs_3_passive_pane_g1

0x6343,	// (0x0004740f) tabs_3_passive_pane_t1

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp3_ParamLimits

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp3

0x6355,	// (0x00047421) tabs_4_active_pane_g1

0x635d,	// (0x00047429) tabs_4_active_pane_t1

0x0953,	// (0x00041a1f) bg_passive_tab_pane_cp3_ParamLimits

0x0953,	// (0x00041a1f) bg_passive_tab_pane_cp3

0x6355,	// (0x00047421) tabs_4_1_passive_pane_g1

0x635d,	// (0x00047429) tabs_4_1_passive_pane_t1

0x9493,	// (0x0004a55f) list_highlight_pane_cp2

0xadcc,	// (0x0004be98) list_set_pane_ParamLimits

0xadcc,	// (0x0004be98) list_set_pane

0xae8e,	// (0x0004bf5a) main_pane_set_t1_ParamLimits

0xae8e,	// (0x0004bf5a) main_pane_set_t1

0xaeae,	// (0x0004bf7a) main_pane_set_t2_ParamLimits

0xaeae,	// (0x0004bf7a) main_pane_set_t2

0xaec2,	// (0x0004bf8e) main_pane_set_t3_ParamLimits

0xaec2,	// (0x0004bf8e) main_pane_set_t3

0xaed6,	// (0x0004bfa2) main_pane_set_t4_ParamLimits

0xaed6,	// (0x0004bfa2) main_pane_set_t4

0x0003,

0xf966,	// (0x00050a32) main_pane_set_t_ParamLimits

0xf966,	// (0x00050a32) main_pane_set_t

0xaeea,	// (0x0004bfb6) setting_code_pane

0xaef4,	// (0x0004bfc0) setting_slider_graphic_pane

0xaef4,	// (0x0004bfc0) setting_slider_pane

0xaef4,	// (0x0004bfc0) setting_text_pane

0xaef4,	// (0x0004bfc0) setting_volume_pane

0x636f,	// (0x0004743b) volume_set_pane

0x0953,	// (0x00041a1f) bg_set_opt_pane_cp

0x6379,	// (0x00047445) setting_slider_pane_t1

0x6392,	// (0x0004745e) setting_slider_pane_t2

0x63ac,	// (0x00047478) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00050605) setting_slider_pane_t

0x63c4,	// (0x00047490) slider_set_pane

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp2

0x0961,	// (0x00041a2d) setting_slider_graphic_pane_g1

0x63da,	// (0x000474a6) setting_slider_graphic_pane_t1

0x63ea,	// (0x000474b6) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005060c) setting_slider_graphic_pane_t

0x63fa,	// (0x000474c6) slider_set_pane_cp

0x08f7,	// (0x000419c3) input_focus_pane_cp1

0xad8d,	// (0x0004be59) list_set_text_pane

0x08ed,	// (0x000419b9) setting_text_pane_g1

0x08f7,	// (0x000419c3) input_focus_pane_cp2

0x08ed,	// (0x000419b9) setting_code_pane_g1

0x096a,	// (0x00041a36) setting_code_pane_t1

0x4f45,	// (0x00046011) set_text_pane_t1_ParamLimits

0x4f45,	// (0x00046011) set_text_pane_t1

0x0fed,	// (0x000420b9) set_opt_bg_pane_g1

0x0ff5,	// (0x000420c1) set_opt_bg_pane_g2

0xad65,	// (0x0004be31) set_opt_bg_pane_g3

0x1005,	// (0x000420d1) set_opt_bg_pane_g4

0x100d,	// (0x000420d9) set_opt_bg_pane_g5

0x1015,	// (0x000420e1) set_opt_bg_pane_g6

0xad6f,	// (0x0004be3b) set_opt_bg_pane_g7

0xad79,	// (0x0004be45) set_opt_bg_pane_g8

0xad83,	// (0x0004be4f) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00050a1f) set_opt_bg_pane_g

0xad58,	// (0x0004be24) slider_set_pane_g1

0x78bb,	// (0x00048987) slider_set_pane_g2

0x0006,

0xf944,	// (0x00050a10) slider_set_pane_g

0x7843,	// (0x0004890f) volume_set_pane_g1

0x784d,	// (0x00048919) volume_set_pane_g2

0x7857,	// (0x00048923) volume_set_pane_g3

0x7861,	// (0x0004892d) volume_set_pane_g4

0x786b,	// (0x00048937) volume_set_pane_g5

0x7875,	// (0x00048941) volume_set_pane_g6

0x787f,	// (0x0004894b) volume_set_pane_g7

0x7889,	// (0x00048955) volume_set_pane_g8

0x7893,	// (0x0004895f) volume_set_pane_g9

0x789d,	// (0x00048969) volume_set_pane_g10

0x0009,

0xf91c,	// (0x000509e8) volume_set_pane_g

0x6402,	// (0x000474ce) indicator_pane_ParamLimits

0x6402,	// (0x000474ce) indicator_pane

0x640e,	// (0x000474da) main_idle_pane_g2_ParamLimits

0x640e,	// (0x000474da) main_idle_pane_g2

0x6436,	// (0x00047502) main_pane_idle_g1_ParamLimits

0x6436,	// (0x00047502) main_pane_idle_g1

0x0978,	// (0x00041a44) popup_clock_digital_analogue_window_ParamLimits

0x0978,	// (0x00041a44) popup_clock_digital_analogue_window

0x6444,	// (0x00047510) soft_indicator_pane_ParamLimits

0x6444,	// (0x00047510) soft_indicator_pane

0x6452,	// (0x0004751e) wallpaper_pane_ParamLimits

0x6452,	// (0x0004751e) wallpaper_pane

0x08ed,	// (0x000419b9) wallpaper_pane_g1

0x645e,	// (0x0004752a) indicator_pane_g1_ParamLimits

0x645e,	// (0x0004752a) indicator_pane_g1

0xb181,	// (0x0004c24d) navi_navi_icon_text_pane_srt_g1

0x09a6,	// (0x00041a72) soft_indicator_pane_t1

0x09c0,	// (0x00041a8c) aid_ps_area_pane

0x646a,	// (0x00047536) aid_ps_clock_pane

0x09d1,	// (0x00041a9d) aid_ps_indicator_pane

0x09dd,	// (0x00041aa9) indicator_ps_pane_ParamLimits

0x09dd,	// (0x00041aa9) indicator_ps_pane

0x09ec,	// (0x00041ab8) power_save_pane_g1_ParamLimits

0x09ec,	// (0x00041ab8) power_save_pane_g1

0x09f8,	// (0x00041ac4) power_save_pane_g2_ParamLimits

0x09f8,	// (0x00041ac4) power_save_pane_g2

0x5ea2,	// (0x00046f6e) aid_navinavi_width_pane

0x09c0,	// (0x00041a8c) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00050611) power_save_pane_g_ParamLimits

0xf545,	// (0x00050611) power_save_pane_g

0x0a06,	// (0x00041ad2) power_save_pane_t1_ParamLimits

0x0a06,	// (0x00041ad2) power_save_pane_t1

0x646a,	// (0x00047536) aid_ps_clock_pane_ParamLimits

0x09d1,	// (0x00041a9d) aid_ps_indicator_pane_ParamLimits

0x0a18,	// (0x00041ae4) power_save_pane_t4_ParamLimits

0x0a18,	// (0x00041ae4) power_save_pane_t4

0x0001,

0xf54a,	// (0x00050616) power_save_pane_t_ParamLimits

0xf54a,	// (0x00050616) power_save_pane_t

0x0a42,	// (0x00041b0e) power_save_t3_ParamLimits

0x0a42,	// (0x00041b0e) power_save_t3

0x0a2d,	// (0x00041af9) power_save_t2_ParamLimits

0x0a2d,	// (0x00041af9) power_save_t2

0x0a57,	// (0x00041b23) indicator_ps_pane_g1

0x6478,	// (0x00047544) ai_gene_pane_ParamLimits

0x6478,	// (0x00047544) ai_gene_pane

0x6484,	// (0x00047550) ai_links_pane_ParamLimits

0x6484,	// (0x00047550) ai_links_pane

0x6490,	// (0x0004755c) indicator_pane_cp1_ParamLimits

0x6490,	// (0x0004755c) indicator_pane_cp1

0x649c,	// (0x00047568) main_pane_idle_g1_cp_ParamLimits

0x649c,	// (0x00047568) main_pane_idle_g1_cp

0x0a60,	// (0x00041b2c) popup_ai_links_title_window

0x64a8,	// (0x00047574) soft_indicator_pane_cp1_ParamLimits

0x64a8,	// (0x00047574) soft_indicator_pane_cp1

0xab41,	// (0x0004bc0d) ai_links_pane_g1

0xab4a,	// (0x0004bc16) grid_ai_links_pane

0xab26,	// (0x0004bbf2) ai_gene_pane_1

0xab2f,	// (0x0004bbfb) ai_gene_pane_2

0xab38,	// (0x0004bc04) list_highlight_pane_cp4

0xab06,	// (0x0004bbd2) cell_ai_link_pane_ParamLimits

0xab06,	// (0x0004bbd2) cell_ai_link_pane

0xaafe,	// (0x0004bbca) cell_ai_link_pane_g1

0x0c54,	// (0x00041d20) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x000509c3) cell_ai_link_pane_g

0x08f7,	// (0x000419c3) grid_highlight_cp2

0x08f7,	// (0x000419c3) bg_popup_sub_pane_cp1

0x0a77,	// (0x00041b43) popup_ai_links_title_window_t1

0xaa4a,	// (0x0004bb16) ai_gene_pane_1_g1_ParamLimits

0xaa4a,	// (0x0004bb16) ai_gene_pane_1_g1

0xaa56,	// (0x0004bb22) ai_gene_pane_1_g2_ParamLimits

0xaa56,	// (0x0004bb22) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x000509b9) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x000509b9) ai_gene_pane_1_g

0xaa63,	// (0x0004bb2f) ai_gene_pane_1_t1_ParamLimits

0xaa63,	// (0x0004bb2f) ai_gene_pane_1_t1

0xaa97,	// (0x0004bb63) grid_ai_soft_ind_pane

0xaa35,	// (0x0004bb01) ai_gene_pane_2_t1_ParamLimits

0xaa35,	// (0x0004bb01) ai_gene_pane_2_t1

0x64b4,	// (0x00047580) main_pane_empty_t1_ParamLimits

0x64b4,	// (0x00047580) main_pane_empty_t1

0x64cc,	// (0x00047598) main_pane_empty_t2_ParamLimits

0x64cc,	// (0x00047598) main_pane_empty_t2

0x64e1,	// (0x000475ad) main_pane_empty_t3_ParamLimits

0x64e1,	// (0x000475ad) main_pane_empty_t3

0x64f3,	// (0x000475bf) main_pane_empty_t4_ParamLimits

0x64f3,	// (0x000475bf) main_pane_empty_t4

0x6505,	// (0x000475d1) main_pane_empty_t5_ParamLimits

0x6505,	// (0x000475d1) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005061b) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005061b) main_pane_empty_t

0x107c,	// (0x00042148) bg_popup_window_pane_ParamLimits

0x107c,	// (0x00042148) bg_popup_window_pane

0xa797,	// (0x0004b863) find_popup_pane_cp2_ParamLimits

0xa797,	// (0x0004b863) find_popup_pane_cp2

0xa7a3,	// (0x0004b86f) heading_pane_ParamLimits

0xa7a3,	// (0x0004b86f) heading_pane

0x08f7,	// (0x000419c3) bg_popup_sub_pane

0xa711,	// (0x0004b7dd) bg_popup_window_pane_g1_ParamLimits

0xa711,	// (0x0004b7dd) bg_popup_window_pane_g1

0xa71d,	// (0x0004b7e9) bg_popup_window_pane_g2_ParamLimits

0xa71d,	// (0x0004b7e9) bg_popup_window_pane_g2

0xa729,	// (0x0004b7f5) bg_popup_window_pane_g3_ParamLimits

0xa729,	// (0x0004b7f5) bg_popup_window_pane_g3

0xa735,	// (0x0004b801) bg_popup_window_pane_g4_ParamLimits

0xa735,	// (0x0004b801) bg_popup_window_pane_g4

0xa741,	// (0x0004b80d) bg_popup_window_pane_g5_ParamLimits

0xa741,	// (0x0004b80d) bg_popup_window_pane_g5

0xa74d,	// (0x0004b819) bg_popup_window_pane_g6_ParamLimits

0xa74d,	// (0x0004b819) bg_popup_window_pane_g6

0xa759,	// (0x0004b825) bg_popup_window_pane_g7_ParamLimits

0xa759,	// (0x0004b825) bg_popup_window_pane_g7

0xa765,	// (0x0004b831) bg_popup_window_pane_g8_ParamLimits

0xa765,	// (0x0004b831) bg_popup_window_pane_g8

0xa771,	// (0x0004b83d) bg_popup_window_pane_g9_ParamLimits

0xa771,	// (0x0004b83d) bg_popup_window_pane_g9

0xa77d,	// (0x0004b849) bg_popup_window_pane_g10_ParamLimits

0xa77d,	// (0x0004b849) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x00050981) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x00050981) bg_popup_window_pane_g

0xa6a6,	// (0x0004b772) bg_popup_heading_pane_ParamLimits

0xa6a6,	// (0x0004b772) bg_popup_heading_pane

0x79d4,	// (0x00048aa0) tabs_4_passive_pane_cp_srt_ParamLimits

0x79d4,	// (0x00048aa0) tabs_4_passive_pane_cp_srt

0x79e6,	// (0x00048ab2) tabs_4_passive_pane_srt_ParamLimits

0xa6ba,	// (0x0004b786) heading_pane_g2

0x79e6,	// (0x00048ab2) tabs_4_passive_pane_srt

0x9493,	// (0x0004a55f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9493,	// (0x0004a55f) bg_passive_tab_pane_cp3_srt

0xa6c2,	// (0x0004b78e) heading_pane_t1_ParamLimits

0xa6c2,	// (0x0004b78e) heading_pane_t1

0xa6d9,	// (0x0004b7a5) heading_pane_t2_ParamLimits

0xa6d9,	// (0x0004b7a5) heading_pane_t2

0x0001,

0xf8b0,	// (0x0005097c) heading_pane_t_ParamLimits

0xf8b0,	// (0x0005097c) heading_pane_t

0xa1d1,	// (0x0004b29d) bg_popup_heading_pane_g1

0xa280,	// (0x0004b34c) bg_popup_heading_pane_g2

0xa28a,	// (0x0004b356) bg_popup_heading_pane_g3

0xa294,	// (0x0004b360) bg_popup_heading_pane_g4

0xa29e,	// (0x0004b36a) bg_popup_heading_pane_g5

0xa2a8,	// (0x0004b374) bg_popup_heading_pane_g6

0xa2b0,	// (0x0004b37c) bg_popup_heading_pane_g7

0xa2b8,	// (0x0004b384) bg_popup_heading_pane_g8

0xa2c2,	// (0x0004b38e) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00050938) bg_popup_heading_pane_g

0x99c9,	// (0x0004aa95) bg_popup_sub_pane_g1

0x99d1,	// (0x0004aa9d) bg_popup_sub_pane_g2

0x99d9,	// (0x0004aaa5) bg_popup_sub_pane_g3

0x99e1,	// (0x0004aaad) bg_popup_sub_pane_g4

0x99e9,	// (0x0004aab5) bg_popup_sub_pane_g5

0x99f1,	// (0x0004aabd) bg_popup_sub_pane_g6

0x99f9,	// (0x0004aac5) bg_popup_sub_pane_g7

0x9a01,	// (0x0004aacd) bg_popup_sub_pane_g8

0x9a09,	// (0x0004aad5) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00050912) bg_popup_sub_pane_g

0x0945,	// (0x00041a11) bg_popup_window_pane_cp5_ParamLimits

0x0945,	// (0x00041a11) bg_popup_window_pane_cp5

0x0a94,	// (0x00041b60) popup_note_window_g1_ParamLimits

0x0a94,	// (0x00041b60) popup_note_window_g1

0x0aa0,	// (0x00041b6c) popup_note_window_t1_ParamLimits

0x0aa0,	// (0x00041b6c) popup_note_window_t1

0x0ab6,	// (0x00041b82) popup_note_window_t2_ParamLimits

0x0ab6,	// (0x00041b82) popup_note_window_t2

0x0acc,	// (0x00041b98) popup_note_window_t3_ParamLimits

0x0acc,	// (0x00041b98) popup_note_window_t3

0x0ae2,	// (0x00041bae) popup_note_window_t4_ParamLimits

0x0ae2,	// (0x00041bae) popup_note_window_t4

0x0b0a,	// (0x00041bd6) popup_note_window_t5_ParamLimits

0x0b0a,	// (0x00041bd6) popup_note_window_t5

0x0004,

0xf55a,	// (0x00050626) popup_note_window_t_ParamLimits

0xf55a,	// (0x00050626) popup_note_window_t

0x0b54,	// (0x00041c20) bg_popup_window_pane_cp6_ParamLimits

0x0b54,	// (0x00041c20) bg_popup_window_pane_cp6

0xa14d,	// (0x0004b219) popup_note_image_window_g1_ParamLimits

0xa14d,	// (0x0004b219) popup_note_image_window_g1

0xa159,	// (0x0004b225) popup_note_image_window_g2_ParamLimits

0xa159,	// (0x0004b225) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00050906) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00050906) popup_note_image_window_g

0xa172,	// (0x0004b23e) popup_note_image_window_t1_ParamLimits

0xa172,	// (0x0004b23e) popup_note_image_window_t1

0xa18b,	// (0x0004b257) popup_note_image_window_t2_ParamLimits

0xa18b,	// (0x0004b257) popup_note_image_window_t2

0xa1a4,	// (0x0004b270) popup_note_image_window_t3_ParamLimits

0xa1a4,	// (0x0004b270) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x0005090b) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x0005090b) popup_note_image_window_t

0xa00d,	// (0x0004b0d9) bg_popup_window_pane_cp7_ParamLimits

0xa00d,	// (0x0004b0d9) bg_popup_window_pane_cp7

0xa03d,	// (0x0004b109) popup_note_wait_window_g1_ParamLimits

0xa03d,	// (0x0004b109) popup_note_wait_window_g1

0xa049,	// (0x0004b115) popup_note_wait_window_g2_ParamLimits

0xa049,	// (0x0004b115) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x000508f4) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x000508f4) popup_note_wait_window_g

0xa061,	// (0x0004b12d) popup_note_wait_window_t1_ParamLimits

0xa061,	// (0x0004b12d) popup_note_wait_window_t1

0xa088,	// (0x0004b154) popup_note_wait_window_t2_ParamLimits

0xa088,	// (0x0004b154) popup_note_wait_window_t2

0xa0a6,	// (0x0004b172) popup_note_wait_window_t3_ParamLimits

0xa0a6,	// (0x0004b172) popup_note_wait_window_t3

0xa0b9,	// (0x0004b185) popup_note_wait_window_t4_ParamLimits

0xa0b9,	// (0x0004b185) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x000508fb) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x000508fb) popup_note_wait_window_t

0xa0de,	// (0x0004b1aa) wait_bar_pane_ParamLimits

0xa0de,	// (0x0004b1aa) wait_bar_pane

0x08f7,	// (0x000419c3) wait_anim_pane

0x08f7,	// (0x000419c3) wait_border_pane

0x08ed,	// (0x000419b9) wait_anim_pane_g1

0x08ed,	// (0x000419b9) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000507af) wait_anim_pane_g

0x9fb1,	// (0x0004b07d) wait_border_pane_g1

0x9fbc,	// (0x0004b088) wait_border_pane_g2

0x9fc5,	// (0x0004b091) wait_border_pane_g3

0x0002,

0xf821,	// (0x000508ed) wait_border_pane_g

0x9e1b,	// (0x0004aee7) bg_popup_window_pane_cp16_ParamLimits

0x9e1b,	// (0x0004aee7) bg_popup_window_pane_cp16

0x9f1b,	// (0x0004afe7) indicator_popup_pane_cp4_ParamLimits

0x9f1b,	// (0x0004afe7) indicator_popup_pane_cp4

0x9f2f,	// (0x0004affb) popup_query_data_window_t1_ParamLimits

0x9f2f,	// (0x0004affb) popup_query_data_window_t1

0x9f41,	// (0x0004b00d) popup_query_data_window_t2_ParamLimits

0x9f41,	// (0x0004b00d) popup_query_data_window_t2

0x9f5a,	// (0x0004b026) popup_query_data_window_t3_ParamLimits

0x9f5a,	// (0x0004b026) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x000508e6) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x000508e6) popup_query_data_window_t

0x9f74,	// (0x0004b040) query_popup_data_pane_ParamLimits

0x9f74,	// (0x0004b040) query_popup_data_pane

0x9f88,	// (0x0004b054) query_popup_data_pane_cp1_ParamLimits

0x9f88,	// (0x0004b054) query_popup_data_pane_cp1

0x9e1b,	// (0x0004aee7) bg_popup_window_pane_cp10_ParamLimits

0x9e1b,	// (0x0004aee7) bg_popup_window_pane_cp10

0x9e4d,	// (0x0004af19) indicator_popup_pane_ParamLimits

0x9e4d,	// (0x0004af19) indicator_popup_pane

0x9e6f,	// (0x0004af3b) popup_query_code_window_t1_ParamLimits

0x9e6f,	// (0x0004af3b) popup_query_code_window_t1

0x9e89,	// (0x0004af55) popup_query_code_window_t2_ParamLimits

0x9e89,	// (0x0004af55) popup_query_code_window_t2

0x9ed2,	// (0x0004af9e) popup_query_code_window_t3_ParamLimits

0x9ed2,	// (0x0004af9e) popup_query_code_window_t3

0x0002,

0xf813,	// (0x000508df) popup_query_code_window_t_ParamLimits

0xf813,	// (0x000508df) popup_query_code_window_t

0x9f01,	// (0x0004afcd) query_popup_pane_ParamLimits

0x9f01,	// (0x0004afcd) query_popup_pane

0x0b54,	// (0x00041c20) bg_popup_window_pane_cp15_ParamLimits

0x0b54,	// (0x00041c20) bg_popup_window_pane_cp15

0x0b74,	// (0x00041c40) indicator_popup_pane_cp1_ParamLimits

0x0b74,	// (0x00041c40) indicator_popup_pane_cp1

0x0b87,	// (0x00041c53) indicator_popup_pane_cp2_ParamLimits

0x0b87,	// (0x00041c53) indicator_popup_pane_cp2

0x0ba2,	// (0x00041c6e) popup_query_data_code_window_g1_ParamLimits

0x0ba2,	// (0x00041c6e) popup_query_data_code_window_g1

0x0bb5,	// (0x00041c81) popup_query_data_code_window_t1_ParamLimits

0x0bb5,	// (0x00041c81) popup_query_data_code_window_t1

0x0bc7,	// (0x00041c93) popup_query_data_code_window_t2_ParamLimits

0x0bc7,	// (0x00041c93) popup_query_data_code_window_t2

0x0bd9,	// (0x00041ca5) popup_query_data_code_window_t3_ParamLimits

0x0bd9,	// (0x00041ca5) popup_query_data_code_window_t3

0x0bef,	// (0x00041cbb) popup_query_data_code_window_t4_ParamLimits

0x0bef,	// (0x00041cbb) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00050631) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00050631) popup_query_data_code_window_t

0x8f8b,	// (0x0004a057) list_single_midp_graphic_pane_g3

0x0c09,	// (0x00041cd5) query_popup_data_pane_cp2_ParamLimits

0x0c1c,	// (0x00041ce8) query_popup_pane_cp2_ParamLimits

0x0c1c,	// (0x00041ce8) query_popup_pane_cp2

0x08f7,	// (0x000419c3) bg_popup_window_pane_cp11

0x9dff,	// (0x0004aecb) heading_pane_cp5

0x9e07,	// (0x0004aed3) listscroll_popup_info_pane

0x08f7,	// (0x000419c3) input_focus_pane_cp3

0x0c37,	// (0x00041d03) query_popup_pane_t1

0x0c45,	// (0x00041d11) list_popup_info_pane_ParamLimits

0x0c45,	// (0x00041d11) list_popup_info_pane

0x0c54,	// (0x00041d20) listscroll_popup_info_pane_g1

0x0c5c,	// (0x00041d28) scroll_pane_cp7

0x0c66,	// (0x00041d32) popup_info_list_pane_t1_ParamLimits

0x0c66,	// (0x00041d32) popup_info_list_pane_t1

0x0c80,	// (0x00041d4c) popup_info_list_pane_t2_ParamLimits

0x0c80,	// (0x00041d4c) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005063a) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005063a) popup_info_list_pane_t

0x08f7,	// (0x000419c3) bg_popup_window_pane_cp12

0xb19b,	// (0x0004c267) find_popup_pane

0x0953,	// (0x00041a1f) bg_popup_window_pane_cp3

0x0c9a,	// (0x00041d66) heading_pane_cp3

0x0ca9,	// (0x00041d75) listscroll_popup_graphic_pane

0x08f7,	// (0x000419c3) bg_popup_window_pane_cp4

0x6567,	// (0x00047633) heading_pane_cp4

0x0cb9,	// (0x00041d85) listscroll_popup_colour_pane

0x6571,	// (0x0004763d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6571,	// (0x0004763d) cell_large_graphic_colour_none_popup_pane

0x6585,	// (0x00047651) grid_large_graphic_colour_popup_pane_ParamLimits

0x6585,	// (0x00047651) grid_large_graphic_colour_popup_pane

0x65b1,	// (0x0004767d) listscroll_popup_colour_pane_g1_ParamLimits

0x65b1,	// (0x0004767d) listscroll_popup_colour_pane_g1

0x65c8,	// (0x00047694) listscroll_popup_colour_pane_g2_ParamLimits

0x65c8,	// (0x00047694) listscroll_popup_colour_pane_g2

0x65df,	// (0x000476ab) listscroll_popup_colour_pane_g3_ParamLimits

0x65df,	// (0x000476ab) listscroll_popup_colour_pane_g3

0x65ef,	// (0x000476bb) listscroll_popup_colour_pane_g4_ParamLimits

0x65ef,	// (0x000476bb) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005063f) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005063f) listscroll_popup_colour_pane_g

0x0cc1,	// (0x00041d8d) scroll_pane_cp6_ParamLimits

0x0cc1,	// (0x00041d8d) scroll_pane_cp6

0x6603,	// (0x000476cf) cell_large_graphic_colour_popup_pane_ParamLimits

0x6603,	// (0x000476cf) cell_large_graphic_colour_popup_pane

0x0cd3,	// (0x00041d9f) cell_large_graphic_colour_none_popup_pane_t1

0x08f7,	// (0x000419c3) grid_highlight_pane_cp5

0x0ce2,	// (0x00041dae) cell_large_graphic_colour_popup_pane_g1

0x0cea,	// (0x00041db6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00050648) cell_large_graphic_colour_popup_pane_g

0x0cf2,	// (0x00041dbe) cell_large_graphic_colour_popup_pane_g2_copy1

0x0cfb,	// (0x00041dc7) grid_highlight_pane_cp4

0x0d03,	// (0x00041dcf) bg_popup_window_pane_cp8_ParamLimits

0x0d03,	// (0x00041dcf) bg_popup_window_pane_cp8

0x0d1e,	// (0x00041dea) popup_snote_single_text_window_g1_ParamLimits

0x0d1e,	// (0x00041dea) popup_snote_single_text_window_g1

0x0d30,	// (0x00041dfc) popup_snote_single_text_window_t1_ParamLimits

0x0d30,	// (0x00041dfc) popup_snote_single_text_window_t1

0x0d43,	// (0x00041e0f) popup_snote_single_text_window_t2_ParamLimits

0x0d43,	// (0x00041e0f) popup_snote_single_text_window_t2

0x0d56,	// (0x00041e22) popup_snote_single_text_window_t3_ParamLimits

0x0d56,	// (0x00041e22) popup_snote_single_text_window_t3

0x0d8f,	// (0x00041e5b) popup_snote_single_text_window_t4_ParamLimits

0x0d8f,	// (0x00041e5b) popup_snote_single_text_window_t4

0x0dc3,	// (0x00041e8f) popup_snote_single_text_window_t5_ParamLimits

0x0dc3,	// (0x00041e8f) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005064d) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005064d) popup_snote_single_text_window_t

0x0df2,	// (0x00041ebe) bg_popup_window_pane_cp9_ParamLimits

0x0df2,	// (0x00041ebe) bg_popup_window_pane_cp9

0x0d1e,	// (0x00041dea) popup_snote_single_graphic_window_g1_ParamLimits

0x0d1e,	// (0x00041dea) popup_snote_single_graphic_window_g1

0x0e00,	// (0x00041ecc) popup_snote_single_graphic_window_g2_ParamLimits

0x0e00,	// (0x00041ecc) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00050658) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00050658) popup_snote_single_graphic_window_g

0x0e0c,	// (0x00041ed8) popup_snote_single_graphic_window_t1_ParamLimits

0x0e0c,	// (0x00041ed8) popup_snote_single_graphic_window_t1

0x0e1f,	// (0x00041eeb) popup_snote_single_graphic_window_t2_ParamLimits

0x0e1f,	// (0x00041eeb) popup_snote_single_graphic_window_t2

0x0e32,	// (0x00041efe) popup_snote_single_graphic_window_t3_ParamLimits

0x0e32,	// (0x00041efe) popup_snote_single_graphic_window_t3

0x0e6b,	// (0x00041f37) popup_snote_single_graphic_window_t4_ParamLimits

0x0e6b,	// (0x00041f37) popup_snote_single_graphic_window_t4

0x0e9f,	// (0x00041f6b) popup_snote_single_graphic_window_t5_ParamLimits

0x0e9f,	// (0x00041f6b) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005065d) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005065d) popup_snote_single_graphic_window_t

0xb0d9,	// (0x0004c1a5) grid_graphic_popup_pane_ParamLimits

0xb0d9,	// (0x0004c1a5) grid_graphic_popup_pane

0xb107,	// (0x0004c1d3) listscroll_popup_graphic_pane_g1_ParamLimits

0xb107,	// (0x0004c1d3) listscroll_popup_graphic_pane_g1

0xb11b,	// (0x0004c1e7) listscroll_popup_graphic_pane_g2_ParamLimits

0xb11b,	// (0x0004c1e7) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x00050a5c) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x00050a5c) listscroll_popup_graphic_pane_g

0xb12f,	// (0x0004c1fb) scroll_pane_cp5

0xb071,	// (0x0004c13d) cell_graphic_popup_pane_ParamLimits

0xb071,	// (0x0004c13d) cell_graphic_popup_pane

0xb052,	// (0x0004c11e) cell_graphic_popup_pane_g1

0xb05a,	// (0x0004c126) cell_graphic_popup_pane_g2

0x0cf2,	// (0x00041dbe) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00050a55) cell_graphic_popup_pane_g

0xb063,	// (0x0004c12f) cell_graphic_popup_pane_t2

0x0cfb,	// (0x00041dc7) grid_highlight_pane_cp3

0x0ee0,	// (0x00041fac) list_gen_pane_ParamLimits

0x0ee0,	// (0x00041fac) list_gen_pane

0x0f08,	// (0x00041fd4) scroll_pane

0xafaa,	// (0x0004c076) bg_list_pane_g1_ParamLimits

0xafaa,	// (0x0004c076) bg_list_pane_g1

0xafc7,	// (0x0004c093) bg_list_pane_g2_ParamLimits

0xafc7,	// (0x0004c093) bg_list_pane_g2

0xafdc,	// (0x0004c0a8) bg_list_pane_g3_ParamLimits

0xafdc,	// (0x0004c0a8) bg_list_pane_g3

0xaff0,	// (0x0004c0bc) bg_list_pane_g4_ParamLimits

0xaff0,	// (0x0004c0bc) bg_list_pane_g4

0xb004,	// (0x0004c0d0) bg_list_pane_g5_ParamLimits

0xb004,	// (0x0004c0d0) bg_list_pane_g5

0x0004,

0xf97e,	// (0x00050a4a) bg_list_pane_g_ParamLimits

0xf97e,	// (0x00050a4a) bg_list_pane_g

0xaf78,	// (0x0004c044) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double2_graphic_large_graphic_pane

0xaf78,	// (0x0004c044) list_double2_graphic_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double2_graphic_pane

0xaf78,	// (0x0004c044) list_double2_large_graphic_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double2_large_graphic_pane

0x58a6,	// (0x00046972) list_double2_pane_ParamLimits

0x58a6,	// (0x00046972) list_double2_pane

0xaf78,	// (0x0004c044) list_double_graphic_heading_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_graphic_heading_pane

0xaf78,	// (0x0004c044) list_double_graphic_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_graphic_pane

0xaf78,	// (0x0004c044) list_double_heading_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_heading_pane

0xaf78,	// (0x0004c044) list_double_large_graphic_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_large_graphic_pane

0xaf78,	// (0x0004c044) list_double_number_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_number_pane

0xaf78,	// (0x0004c044) list_double_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_pane

0xaf78,	// (0x0004c044) list_double_time_pane_ParamLimits

0xaf78,	// (0x0004c044) list_double_time_pane

0xaf78,	// (0x0004c044) list_setting_number_pane_ParamLimits

0xaf78,	// (0x0004c044) list_setting_number_pane

0xaf78,	// (0x0004c044) list_setting_pane_ParamLimits

0xaf78,	// (0x0004c044) list_setting_pane

0x796c,	// (0x00048a38) list_single_2graphic_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_2graphic_pane

0x796c,	// (0x00048a38) list_single_graphic_heading_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_graphic_heading_pane

0x796c,	// (0x00048a38) list_single_graphic_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_graphic_pane

0x796c,	// (0x00048a38) list_single_heading_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_heading_pane

0xaf8f,	// (0x0004c05b) list_single_large_graphic_pane_ParamLimits

0xaf8f,	// (0x0004c05b) list_single_large_graphic_pane

0x796c,	// (0x00048a38) list_single_number_heading_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_number_heading_pane

0x796c,	// (0x00048a38) list_single_number_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_number_pane

0x796c,	// (0x00048a38) list_single_pane_ParamLimits

0x796c,	// (0x00048a38) list_single_pane

0x08f7,	// (0x000419c3) list_highlight_pane_cp1

0x662e,	// (0x000476fa) list_single_pane_g1_ParamLimits

0x662e,	// (0x000476fa) list_single_pane_g1

0x663a,	// (0x00047706) list_single_pane_g2_ParamLimits

0x663a,	// (0x00047706) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00050679) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00050679) list_single_pane_g

0x5890,	// (0x0004695c) list_single_pane_t1_ParamLimits

0x5890,	// (0x0004695c) list_single_pane_t1

0x662e,	// (0x000476fa) list_single_number_pane_g1_ParamLimits

0x662e,	// (0x000476fa) list_single_number_pane_g1

0x663a,	// (0x00047706) list_single_number_pane_g2_ParamLimits

0x663a,	// (0x00047706) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00050679) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00050679) list_single_number_pane_g

0x5832,	// (0x000468fe) list_single_number_pane_t1_ParamLimits

0x5832,	// (0x000468fe) list_single_number_pane_t1

0x5848,	// (0x00046914) list_single_number_pane_t2_ParamLimits

0x5848,	// (0x00046914) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x00050a0b) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x00050a0b) list_single_number_pane_t

0x4f5e,	// (0x0004602a) list_single_graphic_pane_g1_ParamLimits

0x4f5e,	// (0x0004602a) list_single_graphic_pane_g1

0x662e,	// (0x000476fa) list_single_graphic_pane_g2_ParamLimits

0x662e,	// (0x000476fa) list_single_graphic_pane_g2

0x663a,	// (0x00047706) list_single_graphic_pane_g3_ParamLimits

0x663a,	// (0x00047706) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00050668) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00050668) list_single_graphic_pane_g

0x4f6a,	// (0x00046036) list_single_graphic_pane_t1_ParamLimits

0x4f6a,	// (0x00046036) list_single_graphic_pane_t1

0x4f80,	// (0x0004604c) list_single_heading_pane_g1_ParamLimits

0x4f80,	// (0x0004604c) list_single_heading_pane_g1

0x663a,	// (0x00047706) list_single_heading_pane_g2_ParamLimits

0x663a,	// (0x00047706) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005066f) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005066f) list_single_heading_pane_g

0x4f93,	// (0x0004605f) list_single_heading_pane_t1_ParamLimits

0x4f93,	// (0x0004605f) list_single_heading_pane_t1

0x6646,	// (0x00047712) list_single_heading_pane_t2_ParamLimits

0x6646,	// (0x00047712) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00050674) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00050674) list_single_heading_pane_t

0x662e,	// (0x000476fa) list_single_number_heading_pane_g1_ParamLimits

0x662e,	// (0x000476fa) list_single_number_heading_pane_g1

0x663a,	// (0x00047706) list_single_number_heading_pane_g2_ParamLimits

0x663a,	// (0x00047706) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00050679) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00050679) list_single_number_heading_pane_g

0x4fa9,	// (0x00046075) list_single_number_heading_pane_t1_ParamLimits

0x4fa9,	// (0x00046075) list_single_number_heading_pane_t1

0x4fbf,	// (0x0004608b) list_single_number_heading_pane_t2_ParamLimits

0x4fbf,	// (0x0004608b) list_single_number_heading_pane_t2

0x4fd1,	// (0x0004609d) list_single_number_heading_pane_t3_ParamLimits

0x4fd1,	// (0x0004609d) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005067e) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005067e) list_single_number_heading_pane_t

0x4fe3,	// (0x000460af) list_single_graphic_heading_pane_g1_ParamLimits

0x4fe3,	// (0x000460af) list_single_graphic_heading_pane_g1

0x6658,	// (0x00047724) list_single_graphic_heading_pane_g4_ParamLimits

0x6658,	// (0x00047724) list_single_graphic_heading_pane_g4

0x663a,	// (0x00047706) list_single_graphic_heading_pane_g5_ParamLimits

0x663a,	// (0x00047706) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00050685) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00050685) list_single_graphic_heading_pane_g

0x4fa9,	// (0x00046075) list_single_graphic_heading_pane_t1_ParamLimits

0x4fa9,	// (0x00046075) list_single_graphic_heading_pane_t1

0x4ffb,	// (0x000460c7) list_single_graphic_heading_pane_t2_ParamLimits

0x4ffb,	// (0x000460c7) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005068c) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005068c) list_single_graphic_heading_pane_t

0x6669,	// (0x00047735) list_single_large_graphic_pane_g1_ParamLimits

0x6669,	// (0x00047735) list_single_large_graphic_pane_g1

0x662e,	// (0x000476fa) list_single_large_graphic_pane_g2_ParamLimits

0x662e,	// (0x000476fa) list_single_large_graphic_pane_g2

0x663a,	// (0x00047706) list_single_large_graphic_pane_g3_ParamLimits

0x663a,	// (0x00047706) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00050691) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00050691) list_single_large_graphic_pane_g

0x9fbc,	// (0x0004b088) wait_border_pane_g2_copy1

0x6675,	// (0x00047741) list_single_large_graphic_pane_g4_cp2

0x5013,	// (0x000460df) list_single_large_graphic_pane_t1_ParamLimits

0x5013,	// (0x000460df) list_single_large_graphic_pane_t1

0x8c47,	// (0x00049d13) list_double_pane_g1_ParamLimits

0x8c47,	// (0x00049d13) list_double_pane_g1

0x5029,	// (0x000460f5) list_double_pane_g2_ParamLimits

0x5029,	// (0x000460f5) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00050698) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00050698) list_double_pane_g

0x5035,	// (0x00046101) list_double_pane_t1_ParamLimits

0x5035,	// (0x00046101) list_double_pane_t1

0x504b,	// (0x00046117) list_double_pane_t2_ParamLimits

0x504b,	// (0x00046117) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005069d) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005069d) list_double_pane_t

0x505d,	// (0x00046129) list_double2_pane_g1_ParamLimits

0x505d,	// (0x00046129) list_double2_pane_g1

0x506e,	// (0x0004613a) list_double2_pane_g2_ParamLimits

0x506e,	// (0x0004613a) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000506a2) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000506a2) list_double2_pane_g

0x507a,	// (0x00046146) list_double2_pane_t1_ParamLimits

0x507a,	// (0x00046146) list_double2_pane_t1

0x5090,	// (0x0004615c) list_double2_pane_t2_ParamLimits

0x5090,	// (0x0004615c) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000506a7) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000506a7) list_double2_pane_t

0x8c47,	// (0x00049d13) list_double_number_pane_g1_ParamLimits

0x8c47,	// (0x00049d13) list_double_number_pane_g1

0x5029,	// (0x000460f5) list_double_number_pane_g2_ParamLimits

0x5029,	// (0x000460f5) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00050698) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00050698) list_double_number_pane_g

0x50a2,	// (0x0004616e) list_double_number_pane_t1_ParamLimits

0x50a2,	// (0x0004616e) list_double_number_pane_t1

0x50b4,	// (0x00046180) list_double_number_pane_t2_ParamLimits

0x50b4,	// (0x00046180) list_double_number_pane_t2

0x50ca,	// (0x00046196) list_double_number_pane_t3_ParamLimits

0x50ca,	// (0x00046196) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000506ac) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000506ac) list_double_number_pane_t

0x50dc,	// (0x000461a8) list_double_graphic_pane_g1_ParamLimits

0x50dc,	// (0x000461a8) list_double_graphic_pane_g1

0x50e8,	// (0x000461b4) list_double_graphic_pane_g2_ParamLimits

0x50e8,	// (0x000461b4) list_double_graphic_pane_g2

0x50f7,	// (0x000461c3) list_double_graphic_pane_g3_ParamLimits

0x50f7,	// (0x000461c3) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000506b3) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000506b3) list_double_graphic_pane_g

0x510f,	// (0x000461db) list_double_graphic_pane_t1_ParamLimits

0x510f,	// (0x000461db) list_double_graphic_pane_t1

0x5125,	// (0x000461f1) list_double_graphic_pane_t2_ParamLimits

0x5125,	// (0x000461f1) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000506bc) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000506bc) list_double_graphic_pane_t

0x5137,	// (0x00046203) list_double2_graphic_pane_g1_ParamLimits

0x5137,	// (0x00046203) list_double2_graphic_pane_g1

0x667d,	// (0x00047749) list_double2_graphic_pane_g2_ParamLimits

0x667d,	// (0x00047749) list_double2_graphic_pane_g2

0x6689,	// (0x00047755) list_double2_graphic_pane_g3_ParamLimits

0x6689,	// (0x00047755) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000506c1) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000506c1) list_double2_graphic_pane_g

0x5143,	// (0x0004620f) list_double2_graphic_pane_t1_ParamLimits

0x5143,	// (0x0004620f) list_double2_graphic_pane_t1

0x5159,	// (0x00046225) list_double2_graphic_pane_t2_ParamLimits

0x5159,	// (0x00046225) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000506c8) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000506c8) list_double2_graphic_pane_t

0x516b,	// (0x00046237) list_double_large_graphic_pane_g1_ParamLimits

0x516b,	// (0x00046237) list_double_large_graphic_pane_g1

0x518a,	// (0x00046256) list_double_large_graphic_pane_g2_ParamLimits

0x518a,	// (0x00046256) list_double_large_graphic_pane_g2

0x5029,	// (0x000460f5) list_double_large_graphic_pane_g3_ParamLimits

0x5029,	// (0x000460f5) list_double_large_graphic_pane_g3

0x6695,	// (0x00047761) list_double_large_graphic_pane_g4_ParamLimits

0x6695,	// (0x00047761) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000506cd) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000506cd) list_double_large_graphic_pane_g

0x51a0,	// (0x0004626c) list_double_large_graphic_pane_t1_ParamLimits

0x51a0,	// (0x0004626c) list_double_large_graphic_pane_t1

0x51b9,	// (0x00046285) list_double_large_graphic_pane_t2_ParamLimits

0x51b9,	// (0x00046285) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000506d8) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000506d8) list_double_large_graphic_pane_t

0x66bd,	// (0x00047789) list_double2_large_graphic_pane_g1_ParamLimits

0x66bd,	// (0x00047789) list_double2_large_graphic_pane_g1

0x66c9,	// (0x00047795) list_double2_large_graphic_pane_g2_ParamLimits

0x66c9,	// (0x00047795) list_double2_large_graphic_pane_g2

0x6689,	// (0x00047755) list_double2_large_graphic_pane_g3_ParamLimits

0x6689,	// (0x00047755) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000506dd) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000506dd) list_double2_large_graphic_pane_g

0x51cb,	// (0x00046297) list_double2_large_graphic_pane_t1_ParamLimits

0x51cb,	// (0x00046297) list_double2_large_graphic_pane_t1

0x51e1,	// (0x000462ad) list_double2_large_graphic_pane_t2_ParamLimits

0x51e1,	// (0x000462ad) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x000506e4) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x000506e4) list_double2_large_graphic_pane_t

0x51f3,	// (0x000462bf) list_double_heading_pane_g1_ParamLimits

0x51f3,	// (0x000462bf) list_double_heading_pane_g1

0x5204,	// (0x000462d0) list_double_heading_pane_g2_ParamLimits

0x5204,	// (0x000462d0) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x000506e9) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x000506e9) list_double_heading_pane_g

0x5210,	// (0x000462dc) list_double_heading_pane_t1_ParamLimits

0x5210,	// (0x000462dc) list_double_heading_pane_t1

0x5226,	// (0x000462f2) list_double_heading_pane_t2_ParamLimits

0x5226,	// (0x000462f2) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x000506ee) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x000506ee) list_double_heading_pane_t

0x5238,	// (0x00046304) list_double_graphic_heading_pane_g1_ParamLimits

0x5238,	// (0x00046304) list_double_graphic_heading_pane_g1

0x51f3,	// (0x000462bf) list_double_graphic_heading_pane_g2_ParamLimits

0x51f3,	// (0x000462bf) list_double_graphic_heading_pane_g2

0x5204,	// (0x000462d0) list_double_graphic_heading_pane_g3_ParamLimits

0x5204,	// (0x000462d0) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x000506f3) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x000506f3) list_double_graphic_heading_pane_g

0x5244,	// (0x00046310) list_double_graphic_heading_pane_t1_ParamLimits

0x5244,	// (0x00046310) list_double_graphic_heading_pane_t1

0x525a,	// (0x00046326) list_double_graphic_heading_pane_t2_ParamLimits

0x525a,	// (0x00046326) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x000506fa) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x000506fa) list_double_graphic_heading_pane_t

0x526c,	// (0x00046338) list_double_time_pane_g1_ParamLimits

0x526c,	// (0x00046338) list_double_time_pane_g1

0x527d,	// (0x00046349) list_double_time_pane_g2_ParamLimits

0x527d,	// (0x00046349) list_double_time_pane_g2

0x0001,

0xf633,	// (0x000506ff) list_double_time_pane_g_ParamLimits

0xf633,	// (0x000506ff) list_double_time_pane_g

0x5289,	// (0x00046355) list_double_time_pane_t1_ParamLimits

0x5289,	// (0x00046355) list_double_time_pane_t1

0x529f,	// (0x0004636b) list_double_time_pane_t2_ParamLimits

0x529f,	// (0x0004636b) list_double_time_pane_t2

0x52b1,	// (0x0004637d) list_double_time_pane_t3_ParamLimits

0x52b1,	// (0x0004637d) list_double_time_pane_t3

0x52c3,	// (0x0004638f) list_double_time_pane_t4_ParamLimits

0x52c3,	// (0x0004638f) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00050704) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00050704) list_double_time_pane_t

0x52d5,	// (0x000463a1) list_setting_pane_g1_ParamLimits

0x52d5,	// (0x000463a1) list_setting_pane_g1

0x52e1,	// (0x000463ad) list_setting_pane_g2_ParamLimits

0x52e1,	// (0x000463ad) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005070d) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005070d) list_setting_pane_g

0x52ed,	// (0x000463b9) list_setting_pane_t1_ParamLimits

0x52ed,	// (0x000463b9) list_setting_pane_t1

0x5307,	// (0x000463d3) list_setting_pane_t2_ParamLimits

0x5307,	// (0x000463d3) list_setting_pane_t2

0x0002,

0xf646,	// (0x00050712) list_setting_pane_t_ParamLimits

0xf646,	// (0x00050712) list_setting_pane_t

0x5346,	// (0x00046412) set_value_pane_cp_ParamLimits

0x5346,	// (0x00046412) set_value_pane_cp

0x5354,	// (0x00046420) list_setting_number_pane_g1_ParamLimits

0x5354,	// (0x00046420) list_setting_number_pane_g1

0x5360,	// (0x0004642c) list_setting_number_pane_g2_ParamLimits

0x5360,	// (0x0004642c) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00050719) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00050719) list_setting_number_pane_g

0x536c,	// (0x00046438) list_setting_number_pane_t1_ParamLimits

0x536c,	// (0x00046438) list_setting_number_pane_t1

0x5385,	// (0x00046451) list_setting_number_pane_t2_ParamLimits

0x5385,	// (0x00046451) list_setting_number_pane_t2

0x539f,	// (0x0004646b) list_setting_number_pane_t3_ParamLimits

0x539f,	// (0x0004646b) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0005071e) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0005071e) list_setting_number_pane_t

0x5346,	// (0x00046412) set_value_pane_ParamLimits

0x5346,	// (0x00046412) set_value_pane

0x0f3c,	// (0x00042008) bg_set_opt_pane_ParamLimits

0x0f3c,	// (0x00042008) bg_set_opt_pane

0x53e2,	// (0x000464ae) set_value_pane_t1

0x0f5d,	// (0x00042029) slider_set_pane_cp3

0x0f66,	// (0x00042032) volume_small_pane_cp

0x0f6f,	// (0x0004203b) list_form_gen_pane

0x0f78,	// (0x00042044) scroll_pane_cp8

0x53f8,	// (0x000464c4) form_field_data_pane_ParamLimits

0x53f8,	// (0x000464c4) form_field_data_pane

0x5420,	// (0x000464ec) form_field_data_wide_pane_ParamLimits

0x5420,	// (0x000464ec) form_field_data_wide_pane

0x5447,	// (0x00046513) form_field_popup_pane_ParamLimits

0x5447,	// (0x00046513) form_field_popup_pane

0x5469,	// (0x00046535) form_field_popup_wide_pane_ParamLimits

0x5469,	// (0x00046535) form_field_popup_wide_pane

0x548a,	// (0x00046556) form_field_slider_pane_ParamLimits

0x548a,	// (0x00046556) form_field_slider_pane

0x549d,	// (0x00046569) form_field_slider_wide_pane_ParamLimits

0x549d,	// (0x00046569) form_field_slider_wide_pane

0x0f89,	// (0x00042055) data_form_pane

0x54ba,	// (0x00046586) form_field_data_pane_t1

0x0f95,	// (0x00042061) input_focus_pane

0x54d4,	// (0x000465a0) data_form_wide_pane

0x54f1,	// (0x000465bd) form_field_data_wide_pane_t1

0x0d10,	// (0x00041ddc) input_focus_pane_cp6

0x5513,	// (0x000465df) form_field_popup_pane_t1

0x0f95,	// (0x00042061) input_focus_pane_cp7

0x0fc3,	// (0x0004208f) list_form_pane

0x5535,	// (0x00046601) form_field_popup_wide_pane_t1

0x0f95,	// (0x00042061) input_focus_pane_cp8

0x0fcf,	// (0x0004209b) list_form_wide_pane

0x5552,	// (0x0004661e) form_field_slider_pane_t1_ParamLimits

0x5552,	// (0x0004661e) form_field_slider_pane_t1

0x556a,	// (0x00046636) form_field_slider_pane_t2_ParamLimits

0x556a,	// (0x00046636) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0005072e) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0005072e) form_field_slider_pane_t

0x0945,	// (0x00041a11) input_focus_pane_cp9_ParamLimits

0x0945,	// (0x00041a11) input_focus_pane_cp9

0x557f,	// (0x0004664b) slider_cont_pane_ParamLimits

0x557f,	// (0x0004664b) slider_cont_pane

0x0fdb,	// (0x000420a7) form_field_slider_wide_pane_t1_ParamLimits

0x0fdb,	// (0x000420a7) form_field_slider_wide_pane_t1

0x5593,	// (0x0004665f) form_field_slider_wide_pane_t2_ParamLimits

0x5593,	// (0x0004665f) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00050733) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00050733) form_field_slider_wide_pane_t

0x0945,	// (0x00041a11) input_focus_pane_cp10_ParamLimits

0x0945,	// (0x00041a11) input_focus_pane_cp10

0x55a5,	// (0x00046671) slider_cont_pane_cp1_ParamLimits

0x55a5,	// (0x00046671) slider_cont_pane_cp1

0x55b9,	// (0x00046685) slider_form_pane_cp

0x0fed,	// (0x000420b9) input_focus_pane_g1

0x0ff5,	// (0x000420c1) input_focus_pane_g2

0x0ffd,	// (0x000420c9) input_focus_pane_g3

0x1005,	// (0x000420d1) input_focus_pane_g4

0x100d,	// (0x000420d9) input_focus_pane_g5

0x1015,	// (0x000420e1) input_focus_pane_g6

0x101d,	// (0x000420e9) input_focus_pane_g7

0x1025,	// (0x000420f1) input_focus_pane_g8

0x102d,	// (0x000420f9) input_focus_pane_g9

0x08ed,	// (0x000419b9) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00050738) input_focus_pane_g

0x9fc5,	// (0x0004b091) wait_border_pane_g3_copy1

0x55c1,	// (0x0004668d) data_form_pane_t1

0x08ed,	// (0x000419b9) wait_anim_pane_g1_copy1

0x585a,	// (0x00046926) data_form_wide_pane_t1

0x55e0,	// (0x000466ac) list_form_graphic_pane_cp_ParamLimits

0x55e0,	// (0x000466ac) list_form_graphic_pane_cp

0xaf1c,	// (0x0004bfe8) slider_form_pane_g1

0xaf25,	// (0x0004bff1) slider_form_pane_g2

0x0006,

0xf96f,	// (0x00050a3b) slider_form_pane_g

0x55e0,	// (0x000466ac) list_form_graphic_pane_ParamLimits

0x55e0,	// (0x000466ac) list_form_graphic_pane

0x55f2,	// (0x000466be) list_form_graphic_pane_g1

0x55fa,	// (0x000466c6) list_form_graphic_pane_t1_ParamLimits

0x55fa,	// (0x000466c6) list_form_graphic_pane_t1

0x0953,	// (0x00041a1f) list_highlight_pane_cp5_ParamLimits

0x0953,	// (0x00041a1f) list_highlight_pane_cp5

0x560f,	// (0x000466db) find_pane_g1

0x1035,	// (0x00042101) input_find_pane

0x5618,	// (0x000466e4) input_find_pane_g1_ParamLimits

0x5618,	// (0x000466e4) input_find_pane_g1

0x5624,	// (0x000466f0) input_find_pane_t1_ParamLimits

0x5624,	// (0x000466f0) input_find_pane_t1

0x5639,	// (0x00046705) input_find_pane_t2_ParamLimits

0x5639,	// (0x00046705) input_find_pane_t2

0x0001,

0xf681,	// (0x0005074d) input_find_pane_t_ParamLimits

0xf681,	// (0x0005074d) input_find_pane_t

0x103e,	// (0x0004210a) input_focus_pane_cp5_ParamLimits

0x103e,	// (0x0004210a) input_focus_pane_cp5

0x1051,	// (0x0004211d) bg_popup_window_pane_cp2_ParamLimits

0x1051,	// (0x0004211d) bg_popup_window_pane_cp2

0x105e,	// (0x0004212a) listscroll_menu_pane_ParamLimits

0x105e,	// (0x0004212a) listscroll_menu_pane

0x66e6,	// (0x000477b2) popup_submenu_window_ParamLimits

0x66e6,	// (0x000477b2) popup_submenu_window

0x106a,	// (0x00042136) find_popup_pane_g1

0x1072,	// (0x0004213e) input_popup_find_pane_cp

0x107c,	// (0x00042148) input_focus_pane_cp4_ParamLimits

0x107c,	// (0x00042148) input_focus_pane_cp4

0x108a,	// (0x00042156) input_popup_find_pane_t1_ParamLimits

0x108a,	// (0x00042156) input_popup_find_pane_t1

0x08f7,	// (0x000419c3) bg_popup_sub_pane_cp

0x10b8,	// (0x00042184) listscroll_popup_sub_pane

0x10c0,	// (0x0004218c) list_submenu_pane_ParamLimits

0x10c0,	// (0x0004218c) list_submenu_pane

0x10d1,	// (0x0004219d) scroll_pane_cp4

0x10d9,	// (0x000421a5) list_single_popup_submenu_pane_ParamLimits

0x10d9,	// (0x000421a5) list_single_popup_submenu_pane

0x10ee,	// (0x000421ba) list_single_popup_submenu_pane_g1

0x10f6,	// (0x000421c2) list_single_popup_submenu_pane_t1_ParamLimits

0x10f6,	// (0x000421c2) list_single_popup_submenu_pane_t1

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp1_ParamLimits

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp1

0x6724,	// (0x000477f0) tabs_2_active_pane_g1

0x672c,	// (0x000477f8) tabs_2_active_pane_t1

0x0953,	// (0x00041a1f) bg_passive_tab_pane_cp1_ParamLimits

0x0953,	// (0x00041a1f) bg_passive_tab_pane_cp1

0x6724,	// (0x000477f0) tabs_2_passive_pane_g1

0x672c,	// (0x000477f8) tabs_2_passive_pane_t1

0x673e,	// (0x0004780a) bg_active_tab_pane_cp4

0x674c,	// (0x00047818) tabs_2_long_active_pane_t1

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp4

0x75f7,	// (0x000486c3) list_single_midp_graphic_pane_g4_ParamLimits

0x673e,	// (0x0004780a) bg_active_tab_pane_cp5

0x676b,	// (0x00047837) tabs_3_long_active_pane_t1

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp5

0x75f7,	// (0x000486c3) list_single_midp_graphic_pane_g4

0x0953,	// (0x00041a1f) bg_popup_window_pane_cp13_ParamLimits

0x0953,	// (0x00041a1f) bg_popup_window_pane_cp13

0x3ee4,	// (0x00044fb0) listscroll_popup_fast_pane_ParamLimits

0x3ee4,	// (0x00044fb0) listscroll_popup_fast_pane

0x3ef3,	// (0x00044fbf) grid_popup_fast_pane_ParamLimits

0x3ef3,	// (0x00044fbf) grid_popup_fast_pane

0x3f05,	// (0x00044fd1) scroll_pane_cp9_ParamLimits

0x3f05,	// (0x00044fd1) scroll_pane_cp9

0xc855,	// (0x0004d921) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc855,	// (0x0004d921) list_single_graphic_hl_pane_t1_cp2

0x3f29,	// (0x00044ff5) input_focus_pane_cp20_ParamLimits

0x3f29,	// (0x00044ff5) input_focus_pane_cp20

0x3f37,	// (0x00045003) query_popup_data_pane_t1_ParamLimits

0x3f37,	// (0x00045003) query_popup_data_pane_t1

0x3f4a,	// (0x00045016) query_popup_data_pane_t2_ParamLimits

0x3f4a,	// (0x00045016) query_popup_data_pane_t2

0x3f90,	// (0x0004505c) query_popup_data_pane_t3_ParamLimits

0x3f90,	// (0x0004505c) query_popup_data_pane_t3

0x3fd1,	// (0x0004509d) query_popup_data_pane_t4_ParamLimits

0x3fd1,	// (0x0004509d) query_popup_data_pane_t4

0x400d,	// (0x000450d9) query_popup_data_pane_t5_ParamLimits

0x400d,	// (0x000450d9) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00050752) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00050752) query_popup_data_pane_t

0x0fed,	// (0x000420b9) bg_set_opt_pane_g1

0x0ff5,	// (0x000420c1) bg_set_opt_pane_g2

0x0ffd,	// (0x000420c9) bg_set_opt_pane_g3

0x1005,	// (0x000420d1) bg_set_opt_pane_g4

0x100d,	// (0x000420d9) bg_set_opt_pane_g5

0x1015,	// (0x000420e1) bg_set_opt_pane_g6

0x101d,	// (0x000420e9) bg_set_opt_pane_g7

0x1025,	// (0x000420f1) bg_set_opt_pane_g8

0x102d,	// (0x000420f9) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0005075d) bg_set_opt_pane_g

0x6beb,	// (0x00047cb7) control_top_pane_stacon_ParamLimits

0x6beb,	// (0x00047cb7) control_top_pane_stacon

0x6c3e,	// (0x00047d0a) signal_pane_stacon_ParamLimits

0x6c3e,	// (0x00047d0a) signal_pane_stacon

0x8df6,	// (0x00049ec2) stacon_top_pane_g1_ParamLimits

0x8df6,	// (0x00049ec2) stacon_top_pane_g1

0x6c63,	// (0x00047d2f) title_pane_stacon_ParamLimits

0x6c63,	// (0x00047d2f) title_pane_stacon

0x6c8d,	// (0x00047d59) uni_indicator_pane_stacon_ParamLimits

0x6c8d,	// (0x00047d59) uni_indicator_pane_stacon

0x6ca2,	// (0x00047d6e) battery_pane_stacon_ParamLimits

0x6ca2,	// (0x00047d6e) battery_pane_stacon

0x6ce6,	// (0x00047db2) control_bottom_pane_stacon_ParamLimits

0x6ce6,	// (0x00047db2) control_bottom_pane_stacon

0x6d09,	// (0x00047dd5) navi_pane_stacon_ParamLimits

0x6d09,	// (0x00047dd5) navi_pane_stacon

0x8e18,	// (0x00049ee4) stacon_bottom_pane_g1_ParamLimits

0x8e18,	// (0x00049ee4) stacon_bottom_pane_g1

0x677d,	// (0x00047849) aid_levels_signal_lsc_ParamLimits

0x677d,	// (0x00047849) aid_levels_signal_lsc

0x6794,	// (0x00047860) signal_pane_stacon_g1_ParamLimits

0x6794,	// (0x00047860) signal_pane_stacon_g1

0x67a8,	// (0x00047874) signal_pane_stacon_g2_ParamLimits

0x67a8,	// (0x00047874) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00050770) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00050770) signal_pane_stacon_g

0x67dd,	// (0x000478a9) title_pane_stacon_t1_ParamLimits

0x67dd,	// (0x000478a9) title_pane_stacon_t1

0x40ea,	// (0x000451b6) uni_indicator_pane_stacon_g1

0x40f4,	// (0x000451c0) uni_indicator_pane_stacon_g2

0x40d6,	// (0x000451a2) uni_indicator_pane_stacon_g3

0x40e0,	// (0x000451ac) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0005077c) uni_indicator_pane_stacon_g

0x6802,	// (0x000478ce) control_top_pane_stacon_g1

0x680a,	// (0x000478d6) control_top_pane_stacon_t1_ParamLimits

0x680a,	// (0x000478d6) control_top_pane_stacon_t1

0x6841,	// (0x0004790d) aid_levels_battery_lsc_ParamLimits

0x6841,	// (0x0004790d) aid_levels_battery_lsc

0x6859,	// (0x00047925) battery_pane_stacon_g1_ParamLimits

0x6859,	// (0x00047925) battery_pane_stacon_g1

0x686c,	// (0x00047938) battery_pane_stacon_g2_ParamLimits

0x686c,	// (0x00047938) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00050785) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00050785) battery_pane_stacon_g

0x68aa,	// (0x00047976) navi_icon_pane_stacon

0x68be,	// (0x0004798a) navi_navi_pane_stacon

0x68aa,	// (0x00047976) navi_text_pane_stacon

0x6802,	// (0x000478ce) control_bottom_pane_stacon_g1

0x68d4,	// (0x000479a0) control_bottom_pane_stacon_t1_ParamLimits

0x68d4,	// (0x000479a0) control_bottom_pane_stacon_t1

0x690b,	// (0x000479d7) grid_app_pane_ParamLimits

0x690b,	// (0x000479d7) grid_app_pane

0x692d,	// (0x000479f9) scroll_pane_cp15_ParamLimits

0x692d,	// (0x000479f9) scroll_pane_cp15

0x6940,	// (0x00047a0c) cell_app_pane_ParamLimits

0x6940,	// (0x00047a0c) cell_app_pane

0x696c,	// (0x00047a38) cell_app_pane_g1_ParamLimits

0x696c,	// (0x00047a38) cell_app_pane_g1

0x4221,	// (0x000452ed) cell_app_pane_g2_ParamLimits

0x4221,	// (0x000452ed) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0005078a) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0005078a) cell_app_pane_g

0x6990,	// (0x00047a5c) cell_app_pane_t1_ParamLimits

0x6990,	// (0x00047a5c) cell_app_pane_t1

0x422d,	// (0x000452f9) grid_highlight_pane_ParamLimits

0x422d,	// (0x000452f9) grid_highlight_pane

0x0fed,	// (0x000420b9) cell_highlight_pane_g1

0x0ff5,	// (0x000420c1) cell_highlight_pane_g2

0x0ffd,	// (0x000420c9) cell_highlight_pane_g3

0x1005,	// (0x000420d1) cell_highlight_pane_g4

0x100d,	// (0x000420d9) cell_highlight_pane_g5

0x1015,	// (0x000420e1) cell_highlight_pane_g6

0x101d,	// (0x000420e9) cell_highlight_pane_g7

0x1025,	// (0x000420f1) cell_highlight_pane_g8

0x102d,	// (0x000420f9) cell_highlight_pane_g9

0x08ed,	// (0x000419b9) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00050738) cell_highlight_pane_g

0x4248,	// (0x00045314) bg_scroll_pane

0x69ba,	// (0x00047a86) scroll_handle_pane

0x42b8,	// (0x00045384) scroll_bg_pane_g1

0x42cd,	// (0x00045399) scroll_bg_pane_g2

0x42e5,	// (0x000453b1) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0005078f) scroll_bg_pane_g

0x42fa,	// (0x000453c6) scroll_handle_focus_pane_ParamLimits

0x42fa,	// (0x000453c6) scroll_handle_focus_pane

0x42b8,	// (0x00045384) scroll_handle_pane_g1

0x4307,	// (0x000453d3) scroll_handle_pane_g2

0x42e5,	// (0x000453b1) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00050796) scroll_handle_pane_g

0x107c,	// (0x00042148) bg_popup_sub_pane_cp21_ParamLimits

0x107c,	// (0x00042148) bg_popup_sub_pane_cp21

0x431b,	// (0x000453e7) popup_fep_japan_predictive_window_t1_ParamLimits

0x431b,	// (0x000453e7) popup_fep_japan_predictive_window_t1

0x4332,	// (0x000453fe) popup_fep_japan_predictive_window_t2_ParamLimits

0x4332,	// (0x000453fe) popup_fep_japan_predictive_window_t2

0x4365,	// (0x00045431) popup_fep_japan_predictive_window_t3_ParamLimits

0x4365,	// (0x00045431) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005079d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005079d) popup_fep_japan_predictive_window_t

0x08f7,	// (0x000419c3) bg_popup_sub_pane_cp23

0x439c,	// (0x00045468) listscroll_japin_cand_pane

0x43a4,	// (0x00045470) popup_fep_japan_candidate_window_t1

0x43b2,	// (0x0004547e) candidate_pane_ParamLimits

0x43b2,	// (0x0004547e) candidate_pane

0x43c4,	// (0x00045490) scroll_pane_cp30

0x43ce,	// (0x0004549a) list_single_popup_jap_candidate_pane_ParamLimits

0x43ce,	// (0x0004549a) list_single_popup_jap_candidate_pane

0x08f7,	// (0x000419c3) list_highlight_pane_cp30

0x43e2,	// (0x000454ae) list_single_popup_jap_candidate_pane_t1

0x69e3,	// (0x00047aaf) level_1_signal

0x69f0,	// (0x00047abc) level_2_signal

0x69fd,	// (0x00047ac9) level_3_signal

0x6a0a,	// (0x00047ad6) level_4_signal

0x6a17,	// (0x00047ae3) level_5_signal

0x6a24,	// (0x00047af0) level_6_signal

0x6a31,	// (0x00047afd) level_7_signal

0x69e3,	// (0x00047aaf) level_1_battery

0x69f0,	// (0x00047abc) level_2_battery

0x69fd,	// (0x00047ac9) level_3_battery

0x6a0a,	// (0x00047ad6) level_4_battery

0x6a17,	// (0x00047ae3) level_5_battery

0x6a24,	// (0x00047af0) level_6_battery

0x6a31,	// (0x00047afd) level_7_battery

0x4428,	// (0x000454f4) list_menu_pane_ParamLimits

0x4428,	// (0x000454f4) list_menu_pane

0x443e,	// (0x0004550a) scroll_pane_cp25_ParamLimits

0x443e,	// (0x0004550a) scroll_pane_cp25

0x4457,	// (0x00045523) list_double2_graphic_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double2_graphic_pane_cp2

0x4457,	// (0x00045523) list_double2_large_graphic_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double2_large_graphic_pane_cp2

0x4457,	// (0x00045523) list_double2_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double2_pane_cp2

0x4457,	// (0x00045523) list_double_graphic_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double_graphic_pane_cp2

0x4457,	// (0x00045523) list_double_large_graphic_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double_large_graphic_pane_cp2

0x4457,	// (0x00045523) list_double_number_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double_number_pane_cp2

0x4457,	// (0x00045523) list_double_pane_cp2_ParamLimits

0x4457,	// (0x00045523) list_double_pane_cp2

0x6a73,	// (0x00047b3f) list_single_2graphic_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_2graphic_pane_cp2

0x6a73,	// (0x00047b3f) list_single_graphic_heading_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_graphic_heading_pane_cp2

0x6a73,	// (0x00047b3f) list_single_graphic_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_graphic_pane_cp2

0x6a73,	// (0x00047b3f) list_single_heading_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_heading_pane_cp2

0x4467,	// (0x00045533) list_single_large_graphic_pane_cp2_ParamLimits

0x4467,	// (0x00045533) list_single_large_graphic_pane_cp2

0x6a73,	// (0x00047b3f) list_single_number_heading_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_number_heading_pane_cp2

0x6a73,	// (0x00047b3f) list_single_number_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_number_pane_cp2

0x6a90,	// (0x00047b5c) list_single_pane_cp2_ParamLimits

0x6a90,	// (0x00047b5c) list_single_pane_cp2

0x44db,	// (0x000455a7) bg_popup_sub_pane_cp22

0x6b6c,	// (0x00047c38) popup_side_volume_key_window_g1

0x6b96,	// (0x00047c62) popup_side_volume_key_window_t1

0x6bb4,	// (0x00047c80) volume_small_pane_cp1

0x0945,	// (0x00041a11) bg_popup_sub_pane_cp24_ParamLimits

0x0945,	// (0x00041a11) bg_popup_sub_pane_cp24

0x8c53,	// (0x00049d1f) fep_china_uni_candidate_pane_ParamLimits

0x8c53,	// (0x00049d1f) fep_china_uni_candidate_pane

0x8c67,	// (0x00049d33) fep_china_uni_entry_pane

0x8c77,	// (0x00049d43) popup_fep_china_uni_window_g1

0x8c93,	// (0x00049d5f) fep_china_uni_entry_pane_g1

0x8c9d,	// (0x00049d69) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x000507ce) fep_china_uni_entry_pane_g

0x8ca7,	// (0x00049d73) fep_entry_item_pane

0x8cb1,	// (0x00049d7d) fep_candidate_item_pane

0x8cb9,	// (0x00049d85) fep_china_uni_candidate_pane_g1

0x8cc3,	// (0x00049d8f) fep_china_uni_candidate_pane_g2

0x8ccb,	// (0x00049d97) fep_china_uni_candidate_pane_g3

0x8cd3,	// (0x00049d9f) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000507d3) fep_china_uni_candidate_pane_g

0x08ed,	// (0x000419b9) fep_entry_item_pane_g1

0x8cdd,	// (0x00049da9) fep_entry_item_pane_t1_ParamLimits

0x8cdd,	// (0x00049da9) fep_entry_item_pane_t1

0x8cf3,	// (0x00049dbf) fep_candidate_item_pane_t1_ParamLimits

0x8cf3,	// (0x00049dbf) fep_candidate_item_pane_t1

0x8d08,	// (0x00049dd4) fep_candidate_item_pane_t2_ParamLimits

0x8d08,	// (0x00049dd4) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000507dc) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000507dc) fep_candidate_item_pane_t

0x0953,	// (0x00041a1f) list_highlight_pane_cp31_ParamLimits

0x0953,	// (0x00041a1f) list_highlight_pane_cp31

0x8d1a,	// (0x00049de6) level_1_signal_lsc

0x8d23,	// (0x00049def) level_2_signal_lsc

0x8d2c,	// (0x00049df8) level_3_signal_lsc

0x8d35,	// (0x00049e01) level_4_signal_lsc

0x8d3e,	// (0x00049e0a) level_5_signal_lsc

0x8d47,	// (0x00049e13) level_6_signal_lsc

0x8d50,	// (0x00049e1c) level_7_signal_lsc

0x8d50,	// (0x00049e1c) level_1_battery_lsc

0x8d59,	// (0x00049e25) level_2_battery_lsc

0x8d62,	// (0x00049e2e) level_3_battery_lsc

0x8d6b,	// (0x00049e37) level_4_battery_lsc

0x8d74,	// (0x00049e40) level_5_battery_lsc

0x8d7d,	// (0x00049e49) level_6_battery_lsc

0x8d1a,	// (0x00049de6) level_7_battery_lsc

0x8d86,	// (0x00049e52) scroll_handle_focus_pane_g1

0x8d8f,	// (0x00049e5b) scroll_handle_focus_pane_g2

0x8d98,	// (0x00049e64) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x000507e1) scroll_handle_focus_pane_g

0x564e,	// (0x0004671a) list_single_2graphic_pane_g1_ParamLimits

0x564e,	// (0x0004671a) list_single_2graphic_pane_g1

0x6658,	// (0x00047724) list_single_2graphic_pane_g2_ParamLimits

0x6658,	// (0x00047724) list_single_2graphic_pane_g2

0x663a,	// (0x00047706) list_single_2graphic_pane_g3_ParamLimits

0x663a,	// (0x00047706) list_single_2graphic_pane_g3

0x6bbc,	// (0x00047c88) list_single_2graphic_pane_g4_ParamLimits

0x6bbc,	// (0x00047c88) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x000507e8) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x000507e8) list_single_2graphic_pane_g

0x565a,	// (0x00046726) list_single_2graphic_pane_t1_ParamLimits

0x565a,	// (0x00046726) list_single_2graphic_pane_t1

0x6bcd,	// (0x00047c99) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6bcd,	// (0x00047c99) list_double2_graphic_large_graphic_pane_g1

0x66c9,	// (0x00047795) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x66c9,	// (0x00047795) list_double2_graphic_large_graphic_pane_g2

0x6689,	// (0x00047755) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x6689,	// (0x00047755) list_double2_graphic_large_graphic_pane_g3

0x6bdf,	// (0x00047cab) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6bdf,	// (0x00047cab) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x000507f1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x000507f1) list_double2_graphic_large_graphic_pane_g

0x5688,	// (0x00046754) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5688,	// (0x00046754) list_double2_graphic_large_graphic_pane_t1

0x569e,	// (0x0004676a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x569e,	// (0x0004676a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x000507fa) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x000507fa) list_double2_graphic_large_graphic_pane_t

0x8edb,	// (0x00049fa7) popup_fast_swap_window_ParamLimits

0x8edb,	// (0x00049fa7) popup_fast_swap_window

0x8ef9,	// (0x00049fc5) popup_side_volume_key_window

0x8f17,	// (0x00049fe3) stacon_top_pane

0x8f21,	// (0x00049fed) status_pane_ParamLimits

0x8f21,	// (0x00049fed) status_pane

0x8f2f,	// (0x00049ffb) status_small_pane

0x08f7,	// (0x000419c3) control_pane

0x08f7,	// (0x000419c3) stacon_bottom_pane

0x0f78,	// (0x00042044) scroll_pane_cp121

0x0f6f,	// (0x0004203b) set_content_pane

0x8da1,	// (0x00049e6d) bg_active_tab_pane_g1_cp1

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp1

0x8db3,	// (0x00049e7f) bg_active_tab_pane_g3_cp1

0x8da1,	// (0x00049e6d) bg_passive_tab_pane_g1_cp1

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp1

0x8db3,	// (0x00049e7f) bg_passive_tab_pane_g3_cp1

0x8dbc,	// (0x00049e88) bg_active_tab_pane_g1_cp2

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp2

0x8dc5,	// (0x00049e91) bg_active_tab_pane_g3_cp2

0x8dbc,	// (0x00049e88) bg_passive_tab_pane_g1_cp2

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp2

0x8dc5,	// (0x00049e91) bg_passive_tab_pane_g3_cp2

0x8dce,	// (0x00049e9a) bg_active_tab_pane_g1_cp3

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp3

0x8dd7,	// (0x00049ea3) bg_active_tab_pane_g3_cp3

0x8dce,	// (0x00049e9a) bg_passive_tab_pane_g1_cp3

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp3

0x8dd7,	// (0x00049ea3) bg_passive_tab_pane_g3_cp3

0x8de0,	// (0x00049eac) bg_active_tab_pane_g1_cp4

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp4

0x8deb,	// (0x00049eb7) bg_active_tab_pane_g3_cp4

0x8de0,	// (0x00049eac) bg_passive_tab_pane_g1_cp4

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp4

0x8deb,	// (0x00049eb7) bg_passive_tab_pane_g3_cp4

0x8e34,	// (0x00049f00) bg_active_tab_pane_g1_cp5

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp5

0x8e3d,	// (0x00049f09) bg_active_tab_pane_g3_cp5

0x8e34,	// (0x00049f00) bg_passive_tab_pane_g1_cp5

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp5

0x8e3d,	// (0x00049f09) bg_passive_tab_pane_g3_cp5

0x8e46,	// (0x00049f12) list_set_graphic_pane_ParamLimits

0x8e46,	// (0x00049f12) list_set_graphic_pane

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp4

0x8e5c,	// (0x00049f28) list_set_graphic_pane_g1_ParamLimits

0x8e5c,	// (0x00049f28) list_set_graphic_pane_g1

0x8e68,	// (0x00049f34) list_set_graphic_pane_g2_ParamLimits

0x8e68,	// (0x00049f34) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x000507ff) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x000507ff) list_set_graphic_pane_g

0x0009,

0xfaaf,	// (0x00050b7b) volume_small_pane_cp_g

0x8e8c,	// (0x00049f58) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e8c,	// (0x00049f58) list_double2_large_graphic_pane_g1_cp2

0x8e9a,	// (0x00049f66) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e9a,	// (0x00049f66) list_double2_large_graphic_pane_g2_cp2

0x8eab,	// (0x00049f77) list_double2_large_graphic_pane_g3_cp2

0x8eb3,	// (0x00049f7f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8eb3,	// (0x00049f7f) list_double2_large_graphic_pane_t1_cp2

0x8ec9,	// (0x00049f95) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ec9,	// (0x00049f95) list_double2_large_graphic_pane_t2_cp2

0xaaa9,	// (0x0004bb75) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaa9,	// (0x0004bb75) list_double_large_graphic_pane_g1_cp2

0xaabc,	// (0x0004bb88) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaabc,	// (0x0004bb88) list_double_large_graphic_pane_g2_cp2

0x903e,	// (0x0004a10a) list_double_large_graphic_pane_g3_cp2

0xaacd,	// (0x0004bb99) list_double_large_graphic_pane_g4_cp

0xaad5,	// (0x0004bba1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaad5,	// (0x0004bba1) list_double_large_graphic_pane_t1_cp2

0xaaec,	// (0x0004bbb8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaaec,	// (0x0004bbb8) list_double_large_graphic_pane_t2_cp2

0x8f3a,	// (0x0004a006) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f3a,	// (0x0004a006) list_double2_graphic_pane_g1_cp2

0x8f48,	// (0x0004a014) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f48,	// (0x0004a014) list_double2_graphic_pane_g2_cp2

0x8f59,	// (0x0004a025) list_double2_graphic_pane_g3_cp2

0x8f63,	// (0x0004a02f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f63,	// (0x0004a02f) list_double2_graphic_pane_t1_cp2

0x8f79,	// (0x0004a045) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f79,	// (0x0004a045) list_double2_graphic_pane_t2_cp2

0x8c47,	// (0x00049d13) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8c47,	// (0x00049d13) list_single_number_heading_pane_g1_cp2

0x8f8b,	// (0x0004a057) list_single_number_heading_pane_g2_cp2

0x8f93,	// (0x0004a05f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f93,	// (0x0004a05f) list_single_number_heading_pane_t1_cp2

0x8fa9,	// (0x0004a075) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fa9,	// (0x0004a075) list_single_number_heading_pane_t2_cp2

0x8fbd,	// (0x0004a089) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fbd,	// (0x0004a089) list_single_number_heading_pane_t3_cp2

0x8c47,	// (0x00049d13) list_single_heading_pane_g1_cp2_ParamLimits

0x8c47,	// (0x00049d13) list_single_heading_pane_g1_cp2

0x8f8b,	// (0x0004a057) list_single_heading_pane_g2_cp2

0x8f93,	// (0x0004a05f) list_single_heading_pane_t1_cp2_ParamLimits

0x8f93,	// (0x0004a05f) list_single_heading_pane_t1_cp2

0xa8a3,	// (0x0004b96f) list_single_heading_pane_t2_cp2_ParamLimits

0xa8a3,	// (0x0004b96f) list_single_heading_pane_t2_cp2

0xa7eb,	// (0x0004b8b7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7eb,	// (0x0004b8b7) list_double_graphic_pane_g1_cp2

0xa7f7,	// (0x0004b8c3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7f7,	// (0x0004b8c3) list_double_graphic_pane_g2_cp2

0xa806,	// (0x0004b8d2) list_double_graphic_pane_g3_cp2

0xa80e,	// (0x0004b8da) list_double_graphic_pane_t1_cp2_ParamLimits

0xa80e,	// (0x0004b8da) list_double_graphic_pane_t1_cp2

0xa824,	// (0x0004b8f0) list_double_graphic_pane_t2_cp2_ParamLimits

0xa824,	// (0x0004b8f0) list_double_graphic_pane_t2_cp2

0x9032,	// (0x0004a0fe) list_double_number_pane_g1_cp2_ParamLimits

0x9032,	// (0x0004a0fe) list_double_number_pane_g1_cp2

0x903e,	// (0x0004a10a) list_double_number_pane_g2_cp2

0xa7af,	// (0x0004b87b) list_double_number_pane_t1_cp2_ParamLimits

0xa7af,	// (0x0004b87b) list_double_number_pane_t1_cp2

0xa7c3,	// (0x0004b88f) list_double_number_pane_t2_cp2_ParamLimits

0xa7c3,	// (0x0004b88f) list_double_number_pane_t2_cp2

0xa7d9,	// (0x0004b8a5) list_double_number_pane_t3_cp2_ParamLimits

0xa7d9,	// (0x0004b8a5) list_double_number_pane_t3_cp2

0xa698,	// (0x0004b764) list_single_graphic_pane_g1_cp2_ParamLimits

0xa698,	// (0x0004b764) list_single_graphic_pane_g1_cp2

0x90a3,	// (0x0004a16f) list_single_graphic_pane_g2_cp2_ParamLimits

0x90a3,	// (0x0004a16f) list_single_graphic_pane_g2_cp2

0x90af,	// (0x0004a17b) list_single_graphic_pane_g3_cp2

0xa66e,	// (0x0004b73a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa66e,	// (0x0004b73a) list_single_graphic_pane_t1_cp2

0x90a3,	// (0x0004a16f) list_single_number_pane_g1_cp2_ParamLimits

0x90a3,	// (0x0004a16f) list_single_number_pane_g1_cp2

0x90af,	// (0x0004a17b) list_single_number_pane_g2_cp2

0xa66e,	// (0x0004b73a) list_single_number_pane_t1_cp2_ParamLimits

0xa66e,	// (0x0004b73a) list_single_number_pane_t1_cp2

0xa684,	// (0x0004b750) list_single_number_pane_t2_cp2_ParamLimits

0xa684,	// (0x0004b750) list_single_number_pane_t2_cp2

0x8e9a,	// (0x00049f66) list_double2_pane_g1_cp2_ParamLimits

0x8e9a,	// (0x00049f66) list_double2_pane_g1_cp2

0x8eab,	// (0x00049f77) list_double2_pane_g2_cp2

0x900a,	// (0x0004a0d6) list_double2_pane_t1_cp2_ParamLimits

0x900a,	// (0x0004a0d6) list_double2_pane_t1_cp2

0x9020,	// (0x0004a0ec) list_double2_pane_t2_cp2_ParamLimits

0x9020,	// (0x0004a0ec) list_double2_pane_t2_cp2

0x9032,	// (0x0004a0fe) list_double_pane_g1_cp2_ParamLimits

0x9032,	// (0x0004a0fe) list_double_pane_g1_cp2

0x903e,	// (0x0004a10a) list_double_pane_g2_cp2

0x9046,	// (0x0004a112) list_double_pane_t1_cp2_ParamLimits

0x9046,	// (0x0004a112) list_double_pane_t1_cp2

0x905c,	// (0x0004a128) list_double_pane_t2_cp2_ParamLimits

0x905c,	// (0x0004a128) list_double_pane_t2_cp2

0x9093,	// (0x0004a15f) list_single_pane_cp2_g3

0x90a3,	// (0x0004a16f) list_single_pane_g1_cp2_ParamLimits

0x90a3,	// (0x0004a16f) list_single_pane_g1_cp2

0x90af,	// (0x0004a17b) list_single_pane_g2_cp2

0x90b7,	// (0x0004a183) list_single_pane_t1_cp2_ParamLimits

0x90b7,	// (0x0004a183) list_single_pane_t1_cp2

0x90cf,	// (0x0004a19b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90cf,	// (0x0004a19b) list_single_large_graphic_pane_g1_cp2

0x90dd,	// (0x0004a1a9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90dd,	// (0x0004a1a9) list_single_large_graphic_pane_g2_cp2

0x90e9,	// (0x0004a1b5) list_single_large_graphic_pane_g3_cp2

0x90f1,	// (0x0004a1bd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90f1,	// (0x0004a1bd) list_single_large_graphic_pane_g4_cp1

0x910b,	// (0x0004a1d7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x910b,	// (0x0004a1d7) list_single_large_graphic_pane_t1_cp2

0xa638,	// (0x0004b704) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa638,	// (0x0004b704) list_single_graphic_heading_pane_g1_cp2

0xa605,	// (0x0004b6d1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa605,	// (0x0004b6d1) list_single_graphic_heading_pane_g4_cp2

0x90af,	// (0x0004a17b) list_single_graphic_heading_pane_g5_cp2

0xa644,	// (0x0004b710) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa644,	// (0x0004b710) list_single_graphic_heading_pane_t1_cp2

0xa65a,	// (0x0004b726) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa65a,	// (0x0004b726) list_single_graphic_heading_pane_t2_cp2

0xa5f9,	// (0x0004b6c5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5f9,	// (0x0004b6c5) list_single_2graphic_pane_g1_cp2

0xa605,	// (0x0004b6d1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa605,	// (0x0004b6d1) list_single_2graphic_pane_g2_cp2

0x90af,	// (0x0004a17b) list_single_2graphic_pane_g3_cp2

0xa616,	// (0x0004b6e2) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa616,	// (0x0004b6e2) list_single_2graphic_pane_g4_cp2

0xa622,	// (0x0004b6ee) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa622,	// (0x0004b6ee) list_single_2graphic_pane_t1_cp2

0x08ed,	// (0x000419b9) list_highlight_pane_g10_cp1

0xa1d1,	// (0x0004b29d) list_highlight_pane_g1_cp1

0xa1d9,	// (0x0004b2a5) list_highlight_pane_g2_cp1

0xa1e1,	// (0x0004b2ad) list_highlight_pane_g3_cp1

0xa1e9,	// (0x0004b2b5) list_highlight_pane_g4_cp1

0xa1f1,	// (0x0004b2bd) list_highlight_pane_g5_cp1

0xa1f9,	// (0x0004b2c5) list_highlight_pane_g6_cp1

0xa201,	// (0x0004b2cd) list_highlight_pane_g7_cp1

0xa209,	// (0x0004b2d5) list_highlight_pane_g8_cp1

0xa211,	// (0x0004b2dd) list_highlight_pane_g9_cp1

0xa0f1,	// (0x0004b1bd) form_field_slider_pane_t3

0xa0ff,	// (0x0004b1cb) form_field_slider_pane_t4

0xa10d,	// (0x0004b1d9) slider_form_pane_ParamLimits

0xa10d,	// (0x0004b1d9) slider_form_pane

0x08f7,	// (0x000419c3) control_abbreviations

0x08f7,	// (0x000419c3) control_conventions

0x08f7,	// (0x000419c3) control_definitions

0x08f7,	// (0x000419c3) format_table_attribute

0xa8f9,	// (0x0004b9c5) bg_popup_preview_window_pane_g9

0x08f7,	// (0x000419c3) format_table_data2

0x08f7,	// (0x000419c3) format_table_data3

0x08f7,	// (0x000419c3) format_table_data_example

0x0008,

0x08f7,	// (0x000419c3) intro_purpose

0xf8cf,	// (0x0005099b) bg_popup_preview_window_pane_g

0x08f7,	// (0x000419c3) texts_category

0x08f7,	// (0x000419c3) texts_graphics

0x9121,	// (0x0004a1ed) text_digital

0x9130,	// (0x0004a1fc) text_primary

0x913f,	// (0x0004a20b) text_primary_small

0x914e,	// (0x0004a21a) text_secondary

0x915d,	// (0x0004a229) text_title

0xb026,	// (0x0004c0f2) bg_passive_tab_pane_g1_cp3_srt

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp3_srt

0xb02f,	// (0x0004c0fb) bg_passive_tab_pane_g3_cp3_srt

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp3_srt_ParamLimits

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp3_srt

0xb038,	// (0x0004c104) tabs_4_active_pane_srt_g1

0xb040,	// (0x0004c10c) tabs_4_active_pane_srt_t1_ParamLimits

0xb040,	// (0x0004c10c) tabs_4_active_pane_srt_t1

0xb026,	// (0x0004c0f2) bg_active_tab_pane_g1_cp3_copy1

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp3_copy1

0xb02f,	// (0x0004c0fb) bg_active_tab_pane_g3_cp3_copy1

0x0953,	// (0x00041a1f) tabs_2_long_active_pane_srt_ParamLimits

0x0953,	// (0x00041a1f) tabs_2_long_active_pane_srt

0x0953,	// (0x00041a1f) tabs_2_long_passive_pane_srt_ParamLimits

0x0953,	// (0x00041a1f) tabs_2_long_passive_pane_srt

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp4_srt

0xad33,	// (0x0004bdff) bg_passive_tab_pane_g1_cp4_srt

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp4_srt

0xad3c,	// (0x0004be08) bg_passive_tab_pane_g3_cp4_srt

0x673e,	// (0x0004780a) bg_active_tab_pane_cp4_srt_ParamLimits

0x673e,	// (0x0004780a) bg_active_tab_pane_cp4_srt

0xad45,	// (0x0004be11) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad45,	// (0x0004be11) tabs_2_long_active_pane_srt_t1

0xad33,	// (0x0004bdff) bg_active_tab_pane_g1_cp4_srt

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp4_srt

0xad3c,	// (0x0004be08) bg_active_tab_pane_g3_cp4_srt

0x0945,	// (0x00041a11) tabs_3_long_active_pane_srt_ParamLimits

0x0945,	// (0x00041a11) tabs_3_long_active_pane_srt

0x0945,	// (0x00041a11) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0945,	// (0x00041a11) tabs_3_long_passive_pane_cp_srt

0x0945,	// (0x00041a11) tabs_3_long_passive_pane_srt_ParamLimits

0x0945,	// (0x00041a11) tabs_3_long_passive_pane_srt

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp5_srt

0x8e34,	// (0x00049f00) bg_passive_tab_pane_g1_cp5_srt

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp5_srt

0x8e3d,	// (0x00049f09) bg_passive_tab_pane_g3_cp5_srt

0x673e,	// (0x0004780a) bg_active_tab_pane_cp5_srt_ParamLimits

0x673e,	// (0x0004780a) bg_active_tab_pane_cp5_srt

0xad21,	// (0x0004bded) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad21,	// (0x0004bded) tabs_3_long_active_pane_srt_t1

0x8e34,	// (0x00049f00) bg_active_tab_pane_g1_cp5_srt

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp5_srt

0x8e3d,	// (0x00049f09) bg_active_tab_pane_g3_cp5_srt

0xad13,	// (0x0004bddf) navi_text_pane_srt_t1

0xad0b,	// (0x0004bdd7) navi_icon_pane_srt_g1

0x9335,	// (0x0004a401) midp_editing_number_pane_srt

0x916c,	// (0x0004a238) midp_ticker_pane_srt

0x933d,	// (0x0004a409) midp_ticker_pane_srt_g1

0x9345,	// (0x0004a411) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0005081e) midp_ticker_pane_srt_g

0x934d,	// (0x0004a419) midp_ticker_pane_srt_t1

0xacfc,	// (0x0004bdc8) midp_editing_number_pane_t1_copy1

0x9174,	// (0x0004a240) listscroll_midp_pane

0x9174,	// (0x0004a240) midp_form_pane

0x91e3,	// (0x0004a2af) midp_info_popup_window_ParamLimits

0x91e3,	// (0x0004a2af) midp_info_popup_window

0x107c,	// (0x00042148) bg_popup_sub_pane_cp50_ParamLimits

0x107c,	// (0x00042148) bg_popup_sub_pane_cp50

0x9df3,	// (0x0004aebf) listscroll_midp_info_pane_ParamLimits

0x9df3,	// (0x0004aebf) listscroll_midp_info_pane

0x9dd3,	// (0x0004ae9f) listscroll_form_midp_pane_ParamLimits

0x9dd3,	// (0x0004ae9f) listscroll_form_midp_pane

0x9ddf,	// (0x0004aeab) scroll_bar_cp050

0x9db3,	// (0x0004ae7f) list_midp_pane

0xbada,	// (0x0004cba6) signal_pane_g2_cp

0x9ced,	// (0x0004adb9) listscroll_midp_info_pane_t1_ParamLimits

0x9ced,	// (0x0004adb9) listscroll_midp_info_pane_t1

0x9d05,	// (0x0004add1) listscroll_midp_info_pane_t2_ParamLimits

0x9d05,	// (0x0004add1) listscroll_midp_info_pane_t2

0x9d43,	// (0x0004ae0f) listscroll_midp_info_pane_t3_ParamLimits

0x9d43,	// (0x0004ae0f) listscroll_midp_info_pane_t3

0x9d7d,	// (0x0004ae49) listscroll_midp_info_pane_t4_ParamLimits

0x9d7d,	// (0x0004ae49) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x000508d6) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x000508d6) listscroll_midp_info_pane_t

0x10d1,	// (0x0004219d) scroll_pane_cp21

0x9c87,	// (0x0004ad53) form_midp_field_choice_group_pane

0x9c90,	// (0x0004ad5c) form_midp_field_text_pane

0x9cd3,	// (0x0004ad9f) form_midp_field_time_pane

0x9cdb,	// (0x0004ada7) form_midp_gauge_slider_pane

0x9ce4,	// (0x0004adb0) form_midp_gauge_wait_pane

0x08f7,	// (0x000419c3) form_midp_image_pane

0x5813,	// (0x000468df) list_single_midp_pane_ParamLimits

0x5813,	// (0x000468df) list_single_midp_pane

0x9c4b,	// (0x0004ad17) form_midp_field_text_pane_t1

0x9a3d,	// (0x0004ab09) input_focus_pane_cp050

0x9c76,	// (0x0004ad42) list_midp_form_text_pane

0x9c1a,	// (0x0004ace6) form_midp_field_choice_group_pane_t1

0x9c28,	// (0x0004acf4) input_focus_pane_cp051

0x9c3c,	// (0x0004ad08) list_midp_choice_pane

0x08f7,	// (0x000419c3) status_idle_pane

0x9bfe,	// (0x0004acca) form_midp_field_time_pane_t1

0x08ed,	// (0x000419b9) wait_anim_pane_g2_copy1

0x9c0c,	// (0x0004acd8) form_midp_field_time_pane_t2

0x0001,

0x9293,	// (0x0004a35f) aid_navinavi_width_2_pane

0xf805,	// (0x000508d1) form_midp_field_time_pane_t

0x08f7,	// (0x000419c3) input_focus_pane_cp052

0x08f7,	// (0x000419c3) bg_input_focus_pane_cp040

0x9bbe,	// (0x0004ac8a) form_midp_gauge_slider_pane_t1

0x9bcc,	// (0x0004ac98) form_midp_gauge_slider_pane_t2

0x9bda,	// (0x0004aca6) form_midp_gauge_slider_pane_t3

0x9be8,	// (0x0004acb4) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x000508c8) form_midp_gauge_slider_pane_t

0x9bf6,	// (0x0004acc2) form_midp_slider_pane

0x0953,	// (0x00041a1f) bg_input_focus_pane_cp041_ParamLimits

0x0953,	// (0x00041a1f) bg_input_focus_pane_cp041

0x9b8b,	// (0x0004ac57) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b8b,	// (0x0004ac57) form_midp_gauge_wait_pane_t1

0x9b9d,	// (0x0004ac69) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b9d,	// (0x0004ac69) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x000508c3) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x000508c3) form_midp_gauge_wait_pane_t

0x9baf,	// (0x0004ac7b) form_midp_wait_pane_ParamLimits

0x9baf,	// (0x0004ac7b) form_midp_wait_pane

0x9b53,	// (0x0004ac1f) form_midp_image_pane_g1

0x9b5c,	// (0x0004ac28) form_midp_image_pane_t1

0x9b6b,	// (0x0004ac37) form_midp_image_pane_t2

0x9b7a,	// (0x0004ac46) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x000508bc) form_midp_image_pane_t

0x9b4a,	// (0x0004ac16) list_single_midp_pane_g1

0x5804,	// (0x000468d0) list_single_midp_pane_t1

0x9b30,	// (0x0004abfc) list_midp_form_item_pane_ParamLimits

0x9b30,	// (0x0004abfc) list_midp_form_item_pane

0x923b,	// (0x0004a307) list_midp_form_item_pane_t1

0x924a,	// (0x0004a316) midp_ticker_pane_g1

0x9256,	// (0x0004a322) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00050804) midp_ticker_pane_g

0x9262,	// (0x0004a32e) midp_ticker_pane_t1

0xaf69,	// (0x0004c035) midp_editing_number_pane_t1

0xaf47,	// (0x0004c013) midp_editing_number_pane

0xaf56,	// (0x0004c022) midp_ticker_pane

0xacec,	// (0x0004bdb8) ai_message_heading_pane

0x08f7,	// (0x000419c3) bg_popup_window_pane_cp14

0xacf4,	// (0x0004bdc0) listscroll_ai_message_pane

0xac72,	// (0x0004bd3e) ai_message_heading_pane_g1_ParamLimits

0xac72,	// (0x0004bd3e) ai_message_heading_pane_g1

0xac7e,	// (0x0004bd4a) ai_message_heading_pane_g2_ParamLimits

0xac7e,	// (0x0004bd4a) ai_message_heading_pane_g2

0xac8c,	// (0x0004bd58) ai_message_heading_pane_g3_ParamLimits

0xac8c,	// (0x0004bd58) ai_message_heading_pane_g3

0xac98,	// (0x0004bd64) ai_message_heading_pane_g4_ParamLimits

0xac98,	// (0x0004bd64) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x000509fd) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x000509fd) ai_message_heading_pane_g

0xaca4,	// (0x0004bd70) ai_message_heading_pane_t1_ParamLimits

0xaca4,	// (0x0004bd70) ai_message_heading_pane_t1

0xacbe,	// (0x0004bd8a) ai_message_heading_pane_t2_ParamLimits

0xacbe,	// (0x0004bd8a) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00050a06) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00050a06) ai_message_heading_pane_t

0xacd2,	// (0x0004bd9e) bg_popup_heading_pane_cp1_ParamLimits

0xacd2,	// (0x0004bd9e) bg_popup_heading_pane_cp1

0xac60,	// (0x0004bd2c) list_ai_message_pane_ParamLimits

0xac60,	// (0x0004bd2c) list_ai_message_pane

0x10d1,	// (0x0004219d) scroll_pane_cp10

0xabfc,	// (0x0004bcc8) list_ai_message_pane_g1

0xac04,	// (0x0004bcd0) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x000509da) list_ai_message_pane_g

0xac0c,	// (0x0004bcd8) list_ai_message_pane_t1_ParamLimits

0xac0c,	// (0x0004bcd8) list_ai_message_pane_t1

0xac21,	// (0x0004bced) list_ai_message_pane_t2_ParamLimits

0xac21,	// (0x0004bced) list_ai_message_pane_t2

0xac36,	// (0x0004bd02) list_ai_message_pane_t3_ParamLimits

0xac36,	// (0x0004bd02) list_ai_message_pane_t3

0xac4b,	// (0x0004bd17) list_ai_message_pane_t4_ParamLimits

0xac4b,	// (0x0004bd17) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x000509df) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x000509df) list_ai_message_pane_t

0xabe5,	// (0x0004bcb1) cell_ai_soft_ind_pane_ParamLimits

0xabe5,	// (0x0004bcb1) cell_ai_soft_ind_pane

0x9274,	// (0x0004a340) cell_ai_soft_ind_pane_g1_ParamLimits

0x9274,	// (0x0004a340) cell_ai_soft_ind_pane_g1

0x08f7,	// (0x000419c3) grid_highlight_cp1

0x9281,	// (0x0004a34d) text_secondary_cp56_ParamLimits

0x9281,	// (0x0004a34d) text_secondary_cp56

0xabba,	// (0x0004bc86) example_general_pane_ParamLimits

0xabba,	// (0x0004bc86) example_general_pane

0xabc6,	// (0x0004bc92) example_parent_pane_g1_ParamLimits

0xabc6,	// (0x0004bc92) example_parent_pane_g1

0xabd2,	// (0x0004bc9e) example_parent_pane_t1_ParamLimits

0xabd2,	// (0x0004bc9e) example_parent_pane_t1

0x7322,	// (0x000483ee) popup_preview_text_window_ParamLimits

0x7322,	// (0x000483ee) popup_preview_text_window

0x909b,	// (0x0004a167) list_single_pane_cp2_g4

0x0b54,	// (0x00041c20) bg_popup_preview_window_pane_ParamLimits

0x0b54,	// (0x00041c20) bg_popup_preview_window_pane

0xa903,	// (0x0004b9cf) popup_preview_text_window_t1_ParamLimits

0xa903,	// (0x0004b9cf) popup_preview_text_window_t1

0xa921,	// (0x0004b9ed) popup_preview_text_window_t2_ParamLimits

0xa921,	// (0x0004b9ed) popup_preview_text_window_t2

0xa96a,	// (0x0004ba36) popup_preview_text_window_t3_ParamLimits

0xa96a,	// (0x0004ba36) popup_preview_text_window_t3

0xa9af,	// (0x0004ba7b) popup_preview_text_window_t4_ParamLimits

0xa9af,	// (0x0004ba7b) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x000509ae) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x000509ae) popup_preview_text_window_t

0xaa2d,	// (0x0004baf9) scroll_pane_cp11

0x99c9,	// (0x0004aa95) bg_popup_preview_window_pane_g1

0xa8b7,	// (0x0004b983) bg_popup_preview_window_pane_g2

0xa8c1,	// (0x0004b98d) bg_popup_preview_window_pane_g3

0xa8cb,	// (0x0004b997) bg_popup_preview_window_pane_g4

0xa8d5,	// (0x0004b9a1) bg_popup_preview_window_pane_g5

0xa8df,	// (0x0004b9ab) bg_popup_preview_window_pane_g6

0xa8e7,	// (0x0004b9b3) bg_popup_preview_window_pane_g7

0xa8ef,	// (0x0004b9bb) bg_popup_preview_window_pane_g8

0x5eae,	// (0x00046f7a) aid_popup_width_pane

0x72fe,	// (0x000483ca) popup_midp_note_alarm_window_ParamLimits

0x72fe,	// (0x000483ca) popup_midp_note_alarm_window

0x0f89,	// (0x00042055) data_form_pane_ParamLimits

0x54b0,	// (0x0004657c) form_field_data_pane_g1

0x54ba,	// (0x00046586) form_field_data_pane_t1_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_ParamLimits

0x54d4,	// (0x000465a0) data_form_wide_pane_ParamLimits

0x54e5,	// (0x000465b1) form_field_data_wide_pane_g1

0x54f1,	// (0x000465bd) form_field_data_wide_pane_t1_ParamLimits

0x0d10,	// (0x00041ddc) input_focus_pane_cp6_ParamLimits

0x6716,	// (0x000477e2) input_popup_find_pane_g1_ParamLimits

0x6716,	// (0x000477e2) input_popup_find_pane_g1

0x687d,	// (0x00047949) aid_navi_side_left_pane

0x6892,	// (0x0004795e) aid_navi_side_right_pane

0xa2cc,	// (0x0004b398) bg_popup_window_pane_cp30_ParamLimits

0xa2cc,	// (0x0004b398) bg_popup_window_pane_cp30

0xa346,	// (0x0004b412) popup_midp_note_alarm_window_g1_ParamLimits

0xa346,	// (0x0004b412) popup_midp_note_alarm_window_g1

0xa376,	// (0x0004b442) popup_midp_note_alarm_window_t1_ParamLimits

0xa376,	// (0x0004b442) popup_midp_note_alarm_window_t1

0xa417,	// (0x0004b4e3) popup_midp_note_alarm_window_t2_ParamLimits

0xa417,	// (0x0004b4e3) popup_midp_note_alarm_window_t2

0xa4c5,	// (0x0004b591) popup_midp_note_alarm_window_t3_ParamLimits

0xa4c5,	// (0x0004b591) popup_midp_note_alarm_window_t3

0xa4f7,	// (0x0004b5c3) popup_midp_note_alarm_window_t4_ParamLimits

0xa4f7,	// (0x0004b5c3) popup_midp_note_alarm_window_t4

0xa51d,	// (0x0004b5e9) popup_midp_note_alarm_window_t5_ParamLimits

0xa51d,	// (0x0004b5e9) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x0005094b) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x0005094b) popup_midp_note_alarm_window_t

0xa5c9,	// (0x0004b695) wait_bar_pane_cp1_ParamLimits

0xa5c9,	// (0x0004b695) wait_bar_pane_cp1

0x08f7,	// (0x000419c3) wait_anim_pane_copy1

0x08f7,	// (0x000419c3) wait_border_pane_copy1

0x9fb1,	// (0x0004b07d) wait_border_pane_g1_copy1

0x550b,	// (0x000465d7) form_field_popup_pane_g1

0x5513,	// (0x000465df) form_field_popup_pane_t1_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_cp7_ParamLimits

0x0fc3,	// (0x0004208f) list_form_pane_ParamLimits

0x552d,	// (0x000465f9) form_field_popup_wide_pane_g1

0x5535,	// (0x00046601) form_field_popup_wide_pane_t1_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_cp8_ParamLimits

0x0fcf,	// (0x0004209b) list_form_wide_pane_ParamLimits

0xb0c1,	// (0x0004c18d) aid_size_cell_graphic_pane

0x55c1,	// (0x0004668d) data_form_pane_t1_ParamLimits

0x585a,	// (0x00046926) data_form_wide_pane_t1_ParamLimits

0x9582,	// (0x0004a64e) bg_status_flat_pane

0x62d3,	// (0x0004739f) title_pane_t1_ParamLimits

0x090d,	// (0x000419d9) title_pane_t2_ParamLimits

0x0933,	// (0x000419ff) title_pane_t3_ParamLimits

0xf532,	// (0x000505fe) title_pane_t_ParamLimits

0x69e3,	// (0x00047aaf) level_1_signal_ParamLimits

0x69f0,	// (0x00047abc) level_2_signal_ParamLimits

0x69fd,	// (0x00047ac9) level_3_signal_ParamLimits

0x6a0a,	// (0x00047ad6) level_4_signal_ParamLimits

0x6a17,	// (0x00047ae3) level_5_signal_ParamLimits

0x6a24,	// (0x00047af0) level_6_signal_ParamLimits

0x6a31,	// (0x00047afd) level_7_signal_ParamLimits

0x69e3,	// (0x00047aaf) level_1_battery_ParamLimits

0x69f0,	// (0x00047abc) level_2_battery_ParamLimits

0x69fd,	// (0x00047ac9) level_3_battery_ParamLimits

0x6a0a,	// (0x00047ad6) level_4_battery_ParamLimits

0x6a17,	// (0x00047ae3) level_5_battery_ParamLimits

0x6a24,	// (0x00047af0) level_6_battery_ParamLimits

0x6a31,	// (0x00047afd) level_7_battery_ParamLimits

0xa1d1,	// (0x0004b29d) bg_status_flat_pane_g1

0xa1d9,	// (0x0004b2a5) bg_status_flat_pane_g2

0xa1e1,	// (0x0004b2ad) bg_status_flat_pane_g3

0xa1e9,	// (0x0004b2b5) bg_status_flat_pane_g4

0xa1f1,	// (0x0004b2bd) bg_status_flat_pane_g5

0xa1f9,	// (0x0004b2c5) bg_status_flat_pane_g6

0xa201,	// (0x0004b2cd) bg_status_flat_pane_g7

0x6343,	// (0x0004740f) tabs_3_active_pane_t1_ParamLimits

0x6343,	// (0x0004740f) tabs_3_passive_pane_t1_ParamLimits

0x635d,	// (0x00047429) tabs_4_active_pane_t1_ParamLimits

0x635d,	// (0x00047429) tabs_4_1_passive_pane_t1_ParamLimits

0x672c,	// (0x000477f8) tabs_2_active_pane_t1_ParamLimits

0x672c,	// (0x000477f8) tabs_2_passive_pane_t1_ParamLimits

0x673e,	// (0x0004780a) bg_active_tab_pane_cp4_ParamLimits

0x674c,	// (0x00047818) tabs_2_long_active_pane_t1_ParamLimits

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp4_ParamLimits

0x761e,	// (0x000486ea) list_single_midp_graphic_pane_t1_ParamLimits

0x673e,	// (0x0004780a) bg_active_tab_pane_cp5_ParamLimits

0x676b,	// (0x00047837) tabs_3_long_active_pane_t1_ParamLimits

0x675f,	// (0x0004782b) bg_passive_tab_pane_cp5_ParamLimits

0x761e,	// (0x000486ea) list_single_midp_graphic_pane_t1

0x9582,	// (0x0004a64e) bg_status_flat_pane_ParamLimits

0x964d,	// (0x0004a719) indicator_pane_cp2_ParamLimits

0x964d,	// (0x0004a719) indicator_pane_cp2

0x9790,	// (0x0004a85c) navi_pane_srt_ParamLimits

0x9790,	// (0x0004a85c) navi_pane_srt

0x97b4,	// (0x0004a880) popup_clock_digital_analogue_window_cp1

0x0997,	// (0x00041a63) indicator_pane_t1

0x916c,	// (0x0004a238) copy_highlight_pane

0x916c,	// (0x0004a238) cursor_graphics_pane

0x916c,	// (0x0004a238) graphic_within_text_pane

0x916c,	// (0x0004a238) link_highlight_pane

0xa9f0,	// (0x0004babc) popup_preview_text_window_t5_ParamLimits

0xa9f0,	// (0x0004babc) popup_preview_text_window_t5

0x929d,	// (0x0004a369) cursor_digital_pane

0x929d,	// (0x0004a369) cursor_primary_pane

0x92ae,	// (0x0004a37a) cursor_primary_small_pane

0x92b6,	// (0x0004a382) cursor_secondary_pane

0x92be,	// (0x0004a38a) cursor_title_pane

0x929d,	// (0x0004a369) link_highlight_digital_pane

0x92a5,	// (0x0004a371) link_highlight_primary_pane

0x92ae,	// (0x0004a37a) link_highlight_primary_small_pane

0x92b6,	// (0x0004a382) link_highlight_secondary_pane

0x92be,	// (0x0004a38a) link_highlight_title_pane

0x929d,	// (0x0004a369) copy_highlight_digital_pane

0x929d,	// (0x0004a369) copy_highlight_primary_pane

0x92ae,	// (0x0004a37a) copy_highlight_primary_small_pane

0x92b6,	// (0x0004a382) copy_highlight_secondary_pane

0x92be,	// (0x0004a38a) copy_highlight_title_pane

0x92b6,	// (0x0004a382) graphic_text_digital_pane

0xa26f,	// (0x0004b33b) graphic_text_primary_pane

0xa278,	// (0x0004b344) graphic_text_primary_small_pane

0x92ae,	// (0x0004a37a) graphic_text_secondary_pane

0x929d,	// (0x0004a369) graphic_text_title_pane

0x92c6,	// (0x0004a392) cursor_primary_pane_g1

0xa261,	// (0x0004b32d) cursor_text_primary_t1

0xa249,	// (0x0004b315) cursor_primary_small_pane_g1

0xa253,	// (0x0004b31f) cursor_text_primary_small_t1

0xa231,	// (0x0004b2fd) cursor_primary_small_pane_g1_copy1

0xa23b,	// (0x0004b307) cursor_text_primary_small_t1_copy1

0xa219,	// (0x0004b2e5) cursor_text_title_t1

0xa227,	// (0x0004b2f3) cursor_title_pane_g1

0x92c6,	// (0x0004a392) cursor_digital_pane_g1

0x92d0,	// (0x0004a39c) cursor_text_digital_t1

0x92de,	// (0x0004a3aa) link_highlight_primary_pane_g1

0xa1c2,	// (0x0004b28e) link_highlight_primary_pane_t1

0x92de,	// (0x0004a3aa) link_highlight_primary_small_pane_g1

0x92e6,	// (0x0004a3b2) link_highlight_primary_small_pane_t1

0x92f5,	// (0x0004a3c1) link_highlight_secondary_pane_g1

0x92fd,	// (0x0004a3c9) link_highlight_secondary_pane_t1

0xa136,	// (0x0004b202) link_highlight_title_pane_g1

0xa13e,	// (0x0004b20a) link_highlight_title_pane_t1

0xa11f,	// (0x0004b1eb) link_highlight_digital_pane_g1

0xa127,	// (0x0004b1f3) link_highlight_digital_pane_t1

0x9fe7,	// (0x0004b0b3) copy_highlight_primary_pane_g1

0x9ffe,	// (0x0004b0ca) copy_highlight_primary_pane_t1

0x9fe7,	// (0x0004b0b3) copy_highlight_primary_small_pane_g1

0x9fef,	// (0x0004b0bb) copy_highlight_primary_small_pane_t1

0x930c,	// (0x0004a3d8) copy_highlight_secondary_pane_g1

0x9314,	// (0x0004a3e0) copy_highlight_secondary_pane_t1

0x9fd0,	// (0x0004b09c) copy_highlight_title_pane_g1

0x9fd8,	// (0x0004b0a4) copy_highlight_title_pane_t1

0x9fe7,	// (0x0004b0b3) copy_highlight_digital_pane_g1

0xb293,	// (0x0004c35f) copy_highlight_digital_pane_t1

0xb1e7,	// (0x0004c2b3) graphic_text_primary_pane_g1

0xb277,	// (0x0004c343) graphic_text_primary_pane_t1

0xb285,	// (0x0004c351) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x00050a7a) graphic_text_primary_pane_t

0xb253,	// (0x0004c31f) graphic_text_primary_small_pane_g1

0xb25b,	// (0x0004c327) graphic_text_primary_small_pane_t1

0xb269,	// (0x0004c335) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00050a75) graphic_text_primary_small_pane_t

0xb22f,	// (0x0004c2fb) graphic_text_secondary_pane_g1

0xb237,	// (0x0004c303) graphic_text_secondary_pane_t1

0xb245,	// (0x0004c311) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00050a70) graphic_text_secondary_pane_t

0xb20b,	// (0x0004c2d7) graphic_text_title_pane_g1

0xb213,	// (0x0004c2df) graphic_text_title_pane_t1

0xb221,	// (0x0004c2ed) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x00050a6b) graphic_text_title_pane_t

0xb1e7,	// (0x0004c2b3) graphic_text_digital_pane_g1

0xb1ef,	// (0x0004c2bb) graphic_text_digital_pane_t1

0xb1fd,	// (0x0004c2c9) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00050a66) graphic_text_digital_pane_t

0x0953,	// (0x00041a1f) navi_icon_pane_srt_ParamLimits

0x0953,	// (0x00041a1f) navi_icon_pane_srt

0x08f7,	// (0x000419c3) navi_midp_pane_srt

0x08f7,	// (0x000419c3) navi_navi_pane_srt

0x0953,	// (0x00041a1f) navi_text_pane_srt_ParamLimits

0x0953,	// (0x00041a1f) navi_text_pane_srt

0xb1b2,	// (0x0004c27e) navi_navi_icon_text_pane_srt

0xb1ba,	// (0x0004c286) navi_navi_pane_srt_g1_ParamLimits

0xb1ba,	// (0x0004c286) navi_navi_pane_srt_g1

0xb1cc,	// (0x0004c298) navi_navi_pane_srt_g2_ParamLimits

0xb1cc,	// (0x0004c298) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00050a61) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00050a61) navi_navi_pane_srt_g

0xb1de,	// (0x0004c2aa) navi_navi_tabs_pane_srt

0xb1b2,	// (0x0004c27e) navi_navi_text_pane_srt

0xb1b2,	// (0x0004c27e) navi_navi_volume_pane_srt

0xb1a3,	// (0x0004c26f) navi_navi_text_pane_srt_t1

0x7a4b,	// (0x00048b17) navi_navi_volume_pane_srt_g1

0x7a53,	// (0x00048b1f) volume_small_pane_srt_ParamLimits

0x7a53,	// (0x00048b1f) volume_small_pane_srt

0x6d2c,	// (0x00047df8) volume_small_pane_srt_g1_ParamLimits

0x6d2c,	// (0x00047df8) volume_small_pane_srt_g1

0x6d3c,	// (0x00047e08) volume_small_pane_srt_g2_ParamLimits

0x6d3c,	// (0x00047e08) volume_small_pane_srt_g2

0x6d4d,	// (0x00047e19) volume_small_pane_srt_g3_ParamLimits

0x6d4d,	// (0x00047e19) volume_small_pane_srt_g3

0x6d5e,	// (0x00047e2a) volume_small_pane_srt_g4_ParamLimits

0x6d5e,	// (0x00047e2a) volume_small_pane_srt_g4

0x6d6f,	// (0x00047e3b) volume_small_pane_srt_g5_ParamLimits

0x6d6f,	// (0x00047e3b) volume_small_pane_srt_g5

0x6d80,	// (0x00047e4c) volume_small_pane_srt_g6_ParamLimits

0x6d80,	// (0x00047e4c) volume_small_pane_srt_g6

0x6d91,	// (0x00047e5d) volume_small_pane_srt_g7_ParamLimits

0x6d91,	// (0x00047e5d) volume_small_pane_srt_g7

0x6da2,	// (0x00047e6e) volume_small_pane_srt_g8_ParamLimits

0x6da2,	// (0x00047e6e) volume_small_pane_srt_g8

0x6db3,	// (0x00047e7f) volume_small_pane_srt_g9_ParamLimits

0x6db3,	// (0x00047e7f) volume_small_pane_srt_g9

0x6dc4,	// (0x00047e90) volume_small_pane_srt_g10_ParamLimits

0x6dc4,	// (0x00047e90) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00050809) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00050809) volume_small_pane_srt_g

0x0c09,	// (0x00041cd5) query_popup_data_pane_cp2

0xb189,	// (0x0004c255) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb189,	// (0x0004c255) navi_navi_icon_text_pane_srt_t1

0xa26f,	// (0x0004b33b) navi_tabs_2_long_pane_srt

0xa26f,	// (0x0004b33b) navi_tabs_2_pane_srt

0xa26f,	// (0x0004b33b) navi_tabs_3_long_pane_srt

0xa26f,	// (0x0004b33b) navi_tabs_3_pane_srt

0xa26f,	// (0x0004b33b) navi_tabs_4_pane_srt

0x7a2b,	// (0x00048af7) tabs_2_active_pane_srt_ParamLimits

0x7a2b,	// (0x00048af7) tabs_2_active_pane_srt

0x7a3b,	// (0x00048b07) tabs_2_passive_pane_srt_ParamLimits

0x7a3b,	// (0x00048b07) tabs_2_passive_pane_srt

0x9493,	// (0x0004a55f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9493,	// (0x0004a55f) bg_passive_tab_pane_cp1_srt

0xb155,	// (0x0004c221) bg_passive_tab_pane_g1_cp1_srt

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp1_srt

0xb15e,	// (0x0004c22a) bg_passive_tab_pane_g3_cp1_srt

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp1_srt_ParamLimits

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp1_srt

0xb167,	// (0x0004c233) tabs_2_active_pane_srt_g1

0xb16f,	// (0x0004c23b) tabs_2_active_pane_srt_t1_ParamLimits

0xb16f,	// (0x0004c23b) tabs_2_active_pane_srt_t1

0xb155,	// (0x0004c221) bg_active_tab_pane_g1_cp1_srt

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp1_srt

0xb15e,	// (0x0004c22a) bg_active_tab_pane_g3_cp1_srt

0x79f8,	// (0x00048ac4) tabs_3_active_pane_srt_ParamLimits

0x79f8,	// (0x00048ac4) tabs_3_active_pane_srt

0x7a09,	// (0x00048ad5) tabs_3_passive_pane_cp_srt_ParamLimits

0x7a09,	// (0x00048ad5) tabs_3_passive_pane_cp_srt

0x7a1a,	// (0x00048ae6) tabs_3_passive_pane_srt_ParamLimits

0x7a1a,	// (0x00048ae6) tabs_3_passive_pane_srt

0x9493,	// (0x0004a55f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9493,	// (0x0004a55f) bg_passive_tab_pane_cp2_srt

0x9323,	// (0x0004a3ef) bg_passive_tab_pane_g1_cp2_srt

0x8daa,	// (0x00049e76) bg_passive_tab_pane_g2_cp2_srt

0x932c,	// (0x0004a3f8) bg_passive_tab_pane_g3_cp2_srt

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp2_srt_ParamLimits

0x0953,	// (0x00041a1f) bg_active_tab_pane_cp2_srt

0xb13b,	// (0x0004c207) tabs_3_active_pane_srt_g1

0xb143,	// (0x0004c20f) tabs_3_active_pane_srt_t1_ParamLimits

0xb143,	// (0x0004c20f) tabs_3_active_pane_srt_t1

0x9323,	// (0x0004a3ef) bg_active_tab_pane_g1_cp2_srt

0x8daa,	// (0x00049e76) bg_active_tab_pane_g2_cp2_srt

0x932c,	// (0x0004a3f8) bg_active_tab_pane_g3_cp2_srt

0x79b0,	// (0x00048a7c) tabs_4_active_pane_srt_ParamLimits

0x79b0,	// (0x00048a7c) tabs_4_active_pane_srt

0x79c2,	// (0x00048a8e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x79c2,	// (0x00048a8e) tabs_4_passive_pane_cp2_srt

0x6f47,	// (0x00048013) aid_size_cell_toolbar

0x675f,	// (0x0004782b) main_idle_act_pane_ParamLimits

0x7124,	// (0x000481f0) popup_large_graphic_colour_window_ParamLimits

0x74cb,	// (0x00048597) popup_toolbar_window_ParamLimits

0x74cb,	// (0x00048597) popup_toolbar_window

0x791f,	// (0x000489eb) list_single_graphic_2heading_pane_ParamLimits

0x791f,	// (0x000489eb) list_single_graphic_2heading_pane

0x4207,	// (0x000452d3) aid_size_cell_apps_grid_lsc_pane

0x4219,	// (0x000452e5) aid_size_cell_apps_grid_prt_pane

0x9493,	// (0x0004a55f) bg_wml_button_pane_cp1_ParamLimits

0x9493,	// (0x0004a55f) bg_wml_button_pane_cp1

0x9c4b,	// (0x0004ad17) form_midp_field_text_pane_t1_ParamLimits

0x9a3d,	// (0x0004ab09) input_focus_pane_cp050_ParamLimits

0x9c76,	// (0x0004ad42) list_midp_form_text_pane_ParamLimits

0x9c28,	// (0x0004acf4) input_focus_pane_cp051_ParamLimits

0x9c3c,	// (0x0004ad08) list_midp_choice_pane_ParamLimits

0x9af6,	// (0x0004abc2) list_single_2graphic_pane_cp3_ParamLimits

0x9af6,	// (0x0004abc2) list_single_2graphic_pane_cp3

0x9b0c,	// (0x0004abd8) list_single_midp_graphic_pane_ParamLimits

0x9b0c,	// (0x0004abd8) list_single_midp_graphic_pane

0x56c8,	// (0x00046794) list_single_graphic_2heading_pane_g1_ParamLimits

0x56c8,	// (0x00046794) list_single_graphic_2heading_pane_g1

0x56d4,	// (0x000467a0) list_single_graphic_2heading_pane_g4_ParamLimits

0x56d4,	// (0x000467a0) list_single_graphic_2heading_pane_g4

0x56e0,	// (0x000467ac) list_single_graphic_2heading_pane_g5_ParamLimits

0x56e0,	// (0x000467ac) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0005085c) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0005085c) list_single_graphic_2heading_pane_g

0x56ec,	// (0x000467b8) list_single_graphic_2heading_pane_t1_ParamLimits

0x56ec,	// (0x000467b8) list_single_graphic_2heading_pane_t1

0x5700,	// (0x000467cc) list_single_graphic_2heading_pane_t2_ParamLimits

0x5700,	// (0x000467cc) list_single_graphic_2heading_pane_t2

0x571c,	// (0x000467e8) list_single_graphic_2heading_pane_t3_ParamLimits

0x571c,	// (0x000467e8) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00050863) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00050863) list_single_graphic_2heading_pane_t

0x9907,	// (0x0004a9d3) bg_popup_sub_pane_cp2

0x9931,	// (0x0004a9fd) grid_toobar_pane

0x758a,	// (0x00048656) cell_toolbar_pane_ParamLimits

0x758a,	// (0x00048656) cell_toolbar_pane

0x996d,	// (0x0004aa39) cell_toolbar_pane_g1_ParamLimits

0x996d,	// (0x0004aa39) cell_toolbar_pane_g1

0x9981,	// (0x0004aa4d) cell_toolbar_pane_g2_ParamLimits

0x9981,	// (0x0004aa4d) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00050871) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00050871) cell_toolbar_pane_g

0x99a3,	// (0x0004aa6f) grid_highlight_pane_cp2_ParamLimits

0x99a3,	// (0x0004aa6f) grid_highlight_pane_cp2

0x99bd,	// (0x0004aa89) toolbar_button_pane

0x99c9,	// (0x0004aa95) toolbar_button_pane_g1

0x99d1,	// (0x0004aa9d) toolbar_button_pane_g2

0x99d9,	// (0x0004aaa5) toolbar_button_pane_g3

0x99e1,	// (0x0004aaad) toolbar_button_pane_g4

0x99e9,	// (0x0004aab5) toolbar_button_pane_g5

0x99f1,	// (0x0004aabd) toolbar_button_pane_g6

0x99f9,	// (0x0004aac5) toolbar_button_pane_g7

0x9a01,	// (0x0004aacd) toolbar_button_pane_g8

0x9a09,	// (0x0004aad5) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00050876) toolbar_button_pane_g

0x75da,	// (0x000486a6) list_single_2graphic_pane_g1_cp3_ParamLimits

0x75da,	// (0x000486a6) list_single_2graphic_pane_g1_cp3

0x75e6,	// (0x000486b2) list_single_2graphic_pane_g2_cp3_ParamLimits

0x75e6,	// (0x000486b2) list_single_2graphic_pane_g2_cp3

0x8f8b,	// (0x0004a057) list_single_2graphic_pane_g3_cp3

0x75f7,	// (0x000486c3) list_single_2graphic_pane_g4_cp3_ParamLimits

0x75f7,	// (0x000486c3) list_single_2graphic_pane_g4_cp3

0x7603,	// (0x000486cf) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7603,	// (0x000486cf) list_single_2graphic_pane_t1_cp3

0x8c47,	// (0x00049d13) list_single_midp_graphic_pane_g2_ParamLimits

0x8c47,	// (0x00049d13) list_single_midp_graphic_pane_g2

0x56b0,	// (0x0004677c) aid_zoom_text_primary

0x56b8,	// (0x00046784) aid_zoom_text_secondary

0x93dd,	// (0x0004a4a9) status_small_pane_g7_ParamLimits

0x93dd,	// (0x0004a4a9) status_small_pane_g7

0x9400,	// (0x0004a4cc) status_small_pane_t1_ParamLimits

0x62ae,	// (0x0004737a) title_pane_g2

0x0003,

0xf529,	// (0x000505f5) title_pane_g

0x6517,	// (0x000475e3) aid_size_cell_colour_1_pane_ParamLimits

0x6517,	// (0x000475e3) aid_size_cell_colour_1_pane

0x652b,	// (0x000475f7) aid_size_cell_colour_2_pane_ParamLimits

0x652b,	// (0x000475f7) aid_size_cell_colour_2_pane

0x653f,	// (0x0004760b) aid_size_cell_colour_3_pane_ParamLimits

0x653f,	// (0x0004760b) aid_size_cell_colour_3_pane

0x6553,	// (0x0004761f) aid_size_cell_colour_4_pane_ParamLimits

0x6553,	// (0x0004761f) aid_size_cell_colour_4_pane

0x67b9,	// (0x00047885) title_pane_stacon_g1_ParamLimits

0x67b9,	// (0x00047885) title_pane_stacon_g1

0xa055,	// (0x0004b121) popup_note_wait_window_g3_ParamLimits

0xa055,	// (0x0004b121) popup_note_wait_window_g3

0xa0cc,	// (0x0004b198) popup_note_wait_window_t5_ParamLimits

0xa0cc,	// (0x0004b198) popup_note_wait_window_t5

0x08f7,	// (0x000419c3) main_feb_china_hwr_fs_writing_pane

0x6fe9,	// (0x000480b5) popup_feb_china_hwr_fs_window_ParamLimits

0x6fe9,	// (0x000480b5) popup_feb_china_hwr_fs_window

0x7634,	// (0x00048700) aid_size_cell_hwr_fs_ParamLimits

0x7634,	// (0x00048700) aid_size_cell_hwr_fs

0x9a3d,	// (0x0004ab09) bg_popup_sub_pane_cp3_ParamLimits

0x9a3d,	// (0x0004ab09) bg_popup_sub_pane_cp3

0x7649,	// (0x00048715) grid_hwr_fs_pane_ParamLimits

0x7649,	// (0x00048715) grid_hwr_fs_pane

0x7661,	// (0x0004872d) linegrid_hwr_fs_pane_ParamLimits

0x7661,	// (0x0004872d) linegrid_hwr_fs_pane

0x7671,	// (0x0004873d) cell_hwr_fs_pane_ParamLimits

0x7671,	// (0x0004873d) cell_hwr_fs_pane

0x9a49,	// (0x0004ab15) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a49,	// (0x0004ab15) linegrid_hwr_fs_pane_g1

0x9a55,	// (0x0004ab21) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a55,	// (0x0004ab21) linegrid_hwr_fs_pane_g2

0x9a67,	// (0x0004ab33) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a67,	// (0x0004ab33) linegrid_hwr_fs_pane_g3

0x7695,	// (0x00048761) linegrid_hwr_fs_pane_g4_ParamLimits

0x7695,	// (0x00048761) linegrid_hwr_fs_pane_g4

0x76b3,	// (0x0004877f) linegrid_hwr_fs_pane_g5_ParamLimits

0x76b3,	// (0x0004877f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x000508a1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x000508a1) linegrid_hwr_fs_pane_g

0x9a73,	// (0x0004ab3f) cell_hwr_fs_pane_g1_ParamLimits

0x9a73,	// (0x0004ab3f) cell_hwr_fs_pane_g1

0x9842,	// (0x0004a90e) cell_hwr_fs_pane_g2_ParamLimits

0x9842,	// (0x0004a90e) cell_hwr_fs_pane_g2

0x9a89,	// (0x0004ab55) cell_hwr_fs_pane_g3_ParamLimits

0x9a89,	// (0x0004ab55) cell_hwr_fs_pane_g3

0x9a96,	// (0x0004ab62) cell_hwr_fs_pane_g4_ParamLimits

0x9a96,	// (0x0004ab62) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x000508ac) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x000508ac) cell_hwr_fs_pane_g

0x76c9,	// (0x00048795) cell_hwr_fs_pane_t1

0x08f7,	// (0x000419c3) grid_highlight_pane_cp6

0x08f7,	// (0x000419c3) main_idle_act2_pane

0x10b8,	// (0x00042184) aid_inside_area_popup_secondary

0xa705,	// (0x0004b7d1) aid_inside_area_window_primary_ParamLimits

0xa705,	// (0x0004b7d1) aid_inside_area_window_primary

0xb2a2,	// (0x0004c36e) ai2_news_ticker_pane

0xb2aa,	// (0x0004c376) aid_size_cell_ai1_link_ParamLimits

0xb2aa,	// (0x0004c376) aid_size_cell_ai1_link

0xb2c4,	// (0x0004c390) popup_ai2_data_window_ParamLimits

0xb2c4,	// (0x0004c390) popup_ai2_data_window

0xb2e2,	// (0x0004c3ae) popup_ai2_link_window_ParamLimits

0xb2e2,	// (0x0004c3ae) popup_ai2_link_window

0x9a3d,	// (0x0004ab09) bg_popup_sub_pane_cp4_ParamLimits

0x9a3d,	// (0x0004ab09) bg_popup_sub_pane_cp4

0xb2f8,	// (0x0004c3c4) grid_ai2_link_pane_ParamLimits

0xb2f8,	// (0x0004c3c4) grid_ai2_link_pane

0xb30f,	// (0x0004c3db) popup_ai2_link_window_g1_ParamLimits

0xb30f,	// (0x0004c3db) popup_ai2_link_window_g1

0xb31b,	// (0x0004c3e7) popup_ai2_link_window_g2_ParamLimits

0xb31b,	// (0x0004c3e7) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x00050a7f) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x00050a7f) popup_ai2_link_window_g

0xb32c,	// (0x0004c3f8) ai2_mp_button_pane

0xb334,	// (0x0004c400) ai2_mp_volume_pane

0x9c28,	// (0x0004acf4) bg_popup_sub_pane_cp5_ParamLimits

0x9c28,	// (0x0004acf4) bg_popup_sub_pane_cp5

0xb33c,	// (0x0004c408) heading_ai2_gene_pane_ParamLimits

0xb33c,	// (0x0004c408) heading_ai2_gene_pane

0xb348,	// (0x0004c414) list_ai2_gene_pane_ParamLimits

0xb348,	// (0x0004c414) list_ai2_gene_pane

0xb390,	// (0x0004c45c) cell_ai2_link_pane_ParamLimits

0xb390,	// (0x0004c45c) cell_ai2_link_pane

0xb3a6,	// (0x0004c472) cell_ai2_link_pane_g1

0x08f7,	// (0x000419c3) grid_highlight_pane_cp7

0x7a68,	// (0x00048b34) ai2_mp_volume_pane_g1

0xb479,	// (0x0004c545) ai2_mp_volume_pane_g2

0xb3ee,	// (0x0004c4ba) list_ai2_gene_pane_t1

0xb481,	// (0x0004c54d) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x00050a98) ai2_mp_volume_pane_g

0x7a70,	// (0x00048b3c) volume_small_pane_cp3

0xb489,	// (0x0004c555) aid_size_cell_ai2_button

0xb491,	// (0x0004c55d) grid_ai2_button_pane

0xb49a,	// (0x0004c566) cell_ai2_button_pane_ParamLimits

0xb49a,	// (0x0004c566) cell_ai2_button_pane

0x08ed,	// (0x000419b9) cell_ai2_button_pane_g1

0x08f7,	// (0x000419c3) grid_highlight_pane_cp8

0xb439,	// (0x0004c505) ai2_gene_pane_t1_ParamLimits

0xb439,	// (0x0004c505) ai2_gene_pane_t1

0x6f3d,	// (0x00048009) aid_height_parent_landscape

0xad95,	// (0x0004be61) aid_height_set_list

0xada6,	// (0x0004be72) aid_size_parent

0xb0c1,	// (0x0004c18d) aid_size_cell_graphic_pane_ParamLimits

0xb358,	// (0x0004c424) popup_ai2_data_window_g1_ParamLimits

0xb358,	// (0x0004c424) popup_ai2_data_window_g1

0xb364,	// (0x0004c430) ai2_news_ticker_pane_g1

0xb36c,	// (0x0004c438) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x00050a84) ai2_news_ticker_pane_g

0xb374,	// (0x0004c440) ai2_news_ticker_pane_t1

0xb382,	// (0x0004c44e) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x00050a89) ai2_news_ticker_pane_t

0xb3af,	// (0x0004c47b) heading_ai2_gene_pane_g1

0xb3b7,	// (0x0004c483) heading_ai2_gene_pane_t1_ParamLimits

0xb3b7,	// (0x0004c483) heading_ai2_gene_pane_t1

0xb3cc,	// (0x0004c498) list_highlight_pane_cp6

0xb3d4,	// (0x0004c4a0) ai2_gene_pane_ParamLimits

0xb3d4,	// (0x0004c4a0) ai2_gene_pane

0xb3fc,	// (0x0004c4c8) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x00050a8e) list_ai2_gene_pane_t

0xb40a,	// (0x0004c4d6) list_highlight_pane_cp8_ParamLimits

0xb40a,	// (0x0004c4d6) list_highlight_pane_cp8

0xb41b,	// (0x0004c4e7) ai2_gene_pane_g1_ParamLimits

0xb41b,	// (0x0004c4e7) ai2_gene_pane_g1

0xb42d,	// (0x0004c4f9) ai2_gene_pane_g2_ParamLimits

0xb42d,	// (0x0004c4f9) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x00050a93) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x00050a93) ai2_gene_pane_g

0x0f2b,	// (0x00041ff7) scroll_pane_cp12

0x6efa,	// (0x00047fc6) control_pane_t3_ParamLimits

0x6efa,	// (0x00047fc6) control_pane_t3

0x93f1,	// (0x0004a4bd) status_small_pane_g8_ParamLimits

0x93f1,	// (0x0004a4bd) status_small_pane_g8

0x70e7,	// (0x000481b3) popup_find_window_ParamLimits

0x7314,	// (0x000483e0) popup_note_image_window_ParamLimits

0x5734,	// (0x00046800) list_double2_graphic_pane_vc_g1_ParamLimits

0x5734,	// (0x00046800) list_double2_graphic_pane_vc_g1

0x75ba,	// (0x00048686) list_double2_graphic_pane_vc_g2_ParamLimits

0x75ba,	// (0x00048686) list_double2_graphic_pane_vc_g2

0x75c6,	// (0x00048692) list_double2_graphic_pane_vc_g3_ParamLimits

0x75c6,	// (0x00048692) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0005086a) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0005086a) list_double2_graphic_pane_vc_g

0x5740,	// (0x0004680c) list_double2_graphic_pane_vc_t1_ParamLimits

0x5740,	// (0x0004680c) list_double2_graphic_pane_vc_t1

0x75ba,	// (0x00048686) list_single_heading_pane_vc_g1_ParamLimits

0x75ba,	// (0x00048686) list_single_heading_pane_vc_g1

0x75c6,	// (0x00048692) list_single_heading_pane_vc_g2_ParamLimits

0x75c6,	// (0x00048692) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005088b) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005088b) list_single_heading_pane_vc_g

0x5756,	// (0x00046822) list_single_heading_pane_vc_t1_ParamLimits

0x5756,	// (0x00046822) list_single_heading_pane_vc_t1

0x576c,	// (0x00046838) list_single_heading_pane_vc_t2_ParamLimits

0x576c,	// (0x00046838) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x00050890) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x00050890) list_single_heading_pane_vc_t

0x577e,	// (0x0004684a) list_setting_number_pane_vc_g1_ParamLimits

0x577e,	// (0x0004684a) list_setting_number_pane_vc_g1

0x578a,	// (0x00046856) list_setting_number_pane_vc_g2_ParamLimits

0x578a,	// (0x00046856) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x00050895) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x00050895) list_setting_number_pane_vc_g

0x5796,	// (0x00046862) list_setting_number_pane_vc_t1_ParamLimits

0x5796,	// (0x00046862) list_setting_number_pane_vc_t1

0x57aa,	// (0x00046876) list_setting_number_pane_vc_t2_ParamLimits

0x57aa,	// (0x00046876) list_setting_number_pane_vc_t2

0x57c6,	// (0x00046892) list_setting_number_pane_vc_t3_ParamLimits

0x57c6,	// (0x00046892) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x0005089a) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x0005089a) list_setting_number_pane_vc_t

0x57f2,	// (0x000468be) set_value_pane_vc_ParamLimits

0x57f2,	// (0x000468be) set_value_pane_vc

0x791f,	// (0x000489eb) list_double2_graphic_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double2_graphic_pane_vc

0x791f,	// (0x000489eb) list_double2_large_graphic_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double2_large_graphic_pane_vc

0x791f,	// (0x000489eb) list_double2_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double2_pane_vc

0x791f,	// (0x000489eb) list_double_graphic_heading_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double_graphic_heading_pane_vc

0x791f,	// (0x000489eb) list_double_graphic_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double_graphic_pane_vc

0x791f,	// (0x000489eb) list_double_heading_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double_heading_pane_vc

0x7933,	// (0x000489ff) list_double_large_graphic_pane_vc_ParamLimits

0x7933,	// (0x000489ff) list_double_large_graphic_pane_vc

0x791f,	// (0x000489eb) list_double_number_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double_number_pane_vc

0x791f,	// (0x000489eb) list_double_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double_pane_vc

0x791f,	// (0x000489eb) list_double_time_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_double_time_pane_vc

0x791f,	// (0x000489eb) list_setting_number_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_setting_number_pane_vc

0x791f,	// (0x000489eb) list_setting_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_setting_pane_vc

0x791f,	// (0x000489eb) list_single_graphic_heading_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_single_graphic_heading_pane_vc

0x791f,	// (0x000489eb) list_single_heading_pane_vc_ParamLimits

0x791f,	// (0x000489eb) list_single_heading_pane_vc

0x7955,	// (0x00048a21) list_single_number_heading_pane_vc_ParamLimits

0x7955,	// (0x00048a21) list_single_number_heading_pane_vc

0x58ba,	// (0x00046986) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x58ba,	// (0x00046986) list_double_graphic_heading_pane_vc_g1

0x75ba,	// (0x00048686) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x75ba,	// (0x00048686) list_double_graphic_heading_pane_vc_g2

0x75c6,	// (0x00048692) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x75c6,	// (0x00048692) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x00050a9f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x00050a9f) list_double_graphic_heading_pane_vc_g

0x58c6,	// (0x00046992) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x58c6,	// (0x00046992) list_double_graphic_heading_pane_vc_t1

0x58dc,	// (0x000469a8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x58dc,	// (0x000469a8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x00050aa6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x00050aa6) list_double_graphic_heading_pane_vc_t

0x577e,	// (0x0004684a) list_setting_pane_vc_g1_ParamLimits

0x577e,	// (0x0004684a) list_setting_pane_vc_g1

0x578a,	// (0x00046856) list_setting_pane_vc_g2_ParamLimits

0x578a,	// (0x00046856) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x00050895) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x00050895) list_setting_pane_vc_g

0x58fa,	// (0x000469c6) list_setting_pane_vc_t1_ParamLimits

0x58fa,	// (0x000469c6) list_setting_pane_vc_t1

0x5916,	// (0x000469e2) list_setting_pane_vc_t2_ParamLimits

0x5916,	// (0x000469e2) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x00050ad4) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x00050ad4) list_setting_pane_vc_t

0x57f2,	// (0x000468be) set_value_pane_cp_vc_ParamLimits

0x57f2,	// (0x000468be) set_value_pane_cp_vc

0x75ba,	// (0x00048686) list_single_number_heading_pane_vc_g1_ParamLimits

0x75ba,	// (0x00048686) list_single_number_heading_pane_vc_g1

0x75c6,	// (0x00048692) list_single_number_heading_pane_vc_g2_ParamLimits

0x75c6,	// (0x00048692) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005088b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005088b) list_single_number_heading_pane_vc_g

0x5932,	// (0x000469fe) list_single_number_heading_pane_vc_t1_ParamLimits

0x5932,	// (0x000469fe) list_single_number_heading_pane_vc_t1

0x5948,	// (0x00046a14) list_single_number_heading_pane_vc_t2_ParamLimits

0x5948,	// (0x00046a14) list_single_number_heading_pane_vc_t2

0x595a,	// (0x00046a26) list_single_number_heading_pane_vc_t3_ParamLimits

0x595a,	// (0x00046a26) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x00050ad9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x00050ad9) list_single_number_heading_pane_vc_t

0x5734,	// (0x00046800) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5734,	// (0x00046800) list_single_graphic_heading_pane_vc_g1

0x75ba,	// (0x00048686) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x75ba,	// (0x00048686) list_single_graphic_heading_pane_vc_g4

0x75c6,	// (0x00048692) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x75c6,	// (0x00048692) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0005086a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0005086a) list_single_graphic_heading_pane_vc_g

0x596c,	// (0x00046a38) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x596c,	// (0x00046a38) list_single_graphic_heading_pane_vc_t1

0x5982,	// (0x00046a4e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5982,	// (0x00046a4e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x00050ae0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x00050ae0) list_single_graphic_heading_pane_vc_t

0x75ba,	// (0x00048686) list_double2_pane_vc_g1_ParamLimits

0x75ba,	// (0x00048686) list_double2_pane_vc_g1

0x75c6,	// (0x00048692) list_double2_pane_vc_g2_ParamLimits

0x75c6,	// (0x00048692) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005088b) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005088b) list_double2_pane_vc_g

0x5994,	// (0x00046a60) list_double2_pane_vc_t1_ParamLimits

0x5994,	// (0x00046a60) list_double2_pane_vc_t1

0x7a79,	// (0x00048b45) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7a79,	// (0x00048b45) list_double2_large_graphic_pane_vc_g1

0x75ba,	// (0x00048686) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x75ba,	// (0x00048686) list_double2_large_graphic_pane_vc_g2

0x75c6,	// (0x00048692) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x75c6,	// (0x00048692) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x00050ae5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x00050ae5) list_double2_large_graphic_pane_vc_g

0x59aa,	// (0x00046a76) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59aa,	// (0x00046a76) list_double2_large_graphic_pane_vc_t1

0x59c0,	// (0x00046a8c) list_double_time_pane_vc_g1_ParamLimits

0x59c0,	// (0x00046a8c) list_double_time_pane_vc_g1

0x59cc,	// (0x00046a98) list_double_time_pane_vc_g2_ParamLimits

0x59cc,	// (0x00046a98) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x00050aec) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x00050aec) list_double_time_pane_vc_g

0x59d8,	// (0x00046aa4) list_double_time_pane_vc_t1_ParamLimits

0x59d8,	// (0x00046aa4) list_double_time_pane_vc_t1

0x5a02,	// (0x00046ace) list_double_time_pane_vc_t2_ParamLimits

0x5a02,	// (0x00046ace) list_double_time_pane_vc_t2

0x5a4b,	// (0x00046b17) list_double_time_pane_vc_t3_ParamLimits

0x5a4b,	// (0x00046b17) list_double_time_pane_vc_t3

0x5a5d,	// (0x00046b29) list_double_time_pane_vc_t4_ParamLimits

0x5a5d,	// (0x00046b29) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x00050af1) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x00050af1) list_double_time_pane_vc_t

0x75ba,	// (0x00048686) list_double_pane_vc_g1_ParamLimits

0x75ba,	// (0x00048686) list_double_pane_vc_g1

0x75c6,	// (0x00048692) list_double_pane_vc_g2_ParamLimits

0x75c6,	// (0x00048692) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005088b) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005088b) list_double_pane_vc_g

0x5a71,	// (0x00046b3d) list_double_pane_vc_t1_ParamLimits

0x5a71,	// (0x00046b3d) list_double_pane_vc_t1

0x5a85,	// (0x00046b51) list_double_pane_vc_t2_ParamLimits

0x5a85,	// (0x00046b51) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x00050afa) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x00050afa) list_double_pane_vc_t

0x75ba,	// (0x00048686) list_double_number_pane_vc_g1_ParamLimits

0x75ba,	// (0x00048686) list_double_number_pane_vc_g1

0x75c6,	// (0x00048692) list_double_number_pane_vc_g2_ParamLimits

0x75c6,	// (0x00048692) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005088b) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005088b) list_double_number_pane_vc_g

0x5a9b,	// (0x00046b67) list_double_number_pane_vc_t1_ParamLimits

0x5a9b,	// (0x00046b67) list_double_number_pane_vc_t1

0x5aad,	// (0x00046b79) list_double_number_pane_vc_t2_ParamLimits

0x5aad,	// (0x00046b79) list_double_number_pane_vc_t2

0x5a85,	// (0x00046b51) list_double_number_pane_vc_t3_ParamLimits

0x5a85,	// (0x00046b51) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x00050aff) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x00050aff) list_double_number_pane_vc_t

0x7a85,	// (0x00048b51) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7a85,	// (0x00048b51) list_double_large_graphic_pane_vc_g1

0x7aa7,	// (0x00048b73) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7aa7,	// (0x00048b73) list_double_large_graphic_pane_vc_g2

0x7abb,	// (0x00048b87) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7abb,	// (0x00048b87) list_double_large_graphic_pane_vc_g3

0x5ac1,	// (0x00046b8d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ac1,	// (0x00046b8d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x00050b06) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00050b06) list_double_large_graphic_pane_vc_g

0x5acd,	// (0x00046b99) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5acd,	// (0x00046b99) list_double_large_graphic_pane_vc_t1

0x5ae9,	// (0x00046bb5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5ae9,	// (0x00046bb5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00050b0f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00050b0f) list_double_large_graphic_pane_vc_t

0x75ba,	// (0x00048686) list_double_heading_pane_vc_g1_ParamLimits

0x75ba,	// (0x00048686) list_double_heading_pane_vc_g1

0x75c6,	// (0x00048692) list_double_heading_pane_vc_g2_ParamLimits

0x75c6,	// (0x00048692) list_double_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x0005088b) list_double_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0005088b) list_double_heading_pane_vc_g

0x5b09,	// (0x00046bd5) list_double_heading_pane_vc_t1_ParamLimits

0x5b09,	// (0x00046bd5) list_double_heading_pane_vc_t1

0x5b1b,	// (0x00046be7) list_double_heading_pane_vc_t2_ParamLimits

0x5b1b,	// (0x00046be7) list_double_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x00050b14) list_double_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00050b14) list_double_heading_pane_vc_t

0x5b33,	// (0x00046bff) list_double_graphic_pane_vc_g1_ParamLimits

0x5b33,	// (0x00046bff) list_double_graphic_pane_vc_g1

0x5b3f,	// (0x00046c0b) list_double_graphic_pane_vc_g2_ParamLimits

0x5b3f,	// (0x00046c0b) list_double_graphic_pane_vc_g2

0x75ba,	// (0x00048686) list_double_graphic_pane_vc_g3_ParamLimits

0x75ba,	// (0x00048686) list_double_graphic_pane_vc_g3

0x0003,

0xfa4d,	// (0x00050b19) list_double_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x00050b19) list_double_graphic_pane_vc_g

0x5b5c,	// (0x00046c28) list_double_graphic_pane_vc_t1_ParamLimits

0x5b5c,	// (0x00046c28) list_double_graphic_pane_vc_t1

0x5b86,	// (0x00046c52) list_double_graphic_pane_vc_t2_ParamLimits

0x5b86,	// (0x00046c52) list_double_graphic_pane_vc_t2

0x0001,

0xfa56,	// (0x00050b22) list_double_graphic_pane_vc_t_ParamLimits

0xfa56,	// (0x00050b22) list_double_graphic_pane_vc_t

0x5eba,	// (0x00046f86) aid_size_cell_fastswap

0x5ec2,	// (0x00046f8e) aid_size_cell_touch_ParamLimits

0x5ec2,	// (0x00046f8e) aid_size_cell_touch

0x6123,	// (0x000471ef) popup_fast_swap_wide_window_ParamLimits

0x6123,	// (0x000471ef) popup_fast_swap_wide_window

0x6241,	// (0x0004730d) touch_pane_ParamLimits

0x6241,	// (0x0004730d) touch_pane

0x0f81,	// (0x0004204d) button_value_adjust_pane_cp2

0x53f0,	// (0x000464bc) button_value_adjust_pane_cp4

0x5418,	// (0x000464e4) form_field_data_pane_cp2

0x543d,	// (0x00046509) form_field_data_wide_pane_cp2

0x4248,	// (0x00045314) bg_scroll_pane_ParamLimits

0x69ba,	// (0x00047a86) scroll_handle_pane_ParamLimits

0x69ce,	// (0x00047a9a) scroll_sc2_down_pane_ParamLimits

0x69ce,	// (0x00047a9a) scroll_sc2_down_pane

0x42a2,	// (0x0004536e) scroll_sc2_up_pane_ParamLimits

0x42a2,	// (0x0004536e) scroll_sc2_up_pane

0xbbc2,	// (0x0004cc8e) grid_wheel_folder_pane_g1_ParamLimits

0xbbc2,	// (0x0004cc8e) grid_wheel_folder_pane_g1

0x6cc4,	// (0x00047d90) clock_nsta_pane_cp2_ParamLimits

0x6cc4,	// (0x00047d90) clock_nsta_pane_cp2

0x9174,	// (0x0004a240) listscroll_midp_pane_ParamLimits

0x9180,	// (0x0004a24c) midp_canvas_pane

0x946b,	// (0x0004a537) nsta_clock_indic_pane

0x949f,	// (0x0004a56b) listscroll_form_pane_vc

0x94a7,	// (0x0004a573) listscroll_set_pane_vc_ParamLimits

0x94a7,	// (0x0004a573) listscroll_set_pane_vc

0x959e,	// (0x0004a66a) clock_nsta_pane

0x961b,	// (0x0004a6e7) indicator_nsta_pane

0x9907,	// (0x0004a9d3) bg_popup_sub_pane_cp2_ParamLimits

0x991b,	// (0x0004a9e7) find_pane_cp2_ParamLimits

0x991b,	// (0x0004a9e7) find_pane_cp2

0x9931,	// (0x0004a9fd) grid_toobar_pane_ParamLimits

0x9a11,	// (0x0004aadd) list_form_gen_pane_vc_ParamLimits

0x9a11,	// (0x0004aadd) list_form_gen_pane_vc

0x9a27,	// (0x0004aaf3) scroll_pane_cp8_vc_ParamLimits

0x9a27,	// (0x0004aaf3) scroll_pane_cp8_vc

0x9aa3,	// (0x0004ab6f) data_form_wide_pane_vc_ParamLimits

0x9aa3,	// (0x0004ab6f) data_form_wide_pane_vc

0x9aaf,	// (0x0004ab7b) form_field_data_wide_pane_vc_g1

0x9ab7,	// (0x0004ab83) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ab7,	// (0x0004ab83) form_field_data_wide_pane_vc_t1

0x0f95,	// (0x00042061) input_focus_pane_cp6_vc_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_cp6_vc

0x9db3,	// (0x0004ae7f) list_midp_pane_ParamLimits

0x9dbf,	// (0x0004ae8b) scroll_pane_cp16_ParamLimits

0x9dbf,	// (0x0004ae8b) scroll_pane_cp16

0x9e29,	// (0x0004aef5) button_value_adjust_pane_ParamLimits

0x9e29,	// (0x0004aef5) button_value_adjust_pane

0xadb8,	// (0x0004be84) button_value_adjust_pane_cp6_ParamLimits

0xadb8,	// (0x0004be84) button_value_adjust_pane_cp6

0xaf00,	// (0x0004bfcc) settings_code_pane_cp_ParamLimits

0xaf00,	// (0x0004bfcc) settings_code_pane_cp

0x08ed,	// (0x000419b9) cell_touch_pane_g1

0x08ed,	// (0x000419b9) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000507af) cell_touch_pane_g

0xb4ac,	// (0x0004c578) cell_touch_pane_cp_ParamLimits

0xb4ac,	// (0x0004c578) cell_touch_pane_cp

0xb4bc,	// (0x0004c588) cell_touch_pane_ParamLimits

0xb4bc,	// (0x0004c588) cell_touch_pane

0x08ed,	// (0x000419b9) scroll_sc2_down_pane_g1

0x08ed,	// (0x000419b9) scroll_sc2_up_pane_g1

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp4_vc

0xb4cd,	// (0x0004c599) list_set_graphic_pane_vc_g1_ParamLimits

0xb4cd,	// (0x0004c599) list_set_graphic_pane_vc_g1

0xb4d9,	// (0x0004c5a5) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d9,	// (0x0004c5a5) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x00050aab) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x00050aab) list_set_graphic_pane_vc_g

0xb4e5,	// (0x0004c5b1) text_primary_small_cp13_vc_ParamLimits

0xb4e5,	// (0x0004c5b1) text_primary_small_cp13_vc

0xb4fd,	// (0x0004c5c9) list_set_graphic_pane_vc_ParamLimits

0xb4fd,	// (0x0004c5c9) list_set_graphic_pane_vc

0x08f7,	// (0x000419c3) input_focus_pane_cp2_vc

0x08ed,	// (0x000419b9) setting_code_pane_vc_g1

0x096a,	// (0x00041a36) setting_code_pane_vc_t1

0xb510,	// (0x0004c5dc) set_text_pane_vc_t1_ParamLimits

0xb510,	// (0x0004c5dc) set_text_pane_vc_t1

0x08f7,	// (0x000419c3) input_focus_pane_cp1_vc

0xb531,	// (0x0004c5fd) list_set_text_pane_vc

0x08ed,	// (0x000419b9) setting_text_pane_vc_g1

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp2_vc

0x0961,	// (0x00041a2d) setting_slider_graphic_pane_vc_g1

0xb53b,	// (0x0004c607) setting_slider_graphic_pane_vc_t1

0xb54d,	// (0x0004c619) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x00050ab0) setting_slider_graphic_pane_vc_t

0xb55f,	// (0x0004c62b) slider_set_pane_cp_vc

0xb569,	// (0x0004c635) slider_set_pane_vc_g1

0xb572,	// (0x0004c63e) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x00050ab5) slider_set_pane_vc_g

0x0fed,	// (0x000420b9) set_opt_bg_pane_g1_copy1

0x0ff5,	// (0x000420c1) set_opt_bg_pane_g2_copy1

0xb59e,	// (0x0004c66a) set_opt_bg_pane_g3_copy1

0x1005,	// (0x000420d1) set_opt_bg_pane_g4_copy1

0x100d,	// (0x000420d9) set_opt_bg_pane_g5_copy1

0x1015,	// (0x000420e1) set_opt_bg_pane_g6_copy1

0xb5a8,	// (0x0004c674) set_opt_bg_pane_g7_copy1

0xb5b2,	// (0x0004c67e) set_opt_bg_pane_g8_copy1

0xb5bc,	// (0x0004c688) set_opt_bg_pane_g9_copy1

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp_vc

0xb5c6,	// (0x0004c692) setting_slider_pane_vc_t1

0xb5d5,	// (0x0004c6a1) setting_slider_pane_vc_t2

0xb5e7,	// (0x0004c6b3) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x00050ac4) setting_slider_pane_vc_t

0xb5f9,	// (0x0004c6c5) slider_set_pane_vc

0x76d7,	// (0x000487a3) volume_set_pane_vc_g1

0x76e0,	// (0x000487ac) volume_set_pane_vc_g2

0x76e9,	// (0x000487b5) volume_set_pane_vc_g3

0x76f2,	// (0x000487be) volume_set_pane_vc_g4

0x76fb,	// (0x000487c7) volume_set_pane_vc_g5

0x7704,	// (0x000487d0) volume_set_pane_vc_g6

0x770d,	// (0x000487d9) volume_set_pane_vc_g7

0x7716,	// (0x000487e2) volume_set_pane_vc_g8

0x771f,	// (0x000487eb) volume_set_pane_vc_g9

0x7728,	// (0x000487f4) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x00050962) volume_set_pane_vc_g

0xb603,	// (0x0004c6cf) volume_set_pane_vc

0xb60d,	// (0x0004c6d9) button_value_adjust_pane_cp1_vc

0xb617,	// (0x0004c6e3) list_highlight_pane_cp2_vc

0xb620,	// (0x0004c6ec) list_set_pane_vc_ParamLimits

0xb620,	// (0x0004c6ec) list_set_pane_vc

0xb68e,	// (0x0004c75a) main_pane_set_vc_t1_ParamLimits

0xb68e,	// (0x0004c75a) main_pane_set_vc_t1

0xb6a3,	// (0x0004c76f) main_pane_set_vc_t2_ParamLimits

0xb6a3,	// (0x0004c76f) main_pane_set_vc_t2

0xb6b5,	// (0x0004c781) main_pane_set_vc_t3_ParamLimits

0xb6b5,	// (0x0004c781) main_pane_set_vc_t3

0xb6c9,	// (0x0004c795) main_pane_set_vc_t4_ParamLimits

0xb6c9,	// (0x0004c795) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x00050acb) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x00050acb) main_pane_set_vc_t

0xb6dd,	// (0x0004c7a9) setting_code_pane_vc_ParamLimits

0xb6dd,	// (0x0004c7a9) setting_code_pane_vc

0xb6ee,	// (0x0004c7ba) setting_slider_graphic_pane_vc

0xb6ee,	// (0x0004c7ba) setting_slider_pane_vc

0xb6ee,	// (0x0004c7ba) setting_text_pane_vc

0xb6ee,	// (0x0004c7ba) setting_volume_pane_vc

0xb6f8,	// (0x0004c7c4) scroll_pane_cp121_vc

0x0f6f,	// (0x0004203b) set_content_pane_vc

0xb700,	// (0x0004c7cc) button_value_adjust_pane_g1

0xb709,	// (0x0004c7d5) button_value_adjust_pane_g2

0x0001,

0xfa5b,	// (0x00050b27) button_value_adjust_pane_g

0xb712,	// (0x0004c7de) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb712,	// (0x0004c7de) form_field_slider_wide_pane_vc_t1

0xb724,	// (0x0004c7f0) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb724,	// (0x0004c7f0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa60,	// (0x00050b2c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa60,	// (0x00050b2c) form_field_slider_wide_pane_vc_t

0x0945,	// (0x00041a11) input_focus_pane_cp10_vc_ParamLimits

0x0945,	// (0x00041a11) input_focus_pane_cp10_vc

0xb750,	// (0x0004c81c) slider_cont_pane_cp1_vc_ParamLimits

0xb750,	// (0x0004c81c) slider_cont_pane_cp1_vc

0xb762,	// (0x0004c82e) slider_form_pane_g1_cp2

0xb572,	// (0x0004c63e) slider_form_pane_g2_cp2

0xb78f,	// (0x0004c85b) form_field_slider_pane_vc_t3

0xb79d,	// (0x0004c869) form_field_slider_pane_vc_t4

0xb7ab,	// (0x0004c877) slider_form_pane_vc_ParamLimits

0xb7ab,	// (0x0004c877) slider_form_pane_vc

0xb7b8,	// (0x0004c884) form_field_slider_pane_vc_t1_ParamLimits

0xb7b8,	// (0x0004c884) form_field_slider_pane_vc_t1

0xb724,	// (0x0004c7f0) form_field_slider_pane_vc_t2_ParamLimits

0xb724,	// (0x0004c7f0) form_field_slider_pane_vc_t2

0x0001,

0xfa72,	// (0x00050b3e) form_field_slider_pane_vc_t_ParamLimits

0xfa72,	// (0x00050b3e) form_field_slider_pane_vc_t

0x0945,	// (0x00041a11) input_focus_pane_cp9_vc_ParamLimits

0x0945,	// (0x00041a11) input_focus_pane_cp9_vc

0xb7ce,	// (0x0004c89a) slider_cont_pane_vc_ParamLimits

0xb7ce,	// (0x0004c89a) slider_cont_pane_vc

0xb7e2,	// (0x0004c8ae) list_form_graphic_pane_cp_vc_ParamLimits

0xb7e2,	// (0x0004c8ae) list_form_graphic_pane_cp_vc

0x9aaf,	// (0x0004ab7b) form_field_popup_wide_pane_vc_g1

0xb7f7,	// (0x0004c8c3) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f7,	// (0x0004c8c3) form_field_popup_wide_pane_vc_t1

0x0f95,	// (0x00042061) input_focus_pane_cp8_vc_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_cp8_vc

0xb83c,	// (0x0004c908) list_form_wide_pane_vc_ParamLimits

0xb83c,	// (0x0004c908) list_form_wide_pane_vc

0xb848,	// (0x0004c914) list_form_graphic_pane_vc_g1

0xb850,	// (0x0004c91c) list_form_graphic_pane_vc_t1_ParamLimits

0xb850,	// (0x0004c91c) list_form_graphic_pane_vc_t1

0x0953,	// (0x00041a1f) list_highlight_pane_cp5_vc_ParamLimits

0x0953,	// (0x00041a1f) list_highlight_pane_cp5_vc

0xb86c,	// (0x0004c938) list_form_graphic_pane_vc_ParamLimits

0xb86c,	// (0x0004c938) list_form_graphic_pane_vc

0x9aaf,	// (0x0004ab7b) form_field_popup_pane_vc_g1

0xb882,	// (0x0004c94e) form_field_popup_pane_vc_t1_ParamLimits

0xb882,	// (0x0004c94e) form_field_popup_pane_vc_t1

0x0f95,	// (0x00042061) input_focus_pane_cp7_vc_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_cp7_vc

0xb899,	// (0x0004c965) list_form_pane_vc_ParamLimits

0xb899,	// (0x0004c965) list_form_pane_vc

0xb8a5,	// (0x0004c971) data_form_pane_vc_t1_ParamLimits

0xb8a5,	// (0x0004c971) data_form_pane_vc_t1

0x0fed,	// (0x000420b9) input_focus_pane_vc_g1

0x0ff5,	// (0x000420c1) input_focus_pane_vc_g2

0x0ffd,	// (0x000420c9) input_focus_pane_vc_g3

0x1005,	// (0x000420d1) input_focus_pane_vc_g4

0x100d,	// (0x000420d9) input_focus_pane_vc_g5

0x1015,	// (0x000420e1) input_focus_pane_vc_g6

0x101d,	// (0x000420e9) input_focus_pane_vc_g7

0x1025,	// (0x000420f1) input_focus_pane_vc_g8

0x102d,	// (0x000420f9) input_focus_pane_vc_g9

0x08ed,	// (0x000419b9) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00050738) input_focus_pane_vc_g

0x9aa3,	// (0x0004ab6f) data_form_pane_vc_ParamLimits

0x9aa3,	// (0x0004ab6f) data_form_pane_vc

0x9aaf,	// (0x0004ab7b) form_field_data_pane_vc_g1

0xb8c2,	// (0x0004c98e) form_field_data_pane_vc_t1_ParamLimits

0xb8c2,	// (0x0004c98e) form_field_data_pane_vc_t1

0x0f95,	// (0x00042061) input_focus_pane_vc_ParamLimits

0x0f95,	// (0x00042061) input_focus_pane_vc

0xb8dc,	// (0x0004c9a8) button_value_adjust_pane_cp3_vc

0xb8e4,	// (0x0004c9b0) button_value_adjust_pane_cp5_vc

0xb8ec,	// (0x0004c9b8) form_field_data_pane_vc_ParamLimits

0xb8ec,	// (0x0004c9b8) form_field_data_pane_vc

0xb907,	// (0x0004c9d3) form_field_data_pane_vc_cp2

0xb90f,	// (0x0004c9db) form_field_data_wide_pane_vc_ParamLimits

0xb90f,	// (0x0004c9db) form_field_data_wide_pane_vc

0xb929,	// (0x0004c9f5) form_field_data_wide_pane_vc_cp2

0xb931,	// (0x0004c9fd) form_field_popup_pane_vc_ParamLimits

0xb931,	// (0x0004c9fd) form_field_popup_pane_vc

0xb94c,	// (0x0004ca18) form_field_popup_wide_pane_vc_ParamLimits

0xb94c,	// (0x0004ca18) form_field_popup_wide_pane_vc

0xb966,	// (0x0004ca32) form_field_slider_pane_vc_ParamLimits

0xb966,	// (0x0004ca32) form_field_slider_pane_vc

0xb979,	// (0x0004ca45) form_field_slider_wide_pane_vc_ParamLimits

0xb979,	// (0x0004ca45) form_field_slider_wide_pane_vc

0xb98c,	// (0x0004ca58) grid_touch_1_pane_ParamLimits

0xb98c,	// (0x0004ca58) grid_touch_1_pane

0xb998,	// (0x0004ca64) grid_touch_2_pane_ParamLimits

0xb998,	// (0x0004ca64) grid_touch_2_pane

0x9436,	// (0x0004a502) touch_pane_g1_ParamLimits

0x9436,	// (0x0004a502) touch_pane_g1

0xb9b2,	// (0x0004ca7e) cell_app_pane_cp_wide_ParamLimits

0xb9b2,	// (0x0004ca7e) cell_app_pane_cp_wide

0xb9c3,	// (0x0004ca8f) grid_popup_fast_wide_pane_ParamLimits

0xb9c3,	// (0x0004ca8f) grid_popup_fast_wide_pane

0xb9d7,	// (0x0004caa3) scroll_pane_cp19_ParamLimits

0xb9d7,	// (0x0004caa3) scroll_pane_cp19

0x08f7,	// (0x000419c3) bg_popup_window_pane_cp20

0xb9eb,	// (0x0004cab7) listscroll_popup_fast_wide_pane

0xb9f3,	// (0x0004cabf) grid_indicator_nsta_pane

0xba05,	// (0x0004cad1) clock_nsta_pane_g1

0xba0e,	// (0x0004cada) clock_nsta_pane_t1

0xba2a,	// (0x0004caf6) cell_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0004caf6) cell_indicator_nsta_pane

0xba5f,	// (0x0004cb2b) cell_indicator_nsta_pane_g1

0xba6d,	// (0x0004cb39) cell_indicator_nsta_pane_g2

0x0001,

0xfa83,	// (0x00050b4f) cell_indicator_nsta_pane_g

0xba80,	// (0x0004cb4c) clock_nsta_pane_cp

0xba89,	// (0x0004cb55) indicator_nsta_pane_cp

0xba93,	// (0x0004cb5f) nsta_clock_indic_pane_g1

0x098f,	// (0x00041a5b) grid_indicator_pane

0x4394,	// (0x00045460) scroll_pane_cp29

0x6c13,	// (0x00047cdf) indicator_nsta_pane_cp2_ParamLimits

0x6c13,	// (0x00047cdf) indicator_nsta_pane_cp2

0x0953,	// (0x00041a1f) main_apps_wheel_pane

0x9c90,	// (0x0004ad5c) form_midp_field_text_pane_ParamLimits

0x9ddf,	// (0x0004aeab) scroll_bar_cp050_ParamLimits

0xbaec,	// (0x0004cbb8) cell_indicator_pane_ParamLimits

0xbaec,	// (0x0004cbb8) cell_indicator_pane

0xbb04,	// (0x0004cbd0) cell_indicator_pane_g1

0xbb0e,	// (0x0004cbda) grid_wheel_folder_pane_ParamLimits

0xbb0e,	// (0x0004cbda) grid_wheel_folder_pane

0xbb22,	// (0x0004cbee) list_wheel_apps_pane_ParamLimits

0xbb22,	// (0x0004cbee) list_wheel_apps_pane

0xbb35,	// (0x0004cc01) main_apps_wheel_pane_g1_ParamLimits

0xbb35,	// (0x0004cc01) main_apps_wheel_pane_g1

0xbb51,	// (0x0004cc1d) main_apps_wheel_pane_g2_ParamLimits

0xbb51,	// (0x0004cc1d) main_apps_wheel_pane_g2

0x0001,

0xfa9f,	// (0x00050b6b) main_apps_wheel_pane_g_ParamLimits

0xfa9f,	// (0x00050b6b) main_apps_wheel_pane_g

0xbb6d,	// (0x0004cc39) main_apps_wheel_pane_t1_ParamLimits

0xbb6d,	// (0x0004cc39) main_apps_wheel_pane_t1

0xbb96,	// (0x0004cc62) list_wheel_apps_pane_g1

0xbb9e,	// (0x0004cc6a) list_wheel_apps_pane_g2

0xbba6,	// (0x0004cc72) list_wheel_apps_pane_g3

0xbbae,	// (0x0004cc7a) list_wheel_apps_pane_g4

0xbbb8,	// (0x0004cc84) list_wheel_apps_pane_g5

0x0004,

0xfaa4,	// (0x00050b70) list_wheel_apps_pane_g

0x8fdd,	// (0x0004a0a9) navi_icon_text_pane

0x94cf,	// (0x0004a59b) aid_fill_nsta

0xbbd9,	// (0x0004cca5) navi_icon_text_pane_g1

0xbbe5,	// (0x0004ccb1) navi_icon_text_pane_t1

0x8e74,	// (0x00049f40) list_set_graphic_pane_t1_ParamLimits

0x8e74,	// (0x00049f40) list_set_graphic_pane_t1

0xa54c,	// (0x0004b618) popup_midp_note_alarm_window_t6_ParamLimits

0xa54c,	// (0x0004b618) popup_midp_note_alarm_window_t6

0xa55e,	// (0x0004b62a) popup_midp_note_alarm_window_t7_ParamLimits

0xa55e,	// (0x0004b62a) popup_midp_note_alarm_window_t7

0xa570,	// (0x0004b63c) popup_midp_note_alarm_window_t8_ParamLimits

0xa570,	// (0x0004b63c) popup_midp_note_alarm_window_t8

0xa582,	// (0x0004b64e) popup_midp_note_alarm_window_t9_ParamLimits

0xa582,	// (0x0004b64e) popup_midp_note_alarm_window_t9

0xa594,	// (0x0004b660) popup_midp_note_alarm_window_t10_ParamLimits

0xa594,	// (0x0004b660) popup_midp_note_alarm_window_t10

0xa5a6,	// (0x0004b672) popup_midp_note_alarm_window_t11_ParamLimits

0xa5a6,	// (0x0004b672) popup_midp_note_alarm_window_t11

0xa5b8,	// (0x0004b684) scroll_pane_cp17_ParamLimits

0xa5b8,	// (0x0004b684) scroll_pane_cp17

0x76d7,	// (0x000487a3) volume_small_pane_cp_g1

0x7aca,	// (0x00048b96) volume_small_pane_cp_g2

0x7ad3,	// (0x00048b9f) volume_small_pane_cp_g3

0x7adc,	// (0x00048ba8) volume_small_pane_cp_g4

0x7ae5,	// (0x00048bb1) volume_small_pane_cp_g5

0x7aee,	// (0x00048bba) volume_small_pane_cp_g6

0x7af7,	// (0x00048bc3) volume_small_pane_cp_g7

0x7b00,	// (0x00048bcc) volume_small_pane_cp_g8

0x7b09,	// (0x00048bd5) volume_small_pane_cp_g9

0x7b12,	// (0x00048bde) volume_small_pane_cp_g10

0x924a,	// (0x0004a316) midp_ticker_pane_g1_ParamLimits

0x9256,	// (0x0004a322) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00050804) midp_ticker_pane_g_ParamLimits

0x9262,	// (0x0004a32e) midp_ticker_pane_t1_ParamLimits

0x94e5,	// (0x0004a5b1) aid_fill_nsta_2

0x9dcb,	// (0x0004ae97) list_form2_midp_pane

0xaf47,	// (0x0004c013) midp_editing_number_pane_ParamLimits

0xaf56,	// (0x0004c022) midp_ticker_pane_ParamLimits

0xbbf7,	// (0x0004ccc3) form2_midp_field_pane

0xbc1b,	// (0x0004cce7) scroll_pane_cp51

0xbc3b,	// (0x0004cd07) form2_midp_button_pane_ParamLimits

0xbc3b,	// (0x0004cd07) form2_midp_button_pane

0xbc4d,	// (0x0004cd19) form2_midp_content_pane_ParamLimits

0xbc4d,	// (0x0004cd19) form2_midp_content_pane

0xbc67,	// (0x0004cd33) form2_midp_field_choice_group_pane

0xbc6f,	// (0x0004cd3b) form2_midp_field_pane_g1

0xbc77,	// (0x0004cd43) form2_midp_field_pane_g2

0xbc7f,	// (0x0004cd4b) form2_midp_field_pane_g3

0xbc87,	// (0x0004cd53) form2_midp_field_pane_g4

0x0003,

0xfac9,	// (0x00050b95) form2_midp_field_pane_g

0xbc8f,	// (0x0004cd5b) form2_midp_gauge_slider_pane

0xbc97,	// (0x0004cd63) form2_midp_gauge_wait_pane

0xbc9f,	// (0x0004cd6b) form2_midp_image_pane_ParamLimits

0xbc9f,	// (0x0004cd6b) form2_midp_image_pane

0xbcba,	// (0x0004cd86) form2_midp_label_pane_ParamLimits

0xbcba,	// (0x0004cd86) form2_midp_label_pane

0xbcd9,	// (0x0004cda5) form2_midp_label_pane_cp_ParamLimits

0xbcd9,	// (0x0004cda5) form2_midp_label_pane_cp

0xbcfa,	// (0x0004cdc6) form2_midp_string_pane_ParamLimits

0xbcfa,	// (0x0004cdc6) form2_midp_string_pane

0x5ba4,	// (0x00046c70) form2_midp_text_pane_ParamLimits

0x5ba4,	// (0x00046c70) form2_midp_text_pane

0xbd0c,	// (0x0004cdd8) form2_midp_time_pane

0xbd1c,	// (0x0004cde8) input_focus_pane_cp51_ParamLimits

0xbd1c,	// (0x0004cde8) input_focus_pane_cp51

0xbd34,	// (0x0004ce00) form2_midp_label_pane_t1_ParamLimits

0xbd34,	// (0x0004ce00) form2_midp_label_pane_t1

0x5bc7,	// (0x00046c93) form2_mdip_text_pane_t1_ParamLimits

0x5bc7,	// (0x00046c93) form2_mdip_text_pane_t1

0x5be6,	// (0x00046cb2) form2_midp_time_pane_t1

0xbd82,	// (0x0004ce4e) form2_midp_gauge_slider_pane_t1

0xbd94,	// (0x0004ce60) form2_midp_gauge_slider_pane_t2

0xbda6,	// (0x0004ce72) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad2,	// (0x00050b9e) form2_midp_gauge_slider_pane_t

0xbdb8,	// (0x0004ce84) form2_midp_slider_pane

0xbdc4,	// (0x0004ce90) form2_midp_gauge_wait_pane_t1

0xbdd2,	// (0x0004ce9e) form2_midp_wait_pane_ParamLimits

0xbdd2,	// (0x0004ce9e) form2_midp_wait_pane

0xbdfd,	// (0x0004cec9) list_single_2graphic_pane_cp4_ParamLimits

0xbdfd,	// (0x0004cec9) list_single_2graphic_pane_cp4

0x9b0c,	// (0x0004abd8) list_single_midp_graphic_pane_cp_ParamLimits

0x9b0c,	// (0x0004abd8) list_single_midp_graphic_pane_cp

0x08f7,	// (0x000419c3) list_highlight_pane_cp20

0xbe16,	// (0x0004cee2) list_single_2graphic_pane_g1_cp4

0xb3af,	// (0x0004c47b) list_single_2graphic_pane_g2_cp4

0xbe1e,	// (0x0004ceea) list_single_2graphic_pane_t1_cp4

0x0953,	// (0x00041a1f) list_highlight_pane_cp21

0xbe2d,	// (0x0004cef9) list_single_midp_graphic_pane_g4_cp

0xbe3c,	// (0x0004cf08) list_single_midp_graphic_pane_t1_cp

0xbe51,	// (0x0004cf1d) form2_mdip_string_pane_t1_ParamLimits

0xbe51,	// (0x0004cf1d) form2_mdip_string_pane_t1

0x08f7,	// (0x000419c3) bg_wml_button_pane_cp2

0x08ed,	// (0x000419b9) form2_midp_image_pane_g1

0x66a8,	// (0x00047774) list_double_large_graphic_pane_g5_ParamLimits

0x66a8,	// (0x00047774) list_double_large_graphic_pane_g5

0x9174,	// (0x0004a240) midp_form_pane_ParamLimits

0x0953,	// (0x00041a1f) main_apps_wheel_pane_ParamLimits

0x733c,	// (0x00048408) popup_preview_window_ParamLimits

0x733c,	// (0x00048408) popup_preview_window

0x7523,	// (0x000485ef) popup_touch_info_window_ParamLimits

0x7523,	// (0x000485ef) popup_touch_info_window

0x7545,	// (0x00048611) popup_touch_menu_window_ParamLimits

0x7545,	// (0x00048611) popup_touch_menu_window

0x08e3,	// (0x000419af) bg_popup_sub_pane_cp6

0xbeed,	// (0x0004cfb9) list_touch_menu_pane

0xbef5,	// (0x0004cfc1) list_single_touch_menu_pane_ParamLimits

0xbef5,	// (0x0004cfc1) list_single_touch_menu_pane

0xbf0d,	// (0x0004cfd9) list_single_touch_menu_pane_t1

0x0953,	// (0x00041a1f) bg_popup_sub_pane_cp7_ParamLimits

0x0953,	// (0x00041a1f) bg_popup_sub_pane_cp7

0xbf1b,	// (0x0004cfe7) heading_sub_pane

0xbf23,	// (0x0004cfef) list_touch_info_pane_ParamLimits

0xbf23,	// (0x0004cfef) list_touch_info_pane

0xbf32,	// (0x0004cffe) list_single_touch_info_pane_ParamLimits

0xbf32,	// (0x0004cffe) list_single_touch_info_pane

0xbf44,	// (0x0004d010) list_single_touch_info_pane_t1

0xbf52,	// (0x0004d01e) list_single_touch_info_pane_t2

0x0001,

0xfae0,	// (0x00050bac) list_single_touch_info_pane_t

0x916c,	// (0x0004a238) bg_popup_heading_pane_cp

0xbf60,	// (0x0004d02c) heading_sub_pane_t1

0x9a3d,	// (0x0004ab09) bg_popup_preview_window_pane_cp_ParamLimits

0x9a3d,	// (0x0004ab09) bg_popup_preview_window_pane_cp

0xbf1b,	// (0x0004cfe7) heading_preview_pane

0xbf23,	// (0x0004cfef) list_preview_pane_ParamLimits

0xbf23,	// (0x0004cfef) list_preview_pane

0xbf6e,	// (0x0004d03a) popup_preview_window_g1

0xbf32,	// (0x0004cffe) list_single_preview_pane_ParamLimits

0xbf32,	// (0x0004cffe) list_single_preview_pane

0xbf76,	// (0x0004d042) list_single_preview_pane_g1

0xbf7e,	// (0x0004d04a) list_single_preview_pane_t1

0xbf44,	// (0x0004d010) list_single_preview_pane_t2

0x0001,

0xfae5,	// (0x00050bb1) list_single_preview_pane_t

0xbf8c,	// (0x0004d058) bg_popup_heading_pane_cp2_ParamLimits

0xbf8c,	// (0x0004d058) bg_popup_heading_pane_cp2

0xbfa2,	// (0x0004d06e) heading_preview_pane_g1

0xbfaa,	// (0x0004d076) heading_preview_pane_t1_ParamLimits

0xbfaa,	// (0x0004d076) heading_preview_pane_t1

0x09a6,	// (0x00041a72) soft_indicator_pane_t1_ParamLimits

0x0f08,	// (0x00041fd4) scroll_pane_ParamLimits

0x4299,	// (0x00045365) scroll_sc2_left_pane

0x4290,	// (0x0004535c) scroll_sc2_right_pane

0x42b8,	// (0x00045384) scroll_bg_pane_g1_ParamLimits

0x42cd,	// (0x00045399) scroll_bg_pane_g2_ParamLimits

0x42e5,	// (0x000453b1) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0005078f) scroll_bg_pane_g_ParamLimits

0x42b8,	// (0x00045384) scroll_handle_pane_g1_ParamLimits

0x4307,	// (0x000453d3) scroll_handle_pane_g2_ParamLimits

0x42e5,	// (0x000453b1) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00050796) scroll_handle_pane_g_ParamLimits

0x6f81,	// (0x0004804d) popup_choice_list_window_ParamLimits

0x6f81,	// (0x0004804d) popup_choice_list_window

0x9913,	// (0x0004a9df) choice_list_pane

0x9995,	// (0x0004aa61) cell_toolbar_pane_t1

0x99bd,	// (0x0004aa89) toolbar_button_pane_ParamLimits

0xaa82,	// (0x0004bb4e) ai_gene_pane_1_t2_ParamLimits

0xaa82,	// (0x0004bb4e) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x000509be) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x000509be) ai_gene_pane_1_t

0xbfc7,	// (0x0004d093) scroll_sc2_left_pane_g1

0xbfc7,	// (0x0004d093) scroll_sc2_right_pane_g1

0x9493,	// (0x0004a55f) bg_popup_sub_pane_cp10

0xbfd1,	// (0x0004d09d) list_choice_list_pane

0xbfea,	// (0x0004d0b6) list_single_choice_list_pane_ParamLimits

0xbfea,	// (0x0004d0b6) list_single_choice_list_pane

0xc002,	// (0x0004d0ce) list_single_choice_list_pane_g1

0x10f6,	// (0x000421c2) list_single_choice_list_pane_t1_ParamLimits

0x10f6,	// (0x000421c2) list_single_choice_list_pane_t1

0xc00a,	// (0x0004d0d6) choice_list_pane_g1

0xc012,	// (0x0004d0de) choice_list_pane_t1

0x08e3,	// (0x000419af) input_focus_pane_cp11

0x4094,	// (0x00045160) title_pane_stacon_g2_ParamLimits

0x4094,	// (0x00045160) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00050775) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00050775) title_pane_stacon_g

0x916c,	// (0x0004a238) cursor_press_pane

0x703b,	// (0x00048107) popup_fep_hwr_window_ParamLimits

0x703b,	// (0x00048107) popup_fep_hwr_window

0x70c5,	// (0x00048191) popup_fep_vkb_window_ParamLimits

0x70c5,	// (0x00048191) popup_fep_vkb_window

0xc020,	// (0x0004d0ec) cursor_press_pane_g1

0x0002,

0xfb0e,	// (0x00050bda) fep_vkb_side_pane_g_ParamLimits

0x7b54,	// (0x00048c20) fep_hwr_candidate_pane_ParamLimits

0x7b54,	// (0x00048c20) fep_hwr_candidate_pane

0x7b7e,	// (0x00048c4a) fep_hwr_side_pane_ParamLimits

0x7b7e,	// (0x00048c4a) fep_hwr_side_pane

0x7ba0,	// (0x00048c6c) fep_hwr_top_pane_ParamLimits

0x7ba0,	// (0x00048c6c) fep_hwr_top_pane

0x7bb8,	// (0x00048c84) fep_hwr_write_pane_ParamLimits

0x7bb8,	// (0x00048c84) fep_hwr_write_pane

0xfb0e,	// (0x00050bda) fep_vkb_side_pane_g

0xc028,	// (0x0004d0f4) fep_hwr_top_pane_g1

0xc03a,	// (0x0004d106) fep_hwr_top_pane_g2

0x7be4,	// (0x00048cb0) fep_hwr_top_pane_g3

0x0002,

0xfaea,	// (0x00050bb6) fep_hwr_top_pane_g

0x7bf9,	// (0x00048cc5) fep_hwr_top_text_pane

0x4401,	// (0x000454cd) fep_hwr_top_text_pane_g1

0xc070,	// (0x0004d13c) fep_hwr_top_text_pane_t1

0x7d03,	// (0x00048dcf) fep_hwr_candidate_pane_g1

0xc2bb,	// (0x0004d387) fep_vkb_keypad_pane_g3_ParamLimits

0xc2bb,	// (0x0004d387) fep_vkb_keypad_pane_g3

0xc2e7,	// (0x0004d3b3) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e7,	// (0x0004d3b3) fep_vkb_keypad_pane_g4

0xc35e,	// (0x0004d42a) fep_vkb_bottom_pane_g2_ParamLimits

0xc35e,	// (0x0004d42a) fep_vkb_bottom_pane_g2

0x0001,

0xfb15,	// (0x00050be1) fep_vkb_bottom_pane_g_ParamLimits

0xfb15,	// (0x00050be1) fep_vkb_bottom_pane_g

0xbfc7,	// (0x0004d093) cell_vkb_side_pane_g2

0x0001,

0xfb1f,	// (0x00050beb) cell_vkb_side_pane_g

0xc3e9,	// (0x0004d4b5) cell_vkb_side_pane_t1

0xc3f7,	// (0x0004d4c3) cell_vkb_side_pane_t1_copy1

0xbfc7,	// (0x0004d093) bg_fep_vkb_candidate_pane_g2

0xc53b,	// (0x0004d607) cell_vkb_candidate_pane_ParamLimits

0xc07e,	// (0x0004d14a) aid_size_cell_vkb_ParamLimits

0xc07e,	// (0x0004d14a) aid_size_cell_vkb

0xc53b,	// (0x0004d607) cell_vkb_candidate_pane

0x7d1d,	// (0x00048de9) bg_popup_fep_shadow_pane_g1

0xc110,	// (0x0004d1dc) fep_vkb_bottom_pane_ParamLimits

0xc110,	// (0x0004d1dc) fep_vkb_bottom_pane

0xc14d,	// (0x0004d219) fep_vkb_candidate_pane_ParamLimits

0xc14d,	// (0x0004d219) fep_vkb_candidate_pane

0xc169,	// (0x0004d235) fep_vkb_keypad_pane_ParamLimits

0xc169,	// (0x0004d235) fep_vkb_keypad_pane

0xc19c,	// (0x0004d268) fep_vkb_side_pane_ParamLimits

0xc19c,	// (0x0004d268) fep_vkb_side_pane

0xc1d8,	// (0x0004d2a4) fep_vkb_top_pane_ParamLimits

0xc1d8,	// (0x0004d2a4) fep_vkb_top_pane

0xc214,	// (0x0004d2e0) fep_vkb_top_pane_g1_ParamLimits

0xc214,	// (0x0004d2e0) fep_vkb_top_pane_g1

0xc223,	// (0x0004d2ef) fep_vkb_top_pane_g2_ParamLimits

0xc223,	// (0x0004d2ef) fep_vkb_top_pane_g2

0xc232,	// (0x0004d2fe) fep_vkb_top_pane_g3_ParamLimits

0xc232,	// (0x0004d2fe) fep_vkb_top_pane_g3

0x0003,

0xfb05,	// (0x00050bd1) fep_vkb_top_pane_g_ParamLimits

0xfb05,	// (0x00050bd1) fep_vkb_top_pane_g

0xc250,	// (0x0004d31c) fep_vkb_top_text_pane_ParamLimits

0xc250,	// (0x0004d31c) fep_vkb_top_text_pane

0xc261,	// (0x0004d32d) fep_vkb_side_pane_g1_ParamLimits

0xc261,	// (0x0004d32d) fep_vkb_side_pane_g1

0xc2aa,	// (0x0004d376) grid_vkb_side_pane_ParamLimits

0xc2aa,	// (0x0004d376) grid_vkb_side_pane

0x7d25,	// (0x00048df1) bg_popup_fep_shadow_pane_g2

0x7d2e,	// (0x00048dfa) bg_popup_fep_shadow_pane_g3

0x7d36,	// (0x00048e02) bg_popup_fep_shadow_pane_g4

0x7d3f,	// (0x00048e0b) bg_popup_fep_shadow_pane_g5

0x7d49,	// (0x00048e15) bg_popup_fep_shadow_pane_g6

0x7d51,	// (0x00048e1d) bg_popup_fep_shadow_pane_g7

0x100d,	// (0x000420d9) bg_popup_fep_shadow_pane_g8

0xc309,	// (0x0004d3d5) grid_vkb_keypad_number_pane_ParamLimits

0xc309,	// (0x0004d3d5) grid_vkb_keypad_number_pane

0xc31d,	// (0x0004d3e9) grid_vkb_keypad_pane_ParamLimits

0xc31d,	// (0x0004d3e9) grid_vkb_keypad_pane

0xc343,	// (0x0004d40f) fep_vkb_bottom_pane_g1_ParamLimits

0xc343,	// (0x0004d40f) fep_vkb_bottom_pane_g1

0xc36c,	// (0x0004d438) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc36c,	// (0x0004d438) grid_vkb_keypad_bottom_left_pane

0xc381,	// (0x0004d44d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc381,	// (0x0004d44d) grid_vkb_keypad_bottom_right_pane

0xc396,	// (0x0004d462) fep_vkb_top_text_pane_g1

0xc3b1,	// (0x0004d47d) fep_vkb_top_text_pane_t1

0xc3c6,	// (0x0004d492) cell_vkb_side_pane_ParamLimits

0xc3c6,	// (0x0004d492) cell_vkb_side_pane

0xbfc7,	// (0x0004d093) cell_vkb_side_pane_g1

0xc405,	// (0x0004d4d1) cell_vkb_keypad_pane_ParamLimits

0xc405,	// (0x0004d4d1) cell_vkb_keypad_pane

0xc492,	// (0x0004d55e) cell_vkb_keypad_pane_g1

0x0008,

0xfb32,	// (0x00050bfe) bg_popup_fep_shadow_pane_g

0xbfc7,	// (0x0004d093) cell_hwr_side_pane_g1

0xbfc7,	// (0x0004d093) cell_hwr_side_pane_g2

0xc49c,	// (0x0004d568) cell_vkb_keypad_pane_t1

0xc4aa,	// (0x0004d576) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4aa,	// (0x0004d576) cell_vkb_keypad_bottom_left_pane

0xc4c7,	// (0x0004d593) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c7,	// (0x0004d593) cell_vkb_keypad_bottom_right_pane

0xbfc7,	// (0x0004d093) cell_vkb_keypad_bottom_left_pane_g1

0xbfc7,	// (0x0004d093) cell_vkb_keypad_bottom_right_pane_g1

0xc500,	// (0x0004d5cc) cell_vkb_keypad_number_pane_ParamLimits

0xc500,	// (0x0004d5cc) cell_vkb_keypad_number_pane

0xc51f,	// (0x0004d5eb) cell_vkb_keypad_number_pane_g1

0xc529,	// (0x0004d5f5) cell_vkb_keypad_number_pane_g2

0xc532,	// (0x0004d5fe) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb24,	// (0x00050bf0) cell_vkb_keypad_number_pane_g

0xc49c,	// (0x0004d568) cell_vkb_keypad_number_pane_t1

0xc55c,	// (0x0004d628) fep_vkb_candidate_pane_g1

0x0001,

0xfb1f,	// (0x00050beb) cell_hwr_side_pane_g

0xc575,	// (0x0004d641) cell_hwr_side_pane_t1

0x7d63,	// (0x00048e2f) cell_hwr_side_pane_t1_copy1

0xc242,	// (0x0004d30e) cell_hwr_candidate_pane_g1

0x7d71,	// (0x00048e3d) cell_hwr_candidate_pane_t1

0xbfc7,	// (0x0004d093) cell_vkb_candidate_pane_g2

0xc5fb,	// (0x0004d6c7) cell_vkb_candidate_pane_t1

0x7b1b,	// (0x00048be7) bg_popup_fep_shadow_pane_ParamLimits

0x7b1b,	// (0x00048be7) bg_popup_fep_shadow_pane

0x22f1,	// (0x000433bd) bg_fep_hwr_top_pane_g4

0xc04c,	// (0x0004d118) bg_hwr_side_pane_g1_ParamLimits

0xc04c,	// (0x0004d118) bg_hwr_side_pane_g1

0x7c37,	// (0x00048d03) cell_hwr_side_pane_ParamLimits

0x7c37,	// (0x00048d03) cell_hwr_side_pane

0x7c74,	// (0x00048d40) fep_hwr_write_pane_g1_ParamLimits

0x7c74,	// (0x00048d40) fep_hwr_write_pane_g1

0x7c81,	// (0x00048d4d) fep_hwr_write_pane_g2_ParamLimits

0x7c81,	// (0x00048d4d) fep_hwr_write_pane_g2

0x7c8e,	// (0x00048d5a) fep_hwr_write_pane_g3_ParamLimits

0x7c8e,	// (0x00048d5a) fep_hwr_write_pane_g3

0x7c9c,	// (0x00048d68) fep_hwr_write_pane_g4_ParamLimits

0x7c9c,	// (0x00048d68) fep_hwr_write_pane_g4

0x0005,

0xfaf1,	// (0x00050bbd) fep_hwr_write_pane_g_ParamLimits

0xfaf1,	// (0x00050bbd) fep_hwr_write_pane_g

0x22f1,	// (0x000433bd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x22f1,	// (0x000433bd) bg_fep_hwr_candidate_pane_g2

0x7cb1,	// (0x00048d7d) cell_hwr_candidate_pane_ParamLimits

0x7cb1,	// (0x00048d7d) cell_hwr_candidate_pane

0x7d03,	// (0x00048dcf) fep_hwr_candidate_pane_g1_ParamLimits

0xc0ac,	// (0x0004d178) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0ac,	// (0x0004d178) bg_popup_fep_shadow_pane_cp2

0xc242,	// (0x0004d30e) fep_vkb_top_pane_g4_ParamLimits

0xc242,	// (0x0004d30e) fep_vkb_top_pane_g4

0xc288,	// (0x0004d354) fep_vkb_side_pane_g2_ParamLimits

0xc288,	// (0x0004d354) fep_vkb_side_pane_g2

0x531b,	// (0x000463e7) list_setting_pane_t4_ParamLimits

0x531b,	// (0x000463e7) list_setting_pane_t4

0x53b7,	// (0x00046483) list_setting_number_pane_t5_ParamLimits

0x53b7,	// (0x00046483) list_setting_number_pane_t5

0x6a5d,	// (0x00047b29) list_double_heading_pane_cp2_ParamLimits

0x6a5d,	// (0x00047b29) list_double_heading_pane_cp2

0xc609,	// (0x0004d6d5) list_double_heading_pane_g1_cp2_ParamLimits

0xc609,	// (0x0004d6d5) list_double_heading_pane_g1_cp2

0xc615,	// (0x0004d6e1) list_double_heading_pane_g2_cp2_ParamLimits

0xc615,	// (0x0004d6e1) list_double_heading_pane_g2_cp2

0xc629,	// (0x0004d6f5) list_double_heading_pane_t1_cp2_ParamLimits

0xc629,	// (0x0004d6f5) list_double_heading_pane_t1_cp2

0xc63f,	// (0x0004d70b) list_double_heading_pane_t2_cp2_ParamLimits

0xc63f,	// (0x0004d70b) list_double_heading_pane_t2_cp2

0x08db,	// (0x000419a7) aid_value_unit2

0x6181,	// (0x0004724d) popup_preview_fixed_window

0x0a86,	// (0x00041b52) bg_popup_preview_window_pane_cp02

0xc651,	// (0x0004d71d) list_preview_fixed_pane

0xc697,	// (0x0004d763) list_empty_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_empty_pane_fp

0xc697,	// (0x0004d763) list_single_cale_day_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_single_cale_day_pane_fp

0xc697,	// (0x0004d763) list_single_graphic_heading_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_single_graphic_heading_pane_fp

0xc697,	// (0x0004d763) list_single_graphic_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_single_graphic_pane_fp

0xc697,	// (0x0004d763) list_single_heading_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_single_heading_pane_fp

0xc697,	// (0x0004d763) list_single_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_single_pane_fp

0xc6b0,	// (0x0004d77c) list_single_pane_fp_g1_ParamLimits

0xc6b0,	// (0x0004d77c) list_single_pane_fp_g1

0xc609,	// (0x0004d6d5) list_single_pane_fp_g2_ParamLimits

0xc609,	// (0x0004d6d5) list_single_pane_fp_g2

0xc615,	// (0x0004d6e1) list_single_pane_fp_g3_ParamLimits

0xc615,	// (0x0004d6e1) list_single_pane_fp_g3

0xc6bc,	// (0x0004d788) list_single_pane_fp_g4_ParamLimits

0xc6bc,	// (0x0004d788) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x00050c1f) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x00050c1f) list_single_pane_fp_g

0x5bf9,	// (0x00046cc5) list_single_pane_fp_t1_ParamLimits

0x5bf9,	// (0x00046cc5) list_single_pane_fp_t1

0x5c10,	// (0x00046cdc) list_single_graphic_pane_fp_g1_ParamLimits

0x5c10,	// (0x00046cdc) list_single_graphic_pane_fp_g1

0xc6b0,	// (0x0004d77c) list_single_graphic_pane_fp_g2_ParamLimits

0xc6b0,	// (0x0004d77c) list_single_graphic_pane_fp_g2

0xc609,	// (0x0004d6d5) list_single_graphic_pane_fp_g3_ParamLimits

0xc609,	// (0x0004d6d5) list_single_graphic_pane_fp_g3

0xc615,	// (0x0004d6e1) list_single_graphic_pane_fp_g4_ParamLimits

0xc615,	// (0x0004d6e1) list_single_graphic_pane_fp_g4

0xc6bc,	// (0x0004d788) list_single_graphic_pane_fp_g5_ParamLimits

0xc6bc,	// (0x0004d788) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x00050c28) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x00050c28) list_single_graphic_pane_fp_g

0x5c1c,	// (0x00046ce8) list_single_graphic_pane_fp_t1_ParamLimits

0x5c1c,	// (0x00046ce8) list_single_graphic_pane_fp_t1

0x5c10,	// (0x00046cdc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5c10,	// (0x00046cdc) list_single_graphic_heading_pane_fp_g1

0xc6b0,	// (0x0004d77c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6b0,	// (0x0004d77c) list_single_graphic_heading_pane_fp_g2

0xc609,	// (0x0004d6d5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc609,	// (0x0004d6d5) list_single_graphic_heading_pane_fp_g3

0xc615,	// (0x0004d6e1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc615,	// (0x0004d6e1) list_single_graphic_heading_pane_fp_g4

0xc6bc,	// (0x0004d788) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6bc,	// (0x0004d788) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x00050c28) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x00050c28) list_single_graphic_heading_pane_fp_g

0x5c32,	// (0x00046cfe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5c32,	// (0x00046cfe) list_single_graphic_heading_pane_fp_t1

0x5c48,	// (0x00046d14) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5c48,	// (0x00046d14) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x00050c33) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x00050c33) list_single_graphic_heading_pane_fp_t

0x5c5a,	// (0x00046d26) list_single_cale_day_pane_fp_g1_ParamLimits

0x5c5a,	// (0x00046d26) list_single_cale_day_pane_fp_g1

0xc6c8,	// (0x0004d794) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c8,	// (0x0004d794) list_single_cale_day_pane_fp_g2

0x7d8f,	// (0x00048e5b) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d8f,	// (0x00048e5b) list_single_cale_day_pane_fp_g3

0x7db7,	// (0x00048e83) list_single_cale_day_pane_fp_g4_ParamLimits

0x7db7,	// (0x00048e83) list_single_cale_day_pane_fp_g4

0x7ddb,	// (0x00048ea7) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ddb,	// (0x00048ea7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x00050c38) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x00050c38) list_single_cale_day_pane_fp_g

0x5c92,	// (0x00046d5e) list_single_cale_day_pane_fp_t1_ParamLimits

0x5c92,	// (0x00046d5e) list_single_cale_day_pane_fp_t1

0x5cb8,	// (0x00046d84) list_single_cale_day_pane_fp_t2_ParamLimits

0x5cb8,	// (0x00046d84) list_single_cale_day_pane_fp_t2

0x5cd1,	// (0x00046d9d) list_single_cale_day_pane_fp_t3_ParamLimits

0x5cd1,	// (0x00046d9d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x00050c43) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x00050c43) list_single_cale_day_pane_fp_t

0xc6b0,	// (0x0004d77c) list_empty_pane_fp_g1_ParamLimits

0xc6b0,	// (0x0004d77c) list_empty_pane_fp_g1

0x5cea,	// (0x00046db6) list_empty_pane_fp_t1

0x5cf8,	// (0x00046dc4) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x00050c4a) list_empty_pane_fp_t

0xc6b0,	// (0x0004d77c) list_single_heading_pane_fp_g1_ParamLimits

0xc6b0,	// (0x0004d77c) list_single_heading_pane_fp_g1

0xc609,	// (0x0004d6d5) list_single_heading_pane_fp_g2_ParamLimits

0xc609,	// (0x0004d6d5) list_single_heading_pane_fp_g2

0xc615,	// (0x0004d6e1) list_single_heading_pane_fp_g3_ParamLimits

0xc615,	// (0x0004d6e1) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x00050c4f) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00050c4f) list_single_heading_pane_fp_g

0x5d06,	// (0x00046dd2) list_single_heading_pane_fp_t1_ParamLimits

0x5d06,	// (0x00046dd2) list_single_heading_pane_fp_t1

0x5d18,	// (0x00046de4) list_single_heading_pane_fp_t2_ParamLimits

0x5d18,	// (0x00046de4) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x00050c56) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x00050c56) list_single_heading_pane_fp_t

0x3edb,	// (0x00044fa7) aid_size_cell_fast

0x0a69,	// (0x00041b35) soft_indicator_pane_cp1_t1

0x3f18,	// (0x00044fe4) cell_app_pane_cp2_ParamLimits

0x3f18,	// (0x00044fe4) cell_app_pane_cp2

0x7b3d,	// (0x00048c09) fep_hwr_candidate_drop_down_list_pane

0x22ff,	// (0x000433cb) fep_hwr_candidate_pane_g3_ParamLimits

0x22ff,	// (0x000433cb) fep_hwr_candidate_pane_g3

0x230c,	// (0x000433d8) fep_hwr_candidate_pane_g4_ParamLimits

0x230c,	// (0x000433d8) fep_hwr_candidate_pane_g4

0x0002,

0xfafe,	// (0x00050bca) fep_hwr_candidate_pane_g_ParamLimits

0xfafe,	// (0x00050bca) fep_hwr_candidate_pane_g

0xc13c,	// (0x0004d208) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc13c,	// (0x0004d208) fep_vkb_candidate_drop_down_list_pane

0xc564,	// (0x0004d630) fep_vkb_candidate_pane_g3

0xc56c,	// (0x0004d638) fep_vkb_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00050bf7) fep_vkb_candidate_pane_g

0xc242,	// (0x0004d30e) cell_hwr_candidate_pane_g1_ParamLimits

0xc583,	// (0x0004d64f) cell_hwr_candidate_pane_g3_ParamLimits

0xc583,	// (0x0004d64f) cell_hwr_candidate_pane_g3

0xc5a4,	// (0x0004d670) cell_hwr_candidate_pane_g4_ParamLimits

0xc5a4,	// (0x0004d670) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x00050c11) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x00050c11) cell_hwr_candidate_pane_g

0xc5c5,	// (0x0004d691) cell_vkb_candidate_pane_g3_ParamLimits

0xc5c5,	// (0x0004d691) cell_vkb_candidate_pane_g3

0xc5e0,	// (0x0004d6ac) cell_vkb_candidate_pane_g4_ParamLimits

0xc5e0,	// (0x0004d6ac) cell_vkb_candidate_pane_g4

0xc6d4,	// (0x0004d7a0) cell_app_pane_cp2_g1_ParamLimits

0xc6d4,	// (0x0004d7a0) cell_app_pane_cp2_g1

0xc6f2,	// (0x0004d7be) cell_app_pane_cp2_g2_ParamLimits

0xc6f2,	// (0x0004d7be) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x00050c5b) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x00050c5b) cell_app_pane_cp2_g

0xc6fe,	// (0x0004d7ca) cell_app_pane_cp2_t1_ParamLimits

0xc6fe,	// (0x0004d7ca) cell_app_pane_cp2_t1

0x0f95,	// (0x00042061) grid_highlight_pane_cp1_ParamLimits

0x0f95,	// (0x00042061) grid_highlight_pane_cp1

0x7dff,	// (0x00048ecb) cell_hwr_candidate_pane_cp1_ParamLimits

0x7dff,	// (0x00048ecb) cell_hwr_candidate_pane_cp1

0xc242,	// (0x0004d30e) fep_hwr_candidate_drop_down_list_pane_g1

0xc710,	// (0x0004d7dc) fep_hwr_candidate_drop_down_list_pane_g2

0xc71d,	// (0x0004d7e9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x00050c60) fep_hwr_candidate_drop_down_list_pane_g

0x7e23,	// (0x00048eef) fep_hwr_candidate_drop_down_list_scroll_pane

0x7e2c,	// (0x00048ef8) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7e2c,	// (0x00048ef8) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7e39,	// (0x00048f05) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7e39,	// (0x00048f05) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7e46,	// (0x00048f12) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7e46,	// (0x00048f12) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5c5,	// (0x0004d691) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5c5,	// (0x0004d691) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5e0,	// (0x0004d6ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5e0,	// (0x0004d6ac) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7e53,	// (0x00048f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e53,	// (0x00048f1f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7e6e,	// (0x00048f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e6e,	// (0x00048f3a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7e89,	// (0x00048f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e89,	// (0x00048f55) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x00050c67) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x00050c67) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc72a,	// (0x0004d7f6) cell_vkb_candidate_pane_cp1_ParamLimits

0xc72a,	// (0x0004d7f6) cell_vkb_candidate_pane_cp1

0xc242,	// (0x0004d30e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc242,	// (0x0004d30e) fep_vkb_candidate_drop_down_list_pane_g1

0xc710,	// (0x0004d7dc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc710,	// (0x0004d7dc) fep_vkb_candidate_drop_down_list_pane_g2

0xc71d,	// (0x0004d7e9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc71d,	// (0x0004d7e9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x00050c60) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb94,	// (0x00050c60) fep_vkb_candidate_drop_down_list_pane_g

0xc750,	// (0x0004d81c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc750,	// (0x0004d81c) fep_vkb_candidate_drop_down_list_scroll_pane

0xc75d,	// (0x0004d829) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc75d,	// (0x0004d829) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc76a,	// (0x0004d836) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc76a,	// (0x0004d836) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc776,	// (0x0004d842) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc776,	// (0x0004d842) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc583,	// (0x0004d64f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc583,	// (0x0004d64f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5a4,	// (0x0004d670) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5a4,	// (0x0004d670) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc782,	// (0x0004d84e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc782,	// (0x0004d84e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7a3,	// (0x0004d86f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7a3,	// (0x0004d86f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7c4,	// (0x0004d890) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7c4,	// (0x0004d890) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x00050c78) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x00050c78) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x62a1,	// (0x0004736d) title_pane_g1_ParamLimits

0x62ae,	// (0x0004737a) title_pane_g2_ParamLimits

0xf529,	// (0x000505f5) title_pane_g_ParamLimits

0x43f9,	// (0x000454c5) aid_call2_pane

0x43f1,	// (0x000454bd) aid_call_pane

0x4401,	// (0x000454cd) popup_clock_analogue_window_g1

0x4401,	// (0x000454cd) popup_clock_analogue_window_g2

0x6a3e,	// (0x00047b0a) popup_clock_analogue_window_g3

0x6a47,	// (0x00047b13) popup_clock_analogue_window_g4

0x08ed,	// (0x000419b9) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000507a4) popup_clock_analogue_window_g

0x6a4f,	// (0x00047b1b) popup_clock_analogue_window_t1

0x6aad,	// (0x00047b79) clock_digital_number_pane_ParamLimits

0x6aad,	// (0x00047b79) clock_digital_number_pane

0x6ab9,	// (0x00047b85) clock_digital_number_pane_cp02_ParamLimits

0x6ab9,	// (0x00047b85) clock_digital_number_pane_cp02

0x6ac5,	// (0x00047b91) clock_digital_number_pane_cp03_ParamLimits

0x6ac5,	// (0x00047b91) clock_digital_number_pane_cp03

0x6ad1,	// (0x00047b9d) clock_digital_number_pane_cp04_ParamLimits

0x6ad1,	// (0x00047b9d) clock_digital_number_pane_cp04

0x6add,	// (0x00047ba9) clock_digital_separator_pane_ParamLimits

0x6add,	// (0x00047ba9) clock_digital_separator_pane

0x6ae9,	// (0x00047bb5) popup_clock_digital_window_t1_ParamLimits

0x6ae9,	// (0x00047bb5) popup_clock_digital_window_t1

0x08ed,	// (0x000419b9) clock_digital_number_pane_g1

0x08ed,	// (0x000419b9) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000507af) clock_digital_number_pane_g

0x08ed,	// (0x000419b9) clock_digital_separator_pane_g1

0x08ed,	// (0x000419b9) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000507af) clock_digital_separator_pane_g

0x94cf,	// (0x0004a59b) aid_fill_nsta_ParamLimits

0x961b,	// (0x0004a6e7) indicator_nsta_pane_ParamLimits

0x97ac,	// (0x0004a878) popup_clock_analogue_window

0x97ac,	// (0x0004a878) popup_clock_digital_window

0xb9f3,	// (0x0004cabf) grid_indicator_nsta_pane_ParamLimits

0xba1c,	// (0x0004cae8) clock_nsta_pane_t2

0x0001,

0xfa7e,	// (0x00050b4a) clock_nsta_pane_t

0x69a7,	// (0x00047a73) aid_size_max_handle

0x69b1,	// (0x00047a7d) aid_size_min_handle

0x916c,	// (0x0004a238) editor_scroll_pane

0xc7df,	// (0x0004d8ab) ex_editor_pane

0x10d1,	// (0x0004219d) scroll_pane_cp13

0x0f34,	// (0x00042000) scroll_pane_cp14

0x444f,	// (0x0004551b) scroll_pane_cp36

0x6a73,	// (0x00047b3f) list_single_graphic_hl_pane_cp2_ParamLimits

0x6a73,	// (0x00047b3f) list_single_graphic_hl_pane_cp2

0x791f,	// (0x000489eb) list_single_graphic_hl_pane_ParamLimits

0x791f,	// (0x000489eb) list_single_graphic_hl_pane

0x5d2e,	// (0x00046dfa) aid_size_min_hl_cp1

0xc7e7,	// (0x0004d8b3) list_highlight_pane_cp34_ParamLimits

0xc7e7,	// (0x0004d8b3) list_highlight_pane_cp34

0xc7f8,	// (0x0004d8c4) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f8,	// (0x0004d8c4) list_single_graphic_hl_pane_g1

0x5d37,	// (0x00046e03) list_single_graphic_hl_pane_g2_ParamLimits

0x5d37,	// (0x00046e03) list_single_graphic_hl_pane_g2

0x5d37,	// (0x00046e03) list_single_graphic_hl_pane_g3_ParamLimits

0x5d37,	// (0x00046e03) list_single_graphic_hl_pane_g3

0x75ba,	// (0x00048686) list_single_graphic_hl_pane_g4_ParamLimits

0x75ba,	// (0x00048686) list_single_graphic_hl_pane_g4

0x5d43,	// (0x00046e0f) list_single_graphic_hl_pane_g5_ParamLimits

0x5d43,	// (0x00046e0f) list_single_graphic_hl_pane_g5

0x0004,

0xfbbd,	// (0x00050c89) list_single_graphic_hl_pane_g_ParamLimits

0xfbbd,	// (0x00050c89) list_single_graphic_hl_pane_g

0x5d57,	// (0x00046e23) list_single_graphic_hl_pane_t1_ParamLimits

0x5d57,	// (0x00046e23) list_single_graphic_hl_pane_t1

0xc805,	// (0x0004d8d1) aid_size_min_hl_cp2

0xc80e,	// (0x0004d8da) list_highlight_pane_cp34_cp2_ParamLimits

0xc80e,	// (0x0004d8da) list_highlight_pane_cp34_cp2

0xc7f8,	// (0x0004d8c4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f8,	// (0x0004d8c4) list_single_graphic_hl_pane_g1_cp2

0xc81b,	// (0x0004d8e7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc81b,	// (0x0004d8e7) list_single_graphic_hl_pane_g2_cp2

0xc827,	// (0x0004d8f3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc827,	// (0x0004d8f3) list_single_graphic_hl_pane_g3_cp2

0xc835,	// (0x0004d901) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc835,	// (0x0004d901) list_single_graphic_hl_pane_g4_cp2

0xc841,	// (0x0004d90d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc841,	// (0x0004d90d) list_single_graphic_hl_pane_g5_cp2

0x6e27,	// (0x00047ef3) control_pane_g4_ParamLimits

0x6e27,	// (0x00047ef3) control_pane_g4

0x9493,	// (0x0004a55f) bg_popup_sub_pane_cp10_ParamLimits

0xbfd1,	// (0x0004d09d) list_choice_list_pane_ParamLimits

0xbfe0,	// (0x0004d0ac) scroll_pane_cp23

0x0a86,	// (0x00041b52) bg_popup_preview_window_pane_cp02_ParamLimits

0xc651,	// (0x0004d71d) list_preview_fixed_pane_ParamLimits

0xc667,	// (0x0004d733) list_preview_fixed_pane_cp_ParamLimits

0xc667,	// (0x0004d733) list_preview_fixed_pane_cp

0xc673,	// (0x0004d73f) popup_preview_fixed_window_g1_ParamLimits

0xc673,	// (0x0004d73f) popup_preview_fixed_window_g1

0xc67f,	// (0x0004d74b) popup_preview_fixed_window_g2_ParamLimits

0xc67f,	// (0x0004d74b) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x00050c18) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x00050c18) popup_preview_fixed_window_g

0x687d,	// (0x00047949) aid_navi_side_left_pane_ParamLimits

0x6892,	// (0x0004795e) aid_navi_side_right_pane_ParamLimits

0x68aa,	// (0x00047976) navi_icon_pane_stacon_ParamLimits

0x68be,	// (0x0004798a) navi_navi_pane_stacon_ParamLimits

0x68aa,	// (0x00047976) navi_text_pane_stacon_ParamLimits

0x08e3,	// (0x000419af) main_text_info_pane

0xc86b,	// (0x0004d937) listscroll_text_info_pane

0xc873,	// (0x0004d93f) list_text_info_pane_ParamLimits

0xc873,	// (0x0004d93f) list_text_info_pane

0xc882,	// (0x0004d94e) scroll_pane_cp24_ParamLimits

0xc882,	// (0x0004d94e) scroll_pane_cp24

0xc8a0,	// (0x0004d96c) list_text_info_pane_t1_ParamLimits

0xc8a0,	// (0x0004d96c) list_text_info_pane_t1

0x6fa3,	// (0x0004806f) popup_fast_swap2_window_ParamLimits

0x6fa3,	// (0x0004806f) popup_fast_swap2_window

0xc8c5,	// (0x0004d991) aid_size_cell_fast2

0x08e3,	// (0x000419af) bg_popup_window_pane_cp17

0x9dff,	// (0x0004aecb) heading_pane_cp2

0x9e07,	// (0x0004aed3) listscroll_fast2_pane

0xc8cf,	// (0x0004d99b) grid_fast2_pane

0xc8d9,	// (0x0004d9a5) listscroll_fast2_pane_g1

0xc8e3,	// (0x0004d9af) listscroll_fast2_pane_g2

0x0001,

0xfbc8,	// (0x00050c94) listscroll_fast2_pane_g

0x10d1,	// (0x0004219d) scroll_pane_cp26

0xc8ed,	// (0x0004d9b9) cell_fast2_pane_ParamLimits

0xc8ed,	// (0x0004d9b9) cell_fast2_pane

0xc904,	// (0x0004d9d0) cell_fast2_pane_g1

0xc90d,	// (0x0004d9d9) cell_fast2_pane_g2

0xc916,	// (0x0004d9e2) cell_fast2_pane_g3

0x0002,

0xfbcd,	// (0x00050c99) cell_fast2_pane_g

0x0cfb,	// (0x00041dc7) grid_highlight_pane_cp9

0x0d10,	// (0x00041ddc) main_eswt_pane_ParamLimits

0x0d10,	// (0x00041ddc) main_eswt_pane

0xc897,	// (0x0004d963) list_single_text_info_pane

0xc91e,	// (0x0004d9ea) eswt_ctrl_button_pane

0xc91e,	// (0x0004d9ea) eswt_ctrl_canvas_pane

0xc926,	// (0x0004d9f2) eswt_ctrl_combo_pane

0xc91e,	// (0x0004d9ea) eswt_ctrl_default_pane

0xc91e,	// (0x0004d9ea) eswt_ctrl_label_pane

0xc92e,	// (0x0004d9fa) eswt_ctrl_wait_pane

0xc936,	// (0x0004da02) eswt_shell_pane

0x08e3,	// (0x000419af) listscroll_eswt_app_pane

0xc956,	// (0x0004da22) popup_eswt_tasktip_window_ParamLimits

0xc956,	// (0x0004da22) popup_eswt_tasktip_window

0x9a3d,	// (0x0004ab09) bg_popup_window_pane_cp18

0xc967,	// (0x0004da33) eswt_control_pane_g1_ParamLimits

0xc967,	// (0x0004da33) eswt_control_pane_g1

0xc974,	// (0x0004da40) eswt_control_pane_g2_ParamLimits

0xc974,	// (0x0004da40) eswt_control_pane_g2

0xc981,	// (0x0004da4d) eswt_control_pane_g3_ParamLimits

0xc981,	// (0x0004da4d) eswt_control_pane_g3

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_ParamLimits

0xc98e,	// (0x0004da5a) eswt_control_pane_g4

0x0003,

0xfbd4,	// (0x00050ca0) eswt_control_pane_g_ParamLimits

0xfbd4,	// (0x00050ca0) eswt_control_pane_g

0x0f95,	// (0x00042061) bg_button_pane_ParamLimits

0x0f95,	// (0x00042061) bg_button_pane

0x0d10,	// (0x00041ddc) common_borders_pane_copy2_ParamLimits

0x0d10,	// (0x00041ddc) common_borders_pane_copy2

0xc99b,	// (0x0004da67) control_button_pane_g1_ParamLimits

0xc99b,	// (0x0004da67) control_button_pane_g1

0xc9a7,	// (0x0004da73) control_button_pane_g2_ParamLimits

0xc9a7,	// (0x0004da73) control_button_pane_g2

0xc9b3,	// (0x0004da7f) control_button_pane_g3_ParamLimits

0xc9b3,	// (0x0004da7f) control_button_pane_g3

0x0002,

0xfbdd,	// (0x00050ca9) control_button_pane_g_ParamLimits

0xfbdd,	// (0x00050ca9) control_button_pane_g

0xc9c7,	// (0x0004da93) control_button_pane_t1

0xc9d5,	// (0x0004daa1) control_button_pane_t2

0x0001,

0xfbe4,	// (0x00050cb0) control_button_pane_t

0x99c9,	// (0x0004aa95) bg_button_pane_g1

0x99d1,	// (0x0004aa9d) bg_button_pane_g2

0x99d9,	// (0x0004aaa5) bg_button_pane_g3

0x99e1,	// (0x0004aaad) bg_button_pane_g4

0x99e9,	// (0x0004aab5) bg_button_pane_g5

0x99f1,	// (0x0004aabd) bg_button_pane_g6

0x99f9,	// (0x0004aac5) bg_button_pane_g7

0x9a01,	// (0x0004aacd) bg_button_pane_g8

0x9a09,	// (0x0004aad5) bg_button_pane_g9

0x0008,

0xf846,	// (0x00050912) bg_button_pane_g

0xbf8c,	// (0x0004d058) common_borders_pane_ParamLimits

0xbf8c,	// (0x0004d058) common_borders_pane

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy1_ParamLimits

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy1

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy1_ParamLimits

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy1

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy1_ParamLimits

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy1

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy1_ParamLimits

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy1

0xbfc7,	// (0x0004d093) bg_eswt_ctrl_canvas_pane_g1

0xbf8c,	// (0x0004d058) common_borders_pane_cp2_ParamLimits

0xbf8c,	// (0x0004d058) common_borders_pane_cp2

0xbf8c,	// (0x0004d058) common_borders_pane_cp3_ParamLimits

0xbf8c,	// (0x0004d058) common_borders_pane_cp3

0xc9e3,	// (0x0004daaf) separator_horizontal_pane

0xc9eb,	// (0x0004dab7) separator_vertical_pane

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy2_ParamLimits

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy2

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy2_ParamLimits

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy2

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy2_ParamLimits

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy2

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy2_ParamLimits

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy2

0x08e3,	// (0x000419af) common_borders_pane_cp4

0xc9f4,	// (0x0004dac0) separator_horizontal_pane_g1

0xc9fd,	// (0x0004dac9) separator_horizontal_pane_g2

0xca06,	// (0x0004dad2) separator_horizontal_pane_g3

0x0002,

0xfbe9,	// (0x00050cb5) separator_horizontal_pane_g

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy3_ParamLimits

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy3

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy3_ParamLimits

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy3

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy3_ParamLimits

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy3

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy3_ParamLimits

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy3

0x08e3,	// (0x000419af) common_borders_pane_cp5

0xca0f,	// (0x0004dadb) separator_vertical_pane_g1

0xca18,	// (0x0004dae4) separator_vertical_pane_g2

0xca21,	// (0x0004daed) separator_vertical_pane_g3

0x0002,

0xfbf0,	// (0x00050cbc) separator_vertical_pane_g

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy4_ParamLimits

0xc967,	// (0x0004da33) eswt_control_pane_g1_copy4

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy4_ParamLimits

0xc974,	// (0x0004da40) eswt_control_pane_g2_copy4

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy4_ParamLimits

0xc981,	// (0x0004da4d) eswt_control_pane_g3_copy4

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy4_ParamLimits

0xc98e,	// (0x0004da5a) eswt_control_pane_g4_copy4

0xca2a,	// (0x0004daf6) eswt_ctrl_combo_button_pane

0xca32,	// (0x0004dafe) eswt_ctrl_input_pane

0xca3a,	// (0x0004db06) popup_choice_list_window_cp70

0xca42,	// (0x0004db0e) eswt_ctrl_input_pane_t1

0x08e3,	// (0x000419af) input_focus_pane_cp70

0xbf8c,	// (0x0004d058) bg_button_pane_cp70_ParamLimits

0xbf8c,	// (0x0004d058) bg_button_pane_cp70

0xca50,	// (0x0004db1c) eswt_ctrl_combo_button_pane_g1

0xca58,	// (0x0004db24) wait_bar_pane_cp70

0x9a3d,	// (0x0004ab09) bg_popup_window_pane_cp70_ParamLimits

0x9a3d,	// (0x0004ab09) bg_popup_window_pane_cp70

0xca60,	// (0x0004db2c) popup_eswt_tasktip_window_t1

0xca76,	// (0x0004db42) wait_bar_pane_cp71_ParamLimits

0xca76,	// (0x0004db42) wait_bar_pane_cp71

0xca82,	// (0x0004db4e) grid_eswt_app_pane

0x4290,	// (0x0004535c) scroll_pane_cp70

0xca8b,	// (0x0004db57) cell_eswt_app_pane_ParamLimits

0xca8b,	// (0x0004db57) cell_eswt_app_pane

0xcabd,	// (0x0004db89) cell_eswt_app_pane_g1_ParamLimits

0xcabd,	// (0x0004db89) cell_eswt_app_pane_g1

0xcaec,	// (0x0004dbb8) cell_eswt_app_pane_g2_ParamLimits

0xcaec,	// (0x0004dbb8) cell_eswt_app_pane_g2

0x0001,

0xfbf7,	// (0x00050cc3) cell_eswt_app_pane_g_ParamLimits

0xfbf7,	// (0x00050cc3) cell_eswt_app_pane_g

0xcb15,	// (0x0004dbe1) cell_eswt_app_pane_t1_ParamLimits

0xcb15,	// (0x0004dbe1) cell_eswt_app_pane_t1

0xcb47,	// (0x0004dc13) grid_highlight_pane_cp70_ParamLimits

0xcb47,	// (0x0004dc13) grid_highlight_pane_cp70

0x9032,	// (0x0004a0fe) set_content_pane_g1

0x941a,	// (0x0004a4e6) status_small_volume_pane

0x7ea4,	// (0x00048f70) status_small_volume_pane_g1

0x7eac,	// (0x00048f78) volume_small2_pane

0x7eb5,	// (0x00048f81) volume_small2_pane_g1

0x7ebe,	// (0x00048f8a) volume_small2_pane_g2

0x7ec7,	// (0x00048f93) volume_small2_pane_g3

0x7ed0,	// (0x00048f9c) volume_small2_pane_g4

0x7ed9,	// (0x00048fa5) volume_small2_pane_g5

0x7ee2,	// (0x00048fae) volume_small2_pane_g6

0x7eeb,	// (0x00048fb7) volume_small2_pane_g7

0x7ef4,	// (0x00048fc0) volume_small2_pane_g8

0x7efd,	// (0x00048fc9) volume_small2_pane_g9

0x7f06,	// (0x00048fd2) volume_small2_pane_g10

0x0009,

0xfbfc,	// (0x00050cc8) volume_small2_pane_g

0xc396,	// (0x0004d462) fep_vkb_top_text_pane_g1_ParamLimits

0xc3b1,	// (0x0004d47d) fep_vkb_top_text_pane_t1_ParamLimits

0xc68b,	// (0x0004d757) popup_preview_fixed_window_g3_ParamLimits

0xc68b,	// (0x0004d757) popup_preview_fixed_window_g3

0x74b6,	// (0x00048582) popup_toolbar_trans_pane

0xad95,	// (0x0004be61) aid_height_set_list_ParamLimits

0xada6,	// (0x0004be72) aid_size_parent_ParamLimits

0x9493,	// (0x0004a55f) list_highlight_pane_cp2_ParamLimits

0x9032,	// (0x0004a0fe) set_content_pane_g1_ParamLimits

0x799c,	// (0x00048a68) list_single_image_pane_ParamLimits

0x799c,	// (0x00048a68) list_single_image_pane

0xcb53,	// (0x0004dc1f) aid_size_cell_image_ParamLimits

0xcb53,	// (0x0004dc1f) aid_size_cell_image

0xcb60,	// (0x0004dc2c) grid_single_image_pane_ParamLimits

0xcb60,	// (0x0004dc2c) grid_single_image_pane

0x0fa3,	// (0x0004206f) list_single_image_pane_g1_ParamLimits

0x0fa3,	// (0x0004206f) list_single_image_pane_g1

0x0faf,	// (0x0004207b) list_single_image_pane_g2_ParamLimits

0x0faf,	// (0x0004207b) list_single_image_pane_g2

0x0001,

0xfc11,	// (0x00050cdd) list_single_image_pane_g_ParamLimits

0xfc11,	// (0x00050cdd) list_single_image_pane_g

0xcb6e,	// (0x0004dc3a) list_single_image_pane_t1_ParamLimits

0xcb6e,	// (0x0004dc3a) list_single_image_pane_t1

0xcb84,	// (0x0004dc50) cell_image_list_pane_ParamLimits

0xcb84,	// (0x0004dc50) cell_image_list_pane

0xcb9c,	// (0x0004dc68) cell_image_list_pane_g1

0xcba5,	// (0x0004dc71) cell_image_list_pane_g2

0x0001,

0xfc16,	// (0x00050ce2) cell_image_list_pane_g

0xcbae,	// (0x0004dc7a) aid_size_cell_tb_trans_pane

0x0f95,	// (0x00042061) bg_tb_trans_pane

0xcbc0,	// (0x0004dc8c) grid_tb_trans_pane

0x99c9,	// (0x0004aa95) bg_tb_trans_pane_g1

0x99d1,	// (0x0004aa9d) bg_tb_trans_pane_g2

0x99d9,	// (0x0004aaa5) bg_tb_trans_pane_g3

0x99e1,	// (0x0004aaad) bg_tb_trans_pane_g4

0x99e9,	// (0x0004aab5) bg_tb_trans_pane_g5

0x9a01,	// (0x0004aacd) bg_tb_trans_pane_g6

0x9a09,	// (0x0004aad5) bg_tb_trans_pane_g7

0x99f1,	// (0x0004aabd) bg_tb_trans_pane_g8

0x99f9,	// (0x0004aac5) bg_tb_trans_pane_g9

0x0008,

0xfc1b,	// (0x00050ce7) bg_tb_trans_pane_g

0xcbd4,	// (0x0004dca0) cell_toolbar_trans_pane_ParamLimits

0xcbd4,	// (0x0004dca0) cell_toolbar_trans_pane

0xbfc7,	// (0x0004d093) cell_toolbar_trans_pane_g1

0xbbff,	// (0x0004cccb) list_form2_midp_pane_t1

0xbc0d,	// (0x0004ccd9) list_form2_midp_pane_t2

0x0001,

0xfac4,	// (0x00050b90) list_form2_midp_pane_t

0xbc1b,	// (0x0004cce7) scroll_pane_cp51_ParamLimits

0xbde2,	// (0x0004ceae) form2_midp_wait_pane_g1

0xbdeb,	// (0x0004ceb7) form2_midp_wait_pane_g2

0xbdf4,	// (0x0004cec0) form2_midp_wait_pane_g3

0x0002,

0xfad9,	// (0x00050ba5) form2_midp_wait_pane_g

0x0953,	// (0x00041a1f) list_highlight_pane_cp21_ParamLimits

0xbe2d,	// (0x0004cef9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3c,	// (0x0004cf08) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7955,	// (0x00048a21) list_single_2graphic_im_pane_ParamLimits

0x7955,	// (0x00048a21) list_single_2graphic_im_pane

0xcbfa,	// (0x0004dcc6) list_single_2graphic_im_pane_g1_ParamLimits

0xcbfa,	// (0x0004dcc6) list_single_2graphic_im_pane_g1

0xcc0b,	// (0x0004dcd7) list_single_2graphic_im_pane_g2_ParamLimits

0xcc0b,	// (0x0004dcd7) list_single_2graphic_im_pane_g2

0xcc17,	// (0x0004dce3) list_single_2graphic_im_pane_g3_ParamLimits

0xcc17,	// (0x0004dce3) list_single_2graphic_im_pane_g3

0x0003,

0xfc2e,	// (0x00050cfa) list_single_2graphic_im_pane_g_ParamLimits

0xfc2e,	// (0x00050cfa) list_single_2graphic_im_pane_g

0xcc37,	// (0x0004dd03) list_single_2graphic_im_pane_t1_ParamLimits

0xcc37,	// (0x0004dd03) list_single_2graphic_im_pane_t1

0xc697,	// (0x0004d763) list_single_graphic_2heading_pane_fp_ParamLimits

0xc697,	// (0x0004d763) list_single_graphic_2heading_pane_fp

0x5c10,	// (0x00046cdc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5c10,	// (0x00046cdc) list_single_graphic_2heading_pane_fp_g1

0xc6b0,	// (0x0004d77c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6b0,	// (0x0004d77c) list_single_graphic_2heading_pane_fp_g2

0xc609,	// (0x0004d6d5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc609,	// (0x0004d6d5) list_single_graphic_2heading_pane_fp_g3

0xc615,	// (0x0004d6e1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc615,	// (0x0004d6e1) list_single_graphic_2heading_pane_fp_g4

0xc6bc,	// (0x0004d788) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6bc,	// (0x0004d788) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x00050c28) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x00050c28) list_single_graphic_2heading_pane_fp_g

0x5d6d,	// (0x00046e39) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5d6d,	// (0x00046e39) list_single_graphic_2heading_pane_fp_t1

0x5c48,	// (0x00046d14) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5c48,	// (0x00046d14) list_single_graphic_2heading_pane_fp_t2

0x5d83,	// (0x00046e4f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5d83,	// (0x00046e4f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc37,	// (0x00050d03) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc37,	// (0x00050d03) list_single_graphic_2heading_pane_fp_t

0xc058,	// (0x0004d124) fep_hwr_write_pane_g5_ParamLimits

0xc058,	// (0x0004d124) fep_hwr_write_pane_g5

0xc064,	// (0x0004d130) fep_hwr_write_pane_g6_ParamLimits

0xc064,	// (0x0004d130) fep_hwr_write_pane_g6

0xc936,	// (0x0004da02) eswt_shell_pane_ParamLimits

0x9a3d,	// (0x0004ab09) bg_popup_window_pane_cp18_ParamLimits

0xacec,	// (0x0004bdb8) heading_pane_cp70

0xca60,	// (0x0004db2c) popup_eswt_tasktip_window_t1_ParamLimits

0x9526,	// (0x0004a5f2) aid_touch_tab_arrow_left

0x9532,	// (0x0004a5fe) aid_touch_tab_arrow_right

0x62c7,	// (0x00047393) title_pane_g3_ParamLimits

0x62c7,	// (0x00047393) title_pane_g3

0x0f54,	// (0x00042020) set_value_pane_g1

0x74b6,	// (0x00048582) popup_toolbar_trans_pane_ParamLimits

0xcbae,	// (0x0004dc7a) aid_size_cell_tb_trans_pane_ParamLimits

0x0f95,	// (0x00042061) bg_tb_trans_pane_ParamLimits

0xcbc0,	// (0x0004dc8c) grid_tb_trans_pane_ParamLimits

0x0a86,	// (0x00041b52) cont_note_pane_ParamLimits

0x0a86,	// (0x00041b52) cont_note_pane

0x0d10,	// (0x00041ddc) cont_snote2_single_text_pane_ParamLimits

0x0d10,	// (0x00041ddc) cont_snote2_single_text_pane

0x0d10,	// (0x00041ddc) cont_snote2_single_graphic_pane_ParamLimits

0x0d10,	// (0x00041ddc) cont_snote2_single_graphic_pane

0xa02f,	// (0x0004b0fb) cont_note_wait_pane_ParamLimits

0xa02f,	// (0x0004b0fb) cont_note_wait_pane

0xa02f,	// (0x0004b0fb) cont_note_image_pane_ParamLimits

0xa02f,	// (0x0004b0fb) cont_note_image_pane

0xcc68,	// (0x0004dd34) popup_note2_window_g1_ParamLimits

0xcc68,	// (0x0004dd34) popup_note2_window_g1

0xcc99,	// (0x0004dd65) popup_note2_window_t1_ParamLimits

0xcc99,	// (0x0004dd65) popup_note2_window_t1

0xccde,	// (0x0004ddaa) popup_note2_window_t2_ParamLimits

0xccde,	// (0x0004ddaa) popup_note2_window_t2

0xcd23,	// (0x0004ddef) popup_note2_window_t3_ParamLimits

0xcd23,	// (0x0004ddef) popup_note2_window_t3

0xcd68,	// (0x0004de34) popup_note2_window_t4_ParamLimits

0xcd68,	// (0x0004de34) popup_note2_window_t4

0x0b0a,	// (0x00041bd6) popup_note2_window_t5_ParamLimits

0x0b0a,	// (0x00041bd6) popup_note2_window_t5

0x0004,

0xfc43,	// (0x00050d0f) popup_note2_window_t_ParamLimits

0xfc43,	// (0x00050d0f) popup_note2_window_t

0xcd97,	// (0x0004de63) popup_note2_image_window_g1_ParamLimits

0xcd97,	// (0x0004de63) popup_note2_image_window_g1

0xcda3,	// (0x0004de6f) popup_note2_image_window_g2_ParamLimits

0xcda3,	// (0x0004de6f) popup_note2_image_window_g2

0x0001,

0xfc4e,	// (0x00050d1a) popup_note2_image_window_g_ParamLimits

0xfc4e,	// (0x00050d1a) popup_note2_image_window_g

0xcdb5,	// (0x0004de81) popup_note2_image_window_t1_ParamLimits

0xcdb5,	// (0x0004de81) popup_note2_image_window_t1

0xcdcd,	// (0x0004de99) popup_note2_image_window_t2_ParamLimits

0xcdcd,	// (0x0004de99) popup_note2_image_window_t2

0xcde5,	// (0x0004deb1) popup_note2_image_window_t3_ParamLimits

0xcde5,	// (0x0004deb1) popup_note2_image_window_t3

0x0002,

0xfc53,	// (0x00050d1f) popup_note2_image_window_t_ParamLimits

0xfc53,	// (0x00050d1f) popup_note2_image_window_t

0xa03d,	// (0x0004b109) popup_note2_wait_window_g1_ParamLimits

0xa03d,	// (0x0004b109) popup_note2_wait_window_g1

0xce01,	// (0x0004decd) popup_note2_wait_window_g2_ParamLimits

0xce01,	// (0x0004decd) popup_note2_wait_window_g2

0xa055,	// (0x0004b121) popup_note2_wait_window_g3_ParamLimits

0xa055,	// (0x0004b121) popup_note2_wait_window_g3

0x0002,

0xfc5a,	// (0x00050d26) popup_note2_wait_window_g_ParamLimits

0xfc5a,	// (0x00050d26) popup_note2_wait_window_g

0xce0d,	// (0x0004ded9) popup_note2_wait_window_t1_ParamLimits

0xce0d,	// (0x0004ded9) popup_note2_wait_window_t1

0xce2b,	// (0x0004def7) popup_note2_wait_window_t2_ParamLimits

0xce2b,	// (0x0004def7) popup_note2_wait_window_t2

0xce49,	// (0x0004df15) popup_note2_wait_window_t3_ParamLimits

0xce49,	// (0x0004df15) popup_note2_wait_window_t3

0xce5b,	// (0x0004df27) popup_note2_wait_window_t4_ParamLimits

0xce5b,	// (0x0004df27) popup_note2_wait_window_t4

0x0003,

0xfc61,	// (0x00050d2d) popup_note2_wait_window_t_ParamLimits

0xfc61,	// (0x00050d2d) popup_note2_wait_window_t

0xce6d,	// (0x0004df39) wait_bar2_pane_ParamLimits

0xce6d,	// (0x0004df39) wait_bar2_pane

0xce85,	// (0x0004df51) popup_snote2_single_text_window_g1_ParamLimits

0xce85,	// (0x0004df51) popup_snote2_single_text_window_g1

0xcead,	// (0x0004df79) popup_snote2_single_text_window_t1_ParamLimits

0xcead,	// (0x0004df79) popup_snote2_single_text_window_t1

0xcef9,	// (0x0004dfc5) popup_snote2_single_text_window_t2_ParamLimits

0xcef9,	// (0x0004dfc5) popup_snote2_single_text_window_t2

0xcf45,	// (0x0004e011) popup_snote2_single_text_window_t3_ParamLimits

0xcf45,	// (0x0004e011) popup_snote2_single_text_window_t3

0xcf86,	// (0x0004e052) popup_snote2_single_text_window_t4_ParamLimits

0xcf86,	// (0x0004e052) popup_snote2_single_text_window_t4

0xcfbc,	// (0x0004e088) popup_snote2_single_text_window_t5_ParamLimits

0xcfbc,	// (0x0004e088) popup_snote2_single_text_window_t5

0x0004,

0xfc6a,	// (0x00050d36) popup_snote2_single_text_window_t_ParamLimits

0xfc6a,	// (0x00050d36) popup_snote2_single_text_window_t

0xcfe7,	// (0x0004e0b3) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfe7,	// (0x0004e0b3) popup_snote2_single_graphic_window_g1

0xd00f,	// (0x0004e0db) popup_snote2_single_graphic_window_g2_ParamLimits

0xd00f,	// (0x0004e0db) popup_snote2_single_graphic_window_g2

0x0001,

0xfc75,	// (0x00050d41) popup_snote2_single_graphic_window_g_ParamLimits

0xfc75,	// (0x00050d41) popup_snote2_single_graphic_window_g

0xd037,	// (0x0004e103) popup_snote2_single_graphic_window_t1_ParamLimits

0xd037,	// (0x0004e103) popup_snote2_single_graphic_window_t1

0xd083,	// (0x0004e14f) popup_snote2_single_graphic_window_t2_ParamLimits

0xd083,	// (0x0004e14f) popup_snote2_single_graphic_window_t2

0xcf45,	// (0x0004e011) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf45,	// (0x0004e011) popup_snote2_single_graphic_window_t3

0xcf86,	// (0x0004e052) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf86,	// (0x0004e052) popup_snote2_single_graphic_window_t4

0xcfbc,	// (0x0004e088) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfbc,	// (0x0004e088) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7a,	// (0x00050d46) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7a,	// (0x00050d46) popup_snote2_single_graphic_window_t

0xbacb,	// (0x0004cb97) clock_nsta_pane_cp2_t1

0xbacb,	// (0x0004cb97) clock_nsta_pane_cp2_t2

0x0001,

0xfa9a,	// (0x00050b66) clock_nsta_pane_cp2_t

0x54e5,	// (0x000465b1) form_field_data_wide_pane_g1_ParamLimits

0x0fa3,	// (0x0004206f) form_field_data_wide_pane_g2_ParamLimits

0x0fa3,	// (0x0004206f) form_field_data_wide_pane_g2

0x0faf,	// (0x0004207b) form_field_data_wide_pane_g3_ParamLimits

0x0faf,	// (0x0004207b) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00050727) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00050727) form_field_data_wide_pane_g

0xb9a6,	// (0x0004ca72) grid_touch_3_pane_ParamLimits

0xb9a6,	// (0x0004ca72) grid_touch_3_pane

0xd0cf,	// (0x0004e19b) cell_touch_3_pane_ParamLimits

0xd0cf,	// (0x0004e19b) cell_touch_3_pane

0xbfc7,	// (0x0004d093) cell_touch_3_pane_g1

0xbfc7,	// (0x0004d093) cell_touch_3_pane_g2

0x0001,

0xfb1f,	// (0x00050beb) cell_touch_3_pane_g

0x0b62,	// (0x00041c2e) cont_query_data_pane

0x0b6a,	// (0x00041c36) cont_query_data_pane_cp1

0xd102,	// (0x0004e1ce) button_value_adjust_pane_cp7

0xd10a,	// (0x0004e1d6) query_popup_pane_cp3

0x44db,	// (0x000455a7) bg_popup_sub_pane_cp22_ParamLimits

0x6b5d,	// (0x00047c29) navi_navi_volume_pane_cp2

0x6b78,	// (0x00047c44) popup_side_volume_key_window_g2

0x6b87,	// (0x00047c53) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x000507bd) popup_side_volume_key_window_g

0x6ba4,	// (0x00047c70) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x000507c4) popup_side_volume_key_window_t

0x8ef9,	// (0x00049fc5) popup_side_volume_key_window_ParamLimits

0x5103,	// (0x000461cf) list_double_graphic_pane_g4_ParamLimits

0x5103,	// (0x000461cf) list_double_graphic_pane_g4

0x7984,	// (0x00048a50) list_single_2heading_msg_pane_ParamLimits

0x7984,	// (0x00048a50) list_single_2heading_msg_pane

0x7f0f,	// (0x00048fdb) list_single_2heading_msg_pane_g1_ParamLimits

0x7f0f,	// (0x00048fdb) list_single_2heading_msg_pane_g1

0x7f1b,	// (0x00048fe7) list_single_2heading_msg_pane_g2_ParamLimits

0x7f1b,	// (0x00048fe7) list_single_2heading_msg_pane_g2

0x7f27,	// (0x00048ff3) list_single_2heading_msg_pane_g3_ParamLimits

0x7f27,	// (0x00048ff3) list_single_2heading_msg_pane_g3

0x7f33,	// (0x00048fff) list_single_2heading_msg_pane_g4_ParamLimits

0x7f33,	// (0x00048fff) list_single_2heading_msg_pane_g4

0x0003,

0xfc85,	// (0x00050d51) list_single_2heading_msg_pane_g_ParamLimits

0xfc85,	// (0x00050d51) list_single_2heading_msg_pane_g

0x5da3,	// (0x00046e6f) list_single_2heading_msg_pane_t1_ParamLimits

0x5da3,	// (0x00046e6f) list_single_2heading_msg_pane_t1

0x5dcb,	// (0x00046e97) list_single_2heading_msg_pane_t2_ParamLimits

0x5dcb,	// (0x00046e97) list_single_2heading_msg_pane_t2

0x5dfa,	// (0x00046ec6) list_single_2heading_msg_pane_t3_ParamLimits

0x5dfa,	// (0x00046ec6) list_single_2heading_msg_pane_t3

0x5e33,	// (0x00046eff) list_single_2heading_msg_pane_t4_ParamLimits

0x5e33,	// (0x00046eff) list_single_2heading_msg_pane_t4

0x0003,

0xfc8e,	// (0x00050d5a) list_single_2heading_msg_pane_t_ParamLimits

0xfc8e,	// (0x00050d5a) list_single_2heading_msg_pane_t

0x0901,	// (0x000419cd) title_pane_g4_ParamLimits

0x0901,	// (0x000419cd) title_pane_g4

0x67cd,	// (0x00047899) title_pane_stacon_g3_ParamLimits

0x67cd,	// (0x00047899) title_pane_stacon_g3

0xcc2b,	// (0x0004dcf7) list_single_2graphic_im_pane_g4_ParamLimits

0xcc2b,	// (0x0004dcf7) list_single_2graphic_im_pane_g4

0xaa9f,	// (0x0004bb6b) popup_side_volume_key_window_cp

0xb2b6,	// (0x0004c382) main_idle_act2_pane_t1

0x75d2,	// (0x0004869e) toolbar_button_pane_g10

0x6624,	// (0x000476f0) popup_toolbar_window_cp1

0xbabc,	// (0x0004cb88) clock_nsta_pane_cp_t1

0xbabc,	// (0x0004cb88) clock_nsta_pane_cp_t2

0x0001,

0xfa95,	// (0x00050b61) clock_nsta_pane_cp_t

0x6b5d,	// (0x00047c29) navi_navi_volume_pane_cp2_ParamLimits

0x6b6c,	// (0x00047c38) popup_side_volume_key_window_g1_ParamLimits

0x6b78,	// (0x00047c44) popup_side_volume_key_window_g2_ParamLimits

0x6b87,	// (0x00047c53) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x000507bd) popup_side_volume_key_window_g_ParamLimits

0x7b29,	// (0x00048bf5) fep_hwr_aid_pane

0x22f1,	// (0x000433bd) bg_fep_hwr_top_pane_g4_ParamLimits

0xc028,	// (0x0004d0f4) fep_hwr_top_pane_g1_ParamLimits

0xc03a,	// (0x0004d106) fep_hwr_top_pane_g2_ParamLimits

0x7be4,	// (0x00048cb0) fep_hwr_top_pane_g3_ParamLimits

0xfaea,	// (0x00050bb6) fep_hwr_top_pane_g_ParamLimits

0x7bf9,	// (0x00048cc5) fep_hwr_top_text_pane_ParamLimits

0xa854,	// (0x0004b920) aid_touch_tab_arrow_arrow_2

0xa85d,	// (0x0004b929) aid_touch_tab_arrow_left_2

0x7b3d,	// (0x00048c09) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7b74,	// (0x00048c40) fep_hwr_prediction_pane

0xc190,	// (0x0004d25c) fep_vkb_prediction_pane

0xc296,	// (0x0004d362) fep_vkb_side_pane_g3_ParamLimits

0xc296,	// (0x0004d362) fep_vkb_side_pane_g3

0xc242,	// (0x0004d30e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc710,	// (0x0004d7dc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc71d,	// (0x0004d7e9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x00050c60) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd131,	// (0x0004e1fd) fep_hwr_prediction_pane_g1

0x7f4b,	// (0x00049017) fep_hwr_prediction_pane_g2

0x7f53,	// (0x0004901f) fep_hwr_prediction_pane_g3

0x7f5b,	// (0x00049027) fep_hwr_prediction_pane_g4

0x0003,

0xfc97,	// (0x00050d63) fep_hwr_prediction_pane_g

0xd131,	// (0x0004e1fd) fep_vkb_prediction_pane_g1

0xd13b,	// (0x0004e207) fep_vkb_prediction_pane_g2

0xd143,	// (0x0004e20f) fep_vkb_prediction_pane_g3

0xd14b,	// (0x0004e217) fep_vkb_prediction_pane_g4

0x0003,

0xfca0,	// (0x00050d6c) fep_vkb_prediction_pane_g

0x78c7,	// (0x00048993) slider_set_pane_g3

0x78db,	// (0x000489a7) slider_set_pane_g4

0x78f3,	// (0x000489bf) slider_set_pane_g5

0x78c7,	// (0x00048993) slider_set_pane_g6

0x7909,	// (0x000489d5) slider_set_pane_g7

0xaf25,	// (0x0004bff1) slider_form_pane_g3

0xaf2e,	// (0x0004bffa) slider_form_pane_g4

0xaf36,	// (0x0004c002) slider_form_pane_g5

0xaf25,	// (0x0004bff1) slider_form_pane_g6

0xaf3e,	// (0x0004c00a) slider_form_pane_g7

0xb57a,	// (0x0004c646) slider_set_pane_vc_g3

0xb583,	// (0x0004c64f) slider_set_pane_vc_g4

0xb58c,	// (0x0004c658) slider_set_pane_vc_g5

0xb57a,	// (0x0004c646) slider_set_pane_vc_g6

0xb595,	// (0x0004c661) slider_set_pane_vc_g7

0xb76b,	// (0x0004c837) slider_form_pane_vc_g1

0xb774,	// (0x0004c840) slider_form_pane_vc_g2

0xb77d,	// (0x0004c849) slider_form_pane_vc_g3

0xb76b,	// (0x0004c837) slider_form_pane_vc_g4

0xb786,	// (0x0004c852) slider_form_pane_vc_g5

0x0004,

0xfa67,	// (0x00050b33) slider_form_pane_vc_g

0x08e3,	// (0x000419af) main_idle_act3_pane

0xd153,	// (0x0004e21f) ai3_links_pane

0xd15c,	// (0x0004e228) popup_ai3_data_window_ParamLimits

0xd15c,	// (0x0004e228) popup_ai3_data_window

0x08e3,	// (0x000419af) grid_ai3_links_pane

0xd17a,	// (0x0004e246) cell_ai3_links_pane_ParamLimits

0xd17a,	// (0x0004e246) cell_ai3_links_pane

0xd194,	// (0x0004e260) bg_popup_sub_pane_cp11

0xd1a1,	// (0x0004e26d) cell_ai3_links_pane_g1

0x08e3,	// (0x000419af) bg_popup_sub_pane_cp12

0xd1c6,	// (0x0004e292) heading_ai3_data_pane

0xd1ce,	// (0x0004e29a) list_ai3_gene_pane

0xd1da,	// (0x0004e2a6) popup_ai3_data_window_g1

0xd1e2,	// (0x0004e2ae) heading_ai3_data_pane_g1

0xd1ea,	// (0x0004e2b6) heading_ai3_data_pane_t1

0xd1f8,	// (0x0004e2c4) list_double_ai3_gene_pane_ParamLimits

0xd1f8,	// (0x0004e2c4) list_double_ai3_gene_pane

0xd205,	// (0x0004e2d1) list_single_ai3_gene_pane_ParamLimits

0xd205,	// (0x0004e2d1) list_single_ai3_gene_pane

0xbf8c,	// (0x0004d058) list_highlight_pane_cp7_ParamLimits

0xbf8c,	// (0x0004d058) list_highlight_pane_cp7

0xd212,	// (0x0004e2de) list_single_a13_gene_pane_t1_ParamLimits

0xd212,	// (0x0004e2de) list_single_a13_gene_pane_t1

0xd229,	// (0x0004e2f5) list_single_ai3_gene_pane_g1

0xd232,	// (0x0004e2fe) list_single_ai3_gene_pane_g2

0x0001,

0xfca9,	// (0x00050d75) list_single_ai3_gene_pane_g

0xd23a,	// (0x0004e306) list_double_ai3_gene_pane_g1_ParamLimits

0xd23a,	// (0x0004e306) list_double_ai3_gene_pane_g1

0xd246,	// (0x0004e312) list_double_ai3_gene_pane_t1_ParamLimits

0xd246,	// (0x0004e312) list_double_ai3_gene_pane_t1

0xd262,	// (0x0004e32e) list_double_ai3_gene_pane_t2_ParamLimits

0xd262,	// (0x0004e32e) list_double_ai3_gene_pane_t2

0xd277,	// (0x0004e343) list_double_ai3_gene_pane_t3_ParamLimits

0xd277,	// (0x0004e343) list_double_ai3_gene_pane_t3

0x0002,

0xfcae,	// (0x00050d7a) list_double_ai3_gene_pane_t_ParamLimits

0xfcae,	// (0x00050d7a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d99,	// (0x00046e65) aid_size_min_col_2

0xd11b,	// (0x0004e1e7) aid_size_min_msg_ParamLimits

0xd11b,	// (0x0004e1e7) aid_size_min_msg

0xc3a2,	// (0x0004d46e) fep_vkb_top_text_pane_g2_ParamLimits

0xc3a2,	// (0x0004d46e) fep_vkb_top_text_pane_g2

0x0001,

0xfb1a,	// (0x00050be6) fep_vkb_top_text_pane_g_ParamLimits

0xfb1a,	// (0x00050be6) fep_vkb_top_text_pane_g

0x08e3,	// (0x000419af) main_hc_apps_shell_pane

0xd294,	// (0x0004e360) grid_hc_apps_pane_ParamLimits

0xd294,	// (0x0004e360) grid_hc_apps_pane

0xd2a6,	// (0x0004e372) list_hc_apps_pane

0xd2ae,	// (0x0004e37a) scroll_pane_cp37_ParamLimits

0xd2ae,	// (0x0004e37a) scroll_pane_cp37

0xd2ba,	// (0x0004e386) cell_hc_apps_pane_ParamLimits

0xd2ba,	// (0x0004e386) cell_hc_apps_pane

0xd370,	// (0x0004e43c) cell_hc_apps_pane_g1_ParamLimits

0xd370,	// (0x0004e43c) cell_hc_apps_pane_g1

0xd39c,	// (0x0004e468) cell_hc_apps_pane_g2_ParamLimits

0xd39c,	// (0x0004e468) cell_hc_apps_pane_g2

0xd3b8,	// (0x0004e484) cell_hc_apps_pane_g3_ParamLimits

0xd3b8,	// (0x0004e484) cell_hc_apps_pane_g3

0x0002,

0xfcb5,	// (0x00050d81) cell_hc_apps_pane_g_ParamLimits

0xfcb5,	// (0x00050d81) cell_hc_apps_pane_g

0xd3da,	// (0x0004e4a6) cell_hc_apps_pane_t1_ParamLimits

0xd3da,	// (0x0004e4a6) cell_hc_apps_pane_t1

0x0a86,	// (0x00041b52) grid_highlight_pane_cp10_ParamLimits

0x0a86,	// (0x00041b52) grid_highlight_pane_cp10

0xd41a,	// (0x0004e4e6) list_single_hc_apps_pane_ParamLimits

0xd41a,	// (0x0004e4e6) list_single_hc_apps_pane

0xd459,	// (0x0004e525) list_single_hc_apps_pane_g1

0x7f63,	// (0x0004902f) list_single_hc_apps_pane_g2

0x0001,

0xfcbc,	// (0x00050d88) list_single_hc_apps_pane_g

0x7f7c,	// (0x00049048) list_single_hc_apps_pane_g2_copy1

0x5e58,	// (0x00046f24) list_single_hc_apps_pane_t1

0x0953,	// (0x00041a1f) bg_set_opt_pane_cp_ParamLimits

0x6379,	// (0x00047445) setting_slider_pane_t1_ParamLimits

0x6392,	// (0x0004745e) setting_slider_pane_t2_ParamLimits

0x63ac,	// (0x00047478) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00050605) setting_slider_pane_t_ParamLimits

0x63c4,	// (0x00047490) slider_set_pane_ParamLimits

0x6e3b,	// (0x00047f07) control_pane_g5_ParamLimits

0x6e3b,	// (0x00047f07) control_pane_g5

0xad58,	// (0x0004be24) slider_set_pane_g1_ParamLimits

0x78bb,	// (0x00048987) slider_set_pane_g2_ParamLimits

0x78c7,	// (0x00048993) slider_set_pane_g3_ParamLimits

0x78db,	// (0x000489a7) slider_set_pane_g4_ParamLimits

0x78f3,	// (0x000489bf) slider_set_pane_g5_ParamLimits

0x78c7,	// (0x00048993) slider_set_pane_g6_ParamLimits

0x7909,	// (0x000489d5) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00050a10) slider_set_pane_g_ParamLimits

0x8fdd,	// (0x0004a0a9) navi_icon_text_pane_ParamLimits

0x94e5,	// (0x0004a5b1) aid_fill_nsta_2_ParamLimits

0x9526,	// (0x0004a5f2) aid_touch_tab_arrow_left_ParamLimits

0x9532,	// (0x0004a5fe) aid_touch_tab_arrow_right_ParamLimits

0x959e,	// (0x0004a66a) clock_nsta_pane_ParamLimits

0xa836,	// (0x0004b902) navi_icon_pane_g1_ParamLimits

0xa842,	// (0x0004b90e) navi_text_pane_t1_ParamLimits

0xbbd9,	// (0x0004cca5) navi_icon_text_pane_g1_ParamLimits

0xbbe5,	// (0x0004ccb1) navi_icon_text_pane_t1_ParamLimits

0xd459,	// (0x0004e525) list_single_hc_apps_pane_g1_ParamLimits

0x7f63,	// (0x0004902f) list_single_hc_apps_pane_g2_ParamLimits

0xfcbc,	// (0x00050d88) list_single_hc_apps_pane_g_ParamLimits

0x7f7c,	// (0x00049048) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5e58,	// (0x00046f24) list_single_hc_apps_pane_t1_ParamLimits

0x61ad,	// (0x00047279) popup_toolbar2_fixed_window_ParamLimits

0x61ad,	// (0x00047279) popup_toolbar2_fixed_window

0x74ac,	// (0x00048578) popup_toolbar2_float_window

0x08e3,	// (0x000419af) bg_popup_sub_pane_cp27

0xd472,	// (0x0004e53e) grid_toolbar2_float_pane

0x08e3,	// (0x000419af) bg_popup_sub_pane_cp26

0xd472,	// (0x0004e53e) grid_toolbar2_fixed_pane

0xd47a,	// (0x0004e546) cell_toolbar2_fixed_pane_ParamLimits

0xd47a,	// (0x0004e546) cell_toolbar2_fixed_pane

0xd48a,	// (0x0004e556) cell_toolbar2_fixed_pane_g1

0xd493,	// (0x0004e55f) toolbar2_fixed_button_pane

0x99c9,	// (0x0004aa95) toolbar2_fixed_button_pane_g1

0x99d1,	// (0x0004aa9d) toolbar2_fixed_button_pane_g2

0x99d9,	// (0x0004aaa5) toolbar2_fixed_button_pane_g3

0x99e1,	// (0x0004aaad) toolbar2_fixed_button_pane_g4

0x99e9,	// (0x0004aab5) toolbar2_fixed_button_pane_g5

0x99f1,	// (0x0004aabd) toolbar2_fixed_button_pane_g6

0x99f9,	// (0x0004aac5) toolbar2_fixed_button_pane_g7

0x9a01,	// (0x0004aacd) toolbar2_fixed_button_pane_g8

0x9a09,	// (0x0004aad5) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00050912) toolbar2_fixed_button_pane_g

0xd49b,	// (0x0004e567) cell_toolbar2_float_pane_ParamLimits

0xd49b,	// (0x0004e567) cell_toolbar2_float_pane

0xd4ac,	// (0x0004e578) cell_toolbar2_float_pane_g1

0xd493,	// (0x0004e55f) toolbar2_fixed_button_pane_cp

0xc0fe,	// (0x0004d1ca) fep_vkb_accented_list_pane_ParamLimits

0xc0fe,	// (0x0004d1ca) fep_vkb_accented_list_pane

0x7d5b,	// (0x00048e27) bg_popup_fep_shadow_pane_g9

0x916c,	// (0x0004a238) bg_popup_fep_shadow_pane_cp3

0x10b8,	// (0x00042184) list_accented_list_pane

0xd4b5,	// (0x0004e581) list_single_accented_list_pane_ParamLimits

0xd4b5,	// (0x0004e581) list_single_accented_list_pane

0x916c,	// (0x0004a238) list_highlight_pane_cp10

0xd4c6,	// (0x0004e592) list_single_accented_list_pane_t1

0x73f2,	// (0x000484be) popup_slider_window_ParamLimits

0x73f2,	// (0x000484be) popup_slider_window

0xd112,	// (0x0004e1de) aid_indentation_list_msg

0xd596,	// (0x0004e662) bg_popup_window_pane_cp19

0xd602,	// (0x0004e6ce) popup_slider_window_g1

0xd61e,	// (0x0004e6ea) popup_slider_window_g2

0xd63a,	// (0x0004e706) popup_slider_window_g3

0x0005,

0xfcc1,	// (0x00050d8d) popup_slider_window_g

0xd6a0,	// (0x0004e76c) popup_slider_window_t1

0xd714,	// (0x0004e7e0) small_volume_slider_vertical_pane

0xbfc7,	// (0x0004d093) small_volume_slider_vertical_pane_g1

0xbfc7,	// (0x0004d093) small_volume_slider_vertical_pane_g2

0xd730,	// (0x0004e7fc) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd3,	// (0x00050d9f) small_volume_slider_vertical_pane_g

0x5f65,	// (0x00047031) area_side_right_pane_ParamLimits

0x5f65,	// (0x00047031) area_side_right_pane

0x7f98,	// (0x00049064) aid_size_side_button_ParamLimits

0x7f98,	// (0x00049064) aid_size_side_button

0x7fac,	// (0x00049078) grid_sctrl_middle_pane_ParamLimits

0x7fac,	// (0x00049078) grid_sctrl_middle_pane

0x7fcb,	// (0x00049097) sctrl_sk_bottom_pane

0x7fdc,	// (0x000490a8) sctrl_sk_top_pane

0x7fee,	// (0x000490ba) aid_touch_sctrl_top

0x0a86,	// (0x00041b52) bg_sctrl_sk_pane_ParamLimits

0x0a86,	// (0x00041b52) bg_sctrl_sk_pane

0x7ffb,	// (0x000490c7) sctrl_sk_top_pane_g1

0x8008,	// (0x000490d4) sctrl_sk_top_pane_t1

0x7fee,	// (0x000490ba) aid_touch_sctrl_bottom

0x0a86,	// (0x00041b52) bg_sctrl_sk_pane_cp_ParamLimits

0x0a86,	// (0x00041b52) bg_sctrl_sk_pane_cp

0x8023,	// (0x000490ef) sctrl_sk_bottom_pane_g1

0x8008,	// (0x000490d4) sctrl_sk_bottom_pane_t1

0x802c,	// (0x000490f8) cell_sctrl_middle_pane_ParamLimits

0x802c,	// (0x000490f8) cell_sctrl_middle_pane

0x8049,	// (0x00049115) aid_touch_sctrl_middle_ParamLimits

0x8049,	// (0x00049115) aid_touch_sctrl_middle

0x0f95,	// (0x00042061) bg_sctrl_middle_pane_ParamLimits

0x0f95,	// (0x00042061) bg_sctrl_middle_pane

0xc242,	// (0x0004d30e) cell_sctrl_middle_pane_g1_ParamLimits

0xc242,	// (0x0004d30e) cell_sctrl_middle_pane_g1

0x805b,	// (0x00049127) cell_sctrl_middle_pane_g2_ParamLimits

0x805b,	// (0x00049127) cell_sctrl_middle_pane_g2

0x0001,

0xfcdf,	// (0x00050dab) cell_sctrl_middle_pane_g_ParamLimits

0xfcdf,	// (0x00050dab) cell_sctrl_middle_pane_g

0x99c9,	// (0x0004aa95) bg_sctrl_middle_pane_g1

0x99d1,	// (0x0004aa9d) bg_sctrl_middle_pane_g2

0x99d9,	// (0x0004aaa5) bg_sctrl_middle_pane_g3

0x99e1,	// (0x0004aaad) bg_sctrl_middle_pane_g4

0x99e9,	// (0x0004aab5) bg_sctrl_middle_pane_g5

0x99f1,	// (0x0004aabd) bg_sctrl_middle_pane_g6

0x99f9,	// (0x0004aac5) bg_sctrl_middle_pane_g7

0x9a01,	// (0x0004aacd) bg_sctrl_middle_pane_g8

0x0007,

0xfce4,	// (0x00050db0) bg_sctrl_middle_pane_g

0x9a09,	// (0x0004aad5) bg_sctrl_middle_pane_g8_copy1

0x99c9,	// (0x0004aa95) bg_sctrl_sk_pane_g1

0x99d1,	// (0x0004aa9d) bg_sctrl_sk_pane_g2

0x99d9,	// (0x0004aaa5) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00050912) bg_sctrl_sk_pane_g

0x0ece,	// (0x00041f9a) aid_size_touch_scroll_bar

0x99e1,	// (0x0004aaad) bg_sctrl_sk_pane_g4

0x99e9,	// (0x0004aab5) bg_sctrl_sk_pane_g5

0x99f1,	// (0x0004aabd) bg_sctrl_sk_pane_g6

0x99f9,	// (0x0004aac5) bg_sctrl_sk_pane_g7

0x9a01,	// (0x0004aacd) bg_sctrl_sk_pane_g8

0x9a09,	// (0x0004aad5) bg_sctrl_sk_pane_g9

0x7007,	// (0x000480d3) popup_fep_china_hwr2_fs_candidate_window

0x7011,	// (0x000480dd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7011,	// (0x000480dd) popup_fep_china_hwr2_fs_control_window

0xc242,	// (0x0004d30e) sctrl_sk_top_pane_g2

0x0001,

0xfcda,	// (0x00050da6) sctrl_sk_top_pane_g

0xd739,	// (0x0004e805) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd739,	// (0x0004e805) aid_fep_china_hwr2_fs_cell

0xd74c,	// (0x0004e818) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74c,	// (0x0004e818) bg_popup_fep_shadow_pane_cp4

0xd765,	// (0x0004e831) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd765,	// (0x0004e831) bg_popup_fep_shadow_pane_cp5

0xd777,	// (0x0004e843) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd777,	// (0x0004e843) popup_fep_china_hwr2_fs_control_bar_grid

0xd787,	// (0x0004e853) popup_fep_china_hwr2_fs_control_funtion_grid

0xd78f,	// (0x0004e85b) aid_fep_china_hwr2_fs_candi_cell

0x08e3,	// (0x000419af) bg_popup_fep_shadow_pane_cp6

0xd799,	// (0x0004e865) popup_fep_china_hwr2_fs_candidate_grid

0xd7a3,	// (0x0004e86f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a3,	// (0x0004e86f) cell_fep_china_hwr2_fs_funtion_grid

0xbfc7,	// (0x0004d093) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bb,	// (0x0004e887) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bb,	// (0x0004e887) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7c9,	// (0x0004e895) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7c9,	// (0x0004e895) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf5,	// (0x00050dc1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf5,	// (0x00050dc1) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7df,	// (0x0004e8ab) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7df,	// (0x0004e8ab) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f4,	// (0x0004e8c0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f4,	// (0x0004e8c0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfa,	// (0x00050dc6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfa,	// (0x00050dc6) cell_fep_china_hwr2_fs_funtion_grid_t

0xd810,	// (0x0004e8dc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd818,	// (0x0004e8e4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd820,	// (0x0004e8ec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcff,	// (0x00050dcb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd828,	// (0x0004e8f4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd828,	// (0x0004e8f4) cell_fep_china_hwr2_fs_candidate_grid

0xd847,	// (0x0004e913) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd84f,	// (0x0004e91b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc7,	// (0x0004d093) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc7,	// (0x0004d093) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1f,	// (0x00050beb) cell_fep_china_hwr2_fs_candidate_grid_g

0xd857,	// (0x0004e923) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95b1,	// (0x0004a67d) clock_nsta_pane_cp_24_ParamLimits

0x95b1,	// (0x0004a67d) clock_nsta_pane_cp_24

0x9631,	// (0x0004a6fd) indicator_nsta_pane_cp_24_ParamLimits

0x9631,	// (0x0004a6fd) indicator_nsta_pane_cp_24

0xa6b2,	// (0x0004b77e) heading_pane_g1

0x0001,

0xf8ab,	// (0x00050977) heading_pane_g

0xb0fd,	// (0x0004c1c9) grid_sct_catagory_button_pane

0xb12f,	// (0x0004c1fb) scroll_pane_cp5_ParamLimits

0xbc27,	// (0x0004ccf3) button_value_adjust_pane_cp5_ParamLimits

0xbc27,	// (0x0004ccf3) button_value_adjust_pane_cp5

0xbd0c,	// (0x0004cdd8) form2_midp_time_pane_ParamLimits

0xd865,	// (0x0004e931) cell_sct_catagory_button_pane_ParamLimits

0xd865,	// (0x0004e931) cell_sct_catagory_button_pane

0xbf8c,	// (0x0004d058) bg_button_pane_cp01_ParamLimits

0xbf8c,	// (0x0004d058) bg_button_pane_cp01

0xbfc7,	// (0x0004d093) cell_sct_catagory_button_pane_g1

0x7433,	// (0x000484ff) popup_tb_extension_window

0xd877,	// (0x0004e943) aid_size_cell_ext_ParamLimits

0xd877,	// (0x0004e943) aid_size_cell_ext

0x0a86,	// (0x00041b52) bg_tb_trans_pane_cp1_ParamLimits

0x0a86,	// (0x00041b52) bg_tb_trans_pane_cp1

0xd897,	// (0x0004e963) grid_tb_ext_pane_ParamLimits

0xd897,	// (0x0004e963) grid_tb_ext_pane

0xd8c5,	// (0x0004e991) cell_tb_ext_pane_ParamLimits

0xd8c5,	// (0x0004e991) cell_tb_ext_pane

0xd8dc,	// (0x0004e9a8) cell_tb_ext_pane_g1_ParamLimits

0xd8dc,	// (0x0004e9a8) cell_tb_ext_pane_g1

0xd8f9,	// (0x0004e9c5) cell_tb_ext_pane_t1

0x0a86,	// (0x00041b52) list_highlight_pane_cp11_ParamLimits

0x0a86,	// (0x00041b52) list_highlight_pane_cp11

0x61cc,	// (0x00047298) popup_uni_indicator_window_ParamLimits

0x61cc,	// (0x00047298) popup_uni_indicator_window

0x0f95,	// (0x00042061) bg_popup_sub_pane_cp14

0xd914,	// (0x0004e9e0) list_uniindi_pane

0xd920,	// (0x0004e9ec) uniindi_top_pane

0x0a86,	// (0x00041b52) bg_uniindi_top_pane

0xd941,	// (0x0004ea0d) uniindi_top_pane_g1

0xd957,	// (0x0004ea23) uniindi_top_pane_g2

0x0003,

0xfd06,	// (0x00050dd2) uniindi_top_pane_g

0xd981,	// (0x0004ea4d) uniindi_top_pane_t1

0xd9ad,	// (0x0004ea79) list_single_uniindi_pane_ParamLimits

0xd9ad,	// (0x0004ea79) list_single_uniindi_pane

0xbfc7,	// (0x0004d093) bg_uniindi_top_pane_g1

0xd9c0,	// (0x0004ea8c) list_single_uniindi_pane_g1

0xd9d3,	// (0x0004ea9f) list_single_uniindi_pane_t1

0x08e3,	// (0x000419af) control_bg_pane

0xd9f8,	// (0x0004eac4) bg_sctrl_sk_pane_cp1

0xda01,	// (0x0004eacd) bg_sctrl_sk_pane_cp2

0xda0a,	// (0x0004ead6) control_bg_pane_g1

0xda13,	// (0x0004eadf) control_bg_pane_g2

0x0001,

0xfd0f,	// (0x00050ddb) control_bg_pane_g

0xba5f,	// (0x0004cb2b) cell_indicator_nsta_pane_g1_ParamLimits

0xba6d,	// (0x0004cb39) cell_indicator_nsta_pane_g2_ParamLimits

0xfa83,	// (0x00050b4f) cell_indicator_nsta_pane_g_ParamLimits

0x5be6,	// (0x00046cb2) form2_midp_time_pane_t1_ParamLimits

0x0d10,	// (0x00041ddc) main_idle_act4_pane_ParamLimits

0x0d10,	// (0x00041ddc) main_idle_act4_pane

0x7433,	// (0x000484ff) popup_tb_extension_window_ParamLimits

0xd8b7,	// (0x0004e983) tb_ext_find_pane_ParamLimits

0xd8b7,	// (0x0004e983) tb_ext_find_pane

0xda1c,	// (0x0004eae8) ai_gene_pane_1_cp1

0x92b6,	// (0x0004a382) ai_gene_pane_2_cp1

0xda24,	// (0x0004eaf0) list_single_idle_plugin_calendar_pane

0xda2d,	// (0x0004eaf9) list_single_idle_plugin_notification_pane

0xda36,	// (0x0004eb02) list_single_idle_plugin_player_pane

0xda3f,	// (0x0004eb0b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda3f,	// (0x0004eb0b) list_single_idle_plugin_shortcut_pane

0xda61,	// (0x0004eb2d) main_idle_act4_pane_t1

0xda73,	// (0x0004eb3f) main_idle_act4_pane_t2

0x0001,

0xfd14,	// (0x00050de0) main_idle_act4_pane_t

0xda85,	// (0x0004eb51) middle_sk_idle_act4_pane_ParamLimits

0xda85,	// (0x0004eb51) middle_sk_idle_act4_pane

0xda9b,	// (0x0004eb67) popup_clock_digital_analogue_window_cp2

0xdab5,	// (0x0004eb81) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab5,	// (0x0004eb81) shortcut_wheel_idle_act4_pane

0xbfc7,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g1

0xbfc7,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g2

0xbfc7,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g3

0xbfc7,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g4

0xbfc7,	// (0x0004d093) shortcut_wheel_idle_act4_pane_g5

0xdac9,	// (0x0004eb95) shortcut_wheel_idle_act4_pane_g6

0xdad1,	// (0x0004eb9d) shortcut_wheel_idle_act4_pane_g7

0xdad9,	// (0x0004eba5) shortcut_wheel_idle_act4_pane_g8

0xdae1,	// (0x0004ebad) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd19,	// (0x00050de5) shortcut_wheel_idle_act4_pane_g

0xc242,	// (0x0004d30e) middle_sk_idle_act4_pane_g1_ParamLimits

0xc242,	// (0x0004d30e) middle_sk_idle_act4_pane_g1

0xdb45,	// (0x0004ec11) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb45,	// (0x0004ec11) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3c,	// (0x00050e08) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3c,	// (0x00050e08) middle_sk_idle_act4_pane_g

0xdb51,	// (0x0004ec1d) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb51,	// (0x0004ec1d) middle_sk_idle_act4_pane_t1

0xdb6e,	// (0x0004ec3a) grid_ai_shortcut_pane_ParamLimits

0xdb6e,	// (0x0004ec3a) grid_ai_shortcut_pane

0xdb87,	// (0x0004ec53) list_highlight_pane_cp16_ParamLimits

0xdb87,	// (0x0004ec53) list_highlight_pane_cp16

0xdb94,	// (0x0004ec60) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb94,	// (0x0004ec60) list_single_idle_plugin_shortcut_pane_g1

0xdba0,	// (0x0004ec6c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba0,	// (0x0004ec6c) list_single_idle_plugin_shortcut_pane_g2

0xdbba,	// (0x0004ec86) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbba,	// (0x0004ec86) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd41,	// (0x00050e0d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd41,	// (0x00050e0d) list_single_idle_plugin_shortcut_pane_g

0xdbcd,	// (0x0004ec99) cell_ai_shortcut_pane_ParamLimits

0xdbcd,	// (0x0004ec99) cell_ai_shortcut_pane

0xdbf0,	// (0x0004ecbc) cell_ai_shortcut_pane_g1_ParamLimits

0xdbf0,	// (0x0004ecbc) cell_ai_shortcut_pane_g1

0xda1c,	// (0x0004eae8) ai_gene_pane_1_cp2

0xdc12,	// (0x0004ecde) ai_gene_pane_2_cp2

0xdc1a,	// (0x0004ece6) list_highlight_pane_cp15

0xdc23,	// (0x0004ecef) list_single_idle_plugin_calendar_pane_g1

0xdc1a,	// (0x0004ece6) list_highlight_pane_cp17

0xdc2b,	// (0x0004ecf7) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc33,	// (0x0004ecff) list_single_idle_plugin_player_pane_g1

0xb364,	// (0x0004c430) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd48,	// (0x00050e14) list_single_idle_plugin_player_pane_g

0xdc3b,	// (0x0004ed07) list_single_idle_plugin_player_pane_t1

0xdc49,	// (0x0004ed15) list_single_idle_plugin_player_pane_t2

0xdc57,	// (0x0004ed23) list_single_idle_plugin_player_pane_t3

0xdc65,	// (0x0004ed31) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4d,	// (0x00050e19) list_single_idle_plugin_player_pane_t

0xdc73,	// (0x0004ed3f) wait_bar_pane_cp15

0xdc7b,	// (0x0004ed47) grid_ai_notification_pane

0xb364,	// (0x0004c430) list_single_idle_plugin_notification_pane_g1

0xdc84,	// (0x0004ed50) cell_ai_notification_pane_ParamLimits

0xdc84,	// (0x0004ed50) cell_ai_notification_pane

0xdc91,	// (0x0004ed5d) cell_ai_notification_pane_g1

0xdc99,	// (0x0004ed65) cell_ai_notification_pane_t1

0xdca7,	// (0x0004ed73) tb_ext_find_button_pane

0xdcaf,	// (0x0004ed7b) tb_ext_find_pane_g1

0xdcb7,	// (0x0004ed83) tb_ext_find_pane_t1

0x4401,	// (0x000454cd) tb_ext_find_button_pane_g1

0xdcc5,	// (0x0004ed91) tb_ext_find_button_pane_g2

0x0001,

0xfd56,	// (0x00050e22) tb_ext_find_button_pane_g

0xda61,	// (0x0004eb2d) main_idle_act4_pane_t1_ParamLimits

0xda73,	// (0x0004eb3f) main_idle_act4_pane_t2_ParamLimits

0xfd14,	// (0x00050de0) main_idle_act4_pane_t_ParamLimits

0xda9b,	// (0x0004eb67) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaa9,	// (0x0004eb75) sat_plugin_idle_act4_pane_ParamLimits

0xdaa9,	// (0x0004eb75) sat_plugin_idle_act4_pane

0xdcce,	// (0x0004ed9a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcce,	// (0x0004ed9a) sat_plugin_idle_act4_pane_t1

0xdce1,	// (0x0004edad) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdce1,	// (0x0004edad) sat_plugin_idle_act4_pane_t2

0xdcf4,	// (0x0004edc0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcf4,	// (0x0004edc0) sat_plugin_idle_act4_pane_t3

0xdd07,	// (0x0004edd3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd07,	// (0x0004edd3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5b,	// (0x00050e27) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5b,	// (0x00050e27) sat_plugin_idle_act4_pane_t

0x60fd,	// (0x000471c9) popup_battery_window_ParamLimits

0x60fd,	// (0x000471c9) popup_battery_window

0x0a86,	// (0x00041b52) bg_popup_sub_pane_cp25_ParamLimits

0x0a86,	// (0x00041b52) bg_popup_sub_pane_cp25

0xdd1a,	// (0x0004ede6) popup_battery_window_g1_ParamLimits

0xdd1a,	// (0x0004ede6) popup_battery_window_g1

0xdd26,	// (0x0004edf2) popup_battery_window_t1_ParamLimits

0xdd26,	// (0x0004edf2) popup_battery_window_t1

0xdd38,	// (0x0004ee04) popup_battery_window_t2_ParamLimits

0xdd38,	// (0x0004ee04) popup_battery_window_t2

0x0001,

0xfd64,	// (0x00050e30) popup_battery_window_t_ParamLimits

0xfd64,	// (0x00050e30) popup_battery_window_t

0x9180,	// (0x0004a24c) midp_canvas_pane_ParamLimits

0x91f8,	// (0x0004a2c4) midp_keypad_pane_ParamLimits

0x91f8,	// (0x0004a2c4) midp_keypad_pane

0x9493,	// (0x0004a55f) main_midp_pane_ParamLimits

0xbada,	// (0x0004cba6) signal_pane_g2_cp_ParamLimits

0xdd55,	// (0x0004ee21) aid_size_cell_midp_keypad_ParamLimits

0xdd55,	// (0x0004ee21) aid_size_cell_midp_keypad

0xdd6f,	// (0x0004ee3b) midp_keyp_game_grid_pane_ParamLimits

0xdd6f,	// (0x0004ee3b) midp_keyp_game_grid_pane

0xdd8f,	// (0x0004ee5b) midp_keyp_rocker_pane_ParamLimits

0xdd8f,	// (0x0004ee5b) midp_keyp_rocker_pane

0xddbe,	// (0x0004ee8a) midp_keyp_sk_left_pane_ParamLimits

0xddbe,	// (0x0004ee8a) midp_keyp_sk_left_pane

0xde1a,	// (0x0004eee6) midp_keyp_sk_right_pane_ParamLimits

0xde1a,	// (0x0004eee6) midp_keyp_sk_right_pane

0x08e3,	// (0x000419af) bg_button_pane_cp03

0xde76,	// (0x0004ef42) midp_keyp_sk_left_pane_g1

0x08e3,	// (0x000419af) bg_button_pane_cp04

0xde76,	// (0x0004ef42) midp_keyp_sk_right_pane_g1

0xbfc7,	// (0x0004d093) midp_keyp_rocker_pane_g1

0xde7e,	// (0x0004ef4a) keyp_game_cell_pane_ParamLimits

0xde7e,	// (0x0004ef4a) keyp_game_cell_pane

0x08e3,	// (0x000419af) bg_button_pane_cp02

0xde91,	// (0x0004ef5d) keyp_game_cell_pane_g1

0x6147,	// (0x00047213) popup_fep_vkb2_window_ParamLimits

0x6147,	// (0x00047213) popup_fep_vkb2_window

0x8079,	// (0x00049145) aid_size_cell_vkb2_ParamLimits

0x8079,	// (0x00049145) aid_size_cell_vkb2

0x80c5,	// (0x00049191) popup_fep_vkb2_window_g1_ParamLimits

0x80c5,	// (0x00049191) popup_fep_vkb2_window_g1

0x810d,	// (0x000491d9) vkb2_area_bottom_pane_ParamLimits

0x810d,	// (0x000491d9) vkb2_area_bottom_pane

0x8161,	// (0x0004922d) vkb2_area_keypad_pane_ParamLimits

0x8161,	// (0x0004922d) vkb2_area_keypad_pane

0x81a7,	// (0x00049273) vkb2_area_top_pane_ParamLimits

0x81a7,	// (0x00049273) vkb2_area_top_pane

0x8227,	// (0x000492f3) vkb2_top_entry_pane_ParamLimits

0x8227,	// (0x000492f3) vkb2_top_entry_pane

0x8251,	// (0x0004931d) vkb2_top_grid_left_pane_ParamLimits

0x8251,	// (0x0004931d) vkb2_top_grid_left_pane

0x8270,	// (0x0004933c) vkb2_top_grid_right_pane_ParamLimits

0x8270,	// (0x0004933c) vkb2_top_grid_right_pane

0x828f,	// (0x0004935b) vkb2_cell_keypad_pane_ParamLimits

0x828f,	// (0x0004935b) vkb2_cell_keypad_pane

0x8360,	// (0x0004942c) vkb2_area_bottom_grid_pane_ParamLimits

0x8360,	// (0x0004942c) vkb2_area_bottom_grid_pane

0x8386,	// (0x00049452) vkb2_area_bottom_pane_g1_ParamLimits

0x8386,	// (0x00049452) vkb2_area_bottom_pane_g1

0x83aa,	// (0x00049476) vkb2_area_bottom_pane_g2_ParamLimits

0x83aa,	// (0x00049476) vkb2_area_bottom_pane_g2

0x83d8,	// (0x000494a4) vkb2_area_bottom_pane_g3_ParamLimits

0x83d8,	// (0x000494a4) vkb2_area_bottom_pane_g3

0x0002,

0xfd69,	// (0x00050e35) vkb2_area_bottom_pane_g_ParamLimits

0xfd69,	// (0x00050e35) vkb2_area_bottom_pane_g

0x8439,	// (0x00049505) vkb2_top_cell_left_pane_ParamLimits

0x8439,	// (0x00049505) vkb2_top_cell_left_pane

0xdea2,	// (0x0004ef6e) vkb2_top_entry_pane_g1_ParamLimits

0xdea2,	// (0x0004ef6e) vkb2_top_entry_pane_g1

0xdeb0,	// (0x0004ef7c) vkb2_top_entry_pane_t1_ParamLimits

0xdeb0,	// (0x0004ef7c) vkb2_top_entry_pane_t1

0xdee2,	// (0x0004efae) vkb2_top_entry_pane_t2_ParamLimits

0xdee2,	// (0x0004efae) vkb2_top_entry_pane_t2

0xdf14,	// (0x0004efe0) vkb2_top_entry_pane_t3_ParamLimits

0xdf14,	// (0x0004efe0) vkb2_top_entry_pane_t3

0x0002,

0xfd70,	// (0x00050e3c) vkb2_top_entry_pane_t_ParamLimits

0xfd70,	// (0x00050e3c) vkb2_top_entry_pane_t

0x8486,	// (0x00049552) vkb2_top_grid_right_pane_g1_ParamLimits

0x8486,	// (0x00049552) vkb2_top_grid_right_pane_g1

0x849c,	// (0x00049568) vkb2_top_grid_right_pane_g2_ParamLimits

0x849c,	// (0x00049568) vkb2_top_grid_right_pane_g2

0x84b4,	// (0x00049580) vkb2_top_grid_right_pane_g3_ParamLimits

0x84b4,	// (0x00049580) vkb2_top_grid_right_pane_g3

0x84cc,	// (0x00049598) vkb2_top_grid_right_pane_g4_ParamLimits

0x84cc,	// (0x00049598) vkb2_top_grid_right_pane_g4

0x0003,

0xfd77,	// (0x00050e43) vkb2_top_grid_right_pane_g_ParamLimits

0xfd77,	// (0x00050e43) vkb2_top_grid_right_pane_g

0x84e2,	// (0x000495ae) vkb2_top_cell_left_pane_g1

0x84f9,	// (0x000495c5) vkb2_cell_keypad_pane_g1_ParamLimits

0x84f9,	// (0x000495c5) vkb2_cell_keypad_pane_g1

0xdf38,	// (0x0004f004) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf38,	// (0x0004f004) vkb2_cell_keypad_pane_t1

0x8507,	// (0x000495d3) vkb2_cell_bottom_grid_pane_ParamLimits

0x8507,	// (0x000495d3) vkb2_cell_bottom_grid_pane

0x8540,	// (0x0004960c) vkb2_cell_bottom_grid_pane_g1

0xdae9,	// (0x0004ebb5) aid_call2_pane_cp02

0xdaf1,	// (0x0004ebbd) aid_call_pane_cp02

0xdaf9,	// (0x0004ebc5) clock_digital_number_pane_cp10

0xdb01,	// (0x0004ebcd) clock_digital_number_pane_cp11

0xdb09,	// (0x0004ebd5) clock_digital_number_pane_cp12

0xdb11,	// (0x0004ebdd) clock_digital_number_pane_cp13

0xdb19,	// (0x0004ebe5) clock_digital_separator_pane_cp10

0x4401,	// (0x000454cd) popup_clock_digital_analogue_window_cp2_g1

0x4401,	// (0x000454cd) popup_clock_digital_analogue_window_cp2_g2

0xdb21,	// (0x0004ebed) popup_clock_digital_analogue_window_cp2_g3

0x4401,	// (0x000454cd) popup_clock_digital_analogue_window_cp2_g4

0xdb21,	// (0x0004ebed) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2c,	// (0x00050df8) popup_clock_digital_analogue_window_cp2_g

0xdb29,	// (0x0004ebf5) popup_clock_digital_analogue_window_cp2_t1

0xdb37,	// (0x0004ec03) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd37,	// (0x00050e03) popup_clock_digital_analogue_window_cp2_t

0xbfc7,	// (0x0004d093) clock_digital_number_pane_cp10_g1

0xbfc7,	// (0x0004d093) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1f,	// (0x00050beb) clock_digital_number_pane_cp10_g

0xbfc7,	// (0x0004d093) clock_digital_separator_pane_cp10_g1

0xbfc7,	// (0x0004d093) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1f,	// (0x00050beb) clock_digital_separator_pane_cp10_g

0xd963,	// (0x0004ea2f) uniindi_top_pane_g3

0xd974,	// (0x0004ea40) uniindi_top_pane_g4

0x831a,	// (0x000493e6) vkb2_row_keypad_pane_ParamLimits

0x831a,	// (0x000493e6) vkb2_row_keypad_pane

0x855c,	// (0x00049628) vkb2_cell_t_keypad_pane_ParamLimits

0x855c,	// (0x00049628) vkb2_cell_t_keypad_pane

0x856c,	// (0x00049638) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x856c,	// (0x00049638) vkb2_cell_t_keypad_pane_cp08

0x8581,	// (0x0004964d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8581,	// (0x0004964d) vkb2_cell_t_keypad_pane_cp09

0x8595,	// (0x00049661) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8595,	// (0x00049661) vkb2_cell_t_keypad_pane_cp01

0x85a6,	// (0x00049672) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x85a6,	// (0x00049672) vkb2_cell_t_keypad_pane_cp02

0x85b7,	// (0x00049683) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x85b7,	// (0x00049683) vkb2_cell_t_keypad_pane_cp03

0x85c8,	// (0x00049694) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x85c8,	// (0x00049694) vkb2_cell_t_keypad_pane_cp04

0x85d9,	// (0x000496a5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x85d9,	// (0x000496a5) vkb2_cell_t_keypad_pane_cp05

0x85ea,	// (0x000496b6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x85ea,	// (0x000496b6) vkb2_cell_t_keypad_pane_cp06

0x85fd,	// (0x000496c9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x85fd,	// (0x000496c9) vkb2_cell_t_keypad_pane_cp07

0x8612,	// (0x000496de) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8612,	// (0x000496de) vkb2_cell_t_keypad_pane_cp10

0xc242,	// (0x0004d30e) vkb2_cell_t_keypad_pane_g1

0xdf4f,	// (0x0004f01b) vkb2_cell_t_keypad_pane_t1

0x08e3,	// (0x000419af) popup_grid_graphic2_window

0xdf61,	// (0x0004f02d) aid_size_cell_graphic2_ParamLimits

0xdf61,	// (0x0004f02d) aid_size_cell_graphic2

0xdf99,	// (0x0004f065) bg_popup_window_pane_cp21_ParamLimits

0xdf99,	// (0x0004f065) bg_popup_window_pane_cp21

0xdfa7,	// (0x0004f073) graphic2_pages_pane_ParamLimits

0xdfa7,	// (0x0004f073) graphic2_pages_pane

0xdfed,	// (0x0004f0b9) grid_graphic2_control_pane_ParamLimits

0xdfed,	// (0x0004f0b9) grid_graphic2_control_pane

0xe02b,	// (0x0004f0f7) grid_graphic2_pane_ParamLimits

0xe02b,	// (0x0004f0f7) grid_graphic2_pane

0xe0a1,	// (0x0004f16d) cell_graphic2_pane

0x08e3,	// (0x000419af) main_comp_mode_pane

0xd1ce,	// (0x0004e29a) list_ai3_gene_pane_ParamLimits

0xd596,	// (0x0004e662) bg_popup_window_pane_cp19_ParamLimits

0xd5a2,	// (0x0004e66e) bg_touch_area_indi_pane_ParamLimits

0xd5a2,	// (0x0004e66e) bg_touch_area_indi_pane

0xd5b8,	// (0x0004e684) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b8,	// (0x0004e684) bg_touch_area_indi_pane_cp01

0xd5ce,	// (0x0004e69a) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ce,	// (0x0004e69a) bg_touch_area_indi_pane_cp02

0xd5e8,	// (0x0004e6b4) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e8,	// (0x0004e6b4) bg_touch_area_indi_pane_cp03

0xd602,	// (0x0004e6ce) popup_slider_window_g1_ParamLimits

0xd61e,	// (0x0004e6ea) popup_slider_window_g2_ParamLimits

0xd63a,	// (0x0004e706) popup_slider_window_g3_ParamLimits

0xfcc1,	// (0x00050d8d) popup_slider_window_g_ParamLimits

0xd6a0,	// (0x0004e76c) popup_slider_window_t1_ParamLimits

0xd714,	// (0x0004e7e0) small_volume_slider_vertical_pane_ParamLimits

0xe0a1,	// (0x0004f16d) cell_graphic2_pane_ParamLimits

0xe0f5,	// (0x0004f1c1) bg_button_pane_cp10_ParamLimits

0xe0f5,	// (0x0004f1c1) bg_button_pane_cp10

0xe10a,	// (0x0004f1d6) bg_button_pane_cp11_ParamLimits

0xe10a,	// (0x0004f1d6) bg_button_pane_cp11

0xe11f,	// (0x0004f1eb) graphic2_pages_pane_g1_ParamLimits

0xe11f,	// (0x0004f1eb) graphic2_pages_pane_g1

0xe13a,	// (0x0004f206) graphic2_pages_pane_g2_ParamLimits

0xe13a,	// (0x0004f206) graphic2_pages_pane_g2

0x0001,

0xfd85,	// (0x00050e51) graphic2_pages_pane_g_ParamLimits

0xfd85,	// (0x00050e51) graphic2_pages_pane_g

0xe152,	// (0x0004f21e) graphic2_pages_pane_t1_ParamLimits

0xe152,	// (0x0004f21e) graphic2_pages_pane_t1

0xe168,	// (0x0004f234) cell_graphic2_control_pane_ParamLimits

0xe168,	// (0x0004f234) cell_graphic2_control_pane

0xe188,	// (0x0004f254) cell_graphic2_pane_g1_ParamLimits

0xe188,	// (0x0004f254) cell_graphic2_pane_g1

0xe195,	// (0x0004f261) cell_graphic2_pane_g2_ParamLimits

0xe195,	// (0x0004f261) cell_graphic2_pane_g2

0xe1a2,	// (0x0004f26e) cell_graphic2_pane_g3_ParamLimits

0xe1a2,	// (0x0004f26e) cell_graphic2_pane_g3

0xe1af,	// (0x0004f27b) cell_graphic2_pane_g4_ParamLimits

0xe1af,	// (0x0004f27b) cell_graphic2_pane_g4

0xe1bc,	// (0x0004f288) cell_graphic2_pane_g5_ParamLimits

0xe1bc,	// (0x0004f288) cell_graphic2_pane_g5

0x0004,

0xfd8a,	// (0x00050e56) cell_graphic2_pane_g_ParamLimits

0xfd8a,	// (0x00050e56) cell_graphic2_pane_g

0xe1d4,	// (0x0004f2a0) cell_graphic2_pane_t1_ParamLimits

0xe1d4,	// (0x0004f2a0) cell_graphic2_pane_t1

0x9a3d,	// (0x0004ab09) grid_highlight_pane_cp11_ParamLimits

0x9a3d,	// (0x0004ab09) grid_highlight_pane_cp11

0x0a86,	// (0x00041b52) bg_button_pane_cp05

0xe20a,	// (0x0004f2d6) cell_graphic2_control_pane_g1

0xbfc7,	// (0x0004d093) bg_touch_area_indi_pane_g1

0xe232,	// (0x0004f2fe) aid_cmod_rocker_key_size

0xe23c,	// (0x0004f308) aid_cmode_itu_key_size

0xe246,	// (0x0004f312) main_cmode_video_pane

0xe250,	// (0x0004f31c) main_comp_mode_itu_pane

0xe25c,	// (0x0004f328) main_comp_mode_rocker_pane

0xe268,	// (0x0004f334) cell_cmode_rocker_pane_ParamLimits

0xe268,	// (0x0004f334) cell_cmode_rocker_pane

0xe27c,	// (0x0004f348) cell_cmode_itu_pane_ParamLimits

0xe27c,	// (0x0004f348) cell_cmode_itu_pane

0x0f95,	// (0x00042061) bg_button_pane_cp06_ParamLimits

0x0f95,	// (0x00042061) bg_button_pane_cp06

0xc242,	// (0x0004d30e) cell_cmode_rocker_pane_g1_ParamLimits

0xc242,	// (0x0004d30e) cell_cmode_rocker_pane_g1

0xd7bb,	// (0x0004e887) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bb,	// (0x0004e887) cell_cmode_rocker_pane_g2

0x0001,

0xfd9a,	// (0x00050e66) cell_cmode_rocker_pane_g_ParamLimits

0xfd9a,	// (0x00050e66) cell_cmode_rocker_pane_g

0x08e3,	// (0x000419af) bg_button_pane_cp07

0xe293,	// (0x0004f35f) cell_cmode_itu_pane_g1

0xe29c,	// (0x0004f368) cell_cmode_itu_pane_t1

0xe2aa,	// (0x0004f376) cell_cmode_itu_pane_t2

0x0001,

0xfd9f,	// (0x00050e6b) cell_cmode_itu_pane_t

0xd9e8,	// (0x0004eab4) aid_touch_ctrl_left

0xd9f0,	// (0x0004eabc) aid_touch_ctrl_right

0x08e3,	// (0x000419af) compa_mode_pane

0xe2b8,	// (0x0004f384) aid_cmod_rocker_key_size_cp

0xe2c2,	// (0x0004f38e) aid_cmode_itu_key_size_cp

0xe2cc,	// (0x0004f398) compa_mode_pane_g1

0xe2d4,	// (0x0004f3a0) compa_mode_pane_g2

0xe2dc,	// (0x0004f3a8) compa_mode_pane_g3

0x0002,

0xfda4,	// (0x00050e70) compa_mode_pane_g

0xe2e4,	// (0x0004f3b0) main_comp_mode_itu_pane_cp

0xe2ec,	// (0x0004f3b8) main_comp_mode_rocker_pane_cp

0xe2f4,	// (0x0004f3c0) cell_cmode_itu_pane_cp_ParamLimits

0xe2f4,	// (0x0004f3c0) cell_cmode_itu_pane_cp

0xe309,	// (0x0004f3d5) cell_cmode_rocker_pane_cp_ParamLimits

0xe309,	// (0x0004f3d5) cell_cmode_rocker_pane_cp

0x0f95,	// (0x00042061) bg_button_pane_cp06_cp_ParamLimits

0x0f95,	// (0x00042061) bg_button_pane_cp06_cp

0xc242,	// (0x0004d30e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc242,	// (0x0004d30e) cell_cmode_rocker_pane_g1_cp

0xbfc7,	// (0x0004d093) cell_cmode_rocker_pane_g2_cp

0x08e3,	// (0x000419af) bg_button_pane_cp07_cp

0xe31b,	// (0x0004f3e7) cell_cmode_itu_pane_g1_cp

0xe324,	// (0x0004f3f0) cell_cmode_itu_pane_t1_cp

0xe324,	// (0x0004f3f0) cell_cmode_itu_pane_t2_cp

0xaf14,	// (0x0004bfe0) settings_code_pane_cp2

0x0953,	// (0x00041a1f) bg_popup_window_pane_cp3_ParamLimits

0x0c9a,	// (0x00041d66) heading_pane_cp3_ParamLimits

0x0ca9,	// (0x00041d75) listscroll_popup_graphic_pane_ParamLimits

0x7b29,	// (0x00048bf5) fep_hwr_aid_pane_ParamLimits

0x7fee,	// (0x000490ba) aid_touch_sctrl_top_ParamLimits

0x7ffb,	// (0x000490c7) sctrl_sk_top_pane_g1_ParamLimits

0xc242,	// (0x0004d30e) sctrl_sk_top_pane_g2_ParamLimits

0xfcda,	// (0x00050da6) sctrl_sk_top_pane_g_ParamLimits

0x8008,	// (0x000490d4) sctrl_sk_top_pane_t1_ParamLimits

0x7fee,	// (0x000490ba) aid_touch_sctrl_bottom_ParamLimits

0x8008,	// (0x000490d4) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92d,	// (0x0004e9f9) aid_area_touch_clock

0x81ed,	// (0x000492b9) aid_vkb2_area_top_pane_cell_ParamLimits

0x81ed,	// (0x000492b9) aid_vkb2_area_top_pane_cell

0x833c,	// (0x00049408) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x833c,	// (0x00049408) aid_vkb2_area_bottom_pane_cell

0xde9a,	// (0x0004ef66) popup_char_count_window

0xe332,	// (0x0004f3fe) popup_char_count_window_g1

0xe33b,	// (0x0004f407) popup_char_count_window_g2

0xe344,	// (0x0004f410) popup_char_count_window_g3

0x0002,

0xfdab,	// (0x00050e77) popup_char_count_window_g

0xe34d,	// (0x0004f419) popup_char_count_window_t1

0x80a3,	// (0x0004916f) popup_fep_char_preview_window_ParamLimits

0x80a3,	// (0x0004916f) popup_fep_char_preview_window

0x820b,	// (0x000492d7) vkb2_top_candi_pane_ParamLimits

0x820b,	// (0x000492d7) vkb2_top_candi_pane

0xe35b,	// (0x0004f427) cell_vkb2_top_candi_pane_ParamLimits

0xe35b,	// (0x0004f427) cell_vkb2_top_candi_pane

0xa02f,	// (0x0004b0fb) bg_popup_fep_char_preview_window_ParamLimits

0xa02f,	// (0x0004b0fb) bg_popup_fep_char_preview_window

0x8627,	// (0x000496f3) popup_fep_char_preview_window_t1_ParamLimits

0x8627,	// (0x000496f3) popup_fep_char_preview_window_t1

0xe3a9,	// (0x0004f475) bg_popup_fep_char_preview_window_g1

0xe3b1,	// (0x0004f47d) bg_popup_fep_char_preview_window_g2

0xe3b9,	// (0x0004f485) bg_popup_fep_char_preview_window_g3

0xe3c1,	// (0x0004f48d) bg_popup_fep_char_preview_window_g4

0xe3c9,	// (0x0004f495) bg_popup_fep_char_preview_window_g5

0xe3d1,	// (0x0004f49d) bg_popup_fep_char_preview_window_g6

0xe3d9,	// (0x0004f4a5) bg_popup_fep_char_preview_window_g7

0xe3e1,	// (0x0004f4ad) bg_popup_fep_char_preview_window_g8

0xe3e9,	// (0x0004f4b5) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb2,	// (0x00050e7e) bg_popup_fep_char_preview_window_g

0xc242,	// (0x0004d30e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc242,	// (0x0004d30e) cell_vkb2_top_candi_pane_g1

0xc583,	// (0x0004d64f) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc583,	// (0x0004d64f) cell_vkb2_top_candi_pane_g2

0xc5a4,	// (0x0004d670) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5a4,	// (0x0004d670) cell_vkb2_top_candi_pane_g3

0x8669,	// (0x00049735) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8669,	// (0x00049735) cell_vkb2_top_candi_pane_g4

0xe3f1,	// (0x0004f4bd) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3f1,	// (0x0004f4bd) cell_vkb2_top_candi_pane_g5

0xd7bb,	// (0x0004e887) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7bb,	// (0x0004e887) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc7,	// (0x00050e93) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc7,	// (0x00050e93) cell_vkb2_top_candi_pane_g

0x868a,	// (0x00049756) cell_vkb2_top_candi_pane_t1

0x78a7,	// (0x00048973) aid_size_touch_slider_mark_ParamLimits

0x78a7,	// (0x00048973) aid_size_touch_slider_mark

0xdfdd,	// (0x0004f0a9) grid_graphic2_catg_pane_ParamLimits

0xdfdd,	// (0x0004f0a9) grid_graphic2_catg_pane

0xe07b,	// (0x0004f147) popup_grid_graphic2_window_t1_ParamLimits

0xe07b,	// (0x0004f147) popup_grid_graphic2_window_t1

0xe08d,	// (0x0004f159) popup_grid_graphic2_window_t2_ParamLimits

0xe08d,	// (0x0004f159) popup_grid_graphic2_window_t2

0x0001,

0xfd80,	// (0x00050e4c) popup_grid_graphic2_window_t_ParamLimits

0xfd80,	// (0x00050e4c) popup_grid_graphic2_window_t

0x0a86,	// (0x00041b52) bg_button_pane_cp05_ParamLimits

0xe20a,	// (0x0004f2d6) cell_graphic2_control_pane_g1_ParamLimits

0xe412,	// (0x0004f4de) cell_graphic2_catg_pane_ParamLimits

0xe412,	// (0x0004f4de) cell_graphic2_catg_pane

0x08e3,	// (0x000419af) bg_button_pane_cp12

0xe424,	// (0x0004f4f0) cell_graphic2_catg_pane_g1

0xd8f9,	// (0x0004e9c5) cell_tb_ext_pane_t1_ParamLimits

0x8459,	// (0x00049525) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8459,	// (0x00049525) vkb2_top_cell_right_narrow_pane

0x8471,	// (0x0004953d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8471,	// (0x0004953d) vkb2_top_cell_right_wide_pane

0x7b1b,	// (0x00048be7) bg_vkb2_func_pane_ParamLimits

0x7b1b,	// (0x00048be7) bg_vkb2_func_pane

0x84e2,	// (0x000495ae) vkb2_top_cell_left_pane_g1_ParamLimits

0x7b1b,	// (0x00048be7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7b1b,	// (0x00048be7) bg_vkb2_fuc_pane_cp03

0x8540,	// (0x0004960c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99d1,	// (0x0004aa9d) bg_vkb2_func_pane_g1

0x99d9,	// (0x0004aaa5) bg_vkb2_func_pane_g2

0x99e9,	// (0x0004aab5) bg_vkb2_func_pane_g3

0x99e1,	// (0x0004aaad) bg_vkb2_func_pane_g4

0x99f1,	// (0x0004aabd) bg_vkb2_func_pane_g5

0x99f9,	// (0x0004aac5) bg_vkb2_func_pane_g6

0x9a01,	// (0x0004aacd) bg_vkb2_func_pane_g7

0x9a09,	// (0x0004aad5) bg_vkb2_func_pane_g8

0x99c9,	// (0x0004aa95) bg_vkb2_func_pane_g9

0x0008,

0xfdd4,	// (0x00050ea0) bg_vkb2_func_pane_g

0x7b1b,	// (0x00048be7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7b1b,	// (0x00048be7) bg_vkb2_fuc_pane_cp01

0x84e2,	// (0x000495ae) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x84e2,	// (0x000495ae) vkb2_top_cell_right_wide_pane_g1

0x7b1b,	// (0x00048be7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7b1b,	// (0x00048be7) bg_vkb2_fuc_pane_cp02

0x86a8,	// (0x00049774) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x86a8,	// (0x00049774) vkb2_top_cell_right_narrow_pane_g1

0xd510,	// (0x0004e5dc) aid_touch_area_decrease_ParamLimits

0xd510,	// (0x0004e5dc) aid_touch_area_decrease

0xd534,	// (0x0004e600) aid_touch_area_increase_ParamLimits

0xd534,	// (0x0004e600) aid_touch_area_increase

0xd54c,	// (0x0004e618) aid_touch_area_mute_ParamLimits

0xd54c,	// (0x0004e618) aid_touch_area_mute

0xd568,	// (0x0004e634) aid_touch_area_slider_ParamLimits

0xd568,	// (0x0004e634) aid_touch_area_slider

0xd656,	// (0x0004e722) popup_slider_window_g4_ParamLimits

0xd656,	// (0x0004e722) popup_slider_window_g4

0xd66e,	// (0x0004e73a) popup_slider_window_g5_ParamLimits

0xd66e,	// (0x0004e73a) popup_slider_window_g5

0xd690,	// (0x0004e75c) popup_slider_window_g6_ParamLimits

0xd690,	// (0x0004e75c) popup_slider_window_g6

0xd6ce,	// (0x0004e79a) popup_slider_window_t2_ParamLimits

0xd6ce,	// (0x0004e79a) popup_slider_window_t2

0x0001,

0xfcce,	// (0x00050d9a) popup_slider_window_t_ParamLimits

0xfcce,	// (0x00050d9a) popup_slider_window_t

0xd6e6,	// (0x0004e7b2) slider_pane_ParamLimits

0xd6e6,	// (0x0004e7b2) slider_pane

0xe42d,	// (0x0004f4f9) slider_pane_g1_ParamLimits

0xe42d,	// (0x0004f4f9) slider_pane_g1

0xe441,	// (0x0004f50d) slider_pane_g2_ParamLimits

0xe441,	// (0x0004f50d) slider_pane_g2

0xe457,	// (0x0004f523) slider_pane_g3_ParamLimits

0xe457,	// (0x0004f523) slider_pane_g3

0x0003,

0xfde7,	// (0x00050eb3) slider_pane_g_ParamLimits

0xfde7,	// (0x00050eb3) slider_pane_g

0x7495,	// (0x00048561) popup_tb_float_extension_window_ParamLimits

0x7495,	// (0x00048561) popup_tb_float_extension_window

0xe483,	// (0x0004f54f) aid_size_cell_tb_float_ext

0x08e3,	// (0x000419af) bg_popup_sub_window_cp28

0xe48f,	// (0x0004f55b) grid_tb_float_ext_pane

0xe49b,	// (0x0004f567) cell_tb_float_ext_pane_ParamLimits

0xe49b,	// (0x0004f567) cell_tb_float_ext_pane

0xe4b7,	// (0x0004f583) cell_tb_float_ext_pane_g1

0xe4c0,	// (0x0004f58c) grid_highlight_pane_cp12

0x7c62,	// (0x00048d2e) cell_last_hwr_side_pane_ParamLimits

0x7c62,	// (0x00048d2e) cell_last_hwr_side_pane

0xbfc7,	// (0x0004d093) cell_last_hwr_side_pane_g1

0xe4c9,	// (0x0004f595) cell_last_hwr_side_pane_g2

0x0001,

0xfdf0,	// (0x00050ebc) cell_last_hwr_side_pane_g

0x8408,	// (0x000494d4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8408,	// (0x000494d4) vkb2_area_bottom_space_btn_pane

0xc242,	// (0x0004d30e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf4f,	// (0x0004f01b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x868a,	// (0x00049756) cell_vkb2_top_candi_pane_t1_ParamLimits

0x86c4,	// (0x00049790) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x86c4,	// (0x00049790) vkb2_area_bottom_space_btn_pane_g1

0x86fe,	// (0x000497ca) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x86fe,	// (0x000497ca) vkb2_area_bottom_space_btn_pane_g2

0x8734,	// (0x00049800) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8734,	// (0x00049800) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf5,	// (0x00050ec1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf5,	// (0x00050ec1) vkb2_area_bottom_space_btn_pane_g

0x7bd2,	// (0x00048c9e) cel_fep_hwr_func_pane_ParamLimits

0x7bd2,	// (0x00048c9e) cel_fep_hwr_func_pane

0x7c0e,	// (0x00048cda) cell_hwr_side_button_pane_ParamLimits

0x7c0e,	// (0x00048cda) cell_hwr_side_button_pane

0xd92d,	// (0x0004e9f9) aid_area_touch_clock_ParamLimits

0x0a86,	// (0x00041b52) bg_uniindi_top_pane_ParamLimits

0xd941,	// (0x0004ea0d) uniindi_top_pane_g1_ParamLimits

0xd957,	// (0x0004ea23) uniindi_top_pane_g2_ParamLimits

0xd963,	// (0x0004ea2f) uniindi_top_pane_g3_ParamLimits

0xd974,	// (0x0004ea40) uniindi_top_pane_g4_ParamLimits

0xfd06,	// (0x00050dd2) uniindi_top_pane_g_ParamLimits

0xd981,	// (0x0004ea4d) uniindi_top_pane_t1_ParamLimits

0x0a86,	// (0x00041b52) bg_vkb2_func_pane_cp01_ParamLimits

0x0a86,	// (0x00041b52) bg_vkb2_func_pane_cp01

0xe4d2,	// (0x0004f59e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d2,	// (0x0004f59e) cel_fep_hwr_func_pane_g1

0x0a86,	// (0x00041b52) bg_vkb2_func_pane_cp02_ParamLimits

0x0a86,	// (0x00041b52) bg_vkb2_func_pane_cp02

0xe4d2,	// (0x0004f59e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d2,	// (0x0004f59e) cell_hwr_side_button_pane_g1

0x984e,	// (0x0004a91a) status_pane_g4_ParamLimits

0x984e,	// (0x0004a91a) status_pane_g4

0x9868,	// (0x0004a934) status_pane_t1

0xbd7a,	// (0x0004ce46) form2_midp_gauge_slider_cont_pane

0xbd82,	// (0x0004ce4e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd94,	// (0x0004ce60) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda6,	// (0x0004ce72) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad2,	// (0x00050b9e) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb8,	// (0x0004ce84) form2_midp_slider_pane_ParamLimits

0x806b,	// (0x00049137) aid_size_cell_func_vkb2_ParamLimits

0x806b,	// (0x00049137) aid_size_cell_func_vkb2

0xe46f,	// (0x0004f53b) slider_pane_g4_ParamLimits

0xe46f,	// (0x0004f53b) slider_pane_g4

0x877e,	// (0x0004984a) form2_midp_gauge_slider_pane_t2_cp01

0x878c,	// (0x00049858) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x878c,	// (0x00049858) form2_midp_gauge_slider_pane_t3_cp01

0x87a9,	// (0x00049875) form2_midp_slider_pane_cp01

0x08e3,	// (0x000419af) navi_smil_pane

0xe50b,	// (0x0004f5d7) navi_smil_pane_g1

0xe513,	// (0x0004f5df) navi_smil_pane_t1

0xe4e0,	// (0x0004f5ac) form2_midp_slider_pane_g1

0xe4e9,	// (0x0004f5b5) form2_midp_slider_pane_g2

0xe4f1,	// (0x0004f5bd) form2_midp_slider_pane_g3

0xe4e0,	// (0x0004f5ac) form2_midp_slider_pane_g4

0xe4f9,	// (0x0004f5c5) form2_midp_slider_pane_g5

0x0004,

0xfdfe,	// (0x00050eca) form2_midp_slider_pane_g

0x876e,	// (0x0004983a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x876e,	// (0x0004983a) vkb2_area_bottom_space_btn_pane_g4

0x966d,	// (0x0004a739) lc0_navi_pane_ParamLimits

0x966d,	// (0x0004a739) lc0_navi_pane

0x96e9,	// (0x0004a7b5) lc0_stat_indi_pane_ParamLimits

0x96e9,	// (0x0004a7b5) lc0_stat_indi_pane

0x9700,	// (0x0004a7cc) ls0_title_pane_ParamLimits

0x9700,	// (0x0004a7cc) ls0_title_pane

0x0f95,	// (0x00042061) bg_popup_sub_pane_cp14_ParamLimits

0xd914,	// (0x0004e9e0) list_uniindi_pane_ParamLimits

0xd920,	// (0x0004e9ec) uniindi_top_pane_ParamLimits

0xd9c0,	// (0x0004ea8c) list_single_uniindi_pane_g1_ParamLimits

0xd9d3,	// (0x0004ea9f) list_single_uniindi_pane_t1_ParamLimits

0x87b2,	// (0x0004987e) lc0_stat_clock_pane_ParamLimits

0x87b2,	// (0x0004987e) lc0_stat_clock_pane

0xe521,	// (0x0004f5ed) lc0_stat_indi_pane_g1_ParamLimits

0xe521,	// (0x0004f5ed) lc0_stat_indi_pane_g1

0xe52e,	// (0x0004f5fa) lc0_stat_indi_pane_g2_ParamLimits

0xe52e,	// (0x0004f5fa) lc0_stat_indi_pane_g2

0x0001,

0xfe09,	// (0x00050ed5) lc0_stat_indi_pane_g_ParamLimits

0xfe09,	// (0x00050ed5) lc0_stat_indi_pane_g

0x87bf,	// (0x0004988b) lc0_uni_indicator_pane_ParamLimits

0x87bf,	// (0x0004988b) lc0_uni_indicator_pane

0xe53b,	// (0x0004f607) ls0_title_pane_g1_ParamLimits

0xe53b,	// (0x0004f607) ls0_title_pane_g1

0xe54f,	// (0x0004f61b) ls0_title_pane_t1_ParamLimits

0xe54f,	// (0x0004f61b) ls0_title_pane_t1

0x87cc,	// (0x00049898) lc0_uni_indicator_pane_g1_ParamLimits

0x87cc,	// (0x00049898) lc0_uni_indicator_pane_g1

0xe585,	// (0x0004f651) lc0_stat_clock_pane_t1

0x08e3,	// (0x000419af) main_ai5_pane

0xe593,	// (0x0004f65f) ai5_sk_pane_ParamLimits

0xe593,	// (0x0004f65f) ai5_sk_pane

0xe5a0,	// (0x0004f66c) cell_ai5_widget_pane_ParamLimits

0xe5a0,	// (0x0004f66c) cell_ai5_widget_pane

0xe643,	// (0x0004f70f) aid_size_cell_widget_grid

0xe651,	// (0x0004f71d) bg_ai5_widget_pane_ParamLimits

0xe651,	// (0x0004f71d) bg_ai5_widget_pane

0xe6cd,	// (0x0004f799) cell_ai5_widget_pane_g2

0xe6e1,	// (0x0004f7ad) cell_ai5_widget_pane_g3

0xe6fb,	// (0x0004f7c7) cell_ai5_widget_pane_g4

0xe70b,	// (0x0004f7d7) cell_ai5_widget_pane_g5

0xe71b,	// (0x0004f7e7) cell_ai5_widget_pane_g6

0xe727,	// (0x0004f7f3) cell_ai5_widget_pane_g7

0xe793,	// (0x0004f85f) cell_ai5_widget_pane_t1_ParamLimits

0xe793,	// (0x0004f85f) cell_ai5_widget_pane_t1

0xe7b0,	// (0x0004f87c) cell_ai5_widget_pane_t2_ParamLimits

0xe7b0,	// (0x0004f87c) cell_ai5_widget_pane_t2

0xe7c8,	// (0x0004f894) cell_ai5_widget_pane_t3_ParamLimits

0xe7c8,	// (0x0004f894) cell_ai5_widget_pane_t3

0xe7e0,	// (0x0004f8ac) cell_ai5_widget_pane_t4_ParamLimits

0xe7e0,	// (0x0004f8ac) cell_ai5_widget_pane_t4

0xe806,	// (0x0004f8d2) cell_ai5_widget_pane_t5_ParamLimits

0xe806,	// (0x0004f8d2) cell_ai5_widget_pane_t5

0xe826,	// (0x0004f8f2) cell_ai5_widget_pane_t6_ParamLimits

0xe826,	// (0x0004f8f2) cell_ai5_widget_pane_t6

0xe838,	// (0x0004f904) cell_ai5_widget_pane_t7_ParamLimits

0xe838,	// (0x0004f904) cell_ai5_widget_pane_t7

0xe857,	// (0x0004f923) cell_ai5_widget_pane_t8_ParamLimits

0xe857,	// (0x0004f923) cell_ai5_widget_pane_t8

0x000b,

0xfe29,	// (0x00050ef5) cell_ai5_widget_pane_t_ParamLimits

0xfe29,	// (0x00050ef5) cell_ai5_widget_pane_t

0xe8db,	// (0x0004f9a7) grid_ai5_widget_pane

0x0f95,	// (0x00042061) highlight_cell_ai5_widget_pane_ParamLimits

0x0f95,	// (0x00042061) highlight_cell_ai5_widget_pane

0xe8e9,	// (0x0004f9b5) ai5_sk_left_pane

0xe8f3,	// (0x0004f9bf) ai5_sk_middle_pane

0xe8fd,	// (0x0004f9c9) ai5_sk_right_pane

0xe907,	// (0x0004f9d3) bg_ai5_widget_pane_g1_ParamLimits

0xe907,	// (0x0004f9d3) bg_ai5_widget_pane_g1

0xe913,	// (0x0004f9df) bg_ai5_widget_pane_g2_ParamLimits

0xe913,	// (0x0004f9df) bg_ai5_widget_pane_g2

0xe91f,	// (0x0004f9eb) bg_ai5_widget_pane_g3_ParamLimits

0xe91f,	// (0x0004f9eb) bg_ai5_widget_pane_g3

0xe92b,	// (0x0004f9f7) bg_ai5_widget_pane_g4_ParamLimits

0xe92b,	// (0x0004f9f7) bg_ai5_widget_pane_g4

0xe937,	// (0x0004fa03) bg_ai5_widget_pane_g5_ParamLimits

0xe937,	// (0x0004fa03) bg_ai5_widget_pane_g5

0xe943,	// (0x0004fa0f) bg_ai5_widget_pane_g6_ParamLimits

0xe943,	// (0x0004fa0f) bg_ai5_widget_pane_g6

0xe94f,	// (0x0004fa1b) bg_ai5_widget_pane_g7_ParamLimits

0xe94f,	// (0x0004fa1b) bg_ai5_widget_pane_g7

0xe95b,	// (0x0004fa27) bg_ai5_widget_pane_g8_ParamLimits

0xe95b,	// (0x0004fa27) bg_ai5_widget_pane_g8

0xe967,	// (0x0004fa33) bg_ai5_widget_pane_g9_ParamLimits

0xe967,	// (0x0004fa33) bg_ai5_widget_pane_g9

0x0008,

0xfe42,	// (0x00050f0e) bg_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00050f0e) bg_ai5_widget_pane_g

0xe99f,	// (0x0004fa6b) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99f,	// (0x0004fa6b) cell_shortcut_ai5_widget_pane

0x916c,	// (0x0004a238) bg_cell_shortcut_ai5_widget_pane

0xe9b2,	// (0x0004fa7e) cell_grid_ai5_widget_pane_g1

0x916c,	// (0x0004a238) highlight_cell_shortcut_ai5_widget_pane

0x99d9,	// (0x0004aaa5) ai5_sk_left_pane_g1

0xe9bb,	// (0x0004fa87) ai5_sk_left_pane_g2

0xe9c3,	// (0x0004fa8f) ai5_sk_left_pane_g3

0xe9cb,	// (0x0004fa97) ai5_sk_left_pane_g4

0x0003,

0xfe55,	// (0x00050f21) ai5_sk_left_pane_g

0xe9d3,	// (0x0004fa9f) ai5_sk_left_pane_t1

0x99d1,	// (0x0004aa9d) ai5_sk_right_pane_g1

0xe9e1,	// (0x0004faad) ai5_sk_right_pane_g2

0xe9e9,	// (0x0004fab5) ai5_sk_right_pane_g3

0xe9f1,	// (0x0004fabd) ai5_sk_right_pane_g4

0x0003,

0xfe5e,	// (0x00050f2a) ai5_sk_right_pane_g

0xe9f9,	// (0x0004fac5) ai5_sk_right_pane_t1

0x99d1,	// (0x0004aa9d) ai5_sk_middle_pane_g1

0x99d9,	// (0x0004aaa5) ai5_sk_middle_pane_g2

0x99f1,	// (0x0004aabd) ai5_sk_middle_pane_g3

0xe9e9,	// (0x0004fab5) ai5_sk_middle_pane_g4

0xe9c3,	// (0x0004fa8f) ai5_sk_middle_pane_g5

0xea07,	// (0x0004fad3) ai5_sk_middle_pane_g6

0xea0f,	// (0x0004fadb) ai5_sk_middle_pane_g7

0x0006,

0xfe67,	// (0x00050f33) ai5_sk_middle_pane_g

0x94f3,	// (0x0004a5bf) aid_touch_area_size_lc0_ParamLimits

0x94f3,	// (0x0004a5bf) aid_touch_area_size_lc0

0x7d71,	// (0x00048e3d) cell_hwr_candidate_pane_t1_ParamLimits

0x9511,	// (0x0004a5dd) aid_touch_navi_pane

0x9800,	// (0x0004a8cc) status_dt_navi_pane_ParamLimits

0x9800,	// (0x0004a8cc) status_dt_navi_pane

0x980d,	// (0x0004a8d9) status_dt_sta_pane_ParamLimits

0x980d,	// (0x0004a8d9) status_dt_sta_pane

0xea17,	// (0x0004fae3) dt_sta_controll_pane

0xea24,	// (0x0004faf0) dt_sta_indi_pane

0xea35,	// (0x0004fb01) dt_sta_title_pane

0x0a86,	// (0x00041b52) bg_dt_sta_indi_pane_ParamLimits

0x0a86,	// (0x00041b52) bg_dt_sta_indi_pane

0xea48,	// (0x0004fb14) dt_sta_battery_pane

0xea50,	// (0x0004fb1c) dt_sta_indi_pane_g1

0xea59,	// (0x0004fb25) dt_sta_indi_pane_g2

0xea62,	// (0x0004fb2e) dt_sta_indi_pane_g3

0x0002,

0xfe76,	// (0x00050f42) dt_sta_indi_pane_g

0xea6b,	// (0x0004fb37) dt_sta_signal_pane

0x0f95,	// (0x00042061) bg_dt_sta_title_pane_ParamLimits

0x0f95,	// (0x00042061) bg_dt_sta_title_pane

0xea74,	// (0x0004fb40) dt_sta_title_pane_g1

0xea7c,	// (0x0004fb48) dt_sta_title_pane_t1_ParamLimits

0xea7c,	// (0x0004fb48) dt_sta_title_pane_t1

0x08e3,	// (0x000419af) bg_dt_sta_control_pane

0xea91,	// (0x0004fb5d) dt_sta_controll_pane_g1

0xea9a,	// (0x0004fb66) bg_dt_sta_title_pane_g1

0xeaa3,	// (0x0004fb6f) bg_dt_sta_title_pane_g2

0xeaac,	// (0x0004fb78) bg_dt_sta_title_pane_g3

0x0002,

0xfe7d,	// (0x00050f49) bg_dt_sta_title_pane_g

0xbfc7,	// (0x0004d093) bg_dt_sta_indi_pane_g1

0xeab5,	// (0x0004fb81) dt_sta_signal_pane_g1

0xeabd,	// (0x0004fb89) dt_sta_signal_pane_g2

0x0001,

0xfe84,	// (0x00050f50) dt_sta_signal_pane_g

0xeac5,	// (0x0004fb91) dt_sta_battery_pane_g1

0xeace,	// (0x0004fb9a) dt_sta_battery_pane_t1

0xbfc7,	// (0x0004d093) bg_dt_sta_control_pane_g1

0x8c5f,	// (0x00049d2b) fep_china_uni_eep_pane

0x8c67,	// (0x00049d33) fep_china_uni_entry_pane_ParamLimits

0x8c77,	// (0x00049d43) popup_fep_china_uni_window_g1_ParamLimits

0x8c87,	// (0x00049d53) popup_fep_china_uni_window_g2_ParamLimits

0x8c87,	// (0x00049d53) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000507c9) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000507c9) popup_fep_china_uni_window_g

0xeadd,	// (0x0004fba9) fep_china_uni_eep_pane_g1

0xeae5,	// (0x0004fbb1) fep_china_uni_eep_pane_t1

0xe502,	// (0x0004f5ce) aid_touch_area_size_smil_player

0x9665,	// (0x0004a731) lc0_clock_pane

0x985c,	// (0x0004a928) status_pane_g5_ParamLimits

0x985c,	// (0x0004a928) status_pane_g5

0x711a,	// (0x000481e6) popup_keymap_window

0x9822,	// (0x0004a8ee) status_icon_pane

0xe6e1,	// (0x0004f7ad) cell_ai5_widget_pane_g3_ParamLimits

0xe6fb,	// (0x0004f7c7) cell_ai5_widget_pane_g4_ParamLimits

0xe70b,	// (0x0004f7d7) cell_ai5_widget_pane_g5_ParamLimits

0xe733,	// (0x0004f7ff) cell_ai5_widget_pane_g8_ParamLimits

0xe733,	// (0x0004f7ff) cell_ai5_widget_pane_g8

0xe747,	// (0x0004f813) cell_ai5_widget_pane_g9_ParamLimits

0xe747,	// (0x0004f813) cell_ai5_widget_pane_g9

0xe75b,	// (0x0004f827) cell_ai5_widget_pane_g10_ParamLimits

0xe75b,	// (0x0004f827) cell_ai5_widget_pane_g10

0xeaf4,	// (0x0004fbc0) status_icon_pane_g1

0x08e3,	// (0x000419af) bg_popup_sub_pane_cp13

0xeafc,	// (0x0004fbc8) popup_keymap_window_t1

0x9444,	// (0x0004a510) control_pane_g6_ParamLimits

0x9444,	// (0x0004a510) control_pane_g6

0x9451,	// (0x0004a51d) control_pane_g7_ParamLimits

0x9451,	// (0x0004a51d) control_pane_g7

0x945e,	// (0x0004a52a) control_pane_g8_ParamLimits

0x945e,	// (0x0004a52a) control_pane_g8

0xea17,	// (0x0004fae3) dt_sta_controll_pane_ParamLimits

0xea24,	// (0x0004faf0) dt_sta_indi_pane_ParamLimits

0xea35,	// (0x0004fb01) dt_sta_title_pane_ParamLimits

0x0ed7,	// (0x00041fa3) aid_size_touch_scroll_bar_cale

0x6115,	// (0x000471e1) popup_discreet_window_ParamLimits

0x6115,	// (0x000471e1) popup_discreet_window

0x61a3,	// (0x0004726f) popup_sk_window

0xa02f,	// (0x0004b0fb) bg_popup_sub_pane_cp28_ParamLimits

0xa02f,	// (0x0004b0fb) bg_popup_sub_pane_cp28

0xeb0a,	// (0x0004fbd6) popup_discreet_window_g1_ParamLimits

0xeb0a,	// (0x0004fbd6) popup_discreet_window_g1

0xeb2a,	// (0x0004fbf6) popup_discreet_window_t1_ParamLimits

0xeb2a,	// (0x0004fbf6) popup_discreet_window_t1

0xeb48,	// (0x0004fc14) popup_discreet_window_t2_ParamLimits

0xeb48,	// (0x0004fc14) popup_discreet_window_t2

0x0002,

0xfe89,	// (0x00050f55) popup_discreet_window_t_ParamLimits

0xfe89,	// (0x00050f55) popup_discreet_window_t

0x87df,	// (0x000498ab) popup_sk_window_g1

0x87e9,	// (0x000498b5) popup_sk_window_g2

0x0001,

0xfe90,	// (0x00050f5c) popup_sk_window_g

0x87f1,	// (0x000498bd) popup_sk_window_t1

0x87ff,	// (0x000498cb) popup_sk_window_t1_copy1

0xe6cd,	// (0x0004f799) cell_ai5_widget_pane_g2_ParamLimits

0xe869,	// (0x0004f935) cell_ai5_widget_pane_t9_ParamLimits

0xe869,	// (0x0004f935) cell_ai5_widget_pane_t9

0x08e3,	// (0x000419af) main_fep_fshwr2_pane

0x880d,	// (0x000498d9) aid_fshwr2_btn_pane

0x881d,	// (0x000498e9) aid_fshwr2_syb_pane

0x8831,	// (0x000498fd) aid_fshwr2_txt_pane

0x8841,	// (0x0004990d) fshwr2_func_candi_pane

0x8861,	// (0x0004992d) fshwr2_hwr_syb_pane

0x8877,	// (0x00049943) fshwr2_icf_pane

0x08e3,	// (0x000419af) fshwr2_icf_bg_pane

0x88ab,	// (0x00049977) fshwr2_icf_pane_t1_ParamLimits

0x88ab,	// (0x00049977) fshwr2_icf_pane_t1

0x4401,	// (0x000454cd) fshwr2_func_candi_pane_g1

0xeb9a,	// (0x0004fc66) fshwr2_func_candi_row_pane_ParamLimits

0xeb9a,	// (0x0004fc66) fshwr2_func_candi_row_pane

0x88c3,	// (0x0004998f) cell_fshwr2_syb_pane_ParamLimits

0x88c3,	// (0x0004998f) cell_fshwr2_syb_pane

0xe4d2,	// (0x0004f59e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4d2,	// (0x0004f59e) fshwr2_hwr_syb_pane_g1

0x08e3,	// (0x000419af) bg_popup_call_pane_cp01

0x88e4,	// (0x000499b0) fshwr2_func_candi_cell_pane_ParamLimits

0x88e4,	// (0x000499b0) fshwr2_func_candi_cell_pane

0xa6a6,	// (0x0004b772) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6a6,	// (0x0004b772) fshwr2_func_candi_cell_bg_pane

0x8935,	// (0x00049a01) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8935,	// (0x00049a01) fshwr2_func_candi_cell_pane_g1

0x8960,	// (0x00049a2c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8960,	// (0x00049a2c) fshwr2_func_candi_cell_pane_t1

0x08e3,	// (0x000419af) bg_button_pane_cp08

0x9493,	// (0x0004a55f) cell_fshwr2_syb_bg_pane

0x8973,	// (0x00049a3f) cell_fshwr2_syb_bg_pane_g1

0x8987,	// (0x00049a53) cell_fshwr2_syb_bg_pane_t1

0x0f95,	// (0x00042061) main_tmo_pane

0xab53,	// (0x0004bc1f) uni_indicator_pane_g1_ParamLimits

0xab69,	// (0x0004bc35) uni_indicator_pane_g2_ParamLimits

0xab7f,	// (0x0004bc4b) uni_indicator_pane_g3_ParamLimits

0xab92,	// (0x0004bc5e) uni_indicator_pane_g4_ParamLimits

0xab92,	// (0x0004bc5e) uni_indicator_pane_g4

0xaba6,	// (0x0004bc72) uni_indicator_pane_g5_ParamLimits

0xaba6,	// (0x0004bc72) uni_indicator_pane_g5

0xaba6,	// (0x0004bc72) uni_indicator_pane_g6_ParamLimits

0xaba6,	// (0x0004bc72) uni_indicator_pane_g6

0xf901,	// (0x000509cd) uni_indicator_pane_g_ParamLimits

0xd4e0,	// (0x0004e5ac) popup_tmo_note_window_ParamLimits

0xd4e0,	// (0x0004e5ac) popup_tmo_note_window

0x0f95,	// (0x00042061) fshwr2_bg_pane

0x8951,	// (0x00049a1d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8951,	// (0x00049a1d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe95,	// (0x00050f61) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe95,	// (0x00050f61) fshwr2_func_candi_cell_pane_g

0xbfc7,	// (0x0004d093) bg_popup_window_pane_cp01

0x899d,	// (0x00049a69) bg_popup_window_pane_g1_cp01

0xebbd,	// (0x0004fc89) bg_popup_window_pane_cp22_ParamLimits

0xebbd,	// (0x0004fc89) bg_popup_window_pane_cp22

0xebcb,	// (0x0004fc97) listscroll_tmo_link_pane_ParamLimits

0xebcb,	// (0x0004fc97) listscroll_tmo_link_pane

0xec0b,	// (0x0004fcd7) popup_tmo_note_window_g1_ParamLimits

0xec0b,	// (0x0004fcd7) popup_tmo_note_window_g1

0xec18,	// (0x0004fce4) tmo_note_info_pane_ParamLimits

0xec18,	// (0x0004fce4) tmo_note_info_pane

0xec32,	// (0x0004fcfe) list_tmo_note_info_pane_g1_ParamLimits

0xec32,	// (0x0004fcfe) list_tmo_note_info_pane_g1

0xec49,	// (0x0004fd15) list_tmo_note_info_pane_g2_ParamLimits

0xec49,	// (0x0004fd15) list_tmo_note_info_pane_g2

0x0001,

0xfe9a,	// (0x00050f66) list_tmo_note_info_pane_g_ParamLimits

0xfe9a,	// (0x00050f66) list_tmo_note_info_pane_g

0xec65,	// (0x0004fd31) list_tmo_note_info_text_pane_ParamLimits

0xec65,	// (0x0004fd31) list_tmo_note_info_text_pane

0xecea,	// (0x0004fdb6) list_tmo_link_pane

0xecf7,	// (0x0004fdc3) scroll_pane_cp20

0xed04,	// (0x0004fdd0) list_single_tmo_link_pane_ParamLimits

0xed04,	// (0x0004fdd0) list_single_tmo_link_pane

0xed14,	// (0x0004fde0) list_single_tmo_link_pane_t1

0xed22,	// (0x0004fdee) list_tmo_note_info_text_pane_t1_ParamLimits

0xed22,	// (0x0004fdee) list_tmo_note_info_text_pane_t1

0x66da,	// (0x000477a6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x66da,	// (0x000477a6) aid_size_touch_scroll_bar_cp01

0x554a,	// (0x00046616) aid_size_touch_slider_marker

0x618b,	// (0x00047257) popup_settings_window_ParamLimits

0x618b,	// (0x00047257) popup_settings_window

0x56c0,	// (0x0004678c) popup_candi_list_indi_window

0x9511,	// (0x0004a5dd) aid_touch_navi_pane_ParamLimits

0x7fc2,	// (0x0004908e) rs_clock_indi_pane

0x7fcb,	// (0x00049097) sctrl_sk_bottom_pane_ParamLimits

0x7fdc,	// (0x000490a8) sctrl_sk_top_pane_ParamLimits

0x80bd,	// (0x00049189) popup_fep_tooltip_window

0xe643,	// (0x0004f70f) aid_size_cell_widget_grid_ParamLimits

0xe6b8,	// (0x0004f784) cell_ai5_widget_pane_g1_ParamLimits

0xe6b8,	// (0x0004f784) cell_ai5_widget_pane_g1

0xe71b,	// (0x0004f7e7) cell_ai5_widget_pane_g6_ParamLimits

0xe727,	// (0x0004f7f3) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0e,	// (0x00050eda) cell_ai5_widget_pane_g_ParamLimits

0xfe0e,	// (0x00050eda) cell_ai5_widget_pane_g

0xe898,	// (0x0004f964) cell_ai5_widget_pane_t10_ParamLimits

0xe898,	// (0x0004f964) cell_ai5_widget_pane_t10

0xe8db,	// (0x0004f9a7) grid_ai5_widget_pane_ParamLimits

0xe973,	// (0x0004fa3f) cell_contacts_ai5_widget_pane_ParamLimits

0xe973,	// (0x0004fa3f) cell_contacts_ai5_widget_pane

0xeb5d,	// (0x0004fc29) popup_discreet_window_t3_ParamLimits

0xeb5d,	// (0x0004fc29) popup_discreet_window_t3

0x8893,	// (0x0004995f) popup_fshwr2_char_preview_window_ParamLimits

0x8893,	// (0x0004995f) popup_fshwr2_char_preview_window

0xec83,	// (0x0004fd4f) tmo_note_info_pane_t1

0xec98,	// (0x0004fd64) tmo_note_info_pane_t2

0xecb1,	// (0x0004fd7d) tmo_note_info_pane_t3

0xecc6,	// (0x0004fd92) tmo_note_info_pane_t4

0xecd8,	// (0x0004fda4) tmo_note_info_pane_t5

0x0004,

0xfe9f,	// (0x00050f6b) tmo_note_info_pane_t

0xecea,	// (0x0004fdb6) list_tmo_link_pane_ParamLimits

0xecf7,	// (0x0004fdc3) scroll_pane_cp20_ParamLimits

0x08e3,	// (0x000419af) bg_popup_fep_char_preview_window_cp01

0xed3b,	// (0x0004fe07) popup_fshwr2_char_preview_window_t1

0xed49,	// (0x0004fe15) popup_candi_list_indi_window_g1

0xed52,	// (0x0004fe1e) bg_cell_contacts_ai5_widget_pane

0xed5e,	// (0x0004fe2a) cell_contacts_ai5_widget_pane_g1

0xed73,	// (0x0004fe3f) cell_contacts_ai5_widget_pane_g2

0xed7f,	// (0x0004fe4b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaa,	// (0x00050f76) cell_contacts_ai5_widget_pane_g

0xed8b,	// (0x0004fe57) cell_contacts_ai5_widget_pane_t1

0x0f95,	// (0x00042061) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee02,	// (0x0004fece) settings_container_pane

0x916c,	// (0x0004a238) listscroll_set_pane_copy1

0xb6f8,	// (0x0004c7c4) scroll_pane_cp121_copy1

0xee0e,	// (0x0004feda) set_content_pane_copy1

0xee16,	// (0x0004fee2) aid_height_set_list_copy1_ParamLimits

0xee16,	// (0x0004fee2) aid_height_set_list_copy1

0xada6,	// (0x0004be72) aid_size_parent_copy1_ParamLimits

0xada6,	// (0x0004be72) aid_size_parent_copy1

0xee22,	// (0x0004feee) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee22,	// (0x0004feee) button_value_adjust_pane_cp6_copy1

0x9493,	// (0x0004a55f) list_highlight_pane_cp2_copy1_ParamLimits

0x9493,	// (0x0004a55f) list_highlight_pane_cp2_copy1

0xee36,	// (0x0004ff02) list_set_pane_copy1_ParamLimits

0xee36,	// (0x0004ff02) list_set_pane_copy1

0xed9d,	// (0x0004fe69) main_pane_set_t1_copy1_ParamLimits

0xed9d,	// (0x0004fe69) main_pane_set_t1_copy1

0xedd7,	// (0x0004fea3) main_pane_set_t2_copy1_ParamLimits

0xedd7,	// (0x0004fea3) main_pane_set_t2_copy1

0xeef7,	// (0x0004ffc3) main_pane_set_t3_copy1

0xef05,	// (0x0004ffd1) main_pane_set_t4_copy1

0xedf6,	// (0x0004fec2) set_content_pane_g1_copy1_ParamLimits

0xedf6,	// (0x0004fec2) set_content_pane_g1_copy1

0xef13,	// (0x0004ffdf) setting_code_pane_copy1

0xef1b,	// (0x0004ffe7) setting_slider_graphic_pane_copy1

0xef1b,	// (0x0004ffe7) setting_slider_pane_copy1

0xef23,	// (0x0004ffef) setting_text_pane_copy1

0xef23,	// (0x0004ffef) setting_volume_pane_copy1

0xef13,	// (0x0004ffdf) settings_code_pane_cp2_copy1

0xef2b,	// (0x0004fff7) settings_code_pane_cp_copy1_ParamLimits

0xef2b,	// (0x0004fff7) settings_code_pane_cp_copy1

0x89a6,	// (0x00049a72) volume_set_pane_copy1

0xef3f,	// (0x0005000b) volume_set_pane_g10_copy1

0xef4b,	// (0x00050017) volume_set_pane_g1_copy1

0xef55,	// (0x00050021) volume_set_pane_g2_copy1

0xef5f,	// (0x0005002b) volume_set_pane_g3_copy1

0xef69,	// (0x00050035) volume_set_pane_g4_copy1

0xef73,	// (0x0005003f) volume_set_pane_g5_copy1

0xef7d,	// (0x00050049) volume_set_pane_g6_copy1

0xef87,	// (0x00050053) volume_set_pane_g7_copy1

0xef91,	// (0x0005005d) volume_set_pane_g8_copy1

0xef9b,	// (0x00050067) volume_set_pane_g9_copy1

0x0953,	// (0x00041a1f) bg_set_opt_pane_cp_copy1_ParamLimits

0x0953,	// (0x00041a1f) bg_set_opt_pane_cp_copy1

0x89b2,	// (0x00049a7e) setting_slider_pane_t1_copy1_ParamLimits

0x89b2,	// (0x00049a7e) setting_slider_pane_t1_copy1

0x89d1,	// (0x00049a9d) setting_slider_pane_t2_copy1_ParamLimits

0x89d1,	// (0x00049a9d) setting_slider_pane_t2_copy1

0x89eb,	// (0x00049ab7) setting_slider_pane_t3_copy1_ParamLimits

0x89eb,	// (0x00049ab7) setting_slider_pane_t3_copy1

0x8a03,	// (0x00049acf) slider_set_pane_copy1_ParamLimits

0x8a03,	// (0x00049acf) slider_set_pane_copy1

0x0fed,	// (0x000420b9) set_opt_bg_pane_g1_copy2

0x0ff5,	// (0x000420c1) set_opt_bg_pane_g2_copy2

0xefa7,	// (0x00050073) set_opt_bg_pane_g3_copy2

0x1005,	// (0x000420d1) set_opt_bg_pane_g4_copy2

0x100d,	// (0x000420d9) set_opt_bg_pane_g5_copy2

0x1015,	// (0x000420e1) set_opt_bg_pane_g6_copy2

0xefb1,	// (0x0005007d) set_opt_bg_pane_g7_copy2

0xefbb,	// (0x00050087) set_opt_bg_pane_g8_copy2

0xefc5,	// (0x00050091) set_opt_bg_pane_g9_copy2

0x8a19,	// (0x00049ae5) aid_size_touch_slider_mark_copy1_ParamLimits

0x8a19,	// (0x00049ae5) aid_size_touch_slider_mark_copy1

0xefcf,	// (0x0005009b) slider_set_pane_g1_copy1

0x8a2d,	// (0x00049af9) slider_set_pane_g2_copy1

0x78c7,	// (0x00048993) slider_set_pane_g3_copy1_ParamLimits

0x78c7,	// (0x00048993) slider_set_pane_g3_copy1

0x78db,	// (0x000489a7) slider_set_pane_g4_copy1_ParamLimits

0x78db,	// (0x000489a7) slider_set_pane_g4_copy1

0x78f3,	// (0x000489bf) slider_set_pane_g5_copy1_ParamLimits

0x78f3,	// (0x000489bf) slider_set_pane_g5_copy1

0x78c7,	// (0x00048993) slider_set_pane_g6_copy1_ParamLimits

0x78c7,	// (0x00048993) slider_set_pane_g6_copy1

0x8a35,	// (0x00049b01) slider_set_pane_g7_copy1_ParamLimits

0x8a35,	// (0x00049b01) slider_set_pane_g7_copy1

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp2_copy1

0xefd8,	// (0x000500a4) setting_slider_graphic_pane_g1_copy1

0xefe1,	// (0x000500ad) setting_slider_graphic_pane_t1_copy1

0xeff1,	// (0x000500bd) setting_slider_graphic_pane_t2_copy1

0xf001,	// (0x000500cd) slider_set_pane_cp_copy1

0xf011,	// (0x000500dd) input_focus_pane_cp1_copy1

0xf01a,	// (0x000500e6) list_set_text_pane_copy1

0xf022,	// (0x000500ee) setting_text_pane_g1_copy1

0x4f45,	// (0x00046011) set_text_pane_t1_copy1

0xf011,	// (0x000500dd) input_focus_pane_cp2_copy1

0xf022,	// (0x000500ee) setting_code_pane_g1_copy1

0xf02b,	// (0x000500f7) setting_code_pane_t1_copy1

0xb4fd,	// (0x0004c5c9) list_set_graphic_pane_copy1

0x08f7,	// (0x000419c3) bg_set_opt_pane_cp4_copy1

0x8e5c,	// (0x00049f28) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e5c,	// (0x00049f28) list_set_graphic_pane_g1_copy1

0xf039,	// (0x00050105) list_set_graphic_pane_g2_copy1

0x8e74,	// (0x00049f40) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e74,	// (0x00049f40) list_set_graphic_pane_t1_copy1

0xbfc7,	// (0x0004d093) rs_clock_indi_pane_g1

0xf041,	// (0x0005010d) rs_clock_indi_pane_t1

0xf04f,	// (0x0005011b) rs_indi_pane

0xf057,	// (0x00050123) rs_indi_pane_g1

0xf060,	// (0x0005012c) rs_indi_pane_g2

0xf069,	// (0x00050135) rs_indi_pane_g3

0x0002,

0xfeb1,	// (0x00050f7d) rs_indi_pane_g

0x916c,	// (0x0004a238) bg_popup_preview_window_pane_cp03

0xf072,	// (0x0005013e) popup_fep_tooltip_window_t1

0xcc8c,	// (0x0004dd58) popup_note2_window_g2_ParamLimits

0xcc8c,	// (0x0004dd58) popup_note2_window_g2

0x0001,

0xfc3e,	// (0x00050d0a) popup_note2_window_g_ParamLimits

0xfc3e,	// (0x00050d0a) popup_note2_window_g

0xd194,	// (0x0004e260) bg_popup_sub_pane_cp11_ParamLimits

0xd1a1,	// (0x0004e26d) cell_ai3_links_pane_g1_ParamLimits

0xd1b8,	// (0x0004e284) cell_ai3_links_pane_t1

0x4f45,	// (0x00046011) set_text_pane_t1_copy1_ParamLimits

0x906e,	// (0x0004a13a) cell_graphic_popup_pane_cp2_ParamLimits

0x906e,	// (0x0004a13a) cell_graphic_popup_pane_cp2

0xf080,	// (0x0005014c) cell_graphic_popup_pane_g1_cp2

0x0cea,	// (0x00041db6) cell_graphic_popup_pane_g2_cp2

0xf088,	// (0x00050154) cell_graphic_popup_pane_g3_cp2

0xf090,	// (0x0005015c) cell_graphic_popup_pane_t2_cp2

0x0cfb,	// (0x00041dc7) grid_highlight_pane_cp3_cp2

0x4207,	// (0x000452d3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0f95,	// (0x00042061) main_tmo_pane_ParamLimits

0xd4d4,	// (0x0004e5a0) popup_tmo_big_image_note_window

0xe6a7,	// (0x0004f773) cell_ai5_widget_list_pane

0xe6af,	// (0x0004f77b) cell_ai5_widget_lrg_icon_pane

0xec83,	// (0x0004fd4f) tmo_note_info_pane_t1_ParamLimits

0xec98,	// (0x0004fd64) tmo_note_info_pane_t2_ParamLimits

0xecb1,	// (0x0004fd7d) tmo_note_info_pane_t3_ParamLimits

0xecc6,	// (0x0004fd92) tmo_note_info_pane_t4_ParamLimits

0xecd8,	// (0x0004fda4) tmo_note_info_pane_t5_ParamLimits

0xfe9f,	// (0x00050f6b) tmo_note_info_pane_t_ParamLimits

0xee02,	// (0x0004fece) settings_container_pane_ParamLimits

0xf009,	// (0x000500d5) indicator_popup_pane_cp5

0xf009,	// (0x000500d5) indicator_popup_pane_cp6

0xb4fd,	// (0x0004c5c9) list_set_graphic_pane_copy1_ParamLimits

0x08e3,	// (0x000419af) bg_popup_window_pane_cp23

0xf09e,	// (0x0005016a) popup_tmo_big_image_note_window_g1

0xf0aa,	// (0x00050176) popup_tmo_big_image_note_window_t1

0xf0ba,	// (0x00050186) popup_tmo_big_image_note_window_t2

0xf0ca,	// (0x00050196) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb8,	// (0x00050f84) popup_tmo_big_image_note_window_t

0xbfc7,	// (0x0004d093) cell_ai5_widget_lrg_icon_pane_g1

0xf0da,	// (0x000501a6) cell_ai5_widget_lrg_icon_pane_t1

0xf0e8,	// (0x000501b4) cell_ai5_widget_list_row_pane_ParamLimits

0xf0e8,	// (0x000501b4) cell_ai5_widget_list_row_pane

0xf100,	// (0x000501cc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf100,	// (0x000501cc) cell_ai5_widget_list_row_pane_g1

0xf10d,	// (0x000501d9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf10d,	// (0x000501d9) cell_ai5_widget_list_row_pane_t1

0xf138,	// (0x00050204) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf138,	// (0x00050204) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebf,	// (0x00050f8b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebf,	// (0x00050f8b) cell_ai5_widget_list_row_pane_t

0x08e3,	// (0x000419af) main_fep_vtchi_ss_pane

0xf188,	// (0x00050254) popup_fep_char_pre_window

0xf190,	// (0x0005025c) popup_fep_ituss_window

0xf1bc,	// (0x00050288) popup_fep_vkbss_window

0x9493,	// (0x0004a55f) grid_vkbss_keypad_pane_ParamLimits

0x9493,	// (0x0004a55f) grid_vkbss_keypad_pane

0xf1fe,	// (0x000502ca) ituss_keypad_pane

0x8a55,	// (0x00049b21) aid_vkbss_key_offset_ParamLimits

0x8a55,	// (0x00049b21) aid_vkbss_key_offset

0x8a61,	// (0x00049b2d) cell_vkbss_key_pane_ParamLimits

0x8a61,	// (0x00049b2d) cell_vkbss_key_pane

0xf20a,	// (0x000502d6) bg_cell_vkbss_key_g1_ParamLimits

0xf20a,	// (0x000502d6) bg_cell_vkbss_key_g1

0xf216,	// (0x000502e2) cell_vkbss_key_3p_pane_ParamLimits

0xf216,	// (0x000502e2) cell_vkbss_key_3p_pane

0xf24c,	// (0x00050318) cell_vkbss_key_g1_ParamLimits

0xf24c,	// (0x00050318) cell_vkbss_key_g1

0xf282,	// (0x0005034e) cell_vkbss_key_t1_ParamLimits

0xf282,	// (0x0005034e) cell_vkbss_key_t1

0x8abf,	// (0x00049b8b) cell_ituss_key_pane_ParamLimits

0x8abf,	// (0x00049b8b) cell_ituss_key_pane

0xf2de,	// (0x000503aa) bg_cell_ituss_key_g1_ParamLimits

0xf2de,	// (0x000503aa) bg_cell_ituss_key_g1

0xf2ea,	// (0x000503b6) cell_ituss_key_pane_g1_ParamLimits

0xf2ea,	// (0x000503b6) cell_ituss_key_pane_g1

0x8ad0,	// (0x00049b9c) cell_ituss_key_pane_g2_ParamLimits

0x8ad0,	// (0x00049b9c) cell_ituss_key_pane_g2

0x0005,

0xfec6,	// (0x00050f92) cell_ituss_key_pane_g_ParamLimits

0xfec6,	// (0x00050f92) cell_ituss_key_pane_g

0x8b54,	// (0x00049c20) cell_ituss_key_t1_ParamLimits

0x8b54,	// (0x00049c20) cell_ituss_key_t1

0x8b8e,	// (0x00049c5a) cell_ituss_key_t2_ParamLimits

0x8b8e,	// (0x00049c5a) cell_ituss_key_t2

0x8bc0,	// (0x00049c8c) cell_ituss_key_t3_ParamLimits

0x8bc0,	// (0x00049c8c) cell_ituss_key_t3

0x8bf1,	// (0x00049cbd) cell_ituss_key_t4_ParamLimits

0x8bf1,	// (0x00049cbd) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x00050f9f) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x00050f9f) cell_ituss_key_t

0xf310,	// (0x000503dc) cell_vkbss_key_3p_pane_g1

0xf318,	// (0x000503e4) cell_vkbss_key_3p_pane_g2

0xf320,	// (0x000503ec) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x00050faa) cell_vkbss_key_3p_pane_g

0x916c,	// (0x0004a238) bg_popup_fep_char_preview_window_cp02

0xf328,	// (0x000503f4) popup_fep_char_pre_window_t1

0xe630,	// (0x0004f6fc) main_ai5_sk_pane

0xed52,	// (0x0004fe1e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5e,	// (0x0004fe2a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed73,	// (0x0004fe3f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7f,	// (0x0004fe4b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaa,	// (0x00050f76) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8b,	// (0x0004fe57) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0f95,	// (0x00042061) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf336,	// (0x00050402) main_ai5_sk_pane_g1

0x9e67,	// (0x0004af33) popup_query_code_window_g1

0xf1a6,	// (0x00050272) popup_fep_vkb_icf_pane

0xf1d5,	// (0x000502a1) popup_fep_vtchi_icf_pane

0xf33f,	// (0x0005040b) bg_icf_pane

0xf33f,	// (0x0005040b) list_vkb_icf_pane

0xf34b,	// (0x00050417) bg_icf_pane_cp01

0xf35e,	// (0x0005042a) vtchi_icf_list_pane

0xf3be,	// (0x0005048a) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0005048a) list_vkb_icf_pane_t1

0xf3da,	// (0x000504a6) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x000504a6) vtchi_icf_list_pane_t1

0xf190,	// (0x0005025c) popup_fep_ituss_window_ParamLimits

0xf1d5,	// (0x000502a1) popup_fep_vtchi_icf_pane_ParamLimits

0xf1fe,	// (0x000502ca) ituss_keypad_pane_ParamLimits

0x8a4b,	// (0x00049b17) ituss_sks_pane

0xf33f,	// (0x0005040b) bg_icf_pane_ParamLimits

0xf160,	// (0x0005022c) icf_edit_indi_pane_ParamLimits

0xf160,	// (0x0005022c) icf_edit_indi_pane

0xf33f,	// (0x0005040b) list_vkb_icf_pane_ParamLimits

0xf34b,	// (0x00050417) bg_icf_pane_cp01_ParamLimits

0xf17b,	// (0x00050247) icf_edit_indi_pane_cp01_ParamLimits

0xf17b,	// (0x00050247) icf_edit_indi_pane_cp01

0xf35e,	// (0x0005042a) vtchi_query_pane

0xe4d2,	// (0x0004f59e) icf_edit_indi_pane_g1_ParamLimits

0xe4d2,	// (0x0004f59e) icf_edit_indi_pane_g1

0xf44a,	// (0x00050516) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x00050516) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x00050fd5) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x00050fd5) icf_edit_indi_pane_g

0xf45e,	// (0x0005052a) icf_edit_indi_pane_t1

0xf3f3,	// (0x000504bf) bg_input_focus_pane_cp042

0x0ece,	// (0x00041f9a) vtchi_button_pane

0xf3fc,	// (0x000504c8) vtchi_query_pane_t1

0xf40a,	// (0x000504d6) vtchi_query_pane_t2

0xf418,	// (0x000504e4) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x00050fc4) vtchi_query_pane_t

0x08e3,	// (0x000419af) bg_button_pane_cp13

0xf426,	// (0x000504f2) vtchi_button_pane_g1

0x8c34,	// (0x00049d00) ituss_sks_pane_g1

0x8c3f,	// (0x00049d0b) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x00050fcb) ituss_sks_pane_g

0xf42e,	// (0x000504fa) ituss_sks_pane_t1

0xf43c,	// (0x00050508) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x00050fd0) ituss_sks_pane_t

0xba9b,	// (0x0004cb67) indicator_nsta_pane_cp_g1

0xbaa4,	// (0x0004cb70) indicator_nsta_pane_cp_g2

0xbaac,	// (0x0004cb78) indicator_nsta_pane_cp_g3

0xbab4,	// (0x0004cb80) indicator_nsta_pane_cp_g4

0xbaa4,	// (0x0004cb70) indicator_nsta_pane_cp_g5

0xbaac,	// (0x0004cb78) indicator_nsta_pane_cp_g6

0x0005,

0xfa88,	// (0x00050b54) indicator_nsta_pane_cp_g

0xe1f8,	// (0x0004f2c4) cell_graphic2_pane_t2_ParamLimits

0xe1f8,	// (0x0004f2c4) cell_graphic2_pane_t2

0x0001,

0xfd95,	// (0x00050e61) cell_graphic2_pane_t_ParamLimits

0xfd95,	// (0x00050e61) cell_graphic2_pane_t

0xe224,	// (0x0004f2f0) cell_graphic2_control_pane_t1

0x6b3e,	// (0x00047c0a) signal_pane_g3_ParamLimits

0x6b3e,	// (0x00047c0a) signal_pane_g3

0x6b4d,	// (0x00047c19) signal_pane_g4_ParamLimits

0x6b4d,	// (0x00047c19) signal_pane_g4

0xf14a,	// (0x00050216) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14a,	// (0x00050216) cell_ai5_widget_list_row_pane_t3

0xf2fe,	// (0x000503ca) cell_ituss_key_pane_t1_ParamLimits

0xf2fe,	// (0x000503ca) cell_ituss_key_pane_t1

0x9ace,	// (0x0004ab9a) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ace,	// (0x0004ab9a) form_field_data_wide_pane_vc_t2

0x9ae2,	// (0x0004abae) form_field_data_wide_pane_vc_t3_ParamLimits

0x9ae2,	// (0x0004abae) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x000508b5) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x000508b5) form_field_data_wide_pane_vc_t

0xb738,	// (0x0004c804) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb738,	// (0x0004c804) form_field_slider_wide_pane_vc_t3

0xb80e,	// (0x0004c8da) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb80e,	// (0x0004c8da) form_field_popup_wide_pane_vc_t2

0xb825,	// (0x0004c8f1) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb825,	// (0x0004c8f1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa77,	// (0x00050b43) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa77,	// (0x00050b43) form_field_popup_wide_pane_vc_t

0x880d,	// (0x000498d9) aid_fshwr2_btn_pane_ParamLimits

0x881d,	// (0x000498e9) aid_fshwr2_syb_pane_ParamLimits

0x8831,	// (0x000498fd) aid_fshwr2_txt_pane_ParamLimits

0x0f95,	// (0x00042061) fshwr2_bg_pane_ParamLimits

0x8841,	// (0x0004990d) fshwr2_func_candi_pane_ParamLimits

0x8861,	// (0x0004992d) fshwr2_hwr_syb_pane_ParamLimits

0x8877,	// (0x00049943) fshwr2_icf_pane_ParamLimits

0x5b50,	// (0x00046c1c) list_double_graphic_pane_vc_g4_ParamLimits

0x5b50,	// (0x00046c1c) list_double_graphic_pane_vc_g4

0x8af0,	// (0x00049bbc) cell_ituss_key_pane_g3_ParamLimits

0x8af0,	// (0x00049bbc) cell_ituss_key_pane_g3

0x8c22,	// (0x00049cee) cell_ituss_key_t5_ParamLimits

0x8c22,	// (0x00049cee) cell_ituss_key_t5

0xf1bc,	// (0x00050288) popup_fep_vkbss_window_ParamLimits

0xe63a,	// (0x0004f706) aid_cell_ai5_quarter

0xf45e,	// (0x0005052a) icf_edit_indi_pane_t1_ParamLimits

0x0b2e,	// (0x00041bfa) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0b2e,	// (0x00041bfa) aid_tch_indicator_popup_pane_cp2

0x0b41,	// (0x00041c0d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0b41,	// (0x00041c0d) aid_tch_query_popup_data_pane_cp2

0x9e0f,	// (0x0004aedb) aid_tch_query_popup_pane_ParamLimits

0x9e0f,	// (0x0004aedb) aid_tch_query_popup_pane

0x9e0f,	// (0x0004aedb) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e0f,	// (0x0004aedb) aid_tch_query_popup_data_pane_cp1

0x9493,	// (0x0004a55f) cell_fshwr2_syb_bg_pane_ParamLimits

0x8973,	// (0x00049a3f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8987,	// (0x00049a53) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a6,	// (0x00050272) popup_fep_vkb_icf_pane_ParamLimits

0x8661,	// (0x0004972d) bg_popup_fep_char_preview_window_g10

0xe76f,	// (0x0004f83b) cell_ai5_widget_pane_g11_ParamLimits

0xe76f,	// (0x0004f83b) cell_ai5_widget_pane_g11

0xe77b,	// (0x0004f847) cell_ai5_widget_pane_g12_ParamLimits

0xe77b,	// (0x0004f847) cell_ai5_widget_pane_g12

0xe787,	// (0x0004f853) cell_ai5_widget_pane_g13_ParamLimits

0xe787,	// (0x0004f853) cell_ai5_widget_pane_g13

0xe8b7,	// (0x0004f983) cell_ai5_widget_pane_t11_ParamLimits

0xe8b7,	// (0x0004f983) cell_ai5_widget_pane_t11

0xe8c9,	// (0x0004f995) cell_ai5_widget_pane_t12_ParamLimits

0xe8c9,	// (0x0004f995) cell_ai5_widget_pane_t12

0x8afc,	// (0x00049bc8) cell_ituss_key_pane_g4_ParamLimits

0x8afc,	// (0x00049bc8) cell_ituss_key_pane_g4

0x8b18,	// (0x00049be4) cell_ituss_key_pane_g5_ParamLimits

0x8b18,	// (0x00049be4) cell_ituss_key_pane_g5

0x8b34,	// (0x00049c00) cell_ituss_key_pane_g6_ParamLimits

0x8b34,	// (0x00049c00) cell_ituss_key_pane_g6

0x99c9,	// (0x0004aa95) bg_icf_pane_g1

0xf366,	// (0x00050432) bg_icf_pane_g2

0xf372,	// (0x0005043e) bg_icf_pane_g3

0xf37c,	// (0x00050448) bg_icf_pane_g4

0xf388,	// (0x00050454) bg_icf_pane_g5

0xf392,	// (0x0005045e) bg_icf_pane_g6

0xf39e,	// (0x0005046a) bg_icf_pane_g7

0xf3a8,	// (0x00050474) bg_icf_pane_g8

0xf3b4,	// (0x00050480) bg_icf_pane_g9

0x0008,

0xfee5,	// (0x00050fb1) bg_icf_pane_g

0xf1eb,	// (0x000502b7) popup_hyb_candi_window_ParamLimits

0xf1eb,	// (0x000502b7) popup_hyb_candi_window

0x9a3d,	// (0x0004ab09) bg_popup_sub_pane_cp01_ParamLimits

0x9a3d,	// (0x0004ab09) bg_popup_sub_pane_cp01

0xf477,	// (0x00050543) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x00050543) entry_hyb_candi_pane

0xf486,	// (0x00050552) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x00050552) grid_hyb_candi_pane

0xf49b,	// (0x00050567) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x00050567) grid_hyb_phrase_pane

0xf4aa,	// (0x00050576) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x00050576) cell_hyb_candi_pane

0x0ed7,	// (0x00041fa3) cell_hyb_candi_scroll_pane

0x4401,	// (0x000454cd) cell_hyb_candi_pane_g1

0xf4c6,	// (0x00050592) cell_hyb_candi_pane_t1

0xf4d4,	// (0x000505a0) cell_hyb_phrase_pane

0x4401,	// (0x000454cd) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x000505a9) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x000505b7) entry_hyb_candi_pane_t1

0x916c,	// (0x0004a238) input_focus_pane_cp06

0xf4f9,	// (0x000505c5) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x000505cd) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x000505d5) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x000505dd) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x000505e5) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x000505ed) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
