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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00043067 };

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
0x5c58,	// (0x00048cbf) Screen

0x5c64,	// (0x00048ccb) application_window_ParamLimits

0x5c64,	// (0x00048ccb) application_window

0xda68,	// (0x00050acf) screen_g1

0x5cc0,	// (0x00048d27) area_bottom_pane_ParamLimits

0x5cc0,	// (0x00048d27) area_bottom_pane

0x5d80,	// (0x00048de7) area_top_pane_ParamLimits

0x5d80,	// (0x00048de7) area_top_pane

0x5e14,	// (0x00048e7b) main_pane_ParamLimits

0x5e14,	// (0x00048e7b) main_pane

0xda72,	// (0x00050ad9) misc_graphics

0x8c91,	// (0x0004bcf8) battery_pane_ParamLimits

0x8c91,	// (0x0004bcf8) battery_pane

0x994f,	// (0x0004c9b6) bg_status_flat_pane_g8

0x9957,	// (0x0004c9be) bg_status_flat_pane_g9

0x8d59,	// (0x0004bdc0) context_pane_ParamLimits

0x8d59,	// (0x0004bdc0) context_pane

0x8e7d,	// (0x0004bee4) navi_pane_ParamLimits

0x8e7d,	// (0x0004bee4) navi_pane

0x8f0d,	// (0x0004bf74) signal_pane_ParamLimits

0x8f0d,	// (0x0004bf74) signal_pane

0x0008,

0xf87e,	// (0x000528e5) bg_status_flat_pane_g

0x8f7a,	// (0x0004bfe1) status_pane_g1_ParamLimits

0x8f7a,	// (0x0004bfe1) status_pane_g1

0x8f8e,	// (0x0004bff5) status_pane_g2_ParamLimits

0x8f8e,	// (0x0004bff5) status_pane_g2

0x8f9a,	// (0x0004c001) status_pane_g3_ParamLimits

0x8f9a,	// (0x0004c001) status_pane_g3

0x0004,

0xf7a5,	// (0x0005280c) status_pane_g_ParamLimits

0xf7a5,	// (0x0005280c) status_pane_g

0x8fce,	// (0x0004c035) title_pane_ParamLimits

0x8fce,	// (0x0004c035) title_pane

0x900b,	// (0x0004c072) uni_indicator_pane_ParamLimits

0x900b,	// (0x0004c072) uni_indicator_pane

0x6f7a,	// (0x00049fe1) bg_list_pane_ParamLimits

0x6f7a,	// (0x00049fe1) bg_list_pane

0x6f9a,	// (0x0004a001) find_pane

0x6fa2,	// (0x0004a009) listscroll_app_pane_ParamLimits

0x6fa2,	// (0x0004a009) listscroll_app_pane

0x6fae,	// (0x0004a015) listscroll_form_pane

0x6fb6,	// (0x0004a01d) listscroll_gen_pane_ParamLimits

0x6fb6,	// (0x0004a01d) listscroll_gen_pane

0x6fca,	// (0x0004a031) listscroll_set_pane

0x6528,	// (0x0004958f) main_idle_act_pane

0x41ab,	// (0x00047212) main_idle_trad_pane

0x41ab,	// (0x00047212) main_list_empty_pane

0x6fe4,	// (0x0004a04b) main_midp_pane

0x6ff0,	// (0x0004a057) main_pane_g1_ParamLimits

0x6ff0,	// (0x0004a057) main_pane_g1

0x6ffe,	// (0x0004a065) popup_ai_message_window_ParamLimits

0x6ffe,	// (0x0004a065) popup_ai_message_window

0x70b2,	// (0x0004a119) popup_fep_china_uni_window_ParamLimits

0x70b2,	// (0x0004a119) popup_fep_china_uni_window

0x8712,	// (0x0004b779) popup_fep_japan_candidate_window_ParamLimits

0x8712,	// (0x0004b779) popup_fep_japan_candidate_window

0x873c,	// (0x0004b7a3) popup_fep_japan_predictive_window_ParamLimits

0x873c,	// (0x0004b7a3) popup_fep_japan_predictive_window

0x8772,	// (0x0004b7d9) popup_find_window

0x877f,	// (0x0004b7e6) popup_grid_graphic_window_ParamLimits

0x877f,	// (0x0004b7e6) popup_grid_graphic_window

0x87ad,	// (0x0004b814) popup_large_graphic_colour_window

0x87d3,	// (0x0004b83a) popup_menu_window_ParamLimits

0x87d3,	// (0x0004b83a) popup_menu_window

0x899d,	// (0x0004ba04) popup_note_image_window

0x8987,	// (0x0004b9ee) popup_note_wait_window_ParamLimits

0x8987,	// (0x0004b9ee) popup_note_wait_window

0x8987,	// (0x0004b9ee) popup_note_window_ParamLimits

0x8987,	// (0x0004b9ee) popup_note_window

0x8a03,	// (0x0004ba6a) popup_query_code_window_ParamLimits

0x8a03,	// (0x0004ba6a) popup_query_code_window

0x8a19,	// (0x0004ba80) popup_query_data_code_window_ParamLimits

0x8a19,	// (0x0004ba80) popup_query_data_code_window

0x8a3c,	// (0x0004baa3) popup_query_data_window_ParamLimits

0x8a3c,	// (0x0004baa3) popup_query_data_window

0x8a5e,	// (0x0004bac5) popup_query_sat_info_window_ParamLimits

0x8a5e,	// (0x0004bac5) popup_query_sat_info_window

0x8a9d,	// (0x0004bb04) popup_snote_single_graphic_window_ParamLimits

0x8a9d,	// (0x0004bb04) popup_snote_single_graphic_window

0x8a9d,	// (0x0004bb04) popup_snote_single_text_window_ParamLimits

0x8a9d,	// (0x0004bb04) popup_snote_single_text_window

0x8ab4,	// (0x0004bb1b) popup_sub_window_general

0x8bfa,	// (0x0004bc61) popup_window_general_ParamLimits

0x8bfa,	// (0x0004bc61) popup_window_general

0x8c13,	// (0x0004bc7a) power_save_pane

0x6def,	// (0x00049e56) control_pane_g1_ParamLimits

0x6def,	// (0x00049e56) control_pane_g1

0x6e18,	// (0x00049e7f) control_pane_g2_ParamLimits

0x6e18,	// (0x00049e7f) control_pane_g2

0x43a9,	// (0x00047410) control_pane_g3_ParamLimits

0x43a9,	// (0x00047410) control_pane_g3

0x0007,

0xf78d,	// (0x000527f4) control_pane_g_ParamLimits

0xf78d,	// (0x000527f4) control_pane_g

0x6e87,	// (0x00049eee) control_pane_t1_ParamLimits

0x6e87,	// (0x00049eee) control_pane_t1

0x6ed3,	// (0x00049f3a) control_pane_t2_ParamLimits

0x6ed3,	// (0x00049f3a) control_pane_t2

0x0002,

0xf79e,	// (0x00052805) control_pane_t_ParamLimits

0xf79e,	// (0x00052805) control_pane_t

0x6d48,	// (0x00049daf) navi_navi_volume_pane_cp1

0x6d50,	// (0x00049db7) status_small_icon_pane

0x4375,	// (0x000473dc) status_small_pane_g1_ParamLimits

0x4375,	// (0x000473dc) status_small_pane_g1

0x6d58,	// (0x00049dbf) status_small_pane_g2_ParamLimits

0x6d58,	// (0x00049dbf) status_small_pane_g2

0x6d64,	// (0x00049dcb) status_small_pane_g3_ParamLimits

0x6d64,	// (0x00049dcb) status_small_pane_g3

0x6d70,	// (0x00049dd7) status_small_pane_g4_ParamLimits

0x6d70,	// (0x00049dd7) status_small_pane_g4

0x6d7c,	// (0x00049de3) status_small_pane_g5_ParamLimits

0x6d7c,	// (0x00049de3) status_small_pane_g5

0x6d8a,	// (0x00049df1) status_small_pane_g6_ParamLimits

0x6d8a,	// (0x00049df1) status_small_pane_g6

0x0007,

0xf77c,	// (0x000527e3) status_small_pane_g_ParamLimits

0xf77c,	// (0x000527e3) status_small_pane_g

0x6db9,	// (0x00049e20) status_small_pane_t1

0x6ddb,	// (0x00049e42) status_small_wait_pane_ParamLimits

0x6ddb,	// (0x00049e42) status_small_wait_pane

0x689b,	// (0x00049902) aid_levels_signal_ParamLimits

0x689b,	// (0x00049902) aid_levels_signal

0x68ad,	// (0x00049914) signal_pane_g1_ParamLimits

0x68ad,	// (0x00049914) signal_pane_g1

0x68c2,	// (0x00049929) signal_pane_g2_ParamLimits

0x68c2,	// (0x00049929) signal_pane_g2

0x0003,

0xf70d,	// (0x00052774) signal_pane_g_ParamLimits

0xf70d,	// (0x00052774) signal_pane_g

0x0d24,	// (0x00043d8b) context_pane_g1

0x6073,	// (0x000490da) title_pane_g1

0x6091,	// (0x000490f8) title_pane_t1

0xda94,	// (0x00050afb) title_pane_t2

0xdaba,	// (0x00050b21) title_pane_t3

0x0002,

0xf557,	// (0x000525be) title_pane_t

0x9023,	// (0x0004c08a) aid_levels_battery_ParamLimits

0x9023,	// (0x0004c08a) aid_levels_battery

0x9037,	// (0x0004c09e) battery_pane_g1_ParamLimits

0x9037,	// (0x0004c09e) battery_pane_g1

0x904d,	// (0x0004c0b4) battery_pane_g2_ParamLimits

0x904d,	// (0x0004c0b4) battery_pane_g2

0x0001,

0xf7b0,	// (0x00052817) battery_pane_g_ParamLimits

0xf7b0,	// (0x00052817) battery_pane_g

0xa299,	// (0x0004d300) uni_indicator_pane_g1

0xa2af,	// (0x0004d316) uni_indicator_pane_g2

0xa2c5,	// (0x0004d32c) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0005298d) uni_indicator_pane_g

0x0fd2,	// (0x00044039) navi_icon_pane_ParamLimits

0x0fd2,	// (0x00044039) navi_icon_pane

0x0f56,	// (0x00043fbd) navi_midp_pane

0x0fee,	// (0x00044055) navi_navi_pane

0x0ff8,	// (0x0004405f) navi_text_pane_ParamLimits

0x0ff8,	// (0x0004405f) navi_text_pane

0xda68,	// (0x00050acf) status_small_wait_pane_g1

0xddb5,	// (0x00050e1c) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00052988) status_small_wait_pane_g

0x9fac,	// (0x0004d013) navi_navi_icon_text_pane

0x9fb4,	// (0x0004d01b) navi_navi_pane_g1_ParamLimits

0x9fb4,	// (0x0004d01b) navi_navi_pane_g1

0x9fc6,	// (0x0004d02d) navi_navi_pane_g2_ParamLimits

0x9fc6,	// (0x0004d02d) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00052956) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00052956) navi_navi_pane_g

0x9fd8,	// (0x0004d03f) navi_navi_tabs_pane

0x9fe1,	// (0x0004d048) navi_navi_text_pane

0x9fac,	// (0x0004d013) navi_navi_volume_pane

0x9f88,	// (0x0004cfef) navi_text_pane_t1

0x9f7c,	// (0x0004cfe3) navi_icon_pane_g1

0x9ecf,	// (0x0004cf36) navi_navi_text_pane_t1

0x73c6,	// (0x0004a42d) navi_navi_volume_pane_g1

0x73ce,	// (0x0004a435) volume_small_pane

0x9e35,	// (0x0004ce9c) navi_navi_icon_text_pane_g1

0x9e3d,	// (0x0004cea4) navi_navi_icon_text_pane_t1

0x0fee,	// (0x00044055) navi_tabs_2_long_pane

0x0fee,	// (0x00044055) navi_tabs_2_pane

0x0fee,	// (0x00044055) navi_tabs_3_long_pane

0x0fee,	// (0x00044055) navi_tabs_3_pane

0x0fee,	// (0x00044055) navi_tabs_4_pane

0x73a6,	// (0x0004a40d) tabs_2_active_pane_ParamLimits

0x73a6,	// (0x0004a40d) tabs_2_active_pane

0x73b6,	// (0x0004a41d) tabs_2_passive_pane_ParamLimits

0x73b6,	// (0x0004a41d) tabs_2_passive_pane

0x7374,	// (0x0004a3db) tabs_3_active_pane_ParamLimits

0x7374,	// (0x0004a3db) tabs_3_active_pane

0x7384,	// (0x0004a3eb) tabs_3_passive_pane_ParamLimits

0x7384,	// (0x0004a3eb) tabs_3_passive_pane

0x7395,	// (0x0004a3fc) tabs_3_passive_pane_cp_ParamLimits

0x7395,	// (0x0004a3fc) tabs_3_passive_pane_cp

0x7328,	// (0x0004a38f) tabs_4_active_pane_ParamLimits

0x7328,	// (0x0004a38f) tabs_4_active_pane

0x733b,	// (0x0004a3a2) tabs_4_passive_pane_ParamLimits

0x733b,	// (0x0004a3a2) tabs_4_passive_pane

0x734c,	// (0x0004a3b3) tabs_4_passive_pane_cp_ParamLimits

0x734c,	// (0x0004a3b3) tabs_4_passive_pane_cp

0x735d,	// (0x0004a3c4) tabs_4_passive_pane_cp2_ParamLimits

0x735d,	// (0x0004a3c4) tabs_4_passive_pane_cp2

0x7304,	// (0x0004a36b) tabs_2_long_active_pane_ParamLimits

0x7304,	// (0x0004a36b) tabs_2_long_active_pane

0x7316,	// (0x0004a37d) tabs_2_long_passive_pane_ParamLimits

0x7316,	// (0x0004a37d) tabs_2_long_passive_pane

0x72c5,	// (0x0004a32c) tabs_3_long_active_pane_ParamLimits

0x72c5,	// (0x0004a32c) tabs_3_long_active_pane

0x72d8,	// (0x0004a33f) tabs_3_long_passive_pane_ParamLimits

0x72d8,	// (0x0004a33f) tabs_3_long_passive_pane

0x72f1,	// (0x0004a358) tabs_3_long_passive_pane_cp_ParamLimits

0x72f1,	// (0x0004a358) tabs_3_long_passive_pane_cp

0x726b,	// (0x0004a2d2) volume_small_pane_g1

0x7274,	// (0x0004a2db) volume_small_pane_g2

0x727d,	// (0x0004a2e4) volume_small_pane_g3

0x7286,	// (0x0004a2ed) volume_small_pane_g4

0x728f,	// (0x0004a2f6) volume_small_pane_g5

0x7298,	// (0x0004a2ff) volume_small_pane_g6

0x72a1,	// (0x0004a308) volume_small_pane_g7

0x72aa,	// (0x0004a311) volume_small_pane_g8

0x72b3,	// (0x0004a31a) volume_small_pane_g9

0x72bc,	// (0x0004a323) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00052922) volume_small_pane_g

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp2_ParamLimits

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp2

0x60f9,	// (0x00049160) tabs_3_active_pane_g1

0x6101,	// (0x00049168) tabs_3_active_pane_t1

0xdacc,	// (0x00050b33) bg_passive_tab_pane_cp2_ParamLimits

0xdacc,	// (0x00050b33) bg_passive_tab_pane_cp2

0x60f9,	// (0x00049160) tabs_3_passive_pane_g1

0x6101,	// (0x00049168) tabs_3_passive_pane_t1

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp3_ParamLimits

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp3

0x6113,	// (0x0004917a) tabs_4_active_pane_g1

0x611b,	// (0x00049182) tabs_4_active_pane_t1

0xdacc,	// (0x00050b33) bg_passive_tab_pane_cp3_ParamLimits

0xdacc,	// (0x00050b33) bg_passive_tab_pane_cp3

0x6113,	// (0x0004917a) tabs_4_1_passive_pane_g1

0x611b,	// (0x00049182) tabs_4_1_passive_pane_t1

0x6fe4,	// (0x0004a04b) list_highlight_pane_cp2

0xa514,	// (0x0004d57b) list_set_pane_ParamLimits

0xa514,	// (0x0004d57b) list_set_pane

0xa5dc,	// (0x0004d643) main_pane_set_t1_ParamLimits

0xa5dc,	// (0x0004d643) main_pane_set_t1

0xa5fc,	// (0x0004d663) main_pane_set_t2_ParamLimits

0xa5fc,	// (0x0004d663) main_pane_set_t2

0xa610,	// (0x0004d677) main_pane_set_t3_ParamLimits

0xa610,	// (0x0004d677) main_pane_set_t3

0xa624,	// (0x0004d68b) main_pane_set_t4_ParamLimits

0xa624,	// (0x0004d68b) main_pane_set_t4

0x0003,

0xf98b,	// (0x000529f2) main_pane_set_t_ParamLimits

0xf98b,	// (0x000529f2) main_pane_set_t

0xa638,	// (0x0004d69f) setting_code_pane

0xa642,	// (0x0004d6a9) setting_slider_graphic_pane

0xa642,	// (0x0004d6a9) setting_slider_pane

0xa642,	// (0x0004d6a9) setting_text_pane

0xa642,	// (0x0004d6a9) setting_volume_pane

0x612d,	// (0x00049194) volume_set_pane

0xdacc,	// (0x00050b33) bg_set_opt_pane_cp

0x6137,	// (0x0004919e) setting_slider_pane_t1

0x6150,	// (0x000491b7) setting_slider_pane_t2

0x616a,	// (0x000491d1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000525c5) setting_slider_pane_t

0x6182,	// (0x000491e9) slider_set_pane

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp2

0xdada,	// (0x00050b41) setting_slider_graphic_pane_g1

0x6198,	// (0x000491ff) setting_slider_graphic_pane_t1

0x61a8,	// (0x0004920f) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000525cc) setting_slider_graphic_pane_t

0x61b8,	// (0x0004921f) slider_set_pane_cp

0xda72,	// (0x00050ad9) input_focus_pane_cp1

0xa4d5,	// (0x0004d53c) list_set_text_pane

0xda68,	// (0x00050acf) setting_text_pane_g1

0xda72,	// (0x00050ad9) input_focus_pane_cp2

0xda68,	// (0x00050acf) setting_code_pane_g1

0xdae3,	// (0x00050b4a) setting_code_pane_t1

0x4d96,	// (0x00047dfd) set_text_pane_t1_ParamLimits

0x4d96,	// (0x00047dfd) set_text_pane_t1

0x0846,	// (0x000438ad) set_opt_bg_pane_g1

0x084e,	// (0x000438b5) set_opt_bg_pane_g2

0xa4ad,	// (0x0004d514) set_opt_bg_pane_g3

0x085e,	// (0x000438c5) set_opt_bg_pane_g4

0x0866,	// (0x000438cd) set_opt_bg_pane_g5

0x086e,	// (0x000438d5) set_opt_bg_pane_g6

0xa4b7,	// (0x0004d51e) set_opt_bg_pane_g7

0xa4c1,	// (0x0004d528) set_opt_bg_pane_g8

0xa4cb,	// (0x0004d532) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x000529df) set_opt_bg_pane_g

0xa4a0,	// (0x0004d507) slider_set_pane_g1

0x744f,	// (0x0004a4b6) slider_set_pane_g2

0x0006,

0xf969,	// (0x000529d0) slider_set_pane_g

0x73d7,	// (0x0004a43e) volume_set_pane_g1

0x73e1,	// (0x0004a448) volume_set_pane_g2

0x73eb,	// (0x0004a452) volume_set_pane_g3

0x73f5,	// (0x0004a45c) volume_set_pane_g4

0x73ff,	// (0x0004a466) volume_set_pane_g5

0x7409,	// (0x0004a470) volume_set_pane_g6

0x7413,	// (0x0004a47a) volume_set_pane_g7

0x741d,	// (0x0004a484) volume_set_pane_g8

0x7427,	// (0x0004a48e) volume_set_pane_g9

0x7431,	// (0x0004a498) volume_set_pane_g10

0x0009,

0xf941,	// (0x000529a8) volume_set_pane_g

0x61c0,	// (0x00049227) indicator_pane_ParamLimits

0x61c0,	// (0x00049227) indicator_pane

0x61cc,	// (0x00049233) main_idle_pane_g2_ParamLimits

0x61cc,	// (0x00049233) main_idle_pane_g2

0x61f4,	// (0x0004925b) main_pane_idle_g1_ParamLimits

0x61f4,	// (0x0004925b) main_pane_idle_g1

0xdaf1,	// (0x00050b58) popup_clock_digital_analogue_window_ParamLimits

0xdaf1,	// (0x00050b58) popup_clock_digital_analogue_window

0x6202,	// (0x00049269) soft_indicator_pane_ParamLimits

0x6202,	// (0x00049269) soft_indicator_pane

0x6210,	// (0x00049277) wallpaper_pane_ParamLimits

0x6210,	// (0x00049277) wallpaper_pane

0xda68,	// (0x00050acf) wallpaper_pane_g1

0x621c,	// (0x00049283) indicator_pane_g1_ParamLimits

0x621c,	// (0x00049283) indicator_pane_g1

0xa91e,	// (0x0004d985) navi_navi_icon_text_pane_srt_g1

0xdb1f,	// (0x00050b86) soft_indicator_pane_t1

0xdb39,	// (0x00050ba0) aid_ps_area_pane

0x6228,	// (0x0004928f) aid_ps_clock_pane

0xdb4a,	// (0x00050bb1) aid_ps_indicator_pane

0xdb56,	// (0x00050bbd) indicator_ps_pane_ParamLimits

0xdb56,	// (0x00050bbd) indicator_ps_pane

0xdb65,	// (0x00050bcc) power_save_pane_g1_ParamLimits

0xdb65,	// (0x00050bcc) power_save_pane_g1

0xdb71,	// (0x00050bd8) power_save_pane_g2_ParamLimits

0xdb71,	// (0x00050bd8) power_save_pane_g2

0x5c74,	// (0x00048cdb) aid_navinavi_width_pane

0xdb39,	// (0x00050ba0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000525d1) power_save_pane_g_ParamLimits

0xf56a,	// (0x000525d1) power_save_pane_g

0xdb7f,	// (0x00050be6) power_save_pane_t1_ParamLimits

0xdb7f,	// (0x00050be6) power_save_pane_t1

0x6228,	// (0x0004928f) aid_ps_clock_pane_ParamLimits

0xdb4a,	// (0x00050bb1) aid_ps_indicator_pane_ParamLimits

0xdb91,	// (0x00050bf8) power_save_pane_t4_ParamLimits

0xdb91,	// (0x00050bf8) power_save_pane_t4

0x0001,

0xf56f,	// (0x000525d6) power_save_pane_t_ParamLimits

0xf56f,	// (0x000525d6) power_save_pane_t

0xdbbb,	// (0x00050c22) power_save_t3_ParamLimits

0xdbbb,	// (0x00050c22) power_save_t3

0xdba6,	// (0x00050c0d) power_save_t2_ParamLimits

0xdba6,	// (0x00050c0d) power_save_t2

0xdbd0,	// (0x00050c37) indicator_ps_pane_g1

0x6236,	// (0x0004929d) ai_gene_pane_ParamLimits

0x6236,	// (0x0004929d) ai_gene_pane

0x6242,	// (0x000492a9) ai_links_pane_ParamLimits

0x6242,	// (0x000492a9) ai_links_pane

0x624e,	// (0x000492b5) indicator_pane_cp1_ParamLimits

0x624e,	// (0x000492b5) indicator_pane_cp1

0x625a,	// (0x000492c1) main_pane_idle_g1_cp_ParamLimits

0x625a,	// (0x000492c1) main_pane_idle_g1_cp

0xdbd9,	// (0x00050c40) popup_ai_links_title_window

0x6266,	// (0x000492cd) soft_indicator_pane_cp1_ParamLimits

0x6266,	// (0x000492cd) soft_indicator_pane_cp1

0xa287,	// (0x0004d2ee) ai_links_pane_g1

0xa290,	// (0x0004d2f7) grid_ai_links_pane

0xa26c,	// (0x0004d2d3) ai_gene_pane_1

0xa275,	// (0x0004d2dc) ai_gene_pane_2

0xa27e,	// (0x0004d2e5) list_highlight_pane_cp4

0xa24c,	// (0x0004d2b3) cell_ai_link_pane_ParamLimits

0xa24c,	// (0x0004d2b3) cell_ai_link_pane

0xa244,	// (0x0004d2ab) cell_ai_link_pane_g1

0xddb5,	// (0x00050e1c) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00052983) cell_ai_link_pane_g

0xda72,	// (0x00050ad9) grid_highlight_cp2

0xda72,	// (0x00050ad9) bg_popup_sub_pane_cp1

0xdbf0,	// (0x00050c57) popup_ai_links_title_window_t1

0xa190,	// (0x0004d1f7) ai_gene_pane_1_g1_ParamLimits

0xa190,	// (0x0004d1f7) ai_gene_pane_1_g1

0xa19c,	// (0x0004d203) ai_gene_pane_1_g2_ParamLimits

0xa19c,	// (0x0004d203) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00052979) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00052979) ai_gene_pane_1_g

0xa1a9,	// (0x0004d210) ai_gene_pane_1_t1_ParamLimits

0xa1a9,	// (0x0004d210) ai_gene_pane_1_t1

0xa1dd,	// (0x0004d244) grid_ai_soft_ind_pane

0xa17b,	// (0x0004d1e2) ai_gene_pane_2_t1_ParamLimits

0xa17b,	// (0x0004d1e2) ai_gene_pane_2_t1

0x6272,	// (0x000492d9) main_pane_empty_t1_ParamLimits

0x6272,	// (0x000492d9) main_pane_empty_t1

0x628a,	// (0x000492f1) main_pane_empty_t2_ParamLimits

0x628a,	// (0x000492f1) main_pane_empty_t2

0x629f,	// (0x00049306) main_pane_empty_t3_ParamLimits

0x629f,	// (0x00049306) main_pane_empty_t3

0x62b1,	// (0x00049318) main_pane_empty_t4_ParamLimits

0x62b1,	// (0x00049318) main_pane_empty_t4

0x62c3,	// (0x0004932a) main_pane_empty_t5_ParamLimits

0x62c3,	// (0x0004932a) main_pane_empty_t5

0x0004,

0xf574,	// (0x000525db) main_pane_empty_t_ParamLimits

0xf574,	// (0x000525db) main_pane_empty_t

0x0897,	// (0x000438fe) bg_popup_window_pane_ParamLimits

0x0897,	// (0x000438fe) bg_popup_window_pane

0x9edd,	// (0x0004cf44) find_popup_pane_cp2_ParamLimits

0x9edd,	// (0x0004cf44) find_popup_pane_cp2

0x9ee9,	// (0x0004cf50) heading_pane_ParamLimits

0x9ee9,	// (0x0004cf50) heading_pane

0xda72,	// (0x00050ad9) bg_popup_sub_pane

0x9e57,	// (0x0004cebe) bg_popup_window_pane_g1_ParamLimits

0x9e57,	// (0x0004cebe) bg_popup_window_pane_g1

0x9e63,	// (0x0004ceca) bg_popup_window_pane_g2_ParamLimits

0x9e63,	// (0x0004ceca) bg_popup_window_pane_g2

0x9e6f,	// (0x0004ced6) bg_popup_window_pane_g3_ParamLimits

0x9e6f,	// (0x0004ced6) bg_popup_window_pane_g3

0x9e7b,	// (0x0004cee2) bg_popup_window_pane_g4_ParamLimits

0x9e7b,	// (0x0004cee2) bg_popup_window_pane_g4

0x9e87,	// (0x0004ceee) bg_popup_window_pane_g5_ParamLimits

0x9e87,	// (0x0004ceee) bg_popup_window_pane_g5

0x9e93,	// (0x0004cefa) bg_popup_window_pane_g6_ParamLimits

0x9e93,	// (0x0004cefa) bg_popup_window_pane_g6

0x9e9f,	// (0x0004cf06) bg_popup_window_pane_g7_ParamLimits

0x9e9f,	// (0x0004cf06) bg_popup_window_pane_g7

0x9eab,	// (0x0004cf12) bg_popup_window_pane_g8_ParamLimits

0x9eab,	// (0x0004cf12) bg_popup_window_pane_g8

0x9eb7,	// (0x0004cf1e) bg_popup_window_pane_g9_ParamLimits

0x9eb7,	// (0x0004cf1e) bg_popup_window_pane_g9

0x9ec3,	// (0x0004cf2a) bg_popup_window_pane_g10_ParamLimits

0x9ec3,	// (0x0004cf2a) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00052941) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00052941) bg_popup_window_pane_g

0x9dec,	// (0x0004ce53) bg_popup_heading_pane_ParamLimits

0x9dec,	// (0x0004ce53) bg_popup_heading_pane

0x7517,	// (0x0004a57e) tabs_4_passive_pane_cp_srt_ParamLimits

0x7517,	// (0x0004a57e) tabs_4_passive_pane_cp_srt

0x7529,	// (0x0004a590) tabs_4_passive_pane_srt_ParamLimits

0x9e00,	// (0x0004ce67) heading_pane_g2

0x7529,	// (0x0004a590) tabs_4_passive_pane_srt

0x6fe4,	// (0x0004a04b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6fe4,	// (0x0004a04b) bg_passive_tab_pane_cp3_srt

0x9e08,	// (0x0004ce6f) heading_pane_t1_ParamLimits

0x9e08,	// (0x0004ce6f) heading_pane_t1

0x9e1f,	// (0x0004ce86) heading_pane_t2_ParamLimits

0x9e1f,	// (0x0004ce86) heading_pane_t2

0x0001,

0xf8d5,	// (0x0005293c) heading_pane_t_ParamLimits

0xf8d5,	// (0x0005293c) heading_pane_t

0x9917,	// (0x0004c97e) bg_popup_heading_pane_g1

0x99c6,	// (0x0004ca2d) bg_popup_heading_pane_g2

0x99d0,	// (0x0004ca37) bg_popup_heading_pane_g3

0x99da,	// (0x0004ca41) bg_popup_heading_pane_g4

0x99e4,	// (0x0004ca4b) bg_popup_heading_pane_g5

0x99ee,	// (0x0004ca55) bg_popup_heading_pane_g6

0x99f6,	// (0x0004ca5d) bg_popup_heading_pane_g7

0x99fe,	// (0x0004ca65) bg_popup_heading_pane_g8

0x9a08,	// (0x0004ca6f) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x000528f8) bg_popup_heading_pane_g

0x9125,	// (0x0004c18c) bg_popup_sub_pane_g1

0x912d,	// (0x0004c194) bg_popup_sub_pane_g2

0x9135,	// (0x0004c19c) bg_popup_sub_pane_g3

0x913d,	// (0x0004c1a4) bg_popup_sub_pane_g4

0x9145,	// (0x0004c1ac) bg_popup_sub_pane_g5

0x914d,	// (0x0004c1b4) bg_popup_sub_pane_g6

0x9155,	// (0x0004c1bc) bg_popup_sub_pane_g7

0x915d,	// (0x0004c1c4) bg_popup_sub_pane_g8

0x9165,	// (0x0004c1cc) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x000528d2) bg_popup_sub_pane_g

0xdbff,	// (0x00050c66) bg_popup_window_pane_cp5_ParamLimits

0xdbff,	// (0x00050c66) bg_popup_window_pane_cp5

0xdc1b,	// (0x00050c82) popup_note_window_g1_ParamLimits

0xdc1b,	// (0x00050c82) popup_note_window_g1

0xdc27,	// (0x00050c8e) popup_note_window_t1_ParamLimits

0xdc27,	// (0x00050c8e) popup_note_window_t1

0xdc3d,	// (0x00050ca4) popup_note_window_t2_ParamLimits

0xdc3d,	// (0x00050ca4) popup_note_window_t2

0xdc53,	// (0x00050cba) popup_note_window_t3_ParamLimits

0xdc53,	// (0x00050cba) popup_note_window_t3

0xdc69,	// (0x00050cd0) popup_note_window_t4_ParamLimits

0xdc69,	// (0x00050cd0) popup_note_window_t4

0xdc91,	// (0x00050cf8) popup_note_window_t5_ParamLimits

0xdc91,	// (0x00050cf8) popup_note_window_t5

0x0004,

0xf57f,	// (0x000525e6) popup_note_window_t_ParamLimits

0xf57f,	// (0x000525e6) popup_note_window_t

0xdcb5,	// (0x00050d1c) bg_popup_window_pane_cp6_ParamLimits

0xdcb5,	// (0x00050d1c) bg_popup_window_pane_cp6

0x9893,	// (0x0004c8fa) popup_note_image_window_g1_ParamLimits

0x9893,	// (0x0004c8fa) popup_note_image_window_g1

0x989f,	// (0x0004c906) popup_note_image_window_g2_ParamLimits

0x989f,	// (0x0004c906) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x000528c6) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x000528c6) popup_note_image_window_g

0x98b8,	// (0x0004c91f) popup_note_image_window_t1_ParamLimits

0x98b8,	// (0x0004c91f) popup_note_image_window_t1

0x98d1,	// (0x0004c938) popup_note_image_window_t2_ParamLimits

0x98d1,	// (0x0004c938) popup_note_image_window_t2

0x98ea,	// (0x0004c951) popup_note_image_window_t3_ParamLimits

0x98ea,	// (0x0004c951) popup_note_image_window_t3

0x0002,

0xf864,	// (0x000528cb) popup_note_image_window_t_ParamLimits

0xf864,	// (0x000528cb) popup_note_image_window_t

0x9753,	// (0x0004c7ba) bg_popup_window_pane_cp7_ParamLimits

0x9753,	// (0x0004c7ba) bg_popup_window_pane_cp7

0x9783,	// (0x0004c7ea) popup_note_wait_window_g1_ParamLimits

0x9783,	// (0x0004c7ea) popup_note_wait_window_g1

0x978f,	// (0x0004c7f6) popup_note_wait_window_g2_ParamLimits

0x978f,	// (0x0004c7f6) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x000528b4) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x000528b4) popup_note_wait_window_g

0x97a7,	// (0x0004c80e) popup_note_wait_window_t1_ParamLimits

0x97a7,	// (0x0004c80e) popup_note_wait_window_t1

0x97ce,	// (0x0004c835) popup_note_wait_window_t2_ParamLimits

0x97ce,	// (0x0004c835) popup_note_wait_window_t2

0x97ec,	// (0x0004c853) popup_note_wait_window_t3_ParamLimits

0x97ec,	// (0x0004c853) popup_note_wait_window_t3

0x97ff,	// (0x0004c866) popup_note_wait_window_t4_ParamLimits

0x97ff,	// (0x0004c866) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x000528bb) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x000528bb) popup_note_wait_window_t

0x9824,	// (0x0004c88b) wait_bar_pane_ParamLimits

0x9824,	// (0x0004c88b) wait_bar_pane

0xda72,	// (0x00050ad9) wait_anim_pane

0xda72,	// (0x00050ad9) wait_border_pane

0xda68,	// (0x00050acf) wait_anim_pane_g1

0xda68,	// (0x00050acf) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005276f) wait_anim_pane_g

0x96f7,	// (0x0004c75e) wait_border_pane_g1

0x9702,	// (0x0004c769) wait_border_pane_g2

0x970b,	// (0x0004c772) wait_border_pane_g3

0x0002,

0xf846,	// (0x000528ad) wait_border_pane_g

0x9561,	// (0x0004c5c8) bg_popup_window_pane_cp16_ParamLimits

0x9561,	// (0x0004c5c8) bg_popup_window_pane_cp16

0x9661,	// (0x0004c6c8) indicator_popup_pane_cp4_ParamLimits

0x9661,	// (0x0004c6c8) indicator_popup_pane_cp4

0x9675,	// (0x0004c6dc) popup_query_data_window_t1_ParamLimits

0x9675,	// (0x0004c6dc) popup_query_data_window_t1

0x9687,	// (0x0004c6ee) popup_query_data_window_t2_ParamLimits

0x9687,	// (0x0004c6ee) popup_query_data_window_t2

0x96a0,	// (0x0004c707) popup_query_data_window_t3_ParamLimits

0x96a0,	// (0x0004c707) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x000528a6) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x000528a6) popup_query_data_window_t

0x96ba,	// (0x0004c721) query_popup_data_pane_ParamLimits

0x96ba,	// (0x0004c721) query_popup_data_pane

0x96ce,	// (0x0004c735) query_popup_data_pane_cp1_ParamLimits

0x96ce,	// (0x0004c735) query_popup_data_pane_cp1

0x9561,	// (0x0004c5c8) bg_popup_window_pane_cp10_ParamLimits

0x9561,	// (0x0004c5c8) bg_popup_window_pane_cp10

0x9593,	// (0x0004c5fa) indicator_popup_pane_ParamLimits

0x9593,	// (0x0004c5fa) indicator_popup_pane

0x95b5,	// (0x0004c61c) popup_query_code_window_t1_ParamLimits

0x95b5,	// (0x0004c61c) popup_query_code_window_t1

0x95cf,	// (0x0004c636) popup_query_code_window_t2_ParamLimits

0x95cf,	// (0x0004c636) popup_query_code_window_t2

0x9618,	// (0x0004c67f) popup_query_code_window_t3_ParamLimits

0x9618,	// (0x0004c67f) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0005289f) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0005289f) popup_query_code_window_t

0x9647,	// (0x0004c6ae) query_popup_pane_ParamLimits

0x9647,	// (0x0004c6ae) query_popup_pane

0xdcb5,	// (0x00050d1c) bg_popup_window_pane_cp15_ParamLimits

0xdcb5,	// (0x00050d1c) bg_popup_window_pane_cp15

0xdcd5,	// (0x00050d3c) indicator_popup_pane_cp1_ParamLimits

0xdcd5,	// (0x00050d3c) indicator_popup_pane_cp1

0xdce8,	// (0x00050d4f) indicator_popup_pane_cp2_ParamLimits

0xdce8,	// (0x00050d4f) indicator_popup_pane_cp2

0xdd03,	// (0x00050d6a) popup_query_data_code_window_g1_ParamLimits

0xdd03,	// (0x00050d6a) popup_query_data_code_window_g1

0xdd16,	// (0x00050d7d) popup_query_data_code_window_t1_ParamLimits

0xdd16,	// (0x00050d7d) popup_query_data_code_window_t1

0xdd28,	// (0x00050d8f) popup_query_data_code_window_t2_ParamLimits

0xdd28,	// (0x00050d8f) popup_query_data_code_window_t2

0xdd3a,	// (0x00050da1) popup_query_data_code_window_t3_ParamLimits

0xdd3a,	// (0x00050da1) popup_query_data_code_window_t3

0xdd50,	// (0x00050db7) popup_query_data_code_window_t4_ParamLimits

0xdd50,	// (0x00050db7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000525f1) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000525f1) popup_query_data_code_window_t

0x0fa2,	// (0x00044009) list_single_midp_graphic_pane_g3

0xdd6a,	// (0x00050dd1) query_popup_data_pane_cp2_ParamLimits

0xdd7d,	// (0x00050de4) query_popup_pane_cp2_ParamLimits

0xdd7d,	// (0x00050de4) query_popup_pane_cp2

0xda72,	// (0x00050ad9) bg_popup_window_pane_cp11

0x9559,	// (0x0004c5c0) heading_pane_cp5

0xde13,	// (0x00050e7a) listscroll_popup_info_pane

0xda72,	// (0x00050ad9) input_focus_pane_cp3

0xdd98,	// (0x00050dff) query_popup_pane_t1

0xdda6,	// (0x00050e0d) list_popup_info_pane_ParamLimits

0xdda6,	// (0x00050e0d) list_popup_info_pane

0xddb5,	// (0x00050e1c) listscroll_popup_info_pane_g1

0xddbd,	// (0x00050e24) scroll_pane_cp7

0xddc7,	// (0x00050e2e) popup_info_list_pane_t1_ParamLimits

0xddc7,	// (0x00050e2e) popup_info_list_pane_t1

0xdde1,	// (0x00050e48) popup_info_list_pane_t2_ParamLimits

0xdde1,	// (0x00050e48) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000525fa) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000525fa) popup_info_list_pane_t

0xda72,	// (0x00050ad9) bg_popup_window_pane_cp12

0xa938,	// (0x0004d99f) find_popup_pane

0xdacc,	// (0x00050b33) bg_popup_window_pane_cp3

0xddfb,	// (0x00050e62) heading_pane_cp3

0xde07,	// (0x00050e6e) listscroll_popup_graphic_pane

0xda72,	// (0x00050ad9) bg_popup_window_pane_cp4

0x6325,	// (0x0004938c) heading_pane_cp4

0xde13,	// (0x00050e7a) listscroll_popup_colour_pane

0x632f,	// (0x00049396) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x632f,	// (0x00049396) cell_large_graphic_colour_none_popup_pane

0x6343,	// (0x000493aa) grid_large_graphic_colour_popup_pane_ParamLimits

0x6343,	// (0x000493aa) grid_large_graphic_colour_popup_pane

0x636f,	// (0x000493d6) listscroll_popup_colour_pane_g1_ParamLimits

0x636f,	// (0x000493d6) listscroll_popup_colour_pane_g1

0x6386,	// (0x000493ed) listscroll_popup_colour_pane_g2_ParamLimits

0x6386,	// (0x000493ed) listscroll_popup_colour_pane_g2

0x639d,	// (0x00049404) listscroll_popup_colour_pane_g3_ParamLimits

0x639d,	// (0x00049404) listscroll_popup_colour_pane_g3

0x63ad,	// (0x00049414) listscroll_popup_colour_pane_g4_ParamLimits

0x63ad,	// (0x00049414) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000525ff) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000525ff) listscroll_popup_colour_pane_g

0xde1b,	// (0x00050e82) scroll_pane_cp6_ParamLimits

0xde1b,	// (0x00050e82) scroll_pane_cp6

0x63c1,	// (0x00049428) cell_large_graphic_colour_popup_pane_ParamLimits

0x63c1,	// (0x00049428) cell_large_graphic_colour_popup_pane

0xde2d,	// (0x00050e94) cell_large_graphic_colour_none_popup_pane_t1

0xda72,	// (0x00050ad9) grid_highlight_pane_cp5

0xde3c,	// (0x00050ea3) cell_large_graphic_colour_popup_pane_g1

0xde44,	// (0x00050eab) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00052608) cell_large_graphic_colour_popup_pane_g

0xde4c,	// (0x00050eb3) cell_large_graphic_colour_popup_pane_g2_copy1

0xde55,	// (0x00050ebc) grid_highlight_pane_cp4

0xde5d,	// (0x00050ec4) bg_popup_window_pane_cp8_ParamLimits

0xde5d,	// (0x00050ec4) bg_popup_window_pane_cp8

0xde78,	// (0x00050edf) popup_snote_single_text_window_g1_ParamLimits

0xde78,	// (0x00050edf) popup_snote_single_text_window_g1

0xde8a,	// (0x00050ef1) popup_snote_single_text_window_t1_ParamLimits

0xde8a,	// (0x00050ef1) popup_snote_single_text_window_t1

0xde9d,	// (0x00050f04) popup_snote_single_text_window_t2_ParamLimits

0xde9d,	// (0x00050f04) popup_snote_single_text_window_t2

0xdeb0,	// (0x00050f17) popup_snote_single_text_window_t3_ParamLimits

0xdeb0,	// (0x00050f17) popup_snote_single_text_window_t3

0xdee9,	// (0x00050f50) popup_snote_single_text_window_t4_ParamLimits

0xdee9,	// (0x00050f50) popup_snote_single_text_window_t4

0xdf1d,	// (0x00050f84) popup_snote_single_text_window_t5_ParamLimits

0xdf1d,	// (0x00050f84) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005260d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005260d) popup_snote_single_text_window_t

0xdf4c,	// (0x00050fb3) bg_popup_window_pane_cp9_ParamLimits

0xdf4c,	// (0x00050fb3) bg_popup_window_pane_cp9

0xde78,	// (0x00050edf) popup_snote_single_graphic_window_g1_ParamLimits

0xde78,	// (0x00050edf) popup_snote_single_graphic_window_g1

0xdf5a,	// (0x00050fc1) popup_snote_single_graphic_window_g2_ParamLimits

0xdf5a,	// (0x00050fc1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00052618) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00052618) popup_snote_single_graphic_window_g

0xdf66,	// (0x00050fcd) popup_snote_single_graphic_window_t1_ParamLimits

0xdf66,	// (0x00050fcd) popup_snote_single_graphic_window_t1

0xdf79,	// (0x00050fe0) popup_snote_single_graphic_window_t2_ParamLimits

0xdf79,	// (0x00050fe0) popup_snote_single_graphic_window_t2

0xdf8c,	// (0x00050ff3) popup_snote_single_graphic_window_t3_ParamLimits

0xdf8c,	// (0x00050ff3) popup_snote_single_graphic_window_t3

0xdfc5,	// (0x0005102c) popup_snote_single_graphic_window_t4_ParamLimits

0xdfc5,	// (0x0005102c) popup_snote_single_graphic_window_t4

0xdff9,	// (0x00051060) popup_snote_single_graphic_window_t5_ParamLimits

0xdff9,	// (0x00051060) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005261d) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005261d) popup_snote_single_graphic_window_t

0xa876,	// (0x0004d8dd) grid_graphic_popup_pane_ParamLimits

0xa876,	// (0x0004d8dd) grid_graphic_popup_pane

0xa8a4,	// (0x0004d90b) listscroll_popup_graphic_pane_g1_ParamLimits

0xa8a4,	// (0x0004d90b) listscroll_popup_graphic_pane_g1

0xa8b8,	// (0x0004d91f) listscroll_popup_graphic_pane_g2_ParamLimits

0xa8b8,	// (0x0004d91f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00052a1c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00052a1c) listscroll_popup_graphic_pane_g

0xa8cc,	// (0x0004d933) scroll_pane_cp5

0xa81e,	// (0x0004d885) cell_graphic_popup_pane_ParamLimits

0xa81e,	// (0x0004d885) cell_graphic_popup_pane

0xa7ff,	// (0x0004d866) cell_graphic_popup_pane_g1

0xa807,	// (0x0004d86e) cell_graphic_popup_pane_g2

0xde4c,	// (0x00050eb3) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00052a15) cell_graphic_popup_pane_g

0xa810,	// (0x0004d877) cell_graphic_popup_pane_t2

0xde55,	// (0x00050ebc) grid_highlight_pane_cp3

0xe03a,	// (0x000510a1) list_gen_pane_ParamLimits

0xe03a,	// (0x000510a1) list_gen_pane

0xe062,	// (0x000510c9) scroll_pane

0xa757,	// (0x0004d7be) bg_list_pane_g1_ParamLimits

0xa757,	// (0x0004d7be) bg_list_pane_g1

0xa774,	// (0x0004d7db) bg_list_pane_g2_ParamLimits

0xa774,	// (0x0004d7db) bg_list_pane_g2

0xa789,	// (0x0004d7f0) bg_list_pane_g3_ParamLimits

0xa789,	// (0x0004d7f0) bg_list_pane_g3

0xa79d,	// (0x0004d804) bg_list_pane_g4_ParamLimits

0xa79d,	// (0x0004d804) bg_list_pane_g4

0xa7b1,	// (0x0004d818) bg_list_pane_g5_ParamLimits

0xa7b1,	// (0x0004d818) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00052a0a) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00052a0a) bg_list_pane_g

0x74b3,	// (0x0004a51a) list_double2_graphic_large_graphic_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double2_graphic_large_graphic_pane

0x74b3,	// (0x0004a51a) list_double2_graphic_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double2_graphic_pane

0x74b3,	// (0x0004a51a) list_double2_large_graphic_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double2_large_graphic_pane

0x74b3,	// (0x0004a51a) list_double2_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double2_pane

0x74b3,	// (0x0004a51a) list_double_graphic_heading_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_graphic_heading_pane

0x74b3,	// (0x0004a51a) list_double_graphic_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_graphic_pane

0x74b3,	// (0x0004a51a) list_double_heading_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_heading_pane

0x74b3,	// (0x0004a51a) list_double_large_graphic_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_large_graphic_pane

0x74b3,	// (0x0004a51a) list_double_number_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_number_pane

0x74b3,	// (0x0004a51a) list_double_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_pane

0x74b3,	// (0x0004a51a) list_double_time_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_double_time_pane

0x74b3,	// (0x0004a51a) list_setting_number_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_setting_number_pane

0x74b3,	// (0x0004a51a) list_setting_pane_ParamLimits

0x74b3,	// (0x0004a51a) list_setting_pane

0xa713,	// (0x0004d77a) list_single_2graphic_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_2graphic_pane

0xa713,	// (0x0004d77a) list_single_graphic_heading_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_graphic_heading_pane

0xa713,	// (0x0004d77a) list_single_graphic_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_graphic_pane

0xa713,	// (0x0004d77a) list_single_heading_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_heading_pane

0x74db,	// (0x0004a542) list_single_large_graphic_pane_ParamLimits

0x74db,	// (0x0004a542) list_single_large_graphic_pane

0xa713,	// (0x0004d77a) list_single_number_heading_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_number_heading_pane

0xa713,	// (0x0004d77a) list_single_number_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_number_pane

0xa713,	// (0x0004d77a) list_single_pane_ParamLimits

0xa713,	// (0x0004d77a) list_single_pane

0xda72,	// (0x00050ad9) list_highlight_pane_cp1

0x1b35,	// (0x00044b9c) list_single_pane_g1_ParamLimits

0x1b35,	// (0x00044b9c) list_single_pane_g1

0x63f0,	// (0x00049457) list_single_pane_g2_ParamLimits

0x63f0,	// (0x00049457) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00052639) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00052639) list_single_pane_g

0x56dc,	// (0x00048743) list_single_pane_t1_ParamLimits

0x56dc,	// (0x00048743) list_single_pane_t1

0x1b35,	// (0x00044b9c) list_single_number_pane_g1_ParamLimits

0x1b35,	// (0x00044b9c) list_single_number_pane_g1

0x63f0,	// (0x00049457) list_single_number_pane_g2_ParamLimits

0x63f0,	// (0x00049457) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00052639) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00052639) list_single_number_pane_g

0x567e,	// (0x000486e5) list_single_number_pane_t1_ParamLimits

0x567e,	// (0x000486e5) list_single_number_pane_t1

0x5694,	// (0x000486fb) list_single_number_pane_t2_ParamLimits

0x5694,	// (0x000486fb) list_single_number_pane_t2

0x0001,

0xf964,	// (0x000529cb) list_single_number_pane_t_ParamLimits

0xf964,	// (0x000529cb) list_single_number_pane_t

0x4daf,	// (0x00047e16) list_single_graphic_pane_g1_ParamLimits

0x4daf,	// (0x00047e16) list_single_graphic_pane_g1

0x1b35,	// (0x00044b9c) list_single_graphic_pane_g2_ParamLimits

0x1b35,	// (0x00044b9c) list_single_graphic_pane_g2

0x63f0,	// (0x00049457) list_single_graphic_pane_g3_ParamLimits

0x63f0,	// (0x00049457) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00052628) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00052628) list_single_graphic_pane_g

0x4dbb,	// (0x00047e22) list_single_graphic_pane_t1_ParamLimits

0x4dbb,	// (0x00047e22) list_single_graphic_pane_t1

0x4dd1,	// (0x00047e38) list_single_heading_pane_g1_ParamLimits

0x4dd1,	// (0x00047e38) list_single_heading_pane_g1

0x63f0,	// (0x00049457) list_single_heading_pane_g2_ParamLimits

0x63f0,	// (0x00049457) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005262f) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005262f) list_single_heading_pane_g

0x4de4,	// (0x00047e4b) list_single_heading_pane_t1_ParamLimits

0x4de4,	// (0x00047e4b) list_single_heading_pane_t1

0x63fc,	// (0x00049463) list_single_heading_pane_t2_ParamLimits

0x63fc,	// (0x00049463) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00052634) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00052634) list_single_heading_pane_t

0x1b35,	// (0x00044b9c) list_single_number_heading_pane_g1_ParamLimits

0x1b35,	// (0x00044b9c) list_single_number_heading_pane_g1

0x63f0,	// (0x00049457) list_single_number_heading_pane_g2_ParamLimits

0x63f0,	// (0x00049457) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00052639) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00052639) list_single_number_heading_pane_g

0x4dfa,	// (0x00047e61) list_single_number_heading_pane_t1_ParamLimits

0x4dfa,	// (0x00047e61) list_single_number_heading_pane_t1

0x4e10,	// (0x00047e77) list_single_number_heading_pane_t2_ParamLimits

0x4e10,	// (0x00047e77) list_single_number_heading_pane_t2

0x4e22,	// (0x00047e89) list_single_number_heading_pane_t3_ParamLimits

0x4e22,	// (0x00047e89) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005263e) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005263e) list_single_number_heading_pane_t

0x4e34,	// (0x00047e9b) list_single_graphic_heading_pane_g1_ParamLimits

0x4e34,	// (0x00047e9b) list_single_graphic_heading_pane_g1

0x640e,	// (0x00049475) list_single_graphic_heading_pane_g4_ParamLimits

0x640e,	// (0x00049475) list_single_graphic_heading_pane_g4

0x63f0,	// (0x00049457) list_single_graphic_heading_pane_g5_ParamLimits

0x63f0,	// (0x00049457) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00052645) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00052645) list_single_graphic_heading_pane_g

0x4dfa,	// (0x00047e61) list_single_graphic_heading_pane_t1_ParamLimits

0x4dfa,	// (0x00047e61) list_single_graphic_heading_pane_t1

0x4e4c,	// (0x00047eb3) list_single_graphic_heading_pane_t2_ParamLimits

0x4e4c,	// (0x00047eb3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005264c) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005264c) list_single_graphic_heading_pane_t

0x641f,	// (0x00049486) list_single_large_graphic_pane_g1_ParamLimits

0x641f,	// (0x00049486) list_single_large_graphic_pane_g1

0x642b,	// (0x00049492) list_single_large_graphic_pane_g2_ParamLimits

0x642b,	// (0x00049492) list_single_large_graphic_pane_g2

0x6437,	// (0x0004949e) list_single_large_graphic_pane_g3_ParamLimits

0x6437,	// (0x0004949e) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00052651) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00052651) list_single_large_graphic_pane_g

0x9702,	// (0x0004c769) wait_border_pane_g2_copy1

0x6443,	// (0x000494aa) list_single_large_graphic_pane_g4_cp2

0x4e64,	// (0x00047ecb) list_single_large_graphic_pane_t1_ParamLimits

0x4e64,	// (0x00047ecb) list_single_large_graphic_pane_t1

0x644b,	// (0x000494b2) list_double_pane_g1_ParamLimits

0x644b,	// (0x000494b2) list_double_pane_g1

0x6457,	// (0x000494be) list_double_pane_g2_ParamLimits

0x6457,	// (0x000494be) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00052658) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00052658) list_double_pane_g

0x4e7a,	// (0x00047ee1) list_double_pane_t1_ParamLimits

0x4e7a,	// (0x00047ee1) list_double_pane_t1

0x4e90,	// (0x00047ef7) list_double_pane_t2_ParamLimits

0x4e90,	// (0x00047ef7) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005265d) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005265d) list_double_pane_t

0x4ea2,	// (0x00047f09) list_double2_pane_g1_ParamLimits

0x4ea2,	// (0x00047f09) list_double2_pane_g1

0x4eb3,	// (0x00047f1a) list_double2_pane_g2_ParamLimits

0x4eb3,	// (0x00047f1a) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00052662) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00052662) list_double2_pane_g

0x4ebf,	// (0x00047f26) list_double2_pane_t1_ParamLimits

0x4ebf,	// (0x00047f26) list_double2_pane_t1

0x4ed5,	// (0x00047f3c) list_double2_pane_t2_ParamLimits

0x4ed5,	// (0x00047f3c) list_double2_pane_t2

0x0001,

0xf600,	// (0x00052667) list_double2_pane_t_ParamLimits

0xf600,	// (0x00052667) list_double2_pane_t

0x644b,	// (0x000494b2) list_double_number_pane_g1_ParamLimits

0x644b,	// (0x000494b2) list_double_number_pane_g1

0x6457,	// (0x000494be) list_double_number_pane_g2_ParamLimits

0x6457,	// (0x000494be) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00052658) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00052658) list_double_number_pane_g

0x4ee7,	// (0x00047f4e) list_double_number_pane_t1_ParamLimits

0x4ee7,	// (0x00047f4e) list_double_number_pane_t1

0x4ef9,	// (0x00047f60) list_double_number_pane_t2_ParamLimits

0x4ef9,	// (0x00047f60) list_double_number_pane_t2

0x4f0f,	// (0x00047f76) list_double_number_pane_t3_ParamLimits

0x4f0f,	// (0x00047f76) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005266c) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005266c) list_double_number_pane_t

0x4f21,	// (0x00047f88) list_double_graphic_pane_g1_ParamLimits

0x4f21,	// (0x00047f88) list_double_graphic_pane_g1

0x4f2d,	// (0x00047f94) list_double_graphic_pane_g2_ParamLimits

0x4f2d,	// (0x00047f94) list_double_graphic_pane_g2

0x4f3c,	// (0x00047fa3) list_double_graphic_pane_g3_ParamLimits

0x4f3c,	// (0x00047fa3) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00052673) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00052673) list_double_graphic_pane_g

0x4f54,	// (0x00047fbb) list_double_graphic_pane_t1_ParamLimits

0x4f54,	// (0x00047fbb) list_double_graphic_pane_t1

0x4f6a,	// (0x00047fd1) list_double_graphic_pane_t2_ParamLimits

0x4f6a,	// (0x00047fd1) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005267c) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005267c) list_double_graphic_pane_t

0x4f7c,	// (0x00047fe3) list_double2_graphic_pane_g1_ParamLimits

0x4f7c,	// (0x00047fe3) list_double2_graphic_pane_g1

0x6463,	// (0x000494ca) list_double2_graphic_pane_g2_ParamLimits

0x6463,	// (0x000494ca) list_double2_graphic_pane_g2

0x646f,	// (0x000494d6) list_double2_graphic_pane_g3_ParamLimits

0x646f,	// (0x000494d6) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00052681) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00052681) list_double2_graphic_pane_g

0x4f88,	// (0x00047fef) list_double2_graphic_pane_t1_ParamLimits

0x4f88,	// (0x00047fef) list_double2_graphic_pane_t1

0x4f9e,	// (0x00048005) list_double2_graphic_pane_t2_ParamLimits

0x4f9e,	// (0x00048005) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00052688) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00052688) list_double2_graphic_pane_t

0x4fb0,	// (0x00048017) list_double_large_graphic_pane_g1_ParamLimits

0x4fb0,	// (0x00048017) list_double_large_graphic_pane_g1

0x4fdb,	// (0x00048042) list_double_large_graphic_pane_g2_ParamLimits

0x4fdb,	// (0x00048042) list_double_large_graphic_pane_g2

0x6457,	// (0x000494be) list_double_large_graphic_pane_g3_ParamLimits

0x6457,	// (0x000494be) list_double_large_graphic_pane_g3

0x4ff1,	// (0x00048058) list_double_large_graphic_pane_g4_ParamLimits

0x4ff1,	// (0x00048058) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005268d) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005268d) list_double_large_graphic_pane_g

0x5004,	// (0x0004806b) list_double_large_graphic_pane_t1_ParamLimits

0x5004,	// (0x0004806b) list_double_large_graphic_pane_t1

0x501d,	// (0x00048084) list_double_large_graphic_pane_t2_ParamLimits

0x501d,	// (0x00048084) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00052698) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00052698) list_double_large_graphic_pane_t

0x6490,	// (0x000494f7) list_double2_large_graphic_pane_g1_ParamLimits

0x6490,	// (0x000494f7) list_double2_large_graphic_pane_g1

0x502f,	// (0x00048096) list_double2_large_graphic_pane_g2_ParamLimits

0x502f,	// (0x00048096) list_double2_large_graphic_pane_g2

0x646f,	// (0x000494d6) list_double2_large_graphic_pane_g3_ParamLimits

0x646f,	// (0x000494d6) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005269d) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005269d) list_double2_large_graphic_pane_g

0x5040,	// (0x000480a7) list_double2_large_graphic_pane_t1_ParamLimits

0x5040,	// (0x000480a7) list_double2_large_graphic_pane_t1

0x5056,	// (0x000480bd) list_double2_large_graphic_pane_t2_ParamLimits

0x5056,	// (0x000480bd) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000526a4) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000526a4) list_double2_large_graphic_pane_t

0x5068,	// (0x000480cf) list_double_heading_pane_g1_ParamLimits

0x5068,	// (0x000480cf) list_double_heading_pane_g1

0x649c,	// (0x00049503) list_double_heading_pane_g2_ParamLimits

0x649c,	// (0x00049503) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000526a9) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000526a9) list_double_heading_pane_g

0x5079,	// (0x000480e0) list_double_heading_pane_t1_ParamLimits

0x5079,	// (0x000480e0) list_double_heading_pane_t1

0x508f,	// (0x000480f6) list_double_heading_pane_t2_ParamLimits

0x508f,	// (0x000480f6) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000526ae) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000526ae) list_double_heading_pane_t

0x4f21,	// (0x00047f88) list_double_graphic_heading_pane_g1_ParamLimits

0x4f21,	// (0x00047f88) list_double_graphic_heading_pane_g1

0x5068,	// (0x000480cf) list_double_graphic_heading_pane_g2_ParamLimits

0x5068,	// (0x000480cf) list_double_graphic_heading_pane_g2

0x649c,	// (0x00049503) list_double_graphic_heading_pane_g3_ParamLimits

0x649c,	// (0x00049503) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000526b3) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000526b3) list_double_graphic_heading_pane_g

0x50a1,	// (0x00048108) list_double_graphic_heading_pane_t1_ParamLimits

0x50a1,	// (0x00048108) list_double_graphic_heading_pane_t1

0x50b7,	// (0x0004811e) list_double_graphic_heading_pane_t2_ParamLimits

0x50b7,	// (0x0004811e) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000526ba) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000526ba) list_double_graphic_heading_pane_t

0x50c9,	// (0x00048130) list_double_time_pane_g1_ParamLimits

0x50c9,	// (0x00048130) list_double_time_pane_g1

0x50da,	// (0x00048141) list_double_time_pane_g2_ParamLimits

0x50da,	// (0x00048141) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000526bf) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000526bf) list_double_time_pane_g

0x50e6,	// (0x0004814d) list_double_time_pane_t1_ParamLimits

0x50e6,	// (0x0004814d) list_double_time_pane_t1

0x50fc,	// (0x00048163) list_double_time_pane_t2_ParamLimits

0x50fc,	// (0x00048163) list_double_time_pane_t2

0x510e,	// (0x00048175) list_double_time_pane_t3_ParamLimits

0x510e,	// (0x00048175) list_double_time_pane_t3

0x5120,	// (0x00048187) list_double_time_pane_t4_ParamLimits

0x5120,	// (0x00048187) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000526c4) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000526c4) list_double_time_pane_t

0x5132,	// (0x00048199) list_setting_pane_g1_ParamLimits

0x5132,	// (0x00048199) list_setting_pane_g1

0x513e,	// (0x000481a5) list_setting_pane_g2_ParamLimits

0x513e,	// (0x000481a5) list_setting_pane_g2

0x0001,

0xf666,	// (0x000526cd) list_setting_pane_g_ParamLimits

0xf666,	// (0x000526cd) list_setting_pane_g

0x514a,	// (0x000481b1) list_setting_pane_t1_ParamLimits

0x514a,	// (0x000481b1) list_setting_pane_t1

0x5164,	// (0x000481cb) list_setting_pane_t2_ParamLimits

0x5164,	// (0x000481cb) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000526d2) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000526d2) list_setting_pane_t

0x51a3,	// (0x0004820a) set_value_pane_cp_ParamLimits

0x51a3,	// (0x0004820a) set_value_pane_cp

0x51b1,	// (0x00048218) list_setting_number_pane_g1_ParamLimits

0x51b1,	// (0x00048218) list_setting_number_pane_g1

0x51bd,	// (0x00048224) list_setting_number_pane_g2_ParamLimits

0x51bd,	// (0x00048224) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000526d9) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000526d9) list_setting_number_pane_g

0x51c9,	// (0x00048230) list_setting_number_pane_t1_ParamLimits

0x51c9,	// (0x00048230) list_setting_number_pane_t1

0x51e2,	// (0x00048249) list_setting_number_pane_t2_ParamLimits

0x51e2,	// (0x00048249) list_setting_number_pane_t2

0x51fc,	// (0x00048263) list_setting_number_pane_t3_ParamLimits

0x51fc,	// (0x00048263) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000526de) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000526de) list_setting_number_pane_t

0x51a3,	// (0x0004820a) set_value_pane_ParamLimits

0x51a3,	// (0x0004820a) set_value_pane

0x0792,	// (0x000437f9) bg_set_opt_pane_ParamLimits

0x0792,	// (0x000437f9) bg_set_opt_pane

0x523f,	// (0x000482a6) set_value_pane_t1

0x07b3,	// (0x0004381a) slider_set_pane_cp3

0x07bc,	// (0x00043823) volume_small_pane_cp

0x07c5,	// (0x0004382c) list_form_gen_pane

0x07ce,	// (0x00043835) scroll_pane_cp8

0x5255,	// (0x000482bc) form_field_data_pane_ParamLimits

0x5255,	// (0x000482bc) form_field_data_pane

0x527d,	// (0x000482e4) form_field_data_wide_pane_ParamLimits

0x527d,	// (0x000482e4) form_field_data_wide_pane

0x52a4,	// (0x0004830b) form_field_popup_pane_ParamLimits

0x52a4,	// (0x0004830b) form_field_popup_pane

0x52c6,	// (0x0004832d) form_field_popup_wide_pane_ParamLimits

0x52c6,	// (0x0004832d) form_field_popup_wide_pane

0x52e7,	// (0x0004834e) form_field_slider_pane_ParamLimits

0x52e7,	// (0x0004834e) form_field_slider_pane

0x52fa,	// (0x00048361) form_field_slider_wide_pane_ParamLimits

0x52fa,	// (0x00048361) form_field_slider_wide_pane

0x07df,	// (0x00043846) data_form_pane

0x5317,	// (0x0004837e) form_field_data_pane_t1

0x07eb,	// (0x00043852) input_focus_pane

0x5331,	// (0x00048398) data_form_wide_pane

0x534e,	// (0x000483b5) form_field_data_wide_pane_t1

0xde6a,	// (0x00050ed1) input_focus_pane_cp6

0x5370,	// (0x000483d7) form_field_popup_pane_t1

0x07eb,	// (0x00043852) input_focus_pane_cp7

0x0819,	// (0x00043880) list_form_pane

0x5392,	// (0x000483f9) form_field_popup_wide_pane_t1

0x07eb,	// (0x00043852) input_focus_pane_cp8

0x0825,	// (0x0004388c) list_form_wide_pane

0x53af,	// (0x00048416) form_field_slider_pane_t1_ParamLimits

0x53af,	// (0x00048416) form_field_slider_pane_t1

0x53c7,	// (0x0004842e) form_field_slider_pane_t2_ParamLimits

0x53c7,	// (0x0004842e) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000526ee) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000526ee) form_field_slider_pane_t

0xdbff,	// (0x00050c66) input_focus_pane_cp9_ParamLimits

0xdbff,	// (0x00050c66) input_focus_pane_cp9

0x53dc,	// (0x00048443) slider_cont_pane_ParamLimits

0x53dc,	// (0x00048443) slider_cont_pane

0x0834,	// (0x0004389b) form_field_slider_wide_pane_t1_ParamLimits

0x0834,	// (0x0004389b) form_field_slider_wide_pane_t1

0x53f0,	// (0x00048457) form_field_slider_wide_pane_t2_ParamLimits

0x53f0,	// (0x00048457) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000526f3) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000526f3) form_field_slider_wide_pane_t

0xdbff,	// (0x00050c66) input_focus_pane_cp10_ParamLimits

0xdbff,	// (0x00050c66) input_focus_pane_cp10

0x5402,	// (0x00048469) slider_cont_pane_cp1_ParamLimits

0x5402,	// (0x00048469) slider_cont_pane_cp1

0x5416,	// (0x0004847d) slider_form_pane_cp

0x0846,	// (0x000438ad) input_focus_pane_g1

0x084e,	// (0x000438b5) input_focus_pane_g2

0x0856,	// (0x000438bd) input_focus_pane_g3

0x085e,	// (0x000438c5) input_focus_pane_g4

0x0866,	// (0x000438cd) input_focus_pane_g5

0x086e,	// (0x000438d5) input_focus_pane_g6

0x0876,	// (0x000438dd) input_focus_pane_g7

0x087e,	// (0x000438e5) input_focus_pane_g8

0x0886,	// (0x000438ed) input_focus_pane_g9

0xda68,	// (0x00050acf) input_focus_pane_g10

0x0009,

0xf691,	// (0x000526f8) input_focus_pane_g

0x970b,	// (0x0004c772) wait_border_pane_g3_copy1

0x541e,	// (0x00048485) data_form_pane_t1

0xda68,	// (0x00050acf) wait_anim_pane_g1_copy1

0x56a6,	// (0x0004870d) data_form_wide_pane_t1

0x543d,	// (0x000484a4) list_form_graphic_pane_cp_ParamLimits

0x543d,	// (0x000484a4) list_form_graphic_pane_cp

0xa66a,	// (0x0004d6d1) slider_form_pane_g1

0xa673,	// (0x0004d6da) slider_form_pane_g2

0x0006,

0xf994,	// (0x000529fb) slider_form_pane_g

0x543d,	// (0x000484a4) list_form_graphic_pane_ParamLimits

0x543d,	// (0x000484a4) list_form_graphic_pane

0x544f,	// (0x000484b6) list_form_graphic_pane_g1

0x5457,	// (0x000484be) list_form_graphic_pane_t1_ParamLimits

0x5457,	// (0x000484be) list_form_graphic_pane_t1

0xdacc,	// (0x00050b33) list_highlight_pane_cp5_ParamLimits

0xdacc,	// (0x00050b33) list_highlight_pane_cp5

0x64a8,	// (0x0004950f) find_pane_g1

0x088e,	// (0x000438f5) input_find_pane

0x546c,	// (0x000484d3) input_find_pane_g1_ParamLimits

0x546c,	// (0x000484d3) input_find_pane_g1

0x5478,	// (0x000484df) input_find_pane_t1_ParamLimits

0x5478,	// (0x000484df) input_find_pane_t1

0x548d,	// (0x000484f4) input_find_pane_t2_ParamLimits

0x548d,	// (0x000484f4) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005270d) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005270d) input_find_pane_t

0x0897,	// (0x000438fe) input_focus_pane_cp5_ParamLimits

0x0897,	// (0x000438fe) input_focus_pane_cp5

0x08a5,	// (0x0004390c) bg_popup_window_pane_cp2_ParamLimits

0x08a5,	// (0x0004390c) bg_popup_window_pane_cp2

0x08b2,	// (0x00043919) listscroll_menu_pane_ParamLimits

0x08b2,	// (0x00043919) listscroll_menu_pane

0x64bd,	// (0x00049524) popup_submenu_window_ParamLimits

0x64bd,	// (0x00049524) popup_submenu_window

0x08be,	// (0x00043925) find_popup_pane_g1

0x08c6,	// (0x0004392d) input_popup_find_pane_cp

0x0897,	// (0x000438fe) input_focus_pane_cp4_ParamLimits

0x0897,	// (0x000438fe) input_focus_pane_cp4

0x08d0,	// (0x00043937) input_popup_find_pane_t1_ParamLimits

0x08d0,	// (0x00043937) input_popup_find_pane_t1

0xda72,	// (0x00050ad9) bg_popup_sub_pane_cp

0x08fe,	// (0x00043965) listscroll_popup_sub_pane

0x0906,	// (0x0004396d) list_submenu_pane_ParamLimits

0x0906,	// (0x0004396d) list_submenu_pane

0x0917,	// (0x0004397e) scroll_pane_cp4

0x091f,	// (0x00043986) list_single_popup_submenu_pane_ParamLimits

0x091f,	// (0x00043986) list_single_popup_submenu_pane

0x0934,	// (0x0004399b) list_single_popup_submenu_pane_g1

0x093c,	// (0x000439a3) list_single_popup_submenu_pane_t1_ParamLimits

0x093c,	// (0x000439a3) list_single_popup_submenu_pane_t1

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp1_ParamLimits

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp1

0x64fb,	// (0x00049562) tabs_2_active_pane_g1

0x6503,	// (0x0004956a) tabs_2_active_pane_t1

0xdacc,	// (0x00050b33) bg_passive_tab_pane_cp1_ParamLimits

0xdacc,	// (0x00050b33) bg_passive_tab_pane_cp1

0x64fb,	// (0x00049562) tabs_2_passive_pane_g1

0x6503,	// (0x0004956a) tabs_2_passive_pane_t1

0x17bb,	// (0x00044822) bg_active_tab_pane_cp4

0x6515,	// (0x0004957c) tabs_2_long_active_pane_t1

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp4

0x7173,	// (0x0004a1da) list_single_midp_graphic_pane_g4_ParamLimits

0x17bb,	// (0x00044822) bg_active_tab_pane_cp5

0x6534,	// (0x0004959b) tabs_3_long_active_pane_t1

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp5

0x7173,	// (0x0004a1da) list_single_midp_graphic_pane_g4

0xdacc,	// (0x00050b33) bg_popup_window_pane_cp13_ParamLimits

0xdacc,	// (0x00050b33) bg_popup_window_pane_cp13

0x095a,	// (0x000439c1) listscroll_popup_fast_pane_ParamLimits

0x095a,	// (0x000439c1) listscroll_popup_fast_pane

0x0969,	// (0x000439d0) grid_popup_fast_pane_ParamLimits

0x0969,	// (0x000439d0) grid_popup_fast_pane

0x097b,	// (0x000439e2) scroll_pane_cp9_ParamLimits

0x097b,	// (0x000439e2) scroll_pane_cp9

0xbfeb,	// (0x0004f052) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbfeb,	// (0x0004f052) list_single_graphic_hl_pane_t1_cp2

0x099f,	// (0x00043a06) input_focus_pane_cp20_ParamLimits

0x099f,	// (0x00043a06) input_focus_pane_cp20

0x09ad,	// (0x00043a14) query_popup_data_pane_t1_ParamLimits

0x09ad,	// (0x00043a14) query_popup_data_pane_t1

0x09c0,	// (0x00043a27) query_popup_data_pane_t2_ParamLimits

0x09c0,	// (0x00043a27) query_popup_data_pane_t2

0x0a06,	// (0x00043a6d) query_popup_data_pane_t3_ParamLimits

0x0a06,	// (0x00043a6d) query_popup_data_pane_t3

0x0a47,	// (0x00043aae) query_popup_data_pane_t4_ParamLimits

0x0a47,	// (0x00043aae) query_popup_data_pane_t4

0x0a83,	// (0x00043aea) query_popup_data_pane_t5_ParamLimits

0x0a83,	// (0x00043aea) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00052712) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00052712) query_popup_data_pane_t

0x0846,	// (0x000438ad) bg_set_opt_pane_g1

0x084e,	// (0x000438b5) bg_set_opt_pane_g2

0x0856,	// (0x000438bd) bg_set_opt_pane_g3

0x085e,	// (0x000438c5) bg_set_opt_pane_g4

0x0866,	// (0x000438cd) bg_set_opt_pane_g5

0x086e,	// (0x000438d5) bg_set_opt_pane_g6

0x0876,	// (0x000438dd) bg_set_opt_pane_g7

0x087e,	// (0x000438e5) bg_set_opt_pane_g8

0x0886,	// (0x000438ed) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005271d) bg_set_opt_pane_g

0x69c6,	// (0x00049a2d) control_top_pane_stacon_ParamLimits

0x69c6,	// (0x00049a2d) control_top_pane_stacon

0x6a19,	// (0x00049a80) signal_pane_stacon_ParamLimits

0x6a19,	// (0x00049a80) signal_pane_stacon

0x0e9a,	// (0x00043f01) stacon_top_pane_g1_ParamLimits

0x0e9a,	// (0x00043f01) stacon_top_pane_g1

0x6a3e,	// (0x00049aa5) title_pane_stacon_ParamLimits

0x6a3e,	// (0x00049aa5) title_pane_stacon

0x6a68,	// (0x00049acf) uni_indicator_pane_stacon_ParamLimits

0x6a68,	// (0x00049acf) uni_indicator_pane_stacon

0x6a80,	// (0x00049ae7) battery_pane_stacon_ParamLimits

0x6a80,	// (0x00049ae7) battery_pane_stacon

0x6ac4,	// (0x00049b2b) control_bottom_pane_stacon_ParamLimits

0x6ac4,	// (0x00049b2b) control_bottom_pane_stacon

0x6ae7,	// (0x00049b4e) navi_pane_stacon_ParamLimits

0x6ae7,	// (0x00049b4e) navi_pane_stacon

0x0ebc,	// (0x00043f23) stacon_bottom_pane_g1_ParamLimits

0x0ebc,	// (0x00043f23) stacon_bottom_pane_g1

0x6546,	// (0x000495ad) aid_levels_signal_lsc_ParamLimits

0x6546,	// (0x000495ad) aid_levels_signal_lsc

0x655d,	// (0x000495c4) signal_pane_stacon_g1_ParamLimits

0x655d,	// (0x000495c4) signal_pane_stacon_g1

0x6571,	// (0x000495d8) signal_pane_stacon_g2_ParamLimits

0x6571,	// (0x000495d8) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00052730) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00052730) signal_pane_stacon_g

0x65a6,	// (0x0004960d) title_pane_stacon_t1_ParamLimits

0x65a6,	// (0x0004960d) title_pane_stacon_t1

0x0adb,	// (0x00043b42) uni_indicator_pane_stacon_g1

0x0ae5,	// (0x00043b4c) uni_indicator_pane_stacon_g2

0x0ac7,	// (0x00043b2e) uni_indicator_pane_stacon_g3

0x0ad1,	// (0x00043b38) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005273c) uni_indicator_pane_stacon_g

0x65cb,	// (0x00049632) control_top_pane_stacon_g1

0x65d3,	// (0x0004963a) control_top_pane_stacon_t1_ParamLimits

0x65d3,	// (0x0004963a) control_top_pane_stacon_t1

0x660a,	// (0x00049671) aid_levels_battery_lsc_ParamLimits

0x660a,	// (0x00049671) aid_levels_battery_lsc

0x6622,	// (0x00049689) battery_pane_stacon_g1_ParamLimits

0x6622,	// (0x00049689) battery_pane_stacon_g1

0x6635,	// (0x0004969c) battery_pane_stacon_g2_ParamLimits

0x6635,	// (0x0004969c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00052745) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00052745) battery_pane_stacon_g

0x6673,	// (0x000496da) navi_icon_pane_stacon

0x6687,	// (0x000496ee) navi_navi_pane_stacon

0x6673,	// (0x000496da) navi_text_pane_stacon

0x65cb,	// (0x00049632) control_bottom_pane_stacon_g1

0x669d,	// (0x00049704) control_bottom_pane_stacon_t1_ParamLimits

0x669d,	// (0x00049704) control_bottom_pane_stacon_t1

0x66d4,	// (0x0004973b) grid_app_pane_ParamLimits

0x66d4,	// (0x0004973b) grid_app_pane

0x66f8,	// (0x0004975f) scroll_pane_cp15_ParamLimits

0x66f8,	// (0x0004975f) scroll_pane_cp15

0x670b,	// (0x00049772) cell_app_pane_ParamLimits

0x670b,	// (0x00049772) cell_app_pane

0x6737,	// (0x0004979e) cell_app_pane_g1_ParamLimits

0x6737,	// (0x0004979e) cell_app_pane_g1

0x0b09,	// (0x00043b70) cell_app_pane_g2_ParamLimits

0x0b09,	// (0x00043b70) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005274a) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005274a) cell_app_pane_g

0x0b15,	// (0x00043b7c) cell_app_pane_t1_ParamLimits

0x0b15,	// (0x00043b7c) cell_app_pane_t1

0x0b2c,	// (0x00043b93) grid_highlight_pane_ParamLimits

0x0b2c,	// (0x00043b93) grid_highlight_pane

0x0846,	// (0x000438ad) cell_highlight_pane_g1

0x084e,	// (0x000438b5) cell_highlight_pane_g2

0x0856,	// (0x000438bd) cell_highlight_pane_g3

0x085e,	// (0x000438c5) cell_highlight_pane_g4

0x0866,	// (0x000438cd) cell_highlight_pane_g5

0x086e,	// (0x000438d5) cell_highlight_pane_g6

0x0876,	// (0x000438dd) cell_highlight_pane_g7

0x087e,	// (0x000438e5) cell_highlight_pane_g8

0x0886,	// (0x000438ed) cell_highlight_pane_g9

0xda68,	// (0x00050acf) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000526f8) cell_highlight_pane_g

0x0b3d,	// (0x00043ba4) bg_scroll_pane

0x676a,	// (0x000497d1) scroll_handle_pane

0x0b84,	// (0x00043beb) scroll_bg_pane_g1

0x0b99,	// (0x00043c00) scroll_bg_pane_g2

0x0bb1,	// (0x00043c18) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005274f) scroll_bg_pane_g

0x0bc6,	// (0x00043c2d) scroll_handle_focus_pane_ParamLimits

0x0bc6,	// (0x00043c2d) scroll_handle_focus_pane

0x0b84,	// (0x00043beb) scroll_handle_pane_g1

0x0bd3,	// (0x00043c3a) scroll_handle_pane_g2

0x0bb1,	// (0x00043c18) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00052756) scroll_handle_pane_g

0x0897,	// (0x000438fe) bg_popup_sub_pane_cp21_ParamLimits

0x0897,	// (0x000438fe) bg_popup_sub_pane_cp21

0x0be7,	// (0x00043c4e) popup_fep_japan_predictive_window_t1_ParamLimits

0x0be7,	// (0x00043c4e) popup_fep_japan_predictive_window_t1

0x0bfe,	// (0x00043c65) popup_fep_japan_predictive_window_t2_ParamLimits

0x0bfe,	// (0x00043c65) popup_fep_japan_predictive_window_t2

0x0c31,	// (0x00043c98) popup_fep_japan_predictive_window_t3_ParamLimits

0x0c31,	// (0x00043c98) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005275d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005275d) popup_fep_japan_predictive_window_t

0xda72,	// (0x00050ad9) bg_popup_sub_pane_cp23

0x0c68,	// (0x00043ccf) listscroll_japin_cand_pane

0x0c70,	// (0x00043cd7) popup_fep_japan_candidate_window_t1

0x0c7e,	// (0x00043ce5) candidate_pane_ParamLimits

0x0c7e,	// (0x00043ce5) candidate_pane

0x0c90,	// (0x00043cf7) scroll_pane_cp30

0x0c9a,	// (0x00043d01) list_single_popup_jap_candidate_pane_ParamLimits

0x0c9a,	// (0x00043d01) list_single_popup_jap_candidate_pane

0xda72,	// (0x00050ad9) list_highlight_pane_cp30

0x0cae,	// (0x00043d15) list_single_popup_jap_candidate_pane_t1

0x6793,	// (0x000497fa) level_1_signal

0x67a0,	// (0x00049807) level_2_signal

0x67ad,	// (0x00049814) level_3_signal

0x67ba,	// (0x00049821) level_4_signal

0x67c7,	// (0x0004982e) level_5_signal

0x67d4,	// (0x0004983b) level_6_signal

0x67e1,	// (0x00049848) level_7_signal

0x6793,	// (0x000497fa) level_1_battery

0x67a0,	// (0x00049807) level_2_battery

0x67ad,	// (0x00049814) level_3_battery

0x67ba,	// (0x00049821) level_4_battery

0x67c7,	// (0x0004982e) level_5_battery

0x67d4,	// (0x0004983b) level_6_battery

0x67e1,	// (0x00049848) level_7_battery

0x0cd5,	// (0x00043d3c) list_menu_pane_ParamLimits

0x0cd5,	// (0x00043d3c) list_menu_pane

0x0ceb,	// (0x00043d52) scroll_pane_cp25_ParamLimits

0x0ceb,	// (0x00043d52) scroll_pane_cp25

0x0d04,	// (0x00043d6b) list_double2_graphic_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double2_graphic_pane_cp2

0x0d04,	// (0x00043d6b) list_double2_large_graphic_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double2_large_graphic_pane_cp2

0x0d04,	// (0x00043d6b) list_double2_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double2_pane_cp2

0x0d04,	// (0x00043d6b) list_double_graphic_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double_graphic_pane_cp2

0x0d04,	// (0x00043d6b) list_double_large_graphic_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double_large_graphic_pane_cp2

0x0d04,	// (0x00043d6b) list_double_number_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double_number_pane_cp2

0x0d04,	// (0x00043d6b) list_double_pane_cp2_ParamLimits

0x0d04,	// (0x00043d6b) list_double_pane_cp2

0x6823,	// (0x0004988a) list_single_2graphic_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_2graphic_pane_cp2

0x6823,	// (0x0004988a) list_single_graphic_heading_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_graphic_heading_pane_cp2

0x6823,	// (0x0004988a) list_single_graphic_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_graphic_pane_cp2

0x6823,	// (0x0004988a) list_single_heading_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_heading_pane_cp2

0x0d14,	// (0x00043d7b) list_single_large_graphic_pane_cp2_ParamLimits

0x0d14,	// (0x00043d7b) list_single_large_graphic_pane_cp2

0x6823,	// (0x0004988a) list_single_number_heading_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_number_heading_pane_cp2

0x6823,	// (0x0004988a) list_single_number_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_number_pane_cp2

0x6823,	// (0x0004988a) list_single_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_pane_cp2

0x0d2d,	// (0x00043d94) bg_popup_sub_pane_cp22

0x690c,	// (0x00049973) popup_side_volume_key_window_g1

0x6936,	// (0x0004999d) popup_side_volume_key_window_t1

0x6954,	// (0x000499bb) volume_small_pane_cp1

0xdbff,	// (0x00050c66) bg_popup_sub_pane_cp24_ParamLimits

0xdbff,	// (0x00050c66) bg_popup_sub_pane_cp24

0x0d43,	// (0x00043daa) fep_china_uni_candidate_pane_ParamLimits

0x0d43,	// (0x00043daa) fep_china_uni_candidate_pane

0x0d57,	// (0x00043dbe) fep_china_uni_entry_pane

0x0d67,	// (0x00043dce) popup_fep_china_uni_window_g1

0x0d83,	// (0x00043dea) fep_china_uni_entry_pane_g1

0x0d8d,	// (0x00043df4) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005278e) fep_china_uni_entry_pane_g

0x0d97,	// (0x00043dfe) fep_entry_item_pane

0x0da1,	// (0x00043e08) fep_candidate_item_pane

0x0da9,	// (0x00043e10) fep_china_uni_candidate_pane_g1

0x0db3,	// (0x00043e1a) fep_china_uni_candidate_pane_g2

0x0dbb,	// (0x00043e22) fep_china_uni_candidate_pane_g3

0x0dc3,	// (0x00043e2a) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00052793) fep_china_uni_candidate_pane_g

0xda68,	// (0x00050acf) fep_entry_item_pane_g1

0x0dcd,	// (0x00043e34) fep_entry_item_pane_t1_ParamLimits

0x0dcd,	// (0x00043e34) fep_entry_item_pane_t1

0x0de3,	// (0x00043e4a) fep_candidate_item_pane_t1_ParamLimits

0x0de3,	// (0x00043e4a) fep_candidate_item_pane_t1

0x0df8,	// (0x00043e5f) fep_candidate_item_pane_t2_ParamLimits

0x0df8,	// (0x00043e5f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005279c) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005279c) fep_candidate_item_pane_t

0xdacc,	// (0x00050b33) list_highlight_pane_cp31_ParamLimits

0xdacc,	// (0x00050b33) list_highlight_pane_cp31

0x0e0a,	// (0x00043e71) level_1_signal_lsc

0x0e13,	// (0x00043e7a) level_2_signal_lsc

0x0e1c,	// (0x00043e83) level_3_signal_lsc

0x0e25,	// (0x00043e8c) level_4_signal_lsc

0x0e2e,	// (0x00043e95) level_5_signal_lsc

0x0e37,	// (0x00043e9e) level_6_signal_lsc

0x0e40,	// (0x00043ea7) level_7_signal_lsc

0x0e40,	// (0x00043ea7) level_1_battery_lsc

0x0e49,	// (0x00043eb0) level_2_battery_lsc

0x0e52,	// (0x00043eb9) level_3_battery_lsc

0x0e5b,	// (0x00043ec2) level_4_battery_lsc

0x0e64,	// (0x00043ecb) level_5_battery_lsc

0x0e6d,	// (0x00043ed4) level_6_battery_lsc

0x0e0a,	// (0x00043e71) level_7_battery_lsc

0x0e76,	// (0x00043edd) scroll_handle_focus_pane_g1

0x0e7f,	// (0x00043ee6) scroll_handle_focus_pane_g2

0x0e88,	// (0x00043eef) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000527a1) scroll_handle_focus_pane_g

0x54a2,	// (0x00048509) list_single_2graphic_pane_g1_ParamLimits

0x54a2,	// (0x00048509) list_single_2graphic_pane_g1

0x640e,	// (0x00049475) list_single_2graphic_pane_g2_ParamLimits

0x640e,	// (0x00049475) list_single_2graphic_pane_g2

0x63f0,	// (0x00049457) list_single_2graphic_pane_g3_ParamLimits

0x63f0,	// (0x00049457) list_single_2graphic_pane_g3

0x695c,	// (0x000499c3) list_single_2graphic_pane_g4_ParamLimits

0x695c,	// (0x000499c3) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000527a8) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000527a8) list_single_2graphic_pane_g

0x54ae,	// (0x00048515) list_single_2graphic_pane_t1_ParamLimits

0x54ae,	// (0x00048515) list_single_2graphic_pane_t1

0x6968,	// (0x000499cf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6968,	// (0x000499cf) list_double2_graphic_large_graphic_pane_g1

0x502f,	// (0x00048096) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x502f,	// (0x00048096) list_double2_graphic_large_graphic_pane_g2

0x646f,	// (0x000494d6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x646f,	// (0x000494d6) list_double2_graphic_large_graphic_pane_g3

0x54dc,	// (0x00048543) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x54dc,	// (0x00048543) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000527b1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000527b1) list_double2_graphic_large_graphic_pane_g

0x54e8,	// (0x0004854f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x54e8,	// (0x0004854f) list_double2_graphic_large_graphic_pane_t1

0x54fe,	// (0x00048565) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x54fe,	// (0x00048565) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000527ba) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000527ba) list_double2_graphic_large_graphic_pane_t

0x0f1a,	// (0x00043f81) popup_fast_swap_window_ParamLimits

0x0f1a,	// (0x00043f81) popup_fast_swap_window

0x0f38,	// (0x00043f9f) popup_side_volume_key_window

0x0f56,	// (0x00043fbd) stacon_top_pane

0x0f60,	// (0x00043fc7) status_pane_ParamLimits

0x0f60,	// (0x00043fc7) status_pane

0x6b6e,	// (0x00049bd5) status_small_pane

0xda72,	// (0x00050ad9) control_pane

0xda72,	// (0x00050ad9) stacon_bottom_pane

0x07ce,	// (0x00043835) scroll_pane_cp121

0x07c5,	// (0x0004382c) set_content_pane

0x697a,	// (0x000499e1) bg_active_tab_pane_g1_cp1

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp1

0x6983,	// (0x000499ea) bg_active_tab_pane_g3_cp1

0x697a,	// (0x000499e1) bg_passive_tab_pane_g1_cp1

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp1

0x6983,	// (0x000499ea) bg_passive_tab_pane_g3_cp1

0x698c,	// (0x000499f3) bg_active_tab_pane_g1_cp2

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp2

0x6995,	// (0x000499fc) bg_active_tab_pane_g3_cp2

0x698c,	// (0x000499f3) bg_passive_tab_pane_g1_cp2

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp2

0x6995,	// (0x000499fc) bg_passive_tab_pane_g3_cp2

0x699e,	// (0x00049a05) bg_active_tab_pane_g1_cp3

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp3

0x69a7,	// (0x00049a0e) bg_active_tab_pane_g3_cp3

0x699e,	// (0x00049a05) bg_passive_tab_pane_g1_cp3

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp3

0x69a7,	// (0x00049a0e) bg_passive_tab_pane_g3_cp3

0x69b0,	// (0x00049a17) bg_active_tab_pane_g1_cp4

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp4

0x69bb,	// (0x00049a22) bg_active_tab_pane_g3_cp4

0x69b0,	// (0x00049a17) bg_passive_tab_pane_g1_cp4

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp4

0x69bb,	// (0x00049a22) bg_passive_tab_pane_g3_cp4

0x0ee1,	// (0x00043f48) bg_active_tab_pane_g1_cp5

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp5

0x0ed8,	// (0x00043f3f) bg_active_tab_pane_g3_cp5

0x0ee1,	// (0x00043f48) bg_passive_tab_pane_g1_cp5

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp5

0x0ed8,	// (0x00043f3f) bg_passive_tab_pane_g3_cp5

0x6b0a,	// (0x00049b71) list_set_graphic_pane_ParamLimits

0x6b0a,	// (0x00049b71) list_set_graphic_pane

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp4

0x6b1f,	// (0x00049b86) list_set_graphic_pane_g1_ParamLimits

0x6b1f,	// (0x00049b86) list_set_graphic_pane_g1

0x6b2b,	// (0x00049b92) list_set_graphic_pane_g2_ParamLimits

0x6b2b,	// (0x00049b92) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000527bf) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000527bf) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00052b40) volume_small_pane_cp_g

0x6b4f,	// (0x00049bb6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6b4f,	// (0x00049bb6) list_double2_large_graphic_pane_g1_cp2

0x6b5d,	// (0x00049bc4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6b5d,	// (0x00049bc4) list_double2_large_graphic_pane_g2_cp2

0x0eea,	// (0x00043f51) list_double2_large_graphic_pane_g3_cp2

0x0ef2,	// (0x00043f59) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0ef2,	// (0x00043f59) list_double2_large_graphic_pane_t1_cp2

0x0f08,	// (0x00043f6f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f08,	// (0x00043f6f) list_double2_large_graphic_pane_t2_cp2

0xa1ef,	// (0x0004d256) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa1ef,	// (0x0004d256) list_double_large_graphic_pane_g1_cp2

0xa202,	// (0x0004d269) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa202,	// (0x0004d269) list_double_large_graphic_pane_g2_cp2

0x1041,	// (0x000440a8) list_double_large_graphic_pane_g3_cp2

0xa213,	// (0x0004d27a) list_double_large_graphic_pane_g4_cp

0xa21b,	// (0x0004d282) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa21b,	// (0x0004d282) list_double_large_graphic_pane_t1_cp2

0xa232,	// (0x0004d299) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa232,	// (0x0004d299) list_double_large_graphic_pane_t2_cp2

0x6b79,	// (0x00049be0) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6b79,	// (0x00049be0) list_double2_graphic_pane_g1_cp2

0x6b87,	// (0x00049bee) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6b87,	// (0x00049bee) list_double2_graphic_pane_g2_cp2

0x6b98,	// (0x00049bff) list_double2_graphic_pane_g3_cp2

0x0f6e,	// (0x00043fd5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0f6e,	// (0x00043fd5) list_double2_graphic_pane_t1_cp2

0x0f84,	// (0x00043feb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0f84,	// (0x00043feb) list_double2_graphic_pane_t2_cp2

0x0f96,	// (0x00043ffd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0f96,	// (0x00043ffd) list_single_number_heading_pane_g1_cp2

0x0fa2,	// (0x00044009) list_single_number_heading_pane_g2_cp2

0x0faa,	// (0x00044011) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0faa,	// (0x00044011) list_single_number_heading_pane_t1_cp2

0x6ba2,	// (0x00049c09) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6ba2,	// (0x00049c09) list_single_number_heading_pane_t2_cp2

0x0fc0,	// (0x00044027) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0fc0,	// (0x00044027) list_single_number_heading_pane_t3_cp2

0x0f96,	// (0x00043ffd) list_single_heading_pane_g1_cp2_ParamLimits

0x0f96,	// (0x00043ffd) list_single_heading_pane_g1_cp2

0x0fa2,	// (0x00044009) list_single_heading_pane_g2_cp2

0x0faa,	// (0x00044011) list_single_heading_pane_t1_cp2_ParamLimits

0x0faa,	// (0x00044011) list_single_heading_pane_t1_cp2

0x9fe9,	// (0x0004d050) list_single_heading_pane_t2_cp2_ParamLimits

0x9fe9,	// (0x0004d050) list_single_heading_pane_t2_cp2

0x9f31,	// (0x0004cf98) list_double_graphic_pane_g1_cp2_ParamLimits

0x9f31,	// (0x0004cf98) list_double_graphic_pane_g1_cp2

0x9f3d,	// (0x0004cfa4) list_double_graphic_pane_g2_cp2_ParamLimits

0x9f3d,	// (0x0004cfa4) list_double_graphic_pane_g2_cp2

0x9f4c,	// (0x0004cfb3) list_double_graphic_pane_g3_cp2

0x9f54,	// (0x0004cfbb) list_double_graphic_pane_t1_cp2_ParamLimits

0x9f54,	// (0x0004cfbb) list_double_graphic_pane_t1_cp2

0x9f6a,	// (0x0004cfd1) list_double_graphic_pane_t2_cp2_ParamLimits

0x9f6a,	// (0x0004cfd1) list_double_graphic_pane_t2_cp2

0x1035,	// (0x0004409c) list_double_number_pane_g1_cp2_ParamLimits

0x1035,	// (0x0004409c) list_double_number_pane_g1_cp2

0x1041,	// (0x000440a8) list_double_number_pane_g2_cp2

0x9ef5,	// (0x0004cf5c) list_double_number_pane_t1_cp2_ParamLimits

0x9ef5,	// (0x0004cf5c) list_double_number_pane_t1_cp2

0x9f09,	// (0x0004cf70) list_double_number_pane_t2_cp2_ParamLimits

0x9f09,	// (0x0004cf70) list_double_number_pane_t2_cp2

0x9f1f,	// (0x0004cf86) list_double_number_pane_t3_cp2_ParamLimits

0x9f1f,	// (0x0004cf86) list_double_number_pane_t3_cp2

0x9dde,	// (0x0004ce45) list_single_graphic_pane_g1_cp2_ParamLimits

0x9dde,	// (0x0004ce45) list_single_graphic_pane_g1_cp2

0x40f0,	// (0x00047157) list_single_graphic_pane_g2_cp2_ParamLimits

0x40f0,	// (0x00047157) list_single_graphic_pane_g2_cp2

0x40fc,	// (0x00047163) list_single_graphic_pane_g3_cp2

0x9db4,	// (0x0004ce1b) list_single_graphic_pane_t1_cp2_ParamLimits

0x9db4,	// (0x0004ce1b) list_single_graphic_pane_t1_cp2

0x40f0,	// (0x00047157) list_single_number_pane_g1_cp2_ParamLimits

0x40f0,	// (0x00047157) list_single_number_pane_g1_cp2

0x40fc,	// (0x00047163) list_single_number_pane_g2_cp2

0x9db4,	// (0x0004ce1b) list_single_number_pane_t1_cp2_ParamLimits

0x9db4,	// (0x0004ce1b) list_single_number_pane_t1_cp2

0x9dca,	// (0x0004ce31) list_single_number_pane_t2_cp2_ParamLimits

0x9dca,	// (0x0004ce31) list_single_number_pane_t2_cp2

0x6b5d,	// (0x00049bc4) list_double2_pane_g1_cp2_ParamLimits

0x6b5d,	// (0x00049bc4) list_double2_pane_g1_cp2

0x0eea,	// (0x00043f51) list_double2_pane_g2_cp2

0x100d,	// (0x00044074) list_double2_pane_t1_cp2_ParamLimits

0x100d,	// (0x00044074) list_double2_pane_t1_cp2

0x1023,	// (0x0004408a) list_double2_pane_t2_cp2_ParamLimits

0x1023,	// (0x0004408a) list_double2_pane_t2_cp2

0x1035,	// (0x0004409c) list_double_pane_g1_cp2_ParamLimits

0x1035,	// (0x0004409c) list_double_pane_g1_cp2

0x1041,	// (0x000440a8) list_double_pane_g2_cp2

0x1049,	// (0x000440b0) list_double_pane_t1_cp2_ParamLimits

0x1049,	// (0x000440b0) list_double_pane_t1_cp2

0x105f,	// (0x000440c6) list_double_pane_t2_cp2_ParamLimits

0x105f,	// (0x000440c6) list_double_pane_t2_cp2

0x40e0,	// (0x00047147) list_single_pane_cp2_g3

0x40f0,	// (0x00047157) list_single_pane_g1_cp2_ParamLimits

0x40f0,	// (0x00047157) list_single_pane_g1_cp2

0x40fc,	// (0x00047163) list_single_pane_g2_cp2

0x4104,	// (0x0004716b) list_single_pane_t1_cp2_ParamLimits

0x4104,	// (0x0004716b) list_single_pane_t1_cp2

0x6bd0,	// (0x00049c37) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6bd0,	// (0x00049c37) list_single_large_graphic_pane_g1_cp2

0x411c,	// (0x00047183) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x411c,	// (0x00047183) list_single_large_graphic_pane_g2_cp2

0x4128,	// (0x0004718f) list_single_large_graphic_pane_g3_cp2

0x4130,	// (0x00047197) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4130,	// (0x00047197) list_single_large_graphic_pane_g4_cp1

0x414a,	// (0x000471b1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x414a,	// (0x000471b1) list_single_large_graphic_pane_t1_cp2

0x9d7e,	// (0x0004cde5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9d7e,	// (0x0004cde5) list_single_graphic_heading_pane_g1_cp2

0x9d4b,	// (0x0004cdb2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9d4b,	// (0x0004cdb2) list_single_graphic_heading_pane_g4_cp2

0x40fc,	// (0x00047163) list_single_graphic_heading_pane_g5_cp2

0x9d8a,	// (0x0004cdf1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9d8a,	// (0x0004cdf1) list_single_graphic_heading_pane_t1_cp2

0x9da0,	// (0x0004ce07) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9da0,	// (0x0004ce07) list_single_graphic_heading_pane_t2_cp2

0x9d3f,	// (0x0004cda6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9d3f,	// (0x0004cda6) list_single_2graphic_pane_g1_cp2

0x9d4b,	// (0x0004cdb2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9d4b,	// (0x0004cdb2) list_single_2graphic_pane_g2_cp2

0x40fc,	// (0x00047163) list_single_2graphic_pane_g3_cp2

0x9d5c,	// (0x0004cdc3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9d5c,	// (0x0004cdc3) list_single_2graphic_pane_g4_cp2

0x9d68,	// (0x0004cdcf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9d68,	// (0x0004cdcf) list_single_2graphic_pane_t1_cp2

0xda68,	// (0x00050acf) list_highlight_pane_g10_cp1

0x9917,	// (0x0004c97e) list_highlight_pane_g1_cp1

0x991f,	// (0x0004c986) list_highlight_pane_g2_cp1

0x9927,	// (0x0004c98e) list_highlight_pane_g3_cp1

0x992f,	// (0x0004c996) list_highlight_pane_g4_cp1

0x9937,	// (0x0004c99e) list_highlight_pane_g5_cp1

0x993f,	// (0x0004c9a6) list_highlight_pane_g6_cp1

0x9947,	// (0x0004c9ae) list_highlight_pane_g7_cp1

0x994f,	// (0x0004c9b6) list_highlight_pane_g8_cp1

0x9957,	// (0x0004c9be) list_highlight_pane_g9_cp1

0x9837,	// (0x0004c89e) form_field_slider_pane_t3

0x9845,	// (0x0004c8ac) form_field_slider_pane_t4

0x9853,	// (0x0004c8ba) slider_form_pane_ParamLimits

0x9853,	// (0x0004c8ba) slider_form_pane

0xda72,	// (0x00050ad9) control_abbreviations

0xda72,	// (0x00050ad9) control_conventions

0xda72,	// (0x00050ad9) control_definitions

0xda72,	// (0x00050ad9) format_table_attribute

0xa03f,	// (0x0004d0a6) bg_popup_preview_window_pane_g9

0xda72,	// (0x00050ad9) format_table_data2

0xda72,	// (0x00050ad9) format_table_data3

0xda72,	// (0x00050ad9) format_table_data_example

0x0008,

0xda72,	// (0x00050ad9) intro_purpose

0xf8f4,	// (0x0005295b) bg_popup_preview_window_pane_g

0xda72,	// (0x00050ad9) texts_category

0xda72,	// (0x00050ad9) texts_graphics

0x4160,	// (0x000471c7) text_digital

0x416f,	// (0x000471d6) text_primary

0x417e,	// (0x000471e5) text_primary_small

0x418d,	// (0x000471f4) text_secondary

0x419c,	// (0x00047203) text_title

0xa7d3,	// (0x0004d83a) bg_passive_tab_pane_g1_cp3_srt

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp3_srt

0xa7dc,	// (0x0004d843) bg_passive_tab_pane_g3_cp3_srt

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp3_srt_ParamLimits

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp3_srt

0xa7e5,	// (0x0004d84c) tabs_4_active_pane_srt_g1

0xa7ed,	// (0x0004d854) tabs_4_active_pane_srt_t1_ParamLimits

0xa7ed,	// (0x0004d854) tabs_4_active_pane_srt_t1

0xa7d3,	// (0x0004d83a) bg_active_tab_pane_g1_cp3_copy1

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp3_copy1

0xa7dc,	// (0x0004d843) bg_active_tab_pane_g3_cp3_copy1

0xdacc,	// (0x00050b33) tabs_2_long_active_pane_srt_ParamLimits

0xdacc,	// (0x00050b33) tabs_2_long_active_pane_srt

0xdacc,	// (0x00050b33) tabs_2_long_passive_pane_srt_ParamLimits

0xdacc,	// (0x00050b33) tabs_2_long_passive_pane_srt

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp4_srt

0xa47b,	// (0x0004d4e2) bg_passive_tab_pane_g1_cp4_srt

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp4_srt

0xa484,	// (0x0004d4eb) bg_passive_tab_pane_g3_cp4_srt

0x17bb,	// (0x00044822) bg_active_tab_pane_cp4_srt_ParamLimits

0x17bb,	// (0x00044822) bg_active_tab_pane_cp4_srt

0xa48d,	// (0x0004d4f4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa48d,	// (0x0004d4f4) tabs_2_long_active_pane_srt_t1

0xa47b,	// (0x0004d4e2) bg_active_tab_pane_g1_cp4_srt

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp4_srt

0xa484,	// (0x0004d4eb) bg_active_tab_pane_g3_cp4_srt

0xdbff,	// (0x00050c66) tabs_3_long_active_pane_srt_ParamLimits

0xdbff,	// (0x00050c66) tabs_3_long_active_pane_srt

0xdbff,	// (0x00050c66) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xdbff,	// (0x00050c66) tabs_3_long_passive_pane_cp_srt

0xdbff,	// (0x00050c66) tabs_3_long_passive_pane_srt_ParamLimits

0xdbff,	// (0x00050c66) tabs_3_long_passive_pane_srt

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp5_srt

0x0ee1,	// (0x00043f48) bg_passive_tab_pane_g1_cp5_srt

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp5_srt

0x0ed8,	// (0x00043f3f) bg_passive_tab_pane_g3_cp5_srt

0x17bb,	// (0x00044822) bg_active_tab_pane_cp5_srt_ParamLimits

0x17bb,	// (0x00044822) bg_active_tab_pane_cp5_srt

0xa469,	// (0x0004d4d0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa469,	// (0x0004d4d0) tabs_3_long_active_pane_srt_t1

0x0ee1,	// (0x00043f48) bg_active_tab_pane_g1_cp5_srt

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp5_srt

0x0ed8,	// (0x00043f3f) bg_active_tab_pane_g3_cp5_srt

0xa45b,	// (0x0004d4c2) navi_text_pane_srt_t1

0xa453,	// (0x0004d4ba) navi_icon_pane_srt_g1

0x434f,	// (0x000473b6) midp_editing_number_pane_srt

0x41ab,	// (0x00047212) midp_ticker_pane_srt

0x4357,	// (0x000473be) midp_ticker_pane_srt_g1

0x435f,	// (0x000473c6) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000527de) midp_ticker_pane_srt_g

0x4367,	// (0x000473ce) midp_ticker_pane_srt_t1

0xa444,	// (0x0004d4ab) midp_editing_number_pane_t1_copy1

0x6528,	// (0x0004958f) listscroll_midp_pane

0x6528,	// (0x0004958f) midp_form_pane

0x41b3,	// (0x0004721a) midp_info_popup_window_ParamLimits

0x41b3,	// (0x0004721a) midp_info_popup_window

0x0897,	// (0x000438fe) bg_popup_sub_pane_cp50_ParamLimits

0x0897,	// (0x000438fe) bg_popup_sub_pane_cp50

0x954d,	// (0x0004c5b4) listscroll_midp_info_pane_ParamLimits

0x954d,	// (0x0004c5b4) listscroll_midp_info_pane

0x9535,	// (0x0004c59c) listscroll_form_midp_pane_ParamLimits

0x9535,	// (0x0004c59c) listscroll_form_midp_pane

0x9541,	// (0x0004c5a8) scroll_bar_cp050

0x9515,	// (0x0004c57c) list_midp_pane

0xb268,	// (0x0004e2cf) signal_pane_g2_cp

0x944f,	// (0x0004c4b6) listscroll_midp_info_pane_t1_ParamLimits

0x944f,	// (0x0004c4b6) listscroll_midp_info_pane_t1

0x9467,	// (0x0004c4ce) listscroll_midp_info_pane_t2_ParamLimits

0x9467,	// (0x0004c4ce) listscroll_midp_info_pane_t2

0x94a5,	// (0x0004c50c) listscroll_midp_info_pane_t3_ParamLimits

0x94a5,	// (0x0004c50c) listscroll_midp_info_pane_t3

0x94df,	// (0x0004c546) listscroll_midp_info_pane_t4_ParamLimits

0x94df,	// (0x0004c546) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00052896) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00052896) listscroll_midp_info_pane_t

0x0917,	// (0x0004397e) scroll_pane_cp21

0x93e9,	// (0x0004c450) form_midp_field_choice_group_pane

0x93f2,	// (0x0004c459) form_midp_field_text_pane

0x9435,	// (0x0004c49c) form_midp_field_time_pane

0x943d,	// (0x0004c4a4) form_midp_gauge_slider_pane

0x9446,	// (0x0004c4ad) form_midp_gauge_wait_pane

0xda72,	// (0x00050ad9) form_midp_image_pane

0x565f,	// (0x000486c6) list_single_midp_pane_ParamLimits

0x565f,	// (0x000486c6) list_single_midp_pane

0x93ad,	// (0x0004c414) form_midp_field_text_pane_t1

0x9199,	// (0x0004c200) input_focus_pane_cp050

0x93d8,	// (0x0004c43f) list_midp_form_text_pane

0x937c,	// (0x0004c3e3) form_midp_field_choice_group_pane_t1

0x938a,	// (0x0004c3f1) input_focus_pane_cp051

0x939e,	// (0x0004c405) list_midp_choice_pane

0xda72,	// (0x00050ad9) status_idle_pane

0x9360,	// (0x0004c3c7) form_midp_field_time_pane_t1

0xda68,	// (0x00050acf) wait_anim_pane_g2_copy1

0x936e,	// (0x0004c3d5) form_midp_field_time_pane_t2

0x0001,

0x420e,	// (0x00047275) aid_navinavi_width_2_pane

0xf82a,	// (0x00052891) form_midp_field_time_pane_t

0xda72,	// (0x00050ad9) input_focus_pane_cp052

0xda72,	// (0x00050ad9) bg_input_focus_pane_cp040

0x9320,	// (0x0004c387) form_midp_gauge_slider_pane_t1

0x932e,	// (0x0004c395) form_midp_gauge_slider_pane_t2

0x933c,	// (0x0004c3a3) form_midp_gauge_slider_pane_t3

0x934a,	// (0x0004c3b1) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00052888) form_midp_gauge_slider_pane_t

0x9358,	// (0x0004c3bf) form_midp_slider_pane

0xdacc,	// (0x00050b33) bg_input_focus_pane_cp041_ParamLimits

0xdacc,	// (0x00050b33) bg_input_focus_pane_cp041

0x92ed,	// (0x0004c354) form_midp_gauge_wait_pane_t1_ParamLimits

0x92ed,	// (0x0004c354) form_midp_gauge_wait_pane_t1

0x92ff,	// (0x0004c366) form_midp_gauge_wait_pane_t2_ParamLimits

0x92ff,	// (0x0004c366) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00052883) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00052883) form_midp_gauge_wait_pane_t

0x9311,	// (0x0004c378) form_midp_wait_pane_ParamLimits

0x9311,	// (0x0004c378) form_midp_wait_pane

0x92b5,	// (0x0004c31c) form_midp_image_pane_g1

0x92be,	// (0x0004c325) form_midp_image_pane_t1

0x92cd,	// (0x0004c334) form_midp_image_pane_t2

0x92dc,	// (0x0004c343) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0005287c) form_midp_image_pane_t

0x92ac,	// (0x0004c313) list_single_midp_pane_g1

0x5650,	// (0x000486b7) list_single_midp_pane_t1

0x9292,	// (0x0004c2f9) list_midp_form_item_pane_ParamLimits

0x9292,	// (0x0004c2f9) list_midp_form_item_pane

0x41c8,	// (0x0004722f) list_midp_form_item_pane_t1

0x41d7,	// (0x0004723e) midp_ticker_pane_g1

0x41e3,	// (0x0004724a) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000527c4) midp_ticker_pane_g

0x6c83,	// (0x00049cea) midp_ticker_pane_t1

0xa6b7,	// (0x0004d71e) midp_editing_number_pane_t1

0xa695,	// (0x0004d6fc) midp_editing_number_pane

0xa6a4,	// (0x0004d70b) midp_ticker_pane

0xa434,	// (0x0004d49b) ai_message_heading_pane

0xda72,	// (0x00050ad9) bg_popup_window_pane_cp14

0xa43c,	// (0x0004d4a3) listscroll_ai_message_pane

0xa3ba,	// (0x0004d421) ai_message_heading_pane_g1_ParamLimits

0xa3ba,	// (0x0004d421) ai_message_heading_pane_g1

0xa3c6,	// (0x0004d42d) ai_message_heading_pane_g2_ParamLimits

0xa3c6,	// (0x0004d42d) ai_message_heading_pane_g2

0xa3d4,	// (0x0004d43b) ai_message_heading_pane_g3_ParamLimits

0xa3d4,	// (0x0004d43b) ai_message_heading_pane_g3

0xa3e0,	// (0x0004d447) ai_message_heading_pane_g4_ParamLimits

0xa3e0,	// (0x0004d447) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x000529bd) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x000529bd) ai_message_heading_pane_g

0xa3ec,	// (0x0004d453) ai_message_heading_pane_t1_ParamLimits

0xa3ec,	// (0x0004d453) ai_message_heading_pane_t1

0xa406,	// (0x0004d46d) ai_message_heading_pane_t2_ParamLimits

0xa406,	// (0x0004d46d) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x000529c6) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x000529c6) ai_message_heading_pane_t

0xa41a,	// (0x0004d481) bg_popup_heading_pane_cp1_ParamLimits

0xa41a,	// (0x0004d481) bg_popup_heading_pane_cp1

0xa3a8,	// (0x0004d40f) list_ai_message_pane_ParamLimits

0xa3a8,	// (0x0004d40f) list_ai_message_pane

0x0917,	// (0x0004397e) scroll_pane_cp10

0xa344,	// (0x0004d3ab) list_ai_message_pane_g1

0xa34c,	// (0x0004d3b3) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0005299a) list_ai_message_pane_g

0xa354,	// (0x0004d3bb) list_ai_message_pane_t1_ParamLimits

0xa354,	// (0x0004d3bb) list_ai_message_pane_t1

0xa369,	// (0x0004d3d0) list_ai_message_pane_t2_ParamLimits

0xa369,	// (0x0004d3d0) list_ai_message_pane_t2

0xa37e,	// (0x0004d3e5) list_ai_message_pane_t3_ParamLimits

0xa37e,	// (0x0004d3e5) list_ai_message_pane_t3

0xa393,	// (0x0004d3fa) list_ai_message_pane_t4_ParamLimits

0xa393,	// (0x0004d3fa) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0005299f) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0005299f) list_ai_message_pane_t

0xa32d,	// (0x0004d394) cell_ai_soft_ind_pane_ParamLimits

0xa32d,	// (0x0004d394) cell_ai_soft_ind_pane

0x41ef,	// (0x00047256) cell_ai_soft_ind_pane_g1_ParamLimits

0x41ef,	// (0x00047256) cell_ai_soft_ind_pane_g1

0xda72,	// (0x00050ad9) grid_highlight_cp1

0x41fc,	// (0x00047263) text_secondary_cp56_ParamLimits

0x41fc,	// (0x00047263) text_secondary_cp56

0xa302,	// (0x0004d369) example_general_pane_ParamLimits

0xa302,	// (0x0004d369) example_general_pane

0xa30e,	// (0x0004d375) example_parent_pane_g1_ParamLimits

0xa30e,	// (0x0004d375) example_parent_pane_g1

0xa31a,	// (0x0004d381) example_parent_pane_t1_ParamLimits

0xa31a,	// (0x0004d381) example_parent_pane_t1

0x89ab,	// (0x0004ba12) popup_preview_text_window_ParamLimits

0x89ab,	// (0x0004ba12) popup_preview_text_window

0x40e8,	// (0x0004714f) list_single_pane_cp2_g4

0xdcb5,	// (0x00050d1c) bg_popup_preview_window_pane_ParamLimits

0xdcb5,	// (0x00050d1c) bg_popup_preview_window_pane

0xa049,	// (0x0004d0b0) popup_preview_text_window_t1_ParamLimits

0xa049,	// (0x0004d0b0) popup_preview_text_window_t1

0xa067,	// (0x0004d0ce) popup_preview_text_window_t2_ParamLimits

0xa067,	// (0x0004d0ce) popup_preview_text_window_t2

0xa0b0,	// (0x0004d117) popup_preview_text_window_t3_ParamLimits

0xa0b0,	// (0x0004d117) popup_preview_text_window_t3

0xa0f5,	// (0x0004d15c) popup_preview_text_window_t4_ParamLimits

0xa0f5,	// (0x0004d15c) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0005296e) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0005296e) popup_preview_text_window_t

0xa173,	// (0x0004d1da) scroll_pane_cp11

0x9125,	// (0x0004c18c) bg_popup_preview_window_pane_g1

0x9ffd,	// (0x0004d064) bg_popup_preview_window_pane_g2

0xa007,	// (0x0004d06e) bg_popup_preview_window_pane_g3

0xa011,	// (0x0004d078) bg_popup_preview_window_pane_g4

0xa01b,	// (0x0004d082) bg_popup_preview_window_pane_g5

0xa025,	// (0x0004d08c) bg_popup_preview_window_pane_g6

0xa02d,	// (0x0004d094) bg_popup_preview_window_pane_g7

0xa035,	// (0x0004d09c) bg_popup_preview_window_pane_g8

0x5c80,	// (0x00048ce7) aid_popup_width_pane

0x8987,	// (0x0004b9ee) popup_midp_note_alarm_window_ParamLimits

0x8987,	// (0x0004b9ee) popup_midp_note_alarm_window

0x07df,	// (0x00043846) data_form_pane_ParamLimits

0x530d,	// (0x00048374) form_field_data_pane_g1

0x5317,	// (0x0004837e) form_field_data_pane_t1_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_ParamLimits

0x5331,	// (0x00048398) data_form_wide_pane_ParamLimits

0x5342,	// (0x000483a9) form_field_data_wide_pane_g1

0x534e,	// (0x000483b5) form_field_data_wide_pane_t1_ParamLimits

0xde6a,	// (0x00050ed1) input_focus_pane_cp6_ParamLimits

0x64ed,	// (0x00049554) input_popup_find_pane_g1_ParamLimits

0x64ed,	// (0x00049554) input_popup_find_pane_g1

0x6646,	// (0x000496ad) aid_navi_side_left_pane

0x665b,	// (0x000496c2) aid_navi_side_right_pane

0x9a12,	// (0x0004ca79) bg_popup_window_pane_cp30_ParamLimits

0x9a12,	// (0x0004ca79) bg_popup_window_pane_cp30

0x9a8c,	// (0x0004caf3) popup_midp_note_alarm_window_g1_ParamLimits

0x9a8c,	// (0x0004caf3) popup_midp_note_alarm_window_g1

0x9abc,	// (0x0004cb23) popup_midp_note_alarm_window_t1_ParamLimits

0x9abc,	// (0x0004cb23) popup_midp_note_alarm_window_t1

0x9b5d,	// (0x0004cbc4) popup_midp_note_alarm_window_t2_ParamLimits

0x9b5d,	// (0x0004cbc4) popup_midp_note_alarm_window_t2

0x9c0b,	// (0x0004cc72) popup_midp_note_alarm_window_t3_ParamLimits

0x9c0b,	// (0x0004cc72) popup_midp_note_alarm_window_t3

0x9c3d,	// (0x0004cca4) popup_midp_note_alarm_window_t4_ParamLimits

0x9c3d,	// (0x0004cca4) popup_midp_note_alarm_window_t4

0x9c63,	// (0x0004ccca) popup_midp_note_alarm_window_t5_ParamLimits

0x9c63,	// (0x0004ccca) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0005290b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0005290b) popup_midp_note_alarm_window_t

0x9d0f,	// (0x0004cd76) wait_bar_pane_cp1_ParamLimits

0x9d0f,	// (0x0004cd76) wait_bar_pane_cp1

0xda72,	// (0x00050ad9) wait_anim_pane_copy1

0xda72,	// (0x00050ad9) wait_border_pane_copy1

0x96f7,	// (0x0004c75e) wait_border_pane_g1_copy1

0x5368,	// (0x000483cf) form_field_popup_pane_g1

0x5370,	// (0x000483d7) form_field_popup_pane_t1_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_cp7_ParamLimits

0x0819,	// (0x00043880) list_form_pane_ParamLimits

0x538a,	// (0x000483f1) form_field_popup_wide_pane_g1

0x5392,	// (0x000483f9) form_field_popup_wide_pane_t1_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_cp8_ParamLimits

0x0825,	// (0x0004388c) list_form_wide_pane_ParamLimits

0xa860,	// (0x0004d8c7) aid_size_cell_graphic_pane

0x541e,	// (0x00048485) data_form_pane_t1_ParamLimits

0x56a6,	// (0x0004870d) data_form_wide_pane_t1_ParamLimits

0x8cd2,	// (0x0004bd39) bg_status_flat_pane

0x6091,	// (0x000490f8) title_pane_t1_ParamLimits

0xda94,	// (0x00050afb) title_pane_t2_ParamLimits

0xdaba,	// (0x00050b21) title_pane_t3_ParamLimits

0xf557,	// (0x000525be) title_pane_t_ParamLimits

0x6793,	// (0x000497fa) level_1_signal_ParamLimits

0x67a0,	// (0x00049807) level_2_signal_ParamLimits

0x67ad,	// (0x00049814) level_3_signal_ParamLimits

0x67ba,	// (0x00049821) level_4_signal_ParamLimits

0x67c7,	// (0x0004982e) level_5_signal_ParamLimits

0x67d4,	// (0x0004983b) level_6_signal_ParamLimits

0x67e1,	// (0x00049848) level_7_signal_ParamLimits

0x6793,	// (0x000497fa) level_1_battery_ParamLimits

0x67a0,	// (0x00049807) level_2_battery_ParamLimits

0x67ad,	// (0x00049814) level_3_battery_ParamLimits

0x67ba,	// (0x00049821) level_4_battery_ParamLimits

0x67c7,	// (0x0004982e) level_5_battery_ParamLimits

0x67d4,	// (0x0004983b) level_6_battery_ParamLimits

0x67e1,	// (0x00049848) level_7_battery_ParamLimits

0x9917,	// (0x0004c97e) bg_status_flat_pane_g1

0x991f,	// (0x0004c986) bg_status_flat_pane_g2

0x9927,	// (0x0004c98e) bg_status_flat_pane_g3

0x992f,	// (0x0004c996) bg_status_flat_pane_g4

0x9937,	// (0x0004c99e) bg_status_flat_pane_g5

0x993f,	// (0x0004c9a6) bg_status_flat_pane_g6

0x9947,	// (0x0004c9ae) bg_status_flat_pane_g7

0x6101,	// (0x00049168) tabs_3_active_pane_t1_ParamLimits

0x6101,	// (0x00049168) tabs_3_passive_pane_t1_ParamLimits

0x611b,	// (0x00049182) tabs_4_active_pane_t1_ParamLimits

0x611b,	// (0x00049182) tabs_4_1_passive_pane_t1_ParamLimits

0x6503,	// (0x0004956a) tabs_2_active_pane_t1_ParamLimits

0x6503,	// (0x0004956a) tabs_2_passive_pane_t1_ParamLimits

0x17bb,	// (0x00044822) bg_active_tab_pane_cp4_ParamLimits

0x6515,	// (0x0004957c) tabs_2_long_active_pane_t1_ParamLimits

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp4_ParamLimits

0x719a,	// (0x0004a201) list_single_midp_graphic_pane_t1_ParamLimits

0x17bb,	// (0x00044822) bg_active_tab_pane_cp5_ParamLimits

0x6534,	// (0x0004959b) tabs_3_long_active_pane_t1_ParamLimits

0x6528,	// (0x0004958f) bg_passive_tab_pane_cp5_ParamLimits

0x719a,	// (0x0004a201) list_single_midp_graphic_pane_t1

0x8cd2,	// (0x0004bd39) bg_status_flat_pane_ParamLimits

0x8d9d,	// (0x0004be04) indicator_pane_cp2_ParamLimits

0x8d9d,	// (0x0004be04) indicator_pane_cp2

0x8ee0,	// (0x0004bf47) navi_pane_srt_ParamLimits

0x8ee0,	// (0x0004bf47) navi_pane_srt

0x8f04,	// (0x0004bf6b) popup_clock_digital_analogue_window_cp1

0xdb10,	// (0x00050b77) indicator_pane_t1

0x41ab,	// (0x00047212) copy_highlight_pane

0x41ab,	// (0x00047212) cursor_graphics_pane

0x41ab,	// (0x00047212) graphic_within_text_pane

0x41ab,	// (0x00047212) link_highlight_pane

0xa136,	// (0x0004d19d) popup_preview_text_window_t5_ParamLimits

0xa136,	// (0x0004d19d) popup_preview_text_window_t5

0x4218,	// (0x0004727f) cursor_digital_pane

0x4218,	// (0x0004727f) cursor_primary_pane

0x4229,	// (0x00047290) cursor_primary_small_pane

0x4231,	// (0x00047298) cursor_secondary_pane

0x4239,	// (0x000472a0) cursor_title_pane

0x4218,	// (0x0004727f) link_highlight_digital_pane

0x4220,	// (0x00047287) link_highlight_primary_pane

0x4229,	// (0x00047290) link_highlight_primary_small_pane

0x4231,	// (0x00047298) link_highlight_secondary_pane

0x4239,	// (0x000472a0) link_highlight_title_pane

0x4218,	// (0x0004727f) copy_highlight_digital_pane

0x4218,	// (0x0004727f) copy_highlight_primary_pane

0x4229,	// (0x00047290) copy_highlight_primary_small_pane

0x4231,	// (0x00047298) copy_highlight_secondary_pane

0x4239,	// (0x000472a0) copy_highlight_title_pane

0x4231,	// (0x00047298) graphic_text_digital_pane

0x99b5,	// (0x0004ca1c) graphic_text_primary_pane

0x99be,	// (0x0004ca25) graphic_text_primary_small_pane

0x4229,	// (0x00047290) graphic_text_secondary_pane

0x4218,	// (0x0004727f) graphic_text_title_pane

0x6c95,	// (0x00049cfc) cursor_primary_pane_g1

0x99a7,	// (0x0004ca0e) cursor_text_primary_t1

0x998f,	// (0x0004c9f6) cursor_primary_small_pane_g1

0x9999,	// (0x0004ca00) cursor_text_primary_small_t1

0x9977,	// (0x0004c9de) cursor_primary_small_pane_g1_copy1

0x9981,	// (0x0004c9e8) cursor_text_primary_small_t1_copy1

0x995f,	// (0x0004c9c6) cursor_text_title_t1

0x996d,	// (0x0004c9d4) cursor_title_pane_g1

0x6c95,	// (0x00049cfc) cursor_digital_pane_g1

0x4241,	// (0x000472a8) cursor_text_digital_t1

0x424f,	// (0x000472b6) link_highlight_primary_pane_g1

0x9908,	// (0x0004c96f) link_highlight_primary_pane_t1

0x424f,	// (0x000472b6) link_highlight_primary_small_pane_g1

0x4257,	// (0x000472be) link_highlight_primary_small_pane_t1

0x4266,	// (0x000472cd) link_highlight_secondary_pane_g1

0x426e,	// (0x000472d5) link_highlight_secondary_pane_t1

0x987c,	// (0x0004c8e3) link_highlight_title_pane_g1

0x9884,	// (0x0004c8eb) link_highlight_title_pane_t1

0x9865,	// (0x0004c8cc) link_highlight_digital_pane_g1

0x986d,	// (0x0004c8d4) link_highlight_digital_pane_t1

0x972d,	// (0x0004c794) copy_highlight_primary_pane_g1

0x9744,	// (0x0004c7ab) copy_highlight_primary_pane_t1

0x972d,	// (0x0004c794) copy_highlight_primary_small_pane_g1

0x9735,	// (0x0004c79c) copy_highlight_primary_small_pane_t1

0x427d,	// (0x000472e4) copy_highlight_secondary_pane_g1

0x4285,	// (0x000472ec) copy_highlight_secondary_pane_t1

0x9716,	// (0x0004c77d) copy_highlight_title_pane_g1

0x971e,	// (0x0004c785) copy_highlight_title_pane_t1

0x972d,	// (0x0004c794) copy_highlight_digital_pane_g1

0xaa30,	// (0x0004da97) copy_highlight_digital_pane_t1

0xa984,	// (0x0004d9eb) graphic_text_primary_pane_g1

0xaa14,	// (0x0004da7b) graphic_text_primary_pane_t1

0xaa22,	// (0x0004da89) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00052a3a) graphic_text_primary_pane_t

0xa9f0,	// (0x0004da57) graphic_text_primary_small_pane_g1

0xa9f8,	// (0x0004da5f) graphic_text_primary_small_pane_t1

0xaa06,	// (0x0004da6d) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00052a35) graphic_text_primary_small_pane_t

0xa9cc,	// (0x0004da33) graphic_text_secondary_pane_g1

0xa9d4,	// (0x0004da3b) graphic_text_secondary_pane_t1

0xa9e2,	// (0x0004da49) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00052a30) graphic_text_secondary_pane_t

0xa9a8,	// (0x0004da0f) graphic_text_title_pane_g1

0xa9b0,	// (0x0004da17) graphic_text_title_pane_t1

0xa9be,	// (0x0004da25) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00052a2b) graphic_text_title_pane_t

0xa984,	// (0x0004d9eb) graphic_text_digital_pane_g1

0xa98c,	// (0x0004d9f3) graphic_text_digital_pane_t1

0xa99a,	// (0x0004da01) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00052a26) graphic_text_digital_pane_t

0xdacc,	// (0x00050b33) navi_icon_pane_srt_ParamLimits

0xdacc,	// (0x00050b33) navi_icon_pane_srt

0xda72,	// (0x00050ad9) navi_midp_pane_srt

0xda72,	// (0x00050ad9) navi_navi_pane_srt

0xdacc,	// (0x00050b33) navi_text_pane_srt_ParamLimits

0xdacc,	// (0x00050b33) navi_text_pane_srt

0xa94f,	// (0x0004d9b6) navi_navi_icon_text_pane_srt

0xa957,	// (0x0004d9be) navi_navi_pane_srt_g1_ParamLimits

0xa957,	// (0x0004d9be) navi_navi_pane_srt_g1

0xa969,	// (0x0004d9d0) navi_navi_pane_srt_g2_ParamLimits

0xa969,	// (0x0004d9d0) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00052a21) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00052a21) navi_navi_pane_srt_g

0xa97b,	// (0x0004d9e2) navi_navi_tabs_pane_srt

0xa94f,	// (0x0004d9b6) navi_navi_text_pane_srt

0xa94f,	// (0x0004d9b6) navi_navi_volume_pane_srt

0xa940,	// (0x0004d9a7) navi_navi_text_pane_srt_t1

0x758e,	// (0x0004a5f5) navi_navi_volume_pane_srt_g1

0x7596,	// (0x0004a5fd) volume_small_pane_srt_ParamLimits

0x7596,	// (0x0004a5fd) volume_small_pane_srt

0x6c9f,	// (0x00049d06) volume_small_pane_srt_g1_ParamLimits

0x6c9f,	// (0x00049d06) volume_small_pane_srt_g1

0x6caf,	// (0x00049d16) volume_small_pane_srt_g2_ParamLimits

0x6caf,	// (0x00049d16) volume_small_pane_srt_g2

0x6cc0,	// (0x00049d27) volume_small_pane_srt_g3_ParamLimits

0x6cc0,	// (0x00049d27) volume_small_pane_srt_g3

0x6cd1,	// (0x00049d38) volume_small_pane_srt_g4_ParamLimits

0x6cd1,	// (0x00049d38) volume_small_pane_srt_g4

0x6ce2,	// (0x00049d49) volume_small_pane_srt_g5_ParamLimits

0x6ce2,	// (0x00049d49) volume_small_pane_srt_g5

0x6cf3,	// (0x00049d5a) volume_small_pane_srt_g6_ParamLimits

0x6cf3,	// (0x00049d5a) volume_small_pane_srt_g6

0x6d04,	// (0x00049d6b) volume_small_pane_srt_g7_ParamLimits

0x6d04,	// (0x00049d6b) volume_small_pane_srt_g7

0x6d15,	// (0x00049d7c) volume_small_pane_srt_g8_ParamLimits

0x6d15,	// (0x00049d7c) volume_small_pane_srt_g8

0x6d26,	// (0x00049d8d) volume_small_pane_srt_g9_ParamLimits

0x6d26,	// (0x00049d8d) volume_small_pane_srt_g9

0x6d37,	// (0x00049d9e) volume_small_pane_srt_g10_ParamLimits

0x6d37,	// (0x00049d9e) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000527c9) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000527c9) volume_small_pane_srt_g

0xdd6a,	// (0x00050dd1) query_popup_data_pane_cp2

0xa926,	// (0x0004d98d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa926,	// (0x0004d98d) navi_navi_icon_text_pane_srt_t1

0x99b5,	// (0x0004ca1c) navi_tabs_2_long_pane_srt

0x99b5,	// (0x0004ca1c) navi_tabs_2_pane_srt

0x99b5,	// (0x0004ca1c) navi_tabs_3_long_pane_srt

0x99b5,	// (0x0004ca1c) navi_tabs_3_pane_srt

0x99b5,	// (0x0004ca1c) navi_tabs_4_pane_srt

0x756e,	// (0x0004a5d5) tabs_2_active_pane_srt_ParamLimits

0x756e,	// (0x0004a5d5) tabs_2_active_pane_srt

0x757e,	// (0x0004a5e5) tabs_2_passive_pane_srt_ParamLimits

0x757e,	// (0x0004a5e5) tabs_2_passive_pane_srt

0x6fe4,	// (0x0004a04b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6fe4,	// (0x0004a04b) bg_passive_tab_pane_cp1_srt

0xa8f2,	// (0x0004d959) bg_passive_tab_pane_g1_cp1_srt

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp1_srt

0xa8fb,	// (0x0004d962) bg_passive_tab_pane_g3_cp1_srt

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp1_srt_ParamLimits

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp1_srt

0xa904,	// (0x0004d96b) tabs_2_active_pane_srt_g1

0xa90c,	// (0x0004d973) tabs_2_active_pane_srt_t1_ParamLimits

0xa90c,	// (0x0004d973) tabs_2_active_pane_srt_t1

0xa8f2,	// (0x0004d959) bg_active_tab_pane_g1_cp1_srt

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp1_srt

0xa8fb,	// (0x0004d962) bg_active_tab_pane_g3_cp1_srt

0x753b,	// (0x0004a5a2) tabs_3_active_pane_srt_ParamLimits

0x753b,	// (0x0004a5a2) tabs_3_active_pane_srt

0x754c,	// (0x0004a5b3) tabs_3_passive_pane_cp_srt_ParamLimits

0x754c,	// (0x0004a5b3) tabs_3_passive_pane_cp_srt

0x755d,	// (0x0004a5c4) tabs_3_passive_pane_srt_ParamLimits

0x755d,	// (0x0004a5c4) tabs_3_passive_pane_srt

0x6fe4,	// (0x0004a04b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6fe4,	// (0x0004a04b) bg_passive_tab_pane_cp2_srt

0x4346,	// (0x000473ad) bg_passive_tab_pane_g1_cp2_srt

0x0e91,	// (0x00043ef8) bg_passive_tab_pane_g2_cp2_srt

0x433d,	// (0x000473a4) bg_passive_tab_pane_g3_cp2_srt

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp2_srt_ParamLimits

0xdacc,	// (0x00050b33) bg_active_tab_pane_cp2_srt

0xa8d8,	// (0x0004d93f) tabs_3_active_pane_srt_g1

0xa8e0,	// (0x0004d947) tabs_3_active_pane_srt_t1_ParamLimits

0xa8e0,	// (0x0004d947) tabs_3_active_pane_srt_t1

0x4346,	// (0x000473ad) bg_active_tab_pane_g1_cp2_srt

0x0e91,	// (0x00043ef8) bg_active_tab_pane_g2_cp2_srt

0x433d,	// (0x000473a4) bg_active_tab_pane_g3_cp2_srt

0x74f3,	// (0x0004a55a) tabs_4_active_pane_srt_ParamLimits

0x74f3,	// (0x0004a55a) tabs_4_active_pane_srt

0x7505,	// (0x0004a56c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7505,	// (0x0004a56c) tabs_4_passive_pane_cp2_srt

0x6f72,	// (0x00049fd9) aid_size_cell_toolbar

0x6528,	// (0x0004958f) main_idle_act_pane_ParamLimits

0x87ad,	// (0x0004b814) popup_large_graphic_colour_window_ParamLimits

0x8b54,	// (0x0004bbbb) popup_toolbar_window_ParamLimits

0x8b54,	// (0x0004bbbb) popup_toolbar_window

0xa6c6,	// (0x0004d72d) list_single_graphic_2heading_pane_ParamLimits

0xa6c6,	// (0x0004d72d) list_single_graphic_2heading_pane

0x0aef,	// (0x00043b56) aid_size_cell_apps_grid_lsc_pane

0x0b01,	// (0x00043b68) aid_size_cell_apps_grid_prt_pane

0x6fe4,	// (0x0004a04b) bg_wml_button_pane_cp1_ParamLimits

0x6fe4,	// (0x0004a04b) bg_wml_button_pane_cp1

0x93ad,	// (0x0004c414) form_midp_field_text_pane_t1_ParamLimits

0x9199,	// (0x0004c200) input_focus_pane_cp050_ParamLimits

0x93d8,	// (0x0004c43f) list_midp_form_text_pane_ParamLimits

0x938a,	// (0x0004c3f1) input_focus_pane_cp051_ParamLimits

0x939e,	// (0x0004c405) list_midp_choice_pane_ParamLimits

0x9252,	// (0x0004c2b9) list_single_2graphic_pane_cp3_ParamLimits

0x9252,	// (0x0004c2b9) list_single_2graphic_pane_cp3

0x926b,	// (0x0004c2d2) list_single_midp_graphic_pane_ParamLimits

0x926b,	// (0x0004c2d2) list_single_midp_graphic_pane

0x5528,	// (0x0004858f) list_single_graphic_2heading_pane_g1_ParamLimits

0x5528,	// (0x0004858f) list_single_graphic_2heading_pane_g1

0x5534,	// (0x0004859b) list_single_graphic_2heading_pane_g4_ParamLimits

0x5534,	// (0x0004859b) list_single_graphic_2heading_pane_g4

0x5540,	// (0x000485a7) list_single_graphic_2heading_pane_g5_ParamLimits

0x5540,	// (0x000485a7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005281c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005281c) list_single_graphic_2heading_pane_g

0x554c,	// (0x000485b3) list_single_graphic_2heading_pane_t1_ParamLimits

0x554c,	// (0x000485b3) list_single_graphic_2heading_pane_t1

0x5560,	// (0x000485c7) list_single_graphic_2heading_pane_t2_ParamLimits

0x5560,	// (0x000485c7) list_single_graphic_2heading_pane_t2

0x557c,	// (0x000485e3) list_single_graphic_2heading_pane_t3_ParamLimits

0x557c,	// (0x000485e3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00052823) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00052823) list_single_graphic_2heading_pane_t

0x9063,	// (0x0004c0ca) bg_popup_sub_pane_cp2

0x908d,	// (0x0004c0f4) grid_toobar_pane

0x7112,	// (0x0004a179) cell_toolbar_pane_ParamLimits

0x7112,	// (0x0004a179) cell_toolbar_pane

0x90c9,	// (0x0004c130) cell_toolbar_pane_g1_ParamLimits

0x90c9,	// (0x0004c130) cell_toolbar_pane_g1

0x90dd,	// (0x0004c144) cell_toolbar_pane_g2_ParamLimits

0x90dd,	// (0x0004c144) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00052831) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00052831) cell_toolbar_pane_g

0x90ff,	// (0x0004c166) grid_highlight_pane_cp2_ParamLimits

0x90ff,	// (0x0004c166) grid_highlight_pane_cp2

0x9119,	// (0x0004c180) toolbar_button_pane

0x9125,	// (0x0004c18c) toolbar_button_pane_g1

0x912d,	// (0x0004c194) toolbar_button_pane_g2

0x9135,	// (0x0004c19c) toolbar_button_pane_g3

0x913d,	// (0x0004c1a4) toolbar_button_pane_g4

0x9145,	// (0x0004c1ac) toolbar_button_pane_g5

0x914d,	// (0x0004c1b4) toolbar_button_pane_g6

0x9155,	// (0x0004c1bc) toolbar_button_pane_g7

0x915d,	// (0x0004c1c4) toolbar_button_pane_g8

0x9165,	// (0x0004c1cc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00052836) toolbar_button_pane_g

0x7156,	// (0x0004a1bd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7156,	// (0x0004a1bd) list_single_2graphic_pane_g1_cp3

0x7162,	// (0x0004a1c9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7162,	// (0x0004a1c9) list_single_2graphic_pane_g2_cp3

0x0fa2,	// (0x00044009) list_single_2graphic_pane_g3_cp3

0x7173,	// (0x0004a1da) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7173,	// (0x0004a1da) list_single_2graphic_pane_g4_cp3

0x717f,	// (0x0004a1e6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x717f,	// (0x0004a1e6) list_single_2graphic_pane_t1_cp3

0x0f96,	// (0x00043ffd) list_single_midp_graphic_pane_g2_ParamLimits

0x0f96,	// (0x00043ffd) list_single_midp_graphic_pane_g2

0x5510,	// (0x00048577) aid_zoom_text_primary

0x5518,	// (0x0004857f) aid_zoom_text_secondary

0x6d96,	// (0x00049dfd) status_small_pane_g7_ParamLimits

0x6d96,	// (0x00049dfd) status_small_pane_g7

0x6db9,	// (0x00049e20) status_small_pane_t1_ParamLimits

0x6080,	// (0x000490e7) title_pane_g2

0x0003,

0xf54e,	// (0x000525b5) title_pane_g

0x62d5,	// (0x0004933c) aid_size_cell_colour_1_pane_ParamLimits

0x62d5,	// (0x0004933c) aid_size_cell_colour_1_pane

0x62e9,	// (0x00049350) aid_size_cell_colour_2_pane_ParamLimits

0x62e9,	// (0x00049350) aid_size_cell_colour_2_pane

0x62fd,	// (0x00049364) aid_size_cell_colour_3_pane_ParamLimits

0x62fd,	// (0x00049364) aid_size_cell_colour_3_pane

0x6311,	// (0x00049378) aid_size_cell_colour_4_pane_ParamLimits

0x6311,	// (0x00049378) aid_size_cell_colour_4_pane

0x6582,	// (0x000495e9) title_pane_stacon_g1_ParamLimits

0x6582,	// (0x000495e9) title_pane_stacon_g1

0x979b,	// (0x0004c802) popup_note_wait_window_g3_ParamLimits

0x979b,	// (0x0004c802) popup_note_wait_window_g3

0x9812,	// (0x0004c879) popup_note_wait_window_t5_ParamLimits

0x9812,	// (0x0004c879) popup_note_wait_window_t5

0xda72,	// (0x00050ad9) main_feb_china_hwr_fs_writing_pane

0x7074,	// (0x0004a0db) popup_feb_china_hwr_fs_window_ParamLimits

0x7074,	// (0x0004a0db) popup_feb_china_hwr_fs_window

0x71c8,	// (0x0004a22f) aid_size_cell_hwr_fs_ParamLimits

0x71c8,	// (0x0004a22f) aid_size_cell_hwr_fs

0x9199,	// (0x0004c200) bg_popup_sub_pane_cp3_ParamLimits

0x9199,	// (0x0004c200) bg_popup_sub_pane_cp3

0x71dd,	// (0x0004a244) grid_hwr_fs_pane_ParamLimits

0x71dd,	// (0x0004a244) grid_hwr_fs_pane

0x71f5,	// (0x0004a25c) linegrid_hwr_fs_pane_ParamLimits

0x71f5,	// (0x0004a25c) linegrid_hwr_fs_pane

0x7205,	// (0x0004a26c) cell_hwr_fs_pane_ParamLimits

0x7205,	// (0x0004a26c) cell_hwr_fs_pane

0x91a5,	// (0x0004c20c) linegrid_hwr_fs_pane_g1_ParamLimits

0x91a5,	// (0x0004c20c) linegrid_hwr_fs_pane_g1

0x91b1,	// (0x0004c218) linegrid_hwr_fs_pane_g2_ParamLimits

0x91b1,	// (0x0004c218) linegrid_hwr_fs_pane_g2

0x91c3,	// (0x0004c22a) linegrid_hwr_fs_pane_g3_ParamLimits

0x91c3,	// (0x0004c22a) linegrid_hwr_fs_pane_g3

0x7229,	// (0x0004a290) linegrid_hwr_fs_pane_g4_ParamLimits

0x7229,	// (0x0004a290) linegrid_hwr_fs_pane_g4

0x7247,	// (0x0004a2ae) linegrid_hwr_fs_pane_g5_ParamLimits

0x7247,	// (0x0004a2ae) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00052861) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00052861) linegrid_hwr_fs_pane_g

0x91cf,	// (0x0004c236) cell_hwr_fs_pane_g1_ParamLimits

0x91cf,	// (0x0004c236) cell_hwr_fs_pane_g1

0x8f9a,	// (0x0004c001) cell_hwr_fs_pane_g2_ParamLimits

0x8f9a,	// (0x0004c001) cell_hwr_fs_pane_g2

0x91e5,	// (0x0004c24c) cell_hwr_fs_pane_g3_ParamLimits

0x91e5,	// (0x0004c24c) cell_hwr_fs_pane_g3

0x91f2,	// (0x0004c259) cell_hwr_fs_pane_g4_ParamLimits

0x91f2,	// (0x0004c259) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0005286c) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0005286c) cell_hwr_fs_pane_g

0x725d,	// (0x0004a2c4) cell_hwr_fs_pane_t1

0xda72,	// (0x00050ad9) grid_highlight_pane_cp6

0xda72,	// (0x00050ad9) main_idle_act2_pane

0x08fe,	// (0x00043965) aid_inside_area_popup_secondary

0x9e4b,	// (0x0004ceb2) aid_inside_area_window_primary_ParamLimits

0x9e4b,	// (0x0004ceb2) aid_inside_area_window_primary

0xaa3f,	// (0x0004daa6) ai2_news_ticker_pane

0xaa47,	// (0x0004daae) aid_size_cell_ai1_link_ParamLimits

0xaa47,	// (0x0004daae) aid_size_cell_ai1_link

0xaa61,	// (0x0004dac8) popup_ai2_data_window_ParamLimits

0xaa61,	// (0x0004dac8) popup_ai2_data_window

0xaa7f,	// (0x0004dae6) popup_ai2_link_window_ParamLimits

0xaa7f,	// (0x0004dae6) popup_ai2_link_window

0x9199,	// (0x0004c200) bg_popup_sub_pane_cp4_ParamLimits

0x9199,	// (0x0004c200) bg_popup_sub_pane_cp4

0xaa95,	// (0x0004dafc) grid_ai2_link_pane_ParamLimits

0xaa95,	// (0x0004dafc) grid_ai2_link_pane

0xaaac,	// (0x0004db13) popup_ai2_link_window_g1_ParamLimits

0xaaac,	// (0x0004db13) popup_ai2_link_window_g1

0xaab8,	// (0x0004db1f) popup_ai2_link_window_g2_ParamLimits

0xaab8,	// (0x0004db1f) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00052a3f) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00052a3f) popup_ai2_link_window_g

0xaac9,	// (0x0004db30) ai2_mp_button_pane

0xaad1,	// (0x0004db38) ai2_mp_volume_pane

0x938a,	// (0x0004c3f1) bg_popup_sub_pane_cp5_ParamLimits

0x938a,	// (0x0004c3f1) bg_popup_sub_pane_cp5

0xaad9,	// (0x0004db40) heading_ai2_gene_pane_ParamLimits

0xaad9,	// (0x0004db40) heading_ai2_gene_pane

0xaae5,	// (0x0004db4c) list_ai2_gene_pane_ParamLimits

0xaae5,	// (0x0004db4c) list_ai2_gene_pane

0xab2d,	// (0x0004db94) cell_ai2_link_pane_ParamLimits

0xab2d,	// (0x0004db94) cell_ai2_link_pane

0xab43,	// (0x0004dbaa) cell_ai2_link_pane_g1

0xda72,	// (0x00050ad9) grid_highlight_pane_cp7

0x75ab,	// (0x0004a612) ai2_mp_volume_pane_g1

0xac16,	// (0x0004dc7d) ai2_mp_volume_pane_g2

0xab8b,	// (0x0004dbf2) list_ai2_gene_pane_t1

0xac1e,	// (0x0004dc85) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00052a58) ai2_mp_volume_pane_g

0x75b3,	// (0x0004a61a) volume_small_pane_cp3

0xac26,	// (0x0004dc8d) aid_size_cell_ai2_button

0xac2e,	// (0x0004dc95) grid_ai2_button_pane

0xac37,	// (0x0004dc9e) cell_ai2_button_pane_ParamLimits

0xac37,	// (0x0004dc9e) cell_ai2_button_pane

0xda68,	// (0x00050acf) cell_ai2_button_pane_g1

0xda72,	// (0x00050ad9) grid_highlight_pane_cp8

0xabd6,	// (0x0004dc3d) ai2_gene_pane_t1_ParamLimits

0xabd6,	// (0x0004dc3d) ai2_gene_pane_t1

0x6f68,	// (0x00049fcf) aid_height_parent_landscape

0xa4dd,	// (0x0004d544) aid_height_set_list

0xa4ee,	// (0x0004d555) aid_size_parent

0xa860,	// (0x0004d8c7) aid_size_cell_graphic_pane_ParamLimits

0xaaf5,	// (0x0004db5c) popup_ai2_data_window_g1_ParamLimits

0xaaf5,	// (0x0004db5c) popup_ai2_data_window_g1

0xab01,	// (0x0004db68) ai2_news_ticker_pane_g1

0xab09,	// (0x0004db70) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00052a44) ai2_news_ticker_pane_g

0xab11,	// (0x0004db78) ai2_news_ticker_pane_t1

0xab1f,	// (0x0004db86) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00052a49) ai2_news_ticker_pane_t

0xab4c,	// (0x0004dbb3) heading_ai2_gene_pane_g1

0xab54,	// (0x0004dbbb) heading_ai2_gene_pane_t1_ParamLimits

0xab54,	// (0x0004dbbb) heading_ai2_gene_pane_t1

0xab69,	// (0x0004dbd0) list_highlight_pane_cp6

0xab71,	// (0x0004dbd8) ai2_gene_pane_ParamLimits

0xab71,	// (0x0004dbd8) ai2_gene_pane

0xab99,	// (0x0004dc00) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00052a4e) list_ai2_gene_pane_t

0xaba7,	// (0x0004dc0e) list_highlight_pane_cp8_ParamLimits

0xaba7,	// (0x0004dc0e) list_highlight_pane_cp8

0xabb8,	// (0x0004dc1f) ai2_gene_pane_g1_ParamLimits

0xabb8,	// (0x0004dc1f) ai2_gene_pane_g1

0xabca,	// (0x0004dc31) ai2_gene_pane_g2_ParamLimits

0xabca,	// (0x0004dc31) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00052a53) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00052a53) ai2_gene_pane_g

0xe085,	// (0x000510ec) scroll_pane_cp12

0x6f1f,	// (0x00049f86) control_pane_t3_ParamLimits

0x6f1f,	// (0x00049f86) control_pane_t3

0x6daa,	// (0x00049e11) status_small_pane_g8_ParamLimits

0x6daa,	// (0x00049e11) status_small_pane_g8

0x8772,	// (0x0004b7d9) popup_find_window_ParamLimits

0x899d,	// (0x0004ba04) popup_note_image_window_ParamLimits

0x5594,	// (0x000485fb) list_double2_graphic_pane_vc_g1_ParamLimits

0x5594,	// (0x000485fb) list_double2_graphic_pane_vc_g1

0x411c,	// (0x00047183) list_double2_graphic_pane_vc_g2_ParamLimits

0x411c,	// (0x00047183) list_double2_graphic_pane_vc_g2

0x7142,	// (0x0004a1a9) list_double2_graphic_pane_vc_g3_ParamLimits

0x7142,	// (0x0004a1a9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005282a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005282a) list_double2_graphic_pane_vc_g

0x55a0,	// (0x00048607) list_double2_graphic_pane_vc_t1_ParamLimits

0x55a0,	// (0x00048607) list_double2_graphic_pane_vc_t1

0x411c,	// (0x00047183) list_single_heading_pane_vc_g1_ParamLimits

0x411c,	// (0x00047183) list_single_heading_pane_vc_g1

0x7142,	// (0x0004a1a9) list_single_heading_pane_vc_g2_ParamLimits

0x7142,	// (0x0004a1a9) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005284b) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005284b) list_single_heading_pane_vc_g

0x55b6,	// (0x0004861d) list_single_heading_pane_vc_t1_ParamLimits

0x55b6,	// (0x0004861d) list_single_heading_pane_vc_t1

0x55ce,	// (0x00048635) list_single_heading_pane_vc_t2_ParamLimits

0x55ce,	// (0x00048635) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00052850) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00052850) list_single_heading_pane_vc_t

0x71b0,	// (0x0004a217) list_setting_number_pane_vc_g1_ParamLimits

0x71b0,	// (0x0004a217) list_setting_number_pane_vc_g1

0x71bc,	// (0x0004a223) list_setting_number_pane_vc_g2_ParamLimits

0x71bc,	// (0x0004a223) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00052855) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00052855) list_setting_number_pane_vc_g

0x55e0,	// (0x00048647) list_setting_number_pane_vc_t1_ParamLimits

0x55e0,	// (0x00048647) list_setting_number_pane_vc_t1

0x55f4,	// (0x0004865b) list_setting_number_pane_vc_t2_ParamLimits

0x55f4,	// (0x0004865b) list_setting_number_pane_vc_t2

0x5610,	// (0x00048677) list_setting_number_pane_vc_t3_ParamLimits

0x5610,	// (0x00048677) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005285a) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005285a) list_setting_number_pane_vc_t

0x563e,	// (0x000486a5) set_value_pane_vc_ParamLimits

0x563e,	// (0x000486a5) set_value_pane_vc

0xa6c6,	// (0x0004d72d) list_double2_graphic_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double2_graphic_pane_vc

0xa6c6,	// (0x0004d72d) list_double2_large_graphic_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double2_large_graphic_pane_vc

0xa6c6,	// (0x0004d72d) list_double2_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double2_pane_vc

0xa6c6,	// (0x0004d72d) list_double_graphic_heading_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double_graphic_heading_pane_vc

0xa6c6,	// (0x0004d72d) list_double_graphic_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double_graphic_pane_vc

0xa6c6,	// (0x0004d72d) list_double_heading_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double_heading_pane_vc

0xa6da,	// (0x0004d741) list_double_large_graphic_pane_vc_ParamLimits

0xa6da,	// (0x0004d741) list_double_large_graphic_pane_vc

0xa6c6,	// (0x0004d72d) list_double_number_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double_number_pane_vc

0xa6c6,	// (0x0004d72d) list_double_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double_pane_vc

0xa6c6,	// (0x0004d72d) list_double_time_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_double_time_pane_vc

0xa6c6,	// (0x0004d72d) list_setting_number_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_setting_number_pane_vc

0xa6c6,	// (0x0004d72d) list_setting_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_setting_pane_vc

0xa6c6,	// (0x0004d72d) list_single_graphic_heading_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_single_graphic_heading_pane_vc

0xa6c6,	// (0x0004d72d) list_single_heading_pane_vc_ParamLimits

0xa6c6,	// (0x0004d72d) list_single_heading_pane_vc

0xa6fc,	// (0x0004d763) list_single_number_heading_pane_vc_ParamLimits

0xa6fc,	// (0x0004d763) list_single_number_heading_pane_vc

0x5594,	// (0x000485fb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5594,	// (0x000485fb) list_double_graphic_heading_pane_vc_g1

0x75bc,	// (0x0004a623) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x75bc,	// (0x0004a623) list_double_graphic_heading_pane_vc_g2

0x75c8,	// (0x0004a62f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x75c8,	// (0x0004a62f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x00052a5f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x00052a5f) list_double_graphic_heading_pane_vc_g

0x56f2,	// (0x00048759) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56f2,	// (0x00048759) list_double_graphic_heading_pane_vc_t1

0x5708,	// (0x0004876f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5708,	// (0x0004876f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x00052a66) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x00052a66) list_double_graphic_heading_pane_vc_t

0x71b0,	// (0x0004a217) list_setting_pane_vc_g1_ParamLimits

0x71b0,	// (0x0004a217) list_setting_pane_vc_g1

0x71bc,	// (0x0004a223) list_setting_pane_vc_g2_ParamLimits

0x71bc,	// (0x0004a223) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00052855) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00052855) list_setting_pane_vc_g

0x5726,	// (0x0004878d) list_setting_pane_vc_t1_ParamLimits

0x5726,	// (0x0004878d) list_setting_pane_vc_t1

0x5742,	// (0x000487a9) list_setting_pane_vc_t2_ParamLimits

0x5742,	// (0x000487a9) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00052a94) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00052a94) list_setting_pane_vc_t

0x563e,	// (0x000486a5) set_value_pane_cp_vc_ParamLimits

0x563e,	// (0x000486a5) set_value_pane_cp_vc

0x411c,	// (0x00047183) list_single_number_heading_pane_vc_g1_ParamLimits

0x411c,	// (0x00047183) list_single_number_heading_pane_vc_g1

0x7142,	// (0x0004a1a9) list_single_number_heading_pane_vc_g2_ParamLimits

0x7142,	// (0x0004a1a9) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005284b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005284b) list_single_number_heading_pane_vc_g

0x55b6,	// (0x0004861d) list_single_number_heading_pane_vc_t1_ParamLimits

0x55b6,	// (0x0004861d) list_single_number_heading_pane_vc_t1

0x575e,	// (0x000487c5) list_single_number_heading_pane_vc_t2_ParamLimits

0x575e,	// (0x000487c5) list_single_number_heading_pane_vc_t2

0x5770,	// (0x000487d7) list_single_number_heading_pane_vc_t3_ParamLimits

0x5770,	// (0x000487d7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00052a99) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00052a99) list_single_number_heading_pane_vc_t

0x5594,	// (0x000485fb) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5594,	// (0x000485fb) list_single_graphic_heading_pane_vc_g1

0x411c,	// (0x00047183) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x411c,	// (0x00047183) list_single_graphic_heading_pane_vc_g4

0x7142,	// (0x0004a1a9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7142,	// (0x0004a1a9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005282a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005282a) list_single_graphic_heading_pane_vc_g

0x55b6,	// (0x0004861d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x55b6,	// (0x0004861d) list_single_graphic_heading_pane_vc_t1

0x5782,	// (0x000487e9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5782,	// (0x000487e9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00052aa0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00052aa0) list_single_graphic_heading_pane_vc_t

0x411c,	// (0x00047183) list_double2_pane_vc_g1_ParamLimits

0x411c,	// (0x00047183) list_double2_pane_vc_g1

0x7142,	// (0x0004a1a9) list_double2_pane_vc_g2_ParamLimits

0x7142,	// (0x0004a1a9) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005284b) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005284b) list_double2_pane_vc_g

0x5794,	// (0x000487fb) list_double2_pane_vc_t1_ParamLimits

0x5794,	// (0x000487fb) list_double2_pane_vc_t1

0x75d4,	// (0x0004a63b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x75d4,	// (0x0004a63b) list_double2_large_graphic_pane_vc_g1

0x411c,	// (0x00047183) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x411c,	// (0x00047183) list_double2_large_graphic_pane_vc_g2

0x7142,	// (0x0004a1a9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7142,	// (0x0004a1a9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00052aa5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00052aa5) list_double2_large_graphic_pane_vc_g

0x57aa,	// (0x00048811) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x57aa,	// (0x00048811) list_double2_large_graphic_pane_vc_t1

0x75e0,	// (0x0004a647) list_double_time_pane_vc_g1_ParamLimits

0x75e0,	// (0x0004a647) list_double_time_pane_vc_g1

0x75ec,	// (0x0004a653) list_double_time_pane_vc_g2_ParamLimits

0x75ec,	// (0x0004a653) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00052aac) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00052aac) list_double_time_pane_vc_g

0x57c0,	// (0x00048827) list_double_time_pane_vc_t1_ParamLimits

0x57c0,	// (0x00048827) list_double_time_pane_vc_t1

0x57ea,	// (0x00048851) list_double_time_pane_vc_t2_ParamLimits

0x57ea,	// (0x00048851) list_double_time_pane_vc_t2

0x5833,	// (0x0004889a) list_double_time_pane_vc_t3_ParamLimits

0x5833,	// (0x0004889a) list_double_time_pane_vc_t3

0x5845,	// (0x000488ac) list_double_time_pane_vc_t4_ParamLimits

0x5845,	// (0x000488ac) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00052ab1) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00052ab1) list_double_time_pane_vc_t

0x411c,	// (0x00047183) list_double_pane_vc_g1_ParamLimits

0x411c,	// (0x00047183) list_double_pane_vc_g1

0x7142,	// (0x0004a1a9) list_double_pane_vc_g2_ParamLimits

0x7142,	// (0x0004a1a9) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005284b) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005284b) list_double_pane_vc_g

0x586a,	// (0x000488d1) list_double_pane_vc_t1_ParamLimits

0x586a,	// (0x000488d1) list_double_pane_vc_t1

0x587e,	// (0x000488e5) list_double_pane_vc_t2_ParamLimits

0x587e,	// (0x000488e5) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00052aba) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00052aba) list_double_pane_vc_t

0x411c,	// (0x00047183) list_double_number_pane_vc_g1_ParamLimits

0x411c,	// (0x00047183) list_double_number_pane_vc_g1

0x7142,	// (0x0004a1a9) list_double_number_pane_vc_g2_ParamLimits

0x7142,	// (0x0004a1a9) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005284b) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005284b) list_double_number_pane_vc_g

0x5894,	// (0x000488fb) list_double_number_pane_vc_t1_ParamLimits

0x5894,	// (0x000488fb) list_double_number_pane_vc_t1

0x58a8,	// (0x0004890f) list_double_number_pane_vc_t2_ParamLimits

0x58a8,	// (0x0004890f) list_double_number_pane_vc_t2

0x58bc,	// (0x00048923) list_double_number_pane_vc_t3_ParamLimits

0x58bc,	// (0x00048923) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00052abf) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00052abf) list_double_number_pane_vc_t

0x75f8,	// (0x0004a65f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x75f8,	// (0x0004a65f) list_double_large_graphic_pane_vc_g1

0x7620,	// (0x0004a687) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7620,	// (0x0004a687) list_double_large_graphic_pane_vc_g2

0x7634,	// (0x0004a69b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7634,	// (0x0004a69b) list_double_large_graphic_pane_vc_g3

0x58d2,	// (0x00048939) list_double_large_graphic_pane_vc_g4_ParamLimits

0x58d2,	// (0x00048939) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00052ac6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00052ac6) list_double_large_graphic_pane_vc_g

0x58e2,	// (0x00048949) list_double_large_graphic_pane_vc_t1_ParamLimits

0x58e2,	// (0x00048949) list_double_large_graphic_pane_vc_t1

0x5904,	// (0x0004896b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5904,	// (0x0004896b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00052acf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00052acf) list_double_large_graphic_pane_vc_t

0x75bc,	// (0x0004a623) list_double_heading_pane_vc_g1_ParamLimits

0x75bc,	// (0x0004a623) list_double_heading_pane_vc_g1

0x75c8,	// (0x0004a62f) list_double_heading_pane_vc_g2_ParamLimits

0x75c8,	// (0x0004a62f) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00052ad4) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00052ad4) list_double_heading_pane_vc_g

0x5924,	// (0x0004898b) list_double_heading_pane_vc_t1_ParamLimits

0x5924,	// (0x0004898b) list_double_heading_pane_vc_t1

0x55b6,	// (0x0004861d) list_double_heading_pane_vc_t2_ParamLimits

0x55b6,	// (0x0004861d) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00052ad9) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00052ad9) list_double_heading_pane_vc_t

0x5936,	// (0x0004899d) list_double_graphic_pane_vc_g1_ParamLimits

0x5936,	// (0x0004899d) list_double_graphic_pane_vc_g1

0x7643,	// (0x0004a6aa) list_double_graphic_pane_vc_g2_ParamLimits

0x7643,	// (0x0004a6aa) list_double_graphic_pane_vc_g2

0x411c,	// (0x00047183) list_double_graphic_pane_vc_g3_ParamLimits

0x411c,	// (0x00047183) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00052ade) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00052ade) list_double_graphic_pane_vc_g

0x5942,	// (0x000489a9) list_double_graphic_pane_vc_t1_ParamLimits

0x5942,	// (0x000489a9) list_double_graphic_pane_vc_t1

0x596c,	// (0x000489d3) list_double_graphic_pane_vc_t2_ParamLimits

0x596c,	// (0x000489d3) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00052ae7) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00052ae7) list_double_graphic_pane_vc_t

0x5c8c,	// (0x00048cf3) aid_size_cell_fastswap

0x5c94,	// (0x00048cfb) aid_size_cell_touch_ParamLimits

0x5c94,	// (0x00048cfb) aid_size_cell_touch

0x5ef5,	// (0x00048f5c) popup_fast_swap_wide_window_ParamLimits

0x5ef5,	// (0x00048f5c) popup_fast_swap_wide_window

0x6013,	// (0x0004907a) touch_pane_ParamLimits

0x6013,	// (0x0004907a) touch_pane

0x07d7,	// (0x0004383e) button_value_adjust_pane_cp2

0x524d,	// (0x000482b4) button_value_adjust_pane_cp4

0x5275,	// (0x000482dc) form_field_data_pane_cp2

0x529a,	// (0x00048301) form_field_data_wide_pane_cp2

0x0b3d,	// (0x00043ba4) bg_scroll_pane_ParamLimits

0x676a,	// (0x000497d1) scroll_handle_pane_ParamLimits

0x677e,	// (0x000497e5) scroll_sc2_down_pane_ParamLimits

0x677e,	// (0x000497e5) scroll_sc2_down_pane

0x0b6e,	// (0x00043bd5) scroll_sc2_up_pane_ParamLimits

0x0b6e,	// (0x00043bd5) scroll_sc2_up_pane

0xb350,	// (0x0004e3b7) grid_wheel_folder_pane_g1_ParamLimits

0xb350,	// (0x0004e3b7) grid_wheel_folder_pane_g1

0x6aa2,	// (0x00049b09) clock_nsta_pane_cp2_ParamLimits

0x6aa2,	// (0x00049b09) clock_nsta_pane_cp2

0x6528,	// (0x0004958f) listscroll_midp_pane_ParamLimits

0x6bde,	// (0x00049c45) midp_canvas_pane

0x6f60,	// (0x00049fc7) nsta_clock_indic_pane

0x6fae,	// (0x0004a015) listscroll_form_pane_vc

0x6fd2,	// (0x0004a039) listscroll_set_pane_vc_ParamLimits

0x6fd2,	// (0x0004a039) listscroll_set_pane_vc

0x8cee,	// (0x0004bd55) clock_nsta_pane

0x8d6b,	// (0x0004bdd2) indicator_nsta_pane

0x9063,	// (0x0004c0ca) bg_popup_sub_pane_cp2_ParamLimits

0x9077,	// (0x0004c0de) find_pane_cp2_ParamLimits

0x9077,	// (0x0004c0de) find_pane_cp2

0x908d,	// (0x0004c0f4) grid_toobar_pane_ParamLimits

0x916d,	// (0x0004c1d4) list_form_gen_pane_vc_ParamLimits

0x916d,	// (0x0004c1d4) list_form_gen_pane_vc

0x9183,	// (0x0004c1ea) scroll_pane_cp8_vc_ParamLimits

0x9183,	// (0x0004c1ea) scroll_pane_cp8_vc

0x91ff,	// (0x0004c266) data_form_wide_pane_vc_ParamLimits

0x91ff,	// (0x0004c266) data_form_wide_pane_vc

0x920b,	// (0x0004c272) form_field_data_wide_pane_vc_g1

0x9213,	// (0x0004c27a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9213,	// (0x0004c27a) form_field_data_wide_pane_vc_t1

0x07eb,	// (0x00043852) input_focus_pane_cp6_vc_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_cp6_vc

0x9515,	// (0x0004c57c) list_midp_pane_ParamLimits

0x9521,	// (0x0004c588) scroll_pane_cp16_ParamLimits

0x9521,	// (0x0004c588) scroll_pane_cp16

0x956f,	// (0x0004c5d6) button_value_adjust_pane_ParamLimits

0x956f,	// (0x0004c5d6) button_value_adjust_pane

0xa500,	// (0x0004d567) button_value_adjust_pane_cp6_ParamLimits

0xa500,	// (0x0004d567) button_value_adjust_pane_cp6

0xa64e,	// (0x0004d6b5) settings_code_pane_cp_ParamLimits

0xa64e,	// (0x0004d6b5) settings_code_pane_cp

0xda68,	// (0x00050acf) cell_touch_pane_g1

0xda68,	// (0x00050acf) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005276f) cell_touch_pane_g

0xac49,	// (0x0004dcb0) cell_touch_pane_cp_ParamLimits

0xac49,	// (0x0004dcb0) cell_touch_pane_cp

0xac59,	// (0x0004dcc0) cell_touch_pane_ParamLimits

0xac59,	// (0x0004dcc0) cell_touch_pane

0xda68,	// (0x00050acf) scroll_sc2_down_pane_g1

0xda68,	// (0x00050acf) scroll_sc2_up_pane_g1

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp4_vc

0xac6a,	// (0x0004dcd1) list_set_graphic_pane_vc_g1_ParamLimits

0xac6a,	// (0x0004dcd1) list_set_graphic_pane_vc_g1

0x176f,	// (0x000447d6) list_set_graphic_pane_vc_g2_ParamLimits

0x176f,	// (0x000447d6) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x00052a6b) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x00052a6b) list_set_graphic_pane_vc_g

0xac76,	// (0x0004dcdd) text_primary_small_cp13_vc_ParamLimits

0xac76,	// (0x0004dcdd) text_primary_small_cp13_vc

0xac8e,	// (0x0004dcf5) list_set_graphic_pane_vc_ParamLimits

0xac8e,	// (0x0004dcf5) list_set_graphic_pane_vc

0xda72,	// (0x00050ad9) input_focus_pane_cp2_vc

0xda68,	// (0x00050acf) setting_code_pane_vc_g1

0xdae3,	// (0x00050b4a) setting_code_pane_vc_t1

0xaca3,	// (0x0004dd0a) set_text_pane_vc_t1_ParamLimits

0xaca3,	// (0x0004dd0a) set_text_pane_vc_t1

0xda72,	// (0x00050ad9) input_focus_pane_cp1_vc

0xacc1,	// (0x0004dd28) list_set_text_pane_vc

0xda68,	// (0x00050acf) setting_text_pane_vc_g1

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp2_vc

0xdada,	// (0x00050b41) setting_slider_graphic_pane_vc_g1

0xaccb,	// (0x0004dd32) setting_slider_graphic_pane_vc_t1

0xacdd,	// (0x0004dd44) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x00052a70) setting_slider_graphic_pane_vc_t

0xacef,	// (0x0004dd56) slider_set_pane_cp_vc

0xacf9,	// (0x0004dd60) slider_set_pane_vc_g1

0xad02,	// (0x0004dd69) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x00052a75) slider_set_pane_vc_g

0x0846,	// (0x000438ad) set_opt_bg_pane_g1_copy1

0x084e,	// (0x000438b5) set_opt_bg_pane_g2_copy1

0xad2e,	// (0x0004dd95) set_opt_bg_pane_g3_copy1

0x085e,	// (0x000438c5) set_opt_bg_pane_g4_copy1

0x0866,	// (0x000438cd) set_opt_bg_pane_g5_copy1

0x086e,	// (0x000438d5) set_opt_bg_pane_g6_copy1

0xad38,	// (0x0004dd9f) set_opt_bg_pane_g7_copy1

0xad42,	// (0x0004dda9) set_opt_bg_pane_g8_copy1

0xad4c,	// (0x0004ddb3) set_opt_bg_pane_g9_copy1

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp_vc

0xad56,	// (0x0004ddbd) setting_slider_pane_vc_t1

0xad65,	// (0x0004ddcc) setting_slider_pane_vc_t2

0xad77,	// (0x0004ddde) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x00052a84) setting_slider_pane_vc_t

0xad89,	// (0x0004ddf0) slider_set_pane_vc

0x726b,	// (0x0004a2d2) volume_set_pane_vc_g1

0x7274,	// (0x0004a2db) volume_set_pane_vc_g2

0x727d,	// (0x0004a2e4) volume_set_pane_vc_g3

0x7286,	// (0x0004a2ed) volume_set_pane_vc_g4

0x728f,	// (0x0004a2f6) volume_set_pane_vc_g5

0x7298,	// (0x0004a2ff) volume_set_pane_vc_g6

0x72a1,	// (0x0004a308) volume_set_pane_vc_g7

0x72aa,	// (0x0004a311) volume_set_pane_vc_g8

0x72b3,	// (0x0004a31a) volume_set_pane_vc_g9

0x72bc,	// (0x0004a323) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00052922) volume_set_pane_vc_g

0xad93,	// (0x0004ddfa) volume_set_pane_vc

0xad9d,	// (0x0004de04) button_value_adjust_pane_cp1_vc

0xada7,	// (0x0004de0e) list_highlight_pane_cp2_vc

0xadb0,	// (0x0004de17) list_set_pane_vc_ParamLimits

0xadb0,	// (0x0004de17) list_set_pane_vc

0xae20,	// (0x0004de87) main_pane_set_vc_t1_ParamLimits

0xae20,	// (0x0004de87) main_pane_set_vc_t1

0xae35,	// (0x0004de9c) main_pane_set_vc_t2_ParamLimits

0xae35,	// (0x0004de9c) main_pane_set_vc_t2

0xae47,	// (0x0004deae) main_pane_set_vc_t3_ParamLimits

0xae47,	// (0x0004deae) main_pane_set_vc_t3

0xae5b,	// (0x0004dec2) main_pane_set_vc_t4_ParamLimits

0xae5b,	// (0x0004dec2) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00052a8b) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00052a8b) main_pane_set_vc_t

0xae6f,	// (0x0004ded6) setting_code_pane_vc_ParamLimits

0xae6f,	// (0x0004ded6) setting_code_pane_vc

0xae80,	// (0x0004dee7) setting_slider_graphic_pane_vc

0xae80,	// (0x0004dee7) setting_slider_pane_vc

0xae80,	// (0x0004dee7) setting_text_pane_vc

0xae80,	// (0x0004dee7) setting_volume_pane_vc

0xae8a,	// (0x0004def1) scroll_pane_cp121_vc

0x07c5,	// (0x0004382c) set_content_pane_vc

0xae92,	// (0x0004def9) button_value_adjust_pane_g1

0xae9b,	// (0x0004df02) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00052aec) button_value_adjust_pane_g

0xaea4,	// (0x0004df0b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xaea4,	// (0x0004df0b) form_field_slider_wide_pane_vc_t1

0xaeb6,	// (0x0004df1d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xaeb6,	// (0x0004df1d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00052af1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00052af1) form_field_slider_wide_pane_vc_t

0xdbff,	// (0x00050c66) input_focus_pane_cp10_vc_ParamLimits

0xdbff,	// (0x00050c66) input_focus_pane_cp10_vc

0xaee2,	// (0x0004df49) slider_cont_pane_cp1_vc_ParamLimits

0xaee2,	// (0x0004df49) slider_cont_pane_cp1_vc

0xaef4,	// (0x0004df5b) slider_form_pane_g1_cp2

0xad02,	// (0x0004dd69) slider_form_pane_g2_cp2

0xaf21,	// (0x0004df88) form_field_slider_pane_vc_t3

0xaf2f,	// (0x0004df96) form_field_slider_pane_vc_t4

0xaf3d,	// (0x0004dfa4) slider_form_pane_vc_ParamLimits

0xaf3d,	// (0x0004dfa4) slider_form_pane_vc

0xaf4a,	// (0x0004dfb1) form_field_slider_pane_vc_t1_ParamLimits

0xaf4a,	// (0x0004dfb1) form_field_slider_pane_vc_t1

0xaeb6,	// (0x0004df1d) form_field_slider_pane_vc_t2_ParamLimits

0xaeb6,	// (0x0004df1d) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00052b03) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00052b03) form_field_slider_pane_vc_t

0xdbff,	// (0x00050c66) input_focus_pane_cp9_vc_ParamLimits

0xdbff,	// (0x00050c66) input_focus_pane_cp9_vc

0xaf60,	// (0x0004dfc7) slider_cont_pane_vc_ParamLimits

0xaf60,	// (0x0004dfc7) slider_cont_pane_vc

0xaf74,	// (0x0004dfdb) list_form_graphic_pane_cp_vc_ParamLimits

0xaf74,	// (0x0004dfdb) list_form_graphic_pane_cp_vc

0x920b,	// (0x0004c272) form_field_popup_wide_pane_vc_g1

0xaf89,	// (0x0004dff0) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaf89,	// (0x0004dff0) form_field_popup_wide_pane_vc_t1

0x07eb,	// (0x00043852) input_focus_pane_cp8_vc_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_cp8_vc

0xafce,	// (0x0004e035) list_form_wide_pane_vc_ParamLimits

0xafce,	// (0x0004e035) list_form_wide_pane_vc

0xafda,	// (0x0004e041) list_form_graphic_pane_vc_g1

0xafe2,	// (0x0004e049) list_form_graphic_pane_vc_t1_ParamLimits

0xafe2,	// (0x0004e049) list_form_graphic_pane_vc_t1

0xdacc,	// (0x00050b33) list_highlight_pane_cp5_vc_ParamLimits

0xdacc,	// (0x00050b33) list_highlight_pane_cp5_vc

0xaffe,	// (0x0004e065) list_form_graphic_pane_vc_ParamLimits

0xaffe,	// (0x0004e065) list_form_graphic_pane_vc

0x920b,	// (0x0004c272) form_field_popup_pane_vc_g1

0xb014,	// (0x0004e07b) form_field_popup_pane_vc_t1_ParamLimits

0xb014,	// (0x0004e07b) form_field_popup_pane_vc_t1

0x07eb,	// (0x00043852) input_focus_pane_cp7_vc_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_cp7_vc

0xb02b,	// (0x0004e092) list_form_pane_vc_ParamLimits

0xb02b,	// (0x0004e092) list_form_pane_vc

0xb037,	// (0x0004e09e) data_form_pane_vc_t1_ParamLimits

0xb037,	// (0x0004e09e) data_form_pane_vc_t1

0x0846,	// (0x000438ad) input_focus_pane_vc_g1

0x084e,	// (0x000438b5) input_focus_pane_vc_g2

0x0856,	// (0x000438bd) input_focus_pane_vc_g3

0x085e,	// (0x000438c5) input_focus_pane_vc_g4

0x0866,	// (0x000438cd) input_focus_pane_vc_g5

0x086e,	// (0x000438d5) input_focus_pane_vc_g6

0x0876,	// (0x000438dd) input_focus_pane_vc_g7

0x087e,	// (0x000438e5) input_focus_pane_vc_g8

0x0886,	// (0x000438ed) input_focus_pane_vc_g9

0xda68,	// (0x00050acf) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000526f8) input_focus_pane_vc_g

0x91ff,	// (0x0004c266) data_form_pane_vc_ParamLimits

0x91ff,	// (0x0004c266) data_form_pane_vc

0x920b,	// (0x0004c272) form_field_data_pane_vc_g1

0xb054,	// (0x0004e0bb) form_field_data_pane_vc_t1_ParamLimits

0xb054,	// (0x0004e0bb) form_field_data_pane_vc_t1

0x07eb,	// (0x00043852) input_focus_pane_vc_ParamLimits

0x07eb,	// (0x00043852) input_focus_pane_vc

0xb06e,	// (0x0004e0d5) button_value_adjust_pane_cp3_vc

0xb076,	// (0x0004e0dd) button_value_adjust_pane_cp5_vc

0xb07e,	// (0x0004e0e5) form_field_data_pane_vc_ParamLimits

0xb07e,	// (0x0004e0e5) form_field_data_pane_vc

0xb099,	// (0x0004e100) form_field_data_pane_vc_cp2

0xb0a1,	// (0x0004e108) form_field_data_wide_pane_vc_ParamLimits

0xb0a1,	// (0x0004e108) form_field_data_wide_pane_vc

0xb0bb,	// (0x0004e122) form_field_data_wide_pane_vc_cp2

0xb0c3,	// (0x0004e12a) form_field_popup_pane_vc_ParamLimits

0xb0c3,	// (0x0004e12a) form_field_popup_pane_vc

0xb0de,	// (0x0004e145) form_field_popup_wide_pane_vc_ParamLimits

0xb0de,	// (0x0004e145) form_field_popup_wide_pane_vc

0xb0f8,	// (0x0004e15f) form_field_slider_pane_vc_ParamLimits

0xb0f8,	// (0x0004e15f) form_field_slider_pane_vc

0xb10b,	// (0x0004e172) form_field_slider_wide_pane_vc_ParamLimits

0xb10b,	// (0x0004e172) form_field_slider_wide_pane_vc

0xb11e,	// (0x0004e185) grid_touch_1_pane_ParamLimits

0xb11e,	// (0x0004e185) grid_touch_1_pane

0xb12a,	// (0x0004e191) grid_touch_2_pane_ParamLimits

0xb12a,	// (0x0004e191) grid_touch_2_pane

0x43a9,	// (0x00047410) touch_pane_g1_ParamLimits

0x43a9,	// (0x00047410) touch_pane_g1

0xb144,	// (0x0004e1ab) cell_app_pane_cp_wide_ParamLimits

0xb144,	// (0x0004e1ab) cell_app_pane_cp_wide

0xb155,	// (0x0004e1bc) grid_popup_fast_wide_pane_ParamLimits

0xb155,	// (0x0004e1bc) grid_popup_fast_wide_pane

0xb169,	// (0x0004e1d0) scroll_pane_cp19_ParamLimits

0xb169,	// (0x0004e1d0) scroll_pane_cp19

0xda72,	// (0x00050ad9) bg_popup_window_pane_cp20

0xb17d,	// (0x0004e1e4) listscroll_popup_fast_wide_pane

0xdacc,	// (0x00050b33) grid_indicator_nsta_pane

0xb185,	// (0x0004e1ec) clock_nsta_pane_g1

0xb18e,	// (0x0004e1f5) clock_nsta_pane_t1

0xb1aa,	// (0x0004e211) cell_indicator_nsta_pane_ParamLimits

0xb1aa,	// (0x0004e211) cell_indicator_nsta_pane

0xb1dc,	// (0x0004e243) cell_indicator_nsta_pane_g1

0xb1ea,	// (0x0004e251) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00052b14) cell_indicator_nsta_pane_g

0xb200,	// (0x0004e267) clock_nsta_pane_cp

0xb208,	// (0x0004e26f) indicator_nsta_pane_cp

0xb211,	// (0x0004e278) nsta_clock_indic_pane_g1

0xdb08,	// (0x00050b6f) grid_indicator_pane

0x0c60,	// (0x00043cc7) scroll_pane_cp29

0x69ee,	// (0x00049a55) indicator_nsta_pane_cp2_ParamLimits

0x69ee,	// (0x00049a55) indicator_nsta_pane_cp2

0xdacc,	// (0x00050b33) main_apps_wheel_pane

0x93f2,	// (0x0004c459) form_midp_field_text_pane_ParamLimits

0x9541,	// (0x0004c5a8) scroll_bar_cp050_ParamLimits

0xb27a,	// (0x0004e2e1) cell_indicator_pane_ParamLimits

0xb27a,	// (0x0004e2e1) cell_indicator_pane

0xb292,	// (0x0004e2f9) cell_indicator_pane_g1

0xb29c,	// (0x0004e303) grid_wheel_folder_pane_ParamLimits

0xb29c,	// (0x0004e303) grid_wheel_folder_pane

0xb2b0,	// (0x0004e317) list_wheel_apps_pane_ParamLimits

0xb2b0,	// (0x0004e317) list_wheel_apps_pane

0xb2c3,	// (0x0004e32a) main_apps_wheel_pane_g1_ParamLimits

0xb2c3,	// (0x0004e32a) main_apps_wheel_pane_g1

0xb2df,	// (0x0004e346) main_apps_wheel_pane_g2_ParamLimits

0xb2df,	// (0x0004e346) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00052b30) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00052b30) main_apps_wheel_pane_g

0xb2fb,	// (0x0004e362) main_apps_wheel_pane_t1_ParamLimits

0xb2fb,	// (0x0004e362) main_apps_wheel_pane_t1

0xb324,	// (0x0004e38b) list_wheel_apps_pane_g1

0xb32c,	// (0x0004e393) list_wheel_apps_pane_g2

0xb334,	// (0x0004e39b) list_wheel_apps_pane_g3

0xb33c,	// (0x0004e3a3) list_wheel_apps_pane_g4

0xb346,	// (0x0004e3ad) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00052b35) list_wheel_apps_pane_g

0x0fe0,	// (0x00044047) navi_icon_text_pane

0x8c1b,	// (0x0004bc82) aid_fill_nsta

0xb367,	// (0x0004e3ce) navi_icon_text_pane_g1

0xb373,	// (0x0004e3da) navi_icon_text_pane_t1

0x6b37,	// (0x00049b9e) list_set_graphic_pane_t1_ParamLimits

0x6b37,	// (0x00049b9e) list_set_graphic_pane_t1

0x9c92,	// (0x0004ccf9) popup_midp_note_alarm_window_t6_ParamLimits

0x9c92,	// (0x0004ccf9) popup_midp_note_alarm_window_t6

0x9ca4,	// (0x0004cd0b) popup_midp_note_alarm_window_t7_ParamLimits

0x9ca4,	// (0x0004cd0b) popup_midp_note_alarm_window_t7

0x9cb6,	// (0x0004cd1d) popup_midp_note_alarm_window_t8_ParamLimits

0x9cb6,	// (0x0004cd1d) popup_midp_note_alarm_window_t8

0x9cc8,	// (0x0004cd2f) popup_midp_note_alarm_window_t9_ParamLimits

0x9cc8,	// (0x0004cd2f) popup_midp_note_alarm_window_t9

0x9cda,	// (0x0004cd41) popup_midp_note_alarm_window_t10_ParamLimits

0x9cda,	// (0x0004cd41) popup_midp_note_alarm_window_t10

0x9cec,	// (0x0004cd53) popup_midp_note_alarm_window_t11_ParamLimits

0x9cec,	// (0x0004cd53) popup_midp_note_alarm_window_t11

0x9cfe,	// (0x0004cd65) scroll_pane_cp17_ParamLimits

0x9cfe,	// (0x0004cd65) scroll_pane_cp17

0x726b,	// (0x0004a2d2) volume_small_pane_cp_g1

0x7660,	// (0x0004a6c7) volume_small_pane_cp_g2

0x7669,	// (0x0004a6d0) volume_small_pane_cp_g3

0x7672,	// (0x0004a6d9) volume_small_pane_cp_g4

0x767b,	// (0x0004a6e2) volume_small_pane_cp_g5

0x7684,	// (0x0004a6eb) volume_small_pane_cp_g6

0x768d,	// (0x0004a6f4) volume_small_pane_cp_g7

0x7696,	// (0x0004a6fd) volume_small_pane_cp_g8

0x769f,	// (0x0004a706) volume_small_pane_cp_g9

0x76a8,	// (0x0004a70f) volume_small_pane_cp_g10

0x41d7,	// (0x0004723e) midp_ticker_pane_g1_ParamLimits

0x41e3,	// (0x0004724a) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000527c4) midp_ticker_pane_g_ParamLimits

0x6c83,	// (0x00049cea) midp_ticker_pane_t1_ParamLimits

0x8c31,	// (0x0004bc98) aid_fill_nsta_2

0x952d,	// (0x0004c594) list_form2_midp_pane

0xa695,	// (0x0004d6fc) midp_editing_number_pane_ParamLimits

0xa6a4,	// (0x0004d70b) midp_ticker_pane_ParamLimits

0xb385,	// (0x0004e3ec) form2_midp_field_pane

0xb3a9,	// (0x0004e410) scroll_pane_cp51

0xb3c9,	// (0x0004e430) form2_midp_button_pane_ParamLimits

0xb3c9,	// (0x0004e430) form2_midp_button_pane

0xb3db,	// (0x0004e442) form2_midp_content_pane_ParamLimits

0xb3db,	// (0x0004e442) form2_midp_content_pane

0xb3f5,	// (0x0004e45c) form2_midp_field_choice_group_pane

0xb3fd,	// (0x0004e464) form2_midp_field_pane_g1

0xb405,	// (0x0004e46c) form2_midp_field_pane_g2

0xb40d,	// (0x0004e474) form2_midp_field_pane_g3

0xb415,	// (0x0004e47c) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00052b5a) form2_midp_field_pane_g

0xb41d,	// (0x0004e484) form2_midp_gauge_slider_pane

0xb425,	// (0x0004e48c) form2_midp_gauge_wait_pane

0xb42d,	// (0x0004e494) form2_midp_image_pane_ParamLimits

0xb42d,	// (0x0004e494) form2_midp_image_pane

0xb448,	// (0x0004e4af) form2_midp_label_pane_ParamLimits

0xb448,	// (0x0004e4af) form2_midp_label_pane

0xb467,	// (0x0004e4ce) form2_midp_label_pane_cp_ParamLimits

0xb467,	// (0x0004e4ce) form2_midp_label_pane_cp

0xb488,	// (0x0004e4ef) form2_midp_string_pane_ParamLimits

0xb488,	// (0x0004e4ef) form2_midp_string_pane

0x598a,	// (0x000489f1) form2_midp_text_pane_ParamLimits

0x598a,	// (0x000489f1) form2_midp_text_pane

0xb49a,	// (0x0004e501) form2_midp_time_pane

0xb4aa,	// (0x0004e511) input_focus_pane_cp51_ParamLimits

0xb4aa,	// (0x0004e511) input_focus_pane_cp51

0xb4c2,	// (0x0004e529) form2_midp_label_pane_t1_ParamLimits

0xb4c2,	// (0x0004e529) form2_midp_label_pane_t1

0x59ad,	// (0x00048a14) form2_mdip_text_pane_t1_ParamLimits

0x59ad,	// (0x00048a14) form2_mdip_text_pane_t1

0x59cc,	// (0x00048a33) form2_midp_time_pane_t1

0xb510,	// (0x0004e577) form2_midp_gauge_slider_pane_t1

0xb522,	// (0x0004e589) form2_midp_gauge_slider_pane_t2

0xb534,	// (0x0004e59b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00052b63) form2_midp_gauge_slider_pane_t

0xb546,	// (0x0004e5ad) form2_midp_slider_pane

0xb552,	// (0x0004e5b9) form2_midp_gauge_wait_pane_t1

0xb560,	// (0x0004e5c7) form2_midp_wait_pane_ParamLimits

0xb560,	// (0x0004e5c7) form2_midp_wait_pane

0x9252,	// (0x0004c2b9) list_single_2graphic_pane_cp4_ParamLimits

0x9252,	// (0x0004c2b9) list_single_2graphic_pane_cp4

0xb58b,	// (0x0004e5f2) list_single_midp_graphic_pane_cp_ParamLimits

0xb58b,	// (0x0004e5f2) list_single_midp_graphic_pane_cp

0xda72,	// (0x00050ad9) list_highlight_pane_cp20

0xb5af,	// (0x0004e616) list_single_2graphic_pane_g1_cp4

0xab4c,	// (0x0004dbb3) list_single_2graphic_pane_g2_cp4

0xb5b7,	// (0x0004e61e) list_single_2graphic_pane_t1_cp4

0xdacc,	// (0x00050b33) list_highlight_pane_cp21

0xb5c6,	// (0x0004e62d) list_single_midp_graphic_pane_g4_cp

0xb5d5,	// (0x0004e63c) list_single_midp_graphic_pane_t1_cp

0xb5ea,	// (0x0004e651) form2_mdip_string_pane_t1_ParamLimits

0xb5ea,	// (0x0004e651) form2_mdip_string_pane_t1

0xda72,	// (0x00050ad9) bg_wml_button_pane_cp2

0xda68,	// (0x00050acf) form2_midp_image_pane_g1

0x647b,	// (0x000494e2) list_double_large_graphic_pane_g5_ParamLimits

0x647b,	// (0x000494e2) list_double_large_graphic_pane_g5

0x6528,	// (0x0004958f) midp_form_pane_ParamLimits

0xdacc,	// (0x00050b33) main_apps_wheel_pane_ParamLimits

0x89c5,	// (0x0004ba2c) popup_preview_window_ParamLimits

0x89c5,	// (0x0004ba2c) popup_preview_window

0x8bac,	// (0x0004bc13) popup_touch_info_window_ParamLimits

0x8bac,	// (0x0004bc13) popup_touch_info_window

0x8bce,	// (0x0004bc35) popup_touch_menu_window_ParamLimits

0x8bce,	// (0x0004bc35) popup_touch_menu_window

0xda5e,	// (0x00050ac5) bg_popup_sub_pane_cp6

0xb68f,	// (0x0004e6f6) list_touch_menu_pane

0xb697,	// (0x0004e6fe) list_single_touch_menu_pane_ParamLimits

0xb697,	// (0x0004e6fe) list_single_touch_menu_pane

0xb6af,	// (0x0004e716) list_single_touch_menu_pane_t1

0xdacc,	// (0x00050b33) bg_popup_sub_pane_cp7_ParamLimits

0xdacc,	// (0x00050b33) bg_popup_sub_pane_cp7

0xb6bd,	// (0x0004e724) heading_sub_pane

0xb6c5,	// (0x0004e72c) list_touch_info_pane_ParamLimits

0xb6c5,	// (0x0004e72c) list_touch_info_pane

0xb6d4,	// (0x0004e73b) list_single_touch_info_pane_ParamLimits

0xb6d4,	// (0x0004e73b) list_single_touch_info_pane

0xb6e6,	// (0x0004e74d) list_single_touch_info_pane_t1

0xb6f4,	// (0x0004e75b) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00052b71) list_single_touch_info_pane_t

0x41ab,	// (0x00047212) bg_popup_heading_pane_cp

0xb702,	// (0x0004e769) heading_sub_pane_t1

0x9199,	// (0x0004c200) bg_popup_preview_window_pane_cp_ParamLimits

0x9199,	// (0x0004c200) bg_popup_preview_window_pane_cp

0xb6bd,	// (0x0004e724) heading_preview_pane

0xb6c5,	// (0x0004e72c) list_preview_pane_ParamLimits

0xb6c5,	// (0x0004e72c) list_preview_pane

0xb710,	// (0x0004e777) popup_preview_window_g1

0xb6d4,	// (0x0004e73b) list_single_preview_pane_ParamLimits

0xb6d4,	// (0x0004e73b) list_single_preview_pane

0xb718,	// (0x0004e77f) list_single_preview_pane_g1

0xb720,	// (0x0004e787) list_single_preview_pane_t1

0xb6e6,	// (0x0004e74d) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00052b76) list_single_preview_pane_t

0xb72e,	// (0x0004e795) bg_popup_heading_pane_cp2_ParamLimits

0xb72e,	// (0x0004e795) bg_popup_heading_pane_cp2

0xb744,	// (0x0004e7ab) heading_preview_pane_g1

0xb74c,	// (0x0004e7b3) heading_preview_pane_t1_ParamLimits

0xb74c,	// (0x0004e7b3) heading_preview_pane_t1

0xdb1f,	// (0x00050b86) soft_indicator_pane_t1_ParamLimits

0xe062,	// (0x000510c9) scroll_pane_ParamLimits

0x0b65,	// (0x00043bcc) scroll_sc2_left_pane

0x0b5c,	// (0x00043bc3) scroll_sc2_right_pane

0x0b84,	// (0x00043beb) scroll_bg_pane_g1_ParamLimits

0x0b99,	// (0x00043c00) scroll_bg_pane_g2_ParamLimits

0x0bb1,	// (0x00043c18) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005274f) scroll_bg_pane_g_ParamLimits

0x0b84,	// (0x00043beb) scroll_handle_pane_g1_ParamLimits

0x0bd3,	// (0x00043c3a) scroll_handle_pane_g2_ParamLimits

0x0bb1,	// (0x00043c18) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00052756) scroll_handle_pane_g_ParamLimits

0x700c,	// (0x0004a073) popup_choice_list_window_ParamLimits

0x700c,	// (0x0004a073) popup_choice_list_window

0x906f,	// (0x0004c0d6) choice_list_pane

0x90f1,	// (0x0004c158) cell_toolbar_pane_t1

0x9119,	// (0x0004c180) toolbar_button_pane_ParamLimits

0xa1c8,	// (0x0004d22f) ai_gene_pane_1_t2_ParamLimits

0xa1c8,	// (0x0004d22f) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0005297e) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0005297e) ai_gene_pane_1_t

0xb769,	// (0x0004e7d0) scroll_sc2_left_pane_g1

0xb769,	// (0x0004e7d0) scroll_sc2_right_pane_g1

0x6fe4,	// (0x0004a04b) bg_popup_sub_pane_cp10

0xb773,	// (0x0004e7da) list_choice_list_pane

0xb78c,	// (0x0004e7f3) list_single_choice_list_pane_ParamLimits

0xb78c,	// (0x0004e7f3) list_single_choice_list_pane

0xb7a4,	// (0x0004e80b) list_single_choice_list_pane_g1

0x093c,	// (0x000439a3) list_single_choice_list_pane_t1_ParamLimits

0x093c,	// (0x000439a3) list_single_choice_list_pane_t1

0xb7ac,	// (0x0004e813) choice_list_pane_g1

0xb7b4,	// (0x0004e81b) choice_list_pane_t1

0xda5e,	// (0x00050ac5) input_focus_pane_cp11

0x0aba,	// (0x00043b21) title_pane_stacon_g2_ParamLimits

0x0aba,	// (0x00043b21) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00052735) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00052735) title_pane_stacon_g

0x41ab,	// (0x00047212) cursor_press_pane

0x70c6,	// (0x0004a12d) popup_fep_hwr_window_ParamLimits

0x70c6,	// (0x0004a12d) popup_fep_hwr_window

0x8750,	// (0x0004b7b7) popup_fep_vkb_window_ParamLimits

0x8750,	// (0x0004b7b7) popup_fep_vkb_window

0xb7c2,	// (0x0004e829) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00052b9f) fep_vkb_side_pane_g_ParamLimits

0x76dc,	// (0x0004a743) fep_hwr_candidate_pane_ParamLimits

0x76dc,	// (0x0004a743) fep_hwr_candidate_pane

0x7706,	// (0x0004a76d) fep_hwr_side_pane_ParamLimits

0x7706,	// (0x0004a76d) fep_hwr_side_pane

0x7728,	// (0x0004a78f) fep_hwr_top_pane_ParamLimits

0x7728,	// (0x0004a78f) fep_hwr_top_pane

0x7740,	// (0x0004a7a7) fep_hwr_write_pane_ParamLimits

0x7740,	// (0x0004a7a7) fep_hwr_write_pane

0xfb38,	// (0x00052b9f) fep_vkb_side_pane_g

0xb7ca,	// (0x0004e831) fep_hwr_top_pane_g1

0xb7dc,	// (0x0004e843) fep_hwr_top_pane_g2

0x776c,	// (0x0004a7d3) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00052b7b) fep_hwr_top_pane_g

0x7781,	// (0x0004a7e8) fep_hwr_top_text_pane

0x0ccd,	// (0x00043d34) fep_hwr_top_text_pane_g1

0xb812,	// (0x0004e879) fep_hwr_top_text_pane_t1

0x788b,	// (0x0004a8f2) fep_hwr_candidate_pane_g1

0xba5d,	// (0x0004eac4) fep_vkb_keypad_pane_g3_ParamLimits

0xba5d,	// (0x0004eac4) fep_vkb_keypad_pane_g3

0xba89,	// (0x0004eaf0) fep_vkb_keypad_pane_g4_ParamLimits

0xba89,	// (0x0004eaf0) fep_vkb_keypad_pane_g4

0xbb00,	// (0x0004eb67) fep_vkb_bottom_pane_g2_ParamLimits

0xbb00,	// (0x0004eb67) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00052ba6) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00052ba6) fep_vkb_bottom_pane_g

0xb769,	// (0x0004e7d0) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00052bb0) cell_vkb_side_pane_g

0xbb8b,	// (0x0004ebf2) cell_vkb_side_pane_t1

0xbb99,	// (0x0004ec00) cell_vkb_side_pane_t1_copy1

0xb769,	// (0x0004e7d0) bg_fep_vkb_candidate_pane_g2

0xbcdd,	// (0x0004ed44) cell_vkb_candidate_pane_ParamLimits

0xb820,	// (0x0004e887) aid_size_cell_vkb_ParamLimits

0xb820,	// (0x0004e887) aid_size_cell_vkb

0xbcdd,	// (0x0004ed44) cell_vkb_candidate_pane

0x78a5,	// (0x0004a90c) bg_popup_fep_shadow_pane_g1

0xb8b2,	// (0x0004e919) fep_vkb_bottom_pane_ParamLimits

0xb8b2,	// (0x0004e919) fep_vkb_bottom_pane

0xb8ef,	// (0x0004e956) fep_vkb_candidate_pane_ParamLimits

0xb8ef,	// (0x0004e956) fep_vkb_candidate_pane

0xb90b,	// (0x0004e972) fep_vkb_keypad_pane_ParamLimits

0xb90b,	// (0x0004e972) fep_vkb_keypad_pane

0xb93e,	// (0x0004e9a5) fep_vkb_side_pane_ParamLimits

0xb93e,	// (0x0004e9a5) fep_vkb_side_pane

0xb97a,	// (0x0004e9e1) fep_vkb_top_pane_ParamLimits

0xb97a,	// (0x0004e9e1) fep_vkb_top_pane

0xb9b6,	// (0x0004ea1d) fep_vkb_top_pane_g1_ParamLimits

0xb9b6,	// (0x0004ea1d) fep_vkb_top_pane_g1

0xb9c5,	// (0x0004ea2c) fep_vkb_top_pane_g2_ParamLimits

0xb9c5,	// (0x0004ea2c) fep_vkb_top_pane_g2

0xb9d4,	// (0x0004ea3b) fep_vkb_top_pane_g3_ParamLimits

0xb9d4,	// (0x0004ea3b) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00052b96) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00052b96) fep_vkb_top_pane_g

0xb9f2,	// (0x0004ea59) fep_vkb_top_text_pane_ParamLimits

0xb9f2,	// (0x0004ea59) fep_vkb_top_text_pane

0xba03,	// (0x0004ea6a) fep_vkb_side_pane_g1_ParamLimits

0xba03,	// (0x0004ea6a) fep_vkb_side_pane_g1

0xba4c,	// (0x0004eab3) grid_vkb_side_pane_ParamLimits

0xba4c,	// (0x0004eab3) grid_vkb_side_pane

0x78ad,	// (0x0004a914) bg_popup_fep_shadow_pane_g2

0x78b6,	// (0x0004a91d) bg_popup_fep_shadow_pane_g3

0x78be,	// (0x0004a925) bg_popup_fep_shadow_pane_g4

0x78c7,	// (0x0004a92e) bg_popup_fep_shadow_pane_g5

0x78d1,	// (0x0004a938) bg_popup_fep_shadow_pane_g6

0x78d9,	// (0x0004a940) bg_popup_fep_shadow_pane_g7

0x0866,	// (0x000438cd) bg_popup_fep_shadow_pane_g8

0xbaab,	// (0x0004eb12) grid_vkb_keypad_number_pane_ParamLimits

0xbaab,	// (0x0004eb12) grid_vkb_keypad_number_pane

0xbabf,	// (0x0004eb26) grid_vkb_keypad_pane_ParamLimits

0xbabf,	// (0x0004eb26) grid_vkb_keypad_pane

0xbae5,	// (0x0004eb4c) fep_vkb_bottom_pane_g1_ParamLimits

0xbae5,	// (0x0004eb4c) fep_vkb_bottom_pane_g1

0xbb0e,	// (0x0004eb75) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbb0e,	// (0x0004eb75) grid_vkb_keypad_bottom_left_pane

0xbb23,	// (0x0004eb8a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbb23,	// (0x0004eb8a) grid_vkb_keypad_bottom_right_pane

0xbb38,	// (0x0004eb9f) fep_vkb_top_text_pane_g1

0xbb53,	// (0x0004ebba) fep_vkb_top_text_pane_t1

0xbb68,	// (0x0004ebcf) cell_vkb_side_pane_ParamLimits

0xbb68,	// (0x0004ebcf) cell_vkb_side_pane

0xb769,	// (0x0004e7d0) cell_vkb_side_pane_g1

0xbba7,	// (0x0004ec0e) cell_vkb_keypad_pane_ParamLimits

0xbba7,	// (0x0004ec0e) cell_vkb_keypad_pane

0xbc34,	// (0x0004ec9b) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00052bc3) bg_popup_fep_shadow_pane_g

0xb769,	// (0x0004e7d0) cell_hwr_side_pane_g1

0xb769,	// (0x0004e7d0) cell_hwr_side_pane_g2

0xbc3e,	// (0x0004eca5) cell_vkb_keypad_pane_t1

0xbc4c,	// (0x0004ecb3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbc4c,	// (0x0004ecb3) cell_vkb_keypad_bottom_left_pane

0xbc69,	// (0x0004ecd0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbc69,	// (0x0004ecd0) cell_vkb_keypad_bottom_right_pane

0xb769,	// (0x0004e7d0) cell_vkb_keypad_bottom_left_pane_g1

0xb769,	// (0x0004e7d0) cell_vkb_keypad_bottom_right_pane_g1

0xbca2,	// (0x0004ed09) cell_vkb_keypad_number_pane_ParamLimits

0xbca2,	// (0x0004ed09) cell_vkb_keypad_number_pane

0xbcc1,	// (0x0004ed28) cell_vkb_keypad_number_pane_g1

0xbccb,	// (0x0004ed32) cell_vkb_keypad_number_pane_g2

0xbcd4,	// (0x0004ed3b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00052bb5) cell_vkb_keypad_number_pane_g

0xbc3e,	// (0x0004eca5) cell_vkb_keypad_number_pane_t1

0xbcfe,	// (0x0004ed65) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00052bb0) cell_hwr_side_pane_g

0xbd17,	// (0x0004ed7e) cell_hwr_side_pane_t1

0x78eb,	// (0x0004a952) cell_hwr_side_pane_t1_copy1

0xb9e4,	// (0x0004ea4b) cell_hwr_candidate_pane_g1

0x78f9,	// (0x0004a960) cell_hwr_candidate_pane_t1

0xb769,	// (0x0004e7d0) cell_vkb_candidate_pane_g2

0xbd9d,	// (0x0004ee04) cell_vkb_candidate_pane_t1

0xf540,	// (0x000525a7) bg_popup_fep_shadow_pane_ParamLimits

0xf540,	// (0x000525a7) bg_popup_fep_shadow_pane

0x2343,	// (0x000453aa) bg_fep_hwr_top_pane_g4

0xb7ee,	// (0x0004e855) bg_hwr_side_pane_g1_ParamLimits

0xb7ee,	// (0x0004e855) bg_hwr_side_pane_g1

0x77bf,	// (0x0004a826) cell_hwr_side_pane_ParamLimits

0x77bf,	// (0x0004a826) cell_hwr_side_pane

0x77fc,	// (0x0004a863) fep_hwr_write_pane_g1_ParamLimits

0x77fc,	// (0x0004a863) fep_hwr_write_pane_g1

0x7809,	// (0x0004a870) fep_hwr_write_pane_g2_ParamLimits

0x7809,	// (0x0004a870) fep_hwr_write_pane_g2

0x7816,	// (0x0004a87d) fep_hwr_write_pane_g3_ParamLimits

0x7816,	// (0x0004a87d) fep_hwr_write_pane_g3

0x7824,	// (0x0004a88b) fep_hwr_write_pane_g4_ParamLimits

0x7824,	// (0x0004a88b) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00052b82) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00052b82) fep_hwr_write_pane_g

0x2343,	// (0x000453aa) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2343,	// (0x000453aa) bg_fep_hwr_candidate_pane_g2

0x7839,	// (0x0004a8a0) cell_hwr_candidate_pane_ParamLimits

0x7839,	// (0x0004a8a0) cell_hwr_candidate_pane

0x788b,	// (0x0004a8f2) fep_hwr_candidate_pane_g1_ParamLimits

0xb84e,	// (0x0004e8b5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb84e,	// (0x0004e8b5) bg_popup_fep_shadow_pane_cp2

0xb9e4,	// (0x0004ea4b) fep_vkb_top_pane_g4_ParamLimits

0xb9e4,	// (0x0004ea4b) fep_vkb_top_pane_g4

0xba2a,	// (0x0004ea91) fep_vkb_side_pane_g2_ParamLimits

0xba2a,	// (0x0004ea91) fep_vkb_side_pane_g2

0x5178,	// (0x000481df) list_setting_pane_t4_ParamLimits

0x5178,	// (0x000481df) list_setting_pane_t4

0x5214,	// (0x0004827b) list_setting_number_pane_t5_ParamLimits

0x5214,	// (0x0004827b) list_setting_number_pane_t5

0x680d,	// (0x00049874) list_double_heading_pane_cp2_ParamLimits

0x680d,	// (0x00049874) list_double_heading_pane_cp2

0xbdab,	// (0x0004ee12) list_double_heading_pane_g1_cp2_ParamLimits

0xbdab,	// (0x0004ee12) list_double_heading_pane_g1_cp2

0xbdb7,	// (0x0004ee1e) list_double_heading_pane_g2_cp2_ParamLimits

0xbdb7,	// (0x0004ee1e) list_double_heading_pane_g2_cp2

0xbdcb,	// (0x0004ee32) list_double_heading_pane_t1_cp2_ParamLimits

0xbdcb,	// (0x0004ee32) list_double_heading_pane_t1_cp2

0xbde1,	// (0x0004ee48) list_double_heading_pane_t2_cp2_ParamLimits

0xbde1,	// (0x0004ee48) list_double_heading_pane_t2_cp2

0xda56,	// (0x00050abd) aid_value_unit2

0x5f53,	// (0x00048fba) popup_preview_fixed_window

0xdc0d,	// (0x00050c74) bg_popup_preview_window_pane_cp02

0xbdf3,	// (0x0004ee5a) list_preview_fixed_pane

0xbe39,	// (0x0004eea0) list_empty_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_empty_pane_fp

0xbe39,	// (0x0004eea0) list_single_cale_day_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_single_cale_day_pane_fp

0xbe39,	// (0x0004eea0) list_single_graphic_heading_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_single_graphic_heading_pane_fp

0xbe39,	// (0x0004eea0) list_single_graphic_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_single_graphic_pane_fp

0xbe39,	// (0x0004eea0) list_single_heading_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_single_heading_pane_fp

0xbe39,	// (0x0004eea0) list_single_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_single_pane_fp

0xbe52,	// (0x0004eeb9) list_single_pane_fp_g1_ParamLimits

0xbe52,	// (0x0004eeb9) list_single_pane_fp_g1

0xbdab,	// (0x0004ee12) list_single_pane_fp_g2_ParamLimits

0xbdab,	// (0x0004ee12) list_single_pane_fp_g2

0xbdb7,	// (0x0004ee1e) list_single_pane_fp_g3_ParamLimits

0xbdb7,	// (0x0004ee1e) list_single_pane_fp_g3

0xbe5e,	// (0x0004eec5) list_single_pane_fp_g4_ParamLimits

0xbe5e,	// (0x0004eec5) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00052be4) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00052be4) list_single_pane_fp_g

0x59df,	// (0x00048a46) list_single_pane_fp_t1_ParamLimits

0x59df,	// (0x00048a46) list_single_pane_fp_t1

0x59f6,	// (0x00048a5d) list_single_graphic_pane_fp_g1_ParamLimits

0x59f6,	// (0x00048a5d) list_single_graphic_pane_fp_g1

0xbe52,	// (0x0004eeb9) list_single_graphic_pane_fp_g2_ParamLimits

0xbe52,	// (0x0004eeb9) list_single_graphic_pane_fp_g2

0xbdab,	// (0x0004ee12) list_single_graphic_pane_fp_g3_ParamLimits

0xbdab,	// (0x0004ee12) list_single_graphic_pane_fp_g3

0xbdb7,	// (0x0004ee1e) list_single_graphic_pane_fp_g4_ParamLimits

0xbdb7,	// (0x0004ee1e) list_single_graphic_pane_fp_g4

0xbe5e,	// (0x0004eec5) list_single_graphic_pane_fp_g5_ParamLimits

0xbe5e,	// (0x0004eec5) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00052bed) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00052bed) list_single_graphic_pane_fp_g

0x5a02,	// (0x00048a69) list_single_graphic_pane_fp_t1_ParamLimits

0x5a02,	// (0x00048a69) list_single_graphic_pane_fp_t1

0x59f6,	// (0x00048a5d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x59f6,	// (0x00048a5d) list_single_graphic_heading_pane_fp_g1

0xbe52,	// (0x0004eeb9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbe52,	// (0x0004eeb9) list_single_graphic_heading_pane_fp_g2

0xbdab,	// (0x0004ee12) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbdab,	// (0x0004ee12) list_single_graphic_heading_pane_fp_g3

0xbdb7,	// (0x0004ee1e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbdb7,	// (0x0004ee1e) list_single_graphic_heading_pane_fp_g4

0xbe5e,	// (0x0004eec5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbe5e,	// (0x0004eec5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00052bed) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00052bed) list_single_graphic_heading_pane_fp_g

0x5a18,	// (0x00048a7f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a18,	// (0x00048a7f) list_single_graphic_heading_pane_fp_t1

0x5a2e,	// (0x00048a95) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a2e,	// (0x00048a95) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00052bf8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00052bf8) list_single_graphic_heading_pane_fp_t

0x5a40,	// (0x00048aa7) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a40,	// (0x00048aa7) list_single_cale_day_pane_fp_g1

0xbe6a,	// (0x0004eed1) list_single_cale_day_pane_fp_g2_ParamLimits

0xbe6a,	// (0x0004eed1) list_single_cale_day_pane_fp_g2

0x7917,	// (0x0004a97e) list_single_cale_day_pane_fp_g3_ParamLimits

0x7917,	// (0x0004a97e) list_single_cale_day_pane_fp_g3

0x793f,	// (0x0004a9a6) list_single_cale_day_pane_fp_g4_ParamLimits

0x793f,	// (0x0004a9a6) list_single_cale_day_pane_fp_g4

0x7963,	// (0x0004a9ca) list_single_cale_day_pane_fp_g5_ParamLimits

0x7963,	// (0x0004a9ca) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00052bfd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00052bfd) list_single_cale_day_pane_fp_g

0x5a78,	// (0x00048adf) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a78,	// (0x00048adf) list_single_cale_day_pane_fp_t1

0x5a9e,	// (0x00048b05) list_single_cale_day_pane_fp_t2_ParamLimits

0x5a9e,	// (0x00048b05) list_single_cale_day_pane_fp_t2

0x5ab7,	// (0x00048b1e) list_single_cale_day_pane_fp_t3_ParamLimits

0x5ab7,	// (0x00048b1e) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00052c08) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00052c08) list_single_cale_day_pane_fp_t

0xbe52,	// (0x0004eeb9) list_empty_pane_fp_g1_ParamLimits

0xbe52,	// (0x0004eeb9) list_empty_pane_fp_g1

0x5ad0,	// (0x00048b37) list_empty_pane_fp_t1

0x5ade,	// (0x00048b45) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00052c0f) list_empty_pane_fp_t

0xbe52,	// (0x0004eeb9) list_single_heading_pane_fp_g1_ParamLimits

0xbe52,	// (0x0004eeb9) list_single_heading_pane_fp_g1

0xbdab,	// (0x0004ee12) list_single_heading_pane_fp_g2_ParamLimits

0xbdab,	// (0x0004ee12) list_single_heading_pane_fp_g2

0xbdb7,	// (0x0004ee1e) list_single_heading_pane_fp_g3_ParamLimits

0xbdb7,	// (0x0004ee1e) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00052c14) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00052c14) list_single_heading_pane_fp_g

0x5aec,	// (0x00048b53) list_single_heading_pane_fp_t1_ParamLimits

0x5aec,	// (0x00048b53) list_single_heading_pane_fp_t1

0x5afe,	// (0x00048b65) list_single_heading_pane_fp_t2_ParamLimits

0x5afe,	// (0x00048b65) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00052c1b) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00052c1b) list_single_heading_pane_fp_t

0x0951,	// (0x000439b8) aid_size_cell_fast

0xdbe2,	// (0x00050c49) soft_indicator_pane_cp1_t1

0x098e,	// (0x000439f5) cell_app_pane_cp2_ParamLimits

0x098e,	// (0x000439f5) cell_app_pane_cp2

0x76c5,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_pane

0x26f7,	// (0x0004575e) fep_hwr_candidate_pane_g3_ParamLimits

0x26f7,	// (0x0004575e) fep_hwr_candidate_pane_g3

0x2704,	// (0x0004576b) fep_hwr_candidate_pane_g4_ParamLimits

0x2704,	// (0x0004576b) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00052b8f) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00052b8f) fep_hwr_candidate_pane_g

0xb8de,	// (0x0004e945) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb8de,	// (0x0004e945) fep_vkb_candidate_drop_down_list_pane

0xbd06,	// (0x0004ed6d) fep_vkb_candidate_pane_g3

0xbd0e,	// (0x0004ed75) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00052bbc) fep_vkb_candidate_pane_g

0xb9e4,	// (0x0004ea4b) cell_hwr_candidate_pane_g1_ParamLimits

0xbd25,	// (0x0004ed8c) cell_hwr_candidate_pane_g3_ParamLimits

0xbd25,	// (0x0004ed8c) cell_hwr_candidate_pane_g3

0xbd46,	// (0x0004edad) cell_hwr_candidate_pane_g4_ParamLimits

0xbd46,	// (0x0004edad) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00052bd6) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00052bd6) cell_hwr_candidate_pane_g

0xbd67,	// (0x0004edce) cell_vkb_candidate_pane_g3_ParamLimits

0xbd67,	// (0x0004edce) cell_vkb_candidate_pane_g3

0xbd82,	// (0x0004ede9) cell_vkb_candidate_pane_g4_ParamLimits

0xbd82,	// (0x0004ede9) cell_vkb_candidate_pane_g4

0xbe76,	// (0x0004eedd) cell_app_pane_cp2_g1_ParamLimits

0xbe76,	// (0x0004eedd) cell_app_pane_cp2_g1

0xbe94,	// (0x0004eefb) cell_app_pane_cp2_g2_ParamLimits

0xbe94,	// (0x0004eefb) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00052c20) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00052c20) cell_app_pane_cp2_g

0xbea0,	// (0x0004ef07) cell_app_pane_cp2_t1_ParamLimits

0xbea0,	// (0x0004ef07) cell_app_pane_cp2_t1

0x07eb,	// (0x00043852) grid_highlight_pane_cp1_ParamLimits

0x07eb,	// (0x00043852) grid_highlight_pane_cp1

0x7987,	// (0x0004a9ee) cell_hwr_candidate_pane_cp1_ParamLimits

0x7987,	// (0x0004a9ee) cell_hwr_candidate_pane_cp1

0xb9e4,	// (0x0004ea4b) fep_hwr_candidate_drop_down_list_pane_g1

0xbeb2,	// (0x0004ef19) fep_hwr_candidate_drop_down_list_pane_g2

0xbebf,	// (0x0004ef26) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00052c25) fep_hwr_candidate_drop_down_list_pane_g

0x79ab,	// (0x0004aa12) fep_hwr_candidate_drop_down_list_scroll_pane

0x79b4,	// (0x0004aa1b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x79b4,	// (0x0004aa1b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x79c1,	// (0x0004aa28) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x79c1,	// (0x0004aa28) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x79ce,	// (0x0004aa35) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x79ce,	// (0x0004aa35) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbd67,	// (0x0004edce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbd67,	// (0x0004edce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbd82,	// (0x0004ede9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbd82,	// (0x0004ede9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x79db,	// (0x0004aa42) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x79db,	// (0x0004aa42) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x79f6,	// (0x0004aa5d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x79f6,	// (0x0004aa5d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7a11,	// (0x0004aa78) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7a11,	// (0x0004aa78) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00052c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00052c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbecc,	// (0x0004ef33) cell_vkb_candidate_pane_cp1_ParamLimits

0xbecc,	// (0x0004ef33) cell_vkb_candidate_pane_cp1

0xb9e4,	// (0x0004ea4b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) fep_vkb_candidate_drop_down_list_pane_g1

0xbeb2,	// (0x0004ef19) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbeb2,	// (0x0004ef19) fep_vkb_candidate_drop_down_list_pane_g2

0xbebf,	// (0x0004ef26) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbebf,	// (0x0004ef26) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00052c25) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00052c25) fep_vkb_candidate_drop_down_list_pane_g

0xbef2,	// (0x0004ef59) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbef2,	// (0x0004ef59) fep_vkb_candidate_drop_down_list_scroll_pane

0xbeff,	// (0x0004ef66) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbeff,	// (0x0004ef66) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbf0c,	// (0x0004ef73) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbf0c,	// (0x0004ef73) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbf18,	// (0x0004ef7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbf18,	// (0x0004ef7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbd25,	// (0x0004ed8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbd25,	// (0x0004ed8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbd46,	// (0x0004edad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbd46,	// (0x0004edad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbf24,	// (0x0004ef8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbf24,	// (0x0004ef8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbf45,	// (0x0004efac) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbf45,	// (0x0004efac) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbf66,	// (0x0004efcd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbf66,	// (0x0004efcd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00052c3d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00052c3d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6073,	// (0x000490da) title_pane_g1_ParamLimits

0x6080,	// (0x000490e7) title_pane_g2_ParamLimits

0xf54e,	// (0x000525b5) title_pane_g_ParamLimits

0x0cc5,	// (0x00043d2c) aid_call2_pane

0x0cbd,	// (0x00043d24) aid_call_pane

0x0ccd,	// (0x00043d34) popup_clock_analogue_window_g1

0x0ccd,	// (0x00043d34) popup_clock_analogue_window_g2

0x67ee,	// (0x00049855) popup_clock_analogue_window_g3

0x67f7,	// (0x0004985e) popup_clock_analogue_window_g4

0xda68,	// (0x00050acf) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00052764) popup_clock_analogue_window_g

0x67ff,	// (0x00049866) popup_clock_analogue_window_t1

0x6840,	// (0x000498a7) clock_digital_number_pane_ParamLimits

0x6840,	// (0x000498a7) clock_digital_number_pane

0x684c,	// (0x000498b3) clock_digital_number_pane_cp02_ParamLimits

0x684c,	// (0x000498b3) clock_digital_number_pane_cp02

0x6858,	// (0x000498bf) clock_digital_number_pane_cp03_ParamLimits

0x6858,	// (0x000498bf) clock_digital_number_pane_cp03

0x6864,	// (0x000498cb) clock_digital_number_pane_cp04_ParamLimits

0x6864,	// (0x000498cb) clock_digital_number_pane_cp04

0x6870,	// (0x000498d7) clock_digital_separator_pane_ParamLimits

0x6870,	// (0x000498d7) clock_digital_separator_pane

0x687c,	// (0x000498e3) popup_clock_digital_window_t1_ParamLimits

0x687c,	// (0x000498e3) popup_clock_digital_window_t1

0xda68,	// (0x00050acf) clock_digital_number_pane_g1

0xda68,	// (0x00050acf) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005276f) clock_digital_number_pane_g

0xda68,	// (0x00050acf) clock_digital_separator_pane_g1

0xda68,	// (0x00050acf) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005276f) clock_digital_separator_pane_g

0x8c1b,	// (0x0004bc82) aid_fill_nsta_ParamLimits

0x8d6b,	// (0x0004bdd2) indicator_nsta_pane_ParamLimits

0x8efc,	// (0x0004bf63) popup_clock_analogue_window

0x8efc,	// (0x0004bf63) popup_clock_digital_window

0xdacc,	// (0x00050b33) grid_indicator_nsta_pane_ParamLimits

0xb19c,	// (0x0004e203) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00052b0f) clock_nsta_pane_t

0x6757,	// (0x000497be) aid_size_max_handle

0x6761,	// (0x000497c8) aid_size_min_handle

0x41ab,	// (0x00047212) editor_scroll_pane

0xbf81,	// (0x0004efe8) ex_editor_pane

0x0917,	// (0x0004397e) scroll_pane_cp13

0xe08e,	// (0x000510f5) scroll_pane_cp14

0x0cfc,	// (0x00043d63) scroll_pane_cp36

0x6823,	// (0x0004988a) list_single_graphic_hl_pane_cp2_ParamLimits

0x6823,	// (0x0004988a) list_single_graphic_hl_pane_cp2

0x74c7,	// (0x0004a52e) list_single_graphic_hl_pane_ParamLimits

0x74c7,	// (0x0004a52e) list_single_graphic_hl_pane

0x5b14,	// (0x00048b7b) aid_size_min_hl_cp1

0xbf89,	// (0x0004eff0) list_highlight_pane_cp34_ParamLimits

0xbf89,	// (0x0004eff0) list_highlight_pane_cp34

0xbf9a,	// (0x0004f001) list_single_graphic_hl_pane_g1_ParamLimits

0xbf9a,	// (0x0004f001) list_single_graphic_hl_pane_g1

0x5b1d,	// (0x00048b84) list_single_graphic_hl_pane_g2_ParamLimits

0x5b1d,	// (0x00048b84) list_single_graphic_hl_pane_g2

0x5b1d,	// (0x00048b84) list_single_graphic_hl_pane_g3_ParamLimits

0x5b1d,	// (0x00048b84) list_single_graphic_hl_pane_g3

0x75bc,	// (0x0004a623) list_single_graphic_hl_pane_g4_ParamLimits

0x75bc,	// (0x0004a623) list_single_graphic_hl_pane_g4

0x7a2c,	// (0x0004aa93) list_single_graphic_hl_pane_g5_ParamLimits

0x7a2c,	// (0x0004aa93) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00052c4e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00052c4e) list_single_graphic_hl_pane_g

0x5b29,	// (0x00048b90) list_single_graphic_hl_pane_t1_ParamLimits

0x5b29,	// (0x00048b90) list_single_graphic_hl_pane_t1

0xbfa7,	// (0x0004f00e) aid_size_min_hl_cp2

0xbfb0,	// (0x0004f017) list_highlight_pane_cp34_cp2_ParamLimits

0xbfb0,	// (0x0004f017) list_highlight_pane_cp34_cp2

0xbf9a,	// (0x0004f001) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbf9a,	// (0x0004f001) list_single_graphic_hl_pane_g1_cp2

0xbfbd,	// (0x0004f024) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbfbd,	// (0x0004f024) list_single_graphic_hl_pane_g2_cp2

0xbfc9,	// (0x0004f030) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbfc9,	// (0x0004f030) list_single_graphic_hl_pane_g3_cp2

0x1b35,	// (0x00044b9c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1b35,	// (0x00044b9c) list_single_graphic_hl_pane_g4_cp2

0xbfd7,	// (0x0004f03e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbfd7,	// (0x0004f03e) list_single_graphic_hl_pane_g5_cp2

0x6e3d,	// (0x00049ea4) control_pane_g4_ParamLimits

0x6e3d,	// (0x00049ea4) control_pane_g4

0x6fe4,	// (0x0004a04b) bg_popup_sub_pane_cp10_ParamLimits

0xb773,	// (0x0004e7da) list_choice_list_pane_ParamLimits

0xb782,	// (0x0004e7e9) scroll_pane_cp23

0xdc0d,	// (0x00050c74) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdf3,	// (0x0004ee5a) list_preview_fixed_pane_ParamLimits

0xbe09,	// (0x0004ee70) list_preview_fixed_pane_cp_ParamLimits

0xbe09,	// (0x0004ee70) list_preview_fixed_pane_cp

0xbe15,	// (0x0004ee7c) popup_preview_fixed_window_g1_ParamLimits

0xbe15,	// (0x0004ee7c) popup_preview_fixed_window_g1

0xbe21,	// (0x0004ee88) popup_preview_fixed_window_g2_ParamLimits

0xbe21,	// (0x0004ee88) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00052bdd) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00052bdd) popup_preview_fixed_window_g

0x6646,	// (0x000496ad) aid_navi_side_left_pane_ParamLimits

0x665b,	// (0x000496c2) aid_navi_side_right_pane_ParamLimits

0x6673,	// (0x000496da) navi_icon_pane_stacon_ParamLimits

0x6687,	// (0x000496ee) navi_navi_pane_stacon_ParamLimits

0x6673,	// (0x000496da) navi_text_pane_stacon_ParamLimits

0xda5e,	// (0x00050ac5) main_text_info_pane

0xc001,	// (0x0004f068) listscroll_text_info_pane

0xc009,	// (0x0004f070) list_text_info_pane_ParamLimits

0xc009,	// (0x0004f070) list_text_info_pane

0xc018,	// (0x0004f07f) scroll_pane_cp24_ParamLimits

0xc018,	// (0x0004f07f) scroll_pane_cp24

0xc036,	// (0x0004f09d) list_text_info_pane_t1_ParamLimits

0xc036,	// (0x0004f09d) list_text_info_pane_t1

0x702e,	// (0x0004a095) popup_fast_swap2_window_ParamLimits

0x702e,	// (0x0004a095) popup_fast_swap2_window

0xc05b,	// (0x0004f0c2) aid_size_cell_fast2

0xda5e,	// (0x00050ac5) bg_popup_window_pane_cp17

0x9559,	// (0x0004c5c0) heading_pane_cp2

0xde13,	// (0x00050e7a) listscroll_fast2_pane

0xc065,	// (0x0004f0cc) grid_fast2_pane

0xc06f,	// (0x0004f0d6) listscroll_fast2_pane_g1

0xc079,	// (0x0004f0e0) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00052c59) listscroll_fast2_pane_g

0x0917,	// (0x0004397e) scroll_pane_cp26

0xc083,	// (0x0004f0ea) cell_fast2_pane_ParamLimits

0xc083,	// (0x0004f0ea) cell_fast2_pane

0xc09a,	// (0x0004f101) cell_fast2_pane_g1

0xc0a3,	// (0x0004f10a) cell_fast2_pane_g2

0xc0ac,	// (0x0004f113) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00052c5e) cell_fast2_pane_g

0xde55,	// (0x00050ebc) grid_highlight_pane_cp9

0xde6a,	// (0x00050ed1) main_eswt_pane_ParamLimits

0xde6a,	// (0x00050ed1) main_eswt_pane

0xc02d,	// (0x0004f094) list_single_text_info_pane

0xc0b4,	// (0x0004f11b) eswt_ctrl_button_pane

0xc0b4,	// (0x0004f11b) eswt_ctrl_canvas_pane

0xc0bc,	// (0x0004f123) eswt_ctrl_combo_pane

0xc0b4,	// (0x0004f11b) eswt_ctrl_default_pane

0xc0b4,	// (0x0004f11b) eswt_ctrl_label_pane

0xc0c4,	// (0x0004f12b) eswt_ctrl_wait_pane

0xc0cc,	// (0x0004f133) eswt_shell_pane

0xda5e,	// (0x00050ac5) listscroll_eswt_app_pane

0xc0ec,	// (0x0004f153) popup_eswt_tasktip_window_ParamLimits

0xc0ec,	// (0x0004f153) popup_eswt_tasktip_window

0x9199,	// (0x0004c200) bg_popup_window_pane_cp18

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_ParamLimits

0xc0fd,	// (0x0004f164) eswt_control_pane_g1

0xc10a,	// (0x0004f171) eswt_control_pane_g2_ParamLimits

0xc10a,	// (0x0004f171) eswt_control_pane_g2

0xc117,	// (0x0004f17e) eswt_control_pane_g3_ParamLimits

0xc117,	// (0x0004f17e) eswt_control_pane_g3

0xc124,	// (0x0004f18b) eswt_control_pane_g4_ParamLimits

0xc124,	// (0x0004f18b) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00052c65) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00052c65) eswt_control_pane_g

0x07eb,	// (0x00043852) bg_button_pane_ParamLimits

0x07eb,	// (0x00043852) bg_button_pane

0xde6a,	// (0x00050ed1) common_borders_pane_copy2_ParamLimits

0xde6a,	// (0x00050ed1) common_borders_pane_copy2

0xc131,	// (0x0004f198) control_button_pane_g1_ParamLimits

0xc131,	// (0x0004f198) control_button_pane_g1

0xc13d,	// (0x0004f1a4) control_button_pane_g2_ParamLimits

0xc13d,	// (0x0004f1a4) control_button_pane_g2

0xc149,	// (0x0004f1b0) control_button_pane_g3_ParamLimits

0xc149,	// (0x0004f1b0) control_button_pane_g3

0x0002,

0xfc07,	// (0x00052c6e) control_button_pane_g_ParamLimits

0xfc07,	// (0x00052c6e) control_button_pane_g

0xc15d,	// (0x0004f1c4) control_button_pane_t1

0xc16b,	// (0x0004f1d2) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00052c75) control_button_pane_t

0x9125,	// (0x0004c18c) bg_button_pane_g1

0x912d,	// (0x0004c194) bg_button_pane_g2

0x9135,	// (0x0004c19c) bg_button_pane_g3

0x913d,	// (0x0004c1a4) bg_button_pane_g4

0x9145,	// (0x0004c1ac) bg_button_pane_g5

0x914d,	// (0x0004c1b4) bg_button_pane_g6

0x9155,	// (0x0004c1bc) bg_button_pane_g7

0x915d,	// (0x0004c1c4) bg_button_pane_g8

0x9165,	// (0x0004c1cc) bg_button_pane_g9

0x0008,

0xf86b,	// (0x000528d2) bg_button_pane_g

0xb72e,	// (0x0004e795) common_borders_pane_ParamLimits

0xb72e,	// (0x0004e795) common_borders_pane

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy1_ParamLimits

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy1

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy1_ParamLimits

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy1

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy1_ParamLimits

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy1

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy1_ParamLimits

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy1

0xb769,	// (0x0004e7d0) bg_eswt_ctrl_canvas_pane_g1

0xb72e,	// (0x0004e795) common_borders_pane_cp2_ParamLimits

0xb72e,	// (0x0004e795) common_borders_pane_cp2

0xb72e,	// (0x0004e795) common_borders_pane_cp3_ParamLimits

0xb72e,	// (0x0004e795) common_borders_pane_cp3

0xc179,	// (0x0004f1e0) separator_horizontal_pane

0xc181,	// (0x0004f1e8) separator_vertical_pane

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy2_ParamLimits

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy2

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy2_ParamLimits

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy2

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy2_ParamLimits

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy2

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy2_ParamLimits

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy2

0xda5e,	// (0x00050ac5) common_borders_pane_cp4

0xc18a,	// (0x0004f1f1) separator_horizontal_pane_g1

0xc193,	// (0x0004f1fa) separator_horizontal_pane_g2

0xc19c,	// (0x0004f203) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00052c7a) separator_horizontal_pane_g

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy3_ParamLimits

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy3

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy3_ParamLimits

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy3

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy3_ParamLimits

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy3

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy3_ParamLimits

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy3

0xda5e,	// (0x00050ac5) common_borders_pane_cp5

0xc1a5,	// (0x0004f20c) separator_vertical_pane_g1

0xc1ae,	// (0x0004f215) separator_vertical_pane_g2

0xc1b7,	// (0x0004f21e) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00052c81) separator_vertical_pane_g

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy4_ParamLimits

0xc0fd,	// (0x0004f164) eswt_control_pane_g1_copy4

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy4_ParamLimits

0xc10a,	// (0x0004f171) eswt_control_pane_g2_copy4

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy4_ParamLimits

0xc117,	// (0x0004f17e) eswt_control_pane_g3_copy4

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy4_ParamLimits

0xc124,	// (0x0004f18b) eswt_control_pane_g4_copy4

0xc1c0,	// (0x0004f227) eswt_ctrl_combo_button_pane

0xc1c8,	// (0x0004f22f) eswt_ctrl_input_pane

0xc1d0,	// (0x0004f237) popup_choice_list_window_cp70

0xc1d8,	// (0x0004f23f) eswt_ctrl_input_pane_t1

0xda5e,	// (0x00050ac5) input_focus_pane_cp70

0xb72e,	// (0x0004e795) bg_button_pane_cp70_ParamLimits

0xb72e,	// (0x0004e795) bg_button_pane_cp70

0xc1e6,	// (0x0004f24d) eswt_ctrl_combo_button_pane_g1

0xc1ee,	// (0x0004f255) wait_bar_pane_cp70

0x9199,	// (0x0004c200) bg_popup_window_pane_cp70_ParamLimits

0x9199,	// (0x0004c200) bg_popup_window_pane_cp70

0xc1f6,	// (0x0004f25d) popup_eswt_tasktip_window_t1

0xc20c,	// (0x0004f273) wait_bar_pane_cp71_ParamLimits

0xc20c,	// (0x0004f273) wait_bar_pane_cp71

0xc218,	// (0x0004f27f) grid_eswt_app_pane

0x0b5c,	// (0x00043bc3) scroll_pane_cp70

0xc221,	// (0x0004f288) cell_eswt_app_pane_ParamLimits

0xc221,	// (0x0004f288) cell_eswt_app_pane

0xc253,	// (0x0004f2ba) cell_eswt_app_pane_g1_ParamLimits

0xc253,	// (0x0004f2ba) cell_eswt_app_pane_g1

0xc282,	// (0x0004f2e9) cell_eswt_app_pane_g2_ParamLimits

0xc282,	// (0x0004f2e9) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00052c88) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00052c88) cell_eswt_app_pane_g

0xc2ab,	// (0x0004f312) cell_eswt_app_pane_t1_ParamLimits

0xc2ab,	// (0x0004f312) cell_eswt_app_pane_t1

0xc2dd,	// (0x0004f344) grid_highlight_pane_cp70_ParamLimits

0xc2dd,	// (0x0004f344) grid_highlight_pane_cp70

0x1035,	// (0x0004409c) set_content_pane_g1

0x6dd3,	// (0x00049e3a) status_small_volume_pane

0x7a40,	// (0x0004aaa7) status_small_volume_pane_g1

0x7a48,	// (0x0004aaaf) volume_small2_pane

0x7a51,	// (0x0004aab8) volume_small2_pane_g1

0x7a5a,	// (0x0004aac1) volume_small2_pane_g2

0x7a63,	// (0x0004aaca) volume_small2_pane_g3

0x7a6c,	// (0x0004aad3) volume_small2_pane_g4

0x7a75,	// (0x0004aadc) volume_small2_pane_g5

0x7a7e,	// (0x0004aae5) volume_small2_pane_g6

0x7a87,	// (0x0004aaee) volume_small2_pane_g7

0x7a90,	// (0x0004aaf7) volume_small2_pane_g8

0x7a99,	// (0x0004ab00) volume_small2_pane_g9

0x7aa2,	// (0x0004ab09) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00052c8d) volume_small2_pane_g

0xbb38,	// (0x0004eb9f) fep_vkb_top_text_pane_g1_ParamLimits

0xbb53,	// (0x0004ebba) fep_vkb_top_text_pane_t1_ParamLimits

0xbe2d,	// (0x0004ee94) popup_preview_fixed_window_g3_ParamLimits

0xbe2d,	// (0x0004ee94) popup_preview_fixed_window_g3

0x8b3f,	// (0x0004bba6) popup_toolbar_trans_pane

0xa4dd,	// (0x0004d544) aid_height_set_list_ParamLimits

0xa4ee,	// (0x0004d555) aid_size_parent_ParamLimits

0x6fe4,	// (0x0004a04b) list_highlight_pane_cp2_ParamLimits

0x1035,	// (0x0004409c) set_content_pane_g1_ParamLimits

0xa743,	// (0x0004d7aa) list_single_image_pane_ParamLimits

0xa743,	// (0x0004d7aa) list_single_image_pane

0xc2e9,	// (0x0004f350) aid_size_cell_image_ParamLimits

0xc2e9,	// (0x0004f350) aid_size_cell_image

0xc2f6,	// (0x0004f35d) grid_single_image_pane_ParamLimits

0xc2f6,	// (0x0004f35d) grid_single_image_pane

0x07f9,	// (0x00043860) list_single_image_pane_g1_ParamLimits

0x07f9,	// (0x00043860) list_single_image_pane_g1

0x0805,	// (0x0004386c) list_single_image_pane_g2_ParamLimits

0x0805,	// (0x0004386c) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00052ca2) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00052ca2) list_single_image_pane_g

0xc304,	// (0x0004f36b) list_single_image_pane_t1_ParamLimits

0xc304,	// (0x0004f36b) list_single_image_pane_t1

0xc31a,	// (0x0004f381) cell_image_list_pane_ParamLimits

0xc31a,	// (0x0004f381) cell_image_list_pane

0xc330,	// (0x0004f397) cell_image_list_pane_g1

0xc339,	// (0x0004f3a0) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00052ca7) cell_image_list_pane_g

0xc342,	// (0x0004f3a9) aid_size_cell_tb_trans_pane

0x07eb,	// (0x00043852) bg_tb_trans_pane

0xc354,	// (0x0004f3bb) grid_tb_trans_pane

0x9125,	// (0x0004c18c) bg_tb_trans_pane_g1

0x912d,	// (0x0004c194) bg_tb_trans_pane_g2

0x9135,	// (0x0004c19c) bg_tb_trans_pane_g3

0x913d,	// (0x0004c1a4) bg_tb_trans_pane_g4

0x9145,	// (0x0004c1ac) bg_tb_trans_pane_g5

0x915d,	// (0x0004c1c4) bg_tb_trans_pane_g6

0x9165,	// (0x0004c1cc) bg_tb_trans_pane_g7

0x914d,	// (0x0004c1b4) bg_tb_trans_pane_g8

0x9155,	// (0x0004c1bc) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00052cac) bg_tb_trans_pane_g

0xc368,	// (0x0004f3cf) cell_toolbar_trans_pane_ParamLimits

0xc368,	// (0x0004f3cf) cell_toolbar_trans_pane

0xb769,	// (0x0004e7d0) cell_toolbar_trans_pane_g1

0xb38d,	// (0x0004e3f4) list_form2_midp_pane_t1

0xb39b,	// (0x0004e402) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00052b55) list_form2_midp_pane_t

0xb3a9,	// (0x0004e410) scroll_pane_cp51_ParamLimits

0xb570,	// (0x0004e5d7) form2_midp_wait_pane_g1

0xb579,	// (0x0004e5e0) form2_midp_wait_pane_g2

0xb582,	// (0x0004e5e9) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00052b6a) form2_midp_wait_pane_g

0xdacc,	// (0x00050b33) list_highlight_pane_cp21_ParamLimits

0xb5c6,	// (0x0004e62d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb5d5,	// (0x0004e63c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa6fc,	// (0x0004d763) list_single_2graphic_im_pane_ParamLimits

0xa6fc,	// (0x0004d763) list_single_2graphic_im_pane

0xc38e,	// (0x0004f3f5) list_single_2graphic_im_pane_g1_ParamLimits

0xc38e,	// (0x0004f3f5) list_single_2graphic_im_pane_g1

0xc39f,	// (0x0004f406) list_single_2graphic_im_pane_g2_ParamLimits

0xc39f,	// (0x0004f406) list_single_2graphic_im_pane_g2

0xc3ab,	// (0x0004f412) list_single_2graphic_im_pane_g3_ParamLimits

0xc3ab,	// (0x0004f412) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00052cbf) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00052cbf) list_single_2graphic_im_pane_g

0xc3cb,	// (0x0004f432) list_single_2graphic_im_pane_t1_ParamLimits

0xc3cb,	// (0x0004f432) list_single_2graphic_im_pane_t1

0xbe39,	// (0x0004eea0) list_single_graphic_2heading_pane_fp_ParamLimits

0xbe39,	// (0x0004eea0) list_single_graphic_2heading_pane_fp

0x59f6,	// (0x00048a5d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x59f6,	// (0x00048a5d) list_single_graphic_2heading_pane_fp_g1

0xbe52,	// (0x0004eeb9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbe52,	// (0x0004eeb9) list_single_graphic_2heading_pane_fp_g2

0xbdab,	// (0x0004ee12) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbdab,	// (0x0004ee12) list_single_graphic_2heading_pane_fp_g3

0xbdb7,	// (0x0004ee1e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbdb7,	// (0x0004ee1e) list_single_graphic_2heading_pane_fp_g4

0xbe5e,	// (0x0004eec5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbe5e,	// (0x0004eec5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00052bed) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00052bed) list_single_graphic_2heading_pane_fp_g

0x5b3f,	// (0x00048ba6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b3f,	// (0x00048ba6) list_single_graphic_2heading_pane_fp_t1

0x5a2e,	// (0x00048a95) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a2e,	// (0x00048a95) list_single_graphic_2heading_pane_fp_t2

0x5b55,	// (0x00048bbc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b55,	// (0x00048bbc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00052cc8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00052cc8) list_single_graphic_2heading_pane_fp_t

0xb7fa,	// (0x0004e861) fep_hwr_write_pane_g5_ParamLimits

0xb7fa,	// (0x0004e861) fep_hwr_write_pane_g5

0xb806,	// (0x0004e86d) fep_hwr_write_pane_g6_ParamLimits

0xb806,	// (0x0004e86d) fep_hwr_write_pane_g6

0xc0cc,	// (0x0004f133) eswt_shell_pane_ParamLimits

0x9199,	// (0x0004c200) bg_popup_window_pane_cp18_ParamLimits

0xa434,	// (0x0004d49b) heading_pane_cp70

0xc1f6,	// (0x0004f25d) popup_eswt_tasktip_window_t1_ParamLimits

0x8c72,	// (0x0004bcd9) aid_touch_tab_arrow_left

0x8c81,	// (0x0004bce8) aid_touch_tab_arrow_right

0xda7c,	// (0x00050ae3) title_pane_g3_ParamLimits

0xda7c,	// (0x00050ae3) title_pane_g3

0x07aa,	// (0x00043811) set_value_pane_g1

0x8b3f,	// (0x0004bba6) popup_toolbar_trans_pane_ParamLimits

0xc342,	// (0x0004f3a9) aid_size_cell_tb_trans_pane_ParamLimits

0x07eb,	// (0x00043852) bg_tb_trans_pane_ParamLimits

0xc354,	// (0x0004f3bb) grid_tb_trans_pane_ParamLimits

0xdc0d,	// (0x00050c74) cont_note_pane_ParamLimits

0xdc0d,	// (0x00050c74) cont_note_pane

0xde6a,	// (0x00050ed1) cont_snote2_single_text_pane_ParamLimits

0xde6a,	// (0x00050ed1) cont_snote2_single_text_pane

0xde6a,	// (0x00050ed1) cont_snote2_single_graphic_pane_ParamLimits

0xde6a,	// (0x00050ed1) cont_snote2_single_graphic_pane

0x9775,	// (0x0004c7dc) cont_note_wait_pane_ParamLimits

0x9775,	// (0x0004c7dc) cont_note_wait_pane

0x9775,	// (0x0004c7dc) cont_note_image_pane_ParamLimits

0x9775,	// (0x0004c7dc) cont_note_image_pane

0xc3fc,	// (0x0004f463) popup_note2_window_g1_ParamLimits

0xc3fc,	// (0x0004f463) popup_note2_window_g1

0xc42d,	// (0x0004f494) popup_note2_window_t1_ParamLimits

0xc42d,	// (0x0004f494) popup_note2_window_t1

0xc472,	// (0x0004f4d9) popup_note2_window_t2_ParamLimits

0xc472,	// (0x0004f4d9) popup_note2_window_t2

0xc4b7,	// (0x0004f51e) popup_note2_window_t3_ParamLimits

0xc4b7,	// (0x0004f51e) popup_note2_window_t3

0xc4fc,	// (0x0004f563) popup_note2_window_t4_ParamLimits

0xc4fc,	// (0x0004f563) popup_note2_window_t4

0xdc91,	// (0x00050cf8) popup_note2_window_t5_ParamLimits

0xdc91,	// (0x00050cf8) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00052cd4) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00052cd4) popup_note2_window_t

0xc52b,	// (0x0004f592) popup_note2_image_window_g1_ParamLimits

0xc52b,	// (0x0004f592) popup_note2_image_window_g1

0xc537,	// (0x0004f59e) popup_note2_image_window_g2_ParamLimits

0xc537,	// (0x0004f59e) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00052cdf) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00052cdf) popup_note2_image_window_g

0xc549,	// (0x0004f5b0) popup_note2_image_window_t1_ParamLimits

0xc549,	// (0x0004f5b0) popup_note2_image_window_t1

0xc561,	// (0x0004f5c8) popup_note2_image_window_t2_ParamLimits

0xc561,	// (0x0004f5c8) popup_note2_image_window_t2

0xc579,	// (0x0004f5e0) popup_note2_image_window_t3_ParamLimits

0xc579,	// (0x0004f5e0) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00052ce4) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00052ce4) popup_note2_image_window_t

0x9783,	// (0x0004c7ea) popup_note2_wait_window_g1_ParamLimits

0x9783,	// (0x0004c7ea) popup_note2_wait_window_g1

0xc595,	// (0x0004f5fc) popup_note2_wait_window_g2_ParamLimits

0xc595,	// (0x0004f5fc) popup_note2_wait_window_g2

0x979b,	// (0x0004c802) popup_note2_wait_window_g3_ParamLimits

0x979b,	// (0x0004c802) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00052ceb) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00052ceb) popup_note2_wait_window_g

0xc5a1,	// (0x0004f608) popup_note2_wait_window_t1_ParamLimits

0xc5a1,	// (0x0004f608) popup_note2_wait_window_t1

0xc5bf,	// (0x0004f626) popup_note2_wait_window_t2_ParamLimits

0xc5bf,	// (0x0004f626) popup_note2_wait_window_t2

0xc5dd,	// (0x0004f644) popup_note2_wait_window_t3_ParamLimits

0xc5dd,	// (0x0004f644) popup_note2_wait_window_t3

0xc5ef,	// (0x0004f656) popup_note2_wait_window_t4_ParamLimits

0xc5ef,	// (0x0004f656) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00052cf2) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00052cf2) popup_note2_wait_window_t

0xc601,	// (0x0004f668) wait_bar2_pane_ParamLimits

0xc601,	// (0x0004f668) wait_bar2_pane

0xc619,	// (0x0004f680) popup_snote2_single_text_window_g1_ParamLimits

0xc619,	// (0x0004f680) popup_snote2_single_text_window_g1

0xc641,	// (0x0004f6a8) popup_snote2_single_text_window_t1_ParamLimits

0xc641,	// (0x0004f6a8) popup_snote2_single_text_window_t1

0xc68d,	// (0x0004f6f4) popup_snote2_single_text_window_t2_ParamLimits

0xc68d,	// (0x0004f6f4) popup_snote2_single_text_window_t2

0xc6d9,	// (0x0004f740) popup_snote2_single_text_window_t3_ParamLimits

0xc6d9,	// (0x0004f740) popup_snote2_single_text_window_t3

0xc71a,	// (0x0004f781) popup_snote2_single_text_window_t4_ParamLimits

0xc71a,	// (0x0004f781) popup_snote2_single_text_window_t4

0xc750,	// (0x0004f7b7) popup_snote2_single_text_window_t5_ParamLimits

0xc750,	// (0x0004f7b7) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00052cfb) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00052cfb) popup_snote2_single_text_window_t

0xc77b,	// (0x0004f7e2) popup_snote2_single_graphic_window_g1_ParamLimits

0xc77b,	// (0x0004f7e2) popup_snote2_single_graphic_window_g1

0xc7a3,	// (0x0004f80a) popup_snote2_single_graphic_window_g2_ParamLimits

0xc7a3,	// (0x0004f80a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00052d06) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00052d06) popup_snote2_single_graphic_window_g

0xc7cb,	// (0x0004f832) popup_snote2_single_graphic_window_t1_ParamLimits

0xc7cb,	// (0x0004f832) popup_snote2_single_graphic_window_t1

0xc817,	// (0x0004f87e) popup_snote2_single_graphic_window_t2_ParamLimits

0xc817,	// (0x0004f87e) popup_snote2_single_graphic_window_t2

0xc6d9,	// (0x0004f740) popup_snote2_single_graphic_window_t3_ParamLimits

0xc6d9,	// (0x0004f740) popup_snote2_single_graphic_window_t3

0xc71a,	// (0x0004f781) popup_snote2_single_graphic_window_t4_ParamLimits

0xc71a,	// (0x0004f781) popup_snote2_single_graphic_window_t4

0xc750,	// (0x0004f7b7) popup_snote2_single_graphic_window_t5_ParamLimits

0xc750,	// (0x0004f7b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00052d0b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00052d0b) popup_snote2_single_graphic_window_t

0xb259,	// (0x0004e2c0) clock_nsta_pane_cp2_t1

0xb259,	// (0x0004e2c0) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00052b2b) clock_nsta_pane_cp2_t

0x5342,	// (0x000483a9) form_field_data_wide_pane_g1_ParamLimits

0x07f9,	// (0x00043860) form_field_data_wide_pane_g2_ParamLimits

0x07f9,	// (0x00043860) form_field_data_wide_pane_g2

0x0805,	// (0x0004386c) form_field_data_wide_pane_g3_ParamLimits

0x0805,	// (0x0004386c) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000526e7) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000526e7) form_field_data_wide_pane_g

0xb138,	// (0x0004e19f) grid_touch_3_pane_ParamLimits

0xb138,	// (0x0004e19f) grid_touch_3_pane

0xc863,	// (0x0004f8ca) cell_touch_3_pane_ParamLimits

0xc863,	// (0x0004f8ca) cell_touch_3_pane

0xb769,	// (0x0004e7d0) cell_touch_3_pane_g1

0xb769,	// (0x0004e7d0) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00052bb0) cell_touch_3_pane_g

0xdcc3,	// (0x00050d2a) cont_query_data_pane

0xdccb,	// (0x00050d32) cont_query_data_pane_cp1

0xc896,	// (0x0004f8fd) button_value_adjust_pane_cp7

0xc89e,	// (0x0004f905) query_popup_pane_cp3

0x0d2d,	// (0x00043d94) bg_popup_sub_pane_cp22_ParamLimits

0x68fd,	// (0x00049964) navi_navi_volume_pane_cp2

0x6918,	// (0x0004997f) popup_side_volume_key_window_g2

0x6927,	// (0x0004998e) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005277d) popup_side_volume_key_window_g

0x6944,	// (0x000499ab) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00052784) popup_side_volume_key_window_t

0x0f38,	// (0x00043f9f) popup_side_volume_key_window_ParamLimits

0x4f48,	// (0x00047faf) list_double_graphic_pane_g4_ParamLimits

0x4f48,	// (0x00047faf) list_double_graphic_pane_g4

0xa72b,	// (0x0004d792) list_single_2heading_msg_pane_ParamLimits

0xa72b,	// (0x0004d792) list_single_2heading_msg_pane

0x7aab,	// (0x0004ab12) list_single_2heading_msg_pane_g1_ParamLimits

0x7aab,	// (0x0004ab12) list_single_2heading_msg_pane_g1

0x1b35,	// (0x00044b9c) list_single_2heading_msg_pane_g2_ParamLimits

0x1b35,	// (0x00044b9c) list_single_2heading_msg_pane_g2

0x7ab7,	// (0x0004ab1e) list_single_2heading_msg_pane_g3_ParamLimits

0x7ab7,	// (0x0004ab1e) list_single_2heading_msg_pane_g3

0x7ac3,	// (0x0004ab2a) list_single_2heading_msg_pane_g4_ParamLimits

0x7ac3,	// (0x0004ab2a) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00052d16) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00052d16) list_single_2heading_msg_pane_g

0x5b75,	// (0x00048bdc) list_single_2heading_msg_pane_t1_ParamLimits

0x5b75,	// (0x00048bdc) list_single_2heading_msg_pane_t1

0x5b9d,	// (0x00048c04) list_single_2heading_msg_pane_t2_ParamLimits

0x5b9d,	// (0x00048c04) list_single_2heading_msg_pane_t2

0x5bcc,	// (0x00048c33) list_single_2heading_msg_pane_t3_ParamLimits

0x5bcc,	// (0x00048c33) list_single_2heading_msg_pane_t3

0x5c05,	// (0x00048c6c) list_single_2heading_msg_pane_t4_ParamLimits

0x5c05,	// (0x00048c6c) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00052d1f) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00052d1f) list_single_2heading_msg_pane_t

0xda88,	// (0x00050aef) title_pane_g4_ParamLimits

0xda88,	// (0x00050aef) title_pane_g4

0x6596,	// (0x000495fd) title_pane_stacon_g3_ParamLimits

0x6596,	// (0x000495fd) title_pane_stacon_g3

0xc3bf,	// (0x0004f426) list_single_2graphic_im_pane_g4_ParamLimits

0xc3bf,	// (0x0004f426) list_single_2graphic_im_pane_g4

0xa1e5,	// (0x0004d24c) popup_side_volume_key_window_cp

0xaa53,	// (0x0004daba) main_idle_act2_pane_t1

0x714e,	// (0x0004a1b5) toolbar_button_pane_g10

0x63e6,	// (0x0004944d) popup_toolbar_window_cp1

0xb24a,	// (0x0004e2b1) clock_nsta_pane_cp_t1

0xb24a,	// (0x0004e2b1) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00052b26) clock_nsta_pane_cp_t

0x68fd,	// (0x00049964) navi_navi_volume_pane_cp2_ParamLimits

0x690c,	// (0x00049973) popup_side_volume_key_window_g1_ParamLimits

0x6918,	// (0x0004997f) popup_side_volume_key_window_g2_ParamLimits

0x6927,	// (0x0004998e) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005277d) popup_side_volume_key_window_g_ParamLimits

0x76b1,	// (0x0004a718) fep_hwr_aid_pane

0x2343,	// (0x000453aa) bg_fep_hwr_top_pane_g4_ParamLimits

0xb7ca,	// (0x0004e831) fep_hwr_top_pane_g1_ParamLimits

0xb7dc,	// (0x0004e843) fep_hwr_top_pane_g2_ParamLimits

0x776c,	// (0x0004a7d3) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00052b7b) fep_hwr_top_pane_g_ParamLimits

0x7781,	// (0x0004a7e8) fep_hwr_top_text_pane_ParamLimits

0x9f9a,	// (0x0004d001) aid_touch_tab_arrow_arrow_2

0x9fa3,	// (0x0004d00a) aid_touch_tab_arrow_left_2

0x76c5,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x76fc,	// (0x0004a763) fep_hwr_prediction_pane

0xb932,	// (0x0004e999) fep_vkb_prediction_pane

0xba38,	// (0x0004ea9f) fep_vkb_side_pane_g3_ParamLimits

0xba38,	// (0x0004ea9f) fep_vkb_side_pane_g3

0xb9e4,	// (0x0004ea4b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbeb2,	// (0x0004ef19) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbebf,	// (0x0004ef26) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00052c25) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc8c5,	// (0x0004f92c) fep_hwr_prediction_pane_g1

0x7adb,	// (0x0004ab42) fep_hwr_prediction_pane_g2

0x7ae3,	// (0x0004ab4a) fep_hwr_prediction_pane_g3

0x7aeb,	// (0x0004ab52) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00052d28) fep_hwr_prediction_pane_g

0xc8c5,	// (0x0004f92c) fep_vkb_prediction_pane_g1

0xc8cf,	// (0x0004f936) fep_vkb_prediction_pane_g2

0xc8d7,	// (0x0004f93e) fep_vkb_prediction_pane_g3

0xc8df,	// (0x0004f946) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00052d31) fep_vkb_prediction_pane_g

0x745b,	// (0x0004a4c2) slider_set_pane_g3

0x746f,	// (0x0004a4d6) slider_set_pane_g4

0x7487,	// (0x0004a4ee) slider_set_pane_g5

0x745b,	// (0x0004a4c2) slider_set_pane_g6

0x749d,	// (0x0004a504) slider_set_pane_g7

0xa673,	// (0x0004d6da) slider_form_pane_g3

0xa67c,	// (0x0004d6e3) slider_form_pane_g4

0xa684,	// (0x0004d6eb) slider_form_pane_g5

0xa673,	// (0x0004d6da) slider_form_pane_g6

0xa68c,	// (0x0004d6f3) slider_form_pane_g7

0xad0a,	// (0x0004dd71) slider_set_pane_vc_g3

0xad13,	// (0x0004dd7a) slider_set_pane_vc_g4

0xad1c,	// (0x0004dd83) slider_set_pane_vc_g5

0xad0a,	// (0x0004dd71) slider_set_pane_vc_g6

0xad25,	// (0x0004dd8c) slider_set_pane_vc_g7

0xaefd,	// (0x0004df64) slider_form_pane_vc_g1

0xaf06,	// (0x0004df6d) slider_form_pane_vc_g2

0xaf0f,	// (0x0004df76) slider_form_pane_vc_g3

0xaefd,	// (0x0004df64) slider_form_pane_vc_g4

0xaf18,	// (0x0004df7f) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00052af8) slider_form_pane_vc_g

0xda5e,	// (0x00050ac5) main_idle_act3_pane

0xc8e7,	// (0x0004f94e) ai3_links_pane

0xc8f0,	// (0x0004f957) popup_ai3_data_window_ParamLimits

0xc8f0,	// (0x0004f957) popup_ai3_data_window

0xda5e,	// (0x00050ac5) grid_ai3_links_pane

0xc90e,	// (0x0004f975) cell_ai3_links_pane_ParamLimits

0xc90e,	// (0x0004f975) cell_ai3_links_pane

0xc928,	// (0x0004f98f) bg_popup_sub_pane_cp11

0xc935,	// (0x0004f99c) cell_ai3_links_pane_g1

0xda5e,	// (0x00050ac5) bg_popup_sub_pane_cp12

0xc95a,	// (0x0004f9c1) heading_ai3_data_pane

0xc962,	// (0x0004f9c9) list_ai3_gene_pane

0xc96e,	// (0x0004f9d5) popup_ai3_data_window_g1

0xc976,	// (0x0004f9dd) heading_ai3_data_pane_g1

0xc97e,	// (0x0004f9e5) heading_ai3_data_pane_t1

0xc98c,	// (0x0004f9f3) list_double_ai3_gene_pane_ParamLimits

0xc98c,	// (0x0004f9f3) list_double_ai3_gene_pane

0xc999,	// (0x0004fa00) list_single_ai3_gene_pane_ParamLimits

0xc999,	// (0x0004fa00) list_single_ai3_gene_pane

0xb72e,	// (0x0004e795) list_highlight_pane_cp7_ParamLimits

0xb72e,	// (0x0004e795) list_highlight_pane_cp7

0xc9a6,	// (0x0004fa0d) list_single_a13_gene_pane_t1_ParamLimits

0xc9a6,	// (0x0004fa0d) list_single_a13_gene_pane_t1

0xc9bd,	// (0x0004fa24) list_single_ai3_gene_pane_g1

0xc9c6,	// (0x0004fa2d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00052d3a) list_single_ai3_gene_pane_g

0xc9ce,	// (0x0004fa35) list_double_ai3_gene_pane_g1_ParamLimits

0xc9ce,	// (0x0004fa35) list_double_ai3_gene_pane_g1

0xc9da,	// (0x0004fa41) list_double_ai3_gene_pane_t1_ParamLimits

0xc9da,	// (0x0004fa41) list_double_ai3_gene_pane_t1

0xc9f6,	// (0x0004fa5d) list_double_ai3_gene_pane_t2_ParamLimits

0xc9f6,	// (0x0004fa5d) list_double_ai3_gene_pane_t2

0xca0b,	// (0x0004fa72) list_double_ai3_gene_pane_t3_ParamLimits

0xca0b,	// (0x0004fa72) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00052d3f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00052d3f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b6b,	// (0x00048bd2) aid_size_min_col_2

0xc8af,	// (0x0004f916) aid_size_min_msg_ParamLimits

0xc8af,	// (0x0004f916) aid_size_min_msg

0xbb44,	// (0x0004ebab) fep_vkb_top_text_pane_g2_ParamLimits

0xbb44,	// (0x0004ebab) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00052bab) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00052bab) fep_vkb_top_text_pane_g

0xda5e,	// (0x00050ac5) main_hc_apps_shell_pane

0xca28,	// (0x0004fa8f) grid_hc_apps_pane_ParamLimits

0xca28,	// (0x0004fa8f) grid_hc_apps_pane

0xca37,	// (0x0004fa9e) list_hc_apps_pane

0xca3f,	// (0x0004faa6) scroll_pane_cp37_ParamLimits

0xca3f,	// (0x0004faa6) scroll_pane_cp37

0xca4b,	// (0x0004fab2) cell_hc_apps_pane_ParamLimits

0xca4b,	// (0x0004fab2) cell_hc_apps_pane

0xcb03,	// (0x0004fb6a) cell_hc_apps_pane_g1_ParamLimits

0xcb03,	// (0x0004fb6a) cell_hc_apps_pane_g1

0xcb34,	// (0x0004fb9b) cell_hc_apps_pane_g2_ParamLimits

0xcb34,	// (0x0004fb9b) cell_hc_apps_pane_g2

0xcb50,	// (0x0004fbb7) cell_hc_apps_pane_g3_ParamLimits

0xcb50,	// (0x0004fbb7) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00052d46) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00052d46) cell_hc_apps_pane_g

0xcb72,	// (0x0004fbd9) cell_hc_apps_pane_t1_ParamLimits

0xcb72,	// (0x0004fbd9) cell_hc_apps_pane_t1

0xdc0d,	// (0x00050c74) grid_highlight_pane_cp10_ParamLimits

0xdc0d,	// (0x00050c74) grid_highlight_pane_cp10

0xcbb2,	// (0x0004fc19) list_single_hc_apps_pane_ParamLimits

0xcbb2,	// (0x0004fc19) list_single_hc_apps_pane

0xcbf1,	// (0x0004fc58) list_single_hc_apps_pane_g1

0x7af3,	// (0x0004ab5a) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00052d4d) list_single_hc_apps_pane_g

0x7b0c,	// (0x0004ab73) list_single_hc_apps_pane_g2_copy1

0x5c2a,	// (0x00048c91) list_single_hc_apps_pane_t1

0xdacc,	// (0x00050b33) bg_set_opt_pane_cp_ParamLimits

0x6137,	// (0x0004919e) setting_slider_pane_t1_ParamLimits

0x6150,	// (0x000491b7) setting_slider_pane_t2_ParamLimits

0x616a,	// (0x000491d1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000525c5) setting_slider_pane_t_ParamLimits

0x6182,	// (0x000491e9) slider_set_pane_ParamLimits

0x6e51,	// (0x00049eb8) control_pane_g5_ParamLimits

0x6e51,	// (0x00049eb8) control_pane_g5

0xa4a0,	// (0x0004d507) slider_set_pane_g1_ParamLimits

0x744f,	// (0x0004a4b6) slider_set_pane_g2_ParamLimits

0x745b,	// (0x0004a4c2) slider_set_pane_g3_ParamLimits

0x746f,	// (0x0004a4d6) slider_set_pane_g4_ParamLimits

0x7487,	// (0x0004a4ee) slider_set_pane_g5_ParamLimits

0x745b,	// (0x0004a4c2) slider_set_pane_g6_ParamLimits

0x749d,	// (0x0004a504) slider_set_pane_g7_ParamLimits

0xf969,	// (0x000529d0) slider_set_pane_g_ParamLimits

0x0fe0,	// (0x00044047) navi_icon_text_pane_ParamLimits

0x8c31,	// (0x0004bc98) aid_fill_nsta_2_ParamLimits

0x8c72,	// (0x0004bcd9) aid_touch_tab_arrow_left_ParamLimits

0x8c81,	// (0x0004bce8) aid_touch_tab_arrow_right_ParamLimits

0x8cee,	// (0x0004bd55) clock_nsta_pane_ParamLimits

0x9f7c,	// (0x0004cfe3) navi_icon_pane_g1_ParamLimits

0x9f88,	// (0x0004cfef) navi_text_pane_t1_ParamLimits

0xb367,	// (0x0004e3ce) navi_icon_text_pane_g1_ParamLimits

0xb373,	// (0x0004e3da) navi_icon_text_pane_t1_ParamLimits

0xcbf1,	// (0x0004fc58) list_single_hc_apps_pane_g1_ParamLimits

0x7af3,	// (0x0004ab5a) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00052d4d) list_single_hc_apps_pane_g_ParamLimits

0x7b0c,	// (0x0004ab73) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c2a,	// (0x00048c91) list_single_hc_apps_pane_t1_ParamLimits

0x5f7f,	// (0x00048fe6) popup_toolbar2_fixed_window_ParamLimits

0x5f7f,	// (0x00048fe6) popup_toolbar2_fixed_window

0x8b35,	// (0x0004bb9c) popup_toolbar2_float_window

0xda5e,	// (0x00050ac5) bg_popup_sub_pane_cp27

0xcc0a,	// (0x0004fc71) grid_toolbar2_float_pane

0xda5e,	// (0x00050ac5) bg_popup_sub_pane_cp26

0xcc0a,	// (0x0004fc71) grid_toolbar2_fixed_pane

0xcc12,	// (0x0004fc79) cell_toolbar2_fixed_pane_ParamLimits

0xcc12,	// (0x0004fc79) cell_toolbar2_fixed_pane

0xcc22,	// (0x0004fc89) cell_toolbar2_fixed_pane_g1

0xcc2b,	// (0x0004fc92) toolbar2_fixed_button_pane

0x9125,	// (0x0004c18c) toolbar2_fixed_button_pane_g1

0x912d,	// (0x0004c194) toolbar2_fixed_button_pane_g2

0x9135,	// (0x0004c19c) toolbar2_fixed_button_pane_g3

0x913d,	// (0x0004c1a4) toolbar2_fixed_button_pane_g4

0x9145,	// (0x0004c1ac) toolbar2_fixed_button_pane_g5

0x914d,	// (0x0004c1b4) toolbar2_fixed_button_pane_g6

0x9155,	// (0x0004c1bc) toolbar2_fixed_button_pane_g7

0x915d,	// (0x0004c1c4) toolbar2_fixed_button_pane_g8

0x9165,	// (0x0004c1cc) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x000528d2) toolbar2_fixed_button_pane_g

0xcc33,	// (0x0004fc9a) cell_toolbar2_float_pane_ParamLimits

0xcc33,	// (0x0004fc9a) cell_toolbar2_float_pane

0xcc44,	// (0x0004fcab) cell_toolbar2_float_pane_g1

0xcc2b,	// (0x0004fc92) toolbar2_fixed_button_pane_cp

0xb8a0,	// (0x0004e907) fep_vkb_accented_list_pane_ParamLimits

0xb8a0,	// (0x0004e907) fep_vkb_accented_list_pane

0x78e3,	// (0x0004a94a) bg_popup_fep_shadow_pane_g9

0x41ab,	// (0x00047212) bg_popup_fep_shadow_pane_cp3

0x08fe,	// (0x00043965) list_accented_list_pane

0xcc4d,	// (0x0004fcb4) list_single_accented_list_pane_ParamLimits

0xcc4d,	// (0x0004fcb4) list_single_accented_list_pane

0x41ab,	// (0x00047212) list_highlight_pane_cp10

0xcc5e,	// (0x0004fcc5) list_single_accented_list_pane_t1

0x8a7b,	// (0x0004bae2) popup_slider_window_ParamLimits

0x8a7b,	// (0x0004bae2) popup_slider_window

0xc8a6,	// (0x0004f90d) aid_indentation_list_msg

0xcd2a,	// (0x0004fd91) bg_popup_window_pane_cp19

0xcd98,	// (0x0004fdff) popup_slider_window_g1

0xcdb4,	// (0x0004fe1b) popup_slider_window_g2

0xcdd0,	// (0x0004fe37) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00052d52) popup_slider_window_g

0xce2c,	// (0x0004fe93) popup_slider_window_t1

0xcea0,	// (0x0004ff07) small_volume_slider_vertical_pane

0xb769,	// (0x0004e7d0) small_volume_slider_vertical_pane_g1

0xb769,	// (0x0004e7d0) small_volume_slider_vertical_pane_g2

0xcebc,	// (0x0004ff23) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00052d64) small_volume_slider_vertical_pane_g

0x5d37,	// (0x00048d9e) area_side_right_pane_ParamLimits

0x5d37,	// (0x00048d9e) area_side_right_pane

0x7b28,	// (0x0004ab8f) aid_size_side_button_ParamLimits

0x7b28,	// (0x0004ab8f) aid_size_side_button

0x7b3c,	// (0x0004aba3) grid_sctrl_middle_pane_ParamLimits

0x7b3c,	// (0x0004aba3) grid_sctrl_middle_pane

0x7b5c,	// (0x0004abc3) sctrl_sk_bottom_pane

0x7b6d,	// (0x0004abd4) sctrl_sk_top_pane

0x7b7f,	// (0x0004abe6) aid_touch_sctrl_top

0xdc0d,	// (0x00050c74) bg_sctrl_sk_pane_ParamLimits

0xdc0d,	// (0x00050c74) bg_sctrl_sk_pane

0x7b8c,	// (0x0004abf3) sctrl_sk_top_pane_g1

0x7b99,	// (0x0004ac00) sctrl_sk_top_pane_t1

0x7b7f,	// (0x0004abe6) aid_touch_sctrl_bottom

0xdc0d,	// (0x00050c74) bg_sctrl_sk_pane_cp_ParamLimits

0xdc0d,	// (0x00050c74) bg_sctrl_sk_pane_cp

0x7bb4,	// (0x0004ac1b) sctrl_sk_bottom_pane_g1

0x7b99,	// (0x0004ac00) sctrl_sk_bottom_pane_t1

0x7bbd,	// (0x0004ac24) cell_sctrl_middle_pane_ParamLimits

0x7bbd,	// (0x0004ac24) cell_sctrl_middle_pane

0x7bda,	// (0x0004ac41) aid_touch_sctrl_middle_ParamLimits

0x7bda,	// (0x0004ac41) aid_touch_sctrl_middle

0x07eb,	// (0x00043852) bg_sctrl_middle_pane_ParamLimits

0x07eb,	// (0x00043852) bg_sctrl_middle_pane

0xb9e4,	// (0x0004ea4b) cell_sctrl_middle_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) cell_sctrl_middle_pane_g1

0x7bec,	// (0x0004ac53) cell_sctrl_middle_pane_g2_ParamLimits

0x7bec,	// (0x0004ac53) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00052d70) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00052d70) cell_sctrl_middle_pane_g

0x9125,	// (0x0004c18c) bg_sctrl_middle_pane_g1

0x912d,	// (0x0004c194) bg_sctrl_middle_pane_g2

0x9135,	// (0x0004c19c) bg_sctrl_middle_pane_g3

0x913d,	// (0x0004c1a4) bg_sctrl_middle_pane_g4

0x9145,	// (0x0004c1ac) bg_sctrl_middle_pane_g5

0x914d,	// (0x0004c1b4) bg_sctrl_middle_pane_g6

0x9155,	// (0x0004c1bc) bg_sctrl_middle_pane_g7

0x915d,	// (0x0004c1c4) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00052d75) bg_sctrl_middle_pane_g

0x9165,	// (0x0004c1cc) bg_sctrl_middle_pane_g8_copy1

0x9125,	// (0x0004c18c) bg_sctrl_sk_pane_g1

0x912d,	// (0x0004c194) bg_sctrl_sk_pane_g2

0x9135,	// (0x0004c19c) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x000528d2) bg_sctrl_sk_pane_g

0xe028,	// (0x0005108f) aid_size_touch_scroll_bar

0x913d,	// (0x0004c1a4) bg_sctrl_sk_pane_g4

0x9145,	// (0x0004c1ac) bg_sctrl_sk_pane_g5

0x914d,	// (0x0004c1b4) bg_sctrl_sk_pane_g6

0x9155,	// (0x0004c1bc) bg_sctrl_sk_pane_g7

0x915d,	// (0x0004c1c4) bg_sctrl_sk_pane_g8

0x9165,	// (0x0004c1cc) bg_sctrl_sk_pane_g9

0x7092,	// (0x0004a0f9) popup_fep_china_hwr2_fs_candidate_window

0x709c,	// (0x0004a103) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x709c,	// (0x0004a103) popup_fep_china_hwr2_fs_control_window

0xb9e4,	// (0x0004ea4b) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00052d6b) sctrl_sk_top_pane_g

0xcec5,	// (0x0004ff2c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcec5,	// (0x0004ff2c) aid_fep_china_hwr2_fs_cell

0xced8,	// (0x0004ff3f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xced8,	// (0x0004ff3f) bg_popup_fep_shadow_pane_cp4

0xcef1,	// (0x0004ff58) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcef1,	// (0x0004ff58) bg_popup_fep_shadow_pane_cp5

0xcf03,	// (0x0004ff6a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcf03,	// (0x0004ff6a) popup_fep_china_hwr2_fs_control_bar_grid

0xcf13,	// (0x0004ff7a) popup_fep_china_hwr2_fs_control_funtion_grid

0xcf1b,	// (0x0004ff82) aid_fep_china_hwr2_fs_candi_cell

0xda5e,	// (0x00050ac5) bg_popup_fep_shadow_pane_cp6

0xcf25,	// (0x0004ff8c) popup_fep_china_hwr2_fs_candidate_grid

0xcf2f,	// (0x0004ff96) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcf2f,	// (0x0004ff96) cell_fep_china_hwr2_fs_funtion_grid

0xb769,	// (0x0004e7d0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcf47,	// (0x0004ffae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcf47,	// (0x0004ffae) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcf55,	// (0x0004ffbc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcf55,	// (0x0004ffbc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00052d86) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00052d86) cell_fep_china_hwr2_fs_funtion_grid_g

0xcf6b,	// (0x0004ffd2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcf6b,	// (0x0004ffd2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcf80,	// (0x0004ffe7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcf80,	// (0x0004ffe7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00052d8b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00052d8b) cell_fep_china_hwr2_fs_funtion_grid_t

0xcf9c,	// (0x00050003) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcfa4,	// (0x0005000b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcfac,	// (0x00050013) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00052d90) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcfb4,	// (0x0005001b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcfb4,	// (0x0005001b) cell_fep_china_hwr2_fs_candidate_grid

0xcfd3,	// (0x0005003a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcfdb,	// (0x00050042) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb769,	// (0x0004e7d0) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb769,	// (0x0004e7d0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00052bb0) cell_fep_china_hwr2_fs_candidate_grid_g

0xcfe3,	// (0x0005004a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8d01,	// (0x0004bd68) clock_nsta_pane_cp_24_ParamLimits

0x8d01,	// (0x0004bd68) clock_nsta_pane_cp_24

0x8d81,	// (0x0004bde8) indicator_nsta_pane_cp_24_ParamLimits

0x8d81,	// (0x0004bde8) indicator_nsta_pane_cp_24

0x9df8,	// (0x0004ce5f) heading_pane_g1

0x0001,

0xf8d0,	// (0x00052937) heading_pane_g

0xa89a,	// (0x0004d901) grid_sct_catagory_button_pane

0xa8cc,	// (0x0004d933) scroll_pane_cp5_ParamLimits

0xb3b5,	// (0x0004e41c) button_value_adjust_pane_cp5_ParamLimits

0xb3b5,	// (0x0004e41c) button_value_adjust_pane_cp5

0xb49a,	// (0x0004e501) form2_midp_time_pane_ParamLimits

0xcff1,	// (0x00050058) cell_sct_catagory_button_pane_ParamLimits

0xcff1,	// (0x00050058) cell_sct_catagory_button_pane

0xb72e,	// (0x0004e795) bg_button_pane_cp01_ParamLimits

0xb72e,	// (0x0004e795) bg_button_pane_cp01

0xb769,	// (0x0004e7d0) cell_sct_catagory_button_pane_g1

0x8abc,	// (0x0004bb23) popup_tb_extension_window

0xd003,	// (0x0005006a) aid_size_cell_ext_ParamLimits

0xd003,	// (0x0005006a) aid_size_cell_ext

0xdc0d,	// (0x00050c74) bg_tb_trans_pane_cp1_ParamLimits

0xdc0d,	// (0x00050c74) bg_tb_trans_pane_cp1

0xd023,	// (0x0005008a) grid_tb_ext_pane_ParamLimits

0xd023,	// (0x0005008a) grid_tb_ext_pane

0xd053,	// (0x000500ba) cell_tb_ext_pane_ParamLimits

0xd053,	// (0x000500ba) cell_tb_ext_pane

0xd06a,	// (0x000500d1) cell_tb_ext_pane_g1_ParamLimits

0xd06a,	// (0x000500d1) cell_tb_ext_pane_g1

0xd087,	// (0x000500ee) cell_tb_ext_pane_t1

0xdc0d,	// (0x00050c74) list_highlight_pane_cp11_ParamLimits

0xdc0d,	// (0x00050c74) list_highlight_pane_cp11

0x5f9e,	// (0x00049005) popup_uni_indicator_window_ParamLimits

0x5f9e,	// (0x00049005) popup_uni_indicator_window

0x07eb,	// (0x00043852) bg_popup_sub_pane_cp14

0xd0a2,	// (0x00050109) list_uniindi_pane

0xd0ae,	// (0x00050115) uniindi_top_pane

0xdc0d,	// (0x00050c74) bg_uniindi_top_pane

0xd0cf,	// (0x00050136) uniindi_top_pane_g1

0xd0e5,	// (0x0005014c) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00052d97) uniindi_top_pane_g

0xd10f,	// (0x00050176) uniindi_top_pane_t1

0xd13b,	// (0x000501a2) list_single_uniindi_pane_ParamLimits

0xd13b,	// (0x000501a2) list_single_uniindi_pane

0xb769,	// (0x0004e7d0) bg_uniindi_top_pane_g1

0xd14d,	// (0x000501b4) list_single_uniindi_pane_g1

0xd160,	// (0x000501c7) list_single_uniindi_pane_t1

0xda5e,	// (0x00050ac5) control_bg_pane

0xd185,	// (0x000501ec) bg_sctrl_sk_pane_cp1

0xd18e,	// (0x000501f5) bg_sctrl_sk_pane_cp2

0xd197,	// (0x000501fe) control_bg_pane_g1

0xd1a0,	// (0x00050207) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00052da0) control_bg_pane_g

0xb1dc,	// (0x0004e243) cell_indicator_nsta_pane_g1_ParamLimits

0xb1ea,	// (0x0004e251) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00052b14) cell_indicator_nsta_pane_g_ParamLimits

0x59cc,	// (0x00048a33) form2_midp_time_pane_t1_ParamLimits

0xde6a,	// (0x00050ed1) main_idle_act4_pane_ParamLimits

0xde6a,	// (0x00050ed1) main_idle_act4_pane

0x8abc,	// (0x0004bb23) popup_tb_extension_window_ParamLimits

0xd045,	// (0x000500ac) tb_ext_find_pane_ParamLimits

0xd045,	// (0x000500ac) tb_ext_find_pane

0xd1a9,	// (0x00050210) ai_gene_pane_1_cp1

0x4231,	// (0x00047298) ai_gene_pane_2_cp1

0xd1b1,	// (0x00050218) list_single_idle_plugin_calendar_pane

0xd1ba,	// (0x00050221) list_single_idle_plugin_notification_pane

0xd1c3,	// (0x0005022a) list_single_idle_plugin_player_pane

0xd1cc,	// (0x00050233) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd1cc,	// (0x00050233) list_single_idle_plugin_shortcut_pane

0xd1ee,	// (0x00050255) main_idle_act4_pane_t1

0xd200,	// (0x00050267) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00052da5) main_idle_act4_pane_t

0xd212,	// (0x00050279) middle_sk_idle_act4_pane_ParamLimits

0xd212,	// (0x00050279) middle_sk_idle_act4_pane

0xd228,	// (0x0005028f) popup_clock_digital_analogue_window_cp2

0xd242,	// (0x000502a9) shortcut_wheel_idle_act4_pane_ParamLimits

0xd242,	// (0x000502a9) shortcut_wheel_idle_act4_pane

0xb769,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g1

0xb769,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g2

0xb769,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g3

0xb769,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g4

0xb769,	// (0x0004e7d0) shortcut_wheel_idle_act4_pane_g5

0xd256,	// (0x000502bd) shortcut_wheel_idle_act4_pane_g6

0xd25e,	// (0x000502c5) shortcut_wheel_idle_act4_pane_g7

0xd266,	// (0x000502cd) shortcut_wheel_idle_act4_pane_g8

0xd26e,	// (0x000502d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00052daa) shortcut_wheel_idle_act4_pane_g

0xb9e4,	// (0x0004ea4b) middle_sk_idle_act4_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) middle_sk_idle_act4_pane_g1

0xd2d2,	// (0x00050339) middle_sk_idle_act4_pane_g2_ParamLimits

0xd2d2,	// (0x00050339) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00052dcd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00052dcd) middle_sk_idle_act4_pane_g

0xd2de,	// (0x00050345) middle_sk_idle_act4_pane_t1_ParamLimits

0xd2de,	// (0x00050345) middle_sk_idle_act4_pane_t1

0xd2fb,	// (0x00050362) grid_ai_shortcut_pane_ParamLimits

0xd2fb,	// (0x00050362) grid_ai_shortcut_pane

0xd314,	// (0x0005037b) list_highlight_pane_cp16_ParamLimits

0xd314,	// (0x0005037b) list_highlight_pane_cp16

0xd321,	// (0x00050388) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd321,	// (0x00050388) list_single_idle_plugin_shortcut_pane_g1

0xd32d,	// (0x00050394) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd32d,	// (0x00050394) list_single_idle_plugin_shortcut_pane_g2

0xd347,	// (0x000503ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd347,	// (0x000503ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00052dd2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00052dd2) list_single_idle_plugin_shortcut_pane_g

0xd35a,	// (0x000503c1) cell_ai_shortcut_pane_ParamLimits

0xd35a,	// (0x000503c1) cell_ai_shortcut_pane

0xd37d,	// (0x000503e4) cell_ai_shortcut_pane_g1_ParamLimits

0xd37d,	// (0x000503e4) cell_ai_shortcut_pane_g1

0xd1a9,	// (0x00050210) ai_gene_pane_1_cp2

0xd39f,	// (0x00050406) ai_gene_pane_2_cp2

0xd3a7,	// (0x0005040e) list_highlight_pane_cp15

0xd3b0,	// (0x00050417) list_single_idle_plugin_calendar_pane_g1

0xd3a7,	// (0x0005040e) list_highlight_pane_cp17

0xd3b8,	// (0x0005041f) list_single_idle_plugin_calendar_pane_g1_copy1

0xd3c0,	// (0x00050427) list_single_idle_plugin_player_pane_g1

0xab01,	// (0x0004db68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00052dd9) list_single_idle_plugin_player_pane_g

0xd3c8,	// (0x0005042f) list_single_idle_plugin_player_pane_t1

0xd3d6,	// (0x0005043d) list_single_idle_plugin_player_pane_t2

0xd3e4,	// (0x0005044b) list_single_idle_plugin_player_pane_t3

0xd3f2,	// (0x00050459) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00052dde) list_single_idle_plugin_player_pane_t

0xd400,	// (0x00050467) wait_bar_pane_cp15

0xd408,	// (0x0005046f) grid_ai_notification_pane

0xab01,	// (0x0004db68) list_single_idle_plugin_notification_pane_g1

0xd411,	// (0x00050478) cell_ai_notification_pane_ParamLimits

0xd411,	// (0x00050478) cell_ai_notification_pane

0xd41e,	// (0x00050485) cell_ai_notification_pane_g1

0xd426,	// (0x0005048d) cell_ai_notification_pane_t1

0xd434,	// (0x0005049b) tb_ext_find_button_pane

0xd43c,	// (0x000504a3) tb_ext_find_pane_g1

0xd444,	// (0x000504ab) tb_ext_find_pane_t1

0x0ccd,	// (0x00043d34) tb_ext_find_button_pane_g1

0xd452,	// (0x000504b9) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00052de7) tb_ext_find_button_pane_g

0xd1ee,	// (0x00050255) main_idle_act4_pane_t1_ParamLimits

0xd200,	// (0x00050267) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00052da5) main_idle_act4_pane_t_ParamLimits

0xd228,	// (0x0005028f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd236,	// (0x0005029d) sat_plugin_idle_act4_pane_ParamLimits

0xd236,	// (0x0005029d) sat_plugin_idle_act4_pane

0xd45b,	// (0x000504c2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd45b,	// (0x000504c2) sat_plugin_idle_act4_pane_t1

0xd46e,	// (0x000504d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd46e,	// (0x000504d5) sat_plugin_idle_act4_pane_t2

0xd481,	// (0x000504e8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd481,	// (0x000504e8) sat_plugin_idle_act4_pane_t3

0xd494,	// (0x000504fb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd494,	// (0x000504fb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00052dec) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00052dec) sat_plugin_idle_act4_pane_t

0x5ecf,	// (0x00048f36) popup_battery_window_ParamLimits

0x5ecf,	// (0x00048f36) popup_battery_window

0xdc0d,	// (0x00050c74) bg_popup_sub_pane_cp25_ParamLimits

0xdc0d,	// (0x00050c74) bg_popup_sub_pane_cp25

0xd4a7,	// (0x0005050e) popup_battery_window_g1_ParamLimits

0xd4a7,	// (0x0005050e) popup_battery_window_g1

0xd4b3,	// (0x0005051a) popup_battery_window_t1_ParamLimits

0xd4b3,	// (0x0005051a) popup_battery_window_t1

0xd4c5,	// (0x0005052c) popup_battery_window_t2_ParamLimits

0xd4c5,	// (0x0005052c) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00052df5) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00052df5) popup_battery_window_t

0x6bde,	// (0x00049c45) midp_canvas_pane_ParamLimits

0x6c40,	// (0x00049ca7) midp_keypad_pane_ParamLimits

0x6c40,	// (0x00049ca7) midp_keypad_pane

0x6fe4,	// (0x0004a04b) main_midp_pane_ParamLimits

0xb268,	// (0x0004e2cf) signal_pane_g2_cp_ParamLimits

0xd4e2,	// (0x00050549) aid_size_cell_midp_keypad_ParamLimits

0xd4e2,	// (0x00050549) aid_size_cell_midp_keypad

0xd4fc,	// (0x00050563) midp_keyp_game_grid_pane_ParamLimits

0xd4fc,	// (0x00050563) midp_keyp_game_grid_pane

0xd51c,	// (0x00050583) midp_keyp_rocker_pane_ParamLimits

0xd51c,	// (0x00050583) midp_keyp_rocker_pane

0xd547,	// (0x000505ae) midp_keyp_sk_left_pane_ParamLimits

0xd547,	// (0x000505ae) midp_keyp_sk_left_pane

0xd5a1,	// (0x00050608) midp_keyp_sk_right_pane_ParamLimits

0xd5a1,	// (0x00050608) midp_keyp_sk_right_pane

0xda5e,	// (0x00050ac5) bg_button_pane_cp03

0xd5fb,	// (0x00050662) midp_keyp_sk_left_pane_g1

0xda5e,	// (0x00050ac5) bg_button_pane_cp04

0xd5fb,	// (0x00050662) midp_keyp_sk_right_pane_g1

0xb769,	// (0x0004e7d0) midp_keyp_rocker_pane_g1

0xd604,	// (0x0005066b) keyp_game_cell_pane_ParamLimits

0xd604,	// (0x0005066b) keyp_game_cell_pane

0xda5e,	// (0x00050ac5) bg_button_pane_cp02

0xd617,	// (0x0005067e) keyp_game_cell_pane_g1

0x5f19,	// (0x00048f80) popup_fep_vkb2_window_ParamLimits

0x5f19,	// (0x00048f80) popup_fep_vkb2_window

0x7c0a,	// (0x0004ac71) aid_size_cell_vkb2_ParamLimits

0x7c0a,	// (0x0004ac71) aid_size_cell_vkb2

0x7c5e,	// (0x0004acc5) popup_fep_vkb2_window_g1_ParamLimits

0x7c5e,	// (0x0004acc5) popup_fep_vkb2_window_g1

0x7ca6,	// (0x0004ad0d) vkb2_area_bottom_pane_ParamLimits

0x7ca6,	// (0x0004ad0d) vkb2_area_bottom_pane

0x7cfa,	// (0x0004ad61) vkb2_area_keypad_pane_ParamLimits

0x7cfa,	// (0x0004ad61) vkb2_area_keypad_pane

0x7d40,	// (0x0004ada7) vkb2_area_top_pane_ParamLimits

0x7d40,	// (0x0004ada7) vkb2_area_top_pane

0x7dba,	// (0x0004ae21) vkb2_top_entry_pane_ParamLimits

0x7dba,	// (0x0004ae21) vkb2_top_entry_pane

0x7de4,	// (0x0004ae4b) vkb2_top_grid_left_pane_ParamLimits

0x7de4,	// (0x0004ae4b) vkb2_top_grid_left_pane

0x7e02,	// (0x0004ae69) vkb2_top_grid_right_pane_ParamLimits

0x7e02,	// (0x0004ae69) vkb2_top_grid_right_pane

0x7e20,	// (0x0004ae87) vkb2_cell_keypad_pane_ParamLimits

0x7e20,	// (0x0004ae87) vkb2_cell_keypad_pane

0x7ef1,	// (0x0004af58) vkb2_area_bottom_grid_pane_ParamLimits

0x7ef1,	// (0x0004af58) vkb2_area_bottom_grid_pane

0x7f17,	// (0x0004af7e) vkb2_area_bottom_pane_g1_ParamLimits

0x7f17,	// (0x0004af7e) vkb2_area_bottom_pane_g1

0x7f3b,	// (0x0004afa2) vkb2_area_bottom_pane_g2_ParamLimits

0x7f3b,	// (0x0004afa2) vkb2_area_bottom_pane_g2

0x7f69,	// (0x0004afd0) vkb2_area_bottom_pane_g3_ParamLimits

0x7f69,	// (0x0004afd0) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00052dfa) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00052dfa) vkb2_area_bottom_pane_g

0x7fca,	// (0x0004b031) vkb2_top_cell_left_pane_ParamLimits

0x7fca,	// (0x0004b031) vkb2_top_cell_left_pane

0xd628,	// (0x0005068f) vkb2_top_entry_pane_g1_ParamLimits

0xd628,	// (0x0005068f) vkb2_top_entry_pane_g1

0xd636,	// (0x0005069d) vkb2_top_entry_pane_t1_ParamLimits

0xd636,	// (0x0005069d) vkb2_top_entry_pane_t1

0xd668,	// (0x000506cf) vkb2_top_entry_pane_t2_ParamLimits

0xd668,	// (0x000506cf) vkb2_top_entry_pane_t2

0xd69a,	// (0x00050701) vkb2_top_entry_pane_t3_ParamLimits

0xd69a,	// (0x00050701) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00052e01) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00052e01) vkb2_top_entry_pane_t

0x8017,	// (0x0004b07e) vkb2_top_grid_right_pane_g1_ParamLimits

0x8017,	// (0x0004b07e) vkb2_top_grid_right_pane_g1

0x802d,	// (0x0004b094) vkb2_top_grid_right_pane_g2_ParamLimits

0x802d,	// (0x0004b094) vkb2_top_grid_right_pane_g2

0x8045,	// (0x0004b0ac) vkb2_top_grid_right_pane_g3_ParamLimits

0x8045,	// (0x0004b0ac) vkb2_top_grid_right_pane_g3

0x805d,	// (0x0004b0c4) vkb2_top_grid_right_pane_g4_ParamLimits

0x805d,	// (0x0004b0c4) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00052e08) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00052e08) vkb2_top_grid_right_pane_g

0x8073,	// (0x0004b0da) vkb2_top_cell_left_pane_g1

0x808a,	// (0x0004b0f1) vkb2_cell_keypad_pane_g1_ParamLimits

0x808a,	// (0x0004b0f1) vkb2_cell_keypad_pane_g1

0xd6be,	// (0x00050725) vkb2_cell_keypad_pane_t1_ParamLimits

0xd6be,	// (0x00050725) vkb2_cell_keypad_pane_t1

0x8098,	// (0x0004b0ff) vkb2_cell_bottom_grid_pane_ParamLimits

0x8098,	// (0x0004b0ff) vkb2_cell_bottom_grid_pane

0x80d1,	// (0x0004b138) vkb2_cell_bottom_grid_pane_g1

0xd276,	// (0x000502dd) aid_call2_pane_cp02

0xd27e,	// (0x000502e5) aid_call_pane_cp02

0xd286,	// (0x000502ed) clock_digital_number_pane_cp10

0xd28e,	// (0x000502f5) clock_digital_number_pane_cp11

0xd296,	// (0x000502fd) clock_digital_number_pane_cp12

0xd29e,	// (0x00050305) clock_digital_number_pane_cp13

0xd2a6,	// (0x0005030d) clock_digital_separator_pane_cp10

0x0ccd,	// (0x00043d34) popup_clock_digital_analogue_window_cp2_g1

0x0ccd,	// (0x00043d34) popup_clock_digital_analogue_window_cp2_g2

0xd2ae,	// (0x00050315) popup_clock_digital_analogue_window_cp2_g3

0x0ccd,	// (0x00043d34) popup_clock_digital_analogue_window_cp2_g4

0xd2ae,	// (0x00050315) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00052dbd) popup_clock_digital_analogue_window_cp2_g

0xd2b6,	// (0x0005031d) popup_clock_digital_analogue_window_cp2_t1

0xd2c4,	// (0x0005032b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00052dc8) popup_clock_digital_analogue_window_cp2_t

0xb769,	// (0x0004e7d0) clock_digital_number_pane_cp10_g1

0xb769,	// (0x0004e7d0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00052bb0) clock_digital_number_pane_cp10_g

0xb769,	// (0x0004e7d0) clock_digital_separator_pane_cp10_g1

0xb769,	// (0x0004e7d0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00052bb0) clock_digital_separator_pane_cp10_g

0xd0f1,	// (0x00050158) uniindi_top_pane_g3

0xd102,	// (0x00050169) uniindi_top_pane_g4

0x7eab,	// (0x0004af12) vkb2_row_keypad_pane_ParamLimits

0x7eab,	// (0x0004af12) vkb2_row_keypad_pane

0x80ed,	// (0x0004b154) vkb2_cell_t_keypad_pane_ParamLimits

0x80ed,	// (0x0004b154) vkb2_cell_t_keypad_pane

0x80fd,	// (0x0004b164) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x80fd,	// (0x0004b164) vkb2_cell_t_keypad_pane_cp08

0x8112,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8112,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp09

0x8126,	// (0x0004b18d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8126,	// (0x0004b18d) vkb2_cell_t_keypad_pane_cp01

0x8137,	// (0x0004b19e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8137,	// (0x0004b19e) vkb2_cell_t_keypad_pane_cp02

0x8148,	// (0x0004b1af) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8148,	// (0x0004b1af) vkb2_cell_t_keypad_pane_cp03

0x8159,	// (0x0004b1c0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8159,	// (0x0004b1c0) vkb2_cell_t_keypad_pane_cp04

0x816a,	// (0x0004b1d1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x816a,	// (0x0004b1d1) vkb2_cell_t_keypad_pane_cp05

0x817b,	// (0x0004b1e2) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x817b,	// (0x0004b1e2) vkb2_cell_t_keypad_pane_cp06

0x818e,	// (0x0004b1f5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x818e,	// (0x0004b1f5) vkb2_cell_t_keypad_pane_cp07

0x81a3,	// (0x0004b20a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x81a3,	// (0x0004b20a) vkb2_cell_t_keypad_pane_cp10

0xb9e4,	// (0x0004ea4b) vkb2_cell_t_keypad_pane_g1

0xd6d5,	// (0x0005073c) vkb2_cell_t_keypad_pane_t1

0xda5e,	// (0x00050ac5) popup_grid_graphic2_window

0xd6e7,	// (0x0005074e) aid_size_cell_graphic2_ParamLimits

0xd6e7,	// (0x0005074e) aid_size_cell_graphic2

0xd71f,	// (0x00050786) bg_popup_window_pane_cp21_ParamLimits

0xd71f,	// (0x00050786) bg_popup_window_pane_cp21

0xd72d,	// (0x00050794) graphic2_pages_pane_ParamLimits

0xd72d,	// (0x00050794) graphic2_pages_pane

0xd773,	// (0x000507da) grid_graphic2_control_pane_ParamLimits

0xd773,	// (0x000507da) grid_graphic2_control_pane

0xd7b1,	// (0x00050818) grid_graphic2_pane_ParamLimits

0xd7b1,	// (0x00050818) grid_graphic2_pane

0xd827,	// (0x0005088e) cell_graphic2_pane

0xda5e,	// (0x00050ac5) main_comp_mode_pane

0xc962,	// (0x0004f9c9) list_ai3_gene_pane_ParamLimits

0xcd2a,	// (0x0004fd91) bg_popup_window_pane_cp19_ParamLimits

0xcd36,	// (0x0004fd9d) bg_touch_area_indi_pane_ParamLimits

0xcd36,	// (0x0004fd9d) bg_touch_area_indi_pane

0xcd4c,	// (0x0004fdb3) bg_touch_area_indi_pane_cp01_ParamLimits

0xcd4c,	// (0x0004fdb3) bg_touch_area_indi_pane_cp01

0xcd64,	// (0x0004fdcb) bg_touch_area_indi_pane_cp02_ParamLimits

0xcd64,	// (0x0004fdcb) bg_touch_area_indi_pane_cp02

0xcd7e,	// (0x0004fde5) bg_touch_area_indi_pane_cp03_ParamLimits

0xcd7e,	// (0x0004fde5) bg_touch_area_indi_pane_cp03

0xcd98,	// (0x0004fdff) popup_slider_window_g1_ParamLimits

0xcdb4,	// (0x0004fe1b) popup_slider_window_g2_ParamLimits

0xcdd0,	// (0x0004fe37) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00052d52) popup_slider_window_g_ParamLimits

0xce2c,	// (0x0004fe93) popup_slider_window_t1_ParamLimits

0xcea0,	// (0x0004ff07) small_volume_slider_vertical_pane_ParamLimits

0xd827,	// (0x0005088e) cell_graphic2_pane_ParamLimits

0xd879,	// (0x000508e0) bg_button_pane_cp10_ParamLimits

0xd879,	// (0x000508e0) bg_button_pane_cp10

0xd88e,	// (0x000508f5) bg_button_pane_cp11_ParamLimits

0xd88e,	// (0x000508f5) bg_button_pane_cp11

0xd8a3,	// (0x0005090a) graphic2_pages_pane_g1_ParamLimits

0xd8a3,	// (0x0005090a) graphic2_pages_pane_g1

0xd8be,	// (0x00050925) graphic2_pages_pane_g2_ParamLimits

0xd8be,	// (0x00050925) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00052e16) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00052e16) graphic2_pages_pane_g

0xd8d6,	// (0x0005093d) graphic2_pages_pane_t1_ParamLimits

0xd8d6,	// (0x0005093d) graphic2_pages_pane_t1

0xd8ec,	// (0x00050953) cell_graphic2_control_pane_ParamLimits

0xd8ec,	// (0x00050953) cell_graphic2_control_pane

0xd90f,	// (0x00050976) cell_graphic2_pane_g1_ParamLimits

0xd90f,	// (0x00050976) cell_graphic2_pane_g1

0xd91c,	// (0x00050983) cell_graphic2_pane_g2_ParamLimits

0xd91c,	// (0x00050983) cell_graphic2_pane_g2

0xd929,	// (0x00050990) cell_graphic2_pane_g3_ParamLimits

0xd929,	// (0x00050990) cell_graphic2_pane_g3

0xd936,	// (0x0005099d) cell_graphic2_pane_g4_ParamLimits

0xd936,	// (0x0005099d) cell_graphic2_pane_g4

0xd943,	// (0x000509aa) cell_graphic2_pane_g5_ParamLimits

0xd943,	// (0x000509aa) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00052e1b) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00052e1b) cell_graphic2_pane_g

0xd95e,	// (0x000509c5) cell_graphic2_pane_t1_ParamLimits

0xd95e,	// (0x000509c5) cell_graphic2_pane_t1

0x9199,	// (0x0004c200) grid_highlight_pane_cp11_ParamLimits

0x9199,	// (0x0004c200) grid_highlight_pane_cp11

0xdc0d,	// (0x00050c74) bg_button_pane_cp05

0xd987,	// (0x000509ee) cell_graphic2_control_pane_g1

0xb769,	// (0x0004e7d0) bg_touch_area_indi_pane_g1

0xd9af,	// (0x00050a16) aid_cmod_rocker_key_size

0xd9b9,	// (0x00050a20) aid_cmode_itu_key_size

0xd9c3,	// (0x00050a2a) main_cmode_video_pane

0xd9cd,	// (0x00050a34) main_comp_mode_itu_pane

0xd9d9,	// (0x00050a40) main_comp_mode_rocker_pane

0xd9e5,	// (0x00050a4c) cell_cmode_rocker_pane_ParamLimits

0xd9e5,	// (0x00050a4c) cell_cmode_rocker_pane

0xd9f9,	// (0x00050a60) cell_cmode_itu_pane_ParamLimits

0xd9f9,	// (0x00050a60) cell_cmode_itu_pane

0x07eb,	// (0x00043852) bg_button_pane_cp06_ParamLimits

0x07eb,	// (0x00043852) bg_button_pane_cp06

0xb9e4,	// (0x0004ea4b) cell_cmode_rocker_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) cell_cmode_rocker_pane_g1

0xcf47,	// (0x0004ffae) cell_cmode_rocker_pane_g2_ParamLimits

0xcf47,	// (0x0004ffae) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00052e2b) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00052e2b) cell_cmode_rocker_pane_g

0xda5e,	// (0x00050ac5) bg_button_pane_cp07

0xda10,	// (0x00050a77) cell_cmode_itu_pane_g1

0xda19,	// (0x00050a80) cell_cmode_itu_pane_t1

0xda27,	// (0x00050a8e) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00052e30) cell_cmode_itu_pane_t

0xd175,	// (0x000501dc) aid_touch_ctrl_left

0xd17d,	// (0x000501e4) aid_touch_ctrl_right

0xda5e,	// (0x00050ac5) compa_mode_pane

0xe096,	// (0x000510fd) aid_cmod_rocker_key_size_cp

0xe0a0,	// (0x00051107) aid_cmode_itu_key_size_cp

0xe0aa,	// (0x00051111) compa_mode_pane_g1

0xe0b2,	// (0x00051119) compa_mode_pane_g2

0xe0ba,	// (0x00051121) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00052e35) compa_mode_pane_g

0xe0c2,	// (0x00051129) main_comp_mode_itu_pane_cp

0xe0ca,	// (0x00051131) main_comp_mode_rocker_pane_cp

0xe0d2,	// (0x00051139) cell_cmode_itu_pane_cp_ParamLimits

0xe0d2,	// (0x00051139) cell_cmode_itu_pane_cp

0xe0e7,	// (0x0005114e) cell_cmode_rocker_pane_cp_ParamLimits

0xe0e7,	// (0x0005114e) cell_cmode_rocker_pane_cp

0x07eb,	// (0x00043852) bg_button_pane_cp06_cp_ParamLimits

0x07eb,	// (0x00043852) bg_button_pane_cp06_cp

0xb9e4,	// (0x0004ea4b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb9e4,	// (0x0004ea4b) cell_cmode_rocker_pane_g1_cp

0xb769,	// (0x0004e7d0) cell_cmode_rocker_pane_g2_cp

0xda5e,	// (0x00050ac5) bg_button_pane_cp07_cp

0xe0f9,	// (0x00051160) cell_cmode_itu_pane_g1_cp

0xe102,	// (0x00051169) cell_cmode_itu_pane_t1_cp

0xe102,	// (0x00051169) cell_cmode_itu_pane_t2_cp

0xa662,	// (0x0004d6c9) settings_code_pane_cp2

0xdacc,	// (0x00050b33) bg_popup_window_pane_cp3_ParamLimits

0xddfb,	// (0x00050e62) heading_pane_cp3_ParamLimits

0xde07,	// (0x00050e6e) listscroll_popup_graphic_pane_ParamLimits

0x76b1,	// (0x0004a718) fep_hwr_aid_pane_ParamLimits

0x7b7f,	// (0x0004abe6) aid_touch_sctrl_top_ParamLimits

0x7b8c,	// (0x0004abf3) sctrl_sk_top_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00052d6b) sctrl_sk_top_pane_g_ParamLimits

0x7b99,	// (0x0004ac00) sctrl_sk_top_pane_t1_ParamLimits

0x7b7f,	// (0x0004abe6) aid_touch_sctrl_bottom_ParamLimits

0x7b99,	// (0x0004ac00) sctrl_sk_bottom_pane_t1_ParamLimits

0xd0bb,	// (0x00050122) aid_area_touch_clock

0x7d82,	// (0x0004ade9) aid_vkb2_area_top_pane_cell_ParamLimits

0x7d82,	// (0x0004ade9) aid_vkb2_area_top_pane_cell

0x7ecd,	// (0x0004af34) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7ecd,	// (0x0004af34) aid_vkb2_area_bottom_pane_cell

0xd620,	// (0x00050687) popup_char_count_window

0xe110,	// (0x00051177) popup_char_count_window_g1

0xe119,	// (0x00051180) popup_char_count_window_g2

0xe122,	// (0x00051189) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00052e3c) popup_char_count_window_g

0xe12b,	// (0x00051192) popup_char_count_window_t1

0x7c3c,	// (0x0004aca3) popup_fep_char_preview_window_ParamLimits

0x7c3c,	// (0x0004aca3) popup_fep_char_preview_window

0x7da0,	// (0x0004ae07) vkb2_top_candi_pane_ParamLimits

0x7da0,	// (0x0004ae07) vkb2_top_candi_pane

0xe139,	// (0x000511a0) cell_vkb2_top_candi_pane_ParamLimits

0xe139,	// (0x000511a0) cell_vkb2_top_candi_pane

0x9775,	// (0x0004c7dc) bg_popup_fep_char_preview_window_ParamLimits

0x9775,	// (0x0004c7dc) bg_popup_fep_char_preview_window

0x81b8,	// (0x0004b21f) popup_fep_char_preview_window_t1_ParamLimits

0x81b8,	// (0x0004b21f) popup_fep_char_preview_window_t1

0xe18a,	// (0x000511f1) bg_popup_fep_char_preview_window_g1

0xe192,	// (0x000511f9) bg_popup_fep_char_preview_window_g2

0xe19a,	// (0x00051201) bg_popup_fep_char_preview_window_g3

0xe1a2,	// (0x00051209) bg_popup_fep_char_preview_window_g4

0xe1aa,	// (0x00051211) bg_popup_fep_char_preview_window_g5

0x81f2,	// (0x0004b259) bg_popup_fep_char_preview_window_g6

0xe1b2,	// (0x00051219) bg_popup_fep_char_preview_window_g7

0xe1ba,	// (0x00051221) bg_popup_fep_char_preview_window_g8

0xe1c2,	// (0x00051229) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00052e43) bg_popup_fep_char_preview_window_g

0xb9e4,	// (0x0004ea4b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) cell_vkb2_top_candi_pane_g1

0xbd25,	// (0x0004ed8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbd25,	// (0x0004ed8c) cell_vkb2_top_candi_pane_g2

0xbd46,	// (0x0004edad) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbd46,	// (0x0004edad) cell_vkb2_top_candi_pane_g3

0x81fa,	// (0x0004b261) cell_vkb2_top_candi_pane_g4_ParamLimits

0x81fa,	// (0x0004b261) cell_vkb2_top_candi_pane_g4

0xda35,	// (0x00050a9c) cell_vkb2_top_candi_pane_g5_ParamLimits

0xda35,	// (0x00050a9c) cell_vkb2_top_candi_pane_g5

0xcf47,	// (0x0004ffae) cell_vkb2_top_candi_pane_g6_ParamLimits

0xcf47,	// (0x0004ffae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00052e56) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00052e56) cell_vkb2_top_candi_pane_g

0x821b,	// (0x0004b282) cell_vkb2_top_candi_pane_t1

0x743b,	// (0x0004a4a2) aid_size_touch_slider_mark_ParamLimits

0x743b,	// (0x0004a4a2) aid_size_touch_slider_mark

0xd763,	// (0x000507ca) grid_graphic2_catg_pane_ParamLimits

0xd763,	// (0x000507ca) grid_graphic2_catg_pane

0xd801,	// (0x00050868) popup_grid_graphic2_window_t1_ParamLimits

0xd801,	// (0x00050868) popup_grid_graphic2_window_t1

0xd813,	// (0x0005087a) popup_grid_graphic2_window_t2_ParamLimits

0xd813,	// (0x0005087a) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x00052e11) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x00052e11) popup_grid_graphic2_window_t

0xdc0d,	// (0x00050c74) bg_button_pane_cp05_ParamLimits

0xd987,	// (0x000509ee) cell_graphic2_control_pane_g1_ParamLimits

0xe1ca,	// (0x00051231) cell_graphic2_catg_pane_ParamLimits

0xe1ca,	// (0x00051231) cell_graphic2_catg_pane

0xda5e,	// (0x00050ac5) bg_button_pane_cp12

0xe1dc,	// (0x00051243) cell_graphic2_catg_pane_g1

0xd087,	// (0x000500ee) cell_tb_ext_pane_t1_ParamLimits

0x7fea,	// (0x0004b051) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7fea,	// (0x0004b051) vkb2_top_cell_right_narrow_pane

0x8002,	// (0x0004b069) vkb2_top_cell_right_wide_pane_ParamLimits

0x8002,	// (0x0004b069) vkb2_top_cell_right_wide_pane

0xf540,	// (0x000525a7) bg_vkb2_func_pane_ParamLimits

0xf540,	// (0x000525a7) bg_vkb2_func_pane

0x8073,	// (0x0004b0da) vkb2_top_cell_left_pane_g1_ParamLimits

0xf540,	// (0x000525a7) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf540,	// (0x000525a7) bg_vkb2_fuc_pane_cp03

0x80d1,	// (0x0004b138) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x912d,	// (0x0004c194) bg_vkb2_func_pane_g1

0x9135,	// (0x0004c19c) bg_vkb2_func_pane_g2

0x9145,	// (0x0004c1ac) bg_vkb2_func_pane_g3

0x913d,	// (0x0004c1a4) bg_vkb2_func_pane_g4

0x914d,	// (0x0004c1b4) bg_vkb2_func_pane_g5

0x9155,	// (0x0004c1bc) bg_vkb2_func_pane_g6

0x915d,	// (0x0004c1c4) bg_vkb2_func_pane_g7

0x9165,	// (0x0004c1cc) bg_vkb2_func_pane_g8

0x9125,	// (0x0004c18c) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00052e63) bg_vkb2_func_pane_g

0xf540,	// (0x000525a7) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf540,	// (0x000525a7) bg_vkb2_fuc_pane_cp01

0x8073,	// (0x0004b0da) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8073,	// (0x0004b0da) vkb2_top_cell_right_wide_pane_g1

0xf540,	// (0x000525a7) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf540,	// (0x000525a7) bg_vkb2_fuc_pane_cp02

0x80d1,	// (0x0004b138) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x80d1,	// (0x0004b138) vkb2_top_cell_right_narrow_pane_g1

0xcca8,	// (0x0004fd0f) aid_touch_area_decrease_ParamLimits

0xcca8,	// (0x0004fd0f) aid_touch_area_decrease

0xcccc,	// (0x0004fd33) aid_touch_area_increase_ParamLimits

0xcccc,	// (0x0004fd33) aid_touch_area_increase

0xccd8,	// (0x0004fd3f) aid_touch_area_mute_ParamLimits

0xccd8,	// (0x0004fd3f) aid_touch_area_mute

0xccfc,	// (0x0004fd63) aid_touch_area_slider_ParamLimits

0xccfc,	// (0x0004fd63) aid_touch_area_slider

0xcdec,	// (0x0004fe53) popup_slider_window_g4_ParamLimits

0xcdec,	// (0x0004fe53) popup_slider_window_g4

0xcdf8,	// (0x0004fe5f) popup_slider_window_g5_ParamLimits

0xcdf8,	// (0x0004fe5f) popup_slider_window_g5

0xce1a,	// (0x0004fe81) popup_slider_window_g6_ParamLimits

0xce1a,	// (0x0004fe81) popup_slider_window_g6

0xce5a,	// (0x0004fec1) popup_slider_window_t2_ParamLimits

0xce5a,	// (0x0004fec1) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00052d5f) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00052d5f) popup_slider_window_t

0xce72,	// (0x0004fed9) slider_pane_ParamLimits

0xce72,	// (0x0004fed9) slider_pane

0xe1e5,	// (0x0005124c) slider_pane_g1_ParamLimits

0xe1e5,	// (0x0005124c) slider_pane_g1

0xe1f9,	// (0x00051260) slider_pane_g2_ParamLimits

0xe1f9,	// (0x00051260) slider_pane_g2

0xe20f,	// (0x00051276) slider_pane_g3_ParamLimits

0xe20f,	// (0x00051276) slider_pane_g3

0x0003,

0xfe0f,	// (0x00052e76) slider_pane_g_ParamLimits

0xfe0f,	// (0x00052e76) slider_pane_g

0x8b1e,	// (0x0004bb85) popup_tb_float_extension_window_ParamLimits

0x8b1e,	// (0x0004bb85) popup_tb_float_extension_window

0xe23b,	// (0x000512a2) aid_size_cell_tb_float_ext

0xda5e,	// (0x00050ac5) bg_popup_sub_window_cp28

0xe247,	// (0x000512ae) grid_tb_float_ext_pane

0xe253,	// (0x000512ba) cell_tb_float_ext_pane_ParamLimits

0xe253,	// (0x000512ba) cell_tb_float_ext_pane

0xe26f,	// (0x000512d6) cell_tb_float_ext_pane_g1

0xe278,	// (0x000512df) grid_highlight_pane_cp12

0x77ea,	// (0x0004a851) cell_last_hwr_side_pane_ParamLimits

0x77ea,	// (0x0004a851) cell_last_hwr_side_pane

0xb769,	// (0x0004e7d0) cell_last_hwr_side_pane_g1

0xe281,	// (0x000512e8) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00052e7f) cell_last_hwr_side_pane_g

0x7f99,	// (0x0004b000) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7f99,	// (0x0004b000) vkb2_area_bottom_space_btn_pane

0xb9e4,	// (0x0004ea4b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd6d5,	// (0x0005073c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x821b,	// (0x0004b282) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8239,	// (0x0004b2a0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8239,	// (0x0004b2a0) vkb2_area_bottom_space_btn_pane_g1

0x8273,	// (0x0004b2da) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8273,	// (0x0004b2da) vkb2_area_bottom_space_btn_pane_g2

0x82a9,	// (0x0004b310) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x82a9,	// (0x0004b310) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x00052e84) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x00052e84) vkb2_area_bottom_space_btn_pane_g

0x775a,	// (0x0004a7c1) cel_fep_hwr_func_pane_ParamLimits

0x775a,	// (0x0004a7c1) cel_fep_hwr_func_pane

0x7796,	// (0x0004a7fd) cell_hwr_side_button_pane_ParamLimits

0x7796,	// (0x0004a7fd) cell_hwr_side_button_pane

0xd0bb,	// (0x00050122) aid_area_touch_clock_ParamLimits

0xdc0d,	// (0x00050c74) bg_uniindi_top_pane_ParamLimits

0xd0cf,	// (0x00050136) uniindi_top_pane_g1_ParamLimits

0xd0e5,	// (0x0005014c) uniindi_top_pane_g2_ParamLimits

0xd0f1,	// (0x00050158) uniindi_top_pane_g3_ParamLimits

0xd102,	// (0x00050169) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00052d97) uniindi_top_pane_g_ParamLimits

0xd10f,	// (0x00050176) uniindi_top_pane_t1_ParamLimits

0xdc0d,	// (0x00050c74) bg_vkb2_func_pane_cp01_ParamLimits

0xdc0d,	// (0x00050c74) bg_vkb2_func_pane_cp01

0xe28a,	// (0x000512f1) cel_fep_hwr_func_pane_g1_ParamLimits

0xe28a,	// (0x000512f1) cel_fep_hwr_func_pane_g1

0xdc0d,	// (0x00050c74) bg_vkb2_func_pane_cp02_ParamLimits

0xdc0d,	// (0x00050c74) bg_vkb2_func_pane_cp02

0xe28a,	// (0x000512f1) cell_hwr_side_button_pane_g1_ParamLimits

0xe28a,	// (0x000512f1) cell_hwr_side_button_pane_g1

0x8fa6,	// (0x0004c00d) status_pane_g4_ParamLimits

0x8fa6,	// (0x0004c00d) status_pane_g4

0x8fc0,	// (0x0004c027) status_pane_t1

0xb508,	// (0x0004e56f) form2_midp_gauge_slider_cont_pane

0xb510,	// (0x0004e577) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb522,	// (0x0004e589) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb534,	// (0x0004e59b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00052b63) form2_midp_gauge_slider_pane_t_ParamLimits

0xb546,	// (0x0004e5ad) form2_midp_slider_pane_ParamLimits

0x7bfc,	// (0x0004ac63) aid_size_cell_func_vkb2_ParamLimits

0x7bfc,	// (0x0004ac63) aid_size_cell_func_vkb2

0xe227,	// (0x0005128e) slider_pane_g4_ParamLimits

0xe227,	// (0x0005128e) slider_pane_g4

0x82f3,	// (0x0004b35a) form2_midp_gauge_slider_pane_t2_cp01

0x8301,	// (0x0004b368) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8301,	// (0x0004b368) form2_midp_gauge_slider_pane_t3_cp01

0x831e,	// (0x0004b385) form2_midp_slider_pane_cp01

0xda5e,	// (0x00050ac5) navi_smil_pane

0xe2c3,	// (0x0005132a) navi_smil_pane_g1

0xe2cb,	// (0x00051332) navi_smil_pane_t1

0xe298,	// (0x000512ff) form2_midp_slider_pane_g1

0xe2a1,	// (0x00051308) form2_midp_slider_pane_g2

0xe2a9,	// (0x00051310) form2_midp_slider_pane_g3

0xe298,	// (0x000512ff) form2_midp_slider_pane_g4

0xe2b1,	// (0x00051318) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00052e8d) form2_midp_slider_pane_g

0x82e3,	// (0x0004b34a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x82e3,	// (0x0004b34a) vkb2_area_bottom_space_btn_pane_g4

0x8dbd,	// (0x0004be24) lc0_navi_pane_ParamLimits

0x8dbd,	// (0x0004be24) lc0_navi_pane

0x8e39,	// (0x0004bea0) lc0_stat_indi_pane_ParamLimits

0x8e39,	// (0x0004bea0) lc0_stat_indi_pane

0x8e50,	// (0x0004beb7) ls0_title_pane_ParamLimits

0x8e50,	// (0x0004beb7) ls0_title_pane

0x07eb,	// (0x00043852) bg_popup_sub_pane_cp14_ParamLimits

0xd0a2,	// (0x00050109) list_uniindi_pane_ParamLimits

0xd0ae,	// (0x00050115) uniindi_top_pane_ParamLimits

0xd14d,	// (0x000501b4) list_single_uniindi_pane_g1_ParamLimits

0xd160,	// (0x000501c7) list_single_uniindi_pane_t1_ParamLimits

0x8327,	// (0x0004b38e) lc0_stat_clock_pane_ParamLimits

0x8327,	// (0x0004b38e) lc0_stat_clock_pane

0xe2d9,	// (0x00051340) lc0_stat_indi_pane_g1_ParamLimits

0xe2d9,	// (0x00051340) lc0_stat_indi_pane_g1

0xe2e6,	// (0x0005134d) lc0_stat_indi_pane_g2_ParamLimits

0xe2e6,	// (0x0005134d) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x00052e98) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x00052e98) lc0_stat_indi_pane_g

0x8334,	// (0x0004b39b) lc0_uni_indicator_pane_ParamLimits

0x8334,	// (0x0004b39b) lc0_uni_indicator_pane

0xe2f3,	// (0x0005135a) ls0_title_pane_g1_ParamLimits

0xe2f3,	// (0x0005135a) ls0_title_pane_g1

0xe307,	// (0x0005136e) ls0_title_pane_t1_ParamLimits

0xe307,	// (0x0005136e) ls0_title_pane_t1

0x8341,	// (0x0004b3a8) lc0_uni_indicator_pane_g1_ParamLimits

0x8341,	// (0x0004b3a8) lc0_uni_indicator_pane_g1

0xe33d,	// (0x000513a4) lc0_stat_clock_pane_t1

0xda5e,	// (0x00050ac5) main_ai5_pane

0xe34b,	// (0x000513b2) ai5_sk_pane_ParamLimits

0xe34b,	// (0x000513b2) ai5_sk_pane

0xe358,	// (0x000513bf) cell_ai5_widget_pane_ParamLimits

0xe358,	// (0x000513bf) cell_ai5_widget_pane

0xe8f4,	// (0x0005195b) aid_size_cell_widget_grid

0xe902,	// (0x00051969) bg_ai5_widget_pane_ParamLimits

0xe902,	// (0x00051969) bg_ai5_widget_pane

0xe976,	// (0x000519dd) cell_ai5_widget_pane_g2

0xe986,	// (0x000519ed) cell_ai5_widget_pane_g3

0xe99d,	// (0x00051a04) cell_ai5_widget_pane_g4

0xe9a9,	// (0x00051a10) cell_ai5_widget_pane_g5

0xe9b5,	// (0x00051a1c) cell_ai5_widget_pane_g6

0xe9c1,	// (0x00051a28) cell_ai5_widget_pane_g7

0xea09,	// (0x00051a70) cell_ai5_widget_pane_t1_ParamLimits

0xea09,	// (0x00051a70) cell_ai5_widget_pane_t1

0xea26,	// (0x00051a8d) cell_ai5_widget_pane_t2_ParamLimits

0xea26,	// (0x00051a8d) cell_ai5_widget_pane_t2

0xea3e,	// (0x00051aa5) cell_ai5_widget_pane_t3_ParamLimits

0xea3e,	// (0x00051aa5) cell_ai5_widget_pane_t3

0xea56,	// (0x00051abd) cell_ai5_widget_pane_t4_ParamLimits

0xea56,	// (0x00051abd) cell_ai5_widget_pane_t4

0xea73,	// (0x00051ada) cell_ai5_widget_pane_t5_ParamLimits

0xea73,	// (0x00051ada) cell_ai5_widget_pane_t5

0xea92,	// (0x00051af9) cell_ai5_widget_pane_t6_ParamLimits

0xea92,	// (0x00051af9) cell_ai5_widget_pane_t6

0xeaa4,	// (0x00051b0b) cell_ai5_widget_pane_t7_ParamLimits

0xeaa4,	// (0x00051b0b) cell_ai5_widget_pane_t7

0xeabd,	// (0x00051b24) cell_ai5_widget_pane_t8_ParamLimits

0xeabd,	// (0x00051b24) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00052eb2) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00052eb2) cell_ai5_widget_pane_t

0xeb11,	// (0x00051b78) grid_ai5_widget_pane

0x07eb,	// (0x00043852) highlight_cell_ai5_widget_pane_ParamLimits

0x07eb,	// (0x00043852) highlight_cell_ai5_widget_pane

0xeb25,	// (0x00051b8c) ai5_sk_left_pane

0xeb2f,	// (0x00051b96) ai5_sk_middle_pane

0xeb39,	// (0x00051ba0) ai5_sk_right_pane

0xeb43,	// (0x00051baa) bg_ai5_widget_pane_g1_ParamLimits

0xeb43,	// (0x00051baa) bg_ai5_widget_pane_g1

0xeb4f,	// (0x00051bb6) bg_ai5_widget_pane_g2_ParamLimits

0xeb4f,	// (0x00051bb6) bg_ai5_widget_pane_g2

0xeb5b,	// (0x00051bc2) bg_ai5_widget_pane_g3_ParamLimits

0xeb5b,	// (0x00051bc2) bg_ai5_widget_pane_g3

0xeb67,	// (0x00051bce) bg_ai5_widget_pane_g4_ParamLimits

0xeb67,	// (0x00051bce) bg_ai5_widget_pane_g4

0xeb73,	// (0x00051bda) bg_ai5_widget_pane_g5_ParamLimits

0xeb73,	// (0x00051bda) bg_ai5_widget_pane_g5

0xeb7f,	// (0x00051be6) bg_ai5_widget_pane_g6_ParamLimits

0xeb7f,	// (0x00051be6) bg_ai5_widget_pane_g6

0xeb8b,	// (0x00051bf2) bg_ai5_widget_pane_g7_ParamLimits

0xeb8b,	// (0x00051bf2) bg_ai5_widget_pane_g7

0xeb97,	// (0x00051bfe) bg_ai5_widget_pane_g8_ParamLimits

0xeb97,	// (0x00051bfe) bg_ai5_widget_pane_g8

0xeba3,	// (0x00051c0a) bg_ai5_widget_pane_g9_ParamLimits

0xeba3,	// (0x00051c0a) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x00052ec7) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00052ec7) bg_ai5_widget_pane_g

0xebd9,	// (0x00051c40) cell_shortcut_ai5_widget_pane_ParamLimits

0xebd9,	// (0x00051c40) cell_shortcut_ai5_widget_pane

0x41ab,	// (0x00047212) bg_cell_shortcut_ai5_widget_pane

0xebec,	// (0x00051c53) cell_grid_ai5_widget_pane_g1

0x41ab,	// (0x00047212) highlight_cell_shortcut_ai5_widget_pane

0x9135,	// (0x0004c19c) ai5_sk_left_pane_g1

0xebf5,	// (0x00051c5c) ai5_sk_left_pane_g2

0xebfd,	// (0x00051c64) ai5_sk_left_pane_g3

0xec05,	// (0x00051c6c) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00052eda) ai5_sk_left_pane_g

0xec0d,	// (0x00051c74) ai5_sk_left_pane_t1

0x912d,	// (0x0004c194) ai5_sk_right_pane_g1

0xec1b,	// (0x00051c82) ai5_sk_right_pane_g2

0xec23,	// (0x00051c8a) ai5_sk_right_pane_g3

0xec2b,	// (0x00051c92) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00052ee3) ai5_sk_right_pane_g

0xec33,	// (0x00051c9a) ai5_sk_right_pane_t1

0x912d,	// (0x0004c194) ai5_sk_middle_pane_g1

0x9135,	// (0x0004c19c) ai5_sk_middle_pane_g2

0x914d,	// (0x0004c1b4) ai5_sk_middle_pane_g3

0xec23,	// (0x00051c8a) ai5_sk_middle_pane_g4

0xebfd,	// (0x00051c64) ai5_sk_middle_pane_g5

0xec41,	// (0x00051ca8) ai5_sk_middle_pane_g6

0xec49,	// (0x00051cb0) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00052eec) ai5_sk_middle_pane_g

0x8c3f,	// (0x0004bca6) aid_touch_area_size_lc0_ParamLimits

0x8c3f,	// (0x0004bca6) aid_touch_area_size_lc0

0x78f9,	// (0x0004a960) cell_hwr_candidate_pane_t1_ParamLimits

0x8c5d,	// (0x0004bcc4) aid_touch_navi_pane

0x8f50,	// (0x0004bfb7) status_dt_navi_pane_ParamLimits

0x8f50,	// (0x0004bfb7) status_dt_navi_pane

0x8f5d,	// (0x0004bfc4) status_dt_sta_pane_ParamLimits

0x8f5d,	// (0x0004bfc4) status_dt_sta_pane

0xec51,	// (0x00051cb8) dt_sta_controll_pane

0xec5e,	// (0x00051cc5) dt_sta_indi_pane

0xec6f,	// (0x00051cd6) dt_sta_title_pane

0xdc0d,	// (0x00050c74) bg_dt_sta_indi_pane_ParamLimits

0xdc0d,	// (0x00050c74) bg_dt_sta_indi_pane

0xec82,	// (0x00051ce9) dt_sta_battery_pane

0xec8a,	// (0x00051cf1) dt_sta_indi_pane_g1

0xec93,	// (0x00051cfa) dt_sta_indi_pane_g2

0xec9c,	// (0x00051d03) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00052efb) dt_sta_indi_pane_g

0xeca5,	// (0x00051d0c) dt_sta_signal_pane

0x07eb,	// (0x00043852) bg_dt_sta_title_pane_ParamLimits

0x07eb,	// (0x00043852) bg_dt_sta_title_pane

0xecae,	// (0x00051d15) dt_sta_title_pane_g1

0xecb6,	// (0x00051d1d) dt_sta_title_pane_t1_ParamLimits

0xecb6,	// (0x00051d1d) dt_sta_title_pane_t1

0xda5e,	// (0x00050ac5) bg_dt_sta_control_pane

0xeccb,	// (0x00051d32) dt_sta_controll_pane_g1

0xecd4,	// (0x00051d3b) bg_dt_sta_title_pane_g1

0xecdd,	// (0x00051d44) bg_dt_sta_title_pane_g2

0xece6,	// (0x00051d4d) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00052f02) bg_dt_sta_title_pane_g

0xb769,	// (0x0004e7d0) bg_dt_sta_indi_pane_g1

0xecef,	// (0x00051d56) dt_sta_signal_pane_g1

0xecf7,	// (0x00051d5e) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00052f09) dt_sta_signal_pane_g

0xecff,	// (0x00051d66) dt_sta_battery_pane_g1

0xed08,	// (0x00051d6f) dt_sta_battery_pane_t1

0xb769,	// (0x0004e7d0) bg_dt_sta_control_pane_g1

0x0d4f,	// (0x00043db6) fep_china_uni_eep_pane

0x0d57,	// (0x00043dbe) fep_china_uni_entry_pane_ParamLimits

0x0d67,	// (0x00043dce) popup_fep_china_uni_window_g1_ParamLimits

0x0d77,	// (0x00043dde) popup_fep_china_uni_window_g2_ParamLimits

0x0d77,	// (0x00043dde) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00052789) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00052789) popup_fep_china_uni_window_g

0xed17,	// (0x00051d7e) fep_china_uni_eep_pane_g1

0xed1f,	// (0x00051d86) fep_china_uni_eep_pane_t1

0xe2ba,	// (0x00051321) aid_touch_area_size_smil_player

0x8db5,	// (0x0004be1c) lc0_clock_pane

0x8fb4,	// (0x0004c01b) status_pane_g5_ParamLimits

0x8fb4,	// (0x0004c01b) status_pane_g5

0x87a3,	// (0x0004b80a) popup_keymap_window

0x8f72,	// (0x0004bfd9) status_icon_pane

0xe986,	// (0x000519ed) cell_ai5_widget_pane_g3_ParamLimits

0xe99d,	// (0x00051a04) cell_ai5_widget_pane_g4_ParamLimits

0xe9a9,	// (0x00051a10) cell_ai5_widget_pane_g5_ParamLimits

0xe9cd,	// (0x00051a34) cell_ai5_widget_pane_g8_ParamLimits

0xe9cd,	// (0x00051a34) cell_ai5_widget_pane_g8

0xe9e1,	// (0x00051a48) cell_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x00051a48) cell_ai5_widget_pane_g9

0xe9f5,	// (0x00051a5c) cell_ai5_widget_pane_g10_ParamLimits

0xe9f5,	// (0x00051a5c) cell_ai5_widget_pane_g10

0xed2e,	// (0x00051d95) status_icon_pane_g1

0xda5e,	// (0x00050ac5) bg_popup_sub_pane_cp13

0xed36,	// (0x00051d9d) popup_keymap_window_t1

0x6e60,	// (0x00049ec7) control_pane_g6_ParamLimits

0x6e60,	// (0x00049ec7) control_pane_g6

0x6e6d,	// (0x00049ed4) control_pane_g7_ParamLimits

0x6e6d,	// (0x00049ed4) control_pane_g7

0x6e7a,	// (0x00049ee1) control_pane_g8_ParamLimits

0x6e7a,	// (0x00049ee1) control_pane_g8

0xec51,	// (0x00051cb8) dt_sta_controll_pane_ParamLimits

0xec5e,	// (0x00051cc5) dt_sta_indi_pane_ParamLimits

0xec6f,	// (0x00051cd6) dt_sta_title_pane_ParamLimits

0xe031,	// (0x00051098) aid_size_touch_scroll_bar_cale

0x5ee7,	// (0x00048f4e) popup_discreet_window_ParamLimits

0x5ee7,	// (0x00048f4e) popup_discreet_window

0x5f75,	// (0x00048fdc) popup_sk_window

0x9775,	// (0x0004c7dc) bg_popup_sub_pane_cp28_ParamLimits

0x9775,	// (0x0004c7dc) bg_popup_sub_pane_cp28

0xed44,	// (0x00051dab) popup_discreet_window_g1_ParamLimits

0xed44,	// (0x00051dab) popup_discreet_window_g1

0xed64,	// (0x00051dcb) popup_discreet_window_t1_ParamLimits

0xed64,	// (0x00051dcb) popup_discreet_window_t1

0xed82,	// (0x00051de9) popup_discreet_window_t2_ParamLimits

0xed82,	// (0x00051de9) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00052f0e) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00052f0e) popup_discreet_window_t

0x8354,	// (0x0004b3bb) popup_sk_window_g1

0x835e,	// (0x0004b3c5) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00052f15) popup_sk_window_g

0x8368,	// (0x0004b3cf) popup_sk_window_t1

0x8378,	// (0x0004b3df) popup_sk_window_t1_copy1

0xe976,	// (0x000519dd) cell_ai5_widget_pane_g2_ParamLimits

0xeacf,	// (0x00051b36) cell_ai5_widget_pane_t9_ParamLimits

0xeacf,	// (0x00051b36) cell_ai5_widget_pane_t9

0xda5e,	// (0x00050ac5) main_fep_fshwr2_pane

0x8386,	// (0x0004b3ed) aid_fshwr2_btn_pane

0x8392,	// (0x0004b3f9) aid_fshwr2_syb_pane

0x839e,	// (0x0004b405) aid_fshwr2_txt_pane

0x83aa,	// (0x0004b411) fshwr2_func_candi_pane

0x83bd,	// (0x0004b424) fshwr2_hwr_syb_pane

0x83cb,	// (0x0004b432) fshwr2_icf_pane

0xda5e,	// (0x00050ac5) fshwr2_icf_bg_pane

0x83fa,	// (0x0004b461) fshwr2_icf_pane_t1_ParamLimits

0x83fa,	// (0x0004b461) fshwr2_icf_pane_t1

0x0ccd,	// (0x00043d34) fshwr2_func_candi_pane_g1

0xedd4,	// (0x00051e3b) fshwr2_func_candi_row_pane_ParamLimits

0xedd4,	// (0x00051e3b) fshwr2_func_candi_row_pane

0x8412,	// (0x0004b479) cell_fshwr2_syb_pane_ParamLimits

0x8412,	// (0x0004b479) cell_fshwr2_syb_pane

0xb9e4,	// (0x0004ea4b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) fshwr2_hwr_syb_pane_g1

0xda5e,	// (0x00050ac5) bg_popup_call_pane_cp01

0x8428,	// (0x0004b48f) fshwr2_func_candi_cell_pane_ParamLimits

0x8428,	// (0x0004b48f) fshwr2_func_candi_cell_pane

0xede4,	// (0x00051e4b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xede4,	// (0x00051e4b) fshwr2_func_candi_cell_bg_pane

0x845c,	// (0x0004b4c3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x845c,	// (0x0004b4c3) fshwr2_func_candi_cell_pane_g1

0x847c,	// (0x0004b4e3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x847c,	// (0x0004b4e3) fshwr2_func_candi_cell_pane_t1

0xda5e,	// (0x00050ac5) bg_button_pane_cp08

0xedf0,	// (0x00051e57) cell_fshwr2_syb_bg_pane

0x848f,	// (0x0004b4f6) cell_fshwr2_syb_bg_pane_g1

0x8497,	// (0x0004b4fe) cell_fshwr2_syb_bg_pane_t1

0x07eb,	// (0x00043852) main_tmo_pane

0xa299,	// (0x0004d300) uni_indicator_pane_g1_ParamLimits

0xa2af,	// (0x0004d316) uni_indicator_pane_g2_ParamLimits

0xa2c5,	// (0x0004d32c) uni_indicator_pane_g3_ParamLimits

0xa2da,	// (0x0004d341) uni_indicator_pane_g4_ParamLimits

0xa2da,	// (0x0004d341) uni_indicator_pane_g4

0xa2ee,	// (0x0004d355) uni_indicator_pane_g5_ParamLimits

0xa2ee,	// (0x0004d355) uni_indicator_pane_g5

0xa2ee,	// (0x0004d355) uni_indicator_pane_g6_ParamLimits

0xa2ee,	// (0x0004d355) uni_indicator_pane_g6

0xf926,	// (0x0005298d) uni_indicator_pane_g_ParamLimits

0xcc78,	// (0x0004fcdf) popup_tmo_note_window_ParamLimits

0xcc78,	// (0x0004fcdf) popup_tmo_note_window

0x07eb,	// (0x00043852) fshwr2_bg_pane

0x846d,	// (0x0004b4d4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x846d,	// (0x0004b4d4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00052f1a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00052f1a) fshwr2_func_candi_cell_pane_g

0xb769,	// (0x0004e7d0) bg_popup_window_pane_cp01

0x84a6,	// (0x0004b50d) bg_popup_window_pane_g1_cp01

0xedf8,	// (0x00051e5f) bg_popup_window_pane_cp22_ParamLimits

0xedf8,	// (0x00051e5f) bg_popup_window_pane_cp22

0xee06,	// (0x00051e6d) listscroll_tmo_link_pane_ParamLimits

0xee06,	// (0x00051e6d) listscroll_tmo_link_pane

0xee46,	// (0x00051ead) popup_tmo_note_window_g1_ParamLimits

0xee46,	// (0x00051ead) popup_tmo_note_window_g1

0xee53,	// (0x00051eba) tmo_note_info_pane_ParamLimits

0xee53,	// (0x00051eba) tmo_note_info_pane

0xee6d,	// (0x00051ed4) list_tmo_note_info_pane_g1_ParamLimits

0xee6d,	// (0x00051ed4) list_tmo_note_info_pane_g1

0xee84,	// (0x00051eeb) list_tmo_note_info_pane_g2_ParamLimits

0xee84,	// (0x00051eeb) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00052f1f) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00052f1f) list_tmo_note_info_pane_g

0xeea0,	// (0x00051f07) list_tmo_note_info_text_pane_ParamLimits

0xeea0,	// (0x00051f07) list_tmo_note_info_text_pane

0xef25,	// (0x00051f8c) list_tmo_link_pane

0xef32,	// (0x00051f99) scroll_pane_cp20

0xef3f,	// (0x00051fa6) list_single_tmo_link_pane_ParamLimits

0xef3f,	// (0x00051fa6) list_single_tmo_link_pane

0xef4f,	// (0x00051fb6) list_single_tmo_link_pane_t1

0xef5d,	// (0x00051fc4) list_tmo_note_info_text_pane_t1_ParamLimits

0xef5d,	// (0x00051fc4) list_tmo_note_info_text_pane_t1

0x64b1,	// (0x00049518) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64b1,	// (0x00049518) aid_size_touch_scroll_bar_cp01

0x53a7,	// (0x0004840e) aid_size_touch_slider_marker

0x5f5d,	// (0x00048fc4) popup_settings_window_ParamLimits

0x5f5d,	// (0x00048fc4) popup_settings_window

0x5520,	// (0x00048587) popup_candi_list_indi_window

0x8c5d,	// (0x0004bcc4) aid_touch_navi_pane_ParamLimits

0x7b53,	// (0x0004abba) rs_clock_indi_pane

0x7b5c,	// (0x0004abc3) sctrl_sk_bottom_pane_ParamLimits

0x7b6d,	// (0x0004abd4) sctrl_sk_top_pane_ParamLimits

0x7c56,	// (0x0004acbd) popup_fep_tooltip_window

0xe8f4,	// (0x0005195b) aid_size_cell_widget_grid_ParamLimits

0xe961,	// (0x000519c8) cell_ai5_widget_pane_g1_ParamLimits

0xe961,	// (0x000519c8) cell_ai5_widget_pane_g1

0xe9b5,	// (0x00051a1c) cell_ai5_widget_pane_g6_ParamLimits

0xe9c1,	// (0x00051a28) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00052e9d) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00052e9d) cell_ai5_widget_pane_g

0xeaf3,	// (0x00051b5a) cell_ai5_widget_pane_t10_ParamLimits

0xeaf3,	// (0x00051b5a) cell_ai5_widget_pane_t10

0xeb11,	// (0x00051b78) grid_ai5_widget_pane_ParamLimits

0xebaf,	// (0x00051c16) cell_contacts_ai5_widget_pane_ParamLimits

0xebaf,	// (0x00051c16) cell_contacts_ai5_widget_pane

0xed97,	// (0x00051dfe) popup_discreet_window_t3_ParamLimits

0xed97,	// (0x00051dfe) popup_discreet_window_t3

0x83e2,	// (0x0004b449) popup_fshwr2_char_preview_window_ParamLimits

0x83e2,	// (0x0004b449) popup_fshwr2_char_preview_window

0xeebe,	// (0x00051f25) tmo_note_info_pane_t1

0xeed3,	// (0x00051f3a) tmo_note_info_pane_t2

0xeeec,	// (0x00051f53) tmo_note_info_pane_t3

0xef01,	// (0x00051f68) tmo_note_info_pane_t4

0xef13,	// (0x00051f7a) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00052f24) tmo_note_info_pane_t

0xef25,	// (0x00051f8c) list_tmo_link_pane_ParamLimits

0xef32,	// (0x00051f99) scroll_pane_cp20_ParamLimits

0xda5e,	// (0x00050ac5) bg_popup_fep_char_preview_window_cp01

0xef76,	// (0x00051fdd) popup_fshwr2_char_preview_window_t1

0xef84,	// (0x00051feb) popup_candi_list_indi_window_g1

0xef8d,	// (0x00051ff4) bg_cell_contacts_ai5_widget_pane

0xef99,	// (0x00052000) cell_contacts_ai5_widget_pane_g1

0xefae,	// (0x00052015) cell_contacts_ai5_widget_pane_g2

0xefba,	// (0x00052021) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x00052f2f) cell_contacts_ai5_widget_pane_g

0xefc6,	// (0x0005202d) cell_contacts_ai5_widget_pane_t1

0x07eb,	// (0x00043852) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf03d,	// (0x000520a4) settings_container_pane

0x41ab,	// (0x00047212) listscroll_set_pane_copy1

0xae8a,	// (0x0004def1) scroll_pane_cp121_copy1

0xf049,	// (0x000520b0) set_content_pane_copy1

0xf051,	// (0x000520b8) aid_height_set_list_copy1_ParamLimits

0xf051,	// (0x000520b8) aid_height_set_list_copy1

0xa4ee,	// (0x0004d555) aid_size_parent_copy1_ParamLimits

0xa4ee,	// (0x0004d555) aid_size_parent_copy1

0xf05d,	// (0x000520c4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf05d,	// (0x000520c4) button_value_adjust_pane_cp6_copy1

0x6fe4,	// (0x0004a04b) list_highlight_pane_cp2_copy1_ParamLimits

0x6fe4,	// (0x0004a04b) list_highlight_pane_cp2_copy1

0xf071,	// (0x000520d8) list_set_pane_copy1_ParamLimits

0xf071,	// (0x000520d8) list_set_pane_copy1

0xefd8,	// (0x0005203f) main_pane_set_t1_copy1_ParamLimits

0xefd8,	// (0x0005203f) main_pane_set_t1_copy1

0xf012,	// (0x00052079) main_pane_set_t2_copy1_ParamLimits

0xf012,	// (0x00052079) main_pane_set_t2_copy1

0xf138,	// (0x0005219f) main_pane_set_t3_copy1

0xf146,	// (0x000521ad) main_pane_set_t4_copy1

0xf031,	// (0x00052098) set_content_pane_g1_copy1_ParamLimits

0xf031,	// (0x00052098) set_content_pane_g1_copy1

0xf154,	// (0x000521bb) setting_code_pane_copy1

0xf15c,	// (0x000521c3) setting_slider_graphic_pane_copy1

0xf15c,	// (0x000521c3) setting_slider_pane_copy1

0xf15c,	// (0x000521c3) setting_text_pane_copy1

0xf15c,	// (0x000521c3) setting_volume_pane_copy1

0xf154,	// (0x000521bb) settings_code_pane_cp2_copy1

0xf164,	// (0x000521cb) settings_code_pane_cp_copy1_ParamLimits

0xf164,	// (0x000521cb) settings_code_pane_cp_copy1

0x84af,	// (0x0004b516) volume_set_pane_copy1

0xf178,	// (0x000521df) volume_set_pane_g10_copy1

0xf184,	// (0x000521eb) volume_set_pane_g1_copy1

0xf18e,	// (0x000521f5) volume_set_pane_g2_copy1

0xf198,	// (0x000521ff) volume_set_pane_g3_copy1

0xf1a2,	// (0x00052209) volume_set_pane_g4_copy1

0xf1ac,	// (0x00052213) volume_set_pane_g5_copy1

0xf1b6,	// (0x0005221d) volume_set_pane_g6_copy1

0xf1c0,	// (0x00052227) volume_set_pane_g7_copy1

0xf1ca,	// (0x00052231) volume_set_pane_g8_copy1

0xf1d4,	// (0x0005223b) volume_set_pane_g9_copy1

0xdacc,	// (0x00050b33) bg_set_opt_pane_cp_copy1_ParamLimits

0xdacc,	// (0x00050b33) bg_set_opt_pane_cp_copy1

0x84bb,	// (0x0004b522) setting_slider_pane_t1_copy1_ParamLimits

0x84bb,	// (0x0004b522) setting_slider_pane_t1_copy1

0x84d9,	// (0x0004b540) setting_slider_pane_t2_copy1_ParamLimits

0x84d9,	// (0x0004b540) setting_slider_pane_t2_copy1

0x84f3,	// (0x0004b55a) setting_slider_pane_t3_copy1_ParamLimits

0x84f3,	// (0x0004b55a) setting_slider_pane_t3_copy1

0x850b,	// (0x0004b572) slider_set_pane_copy1_ParamLimits

0x850b,	// (0x0004b572) slider_set_pane_copy1

0x0846,	// (0x000438ad) set_opt_bg_pane_g1_copy2

0x084e,	// (0x000438b5) set_opt_bg_pane_g2_copy2

0xf1de,	// (0x00052245) set_opt_bg_pane_g3_copy2

0x085e,	// (0x000438c5) set_opt_bg_pane_g4_copy2

0x0866,	// (0x000438cd) set_opt_bg_pane_g5_copy2

0x086e,	// (0x000438d5) set_opt_bg_pane_g6_copy2

0xf1e8,	// (0x0005224f) set_opt_bg_pane_g7_copy2

0xf1f2,	// (0x00052259) set_opt_bg_pane_g8_copy2

0xf1fc,	// (0x00052263) set_opt_bg_pane_g9_copy2

0x8521,	// (0x0004b588) aid_size_touch_slider_mark_copy1_ParamLimits

0x8521,	// (0x0004b588) aid_size_touch_slider_mark_copy1

0xf206,	// (0x0005226d) slider_set_pane_g1_copy1

0x8535,	// (0x0004b59c) slider_set_pane_g2_copy1

0x745b,	// (0x0004a4c2) slider_set_pane_g3_copy1_ParamLimits

0x745b,	// (0x0004a4c2) slider_set_pane_g3_copy1

0x746f,	// (0x0004a4d6) slider_set_pane_g4_copy1_ParamLimits

0x746f,	// (0x0004a4d6) slider_set_pane_g4_copy1

0x7487,	// (0x0004a4ee) slider_set_pane_g5_copy1_ParamLimits

0x7487,	// (0x0004a4ee) slider_set_pane_g5_copy1

0x745b,	// (0x0004a4c2) slider_set_pane_g6_copy1_ParamLimits

0x745b,	// (0x0004a4c2) slider_set_pane_g6_copy1

0x853d,	// (0x0004b5a4) slider_set_pane_g7_copy1_ParamLimits

0x853d,	// (0x0004b5a4) slider_set_pane_g7_copy1

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp2_copy1

0xf20f,	// (0x00052276) setting_slider_graphic_pane_g1_copy1

0xf218,	// (0x0005227f) setting_slider_graphic_pane_t1_copy1

0xf228,	// (0x0005228f) setting_slider_graphic_pane_t2_copy1

0xf238,	// (0x0005229f) slider_set_pane_cp_copy1

0xf248,	// (0x000522af) input_focus_pane_cp1_copy1

0xf251,	// (0x000522b8) list_set_text_pane_copy1

0xf259,	// (0x000522c0) setting_text_pane_g1_copy1

0x4d96,	// (0x00047dfd) set_text_pane_t1_copy1

0xf248,	// (0x000522af) input_focus_pane_cp2_copy1

0xf259,	// (0x000522c0) setting_code_pane_g1_copy1

0xf262,	// (0x000522c9) setting_code_pane_t1_copy1

0xf270,	// (0x000522d7) list_set_graphic_pane_copy1

0xda72,	// (0x00050ad9) bg_set_opt_pane_cp4_copy1

0x6b1f,	// (0x00049b86) list_set_graphic_pane_g1_copy1_ParamLimits

0x6b1f,	// (0x00049b86) list_set_graphic_pane_g1_copy1

0xf282,	// (0x000522e9) list_set_graphic_pane_g2_copy1

0x6b37,	// (0x00049b9e) list_set_graphic_pane_t1_copy1_ParamLimits

0x6b37,	// (0x00049b9e) list_set_graphic_pane_t1_copy1

0xb769,	// (0x0004e7d0) rs_clock_indi_pane_g1

0xf28a,	// (0x000522f1) rs_clock_indi_pane_t1

0xf298,	// (0x000522ff) rs_indi_pane

0xf2a0,	// (0x00052307) rs_indi_pane_g1

0xf2a9,	// (0x00052310) rs_indi_pane_g2

0xf2b2,	// (0x00052319) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x00052f36) rs_indi_pane_g

0x41ab,	// (0x00047212) bg_popup_preview_window_pane_cp03

0xf2bb,	// (0x00052322) popup_fep_tooltip_window_t1

0xc420,	// (0x0004f487) popup_note2_window_g2_ParamLimits

0xc420,	// (0x0004f487) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00052ccf) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00052ccf) popup_note2_window_g

0xc928,	// (0x0004f98f) bg_popup_sub_pane_cp11_ParamLimits

0xc935,	// (0x0004f99c) cell_ai3_links_pane_g1_ParamLimits

0xc94c,	// (0x0004f9b3) cell_ai3_links_pane_t1

0x4d96,	// (0x00047dfd) set_text_pane_t1_copy1_ParamLimits

0x6bb6,	// (0x00049c1d) cell_graphic_popup_pane_cp2_ParamLimits

0x6bb6,	// (0x00049c1d) cell_graphic_popup_pane_cp2

0xf2c9,	// (0x00052330) cell_graphic_popup_pane_g1_cp2

0xde44,	// (0x00050eab) cell_graphic_popup_pane_g2_cp2

0xf2d1,	// (0x00052338) cell_graphic_popup_pane_g3_cp2

0xf2d9,	// (0x00052340) cell_graphic_popup_pane_t2_cp2

0xde55,	// (0x00050ebc) grid_highlight_pane_cp3_cp2

0x0aef,	// (0x00043b56) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x07eb,	// (0x00043852) main_tmo_pane_ParamLimits

0xcc6c,	// (0x0004fcd3) popup_tmo_big_image_note_window

0xe950,	// (0x000519b7) cell_ai5_widget_list_pane

0xe958,	// (0x000519bf) cell_ai5_widget_lrg_icon_pane

0xeebe,	// (0x00051f25) tmo_note_info_pane_t1_ParamLimits

0xeed3,	// (0x00051f3a) tmo_note_info_pane_t2_ParamLimits

0xeeec,	// (0x00051f53) tmo_note_info_pane_t3_ParamLimits

0xef01,	// (0x00051f68) tmo_note_info_pane_t4_ParamLimits

0xef13,	// (0x00051f7a) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00052f24) tmo_note_info_pane_t_ParamLimits

0xf03d,	// (0x000520a4) settings_container_pane_ParamLimits

0xf240,	// (0x000522a7) indicator_popup_pane_cp5

0xf240,	// (0x000522a7) indicator_popup_pane_cp6

0xf270,	// (0x000522d7) list_set_graphic_pane_copy1_ParamLimits

0xda5e,	// (0x00050ac5) bg_popup_window_pane_cp23

0xf2e7,	// (0x0005234e) popup_tmo_big_image_note_window_g1

0xf2f3,	// (0x0005235a) popup_tmo_big_image_note_window_t1

0xf303,	// (0x0005236a) popup_tmo_big_image_note_window_t2

0xf313,	// (0x0005237a) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x00052f3d) popup_tmo_big_image_note_window_t

0xb769,	// (0x0004e7d0) cell_ai5_widget_lrg_icon_pane_g1

0xf323,	// (0x0005238a) cell_ai5_widget_lrg_icon_pane_t1

0xf331,	// (0x00052398) cell_ai5_widget_list_row_pane_ParamLimits

0xf331,	// (0x00052398) cell_ai5_widget_list_row_pane

0xf349,	// (0x000523b0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x000523b0) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x000523bd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x000523bd) cell_ai5_widget_list_row_pane_t1

0xf381,	// (0x000523e8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf381,	// (0x000523e8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x00052f44) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x00052f44) cell_ai5_widget_list_row_pane_t

0xda5e,	// (0x00050ac5) main_fep_vtchi_ss_pane

0x856f,	// (0x0004b5d6) popup_fep_char_pre_window

0x8577,	// (0x0004b5de) popup_fep_ituss_window

0x8598,	// (0x0004b5ff) popup_fep_vkbss_window

0xf3a9,	// (0x00052410) grid_vkbss_keypad_pane_ParamLimits

0xf3a9,	// (0x00052410) grid_vkbss_keypad_pane

0xf3b9,	// (0x00052420) ituss_keypad_pane

0x85c6,	// (0x0004b62d) aid_vkbss_key_offset_ParamLimits

0x85c6,	// (0x0004b62d) aid_vkbss_key_offset

0x85d2,	// (0x0004b639) cell_vkbss_key_pane_ParamLimits

0x85d2,	// (0x0004b639) cell_vkbss_key_pane

0xf3c8,	// (0x0005242f) bg_cell_vkbss_key_g1_ParamLimits

0xf3c8,	// (0x0005242f) bg_cell_vkbss_key_g1

0xf3d4,	// (0x0005243b) cell_vkbss_key_3p_pane_ParamLimits

0xf3d4,	// (0x0005243b) cell_vkbss_key_3p_pane

0xf3ee,	// (0x00052455) cell_vkbss_key_g1_ParamLimits

0xf3ee,	// (0x00052455) cell_vkbss_key_g1

0xf408,	// (0x0005246f) cell_vkbss_key_t1_ParamLimits

0xf408,	// (0x0005246f) cell_vkbss_key_t1

0x85e8,	// (0x0004b64f) cell_ituss_key_pane_ParamLimits

0x85e8,	// (0x0004b64f) cell_ituss_key_pane

0xf433,	// (0x0005249a) bg_cell_ituss_key_g1_ParamLimits

0xf433,	// (0x0005249a) bg_cell_ituss_key_g1

0xf43f,	// (0x000524a6) cell_ituss_key_pane_g1_ParamLimits

0xf43f,	// (0x000524a6) cell_ituss_key_pane_g1

0x85f9,	// (0x0004b660) cell_ituss_key_pane_g2_ParamLimits

0x85f9,	// (0x0004b660) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x00052f4b) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x00052f4b) cell_ituss_key_pane_g

0x8625,	// (0x0004b68c) cell_ituss_key_t1_ParamLimits

0x8625,	// (0x0004b68c) cell_ituss_key_t1

0x865f,	// (0x0004b6c6) cell_ituss_key_t2_ParamLimits

0x865f,	// (0x0004b6c6) cell_ituss_key_t2

0x8690,	// (0x0004b6f7) cell_ituss_key_t3_ParamLimits

0x8690,	// (0x0004b6f7) cell_ituss_key_t3

0x865f,	// (0x0004b6c6) cell_ituss_key_t4_ParamLimits

0x865f,	// (0x0004b6c6) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x00052f52) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x00052f52) cell_ituss_key_t

0xf465,	// (0x000524cc) cell_vkbss_key_3p_pane_g1

0xf46d,	// (0x000524d4) cell_vkbss_key_3p_pane_g2

0xf475,	// (0x000524dc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00052f5d) cell_vkbss_key_3p_pane_g

0xda5e,	// (0x00050ac5) bg_popup_fep_char_preview_window_cp02

0x86d3,	// (0x0004b73a) popup_fep_char_pre_window_t1

0xe8ea,	// (0x00051951) main_ai5_sk_pane

0xef8d,	// (0x00051ff4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef99,	// (0x00052000) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xefae,	// (0x00052015) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefba,	// (0x00052021) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x00052f2f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xefc6,	// (0x0005202d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x07eb,	// (0x00043852) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf47d,	// (0x000524e4) main_ai5_sk_pane_g1

0x95ad,	// (0x0004c614) popup_query_code_window_g1

0x858d,	// (0x0004b5f4) popup_fep_vkb_icf_pane

0x85a3,	// (0x0004b60a) popup_fep_vtchi_icf_pane

0xf486,	// (0x000524ed) bg_icf_pane

0xf492,	// (0x000524f9) list_vkb_icf_pane

0xf49e,	// (0x00052505) bg_icf_pane_cp01

0xf4aa,	// (0x00052511) vtchi_icf_list_pane

0xf4bb,	// (0x00052522) list_vkb_icf_pane_t1_ParamLimits

0xf4bb,	// (0x00052522) list_vkb_icf_pane_t1

0xf4d1,	// (0x00052538) vtchi_icf_list_pane_t1_ParamLimits

0xf4d1,	// (0x00052538) vtchi_icf_list_pane_t1

0x8577,	// (0x0004b5de) popup_fep_ituss_window_ParamLimits

0x85a3,	// (0x0004b60a) popup_fep_vtchi_icf_pane_ParamLimits

0xf3b9,	// (0x00052420) ituss_keypad_pane_ParamLimits

0x85ba,	// (0x0004b621) ituss_sks_pane

0xf486,	// (0x000524ed) bg_icf_pane_ParamLimits

0x8553,	// (0x0004b5ba) icf_edit_indi_pane_ParamLimits

0x8553,	// (0x0004b5ba) icf_edit_indi_pane

0xf492,	// (0x000524f9) list_vkb_icf_pane_ParamLimits

0xf49e,	// (0x00052505) bg_icf_pane_cp01_ParamLimits

0x8562,	// (0x0004b5c9) icf_edit_indi_pane_cp01_ParamLimits

0x8562,	// (0x0004b5c9) icf_edit_indi_pane_cp01

0xf4b2,	// (0x00052519) vtchi_query_pane

0xb9e4,	// (0x0004ea4b) icf_edit_indi_pane_g1_ParamLimits

0xb9e4,	// (0x0004ea4b) icf_edit_indi_pane_g1

0x86f5,	// (0x0004b75c) icf_edit_indi_pane_g2_ParamLimits

0x86f5,	// (0x0004b75c) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00052f75) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00052f75) icf_edit_indi_pane_g

0x8704,	// (0x0004b76b) icf_edit_indi_pane_t1

0xf4e9,	// (0x00052550) bg_input_focus_pane_cp042

0xe028,	// (0x0005108f) vtchi_button_pane

0xf4f2,	// (0x00052559) vtchi_query_pane_t1

0xf500,	// (0x00052567) vtchi_query_pane_t2

0xf50e,	// (0x00052575) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00052f64) vtchi_query_pane_t

0xda5e,	// (0x00050ac5) bg_button_pane_cp13

0xf51c,	// (0x00052583) vtchi_button_pane_g1

0x86e2,	// (0x0004b749) ituss_sks_pane_g1

0x86ed,	// (0x0004b754) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00052f6b) ituss_sks_pane_g

0xf524,	// (0x0005258b) ituss_sks_pane_t1

0xf532,	// (0x00052599) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00052f70) ituss_sks_pane_t

0xb219,	// (0x0004e280) indicator_nsta_pane_cp_g1

0xb222,	// (0x0004e289) indicator_nsta_pane_cp_g2

0xb22a,	// (0x0004e291) indicator_nsta_pane_cp_g3

0xb232,	// (0x0004e299) indicator_nsta_pane_cp_g4

0xb23a,	// (0x0004e2a1) indicator_nsta_pane_cp_g5

0xb242,	// (0x0004e2a9) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00052b19) indicator_nsta_pane_cp_g

0xd974,	// (0x000509db) cell_graphic2_pane_t2_ParamLimits

0xd974,	// (0x000509db) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00052e26) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00052e26) cell_graphic2_pane_t

0xd9a1,	// (0x00050a08) cell_graphic2_control_pane_t1

0x68d7,	// (0x0004993e) signal_pane_g3_ParamLimits

0x68d7,	// (0x0004993e) signal_pane_g3

0x68e9,	// (0x00049950) signal_pane_g4_ParamLimits

0x68e9,	// (0x00049950) signal_pane_g4

0xf393,	// (0x000523fa) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf393,	// (0x000523fa) cell_ai5_widget_list_row_pane_t3

0xf453,	// (0x000524ba) cell_ituss_key_pane_t1_ParamLimits

0xf453,	// (0x000524ba) cell_ituss_key_pane_t1

0x922a,	// (0x0004c291) form_field_data_wide_pane_vc_t2_ParamLimits

0x922a,	// (0x0004c291) form_field_data_wide_pane_vc_t2

0x923e,	// (0x0004c2a5) form_field_data_wide_pane_vc_t3_ParamLimits

0x923e,	// (0x0004c2a5) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00052875) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00052875) form_field_data_wide_pane_vc_t

0xaeca,	// (0x0004df31) form_field_slider_wide_pane_vc_t3_ParamLimits

0xaeca,	// (0x0004df31) form_field_slider_wide_pane_vc_t3

0xafa0,	// (0x0004e007) form_field_popup_wide_pane_vc_t2_ParamLimits

0xafa0,	// (0x0004e007) form_field_popup_wide_pane_vc_t2

0xafb7,	// (0x0004e01e) form_field_popup_wide_pane_vc_t3_ParamLimits

0xafb7,	// (0x0004e01e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00052b08) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00052b08) form_field_popup_wide_pane_vc_t

0x8386,	// (0x0004b3ed) aid_fshwr2_btn_pane_ParamLimits

0x8392,	// (0x0004b3f9) aid_fshwr2_syb_pane_ParamLimits

0x839e,	// (0x0004b405) aid_fshwr2_txt_pane_ParamLimits

0x07eb,	// (0x00043852) fshwr2_bg_pane_ParamLimits

0x83aa,	// (0x0004b411) fshwr2_func_candi_pane_ParamLimits

0x83bd,	// (0x0004b424) fshwr2_hwr_syb_pane_ParamLimits

0x83cb,	// (0x0004b432) fshwr2_icf_pane_ParamLimits

0x7654,	// (0x0004a6bb) list_double_graphic_pane_vc_g4_ParamLimits

0x7654,	// (0x0004a6bb) list_double_graphic_pane_vc_g4

0x8619,	// (0x0004b680) cell_ituss_key_pane_g3_ParamLimits

0x8619,	// (0x0004b680) cell_ituss_key_pane_g3

0x86c1,	// (0x0004b728) cell_ituss_key_t5_ParamLimits

0x86c1,	// (0x0004b728) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
