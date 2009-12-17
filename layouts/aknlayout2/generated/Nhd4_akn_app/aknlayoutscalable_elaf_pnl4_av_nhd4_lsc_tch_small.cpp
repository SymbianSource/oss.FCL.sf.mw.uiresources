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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00015e6c };

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
0x8e52,	// (0x0001ecbe) Screen

0x8e5e,	// (0x0001ecca) application_window_ParamLimits

0x8e5e,	// (0x0001ecca) application_window

0xc2eb,	// (0x00022157) screen_g1

0x8e96,	// (0x0001ed02) area_bottom_pane_ParamLimits

0x8e96,	// (0x0001ed02) area_bottom_pane

0x5d0e,	// (0x0001bb7a) area_top_pane_ParamLimits

0x5d0e,	// (0x0001bb7a) area_top_pane

0x5da2,	// (0x0001bc0e) main_pane_ParamLimits

0x5da2,	// (0x0001bc0e) main_pane

0xc2f5,	// (0x00022161) misc_graphics

0x9eb8,	// (0x0001fd24) battery_pane_ParamLimits

0x9eb8,	// (0x0001fd24) battery_pane

0xe063,	// (0x00023ecf) bg_status_flat_pane_g8

0xe06b,	// (0x00023ed7) bg_status_flat_pane_g9

0xd7c9,	// (0x00023635) context_pane_ParamLimits

0xd7c9,	// (0x00023635) context_pane

0xa023,	// (0x0001fe8f) navi_pane_ParamLimits

0xa023,	// (0x0001fe8f) navi_pane

0xa09a,	// (0x0001ff06) signal_pane_ParamLimits

0xa09a,	// (0x0001ff06) signal_pane

0x0008,

0xf8a6,	// (0x00025712) bg_status_flat_pane_g

0xa12a,	// (0x0001ff96) status_pane_g1_ParamLimits

0xa12a,	// (0x0001ff96) status_pane_g1

0xa140,	// (0x0001ffac) status_pane_g2_ParamLimits

0xa140,	// (0x0001ffac) status_pane_g2

0xd82e,	// (0x0002369a) status_pane_g3_ParamLimits

0xd82e,	// (0x0002369a) status_pane_g3

0x0004,

0xf7e0,	// (0x0002564c) status_pane_g_ParamLimits

0xf7e0,	// (0x0002564c) status_pane_g

0xa14c,	// (0x0001ffb8) title_pane_ParamLimits

0xa14c,	// (0x0001ffb8) title_pane

0xa1ad,	// (0x00020019) uni_indicator_pane_ParamLimits

0xa1ad,	// (0x00020019) uni_indicator_pane

0xd5e8,	// (0x00023454) bg_list_pane_ParamLimits

0xd5e8,	// (0x00023454) bg_list_pane

0x53d9,	// (0x0001b245) find_pane

0x97a6,	// (0x0001f612) listscroll_app_pane_ParamLimits

0x97a6,	// (0x0001f612) listscroll_app_pane

0xd608,	// (0x00023474) listscroll_form_pane

0x53e1,	// (0x0001b24d) listscroll_gen_pane_ParamLimits

0x53e1,	// (0x0001b24d) listscroll_gen_pane

0xd608,	// (0x00023474) listscroll_set_pane

0xe87c,	// (0x000246e8) main_idle_act_pane

0xd3ce,	// (0x0002323a) main_idle_trad_pane

0xd3ce,	// (0x0002323a) main_list_empty_pane

0xd630,	// (0x0002349c) main_midp_pane

0xd63c,	// (0x000234a8) main_pane_g1_ParamLimits

0xd63c,	// (0x000234a8) main_pane_g1

0x97b2,	// (0x0001f61e) popup_ai_message_window_ParamLimits

0x97b2,	// (0x0001f61e) popup_ai_message_window

0x9843,	// (0x0001f6af) popup_fep_china_uni_window_ParamLimits

0x9843,	// (0x0001f6af) popup_fep_china_uni_window

0xd66e,	// (0x000234da) popup_fep_japan_candidate_window_ParamLimits

0xd66e,	// (0x000234da) popup_fep_japan_candidate_window

0xd68c,	// (0x000234f8) popup_fep_japan_predictive_window_ParamLimits

0xd68c,	// (0x000234f8) popup_fep_japan_predictive_window

0x989d,	// (0x0001f709) popup_find_window

0x98ba,	// (0x0001f726) popup_grid_graphic_window_ParamLimits

0x98ba,	// (0x0001f726) popup_grid_graphic_window

0xd6bc,	// (0x00023528) popup_large_graphic_colour_window

0x994c,	// (0x0001f7b8) popup_menu_window_ParamLimits

0x994c,	// (0x0001f7b8) popup_menu_window

0x9b18,	// (0x0001f984) popup_note_image_window

0x9ade,	// (0x0001f94a) popup_note_wait_window_ParamLimits

0x9ade,	// (0x0001f94a) popup_note_wait_window

0x9b30,	// (0x0001f99c) popup_note_window_ParamLimits

0x9b30,	// (0x0001f99c) popup_note_window

0x9bd6,	// (0x0001fa42) popup_query_code_window_ParamLimits

0x9bd6,	// (0x0001fa42) popup_query_code_window

0xd6e2,	// (0x0002354e) popup_query_data_code_window_ParamLimits

0xd6e2,	// (0x0002354e) popup_query_data_code_window

0x9c10,	// (0x0001fa7c) popup_query_data_window_ParamLimits

0x9c10,	// (0x0001fa7c) popup_query_data_window

0x9c86,	// (0x0001faf2) popup_query_sat_info_window_ParamLimits

0x9c86,	// (0x0001faf2) popup_query_sat_info_window

0x9d1d,	// (0x0001fb89) popup_snote_single_graphic_window_ParamLimits

0x9d1d,	// (0x0001fb89) popup_snote_single_graphic_window

0x9d1d,	// (0x0001fb89) popup_snote_single_text_window_ParamLimits

0x9d1d,	// (0x0001fb89) popup_snote_single_text_window

0xd6f9,	// (0x00023565) popup_sub_window_general

0xd73f,	// (0x000235ab) popup_window_general_ParamLimits

0xd73f,	// (0x000235ab) popup_window_general

0xd754,	// (0x000235c0) power_save_pane

0x963f,	// (0x0001f4ab) control_pane_g1_ParamLimits

0x963f,	// (0x0001f4ab) control_pane_g1

0x6512,	// (0x0001c37e) control_pane_g2_ParamLimits

0x6512,	// (0x0001c37e) control_pane_g2

0xd5c2,	// (0x0002342e) control_pane_g3_ParamLimits

0xd5c2,	// (0x0002342e) control_pane_g3

0x0007,

0xf7c8,	// (0x00025634) control_pane_g_ParamLimits

0xf7c8,	// (0x00025634) control_pane_g

0x969d,	// (0x0001f509) control_pane_t1_ParamLimits

0x969d,	// (0x0001f509) control_pane_t1

0x96fb,	// (0x0001f567) control_pane_t2_ParamLimits

0x96fb,	// (0x0001f567) control_pane_t2

0x0002,

0xf7d9,	// (0x00025645) control_pane_t_ParamLimits

0xf7d9,	// (0x00025645) control_pane_t

0xd4e3,	// (0x0002334f) navi_navi_volume_pane_cp1

0xd4ec,	// (0x00023358) status_small_icon_pane

0xd4f4,	// (0x00023360) status_small_pane_g1_ParamLimits

0xd4f4,	// (0x00023360) status_small_pane_g1

0xd528,	// (0x00023394) status_small_pane_g2_ParamLimits

0xd528,	// (0x00023394) status_small_pane_g2

0xd534,	// (0x000233a0) status_small_pane_g3_ParamLimits

0xd534,	// (0x000233a0) status_small_pane_g3

0xd540,	// (0x000233ac) status_small_pane_g4_ParamLimits

0xd540,	// (0x000233ac) status_small_pane_g4

0xd54c,	// (0x000233b8) status_small_pane_g5_ParamLimits

0xd54c,	// (0x000233b8) status_small_pane_g5

0xd55b,	// (0x000233c7) status_small_pane_g6_ParamLimits

0xd55b,	// (0x000233c7) status_small_pane_g6

0x0007,

0xf7b7,	// (0x00025623) status_small_pane_g_ParamLimits

0xf7b7,	// (0x00025623) status_small_pane_g

0xd58b,	// (0x000233f7) status_small_pane_t1

0xd5ae,	// (0x0002341a) status_small_wait_pane_ParamLimits

0xd5ae,	// (0x0002341a) status_small_wait_pane

0x94e0,	// (0x0001f34c) aid_levels_signal_ParamLimits

0x94e0,	// (0x0001f34c) aid_levels_signal

0x94f8,	// (0x0001f364) signal_pane_g1_ParamLimits

0x94f8,	// (0x0001f364) signal_pane_g1

0x9513,	// (0x0001f37f) signal_pane_g2_ParamLimits

0x9513,	// (0x0001f37f) signal_pane_g2

0x0001,

0xf74c,	// (0x000255b8) signal_pane_g_ParamLimits

0xf74c,	// (0x000255b8) signal_pane_g

0xcf12,	// (0x00022d7e) context_pane_g1

0x900f,	// (0x0001ee7b) title_pane_g1

0x9044,	// (0x0001eeb0) title_pane_t1

0xc30b,	// (0x00022177) title_pane_t2

0xc331,	// (0x0002219d) title_pane_t3

0x0002,

0xf59b,	// (0x00025407) title_pane_t

0xa1d5,	// (0x00020041) aid_levels_battery_ParamLimits

0xa1d5,	// (0x00020041) aid_levels_battery

0xa1f1,	// (0x0002005d) battery_pane_g1_ParamLimits

0xa1f1,	// (0x0002005d) battery_pane_g1

0xa20e,	// (0x0002007a) battery_pane_g2_ParamLimits

0xa20e,	// (0x0002007a) battery_pane_g2

0x0001,

0xf7eb,	// (0x00025657) battery_pane_g_ParamLimits

0xf7eb,	// (0x00025657) battery_pane_g

0xa612,	// (0x0002047e) uni_indicator_pane_g1

0xa627,	// (0x00020493) uni_indicator_pane_g2

0xa63c,	// (0x000204a8) uni_indicator_pane_g3

0x0005,

0xf94e,	// (0x000257ba) uni_indicator_pane_g

0xd23e,	// (0x000230aa) navi_icon_pane_ParamLimits

0xd23e,	// (0x000230aa) navi_icon_pane

0xd185,	// (0x00022ff1) navi_midp_pane

0xd25a,	// (0x000230c6) navi_navi_pane

0xd264,	// (0x000230d0) navi_text_pane_ParamLimits

0xd264,	// (0x000230d0) navi_text_pane

0xc2eb,	// (0x00022157) status_small_wait_pane_g1

0xc60c,	// (0x00022478) status_small_wait_pane_g2

0x0001,

0xf949,	// (0x000257b5) status_small_wait_pane_g

0xa5b1,	// (0x0002041d) navi_navi_icon_text_pane

0xa5b9,	// (0x00020425) navi_navi_pane_g1_ParamLimits

0xa5b9,	// (0x00020425) navi_navi_pane_g1

0xa5cb,	// (0x00020437) navi_navi_pane_g2_ParamLimits

0xa5cb,	// (0x00020437) navi_navi_pane_g2

0x0001,

0xf917,	// (0x00025783) navi_navi_pane_g_ParamLimits

0xf917,	// (0x00025783) navi_navi_pane_g

0xe5e6,	// (0x00024452) navi_navi_tabs_pane

0xa5dd,	// (0x00020449) navi_navi_text_pane

0xa5b1,	// (0x0002041d) navi_navi_volume_pane

0xa59f,	// (0x0002040b) navi_text_pane_t1

0xa593,	// (0x000203ff) navi_icon_pane_g1

0xe527,	// (0x00024393) navi_navi_text_pane_t1

0xa582,	// (0x000203ee) navi_navi_volume_pane_g1

0xa58a,	// (0x000203f6) volume_small_pane

0xa4de,	// (0x0002034a) navi_navi_icon_text_pane_g1

0xa4e6,	// (0x00020352) navi_navi_icon_text_pane_t1

0xd25a,	// (0x000230c6) navi_tabs_2_long_pane

0xd25a,	// (0x000230c6) navi_tabs_2_pane

0xd25a,	// (0x000230c6) navi_tabs_3_long_pane

0xd25a,	// (0x000230c6) navi_tabs_3_pane

0xd25a,	// (0x000230c6) navi_tabs_4_pane

0xa4be,	// (0x0002032a) tabs_2_active_pane_ParamLimits

0xa4be,	// (0x0002032a) tabs_2_active_pane

0xa4ce,	// (0x0002033a) tabs_2_passive_pane_ParamLimits

0xa4ce,	// (0x0002033a) tabs_2_passive_pane

0xa48c,	// (0x000202f8) tabs_3_active_pane_ParamLimits

0xa48c,	// (0x000202f8) tabs_3_active_pane

0xa49c,	// (0x00020308) tabs_3_passive_pane_ParamLimits

0xa49c,	// (0x00020308) tabs_3_passive_pane

0xa4ad,	// (0x00020319) tabs_3_passive_pane_cp_ParamLimits

0xa4ad,	// (0x00020319) tabs_3_passive_pane_cp

0xa448,	// (0x000202b4) tabs_4_active_pane_ParamLimits

0xa448,	// (0x000202b4) tabs_4_active_pane

0xa459,	// (0x000202c5) tabs_4_passive_pane_ParamLimits

0xa459,	// (0x000202c5) tabs_4_passive_pane

0xa46a,	// (0x000202d6) tabs_4_passive_pane_cp_ParamLimits

0xa46a,	// (0x000202d6) tabs_4_passive_pane_cp

0xa47b,	// (0x000202e7) tabs_4_passive_pane_cp2_ParamLimits

0xa47b,	// (0x000202e7) tabs_4_passive_pane_cp2

0xa428,	// (0x00020294) tabs_2_long_active_pane_ParamLimits

0xa428,	// (0x00020294) tabs_2_long_active_pane

0xa438,	// (0x000202a4) tabs_2_long_passive_pane_ParamLimits

0xa438,	// (0x000202a4) tabs_2_long_passive_pane

0xa3f3,	// (0x0002025f) tabs_3_long_active_pane_ParamLimits

0xa3f3,	// (0x0002025f) tabs_3_long_active_pane

0xa404,	// (0x00020270) tabs_3_long_passive_pane_ParamLimits

0xa404,	// (0x00020270) tabs_3_long_passive_pane

0xa417,	// (0x00020283) tabs_3_long_passive_pane_cp_ParamLimits

0xa417,	// (0x00020283) tabs_3_long_passive_pane_cp

0x6761,	// (0x0001c5cd) volume_small_pane_g1

0xa3a2,	// (0x0002020e) volume_small_pane_g2

0xa3ab,	// (0x00020217) volume_small_pane_g3

0xa3b4,	// (0x00020220) volume_small_pane_g4

0xa3bd,	// (0x00020229) volume_small_pane_g5

0xa3c6,	// (0x00020232) volume_small_pane_g6

0xa3cf,	// (0x0002023b) volume_small_pane_g7

0xa3d8,	// (0x00020244) volume_small_pane_g8

0xa3e1,	// (0x0002024d) volume_small_pane_g9

0xa3ea,	// (0x00020256) volume_small_pane_g10

0x0009,

0xf8e3,	// (0x0002574f) volume_small_pane_g

0xc343,	// (0x000221af) bg_active_tab_pane_cp2_ParamLimits

0xc343,	// (0x000221af) bg_active_tab_pane_cp2

0x90d0,	// (0x0001ef3c) tabs_3_active_pane_g1

0x90d8,	// (0x0001ef44) tabs_3_active_pane_t1

0xc343,	// (0x000221af) bg_passive_tab_pane_cp2_ParamLimits

0xc343,	// (0x000221af) bg_passive_tab_pane_cp2

0x90d0,	// (0x0001ef3c) tabs_3_passive_pane_g1

0x90d8,	// (0x0001ef44) tabs_3_passive_pane_t1

0xc343,	// (0x000221af) bg_active_tab_pane_cp3_ParamLimits

0xc343,	// (0x000221af) bg_active_tab_pane_cp3

0x90ea,	// (0x0001ef56) tabs_4_active_pane_g1

0x90f2,	// (0x0001ef5e) tabs_4_active_pane_t1

0xc343,	// (0x000221af) bg_passive_tab_pane_cp3_ParamLimits

0xc343,	// (0x000221af) bg_passive_tab_pane_cp3

0x90ea,	// (0x0001ef56) tabs_4_1_passive_pane_g1

0x90f2,	// (0x0001ef5e) tabs_4_1_passive_pane_t1

0xd630,	// (0x0002349c) list_highlight_pane_cp2

0xa6c9,	// (0x00020535) list_set_pane_ParamLimits

0xa6c9,	// (0x00020535) list_set_pane

0xa763,	// (0x000205cf) main_pane_set_t1_ParamLimits

0xa763,	// (0x000205cf) main_pane_set_t1

0xa783,	// (0x000205ef) main_pane_set_t2_ParamLimits

0xa783,	// (0x000205ef) main_pane_set_t2

0xa797,	// (0x00020603) main_pane_set_t3_ParamLimits

0xa797,	// (0x00020603) main_pane_set_t3

0xa7a9,	// (0x00020615) main_pane_set_t4_ParamLimits

0xa7a9,	// (0x00020615) main_pane_set_t4

0x0003,

0xf9b3,	// (0x0002581f) main_pane_set_t_ParamLimits

0xf9b3,	// (0x0002581f) main_pane_set_t

0xa7bb,	// (0x00020627) setting_code_pane

0xa7c3,	// (0x0002062f) setting_slider_graphic_pane

0xa7c3,	// (0x0002062f) setting_slider_pane

0xa7c3,	// (0x0002062f) setting_text_pane

0xa7c3,	// (0x0002062f) setting_volume_pane

0x5fd3,	// (0x0001be3f) volume_set_pane

0xc351,	// (0x000221bd) bg_set_opt_pane_cp

0x5fdb,	// (0x0001be47) setting_slider_pane_t1

0x5ff4,	// (0x0001be60) setting_slider_pane_t2

0x600d,	// (0x0001be79) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002540e) setting_slider_pane_t

0x6024,	// (0x0001be90) slider_set_pane

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp2

0xc35f,	// (0x000221cb) setting_slider_graphic_pane_g1

0x603a,	// (0x0001bea6) setting_slider_graphic_pane_t1

0x6049,	// (0x0001beb5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00025415) setting_slider_graphic_pane_t

0x6058,	// (0x0001bec4) slider_set_pane_cp

0xc2f5,	// (0x00022161) input_focus_pane_cp1

0xea4d,	// (0x000248b9) list_set_text_pane

0xc2eb,	// (0x00022157) setting_text_pane_g1

0xc2f5,	// (0x00022161) input_focus_pane_cp2

0xc2eb,	// (0x00022157) setting_code_pane_g1

0xc368,	// (0x000221d4) setting_code_pane_t1

0x4c8c,	// (0x0001aaf8) set_text_pane_t1_ParamLimits

0x4c8c,	// (0x0001aaf8) set_text_pane_t1

0xc9ff,	// (0x0002286b) set_opt_bg_pane_g1

0xca07,	// (0x00022873) set_opt_bg_pane_g2

0xea2d,	// (0x00024899) set_opt_bg_pane_g3

0xca17,	// (0x00022883) set_opt_bg_pane_g4

0xca1f,	// (0x0002288b) set_opt_bg_pane_g5

0xca27,	// (0x00022893) set_opt_bg_pane_g6

0xea35,	// (0x000248a1) set_opt_bg_pane_g7

0xea3d,	// (0x000248a9) set_opt_bg_pane_g8

0xea45,	// (0x000248b1) set_opt_bg_pane_g9

0x0008,

0xf9a0,	// (0x0002580c) set_opt_bg_pane_g

0xea20,	// (0x0002488c) slider_set_pane_g1

0x692f,	// (0x0001c79b) slider_set_pane_g2

0x0006,

0xf991,	// (0x000257fd) slider_set_pane_g

0x68cb,	// (0x0001c737) volume_set_pane_g1

0x68d3,	// (0x0001c73f) volume_set_pane_g2

0x68db,	// (0x0001c747) volume_set_pane_g3

0x68e3,	// (0x0001c74f) volume_set_pane_g4

0x68eb,	// (0x0001c757) volume_set_pane_g5

0x68f3,	// (0x0001c75f) volume_set_pane_g6

0x68fb,	// (0x0001c767) volume_set_pane_g7

0x6903,	// (0x0001c76f) volume_set_pane_g8

0x690b,	// (0x0001c777) volume_set_pane_g9

0x6913,	// (0x0001c77f) volume_set_pane_g10

0x0009,

0xf969,	// (0x000257d5) volume_set_pane_g

0x9104,	// (0x0001ef70) indicator_pane_ParamLimits

0x9104,	// (0x0001ef70) indicator_pane

0x912c,	// (0x0001ef98) main_idle_pane_g2_ParamLimits

0x912c,	// (0x0001ef98) main_idle_pane_g2

0x9164,	// (0x0001efd0) main_pane_idle_g1_ParamLimits

0x9164,	// (0x0001efd0) main_pane_idle_g1

0xc376,	// (0x000221e2) popup_clock_digital_analogue_window_ParamLimits

0xc376,	// (0x000221e2) popup_clock_digital_analogue_window

0x918b,	// (0x0001eff7) soft_indicator_pane_ParamLimits

0x918b,	// (0x0001eff7) soft_indicator_pane

0x91a5,	// (0x0001f011) wallpaper_pane_ParamLimits

0x91a5,	// (0x0001f011) wallpaper_pane

0xc2eb,	// (0x00022157) wallpaper_pane_g1

0x91b7,	// (0x0001f023) indicator_pane_g1_ParamLimits

0x91b7,	// (0x0001f023) indicator_pane_g1

0xeb94,	// (0x00024a00) navi_navi_icon_text_pane_srt_g1

0xc3a4,	// (0x00022210) soft_indicator_pane_t1

0xc3be,	// (0x0002222a) aid_ps_area_pane

0x91d0,	// (0x0001f03c) aid_ps_clock_pane

0xc3cf,	// (0x0002223b) aid_ps_indicator_pane

0xc3db,	// (0x00022247) indicator_ps_pane_ParamLimits

0xc3db,	// (0x00022247) indicator_ps_pane

0xc3ea,	// (0x00022256) power_save_pane_g1_ParamLimits

0xc3ea,	// (0x00022256) power_save_pane_g1

0xc3f6,	// (0x00022262) power_save_pane_g2_ParamLimits

0xc3f6,	// (0x00022262) power_save_pane_g2

0x5c02,	// (0x0001ba6e) aid_navinavi_width_pane

0xc3be,	// (0x0002222a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002541a) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002541a) power_save_pane_g

0xc404,	// (0x00022270) power_save_pane_t1_ParamLimits

0xc404,	// (0x00022270) power_save_pane_t1

0x91d0,	// (0x0001f03c) aid_ps_clock_pane_ParamLimits

0xc3cf,	// (0x0002223b) aid_ps_indicator_pane_ParamLimits

0xc416,	// (0x00022282) power_save_pane_t4_ParamLimits

0xc416,	// (0x00022282) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002541f) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002541f) power_save_pane_t

0xc440,	// (0x000222ac) power_save_t3_ParamLimits

0xc440,	// (0x000222ac) power_save_t3

0xc42b,	// (0x00022297) power_save_t2_ParamLimits

0xc42b,	// (0x00022297) power_save_t2

0xc455,	// (0x000222c1) indicator_ps_pane_g1

0x91de,	// (0x0001f04a) ai_gene_pane_ParamLimits

0x91de,	// (0x0001f04a) ai_gene_pane

0x91f5,	// (0x0001f061) ai_links_pane_ParamLimits

0x91f5,	// (0x0001f061) ai_links_pane

0x920d,	// (0x0001f079) indicator_pane_cp1_ParamLimits

0x920d,	// (0x0001f079) indicator_pane_cp1

0x921c,	// (0x0001f088) main_pane_idle_g1_cp_ParamLimits

0x921c,	// (0x0001f088) main_pane_idle_g1_cp

0xc45e,	// (0x000222ca) popup_ai_links_title_window

0x9234,	// (0x0001f0a0) soft_indicator_pane_cp1_ParamLimits

0x9234,	// (0x0001f0a0) soft_indicator_pane_cp1

0xe856,	// (0x000246c2) ai_links_pane_g1

0xe85f,	// (0x000246cb) grid_ai_links_pane

0xa609,	// (0x00020475) ai_gene_pane_1

0xe844,	// (0x000246b0) ai_gene_pane_2

0xe84d,	// (0x000246b9) list_highlight_pane_cp4

0xa5e5,	// (0x00020451) cell_ai_link_pane_ParamLimits

0xa5e5,	// (0x00020451) cell_ai_link_pane

0xe83c,	// (0x000246a8) cell_ai_link_pane_g1

0xc60c,	// (0x00022478) cell_ai_link_pane_g2

0x0001,

0xf944,	// (0x000257b0) cell_ai_link_pane_g

0xc2f5,	// (0x00022161) grid_highlight_cp2

0xc2f5,	// (0x00022161) bg_popup_sub_pane_cp1

0xc475,	// (0x000222e1) popup_ai_links_title_window_t1

0xe78a,	// (0x000245f6) ai_gene_pane_1_g1_ParamLimits

0xe78a,	// (0x000245f6) ai_gene_pane_1_g1

0xe796,	// (0x00024602) ai_gene_pane_1_g2_ParamLimits

0xe796,	// (0x00024602) ai_gene_pane_1_g2

0x0001,

0xf93a,	// (0x000257a6) ai_gene_pane_1_g_ParamLimits

0xf93a,	// (0x000257a6) ai_gene_pane_1_g

0xe7a3,	// (0x0002460f) ai_gene_pane_1_t1_ParamLimits

0xe7a3,	// (0x0002460f) ai_gene_pane_1_t1

0xe7d7,	// (0x00024643) grid_ai_soft_ind_pane

0xe775,	// (0x000245e1) ai_gene_pane_2_t1_ParamLimits

0xe775,	// (0x000245e1) ai_gene_pane_2_t1

0x9248,	// (0x0001f0b4) main_pane_empty_t1_ParamLimits

0x9248,	// (0x0001f0b4) main_pane_empty_t1

0x9260,	// (0x0001f0cc) main_pane_empty_t2_ParamLimits

0x9260,	// (0x0001f0cc) main_pane_empty_t2

0x9275,	// (0x0001f0e1) main_pane_empty_t3_ParamLimits

0x9275,	// (0x0001f0e1) main_pane_empty_t3

0x9287,	// (0x0001f0f3) main_pane_empty_t4_ParamLimits

0x9287,	// (0x0001f0f3) main_pane_empty_t4

0x9299,	// (0x0001f105) main_pane_empty_t5_ParamLimits

0x9299,	// (0x0001f105) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00025424) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00025424) main_pane_empty_t

0xca50,	// (0x000228bc) bg_popup_window_pane_ParamLimits

0xca50,	// (0x000228bc) bg_popup_window_pane

0xe535,	// (0x000243a1) find_popup_pane_cp2_ParamLimits

0xe535,	// (0x000243a1) find_popup_pane_cp2

0xe541,	// (0x000243ad) heading_pane_ParamLimits

0xe541,	// (0x000243ad) heading_pane

0xc2f5,	// (0x00022161) bg_popup_sub_pane

0xa503,	// (0x0002036f) bg_popup_window_pane_g1_ParamLimits

0xa503,	// (0x0002036f) bg_popup_window_pane_g1

0xa512,	// (0x0002037e) bg_popup_window_pane_g2_ParamLimits

0xa512,	// (0x0002037e) bg_popup_window_pane_g2

0xa51e,	// (0x0002038a) bg_popup_window_pane_g3_ParamLimits

0xa51e,	// (0x0002038a) bg_popup_window_pane_g3

0xa52a,	// (0x00020396) bg_popup_window_pane_g4_ParamLimits

0xa52a,	// (0x00020396) bg_popup_window_pane_g4

0xa539,	// (0x000203a5) bg_popup_window_pane_g5_ParamLimits

0xa539,	// (0x000203a5) bg_popup_window_pane_g5

0xa549,	// (0x000203b5) bg_popup_window_pane_g6_ParamLimits

0xa549,	// (0x000203b5) bg_popup_window_pane_g6

0xa555,	// (0x000203c1) bg_popup_window_pane_g7_ParamLimits

0xa555,	// (0x000203c1) bg_popup_window_pane_g7

0xa564,	// (0x000203d0) bg_popup_window_pane_g8_ParamLimits

0xa564,	// (0x000203d0) bg_popup_window_pane_g8

0xa573,	// (0x000203df) bg_popup_window_pane_g9_ParamLimits

0xa573,	// (0x000203df) bg_popup_window_pane_g9

0xe51b,	// (0x00024387) bg_popup_window_pane_g10_ParamLimits

0xe51b,	// (0x00024387) bg_popup_window_pane_g10

0x0009,

0xf902,	// (0x0002576e) bg_popup_window_pane_g_ParamLimits

0xf902,	// (0x0002576e) bg_popup_window_pane_g

0xe4d2,	// (0x0002433e) bg_popup_heading_pane_ParamLimits

0xe4d2,	// (0x0002433e) bg_popup_heading_pane

0x69b7,	// (0x0001c823) tabs_4_passive_pane_cp_srt_ParamLimits

0x69b7,	// (0x0001c823) tabs_4_passive_pane_cp_srt

0x69c9,	// (0x0001c835) tabs_4_passive_pane_srt_ParamLimits

0xe4e6,	// (0x00024352) heading_pane_g2

0x69c9,	// (0x0001c835) tabs_4_passive_pane_srt

0xda12,	// (0x0002387e) bg_passive_tab_pane_cp3_srt_ParamLimits

0xda12,	// (0x0002387e) bg_passive_tab_pane_cp3_srt

0xe4ee,	// (0x0002435a) heading_pane_t1_ParamLimits

0xe4ee,	// (0x0002435a) heading_pane_t1

0xe505,	// (0x00024371) heading_pane_t2_ParamLimits

0xe505,	// (0x00024371) heading_pane_t2

0x0001,

0xf8fd,	// (0x00025769) heading_pane_t_ParamLimits

0xf8fd,	// (0x00025769) heading_pane_t

0xe02b,	// (0x00023e97) bg_popup_heading_pane_g1

0xe0bc,	// (0x00023f28) bg_popup_heading_pane_g2

0xe0c6,	// (0x00023f32) bg_popup_heading_pane_g3

0xe0d0,	// (0x00023f3c) bg_popup_heading_pane_g4

0xe0da,	// (0x00023f46) bg_popup_heading_pane_g5

0xe0e4,	// (0x00023f50) bg_popup_heading_pane_g6

0xe0ec,	// (0x00023f58) bg_popup_heading_pane_g7

0xe0f4,	// (0x00023f60) bg_popup_heading_pane_g8

0xe0fe,	// (0x00023f6a) bg_popup_heading_pane_g9

0x0008,

0xf8b9,	// (0x00025725) bg_popup_heading_pane_g

0xd922,	// (0x0002378e) bg_popup_sub_pane_g1

0xd92a,	// (0x00023796) bg_popup_sub_pane_g2

0xd932,	// (0x0002379e) bg_popup_sub_pane_g3

0xd93a,	// (0x000237a6) bg_popup_sub_pane_g4

0xd942,	// (0x000237ae) bg_popup_sub_pane_g5

0xd94a,	// (0x000237b6) bg_popup_sub_pane_g6

0xd952,	// (0x000237be) bg_popup_sub_pane_g7

0xd95a,	// (0x000237c6) bg_popup_sub_pane_g8

0xd962,	// (0x000237ce) bg_popup_sub_pane_g9

0x0008,

0xf893,	// (0x000256ff) bg_popup_sub_pane_g

0xc343,	// (0x000221af) bg_popup_window_pane_cp5_ParamLimits

0xc343,	// (0x000221af) bg_popup_window_pane_cp5

0xc492,	// (0x000222fe) popup_note_window_g1_ParamLimits

0xc492,	// (0x000222fe) popup_note_window_g1

0xc49e,	// (0x0002230a) popup_note_window_t1_ParamLimits

0xc49e,	// (0x0002230a) popup_note_window_t1

0xc4b0,	// (0x0002231c) popup_note_window_t2_ParamLimits

0xc4b0,	// (0x0002231c) popup_note_window_t2

0xc4c2,	// (0x0002232e) popup_note_window_t3_ParamLimits

0xc4c2,	// (0x0002232e) popup_note_window_t3

0xc4d4,	// (0x00022340) popup_note_window_t4_ParamLimits

0xc4d4,	// (0x00022340) popup_note_window_t4

0xc4fc,	// (0x00022368) popup_note_window_t5_ParamLimits

0xc4fc,	// (0x00022368) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002542f) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002542f) popup_note_window_t

0xc520,	// (0x0002238c) bg_popup_window_pane_cp6_ParamLimits

0xc520,	// (0x0002238c) bg_popup_window_pane_cp6

0xdf9f,	// (0x00023e0b) popup_note_image_window_g1_ParamLimits

0xdf9f,	// (0x00023e0b) popup_note_image_window_g1

0xdfab,	// (0x00023e17) popup_note_image_window_g2_ParamLimits

0xdfab,	// (0x00023e17) popup_note_image_window_g2

0x0001,

0xf887,	// (0x000256f3) popup_note_image_window_g_ParamLimits

0xf887,	// (0x000256f3) popup_note_image_window_g

0xdfc4,	// (0x00023e30) popup_note_image_window_t1_ParamLimits

0xdfc4,	// (0x00023e30) popup_note_image_window_t1

0xdfdd,	// (0x00023e49) popup_note_image_window_t2_ParamLimits

0xdfdd,	// (0x00023e49) popup_note_image_window_t2

0xdff6,	// (0x00023e62) popup_note_image_window_t3_ParamLimits

0xdff6,	// (0x00023e62) popup_note_image_window_t3

0x0002,

0xf88c,	// (0x000256f8) popup_note_image_window_t_ParamLimits

0xf88c,	// (0x000256f8) popup_note_image_window_t

0xde7c,	// (0x00023ce8) bg_popup_window_pane_cp7_ParamLimits

0xde7c,	// (0x00023ce8) bg_popup_window_pane_cp7

0xdeac,	// (0x00023d18) popup_note_wait_window_g1_ParamLimits

0xdeac,	// (0x00023d18) popup_note_wait_window_g1

0xdeb8,	// (0x00023d24) popup_note_wait_window_g2_ParamLimits

0xdeb8,	// (0x00023d24) popup_note_wait_window_g2

0x0002,

0xf875,	// (0x000256e1) popup_note_wait_window_g_ParamLimits

0xf875,	// (0x000256e1) popup_note_wait_window_g

0xded0,	// (0x00023d3c) popup_note_wait_window_t1_ParamLimits

0xded0,	// (0x00023d3c) popup_note_wait_window_t1

0xdef7,	// (0x00023d63) popup_note_wait_window_t2_ParamLimits

0xdef7,	// (0x00023d63) popup_note_wait_window_t2

0xdf14,	// (0x00023d80) popup_note_wait_window_t3_ParamLimits

0xdf14,	// (0x00023d80) popup_note_wait_window_t3

0xdf27,	// (0x00023d93) popup_note_wait_window_t4_ParamLimits

0xdf27,	// (0x00023d93) popup_note_wait_window_t4

0x0004,

0xf87c,	// (0x000256e8) popup_note_wait_window_t_ParamLimits

0xf87c,	// (0x000256e8) popup_note_wait_window_t

0xdf4c,	// (0x00023db8) wait_bar_pane_ParamLimits

0xdf4c,	// (0x00023db8) wait_bar_pane

0xc2f5,	// (0x00022161) wait_anim_pane

0xc2f5,	// (0x00022161) wait_border_pane

0xc2eb,	// (0x00022157) wait_anim_pane_g1

0xc2eb,	// (0x00022157) wait_anim_pane_g2

0x0001,

0xf747,	// (0x000255b3) wait_anim_pane_g

0xde20,	// (0x00023c8c) wait_border_pane_g1

0xde2b,	// (0x00023c97) wait_border_pane_g2

0xde34,	// (0x00023ca0) wait_border_pane_g3

0x0002,

0xf86e,	// (0x000256da) wait_border_pane_g

0xdd82,	// (0x00023bee) bg_popup_window_pane_cp16_ParamLimits

0xdd82,	// (0x00023bee) bg_popup_window_pane_cp16

0xdd90,	// (0x00023bfc) indicator_popup_pane_cp4_ParamLimits

0xdd90,	// (0x00023bfc) indicator_popup_pane_cp4

0xdda4,	// (0x00023c10) popup_query_data_window_t1_ParamLimits

0xdda4,	// (0x00023c10) popup_query_data_window_t1

0xddb6,	// (0x00023c22) popup_query_data_window_t2_ParamLimits

0xddb6,	// (0x00023c22) popup_query_data_window_t2

0xddcf,	// (0x00023c3b) popup_query_data_window_t3_ParamLimits

0xddcf,	// (0x00023c3b) popup_query_data_window_t3

0x0002,

0xf867,	// (0x000256d3) popup_query_data_window_t_ParamLimits

0xf867,	// (0x000256d3) popup_query_data_window_t

0xdde9,	// (0x00023c55) query_popup_data_pane_ParamLimits

0xdde9,	// (0x00023c55) query_popup_data_pane

0xddfd,	// (0x00023c69) query_popup_data_pane_cp1_ParamLimits

0xddfd,	// (0x00023c69) query_popup_data_pane_cp1

0xc520,	// (0x0002238c) bg_popup_window_pane_cp10_ParamLimits

0xc520,	// (0x0002238c) bg_popup_window_pane_cp10

0xdce5,	// (0x00023b51) indicator_popup_pane_ParamLimits

0xdce5,	// (0x00023b51) indicator_popup_pane

0xc577,	// (0x000223e3) popup_query_code_window_t1_ParamLimits

0xc577,	// (0x000223e3) popup_query_code_window_t1

0xdcfd,	// (0x00023b69) popup_query_code_window_t2_ParamLimits

0xdcfd,	// (0x00023b69) popup_query_code_window_t2

0xdd3b,	// (0x00023ba7) popup_query_code_window_t3_ParamLimits

0xdd3b,	// (0x00023ba7) popup_query_code_window_t3

0x0002,

0xf860,	// (0x000256cc) popup_query_code_window_t_ParamLimits

0xf860,	// (0x000256cc) popup_query_code_window_t

0xdd6a,	// (0x00023bd6) query_popup_pane_ParamLimits

0xdd6a,	// (0x00023bd6) query_popup_pane

0xc520,	// (0x0002238c) bg_popup_window_pane_cp15_ParamLimits

0xc520,	// (0x0002238c) bg_popup_window_pane_cp15

0xc53e,	// (0x000223aa) indicator_popup_pane_cp1_ParamLimits

0xc53e,	// (0x000223aa) indicator_popup_pane_cp1

0xc551,	// (0x000223bd) indicator_popup_pane_cp2_ParamLimits

0xc551,	// (0x000223bd) indicator_popup_pane_cp2

0xc564,	// (0x000223d0) popup_query_data_code_window_g1_ParamLimits

0xc564,	// (0x000223d0) popup_query_data_code_window_g1

0xc577,	// (0x000223e3) popup_query_data_code_window_t1_ParamLimits

0xc577,	// (0x000223e3) popup_query_data_code_window_t1

0xc589,	// (0x000223f5) popup_query_data_code_window_t2_ParamLimits

0xc589,	// (0x000223f5) popup_query_data_code_window_t2

0xc59b,	// (0x00022407) popup_query_data_code_window_t3_ParamLimits

0xc59b,	// (0x00022407) popup_query_data_code_window_t3

0xc5b1,	// (0x0002241d) popup_query_data_code_window_t4_ParamLimits

0xc5b1,	// (0x0002241d) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002543a) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002543a) popup_query_data_code_window_t

0xd1fa,	// (0x00023066) list_single_midp_graphic_pane_g3

0xc5c9,	// (0x00022435) query_popup_data_pane_cp2_ParamLimits

0xc5dc,	// (0x00022448) query_popup_pane_cp2_ParamLimits

0xc5dc,	// (0x00022448) query_popup_pane_cp2

0xc2f5,	// (0x00022161) bg_popup_window_pane_cp11

0xdcb9,	// (0x00023b25) heading_pane_cp5

0xc66a,	// (0x000224d6) listscroll_popup_info_pane

0xc2f5,	// (0x00022161) input_focus_pane_cp3

0xc5ef,	// (0x0002245b) query_popup_pane_t1

0xc5fd,	// (0x00022469) list_popup_info_pane_ParamLimits

0xc5fd,	// (0x00022469) list_popup_info_pane

0xc60c,	// (0x00022478) listscroll_popup_info_pane_g1

0xc614,	// (0x00022480) scroll_pane_cp7

0xc61e,	// (0x0002248a) popup_info_list_pane_t1_ParamLimits

0xc61e,	// (0x0002248a) popup_info_list_pane_t1

0xc638,	// (0x000224a4) popup_info_list_pane_t2_ParamLimits

0xc638,	// (0x000224a4) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00025443) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00025443) popup_info_list_pane_t

0xc2f5,	// (0x00022161) bg_popup_window_pane_cp12

0xebae,	// (0x00024a1a) find_popup_pane

0xc351,	// (0x000221bd) bg_popup_window_pane_cp3

0xc652,	// (0x000224be) heading_pane_cp3

0xc65e,	// (0x000224ca) listscroll_popup_graphic_pane

0xc2f5,	// (0x00022161) bg_popup_window_pane_cp4

0x92fb,	// (0x0001f167) heading_pane_cp4

0xc66a,	// (0x000224d6) listscroll_popup_colour_pane

0xc672,	// (0x000224de) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc672,	// (0x000224de) cell_large_graphic_colour_none_popup_pane

0x9303,	// (0x0001f16f) grid_large_graphic_colour_popup_pane_ParamLimits

0x9303,	// (0x0001f16f) grid_large_graphic_colour_popup_pane

0xc686,	// (0x000224f2) listscroll_popup_colour_pane_g1_ParamLimits

0xc686,	// (0x000224f2) listscroll_popup_colour_pane_g1

0xc69d,	// (0x00022509) listscroll_popup_colour_pane_g2_ParamLimits

0xc69d,	// (0x00022509) listscroll_popup_colour_pane_g2

0xc6b4,	// (0x00022520) listscroll_popup_colour_pane_g3_ParamLimits

0xc6b4,	// (0x00022520) listscroll_popup_colour_pane_g3

0x9327,	// (0x0001f193) listscroll_popup_colour_pane_g4_ParamLimits

0x9327,	// (0x0001f193) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x00025448) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x00025448) listscroll_popup_colour_pane_g

0xc6c4,	// (0x00022530) scroll_pane_cp6_ParamLimits

0xc6c4,	// (0x00022530) scroll_pane_cp6

0x9336,	// (0x0001f1a2) cell_large_graphic_colour_popup_pane_ParamLimits

0x9336,	// (0x0001f1a2) cell_large_graphic_colour_popup_pane

0xc6d6,	// (0x00022542) cell_large_graphic_colour_none_popup_pane_t1

0xc2f5,	// (0x00022161) grid_highlight_pane_cp5

0xc6e5,	// (0x00022551) cell_large_graphic_colour_popup_pane_g1

0xc6ed,	// (0x00022559) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00025451) cell_large_graphic_colour_popup_pane_g

0xc6f5,	// (0x00022561) cell_large_graphic_colour_popup_pane_g2_copy1

0xc6fe,	// (0x0002256a) grid_highlight_pane_cp4

0xc706,	// (0x00022572) bg_popup_window_pane_cp8_ParamLimits

0xc706,	// (0x00022572) bg_popup_window_pane_cp8

0xc721,	// (0x0002258d) popup_snote_single_text_window_g1_ParamLimits

0xc721,	// (0x0002258d) popup_snote_single_text_window_g1

0xc733,	// (0x0002259f) popup_snote_single_text_window_t1_ParamLimits

0xc733,	// (0x0002259f) popup_snote_single_text_window_t1

0xc746,	// (0x000225b2) popup_snote_single_text_window_t2_ParamLimits

0xc746,	// (0x000225b2) popup_snote_single_text_window_t2

0xc759,	// (0x000225c5) popup_snote_single_text_window_t3_ParamLimits

0xc759,	// (0x000225c5) popup_snote_single_text_window_t3

0xc792,	// (0x000225fe) popup_snote_single_text_window_t4_ParamLimits

0xc792,	// (0x000225fe) popup_snote_single_text_window_t4

0xc7c6,	// (0x00022632) popup_snote_single_text_window_t5_ParamLimits

0xc7c6,	// (0x00022632) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00025456) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00025456) popup_snote_single_text_window_t

0xc7f5,	// (0x00022661) bg_popup_window_pane_cp9_ParamLimits

0xc7f5,	// (0x00022661) bg_popup_window_pane_cp9

0xc721,	// (0x0002258d) popup_snote_single_graphic_window_g1_ParamLimits

0xc721,	// (0x0002258d) popup_snote_single_graphic_window_g1

0xc803,	// (0x0002266f) popup_snote_single_graphic_window_g2_ParamLimits

0xc803,	// (0x0002266f) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00025461) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00025461) popup_snote_single_graphic_window_g

0xc80f,	// (0x0002267b) popup_snote_single_graphic_window_t1_ParamLimits

0xc80f,	// (0x0002267b) popup_snote_single_graphic_window_t1

0xc822,	// (0x0002268e) popup_snote_single_graphic_window_t2_ParamLimits

0xc822,	// (0x0002268e) popup_snote_single_graphic_window_t2

0xc835,	// (0x000226a1) popup_snote_single_graphic_window_t3_ParamLimits

0xc835,	// (0x000226a1) popup_snote_single_graphic_window_t3

0xc86e,	// (0x000226da) popup_snote_single_graphic_window_t4_ParamLimits

0xc86e,	// (0x000226da) popup_snote_single_graphic_window_t4

0xc8a2,	// (0x0002270e) popup_snote_single_graphic_window_t5_ParamLimits

0xc8a2,	// (0x0002270e) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00025466) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00025466) popup_snote_single_graphic_window_t

0xeb32,	// (0x0002499e) grid_graphic_popup_pane_ParamLimits

0xeb32,	// (0x0002499e) grid_graphic_popup_pane

0xeb5e,	// (0x000249ca) listscroll_popup_graphic_pane_g1_ParamLimits

0xeb5e,	// (0x000249ca) listscroll_popup_graphic_pane_g1

0xa8d4,	// (0x00020740) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8d4,	// (0x00020740) listscroll_popup_graphic_pane_g2

0x0001,

0xf9dd,	// (0x00025849) listscroll_popup_graphic_pane_g_ParamLimits

0xf9dd,	// (0x00025849) listscroll_popup_graphic_pane_g

0xe88e,	// (0x000246fa) scroll_pane_cp5

0xa897,	// (0x00020703) cell_graphic_popup_pane_ParamLimits

0xa897,	// (0x00020703) cell_graphic_popup_pane

0xeafd,	// (0x00024969) cell_graphic_popup_pane_g1

0xeb05,	// (0x00024971) cell_graphic_popup_pane_g2

0xc6f5,	// (0x00022561) cell_graphic_popup_pane_g3

0x0002,

0xf9d6,	// (0x00025842) cell_graphic_popup_pane_g

0xeb0e,	// (0x0002497a) cell_graphic_popup_pane_t2

0xc6fe,	// (0x0002256a) grid_highlight_pane_cp3

0xc8e3,	// (0x0002274f) list_gen_pane_ParamLimits

0xc8e3,	// (0x0002274f) list_gen_pane

0xc90b,	// (0x00022777) scroll_pane

0xa852,	// (0x000206be) bg_list_pane_g1_ParamLimits

0xa852,	// (0x000206be) bg_list_pane_g1

0xeaac,	// (0x00024918) bg_list_pane_g2_ParamLimits

0xeaac,	// (0x00024918) bg_list_pane_g2

0xeabf,	// (0x0002492b) bg_list_pane_g3_ParamLimits

0xeabf,	// (0x0002492b) bg_list_pane_g3

0xead1,	// (0x0002493d) bg_list_pane_g4_ParamLimits

0xead1,	// (0x0002493d) bg_list_pane_g4

0xa86d,	// (0x000206d9) bg_list_pane_g5_ParamLimits

0xa86d,	// (0x000206d9) bg_list_pane_g5

0x0004,

0xf9cb,	// (0x00025837) bg_list_pane_g_ParamLimits

0xf9cb,	// (0x00025837) bg_list_pane_g

0xa805,	// (0x00020671) list_double2_graphic_large_graphic_pane_ParamLimits

0xa805,	// (0x00020671) list_double2_graphic_large_graphic_pane

0xa805,	// (0x00020671) list_double2_graphic_pane_ParamLimits

0xa805,	// (0x00020671) list_double2_graphic_pane

0xa805,	// (0x00020671) list_double2_large_graphic_pane_ParamLimits

0xa805,	// (0x00020671) list_double2_large_graphic_pane

0xa818,	// (0x00020684) list_double2_pane_ParamLimits

0xa818,	// (0x00020684) list_double2_pane

0xa805,	// (0x00020671) list_double_graphic_heading_pane_ParamLimits

0xa805,	// (0x00020671) list_double_graphic_heading_pane

0xa805,	// (0x00020671) list_double_graphic_pane_ParamLimits

0xa805,	// (0x00020671) list_double_graphic_pane

0xa805,	// (0x00020671) list_double_heading_pane_ParamLimits

0xa805,	// (0x00020671) list_double_heading_pane

0xa805,	// (0x00020671) list_double_large_graphic_pane_ParamLimits

0xa805,	// (0x00020671) list_double_large_graphic_pane

0xa805,	// (0x00020671) list_double_number_pane_ParamLimits

0xa805,	// (0x00020671) list_double_number_pane

0xa805,	// (0x00020671) list_double_pane_ParamLimits

0xa805,	// (0x00020671) list_double_pane

0xa805,	// (0x00020671) list_double_time_pane_ParamLimits

0xa805,	// (0x00020671) list_double_time_pane

0xa805,	// (0x00020671) list_setting_number_pane_ParamLimits

0xa805,	// (0x00020671) list_setting_number_pane

0xa805,	// (0x00020671) list_setting_pane_ParamLimits

0xa805,	// (0x00020671) list_setting_pane

0x8d18,	// (0x0001eb84) list_single_2graphic_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_2graphic_pane

0x8d18,	// (0x0001eb84) list_single_graphic_heading_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_graphic_heading_pane

0x8d18,	// (0x0001eb84) list_single_graphic_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_graphic_pane

0x8d18,	// (0x0001eb84) list_single_heading_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_heading_pane

0xa818,	// (0x00020684) list_single_large_graphic_pane_ParamLimits

0xa818,	// (0x00020684) list_single_large_graphic_pane

0x8d18,	// (0x0001eb84) list_single_number_heading_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_number_heading_pane

0x8d18,	// (0x0001eb84) list_single_number_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_number_pane

0x8d18,	// (0x0001eb84) list_single_pane_ParamLimits

0x8d18,	// (0x0001eb84) list_single_pane

0xc2f5,	// (0x00022161) list_highlight_pane_cp1

0x4cb2,	// (0x0001ab1e) list_single_pane_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_pane_g1

0x4cbe,	// (0x0001ab2a) list_single_pane_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_pane_g2

0x0001,

0xf60c,	// (0x00025478) list_single_pane_g_ParamLimits

0xf60c,	// (0x00025478) list_single_pane_g

0x5511,	// (0x0001b37d) list_single_pane_t1_ParamLimits

0x5511,	// (0x0001b37d) list_single_pane_t1

0x4cb2,	// (0x0001ab1e) list_single_number_pane_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_number_pane_g1

0x4cbe,	// (0x0001ab2a) list_single_number_pane_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x00025478) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x00025478) list_single_number_pane_g

0x5445,	// (0x0001b2b1) list_single_number_pane_t1_ParamLimits

0x5445,	// (0x0001b2b1) list_single_number_pane_t1

0x54d1,	// (0x0001b33d) list_single_number_pane_t2_ParamLimits

0x54d1,	// (0x0001b33d) list_single_number_pane_t2

0x0001,

0xf98c,	// (0x000257f8) list_single_number_pane_t_ParamLimits

0xf98c,	// (0x000257f8) list_single_number_pane_t

0x4ca6,	// (0x0001ab12) list_single_graphic_pane_g1_ParamLimits

0x4ca6,	// (0x0001ab12) list_single_graphic_pane_g1

0x4cb2,	// (0x0001ab1e) list_single_graphic_pane_g2_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_graphic_pane_g2

0x4cbe,	// (0x0001ab2a) list_single_graphic_pane_g3_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x00025471) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x00025471) list_single_graphic_pane_g

0x4cca,	// (0x0001ab36) list_single_graphic_pane_t1_ParamLimits

0x4cca,	// (0x0001ab36) list_single_graphic_pane_t1

0x4cb2,	// (0x0001ab1e) list_single_heading_pane_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_heading_pane_g1

0x4cbe,	// (0x0001ab2a) list_single_heading_pane_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00025478) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00025478) list_single_heading_pane_g

0x4ce0,	// (0x0001ab4c) list_single_heading_pane_t1_ParamLimits

0x4ce0,	// (0x0001ab4c) list_single_heading_pane_t1

0x4cf6,	// (0x0001ab62) list_single_heading_pane_t2_ParamLimits

0x4cf6,	// (0x0001ab62) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002547d) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002547d) list_single_heading_pane_t

0x4cb2,	// (0x0001ab1e) list_single_number_heading_pane_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_number_heading_pane_g1

0x4cbe,	// (0x0001ab2a) list_single_number_heading_pane_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x00025478) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x00025478) list_single_number_heading_pane_g

0x4ce0,	// (0x0001ab4c) list_single_number_heading_pane_t1_ParamLimits

0x4ce0,	// (0x0001ab4c) list_single_number_heading_pane_t1

0x4d08,	// (0x0001ab74) list_single_number_heading_pane_t2_ParamLimits

0x4d08,	// (0x0001ab74) list_single_number_heading_pane_t2

0x4d1a,	// (0x0001ab86) list_single_number_heading_pane_t3_ParamLimits

0x4d1a,	// (0x0001ab86) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x00025482) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x00025482) list_single_number_heading_pane_t

0x4d2c,	// (0x0001ab98) list_single_graphic_heading_pane_g1_ParamLimits

0x4d2c,	// (0x0001ab98) list_single_graphic_heading_pane_g1

0x87c6,	// (0x0001e632) list_single_graphic_heading_pane_g4_ParamLimits

0x87c6,	// (0x0001e632) list_single_graphic_heading_pane_g4

0x4cbe,	// (0x0001ab2a) list_single_graphic_heading_pane_g5_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x00025489) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00025489) list_single_graphic_heading_pane_g

0x4ce0,	// (0x0001ab4c) list_single_graphic_heading_pane_t1_ParamLimits

0x4ce0,	// (0x0001ab4c) list_single_graphic_heading_pane_t1

0x4d49,	// (0x0001abb5) list_single_graphic_heading_pane_t2_ParamLimits

0x4d49,	// (0x0001abb5) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x00025490) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x00025490) list_single_graphic_heading_pane_t

0x5656,	// (0x0001b4c2) list_single_large_graphic_pane_g1_ParamLimits

0x5656,	// (0x0001b4c2) list_single_large_graphic_pane_g1

0x5662,	// (0x0001b4ce) list_single_large_graphic_pane_g2_ParamLimits

0x5662,	// (0x0001b4ce) list_single_large_graphic_pane_g2

0x566e,	// (0x0001b4da) list_single_large_graphic_pane_g3_ParamLimits

0x566e,	// (0x0001b4da) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x00025495) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x00025495) list_single_large_graphic_pane_g

0xde2b,	// (0x00023c97) wait_border_pane_g2_copy1

0x87d7,	// (0x0001e643) list_single_large_graphic_pane_g4_cp2

0x567a,	// (0x0001b4e6) list_single_large_graphic_pane_t1_ParamLimits

0x567a,	// (0x0001b4e6) list_single_large_graphic_pane_t1

0x87df,	// (0x0001e64b) list_double_pane_g1_ParamLimits

0x87df,	// (0x0001e64b) list_double_pane_g1

0x87eb,	// (0x0001e657) list_double_pane_g2_ParamLimits

0x87eb,	// (0x0001e657) list_double_pane_g2

0x0001,

0xf630,	// (0x0002549c) list_double_pane_g_ParamLimits

0xf630,	// (0x0002549c) list_double_pane_g

0x87f7,	// (0x0001e663) list_double_pane_t1_ParamLimits

0x87f7,	// (0x0001e663) list_double_pane_t1

0x880d,	// (0x0001e679) list_double_pane_t2_ParamLimits

0x880d,	// (0x0001e679) list_double_pane_t2

0x0001,

0xf635,	// (0x000254a1) list_double_pane_t_ParamLimits

0xf635,	// (0x000254a1) list_double_pane_t

0x881f,	// (0x0001e68b) list_double2_pane_g1_ParamLimits

0x881f,	// (0x0001e68b) list_double2_pane_g1

0x4f82,	// (0x0001adee) list_double2_pane_g2_ParamLimits

0x4f82,	// (0x0001adee) list_double2_pane_g2

0x0001,

0xf63a,	// (0x000254a6) list_double2_pane_g_ParamLimits

0xf63a,	// (0x000254a6) list_double2_pane_g

0x8830,	// (0x0001e69c) list_double2_pane_t1_ParamLimits

0x8830,	// (0x0001e69c) list_double2_pane_t1

0x8846,	// (0x0001e6b2) list_double2_pane_t2_ParamLimits

0x8846,	// (0x0001e6b2) list_double2_pane_t2

0x0001,

0xf63f,	// (0x000254ab) list_double2_pane_t_ParamLimits

0xf63f,	// (0x000254ab) list_double2_pane_t

0x87df,	// (0x0001e64b) list_double_number_pane_g1_ParamLimits

0x87df,	// (0x0001e64b) list_double_number_pane_g1

0x87eb,	// (0x0001e657) list_double_number_pane_g2_ParamLimits

0x87eb,	// (0x0001e657) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002549c) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002549c) list_double_number_pane_g

0x8858,	// (0x0001e6c4) list_double_number_pane_t1_ParamLimits

0x8858,	// (0x0001e6c4) list_double_number_pane_t1

0x886a,	// (0x0001e6d6) list_double_number_pane_t2_ParamLimits

0x886a,	// (0x0001e6d6) list_double_number_pane_t2

0x8880,	// (0x0001e6ec) list_double_number_pane_t3_ParamLimits

0x8880,	// (0x0001e6ec) list_double_number_pane_t3

0x0002,

0xf644,	// (0x000254b0) list_double_number_pane_t_ParamLimits

0xf644,	// (0x000254b0) list_double_number_pane_t

0x8892,	// (0x0001e6fe) list_double_graphic_pane_g1_ParamLimits

0x8892,	// (0x0001e6fe) list_double_graphic_pane_g1

0x889e,	// (0x0001e70a) list_double_graphic_pane_g2_ParamLimits

0x889e,	// (0x0001e70a) list_double_graphic_pane_g2

0x88ad,	// (0x0001e719) list_double_graphic_pane_g3_ParamLimits

0x88ad,	// (0x0001e719) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x000254b7) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x000254b7) list_double_graphic_pane_g

0x88c5,	// (0x0001e731) list_double_graphic_pane_t1_ParamLimits

0x88c5,	// (0x0001e731) list_double_graphic_pane_t1

0x88db,	// (0x0001e747) list_double_graphic_pane_t2_ParamLimits

0x88db,	// (0x0001e747) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x000254c0) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x000254c0) list_double_graphic_pane_t

0x8892,	// (0x0001e6fe) list_double2_graphic_pane_g1_ParamLimits

0x8892,	// (0x0001e6fe) list_double2_graphic_pane_g1

0x88ed,	// (0x0001e759) list_double2_graphic_pane_g2_ParamLimits

0x88ed,	// (0x0001e759) list_double2_graphic_pane_g2

0x88f9,	// (0x0001e765) list_double2_graphic_pane_g3_ParamLimits

0x88f9,	// (0x0001e765) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x000254c5) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x000254c5) list_double2_graphic_pane_g

0x886a,	// (0x0001e6d6) list_double2_graphic_pane_t1_ParamLimits

0x886a,	// (0x0001e6d6) list_double2_graphic_pane_t1

0x8905,	// (0x0001e771) list_double2_graphic_pane_t2_ParamLimits

0x8905,	// (0x0001e771) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x000254cc) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x000254cc) list_double2_graphic_pane_t

0x8917,	// (0x0001e783) list_double_large_graphic_pane_g1_ParamLimits

0x8917,	// (0x0001e783) list_double_large_graphic_pane_g1

0x8942,	// (0x0001e7ae) list_double_large_graphic_pane_g2_ParamLimits

0x8942,	// (0x0001e7ae) list_double_large_graphic_pane_g2

0x87eb,	// (0x0001e657) list_double_large_graphic_pane_g3_ParamLimits

0x87eb,	// (0x0001e657) list_double_large_graphic_pane_g3

0x8953,	// (0x0001e7bf) list_double_large_graphic_pane_g4_ParamLimits

0x8953,	// (0x0001e7bf) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x000254d1) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x000254d1) list_double_large_graphic_pane_g

0x8965,	// (0x0001e7d1) list_double_large_graphic_pane_t1_ParamLimits

0x8965,	// (0x0001e7d1) list_double_large_graphic_pane_t1

0x897e,	// (0x0001e7ea) list_double_large_graphic_pane_t2_ParamLimits

0x897e,	// (0x0001e7ea) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x000254dc) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x000254dc) list_double_large_graphic_pane_t

0x8990,	// (0x0001e7fc) list_double2_large_graphic_pane_g1_ParamLimits

0x8990,	// (0x0001e7fc) list_double2_large_graphic_pane_g1

0x8942,	// (0x0001e7ae) list_double2_large_graphic_pane_g2_ParamLimits

0x8942,	// (0x0001e7ae) list_double2_large_graphic_pane_g2

0x87eb,	// (0x0001e657) list_double2_large_graphic_pane_g3_ParamLimits

0x87eb,	// (0x0001e657) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x000254e1) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x000254e1) list_double2_large_graphic_pane_g

0x899c,	// (0x0001e808) list_double2_large_graphic_pane_t1_ParamLimits

0x899c,	// (0x0001e808) list_double2_large_graphic_pane_t1

0x89b2,	// (0x0001e81e) list_double2_large_graphic_pane_t2_ParamLimits

0x89b2,	// (0x0001e81e) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x000254e8) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x000254e8) list_double2_large_graphic_pane_t

0x89c4,	// (0x0001e830) list_double_heading_pane_g1_ParamLimits

0x89c4,	// (0x0001e830) list_double_heading_pane_g1

0x4da9,	// (0x0001ac15) list_double_heading_pane_g2_ParamLimits

0x4da9,	// (0x0001ac15) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x000254ed) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x000254ed) list_double_heading_pane_g

0x89d5,	// (0x0001e841) list_double_heading_pane_t1_ParamLimits

0x89d5,	// (0x0001e841) list_double_heading_pane_t1

0x89eb,	// (0x0001e857) list_double_heading_pane_t2_ParamLimits

0x89eb,	// (0x0001e857) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x000254f2) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x000254f2) list_double_heading_pane_t

0x4e3a,	// (0x0001aca6) list_double_graphic_heading_pane_g1_ParamLimits

0x4e3a,	// (0x0001aca6) list_double_graphic_heading_pane_g1

0x89c4,	// (0x0001e830) list_double_graphic_heading_pane_g2_ParamLimits

0x89c4,	// (0x0001e830) list_double_graphic_heading_pane_g2

0x4da9,	// (0x0001ac15) list_double_graphic_heading_pane_g3_ParamLimits

0x4da9,	// (0x0001ac15) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x000254f7) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x000254f7) list_double_graphic_heading_pane_g

0x89fd,	// (0x0001e869) list_double_graphic_heading_pane_t1_ParamLimits

0x89fd,	// (0x0001e869) list_double_graphic_heading_pane_t1

0x8905,	// (0x0001e771) list_double_graphic_heading_pane_t2_ParamLimits

0x8905,	// (0x0001e771) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x000254fe) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x000254fe) list_double_graphic_heading_pane_t

0x8942,	// (0x0001e7ae) list_double_time_pane_g1_ParamLimits

0x8942,	// (0x0001e7ae) list_double_time_pane_g1

0x87eb,	// (0x0001e657) list_double_time_pane_g2_ParamLimits

0x87eb,	// (0x0001e657) list_double_time_pane_g2

0x0001,

0xf697,	// (0x00025503) list_double_time_pane_g_ParamLimits

0xf697,	// (0x00025503) list_double_time_pane_g

0x899c,	// (0x0001e808) list_double_time_pane_t1_ParamLimits

0x899c,	// (0x0001e808) list_double_time_pane_t1

0x8a13,	// (0x0001e87f) list_double_time_pane_t2_ParamLimits

0x8a13,	// (0x0001e87f) list_double_time_pane_t2

0x8a25,	// (0x0001e891) list_double_time_pane_t3_ParamLimits

0x8a25,	// (0x0001e891) list_double_time_pane_t3

0x8a37,	// (0x0001e8a3) list_double_time_pane_t4_ParamLimits

0x8a37,	// (0x0001e8a3) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x00025508) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x00025508) list_double_time_pane_t

0x4e95,	// (0x0001ad01) list_setting_pane_g1_ParamLimits

0x4e95,	// (0x0001ad01) list_setting_pane_g1

0x4ea1,	// (0x0001ad0d) list_setting_pane_g2_ParamLimits

0x4ea1,	// (0x0001ad0d) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x00025511) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x00025511) list_setting_pane_g

0x8a49,	// (0x0001e8b5) list_setting_pane_t1_ParamLimits

0x8a49,	// (0x0001e8b5) list_setting_pane_t1

0x8a63,	// (0x0001e8cf) list_setting_pane_t2_ParamLimits

0x8a63,	// (0x0001e8cf) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x00025516) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x00025516) list_setting_pane_t

0x8aa0,	// (0x0001e90c) set_value_pane_cp_ParamLimits

0x8aa0,	// (0x0001e90c) set_value_pane_cp

0x8aac,	// (0x0001e918) list_setting_number_pane_g1_ParamLimits

0x8aac,	// (0x0001e918) list_setting_number_pane_g1

0x8ab8,	// (0x0001e924) list_setting_number_pane_g2_ParamLimits

0x8ab8,	// (0x0001e924) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002551d) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002551d) list_setting_number_pane_g

0x8ac4,	// (0x0001e930) list_setting_number_pane_t1_ParamLimits

0x8ac4,	// (0x0001e930) list_setting_number_pane_t1

0x8add,	// (0x0001e949) list_setting_number_pane_t2_ParamLimits

0x8add,	// (0x0001e949) list_setting_number_pane_t2

0x8af7,	// (0x0001e963) list_setting_number_pane_t3_ParamLimits

0x8af7,	// (0x0001e963) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x00025522) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x00025522) list_setting_number_pane_t

0x8aa0,	// (0x0001e90c) set_value_pane_ParamLimits

0x8aa0,	// (0x0001e90c) set_value_pane

0xc93f,	// (0x000227ab) bg_set_opt_pane_ParamLimits

0xc93f,	// (0x000227ab) bg_set_opt_pane

0x50ee,	// (0x0001af5a) set_value_pane_t1

0xc960,	// (0x000227cc) slider_set_pane_cp3

0xc969,	// (0x000227d5) volume_small_pane_cp

0xc972,	// (0x000227de) list_form_gen_pane

0xc97b,	// (0x000227e7) scroll_pane_cp8

0x8b3a,	// (0x0001e9a6) form_field_data_pane_ParamLimits

0x8b3a,	// (0x0001e9a6) form_field_data_pane

0x8b51,	// (0x0001e9bd) form_field_data_wide_pane_ParamLimits

0x8b51,	// (0x0001e9bd) form_field_data_wide_pane

0x8b71,	// (0x0001e9dd) form_field_popup_pane_ParamLimits

0x8b71,	// (0x0001e9dd) form_field_popup_pane

0x8b8f,	// (0x0001e9fb) form_field_popup_wide_pane_ParamLimits

0x8b8f,	// (0x0001e9fb) form_field_popup_wide_pane

0x517e,	// (0x0001afea) form_field_slider_pane_ParamLimits

0x517e,	// (0x0001afea) form_field_slider_pane

0x5191,	// (0x0001affd) form_field_slider_wide_pane_ParamLimits

0x5191,	// (0x0001affd) form_field_slider_wide_pane

0xc98c,	// (0x000227f8) data_form_pane

0x8bb0,	// (0x0001ea1c) form_field_data_pane_t1

0xc998,	// (0x00022804) input_focus_pane

0xc9a6,	// (0x00022812) data_form_wide_pane

0x51d4,	// (0x0001b040) form_field_data_wide_pane_t1

0xc713,	// (0x0002257f) input_focus_pane_cp6

0x8bca,	// (0x0001ea36) form_field_popup_pane_t1

0xc998,	// (0x00022804) input_focus_pane_cp7

0xc9d2,	// (0x0002283e) list_form_pane

0x5218,	// (0x0001b084) form_field_popup_wide_pane_t1

0xc998,	// (0x00022804) input_focus_pane_cp8

0xc9de,	// (0x0002284a) list_form_wide_pane

0x8bec,	// (0x0001ea58) form_field_slider_pane_t1_ParamLimits

0x8bec,	// (0x0001ea58) form_field_slider_pane_t1

0x8c04,	// (0x0001ea70) form_field_slider_pane_t2_ParamLimits

0x8c04,	// (0x0001ea70) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x00025532) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x00025532) form_field_slider_pane_t

0xc343,	// (0x000221af) input_focus_pane_cp9_ParamLimits

0xc343,	// (0x000221af) input_focus_pane_cp9

0x8c19,	// (0x0001ea85) slider_cont_pane_ParamLimits

0x8c19,	// (0x0001ea85) slider_cont_pane

0xc9ed,	// (0x00022859) form_field_slider_wide_pane_t1_ParamLimits

0xc9ed,	// (0x00022859) form_field_slider_wide_pane_t1

0x526f,	// (0x0001b0db) form_field_slider_wide_pane_t2_ParamLimits

0x526f,	// (0x0001b0db) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x00025537) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x00025537) form_field_slider_wide_pane_t

0xc343,	// (0x000221af) input_focus_pane_cp10_ParamLimits

0xc343,	// (0x000221af) input_focus_pane_cp10

0x8c2d,	// (0x0001ea99) slider_cont_pane_cp1_ParamLimits

0x8c2d,	// (0x0001ea99) slider_cont_pane_cp1

0x8c41,	// (0x0001eaad) slider_form_pane_cp

0xc9ff,	// (0x0002286b) input_focus_pane_g1

0xca07,	// (0x00022873) input_focus_pane_g2

0xca0f,	// (0x0002287b) input_focus_pane_g3

0xca17,	// (0x00022883) input_focus_pane_g4

0xca1f,	// (0x0002288b) input_focus_pane_g5

0xca27,	// (0x00022893) input_focus_pane_g6

0xca2f,	// (0x0002289b) input_focus_pane_g7

0xca37,	// (0x000228a3) input_focus_pane_g8

0xca3f,	// (0x000228ab) input_focus_pane_g9

0xc2eb,	// (0x00022157) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002553c) input_focus_pane_g

0xde34,	// (0x00023ca0) wait_border_pane_g3_copy1

0x8c49,	// (0x0001eab5) data_form_pane_t1

0xc2eb,	// (0x00022157) wait_anim_pane_g1_copy1

0x8cec,	// (0x0001eb58) data_form_wide_pane_t1

0x8c63,	// (0x0001eacf) list_form_graphic_pane_cp_ParamLimits

0x8c63,	// (0x0001eacf) list_form_graphic_pane_cp

0xea55,	// (0x000248c1) slider_form_pane_g1

0xea5e,	// (0x000248ca) slider_form_pane_g2

0x0006,

0xf9bc,	// (0x00025828) slider_form_pane_g

0x8c76,	// (0x0001eae2) list_form_graphic_pane_ParamLimits

0x8c76,	// (0x0001eae2) list_form_graphic_pane

0x52e9,	// (0x0001b155) list_form_graphic_pane_g1

0x52f1,	// (0x0001b15d) list_form_graphic_pane_t1_ParamLimits

0x52f1,	// (0x0001b15d) list_form_graphic_pane_t1

0xc351,	// (0x000221bd) list_highlight_pane_cp5_ParamLimits

0xc351,	// (0x000221bd) list_highlight_pane_cp5

0x5306,	// (0x0001b172) find_pane_g1

0xca47,	// (0x000228b3) input_find_pane

0x530f,	// (0x0001b17b) input_find_pane_g1_ParamLimits

0x530f,	// (0x0001b17b) input_find_pane_g1

0x531b,	// (0x0001b187) input_find_pane_t1_ParamLimits

0x531b,	// (0x0001b187) input_find_pane_t1

0x5330,	// (0x0001b19c) input_find_pane_t2_ParamLimits

0x5330,	// (0x0001b19c) input_find_pane_t2

0x0001,

0xf6e5,	// (0x00025551) input_find_pane_t_ParamLimits

0xf6e5,	// (0x00025551) input_find_pane_t

0xca50,	// (0x000228bc) input_focus_pane_cp5_ParamLimits

0xca50,	// (0x000228bc) input_focus_pane_cp5

0x936b,	// (0x0001f1d7) bg_popup_window_pane_cp2_ParamLimits

0x936b,	// (0x0001f1d7) bg_popup_window_pane_cp2

0x9378,	// (0x0001f1e4) listscroll_menu_pane_ParamLimits

0x9378,	// (0x0001f1e4) listscroll_menu_pane

0x9384,	// (0x0001f1f0) popup_submenu_window_ParamLimits

0x9384,	// (0x0001f1f0) popup_submenu_window

0xca5e,	// (0x000228ca) find_popup_pane_g1

0xca66,	// (0x000228d2) input_popup_find_pane_cp

0xca50,	// (0x000228bc) input_focus_pane_cp4_ParamLimits

0xca50,	// (0x000228bc) input_focus_pane_cp4

0xca70,	// (0x000228dc) input_popup_find_pane_t1_ParamLimits

0xca70,	// (0x000228dc) input_popup_find_pane_t1

0xc2f5,	// (0x00022161) bg_popup_sub_pane_cp

0xca9e,	// (0x0002290a) listscroll_popup_sub_pane

0xcaa6,	// (0x00022912) list_submenu_pane_ParamLimits

0xcaa6,	// (0x00022912) list_submenu_pane

0xcab7,	// (0x00022923) scroll_pane_cp4

0xcabf,	// (0x0002292b) list_single_popup_submenu_pane_ParamLimits

0xcabf,	// (0x0002292b) list_single_popup_submenu_pane

0xcad2,	// (0x0002293e) list_single_popup_submenu_pane_g1

0xcada,	// (0x00022946) list_single_popup_submenu_pane_t1_ParamLimits

0xcada,	// (0x00022946) list_single_popup_submenu_pane_t1

0xc343,	// (0x000221af) bg_active_tab_pane_cp1_ParamLimits

0xc343,	// (0x000221af) bg_active_tab_pane_cp1

0x93b6,	// (0x0001f222) tabs_2_active_pane_g1

0x93be,	// (0x0001f22a) tabs_2_active_pane_t1

0xc343,	// (0x000221af) bg_passive_tab_pane_cp1_ParamLimits

0xc343,	// (0x000221af) bg_passive_tab_pane_cp1

0x93b6,	// (0x0001f222) tabs_2_passive_pane_g1

0x93be,	// (0x0001f22a) tabs_2_passive_pane_t1

0xc351,	// (0x000221bd) bg_active_tab_pane_cp4

0x93d0,	// (0x0001f23c) tabs_2_long_active_pane_t1

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp4

0x6688,	// (0x0001c4f4) list_single_midp_graphic_pane_g4_ParamLimits

0xc351,	// (0x000221bd) bg_active_tab_pane_cp5

0x93e3,	// (0x0001f24f) tabs_3_long_active_pane_t1

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp5

0x6688,	// (0x0001c4f4) list_single_midp_graphic_pane_g4

0xc351,	// (0x000221bd) bg_popup_window_pane_cp13_ParamLimits

0xc351,	// (0x000221bd) bg_popup_window_pane_cp13

0xcaf8,	// (0x00022964) listscroll_popup_fast_pane_ParamLimits

0xcaf8,	// (0x00022964) listscroll_popup_fast_pane

0xcb07,	// (0x00022973) grid_popup_fast_pane_ParamLimits

0xcb07,	// (0x00022973) grid_popup_fast_pane

0xcb19,	// (0x00022985) scroll_pane_cp9_ParamLimits

0xcb19,	// (0x00022985) scroll_pane_cp9

0x0bc1,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x0bc1,	// (0x00016a2d) list_single_graphic_hl_pane_t1_cp2

0xcb3d,	// (0x000229a9) input_focus_pane_cp20_ParamLimits

0xcb3d,	// (0x000229a9) input_focus_pane_cp20

0xcb4b,	// (0x000229b7) query_popup_data_pane_t1_ParamLimits

0xcb4b,	// (0x000229b7) query_popup_data_pane_t1

0xcb5e,	// (0x000229ca) query_popup_data_pane_t2_ParamLimits

0xcb5e,	// (0x000229ca) query_popup_data_pane_t2

0xcba4,	// (0x00022a10) query_popup_data_pane_t3_ParamLimits

0xcba4,	// (0x00022a10) query_popup_data_pane_t3

0xcbe5,	// (0x00022a51) query_popup_data_pane_t4_ParamLimits

0xcbe5,	// (0x00022a51) query_popup_data_pane_t4

0xcc21,	// (0x00022a8d) query_popup_data_pane_t5_ParamLimits

0xcc21,	// (0x00022a8d) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x00025556) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x00025556) query_popup_data_pane_t

0xc9ff,	// (0x0002286b) bg_set_opt_pane_g1

0xca07,	// (0x00022873) bg_set_opt_pane_g2

0xca0f,	// (0x0002287b) bg_set_opt_pane_g3

0xca17,	// (0x00022883) bg_set_opt_pane_g4

0xca1f,	// (0x0002288b) bg_set_opt_pane_g5

0xca27,	// (0x00022893) bg_set_opt_pane_g6

0xca2f,	// (0x0002289b) bg_set_opt_pane_g7

0xca37,	// (0x000228a3) bg_set_opt_pane_g8

0xca3f,	// (0x000228ab) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x00025561) bg_set_opt_pane_g

0x62ff,	// (0x0001c16b) control_top_pane_stacon_ParamLimits

0x62ff,	// (0x0001c16b) control_top_pane_stacon

0x6352,	// (0x0001c1be) signal_pane_stacon_ParamLimits

0x6352,	// (0x0001c1be) signal_pane_stacon

0xd080,	// (0x00022eec) stacon_top_pane_g1_ParamLimits

0xd080,	// (0x00022eec) stacon_top_pane_g1

0x6377,	// (0x0001c1e3) title_pane_stacon_ParamLimits

0x6377,	// (0x0001c1e3) title_pane_stacon

0x63a1,	// (0x0001c20d) uni_indicator_pane_stacon_ParamLimits

0x63a1,	// (0x0001c20d) uni_indicator_pane_stacon

0x63b6,	// (0x0001c222) battery_pane_stacon_ParamLimits

0x63b6,	// (0x0001c222) battery_pane_stacon

0x63fa,	// (0x0001c266) control_bottom_pane_stacon_ParamLimits

0x63fa,	// (0x0001c266) control_bottom_pane_stacon

0x641d,	// (0x0001c289) navi_pane_stacon_ParamLimits

0x641d,	// (0x0001c289) navi_pane_stacon

0xd0a2,	// (0x00022f0e) stacon_bottom_pane_g1_ParamLimits

0xd0a2,	// (0x00022f0e) stacon_bottom_pane_g1

0x6060,	// (0x0001becc) aid_levels_signal_lsc_ParamLimits

0x6060,	// (0x0001becc) aid_levels_signal_lsc

0x6077,	// (0x0001bee3) signal_pane_stacon_g1_ParamLimits

0x6077,	// (0x0001bee3) signal_pane_stacon_g1

0x608b,	// (0x0001bef7) signal_pane_stacon_g2_ParamLimits

0x608b,	// (0x0001bef7) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x00025574) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x00025574) signal_pane_stacon_g

0x60c0,	// (0x0001bf2c) title_pane_stacon_t1_ParamLimits

0x60c0,	// (0x0001bf2c) title_pane_stacon_t1

0xcc65,	// (0x00022ad1) uni_indicator_pane_stacon_g1

0xcc6f,	// (0x00022adb) uni_indicator_pane_stacon_g2

0xcc79,	// (0x00022ae5) uni_indicator_pane_stacon_g3

0xcc83,	// (0x00022aef) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x00025580) uni_indicator_pane_stacon_g

0x60e5,	// (0x0001bf51) control_top_pane_stacon_g1

0x60ed,	// (0x0001bf59) control_top_pane_stacon_t1_ParamLimits

0x60ed,	// (0x0001bf59) control_top_pane_stacon_t1

0x6124,	// (0x0001bf90) aid_levels_battery_lsc_ParamLimits

0x6124,	// (0x0001bf90) aid_levels_battery_lsc

0x613c,	// (0x0001bfa8) battery_pane_stacon_g1_ParamLimits

0x613c,	// (0x0001bfa8) battery_pane_stacon_g1

0x614f,	// (0x0001bfbb) battery_pane_stacon_g2_ParamLimits

0x614f,	// (0x0001bfbb) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x00025589) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x00025589) battery_pane_stacon_g

0x618d,	// (0x0001bff9) navi_icon_pane_stacon

0x61a1,	// (0x0001c00d) navi_navi_pane_stacon

0x618d,	// (0x0001bff9) navi_text_pane_stacon

0x60e5,	// (0x0001bf51) control_bottom_pane_stacon_g1

0x61b5,	// (0x0001c021) control_bottom_pane_stacon_t1_ParamLimits

0x61b5,	// (0x0001c021) control_bottom_pane_stacon_t1

0x93f5,	// (0x0001f261) grid_app_pane_ParamLimits

0x93f5,	// (0x0001f261) grid_app_pane

0x942b,	// (0x0001f297) scroll_pane_cp15_ParamLimits

0x942b,	// (0x0001f297) scroll_pane_cp15

0x9448,	// (0x0001f2b4) cell_app_pane_ParamLimits

0x9448,	// (0x0001f2b4) cell_app_pane

0x948f,	// (0x0001f2fb) cell_app_pane_g1_ParamLimits

0x948f,	// (0x0001f2fb) cell_app_pane_g1

0xcca7,	// (0x00022b13) cell_app_pane_g2_ParamLimits

0xcca7,	// (0x00022b13) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002558e) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002558e) cell_app_pane_g

0xccb3,	// (0x00022b1f) cell_app_pane_t1_ParamLimits

0xccb3,	// (0x00022b1f) cell_app_pane_t1

0xccc5,	// (0x00022b31) grid_highlight_pane_ParamLimits

0xccc5,	// (0x00022b31) grid_highlight_pane

0xc9ff,	// (0x0002286b) cell_highlight_pane_g1

0xca07,	// (0x00022873) cell_highlight_pane_g2

0xca0f,	// (0x0002287b) cell_highlight_pane_g3

0xca17,	// (0x00022883) cell_highlight_pane_g4

0xca1f,	// (0x0002288b) cell_highlight_pane_g5

0xca27,	// (0x00022893) cell_highlight_pane_g6

0xca2f,	// (0x0002289b) cell_highlight_pane_g7

0xca37,	// (0x000228a3) cell_highlight_pane_g8

0xca3f,	// (0x000228ab) cell_highlight_pane_g9

0xc2eb,	// (0x00022157) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002553c) cell_highlight_pane_g

0xccd6,	// (0x00022b42) bg_scroll_pane

0x61ff,	// (0x0001c06b) scroll_handle_pane

0xcd1d,	// (0x00022b89) scroll_bg_pane_g1

0xcd32,	// (0x00022b9e) scroll_bg_pane_g2

0xcd4a,	// (0x00022bb6) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x00025593) scroll_bg_pane_g

0xcd5f,	// (0x00022bcb) scroll_handle_focus_pane_ParamLimits

0xcd5f,	// (0x00022bcb) scroll_handle_focus_pane

0xcd1d,	// (0x00022b89) scroll_handle_pane_g1

0xcd6c,	// (0x00022bd8) scroll_handle_pane_g2

0xcd4a,	// (0x00022bb6) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002559a) scroll_handle_pane_g

0xca50,	// (0x000228bc) bg_popup_sub_pane_cp21_ParamLimits

0xca50,	// (0x000228bc) bg_popup_sub_pane_cp21

0xcd80,	// (0x00022bec) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd80,	// (0x00022bec) popup_fep_japan_predictive_window_t1

0xcd97,	// (0x00022c03) popup_fep_japan_predictive_window_t2_ParamLimits

0xcd97,	// (0x00022c03) popup_fep_japan_predictive_window_t2

0xcdca,	// (0x00022c36) popup_fep_japan_predictive_window_t3_ParamLimits

0xcdca,	// (0x00022c36) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x000255a1) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x000255a1) popup_fep_japan_predictive_window_t

0xc2f5,	// (0x00022161) bg_popup_sub_pane_cp23

0xce01,	// (0x00022c6d) listscroll_japin_cand_pane

0xce09,	// (0x00022c75) popup_fep_japan_candidate_window_t1

0xce17,	// (0x00022c83) candidate_pane_ParamLimits

0xce17,	// (0x00022c83) candidate_pane

0xce29,	// (0x00022c95) scroll_pane_cp30

0xce31,	// (0x00022c9d) list_single_popup_jap_candidate_pane_ParamLimits

0xce31,	// (0x00022c9d) list_single_popup_jap_candidate_pane

0xc2f5,	// (0x00022161) list_highlight_pane_cp30

0xce45,	// (0x00022cb1) list_single_popup_jap_candidate_pane_t1

0xce54,	// (0x00022cc0) level_1_signal

0xce61,	// (0x00022ccd) level_2_signal

0xce6e,	// (0x00022cda) level_3_signal

0xce7b,	// (0x00022ce7) level_4_signal

0xce88,	// (0x00022cf4) level_5_signal

0xce95,	// (0x00022d01) level_6_signal

0xcea2,	// (0x00022d0e) level_7_signal

0xce54,	// (0x00022cc0) level_1_battery

0xce61,	// (0x00022ccd) level_2_battery

0xce6e,	// (0x00022cda) level_3_battery

0xce7b,	// (0x00022ce7) level_4_battery

0xce88,	// (0x00022cf4) level_5_battery

0xce95,	// (0x00022d01) level_6_battery

0xcea2,	// (0x00022d0e) level_7_battery

0xcec7,	// (0x00022d33) list_menu_pane_ParamLimits

0xcec7,	// (0x00022d33) list_menu_pane

0xced8,	// (0x00022d44) scroll_pane_cp25_ParamLimits

0xced8,	// (0x00022d44) scroll_pane_cp25

0xcef1,	// (0x00022d5d) list_double2_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double2_graphic_pane_cp2

0xcef1,	// (0x00022d5d) list_double2_large_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double2_large_graphic_pane_cp2

0xcef1,	// (0x00022d5d) list_double2_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double2_pane_cp2

0xcef1,	// (0x00022d5d) list_double_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double_graphic_pane_cp2

0xcef1,	// (0x00022d5d) list_double_large_graphic_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double_large_graphic_pane_cp2

0xcef1,	// (0x00022d5d) list_double_number_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double_number_pane_cp2

0xcef1,	// (0x00022d5d) list_double_pane_cp2_ParamLimits

0xcef1,	// (0x00022d5d) list_double_pane_cp2

0x94cd,	// (0x0001f339) list_single_2graphic_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_2graphic_pane_cp2

0x94cd,	// (0x0001f339) list_single_graphic_heading_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_graphic_heading_pane_cp2

0x94cd,	// (0x0001f339) list_single_graphic_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_graphic_pane_cp2

0x94cd,	// (0x0001f339) list_single_heading_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_heading_pane_cp2

0xcf01,	// (0x00022d6d) list_single_large_graphic_pane_cp2_ParamLimits

0xcf01,	// (0x00022d6d) list_single_large_graphic_pane_cp2

0x94cd,	// (0x0001f339) list_single_number_heading_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_number_heading_pane_cp2

0x94cd,	// (0x0001f339) list_single_number_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_number_pane_cp2

0x94cd,	// (0x0001f339) list_single_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_pane_cp2

0xcf1b,	// (0x00022d87) bg_popup_sub_pane_cp22

0x62b1,	// (0x0001c11d) popup_side_volume_key_window_g1

0x62db,	// (0x0001c147) popup_side_volume_key_window_t1

0x62f7,	// (0x0001c163) volume_small_pane_cp1

0xc343,	// (0x000221af) bg_popup_sub_pane_cp24_ParamLimits

0xc343,	// (0x000221af) bg_popup_sub_pane_cp24

0xcf31,	// (0x00022d9d) fep_china_uni_candidate_pane_ParamLimits

0xcf31,	// (0x00022d9d) fep_china_uni_candidate_pane

0xcf45,	// (0x00022db1) fep_china_uni_entry_pane

0xcf55,	// (0x00022dc1) popup_fep_china_uni_window_g1

0xcf71,	// (0x00022ddd) fep_china_uni_entry_pane_g1

0xcf79,	// (0x00022de5) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x000255ce) fep_china_uni_entry_pane_g

0xcf81,	// (0x00022ded) fep_entry_item_pane

0xcf8b,	// (0x00022df7) fep_candidate_item_pane

0xcf93,	// (0x00022dff) fep_china_uni_candidate_pane_g1

0xcf9b,	// (0x00022e07) fep_china_uni_candidate_pane_g2

0xcfa3,	// (0x00022e0f) fep_china_uni_candidate_pane_g3

0xcfab,	// (0x00022e17) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x000255d3) fep_china_uni_candidate_pane_g

0xc2eb,	// (0x00022157) fep_entry_item_pane_g1

0xcfb3,	// (0x00022e1f) fep_entry_item_pane_t1_ParamLimits

0xcfb3,	// (0x00022e1f) fep_entry_item_pane_t1

0xcfc9,	// (0x00022e35) fep_candidate_item_pane_t1_ParamLimits

0xcfc9,	// (0x00022e35) fep_candidate_item_pane_t1

0xcfde,	// (0x00022e4a) fep_candidate_item_pane_t2_ParamLimits

0xcfde,	// (0x00022e4a) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x000255dc) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x000255dc) fep_candidate_item_pane_t

0xc351,	// (0x000221bd) list_highlight_pane_cp31_ParamLimits

0xc351,	// (0x000221bd) list_highlight_pane_cp31

0xcff0,	// (0x00022e5c) level_1_signal_lsc

0xcff9,	// (0x00022e65) level_2_signal_lsc

0xd002,	// (0x00022e6e) level_3_signal_lsc

0xd00b,	// (0x00022e77) level_4_signal_lsc

0xd014,	// (0x00022e80) level_5_signal_lsc

0xd01d,	// (0x00022e89) level_6_signal_lsc

0xd026,	// (0x00022e92) level_7_signal_lsc

0xd026,	// (0x00022e92) level_1_battery_lsc

0xd02f,	// (0x00022e9b) level_2_battery_lsc

0xd038,	// (0x00022ea4) level_3_battery_lsc

0xd041,	// (0x00022ead) level_4_battery_lsc

0xd04a,	// (0x00022eb6) level_5_battery_lsc

0xd053,	// (0x00022ebf) level_6_battery_lsc

0xcff0,	// (0x00022e5c) level_7_battery_lsc

0xd05c,	// (0x00022ec8) scroll_handle_focus_pane_g1

0xd065,	// (0x00022ed1) scroll_handle_focus_pane_g2

0xd06e,	// (0x00022eda) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x000255e1) scroll_handle_focus_pane_g

0x5345,	// (0x0001b1b1) list_single_2graphic_pane_g1_ParamLimits

0x5345,	// (0x0001b1b1) list_single_2graphic_pane_g1

0x87c6,	// (0x0001e632) list_single_2graphic_pane_g2_ParamLimits

0x87c6,	// (0x0001e632) list_single_2graphic_pane_g2

0x4cbe,	// (0x0001ab2a) list_single_2graphic_pane_g3_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_2graphic_pane_g3

0x5351,	// (0x0001b1bd) list_single_2graphic_pane_g4_ParamLimits

0x5351,	// (0x0001b1bd) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x000255e8) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x000255e8) list_single_2graphic_pane_g

0x535d,	// (0x0001b1c9) list_single_2graphic_pane_t1_ParamLimits

0x535d,	// (0x0001b1c9) list_single_2graphic_pane_t1

0x8c8a,	// (0x0001eaf6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c8a,	// (0x0001eaf6) list_double2_graphic_large_graphic_pane_g1

0x8942,	// (0x0001e7ae) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8942,	// (0x0001e7ae) list_double2_graphic_large_graphic_pane_g2

0x87eb,	// (0x0001e657) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x87eb,	// (0x0001e657) list_double2_graphic_large_graphic_pane_g3

0x8c9c,	// (0x0001eb08) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c9c,	// (0x0001eb08) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x000255f1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x000255f1) list_double2_graphic_large_graphic_pane_g

0x8ca8,	// (0x0001eb14) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8ca8,	// (0x0001eb14) list_double2_graphic_large_graphic_pane_t1

0x8cbe,	// (0x0001eb2a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8cbe,	// (0x0001eb2a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x000255fa) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x000255fa) list_double2_graphic_large_graphic_pane_t

0xd14f,	// (0x00022fbb) popup_fast_swap_window_ParamLimits

0xd14f,	// (0x00022fbb) popup_fast_swap_window

0xd16b,	// (0x00022fd7) popup_side_volume_key_window

0xd185,	// (0x00022ff1) stacon_top_pane

0xd18f,	// (0x00022ffb) status_pane_ParamLimits

0xd18f,	// (0x00022ffb) status_pane

0xd185,	// (0x00022ff1) status_small_pane

0xc2f5,	// (0x00022161) control_pane

0xc2f5,	// (0x00022161) stacon_bottom_pane

0xc97b,	// (0x000227e7) scroll_pane_cp121

0xc972,	// (0x000227de) set_content_pane

0x952f,	// (0x0001f39b) bg_active_tab_pane_g1_cp1

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp1

0x9538,	// (0x0001f3a4) bg_active_tab_pane_g3_cp1

0x952f,	// (0x0001f39b) bg_passive_tab_pane_g1_cp1

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp1

0x9538,	// (0x0001f3a4) bg_passive_tab_pane_g3_cp1

0x9541,	// (0x0001f3ad) bg_active_tab_pane_g1_cp2

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp2

0x954a,	// (0x0001f3b6) bg_active_tab_pane_g3_cp2

0x9541,	// (0x0001f3ad) bg_passive_tab_pane_g1_cp2

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp2

0x954a,	// (0x0001f3b6) bg_passive_tab_pane_g3_cp2

0x9553,	// (0x0001f3bf) bg_active_tab_pane_g1_cp3

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp3

0x955c,	// (0x0001f3c8) bg_active_tab_pane_g3_cp3

0x9553,	// (0x0001f3bf) bg_passive_tab_pane_g1_cp3

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp3

0x955c,	// (0x0001f3c8) bg_passive_tab_pane_g3_cp3

0x9565,	// (0x0001f3d1) bg_active_tab_pane_g1_cp4

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp4

0x956e,	// (0x0001f3da) bg_active_tab_pane_g3_cp4

0x9565,	// (0x0001f3d1) bg_passive_tab_pane_g1_cp4

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp4

0x956e,	// (0x0001f3da) bg_passive_tab_pane_g3_cp4

0xd0be,	// (0x00022f2a) bg_active_tab_pane_g1_cp5

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp5

0xd0c7,	// (0x00022f33) bg_active_tab_pane_g3_cp5

0xd0be,	// (0x00022f2a) bg_passive_tab_pane_g1_cp5

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp5

0xd0c7,	// (0x00022f33) bg_passive_tab_pane_g3_cp5

0x3c92,	// (0x00019afe) list_set_graphic_pane_ParamLimits

0x3c92,	// (0x00019afe) list_set_graphic_pane

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp4

0xd0d0,	// (0x00022f3c) list_set_graphic_pane_g1_ParamLimits

0xd0d0,	// (0x00022f3c) list_set_graphic_pane_g1

0xd0dc,	// (0x00022f48) list_set_graphic_pane_g2_ParamLimits

0xd0dc,	// (0x00022f48) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x000255ff) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x000255ff) list_set_graphic_pane_g

0x0009,

0xfaeb,	// (0x00025957) volume_small_pane_cp_g

0xd100,	// (0x00022f6c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd100,	// (0x00022f6c) list_double2_large_graphic_pane_g1_cp2

0xd10e,	// (0x00022f7a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd10e,	// (0x00022f7a) list_double2_large_graphic_pane_g2_cp2

0xd11f,	// (0x00022f8b) list_double2_large_graphic_pane_g3_cp2

0xd127,	// (0x00022f93) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd127,	// (0x00022f93) list_double2_large_graphic_pane_t1_cp2

0xd13d,	// (0x00022fa9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd13d,	// (0x00022fa9) list_double2_large_graphic_pane_t2_cp2

0xe7e7,	// (0x00024653) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe7e7,	// (0x00024653) list_double_large_graphic_pane_g1_cp2

0xe7fa,	// (0x00024666) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe7fa,	// (0x00024666) list_double_large_graphic_pane_g2_cp2

0xd2ad,	// (0x00023119) list_double_large_graphic_pane_g3_cp2

0xe80b,	// (0x00024677) list_double_large_graphic_pane_g4_cp

0xe813,	// (0x0002467f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe813,	// (0x0002467f) list_double_large_graphic_pane_t1_cp2

0xe82a,	// (0x00024696) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe82a,	// (0x00024696) list_double_large_graphic_pane_t2_cp2

0xd19d,	// (0x00023009) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd19d,	// (0x00023009) list_double2_graphic_pane_g1_cp2

0xd1ab,	// (0x00023017) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1ab,	// (0x00023017) list_double2_graphic_pane_g2_cp2

0xd1bc,	// (0x00023028) list_double2_graphic_pane_g3_cp2

0xd1c6,	// (0x00023032) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd1c6,	// (0x00023032) list_double2_graphic_pane_t1_cp2

0xd1dc,	// (0x00023048) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd1dc,	// (0x00023048) list_double2_graphic_pane_t2_cp2

0xd1ee,	// (0x0002305a) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1ee,	// (0x0002305a) list_single_number_heading_pane_g1_cp2

0xd1fa,	// (0x00023066) list_single_number_heading_pane_g2_cp2

0xd202,	// (0x0002306e) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd202,	// (0x0002306e) list_single_number_heading_pane_t1_cp2

0xd218,	// (0x00023084) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd218,	// (0x00023084) list_single_number_heading_pane_t2_cp2

0xd22c,	// (0x00023098) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd22c,	// (0x00023098) list_single_number_heading_pane_t3_cp2

0xd1ee,	// (0x0002305a) list_single_heading_pane_g1_cp2_ParamLimits

0xd1ee,	// (0x0002305a) list_single_heading_pane_g1_cp2

0xd1fa,	// (0x00023066) list_single_heading_pane_g2_cp2

0xd202,	// (0x0002306e) list_single_heading_pane_t1_cp2_ParamLimits

0xd202,	// (0x0002306e) list_single_heading_pane_t1_cp2

0xe5ef,	// (0x0002445b) list_single_heading_pane_t2_cp2_ParamLimits

0xe5ef,	// (0x0002445b) list_single_heading_pane_t2_cp2

0xe589,	// (0x000243f5) list_double_graphic_pane_g1_cp2_ParamLimits

0xe589,	// (0x000243f5) list_double_graphic_pane_g1_cp2

0xe595,	// (0x00024401) list_double_graphic_pane_g2_cp2_ParamLimits

0xe595,	// (0x00024401) list_double_graphic_pane_g2_cp2

0xe5a4,	// (0x00024410) list_double_graphic_pane_g3_cp2

0xe5ac,	// (0x00024418) list_double_graphic_pane_t1_cp2_ParamLimits

0xe5ac,	// (0x00024418) list_double_graphic_pane_t1_cp2

0xe5c2,	// (0x0002442e) list_double_graphic_pane_t2_cp2_ParamLimits

0xe5c2,	// (0x0002442e) list_double_graphic_pane_t2_cp2

0xd2a1,	// (0x0002310d) list_double_number_pane_g1_cp2_ParamLimits

0xd2a1,	// (0x0002310d) list_double_number_pane_g1_cp2

0xd2ad,	// (0x00023119) list_double_number_pane_g2_cp2

0xe54d,	// (0x000243b9) list_double_number_pane_t1_cp2_ParamLimits

0xe54d,	// (0x000243b9) list_double_number_pane_t1_cp2

0xe561,	// (0x000243cd) list_double_number_pane_t2_cp2_ParamLimits

0xe561,	// (0x000243cd) list_double_number_pane_t2_cp2

0xe577,	// (0x000243e3) list_double_number_pane_t3_cp2_ParamLimits

0xe577,	// (0x000243e3) list_double_number_pane_t3_cp2

0xe4c4,	// (0x00024330) list_single_graphic_pane_g1_cp2_ParamLimits

0xe4c4,	// (0x00024330) list_single_graphic_pane_g1_cp2

0xd305,	// (0x00023171) list_single_graphic_pane_g2_cp2_ParamLimits

0xd305,	// (0x00023171) list_single_graphic_pane_g2_cp2

0xd311,	// (0x0002317d) list_single_graphic_pane_g3_cp2

0xe49a,	// (0x00024306) list_single_graphic_pane_t1_cp2_ParamLimits

0xe49a,	// (0x00024306) list_single_graphic_pane_t1_cp2

0xd305,	// (0x00023171) list_single_number_pane_g1_cp2_ParamLimits

0xd305,	// (0x00023171) list_single_number_pane_g1_cp2

0xd311,	// (0x0002317d) list_single_number_pane_g2_cp2

0xe49a,	// (0x00024306) list_single_number_pane_t1_cp2_ParamLimits

0xe49a,	// (0x00024306) list_single_number_pane_t1_cp2

0xe4b0,	// (0x0002431c) list_single_number_pane_t2_cp2_ParamLimits

0xe4b0,	// (0x0002431c) list_single_number_pane_t2_cp2

0xd10e,	// (0x00022f7a) list_double2_pane_g1_cp2_ParamLimits

0xd10e,	// (0x00022f7a) list_double2_pane_g1_cp2

0xd11f,	// (0x00022f8b) list_double2_pane_g2_cp2

0xd279,	// (0x000230e5) list_double2_pane_t1_cp2_ParamLimits

0xd279,	// (0x000230e5) list_double2_pane_t1_cp2

0xd28f,	// (0x000230fb) list_double2_pane_t2_cp2_ParamLimits

0xd28f,	// (0x000230fb) list_double2_pane_t2_cp2

0xd2a1,	// (0x0002310d) list_double_pane_g1_cp2_ParamLimits

0xd2a1,	// (0x0002310d) list_double_pane_g1_cp2

0xd2ad,	// (0x00023119) list_double_pane_g2_cp2

0xd2b5,	// (0x00023121) list_double_pane_t1_cp2_ParamLimits

0xd2b5,	// (0x00023121) list_double_pane_t1_cp2

0xd2cb,	// (0x00023137) list_double_pane_t2_cp2_ParamLimits

0xd2cb,	// (0x00023137) list_double_pane_t2_cp2

0xd2f5,	// (0x00023161) list_single_pane_cp2_g3

0xd305,	// (0x00023171) list_single_pane_g1_cp2_ParamLimits

0xd305,	// (0x00023171) list_single_pane_g1_cp2

0xd311,	// (0x0002317d) list_single_pane_g2_cp2

0xd319,	// (0x00023185) list_single_pane_t1_cp2_ParamLimits

0xd319,	// (0x00023185) list_single_pane_t1_cp2

0xd331,	// (0x0002319d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd331,	// (0x0002319d) list_single_large_graphic_pane_g1_cp2

0xd33f,	// (0x000231ab) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd33f,	// (0x000231ab) list_single_large_graphic_pane_g2_cp2

0xd34b,	// (0x000231b7) list_single_large_graphic_pane_g3_cp2

0xd353,	// (0x000231bf) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd353,	// (0x000231bf) list_single_large_graphic_pane_g4_cp1

0xd36d,	// (0x000231d9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd36d,	// (0x000231d9) list_single_large_graphic_pane_t1_cp2

0xe464,	// (0x000242d0) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe464,	// (0x000242d0) list_single_graphic_heading_pane_g1_cp2

0xe431,	// (0x0002429d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe431,	// (0x0002429d) list_single_graphic_heading_pane_g4_cp2

0xd311,	// (0x0002317d) list_single_graphic_heading_pane_g5_cp2

0xe470,	// (0x000242dc) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe470,	// (0x000242dc) list_single_graphic_heading_pane_t1_cp2

0xe486,	// (0x000242f2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe486,	// (0x000242f2) list_single_graphic_heading_pane_t2_cp2

0xe425,	// (0x00024291) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe425,	// (0x00024291) list_single_2graphic_pane_g1_cp2

0xe431,	// (0x0002429d) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe431,	// (0x0002429d) list_single_2graphic_pane_g2_cp2

0xd311,	// (0x0002317d) list_single_2graphic_pane_g3_cp2

0xe442,	// (0x000242ae) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe442,	// (0x000242ae) list_single_2graphic_pane_g4_cp2

0xe44e,	// (0x000242ba) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe44e,	// (0x000242ba) list_single_2graphic_pane_t1_cp2

0xc2eb,	// (0x00022157) list_highlight_pane_g10_cp1

0xe02b,	// (0x00023e97) list_highlight_pane_g1_cp1

0xe033,	// (0x00023e9f) list_highlight_pane_g2_cp1

0xe03b,	// (0x00023ea7) list_highlight_pane_g3_cp1

0xe043,	// (0x00023eaf) list_highlight_pane_g4_cp1

0xe04b,	// (0x00023eb7) list_highlight_pane_g5_cp1

0xe053,	// (0x00023ebf) list_highlight_pane_g6_cp1

0xe05b,	// (0x00023ec7) list_highlight_pane_g7_cp1

0xe063,	// (0x00023ecf) list_highlight_pane_g8_cp1

0xe06b,	// (0x00023ed7) list_highlight_pane_g9_cp1

0xa364,	// (0x000201d0) form_field_slider_pane_t3

0xa374,	// (0x000201e0) form_field_slider_pane_t4

0xdf5f,	// (0x00023dcb) slider_form_pane_ParamLimits

0xdf5f,	// (0x00023dcb) slider_form_pane

0xc2f5,	// (0x00022161) control_abbreviations

0xc2f5,	// (0x00022161) control_conventions

0xc2f5,	// (0x00022161) control_definitions

0xc2f5,	// (0x00022161) format_table_attribute

0xe63b,	// (0x000244a7) bg_popup_preview_window_pane_g9

0xc2f5,	// (0x00022161) format_table_data2

0xc2f5,	// (0x00022161) format_table_data3

0xc2f5,	// (0x00022161) format_table_data_example

0x0008,

0xc2f5,	// (0x00022161) intro_purpose

0xf91c,	// (0x00025788) bg_popup_preview_window_pane_g

0xc2f5,	// (0x00022161) texts_category

0xc2f5,	// (0x00022161) texts_graphics

0xd383,	// (0x000231ef) text_digital

0xd392,	// (0x000231fe) text_primary

0xd3a1,	// (0x0002320d) text_primary_small

0xd3b0,	// (0x0002321c) text_secondary

0xd3bf,	// (0x0002322b) text_title

0xeae3,	// (0x0002494f) bg_passive_tab_pane_g1_cp3_srt

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp3_srt

0xeaec,	// (0x00024958) bg_passive_tab_pane_g3_cp3_srt

0xc343,	// (0x000221af) bg_active_tab_pane_cp3_srt_ParamLimits

0xc343,	// (0x000221af) bg_active_tab_pane_cp3_srt

0xeaf5,	// (0x00024961) tabs_4_active_pane_srt_g1

0xa881,	// (0x000206ed) tabs_4_active_pane_srt_t1_ParamLimits

0xa881,	// (0x000206ed) tabs_4_active_pane_srt_t1

0xeae3,	// (0x0002494f) bg_active_tab_pane_g1_cp3_copy1

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp3_copy1

0xeaec,	// (0x00024958) bg_active_tab_pane_g3_cp3_copy1

0xc351,	// (0x000221bd) tabs_2_long_active_pane_srt_ParamLimits

0xc351,	// (0x000221bd) tabs_2_long_active_pane_srt

0xc351,	// (0x000221bd) tabs_2_long_passive_pane_srt_ParamLimits

0xc351,	// (0x000221bd) tabs_2_long_passive_pane_srt

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp4_srt

0xea0e,	// (0x0002487a) bg_passive_tab_pane_g1_cp4_srt

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp4_srt

0xea17,	// (0x00024883) bg_passive_tab_pane_g3_cp4_srt

0xc351,	// (0x000221bd) bg_active_tab_pane_cp4_srt_ParamLimits

0xc351,	// (0x000221bd) bg_active_tab_pane_cp4_srt

0xa68d,	// (0x000204f9) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa68d,	// (0x000204f9) tabs_2_long_active_pane_srt_t1

0xea0e,	// (0x0002487a) bg_active_tab_pane_g1_cp4_srt

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp4_srt

0xea17,	// (0x00024883) bg_active_tab_pane_g3_cp4_srt

0xc343,	// (0x000221af) tabs_3_long_active_pane_srt_ParamLimits

0xc343,	// (0x000221af) tabs_3_long_active_pane_srt

0xc343,	// (0x000221af) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc343,	// (0x000221af) tabs_3_long_passive_pane_cp_srt

0xc343,	// (0x000221af) tabs_3_long_passive_pane_srt_ParamLimits

0xc343,	// (0x000221af) tabs_3_long_passive_pane_srt

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp5_srt

0xd0be,	// (0x00022f2a) bg_passive_tab_pane_g1_cp5_srt

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp5_srt

0xd0c7,	// (0x00022f33) bg_passive_tab_pane_g3_cp5_srt

0xc351,	// (0x000221bd) bg_active_tab_pane_cp5_srt_ParamLimits

0xc351,	// (0x000221bd) bg_active_tab_pane_cp5_srt

0xa677,	// (0x000204e3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa677,	// (0x000204e3) tabs_3_long_active_pane_srt_t1

0xd0be,	// (0x00022f2a) bg_active_tab_pane_g1_cp5_srt

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp5_srt

0xd0c7,	// (0x00022f33) bg_active_tab_pane_g3_cp5_srt

0xea00,	// (0x0002486c) navi_text_pane_srt_t1

0xe9f8,	// (0x00024864) navi_icon_pane_srt_g1

0xd4bd,	// (0x00023329) midp_editing_number_pane_srt

0xd3ce,	// (0x0002323a) midp_ticker_pane_srt

0xd4c5,	// (0x00023331) midp_ticker_pane_srt_g1

0xd4cd,	// (0x00023339) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002561e) midp_ticker_pane_srt_g

0xd4d5,	// (0x00023341) midp_ticker_pane_srt_t1

0xe9e9,	// (0x00024855) midp_editing_number_pane_t1_copy1

0x9577,	// (0x0001f3e3) listscroll_midp_pane

0x9577,	// (0x0001f3e3) midp_form_pane

0xd3d6,	// (0x00023242) midp_info_popup_window_ParamLimits

0xd3d6,	// (0x00023242) midp_info_popup_window

0xca50,	// (0x000228bc) bg_popup_sub_pane_cp50_ParamLimits

0xca50,	// (0x000228bc) bg_popup_sub_pane_cp50

0xdcad,	// (0x00023b19) listscroll_midp_info_pane_ParamLimits

0xdcad,	// (0x00023b19) listscroll_midp_info_pane

0xdc95,	// (0x00023b01) listscroll_form_midp_pane_ParamLimits

0xdc95,	// (0x00023b01) listscroll_form_midp_pane

0xdca1,	// (0x00023b0d) scroll_bar_cp050

0xa358,	// (0x000201c4) list_midp_pane

0xf385,	// (0x000251f1) signal_pane_g2_cp

0xdbc7,	// (0x00023a33) listscroll_midp_info_pane_t1_ParamLimits

0xdbc7,	// (0x00023a33) listscroll_midp_info_pane_t1

0xdbdf,	// (0x00023a4b) listscroll_midp_info_pane_t2_ParamLimits

0xdbdf,	// (0x00023a4b) listscroll_midp_info_pane_t2

0xdc1d,	// (0x00023a89) listscroll_midp_info_pane_t3_ParamLimits

0xdc1d,	// (0x00023a89) listscroll_midp_info_pane_t3

0xdc57,	// (0x00023ac3) listscroll_midp_info_pane_t4_ParamLimits

0xdc57,	// (0x00023ac3) listscroll_midp_info_pane_t4

0x0003,

0xf857,	// (0x000256c3) listscroll_midp_info_pane_t_ParamLimits

0xf857,	// (0x000256c3) listscroll_midp_info_pane_t

0xcab7,	// (0x00022923) scroll_pane_cp21

0xdb6b,	// (0x000239d7) form_midp_field_choice_group_pane

0xdb74,	// (0x000239e0) form_midp_field_text_pane

0xdbad,	// (0x00023a19) form_midp_field_time_pane

0xdbb5,	// (0x00023a21) form_midp_gauge_slider_pane

0xdbbe,	// (0x00023a2a) form_midp_gauge_wait_pane

0xc2f5,	// (0x00022161) form_midp_image_pane

0x8cd0,	// (0x0001eb3c) list_single_midp_pane_ParamLimits

0x8cd0,	// (0x0001eb3c) list_single_midp_pane

0xa334,	// (0x000201a0) form_midp_field_text_pane_t1

0xda12,	// (0x0002387e) input_focus_pane_cp050

0xdb5a,	// (0x000239c6) list_midp_form_text_pane

0xdb29,	// (0x00023995) form_midp_field_choice_group_pane_t1

0xdb37,	// (0x000239a3) input_focus_pane_cp051

0xdb4b,	// (0x000239b7) list_midp_choice_pane

0xc2f5,	// (0x00022161) status_idle_pane

0xdb0d,	// (0x00023979) form_midp_field_time_pane_t1

0xc2eb,	// (0x00022157) wait_anim_pane_g2_copy1

0xdb1b,	// (0x00023987) form_midp_field_time_pane_t2

0x0001,

0xd42f,	// (0x0002329b) aid_navinavi_width_2_pane

0xf852,	// (0x000256be) form_midp_field_time_pane_t

0xc2f5,	// (0x00022161) input_focus_pane_cp052

0xc2f5,	// (0x00022161) bg_input_focus_pane_cp040

0xdae9,	// (0x00023955) form_midp_gauge_slider_pane_t1

0xdaf7,	// (0x00023963) form_midp_gauge_slider_pane_t2

0xa318,	// (0x00020184) form_midp_gauge_slider_pane_t3

0xa326,	// (0x00020192) form_midp_gauge_slider_pane_t4

0x0003,

0xf849,	// (0x000256b5) form_midp_gauge_slider_pane_t

0xdb05,	// (0x00023971) form_midp_slider_pane

0xc351,	// (0x000221bd) bg_input_focus_pane_cp041_ParamLimits

0xc351,	// (0x000221bd) bg_input_focus_pane_cp041

0xdab6,	// (0x00023922) form_midp_gauge_wait_pane_t1_ParamLimits

0xdab6,	// (0x00023922) form_midp_gauge_wait_pane_t1

0xdac8,	// (0x00023934) form_midp_gauge_wait_pane_t2_ParamLimits

0xdac8,	// (0x00023934) form_midp_gauge_wait_pane_t2

0x0001,

0xf844,	// (0x000256b0) form_midp_gauge_wait_pane_t_ParamLimits

0xf844,	// (0x000256b0) form_midp_gauge_wait_pane_t

0xdada,	// (0x00023946) form_midp_wait_pane_ParamLimits

0xdada,	// (0x00023946) form_midp_wait_pane

0xda80,	// (0x000238ec) form_midp_image_pane_g1

0xda89,	// (0x000238f5) form_midp_image_pane_t1

0xda98,	// (0x00023904) form_midp_image_pane_t2

0xdaa7,	// (0x00023913) form_midp_image_pane_t3

0x0002,

0xf83d,	// (0x000256a9) form_midp_image_pane_t

0xda77,	// (0x000238e3) list_single_midp_pane_g1

0x5485,	// (0x0001b2f1) list_single_midp_pane_t1

0xa301,	// (0x0002016d) list_midp_form_item_pane_ParamLimits

0xa301,	// (0x0002016d) list_midp_form_item_pane

0xd3e9,	// (0x00023255) list_midp_form_item_pane_t1

0xd3f8,	// (0x00023264) midp_ticker_pane_g1

0xd404,	// (0x00023270) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x00025604) midp_ticker_pane_g

0x9623,	// (0x0001f48f) midp_ticker_pane_t1

0xa7f6,	// (0x00020662) midp_editing_number_pane_t1

0xea77,	// (0x000248e3) midp_editing_number_pane

0xea86,	// (0x000248f2) midp_ticker_pane

0xe9d9,	// (0x00024845) ai_message_heading_pane

0xc2f5,	// (0x00022161) bg_popup_window_pane_cp14

0xe9e1,	// (0x0002484d) listscroll_ai_message_pane

0xe963,	// (0x000247cf) ai_message_heading_pane_g1_ParamLimits

0xe963,	// (0x000247cf) ai_message_heading_pane_g1

0xe96f,	// (0x000247db) ai_message_heading_pane_g2_ParamLimits

0xe96f,	// (0x000247db) ai_message_heading_pane_g2

0xe97b,	// (0x000247e7) ai_message_heading_pane_g3_ParamLimits

0xe97b,	// (0x000247e7) ai_message_heading_pane_g3

0xe987,	// (0x000247f3) ai_message_heading_pane_g4_ParamLimits

0xe987,	// (0x000247f3) ai_message_heading_pane_g4

0x0003,

0xf97e,	// (0x000257ea) ai_message_heading_pane_g_ParamLimits

0xf97e,	// (0x000257ea) ai_message_heading_pane_g

0xe993,	// (0x000247ff) ai_message_heading_pane_t1_ParamLimits

0xe993,	// (0x000247ff) ai_message_heading_pane_t1

0xe9ad,	// (0x00024819) ai_message_heading_pane_t2_ParamLimits

0xe9ad,	// (0x00024819) ai_message_heading_pane_t2

0x0001,

0xf987,	// (0x000257f3) ai_message_heading_pane_t_ParamLimits

0xf987,	// (0x000257f3) ai_message_heading_pane_t

0xe9bf,	// (0x0002482b) bg_popup_heading_pane_cp1_ParamLimits

0xe9bf,	// (0x0002482b) bg_popup_heading_pane_cp1

0xe951,	// (0x000247bd) list_ai_message_pane_ParamLimits

0xe951,	// (0x000247bd) list_ai_message_pane

0xcab7,	// (0x00022923) scroll_pane_cp10

0xe8ed,	// (0x00024759) list_ai_message_pane_g1

0xe8f5,	// (0x00024761) list_ai_message_pane_g2

0x0001,

0xf95b,	// (0x000257c7) list_ai_message_pane_g

0xe8fd,	// (0x00024769) list_ai_message_pane_t1_ParamLimits

0xe8fd,	// (0x00024769) list_ai_message_pane_t1

0xe912,	// (0x0002477e) list_ai_message_pane_t2_ParamLimits

0xe912,	// (0x0002477e) list_ai_message_pane_t2

0xe927,	// (0x00024793) list_ai_message_pane_t3_ParamLimits

0xe927,	// (0x00024793) list_ai_message_pane_t3

0xe93c,	// (0x000247a8) list_ai_message_pane_t4_ParamLimits

0xe93c,	// (0x000247a8) list_ai_message_pane_t4

0x0003,

0xf960,	// (0x000257cc) list_ai_message_pane_t_ParamLimits

0xf960,	// (0x000257cc) list_ai_message_pane_t

0xa652,	// (0x000204be) cell_ai_soft_ind_pane_ParamLimits

0xa652,	// (0x000204be) cell_ai_soft_ind_pane

0xd410,	// (0x0002327c) cell_ai_soft_ind_pane_g1_ParamLimits

0xd410,	// (0x0002327c) cell_ai_soft_ind_pane_g1

0xc2f5,	// (0x00022161) grid_highlight_cp1

0xd41d,	// (0x00023289) text_secondary_cp56_ParamLimits

0xd41d,	// (0x00023289) text_secondary_cp56

0xe8c2,	// (0x0002472e) example_general_pane_ParamLimits

0xe8c2,	// (0x0002472e) example_general_pane

0xe8ce,	// (0x0002473a) example_parent_pane_g1_ParamLimits

0xe8ce,	// (0x0002473a) example_parent_pane_g1

0xe8da,	// (0x00024746) example_parent_pane_t1_ParamLimits

0xe8da,	// (0x00024746) example_parent_pane_t1

0x9b62,	// (0x0001f9ce) popup_preview_text_window_ParamLimits

0x9b62,	// (0x0001f9ce) popup_preview_text_window

0xd2fd,	// (0x00023169) list_single_pane_cp2_g4

0xc520,	// (0x0002238c) bg_popup_preview_window_pane_ParamLimits

0xc520,	// (0x0002238c) bg_popup_preview_window_pane

0xe643,	// (0x000244af) popup_preview_text_window_t1_ParamLimits

0xe643,	// (0x000244af) popup_preview_text_window_t1

0xe661,	// (0x000244cd) popup_preview_text_window_t2_ParamLimits

0xe661,	// (0x000244cd) popup_preview_text_window_t2

0xe6aa,	// (0x00024516) popup_preview_text_window_t3_ParamLimits

0xe6aa,	// (0x00024516) popup_preview_text_window_t3

0xe6ef,	// (0x0002455b) popup_preview_text_window_t4_ParamLimits

0xe6ef,	// (0x0002455b) popup_preview_text_window_t4

0x0004,

0xf92f,	// (0x0002579b) popup_preview_text_window_t_ParamLimits

0xf92f,	// (0x0002579b) popup_preview_text_window_t

0xe76d,	// (0x000245d9) scroll_pane_cp11

0xd922,	// (0x0002378e) bg_popup_preview_window_pane_g1

0xe603,	// (0x0002446f) bg_popup_preview_window_pane_g2

0xe60b,	// (0x00024477) bg_popup_preview_window_pane_g3

0xe613,	// (0x0002447f) bg_popup_preview_window_pane_g4

0xe61b,	// (0x00024487) bg_popup_preview_window_pane_g5

0xe623,	// (0x0002448f) bg_popup_preview_window_pane_g6

0xe62b,	// (0x00024497) bg_popup_preview_window_pane_g7

0xe633,	// (0x0002449f) bg_popup_preview_window_pane_g8

0x5c0e,	// (0x0001ba7a) aid_popup_width_pane

0x9ade,	// (0x0001f94a) popup_midp_note_alarm_window_ParamLimits

0x9ade,	// (0x0001f94a) popup_midp_note_alarm_window

0xc98c,	// (0x000227f8) data_form_pane_ParamLimits

0x8ba6,	// (0x0001ea12) form_field_data_pane_g1

0x8bb0,	// (0x0001ea1c) form_field_data_pane_t1_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_ParamLimits

0xc9a6,	// (0x00022812) data_form_wide_pane_ParamLimits

0x51c8,	// (0x0001b034) form_field_data_wide_pane_g1

0x51d4,	// (0x0001b040) form_field_data_wide_pane_t1_ParamLimits

0xc713,	// (0x0002257f) input_focus_pane_cp6_ParamLimits

0x93a8,	// (0x0001f214) input_popup_find_pane_g1_ParamLimits

0x93a8,	// (0x0001f214) input_popup_find_pane_g1

0x6160,	// (0x0001bfcc) aid_navi_side_left_pane

0x6175,	// (0x0001bfe1) aid_navi_side_right_pane

0xe108,	// (0x00023f74) bg_popup_window_pane_cp30_ParamLimits

0xe108,	// (0x00023f74) bg_popup_window_pane_cp30

0xe182,	// (0x00023fee) popup_midp_note_alarm_window_g1_ParamLimits

0xe182,	// (0x00023fee) popup_midp_note_alarm_window_g1

0xe1b2,	// (0x0002401e) popup_midp_note_alarm_window_t1_ParamLimits

0xe1b2,	// (0x0002401e) popup_midp_note_alarm_window_t1

0xe253,	// (0x000240bf) popup_midp_note_alarm_window_t2_ParamLimits

0xe253,	// (0x000240bf) popup_midp_note_alarm_window_t2

0xe301,	// (0x0002416d) popup_midp_note_alarm_window_t3_ParamLimits

0xe301,	// (0x0002416d) popup_midp_note_alarm_window_t3

0xe329,	// (0x00024195) popup_midp_note_alarm_window_t4_ParamLimits

0xe329,	// (0x00024195) popup_midp_note_alarm_window_t4

0xe349,	// (0x000241b5) popup_midp_note_alarm_window_t5_ParamLimits

0xe349,	// (0x000241b5) popup_midp_note_alarm_window_t5

0x000a,

0xf8cc,	// (0x00025738) popup_midp_note_alarm_window_t_ParamLimits

0xf8cc,	// (0x00025738) popup_midp_note_alarm_window_t

0xe3f5,	// (0x00024261) wait_bar_pane_cp1_ParamLimits

0xe3f5,	// (0x00024261) wait_bar_pane_cp1

0xc2f5,	// (0x00022161) wait_anim_pane_copy1

0xc2f5,	// (0x00022161) wait_border_pane_copy1

0xde20,	// (0x00023c8c) wait_border_pane_g1_copy1

0x51ee,	// (0x0001b05a) form_field_popup_pane_g1

0x8bca,	// (0x0001ea36) form_field_popup_pane_t1_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_cp7_ParamLimits

0xc9d2,	// (0x0002283e) list_form_pane_ParamLimits

0x5210,	// (0x0001b07c) form_field_popup_wide_pane_g1

0x5218,	// (0x0001b084) form_field_popup_wide_pane_t1_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_cp8_ParamLimits

0xc9de,	// (0x0002284a) list_form_wide_pane_ParamLimits

0xeb1c,	// (0x00024988) aid_size_cell_graphic_pane

0x8c49,	// (0x0001eab5) data_form_pane_t1_ParamLimits

0x8cec,	// (0x0001eb58) data_form_wide_pane_t1_ParamLimits

0x9f17,	// (0x0001fd83) bg_status_flat_pane

0x9044,	// (0x0001eeb0) title_pane_t1_ParamLimits

0xc30b,	// (0x00022177) title_pane_t2_ParamLimits

0xc331,	// (0x0002219d) title_pane_t3_ParamLimits

0xf59b,	// (0x00025407) title_pane_t_ParamLimits

0xce54,	// (0x00022cc0) level_1_signal_ParamLimits

0xce61,	// (0x00022ccd) level_2_signal_ParamLimits

0xce6e,	// (0x00022cda) level_3_signal_ParamLimits

0xce7b,	// (0x00022ce7) level_4_signal_ParamLimits

0xce88,	// (0x00022cf4) level_5_signal_ParamLimits

0xce95,	// (0x00022d01) level_6_signal_ParamLimits

0xcea2,	// (0x00022d0e) level_7_signal_ParamLimits

0xce54,	// (0x00022cc0) level_1_battery_ParamLimits

0xce61,	// (0x00022ccd) level_2_battery_ParamLimits

0xce6e,	// (0x00022cda) level_3_battery_ParamLimits

0xce7b,	// (0x00022ce7) level_4_battery_ParamLimits

0xce88,	// (0x00022cf4) level_5_battery_ParamLimits

0xce95,	// (0x00022d01) level_6_battery_ParamLimits

0xcea2,	// (0x00022d0e) level_7_battery_ParamLimits

0xe02b,	// (0x00023e97) bg_status_flat_pane_g1

0xe033,	// (0x00023e9f) bg_status_flat_pane_g2

0xe03b,	// (0x00023ea7) bg_status_flat_pane_g3

0xe043,	// (0x00023eaf) bg_status_flat_pane_g4

0xe04b,	// (0x00023eb7) bg_status_flat_pane_g5

0xe053,	// (0x00023ebf) bg_status_flat_pane_g6

0xe05b,	// (0x00023ec7) bg_status_flat_pane_g7

0x90d8,	// (0x0001ef44) tabs_3_active_pane_t1_ParamLimits

0x90d8,	// (0x0001ef44) tabs_3_passive_pane_t1_ParamLimits

0x90f2,	// (0x0001ef5e) tabs_4_active_pane_t1_ParamLimits

0x90f2,	// (0x0001ef5e) tabs_4_1_passive_pane_t1_ParamLimits

0x93be,	// (0x0001f22a) tabs_2_active_pane_t1_ParamLimits

0x93be,	// (0x0001f22a) tabs_2_passive_pane_t1_ParamLimits

0xc351,	// (0x000221bd) bg_active_tab_pane_cp4_ParamLimits

0x93d0,	// (0x0001f23c) tabs_2_long_active_pane_t1_ParamLimits

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp4_ParamLimits

0x66ae,	// (0x0001c51a) list_single_midp_graphic_pane_t1_ParamLimits

0xc351,	// (0x000221bd) bg_active_tab_pane_cp5_ParamLimits

0x93e3,	// (0x0001f24f) tabs_3_long_active_pane_t1_ParamLimits

0xd630,	// (0x0002349c) bg_passive_tab_pane_cp5_ParamLimits

0x66ae,	// (0x0001c51a) list_single_midp_graphic_pane_t1

0x9f17,	// (0x0001fd83) bg_status_flat_pane_ParamLimits

0xd7f5,	// (0x00023661) indicator_pane_cp2_ParamLimits

0xd7f5,	// (0x00023661) indicator_pane_cp2

0xa08e,	// (0x0001fefa) navi_pane_srt_ParamLimits

0xa08e,	// (0x0001fefa) navi_pane_srt

0xd81d,	// (0x00023689) popup_clock_digital_analogue_window_cp1

0xc395,	// (0x00022201) indicator_pane_t1

0xd3ce,	// (0x0002323a) copy_highlight_pane

0xd3ce,	// (0x0002323a) cursor_graphics_pane

0xd3ce,	// (0x0002323a) graphic_within_text_pane

0xd3ce,	// (0x0002323a) link_highlight_pane

0xe730,	// (0x0002459c) popup_preview_text_window_t5_ParamLimits

0xe730,	// (0x0002459c) popup_preview_text_window_t5

0xd437,	// (0x000232a3) cursor_digital_pane

0xd437,	// (0x000232a3) cursor_primary_pane

0xd448,	// (0x000232b4) cursor_primary_small_pane

0xd450,	// (0x000232bc) cursor_secondary_pane

0xd458,	// (0x000232c4) cursor_title_pane

0xd437,	// (0x000232a3) link_highlight_digital_pane

0xd43f,	// (0x000232ab) link_highlight_primary_pane

0xd448,	// (0x000232b4) link_highlight_primary_small_pane

0xd450,	// (0x000232bc) link_highlight_secondary_pane

0xd458,	// (0x000232c4) link_highlight_title_pane

0xd437,	// (0x000232a3) copy_highlight_digital_pane

0xd437,	// (0x000232a3) copy_highlight_primary_pane

0xd448,	// (0x000232b4) copy_highlight_primary_small_pane

0xd450,	// (0x000232bc) copy_highlight_secondary_pane

0xd458,	// (0x000232c4) copy_highlight_title_pane

0xd450,	// (0x000232bc) graphic_text_digital_pane

0xe0ab,	// (0x00023f17) graphic_text_primary_pane

0xe0b4,	// (0x00023f20) graphic_text_primary_small_pane

0xd448,	// (0x000232b4) graphic_text_secondary_pane

0xd437,	// (0x000232a3) graphic_text_title_pane

0x9635,	// (0x0001f4a1) cursor_primary_pane_g1

0xe09d,	// (0x00023f09) cursor_text_primary_t1

0xa398,	// (0x00020204) cursor_primary_small_pane_g1

0xe08f,	// (0x00023efb) cursor_text_primary_small_t1

0xa38e,	// (0x000201fa) cursor_primary_small_pane_g1_copy1

0xe081,	// (0x00023eed) cursor_text_primary_small_t1_copy1

0xe073,	// (0x00023edf) cursor_text_title_t1

0xa384,	// (0x000201f0) cursor_title_pane_g1

0x9635,	// (0x0001f4a1) cursor_digital_pane_g1

0xd460,	// (0x000232cc) cursor_text_digital_t1

0xe014,	// (0x00023e80) link_highlight_primary_pane_g1

0xe01c,	// (0x00023e88) link_highlight_primary_pane_t1

0xd46e,	// (0x000232da) link_highlight_primary_small_pane_g1

0xd476,	// (0x000232e2) link_highlight_primary_small_pane_t1

0xd46e,	// (0x000232da) link_highlight_secondary_pane_g1

0xd485,	// (0x000232f1) link_highlight_secondary_pane_t1

0xdf88,	// (0x00023df4) link_highlight_title_pane_g1

0xdf90,	// (0x00023dfc) link_highlight_title_pane_t1

0xdf71,	// (0x00023ddd) link_highlight_digital_pane_g1

0xdf79,	// (0x00023de5) link_highlight_digital_pane_t1

0xde65,	// (0x00023cd1) copy_highlight_primary_pane_g1

0xde6d,	// (0x00023cd9) copy_highlight_primary_pane_t1

0xde3f,	// (0x00023cab) copy_highlight_primary_small_pane_g1

0xde56,	// (0x00023cc2) copy_highlight_primary_small_pane_t1

0xd494,	// (0x00023300) copy_highlight_secondary_pane_g1

0xd49c,	// (0x00023308) copy_highlight_secondary_pane_t1

0xde3f,	// (0x00023cab) copy_highlight_title_pane_g1

0xde47,	// (0x00023cb3) copy_highlight_title_pane_t1

0xde65,	// (0x00023cd1) copy_highlight_digital_pane_g1

0xeca6,	// (0x00024b12) copy_highlight_digital_pane_t1

0xebfa,	// (0x00024a66) graphic_text_primary_pane_g1

0xec8a,	// (0x00024af6) graphic_text_primary_pane_t1

0xec98,	// (0x00024b04) graphic_text_primary_pane_t2

0x0001,

0xf9fb,	// (0x00025867) graphic_text_primary_pane_t

0xec66,	// (0x00024ad2) graphic_text_primary_small_pane_g1

0xec6e,	// (0x00024ada) graphic_text_primary_small_pane_t1

0xec7c,	// (0x00024ae8) graphic_text_primary_small_pane_t2

0x0001,

0xf9f6,	// (0x00025862) graphic_text_primary_small_pane_t

0xec42,	// (0x00024aae) graphic_text_secondary_pane_g1

0xec4a,	// (0x00024ab6) graphic_text_secondary_pane_t1

0xec58,	// (0x00024ac4) graphic_text_secondary_pane_t2

0x0001,

0xf9f1,	// (0x0002585d) graphic_text_secondary_pane_t

0xec1e,	// (0x00024a8a) graphic_text_title_pane_g1

0xec26,	// (0x00024a92) graphic_text_title_pane_t1

0xec34,	// (0x00024aa0) graphic_text_title_pane_t2

0x0001,

0xf9ec,	// (0x00025858) graphic_text_title_pane_t

0xebfa,	// (0x00024a66) graphic_text_digital_pane_g1

0xec02,	// (0x00024a6e) graphic_text_digital_pane_t1

0xec10,	// (0x00024a7c) graphic_text_digital_pane_t2

0x0001,

0xf9e7,	// (0x00025853) graphic_text_digital_pane_t

0xc351,	// (0x000221bd) navi_icon_pane_srt_ParamLimits

0xc351,	// (0x000221bd) navi_icon_pane_srt

0xc2f5,	// (0x00022161) navi_midp_pane_srt

0xc2f5,	// (0x00022161) navi_navi_pane_srt

0xc351,	// (0x000221bd) navi_text_pane_srt_ParamLimits

0xc351,	// (0x000221bd) navi_text_pane_srt

0xebc5,	// (0x00024a31) navi_navi_icon_text_pane_srt

0xebcd,	// (0x00024a39) navi_navi_pane_srt_g1_ParamLimits

0xebcd,	// (0x00024a39) navi_navi_pane_srt_g1

0xebdf,	// (0x00024a4b) navi_navi_pane_srt_g2_ParamLimits

0xebdf,	// (0x00024a4b) navi_navi_pane_srt_g2

0x0001,

0xf9e2,	// (0x0002584e) navi_navi_pane_srt_g_ParamLimits

0xf9e2,	// (0x0002584e) navi_navi_pane_srt_g

0xebf1,	// (0x00024a5d) navi_navi_tabs_pane_srt

0xebc5,	// (0x00024a31) navi_navi_text_pane_srt

0xebc5,	// (0x00024a31) navi_navi_volume_pane_srt

0xebb6,	// (0x00024a22) navi_navi_text_pane_srt_t1

0x6a2e,	// (0x0001c89a) navi_navi_volume_pane_srt_g1

0x6a36,	// (0x0001c8a2) volume_small_pane_srt_ParamLimits

0x6a36,	// (0x0001c8a2) volume_small_pane_srt

0x6440,	// (0x0001c2ac) volume_small_pane_srt_g1_ParamLimits

0x6440,	// (0x0001c2ac) volume_small_pane_srt_g1

0x6450,	// (0x0001c2bc) volume_small_pane_srt_g2_ParamLimits

0x6450,	// (0x0001c2bc) volume_small_pane_srt_g2

0x6461,	// (0x0001c2cd) volume_small_pane_srt_g3_ParamLimits

0x6461,	// (0x0001c2cd) volume_small_pane_srt_g3

0x6472,	// (0x0001c2de) volume_small_pane_srt_g4_ParamLimits

0x6472,	// (0x0001c2de) volume_small_pane_srt_g4

0x6483,	// (0x0001c2ef) volume_small_pane_srt_g5_ParamLimits

0x6483,	// (0x0001c2ef) volume_small_pane_srt_g5

0x6494,	// (0x0001c300) volume_small_pane_srt_g6_ParamLimits

0x6494,	// (0x0001c300) volume_small_pane_srt_g6

0x64a5,	// (0x0001c311) volume_small_pane_srt_g7_ParamLimits

0x64a5,	// (0x0001c311) volume_small_pane_srt_g7

0x64b6,	// (0x0001c322) volume_small_pane_srt_g8_ParamLimits

0x64b6,	// (0x0001c322) volume_small_pane_srt_g8

0x64c7,	// (0x0001c333) volume_small_pane_srt_g9_ParamLimits

0x64c7,	// (0x0001c333) volume_small_pane_srt_g9

0x64d8,	// (0x0001c344) volume_small_pane_srt_g10_ParamLimits

0x64d8,	// (0x0001c344) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x00025609) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x00025609) volume_small_pane_srt_g

0xc5c9,	// (0x00022435) query_popup_data_pane_cp2

0xeb9c,	// (0x00024a08) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xeb9c,	// (0x00024a08) navi_navi_icon_text_pane_srt_t1

0xe0ab,	// (0x00023f17) navi_tabs_2_long_pane_srt

0xe0ab,	// (0x00023f17) navi_tabs_2_pane_srt

0xe0ab,	// (0x00023f17) navi_tabs_3_long_pane_srt

0xe0ab,	// (0x00023f17) navi_tabs_3_pane_srt

0xe0ab,	// (0x00023f17) navi_tabs_4_pane_srt

0x6a0e,	// (0x0001c87a) tabs_2_active_pane_srt_ParamLimits

0x6a0e,	// (0x0001c87a) tabs_2_active_pane_srt

0x6a1e,	// (0x0001c88a) tabs_2_passive_pane_srt_ParamLimits

0x6a1e,	// (0x0001c88a) tabs_2_passive_pane_srt

0xda12,	// (0x0002387e) bg_passive_tab_pane_cp1_srt_ParamLimits

0xda12,	// (0x0002387e) bg_passive_tab_pane_cp1_srt

0xeb7a,	// (0x000249e6) bg_passive_tab_pane_g1_cp1_srt

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp1_srt

0xeb83,	// (0x000249ef) bg_passive_tab_pane_g3_cp1_srt

0xc343,	// (0x000221af) bg_active_tab_pane_cp1_srt_ParamLimits

0xc343,	// (0x000221af) bg_active_tab_pane_cp1_srt

0xeb8c,	// (0x000249f8) tabs_2_active_pane_srt_g1

0xa8fe,	// (0x0002076a) tabs_2_active_pane_srt_t1_ParamLimits

0xa8fe,	// (0x0002076a) tabs_2_active_pane_srt_t1

0xeb7a,	// (0x000249e6) bg_active_tab_pane_g1_cp1_srt

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp1_srt

0xeb83,	// (0x000249ef) bg_active_tab_pane_g3_cp1_srt

0x69db,	// (0x0001c847) tabs_3_active_pane_srt_ParamLimits

0x69db,	// (0x0001c847) tabs_3_active_pane_srt

0x69ec,	// (0x0001c858) tabs_3_passive_pane_cp_srt_ParamLimits

0x69ec,	// (0x0001c858) tabs_3_passive_pane_cp_srt

0x69fd,	// (0x0001c869) tabs_3_passive_pane_srt_ParamLimits

0x69fd,	// (0x0001c869) tabs_3_passive_pane_srt

0xda12,	// (0x0002387e) bg_passive_tab_pane_cp2_srt_ParamLimits

0xda12,	// (0x0002387e) bg_passive_tab_pane_cp2_srt

0xd4ab,	// (0x00023317) bg_passive_tab_pane_g1_cp2_srt

0xd077,	// (0x00022ee3) bg_passive_tab_pane_g2_cp2_srt

0xd4b4,	// (0x00023320) bg_passive_tab_pane_g3_cp2_srt

0xc343,	// (0x000221af) bg_active_tab_pane_cp2_srt_ParamLimits

0xc343,	// (0x000221af) bg_active_tab_pane_cp2_srt

0xeb72,	// (0x000249de) tabs_3_active_pane_srt_g1

0xa8e8,	// (0x00020754) tabs_3_active_pane_srt_t1_ParamLimits

0xa8e8,	// (0x00020754) tabs_3_active_pane_srt_t1

0xd4ab,	// (0x00023317) bg_active_tab_pane_g1_cp2_srt

0xd077,	// (0x00022ee3) bg_active_tab_pane_g2_cp2_srt

0xd4b4,	// (0x00023320) bg_active_tab_pane_g3_cp2_srt

0x6993,	// (0x0001c7ff) tabs_4_active_pane_srt_ParamLimits

0x6993,	// (0x0001c7ff) tabs_4_active_pane_srt

0x69a5,	// (0x0001c811) tabs_4_passive_pane_cp2_srt_ParamLimits

0x69a5,	// (0x0001c811) tabs_4_passive_pane_cp2_srt

0xd5d8,	// (0x00023444) aid_size_cell_toolbar

0xe87c,	// (0x000246e8) main_idle_act_pane_ParamLimits

0xd6bc,	// (0x00023528) popup_large_graphic_colour_window_ParamLimits

0x9de2,	// (0x0001fc4e) popup_toolbar_window_ParamLimits

0x9de2,	// (0x0001fc4e) popup_toolbar_window

0x5549,	// (0x0001b3b5) list_single_graphic_2heading_pane_ParamLimits

0x5549,	// (0x0001b3b5) list_single_graphic_2heading_pane

0xcc8d,	// (0x00022af9) aid_size_cell_apps_grid_lsc_pane

0xcc9f,	// (0x00022b0b) aid_size_cell_apps_grid_prt_pane

0xd630,	// (0x0002349c) bg_wml_button_pane_cp1_ParamLimits

0xd630,	// (0x0002349c) bg_wml_button_pane_cp1

0xa334,	// (0x000201a0) form_midp_field_text_pane_t1_ParamLimits

0xda12,	// (0x0002387e) input_focus_pane_cp050_ParamLimits

0xdb5a,	// (0x000239c6) list_midp_form_text_pane_ParamLimits

0xdb37,	// (0x000239a3) input_focus_pane_cp051_ParamLimits

0xdb4b,	// (0x000239b7) list_midp_choice_pane_ParamLimits

0xa2c9,	// (0x00020135) list_single_2graphic_pane_cp3_ParamLimits

0xa2c9,	// (0x00020135) list_single_2graphic_pane_cp3

0xa2df,	// (0x0002014b) list_single_midp_graphic_pane_ParamLimits

0xa2df,	// (0x0002014b) list_single_midp_graphic_pane

0x4d2c,	// (0x0001ab98) list_single_graphic_2heading_pane_g1_ParamLimits

0x4d2c,	// (0x0001ab98) list_single_graphic_2heading_pane_g1

0x4cb2,	// (0x0001ab1e) list_single_graphic_2heading_pane_g4_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_graphic_2heading_pane_g4

0x4cbe,	// (0x0001ab2a) list_single_graphic_2heading_pane_g5_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002565c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002565c) list_single_graphic_2heading_pane_g

0x53fd,	// (0x0001b269) list_single_graphic_2heading_pane_t1_ParamLimits

0x53fd,	// (0x0001b269) list_single_graphic_2heading_pane_t1

0x5411,	// (0x0001b27d) list_single_graphic_2heading_pane_t2_ParamLimits

0x5411,	// (0x0001b27d) list_single_graphic_2heading_pane_t2

0x542d,	// (0x0001b299) list_single_graphic_2heading_pane_t3_ParamLimits

0x542d,	// (0x0001b299) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x00025663) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x00025663) list_single_graphic_2heading_pane_t

0xd860,	// (0x000236cc) bg_popup_sub_pane_cp2

0xd88a,	// (0x000236f6) grid_toobar_pane

0x6633,	// (0x0001c49f) cell_toolbar_pane_ParamLimits

0x6633,	// (0x0001c49f) cell_toolbar_pane

0xd8c6,	// (0x00023732) cell_toolbar_pane_g1_ParamLimits

0xd8c6,	// (0x00023732) cell_toolbar_pane_g1

0xd8da,	// (0x00023746) cell_toolbar_pane_g2_ParamLimits

0xd8da,	// (0x00023746) cell_toolbar_pane_g2

0x0001,

0xf7fe,	// (0x0002566a) cell_toolbar_pane_g_ParamLimits

0xf7fe,	// (0x0002566a) cell_toolbar_pane_g

0xd8fc,	// (0x00023768) grid_highlight_pane_cp2_ParamLimits

0xd8fc,	// (0x00023768) grid_highlight_pane_cp2

0xd916,	// (0x00023782) toolbar_button_pane

0xd922,	// (0x0002378e) toolbar_button_pane_g1

0xd92a,	// (0x00023796) toolbar_button_pane_g2

0xd932,	// (0x0002379e) toolbar_button_pane_g3

0xd93a,	// (0x000237a6) toolbar_button_pane_g4

0xd942,	// (0x000237ae) toolbar_button_pane_g5

0xd94a,	// (0x000237b6) toolbar_button_pane_g6

0xd952,	// (0x000237be) toolbar_button_pane_g7

0xd95a,	// (0x000237c6) toolbar_button_pane_g8

0xd962,	// (0x000237ce) toolbar_button_pane_g9

0x0009,

0xf803,	// (0x0002566f) toolbar_button_pane_g

0x666b,	// (0x0001c4d7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x666b,	// (0x0001c4d7) list_single_2graphic_pane_g1_cp3

0xa22b,	// (0x00020097) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa22b,	// (0x00020097) list_single_2graphic_pane_g2_cp3

0xd1fa,	// (0x00023066) list_single_2graphic_pane_g3_cp3

0x6688,	// (0x0001c4f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6688,	// (0x0001c4f4) list_single_2graphic_pane_g4_cp3

0x6694,	// (0x0001c500) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6694,	// (0x0001c500) list_single_2graphic_pane_t1_cp3

0xd1ee,	// (0x0002305a) list_single_midp_graphic_pane_g2_ParamLimits

0xd1ee,	// (0x0002305a) list_single_midp_graphic_pane_g2

0xd5e0,	// (0x0002344c) aid_zoom_text_primary

0x53d1,	// (0x0001b23d) aid_zoom_text_secondary

0xd568,	// (0x000233d4) status_small_pane_g7_ParamLimits

0xd568,	// (0x000233d4) status_small_pane_g7

0xd58b,	// (0x000233f7) status_small_pane_t1_ParamLimits

0x9020,	// (0x0001ee8c) title_pane_g2

0x0003,

0xf592,	// (0x000253fe) title_pane_g

0x92ab,	// (0x0001f117) aid_size_cell_colour_1_pane_ParamLimits

0x92ab,	// (0x0001f117) aid_size_cell_colour_1_pane

0x92bf,	// (0x0001f12b) aid_size_cell_colour_2_pane_ParamLimits

0x92bf,	// (0x0001f12b) aid_size_cell_colour_2_pane

0x92d3,	// (0x0001f13f) aid_size_cell_colour_3_pane_ParamLimits

0x92d3,	// (0x0001f13f) aid_size_cell_colour_3_pane

0x92e7,	// (0x0001f153) aid_size_cell_colour_4_pane_ParamLimits

0x92e7,	// (0x0001f153) aid_size_cell_colour_4_pane

0x609c,	// (0x0001bf08) title_pane_stacon_g1_ParamLimits

0x609c,	// (0x0001bf08) title_pane_stacon_g1

0xdec4,	// (0x00023d30) popup_note_wait_window_g3_ParamLimits

0xdec4,	// (0x00023d30) popup_note_wait_window_g3

0xdf3a,	// (0x00023da6) popup_note_wait_window_t5_ParamLimits

0xdf3a,	// (0x00023da6) popup_note_wait_window_t5

0xc2f5,	// (0x00022161) main_feb_china_hwr_fs_writing_pane

0x980a,	// (0x0001f676) popup_feb_china_hwr_fs_window_ParamLimits

0x980a,	// (0x0001f676) popup_feb_china_hwr_fs_window

0xa23c,	// (0x000200a8) aid_size_cell_hwr_fs_ParamLimits

0xa23c,	// (0x000200a8) aid_size_cell_hwr_fs

0xda12,	// (0x0002387e) bg_popup_sub_pane_cp3_ParamLimits

0xda12,	// (0x0002387e) bg_popup_sub_pane_cp3

0xa251,	// (0x000200bd) grid_hwr_fs_pane_ParamLimits

0xa251,	// (0x000200bd) grid_hwr_fs_pane

0x66f1,	// (0x0001c55d) linegrid_hwr_fs_pane_ParamLimits

0x66f1,	// (0x0001c55d) linegrid_hwr_fs_pane

0xa269,	// (0x000200d5) cell_hwr_fs_pane_ParamLimits

0xa269,	// (0x000200d5) cell_hwr_fs_pane

0xda1e,	// (0x0002388a) linegrid_hwr_fs_pane_g1_ParamLimits

0xda1e,	// (0x0002388a) linegrid_hwr_fs_pane_g1

0xa28f,	// (0x000200fb) linegrid_hwr_fs_pane_g2_ParamLimits

0xa28f,	// (0x000200fb) linegrid_hwr_fs_pane_g2

0xda2a,	// (0x00023896) linegrid_hwr_fs_pane_g3_ParamLimits

0xda2a,	// (0x00023896) linegrid_hwr_fs_pane_g3

0x6723,	// (0x0001c58f) linegrid_hwr_fs_pane_g4_ParamLimits

0x6723,	// (0x0001c58f) linegrid_hwr_fs_pane_g4

0x673d,	// (0x0001c5a9) linegrid_hwr_fs_pane_g5_ParamLimits

0x673d,	// (0x0001c5a9) linegrid_hwr_fs_pane_g5

0x0004,

0xf829,	// (0x00025695) linegrid_hwr_fs_pane_g_ParamLimits

0xf829,	// (0x00025695) linegrid_hwr_fs_pane_g

0xda36,	// (0x000238a2) cell_hwr_fs_pane_g1_ParamLimits

0xda36,	// (0x000238a2) cell_hwr_fs_pane_g1

0xd82e,	// (0x0002369a) cell_hwr_fs_pane_g2_ParamLimits

0xd82e,	// (0x0002369a) cell_hwr_fs_pane_g2

0xa2a1,	// (0x0002010d) cell_hwr_fs_pane_g3_ParamLimits

0xa2a1,	// (0x0002010d) cell_hwr_fs_pane_g3

0xa2ae,	// (0x0002011a) cell_hwr_fs_pane_g4_ParamLimits

0xa2ae,	// (0x0002011a) cell_hwr_fs_pane_g4

0x0003,

0xf834,	// (0x000256a0) cell_hwr_fs_pane_g_ParamLimits

0xf834,	// (0x000256a0) cell_hwr_fs_pane_g

0xa2bb,	// (0x00020127) cell_hwr_fs_pane_t1

0xc2f5,	// (0x00022161) grid_highlight_pane_cp6

0xc2f5,	// (0x00022161) main_idle_act2_pane

0xca9e,	// (0x0002290a) aid_inside_area_popup_secondary

0xa4f4,	// (0x00020360) aid_inside_area_window_primary_ParamLimits

0xa4f4,	// (0x00020360) aid_inside_area_window_primary

0xecb5,	// (0x00024b21) ai2_news_ticker_pane

0xecbd,	// (0x00024b29) aid_size_cell_ai1_link_ParamLimits

0xecbd,	// (0x00024b29) aid_size_cell_ai1_link

0xecd7,	// (0x00024b43) popup_ai2_data_window_ParamLimits

0xecd7,	// (0x00024b43) popup_ai2_data_window

0xeceb,	// (0x00024b57) popup_ai2_link_window_ParamLimits

0xeceb,	// (0x00024b57) popup_ai2_link_window

0xda12,	// (0x0002387e) bg_popup_sub_pane_cp4_ParamLimits

0xda12,	// (0x0002387e) bg_popup_sub_pane_cp4

0xecff,	// (0x00024b6b) grid_ai2_link_pane_ParamLimits

0xecff,	// (0x00024b6b) grid_ai2_link_pane

0xed16,	// (0x00024b82) popup_ai2_link_window_g1_ParamLimits

0xed16,	// (0x00024b82) popup_ai2_link_window_g1

0xed22,	// (0x00024b8e) popup_ai2_link_window_g2_ParamLimits

0xed22,	// (0x00024b8e) popup_ai2_link_window_g2

0x0001,

0xfa00,	// (0x0002586c) popup_ai2_link_window_g_ParamLimits

0xfa00,	// (0x0002586c) popup_ai2_link_window_g

0xed31,	// (0x00024b9d) ai2_mp_button_pane

0xed39,	// (0x00024ba5) ai2_mp_volume_pane

0xdb37,	// (0x000239a3) bg_popup_sub_pane_cp5_ParamLimits

0xdb37,	// (0x000239a3) bg_popup_sub_pane_cp5

0xed41,	// (0x00024bad) heading_ai2_gene_pane_ParamLimits

0xed41,	// (0x00024bad) heading_ai2_gene_pane

0xed4d,	// (0x00024bb9) list_ai2_gene_pane_ParamLimits

0xed4d,	// (0x00024bb9) list_ai2_gene_pane

0xed95,	// (0x00024c01) cell_ai2_link_pane_ParamLimits

0xed95,	// (0x00024c01) cell_ai2_link_pane

0xedab,	// (0x00024c17) cell_ai2_link_pane_g1

0xc2f5,	// (0x00022161) grid_highlight_pane_cp7

0x6a4b,	// (0x0001c8b7) ai2_mp_volume_pane_g1

0xee7c,	// (0x00024ce8) ai2_mp_volume_pane_g2

0xedf1,	// (0x00024c5d) list_ai2_gene_pane_t1

0xee84,	// (0x00024cf0) ai2_mp_volume_pane_g3

0x0002,

0xfa19,	// (0x00025885) ai2_mp_volume_pane_g

0x6a53,	// (0x0001c8bf) volume_small_pane_cp3

0xee8c,	// (0x00024cf8) aid_size_cell_ai2_button

0xee94,	// (0x00024d00) grid_ai2_button_pane

0xee9d,	// (0x00024d09) cell_ai2_button_pane_ParamLimits

0xee9d,	// (0x00024d09) cell_ai2_button_pane

0xc2eb,	// (0x00022157) cell_ai2_button_pane_g1

0xc2f5,	// (0x00022161) grid_highlight_pane_cp8

0xee3c,	// (0x00024ca8) ai2_gene_pane_t1_ParamLimits

0xee3c,	// (0x00024ca8) ai2_gene_pane_t1

0x979c,	// (0x0001f608) aid_height_parent_landscape

0xa6a4,	// (0x00020510) aid_height_set_list

0xe87c,	// (0x000246e8) aid_size_parent

0xeb1c,	// (0x00024988) aid_size_cell_graphic_pane_ParamLimits

0xed5d,	// (0x00024bc9) popup_ai2_data_window_g1_ParamLimits

0xed5d,	// (0x00024bc9) popup_ai2_data_window_g1

0xed69,	// (0x00024bd5) ai2_news_ticker_pane_g1

0xed71,	// (0x00024bdd) ai2_news_ticker_pane_g2

0x0001,

0xfa05,	// (0x00025871) ai2_news_ticker_pane_g

0xed79,	// (0x00024be5) ai2_news_ticker_pane_t1

0xed87,	// (0x00024bf3) ai2_news_ticker_pane_t2

0x0001,

0xfa0a,	// (0x00025876) ai2_news_ticker_pane_t

0xedb4,	// (0x00024c20) heading_ai2_gene_pane_g1

0xedbc,	// (0x00024c28) heading_ai2_gene_pane_t1_ParamLimits

0xedbc,	// (0x00024c28) heading_ai2_gene_pane_t1

0xedd1,	// (0x00024c3d) list_highlight_pane_cp6

0xedd9,	// (0x00024c45) ai2_gene_pane_ParamLimits

0xedd9,	// (0x00024c45) ai2_gene_pane

0xedff,	// (0x00024c6b) list_ai2_gene_pane_t2

0x0001,

0xfa0f,	// (0x0002587b) list_ai2_gene_pane_t

0xee0d,	// (0x00024c79) list_highlight_pane_cp8_ParamLimits

0xee0d,	// (0x00024c79) list_highlight_pane_cp8

0xee1e,	// (0x00024c8a) ai2_gene_pane_g1_ParamLimits

0xee1e,	// (0x00024c8a) ai2_gene_pane_g1

0xee30,	// (0x00024c9c) ai2_gene_pane_g2_ParamLimits

0xee30,	// (0x00024c9c) ai2_gene_pane_g2

0x0001,

0xfa14,	// (0x00025880) ai2_gene_pane_g_ParamLimits

0xfa14,	// (0x00025880) ai2_gene_pane_g

0xc92e,	// (0x0002279a) scroll_pane_cp12

0x9759,	// (0x0001f5c5) control_pane_t3_ParamLimits

0x9759,	// (0x0001f5c5) control_pane_t3

0xd57c,	// (0x000233e8) status_small_pane_g8_ParamLimits

0xd57c,	// (0x000233e8) status_small_pane_g8

0x989d,	// (0x0001f709) popup_find_window_ParamLimits

0x9b18,	// (0x0001f984) popup_note_image_window_ParamLimits

0x4d2c,	// (0x0001ab98) list_double2_graphic_pane_vc_g1_ParamLimits

0x4d2c,	// (0x0001ab98) list_double2_graphic_pane_vc_g1

0x4cb2,	// (0x0001ab1e) list_double2_graphic_pane_vc_g2_ParamLimits

0x4cb2,	// (0x0001ab1e) list_double2_graphic_pane_vc_g2

0x4cbe,	// (0x0001ab2a) list_double2_graphic_pane_vc_g3_ParamLimits

0x4cbe,	// (0x0001ab2a) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f0,	// (0x0002565c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f0,	// (0x0002565c) list_double2_graphic_pane_vc_g

0x5445,	// (0x0001b2b1) list_double2_graphic_pane_vc_t1_ParamLimits

0x5445,	// (0x0001b2b1) list_double2_graphic_pane_vc_t1

0x4cb2,	// (0x0001ab1e) list_single_heading_pane_vc_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_heading_pane_vc_g1

0x4cbe,	// (0x0001ab2a) list_single_heading_pane_vc_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00025478) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00025478) list_single_heading_pane_vc_g

0x545b,	// (0x0001b2c7) list_single_heading_pane_vc_t1_ParamLimits

0x545b,	// (0x0001b2c7) list_single_heading_pane_vc_t1

0x5471,	// (0x0001b2dd) list_single_heading_pane_vc_t2_ParamLimits

0x5471,	// (0x0001b2dd) list_single_heading_pane_vc_t2

0x0001,

0xf818,	// (0x00025684) list_single_heading_pane_vc_t_ParamLimits

0xf818,	// (0x00025684) list_single_heading_pane_vc_t

0xd96a,	// (0x000237d6) list_setting_number_pane_vc_g1_ParamLimits

0xd96a,	// (0x000237d6) list_setting_number_pane_vc_g1

0xd976,	// (0x000237e2) list_setting_number_pane_vc_g2_ParamLimits

0xd976,	// (0x000237e2) list_setting_number_pane_vc_g2

0x0001,

0xf81d,	// (0x00025689) list_setting_number_pane_vc_g_ParamLimits

0xf81d,	// (0x00025689) list_setting_number_pane_vc_g

0xd982,	// (0x000237ee) list_setting_number_pane_vc_t1_ParamLimits

0xd982,	// (0x000237ee) list_setting_number_pane_vc_t1

0xd996,	// (0x00023802) list_setting_number_pane_vc_t2_ParamLimits

0xd996,	// (0x00023802) list_setting_number_pane_vc_t2

0xd9b2,	// (0x0002381e) list_setting_number_pane_vc_t3_ParamLimits

0xd9b2,	// (0x0002381e) list_setting_number_pane_vc_t3

0x0002,

0xf822,	// (0x0002568e) list_setting_number_pane_vc_t_ParamLimits

0xf822,	// (0x0002568e) list_setting_number_pane_vc_t

0xd9da,	// (0x00023846) set_value_pane_vc_ParamLimits

0xd9da,	// (0x00023846) set_value_pane_vc

0x5549,	// (0x0001b3b5) list_double2_graphic_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double2_graphic_pane_vc

0xea99,	// (0x00024905) list_double2_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00024905) list_double2_large_graphic_pane_vc

0x5549,	// (0x0001b3b5) list_double2_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double2_pane_vc

0x5549,	// (0x0001b3b5) list_double_graphic_heading_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double_graphic_heading_pane_vc

0x5549,	// (0x0001b3b5) list_double_graphic_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double_graphic_pane_vc

0x5549,	// (0x0001b3b5) list_double_heading_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double_heading_pane_vc

0xea99,	// (0x00024905) list_double_large_graphic_pane_vc_ParamLimits

0xea99,	// (0x00024905) list_double_large_graphic_pane_vc

0x5549,	// (0x0001b3b5) list_double_number_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double_number_pane_vc

0x5549,	// (0x0001b3b5) list_double_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double_pane_vc

0x5549,	// (0x0001b3b5) list_double_time_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_double_time_pane_vc

0x5549,	// (0x0001b3b5) list_setting_number_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_setting_number_pane_vc

0x5549,	// (0x0001b3b5) list_setting_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_setting_pane_vc

0x5549,	// (0x0001b3b5) list_single_graphic_heading_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_single_graphic_heading_pane_vc

0x5549,	// (0x0001b3b5) list_single_heading_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_single_heading_pane_vc

0x5549,	// (0x0001b3b5) list_single_number_heading_pane_vc_ParamLimits

0x5549,	// (0x0001b3b5) list_single_number_heading_pane_vc

0x4d2c,	// (0x0001ab98) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4d2c,	// (0x0001ab98) list_double_graphic_heading_pane_vc_g1

0x4cb2,	// (0x0001ab1e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4cb2,	// (0x0001ab1e) list_double_graphic_heading_pane_vc_g2

0x4cbe,	// (0x0001ab2a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4cbe,	// (0x0001ab2a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7f0,	// (0x0002565c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x0002565c) list_double_graphic_heading_pane_vc_g

0x561a,	// (0x0001b486) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x561a,	// (0x0001b486) list_double_graphic_heading_pane_vc_t1

0x545b,	// (0x0001b2c7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x545b,	// (0x0001b2c7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa20,	// (0x0002588c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x0002588c) list_double_graphic_heading_pane_vc_t

0xd96a,	// (0x000237d6) list_setting_pane_vc_g1_ParamLimits

0xd96a,	// (0x000237d6) list_setting_pane_vc_g1

0xd976,	// (0x000237e2) list_setting_pane_vc_g2_ParamLimits

0xd976,	// (0x000237e2) list_setting_pane_vc_g2

0x0001,

0xf81d,	// (0x00025689) list_setting_pane_vc_g_ParamLimits

0xf81d,	// (0x00025689) list_setting_pane_vc_g

0xf093,	// (0x00024eff) list_setting_pane_vc_t1_ParamLimits

0xf093,	// (0x00024eff) list_setting_pane_vc_t1

0xf0a7,	// (0x00024f13) list_setting_pane_vc_t2_ParamLimits

0xf0a7,	// (0x00024f13) list_setting_pane_vc_t2

0x0001,

0xfa63,	// (0x000258cf) list_setting_pane_vc_t_ParamLimits

0xfa63,	// (0x000258cf) list_setting_pane_vc_t

0xd9da,	// (0x00023846) set_value_pane_cp_vc_ParamLimits

0xd9da,	// (0x00023846) set_value_pane_cp_vc

0x4cb2,	// (0x0001ab1e) list_single_number_heading_pane_vc_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_number_heading_pane_vc_g1

0x4cbe,	// (0x0001ab2a) list_single_number_heading_pane_vc_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00025478) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00025478) list_single_number_heading_pane_vc_g

0x545b,	// (0x0001b2c7) list_single_number_heading_pane_vc_t1_ParamLimits

0x545b,	// (0x0001b2c7) list_single_number_heading_pane_vc_t1

0x562e,	// (0x0001b49a) list_single_number_heading_pane_vc_t2_ParamLimits

0x562e,	// (0x0001b49a) list_single_number_heading_pane_vc_t2

0x4d1a,	// (0x0001ab86) list_single_number_heading_pane_vc_t3_ParamLimits

0x4d1a,	// (0x0001ab86) list_single_number_heading_pane_vc_t3

0x0002,

0xfa68,	// (0x000258d4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x000258d4) list_single_number_heading_pane_vc_t

0x4d2c,	// (0x0001ab98) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4d2c,	// (0x0001ab98) list_single_graphic_heading_pane_vc_g1

0x4cb2,	// (0x0001ab1e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4cb2,	// (0x0001ab1e) list_single_graphic_heading_pane_vc_g4

0x4cbe,	// (0x0001ab2a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4cbe,	// (0x0001ab2a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f0,	// (0x0002565c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f0,	// (0x0002565c) list_single_graphic_heading_pane_vc_g

0x545b,	// (0x0001b2c7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x545b,	// (0x0001b2c7) list_single_graphic_heading_pane_vc_t1

0x5642,	// (0x0001b4ae) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5642,	// (0x0001b4ae) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x000258db) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x000258db) list_single_graphic_heading_pane_vc_t

0x4cb2,	// (0x0001ab1e) list_double2_pane_vc_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_double2_pane_vc_g1

0x4cbe,	// (0x0001ab2a) list_double2_pane_vc_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x00025478) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x00025478) list_double2_pane_vc_g

0x5511,	// (0x0001b37d) list_double2_pane_vc_t1_ParamLimits

0x5511,	// (0x0001b37d) list_double2_pane_vc_t1

0x5656,	// (0x0001b4c2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5656,	// (0x0001b4c2) list_double2_large_graphic_pane_vc_g1

0x5662,	// (0x0001b4ce) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5662,	// (0x0001b4ce) list_double2_large_graphic_pane_vc_g2

0x566e,	// (0x0001b4da) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x566e,	// (0x0001b4da) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x00025495) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x00025495) list_double2_large_graphic_pane_vc_g

0x567a,	// (0x0001b4e6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x567a,	// (0x0001b4e6) list_double2_large_graphic_pane_vc_t1

0x5690,	// (0x0001b4fc) list_double_time_pane_vc_g1_ParamLimits

0x5690,	// (0x0001b4fc) list_double_time_pane_vc_g1

0x569c,	// (0x0001b508) list_double_time_pane_vc_g2_ParamLimits

0x569c,	// (0x0001b508) list_double_time_pane_vc_g2

0x0001,

0xfa74,	// (0x000258e0) list_double_time_pane_vc_g_ParamLimits

0xfa74,	// (0x000258e0) list_double_time_pane_vc_g

0x56a8,	// (0x0001b514) list_double_time_pane_vc_t1_ParamLimits

0x56a8,	// (0x0001b514) list_double_time_pane_vc_t1

0x56c1,	// (0x0001b52d) list_double_time_pane_vc_t2_ParamLimits

0x56c1,	// (0x0001b52d) list_double_time_pane_vc_t2

0x5701,	// (0x0001b56d) list_double_time_pane_vc_t3_ParamLimits

0x5701,	// (0x0001b56d) list_double_time_pane_vc_t3

0x5719,	// (0x0001b585) list_double_time_pane_vc_t4_ParamLimits

0x5719,	// (0x0001b585) list_double_time_pane_vc_t4

0x0003,

0xfa79,	// (0x000258e5) list_double_time_pane_vc_t_ParamLimits

0xfa79,	// (0x000258e5) list_double_time_pane_vc_t

0x4cb2,	// (0x0001ab1e) list_double_pane_vc_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_double_pane_vc_g1

0x4cbe,	// (0x0001ab2a) list_double_pane_vc_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x00025478) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x00025478) list_double_pane_vc_g

0x572d,	// (0x0001b599) list_double_pane_vc_t1_ParamLimits

0x572d,	// (0x0001b599) list_double_pane_vc_t1

0x573f,	// (0x0001b5ab) list_double_pane_vc_t2_ParamLimits

0x573f,	// (0x0001b5ab) list_double_pane_vc_t2

0x0001,

0xfa82,	// (0x000258ee) list_double_pane_vc_t_ParamLimits

0xfa82,	// (0x000258ee) list_double_pane_vc_t

0x4cb2,	// (0x0001ab1e) list_double_number_pane_vc_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_double_number_pane_vc_g1

0x4cbe,	// (0x0001ab2a) list_double_number_pane_vc_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x00025478) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x00025478) list_double_number_pane_vc_g

0x5757,	// (0x0001b5c3) list_double_number_pane_vc_t1_ParamLimits

0x5757,	// (0x0001b5c3) list_double_number_pane_vc_t1

0x576b,	// (0x0001b5d7) list_double_number_pane_vc_t2_ParamLimits

0x576b,	// (0x0001b5d7) list_double_number_pane_vc_t2

0x573f,	// (0x0001b5ab) list_double_number_pane_vc_t3_ParamLimits

0x573f,	// (0x0001b5ab) list_double_number_pane_vc_t3

0x0002,

0xfa87,	// (0x000258f3) list_double_number_pane_vc_t_ParamLimits

0xfa87,	// (0x000258f3) list_double_number_pane_vc_t

0x577d,	// (0x0001b5e9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x577d,	// (0x0001b5e9) list_double_large_graphic_pane_vc_g1

0x5789,	// (0x0001b5f5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5789,	// (0x0001b5f5) list_double_large_graphic_pane_vc_g2

0x566e,	// (0x0001b4da) list_double_large_graphic_pane_vc_g3_ParamLimits

0x566e,	// (0x0001b4da) list_double_large_graphic_pane_vc_g3

0x5798,	// (0x0001b604) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5798,	// (0x0001b604) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa8e,	// (0x000258fa) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa8e,	// (0x000258fa) list_double_large_graphic_pane_vc_g

0x57a4,	// (0x0001b610) list_double_large_graphic_pane_vc_t1_ParamLimits

0x57a4,	// (0x0001b610) list_double_large_graphic_pane_vc_t1

0x57b6,	// (0x0001b622) list_double_large_graphic_pane_vc_t2_ParamLimits

0x57b6,	// (0x0001b622) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa97,	// (0x00025903) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa97,	// (0x00025903) list_double_large_graphic_pane_vc_t

0x4cb2,	// (0x0001ab1e) list_double_heading_pane_vc_g1_ParamLimits

0x4cb2,	// (0x0001ab1e) list_double_heading_pane_vc_g1

0x4cbe,	// (0x0001ab2a) list_double_heading_pane_vc_g2_ParamLimits

0x4cbe,	// (0x0001ab2a) list_double_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x00025478) list_double_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x00025478) list_double_heading_pane_vc_g

0x57cf,	// (0x0001b63b) list_double_heading_pane_vc_t1_ParamLimits

0x57cf,	// (0x0001b63b) list_double_heading_pane_vc_t1

0x545b,	// (0x0001b2c7) list_double_heading_pane_vc_t2_ParamLimits

0x545b,	// (0x0001b2c7) list_double_heading_pane_vc_t2

0x0001,

0xfa9c,	// (0x00025908) list_double_heading_pane_vc_t_ParamLimits

0xfa9c,	// (0x00025908) list_double_heading_pane_vc_t

0x57e3,	// (0x0001b64f) list_double_graphic_pane_vc_g1_ParamLimits

0x57e3,	// (0x0001b64f) list_double_graphic_pane_vc_g1

0x57f3,	// (0x0001b65f) list_double_graphic_pane_vc_g2_ParamLimits

0x57f3,	// (0x0001b65f) list_double_graphic_pane_vc_g2

0x5802,	// (0x0001b66e) list_double_graphic_pane_vc_g3_ParamLimits

0x5802,	// (0x0001b66e) list_double_graphic_pane_vc_g3

0x0002,

0xfaa1,	// (0x0002590d) list_double_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0002590d) list_double_graphic_pane_vc_g

0x580e,	// (0x0001b67a) list_double_graphic_pane_vc_t1_ParamLimits

0x580e,	// (0x0001b67a) list_double_graphic_pane_vc_t1

0x573f,	// (0x0001b5ab) list_double_graphic_pane_vc_t2_ParamLimits

0x573f,	// (0x0001b5ab) list_double_graphic_pane_vc_t2

0x0001,

0xfaa8,	// (0x00025914) list_double_graphic_pane_vc_t_ParamLimits

0xfaa8,	// (0x00025914) list_double_graphic_pane_vc_t

0x5c1a,	// (0x0001ba86) aid_size_cell_fastswap

0x8e6e,	// (0x0001ecda) aid_size_cell_touch_ParamLimits

0x8e6e,	// (0x0001ecda) aid_size_cell_touch

0x5e7d,	// (0x0001bce9) popup_fast_swap_wide_window_ParamLimits

0x5e7d,	// (0x0001bce9) popup_fast_swap_wide_window

0x8fb9,	// (0x0001ee25) touch_pane_ParamLimits

0x8fb9,	// (0x0001ee25) touch_pane

0xc984,	// (0x000227f0) button_value_adjust_pane_cp2

0x50fc,	// (0x0001af68) button_value_adjust_pane_cp4

0x511c,	// (0x0001af88) form_field_data_pane_cp2

0x8b67,	// (0x0001e9d3) form_field_data_wide_pane_cp2

0xccd6,	// (0x00022b42) bg_scroll_pane_ParamLimits

0x61ff,	// (0x0001c06b) scroll_handle_pane_ParamLimits

0x6213,	// (0x0001c07f) scroll_sc2_down_pane_ParamLimits

0x6213,	// (0x0001c07f) scroll_sc2_down_pane

0xcd07,	// (0x00022b73) scroll_sc2_up_pane_ParamLimits

0xcd07,	// (0x00022b73) scroll_sc2_up_pane

0xaa35,	// (0x000208a1) grid_wheel_folder_pane_g1_ParamLimits

0xaa35,	// (0x000208a1) grid_wheel_folder_pane_g1

0x63d8,	// (0x0001c244) clock_nsta_pane_cp2_ParamLimits

0x63d8,	// (0x0001c244) clock_nsta_pane_cp2

0x9577,	// (0x0001f3e3) listscroll_midp_pane_ParamLimits

0x9588,	// (0x0001f3f4) midp_canvas_pane

0xd5d0,	// (0x0002343c) nsta_clock_indic_pane

0xd608,	// (0x00023474) listscroll_form_pane_vc

0xd610,	// (0x0002347c) listscroll_set_pane_vc_ParamLimits

0xd610,	// (0x0002347c) listscroll_set_pane_vc

0x9f3f,	// (0x0001fdab) clock_nsta_pane

0x9f69,	// (0x0001fdd5) indicator_nsta_pane

0xd860,	// (0x000236cc) bg_popup_sub_pane_cp2_ParamLimits

0xd874,	// (0x000236e0) find_pane_cp2_ParamLimits

0xd874,	// (0x000236e0) find_pane_cp2

0xd88a,	// (0x000236f6) grid_toobar_pane_ParamLimits

0xd9e6,	// (0x00023852) list_form_gen_pane_vc_ParamLimits

0xd9e6,	// (0x00023852) list_form_gen_pane_vc

0xd9fc,	// (0x00023868) scroll_pane_cp8_vc_ParamLimits

0xd9fc,	// (0x00023868) scroll_pane_cp8_vc

0xda4c,	// (0x000238b8) data_form_wide_pane_vc_ParamLimits

0xda4c,	// (0x000238b8) data_form_wide_pane_vc

0xda58,	// (0x000238c4) form_field_data_wide_pane_vc_g1

0xda60,	// (0x000238cc) form_field_data_wide_pane_vc_t1_ParamLimits

0xda60,	// (0x000238cc) form_field_data_wide_pane_vc_t1

0xc998,	// (0x00022804) input_focus_pane_cp6_vc_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_cp6_vc

0xa358,	// (0x000201c4) list_midp_pane_ParamLimits

0xe88e,	// (0x000246fa) scroll_pane_cp16_ParamLimits

0xe88e,	// (0x000246fa) scroll_pane_cp16

0xdcc1,	// (0x00023b2d) button_value_adjust_pane_ParamLimits

0xdcc1,	// (0x00023b2d) button_value_adjust_pane

0xa6b5,	// (0x00020521) button_value_adjust_pane_cp6_ParamLimits

0xa6b5,	// (0x00020521) button_value_adjust_pane_cp6

0xa7cb,	// (0x00020637) settings_code_pane_cp_ParamLimits

0xa7cb,	// (0x00020637) settings_code_pane_cp

0xc2eb,	// (0x00022157) cell_touch_pane_g1

0xc2eb,	// (0x00022157) cell_touch_pane_g2

0x0001,

0xf747,	// (0x000255b3) cell_touch_pane_g

0xa914,	// (0x00020780) cell_touch_pane_cp_ParamLimits

0xa914,	// (0x00020780) cell_touch_pane_cp

0xa930,	// (0x0002079c) cell_touch_pane_ParamLimits

0xa930,	// (0x0002079c) cell_touch_pane

0xc2eb,	// (0x00022157) scroll_sc2_down_pane_g1

0xc2eb,	// (0x00022157) scroll_sc2_up_pane_g1

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp4_vc

0xeeaf,	// (0x00024d1b) list_set_graphic_pane_vc_g1_ParamLimits

0xeeaf,	// (0x00024d1b) list_set_graphic_pane_vc_g1

0xeebb,	// (0x00024d27) list_set_graphic_pane_vc_g2_ParamLimits

0xeebb,	// (0x00024d27) list_set_graphic_pane_vc_g2

0x0001,

0xfa25,	// (0x00025891) list_set_graphic_pane_vc_g_ParamLimits

0xfa25,	// (0x00025891) list_set_graphic_pane_vc_g

0xeec7,	// (0x00024d33) text_primary_small_cp13_vc_ParamLimits

0xeec7,	// (0x00024d33) text_primary_small_cp13_vc

0xeedf,	// (0x00024d4b) list_set_graphic_pane_vc_ParamLimits

0xeedf,	// (0x00024d4b) list_set_graphic_pane_vc

0xc2f5,	// (0x00022161) input_focus_pane_cp2_vc

0xc2eb,	// (0x00022157) setting_code_pane_vc_g1

0xeef3,	// (0x00024d5f) setting_code_pane_vc_t1

0xef01,	// (0x00024d6d) set_text_pane_vc_t1_ParamLimits

0xef01,	// (0x00024d6d) set_text_pane_vc_t1

0xc2f5,	// (0x00022161) input_focus_pane_cp1_vc

0xef20,	// (0x00024d8c) list_set_text_pane_vc

0xc2eb,	// (0x00022157) setting_text_pane_vc_g1

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp2_vc

0xef2a,	// (0x00024d96) setting_slider_graphic_pane_vc_g1

0xef32,	// (0x00024d9e) setting_slider_graphic_pane_vc_t1

0xef40,	// (0x00024dac) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2a,	// (0x00025896) setting_slider_graphic_pane_vc_t

0xef4e,	// (0x00024dba) slider_set_pane_cp_vc

0xef56,	// (0x00024dc2) slider_set_pane_vc_g1

0xef5f,	// (0x00024dcb) slider_set_pane_vc_g2

0x0006,

0xfa2f,	// (0x0002589b) slider_set_pane_vc_g

0xc9ff,	// (0x0002286b) set_opt_bg_pane_g1_copy1

0xca07,	// (0x00022873) set_opt_bg_pane_g2_copy1

0xef8b,	// (0x00024df7) set_opt_bg_pane_g3_copy1

0xca17,	// (0x00022883) set_opt_bg_pane_g4_copy1

0xca1f,	// (0x0002288b) set_opt_bg_pane_g5_copy1

0xca27,	// (0x00022893) set_opt_bg_pane_g6_copy1

0xef93,	// (0x00024dff) set_opt_bg_pane_g7_copy1

0xef9d,	// (0x00024e09) set_opt_bg_pane_g8_copy1

0xefa5,	// (0x00024e11) set_opt_bg_pane_g9_copy1

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp_vc

0xefad,	// (0x00024e19) setting_slider_pane_vc_t1

0xef32,	// (0x00024d9e) setting_slider_pane_vc_t2

0xef40,	// (0x00024dac) setting_slider_pane_vc_t3

0x0002,

0xfa3e,	// (0x000258aa) setting_slider_pane_vc_t

0xef4e,	// (0x00024dba) slider_set_pane_vc

0x6761,	// (0x0001c5cd) volume_set_pane_vc_g1

0x6a5c,	// (0x0001c8c8) volume_set_pane_vc_g2

0x6a65,	// (0x0001c8d1) volume_set_pane_vc_g3

0x6a6e,	// (0x0001c8da) volume_set_pane_vc_g4

0x6a77,	// (0x0001c8e3) volume_set_pane_vc_g5

0x6a80,	// (0x0001c8ec) volume_set_pane_vc_g6

0x6a89,	// (0x0001c8f5) volume_set_pane_vc_g7

0x6a92,	// (0x0001c8fe) volume_set_pane_vc_g8

0x6a9b,	// (0x0001c907) volume_set_pane_vc_g9

0x6aa4,	// (0x0001c910) volume_set_pane_vc_g10

0x0009,

0xfa45,	// (0x000258b1) volume_set_pane_vc_g

0xefbc,	// (0x00024e28) volume_set_pane_vc

0xefc4,	// (0x00024e30) button_value_adjust_pane_cp1_vc

0xefce,	// (0x00024e3a) list_highlight_pane_cp2_vc

0xefd7,	// (0x00024e43) list_set_pane_vc_ParamLimits

0xefd7,	// (0x00024e43) list_set_pane_vc

0xf029,	// (0x00024e95) main_pane_set_vc_t1_ParamLimits

0xf029,	// (0x00024e95) main_pane_set_vc_t1

0xf03e,	// (0x00024eaa) main_pane_set_vc_t2_ParamLimits

0xf03e,	// (0x00024eaa) main_pane_set_vc_t2

0xf050,	// (0x00024ebc) main_pane_set_vc_t3_ParamLimits

0xf050,	// (0x00024ebc) main_pane_set_vc_t3

0xf062,	// (0x00024ece) main_pane_set_vc_t4_ParamLimits

0xf062,	// (0x00024ece) main_pane_set_vc_t4

0x0003,

0xfa5a,	// (0x000258c6) main_pane_set_vc_t_ParamLimits

0xfa5a,	// (0x000258c6) main_pane_set_vc_t

0xf074,	// (0x00024ee0) setting_code_pane_vc_ParamLimits

0xf074,	// (0x00024ee0) setting_code_pane_vc

0xf083,	// (0x00024eef) setting_slider_graphic_pane_vc

0xf083,	// (0x00024eef) setting_slider_pane_vc

0xf083,	// (0x00024eef) setting_text_pane_vc

0xf083,	// (0x00024eef) setting_volume_pane_vc

0xf08b,	// (0x00024ef7) scroll_pane_cp121_vc

0xc972,	// (0x000227de) set_content_pane_vc

0xf0c9,	// (0x00024f35) button_value_adjust_pane_g1

0xf0d2,	// (0x00024f3e) button_value_adjust_pane_g2

0x0001,

0xfaad,	// (0x00025919) button_value_adjust_pane_g

0xf0db,	// (0x00024f47) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf0db,	// (0x00024f47) form_field_slider_wide_pane_vc_t1

0xf0ef,	// (0x00024f5b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf0ef,	// (0x00024f5b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab2,	// (0x0002591e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab2,	// (0x0002591e) form_field_slider_wide_pane_vc_t

0xc343,	// (0x000221af) input_focus_pane_cp10_vc_ParamLimits

0xc343,	// (0x000221af) input_focus_pane_cp10_vc

0xf101,	// (0x00024f6d) slider_cont_pane_cp1_vc_ParamLimits

0xf101,	// (0x00024f6d) slider_cont_pane_cp1_vc

0xef56,	// (0x00024dc2) slider_form_pane_g1_cp2

0xef5f,	// (0x00024dcb) slider_form_pane_g2_cp2

0xf11a,	// (0x00024f86) form_field_slider_pane_vc_t3

0xf128,	// (0x00024f94) form_field_slider_pane_vc_t4

0xf136,	// (0x00024fa2) slider_form_pane_vc_ParamLimits

0xf136,	// (0x00024fa2) slider_form_pane_vc

0xf143,	// (0x00024faf) form_field_slider_pane_vc_t1_ParamLimits

0xf143,	// (0x00024faf) form_field_slider_pane_vc_t1

0xf0ef,	// (0x00024f5b) form_field_slider_pane_vc_t2_ParamLimits

0xf0ef,	// (0x00024f5b) form_field_slider_pane_vc_t2

0x0001,

0xfac2,	// (0x0002592e) form_field_slider_pane_vc_t_ParamLimits

0xfac2,	// (0x0002592e) form_field_slider_pane_vc_t

0xc343,	// (0x000221af) input_focus_pane_cp9_vc_ParamLimits

0xc343,	// (0x000221af) input_focus_pane_cp9_vc

0xf15f,	// (0x00024fcb) slider_cont_pane_vc_ParamLimits

0xf15f,	// (0x00024fcb) slider_cont_pane_vc

0xf171,	// (0x00024fdd) list_form_graphic_pane_cp_vc_ParamLimits

0xf171,	// (0x00024fdd) list_form_graphic_pane_cp_vc

0xda58,	// (0x000238c4) form_field_popup_wide_pane_vc_g1

0xf186,	// (0x00024ff2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf186,	// (0x00024ff2) form_field_popup_wide_pane_vc_t1

0xc998,	// (0x00022804) input_focus_pane_cp8_vc_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_cp8_vc

0xf19d,	// (0x00025009) list_form_wide_pane_vc_ParamLimits

0xf19d,	// (0x00025009) list_form_wide_pane_vc

0xf1a9,	// (0x00025015) list_form_graphic_pane_vc_g1

0xf1b1,	// (0x0002501d) list_form_graphic_pane_vc_t1_ParamLimits

0xf1b1,	// (0x0002501d) list_form_graphic_pane_vc_t1

0xc351,	// (0x000221bd) list_highlight_pane_cp5_vc_ParamLimits

0xc351,	// (0x000221bd) list_highlight_pane_cp5_vc

0xf1cd,	// (0x00025039) list_form_graphic_pane_vc_ParamLimits

0xf1cd,	// (0x00025039) list_form_graphic_pane_vc

0xda58,	// (0x000238c4) form_field_popup_pane_vc_g1

0xf1e3,	// (0x0002504f) form_field_popup_pane_vc_t1_ParamLimits

0xf1e3,	// (0x0002504f) form_field_popup_pane_vc_t1

0xc998,	// (0x00022804) input_focus_pane_cp7_vc_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_cp7_vc

0xf1fa,	// (0x00025066) list_form_pane_vc_ParamLimits

0xf1fa,	// (0x00025066) list_form_pane_vc

0xf206,	// (0x00025072) data_form_pane_vc_t1_ParamLimits

0xf206,	// (0x00025072) data_form_pane_vc_t1

0xc9ff,	// (0x0002286b) input_focus_pane_vc_g1

0xca07,	// (0x00022873) input_focus_pane_vc_g2

0xca0f,	// (0x0002287b) input_focus_pane_vc_g3

0xca17,	// (0x00022883) input_focus_pane_vc_g4

0xca1f,	// (0x0002288b) input_focus_pane_vc_g5

0xca27,	// (0x00022893) input_focus_pane_vc_g6

0xca2f,	// (0x0002289b) input_focus_pane_vc_g7

0xca37,	// (0x000228a3) input_focus_pane_vc_g8

0xca3f,	// (0x000228ab) input_focus_pane_vc_g9

0xc2eb,	// (0x00022157) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002553c) input_focus_pane_vc_g

0xda4c,	// (0x000238b8) data_form_pane_vc_ParamLimits

0xda4c,	// (0x000238b8) data_form_pane_vc

0xda58,	// (0x000238c4) form_field_data_pane_vc_g1

0xf221,	// (0x0002508d) form_field_data_pane_vc_t1_ParamLimits

0xf221,	// (0x0002508d) form_field_data_pane_vc_t1

0xc998,	// (0x00022804) input_focus_pane_vc_ParamLimits

0xc998,	// (0x00022804) input_focus_pane_vc

0xf23b,	// (0x000250a7) button_value_adjust_pane_cp3_vc

0xf243,	// (0x000250af) button_value_adjust_pane_cp5_vc

0xf24b,	// (0x000250b7) form_field_data_pane_vc_ParamLimits

0xf24b,	// (0x000250b7) form_field_data_pane_vc

0xf262,	// (0x000250ce) form_field_data_pane_vc_cp2

0xf26a,	// (0x000250d6) form_field_data_wide_pane_vc_ParamLimits

0xf26a,	// (0x000250d6) form_field_data_wide_pane_vc

0xf280,	// (0x000250ec) form_field_data_wide_pane_vc_cp2

0xf288,	// (0x000250f4) form_field_popup_pane_vc_ParamLimits

0xf288,	// (0x000250f4) form_field_popup_pane_vc

0xf29f,	// (0x0002510b) form_field_popup_wide_pane_vc_ParamLimits

0xf29f,	// (0x0002510b) form_field_popup_wide_pane_vc

0xf2b5,	// (0x00025121) form_field_slider_pane_vc_ParamLimits

0xf2b5,	// (0x00025121) form_field_slider_pane_vc

0xf2c8,	// (0x00025134) form_field_slider_wide_pane_vc_ParamLimits

0xf2c8,	// (0x00025134) form_field_slider_wide_pane_vc

0xa94e,	// (0x000207ba) grid_touch_1_pane_ParamLimits

0xa94e,	// (0x000207ba) grid_touch_1_pane

0xa962,	// (0x000207ce) grid_touch_2_pane_ParamLimits

0xa962,	// (0x000207ce) grid_touch_2_pane

0xf341,	// (0x000251ad) touch_pane_g1_ParamLimits

0xf341,	// (0x000251ad) touch_pane_g1

0xf2db,	// (0x00025147) cell_app_pane_cp_wide_ParamLimits

0xf2db,	// (0x00025147) cell_app_pane_cp_wide

0xf2ec,	// (0x00025158) grid_popup_fast_wide_pane_ParamLimits

0xf2ec,	// (0x00025158) grid_popup_fast_wide_pane

0xf300,	// (0x0002516c) scroll_pane_cp19_ParamLimits

0xf300,	// (0x0002516c) scroll_pane_cp19

0xc2f5,	// (0x00022161) bg_popup_window_pane_cp20

0xf314,	// (0x00025180) listscroll_popup_fast_wide_pane

0xd622,	// (0x0002348e) grid_indicator_nsta_pane

0xf31c,	// (0x00025188) clock_nsta_pane_g1

0xf325,	// (0x00025191) clock_nsta_pane_t1

0xa98c,	// (0x000207f8) cell_indicator_nsta_pane_ParamLimits

0xa98c,	// (0x000207f8) cell_indicator_nsta_pane

0xf341,	// (0x000251ad) cell_indicator_nsta_pane_g1

0xa9a9,	// (0x00020815) cell_indicator_nsta_pane_g2

0x0001,

0xfacc,	// (0x00025938) cell_indicator_nsta_pane_g

0xf34f,	// (0x000251bb) clock_nsta_pane_cp

0xf357,	// (0x000251c3) indicator_nsta_pane_cp

0xf35f,	// (0x000251cb) nsta_clock_indic_pane_g1

0xc38d,	// (0x000221f9) grid_indicator_pane

0xcdf9,	// (0x00022c65) scroll_pane_cp29

0x6327,	// (0x0001c193) indicator_nsta_pane_cp2_ParamLimits

0x6327,	// (0x0001c193) indicator_nsta_pane_cp2

0xc351,	// (0x000221bd) main_apps_wheel_pane

0xdb74,	// (0x000239e0) form_midp_field_text_pane_ParamLimits

0xdca1,	// (0x00023b0d) scroll_bar_cp050_ParamLimits

0xf397,	// (0x00025203) cell_indicator_pane_ParamLimits

0xf397,	// (0x00025203) cell_indicator_pane

0xf3b4,	// (0x00025220) cell_indicator_pane_g1

0xa9bf,	// (0x0002082b) grid_wheel_folder_pane_ParamLimits

0xa9bf,	// (0x0002082b) grid_wheel_folder_pane

0xa9cd,	// (0x00020839) list_wheel_apps_pane_ParamLimits

0xa9cd,	// (0x00020839) list_wheel_apps_pane

0xa9db,	// (0x00020847) main_apps_wheel_pane_g1_ParamLimits

0xa9db,	// (0x00020847) main_apps_wheel_pane_g1

0xa9e7,	// (0x00020853) main_apps_wheel_pane_g2_ParamLimits

0xa9e7,	// (0x00020853) main_apps_wheel_pane_g2

0x0001,

0xfadb,	// (0x00025947) main_apps_wheel_pane_g_ParamLimits

0xfadb,	// (0x00025947) main_apps_wheel_pane_g

0xa9f5,	// (0x00020861) main_apps_wheel_pane_t1_ParamLimits

0xa9f5,	// (0x00020861) main_apps_wheel_pane_t1

0xaa09,	// (0x00020875) list_wheel_apps_pane_g1

0xaa11,	// (0x0002087d) list_wheel_apps_pane_g2

0xaa19,	// (0x00020885) list_wheel_apps_pane_g3

0xaa21,	// (0x0002088d) list_wheel_apps_pane_g4

0xaa2b,	// (0x00020897) list_wheel_apps_pane_g5

0x0004,

0xfae0,	// (0x0002594c) list_wheel_apps_pane_g

0xd24c,	// (0x000230b8) navi_icon_text_pane

0x9e3a,	// (0x0001fca6) aid_fill_nsta

0xaa42,	// (0x000208ae) navi_icon_text_pane_g1

0xaa4e,	// (0x000208ba) navi_icon_text_pane_t1

0xd0e8,	// (0x00022f54) list_set_graphic_pane_t1_ParamLimits

0xd0e8,	// (0x00022f54) list_set_graphic_pane_t1

0xe378,	// (0x000241e4) popup_midp_note_alarm_window_t6_ParamLimits

0xe378,	// (0x000241e4) popup_midp_note_alarm_window_t6

0xe38a,	// (0x000241f6) popup_midp_note_alarm_window_t7_ParamLimits

0xe38a,	// (0x000241f6) popup_midp_note_alarm_window_t7

0xe39c,	// (0x00024208) popup_midp_note_alarm_window_t8_ParamLimits

0xe39c,	// (0x00024208) popup_midp_note_alarm_window_t8

0xe3ae,	// (0x0002421a) popup_midp_note_alarm_window_t9_ParamLimits

0xe3ae,	// (0x0002421a) popup_midp_note_alarm_window_t9

0xe3c0,	// (0x0002422c) popup_midp_note_alarm_window_t10_ParamLimits

0xe3c0,	// (0x0002422c) popup_midp_note_alarm_window_t10

0xe3d2,	// (0x0002423e) popup_midp_note_alarm_window_t11_ParamLimits

0xe3d2,	// (0x0002423e) popup_midp_note_alarm_window_t11

0xe3e4,	// (0x00024250) scroll_pane_cp17_ParamLimits

0xe3e4,	// (0x00024250) scroll_pane_cp17

0x6761,	// (0x0001c5cd) volume_small_pane_cp_g1

0x6aad,	// (0x0001c919) volume_small_pane_cp_g2

0x6ab6,	// (0x0001c922) volume_small_pane_cp_g3

0x6abf,	// (0x0001c92b) volume_small_pane_cp_g4

0x6ac8,	// (0x0001c934) volume_small_pane_cp_g5

0x6ad1,	// (0x0001c93d) volume_small_pane_cp_g6

0x6ada,	// (0x0001c946) volume_small_pane_cp_g7

0x6ae3,	// (0x0001c94f) volume_small_pane_cp_g8

0x6aec,	// (0x0001c958) volume_small_pane_cp_g9

0x6af5,	// (0x0001c961) volume_small_pane_cp_g10

0xd3f8,	// (0x00023264) midp_ticker_pane_g1_ParamLimits

0xd404,	// (0x00023270) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x00025604) midp_ticker_pane_g_ParamLimits

0x9623,	// (0x0001f48f) midp_ticker_pane_t1_ParamLimits

0x9e5a,	// (0x0001fcc6) aid_fill_nsta_2

0xdc8d,	// (0x00023af9) list_form2_midp_pane

0xea77,	// (0x000248e3) midp_editing_number_pane_ParamLimits

0xea86,	// (0x000248f2) midp_ticker_pane_ParamLimits

0xf3be,	// (0x0002522a) form2_midp_field_pane

0xf3c6,	// (0x00025232) scroll_pane_cp51

0xf3e6,	// (0x00025252) form2_midp_button_pane_ParamLimits

0xf3e6,	// (0x00025252) form2_midp_button_pane

0xf3f8,	// (0x00025264) form2_midp_content_pane_ParamLimits

0xf3f8,	// (0x00025264) form2_midp_content_pane

0xf412,	// (0x0002527e) form2_midp_field_choice_group_pane

0xf41a,	// (0x00025286) form2_midp_field_pane_g1

0xf422,	// (0x0002528e) form2_midp_field_pane_g2

0xf42a,	// (0x00025296) form2_midp_field_pane_g3

0xf432,	// (0x0002529e) form2_midp_field_pane_g4

0x0003,

0xfb05,	// (0x00025971) form2_midp_field_pane_g

0xf43a,	// (0x000252a6) form2_midp_gauge_slider_pane

0xf442,	// (0x000252ae) form2_midp_gauge_wait_pane

0xf44a,	// (0x000252b6) form2_midp_image_pane_ParamLimits

0xf44a,	// (0x000252b6) form2_midp_image_pane

0xf465,	// (0x000252d1) form2_midp_label_pane_ParamLimits

0xf465,	// (0x000252d1) form2_midp_label_pane

0xaa7c,	// (0x000208e8) form2_midp_label_pane_cp_ParamLimits

0xaa7c,	// (0x000208e8) form2_midp_label_pane_cp

0xf47e,	// (0x000252ea) form2_midp_string_pane_ParamLimits

0xf47e,	// (0x000252ea) form2_midp_string_pane

0x5820,	// (0x0001b68c) form2_midp_text_pane_ParamLimits

0x5820,	// (0x0001b68c) form2_midp_text_pane

0xf490,	// (0x000252fc) form2_midp_time_pane

0xf4a0,	// (0x0002530c) input_focus_pane_cp51_ParamLimits

0xf4a0,	// (0x0002530c) input_focus_pane_cp51

0xf4b8,	// (0x00025324) form2_midp_label_pane_t1_ParamLimits

0xf4b8,	// (0x00025324) form2_midp_label_pane_t1

0x5839,	// (0x0001b6a5) form2_mdip_text_pane_t1_ParamLimits

0x5839,	// (0x0001b6a5) form2_mdip_text_pane_t1

0x5856,	// (0x0001b6c2) form2_midp_time_pane_t1

0xf500,	// (0x0002536c) form2_midp_gauge_slider_pane_t1

0xaa9d,	// (0x00020909) form2_midp_gauge_slider_pane_t2

0xaaaf,	// (0x0002091b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0e,	// (0x0002597a) form2_midp_gauge_slider_pane_t

0xf512,	// (0x0002537e) form2_midp_slider_pane

0xf51e,	// (0x0002538a) form2_midp_gauge_wait_pane_t1

0xf52c,	// (0x00025398) form2_midp_wait_pane_ParamLimits

0xf52c,	// (0x00025398) form2_midp_wait_pane

0xaac1,	// (0x0002092d) list_single_2graphic_pane_cp4_ParamLimits

0xaac1,	// (0x0002092d) list_single_2graphic_pane_cp4

0xa2df,	// (0x0002014b) list_single_midp_graphic_pane_cp_ParamLimits

0xa2df,	// (0x0002014b) list_single_midp_graphic_pane_cp

0xc2f5,	// (0x00022161) list_highlight_pane_cp20

0xf557,	// (0x000253c3) list_single_2graphic_pane_g1_cp4

0xedb4,	// (0x00024c20) list_single_2graphic_pane_g2_cp4

0xf55f,	// (0x000253cb) list_single_2graphic_pane_t1_cp4

0xc351,	// (0x000221bd) list_highlight_pane_cp21

0xf56e,	// (0x000253da) list_single_midp_graphic_pane_g4_cp

0xf57d,	// (0x000253e9) list_single_midp_graphic_pane_t1_cp

0xaad8,	// (0x00020944) form2_mdip_string_pane_t1_ParamLimits

0xaad8,	// (0x00020944) form2_mdip_string_pane_t1

0xc2f5,	// (0x00022161) bg_wml_button_pane_cp2

0xc2eb,	// (0x00022157) form2_midp_image_pane_g1

0x4efd,	// (0x0001ad69) list_double_large_graphic_pane_g5_ParamLimits

0x4efd,	// (0x0001ad69) list_double_large_graphic_pane_g5

0x9577,	// (0x0001f3e3) midp_form_pane_ParamLimits

0xc351,	// (0x000221bd) main_apps_wheel_pane_ParamLimits

0x9b96,	// (0x0001fa02) popup_preview_window_ParamLimits

0x9b96,	// (0x0001fa02) popup_preview_window

0xd701,	// (0x0002356d) popup_touch_info_window_ParamLimits

0xd701,	// (0x0002356d) popup_touch_info_window

0xd71f,	// (0x0002358b) popup_touch_menu_window_ParamLimits

0xd71f,	// (0x0002358b) popup_touch_menu_window

0xc2e1,	// (0x0002214d) bg_popup_sub_pane_cp6

0x00cc,	// (0x00015f38) list_touch_menu_pane

0x00d4,	// (0x00015f40) list_single_touch_menu_pane_ParamLimits

0x00d4,	// (0x00015f40) list_single_touch_menu_pane

0x00e9,	// (0x00015f55) list_single_touch_menu_pane_t1

0xc351,	// (0x000221bd) bg_popup_sub_pane_cp7_ParamLimits

0xc351,	// (0x000221bd) bg_popup_sub_pane_cp7

0x00f7,	// (0x00015f63) heading_sub_pane

0x00ff,	// (0x00015f6b) list_touch_info_pane_ParamLimits

0x00ff,	// (0x00015f6b) list_touch_info_pane

0x010e,	// (0x00015f7a) list_single_touch_info_pane_ParamLimits

0x010e,	// (0x00015f7a) list_single_touch_info_pane

0x0120,	// (0x00015f8c) list_single_touch_info_pane_t1

0x012e,	// (0x00015f9a) list_single_touch_info_pane_t2

0x0001,

0xfb1c,	// (0x00025988) list_single_touch_info_pane_t

0xd3ce,	// (0x0002323a) bg_popup_heading_pane_cp

0x013c,	// (0x00015fa8) heading_sub_pane_t1

0xda12,	// (0x0002387e) bg_popup_preview_window_pane_cp_ParamLimits

0xda12,	// (0x0002387e) bg_popup_preview_window_pane_cp

0x00f7,	// (0x00015f63) heading_preview_pane

0x00ff,	// (0x00015f6b) list_preview_pane_ParamLimits

0x00ff,	// (0x00015f6b) list_preview_pane

0x014a,	// (0x00015fb6) popup_preview_window_g1

0x010e,	// (0x00015f7a) list_single_preview_pane_ParamLimits

0x010e,	// (0x00015f7a) list_single_preview_pane

0x0152,	// (0x00015fbe) list_single_preview_pane_g1

0x015a,	// (0x00015fc6) list_single_preview_pane_t1

0x0120,	// (0x00015f8c) list_single_preview_pane_t2

0x0001,

0xfb21,	// (0x0002598d) list_single_preview_pane_t

0x0168,	// (0x00015fd4) bg_popup_heading_pane_cp2_ParamLimits

0x0168,	// (0x00015fd4) bg_popup_heading_pane_cp2

0x017e,	// (0x00015fea) heading_preview_pane_g1

0x0186,	// (0x00015ff2) heading_preview_pane_t1_ParamLimits

0x0186,	// (0x00015ff2) heading_preview_pane_t1

0xc3a4,	// (0x00022210) soft_indicator_pane_t1_ParamLimits

0xc90b,	// (0x00022777) scroll_pane_ParamLimits

0xccf5,	// (0x00022b61) scroll_sc2_left_pane

0xccfe,	// (0x00022b6a) scroll_sc2_right_pane

0xcd1d,	// (0x00022b89) scroll_bg_pane_g1_ParamLimits

0xcd32,	// (0x00022b9e) scroll_bg_pane_g2_ParamLimits

0xcd4a,	// (0x00022bb6) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x00025593) scroll_bg_pane_g_ParamLimits

0xcd1d,	// (0x00022b89) scroll_handle_pane_g1_ParamLimits

0xcd6c,	// (0x00022bd8) scroll_handle_pane_g2_ParamLimits

0xcd4a,	// (0x00022bb6) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002559a) scroll_handle_pane_g_ParamLimits

0xd64a,	// (0x000234b6) popup_choice_list_window_ParamLimits

0xd64a,	// (0x000234b6) popup_choice_list_window

0xd86c,	// (0x000236d8) choice_list_pane

0xd8ee,	// (0x0002375a) cell_toolbar_pane_t1

0xd916,	// (0x00023782) toolbar_button_pane_ParamLimits

0xe7c2,	// (0x0002462e) ai_gene_pane_1_t2_ParamLimits

0xe7c2,	// (0x0002462e) ai_gene_pane_1_t2

0x0001,

0xf93f,	// (0x000257ab) ai_gene_pane_1_t_ParamLimits

0xf93f,	// (0x000257ab) ai_gene_pane_1_t

0x01a3,	// (0x0001600f) scroll_sc2_left_pane_g1

0x01a3,	// (0x0001600f) scroll_sc2_right_pane_g1

0xd630,	// (0x0002349c) bg_popup_sub_pane_cp10

0x01ad,	// (0x00016019) list_choice_list_pane

0x01c4,	// (0x00016030) list_single_choice_list_pane_ParamLimits

0x01c4,	// (0x00016030) list_single_choice_list_pane

0x01d8,	// (0x00016044) list_single_choice_list_pane_g1

0x01e0,	// (0x0001604c) list_single_choice_list_pane_t1_ParamLimits

0x01e0,	// (0x0001604c) list_single_choice_list_pane_t1

0x01f5,	// (0x00016061) choice_list_pane_g1

0x01fd,	// (0x00016069) choice_list_pane_t1

0xc2e1,	// (0x0002214d) input_focus_pane_cp11

0xcc58,	// (0x00022ac4) title_pane_stacon_g2_ParamLimits

0xcc58,	// (0x00022ac4) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x00025579) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x00025579) title_pane_stacon_g

0xd3ce,	// (0x0002323a) cursor_press_pane

0x9855,	// (0x0001f6c1) popup_fep_hwr_window_ParamLimits

0x9855,	// (0x0001f6c1) popup_fep_hwr_window

0xd69e,	// (0x0002350a) popup_fep_vkb_window_ParamLimits

0xd69e,	// (0x0002350a) popup_fep_vkb_window

0x020b,	// (0x00016077) cursor_press_pane_g1

0x0002,

0xfb4a,	// (0x000259b6) fep_vkb_side_pane_g_ParamLimits

0x6b29,	// (0x0001c995) fep_hwr_candidate_pane_ParamLimits

0x6b29,	// (0x0001c995) fep_hwr_candidate_pane

0x6b53,	// (0x0001c9bf) fep_hwr_side_pane_ParamLimits

0x6b53,	// (0x0001c9bf) fep_hwr_side_pane

0x6b73,	// (0x0001c9df) fep_hwr_top_pane_ParamLimits

0x6b73,	// (0x0001c9df) fep_hwr_top_pane

0x6b8b,	// (0x0001c9f7) fep_hwr_write_pane_ParamLimits

0x6b8b,	// (0x0001c9f7) fep_hwr_write_pane

0xfb4a,	// (0x000259b6) fep_vkb_side_pane_g

0x0225,	// (0x00016091) fep_hwr_top_pane_g1

0x0213,	// (0x0001607f) fep_hwr_top_pane_g2

0x6bb7,	// (0x0001ca23) fep_hwr_top_pane_g3

0x0002,

0xfb26,	// (0x00025992) fep_hwr_top_pane_g

0x6bcc,	// (0x0001ca38) fep_hwr_top_text_pane

0xcebf,	// (0x00022d2b) fep_hwr_top_text_pane_g1

0x0269,	// (0x000160d5) fep_hwr_top_text_pane_t1

0x6cc2,	// (0x0001cb2e) fep_hwr_candidate_pane_g1

0x04c3,	// (0x0001632f) fep_vkb_keypad_pane_g3_ParamLimits

0x04c3,	// (0x0001632f) fep_vkb_keypad_pane_g3

0x04eb,	// (0x00016357) fep_vkb_keypad_pane_g4_ParamLimits

0x04eb,	// (0x00016357) fep_vkb_keypad_pane_g4

0x055a,	// (0x000163c6) fep_vkb_bottom_pane_g2_ParamLimits

0x055a,	// (0x000163c6) fep_vkb_bottom_pane_g2

0x0001,

0xfb51,	// (0x000259bd) fep_vkb_bottom_pane_g_ParamLimits

0xfb51,	// (0x000259bd) fep_vkb_bottom_pane_g

0x01a3,	// (0x0001600f) cell_vkb_side_pane_g2

0x0001,

0xfb5b,	// (0x000259c7) cell_vkb_side_pane_g

0x05e5,	// (0x00016451) cell_vkb_side_pane_t1

0x05f3,	// (0x0001645f) cell_vkb_side_pane_t1_copy1

0x01a3,	// (0x0001600f) bg_fep_vkb_candidate_pane_g2

0x0725,	// (0x00016591) cell_vkb_candidate_pane_ParamLimits

0x0277,	// (0x000160e3) aid_size_cell_vkb_ParamLimits

0x0277,	// (0x000160e3) aid_size_cell_vkb

0x0725,	// (0x00016591) cell_vkb_candidate_pane

0x6cdc,	// (0x0001cb48) bg_popup_fep_shadow_pane_g1

0x0305,	// (0x00016171) fep_vkb_bottom_pane_ParamLimits

0x0305,	// (0x00016171) fep_vkb_bottom_pane

0x0342,	// (0x000161ae) fep_vkb_candidate_pane_ParamLimits

0x0342,	// (0x000161ae) fep_vkb_candidate_pane

0x035e,	// (0x000161ca) fep_vkb_keypad_pane_ParamLimits

0x035e,	// (0x000161ca) fep_vkb_keypad_pane

0x03a4,	// (0x00016210) fep_vkb_side_pane_ParamLimits

0x03a4,	// (0x00016210) fep_vkb_side_pane

0x03e0,	// (0x0001624c) fep_vkb_top_pane_ParamLimits

0x03e0,	// (0x0001624c) fep_vkb_top_pane

0x041c,	// (0x00016288) fep_vkb_top_pane_g1_ParamLimits

0x041c,	// (0x00016288) fep_vkb_top_pane_g1

0x042b,	// (0x00016297) fep_vkb_top_pane_g2_ParamLimits

0x042b,	// (0x00016297) fep_vkb_top_pane_g2

0x043a,	// (0x000162a6) fep_vkb_top_pane_g3_ParamLimits

0x043a,	// (0x000162a6) fep_vkb_top_pane_g3

0x0003,

0xfb41,	// (0x000259ad) fep_vkb_top_pane_g_ParamLimits

0xfb41,	// (0x000259ad) fep_vkb_top_pane_g

0x0458,	// (0x000162c4) fep_vkb_top_text_pane_ParamLimits

0x0458,	// (0x000162c4) fep_vkb_top_text_pane

0xabbd,	// (0x00020a29) fep_vkb_side_pane_g1_ParamLimits

0xabbd,	// (0x00020a29) fep_vkb_side_pane_g1

0x04b2,	// (0x0001631e) grid_vkb_side_pane_ParamLimits

0x04b2,	// (0x0001631e) grid_vkb_side_pane

0x6ce4,	// (0x0001cb50) bg_popup_fep_shadow_pane_g2

0x6ced,	// (0x0001cb59) bg_popup_fep_shadow_pane_g3

0x6cf5,	// (0x0001cb61) bg_popup_fep_shadow_pane_g4

0x6cfe,	// (0x0001cb6a) bg_popup_fep_shadow_pane_g5

0x6d08,	// (0x0001cb74) bg_popup_fep_shadow_pane_g6

0x6d10,	// (0x0001cb7c) bg_popup_fep_shadow_pane_g7

0xca1f,	// (0x0002288b) bg_popup_fep_shadow_pane_g8

0x0509,	// (0x00016375) grid_vkb_keypad_number_pane_ParamLimits

0x0509,	// (0x00016375) grid_vkb_keypad_number_pane

0x0519,	// (0x00016385) grid_vkb_keypad_pane_ParamLimits

0x0519,	// (0x00016385) grid_vkb_keypad_pane

0x053f,	// (0x000163ab) fep_vkb_bottom_pane_g1_ParamLimits

0x053f,	// (0x000163ab) fep_vkb_bottom_pane_g1

0x0568,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x0568,	// (0x000163d4) grid_vkb_keypad_bottom_left_pane

0x057d,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x057d,	// (0x000163e9) grid_vkb_keypad_bottom_right_pane

0x0592,	// (0x000163fe) fep_vkb_top_text_pane_g1

0xac04,	// (0x00020a70) fep_vkb_top_text_pane_t1

0xac16,	// (0x00020a82) cell_vkb_side_pane_ParamLimits

0xac16,	// (0x00020a82) cell_vkb_side_pane

0x01a3,	// (0x0001600f) cell_vkb_side_pane_g1

0x0601,	// (0x0001646d) cell_vkb_keypad_pane_ParamLimits

0x0601,	// (0x0001646d) cell_vkb_keypad_pane

0x067c,	// (0x000164e8) cell_vkb_keypad_pane_g1

0x0008,

0xfb6e,	// (0x000259da) bg_popup_fep_shadow_pane_g

0x01a3,	// (0x0001600f) cell_hwr_side_pane_g1

0x01a3,	// (0x0001600f) cell_hwr_side_pane_g2

0x0686,	// (0x000164f2) cell_vkb_keypad_pane_t1

0xac2c,	// (0x00020a98) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xac2c,	// (0x00020a98) cell_vkb_keypad_bottom_left_pane

0xac41,	// (0x00020aad) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xac41,	// (0x00020aad) cell_vkb_keypad_bottom_right_pane

0x01a3,	// (0x0001600f) cell_vkb_keypad_bottom_left_pane_g1

0x01a3,	// (0x0001600f) cell_vkb_keypad_bottom_right_pane_g1

0x06ea,	// (0x00016556) cell_vkb_keypad_number_pane_ParamLimits

0x06ea,	// (0x00016556) cell_vkb_keypad_number_pane

0x0709,	// (0x00016575) cell_vkb_keypad_number_pane_g1

0x0713,	// (0x0001657f) cell_vkb_keypad_number_pane_g2

0x071c,	// (0x00016588) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb60,	// (0x000259cc) cell_vkb_keypad_number_pane_g

0x0686,	// (0x000164f2) cell_vkb_keypad_number_pane_t1

0x0742,	// (0x000165ae) fep_vkb_candidate_pane_g1

0x0001,

0xfb5b,	// (0x000259c7) cell_hwr_side_pane_g

0x075b,	// (0x000165c7) cell_hwr_side_pane_t1

0x6d22,	// (0x0001cb8e) cell_hwr_side_pane_t1_copy1

0x044a,	// (0x000162b6) cell_hwr_candidate_pane_g1

0x6d30,	// (0x0001cb9c) cell_hwr_candidate_pane_t1

0x01a3,	// (0x0001600f) cell_vkb_candidate_pane_g2

0x079f,	// (0x0001660b) cell_vkb_candidate_pane_t1

0x0237,	// (0x000160a3) bg_popup_fep_shadow_pane_ParamLimits

0x0237,	// (0x000160a3) bg_popup_fep_shadow_pane

0x363d,	// (0x000194a9) bg_fep_hwr_top_pane_g4

0x0245,	// (0x000160b1) bg_hwr_side_pane_g1_ParamLimits

0x0245,	// (0x000160b1) bg_hwr_side_pane_g1

0xab76,	// (0x000209e2) cell_hwr_side_pane_ParamLimits

0xab76,	// (0x000209e2) cell_hwr_side_pane

0x6c43,	// (0x0001caaf) fep_hwr_write_pane_g1_ParamLimits

0x6c43,	// (0x0001caaf) fep_hwr_write_pane_g1

0x6c50,	// (0x0001cabc) fep_hwr_write_pane_g2_ParamLimits

0x6c50,	// (0x0001cabc) fep_hwr_write_pane_g2

0x6c5d,	// (0x0001cac9) fep_hwr_write_pane_g3_ParamLimits

0x6c5d,	// (0x0001cac9) fep_hwr_write_pane_g3

0xab96,	// (0x00020a02) fep_hwr_write_pane_g4_ParamLimits

0xab96,	// (0x00020a02) fep_hwr_write_pane_g4

0x0005,

0xfb2d,	// (0x00025999) fep_hwr_write_pane_g_ParamLimits

0xfb2d,	// (0x00025999) fep_hwr_write_pane_g

0x363d,	// (0x000194a9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x363d,	// (0x000194a9) bg_fep_hwr_candidate_pane_g2

0x6c80,	// (0x0001caec) cell_hwr_candidate_pane_ParamLimits

0x6c80,	// (0x0001caec) cell_hwr_candidate_pane

0x6cc2,	// (0x0001cb2e) fep_hwr_candidate_pane_g1_ParamLimits

0x02a5,	// (0x00016111) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x02a5,	// (0x00016111) bg_popup_fep_shadow_pane_cp2

0x044a,	// (0x000162b6) fep_vkb_top_pane_g4_ParamLimits

0x044a,	// (0x000162b6) fep_vkb_top_pane_g4

0x0490,	// (0x000162fc) fep_vkb_side_pane_g2_ParamLimits

0x0490,	// (0x000162fc) fep_vkb_side_pane_g2

0x8a75,	// (0x0001e8e1) list_setting_pane_t4_ParamLimits

0x8a75,	// (0x0001e8e1) list_setting_pane_t4

0x8b0f,	// (0x0001e97b) list_setting_number_pane_t5_ParamLimits

0x8b0f,	// (0x0001e97b) list_setting_number_pane_t5

0x94bc,	// (0x0001f328) list_double_heading_pane_cp2_ParamLimits

0x94bc,	// (0x0001f328) list_double_heading_pane_cp2

0xc9b2,	// (0x0002281e) list_double_heading_pane_g1_cp2_ParamLimits

0xc9b2,	// (0x0002281e) list_double_heading_pane_g1_cp2

0xc9be,	// (0x0002282a) list_double_heading_pane_g2_cp2_ParamLimits

0xc9be,	// (0x0002282a) list_double_heading_pane_g2_cp2

0x07ad,	// (0x00016619) list_double_heading_pane_t1_cp2_ParamLimits

0x07ad,	// (0x00016619) list_double_heading_pane_t1_cp2

0x07c3,	// (0x0001662f) list_double_heading_pane_t2_cp2_ParamLimits

0x07c3,	// (0x0001662f) list_double_heading_pane_t2_cp2

0xc2d9,	// (0x00022145) aid_value_unit2

0x5ec9,	// (0x0001bd35) popup_preview_fixed_window

0xc484,	// (0x000222f0) bg_popup_preview_window_pane_cp02

0x07d5,	// (0x00016641) list_preview_fixed_pane

0x081b,	// (0x00016687) list_empty_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_empty_pane_fp

0x081b,	// (0x00016687) list_single_cale_day_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_single_cale_day_pane_fp

0x081b,	// (0x00016687) list_single_graphic_heading_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_single_graphic_heading_pane_fp

0x081b,	// (0x00016687) list_single_graphic_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_single_graphic_pane_fp

0x081b,	// (0x00016687) list_single_heading_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_single_heading_pane_fp

0x081b,	// (0x00016687) list_single_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_single_pane_fp

0x0832,	// (0x0001669e) list_single_pane_fp_g1_ParamLimits

0x0832,	// (0x0001669e) list_single_pane_fp_g1

0x4e95,	// (0x0001ad01) list_single_pane_fp_g2_ParamLimits

0x4e95,	// (0x0001ad01) list_single_pane_fp_g2

0x5869,	// (0x0001b6d5) list_single_pane_fp_g3_ParamLimits

0x5869,	// (0x0001b6d5) list_single_pane_fp_g3

0x083e,	// (0x000166aa) list_single_pane_fp_g4_ParamLimits

0x083e,	// (0x000166aa) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x000259fb) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x000259fb) list_single_pane_fp_g

0x587d,	// (0x0001b6e9) list_single_pane_fp_t1_ParamLimits

0x587d,	// (0x0001b6e9) list_single_pane_fp_t1

0x5894,	// (0x0001b700) list_single_graphic_pane_fp_g1_ParamLimits

0x5894,	// (0x0001b700) list_single_graphic_pane_fp_g1

0x0832,	// (0x0001669e) list_single_graphic_pane_fp_g2_ParamLimits

0x0832,	// (0x0001669e) list_single_graphic_pane_fp_g2

0x4e95,	// (0x0001ad01) list_single_graphic_pane_fp_g3_ParamLimits

0x4e95,	// (0x0001ad01) list_single_graphic_pane_fp_g3

0x5869,	// (0x0001b6d5) list_single_graphic_pane_fp_g4_ParamLimits

0x5869,	// (0x0001b6d5) list_single_graphic_pane_fp_g4

0x083e,	// (0x000166aa) list_single_graphic_pane_fp_g5_ParamLimits

0x083e,	// (0x000166aa) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00025a04) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00025a04) list_single_graphic_pane_fp_g

0x58a0,	// (0x0001b70c) list_single_graphic_pane_fp_t1_ParamLimits

0x58a0,	// (0x0001b70c) list_single_graphic_pane_fp_t1

0x5894,	// (0x0001b700) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5894,	// (0x0001b700) list_single_graphic_heading_pane_fp_g1

0x0832,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x0832,	// (0x0001669e) list_single_graphic_heading_pane_fp_g2

0x4e95,	// (0x0001ad01) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e95,	// (0x0001ad01) list_single_graphic_heading_pane_fp_g3

0x5869,	// (0x0001b6d5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5869,	// (0x0001b6d5) list_single_graphic_heading_pane_fp_g4

0x083e,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x083e,	// (0x000166aa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00025a04) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00025a04) list_single_graphic_heading_pane_fp_g

0x58b6,	// (0x0001b722) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x58b6,	// (0x0001b722) list_single_graphic_heading_pane_fp_t1

0x58cc,	// (0x0001b738) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x58cc,	// (0x0001b738) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00025a0f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00025a0f) list_single_graphic_heading_pane_fp_t

0x58de,	// (0x0001b74a) list_single_cale_day_pane_fp_g1_ParamLimits

0x58de,	// (0x0001b74a) list_single_cale_day_pane_fp_g1

0x08e3,	// (0x0001674f) list_single_cale_day_pane_fp_g2_ParamLimits

0x08e3,	// (0x0001674f) list_single_cale_day_pane_fp_g2

0x5916,	// (0x0001b782) list_single_cale_day_pane_fp_g3_ParamLimits

0x5916,	// (0x0001b782) list_single_cale_day_pane_fp_g3

0x593e,	// (0x0001b7aa) list_single_cale_day_pane_fp_g4_ParamLimits

0x593e,	// (0x0001b7aa) list_single_cale_day_pane_fp_g4

0x5962,	// (0x0001b7ce) list_single_cale_day_pane_fp_g5_ParamLimits

0x5962,	// (0x0001b7ce) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00025a14) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00025a14) list_single_cale_day_pane_fp_g

0x5986,	// (0x0001b7f2) list_single_cale_day_pane_fp_t1_ParamLimits

0x5986,	// (0x0001b7f2) list_single_cale_day_pane_fp_t1

0x59ac,	// (0x0001b818) list_single_cale_day_pane_fp_t2_ParamLimits

0x59ac,	// (0x0001b818) list_single_cale_day_pane_fp_t2

0x59c5,	// (0x0001b831) list_single_cale_day_pane_fp_t3_ParamLimits

0x59c5,	// (0x0001b831) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00025a1f) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00025a1f) list_single_cale_day_pane_fp_t

0x0832,	// (0x0001669e) list_empty_pane_fp_g1_ParamLimits

0x0832,	// (0x0001669e) list_empty_pane_fp_g1

0x59de,	// (0x0001b84a) list_empty_pane_fp_t1

0x59ec,	// (0x0001b858) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00025a26) list_empty_pane_fp_t

0x0832,	// (0x0001669e) list_single_heading_pane_fp_g1_ParamLimits

0x0832,	// (0x0001669e) list_single_heading_pane_fp_g1

0x4e95,	// (0x0001ad01) list_single_heading_pane_fp_g2_ParamLimits

0x4e95,	// (0x0001ad01) list_single_heading_pane_fp_g2

0x5869,	// (0x0001b6d5) list_single_heading_pane_fp_g3_ParamLimits

0x5869,	// (0x0001b6d5) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00025a2b) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00025a2b) list_single_heading_pane_fp_g

0x59fa,	// (0x0001b866) list_single_heading_pane_fp_t1_ParamLimits

0x59fa,	// (0x0001b866) list_single_heading_pane_fp_t1

0x5a0c,	// (0x0001b878) list_single_heading_pane_fp_t2_ParamLimits

0x5a0c,	// (0x0001b878) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00025a32) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00025a32) list_single_heading_pane_fp_t

0xcaef,	// (0x0002295b) aid_size_cell_fast

0xc467,	// (0x000222d3) soft_indicator_pane_cp1_t1

0xcb2c,	// (0x00022998) cell_app_pane_cp2_ParamLimits

0xcb2c,	// (0x00022998) cell_app_pane_cp2

0x6b12,	// (0x0001c97e) fep_hwr_candidate_drop_down_list_pane

0x36c4,	// (0x00019530) fep_hwr_candidate_pane_g3_ParamLimits

0x36c4,	// (0x00019530) fep_hwr_candidate_pane_g3

0x36d1,	// (0x0001953d) fep_hwr_candidate_pane_g4_ParamLimits

0x36d1,	// (0x0001953d) fep_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x000259a6) fep_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x000259a6) fep_hwr_candidate_pane_g

0x0331,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x0331,	// (0x0001619d) fep_vkb_candidate_drop_down_list_pane

0x074a,	// (0x000165b6) fep_vkb_candidate_pane_g3

0x0752,	// (0x000165be) fep_vkb_candidate_pane_g4

0x0002,

0xfb67,	// (0x000259d3) fep_vkb_candidate_pane_g

0x044a,	// (0x000162b6) cell_hwr_candidate_pane_g1_ParamLimits

0x09fb,	// (0x00016867) cell_hwr_candidate_pane_g3_ParamLimits

0x09fb,	// (0x00016867) cell_hwr_candidate_pane_g3

0x0a1c,	// (0x00016888) cell_hwr_candidate_pane_g4_ParamLimits

0x0a1c,	// (0x00016888) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x000259ed) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x000259ed) cell_hwr_candidate_pane_g

0x0769,	// (0x000165d5) cell_vkb_candidate_pane_g3_ParamLimits

0x0769,	// (0x000165d5) cell_vkb_candidate_pane_g3

0x0784,	// (0x000165f0) cell_vkb_candidate_pane_g4_ParamLimits

0x0784,	// (0x000165f0) cell_vkb_candidate_pane_g4

0x0a3d,	// (0x000168a9) cell_app_pane_cp2_g1_ParamLimits

0x0a3d,	// (0x000168a9) cell_app_pane_cp2_g1

0x0a5b,	// (0x000168c7) cell_app_pane_cp2_g2_ParamLimits

0x0a5b,	// (0x000168c7) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00025a37) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00025a37) cell_app_pane_cp2_g

0x0a67,	// (0x000168d3) cell_app_pane_cp2_t1_ParamLimits

0x0a67,	// (0x000168d3) cell_app_pane_cp2_t1

0xc998,	// (0x00022804) grid_highlight_pane_cp1_ParamLimits

0xc998,	// (0x00022804) grid_highlight_pane_cp1

0x6d4e,	// (0x0001cbba) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d4e,	// (0x0001cbba) cell_hwr_candidate_pane_cp1

0x044a,	// (0x000162b6) fep_hwr_candidate_drop_down_list_pane_g1

0x0a99,	// (0x00016905) fep_hwr_candidate_drop_down_list_pane_g2

0x0aa6,	// (0x00016912) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00025a3c) fep_hwr_candidate_drop_down_list_pane_g

0x6d6d,	// (0x0001cbd9) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d76,	// (0x0001cbe2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d76,	// (0x0001cbe2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d83,	// (0x0001cbef) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d83,	// (0x0001cbef) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d90,	// (0x0001cbfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d90,	// (0x0001cbfc) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0769,	// (0x000165d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0769,	// (0x000165d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0784,	// (0x000165f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0784,	// (0x000165f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d9d,	// (0x0001cc09) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d9d,	// (0x0001cc09) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6db8,	// (0x0001cc24) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6db8,	// (0x0001cc24) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0b27,	// (0x00016993) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0b27,	// (0x00016993) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00025a43) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00025a43) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0a79,	// (0x000168e5) cell_vkb_candidate_pane_cp1_ParamLimits

0x0a79,	// (0x000168e5) cell_vkb_candidate_pane_cp1

0x044a,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x044a,	// (0x000162b6) fep_vkb_candidate_drop_down_list_pane_g1

0x0a99,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x0a99,	// (0x00016905) fep_vkb_candidate_drop_down_list_pane_g2

0x0aa6,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x0aa6,	// (0x00016912) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00025a3c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x00025a3c) fep_vkb_candidate_drop_down_list_pane_g

0x0ab3,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x0ab3,	// (0x0001691f) fep_vkb_candidate_drop_down_list_scroll_pane

0x0ac0,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0ac0,	// (0x0001692c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x0acd,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0acd,	// (0x00016939) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x0ad9,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0ad9,	// (0x00016945) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x09fb,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x09fb,	// (0x00016867) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x0a1c,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0a1c,	// (0x00016888) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x0ae5,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0ae5,	// (0x00016951) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x0b06,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0b06,	// (0x00016972) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x0b27,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0b27,	// (0x00016993) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x00025a54) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x00025a54) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x900f,	// (0x0001ee7b) title_pane_g1_ParamLimits

0x9020,	// (0x0001ee8c) title_pane_g2_ParamLimits

0xf592,	// (0x000253fe) title_pane_g_ParamLimits

0xceaf,	// (0x00022d1b) aid_call2_pane

0xceb7,	// (0x00022d23) aid_call_pane

0xcebf,	// (0x00022d2b) popup_clock_analogue_window_g1

0xcebf,	// (0x00022d2b) popup_clock_analogue_window_g2

0x6228,	// (0x0001c094) popup_clock_analogue_window_g3

0x6231,	// (0x0001c09d) popup_clock_analogue_window_g4

0xc2eb,	// (0x00022157) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x000255a8) popup_clock_analogue_window_g

0x6239,	// (0x0001c0a5) popup_clock_analogue_window_t1

0x6247,	// (0x0001c0b3) clock_digital_number_pane_ParamLimits

0x6247,	// (0x0001c0b3) clock_digital_number_pane

0x6253,	// (0x0001c0bf) clock_digital_number_pane_cp02_ParamLimits

0x6253,	// (0x0001c0bf) clock_digital_number_pane_cp02

0x625f,	// (0x0001c0cb) clock_digital_number_pane_cp03_ParamLimits

0x625f,	// (0x0001c0cb) clock_digital_number_pane_cp03

0x626b,	// (0x0001c0d7) clock_digital_number_pane_cp04_ParamLimits

0x626b,	// (0x0001c0d7) clock_digital_number_pane_cp04

0x6277,	// (0x0001c0e3) clock_digital_separator_pane_ParamLimits

0x6277,	// (0x0001c0e3) clock_digital_separator_pane

0x6283,	// (0x0001c0ef) popup_clock_digital_window_t1_ParamLimits

0x6283,	// (0x0001c0ef) popup_clock_digital_window_t1

0xc2eb,	// (0x00022157) clock_digital_number_pane_g1

0xc2eb,	// (0x00022157) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x000255b3) clock_digital_number_pane_g

0xc2eb,	// (0x00022157) clock_digital_separator_pane_g1

0xc2eb,	// (0x00022157) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x000255b3) clock_digital_separator_pane_g

0x9e3a,	// (0x0001fca6) aid_fill_nsta_ParamLimits

0x9f69,	// (0x0001fdd5) indicator_nsta_pane_ParamLimits

0xd815,	// (0x00023681) popup_clock_analogue_window

0xd815,	// (0x00023681) popup_clock_digital_window

0xd622,	// (0x0002348e) grid_indicator_nsta_pane_ParamLimits

0xf333,	// (0x0002519f) clock_nsta_pane_t2

0x0001,

0xfac7,	// (0x00025933) clock_nsta_pane_t

0x61ec,	// (0x0001c058) aid_size_max_handle

0x94b3,	// (0x0001f31f) aid_size_min_handle

0xd3ce,	// (0x0002323a) editor_scroll_pane

0x0b42,	// (0x000169ae) ex_editor_pane

0xcab7,	// (0x00022923) scroll_pane_cp13

0xc937,	// (0x000227a3) scroll_pane_cp14

0xcee9,	// (0x00022d55) scroll_pane_cp36

0x94cd,	// (0x0001f339) list_single_graphic_hl_pane_cp2_ParamLimits

0x94cd,	// (0x0001f339) list_single_graphic_hl_pane_cp2

0xa82c,	// (0x00020698) list_single_graphic_hl_pane_ParamLimits

0xa82c,	// (0x00020698) list_single_graphic_hl_pane

0x5a22,	// (0x0001b88e) aid_size_min_hl_cp1

0x0b53,	// (0x000169bf) list_highlight_pane_cp34_ParamLimits

0x0b53,	// (0x000169bf) list_highlight_pane_cp34

0x0b64,	// (0x000169d0) list_single_graphic_hl_pane_g1_ParamLimits

0x0b64,	// (0x000169d0) list_single_graphic_hl_pane_g1

0x8d42,	// (0x0001ebae) list_single_graphic_hl_pane_g2_ParamLimits

0x8d42,	// (0x0001ebae) list_single_graphic_hl_pane_g2

0x8d42,	// (0x0001ebae) list_single_graphic_hl_pane_g3_ParamLimits

0x8d42,	// (0x0001ebae) list_single_graphic_hl_pane_g3

0x5a37,	// (0x0001b8a3) list_single_graphic_hl_pane_g4_ParamLimits

0x5a37,	// (0x0001b8a3) list_single_graphic_hl_pane_g4

0x5a43,	// (0x0001b8af) list_single_graphic_hl_pane_g5_ParamLimits

0x5a43,	// (0x0001b8af) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x00025a65) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x00025a65) list_single_graphic_hl_pane_g

0x5a57,	// (0x0001b8c3) list_single_graphic_hl_pane_t1_ParamLimits

0x5a57,	// (0x0001b8c3) list_single_graphic_hl_pane_t1

0x0b91,	// (0x000169fd) aid_size_min_hl_cp2

0x0b9a,	// (0x00016a06) list_highlight_pane_cp34_cp2_ParamLimits

0x0b9a,	// (0x00016a06) list_highlight_pane_cp34_cp2

0x0b64,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x0b64,	// (0x000169d0) list_single_graphic_hl_pane_g1_cp2

0x0ba7,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x0ba7,	// (0x00016a13) list_single_graphic_hl_pane_g2_cp2

0x0bb3,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x0bb3,	// (0x00016a1f) list_single_graphic_hl_pane_g3_cp2

0xd305,	// (0x00023171) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd305,	// (0x00023171) list_single_graphic_hl_pane_g4_cp2

0x0b7d,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x0b7d,	// (0x000169e9) list_single_graphic_hl_pane_g5_cp2

0x9668,	// (0x0001f4d4) control_pane_g4_ParamLimits

0x9668,	// (0x0001f4d4) control_pane_g4

0xd630,	// (0x0002349c) bg_popup_sub_pane_cp10_ParamLimits

0x01ad,	// (0x00016019) list_choice_list_pane_ParamLimits

0x01bc,	// (0x00016028) scroll_pane_cp23

0xc484,	// (0x000222f0) bg_popup_preview_window_pane_cp02_ParamLimits

0x07d5,	// (0x00016641) list_preview_fixed_pane_ParamLimits

0x07eb,	// (0x00016657) list_preview_fixed_pane_cp_ParamLimits

0x07eb,	// (0x00016657) list_preview_fixed_pane_cp

0x07f7,	// (0x00016663) popup_preview_fixed_window_g1_ParamLimits

0x07f7,	// (0x00016663) popup_preview_fixed_window_g1

0x0803,	// (0x0001666f) popup_preview_fixed_window_g2_ParamLimits

0x0803,	// (0x0001666f) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x000259f4) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x000259f4) popup_preview_fixed_window_g

0x6160,	// (0x0001bfcc) aid_navi_side_left_pane_ParamLimits

0x6175,	// (0x0001bfe1) aid_navi_side_right_pane_ParamLimits

0x618d,	// (0x0001bff9) navi_icon_pane_stacon_ParamLimits

0x61a1,	// (0x0001c00d) navi_navi_pane_stacon_ParamLimits

0x618d,	// (0x0001bff9) navi_text_pane_stacon_ParamLimits

0xc2e1,	// (0x0002214d) main_text_info_pane

0x0bd7,	// (0x00016a43) listscroll_text_info_pane

0x0bdf,	// (0x00016a4b) list_text_info_pane_ParamLimits

0x0bdf,	// (0x00016a4b) list_text_info_pane

0x0bee,	// (0x00016a5a) scroll_pane_cp24_ParamLimits

0x0bee,	// (0x00016a5a) scroll_pane_cp24

0xac5c,	// (0x00020ac8) list_text_info_pane_t1_ParamLimits

0xac5c,	// (0x00020ac8) list_text_info_pane_t1

0x97ca,	// (0x0001f636) popup_fast_swap2_window_ParamLimits

0x97ca,	// (0x0001f636) popup_fast_swap2_window

0x0c45,	// (0x00016ab1) aid_size_cell_fast2

0xc2e1,	// (0x0002214d) bg_popup_window_pane_cp17

0xdcb9,	// (0x00023b25) heading_pane_cp2

0xc66a,	// (0x000224d6) listscroll_fast2_pane

0x0c4f,	// (0x00016abb) grid_fast2_pane

0x0c59,	// (0x00016ac5) listscroll_fast2_pane_g1

0x0c61,	// (0x00016acd) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x00025a70) listscroll_fast2_pane_g

0xcab7,	// (0x00022923) scroll_pane_cp26

0x0c6b,	// (0x00016ad7) cell_fast2_pane_ParamLimits

0x0c6b,	// (0x00016ad7) cell_fast2_pane

0x0c80,	// (0x00016aec) cell_fast2_pane_g1

0x0c89,	// (0x00016af5) cell_fast2_pane_g2

0x0c92,	// (0x00016afe) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x00025a75) cell_fast2_pane_g

0xc6fe,	// (0x0002256a) grid_highlight_pane_cp9

0xc713,	// (0x0002257f) main_eswt_pane_ParamLimits

0xc713,	// (0x0002257f) main_eswt_pane

0x0c03,	// (0x00016a6f) list_single_text_info_pane

0x0c9a,	// (0x00016b06) eswt_ctrl_button_pane

0x0c9a,	// (0x00016b06) eswt_ctrl_canvas_pane

0x0ca2,	// (0x00016b0e) eswt_ctrl_combo_pane

0x0c9a,	// (0x00016b06) eswt_ctrl_default_pane

0x0c9a,	// (0x00016b06) eswt_ctrl_label_pane

0x0caa,	// (0x00016b16) eswt_ctrl_wait_pane

0x0cb2,	// (0x00016b1e) eswt_shell_pane

0xc2e1,	// (0x0002214d) listscroll_eswt_app_pane

0x0cd2,	// (0x00016b3e) popup_eswt_tasktip_window_ParamLimits

0x0cd2,	// (0x00016b3e) popup_eswt_tasktip_window

0xda12,	// (0x0002387e) bg_popup_window_pane_cp18

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_ParamLimits

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_ParamLimits

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_ParamLimits

0x0cfd,	// (0x00016b69) eswt_control_pane_g3

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_ParamLimits

0x0d0a,	// (0x00016b76) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x00025a7c) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x00025a7c) eswt_control_pane_g

0xc998,	// (0x00022804) bg_button_pane_ParamLimits

0xc998,	// (0x00022804) bg_button_pane

0xc713,	// (0x0002257f) common_borders_pane_copy2_ParamLimits

0xc713,	// (0x0002257f) common_borders_pane_copy2

0x0d17,	// (0x00016b83) control_button_pane_g1_ParamLimits

0x0d17,	// (0x00016b83) control_button_pane_g1

0x0d23,	// (0x00016b8f) control_button_pane_g2_ParamLimits

0x0d23,	// (0x00016b8f) control_button_pane_g2

0x0d2f,	// (0x00016b9b) control_button_pane_g3_ParamLimits

0x0d2f,	// (0x00016b9b) control_button_pane_g3

0x0002,

0xfc19,	// (0x00025a85) control_button_pane_g_ParamLimits

0xfc19,	// (0x00025a85) control_button_pane_g

0x0d43,	// (0x00016baf) control_button_pane_t1

0x0d51,	// (0x00016bbd) control_button_pane_t2

0x0001,

0xfc20,	// (0x00025a8c) control_button_pane_t

0xd922,	// (0x0002378e) bg_button_pane_g1

0xd92a,	// (0x00023796) bg_button_pane_g2

0xd932,	// (0x0002379e) bg_button_pane_g3

0xd93a,	// (0x000237a6) bg_button_pane_g4

0xd942,	// (0x000237ae) bg_button_pane_g5

0xd94a,	// (0x000237b6) bg_button_pane_g6

0xd952,	// (0x000237be) bg_button_pane_g7

0xd95a,	// (0x000237c6) bg_button_pane_g8

0xd962,	// (0x000237ce) bg_button_pane_g9

0x0008,

0xf893,	// (0x000256ff) bg_button_pane_g

0x0168,	// (0x00015fd4) common_borders_pane_ParamLimits

0x0168,	// (0x00015fd4) common_borders_pane

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy1_ParamLimits

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy1

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy1_ParamLimits

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy1

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy1_ParamLimits

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy1

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy1_ParamLimits

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy1

0x01a3,	// (0x0001600f) bg_eswt_ctrl_canvas_pane_g1

0x0168,	// (0x00015fd4) common_borders_pane_cp2_ParamLimits

0x0168,	// (0x00015fd4) common_borders_pane_cp2

0x0168,	// (0x00015fd4) common_borders_pane_cp3_ParamLimits

0x0168,	// (0x00015fd4) common_borders_pane_cp3

0x0d5f,	// (0x00016bcb) separator_horizontal_pane

0x0d67,	// (0x00016bd3) separator_vertical_pane

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy2_ParamLimits

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy2

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy2_ParamLimits

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy2

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy2_ParamLimits

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy2

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy2_ParamLimits

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy2

0xc2e1,	// (0x0002214d) common_borders_pane_cp4

0x0d70,	// (0x00016bdc) separator_horizontal_pane_g1

0x0d79,	// (0x00016be5) separator_horizontal_pane_g2

0x0d82,	// (0x00016bee) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x00025a91) separator_horizontal_pane_g

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy3_ParamLimits

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy3

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy3_ParamLimits

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy3

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy3_ParamLimits

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy3

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy3_ParamLimits

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy3

0xc2e1,	// (0x0002214d) common_borders_pane_cp5

0x0d8b,	// (0x00016bf7) separator_vertical_pane_g1

0x0d94,	// (0x00016c00) separator_vertical_pane_g2

0x0d9d,	// (0x00016c09) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x00025a98) separator_vertical_pane_g

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy4_ParamLimits

0x0ce3,	// (0x00016b4f) eswt_control_pane_g1_copy4

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy4_ParamLimits

0x0cf0,	// (0x00016b5c) eswt_control_pane_g2_copy4

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy4_ParamLimits

0x0cfd,	// (0x00016b69) eswt_control_pane_g3_copy4

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy4_ParamLimits

0x0d0a,	// (0x00016b76) eswt_control_pane_g4_copy4

0xac7a,	// (0x00020ae6) eswt_ctrl_combo_button_pane

0xac82,	// (0x00020aee) eswt_ctrl_input_pane

0xac8a,	// (0x00020af6) popup_choice_list_window_cp70

0xac92,	// (0x00020afe) eswt_ctrl_input_pane_t1

0xc2e1,	// (0x0002214d) input_focus_pane_cp70

0x0168,	// (0x00015fd4) bg_button_pane_cp70_ParamLimits

0x0168,	// (0x00015fd4) bg_button_pane_cp70

0xaca0,	// (0x00020b0c) eswt_ctrl_combo_button_pane_g1

0x0dd4,	// (0x00016c40) wait_bar_pane_cp70

0xda12,	// (0x0002387e) bg_popup_window_pane_cp70_ParamLimits

0xda12,	// (0x0002387e) bg_popup_window_pane_cp70

0x0ddc,	// (0x00016c48) popup_eswt_tasktip_window_t1

0x0df2,	// (0x00016c5e) wait_bar_pane_cp71_ParamLimits

0x0df2,	// (0x00016c5e) wait_bar_pane_cp71

0x0dfe,	// (0x00016c6a) grid_eswt_app_pane

0xccfe,	// (0x00022b6a) scroll_pane_cp70

0xaca8,	// (0x00020b14) cell_eswt_app_pane_ParamLimits

0xaca8,	// (0x00020b14) cell_eswt_app_pane

0xacd2,	// (0x00020b3e) cell_eswt_app_pane_g1_ParamLimits

0xacd2,	// (0x00020b3e) cell_eswt_app_pane_g1

0xad01,	// (0x00020b6d) cell_eswt_app_pane_g2_ParamLimits

0xad01,	// (0x00020b6d) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x00025a9f) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x00025a9f) cell_eswt_app_pane_g

0xad2a,	// (0x00020b96) cell_eswt_app_pane_t1_ParamLimits

0xad2a,	// (0x00020b96) cell_eswt_app_pane_t1

0x0ec5,	// (0x00016d31) grid_highlight_pane_cp70_ParamLimits

0x0ec5,	// (0x00016d31) grid_highlight_pane_cp70

0xd2a1,	// (0x0002310d) set_content_pane_g1

0xd5a5,	// (0x00023411) status_small_volume_pane

0x6dd3,	// (0x0001cc3f) status_small_volume_pane_g1

0x6ddb,	// (0x0001cc47) volume_small2_pane

0x6de4,	// (0x0001cc50) volume_small2_pane_g1

0x6ded,	// (0x0001cc59) volume_small2_pane_g2

0x6df6,	// (0x0001cc62) volume_small2_pane_g3

0x6dff,	// (0x0001cc6b) volume_small2_pane_g4

0x6e08,	// (0x0001cc74) volume_small2_pane_g5

0x6e11,	// (0x0001cc7d) volume_small2_pane_g6

0x6e1a,	// (0x0001cc86) volume_small2_pane_g7

0x6e23,	// (0x0001cc8f) volume_small2_pane_g8

0x6e2c,	// (0x0001cc98) volume_small2_pane_g9

0x6e35,	// (0x0001cca1) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x00025aa4) volume_small2_pane_g

0x0592,	// (0x000163fe) fep_vkb_top_text_pane_g1_ParamLimits

0xac04,	// (0x00020a70) fep_vkb_top_text_pane_t1_ParamLimits

0x080f,	// (0x0001667b) popup_preview_fixed_window_g3_ParamLimits

0x080f,	// (0x0001667b) popup_preview_fixed_window_g3

0x9dcd,	// (0x0001fc39) popup_toolbar_trans_pane

0xa6a4,	// (0x00020510) aid_height_set_list_ParamLimits

0xe87c,	// (0x000246e8) aid_size_parent_ParamLimits

0xd630,	// (0x0002349c) list_highlight_pane_cp2_ParamLimits

0xd2a1,	// (0x0002310d) set_content_pane_g1_ParamLimits

0xa83f,	// (0x000206ab) list_single_image_pane_ParamLimits

0xa83f,	// (0x000206ab) list_single_image_pane

0xad5c,	// (0x00020bc8) aid_size_cell_image_ParamLimits

0xad5c,	// (0x00020bc8) aid_size_cell_image

0xad69,	// (0x00020bd5) grid_single_image_pane_ParamLimits

0xad69,	// (0x00020bd5) grid_single_image_pane

0xc9b2,	// (0x0002281e) list_single_image_pane_g1_ParamLimits

0xc9b2,	// (0x0002281e) list_single_image_pane_g1

0xc9be,	// (0x0002282a) list_single_image_pane_g2_ParamLimits

0xc9be,	// (0x0002282a) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x00025ab9) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x00025ab9) list_single_image_pane_g

0x0eea,	// (0x00016d56) list_single_image_pane_t1_ParamLimits

0x0eea,	// (0x00016d56) list_single_image_pane_t1

0xad75,	// (0x00020be1) cell_image_list_pane_ParamLimits

0xad75,	// (0x00020be1) cell_image_list_pane

0xad89,	// (0x00020bf5) cell_image_list_pane_g1

0xad92,	// (0x00020bfe) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x00025abe) cell_image_list_pane_g

0x0f26,	// (0x00016d92) aid_size_cell_tb_trans_pane

0xc998,	// (0x00022804) bg_tb_trans_pane

0x0f38,	// (0x00016da4) grid_tb_trans_pane

0xd922,	// (0x0002378e) bg_tb_trans_pane_g1

0xd92a,	// (0x00023796) bg_tb_trans_pane_g2

0xd932,	// (0x0002379e) bg_tb_trans_pane_g3

0xd93a,	// (0x000237a6) bg_tb_trans_pane_g4

0xd942,	// (0x000237ae) bg_tb_trans_pane_g5

0xd95a,	// (0x000237c6) bg_tb_trans_pane_g6

0xd962,	// (0x000237ce) bg_tb_trans_pane_g7

0xd94a,	// (0x000237b6) bg_tb_trans_pane_g8

0xd952,	// (0x000237be) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x00025ac3) bg_tb_trans_pane_g

0x0f4c,	// (0x00016db8) cell_toolbar_trans_pane_ParamLimits

0x0f4c,	// (0x00016db8) cell_toolbar_trans_pane

0x01a3,	// (0x0001600f) cell_toolbar_trans_pane_g1

0xaa60,	// (0x000208cc) list_form2_midp_pane_t1

0xaa6e,	// (0x000208da) list_form2_midp_pane_t2

0x0001,

0xfb00,	// (0x0002596c) list_form2_midp_pane_t

0xf3c6,	// (0x00025232) scroll_pane_cp51_ParamLimits

0xf53c,	// (0x000253a8) form2_midp_wait_pane_g1

0xf545,	// (0x000253b1) form2_midp_wait_pane_g2

0xf54e,	// (0x000253ba) form2_midp_wait_pane_g3

0x0002,

0xfb15,	// (0x00025981) form2_midp_wait_pane_g

0xc351,	// (0x000221bd) list_highlight_pane_cp21_ParamLimits

0xf56e,	// (0x000253da) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf57d,	// (0x000253e9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5549,	// (0x0001b3b5) list_single_2graphic_im_pane_ParamLimits

0x5549,	// (0x0001b3b5) list_single_2graphic_im_pane

0xad9b,	// (0x00020c07) list_single_2graphic_im_pane_g1_ParamLimits

0xad9b,	// (0x00020c07) list_single_2graphic_im_pane_g1

0xadac,	// (0x00020c18) list_single_2graphic_im_pane_g2_ParamLimits

0xadac,	// (0x00020c18) list_single_2graphic_im_pane_g2

0xadb8,	// (0x00020c24) list_single_2graphic_im_pane_g3_ParamLimits

0xadb8,	// (0x00020c24) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x00025ad6) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x00025ad6) list_single_2graphic_im_pane_g

0xadcc,	// (0x00020c38) list_single_2graphic_im_pane_t1_ParamLimits

0xadcc,	// (0x00020c38) list_single_2graphic_im_pane_t1

0x081b,	// (0x00016687) list_single_graphic_2heading_pane_fp_ParamLimits

0x081b,	// (0x00016687) list_single_graphic_2heading_pane_fp

0x5894,	// (0x0001b700) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5894,	// (0x0001b700) list_single_graphic_2heading_pane_fp_g1

0x0832,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x0832,	// (0x0001669e) list_single_graphic_2heading_pane_fp_g2

0x4e95,	// (0x0001ad01) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e95,	// (0x0001ad01) list_single_graphic_2heading_pane_fp_g3

0x5869,	// (0x0001b6d5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5869,	// (0x0001b6d5) list_single_graphic_2heading_pane_fp_g4

0x083e,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x083e,	// (0x000166aa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00025a04) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00025a04) list_single_graphic_2heading_pane_fp_g

0x5a6d,	// (0x0001b8d9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5a6d,	// (0x0001b8d9) list_single_graphic_2heading_pane_fp_t1

0x58cc,	// (0x0001b738) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x58cc,	// (0x0001b738) list_single_graphic_2heading_pane_fp_t2

0x5a83,	// (0x0001b8ef) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5a83,	// (0x0001b8ef) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x00025adf) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x00025adf) list_single_graphic_2heading_pane_fp_t

0x0251,	// (0x000160bd) fep_hwr_write_pane_g5_ParamLimits

0x0251,	// (0x000160bd) fep_hwr_write_pane_g5

0x025d,	// (0x000160c9) fep_hwr_write_pane_g6_ParamLimits

0x025d,	// (0x000160c9) fep_hwr_write_pane_g6

0x0cb2,	// (0x00016b1e) eswt_shell_pane_ParamLimits

0xda12,	// (0x0002387e) bg_popup_window_pane_cp18_ParamLimits

0xe9d9,	// (0x00024845) heading_pane_cp70

0x0ddc,	// (0x00016c48) popup_eswt_tasktip_window_t1_ParamLimits

0x9e8e,	// (0x0001fcfa) aid_touch_tab_arrow_left

0x9ea4,	// (0x0001fd10) aid_touch_tab_arrow_right

0x9038,	// (0x0001eea4) title_pane_g3_ParamLimits

0x9038,	// (0x0001eea4) title_pane_g3

0xc957,	// (0x000227c3) set_value_pane_g1

0x9dcd,	// (0x0001fc39) popup_toolbar_trans_pane_ParamLimits

0x0f26,	// (0x00016d92) aid_size_cell_tb_trans_pane_ParamLimits

0xc998,	// (0x00022804) bg_tb_trans_pane_ParamLimits

0x0f38,	// (0x00016da4) grid_tb_trans_pane_ParamLimits

0xc484,	// (0x000222f0) cont_note_pane_ParamLimits

0xc484,	// (0x000222f0) cont_note_pane

0xc713,	// (0x0002257f) cont_snote2_single_text_pane_ParamLimits

0xc713,	// (0x0002257f) cont_snote2_single_text_pane

0xc713,	// (0x0002257f) cont_snote2_single_graphic_pane_ParamLimits

0xc713,	// (0x0002257f) cont_snote2_single_graphic_pane

0xde9e,	// (0x00023d0a) cont_note_wait_pane_ParamLimits

0xde9e,	// (0x00023d0a) cont_note_wait_pane

0xde9e,	// (0x00023d0a) cont_note_image_pane_ParamLimits

0xde9e,	// (0x00023d0a) cont_note_image_pane

0x100c,	// (0x00016e78) popup_note2_window_g1_ParamLimits

0x100c,	// (0x00016e78) popup_note2_window_g1

0x103d,	// (0x00016ea9) popup_note2_window_t1_ParamLimits

0x103d,	// (0x00016ea9) popup_note2_window_t1

0x1082,	// (0x00016eee) popup_note2_window_t2_ParamLimits

0x1082,	// (0x00016eee) popup_note2_window_t2

0x10c7,	// (0x00016f33) popup_note2_window_t3_ParamLimits

0x10c7,	// (0x00016f33) popup_note2_window_t3

0x110c,	// (0x00016f78) popup_note2_window_t4_ParamLimits

0x110c,	// (0x00016f78) popup_note2_window_t4

0xc4fc,	// (0x00022368) popup_note2_window_t5_ParamLimits

0xc4fc,	// (0x00022368) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x00025aeb) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x00025aeb) popup_note2_window_t

0x113b,	// (0x00016fa7) popup_note2_image_window_g1_ParamLimits

0x113b,	// (0x00016fa7) popup_note2_image_window_g1

0x1147,	// (0x00016fb3) popup_note2_image_window_g2_ParamLimits

0x1147,	// (0x00016fb3) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x00025af6) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x00025af6) popup_note2_image_window_g

0x1159,	// (0x00016fc5) popup_note2_image_window_t1_ParamLimits

0x1159,	// (0x00016fc5) popup_note2_image_window_t1

0x1171,	// (0x00016fdd) popup_note2_image_window_t2_ParamLimits

0x1171,	// (0x00016fdd) popup_note2_image_window_t2

0x1189,	// (0x00016ff5) popup_note2_image_window_t3_ParamLimits

0x1189,	// (0x00016ff5) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x00025afb) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x00025afb) popup_note2_image_window_t

0xdeac,	// (0x00023d18) popup_note2_wait_window_g1_ParamLimits

0xdeac,	// (0x00023d18) popup_note2_wait_window_g1

0xdeb8,	// (0x00023d24) popup_note2_wait_window_g2_ParamLimits

0xdeb8,	// (0x00023d24) popup_note2_wait_window_g2

0xdec4,	// (0x00023d30) popup_note2_wait_window_g3_ParamLimits

0xdec4,	// (0x00023d30) popup_note2_wait_window_g3

0x0002,

0xf875,	// (0x000256e1) popup_note2_wait_window_g_ParamLimits

0xf875,	// (0x000256e1) popup_note2_wait_window_g

0x11a5,	// (0x00017011) popup_note2_wait_window_t1_ParamLimits

0x11a5,	// (0x00017011) popup_note2_wait_window_t1

0x11c3,	// (0x0001702f) popup_note2_wait_window_t2_ParamLimits

0x11c3,	// (0x0001702f) popup_note2_wait_window_t2

0x11e1,	// (0x0001704d) popup_note2_wait_window_t3_ParamLimits

0x11e1,	// (0x0001704d) popup_note2_wait_window_t3

0x11f3,	// (0x0001705f) popup_note2_wait_window_t4_ParamLimits

0x11f3,	// (0x0001705f) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00025b02) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00025b02) popup_note2_wait_window_t

0x1205,	// (0x00017071) wait_bar2_pane_ParamLimits

0x1205,	// (0x00017071) wait_bar2_pane

0x121d,	// (0x00017089) popup_snote2_single_text_window_g1_ParamLimits

0x121d,	// (0x00017089) popup_snote2_single_text_window_g1

0x1245,	// (0x000170b1) popup_snote2_single_text_window_t1_ParamLimits

0x1245,	// (0x000170b1) popup_snote2_single_text_window_t1

0x1291,	// (0x000170fd) popup_snote2_single_text_window_t2_ParamLimits

0x1291,	// (0x000170fd) popup_snote2_single_text_window_t2

0x12dd,	// (0x00017149) popup_snote2_single_text_window_t3_ParamLimits

0x12dd,	// (0x00017149) popup_snote2_single_text_window_t3

0x131e,	// (0x0001718a) popup_snote2_single_text_window_t4_ParamLimits

0x131e,	// (0x0001718a) popup_snote2_single_text_window_t4

0x1354,	// (0x000171c0) popup_snote2_single_text_window_t5_ParamLimits

0x1354,	// (0x000171c0) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00025b0b) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00025b0b) popup_snote2_single_text_window_t

0x137f,	// (0x000171eb) popup_snote2_single_graphic_window_g1_ParamLimits

0x137f,	// (0x000171eb) popup_snote2_single_graphic_window_g1

0x13a7,	// (0x00017213) popup_snote2_single_graphic_window_g2_ParamLimits

0x13a7,	// (0x00017213) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00025b16) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00025b16) popup_snote2_single_graphic_window_g

0x13cf,	// (0x0001723b) popup_snote2_single_graphic_window_t1_ParamLimits

0x13cf,	// (0x0001723b) popup_snote2_single_graphic_window_t1

0x141b,	// (0x00017287) popup_snote2_single_graphic_window_t2_ParamLimits

0x141b,	// (0x00017287) popup_snote2_single_graphic_window_t2

0x12dd,	// (0x00017149) popup_snote2_single_graphic_window_t3_ParamLimits

0x12dd,	// (0x00017149) popup_snote2_single_graphic_window_t3

0x131e,	// (0x0001718a) popup_snote2_single_graphic_window_t4_ParamLimits

0x131e,	// (0x0001718a) popup_snote2_single_graphic_window_t4

0x1354,	// (0x000171c0) popup_snote2_single_graphic_window_t5_ParamLimits

0x1354,	// (0x000171c0) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00025b1b) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00025b1b) popup_snote2_single_graphic_window_t

0xf376,	// (0x000251e2) clock_nsta_pane_cp2_t1

0xf376,	// (0x000251e2) clock_nsta_pane_cp2_t2

0x0001,

0xfad6,	// (0x00025942) clock_nsta_pane_cp2_t

0x51c8,	// (0x0001b034) form_field_data_wide_pane_g1_ParamLimits

0xc9b2,	// (0x0002281e) form_field_data_wide_pane_g2_ParamLimits

0xc9b2,	// (0x0002281e) form_field_data_wide_pane_g2

0xc9be,	// (0x0002282a) form_field_data_wide_pane_g3_ParamLimits

0xc9be,	// (0x0002282a) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002552b) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002552b) form_field_data_wide_pane_g

0xa976,	// (0x000207e2) grid_touch_3_pane_ParamLimits

0xa976,	// (0x000207e2) grid_touch_3_pane

0xadfd,	// (0x00020c69) cell_touch_3_pane_ParamLimits

0xadfd,	// (0x00020c69) cell_touch_3_pane

0x01a3,	// (0x0001600f) cell_touch_3_pane_g1

0x01a3,	// (0x0001600f) cell_touch_3_pane_g2

0x0001,

0xfb5b,	// (0x000259c7) cell_touch_3_pane_g

0xc52e,	// (0x0002239a) cont_query_data_pane

0xc536,	// (0x000223a2) cont_query_data_pane_cp1

0x1496,	// (0x00017302) button_value_adjust_pane_cp7

0x149e,	// (0x0001730a) query_popup_pane_cp3

0xcf1b,	// (0x00022d87) bg_popup_sub_pane_cp22_ParamLimits

0x62a2,	// (0x0001c10e) navi_navi_volume_pane_cp2

0x62bd,	// (0x0001c129) popup_side_volume_key_window_g2

0x62cc,	// (0x0001c138) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x000255bd) popup_side_volume_key_window_g

0x62e9,	// (0x0001c155) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x000255c4) popup_side_volume_key_window_t

0xd16b,	// (0x00022fd7) popup_side_volume_key_window_ParamLimits

0x88b9,	// (0x0001e725) list_double_graphic_pane_g4_ParamLimits

0x88b9,	// (0x0001e725) list_double_graphic_pane_g4

0x8d2d,	// (0x0001eb99) list_single_2heading_msg_pane_ParamLimits

0x8d2d,	// (0x0001eb99) list_single_2heading_msg_pane

0x8d4e,	// (0x0001ebba) list_single_2heading_msg_pane_g1_ParamLimits

0x8d4e,	// (0x0001ebba) list_single_2heading_msg_pane_g1

0x8d5a,	// (0x0001ebc6) list_single_2heading_msg_pane_g2_ParamLimits

0x8d5a,	// (0x0001ebc6) list_single_2heading_msg_pane_g2

0x8d6d,	// (0x0001ebd9) list_single_2heading_msg_pane_g3_ParamLimits

0x8d6d,	// (0x0001ebd9) list_single_2heading_msg_pane_g3

0x5aaf,	// (0x0001b91b) list_single_2heading_msg_pane_g4_ParamLimits

0x5aaf,	// (0x0001b91b) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00025b26) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00025b26) list_single_2heading_msg_pane_g

0x5ac7,	// (0x0001b933) list_single_2heading_msg_pane_t1_ParamLimits

0x5ac7,	// (0x0001b933) list_single_2heading_msg_pane_t1

0x8d79,	// (0x0001ebe5) list_single_2heading_msg_pane_t2_ParamLimits

0x8d79,	// (0x0001ebe5) list_single_2heading_msg_pane_t2

0x8de4,	// (0x0001ec50) list_single_2heading_msg_pane_t3_ParamLimits

0x8de4,	// (0x0001ec50) list_single_2heading_msg_pane_t3

0x5b5c,	// (0x0001b9c8) list_single_2heading_msg_pane_t4_ParamLimits

0x5b5c,	// (0x0001b9c8) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x00025b2f) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x00025b2f) list_single_2heading_msg_pane_t

0xc2ff,	// (0x0002216b) title_pane_g4_ParamLimits

0xc2ff,	// (0x0002216b) title_pane_g4

0x60b0,	// (0x0001bf1c) title_pane_stacon_g3_ParamLimits

0x60b0,	// (0x0001bf1c) title_pane_stacon_g3

0x0fa3,	// (0x00016e0f) list_single_2graphic_im_pane_g4_ParamLimits

0x0fa3,	// (0x00016e0f) list_single_2graphic_im_pane_g4

0xe7df,	// (0x0002464b) popup_side_volume_key_window_cp

0xecc9,	// (0x00024b35) main_idle_act2_pane_t1

0x6663,	// (0x0001c4cf) toolbar_button_pane_g10

0x9355,	// (0x0001f1c1) popup_toolbar_window_cp1

0xf367,	// (0x000251d3) clock_nsta_pane_cp_t1

0xf367,	// (0x000251d3) clock_nsta_pane_cp_t2

0x0001,

0xfad1,	// (0x0002593d) clock_nsta_pane_cp_t

0x62a2,	// (0x0001c10e) navi_navi_volume_pane_cp2_ParamLimits

0x62b1,	// (0x0001c11d) popup_side_volume_key_window_g1_ParamLimits

0x62bd,	// (0x0001c129) popup_side_volume_key_window_g2_ParamLimits

0x62cc,	// (0x0001c138) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x000255bd) popup_side_volume_key_window_g_ParamLimits

0x6afe,	// (0x0001c96a) fep_hwr_aid_pane

0x363d,	// (0x000194a9) bg_fep_hwr_top_pane_g4_ParamLimits

0x0225,	// (0x00016091) fep_hwr_top_pane_g1_ParamLimits

0x0213,	// (0x0001607f) fep_hwr_top_pane_g2_ParamLimits

0x6bb7,	// (0x0001ca23) fep_hwr_top_pane_g3_ParamLimits

0xfb26,	// (0x00025992) fep_hwr_top_pane_g_ParamLimits

0x6bcc,	// (0x0001ca38) fep_hwr_top_text_pane_ParamLimits

0xe5d4,	// (0x00024440) aid_touch_tab_arrow_arrow_2

0xe5dd,	// (0x00024449) aid_touch_tab_arrow_left_2

0x6b12,	// (0x0001c97e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b49,	// (0x0001c9b5) fep_hwr_prediction_pane

0x039a,	// (0x00016206) fep_vkb_prediction_pane

0xabe4,	// (0x00020a50) fep_vkb_side_pane_g3_ParamLimits

0xabe4,	// (0x00020a50) fep_vkb_side_pane_g3

0x044a,	// (0x000162b6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0a99,	// (0x00016905) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0aa6,	// (0x00016912) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00025a3c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x15b7,	// (0x00017423) fep_hwr_prediction_pane_g1

0x6e3e,	// (0x0001ccaa) fep_hwr_prediction_pane_g2

0x6e46,	// (0x0001ccb2) fep_hwr_prediction_pane_g3

0x6e4e,	// (0x0001ccba) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00025b38) fep_hwr_prediction_pane_g

0x15b7,	// (0x00017423) fep_vkb_prediction_pane_g1

0x15c1,	// (0x0001742d) fep_vkb_prediction_pane_g2

0x15c9,	// (0x00017435) fep_vkb_prediction_pane_g3

0x15d1,	// (0x0001743d) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x00025b41) fep_vkb_prediction_pane_g

0x693b,	// (0x0001c7a7) slider_set_pane_g3

0x694f,	// (0x0001c7bb) slider_set_pane_g4

0x6967,	// (0x0001c7d3) slider_set_pane_g5

0x693b,	// (0x0001c7a7) slider_set_pane_g6

0x697d,	// (0x0001c7e9) slider_set_pane_g7

0xea5e,	// (0x000248ca) slider_form_pane_g3

0xea67,	// (0x000248d3) slider_form_pane_g4

0xea6f,	// (0x000248db) slider_form_pane_g5

0xea5e,	// (0x000248ca) slider_form_pane_g6

0xa7eb,	// (0x00020657) slider_form_pane_g7

0xef67,	// (0x00024dd3) slider_set_pane_vc_g3

0xef70,	// (0x00024ddc) slider_set_pane_vc_g4

0xef79,	// (0x00024de5) slider_set_pane_vc_g5

0xef67,	// (0x00024dd3) slider_set_pane_vc_g6

0xef82,	// (0x00024dee) slider_set_pane_vc_g7

0xef67,	// (0x00024dd3) slider_form_pane_vc_g1

0xef70,	// (0x00024ddc) slider_form_pane_vc_g2

0xef79,	// (0x00024de5) slider_form_pane_vc_g3

0xef67,	// (0x00024dd3) slider_form_pane_vc_g4

0xf111,	// (0x00024f7d) slider_form_pane_vc_g5

0x0004,

0xfab7,	// (0x00025923) slider_form_pane_vc_g

0xc2e1,	// (0x0002214d) main_idle_act3_pane

0x15d9,	// (0x00017445) ai3_links_pane

0xae46,	// (0x00020cb2) popup_ai3_data_window_ParamLimits

0xae46,	// (0x00020cb2) popup_ai3_data_window

0xc2e1,	// (0x0002214d) grid_ai3_links_pane

0xae5e,	// (0x00020cca) cell_ai3_links_pane_ParamLimits

0xae5e,	// (0x00020cca) cell_ai3_links_pane

0x1612,	// (0x0001747e) bg_popup_sub_pane_cp11

0x161f,	// (0x0001748b) cell_ai3_links_pane_g1

0xc2e1,	// (0x0002214d) bg_popup_sub_pane_cp12

0x1644,	// (0x000174b0) heading_ai3_data_pane

0x164c,	// (0x000174b8) list_ai3_gene_pane

0x1658,	// (0x000174c4) popup_ai3_data_window_g1

0x1660,	// (0x000174cc) heading_ai3_data_pane_g1

0x1668,	// (0x000174d4) heading_ai3_data_pane_t1

0x1676,	// (0x000174e2) list_double_ai3_gene_pane_ParamLimits

0x1676,	// (0x000174e2) list_double_ai3_gene_pane

0x1683,	// (0x000174ef) list_single_ai3_gene_pane_ParamLimits

0x1683,	// (0x000174ef) list_single_ai3_gene_pane

0x0168,	// (0x00015fd4) list_highlight_pane_cp7_ParamLimits

0x0168,	// (0x00015fd4) list_highlight_pane_cp7

0x1690,	// (0x000174fc) list_single_a13_gene_pane_t1_ParamLimits

0x1690,	// (0x000174fc) list_single_a13_gene_pane_t1

0x16a7,	// (0x00017513) list_single_ai3_gene_pane_g1

0x16b0,	// (0x0001751c) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00025b4a) list_single_ai3_gene_pane_g

0x16b8,	// (0x00017524) list_double_ai3_gene_pane_g1_ParamLimits

0x16b8,	// (0x00017524) list_double_ai3_gene_pane_g1

0x16c4,	// (0x00017530) list_double_ai3_gene_pane_t1_ParamLimits

0x16c4,	// (0x00017530) list_double_ai3_gene_pane_t1

0x16e0,	// (0x0001754c) list_double_ai3_gene_pane_t2_ParamLimits

0x16e0,	// (0x0001754c) list_double_ai3_gene_pane_t2

0x16f5,	// (0x00017561) list_double_ai3_gene_pane_t3_ParamLimits

0x16f5,	// (0x00017561) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x00025b4f) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x00025b4f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5a99,	// (0x0001b905) aid_size_min_col_2

0xae30,	// (0x00020c9c) aid_size_min_msg_ParamLimits

0xae30,	// (0x00020c9c) aid_size_min_msg

0xabf8,	// (0x00020a64) fep_vkb_top_text_pane_g2_ParamLimits

0xabf8,	// (0x00020a64) fep_vkb_top_text_pane_g2

0x0001,

0xfb56,	// (0x000259c2) fep_vkb_top_text_pane_g_ParamLimits

0xfb56,	// (0x000259c2) fep_vkb_top_text_pane_g

0xc2e1,	// (0x0002214d) main_hc_apps_shell_pane

0x1712,	// (0x0001757e) grid_hc_apps_pane_ParamLimits

0x1712,	// (0x0001757e) grid_hc_apps_pane

0x1721,	// (0x0001758d) list_hc_apps_pane

0x1729,	// (0x00017595) scroll_pane_cp37_ParamLimits

0x1729,	// (0x00017595) scroll_pane_cp37

0xae78,	// (0x00020ce4) cell_hc_apps_pane_ParamLimits

0xae78,	// (0x00020ce4) cell_hc_apps_pane

0xaf38,	// (0x00020da4) cell_hc_apps_pane_g1_ParamLimits

0xaf38,	// (0x00020da4) cell_hc_apps_pane_g1

0x1816,	// (0x00017682) cell_hc_apps_pane_g2_ParamLimits

0x1816,	// (0x00017682) cell_hc_apps_pane_g2

0x1832,	// (0x0001769e) cell_hc_apps_pane_g3_ParamLimits

0x1832,	// (0x0001769e) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00025b56) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00025b56) cell_hc_apps_pane_g

0xaf65,	// (0x00020dd1) cell_hc_apps_pane_t1_ParamLimits

0xaf65,	// (0x00020dd1) cell_hc_apps_pane_t1

0xc484,	// (0x000222f0) grid_highlight_pane_cp10_ParamLimits

0xc484,	// (0x000222f0) grid_highlight_pane_cp10

0xafa3,	// (0x00020e0f) list_single_hc_apps_pane_ParamLimits

0xafa3,	// (0x00020e0f) list_single_hc_apps_pane

0x1907,	// (0x00017773) list_single_hc_apps_pane_g1

0x5b81,	// (0x0001b9ed) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x00025b5d) list_single_hc_apps_pane_g

0x5b9a,	// (0x0001ba06) list_single_hc_apps_pane_g2_copy1

0x5bb6,	// (0x0001ba22) list_single_hc_apps_pane_t1

0xc351,	// (0x000221bd) bg_set_opt_pane_cp_ParamLimits

0x5fdb,	// (0x0001be47) setting_slider_pane_t1_ParamLimits

0x5ff4,	// (0x0001be60) setting_slider_pane_t2_ParamLimits

0x600d,	// (0x0001be79) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002540e) setting_slider_pane_t_ParamLimits

0x6024,	// (0x0001be90) slider_set_pane_ParamLimits

0x6541,	// (0x0001c3ad) control_pane_g5_ParamLimits

0x6541,	// (0x0001c3ad) control_pane_g5

0xea20,	// (0x0002488c) slider_set_pane_g1_ParamLimits

0x692f,	// (0x0001c79b) slider_set_pane_g2_ParamLimits

0x693b,	// (0x0001c7a7) slider_set_pane_g3_ParamLimits

0x694f,	// (0x0001c7bb) slider_set_pane_g4_ParamLimits

0x6967,	// (0x0001c7d3) slider_set_pane_g5_ParamLimits

0x693b,	// (0x0001c7a7) slider_set_pane_g6_ParamLimits

0x697d,	// (0x0001c7e9) slider_set_pane_g7_ParamLimits

0xf991,	// (0x000257fd) slider_set_pane_g_ParamLimits

0xd24c,	// (0x000230b8) navi_icon_text_pane_ParamLimits

0x9e5a,	// (0x0001fcc6) aid_fill_nsta_2_ParamLimits

0x9e8e,	// (0x0001fcfa) aid_touch_tab_arrow_left_ParamLimits

0x9ea4,	// (0x0001fd10) aid_touch_tab_arrow_right_ParamLimits

0x9f3f,	// (0x0001fdab) clock_nsta_pane_ParamLimits

0xa593,	// (0x000203ff) navi_icon_pane_g1_ParamLimits

0xa59f,	// (0x0002040b) navi_text_pane_t1_ParamLimits

0xaa42,	// (0x000208ae) navi_icon_text_pane_g1_ParamLimits

0xaa4e,	// (0x000208ba) navi_icon_text_pane_t1_ParamLimits

0x1907,	// (0x00017773) list_single_hc_apps_pane_g1_ParamLimits

0x5b81,	// (0x0001b9ed) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x00025b5d) list_single_hc_apps_pane_g_ParamLimits

0x5b9a,	// (0x0001ba06) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5bb6,	// (0x0001ba22) list_single_hc_apps_pane_t1_ParamLimits

0x8fa4,	// (0x0001ee10) popup_toolbar2_fixed_window_ParamLimits

0x8fa4,	// (0x0001ee10) popup_toolbar2_fixed_window

0x9dc3,	// (0x0001fc2f) popup_toolbar2_float_window

0xc2e1,	// (0x0002214d) bg_popup_sub_pane_cp27

0x1983,	// (0x000177ef) grid_toolbar2_float_pane

0xc2e1,	// (0x0002214d) bg_popup_sub_pane_cp26

0x1983,	// (0x000177ef) grid_toolbar2_fixed_pane

0xafd6,	// (0x00020e42) cell_toolbar2_fixed_pane_ParamLimits

0xafd6,	// (0x00020e42) cell_toolbar2_fixed_pane

0xaff1,	// (0x00020e5d) cell_toolbar2_fixed_pane_g1

0x19a5,	// (0x00017811) toolbar2_fixed_button_pane

0xd922,	// (0x0002378e) toolbar2_fixed_button_pane_g1

0xd92a,	// (0x00023796) toolbar2_fixed_button_pane_g2

0xd932,	// (0x0002379e) toolbar2_fixed_button_pane_g3

0xd93a,	// (0x000237a6) toolbar2_fixed_button_pane_g4

0xd942,	// (0x000237ae) toolbar2_fixed_button_pane_g5

0xd94a,	// (0x000237b6) toolbar2_fixed_button_pane_g6

0xd952,	// (0x000237be) toolbar2_fixed_button_pane_g7

0xd95a,	// (0x000237c6) toolbar2_fixed_button_pane_g8

0xd962,	// (0x000237ce) toolbar2_fixed_button_pane_g9

0x0008,

0xf893,	// (0x000256ff) toolbar2_fixed_button_pane_g

0x19ad,	// (0x00017819) cell_toolbar2_float_pane_ParamLimits

0x19ad,	// (0x00017819) cell_toolbar2_float_pane

0x19be,	// (0x0001782a) cell_toolbar2_float_pane_g1

0x19a5,	// (0x00017811) toolbar2_fixed_button_pane_cp

0xabab,	// (0x00020a17) fep_vkb_accented_list_pane_ParamLimits

0xabab,	// (0x00020a17) fep_vkb_accented_list_pane

0x6d1a,	// (0x0001cb86) bg_popup_fep_shadow_pane_g9

0xd3ce,	// (0x0002323a) bg_popup_fep_shadow_pane_cp3

0xca9e,	// (0x0002290a) list_accented_list_pane

0x19c7,	// (0x00017833) list_single_accented_list_pane_ParamLimits

0x19c7,	// (0x00017833) list_single_accented_list_pane

0xd3ce,	// (0x0002323a) list_highlight_pane_cp10

0x19d8,	// (0x00017844) list_single_accented_list_pane_t1

0x9ced,	// (0x0001fb59) popup_slider_window_ParamLimits

0x9ced,	// (0x0001fb59) popup_slider_window

0x14a6,	// (0x00017312) aid_indentation_list_msg

0xb0ea,	// (0x00020f56) bg_popup_window_pane_cp19

0x1afc,	// (0x00017968) popup_slider_window_g1

0x1b18,	// (0x00017984) popup_slider_window_g2

0x1b34,	// (0x000179a0) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x00025b62) popup_slider_window_g

0x1b90,	// (0x000179fc) popup_slider_window_t1

0x1c04,	// (0x00017a70) small_volume_slider_vertical_pane

0x01a3,	// (0x0001600f) small_volume_slider_vertical_pane_g1

0x01a3,	// (0x0001600f) small_volume_slider_vertical_pane_g2

0x1c20,	// (0x00017a8c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x00025b74) small_volume_slider_vertical_pane_g

0x8f12,	// (0x0001ed7e) area_side_right_pane_ParamLimits

0x8f12,	// (0x0001ed7e) area_side_right_pane

0xb1a2,	// (0x0002100e) aid_size_side_button_ParamLimits

0xb1a2,	// (0x0002100e) aid_size_side_button

0xb1bb,	// (0x00021027) grid_sctrl_middle_pane_ParamLimits

0xb1bb,	// (0x00021027) grid_sctrl_middle_pane

0x6e8a,	// (0x0001ccf6) sctrl_sk_bottom_pane

0x6e9b,	// (0x0001cd07) sctrl_sk_top_pane

0x6ead,	// (0x0001cd19) aid_touch_sctrl_top

0xc484,	// (0x000222f0) bg_sctrl_sk_pane_ParamLimits

0xc484,	// (0x000222f0) bg_sctrl_sk_pane

0x6eba,	// (0x0001cd26) sctrl_sk_top_pane_g1

0x6ec7,	// (0x0001cd33) sctrl_sk_top_pane_t1

0x6ead,	// (0x0001cd19) aid_touch_sctrl_bottom

0xc484,	// (0x000222f0) bg_sctrl_sk_pane_cp_ParamLimits

0xc484,	// (0x000222f0) bg_sctrl_sk_pane_cp

0x6ee2,	// (0x0001cd4e) sctrl_sk_bottom_pane_g1

0x6ec7,	// (0x0001cd33) sctrl_sk_bottom_pane_t1

0xb1d5,	// (0x00021041) cell_sctrl_middle_pane_ParamLimits

0xb1d5,	// (0x00021041) cell_sctrl_middle_pane

0xb1e6,	// (0x00021052) aid_touch_sctrl_middle_ParamLimits

0xb1e6,	// (0x00021052) aid_touch_sctrl_middle

0xb1f3,	// (0x0002105f) bg_sctrl_middle_pane_ParamLimits

0xb1f3,	// (0x0002105f) bg_sctrl_middle_pane

0x1ca8,	// (0x00017b14) cell_sctrl_middle_pane_g1_ParamLimits

0x1ca8,	// (0x00017b14) cell_sctrl_middle_pane_g1

0xb201,	// (0x0002106d) cell_sctrl_middle_pane_g2_ParamLimits

0xb201,	// (0x0002106d) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x00025b80) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x00025b80) cell_sctrl_middle_pane_g

0xd922,	// (0x0002378e) bg_sctrl_middle_pane_g1

0xd92a,	// (0x00023796) bg_sctrl_middle_pane_g2

0xd932,	// (0x0002379e) bg_sctrl_middle_pane_g3

0xd93a,	// (0x000237a6) bg_sctrl_middle_pane_g4

0xd942,	// (0x000237ae) bg_sctrl_middle_pane_g5

0xd94a,	// (0x000237b6) bg_sctrl_middle_pane_g6

0xd952,	// (0x000237be) bg_sctrl_middle_pane_g7

0xd95a,	// (0x000237c6) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x00025b85) bg_sctrl_middle_pane_g

0xd962,	// (0x000237ce) bg_sctrl_middle_pane_g8_copy1

0xd922,	// (0x0002378e) bg_sctrl_sk_pane_g1

0xd92a,	// (0x00023796) bg_sctrl_sk_pane_g2

0xd932,	// (0x0002379e) bg_sctrl_sk_pane_g3

0x0008,

0xf893,	// (0x000256ff) bg_sctrl_sk_pane_g

0xc8d1,	// (0x0002273d) aid_size_touch_scroll_bar

0xd93a,	// (0x000237a6) bg_sctrl_sk_pane_g4

0xd942,	// (0x000237ae) bg_sctrl_sk_pane_g5

0xd94a,	// (0x000237b6) bg_sctrl_sk_pane_g6

0xd952,	// (0x000237be) bg_sctrl_sk_pane_g7

0xd95a,	// (0x000237c6) bg_sctrl_sk_pane_g8

0xd962,	// (0x000237ce) bg_sctrl_sk_pane_g9

0xd664,	// (0x000234d0) popup_fep_china_hwr2_fs_candidate_window

0x9827,	// (0x0001f693) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9827,	// (0x0001f693) popup_fep_china_hwr2_fs_control_window

0x044a,	// (0x000162b6) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x00025b7b) sctrl_sk_top_pane_g

0xb20d,	// (0x00021079) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb20d,	// (0x00021079) aid_fep_china_hwr2_fs_cell

0xb221,	// (0x0002108d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb221,	// (0x0002108d) bg_popup_fep_shadow_pane_cp4

0xb238,	// (0x000210a4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb238,	// (0x000210a4) bg_popup_fep_shadow_pane_cp5

0xb24a,	// (0x000210b6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb24a,	// (0x000210b6) popup_fep_china_hwr2_fs_control_bar_grid

0xb25e,	// (0x000210ca) popup_fep_china_hwr2_fs_control_funtion_grid

0x1c7c,	// (0x00017ae8) aid_fep_china_hwr2_fs_candi_cell

0xc2e1,	// (0x0002214d) bg_popup_fep_shadow_pane_cp6

0x1c86,	// (0x00017af2) popup_fep_china_hwr2_fs_candidate_grid

0xb266,	// (0x000210d2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb266,	// (0x000210d2) cell_fep_china_hwr2_fs_funtion_grid

0x01a3,	// (0x0001600f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1ca8,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1ca8,	// (0x00017b14) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1cb6,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1cb6,	// (0x00017b22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x00025b96) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x00025b96) cell_fep_china_hwr2_fs_funtion_grid_g

0xb27e,	// (0x000210ea) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb27e,	// (0x000210ea) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb293,	// (0x000210ff) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb293,	// (0x000210ff) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x00025b9b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x00025b9b) cell_fep_china_hwr2_fs_funtion_grid_t

0x1cfd,	// (0x00017b69) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1d05,	// (0x00017b71) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x1d0d,	// (0x00017b79) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x00025ba0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1d15,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1d15,	// (0x00017b81) cell_fep_china_hwr2_fs_candidate_grid

0x1d2e,	// (0x00017b9a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1d36,	// (0x00017ba2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x01a3,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x01a3,	// (0x0001600f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5b,	// (0x000259c7) cell_fep_china_hwr2_fs_candidate_grid_g

0x1d3e,	// (0x00017baa) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd771,	// (0x000235dd) clock_nsta_pane_cp_24_ParamLimits

0xd771,	// (0x000235dd) clock_nsta_pane_cp_24

0xd7d9,	// (0x00023645) indicator_nsta_pane_cp_24_ParamLimits

0xd7d9,	// (0x00023645) indicator_nsta_pane_cp_24

0xe4de,	// (0x0002434a) heading_pane_g1

0x0001,

0xf8f8,	// (0x00025764) heading_pane_g

0xeb54,	// (0x000249c0) grid_sct_catagory_button_pane

0xe88e,	// (0x000246fa) scroll_pane_cp5_ParamLimits

0xf3d2,	// (0x0002523e) button_value_adjust_pane_cp5_ParamLimits

0xf3d2,	// (0x0002523e) button_value_adjust_pane_cp5

0xf490,	// (0x000252fc) form2_midp_time_pane_ParamLimits

0x1d4c,	// (0x00017bb8) cell_sct_catagory_button_pane_ParamLimits

0x1d4c,	// (0x00017bb8) cell_sct_catagory_button_pane

0x0168,	// (0x00015fd4) bg_button_pane_cp01_ParamLimits

0x0168,	// (0x00015fd4) bg_button_pane_cp01

0x01a3,	// (0x0001600f) cell_sct_catagory_button_pane_g1

0x9d66,	// (0x0001fbd2) popup_tb_extension_window

0xb2af,	// (0x0002111b) aid_size_cell_ext_ParamLimits

0xb2af,	// (0x0002111b) aid_size_cell_ext

0xc713,	// (0x0002257f) bg_tb_trans_pane_cp1_ParamLimits

0xc713,	// (0x0002257f) bg_tb_trans_pane_cp1

0xb2d5,	// (0x00021141) grid_tb_ext_pane_ParamLimits

0xb2d5,	// (0x00021141) grid_tb_ext_pane

0xb315,	// (0x00021181) cell_tb_ext_pane_ParamLimits

0xb315,	// (0x00021181) cell_tb_ext_pane

0xb33d,	// (0x000211a9) cell_tb_ext_pane_g1_ParamLimits

0xb33d,	// (0x000211a9) cell_tb_ext_pane_g1

0x1de4,	// (0x00017c50) cell_tb_ext_pane_t1

0xc484,	// (0x000222f0) list_highlight_pane_cp11_ParamLimits

0xc484,	// (0x000222f0) list_highlight_pane_cp11

0x5f14,	// (0x0001bd80) popup_uni_indicator_window_ParamLimits

0x5f14,	// (0x0001bd80) popup_uni_indicator_window

0xc998,	// (0x00022804) bg_popup_sub_pane_cp14

0x1dff,	// (0x00017c6b) list_uniindi_pane

0x1e0b,	// (0x00017c77) uniindi_top_pane

0xc484,	// (0x000222f0) bg_uniindi_top_pane

0x1e2a,	// (0x00017c96) uniindi_top_pane_g1

0x1e40,	// (0x00017cac) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x00025ba7) uniindi_top_pane_g

0x1e6a,	// (0x00017cd6) uniindi_top_pane_t1

0x1e94,	// (0x00017d00) list_single_uniindi_pane_ParamLimits

0x1e94,	// (0x00017d00) list_single_uniindi_pane

0x01a3,	// (0x0001600f) bg_uniindi_top_pane_g1

0x1ea6,	// (0x00017d12) list_single_uniindi_pane_g1

0x1eb9,	// (0x00017d25) list_single_uniindi_pane_t1

0xc2e1,	// (0x0002214d) control_bg_pane

0x1ede,	// (0x00017d4a) bg_sctrl_sk_pane_cp1

0x1ee7,	// (0x00017d53) bg_sctrl_sk_pane_cp2

0x1ef0,	// (0x00017d5c) control_bg_pane_g1

0x1ef9,	// (0x00017d65) control_bg_pane_g2

0x0001,

0xfd44,	// (0x00025bb0) control_bg_pane_g

0xf341,	// (0x000251ad) cell_indicator_nsta_pane_g1_ParamLimits

0xa9a9,	// (0x00020815) cell_indicator_nsta_pane_g2_ParamLimits

0xfacc,	// (0x00025938) cell_indicator_nsta_pane_g_ParamLimits

0x5856,	// (0x0001b6c2) form2_midp_time_pane_t1_ParamLimits

0x0237,	// (0x000160a3) main_idle_act4_pane_ParamLimits

0x0237,	// (0x000160a3) main_idle_act4_pane

0x9d66,	// (0x0001fbd2) popup_tb_extension_window_ParamLimits

0xb2fc,	// (0x00021168) tb_ext_find_pane_ParamLimits

0xb2fc,	// (0x00021168) tb_ext_find_pane

0x1f02,	// (0x00017d6e) ai_gene_pane_1_cp1

0xd450,	// (0x000232bc) ai_gene_pane_2_cp1

0x1f0a,	// (0x00017d76) list_single_idle_plugin_calendar_pane

0x1f13,	// (0x00017d7f) list_single_idle_plugin_notification_pane

0x1f1c,	// (0x00017d88) list_single_idle_plugin_player_pane

0xb35a,	// (0x000211c6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb35a,	// (0x000211c6) list_single_idle_plugin_shortcut_pane

0xb382,	// (0x000211ee) main_idle_act4_pane_t1

0xb398,	// (0x00021204) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x00025bb5) main_idle_act4_pane_t

0xb3b0,	// (0x0002121c) middle_sk_idle_act4_pane_ParamLimits

0xb3b0,	// (0x0002121c) middle_sk_idle_act4_pane

0xb3cc,	// (0x00021238) popup_clock_digital_analogue_window_cp2

0xb3f3,	// (0x0002125f) shortcut_wheel_idle_act4_pane_ParamLimits

0xb3f3,	// (0x0002125f) shortcut_wheel_idle_act4_pane

0x01a3,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g1

0x01a3,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g2

0x01a3,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g3

0x01a3,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g4

0x01a3,	// (0x0001600f) shortcut_wheel_idle_act4_pane_g5

0x1faf,	// (0x00017e1b) shortcut_wheel_idle_act4_pane_g6

0x1fb7,	// (0x00017e23) shortcut_wheel_idle_act4_pane_g7

0x1fbf,	// (0x00017e2b) shortcut_wheel_idle_act4_pane_g8

0x1fc7,	// (0x00017e33) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x00025bba) shortcut_wheel_idle_act4_pane_g

0x363d,	// (0x000194a9) middle_sk_idle_act4_pane_g1_ParamLimits

0x363d,	// (0x000194a9) middle_sk_idle_act4_pane_g1

0xb470,	// (0x000212dc) middle_sk_idle_act4_pane_g2_ParamLimits

0xb470,	// (0x000212dc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x00025bdd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x00025bdd) middle_sk_idle_act4_pane_g

0xb488,	// (0x000212f4) middle_sk_idle_act4_pane_t1_ParamLimits

0xb488,	// (0x000212f4) middle_sk_idle_act4_pane_t1

0xb4b7,	// (0x00021323) grid_ai_shortcut_pane_ParamLimits

0xb4b7,	// (0x00021323) grid_ai_shortcut_pane

0xb4d4,	// (0x00021340) list_highlight_pane_cp16_ParamLimits

0xb4d4,	// (0x00021340) list_highlight_pane_cp16

0xb4e1,	// (0x0002134d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb4e1,	// (0x0002134d) list_single_idle_plugin_shortcut_pane_g1

0xb4ed,	// (0x00021359) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb4ed,	// (0x00021359) list_single_idle_plugin_shortcut_pane_g2

0xb509,	// (0x00021375) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb509,	// (0x00021375) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00025be2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00025be2) list_single_idle_plugin_shortcut_pane_g

0xb51e,	// (0x0002138a) cell_ai_shortcut_pane_ParamLimits

0xb51e,	// (0x0002138a) cell_ai_shortcut_pane

0xb534,	// (0x000213a0) cell_ai_shortcut_pane_g1_ParamLimits

0xb534,	// (0x000213a0) cell_ai_shortcut_pane_g1

0x1f02,	// (0x00017d6e) ai_gene_pane_1_cp2

0x20f4,	// (0x00017f60) ai_gene_pane_2_cp2

0x20fc,	// (0x00017f68) list_highlight_pane_cp15

0x2105,	// (0x00017f71) list_single_idle_plugin_calendar_pane_g1

0x20fc,	// (0x00017f68) list_highlight_pane_cp17

0x210d,	// (0x00017f79) list_single_idle_plugin_calendar_pane_g1_copy1

0x2115,	// (0x00017f81) list_single_idle_plugin_player_pane_g1

0xed69,	// (0x00024bd5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00025be9) list_single_idle_plugin_player_pane_g

0x211d,	// (0x00017f89) list_single_idle_plugin_player_pane_t1

0x212b,	// (0x00017f97) list_single_idle_plugin_player_pane_t2

0x2139,	// (0x00017fa5) list_single_idle_plugin_player_pane_t3

0x2147,	// (0x00017fb3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x00025bee) list_single_idle_plugin_player_pane_t

0x2155,	// (0x00017fc1) wait_bar_pane_cp15

0x215d,	// (0x00017fc9) grid_ai_notification_pane

0xed69,	// (0x00024bd5) list_single_idle_plugin_notification_pane_g1

0xb556,	// (0x000213c2) cell_ai_notification_pane_ParamLimits

0xb556,	// (0x000213c2) cell_ai_notification_pane

0x2173,	// (0x00017fdf) cell_ai_notification_pane_g1

0x217b,	// (0x00017fe7) cell_ai_notification_pane_t1

0xb563,	// (0x000213cf) tb_ext_find_button_pane

0xb56b,	// (0x000213d7) tb_ext_find_pane_g1

0xb573,	// (0x000213df) tb_ext_find_pane_t1

0xcebf,	// (0x00022d2b) tb_ext_find_button_pane_g1

0x21a7,	// (0x00018013) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00025bf7) tb_ext_find_button_pane_g

0xb382,	// (0x000211ee) main_idle_act4_pane_t1_ParamLimits

0xb398,	// (0x00021204) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x00025bb5) main_idle_act4_pane_t_ParamLimits

0xb3cc,	// (0x00021238) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb3e3,	// (0x0002124f) sat_plugin_idle_act4_pane_ParamLimits

0xb3e3,	// (0x0002124f) sat_plugin_idle_act4_pane

0xb581,	// (0x000213ed) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb581,	// (0x000213ed) sat_plugin_idle_act4_pane_t1

0xb599,	// (0x00021405) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb599,	// (0x00021405) sat_plugin_idle_act4_pane_t2

0xb5b1,	// (0x0002141d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb5b1,	// (0x0002141d) sat_plugin_idle_act4_pane_t3

0xb5c9,	// (0x00021435) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb5c9,	// (0x00021435) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00025bfc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00025bfc) sat_plugin_idle_act4_pane_t

0x5e5d,	// (0x0001bcc9) popup_battery_window_ParamLimits

0x5e5d,	// (0x0001bcc9) popup_battery_window

0xc484,	// (0x000222f0) bg_popup_sub_pane_cp25_ParamLimits

0xc484,	// (0x000222f0) bg_popup_sub_pane_cp25

0x21fc,	// (0x00018068) popup_battery_window_g1_ParamLimits

0x21fc,	// (0x00018068) popup_battery_window_g1

0x2208,	// (0x00018074) popup_battery_window_t1_ParamLimits

0x2208,	// (0x00018074) popup_battery_window_t1

0x221a,	// (0x00018086) popup_battery_window_t2_ParamLimits

0x221a,	// (0x00018086) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00025c05) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00025c05) popup_battery_window_t

0x9588,	// (0x0001f3f4) midp_canvas_pane_ParamLimits

0x95e5,	// (0x0001f451) midp_keypad_pane_ParamLimits

0x95e5,	// (0x0001f451) midp_keypad_pane

0xd630,	// (0x0002349c) main_midp_pane_ParamLimits

0xf385,	// (0x000251f1) signal_pane_g2_cp_ParamLimits

0xb5e1,	// (0x0002144d) aid_size_cell_midp_keypad_ParamLimits

0xb5e1,	// (0x0002144d) aid_size_cell_midp_keypad

0xb5ff,	// (0x0002146b) midp_keyp_game_grid_pane_ParamLimits

0xb5ff,	// (0x0002146b) midp_keyp_game_grid_pane

0xb626,	// (0x00021492) midp_keyp_rocker_pane_ParamLimits

0xb626,	// (0x00021492) midp_keyp_rocker_pane

0xb67f,	// (0x000214eb) midp_keyp_sk_left_pane_ParamLimits

0xb67f,	// (0x000214eb) midp_keyp_sk_left_pane

0xb6d3,	// (0x0002153f) midp_keyp_sk_right_pane_ParamLimits

0xb6d3,	// (0x0002153f) midp_keyp_sk_right_pane

0xc2e1,	// (0x0002214d) bg_button_pane_cp03

0xb727,	// (0x00021593) midp_keyp_sk_left_pane_g1

0xc2e1,	// (0x0002214d) bg_button_pane_cp04

0xb727,	// (0x00021593) midp_keyp_sk_right_pane_g1

0x01a3,	// (0x0001600f) midp_keyp_rocker_pane_g1

0xb730,	// (0x0002159c) keyp_game_cell_pane_ParamLimits

0xb730,	// (0x0002159c) keyp_game_cell_pane

0xc2e1,	// (0x0002214d) bg_button_pane_cp02

0xb754,	// (0x000215c0) keyp_game_cell_pane_g1

0x8f54,	// (0x0001edc0) popup_fep_vkb2_window_ParamLimits

0x8f54,	// (0x0001edc0) popup_fep_vkb2_window

0xb75d,	// (0x000215c9) aid_size_cell_vkb2_ParamLimits

0xb75d,	// (0x000215c9) aid_size_cell_vkb2

0xb793,	// (0x000215ff) popup_fep_vkb2_window_g1_ParamLimits

0xb793,	// (0x000215ff) popup_fep_vkb2_window_g1

0xb7da,	// (0x00021646) vkb2_area_bottom_pane_ParamLimits

0xb7da,	// (0x00021646) vkb2_area_bottom_pane

0xb82e,	// (0x0002169a) vkb2_area_keypad_pane_ParamLimits

0xb82e,	// (0x0002169a) vkb2_area_keypad_pane

0xb876,	// (0x000216e2) vkb2_area_top_pane_ParamLimits

0xb876,	// (0x000216e2) vkb2_area_top_pane

0xb8fc,	// (0x00021768) vkb2_top_entry_pane_ParamLimits

0xb8fc,	// (0x00021768) vkb2_top_entry_pane

0xb929,	// (0x00021795) vkb2_top_grid_left_pane_ParamLimits

0xb929,	// (0x00021795) vkb2_top_grid_left_pane

0xb949,	// (0x000217b5) vkb2_top_grid_right_pane_ParamLimits

0xb949,	// (0x000217b5) vkb2_top_grid_right_pane

0x713c,	// (0x0001cfa8) vkb2_cell_keypad_pane_ParamLimits

0x713c,	// (0x0001cfa8) vkb2_cell_keypad_pane

0xb98f,	// (0x000217fb) vkb2_area_bottom_grid_pane_ParamLimits

0xb98f,	// (0x000217fb) vkb2_area_bottom_grid_pane

0xb9b9,	// (0x00021825) vkb2_area_bottom_pane_g1_ParamLimits

0xb9b9,	// (0x00021825) vkb2_area_bottom_pane_g1

0xb9df,	// (0x0002184b) vkb2_area_bottom_pane_g2_ParamLimits

0xb9df,	// (0x0002184b) vkb2_area_bottom_pane_g2

0xba10,	// (0x0002187c) vkb2_area_bottom_pane_g3_ParamLimits

0xba10,	// (0x0002187c) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00025c0a) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00025c0a) vkb2_area_bottom_pane_g

0x72e6,	// (0x0001d152) vkb2_top_cell_left_pane_ParamLimits

0x72e6,	// (0x0001d152) vkb2_top_cell_left_pane

0xba7a,	// (0x000218e6) vkb2_top_entry_pane_g1_ParamLimits

0xba7a,	// (0x000218e6) vkb2_top_entry_pane_g1

0xba88,	// (0x000218f4) vkb2_top_entry_pane_t1_ParamLimits

0xba88,	// (0x000218f4) vkb2_top_entry_pane_t1

0x3653,	// (0x000194bf) vkb2_top_entry_pane_t2_ParamLimits

0x3653,	// (0x000194bf) vkb2_top_entry_pane_t2

0x3685,	// (0x000194f1) vkb2_top_entry_pane_t3_ParamLimits

0x3685,	// (0x000194f1) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x00025c11) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x00025c11) vkb2_top_entry_pane_t

0xbac1,	// (0x0002192d) vkb2_top_grid_right_pane_g1_ParamLimits

0xbac1,	// (0x0002192d) vkb2_top_grid_right_pane_g1

0x7389,	// (0x0001d1f5) vkb2_top_grid_right_pane_g2_ParamLimits

0x7389,	// (0x0001d1f5) vkb2_top_grid_right_pane_g2

0x73a1,	// (0x0001d20d) vkb2_top_grid_right_pane_g3_ParamLimits

0x73a1,	// (0x0001d20d) vkb2_top_grid_right_pane_g3

0xbad7,	// (0x00021943) vkb2_top_grid_right_pane_g4_ParamLimits

0xbad7,	// (0x00021943) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00025c18) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00025c18) vkb2_top_grid_right_pane_g

0x73cf,	// (0x0001d23b) vkb2_top_cell_left_pane_g1

0x73e6,	// (0x0001d252) vkb2_cell_keypad_pane_g1_ParamLimits

0x73e6,	// (0x0001d252) vkb2_cell_keypad_pane_g1

0x369b,	// (0x00019507) vkb2_cell_keypad_pane_t1_ParamLimits

0x369b,	// (0x00019507) vkb2_cell_keypad_pane_t1

0x73f4,	// (0x0001d260) vkb2_cell_bottom_grid_pane_ParamLimits

0x73f4,	// (0x0001d260) vkb2_cell_bottom_grid_pane

0x742d,	// (0x0001d299) vkb2_cell_bottom_grid_pane_g1

0xb414,	// (0x00021280) aid_call2_pane_cp02

0xb41c,	// (0x00021288) aid_call_pane_cp02

0xb424,	// (0x00021290) clock_digital_number_pane_cp10

0xb42c,	// (0x00021298) clock_digital_number_pane_cp11

0xb434,	// (0x000212a0) clock_digital_number_pane_cp12

0xb43c,	// (0x000212a8) clock_digital_number_pane_cp13

0xb444,	// (0x000212b0) clock_digital_separator_pane_cp10

0xcebf,	// (0x00022d2b) popup_clock_digital_analogue_window_cp2_g1

0xcebf,	// (0x00022d2b) popup_clock_digital_analogue_window_cp2_g2

0xb44c,	// (0x000212b8) popup_clock_digital_analogue_window_cp2_g3

0xcebf,	// (0x00022d2b) popup_clock_digital_analogue_window_cp2_g4

0xb44c,	// (0x000212b8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x00025bcd) popup_clock_digital_analogue_window_cp2_g

0xb454,	// (0x000212c0) popup_clock_digital_analogue_window_cp2_t1

0xb462,	// (0x000212ce) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00025bd8) popup_clock_digital_analogue_window_cp2_t

0x01a3,	// (0x0001600f) clock_digital_number_pane_cp10_g1

0x01a3,	// (0x0001600f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5b,	// (0x000259c7) clock_digital_number_pane_cp10_g

0x01a3,	// (0x0001600f) clock_digital_separator_pane_cp10_g1

0x01a3,	// (0x0001600f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5b,	// (0x000259c7) clock_digital_separator_pane_cp10_g

0x1e4c,	// (0x00017cb8) uniindi_top_pane_g3

0x1e5d,	// (0x00017cc9) uniindi_top_pane_g4

0x71c7,	// (0x0001d033) vkb2_row_keypad_pane_ParamLimits

0x71c7,	// (0x0001d033) vkb2_row_keypad_pane

0x744d,	// (0x0001d2b9) vkb2_cell_t_keypad_pane_ParamLimits

0x744d,	// (0x0001d2b9) vkb2_cell_t_keypad_pane

0x745d,	// (0x0001d2c9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x745d,	// (0x0001d2c9) vkb2_cell_t_keypad_pane_cp08

0x7470,	// (0x0001d2dc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7470,	// (0x0001d2dc) vkb2_cell_t_keypad_pane_cp09

0x7484,	// (0x0001d2f0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7484,	// (0x0001d2f0) vkb2_cell_t_keypad_pane_cp01

0x7495,	// (0x0001d301) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7495,	// (0x0001d301) vkb2_cell_t_keypad_pane_cp02

0x74a6,	// (0x0001d312) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74a6,	// (0x0001d312) vkb2_cell_t_keypad_pane_cp03

0x74b7,	// (0x0001d323) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74b7,	// (0x0001d323) vkb2_cell_t_keypad_pane_cp04

0x74c8,	// (0x0001d334) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74c8,	// (0x0001d334) vkb2_cell_t_keypad_pane_cp05

0x74d9,	// (0x0001d345) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74d9,	// (0x0001d345) vkb2_cell_t_keypad_pane_cp06

0x74ea,	// (0x0001d356) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74ea,	// (0x0001d356) vkb2_cell_t_keypad_pane_cp07

0x74fb,	// (0x0001d367) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x74fb,	// (0x0001d367) vkb2_cell_t_keypad_pane_cp10

0x044a,	// (0x000162b6) vkb2_cell_t_keypad_pane_g1

0x36b2,	// (0x0001951e) vkb2_cell_t_keypad_pane_t1

0xc2e1,	// (0x0002214d) popup_grid_graphic2_window

0xbaed,	// (0x00021959) aid_size_cell_graphic2_ParamLimits

0xbaed,	// (0x00021959) aid_size_cell_graphic2

0xde9e,	// (0x00023d0a) bg_popup_window_pane_cp21_ParamLimits

0xde9e,	// (0x00023d0a) bg_popup_window_pane_cp21

0xbb1f,	// (0x0002198b) graphic2_pages_pane_ParamLimits

0xbb1f,	// (0x0002198b) graphic2_pages_pane

0xbb75,	// (0x000219e1) grid_graphic2_control_pane_ParamLimits

0xbb75,	// (0x000219e1) grid_graphic2_control_pane

0xbba9,	// (0x00021a15) grid_graphic2_pane_ParamLimits

0xbba9,	// (0x00021a15) grid_graphic2_pane

0xbc1c,	// (0x00021a88) cell_graphic2_pane

0xc2e1,	// (0x0002214d) main_comp_mode_pane

0x164c,	// (0x000174b8) list_ai3_gene_pane_ParamLimits

0xb0ea,	// (0x00020f56) bg_popup_window_pane_cp19_ParamLimits

0x1a9e,	// (0x0001790a) bg_touch_area_indi_pane_ParamLimits

0x1a9e,	// (0x0001790a) bg_touch_area_indi_pane

0x1ab4,	// (0x00017920) bg_touch_area_indi_pane_cp01_ParamLimits

0x1ab4,	// (0x00017920) bg_touch_area_indi_pane_cp01

0x1aca,	// (0x00017936) bg_touch_area_indi_pane_cp02_ParamLimits

0x1aca,	// (0x00017936) bg_touch_area_indi_pane_cp02

0x1ae2,	// (0x0001794e) bg_touch_area_indi_pane_cp03_ParamLimits

0x1ae2,	// (0x0001794e) bg_touch_area_indi_pane_cp03

0x1afc,	// (0x00017968) popup_slider_window_g1_ParamLimits

0x1b18,	// (0x00017984) popup_slider_window_g2_ParamLimits

0x1b34,	// (0x000179a0) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x00025b62) popup_slider_window_g_ParamLimits

0x1b90,	// (0x000179fc) popup_slider_window_t1_ParamLimits

0x1c04,	// (0x00017a70) small_volume_slider_vertical_pane_ParamLimits

0xbc1c,	// (0x00021a88) cell_graphic2_pane_ParamLimits

0xbc77,	// (0x00021ae3) bg_button_pane_cp10_ParamLimits

0xbc77,	// (0x00021ae3) bg_button_pane_cp10

0xbc8a,	// (0x00021af6) bg_button_pane_cp11_ParamLimits

0xbc8a,	// (0x00021af6) bg_button_pane_cp11

0xbc9d,	// (0x00021b09) graphic2_pages_pane_g1_ParamLimits

0xbc9d,	// (0x00021b09) graphic2_pages_pane_g1

0xbcb8,	// (0x00021b24) graphic2_pages_pane_g2_ParamLimits

0xbcb8,	// (0x00021b24) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00025c26) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00025c26) graphic2_pages_pane_g

0xbcd0,	// (0x00021b3c) graphic2_pages_pane_t1_ParamLimits

0xbcd0,	// (0x00021b3c) graphic2_pages_pane_t1

0xbce8,	// (0x00021b54) cell_graphic2_control_pane_ParamLimits

0xbce8,	// (0x00021b54) cell_graphic2_control_pane

0xbd02,	// (0x00021b6e) cell_graphic2_pane_g1_ParamLimits

0xbd02,	// (0x00021b6e) cell_graphic2_pane_g1

0x36c4,	// (0x00019530) cell_graphic2_pane_g2_ParamLimits

0x36c4,	// (0x00019530) cell_graphic2_pane_g2

0xbd0f,	// (0x00021b7b) cell_graphic2_pane_g3_ParamLimits

0xbd0f,	// (0x00021b7b) cell_graphic2_pane_g3

0x36d1,	// (0x0001953d) cell_graphic2_pane_g4_ParamLimits

0x36d1,	// (0x0001953d) cell_graphic2_pane_g4

0xbd1c,	// (0x00021b88) cell_graphic2_pane_g5_ParamLimits

0xbd1c,	// (0x00021b88) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00025c2b) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00025c2b) cell_graphic2_pane_g

0xbd3c,	// (0x00021ba8) cell_graphic2_pane_t1_ParamLimits

0xbd3c,	// (0x00021ba8) cell_graphic2_pane_t1

0xe4d2,	// (0x0002433e) grid_highlight_pane_cp11_ParamLimits

0xe4d2,	// (0x0002433e) grid_highlight_pane_cp11

0xc998,	// (0x00022804) bg_button_pane_cp05

0xbd53,	// (0x00021bbf) cell_graphic2_control_pane_g1

0x01a3,	// (0x0001600f) bg_touch_area_indi_pane_g1

0x36de,	// (0x0001954a) aid_cmod_rocker_key_size

0x36e8,	// (0x00019554) aid_cmode_itu_key_size

0x36f2,	// (0x0001955e) main_cmode_video_pane

0x36fc,	// (0x00019568) main_comp_mode_itu_pane

0x3708,	// (0x00019574) main_comp_mode_rocker_pane

0x3714,	// (0x00019580) cell_cmode_rocker_pane_ParamLimits

0x3714,	// (0x00019580) cell_cmode_rocker_pane

0x3726,	// (0x00019592) cell_cmode_itu_pane_ParamLimits

0x3726,	// (0x00019592) cell_cmode_itu_pane

0xc998,	// (0x00022804) bg_button_pane_cp06_ParamLimits

0xc998,	// (0x00022804) bg_button_pane_cp06

0x044a,	// (0x000162b6) cell_cmode_rocker_pane_g1_ParamLimits

0x044a,	// (0x000162b6) cell_cmode_rocker_pane_g1

0x1ca8,	// (0x00017b14) cell_cmode_rocker_pane_g2_ParamLimits

0x1ca8,	// (0x00017b14) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00025c36) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00025c36) cell_cmode_rocker_pane_g

0xc2e1,	// (0x0002214d) bg_button_pane_cp07

0x373b,	// (0x000195a7) cell_cmode_itu_pane_g1

0x3744,	// (0x000195b0) cell_cmode_itu_pane_t1

0x3752,	// (0x000195be) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00025c3b) cell_cmode_itu_pane_t

0x1ece,	// (0x00017d3a) aid_touch_ctrl_left

0x1ed6,	// (0x00017d42) aid_touch_ctrl_right

0xc2e1,	// (0x0002214d) compa_mode_pane

0xbd60,	// (0x00021bcc) aid_cmod_rocker_key_size_cp

0xbd6a,	// (0x00021bd6) aid_cmode_itu_key_size_cp

0x3760,	// (0x000195cc) compa_mode_pane_g1

0x3768,	// (0x000195d4) compa_mode_pane_g2

0x3770,	// (0x000195dc) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00025c40) compa_mode_pane_g

0xbd74,	// (0x00021be0) main_comp_mode_itu_pane_cp

0xbd7c,	// (0x00021be8) main_comp_mode_rocker_pane_cp

0xbd84,	// (0x00021bf0) cell_cmode_itu_pane_cp_ParamLimits

0xbd84,	// (0x00021bf0) cell_cmode_itu_pane_cp

0xbd99,	// (0x00021c05) cell_cmode_rocker_pane_cp_ParamLimits

0xbd99,	// (0x00021c05) cell_cmode_rocker_pane_cp

0xc998,	// (0x00022804) bg_button_pane_cp06_cp_ParamLimits

0xc998,	// (0x00022804) bg_button_pane_cp06_cp

0x044a,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x044a,	// (0x000162b6) cell_cmode_rocker_pane_g1_cp

0x01a3,	// (0x0001600f) cell_cmode_rocker_pane_g2_cp

0xc2e1,	// (0x0002214d) bg_button_pane_cp07_cp

0xbdab,	// (0x00021c17) cell_cmode_itu_pane_g1_cp

0xbdb4,	// (0x00021c20) cell_cmode_itu_pane_t1_cp

0xbdb4,	// (0x00021c20) cell_cmode_itu_pane_t2_cp

0xa7e1,	// (0x0002064d) settings_code_pane_cp2

0xc351,	// (0x000221bd) bg_popup_window_pane_cp3_ParamLimits

0xc652,	// (0x000224be) heading_pane_cp3_ParamLimits

0xc65e,	// (0x000224ca) listscroll_popup_graphic_pane_ParamLimits

0x6afe,	// (0x0001c96a) fep_hwr_aid_pane_ParamLimits

0x6ead,	// (0x0001cd19) aid_touch_sctrl_top_ParamLimits

0x6eba,	// (0x0001cd26) sctrl_sk_top_pane_g1_ParamLimits

0x044a,	// (0x000162b6) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x00025b7b) sctrl_sk_top_pane_g_ParamLimits

0x6ec7,	// (0x0001cd33) sctrl_sk_top_pane_t1_ParamLimits

0x6ead,	// (0x0001cd19) aid_touch_sctrl_bottom_ParamLimits

0x6ec7,	// (0x0001cd33) sctrl_sk_bottom_pane_t1_ParamLimits

0x1e18,	// (0x00017c84) aid_area_touch_clock

0xb8be,	// (0x0002172a) aid_vkb2_area_top_pane_cell_ParamLimits

0xb8be,	// (0x0002172a) aid_vkb2_area_top_pane_cell

0xb969,	// (0x000217d5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb969,	// (0x000217d5) aid_vkb2_area_bottom_pane_cell

0x364b,	// (0x000194b7) popup_char_count_window

0x3778,	// (0x000195e4) popup_char_count_window_g1

0x3781,	// (0x000195ed) popup_char_count_window_g2

0x378a,	// (0x000195f6) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00025c47) popup_char_count_window_g

0x3793,	// (0x000195ff) popup_char_count_window_t1

0x6f6c,	// (0x0001cdd8) popup_fep_char_preview_window_ParamLimits

0x6f6c,	// (0x0001cdd8) popup_fep_char_preview_window

0xb8de,	// (0x0002174a) vkb2_top_candi_pane_ParamLimits

0xb8de,	// (0x0002174a) vkb2_top_candi_pane

0xbdc2,	// (0x00021c2e) cell_vkb2_top_candi_pane_ParamLimits

0xbdc2,	// (0x00021c2e) cell_vkb2_top_candi_pane

0xde9e,	// (0x00023d0a) bg_popup_fep_char_preview_window_ParamLimits

0xde9e,	// (0x00023d0a) bg_popup_fep_char_preview_window

0x7809,	// (0x0001d675) popup_fep_char_preview_window_t1_ParamLimits

0x7809,	// (0x0001d675) popup_fep_char_preview_window_t1

0x37b1,	// (0x0001961d) bg_popup_fep_char_preview_window_g1

0x37a9,	// (0x00019615) bg_popup_fep_char_preview_window_g2

0x37a1,	// (0x0001960d) bg_popup_fep_char_preview_window_g3

0x37d1,	// (0x0001963d) bg_popup_fep_char_preview_window_g4

0x37c9,	// (0x00019635) bg_popup_fep_char_preview_window_g5

0x7843,	// (0x0001d6af) bg_popup_fep_char_preview_window_g6

0x37c1,	// (0x0001962d) bg_popup_fep_char_preview_window_g7

0x37b9,	// (0x00019625) bg_popup_fep_char_preview_window_g8

0x37d9,	// (0x00019645) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00025c4e) bg_popup_fep_char_preview_window_g

0x044a,	// (0x000162b6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x044a,	// (0x000162b6) cell_vkb2_top_candi_pane_g1

0x09fb,	// (0x00016867) cell_vkb2_top_candi_pane_g2_ParamLimits

0x09fb,	// (0x00016867) cell_vkb2_top_candi_pane_g2

0x0a1c,	// (0x00016888) cell_vkb2_top_candi_pane_g3_ParamLimits

0x0a1c,	// (0x00016888) cell_vkb2_top_candi_pane_g3

0x784b,	// (0x0001d6b7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x784b,	// (0x0001d6b7) cell_vkb2_top_candi_pane_g4

0x361c,	// (0x00019488) cell_vkb2_top_candi_pane_g5_ParamLimits

0x361c,	// (0x00019488) cell_vkb2_top_candi_pane_g5

0x1ca8,	// (0x00017b14) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1ca8,	// (0x00017b14) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00025c61) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00025c61) cell_vkb2_top_candi_pane_g

0x786c,	// (0x0001d6d8) cell_vkb2_top_candi_pane_t1

0x691b,	// (0x0001c787) aid_size_touch_slider_mark_ParamLimits

0x691b,	// (0x0001c787) aid_size_touch_slider_mark

0xbb5b,	// (0x000219c7) grid_graphic2_catg_pane_ParamLimits

0xbb5b,	// (0x000219c7) grid_graphic2_catg_pane

0xbbef,	// (0x00021a5b) popup_grid_graphic2_window_t1_ParamLimits

0xbbef,	// (0x00021a5b) popup_grid_graphic2_window_t1

0xbc05,	// (0x00021a71) popup_grid_graphic2_window_t2_ParamLimits

0xbc05,	// (0x00021a71) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x00025c21) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x00025c21) popup_grid_graphic2_window_t

0xc998,	// (0x00022804) bg_button_pane_cp05_ParamLimits

0xbd53,	// (0x00021bbf) cell_graphic2_control_pane_g1_ParamLimits

0xbe28,	// (0x00021c94) cell_graphic2_catg_pane_ParamLimits

0xbe28,	// (0x00021c94) cell_graphic2_catg_pane

0xc2e1,	// (0x0002214d) bg_button_pane_cp12

0xbe3a,	// (0x00021ca6) cell_graphic2_catg_pane_g1

0x1de4,	// (0x00017c50) cell_tb_ext_pane_t1_ParamLimits

0x7346,	// (0x0001d1b2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7346,	// (0x0001d1b2) vkb2_top_cell_right_narrow_pane

0x735e,	// (0x0001d1ca) vkb2_top_cell_right_wide_pane_ParamLimits

0x735e,	// (0x0001d1ca) vkb2_top_cell_right_wide_pane

0x0237,	// (0x000160a3) bg_vkb2_func_pane_ParamLimits

0x0237,	// (0x000160a3) bg_vkb2_func_pane

0x73cf,	// (0x0001d23b) vkb2_top_cell_left_pane_g1_ParamLimits

0x0237,	// (0x000160a3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0237,	// (0x000160a3) bg_vkb2_fuc_pane_cp03

0x742d,	// (0x0001d299) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd92a,	// (0x00023796) bg_vkb2_func_pane_g1

0xd932,	// (0x0002379e) bg_vkb2_func_pane_g2

0xd942,	// (0x000237ae) bg_vkb2_func_pane_g3

0xd93a,	// (0x000237a6) bg_vkb2_func_pane_g4

0xd94a,	// (0x000237b6) bg_vkb2_func_pane_g5

0xd952,	// (0x000237be) bg_vkb2_func_pane_g6

0xd95a,	// (0x000237c6) bg_vkb2_func_pane_g7

0xd962,	// (0x000237ce) bg_vkb2_func_pane_g8

0xd922,	// (0x0002378e) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00025c6e) bg_vkb2_func_pane_g

0x0237,	// (0x000160a3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0237,	// (0x000160a3) bg_vkb2_fuc_pane_cp01

0x73cf,	// (0x0001d23b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73cf,	// (0x0001d23b) vkb2_top_cell_right_wide_pane_g1

0x0237,	// (0x000160a3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0237,	// (0x000160a3) bg_vkb2_fuc_pane_cp02

0x742d,	// (0x0001d299) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x742d,	// (0x0001d299) vkb2_top_cell_right_narrow_pane_g1

0xb024,	// (0x00020e90) aid_touch_area_decrease_ParamLimits

0xb024,	// (0x00020e90) aid_touch_area_decrease

0xb05e,	// (0x00020eca) aid_touch_area_increase_ParamLimits

0xb05e,	// (0x00020eca) aid_touch_area_increase

0xb086,	// (0x00020ef2) aid_touch_area_mute_ParamLimits

0xb086,	// (0x00020ef2) aid_touch_area_mute

0xb0b6,	// (0x00020f22) aid_touch_area_slider_ParamLimits

0xb0b6,	// (0x00020f22) aid_touch_area_slider

0xb0f6,	// (0x00020f62) popup_slider_window_g4_ParamLimits

0xb0f6,	// (0x00020f62) popup_slider_window_g4

0xb11e,	// (0x00020f8a) popup_slider_window_g5_ParamLimits

0xb11e,	// (0x00020f8a) popup_slider_window_g5

0xb152,	// (0x00020fbe) popup_slider_window_g6_ParamLimits

0xb152,	// (0x00020fbe) popup_slider_window_g6

0x1bbe,	// (0x00017a2a) popup_slider_window_t2_ParamLimits

0x1bbe,	// (0x00017a2a) popup_slider_window_t2

0x0001,

0xfd03,	// (0x00025b6f) popup_slider_window_t_ParamLimits

0xfd03,	// (0x00025b6f) popup_slider_window_t

0xb16e,	// (0x00020fda) slider_pane_ParamLimits

0xb16e,	// (0x00020fda) slider_pane

0x37e1,	// (0x0001964d) slider_pane_g1_ParamLimits

0x37e1,	// (0x0001964d) slider_pane_g1

0x37f5,	// (0x00019661) slider_pane_g2_ParamLimits

0x37f5,	// (0x00019661) slider_pane_g2

0x380b,	// (0x00019677) slider_pane_g3_ParamLimits

0x380b,	// (0x00019677) slider_pane_g3

0x0003,

0xfe15,	// (0x00025c81) slider_pane_g_ParamLimits

0xfe15,	// (0x00025c81) slider_pane_g

0x9dae,	// (0x0001fc1a) popup_tb_float_extension_window_ParamLimits

0x9dae,	// (0x0001fc1a) popup_tb_float_extension_window

0x3837,	// (0x000196a3) aid_size_cell_tb_float_ext

0xc2e1,	// (0x0002214d) bg_popup_sub_window_cp28

0x3843,	// (0x000196af) grid_tb_float_ext_pane

0x384d,	// (0x000196b9) cell_tb_float_ext_pane_ParamLimits

0x384d,	// (0x000196b9) cell_tb_float_ext_pane

0x3867,	// (0x000196d3) cell_tb_float_ext_pane_g1

0x3870,	// (0x000196dc) grid_highlight_pane_cp12

0xab89,	// (0x000209f5) cell_last_hwr_side_pane_ParamLimits

0xab89,	// (0x000209f5) cell_last_hwr_side_pane

0x01a3,	// (0x0001600f) cell_last_hwr_side_pane_g1

0x3879,	// (0x000196e5) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00025c8a) cell_last_hwr_side_pane_g

0xba45,	// (0x000218b1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xba45,	// (0x000218b1) vkb2_area_bottom_space_btn_pane

0x044a,	// (0x000162b6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x36b2,	// (0x0001951e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x786c,	// (0x0001d6d8) cell_vkb2_top_candi_pane_t1_ParamLimits

0x78a6,	// (0x0001d712) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x78a6,	// (0x0001d712) vkb2_area_bottom_space_btn_pane_g1

0x78e0,	// (0x0001d74c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x78e0,	// (0x0001d74c) vkb2_area_bottom_space_btn_pane_g2

0x7916,	// (0x0001d782) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7916,	// (0x0001d782) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00025c8f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00025c8f) vkb2_area_bottom_space_btn_pane_g

0x6ba5,	// (0x0001ca11) cel_fep_hwr_func_pane_ParamLimits

0x6ba5,	// (0x0001ca11) cel_fep_hwr_func_pane

0xab5e,	// (0x000209ca) cell_hwr_side_button_pane_ParamLimits

0xab5e,	// (0x000209ca) cell_hwr_side_button_pane

0x1e18,	// (0x00017c84) aid_area_touch_clock_ParamLimits

0xc484,	// (0x000222f0) bg_uniindi_top_pane_ParamLimits

0x1e2a,	// (0x00017c96) uniindi_top_pane_g1_ParamLimits

0x1e40,	// (0x00017cac) uniindi_top_pane_g2_ParamLimits

0x1e4c,	// (0x00017cb8) uniindi_top_pane_g3_ParamLimits

0x1e5d,	// (0x00017cc9) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x00025ba7) uniindi_top_pane_g_ParamLimits

0x1e6a,	// (0x00017cd6) uniindi_top_pane_t1_ParamLimits

0xc484,	// (0x000222f0) bg_vkb2_func_pane_cp01_ParamLimits

0xc484,	// (0x000222f0) bg_vkb2_func_pane_cp01

0x3882,	// (0x000196ee) cel_fep_hwr_func_pane_g1_ParamLimits

0x3882,	// (0x000196ee) cel_fep_hwr_func_pane_g1

0xc484,	// (0x000222f0) bg_vkb2_func_pane_cp02_ParamLimits

0xc484,	// (0x000222f0) bg_vkb2_func_pane_cp02

0x3882,	// (0x000196ee) cell_hwr_side_button_pane_g1_ParamLimits

0x3882,	// (0x000196ee) cell_hwr_side_button_pane_g1

0xd83a,	// (0x000236a6) status_pane_g4_ParamLimits

0xd83a,	// (0x000236a6) status_pane_g4

0xd852,	// (0x000236be) status_pane_t1

0xf4f8,	// (0x00025364) form2_midp_gauge_slider_cont_pane

0xf500,	// (0x0002536c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xaa9d,	// (0x00020909) form2_midp_gauge_slider_pane_t2_ParamLimits

0xaaaf,	// (0x0002091b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0e,	// (0x0002597a) form2_midp_gauge_slider_pane_t_ParamLimits

0xf512,	// (0x0002537e) form2_midp_slider_pane_ParamLimits

0x6f2c,	// (0x0001cd98) aid_size_cell_func_vkb2_ParamLimits

0x6f2c,	// (0x0001cd98) aid_size_cell_func_vkb2

0x3823,	// (0x0001968f) slider_pane_g4_ParamLimits

0x3823,	// (0x0001968f) slider_pane_g4

0xbe43,	// (0x00021caf) form2_midp_gauge_slider_pane_t2_cp01

0xbe51,	// (0x00021cbd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbe51,	// (0x00021cbd) form2_midp_gauge_slider_pane_t3_cp01

0x798b,	// (0x0001d7f7) form2_midp_slider_pane_cp01

0xc2e1,	// (0x0002214d) navi_smil_pane

0x38b2,	// (0x0001971e) navi_smil_pane_g1

0x38ba,	// (0x00019726) navi_smil_pane_t1

0x3890,	// (0x000196fc) form2_midp_slider_pane_g1

0x3899,	// (0x00019705) form2_midp_slider_pane_g2

0x38a1,	// (0x0001970d) form2_midp_slider_pane_g3

0x3890,	// (0x000196fc) form2_midp_slider_pane_g4

0xbe6e,	// (0x00021cda) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00025c98) form2_midp_slider_pane_g

0x7950,	// (0x0001d7bc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7950,	// (0x0001d7bc) vkb2_area_bottom_space_btn_pane_g4

0x9f8a,	// (0x0001fdf6) lc0_navi_pane_ParamLimits

0x9f8a,	// (0x0001fdf6) lc0_navi_pane

0x9ff4,	// (0x0001fe60) lc0_stat_indi_pane_ParamLimits

0x9ff4,	// (0x0001fe60) lc0_stat_indi_pane

0xa009,	// (0x0001fe75) ls0_title_pane_ParamLimits

0xa009,	// (0x0001fe75) ls0_title_pane

0xc998,	// (0x00022804) bg_popup_sub_pane_cp14_ParamLimits

0x1dff,	// (0x00017c6b) list_uniindi_pane_ParamLimits

0x1e0b,	// (0x00017c77) uniindi_top_pane_ParamLimits

0x1ea6,	// (0x00017d12) list_single_uniindi_pane_g1_ParamLimits

0x1eb9,	// (0x00017d25) list_single_uniindi_pane_t1_ParamLimits

0xbe77,	// (0x00021ce3) lc0_stat_clock_pane_ParamLimits

0xbe77,	// (0x00021ce3) lc0_stat_clock_pane

0xbe84,	// (0x00021cf0) lc0_stat_indi_pane_g1_ParamLimits

0xbe84,	// (0x00021cf0) lc0_stat_indi_pane_g1

0xbe91,	// (0x00021cfd) lc0_stat_indi_pane_g2_ParamLimits

0xbe91,	// (0x00021cfd) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00025ca3) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00025ca3) lc0_stat_indi_pane_g

0xbe9e,	// (0x00021d0a) lc0_uni_indicator_pane_ParamLimits

0xbe9e,	// (0x00021d0a) lc0_uni_indicator_pane

0xbeab,	// (0x00021d17) ls0_title_pane_g1_ParamLimits

0xbeab,	// (0x00021d17) ls0_title_pane_g1

0xbebf,	// (0x00021d2b) ls0_title_pane_t1_ParamLimits

0xbebf,	// (0x00021d2b) ls0_title_pane_t1

0xbeed,	// (0x00021d59) lc0_uni_indicator_pane_g1_ParamLimits

0xbeed,	// (0x00021d59) lc0_uni_indicator_pane_g1

0x38c8,	// (0x00019734) lc0_stat_clock_pane_t1

0xc2e1,	// (0x0002214d) main_ai5_pane

0x38d6,	// (0x00019742) ai5_sk_pane_ParamLimits

0x38d6,	// (0x00019742) ai5_sk_pane

0xbf1c,	// (0x00021d88) cell_ai5_widget_pane_ParamLimits

0xbf1c,	// (0x00021d88) cell_ai5_widget_pane

0x38e3,	// (0x0001974f) aid_size_cell_widget_grid

0x38f5,	// (0x00019761) bg_ai5_widget_pane_ParamLimits

0x38f5,	// (0x00019761) bg_ai5_widget_pane

0xbfa5,	// (0x00021e11) cell_ai5_widget_pane_g2

0xbfb5,	// (0x00021e21) cell_ai5_widget_pane_g3

0xbfc9,	// (0x00021e35) cell_ai5_widget_pane_g4

0xbfd5,	// (0x00021e41) cell_ai5_widget_pane_g5

0xbfe1,	// (0x00021e4d) cell_ai5_widget_pane_g6

0xbfed,	// (0x00021e59) cell_ai5_widget_pane_g7

0xc035,	// (0x00021ea1) cell_ai5_widget_pane_t1_ParamLimits

0xc035,	// (0x00021ea1) cell_ai5_widget_pane_t1

0xc052,	// (0x00021ebe) cell_ai5_widget_pane_t2_ParamLimits

0xc052,	// (0x00021ebe) cell_ai5_widget_pane_t2

0xc06a,	// (0x00021ed6) cell_ai5_widget_pane_t3_ParamLimits

0xc06a,	// (0x00021ed6) cell_ai5_widget_pane_t3

0xc082,	// (0x00021eee) cell_ai5_widget_pane_t4_ParamLimits

0xc082,	// (0x00021eee) cell_ai5_widget_pane_t4

0xc09c,	// (0x00021f08) cell_ai5_widget_pane_t5_ParamLimits

0xc09c,	// (0x00021f08) cell_ai5_widget_pane_t5

0x3901,	// (0x0001976d) cell_ai5_widget_pane_t6_ParamLimits

0x3901,	// (0x0001976d) cell_ai5_widget_pane_t6

0x3913,	// (0x0001977f) cell_ai5_widget_pane_t7_ParamLimits

0x3913,	// (0x0001977f) cell_ai5_widget_pane_t7

0xc0bb,	// (0x00021f27) cell_ai5_widget_pane_t8_ParamLimits

0xc0bb,	// (0x00021f27) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00025cbd) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00025cbd) cell_ai5_widget_pane_t

0xc103,	// (0x00021f6f) grid_ai5_widget_pane

0xc998,	// (0x00022804) highlight_cell_ai5_widget_pane_ParamLimits

0xc998,	// (0x00022804) highlight_cell_ai5_widget_pane

0xc119,	// (0x00021f85) ai5_sk_left_pane

0xc123,	// (0x00021f8f) ai5_sk_middle_pane

0xc12d,	// (0x00021f99) ai5_sk_right_pane

0x392c,	// (0x00019798) bg_ai5_widget_pane_g1_ParamLimits

0x392c,	// (0x00019798) bg_ai5_widget_pane_g1

0x3938,	// (0x000197a4) bg_ai5_widget_pane_g2_ParamLimits

0x3938,	// (0x000197a4) bg_ai5_widget_pane_g2

0x3944,	// (0x000197b0) bg_ai5_widget_pane_g3_ParamLimits

0x3944,	// (0x000197b0) bg_ai5_widget_pane_g3

0x3950,	// (0x000197bc) bg_ai5_widget_pane_g4_ParamLimits

0x3950,	// (0x000197bc) bg_ai5_widget_pane_g4

0x395c,	// (0x000197c8) bg_ai5_widget_pane_g5_ParamLimits

0x395c,	// (0x000197c8) bg_ai5_widget_pane_g5

0x3968,	// (0x000197d4) bg_ai5_widget_pane_g6_ParamLimits

0x3968,	// (0x000197d4) bg_ai5_widget_pane_g6

0x3974,	// (0x000197e0) bg_ai5_widget_pane_g7_ParamLimits

0x3974,	// (0x000197e0) bg_ai5_widget_pane_g7

0x3980,	// (0x000197ec) bg_ai5_widget_pane_g8_ParamLimits

0x3980,	// (0x000197ec) bg_ai5_widget_pane_g8

0x398c,	// (0x000197f8) bg_ai5_widget_pane_g9_ParamLimits

0x398c,	// (0x000197f8) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00025cd2) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00025cd2) bg_ai5_widget_pane_g

0x39b4,	// (0x00019820) cell_shortcut_ai5_widget_pane_ParamLimits

0x39b4,	// (0x00019820) cell_shortcut_ai5_widget_pane

0xc38d,	// (0x000221f9) bg_cell_shortcut_ai5_widget_pane

0x39c6,	// (0x00019832) cell_grid_ai5_widget_pane_g1

0x39cf,	// (0x0001983b) highlight_cell_shortcut_ai5_widget_pane

0xd932,	// (0x0002379e) ai5_sk_left_pane_g1

0x39d7,	// (0x00019843) ai5_sk_left_pane_g2

0x39df,	// (0x0001984b) ai5_sk_left_pane_g3

0x39e7,	// (0x00019853) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00025ce5) ai5_sk_left_pane_g

0x39ef,	// (0x0001985b) ai5_sk_left_pane_t1

0xd92a,	// (0x00023796) ai5_sk_right_pane_g1

0x39fd,	// (0x00019869) ai5_sk_right_pane_g2

0x3a05,	// (0x00019871) ai5_sk_right_pane_g3

0x3a0d,	// (0x00019879) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00025cee) ai5_sk_right_pane_g

0x3a15,	// (0x00019881) ai5_sk_right_pane_t1

0xd92a,	// (0x00023796) ai5_sk_middle_pane_g1

0xd932,	// (0x0002379e) ai5_sk_middle_pane_g2

0xd94a,	// (0x000237b6) ai5_sk_middle_pane_g3

0x3a05,	// (0x00019871) ai5_sk_middle_pane_g4

0x39df,	// (0x0001984b) ai5_sk_middle_pane_g5

0x3a23,	// (0x0001988f) ai5_sk_middle_pane_g6

0xc137,	// (0x00021fa3) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00025cf7) ai5_sk_middle_pane_g

0x9e76,	// (0x0001fce2) aid_touch_area_size_lc0_ParamLimits

0x9e76,	// (0x0001fce2) aid_touch_area_size_lc0

0x6d30,	// (0x0001cb9c) cell_hwr_candidate_pane_t1_ParamLimits

0xd75c,	// (0x000235c8) aid_touch_navi_pane

0xa0fb,	// (0x0001ff67) status_dt_navi_pane_ParamLimits

0xa0fb,	// (0x0001ff67) status_dt_navi_pane

0xa113,	// (0x0001ff7f) status_dt_sta_pane_ParamLimits

0xa113,	// (0x0001ff7f) status_dt_sta_pane

0xc13f,	// (0x00021fab) dt_sta_controll_pane

0xc14c,	// (0x00021fb8) dt_sta_indi_pane

0xc159,	// (0x00021fc5) dt_sta_title_pane

0xc484,	// (0x000222f0) bg_dt_sta_indi_pane_ParamLimits

0xc484,	// (0x000222f0) bg_dt_sta_indi_pane

0xc16b,	// (0x00021fd7) dt_sta_battery_pane

0xc173,	// (0x00021fdf) dt_sta_indi_pane_g1

0x3a2b,	// (0x00019897) dt_sta_indi_pane_g2

0x3a34,	// (0x000198a0) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00025d06) dt_sta_indi_pane_g

0x3a3d,	// (0x000198a9) dt_sta_signal_pane

0xc998,	// (0x00022804) bg_dt_sta_title_pane_ParamLimits

0xc998,	// (0x00022804) bg_dt_sta_title_pane

0xe5a4,	// (0x00024410) dt_sta_title_pane_g1

0xc17c,	// (0x00021fe8) dt_sta_title_pane_t1_ParamLimits

0xc17c,	// (0x00021fe8) dt_sta_title_pane_t1

0xc2e1,	// (0x0002214d) bg_dt_sta_control_pane

0xc191,	// (0x00021ffd) dt_sta_controll_pane_g1

0x3a46,	// (0x000198b2) bg_dt_sta_title_pane_g1

0x3a4f,	// (0x000198bb) bg_dt_sta_title_pane_g2

0x3a58,	// (0x000198c4) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00025d0d) bg_dt_sta_title_pane_g

0x01a3,	// (0x0001600f) bg_dt_sta_indi_pane_g1

0x3a61,	// (0x000198cd) dt_sta_signal_pane_g1

0x3a69,	// (0x000198d5) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00025d14) dt_sta_signal_pane_g

0x3a71,	// (0x000198dd) dt_sta_battery_pane_g1

0x3a7a,	// (0x000198e6) dt_sta_battery_pane_t1

0x01a3,	// (0x0001600f) bg_dt_sta_control_pane_g1

0xcf3d,	// (0x00022da9) fep_china_uni_eep_pane

0xcf45,	// (0x00022db1) fep_china_uni_entry_pane_ParamLimits

0xcf55,	// (0x00022dc1) popup_fep_china_uni_window_g1_ParamLimits

0xcf65,	// (0x00022dd1) popup_fep_china_uni_window_g2_ParamLimits

0xcf65,	// (0x00022dd1) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x000255c9) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x000255c9) popup_fep_china_uni_window_g

0x3a89,	// (0x000198f5) fep_china_uni_eep_pane_g1

0x3a91,	// (0x000198fd) fep_china_uni_eep_pane_t1

0x38a9,	// (0x00019715) aid_touch_area_size_smil_player

0xd80d,	// (0x00023679) lc0_clock_pane

0xd846,	// (0x000236b2) status_pane_g5_ParamLimits

0xd846,	// (0x000236b2) status_pane_g5

0x9942,	// (0x0001f7ae) popup_keymap_window

0xd826,	// (0x00023692) status_icon_pane

0xbfb5,	// (0x00021e21) cell_ai5_widget_pane_g3_ParamLimits

0xbfc9,	// (0x00021e35) cell_ai5_widget_pane_g4_ParamLimits

0xbfd5,	// (0x00021e41) cell_ai5_widget_pane_g5_ParamLimits

0xbff9,	// (0x00021e65) cell_ai5_widget_pane_g8_ParamLimits

0xbff9,	// (0x00021e65) cell_ai5_widget_pane_g8

0xc00d,	// (0x00021e79) cell_ai5_widget_pane_g9_ParamLimits

0xc00d,	// (0x00021e79) cell_ai5_widget_pane_g9

0xc021,	// (0x00021e8d) cell_ai5_widget_pane_g10_ParamLimits

0xc021,	// (0x00021e8d) cell_ai5_widget_pane_g10

0x3aa0,	// (0x0001990c) status_icon_pane_g1

0xc2e1,	// (0x0002214d) bg_popup_sub_pane_cp13

0x3aa8,	// (0x00019914) popup_keymap_window_t1

0x9676,	// (0x0001f4e2) control_pane_g6_ParamLimits

0x9676,	// (0x0001f4e2) control_pane_g6

0x9683,	// (0x0001f4ef) control_pane_g7_ParamLimits

0x9683,	// (0x0001f4ef) control_pane_g7

0x9690,	// (0x0001f4fc) control_pane_g8_ParamLimits

0x9690,	// (0x0001f4fc) control_pane_g8

0xc13f,	// (0x00021fab) dt_sta_controll_pane_ParamLimits

0xc14c,	// (0x00021fb8) dt_sta_indi_pane_ParamLimits

0xc159,	// (0x00021fc5) dt_sta_title_pane_ParamLimits

0xc8da,	// (0x00022746) aid_size_touch_scroll_bar_cale

0x5e71,	// (0x0001bcdd) popup_discreet_window_ParamLimits

0x5e71,	// (0x0001bcdd) popup_discreet_window

0x8f9a,	// (0x0001ee06) popup_sk_window

0xde9e,	// (0x00023d0a) bg_popup_sub_pane_cp28_ParamLimits

0xde9e,	// (0x00023d0a) bg_popup_sub_pane_cp28

0x3ab6,	// (0x00019922) popup_discreet_window_g1_ParamLimits

0x3ab6,	// (0x00019922) popup_discreet_window_g1

0x3ad6,	// (0x00019942) popup_discreet_window_t1_ParamLimits

0x3ad6,	// (0x00019942) popup_discreet_window_t1

0x3af4,	// (0x00019960) popup_discreet_window_t2_ParamLimits

0x3af4,	// (0x00019960) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00025d19) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00025d19) popup_discreet_window_t

0x7cd5,	// (0x0001db41) popup_sk_window_g1

0x7cdf,	// (0x0001db4b) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00025d20) popup_sk_window_g

0x3b54,	// (0x000199c0) popup_sk_window_t1

0x3b46,	// (0x000199b2) popup_sk_window_t1_copy1

0xbfa5,	// (0x00021e11) cell_ai5_widget_pane_g2_ParamLimits

0xc0cd,	// (0x00021f39) cell_ai5_widget_pane_t9_ParamLimits

0xc0cd,	// (0x00021f39) cell_ai5_widget_pane_t9

0xc2e1,	// (0x0002214d) main_fep_fshwr2_pane

0xc19a,	// (0x00022006) aid_fshwr2_btn_pane

0xc1a2,	// (0x0002200e) aid_fshwr2_syb_pane

0xc1aa,	// (0x00022016) aid_fshwr2_txt_pane

0xc1b2,	// (0x0002201e) fshwr2_func_candi_pane

0xc1bc,	// (0x00022028) fshwr2_hwr_syb_pane

0xc1ca,	// (0x00022036) fshwr2_icf_pane

0xc2e1,	// (0x0002214d) fshwr2_icf_bg_pane

0xc1d4,	// (0x00022040) fshwr2_icf_pane_t1_ParamLimits

0xc1d4,	// (0x00022040) fshwr2_icf_pane_t1

0x01a3,	// (0x0001600f) fshwr2_func_candi_pane_g1

0x3b76,	// (0x000199e2) fshwr2_func_candi_row_pane_ParamLimits

0x3b76,	// (0x000199e2) fshwr2_func_candi_row_pane

0xc1ee,	// (0x0002205a) cell_fshwr2_syb_pane_ParamLimits

0xc1ee,	// (0x0002205a) cell_fshwr2_syb_pane

0x044a,	// (0x000162b6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x044a,	// (0x000162b6) fshwr2_hwr_syb_pane_g1

0xc2e1,	// (0x0002214d) bg_popup_call_pane_cp01

0x3b87,	// (0x000199f3) fshwr2_func_candi_cell_pane_ParamLimits

0x3b87,	// (0x000199f3) fshwr2_func_candi_cell_pane

0x3bb8,	// (0x00019a24) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3bb8,	// (0x00019a24) fshwr2_func_candi_cell_bg_pane

0x3bd2,	// (0x00019a3e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x3bd2,	// (0x00019a3e) fshwr2_func_candi_cell_pane_g1

0x3bf2,	// (0x00019a5e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x3bf2,	// (0x00019a5e) fshwr2_func_candi_cell_pane_t1

0xc2e1,	// (0x0002214d) bg_button_pane_cp08

0xd3ce,	// (0x0002323a) cell_fshwr2_syb_bg_pane

0xc208,	// (0x00022074) cell_fshwr2_syb_bg_pane_g1

0x3c05,	// (0x00019a71) cell_fshwr2_syb_bg_pane_t1

0xc998,	// (0x00022804) main_tmo_pane

0xa612,	// (0x0002047e) uni_indicator_pane_g1_ParamLimits

0xa627,	// (0x00020493) uni_indicator_pane_g2_ParamLimits

0xa63c,	// (0x000204a8) uni_indicator_pane_g3_ParamLimits

0xe868,	// (0x000246d4) uni_indicator_pane_g4_ParamLimits

0xe868,	// (0x000246d4) uni_indicator_pane_g4

0xe89a,	// (0x00024706) uni_indicator_pane_g5_ParamLimits

0xe89a,	// (0x00024706) uni_indicator_pane_g5

0xe8ae,	// (0x0002471a) uni_indicator_pane_g6_ParamLimits

0xe8ae,	// (0x0002471a) uni_indicator_pane_g6

0xf94e,	// (0x000257ba) uni_indicator_pane_g_ParamLimits

0xb006,	// (0x00020e72) popup_tmo_note_window_ParamLimits

0xb006,	// (0x00020e72) popup_tmo_note_window

0xc2e1,	// (0x0002214d) fshwr2_bg_pane

0x3be3,	// (0x00019a4f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x3be3,	// (0x00019a4f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00025d25) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00025d25) fshwr2_func_candi_cell_pane_g

0x01a3,	// (0x0001600f) bg_popup_window_pane_cp01

0x3c14,	// (0x00019a80) bg_popup_window_pane_g1_cp01

0x3c1d,	// (0x00019a89) bg_popup_window_pane_cp22_ParamLimits

0x3c1d,	// (0x00019a89) bg_popup_window_pane_cp22

0x3c2b,	// (0x00019a97) listscroll_tmo_link_pane_ParamLimits

0x3c2b,	// (0x00019a97) listscroll_tmo_link_pane

0x3c6b,	// (0x00019ad7) popup_tmo_note_window_g1_ParamLimits

0x3c6b,	// (0x00019ad7) popup_tmo_note_window_g1

0x3c78,	// (0x00019ae4) tmo_note_info_pane_ParamLimits

0x3c78,	// (0x00019ae4) tmo_note_info_pane

0xc210,	// (0x0002207c) list_tmo_note_info_pane_g1_ParamLimits

0xc210,	// (0x0002207c) list_tmo_note_info_pane_g1

0x3ca6,	// (0x00019b12) list_tmo_note_info_pane_g2_ParamLimits

0x3ca6,	// (0x00019b12) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00025d2a) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00025d2a) list_tmo_note_info_pane_g

0x3cc2,	// (0x00019b2e) list_tmo_note_info_text_pane_ParamLimits

0x3cc2,	// (0x00019b2e) list_tmo_note_info_text_pane

0x3d04,	// (0x00019b70) list_tmo_link_pane

0x3d11,	// (0x00019b7d) scroll_pane_cp20

0x3d1e,	// (0x00019b8a) list_single_tmo_link_pane_ParamLimits

0x3d1e,	// (0x00019b8a) list_single_tmo_link_pane

0x3d2e,	// (0x00019b9a) list_single_tmo_link_pane_t1

0x3d3c,	// (0x00019ba8) list_tmo_note_info_text_pane_t1_ParamLimits

0x3d3c,	// (0x00019ba8) list_tmo_note_info_text_pane_t1

0x935f,	// (0x0001f1cb) aid_size_touch_scroll_bar_cp01_ParamLimits

0x935f,	// (0x0001f1cb) aid_size_touch_scroll_bar_cp01

0x8be4,	// (0x0001ea50) aid_size_touch_slider_marker

0x8f8a,	// (0x0001edf6) popup_settings_window_ParamLimits

0x8f8a,	// (0x0001edf6) popup_settings_window

0x53f5,	// (0x0001b261) popup_candi_list_indi_window

0xd75c,	// (0x000235c8) aid_touch_navi_pane_ParamLimits

0x6e81,	// (0x0001cced) rs_clock_indi_pane

0x6e8a,	// (0x0001ccf6) sctrl_sk_bottom_pane_ParamLimits

0x6e9b,	// (0x0001cd07) sctrl_sk_top_pane_ParamLimits

0x6f86,	// (0x0001cdf2) popup_fep_tooltip_window

0x38e3,	// (0x0001974f) aid_size_cell_widget_grid_ParamLimits

0xbf99,	// (0x00021e05) cell_ai5_widget_pane_g1_ParamLimits

0xbf99,	// (0x00021e05) cell_ai5_widget_pane_g1

0xbfe1,	// (0x00021e4d) cell_ai5_widget_pane_g6_ParamLimits

0xbfed,	// (0x00021e59) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00025ca8) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00025ca8) cell_ai5_widget_pane_g

0xc0f1,	// (0x00021f5d) cell_ai5_widget_pane_t10_ParamLimits

0xc0f1,	// (0x00021f5d) cell_ai5_widget_pane_t10

0xc103,	// (0x00021f6f) grid_ai5_widget_pane_ParamLimits

0x3998,	// (0x00019804) cell_contacts_ai5_widget_pane_ParamLimits

0x3998,	// (0x00019804) cell_contacts_ai5_widget_pane

0x3b09,	// (0x00019975) popup_discreet_window_t3_ParamLimits

0x3b09,	// (0x00019975) popup_discreet_window_t3

0x3b62,	// (0x000199ce) popup_fshwr2_char_preview_window_ParamLimits

0x3b62,	// (0x000199ce) popup_fshwr2_char_preview_window

0xc227,	// (0x00022093) tmo_note_info_pane_t1

0xc23c,	// (0x000220a8) tmo_note_info_pane_t2

0xc255,	// (0x000220c1) tmo_note_info_pane_t3

0x3ce0,	// (0x00019b4c) tmo_note_info_pane_t4

0x3cf2,	// (0x00019b5e) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00025d2f) tmo_note_info_pane_t

0x3d04,	// (0x00019b70) list_tmo_link_pane_ParamLimits

0x3d11,	// (0x00019b7d) scroll_pane_cp20_ParamLimits

0xc2e1,	// (0x0002214d) bg_popup_fep_char_preview_window_cp01

0x3d55,	// (0x00019bc1) popup_fshwr2_char_preview_window_t1

0x3d63,	// (0x00019bcf) popup_candi_list_indi_window_g1

0x3d6c,	// (0x00019bd8) bg_cell_contacts_ai5_widget_pane

0x3d78,	// (0x00019be4) cell_contacts_ai5_widget_pane_g1

0x3d8c,	// (0x00019bf8) cell_contacts_ai5_widget_pane_g2

0x3d9b,	// (0x00019c07) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00025d3a) cell_contacts_ai5_widget_pane_g

0x3dae,	// (0x00019c1a) cell_contacts_ai5_widget_pane_t1

0xc998,	// (0x00022804) highlight_cell_shortcut_ai5_widget_pane_cp01

0x3e28,	// (0x00019c94) settings_container_pane

0xd3ce,	// (0x0002323a) listscroll_set_pane_copy1

0xf08b,	// (0x00024ef7) scroll_pane_cp121_copy1

0x3e34,	// (0x00019ca0) set_content_pane_copy1

0x3e3c,	// (0x00019ca8) aid_height_set_list_copy1_ParamLimits

0x3e3c,	// (0x00019ca8) aid_height_set_list_copy1

0xe87c,	// (0x000246e8) aid_size_parent_copy1_ParamLimits

0xe87c,	// (0x000246e8) aid_size_parent_copy1

0x3e48,	// (0x00019cb4) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3e48,	// (0x00019cb4) button_value_adjust_pane_cp6_copy1

0xd630,	// (0x0002349c) list_highlight_pane_cp2_copy1_ParamLimits

0xd630,	// (0x0002349c) list_highlight_pane_cp2_copy1

0x3e5c,	// (0x00019cc8) list_set_pane_copy1_ParamLimits

0x3e5c,	// (0x00019cc8) list_set_pane_copy1

0x3dc3,	// (0x00019c2f) main_pane_set_t1_copy1_ParamLimits

0x3dc3,	// (0x00019c2f) main_pane_set_t1_copy1

0x3dfd,	// (0x00019c69) main_pane_set_t2_copy1_ParamLimits

0x3dfd,	// (0x00019c69) main_pane_set_t2_copy1

0x3f09,	// (0x00019d75) main_pane_set_t3_copy1

0x3f17,	// (0x00019d83) main_pane_set_t4_copy1

0x3e1c,	// (0x00019c88) set_content_pane_g1_copy1_ParamLimits

0x3e1c,	// (0x00019c88) set_content_pane_g1_copy1

0x3f25,	// (0x00019d91) setting_code_pane_copy1

0x3f2f,	// (0x00019d9b) setting_slider_graphic_pane_copy1

0x3f2f,	// (0x00019d9b) setting_slider_pane_copy1

0x3f39,	// (0x00019da5) setting_text_pane_copy1

0x3f43,	// (0x00019daf) setting_volume_pane_copy1

0x3f4c,	// (0x00019db8) settings_code_pane_cp2_copy1

0x3f54,	// (0x00019dc0) settings_code_pane_cp_copy1_ParamLimits

0x3f54,	// (0x00019dc0) settings_code_pane_cp_copy1

0x3f68,	// (0x00019dd4) volume_set_pane_copy1

0x3f70,	// (0x00019ddc) volume_set_pane_g10_copy1

0x3f78,	// (0x00019de4) volume_set_pane_g1_copy1

0x3f80,	// (0x00019dec) volume_set_pane_g2_copy1

0x3f88,	// (0x00019df4) volume_set_pane_g3_copy1

0x3f90,	// (0x00019dfc) volume_set_pane_g4_copy1

0x3f98,	// (0x00019e04) volume_set_pane_g5_copy1

0x3fa0,	// (0x00019e0c) volume_set_pane_g6_copy1

0x3fa8,	// (0x00019e14) volume_set_pane_g7_copy1

0x3fb0,	// (0x00019e1c) volume_set_pane_g8_copy1

0x3fb8,	// (0x00019e24) volume_set_pane_g9_copy1

0xc351,	// (0x000221bd) bg_set_opt_pane_cp_copy1_ParamLimits

0xc351,	// (0x000221bd) bg_set_opt_pane_cp_copy1

0x3fc0,	// (0x00019e2c) setting_slider_pane_t1_copy1_ParamLimits

0x3fc0,	// (0x00019e2c) setting_slider_pane_t1_copy1

0x3fde,	// (0x00019e4a) setting_slider_pane_t2_copy1_ParamLimits

0x3fde,	// (0x00019e4a) setting_slider_pane_t2_copy1

0x3ff8,	// (0x00019e64) setting_slider_pane_t3_copy1_ParamLimits

0x3ff8,	// (0x00019e64) setting_slider_pane_t3_copy1

0x4010,	// (0x00019e7c) slider_set_pane_copy1_ParamLimits

0x4010,	// (0x00019e7c) slider_set_pane_copy1

0xc9ff,	// (0x0002286b) set_opt_bg_pane_g1_copy2

0xca07,	// (0x00022873) set_opt_bg_pane_g2_copy2

0x4026,	// (0x00019e92) set_opt_bg_pane_g3_copy2

0xca17,	// (0x00022883) set_opt_bg_pane_g4_copy2

0xca1f,	// (0x0002288b) set_opt_bg_pane_g5_copy2

0xca27,	// (0x00022893) set_opt_bg_pane_g6_copy2

0x4030,	// (0x00019e9c) set_opt_bg_pane_g7_copy2

0x4038,	// (0x00019ea4) set_opt_bg_pane_g8_copy2

0x4042,	// (0x00019eae) set_opt_bg_pane_g9_copy2

0x7db8,	// (0x0001dc24) aid_size_touch_slider_mark_copy1_ParamLimits

0x7db8,	// (0x0001dc24) aid_size_touch_slider_mark_copy1

0x404c,	// (0x00019eb8) slider_set_pane_g1_copy1

0x7dcc,	// (0x0001dc38) slider_set_pane_g2_copy1

0x693b,	// (0x0001c7a7) slider_set_pane_g3_copy1_ParamLimits

0x693b,	// (0x0001c7a7) slider_set_pane_g3_copy1

0x694f,	// (0x0001c7bb) slider_set_pane_g4_copy1_ParamLimits

0x694f,	// (0x0001c7bb) slider_set_pane_g4_copy1

0x6967,	// (0x0001c7d3) slider_set_pane_g5_copy1_ParamLimits

0x6967,	// (0x0001c7d3) slider_set_pane_g5_copy1

0x693b,	// (0x0001c7a7) slider_set_pane_g6_copy1_ParamLimits

0x693b,	// (0x0001c7a7) slider_set_pane_g6_copy1

0x7dd4,	// (0x0001dc40) slider_set_pane_g7_copy1_ParamLimits

0x7dd4,	// (0x0001dc40) slider_set_pane_g7_copy1

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp2_copy1

0x4055,	// (0x00019ec1) setting_slider_graphic_pane_g1_copy1

0x405e,	// (0x00019eca) setting_slider_graphic_pane_t1_copy1

0x406e,	// (0x00019eda) setting_slider_graphic_pane_t2_copy1

0x407e,	// (0x00019eea) slider_set_pane_cp_copy1

0x408e,	// (0x00019efa) input_focus_pane_cp1_copy1

0x4097,	// (0x00019f03) list_set_text_pane_copy1

0x409f,	// (0x00019f0b) setting_text_pane_g1_copy1

0x5be4,	// (0x0001ba50) set_text_pane_t1_copy1

0x408e,	// (0x00019efa) input_focus_pane_cp2_copy1

0x409f,	// (0x00019f0b) setting_code_pane_g1_copy1

0x40c5,	// (0x00019f31) setting_code_pane_t1_copy1

0x3c92,	// (0x00019afe) list_set_graphic_pane_copy1

0xc2f5,	// (0x00022161) bg_set_opt_pane_cp4_copy1

0xd0d0,	// (0x00022f3c) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0d0,	// (0x00022f3c) list_set_graphic_pane_g1_copy1

0x40d3,	// (0x00019f3f) list_set_graphic_pane_g2_copy1

0xd0e8,	// (0x00022f54) list_set_graphic_pane_t1_copy1_ParamLimits

0xd0e8,	// (0x00022f54) list_set_graphic_pane_t1_copy1

0x01a3,	// (0x0001600f) rs_clock_indi_pane_g1

0x40db,	// (0x00019f47) rs_clock_indi_pane_t1

0x40e9,	// (0x00019f55) rs_indi_pane

0x40f1,	// (0x00019f5d) rs_indi_pane_g1

0x40fa,	// (0x00019f66) rs_indi_pane_g2

0x4103,	// (0x00019f6f) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00025d41) rs_indi_pane_g

0xd3ce,	// (0x0002323a) bg_popup_preview_window_pane_cp03

0x410c,	// (0x00019f78) popup_fep_tooltip_window_t1

0x1030,	// (0x00016e9c) popup_note2_window_g2_ParamLimits

0x1030,	// (0x00016e9c) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x00025ae6) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x00025ae6) popup_note2_window_g

0x1612,	// (0x0001747e) bg_popup_sub_pane_cp11_ParamLimits

0x161f,	// (0x0001748b) cell_ai3_links_pane_g1_ParamLimits

0x1636,	// (0x000174a2) cell_ai3_links_pane_t1

0x5be4,	// (0x0001ba50) set_text_pane_t1_copy1_ParamLimits

0xd2dd,	// (0x00023149) cell_graphic_popup_pane_cp2_ParamLimits

0xd2dd,	// (0x00023149) cell_graphic_popup_pane_cp2

0x411a,	// (0x00019f86) cell_graphic_popup_pane_g1_cp2

0xc6ed,	// (0x00022559) cell_graphic_popup_pane_g2_cp2

0x4122,	// (0x00019f8e) cell_graphic_popup_pane_g3_cp2

0x412a,	// (0x00019f96) cell_graphic_popup_pane_t2_cp2

0xc6fe,	// (0x0002256a) grid_highlight_pane_cp3_cp2

0xcc8d,	// (0x00022af9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc998,	// (0x00022804) main_tmo_pane_ParamLimits

0xaffa,	// (0x00020e66) popup_tmo_big_image_note_window

0xbf89,	// (0x00021df5) cell_ai5_widget_list_pane

0xbf91,	// (0x00021dfd) cell_ai5_widget_lrg_icon_pane

0xc227,	// (0x00022093) tmo_note_info_pane_t1_ParamLimits

0xc23c,	// (0x000220a8) tmo_note_info_pane_t2_ParamLimits

0xc255,	// (0x000220c1) tmo_note_info_pane_t3_ParamLimits

0x3ce0,	// (0x00019b4c) tmo_note_info_pane_t4_ParamLimits

0x3cf2,	// (0x00019b5e) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00025d2f) tmo_note_info_pane_t_ParamLimits

0x3e28,	// (0x00019c94) settings_container_pane_ParamLimits

0x4086,	// (0x00019ef2) indicator_popup_pane_cp5

0x4086,	// (0x00019ef2) indicator_popup_pane_cp6

0x3c92,	// (0x00019afe) list_set_graphic_pane_copy1_ParamLimits

0xc2e1,	// (0x0002214d) bg_popup_window_pane_cp23

0x4138,	// (0x00019fa4) popup_tmo_big_image_note_window_g1

0x4143,	// (0x00019faf) popup_tmo_big_image_note_window_t1

0x4153,	// (0x00019fbf) popup_tmo_big_image_note_window_t2

0x4163,	// (0x00019fcf) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00025d48) popup_tmo_big_image_note_window_t

0xc26a,	// (0x000220d6) cell_ai5_widget_lrg_icon_pane_g1

0xc272,	// (0x000220de) cell_ai5_widget_lrg_icon_pane_t1

0xc280,	// (0x000220ec) cell_ai5_widget_list_row_pane_ParamLimits

0xc280,	// (0x000220ec) cell_ai5_widget_list_row_pane

0xc299,	// (0x00022105) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xc299,	// (0x00022105) cell_ai5_widget_list_row_pane_g1

0xc2a6,	// (0x00022112) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xc2a6,	// (0x00022112) cell_ai5_widget_list_row_pane_t1

0xc2be,	// (0x0002212a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xc2be,	// (0x0002212a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x00025d4f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00025d4f) cell_ai5_widget_list_row_pane_t

0xc2e1,	// (0x0002214d) main_fep_vtchi_ss_pane

0x4173,	// (0x00019fdf) popup_fep_char_pre_window

0x417b,	// (0x00019fe7) popup_fep_ituss_window

0x4186,	// (0x00019ff2) popup_fep_vkbss_window

0x418f,	// (0x00019ffb) grid_vkbss_keypad_pane_ParamLimits

0x418f,	// (0x00019ffb) grid_vkbss_keypad_pane

0x419f,	// (0x0001a00b) ituss_keypad_pane

0x41a7,	// (0x0001a013) aid_vkbss_key_offset_ParamLimits

0x41a7,	// (0x0001a013) aid_vkbss_key_offset

0x41b6,	// (0x0001a022) cell_vkbss_key_pane_ParamLimits

0x41b6,	// (0x0001a022) cell_vkbss_key_pane

0x41cc,	// (0x0001a038) bg_cell_vkbss_key_g1_ParamLimits

0x41cc,	// (0x0001a038) bg_cell_vkbss_key_g1

0x41d8,	// (0x0001a044) cell_vkbss_key_3p_pane_ParamLimits

0x41d8,	// (0x0001a044) cell_vkbss_key_3p_pane

0x41f2,	// (0x0001a05e) cell_vkbss_key_g1_ParamLimits

0x41f2,	// (0x0001a05e) cell_vkbss_key_g1

0x420c,	// (0x0001a078) cell_vkbss_key_t1_ParamLimits

0x420c,	// (0x0001a078) cell_vkbss_key_t1

0x4237,	// (0x0001a0a3) cell_ituss_key_pane_ParamLimits

0x4237,	// (0x0001a0a3) cell_ituss_key_pane

0x4246,	// (0x0001a0b2) bg_cell_ituss_key_g1_ParamLimits

0x4246,	// (0x0001a0b2) bg_cell_ituss_key_g1

0x4252,	// (0x0001a0be) cell_ituss_key_pane_g1_ParamLimits

0x4252,	// (0x0001a0be) cell_ituss_key_pane_g1

0x425e,	// (0x0001a0ca) cell_ituss_key_pane_g2_ParamLimits

0x425e,	// (0x0001a0ca) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00025d54) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00025d54) cell_ituss_key_pane_g

0x4271,	// (0x0001a0dd) cell_ituss_key_t1_ParamLimits

0x4271,	// (0x0001a0dd) cell_ituss_key_t1

0x428f,	// (0x0001a0fb) cell_ituss_key_t2_ParamLimits

0x428f,	// (0x0001a0fb) cell_ituss_key_t2

0x42ae,	// (0x0001a11a) cell_ituss_key_t3_ParamLimits

0x42ae,	// (0x0001a11a) cell_ituss_key_t3

0x42cd,	// (0x0001a139) cell_ituss_key_t4_ParamLimits

0x42cd,	// (0x0001a139) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00025d59) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00025d59) cell_ituss_key_t

0x42ec,	// (0x0001a158) cell_vkbss_key_3p_pane_g1

0x42f4,	// (0x0001a160) cell_vkbss_key_3p_pane_g2

0x42fc,	// (0x0001a168) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00025d62) cell_vkbss_key_3p_pane_g

0xc2e1,	// (0x0002214d) bg_popup_fep_char_preview_window_cp02

0x4304,	// (0x0001a170) popup_fep_char_pre_window_t1

0xbf7f,	// (0x00021deb) main_ai5_sk_pane

0x3d6c,	// (0x00019bd8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3d78,	// (0x00019be4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3d8c,	// (0x00019bf8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3d9b,	// (0x00019c07) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00025d3a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3dae,	// (0x00019c1a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc998,	// (0x00022804) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc2d0,	// (0x0002213c) main_ai5_sk_pane_g1
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
