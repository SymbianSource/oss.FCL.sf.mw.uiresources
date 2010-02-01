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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f407 };

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
0xbbfb,	// (0x0002b002) Screen

0xbc07,	// (0x0002b00e) application_window_ParamLimits

0xbc07,	// (0x0002b00e) application_window

0x2be9,	// (0x00021ff0) screen_g1

0xbc3f,	// (0x0002b046) area_bottom_pane_ParamLimits

0xbc3f,	// (0x0002b046) area_bottom_pane

0x123f,	// (0x00020646) area_top_pane_ParamLimits

0x123f,	// (0x00020646) area_top_pane

0x12d3,	// (0x000206da) main_pane_ParamLimits

0x12d3,	// (0x000206da) main_pane

0x2bf3,	// (0x00021ffa) misc_graphics

0xd36f,	// (0x0002c776) battery_pane_ParamLimits

0xd36f,	// (0x0002c776) battery_pane

0x5852,	// (0x00024c59) bg_status_flat_pane_g8

0x585a,	// (0x00024c61) bg_status_flat_pane_g9

0x4bf5,	// (0x00023ffc) context_pane_ParamLimits

0x4bf5,	// (0x00023ffc) context_pane

0xd502,	// (0x0002c909) navi_pane_ParamLimits

0xd502,	// (0x0002c909) navi_pane

0xd579,	// (0x0002c980) signal_pane_ParamLimits

0xd579,	// (0x0002c980) signal_pane

0x0008,

0xf885,	// (0x0002ec8c) bg_status_flat_pane_g

0xd609,	// (0x0002ca10) status_pane_g1_ParamLimits

0xd609,	// (0x0002ca10) status_pane_g1

0xd61f,	// (0x0002ca26) status_pane_g2_ParamLimits

0xd61f,	// (0x0002ca26) status_pane_g2

0x4e21,	// (0x00024228) status_pane_g3_ParamLimits

0x4e21,	// (0x00024228) status_pane_g3

0x0004,

0xf7b8,	// (0x0002ebbf) status_pane_g_ParamLimits

0xf7b8,	// (0x0002ebbf) status_pane_g

0xd62b,	// (0x0002ca32) title_pane_ParamLimits

0xd62b,	// (0x0002ca32) title_pane

0xd68c,	// (0x0002ca93) uni_indicator_pane_ParamLimits

0xd68c,	// (0x0002ca93) uni_indicator_pane

0x44c4,	// (0x000238cb) bg_list_pane_ParamLimits

0x44c4,	// (0x000238cb) bg_list_pane

0xcc3d,	// (0x0002c044) find_pane

0xcc45,	// (0x0002c04c) listscroll_app_pane_ParamLimits

0xcc45,	// (0x0002c04c) listscroll_app_pane

0x44f0,	// (0x000238f7) listscroll_form_pane

0xcc51,	// (0x0002c058) listscroll_gen_pane_ParamLimits

0xcc51,	// (0x0002c058) listscroll_gen_pane

0x44f0,	// (0x000238f7) listscroll_set_pane

0x63fb,	// (0x00025802) main_idle_act_pane

0x41a4,	// (0x000235ab) main_idle_trad_pane

0x41a4,	// (0x000235ab) main_list_empty_pane

0x450a,	// (0x00023911) main_midp_pane

0x4516,	// (0x0002391d) main_pane_g1_ParamLimits

0x4516,	// (0x0002391d) main_pane_g1

0xcc73,	// (0x0002c07a) popup_ai_message_window_ParamLimits

0xcc73,	// (0x0002c07a) popup_ai_message_window

0xcd04,	// (0x0002c10b) popup_fep_china_uni_window_ParamLimits

0xcd04,	// (0x0002c10b) popup_fep_china_uni_window

0x4622,	// (0x00023a29) popup_fep_japan_candidate_window_ParamLimits

0x4622,	// (0x00023a29) popup_fep_japan_candidate_window

0x4642,	// (0x00023a49) popup_fep_japan_predictive_window_ParamLimits

0x4642,	// (0x00023a49) popup_fep_japan_predictive_window

0xcd60,	// (0x0002c167) popup_find_window

0xcd7d,	// (0x0002c184) popup_grid_graphic_window_ParamLimits

0xcd7d,	// (0x0002c184) popup_grid_graphic_window

0x46a7,	// (0x00023aae) popup_large_graphic_colour_window

0xce15,	// (0x0002c21c) popup_menu_window_ParamLimits

0xce15,	// (0x0002c21c) popup_menu_window

0xcfcf,	// (0x0002c3d6) popup_note_image_window

0xcf95,	// (0x0002c39c) popup_note_wait_window_ParamLimits

0xcf95,	// (0x0002c39c) popup_note_wait_window

0xcfe7,	// (0x0002c3ee) popup_note_window_ParamLimits

0xcfe7,	// (0x0002c3ee) popup_note_window

0xd08d,	// (0x0002c494) popup_query_code_window_ParamLimits

0xd08d,	// (0x0002c494) popup_query_code_window

0x48ef,	// (0x00023cf6) popup_query_data_code_window_ParamLimits

0x48ef,	// (0x00023cf6) popup_query_data_code_window

0xd0c7,	// (0x0002c4ce) popup_query_data_window_ParamLimits

0xd0c7,	// (0x0002c4ce) popup_query_data_window

0xd13d,	// (0x0002c544) popup_query_sat_info_window_ParamLimits

0xd13d,	// (0x0002c544) popup_query_sat_info_window

0xd1d4,	// (0x0002c5db) popup_snote_single_graphic_window_ParamLimits

0xd1d4,	// (0x0002c5db) popup_snote_single_graphic_window

0xd1d4,	// (0x0002c5db) popup_snote_single_text_window_ParamLimits

0xd1d4,	// (0x0002c5db) popup_snote_single_text_window

0x4976,	// (0x00023d7d) popup_sub_window_general

0x4aa6,	// (0x00023ead) popup_window_general_ParamLimits

0x4aa6,	// (0x00023ead) popup_window_general

0x4abb,	// (0x00023ec2) power_save_pane

0xc161,	// (0x0002b568) control_pane_g1_ParamLimits

0xc161,	// (0x0002b568) control_pane_g1

0xc18a,	// (0x0002b591) control_pane_g2_ParamLimits

0xc18a,	// (0x0002b591) control_pane_g2

0x446d,	// (0x00023874) control_pane_g3_ParamLimits

0x446d,	// (0x00023874) control_pane_g3

0x0007,

0xf7a0,	// (0x0002eba7) control_pane_g_ParamLimits

0xf7a0,	// (0x0002eba7) control_pane_g

0xc1c5,	// (0x0002b5cc) control_pane_t1_ParamLimits

0xc1c5,	// (0x0002b5cc) control_pane_t1

0xc223,	// (0x0002b62a) control_pane_t2_ParamLimits

0xc223,	// (0x0002b62a) control_pane_t2

0x0002,

0xf7b1,	// (0x0002ebb8) control_pane_t_ParamLimits

0xf7b1,	// (0x0002ebb8) control_pane_t

0x438e,	// (0x00023795) navi_navi_volume_pane_cp1

0x4397,	// (0x0002379e) status_small_icon_pane

0x439f,	// (0x000237a6) status_small_pane_g1_ParamLimits

0x439f,	// (0x000237a6) status_small_pane_g1

0x43d3,	// (0x000237da) status_small_pane_g2_ParamLimits

0x43d3,	// (0x000237da) status_small_pane_g2

0x43df,	// (0x000237e6) status_small_pane_g3_ParamLimits

0x43df,	// (0x000237e6) status_small_pane_g3

0x43eb,	// (0x000237f2) status_small_pane_g4_ParamLimits

0x43eb,	// (0x000237f2) status_small_pane_g4

0x43f7,	// (0x000237fe) status_small_pane_g5_ParamLimits

0x43f7,	// (0x000237fe) status_small_pane_g5

0x4406,	// (0x0002380d) status_small_pane_g6_ParamLimits

0x4406,	// (0x0002380d) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002eb96) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002eb96) status_small_pane_g

0x4436,	// (0x0002383d) status_small_pane_t1

0x4459,	// (0x00023860) status_small_wait_pane_ParamLimits

0x4459,	// (0x00023860) status_small_wait_pane

0xca93,	// (0x0002be9a) aid_levels_signal_ParamLimits

0xca93,	// (0x0002be9a) aid_levels_signal

0xcaab,	// (0x0002beb2) signal_pane_g1_ParamLimits

0xcaab,	// (0x0002beb2) signal_pane_g1

0xcac6,	// (0x0002becd) signal_pane_g2_ParamLimits

0xcac6,	// (0x0002becd) signal_pane_g2

0x0001,

0xf724,	// (0x0002eb2b) signal_pane_g_ParamLimits

0xf724,	// (0x0002eb2b) signal_pane_g

0x3c61,	// (0x00023068) context_pane_g1

0xbdb8,	// (0x0002b1bf) title_pane_g1

0xbded,	// (0x0002b1f4) title_pane_t1

0x2c9b,	// (0x000220a2) title_pane_t2

0x2cc1,	// (0x000220c8) title_pane_t3

0x0002,

0xf573,	// (0x0002e97a) title_pane_t

0xd6b4,	// (0x0002cabb) aid_levels_battery_ParamLimits

0xd6b4,	// (0x0002cabb) aid_levels_battery

0xd6d0,	// (0x0002cad7) battery_pane_g1_ParamLimits

0xd6d0,	// (0x0002cad7) battery_pane_g1

0xd6ed,	// (0x0002caf4) battery_pane_g2_ParamLimits

0xd6ed,	// (0x0002caf4) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002ebca) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002ebca) battery_pane_g

0xd8f2,	// (0x0002ccf9) uni_indicator_pane_g1

0xd907,	// (0x0002cd0e) uni_indicator_pane_g2

0xd91c,	// (0x0002cd23) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x0002ed34) uni_indicator_pane_g

0x4016,	// (0x0002341d) navi_icon_pane_ParamLimits

0x4016,	// (0x0002341d) navi_icon_pane

0x3f5f,	// (0x00023366) navi_midp_pane

0x4032,	// (0x00023439) navi_navi_pane

0x403c,	// (0x00023443) navi_text_pane_ParamLimits

0x403c,	// (0x00023443) navi_text_pane

0x2be9,	// (0x00021ff0) status_small_wait_pane_g1

0x30f0,	// (0x000224f7) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x0002ed2f) status_small_wait_pane_g

0x5ebf,	// (0x000252c6) navi_navi_icon_text_pane

0x5ec7,	// (0x000252ce) navi_navi_pane_g1_ParamLimits

0x5ec7,	// (0x000252ce) navi_navi_pane_g1

0x5ed9,	// (0x000252e0) navi_navi_pane_g2_ParamLimits

0x5ed9,	// (0x000252e0) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0002ecfd) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0002ecfd) navi_navi_pane_g

0x5eeb,	// (0x000252f2) navi_navi_tabs_pane

0x5ef4,	// (0x000252fb) navi_navi_text_pane

0x5ebf,	// (0x000252c6) navi_navi_volume_pane

0xd8b3,	// (0x0002ccba) navi_text_pane_t1

0xd8a7,	// (0x0002ccae) navi_icon_pane_g1

0x5ddc,	// (0x000251e3) navi_navi_text_pane_t1

0xc46e,	// (0x0002b875) navi_navi_volume_pane_g1

0xc476,	// (0x0002b87d) volume_small_pane

0xd803,	// (0x0002cc0a) navi_navi_icon_text_pane_g1

0xd80b,	// (0x0002cc12) navi_navi_icon_text_pane_t1

0x4032,	// (0x00023439) navi_tabs_2_long_pane

0x4032,	// (0x00023439) navi_tabs_2_pane

0x4032,	// (0x00023439) navi_tabs_3_long_pane

0x4032,	// (0x00023439) navi_tabs_3_pane

0x4032,	// (0x00023439) navi_tabs_4_pane

0xc44e,	// (0x0002b855) tabs_2_active_pane_ParamLimits

0xc44e,	// (0x0002b855) tabs_2_active_pane

0xc45e,	// (0x0002b865) tabs_2_passive_pane_ParamLimits

0xc45e,	// (0x0002b865) tabs_2_passive_pane

0xc41c,	// (0x0002b823) tabs_3_active_pane_ParamLimits

0xc41c,	// (0x0002b823) tabs_3_active_pane

0xc42c,	// (0x0002b833) tabs_3_passive_pane_ParamLimits

0xc42c,	// (0x0002b833) tabs_3_passive_pane

0xc43d,	// (0x0002b844) tabs_3_passive_pane_cp_ParamLimits

0xc43d,	// (0x0002b844) tabs_3_passive_pane_cp

0xc3d8,	// (0x0002b7df) tabs_4_active_pane_ParamLimits

0xc3d8,	// (0x0002b7df) tabs_4_active_pane

0xc3e9,	// (0x0002b7f0) tabs_4_passive_pane_ParamLimits

0xc3e9,	// (0x0002b7f0) tabs_4_passive_pane

0xc3fa,	// (0x0002b801) tabs_4_passive_pane_cp_ParamLimits

0xc3fa,	// (0x0002b801) tabs_4_passive_pane_cp

0xc40b,	// (0x0002b812) tabs_4_passive_pane_cp2_ParamLimits

0xc40b,	// (0x0002b812) tabs_4_passive_pane_cp2

0xc3b8,	// (0x0002b7bf) tabs_2_long_active_pane_ParamLimits

0xc3b8,	// (0x0002b7bf) tabs_2_long_active_pane

0xc3c8,	// (0x0002b7cf) tabs_2_long_passive_pane_ParamLimits

0xc3c8,	// (0x0002b7cf) tabs_2_long_passive_pane

0xc385,	// (0x0002b78c) tabs_3_long_active_pane_ParamLimits

0xc385,	// (0x0002b78c) tabs_3_long_active_pane

0xc396,	// (0x0002b79d) tabs_3_long_passive_pane_ParamLimits

0xc396,	// (0x0002b79d) tabs_3_long_passive_pane

0xc3a7,	// (0x0002b7ae) tabs_3_long_passive_pane_cp_ParamLimits

0xc3a7,	// (0x0002b7ae) tabs_3_long_passive_pane_cp

0x1ca4,	// (0x000210ab) volume_small_pane_g1

0xc334,	// (0x0002b73b) volume_small_pane_g2

0xc33d,	// (0x0002b744) volume_small_pane_g3

0xc346,	// (0x0002b74d) volume_small_pane_g4

0xc34f,	// (0x0002b756) volume_small_pane_g5

0xc358,	// (0x0002b75f) volume_small_pane_g6

0xc361,	// (0x0002b768) volume_small_pane_g7

0xc36a,	// (0x0002b771) volume_small_pane_g8

0xc373,	// (0x0002b77a) volume_small_pane_g9

0xc37c,	// (0x0002b783) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x0002ecc9) volume_small_pane_g

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp2_ParamLimits

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp2

0xbe79,	// (0x0002b280) tabs_3_active_pane_g1

0xbe81,	// (0x0002b288) tabs_3_active_pane_t1

0x2f4e,	// (0x00022355) bg_passive_tab_pane_cp2_ParamLimits

0x2f4e,	// (0x00022355) bg_passive_tab_pane_cp2

0xbe79,	// (0x0002b280) tabs_3_passive_pane_g1

0xbe81,	// (0x0002b288) tabs_3_passive_pane_t1

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp3_ParamLimits

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp3

0xbe93,	// (0x0002b29a) tabs_4_active_pane_g1

0xbe9b,	// (0x0002b2a2) tabs_4_active_pane_t1

0x2f4e,	// (0x00022355) bg_passive_tab_pane_cp3_ParamLimits

0x2f4e,	// (0x00022355) bg_passive_tab_pane_cp3

0xbe93,	// (0x0002b29a) tabs_4_1_passive_pane_g1

0xbe9b,	// (0x0002b2a2) tabs_4_1_passive_pane_t1

0x450a,	// (0x00023911) list_highlight_pane_cp2

0xd9a5,	// (0x0002cdac) list_set_pane_ParamLimits

0xd9a5,	// (0x0002cdac) list_set_pane

0xda3f,	// (0x0002ce46) main_pane_set_t1_ParamLimits

0xda3f,	// (0x0002ce46) main_pane_set_t1

0xda5f,	// (0x0002ce66) main_pane_set_t2_ParamLimits

0xda5f,	// (0x0002ce66) main_pane_set_t2

0xda73,	// (0x0002ce7a) main_pane_set_t3_ParamLimits

0xda73,	// (0x0002ce7a) main_pane_set_t3

0xda85,	// (0x0002ce8c) main_pane_set_t4_ParamLimits

0xda85,	// (0x0002ce8c) main_pane_set_t4

0x0003,

0xf992,	// (0x0002ed99) main_pane_set_t_ParamLimits

0xf992,	// (0x0002ed99) main_pane_set_t

0xda97,	// (0x0002ce9e) setting_code_pane

0xdaa1,	// (0x0002cea8) setting_slider_graphic_pane

0xdaa1,	// (0x0002cea8) setting_slider_pane

0xdaa1,	// (0x0002cea8) setting_text_pane

0xdaa1,	// (0x0002cea8) setting_volume_pane

0x1518,	// (0x0002091f) volume_set_pane

0x2cd3,	// (0x000220da) bg_set_opt_pane_cp

0x1520,	// (0x00020927) setting_slider_pane_t1

0x1539,	// (0x00020940) setting_slider_pane_t2

0x1553,	// (0x0002095a) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002e981) setting_slider_pane_t

0x156b,	// (0x00020972) slider_set_pane

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp2

0x2d15,	// (0x0002211c) setting_slider_graphic_pane_g1

0x1581,	// (0x00020988) setting_slider_graphic_pane_t1

0x1591,	// (0x00020998) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002e988) setting_slider_graphic_pane_t

0x15a1,	// (0x000209a8) slider_set_pane_cp

0x2bf3,	// (0x00021ffa) input_focus_pane_cp1

0x63e2,	// (0x000257e9) list_set_text_pane

0x2be9,	// (0x00021ff0) setting_text_pane_g1

0x2bf3,	// (0x00021ffa) input_focus_pane_cp2

0x2be9,	// (0x00021ff0) setting_code_pane_g1

0x2d1e,	// (0x00022125) setting_code_pane_t1

0x0123,	// (0x0001f52a) set_text_pane_t1_ParamLimits

0x0123,	// (0x0001f52a) set_text_pane_t1

0x35a6,	// (0x000229ad) set_opt_bg_pane_g1

0x35ae,	// (0x000229b5) set_opt_bg_pane_g2

0x63bc,	// (0x000257c3) set_opt_bg_pane_g3

0x35be,	// (0x000229c5) set_opt_bg_pane_g4

0x35c6,	// (0x000229cd) set_opt_bg_pane_g5

0x35ce,	// (0x000229d5) set_opt_bg_pane_g6

0x63c6,	// (0x000257cd) set_opt_bg_pane_g7

0x63ce,	// (0x000257d5) set_opt_bg_pane_g8

0x63d8,	// (0x000257df) set_opt_bg_pane_g9

0x0008,

0xf97f,	// (0x0002ed86) set_opt_bg_pane_g

0x63af,	// (0x000257b6) slider_set_pane_g1

0x1e6c,	// (0x00021273) slider_set_pane_g2

0x0006,

0xf970,	// (0x0002ed77) slider_set_pane_g

0x1e08,	// (0x0002120f) volume_set_pane_g1

0x1e10,	// (0x00021217) volume_set_pane_g2

0x1e18,	// (0x0002121f) volume_set_pane_g3

0x1e20,	// (0x00021227) volume_set_pane_g4

0x1e28,	// (0x0002122f) volume_set_pane_g5

0x1e30,	// (0x00021237) volume_set_pane_g6

0x1e38,	// (0x0002123f) volume_set_pane_g7

0x1e40,	// (0x00021247) volume_set_pane_g8

0x1e48,	// (0x0002124f) volume_set_pane_g9

0x1e50,	// (0x00021257) volume_set_pane_g10

0x0009,

0xf948,	// (0x0002ed4f) volume_set_pane_g

0xbead,	// (0x0002b2b4) indicator_pane_ParamLimits

0xbead,	// (0x0002b2b4) indicator_pane

0xbed5,	// (0x0002b2dc) main_idle_pane_g2_ParamLimits

0xbed5,	// (0x0002b2dc) main_idle_pane_g2

0xbf0d,	// (0x0002b314) main_pane_idle_g1_ParamLimits

0xbf0d,	// (0x0002b314) main_pane_idle_g1

0x2d6d,	// (0x00022174) popup_clock_digital_analogue_window_ParamLimits

0x2d6d,	// (0x00022174) popup_clock_digital_analogue_window

0xbf34,	// (0x0002b33b) soft_indicator_pane_ParamLimits

0xbf34,	// (0x0002b33b) soft_indicator_pane

0xbf4e,	// (0x0002b355) wallpaper_pane_ParamLimits

0xbf4e,	// (0x0002b355) wallpaper_pane

0x2be9,	// (0x00021ff0) wallpaper_pane_g1

0xbf60,	// (0x0002b367) indicator_pane_g1_ParamLimits

0xbf60,	// (0x0002b367) indicator_pane_g1

0x67b2,	// (0x00025bb9) navi_navi_icon_text_pane_srt_g1

0x2dbf,	// (0x000221c6) soft_indicator_pane_t1

0x2dd9,	// (0x000221e0) aid_ps_area_pane

0xbf76,	// (0x0002b37d) aid_ps_clock_pane

0x2df8,	// (0x000221ff) aid_ps_indicator_pane

0x2e04,	// (0x0002220b) indicator_ps_pane_ParamLimits

0x2e04,	// (0x0002220b) indicator_ps_pane

0x2e13,	// (0x0002221a) power_save_pane_g1_ParamLimits

0x2e13,	// (0x0002221a) power_save_pane_g1

0x2e1f,	// (0x00022226) power_save_pane_g2_ParamLimits

0x2e1f,	// (0x00022226) power_save_pane_g2

0x1133,	// (0x0002053a) aid_navinavi_width_pane

0x2dd9,	// (0x000221e0) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002e98d) power_save_pane_g_ParamLimits

0xf586,	// (0x0002e98d) power_save_pane_g

0x2e2d,	// (0x00022234) power_save_pane_t1_ParamLimits

0x2e2d,	// (0x00022234) power_save_pane_t1

0xbf76,	// (0x0002b37d) aid_ps_clock_pane_ParamLimits

0x2df8,	// (0x000221ff) aid_ps_indicator_pane_ParamLimits

0x2e3f,	// (0x00022246) power_save_pane_t4_ParamLimits

0x2e3f,	// (0x00022246) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002e992) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002e992) power_save_pane_t

0x2e69,	// (0x00022270) power_save_t3_ParamLimits

0x2e69,	// (0x00022270) power_save_t3

0x2e54,	// (0x0002225b) power_save_t2_ParamLimits

0x2e54,	// (0x0002225b) power_save_t2

0x2e7e,	// (0x00022285) indicator_ps_pane_g1

0xbf84,	// (0x0002b38b) ai_gene_pane_ParamLimits

0xbf84,	// (0x0002b38b) ai_gene_pane

0xbf9b,	// (0x0002b3a2) ai_links_pane_ParamLimits

0xbf9b,	// (0x0002b3a2) ai_links_pane

0xbfb3,	// (0x0002b3ba) indicator_pane_cp1_ParamLimits

0xbfb3,	// (0x0002b3ba) indicator_pane_cp1

0xbfc2,	// (0x0002b3c9) main_pane_idle_g1_cp_ParamLimits

0xbfc2,	// (0x0002b3c9) main_pane_idle_g1_cp

0x2eb7,	// (0x000222be) popup_ai_links_title_window

0xbfda,	// (0x0002b3e1) soft_indicator_pane_cp1_ParamLimits

0xbfda,	// (0x0002b3e1) soft_indicator_pane_cp1

0x6188,	// (0x0002558f) ai_links_pane_g1

0x6191,	// (0x00025598) grid_ai_links_pane

0xd8e9,	// (0x0002ccf0) ai_gene_pane_1

0x6176,	// (0x0002557d) ai_gene_pane_2

0x617f,	// (0x00025586) list_highlight_pane_cp4

0xd8c5,	// (0x0002cccc) cell_ai_link_pane_ParamLimits

0xd8c5,	// (0x0002cccc) cell_ai_link_pane

0x6147,	// (0x0002554e) cell_ai_link_pane_g1

0x30f0,	// (0x000224f7) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x0002ed2a) cell_ai_link_pane_g

0x2bf3,	// (0x00021ffa) grid_highlight_cp2

0x2bf3,	// (0x00021ffa) bg_popup_sub_pane_cp1

0x2eda,	// (0x000222e1) popup_ai_links_title_window_t1

0x6095,	// (0x0002549c) ai_gene_pane_1_g1_ParamLimits

0x6095,	// (0x0002549c) ai_gene_pane_1_g1

0x60a1,	// (0x000254a8) ai_gene_pane_1_g2_ParamLimits

0x60a1,	// (0x000254a8) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x0002ed20) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x0002ed20) ai_gene_pane_1_g

0x60ae,	// (0x000254b5) ai_gene_pane_1_t1_ParamLimits

0x60ae,	// (0x000254b5) ai_gene_pane_1_t1

0x60e2,	// (0x000254e9) grid_ai_soft_ind_pane

0x6080,	// (0x00025487) ai_gene_pane_2_t1_ParamLimits

0x6080,	// (0x00025487) ai_gene_pane_2_t1

0xbfee,	// (0x0002b3f5) main_pane_empty_t1_ParamLimits

0xbfee,	// (0x0002b3f5) main_pane_empty_t1

0xc006,	// (0x0002b40d) main_pane_empty_t2_ParamLimits

0xc006,	// (0x0002b40d) main_pane_empty_t2

0xc01b,	// (0x0002b422) main_pane_empty_t3_ParamLimits

0xc01b,	// (0x0002b422) main_pane_empty_t3

0xc02d,	// (0x0002b434) main_pane_empty_t4_ParamLimits

0xc02d,	// (0x0002b434) main_pane_empty_t4

0xc03f,	// (0x0002b446) main_pane_empty_t5_ParamLimits

0xc03f,	// (0x0002b446) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002e997) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002e997) main_pane_empty_t

0x35f7,	// (0x000229fe) bg_popup_window_pane_ParamLimits

0x35f7,	// (0x000229fe) bg_popup_window_pane

0x5dea,	// (0x000251f1) find_popup_pane_cp2_ParamLimits

0x5dea,	// (0x000251f1) find_popup_pane_cp2

0x5df6,	// (0x000251fd) heading_pane_ParamLimits

0x5df6,	// (0x000251fd) heading_pane

0x2bf3,	// (0x00021ffa) bg_popup_sub_pane

0xd828,	// (0x0002cc2f) bg_popup_window_pane_g1_ParamLimits

0xd828,	// (0x0002cc2f) bg_popup_window_pane_g1

0xd837,	// (0x0002cc3e) bg_popup_window_pane_g2_ParamLimits

0xd837,	// (0x0002cc3e) bg_popup_window_pane_g2

0xd843,	// (0x0002cc4a) bg_popup_window_pane_g3_ParamLimits

0xd843,	// (0x0002cc4a) bg_popup_window_pane_g3

0xd84f,	// (0x0002cc56) bg_popup_window_pane_g4_ParamLimits

0xd84f,	// (0x0002cc56) bg_popup_window_pane_g4

0xd85e,	// (0x0002cc65) bg_popup_window_pane_g5_ParamLimits

0xd85e,	// (0x0002cc65) bg_popup_window_pane_g5

0xd86e,	// (0x0002cc75) bg_popup_window_pane_g6_ParamLimits

0xd86e,	// (0x0002cc75) bg_popup_window_pane_g6

0xd87a,	// (0x0002cc81) bg_popup_window_pane_g7_ParamLimits

0xd87a,	// (0x0002cc81) bg_popup_window_pane_g7

0xd889,	// (0x0002cc90) bg_popup_window_pane_g8_ParamLimits

0xd889,	// (0x0002cc90) bg_popup_window_pane_g8

0xd898,	// (0x0002cc9f) bg_popup_window_pane_g9_ParamLimits

0xd898,	// (0x0002cc9f) bg_popup_window_pane_g9

0x5dd0,	// (0x000251d7) bg_popup_window_pane_g10_ParamLimits

0x5dd0,	// (0x000251d7) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x0002ece8) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x0002ece8) bg_popup_window_pane_g

0x5cf9,	// (0x00025100) bg_popup_heading_pane_ParamLimits

0x5cf9,	// (0x00025100) bg_popup_heading_pane

0x1ef4,	// (0x000212fb) tabs_4_passive_pane_cp_srt_ParamLimits

0x1ef4,	// (0x000212fb) tabs_4_passive_pane_cp_srt

0x1f06,	// (0x0002130d) tabs_4_passive_pane_srt_ParamLimits

0x5d0d,	// (0x00025114) heading_pane_g2

0x1f06,	// (0x0002130d) tabs_4_passive_pane_srt

0x509c,	// (0x000244a3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x509c,	// (0x000244a3) bg_passive_tab_pane_cp3_srt

0x5d15,	// (0x0002511c) heading_pane_t1_ParamLimits

0x5d15,	// (0x0002511c) heading_pane_t1

0x5d2c,	// (0x00025133) heading_pane_t2_ParamLimits

0x5d2c,	// (0x00025133) heading_pane_t2

0x0001,

0xf8dc,	// (0x0002ece3) heading_pane_t_ParamLimits

0xf8dc,	// (0x0002ece3) heading_pane_t

0x581a,	// (0x00024c21) bg_popup_heading_pane_g1

0x58c9,	// (0x00024cd0) bg_popup_heading_pane_g2

0x58d3,	// (0x00024cda) bg_popup_heading_pane_g3

0x58dd,	// (0x00024ce4) bg_popup_heading_pane_g4

0x58e7,	// (0x00024cee) bg_popup_heading_pane_g5

0x58f1,	// (0x00024cf8) bg_popup_heading_pane_g6

0x58f9,	// (0x00024d00) bg_popup_heading_pane_g7

0x5901,	// (0x00024d08) bg_popup_heading_pane_g8

0x590b,	// (0x00024d12) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0002ec9f) bg_popup_heading_pane_g

0x4fac,	// (0x000243b3) bg_popup_sub_pane_g1

0x4fb4,	// (0x000243bb) bg_popup_sub_pane_g2

0x4fbc,	// (0x000243c3) bg_popup_sub_pane_g3

0x4fc4,	// (0x000243cb) bg_popup_sub_pane_g4

0x4fcc,	// (0x000243d3) bg_popup_sub_pane_g5

0x4fd4,	// (0x000243db) bg_popup_sub_pane_g6

0x4fdc,	// (0x000243e3) bg_popup_sub_pane_g7

0x4fe4,	// (0x000243eb) bg_popup_sub_pane_g8

0x4fec,	// (0x000243f3) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x0002ec79) bg_popup_sub_pane_g

0x2f4e,	// (0x00022355) bg_popup_window_pane_cp5_ParamLimits

0x2f4e,	// (0x00022355) bg_popup_window_pane_cp5

0x2f6a,	// (0x00022371) popup_note_window_g1_ParamLimits

0x2f6a,	// (0x00022371) popup_note_window_g1

0x2f76,	// (0x0002237d) popup_note_window_t1_ParamLimits

0x2f76,	// (0x0002237d) popup_note_window_t1

0x2f8c,	// (0x00022393) popup_note_window_t2_ParamLimits

0x2f8c,	// (0x00022393) popup_note_window_t2

0x2fa2,	// (0x000223a9) popup_note_window_t3_ParamLimits

0x2fa2,	// (0x000223a9) popup_note_window_t3

0x2fb8,	// (0x000223bf) popup_note_window_t4_ParamLimits

0x2fb8,	// (0x000223bf) popup_note_window_t4

0x2fe0,	// (0x000223e7) popup_note_window_t5_ParamLimits

0x2fe0,	// (0x000223e7) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002e9a2) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002e9a2) popup_note_window_t

0x3004,	// (0x0002240b) bg_popup_window_pane_cp6_ParamLimits

0x3004,	// (0x0002240b) bg_popup_window_pane_cp6

0x5796,	// (0x00024b9d) popup_note_image_window_g1_ParamLimits

0x5796,	// (0x00024b9d) popup_note_image_window_g1

0x57a2,	// (0x00024ba9) popup_note_image_window_g2_ParamLimits

0x57a2,	// (0x00024ba9) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0002ec6d) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0002ec6d) popup_note_image_window_g

0x57bb,	// (0x00024bc2) popup_note_image_window_t1_ParamLimits

0x57bb,	// (0x00024bc2) popup_note_image_window_t1

0x57d4,	// (0x00024bdb) popup_note_image_window_t2_ParamLimits

0x57d4,	// (0x00024bdb) popup_note_image_window_t2

0x57ed,	// (0x00024bf4) popup_note_image_window_t3_ParamLimits

0x57ed,	// (0x00024bf4) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x0002ec72) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x0002ec72) popup_note_image_window_t

0x5657,	// (0x00024a5e) bg_popup_window_pane_cp7_ParamLimits

0x5657,	// (0x00024a5e) bg_popup_window_pane_cp7

0x5687,	// (0x00024a8e) popup_note_wait_window_g1_ParamLimits

0x5687,	// (0x00024a8e) popup_note_wait_window_g1

0x5693,	// (0x00024a9a) popup_note_wait_window_g2_ParamLimits

0x5693,	// (0x00024a9a) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x0002ec5b) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x0002ec5b) popup_note_wait_window_g

0x56ab,	// (0x00024ab2) popup_note_wait_window_t1_ParamLimits

0x56ab,	// (0x00024ab2) popup_note_wait_window_t1

0x56d2,	// (0x00024ad9) popup_note_wait_window_t2_ParamLimits

0x56d2,	// (0x00024ad9) popup_note_wait_window_t2

0x56ef,	// (0x00024af6) popup_note_wait_window_t3_ParamLimits

0x56ef,	// (0x00024af6) popup_note_wait_window_t3

0x5702,	// (0x00024b09) popup_note_wait_window_t4_ParamLimits

0x5702,	// (0x00024b09) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x0002ec62) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x0002ec62) popup_note_wait_window_t

0x5727,	// (0x00024b2e) wait_bar_pane_ParamLimits

0x5727,	// (0x00024b2e) wait_bar_pane

0x2bf3,	// (0x00021ffa) wait_anim_pane

0x2bf3,	// (0x00021ffa) wait_border_pane

0x2be9,	// (0x00021ff0) wait_anim_pane_g1

0x2be9,	// (0x00021ff0) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002eb26) wait_anim_pane_g

0x55fb,	// (0x00024a02) wait_border_pane_g1

0x5606,	// (0x00024a0d) wait_border_pane_g2

0x560f,	// (0x00024a16) wait_border_pane_g3

0x0002,

0xf84d,	// (0x0002ec54) wait_border_pane_g

0x5466,	// (0x0002486d) bg_popup_window_pane_cp16_ParamLimits

0x5466,	// (0x0002486d) bg_popup_window_pane_cp16

0x5566,	// (0x0002496d) indicator_popup_pane_cp4_ParamLimits

0x5566,	// (0x0002496d) indicator_popup_pane_cp4

0x557a,	// (0x00024981) popup_query_data_window_t1_ParamLimits

0x557a,	// (0x00024981) popup_query_data_window_t1

0x558c,	// (0x00024993) popup_query_data_window_t2_ParamLimits

0x558c,	// (0x00024993) popup_query_data_window_t2

0x55a5,	// (0x000249ac) popup_query_data_window_t3_ParamLimits

0x55a5,	// (0x000249ac) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0002ec4d) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0002ec4d) popup_query_data_window_t

0x55bf,	// (0x000249c6) query_popup_data_pane_ParamLimits

0x55bf,	// (0x000249c6) query_popup_data_pane

0x55d3,	// (0x000249da) query_popup_data_pane_cp1_ParamLimits

0x55d3,	// (0x000249da) query_popup_data_pane_cp1

0x5466,	// (0x0002486d) bg_popup_window_pane_cp10_ParamLimits

0x5466,	// (0x0002486d) bg_popup_window_pane_cp10

0x5498,	// (0x0002489f) indicator_popup_pane_ParamLimits

0x5498,	// (0x0002489f) indicator_popup_pane

0x54ba,	// (0x000248c1) popup_query_code_window_t1_ParamLimits

0x54ba,	// (0x000248c1) popup_query_code_window_t1

0x54d4,	// (0x000248db) popup_query_code_window_t2_ParamLimits

0x54d4,	// (0x000248db) popup_query_code_window_t2

0x551d,	// (0x00024924) popup_query_code_window_t3_ParamLimits

0x551d,	// (0x00024924) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x0002ec46) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x0002ec46) popup_query_code_window_t

0x554c,	// (0x00024953) query_popup_pane_ParamLimits

0x554c,	// (0x00024953) query_popup_pane

0x3004,	// (0x0002240b) bg_popup_window_pane_cp15_ParamLimits

0x3004,	// (0x0002240b) bg_popup_window_pane_cp15

0x3022,	// (0x00022429) indicator_popup_pane_cp1_ParamLimits

0x3022,	// (0x00022429) indicator_popup_pane_cp1

0x3035,	// (0x0002243c) indicator_popup_pane_cp2_ParamLimits

0x3035,	// (0x0002243c) indicator_popup_pane_cp2

0x3048,	// (0x0002244f) popup_query_data_code_window_g1_ParamLimits

0x3048,	// (0x0002244f) popup_query_data_code_window_g1

0x305b,	// (0x00022462) popup_query_data_code_window_t1_ParamLimits

0x305b,	// (0x00022462) popup_query_data_code_window_t1

0x306d,	// (0x00022474) popup_query_data_code_window_t2_ParamLimits

0x306d,	// (0x00022474) popup_query_data_code_window_t2

0x307f,	// (0x00022486) popup_query_data_code_window_t3_ParamLimits

0x307f,	// (0x00022486) popup_query_data_code_window_t3

0x3095,	// (0x0002249c) popup_query_data_code_window_t4_ParamLimits

0x3095,	// (0x0002249c) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002e9ad) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002e9ad) popup_query_data_code_window_t

0x1bcd,	// (0x00020fd4) list_single_midp_graphic_pane_g3

0x30ad,	// (0x000224b4) query_popup_data_pane_cp2_ParamLimits

0x30c0,	// (0x000224c7) query_popup_pane_cp2_ParamLimits

0x30c0,	// (0x000224c7) query_popup_pane_cp2

0x2bf3,	// (0x00021ffa) bg_popup_window_pane_cp11

0x545e,	// (0x00024865) heading_pane_cp5

0x31a8,	// (0x000225af) listscroll_popup_info_pane

0x2bf3,	// (0x00021ffa) input_focus_pane_cp3

0x30d3,	// (0x000224da) query_popup_pane_t1

0x30e1,	// (0x000224e8) list_popup_info_pane_ParamLimits

0x30e1,	// (0x000224e8) list_popup_info_pane

0x30f0,	// (0x000224f7) listscroll_popup_info_pane_g1

0x30f8,	// (0x000224ff) scroll_pane_cp7

0x3102,	// (0x00022509) popup_info_list_pane_t1_ParamLimits

0x3102,	// (0x00022509) popup_info_list_pane_t1

0x311c,	// (0x00022523) popup_info_list_pane_t2_ParamLimits

0x311c,	// (0x00022523) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002e9b6) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002e9b6) popup_info_list_pane_t

0x2bf3,	// (0x00021ffa) bg_popup_window_pane_cp12

0x67cc,	// (0x00025bd3) find_popup_pane

0x2cd3,	// (0x000220da) bg_popup_window_pane_cp3

0x3136,	// (0x0002253d) heading_pane_cp3

0x3142,	// (0x00022549) listscroll_popup_graphic_pane

0x2bf3,	// (0x00021ffa) bg_popup_window_pane_cp4

0xc0a1,	// (0x0002b4a8) heading_pane_cp4

0x31a8,	// (0x000225af) listscroll_popup_colour_pane

0xc0a9,	// (0x0002b4b0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc0a9,	// (0x0002b4b0) cell_large_graphic_colour_none_popup_pane

0xc0bd,	// (0x0002b4c4) grid_large_graphic_colour_popup_pane_ParamLimits

0xc0bd,	// (0x0002b4c4) grid_large_graphic_colour_popup_pane

0xc0e1,	// (0x0002b4e8) listscroll_popup_colour_pane_g1_ParamLimits

0xc0e1,	// (0x0002b4e8) listscroll_popup_colour_pane_g1

0xc0f8,	// (0x0002b4ff) listscroll_popup_colour_pane_g2_ParamLimits

0xc0f8,	// (0x0002b4ff) listscroll_popup_colour_pane_g2

0xc10f,	// (0x0002b516) listscroll_popup_colour_pane_g3_ParamLimits

0xc10f,	// (0x0002b516) listscroll_popup_colour_pane_g3

0xc11f,	// (0x0002b526) listscroll_popup_colour_pane_g4_ParamLimits

0xc11f,	// (0x0002b526) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002e9bb) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002e9bb) listscroll_popup_colour_pane_g

0x3242,	// (0x00022649) scroll_pane_cp6_ParamLimits

0x3242,	// (0x00022649) scroll_pane_cp6

0xc12f,	// (0x0002b536) cell_large_graphic_colour_popup_pane_ParamLimits

0xc12f,	// (0x0002b536) cell_large_graphic_colour_popup_pane

0x3273,	// (0x0002267a) cell_large_graphic_colour_none_popup_pane_t1

0x2bf3,	// (0x00021ffa) grid_highlight_pane_cp5

0x3282,	// (0x00022689) cell_large_graphic_colour_popup_pane_g1

0x328a,	// (0x00022691) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002e9c4) cell_large_graphic_colour_popup_pane_g

0x3292,	// (0x00022699) cell_large_graphic_colour_popup_pane_g2_copy1

0x329b,	// (0x000226a2) grid_highlight_pane_cp4

0x32a3,	// (0x000226aa) bg_popup_window_pane_cp8_ParamLimits

0x32a3,	// (0x000226aa) bg_popup_window_pane_cp8

0x32be,	// (0x000226c5) popup_snote_single_text_window_g1_ParamLimits

0x32be,	// (0x000226c5) popup_snote_single_text_window_g1

0x32d0,	// (0x000226d7) popup_snote_single_text_window_t1_ParamLimits

0x32d0,	// (0x000226d7) popup_snote_single_text_window_t1

0x32e3,	// (0x000226ea) popup_snote_single_text_window_t2_ParamLimits

0x32e3,	// (0x000226ea) popup_snote_single_text_window_t2

0x32f6,	// (0x000226fd) popup_snote_single_text_window_t3_ParamLimits

0x32f6,	// (0x000226fd) popup_snote_single_text_window_t3

0x332f,	// (0x00022736) popup_snote_single_text_window_t4_ParamLimits

0x332f,	// (0x00022736) popup_snote_single_text_window_t4

0x3363,	// (0x0002276a) popup_snote_single_text_window_t5_ParamLimits

0x3363,	// (0x0002276a) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002e9c9) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002e9c9) popup_snote_single_text_window_t

0x3392,	// (0x00022799) bg_popup_window_pane_cp9_ParamLimits

0x3392,	// (0x00022799) bg_popup_window_pane_cp9

0x32be,	// (0x000226c5) popup_snote_single_graphic_window_g1_ParamLimits

0x32be,	// (0x000226c5) popup_snote_single_graphic_window_g1

0x33a0,	// (0x000227a7) popup_snote_single_graphic_window_g2_ParamLimits

0x33a0,	// (0x000227a7) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002e9d4) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002e9d4) popup_snote_single_graphic_window_g

0x33ac,	// (0x000227b3) popup_snote_single_graphic_window_t1_ParamLimits

0x33ac,	// (0x000227b3) popup_snote_single_graphic_window_t1

0x33bf,	// (0x000227c6) popup_snote_single_graphic_window_t2_ParamLimits

0x33bf,	// (0x000227c6) popup_snote_single_graphic_window_t2

0x33d2,	// (0x000227d9) popup_snote_single_graphic_window_t3_ParamLimits

0x33d2,	// (0x000227d9) popup_snote_single_graphic_window_t3

0x340b,	// (0x00022812) popup_snote_single_graphic_window_t4_ParamLimits

0x340b,	// (0x00022812) popup_snote_single_graphic_window_t4

0x343f,	// (0x00022846) popup_snote_single_graphic_window_t5_ParamLimits

0x343f,	// (0x00022846) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002e9d9) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002e9d9) popup_snote_single_graphic_window_t

0x6710,	// (0x00025b17) grid_graphic_popup_pane_ParamLimits

0x6710,	// (0x00025b17) grid_graphic_popup_pane

0x6738,	// (0x00025b3f) listscroll_popup_graphic_pane_g1_ParamLimits

0x6738,	// (0x00025b3f) listscroll_popup_graphic_pane_g1

0xdbad,	// (0x0002cfb4) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbad,	// (0x0002cfb4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bc,	// (0x0002edc3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bc,	// (0x0002edc3) listscroll_popup_graphic_pane_g

0x6760,	// (0x00025b67) scroll_pane_cp5

0xdb71,	// (0x0002cf78) cell_graphic_popup_pane_ParamLimits

0xdb71,	// (0x0002cf78) cell_graphic_popup_pane

0x669a,	// (0x00025aa1) cell_graphic_popup_pane_g1

0x66a2,	// (0x00025aa9) cell_graphic_popup_pane_g2

0x3292,	// (0x00022699) cell_graphic_popup_pane_g3

0x0002,

0xf9b5,	// (0x0002edbc) cell_graphic_popup_pane_g

0x66ab,	// (0x00025ab2) cell_graphic_popup_pane_t2

0x329b,	// (0x000226a2) grid_highlight_pane_cp3

0x3480,	// (0x00022887) list_gen_pane_ParamLimits

0x3480,	// (0x00022887) list_gen_pane

0x34b2,	// (0x000228b9) scroll_pane

0xdb2c,	// (0x0002cf33) bg_list_pane_g1_ParamLimits

0xdb2c,	// (0x0002cf33) bg_list_pane_g1

0x6617,	// (0x00025a1e) bg_list_pane_g2_ParamLimits

0x6617,	// (0x00025a1e) bg_list_pane_g2

0x662a,	// (0x00025a31) bg_list_pane_g3_ParamLimits

0x662a,	// (0x00025a31) bg_list_pane_g3

0x663c,	// (0x00025a43) bg_list_pane_g4_ParamLimits

0x663c,	// (0x00025a43) bg_list_pane_g4

0xdb47,	// (0x0002cf4e) bg_list_pane_g5_ParamLimits

0xdb47,	// (0x0002cf4e) bg_list_pane_g5

0x0004,

0xf9aa,	// (0x0002edb1) bg_list_pane_g_ParamLimits

0xf9aa,	// (0x0002edb1) bg_list_pane_g

0xdae3,	// (0x0002ceea) list_double2_graphic_large_graphic_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double2_graphic_large_graphic_pane

0xdae3,	// (0x0002ceea) list_double2_graphic_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double2_graphic_pane

0xdae3,	// (0x0002ceea) list_double2_large_graphic_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double2_large_graphic_pane

0xdae3,	// (0x0002ceea) list_double2_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double2_pane

0xdae3,	// (0x0002ceea) list_double_graphic_heading_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_graphic_heading_pane

0xdae3,	// (0x0002ceea) list_double_graphic_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_graphic_pane

0xdae3,	// (0x0002ceea) list_double_heading_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_heading_pane

0xdae3,	// (0x0002ceea) list_double_large_graphic_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_large_graphic_pane

0xdae3,	// (0x0002ceea) list_double_number_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_number_pane

0xdae3,	// (0x0002ceea) list_double_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_pane

0xdae3,	// (0x0002ceea) list_double_time_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_double_time_pane

0xdae3,	// (0x0002ceea) list_setting_number_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_setting_number_pane

0xdae3,	// (0x0002ceea) list_setting_pane_ParamLimits

0xdae3,	// (0x0002ceea) list_setting_pane

0xdaf5,	// (0x0002cefc) list_single_2graphic_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_2graphic_pane

0xdaf5,	// (0x0002cefc) list_single_graphic_heading_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_graphic_heading_pane

0xdaf5,	// (0x0002cefc) list_single_graphic_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_graphic_pane

0xdaf5,	// (0x0002cefc) list_single_heading_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_heading_pane

0xdaf5,	// (0x0002cefc) list_single_large_graphic_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_large_graphic_pane

0xdaf5,	// (0x0002cefc) list_single_number_heading_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_number_heading_pane

0xdaf5,	// (0x0002cefc) list_single_number_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_number_pane

0xdaf5,	// (0x0002cefc) list_single_pane_ParamLimits

0xdaf5,	// (0x0002cefc) list_single_pane

0x2bf3,	// (0x00021ffa) list_highlight_pane_cp1

0x0926,	// (0x0001fd2d) list_single_pane_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_single_pane_g1

0x0932,	// (0x0001fd39) list_single_pane_g2_ParamLimits

0x0932,	// (0x0001fd39) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_single_pane_g

0x0b9d,	// (0x0001ffa4) list_single_pane_t1_ParamLimits

0x0b9d,	// (0x0001ffa4) list_single_pane_t1

0x0926,	// (0x0001fd2d) list_single_number_pane_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_single_number_pane_g1

0x0932,	// (0x0001fd39) list_single_number_pane_g2_ParamLimits

0x0932,	// (0x0001fd39) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_single_number_pane_g

0x099e,	// (0x0001fda5) list_single_number_pane_t1_ParamLimits

0x099e,	// (0x0001fda5) list_single_number_pane_t1

0xb9a8,	// (0x0002adaf) list_single_number_pane_t2_ParamLimits

0xb9a8,	// (0x0002adaf) list_single_number_pane_t2

0x0001,

0xf96b,	// (0x0002ed72) list_single_number_pane_t_ParamLimits

0xf96b,	// (0x0002ed72) list_single_number_pane_t

0x0f7a,	// (0x00020381) list_single_graphic_pane_g1_ParamLimits

0x0f7a,	// (0x00020381) list_single_graphic_pane_g1

0x0926,	// (0x0001fd2d) list_single_graphic_pane_g2_ParamLimits

0x0926,	// (0x0001fd2d) list_single_graphic_pane_g2

0x0932,	// (0x0001fd39) list_single_graphic_pane_g3_ParamLimits

0x0932,	// (0x0001fd39) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002e9e4) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002e9e4) list_single_graphic_pane_g

0xb3b3,	// (0x0002a7ba) list_single_graphic_pane_t1_ParamLimits

0xb3b3,	// (0x0002a7ba) list_single_graphic_pane_t1

0x0926,	// (0x0001fd2d) list_single_heading_pane_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_single_heading_pane_g1

0x0932,	// (0x0001fd39) list_single_heading_pane_g2_ParamLimits

0x0932,	// (0x0001fd39) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_single_heading_pane_g

0x0bbf,	// (0x0001ffc6) list_single_heading_pane_t1_ParamLimits

0x0bbf,	// (0x0001ffc6) list_single_heading_pane_t1

0xb3c9,	// (0x0002a7d0) list_single_heading_pane_t2_ParamLimits

0xb3c9,	// (0x0002a7d0) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002e9f0) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002e9f0) list_single_heading_pane_t

0x0926,	// (0x0001fd2d) list_single_number_heading_pane_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_single_number_heading_pane_g1

0x0932,	// (0x0001fd39) list_single_number_heading_pane_g2_ParamLimits

0x0932,	// (0x0001fd39) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_single_number_heading_pane_g

0x0bbf,	// (0x0001ffc6) list_single_number_heading_pane_t1_ParamLimits

0x0bbf,	// (0x0001ffc6) list_single_number_heading_pane_t1

0xb3db,	// (0x0002a7e2) list_single_number_heading_pane_t2_ParamLimits

0xb3db,	// (0x0002a7e2) list_single_number_heading_pane_t2

0x0b77,	// (0x0001ff7e) list_single_number_heading_pane_t3_ParamLimits

0x0b77,	// (0x0001ff7e) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002e9f5) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002e9f5) list_single_number_heading_pane_t

0x091a,	// (0x0001fd21) list_single_graphic_heading_pane_g1_ParamLimits

0x091a,	// (0x0001fd21) list_single_graphic_heading_pane_g1

0xb3ed,	// (0x0002a7f4) list_single_graphic_heading_pane_g4_ParamLimits

0xb3ed,	// (0x0002a7f4) list_single_graphic_heading_pane_g4

0x0932,	// (0x0001fd39) list_single_graphic_heading_pane_g5_ParamLimits

0x0932,	// (0x0001fd39) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002e9fc) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002e9fc) list_single_graphic_heading_pane_g

0x0bbf,	// (0x0001ffc6) list_single_graphic_heading_pane_t1_ParamLimits

0x0bbf,	// (0x0001ffc6) list_single_graphic_heading_pane_t1

0xb3fe,	// (0x0002a805) list_single_graphic_heading_pane_t2_ParamLimits

0xb3fe,	// (0x0002a805) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002ea03) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002ea03) list_single_graphic_heading_pane_t

0x0bb3,	// (0x0001ffba) list_single_large_graphic_pane_g1_ParamLimits

0x0bb3,	// (0x0001ffba) list_single_large_graphic_pane_g1

0x0926,	// (0x0001fd2d) list_single_large_graphic_pane_g2_ParamLimits

0x0926,	// (0x0001fd2d) list_single_large_graphic_pane_g2

0x0932,	// (0x0001fd39) list_single_large_graphic_pane_g3_ParamLimits

0x0932,	// (0x0001fd39) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002ea08) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002ea08) list_single_large_graphic_pane_g

0x5606,	// (0x00024a0d) wait_border_pane_g2_copy1

0xb410,	// (0x0002a817) list_single_large_graphic_pane_g4_cp2

0x0bbf,	// (0x0001ffc6) list_single_large_graphic_pane_t1_ParamLimits

0x0bbf,	// (0x0001ffc6) list_single_large_graphic_pane_t1

0x0dac,	// (0x000201b3) list_double_pane_g1_ParamLimits

0x0dac,	// (0x000201b3) list_double_pane_g1

0xb418,	// (0x0002a81f) list_double_pane_g2_ParamLimits

0xb418,	// (0x0002a81f) list_double_pane_g2

0x0001,

0xf608,	// (0x0002ea0f) list_double_pane_g_ParamLimits

0xf608,	// (0x0002ea0f) list_double_pane_g

0xb424,	// (0x0002a82b) list_double_pane_t1_ParamLimits

0xb424,	// (0x0002a82b) list_double_pane_t1

0xb43a,	// (0x0002a841) list_double_pane_t2_ParamLimits

0xb43a,	// (0x0002a841) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002ea14) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002ea14) list_double_pane_t

0xb44c,	// (0x0002a853) list_double2_pane_g1_ParamLimits

0xb44c,	// (0x0002a853) list_double2_pane_g1

0x047b,	// (0x0001f882) list_double2_pane_g2_ParamLimits

0x047b,	// (0x0001f882) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002ea19) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002ea19) list_double2_pane_g

0xb45d,	// (0x0002a864) list_double2_pane_t1_ParamLimits

0xb45d,	// (0x0002a864) list_double2_pane_t1

0xb473,	// (0x0002a87a) list_double2_pane_t2_ParamLimits

0xb473,	// (0x0002a87a) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002ea1e) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002ea1e) list_double2_pane_t

0x0dac,	// (0x000201b3) list_double_number_pane_g1_ParamLimits

0x0dac,	// (0x000201b3) list_double_number_pane_g1

0xb418,	// (0x0002a81f) list_double_number_pane_g2_ParamLimits

0xb418,	// (0x0002a81f) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002ea0f) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002ea0f) list_double_number_pane_g

0xb485,	// (0x0002a88c) list_double_number_pane_t1_ParamLimits

0xb485,	// (0x0002a88c) list_double_number_pane_t1

0xb497,	// (0x0002a89e) list_double_number_pane_t2_ParamLimits

0xb497,	// (0x0002a89e) list_double_number_pane_t2

0xb4ad,	// (0x0002a8b4) list_double_number_pane_t3_ParamLimits

0xb4ad,	// (0x0002a8b4) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002ea23) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002ea23) list_double_number_pane_t

0xb4bf,	// (0x0002a8c6) list_double_graphic_pane_g1_ParamLimits

0xb4bf,	// (0x0002a8c6) list_double_graphic_pane_g1

0xb4cb,	// (0x0002a8d2) list_double_graphic_pane_g2_ParamLimits

0xb4cb,	// (0x0002a8d2) list_double_graphic_pane_g2

0xb4da,	// (0x0002a8e1) list_double_graphic_pane_g3_ParamLimits

0xb4da,	// (0x0002a8e1) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002ea2a) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002ea2a) list_double_graphic_pane_g

0xb4f2,	// (0x0002a8f9) list_double_graphic_pane_t1_ParamLimits

0xb4f2,	// (0x0002a8f9) list_double_graphic_pane_t1

0xb508,	// (0x0002a90f) list_double_graphic_pane_t2_ParamLimits

0xb508,	// (0x0002a90f) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002ea33) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002ea33) list_double_graphic_pane_t

0xb51a,	// (0x0002a921) list_double2_graphic_pane_g1_ParamLimits

0xb51a,	// (0x0002a921) list_double2_graphic_pane_g1

0xb526,	// (0x0002a92d) list_double2_graphic_pane_g2_ParamLimits

0xb526,	// (0x0002a92d) list_double2_graphic_pane_g2

0x047b,	// (0x0001f882) list_double2_graphic_pane_g3_ParamLimits

0x047b,	// (0x0001f882) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002ea38) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002ea38) list_double2_graphic_pane_g

0xb532,	// (0x0002a939) list_double2_graphic_pane_t1_ParamLimits

0xb532,	// (0x0002a939) list_double2_graphic_pane_t1

0xb548,	// (0x0002a94f) list_double2_graphic_pane_t2_ParamLimits

0xb548,	// (0x0002a94f) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002ea3f) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002ea3f) list_double2_graphic_pane_t

0xb55a,	// (0x0002a961) list_double_large_graphic_pane_g1_ParamLimits

0xb55a,	// (0x0002a961) list_double_large_graphic_pane_g1

0xb585,	// (0x0002a98c) list_double_large_graphic_pane_g2_ParamLimits

0xb585,	// (0x0002a98c) list_double_large_graphic_pane_g2

0xb418,	// (0x0002a81f) list_double_large_graphic_pane_g3_ParamLimits

0xb418,	// (0x0002a81f) list_double_large_graphic_pane_g3

0xb596,	// (0x0002a99d) list_double_large_graphic_pane_g4_ParamLimits

0xb596,	// (0x0002a99d) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002ea44) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002ea44) list_double_large_graphic_pane_g

0xb5a8,	// (0x0002a9af) list_double_large_graphic_pane_t1_ParamLimits

0xb5a8,	// (0x0002a9af) list_double_large_graphic_pane_t1

0xb5c1,	// (0x0002a9c8) list_double_large_graphic_pane_t2_ParamLimits

0xb5c1,	// (0x0002a9c8) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002ea4f) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002ea4f) list_double_large_graphic_pane_t

0xb5d3,	// (0x0002a9da) list_double2_large_graphic_pane_g1_ParamLimits

0xb5d3,	// (0x0002a9da) list_double2_large_graphic_pane_g1

0xb44c,	// (0x0002a853) list_double2_large_graphic_pane_g2_ParamLimits

0xb44c,	// (0x0002a853) list_double2_large_graphic_pane_g2

0x047b,	// (0x0001f882) list_double2_large_graphic_pane_g3_ParamLimits

0x047b,	// (0x0001f882) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002ea54) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002ea54) list_double2_large_graphic_pane_g

0xb5df,	// (0x0002a9e6) list_double2_large_graphic_pane_t1_ParamLimits

0xb5df,	// (0x0002a9e6) list_double2_large_graphic_pane_t1

0xb5f5,	// (0x0002a9fc) list_double2_large_graphic_pane_t2_ParamLimits

0xb5f5,	// (0x0002a9fc) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002ea5b) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002ea5b) list_double2_large_graphic_pane_t

0xb607,	// (0x0002aa0e) list_double_heading_pane_g1_ParamLimits

0xb607,	// (0x0002aa0e) list_double_heading_pane_g1

0x0286,	// (0x0001f68d) list_double_heading_pane_g2_ParamLimits

0x0286,	// (0x0001f68d) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002ea60) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002ea60) list_double_heading_pane_g

0xb618,	// (0x0002aa1f) list_double_heading_pane_t1_ParamLimits

0xb618,	// (0x0002aa1f) list_double_heading_pane_t1

0xb473,	// (0x0002a87a) list_double_heading_pane_t2_ParamLimits

0xb473,	// (0x0002a87a) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002ea65) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002ea65) list_double_heading_pane_t

0xb4bf,	// (0x0002a8c6) list_double_graphic_heading_pane_g1_ParamLimits

0xb4bf,	// (0x0002a8c6) list_double_graphic_heading_pane_g1

0xb607,	// (0x0002aa0e) list_double_graphic_heading_pane_g2_ParamLimits

0xb607,	// (0x0002aa0e) list_double_graphic_heading_pane_g2

0x0286,	// (0x0001f68d) list_double_graphic_heading_pane_g3_ParamLimits

0x0286,	// (0x0001f68d) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002ea6a) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002ea6a) list_double_graphic_heading_pane_g

0xb62e,	// (0x0002aa35) list_double_graphic_heading_pane_t1_ParamLimits

0xb62e,	// (0x0002aa35) list_double_graphic_heading_pane_t1

0xb548,	// (0x0002a94f) list_double_graphic_heading_pane_t2_ParamLimits

0xb548,	// (0x0002a94f) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002ea71) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002ea71) list_double_graphic_heading_pane_t

0xb585,	// (0x0002a98c) list_double_time_pane_g1_ParamLimits

0xb585,	// (0x0002a98c) list_double_time_pane_g1

0xb418,	// (0x0002a81f) list_double_time_pane_g2_ParamLimits

0xb418,	// (0x0002a81f) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0002ea76) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0002ea76) list_double_time_pane_g

0xb644,	// (0x0002aa4b) list_double_time_pane_t1_ParamLimits

0xb644,	// (0x0002aa4b) list_double_time_pane_t1

0xb65a,	// (0x0002aa61) list_double_time_pane_t2_ParamLimits

0xb65a,	// (0x0002aa61) list_double_time_pane_t2

0xb66c,	// (0x0002aa73) list_double_time_pane_t3_ParamLimits

0xb66c,	// (0x0002aa73) list_double_time_pane_t3

0xb67e,	// (0x0002aa85) list_double_time_pane_t4_ParamLimits

0xb67e,	// (0x0002aa85) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0002ea7b) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0002ea7b) list_double_time_pane_t

0xb690,	// (0x0002aa97) list_setting_pane_g1_ParamLimits

0xb690,	// (0x0002aa97) list_setting_pane_g1

0xb69c,	// (0x0002aaa3) list_setting_pane_g2_ParamLimits

0xb69c,	// (0x0002aaa3) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002ea84) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002ea84) list_setting_pane_g

0xb6a8,	// (0x0002aaaf) list_setting_pane_t1_ParamLimits

0xb6a8,	// (0x0002aaaf) list_setting_pane_t1

0xb6c2,	// (0x0002aac9) list_setting_pane_t2_ParamLimits

0xb6c2,	// (0x0002aac9) list_setting_pane_t2

0x0002,

0xf682,	// (0x0002ea89) list_setting_pane_t_ParamLimits

0xf682,	// (0x0002ea89) list_setting_pane_t

0xb701,	// (0x0002ab08) set_value_pane_cp_ParamLimits

0xb701,	// (0x0002ab08) set_value_pane_cp

0xb70d,	// (0x0002ab14) list_setting_number_pane_g1_ParamLimits

0xb70d,	// (0x0002ab14) list_setting_number_pane_g1

0xb719,	// (0x0002ab20) list_setting_number_pane_g2_ParamLimits

0xb719,	// (0x0002ab20) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0002ea90) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0002ea90) list_setting_number_pane_g

0xb725,	// (0x0002ab2c) list_setting_number_pane_t1_ParamLimits

0xb725,	// (0x0002ab2c) list_setting_number_pane_t1

0xb73e,	// (0x0002ab45) list_setting_number_pane_t2_ParamLimits

0xb73e,	// (0x0002ab45) list_setting_number_pane_t2

0xb758,	// (0x0002ab5f) list_setting_number_pane_t3_ParamLimits

0xb758,	// (0x0002ab5f) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0002ea95) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0002ea95) list_setting_number_pane_t

0xb701,	// (0x0002ab08) set_value_pane_ParamLimits

0xb701,	// (0x0002ab08) set_value_pane

0x34e6,	// (0x000228ed) bg_set_opt_pane_ParamLimits

0x34e6,	// (0x000228ed) bg_set_opt_pane

0x0604,	// (0x0001fa0b) set_value_pane_t1

0x3507,	// (0x0002290e) slider_set_pane_cp3

0x3510,	// (0x00022917) volume_small_pane_cp

0x3519,	// (0x00022920) list_form_gen_pane

0x3522,	// (0x00022929) scroll_pane_cp8

0xb79b,	// (0x0002aba2) form_field_data_pane_ParamLimits

0xb79b,	// (0x0002aba2) form_field_data_pane

0xb7b2,	// (0x0002abb9) form_field_data_wide_pane_ParamLimits

0xb7b2,	// (0x0002abb9) form_field_data_wide_pane

0xb7d2,	// (0x0002abd9) form_field_popup_pane_ParamLimits

0xb7d2,	// (0x0002abd9) form_field_popup_pane

0xb7ea,	// (0x0002abf1) form_field_popup_wide_pane_ParamLimits

0xb7ea,	// (0x0002abf1) form_field_popup_wide_pane

0x0698,	// (0x0001fa9f) form_field_slider_pane_ParamLimits

0x0698,	// (0x0001fa9f) form_field_slider_pane

0x06ab,	// (0x0001fab2) form_field_slider_wide_pane_ParamLimits

0x06ab,	// (0x0001fab2) form_field_slider_wide_pane

0x3533,	// (0x0002293a) data_form_pane

0xb80b,	// (0x0002ac12) form_field_data_pane_t1

0x353f,	// (0x00022946) input_focus_pane

0x354d,	// (0x00022954) data_form_wide_pane

0x06ec,	// (0x0001faf3) form_field_data_wide_pane_t1

0x32b0,	// (0x000226b7) input_focus_pane_cp6

0xb825,	// (0x0002ac2c) form_field_popup_pane_t1

0x353f,	// (0x00022946) input_focus_pane_cp7

0x3579,	// (0x00022980) list_form_pane

0x072e,	// (0x0001fb35) form_field_popup_wide_pane_t1

0x353f,	// (0x00022946) input_focus_pane_cp8

0x3585,	// (0x0002298c) list_form_wide_pane

0xb847,	// (0x0002ac4e) form_field_slider_pane_t1_ParamLimits

0xb847,	// (0x0002ac4e) form_field_slider_pane_t1

0xb85f,	// (0x0002ac66) form_field_slider_pane_t2_ParamLimits

0xb85f,	// (0x0002ac66) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0002eaa5) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0002eaa5) form_field_slider_pane_t

0x2f4e,	// (0x00022355) input_focus_pane_cp9_ParamLimits

0x2f4e,	// (0x00022355) input_focus_pane_cp9

0xb874,	// (0x0002ac7b) slider_cont_pane_ParamLimits

0xb874,	// (0x0002ac7b) slider_cont_pane

0x3594,	// (0x0002299b) form_field_slider_wide_pane_t1_ParamLimits

0x3594,	// (0x0002299b) form_field_slider_wide_pane_t1

0x078a,	// (0x0001fb91) form_field_slider_wide_pane_t2_ParamLimits

0x078a,	// (0x0001fb91) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0002eaaa) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0002eaaa) form_field_slider_wide_pane_t

0x2f4e,	// (0x00022355) input_focus_pane_cp10_ParamLimits

0x2f4e,	// (0x00022355) input_focus_pane_cp10

0xb888,	// (0x0002ac8f) slider_cont_pane_cp1_ParamLimits

0xb888,	// (0x0002ac8f) slider_cont_pane_cp1

0xb89c,	// (0x0002aca3) slider_form_pane_cp

0x35a6,	// (0x000229ad) input_focus_pane_g1

0x35ae,	// (0x000229b5) input_focus_pane_g2

0x35b6,	// (0x000229bd) input_focus_pane_g3

0x35be,	// (0x000229c5) input_focus_pane_g4

0x35c6,	// (0x000229cd) input_focus_pane_g5

0x35ce,	// (0x000229d5) input_focus_pane_g6

0x35d6,	// (0x000229dd) input_focus_pane_g7

0x35de,	// (0x000229e5) input_focus_pane_g8

0x35e6,	// (0x000229ed) input_focus_pane_g9

0x2be9,	// (0x00021ff0) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0002eaaf) input_focus_pane_g

0x560f,	// (0x00024a16) wait_border_pane_g3_copy1

0xb8a4,	// (0x0002acab) data_form_pane_t1

0x2be9,	// (0x00021ff0) wait_anim_pane_g1_copy1

0xb9ba,	// (0x0002adc1) data_form_wide_pane_t1

0xc90b,	// (0x0002bd12) list_form_graphic_pane_cp_ParamLimits

0xc90b,	// (0x0002bd12) list_form_graphic_pane_cp

0x6557,	// (0x0002595e) slider_form_pane_g1

0x6560,	// (0x00025967) slider_form_pane_g2

0x0006,

0xf99b,	// (0x0002eda2) slider_form_pane_g

0xc90b,	// (0x0002bd12) list_form_graphic_pane_ParamLimits

0xc90b,	// (0x0002bd12) list_form_graphic_pane

0x0808,	// (0x0001fc0f) list_form_graphic_pane_g1

0x0810,	// (0x0001fc17) list_form_graphic_pane_t1_ParamLimits

0x0810,	// (0x0001fc17) list_form_graphic_pane_t1

0x2cd3,	// (0x000220da) list_highlight_pane_cp5_ParamLimits

0x2cd3,	// (0x000220da) list_highlight_pane_cp5

0xb8be,	// (0x0002acc5) find_pane_g1

0x35ee,	// (0x000229f5) input_find_pane

0xb8c7,	// (0x0002acce) input_find_pane_g1_ParamLimits

0xb8c7,	// (0x0002acce) input_find_pane_g1

0xb8d3,	// (0x0002acda) input_find_pane_t1_ParamLimits

0xb8d3,	// (0x0002acda) input_find_pane_t1

0xb8e8,	// (0x0002acef) input_find_pane_t2_ParamLimits

0xb8e8,	// (0x0002acef) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0002eac4) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0002eac4) input_find_pane_t

0x35f7,	// (0x000229fe) input_focus_pane_cp5_ParamLimits

0x35f7,	// (0x000229fe) input_focus_pane_cp5

0xc929,	// (0x0002bd30) bg_popup_window_pane_cp2_ParamLimits

0xc929,	// (0x0002bd30) bg_popup_window_pane_cp2

0xc936,	// (0x0002bd3d) listscroll_menu_pane_ParamLimits

0xc936,	// (0x0002bd3d) listscroll_menu_pane

0xc942,	// (0x0002bd49) popup_submenu_window_ParamLimits

0xc942,	// (0x0002bd49) popup_submenu_window

0x3654,	// (0x00022a5b) find_popup_pane_g1

0x365c,	// (0x00022a63) input_popup_find_pane_cp

0x35f7,	// (0x000229fe) input_focus_pane_cp4_ParamLimits

0x35f7,	// (0x000229fe) input_focus_pane_cp4

0x3672,	// (0x00022a79) input_popup_find_pane_t1_ParamLimits

0x3672,	// (0x00022a79) input_popup_find_pane_t1

0x2bf3,	// (0x00021ffa) bg_popup_sub_pane_cp

0x36a0,	// (0x00022aa7) listscroll_popup_sub_pane

0x36a8,	// (0x00022aaf) list_submenu_pane_ParamLimits

0x36a8,	// (0x00022aaf) list_submenu_pane

0x36b9,	// (0x00022ac0) scroll_pane_cp4

0x36c1,	// (0x00022ac8) list_single_popup_submenu_pane_ParamLimits

0x36c1,	// (0x00022ac8) list_single_popup_submenu_pane

0x36d5,	// (0x00022adc) list_single_popup_submenu_pane_g1

0x36dd,	// (0x00022ae4) list_single_popup_submenu_pane_t1_ParamLimits

0x36dd,	// (0x00022ae4) list_single_popup_submenu_pane_t1

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp1_ParamLimits

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp1

0xc97a,	// (0x0002bd81) tabs_2_active_pane_g1

0xc982,	// (0x0002bd89) tabs_2_active_pane_t1

0x2f4e,	// (0x00022355) bg_passive_tab_pane_cp1_ParamLimits

0x2f4e,	// (0x00022355) bg_passive_tab_pane_cp1

0xc97a,	// (0x0002bd81) tabs_2_passive_pane_g1

0xc982,	// (0x0002bd89) tabs_2_passive_pane_t1

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp4

0xc994,	// (0x0002bd9b) tabs_2_long_active_pane_t1

0x450a,	// (0x00023911) bg_passive_tab_pane_cp4

0x4ccd,	// (0x000240d4) list_single_midp_graphic_pane_g4_ParamLimits

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp5

0xc9a7,	// (0x0002bdae) tabs_3_long_active_pane_t1

0x450a,	// (0x00023911) bg_passive_tab_pane_cp5

0x4ccd,	// (0x000240d4) list_single_midp_graphic_pane_g4

0x2cd3,	// (0x000220da) bg_popup_window_pane_cp13_ParamLimits

0x2cd3,	// (0x000220da) bg_popup_window_pane_cp13

0x3754,	// (0x00022b5b) listscroll_popup_fast_pane_ParamLimits

0x3754,	// (0x00022b5b) listscroll_popup_fast_pane

0x3763,	// (0x00022b6a) grid_popup_fast_pane_ParamLimits

0x3763,	// (0x00022b6a) grid_popup_fast_pane

0x3775,	// (0x00022b7c) scroll_pane_cp9_ParamLimits

0x3775,	// (0x00022b7c) scroll_pane_cp9

0x7e1e,	// (0x00027225) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7e1e,	// (0x00027225) list_single_graphic_hl_pane_t1_cp2

0x3799,	// (0x00022ba0) input_focus_pane_cp20_ParamLimits

0x3799,	// (0x00022ba0) input_focus_pane_cp20

0x37a7,	// (0x00022bae) query_popup_data_pane_t1_ParamLimits

0x37a7,	// (0x00022bae) query_popup_data_pane_t1

0x37ba,	// (0x00022bc1) query_popup_data_pane_t2_ParamLimits

0x37ba,	// (0x00022bc1) query_popup_data_pane_t2

0x3800,	// (0x00022c07) query_popup_data_pane_t3_ParamLimits

0x3800,	// (0x00022c07) query_popup_data_pane_t3

0x3841,	// (0x00022c48) query_popup_data_pane_t4_ParamLimits

0x3841,	// (0x00022c48) query_popup_data_pane_t4

0x387d,	// (0x00022c84) query_popup_data_pane_t5_ParamLimits

0x387d,	// (0x00022c84) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0002eac9) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0002eac9) query_popup_data_pane_t

0x35a6,	// (0x000229ad) bg_set_opt_pane_g1

0x35ae,	// (0x000229b5) bg_set_opt_pane_g2

0x35b6,	// (0x000229bd) bg_set_opt_pane_g3

0x35be,	// (0x000229c5) bg_set_opt_pane_g4

0x35c6,	// (0x000229cd) bg_set_opt_pane_g5

0x35ce,	// (0x000229d5) bg_set_opt_pane_g6

0x35d6,	// (0x000229dd) bg_set_opt_pane_g7

0x35de,	// (0x000229e5) bg_set_opt_pane_g8

0x35e6,	// (0x000229ed) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0002ead4) bg_set_opt_pane_g

0x1848,	// (0x00020c4f) control_top_pane_stacon_ParamLimits

0x1848,	// (0x00020c4f) control_top_pane_stacon

0x189b,	// (0x00020ca2) signal_pane_stacon_ParamLimits

0x189b,	// (0x00020ca2) signal_pane_stacon

0x3e3d,	// (0x00023244) stacon_top_pane_g1_ParamLimits

0x3e3d,	// (0x00023244) stacon_top_pane_g1

0x18c0,	// (0x00020cc7) title_pane_stacon_ParamLimits

0x18c0,	// (0x00020cc7) title_pane_stacon

0x18ea,	// (0x00020cf1) uni_indicator_pane_stacon_ParamLimits

0x18ea,	// (0x00020cf1) uni_indicator_pane_stacon

0x18ff,	// (0x00020d06) battery_pane_stacon_ParamLimits

0x18ff,	// (0x00020d06) battery_pane_stacon

0x1943,	// (0x00020d4a) control_bottom_pane_stacon_ParamLimits

0x1943,	// (0x00020d4a) control_bottom_pane_stacon

0x1966,	// (0x00020d6d) navi_pane_stacon_ParamLimits

0x1966,	// (0x00020d6d) navi_pane_stacon

0x3e5f,	// (0x00023266) stacon_bottom_pane_g1_ParamLimits

0x3e5f,	// (0x00023266) stacon_bottom_pane_g1

0x15a9,	// (0x000209b0) aid_levels_signal_lsc_ParamLimits

0x15a9,	// (0x000209b0) aid_levels_signal_lsc

0x15c0,	// (0x000209c7) signal_pane_stacon_g1_ParamLimits

0x15c0,	// (0x000209c7) signal_pane_stacon_g1

0x15d4,	// (0x000209db) signal_pane_stacon_g2_ParamLimits

0x15d4,	// (0x000209db) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0002eae7) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002eae7) signal_pane_stacon_g

0x1609,	// (0x00020a10) title_pane_stacon_t1_ParamLimits

0x1609,	// (0x00020a10) title_pane_stacon_t1

0x38c1,	// (0x00022cc8) uni_indicator_pane_stacon_g1

0x38cb,	// (0x00022cd2) uni_indicator_pane_stacon_g2

0x38d5,	// (0x00022cdc) uni_indicator_pane_stacon_g3

0x38df,	// (0x00022ce6) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002eaf3) uni_indicator_pane_stacon_g

0x162e,	// (0x00020a35) control_top_pane_stacon_g1

0x1636,	// (0x00020a3d) control_top_pane_stacon_t1_ParamLimits

0x1636,	// (0x00020a3d) control_top_pane_stacon_t1

0x166d,	// (0x00020a74) aid_levels_battery_lsc_ParamLimits

0x166d,	// (0x00020a74) aid_levels_battery_lsc

0x1685,	// (0x00020a8c) battery_pane_stacon_g1_ParamLimits

0x1685,	// (0x00020a8c) battery_pane_stacon_g1

0x1698,	// (0x00020a9f) battery_pane_stacon_g2_ParamLimits

0x1698,	// (0x00020a9f) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002eafc) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002eafc) battery_pane_stacon_g

0x16d6,	// (0x00020add) navi_icon_pane_stacon

0x16ea,	// (0x00020af1) navi_navi_pane_stacon

0x16d6,	// (0x00020add) navi_text_pane_stacon

0x162e,	// (0x00020a35) control_bottom_pane_stacon_g1

0x16fe,	// (0x00020b05) control_bottom_pane_stacon_t1_ParamLimits

0x16fe,	// (0x00020b05) control_bottom_pane_stacon_t1

0xc9b9,	// (0x0002bdc0) grid_app_pane_ParamLimits

0xc9b9,	// (0x0002bdc0) grid_app_pane

0xc9f1,	// (0x0002bdf8) scroll_pane_cp15_ParamLimits

0xc9f1,	// (0x0002bdf8) scroll_pane_cp15

0xca0a,	// (0x0002be11) cell_app_pane_ParamLimits

0xca0a,	// (0x0002be11) cell_app_pane

0xca4f,	// (0x0002be56) cell_app_pane_g1_ParamLimits

0xca4f,	// (0x0002be56) cell_app_pane_g1

0x3984,	// (0x00022d8b) cell_app_pane_g2_ParamLimits

0x3984,	// (0x00022d8b) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0002eb01) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0002eb01) cell_app_pane_g

0x3990,	// (0x00022d97) cell_app_pane_t1_ParamLimits

0x3990,	// (0x00022d97) cell_app_pane_t1

0x39a7,	// (0x00022dae) grid_highlight_pane_ParamLimits

0x39a7,	// (0x00022dae) grid_highlight_pane

0x35a6,	// (0x000229ad) cell_highlight_pane_g1

0x35ae,	// (0x000229b5) cell_highlight_pane_g2

0x35b6,	// (0x000229bd) cell_highlight_pane_g3

0x35be,	// (0x000229c5) cell_highlight_pane_g4

0x35c6,	// (0x000229cd) cell_highlight_pane_g5

0x35ce,	// (0x000229d5) cell_highlight_pane_g6

0x35d6,	// (0x000229dd) cell_highlight_pane_g7

0x35de,	// (0x000229e5) cell_highlight_pane_g8

0x35e6,	// (0x000229ed) cell_highlight_pane_g9

0x2be9,	// (0x00021ff0) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0002eaaf) cell_highlight_pane_g

0x39b8,	// (0x00022dbf) bg_scroll_pane

0x1748,	// (0x00020b4f) scroll_handle_pane

0x39ff,	// (0x00022e06) scroll_bg_pane_g1

0x3a14,	// (0x00022e1b) scroll_bg_pane_g2

0x3a2c,	// (0x00022e33) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002eb06) scroll_bg_pane_g

0x3a41,	// (0x00022e48) scroll_handle_focus_pane_ParamLimits

0x3a41,	// (0x00022e48) scroll_handle_focus_pane

0x39ff,	// (0x00022e06) scroll_handle_pane_g1

0x3a4e,	// (0x00022e55) scroll_handle_pane_g2

0x3a2c,	// (0x00022e33) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002eb0d) scroll_handle_pane_g

0x35f7,	// (0x000229fe) bg_popup_sub_pane_cp21_ParamLimits

0x35f7,	// (0x000229fe) bg_popup_sub_pane_cp21

0x3a62,	// (0x00022e69) popup_fep_japan_predictive_window_t1_ParamLimits

0x3a62,	// (0x00022e69) popup_fep_japan_predictive_window_t1

0x3a7c,	// (0x00022e83) popup_fep_japan_predictive_window_t2_ParamLimits

0x3a7c,	// (0x00022e83) popup_fep_japan_predictive_window_t2

0x3aaf,	// (0x00022eb6) popup_fep_japan_predictive_window_t3_ParamLimits

0x3aaf,	// (0x00022eb6) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002eb14) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002eb14) popup_fep_japan_predictive_window_t

0x2bf3,	// (0x00021ffa) bg_popup_sub_pane_cp23

0x3ae6,	// (0x00022eed) listscroll_japin_cand_pane

0x3aee,	// (0x00022ef5) popup_fep_japan_candidate_window_t1

0x3afc,	// (0x00022f03) candidate_pane_ParamLimits

0x3afc,	// (0x00022f03) candidate_pane

0x3b0e,	// (0x00022f15) scroll_pane_cp30

0x3b16,	// (0x00022f1d) list_single_popup_jap_candidate_pane_ParamLimits

0x3b16,	// (0x00022f1d) list_single_popup_jap_candidate_pane

0x2bf3,	// (0x00021ffa) list_highlight_pane_cp30

0x3b2b,	// (0x00022f32) list_single_popup_jap_candidate_pane_t1

0x3b3a,	// (0x00022f41) level_1_signal

0x3b47,	// (0x00022f4e) level_2_signal

0x3b54,	// (0x00022f5b) level_3_signal

0x3b61,	// (0x00022f68) level_4_signal

0x3b6e,	// (0x00022f75) level_5_signal

0x3b7b,	// (0x00022f82) level_6_signal

0x3b88,	// (0x00022f8f) level_7_signal

0x3b3a,	// (0x00022f41) level_1_battery

0x3b47,	// (0x00022f4e) level_2_battery

0x3b54,	// (0x00022f5b) level_3_battery

0x3b61,	// (0x00022f68) level_4_battery

0x3b6e,	// (0x00022f75) level_5_battery

0x3b7b,	// (0x00022f82) level_6_battery

0x3b88,	// (0x00022f8f) level_7_battery

0x3bad,	// (0x00022fb4) list_menu_pane_ParamLimits

0x3bad,	// (0x00022fb4) list_menu_pane

0x3bbe,	// (0x00022fc5) scroll_pane_cp25_ParamLimits

0x3bbe,	// (0x00022fc5) scroll_pane_cp25

0x3bd7,	// (0x00022fde) list_double2_graphic_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double2_graphic_pane_cp2

0x3bd7,	// (0x00022fde) list_double2_large_graphic_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double2_large_graphic_pane_cp2

0x3bd7,	// (0x00022fde) list_double2_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double2_pane_cp2

0x3bd7,	// (0x00022fde) list_double_graphic_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double_graphic_pane_cp2

0x3bd7,	// (0x00022fde) list_double_large_graphic_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double_large_graphic_pane_cp2

0x3bd7,	// (0x00022fde) list_double_number_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double_number_pane_cp2

0x3bd7,	// (0x00022fde) list_double_pane_cp2_ParamLimits

0x3bd7,	// (0x00022fde) list_double_pane_cp2

0xca82,	// (0x0002be89) list_single_2graphic_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_2graphic_pane_cp2

0xca82,	// (0x0002be89) list_single_graphic_heading_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_graphic_heading_pane_cp2

0xca82,	// (0x0002be89) list_single_graphic_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_graphic_pane_cp2

0xca82,	// (0x0002be89) list_single_heading_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_heading_pane_cp2

0x3c14,	// (0x0002301b) list_single_large_graphic_pane_cp2_ParamLimits

0x3c14,	// (0x0002301b) list_single_large_graphic_pane_cp2

0xca82,	// (0x0002be89) list_single_number_heading_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_number_heading_pane_cp2

0xca82,	// (0x0002be89) list_single_number_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_number_pane_cp2

0xca82,	// (0x0002be89) list_single_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_pane_cp2

0x3c6a,	// (0x00023071) bg_popup_sub_pane_cp22

0x17fa,	// (0x00020c01) popup_side_volume_key_window_g1

0x1824,	// (0x00020c2b) popup_side_volume_key_window_t1

0x1840,	// (0x00020c47) volume_small_pane_cp1

0x2f4e,	// (0x00022355) bg_popup_sub_pane_cp24_ParamLimits

0x2f4e,	// (0x00022355) bg_popup_sub_pane_cp24

0x3ca2,	// (0x000230a9) fep_china_uni_candidate_pane_ParamLimits

0x3ca2,	// (0x000230a9) fep_china_uni_candidate_pane

0x3cb6,	// (0x000230bd) fep_china_uni_entry_pane

0x3cc6,	// (0x000230cd) popup_fep_china_uni_window_g1

0x3ce2,	// (0x000230e9) fep_china_uni_entry_pane_g1

0x3cea,	// (0x000230f1) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002eb41) fep_china_uni_entry_pane_g

0x3cf2,	// (0x000230f9) fep_entry_item_pane

0x3cfc,	// (0x00023103) fep_candidate_item_pane

0x3d04,	// (0x0002310b) fep_china_uni_candidate_pane_g1

0x3d0c,	// (0x00023113) fep_china_uni_candidate_pane_g2

0x3d14,	// (0x0002311b) fep_china_uni_candidate_pane_g3

0x3d1c,	// (0x00023123) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002eb46) fep_china_uni_candidate_pane_g

0x2be9,	// (0x00021ff0) fep_entry_item_pane_g1

0x3d24,	// (0x0002312b) fep_entry_item_pane_t1_ParamLimits

0x3d24,	// (0x0002312b) fep_entry_item_pane_t1

0x3d3a,	// (0x00023141) fep_candidate_item_pane_t1_ParamLimits

0x3d3a,	// (0x00023141) fep_candidate_item_pane_t1

0x3d4f,	// (0x00023156) fep_candidate_item_pane_t2_ParamLimits

0x3d4f,	// (0x00023156) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002eb4f) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002eb4f) fep_candidate_item_pane_t

0x2cd3,	// (0x000220da) list_highlight_pane_cp31_ParamLimits

0x2cd3,	// (0x000220da) list_highlight_pane_cp31

0x3d61,	// (0x00023168) level_1_signal_lsc

0x3d6a,	// (0x00023171) level_2_signal_lsc

0x3d73,	// (0x0002317a) level_3_signal_lsc

0x3d7c,	// (0x00023183) level_4_signal_lsc

0x3d85,	// (0x0002318c) level_5_signal_lsc

0x3d8e,	// (0x00023195) level_6_signal_lsc

0x3d97,	// (0x0002319e) level_7_signal_lsc

0x3d97,	// (0x0002319e) level_1_battery_lsc

0x3da0,	// (0x000231a7) level_2_battery_lsc

0x3da9,	// (0x000231b0) level_3_battery_lsc

0x3db2,	// (0x000231b9) level_4_battery_lsc

0x3dbb,	// (0x000231c2) level_5_battery_lsc

0x3dc4,	// (0x000231cb) level_6_battery_lsc

0x3d61,	// (0x00023168) level_7_battery_lsc

0x3dcd,	// (0x000231d4) scroll_handle_focus_pane_g1

0x3dd6,	// (0x000231dd) scroll_handle_focus_pane_g2

0x3ddf,	// (0x000231e6) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002eb54) scroll_handle_focus_pane_g

0xb8fd,	// (0x0002ad04) list_single_2graphic_pane_g1_ParamLimits

0xb8fd,	// (0x0002ad04) list_single_2graphic_pane_g1

0xb3ed,	// (0x0002a7f4) list_single_2graphic_pane_g2_ParamLimits

0xb3ed,	// (0x0002a7f4) list_single_2graphic_pane_g2

0x0932,	// (0x0001fd39) list_single_2graphic_pane_g3_ParamLimits

0x0932,	// (0x0001fd39) list_single_2graphic_pane_g3

0xb909,	// (0x0002ad10) list_single_2graphic_pane_g4_ParamLimits

0xb909,	// (0x0002ad10) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002eb5b) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002eb5b) list_single_2graphic_pane_g

0xb91a,	// (0x0002ad21) list_single_2graphic_pane_t1_ParamLimits

0xb91a,	// (0x0002ad21) list_single_2graphic_pane_t1

0xb948,	// (0x0002ad4f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb948,	// (0x0002ad4f) list_double2_graphic_large_graphic_pane_g1

0xb44c,	// (0x0002a853) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb44c,	// (0x0002a853) list_double2_graphic_large_graphic_pane_g2

0x047b,	// (0x0001f882) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x047b,	// (0x0001f882) list_double2_graphic_large_graphic_pane_g3

0xb95a,	// (0x0002ad61) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb95a,	// (0x0002ad61) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002eb64) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002eb64) list_double2_graphic_large_graphic_pane_g

0xb966,	// (0x0002ad6d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb966,	// (0x0002ad6d) list_double2_graphic_large_graphic_pane_t1

0xb97c,	// (0x0002ad83) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb97c,	// (0x0002ad83) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002eb6d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002eb6d) list_double2_graphic_large_graphic_pane_t

0x3f27,	// (0x0002332e) popup_fast_swap_window_ParamLimits

0x3f27,	// (0x0002332e) popup_fast_swap_window

0x3f43,	// (0x0002334a) popup_side_volume_key_window

0x3f5f,	// (0x00023366) stacon_top_pane

0x3f69,	// (0x00023370) status_pane_ParamLimits

0x3f69,	// (0x00023370) status_pane

0x3f5f,	// (0x00023366) status_small_pane

0x2bf3,	// (0x00021ffa) control_pane

0x2bf3,	// (0x00021ffa) stacon_bottom_pane

0x3522,	// (0x00022929) scroll_pane_cp121

0x3519,	// (0x00022920) set_content_pane

0x3e03,	// (0x0002320a) bg_active_tab_pane_g1_cp1

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp1

0x3e0c,	// (0x00023213) bg_active_tab_pane_g3_cp1

0x3e03,	// (0x0002320a) bg_passive_tab_pane_g1_cp1

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp1

0x3e0c,	// (0x00023213) bg_passive_tab_pane_g3_cp1

0xcae2,	// (0x0002bee9) bg_active_tab_pane_g1_cp2

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp2

0xcaeb,	// (0x0002bef2) bg_active_tab_pane_g3_cp2

0xcae2,	// (0x0002bee9) bg_passive_tab_pane_g1_cp2

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp2

0xcaeb,	// (0x0002bef2) bg_passive_tab_pane_g3_cp2

0xcaf4,	// (0x0002befb) bg_active_tab_pane_g1_cp3

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp3

0xcafd,	// (0x0002bf04) bg_active_tab_pane_g3_cp3

0xcaf4,	// (0x0002befb) bg_passive_tab_pane_g1_cp3

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp3

0xcafd,	// (0x0002bf04) bg_passive_tab_pane_g3_cp3

0xcb06,	// (0x0002bf0d) bg_active_tab_pane_g1_cp4

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp4

0xcb0f,	// (0x0002bf16) bg_active_tab_pane_g3_cp4

0xcb06,	// (0x0002bf0d) bg_passive_tab_pane_g1_cp4

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp4

0xcb0f,	// (0x0002bf16) bg_passive_tab_pane_g3_cp4

0x3e7b,	// (0x00023282) bg_active_tab_pane_g1_cp5

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp5

0x3e84,	// (0x0002328b) bg_active_tab_pane_g3_cp5

0x3e7b,	// (0x00023282) bg_passive_tab_pane_g1_cp5

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp5

0x3e84,	// (0x0002328b) bg_passive_tab_pane_g3_cp5

0xc90b,	// (0x0002bd12) list_set_graphic_pane_ParamLimits

0xc90b,	// (0x0002bd12) list_set_graphic_pane

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp4

0xcb18,	// (0x0002bf1f) list_set_graphic_pane_g1_ParamLimits

0xcb18,	// (0x0002bf1f) list_set_graphic_pane_g1

0xcb24,	// (0x0002bf2b) list_set_graphic_pane_g2_ParamLimits

0xcb24,	// (0x0002bf2b) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002eb72) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002eb72) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x0002eee5) volume_small_pane_cp_g

0x3eda,	// (0x000232e1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3eda,	// (0x000232e1) list_double2_large_graphic_pane_g1_cp2

0x3ee6,	// (0x000232ed) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3ee6,	// (0x000232ed) list_double2_large_graphic_pane_g2_cp2

0x3ef7,	// (0x000232fe) list_double2_large_graphic_pane_g3_cp2

0x3eff,	// (0x00023306) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3eff,	// (0x00023306) list_double2_large_graphic_pane_t1_cp2

0x3f15,	// (0x0002331c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3f15,	// (0x0002331c) list_double2_large_graphic_pane_t2_cp2

0x60f4,	// (0x000254fb) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x60f4,	// (0x000254fb) list_double_large_graphic_pane_g1_cp2

0x6105,	// (0x0002550c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6105,	// (0x0002550c) list_double_large_graphic_pane_g2_cp2

0x4085,	// (0x0002348c) list_double_large_graphic_pane_g3_cp2

0x6116,	// (0x0002551d) list_double_large_graphic_pane_g4_cp

0x611e,	// (0x00025525) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x611e,	// (0x00025525) list_double_large_graphic_pane_t1_cp2

0x6135,	// (0x0002553c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6135,	// (0x0002553c) list_double_large_graphic_pane_t2_cp2

0x3f77,	// (0x0002337e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3f77,	// (0x0002337e) list_double2_graphic_pane_g1_cp2

0x3f85,	// (0x0002338c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3f85,	// (0x0002338c) list_double2_graphic_pane_g2_cp2

0x3f96,	// (0x0002339d) list_double2_graphic_pane_g3_cp2

0x3fa0,	// (0x000233a7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3fa0,	// (0x000233a7) list_double2_graphic_pane_t1_cp2

0x3fb6,	// (0x000233bd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3fb6,	// (0x000233bd) list_double2_graphic_pane_t2_cp2

0x3fc8,	// (0x000233cf) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3fc8,	// (0x000233cf) list_single_number_heading_pane_g1_cp2

0x3fd4,	// (0x000233db) list_single_number_heading_pane_g2_cp2

0x3fdc,	// (0x000233e3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3fdc,	// (0x000233e3) list_single_number_heading_pane_t1_cp2

0x3ff2,	// (0x000233f9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3ff2,	// (0x000233f9) list_single_number_heading_pane_t2_cp2

0x4004,	// (0x0002340b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4004,	// (0x0002340b) list_single_number_heading_pane_t3_cp2

0x3fc8,	// (0x000233cf) list_single_heading_pane_g1_cp2_ParamLimits

0x3fc8,	// (0x000233cf) list_single_heading_pane_g1_cp2

0x3fd4,	// (0x000233db) list_single_heading_pane_g2_cp2

0x3fdc,	// (0x000233e3) list_single_heading_pane_t1_cp2_ParamLimits

0x3fdc,	// (0x000233e3) list_single_heading_pane_t1_cp2

0x5efc,	// (0x00025303) list_single_heading_pane_t2_cp2_ParamLimits

0x5efc,	// (0x00025303) list_single_heading_pane_t2_cp2

0x5e3e,	// (0x00025245) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e3e,	// (0x00025245) list_double_graphic_pane_g1_cp2

0x5e4a,	// (0x00025251) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e4a,	// (0x00025251) list_double_graphic_pane_g2_cp2

0x5e59,	// (0x00025260) list_double_graphic_pane_g3_cp2

0x5e61,	// (0x00025268) list_double_graphic_pane_t1_cp2_ParamLimits

0x5e61,	// (0x00025268) list_double_graphic_pane_t1_cp2

0x5e77,	// (0x0002527e) list_double_graphic_pane_t2_cp2_ParamLimits

0x5e77,	// (0x0002527e) list_double_graphic_pane_t2_cp2

0x4079,	// (0x00023480) list_double_number_pane_g1_cp2_ParamLimits

0x4079,	// (0x00023480) list_double_number_pane_g1_cp2

0x4085,	// (0x0002348c) list_double_number_pane_g2_cp2

0x5e02,	// (0x00025209) list_double_number_pane_t1_cp2_ParamLimits

0x5e02,	// (0x00025209) list_double_number_pane_t1_cp2

0x5e16,	// (0x0002521d) list_double_number_pane_t2_cp2_ParamLimits

0x5e16,	// (0x0002521d) list_double_number_pane_t2_cp2

0x5e2c,	// (0x00025233) list_double_number_pane_t3_cp2_ParamLimits

0x5e2c,	// (0x00025233) list_double_number_pane_t3_cp2

0x5ceb,	// (0x000250f2) list_single_graphic_pane_g1_cp2_ParamLimits

0x5ceb,	// (0x000250f2) list_single_graphic_pane_g1_cp2

0x40dd,	// (0x000234e4) list_single_graphic_pane_g2_cp2_ParamLimits

0x40dd,	// (0x000234e4) list_single_graphic_pane_g2_cp2

0x40e9,	// (0x000234f0) list_single_graphic_pane_g3_cp2

0x5cc1,	// (0x000250c8) list_single_graphic_pane_t1_cp2_ParamLimits

0x5cc1,	// (0x000250c8) list_single_graphic_pane_t1_cp2

0x40dd,	// (0x000234e4) list_single_number_pane_g1_cp2_ParamLimits

0x40dd,	// (0x000234e4) list_single_number_pane_g1_cp2

0x40e9,	// (0x000234f0) list_single_number_pane_g2_cp2

0x5cc1,	// (0x000250c8) list_single_number_pane_t1_cp2_ParamLimits

0x5cc1,	// (0x000250c8) list_single_number_pane_t1_cp2

0x5cd7,	// (0x000250de) list_single_number_pane_t2_cp2_ParamLimits

0x5cd7,	// (0x000250de) list_single_number_pane_t2_cp2

0x3ee6,	// (0x000232ed) list_double2_pane_g1_cp2_ParamLimits

0x3ee6,	// (0x000232ed) list_double2_pane_g1_cp2

0x3ef7,	// (0x000232fe) list_double2_pane_g2_cp2

0x4051,	// (0x00023458) list_double2_pane_t1_cp2_ParamLimits

0x4051,	// (0x00023458) list_double2_pane_t1_cp2

0x4067,	// (0x0002346e) list_double2_pane_t2_cp2_ParamLimits

0x4067,	// (0x0002346e) list_double2_pane_t2_cp2

0x4079,	// (0x00023480) list_double_pane_g1_cp2_ParamLimits

0x4079,	// (0x00023480) list_double_pane_g1_cp2

0x4085,	// (0x0002348c) list_double_pane_g2_cp2

0x408d,	// (0x00023494) list_double_pane_t1_cp2_ParamLimits

0x408d,	// (0x00023494) list_double_pane_t1_cp2

0x40a3,	// (0x000234aa) list_double_pane_t2_cp2_ParamLimits

0x40a3,	// (0x000234aa) list_double_pane_t2_cp2

0x40cd,	// (0x000234d4) list_single_pane_cp2_g3

0x40dd,	// (0x000234e4) list_single_pane_g1_cp2_ParamLimits

0x40dd,	// (0x000234e4) list_single_pane_g1_cp2

0x40e9,	// (0x000234f0) list_single_pane_g2_cp2

0x40f1,	// (0x000234f8) list_single_pane_t1_cp2_ParamLimits

0x40f1,	// (0x000234f8) list_single_pane_t1_cp2

0x4109,	// (0x00023510) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4109,	// (0x00023510) list_single_large_graphic_pane_g1_cp2

0x4115,	// (0x0002351c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4115,	// (0x0002351c) list_single_large_graphic_pane_g2_cp2

0x4121,	// (0x00023528) list_single_large_graphic_pane_g3_cp2

0x4129,	// (0x00023530) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4129,	// (0x00023530) list_single_large_graphic_pane_g4_cp1

0x4143,	// (0x0002354a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4143,	// (0x0002354a) list_single_large_graphic_pane_t1_cp2

0x5c8d,	// (0x00025094) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5c8d,	// (0x00025094) list_single_graphic_heading_pane_g1_cp2

0x5c4e,	// (0x00025055) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5c4e,	// (0x00025055) list_single_graphic_heading_pane_g4_cp2

0x40e9,	// (0x000234f0) list_single_graphic_heading_pane_g5_cp2

0x5c99,	// (0x000250a0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c99,	// (0x000250a0) list_single_graphic_heading_pane_t1_cp2

0x5caf,	// (0x000250b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5caf,	// (0x000250b6) list_single_graphic_heading_pane_t2_cp2

0x5c42,	// (0x00025049) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c42,	// (0x00025049) list_single_2graphic_pane_g1_cp2

0x5c4e,	// (0x00025055) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5c4e,	// (0x00025055) list_single_2graphic_pane_g2_cp2

0x40e9,	// (0x000234f0) list_single_2graphic_pane_g3_cp2

0x5c5f,	// (0x00025066) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5c5f,	// (0x00025066) list_single_2graphic_pane_g4_cp2

0x5c6b,	// (0x00025072) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5c6b,	// (0x00025072) list_single_2graphic_pane_t1_cp2

0x2be9,	// (0x00021ff0) list_highlight_pane_g10_cp1

0x581a,	// (0x00024c21) list_highlight_pane_g1_cp1

0x5822,	// (0x00024c29) list_highlight_pane_g2_cp1

0x582a,	// (0x00024c31) list_highlight_pane_g3_cp1

0x5832,	// (0x00024c39) list_highlight_pane_g4_cp1

0x583a,	// (0x00024c41) list_highlight_pane_g5_cp1

0x5842,	// (0x00024c49) list_highlight_pane_g6_cp1

0x584a,	// (0x00024c51) list_highlight_pane_g7_cp1

0x5852,	// (0x00024c59) list_highlight_pane_g8_cp1

0x585a,	// (0x00024c61) list_highlight_pane_g9_cp1

0xd7c9,	// (0x0002cbd0) form_field_slider_pane_t3

0xd7d7,	// (0x0002cbde) form_field_slider_pane_t4

0x5756,	// (0x00024b5d) slider_form_pane_ParamLimits

0x5756,	// (0x00024b5d) slider_form_pane

0x2bf3,	// (0x00021ffa) control_abbreviations

0x2bf3,	// (0x00021ffa) control_conventions

0x2bf3,	// (0x00021ffa) control_definitions

0x2bf3,	// (0x00021ffa) format_table_attribute

0x5f46,	// (0x0002534d) bg_popup_preview_window_pane_g9

0x2bf3,	// (0x00021ffa) format_table_data2

0x2bf3,	// (0x00021ffa) format_table_data3

0x2bf3,	// (0x00021ffa) format_table_data_example

0x0008,

0x2bf3,	// (0x00021ffa) intro_purpose

0xf8fb,	// (0x0002ed02) bg_popup_preview_window_pane_g

0x2bf3,	// (0x00021ffa) texts_category

0x2bf3,	// (0x00021ffa) texts_graphics

0x4159,	// (0x00023560) text_digital

0x4168,	// (0x0002356f) text_primary

0x4177,	// (0x0002357e) text_primary_small

0x4186,	// (0x0002358d) text_secondary

0x4195,	// (0x0002359c) text_title

0x666e,	// (0x00025a75) bg_passive_tab_pane_g1_cp3_srt

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp3_srt

0x6677,	// (0x00025a7e) bg_passive_tab_pane_g3_cp3_srt

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp3_srt_ParamLimits

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp3_srt

0x6680,	// (0x00025a87) tabs_4_active_pane_srt_g1

0xdb5b,	// (0x0002cf62) tabs_4_active_pane_srt_t1_ParamLimits

0xdb5b,	// (0x0002cf62) tabs_4_active_pane_srt_t1

0x666e,	// (0x00025a75) bg_active_tab_pane_g1_cp3_copy1

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp3_copy1

0x6677,	// (0x00025a7e) bg_active_tab_pane_g3_cp3_copy1

0x2cd3,	// (0x000220da) tabs_2_long_active_pane_srt_ParamLimits

0x2cd3,	// (0x000220da) tabs_2_long_active_pane_srt

0x2cd3,	// (0x000220da) tabs_2_long_passive_pane_srt_ParamLimits

0x2cd3,	// (0x000220da) tabs_2_long_passive_pane_srt

0x450a,	// (0x00023911) bg_passive_tab_pane_cp4_srt_ParamLimits

0x450a,	// (0x00023911) bg_passive_tab_pane_cp4_srt

0x638a,	// (0x00025791) bg_passive_tab_pane_g1_cp4_srt

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp4_srt

0x6393,	// (0x0002579a) bg_passive_tab_pane_g3_cp4_srt

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp4_srt_ParamLimits

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp4_srt

0xd969,	// (0x0002cd70) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd969,	// (0x0002cd70) tabs_2_long_active_pane_srt_t1

0x638a,	// (0x00025791) bg_active_tab_pane_g1_cp4_srt

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp4_srt

0x6393,	// (0x0002579a) bg_active_tab_pane_g3_cp4_srt

0x2f4e,	// (0x00022355) tabs_3_long_active_pane_srt_ParamLimits

0x2f4e,	// (0x00022355) tabs_3_long_active_pane_srt

0x2f4e,	// (0x00022355) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2f4e,	// (0x00022355) tabs_3_long_passive_pane_cp_srt

0x2f4e,	// (0x00022355) tabs_3_long_passive_pane_srt_ParamLimits

0x2f4e,	// (0x00022355) tabs_3_long_passive_pane_srt

0x450a,	// (0x00023911) bg_passive_tab_pane_cp5_srt_ParamLimits

0x450a,	// (0x00023911) bg_passive_tab_pane_cp5_srt

0x3e7b,	// (0x00023282) bg_passive_tab_pane_g1_cp5_srt

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp5_srt

0x3e84,	// (0x0002328b) bg_passive_tab_pane_g3_cp5_srt

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp5_srt_ParamLimits

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp5_srt

0xd953,	// (0x0002cd5a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd953,	// (0x0002cd5a) tabs_3_long_active_pane_srt_t1

0x3e7b,	// (0x00023282) bg_active_tab_pane_g1_cp5_srt

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp5_srt

0x3e84,	// (0x0002328b) bg_active_tab_pane_g3_cp5_srt

0x636a,	// (0x00025771) navi_text_pane_srt_t1

0x6362,	// (0x00025769) navi_icon_pane_srt_g1

0x4368,	// (0x0002376f) midp_editing_number_pane_srt

0x41a4,	// (0x000235ab) midp_ticker_pane_srt

0x4370,	// (0x00023777) midp_ticker_pane_srt_g1

0x4378,	// (0x0002377f) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002eb91) midp_ticker_pane_srt_g

0x4380,	// (0x00023787) midp_ticker_pane_srt_t1

0x6353,	// (0x0002575a) midp_editing_number_pane_t1_copy1

0xcb48,	// (0x0002bf4f) listscroll_midp_pane

0xcb48,	// (0x0002bf4f) midp_form_pane

0x421a,	// (0x00023621) midp_info_popup_window_ParamLimits

0x421a,	// (0x00023621) midp_info_popup_window

0x35f7,	// (0x000229fe) bg_popup_sub_pane_cp50_ParamLimits

0x35f7,	// (0x000229fe) bg_popup_sub_pane_cp50

0x5452,	// (0x00024859) listscroll_midp_info_pane_ParamLimits

0x5452,	// (0x00024859) listscroll_midp_info_pane

0x543a,	// (0x00024841) listscroll_form_midp_pane_ParamLimits

0x543a,	// (0x00024841) listscroll_form_midp_pane

0x5446,	// (0x0002484d) scroll_bar_cp050

0xd7bd,	// (0x0002cbc4) list_midp_pane

0x708a,	// (0x00026491) signal_pane_g2_cp

0x5354,	// (0x0002475b) listscroll_midp_info_pane_t1_ParamLimits

0x5354,	// (0x0002475b) listscroll_midp_info_pane_t1

0x536c,	// (0x00024773) listscroll_midp_info_pane_t2_ParamLimits

0x536c,	// (0x00024773) listscroll_midp_info_pane_t2

0x53aa,	// (0x000247b1) listscroll_midp_info_pane_t3_ParamLimits

0x53aa,	// (0x000247b1) listscroll_midp_info_pane_t3

0x53e4,	// (0x000247eb) listscroll_midp_info_pane_t4_ParamLimits

0x53e4,	// (0x000247eb) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0002ec3d) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0002ec3d) listscroll_midp_info_pane_t

0x36b9,	// (0x00022ac0) scroll_pane_cp21

0x52f2,	// (0x000246f9) form_midp_field_choice_group_pane

0x52fb,	// (0x00024702) form_midp_field_text_pane

0x533a,	// (0x00024741) form_midp_field_time_pane

0x5342,	// (0x00024749) form_midp_gauge_slider_pane

0x534b,	// (0x00024752) form_midp_gauge_wait_pane

0x2bf3,	// (0x00021ffa) form_midp_image_pane

0xb98e,	// (0x0002ad95) list_single_midp_pane_ParamLimits

0xb98e,	// (0x0002ad95) list_single_midp_pane

0xd79b,	// (0x0002cba2) form_midp_field_text_pane_t1

0x509c,	// (0x000244a3) input_focus_pane_cp050

0x52e1,	// (0x000246e8) list_midp_form_text_pane

0x5279,	// (0x00024680) form_midp_field_choice_group_pane_t1

0x5287,	// (0x0002468e) input_focus_pane_cp051

0x529b,	// (0x000246a2) list_midp_choice_pane

0x2bf3,	// (0x00021ffa) status_idle_pane

0x525d,	// (0x00024664) form_midp_field_time_pane_t1

0x2be9,	// (0x00021ff0) wait_anim_pane_g2_copy1

0x526b,	// (0x00024672) form_midp_field_time_pane_t2

0x0001,

0x42c8,	// (0x000236cf) aid_navinavi_width_2_pane

0xf831,	// (0x0002ec38) form_midp_field_time_pane_t

0x2bf3,	// (0x00021ffa) input_focus_pane_cp052

0x2bf3,	// (0x00021ffa) bg_input_focus_pane_cp040

0x521d,	// (0x00024624) form_midp_gauge_slider_pane_t1

0x522b,	// (0x00024632) form_midp_gauge_slider_pane_t2

0xd77f,	// (0x0002cb86) form_midp_gauge_slider_pane_t3

0xd78d,	// (0x0002cb94) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0002ec2f) form_midp_gauge_slider_pane_t

0x5255,	// (0x0002465c) form_midp_slider_pane

0x2cd3,	// (0x000220da) bg_input_focus_pane_cp041_ParamLimits

0x2cd3,	// (0x000220da) bg_input_focus_pane_cp041

0x51ea,	// (0x000245f1) form_midp_gauge_wait_pane_t1_ParamLimits

0x51ea,	// (0x000245f1) form_midp_gauge_wait_pane_t1

0x51fc,	// (0x00024603) form_midp_gauge_wait_pane_t2_ParamLimits

0x51fc,	// (0x00024603) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x0002ec2a) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x0002ec2a) form_midp_gauge_wait_pane_t

0x520e,	// (0x00024615) form_midp_wait_pane_ParamLimits

0x520e,	// (0x00024615) form_midp_wait_pane

0x51b4,	// (0x000245bb) form_midp_image_pane_g1

0x51bd,	// (0x000245c4) form_midp_image_pane_t1

0x51cc,	// (0x000245d3) form_midp_image_pane_t2

0x51db,	// (0x000245e2) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x0002ec23) form_midp_image_pane_t

0x51ab,	// (0x000245b2) list_single_midp_pane_g1

0x09de,	// (0x0001fde5) list_single_midp_pane_t1

0xd76a,	// (0x0002cb71) list_midp_form_item_pane_ParamLimits

0xd76a,	// (0x0002cb71) list_midp_form_item_pane

0x4270,	// (0x00023677) list_midp_form_item_pane_t1

0x427f,	// (0x00023686) midp_ticker_pane_g1

0x428b,	// (0x00023692) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002eb77) midp_ticker_pane_g

0xcbf0,	// (0x0002bff7) midp_ticker_pane_t1

0xdad4,	// (0x0002cedb) midp_editing_number_pane_t1

0x6582,	// (0x00025989) midp_editing_number_pane

0x6591,	// (0x00025998) midp_ticker_pane

0x6343,	// (0x0002574a) ai_message_heading_pane

0x2bf3,	// (0x00021ffa) bg_popup_window_pane_cp14

0x634b,	// (0x00025752) listscroll_ai_message_pane

0x62cd,	// (0x000256d4) ai_message_heading_pane_g1_ParamLimits

0x62cd,	// (0x000256d4) ai_message_heading_pane_g1

0x62d9,	// (0x000256e0) ai_message_heading_pane_g2_ParamLimits

0x62d9,	// (0x000256e0) ai_message_heading_pane_g2

0x62e5,	// (0x000256ec) ai_message_heading_pane_g3_ParamLimits

0x62e5,	// (0x000256ec) ai_message_heading_pane_g3

0x62f1,	// (0x000256f8) ai_message_heading_pane_g4_ParamLimits

0x62f1,	// (0x000256f8) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x0002ed64) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x0002ed64) ai_message_heading_pane_g

0x62fd,	// (0x00025704) ai_message_heading_pane_t1_ParamLimits

0x62fd,	// (0x00025704) ai_message_heading_pane_t1

0x6317,	// (0x0002571e) ai_message_heading_pane_t2_ParamLimits

0x6317,	// (0x0002571e) ai_message_heading_pane_t2

0x0001,

0xf966,	// (0x0002ed6d) ai_message_heading_pane_t_ParamLimits

0xf966,	// (0x0002ed6d) ai_message_heading_pane_t

0x6329,	// (0x00025730) bg_popup_heading_pane_cp1_ParamLimits

0x6329,	// (0x00025730) bg_popup_heading_pane_cp1

0x62bb,	// (0x000256c2) list_ai_message_pane_ParamLimits

0x62bb,	// (0x000256c2) list_ai_message_pane

0x36b9,	// (0x00022ac0) scroll_pane_cp10

0x6257,	// (0x0002565e) list_ai_message_pane_g1

0x625f,	// (0x00025666) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x0002ed41) list_ai_message_pane_g

0x6267,	// (0x0002566e) list_ai_message_pane_t1_ParamLimits

0x6267,	// (0x0002566e) list_ai_message_pane_t1

0x627c,	// (0x00025683) list_ai_message_pane_t2_ParamLimits

0x627c,	// (0x00025683) list_ai_message_pane_t2

0x6291,	// (0x00025698) list_ai_message_pane_t3_ParamLimits

0x6291,	// (0x00025698) list_ai_message_pane_t3

0x62a6,	// (0x000256ad) list_ai_message_pane_t4_ParamLimits

0x62a6,	// (0x000256ad) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x0002ed46) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x0002ed46) list_ai_message_pane_t

0xd932,	// (0x0002cd39) cell_ai_soft_ind_pane_ParamLimits

0xd932,	// (0x0002cd39) cell_ai_soft_ind_pane

0x42a9,	// (0x000236b0) cell_ai_soft_ind_pane_g1_ParamLimits

0x42a9,	// (0x000236b0) cell_ai_soft_ind_pane_g1

0x2bf3,	// (0x00021ffa) grid_highlight_cp1

0x42b6,	// (0x000236bd) text_secondary_cp56_ParamLimits

0x42b6,	// (0x000236bd) text_secondary_cp56

0x6217,	// (0x0002561e) example_general_pane_ParamLimits

0x6217,	// (0x0002561e) example_general_pane

0x6223,	// (0x0002562a) example_parent_pane_g1_ParamLimits

0x6223,	// (0x0002562a) example_parent_pane_g1

0x622f,	// (0x00025636) example_parent_pane_t1_ParamLimits

0x622f,	// (0x00025636) example_parent_pane_t1

0xd019,	// (0x0002c420) popup_preview_text_window_ParamLimits

0xd019,	// (0x0002c420) popup_preview_text_window

0x40d5,	// (0x000234dc) list_single_pane_cp2_g4

0x3004,	// (0x0002240b) bg_popup_preview_window_pane_ParamLimits

0x3004,	// (0x0002240b) bg_popup_preview_window_pane

0x5f4e,	// (0x00025355) popup_preview_text_window_t1_ParamLimits

0x5f4e,	// (0x00025355) popup_preview_text_window_t1

0x5f6c,	// (0x00025373) popup_preview_text_window_t2_ParamLimits

0x5f6c,	// (0x00025373) popup_preview_text_window_t2

0x5fb5,	// (0x000253bc) popup_preview_text_window_t3_ParamLimits

0x5fb5,	// (0x000253bc) popup_preview_text_window_t3

0x5ffa,	// (0x00025401) popup_preview_text_window_t4_ParamLimits

0x5ffa,	// (0x00025401) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x0002ed15) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x0002ed15) popup_preview_text_window_t

0x6078,	// (0x0002547f) scroll_pane_cp11

0x4fac,	// (0x000243b3) bg_popup_preview_window_pane_g1

0x5f0e,	// (0x00025315) bg_popup_preview_window_pane_g2

0x5f16,	// (0x0002531d) bg_popup_preview_window_pane_g3

0x5f1e,	// (0x00025325) bg_popup_preview_window_pane_g4

0x5f26,	// (0x0002532d) bg_popup_preview_window_pane_g5

0x5f2e,	// (0x00025335) bg_popup_preview_window_pane_g6

0x5f36,	// (0x0002533d) bg_popup_preview_window_pane_g7

0x5f3e,	// (0x00025345) bg_popup_preview_window_pane_g8

0x113f,	// (0x00020546) aid_popup_width_pane

0xcf95,	// (0x0002c39c) popup_midp_note_alarm_window_ParamLimits

0xcf95,	// (0x0002c39c) popup_midp_note_alarm_window

0x3533,	// (0x0002293a) data_form_pane_ParamLimits

0xb801,	// (0x0002ac08) form_field_data_pane_g1

0xb80b,	// (0x0002ac12) form_field_data_pane_t1_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_ParamLimits

0x354d,	// (0x00022954) data_form_wide_pane_ParamLimits

0x06e0,	// (0x0001fae7) form_field_data_wide_pane_g1

0x06ec,	// (0x0001faf3) form_field_data_wide_pane_t1_ParamLimits

0x32b0,	// (0x000226b7) input_focus_pane_cp6_ParamLimits

0xc96c,	// (0x0002bd73) input_popup_find_pane_g1_ParamLimits

0xc96c,	// (0x0002bd73) input_popup_find_pane_g1

0x16a9,	// (0x00020ab0) aid_navi_side_left_pane

0x16be,	// (0x00020ac5) aid_navi_side_right_pane

0x5915,	// (0x00024d1c) bg_popup_window_pane_cp30_ParamLimits

0x5915,	// (0x00024d1c) bg_popup_window_pane_cp30

0x598f,	// (0x00024d96) popup_midp_note_alarm_window_g1_ParamLimits

0x598f,	// (0x00024d96) popup_midp_note_alarm_window_g1

0x59bf,	// (0x00024dc6) popup_midp_note_alarm_window_t1_ParamLimits

0x59bf,	// (0x00024dc6) popup_midp_note_alarm_window_t1

0x5a60,	// (0x00024e67) popup_midp_note_alarm_window_t2_ParamLimits

0x5a60,	// (0x00024e67) popup_midp_note_alarm_window_t2

0x5b0e,	// (0x00024f15) popup_midp_note_alarm_window_t3_ParamLimits

0x5b0e,	// (0x00024f15) popup_midp_note_alarm_window_t3

0x5b40,	// (0x00024f47) popup_midp_note_alarm_window_t4_ParamLimits

0x5b40,	// (0x00024f47) popup_midp_note_alarm_window_t4

0x5b66,	// (0x00024f6d) popup_midp_note_alarm_window_t5_ParamLimits

0x5b66,	// (0x00024f6d) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x0002ecb2) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x0002ecb2) popup_midp_note_alarm_window_t

0x5c12,	// (0x00025019) wait_bar_pane_cp1_ParamLimits

0x5c12,	// (0x00025019) wait_bar_pane_cp1

0x2bf3,	// (0x00021ffa) wait_anim_pane_copy1

0x2bf3,	// (0x00021ffa) wait_border_pane_copy1

0x55fb,	// (0x00024a02) wait_border_pane_g1_copy1

0x0706,	// (0x0001fb0d) form_field_popup_pane_g1

0xb825,	// (0x0002ac2c) form_field_popup_pane_t1_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_cp7_ParamLimits

0x3579,	// (0x00022980) list_form_pane_ParamLimits

0x0726,	// (0x0001fb2d) form_field_popup_wide_pane_g1

0x072e,	// (0x0001fb35) form_field_popup_wide_pane_t1_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_cp8_ParamLimits

0x3585,	// (0x0002298c) list_form_wide_pane_ParamLimits

0x66fa,	// (0x00025b01) aid_size_cell_graphic_pane

0xb8a4,	// (0x0002acab) data_form_pane_t1_ParamLimits

0xb9ba,	// (0x0002adc1) data_form_wide_pane_t1_ParamLimits

0xd3f6,	// (0x0002c7fd) bg_status_flat_pane

0xbded,	// (0x0002b1f4) title_pane_t1_ParamLimits

0x2c9b,	// (0x000220a2) title_pane_t2_ParamLimits

0x2cc1,	// (0x000220c8) title_pane_t3_ParamLimits

0xf573,	// (0x0002e97a) title_pane_t_ParamLimits

0x3b3a,	// (0x00022f41) level_1_signal_ParamLimits

0x3b47,	// (0x00022f4e) level_2_signal_ParamLimits

0x3b54,	// (0x00022f5b) level_3_signal_ParamLimits

0x3b61,	// (0x00022f68) level_4_signal_ParamLimits

0x3b6e,	// (0x00022f75) level_5_signal_ParamLimits

0x3b7b,	// (0x00022f82) level_6_signal_ParamLimits

0x3b88,	// (0x00022f8f) level_7_signal_ParamLimits

0x3b3a,	// (0x00022f41) level_1_battery_ParamLimits

0x3b47,	// (0x00022f4e) level_2_battery_ParamLimits

0x3b54,	// (0x00022f5b) level_3_battery_ParamLimits

0x3b61,	// (0x00022f68) level_4_battery_ParamLimits

0x3b6e,	// (0x00022f75) level_5_battery_ParamLimits

0x3b7b,	// (0x00022f82) level_6_battery_ParamLimits

0x3b88,	// (0x00022f8f) level_7_battery_ParamLimits

0x581a,	// (0x00024c21) bg_status_flat_pane_g1

0x5822,	// (0x00024c29) bg_status_flat_pane_g2

0x582a,	// (0x00024c31) bg_status_flat_pane_g3

0x5832,	// (0x00024c39) bg_status_flat_pane_g4

0x583a,	// (0x00024c41) bg_status_flat_pane_g5

0x5842,	// (0x00024c49) bg_status_flat_pane_g6

0x584a,	// (0x00024c51) bg_status_flat_pane_g7

0xbe81,	// (0x0002b288) tabs_3_active_pane_t1_ParamLimits

0xbe81,	// (0x0002b288) tabs_3_passive_pane_t1_ParamLimits

0xbe9b,	// (0x0002b2a2) tabs_4_active_pane_t1_ParamLimits

0xbe9b,	// (0x0002b2a2) tabs_4_1_passive_pane_t1_ParamLimits

0xc982,	// (0x0002bd89) tabs_2_active_pane_t1_ParamLimits

0xc982,	// (0x0002bd89) tabs_2_passive_pane_t1_ParamLimits

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp4_ParamLimits

0xc994,	// (0x0002bd9b) tabs_2_long_active_pane_t1_ParamLimits

0x450a,	// (0x00023911) bg_passive_tab_pane_cp4_ParamLimits

0x1bf1,	// (0x00020ff8) list_single_midp_graphic_pane_t1_ParamLimits

0x2cd3,	// (0x000220da) bg_active_tab_pane_cp5_ParamLimits

0xc9a7,	// (0x0002bdae) tabs_3_long_active_pane_t1_ParamLimits

0x450a,	// (0x00023911) bg_passive_tab_pane_cp5_ParamLimits

0x1bf1,	// (0x00020ff8) list_single_midp_graphic_pane_t1

0xd3f6,	// (0x0002c7fd) bg_status_flat_pane_ParamLimits

0x4c37,	// (0x0002403e) indicator_pane_cp2_ParamLimits

0x4c37,	// (0x0002403e) indicator_pane_cp2

0xd56d,	// (0x0002c974) navi_pane_srt_ParamLimits

0xd56d,	// (0x0002c974) navi_pane_srt

0x4d8b,	// (0x00024192) popup_clock_digital_analogue_window_cp1

0x2db0,	// (0x000221b7) indicator_pane_t1

0x41a4,	// (0x000235ab) copy_highlight_pane

0x41a4,	// (0x000235ab) cursor_graphics_pane

0x41a4,	// (0x000235ab) graphic_within_text_pane

0x41a4,	// (0x000235ab) link_highlight_pane

0x603b,	// (0x00025442) popup_preview_text_window_t5_ParamLimits

0x603b,	// (0x00025442) popup_preview_text_window_t5

0x42d0,	// (0x000236d7) cursor_digital_pane

0x42d0,	// (0x000236d7) cursor_primary_pane

0x42e1,	// (0x000236e8) cursor_primary_small_pane

0x42e9,	// (0x000236f0) cursor_secondary_pane

0x42f1,	// (0x000236f8) cursor_title_pane

0x42d0,	// (0x000236d7) link_highlight_digital_pane

0x42d8,	// (0x000236df) link_highlight_primary_pane

0x42e1,	// (0x000236e8) link_highlight_primary_small_pane

0x42e9,	// (0x000236f0) link_highlight_secondary_pane

0x42f1,	// (0x000236f8) link_highlight_title_pane

0x42d0,	// (0x000236d7) copy_highlight_digital_pane

0x42d0,	// (0x000236d7) copy_highlight_primary_pane

0x42e1,	// (0x000236e8) copy_highlight_primary_small_pane

0x42e9,	// (0x000236f0) copy_highlight_secondary_pane

0x42f1,	// (0x000236f8) copy_highlight_title_pane

0x42e9,	// (0x000236f0) graphic_text_digital_pane

0x58b8,	// (0x00024cbf) graphic_text_primary_pane

0x58c1,	// (0x00024cc8) graphic_text_primary_small_pane

0x42e1,	// (0x000236e8) graphic_text_secondary_pane

0x42d0,	// (0x000236d7) graphic_text_title_pane

0xcc02,	// (0x0002c009) cursor_primary_pane_g1

0x58aa,	// (0x00024cb1) cursor_text_primary_t1

0xd7f9,	// (0x0002cc00) cursor_primary_small_pane_g1

0x589c,	// (0x00024ca3) cursor_text_primary_small_t1

0xd7ef,	// (0x0002cbf6) cursor_primary_small_pane_g1_copy1

0x5884,	// (0x00024c8b) cursor_text_primary_small_t1_copy1

0x5862,	// (0x00024c69) cursor_text_title_t1

0xd7e5,	// (0x0002cbec) cursor_title_pane_g1

0xcc02,	// (0x0002c009) cursor_digital_pane_g1

0x4303,	// (0x0002370a) cursor_text_digital_t1

0x4328,	// (0x0002372f) link_highlight_primary_pane_g1

0x580b,	// (0x00024c12) link_highlight_primary_pane_t1

0x4311,	// (0x00023718) link_highlight_primary_small_pane_g1

0x4319,	// (0x00023720) link_highlight_primary_small_pane_t1

0x4328,	// (0x0002372f) link_highlight_secondary_pane_g1

0x4330,	// (0x00023737) link_highlight_secondary_pane_t1

0x577f,	// (0x00024b86) link_highlight_title_pane_g1

0x5787,	// (0x00024b8e) link_highlight_title_pane_t1

0x5768,	// (0x00024b6f) link_highlight_digital_pane_g1

0x5770,	// (0x00024b77) link_highlight_digital_pane_t1

0x5640,	// (0x00024a47) copy_highlight_primary_pane_g1

0x5648,	// (0x00024a4f) copy_highlight_primary_pane_t1

0x561a,	// (0x00024a21) copy_highlight_primary_small_pane_g1

0x5631,	// (0x00024a38) copy_highlight_primary_small_pane_t1

0x433f,	// (0x00023746) copy_highlight_secondary_pane_g1

0x4347,	// (0x0002374e) copy_highlight_secondary_pane_t1

0x561a,	// (0x00024a21) copy_highlight_title_pane_g1

0x5622,	// (0x00024a29) copy_highlight_title_pane_t1

0x5640,	// (0x00024a47) copy_highlight_digital_pane_g1

0x68c4,	// (0x00025ccb) copy_highlight_digital_pane_t1

0x6818,	// (0x00025c1f) graphic_text_primary_pane_g1

0x68a8,	// (0x00025caf) graphic_text_primary_pane_t1

0x68b6,	// (0x00025cbd) graphic_text_primary_pane_t2

0x0001,

0xf9da,	// (0x0002ede1) graphic_text_primary_pane_t

0x6884,	// (0x00025c8b) graphic_text_primary_small_pane_g1

0x688c,	// (0x00025c93) graphic_text_primary_small_pane_t1

0x689a,	// (0x00025ca1) graphic_text_primary_small_pane_t2

0x0001,

0xf9d5,	// (0x0002eddc) graphic_text_primary_small_pane_t

0x6860,	// (0x00025c67) graphic_text_secondary_pane_g1

0x6868,	// (0x00025c6f) graphic_text_secondary_pane_t1

0x6876,	// (0x00025c7d) graphic_text_secondary_pane_t2

0x0001,

0xf9d0,	// (0x0002edd7) graphic_text_secondary_pane_t

0x683c,	// (0x00025c43) graphic_text_title_pane_g1

0x6844,	// (0x00025c4b) graphic_text_title_pane_t1

0x6852,	// (0x00025c59) graphic_text_title_pane_t2

0x0001,

0xf9cb,	// (0x0002edd2) graphic_text_title_pane_t

0x6818,	// (0x00025c1f) graphic_text_digital_pane_g1

0x6820,	// (0x00025c27) graphic_text_digital_pane_t1

0x682e,	// (0x00025c35) graphic_text_digital_pane_t2

0x0001,

0xf9c6,	// (0x0002edcd) graphic_text_digital_pane_t

0x2cd3,	// (0x000220da) navi_icon_pane_srt_ParamLimits

0x2cd3,	// (0x000220da) navi_icon_pane_srt

0x2bf3,	// (0x00021ffa) navi_midp_pane_srt

0x2bf3,	// (0x00021ffa) navi_navi_pane_srt

0x2cd3,	// (0x000220da) navi_text_pane_srt_ParamLimits

0x2cd3,	// (0x000220da) navi_text_pane_srt

0x67e3,	// (0x00025bea) navi_navi_icon_text_pane_srt

0x67eb,	// (0x00025bf2) navi_navi_pane_srt_g1_ParamLimits

0x67eb,	// (0x00025bf2) navi_navi_pane_srt_g1

0x67fd,	// (0x00025c04) navi_navi_pane_srt_g2_ParamLimits

0x67fd,	// (0x00025c04) navi_navi_pane_srt_g2

0x0001,

0xf9c1,	// (0x0002edc8) navi_navi_pane_srt_g_ParamLimits

0xf9c1,	// (0x0002edc8) navi_navi_pane_srt_g

0x680f,	// (0x00025c16) navi_navi_tabs_pane_srt

0x67e3,	// (0x00025bea) navi_navi_text_pane_srt

0x67e3,	// (0x00025bea) navi_navi_volume_pane_srt

0x67d4,	// (0x00025bdb) navi_navi_text_pane_srt_t1

0x1f6b,	// (0x00021372) navi_navi_volume_pane_srt_g1

0x1f73,	// (0x0002137a) volume_small_pane_srt_ParamLimits

0x1f73,	// (0x0002137a) volume_small_pane_srt

0x1989,	// (0x00020d90) volume_small_pane_srt_g1_ParamLimits

0x1989,	// (0x00020d90) volume_small_pane_srt_g1

0x1999,	// (0x00020da0) volume_small_pane_srt_g2_ParamLimits

0x1999,	// (0x00020da0) volume_small_pane_srt_g2

0x19aa,	// (0x00020db1) volume_small_pane_srt_g3_ParamLimits

0x19aa,	// (0x00020db1) volume_small_pane_srt_g3

0x19bb,	// (0x00020dc2) volume_small_pane_srt_g4_ParamLimits

0x19bb,	// (0x00020dc2) volume_small_pane_srt_g4

0x19cc,	// (0x00020dd3) volume_small_pane_srt_g5_ParamLimits

0x19cc,	// (0x00020dd3) volume_small_pane_srt_g5

0x19dd,	// (0x00020de4) volume_small_pane_srt_g6_ParamLimits

0x19dd,	// (0x00020de4) volume_small_pane_srt_g6

0x19ee,	// (0x00020df5) volume_small_pane_srt_g7_ParamLimits

0x19ee,	// (0x00020df5) volume_small_pane_srt_g7

0x19ff,	// (0x00020e06) volume_small_pane_srt_g8_ParamLimits

0x19ff,	// (0x00020e06) volume_small_pane_srt_g8

0x1a10,	// (0x00020e17) volume_small_pane_srt_g9_ParamLimits

0x1a10,	// (0x00020e17) volume_small_pane_srt_g9

0x1a21,	// (0x00020e28) volume_small_pane_srt_g10_ParamLimits

0x1a21,	// (0x00020e28) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002eb7c) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002eb7c) volume_small_pane_srt_g

0x30ad,	// (0x000224b4) query_popup_data_pane_cp2

0x67ba,	// (0x00025bc1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x67ba,	// (0x00025bc1) navi_navi_icon_text_pane_srt_t1

0x58b8,	// (0x00024cbf) navi_tabs_2_long_pane_srt

0x58b8,	// (0x00024cbf) navi_tabs_2_pane_srt

0x58b8,	// (0x00024cbf) navi_tabs_3_long_pane_srt

0x58b8,	// (0x00024cbf) navi_tabs_3_pane_srt

0x58b8,	// (0x00024cbf) navi_tabs_4_pane_srt

0x1f4b,	// (0x00021352) tabs_2_active_pane_srt_ParamLimits

0x1f4b,	// (0x00021352) tabs_2_active_pane_srt

0x1f5b,	// (0x00021362) tabs_2_passive_pane_srt_ParamLimits

0x1f5b,	// (0x00021362) tabs_2_passive_pane_srt

0x509c,	// (0x000244a3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x509c,	// (0x000244a3) bg_passive_tab_pane_cp1_srt

0x6786,	// (0x00025b8d) bg_passive_tab_pane_g1_cp1_srt

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp1_srt

0x678f,	// (0x00025b96) bg_passive_tab_pane_g3_cp1_srt

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp1_srt_ParamLimits

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp1_srt

0x6798,	// (0x00025b9f) tabs_2_active_pane_srt_g1

0xdbd7,	// (0x0002cfde) tabs_2_active_pane_srt_t1_ParamLimits

0xdbd7,	// (0x0002cfde) tabs_2_active_pane_srt_t1

0x6786,	// (0x00025b8d) bg_active_tab_pane_g1_cp1_srt

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp1_srt

0x678f,	// (0x00025b96) bg_active_tab_pane_g3_cp1_srt

0x1f18,	// (0x0002131f) tabs_3_active_pane_srt_ParamLimits

0x1f18,	// (0x0002131f) tabs_3_active_pane_srt

0x1f29,	// (0x00021330) tabs_3_passive_pane_cp_srt_ParamLimits

0x1f29,	// (0x00021330) tabs_3_passive_pane_cp_srt

0x1f3a,	// (0x00021341) tabs_3_passive_pane_srt_ParamLimits

0x1f3a,	// (0x00021341) tabs_3_passive_pane_srt

0x509c,	// (0x000244a3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x509c,	// (0x000244a3) bg_passive_tab_pane_cp2_srt

0x4356,	// (0x0002375d) bg_passive_tab_pane_g1_cp2_srt

0x3df1,	// (0x000231f8) bg_passive_tab_pane_g2_cp2_srt

0x435f,	// (0x00023766) bg_passive_tab_pane_g3_cp2_srt

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp2_srt_ParamLimits

0x2f4e,	// (0x00022355) bg_active_tab_pane_cp2_srt

0x676c,	// (0x00025b73) tabs_3_active_pane_srt_g1

0xdbc1,	// (0x0002cfc8) tabs_3_active_pane_srt_t1_ParamLimits

0xdbc1,	// (0x0002cfc8) tabs_3_active_pane_srt_t1

0x4356,	// (0x0002375d) bg_active_tab_pane_g1_cp2_srt

0x3df1,	// (0x000231f8) bg_active_tab_pane_g2_cp2_srt

0x435f,	// (0x00023766) bg_active_tab_pane_g3_cp2_srt

0x1ed0,	// (0x000212d7) tabs_4_active_pane_srt_ParamLimits

0x1ed0,	// (0x000212d7) tabs_4_active_pane_srt

0x1ee2,	// (0x000212e9) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1ee2,	// (0x000212e9) tabs_4_passive_pane_cp2_srt

0x44b4,	// (0x000238bb) aid_size_cell_toolbar

0x63fb,	// (0x00025802) main_idle_act_pane_ParamLimits

0x46a7,	// (0x00023aae) popup_large_graphic_colour_window_ParamLimits

0xd299,	// (0x0002c6a0) popup_toolbar_window_ParamLimits

0xd299,	// (0x0002c6a0) popup_toolbar_window

0x65ce,	// (0x000259d5) list_single_graphic_2heading_pane_ParamLimits

0x65ce,	// (0x000259d5) list_single_graphic_2heading_pane

0x38e9,	// (0x00022cf0) aid_size_cell_apps_grid_lsc_pane

0x38fb,	// (0x00022d02) aid_size_cell_apps_grid_prt_pane

0x450a,	// (0x00023911) bg_wml_button_pane_cp1_ParamLimits

0x450a,	// (0x00023911) bg_wml_button_pane_cp1

0xd79b,	// (0x0002cba2) form_midp_field_text_pane_t1_ParamLimits

0x509c,	// (0x000244a3) input_focus_pane_cp050_ParamLimits

0x52e1,	// (0x000246e8) list_midp_form_text_pane_ParamLimits

0x5287,	// (0x0002468e) input_focus_pane_cp051_ParamLimits

0x529b,	// (0x000246a2) list_midp_choice_pane_ParamLimits

0xd736,	// (0x0002cb3d) list_single_2graphic_pane_cp3_ParamLimits

0xd736,	// (0x0002cb3d) list_single_2graphic_pane_cp3

0xd74a,	// (0x0002cb51) list_single_midp_graphic_pane_ParamLimits

0xd74a,	// (0x0002cb51) list_single_midp_graphic_pane

0x091a,	// (0x0001fd21) list_single_graphic_2heading_pane_g1_ParamLimits

0x091a,	// (0x0001fd21) list_single_graphic_2heading_pane_g1

0x0926,	// (0x0001fd2d) list_single_graphic_2heading_pane_g4_ParamLimits

0x0926,	// (0x0001fd2d) list_single_graphic_2heading_pane_g4

0x0932,	// (0x0001fd39) list_single_graphic_2heading_pane_g5_ParamLimits

0x0932,	// (0x0001fd39) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002ebcf) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002ebcf) list_single_graphic_2heading_pane_g

0x093e,	// (0x0001fd45) list_single_graphic_2heading_pane_t1_ParamLimits

0x093e,	// (0x0001fd45) list_single_graphic_2heading_pane_t1

0x0952,	// (0x0001fd59) list_single_graphic_2heading_pane_t2_ParamLimits

0x0952,	// (0x0001fd59) list_single_graphic_2heading_pane_t2

0x096e,	// (0x0001fd75) list_single_graphic_2heading_pane_t3_ParamLimits

0x096e,	// (0x0001fd75) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002ebd6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002ebd6) list_single_graphic_2heading_pane_t

0x4eea,	// (0x000242f1) bg_popup_sub_pane_cp2

0x4f14,	// (0x0002431b) grid_toobar_pane

0x1b78,	// (0x00020f7f) cell_toolbar_pane_ParamLimits

0x1b78,	// (0x00020f7f) cell_toolbar_pane

0x4f50,	// (0x00024357) cell_toolbar_pane_g1_ParamLimits

0x4f50,	// (0x00024357) cell_toolbar_pane_g1

0x4f64,	// (0x0002436b) cell_toolbar_pane_g2_ParamLimits

0x4f64,	// (0x0002436b) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002ebe4) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002ebe4) cell_toolbar_pane_g

0x4f86,	// (0x0002438d) grid_highlight_pane_cp2_ParamLimits

0x4f86,	// (0x0002438d) grid_highlight_pane_cp2

0x4fa0,	// (0x000243a7) toolbar_button_pane

0x4fac,	// (0x000243b3) toolbar_button_pane_g1

0x4fb4,	// (0x000243bb) toolbar_button_pane_g2

0x4fbc,	// (0x000243c3) toolbar_button_pane_g3

0x4fc4,	// (0x000243cb) toolbar_button_pane_g4

0x4fcc,	// (0x000243d3) toolbar_button_pane_g5

0x4fd4,	// (0x000243db) toolbar_button_pane_g6

0x4fdc,	// (0x000243e3) toolbar_button_pane_g7

0x4fe4,	// (0x000243eb) toolbar_button_pane_g8

0x4fec,	// (0x000243f3) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002ebe9) toolbar_button_pane_g

0x1bb0,	// (0x00020fb7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1bb0,	// (0x00020fb7) list_single_2graphic_pane_g1_cp3

0xc2c2,	// (0x0002b6c9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc2c2,	// (0x0002b6c9) list_single_2graphic_pane_g2_cp3

0x1bcd,	// (0x00020fd4) list_single_2graphic_pane_g3_cp3

0x4ccd,	// (0x000240d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4ccd,	// (0x000240d4) list_single_2graphic_pane_g4_cp3

0x1bd5,	// (0x00020fdc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1bd5,	// (0x00020fdc) list_single_2graphic_pane_t1_cp3

0x3c80,	// (0x00023087) list_single_midp_graphic_pane_g2_ParamLimits

0x3c80,	// (0x00023087) list_single_midp_graphic_pane_g2

0x44bc,	// (0x000238c3) aid_zoom_text_primary

0x08ee,	// (0x0001fcf5) aid_zoom_text_secondary

0x4413,	// (0x0002381a) status_small_pane_g7_ParamLimits

0x4413,	// (0x0002381a) status_small_pane_g7

0x4436,	// (0x0002383d) status_small_pane_t1_ParamLimits

0xbdc9,	// (0x0002b1d0) title_pane_g2

0x0003,

0xf56a,	// (0x0002e971) title_pane_g

0xc051,	// (0x0002b458) aid_size_cell_colour_1_pane_ParamLimits

0xc051,	// (0x0002b458) aid_size_cell_colour_1_pane

0xc065,	// (0x0002b46c) aid_size_cell_colour_2_pane_ParamLimits

0xc065,	// (0x0002b46c) aid_size_cell_colour_2_pane

0xc079,	// (0x0002b480) aid_size_cell_colour_3_pane_ParamLimits

0xc079,	// (0x0002b480) aid_size_cell_colour_3_pane

0xc08d,	// (0x0002b494) aid_size_cell_colour_4_pane_ParamLimits

0xc08d,	// (0x0002b494) aid_size_cell_colour_4_pane

0x15e5,	// (0x000209ec) title_pane_stacon_g1_ParamLimits

0x15e5,	// (0x000209ec) title_pane_stacon_g1

0x569f,	// (0x00024aa6) popup_note_wait_window_g3_ParamLimits

0x569f,	// (0x00024aa6) popup_note_wait_window_g3

0x5715,	// (0x00024b1c) popup_note_wait_window_t5_ParamLimits

0x5715,	// (0x00024b1c) popup_note_wait_window_t5

0x2bf3,	// (0x00021ffa) main_feb_china_hwr_fs_writing_pane

0xcccb,	// (0x0002c0d2) popup_feb_china_hwr_fs_window_ParamLimits

0xcccb,	// (0x0002c0d2) popup_feb_china_hwr_fs_window

0xc2d3,	// (0x0002b6da) aid_size_cell_hwr_fs_ParamLimits

0xc2d3,	// (0x0002b6da) aid_size_cell_hwr_fs

0x509c,	// (0x000244a3) bg_popup_sub_pane_cp3_ParamLimits

0x509c,	// (0x000244a3) bg_popup_sub_pane_cp3

0xc2e8,	// (0x0002b6ef) grid_hwr_fs_pane_ParamLimits

0xc2e8,	// (0x0002b6ef) grid_hwr_fs_pane

0x1c34,	// (0x0002103b) linegrid_hwr_fs_pane_ParamLimits

0x1c34,	// (0x0002103b) linegrid_hwr_fs_pane

0xc300,	// (0x0002b707) cell_hwr_fs_pane_ParamLimits

0xc300,	// (0x0002b707) cell_hwr_fs_pane

0x50a8,	// (0x000244af) linegrid_hwr_fs_pane_g1_ParamLimits

0x50a8,	// (0x000244af) linegrid_hwr_fs_pane_g1

0xd70a,	// (0x0002cb11) linegrid_hwr_fs_pane_g2_ParamLimits

0xd70a,	// (0x0002cb11) linegrid_hwr_fs_pane_g2

0x50c6,	// (0x000244cd) linegrid_hwr_fs_pane_g3_ParamLimits

0x50c6,	// (0x000244cd) linegrid_hwr_fs_pane_g3

0x1c66,	// (0x0002106d) linegrid_hwr_fs_pane_g4_ParamLimits

0x1c66,	// (0x0002106d) linegrid_hwr_fs_pane_g4

0x1c80,	// (0x00021087) linegrid_hwr_fs_pane_g5_ParamLimits

0x1c80,	// (0x00021087) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0002ec0f) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0002ec0f) linegrid_hwr_fs_pane_g

0x50d2,	// (0x000244d9) cell_hwr_fs_pane_g1_ParamLimits

0x50d2,	// (0x000244d9) cell_hwr_fs_pane_g1

0x4e21,	// (0x00024228) cell_hwr_fs_pane_g2_ParamLimits

0x4e21,	// (0x00024228) cell_hwr_fs_pane_g2

0xd71c,	// (0x0002cb23) cell_hwr_fs_pane_g3_ParamLimits

0xd71c,	// (0x0002cb23) cell_hwr_fs_pane_g3

0xd729,	// (0x0002cb30) cell_hwr_fs_pane_g4_ParamLimits

0xd729,	// (0x0002cb30) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x0002ec1a) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x0002ec1a) cell_hwr_fs_pane_g

0xc326,	// (0x0002b72d) cell_hwr_fs_pane_t1

0x2bf3,	// (0x00021ffa) grid_highlight_pane_cp6

0x2bf3,	// (0x00021ffa) main_idle_act2_pane

0x36a0,	// (0x00022aa7) aid_inside_area_popup_secondary

0xd819,	// (0x0002cc20) aid_inside_area_window_primary_ParamLimits

0xd819,	// (0x0002cc20) aid_inside_area_window_primary

0x68d3,	// (0x00025cda) ai2_news_ticker_pane

0x68db,	// (0x00025ce2) aid_size_cell_ai1_link_ParamLimits

0x68db,	// (0x00025ce2) aid_size_cell_ai1_link

0xdbed,	// (0x0002cff4) popup_ai2_data_window_ParamLimits

0xdbed,	// (0x0002cff4) popup_ai2_data_window

0x690b,	// (0x00025d12) popup_ai2_link_window_ParamLimits

0x690b,	// (0x00025d12) popup_ai2_link_window

0x509c,	// (0x000244a3) bg_popup_sub_pane_cp4_ParamLimits

0x509c,	// (0x000244a3) bg_popup_sub_pane_cp4

0x691f,	// (0x00025d26) grid_ai2_link_pane_ParamLimits

0x691f,	// (0x00025d26) grid_ai2_link_pane

0x6936,	// (0x00025d3d) popup_ai2_link_window_g1_ParamLimits

0x6936,	// (0x00025d3d) popup_ai2_link_window_g1

0x6942,	// (0x00025d49) popup_ai2_link_window_g2_ParamLimits

0x6942,	// (0x00025d49) popup_ai2_link_window_g2

0x0001,

0xf9df,	// (0x0002ede6) popup_ai2_link_window_g_ParamLimits

0xf9df,	// (0x0002ede6) popup_ai2_link_window_g

0x6951,	// (0x00025d58) ai2_mp_button_pane

0x6959,	// (0x00025d60) ai2_mp_volume_pane

0x5287,	// (0x0002468e) bg_popup_sub_pane_cp5_ParamLimits

0x5287,	// (0x0002468e) bg_popup_sub_pane_cp5

0x6961,	// (0x00025d68) heading_ai2_gene_pane_ParamLimits

0x6961,	// (0x00025d68) heading_ai2_gene_pane

0x696d,	// (0x00025d74) list_ai2_gene_pane_ParamLimits

0x696d,	// (0x00025d74) list_ai2_gene_pane

0x69b5,	// (0x00025dbc) cell_ai2_link_pane_ParamLimits

0x69b5,	// (0x00025dbc) cell_ai2_link_pane

0x69cb,	// (0x00025dd2) cell_ai2_link_pane_g1

0x2bf3,	// (0x00021ffa) grid_highlight_pane_cp7

0x1f88,	// (0x0002138f) ai2_mp_volume_pane_g1

0x6a9b,	// (0x00025ea2) ai2_mp_volume_pane_g2

0xdc17,	// (0x0002d01e) list_ai2_gene_pane_t1

0x6aa3,	// (0x00025eaa) ai2_mp_volume_pane_g3

0x0002,

0xf9f8,	// (0x0002edff) ai2_mp_volume_pane_g

0x1f90,	// (0x00021397) volume_small_pane_cp3

0x6aab,	// (0x00025eb2) aid_size_cell_ai2_button

0x6ab3,	// (0x00025eba) grid_ai2_button_pane

0x6abc,	// (0x00025ec3) cell_ai2_button_pane_ParamLimits

0x6abc,	// (0x00025ec3) cell_ai2_button_pane

0x2be9,	// (0x00021ff0) cell_ai2_button_pane_g1

0x2bf3,	// (0x00021ffa) grid_highlight_pane_cp8

0x6a5b,	// (0x00025e62) ai2_gene_pane_t1_ParamLimits

0x6a5b,	// (0x00025e62) ai2_gene_pane_t1

0xcc33,	// (0x0002c03a) aid_height_parent_landscape

0xd980,	// (0x0002cd87) aid_height_set_list

0x63fb,	// (0x00025802) aid_size_parent

0x66fa,	// (0x00025b01) aid_size_cell_graphic_pane_ParamLimits

0x697d,	// (0x00025d84) popup_ai2_data_window_g1_ParamLimits

0x697d,	// (0x00025d84) popup_ai2_data_window_g1

0x6989,	// (0x00025d90) ai2_news_ticker_pane_g1

0x6991,	// (0x00025d98) ai2_news_ticker_pane_g2

0x0001,

0xf9e4,	// (0x0002edeb) ai2_news_ticker_pane_g

0x6999,	// (0x00025da0) ai2_news_ticker_pane_t1

0x69a7,	// (0x00025dae) ai2_news_ticker_pane_t2

0x0001,

0xf9e9,	// (0x0002edf0) ai2_news_ticker_pane_t

0x69d4,	// (0x00025ddb) heading_ai2_gene_pane_g1

0x69dc,	// (0x00025de3) heading_ai2_gene_pane_t1_ParamLimits

0x69dc,	// (0x00025de3) heading_ai2_gene_pane_t1

0x69f1,	// (0x00025df8) list_highlight_pane_cp6

0xdc01,	// (0x0002d008) ai2_gene_pane_ParamLimits

0xdc01,	// (0x0002d008) ai2_gene_pane

0xdc25,	// (0x0002d02c) list_ai2_gene_pane_t2

0x0001,

0xf9ee,	// (0x0002edf5) list_ai2_gene_pane_t

0x6a2c,	// (0x00025e33) list_highlight_pane_cp8_ParamLimits

0x6a2c,	// (0x00025e33) list_highlight_pane_cp8

0x6a3d,	// (0x00025e44) ai2_gene_pane_g1_ParamLimits

0x6a3d,	// (0x00025e44) ai2_gene_pane_g1

0x6a4f,	// (0x00025e56) ai2_gene_pane_g2_ParamLimits

0x6a4f,	// (0x00025e56) ai2_gene_pane_g2

0x0001,

0xf9f3,	// (0x0002edfa) ai2_gene_pane_g_ParamLimits

0xf9f3,	// (0x0002edfa) ai2_gene_pane_g

0x34d5,	// (0x000228dc) scroll_pane_cp12

0xc281,	// (0x0002b688) control_pane_t3_ParamLimits

0xc281,	// (0x0002b688) control_pane_t3

0x4427,	// (0x0002382e) status_small_pane_g8_ParamLimits

0x4427,	// (0x0002382e) status_small_pane_g8

0xcd60,	// (0x0002c167) popup_find_window_ParamLimits

0xcfcf,	// (0x0002c3d6) popup_note_image_window_ParamLimits

0x091a,	// (0x0001fd21) list_double2_graphic_pane_vc_g1_ParamLimits

0x091a,	// (0x0001fd21) list_double2_graphic_pane_vc_g1

0x0986,	// (0x0001fd8d) list_double2_graphic_pane_vc_g2_ParamLimits

0x0986,	// (0x0001fd8d) list_double2_graphic_pane_vc_g2

0x0992,	// (0x0001fd99) list_double2_graphic_pane_vc_g3_ParamLimits

0x0992,	// (0x0001fd99) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002ebdd) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002ebdd) list_double2_graphic_pane_vc_g

0x099e,	// (0x0001fda5) list_double2_graphic_pane_vc_t1_ParamLimits

0x099e,	// (0x0001fda5) list_double2_graphic_pane_vc_t1

0x0926,	// (0x0001fd2d) list_single_heading_pane_vc_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_single_heading_pane_vc_g1

0x0932,	// (0x0001fd39) list_single_heading_pane_vc_g2_ParamLimits

0x0932,	// (0x0001fd39) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_single_heading_pane_vc_g

0x09b4,	// (0x0001fdbb) list_single_heading_pane_vc_t1_ParamLimits

0x09b4,	// (0x0001fdbb) list_single_heading_pane_vc_t1

0x09ca,	// (0x0001fdd1) list_single_heading_pane_vc_t2_ParamLimits

0x09ca,	// (0x0001fdd1) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0002ebfe) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0002ebfe) list_single_heading_pane_vc_t

0x4ff4,	// (0x000243fb) list_setting_number_pane_vc_g1_ParamLimits

0x4ff4,	// (0x000243fb) list_setting_number_pane_vc_g1

0x5000,	// (0x00024407) list_setting_number_pane_vc_g2_ParamLimits

0x5000,	// (0x00024407) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0002ec03) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0002ec03) list_setting_number_pane_vc_g

0x500c,	// (0x00024413) list_setting_number_pane_vc_t1_ParamLimits

0x500c,	// (0x00024413) list_setting_number_pane_vc_t1

0x5020,	// (0x00024427) list_setting_number_pane_vc_t2_ParamLimits

0x5020,	// (0x00024427) list_setting_number_pane_vc_t2

0x503c,	// (0x00024443) list_setting_number_pane_vc_t3_ParamLimits

0x503c,	// (0x00024443) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x0002ec08) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x0002ec08) list_setting_number_pane_vc_t

0x5062,	// (0x00024469) set_value_pane_vc_ParamLimits

0x5062,	// (0x00024469) set_value_pane_vc

0x65ce,	// (0x000259d5) list_double2_graphic_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double2_graphic_pane_vc

0x65ce,	// (0x000259d5) list_double2_large_graphic_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double2_large_graphic_pane_vc

0x65ce,	// (0x000259d5) list_double2_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double2_pane_vc

0x65ce,	// (0x000259d5) list_double_graphic_heading_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_graphic_heading_pane_vc

0x65ce,	// (0x000259d5) list_double_graphic_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_graphic_pane_vc

0x65ce,	// (0x000259d5) list_double_heading_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_heading_pane_vc

0x65ce,	// (0x000259d5) list_double_large_graphic_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_large_graphic_pane_vc

0x65ce,	// (0x000259d5) list_double_number_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_number_pane_vc

0x65ce,	// (0x000259d5) list_double_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_pane_vc

0x65ce,	// (0x000259d5) list_double_time_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_double_time_pane_vc

0x65ce,	// (0x000259d5) list_setting_number_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_setting_number_pane_vc

0x65ce,	// (0x000259d5) list_setting_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_setting_pane_vc

0x65ce,	// (0x000259d5) list_single_graphic_heading_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_single_graphic_heading_pane_vc

0x65ce,	// (0x000259d5) list_single_heading_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_single_heading_pane_vc

0x65ce,	// (0x000259d5) list_single_number_heading_pane_vc_ParamLimits

0x65ce,	// (0x000259d5) list_single_number_heading_pane_vc

0x0b43,	// (0x0001ff4a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0b43,	// (0x0001ff4a) list_double_graphic_heading_pane_vc_g1

0x0926,	// (0x0001fd2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0926,	// (0x0001fd2d) list_double_graphic_heading_pane_vc_g2

0x0932,	// (0x0001fd39) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0932,	// (0x0001fd39) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ff,	// (0x0002ee06) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ff,	// (0x0002ee06) list_double_graphic_heading_pane_vc_g

0x0b4f,	// (0x0001ff56) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b4f,	// (0x0001ff56) list_double_graphic_heading_pane_vc_t1

0x09b4,	// (0x0001fdbb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x09b4,	// (0x0001fdbb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa06,	// (0x0002ee0d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0002ee0d) list_double_graphic_heading_pane_vc_t

0x4ff4,	// (0x000243fb) list_setting_pane_vc_g1_ParamLimits

0x4ff4,	// (0x000243fb) list_setting_pane_vc_g1

0x5000,	// (0x00024407) list_setting_pane_vc_g2_ParamLimits

0x5000,	// (0x00024407) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x0002ec03) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x0002ec03) list_setting_pane_vc_g

0x6cf4,	// (0x000260fb) list_setting_pane_vc_t1_ParamLimits

0x6cf4,	// (0x000260fb) list_setting_pane_vc_t1

0x6d08,	// (0x0002610f) list_setting_pane_vc_t2_ParamLimits

0x6d08,	// (0x0002610f) list_setting_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ee50) list_setting_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ee50) list_setting_pane_vc_t

0x5062,	// (0x00024469) set_value_pane_cp_vc_ParamLimits

0x5062,	// (0x00024469) set_value_pane_cp_vc

0x0926,	// (0x0001fd2d) list_single_number_heading_pane_vc_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_single_number_heading_pane_vc_g1

0x0932,	// (0x0001fd39) list_single_number_heading_pane_vc_g2_ParamLimits

0x0932,	// (0x0001fd39) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_single_number_heading_pane_vc_g

0x09b4,	// (0x0001fdbb) list_single_number_heading_pane_vc_t1_ParamLimits

0x09b4,	// (0x0001fdbb) list_single_number_heading_pane_vc_t1

0x0b63,	// (0x0001ff6a) list_single_number_heading_pane_vc_t2_ParamLimits

0x0b63,	// (0x0001ff6a) list_single_number_heading_pane_vc_t2

0x0b77,	// (0x0001ff7e) list_single_number_heading_pane_vc_t3_ParamLimits

0x0b77,	// (0x0001ff7e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002ee55) list_single_number_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ee55) list_single_number_heading_pane_vc_t

0x091a,	// (0x0001fd21) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x091a,	// (0x0001fd21) list_single_graphic_heading_pane_vc_g1

0x0926,	// (0x0001fd2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0926,	// (0x0001fd2d) list_single_graphic_heading_pane_vc_g4

0x0932,	// (0x0001fd39) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0932,	// (0x0001fd39) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x0002ebcf) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x0002ebcf) list_single_graphic_heading_pane_vc_g

0x09b4,	// (0x0001fdbb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x09b4,	// (0x0001fdbb) list_single_graphic_heading_pane_vc_t1

0x0b89,	// (0x0001ff90) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0b89,	// (0x0001ff90) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa55,	// (0x0002ee5c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa55,	// (0x0002ee5c) list_single_graphic_heading_pane_vc_t

0x0926,	// (0x0001fd2d) list_double2_pane_vc_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_double2_pane_vc_g1

0x0932,	// (0x0001fd39) list_double2_pane_vc_g2_ParamLimits

0x0932,	// (0x0001fd39) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_double2_pane_vc_g

0x0b9d,	// (0x0001ffa4) list_double2_pane_vc_t1_ParamLimits

0x0b9d,	// (0x0001ffa4) list_double2_pane_vc_t1

0x0bb3,	// (0x0001ffba) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0bb3,	// (0x0001ffba) list_double2_large_graphic_pane_vc_g1

0x0926,	// (0x0001fd2d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0926,	// (0x0001fd2d) list_double2_large_graphic_pane_vc_g2

0x0932,	// (0x0001fd39) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0932,	// (0x0001fd39) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0002ea08) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0002ea08) list_double2_large_graphic_pane_vc_g

0x0bbf,	// (0x0001ffc6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0bbf,	// (0x0001ffc6) list_double2_large_graphic_pane_vc_t1

0x0bd5,	// (0x0001ffdc) list_double_time_pane_vc_g1_ParamLimits

0x0bd5,	// (0x0001ffdc) list_double_time_pane_vc_g1

0x0be1,	// (0x0001ffe8) list_double_time_pane_vc_g2_ParamLimits

0x0be1,	// (0x0001ffe8) list_double_time_pane_vc_g2

0x0001,

0xfa5a,	// (0x0002ee61) list_double_time_pane_vc_g_ParamLimits

0xfa5a,	// (0x0002ee61) list_double_time_pane_vc_g

0x0bed,	// (0x0001fff4) list_double_time_pane_vc_t1_ParamLimits

0x0bed,	// (0x0001fff4) list_double_time_pane_vc_t1

0x0c06,	// (0x0002000d) list_double_time_pane_vc_t2_ParamLimits

0x0c06,	// (0x0002000d) list_double_time_pane_vc_t2

0x0c41,	// (0x00020048) list_double_time_pane_vc_t3_ParamLimits

0x0c41,	// (0x00020048) list_double_time_pane_vc_t3

0x0c59,	// (0x00020060) list_double_time_pane_vc_t4_ParamLimits

0x0c59,	// (0x00020060) list_double_time_pane_vc_t4

0x0003,

0xfa5f,	// (0x0002ee66) list_double_time_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002ee66) list_double_time_pane_vc_t

0x0926,	// (0x0001fd2d) list_double_pane_vc_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_double_pane_vc_g1

0x0932,	// (0x0001fd39) list_double_pane_vc_g2_ParamLimits

0x0932,	// (0x0001fd39) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_double_pane_vc_g

0x0c6d,	// (0x00020074) list_double_pane_vc_t1_ParamLimits

0x0c6d,	// (0x00020074) list_double_pane_vc_t1

0x0c7f,	// (0x00020086) list_double_pane_vc_t2_ParamLimits

0x0c7f,	// (0x00020086) list_double_pane_vc_t2

0x0001,

0xfa68,	// (0x0002ee6f) list_double_pane_vc_t_ParamLimits

0xfa68,	// (0x0002ee6f) list_double_pane_vc_t

0x0926,	// (0x0001fd2d) list_double_number_pane_vc_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_double_number_pane_vc_g1

0x0932,	// (0x0001fd39) list_double_number_pane_vc_g2_ParamLimits

0x0932,	// (0x0001fd39) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_double_number_pane_vc_g

0x0c97,	// (0x0002009e) list_double_number_pane_vc_t1_ParamLimits

0x0c97,	// (0x0002009e) list_double_number_pane_vc_t1

0x0cab,	// (0x000200b2) list_double_number_pane_vc_t2_ParamLimits

0x0cab,	// (0x000200b2) list_double_number_pane_vc_t2

0x0c7f,	// (0x00020086) list_double_number_pane_vc_t3_ParamLimits

0x0c7f,	// (0x00020086) list_double_number_pane_vc_t3

0x0002,

0xfa6d,	// (0x0002ee74) list_double_number_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002ee74) list_double_number_pane_vc_t

0x0cbd,	// (0x000200c4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0cbd,	// (0x000200c4) list_double_large_graphic_pane_vc_g1

0x0cc9,	// (0x000200d0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0cc9,	// (0x000200d0) list_double_large_graphic_pane_vc_g2

0x0932,	// (0x0001fd39) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0932,	// (0x0001fd39) list_double_large_graphic_pane_vc_g3

0x0cd8,	// (0x000200df) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0cd8,	// (0x000200df) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa74,	// (0x0002ee7b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0002ee7b) list_double_large_graphic_pane_vc_g

0x0ce4,	// (0x000200eb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0ce4,	// (0x000200eb) list_double_large_graphic_pane_vc_t1

0x0cf6,	// (0x000200fd) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0cf6,	// (0x000200fd) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x0002ee84) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002ee84) list_double_large_graphic_pane_vc_t

0x0926,	// (0x0001fd2d) list_double_heading_pane_vc_g1_ParamLimits

0x0926,	// (0x0001fd2d) list_double_heading_pane_vc_g1

0x0932,	// (0x0001fd39) list_double_heading_pane_vc_g2_ParamLimits

0x0932,	// (0x0001fd39) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002e9eb) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002e9eb) list_double_heading_pane_vc_g

0x0d0f,	// (0x00020116) list_double_heading_pane_vc_t1_ParamLimits

0x0d0f,	// (0x00020116) list_double_heading_pane_vc_t1

0x09b4,	// (0x0001fdbb) list_double_heading_pane_vc_t2_ParamLimits

0x09b4,	// (0x0001fdbb) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0002ee89) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0002ee89) list_double_heading_pane_vc_t

0x0d23,	// (0x0002012a) list_double_graphic_pane_vc_g1_ParamLimits

0x0d23,	// (0x0002012a) list_double_graphic_pane_vc_g1

0x0d33,	// (0x0002013a) list_double_graphic_pane_vc_g2_ParamLimits

0x0d33,	// (0x0002013a) list_double_graphic_pane_vc_g2

0x0d42,	// (0x00020149) list_double_graphic_pane_vc_g3_ParamLimits

0x0d42,	// (0x00020149) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x0002ee8e) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x0002ee8e) list_double_graphic_pane_vc_g

0x0d4e,	// (0x00020155) list_double_graphic_pane_vc_t1_ParamLimits

0x0d4e,	// (0x00020155) list_double_graphic_pane_vc_t1

0x0c7f,	// (0x00020086) list_double_graphic_pane_vc_t2_ParamLimits

0x0c7f,	// (0x00020086) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x0002ee95) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002ee95) list_double_graphic_pane_vc_t

0x114b,	// (0x00020552) aid_size_cell_fastswap

0xbc17,	// (0x0002b01e) aid_size_cell_touch_ParamLimits

0xbc17,	// (0x0002b01e) aid_size_cell_touch

0x13ae,	// (0x000207b5) popup_fast_swap_wide_window_ParamLimits

0x13ae,	// (0x000207b5) popup_fast_swap_wide_window

0xbd62,	// (0x0002b169) touch_pane_ParamLimits

0xbd62,	// (0x0002b169) touch_pane

0x352b,	// (0x00022932) button_value_adjust_pane_cp2

0x0612,	// (0x0001fa19) button_value_adjust_pane_cp4

0x0632,	// (0x0001fa39) form_field_data_pane_cp2

0xb7c8,	// (0x0002abcf) form_field_data_wide_pane_cp2

0x39b8,	// (0x00022dbf) bg_scroll_pane_ParamLimits

0x1748,	// (0x00020b4f) scroll_handle_pane_ParamLimits

0x175c,	// (0x00020b63) scroll_sc2_down_pane_ParamLimits

0x175c,	// (0x00020b63) scroll_sc2_down_pane

0x39e9,	// (0x00022df0) scroll_sc2_up_pane_ParamLimits

0x39e9,	// (0x00022df0) scroll_sc2_up_pane

0xdd50,	// (0x0002d157) grid_wheel_folder_pane_g1_ParamLimits

0xdd50,	// (0x0002d157) grid_wheel_folder_pane_g1

0x1921,	// (0x00020d28) clock_nsta_pane_cp2_ParamLimits

0x1921,	// (0x00020d28) clock_nsta_pane_cp2

0xcb48,	// (0x0002bf4f) listscroll_midp_pane_ParamLimits

0xcb59,	// (0x0002bf60) midp_canvas_pane

0x44a2,	// (0x000238a9) nsta_clock_indic_pane

0x44f0,	// (0x000238f7) listscroll_form_pane_vc

0x44f8,	// (0x000238ff) listscroll_set_pane_vc_ParamLimits

0x44f8,	// (0x000238ff) listscroll_set_pane_vc

0xd41e,	// (0x0002c825) clock_nsta_pane

0xd448,	// (0x0002c84f) indicator_nsta_pane

0x4eea,	// (0x000242f1) bg_popup_sub_pane_cp2_ParamLimits

0x4efe,	// (0x00024305) find_pane_cp2_ParamLimits

0x4efe,	// (0x00024305) find_pane_cp2

0x4f14,	// (0x0002431b) grid_toobar_pane_ParamLimits

0x5070,	// (0x00024477) list_form_gen_pane_vc_ParamLimits

0x5070,	// (0x00024477) list_form_gen_pane_vc

0x5086,	// (0x0002448d) scroll_pane_cp8_vc_ParamLimits

0x5086,	// (0x0002448d) scroll_pane_cp8_vc

0x5102,	// (0x00024509) data_form_wide_pane_vc_ParamLimits

0x5102,	// (0x00024509) data_form_wide_pane_vc

0x510e,	// (0x00024515) form_field_data_wide_pane_vc_g1

0x5116,	// (0x0002451d) form_field_data_wide_pane_vc_t1_ParamLimits

0x5116,	// (0x0002451d) form_field_data_wide_pane_vc_t1

0x353f,	// (0x00022946) input_focus_pane_cp6_vc_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_cp6_vc

0xd7bd,	// (0x0002cbc4) list_midp_pane_ParamLimits

0x6760,	// (0x00025b67) scroll_pane_cp16_ParamLimits

0x6760,	// (0x00025b67) scroll_pane_cp16

0x5474,	// (0x0002487b) button_value_adjust_pane_ParamLimits

0x5474,	// (0x0002487b) button_value_adjust_pane

0xd991,	// (0x0002cd98) button_value_adjust_pane_cp6_ParamLimits

0xd991,	// (0x0002cd98) button_value_adjust_pane_cp6

0xdaab,	// (0x0002ceb2) settings_code_pane_cp_ParamLimits

0xdaab,	// (0x0002ceb2) settings_code_pane_cp

0x2be9,	// (0x00021ff0) cell_touch_pane_g1

0x2be9,	// (0x00021ff0) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002eb26) cell_touch_pane_g

0xdc33,	// (0x0002d03a) cell_touch_pane_cp_ParamLimits

0xdc33,	// (0x0002d03a) cell_touch_pane_cp

0xdc4f,	// (0x0002d056) cell_touch_pane_ParamLimits

0xdc4f,	// (0x0002d056) cell_touch_pane

0x2be9,	// (0x00021ff0) scroll_sc2_down_pane_g1

0x2be9,	// (0x00021ff0) scroll_sc2_up_pane_g1

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp4_vc

0x6af0,	// (0x00025ef7) list_set_graphic_pane_vc_g1_ParamLimits

0x6af0,	// (0x00025ef7) list_set_graphic_pane_vc_g1

0x6afc,	// (0x00025f03) list_set_graphic_pane_vc_g2_ParamLimits

0x6afc,	// (0x00025f03) list_set_graphic_pane_vc_g2

0x0001,

0xfa0b,	// (0x0002ee12) list_set_graphic_pane_vc_g_ParamLimits

0xfa0b,	// (0x0002ee12) list_set_graphic_pane_vc_g

0x6b08,	// (0x00025f0f) text_primary_small_cp13_vc_ParamLimits

0x6b08,	// (0x00025f0f) text_primary_small_cp13_vc

0x6b20,	// (0x00025f27) list_set_graphic_pane_vc_ParamLimits

0x6b20,	// (0x00025f27) list_set_graphic_pane_vc

0x2bf3,	// (0x00021ffa) input_focus_pane_cp2_vc

0x2be9,	// (0x00021ff0) setting_code_pane_vc_g1

0x6b34,	// (0x00025f3b) setting_code_pane_vc_t1

0x6b42,	// (0x00025f49) set_text_pane_vc_t1_ParamLimits

0x6b42,	// (0x00025f49) set_text_pane_vc_t1

0x2bf3,	// (0x00021ffa) input_focus_pane_cp1_vc

0x6b5d,	// (0x00025f64) list_set_text_pane_vc

0x2be9,	// (0x00021ff0) setting_text_pane_vc_g1

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp2_vc

0x6b67,	// (0x00025f6e) setting_slider_graphic_pane_vc_g1

0x6b6f,	// (0x00025f76) setting_slider_graphic_pane_vc_t1

0x6b7d,	// (0x00025f84) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa10,	// (0x0002ee17) setting_slider_graphic_pane_vc_t

0x6b8b,	// (0x00025f92) slider_set_pane_cp_vc

0x6b93,	// (0x00025f9a) slider_set_pane_vc_g1

0x6b9c,	// (0x00025fa3) slider_set_pane_vc_g2

0x0006,

0xfa15,	// (0x0002ee1c) slider_set_pane_vc_g

0x35a6,	// (0x000229ad) set_opt_bg_pane_g1_copy1

0x35ae,	// (0x000229b5) set_opt_bg_pane_g2_copy1

0x6bc8,	// (0x00025fcf) set_opt_bg_pane_g3_copy1

0x35be,	// (0x000229c5) set_opt_bg_pane_g4_copy1

0x35c6,	// (0x000229cd) set_opt_bg_pane_g5_copy1

0x35ce,	// (0x000229d5) set_opt_bg_pane_g6_copy1

0x6bd2,	// (0x00025fd9) set_opt_bg_pane_g7_copy1

0x6bda,	// (0x00025fe1) set_opt_bg_pane_g8_copy1

0x6be4,	// (0x00025feb) set_opt_bg_pane_g9_copy1

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp_vc

0x6bee,	// (0x00025ff5) setting_slider_pane_vc_t1

0x6b6f,	// (0x00025f76) setting_slider_pane_vc_t2

0x6b7d,	// (0x00025f84) setting_slider_pane_vc_t3

0x0002,

0xfa24,	// (0x0002ee2b) setting_slider_pane_vc_t

0x6b8b,	// (0x00025f92) slider_set_pane_vc

0x1ca4,	// (0x000210ab) volume_set_pane_vc_g1

0x1cad,	// (0x000210b4) volume_set_pane_vc_g2

0x1cb6,	// (0x000210bd) volume_set_pane_vc_g3

0x1cbf,	// (0x000210c6) volume_set_pane_vc_g4

0x1cc8,	// (0x000210cf) volume_set_pane_vc_g5

0x1cd1,	// (0x000210d8) volume_set_pane_vc_g6

0x1cda,	// (0x000210e1) volume_set_pane_vc_g7

0x1ce3,	// (0x000210ea) volume_set_pane_vc_g8

0x1cec,	// (0x000210f3) volume_set_pane_vc_g9

0x1cf5,	// (0x000210fc) volume_set_pane_vc_g10

0x0009,

0xfa2b,	// (0x0002ee32) volume_set_pane_vc_g

0x6bfd,	// (0x00026004) volume_set_pane_vc

0x6c05,	// (0x0002600c) button_value_adjust_pane_cp1_vc

0x6c0f,	// (0x00026016) list_highlight_pane_cp2_vc

0x6c18,	// (0x0002601f) list_set_pane_vc_ParamLimits

0x6c18,	// (0x0002601f) list_set_pane_vc

0x6c82,	// (0x00026089) main_pane_set_vc_t1_ParamLimits

0x6c82,	// (0x00026089) main_pane_set_vc_t1

0x6c97,	// (0x0002609e) main_pane_set_vc_t2_ParamLimits

0x6c97,	// (0x0002609e) main_pane_set_vc_t2

0x6ca9,	// (0x000260b0) main_pane_set_vc_t3_ParamLimits

0x6ca9,	// (0x000260b0) main_pane_set_vc_t3

0x6cbd,	// (0x000260c4) main_pane_set_vc_t4_ParamLimits

0x6cbd,	// (0x000260c4) main_pane_set_vc_t4

0x0003,

0xfa40,	// (0x0002ee47) main_pane_set_vc_t_ParamLimits

0xfa40,	// (0x0002ee47) main_pane_set_vc_t

0x6cd1,	// (0x000260d8) setting_code_pane_vc_ParamLimits

0x6cd1,	// (0x000260d8) setting_code_pane_vc

0x6ce2,	// (0x000260e9) setting_slider_graphic_pane_vc

0x6ce2,	// (0x000260e9) setting_slider_pane_vc

0x6ce2,	// (0x000260e9) setting_text_pane_vc

0x6ce2,	// (0x000260e9) setting_volume_pane_vc

0x6cec,	// (0x000260f3) scroll_pane_cp121_vc

0x3519,	// (0x00022920) set_content_pane_vc

0x6d2a,	// (0x00026131) button_value_adjust_pane_g1

0x6d33,	// (0x0002613a) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x0002ee9a) button_value_adjust_pane_g

0x6d3c,	// (0x00026143) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d3c,	// (0x00026143) form_field_slider_wide_pane_vc_t1

0x6d50,	// (0x00026157) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6d50,	// (0x00026157) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x0002ee9f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x0002ee9f) form_field_slider_wide_pane_vc_t

0x2f4e,	// (0x00022355) input_focus_pane_cp10_vc_ParamLimits

0x2f4e,	// (0x00022355) input_focus_pane_cp10_vc

0x6d62,	// (0x00026169) slider_cont_pane_cp1_vc_ParamLimits

0x6d62,	// (0x00026169) slider_cont_pane_cp1_vc

0x6b93,	// (0x00025f9a) slider_form_pane_g1_cp2

0x6b9c,	// (0x00025fa3) slider_form_pane_g2_cp2

0x6d7b,	// (0x00026182) form_field_slider_pane_vc_t3

0x6d89,	// (0x00026190) form_field_slider_pane_vc_t4

0x6d97,	// (0x0002619e) slider_form_pane_vc_ParamLimits

0x6d97,	// (0x0002619e) slider_form_pane_vc

0x6da4,	// (0x000261ab) form_field_slider_pane_vc_t1_ParamLimits

0x6da4,	// (0x000261ab) form_field_slider_pane_vc_t1

0x6d50,	// (0x00026157) form_field_slider_pane_vc_t2_ParamLimits

0x6d50,	// (0x00026157) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x0002eeaf) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x0002eeaf) form_field_slider_pane_vc_t

0x2f4e,	// (0x00022355) input_focus_pane_cp9_vc_ParamLimits

0x2f4e,	// (0x00022355) input_focus_pane_cp9_vc

0x6dc0,	// (0x000261c7) slider_cont_pane_vc_ParamLimits

0x6dc0,	// (0x000261c7) slider_cont_pane_vc

0x6dd2,	// (0x000261d9) list_form_graphic_pane_cp_vc_ParamLimits

0x6dd2,	// (0x000261d9) list_form_graphic_pane_cp_vc

0x510e,	// (0x00024515) form_field_popup_wide_pane_vc_g1

0x6de7,	// (0x000261ee) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6de7,	// (0x000261ee) form_field_popup_wide_pane_vc_t1

0x353f,	// (0x00022946) input_focus_pane_cp8_vc_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_cp8_vc

0x6dfe,	// (0x00026205) list_form_wide_pane_vc_ParamLimits

0x6dfe,	// (0x00026205) list_form_wide_pane_vc

0x6e0a,	// (0x00026211) list_form_graphic_pane_vc_g1

0x6e12,	// (0x00026219) list_form_graphic_pane_vc_t1_ParamLimits

0x6e12,	// (0x00026219) list_form_graphic_pane_vc_t1

0x2cd3,	// (0x000220da) list_highlight_pane_cp5_vc_ParamLimits

0x2cd3,	// (0x000220da) list_highlight_pane_cp5_vc

0x6e2e,	// (0x00026235) list_form_graphic_pane_vc_ParamLimits

0x6e2e,	// (0x00026235) list_form_graphic_pane_vc

0x510e,	// (0x00024515) form_field_popup_pane_vc_g1

0x6e44,	// (0x0002624b) form_field_popup_pane_vc_t1_ParamLimits

0x6e44,	// (0x0002624b) form_field_popup_pane_vc_t1

0x353f,	// (0x00022946) input_focus_pane_cp7_vc_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_cp7_vc

0x6e5b,	// (0x00026262) list_form_pane_vc_ParamLimits

0x6e5b,	// (0x00026262) list_form_pane_vc

0x6e67,	// (0x0002626e) data_form_pane_vc_t1_ParamLimits

0x6e67,	// (0x0002626e) data_form_pane_vc_t1

0x35a6,	// (0x000229ad) input_focus_pane_vc_g1

0x35ae,	// (0x000229b5) input_focus_pane_vc_g2

0x35b6,	// (0x000229bd) input_focus_pane_vc_g3

0x35be,	// (0x000229c5) input_focus_pane_vc_g4

0x35c6,	// (0x000229cd) input_focus_pane_vc_g5

0x35ce,	// (0x000229d5) input_focus_pane_vc_g6

0x35d6,	// (0x000229dd) input_focus_pane_vc_g7

0x35de,	// (0x000229e5) input_focus_pane_vc_g8

0x35e6,	// (0x000229ed) input_focus_pane_vc_g9

0x2be9,	// (0x00021ff0) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0002eaaf) input_focus_pane_vc_g

0x5102,	// (0x00024509) data_form_pane_vc_ParamLimits

0x5102,	// (0x00024509) data_form_pane_vc

0x510e,	// (0x00024515) form_field_data_pane_vc_g1

0x6e82,	// (0x00026289) form_field_data_pane_vc_t1_ParamLimits

0x6e82,	// (0x00026289) form_field_data_pane_vc_t1

0x353f,	// (0x00022946) input_focus_pane_vc_ParamLimits

0x353f,	// (0x00022946) input_focus_pane_vc

0x6e9c,	// (0x000262a3) button_value_adjust_pane_cp3_vc

0x6ea4,	// (0x000262ab) button_value_adjust_pane_cp5_vc

0x6eac,	// (0x000262b3) form_field_data_pane_vc_ParamLimits

0x6eac,	// (0x000262b3) form_field_data_pane_vc

0x6ec3,	// (0x000262ca) form_field_data_pane_vc_cp2

0x6ecb,	// (0x000262d2) form_field_data_wide_pane_vc_ParamLimits

0x6ecb,	// (0x000262d2) form_field_data_wide_pane_vc

0x6ee1,	// (0x000262e8) form_field_data_wide_pane_vc_cp2

0x6ee9,	// (0x000262f0) form_field_popup_pane_vc_ParamLimits

0x6ee9,	// (0x000262f0) form_field_popup_pane_vc

0x6f00,	// (0x00026307) form_field_popup_wide_pane_vc_ParamLimits

0x6f00,	// (0x00026307) form_field_popup_wide_pane_vc

0x6f16,	// (0x0002631d) form_field_slider_pane_vc_ParamLimits

0x6f16,	// (0x0002631d) form_field_slider_pane_vc

0x6f29,	// (0x00026330) form_field_slider_wide_pane_vc_ParamLimits

0x6f29,	// (0x00026330) form_field_slider_wide_pane_vc

0xdc6d,	// (0x0002d074) grid_touch_1_pane_ParamLimits

0xdc6d,	// (0x0002d074) grid_touch_1_pane

0xdc81,	// (0x0002d088) grid_touch_2_pane_ParamLimits

0xdc81,	// (0x0002d088) grid_touch_2_pane

0x6ffe,	// (0x00026405) touch_pane_g1_ParamLimits

0x6ffe,	// (0x00026405) touch_pane_g1

0x6f60,	// (0x00026367) cell_app_pane_cp_wide_ParamLimits

0x6f60,	// (0x00026367) cell_app_pane_cp_wide

0x6f71,	// (0x00026378) grid_popup_fast_wide_pane_ParamLimits

0x6f71,	// (0x00026378) grid_popup_fast_wide_pane

0x6f85,	// (0x0002638c) scroll_pane_cp19_ParamLimits

0x6f85,	// (0x0002638c) scroll_pane_cp19

0x2bf3,	// (0x00021ffa) bg_popup_window_pane_cp20

0x6f99,	// (0x000263a0) listscroll_popup_fast_wide_pane

0x370c,	// (0x00022b13) grid_indicator_nsta_pane

0x6fa1,	// (0x000263a8) clock_nsta_pane_g1

0x6faa,	// (0x000263b1) clock_nsta_pane_t1

0xdcab,	// (0x0002d0b2) cell_indicator_nsta_pane_ParamLimits

0xdcab,	// (0x0002d0b2) cell_indicator_nsta_pane

0x6ffe,	// (0x00026405) cell_indicator_nsta_pane_g1

0xdcc4,	// (0x0002d0cb) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x0002eeb9) cell_indicator_nsta_pane_g

0x7022,	// (0x00026429) clock_nsta_pane_cp

0x702a,	// (0x00026431) indicator_nsta_pane_cp

0x7033,	// (0x0002643a) nsta_clock_indic_pane_g1

0x2d9c,	// (0x000221a3) grid_indicator_pane

0x3ade,	// (0x00022ee5) scroll_pane_cp29

0x1870,	// (0x00020c77) indicator_nsta_pane_cp2_ParamLimits

0x1870,	// (0x00020c77) indicator_nsta_pane_cp2

0x2cd3,	// (0x000220da) main_apps_wheel_pane

0x52fb,	// (0x00024702) form_midp_field_text_pane_ParamLimits

0x5446,	// (0x0002484d) scroll_bar_cp050_ParamLimits

0x709c,	// (0x000264a3) cell_indicator_pane_ParamLimits

0x709c,	// (0x000264a3) cell_indicator_pane

0x70b3,	// (0x000264ba) cell_indicator_pane_g1

0xdcda,	// (0x0002d0e1) grid_wheel_folder_pane_ParamLimits

0xdcda,	// (0x0002d0e1) grid_wheel_folder_pane

0xdce8,	// (0x0002d0ef) list_wheel_apps_pane_ParamLimits

0xdce8,	// (0x0002d0ef) list_wheel_apps_pane

0xdcf6,	// (0x0002d0fd) main_apps_wheel_pane_g1_ParamLimits

0xdcf6,	// (0x0002d0fd) main_apps_wheel_pane_g1

0xdd02,	// (0x0002d109) main_apps_wheel_pane_g2_ParamLimits

0xdd02,	// (0x0002d109) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x0002eed5) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x0002eed5) main_apps_wheel_pane_g

0xdd10,	// (0x0002d117) main_apps_wheel_pane_t1_ParamLimits

0xdd10,	// (0x0002d117) main_apps_wheel_pane_t1

0xdd24,	// (0x0002d12b) list_wheel_apps_pane_g1

0xdd2c,	// (0x0002d133) list_wheel_apps_pane_g2

0xdd34,	// (0x0002d13b) list_wheel_apps_pane_g3

0xdd3c,	// (0x0002d143) list_wheel_apps_pane_g4

0xdd46,	// (0x0002d14d) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x0002eeda) list_wheel_apps_pane_g

0x4024,	// (0x0002342b) navi_icon_text_pane

0xd2f1,	// (0x0002c6f8) aid_fill_nsta

0xdd5d,	// (0x0002d164) navi_icon_text_pane_g1

0xdd69,	// (0x0002d170) navi_icon_text_pane_t1

0xcb30,	// (0x0002bf37) list_set_graphic_pane_t1_ParamLimits

0xcb30,	// (0x0002bf37) list_set_graphic_pane_t1

0x5b95,	// (0x00024f9c) popup_midp_note_alarm_window_t6_ParamLimits

0x5b95,	// (0x00024f9c) popup_midp_note_alarm_window_t6

0x5ba7,	// (0x00024fae) popup_midp_note_alarm_window_t7_ParamLimits

0x5ba7,	// (0x00024fae) popup_midp_note_alarm_window_t7

0x5bb9,	// (0x00024fc0) popup_midp_note_alarm_window_t8_ParamLimits

0x5bb9,	// (0x00024fc0) popup_midp_note_alarm_window_t8

0x5bcb,	// (0x00024fd2) popup_midp_note_alarm_window_t9_ParamLimits

0x5bcb,	// (0x00024fd2) popup_midp_note_alarm_window_t9

0x5bdd,	// (0x00024fe4) popup_midp_note_alarm_window_t10_ParamLimits

0x5bdd,	// (0x00024fe4) popup_midp_note_alarm_window_t10

0x5bef,	// (0x00024ff6) popup_midp_note_alarm_window_t11_ParamLimits

0x5bef,	// (0x00024ff6) popup_midp_note_alarm_window_t11

0x5c01,	// (0x00025008) scroll_pane_cp17_ParamLimits

0x5c01,	// (0x00025008) scroll_pane_cp17

0x1ca4,	// (0x000210ab) volume_small_pane_cp_g1

0x1f99,	// (0x000213a0) volume_small_pane_cp_g2

0x1fa2,	// (0x000213a9) volume_small_pane_cp_g3

0x1fab,	// (0x000213b2) volume_small_pane_cp_g4

0x1fb4,	// (0x000213bb) volume_small_pane_cp_g5

0x1fbd,	// (0x000213c4) volume_small_pane_cp_g6

0x1fc6,	// (0x000213cd) volume_small_pane_cp_g7

0x1fcf,	// (0x000213d6) volume_small_pane_cp_g8

0x1fd8,	// (0x000213df) volume_small_pane_cp_g9

0x1fe1,	// (0x000213e8) volume_small_pane_cp_g10

0x427f,	// (0x00023686) midp_ticker_pane_g1_ParamLimits

0x428b,	// (0x00023692) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002eb77) midp_ticker_pane_g_ParamLimits

0xcbf0,	// (0x0002bff7) midp_ticker_pane_t1_ParamLimits

0xd311,	// (0x0002c718) aid_fill_nsta_2

0x5432,	// (0x00024839) list_form2_midp_pane

0x6582,	// (0x00025989) midp_editing_number_pane_ParamLimits

0x6591,	// (0x00025998) midp_ticker_pane_ParamLimits

0x719a,	// (0x000265a1) form2_midp_field_pane

0x71be,	// (0x000265c5) scroll_pane_cp51

0x71de,	// (0x000265e5) form2_midp_button_pane_ParamLimits

0x71de,	// (0x000265e5) form2_midp_button_pane

0x71f0,	// (0x000265f7) form2_midp_content_pane_ParamLimits

0x71f0,	// (0x000265f7) form2_midp_content_pane

0x720a,	// (0x00026611) form2_midp_field_choice_group_pane

0x7212,	// (0x00026619) form2_midp_field_pane_g1

0x721a,	// (0x00026621) form2_midp_field_pane_g2

0x7222,	// (0x00026629) form2_midp_field_pane_g3

0x722a,	// (0x00026631) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x0002eeff) form2_midp_field_pane_g

0x7232,	// (0x00026639) form2_midp_gauge_slider_pane

0x723a,	// (0x00026641) form2_midp_gauge_wait_pane

0x7242,	// (0x00026649) form2_midp_image_pane_ParamLimits

0x7242,	// (0x00026649) form2_midp_image_pane

0x725d,	// (0x00026664) form2_midp_label_pane_ParamLimits

0x725d,	// (0x00026664) form2_midp_label_pane

0xdd97,	// (0x0002d19e) form2_midp_label_pane_cp_ParamLimits

0xdd97,	// (0x0002d19e) form2_midp_label_pane_cp

0x7297,	// (0x0002669e) form2_midp_string_pane_ParamLimits

0x7297,	// (0x0002669e) form2_midp_string_pane

0x0d60,	// (0x00020167) form2_midp_text_pane_ParamLimits

0x0d60,	// (0x00020167) form2_midp_text_pane

0x72a9,	// (0x000266b0) form2_midp_time_pane

0x72b9,	// (0x000266c0) input_focus_pane_cp51_ParamLimits

0x72b9,	// (0x000266c0) input_focus_pane_cp51

0x72d1,	// (0x000266d8) form2_midp_label_pane_t1_ParamLimits

0x72d1,	// (0x000266d8) form2_midp_label_pane_t1

0x0d7b,	// (0x00020182) form2_mdip_text_pane_t1_ParamLimits

0x0d7b,	// (0x00020182) form2_mdip_text_pane_t1

0x0d99,	// (0x000201a0) form2_midp_time_pane_t1

0x731a,	// (0x00026721) form2_midp_gauge_slider_pane_t1

0xddb8,	// (0x0002d1bf) form2_midp_gauge_slider_pane_t2

0xddca,	// (0x0002d1d1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x0002ef08) form2_midp_gauge_slider_pane_t

0x7350,	// (0x00026757) form2_midp_slider_pane

0x735c,	// (0x00026763) form2_midp_gauge_wait_pane_t1

0x736a,	// (0x00026771) form2_midp_wait_pane_ParamLimits

0x736a,	// (0x00026771) form2_midp_wait_pane

0xdddc,	// (0x0002d1e3) list_single_2graphic_pane_cp4_ParamLimits

0xdddc,	// (0x0002d1e3) list_single_2graphic_pane_cp4

0xd74a,	// (0x0002cb51) list_single_midp_graphic_pane_cp_ParamLimits

0xd74a,	// (0x0002cb51) list_single_midp_graphic_pane_cp

0x2bf3,	// (0x00021ffa) list_highlight_pane_cp20

0x73c4,	// (0x000267cb) list_single_2graphic_pane_g1_cp4

0x73cc,	// (0x000267d3) list_single_2graphic_pane_g2_cp4

0x73d4,	// (0x000267db) list_single_2graphic_pane_t1_cp4

0x2cd3,	// (0x000220da) list_highlight_pane_cp21

0x73e3,	// (0x000267ea) list_single_midp_graphic_pane_g4_cp

0x73f2,	// (0x000267f9) list_single_midp_graphic_pane_t1_cp

0xddf1,	// (0x0002d1f8) form2_mdip_string_pane_t1_ParamLimits

0xddf1,	// (0x0002d1f8) form2_mdip_string_pane_t1

0x2bf3,	// (0x00021ffa) bg_wml_button_pane_cp2

0x2be9,	// (0x00021ff0) form2_midp_image_pane_g1

0x03e5,	// (0x0001f7ec) list_double_large_graphic_pane_g5_ParamLimits

0x03e5,	// (0x0001f7ec) list_double_large_graphic_pane_g5

0xcb48,	// (0x0002bf4f) midp_form_pane_ParamLimits

0x2cd3,	// (0x000220da) main_apps_wheel_pane_ParamLimits

0xd04d,	// (0x0002c454) popup_preview_window_ParamLimits

0xd04d,	// (0x0002c454) popup_preview_window

0x4a66,	// (0x00023e6d) popup_touch_info_window_ParamLimits

0x4a66,	// (0x00023e6d) popup_touch_info_window

0x4a84,	// (0x00023e8b) popup_touch_menu_window_ParamLimits

0x4a84,	// (0x00023e8b) popup_touch_menu_window

0x2bdf,	// (0x00021fe6) bg_popup_sub_pane_cp6

0x7500,	// (0x00026907) list_touch_menu_pane

0x7508,	// (0x0002690f) list_single_touch_menu_pane_ParamLimits

0x7508,	// (0x0002690f) list_single_touch_menu_pane

0x751f,	// (0x00026926) list_single_touch_menu_pane_t1

0x2cd3,	// (0x000220da) bg_popup_sub_pane_cp7_ParamLimits

0x2cd3,	// (0x000220da) bg_popup_sub_pane_cp7

0x752d,	// (0x00026934) heading_sub_pane

0x7535,	// (0x0002693c) list_touch_info_pane_ParamLimits

0x7535,	// (0x0002693c) list_touch_info_pane

0x7544,	// (0x0002694b) list_single_touch_info_pane_ParamLimits

0x7544,	// (0x0002694b) list_single_touch_info_pane

0x7556,	// (0x0002695d) list_single_touch_info_pane_t1

0x7564,	// (0x0002696b) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x0002ef16) list_single_touch_info_pane_t

0x41a4,	// (0x000235ab) bg_popup_heading_pane_cp

0x7572,	// (0x00026979) heading_sub_pane_t1

0x509c,	// (0x000244a3) bg_popup_preview_window_pane_cp_ParamLimits

0x509c,	// (0x000244a3) bg_popup_preview_window_pane_cp

0x752d,	// (0x00026934) heading_preview_pane

0x7535,	// (0x0002693c) list_preview_pane_ParamLimits

0x7535,	// (0x0002693c) list_preview_pane

0x7580,	// (0x00026987) popup_preview_window_g1

0x7544,	// (0x0002694b) list_single_preview_pane_ParamLimits

0x7544,	// (0x0002694b) list_single_preview_pane

0x7588,	// (0x0002698f) list_single_preview_pane_g1

0x7590,	// (0x00026997) list_single_preview_pane_t1

0x7556,	// (0x0002695d) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x0002ef1b) list_single_preview_pane_t

0x759e,	// (0x000269a5) bg_popup_heading_pane_cp2_ParamLimits

0x759e,	// (0x000269a5) bg_popup_heading_pane_cp2

0x75b4,	// (0x000269bb) heading_preview_pane_g1

0x75bc,	// (0x000269c3) heading_preview_pane_t1_ParamLimits

0x75bc,	// (0x000269c3) heading_preview_pane_t1

0x2dbf,	// (0x000221c6) soft_indicator_pane_t1_ParamLimits

0x34b2,	// (0x000228b9) scroll_pane_ParamLimits

0x39d7,	// (0x00022dde) scroll_sc2_left_pane

0x39e0,	// (0x00022de7) scroll_sc2_right_pane

0x39ff,	// (0x00022e06) scroll_bg_pane_g1_ParamLimits

0x3a14,	// (0x00022e1b) scroll_bg_pane_g2_ParamLimits

0x3a2c,	// (0x00022e33) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002eb06) scroll_bg_pane_g_ParamLimits

0x39ff,	// (0x00022e06) scroll_handle_pane_g1_ParamLimits

0x3a4e,	// (0x00022e55) scroll_handle_pane_g2_ParamLimits

0x3a2c,	// (0x00022e33) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002eb0d) scroll_handle_pane_g_ParamLimits

0x4532,	// (0x00023939) popup_choice_list_window_ParamLimits

0x4532,	// (0x00023939) popup_choice_list_window

0x4ef6,	// (0x000242fd) choice_list_pane

0x4f78,	// (0x0002437f) cell_toolbar_pane_t1

0x4fa0,	// (0x000243a7) toolbar_button_pane_ParamLimits

0x60cd,	// (0x000254d4) ai_gene_pane_1_t2_ParamLimits

0x60cd,	// (0x000254d4) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x0002ed25) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x0002ed25) ai_gene_pane_1_t

0x75d9,	// (0x000269e0) scroll_sc2_left_pane_g1

0x75d9,	// (0x000269e0) scroll_sc2_right_pane_g1

0x450a,	// (0x00023911) bg_popup_sub_pane_cp10

0x75e3,	// (0x000269ea) list_choice_list_pane

0x75fa,	// (0x00026a01) list_single_choice_list_pane_ParamLimits

0x75fa,	// (0x00026a01) list_single_choice_list_pane

0x760e,	// (0x00026a15) list_single_choice_list_pane_g1

0x7616,	// (0x00026a1d) list_single_choice_list_pane_t1_ParamLimits

0x7616,	// (0x00026a1d) list_single_choice_list_pane_t1

0x762b,	// (0x00026a32) choice_list_pane_g1

0x7633,	// (0x00026a3a) choice_list_pane_t1

0x2bdf,	// (0x00021fe6) input_focus_pane_cp11

0x38b4,	// (0x00022cbb) title_pane_stacon_g2_ParamLimits

0x38b4,	// (0x00022cbb) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002eaec) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002eaec) title_pane_stacon_g

0x41a4,	// (0x000235ab) cursor_press_pane

0xcd18,	// (0x0002c11f) popup_fep_hwr_window_ParamLimits

0xcd18,	// (0x0002c11f) popup_fep_hwr_window

0x4654,	// (0x00023a5b) popup_fep_vkb_window_ParamLimits

0x4654,	// (0x00023a5b) popup_fep_vkb_window

0x7641,	// (0x00026a48) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x0002ef44) fep_vkb_side_pane_g_ParamLimits

0x2015,	// (0x0002141c) fep_hwr_candidate_pane_ParamLimits

0x2015,	// (0x0002141c) fep_hwr_candidate_pane

0x203f,	// (0x00021446) fep_hwr_side_pane_ParamLimits

0x203f,	// (0x00021446) fep_hwr_side_pane

0x205f,	// (0x00021466) fep_hwr_top_pane_ParamLimits

0x205f,	// (0x00021466) fep_hwr_top_pane

0x2077,	// (0x0002147e) fep_hwr_write_pane_ParamLimits

0x2077,	// (0x0002147e) fep_hwr_write_pane

0xfb3d,	// (0x0002ef44) fep_vkb_side_pane_g

0x7649,	// (0x00026a50) fep_hwr_top_pane_g1

0x765b,	// (0x00026a62) fep_hwr_top_pane_g2

0x20a3,	// (0x000214aa) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x0002ef20) fep_hwr_top_pane_g

0x20b8,	// (0x000214bf) fep_hwr_top_text_pane

0x3ba5,	// (0x00022fac) fep_hwr_top_text_pane_g1

0x7691,	// (0x00026a98) fep_hwr_top_text_pane_t1

0x21ae,	// (0x000215b5) fep_hwr_candidate_pane_g1

0x78e4,	// (0x00026ceb) fep_vkb_keypad_pane_g3_ParamLimits

0x78e4,	// (0x00026ceb) fep_vkb_keypad_pane_g3

0x790c,	// (0x00026d13) fep_vkb_keypad_pane_g4_ParamLimits

0x790c,	// (0x00026d13) fep_vkb_keypad_pane_g4

0x797b,	// (0x00026d82) fep_vkb_bottom_pane_g2_ParamLimits

0x797b,	// (0x00026d82) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x0002ef4b) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x0002ef4b) fep_vkb_bottom_pane_g

0x75d9,	// (0x000269e0) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x0002ef55) cell_vkb_side_pane_g

0x7a06,	// (0x00026e0d) cell_vkb_side_pane_t1

0x7a14,	// (0x00026e1b) cell_vkb_side_pane_t1_copy1

0x75d9,	// (0x000269e0) bg_fep_vkb_candidate_pane_g2

0x7b40,	// (0x00026f47) cell_vkb_candidate_pane_ParamLimits

0x769f,	// (0x00026aa6) aid_size_cell_vkb_ParamLimits

0x769f,	// (0x00026aa6) aid_size_cell_vkb

0x7b40,	// (0x00026f47) cell_vkb_candidate_pane

0x21c8,	// (0x000215cf) bg_popup_fep_shadow_pane_g1

0xde7f,	// (0x0002d286) fep_vkb_bottom_pane_ParamLimits

0xde7f,	// (0x0002d286) fep_vkb_bottom_pane

0x7763,	// (0x00026b6a) fep_vkb_candidate_pane_ParamLimits

0x7763,	// (0x00026b6a) fep_vkb_candidate_pane

0xdea4,	// (0x0002d2ab) fep_vkb_keypad_pane_ParamLimits

0xdea4,	// (0x0002d2ab) fep_vkb_keypad_pane

0xdee0,	// (0x0002d2e7) fep_vkb_side_pane_ParamLimits

0xdee0,	// (0x0002d2e7) fep_vkb_side_pane

0xdf1c,	// (0x0002d323) fep_vkb_top_pane_ParamLimits

0xdf1c,	// (0x0002d323) fep_vkb_top_pane

0x783d,	// (0x00026c44) fep_vkb_top_pane_g1_ParamLimits

0x783d,	// (0x00026c44) fep_vkb_top_pane_g1

0x784c,	// (0x00026c53) fep_vkb_top_pane_g2_ParamLimits

0x784c,	// (0x00026c53) fep_vkb_top_pane_g2

0x785b,	// (0x00026c62) fep_vkb_top_pane_g3_ParamLimits

0x785b,	// (0x00026c62) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x0002ef3b) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x0002ef3b) fep_vkb_top_pane_g

0x7879,	// (0x00026c80) fep_vkb_top_text_pane_ParamLimits

0x7879,	// (0x00026c80) fep_vkb_top_text_pane

0xdf58,	// (0x0002d35f) fep_vkb_side_pane_g1_ParamLimits

0xdf58,	// (0x0002d35f) fep_vkb_side_pane_g1

0x78d3,	// (0x00026cda) grid_vkb_side_pane_ParamLimits

0x78d3,	// (0x00026cda) grid_vkb_side_pane

0x21d0,	// (0x000215d7) bg_popup_fep_shadow_pane_g2

0x21d9,	// (0x000215e0) bg_popup_fep_shadow_pane_g3

0x21e1,	// (0x000215e8) bg_popup_fep_shadow_pane_g4

0x21ea,	// (0x000215f1) bg_popup_fep_shadow_pane_g5

0x21f4,	// (0x000215fb) bg_popup_fep_shadow_pane_g6

0x21fc,	// (0x00021603) bg_popup_fep_shadow_pane_g7

0x35c6,	// (0x000229cd) bg_popup_fep_shadow_pane_g8

0x792a,	// (0x00026d31) grid_vkb_keypad_number_pane_ParamLimits

0x792a,	// (0x00026d31) grid_vkb_keypad_number_pane

0x793a,	// (0x00026d41) grid_vkb_keypad_pane_ParamLimits

0x793a,	// (0x00026d41) grid_vkb_keypad_pane

0x7960,	// (0x00026d67) fep_vkb_bottom_pane_g1_ParamLimits

0x7960,	// (0x00026d67) fep_vkb_bottom_pane_g1

0x7989,	// (0x00026d90) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7989,	// (0x00026d90) grid_vkb_keypad_bottom_left_pane

0x799e,	// (0x00026da5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x799e,	// (0x00026da5) grid_vkb_keypad_bottom_right_pane

0x79b3,	// (0x00026dba) fep_vkb_top_text_pane_g1

0xdf9f,	// (0x0002d3a6) fep_vkb_top_text_pane_t1

0xdfb1,	// (0x0002d3b8) cell_vkb_side_pane_ParamLimits

0xdfb1,	// (0x0002d3b8) cell_vkb_side_pane

0x75d9,	// (0x000269e0) cell_vkb_side_pane_g1

0x7a22,	// (0x00026e29) cell_vkb_keypad_pane_ParamLimits

0x7a22,	// (0x00026e29) cell_vkb_keypad_pane

0x7a97,	// (0x00026e9e) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x0002ef68) bg_popup_fep_shadow_pane_g

0x75d9,	// (0x000269e0) cell_hwr_side_pane_g1

0x75d9,	// (0x000269e0) cell_hwr_side_pane_g2

0x7aa1,	// (0x00026ea8) cell_vkb_keypad_pane_t1

0xdfc7,	// (0x0002d3ce) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdfc7,	// (0x0002d3ce) cell_vkb_keypad_bottom_left_pane

0xdfdc,	// (0x0002d3e3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdfdc,	// (0x0002d3e3) cell_vkb_keypad_bottom_right_pane

0x75d9,	// (0x000269e0) cell_vkb_keypad_bottom_left_pane_g1

0x75d9,	// (0x000269e0) cell_vkb_keypad_bottom_right_pane_g1

0x7b05,	// (0x00026f0c) cell_vkb_keypad_number_pane_ParamLimits

0x7b05,	// (0x00026f0c) cell_vkb_keypad_number_pane

0x7b24,	// (0x00026f2b) cell_vkb_keypad_number_pane_g1

0x7b2e,	// (0x00026f35) cell_vkb_keypad_number_pane_g2

0x7b37,	// (0x00026f3e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x0002ef5a) cell_vkb_keypad_number_pane_g

0x7aa1,	// (0x00026ea8) cell_vkb_keypad_number_pane_t1

0x7b5b,	// (0x00026f62) fep_vkb_candidate_pane_g1

0x0001,

0xfb4e,	// (0x0002ef55) cell_hwr_side_pane_g

0x7b74,	// (0x00026f7b) cell_hwr_side_pane_t1

0x220e,	// (0x00021615) cell_hwr_side_pane_t1_copy1

0x786b,	// (0x00026c72) cell_hwr_candidate_pane_g1

0x221c,	// (0x00021623) cell_hwr_candidate_pane_t1

0x75d9,	// (0x000269e0) cell_vkb_candidate_pane_g2

0x7bfa,	// (0x00027001) cell_vkb_candidate_pane_t1

0xcc65,	// (0x0002c06c) bg_popup_fep_shadow_pane_ParamLimits

0xcc65,	// (0x0002c06c) bg_popup_fep_shadow_pane

0xd3ce,	// (0x0002c7d5) bg_fep_hwr_top_pane_g4

0x766d,	// (0x00026a74) bg_hwr_side_pane_g1_ParamLimits

0x766d,	// (0x00026a74) bg_hwr_side_pane_g1

0xc497,	// (0x0002b89e) cell_hwr_side_pane_ParamLimits

0xc497,	// (0x0002b89e) cell_hwr_side_pane

0x212f,	// (0x00021536) fep_hwr_write_pane_g1_ParamLimits

0x212f,	// (0x00021536) fep_hwr_write_pane_g1

0x213c,	// (0x00021543) fep_hwr_write_pane_g2_ParamLimits

0x213c,	// (0x00021543) fep_hwr_write_pane_g2

0x2149,	// (0x00021550) fep_hwr_write_pane_g3_ParamLimits

0x2149,	// (0x00021550) fep_hwr_write_pane_g3

0xc4b7,	// (0x0002b8be) fep_hwr_write_pane_g4_ParamLimits

0xc4b7,	// (0x0002b8be) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x0002ef27) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x0002ef27) fep_hwr_write_pane_g

0xd3ce,	// (0x0002c7d5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd3ce,	// (0x0002c7d5) bg_fep_hwr_candidate_pane_g2

0x216c,	// (0x00021573) cell_hwr_candidate_pane_ParamLimits

0x216c,	// (0x00021573) cell_hwr_candidate_pane

0x21ae,	// (0x000215b5) fep_hwr_candidate_pane_g1_ParamLimits

0x76cd,	// (0x00026ad4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76cd,	// (0x00026ad4) bg_popup_fep_shadow_pane_cp2

0x786b,	// (0x00026c72) fep_vkb_top_pane_g4_ParamLimits

0x786b,	// (0x00026c72) fep_vkb_top_pane_g4

0x78b1,	// (0x00026cb8) fep_vkb_side_pane_g2_ParamLimits

0x78b1,	// (0x00026cb8) fep_vkb_side_pane_g2

0xb6d6,	// (0x0002aadd) list_setting_pane_t4_ParamLimits

0xb6d6,	// (0x0002aadd) list_setting_pane_t4

0xb770,	// (0x0002ab77) list_setting_number_pane_t5_ParamLimits

0xb770,	// (0x0002ab77) list_setting_number_pane_t5

0xca73,	// (0x0002be7a) list_double_heading_pane_cp2_ParamLimits

0xca73,	// (0x0002be7a) list_double_heading_pane_cp2

0x3559,	// (0x00022960) list_double_heading_pane_g1_cp2_ParamLimits

0x3559,	// (0x00022960) list_double_heading_pane_g1_cp2

0x3565,	// (0x0002296c) list_double_heading_pane_g2_cp2_ParamLimits

0x3565,	// (0x0002296c) list_double_heading_pane_g2_cp2

0x7c08,	// (0x0002700f) list_double_heading_pane_t1_cp2_ParamLimits

0x7c08,	// (0x0002700f) list_double_heading_pane_t1_cp2

0x7c1e,	// (0x00027025) list_double_heading_pane_t2_cp2_ParamLimits

0x7c1e,	// (0x00027025) list_double_heading_pane_t2_cp2

0x2bc7,	// (0x00021fce) aid_value_unit2

0x1408,	// (0x0002080f) popup_preview_fixed_window

0x2f5c,	// (0x00022363) bg_popup_preview_window_pane_cp02

0x7c30,	// (0x00027037) list_preview_fixed_pane

0x7c76,	// (0x0002707d) list_empty_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_empty_pane_fp

0x7c76,	// (0x0002707d) list_single_cale_day_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_single_cale_day_pane_fp

0x7c76,	// (0x0002707d) list_single_graphic_heading_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_single_graphic_heading_pane_fp

0x7c76,	// (0x0002707d) list_single_graphic_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_single_graphic_pane_fp

0x7c76,	// (0x0002707d) list_single_heading_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_single_heading_pane_fp

0x7c76,	// (0x0002707d) list_single_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_single_pane_fp

0x7c8b,	// (0x00027092) list_single_pane_fp_g1_ParamLimits

0x7c8b,	// (0x00027092) list_single_pane_fp_g1

0x0dac,	// (0x000201b3) list_single_pane_fp_g2_ParamLimits

0x0dac,	// (0x000201b3) list_single_pane_fp_g2

0x0db8,	// (0x000201bf) list_single_pane_fp_g3_ParamLimits

0x0db8,	// (0x000201bf) list_single_pane_fp_g3

0x7c97,	// (0x0002709e) list_single_pane_fp_g4_ParamLimits

0x7c97,	// (0x0002709e) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0002ef89) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0002ef89) list_single_pane_fp_g

0x0dcc,	// (0x000201d3) list_single_pane_fp_t1_ParamLimits

0x0dcc,	// (0x000201d3) list_single_pane_fp_t1

0x0de3,	// (0x000201ea) list_single_graphic_pane_fp_g1_ParamLimits

0x0de3,	// (0x000201ea) list_single_graphic_pane_fp_g1

0x7c8b,	// (0x00027092) list_single_graphic_pane_fp_g2_ParamLimits

0x7c8b,	// (0x00027092) list_single_graphic_pane_fp_g2

0x0dac,	// (0x000201b3) list_single_graphic_pane_fp_g3_ParamLimits

0x0dac,	// (0x000201b3) list_single_graphic_pane_fp_g3

0x0db8,	// (0x000201bf) list_single_graphic_pane_fp_g4_ParamLimits

0x0db8,	// (0x000201bf) list_single_graphic_pane_fp_g4

0x7c97,	// (0x0002709e) list_single_graphic_pane_fp_g5_ParamLimits

0x7c97,	// (0x0002709e) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ef92) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ef92) list_single_graphic_pane_fp_g

0x0def,	// (0x000201f6) list_single_graphic_pane_fp_t1_ParamLimits

0x0def,	// (0x000201f6) list_single_graphic_pane_fp_t1

0x0de3,	// (0x000201ea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0de3,	// (0x000201ea) list_single_graphic_heading_pane_fp_g1

0x7c8b,	// (0x00027092) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c8b,	// (0x00027092) list_single_graphic_heading_pane_fp_g2

0x0dac,	// (0x000201b3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0dac,	// (0x000201b3) list_single_graphic_heading_pane_fp_g3

0x0db8,	// (0x000201bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0db8,	// (0x000201bf) list_single_graphic_heading_pane_fp_g4

0x7c97,	// (0x0002709e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c97,	// (0x0002709e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ef92) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ef92) list_single_graphic_heading_pane_fp_g

0x0e05,	// (0x0002020c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e05,	// (0x0002020c) list_single_graphic_heading_pane_fp_t1

0x0e1b,	// (0x00020222) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0e1b,	// (0x00020222) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0002ef9d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0002ef9d) list_single_graphic_heading_pane_fp_t

0x0e2d,	// (0x00020234) list_single_cale_day_pane_fp_g1_ParamLimits

0x0e2d,	// (0x00020234) list_single_cale_day_pane_fp_g1

0x7ca3,	// (0x000270aa) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ca3,	// (0x000270aa) list_single_cale_day_pane_fp_g2

0x0e65,	// (0x0002026c) list_single_cale_day_pane_fp_g3_ParamLimits

0x0e65,	// (0x0002026c) list_single_cale_day_pane_fp_g3

0x0e8d,	// (0x00020294) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e8d,	// (0x00020294) list_single_cale_day_pane_fp_g4

0x0eb1,	// (0x000202b8) list_single_cale_day_pane_fp_g5_ParamLimits

0x0eb1,	// (0x000202b8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0002efa2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0002efa2) list_single_cale_day_pane_fp_g

0x0ed5,	// (0x000202dc) list_single_cale_day_pane_fp_t1_ParamLimits

0x0ed5,	// (0x000202dc) list_single_cale_day_pane_fp_t1

0x0efb,	// (0x00020302) list_single_cale_day_pane_fp_t2_ParamLimits

0x0efb,	// (0x00020302) list_single_cale_day_pane_fp_t2

0x0f14,	// (0x0002031b) list_single_cale_day_pane_fp_t3_ParamLimits

0x0f14,	// (0x0002031b) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0002efad) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0002efad) list_single_cale_day_pane_fp_t

0x7c8b,	// (0x00027092) list_empty_pane_fp_g1_ParamLimits

0x7c8b,	// (0x00027092) list_empty_pane_fp_g1

0x0f2d,	// (0x00020334) list_empty_pane_fp_t1

0x0f3b,	// (0x00020342) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0002efb4) list_empty_pane_fp_t

0x7c8b,	// (0x00027092) list_single_heading_pane_fp_g1_ParamLimits

0x7c8b,	// (0x00027092) list_single_heading_pane_fp_g1

0x0dac,	// (0x000201b3) list_single_heading_pane_fp_g2_ParamLimits

0x0dac,	// (0x000201b3) list_single_heading_pane_fp_g2

0x0db8,	// (0x000201bf) list_single_heading_pane_fp_g3_ParamLimits

0x0db8,	// (0x000201bf) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0002efb9) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0002efb9) list_single_heading_pane_fp_g

0x0f49,	// (0x00020350) list_single_heading_pane_fp_t1_ParamLimits

0x0f49,	// (0x00020350) list_single_heading_pane_fp_t1

0x0f5b,	// (0x00020362) list_single_heading_pane_fp_t2_ParamLimits

0x0f5b,	// (0x00020362) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0002efc0) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0002efc0) list_single_heading_pane_fp_t

0x374b,	// (0x00022b52) aid_size_cell_fast

0x2ecc,	// (0x000222d3) soft_indicator_pane_cp1_t1

0x3788,	// (0x00022b8f) cell_app_pane_cp2_ParamLimits

0x3788,	// (0x00022b8f) cell_app_pane_cp2

0x1ffe,	// (0x00021405) fep_hwr_candidate_drop_down_list_pane

0xd3dc,	// (0x0002c7e3) fep_hwr_candidate_pane_g3_ParamLimits

0xd3dc,	// (0x0002c7e3) fep_hwr_candidate_pane_g3

0xd3e9,	// (0x0002c7f0) fep_hwr_candidate_pane_g4_ParamLimits

0xd3e9,	// (0x0002c7f0) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0002ef34) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x0002ef34) fep_hwr_candidate_pane_g

0x7752,	// (0x00026b59) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7752,	// (0x00026b59) fep_vkb_candidate_drop_down_list_pane

0x7b63,	// (0x00026f6a) fep_vkb_candidate_pane_g3

0x7b6b,	// (0x00026f72) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x0002ef61) fep_vkb_candidate_pane_g

0x786b,	// (0x00026c72) cell_hwr_candidate_pane_g1_ParamLimits

0x7b82,	// (0x00026f89) cell_hwr_candidate_pane_g3_ParamLimits

0x7b82,	// (0x00026f89) cell_hwr_candidate_pane_g3

0x7ba3,	// (0x00026faa) cell_hwr_candidate_pane_g4_ParamLimits

0x7ba3,	// (0x00026faa) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0002ef7b) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0002ef7b) cell_hwr_candidate_pane_g

0x7bc4,	// (0x00026fcb) cell_vkb_candidate_pane_g3_ParamLimits

0x7bc4,	// (0x00026fcb) cell_vkb_candidate_pane_g3

0x7bdf,	// (0x00026fe6) cell_vkb_candidate_pane_g4_ParamLimits

0x7bdf,	// (0x00026fe6) cell_vkb_candidate_pane_g4

0x7caf,	// (0x000270b6) cell_app_pane_cp2_g1_ParamLimits

0x7caf,	// (0x000270b6) cell_app_pane_cp2_g1

0x7ccd,	// (0x000270d4) cell_app_pane_cp2_g2_ParamLimits

0x7ccd,	// (0x000270d4) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0002efc5) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0002efc5) cell_app_pane_cp2_g

0x7cd9,	// (0x000270e0) cell_app_pane_cp2_t1_ParamLimits

0x7cd9,	// (0x000270e0) cell_app_pane_cp2_t1

0x353f,	// (0x00022946) grid_highlight_pane_cp1_ParamLimits

0x353f,	// (0x00022946) grid_highlight_pane_cp1

0x223a,	// (0x00021641) cell_hwr_candidate_pane_cp1_ParamLimits

0x223a,	// (0x00021641) cell_hwr_candidate_pane_cp1

0x786b,	// (0x00026c72) fep_hwr_candidate_drop_down_list_pane_g1

0x7ceb,	// (0x000270f2) fep_hwr_candidate_drop_down_list_pane_g2

0x7cf8,	// (0x000270ff) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002efca) fep_hwr_candidate_drop_down_list_pane_g

0x2259,	// (0x00021660) fep_hwr_candidate_drop_down_list_scroll_pane

0x2262,	// (0x00021669) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2262,	// (0x00021669) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x226f,	// (0x00021676) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x226f,	// (0x00021676) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x227c,	// (0x00021683) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x227c,	// (0x00021683) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7bc4,	// (0x00026fcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bc4,	// (0x00026fcb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7bdf,	// (0x00026fe6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bdf,	// (0x00026fe6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2289,	// (0x00021690) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2289,	// (0x00021690) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x22a4,	// (0x000216ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x22a4,	// (0x000216ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x22bf,	// (0x000216c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x22bf,	// (0x000216c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0002efd1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0002efd1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7d05,	// (0x0002710c) cell_vkb_candidate_pane_cp1_ParamLimits

0x7d05,	// (0x0002710c) cell_vkb_candidate_pane_cp1

0x786b,	// (0x00026c72) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x786b,	// (0x00026c72) fep_vkb_candidate_drop_down_list_pane_g1

0x7ceb,	// (0x000270f2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ceb,	// (0x000270f2) fep_vkb_candidate_drop_down_list_pane_g2

0x7cf8,	// (0x000270ff) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7cf8,	// (0x000270ff) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0002efca) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0002efca) fep_vkb_candidate_drop_down_list_pane_g

0x7d25,	// (0x0002712c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7d25,	// (0x0002712c) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d32,	// (0x00027139) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d32,	// (0x00027139) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d3f,	// (0x00027146) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d3f,	// (0x00027146) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d4b,	// (0x00027152) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d4b,	// (0x00027152) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b82,	// (0x00026f89) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b82,	// (0x00026f89) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7ba3,	// (0x00026faa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ba3,	// (0x00026faa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d57,	// (0x0002715e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d57,	// (0x0002715e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d78,	// (0x0002717f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d78,	// (0x0002717f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d99,	// (0x000271a0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d99,	// (0x000271a0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdb,	// (0x0002efe2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdb,	// (0x0002efe2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbdb8,	// (0x0002b1bf) title_pane_g1_ParamLimits

0xbdc9,	// (0x0002b1d0) title_pane_g2_ParamLimits

0xf56a,	// (0x0002e971) title_pane_g_ParamLimits

0x3b95,	// (0x00022f9c) aid_call2_pane

0x3b9d,	// (0x00022fa4) aid_call_pane

0x3ba5,	// (0x00022fac) popup_clock_analogue_window_g1

0x3ba5,	// (0x00022fac) popup_clock_analogue_window_g2

0x1771,	// (0x00020b78) popup_clock_analogue_window_g3

0x177a,	// (0x00020b81) popup_clock_analogue_window_g4

0x2be9,	// (0x00021ff0) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002eb1b) popup_clock_analogue_window_g

0x1782,	// (0x00020b89) popup_clock_analogue_window_t1

0x1790,	// (0x00020b97) clock_digital_number_pane_ParamLimits

0x1790,	// (0x00020b97) clock_digital_number_pane

0x179c,	// (0x00020ba3) clock_digital_number_pane_cp02_ParamLimits

0x179c,	// (0x00020ba3) clock_digital_number_pane_cp02

0x17a8,	// (0x00020baf) clock_digital_number_pane_cp03_ParamLimits

0x17a8,	// (0x00020baf) clock_digital_number_pane_cp03

0x17b4,	// (0x00020bbb) clock_digital_number_pane_cp04_ParamLimits

0x17b4,	// (0x00020bbb) clock_digital_number_pane_cp04

0x17c0,	// (0x00020bc7) clock_digital_separator_pane_ParamLimits

0x17c0,	// (0x00020bc7) clock_digital_separator_pane

0x17cc,	// (0x00020bd3) popup_clock_digital_window_t1_ParamLimits

0x17cc,	// (0x00020bd3) popup_clock_digital_window_t1

0x2be9,	// (0x00021ff0) clock_digital_number_pane_g1

0x2be9,	// (0x00021ff0) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002eb26) clock_digital_number_pane_g

0x2be9,	// (0x00021ff0) clock_digital_separator_pane_g1

0x2be9,	// (0x00021ff0) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002eb26) clock_digital_separator_pane_g

0xd2f1,	// (0x0002c6f8) aid_fill_nsta_ParamLimits

0xd448,	// (0x0002c84f) indicator_nsta_pane_ParamLimits

0x4d83,	// (0x0002418a) popup_clock_analogue_window

0x4d83,	// (0x0002418a) popup_clock_digital_window

0x370c,	// (0x00022b13) grid_indicator_nsta_pane_ParamLimits

0x6fb8,	// (0x000263bf) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x0002eeb4) clock_nsta_pane_t

0x1735,	// (0x00020b3c) aid_size_max_handle

0xc158,	// (0x0002b55f) aid_size_min_handle

0x41a4,	// (0x000235ab) editor_scroll_pane

0x7db4,	// (0x000271bb) ex_editor_pane

0x36b9,	// (0x00022ac0) scroll_pane_cp13

0x34de,	// (0x000228e5) scroll_pane_cp14

0x3bcf,	// (0x00022fd6) scroll_pane_cp36

0xca82,	// (0x0002be89) list_single_graphic_hl_pane_cp2_ParamLimits

0xca82,	// (0x0002be89) list_single_graphic_hl_pane_cp2

0xb9e6,	// (0x0002aded) list_single_graphic_hl_pane_ParamLimits

0xb9e6,	// (0x0002aded) list_single_graphic_hl_pane

0x0f71,	// (0x00020378) aid_size_min_hl_cp1

0x7dbc,	// (0x000271c3) list_highlight_pane_cp34_ParamLimits

0x7dbc,	// (0x000271c3) list_highlight_pane_cp34

0x7dcd,	// (0x000271d4) list_single_graphic_hl_pane_g1_ParamLimits

0x7dcd,	// (0x000271d4) list_single_graphic_hl_pane_g1

0xb9f8,	// (0x0002adff) list_single_graphic_hl_pane_g2_ParamLimits

0xb9f8,	// (0x0002adff) list_single_graphic_hl_pane_g2

0xb9f8,	// (0x0002adff) list_single_graphic_hl_pane_g3_ParamLimits

0xb9f8,	// (0x0002adff) list_single_graphic_hl_pane_g3

0xba04,	// (0x0002ae0b) list_single_graphic_hl_pane_g4_ParamLimits

0xba04,	// (0x0002ae0b) list_single_graphic_hl_pane_g4

0xba10,	// (0x0002ae17) list_single_graphic_hl_pane_g5_ParamLimits

0xba10,	// (0x0002ae17) list_single_graphic_hl_pane_g5

0x0004,

0xfbec,	// (0x0002eff3) list_single_graphic_hl_pane_g_ParamLimits

0xfbec,	// (0x0002eff3) list_single_graphic_hl_pane_g

0xba24,	// (0x0002ae2b) list_single_graphic_hl_pane_t1_ParamLimits

0xba24,	// (0x0002ae2b) list_single_graphic_hl_pane_t1

0x7dda,	// (0x000271e1) aid_size_min_hl_cp2

0x7de3,	// (0x000271ea) list_highlight_pane_cp34_cp2_ParamLimits

0x7de3,	// (0x000271ea) list_highlight_pane_cp34_cp2

0x7dcd,	// (0x000271d4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7dcd,	// (0x000271d4) list_single_graphic_hl_pane_g1_cp2

0x7df0,	// (0x000271f7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7df0,	// (0x000271f7) list_single_graphic_hl_pane_g2_cp2

0x7dfc,	// (0x00027203) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7dfc,	// (0x00027203) list_single_graphic_hl_pane_g3_cp2

0x5c81,	// (0x00025088) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5c81,	// (0x00025088) list_single_graphic_hl_pane_g4_cp2

0x7e0a,	// (0x00027211) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e0a,	// (0x00027211) list_single_graphic_hl_pane_g5_cp2

0xc1af,	// (0x0002b5b6) control_pane_g4_ParamLimits

0xc1af,	// (0x0002b5b6) control_pane_g4

0x450a,	// (0x00023911) bg_popup_sub_pane_cp10_ParamLimits

0x75e3,	// (0x000269ea) list_choice_list_pane_ParamLimits

0x75f2,	// (0x000269f9) scroll_pane_cp23

0x2f5c,	// (0x00022363) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c30,	// (0x00027037) list_preview_fixed_pane_ParamLimits

0x7c46,	// (0x0002704d) list_preview_fixed_pane_cp_ParamLimits

0x7c46,	// (0x0002704d) list_preview_fixed_pane_cp

0x7c52,	// (0x00027059) popup_preview_fixed_window_g1_ParamLimits

0x7c52,	// (0x00027059) popup_preview_fixed_window_g1

0x7c5e,	// (0x00027065) popup_preview_fixed_window_g2_ParamLimits

0x7c5e,	// (0x00027065) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0002ef82) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0002ef82) popup_preview_fixed_window_g

0x16a9,	// (0x00020ab0) aid_navi_side_left_pane_ParamLimits

0x16be,	// (0x00020ac5) aid_navi_side_right_pane_ParamLimits

0x16d6,	// (0x00020add) navi_icon_pane_stacon_ParamLimits

0x16ea,	// (0x00020af1) navi_navi_pane_stacon_ParamLimits

0x16d6,	// (0x00020add) navi_text_pane_stacon_ParamLimits

0x2bdf,	// (0x00021fe6) main_text_info_pane

0x7e34,	// (0x0002723b) listscroll_text_info_pane

0x7e3c,	// (0x00027243) list_text_info_pane_ParamLimits

0x7e3c,	// (0x00027243) list_text_info_pane

0x7e4b,	// (0x00027252) scroll_pane_cp24_ParamLimits

0x7e4b,	// (0x00027252) scroll_pane_cp24

0xdff7,	// (0x0002d3fe) list_text_info_pane_t1_ParamLimits

0xdff7,	// (0x0002d3fe) list_text_info_pane_t1

0xcc8b,	// (0x0002c092) popup_fast_swap2_window_ParamLimits

0xcc8b,	// (0x0002c092) popup_fast_swap2_window

0x7e9a,	// (0x000272a1) aid_size_cell_fast2

0x2bdf,	// (0x00021fe6) bg_popup_window_pane_cp17

0x545e,	// (0x00024865) heading_pane_cp2

0x31a8,	// (0x000225af) listscroll_fast2_pane

0x7ea4,	// (0x000272ab) grid_fast2_pane

0x7eae,	// (0x000272b5) listscroll_fast2_pane_g1

0x7eb6,	// (0x000272bd) listscroll_fast2_pane_g2

0x0001,

0xfbf7,	// (0x0002effe) listscroll_fast2_pane_g

0x36b9,	// (0x00022ac0) scroll_pane_cp26

0x7ec0,	// (0x000272c7) cell_fast2_pane_ParamLimits

0x7ec0,	// (0x000272c7) cell_fast2_pane

0x7ed5,	// (0x000272dc) cell_fast2_pane_g1

0x7ede,	// (0x000272e5) cell_fast2_pane_g2

0x7ee7,	// (0x000272ee) cell_fast2_pane_g3

0x0002,

0xfbfc,	// (0x0002f003) cell_fast2_pane_g

0x329b,	// (0x000226a2) grid_highlight_pane_cp9

0x32b0,	// (0x000226b7) main_eswt_pane_ParamLimits

0x32b0,	// (0x000226b7) main_eswt_pane

0x7e60,	// (0x00027267) list_single_text_info_pane

0x7eef,	// (0x000272f6) eswt_ctrl_button_pane

0x7eef,	// (0x000272f6) eswt_ctrl_canvas_pane

0x7ef7,	// (0x000272fe) eswt_ctrl_combo_pane

0x7eef,	// (0x000272f6) eswt_ctrl_default_pane

0x7eef,	// (0x000272f6) eswt_ctrl_label_pane

0x7eff,	// (0x00027306) eswt_ctrl_wait_pane

0x7f07,	// (0x0002730e) eswt_shell_pane

0x2bdf,	// (0x00021fe6) listscroll_eswt_app_pane

0x7f27,	// (0x0002732e) popup_eswt_tasktip_window_ParamLimits

0x7f27,	// (0x0002732e) popup_eswt_tasktip_window

0x509c,	// (0x000244a3) bg_popup_window_pane_cp18

0x7f38,	// (0x0002733f) eswt_control_pane_g1_ParamLimits

0x7f38,	// (0x0002733f) eswt_control_pane_g1

0x7f45,	// (0x0002734c) eswt_control_pane_g2_ParamLimits

0x7f45,	// (0x0002734c) eswt_control_pane_g2

0x7f52,	// (0x00027359) eswt_control_pane_g3_ParamLimits

0x7f52,	// (0x00027359) eswt_control_pane_g3

0x7f5f,	// (0x00027366) eswt_control_pane_g4_ParamLimits

0x7f5f,	// (0x00027366) eswt_control_pane_g4

0x0003,

0xfc03,	// (0x0002f00a) eswt_control_pane_g_ParamLimits

0xfc03,	// (0x0002f00a) eswt_control_pane_g

0x353f,	// (0x00022946) bg_button_pane_ParamLimits

0x353f,	// (0x00022946) bg_button_pane

0x32b0,	// (0x000226b7) common_borders_pane_copy2_ParamLimits

0x32b0,	// (0x000226b7) common_borders_pane_copy2

0x7f6c,	// (0x00027373) control_button_pane_g1_ParamLimits

0x7f6c,	// (0x00027373) control_button_pane_g1

0x7f78,	// (0x0002737f) control_button_pane_g2_ParamLimits

0x7f78,	// (0x0002737f) control_button_pane_g2

0x7f84,	// (0x0002738b) control_button_pane_g3_ParamLimits

0x7f84,	// (0x0002738b) control_button_pane_g3

0x0002,

0xfc0c,	// (0x0002f013) control_button_pane_g_ParamLimits

0xfc0c,	// (0x0002f013) control_button_pane_g

0x7f98,	// (0x0002739f) control_button_pane_t1

0x7fa6,	// (0x000273ad) control_button_pane_t2

0x0001,

0xfc13,	// (0x0002f01a) control_button_pane_t

0x4fac,	// (0x000243b3) bg_button_pane_g1

0x4fb4,	// (0x000243bb) bg_button_pane_g2

0x4fbc,	// (0x000243c3) bg_button_pane_g3

0x4fc4,	// (0x000243cb) bg_button_pane_g4

0x4fcc,	// (0x000243d3) bg_button_pane_g5

0x4fd4,	// (0x000243db) bg_button_pane_g6

0x4fdc,	// (0x000243e3) bg_button_pane_g7

0x4fe4,	// (0x000243eb) bg_button_pane_g8

0x4fec,	// (0x000243f3) bg_button_pane_g9

0x0008,

0xf872,	// (0x0002ec79) bg_button_pane_g

0x759e,	// (0x000269a5) common_borders_pane_ParamLimits

0x759e,	// (0x000269a5) common_borders_pane

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy1_ParamLimits

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy1

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy1_ParamLimits

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy1

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy1_ParamLimits

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy1

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy1_ParamLimits

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy1

0x75d9,	// (0x000269e0) bg_eswt_ctrl_canvas_pane_g1

0x759e,	// (0x000269a5) common_borders_pane_cp2_ParamLimits

0x759e,	// (0x000269a5) common_borders_pane_cp2

0x759e,	// (0x000269a5) common_borders_pane_cp3_ParamLimits

0x759e,	// (0x000269a5) common_borders_pane_cp3

0x7fb4,	// (0x000273bb) separator_horizontal_pane

0x7fbc,	// (0x000273c3) separator_vertical_pane

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy2_ParamLimits

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy2

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy2_ParamLimits

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy2

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy2_ParamLimits

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy2

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy2_ParamLimits

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy2

0x2bdf,	// (0x00021fe6) common_borders_pane_cp4

0x7fc5,	// (0x000273cc) separator_horizontal_pane_g1

0x7fce,	// (0x000273d5) separator_horizontal_pane_g2

0x7fd7,	// (0x000273de) separator_horizontal_pane_g3

0x0002,

0xfc18,	// (0x0002f01f) separator_horizontal_pane_g

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy3_ParamLimits

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy3

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy3_ParamLimits

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy3

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy3_ParamLimits

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy3

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy3_ParamLimits

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy3

0x2bdf,	// (0x00021fe6) common_borders_pane_cp5

0x7fe0,	// (0x000273e7) separator_vertical_pane_g1

0x7fe9,	// (0x000273f0) separator_vertical_pane_g2

0x7ff2,	// (0x000273f9) separator_vertical_pane_g3

0x0002,

0xfc1f,	// (0x0002f026) separator_vertical_pane_g

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy4_ParamLimits

0x7f38,	// (0x0002733f) eswt_control_pane_g1_copy4

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy4_ParamLimits

0x7f45,	// (0x0002734c) eswt_control_pane_g2_copy4

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy4_ParamLimits

0x7f52,	// (0x00027359) eswt_control_pane_g3_copy4

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy4_ParamLimits

0x7f5f,	// (0x00027366) eswt_control_pane_g4_copy4

0xe012,	// (0x0002d419) eswt_ctrl_combo_button_pane

0xe01a,	// (0x0002d421) eswt_ctrl_input_pane

0xe022,	// (0x0002d429) popup_choice_list_window_cp70

0xe02a,	// (0x0002d431) eswt_ctrl_input_pane_t1

0x2bdf,	// (0x00021fe6) input_focus_pane_cp70

0x759e,	// (0x000269a5) bg_button_pane_cp70_ParamLimits

0x759e,	// (0x000269a5) bg_button_pane_cp70

0xe038,	// (0x0002d43f) eswt_ctrl_combo_button_pane_g1

0x8029,	// (0x00027430) wait_bar_pane_cp70

0x509c,	// (0x000244a3) bg_popup_window_pane_cp70_ParamLimits

0x509c,	// (0x000244a3) bg_popup_window_pane_cp70

0x8031,	// (0x00027438) popup_eswt_tasktip_window_t1

0x8047,	// (0x0002744e) wait_bar_pane_cp71_ParamLimits

0x8047,	// (0x0002744e) wait_bar_pane_cp71

0x8053,	// (0x0002745a) grid_eswt_app_pane

0x39e0,	// (0x00022de7) scroll_pane_cp70

0xe040,	// (0x0002d447) cell_eswt_app_pane_ParamLimits

0xe040,	// (0x0002d447) cell_eswt_app_pane

0xe06a,	// (0x0002d471) cell_eswt_app_pane_g1_ParamLimits

0xe06a,	// (0x0002d471) cell_eswt_app_pane_g1

0xe099,	// (0x0002d4a0) cell_eswt_app_pane_g2_ParamLimits

0xe099,	// (0x0002d4a0) cell_eswt_app_pane_g2

0x0001,

0xfc26,	// (0x0002f02d) cell_eswt_app_pane_g_ParamLimits

0xfc26,	// (0x0002f02d) cell_eswt_app_pane_g

0xe0c2,	// (0x0002d4c9) cell_eswt_app_pane_t1_ParamLimits

0xe0c2,	// (0x0002d4c9) cell_eswt_app_pane_t1

0x8116,	// (0x0002751d) grid_highlight_pane_cp70_ParamLimits

0x8116,	// (0x0002751d) grid_highlight_pane_cp70

0x4079,	// (0x00023480) set_content_pane_g1

0x4450,	// (0x00023857) status_small_volume_pane

0x22da,	// (0x000216e1) status_small_volume_pane_g1

0x22e2,	// (0x000216e9) volume_small2_pane

0x22eb,	// (0x000216f2) volume_small2_pane_g1

0x22f4,	// (0x000216fb) volume_small2_pane_g2

0x22fd,	// (0x00021704) volume_small2_pane_g3

0x2306,	// (0x0002170d) volume_small2_pane_g4

0x230f,	// (0x00021716) volume_small2_pane_g5

0x2318,	// (0x0002171f) volume_small2_pane_g6

0x2321,	// (0x00021728) volume_small2_pane_g7

0x232a,	// (0x00021731) volume_small2_pane_g8

0x2333,	// (0x0002173a) volume_small2_pane_g9

0x233c,	// (0x00021743) volume_small2_pane_g10

0x0009,

0xfc2b,	// (0x0002f032) volume_small2_pane_g

0x79b3,	// (0x00026dba) fep_vkb_top_text_pane_g1_ParamLimits

0xdf9f,	// (0x0002d3a6) fep_vkb_top_text_pane_t1_ParamLimits

0x7c6a,	// (0x00027071) popup_preview_fixed_window_g3_ParamLimits

0x7c6a,	// (0x00027071) popup_preview_fixed_window_g3

0xd284,	// (0x0002c68b) popup_toolbar_trans_pane

0xd980,	// (0x0002cd87) aid_height_set_list_ParamLimits

0x63fb,	// (0x00025802) aid_size_parent_ParamLimits

0x450a,	// (0x00023911) list_highlight_pane_cp2_ParamLimits

0x4079,	// (0x00023480) set_content_pane_g1_ParamLimits

0xdb1b,	// (0x0002cf22) list_single_image_pane_ParamLimits

0xdb1b,	// (0x0002cf22) list_single_image_pane

0x8122,	// (0x00027529) aid_size_cell_image_ParamLimits

0x8122,	// (0x00027529) aid_size_cell_image

0xe0f4,	// (0x0002d4fb) grid_single_image_pane_ParamLimits

0xe0f4,	// (0x0002d4fb) grid_single_image_pane

0x3c80,	// (0x00023087) list_single_image_pane_g1_ParamLimits

0x3c80,	// (0x00023087) list_single_image_pane_g1

0x813d,	// (0x00027544) list_single_image_pane_g2_ParamLimits

0x813d,	// (0x00027544) list_single_image_pane_g2

0x0001,

0xfc40,	// (0x0002f047) list_single_image_pane_g_ParamLimits

0xfc40,	// (0x0002f047) list_single_image_pane_g

0x3c8c,	// (0x00023093) list_single_image_pane_t1_ParamLimits

0x3c8c,	// (0x00023093) list_single_image_pane_t1

0xe102,	// (0x0002d509) cell_image_list_pane_ParamLimits

0xe102,	// (0x0002d509) cell_image_list_pane

0x8164,	// (0x0002756b) cell_image_list_pane_g1

0x816d,	// (0x00027574) cell_image_list_pane_g2

0x0001,

0xfc45,	// (0x0002f04c) cell_image_list_pane_g

0x8176,	// (0x0002757d) aid_size_cell_tb_trans_pane

0x353f,	// (0x00022946) bg_tb_trans_pane

0x8188,	// (0x0002758f) grid_tb_trans_pane

0x4fac,	// (0x000243b3) bg_tb_trans_pane_g1

0x4fb4,	// (0x000243bb) bg_tb_trans_pane_g2

0x4fbc,	// (0x000243c3) bg_tb_trans_pane_g3

0x4fc4,	// (0x000243cb) bg_tb_trans_pane_g4

0x4fcc,	// (0x000243d3) bg_tb_trans_pane_g5

0x4fe4,	// (0x000243eb) bg_tb_trans_pane_g6

0x4fec,	// (0x000243f3) bg_tb_trans_pane_g7

0x4fd4,	// (0x000243db) bg_tb_trans_pane_g8

0x4fdc,	// (0x000243e3) bg_tb_trans_pane_g9

0x0008,

0xfc4a,	// (0x0002f051) bg_tb_trans_pane_g

0x819c,	// (0x000275a3) cell_toolbar_trans_pane_ParamLimits

0x819c,	// (0x000275a3) cell_toolbar_trans_pane

0x75d9,	// (0x000269e0) cell_toolbar_trans_pane_g1

0xdd7b,	// (0x0002d182) list_form2_midp_pane_t1

0xdd89,	// (0x0002d190) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x0002eefa) list_form2_midp_pane_t

0x71be,	// (0x000265c5) scroll_pane_cp51_ParamLimits

0x737a,	// (0x00026781) form2_midp_wait_pane_g1

0x7383,	// (0x0002678a) form2_midp_wait_pane_g2

0x738c,	// (0x00026793) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x0002ef0f) form2_midp_wait_pane_g

0x2cd3,	// (0x000220da) list_highlight_pane_cp21_ParamLimits

0x73e3,	// (0x000267ea) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x73f2,	// (0x000267f9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x65ce,	// (0x000259d5) list_single_2graphic_im_pane_ParamLimits

0x65ce,	// (0x000259d5) list_single_2graphic_im_pane

0xe118,	// (0x0002d51f) list_single_2graphic_im_pane_g1_ParamLimits

0xe118,	// (0x0002d51f) list_single_2graphic_im_pane_g1

0xe129,	// (0x0002d530) list_single_2graphic_im_pane_g2_ParamLimits

0xe129,	// (0x0002d530) list_single_2graphic_im_pane_g2

0xe135,	// (0x0002d53c) list_single_2graphic_im_pane_g3_ParamLimits

0xe135,	// (0x0002d53c) list_single_2graphic_im_pane_g3

0x0003,

0xfc5d,	// (0x0002f064) list_single_2graphic_im_pane_g_ParamLimits

0xfc5d,	// (0x0002f064) list_single_2graphic_im_pane_g

0xe149,	// (0x0002d550) list_single_2graphic_im_pane_t1_ParamLimits

0xe149,	// (0x0002d550) list_single_2graphic_im_pane_t1

0x7c76,	// (0x0002707d) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c76,	// (0x0002707d) list_single_graphic_2heading_pane_fp

0x0de3,	// (0x000201ea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0de3,	// (0x000201ea) list_single_graphic_2heading_pane_fp_g1

0x7c8b,	// (0x00027092) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c8b,	// (0x00027092) list_single_graphic_2heading_pane_fp_g2

0x0dac,	// (0x000201b3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0dac,	// (0x000201b3) list_single_graphic_2heading_pane_fp_g3

0x0db8,	// (0x000201bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0db8,	// (0x000201bf) list_single_graphic_2heading_pane_fp_g4

0x7c97,	// (0x0002709e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c97,	// (0x0002709e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002ef92) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002ef92) list_single_graphic_2heading_pane_fp_g

0x0fb0,	// (0x000203b7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0fb0,	// (0x000203b7) list_single_graphic_2heading_pane_fp_t1

0x0e1b,	// (0x00020222) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0e1b,	// (0x00020222) list_single_graphic_2heading_pane_fp_t2

0x0fc6,	// (0x000203cd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0fc6,	// (0x000203cd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc66,	// (0x0002f06d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc66,	// (0x0002f06d) list_single_graphic_2heading_pane_fp_t

0x7679,	// (0x00026a80) fep_hwr_write_pane_g5_ParamLimits

0x7679,	// (0x00026a80) fep_hwr_write_pane_g5

0x7685,	// (0x00026a8c) fep_hwr_write_pane_g6_ParamLimits

0x7685,	// (0x00026a8c) fep_hwr_write_pane_g6

0x7f07,	// (0x0002730e) eswt_shell_pane_ParamLimits

0x509c,	// (0x000244a3) bg_popup_window_pane_cp18_ParamLimits

0x6343,	// (0x0002574a) heading_pane_cp70

0x8031,	// (0x00027438) popup_eswt_tasktip_window_t1_ParamLimits

0xd345,	// (0x0002c74c) aid_touch_tab_arrow_left

0xd35b,	// (0x0002c762) aid_touch_tab_arrow_right

0xbde1,	// (0x0002b1e8) title_pane_g3_ParamLimits

0xbde1,	// (0x0002b1e8) title_pane_g3

0x34fe,	// (0x00022905) set_value_pane_g1

0xd284,	// (0x0002c68b) popup_toolbar_trans_pane_ParamLimits

0x8176,	// (0x0002757d) aid_size_cell_tb_trans_pane_ParamLimits

0x353f,	// (0x00022946) bg_tb_trans_pane_ParamLimits

0x8188,	// (0x0002758f) grid_tb_trans_pane_ParamLimits

0x2f5c,	// (0x00022363) cont_note_pane_ParamLimits

0x2f5c,	// (0x00022363) cont_note_pane

0x32b0,	// (0x000226b7) cont_snote2_single_text_pane_ParamLimits

0x32b0,	// (0x000226b7) cont_snote2_single_text_pane

0x32b0,	// (0x000226b7) cont_snote2_single_graphic_pane_ParamLimits

0x32b0,	// (0x000226b7) cont_snote2_single_graphic_pane

0x5679,	// (0x00024a80) cont_note_wait_pane_ParamLimits

0x5679,	// (0x00024a80) cont_note_wait_pane

0x5679,	// (0x00024a80) cont_note_image_pane_ParamLimits

0x5679,	// (0x00024a80) cont_note_image_pane

0x8230,	// (0x00027637) popup_note2_window_g1_ParamLimits

0x8230,	// (0x00027637) popup_note2_window_g1

0x8261,	// (0x00027668) popup_note2_window_t1_ParamLimits

0x8261,	// (0x00027668) popup_note2_window_t1

0x82a6,	// (0x000276ad) popup_note2_window_t2_ParamLimits

0x82a6,	// (0x000276ad) popup_note2_window_t2

0x82eb,	// (0x000276f2) popup_note2_window_t3_ParamLimits

0x82eb,	// (0x000276f2) popup_note2_window_t3

0x8330,	// (0x00027737) popup_note2_window_t4_ParamLimits

0x8330,	// (0x00027737) popup_note2_window_t4

0x2fe0,	// (0x000223e7) popup_note2_window_t5_ParamLimits

0x2fe0,	// (0x000223e7) popup_note2_window_t5

0x0004,

0xfc72,	// (0x0002f079) popup_note2_window_t_ParamLimits

0xfc72,	// (0x0002f079) popup_note2_window_t

0x835f,	// (0x00027766) popup_note2_image_window_g1_ParamLimits

0x835f,	// (0x00027766) popup_note2_image_window_g1

0x836b,	// (0x00027772) popup_note2_image_window_g2_ParamLimits

0x836b,	// (0x00027772) popup_note2_image_window_g2

0x0001,

0xfc7d,	// (0x0002f084) popup_note2_image_window_g_ParamLimits

0xfc7d,	// (0x0002f084) popup_note2_image_window_g

0x837d,	// (0x00027784) popup_note2_image_window_t1_ParamLimits

0x837d,	// (0x00027784) popup_note2_image_window_t1

0x8395,	// (0x0002779c) popup_note2_image_window_t2_ParamLimits

0x8395,	// (0x0002779c) popup_note2_image_window_t2

0x83ad,	// (0x000277b4) popup_note2_image_window_t3_ParamLimits

0x83ad,	// (0x000277b4) popup_note2_image_window_t3

0x0002,

0xfc82,	// (0x0002f089) popup_note2_image_window_t_ParamLimits

0xfc82,	// (0x0002f089) popup_note2_image_window_t

0x5687,	// (0x00024a8e) popup_note2_wait_window_g1_ParamLimits

0x5687,	// (0x00024a8e) popup_note2_wait_window_g1

0x83c9,	// (0x000277d0) popup_note2_wait_window_g2_ParamLimits

0x83c9,	// (0x000277d0) popup_note2_wait_window_g2

0x569f,	// (0x00024aa6) popup_note2_wait_window_g3_ParamLimits

0x569f,	// (0x00024aa6) popup_note2_wait_window_g3

0x0002,

0xfc89,	// (0x0002f090) popup_note2_wait_window_g_ParamLimits

0xfc89,	// (0x0002f090) popup_note2_wait_window_g

0x83d5,	// (0x000277dc) popup_note2_wait_window_t1_ParamLimits

0x83d5,	// (0x000277dc) popup_note2_wait_window_t1

0x83f3,	// (0x000277fa) popup_note2_wait_window_t2_ParamLimits

0x83f3,	// (0x000277fa) popup_note2_wait_window_t2

0x8411,	// (0x00027818) popup_note2_wait_window_t3_ParamLimits

0x8411,	// (0x00027818) popup_note2_wait_window_t3

0x8423,	// (0x0002782a) popup_note2_wait_window_t4_ParamLimits

0x8423,	// (0x0002782a) popup_note2_wait_window_t4

0x0003,

0xfc90,	// (0x0002f097) popup_note2_wait_window_t_ParamLimits

0xfc90,	// (0x0002f097) popup_note2_wait_window_t

0x8435,	// (0x0002783c) wait_bar2_pane_ParamLimits

0x8435,	// (0x0002783c) wait_bar2_pane

0x844d,	// (0x00027854) popup_snote2_single_text_window_g1_ParamLimits

0x844d,	// (0x00027854) popup_snote2_single_text_window_g1

0x8475,	// (0x0002787c) popup_snote2_single_text_window_t1_ParamLimits

0x8475,	// (0x0002787c) popup_snote2_single_text_window_t1

0x84c1,	// (0x000278c8) popup_snote2_single_text_window_t2_ParamLimits

0x84c1,	// (0x000278c8) popup_snote2_single_text_window_t2

0x850d,	// (0x00027914) popup_snote2_single_text_window_t3_ParamLimits

0x850d,	// (0x00027914) popup_snote2_single_text_window_t3

0x854e,	// (0x00027955) popup_snote2_single_text_window_t4_ParamLimits

0x854e,	// (0x00027955) popup_snote2_single_text_window_t4

0x8584,	// (0x0002798b) popup_snote2_single_text_window_t5_ParamLimits

0x8584,	// (0x0002798b) popup_snote2_single_text_window_t5

0x0004,

0xfc99,	// (0x0002f0a0) popup_snote2_single_text_window_t_ParamLimits

0xfc99,	// (0x0002f0a0) popup_snote2_single_text_window_t

0x85af,	// (0x000279b6) popup_snote2_single_graphic_window_g1_ParamLimits

0x85af,	// (0x000279b6) popup_snote2_single_graphic_window_g1

0x85d7,	// (0x000279de) popup_snote2_single_graphic_window_g2_ParamLimits

0x85d7,	// (0x000279de) popup_snote2_single_graphic_window_g2

0x0001,

0xfca4,	// (0x0002f0ab) popup_snote2_single_graphic_window_g_ParamLimits

0xfca4,	// (0x0002f0ab) popup_snote2_single_graphic_window_g

0x85ff,	// (0x00027a06) popup_snote2_single_graphic_window_t1_ParamLimits

0x85ff,	// (0x00027a06) popup_snote2_single_graphic_window_t1

0x864b,	// (0x00027a52) popup_snote2_single_graphic_window_t2_ParamLimits

0x864b,	// (0x00027a52) popup_snote2_single_graphic_window_t2

0x850d,	// (0x00027914) popup_snote2_single_graphic_window_t3_ParamLimits

0x850d,	// (0x00027914) popup_snote2_single_graphic_window_t3

0x854e,	// (0x00027955) popup_snote2_single_graphic_window_t4_ParamLimits

0x854e,	// (0x00027955) popup_snote2_single_graphic_window_t4

0x8584,	// (0x0002798b) popup_snote2_single_graphic_window_t5_ParamLimits

0x8584,	// (0x0002798b) popup_snote2_single_graphic_window_t5

0x0004,

0xfca9,	// (0x0002f0b0) popup_snote2_single_graphic_window_t_ParamLimits

0xfca9,	// (0x0002f0b0) popup_snote2_single_graphic_window_t

0x707b,	// (0x00026482) clock_nsta_pane_cp2_t1

0x707b,	// (0x00026482) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x0002eed0) clock_nsta_pane_cp2_t

0x06e0,	// (0x0001fae7) form_field_data_wide_pane_g1_ParamLimits

0x3559,	// (0x00022960) form_field_data_wide_pane_g2_ParamLimits

0x3559,	// (0x00022960) form_field_data_wide_pane_g2

0x3565,	// (0x0002296c) form_field_data_wide_pane_g3_ParamLimits

0x3565,	// (0x0002296c) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0002ea9e) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0002ea9e) form_field_data_wide_pane_g

0xdc95,	// (0x0002d09c) grid_touch_3_pane_ParamLimits

0xdc95,	// (0x0002d09c) grid_touch_3_pane

0xe17a,	// (0x0002d581) cell_touch_3_pane_ParamLimits

0xe17a,	// (0x0002d581) cell_touch_3_pane

0x75d9,	// (0x000269e0) cell_touch_3_pane_g1

0x75d9,	// (0x000269e0) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x0002ef55) cell_touch_3_pane_g

0x3012,	// (0x00022419) cont_query_data_pane

0x301a,	// (0x00022421) cont_query_data_pane_cp1

0x86c5,	// (0x00027acc) button_value_adjust_pane_cp7

0x86cd,	// (0x00027ad4) query_popup_pane_cp3

0x3c6a,	// (0x00023071) bg_popup_sub_pane_cp22_ParamLimits

0x17eb,	// (0x00020bf2) navi_navi_volume_pane_cp2

0x1806,	// (0x00020c0d) popup_side_volume_key_window_g2

0x1815,	// (0x00020c1c) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002eb30) popup_side_volume_key_window_g

0x1832,	// (0x00020c39) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002eb37) popup_side_volume_key_window_t

0x3f43,	// (0x0002334a) popup_side_volume_key_window_ParamLimits

0xb4e6,	// (0x0002a8ed) list_double_graphic_pane_g4_ParamLimits

0xb4e6,	// (0x0002a8ed) list_double_graphic_pane_g4

0xdb08,	// (0x0002cf0f) list_single_2heading_msg_pane_ParamLimits

0xdb08,	// (0x0002cf0f) list_single_2heading_msg_pane

0xba3a,	// (0x0002ae41) list_single_2heading_msg_pane_g1_ParamLimits

0xba3a,	// (0x0002ae41) list_single_2heading_msg_pane_g1

0xba46,	// (0x0002ae4d) list_single_2heading_msg_pane_g2_ParamLimits

0xba46,	// (0x0002ae4d) list_single_2heading_msg_pane_g2

0xba59,	// (0x0002ae60) list_single_2heading_msg_pane_g3_ParamLimits

0xba59,	// (0x0002ae60) list_single_2heading_msg_pane_g3

0xba65,	// (0x0002ae6c) list_single_2heading_msg_pane_g4_ParamLimits

0xba65,	// (0x0002ae6c) list_single_2heading_msg_pane_g4

0x0003,

0xfcb4,	// (0x0002f0bb) list_single_2heading_msg_pane_g_ParamLimits

0xfcb4,	// (0x0002f0bb) list_single_2heading_msg_pane_g

0xba7d,	// (0x0002ae84) list_single_2heading_msg_pane_t1_ParamLimits

0xba7d,	// (0x0002ae84) list_single_2heading_msg_pane_t1

0xbaa5,	// (0x0002aeac) list_single_2heading_msg_pane_t2_ParamLimits

0xbaa5,	// (0x0002aeac) list_single_2heading_msg_pane_t2

0xbb10,	// (0x0002af17) list_single_2heading_msg_pane_t3_ParamLimits

0xbb10,	// (0x0002af17) list_single_2heading_msg_pane_t3

0x10ab,	// (0x000204b2) list_single_2heading_msg_pane_t4_ParamLimits

0x10ab,	// (0x000204b2) list_single_2heading_msg_pane_t4

0x0003,

0xfcbd,	// (0x0002f0c4) list_single_2heading_msg_pane_t_ParamLimits

0xfcbd,	// (0x0002f0c4) list_single_2heading_msg_pane_t

0x2c27,	// (0x0002202e) title_pane_g4_ParamLimits

0x2c27,	// (0x0002202e) title_pane_g4

0x15f9,	// (0x00020a00) title_pane_stacon_g3_ParamLimits

0x15f9,	// (0x00020a00) title_pane_stacon_g3

0x81f3,	// (0x000275fa) list_single_2graphic_im_pane_g4_ParamLimits

0x81f3,	// (0x000275fa) list_single_2graphic_im_pane_g4

0x60ea,	// (0x000254f1) popup_side_volume_key_window_cp

0x68e7,	// (0x00025cee) main_idle_act2_pane_t1

0x1ba8,	// (0x00020faf) toolbar_button_pane_g10

0xc14e,	// (0x0002b555) popup_toolbar_window_cp1

0x706c,	// (0x00026473) clock_nsta_pane_cp_t1

0x706c,	// (0x00026473) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x0002eecb) clock_nsta_pane_cp_t

0x17eb,	// (0x00020bf2) navi_navi_volume_pane_cp2_ParamLimits

0x17fa,	// (0x00020c01) popup_side_volume_key_window_g1_ParamLimits

0x1806,	// (0x00020c0d) popup_side_volume_key_window_g2_ParamLimits

0x1815,	// (0x00020c1c) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002eb30) popup_side_volume_key_window_g_ParamLimits

0x1fea,	// (0x000213f1) fep_hwr_aid_pane

0xd3ce,	// (0x0002c7d5) bg_fep_hwr_top_pane_g4_ParamLimits

0x7649,	// (0x00026a50) fep_hwr_top_pane_g1_ParamLimits

0x765b,	// (0x00026a62) fep_hwr_top_pane_g2_ParamLimits

0x20a3,	// (0x000214aa) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x0002ef20) fep_hwr_top_pane_g_ParamLimits

0x20b8,	// (0x000214bf) fep_hwr_top_text_pane_ParamLimits

0x5ead,	// (0x000252b4) aid_touch_tab_arrow_arrow_2

0x5eb6,	// (0x000252bd) aid_touch_tab_arrow_left_2

0x1ffe,	// (0x00021405) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2035,	// (0x0002143c) fep_hwr_prediction_pane

0x77bb,	// (0x00026bc2) fep_vkb_prediction_pane

0xdf7f,	// (0x0002d386) fep_vkb_side_pane_g3_ParamLimits

0xdf7f,	// (0x0002d386) fep_vkb_side_pane_g3

0x786b,	// (0x00026c72) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ceb,	// (0x000270f2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7cf8,	// (0x000270ff) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0002efca) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x86f2,	// (0x00027af9) fep_hwr_prediction_pane_g1

0x2345,	// (0x0002174c) fep_hwr_prediction_pane_g2

0x234d,	// (0x00021754) fep_hwr_prediction_pane_g3

0x2355,	// (0x0002175c) fep_hwr_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002f0cd) fep_hwr_prediction_pane_g

0x86f2,	// (0x00027af9) fep_vkb_prediction_pane_g1

0x86fc,	// (0x00027b03) fep_vkb_prediction_pane_g2

0x8704,	// (0x00027b0b) fep_vkb_prediction_pane_g3

0x870c,	// (0x00027b13) fep_vkb_prediction_pane_g4

0x0003,

0xfccf,	// (0x0002f0d6) fep_vkb_prediction_pane_g

0x1e78,	// (0x0002127f) slider_set_pane_g3

0x1e8c,	// (0x00021293) slider_set_pane_g4

0x1ea4,	// (0x000212ab) slider_set_pane_g5

0x1e78,	// (0x0002127f) slider_set_pane_g6

0x1eba,	// (0x000212c1) slider_set_pane_g7

0x6560,	// (0x00025967) slider_form_pane_g3

0x6569,	// (0x00025970) slider_form_pane_g4

0x6571,	// (0x00025978) slider_form_pane_g5

0x6560,	// (0x00025967) slider_form_pane_g6

0xdacb,	// (0x0002ced2) slider_form_pane_g7

0x6ba4,	// (0x00025fab) slider_set_pane_vc_g3

0x6bad,	// (0x00025fb4) slider_set_pane_vc_g4

0x6bb6,	// (0x00025fbd) slider_set_pane_vc_g5

0x6ba4,	// (0x00025fab) slider_set_pane_vc_g6

0x6bbf,	// (0x00025fc6) slider_set_pane_vc_g7

0x6ba4,	// (0x00025fab) slider_form_pane_vc_g1

0x6bad,	// (0x00025fb4) slider_form_pane_vc_g2

0x6bb6,	// (0x00025fbd) slider_form_pane_vc_g3

0x6ba4,	// (0x00025fab) slider_form_pane_vc_g4

0x6d72,	// (0x00026179) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x0002eea4) slider_form_pane_vc_g

0x2bdf,	// (0x00021fe6) main_idle_act3_pane

0x8714,	// (0x00027b1b) ai3_links_pane

0xe1c3,	// (0x0002d5ca) popup_ai3_data_window_ParamLimits

0xe1c3,	// (0x0002d5ca) popup_ai3_data_window

0x2bdf,	// (0x00021fe6) grid_ai3_links_pane

0xe1dd,	// (0x0002d5e4) cell_ai3_links_pane_ParamLimits

0xe1dd,	// (0x0002d5e4) cell_ai3_links_pane

0x874f,	// (0x00027b56) bg_popup_sub_pane_cp11

0x875c,	// (0x00027b63) cell_ai3_links_pane_g1

0x2bdf,	// (0x00021fe6) bg_popup_sub_pane_cp12

0x8781,	// (0x00027b88) heading_ai3_data_pane

0x8789,	// (0x00027b90) list_ai3_gene_pane

0x8795,	// (0x00027b9c) popup_ai3_data_window_g1

0x879d,	// (0x00027ba4) heading_ai3_data_pane_g1

0x87a5,	// (0x00027bac) heading_ai3_data_pane_t1

0x87b3,	// (0x00027bba) list_double_ai3_gene_pane_ParamLimits

0x87b3,	// (0x00027bba) list_double_ai3_gene_pane

0x87c0,	// (0x00027bc7) list_single_ai3_gene_pane_ParamLimits

0x87c0,	// (0x00027bc7) list_single_ai3_gene_pane

0x759e,	// (0x000269a5) list_highlight_pane_cp7_ParamLimits

0x759e,	// (0x000269a5) list_highlight_pane_cp7

0x87cd,	// (0x00027bd4) list_single_a13_gene_pane_t1_ParamLimits

0x87cd,	// (0x00027bd4) list_single_a13_gene_pane_t1

0x87e4,	// (0x00027beb) list_single_ai3_gene_pane_g1

0x87ed,	// (0x00027bf4) list_single_ai3_gene_pane_g2

0x0001,

0xfcd8,	// (0x0002f0df) list_single_ai3_gene_pane_g

0x87f5,	// (0x00027bfc) list_double_ai3_gene_pane_g1_ParamLimits

0x87f5,	// (0x00027bfc) list_double_ai3_gene_pane_g1

0x8801,	// (0x00027c08) list_double_ai3_gene_pane_t1_ParamLimits

0x8801,	// (0x00027c08) list_double_ai3_gene_pane_t1

0x881d,	// (0x00027c24) list_double_ai3_gene_pane_t2_ParamLimits

0x881d,	// (0x00027c24) list_double_ai3_gene_pane_t2

0x8833,	// (0x00027c3a) list_double_ai3_gene_pane_t3_ParamLimits

0x8833,	// (0x00027c3a) list_double_ai3_gene_pane_t3

0x0002,

0xfcdd,	// (0x0002f0e4) list_double_ai3_gene_pane_t_ParamLimits

0xfcdd,	// (0x0002f0e4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fdc,	// (0x000203e3) aid_size_min_col_2

0xe1ad,	// (0x0002d5b4) aid_size_min_msg_ParamLimits

0xe1ad,	// (0x0002d5b4) aid_size_min_msg

0xdf93,	// (0x0002d39a) fep_vkb_top_text_pane_g2_ParamLimits

0xdf93,	// (0x0002d39a) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x0002ef50) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x0002ef50) fep_vkb_top_text_pane_g

0x2bdf,	// (0x00021fe6) main_hc_apps_shell_pane

0x8850,	// (0x00027c57) grid_hc_apps_pane_ParamLimits

0x8850,	// (0x00027c57) grid_hc_apps_pane

0x885f,	// (0x00027c66) list_hc_apps_pane

0x8867,	// (0x00027c6e) scroll_pane_cp37_ParamLimits

0x8867,	// (0x00027c6e) scroll_pane_cp37

0xe1f7,	// (0x0002d5fe) cell_hc_apps_pane_ParamLimits

0xe1f7,	// (0x0002d5fe) cell_hc_apps_pane

0xe2b5,	// (0x0002d6bc) cell_hc_apps_pane_g1_ParamLimits

0xe2b5,	// (0x0002d6bc) cell_hc_apps_pane_g1

0x8952,	// (0x00027d59) cell_hc_apps_pane_g2_ParamLimits

0x8952,	// (0x00027d59) cell_hc_apps_pane_g2

0x896e,	// (0x00027d75) cell_hc_apps_pane_g3_ParamLimits

0x896e,	// (0x00027d75) cell_hc_apps_pane_g3

0x0002,

0xfce4,	// (0x0002f0eb) cell_hc_apps_pane_g_ParamLimits

0xfce4,	// (0x0002f0eb) cell_hc_apps_pane_g

0xe2e2,	// (0x0002d6e9) cell_hc_apps_pane_t1_ParamLimits

0xe2e2,	// (0x0002d6e9) cell_hc_apps_pane_t1

0x2f5c,	// (0x00022363) grid_highlight_pane_cp10_ParamLimits

0x2f5c,	// (0x00022363) grid_highlight_pane_cp10

0xe320,	// (0x0002d727) list_single_hc_apps_pane_ParamLimits

0xe320,	// (0x0002d727) list_single_hc_apps_pane

0xe34d,	// (0x0002d754) list_single_hc_apps_pane_g1

0xbb7e,	// (0x0002af85) list_single_hc_apps_pane_g2

0x0001,

0xfceb,	// (0x0002f0f2) list_single_hc_apps_pane_g

0xbb97,	// (0x0002af9e) list_single_hc_apps_pane_g2_copy1

0xbbb3,	// (0x0002afba) list_single_hc_apps_pane_t1

0x2cd3,	// (0x000220da) bg_set_opt_pane_cp_ParamLimits

0x1520,	// (0x00020927) setting_slider_pane_t1_ParamLimits

0x1539,	// (0x00020940) setting_slider_pane_t2_ParamLimits

0x1553,	// (0x0002095a) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002e981) setting_slider_pane_t_ParamLimits

0x156b,	// (0x00020972) slider_set_pane_ParamLimits

0x1a90,	// (0x00020e97) control_pane_g5_ParamLimits

0x1a90,	// (0x00020e97) control_pane_g5

0x63af,	// (0x000257b6) slider_set_pane_g1_ParamLimits

0x1e6c,	// (0x00021273) slider_set_pane_g2_ParamLimits

0x1e78,	// (0x0002127f) slider_set_pane_g3_ParamLimits

0x1e8c,	// (0x00021293) slider_set_pane_g4_ParamLimits

0x1ea4,	// (0x000212ab) slider_set_pane_g5_ParamLimits

0x1e78,	// (0x0002127f) slider_set_pane_g6_ParamLimits

0x1eba,	// (0x000212c1) slider_set_pane_g7_ParamLimits

0xf970,	// (0x0002ed77) slider_set_pane_g_ParamLimits

0x4024,	// (0x0002342b) navi_icon_text_pane_ParamLimits

0xd311,	// (0x0002c718) aid_fill_nsta_2_ParamLimits

0xd345,	// (0x0002c74c) aid_touch_tab_arrow_left_ParamLimits

0xd35b,	// (0x0002c762) aid_touch_tab_arrow_right_ParamLimits

0xd41e,	// (0x0002c825) clock_nsta_pane_ParamLimits

0xd8a7,	// (0x0002ccae) navi_icon_pane_g1_ParamLimits

0xd8b3,	// (0x0002ccba) navi_text_pane_t1_ParamLimits

0xdd5d,	// (0x0002d164) navi_icon_text_pane_g1_ParamLimits

0xdd69,	// (0x0002d170) navi_icon_text_pane_t1_ParamLimits

0xe34d,	// (0x0002d754) list_single_hc_apps_pane_g1_ParamLimits

0xbb7e,	// (0x0002af85) list_single_hc_apps_pane_g2_ParamLimits

0xfceb,	// (0x0002f0f2) list_single_hc_apps_pane_g_ParamLimits

0xbb97,	// (0x0002af9e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbbb3,	// (0x0002afba) list_single_hc_apps_pane_t1_ParamLimits

0xbd4d,	// (0x0002b154) popup_toolbar2_fixed_window_ParamLimits

0xbd4d,	// (0x0002b154) popup_toolbar2_fixed_window

0xd27a,	// (0x0002c681) popup_toolbar2_float_window

0x2bdf,	// (0x00021fe6) bg_popup_sub_pane_cp27

0x8a45,	// (0x00027e4c) grid_toolbar2_float_pane

0x2bdf,	// (0x00021fe6) bg_popup_sub_pane_cp26

0x8a45,	// (0x00027e4c) grid_toolbar2_fixed_pane

0xe366,	// (0x0002d76d) cell_toolbar2_fixed_pane_ParamLimits

0xe366,	// (0x0002d76d) cell_toolbar2_fixed_pane

0xe381,	// (0x0002d788) cell_toolbar2_fixed_pane_g1

0x8a66,	// (0x00027e6d) toolbar2_fixed_button_pane

0x4fac,	// (0x000243b3) toolbar2_fixed_button_pane_g1

0x4fb4,	// (0x000243bb) toolbar2_fixed_button_pane_g2

0x4fbc,	// (0x000243c3) toolbar2_fixed_button_pane_g3

0x4fc4,	// (0x000243cb) toolbar2_fixed_button_pane_g4

0x4fcc,	// (0x000243d3) toolbar2_fixed_button_pane_g5

0x4fd4,	// (0x000243db) toolbar2_fixed_button_pane_g6

0x4fdc,	// (0x000243e3) toolbar2_fixed_button_pane_g7

0x4fe4,	// (0x000243eb) toolbar2_fixed_button_pane_g8

0x4fec,	// (0x000243f3) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x0002ec79) toolbar2_fixed_button_pane_g

0x8a6e,	// (0x00027e75) cell_toolbar2_float_pane_ParamLimits

0x8a6e,	// (0x00027e75) cell_toolbar2_float_pane

0x8a7f,	// (0x00027e86) cell_toolbar2_float_pane_g1

0x8a66,	// (0x00027e6d) toolbar2_fixed_button_pane_cp

0xde6d,	// (0x0002d274) fep_vkb_accented_list_pane_ParamLimits

0xde6d,	// (0x0002d274) fep_vkb_accented_list_pane

0x2206,	// (0x0002160d) bg_popup_fep_shadow_pane_g9

0x41a4,	// (0x000235ab) bg_popup_fep_shadow_pane_cp3

0x36a0,	// (0x00022aa7) list_accented_list_pane

0x8a88,	// (0x00027e8f) list_single_accented_list_pane_ParamLimits

0x8a88,	// (0x00027e8f) list_single_accented_list_pane

0x41a4,	// (0x000235ab) list_highlight_pane_cp10

0x8a99,	// (0x00027ea0) list_single_accented_list_pane_t1

0xd1a4,	// (0x0002c5ab) popup_slider_window_ParamLimits

0xd1a4,	// (0x0002c5ab) popup_slider_window

0x86d5,	// (0x00027adc) aid_indentation_list_msg

0xe47a,	// (0x0002d881) bg_popup_window_pane_cp19

0x8bbd,	// (0x00027fc4) popup_slider_window_g1

0x8bd9,	// (0x00027fe0) popup_slider_window_g2

0x8bf5,	// (0x00027ffc) popup_slider_window_g3

0x0005,

0xfcf0,	// (0x0002f0f7) popup_slider_window_g

0x8c51,	// (0x00028058) popup_slider_window_t1

0x8cc5,	// (0x000280cc) small_volume_slider_vertical_pane

0x75d9,	// (0x000269e0) small_volume_slider_vertical_pane_g1

0x75d9,	// (0x000269e0) small_volume_slider_vertical_pane_g2

0x8ce1,	// (0x000280e8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd02,	// (0x0002f109) small_volume_slider_vertical_pane_g

0xbcbb,	// (0x0002b0c2) area_side_right_pane_ParamLimits

0xbcbb,	// (0x0002b0c2) area_side_right_pane

0xc4cc,	// (0x0002b8d3) aid_size_side_button_ParamLimits

0xc4cc,	// (0x0002b8d3) aid_size_side_button

0xc4e5,	// (0x0002b8ec) grid_sctrl_middle_pane_ParamLimits

0xc4e5,	// (0x0002b8ec) grid_sctrl_middle_pane

0x2391,	// (0x00021798) sctrl_sk_bottom_pane

0x23a2,	// (0x000217a9) sctrl_sk_top_pane

0x23b4,	// (0x000217bb) aid_touch_sctrl_top

0x2f5c,	// (0x00022363) bg_sctrl_sk_pane_ParamLimits

0x2f5c,	// (0x00022363) bg_sctrl_sk_pane

0x23c1,	// (0x000217c8) sctrl_sk_top_pane_g1

0x23ce,	// (0x000217d5) sctrl_sk_top_pane_t1

0x23b4,	// (0x000217bb) aid_touch_sctrl_bottom

0x2f5c,	// (0x00022363) bg_sctrl_sk_pane_cp_ParamLimits

0x2f5c,	// (0x00022363) bg_sctrl_sk_pane_cp

0x23e9,	// (0x000217f0) sctrl_sk_bottom_pane_g1

0x23ce,	// (0x000217d5) sctrl_sk_bottom_pane_t1

0xc4ff,	// (0x0002b906) cell_sctrl_middle_pane_ParamLimits

0xc4ff,	// (0x0002b906) cell_sctrl_middle_pane

0xc510,	// (0x0002b917) aid_touch_sctrl_middle_ParamLimits

0xc510,	// (0x0002b917) aid_touch_sctrl_middle

0xc51d,	// (0x0002b924) bg_sctrl_middle_pane_ParamLimits

0xc51d,	// (0x0002b924) bg_sctrl_middle_pane

0x8d69,	// (0x00028170) cell_sctrl_middle_pane_g1_ParamLimits

0x8d69,	// (0x00028170) cell_sctrl_middle_pane_g1

0xc52b,	// (0x0002b932) cell_sctrl_middle_pane_g2_ParamLimits

0xc52b,	// (0x0002b932) cell_sctrl_middle_pane_g2

0x0001,

0xfd0e,	// (0x0002f115) cell_sctrl_middle_pane_g_ParamLimits

0xfd0e,	// (0x0002f115) cell_sctrl_middle_pane_g

0x4fac,	// (0x000243b3) bg_sctrl_middle_pane_g1

0x4fb4,	// (0x000243bb) bg_sctrl_middle_pane_g2

0x4fbc,	// (0x000243c3) bg_sctrl_middle_pane_g3

0x4fc4,	// (0x000243cb) bg_sctrl_middle_pane_g4

0x4fcc,	// (0x000243d3) bg_sctrl_middle_pane_g5

0x4fd4,	// (0x000243db) bg_sctrl_middle_pane_g6

0x4fdc,	// (0x000243e3) bg_sctrl_middle_pane_g7

0x4fe4,	// (0x000243eb) bg_sctrl_middle_pane_g8

0x0007,

0xfd13,	// (0x0002f11a) bg_sctrl_middle_pane_g

0x4fec,	// (0x000243f3) bg_sctrl_middle_pane_g8_copy1

0x4fac,	// (0x000243b3) bg_sctrl_sk_pane_g1

0x4fb4,	// (0x000243bb) bg_sctrl_sk_pane_g2

0x4fbc,	// (0x000243c3) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x0002ec79) bg_sctrl_sk_pane_g

0x346e,	// (0x00022875) aid_size_touch_scroll_bar

0x4fc4,	// (0x000243cb) bg_sctrl_sk_pane_g4

0x4fcc,	// (0x000243d3) bg_sctrl_sk_pane_g5

0x4fd4,	// (0x000243db) bg_sctrl_sk_pane_g6

0x4fdc,	// (0x000243e3) bg_sctrl_sk_pane_g7

0x4fe4,	// (0x000243eb) bg_sctrl_sk_pane_g8

0x4fec,	// (0x000243f3) bg_sctrl_sk_pane_g9

0x45aa,	// (0x000239b1) popup_fep_china_hwr2_fs_candidate_window

0xcce8,	// (0x0002c0ef) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcce8,	// (0x0002c0ef) popup_fep_china_hwr2_fs_control_window

0x786b,	// (0x00026c72) sctrl_sk_top_pane_g2

0x0001,

0xfd09,	// (0x0002f110) sctrl_sk_top_pane_g

0xe532,	// (0x0002d939) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe532,	// (0x0002d939) aid_fep_china_hwr2_fs_cell

0xe546,	// (0x0002d94d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe546,	// (0x0002d94d) bg_popup_fep_shadow_pane_cp4

0xe55d,	// (0x0002d964) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe55d,	// (0x0002d964) bg_popup_fep_shadow_pane_cp5

0xe56f,	// (0x0002d976) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe56f,	// (0x0002d976) popup_fep_china_hwr2_fs_control_bar_grid

0xe583,	// (0x0002d98a) popup_fep_china_hwr2_fs_control_funtion_grid

0x8d3d,	// (0x00028144) aid_fep_china_hwr2_fs_candi_cell

0x2bdf,	// (0x00021fe6) bg_popup_fep_shadow_pane_cp6

0x8d47,	// (0x0002814e) popup_fep_china_hwr2_fs_candidate_grid

0xe58b,	// (0x0002d992) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe58b,	// (0x0002d992) cell_fep_china_hwr2_fs_funtion_grid

0x75d9,	// (0x000269e0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8d69,	// (0x00028170) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8d69,	// (0x00028170) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8d77,	// (0x0002817e) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8d77,	// (0x0002817e) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd24,	// (0x0002f12b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd24,	// (0x0002f12b) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5a3,	// (0x0002d9aa) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5a3,	// (0x0002d9aa) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5b8,	// (0x0002d9bf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5b8,	// (0x0002d9bf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd29,	// (0x0002f130) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd29,	// (0x0002f130) cell_fep_china_hwr2_fs_funtion_grid_t

0x8dbe,	// (0x000281c5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8dc6,	// (0x000281cd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8dce,	// (0x000281d5) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2e,	// (0x0002f135) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8dd6,	// (0x000281dd) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8dd6,	// (0x000281dd) cell_fep_china_hwr2_fs_candidate_grid

0x8def,	// (0x000281f6) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8df7,	// (0x000281fe) popup_fep_china_hwr2_fs_candidate_grid_g21

0x75d9,	// (0x000269e0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x75d9,	// (0x000269e0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x0002ef55) cell_fep_china_hwr2_fs_candidate_grid_g

0x8dff,	// (0x00028206) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4b9d,	// (0x00023fa4) clock_nsta_pane_cp_24_ParamLimits

0x4b9d,	// (0x00023fa4) clock_nsta_pane_cp_24

0x4c1b,	// (0x00024022) indicator_nsta_pane_cp_24_ParamLimits

0x4c1b,	// (0x00024022) indicator_nsta_pane_cp_24

0x5d05,	// (0x0002510c) heading_pane_g1

0x0001,

0xf8d7,	// (0x0002ecde) heading_pane_g

0x6730,	// (0x00025b37) grid_sct_catagory_button_pane

0x6760,	// (0x00025b67) scroll_pane_cp5_ParamLimits

0x71ca,	// (0x000265d1) button_value_adjust_pane_cp5_ParamLimits

0x71ca,	// (0x000265d1) button_value_adjust_pane_cp5

0x72a9,	// (0x000266b0) form2_midp_time_pane_ParamLimits

0x8e0d,	// (0x00028214) cell_sct_catagory_button_pane_ParamLimits

0x8e0d,	// (0x00028214) cell_sct_catagory_button_pane

0x759e,	// (0x000269a5) bg_button_pane_cp01_ParamLimits

0x759e,	// (0x000269a5) bg_button_pane_cp01

0x75d9,	// (0x000269e0) cell_sct_catagory_button_pane_g1

0xd21d,	// (0x0002c624) popup_tb_extension_window

0xe5d4,	// (0x0002d9db) aid_size_cell_ext_ParamLimits

0xe5d4,	// (0x0002d9db) aid_size_cell_ext

0x32b0,	// (0x000226b7) bg_tb_trans_pane_cp1_ParamLimits

0x32b0,	// (0x000226b7) bg_tb_trans_pane_cp1

0xe5fa,	// (0x0002da01) grid_tb_ext_pane_ParamLimits

0xe5fa,	// (0x0002da01) grid_tb_ext_pane

0xe635,	// (0x0002da3c) cell_tb_ext_pane_ParamLimits

0xe635,	// (0x0002da3c) cell_tb_ext_pane

0xe65d,	// (0x0002da64) cell_tb_ext_pane_g1_ParamLimits

0xe65d,	// (0x0002da64) cell_tb_ext_pane_g1

0x8ea1,	// (0x000282a8) cell_tb_ext_pane_t1

0x2f5c,	// (0x00022363) list_highlight_pane_cp11_ParamLimits

0x2f5c,	// (0x00022363) list_highlight_pane_cp11

0x1453,	// (0x0002085a) popup_uni_indicator_window_ParamLimits

0x1453,	// (0x0002085a) popup_uni_indicator_window

0x353f,	// (0x00022946) bg_popup_sub_pane_cp14

0x8ebc,	// (0x000282c3) list_uniindi_pane

0x8ec8,	// (0x000282cf) uniindi_top_pane

0x2f5c,	// (0x00022363) bg_uniindi_top_pane

0x8ee7,	// (0x000282ee) uniindi_top_pane_g1

0x8efd,	// (0x00028304) uniindi_top_pane_g2

0x0003,

0xfd35,	// (0x0002f13c) uniindi_top_pane_g

0x8f27,	// (0x0002832e) uniindi_top_pane_t1

0x8f51,	// (0x00028358) list_single_uniindi_pane_ParamLimits

0x8f51,	// (0x00028358) list_single_uniindi_pane

0x75d9,	// (0x000269e0) bg_uniindi_top_pane_g1

0x8f64,	// (0x0002836b) list_single_uniindi_pane_g1

0x8f77,	// (0x0002837e) list_single_uniindi_pane_t1

0x2bdf,	// (0x00021fe6) control_bg_pane

0x8f9c,	// (0x000283a3) bg_sctrl_sk_pane_cp1

0x8fa5,	// (0x000283ac) bg_sctrl_sk_pane_cp2

0x8fae,	// (0x000283b5) control_bg_pane_g1

0x8fb7,	// (0x000283be) control_bg_pane_g2

0x0001,

0xfd3e,	// (0x0002f145) control_bg_pane_g

0x6ffe,	// (0x00026405) cell_indicator_nsta_pane_g1_ParamLimits

0xdcc4,	// (0x0002d0cb) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x0002eeb9) cell_indicator_nsta_pane_g_ParamLimits

0x0d99,	// (0x000201a0) form2_midp_time_pane_t1_ParamLimits

0xcc65,	// (0x0002c06c) main_idle_act4_pane_ParamLimits

0xcc65,	// (0x0002c06c) main_idle_act4_pane

0xd21d,	// (0x0002c624) popup_tb_extension_window_ParamLimits

0xe61c,	// (0x0002da23) tb_ext_find_pane_ParamLimits

0xe61c,	// (0x0002da23) tb_ext_find_pane

0x8fc0,	// (0x000283c7) ai_gene_pane_1_cp1

0x42e9,	// (0x000236f0) ai_gene_pane_2_cp1

0x8fc8,	// (0x000283cf) list_single_idle_plugin_calendar_pane

0x8fd1,	// (0x000283d8) list_single_idle_plugin_notification_pane

0x8fda,	// (0x000283e1) list_single_idle_plugin_player_pane

0xe67a,	// (0x0002da81) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe67a,	// (0x0002da81) list_single_idle_plugin_shortcut_pane

0xe6a2,	// (0x0002daa9) main_idle_act4_pane_t1

0xe6b8,	// (0x0002dabf) main_idle_act4_pane_t2

0x0001,

0xfd43,	// (0x0002f14a) main_idle_act4_pane_t

0xe6ce,	// (0x0002dad5) middle_sk_idle_act4_pane_ParamLimits

0xe6ce,	// (0x0002dad5) middle_sk_idle_act4_pane

0xe6ea,	// (0x0002daf1) popup_clock_digital_analogue_window_cp2

0xe712,	// (0x0002db19) shortcut_wheel_idle_act4_pane_ParamLimits

0xe712,	// (0x0002db19) shortcut_wheel_idle_act4_pane

0x75d9,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g1

0x75d9,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g2

0x75d9,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g3

0x75d9,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g4

0x75d9,	// (0x000269e0) shortcut_wheel_idle_act4_pane_g5

0x906d,	// (0x00028474) shortcut_wheel_idle_act4_pane_g6

0x9075,	// (0x0002847c) shortcut_wheel_idle_act4_pane_g7

0x907d,	// (0x00028484) shortcut_wheel_idle_act4_pane_g8

0x9085,	// (0x0002848c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd48,	// (0x0002f14f) shortcut_wheel_idle_act4_pane_g

0xd3ce,	// (0x0002c7d5) middle_sk_idle_act4_pane_g1_ParamLimits

0xd3ce,	// (0x0002c7d5) middle_sk_idle_act4_pane_g1

0xe78f,	// (0x0002db96) middle_sk_idle_act4_pane_g2_ParamLimits

0xe78f,	// (0x0002db96) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6b,	// (0x0002f172) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6b,	// (0x0002f172) middle_sk_idle_act4_pane_g

0xe7a7,	// (0x0002dbae) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7a7,	// (0x0002dbae) middle_sk_idle_act4_pane_t1

0xe7d6,	// (0x0002dbdd) grid_ai_shortcut_pane_ParamLimits

0xe7d6,	// (0x0002dbdd) grid_ai_shortcut_pane

0xe7f3,	// (0x0002dbfa) list_highlight_pane_cp16_ParamLimits

0xe7f3,	// (0x0002dbfa) list_highlight_pane_cp16

0xe800,	// (0x0002dc07) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe800,	// (0x0002dc07) list_single_idle_plugin_shortcut_pane_g1

0xe80c,	// (0x0002dc13) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe80c,	// (0x0002dc13) list_single_idle_plugin_shortcut_pane_g2

0xe828,	// (0x0002dc2f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe828,	// (0x0002dc2f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd70,	// (0x0002f177) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd70,	// (0x0002f177) list_single_idle_plugin_shortcut_pane_g

0xe83d,	// (0x0002dc44) cell_ai_shortcut_pane_ParamLimits

0xe83d,	// (0x0002dc44) cell_ai_shortcut_pane

0xe853,	// (0x0002dc5a) cell_ai_shortcut_pane_g1_ParamLimits

0xe853,	// (0x0002dc5a) cell_ai_shortcut_pane_g1

0x8fc0,	// (0x000283c7) ai_gene_pane_1_cp2

0x91b5,	// (0x000285bc) ai_gene_pane_2_cp2

0x91bd,	// (0x000285c4) list_highlight_pane_cp15

0x91c6,	// (0x000285cd) list_single_idle_plugin_calendar_pane_g1

0x91bd,	// (0x000285c4) list_highlight_pane_cp17

0x91ce,	// (0x000285d5) list_single_idle_plugin_calendar_pane_g1_copy1

0x91d6,	// (0x000285dd) list_single_idle_plugin_player_pane_g1

0x6989,	// (0x00025d90) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd77,	// (0x0002f17e) list_single_idle_plugin_player_pane_g

0x91de,	// (0x000285e5) list_single_idle_plugin_player_pane_t1

0x91ec,	// (0x000285f3) list_single_idle_plugin_player_pane_t2

0x91fa,	// (0x00028601) list_single_idle_plugin_player_pane_t3

0x9208,	// (0x0002860f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7c,	// (0x0002f183) list_single_idle_plugin_player_pane_t

0x9216,	// (0x0002861d) wait_bar_pane_cp15

0x921e,	// (0x00028625) grid_ai_notification_pane

0x6989,	// (0x00025d90) list_single_idle_plugin_notification_pane_g1

0xe875,	// (0x0002dc7c) cell_ai_notification_pane_ParamLimits

0xe875,	// (0x0002dc7c) cell_ai_notification_pane

0x9234,	// (0x0002863b) cell_ai_notification_pane_g1

0x923c,	// (0x00028643) cell_ai_notification_pane_t1

0xe882,	// (0x0002dc89) tb_ext_find_button_pane

0xe88a,	// (0x0002dc91) tb_ext_find_pane_g1

0xe892,	// (0x0002dc99) tb_ext_find_pane_t1

0x3ba5,	// (0x00022fac) tb_ext_find_button_pane_g1

0x9268,	// (0x0002866f) tb_ext_find_button_pane_g2

0x0001,

0xfd85,	// (0x0002f18c) tb_ext_find_button_pane_g

0xe6a2,	// (0x0002daa9) main_idle_act4_pane_t1_ParamLimits

0xe6b8,	// (0x0002dabf) main_idle_act4_pane_t2_ParamLimits

0xfd43,	// (0x0002f14a) main_idle_act4_pane_t_ParamLimits

0xe6ea,	// (0x0002daf1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe702,	// (0x0002db09) sat_plugin_idle_act4_pane_ParamLimits

0xe702,	// (0x0002db09) sat_plugin_idle_act4_pane

0xe8a0,	// (0x0002dca7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8a0,	// (0x0002dca7) sat_plugin_idle_act4_pane_t1

0xe8b8,	// (0x0002dcbf) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8b8,	// (0x0002dcbf) sat_plugin_idle_act4_pane_t2

0xe8d0,	// (0x0002dcd7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8d0,	// (0x0002dcd7) sat_plugin_idle_act4_pane_t3

0xe8e8,	// (0x0002dcef) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8e8,	// (0x0002dcef) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8a,	// (0x0002f191) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8a,	// (0x0002f191) sat_plugin_idle_act4_pane_t

0x138e,	// (0x00020795) popup_battery_window_ParamLimits

0x138e,	// (0x00020795) popup_battery_window

0x2f5c,	// (0x00022363) bg_popup_sub_pane_cp25_ParamLimits

0x2f5c,	// (0x00022363) bg_popup_sub_pane_cp25

0x92bd,	// (0x000286c4) popup_battery_window_g1_ParamLimits

0x92bd,	// (0x000286c4) popup_battery_window_g1

0x92c9,	// (0x000286d0) popup_battery_window_t1_ParamLimits

0x92c9,	// (0x000286d0) popup_battery_window_t1

0x92db,	// (0x000286e2) popup_battery_window_t2_ParamLimits

0x92db,	// (0x000286e2) popup_battery_window_t2

0x0001,

0xfd93,	// (0x0002f19a) popup_battery_window_t_ParamLimits

0xfd93,	// (0x0002f19a) popup_battery_window_t

0xcb59,	// (0x0002bf60) midp_canvas_pane_ParamLimits

0xcbb4,	// (0x0002bfbb) midp_keypad_pane_ParamLimits

0xcbb4,	// (0x0002bfbb) midp_keypad_pane

0x450a,	// (0x00023911) main_midp_pane_ParamLimits

0x708a,	// (0x00026491) signal_pane_g2_cp_ParamLimits

0xe900,	// (0x0002dd07) aid_size_cell_midp_keypad_ParamLimits

0xe900,	// (0x0002dd07) aid_size_cell_midp_keypad

0xe91e,	// (0x0002dd25) midp_keyp_game_grid_pane_ParamLimits

0xe91e,	// (0x0002dd25) midp_keyp_game_grid_pane

0xe945,	// (0x0002dd4c) midp_keyp_rocker_pane_ParamLimits

0xe945,	// (0x0002dd4c) midp_keyp_rocker_pane

0xe99e,	// (0x0002dda5) midp_keyp_sk_left_pane_ParamLimits

0xe99e,	// (0x0002dda5) midp_keyp_sk_left_pane

0xe9f2,	// (0x0002ddf9) midp_keyp_sk_right_pane_ParamLimits

0xe9f2,	// (0x0002ddf9) midp_keyp_sk_right_pane

0x2bdf,	// (0x00021fe6) bg_button_pane_cp03

0xea46,	// (0x0002de4d) midp_keyp_sk_left_pane_g1

0x2bdf,	// (0x00021fe6) bg_button_pane_cp04

0xea46,	// (0x0002de4d) midp_keyp_sk_right_pane_g1

0x75d9,	// (0x000269e0) midp_keyp_rocker_pane_g1

0xea4f,	// (0x0002de56) keyp_game_cell_pane_ParamLimits

0xea4f,	// (0x0002de56) keyp_game_cell_pane

0x2bdf,	// (0x00021fe6) bg_button_pane_cp02

0xea73,	// (0x0002de7a) keyp_game_cell_pane_g1

0xbcfd,	// (0x0002b104) popup_fep_vkb2_window_ParamLimits

0xbcfd,	// (0x0002b104) popup_fep_vkb2_window

0xc537,	// (0x0002b93e) aid_size_cell_vkb2_ParamLimits

0xc537,	// (0x0002b93e) aid_size_cell_vkb2

0xc56d,	// (0x0002b974) popup_fep_vkb2_window_g1_ParamLimits

0xc56d,	// (0x0002b974) popup_fep_vkb2_window_g1

0xc5bd,	// (0x0002b9c4) vkb2_area_bottom_pane_ParamLimits

0xc5bd,	// (0x0002b9c4) vkb2_area_bottom_pane

0xc611,	// (0x0002ba18) vkb2_area_keypad_pane_ParamLimits

0xc611,	// (0x0002ba18) vkb2_area_keypad_pane

0xc659,	// (0x0002ba60) vkb2_area_top_pane_ParamLimits

0xc659,	// (0x0002ba60) vkb2_area_top_pane

0xc6df,	// (0x0002bae6) vkb2_top_entry_pane_ParamLimits

0xc6df,	// (0x0002bae6) vkb2_top_entry_pane

0xc70c,	// (0x0002bb13) vkb2_top_grid_left_pane_ParamLimits

0xc70c,	// (0x0002bb13) vkb2_top_grid_left_pane

0xc72c,	// (0x0002bb33) vkb2_top_grid_right_pane_ParamLimits

0xc72c,	// (0x0002bb33) vkb2_top_grid_right_pane

0x2647,	// (0x00021a4e) vkb2_cell_keypad_pane_ParamLimits

0x2647,	// (0x00021a4e) vkb2_cell_keypad_pane

0xc772,	// (0x0002bb79) vkb2_area_bottom_grid_pane_ParamLimits

0xc772,	// (0x0002bb79) vkb2_area_bottom_grid_pane

0xc79c,	// (0x0002bba3) vkb2_area_bottom_pane_g1_ParamLimits

0xc79c,	// (0x0002bba3) vkb2_area_bottom_pane_g1

0xc7c2,	// (0x0002bbc9) vkb2_area_bottom_pane_g2_ParamLimits

0xc7c2,	// (0x0002bbc9) vkb2_area_bottom_pane_g2

0xc7f3,	// (0x0002bbfa) vkb2_area_bottom_pane_g3_ParamLimits

0xc7f3,	// (0x0002bbfa) vkb2_area_bottom_pane_g3

0x0002,

0xfd98,	// (0x0002f19f) vkb2_area_bottom_pane_g_ParamLimits

0xfd98,	// (0x0002f19f) vkb2_area_bottom_pane_g

0x27f1,	// (0x00021bf8) vkb2_top_cell_left_pane_ParamLimits

0x27f1,	// (0x00021bf8) vkb2_top_cell_left_pane

0xea7c,	// (0x0002de83) vkb2_top_entry_pane_g1_ParamLimits

0xea7c,	// (0x0002de83) vkb2_top_entry_pane_g1

0xea8a,	// (0x0002de91) vkb2_top_entry_pane_t1_ParamLimits

0xea8a,	// (0x0002de91) vkb2_top_entry_pane_t1

0x948c,	// (0x00028893) vkb2_top_entry_pane_t2_ParamLimits

0x948c,	// (0x00028893) vkb2_top_entry_pane_t2

0x94be,	// (0x000288c5) vkb2_top_entry_pane_t3_ParamLimits

0x94be,	// (0x000288c5) vkb2_top_entry_pane_t3

0x0002,

0xfd9f,	// (0x0002f1a6) vkb2_top_entry_pane_t_ParamLimits

0xfd9f,	// (0x0002f1a6) vkb2_top_entry_pane_t

0xc85d,	// (0x0002bc64) vkb2_top_grid_right_pane_g1_ParamLimits

0xc85d,	// (0x0002bc64) vkb2_top_grid_right_pane_g1

0x2854,	// (0x00021c5b) vkb2_top_grid_right_pane_g2_ParamLimits

0x2854,	// (0x00021c5b) vkb2_top_grid_right_pane_g2

0x286c,	// (0x00021c73) vkb2_top_grid_right_pane_g3_ParamLimits

0x286c,	// (0x00021c73) vkb2_top_grid_right_pane_g3

0xc873,	// (0x0002bc7a) vkb2_top_grid_right_pane_g4_ParamLimits

0xc873,	// (0x0002bc7a) vkb2_top_grid_right_pane_g4

0x0003,

0xfda6,	// (0x0002f1ad) vkb2_top_grid_right_pane_g_ParamLimits

0xfda6,	// (0x0002f1ad) vkb2_top_grid_right_pane_g

0x289a,	// (0x00021ca1) vkb2_top_cell_left_pane_g1

0x28b1,	// (0x00021cb8) vkb2_cell_keypad_pane_g1_ParamLimits

0x28b1,	// (0x00021cb8) vkb2_cell_keypad_pane_g1

0x94e2,	// (0x000288e9) vkb2_cell_keypad_pane_t1_ParamLimits

0x94e2,	// (0x000288e9) vkb2_cell_keypad_pane_t1

0x28bf,	// (0x00021cc6) vkb2_cell_bottom_grid_pane_ParamLimits

0x28bf,	// (0x00021cc6) vkb2_cell_bottom_grid_pane

0x28f8,	// (0x00021cff) vkb2_cell_bottom_grid_pane_g1

0xe733,	// (0x0002db3a) aid_call2_pane_cp02

0xe73b,	// (0x0002db42) aid_call_pane_cp02

0xe743,	// (0x0002db4a) clock_digital_number_pane_cp10

0xe74b,	// (0x0002db52) clock_digital_number_pane_cp11

0xe753,	// (0x0002db5a) clock_digital_number_pane_cp12

0xe75b,	// (0x0002db62) clock_digital_number_pane_cp13

0xe763,	// (0x0002db6a) clock_digital_separator_pane_cp10

0x3ba5,	// (0x00022fac) popup_clock_digital_analogue_window_cp2_g1

0x3ba5,	// (0x00022fac) popup_clock_digital_analogue_window_cp2_g2

0xe76b,	// (0x0002db72) popup_clock_digital_analogue_window_cp2_g3

0x3ba5,	// (0x00022fac) popup_clock_digital_analogue_window_cp2_g4

0xe76b,	// (0x0002db72) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5b,	// (0x0002f162) popup_clock_digital_analogue_window_cp2_g

0xe773,	// (0x0002db7a) popup_clock_digital_analogue_window_cp2_t1

0xe781,	// (0x0002db88) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd66,	// (0x0002f16d) popup_clock_digital_analogue_window_cp2_t

0x75d9,	// (0x000269e0) clock_digital_number_pane_cp10_g1

0x75d9,	// (0x000269e0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002ef55) clock_digital_number_pane_cp10_g

0x75d9,	// (0x000269e0) clock_digital_separator_pane_cp10_g1

0x75d9,	// (0x000269e0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x0002ef55) clock_digital_separator_pane_cp10_g

0x8f09,	// (0x00028310) uniindi_top_pane_g3

0x8f1a,	// (0x00028321) uniindi_top_pane_g4

0x26d2,	// (0x00021ad9) vkb2_row_keypad_pane_ParamLimits

0x26d2,	// (0x00021ad9) vkb2_row_keypad_pane

0x2914,	// (0x00021d1b) vkb2_cell_t_keypad_pane_ParamLimits

0x2914,	// (0x00021d1b) vkb2_cell_t_keypad_pane

0x2924,	// (0x00021d2b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2924,	// (0x00021d2b) vkb2_cell_t_keypad_pane_cp08

0x2937,	// (0x00021d3e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2937,	// (0x00021d3e) vkb2_cell_t_keypad_pane_cp09

0x294b,	// (0x00021d52) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x294b,	// (0x00021d52) vkb2_cell_t_keypad_pane_cp01

0x295c,	// (0x00021d63) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x295c,	// (0x00021d63) vkb2_cell_t_keypad_pane_cp02

0x296d,	// (0x00021d74) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x296d,	// (0x00021d74) vkb2_cell_t_keypad_pane_cp03

0x297e,	// (0x00021d85) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x297e,	// (0x00021d85) vkb2_cell_t_keypad_pane_cp04

0x298f,	// (0x00021d96) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x298f,	// (0x00021d96) vkb2_cell_t_keypad_pane_cp05

0x29a0,	// (0x00021da7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x29a0,	// (0x00021da7) vkb2_cell_t_keypad_pane_cp06

0x29b1,	// (0x00021db8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x29b1,	// (0x00021db8) vkb2_cell_t_keypad_pane_cp07

0x29c2,	// (0x00021dc9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x29c2,	// (0x00021dc9) vkb2_cell_t_keypad_pane_cp10

0x786b,	// (0x00026c72) vkb2_cell_t_keypad_pane_g1

0x94f9,	// (0x00028900) vkb2_cell_t_keypad_pane_t1

0x2bdf,	// (0x00021fe6) popup_grid_graphic2_window

0xeac3,	// (0x0002deca) aid_size_cell_graphic2_ParamLimits

0xeac3,	// (0x0002deca) aid_size_cell_graphic2

0xeb01,	// (0x0002df08) bg_popup_window_pane_cp21_ParamLimits

0xeb01,	// (0x0002df08) bg_popup_window_pane_cp21

0xeb0f,	// (0x0002df16) graphic2_pages_pane_ParamLimits

0xeb0f,	// (0x0002df16) graphic2_pages_pane

0xeb65,	// (0x0002df6c) grid_graphic2_control_pane_ParamLimits

0xeb65,	// (0x0002df6c) grid_graphic2_control_pane

0xebad,	// (0x0002dfb4) grid_graphic2_pane_ParamLimits

0xebad,	// (0x0002dfb4) grid_graphic2_pane

0xec34,	// (0x0002e03b) cell_graphic2_pane

0x2bdf,	// (0x00021fe6) main_comp_mode_pane

0x8789,	// (0x00027b90) list_ai3_gene_pane_ParamLimits

0xe47a,	// (0x0002d881) bg_popup_window_pane_cp19_ParamLimits

0x8b5f,	// (0x00027f66) bg_touch_area_indi_pane_ParamLimits

0x8b5f,	// (0x00027f66) bg_touch_area_indi_pane

0x8b75,	// (0x00027f7c) bg_touch_area_indi_pane_cp01_ParamLimits

0x8b75,	// (0x00027f7c) bg_touch_area_indi_pane_cp01

0x8b8b,	// (0x00027f92) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b8b,	// (0x00027f92) bg_touch_area_indi_pane_cp02

0x8ba3,	// (0x00027faa) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ba3,	// (0x00027faa) bg_touch_area_indi_pane_cp03

0x8bbd,	// (0x00027fc4) popup_slider_window_g1_ParamLimits

0x8bd9,	// (0x00027fe0) popup_slider_window_g2_ParamLimits

0x8bf5,	// (0x00027ffc) popup_slider_window_g3_ParamLimits

0xfcf0,	// (0x0002f0f7) popup_slider_window_g_ParamLimits

0x8c51,	// (0x00028058) popup_slider_window_t1_ParamLimits

0x8cc5,	// (0x000280cc) small_volume_slider_vertical_pane_ParamLimits

0xec34,	// (0x0002e03b) cell_graphic2_pane_ParamLimits

0xec91,	// (0x0002e098) bg_button_pane_cp10_ParamLimits

0xec91,	// (0x0002e098) bg_button_pane_cp10

0xeca4,	// (0x0002e0ab) bg_button_pane_cp11_ParamLimits

0xeca4,	// (0x0002e0ab) bg_button_pane_cp11

0xecb7,	// (0x0002e0be) graphic2_pages_pane_g1_ParamLimits

0xecb7,	// (0x0002e0be) graphic2_pages_pane_g1

0xecd2,	// (0x0002e0d9) graphic2_pages_pane_g2_ParamLimits

0xecd2,	// (0x0002e0d9) graphic2_pages_pane_g2

0x0001,

0xfdb4,	// (0x0002f1bb) graphic2_pages_pane_g_ParamLimits

0xfdb4,	// (0x0002f1bb) graphic2_pages_pane_g

0xecea,	// (0x0002e0f1) graphic2_pages_pane_t1_ParamLimits

0xecea,	// (0x0002e0f1) graphic2_pages_pane_t1

0xed02,	// (0x0002e109) cell_graphic2_control_pane_ParamLimits

0xed02,	// (0x0002e109) cell_graphic2_control_pane

0xed34,	// (0x0002e13b) cell_graphic2_pane_g1_ParamLimits

0xed34,	// (0x0002e13b) cell_graphic2_pane_g1

0xd3dc,	// (0x0002c7e3) cell_graphic2_pane_g2_ParamLimits

0xd3dc,	// (0x0002c7e3) cell_graphic2_pane_g2

0xed41,	// (0x0002e148) cell_graphic2_pane_g3_ParamLimits

0xed41,	// (0x0002e148) cell_graphic2_pane_g3

0xd3e9,	// (0x0002c7f0) cell_graphic2_pane_g4_ParamLimits

0xd3e9,	// (0x0002c7f0) cell_graphic2_pane_g4

0xed4e,	// (0x0002e155) cell_graphic2_pane_g5_ParamLimits

0xed4e,	// (0x0002e155) cell_graphic2_pane_g5

0x0004,

0xfdb9,	// (0x0002f1c0) cell_graphic2_pane_g_ParamLimits

0xfdb9,	// (0x0002f1c0) cell_graphic2_pane_g

0xed6e,	// (0x0002e175) cell_graphic2_pane_t1_ParamLimits

0xed6e,	// (0x0002e175) cell_graphic2_pane_t1

0x5cf9,	// (0x00025100) grid_highlight_pane_cp11_ParamLimits

0x5cf9,	// (0x00025100) grid_highlight_pane_cp11

0x2f5c,	// (0x00022363) bg_button_pane_cp05

0xeda3,	// (0x0002e1aa) cell_graphic2_control_pane_g1

0x75d9,	// (0x000269e0) bg_touch_area_indi_pane_g1

0x97c9,	// (0x00028bd0) aid_cmod_rocker_key_size

0x97d3,	// (0x00028bda) aid_cmode_itu_key_size

0x97dd,	// (0x00028be4) main_cmode_video_pane

0x97e7,	// (0x00028bee) main_comp_mode_itu_pane

0x97f3,	// (0x00028bfa) main_comp_mode_rocker_pane

0x97ff,	// (0x00028c06) cell_cmode_rocker_pane_ParamLimits

0x97ff,	// (0x00028c06) cell_cmode_rocker_pane

0x9811,	// (0x00028c18) cell_cmode_itu_pane_ParamLimits

0x9811,	// (0x00028c18) cell_cmode_itu_pane

0x353f,	// (0x00022946) bg_button_pane_cp06_ParamLimits

0x353f,	// (0x00022946) bg_button_pane_cp06

0x786b,	// (0x00026c72) cell_cmode_rocker_pane_g1_ParamLimits

0x786b,	// (0x00026c72) cell_cmode_rocker_pane_g1

0x8d69,	// (0x00028170) cell_cmode_rocker_pane_g2_ParamLimits

0x8d69,	// (0x00028170) cell_cmode_rocker_pane_g2

0x0001,

0xfdc9,	// (0x0002f1d0) cell_cmode_rocker_pane_g_ParamLimits

0xfdc9,	// (0x0002f1d0) cell_cmode_rocker_pane_g

0x2bdf,	// (0x00021fe6) bg_button_pane_cp07

0x9826,	// (0x00028c2d) cell_cmode_itu_pane_g1

0x982f,	// (0x00028c36) cell_cmode_itu_pane_t1

0x983d,	// (0x00028c44) cell_cmode_itu_pane_t2

0x0001,

0xfdce,	// (0x0002f1d5) cell_cmode_itu_pane_t

0x8f8c,	// (0x00028393) aid_touch_ctrl_left

0x8f94,	// (0x0002839b) aid_touch_ctrl_right

0x2bdf,	// (0x00021fe6) compa_mode_pane

0xedc9,	// (0x0002e1d0) aid_cmod_rocker_key_size_cp

0xedd3,	// (0x0002e1da) aid_cmode_itu_key_size_cp

0x985f,	// (0x00028c66) compa_mode_pane_g1

0x9867,	// (0x00028c6e) compa_mode_pane_g2

0x986f,	// (0x00028c76) compa_mode_pane_g3

0x0002,

0xfdd3,	// (0x0002f1da) compa_mode_pane_g

0xeddd,	// (0x0002e1e4) main_comp_mode_itu_pane_cp

0xede5,	// (0x0002e1ec) main_comp_mode_rocker_pane_cp

0xeded,	// (0x0002e1f4) cell_cmode_itu_pane_cp_ParamLimits

0xeded,	// (0x0002e1f4) cell_cmode_itu_pane_cp

0xee02,	// (0x0002e209) cell_cmode_rocker_pane_cp_ParamLimits

0xee02,	// (0x0002e209) cell_cmode_rocker_pane_cp

0x353f,	// (0x00022946) bg_button_pane_cp06_cp_ParamLimits

0x353f,	// (0x00022946) bg_button_pane_cp06_cp

0x786b,	// (0x00026c72) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x786b,	// (0x00026c72) cell_cmode_rocker_pane_g1_cp

0x75d9,	// (0x000269e0) cell_cmode_rocker_pane_g2_cp

0x2bdf,	// (0x00021fe6) bg_button_pane_cp07_cp

0xee14,	// (0x0002e21b) cell_cmode_itu_pane_g1_cp

0xee1d,	// (0x0002e224) cell_cmode_itu_pane_t1_cp

0xee1d,	// (0x0002e224) cell_cmode_itu_pane_t2_cp

0xdac1,	// (0x0002cec8) settings_code_pane_cp2

0x2cd3,	// (0x000220da) bg_popup_window_pane_cp3_ParamLimits

0x3136,	// (0x0002253d) heading_pane_cp3_ParamLimits

0x3142,	// (0x00022549) listscroll_popup_graphic_pane_ParamLimits

0x1fea,	// (0x000213f1) fep_hwr_aid_pane_ParamLimits

0x23b4,	// (0x000217bb) aid_touch_sctrl_top_ParamLimits

0x23c1,	// (0x000217c8) sctrl_sk_top_pane_g1_ParamLimits

0x786b,	// (0x00026c72) sctrl_sk_top_pane_g2_ParamLimits

0xfd09,	// (0x0002f110) sctrl_sk_top_pane_g_ParamLimits

0x23ce,	// (0x000217d5) sctrl_sk_top_pane_t1_ParamLimits

0x23b4,	// (0x000217bb) aid_touch_sctrl_bottom_ParamLimits

0x23ce,	// (0x000217d5) sctrl_sk_bottom_pane_t1_ParamLimits

0x8ed5,	// (0x000282dc) aid_area_touch_clock

0xc6a1,	// (0x0002baa8) aid_vkb2_area_top_pane_cell_ParamLimits

0xc6a1,	// (0x0002baa8) aid_vkb2_area_top_pane_cell

0xc74c,	// (0x0002bb53) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc74c,	// (0x0002bb53) aid_vkb2_area_bottom_pane_cell

0x9444,	// (0x0002884b) popup_char_count_window

0x98bc,	// (0x00028cc3) popup_char_count_window_g1

0x98c5,	// (0x00028ccc) popup_char_count_window_g2

0x98ce,	// (0x00028cd5) popup_char_count_window_g3

0x0002,

0xfdda,	// (0x0002f1e1) popup_char_count_window_g

0x98d7,	// (0x00028cde) popup_char_count_window_t1

0x246f,	// (0x00021876) popup_fep_char_preview_window_ParamLimits

0x246f,	// (0x00021876) popup_fep_char_preview_window

0xc6c1,	// (0x0002bac8) vkb2_top_candi_pane_ParamLimits

0xc6c1,	// (0x0002bac8) vkb2_top_candi_pane

0xee2b,	// (0x0002e232) cell_vkb2_top_candi_pane_ParamLimits

0xee2b,	// (0x0002e232) cell_vkb2_top_candi_pane

0x5679,	// (0x00024a80) bg_popup_fep_char_preview_window_ParamLimits

0x5679,	// (0x00024a80) bg_popup_fep_char_preview_window

0x29d7,	// (0x00021dde) popup_fep_char_preview_window_t1_ParamLimits

0x29d7,	// (0x00021dde) popup_fep_char_preview_window_t1

0x9932,	// (0x00028d39) bg_popup_fep_char_preview_window_g1

0x993a,	// (0x00028d41) bg_popup_fep_char_preview_window_g2

0x9942,	// (0x00028d49) bg_popup_fep_char_preview_window_g3

0x994a,	// (0x00028d51) bg_popup_fep_char_preview_window_g4

0x9952,	// (0x00028d59) bg_popup_fep_char_preview_window_g5

0x2a11,	// (0x00021e18) bg_popup_fep_char_preview_window_g6

0x995a,	// (0x00028d61) bg_popup_fep_char_preview_window_g7

0x9962,	// (0x00028d69) bg_popup_fep_char_preview_window_g8

0x996a,	// (0x00028d71) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde1,	// (0x0002f1e8) bg_popup_fep_char_preview_window_g

0x786b,	// (0x00026c72) cell_vkb2_top_candi_pane_g1_ParamLimits

0x786b,	// (0x00026c72) cell_vkb2_top_candi_pane_g1

0x7b82,	// (0x00026f89) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7b82,	// (0x00026f89) cell_vkb2_top_candi_pane_g2

0x7ba3,	// (0x00026faa) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7ba3,	// (0x00026faa) cell_vkb2_top_candi_pane_g3

0x2a19,	// (0x00021e20) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2a19,	// (0x00021e20) cell_vkb2_top_candi_pane_g4

0x9972,	// (0x00028d79) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9972,	// (0x00028d79) cell_vkb2_top_candi_pane_g5

0x8d69,	// (0x00028170) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8d69,	// (0x00028170) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf4,	// (0x0002f1fb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf4,	// (0x0002f1fb) cell_vkb2_top_candi_pane_g

0x2a3a,	// (0x00021e41) cell_vkb2_top_candi_pane_t1

0x1e58,	// (0x0002125f) aid_size_touch_slider_mark_ParamLimits

0x1e58,	// (0x0002125f) aid_size_touch_slider_mark

0xeb4b,	// (0x0002df52) grid_graphic2_catg_pane_ParamLimits

0xeb4b,	// (0x0002df52) grid_graphic2_catg_pane

0xec07,	// (0x0002e00e) popup_grid_graphic2_window_t1_ParamLimits

0xec07,	// (0x0002e00e) popup_grid_graphic2_window_t1

0xec1d,	// (0x0002e024) popup_grid_graphic2_window_t2_ParamLimits

0xec1d,	// (0x0002e024) popup_grid_graphic2_window_t2

0x0001,

0xfdaf,	// (0x0002f1b6) popup_grid_graphic2_window_t_ParamLimits

0xfdaf,	// (0x0002f1b6) popup_grid_graphic2_window_t

0x2f5c,	// (0x00022363) bg_button_pane_cp05_ParamLimits

0xeda3,	// (0x0002e1aa) cell_graphic2_control_pane_g1_ParamLimits

0xee91,	// (0x0002e298) cell_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0002e298) cell_graphic2_catg_pane

0x2bdf,	// (0x00021fe6) bg_button_pane_cp12

0xeea3,	// (0x0002e2aa) cell_graphic2_catg_pane_g1

0x8ea1,	// (0x000282a8) cell_tb_ext_pane_t1_ParamLimits

0x2811,	// (0x00021c18) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2811,	// (0x00021c18) vkb2_top_cell_right_narrow_pane

0x2829,	// (0x00021c30) vkb2_top_cell_right_wide_pane_ParamLimits

0x2829,	// (0x00021c30) vkb2_top_cell_right_wide_pane

0xcc65,	// (0x0002c06c) bg_vkb2_func_pane_ParamLimits

0xcc65,	// (0x0002c06c) bg_vkb2_func_pane

0x289a,	// (0x00021ca1) vkb2_top_cell_left_pane_g1_ParamLimits

0xcc65,	// (0x0002c06c) bg_vkb2_fuc_pane_cp03_ParamLimits

0xcc65,	// (0x0002c06c) bg_vkb2_fuc_pane_cp03

0x28f8,	// (0x00021cff) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4fb4,	// (0x000243bb) bg_vkb2_func_pane_g1

0x4fbc,	// (0x000243c3) bg_vkb2_func_pane_g2

0x4fcc,	// (0x000243d3) bg_vkb2_func_pane_g3

0x4fc4,	// (0x000243cb) bg_vkb2_func_pane_g4

0x4fd4,	// (0x000243db) bg_vkb2_func_pane_g5

0x4fdc,	// (0x000243e3) bg_vkb2_func_pane_g6

0x4fe4,	// (0x000243eb) bg_vkb2_func_pane_g7

0x4fec,	// (0x000243f3) bg_vkb2_func_pane_g8

0x4fac,	// (0x000243b3) bg_vkb2_func_pane_g9

0x0008,

0xfe01,	// (0x0002f208) bg_vkb2_func_pane_g

0xcc65,	// (0x0002c06c) bg_vkb2_fuc_pane_cp01_ParamLimits

0xcc65,	// (0x0002c06c) bg_vkb2_fuc_pane_cp01

0x289a,	// (0x00021ca1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x289a,	// (0x00021ca1) vkb2_top_cell_right_wide_pane_g1

0xcc65,	// (0x0002c06c) bg_vkb2_fuc_pane_cp02_ParamLimits

0xcc65,	// (0x0002c06c) bg_vkb2_fuc_pane_cp02

0x28f8,	// (0x00021cff) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x28f8,	// (0x00021cff) vkb2_top_cell_right_narrow_pane_g1

0xe3ba,	// (0x0002d7c1) aid_touch_area_decrease_ParamLimits

0xe3ba,	// (0x0002d7c1) aid_touch_area_decrease

0xe3ee,	// (0x0002d7f5) aid_touch_area_increase_ParamLimits

0xe3ee,	// (0x0002d7f5) aid_touch_area_increase

0xe416,	// (0x0002d81d) aid_touch_area_mute_ParamLimits

0xe416,	// (0x0002d81d) aid_touch_area_mute

0xe446,	// (0x0002d84d) aid_touch_area_slider_ParamLimits

0xe446,	// (0x0002d84d) aid_touch_area_slider

0xe486,	// (0x0002d88d) popup_slider_window_g4_ParamLimits

0xe486,	// (0x0002d88d) popup_slider_window_g4

0xe4ae,	// (0x0002d8b5) popup_slider_window_g5_ParamLimits

0xe4ae,	// (0x0002d8b5) popup_slider_window_g5

0xe4e2,	// (0x0002d8e9) popup_slider_window_g6_ParamLimits

0xe4e2,	// (0x0002d8e9) popup_slider_window_g6

0x8c7f,	// (0x00028086) popup_slider_window_t2_ParamLimits

0x8c7f,	// (0x00028086) popup_slider_window_t2

0x0001,

0xfcfd,	// (0x0002f104) popup_slider_window_t_ParamLimits

0xfcfd,	// (0x0002f104) popup_slider_window_t

0xe4fe,	// (0x0002d905) slider_pane_ParamLimits

0xe4fe,	// (0x0002d905) slider_pane

0x99ae,	// (0x00028db5) slider_pane_g1_ParamLimits

0x99ae,	// (0x00028db5) slider_pane_g1

0x99c2,	// (0x00028dc9) slider_pane_g2_ParamLimits

0x99c2,	// (0x00028dc9) slider_pane_g2

0x99d8,	// (0x00028ddf) slider_pane_g3_ParamLimits

0x99d8,	// (0x00028ddf) slider_pane_g3

0x0003,

0xfe14,	// (0x0002f21b) slider_pane_g_ParamLimits

0xfe14,	// (0x0002f21b) slider_pane_g

0xd265,	// (0x0002c66c) popup_tb_float_extension_window_ParamLimits

0xd265,	// (0x0002c66c) popup_tb_float_extension_window

0x9a04,	// (0x00028e0b) aid_size_cell_tb_float_ext

0x2bdf,	// (0x00021fe6) bg_popup_sub_window_cp28

0x9a10,	// (0x00028e17) grid_tb_float_ext_pane

0x9a1a,	// (0x00028e21) cell_tb_float_ext_pane_ParamLimits

0x9a1a,	// (0x00028e21) cell_tb_float_ext_pane

0x9a34,	// (0x00028e3b) cell_tb_float_ext_pane_g1

0x9a3d,	// (0x00028e44) grid_highlight_pane_cp12

0xc4aa,	// (0x0002b8b1) cell_last_hwr_side_pane_ParamLimits

0xc4aa,	// (0x0002b8b1) cell_last_hwr_side_pane

0x75d9,	// (0x000269e0) cell_last_hwr_side_pane_g1

0x9a46,	// (0x00028e4d) cell_last_hwr_side_pane_g2

0x0001,

0xfe1d,	// (0x0002f224) cell_last_hwr_side_pane_g

0xc828,	// (0x0002bc2f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc828,	// (0x0002bc2f) vkb2_area_bottom_space_btn_pane

0x786b,	// (0x00026c72) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x94f9,	// (0x00028900) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2a3a,	// (0x00021e41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2a59,	// (0x00021e60) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2a59,	// (0x00021e60) vkb2_area_bottom_space_btn_pane_g1

0x2a93,	// (0x00021e9a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2a93,	// (0x00021e9a) vkb2_area_bottom_space_btn_pane_g2

0x2ac9,	// (0x00021ed0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2ac9,	// (0x00021ed0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe22,	// (0x0002f229) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe22,	// (0x0002f229) vkb2_area_bottom_space_btn_pane_g

0x2091,	// (0x00021498) cel_fep_hwr_func_pane_ParamLimits

0x2091,	// (0x00021498) cel_fep_hwr_func_pane

0xc47f,	// (0x0002b886) cell_hwr_side_button_pane_ParamLimits

0xc47f,	// (0x0002b886) cell_hwr_side_button_pane

0x8ed5,	// (0x000282dc) aid_area_touch_clock_ParamLimits

0x2f5c,	// (0x00022363) bg_uniindi_top_pane_ParamLimits

0x8ee7,	// (0x000282ee) uniindi_top_pane_g1_ParamLimits

0x8efd,	// (0x00028304) uniindi_top_pane_g2_ParamLimits

0x8f09,	// (0x00028310) uniindi_top_pane_g3_ParamLimits

0x8f1a,	// (0x00028321) uniindi_top_pane_g4_ParamLimits

0xfd35,	// (0x0002f13c) uniindi_top_pane_g_ParamLimits

0x8f27,	// (0x0002832e) uniindi_top_pane_t1_ParamLimits

0x2f5c,	// (0x00022363) bg_vkb2_func_pane_cp01_ParamLimits

0x2f5c,	// (0x00022363) bg_vkb2_func_pane_cp01

0x9a4f,	// (0x00028e56) cel_fep_hwr_func_pane_g1_ParamLimits

0x9a4f,	// (0x00028e56) cel_fep_hwr_func_pane_g1

0x2f5c,	// (0x00022363) bg_vkb2_func_pane_cp02_ParamLimits

0x2f5c,	// (0x00022363) bg_vkb2_func_pane_cp02

0x9a4f,	// (0x00028e56) cell_hwr_side_button_pane_g1_ParamLimits

0x9a4f,	// (0x00028e56) cell_hwr_side_button_pane_g1

0x4e2d,	// (0x00024234) status_pane_g4_ParamLimits

0x4e2d,	// (0x00024234) status_pane_g4

0x4e47,	// (0x0002424e) status_pane_t1

0x7312,	// (0x00026719) form2_midp_gauge_slider_cont_pane

0x731a,	// (0x00026721) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddb8,	// (0x0002d1bf) form2_midp_gauge_slider_pane_t2_ParamLimits

0xddca,	// (0x0002d1d1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x0002ef08) form2_midp_gauge_slider_pane_t_ParamLimits

0x7350,	// (0x00026757) form2_midp_slider_pane_ParamLimits

0x242f,	// (0x00021836) aid_size_cell_func_vkb2_ParamLimits

0x242f,	// (0x00021836) aid_size_cell_func_vkb2

0x99f0,	// (0x00028df7) slider_pane_g4_ParamLimits

0x99f0,	// (0x00028df7) slider_pane_g4

0xc889,	// (0x0002bc90) form2_midp_gauge_slider_pane_t2_cp01

0xc897,	// (0x0002bc9e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc897,	// (0x0002bc9e) form2_midp_gauge_slider_pane_t3_cp01

0x2b3e,	// (0x00021f45) form2_midp_slider_pane_cp01

0x2bdf,	// (0x00021fe6) navi_smil_pane

0x9a88,	// (0x00028e8f) navi_smil_pane_g1

0x9a90,	// (0x00028e97) navi_smil_pane_t1

0x9a5d,	// (0x00028e64) form2_midp_slider_pane_g1

0x9a66,	// (0x00028e6d) form2_midp_slider_pane_g2

0x9a6e,	// (0x00028e75) form2_midp_slider_pane_g3

0x9a5d,	// (0x00028e64) form2_midp_slider_pane_g4

0xeeac,	// (0x0002e2b3) form2_midp_slider_pane_g5

0x0004,

0xfe2b,	// (0x0002f232) form2_midp_slider_pane_g

0x2b03,	// (0x00021f0a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2b03,	// (0x00021f0a) vkb2_area_bottom_space_btn_pane_g4

0xd469,	// (0x0002c870) lc0_navi_pane_ParamLimits

0xd469,	// (0x0002c870) lc0_navi_pane

0xd4d3,	// (0x0002c8da) lc0_stat_indi_pane_ParamLimits

0xd4d3,	// (0x0002c8da) lc0_stat_indi_pane

0xd4e8,	// (0x0002c8ef) ls0_title_pane_ParamLimits

0xd4e8,	// (0x0002c8ef) ls0_title_pane

0x353f,	// (0x00022946) bg_popup_sub_pane_cp14_ParamLimits

0x8ebc,	// (0x000282c3) list_uniindi_pane_ParamLimits

0x8ec8,	// (0x000282cf) uniindi_top_pane_ParamLimits

0x8f64,	// (0x0002836b) list_single_uniindi_pane_g1_ParamLimits

0x8f77,	// (0x0002837e) list_single_uniindi_pane_t1_ParamLimits

0xc8b4,	// (0x0002bcbb) lc0_stat_clock_pane_ParamLimits

0xc8b4,	// (0x0002bcbb) lc0_stat_clock_pane

0xeeb5,	// (0x0002e2bc) lc0_stat_indi_pane_g1_ParamLimits

0xeeb5,	// (0x0002e2bc) lc0_stat_indi_pane_g1

0xeec2,	// (0x0002e2c9) lc0_stat_indi_pane_g2_ParamLimits

0xeec2,	// (0x0002e2c9) lc0_stat_indi_pane_g2

0x0001,

0x0047,	// (0x0001f44e) lc0_stat_indi_pane_g_ParamLimits

0x0047,	// (0x0001f44e) lc0_stat_indi_pane_g

0xc8c1,	// (0x0002bcc8) lc0_uni_indicator_pane_ParamLimits

0xc8c1,	// (0x0002bcc8) lc0_uni_indicator_pane

0x9ab8,	// (0x00028ebf) ls0_title_pane_g1_ParamLimits

0x9ab8,	// (0x00028ebf) ls0_title_pane_g1

0xeecf,	// (0x0002e2d6) ls0_title_pane_t1_ParamLimits

0xeecf,	// (0x0002e2d6) ls0_title_pane_t1

0xc8ce,	// (0x0002bcd5) lc0_uni_indicator_pane_g1_ParamLimits

0xc8ce,	// (0x0002bcd5) lc0_uni_indicator_pane_g1

0x9b02,	// (0x00028f09) lc0_stat_clock_pane_t1

0x2bdf,	// (0x00021fe6) main_ai5_pane

0x9b10,	// (0x00028f17) ai5_sk_pane_ParamLimits

0x9b10,	// (0x00028f17) ai5_sk_pane

0xeefd,	// (0x0002e304) cell_ai5_widget_pane_ParamLimits

0xeefd,	// (0x0002e304) cell_ai5_widget_pane

0x9b9f,	// (0x00028fa6) aid_size_cell_widget_grid

0x9bb3,	// (0x00028fba) bg_ai5_widget_pane_ParamLimits

0x9bb3,	// (0x00028fba) bg_ai5_widget_pane

0xef86,	// (0x0002e38d) cell_ai5_widget_pane_g2

0xef96,	// (0x0002e39d) cell_ai5_widget_pane_g3

0xefb5,	// (0x0002e3bc) cell_ai5_widget_pane_g4

0xefc1,	// (0x0002e3c8) cell_ai5_widget_pane_g5

0xefcd,	// (0x0002e3d4) cell_ai5_widget_pane_g6

0xefd9,	// (0x0002e3e0) cell_ai5_widget_pane_g7

0xf021,	// (0x0002e428) cell_ai5_widget_pane_t1_ParamLimits

0xf021,	// (0x0002e428) cell_ai5_widget_pane_t1

0xf03e,	// (0x0002e445) cell_ai5_widget_pane_t2_ParamLimits

0xf03e,	// (0x0002e445) cell_ai5_widget_pane_t2

0xf056,	// (0x0002e45d) cell_ai5_widget_pane_t3_ParamLimits

0xf056,	// (0x0002e45d) cell_ai5_widget_pane_t3

0xf06e,	// (0x0002e475) cell_ai5_widget_pane_t4_ParamLimits

0xf06e,	// (0x0002e475) cell_ai5_widget_pane_t4

0xf088,	// (0x0002e48f) cell_ai5_widget_pane_t5_ParamLimits

0xf088,	// (0x0002e48f) cell_ai5_widget_pane_t5

0x9cfc,	// (0x00029103) cell_ai5_widget_pane_t6_ParamLimits

0x9cfc,	// (0x00029103) cell_ai5_widget_pane_t6

0x9d0e,	// (0x00029115) cell_ai5_widget_pane_t7_ParamLimits

0x9d0e,	// (0x00029115) cell_ai5_widget_pane_t7

0xf0a7,	// (0x0002e4ae) cell_ai5_widget_pane_t8_ParamLimits

0xf0a7,	// (0x0002e4ae) cell_ai5_widget_pane_t8

0x0009,

0xfe36,	// (0x0002f23d) cell_ai5_widget_pane_t_ParamLimits

0xfe36,	// (0x0002f23d) cell_ai5_widget_pane_t

0xf0f3,	// (0x0002e4fa) grid_ai5_widget_pane

0x353f,	// (0x00022946) highlight_cell_ai5_widget_pane_ParamLimits

0x353f,	// (0x00022946) highlight_cell_ai5_widget_pane

0xf10b,	// (0x0002e512) ai5_sk_left_pane

0xf115,	// (0x0002e51c) ai5_sk_middle_pane

0xf11f,	// (0x0002e526) ai5_sk_right_pane

0x9da9,	// (0x000291b0) bg_ai5_widget_pane_g1_ParamLimits

0x9da9,	// (0x000291b0) bg_ai5_widget_pane_g1

0x9db5,	// (0x000291bc) bg_ai5_widget_pane_g2_ParamLimits

0x9db5,	// (0x000291bc) bg_ai5_widget_pane_g2

0x9dc1,	// (0x000291c8) bg_ai5_widget_pane_g3_ParamLimits

0x9dc1,	// (0x000291c8) bg_ai5_widget_pane_g3

0x9dcd,	// (0x000291d4) bg_ai5_widget_pane_g4_ParamLimits

0x9dcd,	// (0x000291d4) bg_ai5_widget_pane_g4

0x9dd9,	// (0x000291e0) bg_ai5_widget_pane_g5_ParamLimits

0x9dd9,	// (0x000291e0) bg_ai5_widget_pane_g5

0x9de5,	// (0x000291ec) bg_ai5_widget_pane_g6_ParamLimits

0x9de5,	// (0x000291ec) bg_ai5_widget_pane_g6

0x9df1,	// (0x000291f8) bg_ai5_widget_pane_g7_ParamLimits

0x9df1,	// (0x000291f8) bg_ai5_widget_pane_g7

0x9dfd,	// (0x00029204) bg_ai5_widget_pane_g8_ParamLimits

0x9dfd,	// (0x00029204) bg_ai5_widget_pane_g8

0x9e09,	// (0x00029210) bg_ai5_widget_pane_g9_ParamLimits

0x9e09,	// (0x00029210) bg_ai5_widget_pane_g9

0x0008,

0xfe4b,	// (0x0002f252) bg_ai5_widget_pane_g_ParamLimits

0xfe4b,	// (0x0002f252) bg_ai5_widget_pane_g

0x9e3c,	// (0x00029243) cell_shortcut_ai5_widget_pane_ParamLimits

0x9e3c,	// (0x00029243) cell_shortcut_ai5_widget_pane

0x2d9c,	// (0x000221a3) bg_cell_shortcut_ai5_widget_pane

0x9e4d,	// (0x00029254) cell_grid_ai5_widget_pane_g1

0x9e56,	// (0x0002925d) highlight_cell_shortcut_ai5_widget_pane

0x4fbc,	// (0x000243c3) ai5_sk_left_pane_g1

0x9e5e,	// (0x00029265) ai5_sk_left_pane_g2

0x9e66,	// (0x0002926d) ai5_sk_left_pane_g3

0x9e6e,	// (0x00029275) ai5_sk_left_pane_g4

0x0003,

0xfe5e,	// (0x0002f265) ai5_sk_left_pane_g

0x9e76,	// (0x0002927d) ai5_sk_left_pane_t1

0x4fb4,	// (0x000243bb) ai5_sk_right_pane_g1

0x9e84,	// (0x0002928b) ai5_sk_right_pane_g2

0x9e8c,	// (0x00029293) ai5_sk_right_pane_g3

0x9e94,	// (0x0002929b) ai5_sk_right_pane_g4

0x0003,

0xfe67,	// (0x0002f26e) ai5_sk_right_pane_g

0x9e9c,	// (0x000292a3) ai5_sk_right_pane_t1

0x4fb4,	// (0x000243bb) ai5_sk_middle_pane_g1

0x4fbc,	// (0x000243c3) ai5_sk_middle_pane_g2

0x4fd4,	// (0x000243db) ai5_sk_middle_pane_g3

0x9e8c,	// (0x00029293) ai5_sk_middle_pane_g4

0x9e66,	// (0x0002926d) ai5_sk_middle_pane_g5

0x9eaa,	// (0x000292b1) ai5_sk_middle_pane_g6

0xf129,	// (0x0002e530) ai5_sk_middle_pane_g7

0x0006,

0xfe70,	// (0x0002f277) ai5_sk_middle_pane_g

0xd32d,	// (0x0002c734) aid_touch_area_size_lc0_ParamLimits

0xd32d,	// (0x0002c734) aid_touch_area_size_lc0

0x221c,	// (0x00021623) cell_hwr_candidate_pane_t1_ParamLimits

0x4b03,	// (0x00023f0a) aid_touch_navi_pane

0xd5da,	// (0x0002c9e1) status_dt_navi_pane_ParamLimits

0xd5da,	// (0x0002c9e1) status_dt_navi_pane

0xd5f2,	// (0x0002c9f9) status_dt_sta_pane_ParamLimits

0xd5f2,	// (0x0002c9f9) status_dt_sta_pane

0xf131,	// (0x0002e538) dt_sta_controll_pane

0xf13e,	// (0x0002e545) dt_sta_indi_pane

0xf14b,	// (0x0002e552) dt_sta_title_pane

0x2f5c,	// (0x00022363) bg_dt_sta_indi_pane_ParamLimits

0x2f5c,	// (0x00022363) bg_dt_sta_indi_pane

0x9eeb,	// (0x000292f2) dt_sta_battery_pane

0xf15d,	// (0x0002e564) dt_sta_indi_pane_g1

0xf166,	// (0x0002e56d) dt_sta_indi_pane_g2

0xf16f,	// (0x0002e576) dt_sta_indi_pane_g3

0x0002,

0x00aa,	// (0x0001f4b1) dt_sta_indi_pane_g

0xf178,	// (0x0002e57f) dt_sta_signal_pane

0x353f,	// (0x00022946) bg_dt_sta_title_pane_ParamLimits

0x353f,	// (0x00022946) bg_dt_sta_title_pane

0x5e59,	// (0x00025260) dt_sta_title_pane_g1

0xf181,	// (0x0002e588) dt_sta_title_pane_t1_ParamLimits

0xf181,	// (0x0002e588) dt_sta_title_pane_t1

0x2bdf,	// (0x00021fe6) bg_dt_sta_control_pane

0xf196,	// (0x0002e59d) dt_sta_controll_pane_g1

0xf19f,	// (0x0002e5a6) bg_dt_sta_title_pane_g1

0xf1a8,	// (0x0002e5af) bg_dt_sta_title_pane_g2

0xf1b1,	// (0x0002e5b8) bg_dt_sta_title_pane_g3

0x0002,

0x00b1,	// (0x0001f4b8) bg_dt_sta_title_pane_g

0x75d9,	// (0x000269e0) bg_dt_sta_indi_pane_g1

0x9f58,	// (0x0002935f) dt_sta_signal_pane_g1

0x9f60,	// (0x00029367) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002f286) dt_sta_signal_pane_g

0x9f68,	// (0x0002936f) dt_sta_battery_pane_g1

0x9f71,	// (0x00029378) dt_sta_battery_pane_t1

0x75d9,	// (0x000269e0) bg_dt_sta_control_pane_g1

0x3cae,	// (0x000230b5) fep_china_uni_eep_pane

0x3cb6,	// (0x000230bd) fep_china_uni_entry_pane_ParamLimits

0x3cc6,	// (0x000230cd) popup_fep_china_uni_window_g1_ParamLimits

0x3cd6,	// (0x000230dd) popup_fep_china_uni_window_g2_ParamLimits

0x3cd6,	// (0x000230dd) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002eb3c) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002eb3c) popup_fep_china_uni_window_g

0x9f80,	// (0x00029387) fep_china_uni_eep_pane_g1

0x9f88,	// (0x0002938f) fep_china_uni_eep_pane_t1

0x9a7f,	// (0x00028e86) aid_touch_area_size_smil_player

0x4c4f,	// (0x00024056) lc0_clock_pane

0x4e3b,	// (0x00024242) status_pane_g5_ParamLimits

0x4e3b,	// (0x00024242) status_pane_g5

0xce0b,	// (0x0002c212) popup_keymap_window

0x4df9,	// (0x00024200) status_icon_pane

0xef96,	// (0x0002e39d) cell_ai5_widget_pane_g3_ParamLimits

0xefb5,	// (0x0002e3bc) cell_ai5_widget_pane_g4_ParamLimits

0xefc1,	// (0x0002e3c8) cell_ai5_widget_pane_g5_ParamLimits

0xefe5,	// (0x0002e3ec) cell_ai5_widget_pane_g8_ParamLimits

0xefe5,	// (0x0002e3ec) cell_ai5_widget_pane_g8

0xeff9,	// (0x0002e400) cell_ai5_widget_pane_g9_ParamLimits

0xeff9,	// (0x0002e400) cell_ai5_widget_pane_g9

0xf00d,	// (0x0002e414) cell_ai5_widget_pane_g10_ParamLimits

0xf00d,	// (0x0002e414) cell_ai5_widget_pane_g10

0x9f97,	// (0x0002939e) status_icon_pane_g1

0x2bdf,	// (0x00021fe6) bg_popup_sub_pane_cp13

0x9f9f,	// (0x000293a6) popup_keymap_window_t1

0xcc0c,	// (0x0002c013) control_pane_g6_ParamLimits

0xcc0c,	// (0x0002c013) control_pane_g6

0xcc19,	// (0x0002c020) control_pane_g7_ParamLimits

0xcc19,	// (0x0002c020) control_pane_g7

0xcc26,	// (0x0002c02d) control_pane_g8_ParamLimits

0xcc26,	// (0x0002c02d) control_pane_g8

0xf131,	// (0x0002e538) dt_sta_controll_pane_ParamLimits

0xf13e,	// (0x0002e545) dt_sta_indi_pane_ParamLimits

0xf14b,	// (0x0002e552) dt_sta_title_pane_ParamLimits

0x3477,	// (0x0002287e) aid_size_touch_scroll_bar_cale

0x13a2,	// (0x000207a9) popup_discreet_window_ParamLimits

0x13a2,	// (0x000207a9) popup_discreet_window

0xbd43,	// (0x0002b14a) popup_sk_window

0x5679,	// (0x00024a80) bg_popup_sub_pane_cp28_ParamLimits

0x5679,	// (0x00024a80) bg_popup_sub_pane_cp28

0x9fad,	// (0x000293b4) popup_discreet_window_g1_ParamLimits

0x9fad,	// (0x000293b4) popup_discreet_window_g1

0x9fcd,	// (0x000293d4) popup_discreet_window_t1_ParamLimits

0x9fcd,	// (0x000293d4) popup_discreet_window_t1

0x9feb,	// (0x000293f2) popup_discreet_window_t2_ParamLimits

0x9feb,	// (0x000293f2) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002f28b) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002f28b) popup_discreet_window_t

0x2b75,	// (0x00021f7c) popup_sk_window_g1

0x2b7f,	// (0x00021f86) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002f292) popup_sk_window_g

0xa03d,	// (0x00029444) popup_sk_window_t1

0xa04b,	// (0x00029452) popup_sk_window_t1_copy1

0xef86,	// (0x0002e38d) cell_ai5_widget_pane_g2_ParamLimits

0xf0b9,	// (0x0002e4c0) cell_ai5_widget_pane_t9_ParamLimits

0xf0b9,	// (0x0002e4c0) cell_ai5_widget_pane_t9

0x2bdf,	// (0x00021fe6) main_fep_fshwr2_pane

0xf1ba,	// (0x0002e5c1) aid_fshwr2_btn_pane

0xf1c2,	// (0x0002e5c9) aid_fshwr2_syb_pane

0xf1ca,	// (0x0002e5d1) aid_fshwr2_txt_pane

0xf1d2,	// (0x0002e5d9) fshwr2_func_candi_pane

0xf1dc,	// (0x0002e5e3) fshwr2_hwr_syb_pane

0xf1ea,	// (0x0002e5f1) fshwr2_icf_pane

0x2bdf,	// (0x00021fe6) fshwr2_icf_bg_pane

0xf1f4,	// (0x0002e5fb) fshwr2_icf_pane_t1_ParamLimits

0xf1f4,	// (0x0002e5fb) fshwr2_icf_pane_t1

0x75d9,	// (0x000269e0) fshwr2_func_candi_pane_g1

0xa0be,	// (0x000294c5) fshwr2_func_candi_row_pane_ParamLimits

0xa0be,	// (0x000294c5) fshwr2_func_candi_row_pane

0xf20c,	// (0x0002e613) cell_fshwr2_syb_pane_ParamLimits

0xf20c,	// (0x0002e613) cell_fshwr2_syb_pane

0x786b,	// (0x00026c72) fshwr2_hwr_syb_pane_g1_ParamLimits

0x786b,	// (0x00026c72) fshwr2_hwr_syb_pane_g1

0x2bdf,	// (0x00021fe6) bg_popup_call_pane_cp01

0xa0e9,	// (0x000294f0) fshwr2_func_candi_cell_pane_ParamLimits

0xa0e9,	// (0x000294f0) fshwr2_func_candi_cell_pane

0xa11a,	// (0x00029521) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa11a,	// (0x00029521) fshwr2_func_candi_cell_bg_pane

0xa134,	// (0x0002953b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa134,	// (0x0002953b) fshwr2_func_candi_cell_pane_g1

0xa15c,	// (0x00029563) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa15c,	// (0x00029563) fshwr2_func_candi_cell_pane_t1

0x2bdf,	// (0x00021fe6) bg_button_pane_cp08

0x41a4,	// (0x000235ab) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0002e62d) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0002e635) cell_fshwr2_syb_bg_pane_t1

0x353f,	// (0x00022946) main_tmo_pane

0xd8f2,	// (0x0002ccf9) uni_indicator_pane_g1_ParamLimits

0xd907,	// (0x0002cd0e) uni_indicator_pane_g2_ParamLimits

0xd91c,	// (0x0002cd23) uni_indicator_pane_g3_ParamLimits

0x61db,	// (0x000255e2) uni_indicator_pane_g4_ParamLimits

0x61db,	// (0x000255e2) uni_indicator_pane_g4

0x61ef,	// (0x000255f6) uni_indicator_pane_g5_ParamLimits

0x61ef,	// (0x000255f6) uni_indicator_pane_g5

0x6203,	// (0x0002560a) uni_indicator_pane_g6_ParamLimits

0x6203,	// (0x0002560a) uni_indicator_pane_g6

0xf92d,	// (0x0002ed34) uni_indicator_pane_g_ParamLimits

0xe396,	// (0x0002d79d) popup_tmo_note_window_ParamLimits

0xe396,	// (0x0002d79d) popup_tmo_note_window

0x2bdf,	// (0x00021fe6) fshwr2_bg_pane

0xa14d,	// (0x00029554) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa14d,	// (0x00029554) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002f297) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002f297) fshwr2_func_candi_cell_pane_g

0x75d9,	// (0x000269e0) bg_popup_window_pane_cp01

0xa186,	// (0x0002958d) bg_popup_window_pane_g1_cp01

0xa18f,	// (0x00029596) bg_popup_window_pane_cp22_ParamLimits

0xa18f,	// (0x00029596) bg_popup_window_pane_cp22

0xa19d,	// (0x000295a4) listscroll_tmo_link_pane_ParamLimits

0xa19d,	// (0x000295a4) listscroll_tmo_link_pane

0xa1dd,	// (0x000295e4) popup_tmo_note_window_g1_ParamLimits

0xa1dd,	// (0x000295e4) popup_tmo_note_window_g1

0xa1ea,	// (0x000295f1) tmo_note_info_pane_ParamLimits

0xa1ea,	// (0x000295f1) tmo_note_info_pane

0xf23d,	// (0x0002e644) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0002e644) list_tmo_note_info_pane_g1

0xa21b,	// (0x00029622) list_tmo_note_info_pane_g2_ParamLimits

0xa21b,	// (0x00029622) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002f29c) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002f29c) list_tmo_note_info_pane_g

0xa237,	// (0x0002963e) list_tmo_note_info_text_pane_ParamLimits

0xa237,	// (0x0002963e) list_tmo_note_info_text_pane

0xa2b8,	// (0x000296bf) list_tmo_link_pane

0xa2c5,	// (0x000296cc) scroll_pane_cp20

0xa2d2,	// (0x000296d9) list_single_tmo_link_pane_ParamLimits

0xa2d2,	// (0x000296d9) list_single_tmo_link_pane

0xa2e2,	// (0x000296e9) list_single_tmo_link_pane_t1

0xa2f0,	// (0x000296f7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa2f0,	// (0x000296f7) list_tmo_note_info_text_pane_t1

0xc91d,	// (0x0002bd24) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc91d,	// (0x0002bd24) aid_size_touch_scroll_bar_cp01

0xb83f,	// (0x0002ac46) aid_size_touch_slider_marker

0xbd33,	// (0x0002b13a) popup_settings_window_ParamLimits

0xbd33,	// (0x0002b13a) popup_settings_window

0x0912,	// (0x0001fd19) popup_candi_list_indi_window

0x4b03,	// (0x00023f0a) aid_touch_navi_pane_ParamLimits

0x2388,	// (0x0002178f) rs_clock_indi_pane

0x2391,	// (0x00021798) sctrl_sk_bottom_pane_ParamLimits

0x23a2,	// (0x000217a9) sctrl_sk_top_pane_ParamLimits

0x2489,	// (0x00021890) popup_fep_tooltip_window

0x9b9f,	// (0x00028fa6) aid_size_cell_widget_grid_ParamLimits

0xef7a,	// (0x0002e381) cell_ai5_widget_pane_g1_ParamLimits

0xef7a,	// (0x0002e381) cell_ai5_widget_pane_g1

0xefcd,	// (0x0002e3d4) cell_ai5_widget_pane_g6_ParamLimits

0xefd9,	// (0x0002e3e0) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x004c,	// (0x0001f453) cell_ai5_widget_pane_g_ParamLimits

0x004c,	// (0x0001f453) cell_ai5_widget_pane_g

0xf0dd,	// (0x0002e4e4) cell_ai5_widget_pane_t10_ParamLimits

0xf0dd,	// (0x0002e4e4) cell_ai5_widget_pane_t10

0xf0f3,	// (0x0002e4fa) grid_ai5_widget_pane_ParamLimits

0x9e15,	// (0x0002921c) cell_contacts_ai5_widget_pane_ParamLimits

0x9e15,	// (0x0002921c) cell_contacts_ai5_widget_pane

0xa000,	// (0x00029407) popup_discreet_window_t3_ParamLimits

0xa000,	// (0x00029407) popup_discreet_window_t3

0xa093,	// (0x0002949a) popup_fshwr2_char_preview_window_ParamLimits

0xa093,	// (0x0002949a) popup_fshwr2_char_preview_window

0xf254,	// (0x0002e65b) tmo_note_info_pane_t1

0xf269,	// (0x0002e670) tmo_note_info_pane_t2

0xf280,	// (0x0002e687) tmo_note_info_pane_t3

0xa294,	// (0x0002969b) tmo_note_info_pane_t4

0xa2a6,	// (0x000296ad) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002f2a1) tmo_note_info_pane_t

0xa2b8,	// (0x000296bf) list_tmo_link_pane_ParamLimits

0xa2c5,	// (0x000296cc) scroll_pane_cp20_ParamLimits

0x2bdf,	// (0x00021fe6) bg_popup_fep_char_preview_window_cp01

0xa309,	// (0x00029710) popup_fshwr2_char_preview_window_t1

0xa317,	// (0x0002971e) popup_candi_list_indi_window_g1

0xa320,	// (0x00029727) bg_cell_contacts_ai5_widget_pane

0xa32c,	// (0x00029733) cell_contacts_ai5_widget_pane_g1

0xa340,	// (0x00029747) cell_contacts_ai5_widget_pane_g2

0xa34f,	// (0x00029756) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002f2ac) cell_contacts_ai5_widget_pane_g

0xa362,	// (0x00029769) cell_contacts_ai5_widget_pane_t1

0x353f,	// (0x00022946) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0002e701) settings_container_pane

0x41a4,	// (0x000235ab) listscroll_set_pane_copy1

0x6cec,	// (0x000260f3) scroll_pane_cp121_copy1

0xa3e8,	// (0x000297ef) set_content_pane_copy1

0xf306,	// (0x0002e70d) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0002e70d) aid_height_set_list_copy1

0x63fb,	// (0x00025802) aid_size_parent_copy1_ParamLimits

0x63fb,	// (0x00025802) aid_size_parent_copy1

0xf312,	// (0x0002e719) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0002e719) button_value_adjust_pane_cp6_copy1

0x450a,	// (0x00023911) list_highlight_pane_cp2_copy1_ParamLimits

0x450a,	// (0x00023911) list_highlight_pane_cp2_copy1

0xf326,	// (0x0002e72d) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0002e72d) list_set_pane_copy1

0xf295,	// (0x0002e69c) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0002e69c) main_pane_set_t1_copy1

0xf2cf,	// (0x0002e6d6) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0002e6d6) main_pane_set_t2_copy1

0xf3d3,	// (0x0002e7da) main_pane_set_t3_copy1

0xf3e1,	// (0x0002e7e8) main_pane_set_t4_copy1

0xf2ee,	// (0x0002e6f5) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0002e6f5) set_content_pane_g1_copy1

0xf3ef,	// (0x0002e7f6) setting_code_pane_copy1

0xa4e3,	// (0x000298ea) setting_slider_graphic_pane_copy1

0xa4e3,	// (0x000298ea) setting_slider_pane_copy1

0xa4e3,	// (0x000298ea) setting_text_pane_copy1

0xa4ed,	// (0x000298f4) setting_volume_pane_copy1

0xf3f9,	// (0x0002e800) settings_code_pane_cp2_copy1

0xf401,	// (0x0002e808) settings_code_pane_cp_copy1_ParamLimits

0xf401,	// (0x0002e808) settings_code_pane_cp_copy1

0xf415,	// (0x0002e81c) volume_set_pane_copy1

0xf41d,	// (0x0002e824) volume_set_pane_g10_copy1

0xf425,	// (0x0002e82c) volume_set_pane_g1_copy1

0xf42d,	// (0x0002e834) volume_set_pane_g2_copy1

0xf435,	// (0x0002e83c) volume_set_pane_g3_copy1

0xf43d,	// (0x0002e844) volume_set_pane_g4_copy1

0xf445,	// (0x0002e84c) volume_set_pane_g5_copy1

0xf44d,	// (0x0002e854) volume_set_pane_g6_copy1

0xf455,	// (0x0002e85c) volume_set_pane_g7_copy1

0xf45d,	// (0x0002e864) volume_set_pane_g8_copy1

0xf465,	// (0x0002e86c) volume_set_pane_g9_copy1

0x2cd3,	// (0x000220da) bg_set_opt_pane_cp_copy1_ParamLimits

0x2cd3,	// (0x000220da) bg_set_opt_pane_cp_copy1

0xa56a,	// (0x00029971) setting_slider_pane_t1_copy1_ParamLimits

0xa56a,	// (0x00029971) setting_slider_pane_t1_copy1

0xf46d,	// (0x0002e874) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x0002e874) setting_slider_pane_t2_copy1

0xf487,	// (0x0002e88e) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x0002e88e) setting_slider_pane_t3_copy1

0xf49f,	// (0x0002e8a6) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x0002e8a6) slider_set_pane_copy1

0x35a6,	// (0x000229ad) set_opt_bg_pane_g1_copy2

0x35ae,	// (0x000229b5) set_opt_bg_pane_g2_copy2

0xa5d0,	// (0x000299d7) set_opt_bg_pane_g3_copy2

0x35be,	// (0x000229c5) set_opt_bg_pane_g4_copy2

0x35c6,	// (0x000229cd) set_opt_bg_pane_g5_copy2

0x35ce,	// (0x000229d5) set_opt_bg_pane_g6_copy2

0xf4b5,	// (0x0002e8bc) set_opt_bg_pane_g7_copy2

0xa5e2,	// (0x000299e9) set_opt_bg_pane_g8_copy2

0xa5ec,	// (0x000299f3) set_opt_bg_pane_g9_copy2

0x2b89,	// (0x00021f90) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b89,	// (0x00021f90) aid_size_touch_slider_mark_copy1

0xa5f6,	// (0x000299fd) slider_set_pane_g1_copy1

0x2b9d,	// (0x00021fa4) slider_set_pane_g2_copy1

0x1e78,	// (0x0002127f) slider_set_pane_g3_copy1_ParamLimits

0x1e78,	// (0x0002127f) slider_set_pane_g3_copy1

0x1e8c,	// (0x00021293) slider_set_pane_g4_copy1_ParamLimits

0x1e8c,	// (0x00021293) slider_set_pane_g4_copy1

0x1ea4,	// (0x000212ab) slider_set_pane_g5_copy1_ParamLimits

0x1ea4,	// (0x000212ab) slider_set_pane_g5_copy1

0x1e78,	// (0x0002127f) slider_set_pane_g6_copy1_ParamLimits

0x1e78,	// (0x0002127f) slider_set_pane_g6_copy1

0xc8f5,	// (0x0002bcfc) slider_set_pane_g7_copy1_ParamLimits

0xc8f5,	// (0x0002bcfc) slider_set_pane_g7_copy1

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp2_copy1

0xa5ff,	// (0x00029a06) setting_slider_graphic_pane_g1_copy1

0xf4bd,	// (0x0002e8c4) setting_slider_graphic_pane_t1_copy1

0xf4cd,	// (0x0002e8d4) setting_slider_graphic_pane_t2_copy1

0xf4dd,	// (0x0002e8e4) slider_set_pane_cp_copy1

0xa638,	// (0x00029a3f) input_focus_pane_cp1_copy1

0xa641,	// (0x00029a48) list_set_text_pane_copy1

0xa649,	// (0x00029a50) setting_text_pane_g1_copy1

0xbbe1,	// (0x0002afe8) set_text_pane_t1_copy1

0xa638,	// (0x00029a3f) input_focus_pane_cp2_copy1

0xa649,	// (0x00029a50) setting_code_pane_g1_copy1

0xf4e5,	// (0x0002e8ec) setting_code_pane_t1_copy1

0xc90b,	// (0x0002bd12) list_set_graphic_pane_copy1

0x2bf3,	// (0x00021ffa) bg_set_opt_pane_cp4_copy1

0xcb18,	// (0x0002bf1f) list_set_graphic_pane_g1_copy1_ParamLimits

0xcb18,	// (0x0002bf1f) list_set_graphic_pane_g1_copy1

0xf4f3,	// (0x0002e8fa) list_set_graphic_pane_g2_copy1

0xcb30,	// (0x0002bf37) list_set_graphic_pane_t1_copy1_ParamLimits

0xcb30,	// (0x0002bf37) list_set_graphic_pane_t1_copy1

0x75d9,	// (0x000269e0) rs_clock_indi_pane_g1

0xa67a,	// (0x00029a81) rs_clock_indi_pane_t1

0x9eeb,	// (0x000292f2) rs_indi_pane

0xa688,	// (0x00029a8f) rs_indi_pane_g1

0xa691,	// (0x00029a98) rs_indi_pane_g2

0xa69a,	// (0x00029aa1) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002f2b3) rs_indi_pane_g

0x41a4,	// (0x000235ab) bg_popup_preview_window_pane_cp03

0xa6a3,	// (0x00029aaa) popup_fep_tooltip_window_t1

0x8254,	// (0x0002765b) popup_note2_window_g2_ParamLimits

0x8254,	// (0x0002765b) popup_note2_window_g2

0x0001,

0xfc6d,	// (0x0002f074) popup_note2_window_g_ParamLimits

0xfc6d,	// (0x0002f074) popup_note2_window_g

0x874f,	// (0x00027b56) bg_popup_sub_pane_cp11_ParamLimits

0x875c,	// (0x00027b63) cell_ai3_links_pane_g1_ParamLimits

0x8773,	// (0x00027b7a) cell_ai3_links_pane_t1

0xbbe1,	// (0x0002afe8) set_text_pane_t1_copy1_ParamLimits

0x40b5,	// (0x000234bc) cell_graphic_popup_pane_cp2_ParamLimits

0x40b5,	// (0x000234bc) cell_graphic_popup_pane_cp2

0xa6b1,	// (0x00029ab8) cell_graphic_popup_pane_g1_cp2

0x328a,	// (0x00022691) cell_graphic_popup_pane_g2_cp2

0xa6b9,	// (0x00029ac0) cell_graphic_popup_pane_g3_cp2

0xa6c1,	// (0x00029ac8) cell_graphic_popup_pane_t2_cp2

0x329b,	// (0x000226a2) grid_highlight_pane_cp3_cp2

0x38e9,	// (0x00022cf0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x353f,	// (0x00022946) main_tmo_pane_ParamLimits

0xe38a,	// (0x0002d791) popup_tmo_big_image_note_window

0xef6a,	// (0x0002e371) cell_ai5_widget_list_pane

0xef72,	// (0x0002e379) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0002e65b) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0002e670) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0002e687) tmo_note_info_pane_t3_ParamLimits

0xa294,	// (0x0002969b) tmo_note_info_pane_t4_ParamLimits

0xa2a6,	// (0x000296ad) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002f2a1) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0002e701) settings_container_pane_ParamLimits

0xa630,	// (0x00029a37) indicator_popup_pane_cp5

0xa630,	// (0x00029a37) indicator_popup_pane_cp6

0xc90b,	// (0x0002bd12) list_set_graphic_pane_copy1_ParamLimits

0x2bdf,	// (0x00021fe6) bg_popup_window_pane_cp23

0xa6cf,	// (0x00029ad6) popup_tmo_big_image_note_window_g1

0xa6d9,	// (0x00029ae0) popup_tmo_big_image_note_window_t1

0xa6e9,	// (0x00029af0) popup_tmo_big_image_note_window_t2

0xa6f9,	// (0x00029b00) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002f2ba) popup_tmo_big_image_note_window_t

0xf4fb,	// (0x0002e902) cell_ai5_widget_lrg_icon_pane_g1

0xf503,	// (0x0002e90a) cell_ai5_widget_lrg_icon_pane_t1

0xf511,	// (0x0002e918) cell_ai5_widget_list_row_pane_ParamLimits

0xf511,	// (0x0002e918) cell_ai5_widget_list_row_pane

0xf52a,	// (0x0002e931) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf52a,	// (0x0002e931) cell_ai5_widget_list_row_pane_g1

0xf537,	// (0x0002e93e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf537,	// (0x0002e93e) cell_ai5_widget_list_row_pane_t1

0xf54f,	// (0x0002e956) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf54f,	// (0x0002e956) cell_ai5_widget_list_row_pane_t2

0x0001,

0x00f3,	// (0x0001f4fa) cell_ai5_widget_list_row_pane_t_ParamLimits

0x00f3,	// (0x0001f4fa) cell_ai5_widget_list_row_pane_t

0x2bdf,	// (0x00021fe6) main_fep_vtchi_ss_pane

0xa76f,	// (0x00029b76) popup_fep_char_pre_window

0xa777,	// (0x00029b7e) popup_fep_ituss_window

0xa798,	// (0x00029b9f) popup_fep_vkbss_window

0xa7b7,	// (0x00029bbe) grid_vkbss_keypad_pane_ParamLimits

0xa7b7,	// (0x00029bbe) grid_vkbss_keypad_pane

0xa7c7,	// (0x00029bce) ituss_keypad_pane

0xa7e0,	// (0x00029be7) aid_vkbss_key_offset_ParamLimits

0xa7e0,	// (0x00029be7) aid_vkbss_key_offset

0xa7ec,	// (0x00029bf3) cell_vkbss_key_pane_ParamLimits

0xa7ec,	// (0x00029bf3) cell_vkbss_key_pane

0xa802,	// (0x00029c09) bg_cell_vkbss_key_g1_ParamLimits

0xa802,	// (0x00029c09) bg_cell_vkbss_key_g1

0xa80e,	// (0x00029c15) cell_vkbss_key_3p_pane_ParamLimits

0xa80e,	// (0x00029c15) cell_vkbss_key_3p_pane

0xa828,	// (0x00029c2f) cell_vkbss_key_g1_ParamLimits

0xa828,	// (0x00029c2f) cell_vkbss_key_g1

0xa842,	// (0x00029c49) cell_vkbss_key_t1_ParamLimits

0xa842,	// (0x00029c49) cell_vkbss_key_t1

0xa86d,	// (0x00029c74) cell_ituss_key_pane_ParamLimits

0xa86d,	// (0x00029c74) cell_ituss_key_pane

0xa87d,	// (0x00029c84) bg_cell_ituss_key_g1_ParamLimits

0xa87d,	// (0x00029c84) bg_cell_ituss_key_g1

0xa889,	// (0x00029c90) cell_ituss_key_pane_g1_ParamLimits

0xa889,	// (0x00029c90) cell_ituss_key_pane_g1

0xa895,	// (0x00029c9c) cell_ituss_key_pane_g2_ParamLimits

0xa895,	// (0x00029c9c) cell_ituss_key_pane_g2

0x0001,

0xfeba,	// (0x0002f2c1) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0002f2c1) cell_ituss_key_pane_g

0xa8ae,	// (0x00029cb5) cell_ituss_key_t1_ParamLimits

0xa8ae,	// (0x00029cb5) cell_ituss_key_t1

0xa8dc,	// (0x00029ce3) cell_ituss_key_t2_ParamLimits

0xa8dc,	// (0x00029ce3) cell_ituss_key_t2

0xa90d,	// (0x00029d14) cell_ituss_key_t3_ParamLimits

0xa90d,	// (0x00029d14) cell_ituss_key_t3

0xa93e,	// (0x00029d45) cell_ituss_key_t4_ParamLimits

0xa93e,	// (0x00029d45) cell_ituss_key_t4

0x0003,

0xfebf,	// (0x0002f2c6) cell_ituss_key_t_ParamLimits

0xfebf,	// (0x0002f2c6) cell_ituss_key_t

0xa96f,	// (0x00029d76) cell_vkbss_key_3p_pane_g1

0xa977,	// (0x00029d7e) cell_vkbss_key_3p_pane_g2

0xa97f,	// (0x00029d86) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec8,	// (0x0002f2cf) cell_vkbss_key_3p_pane_g

0x2bdf,	// (0x00021fe6) bg_popup_fep_char_preview_window_cp02

0xa987,	// (0x00029d8e) popup_fep_char_pre_window_t1

0xef60,	// (0x0002e367) main_ai5_sk_pane

0xa320,	// (0x00029727) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa32c,	// (0x00029733) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa340,	// (0x00029747) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa34f,	// (0x00029756) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002f2ac) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa362,	// (0x00029769) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x353f,	// (0x00022946) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf561,	// (0x0002e968) main_ai5_sk_pane_g1

0x54b2,	// (0x000248b9) popup_query_code_window_g1

0xa78d,	// (0x00029b94) popup_fep_vkb_icf_pane

0xa7a1,	// (0x00029ba8) popup_fep_vtchi_icf_pane

0x353f,	// (0x00022946) bg_icf_pane

0xa9ae,	// (0x00029db5) list_vkb_icf_pane

0x353f,	// (0x00022946) bg_icf_pane_cp01

0xa9c6,	// (0x00029dcd) vtchi_icf_list_pane

0xa9d6,	// (0x00029ddd) list_vkb_icf_pane_t1_ParamLimits

0xa9d6,	// (0x00029ddd) list_vkb_icf_pane_t1

0xa9ed,	// (0x00029df4) vtchi_icf_list_pane_t1_ParamLimits

0xa9ed,	// (0x00029df4) vtchi_icf_list_pane_t1

0xa777,	// (0x00029b7e) popup_fep_ituss_window_ParamLimits

0xa7a1,	// (0x00029ba8) popup_fep_vtchi_icf_pane_ParamLimits

0xa7c7,	// (0x00029bce) ituss_keypad_pane_ParamLimits

0xa7d7,	// (0x00029bde) ituss_sks_pane

0x353f,	// (0x00022946) bg_icf_pane_ParamLimits

0xa99f,	// (0x00029da6) icf_edit_indi_pane_ParamLimits

0xa99f,	// (0x00029da6) icf_edit_indi_pane

0xa9ae,	// (0x00029db5) list_vkb_icf_pane_ParamLimits

0x353f,	// (0x00022946) bg_icf_pane_cp01_ParamLimits

0xa9ba,	// (0x00029dc1) icf_edit_indi_pane_cp01_ParamLimits

0xa9ba,	// (0x00029dc1) icf_edit_indi_pane_cp01

0xa9ce,	// (0x00029dd5) vtchi_query_pane

0x786b,	// (0x00026c72) icf_edit_indi_pane_g1_ParamLimits

0x786b,	// (0x00026c72) icf_edit_indi_pane_g1

0xaa09,	// (0x00029e10) icf_edit_indi_pane_g2_ParamLimits

0xaa09,	// (0x00029e10) icf_edit_indi_pane_g2

0x0001,

0xfecf,	// (0x0002f2d6) icf_edit_indi_pane_g_ParamLimits

0xfecf,	// (0x0002f2d6) icf_edit_indi_pane_g

0xaa15,	// (0x00029e1c) icf_edit_indi_pane_t1

0xaa23,	// (0x00029e2a) bg_input_focus_pane_cp042

0x346e,	// (0x00022875) vtchi_button_pane

0xaa2c,	// (0x00029e33) vtchi_query_pane_t1

0xaa3a,	// (0x00029e41) vtchi_query_pane_t2

0xaa48,	// (0x00029e4f) vtchi_query_pane_t3

0x0002,

0xfed4,	// (0x0002f2db) vtchi_query_pane_t

0x2bdf,	// (0x00021fe6) bg_button_pane_cp13

0xaa56,	// (0x00029e5d) vtchi_button_pane_g1

0x8fae,	// (0x000283b5) ituss_sks_pane_g1

0xaa5e,	// (0x00029e65) ituss_sks_pane_g2

0x0001,

0xfedb,	// (0x0002f2e2) ituss_sks_pane_g

0xaa67,	// (0x00029e6e) ituss_sks_pane_t1

0xaa75,	// (0x00029e7c) ituss_sks_pane_t2

0x0001,

0xfee0,	// (0x0002f2e7) ituss_sks_pane_t

0x703b,	// (0x00026442) indicator_nsta_pane_cp_g1

0x7044,	// (0x0002644b) indicator_nsta_pane_cp_g2

0x704c,	// (0x00026453) indicator_nsta_pane_cp_g3

0x7054,	// (0x0002645b) indicator_nsta_pane_cp_g4

0x705c,	// (0x00026463) indicator_nsta_pane_cp_g5

0x7064,	// (0x0002646b) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x0002eebe) indicator_nsta_pane_cp_g

0xed85,	// (0x0002e18c) cell_graphic2_pane_t2_ParamLimits

0xed85,	// (0x0002e18c) cell_graphic2_pane_t2

0x0001,

0xfdc4,	// (0x0002f1cb) cell_graphic2_pane_t_ParamLimits

0xfdc4,	// (0x0002f1cb) cell_graphic2_pane_t

0xedbb,	// (0x0002e1c2) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
