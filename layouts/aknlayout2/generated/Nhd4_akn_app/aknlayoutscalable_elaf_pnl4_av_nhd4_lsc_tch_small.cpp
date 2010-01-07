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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00015ed9 };

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
0x8e48,	// (0x0001ed21) Screen

0x8e54,	// (0x0001ed2d) application_window_ParamLimits

0x8e54,	// (0x0001ed2d) application_window

0xc2eb,	// (0x000221c4) screen_g1

0x8e8c,	// (0x0001ed65) area_bottom_pane_ParamLimits

0x8e8c,	// (0x0001ed65) area_bottom_pane

0x5cfb,	// (0x0001bbd4) area_top_pane_ParamLimits

0x5cfb,	// (0x0001bbd4) area_top_pane

0x5d8f,	// (0x0001bc68) main_pane_ParamLimits

0x5d8f,	// (0x0001bc68) main_pane

0xc2f5,	// (0x000221ce) misc_graphics

0x9eb8,	// (0x0001fd91) battery_pane_ParamLimits

0x9eb8,	// (0x0001fd91) battery_pane

0xe063,	// (0x00023f3c) bg_status_flat_pane_g8

0xe06b,	// (0x00023f44) bg_status_flat_pane_g9

0xd7c9,	// (0x000236a2) context_pane_ParamLimits

0xd7c9,	// (0x000236a2) context_pane

0xa023,	// (0x0001fefc) navi_pane_ParamLimits

0xa023,	// (0x0001fefc) navi_pane

0xa09a,	// (0x0001ff73) signal_pane_ParamLimits

0xa09a,	// (0x0001ff73) signal_pane

0x0008,

0xf8a6,	// (0x0002577f) bg_status_flat_pane_g

0xa12a,	// (0x00020003) status_pane_g1_ParamLimits

0xa12a,	// (0x00020003) status_pane_g1

0xa140,	// (0x00020019) status_pane_g2_ParamLimits

0xa140,	// (0x00020019) status_pane_g2

0xd82e,	// (0x00023707) status_pane_g3_ParamLimits

0xd82e,	// (0x00023707) status_pane_g3

0x0004,

0xf7e0,	// (0x000256b9) status_pane_g_ParamLimits

0xf7e0,	// (0x000256b9) status_pane_g

0xa14c,	// (0x00020025) title_pane_ParamLimits

0xa14c,	// (0x00020025) title_pane

0xa1ad,	// (0x00020086) uni_indicator_pane_ParamLimits

0xa1ad,	// (0x00020086) uni_indicator_pane

0xd5f4,	// (0x000234cd) bg_list_pane_ParamLimits

0xd5f4,	// (0x000234cd) bg_list_pane

0x53c6,	// (0x0001b29f) find_pane

0x97a6,	// (0x0001f67f) listscroll_app_pane_ParamLimits

0x97a6,	// (0x0001f67f) listscroll_app_pane

0xd614,	// (0x000234ed) listscroll_form_pane

0x53ce,	// (0x0001b2a7) listscroll_gen_pane_ParamLimits

0x53ce,	// (0x0001b2a7) listscroll_gen_pane

0xd614,	// (0x000234ed) listscroll_set_pane

0xe8cf,	// (0x000247a8) main_idle_act_pane

0xd3da,	// (0x000232b3) main_idle_trad_pane

0xd3da,	// (0x000232b3) main_list_empty_pane

0xcaef,	// (0x000229c8) main_midp_pane

0xd62e,	// (0x00023507) main_pane_g1_ParamLimits

0xd62e,	// (0x00023507) main_pane_g1

0x97b2,	// (0x0001f68b) popup_ai_message_window_ParamLimits

0x97b2,	// (0x0001f68b) popup_ai_message_window

0x9843,	// (0x0001f71c) popup_fep_china_uni_window_ParamLimits

0x9843,	// (0x0001f71c) popup_fep_china_uni_window

0xd66e,	// (0x00023547) popup_fep_japan_candidate_window_ParamLimits

0xd66e,	// (0x00023547) popup_fep_japan_candidate_window

0xd68c,	// (0x00023565) popup_fep_japan_predictive_window_ParamLimits

0xd68c,	// (0x00023565) popup_fep_japan_predictive_window

0x989d,	// (0x0001f776) popup_find_window

0x98ba,	// (0x0001f793) popup_grid_graphic_window_ParamLimits

0x98ba,	// (0x0001f793) popup_grid_graphic_window

0xd6bc,	// (0x00023595) popup_large_graphic_colour_window

0x994c,	// (0x0001f825) popup_menu_window_ParamLimits

0x994c,	// (0x0001f825) popup_menu_window

0x9b18,	// (0x0001f9f1) popup_note_image_window

0x9ade,	// (0x0001f9b7) popup_note_wait_window_ParamLimits

0x9ade,	// (0x0001f9b7) popup_note_wait_window

0x9b30,	// (0x0001fa09) popup_note_window_ParamLimits

0x9b30,	// (0x0001fa09) popup_note_window

0x9bd6,	// (0x0001faaf) popup_query_code_window_ParamLimits

0x9bd6,	// (0x0001faaf) popup_query_code_window

0xd6e2,	// (0x000235bb) popup_query_data_code_window_ParamLimits

0xd6e2,	// (0x000235bb) popup_query_data_code_window

0x9c10,	// (0x0001fae9) popup_query_data_window_ParamLimits

0x9c10,	// (0x0001fae9) popup_query_data_window

0x9c86,	// (0x0001fb5f) popup_query_sat_info_window_ParamLimits

0x9c86,	// (0x0001fb5f) popup_query_sat_info_window

0x9d1d,	// (0x0001fbf6) popup_snote_single_graphic_window_ParamLimits

0x9d1d,	// (0x0001fbf6) popup_snote_single_graphic_window

0x9d1d,	// (0x0001fbf6) popup_snote_single_text_window_ParamLimits

0x9d1d,	// (0x0001fbf6) popup_snote_single_text_window

0xd6f9,	// (0x000235d2) popup_sub_window_general

0xd73f,	// (0x00023618) popup_window_general_ParamLimits

0xd73f,	// (0x00023618) popup_window_general

0xd754,	// (0x0002362d) power_save_pane

0x9635,	// (0x0001f50e) control_pane_g1_ParamLimits

0x9635,	// (0x0001f50e) control_pane_g1

0x64ff,	// (0x0001c3d8) control_pane_g2_ParamLimits

0x64ff,	// (0x0001c3d8) control_pane_g2

0xd5ce,	// (0x000234a7) control_pane_g3_ParamLimits

0xd5ce,	// (0x000234a7) control_pane_g3

0x0007,

0xf7c8,	// (0x000256a1) control_pane_g_ParamLimits

0xf7c8,	// (0x000256a1) control_pane_g

0x969d,	// (0x0001f576) control_pane_t1_ParamLimits

0x969d,	// (0x0001f576) control_pane_t1

0x96fb,	// (0x0001f5d4) control_pane_t2_ParamLimits

0x96fb,	// (0x0001f5d4) control_pane_t2

0x0002,

0xf7d9,	// (0x000256b2) control_pane_t_ParamLimits

0xf7d9,	// (0x000256b2) control_pane_t

0xd4ef,	// (0x000233c8) navi_navi_volume_pane_cp1

0xd4f8,	// (0x000233d1) status_small_icon_pane

0xd500,	// (0x000233d9) status_small_pane_g1_ParamLimits

0xd500,	// (0x000233d9) status_small_pane_g1

0xd534,	// (0x0002340d) status_small_pane_g2_ParamLimits

0xd534,	// (0x0002340d) status_small_pane_g2

0xd540,	// (0x00023419) status_small_pane_g3_ParamLimits

0xd540,	// (0x00023419) status_small_pane_g3

0xd54c,	// (0x00023425) status_small_pane_g4_ParamLimits

0xd54c,	// (0x00023425) status_small_pane_g4

0xd558,	// (0x00023431) status_small_pane_g5_ParamLimits

0xd558,	// (0x00023431) status_small_pane_g5

0xd567,	// (0x00023440) status_small_pane_g6_ParamLimits

0xd567,	// (0x00023440) status_small_pane_g6

0x0007,

0xf7b7,	// (0x00025690) status_small_pane_g_ParamLimits

0xf7b7,	// (0x00025690) status_small_pane_g

0xd597,	// (0x00023470) status_small_pane_t1

0xd5ba,	// (0x00023493) status_small_wait_pane_ParamLimits

0xd5ba,	// (0x00023493) status_small_wait_pane

0x94d6,	// (0x0001f3af) aid_levels_signal_ParamLimits

0x94d6,	// (0x0001f3af) aid_levels_signal

0x94ee,	// (0x0001f3c7) signal_pane_g1_ParamLimits

0x94ee,	// (0x0001f3c7) signal_pane_g1

0x9509,	// (0x0001f3e2) signal_pane_g2_ParamLimits

0x9509,	// (0x0001f3e2) signal_pane_g2

0x0001,

0xf74c,	// (0x00025625) signal_pane_g_ParamLimits

0xf74c,	// (0x00025625) signal_pane_g

0xcf1e,	// (0x00022df7) context_pane_g1

0x9005,	// (0x0001eede) title_pane_g1

0x903a,	// (0x0001ef13) title_pane_t1

0xc30b,	// (0x000221e4) title_pane_t2

0xc331,	// (0x0002220a) title_pane_t3

0x0002,

0xf59b,	// (0x00025474) title_pane_t

0xa1d5,	// (0x000200ae) aid_levels_battery_ParamLimits

0xa1d5,	// (0x000200ae) aid_levels_battery

0xa1f1,	// (0x000200ca) battery_pane_g1_ParamLimits

0xa1f1,	// (0x000200ca) battery_pane_g1

0xa20e,	// (0x000200e7) battery_pane_g2_ParamLimits

0xa20e,	// (0x000200e7) battery_pane_g2

0x0001,

0xf7eb,	// (0x000256c4) battery_pane_g_ParamLimits

0xf7eb,	// (0x000256c4) battery_pane_g

0xa612,	// (0x000204eb) uni_indicator_pane_g1

0xa627,	// (0x00020500) uni_indicator_pane_g2

0xa63c,	// (0x00020515) uni_indicator_pane_g3

0x0005,

0xf94e,	// (0x00025827) uni_indicator_pane_g

0xd24a,	// (0x00023123) navi_icon_pane_ParamLimits

0xd24a,	// (0x00023123) navi_icon_pane

0xd191,	// (0x0002306a) navi_midp_pane

0xd266,	// (0x0002313f) navi_navi_pane

0xd270,	// (0x00023149) navi_text_pane_ParamLimits

0xd270,	// (0x00023149) navi_text_pane

0xc2eb,	// (0x000221c4) status_small_wait_pane_g1

0xc60c,	// (0x000224e5) status_small_wait_pane_g2

0x0001,

0xf949,	// (0x00025822) status_small_wait_pane_g

0xa5b1,	// (0x0002048a) navi_navi_icon_text_pane

0xa5b9,	// (0x00020492) navi_navi_pane_g1_ParamLimits

0xa5b9,	// (0x00020492) navi_navi_pane_g1

0xa5cb,	// (0x000204a4) navi_navi_pane_g2_ParamLimits

0xa5cb,	// (0x000204a4) navi_navi_pane_g2

0x0001,

0xf917,	// (0x000257f0) navi_navi_pane_g_ParamLimits

0xf917,	// (0x000257f0) navi_navi_pane_g

0xe5e6,	// (0x000244bf) navi_navi_tabs_pane

0xa5dd,	// (0x000204b6) navi_navi_text_pane

0xa5b1,	// (0x0002048a) navi_navi_volume_pane

0xa59f,	// (0x00020478) navi_text_pane_t1

0xa593,	// (0x0002046c) navi_icon_pane_g1

0xe527,	// (0x00024400) navi_navi_text_pane_t1

0xa582,	// (0x0002045b) navi_navi_volume_pane_g1

0xa58a,	// (0x00020463) volume_small_pane

0xa4de,	// (0x000203b7) navi_navi_icon_text_pane_g1

0xa4e6,	// (0x000203bf) navi_navi_icon_text_pane_t1

0xd266,	// (0x0002313f) navi_tabs_2_long_pane

0xd266,	// (0x0002313f) navi_tabs_2_pane

0xd266,	// (0x0002313f) navi_tabs_3_long_pane

0xd266,	// (0x0002313f) navi_tabs_3_pane

0xd266,	// (0x0002313f) navi_tabs_4_pane

0xa4be,	// (0x00020397) tabs_2_active_pane_ParamLimits

0xa4be,	// (0x00020397) tabs_2_active_pane

0xa4ce,	// (0x000203a7) tabs_2_passive_pane_ParamLimits

0xa4ce,	// (0x000203a7) tabs_2_passive_pane

0xa48c,	// (0x00020365) tabs_3_active_pane_ParamLimits

0xa48c,	// (0x00020365) tabs_3_active_pane

0xa49c,	// (0x00020375) tabs_3_passive_pane_ParamLimits

0xa49c,	// (0x00020375) tabs_3_passive_pane

0xa4ad,	// (0x00020386) tabs_3_passive_pane_cp_ParamLimits

0xa4ad,	// (0x00020386) tabs_3_passive_pane_cp

0xa448,	// (0x00020321) tabs_4_active_pane_ParamLimits

0xa448,	// (0x00020321) tabs_4_active_pane

0xa459,	// (0x00020332) tabs_4_passive_pane_ParamLimits

0xa459,	// (0x00020332) tabs_4_passive_pane

0xa46a,	// (0x00020343) tabs_4_passive_pane_cp_ParamLimits

0xa46a,	// (0x00020343) tabs_4_passive_pane_cp

0xa47b,	// (0x00020354) tabs_4_passive_pane_cp2_ParamLimits

0xa47b,	// (0x00020354) tabs_4_passive_pane_cp2

0xa428,	// (0x00020301) tabs_2_long_active_pane_ParamLimits

0xa428,	// (0x00020301) tabs_2_long_active_pane

0xa438,	// (0x00020311) tabs_2_long_passive_pane_ParamLimits

0xa438,	// (0x00020311) tabs_2_long_passive_pane

0xa3f3,	// (0x000202cc) tabs_3_long_active_pane_ParamLimits

0xa3f3,	// (0x000202cc) tabs_3_long_active_pane

0xa404,	// (0x000202dd) tabs_3_long_passive_pane_ParamLimits

0xa404,	// (0x000202dd) tabs_3_long_passive_pane

0xa417,	// (0x000202f0) tabs_3_long_passive_pane_cp_ParamLimits

0xa417,	// (0x000202f0) tabs_3_long_passive_pane_cp

0x6757,	// (0x0001c630) volume_small_pane_g1

0xa3a2,	// (0x0002027b) volume_small_pane_g2

0xa3ab,	// (0x00020284) volume_small_pane_g3

0xa3b4,	// (0x0002028d) volume_small_pane_g4

0xa3bd,	// (0x00020296) volume_small_pane_g5

0xa3c6,	// (0x0002029f) volume_small_pane_g6

0xa3cf,	// (0x000202a8) volume_small_pane_g7

0xa3d8,	// (0x000202b1) volume_small_pane_g8

0xa3e1,	// (0x000202ba) volume_small_pane_g9

0xa3ea,	// (0x000202c3) volume_small_pane_g10

0x0009,

0xf8e3,	// (0x000257bc) volume_small_pane_g

0xc343,	// (0x0002221c) bg_active_tab_pane_cp2_ParamLimits

0xc343,	// (0x0002221c) bg_active_tab_pane_cp2

0x90c6,	// (0x0001ef9f) tabs_3_active_pane_g1

0x90ce,	// (0x0001efa7) tabs_3_active_pane_t1

0xc343,	// (0x0002221c) bg_passive_tab_pane_cp2_ParamLimits

0xc343,	// (0x0002221c) bg_passive_tab_pane_cp2

0x90c6,	// (0x0001ef9f) tabs_3_passive_pane_g1

0x90ce,	// (0x0001efa7) tabs_3_passive_pane_t1

0xc343,	// (0x0002221c) bg_active_tab_pane_cp3_ParamLimits

0xc343,	// (0x0002221c) bg_active_tab_pane_cp3

0x90e0,	// (0x0001efb9) tabs_4_active_pane_g1

0x90e8,	// (0x0001efc1) tabs_4_active_pane_t1

0xc343,	// (0x0002221c) bg_passive_tab_pane_cp3_ParamLimits

0xc343,	// (0x0002221c) bg_passive_tab_pane_cp3

0x90e0,	// (0x0001efb9) tabs_4_1_passive_pane_g1

0x90e8,	// (0x0001efc1) tabs_4_1_passive_pane_t1

0xcaef,	// (0x000229c8) list_highlight_pane_cp2

0xa6c9,	// (0x000205a2) list_set_pane_ParamLimits

0xa6c9,	// (0x000205a2) list_set_pane

0xa763,	// (0x0002063c) main_pane_set_t1_ParamLimits

0xa763,	// (0x0002063c) main_pane_set_t1

0xa783,	// (0x0002065c) main_pane_set_t2_ParamLimits

0xa783,	// (0x0002065c) main_pane_set_t2

0xa797,	// (0x00020670) main_pane_set_t3_ParamLimits

0xa797,	// (0x00020670) main_pane_set_t3

0xa7a9,	// (0x00020682) main_pane_set_t4_ParamLimits

0xa7a9,	// (0x00020682) main_pane_set_t4

0x0003,

0xf9b3,	// (0x0002588c) main_pane_set_t_ParamLimits

0xf9b3,	// (0x0002588c) main_pane_set_t

0xa7bb,	// (0x00020694) setting_code_pane

0xa7c3,	// (0x0002069c) setting_slider_graphic_pane

0xa7c3,	// (0x0002069c) setting_slider_pane

0xa7c3,	// (0x0002069c) setting_text_pane

0xa7c3,	// (0x0002069c) setting_volume_pane

0x5fc0,	// (0x0001be99) volume_set_pane

0xc351,	// (0x0002222a) bg_set_opt_pane_cp

0x5fc8,	// (0x0001bea1) setting_slider_pane_t1

0x5fe1,	// (0x0001beba) setting_slider_pane_t2

0x5ffa,	// (0x0001bed3) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002547b) setting_slider_pane_t

0x6011,	// (0x0001beea) slider_set_pane

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp2

0xc35f,	// (0x00022238) setting_slider_graphic_pane_g1

0x6027,	// (0x0001bf00) setting_slider_graphic_pane_t1

0x6036,	// (0x0001bf0f) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00025482) setting_slider_graphic_pane_t

0x6045,	// (0x0001bf1e) slider_set_pane_cp

0xc2f5,	// (0x000221ce) input_focus_pane_cp1

0xea4d,	// (0x00024926) list_set_text_pane

0xc2eb,	// (0x000221c4) setting_text_pane_g1

0xc2f5,	// (0x000221ce) input_focus_pane_cp2

0xc2eb,	// (0x000221c4) setting_code_pane_g1

0xc368,	// (0x00022241) setting_code_pane_t1

0x4c79,	// (0x0001ab52) set_text_pane_t1_ParamLimits

0x4c79,	// (0x0001ab52) set_text_pane_t1

0xc9ff,	// (0x000228d8) set_opt_bg_pane_g1

0xca07,	// (0x000228e0) set_opt_bg_pane_g2

0xea2d,	// (0x00024906) set_opt_bg_pane_g3

0xca17,	// (0x000228f0) set_opt_bg_pane_g4

0xca1f,	// (0x000228f8) set_opt_bg_pane_g5

0xca27,	// (0x00022900) set_opt_bg_pane_g6

0xea35,	// (0x0002490e) set_opt_bg_pane_g7

0xea3d,	// (0x00024916) set_opt_bg_pane_g8

0xea45,	// (0x0002491e) set_opt_bg_pane_g9

0x0008,

0xf9a0,	// (0x00025879) set_opt_bg_pane_g

0xea20,	// (0x000248f9) slider_set_pane_g1

0x6925,	// (0x0001c7fe) slider_set_pane_g2

0x0006,

0xf991,	// (0x0002586a) slider_set_pane_g

0x68c1,	// (0x0001c79a) volume_set_pane_g1

0x68c9,	// (0x0001c7a2) volume_set_pane_g2

0x68d1,	// (0x0001c7aa) volume_set_pane_g3

0x68d9,	// (0x0001c7b2) volume_set_pane_g4

0x68e1,	// (0x0001c7ba) volume_set_pane_g5

0x68e9,	// (0x0001c7c2) volume_set_pane_g6

0x68f1,	// (0x0001c7ca) volume_set_pane_g7

0x68f9,	// (0x0001c7d2) volume_set_pane_g8

0x6901,	// (0x0001c7da) volume_set_pane_g9

0x6909,	// (0x0001c7e2) volume_set_pane_g10

0x0009,

0xf969,	// (0x00025842) volume_set_pane_g

0x90fa,	// (0x0001efd3) indicator_pane_ParamLimits

0x90fa,	// (0x0001efd3) indicator_pane

0x9122,	// (0x0001effb) main_idle_pane_g2_ParamLimits

0x9122,	// (0x0001effb) main_idle_pane_g2

0x915a,	// (0x0001f033) main_pane_idle_g1_ParamLimits

0x915a,	// (0x0001f033) main_pane_idle_g1

0xc376,	// (0x0002224f) popup_clock_digital_analogue_window_ParamLimits

0xc376,	// (0x0002224f) popup_clock_digital_analogue_window

0x9181,	// (0x0001f05a) soft_indicator_pane_ParamLimits

0x9181,	// (0x0001f05a) soft_indicator_pane

0x919b,	// (0x0001f074) wallpaper_pane_ParamLimits

0x919b,	// (0x0001f074) wallpaper_pane

0xc2eb,	// (0x000221c4) wallpaper_pane_g1

0x91ad,	// (0x0001f086) indicator_pane_g1_ParamLimits

0x91ad,	// (0x0001f086) indicator_pane_g1

0xeb94,	// (0x00024a6d) navi_navi_icon_text_pane_srt_g1

0xc3a4,	// (0x0002227d) soft_indicator_pane_t1

0xc3be,	// (0x00022297) aid_ps_area_pane

0x91c6,	// (0x0001f09f) aid_ps_clock_pane

0xc3cf,	// (0x000222a8) aid_ps_indicator_pane

0xc3db,	// (0x000222b4) indicator_ps_pane_ParamLimits

0xc3db,	// (0x000222b4) indicator_ps_pane

0xc3ea,	// (0x000222c3) power_save_pane_g1_ParamLimits

0xc3ea,	// (0x000222c3) power_save_pane_g1

0xc3f6,	// (0x000222cf) power_save_pane_g2_ParamLimits

0xc3f6,	// (0x000222cf) power_save_pane_g2

0x5bef,	// (0x0001bac8) aid_navinavi_width_pane

0xc3be,	// (0x00022297) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x00025487) power_save_pane_g_ParamLimits

0xf5ae,	// (0x00025487) power_save_pane_g

0xc404,	// (0x000222dd) power_save_pane_t1_ParamLimits

0xc404,	// (0x000222dd) power_save_pane_t1

0x91c6,	// (0x0001f09f) aid_ps_clock_pane_ParamLimits

0xc3cf,	// (0x000222a8) aid_ps_indicator_pane_ParamLimits

0xc416,	// (0x000222ef) power_save_pane_t4_ParamLimits

0xc416,	// (0x000222ef) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002548c) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002548c) power_save_pane_t

0xc440,	// (0x00022319) power_save_t3_ParamLimits

0xc440,	// (0x00022319) power_save_t3

0xc42b,	// (0x00022304) power_save_t2_ParamLimits

0xc42b,	// (0x00022304) power_save_t2

0xc455,	// (0x0002232e) indicator_ps_pane_g1

0x91d4,	// (0x0001f0ad) ai_gene_pane_ParamLimits

0x91d4,	// (0x0001f0ad) ai_gene_pane

0x91eb,	// (0x0001f0c4) ai_links_pane_ParamLimits

0x91eb,	// (0x0001f0c4) ai_links_pane

0x9203,	// (0x0001f0dc) indicator_pane_cp1_ParamLimits

0x9203,	// (0x0001f0dc) indicator_pane_cp1

0x9212,	// (0x0001f0eb) main_pane_idle_g1_cp_ParamLimits

0x9212,	// (0x0001f0eb) main_pane_idle_g1_cp

0xc45e,	// (0x00022337) popup_ai_links_title_window

0x922a,	// (0x0001f103) soft_indicator_pane_cp1_ParamLimits

0x922a,	// (0x0001f103) soft_indicator_pane_cp1

0xe856,	// (0x0002472f) ai_links_pane_g1

0xe85f,	// (0x00024738) grid_ai_links_pane

0xa609,	// (0x000204e2) ai_gene_pane_1

0xe844,	// (0x0002471d) ai_gene_pane_2

0xe84d,	// (0x00024726) list_highlight_pane_cp4

0xa5e5,	// (0x000204be) cell_ai_link_pane_ParamLimits

0xa5e5,	// (0x000204be) cell_ai_link_pane

0xe83c,	// (0x00024715) cell_ai_link_pane_g1

0xc60c,	// (0x000224e5) cell_ai_link_pane_g2

0x0001,

0xf944,	// (0x0002581d) cell_ai_link_pane_g

0xc2f5,	// (0x000221ce) grid_highlight_cp2

0xc2f5,	// (0x000221ce) bg_popup_sub_pane_cp1

0xc475,	// (0x0002234e) popup_ai_links_title_window_t1

0xe78a,	// (0x00024663) ai_gene_pane_1_g1_ParamLimits

0xe78a,	// (0x00024663) ai_gene_pane_1_g1

0xe796,	// (0x0002466f) ai_gene_pane_1_g2_ParamLimits

0xe796,	// (0x0002466f) ai_gene_pane_1_g2

0x0001,

0xf93a,	// (0x00025813) ai_gene_pane_1_g_ParamLimits

0xf93a,	// (0x00025813) ai_gene_pane_1_g

0xe7a3,	// (0x0002467c) ai_gene_pane_1_t1_ParamLimits

0xe7a3,	// (0x0002467c) ai_gene_pane_1_t1

0xe7d7,	// (0x000246b0) grid_ai_soft_ind_pane

0xe775,	// (0x0002464e) ai_gene_pane_2_t1_ParamLimits

0xe775,	// (0x0002464e) ai_gene_pane_2_t1

0x923e,	// (0x0001f117) main_pane_empty_t1_ParamLimits

0x923e,	// (0x0001f117) main_pane_empty_t1

0x9256,	// (0x0001f12f) main_pane_empty_t2_ParamLimits

0x9256,	// (0x0001f12f) main_pane_empty_t2

0x926b,	// (0x0001f144) main_pane_empty_t3_ParamLimits

0x926b,	// (0x0001f144) main_pane_empty_t3

0x927d,	// (0x0001f156) main_pane_empty_t4_ParamLimits

0x927d,	// (0x0001f156) main_pane_empty_t4

0x928f,	// (0x0001f168) main_pane_empty_t5_ParamLimits

0x928f,	// (0x0001f168) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00025491) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00025491) main_pane_empty_t

0xca50,	// (0x00022929) bg_popup_window_pane_ParamLimits

0xca50,	// (0x00022929) bg_popup_window_pane

0xe535,	// (0x0002440e) find_popup_pane_cp2_ParamLimits

0xe535,	// (0x0002440e) find_popup_pane_cp2

0xe541,	// (0x0002441a) heading_pane_ParamLimits

0xe541,	// (0x0002441a) heading_pane

0xc2f5,	// (0x000221ce) bg_popup_sub_pane

0xa503,	// (0x000203dc) bg_popup_window_pane_g1_ParamLimits

0xa503,	// (0x000203dc) bg_popup_window_pane_g1

0xa512,	// (0x000203eb) bg_popup_window_pane_g2_ParamLimits

0xa512,	// (0x000203eb) bg_popup_window_pane_g2

0xa51e,	// (0x000203f7) bg_popup_window_pane_g3_ParamLimits

0xa51e,	// (0x000203f7) bg_popup_window_pane_g3

0xa52a,	// (0x00020403) bg_popup_window_pane_g4_ParamLimits

0xa52a,	// (0x00020403) bg_popup_window_pane_g4

0xa539,	// (0x00020412) bg_popup_window_pane_g5_ParamLimits

0xa539,	// (0x00020412) bg_popup_window_pane_g5

0xa549,	// (0x00020422) bg_popup_window_pane_g6_ParamLimits

0xa549,	// (0x00020422) bg_popup_window_pane_g6

0xa555,	// (0x0002042e) bg_popup_window_pane_g7_ParamLimits

0xa555,	// (0x0002042e) bg_popup_window_pane_g7

0xa564,	// (0x0002043d) bg_popup_window_pane_g8_ParamLimits

0xa564,	// (0x0002043d) bg_popup_window_pane_g8

0xa573,	// (0x0002044c) bg_popup_window_pane_g9_ParamLimits

0xa573,	// (0x0002044c) bg_popup_window_pane_g9

0xe51b,	// (0x000243f4) bg_popup_window_pane_g10_ParamLimits

0xe51b,	// (0x000243f4) bg_popup_window_pane_g10

0x0009,

0xf902,	// (0x000257db) bg_popup_window_pane_g_ParamLimits

0xf902,	// (0x000257db) bg_popup_window_pane_g

0xe4d2,	// (0x000243ab) bg_popup_heading_pane_ParamLimits

0xe4d2,	// (0x000243ab) bg_popup_heading_pane

0x69ad,	// (0x0001c886) tabs_4_passive_pane_cp_srt_ParamLimits

0x69ad,	// (0x0001c886) tabs_4_passive_pane_cp_srt

0x69bf,	// (0x0001c898) tabs_4_passive_pane_srt_ParamLimits

0xe4e6,	// (0x000243bf) heading_pane_g2

0x69bf,	// (0x0001c898) tabs_4_passive_pane_srt

0xda12,	// (0x000238eb) bg_passive_tab_pane_cp3_srt_ParamLimits

0xda12,	// (0x000238eb) bg_passive_tab_pane_cp3_srt

0xe4ee,	// (0x000243c7) heading_pane_t1_ParamLimits

0xe4ee,	// (0x000243c7) heading_pane_t1

0xe505,	// (0x000243de) heading_pane_t2_ParamLimits

0xe505,	// (0x000243de) heading_pane_t2

0x0001,

0xf8fd,	// (0x000257d6) heading_pane_t_ParamLimits

0xf8fd,	// (0x000257d6) heading_pane_t

0xe02b,	// (0x00023f04) bg_popup_heading_pane_g1

0xe0bc,	// (0x00023f95) bg_popup_heading_pane_g2

0xe0c6,	// (0x00023f9f) bg_popup_heading_pane_g3

0xe0d0,	// (0x00023fa9) bg_popup_heading_pane_g4

0xe0da,	// (0x00023fb3) bg_popup_heading_pane_g5

0xe0e4,	// (0x00023fbd) bg_popup_heading_pane_g6

0xe0ec,	// (0x00023fc5) bg_popup_heading_pane_g7

0xe0f4,	// (0x00023fcd) bg_popup_heading_pane_g8

0xe0fe,	// (0x00023fd7) bg_popup_heading_pane_g9

0x0008,

0xf8b9,	// (0x00025792) bg_popup_heading_pane_g

0xd922,	// (0x000237fb) bg_popup_sub_pane_g1

0xd92a,	// (0x00023803) bg_popup_sub_pane_g2

0xd932,	// (0x0002380b) bg_popup_sub_pane_g3

0xd93a,	// (0x00023813) bg_popup_sub_pane_g4

0xd942,	// (0x0002381b) bg_popup_sub_pane_g5

0xd94a,	// (0x00023823) bg_popup_sub_pane_g6

0xd952,	// (0x0002382b) bg_popup_sub_pane_g7

0xd95a,	// (0x00023833) bg_popup_sub_pane_g8

0xd962,	// (0x0002383b) bg_popup_sub_pane_g9

0x0008,

0xf893,	// (0x0002576c) bg_popup_sub_pane_g

0xc343,	// (0x0002221c) bg_popup_window_pane_cp5_ParamLimits

0xc343,	// (0x0002221c) bg_popup_window_pane_cp5

0xc492,	// (0x0002236b) popup_note_window_g1_ParamLimits

0xc492,	// (0x0002236b) popup_note_window_g1

0xc49e,	// (0x00022377) popup_note_window_t1_ParamLimits

0xc49e,	// (0x00022377) popup_note_window_t1

0xc4b0,	// (0x00022389) popup_note_window_t2_ParamLimits

0xc4b0,	// (0x00022389) popup_note_window_t2

0xc4c2,	// (0x0002239b) popup_note_window_t3_ParamLimits

0xc4c2,	// (0x0002239b) popup_note_window_t3

0xc4d4,	// (0x000223ad) popup_note_window_t4_ParamLimits

0xc4d4,	// (0x000223ad) popup_note_window_t4

0xc4fc,	// (0x000223d5) popup_note_window_t5_ParamLimits

0xc4fc,	// (0x000223d5) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002549c) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002549c) popup_note_window_t

0xc520,	// (0x000223f9) bg_popup_window_pane_cp6_ParamLimits

0xc520,	// (0x000223f9) bg_popup_window_pane_cp6

0xdf9f,	// (0x00023e78) popup_note_image_window_g1_ParamLimits

0xdf9f,	// (0x00023e78) popup_note_image_window_g1

0xdfab,	// (0x00023e84) popup_note_image_window_g2_ParamLimits

0xdfab,	// (0x00023e84) popup_note_image_window_g2

0x0001,

0xf887,	// (0x00025760) popup_note_image_window_g_ParamLimits

0xf887,	// (0x00025760) popup_note_image_window_g

0xdfc4,	// (0x00023e9d) popup_note_image_window_t1_ParamLimits

0xdfc4,	// (0x00023e9d) popup_note_image_window_t1

0xdfdd,	// (0x00023eb6) popup_note_image_window_t2_ParamLimits

0xdfdd,	// (0x00023eb6) popup_note_image_window_t2

0xdff6,	// (0x00023ecf) popup_note_image_window_t3_ParamLimits

0xdff6,	// (0x00023ecf) popup_note_image_window_t3

0x0002,

0xf88c,	// (0x00025765) popup_note_image_window_t_ParamLimits

0xf88c,	// (0x00025765) popup_note_image_window_t

0xde7c,	// (0x00023d55) bg_popup_window_pane_cp7_ParamLimits

0xde7c,	// (0x00023d55) bg_popup_window_pane_cp7

0xdeac,	// (0x00023d85) popup_note_wait_window_g1_ParamLimits

0xdeac,	// (0x00023d85) popup_note_wait_window_g1

0xdeb8,	// (0x00023d91) popup_note_wait_window_g2_ParamLimits

0xdeb8,	// (0x00023d91) popup_note_wait_window_g2

0x0002,

0xf875,	// (0x0002574e) popup_note_wait_window_g_ParamLimits

0xf875,	// (0x0002574e) popup_note_wait_window_g

0xded0,	// (0x00023da9) popup_note_wait_window_t1_ParamLimits

0xded0,	// (0x00023da9) popup_note_wait_window_t1

0xdef7,	// (0x00023dd0) popup_note_wait_window_t2_ParamLimits

0xdef7,	// (0x00023dd0) popup_note_wait_window_t2

0xdf14,	// (0x00023ded) popup_note_wait_window_t3_ParamLimits

0xdf14,	// (0x00023ded) popup_note_wait_window_t3

0xdf27,	// (0x00023e00) popup_note_wait_window_t4_ParamLimits

0xdf27,	// (0x00023e00) popup_note_wait_window_t4

0x0004,

0xf87c,	// (0x00025755) popup_note_wait_window_t_ParamLimits

0xf87c,	// (0x00025755) popup_note_wait_window_t

0xdf4c,	// (0x00023e25) wait_bar_pane_ParamLimits

0xdf4c,	// (0x00023e25) wait_bar_pane

0xc2f5,	// (0x000221ce) wait_anim_pane

0xc2f5,	// (0x000221ce) wait_border_pane

0xc2eb,	// (0x000221c4) wait_anim_pane_g1

0xc2eb,	// (0x000221c4) wait_anim_pane_g2

0x0001,

0xf747,	// (0x00025620) wait_anim_pane_g

0xde20,	// (0x00023cf9) wait_border_pane_g1

0xde2b,	// (0x00023d04) wait_border_pane_g2

0xde34,	// (0x00023d0d) wait_border_pane_g3

0x0002,

0xf86e,	// (0x00025747) wait_border_pane_g

0xdd82,	// (0x00023c5b) bg_popup_window_pane_cp16_ParamLimits

0xdd82,	// (0x00023c5b) bg_popup_window_pane_cp16

0xdd90,	// (0x00023c69) indicator_popup_pane_cp4_ParamLimits

0xdd90,	// (0x00023c69) indicator_popup_pane_cp4

0xdda4,	// (0x00023c7d) popup_query_data_window_t1_ParamLimits

0xdda4,	// (0x00023c7d) popup_query_data_window_t1

0xddb6,	// (0x00023c8f) popup_query_data_window_t2_ParamLimits

0xddb6,	// (0x00023c8f) popup_query_data_window_t2

0xddcf,	// (0x00023ca8) popup_query_data_window_t3_ParamLimits

0xddcf,	// (0x00023ca8) popup_query_data_window_t3

0x0002,

0xf867,	// (0x00025740) popup_query_data_window_t_ParamLimits

0xf867,	// (0x00025740) popup_query_data_window_t

0xdde9,	// (0x00023cc2) query_popup_data_pane_ParamLimits

0xdde9,	// (0x00023cc2) query_popup_data_pane

0xddfd,	// (0x00023cd6) query_popup_data_pane_cp1_ParamLimits

0xddfd,	// (0x00023cd6) query_popup_data_pane_cp1

0xc520,	// (0x000223f9) bg_popup_window_pane_cp10_ParamLimits

0xc520,	// (0x000223f9) bg_popup_window_pane_cp10

0xdce5,	// (0x00023bbe) indicator_popup_pane_ParamLimits

0xdce5,	// (0x00023bbe) indicator_popup_pane

0xc577,	// (0x00022450) popup_query_code_window_t1_ParamLimits

0xc577,	// (0x00022450) popup_query_code_window_t1

0xdcfd,	// (0x00023bd6) popup_query_code_window_t2_ParamLimits

0xdcfd,	// (0x00023bd6) popup_query_code_window_t2

0xdd3b,	// (0x00023c14) popup_query_code_window_t3_ParamLimits

0xdd3b,	// (0x00023c14) popup_query_code_window_t3

0x0002,

0xf860,	// (0x00025739) popup_query_code_window_t_ParamLimits

0xf860,	// (0x00025739) popup_query_code_window_t

0xdd6a,	// (0x00023c43) query_popup_pane_ParamLimits

0xdd6a,	// (0x00023c43) query_popup_pane

0xc520,	// (0x000223f9) bg_popup_window_pane_cp15_ParamLimits

0xc520,	// (0x000223f9) bg_popup_window_pane_cp15

0xc53e,	// (0x00022417) indicator_popup_pane_cp1_ParamLimits

0xc53e,	// (0x00022417) indicator_popup_pane_cp1

0xc551,	// (0x0002242a) indicator_popup_pane_cp2_ParamLimits

0xc551,	// (0x0002242a) indicator_popup_pane_cp2

0xc564,	// (0x0002243d) popup_query_data_code_window_g1_ParamLimits

0xc564,	// (0x0002243d) popup_query_data_code_window_g1

0xc577,	// (0x00022450) popup_query_data_code_window_t1_ParamLimits

0xc577,	// (0x00022450) popup_query_data_code_window_t1

0xc589,	// (0x00022462) popup_query_data_code_window_t2_ParamLimits

0xc589,	// (0x00022462) popup_query_data_code_window_t2

0xc59b,	// (0x00022474) popup_query_data_code_window_t3_ParamLimits

0xc59b,	// (0x00022474) popup_query_data_code_window_t3

0xc5b1,	// (0x0002248a) popup_query_data_code_window_t4_ParamLimits

0xc5b1,	// (0x0002248a) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x000254a7) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x000254a7) popup_query_data_code_window_t

0xd206,	// (0x000230df) list_single_midp_graphic_pane_g3

0xc5c9,	// (0x000224a2) query_popup_data_pane_cp2_ParamLimits

0xc5dc,	// (0x000224b5) query_popup_pane_cp2_ParamLimits

0xc5dc,	// (0x000224b5) query_popup_pane_cp2

0xc2f5,	// (0x000221ce) bg_popup_window_pane_cp11

0xdcb9,	// (0x00023b92) heading_pane_cp5

0xc66a,	// (0x00022543) listscroll_popup_info_pane

0xc2f5,	// (0x000221ce) input_focus_pane_cp3

0xc5ef,	// (0x000224c8) query_popup_pane_t1

0xc5fd,	// (0x000224d6) list_popup_info_pane_ParamLimits

0xc5fd,	// (0x000224d6) list_popup_info_pane

0xc60c,	// (0x000224e5) listscroll_popup_info_pane_g1

0xc614,	// (0x000224ed) scroll_pane_cp7

0xc61e,	// (0x000224f7) popup_info_list_pane_t1_ParamLimits

0xc61e,	// (0x000224f7) popup_info_list_pane_t1

0xc638,	// (0x00022511) popup_info_list_pane_t2_ParamLimits

0xc638,	// (0x00022511) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x000254b0) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x000254b0) popup_info_list_pane_t

0xc2f5,	// (0x000221ce) bg_popup_window_pane_cp12

0xebae,	// (0x00024a87) find_popup_pane

0xc351,	// (0x0002222a) bg_popup_window_pane_cp3

0xc652,	// (0x0002252b) heading_pane_cp3

0xc65e,	// (0x00022537) listscroll_popup_graphic_pane

0xc2f5,	// (0x000221ce) bg_popup_window_pane_cp4

0x92f1,	// (0x0001f1ca) heading_pane_cp4

0xc66a,	// (0x00022543) listscroll_popup_colour_pane

0xc672,	// (0x0002254b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc672,	// (0x0002254b) cell_large_graphic_colour_none_popup_pane

0x92f9,	// (0x0001f1d2) grid_large_graphic_colour_popup_pane_ParamLimits

0x92f9,	// (0x0001f1d2) grid_large_graphic_colour_popup_pane

0xc686,	// (0x0002255f) listscroll_popup_colour_pane_g1_ParamLimits

0xc686,	// (0x0002255f) listscroll_popup_colour_pane_g1

0xc69d,	// (0x00022576) listscroll_popup_colour_pane_g2_ParamLimits

0xc69d,	// (0x00022576) listscroll_popup_colour_pane_g2

0xc6b4,	// (0x0002258d) listscroll_popup_colour_pane_g3_ParamLimits

0xc6b4,	// (0x0002258d) listscroll_popup_colour_pane_g3

0x931d,	// (0x0001f1f6) listscroll_popup_colour_pane_g4_ParamLimits

0x931d,	// (0x0001f1f6) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x000254b5) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x000254b5) listscroll_popup_colour_pane_g

0xc6c4,	// (0x0002259d) scroll_pane_cp6_ParamLimits

0xc6c4,	// (0x0002259d) scroll_pane_cp6

0x932c,	// (0x0001f205) cell_large_graphic_colour_popup_pane_ParamLimits

0x932c,	// (0x0001f205) cell_large_graphic_colour_popup_pane

0xc6d6,	// (0x000225af) cell_large_graphic_colour_none_popup_pane_t1

0xc2f5,	// (0x000221ce) grid_highlight_pane_cp5

0xc6e5,	// (0x000225be) cell_large_graphic_colour_popup_pane_g1

0xc6ed,	// (0x000225c6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x000254be) cell_large_graphic_colour_popup_pane_g

0xc6f5,	// (0x000225ce) cell_large_graphic_colour_popup_pane_g2_copy1

0xc6fe,	// (0x000225d7) grid_highlight_pane_cp4

0xc706,	// (0x000225df) bg_popup_window_pane_cp8_ParamLimits

0xc706,	// (0x000225df) bg_popup_window_pane_cp8

0xc721,	// (0x000225fa) popup_snote_single_text_window_g1_ParamLimits

0xc721,	// (0x000225fa) popup_snote_single_text_window_g1

0xc733,	// (0x0002260c) popup_snote_single_text_window_t1_ParamLimits

0xc733,	// (0x0002260c) popup_snote_single_text_window_t1

0xc746,	// (0x0002261f) popup_snote_single_text_window_t2_ParamLimits

0xc746,	// (0x0002261f) popup_snote_single_text_window_t2

0xc759,	// (0x00022632) popup_snote_single_text_window_t3_ParamLimits

0xc759,	// (0x00022632) popup_snote_single_text_window_t3

0xc792,	// (0x0002266b) popup_snote_single_text_window_t4_ParamLimits

0xc792,	// (0x0002266b) popup_snote_single_text_window_t4

0xc7c6,	// (0x0002269f) popup_snote_single_text_window_t5_ParamLimits

0xc7c6,	// (0x0002269f) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x000254c3) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x000254c3) popup_snote_single_text_window_t

0xc7f5,	// (0x000226ce) bg_popup_window_pane_cp9_ParamLimits

0xc7f5,	// (0x000226ce) bg_popup_window_pane_cp9

0xc721,	// (0x000225fa) popup_snote_single_graphic_window_g1_ParamLimits

0xc721,	// (0x000225fa) popup_snote_single_graphic_window_g1

0xc803,	// (0x000226dc) popup_snote_single_graphic_window_g2_ParamLimits

0xc803,	// (0x000226dc) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x000254ce) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x000254ce) popup_snote_single_graphic_window_g

0xc80f,	// (0x000226e8) popup_snote_single_graphic_window_t1_ParamLimits

0xc80f,	// (0x000226e8) popup_snote_single_graphic_window_t1

0xc822,	// (0x000226fb) popup_snote_single_graphic_window_t2_ParamLimits

0xc822,	// (0x000226fb) popup_snote_single_graphic_window_t2

0xc835,	// (0x0002270e) popup_snote_single_graphic_window_t3_ParamLimits

0xc835,	// (0x0002270e) popup_snote_single_graphic_window_t3

0xc86e,	// (0x00022747) popup_snote_single_graphic_window_t4_ParamLimits

0xc86e,	// (0x00022747) popup_snote_single_graphic_window_t4

0xc8a2,	// (0x0002277b) popup_snote_single_graphic_window_t5_ParamLimits

0xc8a2,	// (0x0002277b) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x000254d3) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x000254d3) popup_snote_single_graphic_window_t

0xeb32,	// (0x00024a0b) grid_graphic_popup_pane_ParamLimits

0xeb32,	// (0x00024a0b) grid_graphic_popup_pane

0xeb5e,	// (0x00024a37) listscroll_popup_graphic_pane_g1_ParamLimits

0xeb5e,	// (0x00024a37) listscroll_popup_graphic_pane_g1

0xa8d4,	// (0x000207ad) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8d4,	// (0x000207ad) listscroll_popup_graphic_pane_g2

0x0001,

0xf9dd,	// (0x000258b6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9dd,	// (0x000258b6) listscroll_popup_graphic_pane_g

0xe8e1,	// (0x000247ba) scroll_pane_cp5

0xa897,	// (0x00020770) cell_graphic_popup_pane_ParamLimits

0xa897,	// (0x00020770) cell_graphic_popup_pane

0xeafd,	// (0x000249d6) cell_graphic_popup_pane_g1

0xeb05,	// (0x000249de) cell_graphic_popup_pane_g2

0xc6f5,	// (0x000225ce) cell_graphic_popup_pane_g3

0x0002,

0xf9d6,	// (0x000258af) cell_graphic_popup_pane_g

0xeb0e,	// (0x000249e7) cell_graphic_popup_pane_t2

0xc6fe,	// (0x000225d7) grid_highlight_pane_cp3

0xc8e3,	// (0x000227bc) list_gen_pane_ParamLimits

0xc8e3,	// (0x000227bc) list_gen_pane

0xc90b,	// (0x000227e4) scroll_pane

0xa852,	// (0x0002072b) bg_list_pane_g1_ParamLimits

0xa852,	// (0x0002072b) bg_list_pane_g1

0xeaac,	// (0x00024985) bg_list_pane_g2_ParamLimits

0xeaac,	// (0x00024985) bg_list_pane_g2

0xeabf,	// (0x00024998) bg_list_pane_g3_ParamLimits

0xeabf,	// (0x00024998) bg_list_pane_g3

0xead1,	// (0x000249aa) bg_list_pane_g4_ParamLimits

0xead1,	// (0x000249aa) bg_list_pane_g4

0xa86d,	// (0x00020746) bg_list_pane_g5_ParamLimits

0xa86d,	// (0x00020746) bg_list_pane_g5

0x0004,

0xf9cb,	// (0x000258a4) bg_list_pane_g_ParamLimits

0xf9cb,	// (0x000258a4) bg_list_pane_g

0xa805,	// (0x000206de) list_double2_graphic_large_graphic_pane_ParamLimits

0xa805,	// (0x000206de) list_double2_graphic_large_graphic_pane

0xa805,	// (0x000206de) list_double2_graphic_pane_ParamLimits

0xa805,	// (0x000206de) list_double2_graphic_pane

0xa805,	// (0x000206de) list_double2_large_graphic_pane_ParamLimits

0xa805,	// (0x000206de) list_double2_large_graphic_pane

0xa818,	// (0x000206f1) list_double2_pane_ParamLimits

0xa818,	// (0x000206f1) list_double2_pane

0xa805,	// (0x000206de) list_double_graphic_heading_pane_ParamLimits

0xa805,	// (0x000206de) list_double_graphic_heading_pane

0xa805,	// (0x000206de) list_double_graphic_pane_ParamLimits

0xa805,	// (0x000206de) list_double_graphic_pane

0xa805,	// (0x000206de) list_double_heading_pane_ParamLimits

0xa805,	// (0x000206de) list_double_heading_pane

0xa805,	// (0x000206de) list_double_large_graphic_pane_ParamLimits

0xa805,	// (0x000206de) list_double_large_graphic_pane

0xa805,	// (0x000206de) list_double_number_pane_ParamLimits

0xa805,	// (0x000206de) list_double_number_pane

0xa805,	// (0x000206de) list_double_pane_ParamLimits

0xa805,	// (0x000206de) list_double_pane

0xa805,	// (0x000206de) list_double_time_pane_ParamLimits

0xa805,	// (0x000206de) list_double_time_pane

0xa805,	// (0x000206de) list_setting_number_pane_ParamLimits

0xa805,	// (0x000206de) list_setting_number_pane

0xa805,	// (0x000206de) list_setting_pane_ParamLimits

0xa805,	// (0x000206de) list_setting_pane

0x8d0e,	// (0x0001ebe7) list_single_2graphic_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_2graphic_pane

0x8d0e,	// (0x0001ebe7) list_single_graphic_heading_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_graphic_heading_pane

0x8d0e,	// (0x0001ebe7) list_single_graphic_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_graphic_pane

0x8d0e,	// (0x0001ebe7) list_single_heading_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_heading_pane

0xa818,	// (0x000206f1) list_single_large_graphic_pane_ParamLimits

0xa818,	// (0x000206f1) list_single_large_graphic_pane

0x8d0e,	// (0x0001ebe7) list_single_number_heading_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_number_heading_pane

0x8d0e,	// (0x0001ebe7) list_single_number_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_number_pane

0x8d0e,	// (0x0001ebe7) list_single_pane_ParamLimits

0x8d0e,	// (0x0001ebe7) list_single_pane

0xc2f5,	// (0x000221ce) list_highlight_pane_cp1

0x4c9f,	// (0x0001ab78) list_single_pane_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_pane_g1

0x4cab,	// (0x0001ab84) list_single_pane_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_single_pane_g2

0x0001,

0xf60c,	// (0x000254e5) list_single_pane_g_ParamLimits

0xf60c,	// (0x000254e5) list_single_pane_g

0x54fe,	// (0x0001b3d7) list_single_pane_t1_ParamLimits

0x54fe,	// (0x0001b3d7) list_single_pane_t1

0x4c9f,	// (0x0001ab78) list_single_number_pane_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_number_pane_g1

0x4cab,	// (0x0001ab84) list_single_number_pane_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x000254e5) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x000254e5) list_single_number_pane_g

0x5432,	// (0x0001b30b) list_single_number_pane_t1_ParamLimits

0x5432,	// (0x0001b30b) list_single_number_pane_t1

0x54be,	// (0x0001b397) list_single_number_pane_t2_ParamLimits

0x54be,	// (0x0001b397) list_single_number_pane_t2

0x0001,

0xf98c,	// (0x00025865) list_single_number_pane_t_ParamLimits

0xf98c,	// (0x00025865) list_single_number_pane_t

0x4c93,	// (0x0001ab6c) list_single_graphic_pane_g1_ParamLimits

0x4c93,	// (0x0001ab6c) list_single_graphic_pane_g1

0x4c9f,	// (0x0001ab78) list_single_graphic_pane_g2_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_graphic_pane_g2

0x4cab,	// (0x0001ab84) list_single_graphic_pane_g3_ParamLimits

0x4cab,	// (0x0001ab84) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x000254de) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x000254de) list_single_graphic_pane_g

0x4cb7,	// (0x0001ab90) list_single_graphic_pane_t1_ParamLimits

0x4cb7,	// (0x0001ab90) list_single_graphic_pane_t1

0x4c9f,	// (0x0001ab78) list_single_heading_pane_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_heading_pane_g1

0x4cab,	// (0x0001ab84) list_single_heading_pane_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x000254e5) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x000254e5) list_single_heading_pane_g

0x4ccd,	// (0x0001aba6) list_single_heading_pane_t1_ParamLimits

0x4ccd,	// (0x0001aba6) list_single_heading_pane_t1

0x4ce3,	// (0x0001abbc) list_single_heading_pane_t2_ParamLimits

0x4ce3,	// (0x0001abbc) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000254ea) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000254ea) list_single_heading_pane_t

0x4c9f,	// (0x0001ab78) list_single_number_heading_pane_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_number_heading_pane_g1

0x4cab,	// (0x0001ab84) list_single_number_heading_pane_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x000254e5) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x000254e5) list_single_number_heading_pane_g

0x4ccd,	// (0x0001aba6) list_single_number_heading_pane_t1_ParamLimits

0x4ccd,	// (0x0001aba6) list_single_number_heading_pane_t1

0x4cf5,	// (0x0001abce) list_single_number_heading_pane_t2_ParamLimits

0x4cf5,	// (0x0001abce) list_single_number_heading_pane_t2

0x4d07,	// (0x0001abe0) list_single_number_heading_pane_t3_ParamLimits

0x4d07,	// (0x0001abe0) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x000254ef) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x000254ef) list_single_number_heading_pane_t

0x4d19,	// (0x0001abf2) list_single_graphic_heading_pane_g1_ParamLimits

0x4d19,	// (0x0001abf2) list_single_graphic_heading_pane_g1

0x87bc,	// (0x0001e695) list_single_graphic_heading_pane_g4_ParamLimits

0x87bc,	// (0x0001e695) list_single_graphic_heading_pane_g4

0x4cab,	// (0x0001ab84) list_single_graphic_heading_pane_g5_ParamLimits

0x4cab,	// (0x0001ab84) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x000254f6) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x000254f6) list_single_graphic_heading_pane_g

0x4ccd,	// (0x0001aba6) list_single_graphic_heading_pane_t1_ParamLimits

0x4ccd,	// (0x0001aba6) list_single_graphic_heading_pane_t1

0x4d36,	// (0x0001ac0f) list_single_graphic_heading_pane_t2_ParamLimits

0x4d36,	// (0x0001ac0f) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x000254fd) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x000254fd) list_single_graphic_heading_pane_t

0x5643,	// (0x0001b51c) list_single_large_graphic_pane_g1_ParamLimits

0x5643,	// (0x0001b51c) list_single_large_graphic_pane_g1

0x564f,	// (0x0001b528) list_single_large_graphic_pane_g2_ParamLimits

0x564f,	// (0x0001b528) list_single_large_graphic_pane_g2

0x565b,	// (0x0001b534) list_single_large_graphic_pane_g3_ParamLimits

0x565b,	// (0x0001b534) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00025502) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00025502) list_single_large_graphic_pane_g

0xde2b,	// (0x00023d04) wait_border_pane_g2_copy1

0x87cd,	// (0x0001e6a6) list_single_large_graphic_pane_g4_cp2

0x5667,	// (0x0001b540) list_single_large_graphic_pane_t1_ParamLimits

0x5667,	// (0x0001b540) list_single_large_graphic_pane_t1

0x87d5,	// (0x0001e6ae) list_double_pane_g1_ParamLimits

0x87d5,	// (0x0001e6ae) list_double_pane_g1

0x87e1,	// (0x0001e6ba) list_double_pane_g2_ParamLimits

0x87e1,	// (0x0001e6ba) list_double_pane_g2

0x0001,

0xf630,	// (0x00025509) list_double_pane_g_ParamLimits

0xf630,	// (0x00025509) list_double_pane_g

0x87ed,	// (0x0001e6c6) list_double_pane_t1_ParamLimits

0x87ed,	// (0x0001e6c6) list_double_pane_t1

0x8803,	// (0x0001e6dc) list_double_pane_t2_ParamLimits

0x8803,	// (0x0001e6dc) list_double_pane_t2

0x0001,

0xf635,	// (0x0002550e) list_double_pane_t_ParamLimits

0xf635,	// (0x0002550e) list_double_pane_t

0x8815,	// (0x0001e6ee) list_double2_pane_g1_ParamLimits

0x8815,	// (0x0001e6ee) list_double2_pane_g1

0x4f6f,	// (0x0001ae48) list_double2_pane_g2_ParamLimits

0x4f6f,	// (0x0001ae48) list_double2_pane_g2

0x0001,

0xf63a,	// (0x00025513) list_double2_pane_g_ParamLimits

0xf63a,	// (0x00025513) list_double2_pane_g

0x8826,	// (0x0001e6ff) list_double2_pane_t1_ParamLimits

0x8826,	// (0x0001e6ff) list_double2_pane_t1

0x883c,	// (0x0001e715) list_double2_pane_t2_ParamLimits

0x883c,	// (0x0001e715) list_double2_pane_t2

0x0001,

0xf63f,	// (0x00025518) list_double2_pane_t_ParamLimits

0xf63f,	// (0x00025518) list_double2_pane_t

0x87d5,	// (0x0001e6ae) list_double_number_pane_g1_ParamLimits

0x87d5,	// (0x0001e6ae) list_double_number_pane_g1

0x87e1,	// (0x0001e6ba) list_double_number_pane_g2_ParamLimits

0x87e1,	// (0x0001e6ba) list_double_number_pane_g2

0x0001,

0xf630,	// (0x00025509) list_double_number_pane_g_ParamLimits

0xf630,	// (0x00025509) list_double_number_pane_g

0x884e,	// (0x0001e727) list_double_number_pane_t1_ParamLimits

0x884e,	// (0x0001e727) list_double_number_pane_t1

0x8860,	// (0x0001e739) list_double_number_pane_t2_ParamLimits

0x8860,	// (0x0001e739) list_double_number_pane_t2

0x8876,	// (0x0001e74f) list_double_number_pane_t3_ParamLimits

0x8876,	// (0x0001e74f) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002551d) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002551d) list_double_number_pane_t

0x8888,	// (0x0001e761) list_double_graphic_pane_g1_ParamLimits

0x8888,	// (0x0001e761) list_double_graphic_pane_g1

0x8894,	// (0x0001e76d) list_double_graphic_pane_g2_ParamLimits

0x8894,	// (0x0001e76d) list_double_graphic_pane_g2

0x88a3,	// (0x0001e77c) list_double_graphic_pane_g3_ParamLimits

0x88a3,	// (0x0001e77c) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x00025524) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x00025524) list_double_graphic_pane_g

0x88bb,	// (0x0001e794) list_double_graphic_pane_t1_ParamLimits

0x88bb,	// (0x0001e794) list_double_graphic_pane_t1

0x88d1,	// (0x0001e7aa) list_double_graphic_pane_t2_ParamLimits

0x88d1,	// (0x0001e7aa) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002552d) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002552d) list_double_graphic_pane_t

0x8888,	// (0x0001e761) list_double2_graphic_pane_g1_ParamLimits

0x8888,	// (0x0001e761) list_double2_graphic_pane_g1

0x88e3,	// (0x0001e7bc) list_double2_graphic_pane_g2_ParamLimits

0x88e3,	// (0x0001e7bc) list_double2_graphic_pane_g2

0x88ef,	// (0x0001e7c8) list_double2_graphic_pane_g3_ParamLimits

0x88ef,	// (0x0001e7c8) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x00025532) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x00025532) list_double2_graphic_pane_g

0x8860,	// (0x0001e739) list_double2_graphic_pane_t1_ParamLimits

0x8860,	// (0x0001e739) list_double2_graphic_pane_t1

0x88fb,	// (0x0001e7d4) list_double2_graphic_pane_t2_ParamLimits

0x88fb,	// (0x0001e7d4) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x00025539) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x00025539) list_double2_graphic_pane_t

0x890d,	// (0x0001e7e6) list_double_large_graphic_pane_g1_ParamLimits

0x890d,	// (0x0001e7e6) list_double_large_graphic_pane_g1

0x8938,	// (0x0001e811) list_double_large_graphic_pane_g2_ParamLimits

0x8938,	// (0x0001e811) list_double_large_graphic_pane_g2

0x87e1,	// (0x0001e6ba) list_double_large_graphic_pane_g3_ParamLimits

0x87e1,	// (0x0001e6ba) list_double_large_graphic_pane_g3

0x8949,	// (0x0001e822) list_double_large_graphic_pane_g4_ParamLimits

0x8949,	// (0x0001e822) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002553e) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002553e) list_double_large_graphic_pane_g

0x895b,	// (0x0001e834) list_double_large_graphic_pane_t1_ParamLimits

0x895b,	// (0x0001e834) list_double_large_graphic_pane_t1

0x8974,	// (0x0001e84d) list_double_large_graphic_pane_t2_ParamLimits

0x8974,	// (0x0001e84d) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x00025549) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x00025549) list_double_large_graphic_pane_t

0x8986,	// (0x0001e85f) list_double2_large_graphic_pane_g1_ParamLimits

0x8986,	// (0x0001e85f) list_double2_large_graphic_pane_g1

0x8938,	// (0x0001e811) list_double2_large_graphic_pane_g2_ParamLimits

0x8938,	// (0x0001e811) list_double2_large_graphic_pane_g2

0x87e1,	// (0x0001e6ba) list_double2_large_graphic_pane_g3_ParamLimits

0x87e1,	// (0x0001e6ba) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002554e) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002554e) list_double2_large_graphic_pane_g

0x8992,	// (0x0001e86b) list_double2_large_graphic_pane_t1_ParamLimits

0x8992,	// (0x0001e86b) list_double2_large_graphic_pane_t1

0x89a8,	// (0x0001e881) list_double2_large_graphic_pane_t2_ParamLimits

0x89a8,	// (0x0001e881) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x00025555) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x00025555) list_double2_large_graphic_pane_t

0x89ba,	// (0x0001e893) list_double_heading_pane_g1_ParamLimits

0x89ba,	// (0x0001e893) list_double_heading_pane_g1

0x4d96,	// (0x0001ac6f) list_double_heading_pane_g2_ParamLimits

0x4d96,	// (0x0001ac6f) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002555a) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002555a) list_double_heading_pane_g

0x89cb,	// (0x0001e8a4) list_double_heading_pane_t1_ParamLimits

0x89cb,	// (0x0001e8a4) list_double_heading_pane_t1

0x89e1,	// (0x0001e8ba) list_double_heading_pane_t2_ParamLimits

0x89e1,	// (0x0001e8ba) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002555f) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002555f) list_double_heading_pane_t

0x4e27,	// (0x0001ad00) list_double_graphic_heading_pane_g1_ParamLimits

0x4e27,	// (0x0001ad00) list_double_graphic_heading_pane_g1

0x89ba,	// (0x0001e893) list_double_graphic_heading_pane_g2_ParamLimits

0x89ba,	// (0x0001e893) list_double_graphic_heading_pane_g2

0x4d96,	// (0x0001ac6f) list_double_graphic_heading_pane_g3_ParamLimits

0x4d96,	// (0x0001ac6f) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x00025564) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x00025564) list_double_graphic_heading_pane_g

0x89f3,	// (0x0001e8cc) list_double_graphic_heading_pane_t1_ParamLimits

0x89f3,	// (0x0001e8cc) list_double_graphic_heading_pane_t1

0x88fb,	// (0x0001e7d4) list_double_graphic_heading_pane_t2_ParamLimits

0x88fb,	// (0x0001e7d4) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002556b) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002556b) list_double_graphic_heading_pane_t

0x8938,	// (0x0001e811) list_double_time_pane_g1_ParamLimits

0x8938,	// (0x0001e811) list_double_time_pane_g1

0x87e1,	// (0x0001e6ba) list_double_time_pane_g2_ParamLimits

0x87e1,	// (0x0001e6ba) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00025570) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00025570) list_double_time_pane_g

0x8992,	// (0x0001e86b) list_double_time_pane_t1_ParamLimits

0x8992,	// (0x0001e86b) list_double_time_pane_t1

0x8a09,	// (0x0001e8e2) list_double_time_pane_t2_ParamLimits

0x8a09,	// (0x0001e8e2) list_double_time_pane_t2

0x8a1b,	// (0x0001e8f4) list_double_time_pane_t3_ParamLimits

0x8a1b,	// (0x0001e8f4) list_double_time_pane_t3

0x8a2d,	// (0x0001e906) list_double_time_pane_t4_ParamLimits

0x8a2d,	// (0x0001e906) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00025575) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00025575) list_double_time_pane_t

0x4e82,	// (0x0001ad5b) list_setting_pane_g1_ParamLimits

0x4e82,	// (0x0001ad5b) list_setting_pane_g1

0x4e8e,	// (0x0001ad67) list_setting_pane_g2_ParamLimits

0x4e8e,	// (0x0001ad67) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002557e) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002557e) list_setting_pane_g

0x8a3f,	// (0x0001e918) list_setting_pane_t1_ParamLimits

0x8a3f,	// (0x0001e918) list_setting_pane_t1

0x8a59,	// (0x0001e932) list_setting_pane_t2_ParamLimits

0x8a59,	// (0x0001e932) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00025583) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00025583) list_setting_pane_t

0x8a96,	// (0x0001e96f) set_value_pane_cp_ParamLimits

0x8a96,	// (0x0001e96f) set_value_pane_cp

0x8aa2,	// (0x0001e97b) list_setting_number_pane_g1_ParamLimits

0x8aa2,	// (0x0001e97b) list_setting_number_pane_g1

0x8aae,	// (0x0001e987) list_setting_number_pane_g2_ParamLimits

0x8aae,	// (0x0001e987) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002558a) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002558a) list_setting_number_pane_g

0x8aba,	// (0x0001e993) list_setting_number_pane_t1_ParamLimits

0x8aba,	// (0x0001e993) list_setting_number_pane_t1

0x8ad3,	// (0x0001e9ac) list_setting_number_pane_t2_ParamLimits

0x8ad3,	// (0x0001e9ac) list_setting_number_pane_t2

0x8aed,	// (0x0001e9c6) list_setting_number_pane_t3_ParamLimits

0x8aed,	// (0x0001e9c6) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002558f) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002558f) list_setting_number_pane_t

0x8a96,	// (0x0001e96f) set_value_pane_ParamLimits

0x8a96,	// (0x0001e96f) set_value_pane

0xc93f,	// (0x00022818) bg_set_opt_pane_ParamLimits

0xc93f,	// (0x00022818) bg_set_opt_pane

0x50db,	// (0x0001afb4) set_value_pane_t1

0xc960,	// (0x00022839) slider_set_pane_cp3

0xc969,	// (0x00022842) volume_small_pane_cp

0xc972,	// (0x0002284b) list_form_gen_pane

0xc97b,	// (0x00022854) scroll_pane_cp8

0x8b30,	// (0x0001ea09) form_field_data_pane_ParamLimits

0x8b30,	// (0x0001ea09) form_field_data_pane

0x8b47,	// (0x0001ea20) form_field_data_wide_pane_ParamLimits

0x8b47,	// (0x0001ea20) form_field_data_wide_pane

0x8b67,	// (0x0001ea40) form_field_popup_pane_ParamLimits

0x8b67,	// (0x0001ea40) form_field_popup_pane

0x8b85,	// (0x0001ea5e) form_field_popup_wide_pane_ParamLimits

0x8b85,	// (0x0001ea5e) form_field_popup_wide_pane

0x516b,	// (0x0001b044) form_field_slider_pane_ParamLimits

0x516b,	// (0x0001b044) form_field_slider_pane

0x517e,	// (0x0001b057) form_field_slider_wide_pane_ParamLimits

0x517e,	// (0x0001b057) form_field_slider_wide_pane

0xc98c,	// (0x00022865) data_form_pane

0x8ba6,	// (0x0001ea7f) form_field_data_pane_t1

0xc998,	// (0x00022871) input_focus_pane

0xc9a6,	// (0x0002287f) data_form_wide_pane

0x51c1,	// (0x0001b09a) form_field_data_wide_pane_t1

0xc713,	// (0x000225ec) input_focus_pane_cp6

0x8bc0,	// (0x0001ea99) form_field_popup_pane_t1

0xc998,	// (0x00022871) input_focus_pane_cp7

0xc9d2,	// (0x000228ab) list_form_pane

0x5205,	// (0x0001b0de) form_field_popup_wide_pane_t1

0xc998,	// (0x00022871) input_focus_pane_cp8

0xc9de,	// (0x000228b7) list_form_wide_pane

0x8be2,	// (0x0001eabb) form_field_slider_pane_t1_ParamLimits

0x8be2,	// (0x0001eabb) form_field_slider_pane_t1

0x8bfa,	// (0x0001ead3) form_field_slider_pane_t2_ParamLimits

0x8bfa,	// (0x0001ead3) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002559f) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002559f) form_field_slider_pane_t

0xc343,	// (0x0002221c) input_focus_pane_cp9_ParamLimits

0xc343,	// (0x0002221c) input_focus_pane_cp9

0x8c0f,	// (0x0001eae8) slider_cont_pane_ParamLimits

0x8c0f,	// (0x0001eae8) slider_cont_pane

0xc9ed,	// (0x000228c6) form_field_slider_wide_pane_t1_ParamLimits

0xc9ed,	// (0x000228c6) form_field_slider_wide_pane_t1

0x525c,	// (0x0001b135) form_field_slider_wide_pane_t2_ParamLimits

0x525c,	// (0x0001b135) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x000255a4) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x000255a4) form_field_slider_wide_pane_t

0xc343,	// (0x0002221c) input_focus_pane_cp10_ParamLimits

0xc343,	// (0x0002221c) input_focus_pane_cp10

0x8c23,	// (0x0001eafc) slider_cont_pane_cp1_ParamLimits

0x8c23,	// (0x0001eafc) slider_cont_pane_cp1

0x8c37,	// (0x0001eb10) slider_form_pane_cp

0xc9ff,	// (0x000228d8) input_focus_pane_g1

0xca07,	// (0x000228e0) input_focus_pane_g2

0xca0f,	// (0x000228e8) input_focus_pane_g3

0xca17,	// (0x000228f0) input_focus_pane_g4

0xca1f,	// (0x000228f8) input_focus_pane_g5

0xca27,	// (0x00022900) input_focus_pane_g6

0xca2f,	// (0x00022908) input_focus_pane_g7

0xca37,	// (0x00022910) input_focus_pane_g8

0xca3f,	// (0x00022918) input_focus_pane_g9

0xc2eb,	// (0x000221c4) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x000255a9) input_focus_pane_g

0xde34,	// (0x00023d0d) wait_border_pane_g3_copy1

0x8c3f,	// (0x0001eb18) data_form_pane_t1

0xc2eb,	// (0x000221c4) wait_anim_pane_g1_copy1

0x8ce2,	// (0x0001ebbb) data_form_wide_pane_t1

0x8c59,	// (0x0001eb32) list_form_graphic_pane_cp_ParamLimits

0x8c59,	// (0x0001eb32) list_form_graphic_pane_cp

0xea55,	// (0x0002492e) slider_form_pane_g1

0xea5e,	// (0x00024937) slider_form_pane_g2

0x0006,

0xf9bc,	// (0x00025895) slider_form_pane_g

0x8c6c,	// (0x0001eb45) list_form_graphic_pane_ParamLimits

0x8c6c,	// (0x0001eb45) list_form_graphic_pane

0x52d6,	// (0x0001b1af) list_form_graphic_pane_g1

0x52de,	// (0x0001b1b7) list_form_graphic_pane_t1_ParamLimits

0x52de,	// (0x0001b1b7) list_form_graphic_pane_t1

0xc351,	// (0x0002222a) list_highlight_pane_cp5_ParamLimits

0xc351,	// (0x0002222a) list_highlight_pane_cp5

0x52f3,	// (0x0001b1cc) find_pane_g1

0xca47,	// (0x00022920) input_find_pane

0x52fc,	// (0x0001b1d5) input_find_pane_g1_ParamLimits

0x52fc,	// (0x0001b1d5) input_find_pane_g1

0x5308,	// (0x0001b1e1) input_find_pane_t1_ParamLimits

0x5308,	// (0x0001b1e1) input_find_pane_t1

0x531d,	// (0x0001b1f6) input_find_pane_t2_ParamLimits

0x531d,	// (0x0001b1f6) input_find_pane_t2

0x0001,

0xf6e5,	// (0x000255be) input_find_pane_t_ParamLimits

0xf6e5,	// (0x000255be) input_find_pane_t

0xca50,	// (0x00022929) input_focus_pane_cp5_ParamLimits

0xca50,	// (0x00022929) input_focus_pane_cp5

0x9361,	// (0x0001f23a) bg_popup_window_pane_cp2_ParamLimits

0x9361,	// (0x0001f23a) bg_popup_window_pane_cp2

0x936e,	// (0x0001f247) listscroll_menu_pane_ParamLimits

0x936e,	// (0x0001f247) listscroll_menu_pane

0x937a,	// (0x0001f253) popup_submenu_window_ParamLimits

0x937a,	// (0x0001f253) popup_submenu_window

0xca5e,	// (0x00022937) find_popup_pane_g1

0xca66,	// (0x0002293f) input_popup_find_pane_cp

0xca50,	// (0x00022929) input_focus_pane_cp4_ParamLimits

0xca50,	// (0x00022929) input_focus_pane_cp4

0xca70,	// (0x00022949) input_popup_find_pane_t1_ParamLimits

0xca70,	// (0x00022949) input_popup_find_pane_t1

0xc2f5,	// (0x000221ce) bg_popup_sub_pane_cp

0xca9e,	// (0x00022977) listscroll_popup_sub_pane

0xcaa6,	// (0x0002297f) list_submenu_pane_ParamLimits

0xcaa6,	// (0x0002297f) list_submenu_pane

0xcab7,	// (0x00022990) scroll_pane_cp4

0xcabf,	// (0x00022998) list_single_popup_submenu_pane_ParamLimits

0xcabf,	// (0x00022998) list_single_popup_submenu_pane

0xcad2,	// (0x000229ab) list_single_popup_submenu_pane_g1

0xcada,	// (0x000229b3) list_single_popup_submenu_pane_t1_ParamLimits

0xcada,	// (0x000229b3) list_single_popup_submenu_pane_t1

0xc343,	// (0x0002221c) bg_active_tab_pane_cp1_ParamLimits

0xc343,	// (0x0002221c) bg_active_tab_pane_cp1

0x93ac,	// (0x0001f285) tabs_2_active_pane_g1

0x93b4,	// (0x0001f28d) tabs_2_active_pane_t1

0xc343,	// (0x0002221c) bg_passive_tab_pane_cp1_ParamLimits

0xc343,	// (0x0002221c) bg_passive_tab_pane_cp1

0x93ac,	// (0x0001f285) tabs_2_passive_pane_g1

0x93b4,	// (0x0001f28d) tabs_2_passive_pane_t1

0xc351,	// (0x0002222a) bg_active_tab_pane_cp4

0x93c6,	// (0x0001f29f) tabs_2_long_active_pane_t1

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp4

0x667e,	// (0x0001c557) list_single_midp_graphic_pane_g4_ParamLimits

0xc351,	// (0x0002222a) bg_active_tab_pane_cp5

0x93d9,	// (0x0001f2b2) tabs_3_long_active_pane_t1

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp5

0x667e,	// (0x0001c557) list_single_midp_graphic_pane_g4

0xc351,	// (0x0002222a) bg_popup_window_pane_cp13_ParamLimits

0xc351,	// (0x0002222a) bg_popup_window_pane_cp13

0xcb04,	// (0x000229dd) listscroll_popup_fast_pane_ParamLimits

0xcb04,	// (0x000229dd) listscroll_popup_fast_pane

0xcb13,	// (0x000229ec) grid_popup_fast_pane_ParamLimits

0xcb13,	// (0x000229ec) grid_popup_fast_pane

0xcb25,	// (0x000229fe) scroll_pane_cp9_ParamLimits

0xcb25,	// (0x000229fe) scroll_pane_cp9

0x0b8a,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x0b8a,	// (0x00016a63) list_single_graphic_hl_pane_t1_cp2

0xcb49,	// (0x00022a22) input_focus_pane_cp20_ParamLimits

0xcb49,	// (0x00022a22) input_focus_pane_cp20

0xcb57,	// (0x00022a30) query_popup_data_pane_t1_ParamLimits

0xcb57,	// (0x00022a30) query_popup_data_pane_t1

0xcb6a,	// (0x00022a43) query_popup_data_pane_t2_ParamLimits

0xcb6a,	// (0x00022a43) query_popup_data_pane_t2

0xcbb0,	// (0x00022a89) query_popup_data_pane_t3_ParamLimits

0xcbb0,	// (0x00022a89) query_popup_data_pane_t3

0xcbf1,	// (0x00022aca) query_popup_data_pane_t4_ParamLimits

0xcbf1,	// (0x00022aca) query_popup_data_pane_t4

0xcc2d,	// (0x00022b06) query_popup_data_pane_t5_ParamLimits

0xcc2d,	// (0x00022b06) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x000255c3) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x000255c3) query_popup_data_pane_t

0xc9ff,	// (0x000228d8) bg_set_opt_pane_g1

0xca07,	// (0x000228e0) bg_set_opt_pane_g2

0xca0f,	// (0x000228e8) bg_set_opt_pane_g3

0xca17,	// (0x000228f0) bg_set_opt_pane_g4

0xca1f,	// (0x000228f8) bg_set_opt_pane_g5

0xca27,	// (0x00022900) bg_set_opt_pane_g6

0xca2f,	// (0x00022908) bg_set_opt_pane_g7

0xca37,	// (0x00022910) bg_set_opt_pane_g8

0xca3f,	// (0x00022918) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x000255ce) bg_set_opt_pane_g

0x62ec,	// (0x0001c1c5) control_top_pane_stacon_ParamLimits

0x62ec,	// (0x0001c1c5) control_top_pane_stacon

0x633f,	// (0x0001c218) signal_pane_stacon_ParamLimits

0x633f,	// (0x0001c218) signal_pane_stacon

0xd08c,	// (0x00022f65) stacon_top_pane_g1_ParamLimits

0xd08c,	// (0x00022f65) stacon_top_pane_g1

0x6364,	// (0x0001c23d) title_pane_stacon_ParamLimits

0x6364,	// (0x0001c23d) title_pane_stacon

0x638e,	// (0x0001c267) uni_indicator_pane_stacon_ParamLimits

0x638e,	// (0x0001c267) uni_indicator_pane_stacon

0x63a3,	// (0x0001c27c) battery_pane_stacon_ParamLimits

0x63a3,	// (0x0001c27c) battery_pane_stacon

0x63e7,	// (0x0001c2c0) control_bottom_pane_stacon_ParamLimits

0x63e7,	// (0x0001c2c0) control_bottom_pane_stacon

0x640a,	// (0x0001c2e3) navi_pane_stacon_ParamLimits

0x640a,	// (0x0001c2e3) navi_pane_stacon

0xd0ae,	// (0x00022f87) stacon_bottom_pane_g1_ParamLimits

0xd0ae,	// (0x00022f87) stacon_bottom_pane_g1

0x604d,	// (0x0001bf26) aid_levels_signal_lsc_ParamLimits

0x604d,	// (0x0001bf26) aid_levels_signal_lsc

0x6064,	// (0x0001bf3d) signal_pane_stacon_g1_ParamLimits

0x6064,	// (0x0001bf3d) signal_pane_stacon_g1

0x6078,	// (0x0001bf51) signal_pane_stacon_g2_ParamLimits

0x6078,	// (0x0001bf51) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x000255e1) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x000255e1) signal_pane_stacon_g

0x60ad,	// (0x0001bf86) title_pane_stacon_t1_ParamLimits

0x60ad,	// (0x0001bf86) title_pane_stacon_t1

0xcc71,	// (0x00022b4a) uni_indicator_pane_stacon_g1

0xcc7b,	// (0x00022b54) uni_indicator_pane_stacon_g2

0xcc85,	// (0x00022b5e) uni_indicator_pane_stacon_g3

0xcc8f,	// (0x00022b68) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x000255ed) uni_indicator_pane_stacon_g

0x60d2,	// (0x0001bfab) control_top_pane_stacon_g1

0x60da,	// (0x0001bfb3) control_top_pane_stacon_t1_ParamLimits

0x60da,	// (0x0001bfb3) control_top_pane_stacon_t1

0x6111,	// (0x0001bfea) aid_levels_battery_lsc_ParamLimits

0x6111,	// (0x0001bfea) aid_levels_battery_lsc

0x6129,	// (0x0001c002) battery_pane_stacon_g1_ParamLimits

0x6129,	// (0x0001c002) battery_pane_stacon_g1

0x613c,	// (0x0001c015) battery_pane_stacon_g2_ParamLimits

0x613c,	// (0x0001c015) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x000255f6) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x000255f6) battery_pane_stacon_g

0x617a,	// (0x0001c053) navi_icon_pane_stacon

0x618e,	// (0x0001c067) navi_navi_pane_stacon

0x617a,	// (0x0001c053) navi_text_pane_stacon

0x60d2,	// (0x0001bfab) control_bottom_pane_stacon_g1

0x61a2,	// (0x0001c07b) control_bottom_pane_stacon_t1_ParamLimits

0x61a2,	// (0x0001c07b) control_bottom_pane_stacon_t1

0x93eb,	// (0x0001f2c4) grid_app_pane_ParamLimits

0x93eb,	// (0x0001f2c4) grid_app_pane

0x9421,	// (0x0001f2fa) scroll_pane_cp15_ParamLimits

0x9421,	// (0x0001f2fa) scroll_pane_cp15

0x943e,	// (0x0001f317) cell_app_pane_ParamLimits

0x943e,	// (0x0001f317) cell_app_pane

0x9485,	// (0x0001f35e) cell_app_pane_g1_ParamLimits

0x9485,	// (0x0001f35e) cell_app_pane_g1

0xccb3,	// (0x00022b8c) cell_app_pane_g2_ParamLimits

0xccb3,	// (0x00022b8c) cell_app_pane_g2

0x0001,

0xf722,	// (0x000255fb) cell_app_pane_g_ParamLimits

0xf722,	// (0x000255fb) cell_app_pane_g

0xccbf,	// (0x00022b98) cell_app_pane_t1_ParamLimits

0xccbf,	// (0x00022b98) cell_app_pane_t1

0xccd1,	// (0x00022baa) grid_highlight_pane_ParamLimits

0xccd1,	// (0x00022baa) grid_highlight_pane

0xc9ff,	// (0x000228d8) cell_highlight_pane_g1

0xca07,	// (0x000228e0) cell_highlight_pane_g2

0xca0f,	// (0x000228e8) cell_highlight_pane_g3

0xca17,	// (0x000228f0) cell_highlight_pane_g4

0xca1f,	// (0x000228f8) cell_highlight_pane_g5

0xca27,	// (0x00022900) cell_highlight_pane_g6

0xca2f,	// (0x00022908) cell_highlight_pane_g7

0xca37,	// (0x00022910) cell_highlight_pane_g8

0xca3f,	// (0x00022918) cell_highlight_pane_g9

0xc2eb,	// (0x000221c4) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x000255a9) cell_highlight_pane_g

0xcce2,	// (0x00022bbb) bg_scroll_pane

0x61ec,	// (0x0001c0c5) scroll_handle_pane

0xcd29,	// (0x00022c02) scroll_bg_pane_g1

0xcd3e,	// (0x00022c17) scroll_bg_pane_g2

0xcd56,	// (0x00022c2f) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x00025600) scroll_bg_pane_g

0xcd6b,	// (0x00022c44) scroll_handle_focus_pane_ParamLimits

0xcd6b,	// (0x00022c44) scroll_handle_focus_pane

0xcd29,	// (0x00022c02) scroll_handle_pane_g1

0xcd78,	// (0x00022c51) scroll_handle_pane_g2

0xcd56,	// (0x00022c2f) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x00025607) scroll_handle_pane_g

0xca50,	// (0x00022929) bg_popup_sub_pane_cp21_ParamLimits

0xca50,	// (0x00022929) bg_popup_sub_pane_cp21

0xcd8c,	// (0x00022c65) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd8c,	// (0x00022c65) popup_fep_japan_predictive_window_t1

0xcda3,	// (0x00022c7c) popup_fep_japan_predictive_window_t2_ParamLimits

0xcda3,	// (0x00022c7c) popup_fep_japan_predictive_window_t2

0xcdd6,	// (0x00022caf) popup_fep_japan_predictive_window_t3_ParamLimits

0xcdd6,	// (0x00022caf) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002560e) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002560e) popup_fep_japan_predictive_window_t

0xc2f5,	// (0x000221ce) bg_popup_sub_pane_cp23

0xce0d,	// (0x00022ce6) listscroll_japin_cand_pane

0xce15,	// (0x00022cee) popup_fep_japan_candidate_window_t1

0xce23,	// (0x00022cfc) candidate_pane_ParamLimits

0xce23,	// (0x00022cfc) candidate_pane

0xce35,	// (0x00022d0e) scroll_pane_cp30

0xce3d,	// (0x00022d16) list_single_popup_jap_candidate_pane_ParamLimits

0xce3d,	// (0x00022d16) list_single_popup_jap_candidate_pane

0xc2f5,	// (0x000221ce) list_highlight_pane_cp30

0xce51,	// (0x00022d2a) list_single_popup_jap_candidate_pane_t1

0xce60,	// (0x00022d39) level_1_signal

0xce6d,	// (0x00022d46) level_2_signal

0xce7a,	// (0x00022d53) level_3_signal

0xce87,	// (0x00022d60) level_4_signal

0xce94,	// (0x00022d6d) level_5_signal

0xcea1,	// (0x00022d7a) level_6_signal

0xceae,	// (0x00022d87) level_7_signal

0xce60,	// (0x00022d39) level_1_battery

0xce6d,	// (0x00022d46) level_2_battery

0xce7a,	// (0x00022d53) level_3_battery

0xce87,	// (0x00022d60) level_4_battery

0xce94,	// (0x00022d6d) level_5_battery

0xcea1,	// (0x00022d7a) level_6_battery

0xceae,	// (0x00022d87) level_7_battery

0xced3,	// (0x00022dac) list_menu_pane_ParamLimits

0xced3,	// (0x00022dac) list_menu_pane

0xcee4,	// (0x00022dbd) scroll_pane_cp25_ParamLimits

0xcee4,	// (0x00022dbd) scroll_pane_cp25

0xcefd,	// (0x00022dd6) list_double2_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double2_graphic_pane_cp2

0xcefd,	// (0x00022dd6) list_double2_large_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double2_large_graphic_pane_cp2

0xcefd,	// (0x00022dd6) list_double2_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double2_pane_cp2

0xcefd,	// (0x00022dd6) list_double_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double_graphic_pane_cp2

0xcefd,	// (0x00022dd6) list_double_large_graphic_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double_large_graphic_pane_cp2

0xcefd,	// (0x00022dd6) list_double_number_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double_number_pane_cp2

0xcefd,	// (0x00022dd6) list_double_pane_cp2_ParamLimits

0xcefd,	// (0x00022dd6) list_double_pane_cp2

0x94c3,	// (0x0001f39c) list_single_2graphic_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_2graphic_pane_cp2

0x94c3,	// (0x0001f39c) list_single_graphic_heading_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_graphic_heading_pane_cp2

0x94c3,	// (0x0001f39c) list_single_graphic_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_graphic_pane_cp2

0x94c3,	// (0x0001f39c) list_single_heading_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_heading_pane_cp2

0xcf0d,	// (0x00022de6) list_single_large_graphic_pane_cp2_ParamLimits

0xcf0d,	// (0x00022de6) list_single_large_graphic_pane_cp2

0x94c3,	// (0x0001f39c) list_single_number_heading_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_number_heading_pane_cp2

0x94c3,	// (0x0001f39c) list_single_number_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_number_pane_cp2

0x94c3,	// (0x0001f39c) list_single_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_pane_cp2

0xcf27,	// (0x00022e00) bg_popup_sub_pane_cp22

0x629e,	// (0x0001c177) popup_side_volume_key_window_g1

0x62c8,	// (0x0001c1a1) popup_side_volume_key_window_t1

0x62e4,	// (0x0001c1bd) volume_small_pane_cp1

0xc343,	// (0x0002221c) bg_popup_sub_pane_cp24_ParamLimits

0xc343,	// (0x0002221c) bg_popup_sub_pane_cp24

0xcf3d,	// (0x00022e16) fep_china_uni_candidate_pane_ParamLimits

0xcf3d,	// (0x00022e16) fep_china_uni_candidate_pane

0xcf51,	// (0x00022e2a) fep_china_uni_entry_pane

0xcf61,	// (0x00022e3a) popup_fep_china_uni_window_g1

0xcf7d,	// (0x00022e56) fep_china_uni_entry_pane_g1

0xcf85,	// (0x00022e5e) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002563b) fep_china_uni_entry_pane_g

0xcf8d,	// (0x00022e66) fep_entry_item_pane

0xcf97,	// (0x00022e70) fep_candidate_item_pane

0xcf9f,	// (0x00022e78) fep_china_uni_candidate_pane_g1

0xcfa7,	// (0x00022e80) fep_china_uni_candidate_pane_g2

0xcfaf,	// (0x00022e88) fep_china_uni_candidate_pane_g3

0xcfb7,	// (0x00022e90) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x00025640) fep_china_uni_candidate_pane_g

0xc2eb,	// (0x000221c4) fep_entry_item_pane_g1

0xcfbf,	// (0x00022e98) fep_entry_item_pane_t1_ParamLimits

0xcfbf,	// (0x00022e98) fep_entry_item_pane_t1

0xcfd5,	// (0x00022eae) fep_candidate_item_pane_t1_ParamLimits

0xcfd5,	// (0x00022eae) fep_candidate_item_pane_t1

0xcfea,	// (0x00022ec3) fep_candidate_item_pane_t2_ParamLimits

0xcfea,	// (0x00022ec3) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x00025649) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x00025649) fep_candidate_item_pane_t

0xc351,	// (0x0002222a) list_highlight_pane_cp31_ParamLimits

0xc351,	// (0x0002222a) list_highlight_pane_cp31

0xcffc,	// (0x00022ed5) level_1_signal_lsc

0xd005,	// (0x00022ede) level_2_signal_lsc

0xd00e,	// (0x00022ee7) level_3_signal_lsc

0xd017,	// (0x00022ef0) level_4_signal_lsc

0xd020,	// (0x00022ef9) level_5_signal_lsc

0xd029,	// (0x00022f02) level_6_signal_lsc

0xd032,	// (0x00022f0b) level_7_signal_lsc

0xd032,	// (0x00022f0b) level_1_battery_lsc

0xd03b,	// (0x00022f14) level_2_battery_lsc

0xd044,	// (0x00022f1d) level_3_battery_lsc

0xd04d,	// (0x00022f26) level_4_battery_lsc

0xd056,	// (0x00022f2f) level_5_battery_lsc

0xd05f,	// (0x00022f38) level_6_battery_lsc

0xcffc,	// (0x00022ed5) level_7_battery_lsc

0xd068,	// (0x00022f41) scroll_handle_focus_pane_g1

0xd071,	// (0x00022f4a) scroll_handle_focus_pane_g2

0xd07a,	// (0x00022f53) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002564e) scroll_handle_focus_pane_g

0x5332,	// (0x0001b20b) list_single_2graphic_pane_g1_ParamLimits

0x5332,	// (0x0001b20b) list_single_2graphic_pane_g1

0x87bc,	// (0x0001e695) list_single_2graphic_pane_g2_ParamLimits

0x87bc,	// (0x0001e695) list_single_2graphic_pane_g2

0x4cab,	// (0x0001ab84) list_single_2graphic_pane_g3_ParamLimits

0x4cab,	// (0x0001ab84) list_single_2graphic_pane_g3

0x533e,	// (0x0001b217) list_single_2graphic_pane_g4_ParamLimits

0x533e,	// (0x0001b217) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x00025655) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x00025655) list_single_2graphic_pane_g

0x534a,	// (0x0001b223) list_single_2graphic_pane_t1_ParamLimits

0x534a,	// (0x0001b223) list_single_2graphic_pane_t1

0x8c80,	// (0x0001eb59) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c80,	// (0x0001eb59) list_double2_graphic_large_graphic_pane_g1

0x8938,	// (0x0001e811) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8938,	// (0x0001e811) list_double2_graphic_large_graphic_pane_g2

0x87e1,	// (0x0001e6ba) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x87e1,	// (0x0001e6ba) list_double2_graphic_large_graphic_pane_g3

0x8c92,	// (0x0001eb6b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c92,	// (0x0001eb6b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002565e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002565e) list_double2_graphic_large_graphic_pane_g

0x8c9e,	// (0x0001eb77) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c9e,	// (0x0001eb77) list_double2_graphic_large_graphic_pane_t1

0x8cb4,	// (0x0001eb8d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8cb4,	// (0x0001eb8d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x00025667) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x00025667) list_double2_graphic_large_graphic_pane_t

0xd15b,	// (0x00023034) popup_fast_swap_window_ParamLimits

0xd15b,	// (0x00023034) popup_fast_swap_window

0xd177,	// (0x00023050) popup_side_volume_key_window

0xd191,	// (0x0002306a) stacon_top_pane

0xd19b,	// (0x00023074) status_pane_ParamLimits

0xd19b,	// (0x00023074) status_pane

0xd191,	// (0x0002306a) status_small_pane

0xc2f5,	// (0x000221ce) control_pane

0xc2f5,	// (0x000221ce) stacon_bottom_pane

0xc97b,	// (0x00022854) scroll_pane_cp121

0xc972,	// (0x0002284b) set_content_pane

0x9525,	// (0x0001f3fe) bg_active_tab_pane_g1_cp1

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp1

0x952e,	// (0x0001f407) bg_active_tab_pane_g3_cp1

0x9525,	// (0x0001f3fe) bg_passive_tab_pane_g1_cp1

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp1

0x952e,	// (0x0001f407) bg_passive_tab_pane_g3_cp1

0x9537,	// (0x0001f410) bg_active_tab_pane_g1_cp2

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp2

0x9540,	// (0x0001f419) bg_active_tab_pane_g3_cp2

0x9537,	// (0x0001f410) bg_passive_tab_pane_g1_cp2

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp2

0x9540,	// (0x0001f419) bg_passive_tab_pane_g3_cp2

0x9549,	// (0x0001f422) bg_active_tab_pane_g1_cp3

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp3

0x9552,	// (0x0001f42b) bg_active_tab_pane_g3_cp3

0x9549,	// (0x0001f422) bg_passive_tab_pane_g1_cp3

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp3

0x9552,	// (0x0001f42b) bg_passive_tab_pane_g3_cp3

0x955b,	// (0x0001f434) bg_active_tab_pane_g1_cp4

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp4

0x9564,	// (0x0001f43d) bg_active_tab_pane_g3_cp4

0x955b,	// (0x0001f434) bg_passive_tab_pane_g1_cp4

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp4

0x9564,	// (0x0001f43d) bg_passive_tab_pane_g3_cp4

0xd0ca,	// (0x00022fa3) bg_active_tab_pane_g1_cp5

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp5

0xd0d3,	// (0x00022fac) bg_active_tab_pane_g3_cp5

0xd0ca,	// (0x00022fa3) bg_passive_tab_pane_g1_cp5

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp5

0xd0d3,	// (0x00022fac) bg_passive_tab_pane_g3_cp5

0x3c7f,	// (0x00019b58) list_set_graphic_pane_ParamLimits

0x3c7f,	// (0x00019b58) list_set_graphic_pane

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp4

0xd0dc,	// (0x00022fb5) list_set_graphic_pane_g1_ParamLimits

0xd0dc,	// (0x00022fb5) list_set_graphic_pane_g1

0xd0e8,	// (0x00022fc1) list_set_graphic_pane_g2_ParamLimits

0xd0e8,	// (0x00022fc1) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002566c) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002566c) list_set_graphic_pane_g

0x0009,

0xfaeb,	// (0x000259c4) volume_small_pane_cp_g

0xd10c,	// (0x00022fe5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd10c,	// (0x00022fe5) list_double2_large_graphic_pane_g1_cp2

0xd11a,	// (0x00022ff3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd11a,	// (0x00022ff3) list_double2_large_graphic_pane_g2_cp2

0xd12b,	// (0x00023004) list_double2_large_graphic_pane_g3_cp2

0xd133,	// (0x0002300c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd133,	// (0x0002300c) list_double2_large_graphic_pane_t1_cp2

0xd149,	// (0x00023022) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd149,	// (0x00023022) list_double2_large_graphic_pane_t2_cp2

0xe7e7,	// (0x000246c0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe7e7,	// (0x000246c0) list_double_large_graphic_pane_g1_cp2

0xe7fa,	// (0x000246d3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe7fa,	// (0x000246d3) list_double_large_graphic_pane_g2_cp2

0xd2b9,	// (0x00023192) list_double_large_graphic_pane_g3_cp2

0xe80b,	// (0x000246e4) list_double_large_graphic_pane_g4_cp

0xe813,	// (0x000246ec) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe813,	// (0x000246ec) list_double_large_graphic_pane_t1_cp2

0xe82a,	// (0x00024703) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe82a,	// (0x00024703) list_double_large_graphic_pane_t2_cp2

0xd1a9,	// (0x00023082) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd1a9,	// (0x00023082) list_double2_graphic_pane_g1_cp2

0xd1b7,	// (0x00023090) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1b7,	// (0x00023090) list_double2_graphic_pane_g2_cp2

0xd1c8,	// (0x000230a1) list_double2_graphic_pane_g3_cp2

0xd1d2,	// (0x000230ab) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd1d2,	// (0x000230ab) list_double2_graphic_pane_t1_cp2

0xd1e8,	// (0x000230c1) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd1e8,	// (0x000230c1) list_double2_graphic_pane_t2_cp2

0xd1fa,	// (0x000230d3) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1fa,	// (0x000230d3) list_single_number_heading_pane_g1_cp2

0xd206,	// (0x000230df) list_single_number_heading_pane_g2_cp2

0xd20e,	// (0x000230e7) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd20e,	// (0x000230e7) list_single_number_heading_pane_t1_cp2

0xd224,	// (0x000230fd) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd224,	// (0x000230fd) list_single_number_heading_pane_t2_cp2

0xd238,	// (0x00023111) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd238,	// (0x00023111) list_single_number_heading_pane_t3_cp2

0xd1fa,	// (0x000230d3) list_single_heading_pane_g1_cp2_ParamLimits

0xd1fa,	// (0x000230d3) list_single_heading_pane_g1_cp2

0xd206,	// (0x000230df) list_single_heading_pane_g2_cp2

0xd20e,	// (0x000230e7) list_single_heading_pane_t1_cp2_ParamLimits

0xd20e,	// (0x000230e7) list_single_heading_pane_t1_cp2

0xe5ef,	// (0x000244c8) list_single_heading_pane_t2_cp2_ParamLimits

0xe5ef,	// (0x000244c8) list_single_heading_pane_t2_cp2

0xe589,	// (0x00024462) list_double_graphic_pane_g1_cp2_ParamLimits

0xe589,	// (0x00024462) list_double_graphic_pane_g1_cp2

0xe595,	// (0x0002446e) list_double_graphic_pane_g2_cp2_ParamLimits

0xe595,	// (0x0002446e) list_double_graphic_pane_g2_cp2

0xe5a4,	// (0x0002447d) list_double_graphic_pane_g3_cp2

0xe5ac,	// (0x00024485) list_double_graphic_pane_t1_cp2_ParamLimits

0xe5ac,	// (0x00024485) list_double_graphic_pane_t1_cp2

0xe5c2,	// (0x0002449b) list_double_graphic_pane_t2_cp2_ParamLimits

0xe5c2,	// (0x0002449b) list_double_graphic_pane_t2_cp2

0xd2ad,	// (0x00023186) list_double_number_pane_g1_cp2_ParamLimits

0xd2ad,	// (0x00023186) list_double_number_pane_g1_cp2

0xd2b9,	// (0x00023192) list_double_number_pane_g2_cp2

0xe54d,	// (0x00024426) list_double_number_pane_t1_cp2_ParamLimits

0xe54d,	// (0x00024426) list_double_number_pane_t1_cp2

0xe561,	// (0x0002443a) list_double_number_pane_t2_cp2_ParamLimits

0xe561,	// (0x0002443a) list_double_number_pane_t2_cp2

0xe577,	// (0x00024450) list_double_number_pane_t3_cp2_ParamLimits

0xe577,	// (0x00024450) list_double_number_pane_t3_cp2

0xe4c4,	// (0x0002439d) list_single_graphic_pane_g1_cp2_ParamLimits

0xe4c4,	// (0x0002439d) list_single_graphic_pane_g1_cp2

0xd311,	// (0x000231ea) list_single_graphic_pane_g2_cp2_ParamLimits

0xd311,	// (0x000231ea) list_single_graphic_pane_g2_cp2

0xd31d,	// (0x000231f6) list_single_graphic_pane_g3_cp2

0xe49a,	// (0x00024373) list_single_graphic_pane_t1_cp2_ParamLimits

0xe49a,	// (0x00024373) list_single_graphic_pane_t1_cp2

0xd311,	// (0x000231ea) list_single_number_pane_g1_cp2_ParamLimits

0xd311,	// (0x000231ea) list_single_number_pane_g1_cp2

0xd31d,	// (0x000231f6) list_single_number_pane_g2_cp2

0xe49a,	// (0x00024373) list_single_number_pane_t1_cp2_ParamLimits

0xe49a,	// (0x00024373) list_single_number_pane_t1_cp2

0xe4b0,	// (0x00024389) list_single_number_pane_t2_cp2_ParamLimits

0xe4b0,	// (0x00024389) list_single_number_pane_t2_cp2

0xd11a,	// (0x00022ff3) list_double2_pane_g1_cp2_ParamLimits

0xd11a,	// (0x00022ff3) list_double2_pane_g1_cp2

0xd12b,	// (0x00023004) list_double2_pane_g2_cp2

0xd285,	// (0x0002315e) list_double2_pane_t1_cp2_ParamLimits

0xd285,	// (0x0002315e) list_double2_pane_t1_cp2

0xd29b,	// (0x00023174) list_double2_pane_t2_cp2_ParamLimits

0xd29b,	// (0x00023174) list_double2_pane_t2_cp2

0xd2ad,	// (0x00023186) list_double_pane_g1_cp2_ParamLimits

0xd2ad,	// (0x00023186) list_double_pane_g1_cp2

0xd2b9,	// (0x00023192) list_double_pane_g2_cp2

0xd2c1,	// (0x0002319a) list_double_pane_t1_cp2_ParamLimits

0xd2c1,	// (0x0002319a) list_double_pane_t1_cp2

0xd2d7,	// (0x000231b0) list_double_pane_t2_cp2_ParamLimits

0xd2d7,	// (0x000231b0) list_double_pane_t2_cp2

0xd301,	// (0x000231da) list_single_pane_cp2_g3

0xd311,	// (0x000231ea) list_single_pane_g1_cp2_ParamLimits

0xd311,	// (0x000231ea) list_single_pane_g1_cp2

0xd31d,	// (0x000231f6) list_single_pane_g2_cp2

0xd325,	// (0x000231fe) list_single_pane_t1_cp2_ParamLimits

0xd325,	// (0x000231fe) list_single_pane_t1_cp2

0xd33d,	// (0x00023216) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd33d,	// (0x00023216) list_single_large_graphic_pane_g1_cp2

0xd34b,	// (0x00023224) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd34b,	// (0x00023224) list_single_large_graphic_pane_g2_cp2

0xd357,	// (0x00023230) list_single_large_graphic_pane_g3_cp2

0xd35f,	// (0x00023238) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd35f,	// (0x00023238) list_single_large_graphic_pane_g4_cp1

0xd379,	// (0x00023252) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd379,	// (0x00023252) list_single_large_graphic_pane_t1_cp2

0xe464,	// (0x0002433d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe464,	// (0x0002433d) list_single_graphic_heading_pane_g1_cp2

0xe431,	// (0x0002430a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe431,	// (0x0002430a) list_single_graphic_heading_pane_g4_cp2

0xd31d,	// (0x000231f6) list_single_graphic_heading_pane_g5_cp2

0xe470,	// (0x00024349) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe470,	// (0x00024349) list_single_graphic_heading_pane_t1_cp2

0xe486,	// (0x0002435f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe486,	// (0x0002435f) list_single_graphic_heading_pane_t2_cp2

0xe425,	// (0x000242fe) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe425,	// (0x000242fe) list_single_2graphic_pane_g1_cp2

0xe431,	// (0x0002430a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe431,	// (0x0002430a) list_single_2graphic_pane_g2_cp2

0xd31d,	// (0x000231f6) list_single_2graphic_pane_g3_cp2

0xe442,	// (0x0002431b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe442,	// (0x0002431b) list_single_2graphic_pane_g4_cp2

0xe44e,	// (0x00024327) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe44e,	// (0x00024327) list_single_2graphic_pane_t1_cp2

0xc2eb,	// (0x000221c4) list_highlight_pane_g10_cp1

0xe02b,	// (0x00023f04) list_highlight_pane_g1_cp1

0xe033,	// (0x00023f0c) list_highlight_pane_g2_cp1

0xe03b,	// (0x00023f14) list_highlight_pane_g3_cp1

0xe043,	// (0x00023f1c) list_highlight_pane_g4_cp1

0xe04b,	// (0x00023f24) list_highlight_pane_g5_cp1

0xe053,	// (0x00023f2c) list_highlight_pane_g6_cp1

0xe05b,	// (0x00023f34) list_highlight_pane_g7_cp1

0xe063,	// (0x00023f3c) list_highlight_pane_g8_cp1

0xe06b,	// (0x00023f44) list_highlight_pane_g9_cp1

0xa364,	// (0x0002023d) form_field_slider_pane_t3

0xa374,	// (0x0002024d) form_field_slider_pane_t4

0xdf5f,	// (0x00023e38) slider_form_pane_ParamLimits

0xdf5f,	// (0x00023e38) slider_form_pane

0xc2f5,	// (0x000221ce) control_abbreviations

0xc2f5,	// (0x000221ce) control_conventions

0xc2f5,	// (0x000221ce) control_definitions

0xc2f5,	// (0x000221ce) format_table_attribute

0xe63b,	// (0x00024514) bg_popup_preview_window_pane_g9

0xc2f5,	// (0x000221ce) format_table_data2

0xc2f5,	// (0x000221ce) format_table_data3

0xc2f5,	// (0x000221ce) format_table_data_example

0x0008,

0xc2f5,	// (0x000221ce) intro_purpose

0xf91c,	// (0x000257f5) bg_popup_preview_window_pane_g

0xc2f5,	// (0x000221ce) texts_category

0xc2f5,	// (0x000221ce) texts_graphics

0xd38f,	// (0x00023268) text_digital

0xd39e,	// (0x00023277) text_primary

0xd3ad,	// (0x00023286) text_primary_small

0xd3bc,	// (0x00023295) text_secondary

0xd3cb,	// (0x000232a4) text_title

0xeae3,	// (0x000249bc) bg_passive_tab_pane_g1_cp3_srt

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp3_srt

0xeaec,	// (0x000249c5) bg_passive_tab_pane_g3_cp3_srt

0xc343,	// (0x0002221c) bg_active_tab_pane_cp3_srt_ParamLimits

0xc343,	// (0x0002221c) bg_active_tab_pane_cp3_srt

0xeaf5,	// (0x000249ce) tabs_4_active_pane_srt_g1

0xa881,	// (0x0002075a) tabs_4_active_pane_srt_t1_ParamLimits

0xa881,	// (0x0002075a) tabs_4_active_pane_srt_t1

0xeae3,	// (0x000249bc) bg_active_tab_pane_g1_cp3_copy1

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp3_copy1

0xeaec,	// (0x000249c5) bg_active_tab_pane_g3_cp3_copy1

0xc351,	// (0x0002222a) tabs_2_long_active_pane_srt_ParamLimits

0xc351,	// (0x0002222a) tabs_2_long_active_pane_srt

0xc351,	// (0x0002222a) tabs_2_long_passive_pane_srt_ParamLimits

0xc351,	// (0x0002222a) tabs_2_long_passive_pane_srt

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp4_srt_ParamLimits

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp4_srt

0xea0e,	// (0x000248e7) bg_passive_tab_pane_g1_cp4_srt

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp4_srt

0xea17,	// (0x000248f0) bg_passive_tab_pane_g3_cp4_srt

0xc351,	// (0x0002222a) bg_active_tab_pane_cp4_srt_ParamLimits

0xc351,	// (0x0002222a) bg_active_tab_pane_cp4_srt

0xa68d,	// (0x00020566) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa68d,	// (0x00020566) tabs_2_long_active_pane_srt_t1

0xea0e,	// (0x000248e7) bg_active_tab_pane_g1_cp4_srt

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp4_srt

0xea17,	// (0x000248f0) bg_active_tab_pane_g3_cp4_srt

0xc343,	// (0x0002221c) tabs_3_long_active_pane_srt_ParamLimits

0xc343,	// (0x0002221c) tabs_3_long_active_pane_srt

0xc343,	// (0x0002221c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc343,	// (0x0002221c) tabs_3_long_passive_pane_cp_srt

0xc343,	// (0x0002221c) tabs_3_long_passive_pane_srt_ParamLimits

0xc343,	// (0x0002221c) tabs_3_long_passive_pane_srt

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp5_srt_ParamLimits

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp5_srt

0xd0ca,	// (0x00022fa3) bg_passive_tab_pane_g1_cp5_srt

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp5_srt

0xd0d3,	// (0x00022fac) bg_passive_tab_pane_g3_cp5_srt

0xc351,	// (0x0002222a) bg_active_tab_pane_cp5_srt_ParamLimits

0xc351,	// (0x0002222a) bg_active_tab_pane_cp5_srt

0xa677,	// (0x00020550) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa677,	// (0x00020550) tabs_3_long_active_pane_srt_t1

0xd0ca,	// (0x00022fa3) bg_active_tab_pane_g1_cp5_srt

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp5_srt

0xd0d3,	// (0x00022fac) bg_active_tab_pane_g3_cp5_srt

0xea00,	// (0x000248d9) navi_text_pane_srt_t1

0xe9f8,	// (0x000248d1) navi_icon_pane_srt_g1

0xd4c9,	// (0x000233a2) midp_editing_number_pane_srt

0xd3da,	// (0x000232b3) midp_ticker_pane_srt

0xd4d1,	// (0x000233aa) midp_ticker_pane_srt_g1

0xd4d9,	// (0x000233b2) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002568b) midp_ticker_pane_srt_g

0xd4e1,	// (0x000233ba) midp_ticker_pane_srt_t1

0xe9e9,	// (0x000248c2) midp_editing_number_pane_t1_copy1

0x956d,	// (0x0001f446) listscroll_midp_pane

0x956d,	// (0x0001f446) midp_form_pane

0xd3e2,	// (0x000232bb) midp_info_popup_window_ParamLimits

0xd3e2,	// (0x000232bb) midp_info_popup_window

0xca50,	// (0x00022929) bg_popup_sub_pane_cp50_ParamLimits

0xca50,	// (0x00022929) bg_popup_sub_pane_cp50

0xdcad,	// (0x00023b86) listscroll_midp_info_pane_ParamLimits

0xdcad,	// (0x00023b86) listscroll_midp_info_pane

0xdc95,	// (0x00023b6e) listscroll_form_midp_pane_ParamLimits

0xdc95,	// (0x00023b6e) listscroll_form_midp_pane

0xdca1,	// (0x00023b7a) scroll_bar_cp050

0xa358,	// (0x00020231) list_midp_pane

0xf385,	// (0x0002525e) signal_pane_g2_cp

0xdbc7,	// (0x00023aa0) listscroll_midp_info_pane_t1_ParamLimits

0xdbc7,	// (0x00023aa0) listscroll_midp_info_pane_t1

0xdbdf,	// (0x00023ab8) listscroll_midp_info_pane_t2_ParamLimits

0xdbdf,	// (0x00023ab8) listscroll_midp_info_pane_t2

0xdc1d,	// (0x00023af6) listscroll_midp_info_pane_t3_ParamLimits

0xdc1d,	// (0x00023af6) listscroll_midp_info_pane_t3

0xdc57,	// (0x00023b30) listscroll_midp_info_pane_t4_ParamLimits

0xdc57,	// (0x00023b30) listscroll_midp_info_pane_t4

0x0003,

0xf857,	// (0x00025730) listscroll_midp_info_pane_t_ParamLimits

0xf857,	// (0x00025730) listscroll_midp_info_pane_t

0xcab7,	// (0x00022990) scroll_pane_cp21

0xdb6b,	// (0x00023a44) form_midp_field_choice_group_pane

0xdb74,	// (0x00023a4d) form_midp_field_text_pane

0xdbad,	// (0x00023a86) form_midp_field_time_pane

0xdbb5,	// (0x00023a8e) form_midp_gauge_slider_pane

0xdbbe,	// (0x00023a97) form_midp_gauge_wait_pane

0xc2f5,	// (0x000221ce) form_midp_image_pane

0x8cc6,	// (0x0001eb9f) list_single_midp_pane_ParamLimits

0x8cc6,	// (0x0001eb9f) list_single_midp_pane

0xa334,	// (0x0002020d) form_midp_field_text_pane_t1

0xda12,	// (0x000238eb) input_focus_pane_cp050

0xdb5a,	// (0x00023a33) list_midp_form_text_pane

0xdb29,	// (0x00023a02) form_midp_field_choice_group_pane_t1

0xdb37,	// (0x00023a10) input_focus_pane_cp051

0xdb4b,	// (0x00023a24) list_midp_choice_pane

0xc2f5,	// (0x000221ce) status_idle_pane

0xdb0d,	// (0x000239e6) form_midp_field_time_pane_t1

0xc2eb,	// (0x000221c4) wait_anim_pane_g2_copy1

0xdb1b,	// (0x000239f4) form_midp_field_time_pane_t2

0x0001,

0xd43b,	// (0x00023314) aid_navinavi_width_2_pane

0xf852,	// (0x0002572b) form_midp_field_time_pane_t

0xc2f5,	// (0x000221ce) input_focus_pane_cp052

0xc2f5,	// (0x000221ce) bg_input_focus_pane_cp040

0xdae9,	// (0x000239c2) form_midp_gauge_slider_pane_t1

0xdaf7,	// (0x000239d0) form_midp_gauge_slider_pane_t2

0xa318,	// (0x000201f1) form_midp_gauge_slider_pane_t3

0xa326,	// (0x000201ff) form_midp_gauge_slider_pane_t4

0x0003,

0xf849,	// (0x00025722) form_midp_gauge_slider_pane_t

0xdb05,	// (0x000239de) form_midp_slider_pane

0xc351,	// (0x0002222a) bg_input_focus_pane_cp041_ParamLimits

0xc351,	// (0x0002222a) bg_input_focus_pane_cp041

0xdab6,	// (0x0002398f) form_midp_gauge_wait_pane_t1_ParamLimits

0xdab6,	// (0x0002398f) form_midp_gauge_wait_pane_t1

0xdac8,	// (0x000239a1) form_midp_gauge_wait_pane_t2_ParamLimits

0xdac8,	// (0x000239a1) form_midp_gauge_wait_pane_t2

0x0001,

0xf844,	// (0x0002571d) form_midp_gauge_wait_pane_t_ParamLimits

0xf844,	// (0x0002571d) form_midp_gauge_wait_pane_t

0xdada,	// (0x000239b3) form_midp_wait_pane_ParamLimits

0xdada,	// (0x000239b3) form_midp_wait_pane

0xda80,	// (0x00023959) form_midp_image_pane_g1

0xda89,	// (0x00023962) form_midp_image_pane_t1

0xda98,	// (0x00023971) form_midp_image_pane_t2

0xdaa7,	// (0x00023980) form_midp_image_pane_t3

0x0002,

0xf83d,	// (0x00025716) form_midp_image_pane_t

0xda77,	// (0x00023950) list_single_midp_pane_g1

0x5472,	// (0x0001b34b) list_single_midp_pane_t1

0xa301,	// (0x000201da) list_midp_form_item_pane_ParamLimits

0xa301,	// (0x000201da) list_midp_form_item_pane

0xd3f5,	// (0x000232ce) list_midp_form_item_pane_t1

0xd404,	// (0x000232dd) midp_ticker_pane_g1

0xd410,	// (0x000232e9) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x00025671) midp_ticker_pane_g

0x9619,	// (0x0001f4f2) midp_ticker_pane_t1

0xa7f6,	// (0x000206cf) midp_editing_number_pane_t1

0xea77,	// (0x00024950) midp_editing_number_pane

0xea86,	// (0x0002495f) midp_ticker_pane

0xe9d9,	// (0x000248b2) ai_message_heading_pane

0xc2f5,	// (0x000221ce) bg_popup_window_pane_cp14

0xe9e1,	// (0x000248ba) listscroll_ai_message_pane

0xe963,	// (0x0002483c) ai_message_heading_pane_g1_ParamLimits

0xe963,	// (0x0002483c) ai_message_heading_pane_g1

0xe96f,	// (0x00024848) ai_message_heading_pane_g2_ParamLimits

0xe96f,	// (0x00024848) ai_message_heading_pane_g2

0xe97b,	// (0x00024854) ai_message_heading_pane_g3_ParamLimits

0xe97b,	// (0x00024854) ai_message_heading_pane_g3

0xe987,	// (0x00024860) ai_message_heading_pane_g4_ParamLimits

0xe987,	// (0x00024860) ai_message_heading_pane_g4

0x0003,

0xf97e,	// (0x00025857) ai_message_heading_pane_g_ParamLimits

0xf97e,	// (0x00025857) ai_message_heading_pane_g

0xe993,	// (0x0002486c) ai_message_heading_pane_t1_ParamLimits

0xe993,	// (0x0002486c) ai_message_heading_pane_t1

0xe9ad,	// (0x00024886) ai_message_heading_pane_t2_ParamLimits

0xe9ad,	// (0x00024886) ai_message_heading_pane_t2

0x0001,

0xf987,	// (0x00025860) ai_message_heading_pane_t_ParamLimits

0xf987,	// (0x00025860) ai_message_heading_pane_t

0xe9bf,	// (0x00024898) bg_popup_heading_pane_cp1_ParamLimits

0xe9bf,	// (0x00024898) bg_popup_heading_pane_cp1

0xe951,	// (0x0002482a) list_ai_message_pane_ParamLimits

0xe951,	// (0x0002482a) list_ai_message_pane

0xcab7,	// (0x00022990) scroll_pane_cp10

0xe8ed,	// (0x000247c6) list_ai_message_pane_g1

0xe8f5,	// (0x000247ce) list_ai_message_pane_g2

0x0001,

0xf95b,	// (0x00025834) list_ai_message_pane_g

0xe8fd,	// (0x000247d6) list_ai_message_pane_t1_ParamLimits

0xe8fd,	// (0x000247d6) list_ai_message_pane_t1

0xe912,	// (0x000247eb) list_ai_message_pane_t2_ParamLimits

0xe912,	// (0x000247eb) list_ai_message_pane_t2

0xe927,	// (0x00024800) list_ai_message_pane_t3_ParamLimits

0xe927,	// (0x00024800) list_ai_message_pane_t3

0xe93c,	// (0x00024815) list_ai_message_pane_t4_ParamLimits

0xe93c,	// (0x00024815) list_ai_message_pane_t4

0x0003,

0xf960,	// (0x00025839) list_ai_message_pane_t_ParamLimits

0xf960,	// (0x00025839) list_ai_message_pane_t

0xa652,	// (0x0002052b) cell_ai_soft_ind_pane_ParamLimits

0xa652,	// (0x0002052b) cell_ai_soft_ind_pane

0xd41c,	// (0x000232f5) cell_ai_soft_ind_pane_g1_ParamLimits

0xd41c,	// (0x000232f5) cell_ai_soft_ind_pane_g1

0xc2f5,	// (0x000221ce) grid_highlight_cp1

0xd429,	// (0x00023302) text_secondary_cp56_ParamLimits

0xd429,	// (0x00023302) text_secondary_cp56

0xe8a4,	// (0x0002477d) example_general_pane_ParamLimits

0xe8a4,	// (0x0002477d) example_general_pane

0xe8b0,	// (0x00024789) example_parent_pane_g1_ParamLimits

0xe8b0,	// (0x00024789) example_parent_pane_g1

0xe8bc,	// (0x00024795) example_parent_pane_t1_ParamLimits

0xe8bc,	// (0x00024795) example_parent_pane_t1

0x9b62,	// (0x0001fa3b) popup_preview_text_window_ParamLimits

0x9b62,	// (0x0001fa3b) popup_preview_text_window

0xd309,	// (0x000231e2) list_single_pane_cp2_g4

0xc520,	// (0x000223f9) bg_popup_preview_window_pane_ParamLimits

0xc520,	// (0x000223f9) bg_popup_preview_window_pane

0xe643,	// (0x0002451c) popup_preview_text_window_t1_ParamLimits

0xe643,	// (0x0002451c) popup_preview_text_window_t1

0xe661,	// (0x0002453a) popup_preview_text_window_t2_ParamLimits

0xe661,	// (0x0002453a) popup_preview_text_window_t2

0xe6aa,	// (0x00024583) popup_preview_text_window_t3_ParamLimits

0xe6aa,	// (0x00024583) popup_preview_text_window_t3

0xe6ef,	// (0x000245c8) popup_preview_text_window_t4_ParamLimits

0xe6ef,	// (0x000245c8) popup_preview_text_window_t4

0x0004,

0xf92f,	// (0x00025808) popup_preview_text_window_t_ParamLimits

0xf92f,	// (0x00025808) popup_preview_text_window_t

0xe76d,	// (0x00024646) scroll_pane_cp11

0xd922,	// (0x000237fb) bg_popup_preview_window_pane_g1

0xe603,	// (0x000244dc) bg_popup_preview_window_pane_g2

0xe60b,	// (0x000244e4) bg_popup_preview_window_pane_g3

0xe613,	// (0x000244ec) bg_popup_preview_window_pane_g4

0xe61b,	// (0x000244f4) bg_popup_preview_window_pane_g5

0xe623,	// (0x000244fc) bg_popup_preview_window_pane_g6

0xe62b,	// (0x00024504) bg_popup_preview_window_pane_g7

0xe633,	// (0x0002450c) bg_popup_preview_window_pane_g8

0x5bfb,	// (0x0001bad4) aid_popup_width_pane

0x9ade,	// (0x0001f9b7) popup_midp_note_alarm_window_ParamLimits

0x9ade,	// (0x0001f9b7) popup_midp_note_alarm_window

0xc98c,	// (0x00022865) data_form_pane_ParamLimits

0x8b9c,	// (0x0001ea75) form_field_data_pane_g1

0x8ba6,	// (0x0001ea7f) form_field_data_pane_t1_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_ParamLimits

0xc9a6,	// (0x0002287f) data_form_wide_pane_ParamLimits

0x51b5,	// (0x0001b08e) form_field_data_wide_pane_g1

0x51c1,	// (0x0001b09a) form_field_data_wide_pane_t1_ParamLimits

0xc713,	// (0x000225ec) input_focus_pane_cp6_ParamLimits

0x939e,	// (0x0001f277) input_popup_find_pane_g1_ParamLimits

0x939e,	// (0x0001f277) input_popup_find_pane_g1

0x614d,	// (0x0001c026) aid_navi_side_left_pane

0x6162,	// (0x0001c03b) aid_navi_side_right_pane

0xe108,	// (0x00023fe1) bg_popup_window_pane_cp30_ParamLimits

0xe108,	// (0x00023fe1) bg_popup_window_pane_cp30

0xe182,	// (0x0002405b) popup_midp_note_alarm_window_g1_ParamLimits

0xe182,	// (0x0002405b) popup_midp_note_alarm_window_g1

0xe1b2,	// (0x0002408b) popup_midp_note_alarm_window_t1_ParamLimits

0xe1b2,	// (0x0002408b) popup_midp_note_alarm_window_t1

0xe253,	// (0x0002412c) popup_midp_note_alarm_window_t2_ParamLimits

0xe253,	// (0x0002412c) popup_midp_note_alarm_window_t2

0xe301,	// (0x000241da) popup_midp_note_alarm_window_t3_ParamLimits

0xe301,	// (0x000241da) popup_midp_note_alarm_window_t3

0xe329,	// (0x00024202) popup_midp_note_alarm_window_t4_ParamLimits

0xe329,	// (0x00024202) popup_midp_note_alarm_window_t4

0xe349,	// (0x00024222) popup_midp_note_alarm_window_t5_ParamLimits

0xe349,	// (0x00024222) popup_midp_note_alarm_window_t5

0x000a,

0xf8cc,	// (0x000257a5) popup_midp_note_alarm_window_t_ParamLimits

0xf8cc,	// (0x000257a5) popup_midp_note_alarm_window_t

0xe3f5,	// (0x000242ce) wait_bar_pane_cp1_ParamLimits

0xe3f5,	// (0x000242ce) wait_bar_pane_cp1

0xc2f5,	// (0x000221ce) wait_anim_pane_copy1

0xc2f5,	// (0x000221ce) wait_border_pane_copy1

0xde20,	// (0x00023cf9) wait_border_pane_g1_copy1

0x51db,	// (0x0001b0b4) form_field_popup_pane_g1

0x8bc0,	// (0x0001ea99) form_field_popup_pane_t1_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_cp7_ParamLimits

0xc9d2,	// (0x000228ab) list_form_pane_ParamLimits

0x51fd,	// (0x0001b0d6) form_field_popup_wide_pane_g1

0x5205,	// (0x0001b0de) form_field_popup_wide_pane_t1_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_cp8_ParamLimits

0xc9de,	// (0x000228b7) list_form_wide_pane_ParamLimits

0xeb1c,	// (0x000249f5) aid_size_cell_graphic_pane

0x8c3f,	// (0x0001eb18) data_form_pane_t1_ParamLimits

0x8ce2,	// (0x0001ebbb) data_form_wide_pane_t1_ParamLimits

0x9f17,	// (0x0001fdf0) bg_status_flat_pane

0x903a,	// (0x0001ef13) title_pane_t1_ParamLimits

0xc30b,	// (0x000221e4) title_pane_t2_ParamLimits

0xc331,	// (0x0002220a) title_pane_t3_ParamLimits

0xf59b,	// (0x00025474) title_pane_t_ParamLimits

0xce60,	// (0x00022d39) level_1_signal_ParamLimits

0xce6d,	// (0x00022d46) level_2_signal_ParamLimits

0xce7a,	// (0x00022d53) level_3_signal_ParamLimits

0xce87,	// (0x00022d60) level_4_signal_ParamLimits

0xce94,	// (0x00022d6d) level_5_signal_ParamLimits

0xcea1,	// (0x00022d7a) level_6_signal_ParamLimits

0xceae,	// (0x00022d87) level_7_signal_ParamLimits

0xce60,	// (0x00022d39) level_1_battery_ParamLimits

0xce6d,	// (0x00022d46) level_2_battery_ParamLimits

0xce7a,	// (0x00022d53) level_3_battery_ParamLimits

0xce87,	// (0x00022d60) level_4_battery_ParamLimits

0xce94,	// (0x00022d6d) level_5_battery_ParamLimits

0xcea1,	// (0x00022d7a) level_6_battery_ParamLimits

0xceae,	// (0x00022d87) level_7_battery_ParamLimits

0xe02b,	// (0x00023f04) bg_status_flat_pane_g1

0xe033,	// (0x00023f0c) bg_status_flat_pane_g2

0xe03b,	// (0x00023f14) bg_status_flat_pane_g3

0xe043,	// (0x00023f1c) bg_status_flat_pane_g4

0xe04b,	// (0x00023f24) bg_status_flat_pane_g5

0xe053,	// (0x00023f2c) bg_status_flat_pane_g6

0xe05b,	// (0x00023f34) bg_status_flat_pane_g7

0x90ce,	// (0x0001efa7) tabs_3_active_pane_t1_ParamLimits

0x90ce,	// (0x0001efa7) tabs_3_passive_pane_t1_ParamLimits

0x90e8,	// (0x0001efc1) tabs_4_active_pane_t1_ParamLimits

0x90e8,	// (0x0001efc1) tabs_4_1_passive_pane_t1_ParamLimits

0x93b4,	// (0x0001f28d) tabs_2_active_pane_t1_ParamLimits

0x93b4,	// (0x0001f28d) tabs_2_passive_pane_t1_ParamLimits

0xc351,	// (0x0002222a) bg_active_tab_pane_cp4_ParamLimits

0x93c6,	// (0x0001f29f) tabs_2_long_active_pane_t1_ParamLimits

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp4_ParamLimits

0x66a4,	// (0x0001c57d) list_single_midp_graphic_pane_t1_ParamLimits

0xc351,	// (0x0002222a) bg_active_tab_pane_cp5_ParamLimits

0x93d9,	// (0x0001f2b2) tabs_3_long_active_pane_t1_ParamLimits

0xcaef,	// (0x000229c8) bg_passive_tab_pane_cp5_ParamLimits

0x66a4,	// (0x0001c57d) list_single_midp_graphic_pane_t1

0x9f17,	// (0x0001fdf0) bg_status_flat_pane_ParamLimits

0xd7f5,	// (0x000236ce) indicator_pane_cp2_ParamLimits

0xd7f5,	// (0x000236ce) indicator_pane_cp2

0xa08e,	// (0x0001ff67) navi_pane_srt_ParamLimits

0xa08e,	// (0x0001ff67) navi_pane_srt

0xd81d,	// (0x000236f6) popup_clock_digital_analogue_window_cp1

0xc395,	// (0x0002226e) indicator_pane_t1

0xd3da,	// (0x000232b3) copy_highlight_pane

0xd3da,	// (0x000232b3) cursor_graphics_pane

0xd3da,	// (0x000232b3) graphic_within_text_pane

0xd3da,	// (0x000232b3) link_highlight_pane

0xe730,	// (0x00024609) popup_preview_text_window_t5_ParamLimits

0xe730,	// (0x00024609) popup_preview_text_window_t5

0xd443,	// (0x0002331c) cursor_digital_pane

0xd443,	// (0x0002331c) cursor_primary_pane

0xd454,	// (0x0002332d) cursor_primary_small_pane

0xd45c,	// (0x00023335) cursor_secondary_pane

0xd464,	// (0x0002333d) cursor_title_pane

0xd443,	// (0x0002331c) link_highlight_digital_pane

0xd44b,	// (0x00023324) link_highlight_primary_pane

0xd454,	// (0x0002332d) link_highlight_primary_small_pane

0xd45c,	// (0x00023335) link_highlight_secondary_pane

0xd464,	// (0x0002333d) link_highlight_title_pane

0xd443,	// (0x0002331c) copy_highlight_digital_pane

0xd443,	// (0x0002331c) copy_highlight_primary_pane

0xd454,	// (0x0002332d) copy_highlight_primary_small_pane

0xd45c,	// (0x00023335) copy_highlight_secondary_pane

0xd464,	// (0x0002333d) copy_highlight_title_pane

0xd45c,	// (0x00023335) graphic_text_digital_pane

0xe0ab,	// (0x00023f84) graphic_text_primary_pane

0xe0b4,	// (0x00023f8d) graphic_text_primary_small_pane

0xd454,	// (0x0002332d) graphic_text_secondary_pane

0xd443,	// (0x0002331c) graphic_text_title_pane

0x962b,	// (0x0001f504) cursor_primary_pane_g1

0xe09d,	// (0x00023f76) cursor_text_primary_t1

0xa398,	// (0x00020271) cursor_primary_small_pane_g1

0xe08f,	// (0x00023f68) cursor_text_primary_small_t1

0xa38e,	// (0x00020267) cursor_primary_small_pane_g1_copy1

0xe081,	// (0x00023f5a) cursor_text_primary_small_t1_copy1

0xe073,	// (0x00023f4c) cursor_text_title_t1

0xa384,	// (0x0002025d) cursor_title_pane_g1

0x962b,	// (0x0001f504) cursor_digital_pane_g1

0xd46c,	// (0x00023345) cursor_text_digital_t1

0xe014,	// (0x00023eed) link_highlight_primary_pane_g1

0xe01c,	// (0x00023ef5) link_highlight_primary_pane_t1

0xd47a,	// (0x00023353) link_highlight_primary_small_pane_g1

0xd482,	// (0x0002335b) link_highlight_primary_small_pane_t1

0xd47a,	// (0x00023353) link_highlight_secondary_pane_g1

0xd491,	// (0x0002336a) link_highlight_secondary_pane_t1

0xdf88,	// (0x00023e61) link_highlight_title_pane_g1

0xdf90,	// (0x00023e69) link_highlight_title_pane_t1

0xdf71,	// (0x00023e4a) link_highlight_digital_pane_g1

0xdf79,	// (0x00023e52) link_highlight_digital_pane_t1

0xde65,	// (0x00023d3e) copy_highlight_primary_pane_g1

0xde6d,	// (0x00023d46) copy_highlight_primary_pane_t1

0xde3f,	// (0x00023d18) copy_highlight_primary_small_pane_g1

0xde56,	// (0x00023d2f) copy_highlight_primary_small_pane_t1

0xd4a0,	// (0x00023379) copy_highlight_secondary_pane_g1

0xd4a8,	// (0x00023381) copy_highlight_secondary_pane_t1

0xde3f,	// (0x00023d18) copy_highlight_title_pane_g1

0xde47,	// (0x00023d20) copy_highlight_title_pane_t1

0xde65,	// (0x00023d3e) copy_highlight_digital_pane_g1

0xeca6,	// (0x00024b7f) copy_highlight_digital_pane_t1

0xebfa,	// (0x00024ad3) graphic_text_primary_pane_g1

0xec8a,	// (0x00024b63) graphic_text_primary_pane_t1

0xec98,	// (0x00024b71) graphic_text_primary_pane_t2

0x0001,

0xf9fb,	// (0x000258d4) graphic_text_primary_pane_t

0xec66,	// (0x00024b3f) graphic_text_primary_small_pane_g1

0xec6e,	// (0x00024b47) graphic_text_primary_small_pane_t1

0xec7c,	// (0x00024b55) graphic_text_primary_small_pane_t2

0x0001,

0xf9f6,	// (0x000258cf) graphic_text_primary_small_pane_t

0xec42,	// (0x00024b1b) graphic_text_secondary_pane_g1

0xec4a,	// (0x00024b23) graphic_text_secondary_pane_t1

0xec58,	// (0x00024b31) graphic_text_secondary_pane_t2

0x0001,

0xf9f1,	// (0x000258ca) graphic_text_secondary_pane_t

0xec1e,	// (0x00024af7) graphic_text_title_pane_g1

0xec26,	// (0x00024aff) graphic_text_title_pane_t1

0xec34,	// (0x00024b0d) graphic_text_title_pane_t2

0x0001,

0xf9ec,	// (0x000258c5) graphic_text_title_pane_t

0xebfa,	// (0x00024ad3) graphic_text_digital_pane_g1

0xec02,	// (0x00024adb) graphic_text_digital_pane_t1

0xec10,	// (0x00024ae9) graphic_text_digital_pane_t2

0x0001,

0xf9e7,	// (0x000258c0) graphic_text_digital_pane_t

0xc351,	// (0x0002222a) navi_icon_pane_srt_ParamLimits

0xc351,	// (0x0002222a) navi_icon_pane_srt

0xc2f5,	// (0x000221ce) navi_midp_pane_srt

0xc2f5,	// (0x000221ce) navi_navi_pane_srt

0xc351,	// (0x0002222a) navi_text_pane_srt_ParamLimits

0xc351,	// (0x0002222a) navi_text_pane_srt

0xebc5,	// (0x00024a9e) navi_navi_icon_text_pane_srt

0xebcd,	// (0x00024aa6) navi_navi_pane_srt_g1_ParamLimits

0xebcd,	// (0x00024aa6) navi_navi_pane_srt_g1

0xebdf,	// (0x00024ab8) navi_navi_pane_srt_g2_ParamLimits

0xebdf,	// (0x00024ab8) navi_navi_pane_srt_g2

0x0001,

0xf9e2,	// (0x000258bb) navi_navi_pane_srt_g_ParamLimits

0xf9e2,	// (0x000258bb) navi_navi_pane_srt_g

0xebf1,	// (0x00024aca) navi_navi_tabs_pane_srt

0xebc5,	// (0x00024a9e) navi_navi_text_pane_srt

0xebc5,	// (0x00024a9e) navi_navi_volume_pane_srt

0xebb6,	// (0x00024a8f) navi_navi_text_pane_srt_t1

0x6a24,	// (0x0001c8fd) navi_navi_volume_pane_srt_g1

0x6a2c,	// (0x0001c905) volume_small_pane_srt_ParamLimits

0x6a2c,	// (0x0001c905) volume_small_pane_srt

0x642d,	// (0x0001c306) volume_small_pane_srt_g1_ParamLimits

0x642d,	// (0x0001c306) volume_small_pane_srt_g1

0x643d,	// (0x0001c316) volume_small_pane_srt_g2_ParamLimits

0x643d,	// (0x0001c316) volume_small_pane_srt_g2

0x644e,	// (0x0001c327) volume_small_pane_srt_g3_ParamLimits

0x644e,	// (0x0001c327) volume_small_pane_srt_g3

0x645f,	// (0x0001c338) volume_small_pane_srt_g4_ParamLimits

0x645f,	// (0x0001c338) volume_small_pane_srt_g4

0x6470,	// (0x0001c349) volume_small_pane_srt_g5_ParamLimits

0x6470,	// (0x0001c349) volume_small_pane_srt_g5

0x6481,	// (0x0001c35a) volume_small_pane_srt_g6_ParamLimits

0x6481,	// (0x0001c35a) volume_small_pane_srt_g6

0x6492,	// (0x0001c36b) volume_small_pane_srt_g7_ParamLimits

0x6492,	// (0x0001c36b) volume_small_pane_srt_g7

0x64a3,	// (0x0001c37c) volume_small_pane_srt_g8_ParamLimits

0x64a3,	// (0x0001c37c) volume_small_pane_srt_g8

0x64b4,	// (0x0001c38d) volume_small_pane_srt_g9_ParamLimits

0x64b4,	// (0x0001c38d) volume_small_pane_srt_g9

0x64c5,	// (0x0001c39e) volume_small_pane_srt_g10_ParamLimits

0x64c5,	// (0x0001c39e) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x00025676) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x00025676) volume_small_pane_srt_g

0xc5c9,	// (0x000224a2) query_popup_data_pane_cp2

0xeb9c,	// (0x00024a75) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xeb9c,	// (0x00024a75) navi_navi_icon_text_pane_srt_t1

0xe0ab,	// (0x00023f84) navi_tabs_2_long_pane_srt

0xe0ab,	// (0x00023f84) navi_tabs_2_pane_srt

0xe0ab,	// (0x00023f84) navi_tabs_3_long_pane_srt

0xe0ab,	// (0x00023f84) navi_tabs_3_pane_srt

0xe0ab,	// (0x00023f84) navi_tabs_4_pane_srt

0x6a04,	// (0x0001c8dd) tabs_2_active_pane_srt_ParamLimits

0x6a04,	// (0x0001c8dd) tabs_2_active_pane_srt

0x6a14,	// (0x0001c8ed) tabs_2_passive_pane_srt_ParamLimits

0x6a14,	// (0x0001c8ed) tabs_2_passive_pane_srt

0xda12,	// (0x000238eb) bg_passive_tab_pane_cp1_srt_ParamLimits

0xda12,	// (0x000238eb) bg_passive_tab_pane_cp1_srt

0xeb7a,	// (0x00024a53) bg_passive_tab_pane_g1_cp1_srt

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp1_srt

0xeb83,	// (0x00024a5c) bg_passive_tab_pane_g3_cp1_srt

0xc343,	// (0x0002221c) bg_active_tab_pane_cp1_srt_ParamLimits

0xc343,	// (0x0002221c) bg_active_tab_pane_cp1_srt

0xeb8c,	// (0x00024a65) tabs_2_active_pane_srt_g1

0xa8fe,	// (0x000207d7) tabs_2_active_pane_srt_t1_ParamLimits

0xa8fe,	// (0x000207d7) tabs_2_active_pane_srt_t1

0xeb7a,	// (0x00024a53) bg_active_tab_pane_g1_cp1_srt

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp1_srt

0xeb83,	// (0x00024a5c) bg_active_tab_pane_g3_cp1_srt

0x69d1,	// (0x0001c8aa) tabs_3_active_pane_srt_ParamLimits

0x69d1,	// (0x0001c8aa) tabs_3_active_pane_srt

0x69e2,	// (0x0001c8bb) tabs_3_passive_pane_cp_srt_ParamLimits

0x69e2,	// (0x0001c8bb) tabs_3_passive_pane_cp_srt

0x69f3,	// (0x0001c8cc) tabs_3_passive_pane_srt_ParamLimits

0x69f3,	// (0x0001c8cc) tabs_3_passive_pane_srt

0xda12,	// (0x000238eb) bg_passive_tab_pane_cp2_srt_ParamLimits

0xda12,	// (0x000238eb) bg_passive_tab_pane_cp2_srt

0xd4b7,	// (0x00023390) bg_passive_tab_pane_g1_cp2_srt

0xd083,	// (0x00022f5c) bg_passive_tab_pane_g2_cp2_srt

0xd4c0,	// (0x00023399) bg_passive_tab_pane_g3_cp2_srt

0xc343,	// (0x0002221c) bg_active_tab_pane_cp2_srt_ParamLimits

0xc343,	// (0x0002221c) bg_active_tab_pane_cp2_srt

0xeb72,	// (0x00024a4b) tabs_3_active_pane_srt_g1

0xa8e8,	// (0x000207c1) tabs_3_active_pane_srt_t1_ParamLimits

0xa8e8,	// (0x000207c1) tabs_3_active_pane_srt_t1

0xd4b7,	// (0x00023390) bg_active_tab_pane_g1_cp2_srt

0xd083,	// (0x00022f5c) bg_active_tab_pane_g2_cp2_srt

0xd4c0,	// (0x00023399) bg_active_tab_pane_g3_cp2_srt

0x6989,	// (0x0001c862) tabs_4_active_pane_srt_ParamLimits

0x6989,	// (0x0001c862) tabs_4_active_pane_srt

0x699b,	// (0x0001c874) tabs_4_passive_pane_cp2_srt_ParamLimits

0x699b,	// (0x0001c874) tabs_4_passive_pane_cp2_srt

0xd5e4,	// (0x000234bd) aid_size_cell_toolbar

0xe8cf,	// (0x000247a8) main_idle_act_pane_ParamLimits

0xd6bc,	// (0x00023595) popup_large_graphic_colour_window_ParamLimits

0x9de2,	// (0x0001fcbb) popup_toolbar_window_ParamLimits

0x9de2,	// (0x0001fcbb) popup_toolbar_window

0x5536,	// (0x0001b40f) list_single_graphic_2heading_pane_ParamLimits

0x5536,	// (0x0001b40f) list_single_graphic_2heading_pane

0xcc99,	// (0x00022b72) aid_size_cell_apps_grid_lsc_pane

0xccab,	// (0x00022b84) aid_size_cell_apps_grid_prt_pane

0xcaef,	// (0x000229c8) bg_wml_button_pane_cp1_ParamLimits

0xcaef,	// (0x000229c8) bg_wml_button_pane_cp1

0xa334,	// (0x0002020d) form_midp_field_text_pane_t1_ParamLimits

0xda12,	// (0x000238eb) input_focus_pane_cp050_ParamLimits

0xdb5a,	// (0x00023a33) list_midp_form_text_pane_ParamLimits

0xdb37,	// (0x00023a10) input_focus_pane_cp051_ParamLimits

0xdb4b,	// (0x00023a24) list_midp_choice_pane_ParamLimits

0xa2c9,	// (0x000201a2) list_single_2graphic_pane_cp3_ParamLimits

0xa2c9,	// (0x000201a2) list_single_2graphic_pane_cp3

0xa2df,	// (0x000201b8) list_single_midp_graphic_pane_ParamLimits

0xa2df,	// (0x000201b8) list_single_midp_graphic_pane

0x4d19,	// (0x0001abf2) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d19,	// (0x0001abf2) list_single_graphic_2heading_pane_g1

0x4c9f,	// (0x0001ab78) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_graphic_2heading_pane_g4

0x4cab,	// (0x0001ab84) list_single_graphic_2heading_pane_g5_ParamLimits

0x4cab,	// (0x0001ab84) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x000256c9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x000256c9) list_single_graphic_2heading_pane_g

0x53ea,	// (0x0001b2c3) list_single_graphic_2heading_pane_t1_ParamLimits

0x53ea,	// (0x0001b2c3) list_single_graphic_2heading_pane_t1

0x53fe,	// (0x0001b2d7) list_single_graphic_2heading_pane_t2_ParamLimits

0x53fe,	// (0x0001b2d7) list_single_graphic_2heading_pane_t2

0x541a,	// (0x0001b2f3) list_single_graphic_2heading_pane_t3_ParamLimits

0x541a,	// (0x0001b2f3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x000256d0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x000256d0) list_single_graphic_2heading_pane_t

0xd860,	// (0x00023739) bg_popup_sub_pane_cp2

0xd88a,	// (0x00023763) grid_toobar_pane

0x6629,	// (0x0001c502) cell_toolbar_pane_ParamLimits

0x6629,	// (0x0001c502) cell_toolbar_pane

0xd8c6,	// (0x0002379f) cell_toolbar_pane_g1_ParamLimits

0xd8c6,	// (0x0002379f) cell_toolbar_pane_g1

0xd8da,	// (0x000237b3) cell_toolbar_pane_g2_ParamLimits

0xd8da,	// (0x000237b3) cell_toolbar_pane_g2

0x0001,

0xf7fe,	// (0x000256d7) cell_toolbar_pane_g_ParamLimits

0xf7fe,	// (0x000256d7) cell_toolbar_pane_g

0xd8fc,	// (0x000237d5) grid_highlight_pane_cp2_ParamLimits

0xd8fc,	// (0x000237d5) grid_highlight_pane_cp2

0xd916,	// (0x000237ef) toolbar_button_pane

0xd922,	// (0x000237fb) toolbar_button_pane_g1

0xd92a,	// (0x00023803) toolbar_button_pane_g2

0xd932,	// (0x0002380b) toolbar_button_pane_g3

0xd93a,	// (0x00023813) toolbar_button_pane_g4

0xd942,	// (0x0002381b) toolbar_button_pane_g5

0xd94a,	// (0x00023823) toolbar_button_pane_g6

0xd952,	// (0x0002382b) toolbar_button_pane_g7

0xd95a,	// (0x00023833) toolbar_button_pane_g8

0xd962,	// (0x0002383b) toolbar_button_pane_g9

0x0009,

0xf803,	// (0x000256dc) toolbar_button_pane_g

0x6661,	// (0x0001c53a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6661,	// (0x0001c53a) list_single_2graphic_pane_g1_cp3

0xa22b,	// (0x00020104) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa22b,	// (0x00020104) list_single_2graphic_pane_g2_cp3

0xd206,	// (0x000230df) list_single_2graphic_pane_g3_cp3

0x667e,	// (0x0001c557) list_single_2graphic_pane_g4_cp3_ParamLimits

0x667e,	// (0x0001c557) list_single_2graphic_pane_g4_cp3

0x668a,	// (0x0001c563) list_single_2graphic_pane_t1_cp3_ParamLimits

0x668a,	// (0x0001c563) list_single_2graphic_pane_t1_cp3

0xd1fa,	// (0x000230d3) list_single_midp_graphic_pane_g2_ParamLimits

0xd1fa,	// (0x000230d3) list_single_midp_graphic_pane_g2

0xd5ec,	// (0x000234c5) aid_zoom_text_primary

0x53be,	// (0x0001b297) aid_zoom_text_secondary

0xd574,	// (0x0002344d) status_small_pane_g7_ParamLimits

0xd574,	// (0x0002344d) status_small_pane_g7

0xd597,	// (0x00023470) status_small_pane_t1_ParamLimits

0x9016,	// (0x0001eeef) title_pane_g2

0x0003,

0xf592,	// (0x0002546b) title_pane_g

0x92a1,	// (0x0001f17a) aid_size_cell_colour_1_pane_ParamLimits

0x92a1,	// (0x0001f17a) aid_size_cell_colour_1_pane

0x92b5,	// (0x0001f18e) aid_size_cell_colour_2_pane_ParamLimits

0x92b5,	// (0x0001f18e) aid_size_cell_colour_2_pane

0x92c9,	// (0x0001f1a2) aid_size_cell_colour_3_pane_ParamLimits

0x92c9,	// (0x0001f1a2) aid_size_cell_colour_3_pane

0x92dd,	// (0x0001f1b6) aid_size_cell_colour_4_pane_ParamLimits

0x92dd,	// (0x0001f1b6) aid_size_cell_colour_4_pane

0x6089,	// (0x0001bf62) title_pane_stacon_g1_ParamLimits

0x6089,	// (0x0001bf62) title_pane_stacon_g1

0xdec4,	// (0x00023d9d) popup_note_wait_window_g3_ParamLimits

0xdec4,	// (0x00023d9d) popup_note_wait_window_g3

0xdf3a,	// (0x00023e13) popup_note_wait_window_t5_ParamLimits

0xdf3a,	// (0x00023e13) popup_note_wait_window_t5

0xc2f5,	// (0x000221ce) main_feb_china_hwr_fs_writing_pane

0x980a,	// (0x0001f6e3) popup_feb_china_hwr_fs_window_ParamLimits

0x980a,	// (0x0001f6e3) popup_feb_china_hwr_fs_window

0xa23c,	// (0x00020115) aid_size_cell_hwr_fs_ParamLimits

0xa23c,	// (0x00020115) aid_size_cell_hwr_fs

0xda12,	// (0x000238eb) bg_popup_sub_pane_cp3_ParamLimits

0xda12,	// (0x000238eb) bg_popup_sub_pane_cp3

0xa251,	// (0x0002012a) grid_hwr_fs_pane_ParamLimits

0xa251,	// (0x0002012a) grid_hwr_fs_pane

0x66e7,	// (0x0001c5c0) linegrid_hwr_fs_pane_ParamLimits

0x66e7,	// (0x0001c5c0) linegrid_hwr_fs_pane

0xa269,	// (0x00020142) cell_hwr_fs_pane_ParamLimits

0xa269,	// (0x00020142) cell_hwr_fs_pane

0xda1e,	// (0x000238f7) linegrid_hwr_fs_pane_g1_ParamLimits

0xda1e,	// (0x000238f7) linegrid_hwr_fs_pane_g1

0xa28f,	// (0x00020168) linegrid_hwr_fs_pane_g2_ParamLimits

0xa28f,	// (0x00020168) linegrid_hwr_fs_pane_g2

0xda2a,	// (0x00023903) linegrid_hwr_fs_pane_g3_ParamLimits

0xda2a,	// (0x00023903) linegrid_hwr_fs_pane_g3

0x6719,	// (0x0001c5f2) linegrid_hwr_fs_pane_g4_ParamLimits

0x6719,	// (0x0001c5f2) linegrid_hwr_fs_pane_g4

0x6733,	// (0x0001c60c) linegrid_hwr_fs_pane_g5_ParamLimits

0x6733,	// (0x0001c60c) linegrid_hwr_fs_pane_g5

0x0004,

0xf829,	// (0x00025702) linegrid_hwr_fs_pane_g_ParamLimits

0xf829,	// (0x00025702) linegrid_hwr_fs_pane_g

0xda36,	// (0x0002390f) cell_hwr_fs_pane_g1_ParamLimits

0xda36,	// (0x0002390f) cell_hwr_fs_pane_g1

0xd82e,	// (0x00023707) cell_hwr_fs_pane_g2_ParamLimits

0xd82e,	// (0x00023707) cell_hwr_fs_pane_g2

0xa2a1,	// (0x0002017a) cell_hwr_fs_pane_g3_ParamLimits

0xa2a1,	// (0x0002017a) cell_hwr_fs_pane_g3

0xa2ae,	// (0x00020187) cell_hwr_fs_pane_g4_ParamLimits

0xa2ae,	// (0x00020187) cell_hwr_fs_pane_g4

0x0003,

0xf834,	// (0x0002570d) cell_hwr_fs_pane_g_ParamLimits

0xf834,	// (0x0002570d) cell_hwr_fs_pane_g

0xa2bb,	// (0x00020194) cell_hwr_fs_pane_t1

0xc2f5,	// (0x000221ce) grid_highlight_pane_cp6

0xc2f5,	// (0x000221ce) main_idle_act2_pane

0xca9e,	// (0x00022977) aid_inside_area_popup_secondary

0xa4f4,	// (0x000203cd) aid_inside_area_window_primary_ParamLimits

0xa4f4,	// (0x000203cd) aid_inside_area_window_primary

0xecb5,	// (0x00024b8e) ai2_news_ticker_pane

0xecbd,	// (0x00024b96) aid_size_cell_ai1_link_ParamLimits

0xecbd,	// (0x00024b96) aid_size_cell_ai1_link

0xecd7,	// (0x00024bb0) popup_ai2_data_window_ParamLimits

0xecd7,	// (0x00024bb0) popup_ai2_data_window

0xeceb,	// (0x00024bc4) popup_ai2_link_window_ParamLimits

0xeceb,	// (0x00024bc4) popup_ai2_link_window

0xda12,	// (0x000238eb) bg_popup_sub_pane_cp4_ParamLimits

0xda12,	// (0x000238eb) bg_popup_sub_pane_cp4

0xecff,	// (0x00024bd8) grid_ai2_link_pane_ParamLimits

0xecff,	// (0x00024bd8) grid_ai2_link_pane

0xed16,	// (0x00024bef) popup_ai2_link_window_g1_ParamLimits

0xed16,	// (0x00024bef) popup_ai2_link_window_g1

0xed22,	// (0x00024bfb) popup_ai2_link_window_g2_ParamLimits

0xed22,	// (0x00024bfb) popup_ai2_link_window_g2

0x0001,

0xfa00,	// (0x000258d9) popup_ai2_link_window_g_ParamLimits

0xfa00,	// (0x000258d9) popup_ai2_link_window_g

0xed31,	// (0x00024c0a) ai2_mp_button_pane

0xed39,	// (0x00024c12) ai2_mp_volume_pane

0xdb37,	// (0x00023a10) bg_popup_sub_pane_cp5_ParamLimits

0xdb37,	// (0x00023a10) bg_popup_sub_pane_cp5

0xed41,	// (0x00024c1a) heading_ai2_gene_pane_ParamLimits

0xed41,	// (0x00024c1a) heading_ai2_gene_pane

0xed4d,	// (0x00024c26) list_ai2_gene_pane_ParamLimits

0xed4d,	// (0x00024c26) list_ai2_gene_pane

0xed95,	// (0x00024c6e) cell_ai2_link_pane_ParamLimits

0xed95,	// (0x00024c6e) cell_ai2_link_pane

0xedab,	// (0x00024c84) cell_ai2_link_pane_g1

0xc2f5,	// (0x000221ce) grid_highlight_pane_cp7

0x6a41,	// (0x0001c91a) ai2_mp_volume_pane_g1

0xee7c,	// (0x00024d55) ai2_mp_volume_pane_g2

0xedf1,	// (0x00024cca) list_ai2_gene_pane_t1

0xee84,	// (0x00024d5d) ai2_mp_volume_pane_g3

0x0002,

0xfa19,	// (0x000258f2) ai2_mp_volume_pane_g

0x6a49,	// (0x0001c922) volume_small_pane_cp3

0xee8c,	// (0x00024d65) aid_size_cell_ai2_button

0xee94,	// (0x00024d6d) grid_ai2_button_pane

0xee9d,	// (0x00024d76) cell_ai2_button_pane_ParamLimits

0xee9d,	// (0x00024d76) cell_ai2_button_pane

0xc2eb,	// (0x000221c4) cell_ai2_button_pane_g1

0xc2f5,	// (0x000221ce) grid_highlight_pane_cp8

0xee3c,	// (0x00024d15) ai2_gene_pane_t1_ParamLimits

0xee3c,	// (0x00024d15) ai2_gene_pane_t1

0x979c,	// (0x0001f675) aid_height_parent_landscape

0xa6a4,	// (0x0002057d) aid_height_set_list

0xe8cf,	// (0x000247a8) aid_size_parent

0xeb1c,	// (0x000249f5) aid_size_cell_graphic_pane_ParamLimits

0xed5d,	// (0x00024c36) popup_ai2_data_window_g1_ParamLimits

0xed5d,	// (0x00024c36) popup_ai2_data_window_g1

0xed69,	// (0x00024c42) ai2_news_ticker_pane_g1

0xed71,	// (0x00024c4a) ai2_news_ticker_pane_g2

0x0001,

0xfa05,	// (0x000258de) ai2_news_ticker_pane_g

0xed79,	// (0x00024c52) ai2_news_ticker_pane_t1

0xed87,	// (0x00024c60) ai2_news_ticker_pane_t2

0x0001,

0xfa0a,	// (0x000258e3) ai2_news_ticker_pane_t

0xedb4,	// (0x00024c8d) heading_ai2_gene_pane_g1

0xedbc,	// (0x00024c95) heading_ai2_gene_pane_t1_ParamLimits

0xedbc,	// (0x00024c95) heading_ai2_gene_pane_t1

0xedd1,	// (0x00024caa) list_highlight_pane_cp6

0xedd9,	// (0x00024cb2) ai2_gene_pane_ParamLimits

0xedd9,	// (0x00024cb2) ai2_gene_pane

0xedff,	// (0x00024cd8) list_ai2_gene_pane_t2

0x0001,

0xfa0f,	// (0x000258e8) list_ai2_gene_pane_t

0xee0d,	// (0x00024ce6) list_highlight_pane_cp8_ParamLimits

0xee0d,	// (0x00024ce6) list_highlight_pane_cp8

0xee1e,	// (0x00024cf7) ai2_gene_pane_g1_ParamLimits

0xee1e,	// (0x00024cf7) ai2_gene_pane_g1

0xee30,	// (0x00024d09) ai2_gene_pane_g2_ParamLimits

0xee30,	// (0x00024d09) ai2_gene_pane_g2

0x0001,

0xfa14,	// (0x000258ed) ai2_gene_pane_g_ParamLimits

0xfa14,	// (0x000258ed) ai2_gene_pane_g

0xc92e,	// (0x00022807) scroll_pane_cp12

0x9759,	// (0x0001f632) control_pane_t3_ParamLimits

0x9759,	// (0x0001f632) control_pane_t3

0xd588,	// (0x00023461) status_small_pane_g8_ParamLimits

0xd588,	// (0x00023461) status_small_pane_g8

0x989d,	// (0x0001f776) popup_find_window_ParamLimits

0x9b18,	// (0x0001f9f1) popup_note_image_window_ParamLimits

0x4d19,	// (0x0001abf2) list_double2_graphic_pane_vc_g1_ParamLimits

0x4d19,	// (0x0001abf2) list_double2_graphic_pane_vc_g1

0x4c9f,	// (0x0001ab78) list_double2_graphic_pane_vc_g2_ParamLimits

0x4c9f,	// (0x0001ab78) list_double2_graphic_pane_vc_g2

0x4cab,	// (0x0001ab84) list_double2_graphic_pane_vc_g3_ParamLimits

0x4cab,	// (0x0001ab84) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f0,	// (0x000256c9) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f0,	// (0x000256c9) list_double2_graphic_pane_vc_g

0x5432,	// (0x0001b30b) list_double2_graphic_pane_vc_t1_ParamLimits

0x5432,	// (0x0001b30b) list_double2_graphic_pane_vc_t1

0x4c9f,	// (0x0001ab78) list_single_heading_pane_vc_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_heading_pane_vc_g1

0x4cab,	// (0x0001ab84) list_single_heading_pane_vc_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000254e5) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000254e5) list_single_heading_pane_vc_g

0x5448,	// (0x0001b321) list_single_heading_pane_vc_t1_ParamLimits

0x5448,	// (0x0001b321) list_single_heading_pane_vc_t1

0x545e,	// (0x0001b337) list_single_heading_pane_vc_t2_ParamLimits

0x545e,	// (0x0001b337) list_single_heading_pane_vc_t2

0x0001,

0xf818,	// (0x000256f1) list_single_heading_pane_vc_t_ParamLimits

0xf818,	// (0x000256f1) list_single_heading_pane_vc_t

0xd96a,	// (0x00023843) list_setting_number_pane_vc_g1_ParamLimits

0xd96a,	// (0x00023843) list_setting_number_pane_vc_g1

0xd976,	// (0x0002384f) list_setting_number_pane_vc_g2_ParamLimits

0xd976,	// (0x0002384f) list_setting_number_pane_vc_g2

0x0001,

0xf81d,	// (0x000256f6) list_setting_number_pane_vc_g_ParamLimits

0xf81d,	// (0x000256f6) list_setting_number_pane_vc_g

0xd982,	// (0x0002385b) list_setting_number_pane_vc_t1_ParamLimits

0xd982,	// (0x0002385b) list_setting_number_pane_vc_t1

0xd996,	// (0x0002386f) list_setting_number_pane_vc_t2_ParamLimits

0xd996,	// (0x0002386f) list_setting_number_pane_vc_t2

0xd9b2,	// (0x0002388b) list_setting_number_pane_vc_t3_ParamLimits

0xd9b2,	// (0x0002388b) list_setting_number_pane_vc_t3

0x0002,

0xf822,	// (0x000256fb) list_setting_number_pane_vc_t_ParamLimits

0xf822,	// (0x000256fb) list_setting_number_pane_vc_t

0xd9da,	// (0x000238b3) set_value_pane_vc_ParamLimits

0xd9da,	// (0x000238b3) set_value_pane_vc

0x5536,	// (0x0001b40f) list_double2_graphic_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double2_graphic_pane_vc

0xea99,	// (0x00024972) list_double2_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00024972) list_double2_large_graphic_pane_vc

0x5536,	// (0x0001b40f) list_double2_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double2_pane_vc

0x5536,	// (0x0001b40f) list_double_graphic_heading_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double_graphic_heading_pane_vc

0x5536,	// (0x0001b40f) list_double_graphic_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double_graphic_pane_vc

0x5536,	// (0x0001b40f) list_double_heading_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double_heading_pane_vc

0xea99,	// (0x00024972) list_double_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00024972) list_double_large_graphic_pane_vc

0x5536,	// (0x0001b40f) list_double_number_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double_number_pane_vc

0x5536,	// (0x0001b40f) list_double_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double_pane_vc

0x5536,	// (0x0001b40f) list_double_time_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_double_time_pane_vc

0x5536,	// (0x0001b40f) list_setting_number_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_setting_number_pane_vc

0x5536,	// (0x0001b40f) list_setting_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_setting_pane_vc

0x5536,	// (0x0001b40f) list_single_graphic_heading_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_single_graphic_heading_pane_vc

0x5536,	// (0x0001b40f) list_single_heading_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_single_heading_pane_vc

0x5536,	// (0x0001b40f) list_single_number_heading_pane_vc_ParamLimits

0x5536,	// (0x0001b40f) list_single_number_heading_pane_vc

0x4d19,	// (0x0001abf2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4d19,	// (0x0001abf2) list_double_graphic_heading_pane_vc_g1

0x4c9f,	// (0x0001ab78) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4c9f,	// (0x0001ab78) list_double_graphic_heading_pane_vc_g2

0x4cab,	// (0x0001ab84) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4cab,	// (0x0001ab84) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f0,	// (0x000256c9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x000256c9) list_double_graphic_heading_pane_vc_g

0x5607,	// (0x0001b4e0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5607,	// (0x0001b4e0) list_double_graphic_heading_pane_vc_t1

0x5448,	// (0x0001b321) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5448,	// (0x0001b321) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa20,	// (0x000258f9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x000258f9) list_double_graphic_heading_pane_vc_t

0xd96a,	// (0x00023843) list_setting_pane_vc_g1_ParamLimits

0xd96a,	// (0x00023843) list_setting_pane_vc_g1

0xd976,	// (0x0002384f) list_setting_pane_vc_g2_ParamLimits

0xd976,	// (0x0002384f) list_setting_pane_vc_g2

0x0001,

0xf81d,	// (0x000256f6) list_setting_pane_vc_g_ParamLimits

0xf81d,	// (0x000256f6) list_setting_pane_vc_g

0xf093,	// (0x00024f6c) list_setting_pane_vc_t1_ParamLimits

0xf093,	// (0x00024f6c) list_setting_pane_vc_t1

0xf0a7,	// (0x00024f80) list_setting_pane_vc_t2_ParamLimits

0xf0a7,	// (0x00024f80) list_setting_pane_vc_t2

0x0001,

0xfa63,	// (0x0002593c) list_setting_pane_vc_t_ParamLimits

0xfa63,	// (0x0002593c) list_setting_pane_vc_t

0xd9da,	// (0x000238b3) set_value_pane_cp_vc_ParamLimits

0xd9da,	// (0x000238b3) set_value_pane_cp_vc

0x4c9f,	// (0x0001ab78) list_single_number_heading_pane_vc_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_number_heading_pane_vc_g1

0x4cab,	// (0x0001ab84) list_single_number_heading_pane_vc_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000254e5) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000254e5) list_single_number_heading_pane_vc_g

0x5448,	// (0x0001b321) list_single_number_heading_pane_vc_t1_ParamLimits

0x5448,	// (0x0001b321) list_single_number_heading_pane_vc_t1

0x561b,	// (0x0001b4f4) list_single_number_heading_pane_vc_t2_ParamLimits

0x561b,	// (0x0001b4f4) list_single_number_heading_pane_vc_t2

0x4d07,	// (0x0001abe0) list_single_number_heading_pane_vc_t3_ParamLimits

0x4d07,	// (0x0001abe0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa68,	// (0x00025941) list_single_number_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x00025941) list_single_number_heading_pane_vc_t

0x4d19,	// (0x0001abf2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4d19,	// (0x0001abf2) list_single_graphic_heading_pane_vc_g1

0x4c9f,	// (0x0001ab78) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4c9f,	// (0x0001ab78) list_single_graphic_heading_pane_vc_g4

0x4cab,	// (0x0001ab84) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4cab,	// (0x0001ab84) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f0,	// (0x000256c9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x000256c9) list_single_graphic_heading_pane_vc_g

0x5448,	// (0x0001b321) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5448,	// (0x0001b321) list_single_graphic_heading_pane_vc_t1

0x562f,	// (0x0001b508) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x562f,	// (0x0001b508) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x00025948) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x00025948) list_single_graphic_heading_pane_vc_t

0x4c9f,	// (0x0001ab78) list_double2_pane_vc_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_double2_pane_vc_g1

0x4cab,	// (0x0001ab84) list_double2_pane_vc_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x000254e5) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x000254e5) list_double2_pane_vc_g

0x54fe,	// (0x0001b3d7) list_double2_pane_vc_t1_ParamLimits

0x54fe,	// (0x0001b3d7) list_double2_pane_vc_t1

0x5643,	// (0x0001b51c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5643,	// (0x0001b51c) list_double2_large_graphic_pane_vc_g1

0x564f,	// (0x0001b528) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x564f,	// (0x0001b528) list_double2_large_graphic_pane_vc_g2

0x565b,	// (0x0001b534) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x565b,	// (0x0001b534) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00025502) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00025502) list_double2_large_graphic_pane_vc_g

0x5667,	// (0x0001b540) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5667,	// (0x0001b540) list_double2_large_graphic_pane_vc_t1

0x567d,	// (0x0001b556) list_double_time_pane_vc_g1_ParamLimits

0x567d,	// (0x0001b556) list_double_time_pane_vc_g1

0x5689,	// (0x0001b562) list_double_time_pane_vc_g2_ParamLimits

0x5689,	// (0x0001b562) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x0002594d) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x0002594d) list_double_time_pane_vc_g

0x5695,	// (0x0001b56e) list_double_time_pane_vc_t1_ParamLimits

0x5695,	// (0x0001b56e) list_double_time_pane_vc_t1

0x56ae,	// (0x0001b587) list_double_time_pane_vc_t2_ParamLimits

0x56ae,	// (0x0001b587) list_double_time_pane_vc_t2

0x56ee,	// (0x0001b5c7) list_double_time_pane_vc_t3_ParamLimits

0x56ee,	// (0x0001b5c7) list_double_time_pane_vc_t3

0x5706,	// (0x0001b5df) list_double_time_pane_vc_t4_ParamLimits

0x5706,	// (0x0001b5df) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x00025952) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x00025952) list_double_time_pane_vc_t

0x4c9f,	// (0x0001ab78) list_double_pane_vc_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_double_pane_vc_g1

0x4cab,	// (0x0001ab84) list_double_pane_vc_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x000254e5) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x000254e5) list_double_pane_vc_g

0x571a,	// (0x0001b5f3) list_double_pane_vc_t1_ParamLimits

0x571a,	// (0x0001b5f3) list_double_pane_vc_t1

0x572c,	// (0x0001b605) list_double_pane_vc_t2_ParamLimits

0x572c,	// (0x0001b605) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x0002595b) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x0002595b) list_double_pane_vc_t

0x4c9f,	// (0x0001ab78) list_double_number_pane_vc_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_double_number_pane_vc_g1

0x4cab,	// (0x0001ab84) list_double_number_pane_vc_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x000254e5) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x000254e5) list_double_number_pane_vc_g

0x5744,	// (0x0001b61d) list_double_number_pane_vc_t1_ParamLimits

0x5744,	// (0x0001b61d) list_double_number_pane_vc_t1

0x5758,	// (0x0001b631) list_double_number_pane_vc_t2_ParamLimits

0x5758,	// (0x0001b631) list_double_number_pane_vc_t2

0x572c,	// (0x0001b605) list_double_number_pane_vc_t3_ParamLimits

0x572c,	// (0x0001b605) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x00025960) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x00025960) list_double_number_pane_vc_t

0x576a,	// (0x0001b643) list_double_large_graphic_pane_vc_g1_ParamLimits

0x576a,	// (0x0001b643) list_double_large_graphic_pane_vc_g1

0x5776,	// (0x0001b64f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5776,	// (0x0001b64f) list_double_large_graphic_pane_vc_g2

0x565b,	// (0x0001b534) list_double_large_graphic_pane_vc_g3_ParamLimits

0x565b,	// (0x0001b534) list_double_large_graphic_pane_vc_g3

0x5785,	// (0x0001b65e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5785,	// (0x0001b65e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x00025967) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x00025967) list_double_large_graphic_pane_vc_g

0x5791,	// (0x0001b66a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5791,	// (0x0001b66a) list_double_large_graphic_pane_vc_t1

0x57a3,	// (0x0001b67c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x57a3,	// (0x0001b67c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x00025970) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x00025970) list_double_large_graphic_pane_vc_t

0x4c9f,	// (0x0001ab78) list_double_heading_pane_vc_g1_ParamLimits

0x4c9f,	// (0x0001ab78) list_double_heading_pane_vc_g1

0x4cab,	// (0x0001ab84) list_double_heading_pane_vc_g2_ParamLimits

0x4cab,	// (0x0001ab84) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x000254e5) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x000254e5) list_double_heading_pane_vc_g

0x57bc,	// (0x0001b695) list_double_heading_pane_vc_t1_ParamLimits

0x57bc,	// (0x0001b695) list_double_heading_pane_vc_t1

0x5448,	// (0x0001b321) list_double_heading_pane_vc_t2_ParamLimits

0x5448,	// (0x0001b321) list_double_heading_pane_vc_t2

0x0001,

0xfa9c,	// (0x00025975) list_double_heading_pane_vc_t_ParamLimits

0xfa9c,	// (0x00025975) list_double_heading_pane_vc_t

0x57d0,	// (0x0001b6a9) list_double_graphic_pane_vc_g1_ParamLimits

0x57d0,	// (0x0001b6a9) list_double_graphic_pane_vc_g1

0x57e0,	// (0x0001b6b9) list_double_graphic_pane_vc_g2_ParamLimits

0x57e0,	// (0x0001b6b9) list_double_graphic_pane_vc_g2

0x57ef,	// (0x0001b6c8) list_double_graphic_pane_vc_g3_ParamLimits

0x57ef,	// (0x0001b6c8) list_double_graphic_pane_vc_g3

0x0002,

0xfaa1,	// (0x0002597a) list_double_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0002597a) list_double_graphic_pane_vc_g

0x57fb,	// (0x0001b6d4) list_double_graphic_pane_vc_t1_ParamLimits

0x57fb,	// (0x0001b6d4) list_double_graphic_pane_vc_t1

0x572c,	// (0x0001b605) list_double_graphic_pane_vc_t2_ParamLimits

0x572c,	// (0x0001b605) list_double_graphic_pane_vc_t2

0x0001,

0xfaa8,	// (0x00025981) list_double_graphic_pane_vc_t_ParamLimits

0xfaa8,	// (0x00025981) list_double_graphic_pane_vc_t

0x5c07,	// (0x0001bae0) aid_size_cell_fastswap

0x8e64,	// (0x0001ed3d) aid_size_cell_touch_ParamLimits

0x8e64,	// (0x0001ed3d) aid_size_cell_touch

0x5e6a,	// (0x0001bd43) popup_fast_swap_wide_window_ParamLimits

0x5e6a,	// (0x0001bd43) popup_fast_swap_wide_window

0x8faf,	// (0x0001ee88) touch_pane_ParamLimits

0x8faf,	// (0x0001ee88) touch_pane

0xc984,	// (0x0002285d) button_value_adjust_pane_cp2

0x50e9,	// (0x0001afc2) button_value_adjust_pane_cp4

0x5109,	// (0x0001afe2) form_field_data_pane_cp2

0x8b5d,	// (0x0001ea36) form_field_data_wide_pane_cp2

0xcce2,	// (0x00022bbb) bg_scroll_pane_ParamLimits

0x61ec,	// (0x0001c0c5) scroll_handle_pane_ParamLimits

0x6200,	// (0x0001c0d9) scroll_sc2_down_pane_ParamLimits

0x6200,	// (0x0001c0d9) scroll_sc2_down_pane

0xcd13,	// (0x00022bec) scroll_sc2_up_pane_ParamLimits

0xcd13,	// (0x00022bec) scroll_sc2_up_pane

0xaa35,	// (0x0002090e) grid_wheel_folder_pane_g1_ParamLimits

0xaa35,	// (0x0002090e) grid_wheel_folder_pane_g1

0x63c5,	// (0x0001c29e) clock_nsta_pane_cp2_ParamLimits

0x63c5,	// (0x0001c29e) clock_nsta_pane_cp2

0x956d,	// (0x0001f446) listscroll_midp_pane_ParamLimits

0x957e,	// (0x0001f457) midp_canvas_pane

0xd5dc,	// (0x000234b5) nsta_clock_indic_pane

0xd614,	// (0x000234ed) listscroll_form_pane_vc

0xd61c,	// (0x000234f5) listscroll_set_pane_vc_ParamLimits

0xd61c,	// (0x000234f5) listscroll_set_pane_vc

0x9f3f,	// (0x0001fe18) clock_nsta_pane

0x9f69,	// (0x0001fe42) indicator_nsta_pane

0xd860,	// (0x00023739) bg_popup_sub_pane_cp2_ParamLimits

0xd874,	// (0x0002374d) find_pane_cp2_ParamLimits

0xd874,	// (0x0002374d) find_pane_cp2

0xd88a,	// (0x00023763) grid_toobar_pane_ParamLimits

0xd9e6,	// (0x000238bf) list_form_gen_pane_vc_ParamLimits

0xd9e6,	// (0x000238bf) list_form_gen_pane_vc

0xd9fc,	// (0x000238d5) scroll_pane_cp8_vc_ParamLimits

0xd9fc,	// (0x000238d5) scroll_pane_cp8_vc

0xda4c,	// (0x00023925) data_form_wide_pane_vc_ParamLimits

0xda4c,	// (0x00023925) data_form_wide_pane_vc

0xda58,	// (0x00023931) form_field_data_wide_pane_vc_g1

0xda60,	// (0x00023939) form_field_data_wide_pane_vc_t1_ParamLimits

0xda60,	// (0x00023939) form_field_data_wide_pane_vc_t1

0xc998,	// (0x00022871) input_focus_pane_cp6_vc_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_cp6_vc

0xa358,	// (0x00020231) list_midp_pane_ParamLimits

0xe8e1,	// (0x000247ba) scroll_pane_cp16_ParamLimits

0xe8e1,	// (0x000247ba) scroll_pane_cp16

0xdcc1,	// (0x00023b9a) button_value_adjust_pane_ParamLimits

0xdcc1,	// (0x00023b9a) button_value_adjust_pane

0xa6b5,	// (0x0002058e) button_value_adjust_pane_cp6_ParamLimits

0xa6b5,	// (0x0002058e) button_value_adjust_pane_cp6

0xa7cb,	// (0x000206a4) settings_code_pane_cp_ParamLimits

0xa7cb,	// (0x000206a4) settings_code_pane_cp

0xc2eb,	// (0x000221c4) cell_touch_pane_g1

0xc2eb,	// (0x000221c4) cell_touch_pane_g2

0x0001,

0xf747,	// (0x00025620) cell_touch_pane_g

0xa914,	// (0x000207ed) cell_touch_pane_cp_ParamLimits

0xa914,	// (0x000207ed) cell_touch_pane_cp

0xa930,	// (0x00020809) cell_touch_pane_ParamLimits

0xa930,	// (0x00020809) cell_touch_pane

0xc2eb,	// (0x000221c4) scroll_sc2_down_pane_g1

0xc2eb,	// (0x000221c4) scroll_sc2_up_pane_g1

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp4_vc

0xeeaf,	// (0x00024d88) list_set_graphic_pane_vc_g1_ParamLimits

0xeeaf,	// (0x00024d88) list_set_graphic_pane_vc_g1

0xeebb,	// (0x00024d94) list_set_graphic_pane_vc_g2_ParamLimits

0xeebb,	// (0x00024d94) list_set_graphic_pane_vc_g2

0x0001,

0xfa25,	// (0x000258fe) list_set_graphic_pane_vc_g_ParamLimits

0xfa25,	// (0x000258fe) list_set_graphic_pane_vc_g

0xeec7,	// (0x00024da0) text_primary_small_cp13_vc_ParamLimits

0xeec7,	// (0x00024da0) text_primary_small_cp13_vc

0xeedf,	// (0x00024db8) list_set_graphic_pane_vc_ParamLimits

0xeedf,	// (0x00024db8) list_set_graphic_pane_vc

0xc2f5,	// (0x000221ce) input_focus_pane_cp2_vc

0xc2eb,	// (0x000221c4) setting_code_pane_vc_g1

0xeef3,	// (0x00024dcc) setting_code_pane_vc_t1

0xef01,	// (0x00024dda) set_text_pane_vc_t1_ParamLimits

0xef01,	// (0x00024dda) set_text_pane_vc_t1

0xc2f5,	// (0x000221ce) input_focus_pane_cp1_vc

0xef20,	// (0x00024df9) list_set_text_pane_vc

0xc2eb,	// (0x000221c4) setting_text_pane_vc_g1

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp2_vc

0xef2a,	// (0x00024e03) setting_slider_graphic_pane_vc_g1

0xef32,	// (0x00024e0b) setting_slider_graphic_pane_vc_t1

0xef40,	// (0x00024e19) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2a,	// (0x00025903) setting_slider_graphic_pane_vc_t

0xef4e,	// (0x00024e27) slider_set_pane_cp_vc

0xef56,	// (0x00024e2f) slider_set_pane_vc_g1

0xef5f,	// (0x00024e38) slider_set_pane_vc_g2

0x0006,

0xfa2f,	// (0x00025908) slider_set_pane_vc_g

0xc9ff,	// (0x000228d8) set_opt_bg_pane_g1_copy1

0xca07,	// (0x000228e0) set_opt_bg_pane_g2_copy1

0xef8b,	// (0x00024e64) set_opt_bg_pane_g3_copy1

0xca17,	// (0x000228f0) set_opt_bg_pane_g4_copy1

0xca1f,	// (0x000228f8) set_opt_bg_pane_g5_copy1

0xca27,	// (0x00022900) set_opt_bg_pane_g6_copy1

0xef93,	// (0x00024e6c) set_opt_bg_pane_g7_copy1

0xef9d,	// (0x00024e76) set_opt_bg_pane_g8_copy1

0xefa5,	// (0x00024e7e) set_opt_bg_pane_g9_copy1

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp_vc

0xefad,	// (0x00024e86) setting_slider_pane_vc_t1

0xef32,	// (0x00024e0b) setting_slider_pane_vc_t2

0xef40,	// (0x00024e19) setting_slider_pane_vc_t3

0x0002,

0xfa3e,	// (0x00025917) setting_slider_pane_vc_t

0xef4e,	// (0x00024e27) slider_set_pane_vc

0x6757,	// (0x0001c630) volume_set_pane_vc_g1

0x6a52,	// (0x0001c92b) volume_set_pane_vc_g2

0x6a5b,	// (0x0001c934) volume_set_pane_vc_g3

0x6a64,	// (0x0001c93d) volume_set_pane_vc_g4

0x6a6d,	// (0x0001c946) volume_set_pane_vc_g5

0x6a76,	// (0x0001c94f) volume_set_pane_vc_g6

0x6a7f,	// (0x0001c958) volume_set_pane_vc_g7

0x6a88,	// (0x0001c961) volume_set_pane_vc_g8

0x6a91,	// (0x0001c96a) volume_set_pane_vc_g9

0x6a9a,	// (0x0001c973) volume_set_pane_vc_g10

0x0009,

0xfa45,	// (0x0002591e) volume_set_pane_vc_g

0xefbc,	// (0x00024e95) volume_set_pane_vc

0xefc4,	// (0x00024e9d) button_value_adjust_pane_cp1_vc

0xefce,	// (0x00024ea7) list_highlight_pane_cp2_vc

0xefd7,	// (0x00024eb0) list_set_pane_vc_ParamLimits

0xefd7,	// (0x00024eb0) list_set_pane_vc

0xf029,	// (0x00024f02) main_pane_set_vc_t1_ParamLimits

0xf029,	// (0x00024f02) main_pane_set_vc_t1

0xf03e,	// (0x00024f17) main_pane_set_vc_t2_ParamLimits

0xf03e,	// (0x00024f17) main_pane_set_vc_t2

0xf050,	// (0x00024f29) main_pane_set_vc_t3_ParamLimits

0xf050,	// (0x00024f29) main_pane_set_vc_t3

0xf062,	// (0x00024f3b) main_pane_set_vc_t4_ParamLimits

0xf062,	// (0x00024f3b) main_pane_set_vc_t4

0x0003,

0xfa5a,	// (0x00025933) main_pane_set_vc_t_ParamLimits

0xfa5a,	// (0x00025933) main_pane_set_vc_t

0xf074,	// (0x00024f4d) setting_code_pane_vc_ParamLimits

0xf074,	// (0x00024f4d) setting_code_pane_vc

0xf083,	// (0x00024f5c) setting_slider_graphic_pane_vc

0xf083,	// (0x00024f5c) setting_slider_pane_vc

0xf083,	// (0x00024f5c) setting_text_pane_vc

0xf083,	// (0x00024f5c) setting_volume_pane_vc

0xf08b,	// (0x00024f64) scroll_pane_cp121_vc

0xc972,	// (0x0002284b) set_content_pane_vc

0xf0c9,	// (0x00024fa2) button_value_adjust_pane_g1

0xf0d2,	// (0x00024fab) button_value_adjust_pane_g2

0x0001,

0xfaad,	// (0x00025986) button_value_adjust_pane_g

0xf0db,	// (0x00024fb4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf0db,	// (0x00024fb4) form_field_slider_wide_pane_vc_t1

0xf0ef,	// (0x00024fc8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf0ef,	// (0x00024fc8) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab2,	// (0x0002598b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab2,	// (0x0002598b) form_field_slider_wide_pane_vc_t

0xc343,	// (0x0002221c) input_focus_pane_cp10_vc_ParamLimits

0xc343,	// (0x0002221c) input_focus_pane_cp10_vc

0xf101,	// (0x00024fda) slider_cont_pane_cp1_vc_ParamLimits

0xf101,	// (0x00024fda) slider_cont_pane_cp1_vc

0xef56,	// (0x00024e2f) slider_form_pane_g1_cp2

0xef5f,	// (0x00024e38) slider_form_pane_g2_cp2

0xf11a,	// (0x00024ff3) form_field_slider_pane_vc_t3

0xf128,	// (0x00025001) form_field_slider_pane_vc_t4

0xf136,	// (0x0002500f) slider_form_pane_vc_ParamLimits

0xf136,	// (0x0002500f) slider_form_pane_vc

0xf143,	// (0x0002501c) form_field_slider_pane_vc_t1_ParamLimits

0xf143,	// (0x0002501c) form_field_slider_pane_vc_t1

0xf0ef,	// (0x00024fc8) form_field_slider_pane_vc_t2_ParamLimits

0xf0ef,	// (0x00024fc8) form_field_slider_pane_vc_t2

0x0001,

0xfac2,	// (0x0002599b) form_field_slider_pane_vc_t_ParamLimits

0xfac2,	// (0x0002599b) form_field_slider_pane_vc_t

0xc343,	// (0x0002221c) input_focus_pane_cp9_vc_ParamLimits

0xc343,	// (0x0002221c) input_focus_pane_cp9_vc

0xf15f,	// (0x00025038) slider_cont_pane_vc_ParamLimits

0xf15f,	// (0x00025038) slider_cont_pane_vc

0xf171,	// (0x0002504a) list_form_graphic_pane_cp_vc_ParamLimits

0xf171,	// (0x0002504a) list_form_graphic_pane_cp_vc

0xda58,	// (0x00023931) form_field_popup_wide_pane_vc_g1

0xf186,	// (0x0002505f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf186,	// (0x0002505f) form_field_popup_wide_pane_vc_t1

0xc998,	// (0x00022871) input_focus_pane_cp8_vc_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_cp8_vc

0xf19d,	// (0x00025076) list_form_wide_pane_vc_ParamLimits

0xf19d,	// (0x00025076) list_form_wide_pane_vc

0xf1a9,	// (0x00025082) list_form_graphic_pane_vc_g1

0xf1b1,	// (0x0002508a) list_form_graphic_pane_vc_t1_ParamLimits

0xf1b1,	// (0x0002508a) list_form_graphic_pane_vc_t1

0xc351,	// (0x0002222a) list_highlight_pane_cp5_vc_ParamLimits

0xc351,	// (0x0002222a) list_highlight_pane_cp5_vc

0xf1cd,	// (0x000250a6) list_form_graphic_pane_vc_ParamLimits

0xf1cd,	// (0x000250a6) list_form_graphic_pane_vc

0xda58,	// (0x00023931) form_field_popup_pane_vc_g1

0xf1e3,	// (0x000250bc) form_field_popup_pane_vc_t1_ParamLimits

0xf1e3,	// (0x000250bc) form_field_popup_pane_vc_t1

0xc998,	// (0x00022871) input_focus_pane_cp7_vc_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_cp7_vc

0xf1fa,	// (0x000250d3) list_form_pane_vc_ParamLimits

0xf1fa,	// (0x000250d3) list_form_pane_vc

0xf206,	// (0x000250df) data_form_pane_vc_t1_ParamLimits

0xf206,	// (0x000250df) data_form_pane_vc_t1

0xc9ff,	// (0x000228d8) input_focus_pane_vc_g1

0xca07,	// (0x000228e0) input_focus_pane_vc_g2

0xca0f,	// (0x000228e8) input_focus_pane_vc_g3

0xca17,	// (0x000228f0) input_focus_pane_vc_g4

0xca1f,	// (0x000228f8) input_focus_pane_vc_g5

0xca27,	// (0x00022900) input_focus_pane_vc_g6

0xca2f,	// (0x00022908) input_focus_pane_vc_g7

0xca37,	// (0x00022910) input_focus_pane_vc_g8

0xca3f,	// (0x00022918) input_focus_pane_vc_g9

0xc2eb,	// (0x000221c4) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x000255a9) input_focus_pane_vc_g

0xda4c,	// (0x00023925) data_form_pane_vc_ParamLimits

0xda4c,	// (0x00023925) data_form_pane_vc

0xda58,	// (0x00023931) form_field_data_pane_vc_g1

0xf221,	// (0x000250fa) form_field_data_pane_vc_t1_ParamLimits

0xf221,	// (0x000250fa) form_field_data_pane_vc_t1

0xc998,	// (0x00022871) input_focus_pane_vc_ParamLimits

0xc998,	// (0x00022871) input_focus_pane_vc

0xf23b,	// (0x00025114) button_value_adjust_pane_cp3_vc

0xf243,	// (0x0002511c) button_value_adjust_pane_cp5_vc

0xf24b,	// (0x00025124) form_field_data_pane_vc_ParamLimits

0xf24b,	// (0x00025124) form_field_data_pane_vc

0xf262,	// (0x0002513b) form_field_data_pane_vc_cp2

0xf26a,	// (0x00025143) form_field_data_wide_pane_vc_ParamLimits

0xf26a,	// (0x00025143) form_field_data_wide_pane_vc

0xf280,	// (0x00025159) form_field_data_wide_pane_vc_cp2

0xf288,	// (0x00025161) form_field_popup_pane_vc_ParamLimits

0xf288,	// (0x00025161) form_field_popup_pane_vc

0xf29f,	// (0x00025178) form_field_popup_wide_pane_vc_ParamLimits

0xf29f,	// (0x00025178) form_field_popup_wide_pane_vc

0xf2b5,	// (0x0002518e) form_field_slider_pane_vc_ParamLimits

0xf2b5,	// (0x0002518e) form_field_slider_pane_vc

0xf2c8,	// (0x000251a1) form_field_slider_wide_pane_vc_ParamLimits

0xf2c8,	// (0x000251a1) form_field_slider_wide_pane_vc

0xa94e,	// (0x00020827) grid_touch_1_pane_ParamLimits

0xa94e,	// (0x00020827) grid_touch_1_pane

0xa962,	// (0x0002083b) grid_touch_2_pane_ParamLimits

0xa962,	// (0x0002083b) grid_touch_2_pane

0xf341,	// (0x0002521a) touch_pane_g1_ParamLimits

0xf341,	// (0x0002521a) touch_pane_g1

0xf2db,	// (0x000251b4) cell_app_pane_cp_wide_ParamLimits

0xf2db,	// (0x000251b4) cell_app_pane_cp_wide

0xf2ec,	// (0x000251c5) grid_popup_fast_wide_pane_ParamLimits

0xf2ec,	// (0x000251c5) grid_popup_fast_wide_pane

0xf300,	// (0x000251d9) scroll_pane_cp19_ParamLimits

0xf300,	// (0x000251d9) scroll_pane_cp19

0xc2f5,	// (0x000221ce) bg_popup_window_pane_cp20

0xf314,	// (0x000251ed) listscroll_popup_fast_wide_pane

0xd63c,	// (0x00023515) grid_indicator_nsta_pane

0xf31c,	// (0x000251f5) clock_nsta_pane_g1

0xf325,	// (0x000251fe) clock_nsta_pane_t1

0xa98c,	// (0x00020865) cell_indicator_nsta_pane_ParamLimits

0xa98c,	// (0x00020865) cell_indicator_nsta_pane

0xf341,	// (0x0002521a) cell_indicator_nsta_pane_g1

0xa9a9,	// (0x00020882) cell_indicator_nsta_pane_g2

0x0001,

0xfacc,	// (0x000259a5) cell_indicator_nsta_pane_g

0xf34f,	// (0x00025228) clock_nsta_pane_cp

0xf357,	// (0x00025230) indicator_nsta_pane_cp

0xf35f,	// (0x00025238) nsta_clock_indic_pane_g1

0xc38d,	// (0x00022266) grid_indicator_pane

0xce05,	// (0x00022cde) scroll_pane_cp29

0x6314,	// (0x0001c1ed) indicator_nsta_pane_cp2_ParamLimits

0x6314,	// (0x0001c1ed) indicator_nsta_pane_cp2

0xc351,	// (0x0002222a) main_apps_wheel_pane

0xdb74,	// (0x00023a4d) form_midp_field_text_pane_ParamLimits

0xdca1,	// (0x00023b7a) scroll_bar_cp050_ParamLimits

0xf397,	// (0x00025270) cell_indicator_pane_ParamLimits

0xf397,	// (0x00025270) cell_indicator_pane

0xf3b4,	// (0x0002528d) cell_indicator_pane_g1

0xa9bf,	// (0x00020898) grid_wheel_folder_pane_ParamLimits

0xa9bf,	// (0x00020898) grid_wheel_folder_pane

0xa9cd,	// (0x000208a6) list_wheel_apps_pane_ParamLimits

0xa9cd,	// (0x000208a6) list_wheel_apps_pane

0xa9db,	// (0x000208b4) main_apps_wheel_pane_g1_ParamLimits

0xa9db,	// (0x000208b4) main_apps_wheel_pane_g1

0xa9e7,	// (0x000208c0) main_apps_wheel_pane_g2_ParamLimits

0xa9e7,	// (0x000208c0) main_apps_wheel_pane_g2

0x0001,

0xfadb,	// (0x000259b4) main_apps_wheel_pane_g_ParamLimits

0xfadb,	// (0x000259b4) main_apps_wheel_pane_g

0xa9f5,	// (0x000208ce) main_apps_wheel_pane_t1_ParamLimits

0xa9f5,	// (0x000208ce) main_apps_wheel_pane_t1

0xaa09,	// (0x000208e2) list_wheel_apps_pane_g1

0xaa11,	// (0x000208ea) list_wheel_apps_pane_g2

0xaa19,	// (0x000208f2) list_wheel_apps_pane_g3

0xaa21,	// (0x000208fa) list_wheel_apps_pane_g4

0xaa2b,	// (0x00020904) list_wheel_apps_pane_g5

0x0004,

0xfae0,	// (0x000259b9) list_wheel_apps_pane_g

0xd258,	// (0x00023131) navi_icon_text_pane

0x9e3a,	// (0x0001fd13) aid_fill_nsta

0xaa42,	// (0x0002091b) navi_icon_text_pane_g1

0xaa4e,	// (0x00020927) navi_icon_text_pane_t1

0xd0f4,	// (0x00022fcd) list_set_graphic_pane_t1_ParamLimits

0xd0f4,	// (0x00022fcd) list_set_graphic_pane_t1

0xe378,	// (0x00024251) popup_midp_note_alarm_window_t6_ParamLimits

0xe378,	// (0x00024251) popup_midp_note_alarm_window_t6

0xe38a,	// (0x00024263) popup_midp_note_alarm_window_t7_ParamLimits

0xe38a,	// (0x00024263) popup_midp_note_alarm_window_t7

0xe39c,	// (0x00024275) popup_midp_note_alarm_window_t8_ParamLimits

0xe39c,	// (0x00024275) popup_midp_note_alarm_window_t8

0xe3ae,	// (0x00024287) popup_midp_note_alarm_window_t9_ParamLimits

0xe3ae,	// (0x00024287) popup_midp_note_alarm_window_t9

0xe3c0,	// (0x00024299) popup_midp_note_alarm_window_t10_ParamLimits

0xe3c0,	// (0x00024299) popup_midp_note_alarm_window_t10

0xe3d2,	// (0x000242ab) popup_midp_note_alarm_window_t11_ParamLimits

0xe3d2,	// (0x000242ab) popup_midp_note_alarm_window_t11

0xe3e4,	// (0x000242bd) scroll_pane_cp17_ParamLimits

0xe3e4,	// (0x000242bd) scroll_pane_cp17

0x6757,	// (0x0001c630) volume_small_pane_cp_g1

0x6aa3,	// (0x0001c97c) volume_small_pane_cp_g2

0x6aac,	// (0x0001c985) volume_small_pane_cp_g3

0x6ab5,	// (0x0001c98e) volume_small_pane_cp_g4

0x6abe,	// (0x0001c997) volume_small_pane_cp_g5

0x6ac7,	// (0x0001c9a0) volume_small_pane_cp_g6

0x6ad0,	// (0x0001c9a9) volume_small_pane_cp_g7

0x6ad9,	// (0x0001c9b2) volume_small_pane_cp_g8

0x6ae2,	// (0x0001c9bb) volume_small_pane_cp_g9

0x6aeb,	// (0x0001c9c4) volume_small_pane_cp_g10

0xd404,	// (0x000232dd) midp_ticker_pane_g1_ParamLimits

0xd410,	// (0x000232e9) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x00025671) midp_ticker_pane_g_ParamLimits

0x9619,	// (0x0001f4f2) midp_ticker_pane_t1_ParamLimits

0x9e5a,	// (0x0001fd33) aid_fill_nsta_2

0xdc8d,	// (0x00023b66) list_form2_midp_pane

0xea77,	// (0x00024950) midp_editing_number_pane_ParamLimits

0xea86,	// (0x0002495f) midp_ticker_pane_ParamLimits

0xf3be,	// (0x00025297) form2_midp_field_pane

0xf3c6,	// (0x0002529f) scroll_pane_cp51

0xf3e6,	// (0x000252bf) form2_midp_button_pane_ParamLimits

0xf3e6,	// (0x000252bf) form2_midp_button_pane

0xf3f8,	// (0x000252d1) form2_midp_content_pane_ParamLimits

0xf3f8,	// (0x000252d1) form2_midp_content_pane

0xf412,	// (0x000252eb) form2_midp_field_choice_group_pane

0xf41a,	// (0x000252f3) form2_midp_field_pane_g1

0xf422,	// (0x000252fb) form2_midp_field_pane_g2

0xf42a,	// (0x00025303) form2_midp_field_pane_g3

0xf432,	// (0x0002530b) form2_midp_field_pane_g4

0x0003,

0xfb05,	// (0x000259de) form2_midp_field_pane_g

0xf43a,	// (0x00025313) form2_midp_gauge_slider_pane

0xf442,	// (0x0002531b) form2_midp_gauge_wait_pane

0xf44a,	// (0x00025323) form2_midp_image_pane_ParamLimits

0xf44a,	// (0x00025323) form2_midp_image_pane

0xf465,	// (0x0002533e) form2_midp_label_pane_ParamLimits

0xf465,	// (0x0002533e) form2_midp_label_pane

0xaa7c,	// (0x00020955) form2_midp_label_pane_cp_ParamLimits

0xaa7c,	// (0x00020955) form2_midp_label_pane_cp

0xf47e,	// (0x00025357) form2_midp_string_pane_ParamLimits

0xf47e,	// (0x00025357) form2_midp_string_pane

0x580d,	// (0x0001b6e6) form2_midp_text_pane_ParamLimits

0x580d,	// (0x0001b6e6) form2_midp_text_pane

0xf490,	// (0x00025369) form2_midp_time_pane

0xf4a0,	// (0x00025379) input_focus_pane_cp51_ParamLimits

0xf4a0,	// (0x00025379) input_focus_pane_cp51

0xf4b8,	// (0x00025391) form2_midp_label_pane_t1_ParamLimits

0xf4b8,	// (0x00025391) form2_midp_label_pane_t1

0x5826,	// (0x0001b6ff) form2_mdip_text_pane_t1_ParamLimits

0x5826,	// (0x0001b6ff) form2_mdip_text_pane_t1

0x5843,	// (0x0001b71c) form2_midp_time_pane_t1

0xf500,	// (0x000253d9) form2_midp_gauge_slider_pane_t1

0xaa9d,	// (0x00020976) form2_midp_gauge_slider_pane_t2

0xaaaf,	// (0x00020988) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0e,	// (0x000259e7) form2_midp_gauge_slider_pane_t

0xf512,	// (0x000253eb) form2_midp_slider_pane

0xf51e,	// (0x000253f7) form2_midp_gauge_wait_pane_t1

0xf52c,	// (0x00025405) form2_midp_wait_pane_ParamLimits

0xf52c,	// (0x00025405) form2_midp_wait_pane

0xaac1,	// (0x0002099a) list_single_2graphic_pane_cp4_ParamLimits

0xaac1,	// (0x0002099a) list_single_2graphic_pane_cp4

0xa2df,	// (0x000201b8) list_single_midp_graphic_pane_cp_ParamLimits

0xa2df,	// (0x000201b8) list_single_midp_graphic_pane_cp

0xc2f5,	// (0x000221ce) list_highlight_pane_cp20

0xf557,	// (0x00025430) list_single_2graphic_pane_g1_cp4

0xedb4,	// (0x00024c8d) list_single_2graphic_pane_g2_cp4

0xf55f,	// (0x00025438) list_single_2graphic_pane_t1_cp4

0xc351,	// (0x0002222a) list_highlight_pane_cp21

0xf56e,	// (0x00025447) list_single_midp_graphic_pane_g4_cp

0xf57d,	// (0x00025456) list_single_midp_graphic_pane_t1_cp

0xaad8,	// (0x000209b1) form2_mdip_string_pane_t1_ParamLimits

0xaad8,	// (0x000209b1) form2_mdip_string_pane_t1

0xc2f5,	// (0x000221ce) bg_wml_button_pane_cp2

0xc2eb,	// (0x000221c4) form2_midp_image_pane_g1

0x4eea,	// (0x0001adc3) list_double_large_graphic_pane_g5_ParamLimits

0x4eea,	// (0x0001adc3) list_double_large_graphic_pane_g5

0x956d,	// (0x0001f446) midp_form_pane_ParamLimits

0xc351,	// (0x0002222a) main_apps_wheel_pane_ParamLimits

0x9b96,	// (0x0001fa6f) popup_preview_window_ParamLimits

0x9b96,	// (0x0001fa6f) popup_preview_window

0xd701,	// (0x000235da) popup_touch_info_window_ParamLimits

0xd701,	// (0x000235da) popup_touch_info_window

0xd71f,	// (0x000235f8) popup_touch_menu_window_ParamLimits

0xd71f,	// (0x000235f8) popup_touch_menu_window

0xc2e1,	// (0x000221ba) bg_popup_sub_pane_cp6

0x0095,	// (0x00015f6e) list_touch_menu_pane

0x009d,	// (0x00015f76) list_single_touch_menu_pane_ParamLimits

0x009d,	// (0x00015f76) list_single_touch_menu_pane

0x00b2,	// (0x00015f8b) list_single_touch_menu_pane_t1

0xc351,	// (0x0002222a) bg_popup_sub_pane_cp7_ParamLimits

0xc351,	// (0x0002222a) bg_popup_sub_pane_cp7

0x00c0,	// (0x00015f99) heading_sub_pane

0x00c8,	// (0x00015fa1) list_touch_info_pane_ParamLimits

0x00c8,	// (0x00015fa1) list_touch_info_pane

0x00d7,	// (0x00015fb0) list_single_touch_info_pane_ParamLimits

0x00d7,	// (0x00015fb0) list_single_touch_info_pane

0x00e9,	// (0x00015fc2) list_single_touch_info_pane_t1

0x00f7,	// (0x00015fd0) list_single_touch_info_pane_t2

0x0001,

0xfb1c,	// (0x000259f5) list_single_touch_info_pane_t

0xd3da,	// (0x000232b3) bg_popup_heading_pane_cp

0x0105,	// (0x00015fde) heading_sub_pane_t1

0xda12,	// (0x000238eb) bg_popup_preview_window_pane_cp_ParamLimits

0xda12,	// (0x000238eb) bg_popup_preview_window_pane_cp

0x00c0,	// (0x00015f99) heading_preview_pane

0x00c8,	// (0x00015fa1) list_preview_pane_ParamLimits

0x00c8,	// (0x00015fa1) list_preview_pane

0x0113,	// (0x00015fec) popup_preview_window_g1

0x00d7,	// (0x00015fb0) list_single_preview_pane_ParamLimits

0x00d7,	// (0x00015fb0) list_single_preview_pane

0x011b,	// (0x00015ff4) list_single_preview_pane_g1

0x0123,	// (0x00015ffc) list_single_preview_pane_t1

0x00e9,	// (0x00015fc2) list_single_preview_pane_t2

0x0001,

0xfb21,	// (0x000259fa) list_single_preview_pane_t

0x0131,	// (0x0001600a) bg_popup_heading_pane_cp2_ParamLimits

0x0131,	// (0x0001600a) bg_popup_heading_pane_cp2

0x0147,	// (0x00016020) heading_preview_pane_g1

0x014f,	// (0x00016028) heading_preview_pane_t1_ParamLimits

0x014f,	// (0x00016028) heading_preview_pane_t1

0xc3a4,	// (0x0002227d) soft_indicator_pane_t1_ParamLimits

0xc90b,	// (0x000227e4) scroll_pane_ParamLimits

0xcd01,	// (0x00022bda) scroll_sc2_left_pane

0xcd0a,	// (0x00022be3) scroll_sc2_right_pane

0xcd29,	// (0x00022c02) scroll_bg_pane_g1_ParamLimits

0xcd3e,	// (0x00022c17) scroll_bg_pane_g2_ParamLimits

0xcd56,	// (0x00022c2f) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x00025600) scroll_bg_pane_g_ParamLimits

0xcd29,	// (0x00022c02) scroll_handle_pane_g1_ParamLimits

0xcd78,	// (0x00022c51) scroll_handle_pane_g2_ParamLimits

0xcd56,	// (0x00022c2f) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x00025607) scroll_handle_pane_g_ParamLimits

0xd64a,	// (0x00023523) popup_choice_list_window_ParamLimits

0xd64a,	// (0x00023523) popup_choice_list_window

0xd86c,	// (0x00023745) choice_list_pane

0xd8ee,	// (0x000237c7) cell_toolbar_pane_t1

0xd916,	// (0x000237ef) toolbar_button_pane_ParamLimits

0xe7c2,	// (0x0002469b) ai_gene_pane_1_t2_ParamLimits

0xe7c2,	// (0x0002469b) ai_gene_pane_1_t2

0x0001,

0xf93f,	// (0x00025818) ai_gene_pane_1_t_ParamLimits

0xf93f,	// (0x00025818) ai_gene_pane_1_t

0x016c,	// (0x00016045) scroll_sc2_left_pane_g1

0x016c,	// (0x00016045) scroll_sc2_right_pane_g1

0xcaef,	// (0x000229c8) bg_popup_sub_pane_cp10

0x0176,	// (0x0001604f) list_choice_list_pane

0x018d,	// (0x00016066) list_single_choice_list_pane_ParamLimits

0x018d,	// (0x00016066) list_single_choice_list_pane

0x01a1,	// (0x0001607a) list_single_choice_list_pane_g1

0x01a9,	// (0x00016082) list_single_choice_list_pane_t1_ParamLimits

0x01a9,	// (0x00016082) list_single_choice_list_pane_t1

0x01be,	// (0x00016097) choice_list_pane_g1

0x01c6,	// (0x0001609f) choice_list_pane_t1

0xc2e1,	// (0x000221ba) input_focus_pane_cp11

0xcc64,	// (0x00022b3d) title_pane_stacon_g2_ParamLimits

0xcc64,	// (0x00022b3d) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x000255e6) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x000255e6) title_pane_stacon_g

0xd3da,	// (0x000232b3) cursor_press_pane

0x9855,	// (0x0001f72e) popup_fep_hwr_window_ParamLimits

0x9855,	// (0x0001f72e) popup_fep_hwr_window

0xd69e,	// (0x00023577) popup_fep_vkb_window_ParamLimits

0xd69e,	// (0x00023577) popup_fep_vkb_window

0x01d4,	// (0x000160ad) cursor_press_pane_g1

0x0002,

0xfb4a,	// (0x00025a23) fep_vkb_side_pane_g_ParamLimits

0x6b1f,	// (0x0001c9f8) fep_hwr_candidate_pane_ParamLimits

0x6b1f,	// (0x0001c9f8) fep_hwr_candidate_pane

0x6b49,	// (0x0001ca22) fep_hwr_side_pane_ParamLimits

0x6b49,	// (0x0001ca22) fep_hwr_side_pane

0x6b69,	// (0x0001ca42) fep_hwr_top_pane_ParamLimits

0x6b69,	// (0x0001ca42) fep_hwr_top_pane

0x6b81,	// (0x0001ca5a) fep_hwr_write_pane_ParamLimits

0x6b81,	// (0x0001ca5a) fep_hwr_write_pane

0xfb4a,	// (0x00025a23) fep_vkb_side_pane_g

0x01ee,	// (0x000160c7) fep_hwr_top_pane_g1

0x01dc,	// (0x000160b5) fep_hwr_top_pane_g2

0x6bad,	// (0x0001ca86) fep_hwr_top_pane_g3

0x0002,

0xfb26,	// (0x000259ff) fep_hwr_top_pane_g

0x6bc2,	// (0x0001ca9b) fep_hwr_top_text_pane

0xcecb,	// (0x00022da4) fep_hwr_top_text_pane_g1

0x0224,	// (0x000160fd) fep_hwr_top_text_pane_t1

0x6cb8,	// (0x0001cb91) fep_hwr_candidate_pane_g1

0x048c,	// (0x00016365) fep_vkb_keypad_pane_g3_ParamLimits

0x048c,	// (0x00016365) fep_vkb_keypad_pane_g3

0x04b4,	// (0x0001638d) fep_vkb_keypad_pane_g4_ParamLimits

0x04b4,	// (0x0001638d) fep_vkb_keypad_pane_g4

0x0523,	// (0x000163fc) fep_vkb_bottom_pane_g2_ParamLimits

0x0523,	// (0x000163fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb51,	// (0x00025a2a) fep_vkb_bottom_pane_g_ParamLimits

0xfb51,	// (0x00025a2a) fep_vkb_bottom_pane_g

0x016c,	// (0x00016045) cell_vkb_side_pane_g2

0x0001,

0xfb5b,	// (0x00025a34) cell_vkb_side_pane_g

0x05ae,	// (0x00016487) cell_vkb_side_pane_t1

0x05bc,	// (0x00016495) cell_vkb_side_pane_t1_copy1

0x016c,	// (0x00016045) bg_fep_vkb_candidate_pane_g2

0x06ee,	// (0x000165c7) cell_vkb_candidate_pane_ParamLimits

0x0240,	// (0x00016119) aid_size_cell_vkb_ParamLimits

0x0240,	// (0x00016119) aid_size_cell_vkb

0x06ee,	// (0x000165c7) cell_vkb_candidate_pane

0x6cd2,	// (0x0001cbab) bg_popup_fep_shadow_pane_g1

0x02ce,	// (0x000161a7) fep_vkb_bottom_pane_ParamLimits

0x02ce,	// (0x000161a7) fep_vkb_bottom_pane

0x030b,	// (0x000161e4) fep_vkb_candidate_pane_ParamLimits

0x030b,	// (0x000161e4) fep_vkb_candidate_pane

0x0327,	// (0x00016200) fep_vkb_keypad_pane_ParamLimits

0x0327,	// (0x00016200) fep_vkb_keypad_pane

0x036d,	// (0x00016246) fep_vkb_side_pane_ParamLimits

0x036d,	// (0x00016246) fep_vkb_side_pane

0x03a9,	// (0x00016282) fep_vkb_top_pane_ParamLimits

0x03a9,	// (0x00016282) fep_vkb_top_pane

0x03e5,	// (0x000162be) fep_vkb_top_pane_g1_ParamLimits

0x03e5,	// (0x000162be) fep_vkb_top_pane_g1

0x03f4,	// (0x000162cd) fep_vkb_top_pane_g2_ParamLimits

0x03f4,	// (0x000162cd) fep_vkb_top_pane_g2

0x0403,	// (0x000162dc) fep_vkb_top_pane_g3_ParamLimits

0x0403,	// (0x000162dc) fep_vkb_top_pane_g3

0x0003,

0xfb41,	// (0x00025a1a) fep_vkb_top_pane_g_ParamLimits

0xfb41,	// (0x00025a1a) fep_vkb_top_pane_g

0x0421,	// (0x000162fa) fep_vkb_top_text_pane_ParamLimits

0x0421,	// (0x000162fa) fep_vkb_top_text_pane

0xabbd,	// (0x00020a96) fep_vkb_side_pane_g1_ParamLimits

0xabbd,	// (0x00020a96) fep_vkb_side_pane_g1

0x047b,	// (0x00016354) grid_vkb_side_pane_ParamLimits

0x047b,	// (0x00016354) grid_vkb_side_pane

0x6cda,	// (0x0001cbb3) bg_popup_fep_shadow_pane_g2

0x6ce3,	// (0x0001cbbc) bg_popup_fep_shadow_pane_g3

0x6ceb,	// (0x0001cbc4) bg_popup_fep_shadow_pane_g4

0x6cf4,	// (0x0001cbcd) bg_popup_fep_shadow_pane_g5

0x6cfe,	// (0x0001cbd7) bg_popup_fep_shadow_pane_g6

0x6d06,	// (0x0001cbdf) bg_popup_fep_shadow_pane_g7

0xca1f,	// (0x000228f8) bg_popup_fep_shadow_pane_g8

0x04d2,	// (0x000163ab) grid_vkb_keypad_number_pane_ParamLimits

0x04d2,	// (0x000163ab) grid_vkb_keypad_number_pane

0x04e2,	// (0x000163bb) grid_vkb_keypad_pane_ParamLimits

0x04e2,	// (0x000163bb) grid_vkb_keypad_pane

0x0508,	// (0x000163e1) fep_vkb_bottom_pane_g1_ParamLimits

0x0508,	// (0x000163e1) fep_vkb_bottom_pane_g1

0x0531,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x0531,	// (0x0001640a) grid_vkb_keypad_bottom_left_pane

0x0546,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x0546,	// (0x0001641f) grid_vkb_keypad_bottom_right_pane

0x055b,	// (0x00016434) fep_vkb_top_text_pane_g1

0xac04,	// (0x00020add) fep_vkb_top_text_pane_t1

0xac16,	// (0x00020aef) cell_vkb_side_pane_ParamLimits

0xac16,	// (0x00020aef) cell_vkb_side_pane

0x016c,	// (0x00016045) cell_vkb_side_pane_g1

0x05ca,	// (0x000164a3) cell_vkb_keypad_pane_ParamLimits

0x05ca,	// (0x000164a3) cell_vkb_keypad_pane

0x0645,	// (0x0001651e) cell_vkb_keypad_pane_g1

0x0008,

0xfb6e,	// (0x00025a47) bg_popup_fep_shadow_pane_g

0x016c,	// (0x00016045) cell_hwr_side_pane_g1

0x016c,	// (0x00016045) cell_hwr_side_pane_g2

0x064f,	// (0x00016528) cell_vkb_keypad_pane_t1

0xac2c,	// (0x00020b05) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xac2c,	// (0x00020b05) cell_vkb_keypad_bottom_left_pane

0xac41,	// (0x00020b1a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xac41,	// (0x00020b1a) cell_vkb_keypad_bottom_right_pane

0x016c,	// (0x00016045) cell_vkb_keypad_bottom_left_pane_g1

0x016c,	// (0x00016045) cell_vkb_keypad_bottom_right_pane_g1

0x06b3,	// (0x0001658c) cell_vkb_keypad_number_pane_ParamLimits

0x06b3,	// (0x0001658c) cell_vkb_keypad_number_pane

0x06d2,	// (0x000165ab) cell_vkb_keypad_number_pane_g1

0x06dc,	// (0x000165b5) cell_vkb_keypad_number_pane_g2

0x06e5,	// (0x000165be) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb60,	// (0x00025a39) cell_vkb_keypad_number_pane_g

0x064f,	// (0x00016528) cell_vkb_keypad_number_pane_t1

0x070b,	// (0x000165e4) fep_vkb_candidate_pane_g1

0x0001,

0xfb5b,	// (0x00025a34) cell_hwr_side_pane_g

0x0724,	// (0x000165fd) cell_hwr_side_pane_t1

0x6d18,	// (0x0001cbf1) cell_hwr_side_pane_t1_copy1

0x0413,	// (0x000162ec) cell_hwr_candidate_pane_g1

0x6d26,	// (0x0001cbff) cell_hwr_candidate_pane_t1

0x016c,	// (0x00016045) cell_vkb_candidate_pane_g2

0x0768,	// (0x00016641) cell_vkb_candidate_pane_t1

0x0232,	// (0x0001610b) bg_popup_fep_shadow_pane_ParamLimits

0x0232,	// (0x0001610b) bg_popup_fep_shadow_pane

0x3610,	// (0x000194e9) bg_fep_hwr_top_pane_g4

0x0200,	// (0x000160d9) bg_hwr_side_pane_g1_ParamLimits

0x0200,	// (0x000160d9) bg_hwr_side_pane_g1

0xab76,	// (0x00020a4f) cell_hwr_side_pane_ParamLimits

0xab76,	// (0x00020a4f) cell_hwr_side_pane

0x6c39,	// (0x0001cb12) fep_hwr_write_pane_g1_ParamLimits

0x6c39,	// (0x0001cb12) fep_hwr_write_pane_g1

0x6c46,	// (0x0001cb1f) fep_hwr_write_pane_g2_ParamLimits

0x6c46,	// (0x0001cb1f) fep_hwr_write_pane_g2

0x6c53,	// (0x0001cb2c) fep_hwr_write_pane_g3_ParamLimits

0x6c53,	// (0x0001cb2c) fep_hwr_write_pane_g3

0xab96,	// (0x00020a6f) fep_hwr_write_pane_g4_ParamLimits

0xab96,	// (0x00020a6f) fep_hwr_write_pane_g4

0x0005,

0xfb2d,	// (0x00025a06) fep_hwr_write_pane_g_ParamLimits

0xfb2d,	// (0x00025a06) fep_hwr_write_pane_g

0x3610,	// (0x000194e9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3610,	// (0x000194e9) bg_fep_hwr_candidate_pane_g2

0x6c76,	// (0x0001cb4f) cell_hwr_candidate_pane_ParamLimits

0x6c76,	// (0x0001cb4f) cell_hwr_candidate_pane

0x6cb8,	// (0x0001cb91) fep_hwr_candidate_pane_g1_ParamLimits

0x026e,	// (0x00016147) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x026e,	// (0x00016147) bg_popup_fep_shadow_pane_cp2

0x0413,	// (0x000162ec) fep_vkb_top_pane_g4_ParamLimits

0x0413,	// (0x000162ec) fep_vkb_top_pane_g4

0x0459,	// (0x00016332) fep_vkb_side_pane_g2_ParamLimits

0x0459,	// (0x00016332) fep_vkb_side_pane_g2

0x8a6b,	// (0x0001e944) list_setting_pane_t4_ParamLimits

0x8a6b,	// (0x0001e944) list_setting_pane_t4

0x8b05,	// (0x0001e9de) list_setting_number_pane_t5_ParamLimits

0x8b05,	// (0x0001e9de) list_setting_number_pane_t5

0x94b2,	// (0x0001f38b) list_double_heading_pane_cp2_ParamLimits

0x94b2,	// (0x0001f38b) list_double_heading_pane_cp2

0xc9b2,	// (0x0002288b) list_double_heading_pane_g1_cp2_ParamLimits

0xc9b2,	// (0x0002288b) list_double_heading_pane_g1_cp2

0xc9be,	// (0x00022897) list_double_heading_pane_g2_cp2_ParamLimits

0xc9be,	// (0x00022897) list_double_heading_pane_g2_cp2

0x0776,	// (0x0001664f) list_double_heading_pane_t1_cp2_ParamLimits

0x0776,	// (0x0001664f) list_double_heading_pane_t1_cp2

0x078c,	// (0x00016665) list_double_heading_pane_t2_cp2_ParamLimits

0x078c,	// (0x00016665) list_double_heading_pane_t2_cp2

0xc2d9,	// (0x000221b2) aid_value_unit2

0x5eb6,	// (0x0001bd8f) popup_preview_fixed_window

0xc484,	// (0x0002235d) bg_popup_preview_window_pane_cp02

0x079e,	// (0x00016677) list_preview_fixed_pane

0x07e4,	// (0x000166bd) list_empty_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_empty_pane_fp

0x07e4,	// (0x000166bd) list_single_cale_day_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_single_cale_day_pane_fp

0x07e4,	// (0x000166bd) list_single_graphic_heading_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_single_graphic_heading_pane_fp

0x07e4,	// (0x000166bd) list_single_graphic_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_single_graphic_pane_fp

0x07e4,	// (0x000166bd) list_single_heading_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_single_heading_pane_fp

0x07e4,	// (0x000166bd) list_single_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_single_pane_fp

0x07fb,	// (0x000166d4) list_single_pane_fp_g1_ParamLimits

0x07fb,	// (0x000166d4) list_single_pane_fp_g1

0x4e82,	// (0x0001ad5b) list_single_pane_fp_g2_ParamLimits

0x4e82,	// (0x0001ad5b) list_single_pane_fp_g2

0x5856,	// (0x0001b72f) list_single_pane_fp_g3_ParamLimits

0x5856,	// (0x0001b72f) list_single_pane_fp_g3

0x0807,	// (0x000166e0) list_single_pane_fp_g4_ParamLimits

0x0807,	// (0x000166e0) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00025a68) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00025a68) list_single_pane_fp_g

0x586a,	// (0x0001b743) list_single_pane_fp_t1_ParamLimits

0x586a,	// (0x0001b743) list_single_pane_fp_t1

0x5881,	// (0x0001b75a) list_single_graphic_pane_fp_g1_ParamLimits

0x5881,	// (0x0001b75a) list_single_graphic_pane_fp_g1

0x07fb,	// (0x000166d4) list_single_graphic_pane_fp_g2_ParamLimits

0x07fb,	// (0x000166d4) list_single_graphic_pane_fp_g2

0x4e82,	// (0x0001ad5b) list_single_graphic_pane_fp_g3_ParamLimits

0x4e82,	// (0x0001ad5b) list_single_graphic_pane_fp_g3

0x5856,	// (0x0001b72f) list_single_graphic_pane_fp_g4_ParamLimits

0x5856,	// (0x0001b72f) list_single_graphic_pane_fp_g4

0x0807,	// (0x000166e0) list_single_graphic_pane_fp_g5_ParamLimits

0x0807,	// (0x000166e0) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00025a71) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00025a71) list_single_graphic_pane_fp_g

0x588d,	// (0x0001b766) list_single_graphic_pane_fp_t1_ParamLimits

0x588d,	// (0x0001b766) list_single_graphic_pane_fp_t1

0x5881,	// (0x0001b75a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5881,	// (0x0001b75a) list_single_graphic_heading_pane_fp_g1

0x07fb,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x07fb,	// (0x000166d4) list_single_graphic_heading_pane_fp_g2

0x4e82,	// (0x0001ad5b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e82,	// (0x0001ad5b) list_single_graphic_heading_pane_fp_g3

0x5856,	// (0x0001b72f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5856,	// (0x0001b72f) list_single_graphic_heading_pane_fp_g4

0x0807,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x0807,	// (0x000166e0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00025a71) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00025a71) list_single_graphic_heading_pane_fp_g

0x58a3,	// (0x0001b77c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x58a3,	// (0x0001b77c) list_single_graphic_heading_pane_fp_t1

0x58b9,	// (0x0001b792) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x58b9,	// (0x0001b792) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00025a7c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00025a7c) list_single_graphic_heading_pane_fp_t

0x58cb,	// (0x0001b7a4) list_single_cale_day_pane_fp_g1_ParamLimits

0x58cb,	// (0x0001b7a4) list_single_cale_day_pane_fp_g1

0x08ac,	// (0x00016785) list_single_cale_day_pane_fp_g2_ParamLimits

0x08ac,	// (0x00016785) list_single_cale_day_pane_fp_g2

0x5903,	// (0x0001b7dc) list_single_cale_day_pane_fp_g3_ParamLimits

0x5903,	// (0x0001b7dc) list_single_cale_day_pane_fp_g3

0x592b,	// (0x0001b804) list_single_cale_day_pane_fp_g4_ParamLimits

0x592b,	// (0x0001b804) list_single_cale_day_pane_fp_g4

0x594f,	// (0x0001b828) list_single_cale_day_pane_fp_g5_ParamLimits

0x594f,	// (0x0001b828) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00025a81) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00025a81) list_single_cale_day_pane_fp_g

0x5973,	// (0x0001b84c) list_single_cale_day_pane_fp_t1_ParamLimits

0x5973,	// (0x0001b84c) list_single_cale_day_pane_fp_t1

0x5999,	// (0x0001b872) list_single_cale_day_pane_fp_t2_ParamLimits

0x5999,	// (0x0001b872) list_single_cale_day_pane_fp_t2

0x59b2,	// (0x0001b88b) list_single_cale_day_pane_fp_t3_ParamLimits

0x59b2,	// (0x0001b88b) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00025a8c) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00025a8c) list_single_cale_day_pane_fp_t

0x07fb,	// (0x000166d4) list_empty_pane_fp_g1_ParamLimits

0x07fb,	// (0x000166d4) list_empty_pane_fp_g1

0x59cb,	// (0x0001b8a4) list_empty_pane_fp_t1

0x59d9,	// (0x0001b8b2) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00025a93) list_empty_pane_fp_t

0x07fb,	// (0x000166d4) list_single_heading_pane_fp_g1_ParamLimits

0x07fb,	// (0x000166d4) list_single_heading_pane_fp_g1

0x4e82,	// (0x0001ad5b) list_single_heading_pane_fp_g2_ParamLimits

0x4e82,	// (0x0001ad5b) list_single_heading_pane_fp_g2

0x5856,	// (0x0001b72f) list_single_heading_pane_fp_g3_ParamLimits

0x5856,	// (0x0001b72f) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00025a98) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00025a98) list_single_heading_pane_fp_g

0x59e7,	// (0x0001b8c0) list_single_heading_pane_fp_t1_ParamLimits

0x59e7,	// (0x0001b8c0) list_single_heading_pane_fp_t1

0x59f9,	// (0x0001b8d2) list_single_heading_pane_fp_t2_ParamLimits

0x59f9,	// (0x0001b8d2) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00025a9f) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00025a9f) list_single_heading_pane_fp_t

0xcafb,	// (0x000229d4) aid_size_cell_fast

0xc467,	// (0x00022340) soft_indicator_pane_cp1_t1

0xcb38,	// (0x00022a11) cell_app_pane_cp2_ParamLimits

0xcb38,	// (0x00022a11) cell_app_pane_cp2

0x6b08,	// (0x0001c9e1) fep_hwr_candidate_drop_down_list_pane

0x36a5,	// (0x0001957e) fep_hwr_candidate_pane_g3_ParamLimits

0x36a5,	// (0x0001957e) fep_hwr_candidate_pane_g3

0x36b2,	// (0x0001958b) fep_hwr_candidate_pane_g4_ParamLimits

0x36b2,	// (0x0001958b) fep_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x00025a13) fep_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x00025a13) fep_hwr_candidate_pane_g

0x02fa,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x02fa,	// (0x000161d3) fep_vkb_candidate_drop_down_list_pane

0x0713,	// (0x000165ec) fep_vkb_candidate_pane_g3

0x071b,	// (0x000165f4) fep_vkb_candidate_pane_g4

0x0002,

0xfb67,	// (0x00025a40) fep_vkb_candidate_pane_g

0x0413,	// (0x000162ec) cell_hwr_candidate_pane_g1_ParamLimits

0x0a1a,	// (0x000168f3) cell_hwr_candidate_pane_g3_ParamLimits

0x0a1a,	// (0x000168f3) cell_hwr_candidate_pane_g3

0x0a3b,	// (0x00016914) cell_hwr_candidate_pane_g4_ParamLimits

0x0a3b,	// (0x00016914) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00025a5a) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00025a5a) cell_hwr_candidate_pane_g

0x0732,	// (0x0001660b) cell_vkb_candidate_pane_g3_ParamLimits

0x0732,	// (0x0001660b) cell_vkb_candidate_pane_g3

0x074d,	// (0x00016626) cell_vkb_candidate_pane_g4_ParamLimits

0x074d,	// (0x00016626) cell_vkb_candidate_pane_g4

0x09c4,	// (0x0001689d) cell_app_pane_cp2_g1_ParamLimits

0x09c4,	// (0x0001689d) cell_app_pane_cp2_g1

0x09e2,	// (0x000168bb) cell_app_pane_cp2_g2_ParamLimits

0x09e2,	// (0x000168bb) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00025aa4) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00025aa4) cell_app_pane_cp2_g

0x09ee,	// (0x000168c7) cell_app_pane_cp2_t1_ParamLimits

0x09ee,	// (0x000168c7) cell_app_pane_cp2_t1

0xc998,	// (0x00022871) grid_highlight_pane_cp1_ParamLimits

0xc998,	// (0x00022871) grid_highlight_pane_cp1

0x6d44,	// (0x0001cc1d) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d44,	// (0x0001cc1d) cell_hwr_candidate_pane_cp1

0x0413,	// (0x000162ec) fep_hwr_candidate_drop_down_list_pane_g1

0x0a00,	// (0x000168d9) fep_hwr_candidate_drop_down_list_pane_g2

0x0a0d,	// (0x000168e6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00025aa9) fep_hwr_candidate_drop_down_list_pane_g

0x6d63,	// (0x0001cc3c) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d6c,	// (0x0001cc45) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d6c,	// (0x0001cc45) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d79,	// (0x0001cc52) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d79,	// (0x0001cc52) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d86,	// (0x0001cc5f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d86,	// (0x0001cc5f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0732,	// (0x0001660b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0732,	// (0x0001660b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x074d,	// (0x00016626) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x074d,	// (0x00016626) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d93,	// (0x0001cc6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d93,	// (0x0001cc6c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6dae,	// (0x0001cc87) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dae,	// (0x0001cc87) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0af0,	// (0x000169c9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0af0,	// (0x000169c9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00025ab0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00025ab0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0a5c,	// (0x00016935) cell_vkb_candidate_pane_cp1_ParamLimits

0x0a5c,	// (0x00016935) cell_vkb_candidate_pane_cp1

0x0413,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x0413,	// (0x000162ec) fep_vkb_candidate_drop_down_list_pane_g1

0x0a00,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x0a00,	// (0x000168d9) fep_vkb_candidate_drop_down_list_pane_g2

0x0a0d,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x0a0d,	// (0x000168e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00025aa9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x00025aa9) fep_vkb_candidate_drop_down_list_pane_g

0x0a7c,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x0a7c,	// (0x00016955) fep_vkb_candidate_drop_down_list_scroll_pane

0x0a89,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0a89,	// (0x00016962) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x0a96,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0a96,	// (0x0001696f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x0aa2,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0aa2,	// (0x0001697b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x0a1a,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0a1a,	// (0x000168f3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x0a3b,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0a3b,	// (0x00016914) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x0aae,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0aae,	// (0x00016987) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x0acf,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0acf,	// (0x000169a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x0af0,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0af0,	// (0x000169c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x00025ac1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x00025ac1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9005,	// (0x0001eede) title_pane_g1_ParamLimits

0x9016,	// (0x0001eeef) title_pane_g2_ParamLimits

0xf592,	// (0x0002546b) title_pane_g_ParamLimits

0xcebb,	// (0x00022d94) aid_call2_pane

0xcec3,	// (0x00022d9c) aid_call_pane

0xcecb,	// (0x00022da4) popup_clock_analogue_window_g1

0xcecb,	// (0x00022da4) popup_clock_analogue_window_g2

0x6215,	// (0x0001c0ee) popup_clock_analogue_window_g3

0x621e,	// (0x0001c0f7) popup_clock_analogue_window_g4

0xc2eb,	// (0x000221c4) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x00025615) popup_clock_analogue_window_g

0x6226,	// (0x0001c0ff) popup_clock_analogue_window_t1

0x6234,	// (0x0001c10d) clock_digital_number_pane_ParamLimits

0x6234,	// (0x0001c10d) clock_digital_number_pane

0x6240,	// (0x0001c119) clock_digital_number_pane_cp02_ParamLimits

0x6240,	// (0x0001c119) clock_digital_number_pane_cp02

0x624c,	// (0x0001c125) clock_digital_number_pane_cp03_ParamLimits

0x624c,	// (0x0001c125) clock_digital_number_pane_cp03

0x6258,	// (0x0001c131) clock_digital_number_pane_cp04_ParamLimits

0x6258,	// (0x0001c131) clock_digital_number_pane_cp04

0x6264,	// (0x0001c13d) clock_digital_separator_pane_ParamLimits

0x6264,	// (0x0001c13d) clock_digital_separator_pane

0x6270,	// (0x0001c149) popup_clock_digital_window_t1_ParamLimits

0x6270,	// (0x0001c149) popup_clock_digital_window_t1

0xc2eb,	// (0x000221c4) clock_digital_number_pane_g1

0xc2eb,	// (0x000221c4) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x00025620) clock_digital_number_pane_g

0xc2eb,	// (0x000221c4) clock_digital_separator_pane_g1

0xc2eb,	// (0x000221c4) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x00025620) clock_digital_separator_pane_g

0x9e3a,	// (0x0001fd13) aid_fill_nsta_ParamLimits

0x9f69,	// (0x0001fe42) indicator_nsta_pane_ParamLimits

0xd815,	// (0x000236ee) popup_clock_analogue_window

0xd815,	// (0x000236ee) popup_clock_digital_window

0xd63c,	// (0x00023515) grid_indicator_nsta_pane_ParamLimits

0xf333,	// (0x0002520c) clock_nsta_pane_t2

0x0001,

0xfac7,	// (0x000259a0) clock_nsta_pane_t

0x61d9,	// (0x0001c0b2) aid_size_max_handle

0x94a9,	// (0x0001f382) aid_size_min_handle

0xd3da,	// (0x000232b3) editor_scroll_pane

0x0b0b,	// (0x000169e4) ex_editor_pane

0xcab7,	// (0x00022990) scroll_pane_cp13

0xc937,	// (0x00022810) scroll_pane_cp14

0xcef5,	// (0x00022dce) scroll_pane_cp36

0x94c3,	// (0x0001f39c) list_single_graphic_hl_pane_cp2_ParamLimits

0x94c3,	// (0x0001f39c) list_single_graphic_hl_pane_cp2

0xa82c,	// (0x00020705) list_single_graphic_hl_pane_ParamLimits

0xa82c,	// (0x00020705) list_single_graphic_hl_pane

0x5a0f,	// (0x0001b8e8) aid_size_min_hl_cp1

0x0b1c,	// (0x000169f5) list_highlight_pane_cp34_ParamLimits

0x0b1c,	// (0x000169f5) list_highlight_pane_cp34

0x0b2d,	// (0x00016a06) list_single_graphic_hl_pane_g1_ParamLimits

0x0b2d,	// (0x00016a06) list_single_graphic_hl_pane_g1

0x8d38,	// (0x0001ec11) list_single_graphic_hl_pane_g2_ParamLimits

0x8d38,	// (0x0001ec11) list_single_graphic_hl_pane_g2

0x8d38,	// (0x0001ec11) list_single_graphic_hl_pane_g3_ParamLimits

0x8d38,	// (0x0001ec11) list_single_graphic_hl_pane_g3

0x5a24,	// (0x0001b8fd) list_single_graphic_hl_pane_g4_ParamLimits

0x5a24,	// (0x0001b8fd) list_single_graphic_hl_pane_g4

0x5a30,	// (0x0001b909) list_single_graphic_hl_pane_g5_ParamLimits

0x5a30,	// (0x0001b909) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x00025ad2) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x00025ad2) list_single_graphic_hl_pane_g

0x5a44,	// (0x0001b91d) list_single_graphic_hl_pane_t1_ParamLimits

0x5a44,	// (0x0001b91d) list_single_graphic_hl_pane_t1

0x0b5a,	// (0x00016a33) aid_size_min_hl_cp2

0x0b63,	// (0x00016a3c) list_highlight_pane_cp34_cp2_ParamLimits

0x0b63,	// (0x00016a3c) list_highlight_pane_cp34_cp2

0x0b2d,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x0b2d,	// (0x00016a06) list_single_graphic_hl_pane_g1_cp2

0x0b70,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x0b70,	// (0x00016a49) list_single_graphic_hl_pane_g2_cp2

0x0b7c,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x0b7c,	// (0x00016a55) list_single_graphic_hl_pane_g3_cp2

0xd311,	// (0x000231ea) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd311,	// (0x000231ea) list_single_graphic_hl_pane_g4_cp2

0x0b46,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x0b46,	// (0x00016a1f) list_single_graphic_hl_pane_g5_cp2

0x965e,	// (0x0001f537) control_pane_g4_ParamLimits

0x965e,	// (0x0001f537) control_pane_g4

0xcaef,	// (0x000229c8) bg_popup_sub_pane_cp10_ParamLimits

0x0176,	// (0x0001604f) list_choice_list_pane_ParamLimits

0x0185,	// (0x0001605e) scroll_pane_cp23

0xc484,	// (0x0002235d) bg_popup_preview_window_pane_cp02_ParamLimits

0x079e,	// (0x00016677) list_preview_fixed_pane_ParamLimits

0x07b4,	// (0x0001668d) list_preview_fixed_pane_cp_ParamLimits

0x07b4,	// (0x0001668d) list_preview_fixed_pane_cp

0x07c0,	// (0x00016699) popup_preview_fixed_window_g1_ParamLimits

0x07c0,	// (0x00016699) popup_preview_fixed_window_g1

0x07cc,	// (0x000166a5) popup_preview_fixed_window_g2_ParamLimits

0x07cc,	// (0x000166a5) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00025a61) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00025a61) popup_preview_fixed_window_g

0x614d,	// (0x0001c026) aid_navi_side_left_pane_ParamLimits

0x6162,	// (0x0001c03b) aid_navi_side_right_pane_ParamLimits

0x617a,	// (0x0001c053) navi_icon_pane_stacon_ParamLimits

0x618e,	// (0x0001c067) navi_navi_pane_stacon_ParamLimits

0x617a,	// (0x0001c053) navi_text_pane_stacon_ParamLimits

0xc2e1,	// (0x000221ba) main_text_info_pane

0x0ba0,	// (0x00016a79) listscroll_text_info_pane

0x0ba8,	// (0x00016a81) list_text_info_pane_ParamLimits

0x0ba8,	// (0x00016a81) list_text_info_pane

0x0bb7,	// (0x00016a90) scroll_pane_cp24_ParamLimits

0x0bb7,	// (0x00016a90) scroll_pane_cp24

0xac5c,	// (0x00020b35) list_text_info_pane_t1_ParamLimits

0xac5c,	// (0x00020b35) list_text_info_pane_t1

0x97ca,	// (0x0001f6a3) popup_fast_swap2_window_ParamLimits

0x97ca,	// (0x0001f6a3) popup_fast_swap2_window

0x0c0e,	// (0x00016ae7) aid_size_cell_fast2

0xc2e1,	// (0x000221ba) bg_popup_window_pane_cp17

0xdcb9,	// (0x00023b92) heading_pane_cp2

0xc66a,	// (0x00022543) listscroll_fast2_pane

0x0c18,	// (0x00016af1) grid_fast2_pane

0x0c22,	// (0x00016afb) listscroll_fast2_pane_g1

0x0c2a,	// (0x00016b03) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x00025add) listscroll_fast2_pane_g

0xcab7,	// (0x00022990) scroll_pane_cp26

0x0c34,	// (0x00016b0d) cell_fast2_pane_ParamLimits

0x0c34,	// (0x00016b0d) cell_fast2_pane

0x0c49,	// (0x00016b22) cell_fast2_pane_g1

0x0c52,	// (0x00016b2b) cell_fast2_pane_g2

0x0c5b,	// (0x00016b34) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x00025ae2) cell_fast2_pane_g

0xc6fe,	// (0x000225d7) grid_highlight_pane_cp9

0xc713,	// (0x000225ec) main_eswt_pane_ParamLimits

0xc713,	// (0x000225ec) main_eswt_pane

0x0bcc,	// (0x00016aa5) list_single_text_info_pane

0x0c63,	// (0x00016b3c) eswt_ctrl_button_pane

0x0c63,	// (0x00016b3c) eswt_ctrl_canvas_pane

0x0c6b,	// (0x00016b44) eswt_ctrl_combo_pane

0x0c63,	// (0x00016b3c) eswt_ctrl_default_pane

0x0c63,	// (0x00016b3c) eswt_ctrl_label_pane

0x0c73,	// (0x00016b4c) eswt_ctrl_wait_pane

0x0c7b,	// (0x00016b54) eswt_shell_pane

0xc2e1,	// (0x000221ba) listscroll_eswt_app_pane

0x0c9b,	// (0x00016b74) popup_eswt_tasktip_window_ParamLimits

0x0c9b,	// (0x00016b74) popup_eswt_tasktip_window

0xda12,	// (0x000238eb) bg_popup_window_pane_cp18

0x0cac,	// (0x00016b85) eswt_control_pane_g1_ParamLimits

0x0cac,	// (0x00016b85) eswt_control_pane_g1

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_ParamLimits

0x0cb9,	// (0x00016b92) eswt_control_pane_g2

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_ParamLimits

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_ParamLimits

0x0cd3,	// (0x00016bac) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x00025ae9) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x00025ae9) eswt_control_pane_g

0xc998,	// (0x00022871) bg_button_pane_ParamLimits

0xc998,	// (0x00022871) bg_button_pane

0xc713,	// (0x000225ec) common_borders_pane_copy2_ParamLimits

0xc713,	// (0x000225ec) common_borders_pane_copy2

0x0ce0,	// (0x00016bb9) control_button_pane_g1_ParamLimits

0x0ce0,	// (0x00016bb9) control_button_pane_g1

0x0cec,	// (0x00016bc5) control_button_pane_g2_ParamLimits

0x0cec,	// (0x00016bc5) control_button_pane_g2

0x0cf8,	// (0x00016bd1) control_button_pane_g3_ParamLimits

0x0cf8,	// (0x00016bd1) control_button_pane_g3

0x0002,

0xfc19,	// (0x00025af2) control_button_pane_g_ParamLimits

0xfc19,	// (0x00025af2) control_button_pane_g

0x0d0c,	// (0x00016be5) control_button_pane_t1

0x0d1a,	// (0x00016bf3) control_button_pane_t2

0x0001,

0xfc20,	// (0x00025af9) control_button_pane_t

0xd922,	// (0x000237fb) bg_button_pane_g1

0xd92a,	// (0x00023803) bg_button_pane_g2

0xd932,	// (0x0002380b) bg_button_pane_g3

0xd93a,	// (0x00023813) bg_button_pane_g4

0xd942,	// (0x0002381b) bg_button_pane_g5

0xd94a,	// (0x00023823) bg_button_pane_g6

0xd952,	// (0x0002382b) bg_button_pane_g7

0xd95a,	// (0x00023833) bg_button_pane_g8

0xd962,	// (0x0002383b) bg_button_pane_g9

0x0008,

0xf893,	// (0x0002576c) bg_button_pane_g

0x0131,	// (0x0001600a) common_borders_pane_ParamLimits

0x0131,	// (0x0001600a) common_borders_pane

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy1_ParamLimits

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy1

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy1_ParamLimits

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy1

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy1_ParamLimits

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy1

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy1_ParamLimits

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy1

0x016c,	// (0x00016045) bg_eswt_ctrl_canvas_pane_g1

0x0131,	// (0x0001600a) common_borders_pane_cp2_ParamLimits

0x0131,	// (0x0001600a) common_borders_pane_cp2

0x0131,	// (0x0001600a) common_borders_pane_cp3_ParamLimits

0x0131,	// (0x0001600a) common_borders_pane_cp3

0x0d28,	// (0x00016c01) separator_horizontal_pane

0x0d30,	// (0x00016c09) separator_vertical_pane

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy2_ParamLimits

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy2

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy2_ParamLimits

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy2

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy2_ParamLimits

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy2

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy2_ParamLimits

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy2

0xc2e1,	// (0x000221ba) common_borders_pane_cp4

0x0d39,	// (0x00016c12) separator_horizontal_pane_g1

0x0d42,	// (0x00016c1b) separator_horizontal_pane_g2

0x0d4b,	// (0x00016c24) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x00025afe) separator_horizontal_pane_g

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy3_ParamLimits

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy3

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy3_ParamLimits

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy3

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy3_ParamLimits

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy3

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy3_ParamLimits

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy3

0xc2e1,	// (0x000221ba) common_borders_pane_cp5

0x0d54,	// (0x00016c2d) separator_vertical_pane_g1

0x0d5d,	// (0x00016c36) separator_vertical_pane_g2

0x0d66,	// (0x00016c3f) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x00025b05) separator_vertical_pane_g

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy4_ParamLimits

0x0cac,	// (0x00016b85) eswt_control_pane_g1_copy4

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy4_ParamLimits

0x0cb9,	// (0x00016b92) eswt_control_pane_g2_copy4

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy4_ParamLimits

0x0cc6,	// (0x00016b9f) eswt_control_pane_g3_copy4

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy4_ParamLimits

0x0cd3,	// (0x00016bac) eswt_control_pane_g4_copy4

0xac7a,	// (0x00020b53) eswt_ctrl_combo_button_pane

0xac82,	// (0x00020b5b) eswt_ctrl_input_pane

0xac8a,	// (0x00020b63) popup_choice_list_window_cp70

0xac92,	// (0x00020b6b) eswt_ctrl_input_pane_t1

0xc2e1,	// (0x000221ba) input_focus_pane_cp70

0x0131,	// (0x0001600a) bg_button_pane_cp70_ParamLimits

0x0131,	// (0x0001600a) bg_button_pane_cp70

0xaca0,	// (0x00020b79) eswt_ctrl_combo_button_pane_g1

0x0d9d,	// (0x00016c76) wait_bar_pane_cp70

0xda12,	// (0x000238eb) bg_popup_window_pane_cp70_ParamLimits

0xda12,	// (0x000238eb) bg_popup_window_pane_cp70

0x0da5,	// (0x00016c7e) popup_eswt_tasktip_window_t1

0x0dbb,	// (0x00016c94) wait_bar_pane_cp71_ParamLimits

0x0dbb,	// (0x00016c94) wait_bar_pane_cp71

0x0dc7,	// (0x00016ca0) grid_eswt_app_pane

0xcd0a,	// (0x00022be3) scroll_pane_cp70

0xaca8,	// (0x00020b81) cell_eswt_app_pane_ParamLimits

0xaca8,	// (0x00020b81) cell_eswt_app_pane

0xacd2,	// (0x00020bab) cell_eswt_app_pane_g1_ParamLimits

0xacd2,	// (0x00020bab) cell_eswt_app_pane_g1

0xad01,	// (0x00020bda) cell_eswt_app_pane_g2_ParamLimits

0xad01,	// (0x00020bda) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x00025b0c) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x00025b0c) cell_eswt_app_pane_g

0xad2a,	// (0x00020c03) cell_eswt_app_pane_t1_ParamLimits

0xad2a,	// (0x00020c03) cell_eswt_app_pane_t1

0x0e8e,	// (0x00016d67) grid_highlight_pane_cp70_ParamLimits

0x0e8e,	// (0x00016d67) grid_highlight_pane_cp70

0xd2ad,	// (0x00023186) set_content_pane_g1

0xd5b1,	// (0x0002348a) status_small_volume_pane

0x6dc9,	// (0x0001cca2) status_small_volume_pane_g1

0x6dd1,	// (0x0001ccaa) volume_small2_pane

0x6dda,	// (0x0001ccb3) volume_small2_pane_g1

0x6de3,	// (0x0001ccbc) volume_small2_pane_g2

0x6dec,	// (0x0001ccc5) volume_small2_pane_g3

0x6df5,	// (0x0001ccce) volume_small2_pane_g4

0x6dfe,	// (0x0001ccd7) volume_small2_pane_g5

0x6e07,	// (0x0001cce0) volume_small2_pane_g6

0x6e10,	// (0x0001cce9) volume_small2_pane_g7

0x6e19,	// (0x0001ccf2) volume_small2_pane_g8

0x6e22,	// (0x0001ccfb) volume_small2_pane_g9

0x6e2b,	// (0x0001cd04) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x00025b11) volume_small2_pane_g

0x055b,	// (0x00016434) fep_vkb_top_text_pane_g1_ParamLimits

0xac04,	// (0x00020add) fep_vkb_top_text_pane_t1_ParamLimits

0x07d8,	// (0x000166b1) popup_preview_fixed_window_g3_ParamLimits

0x07d8,	// (0x000166b1) popup_preview_fixed_window_g3

0x9dcd,	// (0x0001fca6) popup_toolbar_trans_pane

0xa6a4,	// (0x0002057d) aid_height_set_list_ParamLimits

0xe8cf,	// (0x000247a8) aid_size_parent_ParamLimits

0xcaef,	// (0x000229c8) list_highlight_pane_cp2_ParamLimits

0xd2ad,	// (0x00023186) set_content_pane_g1_ParamLimits

0xa83f,	// (0x00020718) list_single_image_pane_ParamLimits

0xa83f,	// (0x00020718) list_single_image_pane

0xad5c,	// (0x00020c35) aid_size_cell_image_ParamLimits

0xad5c,	// (0x00020c35) aid_size_cell_image

0xad69,	// (0x00020c42) grid_single_image_pane_ParamLimits

0xad69,	// (0x00020c42) grid_single_image_pane

0xc9b2,	// (0x0002288b) list_single_image_pane_g1_ParamLimits

0xc9b2,	// (0x0002288b) list_single_image_pane_g1

0xc9be,	// (0x00022897) list_single_image_pane_g2_ParamLimits

0xc9be,	// (0x00022897) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x00025b26) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x00025b26) list_single_image_pane_g

0x0eb3,	// (0x00016d8c) list_single_image_pane_t1_ParamLimits

0x0eb3,	// (0x00016d8c) list_single_image_pane_t1

0xad75,	// (0x00020c4e) cell_image_list_pane_ParamLimits

0xad75,	// (0x00020c4e) cell_image_list_pane

0xad89,	// (0x00020c62) cell_image_list_pane_g1

0xad92,	// (0x00020c6b) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x00025b2b) cell_image_list_pane_g

0x0eef,	// (0x00016dc8) aid_size_cell_tb_trans_pane

0xc998,	// (0x00022871) bg_tb_trans_pane

0x0f01,	// (0x00016dda) grid_tb_trans_pane

0xd922,	// (0x000237fb) bg_tb_trans_pane_g1

0xd92a,	// (0x00023803) bg_tb_trans_pane_g2

0xd932,	// (0x0002380b) bg_tb_trans_pane_g3

0xd93a,	// (0x00023813) bg_tb_trans_pane_g4

0xd942,	// (0x0002381b) bg_tb_trans_pane_g5

0xd95a,	// (0x00023833) bg_tb_trans_pane_g6

0xd962,	// (0x0002383b) bg_tb_trans_pane_g7

0xd94a,	// (0x00023823) bg_tb_trans_pane_g8

0xd952,	// (0x0002382b) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x00025b30) bg_tb_trans_pane_g

0x0f15,	// (0x00016dee) cell_toolbar_trans_pane_ParamLimits

0x0f15,	// (0x00016dee) cell_toolbar_trans_pane

0x016c,	// (0x00016045) cell_toolbar_trans_pane_g1

0xaa60,	// (0x00020939) list_form2_midp_pane_t1

0xaa6e,	// (0x00020947) list_form2_midp_pane_t2

0x0001,

0xfb00,	// (0x000259d9) list_form2_midp_pane_t

0xf3c6,	// (0x0002529f) scroll_pane_cp51_ParamLimits

0xf53c,	// (0x00025415) form2_midp_wait_pane_g1

0xf545,	// (0x0002541e) form2_midp_wait_pane_g2

0xf54e,	// (0x00025427) form2_midp_wait_pane_g3

0x0002,

0xfb15,	// (0x000259ee) form2_midp_wait_pane_g

0xc351,	// (0x0002222a) list_highlight_pane_cp21_ParamLimits

0xf56e,	// (0x00025447) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf57d,	// (0x00025456) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5536,	// (0x0001b40f) list_single_2graphic_im_pane_ParamLimits

0x5536,	// (0x0001b40f) list_single_2graphic_im_pane

0xad9b,	// (0x00020c74) list_single_2graphic_im_pane_g1_ParamLimits

0xad9b,	// (0x00020c74) list_single_2graphic_im_pane_g1

0xadac,	// (0x00020c85) list_single_2graphic_im_pane_g2_ParamLimits

0xadac,	// (0x00020c85) list_single_2graphic_im_pane_g2

0xadb8,	// (0x00020c91) list_single_2graphic_im_pane_g3_ParamLimits

0xadb8,	// (0x00020c91) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x00025b43) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x00025b43) list_single_2graphic_im_pane_g

0xadcc,	// (0x00020ca5) list_single_2graphic_im_pane_t1_ParamLimits

0xadcc,	// (0x00020ca5) list_single_2graphic_im_pane_t1

0x07e4,	// (0x000166bd) list_single_graphic_2heading_pane_fp_ParamLimits

0x07e4,	// (0x000166bd) list_single_graphic_2heading_pane_fp

0x5881,	// (0x0001b75a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5881,	// (0x0001b75a) list_single_graphic_2heading_pane_fp_g1

0x07fb,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x07fb,	// (0x000166d4) list_single_graphic_2heading_pane_fp_g2

0x4e82,	// (0x0001ad5b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e82,	// (0x0001ad5b) list_single_graphic_2heading_pane_fp_g3

0x5856,	// (0x0001b72f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5856,	// (0x0001b72f) list_single_graphic_2heading_pane_fp_g4

0x0807,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x0807,	// (0x000166e0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00025a71) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00025a71) list_single_graphic_2heading_pane_fp_g

0x5a5a,	// (0x0001b933) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5a5a,	// (0x0001b933) list_single_graphic_2heading_pane_fp_t1

0x58b9,	// (0x0001b792) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x58b9,	// (0x0001b792) list_single_graphic_2heading_pane_fp_t2

0x5a70,	// (0x0001b949) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5a70,	// (0x0001b949) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x00025b4c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x00025b4c) list_single_graphic_2heading_pane_fp_t

0x020c,	// (0x000160e5) fep_hwr_write_pane_g5_ParamLimits

0x020c,	// (0x000160e5) fep_hwr_write_pane_g5

0x0218,	// (0x000160f1) fep_hwr_write_pane_g6_ParamLimits

0x0218,	// (0x000160f1) fep_hwr_write_pane_g6

0x0c7b,	// (0x00016b54) eswt_shell_pane_ParamLimits

0xda12,	// (0x000238eb) bg_popup_window_pane_cp18_ParamLimits

0xe9d9,	// (0x000248b2) heading_pane_cp70

0x0da5,	// (0x00016c7e) popup_eswt_tasktip_window_t1_ParamLimits

0x9e8e,	// (0x0001fd67) aid_touch_tab_arrow_left

0x9ea4,	// (0x0001fd7d) aid_touch_tab_arrow_right

0x902e,	// (0x0001ef07) title_pane_g3_ParamLimits

0x902e,	// (0x0001ef07) title_pane_g3

0xc957,	// (0x00022830) set_value_pane_g1

0x9dcd,	// (0x0001fca6) popup_toolbar_trans_pane_ParamLimits

0x0eef,	// (0x00016dc8) aid_size_cell_tb_trans_pane_ParamLimits

0xc998,	// (0x00022871) bg_tb_trans_pane_ParamLimits

0x0f01,	// (0x00016dda) grid_tb_trans_pane_ParamLimits

0xc484,	// (0x0002235d) cont_note_pane_ParamLimits

0xc484,	// (0x0002235d) cont_note_pane

0xc713,	// (0x000225ec) cont_snote2_single_text_pane_ParamLimits

0xc713,	// (0x000225ec) cont_snote2_single_text_pane

0xc713,	// (0x000225ec) cont_snote2_single_graphic_pane_ParamLimits

0xc713,	// (0x000225ec) cont_snote2_single_graphic_pane

0xde9e,	// (0x00023d77) cont_note_wait_pane_ParamLimits

0xde9e,	// (0x00023d77) cont_note_wait_pane

0xde9e,	// (0x00023d77) cont_note_image_pane_ParamLimits

0xde9e,	// (0x00023d77) cont_note_image_pane

0x0fd5,	// (0x00016eae) popup_note2_window_g1_ParamLimits

0x0fd5,	// (0x00016eae) popup_note2_window_g1

0x1006,	// (0x00016edf) popup_note2_window_t1_ParamLimits

0x1006,	// (0x00016edf) popup_note2_window_t1

0x104b,	// (0x00016f24) popup_note2_window_t2_ParamLimits

0x104b,	// (0x00016f24) popup_note2_window_t2

0x1090,	// (0x00016f69) popup_note2_window_t3_ParamLimits

0x1090,	// (0x00016f69) popup_note2_window_t3

0x10d5,	// (0x00016fae) popup_note2_window_t4_ParamLimits

0x10d5,	// (0x00016fae) popup_note2_window_t4

0xc4fc,	// (0x000223d5) popup_note2_window_t5_ParamLimits

0xc4fc,	// (0x000223d5) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x00025b58) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x00025b58) popup_note2_window_t

0x1104,	// (0x00016fdd) popup_note2_image_window_g1_ParamLimits

0x1104,	// (0x00016fdd) popup_note2_image_window_g1

0x1110,	// (0x00016fe9) popup_note2_image_window_g2_ParamLimits

0x1110,	// (0x00016fe9) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x00025b63) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x00025b63) popup_note2_image_window_g

0x1122,	// (0x00016ffb) popup_note2_image_window_t1_ParamLimits

0x1122,	// (0x00016ffb) popup_note2_image_window_t1

0x113a,	// (0x00017013) popup_note2_image_window_t2_ParamLimits

0x113a,	// (0x00017013) popup_note2_image_window_t2

0x1152,	// (0x0001702b) popup_note2_image_window_t3_ParamLimits

0x1152,	// (0x0001702b) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x00025b68) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x00025b68) popup_note2_image_window_t

0xdeac,	// (0x00023d85) popup_note2_wait_window_g1_ParamLimits

0xdeac,	// (0x00023d85) popup_note2_wait_window_g1

0xdeb8,	// (0x00023d91) popup_note2_wait_window_g2_ParamLimits

0xdeb8,	// (0x00023d91) popup_note2_wait_window_g2

0xdec4,	// (0x00023d9d) popup_note2_wait_window_g3_ParamLimits

0xdec4,	// (0x00023d9d) popup_note2_wait_window_g3

0x0002,

0xf875,	// (0x0002574e) popup_note2_wait_window_g_ParamLimits

0xf875,	// (0x0002574e) popup_note2_wait_window_g

0x116e,	// (0x00017047) popup_note2_wait_window_t1_ParamLimits

0x116e,	// (0x00017047) popup_note2_wait_window_t1

0x118c,	// (0x00017065) popup_note2_wait_window_t2_ParamLimits

0x118c,	// (0x00017065) popup_note2_wait_window_t2

0x11aa,	// (0x00017083) popup_note2_wait_window_t3_ParamLimits

0x11aa,	// (0x00017083) popup_note2_wait_window_t3

0x11bc,	// (0x00017095) popup_note2_wait_window_t4_ParamLimits

0x11bc,	// (0x00017095) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00025b6f) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00025b6f) popup_note2_wait_window_t

0x11ce,	// (0x000170a7) wait_bar2_pane_ParamLimits

0x11ce,	// (0x000170a7) wait_bar2_pane

0x11e6,	// (0x000170bf) popup_snote2_single_text_window_g1_ParamLimits

0x11e6,	// (0x000170bf) popup_snote2_single_text_window_g1

0x120e,	// (0x000170e7) popup_snote2_single_text_window_t1_ParamLimits

0x120e,	// (0x000170e7) popup_snote2_single_text_window_t1

0x125a,	// (0x00017133) popup_snote2_single_text_window_t2_ParamLimits

0x125a,	// (0x00017133) popup_snote2_single_text_window_t2

0x12a6,	// (0x0001717f) popup_snote2_single_text_window_t3_ParamLimits

0x12a6,	// (0x0001717f) popup_snote2_single_text_window_t3

0x12e7,	// (0x000171c0) popup_snote2_single_text_window_t4_ParamLimits

0x12e7,	// (0x000171c0) popup_snote2_single_text_window_t4

0x131d,	// (0x000171f6) popup_snote2_single_text_window_t5_ParamLimits

0x131d,	// (0x000171f6) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00025b78) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00025b78) popup_snote2_single_text_window_t

0x1348,	// (0x00017221) popup_snote2_single_graphic_window_g1_ParamLimits

0x1348,	// (0x00017221) popup_snote2_single_graphic_window_g1

0x1370,	// (0x00017249) popup_snote2_single_graphic_window_g2_ParamLimits

0x1370,	// (0x00017249) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00025b83) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00025b83) popup_snote2_single_graphic_window_g

0x1398,	// (0x00017271) popup_snote2_single_graphic_window_t1_ParamLimits

0x1398,	// (0x00017271) popup_snote2_single_graphic_window_t1

0x13e4,	// (0x000172bd) popup_snote2_single_graphic_window_t2_ParamLimits

0x13e4,	// (0x000172bd) popup_snote2_single_graphic_window_t2

0x12a6,	// (0x0001717f) popup_snote2_single_graphic_window_t3_ParamLimits

0x12a6,	// (0x0001717f) popup_snote2_single_graphic_window_t3

0x12e7,	// (0x000171c0) popup_snote2_single_graphic_window_t4_ParamLimits

0x12e7,	// (0x000171c0) popup_snote2_single_graphic_window_t4

0x131d,	// (0x000171f6) popup_snote2_single_graphic_window_t5_ParamLimits

0x131d,	// (0x000171f6) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00025b88) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00025b88) popup_snote2_single_graphic_window_t

0xf376,	// (0x0002524f) clock_nsta_pane_cp2_t1

0xf376,	// (0x0002524f) clock_nsta_pane_cp2_t2

0x0001,

0xfad6,	// (0x000259af) clock_nsta_pane_cp2_t

0x51b5,	// (0x0001b08e) form_field_data_wide_pane_g1_ParamLimits

0xc9b2,	// (0x0002288b) form_field_data_wide_pane_g2_ParamLimits

0xc9b2,	// (0x0002288b) form_field_data_wide_pane_g2

0xc9be,	// (0x00022897) form_field_data_wide_pane_g3_ParamLimits

0xc9be,	// (0x00022897) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x00025598) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x00025598) form_field_data_wide_pane_g

0xa976,	// (0x0002084f) grid_touch_3_pane_ParamLimits

0xa976,	// (0x0002084f) grid_touch_3_pane

0xadfd,	// (0x00020cd6) cell_touch_3_pane_ParamLimits

0xadfd,	// (0x00020cd6) cell_touch_3_pane

0x016c,	// (0x00016045) cell_touch_3_pane_g1

0x016c,	// (0x00016045) cell_touch_3_pane_g2

0x0001,

0xfb5b,	// (0x00025a34) cell_touch_3_pane_g

0xc52e,	// (0x00022407) cont_query_data_pane

0xc536,	// (0x0002240f) cont_query_data_pane_cp1

0x145f,	// (0x00017338) button_value_adjust_pane_cp7

0x1467,	// (0x00017340) query_popup_pane_cp3

0xcf27,	// (0x00022e00) bg_popup_sub_pane_cp22_ParamLimits

0x628f,	// (0x0001c168) navi_navi_volume_pane_cp2

0x62aa,	// (0x0001c183) popup_side_volume_key_window_g2

0x62b9,	// (0x0001c192) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002562a) popup_side_volume_key_window_g

0x62d6,	// (0x0001c1af) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x00025631) popup_side_volume_key_window_t

0xd177,	// (0x00023050) popup_side_volume_key_window_ParamLimits

0x88af,	// (0x0001e788) list_double_graphic_pane_g4_ParamLimits

0x88af,	// (0x0001e788) list_double_graphic_pane_g4

0x8d23,	// (0x0001ebfc) list_single_2heading_msg_pane_ParamLimits

0x8d23,	// (0x0001ebfc) list_single_2heading_msg_pane

0x8d44,	// (0x0001ec1d) list_single_2heading_msg_pane_g1_ParamLimits

0x8d44,	// (0x0001ec1d) list_single_2heading_msg_pane_g1

0x8d50,	// (0x0001ec29) list_single_2heading_msg_pane_g2_ParamLimits

0x8d50,	// (0x0001ec29) list_single_2heading_msg_pane_g2

0x8d63,	// (0x0001ec3c) list_single_2heading_msg_pane_g3_ParamLimits

0x8d63,	// (0x0001ec3c) list_single_2heading_msg_pane_g3

0x5a9c,	// (0x0001b975) list_single_2heading_msg_pane_g4_ParamLimits

0x5a9c,	// (0x0001b975) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00025b93) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00025b93) list_single_2heading_msg_pane_g

0x5ab4,	// (0x0001b98d) list_single_2heading_msg_pane_t1_ParamLimits

0x5ab4,	// (0x0001b98d) list_single_2heading_msg_pane_t1

0x8d6f,	// (0x0001ec48) list_single_2heading_msg_pane_t2_ParamLimits

0x8d6f,	// (0x0001ec48) list_single_2heading_msg_pane_t2

0x8dda,	// (0x0001ecb3) list_single_2heading_msg_pane_t3_ParamLimits

0x8dda,	// (0x0001ecb3) list_single_2heading_msg_pane_t3

0x5b49,	// (0x0001ba22) list_single_2heading_msg_pane_t4_ParamLimits

0x5b49,	// (0x0001ba22) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00025b9c) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00025b9c) list_single_2heading_msg_pane_t

0xc2ff,	// (0x000221d8) title_pane_g4_ParamLimits

0xc2ff,	// (0x000221d8) title_pane_g4

0x609d,	// (0x0001bf76) title_pane_stacon_g3_ParamLimits

0x609d,	// (0x0001bf76) title_pane_stacon_g3

0x0f6c,	// (0x00016e45) list_single_2graphic_im_pane_g4_ParamLimits

0x0f6c,	// (0x00016e45) list_single_2graphic_im_pane_g4

0xe7df,	// (0x000246b8) popup_side_volume_key_window_cp

0xecc9,	// (0x00024ba2) main_idle_act2_pane_t1

0x6659,	// (0x0001c532) toolbar_button_pane_g10

0x934b,	// (0x0001f224) popup_toolbar_window_cp1

0xf367,	// (0x00025240) clock_nsta_pane_cp_t1

0xf367,	// (0x00025240) clock_nsta_pane_cp_t2

0x0001,

0xfad1,	// (0x000259aa) clock_nsta_pane_cp_t

0x628f,	// (0x0001c168) navi_navi_volume_pane_cp2_ParamLimits

0x629e,	// (0x0001c177) popup_side_volume_key_window_g1_ParamLimits

0x62aa,	// (0x0001c183) popup_side_volume_key_window_g2_ParamLimits

0x62b9,	// (0x0001c192) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002562a) popup_side_volume_key_window_g_ParamLimits

0x6af4,	// (0x0001c9cd) fep_hwr_aid_pane

0x3610,	// (0x000194e9) bg_fep_hwr_top_pane_g4_ParamLimits

0x01ee,	// (0x000160c7) fep_hwr_top_pane_g1_ParamLimits

0x01dc,	// (0x000160b5) fep_hwr_top_pane_g2_ParamLimits

0x6bad,	// (0x0001ca86) fep_hwr_top_pane_g3_ParamLimits

0xfb26,	// (0x000259ff) fep_hwr_top_pane_g_ParamLimits

0x6bc2,	// (0x0001ca9b) fep_hwr_top_text_pane_ParamLimits

0xe5d4,	// (0x000244ad) aid_touch_tab_arrow_arrow_2

0xe5dd,	// (0x000244b6) aid_touch_tab_arrow_left_2

0x6b08,	// (0x0001c9e1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b3f,	// (0x0001ca18) fep_hwr_prediction_pane

0x0363,	// (0x0001623c) fep_vkb_prediction_pane

0xabe4,	// (0x00020abd) fep_vkb_side_pane_g3_ParamLimits

0xabe4,	// (0x00020abd) fep_vkb_side_pane_g3

0x0413,	// (0x000162ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0a00,	// (0x000168d9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0a0d,	// (0x000168e6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00025aa9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1580,	// (0x00017459) fep_hwr_prediction_pane_g1

0x6e34,	// (0x0001cd0d) fep_hwr_prediction_pane_g2

0x6e3c,	// (0x0001cd15) fep_hwr_prediction_pane_g3

0x6e44,	// (0x0001cd1d) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00025ba5) fep_hwr_prediction_pane_g

0x1580,	// (0x00017459) fep_vkb_prediction_pane_g1

0x158a,	// (0x00017463) fep_vkb_prediction_pane_g2

0x1592,	// (0x0001746b) fep_vkb_prediction_pane_g3

0x159a,	// (0x00017473) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00025bae) fep_vkb_prediction_pane_g

0x6931,	// (0x0001c80a) slider_set_pane_g3

0x6945,	// (0x0001c81e) slider_set_pane_g4

0x695d,	// (0x0001c836) slider_set_pane_g5

0x6931,	// (0x0001c80a) slider_set_pane_g6

0x6973,	// (0x0001c84c) slider_set_pane_g7

0xea5e,	// (0x00024937) slider_form_pane_g3

0xea67,	// (0x00024940) slider_form_pane_g4

0xea6f,	// (0x00024948) slider_form_pane_g5

0xea5e,	// (0x00024937) slider_form_pane_g6

0xa7eb,	// (0x000206c4) slider_form_pane_g7

0xef67,	// (0x00024e40) slider_set_pane_vc_g3

0xef70,	// (0x00024e49) slider_set_pane_vc_g4

0xef79,	// (0x00024e52) slider_set_pane_vc_g5

0xef67,	// (0x00024e40) slider_set_pane_vc_g6

0xef82,	// (0x00024e5b) slider_set_pane_vc_g7

0xef67,	// (0x00024e40) slider_form_pane_vc_g1

0xef70,	// (0x00024e49) slider_form_pane_vc_g2

0xef79,	// (0x00024e52) slider_form_pane_vc_g3

0xef67,	// (0x00024e40) slider_form_pane_vc_g4

0xf111,	// (0x00024fea) slider_form_pane_vc_g5

0x0004,

0xfab7,	// (0x00025990) slider_form_pane_vc_g

0xc2e1,	// (0x000221ba) main_idle_act3_pane

0x15a2,	// (0x0001747b) ai3_links_pane

0xae46,	// (0x00020d1f) popup_ai3_data_window_ParamLimits

0xae46,	// (0x00020d1f) popup_ai3_data_window

0xc2e1,	// (0x000221ba) grid_ai3_links_pane

0xae5e,	// (0x00020d37) cell_ai3_links_pane_ParamLimits

0xae5e,	// (0x00020d37) cell_ai3_links_pane

0x15db,	// (0x000174b4) bg_popup_sub_pane_cp11

0x15e8,	// (0x000174c1) cell_ai3_links_pane_g1

0xc2e1,	// (0x000221ba) bg_popup_sub_pane_cp12

0x160d,	// (0x000174e6) heading_ai3_data_pane

0x1615,	// (0x000174ee) list_ai3_gene_pane

0x1621,	// (0x000174fa) popup_ai3_data_window_g1

0x1629,	// (0x00017502) heading_ai3_data_pane_g1

0x1631,	// (0x0001750a) heading_ai3_data_pane_t1

0x163f,	// (0x00017518) list_double_ai3_gene_pane_ParamLimits

0x163f,	// (0x00017518) list_double_ai3_gene_pane

0x164c,	// (0x00017525) list_single_ai3_gene_pane_ParamLimits

0x164c,	// (0x00017525) list_single_ai3_gene_pane

0x0131,	// (0x0001600a) list_highlight_pane_cp7_ParamLimits

0x0131,	// (0x0001600a) list_highlight_pane_cp7

0x1659,	// (0x00017532) list_single_a13_gene_pane_t1_ParamLimits

0x1659,	// (0x00017532) list_single_a13_gene_pane_t1

0x1670,	// (0x00017549) list_single_ai3_gene_pane_g1

0x1679,	// (0x00017552) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00025bb7) list_single_ai3_gene_pane_g

0x1681,	// (0x0001755a) list_double_ai3_gene_pane_g1_ParamLimits

0x1681,	// (0x0001755a) list_double_ai3_gene_pane_g1

0x168d,	// (0x00017566) list_double_ai3_gene_pane_t1_ParamLimits

0x168d,	// (0x00017566) list_double_ai3_gene_pane_t1

0x16a9,	// (0x00017582) list_double_ai3_gene_pane_t2_ParamLimits

0x16a9,	// (0x00017582) list_double_ai3_gene_pane_t2

0x16be,	// (0x00017597) list_double_ai3_gene_pane_t3_ParamLimits

0x16be,	// (0x00017597) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00025bbc) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00025bbc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5a86,	// (0x0001b95f) aid_size_min_col_2

0xae30,	// (0x00020d09) aid_size_min_msg_ParamLimits

0xae30,	// (0x00020d09) aid_size_min_msg

0xabf8,	// (0x00020ad1) fep_vkb_top_text_pane_g2_ParamLimits

0xabf8,	// (0x00020ad1) fep_vkb_top_text_pane_g2

0x0001,

0xfb56,	// (0x00025a2f) fep_vkb_top_text_pane_g_ParamLimits

0xfb56,	// (0x00025a2f) fep_vkb_top_text_pane_g

0xc2e1,	// (0x000221ba) main_hc_apps_shell_pane

0x16db,	// (0x000175b4) grid_hc_apps_pane_ParamLimits

0x16db,	// (0x000175b4) grid_hc_apps_pane

0x16ea,	// (0x000175c3) list_hc_apps_pane

0x16f2,	// (0x000175cb) scroll_pane_cp37_ParamLimits

0x16f2,	// (0x000175cb) scroll_pane_cp37

0xae78,	// (0x00020d51) cell_hc_apps_pane_ParamLimits

0xae78,	// (0x00020d51) cell_hc_apps_pane

0xaf38,	// (0x00020e11) cell_hc_apps_pane_g1_ParamLimits

0xaf38,	// (0x00020e11) cell_hc_apps_pane_g1

0x17df,	// (0x000176b8) cell_hc_apps_pane_g2_ParamLimits

0x17df,	// (0x000176b8) cell_hc_apps_pane_g2

0x17fb,	// (0x000176d4) cell_hc_apps_pane_g3_ParamLimits

0x17fb,	// (0x000176d4) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00025bc3) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00025bc3) cell_hc_apps_pane_g

0xaf65,	// (0x00020e3e) cell_hc_apps_pane_t1_ParamLimits

0xaf65,	// (0x00020e3e) cell_hc_apps_pane_t1

0xc484,	// (0x0002235d) grid_highlight_pane_cp10_ParamLimits

0xc484,	// (0x0002235d) grid_highlight_pane_cp10

0xafa3,	// (0x00020e7c) list_single_hc_apps_pane_ParamLimits

0xafa3,	// (0x00020e7c) list_single_hc_apps_pane

0x18d0,	// (0x000177a9) list_single_hc_apps_pane_g1

0x5b6e,	// (0x0001ba47) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00025bca) list_single_hc_apps_pane_g

0x5b87,	// (0x0001ba60) list_single_hc_apps_pane_g2_copy1

0x5ba3,	// (0x0001ba7c) list_single_hc_apps_pane_t1

0xc351,	// (0x0002222a) bg_set_opt_pane_cp_ParamLimits

0x5fc8,	// (0x0001bea1) setting_slider_pane_t1_ParamLimits

0x5fe1,	// (0x0001beba) setting_slider_pane_t2_ParamLimits

0x5ffa,	// (0x0001bed3) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002547b) setting_slider_pane_t_ParamLimits

0x6011,	// (0x0001beea) slider_set_pane_ParamLimits

0x6537,	// (0x0001c410) control_pane_g5_ParamLimits

0x6537,	// (0x0001c410) control_pane_g5

0xea20,	// (0x000248f9) slider_set_pane_g1_ParamLimits

0x6925,	// (0x0001c7fe) slider_set_pane_g2_ParamLimits

0x6931,	// (0x0001c80a) slider_set_pane_g3_ParamLimits

0x6945,	// (0x0001c81e) slider_set_pane_g4_ParamLimits

0x695d,	// (0x0001c836) slider_set_pane_g5_ParamLimits

0x6931,	// (0x0001c80a) slider_set_pane_g6_ParamLimits

0x6973,	// (0x0001c84c) slider_set_pane_g7_ParamLimits

0xf991,	// (0x0002586a) slider_set_pane_g_ParamLimits

0xd258,	// (0x00023131) navi_icon_text_pane_ParamLimits

0x9e5a,	// (0x0001fd33) aid_fill_nsta_2_ParamLimits

0x9e8e,	// (0x0001fd67) aid_touch_tab_arrow_left_ParamLimits

0x9ea4,	// (0x0001fd7d) aid_touch_tab_arrow_right_ParamLimits

0x9f3f,	// (0x0001fe18) clock_nsta_pane_ParamLimits

0xa593,	// (0x0002046c) navi_icon_pane_g1_ParamLimits

0xa59f,	// (0x00020478) navi_text_pane_t1_ParamLimits

0xaa42,	// (0x0002091b) navi_icon_text_pane_g1_ParamLimits

0xaa4e,	// (0x00020927) navi_icon_text_pane_t1_ParamLimits

0x18d0,	// (0x000177a9) list_single_hc_apps_pane_g1_ParamLimits

0x5b6e,	// (0x0001ba47) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00025bca) list_single_hc_apps_pane_g_ParamLimits

0x5b87,	// (0x0001ba60) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ba3,	// (0x0001ba7c) list_single_hc_apps_pane_t1_ParamLimits

0x8f9a,	// (0x0001ee73) popup_toolbar2_fixed_window_ParamLimits

0x8f9a,	// (0x0001ee73) popup_toolbar2_fixed_window

0x9dc3,	// (0x0001fc9c) popup_toolbar2_float_window

0xc2e1,	// (0x000221ba) bg_popup_sub_pane_cp27

0x194c,	// (0x00017825) grid_toolbar2_float_pane

0xc2e1,	// (0x000221ba) bg_popup_sub_pane_cp26

0x194c,	// (0x00017825) grid_toolbar2_fixed_pane

0xafd6,	// (0x00020eaf) cell_toolbar2_fixed_pane_ParamLimits

0xafd6,	// (0x00020eaf) cell_toolbar2_fixed_pane

0xaff1,	// (0x00020eca) cell_toolbar2_fixed_pane_g1

0x196e,	// (0x00017847) toolbar2_fixed_button_pane

0xd922,	// (0x000237fb) toolbar2_fixed_button_pane_g1

0xd92a,	// (0x00023803) toolbar2_fixed_button_pane_g2

0xd932,	// (0x0002380b) toolbar2_fixed_button_pane_g3

0xd93a,	// (0x00023813) toolbar2_fixed_button_pane_g4

0xd942,	// (0x0002381b) toolbar2_fixed_button_pane_g5

0xd94a,	// (0x00023823) toolbar2_fixed_button_pane_g6

0xd952,	// (0x0002382b) toolbar2_fixed_button_pane_g7

0xd95a,	// (0x00023833) toolbar2_fixed_button_pane_g8

0xd962,	// (0x0002383b) toolbar2_fixed_button_pane_g9

0x0008,

0xf893,	// (0x0002576c) toolbar2_fixed_button_pane_g

0x1976,	// (0x0001784f) cell_toolbar2_float_pane_ParamLimits

0x1976,	// (0x0001784f) cell_toolbar2_float_pane

0x1987,	// (0x00017860) cell_toolbar2_float_pane_g1

0x196e,	// (0x00017847) toolbar2_fixed_button_pane_cp

0xabab,	// (0x00020a84) fep_vkb_accented_list_pane_ParamLimits

0xabab,	// (0x00020a84) fep_vkb_accented_list_pane

0x6d10,	// (0x0001cbe9) bg_popup_fep_shadow_pane_g9

0xd3da,	// (0x000232b3) bg_popup_fep_shadow_pane_cp3

0xca9e,	// (0x00022977) list_accented_list_pane

0x1990,	// (0x00017869) list_single_accented_list_pane_ParamLimits

0x1990,	// (0x00017869) list_single_accented_list_pane

0xd3da,	// (0x000232b3) list_highlight_pane_cp10

0x19a1,	// (0x0001787a) list_single_accented_list_pane_t1

0x9ced,	// (0x0001fbc6) popup_slider_window_ParamLimits

0x9ced,	// (0x0001fbc6) popup_slider_window

0x146f,	// (0x00017348) aid_indentation_list_msg

0xb0ea,	// (0x00020fc3) bg_popup_window_pane_cp19

0x1ac5,	// (0x0001799e) popup_slider_window_g1

0x1ae1,	// (0x000179ba) popup_slider_window_g2

0x1afd,	// (0x000179d6) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00025bcf) popup_slider_window_g

0x1b59,	// (0x00017a32) popup_slider_window_t1

0x1bcd,	// (0x00017aa6) small_volume_slider_vertical_pane

0x016c,	// (0x00016045) small_volume_slider_vertical_pane_g1

0x016c,	// (0x00016045) small_volume_slider_vertical_pane_g2

0x1be9,	// (0x00017ac2) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00025be1) small_volume_slider_vertical_pane_g

0x8f08,	// (0x0001ede1) area_side_right_pane_ParamLimits

0x8f08,	// (0x0001ede1) area_side_right_pane

0xb1a2,	// (0x0002107b) aid_size_side_button_ParamLimits

0xb1a2,	// (0x0002107b) aid_size_side_button

0xb1bb,	// (0x00021094) grid_sctrl_middle_pane_ParamLimits

0xb1bb,	// (0x00021094) grid_sctrl_middle_pane

0x6e80,	// (0x0001cd59) sctrl_sk_bottom_pane

0x6e91,	// (0x0001cd6a) sctrl_sk_top_pane

0x6ea3,	// (0x0001cd7c) aid_touch_sctrl_top

0xc484,	// (0x0002235d) bg_sctrl_sk_pane_ParamLimits

0xc484,	// (0x0002235d) bg_sctrl_sk_pane

0x6eb0,	// (0x0001cd89) sctrl_sk_top_pane_g1

0x6ebd,	// (0x0001cd96) sctrl_sk_top_pane_t1

0x6ea3,	// (0x0001cd7c) aid_touch_sctrl_bottom

0xc484,	// (0x0002235d) bg_sctrl_sk_pane_cp_ParamLimits

0xc484,	// (0x0002235d) bg_sctrl_sk_pane_cp

0x6ed8,	// (0x0001cdb1) sctrl_sk_bottom_pane_g1

0x6ebd,	// (0x0001cd96) sctrl_sk_bottom_pane_t1

0xb1d5,	// (0x000210ae) cell_sctrl_middle_pane_ParamLimits

0xb1d5,	// (0x000210ae) cell_sctrl_middle_pane

0xb1e6,	// (0x000210bf) aid_touch_sctrl_middle_ParamLimits

0xb1e6,	// (0x000210bf) aid_touch_sctrl_middle

0xb1f3,	// (0x000210cc) bg_sctrl_middle_pane_ParamLimits

0xb1f3,	// (0x000210cc) bg_sctrl_middle_pane

0x1c71,	// (0x00017b4a) cell_sctrl_middle_pane_g1_ParamLimits

0x1c71,	// (0x00017b4a) cell_sctrl_middle_pane_g1

0xb201,	// (0x000210da) cell_sctrl_middle_pane_g2_ParamLimits

0xb201,	// (0x000210da) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00025bed) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00025bed) cell_sctrl_middle_pane_g

0xd922,	// (0x000237fb) bg_sctrl_middle_pane_g1

0xd92a,	// (0x00023803) bg_sctrl_middle_pane_g2

0xd932,	// (0x0002380b) bg_sctrl_middle_pane_g3

0xd93a,	// (0x00023813) bg_sctrl_middle_pane_g4

0xd942,	// (0x0002381b) bg_sctrl_middle_pane_g5

0xd94a,	// (0x00023823) bg_sctrl_middle_pane_g6

0xd952,	// (0x0002382b) bg_sctrl_middle_pane_g7

0xd95a,	// (0x00023833) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00025bf2) bg_sctrl_middle_pane_g

0xd962,	// (0x0002383b) bg_sctrl_middle_pane_g8_copy1

0xd922,	// (0x000237fb) bg_sctrl_sk_pane_g1

0xd92a,	// (0x00023803) bg_sctrl_sk_pane_g2

0xd932,	// (0x0002380b) bg_sctrl_sk_pane_g3

0x0008,

0xf893,	// (0x0002576c) bg_sctrl_sk_pane_g

0xc8d1,	// (0x000227aa) aid_size_touch_scroll_bar

0xd93a,	// (0x00023813) bg_sctrl_sk_pane_g4

0xd942,	// (0x0002381b) bg_sctrl_sk_pane_g5

0xd94a,	// (0x00023823) bg_sctrl_sk_pane_g6

0xd952,	// (0x0002382b) bg_sctrl_sk_pane_g7

0xd95a,	// (0x00023833) bg_sctrl_sk_pane_g8

0xd962,	// (0x0002383b) bg_sctrl_sk_pane_g9

0xd664,	// (0x0002353d) popup_fep_china_hwr2_fs_candidate_window

0x9827,	// (0x0001f700) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9827,	// (0x0001f700) popup_fep_china_hwr2_fs_control_window

0x0413,	// (0x000162ec) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00025be8) sctrl_sk_top_pane_g

0xb20d,	// (0x000210e6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb20d,	// (0x000210e6) aid_fep_china_hwr2_fs_cell

0xb221,	// (0x000210fa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb221,	// (0x000210fa) bg_popup_fep_shadow_pane_cp4

0xb238,	// (0x00021111) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb238,	// (0x00021111) bg_popup_fep_shadow_pane_cp5

0xb24a,	// (0x00021123) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb24a,	// (0x00021123) popup_fep_china_hwr2_fs_control_bar_grid

0xb25e,	// (0x00021137) popup_fep_china_hwr2_fs_control_funtion_grid

0x1c45,	// (0x00017b1e) aid_fep_china_hwr2_fs_candi_cell

0xc2e1,	// (0x000221ba) bg_popup_fep_shadow_pane_cp6

0x1c4f,	// (0x00017b28) popup_fep_china_hwr2_fs_candidate_grid

0xb266,	// (0x0002113f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb266,	// (0x0002113f) cell_fep_china_hwr2_fs_funtion_grid

0x016c,	// (0x00016045) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1c71,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1c71,	// (0x00017b4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1c7f,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1c7f,	// (0x00017b58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00025c03) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00025c03) cell_fep_china_hwr2_fs_funtion_grid_g

0xb27e,	// (0x00021157) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb27e,	// (0x00021157) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb293,	// (0x0002116c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb293,	// (0x0002116c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00025c08) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00025c08) cell_fep_china_hwr2_fs_funtion_grid_t

0x1cc6,	// (0x00017b9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1cce,	// (0x00017ba7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x1cd6,	// (0x00017baf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00025c0d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1cde,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1cde,	// (0x00017bb7) cell_fep_china_hwr2_fs_candidate_grid

0x1cf7,	// (0x00017bd0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1cff,	// (0x00017bd8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x016c,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g1

0x016c,	// (0x00016045) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5b,	// (0x00025a34) cell_fep_china_hwr2_fs_candidate_grid_g

0x1d07,	// (0x00017be0) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd771,	// (0x0002364a) clock_nsta_pane_cp_24_ParamLimits

0xd771,	// (0x0002364a) clock_nsta_pane_cp_24

0xd7d9,	// (0x000236b2) indicator_nsta_pane_cp_24_ParamLimits

0xd7d9,	// (0x000236b2) indicator_nsta_pane_cp_24

0xe4de,	// (0x000243b7) heading_pane_g1

0x0001,

0xf8f8,	// (0x000257d1) heading_pane_g

0xeb54,	// (0x00024a2d) grid_sct_catagory_button_pane

0xe8e1,	// (0x000247ba) scroll_pane_cp5_ParamLimits

0xf3d2,	// (0x000252ab) button_value_adjust_pane_cp5_ParamLimits

0xf3d2,	// (0x000252ab) button_value_adjust_pane_cp5

0xf490,	// (0x00025369) form2_midp_time_pane_ParamLimits

0x1d15,	// (0x00017bee) cell_sct_catagory_button_pane_ParamLimits

0x1d15,	// (0x00017bee) cell_sct_catagory_button_pane

0x0131,	// (0x0001600a) bg_button_pane_cp01_ParamLimits

0x0131,	// (0x0001600a) bg_button_pane_cp01

0x016c,	// (0x00016045) cell_sct_catagory_button_pane_g1

0x9d66,	// (0x0001fc3f) popup_tb_extension_window

0xb2af,	// (0x00021188) aid_size_cell_ext_ParamLimits

0xb2af,	// (0x00021188) aid_size_cell_ext

0xc713,	// (0x000225ec) bg_tb_trans_pane_cp1_ParamLimits

0xc713,	// (0x000225ec) bg_tb_trans_pane_cp1

0xb2d5,	// (0x000211ae) grid_tb_ext_pane_ParamLimits

0xb2d5,	// (0x000211ae) grid_tb_ext_pane

0xb315,	// (0x000211ee) cell_tb_ext_pane_ParamLimits

0xb315,	// (0x000211ee) cell_tb_ext_pane

0xb33d,	// (0x00021216) cell_tb_ext_pane_g1_ParamLimits

0xb33d,	// (0x00021216) cell_tb_ext_pane_g1

0x1dad,	// (0x00017c86) cell_tb_ext_pane_t1

0xc484,	// (0x0002235d) list_highlight_pane_cp11_ParamLimits

0xc484,	// (0x0002235d) list_highlight_pane_cp11

0x5f01,	// (0x0001bdda) popup_uni_indicator_window_ParamLimits

0x5f01,	// (0x0001bdda) popup_uni_indicator_window

0xc998,	// (0x00022871) bg_popup_sub_pane_cp14

0x1dc8,	// (0x00017ca1) list_uniindi_pane

0x1dd4,	// (0x00017cad) uniindi_top_pane

0xc484,	// (0x0002235d) bg_uniindi_top_pane

0x1df3,	// (0x00017ccc) uniindi_top_pane_g1

0x1e09,	// (0x00017ce2) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00025c14) uniindi_top_pane_g

0x1e33,	// (0x00017d0c) uniindi_top_pane_t1

0x1e5d,	// (0x00017d36) list_single_uniindi_pane_ParamLimits

0x1e5d,	// (0x00017d36) list_single_uniindi_pane

0x016c,	// (0x00016045) bg_uniindi_top_pane_g1

0x1e6f,	// (0x00017d48) list_single_uniindi_pane_g1

0x1e82,	// (0x00017d5b) list_single_uniindi_pane_t1

0xc2e1,	// (0x000221ba) control_bg_pane

0x1ea7,	// (0x00017d80) bg_sctrl_sk_pane_cp1

0x1eb0,	// (0x00017d89) bg_sctrl_sk_pane_cp2

0x1eb9,	// (0x00017d92) control_bg_pane_g1

0x1ec2,	// (0x00017d9b) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00025c1d) control_bg_pane_g

0xf341,	// (0x0002521a) cell_indicator_nsta_pane_g1_ParamLimits

0xa9a9,	// (0x00020882) cell_indicator_nsta_pane_g2_ParamLimits

0xfacc,	// (0x000259a5) cell_indicator_nsta_pane_g_ParamLimits

0x5843,	// (0x0001b71c) form2_midp_time_pane_t1_ParamLimits

0x0232,	// (0x0001610b) main_idle_act4_pane_ParamLimits

0x0232,	// (0x0001610b) main_idle_act4_pane

0x9d66,	// (0x0001fc3f) popup_tb_extension_window_ParamLimits

0xb2fc,	// (0x000211d5) tb_ext_find_pane_ParamLimits

0xb2fc,	// (0x000211d5) tb_ext_find_pane

0x1ecb,	// (0x00017da4) ai_gene_pane_1_cp1

0xd45c,	// (0x00023335) ai_gene_pane_2_cp1

0x1ed3,	// (0x00017dac) list_single_idle_plugin_calendar_pane

0x1edc,	// (0x00017db5) list_single_idle_plugin_notification_pane

0x1ee5,	// (0x00017dbe) list_single_idle_plugin_player_pane

0xb35a,	// (0x00021233) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb35a,	// (0x00021233) list_single_idle_plugin_shortcut_pane

0xb382,	// (0x0002125b) main_idle_act4_pane_t1

0xb398,	// (0x00021271) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00025c22) main_idle_act4_pane_t

0xb3b0,	// (0x00021289) middle_sk_idle_act4_pane_ParamLimits

0xb3b0,	// (0x00021289) middle_sk_idle_act4_pane

0xb3cc,	// (0x000212a5) popup_clock_digital_analogue_window_cp2

0xb3f3,	// (0x000212cc) shortcut_wheel_idle_act4_pane_ParamLimits

0xb3f3,	// (0x000212cc) shortcut_wheel_idle_act4_pane

0x016c,	// (0x00016045) shortcut_wheel_idle_act4_pane_g1

0x016c,	// (0x00016045) shortcut_wheel_idle_act4_pane_g2

0x016c,	// (0x00016045) shortcut_wheel_idle_act4_pane_g3

0x016c,	// (0x00016045) shortcut_wheel_idle_act4_pane_g4

0x016c,	// (0x00016045) shortcut_wheel_idle_act4_pane_g5

0x1f78,	// (0x00017e51) shortcut_wheel_idle_act4_pane_g6

0x1f80,	// (0x00017e59) shortcut_wheel_idle_act4_pane_g7

0x1f88,	// (0x00017e61) shortcut_wheel_idle_act4_pane_g8

0x1f90,	// (0x00017e69) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00025c27) shortcut_wheel_idle_act4_pane_g

0x3610,	// (0x000194e9) middle_sk_idle_act4_pane_g1_ParamLimits

0x3610,	// (0x000194e9) middle_sk_idle_act4_pane_g1

0xb470,	// (0x00021349) middle_sk_idle_act4_pane_g2_ParamLimits

0xb470,	// (0x00021349) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00025c4a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00025c4a) middle_sk_idle_act4_pane_g

0xb488,	// (0x00021361) middle_sk_idle_act4_pane_t1_ParamLimits

0xb488,	// (0x00021361) middle_sk_idle_act4_pane_t1

0xb4b7,	// (0x00021390) grid_ai_shortcut_pane_ParamLimits

0xb4b7,	// (0x00021390) grid_ai_shortcut_pane

0xb4d4,	// (0x000213ad) list_highlight_pane_cp16_ParamLimits

0xb4d4,	// (0x000213ad) list_highlight_pane_cp16

0xb4e1,	// (0x000213ba) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb4e1,	// (0x000213ba) list_single_idle_plugin_shortcut_pane_g1

0xb4ed,	// (0x000213c6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb4ed,	// (0x000213c6) list_single_idle_plugin_shortcut_pane_g2

0xb509,	// (0x000213e2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb509,	// (0x000213e2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00025c4f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00025c4f) list_single_idle_plugin_shortcut_pane_g

0xb51e,	// (0x000213f7) cell_ai_shortcut_pane_ParamLimits

0xb51e,	// (0x000213f7) cell_ai_shortcut_pane

0xb534,	// (0x0002140d) cell_ai_shortcut_pane_g1_ParamLimits

0xb534,	// (0x0002140d) cell_ai_shortcut_pane_g1

0x1ecb,	// (0x00017da4) ai_gene_pane_1_cp2

0x20bd,	// (0x00017f96) ai_gene_pane_2_cp2

0x20c5,	// (0x00017f9e) list_highlight_pane_cp15

0x20ce,	// (0x00017fa7) list_single_idle_plugin_calendar_pane_g1

0x20c5,	// (0x00017f9e) list_highlight_pane_cp17

0x20d6,	// (0x00017faf) list_single_idle_plugin_calendar_pane_g1_copy1

0x20de,	// (0x00017fb7) list_single_idle_plugin_player_pane_g1

0xed69,	// (0x00024c42) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00025c56) list_single_idle_plugin_player_pane_g

0x20e6,	// (0x00017fbf) list_single_idle_plugin_player_pane_t1

0x20f4,	// (0x00017fcd) list_single_idle_plugin_player_pane_t2

0x2102,	// (0x00017fdb) list_single_idle_plugin_player_pane_t3

0x2110,	// (0x00017fe9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00025c5b) list_single_idle_plugin_player_pane_t

0x211e,	// (0x00017ff7) wait_bar_pane_cp15

0x2126,	// (0x00017fff) grid_ai_notification_pane

0xed69,	// (0x00024c42) list_single_idle_plugin_notification_pane_g1

0xb556,	// (0x0002142f) cell_ai_notification_pane_ParamLimits

0xb556,	// (0x0002142f) cell_ai_notification_pane

0x213c,	// (0x00018015) cell_ai_notification_pane_g1

0x2144,	// (0x0001801d) cell_ai_notification_pane_t1

0xb563,	// (0x0002143c) tb_ext_find_button_pane

0xb56b,	// (0x00021444) tb_ext_find_pane_g1

0xb573,	// (0x0002144c) tb_ext_find_pane_t1

0xcecb,	// (0x00022da4) tb_ext_find_button_pane_g1

0x2170,	// (0x00018049) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00025c64) tb_ext_find_button_pane_g

0xb382,	// (0x0002125b) main_idle_act4_pane_t1_ParamLimits

0xb398,	// (0x00021271) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00025c22) main_idle_act4_pane_t_ParamLimits

0xb3cc,	// (0x000212a5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb3e3,	// (0x000212bc) sat_plugin_idle_act4_pane_ParamLimits

0xb3e3,	// (0x000212bc) sat_plugin_idle_act4_pane

0xb581,	// (0x0002145a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb581,	// (0x0002145a) sat_plugin_idle_act4_pane_t1

0xb599,	// (0x00021472) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb599,	// (0x00021472) sat_plugin_idle_act4_pane_t2

0xb5b1,	// (0x0002148a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb5b1,	// (0x0002148a) sat_plugin_idle_act4_pane_t3

0xb5c9,	// (0x000214a2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb5c9,	// (0x000214a2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00025c69) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00025c69) sat_plugin_idle_act4_pane_t

0x5e4a,	// (0x0001bd23) popup_battery_window_ParamLimits

0x5e4a,	// (0x0001bd23) popup_battery_window

0xc484,	// (0x0002235d) bg_popup_sub_pane_cp25_ParamLimits

0xc484,	// (0x0002235d) bg_popup_sub_pane_cp25

0x21c5,	// (0x0001809e) popup_battery_window_g1_ParamLimits

0x21c5,	// (0x0001809e) popup_battery_window_g1

0x21d1,	// (0x000180aa) popup_battery_window_t1_ParamLimits

0x21d1,	// (0x000180aa) popup_battery_window_t1

0x21e3,	// (0x000180bc) popup_battery_window_t2_ParamLimits

0x21e3,	// (0x000180bc) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00025c72) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00025c72) popup_battery_window_t

0x957e,	// (0x0001f457) midp_canvas_pane_ParamLimits

0x95db,	// (0x0001f4b4) midp_keypad_pane_ParamLimits

0x95db,	// (0x0001f4b4) midp_keypad_pane

0xcaef,	// (0x000229c8) main_midp_pane_ParamLimits

0xf385,	// (0x0002525e) signal_pane_g2_cp_ParamLimits

0xb5e1,	// (0x000214ba) aid_size_cell_midp_keypad_ParamLimits

0xb5e1,	// (0x000214ba) aid_size_cell_midp_keypad

0xb5ff,	// (0x000214d8) midp_keyp_game_grid_pane_ParamLimits

0xb5ff,	// (0x000214d8) midp_keyp_game_grid_pane

0xb626,	// (0x000214ff) midp_keyp_rocker_pane_ParamLimits

0xb626,	// (0x000214ff) midp_keyp_rocker_pane

0xb67f,	// (0x00021558) midp_keyp_sk_left_pane_ParamLimits

0xb67f,	// (0x00021558) midp_keyp_sk_left_pane

0xb6d3,	// (0x000215ac) midp_keyp_sk_right_pane_ParamLimits

0xb6d3,	// (0x000215ac) midp_keyp_sk_right_pane

0xc2e1,	// (0x000221ba) bg_button_pane_cp03

0xb727,	// (0x00021600) midp_keyp_sk_left_pane_g1

0xc2e1,	// (0x000221ba) bg_button_pane_cp04

0xb727,	// (0x00021600) midp_keyp_sk_right_pane_g1

0x016c,	// (0x00016045) midp_keyp_rocker_pane_g1

0xb730,	// (0x00021609) keyp_game_cell_pane_ParamLimits

0xb730,	// (0x00021609) keyp_game_cell_pane

0xc2e1,	// (0x000221ba) bg_button_pane_cp02

0xb754,	// (0x0002162d) keyp_game_cell_pane_g1

0x8f4a,	// (0x0001ee23) popup_fep_vkb2_window_ParamLimits

0x8f4a,	// (0x0001ee23) popup_fep_vkb2_window

0xb75d,	// (0x00021636) aid_size_cell_vkb2_ParamLimits

0xb75d,	// (0x00021636) aid_size_cell_vkb2

0xb793,	// (0x0002166c) popup_fep_vkb2_window_g1_ParamLimits

0xb793,	// (0x0002166c) popup_fep_vkb2_window_g1

0xb7da,	// (0x000216b3) vkb2_area_bottom_pane_ParamLimits

0xb7da,	// (0x000216b3) vkb2_area_bottom_pane

0xb82e,	// (0x00021707) vkb2_area_keypad_pane_ParamLimits

0xb82e,	// (0x00021707) vkb2_area_keypad_pane

0xb876,	// (0x0002174f) vkb2_area_top_pane_ParamLimits

0xb876,	// (0x0002174f) vkb2_area_top_pane

0xb8fc,	// (0x000217d5) vkb2_top_entry_pane_ParamLimits

0xb8fc,	// (0x000217d5) vkb2_top_entry_pane

0xb929,	// (0x00021802) vkb2_top_grid_left_pane_ParamLimits

0xb929,	// (0x00021802) vkb2_top_grid_left_pane

0xb949,	// (0x00021822) vkb2_top_grid_right_pane_ParamLimits

0xb949,	// (0x00021822) vkb2_top_grid_right_pane

0x7132,	// (0x0001d00b) vkb2_cell_keypad_pane_ParamLimits

0x7132,	// (0x0001d00b) vkb2_cell_keypad_pane

0xb98f,	// (0x00021868) vkb2_area_bottom_grid_pane_ParamLimits

0xb98f,	// (0x00021868) vkb2_area_bottom_grid_pane

0xb9b9,	// (0x00021892) vkb2_area_bottom_pane_g1_ParamLimits

0xb9b9,	// (0x00021892) vkb2_area_bottom_pane_g1

0xb9df,	// (0x000218b8) vkb2_area_bottom_pane_g2_ParamLimits

0xb9df,	// (0x000218b8) vkb2_area_bottom_pane_g2

0xba10,	// (0x000218e9) vkb2_area_bottom_pane_g3_ParamLimits

0xba10,	// (0x000218e9) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00025c77) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00025c77) vkb2_area_bottom_pane_g

0x72dc,	// (0x0001d1b5) vkb2_top_cell_left_pane_ParamLimits

0x72dc,	// (0x0001d1b5) vkb2_top_cell_left_pane

0xba7a,	// (0x00021953) vkb2_top_entry_pane_g1_ParamLimits

0xba7a,	// (0x00021953) vkb2_top_entry_pane_g1

0xba88,	// (0x00021961) vkb2_top_entry_pane_t1_ParamLimits

0xba88,	// (0x00021961) vkb2_top_entry_pane_t1

0x3626,	// (0x000194ff) vkb2_top_entry_pane_t2_ParamLimits

0x3626,	// (0x000194ff) vkb2_top_entry_pane_t2

0x3658,	// (0x00019531) vkb2_top_entry_pane_t3_ParamLimits

0x3658,	// (0x00019531) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00025c7e) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00025c7e) vkb2_top_entry_pane_t

0xbac1,	// (0x0002199a) vkb2_top_grid_right_pane_g1_ParamLimits

0xbac1,	// (0x0002199a) vkb2_top_grid_right_pane_g1

0x737f,	// (0x0001d258) vkb2_top_grid_right_pane_g2_ParamLimits

0x737f,	// (0x0001d258) vkb2_top_grid_right_pane_g2

0x7397,	// (0x0001d270) vkb2_top_grid_right_pane_g3_ParamLimits

0x7397,	// (0x0001d270) vkb2_top_grid_right_pane_g3

0xbad7,	// (0x000219b0) vkb2_top_grid_right_pane_g4_ParamLimits

0xbad7,	// (0x000219b0) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00025c85) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00025c85) vkb2_top_grid_right_pane_g

0x73c5,	// (0x0001d29e) vkb2_top_cell_left_pane_g1

0x73dc,	// (0x0001d2b5) vkb2_cell_keypad_pane_g1_ParamLimits

0x73dc,	// (0x0001d2b5) vkb2_cell_keypad_pane_g1

0x367c,	// (0x00019555) vkb2_cell_keypad_pane_t1_ParamLimits

0x367c,	// (0x00019555) vkb2_cell_keypad_pane_t1

0x73ea,	// (0x0001d2c3) vkb2_cell_bottom_grid_pane_ParamLimits

0x73ea,	// (0x0001d2c3) vkb2_cell_bottom_grid_pane

0x7423,	// (0x0001d2fc) vkb2_cell_bottom_grid_pane_g1

0xb414,	// (0x000212ed) aid_call2_pane_cp02

0xb41c,	// (0x000212f5) aid_call_pane_cp02

0xb424,	// (0x000212fd) clock_digital_number_pane_cp10

0xb42c,	// (0x00021305) clock_digital_number_pane_cp11

0xb434,	// (0x0002130d) clock_digital_number_pane_cp12

0xb43c,	// (0x00021315) clock_digital_number_pane_cp13

0xb444,	// (0x0002131d) clock_digital_separator_pane_cp10

0xcecb,	// (0x00022da4) popup_clock_digital_analogue_window_cp2_g1

0xcecb,	// (0x00022da4) popup_clock_digital_analogue_window_cp2_g2

0xb44c,	// (0x00021325) popup_clock_digital_analogue_window_cp2_g3

0xcecb,	// (0x00022da4) popup_clock_digital_analogue_window_cp2_g4

0xb44c,	// (0x00021325) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00025c3a) popup_clock_digital_analogue_window_cp2_g

0xb454,	// (0x0002132d) popup_clock_digital_analogue_window_cp2_t1

0xb462,	// (0x0002133b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00025c45) popup_clock_digital_analogue_window_cp2_t

0x016c,	// (0x00016045) clock_digital_number_pane_cp10_g1

0x016c,	// (0x00016045) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00025a34) clock_digital_number_pane_cp10_g

0x016c,	// (0x00016045) clock_digital_separator_pane_cp10_g1

0x016c,	// (0x00016045) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5b,	// (0x00025a34) clock_digital_separator_pane_cp10_g

0x1e15,	// (0x00017cee) uniindi_top_pane_g3

0x1e26,	// (0x00017cff) uniindi_top_pane_g4

0x71bd,	// (0x0001d096) vkb2_row_keypad_pane_ParamLimits

0x71bd,	// (0x0001d096) vkb2_row_keypad_pane

0x7443,	// (0x0001d31c) vkb2_cell_t_keypad_pane_ParamLimits

0x7443,	// (0x0001d31c) vkb2_cell_t_keypad_pane

0x7453,	// (0x0001d32c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7453,	// (0x0001d32c) vkb2_cell_t_keypad_pane_cp08

0x7466,	// (0x0001d33f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7466,	// (0x0001d33f) vkb2_cell_t_keypad_pane_cp09

0x747a,	// (0x0001d353) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x747a,	// (0x0001d353) vkb2_cell_t_keypad_pane_cp01

0x748b,	// (0x0001d364) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x748b,	// (0x0001d364) vkb2_cell_t_keypad_pane_cp02

0x749c,	// (0x0001d375) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x749c,	// (0x0001d375) vkb2_cell_t_keypad_pane_cp03

0x74ad,	// (0x0001d386) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74ad,	// (0x0001d386) vkb2_cell_t_keypad_pane_cp04

0x74be,	// (0x0001d397) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74be,	// (0x0001d397) vkb2_cell_t_keypad_pane_cp05

0x74cf,	// (0x0001d3a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74cf,	// (0x0001d3a8) vkb2_cell_t_keypad_pane_cp06

0x74e0,	// (0x0001d3b9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74e0,	// (0x0001d3b9) vkb2_cell_t_keypad_pane_cp07

0x74f1,	// (0x0001d3ca) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74f1,	// (0x0001d3ca) vkb2_cell_t_keypad_pane_cp10

0x0413,	// (0x000162ec) vkb2_cell_t_keypad_pane_g1

0x3693,	// (0x0001956c) vkb2_cell_t_keypad_pane_t1

0xc2e1,	// (0x000221ba) popup_grid_graphic2_window

0xbaed,	// (0x000219c6) aid_size_cell_graphic2_ParamLimits

0xbaed,	// (0x000219c6) aid_size_cell_graphic2

0xde9e,	// (0x00023d77) bg_popup_window_pane_cp21_ParamLimits

0xde9e,	// (0x00023d77) bg_popup_window_pane_cp21

0xbb1f,	// (0x000219f8) graphic2_pages_pane_ParamLimits

0xbb1f,	// (0x000219f8) graphic2_pages_pane

0xbb75,	// (0x00021a4e) grid_graphic2_control_pane_ParamLimits

0xbb75,	// (0x00021a4e) grid_graphic2_control_pane

0xbba9,	// (0x00021a82) grid_graphic2_pane_ParamLimits

0xbba9,	// (0x00021a82) grid_graphic2_pane

0xbc1c,	// (0x00021af5) cell_graphic2_pane

0xc2e1,	// (0x000221ba) main_comp_mode_pane

0x1615,	// (0x000174ee) list_ai3_gene_pane_ParamLimits

0xb0ea,	// (0x00020fc3) bg_popup_window_pane_cp19_ParamLimits

0x1a67,	// (0x00017940) bg_touch_area_indi_pane_ParamLimits

0x1a67,	// (0x00017940) bg_touch_area_indi_pane

0x1a7d,	// (0x00017956) bg_touch_area_indi_pane_cp01_ParamLimits

0x1a7d,	// (0x00017956) bg_touch_area_indi_pane_cp01

0x1a93,	// (0x0001796c) bg_touch_area_indi_pane_cp02_ParamLimits

0x1a93,	// (0x0001796c) bg_touch_area_indi_pane_cp02

0x1aab,	// (0x00017984) bg_touch_area_indi_pane_cp03_ParamLimits

0x1aab,	// (0x00017984) bg_touch_area_indi_pane_cp03

0x1ac5,	// (0x0001799e) popup_slider_window_g1_ParamLimits

0x1ae1,	// (0x000179ba) popup_slider_window_g2_ParamLimits

0x1afd,	// (0x000179d6) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00025bcf) popup_slider_window_g_ParamLimits

0x1b59,	// (0x00017a32) popup_slider_window_t1_ParamLimits

0x1bcd,	// (0x00017aa6) small_volume_slider_vertical_pane_ParamLimits

0xbc1c,	// (0x00021af5) cell_graphic2_pane_ParamLimits

0xbc77,	// (0x00021b50) bg_button_pane_cp10_ParamLimits

0xbc77,	// (0x00021b50) bg_button_pane_cp10

0xbc8a,	// (0x00021b63) bg_button_pane_cp11_ParamLimits

0xbc8a,	// (0x00021b63) bg_button_pane_cp11

0xbc9d,	// (0x00021b76) graphic2_pages_pane_g1_ParamLimits

0xbc9d,	// (0x00021b76) graphic2_pages_pane_g1

0xbcb8,	// (0x00021b91) graphic2_pages_pane_g2_ParamLimits

0xbcb8,	// (0x00021b91) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00025c93) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00025c93) graphic2_pages_pane_g

0xbcd0,	// (0x00021ba9) graphic2_pages_pane_t1_ParamLimits

0xbcd0,	// (0x00021ba9) graphic2_pages_pane_t1

0xbce8,	// (0x00021bc1) cell_graphic2_control_pane_ParamLimits

0xbce8,	// (0x00021bc1) cell_graphic2_control_pane

0xbd02,	// (0x00021bdb) cell_graphic2_pane_g1_ParamLimits

0xbd02,	// (0x00021bdb) cell_graphic2_pane_g1

0x36a5,	// (0x0001957e) cell_graphic2_pane_g2_ParamLimits

0x36a5,	// (0x0001957e) cell_graphic2_pane_g2

0xbd0f,	// (0x00021be8) cell_graphic2_pane_g3_ParamLimits

0xbd0f,	// (0x00021be8) cell_graphic2_pane_g3

0x36b2,	// (0x0001958b) cell_graphic2_pane_g4_ParamLimits

0x36b2,	// (0x0001958b) cell_graphic2_pane_g4

0xbd1c,	// (0x00021bf5) cell_graphic2_pane_g5_ParamLimits

0xbd1c,	// (0x00021bf5) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00025c98) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00025c98) cell_graphic2_pane_g

0xbd3c,	// (0x00021c15) cell_graphic2_pane_t1_ParamLimits

0xbd3c,	// (0x00021c15) cell_graphic2_pane_t1

0xe4d2,	// (0x000243ab) grid_highlight_pane_cp11_ParamLimits

0xe4d2,	// (0x000243ab) grid_highlight_pane_cp11

0xc998,	// (0x00022871) bg_button_pane_cp05

0xbd53,	// (0x00021c2c) cell_graphic2_control_pane_g1

0x016c,	// (0x00016045) bg_touch_area_indi_pane_g1

0x36bf,	// (0x00019598) aid_cmod_rocker_key_size

0x36c9,	// (0x000195a2) aid_cmode_itu_key_size

0x36d3,	// (0x000195ac) main_cmode_video_pane

0x36dd,	// (0x000195b6) main_comp_mode_itu_pane

0x36e9,	// (0x000195c2) main_comp_mode_rocker_pane

0x36f5,	// (0x000195ce) cell_cmode_rocker_pane_ParamLimits

0x36f5,	// (0x000195ce) cell_cmode_rocker_pane

0x3707,	// (0x000195e0) cell_cmode_itu_pane_ParamLimits

0x3707,	// (0x000195e0) cell_cmode_itu_pane

0xc998,	// (0x00022871) bg_button_pane_cp06_ParamLimits

0xc998,	// (0x00022871) bg_button_pane_cp06

0x0413,	// (0x000162ec) cell_cmode_rocker_pane_g1_ParamLimits

0x0413,	// (0x000162ec) cell_cmode_rocker_pane_g1

0x1c71,	// (0x00017b4a) cell_cmode_rocker_pane_g2_ParamLimits

0x1c71,	// (0x00017b4a) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00025ca3) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00025ca3) cell_cmode_rocker_pane_g

0xc2e1,	// (0x000221ba) bg_button_pane_cp07

0x371c,	// (0x000195f5) cell_cmode_itu_pane_g1

0x3725,	// (0x000195fe) cell_cmode_itu_pane_t1

0x3733,	// (0x0001960c) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00025ca8) cell_cmode_itu_pane_t

0x1e97,	// (0x00017d70) aid_touch_ctrl_left

0x1e9f,	// (0x00017d78) aid_touch_ctrl_right

0xc2e1,	// (0x000221ba) compa_mode_pane

0xbd60,	// (0x00021c39) aid_cmod_rocker_key_size_cp

0xbd6a,	// (0x00021c43) aid_cmode_itu_key_size_cp

0x3741,	// (0x0001961a) compa_mode_pane_g1

0x3749,	// (0x00019622) compa_mode_pane_g2

0x3751,	// (0x0001962a) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00025cad) compa_mode_pane_g

0xbd74,	// (0x00021c4d) main_comp_mode_itu_pane_cp

0xbd7c,	// (0x00021c55) main_comp_mode_rocker_pane_cp

0xbd84,	// (0x00021c5d) cell_cmode_itu_pane_cp_ParamLimits

0xbd84,	// (0x00021c5d) cell_cmode_itu_pane_cp

0xbd99,	// (0x00021c72) cell_cmode_rocker_pane_cp_ParamLimits

0xbd99,	// (0x00021c72) cell_cmode_rocker_pane_cp

0xc998,	// (0x00022871) bg_button_pane_cp06_cp_ParamLimits

0xc998,	// (0x00022871) bg_button_pane_cp06_cp

0x0413,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x0413,	// (0x000162ec) cell_cmode_rocker_pane_g1_cp

0x016c,	// (0x00016045) cell_cmode_rocker_pane_g2_cp

0xc2e1,	// (0x000221ba) bg_button_pane_cp07_cp

0xbdab,	// (0x00021c84) cell_cmode_itu_pane_g1_cp

0xbdb4,	// (0x00021c8d) cell_cmode_itu_pane_t1_cp

0xbdb4,	// (0x00021c8d) cell_cmode_itu_pane_t2_cp

0xa7e1,	// (0x000206ba) settings_code_pane_cp2

0xc351,	// (0x0002222a) bg_popup_window_pane_cp3_ParamLimits

0xc652,	// (0x0002252b) heading_pane_cp3_ParamLimits

0xc65e,	// (0x00022537) listscroll_popup_graphic_pane_ParamLimits

0x6af4,	// (0x0001c9cd) fep_hwr_aid_pane_ParamLimits

0x6ea3,	// (0x0001cd7c) aid_touch_sctrl_top_ParamLimits

0x6eb0,	// (0x0001cd89) sctrl_sk_top_pane_g1_ParamLimits

0x0413,	// (0x000162ec) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00025be8) sctrl_sk_top_pane_g_ParamLimits

0x6ebd,	// (0x0001cd96) sctrl_sk_top_pane_t1_ParamLimits

0x6ea3,	// (0x0001cd7c) aid_touch_sctrl_bottom_ParamLimits

0x6ebd,	// (0x0001cd96) sctrl_sk_bottom_pane_t1_ParamLimits

0x1de1,	// (0x00017cba) aid_area_touch_clock

0xb8be,	// (0x00021797) aid_vkb2_area_top_pane_cell_ParamLimits

0xb8be,	// (0x00021797) aid_vkb2_area_top_pane_cell

0xb969,	// (0x00021842) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb969,	// (0x00021842) aid_vkb2_area_bottom_pane_cell

0x361e,	// (0x000194f7) popup_char_count_window

0x3759,	// (0x00019632) popup_char_count_window_g1

0x3762,	// (0x0001963b) popup_char_count_window_g2

0x376b,	// (0x00019644) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00025cb4) popup_char_count_window_g

0x3774,	// (0x0001964d) popup_char_count_window_t1

0x6f62,	// (0x0001ce3b) popup_fep_char_preview_window_ParamLimits

0x6f62,	// (0x0001ce3b) popup_fep_char_preview_window

0xb8de,	// (0x000217b7) vkb2_top_candi_pane_ParamLimits

0xb8de,	// (0x000217b7) vkb2_top_candi_pane

0xbdc2,	// (0x00021c9b) cell_vkb2_top_candi_pane_ParamLimits

0xbdc2,	// (0x00021c9b) cell_vkb2_top_candi_pane

0xde9e,	// (0x00023d77) bg_popup_fep_char_preview_window_ParamLimits

0xde9e,	// (0x00023d77) bg_popup_fep_char_preview_window

0x77ff,	// (0x0001d6d8) popup_fep_char_preview_window_t1_ParamLimits

0x77ff,	// (0x0001d6d8) popup_fep_char_preview_window_t1

0x3792,	// (0x0001966b) bg_popup_fep_char_preview_window_g1

0x378a,	// (0x00019663) bg_popup_fep_char_preview_window_g2

0x3782,	// (0x0001965b) bg_popup_fep_char_preview_window_g3

0x37b2,	// (0x0001968b) bg_popup_fep_char_preview_window_g4

0x37aa,	// (0x00019683) bg_popup_fep_char_preview_window_g5

0x7839,	// (0x0001d712) bg_popup_fep_char_preview_window_g6

0x37a2,	// (0x0001967b) bg_popup_fep_char_preview_window_g7

0x379a,	// (0x00019673) bg_popup_fep_char_preview_window_g8

0x37ba,	// (0x00019693) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00025cbb) bg_popup_fep_char_preview_window_g

0x0413,	// (0x000162ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0413,	// (0x000162ec) cell_vkb2_top_candi_pane_g1

0x0a1a,	// (0x000168f3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0a1a,	// (0x000168f3) cell_vkb2_top_candi_pane_g2

0x0a3b,	// (0x00016914) cell_vkb2_top_candi_pane_g3_ParamLimits

0x0a3b,	// (0x00016914) cell_vkb2_top_candi_pane_g3

0x7841,	// (0x0001d71a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7841,	// (0x0001d71a) cell_vkb2_top_candi_pane_g4

0x35ef,	// (0x000194c8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x35ef,	// (0x000194c8) cell_vkb2_top_candi_pane_g5

0x1c71,	// (0x00017b4a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c71,	// (0x00017b4a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00025cce) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00025cce) cell_vkb2_top_candi_pane_g

0x7862,	// (0x0001d73b) cell_vkb2_top_candi_pane_t1

0x6911,	// (0x0001c7ea) aid_size_touch_slider_mark_ParamLimits

0x6911,	// (0x0001c7ea) aid_size_touch_slider_mark

0xbb5b,	// (0x00021a34) grid_graphic2_catg_pane_ParamLimits

0xbb5b,	// (0x00021a34) grid_graphic2_catg_pane

0xbbef,	// (0x00021ac8) popup_grid_graphic2_window_t1_ParamLimits

0xbbef,	// (0x00021ac8) popup_grid_graphic2_window_t1

0xbc05,	// (0x00021ade) popup_grid_graphic2_window_t2_ParamLimits

0xbc05,	// (0x00021ade) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00025c8e) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00025c8e) popup_grid_graphic2_window_t

0xc998,	// (0x00022871) bg_button_pane_cp05_ParamLimits

0xbd53,	// (0x00021c2c) cell_graphic2_control_pane_g1_ParamLimits

0xbe28,	// (0x00021d01) cell_graphic2_catg_pane_ParamLimits

0xbe28,	// (0x00021d01) cell_graphic2_catg_pane

0xc2e1,	// (0x000221ba) bg_button_pane_cp12

0xbe3a,	// (0x00021d13) cell_graphic2_catg_pane_g1

0x1dad,	// (0x00017c86) cell_tb_ext_pane_t1_ParamLimits

0x733c,	// (0x0001d215) vkb2_top_cell_right_narrow_pane_ParamLimits

0x733c,	// (0x0001d215) vkb2_top_cell_right_narrow_pane

0x7354,	// (0x0001d22d) vkb2_top_cell_right_wide_pane_ParamLimits

0x7354,	// (0x0001d22d) vkb2_top_cell_right_wide_pane

0x0232,	// (0x0001610b) bg_vkb2_func_pane_ParamLimits

0x0232,	// (0x0001610b) bg_vkb2_func_pane

0x73c5,	// (0x0001d29e) vkb2_top_cell_left_pane_g1_ParamLimits

0x0232,	// (0x0001610b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0232,	// (0x0001610b) bg_vkb2_fuc_pane_cp03

0x7423,	// (0x0001d2fc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd92a,	// (0x00023803) bg_vkb2_func_pane_g1

0xd932,	// (0x0002380b) bg_vkb2_func_pane_g2

0xd942,	// (0x0002381b) bg_vkb2_func_pane_g3

0xd93a,	// (0x00023813) bg_vkb2_func_pane_g4

0xd94a,	// (0x00023823) bg_vkb2_func_pane_g5

0xd952,	// (0x0002382b) bg_vkb2_func_pane_g6

0xd95a,	// (0x00023833) bg_vkb2_func_pane_g7

0xd962,	// (0x0002383b) bg_vkb2_func_pane_g8

0xd922,	// (0x000237fb) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00025cdb) bg_vkb2_func_pane_g

0x0232,	// (0x0001610b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0232,	// (0x0001610b) bg_vkb2_fuc_pane_cp01

0x73c5,	// (0x0001d29e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73c5,	// (0x0001d29e) vkb2_top_cell_right_wide_pane_g1

0x0232,	// (0x0001610b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0232,	// (0x0001610b) bg_vkb2_fuc_pane_cp02

0x7423,	// (0x0001d2fc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7423,	// (0x0001d2fc) vkb2_top_cell_right_narrow_pane_g1

0xb024,	// (0x00020efd) aid_touch_area_decrease_ParamLimits

0xb024,	// (0x00020efd) aid_touch_area_decrease

0xb05e,	// (0x00020f37) aid_touch_area_increase_ParamLimits

0xb05e,	// (0x00020f37) aid_touch_area_increase

0xb086,	// (0x00020f5f) aid_touch_area_mute_ParamLimits

0xb086,	// (0x00020f5f) aid_touch_area_mute

0xb0b6,	// (0x00020f8f) aid_touch_area_slider_ParamLimits

0xb0b6,	// (0x00020f8f) aid_touch_area_slider

0xb0f6,	// (0x00020fcf) popup_slider_window_g4_ParamLimits

0xb0f6,	// (0x00020fcf) popup_slider_window_g4

0xb11e,	// (0x00020ff7) popup_slider_window_g5_ParamLimits

0xb11e,	// (0x00020ff7) popup_slider_window_g5

0xb152,	// (0x0002102b) popup_slider_window_g6_ParamLimits

0xb152,	// (0x0002102b) popup_slider_window_g6

0x1b87,	// (0x00017a60) popup_slider_window_t2_ParamLimits

0x1b87,	// (0x00017a60) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00025bdc) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00025bdc) popup_slider_window_t

0xb16e,	// (0x00021047) slider_pane_ParamLimits

0xb16e,	// (0x00021047) slider_pane

0x37c2,	// (0x0001969b) slider_pane_g1_ParamLimits

0x37c2,	// (0x0001969b) slider_pane_g1

0x37d6,	// (0x000196af) slider_pane_g2_ParamLimits

0x37d6,	// (0x000196af) slider_pane_g2

0x37ec,	// (0x000196c5) slider_pane_g3_ParamLimits

0x37ec,	// (0x000196c5) slider_pane_g3

0x0003,

0xfe15,	// (0x00025cee) slider_pane_g_ParamLimits

0xfe15,	// (0x00025cee) slider_pane_g

0x9dae,	// (0x0001fc87) popup_tb_float_extension_window_ParamLimits

0x9dae,	// (0x0001fc87) popup_tb_float_extension_window

0x3818,	// (0x000196f1) aid_size_cell_tb_float_ext

0xc2e1,	// (0x000221ba) bg_popup_sub_window_cp28

0x3824,	// (0x000196fd) grid_tb_float_ext_pane

0x382e,	// (0x00019707) cell_tb_float_ext_pane_ParamLimits

0x382e,	// (0x00019707) cell_tb_float_ext_pane

0x3848,	// (0x00019721) cell_tb_float_ext_pane_g1

0x3851,	// (0x0001972a) grid_highlight_pane_cp12

0xab89,	// (0x00020a62) cell_last_hwr_side_pane_ParamLimits

0xab89,	// (0x00020a62) cell_last_hwr_side_pane

0x016c,	// (0x00016045) cell_last_hwr_side_pane_g1

0x385a,	// (0x00019733) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00025cf7) cell_last_hwr_side_pane_g

0xba45,	// (0x0002191e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xba45,	// (0x0002191e) vkb2_area_bottom_space_btn_pane

0x0413,	// (0x000162ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x3693,	// (0x0001956c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7862,	// (0x0001d73b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x789c,	// (0x0001d775) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x789c,	// (0x0001d775) vkb2_area_bottom_space_btn_pane_g1

0x78d6,	// (0x0001d7af) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x78d6,	// (0x0001d7af) vkb2_area_bottom_space_btn_pane_g2

0x790c,	// (0x0001d7e5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x790c,	// (0x0001d7e5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00025cfc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00025cfc) vkb2_area_bottom_space_btn_pane_g

0x6b9b,	// (0x0001ca74) cel_fep_hwr_func_pane_ParamLimits

0x6b9b,	// (0x0001ca74) cel_fep_hwr_func_pane

0xab5e,	// (0x00020a37) cell_hwr_side_button_pane_ParamLimits

0xab5e,	// (0x00020a37) cell_hwr_side_button_pane

0x1de1,	// (0x00017cba) aid_area_touch_clock_ParamLimits

0xc484,	// (0x0002235d) bg_uniindi_top_pane_ParamLimits

0x1df3,	// (0x00017ccc) uniindi_top_pane_g1_ParamLimits

0x1e09,	// (0x00017ce2) uniindi_top_pane_g2_ParamLimits

0x1e15,	// (0x00017cee) uniindi_top_pane_g3_ParamLimits

0x1e26,	// (0x00017cff) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00025c14) uniindi_top_pane_g_ParamLimits

0x1e33,	// (0x00017d0c) uniindi_top_pane_t1_ParamLimits

0xc484,	// (0x0002235d) bg_vkb2_func_pane_cp01_ParamLimits

0xc484,	// (0x0002235d) bg_vkb2_func_pane_cp01

0x3863,	// (0x0001973c) cel_fep_hwr_func_pane_g1_ParamLimits

0x3863,	// (0x0001973c) cel_fep_hwr_func_pane_g1

0xc484,	// (0x0002235d) bg_vkb2_func_pane_cp02_ParamLimits

0xc484,	// (0x0002235d) bg_vkb2_func_pane_cp02

0x3863,	// (0x0001973c) cell_hwr_side_button_pane_g1_ParamLimits

0x3863,	// (0x0001973c) cell_hwr_side_button_pane_g1

0xd83a,	// (0x00023713) status_pane_g4_ParamLimits

0xd83a,	// (0x00023713) status_pane_g4

0xd852,	// (0x0002372b) status_pane_t1

0xf4f8,	// (0x000253d1) form2_midp_gauge_slider_cont_pane

0xf500,	// (0x000253d9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaa9d,	// (0x00020976) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaaaf,	// (0x00020988) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0e,	// (0x000259e7) form2_midp_gauge_slider_pane_t_ParamLimits

0xf512,	// (0x000253eb) form2_midp_slider_pane_ParamLimits

0x6f22,	// (0x0001cdfb) aid_size_cell_func_vkb2_ParamLimits

0x6f22,	// (0x0001cdfb) aid_size_cell_func_vkb2

0x3804,	// (0x000196dd) slider_pane_g4_ParamLimits

0x3804,	// (0x000196dd) slider_pane_g4

0xbe43,	// (0x00021d1c) form2_midp_gauge_slider_pane_t2_cp01

0xbe51,	// (0x00021d2a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbe51,	// (0x00021d2a) form2_midp_gauge_slider_pane_t3_cp01

0x7981,	// (0x0001d85a) form2_midp_slider_pane_cp01

0xc2e1,	// (0x000221ba) navi_smil_pane

0x3893,	// (0x0001976c) navi_smil_pane_g1

0x389b,	// (0x00019774) navi_smil_pane_t1

0x3871,	// (0x0001974a) form2_midp_slider_pane_g1

0x387a,	// (0x00019753) form2_midp_slider_pane_g2

0x3882,	// (0x0001975b) form2_midp_slider_pane_g3

0x3871,	// (0x0001974a) form2_midp_slider_pane_g4

0xbe6e,	// (0x00021d47) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00025d05) form2_midp_slider_pane_g

0x7946,	// (0x0001d81f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7946,	// (0x0001d81f) vkb2_area_bottom_space_btn_pane_g4

0x9f8a,	// (0x0001fe63) lc0_navi_pane_ParamLimits

0x9f8a,	// (0x0001fe63) lc0_navi_pane

0x9ff4,	// (0x0001fecd) lc0_stat_indi_pane_ParamLimits

0x9ff4,	// (0x0001fecd) lc0_stat_indi_pane

0xa009,	// (0x0001fee2) ls0_title_pane_ParamLimits

0xa009,	// (0x0001fee2) ls0_title_pane

0xc998,	// (0x00022871) bg_popup_sub_pane_cp14_ParamLimits

0x1dc8,	// (0x00017ca1) list_uniindi_pane_ParamLimits

0x1dd4,	// (0x00017cad) uniindi_top_pane_ParamLimits

0x1e6f,	// (0x00017d48) list_single_uniindi_pane_g1_ParamLimits

0x1e82,	// (0x00017d5b) list_single_uniindi_pane_t1_ParamLimits

0xbe77,	// (0x00021d50) lc0_stat_clock_pane_ParamLimits

0xbe77,	// (0x00021d50) lc0_stat_clock_pane

0xbe84,	// (0x00021d5d) lc0_stat_indi_pane_g1_ParamLimits

0xbe84,	// (0x00021d5d) lc0_stat_indi_pane_g1

0xbe91,	// (0x00021d6a) lc0_stat_indi_pane_g2_ParamLimits

0xbe91,	// (0x00021d6a) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00025d10) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00025d10) lc0_stat_indi_pane_g

0xbe9e,	// (0x00021d77) lc0_uni_indicator_pane_ParamLimits

0xbe9e,	// (0x00021d77) lc0_uni_indicator_pane

0xbeab,	// (0x00021d84) ls0_title_pane_g1_ParamLimits

0xbeab,	// (0x00021d84) ls0_title_pane_g1

0xbebf,	// (0x00021d98) ls0_title_pane_t1_ParamLimits

0xbebf,	// (0x00021d98) ls0_title_pane_t1

0xbeed,	// (0x00021dc6) lc0_uni_indicator_pane_g1_ParamLimits

0xbeed,	// (0x00021dc6) lc0_uni_indicator_pane_g1

0x38a9,	// (0x00019782) lc0_stat_clock_pane_t1

0xc2e1,	// (0x000221ba) main_ai5_pane

0x38b7,	// (0x00019790) ai5_sk_pane_ParamLimits

0x38b7,	// (0x00019790) ai5_sk_pane

0xbf1c,	// (0x00021df5) cell_ai5_widget_pane_ParamLimits

0xbf1c,	// (0x00021df5) cell_ai5_widget_pane

0x38c4,	// (0x0001979d) aid_size_cell_widget_grid

0x38d8,	// (0x000197b1) bg_ai5_widget_pane_ParamLimits

0x38d8,	// (0x000197b1) bg_ai5_widget_pane

0xbfa5,	// (0x00021e7e) cell_ai5_widget_pane_g2

0xbfb5,	// (0x00021e8e) cell_ai5_widget_pane_g3

0xbfc9,	// (0x00021ea2) cell_ai5_widget_pane_g4

0xbfd5,	// (0x00021eae) cell_ai5_widget_pane_g5

0xbfe1,	// (0x00021eba) cell_ai5_widget_pane_g6

0xbfed,	// (0x00021ec6) cell_ai5_widget_pane_g7

0xc035,	// (0x00021f0e) cell_ai5_widget_pane_t1_ParamLimits

0xc035,	// (0x00021f0e) cell_ai5_widget_pane_t1

0xc052,	// (0x00021f2b) cell_ai5_widget_pane_t2_ParamLimits

0xc052,	// (0x00021f2b) cell_ai5_widget_pane_t2

0xc06a,	// (0x00021f43) cell_ai5_widget_pane_t3_ParamLimits

0xc06a,	// (0x00021f43) cell_ai5_widget_pane_t3

0xc082,	// (0x00021f5b) cell_ai5_widget_pane_t4_ParamLimits

0xc082,	// (0x00021f5b) cell_ai5_widget_pane_t4

0xc09c,	// (0x00021f75) cell_ai5_widget_pane_t5_ParamLimits

0xc09c,	// (0x00021f75) cell_ai5_widget_pane_t5

0x38e4,	// (0x000197bd) cell_ai5_widget_pane_t6_ParamLimits

0x38e4,	// (0x000197bd) cell_ai5_widget_pane_t6

0x38f6,	// (0x000197cf) cell_ai5_widget_pane_t7_ParamLimits

0x38f6,	// (0x000197cf) cell_ai5_widget_pane_t7

0xc0bb,	// (0x00021f94) cell_ai5_widget_pane_t8_ParamLimits

0xc0bb,	// (0x00021f94) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00025d2a) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00025d2a) cell_ai5_widget_pane_t

0xc103,	// (0x00021fdc) grid_ai5_widget_pane

0xc998,	// (0x00022871) highlight_cell_ai5_widget_pane_ParamLimits

0xc998,	// (0x00022871) highlight_cell_ai5_widget_pane

0xc119,	// (0x00021ff2) ai5_sk_left_pane

0xc123,	// (0x00021ffc) ai5_sk_middle_pane

0xc12d,	// (0x00022006) ai5_sk_right_pane

0x390f,	// (0x000197e8) bg_ai5_widget_pane_g1_ParamLimits

0x390f,	// (0x000197e8) bg_ai5_widget_pane_g1

0x391b,	// (0x000197f4) bg_ai5_widget_pane_g2_ParamLimits

0x391b,	// (0x000197f4) bg_ai5_widget_pane_g2

0x3927,	// (0x00019800) bg_ai5_widget_pane_g3_ParamLimits

0x3927,	// (0x00019800) bg_ai5_widget_pane_g3

0x3933,	// (0x0001980c) bg_ai5_widget_pane_g4_ParamLimits

0x3933,	// (0x0001980c) bg_ai5_widget_pane_g4

0x393f,	// (0x00019818) bg_ai5_widget_pane_g5_ParamLimits

0x393f,	// (0x00019818) bg_ai5_widget_pane_g5

0x394b,	// (0x00019824) bg_ai5_widget_pane_g6_ParamLimits

0x394b,	// (0x00019824) bg_ai5_widget_pane_g6

0x3957,	// (0x00019830) bg_ai5_widget_pane_g7_ParamLimits

0x3957,	// (0x00019830) bg_ai5_widget_pane_g7

0x3963,	// (0x0001983c) bg_ai5_widget_pane_g8_ParamLimits

0x3963,	// (0x0001983c) bg_ai5_widget_pane_g8

0x396f,	// (0x00019848) bg_ai5_widget_pane_g9_ParamLimits

0x396f,	// (0x00019848) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00025d3f) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00025d3f) bg_ai5_widget_pane_g

0x39a2,	// (0x0001987b) cell_shortcut_ai5_widget_pane_ParamLimits

0x39a2,	// (0x0001987b) cell_shortcut_ai5_widget_pane

0xc38d,	// (0x00022266) bg_cell_shortcut_ai5_widget_pane

0x39b3,	// (0x0001988c) cell_grid_ai5_widget_pane_g1

0x39bc,	// (0x00019895) highlight_cell_shortcut_ai5_widget_pane

0xd932,	// (0x0002380b) ai5_sk_left_pane_g1

0x39c4,	// (0x0001989d) ai5_sk_left_pane_g2

0x39cc,	// (0x000198a5) ai5_sk_left_pane_g3

0x39d4,	// (0x000198ad) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00025d52) ai5_sk_left_pane_g

0x39dc,	// (0x000198b5) ai5_sk_left_pane_t1

0xd92a,	// (0x00023803) ai5_sk_right_pane_g1

0x39ea,	// (0x000198c3) ai5_sk_right_pane_g2

0x39f2,	// (0x000198cb) ai5_sk_right_pane_g3

0x39fa,	// (0x000198d3) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00025d5b) ai5_sk_right_pane_g

0x3a02,	// (0x000198db) ai5_sk_right_pane_t1

0xd92a,	// (0x00023803) ai5_sk_middle_pane_g1

0xd932,	// (0x0002380b) ai5_sk_middle_pane_g2

0xd94a,	// (0x00023823) ai5_sk_middle_pane_g3

0x39f2,	// (0x000198cb) ai5_sk_middle_pane_g4

0x39cc,	// (0x000198a5) ai5_sk_middle_pane_g5

0x3a10,	// (0x000198e9) ai5_sk_middle_pane_g6

0xc137,	// (0x00022010) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00025d64) ai5_sk_middle_pane_g

0x9e76,	// (0x0001fd4f) aid_touch_area_size_lc0_ParamLimits

0x9e76,	// (0x0001fd4f) aid_touch_area_size_lc0

0x6d26,	// (0x0001cbff) cell_hwr_candidate_pane_t1_ParamLimits

0xd75c,	// (0x00023635) aid_touch_navi_pane

0xa0fb,	// (0x0001ffd4) status_dt_navi_pane_ParamLimits

0xa0fb,	// (0x0001ffd4) status_dt_navi_pane

0xa113,	// (0x0001ffec) status_dt_sta_pane_ParamLimits

0xa113,	// (0x0001ffec) status_dt_sta_pane

0xc13f,	// (0x00022018) dt_sta_controll_pane

0xc14c,	// (0x00022025) dt_sta_indi_pane

0xc159,	// (0x00022032) dt_sta_title_pane

0xc484,	// (0x0002235d) bg_dt_sta_indi_pane_ParamLimits

0xc484,	// (0x0002235d) bg_dt_sta_indi_pane

0xc16b,	// (0x00022044) dt_sta_battery_pane

0xc173,	// (0x0002204c) dt_sta_indi_pane_g1

0x3a18,	// (0x000198f1) dt_sta_indi_pane_g2

0x3a21,	// (0x000198fa) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00025d73) dt_sta_indi_pane_g

0x3a2a,	// (0x00019903) dt_sta_signal_pane

0xc998,	// (0x00022871) bg_dt_sta_title_pane_ParamLimits

0xc998,	// (0x00022871) bg_dt_sta_title_pane

0xe5a4,	// (0x0002447d) dt_sta_title_pane_g1

0xc17c,	// (0x00022055) dt_sta_title_pane_t1_ParamLimits

0xc17c,	// (0x00022055) dt_sta_title_pane_t1

0xc2e1,	// (0x000221ba) bg_dt_sta_control_pane

0xc191,	// (0x0002206a) dt_sta_controll_pane_g1

0x3a33,	// (0x0001990c) bg_dt_sta_title_pane_g1

0x3a3c,	// (0x00019915) bg_dt_sta_title_pane_g2

0x3a45,	// (0x0001991e) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00025d7a) bg_dt_sta_title_pane_g

0x016c,	// (0x00016045) bg_dt_sta_indi_pane_g1

0x3a4e,	// (0x00019927) dt_sta_signal_pane_g1

0x3a56,	// (0x0001992f) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00025d81) dt_sta_signal_pane_g

0x3a5e,	// (0x00019937) dt_sta_battery_pane_g1

0x3a67,	// (0x00019940) dt_sta_battery_pane_t1

0x016c,	// (0x00016045) bg_dt_sta_control_pane_g1

0xcf49,	// (0x00022e22) fep_china_uni_eep_pane

0xcf51,	// (0x00022e2a) fep_china_uni_entry_pane_ParamLimits

0xcf61,	// (0x00022e3a) popup_fep_china_uni_window_g1_ParamLimits

0xcf71,	// (0x00022e4a) popup_fep_china_uni_window_g2_ParamLimits

0xcf71,	// (0x00022e4a) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x00025636) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x00025636) popup_fep_china_uni_window_g

0x3a76,	// (0x0001994f) fep_china_uni_eep_pane_g1

0x3a7e,	// (0x00019957) fep_china_uni_eep_pane_t1

0x388a,	// (0x00019763) aid_touch_area_size_smil_player

0xd80d,	// (0x000236e6) lc0_clock_pane

0xd846,	// (0x0002371f) status_pane_g5_ParamLimits

0xd846,	// (0x0002371f) status_pane_g5

0x9942,	// (0x0001f81b) popup_keymap_window

0xd826,	// (0x000236ff) status_icon_pane

0xbfb5,	// (0x00021e8e) cell_ai5_widget_pane_g3_ParamLimits

0xbfc9,	// (0x00021ea2) cell_ai5_widget_pane_g4_ParamLimits

0xbfd5,	// (0x00021eae) cell_ai5_widget_pane_g5_ParamLimits

0xbff9,	// (0x00021ed2) cell_ai5_widget_pane_g8_ParamLimits

0xbff9,	// (0x00021ed2) cell_ai5_widget_pane_g8

0xc00d,	// (0x00021ee6) cell_ai5_widget_pane_g9_ParamLimits

0xc00d,	// (0x00021ee6) cell_ai5_widget_pane_g9

0xc021,	// (0x00021efa) cell_ai5_widget_pane_g10_ParamLimits

0xc021,	// (0x00021efa) cell_ai5_widget_pane_g10

0x3a8d,	// (0x00019966) status_icon_pane_g1

0xc2e1,	// (0x000221ba) bg_popup_sub_pane_cp13

0x3a95,	// (0x0001996e) popup_keymap_window_t1

0x9676,	// (0x0001f54f) control_pane_g6_ParamLimits

0x9676,	// (0x0001f54f) control_pane_g6

0x9683,	// (0x0001f55c) control_pane_g7_ParamLimits

0x9683,	// (0x0001f55c) control_pane_g7

0x9690,	// (0x0001f569) control_pane_g8_ParamLimits

0x9690,	// (0x0001f569) control_pane_g8

0xc13f,	// (0x00022018) dt_sta_controll_pane_ParamLimits

0xc14c,	// (0x00022025) dt_sta_indi_pane_ParamLimits

0xc159,	// (0x00022032) dt_sta_title_pane_ParamLimits

0xc8da,	// (0x000227b3) aid_size_touch_scroll_bar_cale

0x5e5e,	// (0x0001bd37) popup_discreet_window_ParamLimits

0x5e5e,	// (0x0001bd37) popup_discreet_window

0x8f90,	// (0x0001ee69) popup_sk_window

0xde9e,	// (0x00023d77) bg_popup_sub_pane_cp28_ParamLimits

0xde9e,	// (0x00023d77) bg_popup_sub_pane_cp28

0x3aa3,	// (0x0001997c) popup_discreet_window_g1_ParamLimits

0x3aa3,	// (0x0001997c) popup_discreet_window_g1

0x3ac3,	// (0x0001999c) popup_discreet_window_t1_ParamLimits

0x3ac3,	// (0x0001999c) popup_discreet_window_t1

0x3ae1,	// (0x000199ba) popup_discreet_window_t2_ParamLimits

0x3ae1,	// (0x000199ba) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00025d86) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00025d86) popup_discreet_window_t

0x7ccb,	// (0x0001dba4) popup_sk_window_g1

0x7cd5,	// (0x0001dbae) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00025d8d) popup_sk_window_g

0x3b41,	// (0x00019a1a) popup_sk_window_t1

0x3b33,	// (0x00019a0c) popup_sk_window_t1_copy1

0xbfa5,	// (0x00021e7e) cell_ai5_widget_pane_g2_ParamLimits

0xc0cd,	// (0x00021fa6) cell_ai5_widget_pane_t9_ParamLimits

0xc0cd,	// (0x00021fa6) cell_ai5_widget_pane_t9

0xc2e1,	// (0x000221ba) main_fep_fshwr2_pane

0xc19a,	// (0x00022073) aid_fshwr2_btn_pane

0xc1a2,	// (0x0002207b) aid_fshwr2_syb_pane

0xc1aa,	// (0x00022083) aid_fshwr2_txt_pane

0xc1b2,	// (0x0002208b) fshwr2_func_candi_pane

0xc1bc,	// (0x00022095) fshwr2_hwr_syb_pane

0xc1ca,	// (0x000220a3) fshwr2_icf_pane

0xc2e1,	// (0x000221ba) fshwr2_icf_bg_pane

0xc1d4,	// (0x000220ad) fshwr2_icf_pane_t1_ParamLimits

0xc1d4,	// (0x000220ad) fshwr2_icf_pane_t1

0x016c,	// (0x00016045) fshwr2_func_candi_pane_g1

0x3b63,	// (0x00019a3c) fshwr2_func_candi_row_pane_ParamLimits

0x3b63,	// (0x00019a3c) fshwr2_func_candi_row_pane

0xc1ee,	// (0x000220c7) cell_fshwr2_syb_pane_ParamLimits

0xc1ee,	// (0x000220c7) cell_fshwr2_syb_pane

0x0413,	// (0x000162ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0413,	// (0x000162ec) fshwr2_hwr_syb_pane_g1

0xc2e1,	// (0x000221ba) bg_popup_call_pane_cp01

0x3b74,	// (0x00019a4d) fshwr2_func_candi_cell_pane_ParamLimits

0x3b74,	// (0x00019a4d) fshwr2_func_candi_cell_pane

0x3ba5,	// (0x00019a7e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3ba5,	// (0x00019a7e) fshwr2_func_candi_cell_bg_pane

0x3bbf,	// (0x00019a98) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x3bbf,	// (0x00019a98) fshwr2_func_candi_cell_pane_g1

0x3bdf,	// (0x00019ab8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x3bdf,	// (0x00019ab8) fshwr2_func_candi_cell_pane_t1

0xc2e1,	// (0x000221ba) bg_button_pane_cp08

0xd3da,	// (0x000232b3) cell_fshwr2_syb_bg_pane

0xc208,	// (0x000220e1) cell_fshwr2_syb_bg_pane_g1

0x3bf2,	// (0x00019acb) cell_fshwr2_syb_bg_pane_t1

0xc998,	// (0x00022871) main_tmo_pane

0xa612,	// (0x000204eb) uni_indicator_pane_g1_ParamLimits

0xa627,	// (0x00020500) uni_indicator_pane_g2_ParamLimits

0xa63c,	// (0x00020515) uni_indicator_pane_g3_ParamLimits

0xe868,	// (0x00024741) uni_indicator_pane_g4_ParamLimits

0xe868,	// (0x00024741) uni_indicator_pane_g4

0xe87c,	// (0x00024755) uni_indicator_pane_g5_ParamLimits

0xe87c,	// (0x00024755) uni_indicator_pane_g5

0xe890,	// (0x00024769) uni_indicator_pane_g6_ParamLimits

0xe890,	// (0x00024769) uni_indicator_pane_g6

0xf94e,	// (0x00025827) uni_indicator_pane_g_ParamLimits

0xb006,	// (0x00020edf) popup_tmo_note_window_ParamLimits

0xb006,	// (0x00020edf) popup_tmo_note_window

0xc2e1,	// (0x000221ba) fshwr2_bg_pane

0x3bd0,	// (0x00019aa9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x3bd0,	// (0x00019aa9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00025d92) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00025d92) fshwr2_func_candi_cell_pane_g

0x016c,	// (0x00016045) bg_popup_window_pane_cp01

0x3c01,	// (0x00019ada) bg_popup_window_pane_g1_cp01

0x3c0a,	// (0x00019ae3) bg_popup_window_pane_cp22_ParamLimits

0x3c0a,	// (0x00019ae3) bg_popup_window_pane_cp22

0x3c18,	// (0x00019af1) listscroll_tmo_link_pane_ParamLimits

0x3c18,	// (0x00019af1) listscroll_tmo_link_pane

0x3c58,	// (0x00019b31) popup_tmo_note_window_g1_ParamLimits

0x3c58,	// (0x00019b31) popup_tmo_note_window_g1

0x3c65,	// (0x00019b3e) tmo_note_info_pane_ParamLimits

0x3c65,	// (0x00019b3e) tmo_note_info_pane

0xc210,	// (0x000220e9) list_tmo_note_info_pane_g1_ParamLimits

0xc210,	// (0x000220e9) list_tmo_note_info_pane_g1

0x3c93,	// (0x00019b6c) list_tmo_note_info_pane_g2_ParamLimits

0x3c93,	// (0x00019b6c) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00025d97) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00025d97) list_tmo_note_info_pane_g

0x3caf,	// (0x00019b88) list_tmo_note_info_text_pane_ParamLimits

0x3caf,	// (0x00019b88) list_tmo_note_info_text_pane

0x3cf1,	// (0x00019bca) list_tmo_link_pane

0x3cfe,	// (0x00019bd7) scroll_pane_cp20

0x3d0b,	// (0x00019be4) list_single_tmo_link_pane_ParamLimits

0x3d0b,	// (0x00019be4) list_single_tmo_link_pane

0x3d1b,	// (0x00019bf4) list_single_tmo_link_pane_t1

0x3d29,	// (0x00019c02) list_tmo_note_info_text_pane_t1_ParamLimits

0x3d29,	// (0x00019c02) list_tmo_note_info_text_pane_t1

0x9355,	// (0x0001f22e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9355,	// (0x0001f22e) aid_size_touch_scroll_bar_cp01

0x8bda,	// (0x0001eab3) aid_size_touch_slider_marker

0x8f80,	// (0x0001ee59) popup_settings_window_ParamLimits

0x8f80,	// (0x0001ee59) popup_settings_window

0x53e2,	// (0x0001b2bb) popup_candi_list_indi_window

0xd75c,	// (0x00023635) aid_touch_navi_pane_ParamLimits

0x6e77,	// (0x0001cd50) rs_clock_indi_pane

0x6e80,	// (0x0001cd59) sctrl_sk_bottom_pane_ParamLimits

0x6e91,	// (0x0001cd6a) sctrl_sk_top_pane_ParamLimits

0x6f7c,	// (0x0001ce55) popup_fep_tooltip_window

0x38c4,	// (0x0001979d) aid_size_cell_widget_grid_ParamLimits

0xbf99,	// (0x00021e72) cell_ai5_widget_pane_g1_ParamLimits

0xbf99,	// (0x00021e72) cell_ai5_widget_pane_g1

0xbfe1,	// (0x00021eba) cell_ai5_widget_pane_g6_ParamLimits

0xbfed,	// (0x00021ec6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00025d15) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00025d15) cell_ai5_widget_pane_g

0xc0f1,	// (0x00021fca) cell_ai5_widget_pane_t10_ParamLimits

0xc0f1,	// (0x00021fca) cell_ai5_widget_pane_t10

0xc103,	// (0x00021fdc) grid_ai5_widget_pane_ParamLimits

0x397b,	// (0x00019854) cell_contacts_ai5_widget_pane_ParamLimits

0x397b,	// (0x00019854) cell_contacts_ai5_widget_pane

0x3af6,	// (0x000199cf) popup_discreet_window_t3_ParamLimits

0x3af6,	// (0x000199cf) popup_discreet_window_t3

0x3b4f,	// (0x00019a28) popup_fshwr2_char_preview_window_ParamLimits

0x3b4f,	// (0x00019a28) popup_fshwr2_char_preview_window

0xc227,	// (0x00022100) tmo_note_info_pane_t1

0xc23c,	// (0x00022115) tmo_note_info_pane_t2

0xc255,	// (0x0002212e) tmo_note_info_pane_t3

0x3ccd,	// (0x00019ba6) tmo_note_info_pane_t4

0x3cdf,	// (0x00019bb8) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00025d9c) tmo_note_info_pane_t

0x3cf1,	// (0x00019bca) list_tmo_link_pane_ParamLimits

0x3cfe,	// (0x00019bd7) scroll_pane_cp20_ParamLimits

0xc2e1,	// (0x000221ba) bg_popup_fep_char_preview_window_cp01

0x3d42,	// (0x00019c1b) popup_fshwr2_char_preview_window_t1

0x3d50,	// (0x00019c29) popup_candi_list_indi_window_g1

0x3d59,	// (0x00019c32) bg_cell_contacts_ai5_widget_pane

0x3d65,	// (0x00019c3e) cell_contacts_ai5_widget_pane_g1

0x3d79,	// (0x00019c52) cell_contacts_ai5_widget_pane_g2

0x3d88,	// (0x00019c61) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00025da7) cell_contacts_ai5_widget_pane_g

0x3d9b,	// (0x00019c74) cell_contacts_ai5_widget_pane_t1

0xc998,	// (0x00022871) highlight_cell_shortcut_ai5_widget_pane_cp01

0x3e15,	// (0x00019cee) settings_container_pane

0xd3da,	// (0x000232b3) listscroll_set_pane_copy1

0xf08b,	// (0x00024f64) scroll_pane_cp121_copy1

0x3e21,	// (0x00019cfa) set_content_pane_copy1

0x3e29,	// (0x00019d02) aid_height_set_list_copy1_ParamLimits

0x3e29,	// (0x00019d02) aid_height_set_list_copy1

0xe8cf,	// (0x000247a8) aid_size_parent_copy1_ParamLimits

0xe8cf,	// (0x000247a8) aid_size_parent_copy1

0x3e35,	// (0x00019d0e) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3e35,	// (0x00019d0e) button_value_adjust_pane_cp6_copy1

0xcaef,	// (0x000229c8) list_highlight_pane_cp2_copy1_ParamLimits

0xcaef,	// (0x000229c8) list_highlight_pane_cp2_copy1

0x3e49,	// (0x00019d22) list_set_pane_copy1_ParamLimits

0x3e49,	// (0x00019d22) list_set_pane_copy1

0x3db0,	// (0x00019c89) main_pane_set_t1_copy1_ParamLimits

0x3db0,	// (0x00019c89) main_pane_set_t1_copy1

0x3dea,	// (0x00019cc3) main_pane_set_t2_copy1_ParamLimits

0x3dea,	// (0x00019cc3) main_pane_set_t2_copy1

0x3ef6,	// (0x00019dcf) main_pane_set_t3_copy1

0x3f04,	// (0x00019ddd) main_pane_set_t4_copy1

0x3e09,	// (0x00019ce2) set_content_pane_g1_copy1_ParamLimits

0x3e09,	// (0x00019ce2) set_content_pane_g1_copy1

0x3f12,	// (0x00019deb) setting_code_pane_copy1

0x3f1c,	// (0x00019df5) setting_slider_graphic_pane_copy1

0x3f1c,	// (0x00019df5) setting_slider_pane_copy1

0x3f26,	// (0x00019dff) setting_text_pane_copy1

0x3f30,	// (0x00019e09) setting_volume_pane_copy1

0x3f39,	// (0x00019e12) settings_code_pane_cp2_copy1

0x3f41,	// (0x00019e1a) settings_code_pane_cp_copy1_ParamLimits

0x3f41,	// (0x00019e1a) settings_code_pane_cp_copy1

0x3f55,	// (0x00019e2e) volume_set_pane_copy1

0x3f5d,	// (0x00019e36) volume_set_pane_g10_copy1

0x3f65,	// (0x00019e3e) volume_set_pane_g1_copy1

0x3f6d,	// (0x00019e46) volume_set_pane_g2_copy1

0x3f75,	// (0x00019e4e) volume_set_pane_g3_copy1

0x3f7d,	// (0x00019e56) volume_set_pane_g4_copy1

0x3f85,	// (0x00019e5e) volume_set_pane_g5_copy1

0x3f8d,	// (0x00019e66) volume_set_pane_g6_copy1

0x3f95,	// (0x00019e6e) volume_set_pane_g7_copy1

0x3f9d,	// (0x00019e76) volume_set_pane_g8_copy1

0x3fa5,	// (0x00019e7e) volume_set_pane_g9_copy1

0xc351,	// (0x0002222a) bg_set_opt_pane_cp_copy1_ParamLimits

0xc351,	// (0x0002222a) bg_set_opt_pane_cp_copy1

0x3fad,	// (0x00019e86) setting_slider_pane_t1_copy1_ParamLimits

0x3fad,	// (0x00019e86) setting_slider_pane_t1_copy1

0x3fcb,	// (0x00019ea4) setting_slider_pane_t2_copy1_ParamLimits

0x3fcb,	// (0x00019ea4) setting_slider_pane_t2_copy1

0x3fe5,	// (0x00019ebe) setting_slider_pane_t3_copy1_ParamLimits

0x3fe5,	// (0x00019ebe) setting_slider_pane_t3_copy1

0x3ffd,	// (0x00019ed6) slider_set_pane_copy1_ParamLimits

0x3ffd,	// (0x00019ed6) slider_set_pane_copy1

0xc9ff,	// (0x000228d8) set_opt_bg_pane_g1_copy2

0xca07,	// (0x000228e0) set_opt_bg_pane_g2_copy2

0x4013,	// (0x00019eec) set_opt_bg_pane_g3_copy2

0xca17,	// (0x000228f0) set_opt_bg_pane_g4_copy2

0xca1f,	// (0x000228f8) set_opt_bg_pane_g5_copy2

0xca27,	// (0x00022900) set_opt_bg_pane_g6_copy2

0x401d,	// (0x00019ef6) set_opt_bg_pane_g7_copy2

0x4025,	// (0x00019efe) set_opt_bg_pane_g8_copy2

0x402f,	// (0x00019f08) set_opt_bg_pane_g9_copy2

0x7dae,	// (0x0001dc87) aid_size_touch_slider_mark_copy1_ParamLimits

0x7dae,	// (0x0001dc87) aid_size_touch_slider_mark_copy1

0x4039,	// (0x00019f12) slider_set_pane_g1_copy1

0x7dc2,	// (0x0001dc9b) slider_set_pane_g2_copy1

0x6931,	// (0x0001c80a) slider_set_pane_g3_copy1_ParamLimits

0x6931,	// (0x0001c80a) slider_set_pane_g3_copy1

0x6945,	// (0x0001c81e) slider_set_pane_g4_copy1_ParamLimits

0x6945,	// (0x0001c81e) slider_set_pane_g4_copy1

0x695d,	// (0x0001c836) slider_set_pane_g5_copy1_ParamLimits

0x695d,	// (0x0001c836) slider_set_pane_g5_copy1

0x6931,	// (0x0001c80a) slider_set_pane_g6_copy1_ParamLimits

0x6931,	// (0x0001c80a) slider_set_pane_g6_copy1

0x7dca,	// (0x0001dca3) slider_set_pane_g7_copy1_ParamLimits

0x7dca,	// (0x0001dca3) slider_set_pane_g7_copy1

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp2_copy1

0x4042,	// (0x00019f1b) setting_slider_graphic_pane_g1_copy1

0x404b,	// (0x00019f24) setting_slider_graphic_pane_t1_copy1

0x405b,	// (0x00019f34) setting_slider_graphic_pane_t2_copy1

0x406b,	// (0x00019f44) slider_set_pane_cp_copy1

0x407b,	// (0x00019f54) input_focus_pane_cp1_copy1

0x4084,	// (0x00019f5d) list_set_text_pane_copy1

0x408c,	// (0x00019f65) setting_text_pane_g1_copy1

0x5bd1,	// (0x0001baaa) set_text_pane_t1_copy1

0x407b,	// (0x00019f54) input_focus_pane_cp2_copy1

0x408c,	// (0x00019f65) setting_code_pane_g1_copy1

0x40b2,	// (0x00019f8b) setting_code_pane_t1_copy1

0x3c7f,	// (0x00019b58) list_set_graphic_pane_copy1

0xc2f5,	// (0x000221ce) bg_set_opt_pane_cp4_copy1

0xd0dc,	// (0x00022fb5) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0dc,	// (0x00022fb5) list_set_graphic_pane_g1_copy1

0x40c0,	// (0x00019f99) list_set_graphic_pane_g2_copy1

0xd0f4,	// (0x00022fcd) list_set_graphic_pane_t1_copy1_ParamLimits

0xd0f4,	// (0x00022fcd) list_set_graphic_pane_t1_copy1

0x016c,	// (0x00016045) rs_clock_indi_pane_g1

0x40c8,	// (0x00019fa1) rs_clock_indi_pane_t1

0x40d6,	// (0x00019faf) rs_indi_pane

0x40de,	// (0x00019fb7) rs_indi_pane_g1

0x40e7,	// (0x00019fc0) rs_indi_pane_g2

0x40f0,	// (0x00019fc9) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00025dae) rs_indi_pane_g

0xd3da,	// (0x000232b3) bg_popup_preview_window_pane_cp03

0x40f9,	// (0x00019fd2) popup_fep_tooltip_window_t1

0x0ff9,	// (0x00016ed2) popup_note2_window_g2_ParamLimits

0x0ff9,	// (0x00016ed2) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x00025b53) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x00025b53) popup_note2_window_g

0x15db,	// (0x000174b4) bg_popup_sub_pane_cp11_ParamLimits

0x15e8,	// (0x000174c1) cell_ai3_links_pane_g1_ParamLimits

0x15ff,	// (0x000174d8) cell_ai3_links_pane_t1

0x5bd1,	// (0x0001baaa) set_text_pane_t1_copy1_ParamLimits

0xd2e9,	// (0x000231c2) cell_graphic_popup_pane_cp2_ParamLimits

0xd2e9,	// (0x000231c2) cell_graphic_popup_pane_cp2

0x4107,	// (0x00019fe0) cell_graphic_popup_pane_g1_cp2

0xc6ed,	// (0x000225c6) cell_graphic_popup_pane_g2_cp2

0x410f,	// (0x00019fe8) cell_graphic_popup_pane_g3_cp2

0x4117,	// (0x00019ff0) cell_graphic_popup_pane_t2_cp2

0xc6fe,	// (0x000225d7) grid_highlight_pane_cp3_cp2

0xcc99,	// (0x00022b72) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc998,	// (0x00022871) main_tmo_pane_ParamLimits

0xaffa,	// (0x00020ed3) popup_tmo_big_image_note_window

0xbf89,	// (0x00021e62) cell_ai5_widget_list_pane

0xbf91,	// (0x00021e6a) cell_ai5_widget_lrg_icon_pane

0xc227,	// (0x00022100) tmo_note_info_pane_t1_ParamLimits

0xc23c,	// (0x00022115) tmo_note_info_pane_t2_ParamLimits

0xc255,	// (0x0002212e) tmo_note_info_pane_t3_ParamLimits

0x3ccd,	// (0x00019ba6) tmo_note_info_pane_t4_ParamLimits

0x3cdf,	// (0x00019bb8) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00025d9c) tmo_note_info_pane_t_ParamLimits

0x3e15,	// (0x00019cee) settings_container_pane_ParamLimits

0x4073,	// (0x00019f4c) indicator_popup_pane_cp5

0x4073,	// (0x00019f4c) indicator_popup_pane_cp6

0x3c7f,	// (0x00019b58) list_set_graphic_pane_copy1_ParamLimits

0xc2e1,	// (0x000221ba) bg_popup_window_pane_cp23

0x4125,	// (0x00019ffe) popup_tmo_big_image_note_window_g1

0x4130,	// (0x0001a009) popup_tmo_big_image_note_window_t1

0x4140,	// (0x0001a019) popup_tmo_big_image_note_window_t2

0x4150,	// (0x0001a029) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00025db5) popup_tmo_big_image_note_window_t

0xc26a,	// (0x00022143) cell_ai5_widget_lrg_icon_pane_g1

0xc272,	// (0x0002214b) cell_ai5_widget_lrg_icon_pane_t1

0xc280,	// (0x00022159) cell_ai5_widget_list_row_pane_ParamLimits

0xc280,	// (0x00022159) cell_ai5_widget_list_row_pane

0xc299,	// (0x00022172) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xc299,	// (0x00022172) cell_ai5_widget_list_row_pane_g1

0xc2a6,	// (0x0002217f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xc2a6,	// (0x0002217f) cell_ai5_widget_list_row_pane_t1

0xc2be,	// (0x00022197) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xc2be,	// (0x00022197) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x00025dbc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00025dbc) cell_ai5_widget_list_row_pane_t

0xc2e1,	// (0x000221ba) main_fep_vtchi_ss_pane

0x4160,	// (0x0001a039) popup_fep_char_pre_window

0x4168,	// (0x0001a041) popup_fep_ituss_window

0x4173,	// (0x0001a04c) popup_fep_vkbss_window

0x417c,	// (0x0001a055) grid_vkbss_keypad_pane_ParamLimits

0x417c,	// (0x0001a055) grid_vkbss_keypad_pane

0x418c,	// (0x0001a065) ituss_keypad_pane

0x4194,	// (0x0001a06d) aid_vkbss_key_offset_ParamLimits

0x4194,	// (0x0001a06d) aid_vkbss_key_offset

0x41a3,	// (0x0001a07c) cell_vkbss_key_pane_ParamLimits

0x41a3,	// (0x0001a07c) cell_vkbss_key_pane

0x41b9,	// (0x0001a092) bg_cell_vkbss_key_g1_ParamLimits

0x41b9,	// (0x0001a092) bg_cell_vkbss_key_g1

0x41c5,	// (0x0001a09e) cell_vkbss_key_3p_pane_ParamLimits

0x41c5,	// (0x0001a09e) cell_vkbss_key_3p_pane

0x41df,	// (0x0001a0b8) cell_vkbss_key_g1_ParamLimits

0x41df,	// (0x0001a0b8) cell_vkbss_key_g1

0x41f9,	// (0x0001a0d2) cell_vkbss_key_t1_ParamLimits

0x41f9,	// (0x0001a0d2) cell_vkbss_key_t1

0x4224,	// (0x0001a0fd) cell_ituss_key_pane_ParamLimits

0x4224,	// (0x0001a0fd) cell_ituss_key_pane

0x4233,	// (0x0001a10c) bg_cell_ituss_key_g1_ParamLimits

0x4233,	// (0x0001a10c) bg_cell_ituss_key_g1

0x423f,	// (0x0001a118) cell_ituss_key_pane_g1_ParamLimits

0x423f,	// (0x0001a118) cell_ituss_key_pane_g1

0x424b,	// (0x0001a124) cell_ituss_key_pane_g2_ParamLimits

0x424b,	// (0x0001a124) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00025dc1) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00025dc1) cell_ituss_key_pane_g

0x425e,	// (0x0001a137) cell_ituss_key_t1_ParamLimits

0x425e,	// (0x0001a137) cell_ituss_key_t1

0x427c,	// (0x0001a155) cell_ituss_key_t2_ParamLimits

0x427c,	// (0x0001a155) cell_ituss_key_t2

0x429b,	// (0x0001a174) cell_ituss_key_t3_ParamLimits

0x429b,	// (0x0001a174) cell_ituss_key_t3

0x42ba,	// (0x0001a193) cell_ituss_key_t4_ParamLimits

0x42ba,	// (0x0001a193) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00025dc6) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00025dc6) cell_ituss_key_t

0x42d9,	// (0x0001a1b2) cell_vkbss_key_3p_pane_g1

0x42e1,	// (0x0001a1ba) cell_vkbss_key_3p_pane_g2

0x42e9,	// (0x0001a1c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00025dcf) cell_vkbss_key_3p_pane_g

0xc2e1,	// (0x000221ba) bg_popup_fep_char_preview_window_cp02

0x42f1,	// (0x0001a1ca) popup_fep_char_pre_window_t1

0xbf7f,	// (0x00021e58) main_ai5_sk_pane

0x3d59,	// (0x00019c32) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3d65,	// (0x00019c3e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3d79,	// (0x00019c52) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3d88,	// (0x00019c61) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00025da7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3d9b,	// (0x00019c74) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc998,	// (0x00022871) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc2d0,	// (0x000221a9) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
