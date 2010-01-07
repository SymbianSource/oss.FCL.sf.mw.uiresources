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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001dd76 };

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
0x80cc,	// (0x00025e42) Screen

0x80d8,	// (0x00025e4e) application_window_ParamLimits

0x80d8,	// (0x00025e4e) application_window

0x444e,	// (0x000221c4) screen_g1

0x8134,	// (0x00025eaa) area_bottom_pane_ParamLimits

0x8134,	// (0x00025eaa) area_bottom_pane

0x81f4,	// (0x00025f6a) area_top_pane_ParamLimits

0x81f4,	// (0x00025f6a) area_top_pane

0x8292,	// (0x00026008) main_pane_ParamLimits

0x8292,	// (0x00026008) main_pane

0x4458,	// (0x000221ce) misc_graphics

0x959c,	// (0x00027312) battery_pane_ParamLimits

0x959c,	// (0x00027312) battery_pane

0x61c6,	// (0x00023f3c) bg_status_flat_pane_g8

0x61ce,	// (0x00023f44) bg_status_flat_pane_g9

0x592c,	// (0x000236a2) context_pane_ParamLimits

0x592c,	// (0x000236a2) context_pane

0x96d0,	// (0x00027446) navi_pane_ParamLimits

0x96d0,	// (0x00027446) navi_pane

0x973c,	// (0x000274b2) signal_pane_ParamLimits

0x973c,	// (0x000274b2) signal_pane

0x0008,

0xf8a8,	// (0x0002d61e) bg_status_flat_pane_g

0x97a1,	// (0x00027517) status_pane_g1_ParamLimits

0x97a1,	// (0x00027517) status_pane_g1

0x97b5,	// (0x0002752b) status_pane_g2_ParamLimits

0x97b5,	// (0x0002752b) status_pane_g2

0x5991,	// (0x00023707) status_pane_g3_ParamLimits

0x5991,	// (0x00023707) status_pane_g3

0x0004,

0xf7db,	// (0x0002d551) status_pane_g_ParamLimits

0xf7db,	// (0x0002d551) status_pane_g

0x97c1,	// (0x00027537) title_pane_ParamLimits

0x97c1,	// (0x00027537) title_pane

0x97fe,	// (0x00027574) uni_indicator_pane_ParamLimits

0x97fe,	// (0x00027574) uni_indicator_pane

0x5757,	// (0x000234cd) bg_list_pane_ParamLimits

0x5757,	// (0x000234cd) bg_list_pane

0xe60e,	// (0x0002c384) find_pane

0x90b4,	// (0x00026e2a) listscroll_app_pane_ParamLimits

0x90b4,	// (0x00026e2a) listscroll_app_pane

0x5777,	// (0x000234ed) listscroll_form_pane

0xe616,	// (0x0002c38c) listscroll_gen_pane_ParamLimits

0xe616,	// (0x0002c38c) listscroll_gen_pane

0x5777,	// (0x000234ed) listscroll_set_pane

0x8864,	// (0x000265da) main_idle_act_pane

0x553d,	// (0x000232b3) main_idle_trad_pane

0x553d,	// (0x000232b3) main_list_empty_pane

0x4c52,	// (0x000229c8) main_midp_pane

0x5791,	// (0x00023507) main_pane_g1_ParamLimits

0x5791,	// (0x00023507) main_pane_g1

0x90c0,	// (0x00026e36) popup_ai_message_window_ParamLimits

0x90c0,	// (0x00026e36) popup_ai_message_window

0x913e,	// (0x00026eb4) popup_fep_china_uni_window_ParamLimits

0x913e,	// (0x00026eb4) popup_fep_china_uni_window

0x57d1,	// (0x00023547) popup_fep_japan_candidate_window_ParamLimits

0x57d1,	// (0x00023547) popup_fep_japan_candidate_window

0x57ef,	// (0x00023565) popup_fep_japan_predictive_window_ParamLimits

0x57ef,	// (0x00023565) popup_fep_japan_predictive_window

0x9198,	// (0x00026f0e) popup_find_window

0x91a5,	// (0x00026f1b) popup_grid_graphic_window_ParamLimits

0x91a5,	// (0x00026f1b) popup_grid_graphic_window

0x581f,	// (0x00023595) popup_large_graphic_colour_window

0x91cb,	// (0x00026f41) popup_menu_window_ParamLimits

0x91cb,	// (0x00026f41) popup_menu_window

0x9385,	// (0x000270fb) popup_note_image_window

0x9371,	// (0x000270e7) popup_note_wait_window_ParamLimits

0x9371,	// (0x000270e7) popup_note_wait_window

0x9371,	// (0x000270e7) popup_note_window_ParamLimits

0x9371,	// (0x000270e7) popup_note_window

0x93db,	// (0x00027151) popup_query_code_window_ParamLimits

0x93db,	// (0x00027151) popup_query_code_window

0x5845,	// (0x000235bb) popup_query_data_code_window_ParamLimits

0x5845,	// (0x000235bb) popup_query_data_code_window

0x93ef,	// (0x00027165) popup_query_data_window_ParamLimits

0x93ef,	// (0x00027165) popup_query_data_window

0x9407,	// (0x0002717d) popup_query_sat_info_window_ParamLimits

0x9407,	// (0x0002717d) popup_query_sat_info_window

0x9440,	// (0x000271b6) popup_snote_single_graphic_window_ParamLimits

0x9440,	// (0x000271b6) popup_snote_single_graphic_window

0x9440,	// (0x000271b6) popup_snote_single_text_window_ParamLimits

0x9440,	// (0x000271b6) popup_snote_single_text_window

0x585c,	// (0x000235d2) popup_sub_window_general

0x58a2,	// (0x00023618) popup_window_general_ParamLimits

0x58a2,	// (0x00023618) popup_window_general

0x58b7,	// (0x0002362d) power_save_pane

0x8f30,	// (0x00026ca6) control_pane_g1_ParamLimits

0x8f30,	// (0x00026ca6) control_pane_g1

0x8f59,	// (0x00026ccf) control_pane_g2_ParamLimits

0x8f59,	// (0x00026ccf) control_pane_g2

0x5731,	// (0x000234a7) control_pane_g3_ParamLimits

0x5731,	// (0x000234a7) control_pane_g3

0x0007,

0xf7c3,	// (0x0002d539) control_pane_g_ParamLimits

0xf7c3,	// (0x0002d539) control_pane_g

0x8fc5,	// (0x00026d3b) control_pane_t1_ParamLimits

0x8fc5,	// (0x00026d3b) control_pane_t1

0x9017,	// (0x00026d8d) control_pane_t2_ParamLimits

0x9017,	// (0x00026d8d) control_pane_t2

0x0002,

0xf7d4,	// (0x0002d54a) control_pane_t_ParamLimits

0xf7d4,	// (0x0002d54a) control_pane_t

0x5652,	// (0x000233c8) navi_navi_volume_pane_cp1

0x565b,	// (0x000233d1) status_small_icon_pane

0x5663,	// (0x000233d9) status_small_pane_g1_ParamLimits

0x5663,	// (0x000233d9) status_small_pane_g1

0x5697,	// (0x0002340d) status_small_pane_g2_ParamLimits

0x5697,	// (0x0002340d) status_small_pane_g2

0x56a3,	// (0x00023419) status_small_pane_g3_ParamLimits

0x56a3,	// (0x00023419) status_small_pane_g3

0x56af,	// (0x00023425) status_small_pane_g4_ParamLimits

0x56af,	// (0x00023425) status_small_pane_g4

0x56bb,	// (0x00023431) status_small_pane_g5_ParamLimits

0x56bb,	// (0x00023431) status_small_pane_g5

0x56ca,	// (0x00023440) status_small_pane_g6_ParamLimits

0x56ca,	// (0x00023440) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0002d528) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0002d528) status_small_pane_g

0x56fa,	// (0x00023470) status_small_pane_t1

0x571d,	// (0x00023493) status_small_wait_pane_ParamLimits

0x571d,	// (0x00023493) status_small_wait_pane

0x8b72,	// (0x000268e8) aid_levels_signal_ParamLimits

0x8b72,	// (0x000268e8) aid_levels_signal

0x8b84,	// (0x000268fa) signal_pane_g1_ParamLimits

0x8b84,	// (0x000268fa) signal_pane_g1

0x8b99,	// (0x0002690f) signal_pane_g2_ParamLimits

0x8b99,	// (0x0002690f) signal_pane_g2

0x0001,

0xf747,	// (0x0002d4bd) signal_pane_g_ParamLimits

0xf747,	// (0x0002d4bd) signal_pane_g

0x5081,	// (0x00022df7) context_pane_g1

0x84c3,	// (0x00026239) title_pane_g1

0x84ed,	// (0x00026263) title_pane_t1

0x446e,	// (0x000221e4) title_pane_t2

0x4494,	// (0x0002220a) title_pane_t3

0x0002,

0xf59b,	// (0x0002d311) title_pane_t

0x9816,	// (0x0002758c) aid_levels_battery_ParamLimits

0x9816,	// (0x0002758c) aid_levels_battery

0x982a,	// (0x000275a0) battery_pane_g1_ParamLimits

0x982a,	// (0x000275a0) battery_pane_g1

0x9840,	// (0x000275b6) battery_pane_g2_ParamLimits

0x9840,	// (0x000275b6) battery_pane_g2

0x0001,

0xf7e6,	// (0x0002d55c) battery_pane_g_ParamLimits

0xf7e6,	// (0x0002d55c) battery_pane_g

0x9d7e,	// (0x00027af4) uni_indicator_pane_g1

0x9d93,	// (0x00027b09) uni_indicator_pane_g2

0x9da9,	// (0x00027b1f) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0002d6c6) uni_indicator_pane_g

0x53ad,	// (0x00023123) navi_icon_pane_ParamLimits

0x53ad,	// (0x00023123) navi_icon_pane

0x52f4,	// (0x0002306a) navi_midp_pane

0x53c9,	// (0x0002313f) navi_navi_pane

0x53d3,	// (0x00023149) navi_text_pane_ParamLimits

0x53d3,	// (0x00023149) navi_text_pane

0x444e,	// (0x000221c4) status_small_wait_pane_g1

0x476f,	// (0x000224e5) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0002d6c1) status_small_wait_pane_g

0x9d23,	// (0x00027a99) navi_navi_icon_text_pane

0x9d2b,	// (0x00027aa1) navi_navi_pane_g1_ParamLimits

0x9d2b,	// (0x00027aa1) navi_navi_pane_g1

0x9d3d,	// (0x00027ab3) navi_navi_pane_g2_ParamLimits

0x9d3d,	// (0x00027ab3) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0002d68f) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0002d68f) navi_navi_pane_g

0x6749,	// (0x000244bf) navi_navi_tabs_pane

0x9d4f,	// (0x00027ac5) navi_navi_text_pane

0x9d23,	// (0x00027a99) navi_navi_volume_pane

0x9d0e,	// (0x00027a84) navi_text_pane_t1

0x9cff,	// (0x00027a75) navi_icon_pane_g1

0x668a,	// (0x00024400) navi_navi_text_pane_t1

0x9cee,	// (0x00027a64) navi_navi_volume_pane_g1

0x9cf6,	// (0x00027a6c) volume_small_pane

0x9c60,	// (0x000279d6) navi_navi_icon_text_pane_g1

0x9c68,	// (0x000279de) navi_navi_icon_text_pane_t1

0x53c9,	// (0x0002313f) navi_tabs_2_long_pane

0x53c9,	// (0x0002313f) navi_tabs_2_pane

0x53c9,	// (0x0002313f) navi_tabs_3_long_pane

0x53c9,	// (0x0002313f) navi_tabs_3_pane

0x53c9,	// (0x0002313f) navi_tabs_4_pane

0x9c40,	// (0x000279b6) tabs_2_active_pane_ParamLimits

0x9c40,	// (0x000279b6) tabs_2_active_pane

0x9c50,	// (0x000279c6) tabs_2_passive_pane_ParamLimits

0x9c50,	// (0x000279c6) tabs_2_passive_pane

0x9c0e,	// (0x00027984) tabs_3_active_pane_ParamLimits

0x9c0e,	// (0x00027984) tabs_3_active_pane

0x9c1e,	// (0x00027994) tabs_3_passive_pane_ParamLimits

0x9c1e,	// (0x00027994) tabs_3_passive_pane

0x9c2f,	// (0x000279a5) tabs_3_passive_pane_cp_ParamLimits

0x9c2f,	// (0x000279a5) tabs_3_passive_pane_cp

0x9bca,	// (0x00027940) tabs_4_active_pane_ParamLimits

0x9bca,	// (0x00027940) tabs_4_active_pane

0x9bdb,	// (0x00027951) tabs_4_passive_pane_ParamLimits

0x9bdb,	// (0x00027951) tabs_4_passive_pane

0x9bec,	// (0x00027962) tabs_4_passive_pane_cp_ParamLimits

0x9bec,	// (0x00027962) tabs_4_passive_pane_cp

0x9bfd,	// (0x00027973) tabs_4_passive_pane_cp2_ParamLimits

0x9bfd,	// (0x00027973) tabs_4_passive_pane_cp2

0x9ba6,	// (0x0002791c) tabs_2_long_active_pane_ParamLimits

0x9ba6,	// (0x0002791c) tabs_2_long_active_pane

0x9bb8,	// (0x0002792e) tabs_2_long_passive_pane_ParamLimits

0x9bb8,	// (0x0002792e) tabs_2_long_passive_pane

0x9b61,	// (0x000278d7) tabs_3_long_active_pane_ParamLimits

0x9b61,	// (0x000278d7) tabs_3_long_active_pane

0x9b7a,	// (0x000278f0) tabs_3_long_passive_pane_ParamLimits

0x9b7a,	// (0x000278f0) tabs_3_long_passive_pane

0x9b8d,	// (0x00027903) tabs_3_long_passive_pane_cp_ParamLimits

0x9b8d,	// (0x00027903) tabs_3_long_passive_pane_cp

0x9b07,	// (0x0002787d) volume_small_pane_g1

0x9b10,	// (0x00027886) volume_small_pane_g2

0x9b19,	// (0x0002788f) volume_small_pane_g3

0x9b22,	// (0x00027898) volume_small_pane_g4

0x9b2b,	// (0x000278a1) volume_small_pane_g5

0x9b34,	// (0x000278aa) volume_small_pane_g6

0x9b3d,	// (0x000278b3) volume_small_pane_g7

0x9b46,	// (0x000278bc) volume_small_pane_g8

0x9b4f,	// (0x000278c5) volume_small_pane_g9

0x9b58,	// (0x000278ce) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0002d65b) volume_small_pane_g

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp2_ParamLimits

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp2

0x8555,	// (0x000262cb) tabs_3_active_pane_g1

0x855d,	// (0x000262d3) tabs_3_active_pane_t1

0x44b4,	// (0x0002222a) bg_passive_tab_pane_cp2_ParamLimits

0x44b4,	// (0x0002222a) bg_passive_tab_pane_cp2

0x8555,	// (0x000262cb) tabs_3_passive_pane_g1

0x855d,	// (0x000262d3) tabs_3_passive_pane_t1

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp3_ParamLimits

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp3

0x856f,	// (0x000262e5) tabs_4_active_pane_g1

0x8577,	// (0x000262ed) tabs_4_active_pane_t1

0x44b4,	// (0x0002222a) bg_passive_tab_pane_cp3_ParamLimits

0x44b4,	// (0x0002222a) bg_passive_tab_pane_cp3

0x856f,	// (0x000262e5) tabs_4_1_passive_pane_g1

0x8577,	// (0x000262ed) tabs_4_1_passive_pane_t1

0x4c52,	// (0x000229c8) list_highlight_pane_cp2

0x9ee9,	// (0x00027c5f) list_set_pane_ParamLimits

0x9ee9,	// (0x00027c5f) list_set_pane

0x9f8b,	// (0x00027d01) main_pane_set_t1_ParamLimits

0x9f8b,	// (0x00027d01) main_pane_set_t1

0x9fab,	// (0x00027d21) main_pane_set_t2_ParamLimits

0x9fab,	// (0x00027d21) main_pane_set_t2

0x9fbf,	// (0x00027d35) main_pane_set_t3_ParamLimits

0x9fbf,	// (0x00027d35) main_pane_set_t3

0x9fd1,	// (0x00027d47) main_pane_set_t4_ParamLimits

0x9fd1,	// (0x00027d47) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0002d72b) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0002d72b) main_pane_set_t

0x9fe3,	// (0x00027d59) setting_code_pane

0x9fed,	// (0x00027d63) setting_slider_graphic_pane

0x9fed,	// (0x00027d63) setting_slider_pane

0x9fed,	// (0x00027d63) setting_text_pane

0x9fed,	// (0x00027d63) setting_volume_pane

0x8589,	// (0x000262ff) volume_set_pane

0x44b4,	// (0x0002222a) bg_set_opt_pane_cp

0x8591,	// (0x00026307) setting_slider_pane_t1

0x85aa,	// (0x00026320) setting_slider_pane_t2

0x85c3,	// (0x00026339) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002d318) setting_slider_pane_t

0x85da,	// (0x00026350) slider_set_pane

0x4458,	// (0x000221ce) bg_set_opt_pane_cp2

0x44c2,	// (0x00022238) setting_slider_graphic_pane_g1

0x85f0,	// (0x00026366) setting_slider_graphic_pane_t1

0x85ff,	// (0x00026375) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002d31f) setting_slider_graphic_pane_t

0x860e,	// (0x00026384) slider_set_pane_cp

0x4458,	// (0x000221ce) input_focus_pane_cp1

0x6bb0,	// (0x00024926) list_set_text_pane

0x444e,	// (0x000221c4) setting_text_pane_g1

0x4458,	// (0x000221ce) input_focus_pane_cp2

0x444e,	// (0x000221c4) setting_code_pane_g1

0x44cb,	// (0x00022241) setting_code_pane_t1

0xdec1,	// (0x0002bc37) set_text_pane_t1_ParamLimits

0xdec1,	// (0x0002bc37) set_text_pane_t1

0x4b62,	// (0x000228d8) set_opt_bg_pane_g1

0x4b6a,	// (0x000228e0) set_opt_bg_pane_g2

0x6b90,	// (0x00024906) set_opt_bg_pane_g3

0x4b7a,	// (0x000228f0) set_opt_bg_pane_g4

0x4b82,	// (0x000228f8) set_opt_bg_pane_g5

0x4b8a,	// (0x00022900) set_opt_bg_pane_g6

0x6b98,	// (0x0002490e) set_opt_bg_pane_g7

0x6ba0,	// (0x00024916) set_opt_bg_pane_g8

0x6ba8,	// (0x0002491e) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0002d718) set_opt_bg_pane_g

0x6b83,	// (0x000248f9) slider_set_pane_g1

0x9e5e,	// (0x00027bd4) slider_set_pane_g2

0x0006,

0xf993,	// (0x0002d709) slider_set_pane_g

0x9dd5,	// (0x00027b4b) volume_set_pane_g1

0x9ddd,	// (0x00027b53) volume_set_pane_g2

0x9de5,	// (0x00027b5b) volume_set_pane_g3

0x9ded,	// (0x00027b63) volume_set_pane_g4

0x9df5,	// (0x00027b6b) volume_set_pane_g5

0x9dfd,	// (0x00027b73) volume_set_pane_g6

0x9e05,	// (0x00027b7b) volume_set_pane_g7

0x9e0d,	// (0x00027b83) volume_set_pane_g8

0x9e15,	// (0x00027b8b) volume_set_pane_g9

0x9e1d,	// (0x00027b93) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0002d6e1) volume_set_pane_g

0x8616,	// (0x0002638c) indicator_pane_ParamLimits

0x8616,	// (0x0002638c) indicator_pane

0x8622,	// (0x00026398) main_idle_pane_g2_ParamLimits

0x8622,	// (0x00026398) main_idle_pane_g2

0x864a,	// (0x000263c0) main_pane_idle_g1_ParamLimits

0x864a,	// (0x000263c0) main_pane_idle_g1

0x44d9,	// (0x0002224f) popup_clock_digital_analogue_window_ParamLimits

0x44d9,	// (0x0002224f) popup_clock_digital_analogue_window

0x8657,	// (0x000263cd) soft_indicator_pane_ParamLimits

0x8657,	// (0x000263cd) soft_indicator_pane

0x8663,	// (0x000263d9) wallpaper_pane_ParamLimits

0x8663,	// (0x000263d9) wallpaper_pane

0x444e,	// (0x000221c4) wallpaper_pane_g1

0x866f,	// (0x000263e5) indicator_pane_g1_ParamLimits

0x866f,	// (0x000263e5) indicator_pane_g1

0x6cf7,	// (0x00024a6d) navi_navi_icon_text_pane_srt_g1

0x4507,	// (0x0002227d) soft_indicator_pane_t1

0x4521,	// (0x00022297) aid_ps_area_pane

0x867b,	// (0x000263f1) aid_ps_clock_pane

0x4532,	// (0x000222a8) aid_ps_indicator_pane

0x453e,	// (0x000222b4) indicator_ps_pane_ParamLimits

0x453e,	// (0x000222b4) indicator_ps_pane

0x454d,	// (0x000222c3) power_save_pane_g1_ParamLimits

0x454d,	// (0x000222c3) power_save_pane_g1

0x4559,	// (0x000222cf) power_save_pane_g2_ParamLimits

0x4559,	// (0x000222cf) power_save_pane_g2

0x80e8,	// (0x00025e5e) aid_navinavi_width_pane

0x4521,	// (0x00022297) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002d324) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002d324) power_save_pane_g

0x4567,	// (0x000222dd) power_save_pane_t1_ParamLimits

0x4567,	// (0x000222dd) power_save_pane_t1

0x867b,	// (0x000263f1) aid_ps_clock_pane_ParamLimits

0x4532,	// (0x000222a8) aid_ps_indicator_pane_ParamLimits

0x4579,	// (0x000222ef) power_save_pane_t4_ParamLimits

0x4579,	// (0x000222ef) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002d329) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002d329) power_save_pane_t

0x45a3,	// (0x00022319) power_save_t3_ParamLimits

0x45a3,	// (0x00022319) power_save_t3

0x458e,	// (0x00022304) power_save_t2_ParamLimits

0x458e,	// (0x00022304) power_save_t2

0x45b8,	// (0x0002232e) indicator_ps_pane_g1

0x8689,	// (0x000263ff) ai_gene_pane_ParamLimits

0x8689,	// (0x000263ff) ai_gene_pane

0x8695,	// (0x0002640b) ai_links_pane_ParamLimits

0x8695,	// (0x0002640b) ai_links_pane

0x86a1,	// (0x00026417) indicator_pane_cp1_ParamLimits

0x86a1,	// (0x00026417) indicator_pane_cp1

0x86ad,	// (0x00026423) main_pane_idle_g1_cp_ParamLimits

0x86ad,	// (0x00026423) main_pane_idle_g1_cp

0x45c1,	// (0x00022337) popup_ai_links_title_window

0x86b9,	// (0x0002642f) soft_indicator_pane_cp1_ParamLimits

0x86b9,	// (0x0002642f) soft_indicator_pane_cp1

0x69b9,	// (0x0002472f) ai_links_pane_g1

0x69c2,	// (0x00024738) grid_ai_links_pane

0x9d73,	// (0x00027ae9) ai_gene_pane_1

0x69a7,	// (0x0002471d) ai_gene_pane_2

0x69b0,	// (0x00024726) list_highlight_pane_cp4

0x9d57,	// (0x00027acd) cell_ai_link_pane_ParamLimits

0x9d57,	// (0x00027acd) cell_ai_link_pane

0x699f,	// (0x00024715) cell_ai_link_pane_g1

0x476f,	// (0x000224e5) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0002d6bc) cell_ai_link_pane_g

0x4458,	// (0x000221ce) grid_highlight_cp2

0x4458,	// (0x000221ce) bg_popup_sub_pane_cp1

0x45d8,	// (0x0002234e) popup_ai_links_title_window_t1

0x68ed,	// (0x00024663) ai_gene_pane_1_g1_ParamLimits

0x68ed,	// (0x00024663) ai_gene_pane_1_g1

0x68f9,	// (0x0002466f) ai_gene_pane_1_g2_ParamLimits

0x68f9,	// (0x0002466f) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0002d6b2) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0002d6b2) ai_gene_pane_1_g

0x6906,	// (0x0002467c) ai_gene_pane_1_t1_ParamLimits

0x6906,	// (0x0002467c) ai_gene_pane_1_t1

0x693a,	// (0x000246b0) grid_ai_soft_ind_pane

0x68d8,	// (0x0002464e) ai_gene_pane_2_t1_ParamLimits

0x68d8,	// (0x0002464e) ai_gene_pane_2_t1

0x86c5,	// (0x0002643b) main_pane_empty_t1_ParamLimits

0x86c5,	// (0x0002643b) main_pane_empty_t1

0x86dd,	// (0x00026453) main_pane_empty_t2_ParamLimits

0x86dd,	// (0x00026453) main_pane_empty_t2

0x86f2,	// (0x00026468) main_pane_empty_t3_ParamLimits

0x86f2,	// (0x00026468) main_pane_empty_t3

0x8704,	// (0x0002647a) main_pane_empty_t4_ParamLimits

0x8704,	// (0x0002647a) main_pane_empty_t4

0x8716,	// (0x0002648c) main_pane_empty_t5_ParamLimits

0x8716,	// (0x0002648c) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002d32e) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002d32e) main_pane_empty_t

0x4bb3,	// (0x00022929) bg_popup_window_pane_ParamLimits

0x4bb3,	// (0x00022929) bg_popup_window_pane

0x6698,	// (0x0002440e) find_popup_pane_cp2_ParamLimits

0x6698,	// (0x0002440e) find_popup_pane_cp2

0x66a4,	// (0x0002441a) heading_pane_ParamLimits

0x66a4,	// (0x0002441a) heading_pane

0x4458,	// (0x000221ce) bg_popup_sub_pane

0x9c82,	// (0x000279f8) bg_popup_window_pane_g1_ParamLimits

0x9c82,	// (0x000279f8) bg_popup_window_pane_g1

0x9c8e,	// (0x00027a04) bg_popup_window_pane_g2_ParamLimits

0x9c8e,	// (0x00027a04) bg_popup_window_pane_g2

0x9c9a,	// (0x00027a10) bg_popup_window_pane_g3_ParamLimits

0x9c9a,	// (0x00027a10) bg_popup_window_pane_g3

0x9ca6,	// (0x00027a1c) bg_popup_window_pane_g4_ParamLimits

0x9ca6,	// (0x00027a1c) bg_popup_window_pane_g4

0x9cb2,	// (0x00027a28) bg_popup_window_pane_g5_ParamLimits

0x9cb2,	// (0x00027a28) bg_popup_window_pane_g5

0x9cbe,	// (0x00027a34) bg_popup_window_pane_g6_ParamLimits

0x9cbe,	// (0x00027a34) bg_popup_window_pane_g6

0x9cca,	// (0x00027a40) bg_popup_window_pane_g7_ParamLimits

0x9cca,	// (0x00027a40) bg_popup_window_pane_g7

0x9cd6,	// (0x00027a4c) bg_popup_window_pane_g8_ParamLimits

0x9cd6,	// (0x00027a4c) bg_popup_window_pane_g8

0x9ce2,	// (0x00027a58) bg_popup_window_pane_g9_ParamLimits

0x9ce2,	// (0x00027a58) bg_popup_window_pane_g9

0x667e,	// (0x000243f4) bg_popup_window_pane_g10_ParamLimits

0x667e,	// (0x000243f4) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0002d67a) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0002d67a) bg_popup_window_pane_g

0x6635,	// (0x000243ab) bg_popup_heading_pane_ParamLimits

0x6635,	// (0x000243ab) bg_popup_heading_pane

0xa114,	// (0x00027e8a) tabs_4_passive_pane_cp_srt_ParamLimits

0xa114,	// (0x00027e8a) tabs_4_passive_pane_cp_srt

0xa126,	// (0x00027e9c) tabs_4_passive_pane_srt_ParamLimits

0x6649,	// (0x000243bf) heading_pane_g2

0xa126,	// (0x00027e9c) tabs_4_passive_pane_srt

0x4c52,	// (0x000229c8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c52,	// (0x000229c8) bg_passive_tab_pane_cp3_srt

0x6651,	// (0x000243c7) heading_pane_t1_ParamLimits

0x6651,	// (0x000243c7) heading_pane_t1

0x6668,	// (0x000243de) heading_pane_t2_ParamLimits

0x6668,	// (0x000243de) heading_pane_t2

0x0001,

0xf8ff,	// (0x0002d675) heading_pane_t_ParamLimits

0xf8ff,	// (0x0002d675) heading_pane_t

0x618e,	// (0x00023f04) bg_popup_heading_pane_g1

0x621f,	// (0x00023f95) bg_popup_heading_pane_g2

0x6229,	// (0x00023f9f) bg_popup_heading_pane_g3

0x6233,	// (0x00023fa9) bg_popup_heading_pane_g4

0x623d,	// (0x00023fb3) bg_popup_heading_pane_g5

0x6247,	// (0x00023fbd) bg_popup_heading_pane_g6

0x624f,	// (0x00023fc5) bg_popup_heading_pane_g7

0x6257,	// (0x00023fcd) bg_popup_heading_pane_g8

0x6261,	// (0x00023fd7) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0002d631) bg_popup_heading_pane_g

0x5a85,	// (0x000237fb) bg_popup_sub_pane_g1

0x5a8d,	// (0x00023803) bg_popup_sub_pane_g2

0x5a95,	// (0x0002380b) bg_popup_sub_pane_g3

0x5a9d,	// (0x00023813) bg_popup_sub_pane_g4

0x5aa5,	// (0x0002381b) bg_popup_sub_pane_g5

0x5aad,	// (0x00023823) bg_popup_sub_pane_g6

0x5ab5,	// (0x0002382b) bg_popup_sub_pane_g7

0x5abd,	// (0x00023833) bg_popup_sub_pane_g8

0x5ac5,	// (0x0002383b) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0002d60b) bg_popup_sub_pane_g

0x44a6,	// (0x0002221c) bg_popup_window_pane_cp5_ParamLimits

0x44a6,	// (0x0002221c) bg_popup_window_pane_cp5

0x45f5,	// (0x0002236b) popup_note_window_g1_ParamLimits

0x45f5,	// (0x0002236b) popup_note_window_g1

0x4601,	// (0x00022377) popup_note_window_t1_ParamLimits

0x4601,	// (0x00022377) popup_note_window_t1

0x4613,	// (0x00022389) popup_note_window_t2_ParamLimits

0x4613,	// (0x00022389) popup_note_window_t2

0x4625,	// (0x0002239b) popup_note_window_t3_ParamLimits

0x4625,	// (0x0002239b) popup_note_window_t3

0x4637,	// (0x000223ad) popup_note_window_t4_ParamLimits

0x4637,	// (0x000223ad) popup_note_window_t4

0x465f,	// (0x000223d5) popup_note_window_t5_ParamLimits

0x465f,	// (0x000223d5) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002d339) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002d339) popup_note_window_t

0x4683,	// (0x000223f9) bg_popup_window_pane_cp6_ParamLimits

0x4683,	// (0x000223f9) bg_popup_window_pane_cp6

0x6102,	// (0x00023e78) popup_note_image_window_g1_ParamLimits

0x6102,	// (0x00023e78) popup_note_image_window_g1

0x610e,	// (0x00023e84) popup_note_image_window_g2_ParamLimits

0x610e,	// (0x00023e84) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0002d5ff) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0002d5ff) popup_note_image_window_g

0x6127,	// (0x00023e9d) popup_note_image_window_t1_ParamLimits

0x6127,	// (0x00023e9d) popup_note_image_window_t1

0x6140,	// (0x00023eb6) popup_note_image_window_t2_ParamLimits

0x6140,	// (0x00023eb6) popup_note_image_window_t2

0x6159,	// (0x00023ecf) popup_note_image_window_t3_ParamLimits

0x6159,	// (0x00023ecf) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0002d604) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0002d604) popup_note_image_window_t

0x5fdf,	// (0x00023d55) bg_popup_window_pane_cp7_ParamLimits

0x5fdf,	// (0x00023d55) bg_popup_window_pane_cp7

0x600f,	// (0x00023d85) popup_note_wait_window_g1_ParamLimits

0x600f,	// (0x00023d85) popup_note_wait_window_g1

0x601b,	// (0x00023d91) popup_note_wait_window_g2_ParamLimits

0x601b,	// (0x00023d91) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0002d5ed) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0002d5ed) popup_note_wait_window_g

0x6033,	// (0x00023da9) popup_note_wait_window_t1_ParamLimits

0x6033,	// (0x00023da9) popup_note_wait_window_t1

0x605a,	// (0x00023dd0) popup_note_wait_window_t2_ParamLimits

0x605a,	// (0x00023dd0) popup_note_wait_window_t2

0x6077,	// (0x00023ded) popup_note_wait_window_t3_ParamLimits

0x6077,	// (0x00023ded) popup_note_wait_window_t3

0x608a,	// (0x00023e00) popup_note_wait_window_t4_ParamLimits

0x608a,	// (0x00023e00) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0002d5f4) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0002d5f4) popup_note_wait_window_t

0x60af,	// (0x00023e25) wait_bar_pane_ParamLimits

0x60af,	// (0x00023e25) wait_bar_pane

0x4458,	// (0x000221ce) wait_anim_pane

0x4458,	// (0x000221ce) wait_border_pane

0x444e,	// (0x000221c4) wait_anim_pane_g1

0x444e,	// (0x000221c4) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0002d4b8) wait_anim_pane_g

0x5f83,	// (0x00023cf9) wait_border_pane_g1

0x5f8e,	// (0x00023d04) wait_border_pane_g2

0x5f97,	// (0x00023d0d) wait_border_pane_g3

0x0002,

0xf870,	// (0x0002d5e6) wait_border_pane_g

0x5ee5,	// (0x00023c5b) bg_popup_window_pane_cp16_ParamLimits

0x5ee5,	// (0x00023c5b) bg_popup_window_pane_cp16

0x5ef3,	// (0x00023c69) indicator_popup_pane_cp4_ParamLimits

0x5ef3,	// (0x00023c69) indicator_popup_pane_cp4

0x5f07,	// (0x00023c7d) popup_query_data_window_t1_ParamLimits

0x5f07,	// (0x00023c7d) popup_query_data_window_t1

0x5f19,	// (0x00023c8f) popup_query_data_window_t2_ParamLimits

0x5f19,	// (0x00023c8f) popup_query_data_window_t2

0x5f32,	// (0x00023ca8) popup_query_data_window_t3_ParamLimits

0x5f32,	// (0x00023ca8) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0002d5df) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0002d5df) popup_query_data_window_t

0x5f4c,	// (0x00023cc2) query_popup_data_pane_ParamLimits

0x5f4c,	// (0x00023cc2) query_popup_data_pane

0x5f60,	// (0x00023cd6) query_popup_data_pane_cp1_ParamLimits

0x5f60,	// (0x00023cd6) query_popup_data_pane_cp1

0x4683,	// (0x000223f9) bg_popup_window_pane_cp10_ParamLimits

0x4683,	// (0x000223f9) bg_popup_window_pane_cp10

0x5e48,	// (0x00023bbe) indicator_popup_pane_ParamLimits

0x5e48,	// (0x00023bbe) indicator_popup_pane

0x46da,	// (0x00022450) popup_query_code_window_t1_ParamLimits

0x46da,	// (0x00022450) popup_query_code_window_t1

0x5e60,	// (0x00023bd6) popup_query_code_window_t2_ParamLimits

0x5e60,	// (0x00023bd6) popup_query_code_window_t2

0x5e9e,	// (0x00023c14) popup_query_code_window_t3_ParamLimits

0x5e9e,	// (0x00023c14) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0002d5d8) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0002d5d8) popup_query_code_window_t

0x5ecd,	// (0x00023c43) query_popup_pane_ParamLimits

0x5ecd,	// (0x00023c43) query_popup_pane

0x4683,	// (0x000223f9) bg_popup_window_pane_cp15_ParamLimits

0x4683,	// (0x000223f9) bg_popup_window_pane_cp15

0x46a1,	// (0x00022417) indicator_popup_pane_cp1_ParamLimits

0x46a1,	// (0x00022417) indicator_popup_pane_cp1

0x46b4,	// (0x0002242a) indicator_popup_pane_cp2_ParamLimits

0x46b4,	// (0x0002242a) indicator_popup_pane_cp2

0x46c7,	// (0x0002243d) popup_query_data_code_window_g1_ParamLimits

0x46c7,	// (0x0002243d) popup_query_data_code_window_g1

0x46da,	// (0x00022450) popup_query_data_code_window_t1_ParamLimits

0x46da,	// (0x00022450) popup_query_data_code_window_t1

0x46ec,	// (0x00022462) popup_query_data_code_window_t2_ParamLimits

0x46ec,	// (0x00022462) popup_query_data_code_window_t2

0x46fe,	// (0x00022474) popup_query_data_code_window_t3_ParamLimits

0x46fe,	// (0x00022474) popup_query_data_code_window_t3

0x4714,	// (0x0002248a) popup_query_data_code_window_t4_ParamLimits

0x4714,	// (0x0002248a) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002d344) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002d344) popup_query_data_code_window_t

0x98ab,	// (0x00027621) list_single_midp_graphic_pane_g3

0x472c,	// (0x000224a2) query_popup_data_pane_cp2_ParamLimits

0x473f,	// (0x000224b5) query_popup_pane_cp2_ParamLimits

0x473f,	// (0x000224b5) query_popup_pane_cp2

0x4458,	// (0x000221ce) bg_popup_window_pane_cp11

0x5e1c,	// (0x00023b92) heading_pane_cp5

0x47cd,	// (0x00022543) listscroll_popup_info_pane

0x4458,	// (0x000221ce) input_focus_pane_cp3

0x4752,	// (0x000224c8) query_popup_pane_t1

0x4760,	// (0x000224d6) list_popup_info_pane_ParamLimits

0x4760,	// (0x000224d6) list_popup_info_pane

0x476f,	// (0x000224e5) listscroll_popup_info_pane_g1

0x4777,	// (0x000224ed) scroll_pane_cp7

0x4781,	// (0x000224f7) popup_info_list_pane_t1_ParamLimits

0x4781,	// (0x000224f7) popup_info_list_pane_t1

0x479b,	// (0x00022511) popup_info_list_pane_t2_ParamLimits

0x479b,	// (0x00022511) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002d34d) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002d34d) popup_info_list_pane_t

0x4458,	// (0x000221ce) bg_popup_window_pane_cp12

0x6d11,	// (0x00024a87) find_popup_pane

0x44b4,	// (0x0002222a) bg_popup_window_pane_cp3

0x47b5,	// (0x0002252b) heading_pane_cp3

0x47c1,	// (0x00022537) listscroll_popup_graphic_pane

0x4458,	// (0x000221ce) bg_popup_window_pane_cp4

0x877a,	// (0x000264f0) heading_pane_cp4

0x47cd,	// (0x00022543) listscroll_popup_colour_pane

0x47d5,	// (0x0002254b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x47d5,	// (0x0002254b) cell_large_graphic_colour_none_popup_pane

0x8784,	// (0x000264fa) grid_large_graphic_colour_popup_pane_ParamLimits

0x8784,	// (0x000264fa) grid_large_graphic_colour_popup_pane

0x47e9,	// (0x0002255f) listscroll_popup_colour_pane_g1_ParamLimits

0x47e9,	// (0x0002255f) listscroll_popup_colour_pane_g1

0x4800,	// (0x00022576) listscroll_popup_colour_pane_g2_ParamLimits

0x4800,	// (0x00022576) listscroll_popup_colour_pane_g2

0x4817,	// (0x0002258d) listscroll_popup_colour_pane_g3_ParamLimits

0x4817,	// (0x0002258d) listscroll_popup_colour_pane_g3

0x87a8,	// (0x0002651e) listscroll_popup_colour_pane_g4_ParamLimits

0x87a8,	// (0x0002651e) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002d352) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002d352) listscroll_popup_colour_pane_g

0x4827,	// (0x0002259d) scroll_pane_cp6_ParamLimits

0x4827,	// (0x0002259d) scroll_pane_cp6

0x87b7,	// (0x0002652d) cell_large_graphic_colour_popup_pane_ParamLimits

0x87b7,	// (0x0002652d) cell_large_graphic_colour_popup_pane

0x4839,	// (0x000225af) cell_large_graphic_colour_none_popup_pane_t1

0x4458,	// (0x000221ce) grid_highlight_pane_cp5

0x4848,	// (0x000225be) cell_large_graphic_colour_popup_pane_g1

0x4850,	// (0x000225c6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002d35b) cell_large_graphic_colour_popup_pane_g

0x4858,	// (0x000225ce) cell_large_graphic_colour_popup_pane_g2_copy1

0x4861,	// (0x000225d7) grid_highlight_pane_cp4

0x4869,	// (0x000225df) bg_popup_window_pane_cp8_ParamLimits

0x4869,	// (0x000225df) bg_popup_window_pane_cp8

0x4884,	// (0x000225fa) popup_snote_single_text_window_g1_ParamLimits

0x4884,	// (0x000225fa) popup_snote_single_text_window_g1

0x4896,	// (0x0002260c) popup_snote_single_text_window_t1_ParamLimits

0x4896,	// (0x0002260c) popup_snote_single_text_window_t1

0x48a9,	// (0x0002261f) popup_snote_single_text_window_t2_ParamLimits

0x48a9,	// (0x0002261f) popup_snote_single_text_window_t2

0x48bc,	// (0x00022632) popup_snote_single_text_window_t3_ParamLimits

0x48bc,	// (0x00022632) popup_snote_single_text_window_t3

0x48f5,	// (0x0002266b) popup_snote_single_text_window_t4_ParamLimits

0x48f5,	// (0x0002266b) popup_snote_single_text_window_t4

0x4929,	// (0x0002269f) popup_snote_single_text_window_t5_ParamLimits

0x4929,	// (0x0002269f) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002d360) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002d360) popup_snote_single_text_window_t

0x4958,	// (0x000226ce) bg_popup_window_pane_cp9_ParamLimits

0x4958,	// (0x000226ce) bg_popup_window_pane_cp9

0x4884,	// (0x000225fa) popup_snote_single_graphic_window_g1_ParamLimits

0x4884,	// (0x000225fa) popup_snote_single_graphic_window_g1

0x4966,	// (0x000226dc) popup_snote_single_graphic_window_g2_ParamLimits

0x4966,	// (0x000226dc) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002d36b) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002d36b) popup_snote_single_graphic_window_g

0x4972,	// (0x000226e8) popup_snote_single_graphic_window_t1_ParamLimits

0x4972,	// (0x000226e8) popup_snote_single_graphic_window_t1

0x4985,	// (0x000226fb) popup_snote_single_graphic_window_t2_ParamLimits

0x4985,	// (0x000226fb) popup_snote_single_graphic_window_t2

0x4998,	// (0x0002270e) popup_snote_single_graphic_window_t3_ParamLimits

0x4998,	// (0x0002270e) popup_snote_single_graphic_window_t3

0x49d1,	// (0x00022747) popup_snote_single_graphic_window_t4_ParamLimits

0x49d1,	// (0x00022747) popup_snote_single_graphic_window_t4

0x4a05,	// (0x0002277b) popup_snote_single_graphic_window_t5_ParamLimits

0x4a05,	// (0x0002277b) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002d370) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002d370) popup_snote_single_graphic_window_t

0x6c95,	// (0x00024a0b) grid_graphic_popup_pane_ParamLimits

0x6c95,	// (0x00024a0b) grid_graphic_popup_pane

0x6cc1,	// (0x00024a37) listscroll_popup_graphic_pane_g1_ParamLimits

0x6cc1,	// (0x00024a37) listscroll_popup_graphic_pane_g1

0xa0dc,	// (0x00027e52) listscroll_popup_graphic_pane_g2_ParamLimits

0xa0dc,	// (0x00027e52) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0002d755) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0002d755) listscroll_popup_graphic_pane_g

0x6a44,	// (0x000247ba) scroll_pane_cp5

0xa09d,	// (0x00027e13) cell_graphic_popup_pane_ParamLimits

0xa09d,	// (0x00027e13) cell_graphic_popup_pane

0x6c60,	// (0x000249d6) cell_graphic_popup_pane_g1

0x6c68,	// (0x000249de) cell_graphic_popup_pane_g2

0x4858,	// (0x000225ce) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0002d74e) cell_graphic_popup_pane_g

0x6c71,	// (0x000249e7) cell_graphic_popup_pane_t2

0x4861,	// (0x000225d7) grid_highlight_pane_cp3

0x4a46,	// (0x000227bc) list_gen_pane_ParamLimits

0x4a46,	// (0x000227bc) list_gen_pane

0x4a6e,	// (0x000227e4) scroll_pane

0xa050,	// (0x00027dc6) bg_list_pane_g1_ParamLimits

0xa050,	// (0x00027dc6) bg_list_pane_g1

0x6c0f,	// (0x00024985) bg_list_pane_g2_ParamLimits

0x6c0f,	// (0x00024985) bg_list_pane_g2

0x6c22,	// (0x00024998) bg_list_pane_g3_ParamLimits

0x6c22,	// (0x00024998) bg_list_pane_g3

0x6c34,	// (0x000249aa) bg_list_pane_g4_ParamLimits

0x6c34,	// (0x000249aa) bg_list_pane_g4

0xa06b,	// (0x00027de1) bg_list_pane_g5_ParamLimits

0xa06b,	// (0x00027de1) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0002d743) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0002d743) bg_list_pane_g

0xe714,	// (0x0002c48a) list_double2_graphic_large_graphic_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double2_graphic_large_graphic_pane

0xe714,	// (0x0002c48a) list_double2_graphic_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double2_graphic_pane

0xe714,	// (0x0002c48a) list_double2_large_graphic_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double2_large_graphic_pane

0xe714,	// (0x0002c48a) list_double2_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double2_pane

0xe714,	// (0x0002c48a) list_double_graphic_heading_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_graphic_heading_pane

0xe714,	// (0x0002c48a) list_double_graphic_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_graphic_pane

0xe714,	// (0x0002c48a) list_double_heading_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_heading_pane

0xe714,	// (0x0002c48a) list_double_large_graphic_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_large_graphic_pane

0xe714,	// (0x0002c48a) list_double_number_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_number_pane

0xe714,	// (0x0002c48a) list_double_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_pane

0xe714,	// (0x0002c48a) list_double_time_pane_ParamLimits

0xe714,	// (0x0002c48a) list_double_time_pane

0xe714,	// (0x0002c48a) list_setting_number_pane_ParamLimits

0xe714,	// (0x0002c48a) list_setting_number_pane

0xe714,	// (0x0002c48a) list_setting_pane_ParamLimits

0xe714,	// (0x0002c48a) list_setting_pane

0xe770,	// (0x0002c4e6) list_single_2graphic_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_2graphic_pane

0xe770,	// (0x0002c4e6) list_single_graphic_heading_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_graphic_heading_pane

0xe770,	// (0x0002c4e6) list_single_graphic_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_graphic_pane

0xe770,	// (0x0002c4e6) list_single_heading_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_heading_pane

0xe7de,	// (0x0002c554) list_single_large_graphic_pane_ParamLimits

0xe7de,	// (0x0002c554) list_single_large_graphic_pane

0xe770,	// (0x0002c4e6) list_single_number_heading_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_number_heading_pane

0xe770,	// (0x0002c4e6) list_single_number_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_number_pane

0xe770,	// (0x0002c4e6) list_single_pane_ParamLimits

0xe770,	// (0x0002c4e6) list_single_pane

0x4458,	// (0x000221ce) list_highlight_pane_cp1

0xdee7,	// (0x0002bc5d) list_single_pane_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_pane_g1

0xdef3,	// (0x0002bc69) list_single_pane_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002d382) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002d382) list_single_pane_g

0xe6fe,	// (0x0002c474) list_single_pane_t1_ParamLimits

0xe6fe,	// (0x0002c474) list_single_pane_t1

0xdee7,	// (0x0002bc5d) list_single_number_pane_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_number_pane_g1

0xdef3,	// (0x0002bc69) list_single_number_pane_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002d382) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002d382) list_single_number_pane_g

0xe632,	// (0x0002c3a8) list_single_number_pane_t1_ParamLimits

0xe632,	// (0x0002c3a8) list_single_number_pane_t1

0xe6be,	// (0x0002c434) list_single_number_pane_t2_ParamLimits

0xe6be,	// (0x0002c434) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0002d704) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0002d704) list_single_number_pane_t

0xdedb,	// (0x0002bc51) list_single_graphic_pane_g1_ParamLimits

0xdedb,	// (0x0002bc51) list_single_graphic_pane_g1

0xdee7,	// (0x0002bc5d) list_single_graphic_pane_g2_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_graphic_pane_g2

0xdef3,	// (0x0002bc69) list_single_graphic_pane_g3_ParamLimits

0xdef3,	// (0x0002bc69) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002d37b) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002d37b) list_single_graphic_pane_g

0xdeff,	// (0x0002bc75) list_single_graphic_pane_t1_ParamLimits

0xdeff,	// (0x0002bc75) list_single_graphic_pane_t1

0xdee7,	// (0x0002bc5d) list_single_heading_pane_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_heading_pane_g1

0xdef3,	// (0x0002bc69) list_single_heading_pane_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002d382) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002d382) list_single_heading_pane_g

0xdf15,	// (0x0002bc8b) list_single_heading_pane_t1_ParamLimits

0xdf15,	// (0x0002bc8b) list_single_heading_pane_t1

0xdf2b,	// (0x0002bca1) list_single_heading_pane_t2_ParamLimits

0xdf2b,	// (0x0002bca1) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002d387) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002d387) list_single_heading_pane_t

0xdee7,	// (0x0002bc5d) list_single_number_heading_pane_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_number_heading_pane_g1

0xdef3,	// (0x0002bc69) list_single_number_heading_pane_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002d382) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002d382) list_single_number_heading_pane_g

0xdf15,	// (0x0002bc8b) list_single_number_heading_pane_t1_ParamLimits

0xdf15,	// (0x0002bc8b) list_single_number_heading_pane_t1

0xdf3d,	// (0x0002bcb3) list_single_number_heading_pane_t2_ParamLimits

0xdf3d,	// (0x0002bcb3) list_single_number_heading_pane_t2

0xdf4f,	// (0x0002bcc5) list_single_number_heading_pane_t3_ParamLimits

0xdf4f,	// (0x0002bcc5) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002d38c) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002d38c) list_single_number_heading_pane_t

0xdf61,	// (0x0002bcd7) list_single_graphic_heading_pane_g1_ParamLimits

0xdf61,	// (0x0002bcd7) list_single_graphic_heading_pane_g1

0xdf6d,	// (0x0002bce3) list_single_graphic_heading_pane_g4_ParamLimits

0xdf6d,	// (0x0002bce3) list_single_graphic_heading_pane_g4

0xdef3,	// (0x0002bc69) list_single_graphic_heading_pane_g5_ParamLimits

0xdef3,	// (0x0002bc69) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002d393) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002d393) list_single_graphic_heading_pane_g

0xdf15,	// (0x0002bc8b) list_single_graphic_heading_pane_t1_ParamLimits

0xdf15,	// (0x0002bc8b) list_single_graphic_heading_pane_t1

0xdf7e,	// (0x0002bcf4) list_single_graphic_heading_pane_t2_ParamLimits

0xdf7e,	// (0x0002bcf4) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002d39a) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002d39a) list_single_graphic_heading_pane_t

0xdf90,	// (0x0002bd06) list_single_large_graphic_pane_g1_ParamLimits

0xdf90,	// (0x0002bd06) list_single_large_graphic_pane_g1

0xdf9c,	// (0x0002bd12) list_single_large_graphic_pane_g2_ParamLimits

0xdf9c,	// (0x0002bd12) list_single_large_graphic_pane_g2

0xdfa8,	// (0x0002bd1e) list_single_large_graphic_pane_g3_ParamLimits

0xdfa8,	// (0x0002bd1e) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002d39f) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002d39f) list_single_large_graphic_pane_g

0x5f8e,	// (0x00023d04) wait_border_pane_g2_copy1

0xdfb4,	// (0x0002bd2a) list_single_large_graphic_pane_g4_cp2

0xdfbc,	// (0x0002bd32) list_single_large_graphic_pane_t1_ParamLimits

0xdfbc,	// (0x0002bd32) list_single_large_graphic_pane_t1

0xdfd2,	// (0x0002bd48) list_double_pane_g1_ParamLimits

0xdfd2,	// (0x0002bd48) list_double_pane_g1

0xdfde,	// (0x0002bd54) list_double_pane_g2_ParamLimits

0xdfde,	// (0x0002bd54) list_double_pane_g2

0x0001,

0xf630,	// (0x0002d3a6) list_double_pane_g_ParamLimits

0xf630,	// (0x0002d3a6) list_double_pane_g

0xdfea,	// (0x0002bd60) list_double_pane_t1_ParamLimits

0xdfea,	// (0x0002bd60) list_double_pane_t1

0xe000,	// (0x0002bd76) list_double_pane_t2_ParamLimits

0xe000,	// (0x0002bd76) list_double_pane_t2

0x0001,

0xf635,	// (0x0002d3ab) list_double_pane_t_ParamLimits

0xf635,	// (0x0002d3ab) list_double_pane_t

0xe012,	// (0x0002bd88) list_double2_pane_g1_ParamLimits

0xe012,	// (0x0002bd88) list_double2_pane_g1

0xdfde,	// (0x0002bd54) list_double2_pane_g2_ParamLimits

0xdfde,	// (0x0002bd54) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002d3b0) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002d3b0) list_double2_pane_g

0xdfea,	// (0x0002bd60) list_double2_pane_t1_ParamLimits

0xdfea,	// (0x0002bd60) list_double2_pane_t1

0xe023,	// (0x0002bd99) list_double2_pane_t2_ParamLimits

0xe023,	// (0x0002bd99) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002d3b5) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002d3b5) list_double2_pane_t

0xdfd2,	// (0x0002bd48) list_double_number_pane_g1_ParamLimits

0xdfd2,	// (0x0002bd48) list_double_number_pane_g1

0xdfde,	// (0x0002bd54) list_double_number_pane_g2_ParamLimits

0xdfde,	// (0x0002bd54) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002d3a6) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002d3a6) list_double_number_pane_g

0xe035,	// (0x0002bdab) list_double_number_pane_t1_ParamLimits

0xe035,	// (0x0002bdab) list_double_number_pane_t1

0xe047,	// (0x0002bdbd) list_double_number_pane_t2_ParamLimits

0xe047,	// (0x0002bdbd) list_double_number_pane_t2

0xe05d,	// (0x0002bdd3) list_double_number_pane_t3_ParamLimits

0xe05d,	// (0x0002bdd3) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002d3ba) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002d3ba) list_double_number_pane_t

0xe06f,	// (0x0002bde5) list_double_graphic_pane_g1_ParamLimits

0xe06f,	// (0x0002bde5) list_double_graphic_pane_g1

0xe07b,	// (0x0002bdf1) list_double_graphic_pane_g2_ParamLimits

0xe07b,	// (0x0002bdf1) list_double_graphic_pane_g2

0xe08a,	// (0x0002be00) list_double_graphic_pane_g3_ParamLimits

0xe08a,	// (0x0002be00) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002d3c1) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002d3c1) list_double_graphic_pane_g

0xe0a2,	// (0x0002be18) list_double_graphic_pane_t1_ParamLimits

0xe0a2,	// (0x0002be18) list_double_graphic_pane_t1

0xe0b8,	// (0x0002be2e) list_double_graphic_pane_t2_ParamLimits

0xe0b8,	// (0x0002be2e) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002d3ca) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002d3ca) list_double_graphic_pane_t

0xe06f,	// (0x0002bde5) list_double2_graphic_pane_g1_ParamLimits

0xe06f,	// (0x0002bde5) list_double2_graphic_pane_g1

0xe0ca,	// (0x0002be40) list_double2_graphic_pane_g2_ParamLimits

0xe0ca,	// (0x0002be40) list_double2_graphic_pane_g2

0xe0d6,	// (0x0002be4c) list_double2_graphic_pane_g3_ParamLimits

0xe0d6,	// (0x0002be4c) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002d3cf) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002d3cf) list_double2_graphic_pane_g

0xe047,	// (0x0002bdbd) list_double2_graphic_pane_t1_ParamLimits

0xe047,	// (0x0002bdbd) list_double2_graphic_pane_t1

0xe0e2,	// (0x0002be58) list_double2_graphic_pane_t2_ParamLimits

0xe0e2,	// (0x0002be58) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002d3d6) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002d3d6) list_double2_graphic_pane_t

0xe0f4,	// (0x0002be6a) list_double_large_graphic_pane_g1_ParamLimits

0xe0f4,	// (0x0002be6a) list_double_large_graphic_pane_g1

0xe012,	// (0x0002bd88) list_double_large_graphic_pane_g2_ParamLimits

0xe012,	// (0x0002bd88) list_double_large_graphic_pane_g2

0xdfde,	// (0x0002bd54) list_double_large_graphic_pane_g3_ParamLimits

0xdfde,	// (0x0002bd54) list_double_large_graphic_pane_g3

0xe11f,	// (0x0002be95) list_double_large_graphic_pane_g4_ParamLimits

0xe11f,	// (0x0002be95) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002d3db) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002d3db) list_double_large_graphic_pane_g

0xe147,	// (0x0002bebd) list_double_large_graphic_pane_t1_ParamLimits

0xe147,	// (0x0002bebd) list_double_large_graphic_pane_t1

0xe160,	// (0x0002bed6) list_double_large_graphic_pane_t2_ParamLimits

0xe160,	// (0x0002bed6) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002d3e6) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002d3e6) list_double_large_graphic_pane_t

0xe172,	// (0x0002bee8) list_double2_large_graphic_pane_g1_ParamLimits

0xe172,	// (0x0002bee8) list_double2_large_graphic_pane_g1

0xe012,	// (0x0002bd88) list_double2_large_graphic_pane_g2_ParamLimits

0xe012,	// (0x0002bd88) list_double2_large_graphic_pane_g2

0xdfde,	// (0x0002bd54) list_double2_large_graphic_pane_g3_ParamLimits

0xdfde,	// (0x0002bd54) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002d3eb) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002d3eb) list_double2_large_graphic_pane_g

0xe17e,	// (0x0002bef4) list_double2_large_graphic_pane_t1_ParamLimits

0xe17e,	// (0x0002bef4) list_double2_large_graphic_pane_t1

0xe194,	// (0x0002bf0a) list_double2_large_graphic_pane_t2_ParamLimits

0xe194,	// (0x0002bf0a) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002d3f2) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002d3f2) list_double2_large_graphic_pane_t

0xe1a6,	// (0x0002bf1c) list_double_heading_pane_g1_ParamLimits

0xe1a6,	// (0x0002bf1c) list_double_heading_pane_g1

0xe1b7,	// (0x0002bf2d) list_double_heading_pane_g2_ParamLimits

0xe1b7,	// (0x0002bf2d) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002d3f7) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002d3f7) list_double_heading_pane_g

0xe1c3,	// (0x0002bf39) list_double_heading_pane_t1_ParamLimits

0xe1c3,	// (0x0002bf39) list_double_heading_pane_t1

0xe023,	// (0x0002bd99) list_double_heading_pane_t2_ParamLimits

0xe023,	// (0x0002bd99) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002d3fc) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002d3fc) list_double_heading_pane_t

0xe06f,	// (0x0002bde5) list_double_graphic_heading_pane_g1_ParamLimits

0xe06f,	// (0x0002bde5) list_double_graphic_heading_pane_g1

0xe1a6,	// (0x0002bf1c) list_double_graphic_heading_pane_g2_ParamLimits

0xe1a6,	// (0x0002bf1c) list_double_graphic_heading_pane_g2

0xe1b7,	// (0x0002bf2d) list_double_graphic_heading_pane_g3_ParamLimits

0xe1b7,	// (0x0002bf2d) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002d401) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002d401) list_double_graphic_heading_pane_g

0xe1d9,	// (0x0002bf4f) list_double_graphic_heading_pane_t1_ParamLimits

0xe1d9,	// (0x0002bf4f) list_double_graphic_heading_pane_t1

0xe0e2,	// (0x0002be58) list_double_graphic_heading_pane_t2_ParamLimits

0xe0e2,	// (0x0002be58) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002d408) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002d408) list_double_graphic_heading_pane_t

0xe012,	// (0x0002bd88) list_double_time_pane_g1_ParamLimits

0xe012,	// (0x0002bd88) list_double_time_pane_g1

0xdfde,	// (0x0002bd54) list_double_time_pane_g2_ParamLimits

0xdfde,	// (0x0002bd54) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0002d3b0) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0002d3b0) list_double_time_pane_g

0xe17e,	// (0x0002bef4) list_double_time_pane_t1_ParamLimits

0xe17e,	// (0x0002bef4) list_double_time_pane_t1

0xe1ef,	// (0x0002bf65) list_double_time_pane_t2_ParamLimits

0xe1ef,	// (0x0002bf65) list_double_time_pane_t2

0xe201,	// (0x0002bf77) list_double_time_pane_t3_ParamLimits

0xe201,	// (0x0002bf77) list_double_time_pane_t3

0xe213,	// (0x0002bf89) list_double_time_pane_t4_ParamLimits

0xe213,	// (0x0002bf89) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0002d40d) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0002d40d) list_double_time_pane_t

0xe225,	// (0x0002bf9b) list_setting_pane_g1_ParamLimits

0xe225,	// (0x0002bf9b) list_setting_pane_g1

0xe231,	// (0x0002bfa7) list_setting_pane_g2_ParamLimits

0xe231,	// (0x0002bfa7) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0002d416) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0002d416) list_setting_pane_g

0xe23d,	// (0x0002bfb3) list_setting_pane_t1_ParamLimits

0xe23d,	// (0x0002bfb3) list_setting_pane_t1

0xe254,	// (0x0002bfca) list_setting_pane_t2_ParamLimits

0xe254,	// (0x0002bfca) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0002d41b) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0002d41b) list_setting_pane_t

0xe291,	// (0x0002c007) set_value_pane_cp_ParamLimits

0xe291,	// (0x0002c007) set_value_pane_cp

0xe29d,	// (0x0002c013) list_setting_number_pane_g1_ParamLimits

0xe29d,	// (0x0002c013) list_setting_number_pane_g1

0xe2a9,	// (0x0002c01f) list_setting_number_pane_g2_ParamLimits

0xe2a9,	// (0x0002c01f) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0002d422) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0002d422) list_setting_number_pane_g

0xe2b5,	// (0x0002c02b) list_setting_number_pane_t1_ParamLimits

0xe2b5,	// (0x0002c02b) list_setting_number_pane_t1

0xe2c9,	// (0x0002c03f) list_setting_number_pane_t2_ParamLimits

0xe2c9,	// (0x0002c03f) list_setting_number_pane_t2

0xe2e0,	// (0x0002c056) list_setting_number_pane_t3_ParamLimits

0xe2e0,	// (0x0002c056) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0002d427) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0002d427) list_setting_number_pane_t

0xe291,	// (0x0002c007) set_value_pane_ParamLimits

0xe291,	// (0x0002c007) set_value_pane

0x4aa2,	// (0x00022818) bg_set_opt_pane_ParamLimits

0x4aa2,	// (0x00022818) bg_set_opt_pane

0xe323,	// (0x0002c099) set_value_pane_t1

0x4ac3,	// (0x00022839) slider_set_pane_cp3

0x4acc,	// (0x00022842) volume_small_pane_cp

0x4ad5,	// (0x0002284b) list_form_gen_pane

0x4ade,	// (0x00022854) scroll_pane_cp8

0xe339,	// (0x0002c0af) form_field_data_pane_ParamLimits

0xe339,	// (0x0002c0af) form_field_data_pane

0xe359,	// (0x0002c0cf) form_field_data_wide_pane_ParamLimits

0xe359,	// (0x0002c0cf) form_field_data_wide_pane

0xe37a,	// (0x0002c0f0) form_field_popup_pane_ParamLimits

0xe37a,	// (0x0002c0f0) form_field_popup_pane

0xe398,	// (0x0002c10e) form_field_popup_wide_pane_ParamLimits

0xe398,	// (0x0002c10e) form_field_popup_wide_pane

0xe3b3,	// (0x0002c129) form_field_slider_pane_ParamLimits

0xe3b3,	// (0x0002c129) form_field_slider_pane

0xe3c6,	// (0x0002c13c) form_field_slider_wide_pane_ParamLimits

0xe3c6,	// (0x0002c13c) form_field_slider_wide_pane

0x4aef,	// (0x00022865) data_form_pane

0xe3e3,	// (0x0002c159) form_field_data_pane_t1

0x4afb,	// (0x00022871) input_focus_pane

0x4b09,	// (0x0002287f) data_form_wide_pane

0xe409,	// (0x0002c17f) form_field_data_wide_pane_t1

0x4876,	// (0x000225ec) input_focus_pane_cp6

0xe42b,	// (0x0002c1a1) form_field_popup_pane_t1

0x4afb,	// (0x00022871) input_focus_pane_cp7

0x4b35,	// (0x000228ab) list_form_pane

0xe44d,	// (0x0002c1c3) form_field_popup_wide_pane_t1

0x4afb,	// (0x00022871) input_focus_pane_cp8

0x4b41,	// (0x000228b7) list_form_wide_pane

0xe46a,	// (0x0002c1e0) form_field_slider_pane_t1_ParamLimits

0xe46a,	// (0x0002c1e0) form_field_slider_pane_t1

0xe47e,	// (0x0002c1f4) form_field_slider_pane_t2_ParamLimits

0xe47e,	// (0x0002c1f4) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0002d437) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0002d437) form_field_slider_pane_t

0x44a6,	// (0x0002221c) input_focus_pane_cp9_ParamLimits

0x44a6,	// (0x0002221c) input_focus_pane_cp9

0xe490,	// (0x0002c206) slider_cont_pane_ParamLimits

0xe490,	// (0x0002c206) slider_cont_pane

0x4b50,	// (0x000228c6) form_field_slider_wide_pane_t1_ParamLimits

0x4b50,	// (0x000228c6) form_field_slider_wide_pane_t1

0xe4a4,	// (0x0002c21a) form_field_slider_wide_pane_t2_ParamLimits

0xe4a4,	// (0x0002c21a) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0002d43c) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0002d43c) form_field_slider_wide_pane_t

0x44a6,	// (0x0002221c) input_focus_pane_cp10_ParamLimits

0x44a6,	// (0x0002221c) input_focus_pane_cp10

0xe4b6,	// (0x0002c22c) slider_cont_pane_cp1_ParamLimits

0xe4b6,	// (0x0002c22c) slider_cont_pane_cp1

0xe4ca,	// (0x0002c240) slider_form_pane_cp

0x4b62,	// (0x000228d8) input_focus_pane_g1

0x4b6a,	// (0x000228e0) input_focus_pane_g2

0x4b72,	// (0x000228e8) input_focus_pane_g3

0x4b7a,	// (0x000228f0) input_focus_pane_g4

0x4b82,	// (0x000228f8) input_focus_pane_g5

0x4b8a,	// (0x00022900) input_focus_pane_g6

0x4b92,	// (0x00022908) input_focus_pane_g7

0x4b9a,	// (0x00022910) input_focus_pane_g8

0x4ba2,	// (0x00022918) input_focus_pane_g9

0x444e,	// (0x000221c4) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0002d441) input_focus_pane_g

0x5f97,	// (0x00023d0d) wait_border_pane_g3_copy1

0xe4d2,	// (0x0002c248) data_form_pane_t1

0x444e,	// (0x000221c4) wait_anim_pane_g1_copy1

0xe6d0,	// (0x0002c446) data_form_wide_pane_t1

0xe4ed,	// (0x0002c263) list_form_graphic_pane_cp_ParamLimits

0xe4ed,	// (0x0002c263) list_form_graphic_pane_cp

0x6bb8,	// (0x0002492e) slider_form_pane_g1

0x6bc1,	// (0x00024937) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0002d734) slider_form_pane_g

0xe504,	// (0x0002c27a) list_form_graphic_pane_ParamLimits

0xe504,	// (0x0002c27a) list_form_graphic_pane

0xe51e,	// (0x0002c294) list_form_graphic_pane_g1

0xe526,	// (0x0002c29c) list_form_graphic_pane_t1_ParamLimits

0xe526,	// (0x0002c29c) list_form_graphic_pane_t1

0x44b4,	// (0x0002222a) list_highlight_pane_cp5_ParamLimits

0x44b4,	// (0x0002222a) list_highlight_pane_cp5

0xe53b,	// (0x0002c2b1) find_pane_g1

0x4baa,	// (0x00022920) input_find_pane

0xe544,	// (0x0002c2ba) input_find_pane_g1_ParamLimits

0xe544,	// (0x0002c2ba) input_find_pane_g1

0xe550,	// (0x0002c2c6) input_find_pane_t1_ParamLimits

0xe550,	// (0x0002c2c6) input_find_pane_t1

0xe565,	// (0x0002c2db) input_find_pane_t2_ParamLimits

0xe565,	// (0x0002c2db) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0002d456) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0002d456) input_find_pane_t

0x4bb3,	// (0x00022929) input_focus_pane_cp5_ParamLimits

0x4bb3,	// (0x00022929) input_focus_pane_cp5

0x87ec,	// (0x00026562) bg_popup_window_pane_cp2_ParamLimits

0x87ec,	// (0x00026562) bg_popup_window_pane_cp2

0x87f9,	// (0x0002656f) listscroll_menu_pane_ParamLimits

0x87f9,	// (0x0002656f) listscroll_menu_pane

0x8805,	// (0x0002657b) popup_submenu_window_ParamLimits

0x8805,	// (0x0002657b) popup_submenu_window

0x4bc1,	// (0x00022937) find_popup_pane_g1

0x4bc9,	// (0x0002293f) input_popup_find_pane_cp

0x4bb3,	// (0x00022929) input_focus_pane_cp4_ParamLimits

0x4bb3,	// (0x00022929) input_focus_pane_cp4

0x4bd3,	// (0x00022949) input_popup_find_pane_t1_ParamLimits

0x4bd3,	// (0x00022949) input_popup_find_pane_t1

0x4458,	// (0x000221ce) bg_popup_sub_pane_cp

0x4c01,	// (0x00022977) listscroll_popup_sub_pane

0x4c09,	// (0x0002297f) list_submenu_pane_ParamLimits

0x4c09,	// (0x0002297f) list_submenu_pane

0x4c1a,	// (0x00022990) scroll_pane_cp4

0x4c22,	// (0x00022998) list_single_popup_submenu_pane_ParamLimits

0x4c22,	// (0x00022998) list_single_popup_submenu_pane

0x4c35,	// (0x000229ab) list_single_popup_submenu_pane_g1

0x4c3d,	// (0x000229b3) list_single_popup_submenu_pane_t1_ParamLimits

0x4c3d,	// (0x000229b3) list_single_popup_submenu_pane_t1

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp1_ParamLimits

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp1

0x8837,	// (0x000265ad) tabs_2_active_pane_g1

0x883f,	// (0x000265b5) tabs_2_active_pane_t1

0x44b4,	// (0x0002222a) bg_passive_tab_pane_cp1_ParamLimits

0x44b4,	// (0x0002222a) bg_passive_tab_pane_cp1

0x8837,	// (0x000265ad) tabs_2_passive_pane_g1

0x883f,	// (0x000265b5) tabs_2_passive_pane_t1

0x579f,	// (0x00023515) bg_active_tab_pane_cp4

0x8851,	// (0x000265c7) tabs_2_long_active_pane_t1

0x8864,	// (0x000265da) bg_passive_tab_pane_cp4

0x98b3,	// (0x00027629) list_single_midp_graphic_pane_g4_ParamLimits

0x579f,	// (0x00023515) bg_active_tab_pane_cp5

0x8870,	// (0x000265e6) tabs_3_long_active_pane_t1

0x8864,	// (0x000265da) bg_passive_tab_pane_cp5

0x98b3,	// (0x00027629) list_single_midp_graphic_pane_g4

0x44b4,	// (0x0002222a) bg_popup_window_pane_cp13_ParamLimits

0x44b4,	// (0x0002222a) bg_popup_window_pane_cp13

0x4c67,	// (0x000229dd) listscroll_popup_fast_pane_ParamLimits

0x4c67,	// (0x000229dd) listscroll_popup_fast_pane

0x4c76,	// (0x000229ec) grid_popup_fast_pane_ParamLimits

0x4c76,	// (0x000229ec) grid_popup_fast_pane

0x4c88,	// (0x000229fe) scroll_pane_cp9_ParamLimits

0x4c88,	// (0x000229fe) scroll_pane_cp9

0xbbd7,	// (0x0002994d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbbd7,	// (0x0002994d) list_single_graphic_hl_pane_t1_cp2

0x4cac,	// (0x00022a22) input_focus_pane_cp20_ParamLimits

0x4cac,	// (0x00022a22) input_focus_pane_cp20

0x4cba,	// (0x00022a30) query_popup_data_pane_t1_ParamLimits

0x4cba,	// (0x00022a30) query_popup_data_pane_t1

0x4ccd,	// (0x00022a43) query_popup_data_pane_t2_ParamLimits

0x4ccd,	// (0x00022a43) query_popup_data_pane_t2

0x4d13,	// (0x00022a89) query_popup_data_pane_t3_ParamLimits

0x4d13,	// (0x00022a89) query_popup_data_pane_t3

0x4d54,	// (0x00022aca) query_popup_data_pane_t4_ParamLimits

0x4d54,	// (0x00022aca) query_popup_data_pane_t4

0x4d90,	// (0x00022b06) query_popup_data_pane_t5_ParamLimits

0x4d90,	// (0x00022b06) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0002d45b) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0002d45b) query_popup_data_pane_t

0x4b62,	// (0x000228d8) bg_set_opt_pane_g1

0x4b6a,	// (0x000228e0) bg_set_opt_pane_g2

0x4b72,	// (0x000228e8) bg_set_opt_pane_g3

0x4b7a,	// (0x000228f0) bg_set_opt_pane_g4

0x4b82,	// (0x000228f8) bg_set_opt_pane_g5

0x4b8a,	// (0x00022900) bg_set_opt_pane_g6

0x4b92,	// (0x00022908) bg_set_opt_pane_g7

0x4b9a,	// (0x00022910) bg_set_opt_pane_g8

0x4ba2,	// (0x00022918) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0002d466) bg_set_opt_pane_g

0x8c57,	// (0x000269cd) control_top_pane_stacon_ParamLimits

0x8c57,	// (0x000269cd) control_top_pane_stacon

0x8caa,	// (0x00026a20) signal_pane_stacon_ParamLimits

0x8caa,	// (0x00026a20) signal_pane_stacon

0x51ef,	// (0x00022f65) stacon_top_pane_g1_ParamLimits

0x51ef,	// (0x00022f65) stacon_top_pane_g1

0x8ccf,	// (0x00026a45) title_pane_stacon_ParamLimits

0x8ccf,	// (0x00026a45) title_pane_stacon

0x8cf9,	// (0x00026a6f) uni_indicator_pane_stacon_ParamLimits

0x8cf9,	// (0x00026a6f) uni_indicator_pane_stacon

0x8d0e,	// (0x00026a84) battery_pane_stacon_ParamLimits

0x8d0e,	// (0x00026a84) battery_pane_stacon

0x8d52,	// (0x00026ac8) control_bottom_pane_stacon_ParamLimits

0x8d52,	// (0x00026ac8) control_bottom_pane_stacon

0x8d75,	// (0x00026aeb) navi_pane_stacon_ParamLimits

0x8d75,	// (0x00026aeb) navi_pane_stacon

0x5211,	// (0x00022f87) stacon_bottom_pane_g1_ParamLimits

0x5211,	// (0x00022f87) stacon_bottom_pane_g1

0x8882,	// (0x000265f8) aid_levels_signal_lsc_ParamLimits

0x8882,	// (0x000265f8) aid_levels_signal_lsc

0x8899,	// (0x0002660f) signal_pane_stacon_g1_ParamLimits

0x8899,	// (0x0002660f) signal_pane_stacon_g1

0x88ad,	// (0x00026623) signal_pane_stacon_g2_ParamLimits

0x88ad,	// (0x00026623) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0002d479) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0002d479) signal_pane_stacon_g

0x88e2,	// (0x00026658) title_pane_stacon_t1_ParamLimits

0x88e2,	// (0x00026658) title_pane_stacon_t1

0x4de8,	// (0x00022b5e) uni_indicator_pane_stacon_g1

0x4df2,	// (0x00022b68) uni_indicator_pane_stacon_g2

0x4dd4,	// (0x00022b4a) uni_indicator_pane_stacon_g3

0x4dde,	// (0x00022b54) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0002d485) uni_indicator_pane_stacon_g

0x8907,	// (0x0002667d) control_top_pane_stacon_g1

0x890f,	// (0x00026685) control_top_pane_stacon_t1_ParamLimits

0x890f,	// (0x00026685) control_top_pane_stacon_t1

0x8946,	// (0x000266bc) aid_levels_battery_lsc_ParamLimits

0x8946,	// (0x000266bc) aid_levels_battery_lsc

0x895e,	// (0x000266d4) battery_pane_stacon_g1_ParamLimits

0x895e,	// (0x000266d4) battery_pane_stacon_g1

0x8971,	// (0x000266e7) battery_pane_stacon_g2_ParamLimits

0x8971,	// (0x000266e7) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0002d48e) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0002d48e) battery_pane_stacon_g

0x89af,	// (0x00026725) navi_icon_pane_stacon

0x89c3,	// (0x00026739) navi_navi_pane_stacon

0x89af,	// (0x00026725) navi_text_pane_stacon

0x8907,	// (0x0002667d) control_bottom_pane_stacon_g1

0x89d7,	// (0x0002674d) control_bottom_pane_stacon_t1_ParamLimits

0x89d7,	// (0x0002674d) control_bottom_pane_stacon_t1

0x8a0e,	// (0x00026784) grid_app_pane_ParamLimits

0x8a0e,	// (0x00026784) grid_app_pane

0x8a30,	// (0x000267a6) scroll_pane_cp15_ParamLimits

0x8a30,	// (0x000267a6) scroll_pane_cp15

0x8a45,	// (0x000267bb) cell_app_pane_ParamLimits

0x8a45,	// (0x000267bb) cell_app_pane

0x8a6f,	// (0x000267e5) cell_app_pane_g1_ParamLimits

0x8a6f,	// (0x000267e5) cell_app_pane_g1

0x4e16,	// (0x00022b8c) cell_app_pane_g2_ParamLimits

0x4e16,	// (0x00022b8c) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0002d493) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0002d493) cell_app_pane_g

0x4e22,	// (0x00022b98) cell_app_pane_t1_ParamLimits

0x4e22,	// (0x00022b98) cell_app_pane_t1

0x4e34,	// (0x00022baa) grid_highlight_pane_ParamLimits

0x4e34,	// (0x00022baa) grid_highlight_pane

0x4b62,	// (0x000228d8) cell_highlight_pane_g1

0x4b6a,	// (0x000228e0) cell_highlight_pane_g2

0x4b72,	// (0x000228e8) cell_highlight_pane_g3

0x4b7a,	// (0x000228f0) cell_highlight_pane_g4

0x4b82,	// (0x000228f8) cell_highlight_pane_g5

0x4b8a,	// (0x00022900) cell_highlight_pane_g6

0x4b92,	// (0x00022908) cell_highlight_pane_g7

0x4b9a,	// (0x00022910) cell_highlight_pane_g8

0x4ba2,	// (0x00022918) cell_highlight_pane_g9

0x444e,	// (0x000221c4) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0002d441) cell_highlight_pane_g

0x4e45,	// (0x00022bbb) bg_scroll_pane

0x8aa6,	// (0x0002681c) scroll_handle_pane

0x4e8c,	// (0x00022c02) scroll_bg_pane_g1

0x4ea1,	// (0x00022c17) scroll_bg_pane_g2

0x4eb9,	// (0x00022c2f) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0002d498) scroll_bg_pane_g

0x4ece,	// (0x00022c44) scroll_handle_focus_pane_ParamLimits

0x4ece,	// (0x00022c44) scroll_handle_focus_pane

0x4e8c,	// (0x00022c02) scroll_handle_pane_g1

0x4edb,	// (0x00022c51) scroll_handle_pane_g2

0x4eb9,	// (0x00022c2f) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0002d49f) scroll_handle_pane_g

0x4bb3,	// (0x00022929) bg_popup_sub_pane_cp21_ParamLimits

0x4bb3,	// (0x00022929) bg_popup_sub_pane_cp21

0x4eef,	// (0x00022c65) popup_fep_japan_predictive_window_t1_ParamLimits

0x4eef,	// (0x00022c65) popup_fep_japan_predictive_window_t1

0x4f06,	// (0x00022c7c) popup_fep_japan_predictive_window_t2_ParamLimits

0x4f06,	// (0x00022c7c) popup_fep_japan_predictive_window_t2

0x4f39,	// (0x00022caf) popup_fep_japan_predictive_window_t3_ParamLimits

0x4f39,	// (0x00022caf) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0002d4a6) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0002d4a6) popup_fep_japan_predictive_window_t

0x4458,	// (0x000221ce) bg_popup_sub_pane_cp23

0x4f70,	// (0x00022ce6) listscroll_japin_cand_pane

0x4f78,	// (0x00022cee) popup_fep_japan_candidate_window_t1

0x4f86,	// (0x00022cfc) candidate_pane_ParamLimits

0x4f86,	// (0x00022cfc) candidate_pane

0x4f98,	// (0x00022d0e) scroll_pane_cp30

0x4fa0,	// (0x00022d16) list_single_popup_jap_candidate_pane_ParamLimits

0x4fa0,	// (0x00022d16) list_single_popup_jap_candidate_pane

0x4458,	// (0x000221ce) list_highlight_pane_cp30

0x4fb4,	// (0x00022d2a) list_single_popup_jap_candidate_pane_t1

0x4fc3,	// (0x00022d39) level_1_signal

0x4fd0,	// (0x00022d46) level_2_signal

0x4fdd,	// (0x00022d53) level_3_signal

0x4fea,	// (0x00022d60) level_4_signal

0x4ff7,	// (0x00022d6d) level_5_signal

0x5004,	// (0x00022d7a) level_6_signal

0x5011,	// (0x00022d87) level_7_signal

0x4fc3,	// (0x00022d39) level_1_battery

0x4fd0,	// (0x00022d46) level_2_battery

0x4fdd,	// (0x00022d53) level_3_battery

0x4fea,	// (0x00022d60) level_4_battery

0x4ff7,	// (0x00022d6d) level_5_battery

0x5004,	// (0x00022d7a) level_6_battery

0x5011,	// (0x00022d87) level_7_battery

0x5036,	// (0x00022dac) list_menu_pane_ParamLimits

0x5036,	// (0x00022dac) list_menu_pane

0x5047,	// (0x00022dbd) scroll_pane_cp25_ParamLimits

0x5047,	// (0x00022dbd) scroll_pane_cp25

0x5060,	// (0x00022dd6) list_double2_graphic_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double2_graphic_pane_cp2

0x5060,	// (0x00022dd6) list_double2_large_graphic_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double2_large_graphic_pane_cp2

0x5060,	// (0x00022dd6) list_double2_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double2_pane_cp2

0x5060,	// (0x00022dd6) list_double_graphic_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double_graphic_pane_cp2

0x5060,	// (0x00022dd6) list_double_large_graphic_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double_large_graphic_pane_cp2

0x5060,	// (0x00022dd6) list_double_number_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double_number_pane_cp2

0x5060,	// (0x00022dd6) list_double_pane_cp2_ParamLimits

0x5060,	// (0x00022dd6) list_double_pane_cp2

0x8b00,	// (0x00026876) list_single_2graphic_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_2graphic_pane_cp2

0x8b00,	// (0x00026876) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_graphic_heading_pane_cp2

0x8b00,	// (0x00026876) list_single_graphic_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_graphic_pane_cp2

0x8b00,	// (0x00026876) list_single_heading_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_heading_pane_cp2

0x5070,	// (0x00022de6) list_single_large_graphic_pane_cp2_ParamLimits

0x5070,	// (0x00022de6) list_single_large_graphic_pane_cp2

0x8b00,	// (0x00026876) list_single_number_heading_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_number_heading_pane_cp2

0x8b00,	// (0x00026876) list_single_number_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_number_pane_cp2

0x8b00,	// (0x00026876) list_single_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_pane_cp2

0x508a,	// (0x00022e00) bg_popup_sub_pane_cp22

0x8bbd,	// (0x00026933) popup_side_volume_key_window_g1

0x8be7,	// (0x0002695d) popup_side_volume_key_window_t1

0x8c03,	// (0x00026979) volume_small_pane_cp1

0x44a6,	// (0x0002221c) bg_popup_sub_pane_cp24_ParamLimits

0x44a6,	// (0x0002221c) bg_popup_sub_pane_cp24

0x50a0,	// (0x00022e16) fep_china_uni_candidate_pane_ParamLimits

0x50a0,	// (0x00022e16) fep_china_uni_candidate_pane

0x50b4,	// (0x00022e2a) fep_china_uni_entry_pane

0x50c4,	// (0x00022e3a) popup_fep_china_uni_window_g1

0x50e0,	// (0x00022e56) fep_china_uni_entry_pane_g1

0x50e8,	// (0x00022e5e) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0002d4d3) fep_china_uni_entry_pane_g

0x50f0,	// (0x00022e66) fep_entry_item_pane

0x50fa,	// (0x00022e70) fep_candidate_item_pane

0x5102,	// (0x00022e78) fep_china_uni_candidate_pane_g1

0x510a,	// (0x00022e80) fep_china_uni_candidate_pane_g2

0x5112,	// (0x00022e88) fep_china_uni_candidate_pane_g3

0x511a,	// (0x00022e90) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0002d4d8) fep_china_uni_candidate_pane_g

0x444e,	// (0x000221c4) fep_entry_item_pane_g1

0x5122,	// (0x00022e98) fep_entry_item_pane_t1_ParamLimits

0x5122,	// (0x00022e98) fep_entry_item_pane_t1

0x5138,	// (0x00022eae) fep_candidate_item_pane_t1_ParamLimits

0x5138,	// (0x00022eae) fep_candidate_item_pane_t1

0x514d,	// (0x00022ec3) fep_candidate_item_pane_t2_ParamLimits

0x514d,	// (0x00022ec3) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0002d4e1) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0002d4e1) fep_candidate_item_pane_t

0x44b4,	// (0x0002222a) list_highlight_pane_cp31_ParamLimits

0x44b4,	// (0x0002222a) list_highlight_pane_cp31

0x515f,	// (0x00022ed5) level_1_signal_lsc

0x5168,	// (0x00022ede) level_2_signal_lsc

0x5171,	// (0x00022ee7) level_3_signal_lsc

0x517a,	// (0x00022ef0) level_4_signal_lsc

0x5183,	// (0x00022ef9) level_5_signal_lsc

0x518c,	// (0x00022f02) level_6_signal_lsc

0x5195,	// (0x00022f0b) level_7_signal_lsc

0x5195,	// (0x00022f0b) level_1_battery_lsc

0x519e,	// (0x00022f14) level_2_battery_lsc

0x51a7,	// (0x00022f1d) level_3_battery_lsc

0x51b0,	// (0x00022f26) level_4_battery_lsc

0x51b9,	// (0x00022f2f) level_5_battery_lsc

0x51c2,	// (0x00022f38) level_6_battery_lsc

0x515f,	// (0x00022ed5) level_7_battery_lsc

0x51cb,	// (0x00022f41) scroll_handle_focus_pane_g1

0x51d4,	// (0x00022f4a) scroll_handle_focus_pane_g2

0x51dd,	// (0x00022f53) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0002d4e6) scroll_handle_focus_pane_g

0xe57a,	// (0x0002c2f0) list_single_2graphic_pane_g1_ParamLimits

0xe57a,	// (0x0002c2f0) list_single_2graphic_pane_g1

0xdf6d,	// (0x0002bce3) list_single_2graphic_pane_g2_ParamLimits

0xdf6d,	// (0x0002bce3) list_single_2graphic_pane_g2

0xdef3,	// (0x0002bc69) list_single_2graphic_pane_g3_ParamLimits

0xdef3,	// (0x0002bc69) list_single_2graphic_pane_g3

0xe586,	// (0x0002c2fc) list_single_2graphic_pane_g4_ParamLimits

0xe586,	// (0x0002c2fc) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0002d4ed) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0002d4ed) list_single_2graphic_pane_g

0xe592,	// (0x0002c308) list_single_2graphic_pane_t1_ParamLimits

0xe592,	// (0x0002c308) list_single_2graphic_pane_t1

0xe5c0,	// (0x0002c336) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe5c0,	// (0x0002c336) list_double2_graphic_large_graphic_pane_g1

0xe012,	// (0x0002bd88) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe012,	// (0x0002bd88) list_double2_graphic_large_graphic_pane_g2

0xdfde,	// (0x0002bd54) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xdfde,	// (0x0002bd54) list_double2_graphic_large_graphic_pane_g3

0xe5d2,	// (0x0002c348) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe5d2,	// (0x0002c348) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0002d4f6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0002d4f6) list_double2_graphic_large_graphic_pane_g

0xe5de,	// (0x0002c354) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe5de,	// (0x0002c354) list_double2_graphic_large_graphic_pane_t1

0xe5f4,	// (0x0002c36a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe5f4,	// (0x0002c36a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0002d4ff) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0002d4ff) list_double2_graphic_large_graphic_pane_t

0x52be,	// (0x00023034) popup_fast_swap_window_ParamLimits

0x52be,	// (0x00023034) popup_fast_swap_window

0x52da,	// (0x00023050) popup_side_volume_key_window

0x52f4,	// (0x0002306a) stacon_top_pane

0x52fe,	// (0x00023074) status_pane_ParamLimits

0x52fe,	// (0x00023074) status_pane

0x52f4,	// (0x0002306a) status_small_pane

0x4458,	// (0x000221ce) control_pane

0x4458,	// (0x000221ce) stacon_bottom_pane

0x4ade,	// (0x00022854) scroll_pane_cp121

0x4ad5,	// (0x0002284b) set_content_pane

0x8c0b,	// (0x00026981) bg_active_tab_pane_g1_cp1

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp1

0x8c14,	// (0x0002698a) bg_active_tab_pane_g3_cp1

0x8c0b,	// (0x00026981) bg_passive_tab_pane_g1_cp1

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp1

0x8c14,	// (0x0002698a) bg_passive_tab_pane_g3_cp1

0x8c1d,	// (0x00026993) bg_active_tab_pane_g1_cp2

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp2

0x8c26,	// (0x0002699c) bg_active_tab_pane_g3_cp2

0x8c1d,	// (0x00026993) bg_passive_tab_pane_g1_cp2

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp2

0x8c26,	// (0x0002699c) bg_passive_tab_pane_g3_cp2

0x8c2f,	// (0x000269a5) bg_active_tab_pane_g1_cp3

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp3

0x8c38,	// (0x000269ae) bg_active_tab_pane_g3_cp3

0x8c2f,	// (0x000269a5) bg_passive_tab_pane_g1_cp3

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp3

0x8c38,	// (0x000269ae) bg_passive_tab_pane_g3_cp3

0x8c41,	// (0x000269b7) bg_active_tab_pane_g1_cp4

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp4

0x8c4c,	// (0x000269c2) bg_active_tab_pane_g3_cp4

0x8c41,	// (0x000269b7) bg_passive_tab_pane_g1_cp4

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp4

0x8c4c,	// (0x000269c2) bg_passive_tab_pane_g3_cp4

0x5236,	// (0x00022fac) bg_active_tab_pane_g1_cp5

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp5

0x522d,	// (0x00022fa3) bg_active_tab_pane_g3_cp5

0x5236,	// (0x00022fac) bg_passive_tab_pane_g1_cp5

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp5

0x522d,	// (0x00022fa3) bg_passive_tab_pane_g3_cp5

0x8d98,	// (0x00026b0e) list_set_graphic_pane_ParamLimits

0x8d98,	// (0x00026b0e) list_set_graphic_pane

0x4458,	// (0x000221ce) bg_set_opt_pane_cp4

0x523f,	// (0x00022fb5) list_set_graphic_pane_g1_ParamLimits

0x523f,	// (0x00022fb5) list_set_graphic_pane_g1

0x524b,	// (0x00022fc1) list_set_graphic_pane_g2_ParamLimits

0x524b,	// (0x00022fc1) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0002d504) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0002d504) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0002d86a) volume_small_pane_cp_g

0x526f,	// (0x00022fe5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x526f,	// (0x00022fe5) list_double2_large_graphic_pane_g1_cp2

0x527d,	// (0x00022ff3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x527d,	// (0x00022ff3) list_double2_large_graphic_pane_g2_cp2

0x528e,	// (0x00023004) list_double2_large_graphic_pane_g3_cp2

0x5296,	// (0x0002300c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5296,	// (0x0002300c) list_double2_large_graphic_pane_t1_cp2

0x52ac,	// (0x00023022) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x52ac,	// (0x00023022) list_double2_large_graphic_pane_t2_cp2

0x694a,	// (0x000246c0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x694a,	// (0x000246c0) list_double_large_graphic_pane_g1_cp2

0x695d,	// (0x000246d3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x695d,	// (0x000246d3) list_double_large_graphic_pane_g2_cp2

0x541c,	// (0x00023192) list_double_large_graphic_pane_g3_cp2

0x696e,	// (0x000246e4) list_double_large_graphic_pane_g4_cp

0x6976,	// (0x000246ec) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6976,	// (0x000246ec) list_double_large_graphic_pane_t1_cp2

0x698d,	// (0x00024703) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x698d,	// (0x00024703) list_double_large_graphic_pane_t2_cp2

0x530c,	// (0x00023082) list_double2_graphic_pane_g1_cp2_ParamLimits

0x530c,	// (0x00023082) list_double2_graphic_pane_g1_cp2

0x531a,	// (0x00023090) list_double2_graphic_pane_g2_cp2_ParamLimits

0x531a,	// (0x00023090) list_double2_graphic_pane_g2_cp2

0x532b,	// (0x000230a1) list_double2_graphic_pane_g3_cp2

0x5335,	// (0x000230ab) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5335,	// (0x000230ab) list_double2_graphic_pane_t1_cp2

0x534b,	// (0x000230c1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x534b,	// (0x000230c1) list_double2_graphic_pane_t2_cp2

0x535d,	// (0x000230d3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x535d,	// (0x000230d3) list_single_number_heading_pane_g1_cp2

0x5369,	// (0x000230df) list_single_number_heading_pane_g2_cp2

0x5371,	// (0x000230e7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5371,	// (0x000230e7) list_single_number_heading_pane_t1_cp2

0x5387,	// (0x000230fd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5387,	// (0x000230fd) list_single_number_heading_pane_t2_cp2

0x539b,	// (0x00023111) list_single_number_heading_pane_t3_cp2_ParamLimits

0x539b,	// (0x00023111) list_single_number_heading_pane_t3_cp2

0x535d,	// (0x000230d3) list_single_heading_pane_g1_cp2_ParamLimits

0x535d,	// (0x000230d3) list_single_heading_pane_g1_cp2

0x5369,	// (0x000230df) list_single_heading_pane_g2_cp2

0x5371,	// (0x000230e7) list_single_heading_pane_t1_cp2_ParamLimits

0x5371,	// (0x000230e7) list_single_heading_pane_t1_cp2

0x6752,	// (0x000244c8) list_single_heading_pane_t2_cp2_ParamLimits

0x6752,	// (0x000244c8) list_single_heading_pane_t2_cp2

0x66ec,	// (0x00024462) list_double_graphic_pane_g1_cp2_ParamLimits

0x66ec,	// (0x00024462) list_double_graphic_pane_g1_cp2

0x66f8,	// (0x0002446e) list_double_graphic_pane_g2_cp2_ParamLimits

0x66f8,	// (0x0002446e) list_double_graphic_pane_g2_cp2

0x6707,	// (0x0002447d) list_double_graphic_pane_g3_cp2

0x670f,	// (0x00024485) list_double_graphic_pane_t1_cp2_ParamLimits

0x670f,	// (0x00024485) list_double_graphic_pane_t1_cp2

0x6725,	// (0x0002449b) list_double_graphic_pane_t2_cp2_ParamLimits

0x6725,	// (0x0002449b) list_double_graphic_pane_t2_cp2

0x5410,	// (0x00023186) list_double_number_pane_g1_cp2_ParamLimits

0x5410,	// (0x00023186) list_double_number_pane_g1_cp2

0x541c,	// (0x00023192) list_double_number_pane_g2_cp2

0x66b0,	// (0x00024426) list_double_number_pane_t1_cp2_ParamLimits

0x66b0,	// (0x00024426) list_double_number_pane_t1_cp2

0x66c4,	// (0x0002443a) list_double_number_pane_t2_cp2_ParamLimits

0x66c4,	// (0x0002443a) list_double_number_pane_t2_cp2

0x66da,	// (0x00024450) list_double_number_pane_t3_cp2_ParamLimits

0x66da,	// (0x00024450) list_double_number_pane_t3_cp2

0x6627,	// (0x0002439d) list_single_graphic_pane_g1_cp2_ParamLimits

0x6627,	// (0x0002439d) list_single_graphic_pane_g1_cp2

0x5474,	// (0x000231ea) list_single_graphic_pane_g2_cp2_ParamLimits

0x5474,	// (0x000231ea) list_single_graphic_pane_g2_cp2

0x5480,	// (0x000231f6) list_single_graphic_pane_g3_cp2

0x65fd,	// (0x00024373) list_single_graphic_pane_t1_cp2_ParamLimits

0x65fd,	// (0x00024373) list_single_graphic_pane_t1_cp2

0x5474,	// (0x000231ea) list_single_number_pane_g1_cp2_ParamLimits

0x5474,	// (0x000231ea) list_single_number_pane_g1_cp2

0x5480,	// (0x000231f6) list_single_number_pane_g2_cp2

0x65fd,	// (0x00024373) list_single_number_pane_t1_cp2_ParamLimits

0x65fd,	// (0x00024373) list_single_number_pane_t1_cp2

0x6613,	// (0x00024389) list_single_number_pane_t2_cp2_ParamLimits

0x6613,	// (0x00024389) list_single_number_pane_t2_cp2

0x527d,	// (0x00022ff3) list_double2_pane_g1_cp2_ParamLimits

0x527d,	// (0x00022ff3) list_double2_pane_g1_cp2

0x528e,	// (0x00023004) list_double2_pane_g2_cp2

0x53e8,	// (0x0002315e) list_double2_pane_t1_cp2_ParamLimits

0x53e8,	// (0x0002315e) list_double2_pane_t1_cp2

0x53fe,	// (0x00023174) list_double2_pane_t2_cp2_ParamLimits

0x53fe,	// (0x00023174) list_double2_pane_t2_cp2

0x5410,	// (0x00023186) list_double_pane_g1_cp2_ParamLimits

0x5410,	// (0x00023186) list_double_pane_g1_cp2

0x541c,	// (0x00023192) list_double_pane_g2_cp2

0x5424,	// (0x0002319a) list_double_pane_t1_cp2_ParamLimits

0x5424,	// (0x0002319a) list_double_pane_t1_cp2

0x543a,	// (0x000231b0) list_double_pane_t2_cp2_ParamLimits

0x543a,	// (0x000231b0) list_double_pane_t2_cp2

0x5464,	// (0x000231da) list_single_pane_cp2_g3

0x5474,	// (0x000231ea) list_single_pane_g1_cp2_ParamLimits

0x5474,	// (0x000231ea) list_single_pane_g1_cp2

0x5480,	// (0x000231f6) list_single_pane_g2_cp2

0x5488,	// (0x000231fe) list_single_pane_t1_cp2_ParamLimits

0x5488,	// (0x000231fe) list_single_pane_t1_cp2

0x54a0,	// (0x00023216) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x54a0,	// (0x00023216) list_single_large_graphic_pane_g1_cp2

0x54ae,	// (0x00023224) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x54ae,	// (0x00023224) list_single_large_graphic_pane_g2_cp2

0x54ba,	// (0x00023230) list_single_large_graphic_pane_g3_cp2

0x54c2,	// (0x00023238) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x54c2,	// (0x00023238) list_single_large_graphic_pane_g4_cp1

0x54dc,	// (0x00023252) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x54dc,	// (0x00023252) list_single_large_graphic_pane_t1_cp2

0x65c7,	// (0x0002433d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x65c7,	// (0x0002433d) list_single_graphic_heading_pane_g1_cp2

0x6594,	// (0x0002430a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6594,	// (0x0002430a) list_single_graphic_heading_pane_g4_cp2

0x5480,	// (0x000231f6) list_single_graphic_heading_pane_g5_cp2

0x65d3,	// (0x00024349) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x65d3,	// (0x00024349) list_single_graphic_heading_pane_t1_cp2

0x65e9,	// (0x0002435f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x65e9,	// (0x0002435f) list_single_graphic_heading_pane_t2_cp2

0x6588,	// (0x000242fe) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6588,	// (0x000242fe) list_single_2graphic_pane_g1_cp2

0x6594,	// (0x0002430a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6594,	// (0x0002430a) list_single_2graphic_pane_g2_cp2

0x5480,	// (0x000231f6) list_single_2graphic_pane_g3_cp2

0x65a5,	// (0x0002431b) list_single_2graphic_pane_g4_cp2_ParamLimits

0x65a5,	// (0x0002431b) list_single_2graphic_pane_g4_cp2

0x65b1,	// (0x00024327) list_single_2graphic_pane_t1_cp2_ParamLimits

0x65b1,	// (0x00024327) list_single_2graphic_pane_t1_cp2

0x444e,	// (0x000221c4) list_highlight_pane_g10_cp1

0x618e,	// (0x00023f04) list_highlight_pane_g1_cp1

0x6196,	// (0x00023f0c) list_highlight_pane_g2_cp1

0x619e,	// (0x00023f14) list_highlight_pane_g3_cp1

0x61a6,	// (0x00023f1c) list_highlight_pane_g4_cp1

0x61ae,	// (0x00023f24) list_highlight_pane_g5_cp1

0x61b6,	// (0x00023f2c) list_highlight_pane_g6_cp1

0x61be,	// (0x00023f34) list_highlight_pane_g7_cp1

0x61c6,	// (0x00023f3c) list_highlight_pane_g8_cp1

0x61ce,	// (0x00023f44) list_highlight_pane_g9_cp1

0x9acd,	// (0x00027843) form_field_slider_pane_t3

0x9adb,	// (0x00027851) form_field_slider_pane_t4

0x60c2,	// (0x00023e38) slider_form_pane_ParamLimits

0x60c2,	// (0x00023e38) slider_form_pane

0x4458,	// (0x000221ce) control_abbreviations

0x4458,	// (0x000221ce) control_conventions

0x4458,	// (0x000221ce) control_definitions

0x4458,	// (0x000221ce) format_table_attribute

0x679e,	// (0x00024514) bg_popup_preview_window_pane_g9

0x4458,	// (0x000221ce) format_table_data2

0x4458,	// (0x000221ce) format_table_data3

0x4458,	// (0x000221ce) format_table_data_example

0x0008,

0x4458,	// (0x000221ce) intro_purpose

0xf91e,	// (0x0002d694) bg_popup_preview_window_pane_g

0x4458,	// (0x000221ce) texts_category

0x4458,	// (0x000221ce) texts_graphics

0x54f2,	// (0x00023268) text_digital

0x5501,	// (0x00023277) text_primary

0x5510,	// (0x00023286) text_primary_small

0x551f,	// (0x00023295) text_secondary

0x552e,	// (0x000232a4) text_title

0x6c4f,	// (0x000249c5) bg_passive_tab_pane_g1_cp3_srt

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp3_srt

0x6c46,	// (0x000249bc) bg_passive_tab_pane_g3_cp3_srt

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp3_srt_ParamLimits

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp3_srt

0x6c58,	// (0x000249ce) tabs_4_active_pane_srt_g1

0xa08b,	// (0x00027e01) tabs_4_active_pane_srt_t1_ParamLimits

0xa08b,	// (0x00027e01) tabs_4_active_pane_srt_t1

0x6c4f,	// (0x000249c5) bg_active_tab_pane_g1_cp3_copy1

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp3_copy1

0x6c46,	// (0x000249bc) bg_active_tab_pane_g3_cp3_copy1

0x44b4,	// (0x0002222a) tabs_2_long_active_pane_srt_ParamLimits

0x44b4,	// (0x0002222a) tabs_2_long_active_pane_srt

0x44b4,	// (0x0002222a) tabs_2_long_passive_pane_srt_ParamLimits

0x44b4,	// (0x0002222a) tabs_2_long_passive_pane_srt

0x8864,	// (0x000265da) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8864,	// (0x000265da) bg_passive_tab_pane_cp4_srt

0x6b7a,	// (0x000248f0) bg_passive_tab_pane_g1_cp4_srt

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp4_srt

0x6b71,	// (0x000248e7) bg_passive_tab_pane_g3_cp4_srt

0x579f,	// (0x00023515) bg_active_tab_pane_cp4_srt_ParamLimits

0x579f,	// (0x00023515) bg_active_tab_pane_cp4_srt

0x9e37,	// (0x00027bad) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9e37,	// (0x00027bad) tabs_2_long_active_pane_srt_t1

0x6b7a,	// (0x000248f0) bg_active_tab_pane_g1_cp4_srt

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp4_srt

0x6b71,	// (0x000248e7) bg_active_tab_pane_g3_cp4_srt

0x44a6,	// (0x0002221c) tabs_3_long_active_pane_srt_ParamLimits

0x44a6,	// (0x0002221c) tabs_3_long_active_pane_srt

0x44a6,	// (0x0002221c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x44a6,	// (0x0002221c) tabs_3_long_passive_pane_cp_srt

0x44a6,	// (0x0002221c) tabs_3_long_passive_pane_srt_ParamLimits

0x44a6,	// (0x0002221c) tabs_3_long_passive_pane_srt

0x8864,	// (0x000265da) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8864,	// (0x000265da) bg_passive_tab_pane_cp5_srt

0x5236,	// (0x00022fac) bg_passive_tab_pane_g1_cp5_srt

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp5_srt

0x522d,	// (0x00022fa3) bg_passive_tab_pane_g3_cp5_srt

0x579f,	// (0x00023515) bg_active_tab_pane_cp5_srt_ParamLimits

0x579f,	// (0x00023515) bg_active_tab_pane_cp5_srt

0x9e25,	// (0x00027b9b) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9e25,	// (0x00027b9b) tabs_3_long_active_pane_srt_t1

0x5236,	// (0x00022fac) bg_active_tab_pane_g1_cp5_srt

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp5_srt

0x522d,	// (0x00022fa3) bg_active_tab_pane_g3_cp5_srt

0x6b63,	// (0x000248d9) navi_text_pane_srt_t1

0x6b5b,	// (0x000248d1) navi_icon_pane_srt_g1

0x562c,	// (0x000233a2) midp_editing_number_pane_srt

0x553d,	// (0x000232b3) midp_ticker_pane_srt

0x5634,	// (0x000233aa) midp_ticker_pane_srt_g1

0x563c,	// (0x000233b2) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0002d523) midp_ticker_pane_srt_g

0x5644,	// (0x000233ba) midp_ticker_pane_srt_t1

0x6b4c,	// (0x000248c2) midp_editing_number_pane_t1_copy1

0x8db6,	// (0x00026b2c) listscroll_midp_pane

0x8db6,	// (0x00026b2c) midp_form_pane

0x5545,	// (0x000232bb) midp_info_popup_window_ParamLimits

0x5545,	// (0x000232bb) midp_info_popup_window

0x4bb3,	// (0x00022929) bg_popup_sub_pane_cp50_ParamLimits

0x4bb3,	// (0x00022929) bg_popup_sub_pane_cp50

0x5e10,	// (0x00023b86) listscroll_midp_info_pane_ParamLimits

0x5e10,	// (0x00023b86) listscroll_midp_info_pane

0x5df8,	// (0x00023b6e) listscroll_form_midp_pane_ParamLimits

0x5df8,	// (0x00023b6e) listscroll_form_midp_pane

0x5e04,	// (0x00023b7a) scroll_bar_cp050

0x9ab5,	// (0x0002782b) list_midp_pane

0x74e8,	// (0x0002525e) signal_pane_g2_cp

0x5d2a,	// (0x00023aa0) listscroll_midp_info_pane_t1_ParamLimits

0x5d2a,	// (0x00023aa0) listscroll_midp_info_pane_t1

0x5d42,	// (0x00023ab8) listscroll_midp_info_pane_t2_ParamLimits

0x5d42,	// (0x00023ab8) listscroll_midp_info_pane_t2

0x5d80,	// (0x00023af6) listscroll_midp_info_pane_t3_ParamLimits

0x5d80,	// (0x00023af6) listscroll_midp_info_pane_t3

0x5dba,	// (0x00023b30) listscroll_midp_info_pane_t4_ParamLimits

0x5dba,	// (0x00023b30) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0002d5cf) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0002d5cf) listscroll_midp_info_pane_t

0x4c1a,	// (0x00022990) scroll_pane_cp21

0x5cce,	// (0x00023a44) form_midp_field_choice_group_pane

0x5cd7,	// (0x00023a4d) form_midp_field_text_pane

0x5d10,	// (0x00023a86) form_midp_field_time_pane

0x5d18,	// (0x00023a8e) form_midp_gauge_slider_pane

0x5d21,	// (0x00023a97) form_midp_gauge_wait_pane

0x4458,	// (0x000221ce) form_midp_image_pane

0xe681,	// (0x0002c3f7) list_single_midp_pane_ParamLimits

0xe681,	// (0x0002c3f7) list_single_midp_pane

0x9a76,	// (0x000277ec) form_midp_field_text_pane_t1

0x5b75,	// (0x000238eb) input_focus_pane_cp050

0x5cbd,	// (0x00023a33) list_midp_form_text_pane

0x5c8c,	// (0x00023a02) form_midp_field_choice_group_pane_t1

0x5c9a,	// (0x00023a10) input_focus_pane_cp051

0x5cae,	// (0x00023a24) list_midp_choice_pane

0x4458,	// (0x000221ce) status_idle_pane

0x5c70,	// (0x000239e6) form_midp_field_time_pane_t1

0x444e,	// (0x000221c4) wait_anim_pane_g2_copy1

0x5c7e,	// (0x000239f4) form_midp_field_time_pane_t2

0x0001,

0x559e,	// (0x00023314) aid_navinavi_width_2_pane

0xf854,	// (0x0002d5ca) form_midp_field_time_pane_t

0x4458,	// (0x000221ce) input_focus_pane_cp052

0x4458,	// (0x000221ce) bg_input_focus_pane_cp040

0x5c4c,	// (0x000239c2) form_midp_gauge_slider_pane_t1

0x5c5a,	// (0x000239d0) form_midp_gauge_slider_pane_t2

0x9a5a,	// (0x000277d0) form_midp_gauge_slider_pane_t3

0x9a68,	// (0x000277de) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0002d5c1) form_midp_gauge_slider_pane_t

0x5c68,	// (0x000239de) form_midp_slider_pane

0x44b4,	// (0x0002222a) bg_input_focus_pane_cp041_ParamLimits

0x44b4,	// (0x0002222a) bg_input_focus_pane_cp041

0x5c19,	// (0x0002398f) form_midp_gauge_wait_pane_t1_ParamLimits

0x5c19,	// (0x0002398f) form_midp_gauge_wait_pane_t1

0x5c2b,	// (0x000239a1) form_midp_gauge_wait_pane_t2_ParamLimits

0x5c2b,	// (0x000239a1) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0002d5bc) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0002d5bc) form_midp_gauge_wait_pane_t

0x5c3d,	// (0x000239b3) form_midp_wait_pane_ParamLimits

0x5c3d,	// (0x000239b3) form_midp_wait_pane

0x5be3,	// (0x00023959) form_midp_image_pane_g1

0x5bec,	// (0x00023962) form_midp_image_pane_t1

0x5bfb,	// (0x00023971) form_midp_image_pane_t2

0x5c0a,	// (0x00023980) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0002d5b5) form_midp_image_pane_t

0x5bda,	// (0x00023950) list_single_midp_pane_g1

0xe672,	// (0x0002c3e8) list_single_midp_pane_t1

0x9a2a,	// (0x000277a0) list_midp_form_item_pane_ParamLimits

0x9a2a,	// (0x000277a0) list_midp_form_item_pane

0x5558,	// (0x000232ce) list_midp_form_item_pane_t1

0x5567,	// (0x000232dd) midp_ticker_pane_g1

0x5573,	// (0x000232e9) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0002d509) midp_ticker_pane_g

0x8e6b,	// (0x00026be1) midp_ticker_pane_t1

0xa01e,	// (0x00027d94) midp_editing_number_pane_t1

0x6bda,	// (0x00024950) midp_editing_number_pane

0x6be9,	// (0x0002495f) midp_ticker_pane

0x6b3c,	// (0x000248b2) ai_message_heading_pane

0x4458,	// (0x000221ce) bg_popup_window_pane_cp14

0x6b44,	// (0x000248ba) listscroll_ai_message_pane

0x6ac6,	// (0x0002483c) ai_message_heading_pane_g1_ParamLimits

0x6ac6,	// (0x0002483c) ai_message_heading_pane_g1

0x6ad2,	// (0x00024848) ai_message_heading_pane_g2_ParamLimits

0x6ad2,	// (0x00024848) ai_message_heading_pane_g2

0x6ade,	// (0x00024854) ai_message_heading_pane_g3_ParamLimits

0x6ade,	// (0x00024854) ai_message_heading_pane_g3

0x6aea,	// (0x00024860) ai_message_heading_pane_g4_ParamLimits

0x6aea,	// (0x00024860) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0002d6f6) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0002d6f6) ai_message_heading_pane_g

0x6af6,	// (0x0002486c) ai_message_heading_pane_t1_ParamLimits

0x6af6,	// (0x0002486c) ai_message_heading_pane_t1

0x6b10,	// (0x00024886) ai_message_heading_pane_t2_ParamLimits

0x6b10,	// (0x00024886) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0002d6ff) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0002d6ff) ai_message_heading_pane_t

0x6b22,	// (0x00024898) bg_popup_heading_pane_cp1_ParamLimits

0x6b22,	// (0x00024898) bg_popup_heading_pane_cp1

0x6ab4,	// (0x0002482a) list_ai_message_pane_ParamLimits

0x6ab4,	// (0x0002482a) list_ai_message_pane

0x4c1a,	// (0x00022990) scroll_pane_cp10

0x6a50,	// (0x000247c6) list_ai_message_pane_g1

0x6a58,	// (0x000247ce) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0002d6d3) list_ai_message_pane_g

0x6a60,	// (0x000247d6) list_ai_message_pane_t1_ParamLimits

0x6a60,	// (0x000247d6) list_ai_message_pane_t1

0x6a75,	// (0x000247eb) list_ai_message_pane_t2_ParamLimits

0x6a75,	// (0x000247eb) list_ai_message_pane_t2

0x6a8a,	// (0x00024800) list_ai_message_pane_t3_ParamLimits

0x6a8a,	// (0x00024800) list_ai_message_pane_t3

0x6a9f,	// (0x00024815) list_ai_message_pane_t4_ParamLimits

0x6a9f,	// (0x00024815) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0002d6d8) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0002d6d8) list_ai_message_pane_t

0x9dbf,	// (0x00027b35) cell_ai_soft_ind_pane_ParamLimits

0x9dbf,	// (0x00027b35) cell_ai_soft_ind_pane

0x557f,	// (0x000232f5) cell_ai_soft_ind_pane_g1_ParamLimits

0x557f,	// (0x000232f5) cell_ai_soft_ind_pane_g1

0x4458,	// (0x000221ce) grid_highlight_cp1

0x558c,	// (0x00023302) text_secondary_cp56_ParamLimits

0x558c,	// (0x00023302) text_secondary_cp56

0x6a07,	// (0x0002477d) example_general_pane_ParamLimits

0x6a07,	// (0x0002477d) example_general_pane

0x6a13,	// (0x00024789) example_parent_pane_g1_ParamLimits

0x6a13,	// (0x00024789) example_parent_pane_g1

0x6a1f,	// (0x00024795) example_parent_pane_t1_ParamLimits

0x6a1f,	// (0x00024795) example_parent_pane_t1

0x9393,	// (0x00027109) popup_preview_text_window_ParamLimits

0x9393,	// (0x00027109) popup_preview_text_window

0x546c,	// (0x000231e2) list_single_pane_cp2_g4

0x4683,	// (0x000223f9) bg_popup_preview_window_pane_ParamLimits

0x4683,	// (0x000223f9) bg_popup_preview_window_pane

0x67a6,	// (0x0002451c) popup_preview_text_window_t1_ParamLimits

0x67a6,	// (0x0002451c) popup_preview_text_window_t1

0x67c4,	// (0x0002453a) popup_preview_text_window_t2_ParamLimits

0x67c4,	// (0x0002453a) popup_preview_text_window_t2

0x680d,	// (0x00024583) popup_preview_text_window_t3_ParamLimits

0x680d,	// (0x00024583) popup_preview_text_window_t3

0x6852,	// (0x000245c8) popup_preview_text_window_t4_ParamLimits

0x6852,	// (0x000245c8) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0002d6a7) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0002d6a7) popup_preview_text_window_t

0x68d0,	// (0x00024646) scroll_pane_cp11

0x5a85,	// (0x000237fb) bg_popup_preview_window_pane_g1

0x6766,	// (0x000244dc) bg_popup_preview_window_pane_g2

0x676e,	// (0x000244e4) bg_popup_preview_window_pane_g3

0x6776,	// (0x000244ec) bg_popup_preview_window_pane_g4

0x677e,	// (0x000244f4) bg_popup_preview_window_pane_g5

0x6786,	// (0x000244fc) bg_popup_preview_window_pane_g6

0x678e,	// (0x00024504) bg_popup_preview_window_pane_g7

0x6796,	// (0x0002450c) bg_popup_preview_window_pane_g8

0x80f4,	// (0x00025e6a) aid_popup_width_pane

0x9371,	// (0x000270e7) popup_midp_note_alarm_window_ParamLimits

0x9371,	// (0x000270e7) popup_midp_note_alarm_window

0x4aef,	// (0x00022865) data_form_pane_ParamLimits

0xe3d9,	// (0x0002c14f) form_field_data_pane_g1

0xe3e3,	// (0x0002c159) form_field_data_pane_t1_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_ParamLimits

0x4b09,	// (0x0002287f) data_form_wide_pane_ParamLimits

0xe3fd,	// (0x0002c173) form_field_data_wide_pane_g1

0xe409,	// (0x0002c17f) form_field_data_wide_pane_t1_ParamLimits

0x4876,	// (0x000225ec) input_focus_pane_cp6_ParamLimits

0x8829,	// (0x0002659f) input_popup_find_pane_g1_ParamLimits

0x8829,	// (0x0002659f) input_popup_find_pane_g1

0x8982,	// (0x000266f8) aid_navi_side_left_pane

0x8997,	// (0x0002670d) aid_navi_side_right_pane

0x626b,	// (0x00023fe1) bg_popup_window_pane_cp30_ParamLimits

0x626b,	// (0x00023fe1) bg_popup_window_pane_cp30

0x62e5,	// (0x0002405b) popup_midp_note_alarm_window_g1_ParamLimits

0x62e5,	// (0x0002405b) popup_midp_note_alarm_window_g1

0x6315,	// (0x0002408b) popup_midp_note_alarm_window_t1_ParamLimits

0x6315,	// (0x0002408b) popup_midp_note_alarm_window_t1

0x63b6,	// (0x0002412c) popup_midp_note_alarm_window_t2_ParamLimits

0x63b6,	// (0x0002412c) popup_midp_note_alarm_window_t2

0x6464,	// (0x000241da) popup_midp_note_alarm_window_t3_ParamLimits

0x6464,	// (0x000241da) popup_midp_note_alarm_window_t3

0x648c,	// (0x00024202) popup_midp_note_alarm_window_t4_ParamLimits

0x648c,	// (0x00024202) popup_midp_note_alarm_window_t4

0x64ac,	// (0x00024222) popup_midp_note_alarm_window_t5_ParamLimits

0x64ac,	// (0x00024222) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0002d644) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0002d644) popup_midp_note_alarm_window_t

0x6558,	// (0x000242ce) wait_bar_pane_cp1_ParamLimits

0x6558,	// (0x000242ce) wait_bar_pane_cp1

0x4458,	// (0x000221ce) wait_anim_pane_copy1

0x4458,	// (0x000221ce) wait_border_pane_copy1

0x5f83,	// (0x00023cf9) wait_border_pane_g1_copy1

0xe423,	// (0x0002c199) form_field_popup_pane_g1

0xe42b,	// (0x0002c1a1) form_field_popup_pane_t1_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_cp7_ParamLimits

0x4b35,	// (0x000228ab) list_form_pane_ParamLimits

0xe445,	// (0x0002c1bb) form_field_popup_wide_pane_g1

0xe44d,	// (0x0002c1c3) form_field_popup_wide_pane_t1_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_cp8_ParamLimits

0x4b41,	// (0x000228b7) list_form_wide_pane_ParamLimits

0x6c7f,	// (0x000249f5) aid_size_cell_graphic_pane

0xe4d2,	// (0x0002c248) data_form_pane_t1_ParamLimits

0xe6d0,	// (0x0002c446) data_form_wide_pane_t1_ParamLimits

0x95dd,	// (0x00027353) bg_status_flat_pane

0x84ed,	// (0x00026263) title_pane_t1_ParamLimits

0x446e,	// (0x000221e4) title_pane_t2_ParamLimits

0x4494,	// (0x0002220a) title_pane_t3_ParamLimits

0xf59b,	// (0x0002d311) title_pane_t_ParamLimits

0x4fc3,	// (0x00022d39) level_1_signal_ParamLimits

0x4fd0,	// (0x00022d46) level_2_signal_ParamLimits

0x4fdd,	// (0x00022d53) level_3_signal_ParamLimits

0x4fea,	// (0x00022d60) level_4_signal_ParamLimits

0x4ff7,	// (0x00022d6d) level_5_signal_ParamLimits

0x5004,	// (0x00022d7a) level_6_signal_ParamLimits

0x5011,	// (0x00022d87) level_7_signal_ParamLimits

0x4fc3,	// (0x00022d39) level_1_battery_ParamLimits

0x4fd0,	// (0x00022d46) level_2_battery_ParamLimits

0x4fdd,	// (0x00022d53) level_3_battery_ParamLimits

0x4fea,	// (0x00022d60) level_4_battery_ParamLimits

0x4ff7,	// (0x00022d6d) level_5_battery_ParamLimits

0x5004,	// (0x00022d7a) level_6_battery_ParamLimits

0x5011,	// (0x00022d87) level_7_battery_ParamLimits

0x618e,	// (0x00023f04) bg_status_flat_pane_g1

0x6196,	// (0x00023f0c) bg_status_flat_pane_g2

0x619e,	// (0x00023f14) bg_status_flat_pane_g3

0x61a6,	// (0x00023f1c) bg_status_flat_pane_g4

0x61ae,	// (0x00023f24) bg_status_flat_pane_g5

0x61b6,	// (0x00023f2c) bg_status_flat_pane_g6

0x61be,	// (0x00023f34) bg_status_flat_pane_g7

0x855d,	// (0x000262d3) tabs_3_active_pane_t1_ParamLimits

0x855d,	// (0x000262d3) tabs_3_passive_pane_t1_ParamLimits

0x8577,	// (0x000262ed) tabs_4_active_pane_t1_ParamLimits

0x8577,	// (0x000262ed) tabs_4_1_passive_pane_t1_ParamLimits

0x883f,	// (0x000265b5) tabs_2_active_pane_t1_ParamLimits

0x883f,	// (0x000265b5) tabs_2_passive_pane_t1_ParamLimits

0x579f,	// (0x00023515) bg_active_tab_pane_cp4_ParamLimits

0x8851,	// (0x000265c7) tabs_2_long_active_pane_t1_ParamLimits

0x8864,	// (0x000265da) bg_passive_tab_pane_cp4_ParamLimits

0x98e5,	// (0x0002765b) list_single_midp_graphic_pane_t1_ParamLimits

0x579f,	// (0x00023515) bg_active_tab_pane_cp5_ParamLimits

0x8870,	// (0x000265e6) tabs_3_long_active_pane_t1_ParamLimits

0x8864,	// (0x000265da) bg_passive_tab_pane_cp5_ParamLimits

0x98e5,	// (0x0002765b) list_single_midp_graphic_pane_t1

0x95dd,	// (0x00027353) bg_status_flat_pane_ParamLimits

0x5958,	// (0x000236ce) indicator_pane_cp2_ParamLimits

0x5958,	// (0x000236ce) indicator_pane_cp2

0x9720,	// (0x00027496) navi_pane_srt_ParamLimits

0x9720,	// (0x00027496) navi_pane_srt

0x5980,	// (0x000236f6) popup_clock_digital_analogue_window_cp1

0x44f8,	// (0x0002226e) indicator_pane_t1

0x553d,	// (0x000232b3) copy_highlight_pane

0x553d,	// (0x000232b3) cursor_graphics_pane

0x553d,	// (0x000232b3) graphic_within_text_pane

0x553d,	// (0x000232b3) link_highlight_pane

0x6893,	// (0x00024609) popup_preview_text_window_t5_ParamLimits

0x6893,	// (0x00024609) popup_preview_text_window_t5

0x55a6,	// (0x0002331c) cursor_digital_pane

0x55a6,	// (0x0002331c) cursor_primary_pane

0x55b7,	// (0x0002332d) cursor_primary_small_pane

0x55bf,	// (0x00023335) cursor_secondary_pane

0x55c7,	// (0x0002333d) cursor_title_pane

0x55a6,	// (0x0002331c) link_highlight_digital_pane

0x55ae,	// (0x00023324) link_highlight_primary_pane

0x55b7,	// (0x0002332d) link_highlight_primary_small_pane

0x55bf,	// (0x00023335) link_highlight_secondary_pane

0x55c7,	// (0x0002333d) link_highlight_title_pane

0x55a6,	// (0x0002331c) copy_highlight_digital_pane

0x55a6,	// (0x0002331c) copy_highlight_primary_pane

0x55b7,	// (0x0002332d) copy_highlight_primary_small_pane

0x55bf,	// (0x00023335) copy_highlight_secondary_pane

0x55c7,	// (0x0002333d) copy_highlight_title_pane

0x55bf,	// (0x00023335) graphic_text_digital_pane

0x620e,	// (0x00023f84) graphic_text_primary_pane

0x6217,	// (0x00023f8d) graphic_text_primary_small_pane

0x55b7,	// (0x0002332d) graphic_text_secondary_pane

0x55a6,	// (0x0002331c) graphic_text_title_pane

0x8e7d,	// (0x00026bf3) cursor_primary_pane_g1

0x6200,	// (0x00023f76) cursor_text_primary_t1

0x9afd,	// (0x00027873) cursor_primary_small_pane_g1

0x61f2,	// (0x00023f68) cursor_text_primary_small_t1

0x9af3,	// (0x00027869) cursor_primary_small_pane_g1_copy1

0x61e4,	// (0x00023f5a) cursor_text_primary_small_t1_copy1

0x61d6,	// (0x00023f4c) cursor_text_title_t1

0x9ae9,	// (0x0002785f) cursor_title_pane_g1

0x8e7d,	// (0x00026bf3) cursor_digital_pane_g1

0x55cf,	// (0x00023345) cursor_text_digital_t1

0x6177,	// (0x00023eed) link_highlight_primary_pane_g1

0x617f,	// (0x00023ef5) link_highlight_primary_pane_t1

0x55dd,	// (0x00023353) link_highlight_primary_small_pane_g1

0x55e5,	// (0x0002335b) link_highlight_primary_small_pane_t1

0x55dd,	// (0x00023353) link_highlight_secondary_pane_g1

0x55f4,	// (0x0002336a) link_highlight_secondary_pane_t1

0x60eb,	// (0x00023e61) link_highlight_title_pane_g1

0x60f3,	// (0x00023e69) link_highlight_title_pane_t1

0x60d4,	// (0x00023e4a) link_highlight_digital_pane_g1

0x60dc,	// (0x00023e52) link_highlight_digital_pane_t1

0x5fc8,	// (0x00023d3e) copy_highlight_primary_pane_g1

0x5fd0,	// (0x00023d46) copy_highlight_primary_pane_t1

0x5fa2,	// (0x00023d18) copy_highlight_primary_small_pane_g1

0x5fb9,	// (0x00023d2f) copy_highlight_primary_small_pane_t1

0x5603,	// (0x00023379) copy_highlight_secondary_pane_g1

0x560b,	// (0x00023381) copy_highlight_secondary_pane_t1

0x5fa2,	// (0x00023d18) copy_highlight_title_pane_g1

0x5faa,	// (0x00023d20) copy_highlight_title_pane_t1

0x5fc8,	// (0x00023d3e) copy_highlight_digital_pane_g1

0x6e09,	// (0x00024b7f) copy_highlight_digital_pane_t1

0x6d5d,	// (0x00024ad3) graphic_text_primary_pane_g1

0x6ded,	// (0x00024b63) graphic_text_primary_pane_t1

0x6dfb,	// (0x00024b71) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0002d773) graphic_text_primary_pane_t

0x6dc9,	// (0x00024b3f) graphic_text_primary_small_pane_g1

0x6dd1,	// (0x00024b47) graphic_text_primary_small_pane_t1

0x6ddf,	// (0x00024b55) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0002d76e) graphic_text_primary_small_pane_t

0x6da5,	// (0x00024b1b) graphic_text_secondary_pane_g1

0x6dad,	// (0x00024b23) graphic_text_secondary_pane_t1

0x6dbb,	// (0x00024b31) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0002d769) graphic_text_secondary_pane_t

0x6d81,	// (0x00024af7) graphic_text_title_pane_g1

0x6d89,	// (0x00024aff) graphic_text_title_pane_t1

0x6d97,	// (0x00024b0d) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0002d764) graphic_text_title_pane_t

0x6d5d,	// (0x00024ad3) graphic_text_digital_pane_g1

0x6d65,	// (0x00024adb) graphic_text_digital_pane_t1

0x6d73,	// (0x00024ae9) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0002d75f) graphic_text_digital_pane_t

0x44b4,	// (0x0002222a) navi_icon_pane_srt_ParamLimits

0x44b4,	// (0x0002222a) navi_icon_pane_srt

0x4458,	// (0x000221ce) navi_midp_pane_srt

0x4458,	// (0x000221ce) navi_navi_pane_srt

0x44b4,	// (0x0002222a) navi_text_pane_srt_ParamLimits

0x44b4,	// (0x0002222a) navi_text_pane_srt

0x6d28,	// (0x00024a9e) navi_navi_icon_text_pane_srt

0x6d42,	// (0x00024ab8) navi_navi_pane_srt_g1_ParamLimits

0x6d42,	// (0x00024ab8) navi_navi_pane_srt_g1

0x6d30,	// (0x00024aa6) navi_navi_pane_srt_g2_ParamLimits

0x6d30,	// (0x00024aa6) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0002d75a) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0002d75a) navi_navi_pane_srt_g

0x6d54,	// (0x00024aca) navi_navi_tabs_pane_srt

0x6d28,	// (0x00024a9e) navi_navi_text_pane_srt

0x6d28,	// (0x00024a9e) navi_navi_volume_pane_srt

0x6d19,	// (0x00024a8f) navi_navi_text_pane_srt_t1

0xa1af,	// (0x00027f25) navi_navi_volume_pane_srt_g1

0xa1b7,	// (0x00027f2d) volume_small_pane_srt_ParamLimits

0xa1b7,	// (0x00027f2d) volume_small_pane_srt

0x8e87,	// (0x00026bfd) volume_small_pane_srt_g1_ParamLimits

0x8e87,	// (0x00026bfd) volume_small_pane_srt_g1

0x8e97,	// (0x00026c0d) volume_small_pane_srt_g2_ParamLimits

0x8e97,	// (0x00026c0d) volume_small_pane_srt_g2

0x8ea8,	// (0x00026c1e) volume_small_pane_srt_g3_ParamLimits

0x8ea8,	// (0x00026c1e) volume_small_pane_srt_g3

0x8eb9,	// (0x00026c2f) volume_small_pane_srt_g4_ParamLimits

0x8eb9,	// (0x00026c2f) volume_small_pane_srt_g4

0x8eca,	// (0x00026c40) volume_small_pane_srt_g5_ParamLimits

0x8eca,	// (0x00026c40) volume_small_pane_srt_g5

0x8edb,	// (0x00026c51) volume_small_pane_srt_g6_ParamLimits

0x8edb,	// (0x00026c51) volume_small_pane_srt_g6

0x8eec,	// (0x00026c62) volume_small_pane_srt_g7_ParamLimits

0x8eec,	// (0x00026c62) volume_small_pane_srt_g7

0x8efd,	// (0x00026c73) volume_small_pane_srt_g8_ParamLimits

0x8efd,	// (0x00026c73) volume_small_pane_srt_g8

0x8f0e,	// (0x00026c84) volume_small_pane_srt_g9_ParamLimits

0x8f0e,	// (0x00026c84) volume_small_pane_srt_g9

0x8f1f,	// (0x00026c95) volume_small_pane_srt_g10_ParamLimits

0x8f1f,	// (0x00026c95) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0002d50e) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0002d50e) volume_small_pane_srt_g

0x472c,	// (0x000224a2) query_popup_data_pane_cp2

0x6cff,	// (0x00024a75) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6cff,	// (0x00024a75) navi_navi_icon_text_pane_srt_t1

0x620e,	// (0x00023f84) navi_tabs_2_long_pane_srt

0x620e,	// (0x00023f84) navi_tabs_2_pane_srt

0x620e,	// (0x00023f84) navi_tabs_3_long_pane_srt

0x620e,	// (0x00023f84) navi_tabs_3_pane_srt

0x620e,	// (0x00023f84) navi_tabs_4_pane_srt

0xa18f,	// (0x00027f05) tabs_2_active_pane_srt_ParamLimits

0xa18f,	// (0x00027f05) tabs_2_active_pane_srt

0xa19f,	// (0x00027f15) tabs_2_passive_pane_srt_ParamLimits

0xa19f,	// (0x00027f15) tabs_2_passive_pane_srt

0x4c52,	// (0x000229c8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c52,	// (0x000229c8) bg_passive_tab_pane_cp1_srt

0x6ce6,	// (0x00024a5c) bg_passive_tab_pane_g1_cp1_srt

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp1_srt

0x6cdd,	// (0x00024a53) bg_passive_tab_pane_g3_cp1_srt

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp1_srt_ParamLimits

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp1_srt

0x6cef,	// (0x00024a65) tabs_2_active_pane_srt_g1

0xa17d,	// (0x00027ef3) tabs_2_active_pane_srt_t1_ParamLimits

0xa17d,	// (0x00027ef3) tabs_2_active_pane_srt_t1

0x6ce6,	// (0x00024a5c) bg_active_tab_pane_g1_cp1_srt

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp1_srt

0x6cdd,	// (0x00024a53) bg_active_tab_pane_g3_cp1_srt

0xa14a,	// (0x00027ec0) tabs_3_active_pane_srt_ParamLimits

0xa14a,	// (0x00027ec0) tabs_3_active_pane_srt

0xa15b,	// (0x00027ed1) tabs_3_passive_pane_cp_srt_ParamLimits

0xa15b,	// (0x00027ed1) tabs_3_passive_pane_cp_srt

0xa16c,	// (0x00027ee2) tabs_3_passive_pane_srt_ParamLimits

0xa16c,	// (0x00027ee2) tabs_3_passive_pane_srt

0x4c52,	// (0x000229c8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c52,	// (0x000229c8) bg_passive_tab_pane_cp2_srt

0x5623,	// (0x00023399) bg_passive_tab_pane_g1_cp2_srt

0x51e6,	// (0x00022f5c) bg_passive_tab_pane_g2_cp2_srt

0x561a,	// (0x00023390) bg_passive_tab_pane_g3_cp2_srt

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp2_srt_ParamLimits

0x44b4,	// (0x0002222a) bg_active_tab_pane_cp2_srt

0x6cd5,	// (0x00024a4b) tabs_3_active_pane_srt_g1

0xa138,	// (0x00027eae) tabs_3_active_pane_srt_t1_ParamLimits

0xa138,	// (0x00027eae) tabs_3_active_pane_srt_t1

0x5623,	// (0x00023399) bg_active_tab_pane_g1_cp2_srt

0x51e6,	// (0x00022f5c) bg_active_tab_pane_g2_cp2_srt

0x561a,	// (0x00023390) bg_active_tab_pane_g3_cp2_srt

0xa0f0,	// (0x00027e66) tabs_4_active_pane_srt_ParamLimits

0xa0f0,	// (0x00027e66) tabs_4_active_pane_srt

0xa102,	// (0x00027e78) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa102,	// (0x00027e78) tabs_4_passive_pane_cp2_srt

0x5747,	// (0x000234bd) aid_size_cell_toolbar

0x8864,	// (0x000265da) main_idle_act_pane_ParamLimits

0x581f,	// (0x00023595) popup_large_graphic_colour_window_ParamLimits

0x94e5,	// (0x0002725b) popup_toolbar_window_ParamLimits

0x94e5,	// (0x0002725b) popup_toolbar_window

0xe736,	// (0x0002c4ac) list_single_graphic_2heading_pane_ParamLimits

0xe736,	// (0x0002c4ac) list_single_graphic_2heading_pane

0x4dfc,	// (0x00022b72) aid_size_cell_apps_grid_lsc_pane

0x4e0e,	// (0x00022b84) aid_size_cell_apps_grid_prt_pane

0x4c52,	// (0x000229c8) bg_wml_button_pane_cp1_ParamLimits

0x4c52,	// (0x000229c8) bg_wml_button_pane_cp1

0x9a76,	// (0x000277ec) form_midp_field_text_pane_t1_ParamLimits

0x5b75,	// (0x000238eb) input_focus_pane_cp050_ParamLimits

0x5cbd,	// (0x00023a33) list_midp_form_text_pane_ParamLimits

0x5c9a,	// (0x00023a10) input_focus_pane_cp051_ParamLimits

0x5cae,	// (0x00023a24) list_midp_choice_pane_ParamLimits

0x99c4,	// (0x0002773a) list_single_2graphic_pane_cp3_ParamLimits

0x99c4,	// (0x0002773a) list_single_2graphic_pane_cp3

0x99f0,	// (0x00027766) list_single_midp_graphic_pane_ParamLimits

0x99f0,	// (0x00027766) list_single_midp_graphic_pane

0x8060,	// (0x00025dd6) list_single_graphic_2heading_pane_g1_ParamLimits

0x8060,	// (0x00025dd6) list_single_graphic_2heading_pane_g1

0x806c,	// (0x00025de2) list_single_graphic_2heading_pane_g4_ParamLimits

0x806c,	// (0x00025de2) list_single_graphic_2heading_pane_g4

0x8078,	// (0x00025dee) list_single_graphic_2heading_pane_g5_ParamLimits

0x8078,	// (0x00025dee) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0002d561) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0002d561) list_single_graphic_2heading_pane_g

0x8084,	// (0x00025dfa) list_single_graphic_2heading_pane_t1_ParamLimits

0x8084,	// (0x00025dfa) list_single_graphic_2heading_pane_t1

0x8098,	// (0x00025e0e) list_single_graphic_2heading_pane_t2_ParamLimits

0x8098,	// (0x00025e0e) list_single_graphic_2heading_pane_t2

0x80b4,	// (0x00025e2a) list_single_graphic_2heading_pane_t3_ParamLimits

0x80b4,	// (0x00025e2a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0002d568) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0002d568) list_single_graphic_2heading_pane_t

0x59c3,	// (0x00023739) bg_popup_sub_pane_cp2

0x59ed,	// (0x00023763) grid_toobar_pane

0x9856,	// (0x000275cc) cell_toolbar_pane_ParamLimits

0x9856,	// (0x000275cc) cell_toolbar_pane

0x5a29,	// (0x0002379f) cell_toolbar_pane_g1_ParamLimits

0x5a29,	// (0x0002379f) cell_toolbar_pane_g1

0x5a3d,	// (0x000237b3) cell_toolbar_pane_g2_ParamLimits

0x5a3d,	// (0x000237b3) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0002d576) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0002d576) cell_toolbar_pane_g

0x5a5f,	// (0x000237d5) grid_highlight_pane_cp2_ParamLimits

0x5a5f,	// (0x000237d5) grid_highlight_pane_cp2

0x5a79,	// (0x000237ef) toolbar_button_pane

0x5a85,	// (0x000237fb) toolbar_button_pane_g1

0x5a95,	// (0x0002380b) toolbar_button_pane_g2

0x5a8d,	// (0x00023803) toolbar_button_pane_g3

0x5aa5,	// (0x0002381b) toolbar_button_pane_g4

0x5a9d,	// (0x00023813) toolbar_button_pane_g5

0x5aad,	// (0x00023823) toolbar_button_pane_g6

0x5ab5,	// (0x0002382b) toolbar_button_pane_g7

0x5ac5,	// (0x0002383b) toolbar_button_pane_g8

0x5abd,	// (0x00023833) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0002d57b) toolbar_button_pane_g

0x988e,	// (0x00027604) list_single_2graphic_pane_g1_cp3_ParamLimits

0x988e,	// (0x00027604) list_single_2graphic_pane_g1_cp3

0x989a,	// (0x00027610) list_single_2graphic_pane_g2_cp3_ParamLimits

0x989a,	// (0x00027610) list_single_2graphic_pane_g2_cp3

0x98ab,	// (0x00027621) list_single_2graphic_pane_g3_cp3

0x98b3,	// (0x00027629) list_single_2graphic_pane_g4_cp3_ParamLimits

0x98b3,	// (0x00027629) list_single_2graphic_pane_g4_cp3

0x98bf,	// (0x00027635) list_single_2graphic_pane_t1_cp3_ParamLimits

0x98bf,	// (0x00027635) list_single_2graphic_pane_t1_cp3

0x98d9,	// (0x0002764f) list_single_midp_graphic_pane_g2_ParamLimits

0x98d9,	// (0x0002764f) list_single_midp_graphic_pane_g2

0x574f,	// (0x000234c5) aid_zoom_text_primary

0xe606,	// (0x0002c37c) aid_zoom_text_secondary

0x56d7,	// (0x0002344d) status_small_pane_g7_ParamLimits

0x56d7,	// (0x0002344d) status_small_pane_g7

0x56fa,	// (0x00023470) status_small_pane_t1_ParamLimits

0x84d0,	// (0x00026246) title_pane_g2

0x0003,

0xf592,	// (0x0002d308) title_pane_g

0x872a,	// (0x000264a0) aid_size_cell_colour_1_pane_ParamLimits

0x872a,	// (0x000264a0) aid_size_cell_colour_1_pane

0x873e,	// (0x000264b4) aid_size_cell_colour_2_pane_ParamLimits

0x873e,	// (0x000264b4) aid_size_cell_colour_2_pane

0x8752,	// (0x000264c8) aid_size_cell_colour_3_pane_ParamLimits

0x8752,	// (0x000264c8) aid_size_cell_colour_3_pane

0x8766,	// (0x000264dc) aid_size_cell_colour_4_pane_ParamLimits

0x8766,	// (0x000264dc) aid_size_cell_colour_4_pane

0x88be,	// (0x00026634) title_pane_stacon_g1_ParamLimits

0x88be,	// (0x00026634) title_pane_stacon_g1

0x6027,	// (0x00023d9d) popup_note_wait_window_g3_ParamLimits

0x6027,	// (0x00023d9d) popup_note_wait_window_g3

0x609d,	// (0x00023e13) popup_note_wait_window_t5_ParamLimits

0x609d,	// (0x00023e13) popup_note_wait_window_t5

0x4458,	// (0x000221ce) main_feb_china_hwr_fs_writing_pane

0x910e,	// (0x00026e84) popup_feb_china_hwr_fs_window_ParamLimits

0x910e,	// (0x00026e84) popup_feb_china_hwr_fs_window

0x98fb,	// (0x00027671) aid_size_cell_hwr_fs_ParamLimits

0x98fb,	// (0x00027671) aid_size_cell_hwr_fs

0x5b75,	// (0x000238eb) bg_popup_sub_pane_cp3_ParamLimits

0x5b75,	// (0x000238eb) bg_popup_sub_pane_cp3

0x9910,	// (0x00027686) grid_hwr_fs_pane_ParamLimits

0x9910,	// (0x00027686) grid_hwr_fs_pane

0x9928,	// (0x0002769e) linegrid_hwr_fs_pane_ParamLimits

0x9928,	// (0x0002769e) linegrid_hwr_fs_pane

0x9938,	// (0x000276ae) cell_hwr_fs_pane_ParamLimits

0x9938,	// (0x000276ae) cell_hwr_fs_pane

0x5b81,	// (0x000238f7) linegrid_hwr_fs_pane_g1_ParamLimits

0x5b81,	// (0x000238f7) linegrid_hwr_fs_pane_g1

0x995a,	// (0x000276d0) linegrid_hwr_fs_pane_g2_ParamLimits

0x995a,	// (0x000276d0) linegrid_hwr_fs_pane_g2

0x5b8d,	// (0x00023903) linegrid_hwr_fs_pane_g3_ParamLimits

0x5b8d,	// (0x00023903) linegrid_hwr_fs_pane_g3

0x996c,	// (0x000276e2) linegrid_hwr_fs_pane_g4_ParamLimits

0x996c,	// (0x000276e2) linegrid_hwr_fs_pane_g4

0x9986,	// (0x000276fc) linegrid_hwr_fs_pane_g5_ParamLimits

0x9986,	// (0x000276fc) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0002d5a1) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0002d5a1) linegrid_hwr_fs_pane_g

0x5b99,	// (0x0002390f) cell_hwr_fs_pane_g1_ParamLimits

0x5b99,	// (0x0002390f) cell_hwr_fs_pane_g1

0x5991,	// (0x00023707) cell_hwr_fs_pane_g2_ParamLimits

0x5991,	// (0x00023707) cell_hwr_fs_pane_g2

0x999c,	// (0x00027712) cell_hwr_fs_pane_g3_ParamLimits

0x999c,	// (0x00027712) cell_hwr_fs_pane_g3

0x99a9,	// (0x0002771f) cell_hwr_fs_pane_g4_ParamLimits

0x99a9,	// (0x0002771f) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0002d5ac) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0002d5ac) cell_hwr_fs_pane_g

0x99b6,	// (0x0002772c) cell_hwr_fs_pane_t1

0x4458,	// (0x000221ce) grid_highlight_pane_cp6

0x4458,	// (0x000221ce) main_idle_act2_pane

0x4c01,	// (0x00022977) aid_inside_area_popup_secondary

0x9c76,	// (0x000279ec) aid_inside_area_window_primary_ParamLimits

0x9c76,	// (0x000279ec) aid_inside_area_window_primary

0x6e18,	// (0x00024b8e) ai2_news_ticker_pane

0x6e20,	// (0x00024b96) aid_size_cell_ai1_link_ParamLimits

0x6e20,	// (0x00024b96) aid_size_cell_ai1_link

0x6e3a,	// (0x00024bb0) popup_ai2_data_window_ParamLimits

0x6e3a,	// (0x00024bb0) popup_ai2_data_window

0x6e4e,	// (0x00024bc4) popup_ai2_link_window_ParamLimits

0x6e4e,	// (0x00024bc4) popup_ai2_link_window

0x5b75,	// (0x000238eb) bg_popup_sub_pane_cp4_ParamLimits

0x5b75,	// (0x000238eb) bg_popup_sub_pane_cp4

0x6e62,	// (0x00024bd8) grid_ai2_link_pane_ParamLimits

0x6e62,	// (0x00024bd8) grid_ai2_link_pane

0x6e79,	// (0x00024bef) popup_ai2_link_window_g1_ParamLimits

0x6e79,	// (0x00024bef) popup_ai2_link_window_g1

0x6e85,	// (0x00024bfb) popup_ai2_link_window_g2_ParamLimits

0x6e85,	// (0x00024bfb) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0002d778) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0002d778) popup_ai2_link_window_g

0x6e94,	// (0x00024c0a) ai2_mp_button_pane

0x6e9c,	// (0x00024c12) ai2_mp_volume_pane

0x5c9a,	// (0x00023a10) bg_popup_sub_pane_cp5_ParamLimits

0x5c9a,	// (0x00023a10) bg_popup_sub_pane_cp5

0x6ea4,	// (0x00024c1a) heading_ai2_gene_pane_ParamLimits

0x6ea4,	// (0x00024c1a) heading_ai2_gene_pane

0x6eb0,	// (0x00024c26) list_ai2_gene_pane_ParamLimits

0x6eb0,	// (0x00024c26) list_ai2_gene_pane

0x6ef8,	// (0x00024c6e) cell_ai2_link_pane_ParamLimits

0x6ef8,	// (0x00024c6e) cell_ai2_link_pane

0x6f0e,	// (0x00024c84) cell_ai2_link_pane_g1

0x4458,	// (0x000221ce) grid_highlight_pane_cp7

0xa1cc,	// (0x00027f42) ai2_mp_volume_pane_g1

0x6fe7,	// (0x00024d5d) ai2_mp_volume_pane_g2

0x6f54,	// (0x00024cca) list_ai2_gene_pane_t1

0x6fdf,	// (0x00024d55) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0002d791) ai2_mp_volume_pane_g

0xa1d4,	// (0x00027f4a) volume_small_pane_cp3

0x6fef,	// (0x00024d65) aid_size_cell_ai2_button

0x6ff7,	// (0x00024d6d) grid_ai2_button_pane

0x7000,	// (0x00024d76) cell_ai2_button_pane_ParamLimits

0x7000,	// (0x00024d76) cell_ai2_button_pane

0x444e,	// (0x000221c4) cell_ai2_button_pane_g1

0x4458,	// (0x000221ce) grid_highlight_pane_cp8

0x6f9f,	// (0x00024d15) ai2_gene_pane_t1_ParamLimits

0x6f9f,	// (0x00024d15) ai2_gene_pane_t1

0x90aa,	// (0x00026e20) aid_height_parent_landscape

0x9ec2,	// (0x00027c38) aid_height_set_list

0x6a32,	// (0x000247a8) aid_size_parent

0x6c7f,	// (0x000249f5) aid_size_cell_graphic_pane_ParamLimits

0x6ec0,	// (0x00024c36) popup_ai2_data_window_g1_ParamLimits

0x6ec0,	// (0x00024c36) popup_ai2_data_window_g1

0x6ecc,	// (0x00024c42) ai2_news_ticker_pane_g1

0x6ed4,	// (0x00024c4a) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0002d77d) ai2_news_ticker_pane_g

0x6edc,	// (0x00024c52) ai2_news_ticker_pane_t1

0x6eea,	// (0x00024c60) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0002d782) ai2_news_ticker_pane_t

0x6f17,	// (0x00024c8d) heading_ai2_gene_pane_g1

0x6f1f,	// (0x00024c95) heading_ai2_gene_pane_t1_ParamLimits

0x6f1f,	// (0x00024c95) heading_ai2_gene_pane_t1

0x6f34,	// (0x00024caa) list_highlight_pane_cp6

0x6f3c,	// (0x00024cb2) ai2_gene_pane_ParamLimits

0x6f3c,	// (0x00024cb2) ai2_gene_pane

0x6f62,	// (0x00024cd8) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0002d787) list_ai2_gene_pane_t

0x6f70,	// (0x00024ce6) list_highlight_pane_cp8_ParamLimits

0x6f70,	// (0x00024ce6) list_highlight_pane_cp8

0x6f81,	// (0x00024cf7) ai2_gene_pane_g1_ParamLimits

0x6f81,	// (0x00024cf7) ai2_gene_pane_g1

0x6f93,	// (0x00024d09) ai2_gene_pane_g2_ParamLimits

0x6f93,	// (0x00024d09) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0002d78c) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0002d78c) ai2_gene_pane_g

0x4a91,	// (0x00022807) scroll_pane_cp12

0x9069,	// (0x00026ddf) control_pane_t3_ParamLimits

0x9069,	// (0x00026ddf) control_pane_t3

0x56eb,	// (0x00023461) status_small_pane_g8_ParamLimits

0x56eb,	// (0x00023461) status_small_pane_g8

0x9198,	// (0x00026f0e) popup_find_window_ParamLimits

0x9385,	// (0x000270fb) popup_note_image_window_ParamLimits

0xdf61,	// (0x0002bcd7) list_double2_graphic_pane_vc_g1_ParamLimits

0xdf61,	// (0x0002bcd7) list_double2_graphic_pane_vc_g1

0xdee7,	// (0x0002bc5d) list_double2_graphic_pane_vc_g2_ParamLimits

0xdee7,	// (0x0002bc5d) list_double2_graphic_pane_vc_g2

0xdef3,	// (0x0002bc69) list_double2_graphic_pane_vc_g3_ParamLimits

0xdef3,	// (0x0002bc69) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002d56f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002d56f) list_double2_graphic_pane_vc_g

0xe632,	// (0x0002c3a8) list_double2_graphic_pane_vc_t1_ParamLimits

0xe632,	// (0x0002c3a8) list_double2_graphic_pane_vc_t1

0xdee7,	// (0x0002bc5d) list_single_heading_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_heading_pane_vc_g1

0xdef3,	// (0x0002bc69) list_single_heading_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d382) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d382) list_single_heading_pane_vc_g

0xe648,	// (0x0002c3be) list_single_heading_pane_vc_t1_ParamLimits

0xe648,	// (0x0002c3be) list_single_heading_pane_vc_t1

0xe65e,	// (0x0002c3d4) list_single_heading_pane_vc_t2_ParamLimits

0xe65e,	// (0x0002c3d4) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0002d590) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0002d590) list_single_heading_pane_vc_t

0x5acd,	// (0x00023843) list_setting_number_pane_vc_g1_ParamLimits

0x5acd,	// (0x00023843) list_setting_number_pane_vc_g1

0x5ad9,	// (0x0002384f) list_setting_number_pane_vc_g2_ParamLimits

0x5ad9,	// (0x0002384f) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002d595) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002d595) list_setting_number_pane_vc_g

0x5ae5,	// (0x0002385b) list_setting_number_pane_vc_t1_ParamLimits

0x5ae5,	// (0x0002385b) list_setting_number_pane_vc_t1

0x5af9,	// (0x0002386f) list_setting_number_pane_vc_t2_ParamLimits

0x5af9,	// (0x0002386f) list_setting_number_pane_vc_t2

0x5b15,	// (0x0002388b) list_setting_number_pane_vc_t3_ParamLimits

0x5b15,	// (0x0002388b) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0002d59a) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0002d59a) list_setting_number_pane_vc_t

0x5b3d,	// (0x000238b3) set_value_pane_vc_ParamLimits

0x5b3d,	// (0x000238b3) set_value_pane_vc

0xe736,	// (0x0002c4ac) list_double2_graphic_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double2_graphic_pane_vc

0x6bfc,	// (0x00024972) list_double2_large_graphic_pane_vc_ParamLimits

0x6bfc,	// (0x00024972) list_double2_large_graphic_pane_vc

0xe736,	// (0x0002c4ac) list_double2_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double2_pane_vc

0xe736,	// (0x0002c4ac) list_double_graphic_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double_graphic_heading_pane_vc

0xe736,	// (0x0002c4ac) list_double_graphic_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double_graphic_pane_vc

0xe736,	// (0x0002c4ac) list_double_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double_heading_pane_vc

0x6bfc,	// (0x00024972) list_double_large_graphic_pane_vc_ParamLimits

0x6bfc,	// (0x00024972) list_double_large_graphic_pane_vc

0xe736,	// (0x0002c4ac) list_double_number_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double_number_pane_vc

0xe736,	// (0x0002c4ac) list_double_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double_pane_vc

0xe736,	// (0x0002c4ac) list_double_time_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_double_time_pane_vc

0xe736,	// (0x0002c4ac) list_setting_number_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_setting_number_pane_vc

0xe736,	// (0x0002c4ac) list_setting_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_setting_pane_vc

0xe736,	// (0x0002c4ac) list_single_graphic_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_single_graphic_heading_pane_vc

0xe736,	// (0x0002c4ac) list_single_heading_pane_vc_ParamLimits

0xe736,	// (0x0002c4ac) list_single_heading_pane_vc

0xe74a,	// (0x0002c4c0) list_single_number_heading_pane_vc_ParamLimits

0xe74a,	// (0x0002c4c0) list_single_number_heading_pane_vc

0xdf61,	// (0x0002bcd7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdf61,	// (0x0002bcd7) list_double_graphic_heading_pane_vc_g1

0xdee7,	// (0x0002bc5d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdee7,	// (0x0002bc5d) list_double_graphic_heading_pane_vc_g2

0xdef3,	// (0x0002bc69) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdef3,	// (0x0002bc69) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f9,	// (0x0002d56f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002d56f) list_double_graphic_heading_pane_vc_g

0xe807,	// (0x0002c57d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe807,	// (0x0002c57d) list_double_graphic_heading_pane_vc_t1

0xe648,	// (0x0002c3be) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe648,	// (0x0002c3be) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x0002d798) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x0002d798) list_double_graphic_heading_pane_vc_t

0x5acd,	// (0x00023843) list_setting_pane_vc_g1_ParamLimits

0x5acd,	// (0x00023843) list_setting_pane_vc_g1

0x5ad9,	// (0x0002384f) list_setting_pane_vc_g2_ParamLimits

0x5ad9,	// (0x0002384f) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0002d595) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0002d595) list_setting_pane_vc_g

0x71f6,	// (0x00024f6c) list_setting_pane_vc_t1_ParamLimits

0x71f6,	// (0x00024f6c) list_setting_pane_vc_t1

0x720a,	// (0x00024f80) list_setting_pane_vc_t2_ParamLimits

0x720a,	// (0x00024f80) list_setting_pane_vc_t2

0x0001,

0xfa65,	// (0x0002d7db) list_setting_pane_vc_t_ParamLimits

0xfa65,	// (0x0002d7db) list_setting_pane_vc_t

0x5b3d,	// (0x000238b3) set_value_pane_cp_vc_ParamLimits

0x5b3d,	// (0x000238b3) set_value_pane_cp_vc

0xdee7,	// (0x0002bc5d) list_single_number_heading_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_number_heading_pane_vc_g1

0xdef3,	// (0x0002bc69) list_single_number_heading_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d382) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d382) list_single_number_heading_pane_vc_g

0xe648,	// (0x0002c3be) list_single_number_heading_pane_vc_t1_ParamLimits

0xe648,	// (0x0002c3be) list_single_number_heading_pane_vc_t1

0xe81b,	// (0x0002c591) list_single_number_heading_pane_vc_t2_ParamLimits

0xe81b,	// (0x0002c591) list_single_number_heading_pane_vc_t2

0xdf4f,	// (0x0002bcc5) list_single_number_heading_pane_vc_t3_ParamLimits

0xdf4f,	// (0x0002bcc5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6a,	// (0x0002d7e0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002d7e0) list_single_number_heading_pane_vc_t

0xdf61,	// (0x0002bcd7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdf61,	// (0x0002bcd7) list_single_graphic_heading_pane_vc_g1

0xdee7,	// (0x0002bc5d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_graphic_heading_pane_vc_g4

0xdef3,	// (0x0002bc69) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdef3,	// (0x0002bc69) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0002d56f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0002d56f) list_single_graphic_heading_pane_vc_g

0xe648,	// (0x0002c3be) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe648,	// (0x0002c3be) list_single_graphic_heading_pane_vc_t1

0xe82f,	// (0x0002c5a5) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe82f,	// (0x0002c5a5) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002d7e7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002d7e7) list_single_graphic_heading_pane_vc_t

0xdee7,	// (0x0002bc5d) list_double2_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_double2_pane_vc_g1

0xdef3,	// (0x0002bc69) list_double2_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d382) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d382) list_double2_pane_vc_g

0xe6fe,	// (0x0002c474) list_double2_pane_vc_t1_ParamLimits

0xe6fe,	// (0x0002c474) list_double2_pane_vc_t1

0xe843,	// (0x0002c5b9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe843,	// (0x0002c5b9) list_double2_large_graphic_pane_vc_g1

0xe84f,	// (0x0002c5c5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe84f,	// (0x0002c5c5) list_double2_large_graphic_pane_vc_g2

0xe85b,	// (0x0002c5d1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe85b,	// (0x0002c5d1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa76,	// (0x0002d7ec) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002d7ec) list_double2_large_graphic_pane_vc_g

0xe867,	// (0x0002c5dd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe867,	// (0x0002c5dd) list_double2_large_graphic_pane_vc_t1

0xe87d,	// (0x0002c5f3) list_double_time_pane_vc_g1_ParamLimits

0xe87d,	// (0x0002c5f3) list_double_time_pane_vc_g1

0xe889,	// (0x0002c5ff) list_double_time_pane_vc_g2_ParamLimits

0xe889,	// (0x0002c5ff) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0002d7f3) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0002d7f3) list_double_time_pane_vc_g

0xe895,	// (0x0002c60b) list_double_time_pane_vc_t1_ParamLimits

0xe895,	// (0x0002c60b) list_double_time_pane_vc_t1

0xe8ae,	// (0x0002c624) list_double_time_pane_vc_t2_ParamLimits

0xe8ae,	// (0x0002c624) list_double_time_pane_vc_t2

0xe8ee,	// (0x0002c664) list_double_time_pane_vc_t3_ParamLimits

0xe8ee,	// (0x0002c664) list_double_time_pane_vc_t3

0xe906,	// (0x0002c67c) list_double_time_pane_vc_t4_ParamLimits

0xe906,	// (0x0002c67c) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0002d7f8) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0002d7f8) list_double_time_pane_vc_t

0xdee7,	// (0x0002bc5d) list_double_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_double_pane_vc_g1

0xdef3,	// (0x0002bc69) list_double_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d382) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d382) list_double_pane_vc_g

0xe91a,	// (0x0002c690) list_double_pane_vc_t1_ParamLimits

0xe91a,	// (0x0002c690) list_double_pane_vc_t1

0xe92c,	// (0x0002c6a2) list_double_pane_vc_t2_ParamLimits

0xe92c,	// (0x0002c6a2) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0002d801) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0002d801) list_double_pane_vc_t

0xdee7,	// (0x0002bc5d) list_double_number_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_double_number_pane_vc_g1

0xdef3,	// (0x0002bc69) list_double_number_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d382) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d382) list_double_number_pane_vc_g

0xe944,	// (0x0002c6ba) list_double_number_pane_vc_t1_ParamLimits

0xe944,	// (0x0002c6ba) list_double_number_pane_vc_t1

0xe958,	// (0x0002c6ce) list_double_number_pane_vc_t2_ParamLimits

0xe958,	// (0x0002c6ce) list_double_number_pane_vc_t2

0xe92c,	// (0x0002c6a2) list_double_number_pane_vc_t3_ParamLimits

0xe92c,	// (0x0002c6a2) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0002d806) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0002d806) list_double_number_pane_vc_t

0xe96a,	// (0x0002c6e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0xe96a,	// (0x0002c6e0) list_double_large_graphic_pane_vc_g1

0xe976,	// (0x0002c6ec) list_double_large_graphic_pane_vc_g2_ParamLimits

0xe976,	// (0x0002c6ec) list_double_large_graphic_pane_vc_g2

0xe85b,	// (0x0002c5d1) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe85b,	// (0x0002c5d1) list_double_large_graphic_pane_vc_g3

0xe985,	// (0x0002c6fb) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe985,	// (0x0002c6fb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0002d80d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0002d80d) list_double_large_graphic_pane_vc_g

0xe991,	// (0x0002c707) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe991,	// (0x0002c707) list_double_large_graphic_pane_vc_t1

0xe9a3,	// (0x0002c719) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe9a3,	// (0x0002c719) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0002d816) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0002d816) list_double_large_graphic_pane_vc_t

0xdee7,	// (0x0002bc5d) list_double_heading_pane_vc_g1_ParamLimits

0xdee7,	// (0x0002bc5d) list_double_heading_pane_vc_g1

0xdef3,	// (0x0002bc69) list_double_heading_pane_vc_g2_ParamLimits

0xdef3,	// (0x0002bc69) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0002d382) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0002d382) list_double_heading_pane_vc_g

0xe9bc,	// (0x0002c732) list_double_heading_pane_vc_t1_ParamLimits

0xe9bc,	// (0x0002c732) list_double_heading_pane_vc_t1

0xe648,	// (0x0002c3be) list_double_heading_pane_vc_t2_ParamLimits

0xe648,	// (0x0002c3be) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0002d81b) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0002d81b) list_double_heading_pane_vc_t

0xe9d0,	// (0x0002c746) list_double_graphic_pane_vc_g1_ParamLimits

0xe9d0,	// (0x0002c746) list_double_graphic_pane_vc_g1

0xe9e0,	// (0x0002c756) list_double_graphic_pane_vc_g2_ParamLimits

0xe9e0,	// (0x0002c756) list_double_graphic_pane_vc_g2

0xe9ef,	// (0x0002c765) list_double_graphic_pane_vc_g3_ParamLimits

0xe9ef,	// (0x0002c765) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0002d820) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0002d820) list_double_graphic_pane_vc_g

0xe9fb,	// (0x0002c771) list_double_graphic_pane_vc_t1_ParamLimits

0xe9fb,	// (0x0002c771) list_double_graphic_pane_vc_t1

0xe92c,	// (0x0002c6a2) list_double_graphic_pane_vc_t2_ParamLimits

0xe92c,	// (0x0002c6a2) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0002d827) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0002d827) list_double_graphic_pane_vc_t

0x8100,	// (0x00025e76) aid_size_cell_fastswap

0x8108,	// (0x00025e7e) aid_size_cell_touch_ParamLimits

0x8108,	// (0x00025e7e) aid_size_cell_touch

0x836d,	// (0x000260e3) popup_fast_swap_wide_window_ParamLimits

0x836d,	// (0x000260e3) popup_fast_swap_wide_window

0x8463,	// (0x000261d9) touch_pane_ParamLimits

0x8463,	// (0x000261d9) touch_pane

0x4ae7,	// (0x0002285d) button_value_adjust_pane_cp2

0xe331,	// (0x0002c0a7) button_value_adjust_pane_cp4

0xe351,	// (0x0002c0c7) form_field_data_pane_cp2

0xe370,	// (0x0002c0e6) form_field_data_wide_pane_cp2

0x4e45,	// (0x00022bbb) bg_scroll_pane_ParamLimits

0x8aa6,	// (0x0002681c) scroll_handle_pane_ParamLimits

0x8aba,	// (0x00026830) scroll_sc2_down_pane_ParamLimits

0x8aba,	// (0x00026830) scroll_sc2_down_pane

0x4e76,	// (0x00022bec) scroll_sc2_up_pane_ParamLimits

0x4e76,	// (0x00022bec) scroll_sc2_up_pane

0xa364,	// (0x000280da) grid_wheel_folder_pane_g1_ParamLimits

0xa364,	// (0x000280da) grid_wheel_folder_pane_g1

0x8d30,	// (0x00026aa6) clock_nsta_pane_cp2_ParamLimits

0x8d30,	// (0x00026aa6) clock_nsta_pane_cp2

0x8db6,	// (0x00026b2c) listscroll_midp_pane_ParamLimits

0x8dc2,	// (0x00026b38) midp_canvas_pane

0x573f,	// (0x000234b5) nsta_clock_indic_pane

0x5777,	// (0x000234ed) listscroll_form_pane_vc

0x577f,	// (0x000234f5) listscroll_set_pane_vc_ParamLimits

0x577f,	// (0x000234f5) listscroll_set_pane_vc

0x95f9,	// (0x0002736f) clock_nsta_pane

0x9606,	// (0x0002737c) indicator_nsta_pane

0x59c3,	// (0x00023739) bg_popup_sub_pane_cp2_ParamLimits

0x59d7,	// (0x0002374d) find_pane_cp2_ParamLimits

0x59d7,	// (0x0002374d) find_pane_cp2

0x59ed,	// (0x00023763) grid_toobar_pane_ParamLimits

0x5b49,	// (0x000238bf) list_form_gen_pane_vc_ParamLimits

0x5b49,	// (0x000238bf) list_form_gen_pane_vc

0x5b5f,	// (0x000238d5) scroll_pane_cp8_vc_ParamLimits

0x5b5f,	// (0x000238d5) scroll_pane_cp8_vc

0x5baf,	// (0x00023925) data_form_wide_pane_vc_ParamLimits

0x5baf,	// (0x00023925) data_form_wide_pane_vc

0x5bbb,	// (0x00023931) form_field_data_wide_pane_vc_g1

0x5bc3,	// (0x00023939) form_field_data_wide_pane_vc_t1_ParamLimits

0x5bc3,	// (0x00023939) form_field_data_wide_pane_vc_t1

0x4afb,	// (0x00022871) input_focus_pane_cp6_vc_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_cp6_vc

0x9ab5,	// (0x0002782b) list_midp_pane_ParamLimits

0x9ac1,	// (0x00027837) scroll_pane_cp16_ParamLimits

0x9ac1,	// (0x00027837) scroll_pane_cp16

0x5e24,	// (0x00023b9a) button_value_adjust_pane_ParamLimits

0x5e24,	// (0x00023b9a) button_value_adjust_pane

0x9ed3,	// (0x00027c49) button_value_adjust_pane_cp6_ParamLimits

0x9ed3,	// (0x00027c49) button_value_adjust_pane_cp6

0x9ff5,	// (0x00027d6b) settings_code_pane_cp_ParamLimits

0x9ff5,	// (0x00027d6b) settings_code_pane_cp

0x444e,	// (0x000221c4) cell_touch_pane_g1

0x444e,	// (0x000221c4) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0002d4b8) cell_touch_pane_g

0xa1dd,	// (0x00027f53) cell_touch_pane_cp_ParamLimits

0xa1dd,	// (0x00027f53) cell_touch_pane_cp

0xa1ed,	// (0x00027f63) cell_touch_pane_ParamLimits

0xa1ed,	// (0x00027f63) cell_touch_pane

0x444e,	// (0x000221c4) scroll_sc2_down_pane_g1

0x444e,	// (0x000221c4) scroll_sc2_up_pane_g1

0x4458,	// (0x000221ce) bg_set_opt_pane_cp4_vc

0x7012,	// (0x00024d88) list_set_graphic_pane_vc_g1_ParamLimits

0x7012,	// (0x00024d88) list_set_graphic_pane_vc_g1

0x701e,	// (0x00024d94) list_set_graphic_pane_vc_g2_ParamLimits

0x701e,	// (0x00024d94) list_set_graphic_pane_vc_g2

0x0001,

0xfa27,	// (0x0002d79d) list_set_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x0002d79d) list_set_graphic_pane_vc_g

0x702a,	// (0x00024da0) text_primary_small_cp13_vc_ParamLimits

0x702a,	// (0x00024da0) text_primary_small_cp13_vc

0x7042,	// (0x00024db8) list_set_graphic_pane_vc_ParamLimits

0x7042,	// (0x00024db8) list_set_graphic_pane_vc

0x4458,	// (0x000221ce) input_focus_pane_cp2_vc

0x444e,	// (0x000221c4) setting_code_pane_vc_g1

0x7056,	// (0x00024dcc) setting_code_pane_vc_t1

0x7064,	// (0x00024dda) set_text_pane_vc_t1_ParamLimits

0x7064,	// (0x00024dda) set_text_pane_vc_t1

0x4458,	// (0x000221ce) input_focus_pane_cp1_vc

0x7083,	// (0x00024df9) list_set_text_pane_vc

0x444e,	// (0x000221c4) setting_text_pane_vc_g1

0x4458,	// (0x000221ce) bg_set_opt_pane_cp2_vc

0x708d,	// (0x00024e03) setting_slider_graphic_pane_vc_g1

0x7095,	// (0x00024e0b) setting_slider_graphic_pane_vc_t1

0x70a3,	// (0x00024e19) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2c,	// (0x0002d7a2) setting_slider_graphic_pane_vc_t

0x70b1,	// (0x00024e27) slider_set_pane_cp_vc

0x70b9,	// (0x00024e2f) slider_set_pane_vc_g1

0x70c2,	// (0x00024e38) slider_set_pane_vc_g2

0x0006,

0xfa31,	// (0x0002d7a7) slider_set_pane_vc_g

0x4b62,	// (0x000228d8) set_opt_bg_pane_g1_copy1

0x4b6a,	// (0x000228e0) set_opt_bg_pane_g2_copy1

0x70ee,	// (0x00024e64) set_opt_bg_pane_g3_copy1

0x4b7a,	// (0x000228f0) set_opt_bg_pane_g4_copy1

0x4b82,	// (0x000228f8) set_opt_bg_pane_g5_copy1

0x4b8a,	// (0x00022900) set_opt_bg_pane_g6_copy1

0x70f6,	// (0x00024e6c) set_opt_bg_pane_g7_copy1

0x7100,	// (0x00024e76) set_opt_bg_pane_g8_copy1

0x7108,	// (0x00024e7e) set_opt_bg_pane_g9_copy1

0x4458,	// (0x000221ce) bg_set_opt_pane_cp_vc

0x7110,	// (0x00024e86) setting_slider_pane_vc_t1

0x7095,	// (0x00024e0b) setting_slider_pane_vc_t2

0x70a3,	// (0x00024e19) setting_slider_pane_vc_t3

0x0002,

0xfa40,	// (0x0002d7b6) setting_slider_pane_vc_t

0x70b1,	// (0x00024e27) slider_set_pane_vc

0x9b07,	// (0x0002787d) volume_set_pane_vc_g1

0xa1ff,	// (0x00027f75) volume_set_pane_vc_g2

0xa208,	// (0x00027f7e) volume_set_pane_vc_g3

0xa211,	// (0x00027f87) volume_set_pane_vc_g4

0xa21a,	// (0x00027f90) volume_set_pane_vc_g5

0xa223,	// (0x00027f99) volume_set_pane_vc_g6

0xa22c,	// (0x00027fa2) volume_set_pane_vc_g7

0xa235,	// (0x00027fab) volume_set_pane_vc_g8

0xa23e,	// (0x00027fb4) volume_set_pane_vc_g9

0xa247,	// (0x00027fbd) volume_set_pane_vc_g10

0x0009,

0xfa47,	// (0x0002d7bd) volume_set_pane_vc_g

0x711f,	// (0x00024e95) volume_set_pane_vc

0x7127,	// (0x00024e9d) button_value_adjust_pane_cp1_vc

0x7131,	// (0x00024ea7) list_highlight_pane_cp2_vc

0x713a,	// (0x00024eb0) list_set_pane_vc_ParamLimits

0x713a,	// (0x00024eb0) list_set_pane_vc

0x718c,	// (0x00024f02) main_pane_set_vc_t1_ParamLimits

0x718c,	// (0x00024f02) main_pane_set_vc_t1

0x71a1,	// (0x00024f17) main_pane_set_vc_t2_ParamLimits

0x71a1,	// (0x00024f17) main_pane_set_vc_t2

0x71b3,	// (0x00024f29) main_pane_set_vc_t3_ParamLimits

0x71b3,	// (0x00024f29) main_pane_set_vc_t3

0x71c5,	// (0x00024f3b) main_pane_set_vc_t4_ParamLimits

0x71c5,	// (0x00024f3b) main_pane_set_vc_t4

0x0003,

0xfa5c,	// (0x0002d7d2) main_pane_set_vc_t_ParamLimits

0xfa5c,	// (0x0002d7d2) main_pane_set_vc_t

0x71d7,	// (0x00024f4d) setting_code_pane_vc_ParamLimits

0x71d7,	// (0x00024f4d) setting_code_pane_vc

0x71e6,	// (0x00024f5c) setting_slider_graphic_pane_vc

0x71e6,	// (0x00024f5c) setting_slider_pane_vc

0x71e6,	// (0x00024f5c) setting_text_pane_vc

0x71e6,	// (0x00024f5c) setting_volume_pane_vc

0x71ee,	// (0x00024f64) scroll_pane_cp121_vc

0x4ad5,	// (0x0002284b) set_content_pane_vc

0x722c,	// (0x00024fa2) button_value_adjust_pane_g1

0x7235,	// (0x00024fab) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0002d82c) button_value_adjust_pane_g

0x723e,	// (0x00024fb4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x723e,	// (0x00024fb4) form_field_slider_wide_pane_vc_t1

0x7252,	// (0x00024fc8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7252,	// (0x00024fc8) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0002d831) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0002d831) form_field_slider_wide_pane_vc_t

0x44a6,	// (0x0002221c) input_focus_pane_cp10_vc_ParamLimits

0x44a6,	// (0x0002221c) input_focus_pane_cp10_vc

0x7264,	// (0x00024fda) slider_cont_pane_cp1_vc_ParamLimits

0x7264,	// (0x00024fda) slider_cont_pane_cp1_vc

0x70b9,	// (0x00024e2f) slider_form_pane_g1_cp2

0x70c2,	// (0x00024e38) slider_form_pane_g2_cp2

0x727d,	// (0x00024ff3) form_field_slider_pane_vc_t3

0x728b,	// (0x00025001) form_field_slider_pane_vc_t4

0x7299,	// (0x0002500f) slider_form_pane_vc_ParamLimits

0x7299,	// (0x0002500f) slider_form_pane_vc

0x72a6,	// (0x0002501c) form_field_slider_pane_vc_t1_ParamLimits

0x72a6,	// (0x0002501c) form_field_slider_pane_vc_t1

0x7252,	// (0x00024fc8) form_field_slider_pane_vc_t2_ParamLimits

0x7252,	// (0x00024fc8) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0002d841) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0002d841) form_field_slider_pane_vc_t

0x44a6,	// (0x0002221c) input_focus_pane_cp9_vc_ParamLimits

0x44a6,	// (0x0002221c) input_focus_pane_cp9_vc

0x72c2,	// (0x00025038) slider_cont_pane_vc_ParamLimits

0x72c2,	// (0x00025038) slider_cont_pane_vc

0x72d4,	// (0x0002504a) list_form_graphic_pane_cp_vc_ParamLimits

0x72d4,	// (0x0002504a) list_form_graphic_pane_cp_vc

0x5bbb,	// (0x00023931) form_field_popup_wide_pane_vc_g1

0x72e9,	// (0x0002505f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x72e9,	// (0x0002505f) form_field_popup_wide_pane_vc_t1

0x4afb,	// (0x00022871) input_focus_pane_cp8_vc_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_cp8_vc

0x7300,	// (0x00025076) list_form_wide_pane_vc_ParamLimits

0x7300,	// (0x00025076) list_form_wide_pane_vc

0x730c,	// (0x00025082) list_form_graphic_pane_vc_g1

0x7314,	// (0x0002508a) list_form_graphic_pane_vc_t1_ParamLimits

0x7314,	// (0x0002508a) list_form_graphic_pane_vc_t1

0x44b4,	// (0x0002222a) list_highlight_pane_cp5_vc_ParamLimits

0x44b4,	// (0x0002222a) list_highlight_pane_cp5_vc

0x7330,	// (0x000250a6) list_form_graphic_pane_vc_ParamLimits

0x7330,	// (0x000250a6) list_form_graphic_pane_vc

0x5bbb,	// (0x00023931) form_field_popup_pane_vc_g1

0x7346,	// (0x000250bc) form_field_popup_pane_vc_t1_ParamLimits

0x7346,	// (0x000250bc) form_field_popup_pane_vc_t1

0x4afb,	// (0x00022871) input_focus_pane_cp7_vc_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_cp7_vc

0x735d,	// (0x000250d3) list_form_pane_vc_ParamLimits

0x735d,	// (0x000250d3) list_form_pane_vc

0x7369,	// (0x000250df) data_form_pane_vc_t1_ParamLimits

0x7369,	// (0x000250df) data_form_pane_vc_t1

0x4b62,	// (0x000228d8) input_focus_pane_vc_g1

0x4b6a,	// (0x000228e0) input_focus_pane_vc_g2

0x4b72,	// (0x000228e8) input_focus_pane_vc_g3

0x4b7a,	// (0x000228f0) input_focus_pane_vc_g4

0x4b82,	// (0x000228f8) input_focus_pane_vc_g5

0x4b8a,	// (0x00022900) input_focus_pane_vc_g6

0x4b92,	// (0x00022908) input_focus_pane_vc_g7

0x4b9a,	// (0x00022910) input_focus_pane_vc_g8

0x4ba2,	// (0x00022918) input_focus_pane_vc_g9

0x444e,	// (0x000221c4) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0002d441) input_focus_pane_vc_g

0x5baf,	// (0x00023925) data_form_pane_vc_ParamLimits

0x5baf,	// (0x00023925) data_form_pane_vc

0x5bbb,	// (0x00023931) form_field_data_pane_vc_g1

0x7384,	// (0x000250fa) form_field_data_pane_vc_t1_ParamLimits

0x7384,	// (0x000250fa) form_field_data_pane_vc_t1

0x4afb,	// (0x00022871) input_focus_pane_vc_ParamLimits

0x4afb,	// (0x00022871) input_focus_pane_vc

0x739e,	// (0x00025114) button_value_adjust_pane_cp3_vc

0x73a6,	// (0x0002511c) button_value_adjust_pane_cp5_vc

0x73ae,	// (0x00025124) form_field_data_pane_vc_ParamLimits

0x73ae,	// (0x00025124) form_field_data_pane_vc

0x73c5,	// (0x0002513b) form_field_data_pane_vc_cp2

0x73cd,	// (0x00025143) form_field_data_wide_pane_vc_ParamLimits

0x73cd,	// (0x00025143) form_field_data_wide_pane_vc

0x73e3,	// (0x00025159) form_field_data_wide_pane_vc_cp2

0x73eb,	// (0x00025161) form_field_popup_pane_vc_ParamLimits

0x73eb,	// (0x00025161) form_field_popup_pane_vc

0x7402,	// (0x00025178) form_field_popup_wide_pane_vc_ParamLimits

0x7402,	// (0x00025178) form_field_popup_wide_pane_vc

0x7418,	// (0x0002518e) form_field_slider_pane_vc_ParamLimits

0x7418,	// (0x0002518e) form_field_slider_pane_vc

0x742b,	// (0x000251a1) form_field_slider_wide_pane_vc_ParamLimits

0x742b,	// (0x000251a1) form_field_slider_wide_pane_vc

0xa250,	// (0x00027fc6) grid_touch_1_pane_ParamLimits

0xa250,	// (0x00027fc6) grid_touch_1_pane

0xa25c,	// (0x00027fd2) grid_touch_2_pane_ParamLimits

0xa25c,	// (0x00027fd2) grid_touch_2_pane

0x5731,	// (0x000234a7) touch_pane_g1_ParamLimits

0x5731,	// (0x000234a7) touch_pane_g1

0x743e,	// (0x000251b4) cell_app_pane_cp_wide_ParamLimits

0x743e,	// (0x000251b4) cell_app_pane_cp_wide

0x744f,	// (0x000251c5) grid_popup_fast_wide_pane_ParamLimits

0x744f,	// (0x000251c5) grid_popup_fast_wide_pane

0x7463,	// (0x000251d9) scroll_pane_cp19_ParamLimits

0x7463,	// (0x000251d9) scroll_pane_cp19

0x4458,	// (0x000221ce) bg_popup_window_pane_cp20

0x7477,	// (0x000251ed) listscroll_popup_fast_wide_pane

0x44b4,	// (0x0002222a) grid_indicator_nsta_pane

0x747f,	// (0x000251f5) clock_nsta_pane_g1

0x7488,	// (0x000251fe) clock_nsta_pane_t1

0xa274,	// (0x00027fea) cell_indicator_nsta_pane_ParamLimits

0xa274,	// (0x00027fea) cell_indicator_nsta_pane

0x74a4,	// (0x0002521a) cell_indicator_nsta_pane_g1

0xa2ac,	// (0x00028022) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0002d84b) cell_indicator_nsta_pane_g

0x74b2,	// (0x00025228) clock_nsta_pane_cp

0x74ba,	// (0x00025230) indicator_nsta_pane_cp

0x74c2,	// (0x00025238) nsta_clock_indic_pane_g1

0x44f0,	// (0x00022266) grid_indicator_pane

0x4f68,	// (0x00022cde) scroll_pane_cp29

0x8c7f,	// (0x000269f5) indicator_nsta_pane_cp2_ParamLimits

0x8c7f,	// (0x000269f5) indicator_nsta_pane_cp2

0x44b4,	// (0x0002222a) main_apps_wheel_pane

0x5cd7,	// (0x00023a4d) form_midp_field_text_pane_ParamLimits

0x5e04,	// (0x00023b7a) scroll_bar_cp050_ParamLimits

0x74fa,	// (0x00025270) cell_indicator_pane_ParamLimits

0x74fa,	// (0x00025270) cell_indicator_pane

0x7517,	// (0x0002528d) cell_indicator_pane_g1

0xa2c2,	// (0x00028038) grid_wheel_folder_pane_ParamLimits

0xa2c2,	// (0x00028038) grid_wheel_folder_pane

0xa2d8,	// (0x0002804e) list_wheel_apps_pane_ParamLimits

0xa2d8,	// (0x0002804e) list_wheel_apps_pane

0xa2e9,	// (0x0002805f) main_apps_wheel_pane_g1_ParamLimits

0xa2e9,	// (0x0002805f) main_apps_wheel_pane_g1

0xa2fd,	// (0x00028073) main_apps_wheel_pane_g2_ParamLimits

0xa2fd,	// (0x00028073) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0002d85a) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0002d85a) main_apps_wheel_pane_g

0xa315,	// (0x0002808b) main_apps_wheel_pane_t1_ParamLimits

0xa315,	// (0x0002808b) main_apps_wheel_pane_t1

0xa338,	// (0x000280ae) list_wheel_apps_pane_g1

0xa340,	// (0x000280b6) list_wheel_apps_pane_g2

0xa348,	// (0x000280be) list_wheel_apps_pane_g3

0xa350,	// (0x000280c6) list_wheel_apps_pane_g4

0xa35a,	// (0x000280d0) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0002d85f) list_wheel_apps_pane_g

0x53bb,	// (0x00023131) navi_icon_text_pane

0x953d,	// (0x000272b3) aid_fill_nsta

0xa37d,	// (0x000280f3) navi_icon_text_pane_g1

0xa38c,	// (0x00028102) navi_icon_text_pane_t1

0x5257,	// (0x00022fcd) list_set_graphic_pane_t1_ParamLimits

0x5257,	// (0x00022fcd) list_set_graphic_pane_t1

0x64db,	// (0x00024251) popup_midp_note_alarm_window_t6_ParamLimits

0x64db,	// (0x00024251) popup_midp_note_alarm_window_t6

0x64ed,	// (0x00024263) popup_midp_note_alarm_window_t7_ParamLimits

0x64ed,	// (0x00024263) popup_midp_note_alarm_window_t7

0x64ff,	// (0x00024275) popup_midp_note_alarm_window_t8_ParamLimits

0x64ff,	// (0x00024275) popup_midp_note_alarm_window_t8

0x6511,	// (0x00024287) popup_midp_note_alarm_window_t9_ParamLimits

0x6511,	// (0x00024287) popup_midp_note_alarm_window_t9

0x6523,	// (0x00024299) popup_midp_note_alarm_window_t10_ParamLimits

0x6523,	// (0x00024299) popup_midp_note_alarm_window_t10

0x6535,	// (0x000242ab) popup_midp_note_alarm_window_t11_ParamLimits

0x6535,	// (0x000242ab) popup_midp_note_alarm_window_t11

0x6547,	// (0x000242bd) scroll_pane_cp17_ParamLimits

0x6547,	// (0x000242bd) scroll_pane_cp17

0x9b07,	// (0x0002787d) volume_small_pane_cp_g1

0xa3a1,	// (0x00028117) volume_small_pane_cp_g2

0xa3aa,	// (0x00028120) volume_small_pane_cp_g3

0xa3b3,	// (0x00028129) volume_small_pane_cp_g4

0xa3bc,	// (0x00028132) volume_small_pane_cp_g5

0xa3c5,	// (0x0002813b) volume_small_pane_cp_g6

0xa3ce,	// (0x00028144) volume_small_pane_cp_g7

0xa3d7,	// (0x0002814d) volume_small_pane_cp_g8

0xa3e0,	// (0x00028156) volume_small_pane_cp_g9

0xa3e9,	// (0x0002815f) volume_small_pane_cp_g10

0x5567,	// (0x000232dd) midp_ticker_pane_g1_ParamLimits

0x5573,	// (0x000232e9) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0002d509) midp_ticker_pane_g_ParamLimits

0x8e6b,	// (0x00026be1) midp_ticker_pane_t1_ParamLimits

0x9553,	// (0x000272c9) aid_fill_nsta_2

0x5df0,	// (0x00023b66) list_form2_midp_pane

0x6bda,	// (0x00024950) midp_editing_number_pane_ParamLimits

0x6be9,	// (0x0002495f) midp_ticker_pane_ParamLimits

0x7521,	// (0x00025297) form2_midp_field_pane

0x7529,	// (0x0002529f) scroll_pane_cp51

0x7549,	// (0x000252bf) form2_midp_button_pane_ParamLimits

0x7549,	// (0x000252bf) form2_midp_button_pane

0x755b,	// (0x000252d1) form2_midp_content_pane_ParamLimits

0x755b,	// (0x000252d1) form2_midp_content_pane

0x7575,	// (0x000252eb) form2_midp_field_choice_group_pane

0x757d,	// (0x000252f3) form2_midp_field_pane_g1

0x7585,	// (0x000252fb) form2_midp_field_pane_g2

0x758d,	// (0x00025303) form2_midp_field_pane_g3

0x7595,	// (0x0002530b) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0002d884) form2_midp_field_pane_g

0x759d,	// (0x00025313) form2_midp_gauge_slider_pane

0x75a5,	// (0x0002531b) form2_midp_gauge_wait_pane

0x75ad,	// (0x00025323) form2_midp_image_pane_ParamLimits

0x75ad,	// (0x00025323) form2_midp_image_pane

0x75c8,	// (0x0002533e) form2_midp_label_pane_ParamLimits

0x75c8,	// (0x0002533e) form2_midp_label_pane

0xa40e,	// (0x00028184) form2_midp_label_pane_cp_ParamLimits

0xa40e,	// (0x00028184) form2_midp_label_pane_cp

0x75e1,	// (0x00025357) form2_midp_string_pane_ParamLimits

0x75e1,	// (0x00025357) form2_midp_string_pane

0xea0d,	// (0x0002c783) form2_midp_text_pane_ParamLimits

0xea0d,	// (0x0002c783) form2_midp_text_pane

0x75f3,	// (0x00025369) form2_midp_time_pane

0x7603,	// (0x00025379) input_focus_pane_cp51_ParamLimits

0x7603,	// (0x00025379) input_focus_pane_cp51

0x761b,	// (0x00025391) form2_midp_label_pane_t1_ParamLimits

0x761b,	// (0x00025391) form2_midp_label_pane_t1

0xea26,	// (0x0002c79c) form2_mdip_text_pane_t1_ParamLimits

0xea26,	// (0x0002c79c) form2_mdip_text_pane_t1

0xea43,	// (0x0002c7b9) form2_midp_time_pane_t1

0x7663,	// (0x000253d9) form2_midp_gauge_slider_pane_t1

0xa42f,	// (0x000281a5) form2_midp_gauge_slider_pane_t2

0xa441,	// (0x000281b7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0002d88d) form2_midp_gauge_slider_pane_t

0x7675,	// (0x000253eb) form2_midp_slider_pane

0x7681,	// (0x000253f7) form2_midp_gauge_wait_pane_t1

0x768f,	// (0x00025405) form2_midp_wait_pane_ParamLimits

0x768f,	// (0x00025405) form2_midp_wait_pane

0xa453,	// (0x000281c9) list_single_2graphic_pane_cp4_ParamLimits

0xa453,	// (0x000281c9) list_single_2graphic_pane_cp4

0x99f0,	// (0x00027766) list_single_midp_graphic_pane_cp_ParamLimits

0x99f0,	// (0x00027766) list_single_midp_graphic_pane_cp

0x4458,	// (0x000221ce) list_highlight_pane_cp20

0x76ba,	// (0x00025430) list_single_2graphic_pane_g1_cp4

0x6f17,	// (0x00024c8d) list_single_2graphic_pane_g2_cp4

0x76c2,	// (0x00025438) list_single_2graphic_pane_t1_cp4

0x44b4,	// (0x0002222a) list_highlight_pane_cp21

0x76d1,	// (0x00025447) list_single_midp_graphic_pane_g4_cp

0x76e0,	// (0x00025456) list_single_midp_graphic_pane_t1_cp

0xa482,	// (0x000281f8) form2_mdip_string_pane_t1_ParamLimits

0xa482,	// (0x000281f8) form2_mdip_string_pane_t1

0x4458,	// (0x000221ce) bg_wml_button_pane_cp2

0x444e,	// (0x000221c4) form2_midp_image_pane_g1

0xe132,	// (0x0002bea8) list_double_large_graphic_pane_g5_ParamLimits

0xe132,	// (0x0002bea8) list_double_large_graphic_pane_g5

0x8db6,	// (0x00026b2c) midp_form_pane_ParamLimits

0x44b4,	// (0x0002222a) main_apps_wheel_pane_ParamLimits

0x93ab,	// (0x00027121) popup_preview_window_ParamLimits

0x93ab,	// (0x00027121) popup_preview_window

0x5864,	// (0x000235da) popup_touch_info_window_ParamLimits

0x5864,	// (0x000235da) popup_touch_info_window

0x5882,	// (0x000235f8) popup_touch_menu_window_ParamLimits

0x5882,	// (0x000235f8) popup_touch_menu_window

0x4444,	// (0x000221ba) bg_popup_sub_pane_cp6

0xa5bc,	// (0x00028332) list_touch_menu_pane

0xa5c4,	// (0x0002833a) list_single_touch_menu_pane_ParamLimits

0xa5c4,	// (0x0002833a) list_single_touch_menu_pane

0xa5d9,	// (0x0002834f) list_single_touch_menu_pane_t1

0x44b4,	// (0x0002222a) bg_popup_sub_pane_cp7_ParamLimits

0x44b4,	// (0x0002222a) bg_popup_sub_pane_cp7

0xa5e7,	// (0x0002835d) heading_sub_pane

0xa5ef,	// (0x00028365) list_touch_info_pane_ParamLimits

0xa5ef,	// (0x00028365) list_touch_info_pane

0xa5fe,	// (0x00028374) list_single_touch_info_pane_ParamLimits

0xa5fe,	// (0x00028374) list_single_touch_info_pane

0xa610,	// (0x00028386) list_single_touch_info_pane_t1

0xa61e,	// (0x00028394) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0002d89b) list_single_touch_info_pane_t

0x553d,	// (0x000232b3) bg_popup_heading_pane_cp

0xa62c,	// (0x000283a2) heading_sub_pane_t1

0x5b75,	// (0x000238eb) bg_popup_preview_window_pane_cp_ParamLimits

0x5b75,	// (0x000238eb) bg_popup_preview_window_pane_cp

0xa5e7,	// (0x0002835d) heading_preview_pane

0xa5ef,	// (0x00028365) list_preview_pane_ParamLimits

0xa5ef,	// (0x00028365) list_preview_pane

0xa63a,	// (0x000283b0) popup_preview_window_g1

0xa5fe,	// (0x00028374) list_single_preview_pane_ParamLimits

0xa5fe,	// (0x00028374) list_single_preview_pane

0xa642,	// (0x000283b8) list_single_preview_pane_g1

0xa64a,	// (0x000283c0) list_single_preview_pane_t1

0xa610,	// (0x00028386) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0002d8a0) list_single_preview_pane_t

0xa658,	// (0x000283ce) bg_popup_heading_pane_cp2_ParamLimits

0xa658,	// (0x000283ce) bg_popup_heading_pane_cp2

0xa66e,	// (0x000283e4) heading_preview_pane_g1

0xa676,	// (0x000283ec) heading_preview_pane_t1_ParamLimits

0xa676,	// (0x000283ec) heading_preview_pane_t1

0x4507,	// (0x0002227d) soft_indicator_pane_t1_ParamLimits

0x4a6e,	// (0x000227e4) scroll_pane_ParamLimits

0x4e6d,	// (0x00022be3) scroll_sc2_left_pane

0x4e64,	// (0x00022bda) scroll_sc2_right_pane

0x4e8c,	// (0x00022c02) scroll_bg_pane_g1_ParamLimits

0x4ea1,	// (0x00022c17) scroll_bg_pane_g2_ParamLimits

0x4eb9,	// (0x00022c2f) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0002d498) scroll_bg_pane_g_ParamLimits

0x4e8c,	// (0x00022c02) scroll_handle_pane_g1_ParamLimits

0x4edb,	// (0x00022c51) scroll_handle_pane_g2_ParamLimits

0x4eb9,	// (0x00022c2f) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0002d49f) scroll_handle_pane_g_ParamLimits

0x57ad,	// (0x00023523) popup_choice_list_window_ParamLimits

0x57ad,	// (0x00023523) popup_choice_list_window

0x59cf,	// (0x00023745) choice_list_pane

0x5a51,	// (0x000237c7) cell_toolbar_pane_t1

0x5a79,	// (0x000237ef) toolbar_button_pane_ParamLimits

0x6925,	// (0x0002469b) ai_gene_pane_1_t2_ParamLimits

0x6925,	// (0x0002469b) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0002d6b7) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0002d6b7) ai_gene_pane_1_t

0xa693,	// (0x00028409) scroll_sc2_left_pane_g1

0xa693,	// (0x00028409) scroll_sc2_right_pane_g1

0x4c52,	// (0x000229c8) bg_popup_sub_pane_cp10

0xa69d,	// (0x00028413) list_choice_list_pane

0xa6b4,	// (0x0002842a) list_single_choice_list_pane_ParamLimits

0xa6b4,	// (0x0002842a) list_single_choice_list_pane

0xa6c8,	// (0x0002843e) list_single_choice_list_pane_g1

0xa6d0,	// (0x00028446) list_single_choice_list_pane_t1_ParamLimits

0xa6d0,	// (0x00028446) list_single_choice_list_pane_t1

0xa6e5,	// (0x0002845b) choice_list_pane_g1

0xa6ed,	// (0x00028463) choice_list_pane_t1

0x4444,	// (0x000221ba) input_focus_pane_cp11

0x4dc7,	// (0x00022b3d) title_pane_stacon_g2_ParamLimits

0x4dc7,	// (0x00022b3d) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0002d47e) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0002d47e) title_pane_stacon_g

0x553d,	// (0x000232b3) cursor_press_pane

0x9150,	// (0x00026ec6) popup_fep_hwr_window_ParamLimits

0x9150,	// (0x00026ec6) popup_fep_hwr_window

0x5801,	// (0x00023577) popup_fep_vkb_window_ParamLimits

0x5801,	// (0x00023577) popup_fep_vkb_window

0xa6fb,	// (0x00028471) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0002d8c9) fep_vkb_side_pane_g_ParamLimits

0xa73c,	// (0x000284b2) fep_hwr_candidate_pane_ParamLimits

0xa73c,	// (0x000284b2) fep_hwr_candidate_pane

0xa766,	// (0x000284dc) fep_hwr_side_pane_ParamLimits

0xa766,	// (0x000284dc) fep_hwr_side_pane

0xa786,	// (0x000284fc) fep_hwr_top_pane_ParamLimits

0xa786,	// (0x000284fc) fep_hwr_top_pane

0xa79e,	// (0x00028514) fep_hwr_write_pane_ParamLimits

0xa79e,	// (0x00028514) fep_hwr_write_pane

0xfb53,	// (0x0002d8c9) fep_vkb_side_pane_g

0xa7d8,	// (0x0002854e) fep_hwr_top_pane_g1

0xa7ea,	// (0x00028560) fep_hwr_top_pane_g2

0xa7fc,	// (0x00028572) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0002d8a5) fep_hwr_top_pane_g

0xa811,	// (0x00028587) fep_hwr_top_text_pane

0x502e,	// (0x00022da4) fep_hwr_top_text_pane_g1

0xa8e9,	// (0x0002865f) fep_hwr_top_text_pane_t1

0xa939,	// (0x000286af) fep_hwr_candidate_pane_g1

0xabac,	// (0x00028922) fep_vkb_keypad_pane_g3_ParamLimits

0xabac,	// (0x00028922) fep_vkb_keypad_pane_g3

0xabd4,	// (0x0002894a) fep_vkb_keypad_pane_g4_ParamLimits

0xabd4,	// (0x0002894a) fep_vkb_keypad_pane_g4

0xac43,	// (0x000289b9) fep_vkb_bottom_pane_g2_ParamLimits

0xac43,	// (0x000289b9) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0002d8d0) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0002d8d0) fep_vkb_bottom_pane_g

0xa693,	// (0x00028409) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0002d8da) cell_vkb_side_pane_g

0xacce,	// (0x00028a44) cell_vkb_side_pane_t1

0xacdc,	// (0x00028a52) cell_vkb_side_pane_t1_copy1

0xa693,	// (0x00028409) bg_fep_vkb_candidate_pane_g2

0xae0e,	// (0x00028b84) cell_vkb_candidate_pane_ParamLimits

0xa960,	// (0x000286d6) aid_size_cell_vkb_ParamLimits

0xa960,	// (0x000286d6) aid_size_cell_vkb

0xae0e,	// (0x00028b84) cell_vkb_candidate_pane

0xae44,	// (0x00028bba) bg_popup_fep_shadow_pane_g1

0xa9ee,	// (0x00028764) fep_vkb_bottom_pane_ParamLimits

0xa9ee,	// (0x00028764) fep_vkb_bottom_pane

0xaa2b,	// (0x000287a1) fep_vkb_candidate_pane_ParamLimits

0xaa2b,	// (0x000287a1) fep_vkb_candidate_pane

0xaa47,	// (0x000287bd) fep_vkb_keypad_pane_ParamLimits

0xaa47,	// (0x000287bd) fep_vkb_keypad_pane

0xaa8d,	// (0x00028803) fep_vkb_side_pane_ParamLimits

0xaa8d,	// (0x00028803) fep_vkb_side_pane

0xaac9,	// (0x0002883f) fep_vkb_top_pane_ParamLimits

0xaac9,	// (0x0002883f) fep_vkb_top_pane

0xab05,	// (0x0002887b) fep_vkb_top_pane_g1_ParamLimits

0xab05,	// (0x0002887b) fep_vkb_top_pane_g1

0xab14,	// (0x0002888a) fep_vkb_top_pane_g2_ParamLimits

0xab14,	// (0x0002888a) fep_vkb_top_pane_g2

0xab23,	// (0x00028899) fep_vkb_top_pane_g3_ParamLimits

0xab23,	// (0x00028899) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0002d8c0) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0002d8c0) fep_vkb_top_pane_g

0xab41,	// (0x000288b7) fep_vkb_top_text_pane_ParamLimits

0xab41,	// (0x000288b7) fep_vkb_top_text_pane

0xab52,	// (0x000288c8) fep_vkb_side_pane_g1_ParamLimits

0xab52,	// (0x000288c8) fep_vkb_side_pane_g1

0xab9b,	// (0x00028911) grid_vkb_side_pane_ParamLimits

0xab9b,	// (0x00028911) grid_vkb_side_pane

0xae4c,	// (0x00028bc2) bg_popup_fep_shadow_pane_g2

0xae55,	// (0x00028bcb) bg_popup_fep_shadow_pane_g3

0xae5d,	// (0x00028bd3) bg_popup_fep_shadow_pane_g4

0xae66,	// (0x00028bdc) bg_popup_fep_shadow_pane_g5

0xae70,	// (0x00028be6) bg_popup_fep_shadow_pane_g6

0xae78,	// (0x00028bee) bg_popup_fep_shadow_pane_g7

0x4b7a,	// (0x000228f0) bg_popup_fep_shadow_pane_g8

0xabf2,	// (0x00028968) grid_vkb_keypad_number_pane_ParamLimits

0xabf2,	// (0x00028968) grid_vkb_keypad_number_pane

0xac02,	// (0x00028978) grid_vkb_keypad_pane_ParamLimits

0xac02,	// (0x00028978) grid_vkb_keypad_pane

0xac28,	// (0x0002899e) fep_vkb_bottom_pane_g1_ParamLimits

0xac28,	// (0x0002899e) fep_vkb_bottom_pane_g1

0xac51,	// (0x000289c7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xac51,	// (0x000289c7) grid_vkb_keypad_bottom_left_pane

0xac66,	// (0x000289dc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xac66,	// (0x000289dc) grid_vkb_keypad_bottom_right_pane

0xac7b,	// (0x000289f1) fep_vkb_top_text_pane_g1

0xac96,	// (0x00028a0c) fep_vkb_top_text_pane_t1

0xacab,	// (0x00028a21) cell_vkb_side_pane_ParamLimits

0xacab,	// (0x00028a21) cell_vkb_side_pane

0xa693,	// (0x00028409) cell_vkb_side_pane_g1

0xacea,	// (0x00028a60) cell_vkb_keypad_pane_ParamLimits

0xacea,	// (0x00028a60) cell_vkb_keypad_pane

0xad65,	// (0x00028adb) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0002d8ed) bg_popup_fep_shadow_pane_g

0xae8a,	// (0x00028c00) cell_hwr_side_pane_g1

0xae8a,	// (0x00028c00) cell_hwr_side_pane_g2

0xad6f,	// (0x00028ae5) cell_vkb_keypad_pane_t1

0xad7d,	// (0x00028af3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xad7d,	// (0x00028af3) cell_vkb_keypad_bottom_left_pane

0xad9a,	// (0x00028b10) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xad9a,	// (0x00028b10) cell_vkb_keypad_bottom_right_pane

0xa693,	// (0x00028409) cell_vkb_keypad_bottom_left_pane_g1

0xa693,	// (0x00028409) cell_vkb_keypad_bottom_right_pane_g1

0xadd3,	// (0x00028b49) cell_vkb_keypad_number_pane_ParamLimits

0xadd3,	// (0x00028b49) cell_vkb_keypad_number_pane

0xadf2,	// (0x00028b68) cell_vkb_keypad_number_pane_g1

0xadfc,	// (0x00028b72) cell_vkb_keypad_number_pane_g2

0xae05,	// (0x00028b7b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0002d8df) cell_vkb_keypad_number_pane_g

0xad6f,	// (0x00028ae5) cell_vkb_keypad_number_pane_t1

0xae2b,	// (0x00028ba1) fep_vkb_candidate_pane_g1

0x0001,

0xfb8a,	// (0x0002d900) cell_hwr_side_pane_g

0xae94,	// (0x00028c0a) cell_hwr_side_pane_t1

0xaea2,	// (0x00028c18) cell_hwr_side_pane_t1_copy1

0xaeb0,	// (0x00028c26) cell_hwr_candidate_pane_g1

0xaedf,	// (0x00028c55) cell_hwr_candidate_pane_t1

0xa693,	// (0x00028409) cell_vkb_candidate_pane_g2

0xaf33,	// (0x00028ca9) cell_vkb_candidate_pane_t1

0xa703,	// (0x00028479) bg_popup_fep_shadow_pane_ParamLimits

0xa703,	// (0x00028479) bg_popup_fep_shadow_pane

0xa7b8,	// (0x0002852e) bg_fep_hwr_top_pane_g4

0xa826,	// (0x0002859c) bg_hwr_side_pane_g1_ParamLimits

0xa826,	// (0x0002859c) bg_hwr_side_pane_g1

0xa859,	// (0x000285cf) cell_hwr_side_pane_ParamLimits

0xa859,	// (0x000285cf) cell_hwr_side_pane

0xa894,	// (0x0002860a) fep_hwr_write_pane_g1_ParamLimits

0xa894,	// (0x0002860a) fep_hwr_write_pane_g1

0xa8a1,	// (0x00028617) fep_hwr_write_pane_g2_ParamLimits

0xa8a1,	// (0x00028617) fep_hwr_write_pane_g2

0xa8ae,	// (0x00028624) fep_hwr_write_pane_g3_ParamLimits

0xa8ae,	// (0x00028624) fep_hwr_write_pane_g3

0xa8bc,	// (0x00028632) fep_hwr_write_pane_g4_ParamLimits

0xa8bc,	// (0x00028632) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0002d8ac) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0002d8ac) fep_hwr_write_pane_g

0xa7b8,	// (0x0002852e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa7b8,	// (0x0002852e) bg_fep_hwr_candidate_pane_g2

0xa8f7,	// (0x0002866d) cell_hwr_candidate_pane_ParamLimits

0xa8f7,	// (0x0002866d) cell_hwr_candidate_pane

0xa939,	// (0x000286af) fep_hwr_candidate_pane_g1_ParamLimits

0xa98e,	// (0x00028704) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xa98e,	// (0x00028704) bg_popup_fep_shadow_pane_cp2

0xab33,	// (0x000288a9) fep_vkb_top_pane_g4_ParamLimits

0xab33,	// (0x000288a9) fep_vkb_top_pane_g4

0xab79,	// (0x000288ef) fep_vkb_side_pane_g2_ParamLimits

0xab79,	// (0x000288ef) fep_vkb_side_pane_g2

0xe266,	// (0x0002bfdc) list_setting_pane_t4_ParamLimits

0xe266,	// (0x0002bfdc) list_setting_pane_t4

0xe2f8,	// (0x0002c06e) list_setting_number_pane_t5_ParamLimits

0xe2f8,	// (0x0002c06e) list_setting_number_pane_t5

0x8aee,	// (0x00026864) list_double_heading_pane_cp2_ParamLimits

0x8aee,	// (0x00026864) list_double_heading_pane_cp2

0x4b15,	// (0x0002288b) list_double_heading_pane_g1_cp2_ParamLimits

0x4b15,	// (0x0002288b) list_double_heading_pane_g1_cp2

0x4b21,	// (0x00022897) list_double_heading_pane_g2_cp2_ParamLimits

0x4b21,	// (0x00022897) list_double_heading_pane_g2_cp2

0xaf41,	// (0x00028cb7) list_double_heading_pane_t1_cp2_ParamLimits

0xaf41,	// (0x00028cb7) list_double_heading_pane_t1_cp2

0xaf57,	// (0x00028ccd) list_double_heading_pane_t2_cp2_ParamLimits

0xaf57,	// (0x00028ccd) list_double_heading_pane_t2_cp2

0x443c,	// (0x000221b2) aid_value_unit2

0x83b9,	// (0x0002612f) popup_preview_fixed_window

0x45e7,	// (0x0002235d) bg_popup_preview_window_pane_cp02

0xaf69,	// (0x00028cdf) list_preview_fixed_pane

0xafaf,	// (0x00028d25) list_empty_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_empty_pane_fp

0xafaf,	// (0x00028d25) list_single_cale_day_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_single_cale_day_pane_fp

0xafaf,	// (0x00028d25) list_single_graphic_heading_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_single_graphic_heading_pane_fp

0xafaf,	// (0x00028d25) list_single_graphic_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_single_graphic_pane_fp

0xafaf,	// (0x00028d25) list_single_heading_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_single_heading_pane_fp

0xafaf,	// (0x00028d25) list_single_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_single_pane_fp

0xafc6,	// (0x00028d3c) list_single_pane_fp_g1_ParamLimits

0xafc6,	// (0x00028d3c) list_single_pane_fp_g1

0xe0ca,	// (0x0002be40) list_single_pane_fp_g2_ParamLimits

0xe0ca,	// (0x0002be40) list_single_pane_fp_g2

0xea56,	// (0x0002c7cc) list_single_pane_fp_g3_ParamLimits

0xea56,	// (0x0002c7cc) list_single_pane_fp_g3

0xafd2,	// (0x00028d48) list_single_pane_fp_g4_ParamLimits

0xafd2,	// (0x00028d48) list_single_pane_fp_g4

0x0003,

0xfb9d,	// (0x0002d913) list_single_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002d913) list_single_pane_fp_g

0xea6a,	// (0x0002c7e0) list_single_pane_fp_t1_ParamLimits

0xea6a,	// (0x0002c7e0) list_single_pane_fp_t1

0xea81,	// (0x0002c7f7) list_single_graphic_pane_fp_g1_ParamLimits

0xea81,	// (0x0002c7f7) list_single_graphic_pane_fp_g1

0xafc6,	// (0x00028d3c) list_single_graphic_pane_fp_g2_ParamLimits

0xafc6,	// (0x00028d3c) list_single_graphic_pane_fp_g2

0xe0ca,	// (0x0002be40) list_single_graphic_pane_fp_g3_ParamLimits

0xe0ca,	// (0x0002be40) list_single_graphic_pane_fp_g3

0xea56,	// (0x0002c7cc) list_single_graphic_pane_fp_g4_ParamLimits

0xea56,	// (0x0002c7cc) list_single_graphic_pane_fp_g4

0xafd2,	// (0x00028d48) list_single_graphic_pane_fp_g5_ParamLimits

0xafd2,	// (0x00028d48) list_single_graphic_pane_fp_g5

0x0004,

0xfba6,	// (0x0002d91c) list_single_graphic_pane_fp_g_ParamLimits

0xfba6,	// (0x0002d91c) list_single_graphic_pane_fp_g

0xea8d,	// (0x0002c803) list_single_graphic_pane_fp_t1_ParamLimits

0xea8d,	// (0x0002c803) list_single_graphic_pane_fp_t1

0xea81,	// (0x0002c7f7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xea81,	// (0x0002c7f7) list_single_graphic_heading_pane_fp_g1

0xafc6,	// (0x00028d3c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xafc6,	// (0x00028d3c) list_single_graphic_heading_pane_fp_g2

0xe0ca,	// (0x0002be40) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe0ca,	// (0x0002be40) list_single_graphic_heading_pane_fp_g3

0xea56,	// (0x0002c7cc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xea56,	// (0x0002c7cc) list_single_graphic_heading_pane_fp_g4

0xafd2,	// (0x00028d48) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xafd2,	// (0x00028d48) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0002d91c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0002d91c) list_single_graphic_heading_pane_fp_g

0xeaa3,	// (0x0002c819) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeaa3,	// (0x0002c819) list_single_graphic_heading_pane_fp_t1

0xeab9,	// (0x0002c82f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeab9,	// (0x0002c82f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x0002d927) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x0002d927) list_single_graphic_heading_pane_fp_t

0xeacb,	// (0x0002c841) list_single_cale_day_pane_fp_g1_ParamLimits

0xeacb,	// (0x0002c841) list_single_cale_day_pane_fp_g1

0xafde,	// (0x00028d54) list_single_cale_day_pane_fp_g2_ParamLimits

0xafde,	// (0x00028d54) list_single_cale_day_pane_fp_g2

0xeb03,	// (0x0002c879) list_single_cale_day_pane_fp_g3_ParamLimits

0xeb03,	// (0x0002c879) list_single_cale_day_pane_fp_g3

0xeb2b,	// (0x0002c8a1) list_single_cale_day_pane_fp_g4_ParamLimits

0xeb2b,	// (0x0002c8a1) list_single_cale_day_pane_fp_g4

0xeb4f,	// (0x0002c8c5) list_single_cale_day_pane_fp_g5_ParamLimits

0xeb4f,	// (0x0002c8c5) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb6,	// (0x0002d92c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb6,	// (0x0002d92c) list_single_cale_day_pane_fp_g

0xeb73,	// (0x0002c8e9) list_single_cale_day_pane_fp_t1_ParamLimits

0xeb73,	// (0x0002c8e9) list_single_cale_day_pane_fp_t1

0xeb99,	// (0x0002c90f) list_single_cale_day_pane_fp_t2_ParamLimits

0xeb99,	// (0x0002c90f) list_single_cale_day_pane_fp_t2

0xebb2,	// (0x0002c928) list_single_cale_day_pane_fp_t3_ParamLimits

0xebb2,	// (0x0002c928) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc1,	// (0x0002d937) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc1,	// (0x0002d937) list_single_cale_day_pane_fp_t

0xafc6,	// (0x00028d3c) list_empty_pane_fp_g1_ParamLimits

0xafc6,	// (0x00028d3c) list_empty_pane_fp_g1

0xebcb,	// (0x0002c941) list_empty_pane_fp_t1

0xebd9,	// (0x0002c94f) list_empty_pane_fp_t2

0x0001,

0xfbc8,	// (0x0002d93e) list_empty_pane_fp_t

0xafc6,	// (0x00028d3c) list_single_heading_pane_fp_g1_ParamLimits

0xafc6,	// (0x00028d3c) list_single_heading_pane_fp_g1

0xe0ca,	// (0x0002be40) list_single_heading_pane_fp_g2_ParamLimits

0xe0ca,	// (0x0002be40) list_single_heading_pane_fp_g2

0xea56,	// (0x0002c7cc) list_single_heading_pane_fp_g3_ParamLimits

0xea56,	// (0x0002c7cc) list_single_heading_pane_fp_g3

0x0002,

0xfbcd,	// (0x0002d943) list_single_heading_pane_fp_g_ParamLimits

0xfbcd,	// (0x0002d943) list_single_heading_pane_fp_g

0xebe7,	// (0x0002c95d) list_single_heading_pane_fp_t1_ParamLimits

0xebe7,	// (0x0002c95d) list_single_heading_pane_fp_t1

0xebf9,	// (0x0002c96f) list_single_heading_pane_fp_t2_ParamLimits

0xebf9,	// (0x0002c96f) list_single_heading_pane_fp_t2

0x0001,

0xfbd4,	// (0x0002d94a) list_single_heading_pane_fp_t_ParamLimits

0xfbd4,	// (0x0002d94a) list_single_heading_pane_fp_t

0x4c5e,	// (0x000229d4) aid_size_cell_fast

0x45ca,	// (0x00022340) soft_indicator_pane_cp1_t1

0x4c9b,	// (0x00022a11) cell_app_pane_cp2_ParamLimits

0x4c9b,	// (0x00022a11) cell_app_pane_cp2

0xa725,	// (0x0002849b) fep_hwr_candidate_drop_down_list_pane

0xa953,	// (0x000286c9) fep_hwr_candidate_pane_g3_ParamLimits

0xa953,	// (0x000286c9) fep_hwr_candidate_pane_g3

0x3e72,	// (0x00021be8) fep_hwr_candidate_pane_g4_ParamLimits

0x3e72,	// (0x00021be8) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0002d8b9) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0002d8b9) fep_hwr_candidate_pane_g

0xaa1a,	// (0x00028790) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xaa1a,	// (0x00028790) fep_vkb_candidate_drop_down_list_pane

0xae33,	// (0x00028ba9) fep_vkb_candidate_pane_g3

0xae3b,	// (0x00028bb1) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0002d8e6) fep_vkb_candidate_pane_g

0xaeb0,	// (0x00028c26) cell_hwr_candidate_pane_g1_ParamLimits

0xaebe,	// (0x00028c34) cell_hwr_candidate_pane_g3_ParamLimits

0xaebe,	// (0x00028c34) cell_hwr_candidate_pane_g3

0xba23,	// (0x00029799) cell_hwr_candidate_pane_g4_ParamLimits

0xba23,	// (0x00029799) cell_hwr_candidate_pane_g4

0x0002,

0xfb8f,	// (0x0002d905) cell_hwr_candidate_pane_g_ParamLimits

0xfb8f,	// (0x0002d905) cell_hwr_candidate_pane_g

0xaefd,	// (0x00028c73) cell_vkb_candidate_pane_g3_ParamLimits

0xaefd,	// (0x00028c73) cell_vkb_candidate_pane_g3

0xaf18,	// (0x00028c8e) cell_vkb_candidate_pane_g4_ParamLimits

0xaf18,	// (0x00028c8e) cell_vkb_candidate_pane_g4

0xafea,	// (0x00028d60) cell_app_pane_cp2_g1_ParamLimits

0xafea,	// (0x00028d60) cell_app_pane_cp2_g1

0xba44,	// (0x000297ba) cell_app_pane_cp2_g2_ParamLimits

0xba44,	// (0x000297ba) cell_app_pane_cp2_g2

0x0001,

0xfbd9,	// (0x0002d94f) cell_app_pane_cp2_g_ParamLimits

0xfbd9,	// (0x0002d94f) cell_app_pane_cp2_g

0xba50,	// (0x000297c6) cell_app_pane_cp2_t1_ParamLimits

0xba50,	// (0x000297c6) cell_app_pane_cp2_t1

0x4afb,	// (0x00022871) grid_highlight_pane_cp1_ParamLimits

0x4afb,	// (0x00022871) grid_highlight_pane_cp1

0xb008,	// (0x00028d7e) cell_hwr_candidate_pane_cp1_ParamLimits

0xb008,	// (0x00028d7e) cell_hwr_candidate_pane_cp1

0xaeb0,	// (0x00028c26) fep_hwr_candidate_drop_down_list_pane_g1

0xb027,	// (0x00028d9d) fep_hwr_candidate_drop_down_list_pane_g2

0xb034,	// (0x00028daa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0002d954) fep_hwr_candidate_drop_down_list_pane_g

0xb041,	// (0x00028db7) fep_hwr_candidate_drop_down_list_scroll_pane

0xb04a,	// (0x00028dc0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb04a,	// (0x00028dc0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xb057,	// (0x00028dcd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb057,	// (0x00028dcd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xb064,	// (0x00028dda) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb064,	// (0x00028dda) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xb071,	// (0x00028de7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb071,	// (0x00028de7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xb08c,	// (0x00028e02) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb08c,	// (0x00028e02) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xb0a7,	// (0x00028e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb0a7,	// (0x00028e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xb0c2,	// (0x00028e38) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb0c2,	// (0x00028e38) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xb0dd,	// (0x00028e53) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb0dd,	// (0x00028e53) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0002d95b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0002d95b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xba62,	// (0x000297d8) cell_vkb_candidate_pane_cp1_ParamLimits

0xba62,	// (0x000297d8) cell_vkb_candidate_pane_cp1

0xab33,	// (0x000288a9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xab33,	// (0x000288a9) fep_vkb_candidate_drop_down_list_pane_g1

0xba82,	// (0x000297f8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xba82,	// (0x000297f8) fep_vkb_candidate_drop_down_list_pane_g2

0xba8f,	// (0x00029805) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xba8f,	// (0x00029805) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf6,	// (0x0002d96c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf6,	// (0x0002d96c) fep_vkb_candidate_drop_down_list_pane_g

0xba9c,	// (0x00029812) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xba9c,	// (0x00029812) fep_vkb_candidate_drop_down_list_scroll_pane

0xbaa9,	// (0x0002981f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbaa9,	// (0x0002981f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbab6,	// (0x0002982c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbab6,	// (0x0002982c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbac2,	// (0x00029838) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbac2,	// (0x00029838) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbace,	// (0x00029844) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbace,	// (0x00029844) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbaef,	// (0x00029865) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbaef,	// (0x00029865) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbb10,	// (0x00029886) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbb10,	// (0x00029886) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbb31,	// (0x000298a7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbb31,	// (0x000298a7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbb52,	// (0x000298c8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbb52,	// (0x000298c8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbfd,	// (0x0002d973) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbfd,	// (0x0002d973) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x84c3,	// (0x00026239) title_pane_g1_ParamLimits

0x84d0,	// (0x00026246) title_pane_g2_ParamLimits

0xf592,	// (0x0002d308) title_pane_g_ParamLimits

0x5026,	// (0x00022d9c) aid_call2_pane

0x501e,	// (0x00022d94) aid_call_pane

0x502e,	// (0x00022da4) popup_clock_analogue_window_g1

0x502e,	// (0x00022da4) popup_clock_analogue_window_g2

0x8acf,	// (0x00026845) popup_clock_analogue_window_g3

0x8ad8,	// (0x0002684e) popup_clock_analogue_window_g4

0x444e,	// (0x000221c4) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0002d4ad) popup_clock_analogue_window_g

0x8ae0,	// (0x00026856) popup_clock_analogue_window_t1

0x8b17,	// (0x0002688d) clock_digital_number_pane_ParamLimits

0x8b17,	// (0x0002688d) clock_digital_number_pane

0x8b23,	// (0x00026899) clock_digital_number_pane_cp02_ParamLimits

0x8b23,	// (0x00026899) clock_digital_number_pane_cp02

0x8b2f,	// (0x000268a5) clock_digital_number_pane_cp03_ParamLimits

0x8b2f,	// (0x000268a5) clock_digital_number_pane_cp03

0x8b3b,	// (0x000268b1) clock_digital_number_pane_cp04_ParamLimits

0x8b3b,	// (0x000268b1) clock_digital_number_pane_cp04

0x8b47,	// (0x000268bd) clock_digital_separator_pane_ParamLimits

0x8b47,	// (0x000268bd) clock_digital_separator_pane

0x8b53,	// (0x000268c9) popup_clock_digital_window_t1_ParamLimits

0x8b53,	// (0x000268c9) popup_clock_digital_window_t1

0x444e,	// (0x000221c4) clock_digital_number_pane_g1

0x444e,	// (0x000221c4) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0002d4b8) clock_digital_number_pane_g

0x444e,	// (0x000221c4) clock_digital_separator_pane_g1

0x444e,	// (0x000221c4) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0002d4b8) clock_digital_separator_pane_g

0x953d,	// (0x000272b3) aid_fill_nsta_ParamLimits

0x9606,	// (0x0002737c) indicator_nsta_pane_ParamLimits

0x5978,	// (0x000236ee) popup_clock_analogue_window

0x5978,	// (0x000236ee) popup_clock_digital_window

0x44b4,	// (0x0002222a) grid_indicator_nsta_pane_ParamLimits

0x7496,	// (0x0002520c) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0002d846) clock_nsta_pane_t

0x8a93,	// (0x00026809) aid_size_max_handle

0x8a9d,	// (0x00026813) aid_size_min_handle

0x553d,	// (0x000232b3) editor_scroll_pane

0xbb6d,	// (0x000298e3) ex_editor_pane

0x4c1a,	// (0x00022990) scroll_pane_cp13

0x4a9a,	// (0x00022810) scroll_pane_cp14

0x5058,	// (0x00022dce) scroll_pane_cp36

0x8b00,	// (0x00026876) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b00,	// (0x00026876) list_single_graphic_hl_pane_cp2

0xa02d,	// (0x00027da3) list_single_graphic_hl_pane_ParamLimits

0xa02d,	// (0x00027da3) list_single_graphic_hl_pane

0xec0f,	// (0x0002c985) aid_size_min_hl_cp1

0xbb75,	// (0x000298eb) list_highlight_pane_cp34_ParamLimits

0xbb75,	// (0x000298eb) list_highlight_pane_cp34

0xbb86,	// (0x000298fc) list_single_graphic_hl_pane_g1_ParamLimits

0xbb86,	// (0x000298fc) list_single_graphic_hl_pane_g1

0xec18,	// (0x0002c98e) list_single_graphic_hl_pane_g2_ParamLimits

0xec18,	// (0x0002c98e) list_single_graphic_hl_pane_g2

0xec18,	// (0x0002c98e) list_single_graphic_hl_pane_g3_ParamLimits

0xec18,	// (0x0002c98e) list_single_graphic_hl_pane_g3

0xec24,	// (0x0002c99a) list_single_graphic_hl_pane_g4_ParamLimits

0xec24,	// (0x0002c99a) list_single_graphic_hl_pane_g4

0xec30,	// (0x0002c9a6) list_single_graphic_hl_pane_g5_ParamLimits

0xec30,	// (0x0002c9a6) list_single_graphic_hl_pane_g5

0x0004,

0xfc0e,	// (0x0002d984) list_single_graphic_hl_pane_g_ParamLimits

0xfc0e,	// (0x0002d984) list_single_graphic_hl_pane_g

0xec44,	// (0x0002c9ba) list_single_graphic_hl_pane_t1_ParamLimits

0xec44,	// (0x0002c9ba) list_single_graphic_hl_pane_t1

0xbb93,	// (0x00029909) aid_size_min_hl_cp2

0xbb9c,	// (0x00029912) list_highlight_pane_cp34_cp2_ParamLimits

0xbb9c,	// (0x00029912) list_highlight_pane_cp34_cp2

0xbb86,	// (0x000298fc) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbb86,	// (0x000298fc) list_single_graphic_hl_pane_g1_cp2

0xbba9,	// (0x0002991f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbba9,	// (0x0002991f) list_single_graphic_hl_pane_g2_cp2

0xbbb5,	// (0x0002992b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbbb5,	// (0x0002992b) list_single_graphic_hl_pane_g3_cp2

0x5474,	// (0x000231ea) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5474,	// (0x000231ea) list_single_graphic_hl_pane_g4_cp2

0xbbc3,	// (0x00029939) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbbc3,	// (0x00029939) list_single_graphic_hl_pane_g5_cp2

0x8f7c,	// (0x00026cf2) control_pane_g4_ParamLimits

0x8f7c,	// (0x00026cf2) control_pane_g4

0x4c52,	// (0x000229c8) bg_popup_sub_pane_cp10_ParamLimits

0xa69d,	// (0x00028413) list_choice_list_pane_ParamLimits

0xa6ac,	// (0x00028422) scroll_pane_cp23

0x45e7,	// (0x0002235d) bg_popup_preview_window_pane_cp02_ParamLimits

0xaf69,	// (0x00028cdf) list_preview_fixed_pane_ParamLimits

0xaf7f,	// (0x00028cf5) list_preview_fixed_pane_cp_ParamLimits

0xaf7f,	// (0x00028cf5) list_preview_fixed_pane_cp

0xaf8b,	// (0x00028d01) popup_preview_fixed_window_g1_ParamLimits

0xaf8b,	// (0x00028d01) popup_preview_fixed_window_g1

0xaf97,	// (0x00028d0d) popup_preview_fixed_window_g2_ParamLimits

0xaf97,	// (0x00028d0d) popup_preview_fixed_window_g2

0x0002,

0xfb96,	// (0x0002d90c) popup_preview_fixed_window_g_ParamLimits

0xfb96,	// (0x0002d90c) popup_preview_fixed_window_g

0x8982,	// (0x000266f8) aid_navi_side_left_pane_ParamLimits

0x8997,	// (0x0002670d) aid_navi_side_right_pane_ParamLimits

0x89af,	// (0x00026725) navi_icon_pane_stacon_ParamLimits

0x89c3,	// (0x00026739) navi_navi_pane_stacon_ParamLimits

0x89af,	// (0x00026725) navi_text_pane_stacon_ParamLimits

0x4444,	// (0x000221ba) main_text_info_pane

0xbbed,	// (0x00029963) listscroll_text_info_pane

0xbbf5,	// (0x0002996b) list_text_info_pane_ParamLimits

0xbbf5,	// (0x0002996b) list_text_info_pane

0xbc04,	// (0x0002997a) scroll_pane_cp24_ParamLimits

0xbc04,	// (0x0002997a) scroll_pane_cp24

0xbc22,	// (0x00029998) list_text_info_pane_t1_ParamLimits

0xbc22,	// (0x00029998) list_text_info_pane_t1

0x90ce,	// (0x00026e44) popup_fast_swap2_window_ParamLimits

0x90ce,	// (0x00026e44) popup_fast_swap2_window

0xbc5b,	// (0x000299d1) aid_size_cell_fast2

0x4444,	// (0x000221ba) bg_popup_window_pane_cp17

0x5e1c,	// (0x00023b92) heading_pane_cp2

0x47cd,	// (0x00022543) listscroll_fast2_pane

0xbc65,	// (0x000299db) grid_fast2_pane

0xbc6f,	// (0x000299e5) listscroll_fast2_pane_g1

0xbc77,	// (0x000299ed) listscroll_fast2_pane_g2

0x0001,

0xfc19,	// (0x0002d98f) listscroll_fast2_pane_g

0x4c1a,	// (0x00022990) scroll_pane_cp26

0xbc81,	// (0x000299f7) cell_fast2_pane_ParamLimits

0xbc81,	// (0x000299f7) cell_fast2_pane

0xbc96,	// (0x00029a0c) cell_fast2_pane_g1

0xbc9f,	// (0x00029a15) cell_fast2_pane_g2

0xbca8,	// (0x00029a1e) cell_fast2_pane_g3

0x0002,

0xfc1e,	// (0x0002d994) cell_fast2_pane_g

0x4861,	// (0x000225d7) grid_highlight_pane_cp9

0x4876,	// (0x000225ec) main_eswt_pane_ParamLimits

0x4876,	// (0x000225ec) main_eswt_pane

0xbc19,	// (0x0002998f) list_single_text_info_pane

0xbcb0,	// (0x00029a26) eswt_ctrl_button_pane

0xbcb0,	// (0x00029a26) eswt_ctrl_canvas_pane

0xbcb8,	// (0x00029a2e) eswt_ctrl_combo_pane

0xbcb0,	// (0x00029a26) eswt_ctrl_default_pane

0xbcb0,	// (0x00029a26) eswt_ctrl_label_pane

0xbcc0,	// (0x00029a36) eswt_ctrl_wait_pane

0xbcc8,	// (0x00029a3e) eswt_shell_pane

0x4444,	// (0x000221ba) listscroll_eswt_app_pane

0xbce8,	// (0x00029a5e) popup_eswt_tasktip_window_ParamLimits

0xbce8,	// (0x00029a5e) popup_eswt_tasktip_window

0x5b75,	// (0x000238eb) bg_popup_window_pane_cp18

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_ParamLimits

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_ParamLimits

0xbd06,	// (0x00029a7c) eswt_control_pane_g2

0xbd13,	// (0x00029a89) eswt_control_pane_g3_ParamLimits

0xbd13,	// (0x00029a89) eswt_control_pane_g3

0xbd20,	// (0x00029a96) eswt_control_pane_g4_ParamLimits

0xbd20,	// (0x00029a96) eswt_control_pane_g4

0x0003,

0xfc25,	// (0x0002d99b) eswt_control_pane_g_ParamLimits

0xfc25,	// (0x0002d99b) eswt_control_pane_g

0x4afb,	// (0x00022871) bg_button_pane_ParamLimits

0x4afb,	// (0x00022871) bg_button_pane

0x4876,	// (0x000225ec) common_borders_pane_copy2_ParamLimits

0x4876,	// (0x000225ec) common_borders_pane_copy2

0xbd2d,	// (0x00029aa3) control_button_pane_g1_ParamLimits

0xbd2d,	// (0x00029aa3) control_button_pane_g1

0xbd39,	// (0x00029aaf) control_button_pane_g2_ParamLimits

0xbd39,	// (0x00029aaf) control_button_pane_g2

0xbd45,	// (0x00029abb) control_button_pane_g3_ParamLimits

0xbd45,	// (0x00029abb) control_button_pane_g3

0x0002,

0xfc2e,	// (0x0002d9a4) control_button_pane_g_ParamLimits

0xfc2e,	// (0x0002d9a4) control_button_pane_g

0xbd59,	// (0x00029acf) control_button_pane_t1

0xbd67,	// (0x00029add) control_button_pane_t2

0x0001,

0xfc35,	// (0x0002d9ab) control_button_pane_t

0x5a85,	// (0x000237fb) bg_button_pane_g1

0x5a8d,	// (0x00023803) bg_button_pane_g2

0x5a95,	// (0x0002380b) bg_button_pane_g3

0x5a9d,	// (0x00023813) bg_button_pane_g4

0x5aa5,	// (0x0002381b) bg_button_pane_g5

0x5aad,	// (0x00023823) bg_button_pane_g6

0x5ab5,	// (0x0002382b) bg_button_pane_g7

0x5abd,	// (0x00023833) bg_button_pane_g8

0x5ac5,	// (0x0002383b) bg_button_pane_g9

0x0008,

0xf895,	// (0x0002d60b) bg_button_pane_g

0xa658,	// (0x000283ce) common_borders_pane_ParamLimits

0xa658,	// (0x000283ce) common_borders_pane

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy1_ParamLimits

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy1

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy1_ParamLimits

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy1

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy1_ParamLimits

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy1

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy1_ParamLimits

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy1

0xa693,	// (0x00028409) bg_eswt_ctrl_canvas_pane_g1

0xa658,	// (0x000283ce) common_borders_pane_cp2_ParamLimits

0xa658,	// (0x000283ce) common_borders_pane_cp2

0xa658,	// (0x000283ce) common_borders_pane_cp3_ParamLimits

0xa658,	// (0x000283ce) common_borders_pane_cp3

0xbd75,	// (0x00029aeb) separator_horizontal_pane

0xbd7d,	// (0x00029af3) separator_vertical_pane

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy2_ParamLimits

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy2

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy2_ParamLimits

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy2

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy2_ParamLimits

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy2

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy2_ParamLimits

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy2

0x4444,	// (0x000221ba) common_borders_pane_cp4

0xbd86,	// (0x00029afc) separator_horizontal_pane_g1

0xbd8f,	// (0x00029b05) separator_horizontal_pane_g2

0xbd98,	// (0x00029b0e) separator_horizontal_pane_g3

0x0002,

0xfc3a,	// (0x0002d9b0) separator_horizontal_pane_g

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy3_ParamLimits

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy3

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy3_ParamLimits

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy3

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy3_ParamLimits

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy3

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy3_ParamLimits

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy3

0x4444,	// (0x000221ba) common_borders_pane_cp5

0xbda1,	// (0x00029b17) separator_vertical_pane_g1

0xbdaa,	// (0x00029b20) separator_vertical_pane_g2

0xbdb3,	// (0x00029b29) separator_vertical_pane_g3

0x0002,

0xfc41,	// (0x0002d9b7) separator_vertical_pane_g

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy4_ParamLimits

0xbcf9,	// (0x00029a6f) eswt_control_pane_g1_copy4

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy4_ParamLimits

0xbd06,	// (0x00029a7c) eswt_control_pane_g2_copy4

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy4_ParamLimits

0xbd13,	// (0x00029a89) eswt_control_pane_g3_copy4

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy4_ParamLimits

0xbd20,	// (0x00029a96) eswt_control_pane_g4_copy4

0xbdbc,	// (0x00029b32) eswt_ctrl_combo_button_pane

0xbdc4,	// (0x00029b3a) eswt_ctrl_input_pane

0xbdcc,	// (0x00029b42) popup_choice_list_window_cp70

0xbdd4,	// (0x00029b4a) eswt_ctrl_input_pane_t1

0x4444,	// (0x000221ba) input_focus_pane_cp70

0xa658,	// (0x000283ce) bg_button_pane_cp70_ParamLimits

0xa658,	// (0x000283ce) bg_button_pane_cp70

0xbde2,	// (0x00029b58) eswt_ctrl_combo_button_pane_g1

0xbdea,	// (0x00029b60) wait_bar_pane_cp70

0x5b75,	// (0x000238eb) bg_popup_window_pane_cp70_ParamLimits

0x5b75,	// (0x000238eb) bg_popup_window_pane_cp70

0xbdf2,	// (0x00029b68) popup_eswt_tasktip_window_t1

0xbe08,	// (0x00029b7e) wait_bar_pane_cp71_ParamLimits

0xbe08,	// (0x00029b7e) wait_bar_pane_cp71

0xbe14,	// (0x00029b8a) grid_eswt_app_pane

0x4e6d,	// (0x00022be3) scroll_pane_cp70

0xbe1d,	// (0x00029b93) cell_eswt_app_pane_ParamLimits

0xbe1d,	// (0x00029b93) cell_eswt_app_pane

0xbe51,	// (0x00029bc7) cell_eswt_app_pane_g1_ParamLimits

0xbe51,	// (0x00029bc7) cell_eswt_app_pane_g1

0xbe80,	// (0x00029bf6) cell_eswt_app_pane_g2_ParamLimits

0xbe80,	// (0x00029bf6) cell_eswt_app_pane_g2

0x0001,

0xfc48,	// (0x0002d9be) cell_eswt_app_pane_g_ParamLimits

0xfc48,	// (0x0002d9be) cell_eswt_app_pane_g

0xbea9,	// (0x00029c1f) cell_eswt_app_pane_t1_ParamLimits

0xbea9,	// (0x00029c1f) cell_eswt_app_pane_t1

0xbedb,	// (0x00029c51) grid_highlight_pane_cp70_ParamLimits

0xbedb,	// (0x00029c51) grid_highlight_pane_cp70

0x5410,	// (0x00023186) set_content_pane_g1

0x5714,	// (0x0002348a) status_small_volume_pane

0xb0f8,	// (0x00028e6e) status_small_volume_pane_g1

0xb100,	// (0x00028e76) volume_small2_pane

0xb109,	// (0x00028e7f) volume_small2_pane_g1

0xb112,	// (0x00028e88) volume_small2_pane_g2

0xb11b,	// (0x00028e91) volume_small2_pane_g3

0xb124,	// (0x00028e9a) volume_small2_pane_g4

0xb12d,	// (0x00028ea3) volume_small2_pane_g5

0xb136,	// (0x00028eac) volume_small2_pane_g6

0xb13f,	// (0x00028eb5) volume_small2_pane_g7

0xb148,	// (0x00028ebe) volume_small2_pane_g8

0xb151,	// (0x00028ec7) volume_small2_pane_g9

0xb15a,	// (0x00028ed0) volume_small2_pane_g10

0x0009,

0xfc4d,	// (0x0002d9c3) volume_small2_pane_g

0xac7b,	// (0x000289f1) fep_vkb_top_text_pane_g1_ParamLimits

0xac96,	// (0x00028a0c) fep_vkb_top_text_pane_t1_ParamLimits

0xafa3,	// (0x00028d19) popup_preview_fixed_window_g3_ParamLimits

0xafa3,	// (0x00028d19) popup_preview_fixed_window_g3

0x94d0,	// (0x00027246) popup_toolbar_trans_pane

0x9ec2,	// (0x00027c38) aid_height_set_list_ParamLimits

0x6a32,	// (0x000247a8) aid_size_parent_ParamLimits

0x4c52,	// (0x000229c8) list_highlight_pane_cp2_ParamLimits

0x5410,	// (0x00023186) set_content_pane_g1_ParamLimits

0xe7be,	// (0x0002c534) list_single_image_pane_ParamLimits

0xe7be,	// (0x0002c534) list_single_image_pane

0xbee7,	// (0x00029c5d) aid_size_cell_image_ParamLimits

0xbee7,	// (0x00029c5d) aid_size_cell_image

0xbef4,	// (0x00029c6a) grid_single_image_pane_ParamLimits

0xbef4,	// (0x00029c6a) grid_single_image_pane

0x4b15,	// (0x0002288b) list_single_image_pane_g1_ParamLimits

0x4b15,	// (0x0002288b) list_single_image_pane_g1

0x4b21,	// (0x00022897) list_single_image_pane_g2_ParamLimits

0x4b21,	// (0x00022897) list_single_image_pane_g2

0x0001,

0xfc62,	// (0x0002d9d8) list_single_image_pane_g_ParamLimits

0xfc62,	// (0x0002d9d8) list_single_image_pane_g

0xbf00,	// (0x00029c76) list_single_image_pane_t1_ParamLimits

0xbf00,	// (0x00029c76) list_single_image_pane_t1

0xbf16,	// (0x00029c8c) cell_image_list_pane_ParamLimits

0xbf16,	// (0x00029c8c) cell_image_list_pane

0xbf2a,	// (0x00029ca0) cell_image_list_pane_g1

0xbf33,	// (0x00029ca9) cell_image_list_pane_g2

0x0001,

0xfc67,	// (0x0002d9dd) cell_image_list_pane_g

0xbf3c,	// (0x00029cb2) aid_size_cell_tb_trans_pane

0x4afb,	// (0x00022871) bg_tb_trans_pane

0xbf4e,	// (0x00029cc4) grid_tb_trans_pane

0x5a85,	// (0x000237fb) bg_tb_trans_pane_g1

0x5a8d,	// (0x00023803) bg_tb_trans_pane_g2

0x5a95,	// (0x0002380b) bg_tb_trans_pane_g3

0x5a9d,	// (0x00023813) bg_tb_trans_pane_g4

0x5aa5,	// (0x0002381b) bg_tb_trans_pane_g5

0x5abd,	// (0x00023833) bg_tb_trans_pane_g6

0x5ac5,	// (0x0002383b) bg_tb_trans_pane_g7

0x5aad,	// (0x00023823) bg_tb_trans_pane_g8

0x5ab5,	// (0x0002382b) bg_tb_trans_pane_g9

0x0008,

0xfc6c,	// (0x0002d9e2) bg_tb_trans_pane_g

0xbf62,	// (0x00029cd8) cell_toolbar_trans_pane_ParamLimits

0xbf62,	// (0x00029cd8) cell_toolbar_trans_pane

0xa693,	// (0x00028409) cell_toolbar_trans_pane_g1

0xa3f2,	// (0x00028168) list_form2_midp_pane_t1

0xa400,	// (0x00028176) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0002d87f) list_form2_midp_pane_t

0x7529,	// (0x0002529f) scroll_pane_cp51_ParamLimits

0x769f,	// (0x00025415) form2_midp_wait_pane_g1

0x76a8,	// (0x0002541e) form2_midp_wait_pane_g2

0x76b1,	// (0x00025427) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0002d894) form2_midp_wait_pane_g

0x44b4,	// (0x0002222a) list_highlight_pane_cp21_ParamLimits

0x76d1,	// (0x00025447) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x76e0,	// (0x00025456) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe74a,	// (0x0002c4c0) list_single_2graphic_im_pane_ParamLimits

0xe74a,	// (0x0002c4c0) list_single_2graphic_im_pane

0xbf88,	// (0x00029cfe) list_single_2graphic_im_pane_g1_ParamLimits

0xbf88,	// (0x00029cfe) list_single_2graphic_im_pane_g1

0xbf99,	// (0x00029d0f) list_single_2graphic_im_pane_g2_ParamLimits

0xbf99,	// (0x00029d0f) list_single_2graphic_im_pane_g2

0xbfa5,	// (0x00029d1b) list_single_2graphic_im_pane_g3_ParamLimits

0xbfa5,	// (0x00029d1b) list_single_2graphic_im_pane_g3

0x0003,

0xfc7f,	// (0x0002d9f5) list_single_2graphic_im_pane_g_ParamLimits

0xfc7f,	// (0x0002d9f5) list_single_2graphic_im_pane_g

0xbfc5,	// (0x00029d3b) list_single_2graphic_im_pane_t1_ParamLimits

0xbfc5,	// (0x00029d3b) list_single_2graphic_im_pane_t1

0xafaf,	// (0x00028d25) list_single_graphic_2heading_pane_fp_ParamLimits

0xafaf,	// (0x00028d25) list_single_graphic_2heading_pane_fp

0xea81,	// (0x0002c7f7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xea81,	// (0x0002c7f7) list_single_graphic_2heading_pane_fp_g1

0xafc6,	// (0x00028d3c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xafc6,	// (0x00028d3c) list_single_graphic_2heading_pane_fp_g2

0xe0ca,	// (0x0002be40) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe0ca,	// (0x0002be40) list_single_graphic_2heading_pane_fp_g3

0xea56,	// (0x0002c7cc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xea56,	// (0x0002c7cc) list_single_graphic_2heading_pane_fp_g4

0xafd2,	// (0x00028d48) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xafd2,	// (0x00028d48) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba6,	// (0x0002d91c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0002d91c) list_single_graphic_2heading_pane_fp_g

0xec5a,	// (0x0002c9d0) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xec5a,	// (0x0002c9d0) list_single_graphic_2heading_pane_fp_t1

0xeab9,	// (0x0002c82f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeab9,	// (0x0002c82f) list_single_graphic_2heading_pane_fp_t2

0xec70,	// (0x0002c9e6) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec70,	// (0x0002c9e6) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc88,	// (0x0002d9fe) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc88,	// (0x0002d9fe) list_single_graphic_2heading_pane_fp_t

0xa8d1,	// (0x00028647) fep_hwr_write_pane_g5_ParamLimits

0xa8d1,	// (0x00028647) fep_hwr_write_pane_g5

0xa8dd,	// (0x00028653) fep_hwr_write_pane_g6_ParamLimits

0xa8dd,	// (0x00028653) fep_hwr_write_pane_g6

0xbcc8,	// (0x00029a3e) eswt_shell_pane_ParamLimits

0x5b75,	// (0x000238eb) bg_popup_window_pane_cp18_ParamLimits

0x6b3c,	// (0x000248b2) heading_pane_cp70

0xbdf2,	// (0x00029b68) popup_eswt_tasktip_window_t1_ParamLimits

0x957d,	// (0x000272f3) aid_touch_tab_arrow_left

0x958c,	// (0x00027302) aid_touch_tab_arrow_right

0x84e1,	// (0x00026257) title_pane_g3_ParamLimits

0x84e1,	// (0x00026257) title_pane_g3

0x4aba,	// (0x00022830) set_value_pane_g1

0x94d0,	// (0x00027246) popup_toolbar_trans_pane_ParamLimits

0xbf3c,	// (0x00029cb2) aid_size_cell_tb_trans_pane_ParamLimits

0x4afb,	// (0x00022871) bg_tb_trans_pane_ParamLimits

0xbf4e,	// (0x00029cc4) grid_tb_trans_pane_ParamLimits

0x45e7,	// (0x0002235d) cont_note_pane_ParamLimits

0x45e7,	// (0x0002235d) cont_note_pane

0x4876,	// (0x000225ec) cont_snote2_single_text_pane_ParamLimits

0x4876,	// (0x000225ec) cont_snote2_single_text_pane

0x4876,	// (0x000225ec) cont_snote2_single_graphic_pane_ParamLimits

0x4876,	// (0x000225ec) cont_snote2_single_graphic_pane

0x6001,	// (0x00023d77) cont_note_wait_pane_ParamLimits

0x6001,	// (0x00023d77) cont_note_wait_pane

0x6001,	// (0x00023d77) cont_note_image_pane_ParamLimits

0x6001,	// (0x00023d77) cont_note_image_pane

0xbff6,	// (0x00029d6c) popup_note2_window_g1_ParamLimits

0xbff6,	// (0x00029d6c) popup_note2_window_g1

0xc027,	// (0x00029d9d) popup_note2_window_t1_ParamLimits

0xc027,	// (0x00029d9d) popup_note2_window_t1

0xc06c,	// (0x00029de2) popup_note2_window_t2_ParamLimits

0xc06c,	// (0x00029de2) popup_note2_window_t2

0xc0b1,	// (0x00029e27) popup_note2_window_t3_ParamLimits

0xc0b1,	// (0x00029e27) popup_note2_window_t3

0xc0f6,	// (0x00029e6c) popup_note2_window_t4_ParamLimits

0xc0f6,	// (0x00029e6c) popup_note2_window_t4

0x465f,	// (0x000223d5) popup_note2_window_t5_ParamLimits

0x465f,	// (0x000223d5) popup_note2_window_t5

0x0004,

0xfc94,	// (0x0002da0a) popup_note2_window_t_ParamLimits

0xfc94,	// (0x0002da0a) popup_note2_window_t

0xc125,	// (0x00029e9b) popup_note2_image_window_g1_ParamLimits

0xc125,	// (0x00029e9b) popup_note2_image_window_g1

0xc131,	// (0x00029ea7) popup_note2_image_window_g2_ParamLimits

0xc131,	// (0x00029ea7) popup_note2_image_window_g2

0x0001,

0xfc9f,	// (0x0002da15) popup_note2_image_window_g_ParamLimits

0xfc9f,	// (0x0002da15) popup_note2_image_window_g

0xc143,	// (0x00029eb9) popup_note2_image_window_t1_ParamLimits

0xc143,	// (0x00029eb9) popup_note2_image_window_t1

0xc15b,	// (0x00029ed1) popup_note2_image_window_t2_ParamLimits

0xc15b,	// (0x00029ed1) popup_note2_image_window_t2

0xc173,	// (0x00029ee9) popup_note2_image_window_t3_ParamLimits

0xc173,	// (0x00029ee9) popup_note2_image_window_t3

0x0002,

0xfca4,	// (0x0002da1a) popup_note2_image_window_t_ParamLimits

0xfca4,	// (0x0002da1a) popup_note2_image_window_t

0x600f,	// (0x00023d85) popup_note2_wait_window_g1_ParamLimits

0x600f,	// (0x00023d85) popup_note2_wait_window_g1

0x601b,	// (0x00023d91) popup_note2_wait_window_g2_ParamLimits

0x601b,	// (0x00023d91) popup_note2_wait_window_g2

0x6027,	// (0x00023d9d) popup_note2_wait_window_g3_ParamLimits

0x6027,	// (0x00023d9d) popup_note2_wait_window_g3

0x0002,

0xf877,	// (0x0002d5ed) popup_note2_wait_window_g_ParamLimits

0xf877,	// (0x0002d5ed) popup_note2_wait_window_g

0xc18f,	// (0x00029f05) popup_note2_wait_window_t1_ParamLimits

0xc18f,	// (0x00029f05) popup_note2_wait_window_t1

0xc1ad,	// (0x00029f23) popup_note2_wait_window_t2_ParamLimits

0xc1ad,	// (0x00029f23) popup_note2_wait_window_t2

0xc1cb,	// (0x00029f41) popup_note2_wait_window_t3_ParamLimits

0xc1cb,	// (0x00029f41) popup_note2_wait_window_t3

0xc1dd,	// (0x00029f53) popup_note2_wait_window_t4_ParamLimits

0xc1dd,	// (0x00029f53) popup_note2_wait_window_t4

0x0003,

0xfcab,	// (0x0002da21) popup_note2_wait_window_t_ParamLimits

0xfcab,	// (0x0002da21) popup_note2_wait_window_t

0xc1ef,	// (0x00029f65) wait_bar2_pane_ParamLimits

0xc1ef,	// (0x00029f65) wait_bar2_pane

0xc207,	// (0x00029f7d) popup_snote2_single_text_window_g1_ParamLimits

0xc207,	// (0x00029f7d) popup_snote2_single_text_window_g1

0xc22f,	// (0x00029fa5) popup_snote2_single_text_window_t1_ParamLimits

0xc22f,	// (0x00029fa5) popup_snote2_single_text_window_t1

0xc27b,	// (0x00029ff1) popup_snote2_single_text_window_t2_ParamLimits

0xc27b,	// (0x00029ff1) popup_snote2_single_text_window_t2

0xc2c7,	// (0x0002a03d) popup_snote2_single_text_window_t3_ParamLimits

0xc2c7,	// (0x0002a03d) popup_snote2_single_text_window_t3

0xc308,	// (0x0002a07e) popup_snote2_single_text_window_t4_ParamLimits

0xc308,	// (0x0002a07e) popup_snote2_single_text_window_t4

0xc33e,	// (0x0002a0b4) popup_snote2_single_text_window_t5_ParamLimits

0xc33e,	// (0x0002a0b4) popup_snote2_single_text_window_t5

0x0004,

0xfcb4,	// (0x0002da2a) popup_snote2_single_text_window_t_ParamLimits

0xfcb4,	// (0x0002da2a) popup_snote2_single_text_window_t

0xc369,	// (0x0002a0df) popup_snote2_single_graphic_window_g1_ParamLimits

0xc369,	// (0x0002a0df) popup_snote2_single_graphic_window_g1

0xc391,	// (0x0002a107) popup_snote2_single_graphic_window_g2_ParamLimits

0xc391,	// (0x0002a107) popup_snote2_single_graphic_window_g2

0x0001,

0xfcbf,	// (0x0002da35) popup_snote2_single_graphic_window_g_ParamLimits

0xfcbf,	// (0x0002da35) popup_snote2_single_graphic_window_g

0xc3b9,	// (0x0002a12f) popup_snote2_single_graphic_window_t1_ParamLimits

0xc3b9,	// (0x0002a12f) popup_snote2_single_graphic_window_t1

0xc405,	// (0x0002a17b) popup_snote2_single_graphic_window_t2_ParamLimits

0xc405,	// (0x0002a17b) popup_snote2_single_graphic_window_t2

0xc2c7,	// (0x0002a03d) popup_snote2_single_graphic_window_t3_ParamLimits

0xc2c7,	// (0x0002a03d) popup_snote2_single_graphic_window_t3

0xc308,	// (0x0002a07e) popup_snote2_single_graphic_window_t4_ParamLimits

0xc308,	// (0x0002a07e) popup_snote2_single_graphic_window_t4

0xc33e,	// (0x0002a0b4) popup_snote2_single_graphic_window_t5_ParamLimits

0xc33e,	// (0x0002a0b4) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc4,	// (0x0002da3a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc4,	// (0x0002da3a) popup_snote2_single_graphic_window_t

0x74d9,	// (0x0002524f) clock_nsta_pane_cp2_t1

0x74d9,	// (0x0002524f) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0002d855) clock_nsta_pane_cp2_t

0xe3fd,	// (0x0002c173) form_field_data_wide_pane_g1_ParamLimits

0x4b15,	// (0x0002288b) form_field_data_wide_pane_g2_ParamLimits

0x4b15,	// (0x0002288b) form_field_data_wide_pane_g2

0x4b21,	// (0x00022897) form_field_data_wide_pane_g3_ParamLimits

0x4b21,	// (0x00022897) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0002d430) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0002d430) form_field_data_wide_pane_g

0xa268,	// (0x00027fde) grid_touch_3_pane_ParamLimits

0xa268,	// (0x00027fde) grid_touch_3_pane

0xc451,	// (0x0002a1c7) cell_touch_3_pane_ParamLimits

0xc451,	// (0x0002a1c7) cell_touch_3_pane

0xa693,	// (0x00028409) cell_touch_3_pane_g1

0xa693,	// (0x00028409) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0002d8da) cell_touch_3_pane_g

0x4691,	// (0x00022407) cont_query_data_pane

0x4699,	// (0x0002240f) cont_query_data_pane_cp1

0xc480,	// (0x0002a1f6) button_value_adjust_pane_cp7

0xc488,	// (0x0002a1fe) query_popup_pane_cp3

0x508a,	// (0x00022e00) bg_popup_sub_pane_cp22_ParamLimits

0x8bae,	// (0x00026924) navi_navi_volume_pane_cp2

0x8bc9,	// (0x0002693f) popup_side_volume_key_window_g2

0x8bd8,	// (0x0002694e) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0002d4c2) popup_side_volume_key_window_g

0x8bf5,	// (0x0002696b) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0002d4c9) popup_side_volume_key_window_t

0x52da,	// (0x00023050) popup_side_volume_key_window_ParamLimits

0xe096,	// (0x0002be0c) list_double_graphic_pane_g4_ParamLimits

0xe096,	// (0x0002be0c) list_double_graphic_pane_g4

0xe797,	// (0x0002c50d) list_single_2heading_msg_pane_ParamLimits

0xe797,	// (0x0002c50d) list_single_2heading_msg_pane

0xec90,	// (0x0002ca06) list_single_2heading_msg_pane_g1_ParamLimits

0xec90,	// (0x0002ca06) list_single_2heading_msg_pane_g1

0xdee7,	// (0x0002bc5d) list_single_2heading_msg_pane_g2_ParamLimits

0xdee7,	// (0x0002bc5d) list_single_2heading_msg_pane_g2

0xe87d,	// (0x0002c5f3) list_single_2heading_msg_pane_g3_ParamLimits

0xe87d,	// (0x0002c5f3) list_single_2heading_msg_pane_g3

0xec9c,	// (0x0002ca12) list_single_2heading_msg_pane_g4_ParamLimits

0xec9c,	// (0x0002ca12) list_single_2heading_msg_pane_g4

0x0003,

0xfccf,	// (0x0002da45) list_single_2heading_msg_pane_g_ParamLimits

0xfccf,	// (0x0002da45) list_single_2heading_msg_pane_g

0xecb4,	// (0x0002ca2a) list_single_2heading_msg_pane_t1_ParamLimits

0xecb4,	// (0x0002ca2a) list_single_2heading_msg_pane_t1

0xecdc,	// (0x0002ca52) list_single_2heading_msg_pane_t2_ParamLimits

0xecdc,	// (0x0002ca52) list_single_2heading_msg_pane_t2

0xed10,	// (0x0002ca86) list_single_2heading_msg_pane_t3_ParamLimits

0xed10,	// (0x0002ca86) list_single_2heading_msg_pane_t3

0xed49,	// (0x0002cabf) list_single_2heading_msg_pane_t4_ParamLimits

0xed49,	// (0x0002cabf) list_single_2heading_msg_pane_t4

0x0003,

0xfcd8,	// (0x0002da4e) list_single_2heading_msg_pane_t_ParamLimits

0xfcd8,	// (0x0002da4e) list_single_2heading_msg_pane_t

0x4462,	// (0x000221d8) title_pane_g4_ParamLimits

0x4462,	// (0x000221d8) title_pane_g4

0x88d2,	// (0x00026648) title_pane_stacon_g3_ParamLimits

0x88d2,	// (0x00026648) title_pane_stacon_g3

0xbfb9,	// (0x00029d2f) list_single_2graphic_im_pane_g4_ParamLimits

0xbfb9,	// (0x00029d2f) list_single_2graphic_im_pane_g4

0x6942,	// (0x000246b8) popup_side_volume_key_window_cp

0x6e2c,	// (0x00024ba2) main_idle_act2_pane_t1

0x9886,	// (0x000275fc) toolbar_button_pane_g10

0x87d6,	// (0x0002654c) popup_toolbar_window_cp1

0x74ca,	// (0x00025240) clock_nsta_pane_cp_t1

0x74ca,	// (0x00025240) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0002d850) clock_nsta_pane_cp_t

0x8bae,	// (0x00026924) navi_navi_volume_pane_cp2_ParamLimits

0x8bbd,	// (0x00026933) popup_side_volume_key_window_g1_ParamLimits

0x8bc9,	// (0x0002693f) popup_side_volume_key_window_g2_ParamLimits

0x8bd8,	// (0x0002694e) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0002d4c2) popup_side_volume_key_window_g_ParamLimits

0xa711,	// (0x00028487) fep_hwr_aid_pane

0xa7b8,	// (0x0002852e) bg_fep_hwr_top_pane_g4_ParamLimits

0xa7d8,	// (0x0002854e) fep_hwr_top_pane_g1_ParamLimits

0xa7ea,	// (0x00028560) fep_hwr_top_pane_g2_ParamLimits

0xa7fc,	// (0x00028572) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0002d8a5) fep_hwr_top_pane_g_ParamLimits

0xa811,	// (0x00028587) fep_hwr_top_text_pane_ParamLimits

0x6740,	// (0x000244b6) aid_touch_tab_arrow_arrow_2

0x6737,	// (0x000244ad) aid_touch_tab_arrow_left_2

0xa725,	// (0x0002849b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xa75c,	// (0x000284d2) fep_hwr_prediction_pane

0xaa83,	// (0x000287f9) fep_vkb_prediction_pane

0xab87,	// (0x000288fd) fep_vkb_side_pane_g3_ParamLimits

0xab87,	// (0x000288fd) fep_vkb_side_pane_g3

0xaeb0,	// (0x00028c26) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xb027,	// (0x00028d9d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xb034,	// (0x00028daa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbde,	// (0x0002d954) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb163,	// (0x00028ed9) fep_hwr_prediction_pane_g1

0xb16d,	// (0x00028ee3) fep_hwr_prediction_pane_g2

0xa6fb,	// (0x00028471) fep_hwr_prediction_pane_g3

0xb175,	// (0x00028eeb) fep_hwr_prediction_pane_g4

0x0003,

0xfce1,	// (0x0002da57) fep_hwr_prediction_pane_g

0xc4ad,	// (0x0002a223) fep_vkb_prediction_pane_g1

0xc4b7,	// (0x0002a22d) fep_vkb_prediction_pane_g2

0xc4bf,	// (0x0002a235) fep_vkb_prediction_pane_g3

0xc4c7,	// (0x0002a23d) fep_vkb_prediction_pane_g4

0x0003,

0xfcea,	// (0x0002da60) fep_vkb_prediction_pane_g

0x9e6a,	// (0x00027be0) slider_set_pane_g3

0x9e7e,	// (0x00027bf4) slider_set_pane_g4

0x9e96,	// (0x00027c0c) slider_set_pane_g5

0x9e6a,	// (0x00027be0) slider_set_pane_g6

0x9eac,	// (0x00027c22) slider_set_pane_g7

0x6bc1,	// (0x00024937) slider_form_pane_g3

0x6bca,	// (0x00024940) slider_form_pane_g4

0x6bd2,	// (0x00024948) slider_form_pane_g5

0x6bc1,	// (0x00024937) slider_form_pane_g6

0xa015,	// (0x00027d8b) slider_form_pane_g7

0x70ca,	// (0x00024e40) slider_set_pane_vc_g3

0x70d3,	// (0x00024e49) slider_set_pane_vc_g4

0x70dc,	// (0x00024e52) slider_set_pane_vc_g5

0x70ca,	// (0x00024e40) slider_set_pane_vc_g6

0x70e5,	// (0x00024e5b) slider_set_pane_vc_g7

0x70ca,	// (0x00024e40) slider_form_pane_vc_g1

0x70d3,	// (0x00024e49) slider_form_pane_vc_g2

0x70dc,	// (0x00024e52) slider_form_pane_vc_g3

0x70ca,	// (0x00024e40) slider_form_pane_vc_g4

0x7274,	// (0x00024fea) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0002d836) slider_form_pane_vc_g

0x4444,	// (0x000221ba) main_idle_act3_pane

0xc4cf,	// (0x0002a245) ai3_links_pane

0xc4d8,	// (0x0002a24e) popup_ai3_data_window_ParamLimits

0xc4d8,	// (0x0002a24e) popup_ai3_data_window

0x4444,	// (0x000221ba) grid_ai3_links_pane

0xc4f0,	// (0x0002a266) cell_ai3_links_pane_ParamLimits

0xc4f0,	// (0x0002a266) cell_ai3_links_pane

0xc508,	// (0x0002a27e) bg_popup_sub_pane_cp11

0xc515,	// (0x0002a28b) cell_ai3_links_pane_g1

0x4444,	// (0x000221ba) bg_popup_sub_pane_cp12

0xc53a,	// (0x0002a2b0) heading_ai3_data_pane

0xc542,	// (0x0002a2b8) list_ai3_gene_pane

0xc54e,	// (0x0002a2c4) popup_ai3_data_window_g1

0xc556,	// (0x0002a2cc) heading_ai3_data_pane_g1

0xc55e,	// (0x0002a2d4) heading_ai3_data_pane_t1

0xc56c,	// (0x0002a2e2) list_double_ai3_gene_pane_ParamLimits

0xc56c,	// (0x0002a2e2) list_double_ai3_gene_pane

0xc579,	// (0x0002a2ef) list_single_ai3_gene_pane_ParamLimits

0xc579,	// (0x0002a2ef) list_single_ai3_gene_pane

0xa658,	// (0x000283ce) list_highlight_pane_cp7_ParamLimits

0xa658,	// (0x000283ce) list_highlight_pane_cp7

0xc586,	// (0x0002a2fc) list_single_a13_gene_pane_t1_ParamLimits

0xc586,	// (0x0002a2fc) list_single_a13_gene_pane_t1

0xc59d,	// (0x0002a313) list_single_ai3_gene_pane_g1

0xc5a6,	// (0x0002a31c) list_single_ai3_gene_pane_g2

0x0001,

0xfcf3,	// (0x0002da69) list_single_ai3_gene_pane_g

0xc5ae,	// (0x0002a324) list_double_ai3_gene_pane_g1_ParamLimits

0xc5ae,	// (0x0002a324) list_double_ai3_gene_pane_g1

0xc5ba,	// (0x0002a330) list_double_ai3_gene_pane_t1_ParamLimits

0xc5ba,	// (0x0002a330) list_double_ai3_gene_pane_t1

0xc5d6,	// (0x0002a34c) list_double_ai3_gene_pane_t2_ParamLimits

0xc5d6,	// (0x0002a34c) list_double_ai3_gene_pane_t2

0xc5eb,	// (0x0002a361) list_double_ai3_gene_pane_t3_ParamLimits

0xc5eb,	// (0x0002a361) list_double_ai3_gene_pane_t3

0x0002,

0xfcf8,	// (0x0002da6e) list_double_ai3_gene_pane_t_ParamLimits

0xfcf8,	// (0x0002da6e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec86,	// (0x0002c9fc) aid_size_min_col_2

0xc499,	// (0x0002a20f) aid_size_min_msg_ParamLimits

0xc499,	// (0x0002a20f) aid_size_min_msg

0xac87,	// (0x000289fd) fep_vkb_top_text_pane_g2_ParamLimits

0xac87,	// (0x000289fd) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0002d8d5) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0002d8d5) fep_vkb_top_text_pane_g

0x4444,	// (0x000221ba) main_hc_apps_shell_pane

0xc608,	// (0x0002a37e) grid_hc_apps_pane_ParamLimits

0xc608,	// (0x0002a37e) grid_hc_apps_pane

0xc617,	// (0x0002a38d) list_hc_apps_pane

0xc61f,	// (0x0002a395) scroll_pane_cp37_ParamLimits

0xc61f,	// (0x0002a395) scroll_pane_cp37

0xc62b,	// (0x0002a3a1) cell_hc_apps_pane_ParamLimits

0xc62b,	// (0x0002a3a1) cell_hc_apps_pane

0xc6db,	// (0x0002a451) cell_hc_apps_pane_g1_ParamLimits

0xc6db,	// (0x0002a451) cell_hc_apps_pane_g1

0xc70c,	// (0x0002a482) cell_hc_apps_pane_g2_ParamLimits

0xc70c,	// (0x0002a482) cell_hc_apps_pane_g2

0xc728,	// (0x0002a49e) cell_hc_apps_pane_g3_ParamLimits

0xc728,	// (0x0002a49e) cell_hc_apps_pane_g3

0x0002,

0xfcff,	// (0x0002da75) cell_hc_apps_pane_g_ParamLimits

0xfcff,	// (0x0002da75) cell_hc_apps_pane_g

0xc74a,	// (0x0002a4c0) cell_hc_apps_pane_t1_ParamLimits

0xc74a,	// (0x0002a4c0) cell_hc_apps_pane_t1

0x45e7,	// (0x0002235d) grid_highlight_pane_cp10_ParamLimits

0x45e7,	// (0x0002235d) grid_highlight_pane_cp10

0xc78a,	// (0x0002a500) list_single_hc_apps_pane_ParamLimits

0xc78a,	// (0x0002a500) list_single_hc_apps_pane

0xc7fd,	// (0x0002a573) list_single_hc_apps_pane_g1

0xed6e,	// (0x0002cae4) list_single_hc_apps_pane_g2

0x0001,

0xfd06,	// (0x0002da7c) list_single_hc_apps_pane_g

0xed87,	// (0x0002cafd) list_single_hc_apps_pane_g2_copy1

0xeda3,	// (0x0002cb19) list_single_hc_apps_pane_t1

0x44b4,	// (0x0002222a) bg_set_opt_pane_cp_ParamLimits

0x8591,	// (0x00026307) setting_slider_pane_t1_ParamLimits

0x85aa,	// (0x00026320) setting_slider_pane_t2_ParamLimits

0x85c3,	// (0x00026339) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002d318) setting_slider_pane_t_ParamLimits

0x85da,	// (0x00026350) slider_set_pane_ParamLimits

0x8f91,	// (0x00026d07) control_pane_g5_ParamLimits

0x8f91,	// (0x00026d07) control_pane_g5

0x6b83,	// (0x000248f9) slider_set_pane_g1_ParamLimits

0x9e5e,	// (0x00027bd4) slider_set_pane_g2_ParamLimits

0x9e6a,	// (0x00027be0) slider_set_pane_g3_ParamLimits

0x9e7e,	// (0x00027bf4) slider_set_pane_g4_ParamLimits

0x9e96,	// (0x00027c0c) slider_set_pane_g5_ParamLimits

0x9e6a,	// (0x00027be0) slider_set_pane_g6_ParamLimits

0x9eac,	// (0x00027c22) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0002d709) slider_set_pane_g_ParamLimits

0x53bb,	// (0x00023131) navi_icon_text_pane_ParamLimits

0x9553,	// (0x000272c9) aid_fill_nsta_2_ParamLimits

0x957d,	// (0x000272f3) aid_touch_tab_arrow_left_ParamLimits

0x958c,	// (0x00027302) aid_touch_tab_arrow_right_ParamLimits

0x95f9,	// (0x0002736f) clock_nsta_pane_ParamLimits

0x9cff,	// (0x00027a75) navi_icon_pane_g1_ParamLimits

0x9d0e,	// (0x00027a84) navi_text_pane_t1_ParamLimits

0xa37d,	// (0x000280f3) navi_icon_text_pane_g1_ParamLimits

0xa38c,	// (0x00028102) navi_icon_text_pane_t1_ParamLimits

0xc7fd,	// (0x0002a573) list_single_hc_apps_pane_g1_ParamLimits

0xed6e,	// (0x0002cae4) list_single_hc_apps_pane_g2_ParamLimits

0xfd06,	// (0x0002da7c) list_single_hc_apps_pane_g_ParamLimits

0xed87,	// (0x0002cafd) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeda3,	// (0x0002cb19) list_single_hc_apps_pane_t1_ParamLimits

0x83e5,	// (0x0002615b) popup_toolbar2_fixed_window_ParamLimits

0x83e5,	// (0x0002615b) popup_toolbar2_fixed_window

0x94c6,	// (0x0002723c) popup_toolbar2_float_window

0x4444,	// (0x000221ba) bg_popup_sub_pane_cp27

0xc816,	// (0x0002a58c) grid_toolbar2_float_pane

0x4444,	// (0x000221ba) bg_popup_sub_pane_cp26

0xc816,	// (0x0002a58c) grid_toolbar2_fixed_pane

0xc81e,	// (0x0002a594) cell_toolbar2_fixed_pane_ParamLimits

0xc81e,	// (0x0002a594) cell_toolbar2_fixed_pane

0xc82f,	// (0x0002a5a5) cell_toolbar2_fixed_pane_g1

0xc838,	// (0x0002a5ae) toolbar2_fixed_button_pane

0x5a85,	// (0x000237fb) toolbar2_fixed_button_pane_g1

0x5a8d,	// (0x00023803) toolbar2_fixed_button_pane_g2

0x5a95,	// (0x0002380b) toolbar2_fixed_button_pane_g3

0x5a9d,	// (0x00023813) toolbar2_fixed_button_pane_g4

0x5aa5,	// (0x0002381b) toolbar2_fixed_button_pane_g5

0x5aad,	// (0x00023823) toolbar2_fixed_button_pane_g6

0x5ab5,	// (0x0002382b) toolbar2_fixed_button_pane_g7

0x5abd,	// (0x00023833) toolbar2_fixed_button_pane_g8

0x5ac5,	// (0x0002383b) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0002d60b) toolbar2_fixed_button_pane_g

0xc840,	// (0x0002a5b6) cell_toolbar2_float_pane_ParamLimits

0xc840,	// (0x0002a5b6) cell_toolbar2_float_pane

0xc851,	// (0x0002a5c7) cell_toolbar2_float_pane_g1

0xc838,	// (0x0002a5ae) toolbar2_fixed_button_pane_cp

0xa9dc,	// (0x00028752) fep_vkb_accented_list_pane_ParamLimits

0xa9dc,	// (0x00028752) fep_vkb_accented_list_pane

0xae82,	// (0x00028bf8) bg_popup_fep_shadow_pane_g9

0x553d,	// (0x000232b3) bg_popup_fep_shadow_pane_cp3

0x4c01,	// (0x00022977) list_accented_list_pane

0xc85a,	// (0x0002a5d0) list_single_accented_list_pane_ParamLimits

0xc85a,	// (0x0002a5d0) list_single_accented_list_pane

0x553d,	// (0x000232b3) list_highlight_pane_cp10

0xc86b,	// (0x0002a5e1) list_single_accented_list_pane_t1

0x941e,	// (0x00027194) popup_slider_window_ParamLimits

0x941e,	// (0x00027194) popup_slider_window

0xc490,	// (0x0002a206) aid_indentation_list_msg

0xc925,	// (0x0002a69b) bg_popup_window_pane_cp19

0xc98f,	// (0x0002a705) popup_slider_window_g1

0xc9ab,	// (0x0002a721) popup_slider_window_g2

0xc9c7,	// (0x0002a73d) popup_slider_window_g3

0x0005,

0xfd0b,	// (0x0002da81) popup_slider_window_g

0xca23,	// (0x0002a799) popup_slider_window_t1

0xca97,	// (0x0002a80d) small_volume_slider_vertical_pane

0xa693,	// (0x00028409) small_volume_slider_vertical_pane_g1

0xa693,	// (0x00028409) small_volume_slider_vertical_pane_g2

0xcab3,	// (0x0002a829) small_volume_slider_vertical_pane_g3

0x0002,

0xfd1d,	// (0x0002da93) small_volume_slider_vertical_pane_g

0x81ab,	// (0x00025f21) area_side_right_pane_ParamLimits

0x81ab,	// (0x00025f21) area_side_right_pane

0xb17d,	// (0x00028ef3) aid_size_side_button_ParamLimits

0xb17d,	// (0x00028ef3) aid_size_side_button

0xb191,	// (0x00028f07) grid_sctrl_middle_pane_ParamLimits

0xb191,	// (0x00028f07) grid_sctrl_middle_pane

0xb1b1,	// (0x00028f27) sctrl_sk_bottom_pane

0xb1c2,	// (0x00028f38) sctrl_sk_top_pane

0xb1d4,	// (0x00028f4a) aid_touch_sctrl_top

0xb1e1,	// (0x00028f57) bg_sctrl_sk_pane_ParamLimits

0xb1e1,	// (0x00028f57) bg_sctrl_sk_pane

0xb1ef,	// (0x00028f65) sctrl_sk_top_pane_g1

0xb1fc,	// (0x00028f72) sctrl_sk_top_pane_t1

0xb1d4,	// (0x00028f4a) aid_touch_sctrl_bottom

0xb1e1,	// (0x00028f57) bg_sctrl_sk_pane_cp_ParamLimits

0xb1e1,	// (0x00028f57) bg_sctrl_sk_pane_cp

0xb217,	// (0x00028f8d) sctrl_sk_bottom_pane_g1

0xb1fc,	// (0x00028f72) sctrl_sk_bottom_pane_t1

0xb220,	// (0x00028f96) cell_sctrl_middle_pane_ParamLimits

0xb220,	// (0x00028f96) cell_sctrl_middle_pane

0xb23b,	// (0x00028fb1) aid_touch_sctrl_middle_ParamLimits

0xb23b,	// (0x00028fb1) aid_touch_sctrl_middle

0xb24d,	// (0x00028fc3) bg_sctrl_middle_pane_ParamLimits

0xb24d,	// (0x00028fc3) bg_sctrl_middle_pane

0xaeb0,	// (0x00028c26) cell_sctrl_middle_pane_g1_ParamLimits

0xaeb0,	// (0x00028c26) cell_sctrl_middle_pane_g1

0xb25b,	// (0x00028fd1) cell_sctrl_middle_pane_g2_ParamLimits

0xb25b,	// (0x00028fd1) cell_sctrl_middle_pane_g2

0x0001,

0xfd29,	// (0x0002da9f) cell_sctrl_middle_pane_g_ParamLimits

0xfd29,	// (0x0002da9f) cell_sctrl_middle_pane_g

0x5a85,	// (0x000237fb) bg_sctrl_middle_pane_g1

0x5a95,	// (0x0002380b) bg_sctrl_middle_pane_g2

0x5a8d,	// (0x00023803) bg_sctrl_middle_pane_g3

0x5aa5,	// (0x0002381b) bg_sctrl_middle_pane_g4

0x5a9d,	// (0x00023813) bg_sctrl_middle_pane_g5

0x5aad,	// (0x00023823) bg_sctrl_middle_pane_g6

0x5ab5,	// (0x0002382b) bg_sctrl_middle_pane_g7

0x5ac5,	// (0x0002383b) bg_sctrl_middle_pane_g8

0x0007,

0xfd2e,	// (0x0002daa4) bg_sctrl_middle_pane_g

0x5abd,	// (0x00023833) bg_sctrl_middle_pane_g8_copy1

0x5a85,	// (0x000237fb) bg_sctrl_sk_pane_g1

0x5a8d,	// (0x00023803) bg_sctrl_sk_pane_g2

0x5a95,	// (0x0002380b) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0002d60b) bg_sctrl_sk_pane_g

0x4a34,	// (0x000227aa) aid_size_touch_scroll_bar

0x5a9d,	// (0x00023813) bg_sctrl_sk_pane_g4

0x5aa5,	// (0x0002381b) bg_sctrl_sk_pane_g5

0x5aad,	// (0x00023823) bg_sctrl_sk_pane_g6

0x5ab5,	// (0x0002382b) bg_sctrl_sk_pane_g7

0x5abd,	// (0x00023833) bg_sctrl_sk_pane_g8

0x5ac5,	// (0x0002383b) bg_sctrl_sk_pane_g9

0x57c7,	// (0x0002353d) popup_fep_china_hwr2_fs_candidate_window

0x912c,	// (0x00026ea2) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x912c,	// (0x00026ea2) popup_fep_china_hwr2_fs_control_window

0xaeb0,	// (0x00028c26) sctrl_sk_top_pane_g2

0x0001,

0xfd24,	// (0x0002da9a) sctrl_sk_top_pane_g

0xcabc,	// (0x0002a832) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcabc,	// (0x0002a832) aid_fep_china_hwr2_fs_cell

0xcace,	// (0x0002a844) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcace,	// (0x0002a844) bg_popup_fep_shadow_pane_cp4

0xcae5,	// (0x0002a85b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcae5,	// (0x0002a85b) bg_popup_fep_shadow_pane_cp5

0xcaf7,	// (0x0002a86d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcaf7,	// (0x0002a86d) popup_fep_china_hwr2_fs_control_bar_grid

0xcb07,	// (0x0002a87d) popup_fep_china_hwr2_fs_control_funtion_grid

0xcb0f,	// (0x0002a885) aid_fep_china_hwr2_fs_candi_cell

0x4444,	// (0x000221ba) bg_popup_fep_shadow_pane_cp6

0xcb19,	// (0x0002a88f) popup_fep_china_hwr2_fs_candidate_grid

0xcb23,	// (0x0002a899) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcb23,	// (0x0002a899) cell_fep_china_hwr2_fs_funtion_grid

0xa693,	// (0x00028409) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcb3b,	// (0x0002a8b1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcb3b,	// (0x0002a8b1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcb49,	// (0x0002a8bf) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcb49,	// (0x0002a8bf) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3f,	// (0x0002dab5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3f,	// (0x0002dab5) cell_fep_china_hwr2_fs_funtion_grid_g

0xcb5f,	// (0x0002a8d5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcb5f,	// (0x0002a8d5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcb74,	// (0x0002a8ea) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcb74,	// (0x0002a8ea) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd44,	// (0x0002daba) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd44,	// (0x0002daba) cell_fep_china_hwr2_fs_funtion_grid_t

0xcb90,	// (0x0002a906) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcb98,	// (0x0002a90e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcba0,	// (0x0002a916) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd49,	// (0x0002dabf) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcba8,	// (0x0002a91e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcba8,	// (0x0002a91e) cell_fep_china_hwr2_fs_candidate_grid

0xcbc1,	// (0x0002a937) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcbc9,	// (0x0002a93f) popup_fep_china_hwr2_fs_candidate_grid_g21

0xa693,	// (0x00028409) cell_fep_china_hwr2_fs_candidate_grid_g1

0xa693,	// (0x00028409) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0002d8da) cell_fep_china_hwr2_fs_candidate_grid_g

0xcbd1,	// (0x0002a947) cell_fep_china_hwr2_fs_candidate_grid_t1

0x58d4,	// (0x0002364a) clock_nsta_pane_cp_24_ParamLimits

0x58d4,	// (0x0002364a) clock_nsta_pane_cp_24

0x593c,	// (0x000236b2) indicator_nsta_pane_cp_24_ParamLimits

0x593c,	// (0x000236b2) indicator_nsta_pane_cp_24

0x6641,	// (0x000243b7) heading_pane_g1

0x0001,

0xf8fa,	// (0x0002d670) heading_pane_g

0x6cb7,	// (0x00024a2d) grid_sct_catagory_button_pane

0x6a44,	// (0x000247ba) scroll_pane_cp5_ParamLimits

0x7535,	// (0x000252ab) button_value_adjust_pane_cp5_ParamLimits

0x7535,	// (0x000252ab) button_value_adjust_pane_cp5

0x75f3,	// (0x00025369) form2_midp_time_pane_ParamLimits

0xcbdf,	// (0x0002a955) cell_sct_catagory_button_pane_ParamLimits

0xcbdf,	// (0x0002a955) cell_sct_catagory_button_pane

0xa658,	// (0x000283ce) bg_button_pane_cp01_ParamLimits

0xa658,	// (0x000283ce) bg_button_pane_cp01

0xa693,	// (0x00028409) cell_sct_catagory_button_pane_g1

0x9455,	// (0x000271cb) popup_tb_extension_window

0xcbf1,	// (0x0002a967) aid_size_cell_ext_ParamLimits

0xcbf1,	// (0x0002a967) aid_size_cell_ext

0x45e7,	// (0x0002235d) bg_tb_trans_pane_cp1_ParamLimits

0x45e7,	// (0x0002235d) bg_tb_trans_pane_cp1

0xcc11,	// (0x0002a987) grid_tb_ext_pane_ParamLimits

0xcc11,	// (0x0002a987) grid_tb_ext_pane

0xcc43,	// (0x0002a9b9) cell_tb_ext_pane_ParamLimits

0xcc43,	// (0x0002a9b9) cell_tb_ext_pane

0xcc5a,	// (0x0002a9d0) cell_tb_ext_pane_g1_ParamLimits

0xcc5a,	// (0x0002a9d0) cell_tb_ext_pane_g1

0xcc77,	// (0x0002a9ed) cell_tb_ext_pane_t1

0x45e7,	// (0x0002235d) list_highlight_pane_cp11_ParamLimits

0x45e7,	// (0x0002235d) list_highlight_pane_cp11

0x8404,	// (0x0002617a) popup_uni_indicator_window_ParamLimits

0x8404,	// (0x0002617a) popup_uni_indicator_window

0x4afb,	// (0x00022871) bg_popup_sub_pane_cp14

0xcc92,	// (0x0002aa08) list_uniindi_pane

0xcc9e,	// (0x0002aa14) uniindi_top_pane

0x45e7,	// (0x0002235d) bg_uniindi_top_pane

0xccbd,	// (0x0002aa33) uniindi_top_pane_g1

0xccd3,	// (0x0002aa49) uniindi_top_pane_g2

0x0003,

0xfd50,	// (0x0002dac6) uniindi_top_pane_g

0xccfd,	// (0x0002aa73) uniindi_top_pane_t1

0xcd27,	// (0x0002aa9d) list_single_uniindi_pane_ParamLimits

0xcd27,	// (0x0002aa9d) list_single_uniindi_pane

0xa693,	// (0x00028409) bg_uniindi_top_pane_g1

0xcd39,	// (0x0002aaaf) list_single_uniindi_pane_g1

0xcd4c,	// (0x0002aac2) list_single_uniindi_pane_t1

0x8288,	// (0x00025ffe) control_bg_pane

0xcd71,	// (0x0002aae7) bg_sctrl_sk_pane_cp1

0xcd7a,	// (0x0002aaf0) bg_sctrl_sk_pane_cp2

0xcd83,	// (0x0002aaf9) control_bg_pane_g1

0xcd8c,	// (0x0002ab02) control_bg_pane_g2

0x0001,

0xfd59,	// (0x0002dacf) control_bg_pane_g

0x74a4,	// (0x0002521a) cell_indicator_nsta_pane_g1_ParamLimits

0xa2ac,	// (0x00028022) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0002d84b) cell_indicator_nsta_pane_g_ParamLimits

0xea43,	// (0x0002c7b9) form2_midp_time_pane_t1_ParamLimits

0x4876,	// (0x000225ec) main_idle_act4_pane_ParamLimits

0x4876,	// (0x000225ec) main_idle_act4_pane

0x9455,	// (0x000271cb) popup_tb_extension_window_ParamLimits

0xcc33,	// (0x0002a9a9) tb_ext_find_pane_ParamLimits

0xcc33,	// (0x0002a9a9) tb_ext_find_pane

0xcd95,	// (0x0002ab0b) ai_gene_pane_1_cp1

0x55bf,	// (0x00023335) ai_gene_pane_2_cp1

0xcd9d,	// (0x0002ab13) list_single_idle_plugin_calendar_pane

0xcda6,	// (0x0002ab1c) list_single_idle_plugin_notification_pane

0xcdaf,	// (0x0002ab25) list_single_idle_plugin_player_pane

0xcdb8,	// (0x0002ab2e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcdb8,	// (0x0002ab2e) list_single_idle_plugin_shortcut_pane

0xcdda,	// (0x0002ab50) main_idle_act4_pane_t1

0xcdec,	// (0x0002ab62) main_idle_act4_pane_t2

0x0001,

0xfd5e,	// (0x0002dad4) main_idle_act4_pane_t

0xcdfe,	// (0x0002ab74) middle_sk_idle_act4_pane_ParamLimits

0xcdfe,	// (0x0002ab74) middle_sk_idle_act4_pane

0xce14,	// (0x0002ab8a) popup_clock_digital_analogue_window_cp2

0xce2e,	// (0x0002aba4) shortcut_wheel_idle_act4_pane_ParamLimits

0xce2e,	// (0x0002aba4) shortcut_wheel_idle_act4_pane

0xa693,	// (0x00028409) shortcut_wheel_idle_act4_pane_g1

0xa693,	// (0x00028409) shortcut_wheel_idle_act4_pane_g2

0xa693,	// (0x00028409) shortcut_wheel_idle_act4_pane_g3

0xa693,	// (0x00028409) shortcut_wheel_idle_act4_pane_g4

0xa693,	// (0x00028409) shortcut_wheel_idle_act4_pane_g5

0xce42,	// (0x0002abb8) shortcut_wheel_idle_act4_pane_g6

0xce4a,	// (0x0002abc0) shortcut_wheel_idle_act4_pane_g7

0xce52,	// (0x0002abc8) shortcut_wheel_idle_act4_pane_g8

0xce5a,	// (0x0002abd0) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd63,	// (0x0002dad9) shortcut_wheel_idle_act4_pane_g

0xab33,	// (0x000288a9) middle_sk_idle_act4_pane_g1_ParamLimits

0xab33,	// (0x000288a9) middle_sk_idle_act4_pane_g1

0xcebe,	// (0x0002ac34) middle_sk_idle_act4_pane_g2_ParamLimits

0xcebe,	// (0x0002ac34) middle_sk_idle_act4_pane_g2

0x0001,

0xfd86,	// (0x0002dafc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd86,	// (0x0002dafc) middle_sk_idle_act4_pane_g

0xceca,	// (0x0002ac40) middle_sk_idle_act4_pane_t1_ParamLimits

0xceca,	// (0x0002ac40) middle_sk_idle_act4_pane_t1

0xcee7,	// (0x0002ac5d) grid_ai_shortcut_pane_ParamLimits

0xcee7,	// (0x0002ac5d) grid_ai_shortcut_pane

0xcf00,	// (0x0002ac76) list_highlight_pane_cp16_ParamLimits

0xcf00,	// (0x0002ac76) list_highlight_pane_cp16

0xcf0d,	// (0x0002ac83) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcf0d,	// (0x0002ac83) list_single_idle_plugin_shortcut_pane_g1

0xcf19,	// (0x0002ac8f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcf19,	// (0x0002ac8f) list_single_idle_plugin_shortcut_pane_g2

0xcf31,	// (0x0002aca7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcf31,	// (0x0002aca7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8b,	// (0x0002db01) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8b,	// (0x0002db01) list_single_idle_plugin_shortcut_pane_g

0xcf44,	// (0x0002acba) cell_ai_shortcut_pane_ParamLimits

0xcf44,	// (0x0002acba) cell_ai_shortcut_pane

0xcf65,	// (0x0002acdb) cell_ai_shortcut_pane_g1_ParamLimits

0xcf65,	// (0x0002acdb) cell_ai_shortcut_pane_g1

0xcd95,	// (0x0002ab0b) ai_gene_pane_1_cp2

0xcf87,	// (0x0002acfd) ai_gene_pane_2_cp2

0xcf8f,	// (0x0002ad05) list_highlight_pane_cp15

0xcf98,	// (0x0002ad0e) list_single_idle_plugin_calendar_pane_g1

0xcf8f,	// (0x0002ad05) list_highlight_pane_cp17

0xcfa0,	// (0x0002ad16) list_single_idle_plugin_calendar_pane_g1_copy1

0xcfa8,	// (0x0002ad1e) list_single_idle_plugin_player_pane_g1

0x6ecc,	// (0x00024c42) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd92,	// (0x0002db08) list_single_idle_plugin_player_pane_g

0xcfb0,	// (0x0002ad26) list_single_idle_plugin_player_pane_t1

0xcfbe,	// (0x0002ad34) list_single_idle_plugin_player_pane_t2

0xcfcc,	// (0x0002ad42) list_single_idle_plugin_player_pane_t3

0xcfda,	// (0x0002ad50) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd97,	// (0x0002db0d) list_single_idle_plugin_player_pane_t

0xcfe8,	// (0x0002ad5e) wait_bar_pane_cp15

0xcff0,	// (0x0002ad66) grid_ai_notification_pane

0x6ecc,	// (0x00024c42) list_single_idle_plugin_notification_pane_g1

0xcff9,	// (0x0002ad6f) cell_ai_notification_pane_ParamLimits

0xcff9,	// (0x0002ad6f) cell_ai_notification_pane

0xd006,	// (0x0002ad7c) cell_ai_notification_pane_g1

0xd00e,	// (0x0002ad84) cell_ai_notification_pane_t1

0xd01c,	// (0x0002ad92) tb_ext_find_button_pane

0xd024,	// (0x0002ad9a) tb_ext_find_pane_g1

0xd02c,	// (0x0002ada2) tb_ext_find_pane_t1

0x502e,	// (0x00022da4) tb_ext_find_button_pane_g1

0xd03a,	// (0x0002adb0) tb_ext_find_button_pane_g2

0x0001,

0xfda0,	// (0x0002db16) tb_ext_find_button_pane_g

0xcdda,	// (0x0002ab50) main_idle_act4_pane_t1_ParamLimits

0xcdec,	// (0x0002ab62) main_idle_act4_pane_t2_ParamLimits

0xfd5e,	// (0x0002dad4) main_idle_act4_pane_t_ParamLimits

0xce14,	// (0x0002ab8a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xce22,	// (0x0002ab98) sat_plugin_idle_act4_pane_ParamLimits

0xce22,	// (0x0002ab98) sat_plugin_idle_act4_pane

0xd043,	// (0x0002adb9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd043,	// (0x0002adb9) sat_plugin_idle_act4_pane_t1

0xd056,	// (0x0002adcc) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd056,	// (0x0002adcc) sat_plugin_idle_act4_pane_t2

0xd069,	// (0x0002addf) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd069,	// (0x0002addf) sat_plugin_idle_act4_pane_t3

0xd07c,	// (0x0002adf2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd07c,	// (0x0002adf2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda5,	// (0x0002db1b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda5,	// (0x0002db1b) sat_plugin_idle_act4_pane_t

0x834d,	// (0x000260c3) popup_battery_window_ParamLimits

0x834d,	// (0x000260c3) popup_battery_window

0x45e7,	// (0x0002235d) bg_popup_sub_pane_cp25_ParamLimits

0x45e7,	// (0x0002235d) bg_popup_sub_pane_cp25

0xd08f,	// (0x0002ae05) popup_battery_window_g1_ParamLimits

0xd08f,	// (0x0002ae05) popup_battery_window_g1

0xd09b,	// (0x0002ae11) popup_battery_window_t1_ParamLimits

0xd09b,	// (0x0002ae11) popup_battery_window_t1

0xd0ad,	// (0x0002ae23) popup_battery_window_t2_ParamLimits

0xd0ad,	// (0x0002ae23) popup_battery_window_t2

0x0001,

0xfdae,	// (0x0002db24) popup_battery_window_t_ParamLimits

0xfdae,	// (0x0002db24) popup_battery_window_t

0x8dc2,	// (0x00026b38) midp_canvas_pane_ParamLimits

0x8e26,	// (0x00026b9c) midp_keypad_pane_ParamLimits

0x8e26,	// (0x00026b9c) midp_keypad_pane

0x4c52,	// (0x000229c8) main_midp_pane_ParamLimits

0x74e8,	// (0x0002525e) signal_pane_g2_cp_ParamLimits

0xd0ca,	// (0x0002ae40) aid_size_cell_midp_keypad_ParamLimits

0xd0ca,	// (0x0002ae40) aid_size_cell_midp_keypad

0xd0e4,	// (0x0002ae5a) midp_keyp_game_grid_pane_ParamLimits

0xd0e4,	// (0x0002ae5a) midp_keyp_game_grid_pane

0xd104,	// (0x0002ae7a) midp_keyp_rocker_pane_ParamLimits

0xd104,	// (0x0002ae7a) midp_keyp_rocker_pane

0xd13d,	// (0x0002aeb3) midp_keyp_sk_left_pane_ParamLimits

0xd13d,	// (0x0002aeb3) midp_keyp_sk_left_pane

0xd197,	// (0x0002af0d) midp_keyp_sk_right_pane_ParamLimits

0xd197,	// (0x0002af0d) midp_keyp_sk_right_pane

0x4444,	// (0x000221ba) bg_button_pane_cp03

0xd1f1,	// (0x0002af67) midp_keyp_sk_left_pane_g1

0x4444,	// (0x000221ba) bg_button_pane_cp04

0xd1f1,	// (0x0002af67) midp_keyp_sk_right_pane_g1

0xa693,	// (0x00028409) midp_keyp_rocker_pane_g1

0xd1fa,	// (0x0002af70) keyp_game_cell_pane_ParamLimits

0xd1fa,	// (0x0002af70) keyp_game_cell_pane

0x4444,	// (0x000221ba) bg_button_pane_cp02

0xd20d,	// (0x0002af83) keyp_game_cell_pane_g1

0x8383,	// (0x000260f9) popup_fep_vkb2_window_ParamLimits

0x8383,	// (0x000260f9) popup_fep_vkb2_window

0xb27d,	// (0x00028ff3) aid_size_cell_vkb2_ParamLimits

0xb27d,	// (0x00028ff3) aid_size_cell_vkb2

0xb2d1,	// (0x00029047) popup_fep_vkb2_window_g1_ParamLimits

0xb2d1,	// (0x00029047) popup_fep_vkb2_window_g1

0xb311,	// (0x00029087) vkb2_area_bottom_pane_ParamLimits

0xb311,	// (0x00029087) vkb2_area_bottom_pane

0xb35d,	// (0x000290d3) vkb2_area_keypad_pane_ParamLimits

0xb35d,	// (0x000290d3) vkb2_area_keypad_pane

0xb39f,	// (0x00029115) vkb2_area_top_pane_ParamLimits

0xb39f,	// (0x00029115) vkb2_area_top_pane

0xb419,	// (0x0002918f) vkb2_top_entry_pane_ParamLimits

0xb419,	// (0x0002918f) vkb2_top_entry_pane

0xb443,	// (0x000291b9) vkb2_top_grid_left_pane_ParamLimits

0xb443,	// (0x000291b9) vkb2_top_grid_left_pane

0xb461,	// (0x000291d7) vkb2_top_grid_right_pane_ParamLimits

0xb461,	// (0x000291d7) vkb2_top_grid_right_pane

0xb47f,	// (0x000291f5) vkb2_cell_keypad_pane_ParamLimits

0xb47f,	// (0x000291f5) vkb2_cell_keypad_pane

0xb550,	// (0x000292c6) vkb2_area_bottom_grid_pane_ParamLimits

0xb550,	// (0x000292c6) vkb2_area_bottom_grid_pane

0xb576,	// (0x000292ec) vkb2_area_bottom_pane_g1_ParamLimits

0xb576,	// (0x000292ec) vkb2_area_bottom_pane_g1

0xb59a,	// (0x00029310) vkb2_area_bottom_pane_g2_ParamLimits

0xb59a,	// (0x00029310) vkb2_area_bottom_pane_g2

0xb5c8,	// (0x0002933e) vkb2_area_bottom_pane_g3_ParamLimits

0xb5c8,	// (0x0002933e) vkb2_area_bottom_pane_g3

0x0002,

0xfdb3,	// (0x0002db29) vkb2_area_bottom_pane_g_ParamLimits

0xfdb3,	// (0x0002db29) vkb2_area_bottom_pane_g

0xb629,	// (0x0002939f) vkb2_top_cell_left_pane_ParamLimits

0xb629,	// (0x0002939f) vkb2_top_cell_left_pane

0xedef,	// (0x0002cb65) vkb2_top_entry_pane_g1_ParamLimits

0xedef,	// (0x0002cb65) vkb2_top_entry_pane_g1

0xedfd,	// (0x0002cb73) vkb2_top_entry_pane_t1_ParamLimits

0xedfd,	// (0x0002cb73) vkb2_top_entry_pane_t1

0xd21e,	// (0x0002af94) vkb2_top_entry_pane_t2_ParamLimits

0xd21e,	// (0x0002af94) vkb2_top_entry_pane_t2

0xd250,	// (0x0002afc6) vkb2_top_entry_pane_t3_ParamLimits

0xd250,	// (0x0002afc6) vkb2_top_entry_pane_t3

0x0002,

0xfdba,	// (0x0002db30) vkb2_top_entry_pane_t_ParamLimits

0xfdba,	// (0x0002db30) vkb2_top_entry_pane_t

0xb676,	// (0x000293ec) vkb2_top_grid_right_pane_g1_ParamLimits

0xb676,	// (0x000293ec) vkb2_top_grid_right_pane_g1

0xb68c,	// (0x00029402) vkb2_top_grid_right_pane_g2_ParamLimits

0xb68c,	// (0x00029402) vkb2_top_grid_right_pane_g2

0xb6a4,	// (0x0002941a) vkb2_top_grid_right_pane_g3_ParamLimits

0xb6a4,	// (0x0002941a) vkb2_top_grid_right_pane_g3

0xb6bc,	// (0x00029432) vkb2_top_grid_right_pane_g4_ParamLimits

0xb6bc,	// (0x00029432) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc1,	// (0x0002db37) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc1,	// (0x0002db37) vkb2_top_grid_right_pane_g

0xb6d2,	// (0x00029448) vkb2_top_cell_left_pane_g1

0xb6e9,	// (0x0002945f) vkb2_cell_keypad_pane_g1_ParamLimits

0xb6e9,	// (0x0002945f) vkb2_cell_keypad_pane_g1

0xd274,	// (0x0002afea) vkb2_cell_keypad_pane_t1_ParamLimits

0xd274,	// (0x0002afea) vkb2_cell_keypad_pane_t1

0xb6f7,	// (0x0002946d) vkb2_cell_bottom_grid_pane_ParamLimits

0xb6f7,	// (0x0002946d) vkb2_cell_bottom_grid_pane

0xb730,	// (0x000294a6) vkb2_cell_bottom_grid_pane_g1

0xce62,	// (0x0002abd8) aid_call2_pane_cp02

0xce6a,	// (0x0002abe0) aid_call_pane_cp02

0xce72,	// (0x0002abe8) clock_digital_number_pane_cp10

0xce7a,	// (0x0002abf0) clock_digital_number_pane_cp11

0xce82,	// (0x0002abf8) clock_digital_number_pane_cp12

0xce8a,	// (0x0002ac00) clock_digital_number_pane_cp13

0xce92,	// (0x0002ac08) clock_digital_separator_pane_cp10

0x502e,	// (0x00022da4) popup_clock_digital_analogue_window_cp2_g1

0x502e,	// (0x00022da4) popup_clock_digital_analogue_window_cp2_g2

0xce9a,	// (0x0002ac10) popup_clock_digital_analogue_window_cp2_g3

0x502e,	// (0x00022da4) popup_clock_digital_analogue_window_cp2_g4

0xce9a,	// (0x0002ac10) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd76,	// (0x0002daec) popup_clock_digital_analogue_window_cp2_g

0xcea2,	// (0x0002ac18) popup_clock_digital_analogue_window_cp2_t1

0xceb0,	// (0x0002ac26) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd81,	// (0x0002daf7) popup_clock_digital_analogue_window_cp2_t

0xa693,	// (0x00028409) clock_digital_number_pane_cp10_g1

0xa693,	// (0x00028409) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002d8da) clock_digital_number_pane_cp10_g

0xa693,	// (0x00028409) clock_digital_separator_pane_cp10_g1

0xa693,	// (0x00028409) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0002d8da) clock_digital_separator_pane_cp10_g

0xccdf,	// (0x0002aa55) uniindi_top_pane_g3

0xccf0,	// (0x0002aa66) uniindi_top_pane_g4

0xb50a,	// (0x00029280) vkb2_row_keypad_pane_ParamLimits

0xb50a,	// (0x00029280) vkb2_row_keypad_pane

0xb750,	// (0x000294c6) vkb2_cell_t_keypad_pane_ParamLimits

0xb750,	// (0x000294c6) vkb2_cell_t_keypad_pane

0xb760,	// (0x000294d6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb760,	// (0x000294d6) vkb2_cell_t_keypad_pane_cp08

0xb773,	// (0x000294e9) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb773,	// (0x000294e9) vkb2_cell_t_keypad_pane_cp09

0xb787,	// (0x000294fd) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb787,	// (0x000294fd) vkb2_cell_t_keypad_pane_cp01

0xb798,	// (0x0002950e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb798,	// (0x0002950e) vkb2_cell_t_keypad_pane_cp02

0xb7a9,	// (0x0002951f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb7a9,	// (0x0002951f) vkb2_cell_t_keypad_pane_cp03

0xb7ba,	// (0x00029530) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb7ba,	// (0x00029530) vkb2_cell_t_keypad_pane_cp04

0xb7cb,	// (0x00029541) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb7cb,	// (0x00029541) vkb2_cell_t_keypad_pane_cp05

0xb7dc,	// (0x00029552) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb7dc,	// (0x00029552) vkb2_cell_t_keypad_pane_cp06

0xb7ed,	// (0x00029563) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb7ed,	// (0x00029563) vkb2_cell_t_keypad_pane_cp07

0xb7fe,	// (0x00029574) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb7fe,	// (0x00029574) vkb2_cell_t_keypad_pane_cp10

0xaeb0,	// (0x00028c26) vkb2_cell_t_keypad_pane_g1

0xd28b,	// (0x0002b001) vkb2_cell_t_keypad_pane_t1

0x8288,	// (0x00025ffe) popup_grid_graphic2_window

0xee2f,	// (0x0002cba5) aid_size_cell_graphic2_ParamLimits

0xee2f,	// (0x0002cba5) aid_size_cell_graphic2

0xb813,	// (0x00029589) bg_popup_window_pane_cp21_ParamLimits

0xb813,	// (0x00029589) bg_popup_window_pane_cp21

0xee5b,	// (0x0002cbd1) graphic2_pages_pane_ParamLimits

0xee5b,	// (0x0002cbd1) graphic2_pages_pane

0xeea1,	// (0x0002cc17) grid_graphic2_control_pane_ParamLimits

0xeea1,	// (0x0002cc17) grid_graphic2_control_pane

0xeecf,	// (0x0002cc45) grid_graphic2_pane_ParamLimits

0xeecf,	// (0x0002cc45) grid_graphic2_pane

0xef2f,	// (0x0002cca5) cell_graphic2_pane

0x4444,	// (0x000221ba) main_comp_mode_pane

0xc542,	// (0x0002a2b8) list_ai3_gene_pane_ParamLimits

0xc925,	// (0x0002a69b) bg_popup_window_pane_cp19_ParamLimits

0xc931,	// (0x0002a6a7) bg_touch_area_indi_pane_ParamLimits

0xc931,	// (0x0002a6a7) bg_touch_area_indi_pane

0xc947,	// (0x0002a6bd) bg_touch_area_indi_pane_cp01_ParamLimits

0xc947,	// (0x0002a6bd) bg_touch_area_indi_pane_cp01

0xc95d,	// (0x0002a6d3) bg_touch_area_indi_pane_cp02_ParamLimits

0xc95d,	// (0x0002a6d3) bg_touch_area_indi_pane_cp02

0xc975,	// (0x0002a6eb) bg_touch_area_indi_pane_cp03_ParamLimits

0xc975,	// (0x0002a6eb) bg_touch_area_indi_pane_cp03

0xc98f,	// (0x0002a705) popup_slider_window_g1_ParamLimits

0xc9ab,	// (0x0002a721) popup_slider_window_g2_ParamLimits

0xc9c7,	// (0x0002a73d) popup_slider_window_g3_ParamLimits

0xfd0b,	// (0x0002da81) popup_slider_window_g_ParamLimits

0xca23,	// (0x0002a799) popup_slider_window_t1_ParamLimits

0xca97,	// (0x0002a80d) small_volume_slider_vertical_pane_ParamLimits

0xef2f,	// (0x0002cca5) cell_graphic2_pane_ParamLimits

0xef7e,	// (0x0002ccf4) bg_button_pane_cp10_ParamLimits

0xef7e,	// (0x0002ccf4) bg_button_pane_cp10

0xef91,	// (0x0002cd07) bg_button_pane_cp11_ParamLimits

0xef91,	// (0x0002cd07) bg_button_pane_cp11

0xefa4,	// (0x0002cd1a) graphic2_pages_pane_g1_ParamLimits

0xefa4,	// (0x0002cd1a) graphic2_pages_pane_g1

0xefbf,	// (0x0002cd35) graphic2_pages_pane_g2_ParamLimits

0xefbf,	// (0x0002cd35) graphic2_pages_pane_g2

0x0001,

0xfdcf,	// (0x0002db45) graphic2_pages_pane_g_ParamLimits

0xfdcf,	// (0x0002db45) graphic2_pages_pane_g

0xefd7,	// (0x0002cd4d) graphic2_pages_pane_t1_ParamLimits

0xefd7,	// (0x0002cd4d) graphic2_pages_pane_t1

0xefed,	// (0x0002cd63) cell_graphic2_control_pane_ParamLimits

0xefed,	// (0x0002cd63) cell_graphic2_control_pane

0xf007,	// (0x0002cd7d) cell_graphic2_pane_g1_ParamLimits

0xf007,	// (0x0002cd7d) cell_graphic2_pane_g1

0xf014,	// (0x0002cd8a) cell_graphic2_pane_g2_ParamLimits

0xf014,	// (0x0002cd8a) cell_graphic2_pane_g2

0xf021,	// (0x0002cd97) cell_graphic2_pane_g3_ParamLimits

0xf021,	// (0x0002cd97) cell_graphic2_pane_g3

0xf02e,	// (0x0002cda4) cell_graphic2_pane_g4_ParamLimits

0xf02e,	// (0x0002cda4) cell_graphic2_pane_g4

0xf03b,	// (0x0002cdb1) cell_graphic2_pane_g5_ParamLimits

0xf03b,	// (0x0002cdb1) cell_graphic2_pane_g5

0x0004,

0xfdd4,	// (0x0002db4a) cell_graphic2_pane_g_ParamLimits

0xfdd4,	// (0x0002db4a) cell_graphic2_pane_g

0xf056,	// (0x0002cdcc) cell_graphic2_pane_t1_ParamLimits

0xf056,	// (0x0002cdcc) cell_graphic2_pane_t1

0x5b75,	// (0x000238eb) grid_highlight_pane_cp11_ParamLimits

0x5b75,	// (0x000238eb) grid_highlight_pane_cp11

0x4afb,	// (0x00022871) bg_button_pane_cp05

0xf06c,	// (0x0002cde2) cell_graphic2_control_pane_g1

0xa693,	// (0x00028409) bg_touch_area_indi_pane_g1

0xd29d,	// (0x0002b013) aid_cmod_rocker_key_size

0xd2a7,	// (0x0002b01d) aid_cmode_itu_key_size

0xd2b1,	// (0x0002b027) main_cmode_video_pane

0xd2bb,	// (0x0002b031) main_comp_mode_itu_pane

0xd2c7,	// (0x0002b03d) main_comp_mode_rocker_pane

0xd2d3,	// (0x0002b049) cell_cmode_rocker_pane_ParamLimits

0xd2d3,	// (0x0002b049) cell_cmode_rocker_pane

0xd2e5,	// (0x0002b05b) cell_cmode_itu_pane_ParamLimits

0xd2e5,	// (0x0002b05b) cell_cmode_itu_pane

0x4afb,	// (0x00022871) bg_button_pane_cp06_ParamLimits

0x4afb,	// (0x00022871) bg_button_pane_cp06

0xab33,	// (0x000288a9) cell_cmode_rocker_pane_g1_ParamLimits

0xab33,	// (0x000288a9) cell_cmode_rocker_pane_g1

0xcb3b,	// (0x0002a8b1) cell_cmode_rocker_pane_g2_ParamLimits

0xcb3b,	// (0x0002a8b1) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x0002db55) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x0002db55) cell_cmode_rocker_pane_g

0x4444,	// (0x000221ba) bg_button_pane_cp07

0xd2fa,	// (0x0002b070) cell_cmode_itu_pane_g1

0xd303,	// (0x0002b079) cell_cmode_itu_pane_t1

0xd311,	// (0x0002b087) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x0002db5a) cell_cmode_itu_pane_t

0xcd61,	// (0x0002aad7) aid_touch_ctrl_left

0xcd69,	// (0x0002aadf) aid_touch_ctrl_right

0x4444,	// (0x000221ba) compa_mode_pane

0xf079,	// (0x0002cdef) aid_cmod_rocker_key_size_cp

0xf083,	// (0x0002cdf9) aid_cmode_itu_key_size_cp

0xd31f,	// (0x0002b095) compa_mode_pane_g1

0xd327,	// (0x0002b09d) compa_mode_pane_g2

0xd32f,	// (0x0002b0a5) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x0002db5f) compa_mode_pane_g

0xf08d,	// (0x0002ce03) main_comp_mode_itu_pane_cp

0xf095,	// (0x0002ce0b) main_comp_mode_rocker_pane_cp

0xf09d,	// (0x0002ce13) cell_cmode_itu_pane_cp_ParamLimits

0xf09d,	// (0x0002ce13) cell_cmode_itu_pane_cp

0xf0b2,	// (0x0002ce28) cell_cmode_rocker_pane_cp_ParamLimits

0xf0b2,	// (0x0002ce28) cell_cmode_rocker_pane_cp

0x4afb,	// (0x00022871) bg_button_pane_cp06_cp_ParamLimits

0x4afb,	// (0x00022871) bg_button_pane_cp06_cp

0xab33,	// (0x000288a9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xab33,	// (0x000288a9) cell_cmode_rocker_pane_g1_cp

0xa693,	// (0x00028409) cell_cmode_rocker_pane_g2_cp

0x4444,	// (0x000221ba) bg_button_pane_cp07_cp

0xf0c4,	// (0x0002ce3a) cell_cmode_itu_pane_g1_cp

0xf0cd,	// (0x0002ce43) cell_cmode_itu_pane_t1_cp

0xf0cd,	// (0x0002ce43) cell_cmode_itu_pane_t2_cp

0xa00b,	// (0x00027d81) settings_code_pane_cp2

0x44b4,	// (0x0002222a) bg_popup_window_pane_cp3_ParamLimits

0x47b5,	// (0x0002252b) heading_pane_cp3_ParamLimits

0x47c1,	// (0x00022537) listscroll_popup_graphic_pane_ParamLimits

0xa711,	// (0x00028487) fep_hwr_aid_pane_ParamLimits

0xb1d4,	// (0x00028f4a) aid_touch_sctrl_top_ParamLimits

0xb1ef,	// (0x00028f65) sctrl_sk_top_pane_g1_ParamLimits

0xaeb0,	// (0x00028c26) sctrl_sk_top_pane_g2_ParamLimits

0xfd24,	// (0x0002da9a) sctrl_sk_top_pane_g_ParamLimits

0xb1fc,	// (0x00028f72) sctrl_sk_top_pane_t1_ParamLimits

0xb1d4,	// (0x00028f4a) aid_touch_sctrl_bottom_ParamLimits

0xb1fc,	// (0x00028f72) sctrl_sk_bottom_pane_t1_ParamLimits

0xccab,	// (0x0002aa21) aid_area_touch_clock

0xb3e1,	// (0x00029157) aid_vkb2_area_top_pane_cell_ParamLimits

0xb3e1,	// (0x00029157) aid_vkb2_area_top_pane_cell

0xb52c,	// (0x000292a2) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb52c,	// (0x000292a2) aid_vkb2_area_bottom_pane_cell

0xd216,	// (0x0002af8c) popup_char_count_window

0xd337,	// (0x0002b0ad) popup_char_count_window_g1

0xd340,	// (0x0002b0b6) popup_char_count_window_g2

0xd349,	// (0x0002b0bf) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x0002db66) popup_char_count_window_g

0xd352,	// (0x0002b0c8) popup_char_count_window_t1

0xb2af,	// (0x00029025) popup_fep_char_preview_window_ParamLimits

0xb2af,	// (0x00029025) popup_fep_char_preview_window

0xb3ff,	// (0x00029175) vkb2_top_candi_pane_ParamLimits

0xb3ff,	// (0x00029175) vkb2_top_candi_pane

0xf0db,	// (0x0002ce51) cell_vkb2_top_candi_pane_ParamLimits

0xf0db,	// (0x0002ce51) cell_vkb2_top_candi_pane

0xb821,	// (0x00029597) bg_popup_fep_char_preview_window_ParamLimits

0xb821,	// (0x00029597) bg_popup_fep_char_preview_window

0xb82f,	// (0x000295a5) popup_fep_char_preview_window_t1_ParamLimits

0xb82f,	// (0x000295a5) popup_fep_char_preview_window_t1

0xd360,	// (0x0002b0d6) bg_popup_fep_char_preview_window_g1

0xd368,	// (0x0002b0de) bg_popup_fep_char_preview_window_g2

0xd370,	// (0x0002b0e6) bg_popup_fep_char_preview_window_g3

0xd378,	// (0x0002b0ee) bg_popup_fep_char_preview_window_g4

0xd380,	// (0x0002b0f6) bg_popup_fep_char_preview_window_g5

0xb869,	// (0x000295df) bg_popup_fep_char_preview_window_g6

0xd388,	// (0x0002b0fe) bg_popup_fep_char_preview_window_g7

0xd390,	// (0x0002b106) bg_popup_fep_char_preview_window_g8

0xd398,	// (0x0002b10e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x0002db6d) bg_popup_fep_char_preview_window_g

0xaeb0,	// (0x00028c26) cell_vkb2_top_candi_pane_g1_ParamLimits

0xaeb0,	// (0x00028c26) cell_vkb2_top_candi_pane_g1

0xaebe,	// (0x00028c34) cell_vkb2_top_candi_pane_g2_ParamLimits

0xaebe,	// (0x00028c34) cell_vkb2_top_candi_pane_g2

0xba23,	// (0x00029799) cell_vkb2_top_candi_pane_g3_ParamLimits

0xba23,	// (0x00029799) cell_vkb2_top_candi_pane_g3

0xb871,	// (0x000295e7) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb871,	// (0x000295e7) cell_vkb2_top_candi_pane_g4

0xbaef,	// (0x00029865) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbaef,	// (0x00029865) cell_vkb2_top_candi_pane_g5

0xb892,	// (0x00029608) cell_vkb2_top_candi_pane_g6_ParamLimits

0xb892,	// (0x00029608) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x0002db80) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x0002db80) cell_vkb2_top_candi_pane_g

0xb8a0,	// (0x00029616) cell_vkb2_top_candi_pane_t1

0x9e4a,	// (0x00027bc0) aid_size_touch_slider_mark_ParamLimits

0x9e4a,	// (0x00027bc0) aid_size_touch_slider_mark

0xee91,	// (0x0002cc07) grid_graphic2_catg_pane_ParamLimits

0xee91,	// (0x0002cc07) grid_graphic2_catg_pane

0xef0b,	// (0x0002cc81) popup_grid_graphic2_window_t1_ParamLimits

0xef0b,	// (0x0002cc81) popup_grid_graphic2_window_t1

0xef1d,	// (0x0002cc93) popup_grid_graphic2_window_t2_ParamLimits

0xef1d,	// (0x0002cc93) popup_grid_graphic2_window_t2

0x0001,

0xfdca,	// (0x0002db40) popup_grid_graphic2_window_t_ParamLimits

0xfdca,	// (0x0002db40) popup_grid_graphic2_window_t

0x4afb,	// (0x00022871) bg_button_pane_cp05_ParamLimits

0xf06c,	// (0x0002cde2) cell_graphic2_control_pane_g1_ParamLimits

0xf128,	// (0x0002ce9e) cell_graphic2_catg_pane_ParamLimits

0xf128,	// (0x0002ce9e) cell_graphic2_catg_pane

0x4444,	// (0x000221ba) bg_button_pane_cp12

0xf13a,	// (0x0002ceb0) cell_graphic2_catg_pane_g1

0xcc77,	// (0x0002a9ed) cell_tb_ext_pane_t1_ParamLimits

0xb649,	// (0x000293bf) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb649,	// (0x000293bf) vkb2_top_cell_right_narrow_pane

0xb661,	// (0x000293d7) vkb2_top_cell_right_wide_pane_ParamLimits

0xb661,	// (0x000293d7) vkb2_top_cell_right_wide_pane

0xa703,	// (0x00028479) bg_vkb2_func_pane_ParamLimits

0xa703,	// (0x00028479) bg_vkb2_func_pane

0xb6d2,	// (0x00029448) vkb2_top_cell_left_pane_g1_ParamLimits

0xa703,	// (0x00028479) bg_vkb2_fuc_pane_cp03_ParamLimits

0xa703,	// (0x00028479) bg_vkb2_fuc_pane_cp03

0xb730,	// (0x000294a6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5a95,	// (0x0002380b) bg_vkb2_func_pane_g1

0x5a8d,	// (0x00023803) bg_vkb2_func_pane_g2

0x5a9d,	// (0x00023813) bg_vkb2_func_pane_g3

0x5aa5,	// (0x0002381b) bg_vkb2_func_pane_g4

0x5aad,	// (0x00023823) bg_vkb2_func_pane_g5

0x5ab5,	// (0x0002382b) bg_vkb2_func_pane_g6

0x5ac5,	// (0x0002383b) bg_vkb2_func_pane_g7

0x5abd,	// (0x00023833) bg_vkb2_func_pane_g8

0x5a85,	// (0x000237fb) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x0002db8d) bg_vkb2_func_pane_g

0xa703,	// (0x00028479) bg_vkb2_fuc_pane_cp01_ParamLimits

0xa703,	// (0x00028479) bg_vkb2_fuc_pane_cp01

0xb6d2,	// (0x00029448) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb6d2,	// (0x00029448) vkb2_top_cell_right_wide_pane_g1

0xa703,	// (0x00028479) bg_vkb2_fuc_pane_cp02_ParamLimits

0xa703,	// (0x00028479) bg_vkb2_fuc_pane_cp02

0xb730,	// (0x000294a6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb730,	// (0x000294a6) vkb2_top_cell_right_narrow_pane_g1

0xc8a3,	// (0x0002a619) aid_touch_area_decrease_ParamLimits

0xc8a3,	// (0x0002a619) aid_touch_area_decrease

0xc8c7,	// (0x0002a63d) aid_touch_area_increase_ParamLimits

0xc8c7,	// (0x0002a63d) aid_touch_area_increase

0xc8d3,	// (0x0002a649) aid_touch_area_mute_ParamLimits

0xc8d3,	// (0x0002a649) aid_touch_area_mute

0xc8f7,	// (0x0002a66d) aid_touch_area_slider_ParamLimits

0xc8f7,	// (0x0002a66d) aid_touch_area_slider

0xc9e3,	// (0x0002a759) popup_slider_window_g4_ParamLimits

0xc9e3,	// (0x0002a759) popup_slider_window_g4

0xc9ef,	// (0x0002a765) popup_slider_window_g5_ParamLimits

0xc9ef,	// (0x0002a765) popup_slider_window_g5

0xca11,	// (0x0002a787) popup_slider_window_g6_ParamLimits

0xca11,	// (0x0002a787) popup_slider_window_g6

0xca51,	// (0x0002a7c7) popup_slider_window_t2_ParamLimits

0xca51,	// (0x0002a7c7) popup_slider_window_t2

0x0001,

0xfd18,	// (0x0002da8e) popup_slider_window_t_ParamLimits

0xfd18,	// (0x0002da8e) popup_slider_window_t

0xca69,	// (0x0002a7df) slider_pane_ParamLimits

0xca69,	// (0x0002a7df) slider_pane

0xd3a0,	// (0x0002b116) slider_pane_g1_ParamLimits

0xd3a0,	// (0x0002b116) slider_pane_g1

0xd3b4,	// (0x0002b12a) slider_pane_g2_ParamLimits

0xd3b4,	// (0x0002b12a) slider_pane_g2

0xd3ca,	// (0x0002b140) slider_pane_g3_ParamLimits

0xd3ca,	// (0x0002b140) slider_pane_g3

0x0003,

0xfe2a,	// (0x0002dba0) slider_pane_g_ParamLimits

0xfe2a,	// (0x0002dba0) slider_pane_g

0x94b1,	// (0x00027227) popup_tb_float_extension_window_ParamLimits

0x94b1,	// (0x00027227) popup_tb_float_extension_window

0xd3f6,	// (0x0002b16c) aid_size_cell_tb_float_ext

0x4444,	// (0x000221ba) bg_popup_sub_window_cp28

0xd402,	// (0x0002b178) grid_tb_float_ext_pane

0xd40c,	// (0x0002b182) cell_tb_float_ext_pane_ParamLimits

0xd40c,	// (0x0002b182) cell_tb_float_ext_pane

0xd426,	// (0x0002b19c) cell_tb_float_ext_pane_g1

0xd42f,	// (0x0002b1a5) grid_highlight_pane_cp12

0xa882,	// (0x000285f8) cell_last_hwr_side_pane_ParamLimits

0xa882,	// (0x000285f8) cell_last_hwr_side_pane

0xa693,	// (0x00028409) cell_last_hwr_side_pane_g1

0xd438,	// (0x0002b1ae) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x0002dba9) cell_last_hwr_side_pane_g

0xb5f8,	// (0x0002936e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb5f8,	// (0x0002936e) vkb2_area_bottom_space_btn_pane

0xaeb0,	// (0x00028c26) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd28b,	// (0x0002b001) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb8a0,	// (0x00029616) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb8bf,	// (0x00029635) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb8bf,	// (0x00029635) vkb2_area_bottom_space_btn_pane_g1

0xb8f9,	// (0x0002966f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb8f9,	// (0x0002966f) vkb2_area_bottom_space_btn_pane_g2

0xb92f,	// (0x000296a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb92f,	// (0x000296a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x0002dbae) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x0002dbae) vkb2_area_bottom_space_btn_pane_g

0xa7c6,	// (0x0002853c) cel_fep_hwr_func_pane_ParamLimits

0xa7c6,	// (0x0002853c) cel_fep_hwr_func_pane

0xa832,	// (0x000285a8) cell_hwr_side_button_pane_ParamLimits

0xa832,	// (0x000285a8) cell_hwr_side_button_pane

0xccab,	// (0x0002aa21) aid_area_touch_clock_ParamLimits

0x45e7,	// (0x0002235d) bg_uniindi_top_pane_ParamLimits

0xccbd,	// (0x0002aa33) uniindi_top_pane_g1_ParamLimits

0xccd3,	// (0x0002aa49) uniindi_top_pane_g2_ParamLimits

0xccdf,	// (0x0002aa55) uniindi_top_pane_g3_ParamLimits

0xccf0,	// (0x0002aa66) uniindi_top_pane_g4_ParamLimits

0xfd50,	// (0x0002dac6) uniindi_top_pane_g_ParamLimits

0xccfd,	// (0x0002aa73) uniindi_top_pane_t1_ParamLimits

0x45e7,	// (0x0002235d) bg_vkb2_func_pane_cp01_ParamLimits

0x45e7,	// (0x0002235d) bg_vkb2_func_pane_cp01

0xd441,	// (0x0002b1b7) cel_fep_hwr_func_pane_g1_ParamLimits

0xd441,	// (0x0002b1b7) cel_fep_hwr_func_pane_g1

0x45e7,	// (0x0002235d) bg_vkb2_func_pane_cp02_ParamLimits

0x45e7,	// (0x0002235d) bg_vkb2_func_pane_cp02

0xd441,	// (0x0002b1b7) cell_hwr_side_button_pane_g1_ParamLimits

0xd441,	// (0x0002b1b7) cell_hwr_side_button_pane_g1

0x599d,	// (0x00023713) status_pane_g4_ParamLimits

0x599d,	// (0x00023713) status_pane_g4

0x59b5,	// (0x0002372b) status_pane_t1

0x765b,	// (0x000253d1) form2_midp_gauge_slider_cont_pane

0x7663,	// (0x000253d9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa42f,	// (0x000281a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa441,	// (0x000281b7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0002d88d) form2_midp_gauge_slider_pane_t_ParamLimits

0x7675,	// (0x000253eb) form2_midp_slider_pane_ParamLimits

0xb26f,	// (0x00028fe5) aid_size_cell_func_vkb2_ParamLimits

0xb26f,	// (0x00028fe5) aid_size_cell_func_vkb2

0xd3e2,	// (0x0002b158) slider_pane_g4_ParamLimits

0xd3e2,	// (0x0002b158) slider_pane_g4

0xb979,	// (0x000296ef) form2_midp_gauge_slider_pane_t2_cp01

0xb987,	// (0x000296fd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb987,	// (0x000296fd) form2_midp_gauge_slider_pane_t3_cp01

0xb9a4,	// (0x0002971a) form2_midp_slider_pane_cp01

0x4444,	// (0x000221ba) navi_smil_pane

0xd471,	// (0x0002b1e7) navi_smil_pane_g1

0xd479,	// (0x0002b1ef) navi_smil_pane_t1

0xd44f,	// (0x0002b1c5) form2_midp_slider_pane_g1

0xd458,	// (0x0002b1ce) form2_midp_slider_pane_g2

0xd460,	// (0x0002b1d6) form2_midp_slider_pane_g3

0xd44f,	// (0x0002b1c5) form2_midp_slider_pane_g4

0xf143,	// (0x0002ceb9) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x0002dbb7) form2_midp_slider_pane_g

0xb969,	// (0x000296df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb969,	// (0x000296df) vkb2_area_bottom_space_btn_pane_g4

0x961c,	// (0x00027392) lc0_navi_pane_ParamLimits

0x961c,	// (0x00027392) lc0_navi_pane

0x9692,	// (0x00027408) lc0_stat_indi_pane_ParamLimits

0x9692,	// (0x00027408) lc0_stat_indi_pane

0x96a9,	// (0x0002741f) ls0_title_pane_ParamLimits

0x96a9,	// (0x0002741f) ls0_title_pane

0x4afb,	// (0x00022871) bg_popup_sub_pane_cp14_ParamLimits

0xcc92,	// (0x0002aa08) list_uniindi_pane_ParamLimits

0xcc9e,	// (0x0002aa14) uniindi_top_pane_ParamLimits

0xcd39,	// (0x0002aaaf) list_single_uniindi_pane_g1_ParamLimits

0xcd4c,	// (0x0002aac2) list_single_uniindi_pane_t1_ParamLimits

0xb9ad,	// (0x00029723) lc0_stat_clock_pane_ParamLimits

0xb9ad,	// (0x00029723) lc0_stat_clock_pane

0xf14c,	// (0x0002cec2) lc0_stat_indi_pane_g1_ParamLimits

0xf14c,	// (0x0002cec2) lc0_stat_indi_pane_g1

0xf159,	// (0x0002cecf) lc0_stat_indi_pane_g2_ParamLimits

0xf159,	// (0x0002cecf) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x0002dbc2) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x0002dbc2) lc0_stat_indi_pane_g

0xb9ba,	// (0x00029730) lc0_uni_indicator_pane_ParamLimits

0xb9ba,	// (0x00029730) lc0_uni_indicator_pane

0xf166,	// (0x0002cedc) ls0_title_pane_g1_ParamLimits

0xf166,	// (0x0002cedc) ls0_title_pane_g1

0xf17a,	// (0x0002cef0) ls0_title_pane_t1_ParamLimits

0xf17a,	// (0x0002cef0) ls0_title_pane_t1

0xb9c7,	// (0x0002973d) lc0_uni_indicator_pane_g1_ParamLimits

0xb9c7,	// (0x0002973d) lc0_uni_indicator_pane_g1

0xd487,	// (0x0002b1fd) lc0_stat_clock_pane_t1

0x4444,	// (0x000221ba) main_ai5_pane

0xd495,	// (0x0002b20b) ai5_sk_pane_ParamLimits

0xd495,	// (0x0002b20b) ai5_sk_pane

0xf1b0,	// (0x0002cf26) cell_ai5_widget_pane_ParamLimits

0xf1b0,	// (0x0002cf26) cell_ai5_widget_pane

0xd4a2,	// (0x0002b218) aid_size_cell_widget_grid

0xd4b6,	// (0x0002b22c) bg_ai5_widget_pane_ParamLimits

0xd4b6,	// (0x0002b22c) bg_ai5_widget_pane

0xf25a,	// (0x0002cfd0) cell_ai5_widget_pane_g2

0xf26a,	// (0x0002cfe0) cell_ai5_widget_pane_g3

0xf27e,	// (0x0002cff4) cell_ai5_widget_pane_g4

0xf28a,	// (0x0002d000) cell_ai5_widget_pane_g5

0xf296,	// (0x0002d00c) cell_ai5_widget_pane_g6

0xf2a2,	// (0x0002d018) cell_ai5_widget_pane_g7

0xf2ea,	// (0x0002d060) cell_ai5_widget_pane_t1_ParamLimits

0xf2ea,	// (0x0002d060) cell_ai5_widget_pane_t1

0xf307,	// (0x0002d07d) cell_ai5_widget_pane_t2_ParamLimits

0xf307,	// (0x0002d07d) cell_ai5_widget_pane_t2

0xf31f,	// (0x0002d095) cell_ai5_widget_pane_t3_ParamLimits

0xf31f,	// (0x0002d095) cell_ai5_widget_pane_t3

0xf337,	// (0x0002d0ad) cell_ai5_widget_pane_t4_ParamLimits

0xf337,	// (0x0002d0ad) cell_ai5_widget_pane_t4

0xf351,	// (0x0002d0c7) cell_ai5_widget_pane_t5_ParamLimits

0xf351,	// (0x0002d0c7) cell_ai5_widget_pane_t5

0xd4c2,	// (0x0002b238) cell_ai5_widget_pane_t6_ParamLimits

0xd4c2,	// (0x0002b238) cell_ai5_widget_pane_t6

0xd4d4,	// (0x0002b24a) cell_ai5_widget_pane_t7_ParamLimits

0xd4d4,	// (0x0002b24a) cell_ai5_widget_pane_t7

0xf370,	// (0x0002d0e6) cell_ai5_widget_pane_t8_ParamLimits

0xf370,	// (0x0002d0e6) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x0002dbdc) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x0002dbdc) cell_ai5_widget_pane_t

0xf3b8,	// (0x0002d12e) grid_ai5_widget_pane

0x4afb,	// (0x00022871) highlight_cell_ai5_widget_pane_ParamLimits

0x4afb,	// (0x00022871) highlight_cell_ai5_widget_pane

0xf3ce,	// (0x0002d144) ai5_sk_left_pane

0xf3d8,	// (0x0002d14e) ai5_sk_middle_pane

0xf3e2,	// (0x0002d158) ai5_sk_right_pane

0xd4ed,	// (0x0002b263) bg_ai5_widget_pane_g1_ParamLimits

0xd4ed,	// (0x0002b263) bg_ai5_widget_pane_g1

0xd4f9,	// (0x0002b26f) bg_ai5_widget_pane_g2_ParamLimits

0xd4f9,	// (0x0002b26f) bg_ai5_widget_pane_g2

0xd505,	// (0x0002b27b) bg_ai5_widget_pane_g3_ParamLimits

0xd505,	// (0x0002b27b) bg_ai5_widget_pane_g3

0xd511,	// (0x0002b287) bg_ai5_widget_pane_g4_ParamLimits

0xd511,	// (0x0002b287) bg_ai5_widget_pane_g4

0xd51d,	// (0x0002b293) bg_ai5_widget_pane_g5_ParamLimits

0xd51d,	// (0x0002b293) bg_ai5_widget_pane_g5

0xd529,	// (0x0002b29f) bg_ai5_widget_pane_g6_ParamLimits

0xd529,	// (0x0002b29f) bg_ai5_widget_pane_g6

0xd535,	// (0x0002b2ab) bg_ai5_widget_pane_g7_ParamLimits

0xd535,	// (0x0002b2ab) bg_ai5_widget_pane_g7

0xd541,	// (0x0002b2b7) bg_ai5_widget_pane_g8_ParamLimits

0xd541,	// (0x0002b2b7) bg_ai5_widget_pane_g8

0xd54d,	// (0x0002b2c3) bg_ai5_widget_pane_g9_ParamLimits

0xd54d,	// (0x0002b2c3) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x0002dbf1) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x0002dbf1) bg_ai5_widget_pane_g

0xd580,	// (0x0002b2f6) cell_shortcut_ai5_widget_pane_ParamLimits

0xd580,	// (0x0002b2f6) cell_shortcut_ai5_widget_pane

0x44f0,	// (0x00022266) bg_cell_shortcut_ai5_widget_pane

0xd591,	// (0x0002b307) cell_grid_ai5_widget_pane_g1

0xd59a,	// (0x0002b310) highlight_cell_shortcut_ai5_widget_pane

0x5a95,	// (0x0002380b) ai5_sk_left_pane_g1

0xd5a2,	// (0x0002b318) ai5_sk_left_pane_g2

0xd5aa,	// (0x0002b320) ai5_sk_left_pane_g3

0xd5b2,	// (0x0002b328) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x0002dc04) ai5_sk_left_pane_g

0xd5ba,	// (0x0002b330) ai5_sk_left_pane_t1

0x5a8d,	// (0x00023803) ai5_sk_right_pane_g1

0xd5c8,	// (0x0002b33e) ai5_sk_right_pane_g2

0xd5d0,	// (0x0002b346) ai5_sk_right_pane_g3

0xd5d8,	// (0x0002b34e) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x0002dc0d) ai5_sk_right_pane_g

0xd5e0,	// (0x0002b356) ai5_sk_right_pane_t1

0x5a8d,	// (0x00023803) ai5_sk_middle_pane_g1

0x5a95,	// (0x0002380b) ai5_sk_middle_pane_g2

0x5aad,	// (0x00023823) ai5_sk_middle_pane_g3

0xd5d0,	// (0x0002b346) ai5_sk_middle_pane_g4

0xd5aa,	// (0x0002b320) ai5_sk_middle_pane_g5

0xd5ee,	// (0x0002b364) ai5_sk_middle_pane_g6

0xf3ec,	// (0x0002d162) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x0002dc16) ai5_sk_middle_pane_g

0x9561,	// (0x000272d7) aid_touch_area_size_lc0_ParamLimits

0x9561,	// (0x000272d7) aid_touch_area_size_lc0

0xaedf,	// (0x00028c55) cell_hwr_candidate_pane_t1_ParamLimits

0x58bf,	// (0x00023635) aid_touch_navi_pane

0x977f,	// (0x000274f5) status_dt_navi_pane_ParamLimits

0x977f,	// (0x000274f5) status_dt_navi_pane

0x978c,	// (0x00027502) status_dt_sta_pane_ParamLimits

0x978c,	// (0x00027502) status_dt_sta_pane

0xf3f4,	// (0x0002d16a) dt_sta_controll_pane

0xf401,	// (0x0002d177) dt_sta_indi_pane

0xf412,	// (0x0002d188) dt_sta_title_pane

0x45e7,	// (0x0002235d) bg_dt_sta_indi_pane_ParamLimits

0x45e7,	// (0x0002235d) bg_dt_sta_indi_pane

0xf425,	// (0x0002d19b) dt_sta_battery_pane

0xf42d,	// (0x0002d1a3) dt_sta_indi_pane_g1

0xd5f6,	// (0x0002b36c) dt_sta_indi_pane_g2

0xd5ff,	// (0x0002b375) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x0002dc25) dt_sta_indi_pane_g

0xd608,	// (0x0002b37e) dt_sta_signal_pane

0x4afb,	// (0x00022871) bg_dt_sta_title_pane_ParamLimits

0x4afb,	// (0x00022871) bg_dt_sta_title_pane

0x6707,	// (0x0002447d) dt_sta_title_pane_g1

0xf436,	// (0x0002d1ac) dt_sta_title_pane_t1_ParamLimits

0xf436,	// (0x0002d1ac) dt_sta_title_pane_t1

0x4444,	// (0x000221ba) bg_dt_sta_control_pane

0xf44b,	// (0x0002d1c1) dt_sta_controll_pane_g1

0xd611,	// (0x0002b387) bg_dt_sta_title_pane_g1

0xd61a,	// (0x0002b390) bg_dt_sta_title_pane_g2

0xd623,	// (0x0002b399) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x0002dc2c) bg_dt_sta_title_pane_g

0xa693,	// (0x00028409) bg_dt_sta_indi_pane_g1

0xd62c,	// (0x0002b3a2) dt_sta_signal_pane_g1

0xd634,	// (0x0002b3aa) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x0002dc33) dt_sta_signal_pane_g

0xd63c,	// (0x0002b3b2) dt_sta_battery_pane_g1

0xd645,	// (0x0002b3bb) dt_sta_battery_pane_t1

0xa693,	// (0x00028409) bg_dt_sta_control_pane_g1

0x50ac,	// (0x00022e22) fep_china_uni_eep_pane

0x50b4,	// (0x00022e2a) fep_china_uni_entry_pane_ParamLimits

0x50c4,	// (0x00022e3a) popup_fep_china_uni_window_g1_ParamLimits

0x50d4,	// (0x00022e4a) popup_fep_china_uni_window_g2_ParamLimits

0x50d4,	// (0x00022e4a) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0002d4ce) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0002d4ce) popup_fep_china_uni_window_g

0xd654,	// (0x0002b3ca) fep_china_uni_eep_pane_g1

0xd65c,	// (0x0002b3d2) fep_china_uni_eep_pane_t1

0xd468,	// (0x0002b1de) aid_touch_area_size_smil_player

0x5970,	// (0x000236e6) lc0_clock_pane

0x59a9,	// (0x0002371f) status_pane_g5_ParamLimits

0x59a9,	// (0x0002371f) status_pane_g5

0x91c3,	// (0x00026f39) popup_keymap_window

0x5989,	// (0x000236ff) status_icon_pane

0xf26a,	// (0x0002cfe0) cell_ai5_widget_pane_g3_ParamLimits

0xf27e,	// (0x0002cff4) cell_ai5_widget_pane_g4_ParamLimits

0xf28a,	// (0x0002d000) cell_ai5_widget_pane_g5_ParamLimits

0xf2ae,	// (0x0002d024) cell_ai5_widget_pane_g8_ParamLimits

0xf2ae,	// (0x0002d024) cell_ai5_widget_pane_g8

0xf2c2,	// (0x0002d038) cell_ai5_widget_pane_g9_ParamLimits

0xf2c2,	// (0x0002d038) cell_ai5_widget_pane_g9

0xf2d6,	// (0x0002d04c) cell_ai5_widget_pane_g10_ParamLimits

0xf2d6,	// (0x0002d04c) cell_ai5_widget_pane_g10

0xd66b,	// (0x0002b3e1) status_icon_pane_g1

0x4444,	// (0x000221ba) bg_popup_sub_pane_cp13

0xd673,	// (0x0002b3e9) popup_keymap_window_t1

0x8f9e,	// (0x00026d14) control_pane_g6_ParamLimits

0x8f9e,	// (0x00026d14) control_pane_g6

0x8fab,	// (0x00026d21) control_pane_g7_ParamLimits

0x8fab,	// (0x00026d21) control_pane_g7

0x8fb8,	// (0x00026d2e) control_pane_g8_ParamLimits

0x8fb8,	// (0x00026d2e) control_pane_g8

0xf3f4,	// (0x0002d16a) dt_sta_controll_pane_ParamLimits

0xf401,	// (0x0002d177) dt_sta_indi_pane_ParamLimits

0xf412,	// (0x0002d188) dt_sta_title_pane_ParamLimits

0x4a3d,	// (0x000227b3) aid_size_touch_scroll_bar_cale

0x8361,	// (0x000260d7) popup_discreet_window_ParamLimits

0x8361,	// (0x000260d7) popup_discreet_window

0x83db,	// (0x00026151) popup_sk_window

0x6001,	// (0x00023d77) bg_popup_sub_pane_cp28_ParamLimits

0x6001,	// (0x00023d77) bg_popup_sub_pane_cp28

0xd681,	// (0x0002b3f7) popup_discreet_window_g1_ParamLimits

0xd681,	// (0x0002b3f7) popup_discreet_window_g1

0xd6a1,	// (0x0002b417) popup_discreet_window_t1_ParamLimits

0xd6a1,	// (0x0002b417) popup_discreet_window_t1

0xd6bf,	// (0x0002b435) popup_discreet_window_t2_ParamLimits

0xd6bf,	// (0x0002b435) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x0002dc38) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x0002dc38) popup_discreet_window_t

0xb9dd,	// (0x00029753) popup_sk_window_g1

0xb9e7,	// (0x0002975d) popup_sk_window_g2

0x0001,

0xfec9,	// (0x0002dc3f) popup_sk_window_g

0xd711,	// (0x0002b487) popup_sk_window_t1

0xd71f,	// (0x0002b495) popup_sk_window_t1_copy1

0xf25a,	// (0x0002cfd0) cell_ai5_widget_pane_g2_ParamLimits

0xf382,	// (0x0002d0f8) cell_ai5_widget_pane_t9_ParamLimits

0xf382,	// (0x0002d0f8) cell_ai5_widget_pane_t9

0x4444,	// (0x000221ba) main_fep_fshwr2_pane

0xf454,	// (0x0002d1ca) aid_fshwr2_btn_pane

0xf45c,	// (0x0002d1d2) aid_fshwr2_syb_pane

0xf464,	// (0x0002d1da) aid_fshwr2_txt_pane

0xf46c,	// (0x0002d1e2) fshwr2_func_candi_pane

0xf478,	// (0x0002d1ee) fshwr2_hwr_syb_pane

0xf484,	// (0x0002d1fa) fshwr2_icf_pane

0x4444,	// (0x000221ba) fshwr2_icf_bg_pane

0xf48e,	// (0x0002d204) fshwr2_icf_pane_t1_ParamLimits

0xf48e,	// (0x0002d204) fshwr2_icf_pane_t1

0xa693,	// (0x00028409) fshwr2_func_candi_pane_g1

0xd741,	// (0x0002b4b7) fshwr2_func_candi_row_pane_ParamLimits

0xd741,	// (0x0002b4b7) fshwr2_func_candi_row_pane

0xf4a5,	// (0x0002d21b) cell_fshwr2_syb_pane_ParamLimits

0xf4a5,	// (0x0002d21b) cell_fshwr2_syb_pane

0xab33,	// (0x000288a9) fshwr2_hwr_syb_pane_g1_ParamLimits

0xab33,	// (0x000288a9) fshwr2_hwr_syb_pane_g1

0x4444,	// (0x000221ba) bg_popup_call_pane_cp01

0xd752,	// (0x0002b4c8) fshwr2_func_candi_cell_pane_ParamLimits

0xd752,	// (0x0002b4c8) fshwr2_func_candi_cell_pane

0xd783,	// (0x0002b4f9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd783,	// (0x0002b4f9) fshwr2_func_candi_cell_bg_pane

0xd79d,	// (0x0002b513) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd79d,	// (0x0002b513) fshwr2_func_candi_cell_pane_g1

0xd7bd,	// (0x0002b533) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd7bd,	// (0x0002b533) fshwr2_func_candi_cell_pane_t1

0x4444,	// (0x000221ba) bg_button_pane_cp08

0x553d,	// (0x000232b3) cell_fshwr2_syb_bg_pane

0xf4c1,	// (0x0002d237) cell_fshwr2_syb_bg_pane_g1

0xd7d0,	// (0x0002b546) cell_fshwr2_syb_bg_pane_t1

0x4afb,	// (0x00022871) main_tmo_pane

0x9d7e,	// (0x00027af4) uni_indicator_pane_g1_ParamLimits

0x9d93,	// (0x00027b09) uni_indicator_pane_g2_ParamLimits

0x9da9,	// (0x00027b1f) uni_indicator_pane_g3_ParamLimits

0x69cb,	// (0x00024741) uni_indicator_pane_g4_ParamLimits

0x69cb,	// (0x00024741) uni_indicator_pane_g4

0x69df,	// (0x00024755) uni_indicator_pane_g5_ParamLimits

0x69df,	// (0x00024755) uni_indicator_pane_g5

0x69f3,	// (0x00024769) uni_indicator_pane_g6_ParamLimits

0x69f3,	// (0x00024769) uni_indicator_pane_g6

0xf950,	// (0x0002d6c6) uni_indicator_pane_g_ParamLimits

0xc885,	// (0x0002a5fb) popup_tmo_note_window_ParamLimits

0xc885,	// (0x0002a5fb) popup_tmo_note_window

0x4444,	// (0x000221ba) fshwr2_bg_pane

0xd7ae,	// (0x0002b524) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd7ae,	// (0x0002b524) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x0002dc44) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x0002dc44) fshwr2_func_candi_cell_pane_g

0xa693,	// (0x00028409) bg_popup_window_pane_cp01

0xd7df,	// (0x0002b555) bg_popup_window_pane_g1_cp01

0xd7e8,	// (0x0002b55e) bg_popup_window_pane_cp22_ParamLimits

0xd7e8,	// (0x0002b55e) bg_popup_window_pane_cp22

0xd7f6,	// (0x0002b56c) listscroll_tmo_link_pane_ParamLimits

0xd7f6,	// (0x0002b56c) listscroll_tmo_link_pane

0xd836,	// (0x0002b5ac) popup_tmo_note_window_g1_ParamLimits

0xd836,	// (0x0002b5ac) popup_tmo_note_window_g1

0xd843,	// (0x0002b5b9) tmo_note_info_pane_ParamLimits

0xd843,	// (0x0002b5b9) tmo_note_info_pane

0xf4c9,	// (0x0002d23f) list_tmo_note_info_pane_g1_ParamLimits

0xf4c9,	// (0x0002d23f) list_tmo_note_info_pane_g1

0xd85d,	// (0x0002b5d3) list_tmo_note_info_pane_g2_ParamLimits

0xd85d,	// (0x0002b5d3) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x0002dc49) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x0002dc49) list_tmo_note_info_pane_g

0xd879,	// (0x0002b5ef) list_tmo_note_info_text_pane_ParamLimits

0xd879,	// (0x0002b5ef) list_tmo_note_info_text_pane

0xd8bb,	// (0x0002b631) list_tmo_link_pane

0xd8c8,	// (0x0002b63e) scroll_pane_cp20

0xd8d5,	// (0x0002b64b) list_single_tmo_link_pane_ParamLimits

0xd8d5,	// (0x0002b64b) list_single_tmo_link_pane

0xd8e5,	// (0x0002b65b) list_single_tmo_link_pane_t1

0xd8f3,	// (0x0002b669) list_tmo_note_info_text_pane_t1_ParamLimits

0xd8f3,	// (0x0002b669) list_tmo_note_info_text_pane_t1

0x87e0,	// (0x00026556) aid_size_touch_scroll_bar_cp01_ParamLimits

0x87e0,	// (0x00026556) aid_size_touch_scroll_bar_cp01

0xe462,	// (0x0002c1d8) aid_size_touch_slider_marker

0x83c3,	// (0x00026139) popup_settings_window_ParamLimits

0x83c3,	// (0x00026139) popup_settings_window

0xe62a,	// (0x0002c3a0) popup_candi_list_indi_window

0x58bf,	// (0x00023635) aid_touch_navi_pane_ParamLimits

0xb1a8,	// (0x00028f1e) rs_clock_indi_pane

0xb1b1,	// (0x00028f27) sctrl_sk_bottom_pane_ParamLimits

0xb1c2,	// (0x00028f38) sctrl_sk_top_pane_ParamLimits

0xb2c9,	// (0x0002903f) popup_fep_tooltip_window

0xd4a2,	// (0x0002b218) aid_size_cell_widget_grid_ParamLimits

0xf24e,	// (0x0002cfc4) cell_ai5_widget_pane_g1_ParamLimits

0xf24e,	// (0x0002cfc4) cell_ai5_widget_pane_g1

0xf296,	// (0x0002d00c) cell_ai5_widget_pane_g6_ParamLimits

0xf2a2,	// (0x0002d018) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x0002dbc7) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002dbc7) cell_ai5_widget_pane_g

0xf3a6,	// (0x0002d11c) cell_ai5_widget_pane_t10_ParamLimits

0xf3a6,	// (0x0002d11c) cell_ai5_widget_pane_t10

0xf3b8,	// (0x0002d12e) grid_ai5_widget_pane_ParamLimits

0xd559,	// (0x0002b2cf) cell_contacts_ai5_widget_pane_ParamLimits

0xd559,	// (0x0002b2cf) cell_contacts_ai5_widget_pane

0xd6d4,	// (0x0002b44a) popup_discreet_window_t3_ParamLimits

0xd6d4,	// (0x0002b44a) popup_discreet_window_t3

0xd72d,	// (0x0002b4a3) popup_fshwr2_char_preview_window_ParamLimits

0xd72d,	// (0x0002b4a3) popup_fshwr2_char_preview_window

0xf4e0,	// (0x0002d256) tmo_note_info_pane_t1

0xf4f5,	// (0x0002d26b) tmo_note_info_pane_t2

0xf50e,	// (0x0002d284) tmo_note_info_pane_t3

0xd897,	// (0x0002b60d) tmo_note_info_pane_t4

0xd8a9,	// (0x0002b61f) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x0002dc4e) tmo_note_info_pane_t

0xd8bb,	// (0x0002b631) list_tmo_link_pane_ParamLimits

0xd8c8,	// (0x0002b63e) scroll_pane_cp20_ParamLimits

0x4444,	// (0x000221ba) bg_popup_fep_char_preview_window_cp01

0xd90c,	// (0x0002b682) popup_fshwr2_char_preview_window_t1

0xd91a,	// (0x0002b690) popup_candi_list_indi_window_g1

0xd923,	// (0x0002b699) bg_cell_contacts_ai5_widget_pane

0xd92f,	// (0x0002b6a5) cell_contacts_ai5_widget_pane_g1

0xd943,	// (0x0002b6b9) cell_contacts_ai5_widget_pane_g2

0xd952,	// (0x0002b6c8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x0002dc59) cell_contacts_ai5_widget_pane_g

0xd965,	// (0x0002b6db) cell_contacts_ai5_widget_pane_t1

0x4afb,	// (0x00022871) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd9df,	// (0x0002b755) settings_container_pane

0x553d,	// (0x000232b3) listscroll_set_pane_copy1

0x71ee,	// (0x00024f64) scroll_pane_cp121_copy1

0xd9eb,	// (0x0002b761) set_content_pane_copy1

0xd9f3,	// (0x0002b769) aid_height_set_list_copy1_ParamLimits

0xd9f3,	// (0x0002b769) aid_height_set_list_copy1

0x6a32,	// (0x000247a8) aid_size_parent_copy1_ParamLimits

0x6a32,	// (0x000247a8) aid_size_parent_copy1

0xd9ff,	// (0x0002b775) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd9ff,	// (0x0002b775) button_value_adjust_pane_cp6_copy1

0x4c52,	// (0x000229c8) list_highlight_pane_cp2_copy1_ParamLimits

0x4c52,	// (0x000229c8) list_highlight_pane_cp2_copy1

0xda13,	// (0x0002b789) list_set_pane_copy1_ParamLimits

0xda13,	// (0x0002b789) list_set_pane_copy1

0xd97a,	// (0x0002b6f0) main_pane_set_t1_copy1_ParamLimits

0xd97a,	// (0x0002b6f0) main_pane_set_t1_copy1

0xd9b4,	// (0x0002b72a) main_pane_set_t2_copy1_ParamLimits

0xd9b4,	// (0x0002b72a) main_pane_set_t2_copy1

0xdac0,	// (0x0002b836) main_pane_set_t3_copy1

0xdace,	// (0x0002b844) main_pane_set_t4_copy1

0xd9d3,	// (0x0002b749) set_content_pane_g1_copy1_ParamLimits

0xd9d3,	// (0x0002b749) set_content_pane_g1_copy1

0xdadc,	// (0x0002b852) setting_code_pane_copy1

0xdae6,	// (0x0002b85c) setting_slider_graphic_pane_copy1

0xdae6,	// (0x0002b85c) setting_slider_pane_copy1

0xdaf0,	// (0x0002b866) setting_text_pane_copy1

0xdafa,	// (0x0002b870) setting_volume_pane_copy1

0xdb03,	// (0x0002b879) settings_code_pane_cp2_copy1

0xdb0b,	// (0x0002b881) settings_code_pane_cp_copy1_ParamLimits

0xdb0b,	// (0x0002b881) settings_code_pane_cp_copy1

0xdb1f,	// (0x0002b895) volume_set_pane_copy1

0xdb27,	// (0x0002b89d) volume_set_pane_g10_copy1

0xdb2f,	// (0x0002b8a5) volume_set_pane_g1_copy1

0xdb37,	// (0x0002b8ad) volume_set_pane_g2_copy1

0xdb3f,	// (0x0002b8b5) volume_set_pane_g3_copy1

0xdb47,	// (0x0002b8bd) volume_set_pane_g4_copy1

0xdb4f,	// (0x0002b8c5) volume_set_pane_g5_copy1

0xdb57,	// (0x0002b8cd) volume_set_pane_g6_copy1

0xdb5f,	// (0x0002b8d5) volume_set_pane_g7_copy1

0xdb67,	// (0x0002b8dd) volume_set_pane_g8_copy1

0xdb6f,	// (0x0002b8e5) volume_set_pane_g9_copy1

0x44b4,	// (0x0002222a) bg_set_opt_pane_cp_copy1_ParamLimits

0x44b4,	// (0x0002222a) bg_set_opt_pane_cp_copy1

0xdb77,	// (0x0002b8ed) setting_slider_pane_t1_copy1_ParamLimits

0xdb77,	// (0x0002b8ed) setting_slider_pane_t1_copy1

0xdb95,	// (0x0002b90b) setting_slider_pane_t2_copy1_ParamLimits

0xdb95,	// (0x0002b90b) setting_slider_pane_t2_copy1

0xdbaf,	// (0x0002b925) setting_slider_pane_t3_copy1_ParamLimits

0xdbaf,	// (0x0002b925) setting_slider_pane_t3_copy1

0xdbc7,	// (0x0002b93d) slider_set_pane_copy1_ParamLimits

0xdbc7,	// (0x0002b93d) slider_set_pane_copy1

0x4b62,	// (0x000228d8) set_opt_bg_pane_g1_copy2

0x4b6a,	// (0x000228e0) set_opt_bg_pane_g2_copy2

0xdbdd,	// (0x0002b953) set_opt_bg_pane_g3_copy2

0x4b7a,	// (0x000228f0) set_opt_bg_pane_g4_copy2

0x4b82,	// (0x000228f8) set_opt_bg_pane_g5_copy2

0x4b8a,	// (0x00022900) set_opt_bg_pane_g6_copy2

0xdbe7,	// (0x0002b95d) set_opt_bg_pane_g7_copy2

0xdbef,	// (0x0002b965) set_opt_bg_pane_g8_copy2

0xdbf9,	// (0x0002b96f) set_opt_bg_pane_g9_copy2

0xb9f1,	// (0x00029767) aid_size_touch_slider_mark_copy1_ParamLimits

0xb9f1,	// (0x00029767) aid_size_touch_slider_mark_copy1

0xdc03,	// (0x0002b979) slider_set_pane_g1_copy1

0xba05,	// (0x0002977b) slider_set_pane_g2_copy1

0x9e6a,	// (0x00027be0) slider_set_pane_g3_copy1_ParamLimits

0x9e6a,	// (0x00027be0) slider_set_pane_g3_copy1

0x9e7e,	// (0x00027bf4) slider_set_pane_g4_copy1_ParamLimits

0x9e7e,	// (0x00027bf4) slider_set_pane_g4_copy1

0x9e96,	// (0x00027c0c) slider_set_pane_g5_copy1_ParamLimits

0x9e96,	// (0x00027c0c) slider_set_pane_g5_copy1

0x9e6a,	// (0x00027be0) slider_set_pane_g6_copy1_ParamLimits

0x9e6a,	// (0x00027be0) slider_set_pane_g6_copy1

0xba0d,	// (0x00029783) slider_set_pane_g7_copy1_ParamLimits

0xba0d,	// (0x00029783) slider_set_pane_g7_copy1

0x4458,	// (0x000221ce) bg_set_opt_pane_cp2_copy1

0xdc0c,	// (0x0002b982) setting_slider_graphic_pane_g1_copy1

0xdc15,	// (0x0002b98b) setting_slider_graphic_pane_t1_copy1

0xdc25,	// (0x0002b99b) setting_slider_graphic_pane_t2_copy1

0xdc35,	// (0x0002b9ab) slider_set_pane_cp_copy1

0xdc45,	// (0x0002b9bb) input_focus_pane_cp1_copy1

0xdc4e,	// (0x0002b9c4) list_set_text_pane_copy1

0xdc56,	// (0x0002b9cc) setting_text_pane_g1_copy1

0xedd1,	// (0x0002cb47) set_text_pane_t1_copy1

0xdc45,	// (0x0002b9bb) input_focus_pane_cp2_copy1

0xdc56,	// (0x0002b9cc) setting_code_pane_g1_copy1

0xdc5f,	// (0x0002b9d5) setting_code_pane_t1_copy1

0xdc6d,	// (0x0002b9e3) list_set_graphic_pane_copy1

0x4458,	// (0x000221ce) bg_set_opt_pane_cp4_copy1

0x523f,	// (0x00022fb5) list_set_graphic_pane_g1_copy1_ParamLimits

0x523f,	// (0x00022fb5) list_set_graphic_pane_g1_copy1

0xdc81,	// (0x0002b9f7) list_set_graphic_pane_g2_copy1

0x5257,	// (0x00022fcd) list_set_graphic_pane_t1_copy1_ParamLimits

0x5257,	// (0x00022fcd) list_set_graphic_pane_t1_copy1

0xa693,	// (0x00028409) rs_clock_indi_pane_g1

0xdc89,	// (0x0002b9ff) rs_clock_indi_pane_t1

0xdc97,	// (0x0002ba0d) rs_indi_pane

0xdc9f,	// (0x0002ba15) rs_indi_pane_g1

0xdca8,	// (0x0002ba1e) rs_indi_pane_g2

0xdcb1,	// (0x0002ba27) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x0002dc60) rs_indi_pane_g

0x553d,	// (0x000232b3) bg_popup_preview_window_pane_cp03

0xdcba,	// (0x0002ba30) popup_fep_tooltip_window_t1

0xc01a,	// (0x00029d90) popup_note2_window_g2_ParamLimits

0xc01a,	// (0x00029d90) popup_note2_window_g2

0x0001,

0xfc8f,	// (0x0002da05) popup_note2_window_g_ParamLimits

0xfc8f,	// (0x0002da05) popup_note2_window_g

0xc508,	// (0x0002a27e) bg_popup_sub_pane_cp11_ParamLimits

0xc515,	// (0x0002a28b) cell_ai3_links_pane_g1_ParamLimits

0xc52c,	// (0x0002a2a2) cell_ai3_links_pane_t1

0xedd1,	// (0x0002cb47) set_text_pane_t1_copy1_ParamLimits

0x544c,	// (0x000231c2) cell_graphic_popup_pane_cp2_ParamLimits

0x544c,	// (0x000231c2) cell_graphic_popup_pane_cp2

0xdcc8,	// (0x0002ba3e) cell_graphic_popup_pane_g1_cp2

0x4850,	// (0x000225c6) cell_graphic_popup_pane_g2_cp2

0xdcd0,	// (0x0002ba46) cell_graphic_popup_pane_g3_cp2

0xdcd8,	// (0x0002ba4e) cell_graphic_popup_pane_t2_cp2

0x4861,	// (0x000225d7) grid_highlight_pane_cp3_cp2

0x4dfc,	// (0x00022b72) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4afb,	// (0x00022871) main_tmo_pane_ParamLimits

0xc879,	// (0x0002a5ef) popup_tmo_big_image_note_window

0xf23e,	// (0x0002cfb4) cell_ai5_widget_list_pane

0xf246,	// (0x0002cfbc) cell_ai5_widget_lrg_icon_pane

0xf4e0,	// (0x0002d256) tmo_note_info_pane_t1_ParamLimits

0xf4f5,	// (0x0002d26b) tmo_note_info_pane_t2_ParamLimits

0xf50e,	// (0x0002d284) tmo_note_info_pane_t3_ParamLimits

0xd897,	// (0x0002b60d) tmo_note_info_pane_t4_ParamLimits

0xd8a9,	// (0x0002b61f) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x0002dc4e) tmo_note_info_pane_t_ParamLimits

0xd9df,	// (0x0002b755) settings_container_pane_ParamLimits

0xdc3d,	// (0x0002b9b3) indicator_popup_pane_cp5

0xdc3d,	// (0x0002b9b3) indicator_popup_pane_cp6

0xdc6d,	// (0x0002b9e3) list_set_graphic_pane_copy1_ParamLimits

0x4444,	// (0x000221ba) bg_popup_window_pane_cp23

0xdce6,	// (0x0002ba5c) popup_tmo_big_image_note_window_g1

0xdcf1,	// (0x0002ba67) popup_tmo_big_image_note_window_t1

0xdd01,	// (0x0002ba77) popup_tmo_big_image_note_window_t2

0xdd11,	// (0x0002ba87) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x0002dc67) popup_tmo_big_image_note_window_t

0xf523,	// (0x0002d299) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0002d2a1) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0002d2af) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0002d2af) cell_ai5_widget_list_row_pane

0xf552,	// (0x0002d2c8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0002d2c8) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0002d2d5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0002d2d5) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0002d2ed) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0002d2ed) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0905,	// (0x0001e67b) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0905,	// (0x0001e67b) cell_ai5_widget_list_row_pane_t

0x8288,	// (0x00025ffe) main_fep_vtchi_ss_pane

0xdd21,	// (0x0002ba97) popup_fep_char_pre_window

0xdd29,	// (0x0002ba9f) popup_fep_ituss_window

0xdd34,	// (0x0002baaa) popup_fep_vkbss_window

0xdd3d,	// (0x0002bab3) grid_vkbss_keypad_pane_ParamLimits

0xdd3d,	// (0x0002bab3) grid_vkbss_keypad_pane

0xdd4d,	// (0x0002bac3) ituss_keypad_pane

0xdd55,	// (0x0002bacb) aid_vkbss_key_offset_ParamLimits

0xdd55,	// (0x0002bacb) aid_vkbss_key_offset

0xdd64,	// (0x0002bada) cell_vkbss_key_pane_ParamLimits

0xdd64,	// (0x0002bada) cell_vkbss_key_pane

0xdd7a,	// (0x0002baf0) bg_cell_vkbss_key_g1_ParamLimits

0xdd7a,	// (0x0002baf0) bg_cell_vkbss_key_g1

0xdd86,	// (0x0002bafc) cell_vkbss_key_3p_pane_ParamLimits

0xdd86,	// (0x0002bafc) cell_vkbss_key_3p_pane

0xdda0,	// (0x0002bb16) cell_vkbss_key_g1_ParamLimits

0xdda0,	// (0x0002bb16) cell_vkbss_key_g1

0xddba,	// (0x0002bb30) cell_vkbss_key_t1_ParamLimits

0xddba,	// (0x0002bb30) cell_vkbss_key_t1

0xdde5,	// (0x0002bb5b) cell_ituss_key_pane_ParamLimits

0xdde5,	// (0x0002bb5b) cell_ituss_key_pane

0xddf4,	// (0x0002bb6a) bg_cell_ituss_key_g1_ParamLimits

0xddf4,	// (0x0002bb6a) bg_cell_ituss_key_g1

0xde00,	// (0x0002bb76) cell_ituss_key_pane_g1_ParamLimits

0xde00,	// (0x0002bb76) cell_ituss_key_pane_g1

0xde0c,	// (0x0002bb82) cell_ituss_key_pane_g2_ParamLimits

0xde0c,	// (0x0002bb82) cell_ituss_key_pane_g2

0x0001,

0xfef8,	// (0x0002dc6e) cell_ituss_key_pane_g_ParamLimits

0xfef8,	// (0x0002dc6e) cell_ituss_key_pane_g

0xde1f,	// (0x0002bb95) cell_ituss_key_t1_ParamLimits

0xde1f,	// (0x0002bb95) cell_ituss_key_t1

0xde3d,	// (0x0002bbb3) cell_ituss_key_t2_ParamLimits

0xde3d,	// (0x0002bbb3) cell_ituss_key_t2

0xde5c,	// (0x0002bbd2) cell_ituss_key_t3_ParamLimits

0xde5c,	// (0x0002bbd2) cell_ituss_key_t3

0xde7b,	// (0x0002bbf1) cell_ituss_key_t4_ParamLimits

0xde7b,	// (0x0002bbf1) cell_ituss_key_t4

0x0003,

0xfefd,	// (0x0002dc73) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0002dc73) cell_ituss_key_t

0xde9a,	// (0x0002bc10) cell_vkbss_key_3p_pane_g1

0xdea2,	// (0x0002bc18) cell_vkbss_key_3p_pane_g2

0xdeaa,	// (0x0002bc20) cell_vkbss_key_3p_pane_g3

0x0002,

0xff06,	// (0x0002dc7c) cell_vkbss_key_3p_pane_g

0x4444,	// (0x000221ba) bg_popup_fep_char_preview_window_cp02

0xdeb2,	// (0x0002bc28) popup_fep_char_pre_window_t1

0xf234,	// (0x0002cfaa) main_ai5_sk_pane

0xd923,	// (0x0002b699) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd92f,	// (0x0002b6a5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd943,	// (0x0002b6b9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd952,	// (0x0002b6c8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x0002dc59) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd965,	// (0x0002b6db) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4afb,	// (0x00022871) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002d2ff) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
